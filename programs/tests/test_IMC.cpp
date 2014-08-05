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
    msg.setTimeStamp(0.7179210723182684);
    msg.setSource(33597U);
    msg.setSourceEntity(209U);
    msg.setDestination(35757U);
    msg.setDestinationEntity(157U);
    msg.state = 146U;
    msg.flags = 47U;
    msg.description.assign("PHIHUKQQYLIQHLDXOQTSDLAKKBWPTYCNWBOZDPUGMYIYMXORTIUPRJTCFPPDRQAOCDMNMRLGCQDGEVTJ");

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
    msg.setTimeStamp(0.8720763803213575);
    msg.setSource(31456U);
    msg.setSourceEntity(227U);
    msg.setDestination(2173U);
    msg.setDestinationEntity(60U);
    msg.state = 238U;
    msg.flags = 252U;
    msg.description.assign("LWBNRSIMNWJKTQIOHWIEXQVHRVWXJCFEKJUWMQEFOHGIMONIWUJRTDXWFGOEFEDZLLKPYXUPULKBNMJQRGSESKXMOHZEASBASPQ");

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
    msg.setTimeStamp(0.9008641691767979);
    msg.setSource(48266U);
    msg.setSourceEntity(100U);
    msg.setDestination(7354U);
    msg.setDestinationEntity(85U);
    msg.state = 60U;
    msg.flags = 131U;
    msg.description.assign("LDFPDACKUWDOZQWBTOMWZDGHMCZKZOSKGAGYQKOXGHAWTBREQLRVYRGNSCNHKCCEXARRKXLSISGYDHNRFQYHYMTSQJIQKAVESSVBOPWBJEBZNCCDAPXHKCPRKHBGJFLPAPSVWDMDRNLQBUTIZAXOPPYIRYMUJUSYVMQAWTXEZJYFZOFMHHWJEJJUNEBDGMLVTMOUAIJEUIUXQEUNHPVFTFLFCMXVGVKVUTLDBBQSOGL");

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
    msg.setTimeStamp(0.8444764928411015);
    msg.setSource(12926U);
    msg.setSourceEntity(89U);
    msg.setDestination(57644U);
    msg.setDestinationEntity(39U);

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
    msg.setTimeStamp(0.37827502437974236);
    msg.setSource(55806U);
    msg.setSourceEntity(174U);
    msg.setDestination(17158U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.8351202371190002);
    msg.setSource(54376U);
    msg.setSourceEntity(107U);
    msg.setDestination(23810U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.08824380052974745);
    msg.setSource(58702U);
    msg.setSourceEntity(12U);
    msg.setDestination(9621U);
    msg.setDestinationEntity(155U);
    msg.id = 251U;
    msg.label.assign("ZFGIYKGSJAVZBJLNRRBJXDDAYFZWUFGEOBRUFJKNGIPNZHQBMIEOSJPADBQJFLLYDBUAPGMYQRJARZVIIOQQHLSTWLSCSQKGDVJMCDNFKEGESKJZNCUTKYBXEOVUZEFOWTZTMOYVBWTSPELWSAXYTATR");
    msg.component.assign("TSYBQMXAQVNRUCQFUYOETZWEPVRXJEDYKISUPVFAGQTNXLICZIFRVEZCWBVOOFOHKGTTWDGGOPKQIOPMWEPUIPHOUKYSCTHUJBONNLUDWIHVSZYCLRLLPTQNUFPFNXJQORURKAFAZVEVNSNCECOGSCBWLJAIVDNBKDDWHZARGHXEXTZYIMGDKALPKCGBDBCJGKDFUEXQJPYGZYRHIZWRYNQMMFALQTJSLDXEKWZJA");
    msg.act_time = 24656U;
    msg.deact_time = 18404U;

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
    msg.setTimeStamp(0.4694277502071239);
    msg.setSource(36673U);
    msg.setSourceEntity(228U);
    msg.setDestination(46253U);
    msg.setDestinationEntity(102U);
    msg.id = 14U;
    msg.label.assign("SJXQDUUUGKASNHEUMMFZLPTKVTJELUHEWIBXYGJBNBIOFVDRKQRLIHUTGIJAVDAOECALLBCDAQKLJCCIEOXRWPJCZDRZGZPMVITGJGUNNMHPXWOHICKSASWUAQQQMYZOXYBYGYXXWOCCDZ");
    msg.component.assign("DKYFANFMSSTQKOVSSTNPHQORCHRWTPDNJMJKSQHOIJRZGBBERIEIYDZLFOZVKAUOKUFTXSHFDQIBFGICOOXYEPLVHAVAINGAWKKCUTYKMEIJGCFBQPDZBUQUYNTR");
    msg.act_time = 43790U;
    msg.deact_time = 33816U;

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
    msg.setTimeStamp(0.45434535585462876);
    msg.setSource(13083U);
    msg.setSourceEntity(27U);
    msg.setDestination(32980U);
    msg.setDestinationEntity(50U);
    msg.id = 144U;
    msg.label.assign("BSFZDJAAWXDYGSKKMUTCMVDRHFSETRGVKJIMPSLPWOKFYWQHJMWAIINNHXFQRJIUHTBRSGUZLGILJYJTZHBKPESKOJHVQZACEYISPEQGBLWHLW");
    msg.component.assign("FATENEOAKFHFXQWFYZPLDFUIDSHWAJQBDTTJJFYBMCRKPMKXQSZYXPWOSACUDNJEOGSBHYFCAHVHRXPEYEEOLKITCNKGWVBM");
    msg.act_time = 41916U;
    msg.deact_time = 28565U;

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
    msg.setTimeStamp(0.04192786790310332);
    msg.setSource(26889U);
    msg.setSourceEntity(244U);
    msg.setDestination(64651U);
    msg.setDestinationEntity(48U);
    msg.id = 17U;

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
    msg.setTimeStamp(0.049320427212362405);
    msg.setSource(6959U);
    msg.setSourceEntity(129U);
    msg.setDestination(15844U);
    msg.setDestinationEntity(248U);
    msg.id = 107U;

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
    msg.setTimeStamp(0.9219782545502979);
    msg.setSource(59866U);
    msg.setSourceEntity(53U);
    msg.setDestination(29453U);
    msg.setDestinationEntity(236U);
    msg.id = 176U;

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
    msg.setTimeStamp(0.6972493688062256);
    msg.setSource(10935U);
    msg.setSourceEntity(120U);
    msg.setDestination(29745U);
    msg.setDestinationEntity(63U);
    msg.op = 36U;
    msg.list.assign("NZADSSZXKBIFWAZKBDUVMQSIRFZNMZMKYWKYXBHVGWGBXFPLEVTJKFYJHMPTXWRIAEUMLKKUAWTTKCXAUFDLUXXVUFWFKLSIHPQACLJQEWCHCPUNAPSNLBOMIMHEJQ");

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
    msg.setTimeStamp(0.4718023617659466);
    msg.setSource(30362U);
    msg.setSourceEntity(183U);
    msg.setDestination(38219U);
    msg.setDestinationEntity(64U);
    msg.op = 64U;
    msg.list.assign("EDFPZMRYPORRLVTFIZAHNDHGDKOMKSBPQWZWAEOJPJDSXUNMEHATSXJMYPILUVUHMVQFGQBXLAOHIGCNTXJVKGFYNRPEQXODWSKULAOZRQYMOBIDOTUNMVWIQCYXPWSSGHCZFIGGKCSZPVYVANKQRSGWMSKLHCEVLQCDOACIAZMTNTUTTUJRXNWRNLKFIWTLWYGVKFZYFJQBCHEJRSMDVZFBBTULZHYHQBXFOXB");

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
    msg.setTimeStamp(0.4347706899103376);
    msg.setSource(42808U);
    msg.setSourceEntity(145U);
    msg.setDestination(41576U);
    msg.setDestinationEntity(103U);
    msg.op = 67U;
    msg.list.assign("KHSJFRYKXDZFDJRPPMUTZMGNOESIRFYFYJVDUOVTAMGZBIZXIQELRFYNIXRDOTCFIXQXOVQWBAUTRGMFIUFUMETUPWPPTLZOLKWWCJHLPQMVCAKVHCDCNCXGISKDGPJYZCWCPQXHNLAGQMOMKZEIJPDOHBMRQHIBMXCKEHBSBIHZNJWEAHGVRUOYHPXYLKSAADANVTEZZGSGQJBJLC");

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
    msg.setTimeStamp(0.23196900832494516);
    msg.setSource(4850U);
    msg.setSourceEntity(98U);
    msg.setDestination(49791U);
    msg.setDestinationEntity(211U);
    msg.op = 243U;

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
    msg.setTimeStamp(0.8493330527276689);
    msg.setSource(3089U);
    msg.setSourceEntity(246U);
    msg.setDestination(59586U);
    msg.setDestinationEntity(117U);
    msg.op = 65U;

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
    msg.setTimeStamp(0.6082658422953662);
    msg.setSource(60063U);
    msg.setSourceEntity(210U);
    msg.setDestination(37244U);
    msg.setDestinationEntity(55U);
    msg.op = 123U;

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
    msg.setTimeStamp(0.19598443422476597);
    msg.setSource(35431U);
    msg.setSourceEntity(37U);
    msg.setDestination(23013U);
    msg.setDestinationEntity(120U);
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
    msg.setTimeStamp(0.8026770039855917);
    msg.setSource(28816U);
    msg.setSourceEntity(34U);
    msg.setDestination(62385U);
    msg.setDestinationEntity(226U);
    msg.value = 210U;

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
    msg.setTimeStamp(0.3349981487609959);
    msg.setSource(45117U);
    msg.setSourceEntity(156U);
    msg.setDestination(46056U);
    msg.setDestinationEntity(73U);
    msg.value = 0U;

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
    msg.setTimeStamp(0.7073237162429873);
    msg.setSource(22835U);
    msg.setSourceEntity(161U);
    msg.setDestination(1525U);
    msg.setDestinationEntity(46U);
    msg.consumer.assign("LMZDZOBOXEYVCKWISGUGOWBWYSZXJUQUKRQYIRAGGUQDAKWZUTJCLXUVJMXMDMNAWDRCYTSJEIHIKSAGHKBNINWMEMXSOFWDVNKUNGCFIDPWCEVPLEXFDVQMLHNGQFPQFZMFTQHTPKPFOQCHPOENXCHRTSXAVWSKVOBYLLSYELIZONAAMSGIUAHEHJBGDO");
    msg.message_id = 13692U;

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
    msg.setTimeStamp(0.09923556286905211);
    msg.setSource(13306U);
    msg.setSourceEntity(39U);
    msg.setDestination(10792U);
    msg.setDestinationEntity(243U);
    msg.consumer.assign("SQWFOBZXOGAHDAZDXKELCGVWDNXLOQATTXFGUZFJGJEFEWTYRGTNEJMKESICPOWIDPCQWWELIKITXKZIJUSQCIYCGAXNHKIARMYOJTOZHRVXFILDDLXZMCBWUEWNFPEYYTGQUVMRTDGFHNKHYKODAAZRMKUMSTVBNPOQKXIWVYPKBHHSCYREUQRGJFFZBQBBTSPNMHNSQXORJDAVMCECZBVHJSARUJPVZOIWYFLNSV");
    msg.message_id = 39161U;

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
    msg.setTimeStamp(0.607008199416407);
    msg.setSource(48563U);
    msg.setSourceEntity(98U);
    msg.setDestination(20209U);
    msg.setDestinationEntity(224U);
    msg.consumer.assign("OYEPWUFMYLRBHRK");
    msg.message_id = 33349U;

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
    msg.setTimeStamp(0.9912946962743551);
    msg.setSource(65396U);
    msg.setSourceEntity(26U);
    msg.setDestination(2982U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.5396761569912362);
    msg.setSource(28695U);
    msg.setSourceEntity(101U);
    msg.setDestination(40816U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.026357111215333018);
    msg.setSource(63992U);
    msg.setSourceEntity(17U);
    msg.setDestination(46811U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.5198636349560726);
    msg.setSource(56346U);
    msg.setSourceEntity(127U);
    msg.setDestination(15733U);
    msg.setDestinationEntity(145U);
    msg.section.assign("XAVAGJDDONRPQKEUALQYKGINSQTSUTBD");
    msg.param.assign("XNWDCFONACMBWUJNXROYOGSNBTPJQJQDZFLRAMCIM");
    msg.value.assign("PFCXIOXZFMMHBWXNXBKGJUYITHSTIAXFKALRBSWMIHJRYLJWFESDOUQMALVSHFLOEPCSRDOWAGOKSEYNGJGQWCBYBGJZQOQXKZUDKZBPFHFYNLDOGEWMPMKUTPEBRPLSIRARYOSGNGSDUKWGYKDCWILNVTHHVIMQPNFKQZZBNVUACBUUMPIZPNXVOEYEBCYZXFGJQVNKQTCRYXDJJMDZOR");

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
    msg.setTimeStamp(0.04933212384649277);
    msg.setSource(57928U);
    msg.setSourceEntity(58U);
    msg.setDestination(49968U);
    msg.setDestinationEntity(123U);
    msg.section.assign("OHANVYIVBBZOSQCGCQHNEEYLTMWCRBTKOAZYBHURGINDANLWFUEICPTWMSRBYMEOFQKKLMZSXHDYMPWKRPDFJOFGWBWKWSYKDQVOHBSEIMXIXDIO");
    msg.param.assign("BJEHPBOIULWODEVXRLUOJLNDHFKNGPOYHKXFMVSHVFIPDJYOZOIMMTFXUYSHPEGFRKJSEQVFYUVRCZKCSTDGWENDKQHOGZQLSLGSIJFKKI");
    msg.value.assign("ANJDCMGNDRDZZRKCGSWFOQMHFFHMEETSAQKGUIAVLOOPCZTBTEVAMZUKNROGIBUHGMOVEYIQTYXLUQWCSXJSPDJVLBYDPSFKIHOCBVIUXZDMXRFWKROZASUXXLJCPLUXIMJEFWCSTRHHYYPKTQVYPYENTLBQNADUJDAQEBEFMLCZVZHTXBZAH");

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
    msg.setTimeStamp(0.06132360962149874);
    msg.setSource(35241U);
    msg.setSourceEntity(12U);
    msg.setDestination(28462U);
    msg.setDestinationEntity(13U);
    msg.section.assign("REIXUYUBWYKLALTWQZCPZZDMPHUNZNRUEFTYYSN");
    msg.param.assign("UJBWEVPLCBDHVHZVQTIPFMETUTBIODMGAHWZUGIYVPJSKZQYGNXHFXMQSOKSDTUPINNYGKQNJORCRAFYLXLNRXNSYHSBCCJCKEQFLFUWJHRIESJVOVEWZONRTJMRGIUPCTDPQFJRHMXIYZVPQWFHMYSZEMW");
    msg.value.assign("GOWENDRVNGSOOBKAKGMGUPMYBAUCKEZQNIBGJCSZEVRJDMOPTURFNQQVAHVCHSNVEKBCPFGXRDYKWDZZDKQCO");

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
    msg.setTimeStamp(0.9249780203579492);
    msg.setSource(10686U);
    msg.setSourceEntity(107U);
    msg.setDestination(25589U);
    msg.setDestinationEntity(65U);
    msg.op = 66U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("INKVCXYYBDSEAFFLUAYCXUFHERNMZXHXVXCFGONRWIAKXETZNZEERJFXQGGCSSMBOJQILAIWVUOLSJOQAAVUBJTPTWFDTWMQPHCIOIBEEOQZKPGONGVFRJZVAWCRHEBIKNVTOWTMKZNUNHDYKDSBMDIDQRPCYNWGKUTLKDJSBRRVMZWDMKRQJMXPLBOHFMTXNGHQYA");
    tmp_msg_0.param.assign("YGTEFCYJYFBZNPKYDJTCSFPDSWWVVFIA");
    tmp_msg_0.value.assign("MZTKPLSEWOMCYNDAEWUNLKUPDPLIVYJMKSRCUUTYXFCNQAGXPZQBQNKHGWOYWXCWZMBNTECOTGXDQEKFIALGEWVAMHQWIVXFMRFYZQVSOXUZPOPTXHZRFZDMSSKADXCNKGBNVISHHLYRFIWSTHDDBBCRJABYDJSIRKELOAXERGLLJEYA");
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
    msg.setTimeStamp(0.6955367020128479);
    msg.setSource(2042U);
    msg.setSourceEntity(111U);
    msg.setDestination(2404U);
    msg.setDestinationEntity(239U);
    msg.op = 138U;

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
    msg.setTimeStamp(0.7507927515921047);
    msg.setSource(17360U);
    msg.setSourceEntity(141U);
    msg.setDestination(25448U);
    msg.setDestinationEntity(45U);
    msg.op = 190U;

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
    msg.setTimeStamp(0.5844835661402147);
    msg.setSource(5793U);
    msg.setSourceEntity(173U);
    msg.setDestination(5184U);
    msg.setDestinationEntity(236U);
    msg.op = 47U;

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
    msg.setTimeStamp(0.12042026099042302);
    msg.setSource(3985U);
    msg.setSourceEntity(48U);
    msg.setDestination(41193U);
    msg.setDestinationEntity(253U);
    msg.op = 216U;

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
    msg.setTimeStamp(0.8653212870754465);
    msg.setSource(44918U);
    msg.setSourceEntity(36U);
    msg.setDestination(46092U);
    msg.setDestinationEntity(248U);
    msg.op = 47U;

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
    msg.setTimeStamp(0.6794159843952382);
    msg.setSource(1812U);
    msg.setSourceEntity(240U);
    msg.setDestination(58070U);
    msg.setDestinationEntity(152U);
    msg.total_steps = 79U;
    msg.step_number = 51U;
    msg.step.assign("TTWDZUXQEYEWFNILJLCGJUTXQKSMKHTSNCVNZBRZ");
    msg.flags = 59U;

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
    msg.setTimeStamp(0.8928322744528951);
    msg.setSource(43421U);
    msg.setSourceEntity(33U);
    msg.setDestination(13042U);
    msg.setDestinationEntity(178U);
    msg.total_steps = 188U;
    msg.step_number = 78U;
    msg.step.assign("HPDKIPZSRRSUZWLYJBOCCVRIOPSKTPXSGDYNOQVKHICSZKRDAQAJBEBJYUVZLJCWXTVDMWEMIZUZBVSJMMYKCOBXATCCKTEAECLIGQINTUPTFRHTYOHLAPQENJXFPEQLJYXQFRLJNVBSMFXUOVNEGQFMFTOAWRQNPYNGNXJGCHDEULMROLUGWISDRXVUMHIHRYHSPWDBCPB");
    msg.flags = 187U;

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
    msg.setTimeStamp(0.1364755700970911);
    msg.setSource(40135U);
    msg.setSourceEntity(111U);
    msg.setDestination(60457U);
    msg.setDestinationEntity(140U);
    msg.total_steps = 102U;
    msg.step_number = 153U;
    msg.step.assign("JCFKIYSHCCRYRXYXVDETBKXODFWABFBIBOBVYPCDUUHADSAIQVNXGUZCQAKWLJUCGVSZZMCWSWLNGBWBOLHEEUJIMZBRJVNLQVPKZZVOMHRANTFFLXTMVQDQKWQDNPPRWUUYFKACJRQPOCYGEXHLYDMKJESTLTISPRQAORWNHTGSUPICBNNGAHDNIOHQJLXKEMR");
    msg.flags = 146U;

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
    msg.setTimeStamp(0.7957756447158344);
    msg.setSource(48898U);
    msg.setSourceEntity(250U);
    msg.setDestination(28252U);
    msg.setDestinationEntity(35U);
    msg.state = 73U;
    msg.error.assign("NECSHKGHEPBQYILZSNQOQNLHABEZIBTITNJXKJ");

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
    msg.setTimeStamp(0.9606155239214447);
    msg.setSource(47121U);
    msg.setSourceEntity(23U);
    msg.setDestination(7100U);
    msg.setDestinationEntity(26U);
    msg.state = 108U;
    msg.error.assign("DRDWSWNJRPPMQBENMHYDKEMCCFPIJAMWVWCRULPVYLHNXOJTFTKHLSYYLHOJOCAWOIKJIBOUTCTVPWNFGUKMKBKZFNYKFEMPSXAUMIWU");

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
    msg.setTimeStamp(0.816077176055841);
    msg.setSource(28092U);
    msg.setSourceEntity(85U);
    msg.setDestination(15300U);
    msg.setDestinationEntity(1U);
    msg.state = 129U;
    msg.error.assign("HJNBRMNROGYDZCEBXBFMACFVQSKGCZRM");

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
    msg.setTimeStamp(0.14378468229433827);
    msg.setSource(23272U);
    msg.setSourceEntity(151U);
    msg.setDestination(5113U);
    msg.setDestinationEntity(219U);

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
    msg.setTimeStamp(0.4082547810631577);
    msg.setSource(63549U);
    msg.setSourceEntity(164U);
    msg.setDestination(39146U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.7323589956490939);
    msg.setSource(4853U);
    msg.setSourceEntity(128U);
    msg.setDestination(6864U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.6676244148596029);
    msg.setSource(1982U);
    msg.setSourceEntity(22U);
    msg.setDestination(42332U);
    msg.setDestinationEntity(104U);
    msg.op = 160U;
    msg.speed_min = 0.19554728681930833;
    msg.speed_max = 0.9759914955447531;
    msg.long_accel = 0.8545707517207484;
    msg.alt_max_msl = 0.12691922126831134;
    msg.dive_fraction_max = 0.38805718846784;
    msg.climb_fraction_max = 0.943962822239909;
    msg.bank_max = 0.8555558253883017;
    msg.p_max = 0.8483061880521315;
    msg.pitch_min = 0.952886552645625;
    msg.pitch_max = 0.6746831547055593;
    msg.q_max = 0.4598541110625832;
    msg.g_min = 0.4863078293929838;
    msg.g_max = 0.07926068661275765;
    msg.g_lat_max = 0.27195473285697147;
    msg.rpm_min = 0.15433741100350207;
    msg.rpm_max = 0.8520728130745565;
    msg.rpm_rate_max = 0.5987166825475905;

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
    msg.setTimeStamp(0.9663177364290945);
    msg.setSource(58896U);
    msg.setSourceEntity(212U);
    msg.setDestination(15567U);
    msg.setDestinationEntity(108U);
    msg.op = 168U;
    msg.speed_min = 0.515259254787086;
    msg.speed_max = 0.5223408020927022;
    msg.long_accel = 0.07095950933942297;
    msg.alt_max_msl = 0.13891610769812912;
    msg.dive_fraction_max = 0.8359891485360676;
    msg.climb_fraction_max = 0.9347673188309282;
    msg.bank_max = 0.9199869981665902;
    msg.p_max = 0.0748349957725577;
    msg.pitch_min = 0.5375319079522634;
    msg.pitch_max = 0.15310462385549084;
    msg.q_max = 0.011128728142257183;
    msg.g_min = 0.6741165500984077;
    msg.g_max = 0.09230975670954089;
    msg.g_lat_max = 0.3988004458988589;
    msg.rpm_min = 0.16250842212286842;
    msg.rpm_max = 0.7476362084304005;
    msg.rpm_rate_max = 0.2773021564398864;

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
    msg.setTimeStamp(0.32022899797048876);
    msg.setSource(8887U);
    msg.setSourceEntity(210U);
    msg.setDestination(56952U);
    msg.setDestinationEntity(23U);
    msg.op = 34U;
    msg.speed_min = 0.8120628738369868;
    msg.speed_max = 0.07099529998762466;
    msg.long_accel = 0.9870440332578537;
    msg.alt_max_msl = 0.6359186115725931;
    msg.dive_fraction_max = 0.5931910718512418;
    msg.climb_fraction_max = 0.17698853012615323;
    msg.bank_max = 0.09995087022491889;
    msg.p_max = 0.3965765486108902;
    msg.pitch_min = 0.8293003409694353;
    msg.pitch_max = 0.26876009108958177;
    msg.q_max = 0.254109506399566;
    msg.g_min = 0.06447192140356195;
    msg.g_max = 0.7235494047612672;
    msg.g_lat_max = 0.06485001266767987;
    msg.rpm_min = 0.46524314685977075;
    msg.rpm_max = 0.6934761100775554;
    msg.rpm_rate_max = 0.9203874060040209;

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
    msg.setTimeStamp(0.6934240178605497);
    msg.setSource(1317U);
    msg.setSourceEntity(65U);
    msg.setDestination(11101U);
    msg.setDestinationEntity(74U);
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.47767116696180767;
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
    msg.setTimeStamp(0.4165137124736168);
    msg.setSource(21401U);
    msg.setSourceEntity(174U);
    msg.setDestination(13557U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.06634318762920832);
    msg.setSource(28978U);
    msg.setSourceEntity(235U);
    msg.setDestination(48383U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.21027121851400232);
    msg.setSource(23139U);
    msg.setSourceEntity(241U);
    msg.setDestination(29538U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.8543470021170348;
    msg.lon = 0.6973995069371701;
    msg.height = 0.6611206407189353;
    msg.x = 0.5225214609266656;
    msg.y = 0.5182797162565744;
    msg.z = 0.2573102455838123;
    msg.phi = 0.6520495321432858;
    msg.theta = 0.12488596038339916;
    msg.psi = 0.42828398414417956;
    msg.u = 0.5046208240381035;
    msg.v = 0.4775018139824283;
    msg.w = 0.6461885277522885;
    msg.p = 0.901894406013355;
    msg.q = 0.643152377817513;
    msg.r = 0.4485913970617198;
    msg.svx = 0.4855933759804495;
    msg.svy = 0.5621518845070195;
    msg.svz = 0.9425870466091183;

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
    msg.setTimeStamp(0.9733067675184351);
    msg.setSource(64974U);
    msg.setSourceEntity(229U);
    msg.setDestination(45271U);
    msg.setDestinationEntity(95U);
    msg.lat = 0.9299783194755463;
    msg.lon = 0.6495082816644048;
    msg.height = 0.9570869745642238;
    msg.x = 0.6990316700622516;
    msg.y = 0.5921964497186835;
    msg.z = 0.6289190802274597;
    msg.phi = 0.7171664735172415;
    msg.theta = 0.3817167839318496;
    msg.psi = 0.8502512892350236;
    msg.u = 0.3237914431740446;
    msg.v = 0.4548846557837358;
    msg.w = 0.7445017355385111;
    msg.p = 0.7140104373192555;
    msg.q = 0.32502352700508463;
    msg.r = 0.7498577656678941;
    msg.svx = 0.29375531510514785;
    msg.svy = 0.4618456430199275;
    msg.svz = 0.8334122994012834;

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
    msg.setTimeStamp(0.6045135283972312);
    msg.setSource(52389U);
    msg.setSourceEntity(205U);
    msg.setDestination(49041U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.9192931581621537;
    msg.lon = 0.7536860919199709;
    msg.height = 0.29767988969812664;
    msg.x = 0.5343153117057073;
    msg.y = 0.3708635218738552;
    msg.z = 0.10392014711917708;
    msg.phi = 0.7437760460767547;
    msg.theta = 0.1128701179545063;
    msg.psi = 0.7979874515526993;
    msg.u = 0.7518778008964777;
    msg.v = 0.2967606277424938;
    msg.w = 0.35495028835797593;
    msg.p = 0.873979534986299;
    msg.q = 0.842923972646839;
    msg.r = 0.12260154657344313;
    msg.svx = 0.5595540033967571;
    msg.svy = 0.27493027937506853;
    msg.svz = 0.39032631293050046;

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
    msg.setTimeStamp(0.8807846601459417);
    msg.setSource(26578U);
    msg.setSourceEntity(131U);
    msg.setDestination(13039U);
    msg.setDestinationEntity(187U);
    msg.op = 110U;
    msg.entities.assign("XKIWMGMVFQJCCRRXTFDBZDSPNTBXTOTSWQVDGUPPWTIEESBFCNSEFEWFVQYOQQMKBPMOHOPOMBNELLHXSIXSIQVITLNYNZULJOKTJVIUCCXFDAZIJHOVPAWACGVGVJZNZNIZ");

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
    msg.setTimeStamp(0.9976623053794318);
    msg.setSource(20641U);
    msg.setSourceEntity(159U);
    msg.setDestination(51939U);
    msg.setDestinationEntity(83U);
    msg.op = 145U;
    msg.entities.assign("NTLIRZZETFAPCCHOZLCQAEASHCTSDQWEMAVWNMCBODNXLMWOLEDIHVTUJMGYTEPTJZOISMUEKERZBBPSGTPSQXXWIZZQPINSTYMDCDOTIOEKBAYCNWLDFHSAMDRGFVYRUOYJIQBNYCRYKVPFROWCLRZIBVSIUUPGFAJEKTWQNUVMFWBREKVNHOHPHXVJFJQZGUUXDVCJNAXQGHKDMBYHOPGXVLGGXWKFLRNQFFJWZHYJYPJXBKLQLABR");

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
    msg.setTimeStamp(0.5636972765780744);
    msg.setSource(47494U);
    msg.setSourceEntity(103U);
    msg.setDestination(30351U);
    msg.setDestinationEntity(75U);
    msg.op = 254U;
    msg.entities.assign("VATPHNUGORJTWEL");

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
    msg.setTimeStamp(0.7040273770913091);
    msg.setSource(11365U);
    msg.setSourceEntity(176U);
    msg.setDestination(63745U);
    msg.setDestinationEntity(15U);
    msg.type = 220U;
    msg.speed = 23166U;
    const char tmp_msg_0[] = {78, 117, -13, 24, -34, 32, 95, -95, -126, -124, 8, 88, -57, -71, 30, 116, 89, -90, 31, -99, -111, 28, 45, -113};
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
    msg.setTimeStamp(0.6052333244165743);
    msg.setSource(20138U);
    msg.setSourceEntity(198U);
    msg.setDestination(26542U);
    msg.setDestinationEntity(31U);
    msg.type = 46U;
    msg.speed = 13435U;
    const char tmp_msg_0[] = {49, -21, -67, -61, 91, -14, -40, 88, 13, 83, 13, -77, 88, -106, -113, -110, -28, -37, -27, -100, 117, -42, -95, 84, 81, -107, -93, 15, -46, 59, 59, 76, -98, 53, 30, -21, 108, -54, -54, -127, 126, 101, -65, -59, -61, -16, -99, -73, -64, 7, -106, 2, 14, -115, 115, 55, -126, -78, 42, 46, -4, -17, -80, 34, -128, 106, 78, 101, 50, -127, -25, 77, 115, 15, 71, -66, -98, -116, -40, 78, 11, -23, -111, -122, -104, -8, 123, 26, -46, 81, -111, 106, 46, -118, 67, 34, -87, 52, -55, -17, 5, -29};
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
    msg.setTimeStamp(0.28673062508131086);
    msg.setSource(9350U);
    msg.setSourceEntity(158U);
    msg.setDestination(29631U);
    msg.setDestinationEntity(171U);
    msg.type = 254U;
    msg.speed = 33445U;
    const char tmp_msg_0[] = {-55, -29, -95, 112, 10, -97, -25, 25, -15, 66, -65, -111, 16, -11, -50, -15, 26, 108, -114, 106, 15, -85, -18, 109, 22, 62, 21, 24, -80, -128, -76, 62, 48, -99, -45, -48, -92, 90, -34, 66, 113, -93, -29, -56, 28, 12, 107, -14, 17, -23, -75, 62, 35, -29, 1, -66, 95, 49, -40, 109, -35, 87, 7, 105, -25, 95, 15, -29, 5, 47, -29, 30, 83, -126, 101, -37, 19, -42, -38, 106, 84, -34, -111, -77, 83, -44, 88, 83, 17, 45, 106, -110, -1, 30, 59, 101, 105, -112, -55, -112, -121, 68, -1, -37, 0, 92, -44, 18, 46, -23, 95, 116, 108, 88, -19, -20, -28, -19, -85, 122, -92, 122, -71, 82, 41, -59, -125, -11, -11, -108, -8, -76, -68, -59, -40, -102, 9, 92, 0, -115, 43, -38, -63, 108, -47, 3, -99, 39, 2, -101, 93, -99, -19, -65, 86, -113, 16, -123, -108, 19, 21, 123, 115, -87, 58, 98, 90, 44, -8, 84, -27, 28, 52, -92, 99, 26, -26, -43, -75, 80, 43, 28, -80, 78, -89, -87, 116, -35, 78, -86, 41, -13, 124, 55, 68, -28, -80, -19, -42, -90, 104, 27, -126, -52, 3, 125, 64, 126, 27, 47, 34, -4, -27, 121, 40, -37, 66, 108, 1, -98, 34, 59, 80, -119, -62, -11, -24, -102, 28, -48, 91, 1, -7};
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
    msg.setTimeStamp(0.03607752913801798);
    msg.setSource(41881U);
    msg.setSourceEntity(80U);
    msg.setDestination(38581U);
    msg.setDestinationEntity(88U);
    msg.op = 29U;
    msg.tas2acc_pgain = 0.7242461341045523;
    msg.bank2p_pgain = 0.03872939237778927;

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
    msg.setTimeStamp(0.7859874897455176);
    msg.setSource(30770U);
    msg.setSourceEntity(175U);
    msg.setDestination(1563U);
    msg.setDestinationEntity(86U);
    msg.op = 124U;
    msg.tas2acc_pgain = 0.6032543883082835;
    msg.bank2p_pgain = 0.5481019009074065;

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
    msg.setTimeStamp(0.9982763897170284);
    msg.setSource(49948U);
    msg.setSourceEntity(25U);
    msg.setDestination(24512U);
    msg.setDestinationEntity(32U);
    msg.op = 145U;
    msg.tas2acc_pgain = 0.4298460118287204;
    msg.bank2p_pgain = 0.07509924110169641;

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
    msg.setTimeStamp(0.41714617768980444);
    msg.setSource(16514U);
    msg.setSourceEntity(185U);
    msg.setDestination(60431U);
    msg.setDestinationEntity(109U);
    msg.available = 4206192384U;
    msg.value = 71U;

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
    msg.setTimeStamp(0.7375940251980818);
    msg.setSource(49427U);
    msg.setSourceEntity(79U);
    msg.setDestination(44315U);
    msg.setDestinationEntity(186U);
    msg.available = 2721559498U;
    msg.value = 77U;

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
    msg.setTimeStamp(0.6200565228868405);
    msg.setSource(19016U);
    msg.setSourceEntity(231U);
    msg.setDestination(63599U);
    msg.setDestinationEntity(25U);
    msg.available = 1966041500U;
    msg.value = 51U;

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
    msg.setTimeStamp(0.30948693466349286);
    msg.setSource(421U);
    msg.setSourceEntity(244U);
    msg.setDestination(37193U);
    msg.setDestinationEntity(7U);
    msg.op = 239U;
    msg.snapshot.assign("KHJWNMASOBJXGJBDJYMEJICLXQHAFLWBHXTFDAKYEVUYMVIPYLDQPTXOSKESMDIVUSPIIFMZMFHHYFWKXZYOAOMGNSAGRGFRCPAPGVDDWCGLAIMVUPTEZTBJQXQFNXCTLPWNGHXWNUZQCGBXWRDMBBQZYXEROSROVWFZIQZURIWNVSRYATZELNRLWMNKKHPKYUZEJUSAHBPO");
    IMC::Salinity tmp_msg_0;
    tmp_msg_0.value = 0.9613757444204079;
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
    msg.setTimeStamp(0.11230398761143956);
    msg.setSource(55704U);
    msg.setSourceEntity(130U);
    msg.setDestination(45698U);
    msg.setDestinationEntity(85U);
    msg.op = 250U;
    msg.snapshot.assign("EJPWBAXRCAOTVQRRMRBAIAKFZHJSWJHNXCDSFTZMEOVYMPBTCBCHVEQUTZINZGPWAJLKPFPXXURGCVDMSPWCQTBMYJJZDOAPEXTHWZEFDFFQMKHLQCSPOERKDVWYPNKZJUNWLVUZLJLQDGVX");
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DRQLGSJRHVJTBUDUDQHGZSAJTDMFZMUPXOTWHOUHOLQVXAJSJTGFSIMIYNPEXUSDZXPWNTRRILUENSKGKHBDWRSVKRET");
    tmp_msg_0.lat = 0.924241555447855;
    tmp_msg_0.lon = 0.7684087020638913;
    tmp_msg_0.depth = 0.3051110368448813;
    tmp_msg_0.query_channel = 60U;
    tmp_msg_0.reply_channel = 221U;
    tmp_msg_0.transponder_delay = 86U;
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
    msg.setTimeStamp(0.8999570126236369);
    msg.setSource(62803U);
    msg.setSourceEntity(241U);
    msg.setDestination(3444U);
    msg.setDestinationEntity(226U);
    msg.op = 39U;
    msg.snapshot.assign("KJDONMCBRIKSQYLCYZRIZFDVDAGAVPOWJFHKFYWMLEZTRTUYYMXNCIMZSLXLRVNFHDFUFBRSIQJUV");
    IMC::Brake tmp_msg_0;
    tmp_msg_0.op = 125U;
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
    msg.setTimeStamp(0.3916115242482622);
    msg.setSource(17910U);
    msg.setSourceEntity(65U);
    msg.setDestination(33186U);
    msg.setDestinationEntity(85U);
    msg.op = 212U;
    msg.name.assign("FESTDJIQCCDMZLRQXMZJTSLGOEENGGGWYMUQZKLFQQANBETVV");

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
    msg.setTimeStamp(0.12696653771727462);
    msg.setSource(57633U);
    msg.setSourceEntity(133U);
    msg.setDestination(54426U);
    msg.setDestinationEntity(79U);
    msg.op = 202U;
    msg.name.assign("HOMLLIXRXMKDQDIDVPQBKJSGRBXZXHEBUPMHESYAEUJQMTGOPEFBMAGJ");

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
    msg.setTimeStamp(0.7145508032879727);
    msg.setSource(21733U);
    msg.setSourceEntity(182U);
    msg.setDestination(10470U);
    msg.setDestinationEntity(104U);
    msg.op = 58U;
    msg.name.assign("MVFICDKUOBACBDBKRZLRMLOTPZTUJHCGOAFAHVMMCRIZYTCLQJDWVIYYQHXVLXCUANEFNJDRYQGAKFSELNTW");

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
    msg.setTimeStamp(0.22943770499234528);
    msg.setSource(34304U);
    msg.setSourceEntity(134U);
    msg.setDestination(28235U);
    msg.setDestinationEntity(70U);
    msg.type = 56U;
    msg.htime = 0.3904633244251655;
    msg.context.assign("QHRKZLMXRHSPZNXDECJVVPUAEOLMCAKVBRUHNUBEYCFFRVBPZYANLEWCTZKYYAOGIVWUGWXWQNMAMSJNHBABQBXEJDNSSPHJRDWGZDOJZIDCETUQQJKSSMXDKTDUGLAKQXVEHPKTTIPQDHYLEHOVCUEGIPYUUFYGKWFVIMJHIFJGQRXDOOXCZIZXCAAIQBRTQOWFTIUZM");
    msg.text.assign("OYAYPLJXOATWGZNBCKJZUMRXWHNUBQKSIFTEIZQBYEDNMYASDOLGKYUJOHVOVDJLFIVFWZQQLDWZENVCXVXFFPQLMWGPKEWAEQKTRFNHVHTBJPRCDDRQESOPBVMBINRSHKBLNMAUKPRSXKYJGHJTLQMXGDKDHETTUSISIUSHCGZKPCYESFW");

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
    msg.setTimeStamp(0.7115301917834357);
    msg.setSource(35073U);
    msg.setSourceEntity(96U);
    msg.setDestination(17627U);
    msg.setDestinationEntity(137U);
    msg.type = 135U;
    msg.htime = 0.579731685242635;
    msg.context.assign("ETOKTCUYFLZEFYPXGMZDIYHXSMIQWKTRVWDBILQITIGULHGQGKJFRMEDRWMQRFYJWOVNIMSJODEHTQCSJPRPAFVNLLKLUZNZMESUJK");
    msg.text.assign("MNLNWKBUKTRCMQIUYZDWEGQJPPYRBQWJCPAEKTIBSSUIYQCAKYEXTUGZHMHBJRZFDXVRPGMVPNPOOAFYJSKXOLDDDUQCNQEYVKEZKLGMXUOPWEIXKBLBNYIWXHPQTSABRCJOGZFIWAVZROLDAGHYCKJYUDFNBMR");

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
    msg.setTimeStamp(0.39910401761611836);
    msg.setSource(62819U);
    msg.setSourceEntity(169U);
    msg.setDestination(48814U);
    msg.setDestinationEntity(89U);
    msg.type = 208U;
    msg.htime = 0.06657557947442672;
    msg.context.assign("FJCHSHEZTABKLKYQARWXZTFDLBLLZTYRPDEVCRPVCGKHBSJCEJVYUBIZNKQHXGFZJUKLIETGIWQJKYWWOUFGHGENNOYUWYQWKFOXVAJZKDTCVNXSERTPGRUOMBHXNPOWATDRBYIMPFNOSNDMLRPQGCPBYUXXVDZVSSXJBCFIUZJIGCMATIOIEQUMJFDMZXLPTMLMEPBQM");
    msg.text.assign("HRHOTHYQCVAPEPKZBREGEDJUOUTGOPNWWBMBJBDTRPOXJVVPUTEGTHCARFVDBNLBCUFYDIMVCIUCEZHKSQDYNMRUNOSRMORMNXGVHMBZZZDYZKPKALWXNIIFWYTZUQXWMQNYNYTKVPAATFJVWXQJJXOSBXQOKESNCXLEUPYNWMLISDWQQILZYUFPHMOIAEDBGLGRAFSLKHAWLZCVCRHJCX");

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
    msg.setTimeStamp(0.929791901493933);
    msg.setSource(40323U);
    msg.setSourceEntity(108U);
    msg.setDestination(42835U);
    msg.setDestinationEntity(88U);
    msg.command = 204U;
    msg.htime = 0.18836616381471527;

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
    msg.setTimeStamp(0.9997380400546811);
    msg.setSource(26856U);
    msg.setSourceEntity(156U);
    msg.setDestination(43520U);
    msg.setDestinationEntity(195U);
    msg.command = 231U;
    msg.htime = 0.9275367556656595;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 27U;
    tmp_msg_0.htime = 0.4023432270666185;
    tmp_msg_0.context.assign("PABYKIXNFQRNIFYDXQGZWALDIHBXJQPSVOFDODLVKGUPRADVLXFQAMYZWCLI");
    tmp_msg_0.text.assign("FEXCIISNYLLXKFUUBOGECHAYAYQPWFBQUJRBCHDDJRQVB");
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
    msg.setTimeStamp(0.07516331196577386);
    msg.setSource(5744U);
    msg.setSourceEntity(191U);
    msg.setDestination(9482U);
    msg.setDestinationEntity(65U);
    msg.command = 128U;
    msg.htime = 0.18135150522604404;

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
    msg.setTimeStamp(0.9846752364889612);
    msg.setSource(46792U);
    msg.setSourceEntity(148U);
    msg.setDestination(30598U);
    msg.setDestinationEntity(245U);
    msg.op = 50U;
    msg.file.assign("YFFMROPEXXVJLJWZYBUMOKUWFTSGMOYQZOPNWNMSSCKOQNGVKIALQDBQRADRXJWCYBCJHMGNVIAUUNTCHWFSCAXORXZXLI");

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
    msg.setTimeStamp(0.808712476348393);
    msg.setSource(16686U);
    msg.setSourceEntity(87U);
    msg.setDestination(214U);
    msg.setDestinationEntity(203U);
    msg.op = 137U;
    msg.file.assign("LFNPDKGKMAYWNECGYOOTUIPKBIQXRTXJCVBMQCEZUIWDSGTGRL");

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
    msg.setTimeStamp(0.26626965067237474);
    msg.setSource(35426U);
    msg.setSourceEntity(128U);
    msg.setDestination(57721U);
    msg.setDestinationEntity(35U);
    msg.op = 52U;
    msg.file.assign("VKACUEDRCHVTFPLAHCSJIUYFJKRRGMZVUYLZGQKEDWHUYRKWNUCPYJHSNNLCYUYBZXLLITAAPOCRZXTNCKIFTPGSBJBJDMTPGEWQNJALFZZDHYDBIORMTKRRMHESIZJYEQZQGAMBPNXUQYBG");

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
    msg.setTimeStamp(0.8180777603489279);
    msg.setSource(12385U);
    msg.setSourceEntity(134U);
    msg.setDestination(59211U);
    msg.setDestinationEntity(128U);
    msg.op = 249U;
    msg.clock = 0.34109134712720524;
    msg.tz = -23;

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
    msg.setTimeStamp(0.6152815154279795);
    msg.setSource(63803U);
    msg.setSourceEntity(2U);
    msg.setDestination(57275U);
    msg.setDestinationEntity(195U);
    msg.op = 208U;
    msg.clock = 0.11047815907147807;
    msg.tz = -72;

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
    msg.setTimeStamp(0.1576551431337767);
    msg.setSource(52923U);
    msg.setSourceEntity(160U);
    msg.setDestination(29551U);
    msg.setDestinationEntity(53U);
    msg.op = 11U;
    msg.clock = 0.5994809850602046;
    msg.tz = 23;

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
    msg.setTimeStamp(0.946553373180391);
    msg.setSource(5541U);
    msg.setSourceEntity(94U);
    msg.setDestination(59356U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.8212012894755881);
    msg.setSource(3808U);
    msg.setSourceEntity(183U);
    msg.setDestination(24075U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.008929630689687551);
    msg.setSource(26799U);
    msg.setSourceEntity(252U);
    msg.setDestination(59283U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.3922756058706176);
    msg.setSource(44429U);
    msg.setSourceEntity(34U);
    msg.setDestination(35002U);
    msg.setDestinationEntity(200U);
    msg.sys_name.assign("YKOHVSCTYKOUKUGGZFNNPWHOLLLJIGFWPXBQIUCJGSBUJUYCOQXPTFGAPIGOXJDXQKWAUXBUPYRAMEBHSYAFERPFHAAHNRMTGLEDZZVGNVQQVIMXFQURIWCBHTJCONETPZDEJKVLGKKROZFOCZRSQLSUPJJMBMVHCSYLOMQOLRYHYXCJEBFNTCVMBMATIZKQTTDWVPDEIHZWTECLWWYXGRNVDYMBSBXKFRKAJIDWPSVARADENZNSQNDMLFE");
    msg.sys_type = 100U;
    msg.owner = 55324U;
    msg.lat = 0.2795253716050953;
    msg.lon = 0.3558523838644362;
    msg.height = 0.2553945363840082;
    msg.services.assign("RRCMQBZZTVUKDMMGINETIPLLAYZQFZCFIMMHXHPQJCOGEHGNGOCKQYFSAVRB");

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
    msg.setTimeStamp(0.6985460659166278);
    msg.setSource(9078U);
    msg.setSourceEntity(105U);
    msg.setDestination(23042U);
    msg.setDestinationEntity(97U);
    msg.sys_name.assign("WOIWJUSDRYYMTMIYACKRFDBZXZJGM");
    msg.sys_type = 94U;
    msg.owner = 21398U;
    msg.lat = 0.8361312918106506;
    msg.lon = 0.9182106440033957;
    msg.height = 0.6661598140453894;
    msg.services.assign("YKXYFPYFQSZCGKFNZLNWXXDVVDAVWYKPGAJJLDEZFNTLOBFQGTQUFIMOURAGWCMSVTJLXLHHBUXDUEMDZYNEQZRIPNMOSYWKYYWBDMTFISDAOFWGGNNIKHKHYJVPUJAXIICRWARCISCDKEHUADWZHLTPNSZHAPOZLBGSBVGHFOBPPMTXIWCRN");

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
    msg.setTimeStamp(0.42699326446372954);
    msg.setSource(1888U);
    msg.setSourceEntity(74U);
    msg.setDestination(49829U);
    msg.setDestinationEntity(56U);
    msg.sys_name.assign("GXZAFSKPMOKJSXUSXZKRNBNCLNQIKDITMVFWMLHQBNTTPPEIRKKTWEANBBZVCUCMCRODTJW");
    msg.sys_type = 103U;
    msg.owner = 51770U;
    msg.lat = 0.8512003746697488;
    msg.lon = 0.8413399035654574;
    msg.height = 0.7431898900157332;
    msg.services.assign("KGJICEORAGTDGGMZNUGDAMKDFYCJRMPWETBEJDIFVATVHKINWFPHWSVVDXTYMOWXTCOPSJPPLIBJEDXWPUCFRLKHUFTFJWTS");

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
    msg.setTimeStamp(0.4575804720808182);
    msg.setSource(18130U);
    msg.setSourceEntity(67U);
    msg.setDestination(56239U);
    msg.setDestinationEntity(145U);
    msg.service.assign("IPRTFUCAKXIMIQBUVNPVDWIHZWRGAXSIGXOIMYYKOHEQCNBVNHDTNJMYUUSDYTBAEZDEGGEUMKRBKAVYRFNPOCKWBHJYIRXJQVGLMJZHMBWZPFKJCP");
    msg.service_type = 248U;

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
    msg.setTimeStamp(0.2812236744101213);
    msg.setSource(58071U);
    msg.setSourceEntity(198U);
    msg.setDestination(36867U);
    msg.setDestinationEntity(176U);
    msg.service.assign("GPEVLONIRQYMVHECHOHGRDBHRWBLSPSGCBSDGPTOXQNMCVSKFWCVRCOKSRZPKGAUERQMJKBFDASOCYNGJRFOEDJGWIWYZBFDHDSPHKYQFEFMTHCLGXXIYICWQLJJZRWTLAISBOZMRGXVZNNXLGHJXBVZBTQDPWOKXBFKTJEMUCYVWIXUKXYTAQAXHTTUVVAZMQUQZPULNPMDUOBDLYLNPRUSMJFKFJLYPJMEIVIQKWNE");
    msg.service_type = 237U;

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
    msg.setTimeStamp(0.723437197411306);
    msg.setSource(30142U);
    msg.setSourceEntity(154U);
    msg.setDestination(39645U);
    msg.setDestinationEntity(100U);
    msg.service.assign("WURCJGCCNYXOOWJDJBYQFQOZSKTXUDBFNGLALSDOOQLNPNLPNZVNCMEUUFZAVLZFSJQBELRRRCMNXCKUZQZMEVJWXDXDYQPOTVTJHKGRAAIJUVKGGLLJIEBYDIIIYVPNPEVRCQOZPSIGEKKXWLGOHTZVDCMBHHPKAATLDXPFHYHCEOGVBIRMMSZDXJABTWNCXQYSAAMIFFEEYFZYHETAPHSUTJWMWMRHYSSUGBHWWVMPKNTIRIBRWO");
    msg.service_type = 61U;

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
    msg.setTimeStamp(0.4213522992411277);
    msg.setSource(31417U);
    msg.setSourceEntity(109U);
    msg.setDestination(45838U);
    msg.setDestinationEntity(194U);
    msg.value = 0.23412314484117647;

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
    msg.setTimeStamp(0.15902083841023773);
    msg.setSource(60906U);
    msg.setSourceEntity(63U);
    msg.setDestination(58555U);
    msg.setDestinationEntity(52U);
    msg.value = 0.26264918518022684;

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
    msg.setTimeStamp(0.6639851658545507);
    msg.setSource(28159U);
    msg.setSourceEntity(3U);
    msg.setDestination(38244U);
    msg.setDestinationEntity(127U);
    msg.value = 0.1851921113983972;

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
    msg.setTimeStamp(0.7939584244707812);
    msg.setSource(31825U);
    msg.setSourceEntity(62U);
    msg.setDestination(18878U);
    msg.setDestinationEntity(100U);
    msg.value = 0.32904702388808116;

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
    msg.setTimeStamp(0.7609511130220556);
    msg.setSource(52577U);
    msg.setSourceEntity(74U);
    msg.setDestination(9815U);
    msg.setDestinationEntity(53U);
    msg.value = 0.45311966051368746;

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
    msg.setTimeStamp(0.3797570261904134);
    msg.setSource(23510U);
    msg.setSourceEntity(12U);
    msg.setDestination(29238U);
    msg.setDestinationEntity(162U);
    msg.value = 0.20417399141432868;

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
    msg.setTimeStamp(0.618738847123208);
    msg.setSource(44760U);
    msg.setSourceEntity(77U);
    msg.setDestination(28024U);
    msg.setDestinationEntity(242U);
    msg.value = 0.5450222238182478;

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
    msg.setTimeStamp(0.6465225730224905);
    msg.setSource(32762U);
    msg.setSourceEntity(17U);
    msg.setDestination(58219U);
    msg.setDestinationEntity(247U);
    msg.value = 0.13643207922825584;

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
    msg.setTimeStamp(0.010539659553123415);
    msg.setSource(857U);
    msg.setSourceEntity(33U);
    msg.setDestination(52222U);
    msg.setDestinationEntity(0U);
    msg.value = 0.27322505938907027;

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
    msg.setTimeStamp(0.9827729978793478);
    msg.setSource(60420U);
    msg.setSourceEntity(76U);
    msg.setDestination(33337U);
    msg.setDestinationEntity(141U);
    msg.number.assign("PYWVSENNGPQBBYOKHNAZHYVYHGTZPJBRYQA");
    msg.timeout = 53154U;
    msg.contents.assign("EBBNSHAHCIPEPXGTOUJFCOTVZPUOOYYCLMBNPIUUNCAMIUIXYAZDEOWRYLKYLOIFDKVZMEHGGQZDNVQLWUSRJFYOGPCFDLHWH");

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
    msg.setTimeStamp(0.7011911437870578);
    msg.setSource(5565U);
    msg.setSourceEntity(7U);
    msg.setDestination(49381U);
    msg.setDestinationEntity(171U);
    msg.number.assign("PHLVSDOAUBQLWJDOQVHARMIVKWXAJMTFDUAIZNSDNQRHHWGYPDELCPZZGXRCYNRJZHPFVZJUFJBGYBXIOZEXYLSQWFBPCOLKZKYXOUSDFQKLEGTGVYIGRHVTSOJCELNUTWARFVIFEXILUUVXNKBECDNRNNTTTRSNUDUWHTGBVPIQGUSEOQAMCHWVFHKXYOEAGEPZJFMKXZRMKTBYYGPCIBMLWTYSALJJKCQSCR");
    msg.timeout = 27694U;
    msg.contents.assign("FHUPSRTXNKPOMXYDALLLDSKIPSBTUWFZXGFZUNJIMVEARCNXGLOJCNGBYZZFWVIDJCKKFXFWRWAQXYRUEMITEHHSEULVTAQHKZZMVDHHYRNVUDGOVAMBECIQQMWGFATACOSJMVZTQFRMMGPRZOAQJSNDOOZWPTGHHGAPBNWNYDLKPZSYXUEUPNAVTDJTXYBPEBHXKYXKFKSYWVSJIRLINBQQGDQCJLRWUCRBQHOCIFWJMOIYLIE");

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
    msg.setTimeStamp(0.3569073713494527);
    msg.setSource(29962U);
    msg.setSourceEntity(247U);
    msg.setDestination(39638U);
    msg.setDestinationEntity(67U);
    msg.number.assign("RAMHUQMVPLDYNDBTUENQHYQGOZWXGRVTWTXUKRPGJSLJMJJDUKPNUYVDCEAQDPZNQIABSBDHKLFLFMLHIXEJAVVBBRBLFMWSOTUTCQCUSZWNYNRDWCVGFJXGYPJICODKRZER");
    msg.timeout = 4448U;
    msg.contents.assign("BKEZGEGTBIZAKLOAGKFYFQBDVBHCEXGHSLDRIAQZJQPFKMIXXTNHWBMYQ");

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
    msg.setTimeStamp(0.2418657662881707);
    msg.setSource(20911U);
    msg.setSourceEntity(65U);
    msg.setDestination(45271U);
    msg.setDestinationEntity(126U);
    msg.seq = 1250622295U;
    msg.destination.assign("BZUKPQVFEMELSGGPFRCTSZHIXAWAGWGYLMVAWURPAUVTEHDLTFKTAXZRIXJFXGHBUSCNVBTRGCSTKFGIHZJTEJJEMNAOMCBZQRDSWGODDNBPVSVPOBWBNVJCHMLDUPFIEKYMCQWSTUJYIIZOEFSZRWZYPASNVKFDTVYUBDQNWXHAORRISMOLPOLPUCYEZHLDAQLTOXNKMQNOICRMWYPKYEJGWJHA");
    msg.timeout = 9429U;
    const char tmp_msg_0[] = {20, 64, -120, 32, 23, -46, -70, -65, 26, -103, 67, 60, -42, 75, 110, -49, 68, -37, -33, -92, -18, -113, -75, -71, 81, -123, 120, -87, 18, 26, -11, -76, -3, -108, -14, 110, -15, 18, 61, -119, 115, -57, -32, -66, 126, 109, 36, -18, 24, 43, 104};
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
    msg.setTimeStamp(0.3167242068327357);
    msg.setSource(49823U);
    msg.setSourceEntity(150U);
    msg.setDestination(17375U);
    msg.setDestinationEntity(244U);
    msg.seq = 2023767276U;
    msg.destination.assign("XSPMJOIPNPWVFMMGDMKQVGWDZROFXAXEUGIVXBHBLTCDBONUASKMWKSDFZFRYDDKFTUHNCCXNVCWZQICPSGTTPBXHRANENIYYCOVQOECKNKQZYCLEINVGHQFCAOOGJLUTPBMYLIXKIBNYAJVJZQQPTSSHDXGLUUUPTJYYEAWCIRABHGOSLHPYQBELWUIJDRAEHPIXJBENHTKLMJZFLWMVSQEFUFVRTJSRSWZY");
    msg.timeout = 16215U;
    const char tmp_msg_0[] = {20, -20, 12, 110, 39, -61, -116, -95, -78, -7, 54, 112, 57, 14, 89, -51, 115, 103, 7, 22, 28, -42, -94, 10, 77, 111, 58, 51, -4, -2, 61, 70, -73, -79, -85, -112, -44, 51, -112, -8, -83, 51, -29, -52, 62, -27, -11, -77, 39, -101, -115, 67, -120, 93, -6, 1, -88, 35, 79, -121, -102, 99, 20, -77, -110, 115, 5, -44, 94, 121, 12, 59, 39, 47, -29, -3, -116, -17, -109, -23, -5, -14, 61, -93, 18, -72, 45, -68, -89, -44, 61, 124, 43, 109, -22, -75, 5, 13, -8, 43, 115, 40, 23, 15, -105, -73, 28, 49, -121, -61, 47, 123, -56, -121, 39, 99, 109, 46, 41, -69, 109, -14, -73, -104, -28, -4, -24, -126, -63, -50, 124, 70, 41, 75, 82, -118, 16, -41, 54, 90, 122, -107, -79, 57, -71, -93, 31, -79, -7, 45, 15, -62, 44, 63, -45, 0, -6, -8, -66, 50, 124, -69, 46, 122, 54, 26, -60, -43, 34, -4, 113, 90, 66, 46, 116, 94, -50, 48, -80, -102, -97, -15, 51, 8, -6, -46, -87, -104, 62, -12, 44, 52, -121, 42, -15, -123, 93, -79, -31, 71, -91, -123, -118, -22, 29, 29};
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
    msg.setTimeStamp(0.45487891074421627);
    msg.setSource(5634U);
    msg.setSourceEntity(175U);
    msg.setDestination(40134U);
    msg.setDestinationEntity(37U);
    msg.seq = 2871499783U;
    msg.destination.assign("BIRBUTRDXLIDO");
    msg.timeout = 51786U;
    const char tmp_msg_0[] = {2, -3, -86, 26, 77, -14, 102, 74, 25, 76, -120, 51, -93, -78, -41, -43, 6, -54, 89, -41, 9, 42, -109, 41, -101, 14, -3, -76, -120, -19, -97, -106, 74, 18, 11, -22, -69, 108, 30, 18, 52, 109, -87, 33, -124, 78, -66, -13, -21, -63, -63, 122, 109, 36, 126, 92, -21, -81, -7, -69, -59, 7, -6, -109, 4, 64, 116, -61, 115, 104, 26, -29, -48, -119, -85, 10, 10, -123, 27, 39, -126, -9, 117, -86, -16, -65, -66, 112, 82, 108, -45, 97, 17, 24, -16, -83, 43, -118, -102, 85, 105, 88, -46, 33, -111, 96, 102, -36, -29, 88, 19, -71, 84, -71, 16, -123, -70, -19, -7, 11, 0, 100, -92, -4, -111, 58};
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
    msg.setTimeStamp(0.13503663010317168);
    msg.setSource(59383U);
    msg.setSourceEntity(123U);
    msg.setDestination(36944U);
    msg.setDestinationEntity(169U);
    msg.source.assign("UVXSCTCCSIYGFPYTEBPLVGQIUFTTFAUEBNPZEJZJGPGEJWHRWA");
    const char tmp_msg_0[] = {11, 13, 106, 66, 58, -76, 61, 80, -101, -84, 29, -67, 22, 30, -91, 37, 7, -69, -67, -31, 43, -51, -56, 98, 108, 20, 93, -19, 1, -29, -31, -82, -17, -65, 10, 28, 95, 118, 24, 125, -87, -65, 80, 30, 122, -78, 8, -2, 40, -35, -47, -119, 52, 47, 11, -36, -98, -128, -98, 107, 85, 46, 108, -6, -30, -107, 40, -56, 50, 110, 113, -120, 92, 39, -124, 65, 115, -36, 7, -117, -48, -33, -42, 77, 81, -73, -2, 67, 0, -120, 15, -102, -116, -123, -34, 59, -123, 26, 4, 37, -25, 115, 123, -66, 43, -98, -52, 102, 82, -17, 43, -77, 77, -66, -60, -36, 89, 6, 79, -62, -18, 113, 4, 110, 56, 107, -49, -126, -120, 47, 11, -24, 115, 5, -55, -55, 100, -98, -109, -76, -14, -108, -11, -125, -76, 70, -2, -95, -62, 113, 84, 83, -59, -122, -48, -118, 91, -32, 114, 1, 43, 78, 59, -23, -36, -71, -12, -2, 112, -123, -96, 96, -104, 75, -46, 117, 3, -3, -72, -6, -21, 41, 41, -1, -4};
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
    msg.setTimeStamp(0.332944604207672);
    msg.setSource(34914U);
    msg.setSourceEntity(168U);
    msg.setDestination(40203U);
    msg.setDestinationEntity(123U);
    msg.source.assign("VTLIKPCYJLJERSXRPGRLLKYZYEBMPVEBQSPWHQWTHYGFUKHSDPSOZAYDKRNDNRYJNPDSUKIHWMGIAXNWHXTLYUIMBJICKRGGTATAGEMPDZEKZQTUDVCIAZQZGWGUNSQKRGZAVEEQHDJEBYFIBVCRBKWFFPZJCOXJFLVNIPJKRNBMLXAUVZFVTFFVHJPHXIF");
    const char tmp_msg_0[] = {52, 90, -105, 34, -86, 103, -31, 23, -86, 50, -111, -70, -89, -128, 39, -100, 21, -67, -13, 104, 85, -119, -86, 63, 76, 7, -58, 45, 0, -75, 41, 112, -114, 53, 20, 12, 19, -3, 70, -38, -88, -98, 48, 33, 77, -49, -67, -61, -99, 113, 23, -103, -118, 79, -126, -89, 83, 72, -76, -62, -106, 51, -110, 85, -39, -28, 88, 47, 114, -97, 86, -64, 123, 12, -59, 66, -110, -64, 115, 12, 63, 44, -87, -11, -37, -54, -41, -51, -29, 82, 102, 82, 21, -27, 79, 60, -125, 46, 21, 82, -68, -13, -123, 122, 26, 75, 20, -11, 113, 57, 27, -92, -87, 3, 45, -38, 29, -30, -103, 13, 106, -42, 30, -24, 93, -94, -7, 5, -1, 117, -17, -116, 71, -13, -17, -117, -60, -14, 70, -24, 55, 76, 52, 105, -73, -114, 36, -5, -2, -20, -63};
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
    msg.setTimeStamp(0.9318252725801365);
    msg.setSource(22257U);
    msg.setSourceEntity(204U);
    msg.setDestination(59478U);
    msg.setDestinationEntity(166U);
    msg.source.assign("YAXEDDYANCXWLZVTRSXKYFPEGOEPCPQYCAMAWOPFQNHQABLTUKRZTJGAQEDRZVWCRKRKTMUTNXGDDGVVUSAYHGGVMKEFUOSBYLNMDXPPVKNZZGNNULJUMSESWXOIVHILTYRHJZLUIWRQFOXBFWBNBWCUOPRLIYHDQJNIZIJHHNMCKVTIGWAKTEQCRJSIHXMEOOOLWZSYUEJOPCSLYZTTIW");
    const char tmp_msg_0[] = {56, -54, 67, -3, 113, 71, 119, 49, -81, -120, 0, -5, 37, 112, 69, -75, -57, -125, 71, 125, -111, -50, -114, -110, -11, 87, -79, 107, 36, -6, -66, 34, 49, 117, 104, -42, 28, 110, -49, 68, 80, -23, 56, 98, -75, -77, 57, -86, -10, -115, -80, -52, -33, -14, -78, 31, 121, -64, 40, -108, -25, 94, 117, 112, 56, -118, -34, -76, 123, -1, -24, -48, -58, -36, -108, -66, -103, 69, -22, 29, 43, 13, 112, -25, -111, -72, -65, 61, 4, -62, 98, -100, -79, -42, 12, -6, 7, -20, 39, 3, 65, -108, 42, -4, 99, 40, 28, 26, -16, -48};
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
    msg.setTimeStamp(0.8469389386143458);
    msg.setSource(62081U);
    msg.setSourceEntity(114U);
    msg.setDestination(53414U);
    msg.setDestinationEntity(225U);
    msg.seq = 2286609093U;
    msg.state = 30U;
    msg.error.assign("QOTHIPZNZGEVTCULWQVJNRATAJCWOIFHJJLKXKHGUYWMGCOODZQPTRPKXFNWNDXUMLVWMK");

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
    msg.setTimeStamp(0.6286612109397424);
    msg.setSource(32514U);
    msg.setSourceEntity(252U);
    msg.setDestination(15046U);
    msg.setDestinationEntity(224U);
    msg.seq = 2174794909U;
    msg.state = 31U;
    msg.error.assign("GDEMMZGTVNCTMEQVCUAORUUNVBJHAAJOSVZJJRLBOVNPPXRBTLZDPAQLWDUQABETZNNXCWSMLYIO");

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
    msg.setTimeStamp(0.42454055935474255);
    msg.setSource(3842U);
    msg.setSourceEntity(208U);
    msg.setDestination(23524U);
    msg.setDestinationEntity(154U);
    msg.seq = 1757257534U;
    msg.state = 90U;
    msg.error.assign("DMNUSBAEZMQUVGPIMVOZQASJYUXGZHHXDZIBDRRQHKGFBVXUGNIRNWPRCLKPMPTLLDVUWYURFKLQBXYHWXZPFDWXNEYISCGTTUNIETGBMWECWGSSFUQOTVJOETCMPJSOEQDDZGJHBOVJLQHKJFYSXZP");

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
    msg.setTimeStamp(0.11541919131460565);
    msg.setSource(9836U);
    msg.setSourceEntity(161U);
    msg.setDestination(63555U);
    msg.setDestinationEntity(250U);
    msg.origin.assign("MXTYCMXTOHMEXWUZJCFTVEVSGJSKCLAFATNHZRBAPXCPXIPQURKMYXSCKFSHAQRADQQCBUIDALZHFTKMAJORGMCXVVOTUHXEUYJTJKSEPDLIUGBEUGBOPLHVNFUUWKNBNDWINJYEMQUFAORHSYWNVSNIKAHFQG");
    msg.text.assign("HMWUVYBSEITYICLZUUNVCNNIEKYTAKBELWVXYNTDKGDOGHMIQQTZJQMYPQURRDAQBSWLJODVODVAKZCLHDIHGYWAPZZCWEDLJRNVRUNHIOLGBMXKACHLHDMKRXEOKKTFGGWRFSGYARSXJRMQFAPJXAOWYIZRQTYFOHLXJEHQVTIWPBXVSZNEYDJPSCPFUXPKEQJGZZUKDMITSVFOCBEUPJJTLBMBBMUIGXNZPSFNHTXOCFQCL");

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
    msg.setTimeStamp(0.2683448267361376);
    msg.setSource(55173U);
    msg.setSourceEntity(84U);
    msg.setDestination(33821U);
    msg.setDestinationEntity(119U);
    msg.origin.assign("SMXYMRGIOBHOPUCRHTSJQFDMQKSULGAOGUQKEPRWADTKTQPPPWFSJIWIPAFGIIOUNMEVNBFUYGBZZVMPXFZBHNEMXJMWTXSQMWCACLCFUUEWDYVGNTYFUXXKAXABRCQGR");
    msg.text.assign("SKULJBDNBDEAOGCEASOHCWRZSLFBTDPLVRWTFBHUKSCUBWNDLXPFJAKLHIDMFUHUZOETMBONLTEFTPERSOGJQRCSVTJQWCKKJKOHLXYLONRUVIIZXYEZPXUAEAQXNNVEUVJACQBMVGDPKYKIYZGYOZFYCCXARNVGZJPUHRRFDMXSXYZOTIUF");

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
    msg.setTimeStamp(0.322216258275679);
    msg.setSource(6150U);
    msg.setSourceEntity(127U);
    msg.setDestination(18433U);
    msg.setDestinationEntity(253U);
    msg.origin.assign("HPSGFIJCPMTZFJIGXEGEKIHDONVZAUIMAWXPTZXD");
    msg.text.assign("CXCDYBNUNKTAHPIJPKZMZAYCZARVVQCLPNKGKUYCQYHTIIXWHTZENMWLGVIHKFWPVJMJWXTXSBLBUANEXHLZMFJXRQQYUJOGIXCSAGYKWKHYIZOEJO");

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
    msg.setTimeStamp(0.3751846726375976);
    msg.setSource(31663U);
    msg.setSourceEntity(242U);
    msg.setDestination(33562U);
    msg.setDestinationEntity(22U);
    msg.origin.assign("KHPGKYVYRZDOJBOLRJFHQFMVJONNYMMUKNSTMHBWASSNXUEJWOTMLPJWBCLDAISZVGFTHICZYXJCRTFNLJQQXZIKCZJLQ");
    msg.htime = 0.8722806456704857;
    msg.lat = 0.0005372714219257224;
    msg.lon = 0.827775452311321;
    const char tmp_msg_0[] = {68, 114, -111, 116, -49, -64, 22, 46, -95, -123, 74, 45, 62, -97, -36, -87, 123, 86, 79, -14, 119, -46, -85, 32, 10, -57, 9, -19, 23, -49, -67, 34, -68, 71, -85, 35, 63, 14, 96, 93, 44, 109, 17, -60, -22, -121, 16, -123, -124, -43, -113, -92, 20, -28, 108, 76, 35, -60, -39, 82, 86, 16, -109, 38, 35, 113, 109, -125, -8, 10, 22, 29, -30, -105, 77, -8, 113, 122, 77, 104, -67, 118, -34, 45, 9, 24, 106, 116, -104, -3, 109, 114, 69, -68, 70, -68, 39, -111, -94, 20, 67, 31, 58, -2, -3, 99, 55, 52, 87, -1, 113, 115, 92, -118, 20, 29, 43, -124, 25, 70, 112, 0, 0, 60, -8, 52, -57, -105, 40, -46, 95, 94, 17, 73, -71, 83, -115, 26, 98, 18, 82, -47, -16, 62, 52, 35, 77, -85, 93, -43, -53, 98, 124, -77, 5, -65, -87, -92, 7, 85, 60, -128, 120, 31, 118, 6, -75, 71, -66, -48, 37, -123, 59, -49, 37, 52, -38, 28, -123, 70, -35, 98, 109, 93, 97, 17, -91, 25, 113, 100, 28, 72, 18, -74, 68, 105, 106, -22, -61, 87, -6, 108, -3, -79, 83, -109, -106, 58, 109, 86, 62, 92, -25, -5, 14, -10, 99, -115, 119, 114, -118, -71, -116, -94, 59, 57, 47, -105, 71, 65, 8};
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
    msg.setTimeStamp(0.48090650864717777);
    msg.setSource(42605U);
    msg.setSourceEntity(204U);
    msg.setDestination(48273U);
    msg.setDestinationEntity(237U);
    msg.origin.assign("WYMQFJZMCYTGELUVXHKTVIVXYPKZHXIIJMYBAXIMSKLYJISIPNPTQNRCGDJUANBYCIJBQLRLAEOAKPJFBHOHEGPWZDEXANEGJSTBFVWCMJRODMFMWFXCNAONOHUBQQNZGWKREVWPVOEUZHCEZKVQNVDDOEKOWSXGARGUFPBKDZHRHQPWAYDOXKTRDVUZFTCZYLIMHFLPVMLWNCPIYFSZAQHXKRTNIDUCSYTSQB");
    msg.htime = 0.4354535491491257;
    msg.lat = 0.7256674827864851;
    msg.lon = 0.7364306242185085;
    const char tmp_msg_0[] = {-54, 55, -120, 21, 41, 3, -62, 32, -40, -68, -44, 56, 9, -45, -8, -32, 6, -80, -112, -21, 24, -57, -28, 108, -1, 52, -74, 65, 77, -32, -95, -70, 18, -33, -48, -80, 20, -127, 0, 123, -108, -78, 25, 66, 117, -25, 66, -109, -102, 91, 96, -68, 120, 92, -55, -52, 48, -108, 5, 71, 117, -58, 52, 4, 99, -106, -94, 87, -36, 124, 28, 36, -10, 72, -63, 24, -98, -73, -49, -30, -70, -62, -69, 109, -63, -76, -14, 62, -75, 49, -9, 43, -45, -127, 13, 105, -48, 100, -21, 124, -69, 103, 122, -35, 33, -39, 41, -35, 109, 67, 68, 80, 56, -114, -99, 105, -41, -21, -121, -113, -99, -83, -84, 37, -56, 125, -122, 115, -42, 43, -67, 46, -55, -123, 76, -19, -82, 25, -1, 94, 109, 92, 66, -100, -52, 91, 94, 99, 4, -96, -119, 52, 106, -61, 51, 83, 109, -20, 98, -110, 47, -19, -16, 4, -102, 73, 63, -13, 4, -74, -24, -66, 9, -25, 40, -52, -44, -60, -44, -79, -64, -80, -87, -5, 33, -106, -47, 78, -79, -115, -121, 42, -86, 38, -111, -28, -71, 1, -34, 26, -104, -31, -10, 103, 40, 44, 55, 71, -121, 3, -96, -122, 94, 31, -48, -101, -38, -55, -116, -107, -93, 123, 3, -112, 72, -45, -36, -15};
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
    msg.setTimeStamp(0.9615107741190665);
    msg.setSource(35265U);
    msg.setSourceEntity(177U);
    msg.setDestination(14971U);
    msg.setDestinationEntity(173U);
    msg.origin.assign("OSAJSVVQSETIFXUXEFITCZBXUJGHNSAXJIYLPVQXRKPLQHBHEEYAMMULCRQCOTNNEOZGCWVYFWVHJATESWNRYPDKGALHOO");
    msg.htime = 0.7706832892471683;
    msg.lat = 0.29668399838737014;
    msg.lon = 0.8160833477446908;
    const char tmp_msg_0[] = {64, -67, -77, 110, -96, -46, 10, 95, 41, 119, -52, -106, 20, -61, 121, 126, -35, -99, 48, 118, -84, 9, -76, 105, 22, 15, 125, 87, -37, 47, -89, -121, 70, 107, -103, 39, -59, 65, -115, 112, -23};
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
    msg.setTimeStamp(0.23610133783098142);
    msg.setSource(21431U);
    msg.setSourceEntity(166U);
    msg.setDestination(28516U);
    msg.setDestinationEntity(186U);
    msg.req_id = 52507U;
    msg.ttl = 64732U;
    msg.destination.assign("KDAOCYZDDDJEOTGXOBJNYPNWLTZRALVBYWIKBYILGQNXQTYQSRDHUUIZUJQEURSWDRTDMTOVZCNCSYXJHSRJVBIXFKEKWAAGUZGPCZSCHXWKCWEFHWFKRMFPITUQBDEXNOVVCGDMUNILBSOIAFABOEGLFNGVSAXHZSWHYXJYXNKZPPQCOBYOUSRXMAWCMIGQLOPKRKTJFULRMSHFFWPEJ");
    const char tmp_msg_0[] = {-6, -7, -59, 96, -107, -23, -80, 103, -49, -48, -4, -62, -125, -111, 47, -114, -97, -111, 106, 59, -5, 38, 68, 43, -124, -111, 86, 56, -94, -127, -35, 106, -82, -15, -48, -24, 87, 67, 34, -3, -22, 13, -45, 91, 52, -37, -118, -27, 17, -85, 3, 24, -91, -43, -55, 118, 16, 96, 104, -46, -36, 87, -88, 92, 23, -111, -51, -109, 12, 108, 69, 0, -110, 78, 56, 2, 3, 62};
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
    msg.setTimeStamp(0.4886479474863551);
    msg.setSource(64998U);
    msg.setSourceEntity(168U);
    msg.setDestination(24786U);
    msg.setDestinationEntity(237U);
    msg.req_id = 54016U;
    msg.ttl = 29909U;
    msg.destination.assign("BEZXGRAJMXTPXRQWNUGTVMHPOVSVNUWGCEAKMPSESARLDCSNFOGOSJHAFFBFWZAHTGWPUBHLHDOITJLFQBDHKCCAUGCBMNXQOPYUDCLNKJPDSXWKDFBHMJNIOEDTHBMRZCQVYQJLVKXDSZTWZZKKIEJD");
    const char tmp_msg_0[] = {-66, -93, -2, -111, 21, 117, 54, -86, 42, 61, -2, 25, 37, -9};
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
    msg.setTimeStamp(0.4132428197184056);
    msg.setSource(58269U);
    msg.setSourceEntity(171U);
    msg.setDestination(25605U);
    msg.setDestinationEntity(32U);
    msg.req_id = 42140U;
    msg.ttl = 22972U;
    msg.destination.assign("BYXYNQDWUAUAUTTZCNHVNHWUGPEGDRTJIXWETXLDOANEHBSODWKNDSGXKALCGUZZZCAKMPZJTMUTJRDDYBDUHPPQKZMVOXDXFFGBHJCIXGEDFASVZIWKRAJRVF");
    const char tmp_msg_0[] = {93, 11, -98, 100, -80, -81, -52, 99, 86, 87, 73, 102, -28, 55, 77, -37, 77, 62, -53, -127, -20, 109, -35, -41, 33, 91, 33, -72, -75, 21, -77, -84, -23, 121, 70, 102, -126, 38, 80, -113, -81, 62, 79, -4, -93, -35, 77, -104, -3, -89, 18, -9, 95, -32, 36, 72, 18, -37, -56, 68, 83, 120, 53, 108, 98, -71, 86, 114, -62, -87, -60, 45, -106, 18, -90, -19, -66, 58, 44, -124, 126, 103, 94, -30, -6, -90, 54, -107, -77, 26, -71, 87, 2, -26, 104, 103, 6, 28, -73, 52, -113, -40, 99, -5, 108, -23, 16, -61, 118, 0, -92, 3, 80, -30, -31, -70, 113, -68, 60, -119, 37, -111, -37, -79, 17, -12, -109, -33, -96, 77, 8, 45, -27, -74, 83, -103, 118, -36, 25, -91, 81, 76, -105, -87, 59, -55, -32, 104, -10, 124, -89, -98, 22, -12, 118, -72, 56, 44, -19, -27, -94, -51, 28, -123, 58, -2, -47, 29, -125, 111, 21, -64, 124, -30, 34, 43, -59, -106, -119, -36, 43, 59, -111, -99, 36, 55, -60, -106, -85, 15, -84, -70, -106, 88, 99, 110, -99, 51, -66, 40, 77, -105, -16, 115, 58, 111, -96, -29, -7, 56, 124, 72, 77, -62, 20, -66, -99, 115, -123, 47, 115, -87, 82, 96, -66, 114, 25, -118, -120, 93, -6, 45, 114, 68, 93, -76, 54};
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
    msg.setTimeStamp(0.4409433804808359);
    msg.setSource(56947U);
    msg.setSourceEntity(208U);
    msg.setDestination(191U);
    msg.setDestinationEntity(202U);
    msg.req_id = 40046U;
    msg.status = 114U;
    msg.text.assign("GQZBUMNDNTLHPWHDPOSMLHOZDRBUJUMKKJXFBZAIKIGQMUTWRECCZNIMQIWNKCSJKOYBCNFXPXAJVYTGUHOGCJFVPUYXERELKTZMQRJSJUHFHAUIKKNDKYIISGBPEQHPPWFYVSASMFARYBQELDYHNTTOEQQWGWHZLLUTAZLACNCRGBLVIPURWBGCVOGVCPWXXABFYXDVBLZPQJRSZJCIXJVMDZXN");

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
    msg.setTimeStamp(0.1857221464688068);
    msg.setSource(20717U);
    msg.setSourceEntity(128U);
    msg.setDestination(21143U);
    msg.setDestinationEntity(149U);
    msg.req_id = 54990U;
    msg.status = 46U;
    msg.text.assign("XHCMNOLFEHTJJSRXGONWRCXSRVSKCWMYQUKTTIZODQFHMDF");

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
    msg.setTimeStamp(0.839256846660523);
    msg.setSource(44474U);
    msg.setSourceEntity(234U);
    msg.setDestination(49514U);
    msg.setDestinationEntity(117U);
    msg.req_id = 38352U;
    msg.status = 70U;
    msg.text.assign("EYZRNHOODZAJXSOFMPKQOIBFMVUBWHPEYPSMQVNXEATHJVP");

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
    msg.setTimeStamp(0.7095299143524453);
    msg.setSource(24959U);
    msg.setSourceEntity(122U);
    msg.setDestination(46231U);
    msg.setDestinationEntity(185U);
    msg.group_name.assign("JWATBASKYGPUILNFUECNDZWQWHPGCUWTIYWCEKVYKNENMTIJHGDCKGLGNKZSASDDKDOYTLOBXZBULQBFNNOFQFTZSYJPBHHMIPAOCEHMNFDHFIIAVEVJSGRLBYCOCGLCUEMBAFZXKWBAUAMMSESXVPJQEJJRDRMZQPDIYWLXGVXTZWTOPMRJADUIZXXQKZEJUKBIFXTRSLW");
    msg.links = 4157669136U;

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
    msg.setTimeStamp(0.3816179277572471);
    msg.setSource(19478U);
    msg.setSourceEntity(183U);
    msg.setDestination(7538U);
    msg.setDestinationEntity(245U);
    msg.group_name.assign("SGLVDTZLBAFFDHSJNVWQLGYPZFLARLNTOKFCBYPVMCKQDISIKCDNEXCNIGEANDPXMQWUEOQFCDIQOEYGWBVKRRQBKDRXSVTRKVZSMPRXYIKCYVBQMTQMGAZHFNZSWXUCALKRNTOELUTTDJWYRWULULSVJTDVPXDUIZHCEBVJCAPUHMGTYOIIXAFZWUOZJJXFNIOMHRHOHQJBNH");
    msg.links = 1286360829U;

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
    msg.setTimeStamp(0.7352117589826179);
    msg.setSource(57688U);
    msg.setSourceEntity(218U);
    msg.setDestination(42223U);
    msg.setDestinationEntity(117U);
    msg.group_name.assign("PXYMAGWSSQWEODSNRRMDHRKBBIZXKPHYGNZLXMDCHBCWXCLXIWTYUOSGPQQGTHKBQJHOAMYLRFCSRJIOYRCVWZABNGUTPFJNCLSFHUVKTNEBLAJUIEQDJSZKZXFOVDSGEXXMKDQVIBOIG");
    msg.links = 3882239282U;

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
    msg.setTimeStamp(0.15624019042616655);
    msg.setSource(57280U);
    msg.setSourceEntity(51U);
    msg.setDestination(25647U);
    msg.setDestinationEntity(205U);
    msg.groupname.assign("OFNYFRXSAANGJGCNURCHCHTZIRQLRZBGGDELDANFWSPKIHAMJXLENDGBESVTXBGIZPGDZLGYHUMOZJWJXFCFEOMRELWIYWTTPVLMTKRQHWOKYLEJVRORHAQUWRZVCFFZPOIBSVDYNOSNOFZSLCWOAKUBFQGUUDBUIMSHBLUTKMITXPP");
    msg.action = 160U;
    msg.grouplist.assign("HXYVEDTPEFWEHPLBVGAMQYUTOROLASFIEZNJRDJNPGBWCEVZYJPCMEGVONQWNZMAJMYSULZNFSWSAHRFXWJLMAGICDWOGYDAQTKGQCUAQKCYFKDQHYSXGREFNXVCXMRYARUBJBKHTCQOZYHIQHTXHMGHBNJJGHPMJSZPNZCUKLFWBNVTIGSAAXDYRXVKRSDLIKTWWXIOTCWIEUTCVBRLVIMIDSOOFULKLMRXNVZU");

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
    msg.setTimeStamp(0.6153264432469524);
    msg.setSource(41822U);
    msg.setSourceEntity(188U);
    msg.setDestination(48736U);
    msg.setDestinationEntity(214U);
    msg.groupname.assign("KRNJDWVLRNQWVGSOWITPSROUXCZFMOGIHDXZEALVANNZWGXKFKCGSAVXGFPLMZVTIVHRRYNBUAOGYFAWXFTGZJTICXECPBABQBMQMJDJJDPHTVEHHVMBYLYJYCMGPZIFPYAHEHLSHICLPJFPQYOSTOZXDJUUWUUOLMEGUDKXQKSXVAHSSFUPBYCQNCFEZPBKTTDETKROAQLKZOSBURJFQ");
    msg.action = 225U;
    msg.grouplist.assign("IFFJDUQBBMGTJKVUPTIAEGDXMISDEQTOFCMLWCHKZZIYFHSJTQQLQGKULKRHJTMVHIXMHTNCPDIJLUOTLFHIVJTAWVABCLPFBMSXLGDZOONCMFJYBNXUUARVWVADPYRPCIBULDGWZWKKVKZEYZBPYYOONEEZFEBEWAWWVQAMUJACGEXDPUXCNUQBWDZLSLKOGIPZSVGW");

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
    msg.setTimeStamp(0.7679474593764144);
    msg.setSource(39545U);
    msg.setSourceEntity(202U);
    msg.setDestination(11889U);
    msg.setDestinationEntity(117U);
    msg.groupname.assign("CBRJSCDKWBFZMTLFTYJODEKXVOSAQZQZDPXKJCGIZWMOQALZJZNLWTUJZUPMNRPHTCCLSOTVFDUIEIDRPRXJBTQTVWCGXLORTPPHBLEMSHEYOKS");
    msg.action = 125U;
    msg.grouplist.assign("BMKAQHJTIRVQXORZDOXTNVCANTUKSHLLIQZAZCJNMHETJUYBQHMRJBFBLMWPEPUKQEPYYBFHLYHDJRNKIWAXGYGUZRYFUGZILRZXSBOAHMYTRGNVLEIREPHCVOPZDYGDDSLCLPWKJJMYIMPWWONNU");

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
    msg.setTimeStamp(0.3230352278098477);
    msg.setSource(4304U);
    msg.setSourceEntity(78U);
    msg.setDestination(56069U);
    msg.setDestinationEntity(53U);
    msg.id = 93U;
    msg.range = 0.35127843170815143;

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
    msg.setTimeStamp(0.08926913884546916);
    msg.setSource(55707U);
    msg.setSourceEntity(253U);
    msg.setDestination(64672U);
    msg.setDestinationEntity(247U);
    msg.id = 4U;
    msg.range = 0.18263818130228704;

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
    msg.setTimeStamp(0.06898866719551944);
    msg.setSource(9731U);
    msg.setSourceEntity(43U);
    msg.setDestination(45874U);
    msg.setDestinationEntity(204U);
    msg.id = 192U;
    msg.range = 0.8155198854464435;

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
    msg.setTimeStamp(0.20876257532540865);
    msg.setSource(29847U);
    msg.setSourceEntity(144U);
    msg.setDestination(56424U);
    msg.setDestinationEntity(16U);
    msg.tx = 122U;
    msg.channel = 155U;
    msg.timer = 19064U;

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
    msg.setTimeStamp(0.5119758756810731);
    msg.setSource(63329U);
    msg.setSourceEntity(16U);
    msg.setDestination(8200U);
    msg.setDestinationEntity(242U);
    msg.tx = 193U;
    msg.channel = 149U;
    msg.timer = 2902U;

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
    msg.setTimeStamp(0.872357119147724);
    msg.setSource(30367U);
    msg.setSourceEntity(147U);
    msg.setDestination(57499U);
    msg.setDestinationEntity(62U);
    msg.tx = 214U;
    msg.channel = 222U;
    msg.timer = 36253U;

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
    msg.setTimeStamp(0.11410810292880746);
    msg.setSource(28943U);
    msg.setSourceEntity(45U);
    msg.setDestination(28616U);
    msg.setDestinationEntity(180U);
    msg.beacon.assign("OSTHAKQESNUINMCEQEGSSXFMFFLJQDVDWPIPWEWJKYAOOKQBDRAIGTZULIMZZAZOJBRKVONLYRTBFXSKHRJTWUGJUJGDPKYNCBFLEAEDQZHTGCVZYIFCVITVBXBPYLRBVNKEVDQCNUWNQWTGQVHOAYYHFGEMWDXRLUXSTUHEMNLMCVKHYURLCDPMSYWJLFTIHPHZFPGPRSMNZOCGAOXYWFHPNBMJQEKPDUZCIVABGROZLX");
    msg.lat = 0.7377052572534297;
    msg.lon = 0.1822554723820744;
    msg.depth = 0.3305303608741492;
    msg.query_channel = 119U;
    msg.reply_channel = 50U;
    msg.transponder_delay = 232U;

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
    msg.setTimeStamp(0.9343872661290376);
    msg.setSource(18934U);
    msg.setSourceEntity(238U);
    msg.setDestination(48462U);
    msg.setDestinationEntity(176U);
    msg.beacon.assign("LAKBDVZELJKCFOXHHXETYZARIYIGYJTBBZMPLYBMEQJSHFUVDVWSSIRCNXGZMLGYOFEKSNNBWJJKFGSWVLLCMZITKDFNVXGUGQRYEEQQMSWNPIRRILHJJGVHOEUKCMWSBAGJAADQXTPOWFEOFLWTPYHPCXIVHTNSYJZKFLKD");
    msg.lat = 0.5523320115299252;
    msg.lon = 0.13268404371064146;
    msg.depth = 0.22224072021984742;
    msg.query_channel = 3U;
    msg.reply_channel = 112U;
    msg.transponder_delay = 226U;

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
    msg.setTimeStamp(0.42682719280002723);
    msg.setSource(47680U);
    msg.setSourceEntity(40U);
    msg.setDestination(56384U);
    msg.setDestinationEntity(10U);
    msg.beacon.assign("JUVEZIAQXGIUJZJNFNHKRAIGKNKDZZMPKEBCPJFLOJTMADFEHYDHNSGZQJXDKFAHXTQCGDOWAYZXXPISQPCGDYZVBGRXDPRMVAGCLQSFRIYTWAXNMORUEGGDFRREWNJCPJTZBQDUJLLRTQOVYMWYFIKMFTSWOXISWH");
    msg.lat = 0.2253098043896481;
    msg.lon = 0.7592479344252564;
    msg.depth = 0.1684564419782505;
    msg.query_channel = 97U;
    msg.reply_channel = 18U;
    msg.transponder_delay = 25U;

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
    msg.setTimeStamp(0.6719307165465973);
    msg.setSource(38181U);
    msg.setSourceEntity(72U);
    msg.setDestination(284U);
    msg.setDestinationEntity(231U);
    msg.op = 91U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("WLGMYGYXWNIJXZLCKBFVBQXYHJHWSNIHPCMTXUJAPIXTBKDWVVRXRXKMAEXINQXNMCIAOUEZRIMMHRFQQXYPZUVRKDVGIBTHERFUHFBHQFPCDBZYDQLMWQ");
    tmp_msg_0.lat = 0.20182633141108763;
    tmp_msg_0.lon = 0.6163904996609437;
    tmp_msg_0.depth = 0.1716096100884471;
    tmp_msg_0.query_channel = 127U;
    tmp_msg_0.reply_channel = 96U;
    tmp_msg_0.transponder_delay = 204U;
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
    msg.setTimeStamp(0.2914453987120811);
    msg.setSource(35774U);
    msg.setSourceEntity(133U);
    msg.setDestination(29790U);
    msg.setDestinationEntity(243U);
    msg.op = 25U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SQBBEMHCSVOASEPQLCETDVILEBRPRRQZUQSZOHUFKIXYNWPCXVTUJLZGKALIRMVTSPHZWYUKYAKYNNNGHNTJFVPYMIHDWYPNXKZFTPVTCNOZOBWGJZHLKFAIWCSKDDDJXYNCJM");
    tmp_msg_0.lat = 0.38639911161723794;
    tmp_msg_0.lon = 0.06862056484408097;
    tmp_msg_0.depth = 0.19158133920461162;
    tmp_msg_0.query_channel = 245U;
    tmp_msg_0.reply_channel = 155U;
    tmp_msg_0.transponder_delay = 121U;
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
    msg.setTimeStamp(0.9442274628552557);
    msg.setSource(53851U);
    msg.setSourceEntity(249U);
    msg.setDestination(23340U);
    msg.setDestinationEntity(7U);
    msg.op = 200U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PHYBGSTISCVTYDJPFNOJMUJCEJOQMTTFKOWFQZVYVTYSBYXXYWWIRKZEHFGSCGHRTBLODPBENKMMMIUHALGSNDRIILVDQAZSWGFZBOYBJXHLOCQPVMMQSPNOZUPRGUXIRSWEAWUECLKIUBSWXAPFAQZMZBEKMEZJTETIUQFJNZAWWXSCKKVDOAIBKDAVVVDGECKNJLHRRDHULTIRYZTDBHCWAUHYGDECPFQYMNOOCFGXRNQLQJPVNX");
    tmp_msg_0.lat = 0.06870931359650412;
    tmp_msg_0.lon = 0.5238790848154967;
    tmp_msg_0.depth = 0.38312493476860354;
    tmp_msg_0.query_channel = 127U;
    tmp_msg_0.reply_channel = 250U;
    tmp_msg_0.transponder_delay = 104U;
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
    msg.setTimeStamp(0.38844643445425875);
    msg.setSource(60187U);
    msg.setSourceEntity(172U);
    msg.setDestination(63762U);
    msg.setDestinationEntity(203U);
    msg.address = 147U;

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
    msg.setTimeStamp(0.5022822495995297);
    msg.setSource(28713U);
    msg.setSourceEntity(137U);
    msg.setDestination(15389U);
    msg.setDestinationEntity(26U);
    msg.address = 241U;

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
    msg.setTimeStamp(0.6051882501324639);
    msg.setSource(28285U);
    msg.setSourceEntity(191U);
    msg.setDestination(54174U);
    msg.setDestinationEntity(18U);
    msg.address = 254U;

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
    msg.setTimeStamp(0.055285264377514465);
    msg.setSource(23261U);
    msg.setSourceEntity(72U);
    msg.setDestination(15245U);
    msg.setDestinationEntity(147U);
    msg.address = 229U;
    msg.status = 59U;
    msg.range = 0.326179033443852;

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
    msg.setTimeStamp(0.041015187686341936);
    msg.setSource(22353U);
    msg.setSourceEntity(43U);
    msg.setDestination(63081U);
    msg.setDestinationEntity(190U);
    msg.address = 81U;
    msg.status = 22U;
    msg.range = 0.8934638145010834;

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
    msg.setTimeStamp(0.6490472103614207);
    msg.setSource(50679U);
    msg.setSourceEntity(143U);
    msg.setDestination(9487U);
    msg.setDestinationEntity(150U);
    msg.address = 58U;
    msg.status = 167U;
    msg.range = 0.45670177994091865;

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
    msg.setTimeStamp(0.41666969447206115);
    msg.setSource(51473U);
    msg.setSourceEntity(189U);
    msg.setDestination(11753U);
    msg.setDestinationEntity(214U);
    IMC::DepthOffset tmp_msg_0;
    tmp_msg_0.value = 0.5799651766449333;
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
    msg.setTimeStamp(0.5727463502239362);
    msg.setSource(24569U);
    msg.setSourceEntity(70U);
    msg.setDestination(61662U);
    msg.setDestinationEntity(114U);
    IMC::RemoteActions tmp_msg_0;
    tmp_msg_0.actions.assign("SAIQXHDRAVBXITHIEMHDYKZGMQZDPAPDPUWNIFBNEBPCNECFINYOMNCQMUFRMKBRLKZZDGLYEUNCTQYKOEJSMSZYKPFGJRCIJLSNSOWSMKCHUKUVHSXQEXFMUMXTNXWCFLUQLLV");
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
    msg.setTimeStamp(0.493837477422445);
    msg.setSource(48775U);
    msg.setSourceEntity(59U);
    msg.setDestination(65381U);
    msg.setDestinationEntity(7U);
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 36986U;
    tmp_msg_0.lat = 0.7258280538778348;
    tmp_msg_0.lon = 0.7591177755297229;
    tmp_msg_0.z = 0.985772611874458;
    tmp_msg_0.z_units = 88U;
    tmp_msg_0.speed = 0.9491561633103535;
    tmp_msg_0.speed_units = 62U;
    tmp_msg_0.bearing = 0.26558479433376525;
    tmp_msg_0.cross_angle = 0.9600096578104491;
    tmp_msg_0.width = 0.9869692261832799;
    tmp_msg_0.length = 0.2900087693988096;
    tmp_msg_0.hstep = 0.7990162758149914;
    tmp_msg_0.coff = 4U;
    tmp_msg_0.alternation = 35U;
    tmp_msg_0.flags = 235U;
    tmp_msg_0.custom.assign("DXATABMDLBCWYZCQJIPOPLHYRHBFOWUZBCMKHLVOUNUOPWUAFUGGSJTESSLQXJGCXGYBVBEZRLUZCFFVLAJVAHZVZKSIXDJPMENPBEAEAQTQMBSAVVCCIHHKVFQEFINQQWFNWDKWKEMIIKYRNNVIIQDTP");
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
    msg.setTimeStamp(0.4571698323679557);
    msg.setSource(34055U);
    msg.setSourceEntity(76U);
    msg.setDestination(22315U);
    msg.setDestinationEntity(156U);
    msg.enable = 130U;

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
    msg.setTimeStamp(0.38818790249233437);
    msg.setSource(53594U);
    msg.setSourceEntity(121U);
    msg.setDestination(10953U);
    msg.setDestinationEntity(44U);
    msg.enable = 66U;

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
    msg.setTimeStamp(0.7728301551008031);
    msg.setSource(30740U);
    msg.setSourceEntity(51U);
    msg.setDestination(25027U);
    msg.setDestinationEntity(118U);
    msg.enable = 38U;

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
    msg.setTimeStamp(0.6212736641593964);
    msg.setSource(10950U);
    msg.setSourceEntity(193U);
    msg.setDestination(1103U);
    msg.setDestinationEntity(142U);
    msg.summary = 75U;
    msg.level = 51U;

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
    msg.setTimeStamp(0.1797535595412928);
    msg.setSource(13308U);
    msg.setSourceEntity(46U);
    msg.setDestination(14669U);
    msg.setDestinationEntity(143U);
    msg.summary = 191U;
    msg.level = 73U;

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
    msg.setTimeStamp(0.4501053927141301);
    msg.setSource(54926U);
    msg.setSourceEntity(197U);
    msg.setDestination(55536U);
    msg.setDestinationEntity(37U);
    msg.summary = 24U;
    msg.level = 212U;

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
    msg.setTimeStamp(0.8808572638771277);
    msg.setSource(45895U);
    msg.setSourceEntity(122U);
    msg.setDestination(33418U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.5276637868919722);
    msg.setSource(30272U);
    msg.setSourceEntity(163U);
    msg.setDestination(3154U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.485230683283001);
    msg.setSource(52695U);
    msg.setSourceEntity(232U);
    msg.setDestination(19300U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.5319883600805573);
    msg.setSource(32968U);
    msg.setSourceEntity(208U);
    msg.setDestination(55520U);
    msg.setDestinationEntity(172U);

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
    msg.setTimeStamp(0.05793338449905072);
    msg.setSource(28855U);
    msg.setSourceEntity(78U);
    msg.setDestination(30419U);
    msg.setDestinationEntity(218U);

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
    msg.setTimeStamp(0.9844213666289467);
    msg.setSource(17685U);
    msg.setSourceEntity(200U);
    msg.setDestination(10070U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.3909582380182468);
    msg.setSource(24265U);
    msg.setSourceEntity(232U);
    msg.setDestination(23425U);
    msg.setDestinationEntity(81U);
    msg.op = 39U;
    msg.system.assign("CITMOUTXSBWVFZPNBGHJFOTCJJW");
    msg.range = 0.6733942946225281;
    IMC::QueryEntityInfo tmp_msg_0;
    tmp_msg_0.id = 127U;
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
    msg.setTimeStamp(0.3756620442839582);
    msg.setSource(4175U);
    msg.setSourceEntity(69U);
    msg.setDestination(6090U);
    msg.setDestinationEntity(44U);
    msg.op = 21U;
    msg.system.assign("LAUYFACNREKACPMKUCZICHDWRMMQYTGJMJYWPTEAJCLXSUSLLVVYGUYTVSAQFDNVVREXQOVPOKGICOJKQUYBBJAPTMZWZXNEUTPBQZIWNPBVMLDWYTVBSIEJEOIMIOXNLFUKNOPZRRZRDKHUXRRSGKTPIFULZXXCFUFQGWKMEWBVRAAHSXPRTTMIMDAFETEWOSGZHIB");
    msg.range = 0.7091964199275047;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 5559U;
    tmp_msg_0.lat = 0.11532413715118184;
    tmp_msg_0.lon = 0.8533535533020026;
    tmp_msg_0.z = 0.3923622059971682;
    tmp_msg_0.z_units = 134U;
    tmp_msg_0.speed = 0.04013856427427487;
    tmp_msg_0.speed_units = 222U;
    tmp_msg_0.custom.assign("TPAUMDHDBILDEBMLVXWOURVTSRVMTWZWHTKAMOZSNSQGIESVXLSAVFZYEDCKPCOSKPAAGICESQDDJBUNSLVPUVKHFNDFIKYMQYFHVIHCGTZUBQIRYRRRTIEZVBLFCGSAZEYUJKALXMXOGDHJQRQHXJCLYEK");
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
    msg.setTimeStamp(0.1106817062946619);
    msg.setSource(40519U);
    msg.setSourceEntity(91U);
    msg.setDestination(18348U);
    msg.setDestinationEntity(205U);
    msg.op = 142U;
    msg.system.assign("FVZEHCKKYFXNFHWMVYIXQRGFINAKUEQNLMPSVSBWPYRKMOHUVZOTIPPKJVANAOYRMXDTDTIIJCJCPLSDSZESPLNGCHGRIGBDKOKLHGPQRYUKODVCALCLXLPEZWJJYIUHGXZZKMMDRCWHEAJGSDESXQHLTXVIANXOOMRUUKDQHQEXAWCBEBGFEATUBVBZSQUWNZGYVSTZCIITOWYRYDNFWFBUTFTDJGHLRCMRBBSXYBLMNJ");
    msg.range = 0.713421920569321;
    IMC::IridiumMsgRx tmp_msg_0;
    tmp_msg_0.origin.assign("BOAZHBGJHMNMIKXLTEBVPWODTKWMBMBICLWCHWQDXRJJEQPJZIWBNUFTAKVKIQGYKCHDXOYIOLCXUTOZATGZCGXDGQNKLSXQLFJJZSZUDLDEDOFWEPSGZNCQNKUCXZYVTXUYERRVUOPFSDKEASPFHSIMJBRDBASZLIMXGKDRWQQUVT");
    tmp_msg_0.htime = 0.27429493920846726;
    tmp_msg_0.lat = 0.8105935060551286;
    tmp_msg_0.lon = 0.5414694623698734;
    const char tmp_tmp_msg_0_0[] = {107, 97, 87, -3, -5, -12, -92, 60, -112, 81, 94, 86, -12, -113, 80, 83, -47, 62, 22, -84, -48, 40, -49, 97, -64, 65, 89, -63, -114, -65, -98, -67, -7, 24, 108, 0, 66, -80, 111, 84, -43, 122, 63, -40, -104, -102, 62, 1, 114, -98, -6, 33, -10, 31, 54, -21, 38, 126, -65, -58, -42, 59, -62, 105, -23, 9, -67, -98, -11, 100, -59, 123, 7, -56, 118, 112, -44, -93, -43, -111, -65, -50, 48, -90, 20, -35, 113, 103, 108, 66, -79, 109, 125, -79, -123, -77, -31, -3, 76, 104, 87, -21, -21, -70, 117, 56, -41, -101, -75, -8, 77, -103, -38, 92, -37, 98, -17, 54, -125, -109, 7, -90, 121, 114, -117, 9, 99, -28, 29, -20, -9, 68, 100, 42, 123, 113, -87, 93, -79, -16, -111, 28, -77, -110, 64, 58, 1, 88, 97, 71, -97, 16, -42};
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
    msg.setTimeStamp(0.8825560771749701);
    msg.setSource(22543U);
    msg.setSourceEntity(137U);
    msg.setDestination(51312U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.4481837934620222);
    msg.setSource(3912U);
    msg.setSourceEntity(197U);
    msg.setDestination(50772U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.5079825853655366);
    msg.setSource(17848U);
    msg.setSourceEntity(129U);
    msg.setDestination(63196U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.23869703087460048);
    msg.setSource(25041U);
    msg.setSourceEntity(236U);
    msg.setDestination(47718U);
    msg.setDestinationEntity(216U);
    msg.list.assign("WMJVWBXYOIGAEBPFOHBVRMWOYHSYFRJIWBSPWMUVXVXCSZHBKJZHWNHNSLJRKLAMOGUDASBMCXTKJTUZQILDITNTEJGCIXWJSRPTNYKGSAYLCDCAFZBAOLQUPORMCMPNUVIBCGUMAE");

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
    msg.setTimeStamp(0.4690792633209562);
    msg.setSource(34658U);
    msg.setSourceEntity(150U);
    msg.setDestination(23501U);
    msg.setDestinationEntity(208U);
    msg.list.assign("RRGNFALXBBATZXBWBYYTGBJDFJKYMBFQTCWASFKQHDWCQVMXEGNPWPNJMALJIHIRFIQJUBBQVEDGUKZZIXYJUYHKKYSSFRSRWUSLLZDWFFVAMLNKMQTGAKRXSYHTPUCOUCLIOEJHUNZXTTVPTGXPUMHIDOBZLKNYSDQSXUPAIVPLOIZKLODOQEGHOXGHCEADMNNYMVVXKZEYVRZWWQFHALZROCPJNSCRFVCEBTUCHOSDEMWWERMQTNGJD");

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
    msg.setTimeStamp(0.6334967280691105);
    msg.setSource(20524U);
    msg.setSourceEntity(220U);
    msg.setDestination(9611U);
    msg.setDestinationEntity(19U);
    msg.list.assign("IKSKJRZVUMNYAEMOR");

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
    msg.setTimeStamp(0.6473298565668879);
    msg.setSource(26395U);
    msg.setSourceEntity(155U);
    msg.setDestination(23062U);
    msg.setDestinationEntity(247U);
    msg.value = -3848;

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
    msg.setTimeStamp(0.7387549908062682);
    msg.setSource(41808U);
    msg.setSourceEntity(36U);
    msg.setDestination(57962U);
    msg.setDestinationEntity(97U);
    msg.value = -19293;

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
    msg.setTimeStamp(0.11127813619851812);
    msg.setSource(65493U);
    msg.setSourceEntity(113U);
    msg.setDestination(29078U);
    msg.setDestinationEntity(207U);
    msg.value = 1615;

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
    msg.setTimeStamp(0.5984858686113496);
    msg.setSource(26790U);
    msg.setSourceEntity(205U);
    msg.setDestination(45636U);
    msg.setDestinationEntity(153U);
    msg.value = 0.12097349981073868;

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
    msg.setTimeStamp(0.8787099607994209);
    msg.setSource(53353U);
    msg.setSourceEntity(122U);
    msg.setDestination(29055U);
    msg.setDestinationEntity(112U);
    msg.value = 0.7522400305915584;

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
    msg.setTimeStamp(0.7479109485333836);
    msg.setSource(9186U);
    msg.setSourceEntity(18U);
    msg.setDestination(32557U);
    msg.setDestinationEntity(169U);
    msg.value = 0.21043085541024287;

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
    msg.setTimeStamp(0.8491733225383091);
    msg.setSource(33405U);
    msg.setSourceEntity(236U);
    msg.setDestination(52005U);
    msg.setDestinationEntity(165U);
    msg.value = 0.1724192442745367;

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
    msg.setTimeStamp(0.6607952699328681);
    msg.setSource(56944U);
    msg.setSourceEntity(138U);
    msg.setDestination(7631U);
    msg.setDestinationEntity(7U);
    msg.value = 0.3054382331581459;

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
    msg.setTimeStamp(0.5386011448222499);
    msg.setSource(47337U);
    msg.setSourceEntity(64U);
    msg.setDestination(3831U);
    msg.setDestinationEntity(48U);
    msg.value = 0.258230373096771;

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
    msg.setTimeStamp(0.41073668650035633);
    msg.setSource(58878U);
    msg.setSourceEntity(98U);
    msg.setDestination(55090U);
    msg.setDestinationEntity(33U);
    msg.validity = 55859U;
    msg.type = 133U;
    msg.utc_year = 3830U;
    msg.utc_month = 97U;
    msg.utc_day = 102U;
    msg.utc_time = 0.20514826182098223;
    msg.lat = 0.6379069465526442;
    msg.lon = 0.38543659674447406;
    msg.height = 0.32061829169781375;
    msg.satellites = 22U;
    msg.cog = 0.699099466245052;
    msg.sog = 0.6081225712601741;
    msg.hdop = 0.2667615335510609;
    msg.vdop = 0.259017962966427;
    msg.hacc = 0.18813102122686087;
    msg.vacc = 0.29545084381778497;

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
    msg.setTimeStamp(0.6960118393293674);
    msg.setSource(11328U);
    msg.setSourceEntity(185U);
    msg.setDestination(19473U);
    msg.setDestinationEntity(45U);
    msg.validity = 43960U;
    msg.type = 204U;
    msg.utc_year = 26636U;
    msg.utc_month = 127U;
    msg.utc_day = 210U;
    msg.utc_time = 0.667943671468056;
    msg.lat = 0.1299749532931903;
    msg.lon = 0.08981958157772685;
    msg.height = 0.05628884636350584;
    msg.satellites = 125U;
    msg.cog = 0.569748023492218;
    msg.sog = 0.23866562428504334;
    msg.hdop = 0.05610755147928692;
    msg.vdop = 0.07454854512886289;
    msg.hacc = 0.9653795255198692;
    msg.vacc = 0.7990447357006699;

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
    msg.setTimeStamp(0.4477601083762006);
    msg.setSource(47308U);
    msg.setSourceEntity(45U);
    msg.setDestination(29625U);
    msg.setDestinationEntity(201U);
    msg.validity = 13233U;
    msg.type = 237U;
    msg.utc_year = 37577U;
    msg.utc_month = 48U;
    msg.utc_day = 111U;
    msg.utc_time = 0.8047030222213502;
    msg.lat = 0.7969648608602015;
    msg.lon = 0.9101489531634512;
    msg.height = 0.8516434710455929;
    msg.satellites = 227U;
    msg.cog = 0.010810821492409306;
    msg.sog = 0.8070452177420109;
    msg.hdop = 0.04685146204993518;
    msg.vdop = 0.16076384873811256;
    msg.hacc = 0.4536221104584217;
    msg.vacc = 0.07856466362392955;

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
    msg.setTimeStamp(0.6319035931354086);
    msg.setSource(14209U);
    msg.setSourceEntity(3U);
    msg.setDestination(28212U);
    msg.setDestinationEntity(121U);
    msg.time = 0.8013369757984532;
    msg.phi = 0.42499426716720023;
    msg.theta = 0.9351147953693009;
    msg.psi = 0.7579013179083068;
    msg.psi_magnetic = 0.09347020154431784;

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
    msg.setTimeStamp(0.18273485444454785);
    msg.setSource(16871U);
    msg.setSourceEntity(163U);
    msg.setDestination(57813U);
    msg.setDestinationEntity(238U);
    msg.time = 0.7337717504945959;
    msg.phi = 0.9411085680919563;
    msg.theta = 0.6410908253785444;
    msg.psi = 0.13826660427752246;
    msg.psi_magnetic = 0.4474225489261674;

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
    msg.setTimeStamp(0.8666191099416731);
    msg.setSource(60933U);
    msg.setSourceEntity(94U);
    msg.setDestination(17139U);
    msg.setDestinationEntity(199U);
    msg.time = 0.3416038791845689;
    msg.phi = 0.8395258907742068;
    msg.theta = 0.4839115320778281;
    msg.psi = 0.1726765177331796;
    msg.psi_magnetic = 0.9292850028424998;

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
    msg.setTimeStamp(0.4566453797041784);
    msg.setSource(33891U);
    msg.setSourceEntity(175U);
    msg.setDestination(30350U);
    msg.setDestinationEntity(111U);
    msg.time = 0.7641494157782042;
    msg.x = 0.7327392650211276;
    msg.y = 0.8750804249427393;
    msg.z = 0.3691124597627323;
    msg.timestep = 0.0810178610908936;

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
    msg.setTimeStamp(0.15157753286781617);
    msg.setSource(41441U);
    msg.setSourceEntity(234U);
    msg.setDestination(53561U);
    msg.setDestinationEntity(187U);
    msg.time = 0.15174445431560923;
    msg.x = 0.9461764075586664;
    msg.y = 0.17302087773443087;
    msg.z = 0.5665414406744999;
    msg.timestep = 0.3914620148139306;

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
    msg.setTimeStamp(0.4893711006063135);
    msg.setSource(13568U);
    msg.setSourceEntity(189U);
    msg.setDestination(20778U);
    msg.setDestinationEntity(173U);
    msg.time = 0.9915109308069755;
    msg.x = 0.526392136807314;
    msg.y = 0.8327119787939662;
    msg.z = 0.17158162226252138;
    msg.timestep = 0.38548877204170773;

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
    msg.setTimeStamp(0.9207430917217018);
    msg.setSource(43018U);
    msg.setSourceEntity(43U);
    msg.setDestination(30710U);
    msg.setDestinationEntity(2U);
    msg.time = 0.5441654726027447;
    msg.x = 0.48692681392342596;
    msg.y = 0.19376793423000727;
    msg.z = 0.6446123957278797;

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
    msg.setTimeStamp(0.1641204951979358);
    msg.setSource(39331U);
    msg.setSourceEntity(38U);
    msg.setDestination(17931U);
    msg.setDestinationEntity(201U);
    msg.time = 0.8112898243212865;
    msg.x = 0.5698265233219472;
    msg.y = 0.16094434217279374;
    msg.z = 0.2378142474192081;

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
    msg.setTimeStamp(0.8978847342490489);
    msg.setSource(53025U);
    msg.setSourceEntity(63U);
    msg.setDestination(31644U);
    msg.setDestinationEntity(247U);
    msg.time = 0.1400638838428201;
    msg.x = 0.7753116809993755;
    msg.y = 0.5088133131012883;
    msg.z = 0.7054812393050616;

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
    msg.setTimeStamp(0.6833593761531507);
    msg.setSource(4251U);
    msg.setSourceEntity(187U);
    msg.setDestination(58251U);
    msg.setDestinationEntity(90U);
    msg.time = 0.8043162445246134;
    msg.x = 0.8871430418260654;
    msg.y = 0.5357431287570843;
    msg.z = 0.6732315205636163;

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
    msg.setTimeStamp(0.23134272021513724);
    msg.setSource(15755U);
    msg.setSourceEntity(128U);
    msg.setDestination(63915U);
    msg.setDestinationEntity(208U);
    msg.time = 0.043039651902974985;
    msg.x = 0.3805736422185556;
    msg.y = 0.8804548833498597;
    msg.z = 0.6535273969981358;

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
    msg.setTimeStamp(0.30784214102266805);
    msg.setSource(38820U);
    msg.setSourceEntity(3U);
    msg.setDestination(43595U);
    msg.setDestinationEntity(173U);
    msg.time = 0.39072667078912315;
    msg.x = 0.4406292761578887;
    msg.y = 0.5781960157018144;
    msg.z = 0.596021747565034;

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
    msg.setTimeStamp(0.39113118125248447);
    msg.setSource(62451U);
    msg.setSourceEntity(148U);
    msg.setDestination(47950U);
    msg.setDestinationEntity(81U);
    msg.time = 0.5477993735598599;
    msg.x = 0.494627117356919;
    msg.y = 0.9958799102069321;
    msg.z = 0.03396088956731791;

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
    msg.setTimeStamp(0.4012586811503269);
    msg.setSource(8661U);
    msg.setSourceEntity(251U);
    msg.setDestination(40375U);
    msg.setDestinationEntity(29U);
    msg.time = 0.4593644233696418;
    msg.x = 0.49894069143278064;
    msg.y = 0.5268162982458464;
    msg.z = 0.5186707761853865;

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
    msg.setTimeStamp(0.4074495481302809);
    msg.setSource(36550U);
    msg.setSourceEntity(15U);
    msg.setDestination(63676U);
    msg.setDestinationEntity(195U);
    msg.time = 0.9321333977732894;
    msg.x = 0.7067724514855551;
    msg.y = 0.7204742272642279;
    msg.z = 0.9121521693010404;

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
    msg.setTimeStamp(0.3412340549657247);
    msg.setSource(33299U);
    msg.setSourceEntity(28U);
    msg.setDestination(10016U);
    msg.setDestinationEntity(109U);
    msg.validity = 44U;
    msg.x = 0.4724957748919497;
    msg.y = 0.7786688270216612;
    msg.z = 0.08512526043834123;

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
    msg.setTimeStamp(0.6043637868612014);
    msg.setSource(59598U);
    msg.setSourceEntity(112U);
    msg.setDestination(42321U);
    msg.setDestinationEntity(153U);
    msg.validity = 26U;
    msg.x = 0.984659562690173;
    msg.y = 0.20450137948303126;
    msg.z = 0.6072196896463129;

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
    msg.setTimeStamp(0.17698186193491328);
    msg.setSource(45844U);
    msg.setSourceEntity(127U);
    msg.setDestination(3505U);
    msg.setDestinationEntity(137U);
    msg.validity = 253U;
    msg.x = 0.6491679206041073;
    msg.y = 0.9254624073970565;
    msg.z = 0.6168614368227144;

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
    msg.setTimeStamp(0.051363591177621126);
    msg.setSource(15155U);
    msg.setSourceEntity(104U);
    msg.setDestination(40859U);
    msg.setDestinationEntity(19U);
    msg.validity = 187U;
    msg.x = 0.031113083260894014;
    msg.y = 0.9667930470055294;
    msg.z = 0.9251467502765565;

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
    msg.setTimeStamp(0.24464489816821633);
    msg.setSource(34341U);
    msg.setSourceEntity(67U);
    msg.setDestination(56901U);
    msg.setDestinationEntity(25U);
    msg.validity = 229U;
    msg.x = 0.19008788316905423;
    msg.y = 0.9939453586386201;
    msg.z = 0.7512978675636331;

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
    msg.setTimeStamp(0.4906437316414085);
    msg.setSource(43296U);
    msg.setSourceEntity(235U);
    msg.setDestination(52671U);
    msg.setDestinationEntity(198U);
    msg.validity = 109U;
    msg.x = 0.23688332280902424;
    msg.y = 0.4619726136299389;
    msg.z = 0.6749215668629642;

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
    msg.setTimeStamp(0.131095266304031);
    msg.setSource(12060U);
    msg.setSourceEntity(157U);
    msg.setDestination(3721U);
    msg.setDestinationEntity(144U);
    msg.time = 0.14037324695761544;
    msg.x = 0.676379082915139;
    msg.y = 0.47413399697790903;
    msg.z = 0.4717109880136091;

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
    msg.setTimeStamp(0.4862428438926121);
    msg.setSource(29040U);
    msg.setSourceEntity(64U);
    msg.setDestination(9031U);
    msg.setDestinationEntity(127U);
    msg.time = 0.8809552961399122;
    msg.x = 0.4495680053633606;
    msg.y = 0.6539596699090516;
    msg.z = 0.6839535401206334;

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
    msg.setTimeStamp(0.26511876605633233);
    msg.setSource(1840U);
    msg.setSourceEntity(233U);
    msg.setDestination(51651U);
    msg.setDestinationEntity(202U);
    msg.time = 0.767501651806581;
    msg.x = 0.30383877031120676;
    msg.y = 0.7332663977463328;
    msg.z = 0.5858659328801442;

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
    msg.setTimeStamp(0.07038741323534725);
    msg.setSource(60035U);
    msg.setSourceEntity(162U);
    msg.setDestination(44996U);
    msg.setDestinationEntity(136U);
    msg.validity = 134U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.5697631645401386;
    tmp_msg_0.y = 0.06097085469262309;
    tmp_msg_0.z = 0.9197754524868756;
    tmp_msg_0.phi = 0.31730619978433994;
    tmp_msg_0.theta = 0.2408182962388855;
    tmp_msg_0.psi = 0.6029084475126751;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.7064581565146356;

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
    msg.setTimeStamp(0.722936464798164);
    msg.setSource(25458U);
    msg.setSourceEntity(250U);
    msg.setDestination(8341U);
    msg.setDestinationEntity(133U);
    msg.validity = 104U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.15367172238060722;
    tmp_msg_0.beam_height = 0.5743764056580214;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.5748200953815592;

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
    msg.setTimeStamp(0.995177458021796);
    msg.setSource(15676U);
    msg.setSourceEntity(22U);
    msg.setDestination(40575U);
    msg.setDestinationEntity(231U);
    msg.validity = 177U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.7591220277450206;
    tmp_msg_0.y = 0.6372428509799348;
    tmp_msg_0.z = 0.6645334441738959;
    tmp_msg_0.phi = 0.10107908220840067;
    tmp_msg_0.theta = 0.5223894044087892;
    tmp_msg_0.psi = 0.8944964528769955;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.17439140992531077;
    tmp_msg_1.beam_height = 0.6707867982594412;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.8603329372693723;

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
    msg.setTimeStamp(0.5480442702127661);
    msg.setSource(58162U);
    msg.setSourceEntity(0U);
    msg.setDestination(17991U);
    msg.setDestinationEntity(28U);
    msg.value = 0.375604128588389;

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
    msg.setTimeStamp(0.06794221548460255);
    msg.setSource(44840U);
    msg.setSourceEntity(50U);
    msg.setDestination(63565U);
    msg.setDestinationEntity(246U);
    msg.value = 0.908850478611911;

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
    msg.setTimeStamp(0.2678820036846534);
    msg.setSource(48024U);
    msg.setSourceEntity(237U);
    msg.setDestination(15408U);
    msg.setDestinationEntity(143U);
    msg.value = 0.9545148228711609;

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
    msg.setTimeStamp(0.6186541896306145);
    msg.setSource(53801U);
    msg.setSourceEntity(124U);
    msg.setDestination(22432U);
    msg.setDestinationEntity(249U);
    msg.value = 0.4233866330070988;

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
    msg.setTimeStamp(0.03171941827646507);
    msg.setSource(43017U);
    msg.setSourceEntity(123U);
    msg.setDestination(37467U);
    msg.setDestinationEntity(90U);
    msg.value = 0.018267225474307702;

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
    msg.setTimeStamp(0.7103882689681418);
    msg.setSource(40291U);
    msg.setSourceEntity(40U);
    msg.setDestination(44326U);
    msg.setDestinationEntity(17U);
    msg.value = 0.4447887913832169;

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
    msg.setTimeStamp(0.05174846691994095);
    msg.setSource(45482U);
    msg.setSourceEntity(236U);
    msg.setDestination(45363U);
    msg.setDestinationEntity(228U);
    msg.value = 0.976837619301162;

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
    msg.setTimeStamp(0.9765621038889907);
    msg.setSource(31526U);
    msg.setSourceEntity(25U);
    msg.setDestination(50348U);
    msg.setDestinationEntity(140U);
    msg.value = 0.7355113411759208;

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
    msg.setTimeStamp(0.8523721910097558);
    msg.setSource(33272U);
    msg.setSourceEntity(124U);
    msg.setDestination(43300U);
    msg.setDestinationEntity(169U);
    msg.value = 0.46220116939669487;

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
    msg.setTimeStamp(0.39546268314857436);
    msg.setSource(30059U);
    msg.setSourceEntity(125U);
    msg.setDestination(173U);
    msg.setDestinationEntity(90U);
    msg.value = 0.5421090461470505;

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
    msg.setTimeStamp(0.2169979854062326);
    msg.setSource(58724U);
    msg.setSourceEntity(100U);
    msg.setDestination(12674U);
    msg.setDestinationEntity(189U);
    msg.value = 0.16122668559664266;

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
    msg.setTimeStamp(0.7813955647958174);
    msg.setSource(52603U);
    msg.setSourceEntity(23U);
    msg.setDestination(27208U);
    msg.setDestinationEntity(116U);
    msg.value = 0.3934346776907808;

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
    msg.setTimeStamp(0.0020629825805750235);
    msg.setSource(21033U);
    msg.setSourceEntity(66U);
    msg.setDestination(21095U);
    msg.setDestinationEntity(200U);
    msg.value = 0.29258990229918325;

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
    msg.setTimeStamp(0.7496334575680659);
    msg.setSource(8986U);
    msg.setSourceEntity(217U);
    msg.setDestination(20567U);
    msg.setDestinationEntity(210U);
    msg.value = 0.616581334665905;

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
    msg.setTimeStamp(0.9481141404210492);
    msg.setSource(2234U);
    msg.setSourceEntity(211U);
    msg.setDestination(8962U);
    msg.setDestinationEntity(198U);
    msg.value = 0.7008970280263381;

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
    msg.setTimeStamp(0.5397366230327123);
    msg.setSource(65470U);
    msg.setSourceEntity(130U);
    msg.setDestination(24087U);
    msg.setDestinationEntity(160U);
    msg.value = 0.0688806414363945;

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
    msg.setTimeStamp(0.5110665649736286);
    msg.setSource(7780U);
    msg.setSourceEntity(191U);
    msg.setDestination(64553U);
    msg.setDestinationEntity(144U);
    msg.value = 0.42663607561376427;

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
    msg.setTimeStamp(0.4933458558431786);
    msg.setSource(37054U);
    msg.setSourceEntity(60U);
    msg.setDestination(55708U);
    msg.setDestinationEntity(99U);
    msg.value = 0.969615536324634;

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
    msg.setTimeStamp(0.2613581750789429);
    msg.setSource(37971U);
    msg.setSourceEntity(82U);
    msg.setDestination(14687U);
    msg.setDestinationEntity(61U);
    msg.value = 0.3615572064531264;

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
    msg.setTimeStamp(0.13733098243326558);
    msg.setSource(40205U);
    msg.setSourceEntity(44U);
    msg.setDestination(24683U);
    msg.setDestinationEntity(104U);
    msg.value = 0.7841182522832878;

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
    msg.setTimeStamp(0.013067669514925773);
    msg.setSource(24713U);
    msg.setSourceEntity(98U);
    msg.setDestination(64764U);
    msg.setDestinationEntity(152U);
    msg.value = 0.7059613472572263;

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
    msg.setTimeStamp(0.7429840852464645);
    msg.setSource(50595U);
    msg.setSourceEntity(50U);
    msg.setDestination(18402U);
    msg.setDestinationEntity(250U);
    msg.value = 0.7773186606934934;

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
    msg.setTimeStamp(0.35722709499422656);
    msg.setSource(51470U);
    msg.setSourceEntity(45U);
    msg.setDestination(20565U);
    msg.setDestinationEntity(5U);
    msg.value = 0.5398068619070916;

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
    msg.setTimeStamp(0.4391403525365746);
    msg.setSource(44351U);
    msg.setSourceEntity(92U);
    msg.setDestination(51550U);
    msg.setDestinationEntity(240U);
    msg.value = 0.3662597441276991;

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
    msg.setTimeStamp(0.34505318563350995);
    msg.setSource(58810U);
    msg.setSourceEntity(169U);
    msg.setDestination(54110U);
    msg.setDestinationEntity(125U);
    msg.direction = 0.8389531487730255;
    msg.speed = 0.1383630322182704;
    msg.turbulence = 0.7470829967231976;

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
    msg.setTimeStamp(0.7206663645160135);
    msg.setSource(10949U);
    msg.setSourceEntity(133U);
    msg.setDestination(41724U);
    msg.setDestinationEntity(215U);
    msg.direction = 0.5385225546230735;
    msg.speed = 0.6001906201837297;
    msg.turbulence = 0.20947422142608685;

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
    msg.setTimeStamp(0.0047132124517406115);
    msg.setSource(35104U);
    msg.setSourceEntity(68U);
    msg.setDestination(56295U);
    msg.setDestinationEntity(25U);
    msg.direction = 0.08402045446851836;
    msg.speed = 0.6673086656536955;
    msg.turbulence = 0.15402438231587479;

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
    msg.setTimeStamp(0.918958865599455);
    msg.setSource(61563U);
    msg.setSourceEntity(248U);
    msg.setDestination(63091U);
    msg.setDestinationEntity(204U);
    msg.value = 0.6567319896010443;

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
    msg.setTimeStamp(0.15088481908486795);
    msg.setSource(8180U);
    msg.setSourceEntity(233U);
    msg.setDestination(50719U);
    msg.setDestinationEntity(118U);
    msg.value = 0.49320182163829784;

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
    msg.setTimeStamp(0.021798450300475558);
    msg.setSource(48225U);
    msg.setSourceEntity(158U);
    msg.setDestination(32563U);
    msg.setDestinationEntity(148U);
    msg.value = 0.7014252856310333;

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
    msg.setTimeStamp(0.6405720229632079);
    msg.setSource(15656U);
    msg.setSourceEntity(57U);
    msg.setDestination(36012U);
    msg.setDestinationEntity(42U);
    msg.value.assign("ZXFKTXNTHVSBFGCJISULOQHNYDSIIMCUSLEBDKCDXSAEOINBUVDVVRAWTLVMGQVBYZDSWLBYYQNKDWSPDPWPYBZUEMPMRGAPGQHKWUIARZLMPUGUFUXBHRHJLKROUJCXJNORIRFGZCPECTDNCGZTKPZFRYMAJHOGWONYVTETSPUAF");

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
    msg.setTimeStamp(0.6540980775755703);
    msg.setSource(64096U);
    msg.setSourceEntity(12U);
    msg.setDestination(15971U);
    msg.setDestinationEntity(168U);
    msg.value.assign("LMBVJWSLOZUCK");

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
    msg.setTimeStamp(0.8907928597907208);
    msg.setSource(33723U);
    msg.setSourceEntity(209U);
    msg.setDestination(116U);
    msg.setDestinationEntity(170U);
    msg.value.assign("GTDKMEJUIVRJNHHUEEVGYRUDFLBRNMCOENCPXLOWPGDAXNAKSZIFASLYATHXTARMYDVCHYRQYNXSJOQTEDMAVTFIHNRQSQSQSOIEWKEPVCKFMTWKBFXWODVEE");

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
    msg.setTimeStamp(0.4649830796593667);
    msg.setSource(39297U);
    msg.setSourceEntity(222U);
    msg.setDestination(15911U);
    msg.setDestinationEntity(58U);
    const char tmp_msg_0[] = {-75, 123, 78, 65, -36, -82, -22, 48, 38, -28, 66, 3, -72, -106, -21, 15, -113, -33, 36, -115, -34, 16, 92, 121, 102, -116, 29, 90, 67, 22, -40, 6, -110, -110, -106, 28, 78, 43, 0, -73, -60, 42, 92, 70, -43, 95, -19, -39, 84, 3, 108, 20, 104, 60, -11, -91, -66, -68, -47, 66, 101, -107, 13, -104, 63, 109, 36, 62, -8, 22, 45, -19, 88, -51, -34, 71, -104, -30, 113, -118, 34, 97, -102, 57, -128, -33, -118, -65, -52, -2, 72, -70, -16, 23, -55, -122, -126, -58, -109, 100, -113, -62, 99, 75, 123, -19, 34, -61, 4, -40, -63, -70, -118, -58, 80, -70, 93, -59, -30, 18, 45, 9, -76, 116, -47, 105, 53, 122, -111, -42, 125, 114, 82, -121, 38, -24, 46, -52, -95, 82, 100, -75, 122, -107, -100, 118};
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
    msg.setTimeStamp(0.3051546212666556);
    msg.setSource(33063U);
    msg.setSourceEntity(6U);
    msg.setDestination(21391U);
    msg.setDestinationEntity(211U);
    const char tmp_msg_0[] = {13, -32, -70, -29, -41, -72, -118, -89, -27, -55, -89, 62, 12, 14, 5, -53, 33, -123, -25, 72, 52, 15, -120, -32, 10, 39, -47, -20, -106, 14, 113, -6, -50, -112, -39, 31, -47, -88, -22, -26, 16, -125, 6, 108, -13, 17, 112, -22, 80, 120, 20, -112, -84, 115, -69, -114, 29, -75, 54, 74, -91, -89, -83, 86, 125, -119, 29, -55, 104, 21, -36, -43, 82, 125, -46, -71, 62, -52, -2, -87, 11, -70, -3, 2, 86, 54, -33, -87, 50, -28, -106, 17, -120, 16, -121, -87, 123, 3, -70, -81, 53, 91, 89, 48, 88, 70, 52, 9, 61, -90, -77, -126, 24, -95, 41, -18, -34, 103, 40, 8, -105, -20, -108, -25, -9, 78, 90, 6, -69, -16, 75, 108, -44, -23, 9, -23, -94, 99, 53, 9, 95, 49, 1, 26, -26, -62, 111, -64, 90, 50, -95, -77, -21, -122, 100, -128, -45, 114, 112, 82, -108, 99, 74, 85, 15, 11, -37, 85, -52, -13, 84, 65, 32, 6, -20, -82, 75, -98, 97, 113, -105, 25, 60, 44, -128, -90, -19, 18, 89, 89, 69, -63, 69, -60, 63, -85, 43, 35, 46, 110, -49, 35, 117, -32, -56, 91, -85, 2, 0, -35};
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
    msg.setTimeStamp(0.1312106007942978);
    msg.setSource(58988U);
    msg.setSourceEntity(58U);
    msg.setDestination(61383U);
    msg.setDestinationEntity(22U);
    const char tmp_msg_0[] = {-116, 15, 37, 36, 49, -62, -98, -54, 61, -55, 22, -89, -109, -72, -79, 21, 76, -122, 41, 114, -19, -112, 98, -79, -18, -100, -30, 117, -10, 72, -55, -44, -30, 70, 62, -93, -52, -117, -66, 58, -2, -68, 69, -99, -64, -63, -68, 1, 43, -27, -63, -79, 75, 101, -50, 82, -87, -22, 109, 12, 121, -99, 3, -3, 47, -75, -7, -42, 40, -33, -33, 34, -17, 43, -24, -79, 106, -102, -39, -107, -14, -64, -95, 50, -123, -81, -12, 56, -4, -78, -116, -100, -108, -61, 101, -81, 87, -36, 94, -20, 25, -102, 68, 96, 9, -6, 106, 122, 62, -53, 45, -85, -119, -2, -127, -62, -98, 55, 0, -75, -31, 23, -126, -45, 126, 93, -73, -22, -14, 68, 16, -18, 50, -20, -104, 95, 2, -108, 23, -13, -20, -104, 51, -119, -78, -31, -8, -114, 74, -34, 14, 78, -98, 23, -35, -93, 40, -21, 6, -86, -45, -84, -90, -33, 92, 65, 109, -79, 112, -70, 77, -47, 21, -10, 88, -9, -30, -84, -29, 35, 73};
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
    msg.setTimeStamp(0.9184835159760658);
    msg.setSource(54442U);
    msg.setSourceEntity(54U);
    msg.setDestination(24692U);
    msg.setDestinationEntity(145U);
    msg.frequency = 3793951182U;
    msg.min_range = 11122U;
    msg.max_range = 48715U;

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
    msg.setTimeStamp(0.37869337763521305);
    msg.setSource(38233U);
    msg.setSourceEntity(25U);
    msg.setDestination(50285U);
    msg.setDestinationEntity(165U);
    msg.frequency = 408400615U;
    msg.min_range = 35242U;
    msg.max_range = 45641U;

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
    msg.setTimeStamp(0.7558996967239793);
    msg.setSource(59087U);
    msg.setSourceEntity(8U);
    msg.setDestination(46020U);
    msg.setDestinationEntity(92U);
    msg.frequency = 2671426641U;
    msg.min_range = 23760U;
    msg.max_range = 26350U;

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
    msg.setTimeStamp(0.9563941109104097);
    msg.setSource(14667U);
    msg.setSourceEntity(174U);
    msg.setDestination(25370U);
    msg.setDestinationEntity(13U);
    msg.type = 79U;
    msg.frequency = 4209123739U;
    msg.min_range = 10234U;
    msg.max_range = 55610U;
    msg.bits_per_point = 149U;
    msg.scale_factor = 0.05869080784263303;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.520176971787197;
    tmp_msg_0.beam_height = 0.005141333836079398;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {52, -104, -33, -66, -75, -17, 122, 83, -55, -95, 18, 63, -126, 82, 8, 10, 61, -65, 60, 125, 2, -9, -33, 50, -35, 48, -70, 83, -122, 95, 113, 24, -122, 8, -83, 106, 62, -58, -30, 96, 112, 102, 126, 122, 95, -26, -111, -107, -14, -39, 22, 54, 3, 47, -43, 22, 7, 106, -119, 62, 96, -65, -113, 126, -121, -27, 75, -8, 113, 32, -100, -66, 60, -88, -70, -63, 2, -17, 68, 30, -24, 51, 17, -124, -17, -72, -62, 116, -26, -35, -60, -80, 75, -66, 34, 114};
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
    msg.setTimeStamp(0.8771845500739824);
    msg.setSource(1777U);
    msg.setSourceEntity(150U);
    msg.setDestination(42561U);
    msg.setDestinationEntity(216U);
    msg.type = 172U;
    msg.frequency = 174084274U;
    msg.min_range = 25612U;
    msg.max_range = 31204U;
    msg.bits_per_point = 194U;
    msg.scale_factor = 0.847075758255754;
    const char tmp_msg_0[] = {-64, 71, -109, 124, 36, 57, -78, -37, -76, -37, -86, -8, -46, 46, -66, -5, -55, -49, -6, -3, -114, 5, -6, 31, -13, 119, -40, -114, -46, -25, -128, -87, -26, -100, 33, 19, 117, -61, -35, -31, -18, -13, -121, 97, -66, -68, -50, -114, 76, 121, -122, 90, 83, -110, -117, -80, -58, -97, -29, 58, 98, -45, 95, -97, 88, -35, -104, -39, -6, -36, -80, 120, -37, -51, -15, 90, 76, -13, 58, 95, 120, 85, 80, -24, 93, 98, -44, -38, 119, 49, -9, 122, 33, -100, 75, 100, 89, 39, 126, 28, -33, -117, -65, 54, -115, 20, -69, 119, 75, -41, 120, 101, -72, -3, -120, -91, 104, -109, -67, -28, 78, -87, 77, -61, 19, -42, -95, 97, -54, 50, -74, 110, -25, -101, -47, 29, -81, -106, -100, -47, 73, -1, 124, 78, -42, 57, -57, -17, 45, 34, 38, 88, -124, 123, 121, -39, 105, 58, 49, 76, -80, -115, 95, 7, -109, -51, -13, 88, 38, 38, 120, -115, -118, 51, -17, -73, 81, 4, -29, -61, -126};
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
    msg.setTimeStamp(0.8933544979963159);
    msg.setSource(9830U);
    msg.setSourceEntity(90U);
    msg.setDestination(46326U);
    msg.setDestinationEntity(135U);
    msg.type = 104U;
    msg.frequency = 581092670U;
    msg.min_range = 7805U;
    msg.max_range = 9564U;
    msg.bits_per_point = 118U;
    msg.scale_factor = 0.3542902249704444;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.9383979758434771;
    tmp_msg_0.beam_height = 0.22657852993012262;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {82, 19, 41, -52, -32, 20, -53, -92, -113, 47, -78, -39, 72, -98, -60, -45, 91, 102, 13, 12, 71, -128, 113, -1, -46, 119, 14, -84, -74, 62, 93, 86, -74, -66, -116, -8, -85, 66, -54, -103, -32, 91, -29, -124, 60, -60, 3, 55, -14, 100, -61, -125, 112, 124, 1, 63, -73, 104, -122, 9, 80, -9, 108, -110, 104, -60, -38, -34, -74, 77, -89, 30, -74, -37, -7, -46, -104, -16, 106, -115, 103, 73, -110, -95, -128, 28, 115, 86, -54, -14, -105, -72, 58, 14, -59, 64, -123, -20, -113, -26, -103, 2, 60, 30, 114, -86, -33, -83, -96, -63, -37, 123, 17, -103, 49, -19, 119, -54, -91, -54, 59, 63, -8, -59, 4, -23, -17, -13, 21, 118, -118, -112, -116, -93, 38, 119, 90, -19, -47, 48, 95, -17, -31, 85, -95, -60, -78, 41, -122, -56, 73, -24, -8, -123, -115, -98, 1, -121, -123, 100, 108, -95, -53, -5, -29, -26, 40, 70, -125, 76, -114, 84, 91, 52, -94, -68, -59, -15, -110, 107, -45, -109, -16, 52, -121, -26, 28, -63, -40, 68, -113, 24, -83, -126, 63, -23, 25, 67, -42, 41, -85, -95, 79, 44, -2, 19, 12, -98, 43, 27, -39, -44, -115, 123, 101, -45, 24, -18, 106, -62, -68, -27, 80, -82, 97, 84, -35, 117};
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
    msg.setTimeStamp(0.17669213338468392);
    msg.setSource(43552U);
    msg.setSourceEntity(229U);
    msg.setDestination(60515U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.38133776105544825);
    msg.setSource(40397U);
    msg.setSourceEntity(145U);
    msg.setDestination(47155U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.8642183143442528);
    msg.setSource(31575U);
    msg.setSourceEntity(240U);
    msg.setDestination(62U);
    msg.setDestinationEntity(98U);

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
    msg.setTimeStamp(0.2616071326850552);
    msg.setSource(25302U);
    msg.setSourceEntity(249U);
    msg.setDestination(818U);
    msg.setDestinationEntity(31U);
    msg.op = 197U;

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
    msg.setTimeStamp(0.862323039905061);
    msg.setSource(56752U);
    msg.setSourceEntity(90U);
    msg.setDestination(48163U);
    msg.setDestinationEntity(56U);
    msg.op = 100U;

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
    msg.setTimeStamp(0.17994030265768113);
    msg.setSource(60993U);
    msg.setSourceEntity(54U);
    msg.setDestination(12108U);
    msg.setDestinationEntity(140U);
    msg.op = 149U;

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
    msg.setTimeStamp(0.14040790257757307);
    msg.setSource(49284U);
    msg.setSourceEntity(99U);
    msg.setDestination(6573U);
    msg.setDestinationEntity(212U);
    msg.value = 0.13746220237430617;
    msg.confidence = 0.6906585270633184;
    msg.opmodes.assign("WYNKCOJNBWBRGXSDQLTQXPWIGSFMURWXKUDDQMHPJQFONKRANACMKSXFDIOHXBNMSJCOQIILLPCFRBJOVNWGVITNCFDZLJGAKCTIWDTSKYODIRPEABPZATZUPVVPVHFGWXEVAEKEOCOBYUEELTCGYZNGUHHESDQZVQHGJAUJCRZLREIUMQSGRUKMUUTAXZJXYLZRLZOLYWBVOVRBSFNYMQDSSYTZAAFQBKP");

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
    msg.setTimeStamp(0.07807055064829194);
    msg.setSource(27089U);
    msg.setSourceEntity(182U);
    msg.setDestination(58605U);
    msg.setDestinationEntity(172U);
    msg.value = 0.35288426225194625;
    msg.confidence = 0.038931288540560605;
    msg.opmodes.assign("AMALTNJCRTSDXJBHJGVMTCFTEFJJDZPXNBIISA");

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
    msg.setTimeStamp(0.1239990088819296);
    msg.setSource(41589U);
    msg.setSourceEntity(254U);
    msg.setDestination(55152U);
    msg.setDestinationEntity(217U);
    msg.value = 0.8065230978072904;
    msg.confidence = 0.982372168077314;
    msg.opmodes.assign("PNJVFYMBVZSOZTMDVUDQJMFVGFCYEXBJYQPHTKIUKVXQCVAQEOIZRWKXWTHMWFTSDCO");

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
    msg.setTimeStamp(0.8659063789750363);
    msg.setSource(48921U);
    msg.setSourceEntity(187U);
    msg.setDestination(52235U);
    msg.setDestinationEntity(159U);
    msg.itow = 3896323488U;
    msg.lat = 0.501001282778095;
    msg.lon = 0.3600263216968318;
    msg.height_ell = 0.5544035332745533;
    msg.height_sea = 0.18983604223315065;
    msg.hacc = 0.8100413150220922;
    msg.vacc = 0.5519992780800071;
    msg.vel_n = 0.5714681471633701;
    msg.vel_e = 0.5536773890515602;
    msg.vel_d = 0.654908160408244;
    msg.speed = 0.603566705817001;
    msg.gspeed = 0.4470220107804861;
    msg.heading = 0.15686359916985448;
    msg.sacc = 0.6093942737587213;
    msg.cacc = 0.7622409248175642;

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
    msg.setTimeStamp(0.17194690620075626);
    msg.setSource(25070U);
    msg.setSourceEntity(137U);
    msg.setDestination(53165U);
    msg.setDestinationEntity(253U);
    msg.itow = 1460035493U;
    msg.lat = 0.7775996355021294;
    msg.lon = 0.619346515189585;
    msg.height_ell = 0.19511766768079009;
    msg.height_sea = 0.47540426063180596;
    msg.hacc = 0.22634269966664244;
    msg.vacc = 0.39826812024629255;
    msg.vel_n = 0.9169708710689887;
    msg.vel_e = 0.015388148804621582;
    msg.vel_d = 0.6194344025668845;
    msg.speed = 0.38309228671078877;
    msg.gspeed = 0.11596882937675435;
    msg.heading = 0.6593627011681724;
    msg.sacc = 0.9628134156500008;
    msg.cacc = 0.6206488614197183;

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
    msg.setTimeStamp(0.773698185743821);
    msg.setSource(55322U);
    msg.setSourceEntity(184U);
    msg.setDestination(16132U);
    msg.setDestinationEntity(201U);
    msg.itow = 2411556973U;
    msg.lat = 0.8083414234025441;
    msg.lon = 0.20401550595054896;
    msg.height_ell = 0.047765209980116574;
    msg.height_sea = 0.0330059992048809;
    msg.hacc = 0.6206116495871282;
    msg.vacc = 0.9718059023869471;
    msg.vel_n = 0.7069763387540094;
    msg.vel_e = 0.2824074383039562;
    msg.vel_d = 0.363651893727466;
    msg.speed = 0.2599517904700881;
    msg.gspeed = 0.2563191432515618;
    msg.heading = 0.29746326324125005;
    msg.sacc = 0.07991676644072665;
    msg.cacc = 0.18203470993613136;

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
    msg.setTimeStamp(0.7955251266074237);
    msg.setSource(11542U);
    msg.setSourceEntity(176U);
    msg.setDestination(10834U);
    msg.setDestinationEntity(18U);
    msg.id = 238U;
    msg.value = 0.22357613449351843;

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
    msg.setTimeStamp(0.624606693653689);
    msg.setSource(51441U);
    msg.setSourceEntity(110U);
    msg.setDestination(12423U);
    msg.setDestinationEntity(232U);
    msg.id = 98U;
    msg.value = 0.9017978386581748;

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
    msg.setTimeStamp(0.20889271267179255);
    msg.setSource(64694U);
    msg.setSourceEntity(65U);
    msg.setDestination(40067U);
    msg.setDestinationEntity(38U);
    msg.id = 213U;
    msg.value = 0.19159647701919058;

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
    msg.setTimeStamp(0.12661145153872688);
    msg.setSource(47522U);
    msg.setSourceEntity(157U);
    msg.setDestination(8822U);
    msg.setDestinationEntity(5U);
    msg.x = 0.016393968660575076;
    msg.y = 0.33285740771643546;
    msg.z = 0.46200499599856326;
    msg.phi = 0.5867846724262958;
    msg.theta = 0.49766416503363264;
    msg.psi = 0.918815493819883;

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
    msg.setTimeStamp(0.15985926346848334);
    msg.setSource(40292U);
    msg.setSourceEntity(190U);
    msg.setDestination(24102U);
    msg.setDestinationEntity(149U);
    msg.x = 0.7877795750339589;
    msg.y = 0.19091376269528137;
    msg.z = 0.33734764441022;
    msg.phi = 0.9040496784294767;
    msg.theta = 0.6783787117276006;
    msg.psi = 0.6091585383285025;

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
    msg.setTimeStamp(0.332666553333114);
    msg.setSource(25571U);
    msg.setSourceEntity(43U);
    msg.setDestination(34167U);
    msg.setDestinationEntity(7U);
    msg.x = 0.5253930073309647;
    msg.y = 0.17249275334452685;
    msg.z = 0.11021423511833417;
    msg.phi = 0.36583187948235574;
    msg.theta = 0.537872558901637;
    msg.psi = 0.2358947128937945;

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
    msg.setTimeStamp(0.8991790191000906);
    msg.setSource(16941U);
    msg.setSourceEntity(98U);
    msg.setDestination(25169U);
    msg.setDestinationEntity(130U);
    msg.beam_width = 0.148868664096797;
    msg.beam_height = 0.5568145770029711;

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
    msg.setTimeStamp(0.31342854195072933);
    msg.setSource(29778U);
    msg.setSourceEntity(229U);
    msg.setDestination(19009U);
    msg.setDestinationEntity(172U);
    msg.beam_width = 0.6359092790090262;
    msg.beam_height = 0.7129351857765659;

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
    msg.setTimeStamp(0.12035463176998618);
    msg.setSource(60687U);
    msg.setSourceEntity(233U);
    msg.setDestination(17643U);
    msg.setDestinationEntity(8U);
    msg.beam_width = 0.14133915854990375;
    msg.beam_height = 0.17576113316547615;

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
    msg.setTimeStamp(0.9628955723268391);
    msg.setSource(12799U);
    msg.setSourceEntity(232U);
    msg.setDestination(49792U);
    msg.setDestinationEntity(9U);
    msg.sane = 111U;

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
    msg.setTimeStamp(0.7066844160959853);
    msg.setSource(23552U);
    msg.setSourceEntity(173U);
    msg.setDestination(32697U);
    msg.setDestinationEntity(154U);
    msg.sane = 9U;

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
    msg.setTimeStamp(0.5531620969429326);
    msg.setSource(26841U);
    msg.setSourceEntity(143U);
    msg.setDestination(51391U);
    msg.setDestinationEntity(141U);
    msg.sane = 230U;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.11930625737048195);
    msg.setSource(61708U);
    msg.setSourceEntity(167U);
    msg.setDestination(47834U);
    msg.setDestinationEntity(23U);
    msg.id = 182U;
    msg.zoom = 160U;
    msg.action = 84U;

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
    msg.setTimeStamp(0.8277263199818755);
    msg.setSource(60246U);
    msg.setSourceEntity(210U);
    msg.setDestination(19563U);
    msg.setDestinationEntity(131U);
    msg.id = 120U;
    msg.zoom = 193U;
    msg.action = 0U;

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
    msg.setTimeStamp(0.9570165175407621);
    msg.setSource(59826U);
    msg.setSourceEntity(248U);
    msg.setDestination(15842U);
    msg.setDestinationEntity(106U);
    msg.id = 171U;
    msg.zoom = 27U;
    msg.action = 124U;

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
    msg.setTimeStamp(0.2599941169754869);
    msg.setSource(35715U);
    msg.setSourceEntity(52U);
    msg.setDestination(54791U);
    msg.setDestinationEntity(136U);
    msg.id = 211U;
    msg.value = 0.18857418890813293;

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
    msg.setTimeStamp(0.3014223300671327);
    msg.setSource(14176U);
    msg.setSourceEntity(117U);
    msg.setDestination(41208U);
    msg.setDestinationEntity(63U);
    msg.id = 112U;
    msg.value = 0.09894538448359924;

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
    msg.setTimeStamp(0.33616899928308375);
    msg.setSource(27823U);
    msg.setSourceEntity(88U);
    msg.setDestination(18277U);
    msg.setDestinationEntity(61U);
    msg.id = 176U;
    msg.value = 0.16217144416419915;

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
    msg.setTimeStamp(0.6345734731644116);
    msg.setSource(20579U);
    msg.setSourceEntity(184U);
    msg.setDestination(54996U);
    msg.setDestinationEntity(74U);
    msg.id = 108U;
    msg.value = 0.5029009979835337;

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
    msg.setTimeStamp(0.10411392627099214);
    msg.setSource(34438U);
    msg.setSourceEntity(216U);
    msg.setDestination(39528U);
    msg.setDestinationEntity(199U);
    msg.id = 45U;
    msg.value = 0.8269695677370539;

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
    msg.setTimeStamp(0.0695670028403933);
    msg.setSource(21476U);
    msg.setSourceEntity(198U);
    msg.setDestination(32543U);
    msg.setDestinationEntity(154U);
    msg.id = 4U;
    msg.value = 0.8769957946316366;

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
    msg.setTimeStamp(0.6006421324773089);
    msg.setSource(5169U);
    msg.setSourceEntity(96U);
    msg.setDestination(24660U);
    msg.setDestinationEntity(13U);
    msg.id = 207U;
    msg.angle = 0.18630948012202186;

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
    msg.setTimeStamp(0.15504429287378996);
    msg.setSource(54716U);
    msg.setSourceEntity(63U);
    msg.setDestination(52137U);
    msg.setDestinationEntity(54U);
    msg.id = 8U;
    msg.angle = 0.7701277301024723;

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
    msg.setTimeStamp(0.7287744269603885);
    msg.setSource(63395U);
    msg.setSourceEntity(173U);
    msg.setDestination(33327U);
    msg.setDestinationEntity(108U);
    msg.id = 94U;
    msg.angle = 0.7289143357345715;

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
    msg.setTimeStamp(0.6821569277391102);
    msg.setSource(14534U);
    msg.setSourceEntity(248U);
    msg.setDestination(9073U);
    msg.setDestinationEntity(119U);
    msg.op = 159U;
    msg.actions.assign("HWHXAYEIJZMLBAWDDHEIUVRELKTXNFHCBHINPTMPQTRZYMVYJXWOGPCGVPAYAIYNGMAOPLCQMOLSVXDYBXHKSSGQTZNKFFLSSYCSNIUOYAIGKCOJQZZDKCX");

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
    msg.setTimeStamp(0.5176291647459819);
    msg.setSource(41937U);
    msg.setSourceEntity(47U);
    msg.setDestination(3444U);
    msg.setDestinationEntity(232U);
    msg.op = 47U;
    msg.actions.assign("OBFXBPIDZZJRBEVAHYTMSEXLSPKJSIGOEZMLIUXUETNOTWCNQVSDGFZVDBTVPBQZUINCJPEMQROMIOCVIMJQKHAFCRUAYQKYK");

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
    msg.setTimeStamp(0.08261884911215733);
    msg.setSource(29103U);
    msg.setSourceEntity(139U);
    msg.setDestination(42993U);
    msg.setDestinationEntity(242U);
    msg.op = 17U;
    msg.actions.assign("QUAWMPMZFBAUTOLMHRWAIRSEQLVGIJOHLBPSBVMJCWMUHTTRQTJILYCEMGZGXFQDMKVBSODIVWODKNSXUPEWEKALIACJTMCKEBXAUJHFENRVBBTRRSHWKXKGYDPOXEVOLXTVPUZZCZUNUIXORZGUWDHCZFSFDCUSZCYPVVIJYFNQRJQHGIYGDLIVXJGWABFPQNWBYJXXY");

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
    msg.setTimeStamp(0.890473511424188);
    msg.setSource(45686U);
    msg.setSourceEntity(109U);
    msg.setDestination(24601U);
    msg.setDestinationEntity(226U);
    msg.actions.assign("NMRBGLKLBXXCZWNLQFEBXPINJOSZQJHJDCWYIOYRMYMDHBAXVFUCXGOHACVCUZTKWYAOUSQMGMOVRSOWEGDBDMEQAXDQZIJLFVRZMJNSGAVLGXHEICVNUIHTRLRSTJJIUYKHZSOTPBWVFTNKWCLIUPEZNJDXPYOYIBUGSEANLGTCZTQOMBQKYEVGKSXZPBTQHNFRUKFHRIFFTVLOFAMQEZXRKAP");

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
    msg.setTimeStamp(0.7469497379614792);
    msg.setSource(53812U);
    msg.setSourceEntity(208U);
    msg.setDestination(36584U);
    msg.setDestinationEntity(134U);
    msg.actions.assign("BIXUNERNMZOTBVMRKTXWOAPVRTPSXPSBERUNMBGBTUKPOGKXSHXUBMHJSORVCCUZKAFJLKKTUMYXOQQVQJPLFCIBQGYAPVALLXQMDAZFGNDSZEXXURFTFFLJJRLDIGOETVVBADWQMWRQNWHYYSFHVKEEUUYBHZIPNNASQCCGQAPTIGKWFGYPEEDDWYHHZPOTSDKLCRLOAUKHEIZDJIWGCACSOQYZJ");

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
    msg.setTimeStamp(0.8337987017204616);
    msg.setSource(29180U);
    msg.setSourceEntity(136U);
    msg.setDestination(19494U);
    msg.setDestinationEntity(53U);
    msg.actions.assign("CJGXRQMBKLWPUNKJBCURHVUUQUIHXWHVVWSRUIPDLEBNDWAAYGBUABNVAHTMQCKDOHSETQRUFGKXQFTASPLWNZQQNWDNFIOXPKJMFDIBSFJOVSPHMUWOKXZLZTZYLCDTSBAVTOWPLPZKTQIEGPTEDYIOFBUTNVHWBNPTG");

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
    msg.setTimeStamp(0.06045281863632268);
    msg.setSource(20306U);
    msg.setSourceEntity(164U);
    msg.setDestination(7567U);
    msg.setDestinationEntity(240U);
    msg.button = 101U;
    msg.value = 59U;

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
    msg.setTimeStamp(0.022830186493657423);
    msg.setSource(61818U);
    msg.setSourceEntity(29U);
    msg.setDestination(61934U);
    msg.setDestinationEntity(210U);
    msg.button = 209U;
    msg.value = 122U;

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
    msg.setTimeStamp(0.18615406982887517);
    msg.setSource(26543U);
    msg.setSourceEntity(129U);
    msg.setDestination(65508U);
    msg.setDestinationEntity(227U);
    msg.button = 154U;
    msg.value = 74U;

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
    msg.setTimeStamp(0.48823214508479995);
    msg.setSource(35555U);
    msg.setSourceEntity(166U);
    msg.setDestination(38581U);
    msg.setDestinationEntity(17U);
    msg.op = 232U;
    msg.text.assign("LXZQHXDFFLILSRRDRKMYNVUBWQUFBAUYIATOBJLSXDSONYJACBDMKJHPWICOZCUZPGJAQTBTZWXCQPDUEWACNXSGGWAMQZJA");

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
    msg.setTimeStamp(0.027172826604502265);
    msg.setSource(55062U);
    msg.setSourceEntity(26U);
    msg.setDestination(2483U);
    msg.setDestinationEntity(76U);
    msg.op = 21U;
    msg.text.assign("WRDTXKVDPDXUGHYJJSXUOJGROUATTCTXBIORSSHZVLGSYUCSZGOAQNIILPSPEEMGHVDFMJDBZNTJQPKSLXQOJGJDGDNAUYUWSTFCLBQLZIKLVQFRUZNUHDRMKTEYWABKOMNCEKCCWXQWMBCXYHYPWIFJZRQNEFEOZHVYPIBAH");

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
    msg.setTimeStamp(0.4068624206093504);
    msg.setSource(40785U);
    msg.setSourceEntity(129U);
    msg.setDestination(41106U);
    msg.setDestinationEntity(96U);
    msg.op = 117U;
    msg.text.assign("ESDJGMIPSTUQVXWTFPSKOUTCSXJLHQVRGLEKUOYKQRAWDASLYDMFVLFWOLYHYPRTQGOAVYXOERFYFNMNVYVXZGWOUBRAHHMROLZSRXVBBWVQDXUVQIDHJUYCLJOAMCKEFTEYURINQEXGPCANMDXYTSHGROCMTCGWZGAXNBLKKUCNEMBLLMBTEGJZUESBJQCICHP");

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
    msg.setTimeStamp(0.5557403228817412);
    msg.setSource(8764U);
    msg.setSourceEntity(22U);
    msg.setDestination(34066U);
    msg.setDestinationEntity(167U);
    msg.op = 153U;
    msg.time_remain = 0.5050146172780626;
    msg.sched_time = 0.41012185110099286;

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
    msg.setTimeStamp(0.3835834508815157);
    msg.setSource(17086U);
    msg.setSourceEntity(245U);
    msg.setDestination(31075U);
    msg.setDestinationEntity(15U);
    msg.op = 110U;
    msg.time_remain = 0.636620492843976;
    msg.sched_time = 0.14573672803783277;

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
    msg.setTimeStamp(0.02687468441400076);
    msg.setSource(53284U);
    msg.setSourceEntity(101U);
    msg.setDestination(31030U);
    msg.setDestinationEntity(132U);
    msg.op = 91U;
    msg.time_remain = 0.8771965086874677;
    msg.sched_time = 0.8118037091039771;

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
    msg.setTimeStamp(0.39868643363484657);
    msg.setSource(50920U);
    msg.setSourceEntity(62U);
    msg.setDestination(10261U);
    msg.setDestinationEntity(200U);
    msg.name.assign("SRNNJGXCMHJLQYYLWPZQNTXKMUXONQDAFMRCUGLJFYZSIWVTLYEBPCHZRISPMBGAPZKWIJGHKJQCTIKEIKCSKXA");
    msg.op = 69U;
    msg.sched_time = 0.16144385874703993;

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
    msg.setTimeStamp(0.795172212614153);
    msg.setSource(32555U);
    msg.setSourceEntity(212U);
    msg.setDestination(3917U);
    msg.setDestinationEntity(185U);
    msg.name.assign("OOVQGJGUVTIJBXEFMKJBIRJBZURNGJEPCIE");
    msg.op = 3U;
    msg.sched_time = 0.4909526020232666;

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
    msg.setTimeStamp(0.6727609362215855);
    msg.setSource(49102U);
    msg.setSourceEntity(6U);
    msg.setDestination(19895U);
    msg.setDestinationEntity(43U);
    msg.name.assign("JEYLJVALBWPETYHLOYWVHRZZIWPJWEFMCTOYCRHJPXKXNDFKFYGWUKLGYTHPVANJQCMCMKBOFHXRMWSBADCQSQFZEYROGAKVGSQQQBIZPNDLAIRDBHBOJEVCIXGVWXDECKWFSLKOHUTZJTXSUEOASQZNINZTGCPXDMUCNORNZPAXINQDIFVMUDQTNBOBMYRDIIPUHVHQSJEEUHGRMVTTRBNJCAWTYAK");
    msg.op = 3U;
    msg.sched_time = 0.07962159244913036;

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
    msg.setTimeStamp(0.1492191571929038);
    msg.setSource(14587U);
    msg.setSourceEntity(233U);
    msg.setDestination(63009U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.9565524408254572);
    msg.setSource(5820U);
    msg.setSourceEntity(189U);
    msg.setDestination(18324U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.6170582862583969);
    msg.setSource(15378U);
    msg.setSourceEntity(192U);
    msg.setDestination(54841U);
    msg.setDestinationEntity(175U);

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
    msg.setTimeStamp(0.8746703905961812);
    msg.setSource(31257U);
    msg.setSourceEntity(146U);
    msg.setDestination(35213U);
    msg.setDestinationEntity(110U);
    msg.name.assign("KYXKNWYTKLFWRQAWHWYXJYEKNVCJHGPDIDBCPDLBURBCRSJGTYHLVECNJQFOZVORTOJWQYIHFBVJKISAWTPXKYISNXHZXMXLKHFCWKUQAGESWLQLUSHDMBNOEMAGMUPADRUSFCGNUPZDADIMMPCRVGWFXIENLEOGSTEAOCPIFNGLVTXZDIVUQGRKPKUCXYZSMAJMAQTFBPFI");
    msg.state = 140U;

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
    msg.setTimeStamp(0.812651906740246);
    msg.setSource(17898U);
    msg.setSourceEntity(153U);
    msg.setDestination(48682U);
    msg.setDestinationEntity(244U);
    msg.name.assign("RBGECCENBAZKTKHTMPONYRVPULDWFAWKEHZCSOOZLWVUMX");
    msg.state = 110U;

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
    msg.setTimeStamp(0.943718807736818);
    msg.setSource(56367U);
    msg.setSourceEntity(119U);
    msg.setDestination(53275U);
    msg.setDestinationEntity(118U);
    msg.name.assign("PVUZFPSSZWOGUKNMBSUIVZNOKEUATSNIFYBNUIZHIYPYXLHFKRJFLCVSLWIHOJNYCSYKWPBBJXDHPYRTMGXWEDAVUCCAMERFUMZWVJEETAWYIAEAGMGLGFOCOPTXYQTKSNEEDNNCDJHRUOXQLDALQITAVBBJTBIRFCFDDOIV");
    msg.state = 70U;

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
    msg.setTimeStamp(0.024259885537277315);
    msg.setSource(34068U);
    msg.setSourceEntity(36U);
    msg.setDestination(18421U);
    msg.setDestinationEntity(109U);
    msg.name.assign("PXWFNQFOSZVJQPEHXVCSNZOBOXQSGGNDCLNYYSLJWOMNWPIEDRPZKTZNPTEZGMSZIOAPAYSWNDVIXOJDUQZFJYYNELVREQYCYQPZBUFTCUMKGOIUDAZRWGYCJRMKXEKRGAHOWKMAFDWVPKTDIEBTCXDHRSXPIBCTHKSUSRKUMGOBADBRLULTEHLVKIHQVWLANRTXWHMBPMFDJEZLIBBUMYGXAJHVLVFHOJLGFFCUCQJTFBTHSXA");
    msg.value = 168U;

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
    msg.setTimeStamp(0.31401325745356);
    msg.setSource(43659U);
    msg.setSourceEntity(124U);
    msg.setDestination(769U);
    msg.setDestinationEntity(9U);
    msg.name.assign("ZNCBFRHKRYMLUPNJZTBXWREZWVILAAFQHOIPUIAGNFVMXYMMHYFUKOKIDDGXCTPFVCEVOAALBHEQWVMQRICYLDJCKENFSLKRSHWOGXBXCPBEKGCOSVDSSTELJFXCQTVCPFHGDQJJKTKXJPFMLZAUGTDZYGSZXZSJKZDOIEWQR");
    msg.value = 233U;

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
    msg.setTimeStamp(0.4138147814575641);
    msg.setSource(20832U);
    msg.setSourceEntity(230U);
    msg.setDestination(35877U);
    msg.setDestinationEntity(106U);
    msg.name.assign("FSAMXBHPNKEIGVWISVFYLIFEHPCMREKTCHYINVHWCHRHUGKGYYNTBJXGPFMZQEMYRUSXMCUGARLEOVBBLNBTDGJDDOYWVSNWQNPMQSMONTBOJAQZPFZAZEWDHBNIQJOFORTJADLZLJLRQHVOCYMBXL");
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
    msg.setTimeStamp(0.9916429509861501);
    msg.setSource(46073U);
    msg.setSourceEntity(129U);
    msg.setDestination(4730U);
    msg.setDestinationEntity(2U);
    msg.name.assign("BWYVXKOMJIRXTJAXFHZZDDGBBXLBYQHYSLDTPKZYEDNZRAKXLYVFVANGBABPJHOKLSLWAVEWVQMXFZTZMOCOGWVNWXQOTMCFIFVGIUYJLLNHBTWVEWIPENSHQCCEETDRISYPLXCJMNMOSFLZOUVJAXYPYGBNQPKZRIGKGRYDERBWFPDTMDMNUHNQIKSAGRKCTDWQKUHMFSJZAOINSCSQLPXQKIMOCGIEUUUBGDHTHRPVSACHFQCWRJJTJAUPO");

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
    msg.setTimeStamp(0.00058898124966833);
    msg.setSource(10460U);
    msg.setSourceEntity(70U);
    msg.setDestination(20477U);
    msg.setDestinationEntity(229U);
    msg.name.assign("VFYDFBEMIJEMUFREJCYPGITDKBVACSDSINRABRNOTBPCKFYZAZTEHVWOSJVNKTBRZWDVGQHXXYTROCPGURIJCELTDOUPUYAOQHVNNDQHJBKUYMXSPEYBLLVRCXIXHNTSVJZNWKRT");

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
    msg.setTimeStamp(0.91203250782);
    msg.setSource(7660U);
    msg.setSourceEntity(173U);
    msg.setDestination(43872U);
    msg.setDestinationEntity(77U);
    msg.name.assign("EILOFYSKDHOOKJEDVYRMZGFQZAXTXMBIYEOAPLKYQDHGNFKUSJPDYAXYLHZUBEPUTIPLTXDWISAFVNHVZEXQVSSBCM");

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
    msg.setTimeStamp(0.6971026682514994);
    msg.setSource(31387U);
    msg.setSourceEntity(28U);
    msg.setDestination(21460U);
    msg.setDestinationEntity(79U);
    msg.name.assign("PJKFUYVAFZGPSFSLYYETQDDQLYUQYGBCMUERVQMFNKBNAZEIGJILVEJJPCZVCYXMXQAPUNFVNWODOQRFGKOOSGWKTTJYUOZTWXAKPULDRSSEWENSMHLHWAMDGAHBZTVMKKSTLJXFMENJBAOPKGTAKLYRXXWDVTZMRVSXBQCLBAWRUMIINBBXDENOZSZPJCOSNCXJIFZLPAVCWCVCQBHFHIPTRRXLFHHY");
    msg.value = 108U;

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
    msg.setTimeStamp(0.3293149003295295);
    msg.setSource(3826U);
    msg.setSourceEntity(116U);
    msg.setDestination(3494U);
    msg.setDestinationEntity(165U);
    msg.name.assign("XKHXDXENOAPVAEYNSCLNUUPVAECNPFOMHBMGVSGHBLUJRCBDPIOSCRIPROWLUFXZYTEFOTGSFLKKMQNQQ");
    msg.value = 176U;

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
    msg.setTimeStamp(0.7057690228876653);
    msg.setSource(60647U);
    msg.setSourceEntity(216U);
    msg.setDestination(41721U);
    msg.setDestinationEntity(242U);
    msg.name.assign("IUOEPJVXWUKGWFYRPBDCESILFVTWQFJYTFPTDWLQTVXACBQZSUYAIQOFYEXZVUVOHASDRZAEKQOVBZLCFYINZVZRBCXOYUGRHIESGBQWMYMGTDIODTDRAAZLMCOQRNNGJQNSKMPRJVNKPBCYEWPJROWKRBPYWEXRGKTGXU");
    msg.value = 60U;

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
    msg.setTimeStamp(0.7021683264612874);
    msg.setSource(37050U);
    msg.setSourceEntity(86U);
    msg.setDestination(24854U);
    msg.setDestinationEntity(235U);
    msg.id = 233U;
    msg.period = 3965841809U;
    msg.duty_cycle = 3233978087U;

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
    msg.setTimeStamp(0.5191283128096407);
    msg.setSource(41228U);
    msg.setSourceEntity(143U);
    msg.setDestination(18553U);
    msg.setDestinationEntity(191U);
    msg.id = 37U;
    msg.period = 1674736394U;
    msg.duty_cycle = 4067199344U;

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
    msg.setTimeStamp(0.9898258408215556);
    msg.setSource(38403U);
    msg.setSourceEntity(194U);
    msg.setDestination(12740U);
    msg.setDestinationEntity(116U);
    msg.id = 108U;
    msg.period = 1084220901U;
    msg.duty_cycle = 946141378U;

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
    msg.setTimeStamp(0.7522681057782009);
    msg.setSource(5559U);
    msg.setSourceEntity(122U);
    msg.setDestination(36897U);
    msg.setDestinationEntity(54U);
    msg.id = 223U;
    msg.period = 272472924U;
    msg.duty_cycle = 2932816685U;

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
    msg.setTimeStamp(0.8530678938253418);
    msg.setSource(4417U);
    msg.setSourceEntity(107U);
    msg.setDestination(35536U);
    msg.setDestinationEntity(8U);
    msg.id = 35U;
    msg.period = 3899693730U;
    msg.duty_cycle = 2858813771U;

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
    msg.setTimeStamp(0.9663230645298053);
    msg.setSource(39607U);
    msg.setSourceEntity(143U);
    msg.setDestination(8012U);
    msg.setDestinationEntity(168U);
    msg.id = 33U;
    msg.period = 3204670106U;
    msg.duty_cycle = 1351377884U;

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
    msg.setTimeStamp(0.049589427338656566);
    msg.setSource(16819U);
    msg.setSourceEntity(225U);
    msg.setDestination(19659U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.36706255969348234;
    msg.lon = 0.60680565523969;
    msg.height = 0.41437243092935283;
    msg.x = 0.08738900955213114;
    msg.y = 0.06690764722081155;
    msg.z = 0.7322962983373615;
    msg.phi = 0.1105556542439814;
    msg.theta = 0.7215190379717121;
    msg.psi = 0.6691309398709971;
    msg.u = 0.5127505351432503;
    msg.v = 0.7901880254657347;
    msg.w = 0.22353812907084747;
    msg.vx = 0.48208552148544825;
    msg.vy = 0.315695022550714;
    msg.vz = 0.3021234094158993;
    msg.p = 0.5916604601698388;
    msg.q = 0.948452928350535;
    msg.r = 0.6720434618759674;
    msg.depth = 0.4594626465851094;
    msg.alt = 0.865192738289343;

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
    msg.setTimeStamp(0.08231088097727657);
    msg.setSource(17206U);
    msg.setSourceEntity(193U);
    msg.setDestination(5639U);
    msg.setDestinationEntity(102U);
    msg.lat = 0.8359300052897829;
    msg.lon = 0.892303756147823;
    msg.height = 0.7035395469533251;
    msg.x = 0.6295431889216729;
    msg.y = 0.2643252613263991;
    msg.z = 0.7888154136222923;
    msg.phi = 0.17086851260404756;
    msg.theta = 0.8610895482525771;
    msg.psi = 0.2282319427680044;
    msg.u = 0.8670866248919905;
    msg.v = 0.03839879701672877;
    msg.w = 0.9216128805506628;
    msg.vx = 0.29787027882297645;
    msg.vy = 0.016983471667127437;
    msg.vz = 0.04127500361745584;
    msg.p = 0.1815491346453597;
    msg.q = 0.9242580608821973;
    msg.r = 0.3466783123303372;
    msg.depth = 0.5496603409139271;
    msg.alt = 0.9991226272554201;

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
    msg.setTimeStamp(0.6560581319148725);
    msg.setSource(64225U);
    msg.setSourceEntity(119U);
    msg.setDestination(1496U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.33057032186337787;
    msg.lon = 0.10516968845335606;
    msg.height = 0.9121596090423255;
    msg.x = 0.1199456973445937;
    msg.y = 0.6301813631859299;
    msg.z = 0.24762560728767669;
    msg.phi = 0.5963979688575475;
    msg.theta = 0.25505416485356824;
    msg.psi = 0.2763409832992044;
    msg.u = 0.8135149558141357;
    msg.v = 0.5137682889111725;
    msg.w = 0.7043898437097076;
    msg.vx = 0.2519615832590849;
    msg.vy = 0.29497394846558944;
    msg.vz = 0.762259430736527;
    msg.p = 0.9468080450750462;
    msg.q = 0.7620127332422184;
    msg.r = 0.20274423829943344;
    msg.depth = 0.17182979304337853;
    msg.alt = 0.17768477599992516;

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
    msg.setTimeStamp(0.14531289527669022);
    msg.setSource(25888U);
    msg.setSourceEntity(10U);
    msg.setDestination(30954U);
    msg.setDestinationEntity(254U);
    msg.x = 0.9021835668120214;
    msg.y = 0.5605179616745773;
    msg.z = 0.5776072543928955;

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
    msg.setTimeStamp(0.09415476685647084);
    msg.setSource(28010U);
    msg.setSourceEntity(248U);
    msg.setDestination(48423U);
    msg.setDestinationEntity(155U);
    msg.x = 0.2676626194159054;
    msg.y = 0.6504414955763874;
    msg.z = 0.8455018667344438;

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
    msg.setTimeStamp(0.6932766836408896);
    msg.setSource(58932U);
    msg.setSourceEntity(4U);
    msg.setDestination(28896U);
    msg.setDestinationEntity(94U);
    msg.x = 0.5353022599426193;
    msg.y = 0.8462774933836297;
    msg.z = 0.5173152377434848;

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
    msg.setTimeStamp(0.7592619574877071);
    msg.setSource(18518U);
    msg.setSourceEntity(51U);
    msg.setDestination(20560U);
    msg.setDestinationEntity(40U);
    msg.value = 0.8897785095201554;

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
    msg.setTimeStamp(0.2244468013292995);
    msg.setSource(58708U);
    msg.setSourceEntity(181U);
    msg.setDestination(7897U);
    msg.setDestinationEntity(202U);
    msg.value = 0.033701259933552996;

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
    msg.setTimeStamp(0.8119045081521761);
    msg.setSource(21254U);
    msg.setSourceEntity(83U);
    msg.setDestination(56379U);
    msg.setDestinationEntity(22U);
    msg.value = 0.39295227066733196;

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
    msg.setTimeStamp(0.7808780452825391);
    msg.setSource(44797U);
    msg.setSourceEntity(164U);
    msg.setDestination(33413U);
    msg.setDestinationEntity(133U);
    msg.value = 0.2112137736168499;

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
    msg.setTimeStamp(0.16132461454316205);
    msg.setSource(46328U);
    msg.setSourceEntity(253U);
    msg.setDestination(55149U);
    msg.setDestinationEntity(26U);
    msg.value = 0.8345190360304268;

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
    msg.setTimeStamp(0.5299466867416608);
    msg.setSource(46840U);
    msg.setSourceEntity(158U);
    msg.setDestination(60790U);
    msg.setDestinationEntity(149U);
    msg.value = 0.11522704515588988;

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
    msg.setTimeStamp(0.6508089982090189);
    msg.setSource(833U);
    msg.setSourceEntity(23U);
    msg.setDestination(17431U);
    msg.setDestinationEntity(171U);
    msg.x = 0.6816444417759808;
    msg.y = 0.7287898670267062;
    msg.z = 0.8637143046516808;
    msg.phi = 0.36086327787844596;
    msg.theta = 0.7298592262247061;
    msg.psi = 0.9643807110133481;
    msg.p = 0.6390468460034976;
    msg.q = 0.25992951496831684;
    msg.r = 0.4954686788030246;
    msg.u = 0.7338568593310648;
    msg.v = 0.7335506954917752;
    msg.w = 0.587894931544129;
    msg.bias_psi = 0.49024957581584894;
    msg.bias_r = 0.5526463897165326;

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
    msg.setTimeStamp(0.6656642755849222);
    msg.setSource(42613U);
    msg.setSourceEntity(39U);
    msg.setDestination(5364U);
    msg.setDestinationEntity(97U);
    msg.x = 0.13214576641278541;
    msg.y = 0.3824657158595146;
    msg.z = 0.530578966750841;
    msg.phi = 0.940472738390588;
    msg.theta = 0.90880301471368;
    msg.psi = 0.7780991615056673;
    msg.p = 0.9947949301650122;
    msg.q = 0.7313149676965869;
    msg.r = 0.6406424201006863;
    msg.u = 0.5063076075236277;
    msg.v = 0.4705035680793127;
    msg.w = 0.23009045297398467;
    msg.bias_psi = 0.11844756904764508;
    msg.bias_r = 0.4306214077103372;

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
    msg.setTimeStamp(0.4366456540671967);
    msg.setSource(18647U);
    msg.setSourceEntity(122U);
    msg.setDestination(32373U);
    msg.setDestinationEntity(165U);
    msg.x = 0.8356783744706217;
    msg.y = 0.7400469223884169;
    msg.z = 0.14203475322147496;
    msg.phi = 0.3794274100892616;
    msg.theta = 0.9474073824923481;
    msg.psi = 0.4607525221582186;
    msg.p = 0.5857833636966437;
    msg.q = 0.271289422044121;
    msg.r = 0.9775624043424749;
    msg.u = 0.1452574672851098;
    msg.v = 0.2972278214678823;
    msg.w = 0.05885843104237898;
    msg.bias_psi = 0.8146128379897419;
    msg.bias_r = 0.7493898798418301;

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
    msg.setTimeStamp(0.7293335209487174);
    msg.setSource(201U);
    msg.setSourceEntity(12U);
    msg.setDestination(53687U);
    msg.setDestinationEntity(159U);
    msg.bias_psi = 0.1063204594271735;
    msg.bias_r = 0.5454551333462396;
    msg.cog = 0.6466824010432759;
    msg.cyaw = 0.9598688688647286;
    msg.lbl_rej_level = 0.0437472147173531;
    msg.gps_rej_level = 0.15394089031415514;
    msg.custom_x = 0.6893754776414402;
    msg.custom_y = 0.8150534600390847;
    msg.custom_z = 0.44832603370770296;

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
    msg.setTimeStamp(0.7743128117117417);
    msg.setSource(28846U);
    msg.setSourceEntity(238U);
    msg.setDestination(21291U);
    msg.setDestinationEntity(218U);
    msg.bias_psi = 0.684922010617996;
    msg.bias_r = 0.18860239127202083;
    msg.cog = 0.7549120707359154;
    msg.cyaw = 0.1981571735966704;
    msg.lbl_rej_level = 0.877147750501638;
    msg.gps_rej_level = 0.760923025882789;
    msg.custom_x = 0.44977297389382453;
    msg.custom_y = 0.9314902978052634;
    msg.custom_z = 0.44359202828740874;

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
    msg.setTimeStamp(0.7741965686338574);
    msg.setSource(5692U);
    msg.setSourceEntity(254U);
    msg.setDestination(23607U);
    msg.setDestinationEntity(164U);
    msg.bias_psi = 0.1885516489482857;
    msg.bias_r = 0.7968057705849759;
    msg.cog = 0.5014645205231145;
    msg.cyaw = 0.933080493369525;
    msg.lbl_rej_level = 0.9899492478394659;
    msg.gps_rej_level = 0.06824032521878265;
    msg.custom_x = 0.4750332304589656;
    msg.custom_y = 0.3959519726155185;
    msg.custom_z = 0.42762270282237813;

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
    msg.setTimeStamp(0.1574535366241656);
    msg.setSource(53819U);
    msg.setSourceEntity(144U);
    msg.setDestination(33907U);
    msg.setDestinationEntity(233U);
    msg.utc_time = 0.9145229240598259;
    msg.reason = 238U;

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
    msg.setTimeStamp(0.2122496160249182);
    msg.setSource(4228U);
    msg.setSourceEntity(26U);
    msg.setDestination(13871U);
    msg.setDestinationEntity(179U);
    msg.utc_time = 0.29586607062809367;
    msg.reason = 18U;

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
    msg.setTimeStamp(0.963407897462249);
    msg.setSource(60142U);
    msg.setSourceEntity(203U);
    msg.setDestination(43478U);
    msg.setDestinationEntity(149U);
    msg.utc_time = 0.5869817031671875;
    msg.reason = 161U;

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
    msg.setTimeStamp(0.19155774929614733);
    msg.setSource(61271U);
    msg.setSourceEntity(134U);
    msg.setDestination(16164U);
    msg.setDestinationEntity(106U);
    msg.id = 30U;
    msg.range = 0.20369671582296545;
    msg.acceptance = 249U;

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
    msg.setTimeStamp(0.3584463069692738);
    msg.setSource(48599U);
    msg.setSourceEntity(104U);
    msg.setDestination(248U);
    msg.setDestinationEntity(224U);
    msg.id = 234U;
    msg.range = 0.6934086838512509;
    msg.acceptance = 114U;

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
    msg.setTimeStamp(0.08983084659844609);
    msg.setSource(4834U);
    msg.setSourceEntity(72U);
    msg.setDestination(62534U);
    msg.setDestinationEntity(121U);
    msg.id = 18U;
    msg.range = 0.41887206974932745;
    msg.acceptance = 168U;

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
    msg.setTimeStamp(0.6141453716503575);
    msg.setSource(31190U);
    msg.setSourceEntity(16U);
    msg.setDestination(30503U);
    msg.setDestinationEntity(185U);
    msg.type = 24U;
    msg.reason = 210U;
    msg.value = 0.36409183656520394;
    msg.timestep = 0.11910884783529896;

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
    msg.setTimeStamp(0.2870172169309343);
    msg.setSource(59589U);
    msg.setSourceEntity(92U);
    msg.setDestination(47659U);
    msg.setDestinationEntity(241U);
    msg.type = 90U;
    msg.reason = 247U;
    msg.value = 0.8669791047418115;
    msg.timestep = 0.14823114878093935;

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
    msg.setTimeStamp(0.9483803167145268);
    msg.setSource(23412U);
    msg.setSourceEntity(121U);
    msg.setDestination(44051U);
    msg.setDestinationEntity(217U);
    msg.type = 88U;
    msg.reason = 168U;
    msg.value = 0.055078761012218536;
    msg.timestep = 0.08626072392016249;

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
    msg.setTimeStamp(0.936820941429012);
    msg.setSource(10523U);
    msg.setSourceEntity(138U);
    msg.setDestination(52510U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.4778494052928076);
    msg.setSource(6669U);
    msg.setSourceEntity(123U);
    msg.setDestination(22295U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.6497215901552681);
    msg.setSource(27937U);
    msg.setSourceEntity(98U);
    msg.setDestination(26935U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.03600672334188493);
    msg.setSource(46307U);
    msg.setSourceEntity(196U);
    msg.setDestination(8504U);
    msg.setDestinationEntity(229U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XKQPQZGAJCYNYHLGKVEHEDNOO");
    tmp_msg_0.lat = 0.08607227236274473;
    tmp_msg_0.lon = 0.4530691998122479;
    tmp_msg_0.depth = 0.6787786015092946;
    tmp_msg_0.query_channel = 116U;
    tmp_msg_0.reply_channel = 221U;
    tmp_msg_0.transponder_delay = 80U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.5628512496489382;
    msg.y = 0.47818984874137715;
    msg.var_x = 0.9964147905281344;
    msg.var_y = 0.2205773997952284;
    msg.distance = 0.6193505587242547;

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
    msg.setTimeStamp(0.2574235391384685);
    msg.setSource(11770U);
    msg.setSourceEntity(141U);
    msg.setDestination(5271U);
    msg.setDestinationEntity(51U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HOBNLQPHZDECNUGGQFLCWZQLDMJZJVRNFNOLHZHTPDVYPSKWBYGDSNLKTMIEPFYKNUKTPRQOQVYCLXUVBYOQSKSVYXOZAXIDELZMSZCAUGBXN");
    tmp_msg_0.lat = 0.782140898952882;
    tmp_msg_0.lon = 0.5250679147649725;
    tmp_msg_0.depth = 0.6294851380904494;
    tmp_msg_0.query_channel = 76U;
    tmp_msg_0.reply_channel = 78U;
    tmp_msg_0.transponder_delay = 98U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.4789217028252749;
    msg.y = 0.7660843446217973;
    msg.var_x = 0.5931559291446042;
    msg.var_y = 0.9684511035026981;
    msg.distance = 0.7720456480429024;

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
    msg.setTimeStamp(0.055033692464095174);
    msg.setSource(29387U);
    msg.setSourceEntity(128U);
    msg.setDestination(19194U);
    msg.setDestinationEntity(195U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BIHAXRBZTNMMSJVOUZCUTQADWDVLLSEWGAYHGMOGYMZCTRUONRPQUHDNFIOAQZTFCWRCIBJEKJEWLPMOWJFXZTGALZHXNLWQIFJBNCJTCAAGSMFHHYYJESFOVYYRXXKYLORDCQIAPEUAIHTUVVKTRSQDDTLRKKYESEVUJCVPUGVMBYUVIJHGLOWZNWNKSPZPT");
    tmp_msg_0.lat = 0.3903043646758888;
    tmp_msg_0.lon = 0.07602294452396074;
    tmp_msg_0.depth = 0.011810438961304293;
    tmp_msg_0.query_channel = 187U;
    tmp_msg_0.reply_channel = 239U;
    tmp_msg_0.transponder_delay = 61U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.07765813424581847;
    msg.y = 0.45743339639986524;
    msg.var_x = 0.14826452520766953;
    msg.var_y = 0.07287696065117899;
    msg.distance = 0.06342406945560886;

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
    msg.setTimeStamp(0.28255223050418954);
    msg.setSource(33749U);
    msg.setSourceEntity(58U);
    msg.setDestination(7119U);
    msg.setDestinationEntity(9U);
    msg.state = 26U;

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
    msg.setTimeStamp(0.3383421247064389);
    msg.setSource(54060U);
    msg.setSourceEntity(123U);
    msg.setDestination(1672U);
    msg.setDestinationEntity(69U);
    msg.state = 19U;

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
    msg.setTimeStamp(0.9214733884482692);
    msg.setSource(22323U);
    msg.setSourceEntity(9U);
    msg.setDestination(11026U);
    msg.setDestinationEntity(199U);
    msg.state = 177U;

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
    msg.setTimeStamp(0.16792227407090698);
    msg.setSource(26497U);
    msg.setSourceEntity(47U);
    msg.setDestination(30868U);
    msg.setDestinationEntity(18U);
    msg.x = 0.3781579954751154;
    msg.y = 0.5352588886030517;
    msg.z = 0.3765084890669178;

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
    msg.setTimeStamp(0.9477820820849472);
    msg.setSource(2261U);
    msg.setSourceEntity(95U);
    msg.setDestination(19197U);
    msg.setDestinationEntity(212U);
    msg.x = 0.03606116384349223;
    msg.y = 0.2318585969086664;
    msg.z = 0.8773955295129033;

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
    msg.setTimeStamp(0.7012952363805284);
    msg.setSource(6549U);
    msg.setSourceEntity(69U);
    msg.setDestination(59877U);
    msg.setDestinationEntity(11U);
    msg.x = 0.9900369471453861;
    msg.y = 0.767292937784229;
    msg.z = 0.261308150041762;

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
    msg.setTimeStamp(0.7259548326756297);
    msg.setSource(26459U);
    msg.setSourceEntity(215U);
    msg.setDestination(3998U);
    msg.setDestinationEntity(42U);
    msg.value = 0.9932183553485628;

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
    msg.setTimeStamp(0.019727451448048217);
    msg.setSource(32281U);
    msg.setSourceEntity(238U);
    msg.setDestination(38977U);
    msg.setDestinationEntity(69U);
    msg.value = 0.48721903001946143;

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
    msg.setTimeStamp(0.8553070421968283);
    msg.setSource(45819U);
    msg.setSourceEntity(72U);
    msg.setDestination(20611U);
    msg.setDestinationEntity(200U);
    msg.value = 0.8036554036988978;

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
    msg.setTimeStamp(0.8904464318939106);
    msg.setSource(62241U);
    msg.setSourceEntity(169U);
    msg.setDestination(52854U);
    msg.setDestinationEntity(227U);
    msg.value = 0.17403272829762417;
    msg.z_units = 208U;

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
    msg.setTimeStamp(0.4905655661321825);
    msg.setSource(51789U);
    msg.setSourceEntity(82U);
    msg.setDestination(16446U);
    msg.setDestinationEntity(162U);
    msg.value = 0.004231086318459698;
    msg.z_units = 147U;

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
    msg.setTimeStamp(0.2962406498493435);
    msg.setSource(9872U);
    msg.setSourceEntity(186U);
    msg.setDestination(48567U);
    msg.setDestinationEntity(234U);
    msg.value = 0.5541066627231519;
    msg.z_units = 253U;

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
    msg.setTimeStamp(0.6926988091653818);
    msg.setSource(48719U);
    msg.setSourceEntity(155U);
    msg.setDestination(39430U);
    msg.setDestinationEntity(228U);
    msg.value = 0.8829050832786628;
    msg.speed_units = 78U;

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
    msg.setTimeStamp(0.8604402515087682);
    msg.setSource(6594U);
    msg.setSourceEntity(64U);
    msg.setDestination(33368U);
    msg.setDestinationEntity(23U);
    msg.value = 0.3486850088081368;
    msg.speed_units = 183U;

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
    msg.setTimeStamp(0.7393770862438375);
    msg.setSource(64246U);
    msg.setSourceEntity(173U);
    msg.setDestination(53388U);
    msg.setDestinationEntity(219U);
    msg.value = 0.3884335707374331;
    msg.speed_units = 217U;

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
    msg.setTimeStamp(0.034650773042583904);
    msg.setSource(16425U);
    msg.setSourceEntity(225U);
    msg.setDestination(32818U);
    msg.setDestinationEntity(60U);
    msg.value = 0.27624272929651783;

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
    msg.setTimeStamp(0.18471189830577783);
    msg.setSource(21835U);
    msg.setSourceEntity(252U);
    msg.setDestination(31238U);
    msg.setDestinationEntity(249U);
    msg.value = 0.08518968014430417;

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
    msg.setTimeStamp(0.3460307323474927);
    msg.setSource(15857U);
    msg.setSourceEntity(104U);
    msg.setDestination(60432U);
    msg.setDestinationEntity(232U);
    msg.value = 0.9223843641630737;

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
    msg.setTimeStamp(0.5102306632709828);
    msg.setSource(33857U);
    msg.setSourceEntity(222U);
    msg.setDestination(22954U);
    msg.setDestinationEntity(207U);
    msg.value = 0.911170737475781;

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
    msg.setTimeStamp(0.270906132741462);
    msg.setSource(2588U);
    msg.setSourceEntity(147U);
    msg.setDestination(21919U);
    msg.setDestinationEntity(87U);
    msg.value = 0.8755702716699788;

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
    msg.setTimeStamp(0.3880104899379829);
    msg.setSource(1482U);
    msg.setSourceEntity(236U);
    msg.setDestination(52101U);
    msg.setDestinationEntity(25U);
    msg.value = 0.08267517968562643;

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
    msg.setTimeStamp(0.3297464277003034);
    msg.setSource(42066U);
    msg.setSourceEntity(142U);
    msg.setDestination(53274U);
    msg.setDestinationEntity(177U);
    msg.value = 0.18374550837569548;

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
    msg.setTimeStamp(0.14120335264557926);
    msg.setSource(15251U);
    msg.setSourceEntity(117U);
    msg.setDestination(34102U);
    msg.setDestinationEntity(36U);
    msg.value = 0.21162983418593373;

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
    msg.setTimeStamp(0.04892140046686788);
    msg.setSource(41459U);
    msg.setSourceEntity(19U);
    msg.setDestination(57680U);
    msg.setDestinationEntity(40U);
    msg.value = 0.7985797155163876;

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
    msg.setTimeStamp(0.2551331328917308);
    msg.setSource(19832U);
    msg.setSourceEntity(228U);
    msg.setDestination(65358U);
    msg.setDestinationEntity(145U);
    msg.start_lat = 0.3362567456345541;
    msg.start_lon = 0.30139800093742375;
    msg.start_z = 0.5890841364021497;
    msg.start_z_units = 193U;
    msg.end_lat = 0.7604875953263476;
    msg.end_lon = 0.8562800994189668;
    msg.end_z = 0.4045649778898548;
    msg.end_z_units = 2U;
    msg.speed = 0.518097274412636;
    msg.speed_units = 132U;
    msg.lradius = 0.9232113138097339;
    msg.flags = 254U;

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
    msg.setTimeStamp(0.4618329774780444);
    msg.setSource(41056U);
    msg.setSourceEntity(60U);
    msg.setDestination(55355U);
    msg.setDestinationEntity(248U);
    msg.start_lat = 0.6705275492896758;
    msg.start_lon = 0.8057563971468621;
    msg.start_z = 0.44644633668191;
    msg.start_z_units = 137U;
    msg.end_lat = 0.6638689538086651;
    msg.end_lon = 0.4725393210910862;
    msg.end_z = 0.011902034036425979;
    msg.end_z_units = 100U;
    msg.speed = 0.1839937738618317;
    msg.speed_units = 126U;
    msg.lradius = 0.6655035244566643;
    msg.flags = 141U;

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
    msg.setTimeStamp(0.9492003023991983);
    msg.setSource(18606U);
    msg.setSourceEntity(157U);
    msg.setDestination(13156U);
    msg.setDestinationEntity(169U);
    msg.start_lat = 0.5795699446665401;
    msg.start_lon = 0.7317953002433312;
    msg.start_z = 0.3386743809711127;
    msg.start_z_units = 62U;
    msg.end_lat = 0.06032939154171435;
    msg.end_lon = 0.24617953878249166;
    msg.end_z = 0.870882207434821;
    msg.end_z_units = 215U;
    msg.speed = 0.5737749228842062;
    msg.speed_units = 147U;
    msg.lradius = 0.7319857184864866;
    msg.flags = 136U;

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
    msg.setTimeStamp(0.507480078799463);
    msg.setSource(6083U);
    msg.setSourceEntity(158U);
    msg.setDestination(46148U);
    msg.setDestinationEntity(144U);
    msg.x = 0.5994551733767166;
    msg.y = 0.3088819783861875;
    msg.z = 0.28201003729256646;
    msg.k = 0.22719626227839884;
    msg.m = 0.4022208513570751;
    msg.n = 0.005046986442858836;
    msg.flags = 12U;

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
    msg.setTimeStamp(0.05315314915461167);
    msg.setSource(55242U);
    msg.setSourceEntity(207U);
    msg.setDestination(34458U);
    msg.setDestinationEntity(237U);
    msg.x = 0.9802684428893712;
    msg.y = 0.5536067066764485;
    msg.z = 0.38003355635018166;
    msg.k = 0.7887990783495347;
    msg.m = 0.6635400881400018;
    msg.n = 0.8541369804239709;
    msg.flags = 161U;

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
    msg.setTimeStamp(0.6663316215092563);
    msg.setSource(63689U);
    msg.setSourceEntity(190U);
    msg.setDestination(45513U);
    msg.setDestinationEntity(219U);
    msg.x = 0.7573490254550553;
    msg.y = 0.8001114703548847;
    msg.z = 0.1891896919228062;
    msg.k = 0.7442014365459563;
    msg.m = 0.2709398327562518;
    msg.n = 0.10075013200499172;
    msg.flags = 82U;

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
    msg.setTimeStamp(0.9928009571431725);
    msg.setSource(57801U);
    msg.setSourceEntity(122U);
    msg.setDestination(37064U);
    msg.setDestinationEntity(86U);
    msg.value = 0.12872891563388644;

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
    msg.setTimeStamp(0.6808245121986713);
    msg.setSource(58767U);
    msg.setSourceEntity(35U);
    msg.setDestination(20039U);
    msg.setDestinationEntity(232U);
    msg.value = 0.23991136385448242;

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
    msg.setTimeStamp(0.14319030012993805);
    msg.setSource(63480U);
    msg.setSourceEntity(241U);
    msg.setDestination(31258U);
    msg.setDestinationEntity(228U);
    msg.value = 0.17833931673712122;

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
    msg.setTimeStamp(0.5531100641455743);
    msg.setSource(58211U);
    msg.setSourceEntity(252U);
    msg.setDestination(1830U);
    msg.setDestinationEntity(69U);
    msg.u = 0.6870999875077503;
    msg.v = 0.15869972924417142;
    msg.w = 0.3372880872708599;
    msg.p = 0.5113850571955345;
    msg.q = 0.6304761751106405;
    msg.r = 0.8225629641992268;
    msg.flags = 198U;

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
    msg.setTimeStamp(0.6716468788615415);
    msg.setSource(32018U);
    msg.setSourceEntity(102U);
    msg.setDestination(53594U);
    msg.setDestinationEntity(203U);
    msg.u = 0.4632843232032654;
    msg.v = 0.8946081677956111;
    msg.w = 0.8480315790224611;
    msg.p = 0.586104245845612;
    msg.q = 0.35543470613845984;
    msg.r = 0.20822909308051973;
    msg.flags = 9U;

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
    msg.setTimeStamp(0.8864828773211201);
    msg.setSource(60659U);
    msg.setSourceEntity(47U);
    msg.setDestination(60392U);
    msg.setDestinationEntity(59U);
    msg.u = 0.1717785210545958;
    msg.v = 0.8043133205625315;
    msg.w = 0.06044831546705809;
    msg.p = 0.2910772031029536;
    msg.q = 0.3508276013866384;
    msg.r = 0.5450790744595079;
    msg.flags = 235U;

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
    msg.setTimeStamp(0.2739593743797616);
    msg.setSource(7799U);
    msg.setSourceEntity(99U);
    msg.setDestination(10682U);
    msg.setDestinationEntity(18U);
    msg.start_lat = 0.6191310847642899;
    msg.start_lon = 0.150482369598551;
    msg.start_z = 0.5336335282156225;
    msg.start_z_units = 205U;
    msg.end_lat = 0.35326848550603795;
    msg.end_lon = 0.46349533878752636;
    msg.end_z = 0.7911112807415785;
    msg.end_z_units = 156U;
    msg.lradius = 0.6468582454271171;
    msg.flags = 97U;
    msg.x = 0.008365873142502034;
    msg.y = 0.5760202086386144;
    msg.z = 0.7144477654720761;
    msg.vx = 0.23805730022569638;
    msg.vy = 0.015041903037011695;
    msg.vz = 0.878008740829565;
    msg.course_error = 0.9767508403458717;
    msg.eta = 718U;

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
    msg.setTimeStamp(0.9245462594182493);
    msg.setSource(64461U);
    msg.setSourceEntity(240U);
    msg.setDestination(35242U);
    msg.setDestinationEntity(106U);
    msg.start_lat = 0.7598223686045611;
    msg.start_lon = 0.13500415182888326;
    msg.start_z = 0.38976512470667035;
    msg.start_z_units = 80U;
    msg.end_lat = 0.40643988176752643;
    msg.end_lon = 0.17709562757440966;
    msg.end_z = 0.6533181429739154;
    msg.end_z_units = 52U;
    msg.lradius = 0.33934169715889884;
    msg.flags = 125U;
    msg.x = 0.28163145574051884;
    msg.y = 0.7527232874185474;
    msg.z = 0.6167839575871528;
    msg.vx = 0.47559359747663676;
    msg.vy = 0.080725947509947;
    msg.vz = 0.6408361685057935;
    msg.course_error = 0.31589588830894766;
    msg.eta = 45681U;

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
    msg.setTimeStamp(0.7963532283412786);
    msg.setSource(2066U);
    msg.setSourceEntity(237U);
    msg.setDestination(44328U);
    msg.setDestinationEntity(211U);
    msg.start_lat = 0.5199849415889611;
    msg.start_lon = 0.4546052149537453;
    msg.start_z = 0.9419984779639214;
    msg.start_z_units = 224U;
    msg.end_lat = 0.5230024842938447;
    msg.end_lon = 0.8407757830896967;
    msg.end_z = 0.3109511154437665;
    msg.end_z_units = 6U;
    msg.lradius = 0.22092896741706725;
    msg.flags = 218U;
    msg.x = 0.9352134317722443;
    msg.y = 0.31337374447955524;
    msg.z = 0.12998216330093582;
    msg.vx = 0.003086640246062866;
    msg.vy = 0.7319879780556137;
    msg.vz = 0.9867833996539304;
    msg.course_error = 0.7072201020649634;
    msg.eta = 56709U;

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
    msg.setTimeStamp(0.8623711317810033);
    msg.setSource(60834U);
    msg.setSourceEntity(205U);
    msg.setDestination(48657U);
    msg.setDestinationEntity(223U);
    msg.k = 0.1724612191075121;
    msg.m = 0.934016796094565;
    msg.n = 0.6149185635265583;

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
    msg.setTimeStamp(0.6054769945573859);
    msg.setSource(24357U);
    msg.setSourceEntity(60U);
    msg.setDestination(13761U);
    msg.setDestinationEntity(18U);
    msg.k = 0.7357540881498882;
    msg.m = 0.9367566027270686;
    msg.n = 0.7484845828493618;

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
    msg.setTimeStamp(0.631898587824166);
    msg.setSource(48570U);
    msg.setSourceEntity(181U);
    msg.setDestination(55746U);
    msg.setDestinationEntity(85U);
    msg.k = 0.03023405856270156;
    msg.m = 0.4411107702609952;
    msg.n = 0.9904268096874513;

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
    msg.setTimeStamp(0.39881599768096876);
    msg.setSource(17126U);
    msg.setSourceEntity(14U);
    msg.setDestination(6894U);
    msg.setDestinationEntity(14U);
    msg.p = 0.7364462107389323;
    msg.i = 0.686674317082038;
    msg.d = 0.7800672530659422;
    msg.a = 0.920652405384162;

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
    msg.setTimeStamp(0.3225702714731423);
    msg.setSource(10545U);
    msg.setSourceEntity(237U);
    msg.setDestination(65017U);
    msg.setDestinationEntity(204U);
    msg.p = 0.8414974702938607;
    msg.i = 0.6429340793114896;
    msg.d = 0.10893078287769731;
    msg.a = 0.9158992105910093;

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
    msg.setTimeStamp(0.2941463946494831);
    msg.setSource(59137U);
    msg.setSourceEntity(95U);
    msg.setDestination(6192U);
    msg.setDestinationEntity(178U);
    msg.p = 0.810593415770036;
    msg.i = 0.1809636605894127;
    msg.d = 0.12120903762503932;
    msg.a = 0.49549747347712536;

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
    msg.setTimeStamp(0.915767030425264);
    msg.setSource(49347U);
    msg.setSourceEntity(133U);
    msg.setDestination(56238U);
    msg.setDestinationEntity(252U);
    msg.op = 192U;

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
    msg.setTimeStamp(0.27475603158569417);
    msg.setSource(46431U);
    msg.setSourceEntity(150U);
    msg.setDestination(46746U);
    msg.setDestinationEntity(28U);
    msg.op = 46U;

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
    msg.setTimeStamp(0.2195144011738458);
    msg.setSource(57985U);
    msg.setSourceEntity(100U);
    msg.setDestination(23037U);
    msg.setDestinationEntity(252U);
    msg.op = 131U;

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
    msg.setTimeStamp(0.2785868522655338);
    msg.setSource(17137U);
    msg.setSourceEntity(56U);
    msg.setDestination(45876U);
    msg.setDestinationEntity(13U);
    msg.timeout = 7203U;
    msg.lat = 0.30042169882701497;
    msg.lon = 0.07007699095212583;
    msg.z = 0.11159233603730101;
    msg.z_units = 102U;
    msg.speed = 0.8515197223595421;
    msg.speed_units = 93U;
    msg.roll = 0.15667715364533796;
    msg.pitch = 0.6882553776758712;
    msg.yaw = 0.5783896990521173;
    msg.custom.assign("DUISKTCEVGHURRXRZYDPRPVVAAONVHVSUQBJADEKBZCETKDQLNHMASMYUOXGZFBQXTJMQLIEDZLGOJVDTKANIVOIWBSGCDOECGEARYJIJTPYLFHWQKYAUUPYULWYXZHBZOJTBTQSNNRFWRFCFEADPWWDBCZCMSQCGHMBTIHFFIKKVSWFLNPINPKXROJOQGIJNRVNFNGSSQXKOYBHJQEVKYTYJWUMZEXGMXXU");

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
    msg.setTimeStamp(0.049213897845757026);
    msg.setSource(11595U);
    msg.setSourceEntity(34U);
    msg.setDestination(3381U);
    msg.setDestinationEntity(240U);
    msg.timeout = 24765U;
    msg.lat = 0.2423835337546949;
    msg.lon = 0.02723921814594188;
    msg.z = 0.9038861080192069;
    msg.z_units = 147U;
    msg.speed = 0.25606471938019204;
    msg.speed_units = 202U;
    msg.roll = 0.5205587171854887;
    msg.pitch = 0.9126099099240993;
    msg.yaw = 0.23399902044258514;
    msg.custom.assign("BTUHNAFRKNKGUWXYHZHJQMCV");

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
    msg.setTimeStamp(0.27929465671351617);
    msg.setSource(65391U);
    msg.setSourceEntity(75U);
    msg.setDestination(26890U);
    msg.setDestinationEntity(38U);
    msg.timeout = 58442U;
    msg.lat = 0.23714508335633977;
    msg.lon = 0.9061364838738007;
    msg.z = 0.6451441056130675;
    msg.z_units = 154U;
    msg.speed = 0.12446553060091559;
    msg.speed_units = 199U;
    msg.roll = 0.8907237833826047;
    msg.pitch = 0.12274513225086903;
    msg.yaw = 0.9257876485608113;
    msg.custom.assign("HJZKTETCBLOUVNCMVIXUSZKYRWDCYERDFGDFUAFMQPBQHNUPLWFDVJGHSB");

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
    msg.setTimeStamp(0.6262448015413942);
    msg.setSource(51909U);
    msg.setSourceEntity(181U);
    msg.setDestination(29941U);
    msg.setDestinationEntity(78U);
    msg.timeout = 17332U;
    msg.lat = 0.01459739791600867;
    msg.lon = 0.9778551557272647;
    msg.z = 0.39343526654612737;
    msg.z_units = 248U;
    msg.speed = 0.045510269769015066;
    msg.speed_units = 93U;
    msg.duration = 58815U;
    msg.radius = 0.5780856485007367;
    msg.flags = 140U;
    msg.custom.assign("BRKLOFIHKFQJMXCIUJGQZTRVNHHOTLRVMFQQLGSFDDS");

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
    msg.setTimeStamp(0.7885359932442909);
    msg.setSource(21046U);
    msg.setSourceEntity(117U);
    msg.setDestination(57668U);
    msg.setDestinationEntity(62U);
    msg.timeout = 63483U;
    msg.lat = 0.3857872464514027;
    msg.lon = 0.5798368513946035;
    msg.z = 0.12090946038444761;
    msg.z_units = 89U;
    msg.speed = 0.6505178171478117;
    msg.speed_units = 205U;
    msg.duration = 61473U;
    msg.radius = 0.8849749547945632;
    msg.flags = 54U;
    msg.custom.assign("BCRTNPASLXUMUIIGQNEAXODXRZAZGEFSIUEVTMVHSGMCLJALTYYSTBMJOHIUHLGQWFLAVIWSBAEWZFTYFNTOREHIYXBNYAUKXVBRGXKQPGICUMCFHTGZBHOZYNYBGPMSPLEJHMFDWKXPQYJTSIQGBLXFODNUVVPRKHCTEHYJQKCRZAUPKANMYWQRDSQWZXHOEFBJWNRGTCVEJCOPIBKVIDCSPRZWZPMDLCDMQKRKOFVDXULJFNJD");

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
    msg.setTimeStamp(0.1217494012721887);
    msg.setSource(42691U);
    msg.setSourceEntity(211U);
    msg.setDestination(12615U);
    msg.setDestinationEntity(117U);
    msg.timeout = 56662U;
    msg.lat = 0.3557836203931867;
    msg.lon = 0.9148759943350173;
    msg.z = 0.8580631574679626;
    msg.z_units = 245U;
    msg.speed = 0.4581730594950738;
    msg.speed_units = 79U;
    msg.duration = 11559U;
    msg.radius = 0.7846866725517928;
    msg.flags = 213U;
    msg.custom.assign("QNOEAOXDOWVYDGGDVNUHGDZZFMRSWUKJPKHKGTXULKQELLJPOABBIMAECAXBTYUYHXHLHPXOWDJHFKKSGDOTRYRISKESYJWCCLPTBCNQUKZSMUEZNRTWMDSZZEBVFFVNIUPGNEIPMBF");

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
    msg.setTimeStamp(0.07469343090054437);
    msg.setSource(33291U);
    msg.setSourceEntity(40U);
    msg.setDestination(25371U);
    msg.setDestinationEntity(78U);
    msg.custom.assign("SVLEMRPBCFIJGCGHGXJQZQEEPEODMXQYKBAKEFSESCDPDLAVJLRXJRARTIOYGUHOBNNZAHVYKEDEXSRYHALZIAUTVQYHSQADJNFUZITKFCBKDDGVYZFROJNWKYTSMYSZWUKTUNVHKFGWUAUCBWAHXCVJFRZTVKWBXMZLHOBOXCQIMOPPLZSETWUYQTCNMNVUXMBPOR");

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
    msg.setTimeStamp(0.003425102744571973);
    msg.setSource(46440U);
    msg.setSourceEntity(70U);
    msg.setDestination(26865U);
    msg.setDestinationEntity(114U);
    msg.custom.assign("WQDZHTDISOCMXKZBVXAOJTMCCEFISXLMLVFBRKAQSFPRNRFAGHKIOPXZOWIFKMSYVUTAGEJBSCUFHWTJDZCOXQMNYUFBLPSBGBWTIWZNPRLNUQWEIBQEMCRADFTIPSOADHZRVHNJLVUBJPEKLADEYNBJVJVEPYEQQXWUDYIZWGXSXCUUHGEAFCHOIDXKMKZHTGVMYSOLRKKPRQRTSYAWERXFBJZNCPGZJNYGKHHULOQWGNGPAOVDVJMIYT");

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
    msg.setTimeStamp(0.5111599972211524);
    msg.setSource(55261U);
    msg.setSourceEntity(137U);
    msg.setDestination(2845U);
    msg.setDestinationEntity(92U);
    msg.custom.assign("DZUNCDIWPUYVGQROOVSFJWTJFWZBHK");

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
    msg.setTimeStamp(0.9306281370589112);
    msg.setSource(28276U);
    msg.setSourceEntity(132U);
    msg.setDestination(35116U);
    msg.setDestinationEntity(177U);
    msg.timeout = 38539U;
    msg.lat = 0.7173130572705212;
    msg.lon = 0.7923885393770593;
    msg.z = 0.8477867300902373;
    msg.z_units = 72U;
    msg.duration = 37900U;
    msg.speed = 0.3715862007847547;
    msg.speed_units = 165U;
    msg.type = 82U;
    msg.radius = 0.866016588361353;
    msg.length = 0.25660893970929166;
    msg.bearing = 0.45807682357320845;
    msg.direction = 214U;
    msg.custom.assign("YPDPWMABQBPNYFLILBCVPRESAIHJPPRDULEWNXUUBZGMQQITZBEXGNMBKHWANJXXOOXHKYJNGCLJHECRCVBDHUIFGEGDCRHNXTIWFVDYADTEMIWELKPGMDHXGEZCNOWBTZSQJIVAOSKYJFUSFAJZFWVRRMOIOTBLXHPSALRPBIKOUYK");

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
    msg.setTimeStamp(0.06837515202141164);
    msg.setSource(10730U);
    msg.setSourceEntity(86U);
    msg.setDestination(19438U);
    msg.setDestinationEntity(179U);
    msg.timeout = 45602U;
    msg.lat = 0.18899092102879644;
    msg.lon = 0.72746796673144;
    msg.z = 0.4952018086434048;
    msg.z_units = 112U;
    msg.duration = 40048U;
    msg.speed = 0.6684089682472707;
    msg.speed_units = 217U;
    msg.type = 110U;
    msg.radius = 0.8785097761729069;
    msg.length = 0.4139911175711566;
    msg.bearing = 0.8573700469442288;
    msg.direction = 183U;
    msg.custom.assign("PJLTGVQGZANFVHIBHBBNTUAONOHSVTNYHMYVNKEZOPVGCTCCYBKWWWROHHWPRUNBAGERPWLLLKJIHMYOCBTITOJZVSPPKYQYZEQLQJNRSWSIPDXNRDAXBXFZAXCFCMRSRFUAWMGFGDZMIETLFTEWQQZXPRYEHBGCZUXSUMHPQFJQMEGXKCADGKHSYAKLVKK");

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
    msg.setTimeStamp(0.41433586856341775);
    msg.setSource(37821U);
    msg.setSourceEntity(253U);
    msg.setDestination(37116U);
    msg.setDestinationEntity(110U);
    msg.timeout = 63831U;
    msg.lat = 0.1675408459042631;
    msg.lon = 0.009906721640704608;
    msg.z = 0.33109797783976125;
    msg.z_units = 95U;
    msg.duration = 15976U;
    msg.speed = 0.5054261224795622;
    msg.speed_units = 121U;
    msg.type = 252U;
    msg.radius = 0.560870360089969;
    msg.length = 0.9631962725893739;
    msg.bearing = 0.7473752450809997;
    msg.direction = 108U;
    msg.custom.assign("QBOWJNTDUAIKMTUSSCIHEOGQNESFBOVW");

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
    msg.setTimeStamp(0.4995945911162045);
    msg.setSource(57377U);
    msg.setSourceEntity(6U);
    msg.setDestination(21400U);
    msg.setDestinationEntity(71U);
    msg.duration = 56397U;
    msg.custom.assign("DDNHVXQYIBADIVRDOJBIHOCKIFCANQJYOMAZL");

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
    msg.setTimeStamp(0.03346106661547654);
    msg.setSource(1710U);
    msg.setSourceEntity(38U);
    msg.setDestination(18339U);
    msg.setDestinationEntity(68U);
    msg.duration = 41290U;
    msg.custom.assign("EUITLRFVHEXZODBAWULFZVIYAJBZSEVEKNBVOSHQHCWJRWXAMPLKEYMQIJTMRWOKUBSPLWGHBDMLNFHXGYCWXWPTGDSABPURPVNARKDXNZHNJGLBKCBTTPBYIRZTHATKFUIOKWRMQPFZKYNQCROZPQDFMKXQGYSLXGXQACCJYJNOYGZJHTJNYDWDLAKEDCCTBVUIHUSSDCQHAIP");

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
    msg.setTimeStamp(0.4568482467974537);
    msg.setSource(4783U);
    msg.setSourceEntity(105U);
    msg.setDestination(19420U);
    msg.setDestinationEntity(48U);
    msg.duration = 25755U;
    msg.custom.assign("HPIYLIWBCQWBKWNTHWUMWQRSLNAHHNTXYFMJMACUGVHOCFGZXGGRASDZJJKFDJRQPAEKMRERGOIZMRENSBYBFEYSCQQRRLEKEJIAVGAJCNNHFS");

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
    msg.setTimeStamp(0.9292926108709876);
    msg.setSource(62353U);
    msg.setSourceEntity(245U);
    msg.setDestination(62307U);
    msg.setDestinationEntity(167U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4920589667066769;
    tmp_msg_0.speed_units = 181U;
    msg.control.set(tmp_msg_0);
    msg.duration = 19011U;
    msg.custom.assign("JDGYKGMZRBXYXIMTAEPDKYZWZURWHHDBTIQVNLHLTEVXISWDAJQOUCTFTDWCNMSBKOJVOZOQYPSABDBNAUJYHP");

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
    msg.setTimeStamp(0.40229992409636317);
    msg.setSource(49861U);
    msg.setSourceEntity(229U);
    msg.setDestination(25929U);
    msg.setDestinationEntity(249U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.4881967042352189;
    tmp_msg_0.z_units = 42U;
    msg.control.set(tmp_msg_0);
    msg.duration = 52971U;
    msg.custom.assign("KWXTZJZBNJDNMARLLYHAKMQHNLGSXGMRFUPWMYKTRWUXXDIUVLZYGONSAVZMOXLDYECMOIUWLJKIKQJCEBHPWKCTXSFGVZBGJPAEBLGHQCVIOTUTNRSNGLZICVHDJADTOERQEJPUOGZQOCFXHSFQAOKJVIPUEQQJSFFFRT");

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
    msg.setTimeStamp(0.7956788489380395);
    msg.setSource(15418U);
    msg.setSourceEntity(19U);
    msg.setDestination(63421U);
    msg.setDestinationEntity(229U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.7443647448396696;
    tmp_msg_0.z_units = 68U;
    msg.control.set(tmp_msg_0);
    msg.duration = 58794U;
    msg.custom.assign("HYXOQPKFFEXPRUKFZMOYBYHJLHLRZYSBFXRTTPKYOOZGAOGEUIQCAXPFMZ");

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
    msg.setTimeStamp(0.7060425347587869);
    msg.setSource(30128U);
    msg.setSourceEntity(161U);
    msg.setDestination(43140U);
    msg.setDestinationEntity(172U);
    msg.timeout = 8173U;
    msg.lat = 0.5948960477276166;
    msg.lon = 0.5378322294343654;
    msg.z = 0.2147948166983571;
    msg.z_units = 11U;
    msg.speed = 0.7675805822678425;
    msg.speed_units = 251U;
    msg.bearing = 0.6722012158395521;
    msg.cross_angle = 0.41849535389178727;
    msg.width = 0.5090366917044967;
    msg.length = 0.6145806371974538;
    msg.hstep = 0.638192197714988;
    msg.coff = 68U;
    msg.alternation = 159U;
    msg.flags = 254U;
    msg.custom.assign("JGPPBKVBUDZALKPBCZONXZJHRFGUTTYJKMSMVNVQSCOFRLGVKCOWLBHEJYKCXREEYERMGMXIQZOBTDTWWSEDRDSCUIKFDDSPNUQADPCQUYVIEWNYDJMIJLPPQVHPXAKAUWEKFVHFITMRHXFFRSIGILAONYXTNXRAOJIPBFCUGZTSJWVYBLYEZHAZMLGIKHNUCTSBBBQZTELZFQWINGLRPHCMLSWJYMQYXOAVCWNOMKRUUXEA");

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
    msg.setTimeStamp(0.43266876584000813);
    msg.setSource(21367U);
    msg.setSourceEntity(213U);
    msg.setDestination(42221U);
    msg.setDestinationEntity(239U);
    msg.timeout = 33807U;
    msg.lat = 0.5502695939671258;
    msg.lon = 0.8806056335037601;
    msg.z = 0.7185916595183782;
    msg.z_units = 58U;
    msg.speed = 0.5974233036249816;
    msg.speed_units = 111U;
    msg.bearing = 0.21341939231868357;
    msg.cross_angle = 0.8388787460926599;
    msg.width = 0.10048140119261195;
    msg.length = 0.9018049958044423;
    msg.hstep = 0.7140026673776778;
    msg.coff = 129U;
    msg.alternation = 57U;
    msg.flags = 12U;
    msg.custom.assign("YPUZJPQJMZRASHJKRHFKGOADTSZGAHLTHEGUGLWYKUWEDCVGKVQNSXQMRFFWHCYOJRFQYQMMVCFRXSPAXKNASTLGDFISQFMGIERRKRUVTLJDPPNCYVBSBPYXCLUTEBZBWNAQCDRIMTTHDXDJVGPNPAEVEENOWOHYVFYYQHHZZNHIABBLLUBBGOQMXNJTRWZMOSZODZGEMIXKOSAULJCIDCZUCOWBWVJQOXIUIWDE");

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
    msg.setTimeStamp(0.6568237767129682);
    msg.setSource(18469U);
    msg.setSourceEntity(30U);
    msg.setDestination(44457U);
    msg.setDestinationEntity(211U);
    msg.timeout = 31092U;
    msg.lat = 0.43512285100509074;
    msg.lon = 0.45833175108251656;
    msg.z = 0.8870780329065092;
    msg.z_units = 131U;
    msg.speed = 0.6739596073646208;
    msg.speed_units = 200U;
    msg.bearing = 0.08366496847765503;
    msg.cross_angle = 0.44657371894782116;
    msg.width = 0.9585727446099215;
    msg.length = 0.9646652744476326;
    msg.hstep = 0.5216242624648739;
    msg.coff = 177U;
    msg.alternation = 115U;
    msg.flags = 254U;
    msg.custom.assign("ITUPAUKDDHIMHGFVFMNZVIYJSFSPAUAKLFLEZSHSCQRYBOWYRKWWUDLWPGRTKFAEKCNOOTKTEHOVQFIJZCFVHRPNBXPTRCMKXGTIZBJFTHEXDEAPYQGOYCEQXISUAWNBXMWAATLQYWLIMZHRZCZMFUKMSJJCLXJQGVYBXSVNAWESN");

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
    msg.setTimeStamp(0.6956599129819858);
    msg.setSource(24360U);
    msg.setSourceEntity(149U);
    msg.setDestination(30960U);
    msg.setDestinationEntity(5U);
    msg.timeout = 53248U;
    msg.lat = 0.4446606465951961;
    msg.lon = 0.7960611042100902;
    msg.z = 0.6816000495682186;
    msg.z_units = 238U;
    msg.speed = 0.14135790009909077;
    msg.speed_units = 153U;
    msg.custom.assign("VDZFVYAEOIPUBAKZFXNJEBWLJHHZICHHAWPNMPXHWSBFKBBBTCTXFAHDCFXWLAIZKDFQ");

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
    msg.setTimeStamp(0.35586764665730297);
    msg.setSource(62611U);
    msg.setSourceEntity(238U);
    msg.setDestination(3371U);
    msg.setDestinationEntity(27U);
    msg.timeout = 11052U;
    msg.lat = 0.4906512337312453;
    msg.lon = 0.2874105922632495;
    msg.z = 0.45001061715741764;
    msg.z_units = 136U;
    msg.speed = 0.16937349851354966;
    msg.speed_units = 229U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.7723611796646237;
    tmp_msg_0.y = 0.8854502420484455;
    tmp_msg_0.z = 0.5271253088180144;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("DAPQHBYHROPFONSRXNORKAUQJM");

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
    msg.setTimeStamp(0.4944580632804616);
    msg.setSource(56967U);
    msg.setSourceEntity(179U);
    msg.setDestination(44133U);
    msg.setDestinationEntity(98U);
    msg.timeout = 46221U;
    msg.lat = 0.9962446535099575;
    msg.lon = 0.5450727814598522;
    msg.z = 0.9631295141327945;
    msg.z_units = 251U;
    msg.speed = 0.8821489215616839;
    msg.speed_units = 252U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.3992262162720007;
    tmp_msg_0.y = 0.21112506111912488;
    tmp_msg_0.z = 0.5660465677598485;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("BQKLDWHNVRTSYOBVYCVERGTJNKHUHQBANBSPBMACKYPXOEZCNELTRDKYCHFDZXUUTGJXJRYQMFUCBXJIFCRMXRPINEEWTGDIDQHDGSUHLSHKDSGFISPPNWQJNOFVWMOVBDYAUZEHNVTKUXSEPYIPOAGKRAITVMZKXXNBUCZMMJGYEWOWWLZJV");

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
    msg.setTimeStamp(0.2577629652135469);
    msg.setSource(47143U);
    msg.setSourceEntity(227U);
    msg.setDestination(56103U);
    msg.setDestinationEntity(219U);
    msg.x = 0.032464614000005776;
    msg.y = 0.2450459562409898;
    msg.z = 0.11686715962925631;

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
    msg.setTimeStamp(0.9096081261299255);
    msg.setSource(2662U);
    msg.setSourceEntity(47U);
    msg.setDestination(11493U);
    msg.setDestinationEntity(152U);
    msg.x = 0.0074236490584985715;
    msg.y = 0.395914453433294;
    msg.z = 0.6699707378675415;

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
    msg.setTimeStamp(0.28789376904486896);
    msg.setSource(38831U);
    msg.setSourceEntity(66U);
    msg.setDestination(10053U);
    msg.setDestinationEntity(134U);
    msg.x = 0.659177346532745;
    msg.y = 0.3275593007567731;
    msg.z = 0.9806188968428722;

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
    msg.setTimeStamp(0.020524036987675798);
    msg.setSource(45568U);
    msg.setSourceEntity(188U);
    msg.setDestination(48357U);
    msg.setDestinationEntity(4U);
    msg.timeout = 13339U;
    msg.lat = 0.13954497396504217;
    msg.lon = 0.545788889305366;
    msg.z = 0.9692743638561215;
    msg.z_units = 89U;
    msg.amplitude = 0.04776493014740979;
    msg.pitch = 0.5438877867887797;
    msg.speed = 0.39221680809244475;
    msg.speed_units = 147U;
    msg.custom.assign("DFOEJBCFGVYSYVQWWPFEATUSZWZTIFUQSPMATUAYMHOPNYMCUSAUUGJJL");

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
    msg.setTimeStamp(0.4707647888072799);
    msg.setSource(58016U);
    msg.setSourceEntity(82U);
    msg.setDestination(28851U);
    msg.setDestinationEntity(112U);
    msg.timeout = 24958U;
    msg.lat = 0.8539927666654942;
    msg.lon = 0.6085839994108966;
    msg.z = 0.7995025939151243;
    msg.z_units = 110U;
    msg.amplitude = 0.3308104108390104;
    msg.pitch = 0.6970396087588843;
    msg.speed = 0.4377996982874375;
    msg.speed_units = 7U;
    msg.custom.assign("VFMIVUCGJLAHHMOVLKJHKYNKVWLYLRJYKSDBFPHUYWNWOYPASQDHHEBGYJTNLVAIUMTWWKZQRAHHROFAMTTIJFOMPXIRJUJXEWBYWKHQSWOQZNKBTXUSCCHKQGDCZEZIFGQEEOGKLTGLBWGVDZU");

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
    msg.setTimeStamp(0.38532106299277136);
    msg.setSource(8238U);
    msg.setSourceEntity(122U);
    msg.setDestination(12131U);
    msg.setDestinationEntity(100U);
    msg.timeout = 23156U;
    msg.lat = 0.8902892778789177;
    msg.lon = 0.8208849177929616;
    msg.z = 0.043740527520083394;
    msg.z_units = 160U;
    msg.amplitude = 0.06383053528091787;
    msg.pitch = 0.5509465821935077;
    msg.speed = 0.454200470906285;
    msg.speed_units = 120U;
    msg.custom.assign("XKOLRVDSIJIDBKXDWNGCOPRJQOQYQKWKEDBZELLBXMITMDCYXUOHRCMTKAJEEYFLGBTHRQZJINRJWLJWPREUTADLBQ");

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
    msg.setTimeStamp(0.17577241875937932);
    msg.setSource(42230U);
    msg.setSourceEntity(209U);
    msg.setDestination(22646U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.2228311921092475);
    msg.setSource(22866U);
    msg.setSourceEntity(230U);
    msg.setDestination(55101U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.23624402368723185);
    msg.setSource(3868U);
    msg.setSourceEntity(168U);
    msg.setDestination(35190U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.5580069674786293);
    msg.setSource(16100U);
    msg.setSourceEntity(41U);
    msg.setDestination(2548U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.1731096625387888;
    msg.lon = 0.016509872120646696;
    msg.z = 0.25228855540365;
    msg.z_units = 159U;
    msg.radius = 0.031990555650446284;
    msg.duration = 41278U;
    msg.speed = 0.5872982481492697;
    msg.speed_units = 7U;
    msg.custom.assign("IEJPBBNTXRVHYNOLTFQCPHGUAEASZWFZBTWXLDUMAQKJDRGL");

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
    msg.setTimeStamp(0.6543719068041092);
    msg.setSource(29615U);
    msg.setSourceEntity(138U);
    msg.setDestination(21913U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.40992605941398497;
    msg.lon = 0.620477135290808;
    msg.z = 0.28257914614161417;
    msg.z_units = 236U;
    msg.radius = 0.5652519078480294;
    msg.duration = 63325U;
    msg.speed = 0.24416963140822912;
    msg.speed_units = 86U;
    msg.custom.assign("YLBCRJKITPHRJZVDUWHYPWQFMQWQOQNHKLUEAJABXVSDTZGUGXHPHKYGVDYUISEPOBQBIYSTPZSJPEKROSKFCJDXXLSZNORVMSYIWNIJAXHTZGIMQAMQFTTFPXUZLULZFDNNUMZDARENPQBMCVRNIIVFJDTIEUBMGOVBRLQRNXJRKXZICACFMWXGKAGTFCOE");

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
    msg.setTimeStamp(0.2629505760769252);
    msg.setSource(48277U);
    msg.setSourceEntity(253U);
    msg.setDestination(38502U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.0013656801135584207;
    msg.lon = 0.010693833252003793;
    msg.z = 0.41667324503663106;
    msg.z_units = 205U;
    msg.radius = 0.08131234764172968;
    msg.duration = 34279U;
    msg.speed = 0.3854143449977211;
    msg.speed_units = 139U;
    msg.custom.assign("CWYSFUYZMZTZQALNZFFUEJVPKETKXVBERLTCEWPMHKORF");

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
    msg.setTimeStamp(0.11847116472137664);
    msg.setSource(37890U);
    msg.setSourceEntity(59U);
    msg.setDestination(49585U);
    msg.setDestinationEntity(41U);
    msg.timeout = 54610U;
    msg.flags = 230U;
    msg.lat = 0.3334329119285634;
    msg.lon = 0.1658837520650448;
    msg.start_z = 0.2545219568308087;
    msg.start_z_units = 23U;
    msg.end_z = 0.23736740171766013;
    msg.end_z_units = 151U;
    msg.radius = 0.8803536746918856;
    msg.speed = 0.5660951043413043;
    msg.speed_units = 28U;
    msg.custom.assign("VNWOTKFJVENABCHZLANJGFFFEWPYAMNDZTWEPCKGTXRXMPQCBGYGSAZUQQKBKWLKJMVZYUMXKETNDHLRDWIBLHMSLEUFNYOKHJDYNUPFTZPSHCQCLXEMAHRSSGSTKUVWQFDIIRUJCRRPNLXOVMFRDWIATORYBBJGBWRFDVXYHCMMSFDEJIIZSXUVEQDENSMPIZHPBVVLZQKGWAPWKNU");

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
    msg.setTimeStamp(0.23066362139734498);
    msg.setSource(12658U);
    msg.setSourceEntity(95U);
    msg.setDestination(26060U);
    msg.setDestinationEntity(143U);
    msg.timeout = 55226U;
    msg.flags = 31U;
    msg.lat = 0.42273442738202427;
    msg.lon = 0.5145050520723353;
    msg.start_z = 0.41567201282064825;
    msg.start_z_units = 143U;
    msg.end_z = 0.2601347574972276;
    msg.end_z_units = 201U;
    msg.radius = 0.8331330173380394;
    msg.speed = 0.09456338010559429;
    msg.speed_units = 214U;
    msg.custom.assign("XTOEDCAAMOMSVYXMWJTFLASOMVHLQPNZCRKCBXDCGCNJZEKYSRRIYWJWJMKTDMNHQUOXKFTIUWHBWETLYJANGNEIJHUGGVADOORPOPXGYIEKFRRHLEMFTCVKWQSVYTZSPNRUVVGBXQOASPURWUHDPUFNVHMAHGUDLZZFZPLJPFIAQLOWMQDUDHYBNGRKBLCFJTXIVBYVTJKRINEABCPGKSIKZEIMLTCFXWQJXQU");

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
    msg.setTimeStamp(0.881982964481195);
    msg.setSource(51998U);
    msg.setSourceEntity(95U);
    msg.setDestination(53869U);
    msg.setDestinationEntity(225U);
    msg.timeout = 47236U;
    msg.flags = 148U;
    msg.lat = 0.30039460007457675;
    msg.lon = 0.42331407999508364;
    msg.start_z = 0.7241492192375719;
    msg.start_z_units = 17U;
    msg.end_z = 0.21846370832057505;
    msg.end_z_units = 94U;
    msg.radius = 0.23489250835194497;
    msg.speed = 0.3913025432813403;
    msg.speed_units = 188U;
    msg.custom.assign("ZDGWGRFBVYTTVWDAKSDYCXAEGTUEMDOOPXQWWBRZVNCEOJZTNXEBIBRLTMW");

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
    msg.setTimeStamp(0.08905386351990463);
    msg.setSource(37886U);
    msg.setSourceEntity(48U);
    msg.setDestination(15006U);
    msg.setDestinationEntity(157U);
    msg.timeout = 26241U;
    msg.lat = 0.5565044021117806;
    msg.lon = 0.01873877075457886;
    msg.z = 0.22137931586490778;
    msg.z_units = 208U;
    msg.speed = 0.27776095014773505;
    msg.speed_units = 93U;
    msg.custom.assign("ZWQUSMQXLUYBNCRVJNDOOZKVSUHNQSSJQMORVTLALAZTCQWZQFOGIBDLIUMAPIVCHIAUFWZEZLDPPKXXSAWSJGFIRHGLCJUFBGNQXBQJIEHJOZMRKPJYBVUXBYBPUTEBGKQXSNEKCNZFPARXAPIDMEEKAWYNMUKWSLLBNVF");

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
    msg.setTimeStamp(0.08153275015707506);
    msg.setSource(5581U);
    msg.setSourceEntity(161U);
    msg.setDestination(64182U);
    msg.setDestinationEntity(42U);
    msg.timeout = 10581U;
    msg.lat = 0.07930060107514669;
    msg.lon = 0.3701494826615911;
    msg.z = 0.21581347776387805;
    msg.z_units = 245U;
    msg.speed = 0.38031742068320107;
    msg.speed_units = 99U;
    msg.custom.assign("VXWQHSCIVMYSXQTNSEHPOLNHRBGKYTNCKJFJFXBYQEPCMGGSMLDGBBMVGEODKMCFLZYHLKUYQUMQFQCVOJZJESIBWFOOTUKNPIQUZYVSENBEDTPFCADJSERWRFJZAGEXZADOAWHO");

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
    msg.setTimeStamp(0.26990346241411034);
    msg.setSource(25530U);
    msg.setSourceEntity(184U);
    msg.setDestination(28333U);
    msg.setDestinationEntity(85U);
    msg.timeout = 343U;
    msg.lat = 0.032884933676754935;
    msg.lon = 0.45575549890843137;
    msg.z = 0.6759104879434435;
    msg.z_units = 230U;
    msg.speed = 0.4825866655136062;
    msg.speed_units = 211U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9515101770719496;
    tmp_msg_0.y = 0.9096795594232484;
    tmp_msg_0.z = 0.8718092505979887;
    tmp_msg_0.t = 0.5965272856152988;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("SRLVGMVGHZKPBCKJTVWRQYJDEJLYARBLSHTSFHHGCGQFRQRQBQJPUEKYXKTSQIMAGJJDNOGSTKOICMIOPKRLPAWBVUEMCZILJJNCXRNXZHKOZENPHWMVYINZSEVYOVENGFITDAWLWYADERFLTUPEWYDUBXQNGBZYIFACPCWCXXZHUUXZXDFQMXJBPOTBZNNIFLVKDUWYDBIOXUVWAUQENOMMOKZEPSLCCFFF");

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
    msg.setTimeStamp(0.16613821695190079);
    msg.setSource(44013U);
    msg.setSourceEntity(67U);
    msg.setDestination(62381U);
    msg.setDestinationEntity(236U);
    msg.x = 0.8617747326674876;
    msg.y = 0.8112575330871012;
    msg.z = 0.8146604055692229;
    msg.t = 0.2314211923541477;

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
    msg.setTimeStamp(0.9797568526248646);
    msg.setSource(42169U);
    msg.setSourceEntity(230U);
    msg.setDestination(21391U);
    msg.setDestinationEntity(11U);
    msg.x = 0.5028644515131806;
    msg.y = 0.6700967600730384;
    msg.z = 0.6962928390044617;
    msg.t = 0.014240094366256617;

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
    msg.setTimeStamp(0.2565902594585242);
    msg.setSource(49349U);
    msg.setSourceEntity(16U);
    msg.setDestination(58985U);
    msg.setDestinationEntity(230U);
    msg.x = 0.6993026297909251;
    msg.y = 0.9978787875761932;
    msg.z = 0.8618311915577433;
    msg.t = 0.5540942120740789;

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
    msg.setTimeStamp(0.9939619578622404);
    msg.setSource(57069U);
    msg.setSourceEntity(236U);
    msg.setDestination(57733U);
    msg.setDestinationEntity(3U);
    msg.timeout = 24793U;
    msg.name.assign("MBVJNHREHLTJQVGCKCKXQYUPASXKWQBIIFQPEKMDYLBCMXSFVEZLBHRSADAVHVPNOAYHYQJRGQTWGFEYUAYYPFJKWGCOSCLGEGRNTSJBOXFSVCKSOUOFTDLMOHNQHTZBZNPGWGKU");
    msg.custom.assign("DCYBAPMIYBTUHSOBMFDQFSUWXDXOWAZSRVZGSIFRUNZKIRYDVXOCEPPJXAXQZTAVYGLKEABPYWEDCLFMQNHQBTQLSEKZBLIODMUWYRNHOFRKJMFKHLHGINTESGYYJDRCKLTSUGOLUXKPCOWHEBBZQTXUKAQXMSMGJIRDUJYHVLLVZAAKCJNPJBMTWPPX");

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
    msg.setTimeStamp(0.9138774365986404);
    msg.setSource(59876U);
    msg.setSourceEntity(42U);
    msg.setDestination(42618U);
    msg.setDestinationEntity(245U);
    msg.timeout = 46727U;
    msg.name.assign("EEFAXIUXNOWUPGCKZHTJUMOSLTKAIINDZWGNPQOCJRSRDMAWVQRWXPEWYXHJYJBFOOMAOECSDMKAGBRSYBNENPVTIYQBFHOLITTJCGXSWVBDSTEQSMQIFIMBDFSKYEYYXNUMNYMXLGPMVILLQFELFARZDIHFUQ");
    msg.custom.assign("XWPQBMLJDJYCCPCHHCPYNSMXJFCOFRJDEKJBRZAPNKFHLSBQTELFXETQGGRGZEIHPMXEYYVDROVHWIKFZQFRUUGVMTSTBUUVVYADWOAJOUMLXTWIYQHINUNXKFKETZZLDZDOGXSSJWMPNMXBCAZ");

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
    msg.setTimeStamp(0.852828983366957);
    msg.setSource(54362U);
    msg.setSourceEntity(118U);
    msg.setDestination(41374U);
    msg.setDestinationEntity(171U);
    msg.timeout = 37633U;
    msg.name.assign("VFNGVUTZLFZQLOJBRESMPTHQZILDNOKKSANBDCIFMKUJJDAQYVZWAMOVLFJYCJFCGSKZFZIYDEHXPRJYXAYLPIQLRCBHUXMNDUTJRSBQETBHCDKITJGZYEUVXXRMTFMNCPVVKPXJEOIEKBQCXXOQGRCSHNG");
    msg.custom.assign("EGFDSGWYBEUSCOQVOYDVGNDWMLAJDLNMRKLMPMGUUYOPYHJVIOXFBCFXMMKWOQZZCGLHBASKNZRKRKPEBHTEBSZRCIYLBJFWSGLEPDQSUJRLINMDKWCIZOXEPGIZQCYPZPTYFJRLQHWINCQJSIUYQQVWGOZQDFVWUHOIXETDAHHTCMLTVLKTSNRWARJPXBNKUCIXBJYCHGVJHJOPXFKKVOSBMEZAETNVXNRMDEYUAWXQFSBD");

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
    msg.setTimeStamp(0.25875861437592207);
    msg.setSource(52327U);
    msg.setSourceEntity(203U);
    msg.setDestination(62240U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.11280043566413611;
    msg.lon = 0.1580141627694146;
    msg.z = 0.8998358674228409;
    msg.z_units = 180U;
    msg.speed = 0.5724431706601859;
    msg.speed_units = 60U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 51368U;
    tmp_msg_0.off_x = 0.012316397174850557;
    tmp_msg_0.off_y = 0.15043720947158223;
    tmp_msg_0.off_z = 0.44322031257660177;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.6667371775875611;
    msg.custom.assign("TUFABSAIRWJQWXJFTFYUVMQFCDKPKFNOXGNZWUKWBMTOKIMASHBBYRWJAMFTOQDDVWMZARNYDWYBBKXICLQDPPQMEWTHELXTJCHVOMBLPJXOXXEAJAJSTCBDZTKGCZDSQPGWOROLRZHKOHSQJFVYPEHLCUIGZRZNUVGVZDMRGEIBENGTVWKFQIUZXPIUEYVSTVXKSQCIACHNBRSUAYQCIUGLVNEFLGPKEMLJNULJZHPOCMXGSYYSDNHERYNPDF");

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
    msg.setTimeStamp(0.05131984869249073);
    msg.setSource(1157U);
    msg.setSourceEntity(246U);
    msg.setDestination(5822U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.22777369618182142;
    msg.lon = 0.13684897532279083;
    msg.z = 0.12208123055964759;
    msg.z_units = 25U;
    msg.speed = 0.849015489585466;
    msg.speed_units = 103U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 63056U;
    tmp_msg_0.off_x = 0.03452183833907574;
    tmp_msg_0.off_y = 0.05995969226969722;
    tmp_msg_0.off_z = 0.34805556204489296;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.29463996146388527;
    msg.custom.assign("RBUTJGKKYIKAEMHOLUWHSLOLBKRKJPRXBQCMXHPCYCNEVKEMBLEDWNOWCFVKUUQQCDCXLVRRHVDTOQFDMEVRHRJNEIDTZAUGSJASBYDYPBAVLPWFTSANXCPZGSLDGVLBB");

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
    msg.setTimeStamp(0.4146591082491802);
    msg.setSource(51178U);
    msg.setSourceEntity(163U);
    msg.setDestination(34492U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.3886531895590538;
    msg.lon = 0.6818173895307453;
    msg.z = 0.3746519461589447;
    msg.z_units = 155U;
    msg.speed = 0.07950234628639763;
    msg.speed_units = 85U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.2853190081088496;
    tmp_msg_0.y = 0.6086771801752594;
    tmp_msg_0.z = 0.16880169530391287;
    tmp_msg_0.t = 0.4534669651428628;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 7579U;
    tmp_msg_1.off_x = 0.3499097518012251;
    tmp_msg_1.off_y = 0.46183461949222093;
    tmp_msg_1.off_z = 0.5081178333831271;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.972502306936044;
    msg.custom.assign("DFJWUIJNUJZUSZFAYYHHQOLQPLXN");

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
    msg.setTimeStamp(0.029354711093734664);
    msg.setSource(39061U);
    msg.setSourceEntity(122U);
    msg.setDestination(62891U);
    msg.setDestinationEntity(207U);
    msg.vid = 47692U;
    msg.off_x = 0.3851690676604055;
    msg.off_y = 0.8630825853748686;
    msg.off_z = 0.39534355229513496;

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
    msg.setTimeStamp(0.7045827945835672);
    msg.setSource(19586U);
    msg.setSourceEntity(211U);
    msg.setDestination(56820U);
    msg.setDestinationEntity(159U);
    msg.vid = 6432U;
    msg.off_x = 0.12810277204567533;
    msg.off_y = 0.9330009319431815;
    msg.off_z = 0.48150858347547465;

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
    msg.setTimeStamp(0.6233772484977161);
    msg.setSource(34826U);
    msg.setSourceEntity(211U);
    msg.setDestination(30074U);
    msg.setDestinationEntity(50U);
    msg.vid = 201U;
    msg.off_x = 0.9602797800692913;
    msg.off_y = 0.6787454161154423;
    msg.off_z = 0.5418482629738944;

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
    msg.setTimeStamp(0.3912402803976397);
    msg.setSource(13443U);
    msg.setSourceEntity(12U);
    msg.setDestination(16507U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.43933293019096975);
    msg.setSource(53088U);
    msg.setSourceEntity(199U);
    msg.setDestination(54482U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.20332760938076821);
    msg.setSource(64208U);
    msg.setSourceEntity(250U);
    msg.setDestination(2550U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.6471988987173157);
    msg.setSource(3066U);
    msg.setSourceEntity(216U);
    msg.setDestination(65056U);
    msg.setDestinationEntity(145U);
    msg.mid = 11594U;

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
    msg.setTimeStamp(0.14625675402341454);
    msg.setSource(64776U);
    msg.setSourceEntity(221U);
    msg.setDestination(5454U);
    msg.setDestinationEntity(77U);
    msg.mid = 5857U;

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
    msg.setTimeStamp(0.45178690355168827);
    msg.setSource(15280U);
    msg.setSourceEntity(241U);
    msg.setDestination(42690U);
    msg.setDestinationEntity(168U);
    msg.mid = 11582U;

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
    msg.setTimeStamp(0.8156472334585159);
    msg.setSource(12979U);
    msg.setSourceEntity(188U);
    msg.setDestination(55278U);
    msg.setDestinationEntity(176U);
    msg.state = 200U;
    msg.eta = 38172U;
    msg.info.assign("NJVFSPKJTXDOYPVSFQLHMMWQEJLXWCKLOXQDJSFCAPNBTIXGYPBSSRMCJKBKWMXYSRUUNAFIFTNTSLPQEDVKGAOHQJRHUYLVSOXXRTGHZEPEKLGJJDEKLWOFGICPIKBGNBOUMHZBBIFWDPCLTFFOGCVOIRUOQAWDYKSZRIDIUXPCAZJGYYZAMGNVUQ");

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
    msg.setTimeStamp(0.35558517156014524);
    msg.setSource(612U);
    msg.setSourceEntity(181U);
    msg.setDestination(5146U);
    msg.setDestinationEntity(85U);
    msg.state = 209U;
    msg.eta = 20237U;
    msg.info.assign("GPCHUBONWJGKFUIIKATKHPFXUTBJDAWPWQNQYDCMYRWXLSDQLHLBHPYIPMWSVMFBDYRQNGSBTWQBDDPUQTHEPCQJXOEXGVUVDVGWHEOFKWLJNEJYGUYYZZDUEIGWVCRSMFEAJMCLNLORWNFTSMJQIRCJSRVKLDGTPYOUBTMRHPAKBLIORORZZICNYJOOXSVIGSQKNLFCZBAATX");

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
    msg.setTimeStamp(0.4419386744897793);
    msg.setSource(22879U);
    msg.setSourceEntity(53U);
    msg.setDestination(52690U);
    msg.setDestinationEntity(242U);
    msg.state = 139U;
    msg.eta = 52589U;
    msg.info.assign("VLQTSGTZXITKJITEGDPMHOHHUBLFSRKUZSMLXJOBCIEYVVZCEQBPPVSMXQPKBWRCDOCNRHBXRCQFIRODDIAZTZSGYGVYAEGQNXZAFPAEXPHHWBJRDLKJWDTMJLHSVOQFOGQBOZVWAMYTEUJ");

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
    msg.setTimeStamp(0.6427068164686387);
    msg.setSource(23451U);
    msg.setSourceEntity(138U);
    msg.setDestination(36102U);
    msg.setDestinationEntity(213U);
    msg.system = 17398U;
    msg.duration = 54662U;
    msg.speed = 0.07938933606792076;
    msg.speed_units = 90U;
    msg.x = 0.9596366736724437;
    msg.y = 0.41779707004984723;
    msg.z = 0.7462146235982114;
    msg.z_units = 79U;

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
    msg.setTimeStamp(0.6586473946675849);
    msg.setSource(33557U);
    msg.setSourceEntity(157U);
    msg.setDestination(665U);
    msg.setDestinationEntity(208U);
    msg.system = 21552U;
    msg.duration = 33637U;
    msg.speed = 0.8399328713724372;
    msg.speed_units = 235U;
    msg.x = 0.9845686626437264;
    msg.y = 0.03491365757451992;
    msg.z = 0.5005483248860004;
    msg.z_units = 229U;

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
    msg.setTimeStamp(0.9902370212793494);
    msg.setSource(44190U);
    msg.setSourceEntity(113U);
    msg.setDestination(27427U);
    msg.setDestinationEntity(48U);
    msg.system = 50704U;
    msg.duration = 62291U;
    msg.speed = 0.15386348274394634;
    msg.speed_units = 162U;
    msg.x = 0.9596428584202165;
    msg.y = 0.8286387046258357;
    msg.z = 0.5330575075845352;
    msg.z_units = 249U;

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
    msg.setTimeStamp(0.2715772602413974);
    msg.setSource(43672U);
    msg.setSourceEntity(198U);
    msg.setDestination(4834U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.8569406778348084;
    msg.lon = 0.22175997851705298;
    msg.speed = 0.1467812739091845;
    msg.speed_units = 206U;
    msg.duration = 31867U;
    msg.sys_a = 41433U;
    msg.sys_b = 31220U;
    msg.move_threshold = 0.8485316207791606;

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
    msg.setTimeStamp(0.050318586015950184);
    msg.setSource(27591U);
    msg.setSourceEntity(116U);
    msg.setDestination(18810U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.9551656711477696;
    msg.lon = 0.9386940919755858;
    msg.speed = 0.8784809430558891;
    msg.speed_units = 233U;
    msg.duration = 16073U;
    msg.sys_a = 39784U;
    msg.sys_b = 30896U;
    msg.move_threshold = 0.7085556453678826;

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
    msg.setTimeStamp(0.9841512489350855);
    msg.setSource(40086U);
    msg.setSourceEntity(120U);
    msg.setDestination(50060U);
    msg.setDestinationEntity(163U);
    msg.lat = 0.43745872813947395;
    msg.lon = 0.5505911759915171;
    msg.speed = 0.3941893567405961;
    msg.speed_units = 98U;
    msg.duration = 1280U;
    msg.sys_a = 27998U;
    msg.sys_b = 64588U;
    msg.move_threshold = 0.9909296205200839;

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
    msg.setTimeStamp(0.7472457070307683);
    msg.setSource(49498U);
    msg.setSourceEntity(60U);
    msg.setDestination(25318U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.5399051784320296;
    msg.lon = 0.6735356115542268;
    msg.z = 0.33075910867525127;
    msg.z_units = 168U;
    msg.speed = 0.057310737318518434;
    msg.speed_units = 220U;
    msg.custom.assign("BPZRAUFCMSJJIFHTNJACQMAMGVCRUYEVRAZFGROKKXHVLQHUQMCTTVMQALOJOWHBULRWDLZDXMRYLDFBTPGWYKEQBPMYEYPTXKYJSSQTRLRBKZDFMIOKCWBKNXJXHGGFOESYPKOUPXEWDDJUFGOOZYOZYIMVJPUDKVJGIIDGSUEXMOCNGNJBNVZCKAFLUPBINHXNTS");

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
    msg.setTimeStamp(0.4341591805095676);
    msg.setSource(21528U);
    msg.setSourceEntity(201U);
    msg.setDestination(65295U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.38392652757398005;
    msg.lon = 0.05539102297225862;
    msg.z = 0.2522939380157291;
    msg.z_units = 201U;
    msg.speed = 0.7016734595294574;
    msg.speed_units = 130U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.7014670430576667;
    tmp_msg_0.lon = 0.19771988120196549;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("QOLPSHBXITEQHOTUHFWZUOJQLPJBLGODEGHMCJRIZJWKVVKAAWLJQIOHVUDRYJQEVFVTONAOVIFHNGWWENEDGLPZAWIYSEUBXBTDYBKRNLLMKYEXWPYETSDBRPSEJYUHMRGCUHNVZGZEZKPWVUSJBKTFWVGQZRPRASLXUFKARXPKLRHMYTGBTGOXCDSSLHOQRMSNDFQIOQJXPGFMXXCNAFDFMMAZVKADCBKPTZQCINUAMYNCZTCDJIYICCBN");

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
    msg.setTimeStamp(0.6337743686047631);
    msg.setSource(28444U);
    msg.setSourceEntity(239U);
    msg.setDestination(22229U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.969887816572025;
    msg.lon = 0.3452505777416941;
    msg.z = 0.2393531732406856;
    msg.z_units = 200U;
    msg.speed = 0.3036024221438157;
    msg.speed_units = 247U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.21487132117214203;
    tmp_msg_0.lon = 0.5973003560966627;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("NTFGEZWLUXZZLIGVEEJBJPKINDNSCKHZARTNBTUVHMVBQXEYLRXNHCCUSCXKQHFIVGYHFNNLKKCDUAVHQEEVBPGNZSWDSTEBZIOOSOBPMAHFBBIEXLINVQHUMEBOUSZAOPTWXPZJFJPTSWAQCJYKUXWJTUEPDKFLVDJOMVDQUYXFSYWOHTKOCLUSHYIQGMYRWPRK");

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
    msg.setTimeStamp(0.6850996186499538);
    msg.setSource(59363U);
    msg.setSourceEntity(19U);
    msg.setDestination(36155U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.7607448280239676;
    msg.lon = 0.9640098555269556;

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
    msg.setTimeStamp(0.3431285746328778);
    msg.setSource(1209U);
    msg.setSourceEntity(176U);
    msg.setDestination(14303U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.8011983673203632;
    msg.lon = 0.009880372422387373;

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
    msg.setTimeStamp(0.6203642461169963);
    msg.setSource(14161U);
    msg.setSourceEntity(115U);
    msg.setDestination(42163U);
    msg.setDestinationEntity(125U);
    msg.lat = 0.7737211359030202;
    msg.lon = 0.8942719779659113;

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
    msg.setTimeStamp(0.014761039495684747);
    msg.setSource(55781U);
    msg.setSourceEntity(117U);
    msg.setDestination(8152U);
    msg.setDestinationEntity(238U);
    msg.timeout = 7481U;
    msg.lat = 0.5770891882662647;
    msg.lon = 0.3049555321471594;
    msg.z = 0.2501440656383054;
    msg.z_units = 19U;
    msg.pitch = 0.01652099724453726;
    msg.amplitude = 0.8788439178238325;
    msg.duration = 24006U;
    msg.speed = 0.6493795338219517;
    msg.speed_units = 82U;
    msg.radius = 0.34287397206465053;
    msg.direction = 24U;
    msg.custom.assign("WGCXHZVNPOIFJHIPQSHMDUR");

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
    msg.setTimeStamp(0.27128661073607097);
    msg.setSource(51085U);
    msg.setSourceEntity(252U);
    msg.setDestination(27921U);
    msg.setDestinationEntity(31U);
    msg.timeout = 51413U;
    msg.lat = 0.6653500660213798;
    msg.lon = 0.5885367809804529;
    msg.z = 0.930289790205044;
    msg.z_units = 122U;
    msg.pitch = 0.7015174097217453;
    msg.amplitude = 0.7986116759742127;
    msg.duration = 42444U;
    msg.speed = 0.44295395360180845;
    msg.speed_units = 178U;
    msg.radius = 0.25434098669313665;
    msg.direction = 20U;
    msg.custom.assign("MYOTIWZAINTHOOZHIHHDJUSNLQUVVBXNTBCUFBZDUJEAULWDJWWLSRQVXTMBUJRWAAEYGOTPTPMWZMGSNKQFYXEOMHRUWPILBNGBRSJACNDARDHFSLRZOXRQJCMKGXRFWKIPKYDPICQYSFEFOCPOSELHVGSAYZMRJNDVDKFIGYTEQVHBLIFVKSZYGXALEVKMDHYUGICFBUXLHFTZGOQWPETBAKQCQXNJDYGRKCJIKCQCXV");

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
    msg.setTimeStamp(0.18241852880031573);
    msg.setSource(56417U);
    msg.setSourceEntity(220U);
    msg.setDestination(970U);
    msg.setDestinationEntity(61U);
    msg.timeout = 53324U;
    msg.lat = 0.7087268242471935;
    msg.lon = 0.3470543551227355;
    msg.z = 0.24107820936233937;
    msg.z_units = 44U;
    msg.pitch = 0.10873701716194073;
    msg.amplitude = 0.4117995263255887;
    msg.duration = 50354U;
    msg.speed = 0.5738414796327235;
    msg.speed_units = 124U;
    msg.radius = 0.514677999728345;
    msg.direction = 149U;
    msg.custom.assign("RPPGBDBLMQRCHPNGZFMSZJZSZWFSMWKGCHWXIROQOLXDWUUPGCCCKNENJILXFVGZKEDTFFKSKDCPGBMJIQVXFXJZIDLSEHJLYSQBMKAGNDWCDYBJENTBZCY");

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
    msg.setTimeStamp(0.5609019474158355);
    msg.setSource(44316U);
    msg.setSourceEntity(165U);
    msg.setDestination(22618U);
    msg.setDestinationEntity(46U);
    msg.formation_name.assign("KZSLDDUINWDXHASQAXOFDJTHNEPOMBUJGNFSPDLIMTGUBVXAYSBZPIDYLEXQEBDTYGIBRMHIHEETJUXCRUJUFYJQUTJVCRVMFOBVKZJAFTPECGQNDIROPTKRYZPCFLHOHO");
    msg.reference_frame = 64U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 341U;
    tmp_msg_0.off_x = 0.16526332389566356;
    tmp_msg_0.off_y = 0.4833791617896743;
    tmp_msg_0.off_z = 0.4600616851619129;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("YPQHBTGLCZYUHOCVXVHIKZLPIXMKZXXTSGWPDJQHRMQAMYIDTFQTREKCTJQGWNRKVJOSYLRMEOAMDVLBELQMDWVNASARHTHPEMSHJWXHKOSKFYRRQAYFICFDBYIVJXSSUPFNZABLWQGLJFFNTETTXGONZJGXWCUEIMLGUCKCEQZKJARYFNZMZPIDAWZLLKGBYPBOBBNBVUNMYUVSUO");

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
    msg.setTimeStamp(0.7995000148382366);
    msg.setSource(58912U);
    msg.setSourceEntity(166U);
    msg.setDestination(9314U);
    msg.setDestinationEntity(204U);
    msg.formation_name.assign("LVIFWAZBFPIHTHVRBF");
    msg.reference_frame = 79U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 54523U;
    tmp_msg_0.off_x = 0.8113933371534766;
    tmp_msg_0.off_y = 0.21797616012808108;
    tmp_msg_0.off_z = 0.3345149795408334;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("DPOCYGSCLNTZZTWXRMJCSGIPEUPHNMNAUXNSVDKAMVQESFWQQJZFKDTGTZRYOYLQNUPBU");

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
    msg.setTimeStamp(0.7622207340128017);
    msg.setSource(26088U);
    msg.setSourceEntity(157U);
    msg.setDestination(54375U);
    msg.setDestinationEntity(251U);
    msg.formation_name.assign("FUBGZRPYYYZOSVYHGZOCRMAKIIKSSAHMEOSVAHEZVQQULOBJCSJMUQWIXXUUFIFEPCJVIAHFIGGSGLRTODTFHVRUFVPQXMANQHECPNPAPEZWBBVLLTBLKUDUJMTDESHZHGJJSDSOOATMVAYNZEBYVKVIOUBYFG");
    msg.reference_frame = 125U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 63917U;
    tmp_msg_0.off_x = 0.7706986995207639;
    tmp_msg_0.off_y = 0.35455170100168576;
    tmp_msg_0.off_z = 0.6144683369081212;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("SERHWVXYMOKJEARHPJANMQRQXGUYLJYECKTFOIXEEGIKYXJKPGTKRMJOZPFNIHHBUQXNYPJZSPVTGUSGKGSDIGGLUNGPAOYALAFUHWBCFYNVWNKZLWUZNUVCHRC");

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
    msg.setTimeStamp(0.44915380690500617);
    msg.setSource(38653U);
    msg.setSourceEntity(123U);
    msg.setDestination(42463U);
    msg.setDestinationEntity(218U);
    msg.group_name.assign("ZJVERZKTQLASQNHLGSCOFATDZBKMPSZBPBOBFHOMPUVWTSOPUCZDMRBAQGIYJTAHRG");
    msg.formation_name.assign("OUJLHPBKLGRDSZQZAAYPWKJRMPOWTVYONAPNTOALBCNDHVNLITKZLAHUHVF");
    msg.plan_id.assign("PBWIHQGHDNBECUUQWVNCYAOYWFCOPFJNAQCGIKHGYJSHVTWQWSUDMCKYSYFUCHNPEIEKALXRZILDIVCLYRJQLDLKSBNTIZHRMUSDRMUZLETVXFJ");
    msg.description.assign("JGJDSEWCHKOJCYEPFORUJGIS");
    msg.leader_speed = 0.5294184538565466;
    msg.leader_bank_lim = 0.15365530493439228;
    msg.pos_sim_err_lim = 0.469887783290164;
    msg.pos_sim_err_wrn = 0.677428535623043;
    msg.pos_sim_err_timeout = 61061U;
    msg.converg_max = 0.7424647764450071;
    msg.converg_timeout = 19584U;
    msg.comms_timeout = 28491U;
    msg.turb_lim = 0.4573711631273747;
    msg.custom.assign("FYIDTBVBLQRDEXQKEFNMUREGVIXXFAPTQSKPECFTXRVGMQQYCMHOAUDLZDRJSZHSGUHOBWARGWVOHSGBYXHNFXIAEPQZLFDRYEZVGXXQHUUQQBATNOTKJGJLDJBNTKWHESDJMAWPKTWHJVWKCZKOSMNJOUCCJZIWBDHWAISBNMPNAMOMBPGKPXXVMWKO");

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
    msg.setTimeStamp(0.8765164454513419);
    msg.setSource(49627U);
    msg.setSourceEntity(190U);
    msg.setDestination(64759U);
    msg.setDestinationEntity(241U);
    msg.group_name.assign("HYXBLNEOKPVQXKXOLVCJCCMHWVMDFVREXVOUTIHPNFKJIRUNDWAYWZAPPDFFYQBQZFNHTOXYBWALHSFUNPFBIJUDUIVWOKLXSJJNYZABUZUGGJXRWRSEQEQEZRYTVVLNTQRRLGJGWQVZOSJACKXCZIQESMIJTMKDPKZWXSKSYETBUYBRBMSKJQPOGBKMDCCGPHUBIFXTHDZGGFHEHMAORLULLWADTZSMPGDCMMINAWNOTQVDYICTYNPH");
    msg.formation_name.assign("NWZRYYJWWPBGNJSADLPKZGFUSFKJXPXHAIXUXEKYTLXCTOVRQQZLVWUDYVASUDIWSHBCHYUZQRERHYKCAVTVMILFRGNCKWPDE");
    msg.plan_id.assign("FYXDFOKWAIFCUKVLJUYZOWXZMBNUPVCPQKZUTFWKKSXFFFGTMSOMSPB");
    msg.description.assign("IQTGKGPYYOJPXIAOKFLZWWBCSXOSYAUMTAFMXOEMCXSKYELNNOESFZLLDDAKEDIIWRGVWHTZYPOBUTUEGRNHXPELBSGAVLHZFCRZHDICTUKWVAQRKRRPRPWQZBJGAUEDDSNYVVYZTMUINKATWSSQMCKQYUZBJATCGMBDOLNVWOQAFLJKHNJVXNQCZLTNTHNGFXVCIXRQIUUEZUOSDMBPJYYMWXRPKCEBGX");
    msg.leader_speed = 0.8316366503746816;
    msg.leader_bank_lim = 0.11619879946265699;
    msg.pos_sim_err_lim = 0.44968102953082423;
    msg.pos_sim_err_wrn = 0.47186028260597335;
    msg.pos_sim_err_timeout = 30936U;
    msg.converg_max = 0.5321198915004948;
    msg.converg_timeout = 38066U;
    msg.comms_timeout = 28843U;
    msg.turb_lim = 0.4118719731162621;
    msg.custom.assign("ZMOGGREAPSTBPDGIRUUIXCHZXHUJFJWKNAKFJC");

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
    msg.setTimeStamp(0.12098673733251353);
    msg.setSource(34431U);
    msg.setSourceEntity(151U);
    msg.setDestination(54922U);
    msg.setDestinationEntity(66U);
    msg.group_name.assign("QPYUYZDUDIHKCLDBTTMERREHVRKQMCCFFMMOFFMCKKGWSUCNXSIIJDECXJVVRZEPQHCUGBDINKNDZJZVKAAJZOEYIFJDGHZHHYJBLISGBUOWIXOPVYLTMPJVHABOAAAIEXFUZXKEUZMOOUGHFMGRNLSBFMFTQNDDLSJIYPLULLCNOFPKEQNQYQQTTVTGWQOYCLBZGWOQDWWYXXRWVAWJ");
    msg.formation_name.assign("CJQHWVBMCNVPDRZLCCXNOXIRRUTFZVDSNTBYEPIZYXPLBRRGNKLHFHQJBDFUWHYJAKAPASGUGESUXHVBQOECEFPGQTHRBWUFDZTSDMFJAJMHDOMXMDIVXQOQMISSPLNOOAMIJLLAXGPFHIJVIWEALXZZKDQICWDMUBYRKTVIAYFBWNYO");
    msg.plan_id.assign("LOMFUHFGFKORFBHYIXPCFMZZNVBQKDCPYDCMUSINTOYAIYBCSMZOFBZEEGRPGMWQGDFVZGMAQSKPRIIQYXZHJKZITSATQUZULWJQITDNHRXEHRRRAOENFJHCBKNHLBBYVGPVWJEASBTSEWDLPHIYFLKXWYCRKVSINZKDLJTXQGSAJHDJVUCQDLUKHCRUIATFLLMTGENENDAQTVDWEACAPPKSJJX");
    msg.description.assign("BUQDAOFVYJQSIHXJMSKHACUXLPGTMSBRDPNDFFUWZAHXWQOQYHGQZHEJOUZLNFTWNGOPPBPOLJNGGABEQLNKTOHSJSNCUFZPGSVGEAYAAWCQL");
    msg.leader_speed = 0.991570171857233;
    msg.leader_bank_lim = 0.6279740163205609;
    msg.pos_sim_err_lim = 0.010117068572228383;
    msg.pos_sim_err_wrn = 0.47338115413770776;
    msg.pos_sim_err_timeout = 47514U;
    msg.converg_max = 0.5565621549788076;
    msg.converg_timeout = 63626U;
    msg.comms_timeout = 51799U;
    msg.turb_lim = 0.8932313456573346;
    msg.custom.assign("OFBSEUVIJWNLKLGBWBLARUQNXUIOPWGYEOWADGJZHZAEVDPDRCKSSKDPPYDGNCPOMVLVNARMDRWQUVPOMHNHXMHFWQKYENZRTCPXXCIJDCVATQDECHZOANJEGZDKGNIKGCQSXKSRQCHJZJVYIZHKFWKLQRZIXSFTYYYUUVJUNYUZXFFGAATSNWZTFJJWYMEECEUSKLQUVHTAFAHPTOWBCOIVTGMMMMMFSIILGLOXBRPHBJLDBELRYBTBXSFP");

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
    msg.setTimeStamp(0.45794230750464426);
    msg.setSource(8253U);
    msg.setSourceEntity(160U);
    msg.setDestination(56130U);
    msg.setDestinationEntity(216U);
    msg.control_src = 20334U;
    msg.control_ent = 237U;
    msg.timeout = 0.2022593499259615;
    msg.loiter_radius = 0.5320857366428012;
    msg.altitude_interval = 0.2466598196582982;

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
    msg.setTimeStamp(0.10294400886636501);
    msg.setSource(58491U);
    msg.setSourceEntity(248U);
    msg.setDestination(749U);
    msg.setDestinationEntity(18U);
    msg.control_src = 65100U;
    msg.control_ent = 240U;
    msg.timeout = 0.46853638195045877;
    msg.loiter_radius = 0.4160465246494235;
    msg.altitude_interval = 0.9138482882691553;

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
    msg.setTimeStamp(0.23762217578111455);
    msg.setSource(1561U);
    msg.setSourceEntity(10U);
    msg.setDestination(25599U);
    msg.setDestinationEntity(217U);
    msg.control_src = 17140U;
    msg.control_ent = 80U;
    msg.timeout = 0.7385220496534641;
    msg.loiter_radius = 0.7964591220300468;
    msg.altitude_interval = 0.7581562745586684;

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
    msg.setTimeStamp(0.020123386751674133);
    msg.setSource(20441U);
    msg.setSourceEntity(73U);
    msg.setDestination(38162U);
    msg.setDestinationEntity(75U);
    msg.flags = 134U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7607408637419658;
    tmp_msg_0.speed_units = 14U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.44936877388593055;
    tmp_msg_1.z_units = 123U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.12804953999689428;
    msg.lon = 0.6824285520189959;
    msg.radius = 0.1475594964132847;

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
    msg.setTimeStamp(0.5632566042737482);
    msg.setSource(8833U);
    msg.setSourceEntity(219U);
    msg.setDestination(44737U);
    msg.setDestinationEntity(128U);
    msg.flags = 62U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.30864856715664424;
    tmp_msg_0.speed_units = 112U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6077181853045472;
    tmp_msg_1.z_units = 150U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7170332340118799;
    msg.lon = 0.0682329264397119;
    msg.radius = 0.8389509072128647;

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
    msg.setTimeStamp(0.4409275570155622);
    msg.setSource(1500U);
    msg.setSourceEntity(94U);
    msg.setDestination(46907U);
    msg.setDestinationEntity(115U);
    msg.flags = 31U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.504915958149591;
    tmp_msg_0.speed_units = 99U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.14254302538344932;
    tmp_msg_1.z_units = 205U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5980175157564006;
    msg.lon = 0.3625717898705788;
    msg.radius = 0.5671172822485774;

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
    msg.setTimeStamp(0.4414237542031889);
    msg.setSource(55114U);
    msg.setSourceEntity(68U);
    msg.setDestination(51421U);
    msg.setDestinationEntity(216U);
    msg.control_src = 15386U;
    msg.control_ent = 64U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 142U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7206710426185832;
    tmp_tmp_msg_0_0.speed_units = 15U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.5685744483759025;
    tmp_tmp_msg_0_1.z_units = 128U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.006103884473199206;
    tmp_msg_0.lon = 0.6448738087612497;
    tmp_msg_0.radius = 0.04506778050541371;
    msg.reference.set(tmp_msg_0);
    msg.state = 250U;
    msg.proximity = 191U;

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
    msg.setTimeStamp(0.6888797116581835);
    msg.setSource(48225U);
    msg.setSourceEntity(95U);
    msg.setDestination(32386U);
    msg.setDestinationEntity(17U);
    msg.control_src = 9531U;
    msg.control_ent = 170U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 118U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.30949722901270604;
    tmp_tmp_msg_0_0.speed_units = 219U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.24763197244064938;
    tmp_tmp_msg_0_1.z_units = 198U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.31674447934193417;
    tmp_msg_0.lon = 0.9537381005494002;
    tmp_msg_0.radius = 0.815380985670826;
    msg.reference.set(tmp_msg_0);
    msg.state = 173U;
    msg.proximity = 45U;

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
    msg.setTimeStamp(0.6382509623389612);
    msg.setSource(42299U);
    msg.setSourceEntity(10U);
    msg.setDestination(40041U);
    msg.setDestinationEntity(31U);
    msg.control_src = 37937U;
    msg.control_ent = 44U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 28U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.21944934435838714;
    tmp_tmp_msg_0_0.speed_units = 2U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8493575567898096;
    tmp_tmp_msg_0_1.z_units = 198U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3054541276241214;
    tmp_msg_0.lon = 0.08383702561112949;
    tmp_msg_0.radius = 0.14350411501003435;
    msg.reference.set(tmp_msg_0);
    msg.state = 186U;
    msg.proximity = 127U;

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
    msg.setTimeStamp(0.5504831578783238);
    msg.setSource(25062U);
    msg.setSourceEntity(174U);
    msg.setDestination(18518U);
    msg.setDestinationEntity(57U);
    msg.ax_cmd = 0.5757610293936538;
    msg.ay_cmd = 0.09551696413298227;
    msg.az_cmd = 0.2523209584154057;
    msg.ax_des = 0.5759334791561966;
    msg.ay_des = 0.0936938187879286;
    msg.az_des = 0.13745158314051864;
    msg.virt_err_x = 0.46153360851397807;
    msg.virt_err_y = 0.41519348976243886;
    msg.virt_err_z = 0.16982887274380387;
    msg.surf_fdbk_x = 0.20467464748459074;
    msg.surf_fdbk_y = 0.016320341955729623;
    msg.surf_fdbk_z = 0.43046670165965406;
    msg.surf_unkn_x = 0.8470303648839406;
    msg.surf_unkn_y = 0.9007936384263634;
    msg.surf_unkn_z = 0.8176529386400595;
    msg.ss_x = 0.323965455787255;
    msg.ss_y = 0.09493086466179768;
    msg.ss_z = 0.1765035187769729;

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
    msg.setTimeStamp(0.17701534620445825);
    msg.setSource(23802U);
    msg.setSourceEntity(25U);
    msg.setDestination(58638U);
    msg.setDestinationEntity(177U);
    msg.ax_cmd = 0.3722736998636881;
    msg.ay_cmd = 0.9541853114370158;
    msg.az_cmd = 0.6275053540690476;
    msg.ax_des = 0.3959550065180102;
    msg.ay_des = 0.6353749169525122;
    msg.az_des = 0.6024684407026851;
    msg.virt_err_x = 0.27339425763462366;
    msg.virt_err_y = 0.38814569340941774;
    msg.virt_err_z = 0.40689673108531366;
    msg.surf_fdbk_x = 0.36207216598591385;
    msg.surf_fdbk_y = 0.509531161439991;
    msg.surf_fdbk_z = 0.33187424022086764;
    msg.surf_unkn_x = 0.3964107997341395;
    msg.surf_unkn_y = 0.9050929175433515;
    msg.surf_unkn_z = 0.024943125170767688;
    msg.ss_x = 0.9306612095839122;
    msg.ss_y = 0.863750993395792;
    msg.ss_z = 0.12964318059533453;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("FDGSSAZKTJKQDPQQZHDYBVIMLOYUKZACCXRCYWGESNKSBQGUNMJPPNZZHFQLPTERZPICOTSIQINYONTNDPDQNRSKEVGIVFQYKFAKDDJYJWMMWVB");
    tmp_msg_0.dist = 0.47695374771106047;
    tmp_msg_0.err = 0.26875186583095245;
    tmp_msg_0.ctrl_imp = 0.8578775337011011;
    tmp_msg_0.rel_dir_x = 0.7480216217091484;
    tmp_msg_0.rel_dir_y = 0.7873687935733186;
    tmp_msg_0.rel_dir_z = 0.5766718280824547;
    tmp_msg_0.err_x = 0.7667634059932454;
    tmp_msg_0.err_y = 0.29586302955673227;
    tmp_msg_0.err_z = 0.14795794467999634;
    tmp_msg_0.rf_err_x = 0.07298061563281111;
    tmp_msg_0.rf_err_y = 0.14865482837160116;
    tmp_msg_0.rf_err_z = 0.8304892197460693;
    tmp_msg_0.rf_err_vx = 0.08635373785165479;
    tmp_msg_0.rf_err_vy = 0.6071895168591166;
    tmp_msg_0.rf_err_vz = 0.27634225816995583;
    tmp_msg_0.ss_x = 0.16935220858128763;
    tmp_msg_0.ss_y = 0.7622727972121383;
    tmp_msg_0.ss_z = 0.37153995558459674;
    tmp_msg_0.virt_err_x = 0.14551470211928408;
    tmp_msg_0.virt_err_y = 0.45671762306908514;
    tmp_msg_0.virt_err_z = 0.27665356881145875;
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
    msg.setTimeStamp(0.4306228990762442);
    msg.setSource(29769U);
    msg.setSourceEntity(168U);
    msg.setDestination(2528U);
    msg.setDestinationEntity(166U);
    msg.ax_cmd = 0.8456485554652844;
    msg.ay_cmd = 0.9259559159754155;
    msg.az_cmd = 0.8290611422004007;
    msg.ax_des = 0.4905286683395472;
    msg.ay_des = 0.6325854192883194;
    msg.az_des = 0.6759810255776703;
    msg.virt_err_x = 0.2482056411600213;
    msg.virt_err_y = 0.8958294814516891;
    msg.virt_err_z = 0.15684625984759315;
    msg.surf_fdbk_x = 0.4642475955187745;
    msg.surf_fdbk_y = 0.5110609150225351;
    msg.surf_fdbk_z = 0.21085004153230935;
    msg.surf_unkn_x = 0.0972500367310658;
    msg.surf_unkn_y = 0.9738924634798495;
    msg.surf_unkn_z = 0.47600365416894697;
    msg.ss_x = 0.011829457859195647;
    msg.ss_y = 0.952520453038645;
    msg.ss_z = 0.26620221505016517;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("MWXKVLGMUFFSCMDRAAIRREUHUBNSFALEBTYPZXNNCOEAGCHOHNSGBWON");
    tmp_msg_0.dist = 0.38216709600795784;
    tmp_msg_0.err = 0.14812302406554023;
    tmp_msg_0.ctrl_imp = 0.3543836032582358;
    tmp_msg_0.rel_dir_x = 0.5072143931026377;
    tmp_msg_0.rel_dir_y = 0.3104303934597634;
    tmp_msg_0.rel_dir_z = 0.9795318010962029;
    tmp_msg_0.err_x = 0.8217765325377082;
    tmp_msg_0.err_y = 0.46388703270780807;
    tmp_msg_0.err_z = 0.1642808613005895;
    tmp_msg_0.rf_err_x = 0.7274974694731855;
    tmp_msg_0.rf_err_y = 0.6046631221560499;
    tmp_msg_0.rf_err_z = 0.2584165785726241;
    tmp_msg_0.rf_err_vx = 0.8790249087185743;
    tmp_msg_0.rf_err_vy = 0.10283475818908638;
    tmp_msg_0.rf_err_vz = 0.004801090061806179;
    tmp_msg_0.ss_x = 0.41636834803558187;
    tmp_msg_0.ss_y = 0.744475490130236;
    tmp_msg_0.ss_z = 0.4252581545392705;
    tmp_msg_0.virt_err_x = 0.5867043682263825;
    tmp_msg_0.virt_err_y = 0.7400665410652322;
    tmp_msg_0.virt_err_z = 0.6016878740346763;
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
    msg.setTimeStamp(0.2619442841051687);
    msg.setSource(1005U);
    msg.setSourceEntity(191U);
    msg.setDestination(23560U);
    msg.setDestinationEntity(109U);
    msg.s_id.assign("PYZHVBKHXLEGUSKMWTJHNQPCWGULRGWNYZKDGAHOLQBPIZBOFZWBUBJJUVUSUHRWMLFXAFIOI");
    msg.dist = 0.46800582712188177;
    msg.err = 0.13456564214949907;
    msg.ctrl_imp = 0.2804468074920693;
    msg.rel_dir_x = 0.799627432665993;
    msg.rel_dir_y = 0.25645205656691117;
    msg.rel_dir_z = 0.5752463761791258;
    msg.err_x = 0.11950835894736145;
    msg.err_y = 0.016848150820705787;
    msg.err_z = 0.8193841052842592;
    msg.rf_err_x = 0.021055632705331617;
    msg.rf_err_y = 0.08588167093110255;
    msg.rf_err_z = 0.0596313179971516;
    msg.rf_err_vx = 0.7297747605976755;
    msg.rf_err_vy = 0.2827830859614243;
    msg.rf_err_vz = 0.0830100210183975;
    msg.ss_x = 0.6110772481047707;
    msg.ss_y = 0.8825462794724231;
    msg.ss_z = 0.06821103747955304;
    msg.virt_err_x = 0.675817755331706;
    msg.virt_err_y = 0.27083238787623265;
    msg.virt_err_z = 0.14915667721632597;

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
    msg.setTimeStamp(0.9984126238450628);
    msg.setSource(27850U);
    msg.setSourceEntity(123U);
    msg.setDestination(46457U);
    msg.setDestinationEntity(62U);
    msg.s_id.assign("AXVZUZEYIOFKAXGIBMDLIJMZDMPPFEWNYZMLXISXBPTJPJMHKKAMUGCPKWJSBHWLHIQHVSLSYWJSDWENQKZOABEAHANLRQFWLCRQHNUOSVIYGYKOCEJGETGONXVKPHGCAXXQBINOT");
    msg.dist = 0.5982590187758532;
    msg.err = 0.4368708078651158;
    msg.ctrl_imp = 0.893910346182973;
    msg.rel_dir_x = 0.14842857770107376;
    msg.rel_dir_y = 0.6131597982602925;
    msg.rel_dir_z = 0.3791969045192548;
    msg.err_x = 0.9200817748826049;
    msg.err_y = 0.04774603831543245;
    msg.err_z = 0.24673638734216696;
    msg.rf_err_x = 0.3577116296373576;
    msg.rf_err_y = 0.7998398220057936;
    msg.rf_err_z = 0.3353779206505565;
    msg.rf_err_vx = 0.8398675372441369;
    msg.rf_err_vy = 0.7224258017503001;
    msg.rf_err_vz = 0.9182958133226472;
    msg.ss_x = 0.20629146601279513;
    msg.ss_y = 0.8113655503418749;
    msg.ss_z = 0.9586852489473695;
    msg.virt_err_x = 0.4314653890333444;
    msg.virt_err_y = 0.6054504146633188;
    msg.virt_err_z = 0.010386856326781602;

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
    msg.setTimeStamp(0.5426423821899033);
    msg.setSource(46113U);
    msg.setSourceEntity(220U);
    msg.setDestination(23794U);
    msg.setDestinationEntity(51U);
    msg.s_id.assign("GNWMAMJUTAMAUZIOLUWHKKXVLTIMNOZPIQCBHDDGUZRDCVBWFAHAYUBIYYCIHKTZXNXGOHFVAJJZQLPHPOKIKQSFRJDJTHKZOZESNNPDPJKHERRVUEILPXSUKSVVOCEQ");
    msg.dist = 0.5828304398906399;
    msg.err = 0.5808044440440138;
    msg.ctrl_imp = 0.5138967841931348;
    msg.rel_dir_x = 0.42268593881704863;
    msg.rel_dir_y = 0.3549360471481543;
    msg.rel_dir_z = 0.39706593990752714;
    msg.err_x = 0.06961190431210718;
    msg.err_y = 0.17210001514294504;
    msg.err_z = 0.140793481309482;
    msg.rf_err_x = 0.6703508530955835;
    msg.rf_err_y = 0.05253371568778986;
    msg.rf_err_z = 0.8131216685453397;
    msg.rf_err_vx = 0.6390879115532969;
    msg.rf_err_vy = 0.09019055614582583;
    msg.rf_err_vz = 0.023635584031064583;
    msg.ss_x = 0.11742789377946095;
    msg.ss_y = 0.3938062192192928;
    msg.ss_z = 0.7913700845223985;
    msg.virt_err_x = 0.33013086445533224;
    msg.virt_err_y = 0.8705570938493171;
    msg.virt_err_z = 0.8596813342528374;

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
    msg.setTimeStamp(0.8389540870235312);
    msg.setSource(44137U);
    msg.setSourceEntity(177U);
    msg.setDestination(4746U);
    msg.setDestinationEntity(214U);
    msg.timeout = 33797U;
    msg.rpm = 0.21851927136888072;
    msg.direction = 2U;
    msg.custom.assign("MSRUQXBNDWAYBVDRKUIFMPRHIPZISPCMVFKVSKCICBQHNDIQLULKQZPFAJYMBWCZVTOEFMISSSDOYEOF");

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
    msg.setTimeStamp(0.15028104649975227);
    msg.setSource(44397U);
    msg.setSourceEntity(217U);
    msg.setDestination(34854U);
    msg.setDestinationEntity(204U);
    msg.timeout = 46693U;
    msg.rpm = 0.7372667352374098;
    msg.direction = 49U;
    msg.custom.assign("TNQDUENYJZHBRHKIVGZKGSDDYLFISQIXTQUHCUWPTOYPUSATNVBQXLBJKEETLQTLEZMBRCXHJRDVYCHSKBDEGLJVJLAXXXQGEHHZENITASWNMVNWWTWAAJRCYFRSUJSGKDNUNMXUMAIVCGOLRPSFMVXQZBFMJRD");

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
    msg.setTimeStamp(0.6246434650957687);
    msg.setSource(36321U);
    msg.setSourceEntity(200U);
    msg.setDestination(11757U);
    msg.setDestinationEntity(74U);
    msg.timeout = 46085U;
    msg.rpm = 0.2526444040690673;
    msg.direction = 239U;
    msg.custom.assign("PCIADCFNAMCMIAIUFPPEJMIQQVSBWHHOORZYINAREMGUZBJGETVLUFSUAGJPQMZTDE");

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.3823557211005605);
    msg.setSource(33874U);
    msg.setSourceEntity(168U);
    msg.setDestination(34006U);
    msg.setDestinationEntity(179U);
    msg.op_mode = 91U;
    msg.error_count = 7U;
    msg.error_ents.assign("ZCHRNKGVYOZDPFFCMXVELNOSTUGISPJBLOAVJXAYENPQBIMUUZWSFYVTNVBXWHSKISGJPKHLYXSMSLHGIUKVJXTEBQCWEKMTTETQPBRCXBCZHXHANYWBGIDFTKNWCMSVQEYHIBJOOVG");
    msg.maneuver_type = 6491U;
    msg.maneuver_stime = 0.4337342675074197;
    msg.maneuver_eta = 51629U;
    msg.control_loops = 2017913117U;
    msg.flags = 94U;
    msg.last_error.assign("ELGDRNZJNBJTMTEREUFFPJDKYFJMGMQWM");
    msg.last_error_time = 0.2836937849293729;

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
    msg.setTimeStamp(0.3504275888245463);
    msg.setSource(38896U);
    msg.setSourceEntity(99U);
    msg.setDestination(27280U);
    msg.setDestinationEntity(103U);
    msg.op_mode = 142U;
    msg.error_count = 3U;
    msg.error_ents.assign("PFJDIAIMTJVTXLGTHLFGDXPRRFRDWGHZXNQIBDLLVZCPNTPSXWUBIHLDIKHPCOUVUOEXB");
    msg.maneuver_type = 41173U;
    msg.maneuver_stime = 0.46028448974664293;
    msg.maneuver_eta = 41672U;
    msg.control_loops = 138555953U;
    msg.flags = 52U;
    msg.last_error.assign("FWUOLXTEOQNUMISTLGJUXMGGYPKHRQICMAF");
    msg.last_error_time = 0.8884691374891874;

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
    msg.setTimeStamp(0.8586666324564072);
    msg.setSource(17201U);
    msg.setSourceEntity(170U);
    msg.setDestination(15234U);
    msg.setDestinationEntity(133U);
    msg.op_mode = 167U;
    msg.error_count = 224U;
    msg.error_ents.assign("IKHBSYHEXQIMPAMKRCLZCXNIEQFJTLRYHUNAIDKBJHENOLWLZSKCVTCUJNBYXUMQWLAQOFMWZRQDZGLABYALTSKQREVDURFWQCNCQUPNSDSAKLASBYRYWNUTJUMWOMIZOZFFLCHYHZDRKUIWZGNDUCOIGQFVNCMGVDPPHTHSTYEGFEAXJETOASMVEIVYZBMDCJBRSGTEHAFXRKVNXJBTUPLYRFPVGTDKPW");
    msg.maneuver_type = 35169U;
    msg.maneuver_stime = 0.08244502611257343;
    msg.maneuver_eta = 51201U;
    msg.control_loops = 1233456851U;
    msg.flags = 7U;
    msg.last_error.assign("IBTFRWEWCBQPKYCSAKPXXJDULFHGIOVJGSZGMHQTXKHAMKWDXHPDEMOITZTBWYRLBMTPOSWAHESLNCLQXVVKVOABVKHFMIIEYYCLWXMJJGUQPYUZEJMDDQJJEMNKNUJPLYCKXZFTXBDCUTCALYZRBFYSRRAZDRDNNORPGIYIVVOE");
    msg.last_error_time = 0.5767604894409417;

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
    msg.setTimeStamp(0.8696434270653558);
    msg.setSource(14661U);
    msg.setSourceEntity(105U);
    msg.setDestination(51090U);
    msg.setDestinationEntity(0U);
    msg.type = 56U;
    msg.request_id = 10668U;
    msg.command = 199U;
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("DVSUDCSDPZMUPQCCRCYGOBTDSISWUPPYLBAFWFOEEKKLRMEHFVYLTJOHRXVVMSOAPYDIGIVHTGGWUMBFPYQLRACCBLUZHKUABJOQBIGSIRNJDEQNNTELIWHCOICKWURSNYBYVKANMEAQODWFEFNXPKJAYJNPWBQACKMFODZZAOHXJLKETITVBIZHBJHTRDSGGRHXMTTVWGEZXXPRU");
    tmp_msg_0.reference_frame = 76U;
    tmp_msg_0.custom.assign("ELTYHLVRJPEYAEFXODDKAOUIGPGMYURHFPTGHLNONQBZJEIKQIEBANBPORQCFYPJPKVHCJEZYTXFQUVCVCCAGTASYESWZSLSSIFSJJZNGLYRNIXV");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 35390U;
    msg.info.assign("ZBOOGLKLYATAYXWTTZXXXESJMZHYUOMWKWSLTYKHHNGEBDAXMJYBUJZVITNEGJECIDLRDUNMHPJRKNONGFIUTMURBAMJGVDXMFPKPVPFZLEIPPEWVOCSIHXQCRNOKDNCLZSUFPQ");

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
    msg.setTimeStamp(0.9884918485370346);
    msg.setSource(27131U);
    msg.setSourceEntity(113U);
    msg.setDestination(38012U);
    msg.setDestinationEntity(139U);
    msg.type = 48U;
    msg.request_id = 22496U;
    msg.command = 170U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.8487970054039993;
    tmp_msg_0.lon = 0.45228863631818583;
    tmp_msg_0.z = 0.9870979147637339;
    tmp_msg_0.z_units = 97U;
    tmp_msg_0.radius = 0.7791393181809161;
    tmp_msg_0.duration = 13553U;
    tmp_msg_0.speed = 0.2614258041052451;
    tmp_msg_0.speed_units = 11U;
    tmp_msg_0.custom.assign("PRNTWWXDRUSXPWESFWTDGKXXMZMUITOBUGBLUKONFYBAOJTFNSDKYNPEQOUXDFGYXJKERKOVIBAQTURBKYNSRPHGXZKYNJBLERNTOUEQNXQZDCZELKISEADBPIGVQCFPALOYQCVHVXHIJUJFQEDJEDYMCMVWNGXVBJJWIZAHZGTKIRTMZGCMYSHAMZQCVLRIOAHOPEPUAIPGCKRRLWFLYLLUVJTGD");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 20875U;
    msg.info.assign("VLSRYFFEDBMOLGRVFBQGYBAPDGEZMJBURFOWLZEKMVGWTWNVEDQECWPHIIRSEMTNLZOOLWGXYXSMOQONPWCNJGABTTHKITIISODWGYZKPJRKLAUUHMHPJVJAKHDHIAUBUPVTSFTAMVZWUUCEFUMXVUQAZYKFCSJPQCXCUQVBYCIQMCJHOHLKIXNFOQQLBYZDBFXXMNXPSZTIDAVJRSSGXZDWATPAENGPJJODSKNKKLFNLHRRCNHYCWXEQ");

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
    msg.setTimeStamp(0.48650502516043803);
    msg.setSource(63774U);
    msg.setSourceEntity(181U);
    msg.setDestination(34236U);
    msg.setDestinationEntity(78U);
    msg.type = 249U;
    msg.request_id = 28329U;
    msg.command = 55U;
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("HYCNMQIPLYZOSLJAMXMCSK");
    tmp_msg_0.formation_name.assign("CMKNQWSDZTSOXGQIVPAHMLOPAALJGCUCBYJWRRJWWLXVWYDJJNBMXKHDDOQLHCZKVYYWDUKVMIQPQUC");
    tmp_msg_0.plan_id.assign("BFOIYSKIZMYGFAPTJBGWFVCJYEORPKWDISNPWPKKETGTXPEQGVCQBRZKMWARJUHHNNQHFHAGMDSWWMPNNFLUWFIHUPPYZ");
    tmp_msg_0.description.assign("PSAZZBDUDRJEBIPGKMSVOAXMHJBPQUSNGICCGJADKGEEKGMQIZXPAYWTSQTABKQDCWFHJCXENLUSGFPRJNWAIXCJOLRXQLKNDAHRDGTWPOEEHYZOORSVKLMQOTSWQHOPTLZEFRZGFQPYCTNKXRTFSWNWUMLBEMUZIMYAVUZCYHFVBVLNYJWMVKOCURBZIXFPHXLYTDY");
    tmp_msg_0.leader_speed = 0.6261702703048962;
    tmp_msg_0.leader_bank_lim = 0.702551161946966;
    tmp_msg_0.pos_sim_err_lim = 0.22218874329457006;
    tmp_msg_0.pos_sim_err_wrn = 0.1992286095402892;
    tmp_msg_0.pos_sim_err_timeout = 42167U;
    tmp_msg_0.converg_max = 0.13488020730709116;
    tmp_msg_0.converg_timeout = 29218U;
    tmp_msg_0.comms_timeout = 19814U;
    tmp_msg_0.turb_lim = 0.5656777287539569;
    tmp_msg_0.custom.assign("JUVWDCHJLXZAXKSHYFRAPJYKCJJOJWNZUKKMCUKYGAPXUOCUYVALLGQLNAVTLPRDIZLRGKMZSTCEPDBMEDEHSGITLM");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 63439U;
    msg.info.assign("PJJQAMNCUMHWTFCSEHCPOBNNYLHZLMPQTYWUKHQXBDSCRYLEAAKIAILZRNTTDRYBDRVQMSWOPXKJGERFIYQRLDZCBTZJYNUYMJMMAPNFHJXVOVWVSEVCODVZUWAFQACAGBGXOTSJJAZNTQDHNXLXHYQPTHUPLSGVQBIOZETEMOKXUIFKFLOYUBPBFGHUSSVEGJLFWOIRYKSWKCWCGBMDDPTBXRXIDMGZIEIALFVKDUXNNSVWG");

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
    msg.setTimeStamp(0.7699040103122881);
    msg.setSource(2422U);
    msg.setSourceEntity(204U);
    msg.setDestination(13112U);
    msg.setDestinationEntity(5U);
    msg.command = 57U;
    msg.entities.assign("NODRAHPNAXVSCFNVVSKHHUIMANCPBQYEMTILHWZVUGQWYDSQSNTMQDQJDUGNGQDGCRAFUOKMHFZPEVZPCUEWIFSKBLFVQWFHISIROCJEMKBLHNCWYGPOILOYABKLZUFIZWLXWQNXNEFVJPJGJJERJGTKMRLUTDPJPUMOGADEOTWRZTZ");

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
    msg.setTimeStamp(0.17920862483959554);
    msg.setSource(53510U);
    msg.setSourceEntity(96U);
    msg.setDestination(47365U);
    msg.setDestinationEntity(187U);
    msg.command = 239U;
    msg.entities.assign("LVFPIMGTOAXFLKJHKYAUUCPHPVKTZSDIECDNLVZTXOTUREZZCWSENFXIQJXDFTTHICWPYEQITKUFHOLBPCAZDNSYCOMXEXUZPWMQKEFQWBZOVBCPCNOIESHYQUJ");

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
    msg.setTimeStamp(0.3051632678449465);
    msg.setSource(51216U);
    msg.setSourceEntity(161U);
    msg.setDestination(55206U);
    msg.setDestinationEntity(231U);
    msg.command = 140U;
    msg.entities.assign("JHWEFAWIUOGKMDGZEAKKPMZLCDVVSKVTQCJUFRBZURYUBUOMNHORAIIJCSFCNHMXFJBCQXLQNNSNBUACFEYVGDEGFBBZKLOPSPNYXQKCLIMNXZEAASLRUJHMJKSPTFMGIWFMJXZPWGXRTJ");

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
    msg.setTimeStamp(0.3974345166791572);
    msg.setSource(36634U);
    msg.setSourceEntity(13U);
    msg.setDestination(55463U);
    msg.setDestinationEntity(59U);
    msg.mcount = 193U;
    msg.mnames.assign("YYXKDYCQKLDJQQWWPAJKWITPYHYDQKFAQUBHMVWGXOSIXEKXJLVOBZYKDFMQYGHIRVTJTAZAWSNURSXLGISJEUVCGSBXZPNBUVQXEAJMROMCCRPVIKZPGCFRSDTDNTMVDGYJUUVOXNPKTIBLSWEMVFLUQSFWBX");
    msg.ecount = 131U;
    msg.enames.assign("FSEQEHTLBWRXTQAQVKTMCKAFYTWJFQDIJPCBBWMTTPQJYOUJBZGCCQHHFLJKVGXRSHUVPYHEEVRGRMLNINHBYFKDACULZISQCKVNUCZXZXQAMKGJVWIRKSUUDZSHJRZOSAZVSUWBWYFBRDYCUNOMXDKQQIZYEPWXNPDMYIDFTOTCMEICYRLXAFOVMDPPYAPAMFDAJAPEBLJE");
    msg.ccount = 176U;
    msg.cnames.assign("UEAUGUTDOXPESDYPXVDUVDERAHREOJWCIKUBLYHTWXFHIKIUCGMXVXLUKZBGMHXPA");
    msg.last_error.assign("WTJFKZTTVGIXFZEWSVCL");
    msg.last_error_time = 0.7565650808195905;

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
    msg.setTimeStamp(0.09605182434387927);
    msg.setSource(32498U);
    msg.setSourceEntity(17U);
    msg.setDestination(7731U);
    msg.setDestinationEntity(150U);
    msg.mcount = 5U;
    msg.mnames.assign("DUDEKZYHVBHRNXNEQLNTBBFFGTLKNRCIEGAYATIWREPZUPSGV");
    msg.ecount = 167U;
    msg.enames.assign("QVEAJKGHNGIARSNAECOTDBDIGDBLEXJPKMPHFBHKJGIORSFVSXULGJXZAQFFOOYBUOXGYWKYNVMJ");
    msg.ccount = 177U;
    msg.cnames.assign("XAGHAMGUUICSOXHGDADPJVBEDQRJAOQIJTJSQTSMRCRABKXDTYWTUVWGWUMCNAGMRYPOVPISEZRVEFLAEJWMEXZOIBLFXJBWNSYCUGPSCOLFNLNOVHKTGMKKMRYHIOCDZLDPTPBVVGKDOTUYPSYPTKLFXJQLSXVCUENFWBPOATNZBJERKIYQPSIHXZFZNZXKQJBJUNBHUKWCRZCMYFEIANWVDHRDQOQZELQYSHIZH");
    msg.last_error.assign("DIFNSGJXEFOYCDAJHYTLVKJXNAEHIETINFXKUYRKZYNPPQCOOMHZYNPILFSQQAMFDBORABGZMUWQE");
    msg.last_error_time = 0.31065497671837705;

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
    msg.setTimeStamp(0.6358264343085279);
    msg.setSource(44913U);
    msg.setSourceEntity(236U);
    msg.setDestination(36022U);
    msg.setDestinationEntity(29U);
    msg.mcount = 148U;
    msg.mnames.assign("CBAICBTPNVUIWGTPXMGDPRKOSHOJEVBIXVPLFTJSOEHUGUNVQXQPSHAUMZRHJXEFAAGNNQWRZNSBOCZMNXDOGSXKFBXUPIWVIU");
    msg.ecount = 79U;
    msg.enames.assign("GAVCWIXOXCQMBFTRWNSRLQUUUFZDWAWDIIDMSVLVTKEJBZBDOIRHJRAUPHZZWLATRJONQECPTJCAXPSJGNZQBMUVGNIVKHAHPGRDPUYDWYBEYOLJNXPYWEPFNOUUZBFNVKJTCGTPQZGUHHLCRHSKZZDTDSBLYWRFCXYFMYGOZKQAVJNMSLHTEQOENRXACCYMFXBPGGHVQXY");
    msg.ccount = 61U;
    msg.cnames.assign("SDTFVYUAQWGGKRLZFIXJYBOYKFXHPHKSYEROGTMLJATKATMZXXTUHMWNKJIESZJOFGNOZMNCPCHFCLRLVTARPBZV");
    msg.last_error.assign("SNGEGDPGIQPUTJESRQCXMTUCRIXNMOATKZTMIMVOPYAHMPECMOLOZYEXULOTAWJRYTWJNYXVRQKCISMNUICZJRGWFJRACOULMHDNFLGQVHNGKJDYAOQXXBZHENFADUXCJTDDFBHBOCVOLOEKALBSUEYPHAHKIIWWGSCWWATBULZPSNECZBQLPJQVAVNLQNFQWEUPVKRDDETKHFHILKXDBRMPMVYUIGZXBBJSKSFWSYSPRWIG");
    msg.last_error_time = 0.1634598103925904;

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
    msg.setTimeStamp(0.333692842742894);
    msg.setSource(58037U);
    msg.setSourceEntity(141U);
    msg.setDestination(26012U);
    msg.setDestinationEntity(109U);
    msg.mask = 11U;
    msg.max_depth = 0.6620889850124929;
    msg.min_altitude = 0.6990991444270346;
    msg.max_altitude = 0.17147994434650093;
    msg.min_speed = 0.8165617389517039;
    msg.max_speed = 0.6593114181446671;
    msg.max_vrate = 0.29287135880305604;
    msg.lat = 0.16975696677680008;
    msg.lon = 0.5374541728814766;
    msg.orientation = 0.9910245548794318;
    msg.width = 0.6296572995321892;
    msg.length = 0.25331693398910915;

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
    msg.setTimeStamp(0.029079545322927336);
    msg.setSource(28668U);
    msg.setSourceEntity(82U);
    msg.setDestination(25882U);
    msg.setDestinationEntity(37U);
    msg.mask = 110U;
    msg.max_depth = 0.1777477354386079;
    msg.min_altitude = 0.46595472457417364;
    msg.max_altitude = 0.7112004176156745;
    msg.min_speed = 0.9387154007825469;
    msg.max_speed = 0.12154129613493503;
    msg.max_vrate = 0.7305065672039537;
    msg.lat = 0.9684606514657711;
    msg.lon = 0.8680200428368879;
    msg.orientation = 0.736761494925555;
    msg.width = 0.8448170459982761;
    msg.length = 0.025474207015201422;

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
    msg.setTimeStamp(0.05310727599740117);
    msg.setSource(65379U);
    msg.setSourceEntity(216U);
    msg.setDestination(42094U);
    msg.setDestinationEntity(154U);
    msg.mask = 30U;
    msg.max_depth = 0.3316993250979515;
    msg.min_altitude = 0.48028286899565886;
    msg.max_altitude = 0.22762259237585902;
    msg.min_speed = 0.5083884378629746;
    msg.max_speed = 0.6580919954363308;
    msg.max_vrate = 0.6120590004934573;
    msg.lat = 0.24080307006449753;
    msg.lon = 0.8366026179609756;
    msg.orientation = 0.5912939063750566;
    msg.width = 0.15298355776368344;
    msg.length = 0.20033225830809276;

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
    msg.setTimeStamp(0.6144909096878917);
    msg.setSource(51232U);
    msg.setSourceEntity(132U);
    msg.setDestination(16581U);
    msg.setDestinationEntity(50U);

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
    msg.setTimeStamp(0.9272266165682009);
    msg.setSource(57137U);
    msg.setSourceEntity(48U);
    msg.setDestination(13130U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.8096824300738655);
    msg.setSource(8020U);
    msg.setSourceEntity(186U);
    msg.setDestination(45086U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.855479221616142);
    msg.setSource(7713U);
    msg.setSourceEntity(158U);
    msg.setDestination(53768U);
    msg.setDestinationEntity(205U);
    msg.duration = 23755U;

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
    msg.setTimeStamp(0.5830456035944451);
    msg.setSource(25401U);
    msg.setSourceEntity(162U);
    msg.setDestination(25755U);
    msg.setDestinationEntity(68U);
    msg.duration = 9434U;

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
    msg.setTimeStamp(0.9352786638472818);
    msg.setSource(14073U);
    msg.setSourceEntity(164U);
    msg.setDestination(55217U);
    msg.setDestinationEntity(37U);
    msg.duration = 19283U;

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
    msg.setTimeStamp(0.7740276887798324);
    msg.setSource(7496U);
    msg.setSourceEntity(35U);
    msg.setDestination(34992U);
    msg.setDestinationEntity(31U);
    msg.enable = 239U;
    msg.mask = 960185299U;
    msg.scope_ref = 3678794289U;

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
    msg.setTimeStamp(0.10129362716106471);
    msg.setSource(49323U);
    msg.setSourceEntity(27U);
    msg.setDestination(5256U);
    msg.setDestinationEntity(57U);
    msg.enable = 247U;
    msg.mask = 3014080156U;
    msg.scope_ref = 1718399135U;

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
    msg.setTimeStamp(0.6471959888718137);
    msg.setSource(58901U);
    msg.setSourceEntity(184U);
    msg.setDestination(10476U);
    msg.setDestinationEntity(24U);
    msg.enable = 165U;
    msg.mask = 2937768285U;
    msg.scope_ref = 2930753675U;

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
    msg.setTimeStamp(0.1565869795477407);
    msg.setSource(43082U);
    msg.setSourceEntity(63U);
    msg.setDestination(3533U);
    msg.setDestinationEntity(22U);
    msg.medium = 164U;

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
    msg.setTimeStamp(0.6117095921508953);
    msg.setSource(22957U);
    msg.setSourceEntity(159U);
    msg.setDestination(45538U);
    msg.setDestinationEntity(50U);
    msg.medium = 178U;

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
    msg.setTimeStamp(0.504579690675382);
    msg.setSource(32534U);
    msg.setSourceEntity(93U);
    msg.setDestination(48301U);
    msg.setDestinationEntity(10U);
    msg.medium = 73U;

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
    msg.setTimeStamp(0.45973600494541944);
    msg.setSource(28981U);
    msg.setSourceEntity(97U);
    msg.setDestination(56669U);
    msg.setDestinationEntity(180U);
    msg.value = 0.7309055629565953;
    msg.type = 182U;

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
    msg.setTimeStamp(0.0776360119179369);
    msg.setSource(42208U);
    msg.setSourceEntity(77U);
    msg.setDestination(12036U);
    msg.setDestinationEntity(114U);
    msg.value = 0.7288624691587215;
    msg.type = 192U;

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
    msg.setTimeStamp(0.9048320901279686);
    msg.setSource(24381U);
    msg.setSourceEntity(163U);
    msg.setDestination(4800U);
    msg.setDestinationEntity(111U);
    msg.value = 0.0671933874921653;
    msg.type = 163U;

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
    msg.setTimeStamp(0.9273763028519262);
    msg.setSource(55055U);
    msg.setSourceEntity(221U);
    msg.setDestination(4406U);
    msg.setDestinationEntity(14U);
    msg.possimerr = 0.8086679559560438;
    msg.converg = 0.23796153394537123;
    msg.turbulence = 0.4497125902192568;
    msg.possimmon = 234U;
    msg.commmon = 26U;
    msg.convergmon = 187U;

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
    msg.setTimeStamp(0.08049977775921557);
    msg.setSource(56204U);
    msg.setSourceEntity(206U);
    msg.setDestination(65354U);
    msg.setDestinationEntity(204U);
    msg.possimerr = 0.9225666912403999;
    msg.converg = 0.5178523212722864;
    msg.turbulence = 0.4045801216595608;
    msg.possimmon = 140U;
    msg.commmon = 107U;
    msg.convergmon = 135U;

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
    msg.setTimeStamp(0.6465450356878562);
    msg.setSource(4829U);
    msg.setSourceEntity(122U);
    msg.setDestination(60285U);
    msg.setDestinationEntity(204U);
    msg.possimerr = 0.07714587710865228;
    msg.converg = 0.3514897729243316;
    msg.turbulence = 0.2659100009578499;
    msg.possimmon = 170U;
    msg.commmon = 158U;
    msg.convergmon = 87U;

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
    msg.setTimeStamp(0.14743341277349453);
    msg.setSource(46588U);
    msg.setSourceEntity(90U);
    msg.setDestination(11984U);
    msg.setDestinationEntity(129U);
    msg.autonomy = 48U;
    msg.mode.assign("TVLJEMBLTVFOXTGVGUICKTEIDEZQEBOAMKZHWXKDYHARGFVNSKZWKGYPCBHRLQPLBXJPLINKIKSWZLSDETJQRYMYYDMNNC");

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
    msg.setTimeStamp(0.12818724908071577);
    msg.setSource(7728U);
    msg.setSourceEntity(48U);
    msg.setDestination(7393U);
    msg.setDestinationEntity(180U);
    msg.autonomy = 168U;
    msg.mode.assign("MRYJIKWOUMKIWNSZOEEYTAVIYXTVCPJJJSSHCXAFCQAIUBGZ");

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
    msg.setTimeStamp(0.5100289138725242);
    msg.setSource(38385U);
    msg.setSourceEntity(162U);
    msg.setDestination(13545U);
    msg.setDestinationEntity(7U);
    msg.autonomy = 47U;
    msg.mode.assign("GLQFMYVNXEUEBGSMTOCFPOWRUKDOTNFOKCQZUIAYLPCQJLACXFQVBTWLIXNYMPQBYMVRASYWSOFIMIBYBMHIGEZDBTYKEHRJJITPMUHRWUABERPNZXXZDMHGTRCQGGLOBLWCDFIGVPNTEXJZSOWZLVREWSXHWSEKJWYHJZQQADAZB");

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
    msg.setTimeStamp(0.9468777475153242);
    msg.setSource(48182U);
    msg.setSourceEntity(210U);
    msg.setDestination(18556U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.9563716250988028);
    msg.setSource(23091U);
    msg.setSourceEntity(176U);
    msg.setDestination(59609U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.12616532258053637);
    msg.setSource(64998U);
    msg.setSourceEntity(49U);
    msg.setDestination(54362U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.48640777201043583);
    msg.setSource(62017U);
    msg.setSourceEntity(236U);
    msg.setDestination(33905U);
    msg.setDestinationEntity(239U);
    msg.plan_id.assign("DOTPZLVQMBITURINLWFRBBGFRHDORRIOILZQSMOEEIQKQDWJMPHSUDMAUFKKDMOOOXXGFVZUHAJHBBQNTQCRWECTWFPHEBEQCFSBBJXLVPYCSHMDUYSWTGA");
    msg.description.assign("ZMSMEXVOHQHKPTSYPMYBTHQZMHMBOWUO");
    msg.vnamespace.assign("WZVLCSAMUTJLJCAIWKHWVFEYTRCUNZQTSQAXBYENANPDSYMLNBCPMIZPUDWCPMPZSZQGESXJHEBLYPRECZVBAJJKPRZKOKDVGRMQLHXSVOVEXLFLWYETLOFIVCMKBGYKIFGXCRXJBIAYUDZXUZATTRCDKJNHSIPDXUFOTNHHURIFKDRNUEWHNOOPHJJYQESEIMVRWIXWVBFFALYWBNQGDNZSOYGTUACTIQGXMAHKMOPQQJBDTMLORDQWFVGK");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("ZUNQGQLCZOSFIDZUNRVHUVCJJAIKYOBMDALWAOQEDYYVJGDXBRVJEPFVRWNTFSSHWQDNGWOMCPBYBKNXAAM");
    tmp_msg_0.value.assign("LJPUXBLPMJTVRPUANCKQQKKQIY");
    tmp_msg_0.type = 194U;
    tmp_msg_0.access = 221U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("MVBXJTSEJELKWELQKCPGUFMJMFHUJBUAXTWKABMSHRQOITFPGOBGKBZZUGJASVKAFRQYLLSRLCISPBFFNXPBYQYACQDVHZVMUWEHYVHNDULWRARPTNEDDPROWXXVMLYWCQGFHBGKNSVMYZUOFIKIOIXWACFLJZPLDZZJGOSCGEEZGQMVTWNDNNZMXQTATIDHNPNDIOYQJUOUVYHKIKCHWFEIIOMGBBYXCRUOTJESDWRCTPYXQ");

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
    msg.setTimeStamp(0.6613721785062373);
    msg.setSource(11727U);
    msg.setSourceEntity(177U);
    msg.setDestination(42488U);
    msg.setDestinationEntity(231U);
    msg.plan_id.assign("NJLQFUKHQDHMECTFAKHVWHZIGFZKGWYRAFYRLSBFVWNEKYIIDKOBNPXKLQPUDJUPVGIBICTBTOBTRKMBIDPQTKMDIEKDPMEQJUYNZO");
    msg.description.assign("MSZGWIGXNTFKAORQECVKCFGBXLYQINNJJIMIFUTEXYGGHHSGKOTUMCFBSZYMYBCVOLJGPYEQMMAKSTTPUXKBVSPBQYRFFESIMLCKLCZLLZDHWJ");
    msg.vnamespace.assign("DKMDPBHBJPYHWSEVPXYSKXJXZGDHCGQORWHZLISSVEJAAHSCLMWTNXU");
    msg.start_man_id.assign("RIYJDOTXTDPCPBWJBLTXVYLPMBGJBIAPUJGZDHNGBKJQHRKNUWSHMVQFLOBFAMM");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("CUQZNOJHQKEDIUBRYOFBQZZPMNGFKTZLBXWCPYCLCJLMRHUCOBRSTXTNVUIUMIQMKUWZEUBSKOAJXGETINSCRHFPPSXLIXWGGFDDFAYRJLKFCIWTVMEHFGOAERVJNOLQXEDAVAHTYTCWLFWNPSQLADVYOUZFJHRVSKPBMRDPGYALDVM");
    IMC::YoYo tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 54342U;
    tmp_tmp_msg_0_0.lat = 0.9736708616326836;
    tmp_tmp_msg_0_0.lon = 0.32629847361212116;
    tmp_tmp_msg_0_0.z = 0.8890677852357359;
    tmp_tmp_msg_0_0.z_units = 226U;
    tmp_tmp_msg_0_0.amplitude = 0.6816941167014889;
    tmp_tmp_msg_0_0.pitch = 0.9738776613723786;
    tmp_tmp_msg_0_0.speed = 0.6303830097063655;
    tmp_tmp_msg_0_0.speed_units = 10U;
    tmp_tmp_msg_0_0.custom.assign("ALTODUBCQLNKKRWWQDPHSHTSWZBIDQAAWNBCETPROXUKFJMHUNRFSWZRFHXFPAQGIMTSCUPGSFWMBXOPIHEDHEUZHSYTRNIIKEQVSKUICOHOJDPBMHEMNNKUHOSDYKVYULYVGTBPKELMAYAFTZMAEVDDZNVFLSKUZRZCVJEWAXJOMTGBJTXZVQPNJRQRQRXNWLDLFXGVCQCIJIJGJIGVGAWJCWYUYVBC");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::MessagePart tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.uid = 53U;
    tmp_tmp_msg_0_1.frag_number = 75U;
    tmp_tmp_msg_0_1.num_frags = 205U;
    const char tmp_tmp_tmp_msg_0_1_0[] = {94, -16, -22, -24, 111, 123, 84, 17, 43, 106, -104, -48, 62, -49, -105, 8, -87, -11, 88, 93, 119, -8, 121, -2, 59, 83, 88, 87, 123, 7, 13, -33, -53, 62, -88, -1, -61, -37, 15, -37, 111, -54, 91, 33, -70, 51, 16, -121, -36, -14, 51, -8, -117, -127, 73, 112, -28, -44, -127, -123, -100, -77, -76, -105, 33, -3, 118, 36, -79, -39, -121, -39, -119, -119, 102, 15, -75, 8, 31, 4, -93, 36, 71, -63, 52, -25, 55, -117, 117, 64, -122, -28, -43, -104, 25, -10, -96, 21, -81, 83, 71, -74, 33, 85, -46, -85, 26, -46, 44, 4, 125, -2, 80, -18, 8, 103, -124, -82, 68, -69, -114, -44, 107, -35, 81, 101, 117, -81, -110, 78, -15, 49, -100, 70, 67, -58, -30, 65, 96, 7, 118, 103, 44, 58, 97, -126, 87, -9, 113, 111, 34, -89, -107, -16, 78, 35, 121};
    tmp_tmp_msg_0_1.data.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::DesiredVelocity tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.u = 0.6027554045396339;
    tmp_tmp_msg_0_2.v = 0.5977023586825468;
    tmp_tmp_msg_0_2.w = 0.42442909661785533;
    tmp_tmp_msg_0_2.p = 0.008745246041072074;
    tmp_tmp_msg_0_2.q = 0.5814860909768584;
    tmp_tmp_msg_0_2.r = 0.6439645642214408;
    tmp_tmp_msg_0_2.flags = 202U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PopUp tmp_msg_1;
    tmp_msg_1.timeout = 16622U;
    tmp_msg_1.lat = 0.8905254954760248;
    tmp_msg_1.lon = 0.05125285889089459;
    tmp_msg_1.z = 0.5202663569834227;
    tmp_msg_1.z_units = 161U;
    tmp_msg_1.speed = 0.48435463251449484;
    tmp_msg_1.speed_units = 162U;
    tmp_msg_1.duration = 37074U;
    tmp_msg_1.radius = 0.28673315941731603;
    tmp_msg_1.flags = 197U;
    tmp_msg_1.custom.assign("WQKEXDUPKYDZNADCJXGLRHOOVOZKFUTV");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::ControlParcel tmp_msg_2;
    tmp_msg_2.p = 0.5826219224641497;
    tmp_msg_2.i = 0.9923104882000027;
    tmp_msg_2.d = 0.3284102706812956;
    tmp_msg_2.a = 0.8443902579267581;
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
    msg.setTimeStamp(0.06873599289999788);
    msg.setSource(57430U);
    msg.setSourceEntity(210U);
    msg.setDestination(37228U);
    msg.setDestinationEntity(62U);
    msg.plan_id.assign("BSEEMRKIGITNUUMFOVA");
    msg.description.assign("CMQBBSCZZSCROEAENTDYFSTROZXLVKXBMQNTXXRYUNAIULVBYZENKCYGWJNQTDZLXRFARPSDDQFFWGWQUJFLAQKXHJAIKMEGYQIDOKQSJLMHNFRCYFBWVSIPEXEWFUCTGJBXIKYJRQUTTJZGAHPYHNIMTODAOMVUEJXXBWQEYSUCDZAPSBZEHUPHGAIRVHJNSMV");
    msg.vnamespace.assign("KXWEVSKXZEKLRJHGJSZGPEYZQDBCLVVGYWPTHWLWNVPQNOOWILFJDIMFNTHSXBQYNTJFZLZXXPHMJNI");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("UCFZEZJIDOSXECFPOILZORWJPBBRNIONSCFBWHXPDEYVYZYVLMHZUJGNAZCKTHYWPUNMSCMKYWMOGTLGHFNCFEHQWHRDADVHGMVTLQSGPBFRENXIYURXCGMNVYTFZJVLPVEHWIROMYKTJQADLKXDUIRLDXAQTOIBZWOQMCUWDBVICYRJFIQQHXOXAYSANNASBNKTEJTD");
    tmp_msg_0.value.assign("VHBYKJEFNPVECFEDJZSWQAPSHXUUEKAAJKYKUSHIALFUW");
    tmp_msg_0.type = 91U;
    tmp_msg_0.access = 249U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("UHJMRWOFDDRNHWVCTMOGDTJOANAYQKWGQAUIWVSCLLOBOXZIBIXBCMYBAVBYMIER");

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
    msg.setTimeStamp(0.9019249122383166);
    msg.setSource(54901U);
    msg.setSourceEntity(251U);
    msg.setDestination(31890U);
    msg.setDestinationEntity(9U);
    msg.maneuver_id.assign("ZYLUMGRCXKOMEEAHNDVTHMZCLZQSGNTDCUSHHRWIYMFJTLFLHMVXLSBAXOITKT");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 50468U;
    tmp_msg_0.rpm = 0.2526693409470542;
    tmp_msg_0.direction = 247U;
    tmp_msg_0.custom.assign("CCNVJOXYXKGVUHKIDVTKHZBDABQRSHPEXULABGHDDB");
    msg.data.set(tmp_msg_0);
    IMC::LblRangeAcceptance tmp_msg_1;
    tmp_msg_1.id = 157U;
    tmp_msg_1.range = 0.789825080186283;
    tmp_msg_1.acceptance = 25U;
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
    msg.setTimeStamp(0.531449983117405);
    msg.setSource(42729U);
    msg.setSourceEntity(35U);
    msg.setDestination(40731U);
    msg.setDestinationEntity(133U);
    msg.maneuver_id.assign("GACHOINYXPLJATWVLBZCPNGLAZFPZTWTPXMEGIWKEKRCSCQBYYKRLBETDSCIMQWMKDBUUSTDKJYOEVCLYDSSRFKSPBWOVZILOKYNOBQPLGUDEVPGYMKRFJJWXSHBIXMCWPQSKON");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 11091U;
    tmp_msg_0.flags = 128U;
    tmp_msg_0.lat = 0.47565910243170284;
    tmp_msg_0.lon = 0.03967051124567633;
    tmp_msg_0.start_z = 0.6633853767497587;
    tmp_msg_0.start_z_units = 186U;
    tmp_msg_0.end_z = 0.7785760003210996;
    tmp_msg_0.end_z_units = 107U;
    tmp_msg_0.radius = 0.9350721267435518;
    tmp_msg_0.speed = 0.15948415321808118;
    tmp_msg_0.speed_units = 241U;
    tmp_msg_0.custom.assign("JMTOPGLRIPVYX");
    msg.data.set(tmp_msg_0);
    IMC::LblDetection tmp_msg_1;
    tmp_msg_1.tx = 118U;
    tmp_msg_1.channel = 213U;
    tmp_msg_1.timer = 32758U;
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
    msg.setTimeStamp(0.6146714527775923);
    msg.setSource(42317U);
    msg.setSourceEntity(226U);
    msg.setDestination(54865U);
    msg.setDestinationEntity(210U);
    msg.maneuver_id.assign("MTGSOEOACTASZWQDBXJCVQJRICYRPOHBKLCYVWCTHSYYGNOFHPIURZJPMHCZVLHCMUGVAIBXXMBRJNZMUQWGZHKALJKATKEHFEDNXH");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 15616U;
    tmp_msg_0.lat = 0.023296400994160416;
    tmp_msg_0.lon = 0.8389572724177461;
    tmp_msg_0.z = 0.7609094214880401;
    tmp_msg_0.z_units = 47U;
    tmp_msg_0.speed = 0.3705634388058021;
    tmp_msg_0.speed_units = 26U;
    tmp_msg_0.duration = 46576U;
    tmp_msg_0.radius = 0.4132984906832391;
    tmp_msg_0.flags = 34U;
    tmp_msg_0.custom.assign("VDYEFTCPGXQWXHGTCCZTNPSTIZISIUHWBVKHQVFBNLFPZWALMANYZQAGXFWQWSKKXJHMJWJVFMQNZISKEREZLIHRPFSGRGNWUMGEMYNVTCTHAGBHURQSJMDYJJRDZNUMLORYJUOOLXQEXORVMXRIZLKOATJUYKTUGEGNICPBCMCAYDEKVPOVMEVOKUAUOHLSWPZXCGBPSEEIIBKHDQNZXACDB");
    msg.data.set(tmp_msg_0);
    IMC::AnnounceService tmp_msg_1;
    tmp_msg_1.service.assign("OMMHGIIPCWUUXXXNHFXNQJDIPDJYIELLFWUJNDIYYSGXDMAWQEDBUFUVXCALVVTSPSNQROCHFTZEZAVWKPCWGXBNKDWSLZGGTMTYWZQR");
    tmp_msg_1.service_type = 7U;
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
    msg.setTimeStamp(0.06034835526231319);
    msg.setSource(60807U);
    msg.setSourceEntity(192U);
    msg.setDestination(14343U);
    msg.setDestinationEntity(72U);
    msg.source_man.assign("OMUOALONCEXAIJRHBXIFEKFRZACYIUTOSIVXTZWQWMWQMCYYMYLALGZUSVSWTTZNDCCGQNDRUHMRQEBDKNUAVSBNTOZOCYEGXDHBMILNRPEFSKKSZHWJAIQDEJSBXYNHMJHFZPGDJDQQBKWUDVASPMXCKEOJRPJ");
    msg.dest_man.assign("IVAVBUADRERCUDWFAZWGNHDUNWRCIV");
    msg.conditions.assign("PWVQOEVGBYSAHNPDLPYSMIJEQPRFSXIZOCBDEOYEAYWIBJLDLOQGKVOZXOEGEZJAUXRLYTFJKACUCGNCWBTBGIFNVTVLJHYDTYDUMYBCTWVF");
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.33809718904942965;
    tmp_msg_0.lon = 0.4851088137425188;
    tmp_msg_0.depth = 0.5045542657986792;
    tmp_msg_0.roll = 0.5764940552509121;
    tmp_msg_0.pitch = 0.241791592311688;
    tmp_msg_0.yaw = 0.1392684683662223;
    tmp_msg_0.rcp_time = 0.11381490232234259;
    tmp_msg_0.sid.assign("ZAVJHEREWXQQVUZPGQSIXTCKNTNWEGYXRGEOGRDDBLOHWCKHBZUGPPFTUCDKWOCKIOURCYPXDPSQLQENNUFCVYGBWTNHYWJMVDSZVRGZMDWNMLLEKLMCKTTDSTNMYBZFKSXPZVNFIJRHCQEJOPHVIMFHJJAPGHLQNOJXCOBKRIBJRMIDBIVHFFQUEADJHPPVRYYSNAYGMIXKAXUIUAXZKQAIWMJZMUALQ");
    tmp_msg_0.s_type = 155U;
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
    msg.setTimeStamp(0.8809012575672546);
    msg.setSource(52682U);
    msg.setSourceEntity(171U);
    msg.setDestination(1862U);
    msg.setDestinationEntity(56U);
    msg.source_man.assign("GUPSYWGIDKSBWNHWJYXFSUEMLJOSOHAPERRLYGNVULUVKQHRPZDHGBIHWFBPKRSWLMEDOGVHJAJPAAGUGNHRCYHBLAKIHBLNOCHFZCMKKUEMFVLREDVEXQWEFXYNREOVQQZXURWYZFWEBFJPAUUJZONNLDQZL");
    msg.dest_man.assign("ISAGOSZMMFPSJOBXURXBBFNOAVLJBBKNPQCOKACHCAGESUZCHOQEJGGABZRXHVSPYWIKIM");
    msg.conditions.assign("TMAGLOTOGKZWRDU");

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
    msg.setTimeStamp(0.9621785616300041);
    msg.setSource(41267U);
    msg.setSourceEntity(101U);
    msg.setDestination(42012U);
    msg.setDestinationEntity(217U);
    msg.source_man.assign("VMISLBKNOMMFECPTTSOUDZCIXIZWOOPCYXTYEFGNIJXLEAYDVMYGYXYVOSREVVVYXXQQKLNGZNERFFZTBDVNQGUPUKAHOXXLWTBDQMOBVTSTPMSSAKZPWHUSIPAUZQPJMKFUHJJCBWFIACGSWNFUWFLRSAVJBOJFTCOFTUQDKNIDUXKAHMRHEQBDTGYGMUCHLDNJELE");
    msg.dest_man.assign("CLUZCDEWMSSDMBEHGHSBYDJLBEKAPPCXVC");
    msg.conditions.assign("KOCWGRYXCDIDKNYXXTKQQCOIUZZYQPOGGFGUXNQIMDIMECKQRFBJBSHZZVQCTQVRNQTPEVGBGFGMHYSWEYYWPALBJLNFAXEPUSLJOMAZPRLVVJPFENVEKCUGPKMAF");

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
    msg.setTimeStamp(0.48150304663049315);
    msg.setSource(41769U);
    msg.setSourceEntity(248U);
    msg.setDestination(12561U);
    msg.setDestinationEntity(128U);
    msg.command = 117U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("XQLSISTGAFZNUUUTWLMXWA");
    tmp_msg_0.description.assign("VTAULSWJMRSNLLCOOIEQTHBXUCAKLVYMARWIVYJXYMGGZBUAUNIAAJOOKTHPEGCZBRFSMPUHMIBUFDSXDHYBJLTPGOB");
    tmp_msg_0.vnamespace.assign("YYEVUHIBAITOUFRPRMRFXZTBWPYANYLZWFRJZJSMUIESGHMZDGXELBZVJHOTEEADUCFPPYPLVFOAAXAKSOPWCKNBKVAYRGWMSCLGUVVWKMFMZTDQWDBLQCEHBBYEYSXTRJOXIKNVDDBVILCTNHILCQFUNKMZXJAVGOP");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QEWIQKQFRJ");
    tmp_tmp_msg_0_0.value.assign("PAUSRRXRNUCUZHSLPPNKCZAVTUJCBVWLZJCFBJUWNZOISVASWTOEPJDWTMDEMXLOGJEABOQXICRIFTPTQRYSLKSHZTAUZRYZGXXCFFZMNPIYSQYHQWNQQJSMKGGXDNREWNHGOINJMDLSVTTEXQACGKBFKDKQ");
    tmp_tmp_msg_0_0.type = 211U;
    tmp_tmp_msg_0_0.access = 130U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("XLBCPUOUQEZEBLSFBLAQYDPWEGBMNMDUZUQBSZIWWQIHAKTCHFOLBSGDYKSKNRVHDUJPGZBKNVRHAIKCWERLNJEGGAGMKUTJ");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("AROJRDUNJVLBYQPCNUNXXQEFIZJZHSQASMYKCODJFASMHEHRCQXNSBRXPLWDQLVEHZZH");
    IMC::Elevator tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 55902U;
    tmp_tmp_tmp_msg_0_1_0.flags = 68U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.34997168176086046;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.3242520734198865;
    tmp_tmp_tmp_msg_0_1_0.start_z = 0.6750744596613425;
    tmp_tmp_tmp_msg_0_1_0.start_z_units = 134U;
    tmp_tmp_tmp_msg_0_1_0.end_z = 0.9547537139569076;
    tmp_tmp_tmp_msg_0_1_0.end_z_units = 116U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.7963175700480278;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.8767541957815421;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 13U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("UZRBNGUVFOVKIBZGXSKGQDTRYYHUMHBXXNQZETCYUFBDPVCREMWXELQHSJPGRESEYLJTYROTORQNOGJAZRLEDVLQGBLMGIFSLQMIYNJUNYSVXMMRJQFJBBAWITKZWZOJVBRPPPSXAVHUBOPEAFKHMHAGJKTXCNPYVSKCCAADIXMUZHMDFWWNQICSHVPKTETTAUBFSXNFKPOKDWEHUIGIZRQTLHLPIDAYWCNUZOCQGVWFEMODAFDSOJYDKW");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::LeakSimulation tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.op = 204U;
    tmp_tmp_tmp_msg_0_1_1.entities.assign("NTRLEPCQTBPHMYDKLFOJPYK");
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::SmsTx tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.seq = 2554405544U;
    tmp_tmp_tmp_msg_0_1_2.destination.assign("CHFBXGRXTGDZQTHIMWASXKXBSQQMSWNPZJFETDJVHAMZKKYYPOUQNJRPFDMFEGACFRWYVXYVYERKAEGMLNDVGQUELBJUOCHWFRTCEVAJUSISJAEVJDWHUPIRKVPKOFWQQVYJKNQFUOCMGYSWZMLJNPHFTCOCISLXBBIGBNBOIIDWGLAZDNENZTRTDXUZBGGQKDL");
    tmp_tmp_tmp_msg_0_1_2.timeout = 63841U;
    const char tmp_tmp_tmp_tmp_msg_0_1_2_0[] = {50, -31, -23, -117, 96, -112, 9, -67, -82, -31, 72, 116, 103, -57, 61, -32, -106, -28, -120, 29, 95, -96, 6, -15, -113, 47, 119, -57, -34, 28, 88, 75, 8, 97, 80, 5, 30, -44, -60, 16, 54, -73, 40, -85, 20, -109, -13, 14, 43, -57, -80, 72, 117, 63, -68, 39, 126, 18, 54, 28, -44, 86, -91, -92, -57, 61, 31, 80, -71, 21, 91, -123, -65, -116, 93, -26, -89, 113, -95, -63, -15, -100, 108, 72, -42, -39, -22, -33, 122, -118, -4, 8, 34, 53, 6, 42, 105, -44, 120, 14, -5, -87, 121, -9, 84, -29, -92, 104, 45, -65, -98, 121, -85, 41, -90, 64, -5, -99, 121, -80, 89, 36, -108, 14, -64, 110, 39, -50, -6, -81, 27, -3, -58, 42, 111, -102, -12, 33, -39, 13, 64, -127, -54, -88, 60, 98, 122, 49, 25, 78, 96, 125, -62, 5, 87, 118, 23, -102, 36, -38, -28, 64, -43, -23, 33, -12, -118, -122, -92, 109, -77, -80, 90, -65, -40, 123, 72, -125, 110, -113, -37, 100, 4, 31, 61, 64, -44, 116, -21, -28, 87, -24, -54, -9, -16, 72, -30, 66, -87, -10, 49, 123, 15, -24, -101, 116, 97, -60, -32, -67, 8, 12, -64, 20, -26, 78, 108, -72, 124, -77, -57, -85, -32, 98, 20, 3, -76, 21, -97, 16, 64, -111, 88, -18, -111, 84, -57, -32, 79, 37, 38, -49, -10, -32, -79, 83, -76, -29, 71};
    tmp_tmp_tmp_msg_0_1_2.data.assign(tmp_tmp_tmp_tmp_msg_0_1_2_0, tmp_tmp_tmp_tmp_msg_0_1_2_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_1_2_0));
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("HLJYXCRQNJLZAYMCIHSIMPDAXOQZKKZTSWZZLAKDALJUUQIEEVVVYUUSMJGUPPMXETMOZEWVOFKQCLVKCWCUFWFSWDTYFBSBHAMAHYANRNKWGMJXGE");
    tmp_tmp_msg_0_2.dest_man.assign("QGYEHHOHXVNOVUPUCLVHYQWZPXWTMCKIWGACQXGIOCXAXDJMEGKBNDMVFHGWOOAPRYLZWRULWTJUANIFCZEBMPRWVSLIYTKAPFJEIZDZSPSICWUNVNYLGDVSRMYVCFZEXTRAIJRPLXUOMWJNGHFBSAUFTRJKXCZNKEAEISILFQABFUGPKJBNOPKQRHDVBOBKMXSXYUT");
    tmp_tmp_msg_0_2.conditions.assign("EVVAHYSVRLZISPXGBNQTTXMGVGVMWEXDMQPCGRXXXJZMLKTAEXFJAYQXVZILPGEYAOHVZFYJRIBIAWOCCBBGDWFVCUWSPZILBUVOJYKLSYYIRNKUFZMDECXOUWQIXHJPHUAPWLSJOLZFNAMNSUWPLWEDTLKZSJTBAQLNHQKRMECSIIQASHJKGMUYDRBM");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::TrexAttribute tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.name.assign("XRSIBUVTFOOCZSHQEFZYWRGUETBYKZDWWWEKPGVBJVNNABBHQEYINDNXPKCARPWTONHGQOEILFBHBQSWCINCHWOYGJXCAMTENKDLJZMJMBRAQJMLHLZPF");
    tmp_tmp_msg_0_3.attr_type = 3U;
    tmp_tmp_msg_0_3.min.assign("DQGEGBAIYVUSEEKMSNHKZKISTSPETFOKQJLOWFQQMXRMXWXEBHHHOAFRXXHOBUFTTCUIGMDCAOWSUMQFAZJVDWTPUAVRUCBXRKZLYZFVPNXLJZIIQTNBJTBWXMFGAJHGBPZKJLPKTOZSTKLUBNISWYJPGOQERZCJYCACVXQBNMPFVIKGANEGZLHHRADHOLMNUVNCRRJGIEYLWNYG");
    tmp_tmp_msg_0_3.max.assign("SLDIIULJQOQONHDDMXYGLRISZOMDGKCJPVDWCGGUMFUFQYEHUCVGAIPTKEWZTDVXTPARISMHFRPDWTSSQYHFWFEFHTOQBGYNBKBIFKGECHBUQSFIMQOSAWPA");
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
    msg.setTimeStamp(0.8741069691969373);
    msg.setSource(30433U);
    msg.setSourceEntity(22U);
    msg.setDestination(65403U);
    msg.setDestinationEntity(36U);
    msg.command = 217U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZGJMRLVBZJVNPVJCCCKAUGUZRSMSCADWZSIJLVOBJPUWQMNIRVQELAOKJBYTNYDIWEHPEYFXZORYGMKXPXDX");
    tmp_msg_0.description.assign("JPOGEVBZIIZHISBROQSVIDCVYNTFKCYQGNCQNTNDGUVCUMOVWHOGUKKTAWOGLIVTWLBAHJZGRNXTBUXJXJSMCCI");
    tmp_msg_0.vnamespace.assign("CXCLZMDLAVMOOBVURDDYBYNZVCVTBBUPINIAUIXYZFZAXUQODKMCVXHXTOGWPGTFWFRINXLJSWLDHGHWMSWRPJCEWSQEWRNAQYMUYIQJECEFUOKFIOQPBFKXYAKFFCYHKKQQXSINQMZARJRKBGABJYLDVZJLDPOSLGDLXVNEHEGXPIJMPCTTQRHHSTRBYSKME");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SDGSYZRYIPIAKYJWVAFYHYPSJMKDBAKGSTNPANNFPLUKZXTGEQOTZTOFXJXMMQRHVKQRVJLXRHUADNP");
    tmp_tmp_msg_0_0.value.assign("IYJGSMTKFRLBMJGBFFCYTYOBKZGSSIZQIXFXXRWBRWHCBMJQQFEUKZJCVK");
    tmp_tmp_msg_0_0.type = 142U;
    tmp_tmp_msg_0_0.access = 143U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("KTRDYQSFEQWNPIFEKARKSCPALWXKBQYGZXAFOLCEWDKQPXZTUEYCLIOCPSVUXWFKWAJBXORTVRTGPHNHNREDEVUVMFLYGCQDYRVBSHYUXQDSSJDMPIJVRFMMDJXZVYQWIXIXOOBUZGNAGSJUSNOAALATMOJDA");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("HLDMETSEBGLPSFFKQAXZHOIHLPCOTRRMFWGIIMTDKGIQVAJFVBDRKCLOIKXJUUGRQUKGBPBIMATDWCUYJNMPUWXRTBWPXDQULZTALHQJGJZGYJDXZSWEKEROQXNFINGEZFVNAGNQWYJQWZKRWAKQVPMKEDFCHSUDCVBORLPEUCMEMFIHGYMEAKUCNTAXDLBNOIUFOROSAOZFT");
    IMC::Teleoperation tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("POMMIACEHPTOCYHPLADZWKSLZSFGQPUFRCPHRKTHFHPXVKQDTXKPSUTSWVDZBQJLLFYEJDLUYETZDEIAZJULCVDWKMMILZUXMGTTBNNGWZCJYWMENNRLLJSFFZESRVIXAIQJGMFEAHMOISKQYFNUHGVVB");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::MapFeature tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.id.assign("LPQKLFIVJTLRF");
    tmp_tmp_tmp_msg_0_1_1.feature_type = 65U;
    tmp_tmp_tmp_msg_0_1_1.rgb_red = 121U;
    tmp_tmp_tmp_msg_0_1_1.rgb_green = 88U;
    tmp_tmp_tmp_msg_0_1_1.rgb_blue = 179U;
    IMC::MapPoint tmp_tmp_tmp_tmp_msg_0_1_1_0;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.lat = 0.9767515961139965;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.lon = 0.04909950443555722;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.alt = 0.6587457926722262;
    tmp_tmp_tmp_msg_0_1_1.feature.push_back(tmp_tmp_tmp_tmp_msg_0_1_1_0);
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PowerChannelControl tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.name.assign("ZJCHHVXKAYDOMUVMIDBBLSXIFAUGMCRSTKILNJGVCWQQYJROAJOTJSEPXERHLMNARIHTGODGZPSKNBVPUREFUFECZVKVKIVHKWIPMEXJRIUNWLWABTWFCGCCZ");
    tmp_tmp_msg_0_2.op = 61U;
    tmp_tmp_msg_0_2.sched_time = 0.9371772756407656;
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
    msg.setTimeStamp(0.6052847947681347);
    msg.setSource(40477U);
    msg.setSourceEntity(28U);
    msg.setDestination(23281U);
    msg.setDestinationEntity(21U);
    msg.command = 22U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SFMMBKJYBRYYFAZEYEDZIDMWGVKDGVXQXCOBOBNYVNEKEQUBMDIZYAALFJVWTGXWEDTSFXFGCINIZNTJSCYZ");
    tmp_msg_0.description.assign("APFVHCSTYXRQQZTCLKQNLXBBWJOMXNMECRTZRMNWFTQPPMXQUMMVWCIWJRFDTDAVLLIKYDXGSXBMEOMCSOJEIKKTAWFOEBRHZDUIRJY");
    tmp_msg_0.vnamespace.assign("FLKZMXRJMYHPTRZAKVXDNUOADVITCCHJEVGIUVSIOQTEQUQVBCMWXFQH");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XWHGVMXHSXKBQTCAUESCRQMNFKHIBEVVYEKIBWDWZIYWQZACEXVTNPKVWGKQRMNLVBDCKCBZPYGTPWAPNXLEPESWIALCZHKLUOGOIRMFMBJDXTITXZZJFOXSQUZCUIVKNDSXRTTBEGSJDMRCGLFMYSOZGRNWPJJDGIFAQFAUNJAULORYGMNUWDOHEUQWRTHAHNGCMAYLFKVCJZYQPXPDLBFSYVUHLNUOLQRDTFOHJBRITMIOEPSFDHYQPVJ");
    tmp_tmp_msg_0_0.value.assign("HSJLNAFLHIRNBDHXPCIOSVBDTRZQBZDVKXZKOMEITGHXLUSYVEMPXRLWOIXKXQSMEEUWPPJMEJLXTIUWCPVTHMAHKYNJGGYIAFGFFRFGFVOZQDYMEQZCYUYNMRLPUVXFTBHAENQRVKENCHPXLDOBRYPKMDCUFWIGKGTTPSSKOWZODZNXUFVASSAWYQIJEZEJSWCLBIOHGQNBJNOTKBDFOCGZQJ");
    tmp_tmp_msg_0_0.type = 152U;
    tmp_tmp_msg_0_0.access = 168U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("DVDMBXDHGAJQVEIUZYQJBWGVWCLRZTIHASPXTBPRYPRPYKWAYPTFHOBQEQADZRHERUXPXUIYZGUQATELWBCTVGKZLIYLODTXSCWQZDIDHJLKKYHOKGBCFUBVMLNKSIXINJLRHVPCABHMIPLNVMNKDWFVJREQZWAYOZFONKTVNQNFSLHTOAETMIEEJSFASOYMBUNRCUFFUJGXSSUXMCIOEECTMKFGJACDZCYSGWGBNPOWGLSPWUVMDHNFQRQ");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("WMOSXIFAGFADAYGFPPABMORULVLLHLHLCGWAIJIYYNMDHRDHVKZNZSUWOQPCLHAXFZTZXTANOJGWHBESSTKODIXUKUXFOOVRFGTZZWCPMJB");
    IMC::VehicleFormation tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.7287325860263192;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.8298243883478957;
    tmp_tmp_tmp_msg_0_1_0.z = 0.3884955864388613;
    tmp_tmp_tmp_msg_0_1_0.z_units = 128U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.6214699913486361;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 122U;
    IMC::TrajectoryPoint tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.x = 0.5831840623209534;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.y = 0.14638994272608175;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.z = 0.23537768471840692;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.t = 0.6486217337343978;
    tmp_tmp_tmp_msg_0_1_0.points.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_tmp_tmp_msg_0_1_0_1;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.vid = 22070U;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.off_x = 0.40992825848196746;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.off_y = 0.6077439617015952;
    tmp_tmp_tmp_tmp_msg_0_1_0_1.off_z = 0.13163089330097621;
    tmp_tmp_tmp_msg_0_1_0.participants.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_1);
    tmp_tmp_tmp_msg_0_1_0.start_time = 0.8362321660609942;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("CLSSCEMXFDFGOVLYYAKUSJCKVSGHSWEHPANTVJUBTOEWOAYNAIZLZRIXCKJQNVNIMTRRXACQHJMXQVFZTDKGQKZFYNLWZTZEBLITEGNAQOGLSALASMOPUQRVKUHVMPEF");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::QueryLedBrightness tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.name.assign("LQGSYLIRWVIKBLEHVPLPFITWWXVNVRBHEZTLSROPBXAHJEAZVFQGMWCADBBJAHSHQMYCWWLWFYTQDLUZJHEQNFHQTHQYINFIKADXTMZNLILAPNTKHGUKJXZGSJDMKQAUEBOVGCMXGOLOEMGPWOUCNSEFUOOGZOODZKRCDQERTNCMSIPPYVNRRXACSGDYVCIXBFAKNSWCRFJCQTSSAKPYIEOYDEMNUWJDJDMGUMXBVTUHXKPXPBYYBRZUIRZJ");
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("QLFFAVJGTIIVSMSFNQGNZNCJXWDCYGFYTENZEHEMVXYVHNOQXTFUHWDWRTEVIWPBZFMPAPXLJTAPHHKWZGBQPCMVXKRKRWXKWQYEMYYQTCUGBEWLPUNJPMFUAOEILGUQRQGOCMBKKYJQLCFNBVLSLSOVUUOCHADBATSJOJQBJTTPCBRDKOFNLYRCXPARCFGYRDMVSSTYESSDIKUIIXDEWKVHGHXNGDBLMPLEJUMDKOJZZANZIOZHSD");
    tmp_tmp_msg_0_2.dest_man.assign("TDNIUCRIKKYQUHRVGVKJMIRXDUCRFNBJGRJZBUWDHBWPUPCGCIGQEFWOXDISYWQVWBCKYHLCPTXOEBPODYPHMFFGNEFKOKBHDXQCQRG");
    tmp_tmp_msg_0_2.conditions.assign("CXSJWHPELAHCYDUGOUCOARWLFNBGJPWBUULPIEKUKXMQZFCWAHTTEQOGWOJPAGZWKTZCDZCWBTCFIJQLYJSPBVDPKOVDLSAYLUIBXYKZVNVHYMPOJAATTMQTQNGNRQWIIYMDKPXBOORXUXRLWFMHKDSBCEFAIGJMRGNJCMSZXFJHBLGQDUICFENBESUEOXOUFSBVDVZKFM");
    IMC::QueryEntityState tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::SmsState tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.seq = 1718078299U;
    tmp_tmp_msg_0_3.state = 244U;
    tmp_tmp_msg_0_3.error.assign("AGUGFTAPJBCEFLNMLOICNAGNHHIYTRKZFRKOHBBKTRXYYZMYCTCKFDKQHHKVAVKXFTVOOXAWXCTITQYSCMRNVBGSMRJEGSUMICQYNCQDAHIJPTOZJWQF");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_3);
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
    msg.setTimeStamp(0.08188033567973874);
    msg.setSource(48715U);
    msg.setSourceEntity(4U);
    msg.setDestination(4759U);
    msg.setDestinationEntity(158U);
    msg.state = 42U;
    msg.plan_id.assign("NZACRMAWNQTLDEYOOVQMPPNT");
    msg.comm_level = 8U;

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
    msg.setTimeStamp(0.759256358526746);
    msg.setSource(9335U);
    msg.setSourceEntity(197U);
    msg.setDestination(56020U);
    msg.setDestinationEntity(50U);
    msg.state = 53U;
    msg.plan_id.assign("DYZOKAUJWLUWJSCMFKDOODRMNRGPNNFIQDHLUTSICGBEBYRVFEDPPPLEVNLIXPBUVYTMUKXHAMHWKJGYNIFQYVZGOSJYUIHNRCWTEOEKTKPSFBZUIYRFAJQNPLOWICQZWXLQWTBCLCOFKLHBCTXMAORYMNCFFHVAQDVPCEWJFXUL");
    msg.comm_level = 114U;

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
    msg.setTimeStamp(0.764050813272187);
    msg.setSource(33719U);
    msg.setSourceEntity(73U);
    msg.setDestination(53217U);
    msg.setDestinationEntity(229U);
    msg.state = 238U;
    msg.plan_id.assign("MWLRIJSHLXUIJTHZKAQLCISPZOQIKEQJORGFSWIRYHQHRXPHANXYZPYKPFYFXAWAMBNCYRNRJZELIJDHEAGYQEFETQQKWVIAOHTLBGEFUUVUJWXGWBAWEVCZHNAACEXDFGCVBWXGUCYBTMQMAMDMRVDNB");
    msg.comm_level = 74U;

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
    msg.setTimeStamp(0.7075603700460286);
    msg.setSource(19382U);
    msg.setSourceEntity(35U);
    msg.setDestination(65166U);
    msg.setDestinationEntity(57U);
    msg.type = 41U;
    msg.op = 33U;
    msg.request_id = 60407U;
    msg.plan_id.assign("EDTALSNCJCAXHMFNEWAHSJAGQDVBHACBBDFSWXTZQUZVDEOGKMIPFBPUMZLGIYWXFYTQVGOPYGQDTDOXKWBVSLYJRHVVMCXJRDOXWLBGPQZLHQCFNKTXNEGYKMFVKEFRTKSSSHNKOJLPMNJ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("OAWDPGYHFTEUGYIFTLZRXJYGAABBWCNNRAUAPGKIZEXKKOSLNVDCQXDVSRYMWSR");
    tmp_msg_0.attr_type = 52U;
    tmp_msg_0.min.assign("NDAZHTKSOETUHWRXRVIGYPHMYQLQXOVKSKELDZGA");
    tmp_msg_0.max.assign("NUFAZKUMUWTSDXJRZKPHKJVOSCHMOVWGDLVSOTLCDCQQOKXZPOANNUHCYIYRJPCDWRGEZEZBVCQBBKJPXFUQUCJZZHAESYBTRTEFYSCTMDPWWHVQJO");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DVRVFMGPEIVLKPBPKYMOTXSYRMMZOHIBSRZNBSKSJLEWKEUNOVXSSGHNNHFFQMEXYOUAJXNBOEPUKSXDUHLWYMQYWMSLTAJOAIGDROLEMWKJWQFWXGFPUIECZAUDIEPDQLHCKDXYATWTNTVAUFPJBFGCCDMGCWZNHKJIZAUSGNGBQPODJVIBYZQARHBVATKOCYYGRJXUXHDZYF");

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
    msg.setTimeStamp(0.8547344094008036);
    msg.setSource(50675U);
    msg.setSourceEntity(157U);
    msg.setDestination(58749U);
    msg.setDestinationEntity(143U);
    msg.type = 176U;
    msg.op = 241U;
    msg.request_id = 21700U;
    msg.plan_id.assign("EXNQYGCJJAAZXKIRXMVKPOKBIPCFORZWMSMLCTPNY");
    IMC::ControlLoops tmp_msg_0;
    tmp_msg_0.enable = 13U;
    tmp_msg_0.mask = 3525267928U;
    tmp_msg_0.scope_ref = 3295687505U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FQQEROUDBGYDNDRCXKNHBEKOSXTTEIENTVAPMTOBTMHVGZQFGRBWXRIWINOXZVWDTFPCCMVURUHLUXMGRXZJFJKYPMLREUVBCLAJDFAPYAZNOKYPBBOIEQLPOVQCHJNYKUYZ");

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
    msg.setTimeStamp(0.8937911955679921);
    msg.setSource(56028U);
    msg.setSourceEntity(210U);
    msg.setDestination(32804U);
    msg.setDestinationEntity(59U);
    msg.type = 229U;
    msg.op = 94U;
    msg.request_id = 56757U;
    msg.plan_id.assign("SPRVSXNNPZNTCMBHAAHMJNMGOZUJETKGLVUMWLIKQWNDE");
    IMC::DesiredControl tmp_msg_0;
    tmp_msg_0.x = 0.9493468658895553;
    tmp_msg_0.y = 0.8986237212996411;
    tmp_msg_0.z = 0.41880163482060295;
    tmp_msg_0.k = 0.6034336445656394;
    tmp_msg_0.m = 0.7003148306719251;
    tmp_msg_0.n = 0.36841241563005434;
    tmp_msg_0.flags = 193U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DMXMZTXIPHPBLAMWWGKDCXQYJCWOSWEZRZYBAQCUPGVSTJQRPOXJYUHMAYGFVWUSQAARHTTRCDDXKTRBLYNLLELOFJJKOBEIOGENVWGXKGOQIGZBEJIIZNSNDCMMJKZZXQCWCTBMLZCHHGPFPHFUHEVZPQNJL");

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
    msg.setTimeStamp(0.21101168635673273);
    msg.setSource(28245U);
    msg.setSourceEntity(247U);
    msg.setDestination(47746U);
    msg.setDestinationEntity(221U);
    msg.plan_count = 41607U;
    msg.plan_size = 739458567U;
    msg.change_time = 0.49258620472590586;
    msg.change_sid = 40520U;
    msg.change_sname.assign("TKKBHJUCOGFVMQCDYFSQDYDPVGLUJRYYISXGSAKIOOUHLNZCEKBNUNKNPWIJMMLXCHXN");
    const char tmp_msg_0[] = {53, 7, -28, -120, 10, 116, -33, -64, -55, -84, 14, -56, 103, 36, 38, 112, 18, 117, 99, -45, -105, 81, -99, -5, -49, 64, 3, -53, -1, -92, 31, 75, 104, -103, -74, 43, -128, 36, 82, 104, -55, 35, -21, -38, 20, -2, 10, 25};
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
    msg.setTimeStamp(0.9549360483230432);
    msg.setSource(24835U);
    msg.setSourceEntity(30U);
    msg.setDestination(42961U);
    msg.setDestinationEntity(195U);
    msg.plan_count = 2767U;
    msg.plan_size = 3413606367U;
    msg.change_time = 0.005709700290385533;
    msg.change_sid = 29529U;
    msg.change_sname.assign("EEAADLGQNQKVSHMAZQETYOXFHWZVFQAHXEFSVVMXTGFBPRKDCKYOVAKJQGOGXPWLCKOTGJYXRTXUIDXSGAWRCZALVHBZVBPEKMEURDMIPUEILQUBLKEMLRFYWMDOOAWLALHPZTYMCTNPCYYPSHK");
    const char tmp_msg_0[] = {-55, -70, 117, 13, 55, -22, -58, 51, -4, -109, -117, 44, -60, -41, -75, -6, 126, 100, 35, -116, -12, -43, -9, -115, 111, 56, 29, 65, 82, -74, -81, -66, -119, -78, 59, 73, -117, -106, 72, -39, 47, -47, -64, 101, -80, -12, -40, 103, -47, 75, 82, 97, -57, -2, 69, 48, -112, -74, 72, 50, 76, 44, -11, -104, 29, 36, 48, -112, 28, 10, -101, 116, -42, 77};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("JIRYVBDACBOJQZELKTFRJDSCVZOMJFDDXKBORCHBXEPVHRRIXKVNBOHTEAWYGNGJQFKROEZUVDOTYBYPQCPUMKVWGZQMMRJXIZQSFDPOGTSGXFEQAIGCHIUSYSEMQWOXUGHTWAFXIWTAJIULDHVXCLTYTNMNYHUBTZKJQLMAVIECFLHBUALPWMSURNBLNZSPFAXLWMXVEKSJRWNIKCNSDFZGAYINQECOBCNFDTPRPYZPGQWYAPHLDHWLKUVS");
    tmp_msg_1.plan_size = 51408U;
    tmp_msg_1.change_time = 0.14998479093768313;
    tmp_msg_1.change_sid = 60312U;
    tmp_msg_1.change_sname.assign("IZOTGQDUDZDQOPHGTGZJRSBSCWJHQEWNPIMDXJMLIUQSKCHIIBBSKKZHNHZGCTMSRXIOLYGNWYHKMCDEXUTLOHFABWPHLCEMJVTNOVONRRPEFURBEJQRGETFTONCUMRXJGBQTUFFEMGWVKWGALKVBDMNGKXBAPXLXKUYIDDNTYKS");
    const char tmp_tmp_msg_1_0[] = {-3, 83, 17, -88, 123, 19, 66, -93, 118, -4, -11, -84, -36, 72, 19, 59, -91, -55, 35, -26, -8, 67, -30, -100, 126, 15, -93, -104, 110, 75, -47, -113, 51, 89, 92, -92, -74, -69, -42, 111, 0, 106, 125, 15, -24, -105, 97, 97, 117, 104, 60, -96, -100, -39, 52, -109, 72, 60, 37, -79, -4, 5, -103, -72, -67, -30, -87, 10, -54, -92, 103, -80, -75, 112, -85, 107, 21, 39, 66, -86, -66, -80, -124, 19, 82, -24, 78, -44, 66, 14, 64, 59, 55, 82, -120, 104, 25, 52, 56, 27, -75, 105, 60, 28, -92, -24, 40, -103, -110, -108, -116, 84, 28, 97, -104, 47, -27, 93, -113, 12, 116, 5, -119, 123, 70, -35, 4, -87, 98, 27, 11, 49, -40, -41, 15, 31, 76, 90, 108, -46, 41, 39, 20, 107, -22, 120, 56, 31, -87, -108, 45, 57, -72, 65, -93, -1, -63, 72, 68, 5, 28, -108, 21, -17, 15, 26, -28, -50, 66, -59, -117, -103, 122, -59, 11, 25, 1, -15, -47, -85, 43, -32, -34, -9, 29, 75, 6, -67, -116, -62, -37, 12, 21, 104, 71};
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
    msg.setTimeStamp(0.847683013747276);
    msg.setSource(61508U);
    msg.setSourceEntity(117U);
    msg.setDestination(51305U);
    msg.setDestinationEntity(39U);
    msg.plan_count = 64580U;
    msg.plan_size = 2621770131U;
    msg.change_time = 0.2697080763028169;
    msg.change_sid = 61079U;
    msg.change_sname.assign("BXTLSXCUGJCRSLNAGVEQJZXTRRPRAYWJICXNFFWQTJREUIDGEOPPBHZVUYBIVFJLISDUOYOGDFVOUKKMVDGTYQFL");
    const char tmp_msg_0[] = {-16, -18, 50, 70, 82, 106, 87, 49, -51, -120, 30, 52, 12, 69, 32, 107, -49, 16, 81, 16, 42, 31, 106, 8, -21, 57, -29, 84, -111, -75, 1, 116, -90, -69, -37, 13, 121, -76, 8, -54, 13, 5, 11, 98, 73, 62, 91, 76, 27, -59, 12, 89, -62, -59, -52, -114, 101, 48, 9, -76, 94, -25, 60, -1, -56, -16, 54, 26, 19, -16, 94, -124, -46, 40, 125, -101, -125, -102, -56, 47, 54, -56, 35, -124, -92, -88, 45, 26, -125, -95, -91, -1, 32, 109, -98, -21, -105, -108, -39, -95, -45, 54, 82, 8, -117, 2, -15, -39, 39, 85, 107, -39, -74, 83, -108, -105, -64, -88, 120, 123, 30, -58, 107, 77, 17, 98, -11, 98, 104, -112, -53, 102, 121, 54, 63, -4, 42, 115, 91, -17, -111, -56, 100, 91, -101, -119, 65, 72, -118, 59, -83, 45, 3, 60, 101, -71};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("IVAJLPBCHPBUYDCXFHAWNUSBNYEUOIOSOKGKNQPICJZVKLSVWYTUPEVTWDSPECKMDLKQMPRNBYOZWXFRERXQTYMXRDRHDHSAGHQUTUHUIGXGZXCJMOFBUBDRGJIKRIWINXKAMGJTTNCFZXXYEDPMCGPDURQMBOENKSMELIJWCTZJZOVQDUEKXYOEWLLQBFFFRSJHPGOYNVGRHALPOQSFIAVHLA");
    tmp_msg_1.plan_size = 62884U;
    tmp_msg_1.change_time = 0.583678079787822;
    tmp_msg_1.change_sid = 55012U;
    tmp_msg_1.change_sname.assign("WOTEABYOOFEUANXWRZZPBOHKIEQKQUVYLFSRYMZESPPOPLHUJMJLBKCASUZIFALZPDYHFQKFUKIZWSVRRPPJQJYQAZPGBNBYNJDJIRBAKYGTSDNAQLARCGWYXTDRSDCPHQWZTHIHEAXWQJCUBJVWTEIGVWLGGLVKZTMMMNUSXICBMOQSXPFCNGVHOSIOWDEBFCCVXTNMMRRGXJBYLDLCA");
    const char tmp_tmp_msg_1_0[] = {83, 36, 68, 16, 55, -3, 31, -3, -86, 91, -92, 121, 5, 19, -18, -30, 15, 92, -60, 107, 18, -2, -79, -58, 27, -83, 115, 11, -32, -110, -114, -48, -76, -27, -125, 117, 67, 61, -21, -76, 13, -10, -85, -51, 46, 85};
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
    msg.setTimeStamp(0.6049851127686776);
    msg.setSource(62079U);
    msg.setSourceEntity(123U);
    msg.setDestination(17087U);
    msg.setDestinationEntity(62U);
    msg.plan_id.assign("YGDERQDWRSBEKIFNJMHCHQLJWHIYQRQMJJZPLSCBESAPKFHGUSTLRGKKEMVXYSXKUEMBVBEIHVTDDCRIZZPOOVRWOCJNYOFOWOUANBZMYPNGNXJIURWCIKLMQSUHUQDZVYKESTIXXBMTUBEXAGIIUGFDKDOKALWJGFRFPPTTBCJGCTWPBIDAROWMEVADHJQS");
    msg.plan_size = 33237U;
    msg.change_time = 0.3333848151421064;
    msg.change_sid = 35471U;
    msg.change_sname.assign("FXNGPJHHFDNZRQRBKUGLPUSKQXOYEDWBAJKXBOCZHVUWZWIYPWOMGHTHMQWKDCAEGZWOLABXIBZAWWKGSKQJNOLGABQDXEBYNHOUZDMCDMUIKFLCNJACSRQLUQGDREARIPNFTCLNMFIJUUZVND");
    const char tmp_msg_0[] = {-46, -106, 97, 53, -30, -108, 122, 117, 46, 103, -4, 33, 31, 38, 41, 23, -61, 40, -105, -70, 74, 6, -126, 49, 15, -101, 78, -10, 59, -29, 51, 61, -110, 112, -36, 100, 86, -79, -78, 99, -51, -7, 95, -48, 15, -31, -64, 118, 104, -33, 9, -85, -122, -74, -92, 107, -72, 11, -74, -40, 47, 63, 4, -124, -74, -83, 95, 26, 125, 116, -65, -119, -11, -64, 56, -11, 16, -71, -48, 121, 32, 26, -124, -21, 107, 69, 0, -46, 44, 54, 94, 14, 100, -116, -65, -55, 117, 71, -92, 21, -118, 29, -124, 42, 56, -6, 50, -109, 18, -43, 19, 108, -22, -20, 96, -105, -101, 91, -53, -125, -13, -92, 102, 68, 52, 61, -65, -17, 55, 50, 58, 116, 78, -25, 80, -79, -55, -128, 22, 89, 112, 94, 59, -82, 83, -94, 32, -57, -93, -112, -123, 83, 100, -117, -44, 44, -47, 119, 116, 80, -37, 25, -99, -52, 38, 83, -116, -85, -2, -4, 51, -3, 14, -25, -64, -57, -33, -30, 19, 41, -97, 28, -60, -108, -98, -43, 84, -107, -38, 24, -81, 116, 21, 17, -121, -52, -41, -16, -108, -45, 94, 69, 87, 96, 73, 83, 98, -41, 15, 34, 42, 59, 111, -34, 114, 88, 93, -101, 19, -59, -19, 117, -94, -2, 55, -67, -94, -39, 68, 92, 102};
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
    msg.setTimeStamp(0.736374544909817);
    msg.setSource(50783U);
    msg.setSourceEntity(123U);
    msg.setDestination(32566U);
    msg.setDestinationEntity(174U);
    msg.plan_id.assign("LUBRCIHIFICPVVWKTUSMRFJKWAQQQXRIROHZVYYDEEFMBCFLTROWKQTMENOUSWUUFWWJXXHLBXOYFYZWAZOAIFMHKBOTHCNZDVMXSDNGWPDDRJEATSKRYJCLPCKJFZTRLVAAROXCYOFM");
    msg.plan_size = 28060U;
    msg.change_time = 0.7179132871690652;
    msg.change_sid = 17599U;
    msg.change_sname.assign("QQYSFNWFEBEABPGYHTANJFCZHZTDRNPDICOLKFNVYUGTUXPJYKKBVQMGSWIMFBDITJFEWTQUNRAJFIGCXRTUDJODGDCQAOBDMUOWWBWERHCTPKFPNCNUKSVYDMVQLIXSGMULXGSGJAPOQZHKZVPVIZLQMHMCSKBRJAIHDTZOEEAWWATOIXCEXBKHYNPYQOOU");
    const char tmp_msg_0[] = {16, -101, -64, 62, -44, -41, -91, 16, 90, 90, -44, -67, -4, -78, 91, -127, 63, 28, -117, -124, -41, -18, 106, 83, -2, 103, 87, -96, -45, -44, 121, 99, -94, -46, 7, 90, -75, -113, -88, -10, -43, 119, -7, 112, 59, 29, 112, -116, -50, 101, -90, 46, 110, -63, 70, 3, -86, 13, 84, -60, -29, -76, 74, 93, 61, 36, 46, -100, -5, 89, 34, 29, -71, -27, 42, 2, -10, 83, 82, 90, 111, -97, 24, 0, 58, 62, 43, 112, -105, -106, -25, 20, -55, 90, -52, 84, 75, -82, -101, 59, -104, 33, -17, 47, -82, -35, 80, -79, -25, 113, -49, -87, 45, 114, -83, 99, -107, -60, 32, 95, 3, -52, -33, 1, 44, 9, 36, -121, -33, 30, -12, -125, -65, -73, 91, 109, -57, 116, -25, -84, 80, -125, 107, 90, -39, 91, -90, -58, 13, 24, -97, -24, -30, 85, -81};
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
    msg.setTimeStamp(0.05553425055631478);
    msg.setSource(734U);
    msg.setSourceEntity(104U);
    msg.setDestination(52369U);
    msg.setDestinationEntity(146U);
    msg.plan_id.assign("KUEOLTHGKBOJNCGUTSYWMUYKZITQJXUWGMHYFRCLDNBGRXQHINMVABJANDLVSIQQLAGDDKFTPMPMTIVFPWYEHUQCGRSVYKSBJEDOAAUIOXNIQMSRBDPQHKCAGPDBEGKVZUYWPLTZVTEXJHVJWZQCFZJGFHMPNQELXXXNTRUFPDUWNXIZNVAIYADWSBNEOYMHXCACYVZVSHKFLFRBMOSSOZTBKERHYOOCRZLRR");
    msg.plan_size = 58813U;
    msg.change_time = 0.8180918283191001;
    msg.change_sid = 10663U;
    msg.change_sname.assign("QGZKSPNFREOKSGK");
    const char tmp_msg_0[] = {-70, -27, 24, -23, 32, 22, -104, -119, -84, 88, 69, 53, -33, 11, 106, 46, 123, 84, 37, -61, -47, -119, -71, -105, -51, -37, 115, -127, -96, -80, 62, -87, 2, -126, 52, -79, 59, 63, 96, 112, 18, -127, 50, -128, 85, -32, -49, 51, 16, -24, -18, -33, -34, -91, 70, 125, 115, 38, -114, 92, -85, -73, -27, 25, 88, -94, -43, 51, -17, 82, -38, -80, -100, 69, 42, -20, -82, 49, -92, -41, -90, -41, -34, -12, 58, 29, -123, -98, 37, -24, 14, -116, 100, 70, 29, 63, 3, 50, -124, 86, 125, 30, -115, 73, -15, -114, -26, 16, -120, 93, 114, -34, -80, 16, -39, -115, 122, -103, 107, -70, -63, -87, 114, 117, -122, -115, 27, -26, -19, -60, -50, -23, -102, 49, -30, 13, -93, 30, -69, 53, -24, -41, -13, -89, 33, 63, 53, -109, 84, -65, -114, 109, 25, 81, 13, 41, 34, -114, -93, 47, 24, -98, 87, 48, -57, 69, -118, 101, -51, -12, 33, -28, 86, -23, -8, 106, 35, 68, -86, -60, 120, 52, 17, 46, -75, 61, -3, -27, 80, 115, 64, -122, -109, -104, 23, 75, -75, 85, -103, 43, 66, 64, 58, -62, -104, -84, 34, 121, 23, -122, -63, 2, 108, -21, -16, -77};
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
    msg.setTimeStamp(0.8622747910602611);
    msg.setSource(9335U);
    msg.setSourceEntity(51U);
    msg.setDestination(7845U);
    msg.setDestinationEntity(208U);
    msg.type = 186U;
    msg.op = 68U;
    msg.request_id = 19175U;
    msg.plan_id.assign("LZEVRFZIVXHKMQUVTBCIRUBPDCOIXYYJCGTITWGHROQOHWOCNTGTXMGMNLYCKICHVEPSDPWWPWYXDAOXYMNGLBLLSKCHZTVINJBIQNBRZXUSTWLDEBKQYAKNSHO");
    msg.flags = 5746U;
    IMC::DevCalibrationState tmp_msg_0;
    tmp_msg_0.total_steps = 36U;
    tmp_msg_0.step_number = 34U;
    tmp_msg_0.step.assign("VAEBVIXQFJNDTJXNEKDPOQIORKVYKRJJGZHQGJSDNTNNTCJCVWBAOCWHVWGRLBOTYWQFYKUFPXWFMNNLDIYSETTLMUWASMAHKFVQRYKEPEMPXPFOZTAMSSPZDHORBYWOLSJEMKUXDIZPRQCWOESHKUCUONHRBZYMFGVBGGHWCGMUHXFLLKCHJLCUABHZMRUMUDRQSADTBTSZZIQATDXFXYIWKBVPJGPUFECCQIXVQYIEELZA");
    tmp_msg_0.flags = 141U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UFLJVTEICXIFOMOJWMOFJKOCWGVXLSWTIUNSMRECIZRGSXBBOJRFECBUCDCQQQYPXWIIWEMQUGUBITONLOUJXPKTSAKHXPMFVYL");

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
    msg.setTimeStamp(0.9402146012208142);
    msg.setSource(23054U);
    msg.setSourceEntity(56U);
    msg.setDestination(48526U);
    msg.setDestinationEntity(79U);
    msg.type = 69U;
    msg.op = 50U;
    msg.request_id = 7916U;
    msg.plan_id.assign("QKFAUEXLLVPIYPVRRVSNHUGAWTFYMKRXZMCNDECAEYVERXCLJMVFNMFRWHACRKDSVAJYMTHHFBHJTLXGLBIGDBSUNJOGSOBDZANPKFITSYFDZQWUFSKGXQYESOMTIEWLEKWWPQOROQJNZGUFGZTMLBKJDZCBREOVVEYBPNXIZMPJTIASYOFLJJZPWDAWCCXMPIBSHNBOXNWCXYXAOYCZH");
    msg.flags = 39817U;
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 2U;
    tmp_msg_0.op = 22U;
    tmp_msg_0.plan_id.assign("ZTVHSPSINOSPPSUDWXAKCIGRCEUCVKNXTBYUJWDDQFNUPLQLFXLRQEMFIEBTCRJGSEFGHYOLJTOGXRFKWVAAVGDINNMCIYQLSRCWHOMCPUBZXNVKWUZHIPXATEXZGRZEBMYHOLFMZFINYBWQRLMKSJHXQVVQPZRGWIYSDBKDNUPOEYAZDCUBTFMMAQAJZHULJZOOJHQXRSGYEAKGKMPPQBYBTEDIVFLVMNWJTKCDSGOHWVHTJCFIROJ");
    tmp_msg_0.params.assign("XHMTWDRJSTGFRTRSRSCCVABINNLURYHGNZVHBHWGCUITIADOFUYVOBWAHMMAMAWBOSLQIOJFFZXFWRGBEPQALWUTPPNKYQDEVOFKSZQEZLGDDUSCAAHEYDGNREOFLMTJXLKRCIEOELAPXSYTNGBETKPVCJYVBCPJKLUKMQQBMHLPFGBVRRZG");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BGNAFNZDGNPMVRJOQQFZVUZAOYTEHSBLAYUTHYRMINUCFVXD");

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
    msg.setTimeStamp(0.9619767780954127);
    msg.setSource(8517U);
    msg.setSourceEntity(15U);
    msg.setDestination(37066U);
    msg.setDestinationEntity(177U);
    msg.type = 57U;
    msg.op = 221U;
    msg.request_id = 29980U;
    msg.plan_id.assign("ENEDDCATPBCSPYHMIPVHGWEHBYPWSAXCOYRANOKEDWDLELIUVOURGSMDYSOXJIEPAQATYXJRRCNCTQVFVDTGDBORGRLGTFUKKZMOQKNNKUIPZSMNFHKBAQHWNFVFUAUMSZAQBROMSRIXWFZWUVPDVSJFCKTPZXILXWGVDXNWGJKZ");
    msg.flags = 40303U;
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.7246654181357122;
    tmp_msg_0.type = 244U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TMSOVUMZOYWOERFJNVAAHHPDLYKNNYUYIDZNGAXIMBAIZMSOQPGHOOTWVKQUCKIFPXXRWISMMWFADRLBASUXQLISVJQEXBQNYZMUNAUPTTHUCMLEDONBLXFLIQP");

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
    msg.setTimeStamp(0.9076570583292527);
    msg.setSource(61349U);
    msg.setSourceEntity(196U);
    msg.setDestination(61201U);
    msg.setDestinationEntity(46U);
    msg.state = 208U;
    msg.plan_id.assign("XPDXGVDQFEZBHAQXULBMIWYHXPWGSTRYZRYFZJTDBIHQTBSWVPRAIGSGZZXBECMAXGCTWDDOOXTGUIEZALBSJRJFJPRBWJYQHVOKTWFQFOJPLYRHFMKDMYXDJHLSZMEECWVXSSEIRCKEUYGHKCHPJIWIMCAUNTNALWHOUNTQSNHALZEQJVXROSOGLEUMDGBSLTNCZFKFCNYZRF");
    msg.plan_eta = 1197155310;
    msg.plan_progress = 0.8098117936808016;
    msg.man_id.assign("PABINWGHKYASMCYSYKJGKRTDGJOQIIMFTRFJNDAKUYVDXXQXDMUZPSILBCMXTYEDFTNTXFBQUMZMABXSZHCQSGCDFCV");
    msg.man_type = 29006U;
    msg.man_eta = -338027558;
    msg.last_outcome = 118U;

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
    msg.setTimeStamp(0.9895742955386936);
    msg.setSource(35125U);
    msg.setSourceEntity(126U);
    msg.setDestination(43144U);
    msg.setDestinationEntity(21U);
    msg.state = 238U;
    msg.plan_id.assign("XKSAPQXJYEDCOJSJERRWWLVLVVYOKCEGTZOMWTBNKFJVSODRIBBPDZQFCHIZLNKSNVYRDZGLFCNYFGQTFMFWDIWKXQBHAEKGTRAUGJKZYUBLYOINVNFUZXPZWTJXRQHMCREW");
    msg.plan_eta = -1475315802;
    msg.plan_progress = 0.27645836638678867;
    msg.man_id.assign("KVQFWOXXDSWMRJXSUEDDZCZPVHDDWFCZOXQGYMYYFYHOCKWSUTBBHEIPLWMZKUTRJSRUICVSJMTILWRBUQMUNOTLYFQAZNVFJOPNEBNRSVGOMNTPJEGFBCXPSUEILTKGHQYYVADIFVZPXGJGOEHWQAOYSGTNALLWEOEPBUDXJPFHANEICPOPLHBLDHIXBNRMVMCBRZYMKSHGQU");
    msg.man_type = 56306U;
    msg.man_eta = 1128649289;
    msg.last_outcome = 138U;

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
    msg.setTimeStamp(0.8968008909546804);
    msg.setSource(40254U);
    msg.setSourceEntity(107U);
    msg.setDestination(57026U);
    msg.setDestinationEntity(21U);
    msg.state = 212U;
    msg.plan_id.assign("UDOSJXPEXCQVAXVRKQBZOZKDMWCVRKKSCDTAUALLKOTGMGETSIBYATPIOQKMZLDZSQDTPFYUVXYWEZHEQMAEHNLNRDZ");
    msg.plan_eta = 1461301152;
    msg.plan_progress = 0.7392424175561821;
    msg.man_id.assign("KKNVCMLSWJYZKLEKNOHTAJVRFOEYVTPEQGGBIDNVONNVXDWCHNQWEMWIZFOTYGAFHFPKGAUVLRQKJFQLUORGZUHMIJIUMDYQGRAKCHXDOHDITEZVIQLHCDKZBCYMBJHXWMQTPFMNPYSBSTFRHCNNPFTATRUCSBYDFTRDAESMOKIUOQUWSBWSZDBIPAUYFDZZOJSPBPEEQBEQZJUWTKCUAIWPSOXXYV");
    msg.man_type = 30208U;
    msg.man_eta = -1649975441;
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
    msg.setTimeStamp(0.8663169024910969);
    msg.setSource(58751U);
    msg.setSourceEntity(249U);
    msg.setDestination(13016U);
    msg.setDestinationEntity(222U);
    msg.name.assign("LCBSOAAPSMZMDAPXWKHPEJJEDFIYCZHKVQMCGPRBXOWYEVVFZLQSYJNUJNUKGURQQJSSODVLOMOSBVHPDRHCCGKVEVHTOPWIEQGMZBKYBXHIYAFIZFCKWLXWHCHFSNZTBIRUEQOEWPAIVUTZNXKTGCRUUTWORRAM");
    msg.value.assign("BXXORFDYLQKLUASTHRWFHTHHLIDTBZESJSIMOTZOPHVGTIWJFUNTWWOEWGRXBDCJEVUUDDKJAMFNPZRSAQQLPAMGKSTDPBHEFKULRSYULLFVFBGYEGMTMGMQAYQZEKNVNXPCDMXILEJWCQJOYEMGYBQRNVUROVRVSIRNLAGAPOJZCXYIGQHQMWKCMZHSJAQ");
    msg.type = 169U;
    msg.access = 67U;

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
    msg.setTimeStamp(0.8547969535914346);
    msg.setSource(58954U);
    msg.setSourceEntity(161U);
    msg.setDestination(11722U);
    msg.setDestinationEntity(94U);
    msg.name.assign("CXEQTRBOLAFFNLKJOTBPDLAQVRPDGSWDMTYLVYOKFCZNVFPEHPUGQWTRIEPBOCQBZDUXJSVHHZFMZANEGFMBVTKJHUYODNRXKCKXOXUYXMHHSTAAOUCKBPGEMRYHOMA");
    msg.value.assign("TUSMNJRICMEOBFXWPLBQZXJMYZVU");
    msg.type = 81U;
    msg.access = 110U;

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
    msg.setTimeStamp(0.8370117152125336);
    msg.setSource(17853U);
    msg.setSourceEntity(85U);
    msg.setDestination(29115U);
    msg.setDestinationEntity(171U);
    msg.name.assign("KIRPANFNJYUV");
    msg.value.assign("JOVRYFZEVPJMDJKMSJTKJWERD");
    msg.type = 185U;
    msg.access = 58U;

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
    msg.setTimeStamp(0.8318692194583107);
    msg.setSource(41342U);
    msg.setSourceEntity(46U);
    msg.setDestination(23267U);
    msg.setDestinationEntity(225U);
    msg.cmd = 249U;
    msg.op = 183U;
    msg.plan_id.assign("IJBRANVLTZUCAUMTJFBXIHAKYQAXUHHOXHZYGQVCLYMAYEKSGNBCUXICHFAGQNJUGJVROGYMLDLBZXIRPOONCBMDCYFCBCJERHCHXUMCSWKETWOLVADEDIZHAZDNFZULWVTKGLLJVYDWZWAYNSPOKNKPOWMHEERHQESTPSNNFQTDWNPOYMSFTUSPXWRMBTVURDRGBWBGEFFKGIUPJLISJZQEDKAKXPRZLXFRSPM");
    msg.params.assign("RBBCNWMVTDIHJZOZWPFEIBVUI");

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
    msg.setTimeStamp(0.8383719664466325);
    msg.setSource(15291U);
    msg.setSourceEntity(171U);
    msg.setDestination(5359U);
    msg.setDestinationEntity(43U);
    msg.cmd = 174U;
    msg.op = 228U;
    msg.plan_id.assign("BWHPMZQBQTWURYIDVGZKGXFINRXDBFZEAXHRTOWUNWMSKO");
    msg.params.assign("FRWAHPVCORBQKMWYJZAPTWMUIESHXXTVWQVLARICKWDFZTCPGOSXZLHMEZPSKAYOFCHPNFKJHMGTYAFGRXAIEIUMWHONSGVIUAUDRKUYFGPRGSWTQIOFNQBNDNJGHKOYOLKXUQBIBXQLZNOLUZYBTQJJDVECJPZIMUYZEVSSBMSGCECNEOTEVTZS");

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
    msg.setTimeStamp(0.39244912619235384);
    msg.setSource(20446U);
    msg.setSourceEntity(137U);
    msg.setDestination(11909U);
    msg.setDestinationEntity(51U);
    msg.cmd = 99U;
    msg.op = 136U;
    msg.plan_id.assign("MUNXNBVUHUXMJSPAKANKFGX");
    msg.params.assign("HOKQAIQBOWWDFPZDMXBIMTCVDFQSDABXDPQCAPJIGOTNNJOAMLQUJSCFMBPEGADKLOMZZCUKHHHLRGGAQFEVXKZQOVZXUXBKWIIYZICTBRNLWMVORRJKTZRMRWT");

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
    msg.setTimeStamp(0.20553651586914057);
    msg.setSource(18045U);
    msg.setSourceEntity(88U);
    msg.setDestination(7329U);
    msg.setDestinationEntity(147U);
    msg.group_name.assign("ABBUJIQZRFUBDSLOPNXHEDLPPGNRHUCBEBLIMDMBAXXUHALWYLPANMGKYVHVIUGQXPKENZYOCTNPGRNBARLSJJTZSRHMATQYWFZWXDAKAHKCGPQYHFVZCGBJKZVWGGEUXEMTICCOQWMFX");
    msg.op = 152U;
    msg.lat = 0.1466820634885494;
    msg.lon = 0.4495138363946376;
    msg.height = 0.37136418541448357;
    msg.x = 0.2777740667218829;
    msg.y = 0.8591405444334831;
    msg.z = 0.6185381085688737;
    msg.phi = 0.8258074072932123;
    msg.theta = 0.9696983845770799;
    msg.psi = 0.5623250682323275;
    msg.vx = 0.3742021130633819;
    msg.vy = 0.30376278329974415;
    msg.vz = 0.34760609576704404;
    msg.p = 0.1327376009513317;
    msg.q = 0.13287049655501837;
    msg.r = 0.9671418346740038;
    msg.svx = 0.9288560756737977;
    msg.svy = 0.4960171582561905;
    msg.svz = 0.46419134630172076;

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
    msg.setTimeStamp(0.6159351188359893);
    msg.setSource(42430U);
    msg.setSourceEntity(143U);
    msg.setDestination(59703U);
    msg.setDestinationEntity(23U);
    msg.group_name.assign("XRNHEQHVLNUSMMGSIFKPDNICCRXPGFAFZXRVGCRDKJOFQFISJAPAJQPWJONSZ");
    msg.op = 164U;
    msg.lat = 0.11029936788779193;
    msg.lon = 0.09555434091208503;
    msg.height = 0.7709009776044511;
    msg.x = 0.33842218678582603;
    msg.y = 0.9818835576991068;
    msg.z = 0.6575351252695459;
    msg.phi = 0.49739610697345127;
    msg.theta = 0.6694139530998868;
    msg.psi = 0.8302692743838535;
    msg.vx = 0.8417539995727735;
    msg.vy = 0.7047584765173908;
    msg.vz = 0.33662009108605995;
    msg.p = 0.6130558413258774;
    msg.q = 0.9347195611362598;
    msg.r = 0.16373555256290395;
    msg.svx = 0.470383991515243;
    msg.svy = 0.5648868997727045;
    msg.svz = 0.03218629086905345;

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
    msg.setTimeStamp(0.5731082847342817);
    msg.setSource(31312U);
    msg.setSourceEntity(42U);
    msg.setDestination(31783U);
    msg.setDestinationEntity(48U);
    msg.group_name.assign("MQOOSKFQTLHAPGNDDPLZTEAVSAWEHKIJWVKCSSOPPYXCFZHXTBBXQXJZZWKTFYBKFUCOASINUVJPOQUFGYDATSXKUFYMWXRNLDXCXYHGZCCQCPHDRVIFNTADTLRHQYPULBMUKCOJHWOGEKLERGAERPQGWNARAVJHLJQMRYGDMIBYUVQSQIUZBLVKVXFURSNXDRPNUCABSENYHMZBOYKZWIMEDEGBJO");
    msg.op = 52U;
    msg.lat = 0.9933054804296223;
    msg.lon = 0.948911695808463;
    msg.height = 0.0755400039591847;
    msg.x = 0.8215384229058738;
    msg.y = 0.6032718910798632;
    msg.z = 0.48985241018545145;
    msg.phi = 0.2803602367904554;
    msg.theta = 0.6539910345591238;
    msg.psi = 0.44850239119446655;
    msg.vx = 0.8629756055530866;
    msg.vy = 0.4659101020982219;
    msg.vz = 0.0575276133012983;
    msg.p = 0.2141648140222182;
    msg.q = 0.1221112271149647;
    msg.r = 0.3380069416599196;
    msg.svx = 0.21834468660543627;
    msg.svy = 0.8715988985595082;
    msg.svz = 0.2729249717778667;

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
    IMC::ReportedState msg;
    msg.setTimeStamp(0.41071703723377206);
    msg.setSource(62029U);
    msg.setSourceEntity(9U);
    msg.setDestination(64312U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.19423933419979778;
    msg.lon = 0.4664987750487354;
    msg.depth = 0.5778877185876873;
    msg.roll = 0.8978186189916945;
    msg.pitch = 0.6763254925807374;
    msg.yaw = 0.38470153869978185;
    msg.rcp_time = 0.9980767391143973;
    msg.sid.assign("HVKRVUYGNZNEDYHFBVPCRWUNEUIOZCBRTXPRVMIJLRPGWQQLVEYSAPAQDTBHTQUJNEJIGQXZAXQLVZXCGXENBKDKSZIWUFFZBQZOARIQOAJRKEBOFKOKNNCWCHIPOJLJJGZHLFI");
    msg.s_type = 157U;

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
    msg.setTimeStamp(0.9489664892168688);
    msg.setSource(566U);
    msg.setSourceEntity(162U);
    msg.setDestination(8518U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.49830169953637593;
    msg.lon = 0.0706100504455005;
    msg.depth = 0.5136523242063493;
    msg.roll = 0.6042822397187632;
    msg.pitch = 0.11139261839339643;
    msg.yaw = 0.38451388227111205;
    msg.rcp_time = 0.31786167724065406;
    msg.sid.assign("UBDJZAFWSIWSQOTOZARZCXONPAKAGIKQLPEYTJYSRZCZAVCPXAZXOGOVWXEABNDLXSNAOCRIKEFBJWJKZZDSQPH");
    msg.s_type = 23U;

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
    msg.setTimeStamp(0.4094834038828973);
    msg.setSource(49365U);
    msg.setSourceEntity(221U);
    msg.setDestination(15708U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.03453396934091035;
    msg.lon = 0.8389683772910521;
    msg.depth = 0.137773286323713;
    msg.roll = 0.3176751925467184;
    msg.pitch = 0.30774655987983723;
    msg.yaw = 0.5284221430189653;
    msg.rcp_time = 0.25243521454408935;
    msg.sid.assign("NALDLWWVLHYAEWFFFJKLUCYHGXTBOCUVWGXOMNAQTTVTPQMLZPZLEEZROGKWOZOQEIMMDBRDKYZWJBSFVTZHCAWGJKSSIHKFTMRQIGSOHCYYGXQPPDJNPUADWJHWPPZDXTKNOXCAZGSFBIKQTNMEXARUCYIICYSLMDOBZKVEBAVPIXJIRLRIARQRUKSCQUMJZXSFENNBSKDFJVBWQPYJFHEXPCGDTEYOOUYBCHBQIMHUJ");
    msg.s_type = 79U;

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
    msg.setTimeStamp(0.07952964392985484);
    msg.setSource(17665U);
    msg.setSourceEntity(202U);
    msg.setDestination(37128U);
    msg.setDestinationEntity(64U);
    msg.id.assign("OJOYMLIOGGVEYSYENXLFES");
    msg.sensor_class.assign("DYSWQIHZEWWURQPTOKJKBGEDRRHKEPQNCEYYOCNKNVNJSIKLQBKATAIJAFCMQIERDCOQFZLAQOXLSWMFPVUEAELUGTVECTHEQUMGYXNCPNYMHRXRAVCLJHJMYOGLBUTAPSJETDUOZUXJXXUBZDHMOPMVUYBIHQRAAWBSITJGBBHWDCIDZOXFNUJKZOSNGGVZRWQPGJTHXPPFYYRNKLWGMZDDVBIRXFAMIBNFCSLHVKWVZSTMOKZFDTYG");
    msg.lat = 0.050607112828404355;
    msg.lon = 0.31625668476133706;
    msg.alt = 0.1939060277179695;
    msg.heading = 0.07184333211960603;
    msg.data.assign("XRYNICDMDOULIVFIJGKHHUSZJNCVMVZYNZGEHOMESAYPFAOLVOWCRXPQJRHAQMSZOJFYUKTCLBWE");

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
    msg.setTimeStamp(0.9090895659605455);
    msg.setSource(39605U);
    msg.setSourceEntity(143U);
    msg.setDestination(40220U);
    msg.setDestinationEntity(208U);
    msg.id.assign("WYSCIVCGFNLFJOPQMNLUAKJLDVRDRJEFJSNAPFYUYMZLQAAGONEUQFPYJQXZEPUDZMZSCUZTHXKWGMONUTVKJLHHBYORIANJPQNZBSFNDNGFVHIMHMOTKCIKIQOONFGBYXVWLWMBDCCCFHDIUXOXCKYGPTDFBRKATPRIQBKSKHBSHIVUTHBSGLEIOVJUXBQEWZAKWUOLEZDTQARCLRTSWPYSGXIQADHSGCMRXTWTEWPLZ");
    msg.sensor_class.assign("KCJKDVGCQPAXZAUTLITHSBSTFTLAIIHMCMQDKUCZVNABLDEFCSJJRQFIPRHBWLBTOWXCHEYDGPPSBWZHIBBYSASOEOGIWNL");
    msg.lat = 0.37847406020299734;
    msg.lon = 0.3339183062063008;
    msg.alt = 0.2668204355926632;
    msg.heading = 0.35042058262090015;
    msg.data.assign("RXWJFBFZCGZFTOHJQSZEPRRVJLUHIBHVOHRAJNCXFDVQXRKZOTDFIJLWNBWEAOIDPIFOWMQURLCYNXQRATYZUTKCZTDKVLTPNYYIURKLSEGKQYPGKBXJOWWEBUMWAKMDLGRWDNSYVEOBNTSVJGOSAQSEKUFBBMFXXTAIVGKPESYHQVLIZFCICANEHXMUZNKHQPCPCLZVABMOEGGDNMJPUYUSXJHUHIXEGWIYGDCARMTMBLMZSJDWLPVYDSH");

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
    msg.setTimeStamp(0.9533839271716029);
    msg.setSource(21278U);
    msg.setSourceEntity(198U);
    msg.setDestination(27182U);
    msg.setDestinationEntity(113U);
    msg.id.assign("XWYCTSBOFQJBSFDGEUZYGNNVIERIQDQERLRMYFAWZMGBAYATXOQRBTGXORHRFLCOUUKCHFAABSVLXKSBPMIURHBXWLKMT");
    msg.sensor_class.assign("RSZTANCIUUYDMABEWCOHMCCIXQJTMZOGDUZWAZGGANNPQPEGRMXQBYEELMUWZBNCVPTBFBQBLYRNXHZXRXDTPWCJKOILDSUAYKFJUJHDEEDXNVLNNLEP");
    msg.lat = 0.7629551710123101;
    msg.lon = 0.25863895917728097;
    msg.alt = 0.01993598074810521;
    msg.heading = 0.4253149671108154;
    msg.data.assign("JKMEZCZBUJNHRQPIDXURMCGJUPRGSILKPTCQDMHRNOVNZOBGVVDDSZDLGXXTHQXFKDEGHHFUSTDPMRLYCGOSNCLRYBJEROGLYDMXKOJHAYSKBVNSATFWFHPVEWFUAOYHZPIRXJBPIETWWN");

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
    msg.setTimeStamp(0.759340226315434);
    msg.setSource(14747U);
    msg.setSourceEntity(23U);
    msg.setDestination(46572U);
    msg.setDestinationEntity(8U);
    msg.id.assign("YQQOVTJJJJDXMUAGSDVPHEMDBFRDCXHTGDHLLIGQBFJYNJROZVHRNYEEINPVXKMAUUQZIKZVAISTELYKKMOFWZUHLSCKPTRZDPIYZCOKLUJWNBDBLPUHGIAWFFBSUCYWANRAOLDTGESRRHTTWOKFLWPJRFGNQUTOEFBDCSXMBMHIUXIBMPGJXWBHQPAOBICTATASWNJZWPM");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("IEHANDKISMHTPYJRPCDNUXYHTP");
    tmp_msg_0.feature_type = 136U;
    tmp_msg_0.rgb_red = 9U;
    tmp_msg_0.rgb_green = 99U;
    tmp_msg_0.rgb_blue = 9U;
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
    msg.setTimeStamp(0.7549049466799513);
    msg.setSource(293U);
    msg.setSourceEntity(57U);
    msg.setDestination(61033U);
    msg.setDestinationEntity(66U);
    msg.id.assign("ISXZZZNVJHKCIADRNMMIECGXWOTBVQEJMDSKQYSLWBEDGSHHOZJLPSGBTQEWWHMKVOMBIXRBPWPJUNXTOFAFNFZPMCZRLKLFEVNHRLHCUMDQAGWGJDHQKHTGNFPEZEQJTPOOTFZ");

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
    msg.setTimeStamp(0.9072795360692828);
    msg.setSource(57005U);
    msg.setSourceEntity(168U);
    msg.setDestination(55288U);
    msg.setDestinationEntity(12U);
    msg.id.assign("VEEPQLQFWYLCTDRTZMLJQNGKTGK");

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
    msg.setTimeStamp(0.14634155226317436);
    msg.setSource(62471U);
    msg.setSourceEntity(6U);
    msg.setDestination(60959U);
    msg.setDestinationEntity(67U);
    msg.id.assign("UOMDXSQOJZTRAJREFCJYXKGGDLPSMOLPOEYIUUCZLWDMLVUWBBVKWMKSNTWKPOBABVUIUDNLYDYAFHCFJPSCVJGPMXRTBUFVQSNOSRC");
    msg.feature_type = 177U;
    msg.rgb_red = 86U;
    msg.rgb_green = 75U;
    msg.rgb_blue = 212U;

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
    msg.setTimeStamp(0.5729501305745285);
    msg.setSource(6585U);
    msg.setSourceEntity(34U);
    msg.setDestination(64339U);
    msg.setDestinationEntity(87U);
    msg.id.assign("URFVLMFPMUVDXPUQAKLGUYPYQZPQVWBTSWHDGYHXZTAFBNAXMDBZRPGRZJSTYFNPITRGHLMIOPSVNCDWISCHXFQDSLKJWDRKWBQEZOTIOJAWYQXLLUVNYFQGLDPCCRSVZXVTEEBZCNMOKRGNYKJNKYHRIGHIYOUNFEBJFATMN");
    msg.feature_type = 16U;
    msg.rgb_red = 241U;
    msg.rgb_green = 56U;
    msg.rgb_blue = 41U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.9716938957389915;
    tmp_msg_0.lon = 0.826692520206015;
    tmp_msg_0.alt = 0.7294060016284648;
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
    msg.setTimeStamp(0.0587970961307146);
    msg.setSource(29391U);
    msg.setSourceEntity(185U);
    msg.setDestination(5481U);
    msg.setDestinationEntity(27U);
    msg.id.assign("FHQWIWWNSQYBSVCMSGKIFPUWLUVDIXLUBLMSWFFZSXQPVIAROPZWAVDNOYXTDOKAZREXRNZCAABCDSVENGFRKTLIQJPTGGHDVMNUNXUHKGJLJLNOIUYHAOMSJYIRIUDMSVTMXKYBGQIZHHBFBOUTJOHXLRRJFBCBYQIANETEACSEEBOVHQGJBYJ");
    msg.feature_type = 141U;
    msg.rgb_red = 194U;
    msg.rgb_green = 248U;
    msg.rgb_blue = 71U;

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
    msg.setTimeStamp(0.4289123515118801);
    msg.setSource(27958U);
    msg.setSourceEntity(89U);
    msg.setDestination(40447U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.977208605952018;
    msg.lon = 0.5808041546523771;
    msg.alt = 0.7689351016888978;

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
    msg.setTimeStamp(0.881041110403244);
    msg.setSource(35259U);
    msg.setSourceEntity(38U);
    msg.setDestination(37881U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.9800556555862873;
    msg.lon = 0.5064154510656791;
    msg.alt = 0.3102598387480954;

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
    msg.setTimeStamp(0.4647913606199887);
    msg.setSource(32365U);
    msg.setSourceEntity(104U);
    msg.setDestination(15508U);
    msg.setDestinationEntity(37U);
    msg.lat = 0.7717040434427913;
    msg.lon = 0.4274191419562563;
    msg.alt = 0.6667321200518385;

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
    msg.setTimeStamp(0.38951217153532525);
    msg.setSource(5541U);
    msg.setSourceEntity(240U);
    msg.setDestination(9846U);
    msg.setDestinationEntity(71U);
    msg.type = 112U;
    msg.id.assign("SKZPONIBIHILFKVMGWCYZORHSJWMWGQEXGMRSCGXIFUTPSWAKGLVSKUUAGJZZUICFQJAZEPLUXCZJSNNVEZLDFTUFOJAWEYHVINWPBUNJRPTHUXWMFHLFOBCCVMZMPHDNRMOLYWUSJNOIRGUVWFYXQGG");
    IMC::LogBookControl tmp_msg_0;
    tmp_msg_0.command = 186U;
    tmp_msg_0.htime = 0.9792002468198221;
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
    msg.setTimeStamp(0.20560881881197168);
    msg.setSource(33721U);
    msg.setSourceEntity(138U);
    msg.setDestination(43670U);
    msg.setDestinationEntity(123U);
    msg.type = 151U;
    msg.id.assign("QCZUXAHVNTXEIMJAJPFKULHASZQCFVMLVCLGWTUGGKDTIYILZTYMEKMXSGPQJORQTPSHO");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 49280U;
    tmp_msg_0.lat = 0.7400458189639405;
    tmp_msg_0.lon = 0.5416978454355437;
    tmp_msg_0.z = 0.3537015475288946;
    tmp_msg_0.z_units = 174U;
    tmp_msg_0.speed = 0.4992504522690909;
    tmp_msg_0.speed_units = 221U;
    tmp_msg_0.bearing = 0.579303652110602;
    tmp_msg_0.cross_angle = 0.37550252120801775;
    tmp_msg_0.width = 0.18282953443959604;
    tmp_msg_0.length = 0.6951413323569879;
    tmp_msg_0.hstep = 0.5203069663996112;
    tmp_msg_0.coff = 228U;
    tmp_msg_0.alternation = 228U;
    tmp_msg_0.flags = 181U;
    tmp_msg_0.custom.assign("WUYSVDVBMLGPWIBAGEKQUUUTRYCZBGDCULQGONDTFCQSBEFHXIMARJZHJUDWNFCZEGTXIJOPNUEHIWVALVKEHTKWQBJUOIYRMQFRKFLRQCZJDNDEDCYCYNOFRAZOCDJVHJLZQKLBTWOFGRXNEHWSYLAHVLGLQPKAXVBCZEOMMMWIAETZSXXFTNQQNJBIRPSRBFOXKWSZSARVGA");
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
    msg.setTimeStamp(0.3818378590902436);
    msg.setSource(7524U);
    msg.setSourceEntity(99U);
    msg.setDestination(39928U);
    msg.setDestinationEntity(68U);
    msg.type = 155U;
    msg.id.assign("FUECKPWXZBEJQQSUQXAEIBRFUPYADRDZJHXNGKVDTRYFBCILNROIPMASQEJSPTNCHWRLLXBMAYLOAUPMQILRCQVAXHQMICRMZGSSZZYYFJLYDCONNZGPGPHFZVNOHVOGLMKBDGSQZUDXOXPKVLKXOSNOWIHACVLQTJAHQDNFKXITIHRTMJSTIMOYUUYPJVNWW");
    IMC::PlanGeneration tmp_msg_0;
    tmp_msg_0.cmd = 102U;
    tmp_msg_0.op = 141U;
    tmp_msg_0.plan_id.assign("UANYOLKEUKLTGINNDYVRKZGCEGUDNARPDZCBWFWVFSAXHXJEAF");
    tmp_msg_0.params.assign("KBWFEPOZMVMGRVXSMXEMLBBBJLKKRDOQYVYYAZGPXICGDSOFZXYQTSCIHNYDQFDEGBBCQNJSAUIMNHRRBNOXNCFHWDZFOKETSEWNOFGPQCRHAYQDXUCSQUMAXNHPJVFLTVIZLNGAKPTHMDAKTGEPVUHIMNULWHGRXWJZJOOCEREJQUKIOZGSZDFTFLYRIHWZUIJJRVNCMTFBEMYPZYULBKAW");
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
    msg.setTimeStamp(0.6507605819103023);
    msg.setSource(25147U);
    msg.setSourceEntity(46U);
    msg.setDestination(49291U);
    msg.setDestinationEntity(176U);
    msg.localname.assign("NDPSFHBIBDMVRHBCTPQGRVOOMNULNJPETQBXXBYQSVEXGNLYFHINFEMZGRFBALWPCEYVFUGMDLDIYGBUS");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("RPVQCLWNFOWPSGYKTBMBKCFNMHUZBAPOWEIRVUFHASXS");
    tmp_msg_0.sys_type = 217U;
    tmp_msg_0.owner = 5212U;
    tmp_msg_0.lat = 0.5271681166905601;
    tmp_msg_0.lon = 0.8479648033774508;
    tmp_msg_0.height = 0.6254167229320237;
    tmp_msg_0.services.assign("OHWEZIUWNLXLLLNSNASPFHOOOVZSWJNMXDDLILXSMTPMXVIPCKCEGBFKHBTNPPYNVTMXKFTZAUQJEQFTECDHMQYDUNJNGCILBGMSCQKSNQJKICPXIRVBROOA");
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
    msg.setTimeStamp(0.29699176818566775);
    msg.setSource(53289U);
    msg.setSourceEntity(244U);
    msg.setDestination(13778U);
    msg.setDestinationEntity(180U);
    msg.localname.assign("AZNIQDUYSGSQIJYIURDNSQHOHMMBWUZXRQDAECPAGIPIXILXJGTAPTDZIFYGJYLZVYQLPPVKSYOMPOVFGMDPDJZWABTIUWKCIEOENQEXZQEZKEFTMNLSNHNHZDLDEVSLLCAFOBXKSHVJCKOBPTWATVQHOOGNWBCNRCAYM");

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
    msg.setTimeStamp(0.13953424441766016);
    msg.setSource(26621U);
    msg.setSourceEntity(53U);
    msg.setDestination(50389U);
    msg.setDestinationEntity(104U);
    msg.localname.assign("BCDQDFNEAVLZVTADLUIYUNCJBYQFFTBMIGJZZGXUJFIMTWFNOHVGETZBZRGSYGPLFMRHRNHHEVECZMIJRDRSDTCQLKKCAKUCOJEGWKSXQANVLJRDDTKUXNKBVETWCENMDOVSXIPUMAOWBVPHXNAZSUHYPHXCBRJLAPIOFYTPLRYFDXGRCWVWYWMOEXQAXUHETSKAPQQR");

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
    msg.setTimeStamp(0.20338396645984425);
    msg.setSource(37364U);
    msg.setSourceEntity(75U);
    msg.setDestination(59335U);
    msg.setDestinationEntity(232U);
    msg.timeline.assign("GWXDCZQSPRLWKHKTPLIFFECZADYMHAFFDDNVTYGBJHNBYNHOLCDBIGHJSCMEPAYFXDEUOLATKABQJPEVJKQVGSAOKQQDSJRZFAYOIINNJJVSAGFXLQRVSEYYVZUBHQHXTAGQZXUSMMZWBBINPCKWYEOPIHNFKCTXPBCGWRLSMMICELIRRXHUQHOCLMVGUPKNYERZQRXGFMWRRNTSTDOJKBZJOYGCMIBVEVKPAWOUTIF");
    msg.predicate.assign("VJCPLUNHPBRVRGGEDHVYRCJIFQQNPNASTTFZGOANYIFDZMVMTZPBEKEHSPIUXIOUMKSYYLAOBWIJAUWROIBJLWFKMFTAQKNXCITCPNPATRXUWYGVBZHRDVFCMVZLRDBYUGSEEYBFEHJMARBEULLVCFZYXBEHKSHAOGGXKPHOUDNIQXXFDSRJLJMICLCQODTBUMDX");
    msg.attributes.assign("SUGQLFUNCSAMXH");

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
    msg.setTimeStamp(0.5870866767776285);
    msg.setSource(57320U);
    msg.setSourceEntity(235U);
    msg.setDestination(35553U);
    msg.setDestinationEntity(166U);
    msg.timeline.assign("GNKXDZJRCVLQQYNOYUBRWDUKRAADPHJKKGVIDHALRMWVQPJSHKKGJCLVKZBBMJYBEQTFILVANTMBJWOUEFUSAOOXZYCIJKKXBYRESDMPPCZWGZAWIUSSNQEAMAVTJTEYWGSLUUIHWGTRHLFNBAAEGLFDIEZOQVDRDWBWMLHDULCHTIXUOFMZXBRFSQTHCPGYQZRPEXONCPJIZKUXEFFFNSLH");
    msg.predicate.assign("KDESUSLSGFDRJJFBLURPECLNKQOZZQCOHHTDPEFZTIELXHOWGEFYVBTCMGNOVYACZYXFOQJUHZICSURLGYMJDMKDLEXYPZAQRJQQCARPHHKWPYQPNAR");
    msg.attributes.assign("LSPEXMNQOBHOZBSRXRFEMACWIYNQCMEXDQPYTKVPJPTZCCIPGRGQCOUUXRXUDHKIBATRTZLPYFKCTGKVAFBHKFDBAWEOYEASJKAUKEVWBYHFUOXJIHXCEFUABIJQXFZZDFWYITLUHPMWVODUSQMQLINVGGWALNKNKMIXWTOGSWZLNCOJRNXRUMJJDNRBGSEADSVYRTGNIBDDHPYWNKYPZHJIMGJYREVSGWLSMUCVFDPLOSTLTZHFJCHMZEAQV");

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
    msg.setTimeStamp(0.7322143085816284);
    msg.setSource(41128U);
    msg.setSourceEntity(63U);
    msg.setDestination(62811U);
    msg.setDestinationEntity(11U);
    msg.timeline.assign("LEDSUPXCLCSWWCIGTPYOCTDLKYQBIVCERTBJKJVEJLZSQPAKTCPOTYWHOBWNBVPAOKMYPJNZAHQIENNZPPBXRGFEGAGJFSRFSITJTCRDAWLKLDJTGHCGXBNLWHDOZZEWGHJZIOEWXEITNXFUHISZVNHQEYRSORMUKVDHUMLFKXMOVEDMYUNWQFUKGFUBDKUAJMVYASVQVNDVJIXMWRZPZHQCMLBAUCFAKORGGIIQXBSTBFYQXYXRHZQDUYF");
    msg.predicate.assign("RJKMXPSOPIKMIDRVTQRQTDSYULYABVEMYIANKYYEOUWVLFHELPAMGTTFRFCOERIOSWODOAJJSBFZXXKGOCXPDLYNMZC");
    msg.attributes.assign("OTXKHCSGYIIFNNAKRKFERUPZXDJSNHBTLGKDUJOUBMIIURSCSUYDXQJNLJKNLVAYQSNHZRYUQBATEFSMOCAATDVGKXDSMXIWMWRYOWDCQWGHLUXCITLMSAYIVAHCEMJROKSDQBFFZBXZPYTPHMWNCVJZOQINWWMVVFKLHGLIAYZADFQFMTGEEPNZEWGLPUOGJTYEDSWGXZQDBGVYVBVRMPWLUPCQBNEXJPXRPOBPFI");

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
    msg.setTimeStamp(0.6090450452327153);
    msg.setSource(43085U);
    msg.setSourceEntity(227U);
    msg.setDestination(19135U);
    msg.setDestinationEntity(149U);
    msg.command = 158U;
    msg.goal_id.assign("XQKHGXMBGECWUGOHBDNQCZARYSAVWWVEJQUYZBUYIBOSAZNDNYXLIGEIYHRIHQCJOULTLKFLFEIKZRNRQNCOEJMDGANIVRLVWUPASNSELAYPZXOANCDOED");
    msg.goal_xml.assign("SZJQWEIAVZZUCGTDHLVXJJZHBBWMTFKPNUHZGYYNTUVQIBHDUVAKCMOROUM");

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
    msg.setTimeStamp(0.45730892726676187);
    msg.setSource(43450U);
    msg.setSourceEntity(81U);
    msg.setDestination(42239U);
    msg.setDestinationEntity(24U);
    msg.command = 85U;
    msg.goal_id.assign("QCTTBQCEUGUVRDHJZMUUHBYKBKZVBSGREKWIRPEAEXFLOTHCOMLGFIEIVTDBT");
    msg.goal_xml.assign("KPHVNINDCYHHTPFYGAJFXAKGMMVUXFBBZQLQEOBKGEGPGCDETBYKNBMPGDLCZTDSCNOJRSTFJIRXMGSYKKOQKTNQLILVTFMXOIMEOUJZKPSAUKPRYTPDHVTYLHCWSZKH");

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
    msg.setTimeStamp(0.23125727933024043);
    msg.setSource(22198U);
    msg.setSourceEntity(237U);
    msg.setDestination(40933U);
    msg.setDestinationEntity(85U);
    msg.command = 181U;
    msg.goal_id.assign("TLVQRLDEZQACOAGHQEZDSFEKOUEZTLBOBRKOFBMKYWVJUAYRZAWGTOFMLPSDYIMNLFAIYAMMDZSPNKRXJHMGHUNSMCLHCQWVBOZGQCXGJDQBKNANFSHRBXCTZJPQGUTOGSSUREECJKWFIHNRLKMJVUJAASENDIECXPXXDHTAFWHRUZDLIIZSNUIHBOPXYXOVFWMRYJQFBGKVQZYGCVCXWVBDCPILVPNKMJGPPTTEX");
    msg.goal_xml.assign("YGRCXPQFXABOZXKTYXERHRFVRVCUEKCSMLDFWHMHDSNKNRUJXXBPTCPGYUANNSBAABFHTNIWMXPUMCNPTKIKUMGLRDLGPEOVIALFDDFGOMDNBUZOMWTHUQPLYLLZJAVMJRCBBBEHJCWTOQHVGZTQSA");

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
    msg.setTimeStamp(0.2642274770788686);
    msg.setSource(14613U);
    msg.setSourceEntity(111U);
    msg.setDestination(7805U);
    msg.setDestinationEntity(138U);
    msg.op = 179U;
    msg.goal_id.assign("LXCXORKRQPJZSBZFZIGMOOXMBAVLNBAEDNRNKFSPZXQEDNOCVURIEWLIUUWFKKZUNPLUDTUNHOQOSEVRJA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FRTRORQTXOAMJFAWVJMIFDAZMWSOLVHMGNVYDVQNXKCEALWAWPRZDNLDOLDYYXKNZBWSLQPAJJHQLSFFDHPKGMQDHIJCAFPRHNSOVKXUILGCSFCPQBEXOKUZKZTUUALDCPXEREESVGEUGQOIUFWUXTEPUCTCVJAHZBPGTIMOIKNWHIKO");
    tmp_msg_0.predicate.assign("LSBODHCHSZVWFJXUYPIJSLTBAOBFEDRGUJZYLNXTJPQONFTRGIYHRJFDQTPRGDALXIPSFPUYHQNOWXMEXMFUEKDCIOUEVHKSOMPULAUFBEBBAEERGBQZQHCRZULMGXNZDHDKTAKVOCZVARTBRZQPIHUHYMASMNCRWPZLNGNDDBFTJDRZPCWYHISWCVOAMGTJKYNYJGXMVQYILCCSAXSVKVEXPNIWWJKEOTGZLEWTGCFYQ");
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
    msg.setTimeStamp(0.06932453445901199);
    msg.setSource(17976U);
    msg.setSourceEntity(115U);
    msg.setDestination(60864U);
    msg.setDestinationEntity(244U);
    msg.op = 243U;
    msg.goal_id.assign("FDFEWOJZGUVNNEDSZC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DALIBPHRXIKLTLXDGFNQPFTOINWDBYENNKHMZKAEIUIGVXEEVORRVKSZOBDRWUCDTSJZCIQPPLOZPETWGDBZFYESGUHRVPYK");
    tmp_msg_0.predicate.assign("XTPIASEMXURCIEGTEGPMRHORDCTRXJLFLIVBHSSRVNHOXWFTGZYXWSXOOLAQOLZFNQGWUEPVZAQOMGEYBSYLCQVIKSOQLTDGFUKFCZZIHLDHHRODDMENKCXRAGFSVWUFVOMKHCJOECZPKPDWTPUURDNJCEAWUYDNTZHJCUMWNWZMIPVKBGGJBKWNHETUTRBCGYJFWQJXQAFNQSVSYXAJIVNYFBK");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AOFQSNRAYLLZFRFKSLENIJBJUVKPSENNGSCWXMKEQICZLYVJWIKEYIJYZBHDOHXTKMPMIJGRVLPPECIGECANGRIKHACDCKHUUFPAW");
    tmp_tmp_msg_0_0.attr_type = 118U;
    tmp_tmp_msg_0_0.min.assign("IJWYTLXYYNKKPIUCJNLIRMOLMYRENSXGWJCSSWVARNRMLSJPFZBWSZSHEOEHDYTZCSNVGJADXCYLGGEMKDZTEFBIG");
    tmp_tmp_msg_0_0.max.assign("QJYEJNRJWRYYUTWSXWPGHBQCGYOCGJFKRGHXQRSFTTIIBCMJNMIEMQBZRNMSLUIRVMBQLNKLTEZXFZECJSSDQIOWKDCVIGOOKPRRHOOGWKVUAEDZBADVRCISVCIWDSGLTNXFHAZ");
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
    msg.setTimeStamp(0.14791301129452583);
    msg.setSource(1035U);
    msg.setSourceEntity(101U);
    msg.setDestination(50793U);
    msg.setDestinationEntity(162U);
    msg.op = 39U;
    msg.goal_id.assign("CGLHXKBNVLGZSRIAQBNVANLUTDXIMSEZIKPFCNZKSFXXFWRJQEVOISZHWVCYKJYJGYEZRGLSLUKRBTZWUGDXUEFHZQPQLDTHTTMEAMQKFO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MVWROENPRNMTXQJXPFKJJWBSAEJNSETGALSWJHLUDWTXXDRFKEZIHQEUVWGSCMORUBRWLLUJVKUFLROYGBOZTIXZPHEUFTNKTMQLBYZNVLSKPVCCHB");
    tmp_msg_0.predicate.assign("YDOIOZIOJFYQUISBUSICQNZMQNAWDTKYVCXNIUHCXJEWYYRAULXMDRVSKNMJLUXYSJKENW");
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
    msg.setTimeStamp(0.21800143261107785);
    msg.setSource(15319U);
    msg.setSourceEntity(249U);
    msg.setDestination(63033U);
    msg.setDestinationEntity(96U);
    msg.name.assign("ZUZREVQUQOOIODKECJIISQNXDKVCVYSJFLEMHWUKZJHXWBSXRMPQDTSAYHJDRLZLPDBPXITCXEEGNWCZEYKZSVQBFHVPLRWGMWBBCCSMQOJXTZRWCKMXSKVYOAGBNWLEIQOHARUNYIWMGKBURHFTKJVLAIOBMPTYUGVXPYNRKQAJMILZTFEUDJDHDTGIFOUAELNNKNQSJAAAGUEYFQTHDFVHPPPXCBAYDIVTNZTGFHLORFWFMWNYZUBROLSC");
    msg.attr_type = 109U;
    msg.min.assign("QSIYAXUAZDWNHHZTYQEQJFIZUKACAWOSCTNLRDOCJGXJGBAHMCCQRFNEXGXZNCIRRWKAUWSPMPVDAAHEMISYMVZJJORSLQTNCMRSBNPR");
    msg.max.assign("HRIRBMVZAOTSJVPHGKBFHULWAUIVZBSFZWAWZXWJIRJSNSMYYAQULGHEMQOTNIOFWPYEXLXDTRCUTJNDSQIIURMSBVJEKDNEMVAYHCPZDUNFDGOXQLWREPPWXUIXQDYZOSRQBYJCZEKFAQYXZRIFFTRPOKVZHQNTLGBGVHLTFHVTMBTMHCBOFKNAJWGH");

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
    msg.setTimeStamp(0.42445178562445574);
    msg.setSource(22265U);
    msg.setSourceEntity(159U);
    msg.setDestination(41426U);
    msg.setDestinationEntity(46U);
    msg.name.assign("HESUBYLNOWSEPZKWBZMJRMGSDVKTPDVQQZHVDTY");
    msg.attr_type = 142U;
    msg.min.assign("XRNEVJJLXSFUEQWTCWEPSPKVNBQSLFLTVSDMYDQUTPJZWRLVNHLDAHGVROSNXHTRYOPZNOIHIRFZJBBFF");
    msg.max.assign("FKIJMTVRBOTCVUHJMZFCDWYYZEBQIMWFSGZYAIITOLELWSPXEBQPKXQSEKVJTCRXFZPFSWEKXPCGJATXHUOGDWZHGVLAAKSDBARMNBDWOWUEXAIRLYLBZFBEJSNIGKOHQYZNQQYGOJSCJTNBLRSKHMLUKXGXAPDYFIPBACRTPVUWGGLEPMZVIRUVSAYHWTHPOV");

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
    msg.setTimeStamp(0.03728193350326048);
    msg.setSource(1150U);
    msg.setSourceEntity(238U);
    msg.setDestination(14771U);
    msg.setDestinationEntity(216U);
    msg.name.assign("IJMPLLFFBNFACBVYTETSPORGJRBNHNWWQEUSGHICELREUOCKCFGOSMYWZXFDQPWUXMQHVMPOKHETQNCBMEXRAGHEYUHAAINDZUKRRXZOXGQPFXIZAJSLFCJZPWKMYVDCOLAPLLNGDYOJSKAVNRSRDMDNFVXYURIBYYJMMX");
    msg.attr_type = 201U;
    msg.min.assign("JJDATVBMARULDRETZENRULVMLIEDGQLQBGFKDYAENXXPQNWVSGPVUNNYXPDVJXHMOGVPFCFOWCHFHTVLDIUZASSBMIICIKTACHQYJAQETJRYROZWIJJURQIEPKKYEANCMBJLZISBBDVNSGTFSINUFCSUKHNPGCVOYXHEDOMNTOWGWHUQYSZUZPFOGGZIKUKPLARKCDYTRFKJWAWXXQBWLZGLWXRXJHMRMOFCZBCEVEHBYFWLKTTHPQYA");
    msg.max.assign("UJNXWBHLEKHAWXCKXLDXRVVBCTYTCKAVTDPGNLAXALIORMVHYOWDFHYBZOMCFEWNXCJBQQODFNYEOSUNMMKQYZTQWQNZJXKJBHZIGURTMSNZSEGZJTVSPRBTGOXFZLSPMEHQYJOHIWJUMQDAYTNMBKXJSQVIRGTSUWOZQYSCKJGQUIXNVIELFLFUGVZER");

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
    msg.setTimeStamp(0.6263843722549692);
    msg.setSource(27219U);
    msg.setSourceEntity(220U);
    msg.setDestination(22807U);
    msg.setDestinationEntity(129U);
    msg.timeline.assign("FHFCALTRCMYQNUTUTDWPRTKFTLGHWNDQDVMAZKCMRBGZJYHJAYJYKXVAQWXZCQBAGBPWDVOEBLCFTBJJIXXAFDIUSKAEIUPTOQZKFGZYZNDVWVELIPMXESBCBLFNSVQVDNPONGSGIHIPMSLUGQHZWNAKMREBXJJHJNWLRJRWXUHEEYVSCGLMQAUKJTOSICNQDSTZOHWIKFSMBYYUUXAORPNOMCLFEURYGVOORYDLGI");
    msg.predicate.assign("KHWREBYOJETASJSMBVXBZJGRVSDUUKDCPNLACCJRETJFUEURNKTBHLAGVIUQMIXMYQZBZWXHNODWPNVVOFRETKZIULIEKGWVJFORNOGCUFHXQBIIQDYTVXJGGPQJTLPKYBVKNYHRPSMXMCAEAVDYPMQLTUQCDLANEXIWAZFMSDGHQZKWDXPHUFWOJZSSIEYFNJBGZIWYKPOLMFB");

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
    msg.setTimeStamp(0.21150039405034204);
    msg.setSource(41031U);
    msg.setSourceEntity(104U);
    msg.setDestination(28652U);
    msg.setDestinationEntity(201U);
    msg.timeline.assign("KQGGLAQVADWCOGYYDTPJGDRHZNAYXRNMQWBTIRFLHBJLIFFXVZTBZPBELQFEQPZEXVGNCMFMPXWTY");
    msg.predicate.assign("VDFVBRYGYQOMCLBHUVYNSRNKTRYATVNCYYTGLEFBSMOGHPRAMOAZGEOCQKHVDKPLAJRNNXECVHFJ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("SXTBDRMOPQEYECRFQNLTGMEQDOMPGKJHJFQHZUOVZQKPDURZGCNWMIPEKNFUUFWDSVPSXCLHPHYNARBVN");
    tmp_msg_0.attr_type = 187U;
    tmp_msg_0.min.assign("VIJLAFGCDEMDHUFRLPUPTVMRNNXCELWUNTSTEWKVJDHADZXOOSUKSZUVHZAZWDUCWSMJKIZBOC");
    tmp_msg_0.max.assign("HMZSYZSSAQRULZBTUEUZPKYQCJIIPJBMAKTFNZ");
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
    msg.setTimeStamp(0.6441932605757781);
    msg.setSource(25531U);
    msg.setSourceEntity(125U);
    msg.setDestination(28210U);
    msg.setDestinationEntity(42U);
    msg.timeline.assign("CTMZFKGACHLSQHSVWHKXGXEYUHKECANPTBTRJJWVFTCFDRXYOUBARMLJNGDIORVWBALKEMYZTQZLMWHMKACPSGGUUDVUOQBKIQXXLUVM");
    msg.predicate.assign("LPHMPTTRBKGGIEBAXYSZTMRWMZCGMVDOCHDVXYOQHHUDNCKRZGSAEZNBRSKXUAAUKWBXGHKCWLEAIBPZQOLGHRPCEIAJUUOHJJKPIOGPMNTLYCYWELXYVSYXWRQXWEGYZQNWGFFNFZZWDZQGSBLHBJVLOQQATNQWQCUTRBIRDODDJKAYPDUPEFCSNOEILFSNBTKRPXVANHKXACJFLIJDPUVWFFILJ");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("FMIHLSSVJMJGMYXKNPVBLJEFMXLBIAGNNPILROREHJGVFXUBJUQHCBRFFKSRLOGEYJCETKKRDVXOJNYWCPZQSAABYMMCPPYDBATPGUXYIVWWIKVZHCZRCTIEFDIKOLOMVDFTBGCTKDECEIQPOMOXXQTTVYMFSCAZJOUTALQWUSAZDZEFHDNVRTSNKNOHWKFLJRZ");
    tmp_msg_0.attr_type = 246U;
    tmp_msg_0.min.assign("EISADKCROIGRQITNZZLJWNBBYSEOBVXEUCWSNMIWCHXTBYLCGJZNOBQNTYUTXZMCNOCGRVRHZIUKLJMQLHEPNDDOSFKXXVAYJHJLFURWFCSQEZYDUTKZRMUSIGQYAHXBHOZNOBYRFBPCMVVLHPDRIWQFEQTMPRNUEDZXXEFGBVPKGDRCLSHFGNGTITAAKLSMOOKHQLWIQWTGKFOVWVLVVGMJBJP");
    tmp_msg_0.max.assign("ZSTNKLZQQNSFDDBSUPCRCJICKMZNQVANKQJHLJVZQKAXXKIJTCRKWDWJFJUBNUVIBWOMPEGXSBZHXZZBMPXVWE");
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
    msg.setTimeStamp(0.9698998889739308);
    msg.setSource(51080U);
    msg.setSourceEntity(139U);
    msg.setDestination(48643U);
    msg.setDestinationEntity(155U);
    msg.reactor.assign("TQPRGSRBHAHDTCCBECTXHLUVYGMZUZNGIYHWCSZLAUTGCXUQXDFURYNXOGOKBVWAWXAFQXRNSKQTPESXDNYOKGCQJVWFFXFQIFECITBMEKBRJRJJSKAPXVLHWPAILQ");

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
    msg.setTimeStamp(0.2829364129252654);
    msg.setSource(36073U);
    msg.setSourceEntity(141U);
    msg.setDestination(41347U);
    msg.setDestinationEntity(123U);
    msg.reactor.assign("INPKYBRVFYSNWEUOINKGZJJHUEJSQJMRWPTGICHZJOJXMXNFRYBCVGNTKI");

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
    msg.setTimeStamp(0.43064506690674176);
    msg.setSource(14668U);
    msg.setSourceEntity(226U);
    msg.setDestination(16359U);
    msg.setDestinationEntity(215U);
    msg.reactor.assign("WXHMBAGKHAEEUIZNMJSCYSHMCLWDIPPSYDUAUFKPBVHNGBBWOKVGPJRSHQDGNYMEEIECRJYQIMGVCPBA");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SWEFXLCOFDJUOODOITWJTYNJZRVUQFCWDSATGWYHHCVMRAXSBATSIWQRWCVYXNXWNQIFGOBZTEMPCUHZANDFHMYNWKLEZGQBUVMCSLVIVFEYACMIIKJHHPTUDRQYIYIBLHBCNJLLDAPFPVFPGYLVOEKPZJKPXZRTRQBRIXFMMKXPTLPDJAYKXRUGNGQKRBMKUHJQCPNEBMAZNDXJFLVUJOVZMSXUGSLAGD");
    tmp_msg_0.predicate.assign("DLPBYEYVXUNIRZEKHRCJYHMMFFISDYPWZVYPVTNZMQFCMZXOHFVQBGWHHTLDYDZOCGNCYHOIWITTJHEMWKJXIVKLFWNOF");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("VOEJRRIJJDBJSQVUUGFJHFLWNOOXCKTUMCIMNUNHEPRUKHATZGWULUQCIYGBICNKESXFGDXJMYNLRQBOASZSPTOFZECKYMYKFLLQFJTIGPABHJRJKZPZYWTVZBRMFOXWEVLELDXTGZVDGUJCZGWQAZYXQQKDPKBPXQTXXIMVIYPDLSYVNRKA");
    tmp_tmp_msg_0_0.attr_type = 189U;
    tmp_tmp_msg_0_0.min.assign("CGAVRVTBYVTAITKHTZWECYQEMADDNYVTIXDKWQQTSTYNCBAJNUNZZSVZHLTGCBOYGOMFKLFUZDUBBKJDKOLWYACVEW");
    tmp_tmp_msg_0_0.max.assign("QBLFMHCVGYBQPVMIBATVWMESTXARDUHHNXVKOZTCPRXJQGVPWJAJWOGVAFYOTIVKJTNUKPLDWZWMCSDHWSMEMWGNSQDRLZCAGLCCLGJDRCTPLQBUSAHNEBAFWQYYHOXKHNTMOFZIDIQDXPOOJCZNSURPTRKYLZXZUINBEQYQIFTJEFAYMQWKETSOUIYGJUSINEVUPOGFFRVBKDCBI");
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
    IMC::VideoData msg;
    msg.setTimeStamp(0.8715836897911573);
    msg.setSource(33632U);
    msg.setSourceEntity(5U);
    msg.setDestination(61285U);
    msg.setDestinationEntity(244U);
    msg.id = 231U;
    msg.width = 8776U;
    msg.height = 34216U;
    msg.widthstep = 62992U;
    msg.channels = 153U;
    msg.depth = 98U;
    msg.finaldata = 222U;
    const char tmp_msg_0[] = {113, -48, 123, -95, 112, 11, -39, 105, -60, -28, 51, 99, -9, -4, -46, 48, -41, -24, 16, -45, 53, -10, -112, 118, -88, -17, 107, -67, 96, -21, -10, 74, -50, -116, 109, 29, -76, -6, -95, -124, 68, -60, 40, 79, -76, -104, -53, 116, -84, 83, 97, 49, 80, 99, 119, -5, -10, -37, -107, -81, -65, -47, 40, -33, -97, 124, -7, -7, -36, 73, 71, 85, 67, -126, 111, -74};
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
    msg.setTimeStamp(0.28671736699787287);
    msg.setSource(50026U);
    msg.setSourceEntity(181U);
    msg.setDestination(34999U);
    msg.setDestinationEntity(216U);
    msg.id = 113U;
    msg.width = 22753U;
    msg.height = 8391U;
    msg.widthstep = 36748U;
    msg.channels = 115U;
    msg.depth = 50U;
    msg.finaldata = 55U;
    const char tmp_msg_0[] = {23, -99, 41, 42, -31, -42, -59, 50, -121, -126, 54, 55, 16, -112, -39, 63, 28, -95, 86, -42, -109, -60, 122, -97, -70, 53, -111, -116, -33, 1, -18, -76, -16, 66, -70, 74, -35, -32, -2, -66, -69, -10, -21, -79, 72, 88, -34, -115, -13, 38, 103, 97, -122, -118, 64, -49, 109, 32, 1, 72, -98, -38, 73, -19, 11};
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
    msg.setTimeStamp(0.2643031157991165);
    msg.setSource(26939U);
    msg.setSourceEntity(166U);
    msg.setDestination(6226U);
    msg.setDestinationEntity(133U);
    msg.id = 36U;
    msg.width = 51815U;
    msg.height = 23101U;
    msg.widthstep = 54486U;
    msg.channels = 216U;
    msg.depth = 7U;
    msg.finaldata = 47U;
    const char tmp_msg_0[] = {-27, 33, 118, 79, -112, 66, -52, 86, 109, 87, 15, 96, -66, -116, 29, -31, 38, 92, -107, -58, -9, -120, 61, 109, 48, 38, -64, 105, 92, 12, 26, 80, -112, -127, 34, -29, -67, 99, 42, 59, 26, -40, 42, -123, -126, 78, -48, -4, 55, -11, -84, -78, 7, 78, 106, -9, 96, -16, 118, 102, -11, 71, 18, 7, -77, 21, -29, -71, 68, -37, -74, -60, -46, -81, 55, 18, 53, 23, 60, 86, -21, -101, 107, -121, -108, 55, 107, 105, 105, -109, 79, 21, -51, 39, 53, -2, -119, -113, 122, 60, 33, 26, -101, -58, 82, -89, -1, -13, -106, -120, 66, 74, 47, 16, 92, 102, 87, -21, 54, 110, -86, 116, 52, -126, -90, 31, -111, -28, -88, -119, 18, -11, -31, -106, -119, 62, 97, -125, -75, -102, -106, -1, -29, -122, 42, -108, -63, 7, 52, 125, 64, 27, -37, -8, -101, -119, -29, -20, 111, 126, 50, 48, 109, -79, -31, -87, 98, 114, 72, 61, 40, -16, -50, 114, -32, 43, -4, -125, -101, -75, -15, 72, -20, 95, 105, 89, 40, 71, -18, 47, -50, 89, 65, 124, -34, -12, -110, 69, -73, -47, -60, -81, -126, -47, 58, 26, 56, 66, 102, -122, -94, 12, -73, 2, -24, -19, 123, -6, -14, -83, 28, -113, -80, -82, 34};
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
    msg.setTimeStamp(0.4459569916977796);
    msg.setSource(28895U);
    msg.setSourceEntity(230U);
    msg.setDestination(58009U);
    msg.setDestinationEntity(136U);
    msg.width = 15749U;
    msg.height = 38227U;
    msg.channels = 209U;
    msg.depth = 253U;
    const char tmp_msg_0[] = {-4, -80, -31, 123, 102, 27, -66, 4, -61, 88, -7, 66, 98, -88, -124, 62, 123, -8, -109, -45, -11, 9, -37, -29, -37, 108, 8, -115, 123, 74};
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
    msg.setTimeStamp(0.2130801442918404);
    msg.setSource(18031U);
    msg.setSourceEntity(128U);
    msg.setDestination(56940U);
    msg.setDestinationEntity(182U);
    msg.width = 5147U;
    msg.height = 20191U;
    msg.channels = 237U;
    msg.depth = 92U;
    const char tmp_msg_0[] = {-80, 29, -15, -71, -128, -98, 120, -107, 10, -101, 76, 83, 50, -95, 83, -75, -88, 63, 29, -125, -88, -76, 52, -3, -99, -10, 2, 41, 83, -59, 65, 110, 21, 87, 117, -113, 81, 71, 96, -50, -51, 88, 73, -8, 25, -125, -111, -117, 54, 114, -13, 81, -128, 10, 95, 37, -44, 111, -120, 40, -46, 48, 35, -87, -91, 119, 53, -34, 36, -18, 37, 70, -19, 41, 13, -103, -94, -120, -102, 88, -99, 126, 51, 29, -113, 76, -86, 101, -46, -116, 73, 13, 124, -4, 14, 71, 20, 32, 8, 25, 113, -3};
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
    msg.setTimeStamp(0.9415238308952071);
    msg.setSource(36271U);
    msg.setSourceEntity(180U);
    msg.setDestination(49969U);
    msg.setDestinationEntity(147U);
    msg.width = 2895U;
    msg.height = 44467U;
    msg.channels = 92U;
    msg.depth = 184U;
    const char tmp_msg_0[] = {-9, -116, 50, 35, -127, 49, -65, -105, 61, 65, -54, -39, 116, 107, 113, -55, -97};
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
    msg.setTimeStamp(0.055604407418896495);
    msg.setSource(27161U);
    msg.setSourceEntity(24U);
    msg.setDestination(8807U);
    msg.setDestinationEntity(122U);
    msg.frameid = 12U;
    const char tmp_msg_0[] = {-122, 57, 71, -85, 47, -21, 40, -111, -9, -44, 93, 94, 52, -65, 68, -11, 95, 31, -90, -81, 114, -37, -116, 51, 61, 95, 125, -89, 5, -46, -106, 126, 49, 21, -34, 48, 114, -112, -122, -66, -4, 62, -109, 103, -44, 34, 32, 62, -66, 125, 96, -123, 31, -2, 118, 103, -81, 67, -22, 93, -127, 9, -96, -65, 124, -105, 33, 110, 3, -46, -12, -53, 46, -118, -4, 65, 37, 16, 43, 55, -117, 106, 35, -109, 39, 87, 30, -55, 24, 55, 95, -105, -97, -9, -74, 22, -76, 114, -71, -108, 72, -67, -115, -27, -12, 101, 112, 82, -10, 33, -86, -68, -33, 26, -42, -115, -8, 16, -43, -92, 63, 43, 124, 55, -4, -105, 58, 23, 67, -74, -109, -52, -74, 49, -95, 111, 96, -10, 10, -87, -87, 30, -97, -29, 73, 11, 123, -89, -84, 79, -56, 68, -84, -126, 1, 21, -28, 70, 87, -94, 113, 92, -54, -105, 63, -60, -66, 5, -30, -3, 97, 27, -59, -95, 59, 3, 28, -35, 76, -2, -78, 32, 31, -120, -7, 8, -82, -12, 56, -77, -78, 81, 32, -24, 10, 42, -32, -8, 103, -58, -121, 69, 20, -6, -16, -39, 5, 41, 121, -84, -49, -124, 68, -81, 82, -35, 3, -70, 29, -62, 93, -38, -77, -67, 9, 50, 88, 120, 111, -122, -18};
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
    msg.setTimeStamp(0.9007190304578959);
    msg.setSource(53154U);
    msg.setSourceEntity(207U);
    msg.setDestination(48072U);
    msg.setDestinationEntity(105U);
    msg.frameid = 143U;
    const char tmp_msg_0[] = {-45, -2, 91, 119, 105, -127, -73, -49, 85, 46, 28, 60, 100, -119, 99, -96, 69, -114, -123, -81, 46, 108, 12, 76, 32, -52, 27, 69, -21, 110, 105, 33, 88, 64, -14, 71, -7, -52, 77, 39, -15, -99, -111, 7, 120, 29, -46, -43, -82, 65, 68, -63, 72, -62, -70, 29, -53, 94, -98, 28, 50, 73, 55, 50, 64, 54, 17, 75, 117, -62, 55, 7, -59, -8, 48, 124, -111, -48, -60, 70, 46, 7, -68, -28, -59, -23, 119, 49, -32, 19, -108, 3, -58, -94, -57, -77, -100, 111, 106, -86, -64, 36, -50, -29, -21, -1, 25, 106, -4, -111, -102, 43, 121, 9, 73, -14, 90, -50, -92, -112, -60, 41, 26, -116, -84, 11, 18, -96, -35, -67, 92, 18, -47, 122, 9, 56, 92, 81, -17, -36, 122, 114, 121};
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
    msg.setTimeStamp(0.8968744279130285);
    msg.setSource(11257U);
    msg.setSourceEntity(123U);
    msg.setDestination(305U);
    msg.setDestinationEntity(99U);
    msg.frameid = 4U;
    const char tmp_msg_0[] = {-63, 54, 109, -118, 82, 36, 120, 24, 64, 35, 10, -39, -24, -72, 85, -88, 65, -88, 69, -14, -112, 122, 76, -72, 46, 72, 82, 38, -96, 63, -18, -29, -125, -65, 112, 7, -77, -28, -8, 120, 68, 104, 93, -29, -36, -65, 49, -87, -52, -72, 74, 100, 25, -43, -38, 116, 24, 107, -110, 7, 120, 42, 86, 53, 76, 9, 9, 30, -30, -12, -67, 64, 88, 118, -47, -44, 61, 81, 125, -58, 99, 64, 40, -13, -23, 100, -65, 3, 71, -50, 37, -37, 8, 69, -81, 41, 74, -22, 114, -105, -89, 16, -88, 2, -44, 60, -36, 44, 7, 77, -100, -1, 121, 84, 71, -104, 7, 61, -123, -108, 28, -5, 55, 122, 75, -82, 45, -115, -88, 101, -92, 7, -64};
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
    msg.setTimeStamp(0.9013026035201793);
    msg.setSource(18604U);
    msg.setSourceEntity(229U);
    msg.setDestination(53U);
    msg.setDestinationEntity(240U);
    msg.fps = 120U;
    msg.quality = 25U;
    msg.reps = 100U;
    msg.tsize = 163U;

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
    msg.setTimeStamp(0.23313276073921063);
    msg.setSource(25634U);
    msg.setSourceEntity(74U);
    msg.setDestination(36875U);
    msg.setDestinationEntity(37U);
    msg.fps = 11U;
    msg.quality = 240U;
    msg.reps = 140U;
    msg.tsize = 40U;

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
    msg.setTimeStamp(0.45382748699841835);
    msg.setSource(32992U);
    msg.setSourceEntity(32U);
    msg.setDestination(62684U);
    msg.setDestinationEntity(192U);
    msg.fps = 166U;
    msg.quality = 17U;
    msg.reps = 207U;
    msg.tsize = 160U;

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
    msg.setTimeStamp(0.12822585263254405);
    msg.setSource(14440U);
    msg.setSourceEntity(64U);
    msg.setDestination(62450U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.4633325891311165;
    msg.lon = 0.8997927966904494;
    msg.depth = 41U;
    msg.speed = 0.8380831586070501;
    msg.psi = 0.038934383860360966;

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
    msg.setTimeStamp(0.7287107423038919);
    msg.setSource(17851U);
    msg.setSourceEntity(101U);
    msg.setDestination(55927U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.9989232173085025;
    msg.lon = 0.6359002757149887;
    msg.depth = 29U;
    msg.speed = 0.1914288919955055;
    msg.psi = 0.8861730026633583;

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
    msg.setTimeStamp(0.2625549203971721);
    msg.setSource(59294U);
    msg.setSourceEntity(209U);
    msg.setDestination(43894U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.7993184917264187;
    msg.lon = 0.03200229366477991;
    msg.depth = 115U;
    msg.speed = 0.7481411341761744;
    msg.psi = 0.22900826336766678;

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
    msg.setTimeStamp(0.31483919787675174);
    msg.setSource(19496U);
    msg.setSourceEntity(254U);
    msg.setDestination(26032U);
    msg.setDestinationEntity(75U);
    msg.label.assign("MFPMLXYAEIIAWGNKLUHLZUQWRXPQROXQRWOJDDKPXHFRGLSJCZBZBAZIDSMHTISKFOJYKYJYPLWWXRZMRCIBDYRSZXFFDVSPDYCXBLBTGLTWTINENYFDBEMRDKEYRLHEGAWSOPCAGANUHOSVVCQNBNWSUCZIKMOAZAVPPVBS");
    msg.lat = 0.7123034582635837;
    msg.lon = 0.5108316508482701;
    msg.z = 0.09184447946178231;
    msg.z_units = 34U;
    msg.cog = 0.11923799663392032;
    msg.sog = 0.7432209309104619;

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
    msg.setTimeStamp(0.5846682763593783);
    msg.setSource(3139U);
    msg.setSourceEntity(217U);
    msg.setDestination(28814U);
    msg.setDestinationEntity(239U);
    msg.label.assign("UMJXXNEIQJLJBBWIVVWMKIXQCRLYCGFKRZSMJ");
    msg.lat = 0.07353769930515552;
    msg.lon = 0.9985489356588844;
    msg.z = 0.8996479021921095;
    msg.z_units = 2U;
    msg.cog = 0.3273989080625832;
    msg.sog = 0.5190459758825323;

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
    msg.setTimeStamp(0.6538830806720751);
    msg.setSource(31554U);
    msg.setSourceEntity(93U);
    msg.setDestination(52613U);
    msg.setDestinationEntity(212U);
    msg.label.assign("LJSOFGSJLPFNQSDLWBHVFBMOZWAVEZKTIZVKLRQUJIYOHVPCYWCJRGOUHNYSIXFJIKQBIDVGQNTIGOWDWYCGLTGPKJFJQWHLEUBMTTSDRNSLRQTSRKPNZNPEDLXARAXNAHMGEEFJQBCNQYCSERIDDKVMQCDPHZAMXYXTNYBOVZUHTZJLWCVKECZOYGKYUYKODHGFS");
    msg.lat = 0.6113648166852784;
    msg.lon = 0.36537887061411445;
    msg.z = 0.21360555859720343;
    msg.z_units = 78U;
    msg.cog = 0.6780349352648748;
    msg.sog = 0.24314816469325007;

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
    msg.setTimeStamp(0.2936631450762185);
    msg.setSource(63743U);
    msg.setSourceEntity(111U);
    msg.setDestination(38029U);
    msg.setDestinationEntity(20U);
    msg.name.assign("REIEMNSWHPHCMZMIKDBKGHCXRZQYZSTCAXEZGYVOCNBHONL");
    msg.value.assign("KKNLMTHTCFWEPOJLZBQHOFJTSRLELHZGRQRZQELRZVVNNUGIDZHADVPQYHZDBEVWKXMPYCCVROYDJQXTNJGBRYDGAWMKCDUWQRSHLIKGIBKC");

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
    msg.setTimeStamp(0.896809900543349);
    msg.setSource(2922U);
    msg.setSourceEntity(32U);
    msg.setDestination(59910U);
    msg.setDestinationEntity(131U);
    msg.name.assign("SJPGCLUXGKRASFLBLWTPRHOVDFKGICMQSMXJFBRKCECBNMTVMZJVPYVBUIOAHGOWWRGYXQSKLZSEFGZHNGCXAJITETHRBBPRDQIPXVMTEMOHVWBYZDJJWIDZZWTLVAGRDATNXYONHKKDHBZUAKFREQOOJP");
    msg.value.assign("PIFMDYCYIHKAIVTTCRDWFVUNRTYNIXBHZAUJHJRYOUWLHSFNCXTLVXSGIFBWTWSPAGUMALIJOUWXTTUGRGOTBXQQSMFHPSBSBLNEZVZXKANGYSKGIPLFEUCYYROKJYQRRCQOEOEBJKYLDXQNMUZLDZDBBCYMLPVXPZKQCKPNHZCMURAIVESVJAQESDHHVLFTWRJXJDVGOOABMVSUWHJEMNIC");

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
    msg.setTimeStamp(0.7552902346702218);
    msg.setSource(52116U);
    msg.setSourceEntity(28U);
    msg.setDestination(55250U);
    msg.setDestinationEntity(203U);
    msg.name.assign("BLHEAFJLSZSFNQYXPGWFONCWVIRBMOONTLDLNFZRCYGFHEEWKPXDZZCTQDHVWTTECZWRUHLVRIJAYVAEIMJWDUTPOBWTMXLDVLKIRAFOUPCABEKSNYWZCIGIHYYNTJYFORJUGAADXUNJYUMXPSHZGAMIQOSDDZXJRCQBBUKJVKSXBKZQGPKNWQKGQEVXHSSFAGTPCLNIAVEVHBULVIDSFMYGKPCBDTJKHMXXPLMQHU");
    msg.value.assign("SLAGZXUGNSAXZKPBVCIKSYKIVDAWGFNEVTADCQDRECIMUNCRUWHPMZACPRGOKWIMSJTMBXSMZD");

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
    msg.setTimeStamp(0.9144926985026689);
    msg.setSource(35788U);
    msg.setSourceEntity(242U);
    msg.setDestination(55068U);
    msg.setDestinationEntity(230U);
    msg.name.assign("UGVPEGYQUGMGIYINHHTHODLFCLHIQPFQGZXVSEABBPIIMVCGBBAVVZPFVYZTGKDEPTQNEETWOOCZLITFRCBFLTJLILWDXIMRPZZZEQUUYLCWVSIBYAKRRSAVSHDNMXVKDHXHXUFLYUQCWUQPEXKFZSNJWYEJWBWJBMCNPHBKTDXKCXXEOJASUEJMZGNRGQNT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MJSRZOLKKKHLXIQNUARJSHLBOMHVFETPRRWYUVOYJTJKWDEZQDHNROTRGZIKTUALNMFFFCQBASXUURTONRMLKQYTAHPNCOEZTDCDWOULLKBINCOTNHHGQOAVPVIYCZZJIASPBQBUMCKAISGWRXGXSGFKPGZWYVZYEKFWQSYEYFTMPXMJDZCJWHHMPUVJEDEVGXQ");
    tmp_msg_0.value.assign("MOFAHTELADTPWXMBEGACWILQYFPYRYBVRYHJODBAMTEKNEYUSHDUTFCXQCKGKPSMENSRTUAQUXESBKFJJWKLGOGYZXDXCAPZZVQVZIWQAUTMPVFTVVNPNEDDWCVIJXHMOG");
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
    msg.setTimeStamp(0.6501840417053776);
    msg.setSource(54691U);
    msg.setSourceEntity(148U);
    msg.setDestination(47393U);
    msg.setDestinationEntity(181U);
    msg.name.assign("JSSUHJQCICOKGFPBAFJJEUBELHIIYQRLDEVNKZYYPLXTKABJFCNRRHKEGNKCBXLXYAZFUECDBZQGMRGFXMEPUROVWANUSXNVAIVGDOYYVWNOKWQZULZOQPQAHMKOMHSJVTMWMXIGTNJFBDSDCAEKAMODMJRTTVTDWBQVZLIVXLMTBQORHKQJXSCOLAFMVLFDBLFZNGDEQNPWSPNPTZWEGUCGOKUE");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SQJHMSMBALHMKHOONVIWJJRVYHOOZRDPZFOYNXLVMNQBIXYAGGWFBXKWAZHCUDJTMVABOAGBEMQEBPROSIRDHPFMEDSVNHTKYGXJECCJHESFNTNQUCQGEIWBRRSYGKZWDQXAQVBWKCUEHVEGJOSDIUVFELPSWFTHVAQLTFWROYPCMNEZGGKCILDUNNAXNAIRLJPUPFITFDPVXTYCJYXPKLCKYMZUJKXFSBQZTRTIPRULUWOZZGL");
    tmp_msg_0.value.assign("HVCHQHGMPDPLODNYWAXBSPFSOJYMMBJCBAISKAFGGGTFWGRAUUYSPODTEJAYHIEGUPVXKKBOPWWGBCPLIPTFOYBLEQTLCWBUQUANFUZRCNQHLVJZUKHRLNZNKSQVSZJKMBWUZURDXWZSHVEAHJDXGINADDMXNCQQSZQBRVETOFXEDLVKYVJERGYCLMBAZIRFCRHNDLCXSPITFLIMTYZNUXGCEMWZFOQVWIVSDYQE");
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
    msg.setTimeStamp(0.4153560189879598);
    msg.setSource(20387U);
    msg.setSourceEntity(30U);
    msg.setDestination(63684U);
    msg.setDestinationEntity(213U);
    msg.name.assign("MVEJXKWYFJPJRKSO");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("TYAWRLVNKKUJWOHGHYYQNFGXEKSKTPIUWVIVZAPPKXELFBZCKNIU");
    tmp_msg_0.value.assign("HFRZBTMJHOSTPFYLDMATSPMDROLGIMKIIYRRPLSQTAMKVUFWXIZSYOAYUCNWNZAXGBGU");
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
    msg.setTimeStamp(0.11725732540236988);
    msg.setSource(44085U);
    msg.setSourceEntity(188U);
    msg.setDestination(24411U);
    msg.setDestinationEntity(146U);
    msg.name.assign("KYTQVMGTJOEASCGJVOZEEMOFFVPKSMJVGLYYQMCQJKNZAPXEVIXREHWDLVTLUJMZRXHMNXRKYHKYYVOAAPTWPUPBYLZTCOBHDPIENFDPJQHNIGXLQLYAILUB");
    msg.visibility.assign("JHPXGRINYUMKRUZNLQEYBGQNTSVFGNASXYC");
    msg.scope.assign("JLLSTRWYSEIQREKRDTMAPXLBQLSCVXZFTMRQFYWXVHGDRXMXOUQHHOEIDSHCYMVNLYUJTYVGTBFDPJKTRSNRJEGQAFBZCHUZNFJJDLIFR");

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
    msg.setTimeStamp(0.06419160009600355);
    msg.setSource(44614U);
    msg.setSourceEntity(179U);
    msg.setDestination(41861U);
    msg.setDestinationEntity(59U);
    msg.name.assign("SZTWXCXLSIKKDKEYGFBSASEUKCIXNBNOHEBHLGQVTFIGXWVJUANGNQZTLXFYMJFPDXZPGQIPEEMNBJREKCYAJWRJQQEGEOXADSVLUHTCPSOQZPBHRZSHIYMRMSCYFFVKG");
    msg.visibility.assign("KATPEJSNWKEXIPRPXXCXZLUBGLQFCYZDIRBRGOVHJOJOFFXZUSPIEWSDNMCUFLWLTAZYMLYV");
    msg.scope.assign("TSUGUIKJLBEEIWSZMGDACPNVFRZHCJIAZOTTRCFSDFDZQBXXDJNJGOPWPMOKJTSJVEIRYCMBFBSTCWYDMBDTSRRTBUQHGACE");

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
    msg.setTimeStamp(0.2796225690791758);
    msg.setSource(25997U);
    msg.setSourceEntity(0U);
    msg.setDestination(27361U);
    msg.setDestinationEntity(81U);
    msg.name.assign("QEDDTGSZAWZVNFKXGTBYCYXIGSIYWYFKFCKSRG");
    msg.visibility.assign("ITZKNZEYCJZKWSFLUYUVYXHAAP");
    msg.scope.assign("NMMROUMUOERIVMNMLCNXRLBUFPKTZCHGOMXIVYDAJVWQSSYJEKJNUIYIDKHODBUACBKVXHPPGQKPNXWHHFEQESJWPSUMZTJHPLDOCAEJFTKLKHHJXLEYZT");

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
    msg.setTimeStamp(0.8150657911964041);
    msg.setSource(23775U);
    msg.setSourceEntity(246U);
    msg.setDestination(62364U);
    msg.setDestinationEntity(96U);
    msg.name.assign("QZNTWMBCKXKPITYWFSGTTYHSZNACQHFENIGLYDSUTJDGOLDXTAPOZSFUBTEVSMEMAQLWXVSNMOHEPDLN");

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
    msg.setTimeStamp(0.6223415672902789);
    msg.setSource(10735U);
    msg.setSourceEntity(14U);
    msg.setDestination(21155U);
    msg.setDestinationEntity(216U);
    msg.name.assign("IQERTLBHKVHYTAXUFPAVFPYOFBHWDDKKXTDCFNYLFPGBBNKIRAWZKDLTJPXZMMR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("FLFBQQPBBDXJNPPVGSEUMLYJOTSHPATUVKRUXLUNKZULWTRHQGCVJDVNWYSFUNNXRHIIQAQCVYZYKTHRAABPIACGMDWAPXWDUFFMSOJGGDLMEDWLFWISTHVEFCLMKGEFBBYXCIHYLEYTJXJKPGMGHNRWTIARDJDMHOFSTLMPXCABUIKSOZCGZYEFWNXSZVZWDOJROZQCCCMJROLKQIHEESVDQPP");
    tmp_msg_0.value.assign("QCOIEIHZIFKXSXPAZLVMOAMQBLJHEKQZSYVNEICADOOMDERYZXUTZNRVBLYUGGKDAXOHZALVQQRVTZEJQHLKUKBJVLFADRGIATKPODCUFWVFPBGPTXKEFGWTTUXCJRYTYWSUMCEMCBMVTAWPNRQYAWXDREGPYSSKWIEBCQZHBJJJNMYFSICYTSOXURKPHNGJUNXLPNTJUWSHXBJDQAFIELHLDCCSRVLYMGMBNHOKGGRFIHSFFIODZWNU");
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
    msg.setTimeStamp(0.024118313462220153);
    msg.setSource(11843U);
    msg.setSourceEntity(177U);
    msg.setDestination(20942U);
    msg.setDestinationEntity(229U);
    msg.name.assign("DHWHEZRUBFSNQDVAPYPUYFTLJJSQDOVPBQPLFDSZYOWGPDJVGNSNBAXGIIWQMIIHWZQOOQHUMQJSFPYKCIMSTJFBWYOXDBEZOGZWHCPEZCMAPNRTVQQJAHFIRTNUEUVYXCUYCT");

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
    msg.setTimeStamp(0.8542174540797653);
    msg.setSource(33859U);
    msg.setSourceEntity(159U);
    msg.setDestination(41311U);
    msg.setDestinationEntity(216U);
    msg.name.assign("SUQFZRPXQBXQNKZDIJNNBPXDBKNCVYJHQZNOOHLAVKHOYGEEAYSAMXDECYQECPHDLPJMIYTGVELTJTOQX");

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
    msg.setTimeStamp(0.68212485603388);
    msg.setSource(4662U);
    msg.setSourceEntity(189U);
    msg.setDestination(6718U);
    msg.setDestinationEntity(50U);
    msg.name.assign("EDIBCSYGDIQPCUPORMUERWVZCISHOOJGVSTAKBBCHOSEPUGSVYMRJUUMJZIJFGPAIHXHVQVQRZVPWDEANKWOCTJKBYMMBSQJCYHUIDYGPBLHRDWYXYLRFZGWFVQQQBNICNVPWTFOWKRMWDCETXFOZXKUTKLYSFJUZPAJPYOSQXKHHETONHB");

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
    msg.setTimeStamp(0.1868210481955519);
    msg.setSource(49481U);
    msg.setSourceEntity(110U);
    msg.setDestination(39079U);
    msg.setDestinationEntity(74U);
    msg.name.assign("OZYYUVXUQQKRCPXOSEWYKRLMIQUWNHWSQEDBFWXPZJRRFNALDELFIYULUUNGLYNHJKBSKIQESDVCUOEWNACTVLYQVTHUOTPNRNKGPTMHJDJZATQGKYBHEARQPYVXTBOZIFISEXVMAVKCHWPEIYDIRVYXAAMTLJFZEBSDOXDZIBGDJFBZXSF");

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
    msg.setTimeStamp(0.6664397878662903);
    msg.setSource(59364U);
    msg.setSourceEntity(213U);
    msg.setDestination(64764U);
    msg.setDestinationEntity(131U);
    msg.timeout = 1567220498U;

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
    msg.setTimeStamp(0.8578958401819742);
    msg.setSource(38114U);
    msg.setSourceEntity(12U);
    msg.setDestination(13492U);
    msg.setDestinationEntity(233U);
    msg.timeout = 1420872336U;

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
    msg.setTimeStamp(0.5718243691599867);
    msg.setSource(5319U);
    msg.setSourceEntity(100U);
    msg.setDestination(52241U);
    msg.setDestinationEntity(223U);
    msg.timeout = 960579567U;

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
    msg.setTimeStamp(0.008225673045186621);
    msg.setSource(10553U);
    msg.setSourceEntity(28U);
    msg.setDestination(47569U);
    msg.setDestinationEntity(16U);
    msg.sessid = 2667979148U;

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
    msg.setTimeStamp(0.3348586779423266);
    msg.setSource(35441U);
    msg.setSourceEntity(157U);
    msg.setDestination(15954U);
    msg.setDestinationEntity(185U);
    msg.sessid = 2026467960U;

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
    msg.setTimeStamp(0.4749478568372928);
    msg.setSource(46444U);
    msg.setSourceEntity(142U);
    msg.setDestination(56587U);
    msg.setDestinationEntity(13U);
    msg.sessid = 3487132976U;

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
    msg.setTimeStamp(0.027939956662603627);
    msg.setSource(25262U);
    msg.setSourceEntity(105U);
    msg.setDestination(27148U);
    msg.setDestinationEntity(231U);
    msg.sessid = 2155060092U;
    msg.messages.assign("SMFQIKRMEGDJHKZYOIGMTMPBOVGPSTUZEZRRZNFRUBPVHECFLELLADAWMWNVUTSKWQSPWQYBNSBECCXCAULVADEJNYNDDDYFZRHJHTRXLBJKJXGZWWHDBJLMATSQHDSCQAYOBESZXGIWAIZXXVH");

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
    msg.setTimeStamp(0.07165510369998229);
    msg.setSource(44183U);
    msg.setSourceEntity(197U);
    msg.setDestination(18699U);
    msg.setDestinationEntity(129U);
    msg.sessid = 4194631491U;
    msg.messages.assign("GAFHBCOUFJFGSRSBBAQIOQGEXHUMTHFQOLULPSPXDKCWNEUAUHDNWHJECYPUFHYLUVRTJUIXDEBVVWQVDZAVAALAYKYPCQXMMMBNXIDQIICWEUZQKQZJSYPVGVSZFGTYZSQJXUPDZXZGCRKFWWIRMSHFITHCMJGHKINLRMEKQOJSVZYRBNEXHBDLTWEBYAKCTCMOKN");

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
    msg.setTimeStamp(0.36040902024012844);
    msg.setSource(61786U);
    msg.setSourceEntity(41U);
    msg.setDestination(957U);
    msg.setDestinationEntity(240U);
    msg.sessid = 1369313309U;
    msg.messages.assign("HLHXNUHKXSNAKWIRLUNOUJZRC");

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
    msg.setTimeStamp(0.8030499744942066);
    msg.setSource(30500U);
    msg.setSourceEntity(95U);
    msg.setDestination(55508U);
    msg.setDestinationEntity(212U);
    msg.sessid = 549532919U;

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
    msg.setTimeStamp(0.5067273557519127);
    msg.setSource(62118U);
    msg.setSourceEntity(183U);
    msg.setDestination(47470U);
    msg.setDestinationEntity(156U);
    msg.sessid = 373446214U;

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
    msg.setTimeStamp(0.3839928506707668);
    msg.setSource(38784U);
    msg.setSourceEntity(205U);
    msg.setDestination(7461U);
    msg.setDestinationEntity(71U);
    msg.sessid = 1716494110U;

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
    msg.setTimeStamp(0.3885934788698747);
    msg.setSource(23547U);
    msg.setSourceEntity(166U);
    msg.setDestination(826U);
    msg.setDestinationEntity(123U);
    msg.sessid = 244217599U;
    msg.status = 96U;

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
    msg.setTimeStamp(0.8730983471943106);
    msg.setSource(1114U);
    msg.setSourceEntity(155U);
    msg.setDestination(12425U);
    msg.setDestinationEntity(22U);
    msg.sessid = 2310512041U;
    msg.status = 56U;

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
    msg.setTimeStamp(0.1607993741618523);
    msg.setSource(15932U);
    msg.setSourceEntity(83U);
    msg.setDestination(5820U);
    msg.setDestinationEntity(201U);
    msg.sessid = 1758264103U;
    msg.status = 250U;

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
    msg.setTimeStamp(0.8389743762507746);
    msg.setSource(14407U);
    msg.setSourceEntity(231U);
    msg.setDestination(58644U);
    msg.setDestinationEntity(168U);
    msg.name.assign("BJINWYQPUSQHQAIBCIIOXRIPXWQKGERVMPDGPUZBWKPZSOKYFTUCVKPJWTMKZRFWTUYSCGAADYBLXEFEAHNTKVBJANZDKBEFYHXWRUJLDVXUCIUTQAQHKIGCQEGRWHSMIYXTFEASYKCDNZMDHYRFQMJODJJWX");

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
    msg.setTimeStamp(0.16556422294117035);
    msg.setSource(60294U);
    msg.setSourceEntity(148U);
    msg.setDestination(7724U);
    msg.setDestinationEntity(234U);
    msg.name.assign("JRYPYARJQHUVLMBCBFEWJEAJSRBBGJIZYJCPXCCFXX");

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
    msg.setTimeStamp(0.2447319686922924);
    msg.setSource(57352U);
    msg.setSourceEntity(191U);
    msg.setDestination(13241U);
    msg.setDestinationEntity(163U);
    msg.name.assign("BOXZZYLHGEPBQXJIHIVZZNEXFTRYOJWHEBDCKFAWIOPFABJQCENOMKTFVVAOWEQVSDAIEXLPVOLQWEXKYUPYPNCAGDSFAALGFX");

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
    msg.setTimeStamp(0.8923431851124982);
    msg.setSource(62476U);
    msg.setSourceEntity(221U);
    msg.setDestination(63801U);
    msg.setDestinationEntity(128U);
    msg.name.assign("TTFAEHUPXGUBDUHXOYJPAHKVKDEXFLZJTVOLNVZFKUVVIBEMRTSUOURNKVSUJCDYBSCWCANQCIVMJTFWCMMTTUBXZMPWZIMNTFUD");

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
    msg.setTimeStamp(0.11556466108748076);
    msg.setSource(3299U);
    msg.setSourceEntity(33U);
    msg.setDestination(50223U);
    msg.setDestinationEntity(250U);
    msg.name.assign("GSMFWJVJKKPCBSUMEEUNAVXCPESOMYGNFVFLSUMBPWZPEUHFHWDBAVYOLTYBHLZAUHDPRFENDLZDHVOTPPPQCTCJQHKIZLRKARICDLSGARVQDCBAYVDKBXLHMLSTXYJGROZJDIBAQGZJMWHTHSROLCQIDUBFEIXNESTTMYKJOPNBIORGFLUIYYSPFWZXOTEBYXXNAGUXODWNQQJIRXNGKCNKQFCTVQJITHWAINEVVGRUJKXMMGOEFMZWRU");

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
    msg.setTimeStamp(0.30601737570687615);
    msg.setSource(40511U);
    msg.setSourceEntity(2U);
    msg.setDestination(22646U);
    msg.setDestinationEntity(197U);
    msg.name.assign("CPIQILQSUSMMYCWZDNPGRRGTEOJWNEZWKCVESDLUHJRVQPICZMEROYFEIIIMMDCNGAQPJKAVTMTXXNZUDYGLKIAJBOEBODHIEWSZFRXWQPJUQBUFTAHWJXCSENKWMGDUSOVPVATLUWAO");

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
    msg.setTimeStamp(0.5909317260042581);
    msg.setSource(26592U);
    msg.setSourceEntity(16U);
    msg.setDestination(14098U);
    msg.setDestinationEntity(187U);
    msg.type = 38U;
    msg.error.assign("NLCDMSPXCMIQPNLIQDJUDAFPIRGYBHTUJDQVBOGYDVGSBETETPAMMYDNVLHQCFLBRYWZGPRIZOFHWXAZVFXOIODXOBJCMYSCRMDTIKXEMTYAOFNEUHGBVZPEDAQLACQNOXCUYGEKVZAPHECKFJBRJSSJHUISPSZDJ");

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
    msg.setTimeStamp(0.8275787507671345);
    msg.setSource(32600U);
    msg.setSourceEntity(12U);
    msg.setDestination(2776U);
    msg.setDestinationEntity(85U);
    msg.type = 191U;
    msg.error.assign("TCMSXPGLQLKSFCKUCDKGIUTTXIVDKABWYRYQYEMPJMDYOZXAYNUQZHNIFVNPBPTFCWGWRYNRTMTCEZOUEHFKWFQDNAHRYHEXVQYXJPHMKOIDJ");

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
    msg.setTimeStamp(0.9710304580190103);
    msg.setSource(65446U);
    msg.setSourceEntity(222U);
    msg.setDestination(35993U);
    msg.setDestinationEntity(191U);
    msg.type = 214U;
    msg.error.assign("FAHUXXVZUAKPHGWVDQXZFGPNIXDGTRFJQJEMTMWHIKQIMBQEBSDHRACNBAWZLEOIYTAWUFESRZKMTXEALZCMJJPUY");

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
    msg.setTimeStamp(0.6478967119992487);
    msg.setSource(7538U);
    msg.setSourceEntity(41U);
    msg.setDestination(31682U);
    msg.setDestinationEntity(111U);
    msg.seq = 46195U;
    msg.sys_dst.assign("NEITILVCVXJLTDGLRMUJPDTUNZBKCKHLKZXJXFWEUVAGEVDIKRJEGLXQOGVBLRGGYPPFPMTAERDKMZCYWHHHQSQSUBBNIYFOARMALEMUJDXYUHYMQERFMTFRHMPAXZMSRVOALVAOJCIPLTABPIKQBUKZEYZDZJKZYRHVXZCQWAUNWRSWJIDWOYNISKDTOSWCLEPPWOTCSNGSXTENNIQDOBFGK");
    msg.flags = 89U;
    const char tmp_msg_0[] = {4, -121, 31, 80, 91, 93, 63, 40, 82, -53, 98, -12, 10, 115, -51, -126, 96, 15, -83, 52, 97, 25, 96, 71, -65, 33, -101, 9, -70, 74, -11, -87, 40, 99, -89, -48, 81, 91, -19, -35, 104, 99, -65, 33, -19, -11, 40, -69, -110, 103, -41, 29, -45, -82, 27, 76, 76, -58, -16, -106, 20, -29, 19, 101, -45, -14, -3, -105, -80, -1, -110, -5, 102, -65, -40, -83, -17, -23, -74, 74, -98, 45, -29, -40, -16, -98, 21, 28, -13, 120, 2, -78, -43, 46, -33, 47, 86, -117, 9, -39, 65, 27, -15, 114, 60, 60, -14, -99, 2, 92, -56, -116, 51, 59, -76, 23, -93, 64, -23, 113, 71, 56, 62, 86, -52, -29, -36, -59, 81, 106, -126, 85, 124};
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
    msg.setTimeStamp(0.7120136692963522);
    msg.setSource(56950U);
    msg.setSourceEntity(170U);
    msg.setDestination(50633U);
    msg.setDestinationEntity(234U);
    msg.seq = 6051U;
    msg.sys_dst.assign("BOKQCOSWYHWHBMXPQJXSYSDCQDATQWUZJQVHMVBJRODAKUIRMJLEAQNXJECOACDDRLPZUZPLDWSSQPFYYZWLBWRZBHMNFDOHZPPIHMIJCFIALDPIUNTFKFCJNKWFGTVZVIKJZITEGVXVLXYGPPTEZEOLOUWLGBPXSXTKGMUFAMLHCCRRIGQBAFTLXOSHEDMRXJZGYFVNYUVHAEBTQUNMSOTDCYKJNGWMVYCKTAE");
    msg.flags = 109U;
    const char tmp_msg_0[] = {15, -121, 21, -88, 21, 72, 78, 115, -89, 81, 126, -107, 52, 41, 35, -127, 116, -96, -91, -117, 38, 47, -127, -122, -87, -16, -44, 36, -88, 122, -74, 123, 89, -84, 99, -114, 71, 15, -124, 50, 118, -61, 43, -23, 69, -54, 76, 54, -44, -36, -27, -90, -57, 63, 64, 54, -112, -47, 74, -86, 2, -54, 103, 121, 41, 18, -112, -20};
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
    msg.setTimeStamp(0.1411036386406499);
    msg.setSource(29374U);
    msg.setSourceEntity(181U);
    msg.setDestination(2133U);
    msg.setDestinationEntity(120U);
    msg.seq = 57625U;
    msg.sys_dst.assign("OTNSJLQMMBCLVEWCCAPIEBCCZBIUZJGEMVLNGWQEORAWDOCAFZQIGUKDSSTCLRMBDKVRHGIFAEFPKAJKQZQXLRHDZZRDFKXPNXVYYUXUSJNURVYSXECXKEPIFGOYWVFJNTNJWPAXVLOITXORFEKHMFQSTWTELNDAXUTWJDZMKRHPDPNSDQYGIMLUSGHZYZWLKAOOLTYUOBVGQBENABBJPVXUYTJBIBMCSHDI");
    msg.flags = 111U;
    const char tmp_msg_0[] = {51, 84, -103, -42, -100, -38, 36, -111, -41, -75, 25, 105, -116, 71, 57, -112, 65, -74, -18, -96, 20};
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
    msg.setTimeStamp(0.59775233555417);
    msg.setSource(25138U);
    msg.setSourceEntity(123U);
    msg.setDestination(31892U);
    msg.setDestinationEntity(65U);
    msg.sys_src.assign("MANWTJSCKUFINSMVJDYCBRPYAREHRBTXXRTMZDZBNXVNAZLBPTOAQAYGNCOHKOAHRLIPEWNRBKJFNVRZOJUOFYOIASDYAUSZPPNZINQLUIKDVSYPCPXFHDFBXZUZXQZELGISXICJDFMGHQEJTCIHJKCCXBGYQVLHCWVBQNLMERHJHPEDES");
    msg.sys_dst.assign("QXAVRIOEFAIAKKQKPZJQZULGFODCLPKBBIQIKMWOTUEVNKADORJBLJMDKTLCQBUZCWQTJBUDZQLFUJMYXWFGVYZMIPDHNNAGYWHSANLSHFMSCOY");
    msg.flags = 76U;
    const char tmp_msg_0[] = {-48, 89, -100, 116, -21, -56, -72, -43, -116, -15, -124, 64, -101, 32, -11, 67, 108, -126, 94, 9, -27, 86, 114, -122, 9, 100, -4, 85, 92, -36, -95, 23, 65, -126, 28, 84, -10, 17, 84, 126, 69, 39, 119, -82, -62, -1, -53, 63, 6, -53, -14, -114, 86, -109, -73, 123, 59, 19, 117, -96, 119, 116, 122, -109, -24, -33, -84, -105, 118, 64, -112, 98, -74, -40, -73, 59, -77, -115, 67, -83, -4, 118, 107, -40, -115, 113, 123, 26, -99, 87, 119, -87, -14, 15, -79, 75, 61, 45, -8, 6, 119, 94, -113, -120, 11, -5, -59, -38, -116, -66, -69, -43, -93, 96, 66, 9, 93, 42, 29, 61, -1, 15};
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
    msg.setTimeStamp(0.807998979063687);
    msg.setSource(64338U);
    msg.setSourceEntity(171U);
    msg.setDestination(27313U);
    msg.setDestinationEntity(107U);
    msg.sys_src.assign("WSLBXEMIWPVZKCNGDWREYSVPMYHGCEIFWBXAAIOPNYKGQJTQUWAKIVYNUQQVVQPBYODMBDKXLLKIHZYWJAUQNUTGZJEJVJWOKFHQDKNENCMBNPHXNZCMTTTSYROSXSHFCOCSABMPULAMZTPZPRDHUAKGKVDAERRFTJGDXLDNUFRXOJJFOVORQOYDHSZBFTJBUEGGMQZCVZTXEUWZLRMOKMLSITCJB");
    msg.sys_dst.assign("AWZPKBNSEFMDCLPTNKTROMGCLXGUVBVIHJNKRXDCFHLSTZUUSKLBUEJXUPLDBAFXGVTZOKUYHTIXAFPIYDYARQCGNABXAZXLPHPSLDDRSBOAFHPRHBWLHQCEJHOTZQYKVYVTDSANTFIYOSWNXVVNSEGVBWGUBXZVWZFEDJHKONUEMJMZZCYOJDRU");
    msg.flags = 15U;
    const char tmp_msg_0[] = {-22, 64, -64, 39, 12, -22, -71, -76, 122, 25, 97, -56, -124, -47, 77, 111, -122, -34, 3, -93, -104, 61, 39, -127, -77, -74, -84, 39, -5, 72, 40};
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
    msg.setTimeStamp(0.18079502414568527);
    msg.setSource(34071U);
    msg.setSourceEntity(154U);
    msg.setDestination(51340U);
    msg.setDestinationEntity(207U);
    msg.sys_src.assign("WVUTRGHLAONHCFOBDSLRXOXLNBKZIHXUAAJNOXXTDOMZUTKESMCDDJVMKNQMYEYOPVHSRWQUSVHIIHSPEGQMDUAFOCDHFFTQGCBSYSEYZJXKJQJIMXLPKRANPBAFLXEIELWAUGLJAKTTDCRWKOQTPIFJBXFQSPPXKRJNYRGGNBKNJALLVWLNSZWIRRSHKW");
    msg.sys_dst.assign("HLHEAUQGLSAOGIOENTTUIFXGCBWSZUNWSNMPGQRGHQFPUVJLYJCYGHFVRJEBJRZSVHNPOTOBDCVKKKAOSFEXENQYRKIDUXCTKICRKNCIUZYSULGCPGEYMBOWAVTFQWQVHYYZYUVWWGJPXSADDLAYGT");
    msg.flags = 217U;
    const char tmp_msg_0[] = {60, -87, -79, 117, -6, -77, -35, 108, -64, 29, 34, 14, 122, 69, 117, -122, 88, 31, 21, -18, 2, -112, 1, 1, 119, 10, -112, -109, -76, 97, -94, -103, -85, -30, 62, 67, 6, 108, -52, -80, -89, -10, 14, 86, -29, -124, -66, -12, 65, -75, -120, 46, -72, -40, 34, 90, -102, -48, -83, 20, -26, -35, -8, 24, -119, -93, -68, 66, 124, 34, -93, 100, 84, -76, 48, -18, -1, 27, 92, -91, 110, 70, -23, 85, -71, 60, -85, -38, 102, -60, -35, 94, 117, 7, -120, -102, 52, -15, 32, 106, -10, 94, -91, 35, -23, -67, -27, 109, 98, -74, 61, -93, -85, 79, 75, 41, -66, -107, 30, -15, 110, 41, 97, 71, 53, 124, 109, -85, -70, 23, -122, 44, -122, -7, -54, 23, 108, 93, -43, -108, -117, -32, -113, -58, 108, -27, -94, 11, 68, 62, 30, 98, -25, -47, 30, -50, 119};
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
    msg.setTimeStamp(0.019768797427285545);
    msg.setSource(22629U);
    msg.setSourceEntity(49U);
    msg.setDestination(36338U);
    msg.setDestinationEntity(168U);
    msg.seq = 32927U;
    msg.value = 128U;
    msg.error.assign("DCDSOAZERYLKXASYAGONCTJOVOWYJFDVRFRTSDEEJTIEZWAIXTUMOWEGZDLMDCCCLXQMCWHNVBFVTDEGJXANNDBJXVTDZXSRVXBFTWBQQYVKOCZSOYSERYQUFBGHVRUKLLHRSINBMFGPRZUHLKHAPFMTWEMUQPHCAXYBIHFYALPFSTJEOYIQGIKZQBWNTPUGMGKJWPPINCUIMFSOXRKKIABSPZQPEZGNLMWJYLGXIKZVMUNWHJCRPAUQJH");

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
    msg.setTimeStamp(0.7847929279929535);
    msg.setSource(17298U);
    msg.setSourceEntity(240U);
    msg.setDestination(40872U);
    msg.setDestinationEntity(107U);
    msg.seq = 24569U;
    msg.value = 221U;
    msg.error.assign("HMYHOCJTTFGQVDSGBFNTKJJXPOHHPQDLCTRIBRANDQEEIYTUEZMTGPWIKZLJLNQSHNPYNBGPAQIYYXTBKQMUSGOFVJFVENANYQSPLEWMRZJCIGJJKSCXMCMZLWRYBCQFKUONXXRIAGCFADBIUPFSSTYEDBEGMVRDWGSAZDXE");

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
    msg.setTimeStamp(0.22344528207578973);
    msg.setSource(1309U);
    msg.setSourceEntity(5U);
    msg.setDestination(13275U);
    msg.setDestinationEntity(2U);
    msg.seq = 15938U;
    msg.value = 85U;
    msg.error.assign("LWSNYEUXKKRQJVLHIPPRQESBEVMLZQXMVUCSPADRFFKNL");

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
    msg.setTimeStamp(0.5405404063449519);
    msg.setSource(54027U);
    msg.setSourceEntity(248U);
    msg.setDestination(15944U);
    msg.setDestinationEntity(47U);
    msg.seq = 25470U;
    msg.sys.assign("LBOJMDDYOEVLJBEAZJZZYRSTGBLOSPEBEFHCIQHYPTSERXMIWTNYCLMYSCANPVZZTYVOZWIOOULWGDHWNOWIVMAKXKMBPWQVKWTVKJSHIKNQHOUTDDDULEVXSVYTGCSAXTGQRKFPNDRKAJXCBBQKVIQMDSDQBCTPXHGSNMZHWWLMUMRXEARJEWFOJLPUPONAAYNIXQGXHUTNGQHBCRCAJIRZPFFUYFGMNEXFZHQF");
    msg.value = 0.23630785622089;

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
    msg.setTimeStamp(0.7831432500835611);
    msg.setSource(51023U);
    msg.setSourceEntity(178U);
    msg.setDestination(12164U);
    msg.setDestinationEntity(247U);
    msg.seq = 56064U;
    msg.sys.assign("RZBWUTAITESEIHNUQTOHJZLNWTXZVAFGWDVWCADJBXKUSTPOMSWCXZJIZWTVDMIYNYBBRLOBLHPYLLHIEEIFOCMDHRKVPBGFMTUANSXGQPJKUYQSXFRLJPYQIWXUMLBDPGLFKYTONCNQPOWGRVFXAOUUVCFIHTUFMYEHVSKSVPIQRXKEMMLAUEAJEJTNKDLMANHSGDCQICRZQDJAROZEGWQSB");
    msg.value = 0.17269458317324704;

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
    msg.setTimeStamp(0.8291399857018047);
    msg.setSource(7238U);
    msg.setSourceEntity(200U);
    msg.setDestination(22185U);
    msg.setDestinationEntity(179U);
    msg.seq = 28408U;
    msg.sys.assign("ZPBIWQBMWVQZXTSRBLGVEYBWDKLZCQSBZSPIAKWXHVZGSDFRUKMYLVDEJOSZYTVJYPWDW");
    msg.value = 0.3708942911013565;

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
    msg.setTimeStamp(0.4975755134966674);
    msg.setSource(2378U);
    msg.setSourceEntity(133U);
    msg.setDestination(1911U);
    msg.setDestinationEntity(88U);
    msg.action = 86U;
    msg.longain = 0.9109755998874542;
    msg.latgain = 0.39379356316235425;
    msg.bondthick = 2881964628U;
    msg.leadgain = 0.3596765376874749;
    msg.deconflgain = 0.8900002462032145;

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
    msg.setTimeStamp(0.0439101361795714);
    msg.setSource(26790U);
    msg.setSourceEntity(232U);
    msg.setDestination(25663U);
    msg.setDestinationEntity(66U);
    msg.action = 228U;
    msg.longain = 0.5525310333878469;
    msg.latgain = 0.2561064250570202;
    msg.bondthick = 1533147826U;
    msg.leadgain = 0.8174081671021869;
    msg.deconflgain = 0.011695795575790813;

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
    msg.setTimeStamp(0.5848256297457611);
    msg.setSource(52728U);
    msg.setSourceEntity(154U);
    msg.setDestination(12403U);
    msg.setDestinationEntity(135U);
    msg.action = 136U;
    msg.longain = 0.6445239961586803;
    msg.latgain = 0.3925869427495208;
    msg.bondthick = 1138513561U;
    msg.leadgain = 0.49862182235784547;
    msg.deconflgain = 0.7996284638035238;

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
    msg.setTimeStamp(0.2899564069024717);
    msg.setSource(1324U);
    msg.setSourceEntity(10U);
    msg.setDestination(54616U);
    msg.setDestinationEntity(163U);
    msg.err_mean = 0.9664490156216993;
    msg.dist_min_abs = 0.4598406439439937;
    msg.dist_min_mean = 0.8213805159724186;

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
    msg.setTimeStamp(0.42301233625893386);
    msg.setSource(35258U);
    msg.setSourceEntity(219U);
    msg.setDestination(34894U);
    msg.setDestinationEntity(138U);
    msg.err_mean = 0.020575738156880408;
    msg.dist_min_abs = 0.4516416346960097;
    msg.dist_min_mean = 0.4484585147807747;

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
    msg.setTimeStamp(0.3380215939172373);
    msg.setSource(60886U);
    msg.setSourceEntity(184U);
    msg.setDestination(56448U);
    msg.setDestinationEntity(185U);
    msg.err_mean = 0.1148165681700547;
    msg.dist_min_abs = 0.9681035769960334;
    msg.dist_min_mean = 0.8509628256478858;

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
    msg.setTimeStamp(0.34978966049315874);
    msg.setSource(56402U);
    msg.setSourceEntity(70U);
    msg.setDestination(4231U);
    msg.setDestinationEntity(2U);
    msg.uid = 164U;
    msg.frag_number = 50U;
    msg.num_frags = 81U;
    const char tmp_msg_0[] = {-27, 100, -22, 118, 56, 124, -40, 26, 55, 59, 81, 36, -19};
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
    msg.setTimeStamp(0.7574525784970926);
    msg.setSource(64463U);
    msg.setSourceEntity(0U);
    msg.setDestination(39730U);
    msg.setDestinationEntity(221U);
    msg.uid = 193U;
    msg.frag_number = 145U;
    msg.num_frags = 44U;
    const char tmp_msg_0[] = {-50, 94, -48, -43, 88, -43, 74, 25, 35, -88, -116, -51, -1, -90, -62, -8, -77, -122, 94, 74, -93, -114, -110, 89, -66, 69, -57, 116, -4, -81, 7, 111, -89, 22, 34, -34, -77, -1, 111, -28, 84, -17, -99, 16, -95, -98, -53, 84, 53, -90, -91, 92, -7, -21, -87, 65, 64, 91, 125, -4, 97, -53, 99, 66, -29, -39, -37, -43, -59, -86, 26, -48, -59, 49, 58, 64, -100, -12, 100, -103, 16, -64, 43, -115, 27, 104, 34, -67, -89, 116, 8, -21, -2, 99, -90, 52, 114, 12, 111, 94, -70, 78, -77, 120, -93, 6, 115, 40, 43, 29, 59, -48, -40, 100, 71, 29, 123, 13, -116, -65, -34, 17, 10, -116, 37, 79, -26, -53, -75, -109, 105, 14, -94, 97, -39, -65, 72, -70};
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
    msg.setTimeStamp(0.1715817471532004);
    msg.setSource(52978U);
    msg.setSourceEntity(63U);
    msg.setDestination(19727U);
    msg.setDestinationEntity(254U);
    msg.uid = 69U;
    msg.frag_number = 12U;
    msg.num_frags = 27U;
    const char tmp_msg_0[] = {-122, 37, 113, -102, -54, 95, -49, 17, 63, 87, 52, -52, 108, 73, 107, -72, 0, 89, -15, -91, 105, 91, 42, 23, -56, 59, -7, 88, -96, -30, 11, -25, -82, -120, -123, 99, 16, 94, -55, 29, -80, -20, 96, 82, 41, 21, -80, -58, 58, -57, -98, 22, -52, -78, 20, -32, 95, 58, -74, 103, 97, -128, 37, -115, -10, 77, 79, 38, 50, -83, -31, 44, -118, 43, -1, -13, -105, 120, 5, -109, -11, -81, -120, -108, -101, -47, -100, -1, 75, -98, 59, 84, -73, -55, -84, -111, 30, -40, -121, -83, 112, 15, 28, 43, -76, 1, -14, -59, -13, 82, 117, -31, -111, 80, 106, 66, -121, 54, 56, -41, -81, 38, -79, 6, 62, 51, -39, -30, 107, 2, -117, -83, -109, -59, 38, -52, 44, -105, -127, 63, -48, 10, 65, 96, -123, -1, -108, 80, 88, -110, 18, 4, -79, 24, 16, -69, 48, 63, -3, 45, 79, -3, 69, 0, -97, -18, 67, 18, 33, -58, 84, -121, -80, 37, -22, 24, -103, -51, -118, 117, 80, 17, -9, -2};
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
    msg.setTimeStamp(0.9528673158568527);
    msg.setSource(19341U);
    msg.setSourceEntity(37U);
    msg.setDestination(336U);
    msg.setDestinationEntity(106U);
    msg.content_type.assign("NBWZZFZGUXBGXINZFZAXCVEEYZAYQLGOATUSOYYMQVXTOOQJ");
    const char tmp_msg_0[] = {80, -100, -113, 14, 111, -72, -76, -125, 81, -83, -85, -73, -76, -18, 1, 22, -17, -78};
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
    msg.setTimeStamp(0.30494764881996606);
    msg.setSource(45500U);
    msg.setSourceEntity(228U);
    msg.setDestination(15840U);
    msg.setDestinationEntity(140U);
    msg.content_type.assign("ZOMXVBTKGECAFAZCOIQOCXYSBQQUKLDQJJUEWKUJPDCLRTOMCTDNJEUBAWZFRUKODSVFNZPLJHIKVXARPIRVSYVGEAJXRQFRZOFILWJYCHORKELGPVGXYLTBNCEUXGODIFVJFRNXEZBYABKWPB");
    const char tmp_msg_0[] = {20, 110, -23, -12, -117, -30, -121, 56, -112, -112, 114, -116, -112, -48, 115, -84, 0, 112, 54, 46, 111, -77, 125, -100, 117, -24, -112, -104, 97, 67, 114, -119, 99, 83, 5, -34, -126, -117, 65, -121, -45, 111, -79, 107, -35, 109, 125, -22, 47, -92, 124, 125, 102, 82, 58, 6, -126, -104, -37, -86, -113, -24, -11, 101, 82, -90, 63, 34, 83, -19, 62, -38, -1, -17, -20, 64, -128, 23, -89, 113, 95, -61, -80, 73, -36, 60, -43, -17, 106, 99, -34, -15, 42, 32, 24, -57, -108, 7, -98, -8, -29, 111, -120, 90, 102, 12, 50, 39, 46, 67, 89, 68, 125, 86, 59, 11, -34, -81, 98, -51, 89, 46, -15, -36, 24, -25, 71, 17, -85, -36, 33, -49, 84, -37, -23, -42, -68, 120, -128, 65, -109, 104, 101, -58, 31, -83};
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
    msg.setTimeStamp(0.45159227240256417);
    msg.setSource(22259U);
    msg.setSourceEntity(225U);
    msg.setDestination(13473U);
    msg.setDestinationEntity(18U);
    msg.content_type.assign("QCTOECMPEKSXYYZYPROW");
    const char tmp_msg_0[] = {73, 106, -63, -5, -120, -103, 78, 96, 45, 37, 46, -85, 30, -123, 92, -92, -27, 103, 72, -64, -63, 52, -100, 62, 71, -83, -88, 102, 9, -8, 19, 85, 100, -111, 28, -52, -10, -13, -6, -57, -68, 120, -121, 80, 38, -76, -92, 116, -104, -97, 66, 46, -5, 86};
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
    msg.setTimeStamp(0.11268795777711538);
    msg.setSource(50558U);
    msg.setSourceEntity(146U);
    msg.setDestination(58234U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.15448851373555383);
    msg.setSource(46559U);
    msg.setSourceEntity(232U);
    msg.setDestination(51526U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.6282690478453512);
    msg.setSource(44682U);
    msg.setSourceEntity(2U);
    msg.setDestination(47759U);
    msg.setDestinationEntity(61U);

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

  return test.getReturnValue();
}
