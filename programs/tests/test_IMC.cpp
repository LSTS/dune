//***************************************************************************
// Copyright 2007-2015 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: c4ed792acea0f60a3083fcc9f9d4dcc6                            *
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
    msg.setTimeStamp(0.2362637995674527);
    msg.setSource(36376U);
    msg.setSourceEntity(52U);
    msg.setDestination(35507U);
    msg.setDestinationEntity(185U);
    msg.state = 227U;
    msg.flags = 239U;
    msg.description.assign("PZHQSCZKDGWPIJFGBEWSEHPAQAMRIWIFJTBELYOOECPEDGNHJTNFVZWMMYBORVKUHGJZQUMUVZCXBBZAPRFVXYLWTRSYKKFMKMHJKYMTAXGZGJJQLUDOQNCIIBKRVLOOPSAJMXCQGIDTIWNLAUSELWWTTAOQHMFKOLNRORKBYZ");

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
    msg.setTimeStamp(0.7063521943771458);
    msg.setSource(10984U);
    msg.setSourceEntity(167U);
    msg.setDestination(24454U);
    msg.setDestinationEntity(29U);
    msg.state = 107U;
    msg.flags = 129U;
    msg.description.assign("NREACWQCELKNBGQRTRHAKSZJRHVFUMUQXZFWOMXFMXUPYSYKOKEXLYHRLTWMVGYIOXBVSIZEOOIIAFOUJPWYFYZXEUPTIFWQPGKKJJMDCUJUYSOQBDANQEQTROWVYGAMAIGTPYHDJTTRLIWMBJKRSSUBEZOCBFDTCFIPZPLGDCPCVVLZTXHBWWDXBIYRDGPIAAOVEGMNPZDNHQQRBSCV");

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
    msg.setTimeStamp(0.059346981151338185);
    msg.setSource(58206U);
    msg.setSourceEntity(196U);
    msg.setDestination(46394U);
    msg.setDestinationEntity(78U);
    msg.state = 49U;
    msg.flags = 13U;
    msg.description.assign("OVZALIBXDRNUPTAGEBXWJRDRUIEZYGYAOFCMRJGVDTTZLEVNVUQPQAXYTGKEGHNDIJVUZCRSONEBHQIKIAITWUYNSMRZHKDUDFSVWHGFIBKWLBVVLCOCVNBCQLOXLZKSDJXRPFOBHZWTEULSKQEZQXOJXLSIMMXAYQ");

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
    msg.setTimeStamp(0.6563369621363576);
    msg.setSource(25356U);
    msg.setSourceEntity(129U);
    msg.setDestination(32733U);
    msg.setDestinationEntity(165U);

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
    msg.setTimeStamp(0.5964697686355843);
    msg.setSource(62304U);
    msg.setSourceEntity(155U);
    msg.setDestination(25602U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.40533689746326085);
    msg.setSource(9427U);
    msg.setSourceEntity(142U);
    msg.setDestination(59645U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.0682220876780758);
    msg.setSource(31911U);
    msg.setSourceEntity(169U);
    msg.setDestination(31495U);
    msg.setDestinationEntity(78U);
    msg.id = 161U;
    msg.label.assign("JOOEBNPHBPPFKIIKUONCRRYFBIYXXNSVBJGGYIVATAFJ");
    msg.component.assign("KOYBECHVFMTOLZKYFWZSRUFBLNPSHYIMCUQPKMAKAAJAVVRBAWXLQJMIXTUIAGGNHXP");
    msg.act_time = 57953U;
    msg.deact_time = 31200U;

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
    msg.setTimeStamp(0.5256483994567007);
    msg.setSource(53572U);
    msg.setSourceEntity(64U);
    msg.setDestination(32461U);
    msg.setDestinationEntity(47U);
    msg.id = 161U;
    msg.label.assign("PWDAAKPZTLCAYDXZQCQUNFLVMKFUKORPBIFSFJMSENDNALMJWWNIKRGDIYBHYGRRSLHYVMQXJCDVMSRDRKSQAKWFXVGWCBZWSBXORVXBTXHOMQUPNLSUVPDVZGUVJNQTSHUIPOMIFHYQCCCPTSHPZHDHILIPZZKUOEYJYLGNWQUQMFBOGYQJLCRWFRUANIGEDYBNCTIJKGIVMECBDHXPWEEZKTOJVXOZGBALOGYALKENXSZEBEX");
    msg.component.assign("HJUBGFSSIFNLEBUFGWYXVYIDMVHYBRMAYKMLQEBRMMLKYITPKZXCOZXEDDDGUHYPSADJPAAYGJKNWLIMDTAUVFWSHLKZGFNBUQRHNBLWHDVPBSICVIAXZAQCRAVQPNSOGNTCRMUFTKWJCVHVODEMPKZSNUTLYSWZKEMVQTXFCJQJIUOTCNVRRPHOXQXMTWDXFZWUGYLQROKJXLJEAIJAPJFECLOBGEZTPSFORTBIXDSO");
    msg.act_time = 15783U;
    msg.deact_time = 7684U;

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
    msg.setTimeStamp(0.27217641062261666);
    msg.setSource(2165U);
    msg.setSourceEntity(72U);
    msg.setDestination(23073U);
    msg.setDestinationEntity(227U);
    msg.id = 127U;
    msg.label.assign("RROKAEQBYHDMNASYKUTCVLWKAOUIWUWPXTRBKJEHWWLPJLEXHOOOXBWKHWZIJNNQFVKGTFTFEVZJAWPBDJAUNOZDEQLDPILNSAHJURSMZMHJOGDYCCZOFVEIPIHFSSNXTLBBEZYGVXHZQHLPNDYXRRAKBSCYUQNRDUMSZEWHUICTGIRENPGJBMLGKFKITOPBBXQGMARAVXCPSXVFCDZYUZOIMYAYQTMUQIJCGV");
    msg.component.assign("BRFOXLVASHBGYMCYPSHYWXDJBLTLGULMWVQTNZUTUGITEIOOLVQYHRSUPYJEFXJIFRGKXYZTLFCGCWAYDKDCZEGBKPKMSZVEZFHAJARFQOEZFEIQIQZNURYUKQCWDTVDVWWOZTPXHMISERDFNONEKWEABISOMAVXFKKGDTLHLGJDMVMNPOJWNICNMXJJCQPJWG");
    msg.act_time = 41999U;
    msg.deact_time = 12779U;

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
    msg.setTimeStamp(0.8422135692761343);
    msg.setSource(47958U);
    msg.setSourceEntity(207U);
    msg.setDestination(12097U);
    msg.setDestinationEntity(211U);
    msg.id = 43U;

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
    msg.setTimeStamp(0.8965331040114626);
    msg.setSource(25809U);
    msg.setSourceEntity(62U);
    msg.setDestination(59377U);
    msg.setDestinationEntity(40U);
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
    msg.setTimeStamp(0.47523073040311636);
    msg.setSource(18783U);
    msg.setSourceEntity(66U);
    msg.setDestination(51807U);
    msg.setDestinationEntity(104U);
    msg.id = 90U;

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
    msg.setTimeStamp(0.9865495867319378);
    msg.setSource(40186U);
    msg.setSourceEntity(215U);
    msg.setDestination(20257U);
    msg.setDestinationEntity(68U);
    msg.op = 140U;
    msg.list.assign("KQAXYINKYSUULLERAKBVDDCFRZTNAKXGXMJOUJOADIPXMRADGUJLDYEDVZVBBIZQWBNIPZFWXOIRSYKNZVVPBWSTYKSSXDVWGHFKVFCJMWHUHLWNPZRZTMQUMVJCQLGEHOQRYJNAOTFRJNSUBWIQIYTPJQFMYWHSU");

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
    msg.setTimeStamp(0.0652291721897913);
    msg.setSource(55141U);
    msg.setSourceEntity(82U);
    msg.setDestination(21928U);
    msg.setDestinationEntity(165U);
    msg.op = 108U;
    msg.list.assign("FMEROOEPWEPTXVOXRQEDB");

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
    msg.setTimeStamp(0.6058859881156707);
    msg.setSource(61530U);
    msg.setSourceEntity(31U);
    msg.setDestination(50617U);
    msg.setDestinationEntity(185U);
    msg.op = 171U;
    msg.list.assign("DAWFXWTCPAKLRYYQVZQJYCIHBKTJGFVOFGCMWRNTASUPVRECWLZYYFIMXIANVSTXNBOTOMYXYANWXRDMDITDPVRGBZJMKCLQVCZFSRRUJNUTCOPUEIGVHOREHLICZKLJHPFGJDEOADLQIQ");

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
    msg.setTimeStamp(0.7460471526959939);
    msg.setSource(54480U);
    msg.setSourceEntity(95U);
    msg.setDestination(56624U);
    msg.setDestinationEntity(70U);
    msg.value = 50U;

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
    msg.setTimeStamp(0.9167106648307628);
    msg.setSource(49816U);
    msg.setSourceEntity(244U);
    msg.setDestination(58524U);
    msg.setDestinationEntity(207U);
    msg.value = 187U;

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
    msg.setTimeStamp(0.02517723836907948);
    msg.setSource(61476U);
    msg.setSourceEntity(21U);
    msg.setDestination(54006U);
    msg.setDestinationEntity(240U);
    msg.value = 73U;

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
    msg.setTimeStamp(0.279530959547469);
    msg.setSource(61033U);
    msg.setSourceEntity(129U);
    msg.setDestination(3293U);
    msg.setDestinationEntity(244U);
    msg.consumer.assign("DQRNQJFNAIUANNJQPJWGRLOELYPJIWYGGFMYZSPMOGOQCZODBVVZHEWZXBCDHQMLMEXYLTZUXHEWDGVNARFXSWK");
    msg.message_id = 39022U;

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
    msg.setTimeStamp(0.3235725195721352);
    msg.setSource(26080U);
    msg.setSourceEntity(94U);
    msg.setDestination(8098U);
    msg.setDestinationEntity(3U);
    msg.consumer.assign("CEAHKQNRWGVTYIBKKAVRDOPUVQPOTFZAAQBCFLNKXDJQSWGSJSUNFZLTIWUBFPSVNMMCIOQERDJAMCHWGEJIXJKJUHEBECNVDHUKFYYXLDYLGYBDTNOUXKWMZXANZOPDZELVSFFYQQVOYPEHMJOROKIPZQTZTCNGKOXRJREAPLTFCAWWWLFSSAMLBBJVZXGMRUITNXQZJDXGIPVXHISUMEYHLK");
    msg.message_id = 22022U;

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
    msg.setTimeStamp(0.6199892525052058);
    msg.setSource(735U);
    msg.setSourceEntity(200U);
    msg.setDestination(18780U);
    msg.setDestinationEntity(105U);
    msg.consumer.assign("NNPPNONWTVJLCIDEHKPUOMOQHSSPSVHMYUEAPKEVWGCYYZCQGWOTMUZILGVRITDCUMZWGIRCXYPQDEKJAITUDNHCSTQSKFUWXSQZBFNAQGFXQHBMEXRZAAGGDODFAZONZPLUCMEJHPNYJMBFLWWRLTDKEHXRWBIBCGIZHFFSKRCOXAIKWNDMLAQXBOZWOTEAZMBLIPYRNEJVRYHTUTADSQJUFYT");
    msg.message_id = 25193U;

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
    msg.setTimeStamp(0.9352260362959658);
    msg.setSource(46267U);
    msg.setSourceEntity(159U);
    msg.setDestination(8744U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.07797246810573577);
    msg.setSource(61054U);
    msg.setSourceEntity(248U);
    msg.setDestination(41028U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.1274958599152839);
    msg.setSource(35793U);
    msg.setSourceEntity(6U);
    msg.setDestination(3216U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.39156053748058917);
    msg.setSource(2045U);
    msg.setSourceEntity(190U);
    msg.setDestination(30966U);
    msg.setDestinationEntity(69U);
    msg.op = 217U;

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
    msg.setTimeStamp(0.36814822902457267);
    msg.setSource(3488U);
    msg.setSourceEntity(229U);
    msg.setDestination(31719U);
    msg.setDestinationEntity(113U);
    msg.op = 74U;

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
    msg.setTimeStamp(0.2085634365600335);
    msg.setSource(13505U);
    msg.setSourceEntity(11U);
    msg.setDestination(7518U);
    msg.setDestinationEntity(9U);
    msg.op = 71U;

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
    msg.setTimeStamp(0.08395701218968832);
    msg.setSource(18322U);
    msg.setSourceEntity(179U);
    msg.setDestination(61291U);
    msg.setDestinationEntity(75U);
    msg.total_steps = 118U;
    msg.step_number = 136U;
    msg.step.assign("BITZHUGYHZJ");
    msg.flags = 189U;

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
    msg.setTimeStamp(0.9811571824084914);
    msg.setSource(39585U);
    msg.setSourceEntity(80U);
    msg.setDestination(16113U);
    msg.setDestinationEntity(130U);
    msg.total_steps = 159U;
    msg.step_number = 144U;
    msg.step.assign("GGYLHYTABIOIPYXDFFMSONWGIOERTOMCIKZDNDQUEZIQNRFKIPBCBVPIIUO");
    msg.flags = 79U;

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
    msg.setTimeStamp(0.3658503511808887);
    msg.setSource(12408U);
    msg.setSourceEntity(245U);
    msg.setDestination(44642U);
    msg.setDestinationEntity(185U);
    msg.total_steps = 95U;
    msg.step_number = 61U;
    msg.step.assign("AFIMWFRETSLGKQXSTPJESZTVJBCTRVOFLSAODHRUIRGJBQXDCLQWWMVDNNOTBSEHFKKHMGYPGBOZUEDACIIHAOQKECNZTUKUHSVVKAQEOJDIXDHYIYGCJXFGJOKHNFLEGWRYMRFGFBUXYALLBVLZDYIJFNANGZMBPARBNMMPZWGWXONTHJTPYJEZYYZICWXSHRVWXQUOMBQUDXLETZDVHKOQSNVPDTQPCZCS");
    msg.flags = 46U;

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
    msg.setTimeStamp(0.012081156581594366);
    msg.setSource(57057U);
    msg.setSourceEntity(170U);
    msg.setDestination(30171U);
    msg.setDestinationEntity(233U);
    msg.state = 3U;
    msg.error.assign("LTFMLIVJAWEATFCGHFIVGPTDWCUHVLEKGLEGOYJSPBMASIBMCPFMGPLZWJVSURZEBQJZTWTMWDOWKZETBPEAKQQMEUJNBXYUWHNOBLDIWCJBSCVIAHUZKUNLQPMZPRODVOYCMLWOCZ");

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
    msg.setTimeStamp(0.7890303896079238);
    msg.setSource(49655U);
    msg.setSourceEntity(22U);
    msg.setDestination(18081U);
    msg.setDestinationEntity(138U);
    msg.state = 10U;
    msg.error.assign("PUIYIUHGVNSIHCYNFMXEWZCJW");

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
    msg.setTimeStamp(0.2907605859432054);
    msg.setSource(17171U);
    msg.setSourceEntity(136U);
    msg.setDestination(56536U);
    msg.setDestinationEntity(93U);
    msg.state = 185U;
    msg.error.assign("IZOLKBXUZMIBPYBYCMJFAOLQAEIUFIUUPIYSJCXTKLMWLMSSEYCQGQRRSPVVDKVSRCWXVXNUVKAVGANRQPKVB");

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
    msg.setTimeStamp(0.6339623109046899);
    msg.setSource(2021U);
    msg.setSourceEntity(176U);
    msg.setDestination(27095U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.92724002266232);
    msg.setSource(11328U);
    msg.setSourceEntity(207U);
    msg.setDestination(30485U);
    msg.setDestinationEntity(183U);

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
    msg.setTimeStamp(0.11181545269362214);
    msg.setSource(65471U);
    msg.setSourceEntity(220U);
    msg.setDestination(64977U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.6405618996491681);
    msg.setSource(43358U);
    msg.setSourceEntity(243U);
    msg.setDestination(53226U);
    msg.setDestinationEntity(18U);
    msg.op = 9U;
    msg.speed_min = 0.6676844846376402;
    msg.speed_max = 0.3614587543442096;
    msg.long_accel = 0.248404179874109;
    msg.alt_max_msl = 0.6487670573248651;
    msg.dive_fraction_max = 0.4384067745330211;
    msg.climb_fraction_max = 0.5255129960488955;
    msg.bank_max = 0.954600537283801;
    msg.p_max = 0.08489905916193041;
    msg.pitch_min = 0.6317013382894308;
    msg.pitch_max = 0.7022756080432722;
    msg.q_max = 0.17018850705463506;
    msg.g_min = 0.03268556235000564;
    msg.g_max = 0.2071975920991621;
    msg.g_lat_max = 0.20745718466723073;
    msg.rpm_min = 0.4484451441635131;
    msg.rpm_max = 0.2126269236589282;
    msg.rpm_rate_max = 0.8421495203043119;

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
    msg.setTimeStamp(0.11428033343018551);
    msg.setSource(30829U);
    msg.setSourceEntity(175U);
    msg.setDestination(49873U);
    msg.setDestinationEntity(46U);
    msg.op = 52U;
    msg.speed_min = 0.16826365098473495;
    msg.speed_max = 0.40872455811857167;
    msg.long_accel = 0.5667436215084914;
    msg.alt_max_msl = 0.39560887257494926;
    msg.dive_fraction_max = 0.7865147029747894;
    msg.climb_fraction_max = 0.43783683375725146;
    msg.bank_max = 0.8718048139436516;
    msg.p_max = 0.5238155398422779;
    msg.pitch_min = 0.130598155929463;
    msg.pitch_max = 0.21449838507170216;
    msg.q_max = 0.7460752068085766;
    msg.g_min = 0.5857101826426427;
    msg.g_max = 0.3449599164153745;
    msg.g_lat_max = 0.2817424550906328;
    msg.rpm_min = 0.0025302793293933146;
    msg.rpm_max = 0.7514949447457443;
    msg.rpm_rate_max = 0.2968440176078755;

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
    msg.setTimeStamp(0.9487234167392288);
    msg.setSource(61365U);
    msg.setSourceEntity(249U);
    msg.setDestination(13339U);
    msg.setDestinationEntity(200U);
    msg.op = 211U;
    msg.speed_min = 0.8682715920839006;
    msg.speed_max = 0.8652224603278431;
    msg.long_accel = 0.1335915880730021;
    msg.alt_max_msl = 0.5738292351905411;
    msg.dive_fraction_max = 0.9456438920821448;
    msg.climb_fraction_max = 0.6836150546019286;
    msg.bank_max = 0.4917616363586701;
    msg.p_max = 0.5955874334737704;
    msg.pitch_min = 0.6900387585552771;
    msg.pitch_max = 0.12334163919897667;
    msg.q_max = 0.21539412862056628;
    msg.g_min = 0.9373787120487805;
    msg.g_max = 0.4243831575301602;
    msg.g_lat_max = 0.7591465740222019;
    msg.rpm_min = 0.828094910983963;
    msg.rpm_max = 0.028060141442721065;
    msg.rpm_rate_max = 0.8769642044768805;

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
    msg.setTimeStamp(0.9599978497905397);
    msg.setSource(9823U);
    msg.setSourceEntity(185U);
    msg.setDestination(13795U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.2575654749734172);
    msg.setSource(6617U);
    msg.setSourceEntity(157U);
    msg.setDestination(49747U);
    msg.setDestinationEntity(17U);
    IMC::SmsRx tmp_msg_0;
    tmp_msg_0.source.assign("LIKBKGLGJQQMAPXQOWIBUOGRZXYFHTUCNQWYUYASSSSBFJDTDUCFDIDHMEQZPEGIAUPHSFLLGJFVZVAYYJRYZLOCOGKNBNOARGPXJJMBMSHUJOMMPQXEFGCRIVX");
    const char tmp_tmp_msg_0_0[] = {113, 82, 31, -79, 116, 86, 103, -95, -98, 20, -19, 92, -86, -23, 92, 37, 17, -11, -78, 107, 100, -14, 97, -52, 93, 49, 75, -6, -66, 54, 115, -42, -46, 40, -38, 27, 109, -36, -3, -59, 79, -118, -20, 98, -52, 27, 15, -7, 103, 21, -90, -26, 48, 71, 3, -12, 103, 63};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.9195893705813807);
    msg.setSource(14354U);
    msg.setSourceEntity(17U);
    msg.setDestination(37584U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.35243005412057005);
    msg.setSource(18180U);
    msg.setSourceEntity(192U);
    msg.setDestination(39294U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.0864959006872259;
    msg.lon = 0.44902243502294414;
    msg.height = 0.44477607949125875;
    msg.x = 0.903265931538866;
    msg.y = 0.7161220012681156;
    msg.z = 0.10771708466096974;
    msg.phi = 0.5609649918205176;
    msg.theta = 0.8508868833831381;
    msg.psi = 0.26691167127931725;
    msg.u = 0.5866635556751062;
    msg.v = 0.13649933606342546;
    msg.w = 0.6817593111117441;
    msg.p = 0.10331793423252522;
    msg.q = 0.14524915199922217;
    msg.r = 0.8765549550668726;
    msg.svx = 0.48267523697208947;
    msg.svy = 0.5583960065325696;
    msg.svz = 0.40791259731245255;

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
    msg.setTimeStamp(0.7197342641865261);
    msg.setSource(33608U);
    msg.setSourceEntity(170U);
    msg.setDestination(11257U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.01400792960481545;
    msg.lon = 0.7285950864212183;
    msg.height = 0.6411709308701093;
    msg.x = 0.7539174637478516;
    msg.y = 0.9954136546762862;
    msg.z = 0.25932214906196416;
    msg.phi = 0.73030530206743;
    msg.theta = 0.6096773629484844;
    msg.psi = 0.0672548744457312;
    msg.u = 0.7629490196390861;
    msg.v = 0.17956916180992655;
    msg.w = 0.06027806722471396;
    msg.p = 0.70761380330385;
    msg.q = 0.1740573100741336;
    msg.r = 0.7982298914032799;
    msg.svx = 0.4930224078469194;
    msg.svy = 0.41716069546821744;
    msg.svz = 0.372236170961626;

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
    msg.setTimeStamp(0.9012857487612218);
    msg.setSource(13775U);
    msg.setSourceEntity(59U);
    msg.setDestination(1152U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.634877490692187;
    msg.lon = 0.019068919702828646;
    msg.height = 0.0731513873881735;
    msg.x = 0.5963742689599687;
    msg.y = 0.3716599265562711;
    msg.z = 0.5198429746180541;
    msg.phi = 0.6695021029661088;
    msg.theta = 0.02859243048482707;
    msg.psi = 0.026496379102355916;
    msg.u = 0.515460998922844;
    msg.v = 0.3900242854740915;
    msg.w = 0.3636777683415531;
    msg.p = 0.48266256072128;
    msg.q = 0.2977606615937012;
    msg.r = 0.20635774749840707;
    msg.svx = 0.8499920740723793;
    msg.svy = 0.7113896207266173;
    msg.svz = 0.8358140948270243;

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
    msg.setTimeStamp(0.21618032809738774);
    msg.setSource(29780U);
    msg.setSourceEntity(204U);
    msg.setDestination(58870U);
    msg.setDestinationEntity(11U);
    msg.op = 217U;
    msg.entities.assign("UMUDKTQAAVAROMOXGMZFUZLAJGJBXVOBYDHDCJCOQFZGBGLRDZJYNQEHFNEJXBQHVFEPVYBLEEGBMIWZPOYQBGIXVPHHKWDKUMWMUINNDQLFILSSIUVOHKESNKBCEYMAIJMPZECVCIJKJAWTTFWTNQLYWADOONSUACGXYDKTMUNQIZGPCKZRUIRSSVORXWPPSRTSFJGXHYEHZLLHDZFBTLVRGQNDOLRAHRFYSWCCNPXSUJQFCRMVTWA");

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
    msg.setTimeStamp(0.955283834225751);
    msg.setSource(6662U);
    msg.setSourceEntity(64U);
    msg.setDestination(60185U);
    msg.setDestinationEntity(233U);
    msg.op = 239U;
    msg.entities.assign("VPILVTCMEKPSZOGJCCRYMRAGYYHHVXVAOGXIFZOQDVJVFUSKPPMVJKMCHPIKGEAZURATNOOBJZDLZQUCSLLDKSSXOQOZXHDMOAWPBLNEHGZYZPJITALOAMEBYEUFBNDWFLQPBWNKUQGDJHNGKENEIXCMTPGKINHKSYQIYERRUTJQKGBWMFJMWVCPNJLSNQUAXAIHJWIFSXROYUBSDWXR");

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
    msg.setTimeStamp(0.07217543668019666);
    msg.setSource(14069U);
    msg.setSourceEntity(124U);
    msg.setDestination(40279U);
    msg.setDestinationEntity(191U);
    msg.op = 11U;
    msg.entities.assign("AAZDKFVLMZUMTZHCEVRGNVWUXSWTVIFGRBJJHKPQTTNSHNYCALPYJVIL");

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
    msg.setTimeStamp(0.48376352818152724);
    msg.setSource(59755U);
    msg.setSourceEntity(102U);
    msg.setDestination(19469U);
    msg.setDestinationEntity(228U);
    msg.type = 98U;
    msg.speed = 49705U;
    const char tmp_msg_0[] = {-121, 14, -110, 70, 31, 0, 15, 42, 69, -92, 96, -43, 89, 24, -56, -97, -89, -72, -113, 41, 109, 0, -81, -35, 64, 114, -104, 94, -66, 4, 36, 28, -13, 115, -94, 28, 20, 81, 8, 76, -25, 81, -68, 87, -32, -98, -74, -2, -105, -40, 122, 99, 70, -106, 86, -62, -104, -75, 75, 104, -54, 58, 42, 59, 33, 104, -96, 120, -13, -14, -15, -46, -117, 102, 61, 28, 112, 117, -91, 120, -111, 46, 74, -90, -57, 119, -52, 39, 124, -48, 63, 0, 119, -114, 103, -41, -92, 84, -2, 1, 54, 100, 104, -124, -109, 87, 113, -75, -117, 72, 40, -54, 32, -106, -121, -7, 5, -41, -84, 96, -109, 4, 80, -42, -9, -34, 102, 69, 89, -56, 59, -84, -45, 61, 12, -43, 24, 40, 19, 98, -69, -63, -30, -53, 4, -9, 5, -81, 124, -98, 11, -40, 80, 120, -53, 47, 63, -94, -10, 9, -66, -123, 73, 15, 30, 53, 46, 11, 32, -117, 45, -108, -49, 8, -37, 109, 116, 63, -20, 63, -34, 28, 59, 92, 102, 82, 46, -12, 102, 93, -42, 110, -85, 35};
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
    msg.setTimeStamp(0.4874214998939981);
    msg.setSource(7830U);
    msg.setSourceEntity(224U);
    msg.setDestination(29988U);
    msg.setDestinationEntity(221U);
    msg.type = 221U;
    msg.speed = 41028U;
    const char tmp_msg_0[] = {8, -93, -42, -50, -60, -88, 17, 73, -6, 74, -60, 66, -7, -71, -97, 18, -30, -60, -10, 77, -113, 48, 37, 14, -10, -41, -10, 118, -14, -1, -37, 41, 78, -66, -45, 69, 103, -24, 49, -28, 55, 87, -117, 111, 42, -97, 20, -23, -12, -49, 19, 44, -78, -126, 110, 85, -115, -54, -33, 116, 103, 45, -58, 31, 29, 32, 81, 48, 126, -65, -26, -61, -11, 51, -101, -120, -117, 97, 77, -96, -33, -82, 42, 105, -43, 104, 91, -105, 17, -45, -50, 56, 55, -52, 49, -7, 17, 16, 61, -48, 13, -62, 31, -64, -96, 122, 100, 7, -11, -68, 21, 33, -116, -67, -34, 38, -53, 124, 123, 9, 104, -78, 6, -123, -50, -24, 43, 119, 118, -76, -7, 26, -76, 91, -94, -93, 51, -102, 8, -119, 35};
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
    msg.setTimeStamp(0.41546299018318766);
    msg.setSource(35190U);
    msg.setSourceEntity(12U);
    msg.setDestination(30658U);
    msg.setDestinationEntity(86U);
    msg.type = 8U;
    msg.speed = 65033U;
    const char tmp_msg_0[] = {-87, -7, -64, 18, 107, 74, -67, -34, 125, 124, -46, -30, 85, 19, 13, -44, -31, 76, 46, -96, -75, 37, -85, 22, -118, -19, 23, -28, 122, 26, -95, 41, 48, 87, -127, -109, -106, -99, 43, -98, 42, -18, 0, -66, 94, -38, 108, -16, 86, 35, 113, -90, -107, 100, 70, 9, -123, 4, -121, 68, 87, 8, -126, -96, 76, 76, 42, 53, -126, 73, -20, -57, -15, -33, -59, -67, 6, 95, 88, 119, -117, 74, -68, 66, -104, -22, -102, -31, -22, -62, -20, 102, -59, 125, -10, 94, -103, 126, -54, 20, 48, 19, -40, 110, -128, -117, 21, -40, 22, 48, 48, 57, -91, -89, -83, -93, -117, -68, -105, 124, -4, -24, 82, -50, -105, 73, -87, -23};
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
    msg.setTimeStamp(0.7088634251239118);
    msg.setSource(38942U);
    msg.setSourceEntity(28U);
    msg.setDestination(13723U);
    msg.setDestinationEntity(236U);
    msg.op = 115U;
    msg.tas2acc_pgain = 0.8958994940901012;
    msg.bank2p_pgain = 0.5567338225913889;

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
    msg.setTimeStamp(0.5839319260151031);
    msg.setSource(49325U);
    msg.setSourceEntity(165U);
    msg.setDestination(53046U);
    msg.setDestinationEntity(201U);
    msg.op = 108U;
    msg.tas2acc_pgain = 0.9259284396879537;
    msg.bank2p_pgain = 0.6636867721934944;

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
    msg.setTimeStamp(0.8164399028395797);
    msg.setSource(44474U);
    msg.setSourceEntity(103U);
    msg.setDestination(65187U);
    msg.setDestinationEntity(102U);
    msg.op = 2U;
    msg.tas2acc_pgain = 0.5083474210712449;
    msg.bank2p_pgain = 0.7184284477960972;

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
    msg.setTimeStamp(0.7594925679248867);
    msg.setSource(30196U);
    msg.setSourceEntity(36U);
    msg.setDestination(56658U);
    msg.setDestinationEntity(219U);
    msg.available = 2094075394U;
    msg.value = 111U;

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
    msg.setTimeStamp(0.7358286800426911);
    msg.setSource(59189U);
    msg.setSourceEntity(226U);
    msg.setDestination(19240U);
    msg.setDestinationEntity(144U);
    msg.available = 3452214423U;
    msg.value = 57U;

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
    msg.setTimeStamp(0.77258229287013);
    msg.setSource(44225U);
    msg.setSourceEntity(121U);
    msg.setDestination(56262U);
    msg.setDestinationEntity(175U);
    msg.available = 476216082U;
    msg.value = 56U;

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
    msg.setTimeStamp(0.6479678287416244);
    msg.setSource(12317U);
    msg.setSourceEntity(162U);
    msg.setDestination(30203U);
    msg.setDestinationEntity(195U);
    msg.op = 201U;
    msg.snapshot.assign("VRGMDTYQVWFMZSGJCLKKZCXXYIDVDJVQWZLSYLOVFHKEAGOJKPMSVCZGJTLEHBNOUGBHMIZDNBXCGMRUJESUELTRXEUOAQQYLWAXFMTPINPUSFZQVISLYZYYZPQZZBOHBGFIJQRKEPFQJSGXYNVOXGTOCXBNXRRASCWMNJR");
    IMC::UamTxFrame tmp_msg_0;
    tmp_msg_0.seq = 2391U;
    tmp_msg_0.sys_dst.assign("FHQMMDGSKAAXMDJSZVZMXFRASUUHNXTHQQBWINRKNWYOYDZNPAJEPXYSUITLIFRIBPWPUDTCPDKFARNNAGUMNHIKYATCWPMSRUKCEQRKTMRARDUJZKLAGGBOSEGHGWEVQBXQXIIYKIECTP");
    tmp_msg_0.flags = 48U;
    const char tmp_tmp_msg_0_0[] = {-5, -52, -74, -86, 45, -100, -18, -63, -113, 29, -56, 49, 24, 38, -2, -71, -124, 123, -128, -59, -65, 84, -6, 55, 27, 59, 64, 41, 27, 61, 111, -90, 95, 51, -48, 44, -82, 25, -84, -85, 62, -43, -90, -119, 112, -112, -35, -17, 60, 87, -62, 37, -38, 99, -48, 73, -51, 120, 68, 26, 85, -116, -107, 25, -123, -101, 59, 97, -30, -99, -26, -87, -26, 82, 13, -114, 82, -55, -11, -68, 65, -49, 43, -4, 112, 21, 58, 17, 93, 12, -98, 76, 83, -61, 119, -83, 126, 31, 61, 88, 123, 78, 25, 78, 28, -68, 56, 70, -114, -80, -49, -119, 108, 43, 58, 72, 122, 80, -112, 18, -15, 11, -86, -84, -102, -86, 14, 74, -122, -93, 10, -103, -16, 10, -111, -82, -111, 118, -44, -79, 109, -11, 1, 73, -92, 28, 33, -59, -82, -101, -11, -70, -29, -91, 102, 68, 13, 12, 12, 120, 89, 39, 28, 38, -81, -93, 1, -83, -6, 117, 74, 115, -102, -115, -8, -90, 54, -57, -86, 89, -120, 126, 97, 72, -13, -92, 41, -76, -61, -8, 54, 124, -23, 28, -36, -48, -21, 84, 59, 45, -6, -105, -65, -69, -88, 34, -117, 35, 57, 100, -100, 44, -46, 109, 6, 74, -93, 113, 112, 90, -9, 31, 120, -126, -64, -87, -81, 68, -79, 30, 49, 10, 46, 40, 110, -27, 36, 50, 110, 74, 72, -79, 71, -29, -100};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.7007736432593996);
    msg.setSource(28983U);
    msg.setSourceEntity(88U);
    msg.setDestination(63479U);
    msg.setDestinationEntity(13U);
    msg.op = 97U;
    msg.snapshot.assign("GINEFTBOPNNLAKZLPZVGAIIDDRXVNQOCEGYBVKNKTFRAVQMQKWGKYKHRRGAMWYSUJUKMCHOJSLZIWHILHRLZXDCGSBRRBAYOFADTCTMUCSOCYQSTPRLUPKUIGEAMJLHJBPBFKTFWVCIENUDXJSFVEUJNQXMJDILFBQSYBPOHQYQOZAWVAETKIOZOYXGJUJAXDDEURSGMVEHBWVPMX");
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 97U;
    tmp_msg_0.list.assign("QLLKEUHRINEIMQQSKJEFUAJRGDQWPCVNPPWXGNPIJCMSXCTLGFRCCGLMBUPONWUCHMSSOPIKUGCQTOUTBCSQWXTVYPF");
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
    msg.setTimeStamp(0.9784072143372511);
    msg.setSource(23179U);
    msg.setSourceEntity(115U);
    msg.setDestination(2475U);
    msg.setDestinationEntity(54U);
    msg.op = 98U;
    msg.snapshot.assign("LLOYRYDQHUAPJPQOTWKALOBKQUIFFPYAYUBXGJZYFACKJEVNKXMWSNXXOJZAUWNOLECNCVMZLMRATPFERKTJIARPKVTMAXEDCESKHWGPSYRGEYEGJDNZIVPSJZXMHSTSMWPCWGYLUX");
    IMC::UsblAngles tmp_msg_0;
    tmp_msg_0.target = 52405U;
    tmp_msg_0.bearing = 0.7873233028320755;
    tmp_msg_0.elevation = 0.9163333861558226;
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
    msg.setTimeStamp(0.3623518849606874);
    msg.setSource(20890U);
    msg.setSourceEntity(215U);
    msg.setDestination(32627U);
    msg.setDestinationEntity(11U);
    msg.op = 12U;
    msg.name.assign("KCXEQFKOLPOXUDOYVSIMMRAJIWRJBMNIAHZNCGHBKVKESYRHMFXFXFTFYDUGENVRD");

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
    msg.setTimeStamp(0.7104577241576092);
    msg.setSource(5532U);
    msg.setSourceEntity(240U);
    msg.setDestination(46420U);
    msg.setDestinationEntity(244U);
    msg.op = 153U;
    msg.name.assign("QDJRBEBIBJMGAFPINCPXJAVLNJWRGKJBLZKECOBDEDPLTGIVQHOZRVUFKAURTIUWNREVFIZSZZCTAMASXTUDSDGZ");

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
    msg.setTimeStamp(0.24178513760803622);
    msg.setSource(18413U);
    msg.setSourceEntity(3U);
    msg.setDestination(55866U);
    msg.setDestinationEntity(89U);
    msg.op = 36U;
    msg.name.assign("DYLFQKFMMMSHWVGNQUOWLKDCYOMLJJWXQITEHQSHDQKBMPZQSFMKFYXYREMNMHCT");

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
    msg.setTimeStamp(0.5139558561903187);
    msg.setSource(19380U);
    msg.setSourceEntity(36U);
    msg.setDestination(11314U);
    msg.setDestinationEntity(28U);
    msg.type = 220U;
    msg.htime = 0.7236023491566415;
    msg.context.assign("KKYRGLPTVSFGLWGHSLQXJJXTETPCKUWHQKFPKNYXZITRFDZPHBWTCFMEPXUJTPSATBBYXWHUCDUMXQNBQNEGHLZEHJUAJIVOBUHISYG");
    msg.text.assign("RCTWWETSTIXLNGBMRCQOVSAXNXHLQRUGIPJHDSRROEKCUKELDOZNOVWPBMFNTKMCLYOUBVLBZJWUEGBIHIMPKUUYDZFRPJWDMHSDHAPYOBLWMIJWTYAKDUXAWGQFLCGCCSPDAZOJSBEXEQ");

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
    msg.setTimeStamp(0.905534585091474);
    msg.setSource(16997U);
    msg.setSourceEntity(36U);
    msg.setDestination(12115U);
    msg.setDestinationEntity(152U);
    msg.type = 96U;
    msg.htime = 0.45970728725169885;
    msg.context.assign("LKAOMHTWWBAVTEDCAVMBOLGZQSYBZSEPRDOBDXDIGALZAWXIGDIVXXURIITNJUQIRACBSYJPWRSFRMTLOSVQOFNPYEGKMPSTHCQVIZGPNMCMUXRVVYFALUZVKAMELOTCWBFTKUYBYRXOKQCMKKYFZBUDSEYXM");
    msg.text.assign("OAHLFCGCVQWNRPODWXBZRFAKVELUSOJUQWJPZTEWRYOEZBMRPJIFJQFELVUIDKVDJTUYVCZRLMPNWMEUNQGPBJIKHYQGSSKNEVQEDKBMBQXGAYCDIXCRDWZIGLMUTSSXGXHFBOQRGZWSORFKPUYDEVRWXXCDHAJWXNAKTXSTAZFYBZQDXDISACPBYLZMOFMGJRTLYPNTMTEBNGAIOCLBIONSUFSIFWIHMVTLJMPANPHHOYKCJUCLTAYZGEHU");

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
    msg.setTimeStamp(0.20430625478875164);
    msg.setSource(26284U);
    msg.setSourceEntity(206U);
    msg.setDestination(26486U);
    msg.setDestinationEntity(87U);
    msg.type = 113U;
    msg.htime = 0.39443740059488985;
    msg.context.assign("AIGLLFNNKMXAOHIWCMCRXZORJJHUIWZOZPPYFYVKZAWEMMQPHBBLQGYAYKOVSFTYRREQZJTOVDENGAJIUARBEGZPRUNOGNIMTXTBPXQUBDLSHTWFJYRVQZVFOTNGUEKVNDVMIKWASGZDBNGTOCHSQGQHKYAJFIZRZFAUMYCCLLWLHWDJQOXXKUDLWJESCJVTMEQPWFQCVKPODY");
    msg.text.assign("MTDOMJBRCKTWSEDKYLXKHVSQQQGIUA");

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
    msg.setTimeStamp(0.6502728091718916);
    msg.setSource(57592U);
    msg.setSourceEntity(85U);
    msg.setDestination(55530U);
    msg.setDestinationEntity(145U);
    msg.command = 252U;
    msg.htime = 0.28896914972910237;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 247U;
    tmp_msg_0.htime = 0.35878187913419113;
    tmp_msg_0.context.assign("FCHOXNPWAYCDGZXTULVWUFYEBUTTEDCBJFAPNZDJYSACYBOTDXAURATDXUEAPS");
    tmp_msg_0.text.assign("WETFBURHZSSNZGVJYKADCCIFKAPRTPLSADDKYZLFETWJVYYXMROQRXGWHEPKCJHGLBMULZYDDIVMBJXRCNPXPHMSSAZDBOBRFEPQVVVAZBPCXILOGEUFTSPGVOCKTNLMNCJUAUWGINAUMGWEXPXOQVKEZUNFCJIFWHQYBPMUHFNZKWUTUZVTOSLAMXSIWTRBKBKOMYCJTASWQJOQZDQBEIHIYMA");
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
    msg.setTimeStamp(0.20912256952732977);
    msg.setSource(17593U);
    msg.setSourceEntity(169U);
    msg.setDestination(22443U);
    msg.setDestinationEntity(140U);
    msg.command = 141U;
    msg.htime = 0.5950228720453223;

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
    msg.setTimeStamp(0.9451348879896931);
    msg.setSource(2048U);
    msg.setSourceEntity(236U);
    msg.setDestination(37592U);
    msg.setDestinationEntity(171U);
    msg.command = 6U;
    msg.htime = 0.7275553563061368;

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
    msg.setTimeStamp(0.9114893328995449);
    msg.setSource(7948U);
    msg.setSourceEntity(216U);
    msg.setDestination(33239U);
    msg.setDestinationEntity(134U);
    msg.op = 224U;
    msg.file.assign("KBATPMRDPUYLUQQVJXCGXZVUKGDCKPQNODEKTLQWYKTVQNJXSAUSWNGFZFOXBNCBMMKEXEHMXCMWCRAMNUFTCCVHIRTRARTXSOIDWTBNMQSVSXTIMKOODBFYBLELHGOJYCGHHT");

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
    msg.setTimeStamp(0.2843876733285211);
    msg.setSource(43273U);
    msg.setSourceEntity(80U);
    msg.setDestination(8654U);
    msg.setDestinationEntity(186U);
    msg.op = 134U;
    msg.file.assign("SNTBUJWWSWWQYRUNGKOLFVKGGEZQUNPZQQKOPASYCRBOJZJAALMSSHDTLCDYMKEBRXPRVPCGIPTKIENHTBUODZAUFFJWPVFNXVPGIBHZIVMDUTHIZLYADEQRPENSAYWWDUJNGJSZHAONHQVRZXBGOQFLOIKCWMXEXACYKRXSCXMJRIOBMCBPJMDMOXPMLBDSFJTUSFUIYYGVZHRDQXECWCTVLIYHVKFRHGXFLYKMLHUQ");

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
    msg.setTimeStamp(0.3160928665337128);
    msg.setSource(61824U);
    msg.setSourceEntity(95U);
    msg.setDestination(15220U);
    msg.setDestinationEntity(65U);
    msg.op = 191U;
    msg.file.assign("VOMKNQLXQBRUTUNSXKHBAGFBJFTANMIMZOFWXTKVZHTFMHSGNGOFLALRJHSCRUDIKMOJSIBWGYCCYICWUGBSQIVPPRFBIBYPNYNPSLHHUAZDIOSEANPETQZQHYVCDVYPXLGANEKLYGJZJLPTUSAQMXNZFGOADYJBGSSCGWLWEOFMPMRVJVVJDFTQ");

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
    msg.setTimeStamp(0.16512184798080698);
    msg.setSource(13165U);
    msg.setSourceEntity(4U);
    msg.setDestination(46775U);
    msg.setDestinationEntity(134U);
    msg.op = 63U;
    msg.clock = 0.518271215596606;
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
    msg.setTimeStamp(0.9221228298340689);
    msg.setSource(45400U);
    msg.setSourceEntity(238U);
    msg.setDestination(44443U);
    msg.setDestinationEntity(71U);
    msg.op = 211U;
    msg.clock = 0.7736594738800336;
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
    msg.setTimeStamp(0.14259768226976188);
    msg.setSource(31852U);
    msg.setSourceEntity(203U);
    msg.setDestination(5833U);
    msg.setDestinationEntity(208U);
    msg.op = 189U;
    msg.clock = 0.6052147931645255;
    msg.tz = 42;

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
    msg.setTimeStamp(0.3045352784747559);
    msg.setSource(36732U);
    msg.setSourceEntity(190U);
    msg.setDestination(26315U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.9775579217527343);
    msg.setSource(20790U);
    msg.setSourceEntity(250U);
    msg.setDestination(58480U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.8111752515124357);
    msg.setSource(28394U);
    msg.setSourceEntity(53U);
    msg.setDestination(59419U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.5898005721704171);
    msg.setSource(35694U);
    msg.setSourceEntity(128U);
    msg.setDestination(3546U);
    msg.setDestinationEntity(58U);
    msg.sys_name.assign("YZCIFTNRTAXWPZQNQOQOFTMYFAKRSUWANFKQQXEWSWLIDUOZHPMYUHCYNISSCGWDUEFBEKEAEWYFAHXFBMBTZHDVKOPRANDIDLZJWZUBD");
    msg.sys_type = 51U;
    msg.owner = 47910U;
    msg.lat = 0.8473847704141189;
    msg.lon = 0.7169282092922032;
    msg.height = 0.4596100490572548;
    msg.services.assign("RUMMXSNNFXJVWTZNTDYOQMCJQOGGCLKWMEXGIOCXFBMBYTFTCREYCEIPQYTPTJORSZRKYQXAEQWADKMIKVSBDUDIXMABZTHXIWWRXOXVVQJHSPBUKLRCMBOEQLUWDTJLBKPVQHZYOHFRAZVTISOOCQDBXJBRWYNNBNLJRAFJGDQIGHUNCVUGEAEHVCSIHEGHGHYZZIWTPDINLLJNS");

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
    msg.setTimeStamp(0.369640290625048);
    msg.setSource(43423U);
    msg.setSourceEntity(141U);
    msg.setDestination(34093U);
    msg.setDestinationEntity(157U);
    msg.sys_name.assign("YAIKCDSAFYIVOBRKSUWP");
    msg.sys_type = 127U;
    msg.owner = 21441U;
    msg.lat = 0.7170923781246742;
    msg.lon = 0.14925882387409728;
    msg.height = 0.16016260508688474;
    msg.services.assign("CNIZICFEBRKPYWNVHIQALHRPMZRKXYVHJAPOCPODJVGLZGKBMUUEDSSXSTVMDNFTXFQREXGHBJPUXHNOUDIINBMMQOYICCFYFBWQVNOSLTVEEOZRWHPKGPKGWEPFSDRJRHAHHRTOMCKWHXNFLAEGQOKPSUXMVGKATUWOYDBQJM");

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
    msg.setTimeStamp(0.1409815896218124);
    msg.setSource(9524U);
    msg.setSourceEntity(150U);
    msg.setDestination(39441U);
    msg.setDestinationEntity(235U);
    msg.sys_name.assign("FQEFSWMKHGTXVIZOYZZNJDIGZVMCRSWUROIRUXBYVUYNAPKGHLWGTQJPVZQAFCSXYSKLDIBXNAHNSXJWQJWLDZPERRKJCEOCKJWTCPVWLQZRAMOYVUCEOBDBBDUQIHTKODYUSMQHHLIDWHKMAXESAHNUEYKQIPAMTFJKYEVMLQXEBJEXBUT");
    msg.sys_type = 119U;
    msg.owner = 45566U;
    msg.lat = 0.1798465223692315;
    msg.lon = 0.17636329805745754;
    msg.height = 0.03122393433769033;
    msg.services.assign("XLDRWODYHFUAJLXPAJFSLYYPJJESTESBRZQUOOIRSRYQKNDHOBGGXJKYKFGHEHYGQIGE");

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
    msg.setTimeStamp(0.010279792239437313);
    msg.setSource(30307U);
    msg.setSourceEntity(215U);
    msg.setDestination(52639U);
    msg.setDestinationEntity(221U);
    msg.service.assign("ENUWQVTBHNZUKFITXJIVJFFUPDXWZAEUYC");
    msg.service_type = 53U;

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
    msg.setTimeStamp(0.7459829858813746);
    msg.setSource(11856U);
    msg.setSourceEntity(26U);
    msg.setDestination(17019U);
    msg.setDestinationEntity(250U);
    msg.service.assign("RCJFNVTCDKSLACBOFGEFYENWCFVIVTUDWQZPGCRBMFYQPOBVDLQBBPHXTVIPKIGLYPRKENZNTJXZIUASAAVSOUAOPILEMIMDHWAGMLUGFZDSJYJTLESJHQPWMUGITHTNWPZCYIHOZDRIKHAXQBBELVLQXYVXTJDWZOTUDNPHLQJDSBYCKWSUNAGROXRZYXACGVXEWWWULXCTMFQHJKNGHJUKYRMOKEOSYGNXAOFUIBQRCENRMKFREZK");
    msg.service_type = 86U;

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
    msg.setTimeStamp(0.3954258044666318);
    msg.setSource(11565U);
    msg.setSourceEntity(185U);
    msg.setDestination(9885U);
    msg.setDestinationEntity(30U);
    msg.service.assign("VJLWKZQBQTXTPSFNAKCMSSISAREBXAJUVRVGWHMONETWQEXIGYAXYUJDMFCETNKUBQJOUVCOPZGLRYMZIRBQWBTIDPKKIZXUDGJTRQHWLCYGYPAKLVQSHYEECAZZRDDZFEBGLKVBBPMDHIJXCXCOWVRENAHCLJAZSZOKTEGPKUMMGPOUAYOXNILRHOVRESYNUMBFQHUNDLPYDFHVHFVSCQMBMLPLUSWXGFCTJ");
    msg.service_type = 63U;

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
    msg.setTimeStamp(0.018633648914398004);
    msg.setSource(59872U);
    msg.setSourceEntity(251U);
    msg.setDestination(43113U);
    msg.setDestinationEntity(109U);
    msg.value = 0.8278598924877525;

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
    msg.setTimeStamp(0.816242076318128);
    msg.setSource(63546U);
    msg.setSourceEntity(212U);
    msg.setDestination(17836U);
    msg.setDestinationEntity(125U);
    msg.value = 0.8529708081950061;

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
    msg.setTimeStamp(0.8399700280608318);
    msg.setSource(20441U);
    msg.setSourceEntity(239U);
    msg.setDestination(804U);
    msg.setDestinationEntity(172U);
    msg.value = 0.477215474995497;

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
    msg.setTimeStamp(0.9963218044022716);
    msg.setSource(49149U);
    msg.setSourceEntity(182U);
    msg.setDestination(46176U);
    msg.setDestinationEntity(22U);
    msg.value = 0.9200738434316126;

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
    msg.setTimeStamp(0.6970410996977027);
    msg.setSource(1770U);
    msg.setSourceEntity(85U);
    msg.setDestination(33345U);
    msg.setDestinationEntity(83U);
    msg.value = 0.7229835556029427;

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
    msg.setTimeStamp(0.8357195281132981);
    msg.setSource(30457U);
    msg.setSourceEntity(146U);
    msg.setDestination(7930U);
    msg.setDestinationEntity(95U);
    msg.value = 0.774717910882874;

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
    msg.setTimeStamp(0.6903387568018637);
    msg.setSource(49116U);
    msg.setSourceEntity(159U);
    msg.setDestination(31280U);
    msg.setDestinationEntity(127U);
    msg.value = 0.185763143091337;

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
    msg.setTimeStamp(0.7297599458141876);
    msg.setSource(21385U);
    msg.setSourceEntity(135U);
    msg.setDestination(14647U);
    msg.setDestinationEntity(132U);
    msg.value = 0.7406556320259781;

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
    msg.setTimeStamp(0.8619044529032618);
    msg.setSource(52017U);
    msg.setSourceEntity(176U);
    msg.setDestination(20058U);
    msg.setDestinationEntity(146U);
    msg.value = 0.5533636686243556;

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
    msg.setTimeStamp(0.7916931790657051);
    msg.setSource(59854U);
    msg.setSourceEntity(7U);
    msg.setDestination(30178U);
    msg.setDestinationEntity(214U);
    msg.number.assign("NZLBANDZXNQLQFSXHCWYYLFWQMPMPQFEYMJMXGKHFUXBBEUWSCXFAAOWVSTMCTPKIWJGHHONEPVRQILOLYHCUERVIXGICPAFTQNXECTRDBGRBDECZKRQNHSIRGKPMAOVMZVNXUILDWIZBIBGFJKJHLAFOSOTQUSUGSATVJLVZJSPMFTOKDNHSYYVVIWTGT");
    msg.timeout = 32574U;
    msg.contents.assign("ZJEGUQSWCJPAZRYREHKXDGYJILGLQHGTOEIMTBXJZUGZBWZNYYDMCWUUZMQBQLJFWCJNKSDIIXCORBVBEGSILXKUFWNHGRXNZSOVTSDYONBZWMMNPMBPRFGJQYOOWCTUDEICFGPUALEFJRLVBEFRCXTHLPVYQMPZKIRVQ");

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
    msg.setTimeStamp(0.23392064343469066);
    msg.setSource(36369U);
    msg.setSourceEntity(61U);
    msg.setDestination(61265U);
    msg.setDestinationEntity(155U);
    msg.number.assign("MATTXQCNJMWYKEIGZZYHAFLLBBMYUSLQQXCJUXO");
    msg.timeout = 36789U;
    msg.contents.assign("RFDAPHCKDRKFLENIKCPQEYUORQQNNSLORKURCHSYUSGOFKBICZXYVOIEVMYJDXMSYVZISZVNZPCPGDXHSZABIGGBXBDMEPWYTKLAOANTMJHZNATGWCTVJICDARGWTNYVCAMCADXKZZOWQCJBZBWEUYROYLLJXTUFIEFXKJINFVXTDQHFHBPUSVUJKLOSUHGWNMEPGMRDEMHUYKAO");

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
    msg.setTimeStamp(0.12397760529744506);
    msg.setSource(4110U);
    msg.setSourceEntity(125U);
    msg.setDestination(48948U);
    msg.setDestinationEntity(93U);
    msg.number.assign("LQZNSTXYFBAFCCORXHKNYOBBDKNRGOAIASITUWKAUAYZWZODVZMTTVCMSJL");
    msg.timeout = 26322U;
    msg.contents.assign("QIPDIMLZWWLOXOFCBIMDHGUJJDRIZZWONECMQAXECUFBFYJDDPYKEFOYZXBDINHKOLPSAASBBJUQTIRMUXJXFVSTLTGOHBVITZVDMPVCLPSRHNFSYMZFNGYLLURTYEGIJVAGRQECXXAWOGLJUWMHKVOLFEHSZAUIUXLNAUHCOINBGBWPWPQTGCCTNHMDEGEZJKSFKVEAVMYOQQQWPASTDHJCQDCJRQZKTMKYPNYVSNARGUSVKKEXZXWH");

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
    msg.setTimeStamp(0.7604306587526221);
    msg.setSource(39610U);
    msg.setSourceEntity(238U);
    msg.setDestination(23856U);
    msg.setDestinationEntity(131U);
    msg.seq = 2206050683U;
    msg.destination.assign("UMWGXAYYNQLOQVTQEPNBXWNIUVUISTGTBKGRVTWMPPZMDXLFSTCMUAGKRKDRTNXPYSOAKMKIIXPYRMQSYGGXBOGLIODKSDNHEFCQUIBWHJZTCJTVQJBCYZOUQEDJUFBKSNKWCEFKVRNYFEPSFOLHNACVWCZMQNJDAXNTZHYPOQGJHVQJWFXRLHYICIXJTIEGOALLDABADPZOCEUHGWJEWMSELBDRRHXZOUZKZLSA");
    msg.timeout = 25751U;
    const char tmp_msg_0[] = {18, 44, -5, 96, -81, -52, 23, -49, -114, 28, 102, -24, 9, 49, 76, -108, 93, -13, 24, 82, -65, 107, -55, 53, 33, 45, -39, -31, -77, -111, -110, 114, -117, 83, -8, 35, 78, 29, -7, -14, -106, 35, -29, -108, 118, -18, 58, -37, -92, 96, -126, 108, 114, 117, -92, 5, -103, -87, 41, 82, 66, -110, 22, 4, -62, 112, 8, 96, -48, 69, -26, -108, 20, -52, 104, 15, 48, 112, 38, -92, -116, 43, 98, 84, 20, -85, 22, 62, -124, -53, 68, -50, -112, 17, 72, 57, -16, 53, 120, 55, 36, -3, -78, 107, -113, -68, -99, -5, -10, -95, 121, -36, -49, -44, 125, 83, -13, -64, -81, -47, 79, 107, -103, -24, -41, 30, 31, -71, 85, 78, -95, 60, -34, -39, 22, -125, -93, -101, 103, -1, -95, -56, -92, 62, 6, 25, -126, -122, -47, 116, -35, -9, 69, -41, -83, 109, 79, 4, -96, -94, 1, -29, -63, -120, 71, -114, -84, 36, -94, 50, 27, 9, 71, 48, 78, 12, -62, 78, 42, 7, -10, -71, -112, -46, -59, -34};
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
    msg.setTimeStamp(0.6344734314606318);
    msg.setSource(2819U);
    msg.setSourceEntity(241U);
    msg.setDestination(7417U);
    msg.setDestinationEntity(131U);
    msg.seq = 1012744155U;
    msg.destination.assign("PDMHSOGNNZZDRIQXGRBPWRZGJSVMIOKLQYBFZRHGXOKLFBMDMGBSXJSTLEQHNUZAHMBEHPPCDUQBCCAKUJPPCLKHAIBLRAQZCVVQIZDINDVMLRWSINWDZCRJTYIEAGKUIJYXNOFOEVWATOQUNP");
    msg.timeout = 2141U;
    const char tmp_msg_0[] = {-62, 113, 14, 114, -15, -9, -34, -108, -61, -112, -78, 114, 46, 33, 74, -126, -127, -80, -114, 108, 7, -14, -126, 114, 103, -71, 92, 18, -43, 5, -128, 12, 60, -107, -24, 45, 28, 37, 94, 104, 11, 3, 120, -32, 22, -6, 51, 42, 71, -124, 111, 124, 68, 120, -11, -7, 11, -35, 67, -34, -27, -126, 51, -71, -27, 105, -14, -53, -35, -20, 117, -4, -48, 41, 55, -84, -29, 100, -90, -8, -117, -77, -2, 101, 19, -61, 85, 121, 111, 33, 106, -31, -109, 8, -1, -116, 15, -67, -59, -122, -78, 9, 80, -61, 14, 6, 18, -30, 30, 73, 21, -116, 76, 87, 42, 9, -106, -107, -66, -114, -6, -97, 72, 66, -45, 55, 62, -101, 121, 83, -45, 89, -121, 16, -111, -109, 23, -84, -25, 75, 23, 53, 120, -41, 72, 114, -30, 43, 77, -118, -106, 71, 126, 2, 39, 32, -123, -95, 82, 4, -21, -49, -91, 33, -74, -14, -90, 44, -8, -57, -57, 75, 88, -122, -115, -21, 88, -7, -68, 60, -80, -95, 52, -45, -115, -121, -36, -10, -56, -46, 31, 84, 54, -117, 107, -91, -122, 35, -29, 126, -64, 35, 123, 37, 4, -12, -116, -39, 96, 95, 26, 48, 29, -127, -20, -34, -71};
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
    msg.setTimeStamp(0.4822587425751723);
    msg.setSource(48795U);
    msg.setSourceEntity(136U);
    msg.setDestination(38647U);
    msg.setDestinationEntity(227U);
    msg.seq = 28585762U;
    msg.destination.assign("QCMPPRTDENWYLVLGEQLOAHMQMSHGVFTOABNPJK");
    msg.timeout = 49494U;
    const char tmp_msg_0[] = {120, 57, -24, 40, -54, -12, -26, -122, -21, 53, 120, -72, -2, -74, -18, 59, -110, -17, -16, -31, 73, -86, -34, 26, -40, -107, 89, 114, 123, -124, 99, 14, -96, -22, -34, -124, -119, 99, 69, -34, -85, 26, -104, -102, 109, 60, 85, -97, 117, -76, -28, 90, 62, -109, -80, 97, -73, 31, 108, -41, -1, -112, 55, -77, 113, -80, 91, 36, -115, -39, -120, 17, 77, -69, 28, -24, -119, -127, 53, -13, 28, 124, 11, 97, 48, 106, -43, -20, 6, 51, 102, -89, -8, 36, -111, 89, -120, 35, 89, -104, 0, 34, -121, 100, -27, 116, -101, -102, -46, 107, -28, 46, -48, 92, 59, 23, 86, 72, 95, -33, -82, -108, 25, 46, 39, -84, 104, -59, 96, -92, 1, 93, -3, -31, 41, -123, -105, -89, -126, -44, 36, -53, -124, 108, -63, 118, -114, 35, 79, 122};
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
    msg.setTimeStamp(0.9315584921697275);
    msg.setSource(19316U);
    msg.setSourceEntity(69U);
    msg.setDestination(31913U);
    msg.setDestinationEntity(110U);
    msg.source.assign("COXONDOZYCWZWZUGYQJEUNTK");
    const char tmp_msg_0[] = {-81, -113, -39, -103, 8, 120, -69, -66, 12, 86, 57, 24, -91, 50, 4, 26, -120, 43, -1, 121, 43, -59, 19, 65, 124, -108, -88, 88, -68, 89, 62, -5, -55, 23, -122, -83, 82, 23, -7, -64, -30, 81, -65, 93, 53, 13, 92, 113, -69, 109, -67, -90, -60, -78, -114, -62, 122, 85, 93, -31, -27, -28, -42, 28, -29, -102, 74, 76, -25, 122, 9, -2, -19, -4, -94, 95, 2, -113, -91, -75, 85, -73, -7, -120, -126, 96, -48, 61, -11, 70, 85, 43, -88, 113, -127, 63, 41, 35, 110, 94, -70, -40, 61, -5, 108, -88, 102, -63, -73, -48, 31, -16, -88, -127, 73, -22, -83, 25, -72, 47, -70, 23, -62, -22, -13, -102, 36, -31, -61, 89, -48, -62, -24, -98, -96, 71, 62, 121, -81, -50, 4, -53, 120, -56, -109, 117, 83, 66, 29, -75, -107, 115, -21, -50, 98, 16, 90, 64, 117, 102, -61, -23, 66, -79, -26, -5, 74, 31, -14, 28, -2, -115, 88, 122, -88, 35, 25, 60, -108, 43, 57, -18, 59, 26, 78, -102, -82, 75, -34, -96, -57, 115, 84, -119, -53, 54, -8, -52, 84, 96, -12, 14, 109, 26, -53, -43, 63, -89, 43, 114, -111, -26, -27, 33, 1, -9};
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
    msg.setTimeStamp(0.3401048145175658);
    msg.setSource(26012U);
    msg.setSourceEntity(225U);
    msg.setDestination(1275U);
    msg.setDestinationEntity(240U);
    msg.source.assign("NPAIQCGUSZRFPTZXFRMCCWUHMQYSLUBPZXPYZRFKLNIGMQNOHHKGHCALSIDBOSODBLWUSZKPCWSFELUYISGHJWQAPKVBPNVNBPFDEVGUFAJHJVTKVXVQMUIOPOTMJQREYSKHQKWXCLXDDJYVEZTLMOZQAGXVNJUDZWWMRIACEJYEYDGCBHDGRFTUJTRVBSEFXBNMEEIQAZ");
    const char tmp_msg_0[] = {30, 72, -112, -20, 57, -80, 36, -102, -79, -27, 96, 38, 123, -58, -26, -96, 73, 29, 108, -38, -57, -73, -46, -34, -26, -82, -113, 55, -29, 122, 36, 118, -105, -102, -126, 86, 58, 91, 55, 86, 24, -102, -81, -48, 29, 89, 31, -26, 56, 10, 113, 109, -39, 9, 25, 23, 108, -81, -117, 49, -84, -128, -43, -29, 84, 35, -91, 51, 85, 50, -92, 5, 59, 24, -79, 56, 13, -54, -79, -32, 110, 35, 56, -23, -80, 93, 84, -59, -64, 13, 117, -4, -123, -108, 65, 30, -46, 60, -92};
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
    msg.setTimeStamp(0.9567888260581088);
    msg.setSource(12891U);
    msg.setSourceEntity(238U);
    msg.setDestination(56092U);
    msg.setDestinationEntity(253U);
    msg.source.assign("DHULEEFEGKUPCVWOSDIJBQJCJOELHRKLVMNNQRHIDEPZDWFQVVNKDNMYZMROFMAAXYKPLRIWJSHZOZROJPXGALFIILGDCOBFPKARXYSNEUTHYBSMRLAVKOTNRWZGTXYKIUQQJPANGBIFYYEGMLZNUZIHYTDCOBVCWBRJM");
    const char tmp_msg_0[] = {38, -107, -72, -19, 87, 1, 38, -27, -2, 101, -97, -105, 81, 19, 67, -34, 88, -114, -10, 44, 73, 35, 76, 79, 93, 122, 17, -115, 2, 109, 54, 123, -53, 24, -64, 54, 37, 16, -78, -27, 5, 75, 40, 13, 126, -11, -15, -118, -83, 52, 61, 13, -5, 11, -69, 85, -20, -111, -113, -82, 65, -13, 97, 24, -116, -73, 90, 56, -19, 69, 24, 58, -30, -80, 6, 29, 74, 69, 51, 60, -84, -55, 50, 61, -56, 78, 10, -125, -94, 112, 122, -11, -59, -61, -86, 100, -18, 0, 47, 13, -74, 121, -107, -84, -106, 53, 97, 12, -111, -75, 33, 76, -87, 38, -94, 119, -50, -2, -127, -23, 11, 110, -128, -88, 86, 77, -46, -22, 108, 103, -108, -118, 80, 46, 32, 50, -102, 28, 100, -125, -39, -75, -99, -42, 111, -97, -18, -16, -60, -17, 48, -19, 57, -8, 80, -106, -75, 82, -103, 41, 26, 70, 94, -3, 83, -89, 97, -8, -77, 48, 114, -39, -91, 107, 71, 62, -11, 55, -34, 66, -18, -86, 84, 12, -67, 112, 51, 26, -114, -54, -65, 12, -29, 37, -16, 82, 88, -128, -5, -91, 87, -50, 19, 67, 31, -66, -124, -100, 34, 73, 73, -44, -24, 6, -75, 50, 42, -44, 81, 121, 40, -90, 89};
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
    msg.setTimeStamp(0.5558552764770459);
    msg.setSource(61763U);
    msg.setSourceEntity(237U);
    msg.setDestination(20731U);
    msg.setDestinationEntity(175U);
    msg.seq = 1079900248U;
    msg.state = 142U;
    msg.error.assign("MLPDYVRDDXASUZKUAHGCVBQBWNLMNVCVBUSWFGIYXSVUSZQMCVEFSTPDHKGFJXVMLSTRPKZJGWIQTNOHLREMCUIKAJDPPBENMBJNGMXMFNQYFELHPRAWCKACWVBKKBEBIIOJJKWJYOALPZ");

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
    msg.setTimeStamp(0.03818529557544825);
    msg.setSource(51533U);
    msg.setSourceEntity(47U);
    msg.setDestination(1680U);
    msg.setDestinationEntity(103U);
    msg.seq = 436182763U;
    msg.state = 94U;
    msg.error.assign("FDNFTYTQHWYGZDTUMYGKZLIRCRNMUJRRBWEWOUCSYBPGKOSICZONWTJHAQMTHHKSYJNPFGAQELIWPVXGVGOBPDKAVHQGUXQLWTZKCAKPXXRFSSHPEZJYJNI");

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
    msg.setTimeStamp(0.8409977458413249);
    msg.setSource(17580U);
    msg.setSourceEntity(219U);
    msg.setDestination(10625U);
    msg.setDestinationEntity(150U);
    msg.seq = 225105730U;
    msg.state = 157U;
    msg.error.assign("CICEOFPVWOKAGIDSAQAYHBTSTUJBXBUFMARMIKZYNGKUXSLXHKZVPDGPRWCRMMSZVSRQDCYFJBNXMGVPQVTREVYUXKOSNLBYJQYIXLJWFGSTYJWLKIHOCPCHQFSHWXKLOOESEMIOZBMJQWBGDVWAEPZRRFHHPNMLOUETYDBQZICCRGIA");

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
    msg.setTimeStamp(0.035538659318284704);
    msg.setSource(31705U);
    msg.setSourceEntity(81U);
    msg.setDestination(51202U);
    msg.setDestinationEntity(25U);
    msg.origin.assign("LDHPCMFOEMSUXRAGXYEONWWIVRTDBXQYANTD");
    msg.text.assign("TZUFDAIRKWZIOGHTMHJTZLKMRSWRINCOXZPZAUDQQQIYBNEVIXMYPPXMYUAERJCVVDXPLIJOYZQDGZJCWXCSEKOSDJBQWCVCLVFQMNCBIYSUENTHYZSNCLUROQCSELMEQKTHAARNTFLPIWKUIZRNBSOVLPLJFUDAXWGTULYFVSSMXJFWBHJMWFPPOGOQOTFHXPDTNNYKWEGIEB");

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
    msg.setTimeStamp(0.3439181953702253);
    msg.setSource(8437U);
    msg.setSourceEntity(81U);
    msg.setDestination(9881U);
    msg.setDestinationEntity(224U);
    msg.origin.assign("DZGYEPNPWNVPLTNITYUXYUAHSAIGURRBERGULSXXQYGRVAIMOLEPYMGUBFZFYQLHRRHASCDQNJLLOJMFAKWXKXMHIPSCYBFXCPFLAXLTZCSPTWBSPZMBDZJFNKCBQHCKNWMZAWQEMNPHJQTMWSIBJP");
    msg.text.assign("JQESEXUZMOMSQOYAUANLGYZPBIVCHENHIEDLNVFMUBQKR");

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
    msg.setTimeStamp(0.08668945190659827);
    msg.setSource(58926U);
    msg.setSourceEntity(31U);
    msg.setDestination(28136U);
    msg.setDestinationEntity(111U);
    msg.origin.assign("UTDZXQNSKOEUVGORHDFQIJAELQRCMEFWFTSCFDXHSLJXHUVNPMRIHQSUWECWTZJJBFWJHCNKBBNZMNAYMIEBRTNPAFESTJDEOIYQFWPCJBWGXQUATDBXTTIDTLNRXAMZPGLUMOWGJMEKDNXPFKVLYHSJPIZIVLXYQHBKGOBYGEKTL");
    msg.text.assign("CKOHTWKCTJUIJFFUPNPCMXHUVQDQBLUSTRDJERTKHEVZPNEMTSZEWAHAJOAFSKRRZO");

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
    msg.setTimeStamp(0.009534157849402147);
    msg.setSource(41899U);
    msg.setSourceEntity(40U);
    msg.setDestination(7264U);
    msg.setDestinationEntity(17U);
    msg.origin.assign("WKKIBJBZAPFXWMNQLTJZVGTXONNDPZYSVQHMBBVVCMNLUABFXFSATIUTFXEMOWLEURTLKMCOSGKBOXCOYHZDWWWESGOJQNGHHVRXDCIYZJQIHIHJVRMUNKBLAEYSEGPYFDWCALRKJZOKITUPTGYCAMEZRNPGODWDQFZUVKSDPQFWVLAPCSCCYBXUTYVEYESJQTOUMGJIRHIQKPOTFUQXLMJRSDAQPBUZXCHFHJXNNZGA");
    msg.htime = 0.7335761634261576;
    msg.lat = 0.5001173923368984;
    msg.lon = 0.7134392930374002;
    const char tmp_msg_0[] = {22, -80, -123, -78, -83, 11, -27, 23, -7, -63, 106, -41, -59, -14, 95, 11, -102, -106, -66, 65, -99, 27, -23, 36, 122, 93, -39, -35, 98, 9, 43, 61, -17, 106, -99, 42, 27, -88, -33, 5, -68, -34, -26, -74, -20, -7, -26, -126, 99, -81, -15, 84, -16, -59, 4, -113, -47, -30, -33, -83, 7, 19, -84, -118, 0, -105, -72, 17, 75, 124, 121, 99, -94, -73, -61, 31, -21, 100, -30, -5, 64, 95, 105, 115, 3, 17, 75, 62, -68, -28, -22, 90, -91, 121, 52, -30, 100, -84, -118, -9, -21, -82, 91, 60, -37, -116, 121, 61, 91, 0, -2, -77, 48, -61, 39, -56, -115, -109, 82, 94, -64, -48, -79, -54, -124, -81, -67, 82, -106, 81, -71, -30, 99, -81, 66, -111, -119, -60, 40, -40, 73, 114, -15, 81, -25, -61, -121, -83, -113, 105, 34, 18, 111, 38, 33, 118, -1, 76, 82, 76, 67, -106, 3, -50, -120, 116, -39, -109, -27, -85, -98, 119, -54, 96, 103, -44, 70, 64, -39, -40, -39, -38, -61, -76, -78, -5, 40, 18, -123, -75, 56, -33, 107, -92, -69, -87, 110};
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
    msg.setTimeStamp(0.7453683077553512);
    msg.setSource(12795U);
    msg.setSourceEntity(170U);
    msg.setDestination(31065U);
    msg.setDestinationEntity(229U);
    msg.origin.assign("SETHVOYWKEUISEC");
    msg.htime = 0.8883836162975483;
    msg.lat = 0.2857856639021019;
    msg.lon = 0.6846204966162334;
    const char tmp_msg_0[] = {-21, -12, -116, -108, 116, -124, 109, -29, -119, -13, 94, -55, -104, -61, -2, -117, -80, 105, 12, -76, -127, 101, -88, -30, 64, 115, 99, -56, -89, -2, 108, -110, -8, 27, 110, -95, -66, -49, 118, -40, -115};
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
    msg.setTimeStamp(0.474366975761931);
    msg.setSource(11518U);
    msg.setSourceEntity(42U);
    msg.setDestination(39905U);
    msg.setDestinationEntity(89U);
    msg.origin.assign("TIYRCERQULBWQGGTYJXEOEQNDMAPXLORPJHBGYPGKMAVIFMXONPZXMOXZFDKXNLEUAZZTHGAVDNIIEHOZHIJCZKXYSVZHYCJUBJKUYWVNIGRERMMOISYFVL");
    msg.htime = 0.22695694058596727;
    msg.lat = 0.2017432250806307;
    msg.lon = 0.008787950847813697;
    const char tmp_msg_0[] = {64, 73, -74, 92, 38, -119, 15, -54, -21, -93, -77, 105, 110, 1, -102, 35, 113, 106, -81, 17, -92, -28, -53, 11, -9, -59, -33, 53, -83, -53, 77, -72, -71, -63, 20, 5, -118, 9, -35, 15, -126, 78, 42, 20, 28, 19, 83, -99, 110, -61, 64, 94, -95, -123, -122, -6, 61, 92, -70, -20, -103, -24, -111, -6, 26, -31, -127, -13, 49, -105, -72, 43, 12, -104, 83, -76, -59, -115, -116, -109, -80, -97, -6, 91, 83, -93, -87, 83, -88, -118, -99, 8, -126, -15, -27, -69, -89, -126, -66, 26, 34, 11, -65, -39, 66, -88, 60, 113, 81, -87, 92, 75, -57, 34, -122, 102, 10, 54, -25, 33, 32, -42, -122, -33, -64, 70, -95, -47, -124, 94, 3, 122, 58, 2, 2, -104, 73, -23, -124, 24, -79, -63, 18, -54, -56, 36, -26, 125, 66, -58, 106, 41, 41, -49, -109, -24, 20, 64, 99, -12, -28, 29, -61, -15, -18, 115, 21, -128, -66, 42, 33, 78, 65, -34, 33, 124, -27};
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
    msg.setTimeStamp(0.2490560480408588);
    msg.setSource(40853U);
    msg.setSourceEntity(7U);
    msg.setDestination(40636U);
    msg.setDestinationEntity(75U);
    msg.req_id = 33209U;
    msg.ttl = 29563U;
    msg.destination.assign("VHFPQEOHLMZICWSILFXAIWTAJBZPIXADWXEFUBEKSPOCOPRWMNDMGNVIYTSZNLOHRMRYPUDLHUNEFHJYORCDCAHKUKBPNKMPYMOYJVBXEBVNGGZJKGQQYRTCCJCFHADYENAQTTGZFXQBUFSZMCLFGGRXOASDBHFZZBUKXWLQRIJLSAIRDSKSEJPTCPKVSVGTEUHELNUKWJQQPWRWOAYTZAVUITYMMJVU");
    const char tmp_msg_0[] = {87, -86, 111, -78, -16, -73, -65, 122, 51, -122, 51, -59, -120, -43, -20, 45, 96, -7, 8, -30, -70, 109, 86, -123, -60, 11, 79, -94, 42, -80, 76, 18, -62, 100, 126, 98, -74, 2, 16, 112, 29, 10, -11, -80, -121, 37, -52, -42, 24, -125, -88, 47, -7, -6, 122, 73, -91, -60, 5, -57, -21, -36, -23, 90, 78, 94, -79, -122, 54, -30, -22, -116, 67, -71, 103, 44, 85, 60, -73, -98, -119, 54, 111, -42, 99, -57, 31, 116, 41, -102, 33, 108, -80, -18, -16, 52, -14, 58, 20, 0, -124, 10, -80, -62, 116, -88, 4, -40, 24, 27, -13, 29, -112, -120, -76, -23, -24, -94, 72, 18, 16, -1, -69, -73, 0, 70, 48, -25, -99, 7, -32, 33, -102, 5, 41, -59, 30, -70, -40, -39, -76, 3, 47, -29, 29, 57, 53, -47, 118, 8, -66, 30, 44, 3, 31, 69, 105, -119, -111, -82, -91, 125, -120, -23, 13, 83, -95, 118, 93, 46, -88, 80, -32, 3, -12, -18, -84, -107, -85, 124, 52, -10, -105, 13, 111, 125, -47, 49, -118, -22, 73, -27, -75, 83, -28, -33, 43, 90, -126, -128, -74, -40, -15, -44, 43, 122, 52, 103, -98, 24, 82, -63, 12, 22, -107, -78};
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
    msg.setTimeStamp(0.6107453144621549);
    msg.setSource(57690U);
    msg.setSourceEntity(153U);
    msg.setDestination(8353U);
    msg.setDestinationEntity(73U);
    msg.req_id = 62378U;
    msg.ttl = 41281U;
    msg.destination.assign("GQHRHMJKPLOZTEFFRONZYDYFQTTYBXZWFPVZHSIRAAQJWQIWYMBVIVHNWRJEKZNAPKKYLAUYVUSJHSGEBDKURLTQQGHMFRHTUXLFUMGNUWKDGABTBJISDSOUPBDGGLAUJAVFXBSXJUESCODIZPKXTACOSLZQNZOJXEVCPFZNRNKOJYFLLMCXYLCTSMOMMTNWCEDRWIA");
    const char tmp_msg_0[] = {-29, -70, -113, 61, -63, -15, -93, -66, -68, -124, -123, -5, -112, -119, -19, 66, 69, -28, -101, 62, -28, -11, -17, 3, -111, 50, 113, 16, 38, 90, -58, 117, -128, 119, -50, -123, -33, 12, 53, 58, 73, -52, 45, 104, -91, 72, -121, -3, 77, -96, 30, 87, -97, -103, 3, 8, 106, -24, -115, 113, -51, -74, -59, -57, -11, 29, 30, 99, 11, -79, -87, 2, 57, 94, -97, -103, 43, -93, -105, 52, 78, -77, -35, -81, 31, 124, 8, -114, 0, -86, -32, 54, 57, -15, 52, 121, 108, -32, 21, 67, 102, 13, -73, -76, 75, -46, -48, -119, 30, -1, 61, 19, 75, -127, -47, 33, 109, 28, -37, -62, -87, -103, 25, 22, -17, -10, -65, 61, 22, -28};
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
    msg.setTimeStamp(0.9042473245951834);
    msg.setSource(58224U);
    msg.setSourceEntity(117U);
    msg.setDestination(1463U);
    msg.setDestinationEntity(87U);
    msg.req_id = 8784U;
    msg.ttl = 55497U;
    msg.destination.assign("YWONXBTUDMQAZMZEPGGGBMHCSSSHRJDFAMEVOEDEVICETLYRUSWHTFBDPNCAFXBCTFIRQUOIFATHLRWLDAPUFNCHLMVKFPCIFWXJKPDNOJTAWNQHZYCCMRVOYGGLVRHULYURWPR");
    const char tmp_msg_0[] = {92, 49, -57, -8, -90, 26, -125, -43, 64, 29, -10, 126, -25, -94, -45, 76, -21, 125, -74, -124, -54, -103, -14, 76, 75, -44, 62, 11, -98, -66, -101, 116, 112, -37, -46, -120, 18, -70, 76, -17, -3, -1, -110, -40, -70, 97, -75, -98, 13, -41, 59, 86, -19, 6, -82, -15, -46, 19, 85, 90, -33, 113, 112, -86, -127, -93, -84, 36, -63, 67, 55, 64, -101, 87, 26, -58, -24, -107, -25, 31, 17, -61, -96, 98, -70, -12, -89, -96, -117, -24, 30, 12, 26, -46, 67, -84, 98, -106, 100, 105, 73, 26, -106, 0, -46, -14, 56, -98, 67, -6, 6, -128, 110, 30, -87, 14, 16, 97, 3, -32, -84, 62, -20, -12, -55, -117, 36, 119, 71, -74, -76, 58, 46, -95, -81, -5, 111, 90, -104, -6, 79, 30, -124, 95, -44, 71, 38, -37, -42, 5, -4, -128, 13, 76, 45, -18, -125, 10, 74, 16, -38, -86, 83, -61, -20, 52, -78, 106, 72, 21, -65, -116, -100, -120, 124, 10, 51, -1, 126, 117, 98, 83, 19, -34, -23, -9, -34, 76, -49, 114, -55, 34, 4, -21, 104, 121, 31, 85, -49, 108, 86, 44, -3, 68, 108, -24, 74, 7};
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
    msg.setTimeStamp(0.8064935075945044);
    msg.setSource(5053U);
    msg.setSourceEntity(231U);
    msg.setDestination(40802U);
    msg.setDestinationEntity(67U);
    msg.req_id = 51420U;
    msg.status = 129U;
    msg.text.assign("USZOUFXGVKFELYUCK");

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
    msg.setTimeStamp(0.03224787428560216);
    msg.setSource(61254U);
    msg.setSourceEntity(240U);
    msg.setDestination(44435U);
    msg.setDestinationEntity(148U);
    msg.req_id = 16744U;
    msg.status = 211U;
    msg.text.assign("JBADGYTEWSIKEDEOXDJZZADASUNOSOALVMUQUQGIBIHXFGSKPQUOLYHKMPMNBCGLMDZCSLZALKXRTBIBJRYVLOJTHAEWIGRRCVNQCEQAHHTCJYEWFMBWJBJTNLVTGETDVUVFCNGUIXHLAYOYKFDYSMIOAFU");

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
    msg.setTimeStamp(0.879958059442778);
    msg.setSource(42188U);
    msg.setSourceEntity(115U);
    msg.setDestination(50515U);
    msg.setDestinationEntity(159U);
    msg.req_id = 58409U;
    msg.status = 166U;
    msg.text.assign("EVQALRHNAMBGXWNYPPIOGJHCZAWGZMWISXFAPMKJLIVUDESKBXKUOWXTIFJDYPXHHMXDMOPFFJIROFZWKNBBMUQTYVALVDTHNWUV");

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
    msg.setTimeStamp(0.8142205677139734);
    msg.setSource(54792U);
    msg.setSourceEntity(20U);
    msg.setDestination(29244U);
    msg.setDestinationEntity(19U);
    msg.group_name.assign("IGKYATCPZALQOUTHIMFVQBXFXKUNKYPYOJFBMWNRHNGPTADYORFICMLPZTBJBQXSPMSSCNBPAFPIHGVNLODLHNWYHXQUVJROFNTENCURYQIXWHKJLSQWLZTGBUVGCZIKFEGYJZBJ");
    msg.links = 3774449278U;

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
    msg.setTimeStamp(0.383520258848151);
    msg.setSource(57188U);
    msg.setSourceEntity(149U);
    msg.setDestination(46886U);
    msg.setDestinationEntity(146U);
    msg.group_name.assign("GLBEXIGGFFKRPPUKRAVPBYWOEJKLDRTOZPLJRMEWVNHQCYMHZHFLJFHQBRIFMJOOQOYJBTYPWQOSNYHRHCEMDKTNARDMOZLNWNMPMYGGGZQWDOCAS");
    msg.links = 3454665110U;

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
    msg.setTimeStamp(0.15277290510965336);
    msg.setSource(61377U);
    msg.setSourceEntity(128U);
    msg.setDestination(64211U);
    msg.setDestinationEntity(83U);
    msg.group_name.assign("DCQMNBNIPZUKJWSAKRCESKWFWTGAXAVAJHEOUWXFFFHTZCHITTIOGCCMJLTTGGVUTMVUPPDMOPCQVZVLLBTTLYNNNBQIDOALPEFJOKKCYWQNQQHYQYDALRHVDEVBBHAFOCSLFUEKJEDXNODSRFVRWSYEJCAGQXMXSNIVBNZFXXGJSYKYWSPWXUHVZKGEUEGSMPAMJKPSQIUWYRRDFLEMHBZMCKZBXYRZZLOLGPYWPJUTUNH");
    msg.links = 3883130230U;

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
    msg.setTimeStamp(0.8770935697790077);
    msg.setSource(46807U);
    msg.setSourceEntity(8U);
    msg.setDestination(3231U);
    msg.setDestinationEntity(183U);
    msg.groupname.assign("OXQUVXXANRGHUMENPMFRFBRWKGDQKIDZZSWICQGQUCOJOYNAHWEMPPCMJBEVWCNZHURKYXAVDLDESYAPHJQTMTLFTMXYTTMFYNVQTNJYCNADJACGZADEPYTBXAIZCORBPFEQVXFLJOGBYQJPGOQFSEKMVSUKALUOWTWBEZFHUKNXESTWIP");
    msg.action = 152U;
    msg.grouplist.assign("WSVISLCEWZVPSADGCZCKPGTJRESYHDILKOXAMDVXOQDUFXHDCMQJNZRGPQTPSCBETGLQKNNJOGRTOGTYHBAROJLVPWCFBQFBVRIVVOICSFGNFZIREXUDKGOSFAWXUZNHAQNZZKSWDYEUDXMVWVFDLIHEKUYUIQAMWOOKGAJLSNSNPZRXJVTHYHUUMREJCYTIJRFTRKPMQYYPBBMYLUUZKFI");

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
    msg.setTimeStamp(0.08734442815855803);
    msg.setSource(25025U);
    msg.setSourceEntity(172U);
    msg.setDestination(13061U);
    msg.setDestinationEntity(39U);
    msg.groupname.assign("PISQOHOLXEOKGXCBECEMZAVCTJVWVNJTSMFALIBYQJYHOPJQONLSVZHZGWXSHOMBPVVLPCXSDWUYEDITRXTRHFCFRGZERJZCNAORFUPVEBNUU");
    msg.action = 204U;
    msg.grouplist.assign("LYNEFPXMMBDQZAODZASZGNRGYIUGTGNHHSXXMJSMRGIPFBUEJTHLJHXKKFYBRSWTQTP");

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
    msg.setTimeStamp(0.6389373819272317);
    msg.setSource(1285U);
    msg.setSourceEntity(20U);
    msg.setDestination(19466U);
    msg.setDestinationEntity(217U);
    msg.groupname.assign("HXFVPRLSTBLMXUTUIWDMYZVJKQXYPVBFPOMLAOCVKWYWZHGWQDDFFUZFQCHMBXTZUJYADPAOPIWJXJKPPTSNFPSZZETZMAVSSUEQRAVKVVIVGEZYCYDQEPHOQGAILEJZCRHONFXKMZOSKRWN");
    msg.action = 244U;
    msg.grouplist.assign("JHPIMQBCXNLADJFYZOWGTSFJGBAOTRZQYVPJBEZMCVAJSAQOPFNHGWRHTMZDKOYCYOWBXCMDPIVRSHQAEOTLZFPYSBNDAKDNUXPESOEIIHNZYJBZNTBOMWTSFTGBIMBAGERRKOKIIEVGJIXEESRRGLMMWUQRHAWVDCOACTKQPGXYTKQNIHQGDIEPUHLXKVQVJYKUJXYCWFDAXLURFNUVUDYPULWTBNGWFF");

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
    msg.setTimeStamp(0.6957520587781547);
    msg.setSource(33565U);
    msg.setSourceEntity(87U);
    msg.setDestination(54355U);
    msg.setDestinationEntity(1U);
    msg.id = 162U;
    msg.range = 0.21363970815990996;

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
    msg.setTimeStamp(0.6219541731085853);
    msg.setSource(7727U);
    msg.setSourceEntity(153U);
    msg.setDestination(9930U);
    msg.setDestinationEntity(183U);
    msg.id = 210U;
    msg.range = 0.3268439040786526;

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
    msg.setTimeStamp(0.9349856376502735);
    msg.setSource(28405U);
    msg.setSourceEntity(92U);
    msg.setDestination(22969U);
    msg.setDestinationEntity(180U);
    msg.id = 113U;
    msg.range = 0.9654970737672273;

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
    msg.setTimeStamp(0.9226666548704933);
    msg.setSource(7733U);
    msg.setSourceEntity(212U);
    msg.setDestination(33551U);
    msg.setDestinationEntity(227U);
    msg.beacon.assign("VWWTVGMCALEEIFDP");
    msg.lat = 0.2849361559763547;
    msg.lon = 0.516095752865739;
    msg.depth = 0.820997193693011;
    msg.query_channel = 13U;
    msg.reply_channel = 246U;
    msg.transponder_delay = 99U;

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
    msg.setTimeStamp(0.3095995123153348);
    msg.setSource(41622U);
    msg.setSourceEntity(131U);
    msg.setDestination(47246U);
    msg.setDestinationEntity(155U);
    msg.beacon.assign("CTEVTUBBLJBUOPYYPCJZADUUNFAYAJONVDOKGJDWUKGAFRAPVCRYWDJYYCEWHXKNRROBZSNOPWYIIPKMJWRLSPYUWQFDDIQXPLSPCMAXNHDEOOUOKFMDRMQRYXFLSZVFVTIMRZKNXVTMEMNAQ");
    msg.lat = 0.9612987259880496;
    msg.lon = 0.7076578913703533;
    msg.depth = 0.875004100956947;
    msg.query_channel = 166U;
    msg.reply_channel = 129U;
    msg.transponder_delay = 48U;

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
    msg.setTimeStamp(0.6582656267888276);
    msg.setSource(60649U);
    msg.setSourceEntity(191U);
    msg.setDestination(60896U);
    msg.setDestinationEntity(94U);
    msg.beacon.assign("HCVLQUUCVEVJKRNDCTOPS");
    msg.lat = 0.13619074713913415;
    msg.lon = 0.8281035588044007;
    msg.depth = 0.75780276786941;
    msg.query_channel = 143U;
    msg.reply_channel = 27U;
    msg.transponder_delay = 130U;

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
    msg.setTimeStamp(0.5717725010419674);
    msg.setSource(41289U);
    msg.setSourceEntity(154U);
    msg.setDestination(63407U);
    msg.setDestinationEntity(217U);
    msg.op = 54U;

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
    msg.setTimeStamp(0.3701526960824506);
    msg.setSource(55465U);
    msg.setSourceEntity(200U);
    msg.setDestination(38322U);
    msg.setDestinationEntity(93U);
    msg.op = 39U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YDUSDMYWGRLDYMPTANZBJTHJIFDCWLQHPOQTRXWKKFOSVKGVJZLLNWGIPKDRZWMRNNNHGOUBFPJHS");
    tmp_msg_0.lat = 0.038156489772859015;
    tmp_msg_0.lon = 0.39239806374136343;
    tmp_msg_0.depth = 0.42417180259303877;
    tmp_msg_0.query_channel = 239U;
    tmp_msg_0.reply_channel = 97U;
    tmp_msg_0.transponder_delay = 21U;
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
    msg.setTimeStamp(0.8683706510769064);
    msg.setSource(44640U);
    msg.setSourceEntity(101U);
    msg.setDestination(25403U);
    msg.setDestinationEntity(115U);
    msg.op = 252U;

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
    msg.setTimeStamp(0.06783919570068064);
    msg.setSource(35676U);
    msg.setSourceEntity(201U);
    msg.setDestination(33454U);
    msg.setDestinationEntity(57U);
    IMC::ControlLoops tmp_msg_0;
    tmp_msg_0.enable = 182U;
    tmp_msg_0.mask = 2924370825U;
    tmp_msg_0.scope_ref = 4133724565U;
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
    msg.setTimeStamp(0.544530118820532);
    msg.setSource(26611U);
    msg.setSourceEntity(6U);
    msg.setDestination(21929U);
    msg.setDestinationEntity(19U);
    IMC::UsblAngles tmp_msg_0;
    tmp_msg_0.target = 61805U;
    tmp_msg_0.bearing = 0.6959670791286676;
    tmp_msg_0.elevation = 0.31699897941579147;
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
    msg.setTimeStamp(0.10159803116483301);
    msg.setSource(44U);
    msg.setSourceEntity(178U);
    msg.setDestination(35310U);
    msg.setDestinationEntity(128U);
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 63851U;
    tmp_msg_0.type = 221U;
    tmp_msg_0.utc_year = 21944U;
    tmp_msg_0.utc_month = 178U;
    tmp_msg_0.utc_day = 100U;
    tmp_msg_0.utc_time = 0.9756571514012684;
    tmp_msg_0.lat = 0.023145387467800038;
    tmp_msg_0.lon = 0.9791700991629764;
    tmp_msg_0.height = 0.6637462875720666;
    tmp_msg_0.satellites = 51U;
    tmp_msg_0.cog = 0.3278709508841462;
    tmp_msg_0.sog = 0.4879176002881973;
    tmp_msg_0.hdop = 0.09741218688037467;
    tmp_msg_0.vdop = 0.3516805661389132;
    tmp_msg_0.hacc = 0.2558685318224705;
    tmp_msg_0.vacc = 0.45770585107148354;
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
    msg.setTimeStamp(0.4786955129591759);
    msg.setSource(44737U);
    msg.setSourceEntity(177U);
    msg.setDestination(7436U);
    msg.setDestinationEntity(143U);
    msg.op = 43U;
    msg.system.assign("XAXJFWFEDVO");
    msg.range = 0.1883809526450153;
    IMC::PowerChannelState tmp_msg_0;
    tmp_msg_0.name.assign("EORKCZLNNDPMABFOPYNETTHHGYHOOBNWRPXGNQXWUEUDOBZGE");
    tmp_msg_0.state = 176U;
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
    msg.setTimeStamp(0.7070820822693172);
    msg.setSource(24479U);
    msg.setSourceEntity(69U);
    msg.setDestination(30939U);
    msg.setDestinationEntity(164U);
    msg.op = 2U;
    msg.system.assign("YAAFMJRALPXNFGNYBTKUHKIPNKVJVLRTUXXLHIQEBPLNIXLHMZNVQODDYAWOELBPGKRHHJZZTASTCDWPOWGTAIFRAKGUVICNXCNUYYUGISDIMSXJWYUJGEZDCNUJIZIMFBBB");
    msg.range = 0.8386383955382359;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.0404372620146749;
    tmp_msg_0.beam_height = 0.08994210682634107;
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
    msg.setTimeStamp(0.3868540608022788);
    msg.setSource(20678U);
    msg.setSourceEntity(236U);
    msg.setDestination(8702U);
    msg.setDestinationEntity(49U);
    msg.op = 213U;
    msg.system.assign("QFLKCTODWDCIYKRCOVDPWAEWYXVIIPFAHKBMTRDLZSAVXOHRGEFYDCVAGNVFBNJONHWFWWDAUUOIHTLIGHLRSVQTUTBPHGNPXOUNOFWQJYNBKLTPTZHEELPMNKGYGIYFSHZCP");
    msg.range = 0.09205673263534098;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5847026587534863;
    tmp_msg_0.speed_units = 98U;
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
    msg.setTimeStamp(0.9061149830020466);
    msg.setSource(48912U);
    msg.setSourceEntity(203U);
    msg.setDestination(52820U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.5421511369023005);
    msg.setSource(34520U);
    msg.setSourceEntity(187U);
    msg.setDestination(65220U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.8584542497958827);
    msg.setSource(56082U);
    msg.setSourceEntity(64U);
    msg.setDestination(16629U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.2051412832059999);
    msg.setSource(7486U);
    msg.setSourceEntity(67U);
    msg.setDestination(63115U);
    msg.setDestinationEntity(106U);
    msg.list.assign("CRUTHMQWNHWQNMUTWBXAGYEGMKHVZAPAIQWFGSGLOQBVAZOPSKJSHTSXERBWTOUDVEUQLVJMLUAZCZJVRLECWQWFZAIRDFUIYVCZU");

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
    msg.setTimeStamp(0.5731462881774284);
    msg.setSource(59703U);
    msg.setSourceEntity(244U);
    msg.setDestination(27094U);
    msg.setDestinationEntity(90U);
    msg.list.assign("FFWALQHRCHDSYKDDPAHCBIYXSGVAXNPQJXVIHMNDGMMZPZRDFSXOXBFNWXUSNMIPSTEDPTVFTKNACRKHYSFCMWDJILL");

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
    msg.setTimeStamp(0.49136966741962096);
    msg.setSource(30477U);
    msg.setSourceEntity(181U);
    msg.setDestination(1930U);
    msg.setDestinationEntity(30U);
    msg.list.assign("JFRRWSOXENNPBLXSBJZSBBVNPCCDFNYU");

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
    msg.setTimeStamp(0.1693790219623752);
    msg.setSource(56162U);
    msg.setSourceEntity(5U);
    msg.setDestination(20738U);
    msg.setDestinationEntity(239U);
    msg.value = -28357;

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
    msg.setTimeStamp(0.4584756312704076);
    msg.setSource(37839U);
    msg.setSourceEntity(13U);
    msg.setDestination(24238U);
    msg.setDestinationEntity(170U);
    msg.value = 18809;

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
    msg.setTimeStamp(0.4275496721628933);
    msg.setSource(51518U);
    msg.setSourceEntity(56U);
    msg.setDestination(18133U);
    msg.setDestinationEntity(20U);
    msg.value = -12271;

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
    msg.setTimeStamp(0.649857996137712);
    msg.setSource(13071U);
    msg.setSourceEntity(46U);
    msg.setDestination(51647U);
    msg.setDestinationEntity(166U);
    msg.value = 0.7470516035670389;

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
    msg.setTimeStamp(0.8406415654368128);
    msg.setSource(49571U);
    msg.setSourceEntity(27U);
    msg.setDestination(50975U);
    msg.setDestinationEntity(105U);
    msg.value = 0.9621085210710449;

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
    msg.setTimeStamp(0.7984213540032878);
    msg.setSource(51887U);
    msg.setSourceEntity(123U);
    msg.setDestination(45299U);
    msg.setDestinationEntity(111U);
    msg.value = 0.04779704628306303;

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
    msg.setTimeStamp(0.973831379324742);
    msg.setSource(27503U);
    msg.setSourceEntity(220U);
    msg.setDestination(25670U);
    msg.setDestinationEntity(148U);
    msg.value = 0.6772175274641619;

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
    msg.setTimeStamp(0.2313141235788726);
    msg.setSource(45420U);
    msg.setSourceEntity(124U);
    msg.setDestination(50583U);
    msg.setDestinationEntity(46U);
    msg.value = 0.8580349278793062;

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
    msg.setTimeStamp(0.4420445045726811);
    msg.setSource(2549U);
    msg.setSourceEntity(60U);
    msg.setDestination(60520U);
    msg.setDestinationEntity(244U);
    msg.value = 0.23730707532798034;

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
    msg.setTimeStamp(0.8308059307881281);
    msg.setSource(6355U);
    msg.setSourceEntity(252U);
    msg.setDestination(32826U);
    msg.setDestinationEntity(36U);
    msg.validity = 25922U;
    msg.type = 43U;
    msg.utc_year = 31873U;
    msg.utc_month = 199U;
    msg.utc_day = 58U;
    msg.utc_time = 0.22696586269959496;
    msg.lat = 0.48764801630712074;
    msg.lon = 0.8942234718322366;
    msg.height = 0.8389678916596023;
    msg.satellites = 233U;
    msg.cog = 0.11941192213442864;
    msg.sog = 0.8952422262638408;
    msg.hdop = 0.5351022267481335;
    msg.vdop = 0.6064294001329947;
    msg.hacc = 0.8276265696384597;
    msg.vacc = 0.4560400763551641;

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
    msg.setTimeStamp(0.5131251446781454);
    msg.setSource(46566U);
    msg.setSourceEntity(22U);
    msg.setDestination(34520U);
    msg.setDestinationEntity(205U);
    msg.validity = 30456U;
    msg.type = 181U;
    msg.utc_year = 58034U;
    msg.utc_month = 217U;
    msg.utc_day = 150U;
    msg.utc_time = 0.3963383154486917;
    msg.lat = 0.6487202085730776;
    msg.lon = 0.14359902715652684;
    msg.height = 0.44679932279242507;
    msg.satellites = 211U;
    msg.cog = 0.3092010868550694;
    msg.sog = 0.7666745980319155;
    msg.hdop = 0.6211085143951675;
    msg.vdop = 0.8808470658055944;
    msg.hacc = 0.10457801899357011;
    msg.vacc = 0.9544040274266089;

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
    msg.setTimeStamp(0.10476014120711874);
    msg.setSource(26557U);
    msg.setSourceEntity(43U);
    msg.setDestination(24100U);
    msg.setDestinationEntity(184U);
    msg.validity = 16965U;
    msg.type = 20U;
    msg.utc_year = 3635U;
    msg.utc_month = 83U;
    msg.utc_day = 248U;
    msg.utc_time = 0.9659998390652959;
    msg.lat = 0.789435924056773;
    msg.lon = 0.5393860060435351;
    msg.height = 0.6063669918858167;
    msg.satellites = 34U;
    msg.cog = 0.4286781702093455;
    msg.sog = 0.04854606998669153;
    msg.hdop = 0.5321905980682043;
    msg.vdop = 0.8208663746171623;
    msg.hacc = 0.00710213419220862;
    msg.vacc = 0.3176505507887749;

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
    msg.setTimeStamp(0.23556779580393905);
    msg.setSource(14374U);
    msg.setSourceEntity(251U);
    msg.setDestination(63898U);
    msg.setDestinationEntity(125U);
    msg.time = 0.43021407032653036;
    msg.phi = 0.16477535466848425;
    msg.theta = 0.2058668298470021;
    msg.psi = 0.5205015368256303;
    msg.psi_magnetic = 0.1844302472103755;

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
    msg.setTimeStamp(0.3614689432276611);
    msg.setSource(4164U);
    msg.setSourceEntity(168U);
    msg.setDestination(47021U);
    msg.setDestinationEntity(72U);
    msg.time = 0.643624942347778;
    msg.phi = 0.5073063838031948;
    msg.theta = 0.22898450126037329;
    msg.psi = 0.24436930052778705;
    msg.psi_magnetic = 0.3763849926495667;

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
    msg.setTimeStamp(0.18721954059971335);
    msg.setSource(25581U);
    msg.setSourceEntity(93U);
    msg.setDestination(19348U);
    msg.setDestinationEntity(103U);
    msg.time = 0.425512999552471;
    msg.phi = 0.4106803042096028;
    msg.theta = 0.7529891565212513;
    msg.psi = 0.5685882712915247;
    msg.psi_magnetic = 0.5723057159114056;

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
    msg.setTimeStamp(0.3687859066596533);
    msg.setSource(55870U);
    msg.setSourceEntity(89U);
    msg.setDestination(32796U);
    msg.setDestinationEntity(233U);
    msg.time = 0.23878181829194656;
    msg.x = 0.6372074891220857;
    msg.y = 0.8666070875033903;
    msg.z = 0.4359706095160494;
    msg.timestep = 0.23174660722305984;

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
    msg.setTimeStamp(0.04346201679795492);
    msg.setSource(39043U);
    msg.setSourceEntity(170U);
    msg.setDestination(48491U);
    msg.setDestinationEntity(77U);
    msg.time = 0.8208126122959554;
    msg.x = 0.09631518273060047;
    msg.y = 0.4365076653346337;
    msg.z = 0.7304546879872253;
    msg.timestep = 0.7277494264672243;

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
    msg.setTimeStamp(0.07409468456265067);
    msg.setSource(24924U);
    msg.setSourceEntity(106U);
    msg.setDestination(58196U);
    msg.setDestinationEntity(99U);
    msg.time = 0.8345668799934352;
    msg.x = 0.6652130402191603;
    msg.y = 0.6812748081226234;
    msg.z = 0.3463841896181943;
    msg.timestep = 0.291038683766235;

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
    msg.setTimeStamp(0.4383605683837988);
    msg.setSource(46116U);
    msg.setSourceEntity(252U);
    msg.setDestination(6940U);
    msg.setDestinationEntity(237U);
    msg.time = 0.5849087997368079;
    msg.x = 0.42998017563566304;
    msg.y = 0.8219073820818442;
    msg.z = 0.7732376593999944;

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
    msg.setTimeStamp(0.3995622547669816);
    msg.setSource(22215U);
    msg.setSourceEntity(70U);
    msg.setDestination(10749U);
    msg.setDestinationEntity(14U);
    msg.time = 0.03692571746154871;
    msg.x = 0.6092301171581593;
    msg.y = 0.14627407669815673;
    msg.z = 0.5382090228775123;

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
    msg.setTimeStamp(0.7145261804073417);
    msg.setSource(31020U);
    msg.setSourceEntity(7U);
    msg.setDestination(63271U);
    msg.setDestinationEntity(156U);
    msg.time = 0.8416646297565751;
    msg.x = 0.2478167653697142;
    msg.y = 0.18699539845847157;
    msg.z = 0.4619322715542853;

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
    msg.setTimeStamp(0.8910285347819124);
    msg.setSource(35109U);
    msg.setSourceEntity(70U);
    msg.setDestination(30447U);
    msg.setDestinationEntity(142U);
    msg.time = 0.28536659693841926;
    msg.x = 0.4080993212709526;
    msg.y = 0.8626177591268349;
    msg.z = 0.6149269927741262;

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
    msg.setTimeStamp(0.6728256428972988);
    msg.setSource(46756U);
    msg.setSourceEntity(7U);
    msg.setDestination(4456U);
    msg.setDestinationEntity(137U);
    msg.time = 0.44494839003006115;
    msg.x = 0.7640430649577928;
    msg.y = 0.03641403467647575;
    msg.z = 0.4638341476807668;

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
    msg.setTimeStamp(0.6465499100043758);
    msg.setSource(13710U);
    msg.setSourceEntity(133U);
    msg.setDestination(46757U);
    msg.setDestinationEntity(158U);
    msg.time = 0.7728878591509968;
    msg.x = 0.2328899893532954;
    msg.y = 0.03671498471953816;
    msg.z = 0.009820070607696185;

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
    msg.setTimeStamp(0.28154716863731766);
    msg.setSource(16206U);
    msg.setSourceEntity(147U);
    msg.setDestination(30907U);
    msg.setDestinationEntity(81U);
    msg.time = 0.67244900624567;
    msg.x = 0.1190153947004946;
    msg.y = 0.9926117922094483;
    msg.z = 0.5352145989113772;

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
    msg.setTimeStamp(0.7805667570596583);
    msg.setSource(54463U);
    msg.setSourceEntity(172U);
    msg.setDestination(25449U);
    msg.setDestinationEntity(97U);
    msg.time = 0.97439521143132;
    msg.x = 0.41079206900138876;
    msg.y = 0.022706268952800146;
    msg.z = 0.9940871895933738;

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
    msg.setTimeStamp(0.9590106543494632);
    msg.setSource(6026U);
    msg.setSourceEntity(133U);
    msg.setDestination(59962U);
    msg.setDestinationEntity(68U);
    msg.time = 0.2649761383664193;
    msg.x = 0.45789801171356026;
    msg.y = 0.7652075611004527;
    msg.z = 0.4699144679785594;

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
    msg.setTimeStamp(0.10945991173453906);
    msg.setSource(46819U);
    msg.setSourceEntity(237U);
    msg.setDestination(45417U);
    msg.setDestinationEntity(196U);
    msg.validity = 204U;
    msg.x = 0.2344464174584151;
    msg.y = 0.7833254048179753;
    msg.z = 0.011927276115740515;

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
    msg.setTimeStamp(0.6964369062764542);
    msg.setSource(25472U);
    msg.setSourceEntity(206U);
    msg.setDestination(46649U);
    msg.setDestinationEntity(245U);
    msg.validity = 44U;
    msg.x = 0.1793809135376243;
    msg.y = 0.9089612013252633;
    msg.z = 0.20475160095561762;

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
    msg.setTimeStamp(0.35429995019716887);
    msg.setSource(11000U);
    msg.setSourceEntity(58U);
    msg.setDestination(15278U);
    msg.setDestinationEntity(1U);
    msg.validity = 212U;
    msg.x = 0.9225208261749975;
    msg.y = 0.10127071480523298;
    msg.z = 0.10696458304117917;

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
    msg.setTimeStamp(0.17320624258196016);
    msg.setSource(25183U);
    msg.setSourceEntity(116U);
    msg.setDestination(22498U);
    msg.setDestinationEntity(178U);
    msg.validity = 237U;
    msg.x = 0.7556963462191535;
    msg.y = 0.4412596732140778;
    msg.z = 0.6773113329073696;

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
    msg.setTimeStamp(0.02044638174614133);
    msg.setSource(15765U);
    msg.setSourceEntity(231U);
    msg.setDestination(22863U);
    msg.setDestinationEntity(58U);
    msg.validity = 253U;
    msg.x = 0.24797667751970986;
    msg.y = 0.5260353990552956;
    msg.z = 0.4086650328253304;

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
    msg.setTimeStamp(0.8480112066548767);
    msg.setSource(23560U);
    msg.setSourceEntity(247U);
    msg.setDestination(16010U);
    msg.setDestinationEntity(240U);
    msg.validity = 213U;
    msg.x = 0.8082867900246097;
    msg.y = 0.9459571474810216;
    msg.z = 0.15415589765246274;

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
    msg.setTimeStamp(0.870755662161797);
    msg.setSource(62477U);
    msg.setSourceEntity(200U);
    msg.setDestination(27327U);
    msg.setDestinationEntity(216U);
    msg.time = 0.1272502747990265;
    msg.x = 0.6575714157801608;
    msg.y = 0.3831681720609805;
    msg.z = 0.19618827560115648;

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
    msg.setTimeStamp(0.3025439075007791);
    msg.setSource(16694U);
    msg.setSourceEntity(233U);
    msg.setDestination(13176U);
    msg.setDestinationEntity(199U);
    msg.time = 0.9536644394663237;
    msg.x = 0.9162195729463625;
    msg.y = 0.41224944075550296;
    msg.z = 0.7904828216100825;

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
    msg.setTimeStamp(0.15675356227168236);
    msg.setSource(10707U);
    msg.setSourceEntity(102U);
    msg.setDestination(22054U);
    msg.setDestinationEntity(62U);
    msg.time = 0.23808571223470987;
    msg.x = 0.8515490677590511;
    msg.y = 0.18366741176088686;
    msg.z = 0.3361579035206156;

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
    msg.setTimeStamp(0.05448218784435255);
    msg.setSource(15610U);
    msg.setSourceEntity(2U);
    msg.setDestination(54258U);
    msg.setDestinationEntity(61U);
    msg.validity = 0U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.005307953833794232;
    tmp_msg_0.y = 0.44185712696801993;
    tmp_msg_0.z = 0.9853137388711867;
    tmp_msg_0.phi = 0.45685381174134;
    tmp_msg_0.theta = 0.6830448090494755;
    tmp_msg_0.psi = 0.23894797038499505;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.8892711958119363;
    tmp_msg_1.beam_height = 0.7738007770126035;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.2672854902511672;

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
    msg.setTimeStamp(0.5328994303823777);
    msg.setSource(22244U);
    msg.setSourceEntity(77U);
    msg.setDestination(1812U);
    msg.setDestinationEntity(130U);
    msg.validity = 51U;
    msg.value = 0.20227371757057788;

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
    msg.setTimeStamp(0.8293587765620611);
    msg.setSource(29146U);
    msg.setSourceEntity(100U);
    msg.setDestination(61957U);
    msg.setDestinationEntity(5U);
    msg.validity = 18U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.1358844067550561;
    tmp_msg_0.beam_height = 0.3084494859466447;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.5717095244537826;

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
    msg.setTimeStamp(0.35374226049501345);
    msg.setSource(63422U);
    msg.setSourceEntity(180U);
    msg.setDestination(31627U);
    msg.setDestinationEntity(211U);
    msg.value = 0.2540978580314037;

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
    msg.setTimeStamp(0.6745948250727491);
    msg.setSource(16429U);
    msg.setSourceEntity(47U);
    msg.setDestination(34138U);
    msg.setDestinationEntity(199U);
    msg.value = 0.1191256467912416;

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
    msg.setTimeStamp(0.008797184796378033);
    msg.setSource(21059U);
    msg.setSourceEntity(114U);
    msg.setDestination(52247U);
    msg.setDestinationEntity(154U);
    msg.value = 0.7267195740644194;

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
    msg.setTimeStamp(0.16970520399605027);
    msg.setSource(38600U);
    msg.setSourceEntity(36U);
    msg.setDestination(54627U);
    msg.setDestinationEntity(137U);
    msg.value = 0.11485999898438315;

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
    msg.setTimeStamp(0.668110751886531);
    msg.setSource(62906U);
    msg.setSourceEntity(23U);
    msg.setDestination(32076U);
    msg.setDestinationEntity(28U);
    msg.value = 0.7550253618432546;

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
    msg.setTimeStamp(0.468988585958807);
    msg.setSource(3102U);
    msg.setSourceEntity(57U);
    msg.setDestination(49486U);
    msg.setDestinationEntity(40U);
    msg.value = 0.42247960645617477;

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
    msg.setTimeStamp(0.3118290201269751);
    msg.setSource(16235U);
    msg.setSourceEntity(169U);
    msg.setDestination(60041U);
    msg.setDestinationEntity(122U);
    msg.value = 0.700467694475241;

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
    msg.setTimeStamp(0.3219215277144212);
    msg.setSource(33722U);
    msg.setSourceEntity(157U);
    msg.setDestination(63276U);
    msg.setDestinationEntity(220U);
    msg.value = 0.9225559133658635;

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
    msg.setTimeStamp(0.4335514361017966);
    msg.setSource(40626U);
    msg.setSourceEntity(109U);
    msg.setDestination(23384U);
    msg.setDestinationEntity(121U);
    msg.value = 0.9278906395576713;

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
    msg.setTimeStamp(0.44545001085815616);
    msg.setSource(62309U);
    msg.setSourceEntity(44U);
    msg.setDestination(54957U);
    msg.setDestinationEntity(6U);
    msg.value = 0.7742701090215649;

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
    msg.setTimeStamp(0.7286203876329892);
    msg.setSource(57641U);
    msg.setSourceEntity(16U);
    msg.setDestination(35596U);
    msg.setDestinationEntity(234U);
    msg.value = 0.8993439271039131;

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
    msg.setTimeStamp(0.3295665902902676);
    msg.setSource(642U);
    msg.setSourceEntity(112U);
    msg.setDestination(33691U);
    msg.setDestinationEntity(230U);
    msg.value = 0.2627423535727844;

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
    msg.setTimeStamp(0.6224986918150104);
    msg.setSource(37610U);
    msg.setSourceEntity(177U);
    msg.setDestination(48596U);
    msg.setDestinationEntity(65U);
    msg.value = 0.7376359881533447;

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
    msg.setTimeStamp(0.5308342024197994);
    msg.setSource(27442U);
    msg.setSourceEntity(69U);
    msg.setDestination(56281U);
    msg.setDestinationEntity(126U);
    msg.value = 0.590081760696608;

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
    msg.setTimeStamp(0.6715041083869384);
    msg.setSource(54632U);
    msg.setSourceEntity(142U);
    msg.setDestination(27932U);
    msg.setDestinationEntity(160U);
    msg.value = 0.05075642098909816;

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
    msg.setTimeStamp(0.37014194413730317);
    msg.setSource(64052U);
    msg.setSourceEntity(140U);
    msg.setDestination(16326U);
    msg.setDestinationEntity(83U);
    msg.value = 0.6711063483987886;

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
    msg.setTimeStamp(0.700387699001421);
    msg.setSource(55827U);
    msg.setSourceEntity(174U);
    msg.setDestination(10970U);
    msg.setDestinationEntity(175U);
    msg.value = 0.4920608287423469;

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
    msg.setTimeStamp(0.5488383349395959);
    msg.setSource(34327U);
    msg.setSourceEntity(210U);
    msg.setDestination(48230U);
    msg.setDestinationEntity(38U);
    msg.value = 0.42024339041915393;

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
    msg.setTimeStamp(0.6190723232482813);
    msg.setSource(8845U);
    msg.setSourceEntity(109U);
    msg.setDestination(25396U);
    msg.setDestinationEntity(124U);
    msg.value = 0.8735177633082777;

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
    msg.setTimeStamp(0.1488403977400765);
    msg.setSource(670U);
    msg.setSourceEntity(112U);
    msg.setDestination(57170U);
    msg.setDestinationEntity(224U);
    msg.value = 0.20785339792993274;

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
    msg.setTimeStamp(0.7284189987495414);
    msg.setSource(44530U);
    msg.setSourceEntity(188U);
    msg.setDestination(63149U);
    msg.setDestinationEntity(145U);
    msg.value = 0.3690253029155488;

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
    msg.setTimeStamp(0.4598811890254977);
    msg.setSource(41085U);
    msg.setSourceEntity(168U);
    msg.setDestination(35826U);
    msg.setDestinationEntity(37U);
    msg.value = 0.3967442353580818;

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
    msg.setTimeStamp(0.3241923030228665);
    msg.setSource(35192U);
    msg.setSourceEntity(146U);
    msg.setDestination(33289U);
    msg.setDestinationEntity(122U);
    msg.value = 0.897253216419411;

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
    msg.setTimeStamp(0.4693227181351741);
    msg.setSource(3987U);
    msg.setSourceEntity(45U);
    msg.setDestination(30623U);
    msg.setDestinationEntity(45U);
    msg.value = 0.2166891535031702;

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
    msg.setTimeStamp(0.6076865396652663);
    msg.setSource(34204U);
    msg.setSourceEntity(141U);
    msg.setDestination(23672U);
    msg.setDestinationEntity(122U);
    msg.direction = 0.05057355935739882;
    msg.speed = 0.2668675050790963;
    msg.turbulence = 0.49442103589413444;

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
    msg.setTimeStamp(0.5497637702564553);
    msg.setSource(3741U);
    msg.setSourceEntity(254U);
    msg.setDestination(49937U);
    msg.setDestinationEntity(108U);
    msg.direction = 0.35554993604564633;
    msg.speed = 0.3304691660824569;
    msg.turbulence = 0.18662611374784477;

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
    msg.setTimeStamp(0.9641429840428463);
    msg.setSource(32578U);
    msg.setSourceEntity(138U);
    msg.setDestination(36505U);
    msg.setDestinationEntity(233U);
    msg.direction = 0.26619743144506136;
    msg.speed = 0.9289856980297553;
    msg.turbulence = 0.5185945775278894;

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
    msg.setTimeStamp(0.2981130635318726);
    msg.setSource(62354U);
    msg.setSourceEntity(198U);
    msg.setDestination(3017U);
    msg.setDestinationEntity(100U);
    msg.value = 0.07589849159554196;

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
    msg.setTimeStamp(0.7869870466625586);
    msg.setSource(23030U);
    msg.setSourceEntity(61U);
    msg.setDestination(29629U);
    msg.setDestinationEntity(243U);
    msg.value = 0.9549495465730062;

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
    msg.setTimeStamp(0.26313071485582673);
    msg.setSource(41409U);
    msg.setSourceEntity(72U);
    msg.setDestination(55046U);
    msg.setDestinationEntity(228U);
    msg.value = 0.7698295417499662;

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
    msg.setTimeStamp(0.1260429133975518);
    msg.setSource(39047U);
    msg.setSourceEntity(177U);
    msg.setDestination(7739U);
    msg.setDestinationEntity(97U);
    msg.value.assign("DZZMHHLDRPQUCZDSGHWWFYDSXJIOYDEJUKBJPXRMASQKRCTIQVLHMHUUEWRJRDR");

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
    msg.setTimeStamp(0.9559627340564096);
    msg.setSource(2233U);
    msg.setSourceEntity(136U);
    msg.setDestination(64437U);
    msg.setDestinationEntity(164U);
    msg.value.assign("VQZFHVLROHSLHI");

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
    msg.setTimeStamp(0.12175589160075817);
    msg.setSource(24920U);
    msg.setSourceEntity(160U);
    msg.setDestination(28766U);
    msg.setDestinationEntity(64U);
    msg.value.assign("BFTYMEOEBRAMQQTAHHILAOKIINOTJURHZYNDEDXWDSFRAQRQKVNSMONQQJCYIVFLOUXBUYJNPLRZGYPUUXDXOMPZZWOJALNXMAUWPCMQBZSBFFCKKOILDBXSGRZAGHDFHAWHEWGGRFIVBGGXXAZULWBCXZWRYTUUSMYVQFDZGRXYEHPBVNSNTSSIITFGHNRTPVEIPWSDVSL");

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
    msg.setTimeStamp(0.34501051786155057);
    msg.setSource(58789U);
    msg.setSourceEntity(41U);
    msg.setDestination(34479U);
    msg.setDestinationEntity(217U);
    const char tmp_msg_0[] = {-28, 58, 118, -111, -99, 40, 41, -2, -49, -4, 6, 45, -49, -110, -81, -38, 51, 15, -17, -106, 112, -20, 119, 27, 73, 21, -82, 120, 72, 15, -79, 113, 115, 47, 37, 77, 23, -123, -45, -74, 70, -84, 71, -112, 34, 24, -106, -68, -86, 13, 114, 61, -1, 18, 24, -36, 27, -69, -111, 114, -6, -88, 0, -97, 97, 126, 41, 124, 98, 77, 7, 23, 103, -90, 94, -15, -20, 39, -92, -107, 68, -94, -73, 25, 81, 9, -126, -35, -49, 112, 95, -84, 26, 44, 58, 106, -9, 70, -22, -16, -5, -11, 86, 73, -107, 108, -14, 10, 74, -22, -113, -10, -27, 23, 74, 120, -24};
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
    msg.setTimeStamp(0.790746393094835);
    msg.setSource(54088U);
    msg.setSourceEntity(222U);
    msg.setDestination(53414U);
    msg.setDestinationEntity(244U);
    const char tmp_msg_0[] = {98, 36, 71, -60, 84, -47, 95, -68, -49, -81, 14, 117, -101, -63, 96, -64, 67, -91, 123, -23, -119, -118, 61, -45, 51, 112, 104, -95, 67, -104, 120, -44, -72, -84, 121, 1, 55, 5, 105, -25, 92, 72, 66, -61, -118, 112, 19, 47, 24, 107, 117, -17, 116, 66, 95, -16, 79, 122, -100, 63, -8, 72, 117, -114, -53, 39, -102, -40, 122, -106, 75, 49, 124, 53, 10, 78, -24, -2, 56, 9, 45, -25, -81, -37, -56, 113, -123, -12, -20, -39, -119, -44, -101, 105, -12, -24, -113, 45, 62, -48, 125, 34, 34, -113, 34, -125, -89, -54, -49, 117, -30, 4, 98, -91, 68, 31, -16, -48, 92, -106, -24, 62, 60, -51, -65, -11, 41, -85, 74, -11, 1, 54, 71, 65, 52, 67, 119, -91, 71, 82, -121, 2, 85, 51, 27, -127, -44, -15, -58, 53, -61, -47, -7, -18, -72, -102, 78, -110, -64, 23, 24, -65, -17, -38, -39, 31, -64, 20, 11, 16, -77, -37, -78, -102, 93, 71, -5, -109, -115, -89, -74, -86, 56, 91, -83, -92, -115, 5, 43, -88, 78, 111, -79, 9, 34, 50, 123, 51, -56, -118, -38, -84, 95, 23, 66};
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
    msg.setTimeStamp(0.9942898142095148);
    msg.setSource(10066U);
    msg.setSourceEntity(177U);
    msg.setDestination(57555U);
    msg.setDestinationEntity(54U);
    const char tmp_msg_0[] = {96, 0, 7, -42, 113, -39, -113, 59, -123, -33, -113, 4, -25, -25, 19, -24, 115, -45, -6, -85, -24, -37, -47, -91, 58, 113, 119, -121, -55, -41};
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
    msg.setTimeStamp(0.42227656947901016);
    msg.setSource(21617U);
    msg.setSourceEntity(3U);
    msg.setDestination(43098U);
    msg.setDestinationEntity(123U);
    msg.type = 107U;
    msg.frequency = 4172665420U;
    msg.min_range = 9800U;
    msg.max_range = 52023U;
    msg.bits_per_point = 220U;
    msg.scale_factor = 0.09318167197883331;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.9050030982980223;
    tmp_msg_0.beam_height = 0.5017397192098916;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {8, 55, 104, -60, 3, 118, 88, -1, -65, -21, -31, 114, -12, -89, 67, -29, 57, -99, -39, 112, -60, 17, 92, -21, -42, 109, 27, -42, -50, 21, 105, -110, 88, 113, 105, 62, 62, 60, -12, -91, -66, -126, 11, 23, -45, -39, 23, 48, -21, -7, 8, 19, -109, -105, 13, 79, 115, -108, 48, 2, 8, -6, -110, 17, -30, -1, 45, 19, 31, -105, 90, -38, -12, 103, -64, -10, 15, 34, -58, -101, -114, -102, 20, -99, 83, 104, 37, -29, -83, 62, -96, 33, -127, -84, 78, 20, 73, 11, 91, 4, 30, -64, -112, -65, 119, -2, -106, 72, -68, 50, -46, -85, 14, -28, 25, -95, 67, -28, -87, -83, 122, -50, -19, -85, -29, -128, -55, 39, 8, -74, 0, -42, -37, 106, -82, 126, 86, -118, -50, -34, 37, -54, -23, -40, 37, -8, 63, 40, 8, -121, 3, -40, 80, 108, -90, 78, -94, -42, 96, 66, 92, -39, 66, 124, -28, -104, -6, 50, 107, -54, 108, -69, 88, 48, -93, 24, 69, 58, 120, -123, -124, 96, -6, 116, 64, 26, -116, -84, -125, 8, -63, 47, 93, 30, 6, 89, -114, -106, 59, 1, 119, 72, 102, -48, 51, -3, -88, -112, -113, 59, -65, 49, -127, 16, 12, -47, -43, -71, 104, -95, -25};
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
    msg.setTimeStamp(0.032199299913407975);
    msg.setSource(16193U);
    msg.setSourceEntity(147U);
    msg.setDestination(59874U);
    msg.setDestinationEntity(145U);
    msg.type = 3U;
    msg.frequency = 200291921U;
    msg.min_range = 55636U;
    msg.max_range = 34158U;
    msg.bits_per_point = 218U;
    msg.scale_factor = 0.19143143911038574;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.7253231505011033;
    tmp_msg_0.beam_height = 0.802852123576671;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-10, 96, 95, -77, 42, -115, 17, -42, 16, 45, 68, 37, -22, -66, 17, -9, 56, -1, -6, 11, -8, -22, -62, 112, -115, 48, 5, 109, -105, -112, 6, -6, 12, -108, -91, -51, 69, 20, 4, 26, -109, 4, 10, 114, 12, 123, -99, -111, -83, 91, -28, -122, 24, -1, 27, 23, 57, -91, -63, 80, 69, -61, 54, -55, -121, 64, -89, -119, 49, 17, 29, 39, 80, 102, -108, 52, 79, -50, -91, -95, 92, -95, 55, 39, 83, 48, -54, -127, -108, -34, 34, -6, 6, 110, 41, 26, -58, -44, -34, -22, 33, -87, 2, -44, 58, -86, 53, 23, -11, -39, 39, 96, -54, 91, -86, -96, -10, 98, 103, 38, -71, -43, -103, 88, -70, -37, 32, 70, -39, 12, 94, -30, 18, 90, 39, 85, -35, -119, -117, -102, -107, -11, -45, 10, -36, -30, -38, -28, -32, -119, -59, -115, -9, -78, 76, -53, -44, 80, 12, -102, -19, -120, 89, -126, -72, 35, 51, -104, -53, 0, -103, 84, 9, -59, -123, -24, -6, -89, -59, -17, -76, -1, 52, -16, 7, 106, 30, 46, -29, 3, 113, 104, -39, -9, -84, 111, 121, 5, 66, -104, 120, -21, -99, -119, -66, 14, 98, -116, 28, -73};
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
    msg.setTimeStamp(0.8584355221776697);
    msg.setSource(49852U);
    msg.setSourceEntity(160U);
    msg.setDestination(35224U);
    msg.setDestinationEntity(248U);
    msg.type = 217U;
    msg.frequency = 3144685096U;
    msg.min_range = 8002U;
    msg.max_range = 37925U;
    msg.bits_per_point = 72U;
    msg.scale_factor = 0.23716424699139982;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.8859878404059021;
    tmp_msg_0.beam_height = 0.45809049188832174;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {108, 18, -81, 29, -64, -110, 119, -67, 48, 31, 90, 12, -35, -101, -93, 126, -39, -79, -19, 51, -48, -106, 68, -94, 107, 85, 94, 76, -99, -111, 47, 109, -36, -25, -72, -90, -61, 3, 89, -11, 120, 106, -32, 109, -39, -60, 47, -13, 46, 60, -5, 10, 107, 14, -15, -111, -127, -10, 12, 20, -89, -95, 114, -34, -50, -91, -42, -90, 97, -118, 60, -120, -128, -91, -63, -122, 124, -50, -127, -86, 105, -16, -37, -99, 37, -94, 123, 103, -31, -128, 39, 113, -67, -21, -72, -113, -118, -73, 91, 13, 23, -47, -25, 85, -6, -46, -19, 57, 89, -51, -128, 22, 38, -125, 53, 120, -110, 119, -117, -84, 53, 38, -14, 23, -123, -66, -127, -5, 13, 12, -106, -85, -15, -14, 84, 122, -102};
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
    msg.setTimeStamp(0.7891817683490352);
    msg.setSource(8649U);
    msg.setSourceEntity(187U);
    msg.setDestination(3139U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.6537885489573834);
    msg.setSource(8102U);
    msg.setSourceEntity(87U);
    msg.setDestination(38037U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.8253854769962564);
    msg.setSource(7028U);
    msg.setSourceEntity(38U);
    msg.setDestination(37135U);
    msg.setDestinationEntity(210U);

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
    msg.setTimeStamp(0.45489768182714385);
    msg.setSource(60376U);
    msg.setSourceEntity(186U);
    msg.setDestination(20948U);
    msg.setDestinationEntity(162U);
    msg.op = 160U;

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
    msg.setTimeStamp(0.4079419437547559);
    msg.setSource(52655U);
    msg.setSourceEntity(86U);
    msg.setDestination(41939U);
    msg.setDestinationEntity(89U);
    msg.op = 198U;

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
    msg.setTimeStamp(0.9514605033574274);
    msg.setSource(13260U);
    msg.setSourceEntity(217U);
    msg.setDestination(38575U);
    msg.setDestinationEntity(106U);
    msg.op = 88U;

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
    msg.setTimeStamp(0.5229968594952323);
    msg.setSource(33975U);
    msg.setSourceEntity(214U);
    msg.setDestination(55356U);
    msg.setDestinationEntity(153U);
    msg.value = 0.8133415990692953;
    msg.confidence = 0.4219948643126027;
    msg.opmodes.assign("HCFSIQWIXTNROSLMKDDNJQZDWAHZLVIMHFXXVUEGXRD");

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
    msg.setTimeStamp(0.12066078778499845);
    msg.setSource(10801U);
    msg.setSourceEntity(52U);
    msg.setDestination(63584U);
    msg.setDestinationEntity(30U);
    msg.value = 0.4370292435343992;
    msg.confidence = 0.13705601281509072;
    msg.opmodes.assign("GQPRUBGPZPGVSHHVDIKSTPDDFOTRJCCVYOMFCNLWXC");

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
    msg.setTimeStamp(0.15776932453047654);
    msg.setSource(45191U);
    msg.setSourceEntity(33U);
    msg.setDestination(37499U);
    msg.setDestinationEntity(241U);
    msg.value = 0.9238463239408697;
    msg.confidence = 0.6147245803155755;
    msg.opmodes.assign("HHPIUXUCREQXLCLLJNBZRWLSKAEWKEAGZOZIAKARXVWUQXMHPJNDQNNPVCHJJXZRPMFZIXGKCXEJ");

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
    msg.setTimeStamp(0.6607052159839897);
    msg.setSource(29909U);
    msg.setSourceEntity(102U);
    msg.setDestination(23458U);
    msg.setDestinationEntity(154U);
    msg.itow = 1068375784U;
    msg.lat = 0.4428103277529707;
    msg.lon = 0.1846020724486538;
    msg.height_ell = 0.24766441846480547;
    msg.height_sea = 0.9149657589833553;
    msg.hacc = 0.5586469906223761;
    msg.vacc = 0.9933108224411101;
    msg.vel_n = 0.7314782398325999;
    msg.vel_e = 0.019178003623709694;
    msg.vel_d = 0.13934406207561345;
    msg.speed = 0.35953920857218946;
    msg.gspeed = 0.2355500557515795;
    msg.heading = 0.11684069672838193;
    msg.sacc = 0.7801076351801396;
    msg.cacc = 0.8999879135906949;

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
    msg.setTimeStamp(0.8528112565211236);
    msg.setSource(45376U);
    msg.setSourceEntity(113U);
    msg.setDestination(12639U);
    msg.setDestinationEntity(179U);
    msg.itow = 1286177783U;
    msg.lat = 0.5713945763648381;
    msg.lon = 0.6152820431566306;
    msg.height_ell = 0.5470021145994052;
    msg.height_sea = 0.5944159318762128;
    msg.hacc = 0.06895822490310921;
    msg.vacc = 0.13404166906626358;
    msg.vel_n = 0.3495273699559516;
    msg.vel_e = 0.9657323353441707;
    msg.vel_d = 0.9728316118274308;
    msg.speed = 0.08425754731649515;
    msg.gspeed = 0.4036097727423624;
    msg.heading = 0.00723971119386424;
    msg.sacc = 0.9719714078409;
    msg.cacc = 0.44583831952001474;

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
    msg.setTimeStamp(0.266399380782951);
    msg.setSource(56590U);
    msg.setSourceEntity(119U);
    msg.setDestination(31659U);
    msg.setDestinationEntity(238U);
    msg.itow = 1666963884U;
    msg.lat = 0.7257301608074086;
    msg.lon = 0.7386237664222753;
    msg.height_ell = 0.5111830239694071;
    msg.height_sea = 0.9974800425731581;
    msg.hacc = 0.04874054780333903;
    msg.vacc = 0.322667795635313;
    msg.vel_n = 0.45641174888934744;
    msg.vel_e = 0.7208499496970198;
    msg.vel_d = 0.3424694541820281;
    msg.speed = 0.8092095039443882;
    msg.gspeed = 0.42394817751898217;
    msg.heading = 0.08020785876163461;
    msg.sacc = 0.7660211542979397;
    msg.cacc = 0.15910750403832252;

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
    msg.setTimeStamp(0.5902138217109205);
    msg.setSource(47101U);
    msg.setSourceEntity(167U);
    msg.setDestination(26177U);
    msg.setDestinationEntity(200U);
    msg.id = 209U;
    msg.value = 0.4024075521876175;

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
    msg.setTimeStamp(0.179966995436301);
    msg.setSource(14776U);
    msg.setSourceEntity(17U);
    msg.setDestination(36353U);
    msg.setDestinationEntity(84U);
    msg.id = 149U;
    msg.value = 0.5401428399299767;

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
    msg.setTimeStamp(0.89943291004241);
    msg.setSource(28017U);
    msg.setSourceEntity(34U);
    msg.setDestination(42987U);
    msg.setDestinationEntity(190U);
    msg.id = 98U;
    msg.value = 0.21500842503335837;

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
    msg.setTimeStamp(0.3456098488767766);
    msg.setSource(41870U);
    msg.setSourceEntity(194U);
    msg.setDestination(49902U);
    msg.setDestinationEntity(225U);
    msg.x = 0.8265404022722047;
    msg.y = 0.4013397090037981;
    msg.z = 0.45261649278613214;
    msg.phi = 0.1321717045805182;
    msg.theta = 0.8652293912995815;
    msg.psi = 0.6634009152690415;

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
    msg.setTimeStamp(0.17585549128921507);
    msg.setSource(11588U);
    msg.setSourceEntity(113U);
    msg.setDestination(34461U);
    msg.setDestinationEntity(226U);
    msg.x = 0.8013286169581745;
    msg.y = 0.8596554825423028;
    msg.z = 0.03106593633595922;
    msg.phi = 0.9159414927665733;
    msg.theta = 0.6852853781892094;
    msg.psi = 0.2485657841802652;

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
    msg.setTimeStamp(0.0027453971289250756);
    msg.setSource(17604U);
    msg.setSourceEntity(62U);
    msg.setDestination(22268U);
    msg.setDestinationEntity(112U);
    msg.x = 0.29263563102617973;
    msg.y = 0.47738197972295915;
    msg.z = 0.45721694799231016;
    msg.phi = 0.4336434744143157;
    msg.theta = 0.8516839342942277;
    msg.psi = 0.5968883879317473;

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
    msg.setTimeStamp(0.7957469006254937);
    msg.setSource(3709U);
    msg.setSourceEntity(85U);
    msg.setDestination(54622U);
    msg.setDestinationEntity(63U);
    msg.beam_width = 0.9229851580497808;
    msg.beam_height = 0.09709405077005195;

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
    msg.setTimeStamp(0.5222119409285108);
    msg.setSource(32138U);
    msg.setSourceEntity(227U);
    msg.setDestination(4657U);
    msg.setDestinationEntity(34U);
    msg.beam_width = 0.4159655598437919;
    msg.beam_height = 0.15556244939944364;

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
    msg.setTimeStamp(0.08257354279674323);
    msg.setSource(12190U);
    msg.setSourceEntity(131U);
    msg.setDestination(1662U);
    msg.setDestinationEntity(1U);
    msg.beam_width = 0.5800554746017519;
    msg.beam_height = 0.839609485950932;

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
    msg.setTimeStamp(0.7755019413357394);
    msg.setSource(17453U);
    msg.setSourceEntity(55U);
    msg.setDestination(32135U);
    msg.setDestinationEntity(207U);
    msg.sane = 120U;

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
    msg.setTimeStamp(0.063199461086198);
    msg.setSource(60850U);
    msg.setSourceEntity(0U);
    msg.setDestination(37816U);
    msg.setDestinationEntity(191U);
    msg.sane = 191U;

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
    msg.setTimeStamp(0.10499215035894005);
    msg.setSource(36588U);
    msg.setSourceEntity(17U);
    msg.setDestination(4999U);
    msg.setDestinationEntity(78U);
    msg.sane = 148U;

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
    msg.setTimeStamp(0.004537448801949617);
    msg.setSource(27945U);
    msg.setSourceEntity(178U);
    msg.setDestination(35033U);
    msg.setDestinationEntity(213U);
    msg.value = 0.5950935368188092;

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
    msg.setTimeStamp(0.28131256740522803);
    msg.setSource(11970U);
    msg.setSourceEntity(85U);
    msg.setDestination(9365U);
    msg.setDestinationEntity(213U);
    msg.value = 0.1802932681308258;

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
    msg.setTimeStamp(0.9951932207122299);
    msg.setSource(4203U);
    msg.setSourceEntity(6U);
    msg.setDestination(56777U);
    msg.setDestinationEntity(141U);
    msg.value = 0.1156138102853036;

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
    msg.setTimeStamp(0.7633708509659187);
    msg.setSource(56971U);
    msg.setSourceEntity(90U);
    msg.setDestination(39571U);
    msg.setDestinationEntity(114U);
    msg.value = 0.36224815610351835;

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
    msg.setTimeStamp(0.38080263606406184);
    msg.setSource(46780U);
    msg.setSourceEntity(140U);
    msg.setDestination(52146U);
    msg.setDestinationEntity(135U);
    msg.value = 0.733275285673823;

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
    msg.setTimeStamp(0.7094098504545681);
    msg.setSource(14838U);
    msg.setSourceEntity(116U);
    msg.setDestination(2987U);
    msg.setDestinationEntity(239U);
    msg.value = 0.34393320440283626;

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
    msg.setTimeStamp(0.0034516856246323835);
    msg.setSource(207U);
    msg.setSourceEntity(91U);
    msg.setDestination(9296U);
    msg.setDestinationEntity(80U);
    msg.value = 0.30748322767366243;

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
    msg.setTimeStamp(0.42397084263920926);
    msg.setSource(49721U);
    msg.setSourceEntity(156U);
    msg.setDestination(64923U);
    msg.setDestinationEntity(92U);
    msg.value = 0.8213690833491837;

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
    msg.setTimeStamp(0.263177597941216);
    msg.setSource(5927U);
    msg.setSourceEntity(249U);
    msg.setDestination(12718U);
    msg.setDestinationEntity(33U);
    msg.value = 0.12754613359507438;

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
    msg.setTimeStamp(0.32983932409808003);
    msg.setSource(54141U);
    msg.setSourceEntity(11U);
    msg.setDestination(21446U);
    msg.setDestinationEntity(238U);
    msg.value = 0.6880550041010842;

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
    msg.setTimeStamp(0.20794527624725567);
    msg.setSource(16635U);
    msg.setSourceEntity(203U);
    msg.setDestination(31663U);
    msg.setDestinationEntity(69U);
    msg.value = 0.43302817270935356;

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
    msg.setTimeStamp(0.6313608655971853);
    msg.setSource(56532U);
    msg.setSourceEntity(123U);
    msg.setDestination(3333U);
    msg.setDestinationEntity(100U);
    msg.value = 0.04617933614046554;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.229330825801363);
    msg.setSource(30078U);
    msg.setSourceEntity(12U);
    msg.setDestination(21094U);
    msg.setDestinationEntity(91U);
    msg.id = 171U;
    msg.zoom = 39U;
    msg.action = 152U;

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
    msg.setTimeStamp(0.9025860887380724);
    msg.setSource(37108U);
    msg.setSourceEntity(100U);
    msg.setDestination(35462U);
    msg.setDestinationEntity(124U);
    msg.id = 222U;
    msg.zoom = 84U;
    msg.action = 27U;

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
    msg.setTimeStamp(0.7086642527282525);
    msg.setSource(11213U);
    msg.setSourceEntity(233U);
    msg.setDestination(20400U);
    msg.setDestinationEntity(148U);
    msg.id = 106U;
    msg.zoom = 60U;
    msg.action = 215U;

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
    msg.setTimeStamp(0.4236382515405086);
    msg.setSource(32554U);
    msg.setSourceEntity(74U);
    msg.setDestination(65445U);
    msg.setDestinationEntity(47U);
    msg.id = 92U;
    msg.value = 0.4181438402277272;

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
    msg.setTimeStamp(0.9596588402237924);
    msg.setSource(29340U);
    msg.setSourceEntity(144U);
    msg.setDestination(35538U);
    msg.setDestinationEntity(43U);
    msg.id = 134U;
    msg.value = 0.9396518057478715;

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
    msg.setTimeStamp(0.2531500203194307);
    msg.setSource(40483U);
    msg.setSourceEntity(47U);
    msg.setDestination(27706U);
    msg.setDestinationEntity(206U);
    msg.id = 8U;
    msg.value = 0.13286147989581443;

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
    msg.setTimeStamp(0.35601210108611925);
    msg.setSource(27103U);
    msg.setSourceEntity(161U);
    msg.setDestination(44587U);
    msg.setDestinationEntity(92U);
    msg.id = 207U;
    msg.value = 0.45931843875909817;

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
    msg.setTimeStamp(0.6246200112177165);
    msg.setSource(26107U);
    msg.setSourceEntity(111U);
    msg.setDestination(38680U);
    msg.setDestinationEntity(244U);
    msg.id = 242U;
    msg.value = 0.2054579474438477;

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
    msg.setTimeStamp(0.01683461016790022);
    msg.setSource(43472U);
    msg.setSourceEntity(85U);
    msg.setDestination(28475U);
    msg.setDestinationEntity(72U);
    msg.id = 199U;
    msg.value = 0.010650572964967076;

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
    msg.setTimeStamp(0.10177854474070058);
    msg.setSource(38774U);
    msg.setSourceEntity(165U);
    msg.setDestination(43010U);
    msg.setDestinationEntity(216U);
    msg.id = 61U;
    msg.angle = 0.9704795866187417;

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
    msg.setTimeStamp(0.06649040182352817);
    msg.setSource(9373U);
    msg.setSourceEntity(124U);
    msg.setDestination(18667U);
    msg.setDestinationEntity(3U);
    msg.id = 42U;
    msg.angle = 0.6368714997406568;

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
    msg.setTimeStamp(0.696874845588944);
    msg.setSource(62921U);
    msg.setSourceEntity(252U);
    msg.setDestination(12740U);
    msg.setDestinationEntity(210U);
    msg.id = 131U;
    msg.angle = 0.2229454399437063;

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
    msg.setTimeStamp(0.4072552971651885);
    msg.setSource(25685U);
    msg.setSourceEntity(184U);
    msg.setDestination(30506U);
    msg.setDestinationEntity(1U);
    msg.op = 193U;
    msg.actions.assign("CRNYXKDHKBUXWYEZTIYIVJMNTJGZQYUHDCQBMRVVHXYLYMJTEQRKYOWXZYAKWNAHKBAIPKPKGGMUSRHENFISNRB");

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
    msg.setTimeStamp(0.4430574976244597);
    msg.setSource(24579U);
    msg.setSourceEntity(61U);
    msg.setDestination(57825U);
    msg.setDestinationEntity(181U);
    msg.op = 182U;
    msg.actions.assign("AHZQEDCXLLOSEQTFLAXKZOFFMVLGROJGAUTUYIINFWPGHUCDNWLAQWUYMYSKEBULSULVJFHRDKPFENYQMJCHJNRQNVYTETVWNVHHYRAYLSJPPWFNVEBOISUBAHJOQGBMRPBASPCSPOGMIIBCDWVODPVXUFTSNBDBHPZDJIZEMQUXQTVEZFZZIZMHRXGQJXRZKLBLWFZKGMDRSTKXOAGKBQJXSNGCYWKXIOCWTKWIKPHDEDYCOJCMUI");

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
    msg.setTimeStamp(0.46470154560369004);
    msg.setSource(27017U);
    msg.setSourceEntity(191U);
    msg.setDestination(9547U);
    msg.setDestinationEntity(12U);
    msg.op = 31U;
    msg.actions.assign("JZGUQLCEDNWKPAPTPHJSLDOCUARHCGHJUAEZSYSKMFAJCOHFITIDKLQAKXLOYTANCETGDUMOMOSZZKXHMPPFPRAMIWUOBDBNQFGSGPMTIRUHVKFGWQCBYCODFXBSBIRDEQSQPOYENHQAMCHLNFVVJSSTIXQJLJHPZTBQDAIVZCGERTADVEJINRRMPNCVVKTWWRMVYKYS");

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
    msg.setTimeStamp(0.5309467434257017);
    msg.setSource(27758U);
    msg.setSourceEntity(0U);
    msg.setDestination(34327U);
    msg.setDestinationEntity(229U);
    msg.actions.assign("IBUVVISQQZRRXMZEKTJUFJJBAYIZVWAZVKVTLUVEHHTUTQDADLIVGUJWMWGIEUEJYFSSNCLPVMFEFNGDTKBJTSHDDCRMQYSOBIRCFJTHXKTFOORZ");

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
    msg.setTimeStamp(0.6165771015986238);
    msg.setSource(63770U);
    msg.setSourceEntity(125U);
    msg.setDestination(9824U);
    msg.setDestinationEntity(142U);
    msg.actions.assign("XZJYDYAYFYUIBJDDLELDXMRVHSPIHEHTLJSAPYUNVWQSPWPOJMAJDKGLLKIORTOCJTIECYUHMOQQBGHMNVQBKWBXNQBEHPKJODWFPWCGKURPKULNXJVYUDOCZGNSQIGFOJARFUVMXVWKHXKEHYDMUFZRTONMLBRVWSDINTWLJKL");

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
    msg.setTimeStamp(0.8575220236536222);
    msg.setSource(31994U);
    msg.setSourceEntity(143U);
    msg.setDestination(42183U);
    msg.setDestinationEntity(142U);
    msg.actions.assign("QRQQUTOOSLFJRQJZEZIXITTVLMERBISERBJXNVGKVYAIWOMWKVYZZXDGUHAOJUAACDQXCGSQSBVWYTJFKXVEWNRUZWFVJUNKPNKXUIGHHSMQBYKIYQLKSZDRGHDGARZLCHWENSYFFNTYSVDHZZXJMNLYWNGEQIOJHDXJCRTUOACNBCLLMXJWMSTZFNMCCPYUY");

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
    msg.setTimeStamp(0.8513501278048553);
    msg.setSource(34463U);
    msg.setSourceEntity(233U);
    msg.setDestination(18858U);
    msg.setDestinationEntity(203U);
    msg.button = 57U;
    msg.value = 155U;

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
    msg.setTimeStamp(0.9531773591759203);
    msg.setSource(34199U);
    msg.setSourceEntity(2U);
    msg.setDestination(50668U);
    msg.setDestinationEntity(40U);
    msg.button = 207U;
    msg.value = 172U;

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
    msg.setTimeStamp(0.809470689719079);
    msg.setSource(63414U);
    msg.setSourceEntity(144U);
    msg.setDestination(53485U);
    msg.setDestinationEntity(2U);
    msg.button = 82U;
    msg.value = 86U;

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
    msg.setTimeStamp(0.9818537147715181);
    msg.setSource(1351U);
    msg.setSourceEntity(108U);
    msg.setDestination(43770U);
    msg.setDestinationEntity(208U);
    msg.op = 191U;
    msg.text.assign("NOEHVMYBCLRROQVRZUJEDKNCJGHKCWTOXAFSKWGPIPXJLTBHDMLMIUPVUD");

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
    msg.setTimeStamp(0.07182597920677103);
    msg.setSource(47859U);
    msg.setSourceEntity(145U);
    msg.setDestination(48563U);
    msg.setDestinationEntity(73U);
    msg.op = 60U;
    msg.text.assign("MUHBUUSZWCLEKIDFQCHTXAFXWIZIDBBJRLBNYSBXBOVEGPAYMZWOTGCYZRRMSAMWDQLYZZKEQLNPCEFRZGARQSAQRXHVFFCAUBFHDDTHVIEYGNZEVNHSUAWYKYQDPVOUXJAOTJLVYWBKLGORGPHLGPQROJNUBAFOQELVIKIMZPPKUVFSHXZHQOXECWIUPWNLOKOLVTDGINFSAS");

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
    msg.setTimeStamp(0.09365316813562607);
    msg.setSource(17310U);
    msg.setSourceEntity(135U);
    msg.setDestination(23432U);
    msg.setDestinationEntity(153U);
    msg.op = 10U;
    msg.text.assign("CIJEYUTBSCXNZWNWFJAQOFHTLXENMPBHRLONC");

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
    msg.setTimeStamp(0.1725300713553236);
    msg.setSource(33220U);
    msg.setSourceEntity(44U);
    msg.setDestination(32124U);
    msg.setDestinationEntity(83U);
    msg.op = 167U;
    msg.time_remain = 0.7407607845542831;
    msg.sched_time = 0.3799565238971858;

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
    msg.setTimeStamp(0.27177557245848294);
    msg.setSource(61444U);
    msg.setSourceEntity(179U);
    msg.setDestination(44904U);
    msg.setDestinationEntity(25U);
    msg.op = 58U;
    msg.time_remain = 0.018127106476496624;
    msg.sched_time = 0.19922732918002095;

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
    msg.setTimeStamp(0.453323448792311);
    msg.setSource(59932U);
    msg.setSourceEntity(174U);
    msg.setDestination(62312U);
    msg.setDestinationEntity(51U);
    msg.op = 182U;
    msg.time_remain = 0.6310281985977895;
    msg.sched_time = 0.36645010682894774;

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
    msg.setTimeStamp(0.751936639863394);
    msg.setSource(7743U);
    msg.setSourceEntity(222U);
    msg.setDestination(59711U);
    msg.setDestinationEntity(94U);
    msg.name.assign("MXNVUCVLFRREDQCPLVCOB");
    msg.op = 147U;
    msg.sched_time = 0.3776921502463768;

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
    msg.setTimeStamp(0.8164888205470008);
    msg.setSource(24532U);
    msg.setSourceEntity(20U);
    msg.setDestination(13331U);
    msg.setDestinationEntity(67U);
    msg.name.assign("NKGHLIPJCXNXOCRNPQVZUCCLOXQUNGIVESAGLGQRUFGBAVVEMPWAWHVHCEODILSAKALOQBLVRIOHXRYCMQNEHTDYETJFRNHPUYWAGJXMUMDHMOWSBKRZPDPIDTIJ");
    msg.op = 55U;
    msg.sched_time = 0.45591284305783064;

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
    msg.setTimeStamp(0.2516889292621033);
    msg.setSource(36180U);
    msg.setSourceEntity(210U);
    msg.setDestination(11418U);
    msg.setDestinationEntity(111U);
    msg.name.assign("APEDUCTJBBTHLNUVJTZBJNOWWCRLJQHLDJSDRQXOHIJQIWULHQRPZKIKSZYTGEEYBFZAMXNECDSWLKKXGGWFPCTSRPXBICAVOPYJGVBOXSYIZZRNYUFHCDYMWSTIIUGKFYGPUZV");
    msg.op = 214U;
    msg.sched_time = 0.3839895577684179;

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
    msg.setTimeStamp(0.5467820374850443);
    msg.setSource(44974U);
    msg.setSourceEntity(50U);
    msg.setDestination(52458U);
    msg.setDestinationEntity(5U);

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
    msg.setTimeStamp(0.8127510516526676);
    msg.setSource(13125U);
    msg.setSourceEntity(130U);
    msg.setDestination(63634U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.5518058260893995);
    msg.setSource(59863U);
    msg.setSourceEntity(218U);
    msg.setDestination(27946U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.4962757692581957);
    msg.setSource(1574U);
    msg.setSourceEntity(233U);
    msg.setDestination(5457U);
    msg.setDestinationEntity(36U);
    msg.name.assign("CECEYDJBVJKCAACMGXPSBPEZONUXZZMUSRD");
    msg.state = 202U;

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
    msg.setTimeStamp(0.8492979253487781);
    msg.setSource(8485U);
    msg.setSourceEntity(106U);
    msg.setDestination(58236U);
    msg.setDestinationEntity(148U);
    msg.name.assign("CSTSAWEDDAYCUSMAYCUOFZYFRENHKWVGTTOLBKUUIFXHBPWIQGTRWSWLJIMYHJFNEPYIJGHDBLMQGVGPUXTKDZZBJEDEPNQVTCOTNYMYLVRJCJOAVHLRFMBXFRNZGPPVROEHARDAOHFJDYNIQQQJHSEMUFJKPSNRKWXZQSGBXLMAEGXDMIIKVSXWNEXZISCC");
    msg.state = 171U;

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
    msg.setTimeStamp(0.5535659467940893);
    msg.setSource(21595U);
    msg.setSourceEntity(119U);
    msg.setDestination(51021U);
    msg.setDestinationEntity(18U);
    msg.name.assign("HEDNBPYEXFXJYBSCACGUYHKWIOMEOSQNCINOVOURIOEWIKEDQAZOCGWIUVLJDAORHMHBZURKCGAHBYXTKFDQEBTTNVYVYRSDECKVDAWJRUDQKNLGFYBMRPXJZKLVQXOSTLIMKPRMULZOUJLDTEUVMAFHJTVIMGYVSCFPHTSPILTFBHPUZWHWXBZXFZQKGABUQPQFYSCGWWLGQNCVZPJWQALWSRSNXRDAIZFNTGRPJJHCNGNIKMMJFM");
    msg.state = 96U;

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
    msg.setTimeStamp(0.5403135649105202);
    msg.setSource(38718U);
    msg.setSourceEntity(7U);
    msg.setDestination(3827U);
    msg.setDestinationEntity(222U);
    msg.name.assign("TBPGNEFVKYKFNLMEHVPPFSVMLAEPRAQIINYGZOFXCFUVLJVATORMAKGOCXZMHKZLPHMDCQUIMVFPLSSQUNBUIVZDZRDPDSJCMBUCERABIJS");
    msg.value = 128U;

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
    msg.setTimeStamp(0.5692647603313885);
    msg.setSource(2763U);
    msg.setSourceEntity(225U);
    msg.setDestination(37508U);
    msg.setDestinationEntity(9U);
    msg.name.assign("IIQPNPGLVDOOUZFCNVTMYTQSSADILFTGOXWULMGZRVIQNGYPZHUKOPJDGSOYXBJPONLFFRETIGJHVJQLTYVSHQSOMMYESDEZZXYKBJKCXYWBEBCEMEAFNHBUEGZFHFUUTIADYTSNKNBYWVXVKITDHDZLJMHRRECEYAKKDZIMCGMWAEXBAAGWN");
    msg.value = 27U;

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
    msg.setTimeStamp(0.08942643294120656);
    msg.setSource(9846U);
    msg.setSourceEntity(41U);
    msg.setDestination(21898U);
    msg.setDestinationEntity(232U);
    msg.name.assign("DGAQZOXYRPY");
    msg.value = 185U;

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
    msg.setTimeStamp(0.4345011389586457);
    msg.setSource(10715U);
    msg.setSourceEntity(114U);
    msg.setDestination(55888U);
    msg.setDestinationEntity(21U);
    msg.name.assign("ULWKPDOWJISFIVYNFHMGANONMYHUKOHCWMQY");

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
    msg.setTimeStamp(0.5889613108745437);
    msg.setSource(43048U);
    msg.setSourceEntity(145U);
    msg.setDestination(55881U);
    msg.setDestinationEntity(82U);
    msg.name.assign("MYAFEVKHJBLYLZMSNGMCXVQVHGIUKUVEBMEDIXAXGXHVABAYNOYVBLBGCSNBDWFSOWAAIGJQDCIBOWGAPHEZLSAIDNYVEJDRZVMRFWJXNFGE");

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
    msg.setTimeStamp(0.6473981620843298);
    msg.setSource(36947U);
    msg.setSourceEntity(216U);
    msg.setDestination(49782U);
    msg.setDestinationEntity(136U);
    msg.name.assign("SJINPCCKQHQZPSHBADRFJKFBJCUSJGDLCRFNASRCYCATVLKPYWMFWNYPXDPZAMNKDYNOTEPYAYVOQEWEPYVREXUMVIRJORTVJBTMILSKQIXFZRYOASWMNZIZTGNHIKHJUBFZHQKSKBNDEHDCLVXMKEGEZDPMFYDVGWXBULLHOWSZXWODUWUTZEUOQEDGJBSMTJGEIRHGWHTFWOGSCTCTLAGOUXVYKIVXMPBHBAQ");

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
    msg.setTimeStamp(0.24869091792511866);
    msg.setSource(41473U);
    msg.setSourceEntity(22U);
    msg.setDestination(58013U);
    msg.setDestinationEntity(214U);
    msg.name.assign("VBRGRVUHOYQZGSFDILTJADOXZPNISNVMIJKMJYHBPTNJPFXCEHRPXFGCRTBXDLYPWGQBHKQTQWEVRQGEWMELNZXSFVGVQJEGSWBNUUAUIYVOXKMOLOEIOKFIWMOBIHYYFHAZAKQPHDNLDKXLNXHCXFIEQEDZSNFYCWSBTZO");
    msg.value = 137U;

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
    msg.setTimeStamp(0.798376592742983);
    msg.setSource(1998U);
    msg.setSourceEntity(107U);
    msg.setDestination(33225U);
    msg.setDestinationEntity(166U);
    msg.name.assign("BHBDAWCZYLKSVENARIVVIXMSIGWSDVOUFGPPEGWPNLGBGBEJYZPYRSPQODRNEILJJMEKTOUCGQUHUTHWYDLOBFQLUNMTAWMQVXBCOOXIGHXWVMDVZFUAAFRRYTOQCZNXDIQKVZTWASMHORJSEAWUZPWJJLQUXTHJIDFDNK");
    msg.value = 86U;

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
    msg.setTimeStamp(0.48067254012248406);
    msg.setSource(6457U);
    msg.setSourceEntity(49U);
    msg.setDestination(48574U);
    msg.setDestinationEntity(134U);
    msg.name.assign("RPCRSJLUVBSZBBDNTYAWGIYOXRUCGJNZFIFHODJMDFHODJYJFBWZQTHQXJSJCTPGLRPRYNIMQTIHFRYWVKXWXBHZGRUAEYNSRVLOAMOKYDZTCRYTXNKXKWSOQEEWVULLAOYETHXVFPMUHSFMKNALP");
    msg.value = 215U;

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
    msg.setTimeStamp(0.42928641207679785);
    msg.setSource(18719U);
    msg.setSourceEntity(246U);
    msg.setDestination(20937U);
    msg.setDestinationEntity(106U);
    msg.id = 250U;
    msg.period = 1405520194U;
    msg.duty_cycle = 3604815827U;

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
    msg.setTimeStamp(0.8926175096676635);
    msg.setSource(12832U);
    msg.setSourceEntity(215U);
    msg.setDestination(55441U);
    msg.setDestinationEntity(26U);
    msg.id = 182U;
    msg.period = 2919916538U;
    msg.duty_cycle = 3991924112U;

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
    msg.setTimeStamp(0.9153769984139758);
    msg.setSource(12584U);
    msg.setSourceEntity(234U);
    msg.setDestination(61701U);
    msg.setDestinationEntity(129U);
    msg.id = 7U;
    msg.period = 1195696816U;
    msg.duty_cycle = 1039832101U;

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
    msg.setTimeStamp(0.5565139675694517);
    msg.setSource(46891U);
    msg.setSourceEntity(16U);
    msg.setDestination(14277U);
    msg.setDestinationEntity(237U);
    msg.id = 182U;
    msg.period = 3921761621U;
    msg.duty_cycle = 4006023293U;

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
    msg.setTimeStamp(0.8336449899951208);
    msg.setSource(9573U);
    msg.setSourceEntity(71U);
    msg.setDestination(62444U);
    msg.setDestinationEntity(127U);
    msg.id = 126U;
    msg.period = 3784115531U;
    msg.duty_cycle = 1434099465U;

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
    msg.setTimeStamp(0.6856254751377877);
    msg.setSource(55541U);
    msg.setSourceEntity(181U);
    msg.setDestination(41452U);
    msg.setDestinationEntity(114U);
    msg.id = 33U;
    msg.period = 1131100951U;
    msg.duty_cycle = 3115333098U;

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
    msg.setTimeStamp(0.34348727327044537);
    msg.setSource(60235U);
    msg.setSourceEntity(45U);
    msg.setDestination(34080U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.21214210993475158;
    msg.lon = 0.09536635239503166;
    msg.height = 0.25366334248707134;
    msg.x = 0.04705402876670728;
    msg.y = 0.6748114233795992;
    msg.z = 0.8338702809683423;
    msg.phi = 0.4407639585057693;
    msg.theta = 0.8006406883615838;
    msg.psi = 0.9608906724487069;
    msg.u = 0.4550331459014755;
    msg.v = 0.1951657587954697;
    msg.w = 0.05115030476118132;
    msg.vx = 0.005596044811676526;
    msg.vy = 0.28946216828071325;
    msg.vz = 0.8547327478464815;
    msg.p = 0.5982175622487576;
    msg.q = 0.05017377796721578;
    msg.r = 0.7223252174153102;
    msg.depth = 0.1134317165480192;
    msg.alt = 0.5642346885198076;

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
    msg.setTimeStamp(0.8290163540949027);
    msg.setSource(57966U);
    msg.setSourceEntity(37U);
    msg.setDestination(30119U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.0802346314475777;
    msg.lon = 0.20623749487312593;
    msg.height = 0.13682270664527107;
    msg.x = 0.6376804298429887;
    msg.y = 0.10414175620357868;
    msg.z = 0.19585479662988325;
    msg.phi = 0.30153959320799406;
    msg.theta = 0.4112746957246801;
    msg.psi = 0.8269198231945701;
    msg.u = 0.8820030860101213;
    msg.v = 0.7853686887135943;
    msg.w = 0.8319621326116582;
    msg.vx = 0.834565875482173;
    msg.vy = 0.6670458228476026;
    msg.vz = 0.03563027283938114;
    msg.p = 0.06593545964889502;
    msg.q = 0.43150646334903964;
    msg.r = 0.5078811119056906;
    msg.depth = 0.41646127281946177;
    msg.alt = 0.09382461778751994;

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
    msg.setTimeStamp(0.8827116239247785);
    msg.setSource(10546U);
    msg.setSourceEntity(202U);
    msg.setDestination(9112U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.6436906340430205;
    msg.lon = 0.6081964672287465;
    msg.height = 0.05366474505403829;
    msg.x = 0.40648999039066314;
    msg.y = 0.9604626231362227;
    msg.z = 0.5037566983862806;
    msg.phi = 0.6195881763602802;
    msg.theta = 0.8192420351434778;
    msg.psi = 0.675745696220008;
    msg.u = 0.6937389878732814;
    msg.v = 0.28666777455730186;
    msg.w = 0.4981335887623649;
    msg.vx = 0.061639496133070626;
    msg.vy = 0.822283710432743;
    msg.vz = 0.19287003729272734;
    msg.p = 0.374850228241697;
    msg.q = 0.7192357234316905;
    msg.r = 0.02033247896709145;
    msg.depth = 0.9349003291747199;
    msg.alt = 0.5629019462980173;

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
    msg.setTimeStamp(0.10571539093134119);
    msg.setSource(9973U);
    msg.setSourceEntity(137U);
    msg.setDestination(28558U);
    msg.setDestinationEntity(138U);
    msg.x = 0.31562819712532;
    msg.y = 0.581228623241036;
    msg.z = 0.2799690526574251;

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
    msg.setTimeStamp(0.007272620253420903);
    msg.setSource(52062U);
    msg.setSourceEntity(215U);
    msg.setDestination(12423U);
    msg.setDestinationEntity(171U);
    msg.x = 0.5639220412210895;
    msg.y = 0.552185585112208;
    msg.z = 0.5038911782495786;

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
    msg.setTimeStamp(0.4315970031441476);
    msg.setSource(26938U);
    msg.setSourceEntity(93U);
    msg.setDestination(31182U);
    msg.setDestinationEntity(0U);
    msg.x = 0.42736047086835793;
    msg.y = 0.6005527743999803;
    msg.z = 0.0025455162383073437;

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
    msg.setTimeStamp(0.04666576644105935);
    msg.setSource(48448U);
    msg.setSourceEntity(97U);
    msg.setDestination(24011U);
    msg.setDestinationEntity(98U);
    msg.value = 0.9701301447946713;

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
    msg.setTimeStamp(0.7150123715745601);
    msg.setSource(29642U);
    msg.setSourceEntity(191U);
    msg.setDestination(46237U);
    msg.setDestinationEntity(84U);
    msg.value = 0.34135227274995616;

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
    msg.setTimeStamp(0.5998482432230214);
    msg.setSource(37661U);
    msg.setSourceEntity(246U);
    msg.setDestination(33287U);
    msg.setDestinationEntity(81U);
    msg.value = 0.2685292960256641;

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
    msg.setTimeStamp(0.18944692364643878);
    msg.setSource(4691U);
    msg.setSourceEntity(189U);
    msg.setDestination(11194U);
    msg.setDestinationEntity(218U);
    msg.value = 0.4543859859586704;

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
    msg.setTimeStamp(0.3922603477140044);
    msg.setSource(35167U);
    msg.setSourceEntity(62U);
    msg.setDestination(4298U);
    msg.setDestinationEntity(88U);
    msg.value = 0.9136672524511457;

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
    msg.setTimeStamp(0.9940687911482984);
    msg.setSource(15281U);
    msg.setSourceEntity(62U);
    msg.setDestination(40665U);
    msg.setDestinationEntity(40U);
    msg.value = 0.8459172833940632;

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
    msg.setTimeStamp(0.5665250984361477);
    msg.setSource(22620U);
    msg.setSourceEntity(71U);
    msg.setDestination(62535U);
    msg.setDestinationEntity(110U);
    msg.x = 0.8293425993420098;
    msg.y = 0.11915286464764652;
    msg.z = 0.010798922137817635;
    msg.phi = 0.801341919158462;
    msg.theta = 0.35815664380652434;
    msg.psi = 0.010669102235839611;
    msg.p = 0.2945374521605325;
    msg.q = 0.9009890090768347;
    msg.r = 0.6629103105494343;
    msg.u = 0.22560953952891993;
    msg.v = 0.5339664746547531;
    msg.w = 0.13311638864772757;
    msg.bias_psi = 0.22576260833699746;
    msg.bias_r = 0.838095349507496;

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
    msg.setTimeStamp(0.853371964867103);
    msg.setSource(10430U);
    msg.setSourceEntity(174U);
    msg.setDestination(20773U);
    msg.setDestinationEntity(85U);
    msg.x = 0.3198842676107154;
    msg.y = 0.1367855464457961;
    msg.z = 0.6396298058684726;
    msg.phi = 0.6223783074827943;
    msg.theta = 0.254820623241818;
    msg.psi = 0.4161048593332818;
    msg.p = 0.13221595829690902;
    msg.q = 0.487410472062326;
    msg.r = 0.1922673736465388;
    msg.u = 0.2977815227935091;
    msg.v = 0.6375371418226548;
    msg.w = 0.8931400883463058;
    msg.bias_psi = 0.8126838616537259;
    msg.bias_r = 0.42676261017007244;

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
    msg.setTimeStamp(0.7657357872282283);
    msg.setSource(37630U);
    msg.setSourceEntity(62U);
    msg.setDestination(50193U);
    msg.setDestinationEntity(163U);
    msg.x = 0.9415762067707985;
    msg.y = 0.41153312721442126;
    msg.z = 0.9794146959426263;
    msg.phi = 0.852017785216222;
    msg.theta = 0.6870088689033581;
    msg.psi = 0.403890694198658;
    msg.p = 0.464560476252334;
    msg.q = 0.6099240132365498;
    msg.r = 0.022646569721145537;
    msg.u = 0.05872881046914202;
    msg.v = 0.03595335305062952;
    msg.w = 0.6721098072785932;
    msg.bias_psi = 0.14452536002131244;
    msg.bias_r = 0.806576199117318;

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
    msg.setTimeStamp(0.007507725761441875);
    msg.setSource(3391U);
    msg.setSourceEntity(164U);
    msg.setDestination(37582U);
    msg.setDestinationEntity(69U);
    msg.bias_psi = 0.14890782579581063;
    msg.bias_r = 0.5803343602692477;
    msg.cog = 0.2967235872508962;
    msg.cyaw = 0.43544357402486156;
    msg.lbl_rej_level = 0.17202459095086198;
    msg.gps_rej_level = 0.6161257515504661;
    msg.custom_x = 0.4213529185426145;
    msg.custom_y = 0.8835794093259821;
    msg.custom_z = 0.32276442837999864;

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
    msg.setTimeStamp(0.37852236121392413);
    msg.setSource(36774U);
    msg.setSourceEntity(106U);
    msg.setDestination(62803U);
    msg.setDestinationEntity(61U);
    msg.bias_psi = 0.3636409054675316;
    msg.bias_r = 0.6462430691356186;
    msg.cog = 0.051061545312022116;
    msg.cyaw = 0.049429055861249016;
    msg.lbl_rej_level = 0.4461648484584436;
    msg.gps_rej_level = 0.8941075861295116;
    msg.custom_x = 0.6460587923208126;
    msg.custom_y = 0.10667212322958974;
    msg.custom_z = 0.27999656897800673;

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
    msg.setTimeStamp(0.6825240824837232);
    msg.setSource(48867U);
    msg.setSourceEntity(21U);
    msg.setDestination(56798U);
    msg.setDestinationEntity(189U);
    msg.bias_psi = 0.15759538816001628;
    msg.bias_r = 0.15583590449921836;
    msg.cog = 0.7150517064738767;
    msg.cyaw = 0.0038420909815951587;
    msg.lbl_rej_level = 0.8913410005950615;
    msg.gps_rej_level = 0.917310560855064;
    msg.custom_x = 0.9263959208544672;
    msg.custom_y = 0.8846616885783644;
    msg.custom_z = 0.8758982647952666;

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
    msg.setTimeStamp(0.20193070952136583);
    msg.setSource(21046U);
    msg.setSourceEntity(144U);
    msg.setDestination(31969U);
    msg.setDestinationEntity(245U);
    msg.utc_time = 0.05685571311298121;
    msg.reason = 98U;

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
    msg.setTimeStamp(0.478573085943393);
    msg.setSource(22227U);
    msg.setSourceEntity(225U);
    msg.setDestination(11864U);
    msg.setDestinationEntity(159U);
    msg.utc_time = 0.16449581723210915;
    msg.reason = 81U;

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
    msg.setTimeStamp(0.0843034090645145);
    msg.setSource(11074U);
    msg.setSourceEntity(204U);
    msg.setDestination(62092U);
    msg.setDestinationEntity(241U);
    msg.utc_time = 0.4060517988852913;
    msg.reason = 152U;

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
    msg.setTimeStamp(0.07395990460286173);
    msg.setSource(30046U);
    msg.setSourceEntity(132U);
    msg.setDestination(50760U);
    msg.setDestinationEntity(177U);
    msg.id = 60U;
    msg.range = 0.9785633184266379;
    msg.acceptance = 112U;

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
    msg.setTimeStamp(0.47753161246168985);
    msg.setSource(54155U);
    msg.setSourceEntity(220U);
    msg.setDestination(6184U);
    msg.setDestinationEntity(248U);
    msg.id = 211U;
    msg.range = 0.41966283586745257;
    msg.acceptance = 220U;

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
    msg.setTimeStamp(0.9563545107357662);
    msg.setSource(63633U);
    msg.setSourceEntity(10U);
    msg.setDestination(23943U);
    msg.setDestinationEntity(52U);
    msg.id = 89U;
    msg.range = 0.7129553634979747;
    msg.acceptance = 151U;

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
    msg.setTimeStamp(0.856938464147674);
    msg.setSource(33031U);
    msg.setSourceEntity(98U);
    msg.setDestination(41280U);
    msg.setDestinationEntity(209U);
    msg.type = 138U;
    msg.reason = 110U;
    msg.value = 0.8199177459140226;
    msg.timestep = 0.5877898718061318;

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
    msg.setTimeStamp(0.6005736629046439);
    msg.setSource(1225U);
    msg.setSourceEntity(115U);
    msg.setDestination(50068U);
    msg.setDestinationEntity(246U);
    msg.type = 204U;
    msg.reason = 79U;
    msg.value = 0.37427069346417985;
    msg.timestep = 0.23902413251406618;

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
    msg.setTimeStamp(0.31719497826175225);
    msg.setSource(4828U);
    msg.setSourceEntity(148U);
    msg.setDestination(19257U);
    msg.setDestinationEntity(225U);
    msg.type = 67U;
    msg.reason = 46U;
    msg.value = 0.7048300123954483;
    msg.timestep = 0.2935375219723313;

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
    msg.setTimeStamp(0.9206405815743339);
    msg.setSource(10091U);
    msg.setSourceEntity(140U);
    msg.setDestination(32056U);
    msg.setDestinationEntity(91U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("FKRFBAQYZMZCADRYPPWUTBMGSLEGZSCRKAJQQWMZIJFZQLUPBYSTJDXXBBBPPHDRDYKHIGYYGOOVIJMOULACKWEEFKCPNTKRXHJCNBVINJVKGEWE");
    tmp_msg_0.lat = 0.5268122642374476;
    tmp_msg_0.lon = 0.884840257406129;
    tmp_msg_0.depth = 0.027712364792853772;
    tmp_msg_0.query_channel = 159U;
    tmp_msg_0.reply_channel = 181U;
    tmp_msg_0.transponder_delay = 188U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.5265324788506385;
    msg.y = 0.4129559805312274;
    msg.var_x = 0.7062135855251848;
    msg.var_y = 0.36838045582511614;
    msg.distance = 0.7579789457387628;

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
    msg.setTimeStamp(0.2588712670765144);
    msg.setSource(23656U);
    msg.setSourceEntity(245U);
    msg.setDestination(63314U);
    msg.setDestinationEntity(195U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JPFXTXTRLYBYMUTCOROJVAOTSRQZSHCEUZZUXHNVUEFKDDWKBVNQASPOVDUZVXGLJFYIWFCMQLPUGLWMSPJPWQSXIZONKJTNPGDWZEQBQGKVCPOSRNMOUFDDIATLFDOAWHMYKBYPTCKAQTGOVLIQERAYMQWHGIRYXLCGBCZCYZOBBRBEKGHMNAHICAWEBMELVMKJUVFJVGHLCZEXKNSXTUDPYNUQNNFSXZSEIIIDIRAAFPEKXJRGB");
    tmp_msg_0.lat = 0.20480359132654524;
    tmp_msg_0.lon = 0.3761584484669165;
    tmp_msg_0.depth = 0.9885994820664489;
    tmp_msg_0.query_channel = 237U;
    tmp_msg_0.reply_channel = 34U;
    tmp_msg_0.transponder_delay = 117U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6595951784618889;
    msg.y = 0.5849431126048843;
    msg.var_x = 0.909312251956308;
    msg.var_y = 0.21405350791240363;
    msg.distance = 0.21785894745208245;

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
    msg.setTimeStamp(0.7069022083272385);
    msg.setSource(50028U);
    msg.setSourceEntity(221U);
    msg.setDestination(55528U);
    msg.setDestinationEntity(245U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RVYDCTCIKSJQYZISGYUEXPJSZ");
    tmp_msg_0.lat = 0.6802974762330388;
    tmp_msg_0.lon = 0.1866150675808338;
    tmp_msg_0.depth = 0.9449309983635734;
    tmp_msg_0.query_channel = 121U;
    tmp_msg_0.reply_channel = 179U;
    tmp_msg_0.transponder_delay = 195U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7270394711249327;
    msg.y = 0.9527014523253214;
    msg.var_x = 0.013393102769083787;
    msg.var_y = 0.13455795739004173;
    msg.distance = 0.42651802327085275;

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
    msg.setTimeStamp(0.16675550226671343);
    msg.setSource(11187U);
    msg.setSourceEntity(11U);
    msg.setDestination(20749U);
    msg.setDestinationEntity(174U);
    msg.state = 78U;

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
    msg.setTimeStamp(0.09690223613245452);
    msg.setSource(14121U);
    msg.setSourceEntity(183U);
    msg.setDestination(28289U);
    msg.setDestinationEntity(128U);
    msg.state = 187U;

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
    msg.setTimeStamp(0.101001377716608);
    msg.setSource(14434U);
    msg.setSourceEntity(191U);
    msg.setDestination(19699U);
    msg.setDestinationEntity(133U);
    msg.state = 45U;

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
    msg.setTimeStamp(0.14105474808659568);
    msg.setSource(9335U);
    msg.setSourceEntity(31U);
    msg.setDestination(29196U);
    msg.setDestinationEntity(5U);
    msg.x = 0.7411712038338022;
    msg.y = 0.007173360127889494;
    msg.z = 0.1470560836441248;

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
    msg.setTimeStamp(0.47684341843531974);
    msg.setSource(16078U);
    msg.setSourceEntity(165U);
    msg.setDestination(64201U);
    msg.setDestinationEntity(145U);
    msg.x = 0.8396413231272903;
    msg.y = 0.6084366368253495;
    msg.z = 0.49852330325355854;

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
    msg.setTimeStamp(0.8160772983972268);
    msg.setSource(28055U);
    msg.setSourceEntity(141U);
    msg.setDestination(62285U);
    msg.setDestinationEntity(70U);
    msg.x = 0.23118317440335345;
    msg.y = 0.4644201691408921;
    msg.z = 0.2923309278956907;

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
    msg.setTimeStamp(0.6371823756640772);
    msg.setSource(49676U);
    msg.setSourceEntity(69U);
    msg.setDestination(1447U);
    msg.setDestinationEntity(190U);
    msg.value = 0.5650737012217191;

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
    msg.setTimeStamp(0.6173925108125847);
    msg.setSource(22244U);
    msg.setSourceEntity(238U);
    msg.setDestination(42114U);
    msg.setDestinationEntity(53U);
    msg.value = 0.502252125764922;

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
    msg.setTimeStamp(0.32825177777352);
    msg.setSource(63117U);
    msg.setSourceEntity(180U);
    msg.setDestination(16590U);
    msg.setDestinationEntity(60U);
    msg.value = 0.838349092307949;

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
    msg.setTimeStamp(0.10629248409291758);
    msg.setSource(26859U);
    msg.setSourceEntity(160U);
    msg.setDestination(59083U);
    msg.setDestinationEntity(64U);
    msg.value = 0.5062675575490078;
    msg.z_units = 244U;

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
    msg.setTimeStamp(0.9243956484073484);
    msg.setSource(527U);
    msg.setSourceEntity(172U);
    msg.setDestination(57073U);
    msg.setDestinationEntity(96U);
    msg.value = 0.45617678536190487;
    msg.z_units = 166U;

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
    msg.setTimeStamp(0.8871753417630993);
    msg.setSource(45991U);
    msg.setSourceEntity(251U);
    msg.setDestination(63384U);
    msg.setDestinationEntity(171U);
    msg.value = 0.5617159303806404;
    msg.z_units = 167U;

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
    msg.setTimeStamp(0.9785336210828361);
    msg.setSource(39873U);
    msg.setSourceEntity(140U);
    msg.setDestination(16658U);
    msg.setDestinationEntity(54U);
    msg.value = 0.3616583882947234;
    msg.speed_units = 223U;

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
    msg.setTimeStamp(0.47480202766246804);
    msg.setSource(65339U);
    msg.setSourceEntity(155U);
    msg.setDestination(51418U);
    msg.setDestinationEntity(27U);
    msg.value = 0.8224028116551779;
    msg.speed_units = 249U;

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
    msg.setTimeStamp(0.7232919382719512);
    msg.setSource(53048U);
    msg.setSourceEntity(110U);
    msg.setDestination(24657U);
    msg.setDestinationEntity(158U);
    msg.value = 0.21487783428664597;
    msg.speed_units = 107U;

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
    msg.setTimeStamp(0.7511056613837176);
    msg.setSource(22474U);
    msg.setSourceEntity(155U);
    msg.setDestination(28096U);
    msg.setDestinationEntity(108U);
    msg.value = 0.0541834564035758;

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
    msg.setTimeStamp(0.862843771273708);
    msg.setSource(48320U);
    msg.setSourceEntity(218U);
    msg.setDestination(9105U);
    msg.setDestinationEntity(22U);
    msg.value = 0.2634451191433903;

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
    msg.setTimeStamp(0.8011902507493116);
    msg.setSource(54744U);
    msg.setSourceEntity(53U);
    msg.setDestination(60918U);
    msg.setDestinationEntity(182U);
    msg.value = 0.39565397214839404;

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
    msg.setTimeStamp(0.09534490584214972);
    msg.setSource(20303U);
    msg.setSourceEntity(99U);
    msg.setDestination(54731U);
    msg.setDestinationEntity(34U);
    msg.value = 0.4316591460348844;

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
    msg.setTimeStamp(0.8537160231246311);
    msg.setSource(36525U);
    msg.setSourceEntity(245U);
    msg.setDestination(46847U);
    msg.setDestinationEntity(124U);
    msg.value = 0.8085657705258101;

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
    msg.setTimeStamp(0.11959205378358106);
    msg.setSource(60988U);
    msg.setSourceEntity(186U);
    msg.setDestination(39246U);
    msg.setDestinationEntity(22U);
    msg.value = 0.33401905709481905;

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
    msg.setTimeStamp(0.7414379184327141);
    msg.setSource(62137U);
    msg.setSourceEntity(146U);
    msg.setDestination(46660U);
    msg.setDestinationEntity(206U);
    msg.value = 0.9408022023517402;

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
    msg.setTimeStamp(0.9129686136634331);
    msg.setSource(6266U);
    msg.setSourceEntity(130U);
    msg.setDestination(59990U);
    msg.setDestinationEntity(53U);
    msg.value = 0.49165075424573246;

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
    msg.setTimeStamp(0.7510865640805567);
    msg.setSource(37154U);
    msg.setSourceEntity(182U);
    msg.setDestination(22651U);
    msg.setDestinationEntity(32U);
    msg.value = 0.8405669350191608;

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
    msg.setTimeStamp(0.7047961192860771);
    msg.setSource(50698U);
    msg.setSourceEntity(179U);
    msg.setDestination(16788U);
    msg.setDestinationEntity(75U);
    msg.path_ref = 1599859693U;
    msg.start_lat = 0.8962174868951549;
    msg.start_lon = 0.10364795328755383;
    msg.start_z = 0.7890218093170817;
    msg.start_z_units = 159U;
    msg.end_lat = 0.1427475395120681;
    msg.end_lon = 0.14986756207703256;
    msg.end_z = 0.1980567220934758;
    msg.end_z_units = 130U;
    msg.speed = 0.3021951203564073;
    msg.speed_units = 222U;
    msg.lradius = 0.41974018805034086;
    msg.flags = 8U;

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
    msg.setTimeStamp(0.46466702106999713);
    msg.setSource(57030U);
    msg.setSourceEntity(189U);
    msg.setDestination(20068U);
    msg.setDestinationEntity(46U);
    msg.path_ref = 80484836U;
    msg.start_lat = 0.27164944150522385;
    msg.start_lon = 0.5394485767740463;
    msg.start_z = 0.18628195642590217;
    msg.start_z_units = 253U;
    msg.end_lat = 0.5838841822561465;
    msg.end_lon = 0.8350027231421222;
    msg.end_z = 0.6625448211470971;
    msg.end_z_units = 24U;
    msg.speed = 0.6764733805375214;
    msg.speed_units = 209U;
    msg.lradius = 0.22776498870051354;
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
    msg.setTimeStamp(0.41769652264789614);
    msg.setSource(7418U);
    msg.setSourceEntity(122U);
    msg.setDestination(27815U);
    msg.setDestinationEntity(235U);
    msg.path_ref = 2232120226U;
    msg.start_lat = 0.010902952882802186;
    msg.start_lon = 0.76375469178692;
    msg.start_z = 0.7429638587932479;
    msg.start_z_units = 163U;
    msg.end_lat = 0.32281224876110903;
    msg.end_lon = 0.7020011756433204;
    msg.end_z = 0.6194391608087635;
    msg.end_z_units = 16U;
    msg.speed = 0.8521232408761459;
    msg.speed_units = 222U;
    msg.lradius = 0.9375718472071564;
    msg.flags = 167U;

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
    msg.setTimeStamp(0.3405810620797549);
    msg.setSource(16625U);
    msg.setSourceEntity(64U);
    msg.setDestination(46582U);
    msg.setDestinationEntity(248U);
    msg.x = 0.4699680039747217;
    msg.y = 0.9640182752021182;
    msg.z = 0.2636712681344393;
    msg.k = 0.7400394069930305;
    msg.m = 0.3971074184294662;
    msg.n = 0.8955381173811331;
    msg.flags = 137U;

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
    msg.setTimeStamp(0.05572134752918145);
    msg.setSource(6503U);
    msg.setSourceEntity(21U);
    msg.setDestination(12605U);
    msg.setDestinationEntity(129U);
    msg.x = 0.6844352376670645;
    msg.y = 0.5473624603014029;
    msg.z = 0.059586135271536556;
    msg.k = 0.15206587359698875;
    msg.m = 0.5489783568613857;
    msg.n = 0.6211531313791587;
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
    msg.setTimeStamp(0.3821674318753081);
    msg.setSource(10929U);
    msg.setSourceEntity(104U);
    msg.setDestination(22960U);
    msg.setDestinationEntity(71U);
    msg.x = 0.10819738175929405;
    msg.y = 0.05640608677693171;
    msg.z = 0.5147908293010847;
    msg.k = 0.2374404312174606;
    msg.m = 0.4260922437398472;
    msg.n = 0.19218133061435483;
    msg.flags = 218U;

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
    msg.setTimeStamp(0.2688070152436357);
    msg.setSource(21267U);
    msg.setSourceEntity(248U);
    msg.setDestination(11220U);
    msg.setDestinationEntity(152U);
    msg.value = 0.16659357459745294;

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
    msg.setTimeStamp(0.6547334067357049);
    msg.setSource(14505U);
    msg.setSourceEntity(210U);
    msg.setDestination(60081U);
    msg.setDestinationEntity(233U);
    msg.value = 0.09121908778273757;

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
    msg.setTimeStamp(0.8163342319070527);
    msg.setSource(51085U);
    msg.setSourceEntity(77U);
    msg.setDestination(7153U);
    msg.setDestinationEntity(148U);
    msg.value = 0.401539679501157;

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
    msg.setTimeStamp(0.7338177770860272);
    msg.setSource(7114U);
    msg.setSourceEntity(35U);
    msg.setDestination(2620U);
    msg.setDestinationEntity(0U);
    msg.u = 0.4055729532120401;
    msg.v = 0.18667808086776994;
    msg.w = 0.7614895099182021;
    msg.p = 0.7857166798723472;
    msg.q = 0.7018996448602123;
    msg.r = 0.3780113897509251;
    msg.flags = 27U;

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
    msg.setTimeStamp(0.3695919238279186);
    msg.setSource(49725U);
    msg.setSourceEntity(174U);
    msg.setDestination(47303U);
    msg.setDestinationEntity(241U);
    msg.u = 0.4257335404593877;
    msg.v = 0.8067848999977746;
    msg.w = 0.7093832577701731;
    msg.p = 0.24983190389169796;
    msg.q = 0.9306442348311637;
    msg.r = 0.6191650134045912;
    msg.flags = 61U;

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
    msg.setTimeStamp(0.5688570362918389);
    msg.setSource(24099U);
    msg.setSourceEntity(180U);
    msg.setDestination(6005U);
    msg.setDestinationEntity(238U);
    msg.u = 0.24560640076754814;
    msg.v = 0.059641787921991374;
    msg.w = 0.2047021073051969;
    msg.p = 0.7882033841101476;
    msg.q = 0.5697848796025571;
    msg.r = 0.8277980529985353;
    msg.flags = 135U;

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
    msg.setTimeStamp(0.3022874015124247);
    msg.setSource(53664U);
    msg.setSourceEntity(102U);
    msg.setDestination(720U);
    msg.setDestinationEntity(199U);
    msg.path_ref = 466055277U;
    msg.start_lat = 0.33672812267156216;
    msg.start_lon = 0.3661725606843831;
    msg.start_z = 0.22642041380888367;
    msg.start_z_units = 183U;
    msg.end_lat = 0.4729040395394376;
    msg.end_lon = 0.6574636591091008;
    msg.end_z = 0.5295183028770096;
    msg.end_z_units = 156U;
    msg.lradius = 0.7251816593447936;
    msg.flags = 65U;
    msg.x = 0.9169118523576526;
    msg.y = 0.09449112327839126;
    msg.z = 0.07004671943146923;
    msg.vx = 0.6698132145583136;
    msg.vy = 0.07445180253592287;
    msg.vz = 0.10292526392837331;
    msg.course_error = 0.951223620030277;
    msg.eta = 9412U;

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
    msg.setTimeStamp(0.4027546557916204);
    msg.setSource(44036U);
    msg.setSourceEntity(70U);
    msg.setDestination(58476U);
    msg.setDestinationEntity(91U);
    msg.path_ref = 3498841452U;
    msg.start_lat = 0.08062930143592728;
    msg.start_lon = 0.9032126050718644;
    msg.start_z = 0.06013604771078096;
    msg.start_z_units = 77U;
    msg.end_lat = 0.07918514360804219;
    msg.end_lon = 0.435984088125308;
    msg.end_z = 0.31317399797084455;
    msg.end_z_units = 193U;
    msg.lradius = 0.8047148046290843;
    msg.flags = 55U;
    msg.x = 0.22932762256817396;
    msg.y = 0.6958741071537589;
    msg.z = 0.8517561713452609;
    msg.vx = 0.7100321404480433;
    msg.vy = 0.48266529261143665;
    msg.vz = 0.6437571089100796;
    msg.course_error = 0.9631884617429907;
    msg.eta = 12211U;

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
    msg.setTimeStamp(0.2560523688845433);
    msg.setSource(26257U);
    msg.setSourceEntity(248U);
    msg.setDestination(47786U);
    msg.setDestinationEntity(129U);
    msg.path_ref = 1953104704U;
    msg.start_lat = 0.6415272186462101;
    msg.start_lon = 0.5078980808079482;
    msg.start_z = 0.36544292122701394;
    msg.start_z_units = 229U;
    msg.end_lat = 0.3076791443758018;
    msg.end_lon = 0.8888852451518141;
    msg.end_z = 0.7500820057415978;
    msg.end_z_units = 182U;
    msg.lradius = 0.4675156232839003;
    msg.flags = 203U;
    msg.x = 0.9581519178308887;
    msg.y = 0.023258672915493217;
    msg.z = 0.9434761188587697;
    msg.vx = 0.5940886505530263;
    msg.vy = 0.8043728062277639;
    msg.vz = 0.8755126913557502;
    msg.course_error = 0.8671723507262621;
    msg.eta = 30036U;

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
    msg.setTimeStamp(0.9924435508284933);
    msg.setSource(4827U);
    msg.setSourceEntity(109U);
    msg.setDestination(55564U);
    msg.setDestinationEntity(52U);
    msg.k = 0.9661523581912412;
    msg.m = 0.88715403740365;
    msg.n = 0.078764283331207;

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
    msg.setTimeStamp(0.4305397163160315);
    msg.setSource(23120U);
    msg.setSourceEntity(226U);
    msg.setDestination(46522U);
    msg.setDestinationEntity(153U);
    msg.k = 0.24712083971636134;
    msg.m = 0.6273356144115073;
    msg.n = 0.8121665004398564;

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
    msg.setTimeStamp(0.678218859251652);
    msg.setSource(59683U);
    msg.setSourceEntity(154U);
    msg.setDestination(39132U);
    msg.setDestinationEntity(61U);
    msg.k = 0.20101485962664756;
    msg.m = 0.22361013742081892;
    msg.n = 0.7594939327872045;

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
    msg.setTimeStamp(0.7722685101424122);
    msg.setSource(45419U);
    msg.setSourceEntity(89U);
    msg.setDestination(5646U);
    msg.setDestinationEntity(124U);
    msg.p = 0.6593025762636217;
    msg.i = 0.765689613910792;
    msg.d = 0.11034916906309422;
    msg.a = 0.8148538638424401;

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
    msg.setTimeStamp(0.8405233580009773);
    msg.setSource(33870U);
    msg.setSourceEntity(149U);
    msg.setDestination(2313U);
    msg.setDestinationEntity(126U);
    msg.p = 0.5793555551279472;
    msg.i = 0.6271094643958947;
    msg.d = 0.009020800322009137;
    msg.a = 0.9287039569745447;

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
    msg.setTimeStamp(0.9368775660245316);
    msg.setSource(58706U);
    msg.setSourceEntity(28U);
    msg.setDestination(50085U);
    msg.setDestinationEntity(218U);
    msg.p = 0.788530534259524;
    msg.i = 0.5844331185625563;
    msg.d = 0.620670023954169;
    msg.a = 0.30525463889891646;

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
    msg.setTimeStamp(0.49881118362314325);
    msg.setSource(62433U);
    msg.setSourceEntity(204U);
    msg.setDestination(17844U);
    msg.setDestinationEntity(86U);
    msg.op = 0U;

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
    msg.setTimeStamp(0.9693903075406537);
    msg.setSource(12163U);
    msg.setSourceEntity(89U);
    msg.setDestination(64923U);
    msg.setDestinationEntity(179U);
    msg.op = 190U;

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
    msg.setTimeStamp(0.02382922396744558);
    msg.setSource(11762U);
    msg.setSourceEntity(104U);
    msg.setDestination(25602U);
    msg.setDestinationEntity(211U);
    msg.op = 177U;

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
    msg.setTimeStamp(0.41600566579529474);
    msg.setSource(35278U);
    msg.setSourceEntity(47U);
    msg.setDestination(51177U);
    msg.setDestinationEntity(242U);
    msg.plan_ref = 862622886U;
    msg.id.assign("GRAKDKTHNNCXJHSZSEEXPJTCXGZJVGLYQKDCHNCORRNTPQ");
    msg.memento.assign("CRTPEKBZXZLECRFBCRFLPQVQOTWMQUHIKBSHODCFMMPFLVNYJKVPLGEVFIDXYMEQJLQYDGCSUGHZBMWTHMBPHTUGGHRCLONTNPJTEJODRTCMFWVYXBGYQPEZCJSIUMHXZPVFT");
    msg.timeout = 55430U;
    msg.lat = 0.02705319970008091;
    msg.lon = 0.8044912575043408;
    msg.z = 0.0945664082562826;
    msg.z_units = 178U;
    msg.speed = 0.00822465522312743;
    msg.speed_units = 178U;
    msg.roll = 0.5956405781004536;
    msg.pitch = 0.06849857007522842;
    msg.yaw = 0.4677788003611555;
    msg.custom.assign("PLVRUOMIEKDLPDHIFCXMATJZFWINPLNPOBJRHYQMAVRPOTSBAWCUDYQXTUVHIFRPIMOTRACGIZBRMIEAGDXJVHSULYZOWTDYRINXCPYAMEMAHYVNDVQCQTTZYGXONBQJHKLLWPXUVQSCCOBGGEWNXZSNXQWCHLJOMDBGGCVBHEEJZKESQYJLJXFUUGKDEK");

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
    msg.setTimeStamp(0.36629727233717024);
    msg.setSource(62637U);
    msg.setSourceEntity(28U);
    msg.setDestination(40522U);
    msg.setDestinationEntity(71U);
    msg.plan_ref = 3232398170U;
    msg.id.assign("CYSKJAFKWUHSQOEUQJACQASDMBZKFBZJHWEHICDGAXVCUXAQLAFNKBOXVEZHZIFTRCLYGRGUPWQJLJACBCPJZFWKIOVLZVJNGIDGEOXTWHYRPPKUMOTBJDBWUXQTAPWZVOSLHSD");
    msg.memento.assign("VRBIZUAFRKDVIKTMIDAOJMDFQGBZGENONPUAHBJOVSTNBQKOVJZKEFXXLVTPGARBOHGTFALCARFIYVCJXORMOWDSID");
    msg.timeout = 18884U;
    msg.lat = 0.6906771850434735;
    msg.lon = 0.4680570425406112;
    msg.z = 0.7402631328254248;
    msg.z_units = 134U;
    msg.speed = 0.8959990133177294;
    msg.speed_units = 48U;
    msg.roll = 0.9571610897473715;
    msg.pitch = 0.3029090264751563;
    msg.yaw = 0.9978732904141169;
    msg.custom.assign("XUHIBAKNJZZRWZEWVXTGYRVNACALHOZRVHTCNQDRUKSKDXOUGRUKNZPDLMAYHFSVFXKICIHBAOUXEVQBSNHEODFXQBTJIATSWBTUREHMJVZTYMTFZDBIMQPEUVYKCSPAUCMDNPQMJYVTQXGLPQSKWEBGICXHYADEQRNXBIGRWASOJMCSAFWTIGMKFVPOEYWLKDMBJQGIPPNFREHOUPLUDMGDCYCGJFLZOWQGPZFLSTLHLNRZSF");

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
    msg.setTimeStamp(0.13205806729768887);
    msg.setSource(58373U);
    msg.setSourceEntity(194U);
    msg.setDestination(65306U);
    msg.setDestinationEntity(158U);
    msg.plan_ref = 1165531696U;
    msg.id.assign("EUPEMLCIMCAYNGYVWUSLMOOSFDNUGJEKBNZTYMCTDXWIFCVETOQBEPXYQBFPPIAXJIRZOLUKJRMITSPYUGVAYQRNLYEKZRINHXRHVJRIVJGUXWBEQTTQYHHLOBVA");
    msg.memento.assign("ZWIKQQFOUAPJDUNOSLHDWBQZXRBGKXGZDTPCWOCIKVTKDDHNFYDTFULMUZAYAQQNKXICSODEPZCVAKOYWXHUBJJCCXTZPHVLIRUOXKMTGXTDUTVMESEHOBNAEGJAQCNVXNKJFLVNDLYXZSWYWBMSYYJERBXGGI");
    msg.timeout = 44660U;
    msg.lat = 0.5040400129110798;
    msg.lon = 0.784895160867316;
    msg.z = 0.8145930767017823;
    msg.z_units = 52U;
    msg.speed = 0.031580519970758836;
    msg.speed_units = 216U;
    msg.roll = 0.8281690880489135;
    msg.pitch = 0.9733680077546448;
    msg.yaw = 0.46207488707446365;
    msg.custom.assign("OZVLCMKRCKTKLFYTTGOABYPQSCWKJNIVJEZTMJBNGGTVWVLUJOLRFRMMZPZXHRQFZWOIPUTUBVBFWRXRUBDQEYUAFRTKZDWCYSISPICFJIQRRKSANKKXWGUEAAPIHLAALNOZMCKTOFHQXGNHIMBJDLSLHCAPUUWMNYHAPN");

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
    msg.setTimeStamp(0.9797062506995667);
    msg.setSource(10225U);
    msg.setSourceEntity(116U);
    msg.setDestination(51378U);
    msg.setDestinationEntity(60U);
    msg.plan_ref = 160480949U;
    msg.id.assign("NGEMZCTQORCYDMDVMRLWNFRVWVJTLYMHHJOQPOFOBEWHUZAOBWASMJJGJUBRUYQSRABJBCKXZLXAMOLKSWGKRUDINYTHEOEIOVRDZTQLPPAACGSKTAFVTMRVPFRZNDHPKSYKFBZACMGLXMVIDIELKGUQITIEH");
    msg.memento.assign("APQUNOGEBRWDG");
    msg.timeout = 41116U;
    msg.lat = 0.7884620866732633;
    msg.lon = 0.1004270625286211;
    msg.z = 0.15578861088181617;
    msg.z_units = 215U;
    msg.speed = 0.7695049118209605;
    msg.speed_units = 230U;
    msg.duration = 59664U;
    msg.radius = 0.1025626139923016;
    msg.flags = 58U;
    msg.custom.assign("AMGZHWBGSFCWFRWQTEXPYSPUZORHGILCVPAMYWFNZHLDTKNENXPLUTELOHOGIBHTYIUPKBLRIKVWVCOVMSQPPUDQNCFIGTBGMAERBTBPAKIJDXDLXLHJQTVUYXJUMKRZDGKOAXVDYIEZWYZUVY");

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
    msg.setTimeStamp(0.4362088409048397);
    msg.setSource(54137U);
    msg.setSourceEntity(12U);
    msg.setDestination(28390U);
    msg.setDestinationEntity(178U);
    msg.plan_ref = 3812538806U;
    msg.id.assign("CGNDPVWNHJRERMEGQSUEAIUXXWIMIHSMDOBZMBZIPPKUAIQREHTWBAEZTYSLHNWKXKZAGXAMRDGCBIUJXZPQYQYIKAKXFLCLBFYLQHUGJYJVEMNFYROWHUKKYXPPFYZXRWJBOISJDHQQEBMEMYDGDHJVCSCESUGVTENFGFOTMOZXIBSZBQKUNACWZSPKGPZTLLRKOOJVPVXVLOYQLDVTRFGALTTFIRSPSORQNVHFNBUDCCV");
    msg.memento.assign("YCBOVLGLVEGDVGMNPUYMBZNIRXTNIHXJMGJSZYFCJALILEOKMJHTUVHACEDWABSRVOKISSKVH");
    msg.timeout = 18636U;
    msg.lat = 0.9435961858894077;
    msg.lon = 0.14568336112964198;
    msg.z = 0.6801124312102664;
    msg.z_units = 67U;
    msg.speed = 0.5287980851077517;
    msg.speed_units = 74U;
    msg.duration = 38075U;
    msg.radius = 0.32120480232495974;
    msg.flags = 184U;
    msg.custom.assign("AFILFHRDJKCAFMBXZVTLDSUASKKVQFZEOVRNGIGMOIRUCGUDYKUBQMNXZEQJOSMSBZXXIBIOUTMFWWIIXWAXZPAWDMYRJKEEZVLPPQGVNHABJNWFFMUVHHXIFYGIQJRQOHWXOBNNCMOTTPSKAZB");

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
    msg.setTimeStamp(0.14980091175862043);
    msg.setSource(52201U);
    msg.setSourceEntity(13U);
    msg.setDestination(4172U);
    msg.setDestinationEntity(158U);
    msg.plan_ref = 2771696835U;
    msg.id.assign("IMJAOJXGSLQRAEWQEPQRLMGPWDFGHYHVHFRTHXXSSXPINUWZIRZISPYWEVNGDTIKXBJBUHOTYUBAYIUBCUXZJOVIDVRFYPLVQPZETOTOJYFDLAOZFRPOGZPHUQLEHWNSG");
    msg.memento.assign("HDICRMRBQUUESULTHMVWMHOQOHMOGSLZTHZCQZLFGTVNAJOGDNJJTXLIJYGMIAYYZMNQKXVSTYTYUXRUWRLHIBRZSONGBBVIGPXZMLJFIUHNQFPKPPQZAKITJNSWKKAUJEQAWRCBCGYBCKBUZHLXVRSEDTCOSVEXOJAVPKYBNFDFZVKOPONYSELZGHCPSCRGAWPJ");
    msg.timeout = 20299U;
    msg.lat = 0.9701739934499247;
    msg.lon = 0.05102526490389936;
    msg.z = 0.23302695921563665;
    msg.z_units = 0U;
    msg.speed = 0.10345214150779347;
    msg.speed_units = 169U;
    msg.duration = 43089U;
    msg.radius = 0.1587620329026559;
    msg.flags = 33U;
    msg.custom.assign("MGYOVXGVCRO");

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
    msg.setTimeStamp(0.8091664271233502);
    msg.setSource(13037U);
    msg.setSourceEntity(223U);
    msg.setDestination(60890U);
    msg.setDestinationEntity(144U);
    msg.plan_ref = 1359098053U;
    msg.id.assign("RZOAYOTWWTBTULFUKIQXXNEUENGSZSRXJKRDIMIQHLOTJKUATPKXQKBQLIIFDLYNSHBTZZOJOPVFUDBBCGLACWGQMDYAPWFNEGV");
    msg.memento.assign("FHTTTPYGYNJBTKKHPNBEJJACIEZBJOLCFGMQKXXYFSZZGZHCVTWXSORIJJQBMKCACWTDYIZFZALFSSJRSHUOAQMABXLEKIBVHOMLSTIYYEPBCWMQNABUDAYYXKAGQPKEQPUDPFTQWUIECODNBARSQE");
    msg.custom.assign("UDUEDMSTIIJINGGQOESUREFPAOWHLTCDPXFINPWQOQYVFKKLNGETYZYPYOMUFVBOHQWNDUSEHHULALIBCBORRWVRVXOBHSFPBHYRRDIWUWDQCLEJNWGEGQZVLXCFDGKTVFFTLXTPPIXSCBUWCDKJQIGIXMMAZCWKMUV");

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
    msg.setTimeStamp(0.10213173569773537);
    msg.setSource(8838U);
    msg.setSourceEntity(254U);
    msg.setDestination(4607U);
    msg.setDestinationEntity(102U);
    msg.plan_ref = 1944776965U;
    msg.id.assign("HPLGYZCLJXAUTRSWWQFVMSCSORPYCMEYYXMQCTUVWTRZOXMHCNJYFVBAGUVDVFRPTBEJVHSOJHWDNYYFYZUIKDKGDNHBNDPIIXQORAJCEAEUCJHZDWKYATGIAEARAVEOSVSPJLHHBRLXCHSQOBDKNUTOTZGUZXOWFMGMGJBQQPPOZLRFUGMEFNFAKWNKIABINCLXZUCSVKBPUETZWWIJBNZQPJXQQGKFILLMXMPIMGWRDT");
    msg.memento.assign("IXXMJFEVHQCDPXWOIFUFGOYNHPYEZITMIGDASBIUHSTOGZWCTJWOTXOZKJYFPVAFBOUPLWUQXQQLCKNKQALLIYCONRUMTMOTKBEHDXZPXVWRKMWCDCHCCMQSSRUDMANBYGEAFYQTTDOARXGJGVPHBHGHIRHZSEHITVKNYXEFNLUDLBDPGGZELKVCWMJBSPPBRMUOXSETIRSWNLGBREAKLAKIU");
    msg.custom.assign("HUULAFSCTRPARYLXPLJMWYR");

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
    msg.setTimeStamp(0.36495119550095245);
    msg.setSource(34462U);
    msg.setSourceEntity(145U);
    msg.setDestination(59412U);
    msg.setDestinationEntity(189U);
    msg.plan_ref = 3251511689U;
    msg.id.assign("MLUFTXIRPAEIERN");
    msg.memento.assign("LOIBKGXNAVFXXFRCEVTALAQPBZVQNXOFGKFSBTRSQMNHPJSSYWPYMMDCDDTZJISHNQXLXLGFZIJTHSWHMCWSSAJKEXNFWB");
    msg.custom.assign("ZNGYNXBARPFGAZCXBOLEFBUKGEHTRQBYRIUVDKDBQPMPEHLNQLXOLXDGVNSSPTDSDAKZUWSUTRFJGUBNEWKSVIYOZXNNTBYRUHNGFLCHZAVOQOQPSXYQFAMHJMILWGZ");

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
    msg.setTimeStamp(0.2387588447133301);
    msg.setSource(11188U);
    msg.setSourceEntity(177U);
    msg.setDestination(51888U);
    msg.setDestinationEntity(8U);
    msg.plan_ref = 1141946867U;
    msg.id.assign("JMTZVUZSQKPGORHPKEWNCDNDFGWXIGOHNKUTRWJHWPFMMXZCDKERGHIOCYVWNUIPDSBFLITKDQTNIIQVVOYXPANMULYU");
    msg.memento.assign("DARAWINOVWZJXVOHIKSCZGFAYPXEXVBSCFMHKCEWTTALBXTJAHDWFUHCPMKVPJDWOOSYNHJVMGAPOCOQYBGLRQIIYUFQNGKUKQVNTMFVYQLJSKHZWRLOLPVYZEPWERFTJERTKJLRVIBEBFUBQLMSSQHWKPCNDHNUSXLARCGXRVYJSYUNTMPNMXDGHZEGSDHF");
    msg.timeout = 13625U;
    msg.lat = 0.7270539052513828;
    msg.lon = 0.8713500371456852;
    msg.z = 0.804812114577499;
    msg.z_units = 7U;
    msg.duration = 19521U;
    msg.speed = 0.28378362838563176;
    msg.speed_units = 154U;
    msg.type = 219U;
    msg.radius = 0.1677974716110554;
    msg.length = 0.31782260775379334;
    msg.bearing = 0.0671537348429615;
    msg.direction = 143U;
    msg.custom.assign("LXFRMVOFIQRVUPKZRKMYSAPGZRHLVRCTNEVYJWIKIPERSEZUGQPAJZOOOFNDHMYSBIZTNTNNGJLWLXVDZSBUFESOKKAAJCSWANHEUQY");

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
    msg.setTimeStamp(0.018181003732691048);
    msg.setSource(21783U);
    msg.setSourceEntity(216U);
    msg.setDestination(41592U);
    msg.setDestinationEntity(186U);
    msg.plan_ref = 496269847U;
    msg.id.assign("FIKJVYBVJTRQANFEVGHRCLTXVAYPXWSDHBEKTQUIZIVOPUBAMVCUNWSNFBUKRXGTHGRWGMLATJEZULNTOGIOWUPAMRHKDAPZYJQOXHUFBJAFHQXDVPWWTLTEMYDHJORNOHLY");
    msg.memento.assign("QJOARXIKYWDWIISOHRMAEAVDNMCLYDRISDJLLYVGXHVCDMFOFRPBKGEQVUFIEHKXOUIUTNMNKMPTRFKGWRAEBFJTSFKGDQKVQCMQRNSVURUBRNTMYHBHIUZXBUHHTDVAPWECOEPAMZJXQASCUAJDTFGLTUBNXWZTLWXFVHZJFQYJYBJYLXAZNZYEZHIXUYNZXEKSQCIRVWBSOF");
    msg.timeout = 35317U;
    msg.lat = 0.9169433971789457;
    msg.lon = 0.6661104783903351;
    msg.z = 0.4902588402812128;
    msg.z_units = 193U;
    msg.duration = 64933U;
    msg.speed = 0.017804370208267417;
    msg.speed_units = 13U;
    msg.type = 90U;
    msg.radius = 0.636897435043504;
    msg.length = 0.8536638091185976;
    msg.bearing = 0.861536456338662;
    msg.direction = 103U;
    msg.custom.assign("RCSYVJMBGSDXIMIQEFLOBNNRNMIETHOVXCGUMWWCZVRGZCTQUMACWFUEQGCPXPFJWFSVBOKGINKJBZMRDZSZUVDBQBOATWFETJRRLTVCDLYGVZERXJBNQHDINQLMCUEFDNLPOXBWPVZLHAPNUEOHNFFYSYUCMRYPYIZRIMPFWSHVJTUKCALLO");

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
    msg.setTimeStamp(0.24999295546568012);
    msg.setSource(13113U);
    msg.setSourceEntity(215U);
    msg.setDestination(10796U);
    msg.setDestinationEntity(1U);
    msg.plan_ref = 1960393169U;
    msg.id.assign("IUOIWWVUWVAKLMGTMDBTKIFTEGVSSOHJXKYEIZJUPDQKQSYXEQKDZOZMVNYNLENLZIREYPTNYPRJDFAFOJCJFNSABLPBHQONOZZBDRKCHGOYHGZUWPTROTKRMNSJFDFZGJSCHAFDAAGX");
    msg.memento.assign("QMEZEGRHKQCUSUCRTCYXMSZMOORGETCGDZGOCGNBDGWCIATPIELAPXMSNVTKWAHMWHONZYUDEFTQLVYZGAPHJINYSRVSIPYGZUPYWFTGQOZAOZQCNHPGFZFVMRUXBKSKWYKNXVVCIKEVIEMBDQIORSNBAIXVWFARLHDXMAXRYQPFUMHJFCDZSQBKBHIUSBPBLXCLOFFXPKJOTYOLSAWAYRJNJPDWNTJLJQDNBEMDJW");
    msg.timeout = 55031U;
    msg.lat = 0.8491894404682478;
    msg.lon = 0.6220301971853852;
    msg.z = 0.028550176735184007;
    msg.z_units = 43U;
    msg.duration = 22868U;
    msg.speed = 0.41159096745860313;
    msg.speed_units = 83U;
    msg.type = 104U;
    msg.radius = 0.36218617952985177;
    msg.length = 0.7201252179788001;
    msg.bearing = 0.33903965211656306;
    msg.direction = 130U;
    msg.custom.assign("DBOCLNJFDDVJWFRKJOZNVWKNHRXWPOSLWTHBDMSSNMPTQIKWBVBPGFYFDENYEEGLBKJHX");

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
    msg.setTimeStamp(0.41132040949135584);
    msg.setSource(15255U);
    msg.setSourceEntity(200U);
    msg.setDestination(50573U);
    msg.setDestinationEntity(180U);
    msg.plan_ref = 3175334063U;
    msg.id.assign("TJAIVOEFUURQZIJSPQBLABDFTMMKYBWBFMBBUTNITDNHOKQXDLACJBDSSECNUSELZCCHUYMCENYAZRAKPREKS");
    msg.memento.assign("IIIOMYGLUXJENJLSROYTFGWBKTZVBMQEVDZKBTXKXZWLRXYQKRDTDCKNCDMOCFWCRXSQFQNHVJPMZLUXZGZNHZWQGTAJWUEVUMZGOINAPFFQLPCOLSEUTRPAKJXDCTOSZDLPTFHJAHNPGNKMVNYBLDS");
    msg.duration = 59642U;
    msg.custom.assign("CKIAGJOWBNXHWELLMSZJJQMHIYRDAVRQLJJKUDPZRIUOMDCSGMOSHHNNHXRUWYZRZTIATSRPMQFRFUGJUXVNOWFLDHQYNUHTIZNYVDXZCFTUQPVTGELSBGJDGBXWALWMIVYKIWPVVRMFPZDSMSJTYQNOHLJKEEIXYBCWLQKBKRSQCXDOPJ");

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
    msg.setTimeStamp(0.46845661676570005);
    msg.setSource(18619U);
    msg.setSourceEntity(33U);
    msg.setDestination(3826U);
    msg.setDestinationEntity(62U);
    msg.plan_ref = 2322538014U;
    msg.id.assign("SSKMARTFBMRVSP");
    msg.memento.assign("CRIXBNUEQJUFJJBGM");
    msg.duration = 9310U;
    msg.custom.assign("GXHNRBFDWDMDMYJTMIZFPQVJJHOBNZBWEKXXVLWSQLFAUYKMPACQAPDATQDNHXWKEZSUMBNOYLXWOQYJSREQCUVPRZKUGYTYMZTBDZJNGOIVOABSNQCBRMOOGLMBUWIHWGCDQYVHACFKCLSGPEEFRIMTTTUFWKJVUOPCJPFTAONIKDHMNEIHLZXSKTWSCRWOTQUQRILYRGLZCUJAXXEFVKHXFISNA");

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
    msg.setTimeStamp(0.4540320349856253);
    msg.setSource(12993U);
    msg.setSourceEntity(174U);
    msg.setDestination(52262U);
    msg.setDestinationEntity(115U);
    msg.plan_ref = 1593153210U;
    msg.id.assign("FYQEMSMJYFOGRXAKTHQDHKJXOQSVPYRNWVFRCWYNCMGWYGBPPJPGVFQNNEUGPZGRJESLSRZREVNBZOUZJPISRLATEDDFBWWZAHPLYSGWNOWVDBXBNDCKFFCUEECYDLOKEBMZEVHIUDEKSHAKIXHUXKIWPJTVOZQLQVP");
    msg.memento.assign("HWZUETYFLDZVKKKWOWTFGMEKEQBZUUKHHJWBQGMTISBRDTQBMGEJTEQUIMVYUWJPIJECXBICFXEHSGSDIBPNYAYADJCIUYODNB");
    msg.duration = 37853U;
    msg.custom.assign("PECEMKXZZFXNSAWVDCLZKUNFGSMRZRJXTDLUUUNOWAFBCCIPKLGGLLFUDDDYXORLFMMUPVHLTIYSCEJLCKQNNAFIYJQZRYVMOVXGXPUQNWJKJGVBFGHPCADLTDBIVKFJAOTPYHSBVYAZGWQBVYUQPMHCQAWMSIUWBDKPJWRHRJBSAEEVZYIERQWBCJIGRWEDCMOMASOWDSSBTPOTNYEUKRFQRSQHIPHGTHEGAXTKNOIY");

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
    msg.setTimeStamp(0.7692987004015363);
    msg.setSource(36642U);
    msg.setSourceEntity(103U);
    msg.setDestination(27950U);
    msg.setDestinationEntity(127U);
    msg.plan_ref = 3311106005U;
    msg.id.assign("IOGQVFVHDMEEMUZSRDCVFSSFJCDVBKGBXQUJWOXMNXTBHQAGOHGSITEPOLJHJNWQTXLIUPVCRKUCDRRBAFWLEKZGRHWDYNYBQREOQZHGXLWYYXKCUKZQINOITTKCAYOHFSWTZMSUCWAPLENVRZARGUKPYTOLLRILUZK");
    msg.memento.assign("JRMACDGOHMLKLXERVIHFZFWEJTXSRHPIMMUOJMOVEDQASIAU");
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.10808890869616561;
    tmp_msg_0.z_units = 20U;
    msg.control.set(tmp_msg_0);
    msg.duration = 3096U;
    msg.custom.assign("VVTZTFEVVQOLMIPGICCNVFEWGVJGULXJDXXFERNDQUPIUEBHGTMAND");

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
    msg.setTimeStamp(0.3054779230772322);
    msg.setSource(13196U);
    msg.setSourceEntity(93U);
    msg.setDestination(19822U);
    msg.setDestinationEntity(249U);
    msg.plan_ref = 4024970874U;
    msg.id.assign("IIGHXBOLGCZZDWRDRMLMIUSKKWVYNFFAZLHLQGGUFXIGCJSBLNLQORFIOGRCQFFNDCXQHYVDGLBPPXEPTTDZJXNCHHKQWPAZNOAIWJORHVPXESIYTWLQUUKNLNYPJEIEWWWMLOYKZBZZNWBTSSRWRTVIATMZMTCKFYBQHJMJOUAERCAJJTUEJEEXHDZURAHYNBIGRPUQMUVVYPSXVDGOSFDUXBMQEGHYXVCN");
    msg.memento.assign("MSDCTRDHURKMIXROEZLKNOJOCWEFNHGGVDRAZJQHOGPQQRPLVJPJSGFLBZBLDYUSWBSEBBZOVRIXXZHACDCRDNOTRUNXWLPYIVYJCMWCTEGDITNYSPQVJVGHLUEYYYOCWSICJVKPPQAKTFLTEIHFTSAZMXWRBMFHXPNAVVPKXDAZLIEAQQMLKWGOVMUFPHXNZIZQJKNOIJCULSAQFY");
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.7077949993079846;
    msg.control.set(tmp_msg_0);
    msg.duration = 59923U;
    msg.custom.assign("WFYCBEGFOEUXGRJMBQTXYTYKRBRJSCIBMGEJZJHCMIJFSEPQUWDQZPMVTRSAGAZARBAUFVHSUXTQDSVJUVQIOFHSRNDPVCDQMJLVYPPZTAHCBZYMAYWOLGJWNUSCKFYFXIRMNQOZCFDWIHXEQTOFANKRDLLSNBYDINXCDGMXQPBEEKLOVRJOLCWIYMWAXZWVAWPSIUHNOKHGPKJKNLHDTKISVHMFZELNIXTNUKDQLYGKWURPECHBOOXBV");

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
    msg.setTimeStamp(0.8900991654582457);
    msg.setSource(50212U);
    msg.setSourceEntity(224U);
    msg.setDestination(23908U);
    msg.setDestinationEntity(90U);
    msg.plan_ref = 69492472U;
    msg.id.assign("ZWFAZDPABKKSFCZOBPCUWCRLLYTUZYEQYEBDFLTQOEITAUVDHIYLSGNOJUYUPJWNBVBRYDADJQHSWDFHRKLTZHXSQYVBNPOSQSHYNFAJN");
    msg.memento.assign("RMSWEMKSRKZNASVWHSWTOCDEFAGNYKULNUREOLQDFKPAIMIAAGUTMZYUEBUBIPZHKQODFSEWNGCXQVITZNPMUMRXACBOASSHTYCGQASNRMVIFUYRKRTIPJPWLHFIKBZGHYGWCJDBTALPYLBD");
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.9225612447162613;
    tmp_msg_0.z_units = 227U;
    msg.control.set(tmp_msg_0);
    msg.duration = 8175U;
    msg.custom.assign("RCGCTVSCQSFYEWFKAOWMLWKUOVBVOAQZDXRWTCAMFAPLDSHHROIXOBGQCYCIMUDEPUCEGNQTUNGHHXXZRTGEJTCQESAHBCBJBMTPPUDLYFINODIMMUNHBFMFIHDKKODSUVXKBCNOOGUEJEIJJWVQXRMMPHDEKJZPVFGBGDX");

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
    msg.setTimeStamp(0.15411166179298874);
    msg.setSource(40991U);
    msg.setSourceEntity(184U);
    msg.setDestination(47517U);
    msg.setDestinationEntity(60U);
    msg.plan_ref = 123105618U;
    msg.id.assign("XEUQBKPIMRHGURZNVXHSIDSMPKVDUYZFTKYHEWMNYUCPNNNVEBERQLALYRJOLWGTUDCGZVCOKOCUTLRSOAGWMMYLUGAFQHXDQOJBPKJRAZXVHVPENNEDPEXYECWZHNWXJTOFWAFATDUFKHOILFFJCSAVGBBSNQWQRHTOQUVLIOVSAIGHQTYZVBKPWZFAPLRHAYTLMPQCMDXKIDGKRWBJXJRNSB");
    msg.memento.assign("CHGYZJAZWSQVNIMZXCZBYPUFNUHQIDHGBEQBYOIXRAQHVMXHOKMCFGVHGNZVXGETPDBFIRJIHOUSPC");
    msg.timeout = 26565U;
    msg.lat = 0.5088243626878137;
    msg.lon = 0.0833568878805252;
    msg.z = 0.7276693244752533;
    msg.z_units = 120U;
    msg.speed = 0.37908947010323757;
    msg.speed_units = 220U;
    msg.bearing = 0.6708637492119864;
    msg.cross_angle = 0.3224434271958565;
    msg.width = 0.7668437639346128;
    msg.length = 0.9673757662135782;
    msg.hstep = 0.3614899126357849;
    msg.coff = 78U;
    msg.alternation = 108U;
    msg.flags = 248U;
    msg.custom.assign("KANZKRWEPDCKBRYBRMEVHTARZSISRUBEFVTKTDPRNXOFWCOPZPMSWAYXXUACFHTZPLLQTIEJTYGSOZJHWEKOIUQZKICMYGIZUOHXSNSDLASOLBRYNILTCMCRYVFIHXMVDNUQWNOBVHLGCLVZYDPGKOBGDZVLPXHMXJLFTEKJSCDARUKOBMFIJSIQPFYZUXMQAJB");

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
    msg.setTimeStamp(0.23701360584452502);
    msg.setSource(1130U);
    msg.setSourceEntity(36U);
    msg.setDestination(26273U);
    msg.setDestinationEntity(5U);
    msg.plan_ref = 3302639177U;
    msg.id.assign("XBEAXDRXCZTWIMSXYWJFUPIFSKCQZEUEBSGWFWJFWESQVACLHABHINHQDVSROZNGNIBR");
    msg.memento.assign("HMTCHBCPBLJOKZFORUKVCVDWEOVXXMYPRNSEXOYOYUKLXQIEXWJQRLDTZLDWCWHLFJCNSJPMYHSGIILOYPDRSGHXOYQFHGPXNLJHUGVSGAURTMRZZSMWCRDQGDGTRTIAUIQZBUOAVTUCWIWVYEBBBEEAYAFTODCLFQTEMQZNMTNKCEATWSZPUIOVNPBZHMJHYQBJJQPKFAZVQWSKJ");
    msg.timeout = 42733U;
    msg.lat = 0.8289495655478686;
    msg.lon = 0.6388396337753806;
    msg.z = 0.09391073198639244;
    msg.z_units = 47U;
    msg.speed = 0.8277563734860102;
    msg.speed_units = 177U;
    msg.bearing = 0.3064702652046384;
    msg.cross_angle = 0.401441280080131;
    msg.width = 0.43174676492090247;
    msg.length = 0.605756135213419;
    msg.hstep = 0.4354106135930663;
    msg.coff = 108U;
    msg.alternation = 34U;
    msg.flags = 193U;
    msg.custom.assign("HCQLDJPVMECUV");

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
    msg.setTimeStamp(0.4414261748588574);
    msg.setSource(43196U);
    msg.setSourceEntity(237U);
    msg.setDestination(61065U);
    msg.setDestinationEntity(235U);
    msg.plan_ref = 1005278580U;
    msg.id.assign("VGNUAGDBKYXWKAKGUSRMZFMKHWPTDDYAHKKHPOQCMCNQUJVORBYUAQSDEZZADHCACLIEFUITAVVETPZISTTBJVPLPRXILCVTOXAEJXDPEBGTQJEULTQSXXUZVOUQTMJMLZ");
    msg.memento.assign("BXYXTHDTUSJJDCQ");
    msg.timeout = 51546U;
    msg.lat = 0.6411008689073721;
    msg.lon = 0.4500741377762635;
    msg.z = 0.7420291391240589;
    msg.z_units = 12U;
    msg.speed = 0.9444825604152334;
    msg.speed_units = 67U;
    msg.bearing = 0.06619335254623815;
    msg.cross_angle = 0.41900353270909096;
    msg.width = 0.2168054688990546;
    msg.length = 0.07393878805621334;
    msg.hstep = 0.7101016627191181;
    msg.coff = 85U;
    msg.alternation = 0U;
    msg.flags = 19U;
    msg.custom.assign("GUSMUPINGHQXUURPHQWH");

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
    msg.setTimeStamp(0.05361236464122876);
    msg.setSource(7353U);
    msg.setSourceEntity(9U);
    msg.setDestination(49017U);
    msg.setDestinationEntity(161U);
    msg.plan_ref = 1930785298U;
    msg.id.assign("YXLPREXDZTLDPFRZGITYWXTARHFHVQXTYARMHBJKWQFPNQKXMVRVNBTCZWFSCEJFLMXKRLOQIWQNGSKYNUAJDXEHBIDTHNEFUOPSIWGSDNYQWUHSSAZEAWFQBNPSSIMDBPGTC");
    msg.memento.assign("OATITGDQMUJQQSCIKOPKJSXFXJSHUWUYEAKTRLXGMARUJCNYFMSMULEWGMTZJKQFZNOGK");
    msg.timeout = 36608U;
    msg.lat = 0.253448047963464;
    msg.lon = 0.3987067483070509;
    msg.z = 0.4850617745223831;
    msg.z_units = 131U;
    msg.speed = 0.04574083927871597;
    msg.speed_units = 177U;
    msg.custom.assign("TWNMWDOPGSHAOLYYOLYXUHMYEWWVQEPEFDDAKPKDLIUERBPICUXHMQBKILTUZTNEKLCDWOBQPPMRYCCWLBPATUXSRMRVFYZERCNBWFFRNENAWMDZBLQUQAPJOTKVQGIGUHNJSHGXQKYQJKNSZCPQXVRRECAZHZNGXEK");

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
    msg.setTimeStamp(0.9056597030325021);
    msg.setSource(31877U);
    msg.setSourceEntity(63U);
    msg.setDestination(15951U);
    msg.setDestinationEntity(253U);
    msg.plan_ref = 1908324279U;
    msg.id.assign("WXDMNHLIXPWSJDGIGRTBYRJDOECRYQHRLBIPZUWLQRQPOSEGHSPTQTIAZBKWWTGAWWDMCBTTNZVDOUHSOSUMLYFSKRCVDEHQHTBMYRQJUTQMANSFBIXPWMKPZAJPKUXBVCELLQXKVYYEFUGUAYNECLXVKGVEQCHFIQSFZDTDGVXOPCKFZLPZNZAEVTVFXYICYZRVBHFJUOWPRISKUJALJDGNECNGJJAFOICKBOMOOD");
    msg.memento.assign("UYDFHTCELFZDBOCVYHHEPTTVXDSRZERJJGCDXXTKFNUJWEOGWHVSSRECQQZGWYQYEZMLMOIAGPXDZYEJYWRFTGKFLMFIDCQNXANXQFANMJPLFXRUVPNIZTZILNQOKOHVUQRHUGWSKAULPSGVARBQWMTJJBIEITXMHBRWOOHSYBWSGVCVAAUDXH");
    msg.timeout = 47731U;
    msg.lat = 0.8655095970926135;
    msg.lon = 0.3905173260847904;
    msg.z = 0.8587988407100147;
    msg.z_units = 229U;
    msg.speed = 0.0007312143891924361;
    msg.speed_units = 79U;
    msg.custom.assign("WSHDNVSETWAMAPMOTGVPZCRWONBCFKRBPECBPRVQLYRTTJOAKLYRNJPHQGJNCXGHZAAHJCOMUTQHYKJIVMTBWNSPUBGFVLRFOKVYSDIDXJOMGUTCNUYWUZYMETTIPHDCOBBJQOBBHIHAEWYKZHEUKIFNSSCJMHQDGGIQIPXESXRZQMOUEZLZIVA");

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
    msg.setTimeStamp(0.8412988402333624);
    msg.setSource(44352U);
    msg.setSourceEntity(151U);
    msg.setDestination(32581U);
    msg.setDestinationEntity(235U);
    msg.plan_ref = 2109992730U;
    msg.id.assign("QKPXZDFBGNRDUVZSYCLHFVDYMQMPEYBFUBYNAKTDHNRVWABYVBIWWZRHXGSYJHJDPIMZFECCMLVASNTICARSVTURRONGGCQJABWOIXVGBNXQEAKUHUOOGBULHIWWPFMAOPBTRZTMQDKWGZPXCJSFGCQUXIAD");
    msg.memento.assign("ZBPAKVTLUEKYCOTURROTHLFHVWWWFPHYXDDKGJYGRHFDAQSNMHZXEBNNMJFSGXLXKCGDAEIOJAOFPVAISDUQFPHWNWOVWQX");
    msg.timeout = 22068U;
    msg.lat = 0.46495352085042163;
    msg.lon = 0.4410108466834859;
    msg.z = 0.3307063339800347;
    msg.z_units = 210U;
    msg.speed = 0.6167412823569072;
    msg.speed_units = 213U;
    msg.custom.assign("YREXMIEEYQOBHNSLBLUTVHRZFBIEXKFXDJZHCAIVOJIVVLSZZOACQKMLDMWJTGBOTMSIYGNEAXPJRRPCJGNRBKDHGDIHPDGQCKLTKYXAZUSYNWIBHQUMPZWFGFLKIOHJRPFFTAHBUCMFOWWXROMLSIABOQEYFYWQMPTNVUKQEQDSF");

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
    msg.setTimeStamp(0.831209667803251);
    msg.setSource(63366U);
    msg.setSourceEntity(103U);
    msg.setDestination(32988U);
    msg.setDestinationEntity(84U);
    msg.x = 0.7398839192506679;
    msg.y = 0.2855559237235029;
    msg.z = 0.07480799901712454;

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
    msg.setTimeStamp(0.3553857089289474);
    msg.setSource(55905U);
    msg.setSourceEntity(99U);
    msg.setDestination(63742U);
    msg.setDestinationEntity(87U);
    msg.x = 0.13509797423545866;
    msg.y = 0.3509310928446925;
    msg.z = 0.999791017258315;

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
    msg.setTimeStamp(0.6861342599991045);
    msg.setSource(44418U);
    msg.setSourceEntity(127U);
    msg.setDestination(21272U);
    msg.setDestinationEntity(85U);
    msg.x = 0.36851673718000044;
    msg.y = 0.5292465921642387;
    msg.z = 0.21682848489822548;

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
    msg.setTimeStamp(0.398918258187123);
    msg.setSource(2561U);
    msg.setSourceEntity(52U);
    msg.setDestination(15747U);
    msg.setDestinationEntity(180U);
    msg.plan_ref = 2083218638U;
    msg.id.assign("CQZWDITRKEXZETPWJUCVRCZYYPSNPLPWXHBUJDDUUCOPGXQFCCJTYAFQHTIHEEHZXVKQK");
    msg.memento.assign("BMCFVSPLJYDFQOBLDGWKQVAMGKAMZNJGUSFCCODWFRWOOVSTEOHMCUZXYUDDKPZJMHXQMCYXVABFNKUNJLSEABYRUCWNXQEHTSQEQRPJRKRQVBSRIBJKXTKXGAWCASEIWIXBPZDUOLMZZSGOLUTEJLLZPAHAXVQLLPWGIHNYTZJTEIVXACPDSRWWBYNRKNPIIYHFYFGFYDSXMPGGOZMBIHHFHKIMDYKL");
    msg.timeout = 64242U;
    msg.lat = 0.4802731071114945;
    msg.lon = 0.4476903448463174;
    msg.z = 0.49648247567452586;
    msg.z_units = 47U;
    msg.amplitude = 0.09277385808067162;
    msg.pitch = 0.4931554707154203;
    msg.speed = 0.4012722171029104;
    msg.speed_units = 134U;
    msg.custom.assign("CNQLTMBUIAGHCWSFYNOZHITNJNVRPWOZNEPULBNFCKXUSYIAQKASDKOVRGFZVJPZKXOFUDYRTZUVJPBODKAFOCIIDFUQQKWYUMC");

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
    msg.setTimeStamp(0.700843142494699);
    msg.setSource(13546U);
    msg.setSourceEntity(60U);
    msg.setDestination(60632U);
    msg.setDestinationEntity(125U);
    msg.plan_ref = 3208839938U;
    msg.id.assign("RTDBGVILKDSEXEBKYMTOBNBUBOKTYCKYQHQKALGEWLHVFVGIBIRJAGZYKSZGSTLCJQFMSPHKSZEIEZZLOITEVUOOUXALRWRYDVZDKZFLQTFHGQPHUNBWCNINTYTMGIRGMQUOEPICXVAEFCTLBIONTSQUMHKJESAVJCWNDFHQFCPIXLBJDAUHXDHKRJJWXYNAAWWDYPNPNOODFROFRXFML");
    msg.memento.assign("AQPZMWSSRGUJRRSEJDIEVYJIEZKFLHTEQIEBCOICLKJDPEWGWRXIGVXWFFKNYMKHCHHOPPGCSGKGABHQXTUWEQOOMBBIHUTLUEFMDCRANPFQFVDZSRPDXLBWYASGSTHPBXWXDAHMADFCUYTYPTOZLZJQYQESDSFVAWVMGZYMUMJBTXJCLMOVVOJUVCDITNLZGYCMOXKKYJGQZWNEIHALJTRYNLONRVCQHD");
    msg.timeout = 10577U;
    msg.lat = 0.6626393828124089;
    msg.lon = 0.3985561281198049;
    msg.z = 0.9265104762096307;
    msg.z_units = 166U;
    msg.amplitude = 0.9702771795954777;
    msg.pitch = 0.6533122925790559;
    msg.speed = 0.9547919491593712;
    msg.speed_units = 85U;
    msg.custom.assign("DRUMFXPPNXYNFZJWOPYYBJFVRVIKCUKGCLBPTVLJDPIJQWZSBWLAHUNSEJZVKDMILSLAXIXIWAHODMNXNVOPMQHMSDGZAZPDTKRBXBWAXG");

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
    msg.setTimeStamp(0.4861203377911286);
    msg.setSource(47689U);
    msg.setSourceEntity(72U);
    msg.setDestination(12138U);
    msg.setDestinationEntity(167U);
    msg.plan_ref = 750797561U;
    msg.id.assign("VJQIZCQOBCABYXYFVYHKDPPVIPDUKDFOBTRMDDJUEUXJSJNTFSEQIPTBFBLAZHZW");
    msg.memento.assign("YRGJQWKTAMBXSJNNOIFLVQJCPNGKETZJKBGQHCBFQVYUXCSMPCAEZJYCA");
    msg.timeout = 54029U;
    msg.lat = 0.1450063628839693;
    msg.lon = 0.545757240643996;
    msg.z = 0.3700436099145812;
    msg.z_units = 24U;
    msg.amplitude = 0.2003181752995301;
    msg.pitch = 0.8017427991181342;
    msg.speed = 0.8803990961726155;
    msg.speed_units = 131U;
    msg.custom.assign("SADRUZLDBDBTUDVBKRPDSXA");

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
    msg.setTimeStamp(0.8534176704052001);
    msg.setSource(60307U);
    msg.setSourceEntity(147U);
    msg.setDestination(63400U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.7077068756437881);
    msg.setSource(61711U);
    msg.setSourceEntity(236U);
    msg.setDestination(36908U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.8298533974270835);
    msg.setSource(37976U);
    msg.setSourceEntity(106U);
    msg.setDestination(34337U);
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
    msg.setTimeStamp(0.18269175743125055);
    msg.setSource(16424U);
    msg.setSourceEntity(243U);
    msg.setDestination(40244U);
    msg.setDestinationEntity(137U);
    msg.plan_ref = 2912954345U;
    msg.id.assign("OAZESFBTSBFQGAUXK");
    msg.memento.assign("ESWURZTIRUNTZFOUDWPTHRPEHIYQBKKOXSNTIZNTVXMXOBAQHFRLVDBBERPPVLKMZILPZWDAYRESGDJBQLOIVFWRLMNKJHVJUPQCVQDMWSGHMZBINQJWITXTSKEGKCJKXNHOMC");
    msg.lat = 0.6931692102309976;
    msg.lon = 0.3207572194945201;
    msg.z = 0.5445321647412652;
    msg.z_units = 232U;
    msg.radius = 0.6588740334024594;
    msg.duration = 29541U;
    msg.speed = 0.8375106703946333;
    msg.speed_units = 62U;
    msg.custom.assign("BPWWENSKYB");

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
    msg.setTimeStamp(0.25381411690705136);
    msg.setSource(55951U);
    msg.setSourceEntity(60U);
    msg.setDestination(15320U);
    msg.setDestinationEntity(253U);
    msg.plan_ref = 1852281406U;
    msg.id.assign("GXUHQAHJAPBQSTVSZOOKWDAIPVHCGYJLRFYAUQNFPEJOXHNTLRGEGECXKHGWWONDFNYGSJNTAPFNLWWXIEIBBALAUSVRPCQTBZRORWIOWLCQKEXVSKMNUNDMBUTAEDLCOAHNGKGZUIIQQCUYSPJZYJDYLITMSXDMRJCWBFXPJOEMHMMZDCWQPGDKXFQLIVURJELAVMYPBIQKMZGNSXCUFJVFYPZCIWZFMBFHKXYLOTDZROHTVRDKB");
    msg.memento.assign("GSCUXNRLVFPZQ");
    msg.lat = 0.508728070215216;
    msg.lon = 0.9517275298904908;
    msg.z = 0.3160665293442625;
    msg.z_units = 56U;
    msg.radius = 0.10729732886487531;
    msg.duration = 29534U;
    msg.speed = 0.179468380856025;
    msg.speed_units = 253U;
    msg.custom.assign("SVIFYGRKMVYMBGCYJUXCLFHSOGAUEWQJISEMLQLNGQKPBPVKXDNWMALCCOSIAQWBYHLLGWBVUFINDGSWGTRTITPDKMJQDRQBRJXUXANDBOGKHEHEITYVXWTDALTWZMJNFQLNPGVSYCJZMSKVREDPUXBZNEMCKYZRPCPAVMPCXZPSLXFYZLRJWUEZFTFKWIJDZAUFMHUODTSFEOYHRNKGDHURTOZFZQAAROJBTIBSNPQHI");

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
    msg.setTimeStamp(0.9034429878740405);
    msg.setSource(56254U);
    msg.setSourceEntity(118U);
    msg.setDestination(57202U);
    msg.setDestinationEntity(91U);
    msg.plan_ref = 2583098917U;
    msg.id.assign("WGGOLKLHNRYSVVZIWFCXNROLREUTYIXHWZFUAYWNMDEYISJNADNTDSKUGVOCFPKSELZBIVJEACWBCFESWEUYGDDQRQOGHHHWA");
    msg.memento.assign("DWYJPYLTUSCJKDTZGHJGIQHWTIRTORVUOB");
    msg.lat = 0.5705162915529237;
    msg.lon = 0.7426822886502126;
    msg.z = 0.844163066400238;
    msg.z_units = 228U;
    msg.radius = 0.5023855035091468;
    msg.duration = 32182U;
    msg.speed = 0.8196448297162332;
    msg.speed_units = 114U;
    msg.custom.assign("ISXJPIKDMTGHFURGHOYORRWVTQWHUJWEBDZUPPSQSBRAXAJYRZWKVJGSFVLITXQUPJFEECOZUAPQFCOMVLCUJRQOKRHILPJPLMGWZOLFDKXCYPFSQGIBVDGRIGNMIHBXXEUBNNNFXDELDMTXMKMZLFOYVNOLVSEJACUSGDNTPVHHDYHEYWZIS");

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
    msg.setTimeStamp(0.5023565209564926);
    msg.setSource(5277U);
    msg.setSourceEntity(155U);
    msg.setDestination(8553U);
    msg.setDestinationEntity(86U);
    msg.plan_ref = 4191323917U;
    msg.id.assign("COXIMACZUSBFLIBDFYYGRULTLYOHOQWSYHTKTPVGYAYRAWHPBXLIHTJFDDKXGXQEZTIBRCUPPORUBOIKPRVCEQDLDAQOZCGSURJBDOMIBZVWWRSQUIVJKMJJATKGZVESCAEHWTQJWTOXILPDEKOQXKBLKTCZFNARWNASZHGWNSGWEJNJBFRXJVUHZNDAHLPCIMOLC");
    msg.memento.assign("TQHHODPBCRWFPYMLZCPLVTFLCNYVSQREVDKAOUEORDYIQFYHECPRKHBAQUQTFJIVTQKGVSWNMXCUQADLYFXEMKO");
    msg.timeout = 10799U;
    msg.flags = 216U;
    msg.lat = 0.49803332605463946;
    msg.lon = 0.13074867563851678;
    msg.start_z = 0.540993947268791;
    msg.start_z_units = 153U;
    msg.end_z = 0.4703965171277038;
    msg.end_z_units = 199U;
    msg.radius = 0.11706346571981296;
    msg.speed = 0.46881128602957345;
    msg.speed_units = 226U;
    msg.custom.assign("PDIQZHPIOYVJPMYAGECKIZHDGPJVPMRSEXMRFGPMWAHTWOWVWCOKAAYPSEOWCSNHUSGUXHKNCQLUBIPCFRQLKRLLJRDEMIFFXBQWLXQVYGNZTQTJJTODODLCDJZKUJQTXBZEKVSUCBENSQNNBNAYGZLFKVNMVAAHIHVTLZRLYIA");

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
    msg.setTimeStamp(0.2750909169643114);
    msg.setSource(9623U);
    msg.setSourceEntity(49U);
    msg.setDestination(31611U);
    msg.setDestinationEntity(69U);
    msg.plan_ref = 1990759901U;
    msg.id.assign("LHGNYNOEAPQQNXXUKGSCZWZGBXTIZSFSHJGEFYAQPQQCIICXWCFKZQLJALDVDWROEWVQWBJMLNTBSPSUPYTNSAJVHISIGZNKPUHVZWUZUNLFSVUIGBBDFOXY");
    msg.memento.assign("JOASMVGLFVAQXKYDQWISRJXPRQBYUNSVZEWHTKDPMZUTEFNOPCHIEMFFFKTYEBXCMGHLIZCBMDOGAWUBRWTWANQXCSQJRPAJTBKXRGRGHMYATDNABVDDYVKDZHWKLSGLHTNQDMXINTYIVYEEGUOPQLOUGVVDNOD");
    msg.timeout = 3222U;
    msg.flags = 12U;
    msg.lat = 0.9101769789702401;
    msg.lon = 0.10623688226202754;
    msg.start_z = 0.2646664349687522;
    msg.start_z_units = 151U;
    msg.end_z = 0.500631521615062;
    msg.end_z_units = 4U;
    msg.radius = 0.11081484139418629;
    msg.speed = 0.014010526401769252;
    msg.speed_units = 105U;
    msg.custom.assign("XNNVYQIKSCPRPLHCIOEBWJVUUKREBENVUKZJMFTYXHILWUORGEIYMKYWHSYRMXUBDVAAIRGWSZLIFCSNCKWHCHGPELLCLVPYGASQBXZBZJJODLOMJTDWEFNJYNNOMQADJXG");

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
    msg.setTimeStamp(0.46495663458361125);
    msg.setSource(16277U);
    msg.setSourceEntity(168U);
    msg.setDestination(19330U);
    msg.setDestinationEntity(224U);
    msg.plan_ref = 3696831933U;
    msg.id.assign("ZFIPWHEMZBYFUHFTRLAMJTFRAUQEKTGMJBIOPJQMQHSLOWCYCPOSWDFGPRCMWEVXDGKOYCGIPNVUEIXSFQTPBXHNOJELGRNBJJPYPQEGXSLKJVYWAZGEMOUVPI");
    msg.memento.assign("YFXHLTSODQJQFEMALBWUYPUZILPCEJLIWJRUZNWZSDPTWTQHBPHASIOCKBNVRWUFMPSJMMGMVLKYIEKVGLKRTQMVEGAXBDHTRPUPYBZBGCDAKNOXPYYOOBQSTJZAI");
    msg.timeout = 42359U;
    msg.flags = 27U;
    msg.lat = 0.12651276519170407;
    msg.lon = 0.5830411519445651;
    msg.start_z = 0.09715918084833308;
    msg.start_z_units = 125U;
    msg.end_z = 0.5922769037883071;
    msg.end_z_units = 9U;
    msg.radius = 0.989071005176838;
    msg.speed = 0.4182584869253968;
    msg.speed_units = 77U;
    msg.custom.assign("EHIDVJYVKXRDFFJSNGARIFJUZYAORFZQQWKMTEMHYAKBBQSRRJEPXQSCOHGVISVCGQRLJVOTWGJHLGJOAXNWNUBYRLLKBLOTRZMPTTKPFCPUDWMKAFFSDLNDBNVOYNECZAHLUGZOHKIISXULYCAQMNURXVWCDZGFPEMWDRSOTYKNOPBOZZQPNVJXIFGXHJIPDPZBBEGASUQCQXBTYESIT");

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
    msg.setTimeStamp(0.21531704642629534);
    msg.setSource(32068U);
    msg.setSourceEntity(150U);
    msg.setDestination(51093U);
    msg.setDestinationEntity(64U);
    msg.plan_ref = 1669605809U;
    msg.id.assign("FEWNGANFZDUEUCWLGXDTBIFQGIV");
    msg.memento.assign("JCXDZBRCXLMDTOGJUUNVTZNIZMQGSCPGOCXEAXPFXQYGMPMHIXOLPWSQKDHESFYVTZLEOUYALZKTAZIKRIGYNWJFNNJHNHUWREMEKBXGZEZJBMFOF");
    msg.timeout = 38581U;
    msg.lat = 0.17699698254268514;
    msg.lon = 0.8389339474909506;
    msg.z = 0.6127353259092497;
    msg.z_units = 24U;
    msg.speed = 0.3377734780824275;
    msg.speed_units = 202U;
    msg.custom.assign("LMHNGLXOBEYFOTDRSXFHILFTHERXGIDKOBVDDWYIYDEJHJTFLVHMCYVRCLQYKSNHIBTWUWSACNEXXUTSNTPOHIYPXPZKJWZCOZEJQEEZAALRJRROEKACPSWKEABPXSOBGGGURRPJOAZBKTUHEYMWMYDPNUTPUIUNUGU");

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
    msg.setTimeStamp(0.4996055324112354);
    msg.setSource(7539U);
    msg.setSourceEntity(147U);
    msg.setDestination(21970U);
    msg.setDestinationEntity(101U);
    msg.plan_ref = 325874298U;
    msg.id.assign("NBFUCHDFVIOHOLFQOMGNIPCURDFAPYHQGZJWNWSH");
    msg.memento.assign("KKKJBESJUXPJAUBYPTLBGLORHEBKUOPEFJCWFSPPHQUYFCADTJXKJZKMRHXCHUGARNSDYLIUOWYXMOTTHTBJAOEMDSCYAICNYJCVUPKDAEWOQPHKMRMHGZWUWI");
    msg.timeout = 30665U;
    msg.lat = 0.7982543125221003;
    msg.lon = 0.28013038781359456;
    msg.z = 0.07526670495379906;
    msg.z_units = 17U;
    msg.speed = 0.9138437950485452;
    msg.speed_units = 251U;
    msg.custom.assign("MECRWAGVYDYCLTJSSDBURAEQJVZZPCIYYGTYTOVZXRIJJUNFLMHPBIHEKPRIFFWZTKPABSODTGAKYTYKVEFVUNCZBLVNXWQPSCOWEGNHEJQZCMMZKUSLXUDFBMBVEHNCUWWDFQRNIRIAOSXDVDMGJFVBIGYXDHAROXOPLNPUFJZLHKYHCTQENZXMETRDAPQWPYLMGWSLQEUIAMTLNBQHDNIMSKXWOHLRXJOFXWKGUVOCTJRKIAGQHB");

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
    msg.setTimeStamp(0.12014038956306816);
    msg.setSource(20639U);
    msg.setSourceEntity(79U);
    msg.setDestination(36079U);
    msg.setDestinationEntity(99U);
    msg.plan_ref = 681466737U;
    msg.id.assign("IAMHSUYTEMLVWFDYMECBYQSTKBSGWXZNSJRXLUAWJDOKHFFCTLHDEBDBEIVHOQPWPLCDMAMJSGNEGFZMQVIVCMPWUVNYBEQNNZFZPVWAWCJIJBKGWACROHIVERIZEIAMMHGASQTOGHFEUWRDNLVPSCBXDOQCZTCXYEOQVXRIJDMYWXONPGDFTJRXNALGOKZXKUXJCVBUQSYHUTBUFHFSNRIXZYGLNKJOQOAAZZPQTPYDIRKTK");
    msg.memento.assign("RPJVRKRCBBGFLBGYRDWTASJIFTXHMKLPMKVYGCOG");
    msg.timeout = 31847U;
    msg.lat = 0.6468392999938635;
    msg.lon = 0.5738436106813046;
    msg.z = 0.16046209835242942;
    msg.z_units = 58U;
    msg.speed = 0.7239016296312787;
    msg.speed_units = 41U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.4493366329099916;
    tmp_msg_0.y = 0.013251178969469146;
    tmp_msg_0.z = 0.9574003212334248;
    tmp_msg_0.t = 0.9153825567419471;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("DOGIGZBUQP");

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
    msg.setTimeStamp(0.6390121328737329);
    msg.setSource(51316U);
    msg.setSourceEntity(52U);
    msg.setDestination(14894U);
    msg.setDestinationEntity(24U);
    msg.x = 0.9513083303476202;
    msg.y = 0.9574964232078793;
    msg.z = 0.13738211258677213;
    msg.t = 0.6278403431523841;

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
    msg.setTimeStamp(0.11187465407884012);
    msg.setSource(41907U);
    msg.setSourceEntity(10U);
    msg.setDestination(52660U);
    msg.setDestinationEntity(68U);
    msg.x = 0.9031562358905397;
    msg.y = 0.2237941481910407;
    msg.z = 0.2815926069811734;
    msg.t = 0.7073633226282446;

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
    msg.setTimeStamp(0.7941589335100814);
    msg.setSource(55773U);
    msg.setSourceEntity(122U);
    msg.setDestination(16676U);
    msg.setDestinationEntity(112U);
    msg.x = 0.7637963292256597;
    msg.y = 0.7620223989229268;
    msg.z = 0.08933322069627758;
    msg.t = 0.6278312884213924;

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
    msg.setTimeStamp(0.9871808396596885);
    msg.setSource(45324U);
    msg.setSourceEntity(16U);
    msg.setDestination(16069U);
    msg.setDestinationEntity(17U);
    msg.plan_ref = 2746825637U;
    msg.id.assign("RUVYOIXCCGBAKXXFJIXGN");
    msg.memento.assign("OJVFXPDALTEJSYMQLCLOOAFEWPIIDHBLMNVTVORDMVFVUHEPOBGQYWEFMZXURRJUDFRJXHQSQMOZUQHOGDSXMF");
    msg.timeout = 65454U;
    msg.name.assign("NDFYZGPESUBPQVNGUYQKEBXYTMOMWCVWVSUTSWAIMUEJKAUOJIWOZZPYPSWVMCLAZROMYNIDTCHADLEGXAIZZTPAQKBNLHZUBJRXFCGQKOGRNOEZTFYJDKXR");
    msg.custom.assign("FBGCJBUDJQCFEGVYTTJXYBUZRZCCWOLLIEGUPHATMARKWIOEASDAOUFBJRZQDKTRCKLCPPSQVKIPWSIRBSRKJYMJENTOGVAZSMWMOYCJGDYWHGDNJVIMBFWFBSYXNLFQNPHPEHAEXTVMVHDUGTXMQHKHWOURVPZVRONZNDCHLPENESNPFZBSYSXIGDGLDAOHLBQIJTAZLIXZMXIYXSY");

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
    msg.setTimeStamp(0.04784794652223334);
    msg.setSource(11493U);
    msg.setSourceEntity(8U);
    msg.setDestination(37916U);
    msg.setDestinationEntity(213U);
    msg.plan_ref = 700943591U;
    msg.id.assign("NQIJCEAINJQUQLVVHHWCUFWTYRDWGFEDCZRMPWYMVSFNWXHVUNULYBBUUCZPAHDKDLOLENHUWMOCRLVEKACPBXDSZOJIETOPMFGYBQKFDZMVRJUXEVPBPNXRSGDXTMRXGJBQGGIILZNTYPZQTZIXO");
    msg.memento.assign("MHNMYSXHOBYAVXGFDEVJAENGHGRJNKLLSFBXWWTVUBTWRPTOQZDZPLEWQMOEKCWOSYLCNRODNREGTXGPNUCZVYDKKUQ");
    msg.timeout = 50164U;
    msg.name.assign("WFVYDYKKOVRVEADPNHAAWFETPYCUTUQLMSVMOLCXZKBHBOUJSPKLLMMZRPEDXNJRTDIHZRSNNDQMOJKSNCBGBLAXTPCHSVYUIAGLVSJCUFIADBACAPSIRSKXTOQYGILWEOVXVQPRMHBNIIGTJQYOCBTUZXOZFEMZEDZCIWOGGFWGHNDUXFWEVIPQQAFYF");
    msg.custom.assign("XTFJJFXFHAEDHJQTCUDW");

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
    msg.setTimeStamp(0.6058248117406234);
    msg.setSource(28175U);
    msg.setSourceEntity(69U);
    msg.setDestination(22707U);
    msg.setDestinationEntity(194U);
    msg.plan_ref = 533136116U;
    msg.id.assign("LWTYIPHKEHSKVVIQXLEDEVRXFDFSDMVBGOFQZFNCPQGALVUGUTNVLNCLHORKWKJYJYPXECRAKPXJQPMUWDCVJIFDLXJXRSFQJSFBTYSPFWNCIYEUYMDTLYRSCTSAYAGQMGWOHBKDBWIIBHKCJQEPOSOSHQRODXRZRVHRNDHZTHLPITPUAWZMAWARKMZSGNXZJLFEMKMGCILYU");
    msg.memento.assign("ZNYGVYKZDGTMWYANGCSPJIUBRIMRGFWLQZTYAORKYOVCGJUSJFNKWDXJOZBEHITBIWSALCOMPRJPKBANPMWSRUSEDSFVEBLGJOFQHWKTHRYITRXAVSEGPQMHEOJGSHKJIYWLTCCFMFTJUXBBF");
    msg.timeout = 19281U;
    msg.name.assign("TAGWGZDYKOQBCRMMQJPSTWVAFTALZQBUATTZHVISEUBFZAAYGWVUDINVPIYJCEZSXIGDJCQYTFLHHESNGOMRIYEHYMDNFKJIUUPQTMDHQJPZLTZGOIRXQDETWYUSZLDXQNFROLUIXMVNOAKDAJGKDEPJKVVXRMCBVWLXSJWBXNCRLEKLYOECHMBUGAWZQMKFXRPBBVTNKXCGVUNHFOSQPNOFLBJIOFWSHXLSCYN");
    msg.custom.assign("YCQOIBLUDOVLHHCKKGHGFUDQTEMZFDWJXCMMVTZGOOPTBJNDKSRBBCIDKASEBGXCLCIMGICZFEKFBLWFWMDEHAVRPANJUNAGXXSFMOLTUQTYAKEGNYFAPPKHJZAWJIZZTYBUSZZHNGQKWBTEMYAQXRQDPLRQCPXDLTBRSWVNQYSLSWRHOVZTROXCAEPONHVJLSVVUJYWNIVYJDXIRAVEIIQKRHBGNSDPYXJSNZJEEMXRCTWY");

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
    msg.setTimeStamp(0.44074182242171356);
    msg.setSource(40320U);
    msg.setSourceEntity(26U);
    msg.setDestination(62449U);
    msg.setDestinationEntity(237U);
    msg.plan_ref = 3326551196U;
    msg.id.assign("YCEJDUGSAWRZVQEFFIWPHNWHGGBALZTYLIIPQVKPUQPXAXGZXTJLXWQPNASBTTLMCVYWOIKPCRTJDDNGRVNFFSNSXDDWZWGRLXUQMZQNJJCJLMMCLYHSIQCUACONOVZKOIVPAOFEEEUERLFNSCGRDWGYOZELNVABHDJXYJOWQUTVBCEAMUHOZJFQWKXVMFXU");
    msg.memento.assign("FKOMKMAIJELPAFGXWZSGDIPVGZOI");
    msg.lat = 0.9552439518442671;
    msg.lon = 0.6590432071561955;
    msg.z = 0.004765891448407444;
    msg.z_units = 42U;
    msg.speed = 0.27736259481638703;
    msg.speed_units = 186U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7436555069749835;
    tmp_msg_0.y = 0.8039599008562146;
    tmp_msg_0.z = 0.7317256416049439;
    tmp_msg_0.t = 0.8934690272879146;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 20532U;
    tmp_msg_1.off_x = 0.14861801481344383;
    tmp_msg_1.off_y = 0.6894579271264759;
    tmp_msg_1.off_z = 0.28002111271064034;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.06758267736710177;
    msg.custom.assign("RMEDZFDWKEKEBUXTPRYUVOXPPMJWTSVKLVKWYLEKDQQVGHUNTUBLCVUBXFAJFUYZQBDEFGEHJTSIYAIWOHTQNOSYIRPAOGESGBFJUNJEEPPNCNHDYTFNNPHAFMLOKZIVDYFGCIRS");

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
    msg.setTimeStamp(0.9349265096403809);
    msg.setSource(51880U);
    msg.setSourceEntity(56U);
    msg.setDestination(21981U);
    msg.setDestinationEntity(91U);
    msg.plan_ref = 2492846803U;
    msg.id.assign("UJRDTMYQCIKKJDEZGHAFBBADXOEIZCAFGGCJWOSZWRFMYFRIBUMVCXFDULAQCHHSUJPZUYBDSBSNCUYQOVAYAWJWXLTXRWCPIUCWRMFKZYMYPIHNIJLQAQEVBQTELBSPRDHNUKPIHWCDJSOKEQRGYFFQTBDKAOSVYKJNHTYNNTPQRBLS");
    msg.memento.assign("QXNWAONFDAHBTIMVFIBQTVDQIVLCJHLCBFKEMDRWAJOYDIYNMFZHGTMQPUKXTGIRKEXZSHUROSSHBMNQVDKUZKVGJLJCXQXFVAAUUSR");
    msg.lat = 0.17601173531786463;
    msg.lon = 0.296165984191041;
    msg.z = 0.8103949036175477;
    msg.z_units = 26U;
    msg.speed = 0.2595258348544457;
    msg.speed_units = 249U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 45021U;
    tmp_msg_0.off_x = 0.875983377706032;
    tmp_msg_0.off_y = 0.6060981540282958;
    tmp_msg_0.off_z = 0.0841677589445512;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.8946275183421865;
    msg.custom.assign("MKEVZNOAYICDPIOBZJUTDKHXHLFLLQ");

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
    msg.setTimeStamp(0.7815860160070525);
    msg.setSource(4753U);
    msg.setSourceEntity(72U);
    msg.setDestination(60956U);
    msg.setDestinationEntity(215U);
    msg.plan_ref = 1112530421U;
    msg.id.assign("FQZXVYTMKUVMYLLCXKUYSRZKOGUQHZNJOWIZONEHKMTRDQCNFW");
    msg.memento.assign("ODMDSMXTNZHYZPVRGPCCYFDHBDSGPSWJGJIOJNKSCKELMPDTLDJCJEVCQALZMXCHQJGBXVBMWSKVEUBUUIQXPPEWNMCSXSHKVWCGQTEUKHUQNZGVYQQWNFLOXTXURIIFRFIYALYFQYMZXAPIVKGGRRPBAFITJOAQUNBJCJDLZXPODHRZBSNOBWAURWSAWTMEBUTKLELANKXTCO");
    msg.lat = 0.3297927688068917;
    msg.lon = 0.19974851266710236;
    msg.z = 0.18060762085949833;
    msg.z_units = 118U;
    msg.speed = 0.7198482260543912;
    msg.speed_units = 84U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.34081252236612014;
    tmp_msg_0.y = 0.5579851197793256;
    tmp_msg_0.z = 0.9501607279448184;
    tmp_msg_0.t = 0.17562137157112534;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.050527769391098376;
    msg.custom.assign("BZFUJXMJNLZDIWDEWTAVZOIUKRPAWLXFTADPHADVDYQSYYAJBYTPJRTEGFUIMMVXPHBULHLCEIOYAEBBQENGPKSNMZIRODRKLKUHQLWGDWTFKCIGQATCCRIUFXAIBVCMFVJDXVXPXGJQBJVUFSHHXFBOKZLYASMTQSLEWWZJOBPYSJZYOLQHVGWQXGEZOYRNCGKVWNNKOVONESGHREMRZNCDFHTFQTAB");

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
    msg.setTimeStamp(0.665654158537609);
    msg.setSource(26690U);
    msg.setSourceEntity(74U);
    msg.setDestination(64592U);
    msg.setDestinationEntity(135U);
    msg.vid = 37026U;
    msg.off_x = 0.007178932804044802;
    msg.off_y = 0.11684465101391373;
    msg.off_z = 0.09090837090071491;

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
    msg.setTimeStamp(0.18649089785361983);
    msg.setSource(26675U);
    msg.setSourceEntity(77U);
    msg.setDestination(21180U);
    msg.setDestinationEntity(237U);
    msg.vid = 50633U;
    msg.off_x = 0.7026365979603576;
    msg.off_y = 0.31893662264032796;
    msg.off_z = 0.8625142484053178;

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
    msg.setTimeStamp(0.520170899286552);
    msg.setSource(28671U);
    msg.setSourceEntity(88U);
    msg.setDestination(2738U);
    msg.setDestinationEntity(118U);
    msg.vid = 58135U;
    msg.off_x = 0.304256091401229;
    msg.off_y = 0.926887276883509;
    msg.off_z = 0.04288084931801517;

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
    msg.setTimeStamp(0.9172539134428698);
    msg.setSource(28685U);
    msg.setSourceEntity(253U);
    msg.setDestination(26987U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.2974886270849293);
    msg.setSource(10538U);
    msg.setSourceEntity(122U);
    msg.setDestination(22970U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.4264730857212127);
    msg.setSource(59904U);
    msg.setSourceEntity(223U);
    msg.setDestination(53748U);
    msg.setDestinationEntity(22U);

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
    msg.setTimeStamp(0.34008854387383747);
    msg.setSource(46922U);
    msg.setSourceEntity(176U);
    msg.setDestination(30359U);
    msg.setDestinationEntity(126U);
    msg.mid = 17583U;

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
    msg.setTimeStamp(0.015838636196223166);
    msg.setSource(33230U);
    msg.setSourceEntity(241U);
    msg.setDestination(17201U);
    msg.setDestinationEntity(247U);
    msg.mid = 60106U;

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
    msg.setTimeStamp(0.9662471624923759);
    msg.setSource(11191U);
    msg.setSourceEntity(144U);
    msg.setDestination(22449U);
    msg.setDestinationEntity(207U);
    msg.mid = 35018U;

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
    msg.setTimeStamp(0.28645524294417535);
    msg.setSource(61952U);
    msg.setSourceEntity(177U);
    msg.setDestination(51455U);
    msg.setDestinationEntity(64U);
    msg.id.assign("ETZRPPTGDUTDWYBYKASBHGFFGMSNDQFERWETHKOBUWSPENVUULSVJSOGVUTEQSNZEDXBBMIMJCAORGQJCYLDPSKKJLTCQUAJHNGGXXQKPENMFZOZX");
    msg.type = 22645U;
    msg.state = 211U;
    msg.eta = 59460U;
    msg.info.assign("RJXEGLXZXOGINPCDKYPEXPWTBPFRRFVBJDFCQJEQNDZBSUHRMXWAKMJGWDZTIVJQTQYUJO");

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
    msg.setTimeStamp(0.8132866944831587);
    msg.setSource(52590U);
    msg.setSourceEntity(105U);
    msg.setDestination(12132U);
    msg.setDestinationEntity(254U);
    msg.id.assign("YUVGHKFNWCCDOSRSITBIBMSRGLQCGROETXQUDVBPZLMEJMYMQUSCNMHLTHMKTYBNGWGJJFJDELJNIIFWQWRIZFGVAAZKKHPNNFELCDCZXJVJRDGUOPAQJIREQIIBFAEFPJBSLMGKOZAPZDTAMTEB");
    msg.type = 29592U;
    msg.state = 17U;
    msg.eta = 2371U;
    msg.info.assign("CVNOLUIPZRUGGMKHWHCDYKJEWFVIHSXENTZVOOLQQAUKTFBOBZWAPNGZSTYDIARKVVW");

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
    msg.setTimeStamp(0.9811927211327515);
    msg.setSource(64331U);
    msg.setSourceEntity(80U);
    msg.setDestination(46212U);
    msg.setDestinationEntity(4U);
    msg.id.assign("JVANBFGTKNMLBTATFXHVTBAACILQIRCKEITUZUQYHDDCYFJCBVRBYHWGWCQGKDZWISSLCYCOPCVNTKENJOMPSZBEXXUKXEOWDLVXLXOSAZZTEYLSUTEWPNDG");
    msg.type = 11552U;
    msg.state = 251U;
    msg.eta = 9658U;
    msg.info.assign("CHIKHRFXETLGXGEDPXXMVSNMYIRNMOJAGVQFGIJKQSWWHKVYYHLBKOCUFDUBIHTPZTMUQZFPUYKQHUQCZDHZEDWQZGAGZBKXPRMUSJDRPOVEOIAJJWOCNELWVLMVXKCPNCPPXDRIFURZWTHFOVRHRJKGABVFQYCGTBNTBNEAPYSLLWFQLUEASXKLBBDVGCHAEUDONXNUSTBZZOPTQFJYSGOTMOIBIAEJRJKFAZMWNMICDWYNXYQTWRSAMCJLV");

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
    msg.setTimeStamp(0.07151568171104117);
    msg.setSource(32301U);
    msg.setSourceEntity(111U);
    msg.setDestination(5499U);
    msg.setDestinationEntity(94U);
    msg.plan_ref = 1393748694U;
    msg.id.assign("XOVSNHNTRCUHJXWATOARNDAMFUMICDEVZQITARCOGWMSPEMYNINT");
    msg.memento.assign("SKYTVDZWHWSYECBVFXRCNPSNHPKKHOGISZUTLXQUDSQNYERUDUDHVIJEZFMMZHPDTCBEKHDJSNOVCROVCFIZZUHGLHYWGXVBMIVKUGAIGLPYPYJAACIXMQHKX");
    msg.system = 12217U;
    msg.duration = 24379U;
    msg.speed = 0.438654928471619;
    msg.speed_units = 44U;
    msg.x = 0.9893040637769006;
    msg.y = 0.4953212371244553;
    msg.z = 0.8987201071844381;
    msg.z_units = 244U;

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
    msg.setTimeStamp(0.27224907432259327);
    msg.setSource(58299U);
    msg.setSourceEntity(111U);
    msg.setDestination(36226U);
    msg.setDestinationEntity(112U);
    msg.plan_ref = 305952521U;
    msg.id.assign("FVEIIXSIAVSYDACJPTHHNVZHAFISGBCDGCTERCSMEGDBVJUKKIDRNDWBW");
    msg.memento.assign("JLBRUAMHEPCPKYAJUWNNJDHTHMOIYOYDQPOOEDGRXPDVKKPOFCQQAHUFKUWSSGDOICABPWTGFUZVXYBSWJHEMUEYBDMZLBQIJTVZWYWSBJLMPXQLGVNKNJAEFHZBUJTILTGNDNKQLNHCCAXTFYOCEFFGMXDGIWUSXRUEAZMQRVAZNQRZSAMIWDNWXSKVLRCTHXVFXAIYCC");
    msg.system = 54200U;
    msg.duration = 28078U;
    msg.speed = 0.5171593537493006;
    msg.speed_units = 27U;
    msg.x = 0.5071198983197333;
    msg.y = 0.4108882555050969;
    msg.z = 0.7704499118259432;
    msg.z_units = 44U;

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
    msg.setTimeStamp(0.8807668605827659);
    msg.setSource(60575U);
    msg.setSourceEntity(174U);
    msg.setDestination(28565U);
    msg.setDestinationEntity(199U);
    msg.plan_ref = 1964862059U;
    msg.id.assign("SKAESYXHOX");
    msg.memento.assign("FJTQDVTKXIRKBJWZJFDMDLFHJIEECBFOBWPOVYZMCPXVZHYLMTYAPCOSNHZXNUDRJUIKEFGXNNOFGHABGFSTWJTISBFXYZMFUMUVRRDOTICIUPYRWOHYQRGPIDJTEAGEQPGGNCWUUJCDEHHTDDIMABWANZQQVZPNCKCHTUKODPSQEJOMXGSNEYVAHSLZKKQQRSGLMOCLWBLYJBXTWALKALSOE");
    msg.system = 28930U;
    msg.duration = 59238U;
    msg.speed = 0.14719434405361642;
    msg.speed_units = 74U;
    msg.x = 0.780527130882546;
    msg.y = 0.13011704290603565;
    msg.z = 0.8372310998647301;
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
    msg.setTimeStamp(0.6747477934694032);
    msg.setSource(51552U);
    msg.setSourceEntity(197U);
    msg.setDestination(37544U);
    msg.setDestinationEntity(102U);
    msg.plan_ref = 1923606161U;
    msg.id.assign("WTXKTYNQIDGQAGRWGNFLSMUJJBYYHOXFBZQHJQOVMPLNADNBPGXJKFJRMOGEUCAZRDERDIUSI");
    msg.memento.assign("ZMHOYKBBBYUPHWUQYXZNVXPWCOYMTVEBLLQTNCKYJXEVTZFSGWXKGMABXHMMSIDZFOPSFWQBABWLSVTSPUWXNTQLCACFFFUAZTZXYGBQPJFXJRNAESWNACDGDOIKUTHLDEDTGEWIMKRAORAVECYTGHLJKEPKVPUXWJLLPCEKREDHVQZNMOORRJCMSFCYIZAFPZPJGCNHDTSIGHLSKWRISNZVUNDQJHKBVAURJIMMNILU");
    msg.lat = 0.7498063199766976;
    msg.lon = 0.8298398858492873;
    msg.speed = 0.9951344020387153;
    msg.speed_units = 72U;
    msg.duration = 48837U;
    msg.sys_a = 28203U;
    msg.sys_b = 44067U;
    msg.move_threshold = 0.09032464711918342;

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
    msg.setTimeStamp(0.4883943737479002);
    msg.setSource(52119U);
    msg.setSourceEntity(60U);
    msg.setDestination(19397U);
    msg.setDestinationEntity(68U);
    msg.plan_ref = 4237233121U;
    msg.id.assign("DBJLHBSZSJLMCEKGRKDAJIMKGMLEDQLRQNPTPQDKCYOCZENMLAIOHDESFRWHXRPFPZBQLYPKDYCUMATHTYTTVRSLEZRFWDOHADJEXQGNGGNGCGMINCXBSXZOIFAQUHSYKEVJOKWULNCYAHUHEIZLBCJNFRTWSZWUVIFBTETTNBXLVYMWJTIQFPVMFAVUUGOUVGJFWOKZHXWPEPXXDNAII");
    msg.memento.assign("KDRRINJNCSJBYQMVZKAIUHWWEECHUAQXDRVEJEYMNKEZNHPKYOYYAIRGSKXOVKLJPCUZLLZZHEFGVJQPPGCCEHVDBRAR");
    msg.lat = 0.28049038336496;
    msg.lon = 0.4183794153208453;
    msg.speed = 0.036972894189038596;
    msg.speed_units = 213U;
    msg.duration = 52896U;
    msg.sys_a = 34530U;
    msg.sys_b = 50124U;
    msg.move_threshold = 0.9841188685701581;

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
    msg.setTimeStamp(0.46968860203298846);
    msg.setSource(56389U);
    msg.setSourceEntity(98U);
    msg.setDestination(51723U);
    msg.setDestinationEntity(194U);
    msg.plan_ref = 3595935147U;
    msg.id.assign("SNGPJQLNXHCPVYRPWMLBWSUCZKDURTMXJUAGOJQENJFBS");
    msg.memento.assign("AIWLJELCNXAWMYNCXGHUCFMMMSXSBMSGBEQVBCABSZSNFJQYWTRKDXKWBTDBKTLFKZECFQBYRVDWHLKLROHBEEBHZGDVSESCFPHWXYDQOLPVDNUCEYOXYXUQSSWACMBNAYEXJNTOFXJHDUJLVZOLGHNVIIDJRUNIHTZOOAUUIGWJKVOVRPWMUIVWCKDRQHZMHXARLKKGGFPGVIPIPYGCDER");
    msg.lat = 0.9001593563536777;
    msg.lon = 0.2845833090857236;
    msg.speed = 0.7492894429549106;
    msg.speed_units = 227U;
    msg.duration = 59011U;
    msg.sys_a = 33793U;
    msg.sys_b = 35877U;
    msg.move_threshold = 0.14054579939244083;

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
    msg.setTimeStamp(0.8458895571133942);
    msg.setSource(9606U);
    msg.setSourceEntity(39U);
    msg.setDestination(35304U);
    msg.setDestinationEntity(130U);
    msg.plan_ref = 1892125041U;
    msg.id.assign("FHVKBLPQIXGMTJPBZQEVGLAMJYDSQSWNKDDQMVTVTXXEBYCRUTMREWUCYBURSKJSCCRMMYWPSHDSHZQFEYQIVHWQDQYJPPBVFAPXPGEPNJWONULOIAELSMRRJOFG");
    msg.memento.assign("WZTSQKLHXUUCHOONQQOTCNGRJIQPIAXAHNBLVIDECMVRBSWWHKUIZKIATMHWGBJDPHFXPNTDRMYRFYAIZDZLDGZQNCKFLTGYNYUUOEUXMUASLVWVUASGFJFJFKLPQEFCCJPEL");
    msg.lat = 0.5972869482889421;
    msg.lon = 0.4530200997193422;
    msg.z = 0.13026440016212237;
    msg.z_units = 0U;
    msg.speed = 0.19868288211801477;
    msg.speed_units = 186U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.48304421574092893;
    tmp_msg_0.lon = 0.7010483301966112;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("LRMXQVJAUFCACRMRWGBJHIOPAJGCTROSPAVAYFXOZQDNMZIFUSTKMLCMWFESBNXIVAIUOQEJDHSCFVUOCKEZYOBFGJKPSHZNTHCNXZGTWXHPSARDKTOWGGKUFDLPZINBFTCVDZTLPDMNYQFVEBTSBJDCZKZFRVGGEIHJMXRVWSWNVMYLGXXRUEWILYENQXJKPHPDYSKLYRQDUYETPONMPGIQRLJIWHKXWHUAABVMNKUCOAQBELWYQUJDBLHQY");

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
    msg.setTimeStamp(0.9245661485487386);
    msg.setSource(1013U);
    msg.setSourceEntity(166U);
    msg.setDestination(54564U);
    msg.setDestinationEntity(218U);
    msg.plan_ref = 1488529805U;
    msg.id.assign("APPJONEUYRMRAXVVWPALKUOHIRNXIVOBLYOOYBDPDWABNGXFLZVCZUZJUTSSWIGZSLNTSXYQLKCWNRFHBQJYMKWEPCMWEQQJECVTXLPKTVFYKHHIWLOKTDCAEGGBAYOUGVJQHBTLERPEUHJGSIMCSOOJPGXASTVCAYCSZLRFQKWGRHVJ");
    msg.memento.assign("SOCKTAUYWSEINYUXKGSSAOYUTCBMHVZIJSGDGYUCRSFKC");
    msg.lat = 0.467446193553574;
    msg.lon = 0.9605211035545793;
    msg.z = 0.15310611894906767;
    msg.z_units = 63U;
    msg.speed = 0.8415143775210946;
    msg.speed_units = 30U;
    msg.custom.assign("RSZSJHHDSZLBQGEYXKNJMHQQBIKIBFXVNUSENWBTVHWNJNCLLDYBLNMFAAOSCONMCGLRPUCURFQYTLGQKJOZLPWDRJEFMIATRMTHZQMVQHGU");

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
    msg.setTimeStamp(0.19019907240006628);
    msg.setSource(15510U);
    msg.setSourceEntity(75U);
    msg.setDestination(51213U);
    msg.setDestinationEntity(195U);
    msg.plan_ref = 1575274906U;
    msg.id.assign("TDCGJVPAZXTFXVSXFNKRMIKUXLILHDVUGIBRZGSYRYHDJMEFGWGZDPPBJEUOVMYBNNGCTRSUGFMWRAVNCYCTRBQQXIOKNWONLGFTPKHYRZUXJICDXVIZKXJHCOGDBAUMZ");
    msg.memento.assign("VPURLUAPQJWLDMDGMIHONDZKXIHAAROYMMBWXJLBZEDUCKIVJSYSNUOXXHMTJELLDZZUOPFYIETKWVSRYRRSSZAQGQZBKFVXKHEMVFGGHNDCDZCYCLTNHVBJJUGTABAFTCTDROBFLMNRNBXZFENWGXYPHPJQUUWMLHYTIBBQJEISVJKEGKWJGWSVXINCGQUTIWOXQVQQELFEPPRAHNAMKRFHMTZCLGOCOOUKWYWTDAKZB");
    msg.lat = 0.6398879035212034;
    msg.lon = 0.5199463556586458;
    msg.z = 0.8730301214149665;
    msg.z_units = 213U;
    msg.speed = 0.8484299246283381;
    msg.speed_units = 8U;
    msg.custom.assign("GCWRILIIEAQEQWPFSWLHULNMFTNYBMAYDKXYBUVLNGEPUXBWONZSNVTYOCQCOYUUDHZFSGOEENORWORGTDIDPMJOLRVIKY");

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
    msg.setTimeStamp(0.7719387711325348);
    msg.setSource(22035U);
    msg.setSourceEntity(171U);
    msg.setDestination(53651U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.3750246995216804;
    msg.lon = 0.4521437541161746;

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
    msg.setTimeStamp(0.0002755795541259376);
    msg.setSource(35322U);
    msg.setSourceEntity(70U);
    msg.setDestination(9929U);
    msg.setDestinationEntity(249U);
    msg.lat = 0.5009155276866325;
    msg.lon = 0.46017309859948363;

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
    msg.setTimeStamp(0.2241741520857895);
    msg.setSource(60864U);
    msg.setSourceEntity(206U);
    msg.setDestination(16195U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.45684284739272785;
    msg.lon = 0.47319491447555284;

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
    msg.setTimeStamp(0.15028071314262448);
    msg.setSource(49778U);
    msg.setSourceEntity(241U);
    msg.setDestination(53865U);
    msg.setDestinationEntity(175U);
    msg.plan_ref = 26924421U;
    msg.id.assign("QPJVNMBUKIQUDDMIVWLYRRSPTMTHDZOJABRQZNZVIVZSCNIJZFCPDPZHVYYKKVFBCLCTYXSUTQWTLGOBLFQOHCPBGRZHSDKEGYKTLVZGLJSEXKCHPGLZLCVSCO");
    msg.memento.assign("HSKOJGURYCASTEZYNEHUVWTCKHQJWPPTZLDGOROTPACIHPZRYMXNKXXMBLKTRUOSGIHDRSEOJEVQWEVYJBSTIHMCERQAPAFLQCLBVWMMKIWZKNWDDRGNPJDOBOHLRTDGIFLAMXUBXBEHQKQFYQEFYPKSXDUFANIFEPOWYGOBIMNJLFIXLWQZZGC");
    msg.timeout = 32924U;
    msg.lat = 0.27305123868695236;
    msg.lon = 0.12647476974850602;
    msg.z = 0.8253243381507299;
    msg.z_units = 149U;
    msg.pitch = 0.24890418821759086;
    msg.amplitude = 0.9224240597228388;
    msg.duration = 37800U;
    msg.speed = 0.4039843238672144;
    msg.speed_units = 146U;
    msg.radius = 0.6580674468034468;
    msg.direction = 167U;
    msg.custom.assign("MYOSLDILSVUQECCKJOQAHDVIWMSQLSGWSHVPTWANUGMUWFMUXBNYZEJSCFDLIGIEYGADWHQGDZHUW");

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
    msg.setTimeStamp(0.7760687810686671);
    msg.setSource(52106U);
    msg.setSourceEntity(219U);
    msg.setDestination(14978U);
    msg.setDestinationEntity(179U);
    msg.plan_ref = 3580811845U;
    msg.id.assign("SOJVTXLFPRDNLQGMLAEHSSFSUQYDBUBABGQITBDWOPYTMXNTNXPUGVUMUMFGEFOQSJSXVBMLCAQTCRYPPVZNKPZUIWTRYIQKVZQUZDWPARJHKKVHOPKFDIHJIODZAJMEZELIUGXCEHMOMJWIWCUAYXVEWBNOXPDBRNCYOFFGTHLCWSFSYBINWJHKRCECPVYOKDFRHGGEKDRZHQXANFLTXYMBZARJZKWAXYEWEGILVRJKNGLJVBDSQUTHQ");
    msg.memento.assign("EWJNNSKTZGSXFKOKWBRYZMQDEMTFDCJYOTMCYPSECDRGDFWSAYNSWZGBUCKUELGBRDIXQEOWFEOUFJVMOHITMQFGSHTZVNCACZFNDHUEVWABOTCOXQQDULYUYMZIBJRKNRSHEIVVNUBBULLVDXPXLHASPQZPXPRXMPMGYRHTFHAQOYAIUBPIWRQQDTZACCVELMKWFPGKSUAYVHJJPHXGLBAONKLIRJJVBIGWCEKKNGXT");
    msg.timeout = 13825U;
    msg.lat = 0.45691424163473304;
    msg.lon = 0.6136365889039127;
    msg.z = 0.3416822650721557;
    msg.z_units = 121U;
    msg.pitch = 0.11238957846104658;
    msg.amplitude = 0.8050511699068177;
    msg.duration = 50228U;
    msg.speed = 0.6802463078029554;
    msg.speed_units = 58U;
    msg.radius = 0.3502067230528493;
    msg.direction = 238U;
    msg.custom.assign("LZGTIMPSDBUOSCKLGZJFMCKNBWQWYEEOFSDWYTQHOEIHCWYBSLBRHLGGXVNPUYVBHHQKOAWQZXZJWSVAQIKGZMIECKJUERARUIDPSJGFNCQARJXMBDGVKDEDJTMDLPGIJFOGMULBPYHFHNIMMTARS");

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
    msg.setTimeStamp(0.9091427836288211);
    msg.setSource(20597U);
    msg.setSourceEntity(93U);
    msg.setDestination(9660U);
    msg.setDestinationEntity(103U);
    msg.plan_ref = 3396108382U;
    msg.id.assign("TTQPZWXQFVCLOATJMVITMIGJBCUQISZDJNNXKAPFWEJKXFBAFMLVXPWXHYUDXRYLPYHHEUALBJDNUIHGRKVMCGVRIQIPYXTATGLBLTRQWQNQVSDLMDCWQSUAWDXLTZOWKXOICYMACUOFRVWPVBIVKFRDYGJYGROKCGKAVEKEBBSJSFUGARDYZEFZRBSOPDSXEEBRHHEADUYGCOJHFZNIQHQHENKONFZPBINLZUSMCHGEJPCWTMNTJUKS");
    msg.memento.assign("NGBAOFVMMISQSXRPRWQIYLHHDHYKZPOLIKLCKFDLPTYISABHGGUHXDHETVWGWOOKXACAXTESPDXRGYSKCUUERFWMVTNUTXQPDLLYGBWEQSXFYKJBXBEIPZCW");
    msg.timeout = 37829U;
    msg.lat = 0.3843967575621158;
    msg.lon = 0.2999307813982446;
    msg.z = 0.4824080789928685;
    msg.z_units = 144U;
    msg.pitch = 0.17150609160499808;
    msg.amplitude = 0.7015807172982059;
    msg.duration = 20254U;
    msg.speed = 0.7417032992969516;
    msg.speed_units = 118U;
    msg.radius = 0.7313884842210704;
    msg.direction = 100U;
    msg.custom.assign("YHZEMCGJPWFUMCDQRM");

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
    msg.setTimeStamp(0.43089977178698335);
    msg.setSource(32508U);
    msg.setSourceEntity(54U);
    msg.setDestination(38307U);
    msg.setDestinationEntity(245U);
    msg.formation_name.assign("HZTKPGWMJWTLIXNRNWUMPOTGUCGCZHXOHDBRUUKWRTAFDPNBXWZXFNAXOZCQCOBIYQTEASRVCETFFAHYQIYYXTYCCTDDSEHZDPVIQIBKJPGZQPNDYVEKVJJAGZUJLBRVIGILOVJEHTEFHCGTOPILAWFBQA");
    msg.reference_frame = 251U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 64880U;
    tmp_msg_0.off_x = 0.8077287059025565;
    tmp_msg_0.off_y = 0.48872970978058383;
    tmp_msg_0.off_z = 0.01843687875792599;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("JTEPQSYOVCSQSDHWYFZELFZJOHJBCJTQADGPKRCDUZVTLBMDVPRBABBDAIKDIWIJYOKJPNJPALNSLNMBSFGQWLCHZUEFUVULUOLSMPLKVXOZPHXCUOZGXYYNWEEWDEGFYIWIXXHJDBJPIDTKTCURTRTQIZNCRYREROTRONTFKMZXGCQUKZZLOSVGHHBGEPQ");

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
    msg.setTimeStamp(0.5612143311123304);
    msg.setSource(18813U);
    msg.setSourceEntity(178U);
    msg.setDestination(10135U);
    msg.setDestinationEntity(29U);
    msg.formation_name.assign("DVCQWYLCEGTSBJCLZIIBIAOKWYSBXPQQLAHKMGLZSDJIBZEYPPEOTNDPCTWVGVNSIUPPBZWSJTGEHFMWJLFUFZPGNELGOTPBCHLOGROEZMLORKGMRHXGNVJQHDEKAUSJQJKVUJFDSONGKQIXWRHVRKLDSCTYYWXQMNOVBWXNEADWQCMVHAVFZTUXTJKMFFEAMAZSODXBNIPTKUCLYRWBQNZSCANU");
    msg.reference_frame = 122U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 20441U;
    tmp_msg_0.off_x = 0.5124853245532046;
    tmp_msg_0.off_y = 0.7355179950747393;
    tmp_msg_0.off_z = 0.5103703471696026;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("RHEDAWKHYXXCHYYEQKBRIQSIBMFZBDEOVOSGKLUPDZLPLJTWTGNUVJIFEMZTGQXVHSQAVCLOBHYQGZRKWXJAFMLLJMOOEKCDAAEBYCVFXJGAFQWHNTGSIOAZPLFUTJUPPZKUFRVNNUMDGBXYQNXAJDVUKCKWIUONLZTOKGACEHAKCVYWXRCMQVEIBHMI");

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
    msg.setTimeStamp(0.14194762978837427);
    msg.setSource(49049U);
    msg.setSourceEntity(62U);
    msg.setDestination(40300U);
    msg.setDestinationEntity(135U);
    msg.formation_name.assign("BIQXOBXXGZRTQSHDDOGZVPUDRDBDETGBVEWAVPIFKLJIXBWPTPHSLVFCFBNZYJSDASQVKXPOZIFCSJZUNCWPWQKERWKXFNIQDIMAATACHCYSUOEURWMLNXIXABOJXBVSVQOMRPLOZTEJSEUYKAYJYMUMHUMIPDALWEDGEESIRTKILFACTWRCMFFJNHKMPRLVCHCGNLEVGHOFFZSGY");
    msg.reference_frame = 161U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 38913U;
    tmp_msg_0.off_x = 0.6520037661025867;
    tmp_msg_0.off_y = 0.6863493539754667;
    tmp_msg_0.off_z = 0.052303022537285804;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("HKPXWFFYJBHUBBDIHAVWPQMUSGTRFYMOKALAIGDOBRDQGJMMLJRMBLXJOOBUXZPNFZZCXASUJOVYQELSCYEABJLWVGNJTDNWYEQAQVSSEESAXBXNG");

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
    msg.setTimeStamp(0.6175012422482793);
    msg.setSource(35388U);
    msg.setSourceEntity(225U);
    msg.setDestination(23765U);
    msg.setDestinationEntity(188U);
    msg.plan_ref = 3360315915U;
    msg.id.assign("EGHLOFDWZCNATEMMRNIOSQWVZLDBLDVEJZPPUXXHYEQJP");
    msg.memento.assign("DDGJJTSCVUKEHIGWIRWQOXRKXKKAXRXAO");
    msg.group_name.assign("IPKGUGCLCWGHPJYUHRPFNGEYHUSIDTSVBCDIGZHVNHSKWDTZFJBMKONXFVAOJSLCPIEHEXAYXKDETTJUMDJQZTEQRAQUAPOGGPWRLMIOZYBDISBIAWFFROHSGUJVRYZRCDLNKXYTUIKSFPFMDNWUJCREWOAMLWRSYSVHBZPIWOXCQMNQCEHRLMCXVGANDJFQOXEEMULLQWJUPOYMYBNXBVKDWVBFFPXBKAQQHYLVX");
    msg.formation_name.assign("YEFNOBQDHTOPXIWLZTKVNUZSONUUYIOZMRNHIRTFWCDUNDVGSAAHJGNQXBBLDGQLMRLSGRGLKLDTSVKWVUBHAYGZVFUREAAMPQKGQYKSCMOPPGXOVZLVFJSHFDLIWMCCAUZCKFWYJWPMJETHBAJBCPNEA");
    msg.plan_id.assign("FIVCLDLLRAFJDSXOUMRPENADMOKXUWUBJTFBYFMQPBHPPGIJALSQRDRPIOEXMUBMEBIUUTCXNGWKXVGNOVVHGWWNWYMPFKBQPQVBLXLTFZEOECTPMKUKSULAJXRIDOIPIRXWBVDSWZYJAHKBFCCDTAPYCMZRWVIAOTNFRZAZJGCTYTQQGISLJOSEYSVULGTFNQEDKWSCHRGZXMFSVYGKEQAHTYCZHJKVDIUGY");
    msg.description.assign("OCLQNYULOELEOKADZNJCEZRUCOWBHQOGZVFXEPUFAIZLVBTYUXWQSRZLHSRKBYVAIYDJONHPAAXAAZSIUDBKJUUBMHKACEMATFEDWOUQGZTGDDSPSEXYIYNLCFQEPRHCDKPJFRJRMFGHPXWWTRWHTVZLHLJYSJEIONWXVOPTVGVDYNDBNHMBTMJQFSBXRTKGTGRNQWMKZCSISMXVXFHIWNQOCSULQVDQKXVFCMIKZUIMA");
    msg.leader_speed = 0.39497620519345666;
    msg.leader_bank_lim = 0.15382335520946633;
    msg.pos_sim_err_lim = 0.41494099266992424;
    msg.pos_sim_err_wrn = 0.5160721783583428;
    msg.pos_sim_err_timeout = 2146U;
    msg.converg_max = 0.11093904926835219;
    msg.converg_timeout = 34469U;
    msg.comms_timeout = 326U;
    msg.turb_lim = 0.4621640023318211;
    msg.custom.assign("OWPOADSFVZMBJLKGAVRMIMTRRYEOEOZKDBKCSBOWJFDFFKFBDJCKYSISQLJCMPUWUOCXQNQVOMWUFBCBUOWYQXUWTTPQPMAHJMRZSTKCPAPJGXNOQRAGHHPIJFXBWDENCVTBYQEZTEXHSCRLYDKNVDLP");

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
    msg.setTimeStamp(0.6412875896353193);
    msg.setSource(10991U);
    msg.setSourceEntity(158U);
    msg.setDestination(33997U);
    msg.setDestinationEntity(157U);
    msg.plan_ref = 2848811128U;
    msg.id.assign("WPCMLIWRDNYLMKSTOXRPUVSCARKZJVEZFOPZDENDZEXIAZYCFMIUONJVHIGGNFASVDQOZGJZRISBFEIUJOO");
    msg.memento.assign("NTMYLLYKPVOLYWWBIPGWNRJWDSXIVEEFWQFZIMQEJUUDIMVTNQPLAWEKTCHZXJCDBXQGTOHSEAKBRAIPGZKG");
    msg.group_name.assign("VBDXVAOANSTCERJHRGRGPYBXWZPLIFVNIGECAWSZYINLIUGTLMOVTLIFQYVHJKZWOKLVURUWMYBCXZAKJIAMCWURPPFQEERFIBKXAXEFUOSCMHTECQXOODXZDHDSNBZSVZNWLPYZO");
    msg.formation_name.assign("MQYLOFRCTCBXZKFVAXJBQBOARCGPXINOTSERWTGONUKPGLRNNEEQFHJXYLDYZVGSCJZAMBPOJQODLRASFUPDRYUWPCVWZQFIOQUQJFHSAHCIUVYHUGTAWNNTBXVDMYIDZXLTPCMHBKFMRLWR");
    msg.plan_id.assign("RQTNSTRJWSWZNYZTJUYIRBMKGEFTGJXZQYMCLPSKEFYIFPFYOCAKS");
    msg.description.assign("WQKSPDFPVZDATITUYOOJINERLYVCTKKTDLYFUZVZBNWPAZXJYUECSWQXWJNSCRLAQXZRGJRQRATOIMEHRSKGUVCPDFAXYNGFNWYOBFFXHJTLBDRBWDSRUKWOJSCSKCGKOMQGMLNLYIEMMFVZKEQHWHFXIUBH");
    msg.leader_speed = 0.2650003420183208;
    msg.leader_bank_lim = 0.5215216880399688;
    msg.pos_sim_err_lim = 0.5646413157674084;
    msg.pos_sim_err_wrn = 0.8277876854668598;
    msg.pos_sim_err_timeout = 58620U;
    msg.converg_max = 0.10823758344427248;
    msg.converg_timeout = 60991U;
    msg.comms_timeout = 29106U;
    msg.turb_lim = 0.7385247799387247;
    msg.custom.assign("CHKZPLVBWILYXUZMSDDBUMEARJYSJFRQQXGZBZXLWZRPRSLPJKVIYUFPXJOJCHNSTZETFZPIWURHSACYAQLUQZXLPTKVRNNCWAJRGJKRNOWVTCSHDOSBMCBDCVN");

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
    msg.setTimeStamp(0.27574092088787006);
    msg.setSource(33300U);
    msg.setSourceEntity(43U);
    msg.setDestination(27010U);
    msg.setDestinationEntity(220U);
    msg.plan_ref = 1550788811U;
    msg.id.assign("NAWSDKRMBDVTMRXJYRSTCJXGQNHZABGPXKYEBCTSHKPUWLNSIRGZAFAWUJQTLYOEEMBGRTLYQMUNVPTXJVWSKQNANKFSWGEJUNRLKIOFXIBCHQBVIJIYHYCHAAMFDLJGOGSYOXRUPEODWYVJHTZUPTODIIPUVVQCSYMIZXQHLZRJFPPLRZLZDZCXOVMFEGQF");
    msg.memento.assign("OMHHYLSHUAHLZQZKVDLXFDNWWQPMVTJODAEHFYWZCLBKPZJUANFFGSGPCF");
    msg.group_name.assign("RWRPMTCYVNZOKGOCDKXJZEJAWMVNSOQXEUQBMWZBXFHDKOPMWWVNROVOMPXBQNAJMVESCXGHALCAESWNQTLMPXJGAWIJ");
    msg.formation_name.assign("LHAEEDTGWDQZHJPWSPHHNJXTPFDEJMHLPRISCPJICNVIBERDDMRZDZKLTBVMGKUWFKVXBANQYEVXHRZRTKLOZBOFWDVKIBDKNGTOAYMJJBXMFSZULPAVFPMBQSCSTCPSTWFPMVQGEHIQWLAZDCJAWIQKFRAUYLDUFGLNUYWXKAXMYMNSIHCRJEGXSW");
    msg.plan_id.assign("EFTSDLTOGZRMCGNPBOYYKMKLFZYMSDBWTYLFIGZQPARBEPVCTOHGFRFPVYRMEWNLLUOBKRIXWCQDZZOVDPPGQAHKVODDHLUQBZJVSVJJUSRLEIAAVNXWJNNARYKLWSQTNMJSAUREIHFKJQTKIWAECAWEXOZBWYZPFUSHYTOUUKVQSKXQUVNYLYENGIXMJDJM");
    msg.description.assign("DPXHPZWREJXFIAMQJQNYFZOVUTBOGRTDLKXZQZVUULVDIFPBSKGIERTWQLHSTUISNBEYZFNVXLKUJNSLYHIUJLHHXLAHSWGYPGLGZGQOHRGAWRBEVWFKXYJMAIAYUADXGAOSCLJRPVEQFDTCFTVFJNHCKDPMNRKQUYUIFQJASODMVZQKRNMTFMNMCZXCJV");
    msg.leader_speed = 0.036344523326980016;
    msg.leader_bank_lim = 0.16695379271537258;
    msg.pos_sim_err_lim = 0.43872416863444175;
    msg.pos_sim_err_wrn = 0.765578992749056;
    msg.pos_sim_err_timeout = 40418U;
    msg.converg_max = 0.6206884006533718;
    msg.converg_timeout = 11711U;
    msg.comms_timeout = 43024U;
    msg.turb_lim = 0.9251352842535822;
    msg.custom.assign("BAYQQKUFMCIDOZEVNZBYUPYGUOPWB");

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
    msg.setTimeStamp(0.1351234430169923);
    msg.setSource(27086U);
    msg.setSourceEntity(236U);
    msg.setDestination(8941U);
    msg.setDestinationEntity(141U);
    msg.plan_ref = 4041245255U;
    msg.id.assign("PFFLPCCBOKRHUZWQOWQSMMUCMYBFFGISMPGAUNMDEAWQPNARLSAJBVJJDVKYKXJZUJPUDSADYYLHSYZAIKELWPQEYZEONLWGRBWQHZVGKZIZEGTCMSOHRNVRYSNRMVSKIB");
    msg.memento.assign("AZWTRZFRYLIHVJOVTFLUVMCSLQSZDYIMGBNXILUKGGEBKBEEEQXIHTCWAAJHCMQBQDKVVIZFMO");
    msg.control_src = 33057U;
    msg.control_ent = 114U;
    msg.timeout = 0.7354823840223255;
    msg.loiter_radius = 0.04981579391569724;
    msg.altitude_interval = 0.4679210892986677;

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
    msg.setTimeStamp(0.7103869048079011);
    msg.setSource(5994U);
    msg.setSourceEntity(163U);
    msg.setDestination(61693U);
    msg.setDestinationEntity(254U);
    msg.plan_ref = 256355736U;
    msg.id.assign("VVFKIIIQANKTZXEIEJTMQOGNWUXRNRAHQBOZBMNSSLCIYWOBEHZXEUWNISXBVKDQPDAMDVIKYAJGSATJQWLWPBRPTRUAGGXOOQSPUBPUVBKQDCFUOJYXVWMMHYAR");
    msg.memento.assign("YGAFAHTJUPAUAPWFJPZUTBFBJBEUIPTNHKLJLCLNGDZIWVAIOZJIXOCQKAXMQXTXDMUUSPHGGKMTZWRELWHZVMLRD");
    msg.control_src = 9226U;
    msg.control_ent = 63U;
    msg.timeout = 0.26073068152921464;
    msg.loiter_radius = 0.6088135712399041;
    msg.altitude_interval = 0.4910972985946396;

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
    msg.setTimeStamp(0.9715650995126431);
    msg.setSource(7382U);
    msg.setSourceEntity(252U);
    msg.setDestination(47492U);
    msg.setDestinationEntity(104U);
    msg.plan_ref = 1650709047U;
    msg.id.assign("BEXUGTJPQCLFRIEOUNJOSRGMAZVQDWPHHMGTAOWYDVFVCAJMUOSPKZVTNCTGRLYWGWMGYGKLBRXIHLWXJSXNFSMOJZPZWTKBDKZOXROVFPMILSULEEUFDTJSMLEYANVQWQSBN");
    msg.memento.assign("FYLCWQWKCVACMJTKRZHOMCQRLWAFULHQNAYXENVTDBXOEBHGOYMCRHAEXFC");
    msg.control_src = 57648U;
    msg.control_ent = 135U;
    msg.timeout = 0.4957166268577897;
    msg.loiter_radius = 0.12903386449485976;
    msg.altitude_interval = 0.5451225380948647;

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
    msg.setTimeStamp(0.9078282269984739);
    msg.setSource(60693U);
    msg.setSourceEntity(153U);
    msg.setDestination(40732U);
    msg.setDestinationEntity(217U);
    msg.flags = 115U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4300166682539489;
    tmp_msg_0.speed_units = 117U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.4257365871565205;
    tmp_msg_1.z_units = 240U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8965998791051585;
    msg.lon = 0.6748699004624886;
    msg.radius = 0.6965283227113105;

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
    msg.setTimeStamp(0.9822170714538324);
    msg.setSource(24819U);
    msg.setSourceEntity(130U);
    msg.setDestination(37277U);
    msg.setDestinationEntity(142U);
    msg.flags = 46U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.912823461052837;
    tmp_msg_0.speed_units = 88U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9478647890292766;
    tmp_msg_1.z_units = 113U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.745309212356948;
    msg.lon = 0.8230488383754073;
    msg.radius = 0.5409282434812958;

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
    msg.setTimeStamp(0.8507696027679955);
    msg.setSource(38864U);
    msg.setSourceEntity(211U);
    msg.setDestination(49053U);
    msg.setDestinationEntity(18U);
    msg.flags = 192U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.017104936139809124;
    tmp_msg_0.speed_units = 136U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7675830266856933;
    tmp_msg_1.z_units = 147U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5247062551476044;
    msg.lon = 0.45345917133806746;
    msg.radius = 0.9190807789510269;

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
    msg.setTimeStamp(0.3553187777684301);
    msg.setSource(244U);
    msg.setSourceEntity(150U);
    msg.setDestination(59678U);
    msg.setDestinationEntity(72U);
    msg.control_src = 19090U;
    msg.control_ent = 228U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 122U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9620848047985967;
    tmp_tmp_msg_0_0.speed_units = 146U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.46086673775706766;
    tmp_tmp_msg_0_1.z_units = 99U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.13921837613219978;
    tmp_msg_0.lon = 0.6602229391349598;
    tmp_msg_0.radius = 0.8760587951805762;
    msg.reference.set(tmp_msg_0);
    msg.state = 30U;
    msg.proximity = 158U;

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
    msg.setTimeStamp(0.16789528486750538);
    msg.setSource(13079U);
    msg.setSourceEntity(140U);
    msg.setDestination(31969U);
    msg.setDestinationEntity(241U);
    msg.control_src = 47035U;
    msg.control_ent = 185U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 160U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.4360765903081446;
    tmp_tmp_msg_0_0.speed_units = 33U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9991007308499746;
    tmp_tmp_msg_0_1.z_units = 2U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6412106537482511;
    tmp_msg_0.lon = 0.8177235768185857;
    tmp_msg_0.radius = 0.6464734387741595;
    msg.reference.set(tmp_msg_0);
    msg.state = 35U;
    msg.proximity = 17U;

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
    msg.setTimeStamp(0.4610495219479157);
    msg.setSource(33743U);
    msg.setSourceEntity(49U);
    msg.setDestination(28064U);
    msg.setDestinationEntity(10U);
    msg.control_src = 58874U;
    msg.control_ent = 219U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 200U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.39449596762129646;
    tmp_tmp_msg_0_0.speed_units = 162U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.17645245381544028;
    tmp_tmp_msg_0_1.z_units = 133U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5166963654212954;
    tmp_msg_0.lon = 0.11555526777485958;
    tmp_msg_0.radius = 0.9196442571958912;
    msg.reference.set(tmp_msg_0);
    msg.state = 188U;
    msg.proximity = 109U;

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
    msg.setTimeStamp(0.12300299116571656);
    msg.setSource(34026U);
    msg.setSourceEntity(202U);
    msg.setDestination(9081U);
    msg.setDestinationEntity(248U);
    msg.ax_cmd = 0.8142644313578048;
    msg.ay_cmd = 0.09279794433545441;
    msg.az_cmd = 0.9256952605395293;
    msg.ax_des = 0.8369861139882602;
    msg.ay_des = 0.05714952999576606;
    msg.az_des = 0.5429178737303219;
    msg.virt_err_x = 0.9428789675211817;
    msg.virt_err_y = 0.43806592898041485;
    msg.virt_err_z = 0.2945605156857636;
    msg.surf_fdbk_x = 0.7083319716437055;
    msg.surf_fdbk_y = 0.2961313956684475;
    msg.surf_fdbk_z = 0.11424065563183095;
    msg.surf_unkn_x = 0.30572655971041507;
    msg.surf_unkn_y = 0.402057936249796;
    msg.surf_unkn_z = 0.30383713348446006;
    msg.ss_x = 0.3219154915032113;
    msg.ss_y = 0.1113193145800957;
    msg.ss_z = 0.08595622546497594;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("CWNHMJVJUVCKNYZAFMGGIMYJWRTLHXQOEIF");
    tmp_msg_0.dist = 0.11052642526853329;
    tmp_msg_0.err = 0.41843090544827954;
    tmp_msg_0.ctrl_imp = 0.18680535222951655;
    tmp_msg_0.rel_dir_x = 0.6685517898691545;
    tmp_msg_0.rel_dir_y = 0.5538967078296015;
    tmp_msg_0.rel_dir_z = 0.9603659301923584;
    tmp_msg_0.err_x = 0.4849827657833131;
    tmp_msg_0.err_y = 0.08964600308388038;
    tmp_msg_0.err_z = 0.5657698099398547;
    tmp_msg_0.rf_err_x = 0.021794019220963468;
    tmp_msg_0.rf_err_y = 0.4638539361151206;
    tmp_msg_0.rf_err_z = 0.5716948117100172;
    tmp_msg_0.rf_err_vx = 0.03812911707979316;
    tmp_msg_0.rf_err_vy = 0.2015358748828402;
    tmp_msg_0.rf_err_vz = 0.6583187407728971;
    tmp_msg_0.ss_x = 0.7474217018781587;
    tmp_msg_0.ss_y = 0.882150798172068;
    tmp_msg_0.ss_z = 0.875610554715102;
    tmp_msg_0.virt_err_x = 0.44794808825449806;
    tmp_msg_0.virt_err_y = 0.3610929413866114;
    tmp_msg_0.virt_err_z = 0.7540881546550886;
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
    msg.setTimeStamp(0.11513063111912325);
    msg.setSource(20065U);
    msg.setSourceEntity(165U);
    msg.setDestination(55213U);
    msg.setDestinationEntity(15U);
    msg.ax_cmd = 0.29460203195712176;
    msg.ay_cmd = 0.37948972833992245;
    msg.az_cmd = 0.28446083805383604;
    msg.ax_des = 0.19263631709563767;
    msg.ay_des = 0.6615176280059353;
    msg.az_des = 0.625878067234276;
    msg.virt_err_x = 0.0992402354817502;
    msg.virt_err_y = 0.6377284711051618;
    msg.virt_err_z = 0.41147404358700823;
    msg.surf_fdbk_x = 0.5720520852510216;
    msg.surf_fdbk_y = 0.48216666455767154;
    msg.surf_fdbk_z = 0.13890043718503198;
    msg.surf_unkn_x = 0.9599812787544268;
    msg.surf_unkn_y = 0.7847091509793253;
    msg.surf_unkn_z = 0.8969950445475253;
    msg.ss_x = 0.6282527593345887;
    msg.ss_y = 0.22237398702266709;
    msg.ss_z = 0.7850201076944984;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("RXUOIXYRUHQAAUJAQRZWHWWGRBMURIGOXPPLDISKPVATXIHKVSVBBUOZFOMGLLJHZEMGBJFZXCCD");
    tmp_msg_0.dist = 0.43174342855968106;
    tmp_msg_0.err = 0.21295625124490303;
    tmp_msg_0.ctrl_imp = 0.5065539650078611;
    tmp_msg_0.rel_dir_x = 0.47090887089777744;
    tmp_msg_0.rel_dir_y = 0.5895212060154884;
    tmp_msg_0.rel_dir_z = 0.4326033058440859;
    tmp_msg_0.err_x = 0.2812358812165947;
    tmp_msg_0.err_y = 0.12421191869838422;
    tmp_msg_0.err_z = 0.42440202449116504;
    tmp_msg_0.rf_err_x = 0.42165282230183887;
    tmp_msg_0.rf_err_y = 0.3992481899048832;
    tmp_msg_0.rf_err_z = 0.3131344772434119;
    tmp_msg_0.rf_err_vx = 0.23406785122501939;
    tmp_msg_0.rf_err_vy = 0.2785319583281328;
    tmp_msg_0.rf_err_vz = 0.5436622065989098;
    tmp_msg_0.ss_x = 0.9294975999670751;
    tmp_msg_0.ss_y = 0.309876640871002;
    tmp_msg_0.ss_z = 0.6834701944029369;
    tmp_msg_0.virt_err_x = 0.9071562744899857;
    tmp_msg_0.virt_err_y = 0.14970228075320202;
    tmp_msg_0.virt_err_z = 0.39244107208098633;
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
    msg.setTimeStamp(0.0025960099710867768);
    msg.setSource(59776U);
    msg.setSourceEntity(207U);
    msg.setDestination(25643U);
    msg.setDestinationEntity(237U);
    msg.ax_cmd = 0.084058973704076;
    msg.ay_cmd = 0.01080285447511975;
    msg.az_cmd = 0.6870540759563285;
    msg.ax_des = 0.27398045641673285;
    msg.ay_des = 0.537633548313972;
    msg.az_des = 0.4188813680927005;
    msg.virt_err_x = 0.9518238626182433;
    msg.virt_err_y = 0.6060399708421854;
    msg.virt_err_z = 0.21048990264005818;
    msg.surf_fdbk_x = 0.16167668370266008;
    msg.surf_fdbk_y = 0.9365724683692397;
    msg.surf_fdbk_z = 0.7612515101275662;
    msg.surf_unkn_x = 0.7211466692599119;
    msg.surf_unkn_y = 0.14444798199939413;
    msg.surf_unkn_z = 0.5957770105503646;
    msg.ss_x = 0.6004895072935782;
    msg.ss_y = 0.9892470397240846;
    msg.ss_z = 0.20098459838801752;

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
    msg.setTimeStamp(0.8270036515065717);
    msg.setSource(13176U);
    msg.setSourceEntity(59U);
    msg.setDestination(37479U);
    msg.setDestinationEntity(100U);
    msg.s_id.assign("MDVDIZXUTRWYFOTULJAAOJSWMAETVZQPISTNJNQLXWZKE");
    msg.dist = 0.8598016965418632;
    msg.err = 0.7229548073449686;
    msg.ctrl_imp = 0.6127228094055697;
    msg.rel_dir_x = 0.9428409741154565;
    msg.rel_dir_y = 0.3613050561843585;
    msg.rel_dir_z = 0.7951792657446928;
    msg.err_x = 0.9251828828472577;
    msg.err_y = 0.536780756707976;
    msg.err_z = 0.10906007289868036;
    msg.rf_err_x = 0.1962578759750977;
    msg.rf_err_y = 0.5643996060344952;
    msg.rf_err_z = 0.4940989236406905;
    msg.rf_err_vx = 0.40600386510652864;
    msg.rf_err_vy = 0.10684116801469634;
    msg.rf_err_vz = 0.7604214537173113;
    msg.ss_x = 0.8590532592098207;
    msg.ss_y = 0.5271319302180115;
    msg.ss_z = 0.9762061938936133;
    msg.virt_err_x = 0.4017713439343743;
    msg.virt_err_y = 0.8448665606446453;
    msg.virt_err_z = 0.5575234559942949;

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
    msg.setTimeStamp(0.8217903883375117);
    msg.setSource(14808U);
    msg.setSourceEntity(114U);
    msg.setDestination(22869U);
    msg.setDestinationEntity(80U);
    msg.s_id.assign("MXGPHVOYQQANEIJZUBLAFDSMPRUWTLZKTRLJVQZDMGDXTTNUNKYNYCQIQWPXUBEWKLWSQCCLQSHWPGHCVVJVIVSALFELMSNAWAFYGQPIKMNDJFXIKUKBXWSUCGEPOZYHGMHYTIDPJDDGHFUBJLCOTDSMFAEZFOZFJXDYGYUBIDTIHMWTCGBULAAOKVNVWJXKIYJQSROERNYRTTGAHFQKBBNPSEAHHECBRPZOVRIJ");
    msg.dist = 0.8583719329625625;
    msg.err = 0.5610457497646691;
    msg.ctrl_imp = 0.10908489079644612;
    msg.rel_dir_x = 0.7831757005745691;
    msg.rel_dir_y = 0.8287454412620461;
    msg.rel_dir_z = 0.6703868032522884;
    msg.err_x = 0.13345950491165237;
    msg.err_y = 0.289158597999704;
    msg.err_z = 0.265568809125597;
    msg.rf_err_x = 0.028399989281507998;
    msg.rf_err_y = 0.5411371914486455;
    msg.rf_err_z = 0.20942707328183552;
    msg.rf_err_vx = 0.37125168688204013;
    msg.rf_err_vy = 0.22899995565110642;
    msg.rf_err_vz = 0.6174998677967222;
    msg.ss_x = 0.8041721237174545;
    msg.ss_y = 0.6470373972030847;
    msg.ss_z = 0.2413122801587808;
    msg.virt_err_x = 0.2743966368140298;
    msg.virt_err_y = 0.36366945573452414;
    msg.virt_err_z = 0.7204946277707212;

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
    msg.setTimeStamp(0.5572427765758589);
    msg.setSource(38182U);
    msg.setSourceEntity(91U);
    msg.setDestination(40748U);
    msg.setDestinationEntity(150U);
    msg.s_id.assign("BRZKDZMUTBQNJPBZSRSAANGMMIRYOBDZOHUDNOCXEFZVAHQDZSRMTSOPPKJOXPIBWYHLWLHMTENFRCQFGLCWUJAPMTYHNAJTZQSQHLVUYMJC");
    msg.dist = 0.8801909968091434;
    msg.err = 0.567487062870905;
    msg.ctrl_imp = 0.15533847144483126;
    msg.rel_dir_x = 0.5711060016977259;
    msg.rel_dir_y = 0.46732472317127705;
    msg.rel_dir_z = 0.47286472455049744;
    msg.err_x = 0.47743421626594784;
    msg.err_y = 0.6025728693942262;
    msg.err_z = 0.1824877414370667;
    msg.rf_err_x = 0.3709041440617207;
    msg.rf_err_y = 0.7968179574996993;
    msg.rf_err_z = 0.5486965032130265;
    msg.rf_err_vx = 0.1663320508372661;
    msg.rf_err_vy = 0.5439396175336177;
    msg.rf_err_vz = 0.3545575944047379;
    msg.ss_x = 0.6826541183589715;
    msg.ss_y = 0.7728001339656478;
    msg.ss_z = 0.1517771354020223;
    msg.virt_err_x = 0.8663071144443492;
    msg.virt_err_y = 0.27520840231547417;
    msg.virt_err_z = 0.9713257706022803;

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
    msg.setTimeStamp(0.9861248146643194);
    msg.setSource(44609U);
    msg.setSourceEntity(37U);
    msg.setDestination(14761U);
    msg.setDestinationEntity(37U);
    msg.plan_ref = 927467567U;
    msg.id.assign("UBHFSMQQYSDYCDXHOHTOSLVDPXTJFSNHUSGHZZBDCGTWKPPLQGAPOQZCBKMRDVMRKQHHCXRLNGOJIIIMALBUPZHNEWGZRTKKUASGAWNVSETSPNRVMYU");
    msg.memento.assign("KGABBOMSJXYPBNIHJHYLZKWHPAWFLOPKWRITTWHMLCKIDYYTPUIAXGZTKVKCREHKHSTZDCBNOYVSSSIPLIECQFQHEUOEYVGSMUQUCCJWYTQZDWKNO");
    msg.timeout = 65263U;
    msg.rpm = 0.5682497949486027;
    msg.direction = 124U;
    msg.custom.assign("HGVOBSAVKWNYOBZEGIMULSEXAJLWCNIMEDHNWIWKNOIPLTIPZILFJETBMAQELGTUBFAVGYHZCUCRETHQLYBRKIDVJTVNGYPKSUPUVWDJFQMLCTEHRNSRSDTAZWPUVJYJFCKFFMZECLNMKHSPHXGTKVXDVXZWAGSXXDJXOOIXYHSEDMNPOLQWRBC");

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
    msg.setTimeStamp(0.5125212486468086);
    msg.setSource(47279U);
    msg.setSourceEntity(130U);
    msg.setDestination(5622U);
    msg.setDestinationEntity(223U);
    msg.plan_ref = 42861121U;
    msg.id.assign("ZGQREMDCVFXDBPXZTZXZORJTYJJVSSDOLLYPXBXNIBVRJEKFVRTIGYLUEXCOQWFANSCHOUZDOVKXQWATRKYPPIZUGIDXFENNQBWJM");
    msg.memento.assign("HIVWSJJSRQNRUYABKTGIESGIJYYVUUQMPPQLFGXEJGQGXPPXCAIFPTWAOXTCDJMPVAFFJZEECXBVMTHWNLKTHCNYJFAHQPVZCIRIIHKJVDXKQKRVYZUUBRGWLHKOSNBQDOHMAWWMZDDLROWYMFPBMZAQVATXILXOBNPEEJSDRTFRWNCKDEUYGZTDCNARBIVCGSCJZOSQUUAKLCXOEENVMYFFZUXDHELBNOTOUM");
    msg.timeout = 46041U;
    msg.rpm = 0.2947211722786447;
    msg.direction = 181U;
    msg.custom.assign("ZLLPKKLCOGDHCBYHFNNQLSODLMEHHFYOCWHWXEIGMOPZSHVXTCBLFBYWGOITAUEOHUVRNGYPTBJJMEVXOMPPYLZBTRWABKUDPSPZUSHEMUNYUVMXLPTJEHACTSWTDUVBDQKPQMIFFLOQAGVSGVRKXJRJBZIZVSWUPRY");

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
    msg.setTimeStamp(0.9660361306346723);
    msg.setSource(11249U);
    msg.setSourceEntity(162U);
    msg.setDestination(30430U);
    msg.setDestinationEntity(60U);
    msg.plan_ref = 1277223097U;
    msg.id.assign("ZKOVCQETLKNOEGXSZSBCDWIGOJPYOPDHUVWFBOJHALQDMWJZOBLGLSUFNHRWEBXTRLWEJTAVVXFNYPOBWKHGNUWSORDJPYYNZVPUEDEDLFSIPIMEVQIMFKVYAWEYKUBHJYKUJZVLHRDIOI");
    msg.memento.assign("UYKNOXAVPQBPMKYLSIXMMZUZRJMJFEOEUSSOBMTEDEUYKGDYJANPBSIXXCOWNILLGHNHGFQVDGRRPVSPWWAASVNUHDUPYHCMLNSCQKMSUXTDOPFOALJZZWFXTWGQYQKROGGNBTBFHRJHOBRHBLNIRFLYVQYKRCSVFIEZXFTTLSWFHDMNETKJXUXOJPGBCXAICDGFVVUMDBNRKTJJKPMWVYAICBICYQZJQZKQEHLH");
    msg.timeout = 37045U;
    msg.rpm = 0.1348868506550972;
    msg.direction = 233U;
    msg.custom.assign("AHRJHXLJJACNVSOPDZUOVKLPCEGOMFKYTVBAPTQWGBNZEXWOBSVVHMBTBB");

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
    msg.setTimeStamp(0.27972133622990325);
    msg.setSource(41342U);
    msg.setSourceEntity(101U);
    msg.setDestination(7976U);
    msg.setDestinationEntity(61U);
    msg.formation_name.assign("SOXOLTTLKNFFVJTZZBQQWPOTWZZXLLVQHGHYGPLXVXIOCWFINJQRDMSARYGOABWEAREVPGGTHWXBLZHYTRPFOUTHYNMVPRBVRJAPOYWKNHTWCXQAAIXQMUPJDRAMMTCTIAHECZUDDJQUDMSFMLCELYSOUBDHGOURQIKJEZPXAFHSNZMGUAJEZBNJLEIBGCYCHCVYFQSIWDKNJNYKYEWKSMFKWQMOJI");
    msg.type = 126U;
    msg.op = 106U;
    msg.group_name.assign("OEPFNBWGYEVTVTJWGDKQFNWLDRJHQXCATZHVULRAXCOFHJSDASWOKZSEXLWSZCMKSTHBEVTAIBTFXKIUWIEBMZJGPXNGDRMUFEKGPOXQRCZMJHAZRDQMNBFMZTXXVELYNHBQBMTFLURGSWVQFYWKNNPRGAABFLZCXMPIUOYKIFPDNEYDSCLNKIBUSADMYUTRCVGHUYCCPIEIJISZJVPIVWNOLLAO");
    msg.plan_id.assign("HGNFAPBTMYZCHYOXDQNYRUPPDDPISQKTQIYHYMETLWDHLDHGFEFZHYLEWTYNHHOAEVBWSASUTARWDJBZRKLSXUOJLOZQCNZAYKROBNSUELNAWWBBCVAOADGQLJXMYWPEOMHQTXBZNOSUGMFPKMVKJIEGXZNMOKPTOP");
    msg.description.assign("XTSPFDUOBECPXLPGFHSDSOWENJSIAJUGURWHTJBYSZFOKCHNCHXGNTYZQCNMGZIMNWRVVDRPR");
    msg.reference_frame = 61U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 32374U;
    tmp_msg_0.off_x = 0.8822861902863606;
    tmp_msg_0.off_y = 0.08384865153367449;
    tmp_msg_0.off_z = 0.3615951858523987;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.012199985005920788;
    msg.leader_speed_min = 0.6755224587531371;
    msg.leader_speed_max = 0.31546928949216724;
    msg.leader_alt_min = 0.20279057501251385;
    msg.leader_alt_max = 0.07440623932355717;
    msg.pos_sim_err_lim = 0.7910507794158602;
    msg.pos_sim_err_wrn = 0.33822828478427247;
    msg.pos_sim_err_timeout = 32869U;
    msg.converg_max = 0.8629442792011824;
    msg.converg_timeout = 24820U;
    msg.comms_timeout = 54813U;
    msg.turb_lim = 0.04555940990193319;
    msg.custom.assign("ZIEVIUKXBUZYZGYWQLBMGQZESIFIJFJLCSDGUDPBMXUGIBCOUGZTGLWKMPAVEIFNESVBHKREIQQAXQSIAFZPRSXOOPHDYMSYNCTEXBHHHWFWRVJPMYPVWRBLAHKMUYTSJLAQTLVMTVGVSHJAFNFHQLODMZADUZQCCXCLFALWBMZJRUTREWBOKTYSCFIDDTONGRZCEILXEAFOKVPONWQJCVCMDHUGU");

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
    msg.setTimeStamp(0.04858984482046813);
    msg.setSource(31483U);
    msg.setSourceEntity(90U);
    msg.setDestination(53025U);
    msg.setDestinationEntity(146U);
    msg.formation_name.assign("PNPTSZVWIIXVBWAUZDURMBGXWRYFOCEZHPGDHVAGONEWYSHEEUIWOHLLPYUVJAJHLKQCJDEVKFFAZSUJAFHTDBSXMCKWVXEJWYFYONGFGPDBXFCXEMRVWXULBZHUCNTAORRIXGZBSUKAYIHMTOMUYNWLZQODMKCFRP");
    msg.type = 45U;
    msg.op = 196U;
    msg.group_name.assign("NMGAHTDWJCQUCNMLEOLMVTEEAKXARCTULFDDNTKFOPYNSNXLAUTGAEKSFPVPQKZKXGZBJWWQWACIX");
    msg.plan_id.assign("QLRBBRJHITSCOAFXENDAYVXUJYNCTKVUZBUEBFSJLODQIFDUVPWFGRTWKMKDVLAEGZLQNLJZDSXONXNEGJIIKXYVMAKUOLUPNTTVYWZDWRXLONKUJJEMCPGQHWZCIFMIUUSFJPYSQSYMPLQAQGLVMBKJRFQXRCAZNSAHFIKNDRHTXRXGVHFCDSWVHOLEGNOJQPISURBWVMRMMWATTIHGKIBPYAXOGZQTE");
    msg.description.assign("CSAWPLKMROYFXCNFSOHWHRYRPZJLQXRNNTJHAFWDKCXWJJKZSEVKTSOYCTGBYSGMDLDVMBDHPJIX");
    msg.reference_frame = 182U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 17958U;
    tmp_msg_0.off_x = 0.06781423633165118;
    tmp_msg_0.off_y = 0.37075902936811567;
    tmp_msg_0.off_z = 0.4193351136224279;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.7885043001909734;
    msg.leader_speed_min = 0.5551561274447068;
    msg.leader_speed_max = 0.6622567800819834;
    msg.leader_alt_min = 0.4154553620391178;
    msg.leader_alt_max = 0.3530587626578061;
    msg.pos_sim_err_lim = 0.3840196282658749;
    msg.pos_sim_err_wrn = 0.01976998649496231;
    msg.pos_sim_err_timeout = 59577U;
    msg.converg_max = 0.8236415688577737;
    msg.converg_timeout = 60379U;
    msg.comms_timeout = 29029U;
    msg.turb_lim = 0.8373894672903287;
    msg.custom.assign("RSNEUVNDBYISXCABDQZYZVOQDHEDPRPUBFRWMMRFVUJFXSWHXJIXQRNQBEDLYNGSTZHWFDNMXMUECSZVXIMLGVGWTOJOEJMIOYTNKYPZQDFVNMHIJPLUUWUIXWTRKLWFRSWHAMVHCTICBENPKLKFYASHCVVYAZKCAGOPSQOCDZOMJQDPGULCKGIOWLAEZANHETIXZAQFGUQFCDROTBXEYQLLTJM");

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
    msg.setTimeStamp(0.6045923554566212);
    msg.setSource(59492U);
    msg.setSourceEntity(51U);
    msg.setDestination(36620U);
    msg.setDestinationEntity(85U);
    msg.formation_name.assign("PUYGMMRESWXZQPPOLNQDEQOWSTKVTXCONTHAOLUFNTJDNXOZYXGMLNLGUCIPCXGBYRSQBNTBZJUEFHAAIPSNNHKHVCPHCHPBJBIIAQRYKHDDRRBTUORILTKLCXHFFVYEGVWDMFQJVRFDJQTBXMZGVWMKVESMZAZBFQZXAVEZMGZECYYPPWWXJYRNYDRAHDOWAYGFKJEFLXAKIUISSJVBBQLUGWITDOZAJCSIWCULKSPJRTENOWDKUSG");
    msg.type = 50U;
    msg.op = 37U;
    msg.group_name.assign("LUGBIDIPWFZUVDBFIXKEOWTULLPPDALTLU");
    msg.plan_id.assign("QEXNSSVRLDVH");
    msg.description.assign("AVVOFKISRGAJVCEDTURQLEANUYNKNFDJSWJRVTQNJCIKDULXPGMGBWSJYHFZBFHZMQYNTIOWINMAUUFJXBZTZIOLHRTPJIXASVIPOCMSOSYHQKEQGUXHCEUDXMRUGWLXXAWGGGZORLQSZYMYCYARPMNJQTNABMCIPKIFSSOLDPYYPBTEBXPVQCQHYNEFXEHBE");
    msg.reference_frame = 65U;
    msg.leader_bank_lim = 0.5681839099395098;
    msg.leader_speed_min = 0.8434191591086811;
    msg.leader_speed_max = 0.23352013363266888;
    msg.leader_alt_min = 0.7150856408241647;
    msg.leader_alt_max = 0.42074695040295307;
    msg.pos_sim_err_lim = 0.5235157542211941;
    msg.pos_sim_err_wrn = 0.5600284311662912;
    msg.pos_sim_err_timeout = 61355U;
    msg.converg_max = 0.7255876895324272;
    msg.converg_timeout = 52979U;
    msg.comms_timeout = 17037U;
    msg.turb_lim = 0.3330560667463206;
    msg.custom.assign("FVNQONYORZTWVMAEJAZHLTKCWCORVXXTGPEFNDNGPSUWLQ");

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
    IMC::Memento msg;
    msg.setTimeStamp(0.062397657333162715);
    msg.setSource(7335U);
    msg.setSourceEntity(72U);
    msg.setDestination(13317U);
    msg.setDestinationEntity(60U);
    msg.plan_ref = 732006211U;
    msg.id.assign("UFFSUNAAEFTVURPDPJBKNBIMVXJDIVESPFRUOILTQZTHVUWOHNVDHXANELIGRJHZJOLZRKORNMTUAJEUIICZGOHMSTEDIHDUADGCWEXEPQAZIAJSSMBFNYVAPBYOGJTYPRQQMXXXRMJOCKYDLETGCNWCOLYQPMPVPQQX");
    msg.memento.assign("GGBKHJKBWEUPIAQYLDOOXPWCTEXCNJHJLSEWTEPTQIHQHXOLPRXCOUBKJOYZMITHKZXKHADFFBOPKYIWCDBUUWJKYBGDLQGPFDLNTZQU");

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
    msg.setTimeStamp(0.18305028350048114);
    msg.setSource(19083U);
    msg.setSourceEntity(100U);
    msg.setDestination(43223U);
    msg.setDestinationEntity(241U);
    msg.plan_ref = 2646387592U;
    msg.id.assign("ZVSURXGEMHPWIWLFRNJOJKSGA");
    msg.memento.assign("PUOPDSVWAEVXGVDBYYMFMNJKXBYAQGSKYZVERRBAHYIXZZPTZLOLQTQSNMRZIDHWFCCRZAGLRDBRHGDEQCPFI");

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
    msg.setTimeStamp(0.17947904869623654);
    msg.setSource(34U);
    msg.setSourceEntity(97U);
    msg.setDestination(5863U);
    msg.setDestinationEntity(146U);
    msg.plan_ref = 106302082U;
    msg.id.assign("TFKQHMZBSRJRGNDNJTWZBIOFYMLCPODFTDWPFGWWJIBDSAXOFEQKFOTGAFSTNPLAPHXPLTFGCUJXSBAESZVIGYMIUDZXOJBEAHUDVHVNOPLLVABTLIMTXOAFNDIDRYWOXHEZSZCJSINSJUMZ");
    msg.memento.assign("IBKSNPTUJVBNNGDPCSGWMWFOYFVJFWVYMQDKLJNEGEUQPCDMAWBRIOXAMAYZVROWKDPXADLZWJYVC");

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
    msg.setTimeStamp(0.06927218517787814);
    msg.setSource(44820U);
    msg.setSourceEntity(74U);
    msg.setDestination(18714U);
    msg.setDestinationEntity(44U);
    msg.op_mode = 74U;
    msg.error_count = 220U;
    msg.error_ents.assign("JTDNCIBZEAPOWRYVGYOKCYRWPFUOINFHKMEKTMZQIJBSUEGUBQKXCRKQEOTWGDILMILWLALANDWMDBRVRERXLSEIBFWJAKSIMOLNSZNSGZTPBFHYPXHYQGXJAUZAVKSLHCAMKTJJTBIOTPYZXBQXYYDRALZAQPCPJYIRJJIXQNSGQVMDKSVUJVHUAUNMGTLXCHWNVCTZXGDOOHPYGUFBHPDFQZF");
    msg.maneuver_type = 53329U;
    msg.maneuver_stime = 0.022964573299373736;
    msg.maneuver_eta = 2575U;
    msg.control_loops = 1266328489U;
    msg.flags = 34U;
    msg.last_error.assign("RGOIRTOZDNHKNSOOONIQNYKJDKSWXKSMPZONNAKMUFILRVDBNLUKWHWEPUACRBYLCHYYBCZBLUHTTXCIVGAHNJXQDVXWSIAMVEA");
    msg.last_error_time = 0.9724580027016086;

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
    msg.setTimeStamp(0.6021646018050011);
    msg.setSource(4311U);
    msg.setSourceEntity(27U);
    msg.setDestination(50807U);
    msg.setDestinationEntity(134U);
    msg.op_mode = 189U;
    msg.error_count = 73U;
    msg.error_ents.assign("YUCMBXJIBQMIDSBQCXPWEWNUTEASDYZQOBKRBRZACIRXTCANMSSGRXFEXTLPAMEAQNYCJITLCGSOJGFJGEPMIPAWTYDIRKNHJUWCMLHMTXSSFDXRWVFFEOYKJMEHVMEQWPYQUOIYLLQVJBFHLKBNZNGUFNGODOCPTVHAAPKHJKLHOWICSAGBIKDUVNBOWGGEDPKNROZLJQRUVFUDJHDYHZZEXRVZOPBDLFVQM");
    msg.maneuver_type = 13238U;
    msg.maneuver_stime = 0.9845249534400315;
    msg.maneuver_eta = 44543U;
    msg.control_loops = 4224959620U;
    msg.flags = 95U;
    msg.last_error.assign("YLIRVVUMRYRDTGFBNIXXVHATSTCSWDDNFXDVAGNIUCRBZQKQEARPOUPBESG");
    msg.last_error_time = 0.023014974082211426;

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
    msg.setTimeStamp(0.26305209530146134);
    msg.setSource(1196U);
    msg.setSourceEntity(117U);
    msg.setDestination(40933U);
    msg.setDestinationEntity(22U);
    msg.op_mode = 247U;
    msg.error_count = 237U;
    msg.error_ents.assign("RGECWQJWRUDSUJLXHRIGVXKQANFYCYZMTCFPCUNXBYBMFAZZNYAXVLWRDRIAZFVOATBPLXBMURLEFKDLFNLKSEVLVPHVWCWTZEZBGKLBQZVJKHIFAPVFYESOXTQHHSHMOQKAZOPCKRMYTJXYCRGTQNWMUOBAIMSIKUJNSZGNOLITHIRTFGEGEOHMUBIUCCVJZAGNKRGDXOMPDOPDODHNNTSKIPUQWWBLTHSFGSEQEJYSW");
    msg.maneuver_type = 9597U;
    msg.maneuver_stime = 0.04581399316921797;
    msg.maneuver_eta = 11026U;
    msg.control_loops = 346415845U;
    msg.flags = 181U;
    msg.last_error.assign("FVUNDUSAFNPPGTFCVIFJQGRYTPCRWBAXRLEIMEDMXTSAOKRCWVSEAUIOWUHNPOYGBXBWECQXHCODM");
    msg.last_error_time = 0.05244834025822076;

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
    msg.setTimeStamp(0.6200382845496372);
    msg.setSource(65376U);
    msg.setSourceEntity(88U);
    msg.setDestination(16580U);
    msg.setDestinationEntity(125U);
    msg.type = 70U;
    msg.request_id = 6662U;
    msg.command = 98U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.plan_ref = 3316594196U;
    tmp_msg_0.id.assign("PVJVMNNMHZGCJXGQJYSWDROZVOOMGDCWBUPZUWHIAAQAMZONKKTYKGVFKCUVXELEPMMPPLEAEBLPBRLUFFMZGOTPOJEDTQHHHJLISYWSNLGVRXSXFBEZJCQAPHFOFKCTQREAQDNGLBTBCCVILEYUULDDJGEVRBAQAWYIKIW");
    tmp_msg_0.memento.assign("XZBMMBWEWKFQOVYMUJESRXUEEBQVSKRHTYRGBIT");
    tmp_msg_0.lat = 0.39231962045131596;
    tmp_msg_0.lon = 0.18918288112360904;
    tmp_msg_0.z = 0.7813536617500096;
    tmp_msg_0.z_units = 223U;
    tmp_msg_0.speed = 0.1790423874601279;
    tmp_msg_0.speed_units = 134U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.3697957770264041;
    tmp_tmp_msg_0_0.lon = 0.16572699116515244;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("EOZKIFXNQMFPGJQVRLHQNKCE");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("PSAONELTOQDZUVBRHJFSIORBAODZBYYJAGQGOIFKTQQMUHLXMHPEVIXAOTEFMWCBFNKYDLCJDMSETLZXQCUVERPNWKHVGKCRFWCCLGPVUZUEMUGDOCZIJULHNJWYZFWKIIXJUNBSQQQHYSBHCXDTHSZJHFMVAAWHWSBRLLOJXXVLABNGNSFIAEMDUCXMKYZEERFPSTGWRFAYAINMGGWDKJZGTPNTYOID");

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
    msg.setTimeStamp(0.7609551538442456);
    msg.setSource(6995U);
    msg.setSourceEntity(77U);
    msg.setDestination(13018U);
    msg.setDestinationEntity(242U);
    msg.type = 144U;
    msg.request_id = 34966U;
    msg.command = 109U;
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.plan_ref = 4046202894U;
    tmp_msg_0.id.assign("AXRWNEUANVEHGCZOLYUALPWPFHYQOLCOZQHDTTCRSJDAUFPRDDUSOOQTZUQBVBHWJMZJKATYQVGRFDUWPWQDZXFTHTMPEJAHQNYIFYZVXBHEEXXIKQELLBNYYLWIVFLRRPPUGGDMOODHGUXHMGNXJKESSWXKQBTNIIRBJZKCFJCL");
    tmp_msg_0.memento.assign("WAKLDHONIFLHYBCESBMPUYHKBKCSNVMMXCELXTRGZIHGBMKECADOVALJRBUYQAGWTXCWWAJSOVLSQLZQOVFSNUREPRUCOTPIUPKBDYTYIAFLZCEWFFNPGLJWNJDRIZOOZMATKDXGRNMQSNGSDULKERUNEOQRADVSWFHIXNQJZIGMIVGFQJQIOJQGBJSRCDHATUVDYAQBHRUIOZXKTPFPYHZGYMWMFNTXDPVBYCHJXEETFZUCYPTHVPW");
    tmp_msg_0.group_name.assign("CEFBPRXTHWYYMJGIKKHQLFZUGARSEAHSJEURSZGLKEWJBVOHPYWLVFDPDYJWPEVJATAVCEAJJVPBXUMQZLOJQHHKLMXYRVWSLKLMCPQKDQMWSHGQEQAORFXYCONZEIZSK");
    tmp_msg_0.formation_name.assign("PRCZHLKBYONRUSBJMGXZKPFLGUACIJBEAUYQNLMDUORCHGSVABBJFTOYHLYZRMEUWHIU");
    tmp_msg_0.plan_id.assign("CFHTAGGWMDKPJRAQOOXAWJHRLGVPHVGAPQYIZNIEJHPGKZQVCCNQCEWUJNFFYXWJZFEIKSROVHTUOZMFDLCGHJ");
    tmp_msg_0.description.assign("UEPKBBOIAYQMPROECQGGRXROGKNNTBAHBPMBFXBXXLJMXJFVEGCAZVZHQQWXYPSOZZAEWRISUYNQVCGCWVMAKQYWWFAULMPNLVAWIQQZKIEQYCDMZYHLRWHJANGSJCMQKLIDWYXEDAIIPKOTBRFJCIUEFTUNANUULGVPKKBNSOGYZDLDSTOGZOETTTOBZDELSHSVXUCHKPOFFIFUVJYKMSRRDSZWRR");
    tmp_msg_0.leader_speed = 0.23220359908651123;
    tmp_msg_0.leader_bank_lim = 0.09469105535658395;
    tmp_msg_0.pos_sim_err_lim = 0.22862269524671197;
    tmp_msg_0.pos_sim_err_wrn = 0.002819050175853377;
    tmp_msg_0.pos_sim_err_timeout = 34901U;
    tmp_msg_0.converg_max = 0.8367053241587225;
    tmp_msg_0.converg_timeout = 8408U;
    tmp_msg_0.comms_timeout = 27766U;
    tmp_msg_0.turb_lim = 0.7388004771610651;
    tmp_msg_0.custom.assign("DJNBSRUTORXDATBFHVMGYXLWPJPUOSKNPXCCPIWQWTMMBLHMZXKUDNXVYFLXOURKUGSVPNSSBDCFNMVLASFPAYXTDTDQPVCEOBXOIMQYGJTRIWFECHGVKSDDKORYGFBCXHOUSEQZLIZTVGPBDNZUORWNATLTSKBEMNLHEIKCIHKWEBICRJYQKLAMYFGFAWZYU");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("KOMNBCLBVUPUWMHQDTTSFORAIYXYFBIRKJYDEDHTFIVBJXUZKRNVBPGQFPIOSNNAJSZKFOCQLIMZEFBEVRLVFTLJGWWRDUSUXVHEGRXJSMAANU");

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
    msg.setTimeStamp(0.2339372491398558);
    msg.setSource(3021U);
    msg.setSourceEntity(168U);
    msg.setDestination(5402U);
    msg.setDestinationEntity(196U);
    msg.type = 55U;
    msg.request_id = 22713U;
    msg.command = 77U;
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.plan_ref = 2114362599U;
    tmp_msg_0.id.assign("ALYKGBGAODGWDPEZXIYRYYCAMJXAIXLSNVXRIHQTCSSXDJPIWJXHXBKBQBWSRHUDYUNWZJKBHRMWZFS");
    tmp_msg_0.memento.assign("UUAZVPSYIPTELXFMRBCGFJYNSEYQTAKDSXQIKHJFMQQNZFXRKCXXTJRIEBEOQTDAGCIWGGADKAXGNVNYACVFVWJWMFUTUOPUPRTDUNMLLGCSJJQESOZOJIANLVIWMDQXHVYSAYZTNEHEI");
    tmp_msg_0.timeout = 64525U;
    tmp_msg_0.rpm = 0.578053946500907;
    tmp_msg_0.direction = 27U;
    tmp_msg_0.custom.assign("TJATHZVKFRAXQZGH");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("VGULYHNCDBKMQLCSEUDWTWJFQWVQFGICMROSPHMDYOYFWTALFFTFHNPVPPQRGCIBLJSNIMNJQA");

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
    msg.setTimeStamp(0.962960672337954);
    msg.setSource(40772U);
    msg.setSourceEntity(50U);
    msg.setDestination(58104U);
    msg.setDestinationEntity(41U);
    msg.command = 191U;
    msg.entities.assign("KJMPSJNQCAOVAIPXZOXHRDBHIHLTESMCAVHAQTMLNNEZKVXQFDTOEWVPHFNTOESFMUDNYCOUNZVMTLVJVHCCLFGRIIDNIEHAJMXBDZRYDGZYYWZLWGYZSQWPTKJAUKPOGAUCFUKWDWTUCPOJRQNYSJWKPNEJITWSIDJLCBICXVHFRG");

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
    msg.setTimeStamp(0.9305518618026507);
    msg.setSource(22694U);
    msg.setSourceEntity(52U);
    msg.setDestination(35917U);
    msg.setDestinationEntity(143U);
    msg.command = 123U;
    msg.entities.assign("IHIZLFGZOZUJYXVUGUHJXYXWYGTSUJAEHQSBCLTORRWDDENGNBWHMKGXGUPTHANMTMLBTEWPIQFEHOCXMBLRCAOVGCQKYJUKMCVKAVBMURDAWRCRIWEAFWJSMYLZUFKQLPGRQCJPZANRIETSOVBQSOIKGNTASLDSTWDBXXYWJOZFYRVZMTCEKVPPFFNPZXAIRDT");

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
    msg.setTimeStamp(0.8167833049023967);
    msg.setSource(16030U);
    msg.setSourceEntity(123U);
    msg.setDestination(24830U);
    msg.setDestinationEntity(40U);
    msg.command = 213U;
    msg.entities.assign("CWMYIMVPBIOMUIHYUTFXDFNKVGOVORWEBRVAYAUBEPMMTOGUCKKURPIQWZZTIAEVOUAMFYSWYTYADQHRZVJDZLKTFTLAZNEGYOHPBFQFHBCTJFEKKRADNMRSOFNISNGQCWWHWAFUBNXDLNGJW");

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
    msg.setTimeStamp(0.39740555095742536);
    msg.setSource(37831U);
    msg.setSourceEntity(42U);
    msg.setDestination(47226U);
    msg.setDestinationEntity(107U);
    msg.mcount = 120U;
    msg.mnames.assign("FEKFXNSODLWICPNXGEICCNJEEEXAAMKYLZMXPUGBZOZROQVNPCOGPGNLOTYTDMDPJGRXSMJSDQVGTZUHNZVRUJZIJBPUVQXKSWVTMRHEADUSHIIHVUUXZLBTOCIKTKJZKSKFLKJDTTMPQDYASEYNJVAHBBAYUBNHQRVXWFMQJWIWRMQMRVUWWCLMQFYXDOWCEQ");
    msg.ecount = 155U;
    msg.enames.assign("BCRFYXRJPJURUWFNAHXTXIQISUKWCKKFPWYJMTASNPKMBXODFRIREFWMSMZTOCXCTDZNVLWRAJVEEYWUEQVEGYDBTJLLXKYJXVSSTEDYTNXPHVPDCNCUVFECJZOHGAZQAOSMPFBFRHLHCSGTRGHGAWNDIQLBBDZCOIMYZGDNPZTBLOIDGQTJZNMGKPKMHWHOGAAYZRFFUK");
    msg.ccount = 202U;
    msg.cnames.assign("KHCMDKDGKHWLZVGEQFMTMWARQKOPDBFROMHGJQEGOAZUGJCYXPBWZBJRWAKMEYRHJCSBNOBZGEFXSMQJKLABXNPNRSFVIRMHIUTLOPDMIIAHEUVUCTSTSEJXJONDJXUEYROPFKQYFGYAYXLLTLQVCIZSFKUCORSIGQBNFYAENSNIZZTIYDKXPJDHUZEDYBQFNZMJGWCWRNVTXS");
    msg.last_error.assign("UYCFAKGBOYMDSLYRGOPQNSTEABRGLNXKRWXMPDBGRYZBVNHBGVQAULTJDFEWJOMRCSLDEOAIENCSLQUOCVRVEUSLJHMVXDLAKQMCPHZSXYQT");
    msg.last_error_time = 0.4593559798274294;

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
    msg.setTimeStamp(0.22165688834241282);
    msg.setSource(35585U);
    msg.setSourceEntity(36U);
    msg.setDestination(25780U);
    msg.setDestinationEntity(208U);
    msg.mcount = 120U;
    msg.mnames.assign("ZXPZBMLUMDJTJW");
    msg.ecount = 122U;
    msg.enames.assign("ASETHTTTVLXKTJXMYJZKKJIAZZFLRLSYCTEFIFIMXOYNLDGIDBAPHKKCSYVRQYOLZEBKMYCUNCRIQHTPUAWUYFLDRGPZGBNUGLRYUSHFNIUWVJWVOFQBMVQAHPBSZFEGXOONXWTVNYMCZOSJQZSAJGDUXYQAGFZUSIFADBPPFEBVAGOREMV");
    msg.ccount = 143U;
    msg.cnames.assign("IKZCLRCPQJIHBIKSTSHEDNOKVTWYVUIVHRXNYALRFZVRFHGSXFTKVNEZBFKZRMWXPRFVAISSSJEMMDTBTDKHTFLPWYZENQXXYUEADJEASCXBRYKCBAVEIULZOFMXBTPQIKUUHOVCSFLWYALEEUIQAWGOVYDSQNOAGOAQBERDOZLGJDCPQ");
    msg.last_error.assign("GRRGQNVCDDMMUJNLSHNGYHUBXTVJFXDBXESYQEYRFUSCBAXZYJDMIMPUYWHJKNQPNVJEIXVYQTXKMPCOJLKVLZSEGRNWZVXIAMYLLCOZUNGTHRHFKSONLWQIYDRLTZSUOZPJXBZQNEECS");
    msg.last_error_time = 0.7897368071882327;

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
    msg.setTimeStamp(0.5621876515496022);
    msg.setSource(46747U);
    msg.setSourceEntity(82U);
    msg.setDestination(48937U);
    msg.setDestinationEntity(54U);
    msg.mcount = 236U;
    msg.mnames.assign("BKAGVPRTMLLBIHCTTWDXWRNDJGZTWUDOJXZCIMLHKBJBHAASXLXSEIFARLIFNXURQYKNIHEPNGUFHSSDLFCYGPZEWENTCSSERGQVPUVUPFPIDGKJU");
    msg.ecount = 144U;
    msg.enames.assign("LZUYCZZRUDDNXUTWECBGIGHSQGBJXGVNTVQDIUAFHWDLLTDJYXJIUEBHQSRAKFQJKEVIOKIPLYPCPJYAEPSJXHTGDNDQXTDXTJASIABUPNNKOZQXANHICQGAEZSSIWAW");
    msg.ccount = 97U;
    msg.cnames.assign("EDCCJCSGQJRAWSKVLQVMVPKPCGXWQUMYDSUZDRWBCZTXTKSKSBREBWQTQVFEEXFLMHCYWQZIWKRSRFMLLTQBOUMAMDWXHOZZEFKFGSJEHLLIAKHFYNLVNDLDSUJHTXAKUZYSIUOUITENHYIIGAWPELJCU");
    msg.last_error.assign("ATDDQUIFGZDGHHWHAXEFGYUBTYGUWPRZPOUEINKYXMFBKTZLPXRAUVCFPKJDSIZEQINQOMXGARRULFFKMTCPVQYZKOYIHDXQAYYJABWCBWOSDDJVSWCQAZNLJMGWHEQZSNLXLARNNKCPBPBDZIEVBVSCFOOTXTHTBGZEDHLARESUMMBY");
    msg.last_error_time = 0.4289522055335109;

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
    msg.setTimeStamp(0.19252729549691194);
    msg.setSource(51251U);
    msg.setSourceEntity(100U);
    msg.setDestination(42177U);
    msg.setDestinationEntity(238U);
    msg.mask = 169U;
    msg.max_depth = 0.7174263606989999;
    msg.min_altitude = 0.3006732297748115;
    msg.max_altitude = 0.4387654014825161;
    msg.min_speed = 0.19325982586315926;
    msg.max_speed = 0.5751409537687794;
    msg.max_vrate = 0.24508512329431953;
    msg.lat = 0.9233880344737302;
    msg.lon = 0.13565061301511427;
    msg.orientation = 0.31612883157967775;
    msg.width = 0.7537324871072312;
    msg.length = 0.6589940109624504;

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
    msg.setTimeStamp(0.7511554437873622);
    msg.setSource(24480U);
    msg.setSourceEntity(171U);
    msg.setDestination(20958U);
    msg.setDestinationEntity(244U);
    msg.mask = 211U;
    msg.max_depth = 0.40070560642444564;
    msg.min_altitude = 0.31503937521614056;
    msg.max_altitude = 0.6236250361836398;
    msg.min_speed = 0.6564224077936366;
    msg.max_speed = 0.8412627671295934;
    msg.max_vrate = 0.689511221375901;
    msg.lat = 0.5977376297221185;
    msg.lon = 0.7861234270881009;
    msg.orientation = 0.29843677790331746;
    msg.width = 0.7280591661721805;
    msg.length = 0.03650451815457678;

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
    msg.setTimeStamp(0.4534541134322513);
    msg.setSource(48608U);
    msg.setSourceEntity(65U);
    msg.setDestination(46183U);
    msg.setDestinationEntity(149U);
    msg.mask = 16U;
    msg.max_depth = 0.9779904361683084;
    msg.min_altitude = 0.26851670926108595;
    msg.max_altitude = 0.7758097539403049;
    msg.min_speed = 0.2241932721516806;
    msg.max_speed = 0.06509509096093924;
    msg.max_vrate = 0.5888942304766341;
    msg.lat = 0.553541815460261;
    msg.lon = 0.7232476417547093;
    msg.orientation = 0.729641364467004;
    msg.width = 0.6441681736104592;
    msg.length = 0.851320216475385;

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
    msg.setTimeStamp(0.5494913114377573);
    msg.setSource(9105U);
    msg.setSourceEntity(182U);
    msg.setDestination(13236U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.1335804929476494);
    msg.setSource(12478U);
    msg.setSourceEntity(108U);
    msg.setDestination(15754U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.6622972380544319);
    msg.setSource(63740U);
    msg.setSourceEntity(168U);
    msg.setDestination(24711U);
    msg.setDestinationEntity(152U);

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
    msg.setTimeStamp(0.01620725961959013);
    msg.setSource(46939U);
    msg.setSourceEntity(63U);
    msg.setDestination(63979U);
    msg.setDestinationEntity(40U);
    msg.enable = 201U;
    msg.mask = 883660297U;
    msg.scope_ref = 3299570868U;

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
    msg.setTimeStamp(0.3175093686092242);
    msg.setSource(61444U);
    msg.setSourceEntity(102U);
    msg.setDestination(12934U);
    msg.setDestinationEntity(8U);
    msg.enable = 182U;
    msg.mask = 3825421548U;
    msg.scope_ref = 2351367570U;

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
    msg.setTimeStamp(0.16066868811384072);
    msg.setSource(61178U);
    msg.setSourceEntity(155U);
    msg.setDestination(20205U);
    msg.setDestinationEntity(122U);
    msg.enable = 43U;
    msg.mask = 4212295042U;
    msg.scope_ref = 2583896896U;

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
    msg.setTimeStamp(0.49035842099805116);
    msg.setSource(10684U);
    msg.setSourceEntity(32U);
    msg.setDestination(50722U);
    msg.setDestinationEntity(164U);
    msg.medium = 191U;

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
    msg.setTimeStamp(0.26414980434498014);
    msg.setSource(32968U);
    msg.setSourceEntity(223U);
    msg.setDestination(15868U);
    msg.setDestinationEntity(73U);
    msg.medium = 98U;

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
    msg.setTimeStamp(0.06952333590823878);
    msg.setSource(21895U);
    msg.setSourceEntity(179U);
    msg.setDestination(59083U);
    msg.setDestinationEntity(103U);
    msg.medium = 117U;

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
    msg.setTimeStamp(0.009691066900664236);
    msg.setSource(36405U);
    msg.setSourceEntity(119U);
    msg.setDestination(44240U);
    msg.setDestinationEntity(161U);
    msg.value = 0.6492250563877896;
    msg.type = 193U;

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
    msg.setTimeStamp(0.15610939310524707);
    msg.setSource(6120U);
    msg.setSourceEntity(120U);
    msg.setDestination(14303U);
    msg.setDestinationEntity(152U);
    msg.value = 0.3460194680447912;
    msg.type = 164U;

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
    msg.setTimeStamp(0.23265142313156084);
    msg.setSource(29714U);
    msg.setSourceEntity(226U);
    msg.setDestination(24107U);
    msg.setDestinationEntity(115U);
    msg.value = 0.948594406704591;
    msg.type = 81U;

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
    msg.setTimeStamp(0.6342136225943732);
    msg.setSource(42886U);
    msg.setSourceEntity(89U);
    msg.setDestination(50614U);
    msg.setDestinationEntity(139U);
    msg.possimerr = 0.10697491171947449;
    msg.converg = 0.5910097356404631;
    msg.turbulence = 0.24212285017480883;
    msg.possimmon = 11U;
    msg.commmon = 228U;
    msg.convergmon = 217U;

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
    msg.setTimeStamp(0.5155855051482515);
    msg.setSource(40999U);
    msg.setSourceEntity(68U);
    msg.setDestination(25043U);
    msg.setDestinationEntity(88U);
    msg.possimerr = 0.7242223790387714;
    msg.converg = 0.6651506712722732;
    msg.turbulence = 0.8685496549035062;
    msg.possimmon = 121U;
    msg.commmon = 66U;
    msg.convergmon = 98U;

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
    msg.setTimeStamp(0.14379900379487975);
    msg.setSource(6179U);
    msg.setSourceEntity(158U);
    msg.setDestination(57689U);
    msg.setDestinationEntity(183U);
    msg.possimerr = 0.4584241775295659;
    msg.converg = 0.6323310776274609;
    msg.turbulence = 0.668525466209934;
    msg.possimmon = 45U;
    msg.commmon = 140U;
    msg.convergmon = 108U;

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
    msg.setTimeStamp(0.8399316374482694);
    msg.setSource(62440U);
    msg.setSourceEntity(80U);
    msg.setDestination(31927U);
    msg.setDestinationEntity(79U);
    msg.autonomy = 0U;
    msg.mode.assign("PHYRENVMLUCRIFNWXSFOCVMJRUDTUMAIEOTMYBYUDDQCWJYHINSFECXBNZFSRZRSJNHCJWULHPAXFWHXSTJNHIPDHDAGETVPUFGEAXUMXEJTFKOODOBCGZIVQAVNHGRBQBVVOCXSGWVZUQYLOEXATLXOIVGEWQIAUSPJCRETMAQBMNFTLMPPLHXZGPZJLWSVPKKFZCWBOYKUTZRLDZAFLDBKIEGKQIJAIYTKYBBQNNKWRPCKWOZSD");

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
    msg.setTimeStamp(0.606187883560268);
    msg.setSource(35803U);
    msg.setSourceEntity(230U);
    msg.setDestination(12214U);
    msg.setDestinationEntity(112U);
    msg.autonomy = 222U;
    msg.mode.assign("RXTRISDXAECJZCJAJJXOGJYWBFVEBNLXLHDKXXROCPLMYVZHBMSZUPCZDFPAZBIUSBZKUJSWCVLQVFZRZYINQQINKEATNOSITTVWBFMDBGMEPRCRCFJWULWKXCIQPVYIDV");

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
    msg.setTimeStamp(0.9877880836614239);
    msg.setSource(52439U);
    msg.setSourceEntity(123U);
    msg.setDestination(53088U);
    msg.setDestinationEntity(90U);
    msg.autonomy = 232U;
    msg.mode.assign("GWCFHLINST");

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
    msg.setTimeStamp(0.14102782362621746);
    msg.setSource(40443U);
    msg.setSourceEntity(75U);
    msg.setDestination(22599U);
    msg.setDestinationEntity(17U);
    msg.type = 56U;
    msg.op = 234U;
    msg.possimerr = 0.01591823073387799;
    msg.converg = 0.7729853721041213;
    msg.turbulence = 0.6109514594044656;
    msg.possimmon = 190U;
    msg.commmon = 38U;
    msg.convergmon = 247U;

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
    msg.setTimeStamp(0.15142799173623267);
    msg.setSource(35163U);
    msg.setSourceEntity(179U);
    msg.setDestination(17221U);
    msg.setDestinationEntity(58U);
    msg.type = 61U;
    msg.op = 106U;
    msg.possimerr = 0.5889530956536744;
    msg.converg = 0.87671263045115;
    msg.turbulence = 0.5772520665458949;
    msg.possimmon = 204U;
    msg.commmon = 188U;
    msg.convergmon = 47U;

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
    msg.setTimeStamp(0.2577507249402988);
    msg.setSource(33434U);
    msg.setSourceEntity(4U);
    msg.setDestination(27625U);
    msg.setDestinationEntity(27U);
    msg.type = 177U;
    msg.op = 245U;
    msg.possimerr = 0.9919976224153687;
    msg.converg = 0.412432587315147;
    msg.turbulence = 0.5131109776603662;
    msg.possimmon = 143U;
    msg.commmon = 229U;
    msg.convergmon = 91U;

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
    IMC::Abort msg;
    msg.setTimeStamp(0.9103810657317896);
    msg.setSource(29013U);
    msg.setSourceEntity(89U);
    msg.setDestination(59256U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.5847235445764603);
    msg.setSource(40709U);
    msg.setSourceEntity(87U);
    msg.setDestination(39044U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.3719304833361404);
    msg.setSource(1371U);
    msg.setSourceEntity(246U);
    msg.setDestination(35518U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.8604152733091358);
    msg.setSource(17734U);
    msg.setSourceEntity(77U);
    msg.setDestination(25770U);
    msg.setDestinationEntity(152U);
    msg.plan_id.assign("VQILNXPKXWFLTUXMQTPSOGBBCCTOSDVZAQKNUFYEWOJBOLITRVZYPIIZEULLCLJHGSNDXDALNWBSRQCFWJRESFUXPMKQGHWMIDOZBHMGRCYLJHVTJDYAMROCLHZIVAIWXCVWZQAXSHSETZTPGJUKMTGEBXKSABMKUEGIDMHVZDVHOMUGFARCAUWYZUYYEGPQNPFKUVRTXYCARJZYHKPNBJJDNQLNYFETCORKSOWBMFAOEWNFGRE");
    msg.description.assign("CMLIUNZEEEAJFEISPBMOKKPMZEWOCUNWDQGJWUNYKVXDSYFQZBHZACJTCVMGKAGNZWPXYFRXRJGEHSLFJNOHILWWHFJXECTXWIDPLZULTCBQTVLLIUAZFPPKENRHUVJSXTTAODBKIEONDBKTIRRTXXFLXMLOAISPHCKQYVCASWQGSGZRVBANWHQUBIQYHYOOUQVY");
    msg.vnamespace.assign("CHNQNWBKFZIJYLFZSXTAFMDXABGORYVAYWIRJLFDTQGIUNIHPPVOOTXRHDCFOTMBKKCUGWIKWBBMASTGSCXBVBLLXYSBRZAIUKWTEHNVLQPBJAVNRFVJOQUPORMFWUSQGCNDFNXOBCDNGCMIEUSHAJPKIWUWESHJEYPGVZYMLUSQODXMHVPZIIE");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("IYREOZPBBVKUCOIUORHNVEXBRVJVMPURZAFGNOSFKMCXYTQILAYJLESXJTEUDAWYBMYZFQDCBCDMUXHHDUNRRGLDOTMWKZBQWIW");
    tmp_msg_0.value.assign("VYVBYGXKHARWNZACWNYIMTKOHAKTAYLUDILCNHRRPEOPBIQSSXPGXAZBAOSCXSHFFTGUPVBNMNQDPZFKSYHOHMRVCCLGOWSQVLZBHPJJOBMJRIBZDRKFFGMTIJISWVKCIP");
    tmp_msg_0.type = 229U;
    tmp_msg_0.access = 173U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("PHDPWDOEWVQACTUVIDUXQIBJRPKFX");

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
    msg.setTimeStamp(0.8915160073767057);
    msg.setSource(7657U);
    msg.setSourceEntity(176U);
    msg.setDestination(36263U);
    msg.setDestinationEntity(167U);
    msg.plan_id.assign("GYXYSLXLLFDDBHHGOMWRBGWZECPAVCYGW");
    msg.description.assign("SLBTALOSADXZWPVBTJTCYHBNEWQVAPWSNQKPQXQGECCNVLHDNKN");
    msg.vnamespace.assign("GYZQPURLTMHNLJMDZIHWOFIUFLWMUWRMFMYXIDBKEGVDKJPCSVQIJKWYFKHXNVZZEQZXPKSMTGMEGWHJYZFLBOHLDGARZEBNCWONQRRDAUWOAFFX");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("UOXEHNUBDJWIPBMISPYFMLFVQNDADYRMNJZKPUNHLTSGEOTJOXIDNNLZBWYBWSBGQYDNVKHAVPYTNWXJUXH");
    tmp_msg_0.value.assign("MYFWMVHEDEFLUCIREIGUYRONMLGPPJTFIBDIPWACAUZTDERDVQWUKOSMVLSMLXPRYBFELSDKGHHMPMXEABAQNALEXXZBIWLFBQKJSRVXNRGKNOWHGCBSVVWZTH");
    tmp_msg_0.type = 225U;
    tmp_msg_0.access = 168U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("VTOPACTCZURGGBLEWFWPUADDSCOPKKNZOYKUQSLVGDWCBPOKPNWKDGITDGZRXEWAYGFDQUHYIBHMQ");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("AXHNUHVEVRWPFMRSFKJPOQUZNFEYLZBOTPAEDHPHXCHZFMVTSDAQRWWVQKJRSUGIQYHILXPYZDIJRJDWCECUQOQSWNFYACPWUWDMGTDXGCKFAYLLPBVRNZTZUQOZXFTETOCSNHVNQKVBUSDUCBGLETHRUCSSDYLDZLFMVWVO");
    tmp_msg_1.dest_man.assign("QSQMEOTNXVSHLDZKJGCKUQWAOUYIZDQZAJEGBTPINTSYZNHOVYOUERIODLKQGMQBLZRYKSCEMDBLVFENUMRPZTFATPQYSTVVJDQYJRBAKNXRYLBLDIPZBWKUJDFZWXKOMOFPSHCFPWGXGEPBGPEVKIJPMVRACHHGBGWWXGTCJJHRHFBZXYECUOIYITJUSMNVRTQAAOSHZRWLILXYIJCCKMTVDMXQFUFXUNSSMGWKAECCOXNNEDBRHHILDFAUW");
    tmp_msg_1.conditions.assign("EZATNFTKOTVVDCCVSBCWRUESXMOSLXHICYLLSQNFDCPEFJGDRPAYDBMOETHQOKLRJKZVZCZEPCBAZKTDVXFDLPYPYIFCTYGHQRMWBUWPWMMYAZJXIXXHBIAWURWYRSIUOXSIHMIKEHUIDLRTGWHQMMTGHGNMPDIJZLBRGKKAHLOIJRAQVOGE");
    IMC::FormState tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.possimerr = 0.8370735093350942;
    tmp_tmp_msg_1_0.converg = 0.129083290115792;
    tmp_tmp_msg_1_0.turbulence = 0.48063489208127563;
    tmp_tmp_msg_1_0.possimmon = 141U;
    tmp_tmp_msg_1_0.commmon = 88U;
    tmp_tmp_msg_1_0.convergmon = 175U;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.6364749129335181);
    msg.setSource(6494U);
    msg.setSourceEntity(24U);
    msg.setDestination(47459U);
    msg.setDestinationEntity(198U);
    msg.plan_id.assign("BWZNGAFLURTRWAPCNZYEBRDKUFRKHOFKUWDTJPWXVHJMGGDLXQEVHPQKRYHCABWGGODHTNCGDKRQZPWYFJTNRCJIGBZJKOJRLCIRDXEXSFJYOPUTOIOWIAISBFNJAYUFHQWSJWXTNLSETXQBUUYXVAZBDRNKDUTLDATVYHDOU");
    msg.description.assign("MTSLNBPZDIPECLFEAVIYUUYXROHNTVTKMWGGHFQASRDXJIWAFLQVYDCDZRODJODMAJVUFIIARNMZ");
    msg.vnamespace.assign("CAAFTJIEICUSJFDJTHJPIEGYIBDNEUOYWKXGTHRLZEFQXYZHVLVZFHBFVNAKTLBGCFLUYGQKBQUPDZSSXMRSQSDDWZKXUOXDUWGKFPJTDBNBASOYHYGFIQNUNRACLAGBPEMSKOYXKVTNLPTSONQETMIVOOMLP");
    msg.start_man_id.assign("UPEBHDOZDIEUHUTNHNDPYCSMKWLWXFKQWVMYHJIGZAOBVJIYNBRMXXAPPEWGCZJGPVRCNIDIFCBFHWNLUOIAWSYVRLMBQAGAGNBJCLOEEOOMXOHKGYPQFZJKNVUZADAOVCZKEQENHAITGDWFHDBFMU");
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 71U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("BQLIPHFFVZQVHLSQZGINZOQXAUUNRNZLYBSMBAJOMGTKHMHANTRMIHJMKDONWYWIFKGJCYCEAAFRTMJGYKYZXFIDZFMKVKJTHMCOQRVEDFJLTVEEUBLZBHDRWYKLXWSOSUIQHNUAREVTERESPDRPLPGGPVZJKNLIANBTVTWXZNXLCFRYWIPQAWONQIHGGDVHMXSKFPPCVQSUBXYXLDAJJOWDWGO");
    tmp_tmp_msg_0_0.description.assign("ZQKBEJHCCXNYJYOKDDPZFNDTYKHRBCFATINRAEXDUXOYTTZM");
    tmp_tmp_msg_0_0.vnamespace.assign("DDIQLHYUOTGETRZYUPHGWQCDIKALQVFJDNEGSKAOJPYWXKEVCWCZFUNOVVMGCSPAVWDTOROLCVMINDILUCQIAZVOMRNAFGWLBDQNPTRICMUIKWQZHAYUDZOXTZVBWURTEKXCBPSGFLIEKSSWAGFVKWDIEMKJYBTSJBOUPXSGRSTBMGKCLHESMEXQFXZHUYAERHAR");
    tmp_tmp_msg_0_0.start_man_id.assign("CHNUVIHQGBVAOHNMIWBEYSAKXUAXCXNKKWLVAEWEIFEFQIQZWODJGJKASNNEYYZPPQDMRTOREUCDDZKJBNXEXHHQTFGSHOTUCDYPWBBCLKNBDUDZSMTRHCFEKSVONQKFMWFRBYZSSHNOJGGJKPDVJVIPRTLZMATUYUDBZHOCIYMUGPLMDAIWJRPE");
    IMC::PlanManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.maneuver_id.assign("OBCYFEUPUDKCIFTRYEFEXQTRFZSJILJKQQUVCLSUJBTWKNOGRVFRJ");
    IMC::YoYo tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.plan_ref = 3010916330U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.id.assign("PPRFSQBZWDJXVTDATQBMAMTYKJXYROQDPBQZNHZVNKSAFQSDVWXSOJIOFUOKNYHGPEFVDWDUSKOJMVBLUMQPEIGICIHBXXZPFAACYBVKQUUKOZRAVHWLCEYBEJCLWXFHHZTKVKURYGWLZAYMTTCNAMEXMYOBQVHCRGXITWDFMTNUPTBZNECXPLSITECFRKLJOFGUHZWX");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.memento.assign("EIKYZCGPEFERWCKUZLZNUMOKYGORTLNWDTPOGDSIFSKLFIYDDBHUCAPXPBMYMRGJOLVGPWMNBZAZSBGYNEWCGWAXKSJQVTSMVIEKIYFEKLJRZPFTEDXUQDVZKQDOEFRQRHCNYCBLFGQRJXTBSTYTHNJMSUFAANSZDBAQJIRKQ");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.timeout = 62838U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lat = 0.24094817034132288;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lon = 0.7105120651024208;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z = 0.3132020483925618;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z_units = 94U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.amplitude = 0.3624366686376892;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.pitch = 0.773383474738776;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed = 0.7416074382460461;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed_units = 77U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.custom.assign("VMQWSITQAUUYXSPEFNOELQPZYCLMUCACLOKDAQADTPNGAWKHMYDCDNNWVDJKSVETCMYRYUSSIYFQGFQXWWMIGCTTXHJJPINE");
    tmp_tmp_tmp_msg_0_0_0.data.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    IMC::ReportedState tmp_tmp_tmp_tmp_msg_0_0_0_1;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.lat = 0.6268462119266163;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.lon = 0.3155656922055876;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.depth = 0.894970604483826;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.roll = 0.6826704565227739;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.pitch = 0.5338218070458433;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.yaw = 0.1173550778715513;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.rcp_time = 0.6926352846427334;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.sid.assign("UIWDMOLUPZASLCYHQACDKUNZBSBYHBVZZFOEGYVMYITEIPTUAMGVKGQCBSZLXWLQGGCJJPUMXWBVZEXEBLWVVXFYZDCNTKDGSJ");
    tmp_tmp_tmp_tmp_msg_0_0_0_1.s_type = 73U;
    tmp_tmp_tmp_msg_0_0_0.start_actions.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_1);
    tmp_tmp_msg_0_0.maneuvers.push_back(tmp_tmp_tmp_msg_0_0_0);
    IMC::PlanTransition tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.source_man.assign("HZIDLWLNIPVCFVULGJZDMERUPV");
    tmp_tmp_tmp_msg_0_0_1.dest_man.assign("ZKLXKUHRLVQBIVGFOXVPFABQDQSJBAMVPSPZDMUBYQAHZLLXHRWHVYAPSEUJDAJOYUCFFZWCBUDIRSSLYAHGGOYPTEOSYXBTBJUQPCOWALIEXRMNOFVJDRVTZXFJEGFLIMNTSZDSMEIEHZHUGHZNMYGMXEWXHUOBTEVYWO");
    tmp_tmp_tmp_msg_0_0_1.conditions.assign("NWRMPNRCLQYEPRGLSORCXLLJYFHBTLSSXWMSIUHWXGFWUDUXULLDIDFVJUEPIZWJWHYQBFZQNUUOAMBBKJGVAAQLAPGQPCZHEZOVEUVEGFTOGLVEP");
    tmp_tmp_msg_0_0.transitions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::RemoteSensorInfo tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.id.assign("KROPOSCUNMUTPOEKWAHWJTYCGDUWPEHMXBGXMDWJRTADYZSYVIWGYNRKSAFFBAIHJVEEEQMZRFBYYPKDBIUEQNVNLNOXAFRQIBTBHLKMIJPQGRRFXHFXYKGFOLZVSMTOPDUTCZELGJDWVTXAVBQVTPBZJOSEQZNNCMUQUDJMMNIYWOBQIKGYSKTHANGNBXGHSLKFZWDHELIHSMOGLCFECDVJJRQOWHL");
    tmp_tmp_tmp_msg_0_0_2.sensor_class.assign("SLGYORWXZTABZOQNUHDMDKLCAOKENABRPSEJTMPBVJEWQBCBPVAXAEYRXDOXFAQSNSKODKFCQVFIODJWQJTZMGVZHYINUHVJBSTPMLTHPUFTFIIXCGUMGZMRHLGMQDPTWRIHAVEYSOFKFRIUEAJXSNCVQVSDKTNLNPFBY");
    tmp_tmp_tmp_msg_0_0_2.lat = 0.2712624371272435;
    tmp_tmp_tmp_msg_0_0_2.lon = 0.15209761978863878;
    tmp_tmp_tmp_msg_0_0_2.alt = 0.9059924128703136;
    tmp_tmp_tmp_msg_0_0_2.heading = 0.40482671108878066;
    tmp_tmp_tmp_msg_0_0_2.data.assign("AUGFYSWBWKCLRYCURGSMRRCTANUVLICKQSUJJUVPESLEBUMFZGWQXUCOGHFLNNMPXRWHJXIESFTFQHRSKGBNZJXILTFJOYQHMDYCEHXVWDTBZBDWHWCATTPBZKTYJLAVMSANCBMZWJPGNGPDQEIGHEZLCWRJAYKKAPRQOMADXHZPTKOJDXHDAKNVINRUVQIMZDMFSAVELDGPYESTI");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
    msg.start_actions.push_back(tmp_msg_0);
    IMC::PlanControl tmp_msg_1;
    tmp_msg_1.type = 78U;
    tmp_msg_1.op = 7U;
    tmp_msg_1.request_id = 55656U;
    tmp_msg_1.object_id.assign("GNCZZDODQDGHDERYYQAVMMOMRHULJTIOLMURMQYCFKGLYLXURDBVDKHMBGJASFTFUOEHSGHAJJYWERTMSBPABVTSNPKUVLYUDMFXGPECPWJRFFGVLBLIEJIJIKDKJKNO");
    tmp_msg_1.flags = 31991U;
    tmp_msg_1.dt = 114U;
    IMC::SmsTx tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.seq = 3565314379U;
    tmp_tmp_msg_1_0.destination.assign("OHDUFEMTUULGTQWIDASXZNLDJHGPLYGSLPEKZBYPBVKFQXWVDDGFDCWJJKMKBIMLBEUTOKRQPFEAHFROHSINZUCWGHJMBWJTVIRTTRVQAJAONHWZYXSFSHOKLZBZMCBAZWILTQYACJSOUWQNHWUKXQSEBSZCGPUJRHEVQYINTGIPURNDOAVPJNCDKXIDPQFFXIAEVRRPOLXMCLBHAYMGMZDKFTJYMXRETGXOUWRCNSECYPABGMEVQ");
    tmp_tmp_msg_1_0.timeout = 2158U;
    const char tmp_tmp_tmp_msg_1_0_0[] = {-86, -63, 50, -89, 107, -31, -91, -32, 52, 2, 103, -71, 95, -43, 2, -128, -24, -25, 88, -87, -65, -97, 54, -121, 61, 106, 2, -125, -24, -10, -44, 57, -19, 103, 39, 33, -51};
    tmp_tmp_msg_1_0.data.assign(tmp_tmp_tmp_msg_1_0_0, tmp_tmp_tmp_msg_1_0_0 + sizeof(tmp_tmp_tmp_msg_1_0_0));
    tmp_msg_1.arg.set(tmp_tmp_msg_1_0);
    tmp_msg_1.info.assign("JPEXNEDQINVGXNWDXCUVVHASKFQLZIAKLLVDFWMZEJOYUUZERSUAFGXCMJDILURMAOHKBGPZOKCMDTAPQRTRVFOOMLWGSHJAGTPOSNMTUIGUZMUDYCZEKBMXQIBZJTKJENPRHBSGRVWBMQGSSSDXFEVFBQBVPQJJPKNDWXVRHPVBCOCTLIAFFHYHCXYYMUNDFWXWRAYOKOATKIFQDYBNHTNZYRLRAWIGSZIUWXJCQPHQICLLTE");
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.07989031936649871);
    msg.setSource(60619U);
    msg.setSourceEntity(140U);
    msg.setDestination(65307U);
    msg.setDestinationEntity(147U);
    msg.maneuver_id.assign("ZZWXZFDOKNOB");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.plan_ref = 1822596687U;
    tmp_msg_0.id.assign("ELZCILOPATHATFBZYPZQXGMSAKLTKJJXXCICWJWEPJOBZTTQBFTEVIDACSQOPYPXZMCDJDFPDYHSGVKBZAXRKSMONKKUCDVURAGFHEVTLYMUDRKZJUJNWEOWVACWYMEONIXUZHQXLRCVNULNMLJHCNMDZYNSNYQRQEUMDW");
    tmp_msg_0.memento.assign("GHYESDMEPBBIMAGSIDXOWEVNSZYGVICCWGJ");
    tmp_msg_0.custom.assign("STAUAXAHEAIIAKVHSCYWPFBUCLEGTVXOSXSZTGHQUFYISZICQQDZKVLKJSDWPACEKJMSCODOXXRZWTYUEENAKZGRXQULFWOIIUVEYMNGNWZOHNOKSJNPTWDMPFTRAJSDRFLYWXKOMQPSGNZHUNLBJEADHMHBIMNVLIFRJRCYKQYFTJXLYORUJFG");
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
    msg.setTimeStamp(0.9999901772048927);
    msg.setSource(28698U);
    msg.setSourceEntity(145U);
    msg.setDestination(63163U);
    msg.setDestinationEntity(33U);
    msg.maneuver_id.assign("JTXICYTYXAPMAEEFRKTGPBNRNTM");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.plan_ref = 3116405508U;
    tmp_msg_0.id.assign("WTFNBMVIMIIMEBFHHZSWRMPSGXRPJEANVQNNBBARTKJUAGXHMBPPPFXRERVFCKEDJZQQAYKCHTQYCFZXZMGWENS");
    tmp_msg_0.memento.assign("AEPDIQRLYMPBGXWTHVNCDZYGKSVUCMGCENJAGSFQXCWCIQLUNCPLFNVDDQCLGXYSQJVJHADMVEIUYHGLMVNGDKNFRIQOTLODIHXQIFIXAZASOANYTWRUPZZLMEUPDPWJQMMEHDLOWMSWUBSLJIOTFVYHJTFIGPWCREWFGAXTKERRFUJXJUZ");
    tmp_msg_0.timeout = 24830U;
    tmp_msg_0.lat = 0.8945465325406055;
    tmp_msg_0.lon = 0.1951468770071597;
    tmp_msg_0.z = 0.8525726260203719;
    tmp_msg_0.z_units = 63U;
    tmp_msg_0.speed = 0.4671034706833781;
    tmp_msg_0.speed_units = 164U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.7505591400013143;
    tmp_tmp_msg_0_0.y = 0.5685330081020301;
    tmp_tmp_msg_0_0.z = 0.3864851913127977;
    tmp_tmp_msg_0_0.t = 0.27494254224850856;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("QAVWQJRZJWMEDJYHEMLKSYKZHJEHRRXLZXXSYAUQQQTIDRGKBMLQTCEECZSSVSAUWCOT");
    msg.data.set(tmp_msg_0);
    IMC::EstimatedStreamVelocity tmp_msg_1;
    tmp_msg_1.x = 0.9866590478556583;
    tmp_msg_1.y = 0.4863997451386395;
    tmp_msg_1.z = 0.0029397253923882927;
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
    msg.setTimeStamp(0.2901766640164859);
    msg.setSource(63106U);
    msg.setSourceEntity(117U);
    msg.setDestination(23275U);
    msg.setDestinationEntity(176U);
    msg.maneuver_id.assign("POHGVKPACNGZPXEQGT");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.plan_ref = 1637547058U;
    tmp_msg_0.id.assign("GLFXYRXJPZBUONZAQOYNWMDKSOANUEXIPFQAWXZDTDFSQTHTSYJWYDIWRLLMWBYANNGLTAQKN");
    tmp_msg_0.memento.assign("AHZUCAEXRRJYGMMTPIRMYAEJSFSJQBWOATRHJGOKVXMOEGIENSCLFUFPPHTGHBIKILWINIMVBLZQPVLBWHZBVBOQVDECKSAOFIHQXVUTLGPOENZZWRBPNGKOTXSPNTEJECDUFBUYDKJJHYBWTIJZYMYRQAOTVWUURKSYHLBXYLEWZDGZSNDVMCQQOCFHXQKZDFAL");
    tmp_msg_0.control_src = 46590U;
    tmp_msg_0.control_ent = 232U;
    tmp_msg_0.timeout = 0.007891066663950563;
    tmp_msg_0.loiter_radius = 0.584188531059579;
    tmp_msg_0.altitude_interval = 0.5814670795745898;
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
    msg.setTimeStamp(0.6824735989492199);
    msg.setSource(28722U);
    msg.setSourceEntity(158U);
    msg.setDestination(15184U);
    msg.setDestinationEntity(122U);
    msg.source_man.assign("QQRDVBJLTJXOYSJRSNTLAFKZDGPEIVDEOBXHEYNPHLCSHJLPLMHYWYVJVHAFGOUTIDTDTHQQBLI");
    msg.dest_man.assign("UTDXGDWNLLHKKXTJTFSAIQFVGQSHSXGFJAWJSCMETWAPCFCZIBPFJWTIHCHDWMWLYNMGUJ");
    msg.conditions.assign("VRBWVBMVGNIFKBQTRJFDTYKKHNZGNEIZKSTDDPTVAWHQBHNDRYXBOBMLUSDWMYMOWXEATUXHDMZLZAKNIAECROHPEEFBHXZZLAWOQJAOVLCHBSWLCZGMFKKCUNOUXIQBLGSHPYKUXGUCAPTIRKXLMWVEYIVVWXCIGZMYPDAGSD");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.plan_ref = 2328480406U;
    tmp_msg_0.id.assign("JXBAWBDUDMDHMUKQTWQVGQRJHRZILESNCIMUOFNFSJKHYOVYATPARNYCLTCCJISAMRNEGYWRKOGVBJVCOIDCVOBMSMYROWMZVDFSKPQXAFKZBGGFHYXKHCKELPZNPEHJEEB");
    tmp_msg_0.memento.assign("MBJVLDESCAXJAVCNKTNOSGTYOLROQXPJUEBJWZRZ");
    tmp_msg_0.timeout = 26758U;
    tmp_msg_0.lat = 0.6081227906472787;
    tmp_msg_0.lon = 0.4929509939947766;
    tmp_msg_0.z = 0.9208758288939043;
    tmp_msg_0.z_units = 144U;
    tmp_msg_0.speed = 0.1971401361096361;
    tmp_msg_0.speed_units = 46U;
    tmp_msg_0.roll = 0.48754985649094296;
    tmp_msg_0.pitch = 0.3532428053385772;
    tmp_msg_0.yaw = 0.13818629005491534;
    tmp_msg_0.custom.assign("BSXMYEFDHDQIKXQTHWCYUIBRZVLFDWCNYZWWIEOYGQGQHKKDBXEVKZCRFHTTSUEWSHNOUZPYNAGGNFPNCVASXH");
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
    msg.setTimeStamp(0.45824309747384717);
    msg.setSource(63288U);
    msg.setSourceEntity(204U);
    msg.setDestination(43223U);
    msg.setDestinationEntity(205U);
    msg.source_man.assign("IAAOKCOSZQTPAOPAGMQZSOWRQEKKBEGHXNTMBTANSZYCMHQCCHQTMWJYHELRJJIBNVPHAGDMBPRHILOIQMYXWLZXEDGFRJJTJBFYOFBDITPTTFFUYVPEQJKXILQDKYMFATZAYGLZPLYZLUTWGBWWXZWSXM");
    msg.dest_man.assign("GTJHTQUNUEKRNRZTH");
    msg.conditions.assign("JZOFGVDWPOZZJICYXPRNDHNEUPGFSWDOVATEDJYWWCQZULXDXDHQOICQKYTAYKTUMUXTLLVOBXEHMQXTDIPFUBCJHWKNPIKFLZBKNAZGPBFFJUHZEEACCOHSRZJCCJKRYLOKLKHJAIRNNXPBERDDXGVKBMHQTGDMXTWVEWMMRYMAVNQRVIQXMNAYVSEMANJAFHVLYBSZSILISAISYBRZPTTUGQBECWWBFVO");
    IMC::LowLevelControl tmp_msg_0;
    tmp_msg_0.plan_ref = 3862595249U;
    tmp_msg_0.id.assign("GIANOSFYNGLJWFTBGJOVPTPPHLIDMMPYKECJBHFDETBCOYEOAKZXRKXUDGFDWBDIRXKUGGCEQOXOARXBHDCISKTUKPDEVMYZQAJPXNYHFVEGXHNMAHFZSUMCFJQFHBXIIJYTKWWE");
    tmp_msg_0.memento.assign("HWKPEJFWDESSXJYAOZUPBSKZGDJMDBIVDEANJAHKLAMYVUBAEKGNRZLHRFNTHSVRFGWZFSXEEYOFCXNWWSKVBIVFFQU");
    IMC::DesiredHeading tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.2720385734473807;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 46793U;
    tmp_msg_0.custom.assign("VZUUMALDNUEYPSCBQAISGNNTPKFYATUIWNUXDTE");
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
    msg.setTimeStamp(0.30851431942982477);
    msg.setSource(39717U);
    msg.setSourceEntity(189U);
    msg.setDestination(54193U);
    msg.setDestinationEntity(223U);
    msg.source_man.assign("ZUDHAKASYSOXHTBSLUGAYDORQJFECELMNKPOBBTZDHFAONFULRVCYLUVEQNVGIKFVPNTQURUAFKNYFLIGGKIYVGRYNVKIFFYAHMI");
    msg.dest_man.assign("OLANWWJURDGGKYRPBGPWZFNDMYNSLRYLMAHNBEQMUVJXBAACFCUSXZCCLCOIENJQIKDUCDWXFFBUJNSQPYQTYRGUKLUHHAKLFFVIZCGEFELFNMJGHERVTKAIIHDPZMTEHOQGVYJWEWIHXSJACZAVSIBLTIKVHCBQEUOTWMSKKI");
    msg.conditions.assign("MGMQAZONLDXIPBUTUHRNLLTXOFBJJSTZYBTMVAMAXMDTYKXSXUZSJVZWDUKVKSIWQNCPPMLMRHLGDWOSBQDKWRNEBNJPJRIECRIUZWWIKPABLYRZXXEUUFAGNFLBFZOTGS");

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
    msg.setTimeStamp(0.008360975572078044);
    msg.setSource(36549U);
    msg.setSourceEntity(14U);
    msg.setDestination(15697U);
    msg.setDestinationEntity(252U);
    msg.command = 189U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PDLHUTCPGWEDKJVNQYGDUQFYCXJFBUTLWRLPSMCJBGJXQEYKQDBFOFDICYYCGGOIQVLXGAABIEXBNLAKSICIRXNKITNEPMDRSAURCNQJOZFYQYW");
    tmp_msg_0.description.assign("LBPFKHBTYSRNXWANRPTAVQGKMXTUDAU");
    tmp_msg_0.vnamespace.assign("IBILXVSSPUOLENEAENJFGTOWKYUZHDZSMHVVGPLXOHDQUIICMCTAJTNTQOQZFWFDIFNRXBWFIRPBGVKODHJFPPRMMXTRIKBWWDKKMELUPQHCEGMWULHPAOGQYWNAJBCNKHJTHSKGGJCLRCQIYXLHTYSUVJKRNZQTYTMSUOTCQWZRDVZDNVQPJUGZBZZVABAAUDARXAMFMDVEUXYOJFDSBLPSKNSILPXR");
    tmp_msg_0.start_man_id.assign("OKTHYBWXJAVKNBSEULUKVASMUBESVUFGLGHCYSQLHOECQGZIMSRDAQWXTBJUAYKBEPFKDGZWIIMKWQOUJWVPFTDJXVMWNQAOQFNDFAPSXRKRNLZPYKVKDJNFHGCEZISPEXGJVNQBXP");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("FMSBROMITIJRJYKDYQHBMRMUTUJUPVOBXYVRXKTGLEUSHWWAOCWHCVWPTBEDWISXBJQEUYABHQZXEDTOGLZQSIASKBEVBKFRBQNAJRIFDQPLWW");
    IMC::StationKeeping tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.plan_ref = 2915499475U;
    tmp_tmp_tmp_msg_0_0_0.id.assign("OSNDREFMETSCTJSTPAKHDGGTWDLPXOKGRAMDQNYWQRFXNKWFEAQGXJJSYDZUNZGSHTCFJAKZLJGLTHYRPITVVLUNIUZVSZMRLCLRACIZOEANRMXUKKVAWVBHCNWBQBVFSPXIZEDXICSWLQJYPAZFHXQIJQURHOIWWYNEMCECMBOWTSHFYBDYAMLUJPCPTEWOGGNVHATBPBJNBYXLUVKIKUGMSLXFCOVFFUIJOXMDDPYOG");
    tmp_tmp_tmp_msg_0_0_0.memento.assign("ZJJRARABORRANMWSTBHBVXOQJEFPKIIMCHDYDCYSMEUIOPRHRYSMUONKSHWULRTHTTENNURJSOBKVKZAYEJLUBGDAUNCFIFSITDMJABKFXZPBKQGYPGYLYTNWXLBEFQMMOZFJCZLLFMANVGAZAPDEBCUWQUKWSSWPXGPGQTYXZKLXPINCGVWEHAUYHZVMVJCQPQRHPRVFIOGSUHGBWCIN");
    tmp_tmp_tmp_msg_0_0_0.lat = 0.9365457626417367;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.4122867634734789;
    tmp_tmp_tmp_msg_0_0_0.z = 0.47826150363256337;
    tmp_tmp_tmp_msg_0_0_0.z_units = 130U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.29235439573756694;
    tmp_tmp_tmp_msg_0_0_0.duration = 43757U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.21266595835487756;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 102U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("DXWLZXUHBJHSFSGGCSAMVVWNIBTXFDXRGJDUTQNAIEZJPRAMDIWJOZRYQACFIYVOEGADUYLVPEGLPGZOCBWBYDLTAEMZSQXTCNVSTKHQYFRZXNXUINCURISMPXOBJWJFWKRGOGPUBTALKODMPLETIQLRHSCCNZDMUQBFBYS");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DevCalibrationState tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.total_steps = 195U;
    tmp_tmp_tmp_msg_0_0_1.step_number = 123U;
    tmp_tmp_tmp_msg_0_0_1.step.assign("TZXNYJNACPUQLBCJVZMDTFXZGWKQAJFXOFOXSWMIKUZDCRABNROVIMYRLVYDAVARFGTWBBOVTNIKARSNGQPUUCHEAPWQMPSKXCJDVJIZUDSZLYFKAJTXBAEGQSPEDHLLPKUGZBQKJGGRWGHSQUNYHJQOSDHOHNUZCWKOVWGSIFLDRXUTIHTVNEKWLQPMEFIWL");
    tmp_tmp_tmp_msg_0_0_1.flags = 225U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::GpsFixRejection tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.utc_time = 0.9997405481420226;
    tmp_tmp_msg_0_1.reason = 177U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.4799128304014989);
    msg.setSource(492U);
    msg.setSourceEntity(206U);
    msg.setDestination(27221U);
    msg.setDestinationEntity(9U);
    msg.command = 251U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SPFRBJERLLPAEGMACSZEUJCWPOTWBTNPXYIRWHHDHLWMFVOKUPZLGJYEMSMKFNDNAKDXRUBCDGBXGSBQGDUMONQAOTURWOXECTJFQMSMYQZZLZQXYYTQDOUODVFTUITYIZCPSIJBKRFNNJOTVHBWJJSCPBPEKYLDADNUFXCIVLYHY");
    tmp_msg_0.description.assign("RYDCZOQBVITEGNWUCEEAOIFXTMYIRSCSFOXOZELYJAFVESQACJJCQBXZ");
    tmp_msg_0.vnamespace.assign("KDXHIZUESGWRWQMRVVFEFYUFDMPLFPBRCYOBSEWYZIMTRMUETVRHDLGWTHEYZLWUX");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NEGFWTKGHKVMFZZISREVQGAYCOURHWNQMXLBZMAHGSQXMSZGUPZEDKEMUPJKJSKFBCDZYSNYYQOCBTNLFEQTWYKCHFYASILZVVUREXWKTQVSSXXIVSZN");
    tmp_tmp_msg_0_0.value.assign("CUWDWDUJNDEERGAWJBOAJXOEVFGGSYTIQKIXTTRENPNVHOFYAPTKDMOYGRBNJGYFCOIXEQISTKZVZZMXYWRPMFAHKZTQSMSCSIXSLSQQDNXCIYVUAEPJFTRQQBFWUORXQUBEDCJQMXMOJZWDZKVATLYOVHKHLPIUWJXANGCUKHVMHISQNCNZUPYIHCMKH");
    tmp_tmp_msg_0_0.type = 241U;
    tmp_tmp_msg_0_0.access = 14U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("XDZHPZOJSRURFGCPIBSXXSHHTZUOCKEHMGLSYTLJUUALVXLHVGRNVPHOOEJUIYFPBQEIWDILKRTDLKFJTWCWEISIZYWGVZCGLSHSUPGHIAKKNRLKDFMCQLNBAFYWAPJABXEVINLAZWZNBDOVOQAXHUUMFEATQGWTXGGRFSOETMAQZZBMBIPQCXTEDJHFBCKJJFPDVNOVNMCIXDJMDKZBTMCQQNBSVTUPGFYUXYEPRYYYQONNERCMOMW");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("QIYEVSITUEZDCAZUHPLPDHNAKQNKFDLQVXBONAMVSPRKEUBUMHTTBJDDUBJTGRRXPYWJICHFJLRIZXSCYGOKORALPTNHEBBQWH");
    tmp_tmp_msg_0_1.dest_man.assign("ENQROJOKFJPFXODCQJBWERPYMAIWMKMMTDTOJEXFQSTSLLTTAVZBGUDEZRZXGZJJFAAUONEKGPDRCPMWBCSFSKXBVOYNWVUPWAHKTCDZJRLHYYSBMIAISUNOCXMHGDFRZWZKLXVLKDUXRU");
    tmp_tmp_msg_0_1.conditions.assign("VNRUEUDYJLBTVCMRHAHDPEOYOOKPDTZJJGXBPZNFMKJRUMXWBRWOPLSIRBNWWLAXWKPXYZPDNDKMOIHYIQFJLKOFBQDFYXCZJSDSWEXANUUTKMVLRGYWNLIWNBZGGQSVP");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.2273487747414069);
    msg.setSource(64392U);
    msg.setSourceEntity(231U);
    msg.setDestination(5064U);
    msg.setDestinationEntity(235U);
    msg.command = 14U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("CQXCRXMXLVKTEJQYMRVBZIONEBRJORPRHQLOTTVUWQKKDDUEUHMJAUELXGLXAHDMSBONYNYWALASKVAVEMDXSCTZCCQKLGOZSBWMDPRYIPTHICOLNBIDXSAH");
    tmp_msg_0.description.assign("DIQQVVOBSBYCDJHKPGYRKNTPASRLJVDVKALRBRFETJPKAFGMOUUJCMWXUOQIDSKEJXJZXQDHSFKGVNMXALVPUAOGDGPONUUJDTXWNEAHBVSLFMVGODMCUSCRAZTWYNITACPYLNIYWZAZUTSMQOYLXCFQCFJLMFRIEZCDQWBJFVQWHZIZOTXTNIZJPZBFGFCSGQLITHNHSNOPOEETMKXBYZQEPDHW");
    tmp_msg_0.vnamespace.assign("HOCBAMULHGMFRBYGKJGFEPFUCNSE");
    tmp_msg_0.start_man_id.assign("LDSEECWLISFLCYKAWKGAJVBIFKJWRUSVEOLIKJUYHTPXTNQOUEHNIIRJEASQWEOZLQCVKBFPMROZZWPTLPDZKPFXQMAPIMYGDUGSYHCFCUAMQVBXSZJEOQVAZQZGBKFJYNJHY");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("TGPYGKMZVMLFUOKUNGYWPFIJWKSPRJDSZQAEQUUDXSFLXHKHWADGHCRANPQDAQGOIZJNEIQMUOCZVIJSFJYWQXBAKMXSMAOIRWNWVHZTCXTJFGOXACEOHRDHVFDTEBBAYTWJZPODFELXDFBOGVVXUNINBNCBJYZKBLCRORINDCTXUUKGPPRWAVYJLKYEQSQMHXMENVSCFMNHYHUZKQCTCLFRWRRYZTPUVDJAQPLKTIESSHVMBESZILIOTYBWGG");
    IMC::Dislodge tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.plan_ref = 1391965849U;
    tmp_tmp_tmp_msg_0_0_0.id.assign("BBISQEOPZEERCBLWIYOTKPWLSSPKSQRBMWJAYQVROHIQTWJCVUKPEGTMRWVLTFQBXOZBIZFUEKHIMBFCNQHODNKNUMWUEYEXVUNXAZUEHTHYZLQJCCA");
    tmp_tmp_tmp_msg_0_0_0.memento.assign("XGDLWSHAPIUFDFYREQTZCXYSMPYZYQBADSQZHLIYZXTQLMTPMOPHJWFSYIGKFKHWSUAZQDVNTXTEIKXHKJNHOQXRRKNVJCRUOPFWWDSSUUZSDRBONAKYCEBAQIYLXPTCTEAEGOGPTTZQBEBMUNVMRYVJOAKFAJAIPVHEUSOCUMVNSP");
    tmp_tmp_tmp_msg_0_0_0.timeout = 37172U;
    tmp_tmp_tmp_msg_0_0_0.rpm = 0.15352625525314068;
    tmp_tmp_tmp_msg_0_0_0.direction = 154U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("PDAXZUJZZYJVIWFKVODZLTBNWGYOPIHGKZQICQXEAMEUAETRIZGSKWYEWNGLCQYLWHHIQTXUJHMZMCFTXAMNSRGDFPIVDHEDTOKZTILXJRSOLSUOCNHPMFHDYNSBPTRJYDGLFUSWYPXJXVSRBVEVYACBKLRSSTKNF");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("YWAQFLPRCSZSCYLMRIHMKUTBAXBLISNKGNIMFABZUWOYNNPTJHVZHPXDGDEZSDOGSQODVUIADWJZTQQYTDKEOJCSSEHOEWYRUNLPVXUVUALAFCJCIHFUAMMXXTVHPGVRRLVKYDJFEOWYBCNQQZFLEDBXVXTIPOGMPTUJKUQOENMRWOSHGBJAZVRIKQPFHBWFGBWPJLZTMVIWOBXWG");
    tmp_tmp_msg_0_1.dest_man.assign("BHPLUXINUWPRSOOFBQLXKGJUZQVMGEKWEEFQIQQTRQULZSDHCVLYJIRISQDWMGDFJKNHLMFMXNBXDWAXJLGIKPYUIDMACTHFADWYSTIPJQKOASLLGROBOVEVNKGGCOZQUQBSPGBRGNRDRNSJYODEHSZTFPKEOWFZPCCZNOEVKXJRCGKNRNDUJKECYHMFPPSCX");
    tmp_tmp_msg_0_1.conditions.assign("XEHUKZAUBQNHVLRJARYQXOGPEIEZFSUYGJYLDDNWVQXSBMIYTWXPTIXTHLICWZMSSGMAZZVVLRRVEJJIFAITWFCKFOQOAXMYDGUNQTPHJKBBBIXKMOGBNPRLKSVLHOWNJZEMHRQAOAMAHULOTRKTGDKNZBGPEQYGRUQDYCYWDQOFNEVCPF");
    IMC::Map tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.id.assign("VOQZSCKNSVEJKRBEEHJALFBXEQBVLRVEFCZPDMVXWKSBIXKJICDKHEADAVYHVYIZI");
    IMC::MapFeature tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.id.assign("DLDCQWQWDTGYJPKEYWAPFIIWHFKZNOBQQKEAPZCHPXRHJLZYHKGXNZEJCEKSMOXFXLMNXVVEUDKBMEJYGIDTOPKUNTVXZXUCVBRUGYGJANXR");
    tmp_tmp_tmp_tmp_msg_0_1_0_0.feature_type = 9U;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.rgb_red = 52U;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.rgb_green = 145U;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.rgb_blue = 191U;
    tmp_tmp_tmp_msg_0_1_0.features.push_back(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::GpsFixRejection tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.utc_time = 0.8282840549799902;
    tmp_tmp_msg_0_2.reason = 192U;
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
    msg.setTimeStamp(0.21151359722045726);
    msg.setSource(32573U);
    msg.setSourceEntity(34U);
    msg.setDestination(13123U);
    msg.setDestinationEntity(202U);
    msg.state = 195U;
    msg.plan_id.assign("PGGRPMHUTZOEQHRFAPTKSDKBWWCEQNDLHYKABNKBEHXGZPVICMSUCIPFOIOYFJHMDLFBVMGHEAZRI");
    msg.comm_level = 36U;

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
    msg.setTimeStamp(0.6925392743177512);
    msg.setSource(8833U);
    msg.setSourceEntity(138U);
    msg.setDestination(22316U);
    msg.setDestinationEntity(41U);
    msg.state = 56U;
    msg.plan_id.assign("PJLJMSSUUCDUKODRGSNBWDHEIUETPVEVKFGYDEOAHOJHRHYECFIEGIOYQLHFKPFLIZMNPQLWAGONXYKNKCRZNMUZIHSULPZQLRRJQWALXL");
    msg.comm_level = 247U;

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
    msg.setTimeStamp(0.2325745636670753);
    msg.setSource(36714U);
    msg.setSourceEntity(51U);
    msg.setDestination(15763U);
    msg.setDestinationEntity(166U);
    msg.state = 72U;
    msg.plan_id.assign("DXTDSIAKWGGQUUNRRWHFJDOQXWGQKTRDMYQLPVQVIBKVEGMCJUNLOSCRBFTNFJTVLMPLEGXQJBAYCIDHXREZMOJLAWBBMZYQDWPUBXCGCTCEVFLRFMKTOEIMDYIUBKEGUFDWHZPJOSMCKKVHCQKYAPOJSOUTHATNXEEGAFQSGYZRFALHJWYVSLVZYHWIHAAEZSSOCUVZDNNKORUMPYTTWFKZXCHLPGNIMNZSIHPDILNW");
    msg.comm_level = 214U;

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
    msg.setTimeStamp(0.8109085134419591);
    msg.setSource(31639U);
    msg.setSourceEntity(56U);
    msg.setDestination(37690U);
    msg.setDestinationEntity(61U);
    msg.type = 167U;
    msg.dt = 55U;
    msg.op = 239U;
    msg.request_id = 56095U;
    msg.object_id.assign("ARRLTDXDPXGFROXXZSBIUPJKEPNBLCBICOJCXTULRADDOXXAJLKQYUDSSWJCIBNHIYUYUNRCKDRZSMAIUWFIPAQCAHVTFVHMSQPVQGSVPLBNOUTLIBGDHGVTZCPH");
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 87U;
    tmp_msg_0.lon_gain = 0.9242122312884251;
    tmp_msg_0.lat_gain = 0.5782717547346699;
    tmp_msg_0.bond_thick = 0.7218256595417105;
    tmp_msg_0.lead_gain = 0.7024171072690926;
    tmp_msg_0.deconfl_gain = 0.3465649787841868;
    tmp_msg_0.accel_switch_gain = 0.9413145398438344;
    tmp_msg_0.safe_dist = 0.9602886828104357;
    tmp_msg_0.deconflict_offset = 0.6189382221984504;
    tmp_msg_0.accel_safe_margin = 0.883162731624488;
    tmp_msg_0.accel_lim_x = 0.36141604940228045;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XBZHBXJVKGOYABOOSDPWFDXBYSUWQMESUUAFOFNXXWKTQCVXWRCHURDLFWNRYZPELYLZECJJARDVWDKDUPQJJNXDZGIQPSVLSERKCNPCGTMGRFMZHZCFAVGZAOJYMMDWTHAUEPGYINFYEMFMWWJUCCFQOKQBRRNIGKVKRLJNMLHSHBUGTTCGVIHQ");

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
    msg.setTimeStamp(0.35606788893475705);
    msg.setSource(45758U);
    msg.setSourceEntity(64U);
    msg.setDestination(49125U);
    msg.setDestinationEntity(189U);
    msg.type = 189U;
    msg.dt = 76U;
    msg.op = 35U;
    msg.request_id = 35663U;
    msg.object_id.assign("GCNGIEEXSQOPTUYOYXBABWZEUPMLLGQGOJJ");
    IMC::RestartSystem tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("FHXZXRONOZJPOKUGBTLINFPEMTROIZCPEPXGDNFHDGZRJOOQYGGYDZFHNLVSJEBZZYDISFUNVBSXMNTCIJWSVFNQUTDQOLMPIEACEH");

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
    msg.setTimeStamp(0.2408180278653117);
    msg.setSource(16067U);
    msg.setSourceEntity(159U);
    msg.setDestination(51251U);
    msg.setDestinationEntity(110U);
    msg.type = 193U;
    msg.dt = 154U;
    msg.op = 130U;
    msg.request_id = 64938U;
    msg.object_id.assign("QKQHNKJQKAUHQPNAMOIDUSXROIDKZMGIOWJCHPEUAPNAPG");
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.6591746993877459;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QAEOBYSFUFBGPXMJCTVVUIPMSFZVNVWTDGKBLAWSRCFGJCHQWOFTNTFYYMWDJCGJZWBVQESGAOKZZXOBNVACKUNXMHDXHHBERUUGVTQGSXWSIVDDRRUYIPELHWZYHOBQHCPODREXILSUKVGPEQXOOCOWUXLNWNQRHMZJWIPDBMDJMPPYOSRDREZCMTLMKKKIZTZDYBYPFCAEELQJCBAJXFYQKGAINUMT");

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
    msg.setTimeStamp(0.40666173257728644);
    msg.setSource(51313U);
    msg.setSourceEntity(246U);
    msg.setDestination(6842U);
    msg.setDestinationEntity(31U);
    msg.object_count = 28915U;
    msg.object_size = 2601248537U;
    msg.change_time = 0.3592167961730014;
    msg.change_sid = 48334U;
    msg.change_sname.assign("YNTFIXWMGRRSULBVKGSKZQEMBWVYINJNMKXPOHCBKGRRBWDEWMWMJDIKFGAODOHZUIJYACSVGQMQTFRQYHAAOPEEPYXCOKEUSGSTPFFDJQRBZYKNZLYBBQFXIJTYWIPOUVASDUCFFFJSUNCVLUEXZQBINHFGQXZSILTETCZRLOHERMHLNTPLTDMNVXUDI");
    const char tmp_msg_0[] = {5, 78, 17, 74, -8, 71, 113, -107, 35, 105, -67, -23, 13, -69, 51, -98, 40, -91, 96, 53, -12, -60, 83, -20, -37, 50, 53, 94, -73, -5, -127, -75, -24, -84, 56, -112, -98, -46, 46, -18, -116, -19, 47, -52, -118, 115, -38, -63, 10, -19, -105, -97, -89, 114, 118, -77, 59, -102, -64, -26, -119, 67, -115, -127, 69, -47, -50, -91, 70, 95, -92, -82, 107, 30, -86, 23, -106, 0, 101, -11, -19, 38, -62, -71, 43, -104, 102, -106, -112, 43};
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
    msg.setTimeStamp(0.06679757612452686);
    msg.setSource(54842U);
    msg.setSourceEntity(58U);
    msg.setDestination(17864U);
    msg.setDestinationEntity(183U);
    msg.object_count = 63671U;
    msg.object_size = 302724U;
    msg.change_time = 0.12818419269794123;
    msg.change_sid = 59380U;
    msg.change_sname.assign("EYIVKRQFPPNCASLQABMDBXRQSFVMAOXDGDYGCEUOHETNQSLGHCXIPUREJHIGHUOZIPDPUCJAPLBAQPTYLPWYSEXXXWOGOMTBCNMJRCKYYPWKNGSQOWXYNWOZIFULMFBV");
    const char tmp_msg_0[] = {-98, -105, 35, 108, 10, 1, -18, -112, 16, 50, -16, 69, -104, 12, 72, -58, -22, -48, -55, 8, 2, -18, 124, -95, 88, 14, 73, 117, -74, -7, 21, -20, 126, 10, -105, 119, 41, 2, 65, 23, -9};
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
    msg.setTimeStamp(0.2797466678636764);
    msg.setSource(52095U);
    msg.setSourceEntity(224U);
    msg.setDestination(7285U);
    msg.setDestinationEntity(113U);
    msg.object_count = 39213U;
    msg.object_size = 808573361U;
    msg.change_time = 0.896092232751921;
    msg.change_sid = 15667U;
    msg.change_sname.assign("UNXBRVGXGCWDIWBGYVBVHZJAFKXFDFTUQFRTUZFHSYDCUWMLVHANEYUZRILMQIMKNEHRFEHOQNSLHVACKJPEKRONBIJKIODOQHKRDPVWMQDBZYTEDHULMYIYFNTHPRDNLYWMUJGTSIXVAJUCJTOBLNSGQYKJTSQMWQKTVZSXWALOJLOCZO");
    const char tmp_msg_0[] = {81, 113, 115, 89, -128, -19, 84, 119, -6, -62, -102, -71, 106, -107, 50, 51, 73, -79, -119, 77, -11, -92, 115, 29, 104, 44, -121, -102, 84, -103, 12, -67, -97, 77};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.object_id.assign("PBEWMQQFZBMFFCHKFJUAQOMHMTNCVNOVSXZPKUAUHIFHQDCGTEJIPEOYCQIVNVDTGMG");
    tmp_msg_1.object_size = 49147U;
    tmp_msg_1.change_time = 0.7279595037097648;
    tmp_msg_1.change_sid = 47597U;
    tmp_msg_1.change_sname.assign("QZXHIGVWWPAWHRFFIGPPXGROSZJXDJBHXKYZZACKJDFELSQPDWQOHVLFPNQIOMTGJAVHUMTNKWONUXAUYRPTSBBSMIIVVGHUCUTEOVKSYXTQVLQRPIEYXREPJSGOTSENEFENLOYXMLEHILAFUCCKPCKZJUVFNWWWONDMTFZNBCDMLQREWZVVGLLCYT");
    const char tmp_tmp_msg_1_0[] = {14, -54, 84, -25, 50, -96, 11, -34, 126, -47, 96, -65, -27, -18, 99, -93, 52, -52, -18, -54, -72, -107, -48, -71, 74, -17, 59, 45, 39, 65, -102, -43, 122, 106, 53, -22, 93, -43, 86, -64, 3, 30, -2};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    tmp_msg_1.complementary_information.assign("ZRCLODTXBQPVKXXGUWFBOYHQERTWSOWKNWDFLSMYAEFKJALGBBMIAOYNCLKUIZQZ");
    msg.object_info.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.0037785384603595817);
    msg.setSource(31914U);
    msg.setSourceEntity(136U);
    msg.setDestination(46464U);
    msg.setDestinationEntity(94U);
    msg.object_id.assign("UTMNTBGZTJDFRGJIKAVOSYMLUYSMWLQRQLYPBCMUXWOOYHLKAAZGRVPTZTMOQTOIHEBFYVHMSSDBIEHIZGUOGCQGIPISQSSFUBNAVWFRHYFLDIGQZDYRFWHBAUGXHVOZSWOEHJYNRCSZRVZC");
    msg.object_size = 61777U;
    msg.change_time = 0.8344048654537296;
    msg.change_sid = 57147U;
    msg.change_sname.assign("VBUECAFWKSYBEHVMHNJIDEBGYWAWZUOEQHEWLURWRPYIYAOHYPQHBXDJCUBUJUQL");
    const char tmp_msg_0[] = {124, -110, 14, 109, -36, -127, 5, 29, 14, -93, 99, -44, 41, -73, 37, 97, 94, 117, -8, -66, 108, 56, -56, -37, -21, -101, 117, 14, 75, -118, 87, 42, 58, -84, -42, 45, 13, -70, 0, 44, 124, -93, 76, -21, -53, -60, 70, 27, 36, -88, 111, -105, 111, 6, -38, -53, 27, 41, -120, -11, 9, 114, 51, 23, 74, -63, -107, 28, 13, 101, 47, -81, 69, -17, -85, -30, 61, 19, 53, 109, 110, -3, -84, 19, -93, 30, 23, -5, 43, -121};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.complementary_information.assign("PBTSXRXMGLMGWZOITCAEEFWANSJBTJZNIJHEEHVDVJGUKOUQNAQUUMZBYMTDQLANAPZIRPSRRSOQHOXYYSWJOENEXELCVPQMPFOIBULLWJZKOVJWVWVBXQNCFKKUFGUEWWMDHOCSBKYIZFDCCCKXLAPHJSMVJLNUGVOBPUTHMCRAEQYHHFCFBDDDFYAYPAGSNCTTKZSTT");

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
    msg.setTimeStamp(0.8667392043013968);
    msg.setSource(34099U);
    msg.setSourceEntity(69U);
    msg.setDestination(46787U);
    msg.setDestinationEntity(135U);
    msg.object_id.assign("OTXGXBYWONRPYRXQACCIXDRHICXULBLLMQLSTIGZFYQZEYRAMWJXSBMCJHEKUGABJQPURLFNUYYWRIWZGQFAENADCKUDNDGWGLZNVAUELPIGOHFFKWHMQOPZAJYNACFKPSEVJITKDORJEIVJMXDHPFSZSSQDKSWRVDRFHPBLNTCUHESFKVBUZECMXBRVIODPPBTNQOGXNTWWKZZIJVHTFUYCVXNOTZQTJIAMLOCKQHMWY");
    msg.object_size = 12847U;
    msg.change_time = 0.7521159709311906;
    msg.change_sid = 58882U;
    msg.change_sname.assign("VUPNFGHQXICMTCMRMWTPSQAHCRESSIUBISMHMKGLFTJHZFYOUCENAJGIOUDYCHBVFEYZWFTKXTHYEWKPDIJQJDEXLEGRJTXVGVYYLVCIWDAHGUHQWJEPVKJGBKSLWCLMWFVOHRDWBGZYCFNZOQXPENZARKSPU");
    const char tmp_msg_0[] = {19, 78, 33, 52, -24, 75, -43, 78, 107, 42, 38, -7, 2, -124, -92, -55, -57, 85, 123, 68, -79, 56, 32, -58, 49, -11, 102, -90, 15, -11, -128, 103, 53, -15, -44, -48, 71, 27, -39, 98, -30, 72, 10, -66, -71, -103, -56, 25, -30, -28, -70, -38, -100, 85, -72, 11, -29, 39, 108, -22, -105, -31, -23, 26, 8};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.complementary_information.assign("CUZQGQKONSONYJWGLDEANMXCBFSKTRSFCRVUSTVELDMOKHGXVWVKGDZZMWMYMRPCZFSRIDHE");

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
    msg.setTimeStamp(0.14609279181646007);
    msg.setSource(42990U);
    msg.setSourceEntity(145U);
    msg.setDestination(42327U);
    msg.setDestinationEntity(120U);
    msg.object_id.assign("MCIVURJLBBJEKEPRXBLZOCODIMCLXYOQTNQALTXLDOYICEANHZOZRQHSQUGUEVVFSWDMDMPRH");
    msg.object_size = 46377U;
    msg.change_time = 0.5275658818749056;
    msg.change_sid = 7600U;
    msg.change_sname.assign("OSILAEMRFYZNTTEUEKRPNPTVFCQNMRHPEDIHHIIZWOTFMCVFHYLOWDLFVGSJERUSVRPUGEXDSFJAJQTARRYACTCDWIKWOVNTZPLKBCQYGGNMMFEOXWXDYXBIBDNPQCHMYJSMYIVDYULBCAYSUSMLKOOAWGBHYLKHSWKQZJZTXTXGRISSOGXQXXHQGMJBAZ");
    const char tmp_msg_0[] = {-88, -18, 110, 122, -127, 33, -54, 68, 95, 38, 56, -48, 46, -92, 113, 118, 64, 108, 106, -10, 74, -36, 24, -69, -89, -108, -56};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.complementary_information.assign("XWNRPZQSHIGDLJTTQPYQONCECITMLZBEFHIPTECRSLDJXKRTVJQMORSUDRJEAEFPDGBWNSYTZKUVMVVVAGURHQHLROPKOTFXKIYYWUMQLGHAZOBBJVGCCRLYAMVNFDAZLFKGHEWQDCOWVGWQXONBSBJIMV");

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
    msg.setTimeStamp(0.05440683677989944);
    msg.setSource(42295U);
    msg.setSourceEntity(204U);
    msg.setDestination(25524U);
    msg.setDestinationEntity(153U);
    msg.type = 109U;
    msg.op = 54U;
    msg.request_id = 26002U;
    msg.object_id.assign("NMOQAFKRBNNMMKWBZWDYMXDSUFMTQSQGKDVFPBUYXQNHVFQNQHITSETEWBVEHPVJSCHOLFUZPVTRKCZZGFXAAIQLJCUPSXZVOHYRWOTXYOEFECELSDCICJYWALWZDSMKOEXLNWBKIXAPDDLJOYDYGGPZTDRFU");
    msg.flags = 40198U;
    msg.dt = 199U;
    IMC::FineOil tmp_msg_0;
    tmp_msg_0.value = 0.35034932465399726;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SOOJPPXYJRWUBGHJIGQZDZKJQXWKRCMOANZQCRLTNFPCBUYTZARFIGWWFNCYNLWXPOUSIYWDPEFBOYJXMFMVAZOKTUTHLKBXTGTTYYDAZVSXJZHDWFFGILIMABVMPENEQSOKQKXHTKEQUEBFSVMKSYLCIHTCE");

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
    msg.setTimeStamp(0.2883964122871421);
    msg.setSource(9455U);
    msg.setSourceEntity(182U);
    msg.setDestination(36977U);
    msg.setDestinationEntity(6U);
    msg.type = 221U;
    msg.op = 44U;
    msg.request_id = 11614U;
    msg.object_id.assign("OXMITXFJRBADVCYZJYIGGXHPUPGODKURWCFQJEXKHQAQGAEXKDGNVNSRRWPKOJHUTYWKCNMWVBZJSIVFP");
    msg.flags = 44601U;
    msg.dt = 241U;
    IMC::AlignmentState tmp_msg_0;
    tmp_msg_0.state = 106U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TVXGCOXNUNSFQZAKQKAXPARNDBYVEVCHALWXGSVYYRWQ");

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
    msg.setTimeStamp(0.02370498704672286);
    msg.setSource(43623U);
    msg.setSourceEntity(173U);
    msg.setDestination(28460U);
    msg.setDestinationEntity(241U);
    msg.type = 250U;
    msg.op = 230U;
    msg.request_id = 37378U;
    msg.object_id.assign("QUGRSCUUSBYJJQSKEPKEVUEYMWGHRGKYRCJAOCPFBUWJY");
    msg.flags = 40231U;
    msg.dt = 222U;
    IMC::VehicleCommand tmp_msg_0;
    tmp_msg_0.type = 241U;
    tmp_msg_0.request_id = 8150U;
    tmp_msg_0.command = 24U;
    IMC::IdleManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_ref = 441143447U;
    tmp_tmp_msg_0_0.id.assign("FFSCYLABTSHIJZTGQMPOBYMWCHRKIRECLLHPWTMBRDLGXEQSXPGFQVDGWRJKIVTHUTMDZRAFEPTNJZYJDGGYZCFMIYRUVRAGBLNAIYKRCQUNPBLACNMQBNKDFNXUQVZ");
    tmp_tmp_msg_0_0.memento.assign("UXNTYLKIEYUZERDTIBIENHKDJZCBNPWCGCMVOWTSLPCEHDTEHXXTHNVYDZYDWATUBEJQQMCCFGRPOABHDGTUGZBCYFMSQOQXZISLT");
    tmp_tmp_msg_0_0.duration = 16186U;
    tmp_tmp_msg_0_0.custom.assign("UUSSEZCELNXLCRITTZMSGEFEPEAGXSVLUTYBGWDBNBIHGXTTGFLLJBGCVRIVXYMQGYTHEDHKKCGM");
    tmp_msg_0.maneuver.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("ZCNQTDHGLYFMCKQSUAXEPYVILCIAWRBSHWGFTKPYNPSZJFCFRJEJTXAOATEXJWKIALOQGWMUOHQANLZFHXDMLAIPHZIRBLVODPIQBXDRP");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NPWDNOPUGTYLTTGGNMGEQKHCGDMJRPZNCQDJUFVNJKSDJTQHUWMIMYEACNIZTIOXXUGIDAKZEAVFJWGJBKXWKNBKOIZSTERCVCVAHRYJILBILYELUABKADOFFAHQCGSHHZVBGQGLLWXPAIRVRSZPEVOMLSOBILVYEFUJJMLWZZBQPRXEOSI");

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
    msg.setTimeStamp(0.06484906492870346);
    msg.setSource(31894U);
    msg.setSourceEntity(251U);
    msg.setDestination(13020U);
    msg.setDestinationEntity(41U);
    msg.state = 160U;
    msg.plan_id.assign("WAQDUNGALOEVMARIGYQKSNGUFMSRQOABTCWEIZZDUPZVGSLMKVJIYUKBJZXTEXWBIVMLMPQRAUNLCURNFQCXFFVDGCVTQHNXHEK");
    msg.plan_eta = 2089720861;
    msg.plan_progress = 0.47786152001813753;
    msg.man_id.assign("NAFEPEUECMHYZHPDRKAITYITKCHHBCNBNQSBAGJCNKFPEWBXZLJDYQIZPNSDZJBEVCJGHOWDDQCTUPVBHFVAIMYMSXIRCOMAPQBTFXULAASERKVJGTWABWXTQOXIORLGWIFPCMSEUHVUAPGGYWDNYMLPONLDRUNQZRVFHLGJLWLCIKOYXXQJLXJLVGRWSFQXYASOOUERTNWSMNQKDTFZOHEZTYKVREFWMVCZU");
    msg.man_type = 64554U;
    msg.man_eta = -1195817487;
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
    msg.setTimeStamp(0.35492140352901047);
    msg.setSource(5892U);
    msg.setSourceEntity(225U);
    msg.setDestination(64642U);
    msg.setDestinationEntity(223U);
    msg.state = 118U;
    msg.plan_id.assign("KADJYAJLXOWHIKCHOWRRWZIFGNGJKFBTULPNDXHTPG");
    msg.plan_eta = 478036526;
    msg.plan_progress = 0.9148211694072287;
    msg.man_id.assign("YORKPGERFAJZMNGSPANOBPTLYCUCQMTTPWXAXQCFAXMKCVSJSWDZIOBADOBWYXYICREFUIWVQFIPFTZHWRXLDVHUEJKPMZCRQVSLDYWLAJLGVZSTUNIMEGEVPKDKEABMPEHBKQZYBNSFOPSZMVGMDAXQQJOGXWYUTJ");
    msg.man_type = 30697U;
    msg.man_eta = 56617234;
    msg.last_outcome = 164U;

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
    msg.setTimeStamp(0.6286629994328529);
    msg.setSource(33091U);
    msg.setSourceEntity(224U);
    msg.setDestination(35340U);
    msg.setDestinationEntity(131U);
    msg.state = 76U;
    msg.plan_id.assign("TWNYXRWYTPBPOMLGYIMAKWTYZZMURWZMSELLAUMQFABJCLRYMGJZKDIJNICFQPVVCONUGULJESSVHOINBPCJGYHUODWTOLMFEZMZIVIXTAIGHQETAKHPNPKXGJVBREKDCSVBUDTXFCKEQYQBTYNHSNRVQKSCPRRFDCWLHJFHFJPJSGXZFREMVBAQQLRKGHNPJASUWEEZ");
    msg.plan_eta = -870212014;
    msg.plan_progress = 0.08874394648624695;
    msg.man_id.assign("GUJGHYCVSDKJAQZMCKZEQLNKFXHNABLELIURWGVUGXNTWVDYTOUBTDJHVLMGINCPSNFJQNREMJEW");
    msg.man_type = 63139U;
    msg.man_eta = -1273052400;
    msg.last_outcome = 37U;

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
    msg.setTimeStamp(0.3976005117266347);
    msg.setSource(43173U);
    msg.setSourceEntity(1U);
    msg.setDestination(28859U);
    msg.setDestinationEntity(80U);
    msg.name.assign("LREGMOZTQGSCPEIWBBKLAKHRZTMJKUDWIVQHDDC");
    msg.value.assign("OWCLOZKPCJEGMRVBKDNLJGWYBVSRWXAGFILXFFPHX");
    msg.type = 167U;
    msg.access = 89U;

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
    msg.setTimeStamp(0.9489877280184585);
    msg.setSource(12566U);
    msg.setSourceEntity(28U);
    msg.setDestination(34520U);
    msg.setDestinationEntity(87U);
    msg.name.assign("QYFAXHBYWKADEZGNSVYISUQVNJEBXCYTBDIXQOLPAFLNFVDOINHCGKKMNMTXHPRVPKKBGORFAWGOKHTVZJCGMJWAYUKQHTRPUOSNNLLPMTZMZEUOCBVQRKTEJHHWVBXDUFCIVIIQIDAJLZVURADLZXSNGFJNQZATGMARDWAJIPLBMQUIRHERDMWOSYXNLCEEXSGFSZURHMCSUTFFTVBZRKZPPWQ");
    msg.value.assign("FCZSVFKDNGTSYFIIFMVKMWULOHKJEJNIRIOQRDGOFGQMRNKUYELFHOMYIAJNKQGHKWDZJKPNHMGERTABMIBMDPIHFEOFHTRWQLOZLZLSTJXPEAOXPSLSBAECOLXPUNKXDDPJJXZESQERICVAJDEBWPNXTLYQ");
    msg.type = 144U;
    msg.access = 116U;

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
    msg.setTimeStamp(0.09752760590608989);
    msg.setSource(48459U);
    msg.setSourceEntity(107U);
    msg.setDestination(53661U);
    msg.setDestinationEntity(27U);
    msg.name.assign("YKKSEBUXOVRDRJVEOSBTUDMYNCVTJJEFEAZXPLDDXYMORKZEYTXRCRXJBYNFHQFMKMKLNEUWKKQREUQFDWNZFOZPDJRVPEIIHLJGVVJBCYQAIBRTVIPMWNAGWHFIQWZFWVHAXXSYLKIXQJHCGGZUNOFCAUKDPIC");
    msg.value.assign("MCKOMGZNAHMVORMGSZAFQNLQEJFTMQHDDREWXFVMWWJDCGBTDN");
    msg.type = 209U;
    msg.access = 24U;

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
    msg.setTimeStamp(0.7920456657567418);
    msg.setSource(47218U);
    msg.setSourceEntity(75U);
    msg.setDestination(1650U);
    msg.setDestinationEntity(5U);
    msg.cmd = 126U;
    msg.op = 222U;
    msg.plan_id.assign("PBMUNNKQOXDAVYRVJVKEDISGEMUEFVWNKSDOEUMTKZLGTBFZXUEVFZJMQZIJVYTGXFDQKTSJLCRUWGASHXWIYPTHLGIPPDOKZAQTDOSDACGALLLRWNZCKJWYFPSHIOHQBQR");
    msg.params.assign("JMOLQHZQNFEVLCXZNJIKQHBAZJOUXQEMDOSDUJTMPMBHFCUOTOFAQIQJUHIZMOGEVKYTYRVMNEIRAKRBSGWPKITPXVRIUVYTEPCSNNFSRIMTZAXBIWBARPYXWVWDSPTJMVHJUDGFLAOXVPXBQALAYHCGHLPLPTNOZUQODRGLGZOVGJWERMBNBLDIUUQNFLSKBXTCHVSCYCYYQDIWGZCCGKJFTP");

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
    msg.setTimeStamp(0.24430308793910893);
    msg.setSource(41012U);
    msg.setSourceEntity(88U);
    msg.setDestination(6275U);
    msg.setDestinationEntity(104U);
    msg.cmd = 87U;
    msg.op = 14U;
    msg.plan_id.assign("UXUXIUDCSKBDJHMYFLJMTIEFNFMGORGMNDQJFOIV");
    msg.params.assign("QISJCUHLRSNRPCBVFMGOYWOEBFOFUKAJ");

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
    msg.setTimeStamp(0.16745275193901077);
    msg.setSource(63506U);
    msg.setSourceEntity(182U);
    msg.setDestination(33111U);
    msg.setDestinationEntity(125U);
    msg.cmd = 85U;
    msg.op = 52U;
    msg.plan_id.assign("EVKQQUIQDBPEYFWOJHSENSOSZQNFJRQWTZTDYTJINSTOKXHLBUOTFAPOGJBQKPRGLECOWONMMADYUILIDNCXYDFLAMVLELGTWKQCAAXIFMGYHNZQYXWZMXIUMFFAEZBROFYRCPCNKBWDBKHZFYMNAHGPUZYJFABSVURNPDLVSGUBHNXUIRPTCGVIRCRIEXCPVWHYJWWBECSPLDAIDBGXGHZEV");
    msg.params.assign("WTZHFYIKZSLBZODMTDJQFVVPQKYESRLMSNOMYFLTRSCQROFLFRETUZJFUVMCEAVNGIBEDPHIBUJGOKRWWYYZIAIHEPXXPCWYDJCJQWDMGLSBVOPXONQNHWPXDHUCRZXSRUGMEUDAWVCKBHYDCTBGBNYNUIMEIGGJBJXKJDFIKSJHFAOYXXMCUKHOZINCTPLKNGULERFPXIYBRVGTTDMWZAJRQQVTUEFSWSHNOVNPAKHZEQQLOTGAXPSKCA");

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
    msg.setTimeStamp(0.744591355087305);
    msg.setSource(9960U);
    msg.setSourceEntity(158U);
    msg.setDestination(10279U);
    msg.setDestinationEntity(139U);
    msg.group_name.assign("NARUMIIXMEUWYZRZTTSVJXDYQUBFBRYNHSDIIAMMLBJWCZLEOCASTBZZOMVFOXMBNIOTNSKYDWRYOOMJCOGXCFQDANMPKNVLLCIGQEPYTKIDRPFPLBNVCIQXZWDSUHQQFBHFOTUPQQEDMNULSXJYRGEWGCFXVGMDAHSAHTJBWJQL");
    msg.op = 69U;
    msg.lat = 0.8132363990057575;
    msg.lon = 0.5750824104551543;
    msg.height = 0.7290153179115472;
    msg.x = 0.09758324766762105;
    msg.y = 0.6520180484071277;
    msg.z = 0.5670207027267986;
    msg.phi = 0.9755432782001054;
    msg.theta = 0.9039143476869275;
    msg.psi = 0.8651426914068027;
    msg.vx = 0.07480734220424234;
    msg.vy = 0.9470011360192888;
    msg.vz = 0.874773257017216;
    msg.p = 0.20280019848452924;
    msg.q = 0.2222119221790031;
    msg.r = 0.64610077453564;
    msg.svx = 0.6269627665296281;
    msg.svy = 0.08850763221087565;
    msg.svz = 0.9236054101429825;

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
    msg.setTimeStamp(0.2091122099630478);
    msg.setSource(62529U);
    msg.setSourceEntity(109U);
    msg.setDestination(965U);
    msg.setDestinationEntity(69U);
    msg.group_name.assign("VQHYMOJCQGTSPWLWLSINQCSBRMYXJFOCYDEWBCWEQAZLZRHINEIYHAZGTJPUNPSCZUMKDTXXAAFDGRURNHMUSPYDHIIBWGNUDXVIEGQYFRCXNEKTFPWFMGGSKZDEOWTXYOASRBFBLCZPJRFLLTKXTWLVFAKBWOUOBTKLDKQNEVMYOLXVQPVACXOMKJVBANBUQGZRJMK");
    msg.op = 123U;
    msg.lat = 0.05499551243677747;
    msg.lon = 0.5663326847574642;
    msg.height = 0.5507645161915684;
    msg.x = 0.6394953084496056;
    msg.y = 0.35544961380078677;
    msg.z = 0.5262630247472003;
    msg.phi = 0.7411842905960822;
    msg.theta = 0.22228399538791632;
    msg.psi = 0.10342422875765045;
    msg.vx = 0.5592936849268733;
    msg.vy = 0.7805269338143908;
    msg.vz = 0.39686688448301866;
    msg.p = 0.761815895033707;
    msg.q = 0.10432876336864438;
    msg.r = 0.5960558403512549;
    msg.svx = 0.48279188980614407;
    msg.svy = 0.2288208407264345;
    msg.svz = 0.9658752195125134;

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
    msg.setTimeStamp(0.8064854673027306);
    msg.setSource(33364U);
    msg.setSourceEntity(38U);
    msg.setDestination(60663U);
    msg.setDestinationEntity(190U);
    msg.group_name.assign("JTHUYVNRMQSGWWUJKIHSYYNDJIMBXICMABWCBQUFQRHRQEFNNODLLKKNMMEQIRFECBCEAWDZGGNKTVOFHJBICDMJXRKHVVZDPYHATYLOTYZDSXCPLAKEXRHV");
    msg.op = 222U;
    msg.lat = 0.8858320152342412;
    msg.lon = 0.806547771307406;
    msg.height = 0.8874281411641504;
    msg.x = 0.4525716708532542;
    msg.y = 0.05241774077066785;
    msg.z = 0.6910700014116187;
    msg.phi = 0.6616442464522125;
    msg.theta = 0.4869402013362152;
    msg.psi = 0.5619818580849287;
    msg.vx = 0.7455394060051496;
    msg.vy = 0.8558267953556338;
    msg.vz = 0.8514901785602751;
    msg.p = 0.1908504044346998;
    msg.q = 0.7374700773424954;
    msg.r = 0.8273713366313035;
    msg.svx = 0.5195644629832521;
    msg.svy = 0.9852577470527838;
    msg.svz = 0.27748139385911896;

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
    msg.setTimeStamp(0.35223040964143415);
    msg.setSource(20095U);
    msg.setSourceEntity(168U);
    msg.setDestination(31977U);
    msg.setDestinationEntity(121U);
    msg.plan_id.assign("FGFGKEXOMJAARILXBSRZCLPMQEGZBIUTDYXLYTARDNTIWREYWYAIJXGAHMCCSCFGDVLDPYUTYHQQGZQAQPVRTFTMZHJUNZJOVCCAOCLNIOQVFTRMIXJFNLZVHNLKRNGRDQVJVYSWWHUWRXSOBLATBWLGQPNQVPBTDEYMEWPHZMUEEKIUSFMOHZDWIZOSEPVPMBSUPFBBGA");
    msg.type = 227U;
    msg.properties = 247U;
    msg.durations.assign("HBSUYIRQIYOKJFGBKDFCRGDSLJFOZTWRACDOFHPV");
    msg.distances.assign("AUJYVIPUSWJHRSGFWLGKSIMNKAGNYUOLBOMDYQTPXXOWHZUEBDZDMWZGGTILPSQWLBGLEUOLONDVJVQZYKJCGBSDUWEPKFLJQVPZVCIBNKGJTUXHFFVRGDMYAAETNHCHHTIFNHWERTCAECY");
    msg.actions.assign("ZTEDOSMOCASRQCRXOUQENBGOWRGDYKXWQKAJFTWZTCYGDNSGULNJJDRELVRRRJRPZTVMTXFPYBMKAYMVANXKAFKXCAXWLVOSUFHPDQHYPVDSLHHHBKSNGAJEEIRZYKOMZFCNBDSMGTWOXVYPZQQNMQOKFUJYFDUGOTGWK");
    msg.fuel.assign("SDBRCUDXFZYSJWBPJDWXNRUJDHEMQUOBAOIVHMXCJSAOJBTDYDOADGHJOXUHKJPQUTXOKLPHNYFCTRDKSJKVMWFFEWGGLBRRNVAYUXTPGPYEGWDLPWQMVSUQGMOLFIHLYTNBKZIFJIGGXZPEISKMOYAUEINJWBZYTZXLHASFQQICHXRLZVNTSARYWPCRVEVIIETHGKNQQZVQQBCMVODELAKYARTNBCKENFIZCHUTCPSWFRXBLFEMGOA");

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
    msg.setTimeStamp(0.948398005124345);
    msg.setSource(9513U);
    msg.setSourceEntity(230U);
    msg.setDestination(64351U);
    msg.setDestinationEntity(12U);
    msg.plan_id.assign("VCBMMYELRDPGSORJZWXOZTZBIMOWBGLIPQEKZWDUAFACPTESNXGHCSDCFGMNOZEASSRKPWUTMOAYGRNFRETGLXWGCVIQOYVTDTEISFKJYVCQRKQAMMTJBHKDAZKFZGHOUAYLXAJITHOXPPBNVLXLMKMNEBSXLUDICLYRHBNRNXULDUHSUNUWZSBVGTWTVFKJXHXPQBJHYSVALIZOIIQVOCHN");
    msg.type = 146U;
    msg.properties = 199U;
    msg.durations.assign("ACDZGIPBQAXXY");
    msg.distances.assign("YWNSCXHVNHXTVSWCLCQLOGBALTFPYLWQIBZOSLRRAPFDHGVWEVPFBDCFFUFQNGUTVU");
    msg.actions.assign("DFCQSCUDYIGYTFRPSNMLLWJYJBJYYWDRETXPPZMQML");
    msg.fuel.assign("WKLVVWCUHGMNQRZZSAHIIUGOEKPCSYEJAFLTBRELAIFFUSRFYOGIOTUEJIQULKBLSIJDXMNZGBMZQKNHJLHVMBWWJUKNVIAAVUDZWKDSOADQTXROGRVROVAMYDOFVWZAGNNQGPQEBBSFHYPWXJEPHUDAUXXK");

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
    msg.setTimeStamp(0.5831672000037333);
    msg.setSource(1232U);
    msg.setSourceEntity(138U);
    msg.setDestination(59484U);
    msg.setDestinationEntity(64U);
    msg.plan_id.assign("LTAWBBVRFTZGOSLMELOQNKSMKZDIFRTGUSQZRBMHEDYLCEZQDPTNKMTYHEBYYOAZSMUJJMGWXJYEFJVOXBYULUXURAWHZQODNMPXIOBNYKXKNIPIPOAEQDWCAPHAVCIVOYJNPHBDYCCDCWZZ");
    msg.type = 80U;
    msg.properties = 153U;
    msg.durations.assign("WUMQZHFLJMLPROYELFIRXGFHPUZSNHEWKOXOTDBCKVWHCAEYYJQCIQBMVJCNQJOSPFBRNWEMVIXNAKQPFBROKYUMFNTSIEYKGSVKDCDGIRSTZXGQIUJOAOGRXSEBPZAQJPXZHHDLEWJASNCWPWYMPHDTISVGFJLOHOUXYQORQNJTLVXNKNEFIFVAMUZTRIBBEATFBVPRWLWCCZHVYGSGDZJ");
    msg.distances.assign("CKTRUMJRVBEERIZJVBDDUIHPX");
    msg.actions.assign("BQWYFSYJOKVIGIABVHCHAMIHDXARVWZPKYTFLMZQNCCEYUNBNECUWWTODHOASWLWHGF");
    msg.fuel.assign("YMUZPBEWGYDVGSTVUBRVSFLQEPYKUGSEQIBQWTUTKXSNXMOMCPYADGVWEPWCNWEXAKZWYRTNFZWXVGLILPKDIHZCNFCNSQTKQXDOKTDTCQEKHDEOLHYJHGDTZJWFAMWBIFOUZMOBLUFSBRISNXRAYOGMJWPOJIQPXPAHZSINFFFSBNTUQAILCXAOOYADVYZBRCAJDRKEH");

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
    msg.setTimeStamp(0.6317134346816194);
    msg.setSource(46196U);
    msg.setSourceEntity(144U);
    msg.setDestination(8555U);
    msg.setDestinationEntity(10U);
    msg.id.assign("YFPKUINKTKTTYSDCQAUZFYSQAVCONZCISXPGLBOJRLFBGXPJMDWYFBEPYWATGKOZJYVFCVZXUZRPOVLIVDFMDSXKOAHUBKUSLGJMCNHWMJEQEIKHGUIRIQHZRFSLQEKRDOQGBURSSEXYAYXVYZJWIBDNTNAH");
    msg.plan_id.assign("EWAHZYLQLEEENGXVPROLKOA");
    msg.maneuver_id.assign("TKHROHBHLRQFWIITQRHNOIXSPJDWTH");
    msg.memento.assign("KXEICWUQPAPAGNDDZEEYTLLZKDOSUYIPZLWMFGXZETKKJKHYXFARBGHRSQAABBYAWVTPXBXWWLBOGFMPTBUKFWQPRVUMKODOEAPJRDSNLUYYCPNSBQLQDEXHNGZOUTZASMIISGZGJFKMRUBQFVEPQUHXWRGHSJNVVLHAYMUOJDZEQLCZMOEGRPRXINHOVQSZCHJFNVCFMSWVKXICEXTBJCYODIDHVISJNQVTJRYJFTF");

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
    msg.setTimeStamp(0.22435292346130442);
    msg.setSource(59665U);
    msg.setSourceEntity(200U);
    msg.setDestination(32764U);
    msg.setDestinationEntity(216U);
    msg.id.assign("EKQDWXGDBFQQGWHVRASSEZDMVULNVYVSJBIALFOHERTJRNJBMIMHTFECPWEWUBMSCWKOLBAJDZGBPGUXCVFKKIEJLC");
    msg.plan_id.assign("RPGWLRJXQKBGIMAMXUEIFNPLAWCSSJTGHNCVRRHWYDDLWRLZZITFMBKFKOUZAHUWVJTPMAKSIQLAZNQLXHWMQXMFEKEDXPKYDWTHZJQPEKYVEFGUNYIYOOLJPYXPZHBTZENDMDSWZANNUUOBGGXVYUIEBJUPXSGRVMANQEDTIFPKCTGDTEQSKSIRCBJLHQJTMLWSFFAGUFP");
    msg.maneuver_id.assign("CBEWPNYUGTHKZUWEUAMKXAKMWATCIORQSIIZZDTTKLHXOFJLGPYVONBWQSJYVVHIEDCCNRYVKJMFABKYSMQVUGECOAQERHWDTGEOLUXAVBKQGXHIENHYCGOKJJDLPVBFPBSMUGQXYJTPXVFHUACNDLMLRUWDSNREXNVJDGUJESCQZQFTUGHFWTAM");
    msg.memento.assign("EBIFNTDXOJXWAYIEVJQQHDEBQNTVVZKSXRCGXMULFDVTIEHNLNKXUJEMWPADVVZLAFENLHUTOSZTRWMOBOECEKGGPGFASSAKPGCYUKDFVPORZNDDCNAMF");

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
    msg.setTimeStamp(0.949757104096605);
    msg.setSource(18030U);
    msg.setSourceEntity(42U);
    msg.setDestination(55063U);
    msg.setDestinationEntity(63U);
    msg.id.assign("ZSGHENKSRSNEULYCKZTVVNAXFACVPGANWTQFSOIQUWUBYRNUZAEXTTKWBYURIVFYFKOKYBAMHXIGLZWWOPVTMMIHAOAOK");
    msg.plan_id.assign("HVMRAEHZRVBBBCZMFGIUFQYOZJHTUGLT");
    msg.maneuver_id.assign("OVLVSPNEEPHNOONOATQANPTCZSOMGTIVMZCIUNSPKRZFLFEBEWDKTJGLQAJIISCWXNAHAJRVXTXDUDOQVWDYLTMCICQLPWRXLBCHSTZEGUXVQQETKYAHJJWM");
    msg.memento.assign("OARTEGJYXTZGWHFBAJZGDABEQRIXRJVCSMJSTKRVKPSYCXNIOQIWTQQFBTSFDOASDFKABEVUSDKOWIQOPGABLMZHBMPKYUZQENSWXICQLKGIVORMGAHNWXBYZJUQZJTEIDUCRDUYKHHCELMWUVTPKRKBSAVKHAEOPEPZVXNRMMUDQSSYPGMWWFMYVFFGNCXOYVLLIELLCRHNVNWY");

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
    msg.setTimeStamp(0.9583931609026511);
    msg.setSource(14731U);
    msg.setSourceEntity(27U);
    msg.setDestination(61186U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.24279604878748084;
    msg.lon = 0.6286914176188699;
    msg.depth = 0.5542230400984403;
    msg.roll = 0.09866859681320861;
    msg.pitch = 0.5747444465527858;
    msg.yaw = 0.15116412075351715;
    msg.rcp_time = 0.3996517033458371;
    msg.sid.assign("ZISPZGFLEMXBTYILEFOGPBNBUPDXIXGVUCNVEZRTDKCAWQVPXNFDWSOYLFCHVSIZLVBWTVEJMWJYKVFSSTAHBWTJTJQKDLAMYARLNDTXTBFCD");
    msg.s_type = 176U;

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
    msg.setTimeStamp(0.25438347230025304);
    msg.setSource(9066U);
    msg.setSourceEntity(100U);
    msg.setDestination(28588U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.09075902271818381;
    msg.lon = 0.9751152329913723;
    msg.depth = 0.5306166587927367;
    msg.roll = 0.5046193475299239;
    msg.pitch = 0.8721452008292994;
    msg.yaw = 0.468629282260978;
    msg.rcp_time = 0.7381366949540148;
    msg.sid.assign("UZPEGGKPIQLSHXTYQNBDBPOBRFKAEEYYOYVBWVVBERTIVWPXZQDYQOZLBJASUPHZJFVKIPXOGLDAFUEZBIZPSCJXRGPVUOGGSMORFNWKYSQIQZQZHRDRNHOIJKMBQNQUSMTHFADSTMGBXKVUMGKCCAIWZZLFOKVELVJNFTDFFLFKECSPDPTAHUYWXOMXMKWALWNCMUHTVILITN");
    msg.s_type = 210U;

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
    msg.setTimeStamp(0.5127169049982835);
    msg.setSource(16625U);
    msg.setSourceEntity(89U);
    msg.setDestination(6685U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.5525213224557711;
    msg.lon = 0.27822687705272175;
    msg.depth = 0.8378505919575958;
    msg.roll = 0.771849267052801;
    msg.pitch = 0.4182014773818298;
    msg.yaw = 0.1688637109264467;
    msg.rcp_time = 0.7662173950938795;
    msg.sid.assign("YWFLSBEMHHVPGMALSPNXVIDKRTGNTEUWNECJRKCCIDIFMXQBUYAVTSVDAYZXJOTQHFQPUFFBJEIMDKOPTYIBZQGCWBDKWIYLMUMZEJYHUAILCTOZWRJABSEQFJFMSGWBPWLNCLGVKZCSQJNVXRUPROQDSAOLTAVNTYKKYMAIHJGLQAGFRWJMUN");
    msg.s_type = 94U;

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
    msg.setTimeStamp(0.9849255170877728);
    msg.setSource(46423U);
    msg.setSourceEntity(238U);
    msg.setDestination(48033U);
    msg.setDestinationEntity(80U);
    msg.id.assign("MOLCHZOJIMQQCYGVGFJZM");
    msg.sensor_class.assign("DKFNCODYZULQUVHHQDRXCRUIBDZYQXXCGPHFMKRKPNTXGAEWDJQMWAPVMUSSKLJYIVXYPUPTKVDJSGDBRFIQWVBUZQGPONEJOWZJKHTBFAYWSUFJZJZSESSMDZUAEARQGICNLMGOBMAIIDBTCOHITFGWTKGWIRVJWCFBTZEVIVYSBCUHMNLHANYEBOONYACLHWPNEQARPXQOVKJSLMMVYETYLUWLPRRXHLHGFNXMOZTPEKDCCFBXFN");
    msg.lat = 0.407095266579656;
    msg.lon = 0.5382452054434058;
    msg.alt = 0.9640457553441392;
    msg.heading = 0.2023815486052588;
    msg.data.assign("UMTPDXSIQUDWHWZTSITPVVIXFDFQGXZSHKVVKWBICQRDBZYSAZGOW");

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
    msg.setTimeStamp(0.4643094052087944);
    msg.setSource(49009U);
    msg.setSourceEntity(95U);
    msg.setDestination(58752U);
    msg.setDestinationEntity(235U);
    msg.id.assign("RLSCTPDRLNXQKNZXZYYQFHQOGQJZJXFKPKTHQIAMOIVYXTATBGBSLNZBAGPBHBYZHBMVVDKSRIHGAODWCPMJSQMFVCNASVKPMDEEPEECZUHDFRNSUIMNRJATOGWFYTUDJORHCPAJXFJMTNNHH");
    msg.sensor_class.assign("GUKZYLEVXPHLYYONHAHMJFWPVXFWNKAFPESEJBQMYZQRJROELGARVDBUOPEGKFJVQEHHYNALQGMGSTECTSPNRWBLKJQAWLKOB");
    msg.lat = 0.002028793240031246;
    msg.lon = 0.42286936796098473;
    msg.alt = 0.3359779435161897;
    msg.heading = 0.7012167357394162;
    msg.data.assign("WMXQUHOZGLOOBKHLVFNTKLMMPZOGUNPTDGNVIOTXDKDUYGFBJPEPJNPTTVBRZMNWPREXCTCNSNWPEMQREZGBXJQZBRCCLPLGKEFBATHQYSWKSKJHCHAAUAEYSVNDIUIQHZYBQDKWFFBGJYRRZEMOMHVAQFKAFGFUXLSYZPICCCOFGMAISYWLDDYEEZGXOXMJXXHMRKABTI");

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
    msg.setTimeStamp(0.015451452269113375);
    msg.setSource(6554U);
    msg.setSourceEntity(192U);
    msg.setDestination(50038U);
    msg.setDestinationEntity(133U);
    msg.id.assign("OWOHCPDMTXLUEIBBHHV");
    msg.sensor_class.assign("VLOFVFGTUBOWTGBRJPIGXZRTTNPCOUHYCJLCDXOZBEPFWKNLYFAZWQWKHVYORUYSKHWTVHUQYLOQIBSLQBASUXVZMAWMYIFJDVCBGJJEGVDZRZKGUDUCNQQMMSQYITSKIQSAEAZAINNVBYWCSCXNZHLXRDHUPMBOJJMLDP");
    msg.lat = 0.3641452502070168;
    msg.lon = 0.7222862917081815;
    msg.alt = 0.7194007782456828;
    msg.heading = 0.5546807890946912;
    msg.data.assign("AYNIXTVNIRTUPJFRUCZIWBAEDEUNLMXBQLMQVTMBGLDSLCIJQPNAFLCUVCUPJAAKHFWUDYDMFQODYNUTIBKEJYOEAXJDXRKFSFLIYNNWPIXSSGTBOBMKKJELOTOGSYXFWTJEDZZCDGCWUVKZXKTNNXPQFQHHOGLRRHBSFMIMWLCAAVGWEIZMRSQGVOEMXZPFGULJHVEAOJUQQSHXGKBOPHERCSRHNYOIR");

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
    msg.setTimeStamp(0.49243378550245165);
    msg.setSource(62968U);
    msg.setSourceEntity(7U);
    msg.setDestination(5034U);
    msg.setDestinationEntity(177U);
    msg.id.assign("ZPQTAANTPQCVDUJVAEESYNLSWXPCGDDBHTYGMPWCBWIJHENXPNIEMVYMBKQCNXSLLVFSTQMRVJVJXMDHCARRZDJLIEJMTEKFUXYTSUFHGOHFEFCFGCNMZQIWBUBBXMBIASPJPUAHCILENLOWQWFQRXBYLHHRZXBKCAODQMUMHYBAHDPOKZRNLPIFIKDTRLVCLYEFJADGGZOXOTJGKZWGRWWOGIUVEIFYVYZQVKTKSOSYU");

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
    msg.setTimeStamp(0.5682529141204454);
    msg.setSource(25525U);
    msg.setSourceEntity(142U);
    msg.setDestination(60778U);
    msg.setDestinationEntity(27U);
    msg.id.assign("QYOIUVZIUFSZKOFGUBNCLCJYYJJVFXOEBJWGXVHSKPGILRQNDRQOPLEXEHUVBTCHWUUIIYAPDBKIUSGCTNCHTKMDUMHSMGEWDVADWQBWRAJIPPTLOOBFNYLVI");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("YBHCAEXKJCKAYVCYWJWKZAHIUDOIEUSOTOTURRONGWJPQEMVIABSSJXYDXGSIJGKRSBLQACSAEERIVBNZQAGWDWOH");
    tmp_msg_0.feature_type = 27U;
    tmp_msg_0.rgb_red = 230U;
    tmp_msg_0.rgb_green = 11U;
    tmp_msg_0.rgb_blue = 63U;
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
    msg.setTimeStamp(0.5409650162274655);
    msg.setSource(26751U);
    msg.setSourceEntity(111U);
    msg.setDestination(45555U);
    msg.setDestinationEntity(151U);
    msg.id.assign("ZMYNEGYGOBBYYEGTUSXCSIFZANLESLQGXWBRRQFHUPPMOFTKKYFEVDNDXVSTJWACIKQBMDHQJORSZMQDHFIGPIVNRPATMEUAUXQNOHSIXWDCHWWJGAZRCVMNXVMRDZCTACHKTHXVMJBLYIOUBRWPUNLKBGHBYKBDVJDILGZIAFSPFXTF");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("MPDLPEXRVDONOTMKFQSTKLNZVLISXDNDWHZRCHMTIYPAKHBGBVOEIYBXYSLRPWPOAIRHAVIQJLTNSUWQMKOGMWCHCGXQNWYYQQPIAPFEFJUJYWQTHVKBFJHWRBNBJCXZXZBQPXGFNOFGJONYCZARFETQKORADTSSZMMCGFIUBUGMZSRLIEDLEEGGLDKVWUYSTZEHJUBECBJSXONDOIAQMIHNWVUMDWYFXYZCKURTLZRKDVJXKAFUCCP");
    tmp_msg_0.feature_type = 134U;
    tmp_msg_0.rgb_red = 147U;
    tmp_msg_0.rgb_green = 58U;
    tmp_msg_0.rgb_blue = 169U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.944608668788933;
    tmp_tmp_msg_0_0.lon = 0.07061580516284527;
    tmp_tmp_msg_0_0.alt = 0.6036739455502219;
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
    msg.setTimeStamp(0.5769124030024004);
    msg.setSource(25911U);
    msg.setSourceEntity(11U);
    msg.setDestination(45276U);
    msg.setDestinationEntity(57U);
    msg.id.assign("BXSAWXXTVDSMPEAOZVAADWLLVWBYMCUXPFEKHDFQJVAFKQPIRYPOAOHFFEMHPYXYPNWNXFDETJFUDXYRNCLZITHQCKEQQAVGQCZCUYTYZGPUGGNILIZMOIZUQNIHVCLQGKKSULEJHAJDJHJTMBJSHNCRTZVWKSZEDWJVXPERYUCYNMCBSHIIKRWKLWVOIHWRJFJTLBBTRTKQFOBSZSADMUBFGRZMMGXOBOSPGNBNMLDIRDENLYQVUUKGOXO");
    msg.feature_type = 77U;
    msg.rgb_red = 71U;
    msg.rgb_green = 13U;
    msg.rgb_blue = 78U;

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
    msg.setTimeStamp(0.8647493573088535);
    msg.setSource(5384U);
    msg.setSourceEntity(206U);
    msg.setDestination(23788U);
    msg.setDestinationEntity(251U);
    msg.id.assign("HTPMSRAGGNTJALBZCSRXZBSISKIPIIDLIVMJAEK");
    msg.feature_type = 218U;
    msg.rgb_red = 174U;
    msg.rgb_green = 14U;
    msg.rgb_blue = 99U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.8426320378080935;
    tmp_msg_0.lon = 0.8365596893231156;
    tmp_msg_0.alt = 0.9877987619560791;
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
    msg.setTimeStamp(0.7522316409280855);
    msg.setSource(17512U);
    msg.setSourceEntity(245U);
    msg.setDestination(61314U);
    msg.setDestinationEntity(20U);
    msg.id.assign("LGWBIHOYRBGTHIOZKDKLTZRFVJEAYZYDEDDAQSOCPBFBKARCVARMCTSCLPUAZCSHSEQXPJKLFPSVNAYYDRDMZPMMPGET");
    msg.feature_type = 86U;
    msg.rgb_red = 228U;
    msg.rgb_green = 140U;
    msg.rgb_blue = 58U;

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
    msg.setTimeStamp(0.22288771978550515);
    msg.setSource(60654U);
    msg.setSourceEntity(133U);
    msg.setDestination(42128U);
    msg.setDestinationEntity(90U);
    msg.lat = 0.24602966943705362;
    msg.lon = 0.01296096397372637;
    msg.alt = 0.6897355030014743;

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
    msg.setTimeStamp(0.43564942015782315);
    msg.setSource(22004U);
    msg.setSourceEntity(253U);
    msg.setDestination(57967U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.8659251135156282;
    msg.lon = 0.6619270031330955;
    msg.alt = 0.8732762638504364;

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
    msg.setTimeStamp(0.36251458938655823);
    msg.setSource(7089U);
    msg.setSourceEntity(7U);
    msg.setDestination(13093U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.7897995011198837;
    msg.lon = 0.4501736287240826;
    msg.alt = 0.6281947752990008;

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
    msg.setTimeStamp(0.6568126780574711);
    msg.setSource(8114U);
    msg.setSourceEntity(48U);
    msg.setDestination(40847U);
    msg.setDestinationEntity(217U);
    msg.type = 228U;
    msg.id.assign("EDMDOKLBBHDGHIFGLLNXSGPMQPPVHENOQSYCEGIBYBNHCTXXWPVLQJIGNIMLFHNJWUPTAWFVLKKYKGWFNMNZVPGTTFZWUPVWRYASYUSSOFQJRGLRHPWVEJIUDMSQQTNZGEHOMRBAKJZEMDJCCRYQVOGMOHYIASBJSJRQCRWUOBPNAZDMCSAKARXXUETTBYFESYJCDUZXWJZKDTBIQT");
    IMC::DesiredVerticalRate tmp_msg_0;
    tmp_msg_0.value = 0.32515203642125623;
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
    msg.setTimeStamp(0.3823910283700389);
    msg.setSource(57167U);
    msg.setSourceEntity(131U);
    msg.setDestination(944U);
    msg.setDestinationEntity(32U);
    msg.type = 31U;
    msg.id.assign("JLPJRLTWQHBFTDHBGSOPPPNCZJYUVNGTUGHZSSGOIQEZSIYNFLDLMXZZLRMNCOXAUWRFQWBCZPBKJIWTFGXXJUKPAEZUEVAKKQDECCQVBTMDKYOGMDEFDRZUQGITMNAFRXTLAKWOCSNHYDBNLVJDLOKKQTLUFNKHQPIMEOMSRVUJBUNGDHFFAEBWORIECXXSNPQXMSVKVCRSWTJIHZHRCVQYJHYAMGSVIYPIDARUBPYIOGFJTYAMWHEXWWBOXZ");
    IMC::AllocatedControlTorques tmp_msg_0;
    tmp_msg_0.k = 0.9556139390442664;
    tmp_msg_0.m = 0.15679069935501;
    tmp_msg_0.n = 0.99578340732224;
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
    msg.setTimeStamp(0.13870523178777483);
    msg.setSource(46164U);
    msg.setSourceEntity(101U);
    msg.setDestination(57246U);
    msg.setDestinationEntity(135U);
    msg.type = 70U;
    msg.id.assign("MZENNLJYTPGEKHDHQFJNUBMLWIZRMYTVJJJVFHBXWONFLWOIUYDHCVIAKGKTHSGEJXSMWVPWQJLBIIYSCDIX");
    IMC::MonitorEntityState tmp_msg_0;
    tmp_msg_0.command = 57U;
    tmp_msg_0.entities.assign("ROUHJBYVKXNAUZOXNWUTIGFQEFGZIAZTVXAYXDDQOMYHBGPEMHCRFVGEZIQQUCAGCNNQEUWKOVWBTMUWWLTHKPBKDCGFLFBDWWUSJIWJDPYXYMLPRGDSMKJNSXHTSETTRNSXAYIGSONFZVXIHLCHRQOJODFUNBZLNXCBZYQAPYJRMFOJKVPFDZICUWVGLHRYEIOPCRKPQIDUCAENZKMOTQJVPBSD");
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
    msg.setTimeStamp(0.3633269932247143);
    msg.setSource(23099U);
    msg.setSourceEntity(126U);
    msg.setDestination(35123U);
    msg.setDestinationEntity(15U);
    msg.localname.assign("JOMBCZWBGSPFMZUHVIQZINNQEFCUUPVBFSTYOYAEYXYJNTNXOSYRFMUMLOULGFLXK");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("NCDNYXNWZJPUSSBOQJMUPAFPMMJBFMJJXCKCREFKWGRFNFJKHFUGQCKYESRSQIZVXCRLWQXLCOUAMCYWJAGSHKJBMDLFGRWDPXTRHHEDOVPLRZOZBCMVLTTVQDVTVVZTGOANAAHQBIKBBZXBNYZX");
    tmp_msg_0.sys_type = 223U;
    tmp_msg_0.owner = 56441U;
    tmp_msg_0.lat = 0.024927797693973908;
    tmp_msg_0.lon = 0.5366326584021384;
    tmp_msg_0.height = 0.8402775991721487;
    tmp_msg_0.services.assign("VNQZNUBLLXBTGADBJMQCWSXTBILXXZIDPHVWNLDPEMYYJULCOPIIURRVRZWGOBYDAFJCOJWRPDEKNRGKKXLRKMIKAPWLTNNMEVZUWEE");
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
    msg.setTimeStamp(0.5851399269379812);
    msg.setSource(32383U);
    msg.setSourceEntity(181U);
    msg.setDestination(62617U);
    msg.setDestinationEntity(117U);
    msg.localname.assign("MYPRAUCWBYLVQEHKWJHXWIPLQSHVKEBWJLCRQSEDTBRTMZPTRGUOPYOPFRJGTCITMANBJXKKESQWVUWGOTDOHCBUEUVSNWFJZABNVKONSKXPMAUNFJNUTJSBXQUY");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("RTBCLCSJHTHEDBNSNTTMDZXQEWXUJSLYFIVHYGJMCJKQLEXPZKWFQPHNOIVLODPKDAYNBNNTMUAGNYOTMMIZTU");
    tmp_msg_0.sys_type = 165U;
    tmp_msg_0.owner = 58098U;
    tmp_msg_0.lat = 0.17673470974282335;
    tmp_msg_0.lon = 0.10161228353584706;
    tmp_msg_0.height = 0.7311562253763821;
    tmp_msg_0.services.assign("FPGUWBZHKEQGLXCOWBQTHJDYKHHWVGBZERKBILDHJYQWXRYNOZVJSXEHCFFZNOGQYRMXABLKGJEPFAGRSMNZARXINADXEVBCYZUNCMPSEVKLGTDUYNSSEWBKHJIKPJTFGILCXDKIFOHMNQMAOMYTLF");
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
    msg.setTimeStamp(0.9901554164368868);
    msg.setSource(30224U);
    msg.setSourceEntity(203U);
    msg.setDestination(11296U);
    msg.setDestinationEntity(137U);
    msg.localname.assign("DOPRZQJDSONLIZXELWOKBRTDZWPVVXWNYGQDXJUJJGDQUQNPEHYJSKTLKEYACDWTXFOLEXXHRKR");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("FEPNNSYVPBCZFRLGUKNGWUVCLOYXWQQCRGRGZIKTDXPQPYTXCVYOUKMMHFLNCGMBQBMKSQFEXUVJFVBADUAYLZWEOKSXWGXINGLEDOTOCIQTFUNEHBFJIIWSVKJTNLLJENGHXWMVJWYOORVCJTSAQNLZJLMAITAUVYMZKDGOEIDZSRRKHDFWOMBEUHY");
    tmp_msg_0.sys_type = 87U;
    tmp_msg_0.owner = 35745U;
    tmp_msg_0.lat = 0.5144738407490244;
    tmp_msg_0.lon = 0.020016094259875272;
    tmp_msg_0.height = 0.05175510764872848;
    tmp_msg_0.services.assign("JVVNEOIYHZIENYROJMDSZDKOYRUIFFWGHUZCTTWBTQZBTPUXNIMXBPUUCMUKYVONAZWTVVKPDNYWTBXHAUEGKABINWVLCDOEQWXAYVOUGNERSDHZAGHJKRILALMPQRCVJQISLWGGT");
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
    msg.setTimeStamp(0.8076637988108684);
    msg.setSource(30876U);
    msg.setSourceEntity(173U);
    msg.setDestination(60256U);
    msg.setDestinationEntity(202U);
    msg.timeline.assign("BHXATUMJEBIIOPQSHGYYNYEUOUSJFRLMZRKVGDXIPKJGRHHFJCYNUOLTQWRRVTADDYFJGABWNXZDZBOMCWAJTTUTWLPLDQWNWHWAZGPAFLDQWCKGEVOSRFTHOARQPQYHOVFKHNXRGJNUGXJVHMCESCMUDXBIFCLCLNMZXICFNOILHN");
    msg.predicate.assign("UGKRQZFMHOHFCEOOEHDEZYPSKSKMT");
    msg.attributes.assign("LISTKKQSJVIWXTXRBCQN");

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
    msg.setTimeStamp(0.15104765686758748);
    msg.setSource(9442U);
    msg.setSourceEntity(126U);
    msg.setDestination(49602U);
    msg.setDestinationEntity(194U);
    msg.timeline.assign("JWCZPACPARGMVPKPXGIMPILPVUKBEAYVHLTCCGHODOLVXWIBKYWNFZYCTXPCFHFKTYFYKVSUULEXFNWUBCPFMWWJIWLZLUNRHIEDAKYUDVTRQSZZNRQMIOSOROITXICDQVJNFAXWSQGJBZZZRMNASERNMRLEYXFSYGERFOJDUPCEVZTAGXDUNTWZAAHBOOVQBBDSNBBHTJQLSOWJFIHMHUMQAJH");
    msg.predicate.assign("TIHRCVNPSFYHNQZXTVXXDICUCZAXXEJFYZVDCYIBIQGMBSDYKYJWONQEHCCQDBDROPXONMMLOLRPFAABTUMGJWURJJQEMOFKQOKNVLSVDATKTFUSOZANZZGSIEUKXKSJLLBTDTKTAMKBXMIJCWSAJOLSWQEABBQ");
    msg.attributes.assign("ZOSBYRHMXATCMQTRNTDPCDIQAFLP");

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
    msg.setTimeStamp(0.7909213076599394);
    msg.setSource(12354U);
    msg.setSourceEntity(79U);
    msg.setDestination(10050U);
    msg.setDestinationEntity(187U);
    msg.timeline.assign("RVTDIKPWYBNZZZJUKDPAHRFSLIBMAHUUJDJCMGUJOZRKTSPDKEFYEZLBQDFSPDKOXZTHBGYZLGVEVAVSCGILTTTHPEOSFVUBJPHDXPVKCXGJSCKZNQJHWXRRPGSWQFFNHCVMCLLUNGYMQSUXLRANYEFKLWQATNENAJWEBZEMMTMYTHLHKFEPMAJOOWFWIWYYTUGLIOBCYRRVXEQDNHVXWBIBBMSPAUFQVSIXNRODCKCXAQIIMOYANCJW");
    msg.predicate.assign("LUUNMOVQLAFHSFANHWSAPGZVHSCYYOWNBBXFNRRCEQQZQOLSXKOEIZMLSZTYNTEEOVTWZDMINYWMTKFPQKKPABGDTQLT");
    msg.attributes.assign("NVADUCGUWNSPTZSZDEQSMCMQUIZMBTQQJJPMLXQIHVFLSZQJTULGAWMZDHNR");

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
    msg.setTimeStamp(0.1739789347164703);
    msg.setSource(62190U);
    msg.setSourceEntity(118U);
    msg.setDestination(34458U);
    msg.setDestinationEntity(62U);
    msg.command = 98U;
    msg.goal_id.assign("AVUDEVLUXULSHIZTSWPTKFRAHBPNSTLKLBIHKKEVQWFFXMCGBABNBMJGIUDBXOGUXOZANJPQKCRPFPOFPXWPCKZANMKJNSINRFYWBDGAFHGJVHLYAVGEJRLRWRPJZERQYJTEZLNGQR");
    msg.goal_xml.assign("YUDOXMISHISXAWJWJAFCHHXBGPBUNNSNKXVOTYQPGKEORMREKDAPMFSRCGIYXNANJEXVILICSCEILLAAFISMTHUYBPDHWRWGETGNFQMLFZXTFVEVFVKSBVJQDGYBY");

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
    msg.setTimeStamp(0.9700372445935141);
    msg.setSource(44075U);
    msg.setSourceEntity(156U);
    msg.setDestination(2644U);
    msg.setDestinationEntity(123U);
    msg.command = 16U;
    msg.goal_id.assign("FYAIEVZJUIAGJITLJDOJBCKHYMIFOVHOABXWQTLQOT");
    msg.goal_xml.assign("WVIQLYPVZKOLNVBRLMXJHNRIBPDYPABUYXQXWFHQTZXUAYCQFEMTADRGBFCHWYHRCTIBTLTTFKZUONCZVDSNFVOXATBAXDUPI");

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
    msg.setTimeStamp(0.38766586747358533);
    msg.setSource(47754U);
    msg.setSourceEntity(156U);
    msg.setDestination(2727U);
    msg.setDestinationEntity(112U);
    msg.command = 135U;
    msg.goal_id.assign("NFXLRAQCHYWICHXYQCEMPPYSMEMELTIVPMZONILTLKWIFWFKFYMZUXYLVSUXGLQKJDSFNZJRVYHKASOVQPOTHGEHBQBQEDJIKRBKTOSPGAUINEGTSSAZQOMCKCWLEWLOWJDDESUUKLRJYHWTJCEWRDPWZJZXRLDQ");
    msg.goal_xml.assign("DBONEARLOCTIKVOCDPYCZZHDMTARSONHDKGNZZIKWKFBPQDQRWWOIAUPDKKQVHVPYQHYJRCIGJQNBSJTJYBPKDUTKUXXOKWXVGUYMBXGNLCDFLFWMLFJHNPROUWHVXREYJSUMYSXBCSPGLTBLEPQHSOXEBGYVXCIABSCJQAATUAKFBNOENDMVMSJVVUIRFIUDGZOZQMHNAJZXIFITRTRLVSGHW");

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
    msg.setTimeStamp(0.07269108683359293);
    msg.setSource(55998U);
    msg.setSourceEntity(145U);
    msg.setDestination(37961U);
    msg.setDestinationEntity(105U);
    msg.op = 196U;
    msg.goal_id.assign("IDRZYXRUVPAQTVQJCNQPUNRKXWIZNJUFGMPZTRGXFGNJQTGIAHKTAPOUQVBFFSIEKHEQMMKPJAFMUCL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MVOZTFXXDKSWYTSEQZSFNYNVXCDHZLWOVQLLVGRIGBNSIAKCALGWESICLNJBDFWMPDGZSCWMPMEBRBETPLBZVOPYCUMTVXIUU");
    tmp_msg_0.predicate.assign("BEOUXOXJFCKVRIKIPRKFRBKPBANSSPRYTDXZUXTRHFBUNYMODQZAFIPXHRVPNHTTOW");
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
    msg.setTimeStamp(0.5556284306752647);
    msg.setSource(64033U);
    msg.setSourceEntity(207U);
    msg.setDestination(38004U);
    msg.setDestinationEntity(100U);
    msg.op = 5U;
    msg.goal_id.assign("BVQTZYYURJFNZJBJJLGEARLORIAMKOUMZBGMBCXNRZOV");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DDXIDMSIYQNRWOPNASBFJVVGEQXLUTWRSJSQDKDFNOKALPJUWDNHJKTTYLMBOPAAWMYOYCFZVUCQMIXNACVIHOBWZBHAGUIMAHKZVUZGWKGSWRYFQZGOJBLOGAEXNTSRXKDVZQVGVCJPIEFHWFXKIHQTKZGVEPMTQRKFTHOSECUZCBQBBCUDTYMFNLPUNIGLGXPCXSEE");
    tmp_msg_0.predicate.assign("FNBJLQYDPYRZZFJRHHJSTFHMLQAMAHBDLHKSAXLORBBCSBVEZTHWKLJVHFGZVGPDZLZPTYWPFYADUSXPXKEERQGDRTTPZDIKOYUZOPXVBXGUJNB");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YKVTJNYFXIFEOECZRPKPQUBPWUKATYDOKDZXCLJTJDXHNCCWQYXF");
    tmp_tmp_msg_0_0.attr_type = 6U;
    tmp_tmp_msg_0_0.min.assign("WURZRJZAKCDYQXMWWKVYKSEXIXRXCTIKMVLOTTYDTCQIQLENCODVOPBNRSYFPDYKHNSFAAZJIPUYGPXGSZGSPJFCWUREXN");
    tmp_tmp_msg_0_0.max.assign("LHRXXSAQSBIXWGTZYXHKUKJL");
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
    msg.setTimeStamp(0.11621235786909401);
    msg.setSource(15555U);
    msg.setSourceEntity(43U);
    msg.setDestination(9568U);
    msg.setDestinationEntity(90U);
    msg.op = 94U;
    msg.goal_id.assign("VEHYAUDLRPARAQKYVDEMWGJGSHIQRMQBIJEMHYOJENJYJLTSDPIDQGGBIVAEXPUZQXTJDVTOBGHFSIBLLUHVWXL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MTGCPTGIUXNADVYLMDVFNJKBRGNQSQTOAHYWIYIIEORIXYRAZYPLIFRJQVQIKEWMTYDDXKHBJVPPVZNUESZXQDUCCUSZHEDRQUEDTKRHSMKEWXHMTAHFBJOXRWPILMLWLKGBPOOEZTMBWQSAZVTGMHZLRXFVHPKUGAPLOWOFZSDNGYGYZUZYJFOKDWSRHEXAONFQBSBVCEPLTJXITAFUQANKMWXCNM");
    tmp_msg_0.predicate.assign("EURPOAJKOWIZIKESSTETAUWXMESPKJCYCXTGTUBZIZYXKYHSSRVFDDHZOZHLCNRHJVGEDBATWWDFCKIVOV");
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
    msg.setTimeStamp(0.7985984272367305);
    msg.setSource(27786U);
    msg.setSourceEntity(67U);
    msg.setDestination(15791U);
    msg.setDestinationEntity(134U);
    msg.name.assign("YDGKBMARFXSEJKJQYMOZTCIQALHWGQMIJPFDBARRPHZYBHGHYJMEXPARACFDLUE");
    msg.attr_type = 201U;
    msg.min.assign("OIFSZYXGQDJESVPAQCDTSJNQTXCLFCJJQFURSOGIBNGLYFEPYEMUDLLRBHDUXMFYGPSGJZSXZZDIDFAIEMBQTAQEVVNMOSBQHETTILGTACCNBOFNDUQHIKWGRKAICYNOPTBOVUWMHPLDNXPJWSJPANBDQPCMQXVIUJZWGRKRZXIKSKNYLFVAMHGLGUNYHDORJHTZBWMMAF");
    msg.max.assign("CTEIBNMBSBLIMGPLGVQYJCHIKBUHUEDRYMTDMWJRTFQHQYVSEVSIALWTWNVZPASBCEEOKOPTZSZDXZYQOEEFUEFVZFNHKDQZJCLQNACZWKHKAYBRXSTVYXXGTMFJJHIISGECXODYHPPVAXXYNFKBRDPUFQADJGZHAMRRTWUKVXVURLRTIUMUDNWNISPGBXLROOQCPYFNJICSMMJAGJFQWGGKNGQBHIDAFUWTUNVAWCOWKSOPOBMJLCXHLLL");

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
    msg.setTimeStamp(0.2563338388319958);
    msg.setSource(26623U);
    msg.setSourceEntity(228U);
    msg.setDestination(57742U);
    msg.setDestinationEntity(196U);
    msg.name.assign("RXLAYBIKBUTPDQNIXYTHEKFIBFGZTRDWLOEVESUTWUOBEPEGXDWKSCCNJTPKOZMMENIUZABTOPJZQVXIUQMHSIOKLWLFAHCVSCCHJBNSAWVMYHEAPGAQTVZDIOSJLRQJCMGGCHIYMGKASVRKPOQUANXADKYGSZRFFFUQRQFJQCUTVPKJDPNRXVXGCHDPGYMEYNNWFWAYMMBSO");
    msg.attr_type = 222U;
    msg.min.assign("LCPUFLQOPWADLZAMBONMHMIQHITFRCVQFNWLYGBRPWKCQMQFQCDSKATDOGTLALIRJAXUSOUZPNUYPGSMEEEOPGNME");
    msg.max.assign("DWIYKOGNBGQNSXKBNMGPHODYLLTMRDEAOOJAXEXZLTTAHCOQSHUZJGUEESUMRVCOJOVJCVQXTPUEKVPYXJVAPC");

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
    msg.setTimeStamp(0.05392804543219831);
    msg.setSource(18264U);
    msg.setSourceEntity(199U);
    msg.setDestination(3379U);
    msg.setDestinationEntity(216U);
    msg.name.assign("YTLUDUVZRVFLSWDYCCLGUSUWZKDXHRTNJMXIWNKWVWKZEQRBBZRDCXFNGAUKLPKCYXXKDNDSAMIXCQSGSQFFZGTWDITWJIBQOPBW");
    msg.attr_type = 19U;
    msg.min.assign("AGYBSNVZFSYSLDPHSXWQGDXVLHLCUUXEAZDFYJJWKHCPIQSFZUVBWQQQSMOSDXLMDUPQRHFKJUREJMXQTWDYCKRBJARWWUEAMJZIHAEOQBEIBYKZRQTTNBAJRXHAITBUKRHPBEYVVZOGOJTDHEJDXSXCCOFP");
    msg.max.assign("RMMUEAPUGDXXGNVQESCWQXYEVNMNPVBMEKJAMJJNEDIAWCXYZCVOZNWTYATGYUKMANSFOLZWIFOEHCMPVGFYWTXLSHQHHBARHTEZUHBWROLESNKSTGILLLCWZRADUWHWZPOVHBJBYYGJVKIMBBXPDFXOLBQRSCUPSZHEITUDNXUPTIINOJR");

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
    msg.setTimeStamp(0.848563949032851);
    msg.setSource(57301U);
    msg.setSourceEntity(234U);
    msg.setDestination(58902U);
    msg.setDestinationEntity(248U);
    msg.timeline.assign("FSULEPHLFWLDLUBJARXVVFIZVUYQOIMOJRGWZGJWOLJNNNIFORHTQKPCNFXVBXRMAWBPWJSVDCKDNGGUYOOQQLPIKKBYBLEBKHNPXDCGPIXBCSEQTLHRSTBAVFNEZQZMSBGVCSTTCTZZURYEKCTHSTQWIXCJPIMKZXHAHRWJTMTRFDJEADOGWZNUMNVAZGAYZJYCMAUKOXWDIQEDAEDCESQYPJADYGIHHKXRSMYFFULUQHXERPKVLOINMU");
    msg.predicate.assign("PBKQZORLVXKFUILSMYKOIXFPRLLLVBPUJOISTEWCBGGKXCWZAIJTQUEMUQYNJNETJZAISQROYXYSGOBGP");

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
    msg.setTimeStamp(0.9010663151002173);
    msg.setSource(62567U);
    msg.setSourceEntity(227U);
    msg.setDestination(48154U);
    msg.setDestinationEntity(151U);
    msg.timeline.assign("ITCYLIQQOZTRACEASQKUTBXVUTSULKEZERSTWRBOPJUONZVEBMJMGFUDRBUFXBAOURPCWJRFWMNPLICDIWPXLEAGRLCIGUGQGNHONYPYGMKDDQZGJCEAPXQIMQEMCDJYEFMYESHWHAVMDKNXZNKSALFHSVDSCHPQWKBTKVBLGYMAXSJVLNKRZRUPOZDTSJFVVZXPLOVJKBPKIJQBHWFFXGNMXQNZHWFCLHYOXOEHJDHIBRATNSGAIYV");
    msg.predicate.assign("DXGZRYRMQDENYVDMICOJZOTAKODDRNEDLZHZBDFYIBJLQUTRQURXGOVAWKKKCTXYIWEYPQSFEEWLNAPWALFKUZPJHITKNOWRVQFVLZSFMSSFENBCHWGHDYPMSCMHANISQXSEYPYJFHWMZXOCLV");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("SNOYHXKDPQEMVZMNPOFVKPJYRPPQOMKIKGFLFMCZBJTSJIWWVXZNTFHYTQYMDCCWJSJFFLCPREZBLUCAISO");
    tmp_msg_0.attr_type = 218U;
    tmp_msg_0.min.assign("FNOQHSUADDHUJGRXKPIOHIPOVSKADQUEZVDYIZFUXJVKYYPABJFEJCJYFIGOYQJYDQUVPQEPZGRPDWWLLGZTVWSEVERWRIMVHOCKSSSZNITWBFCUOXF");
    tmp_msg_0.max.assign("TZKKEEGLHJPVWJEKVZZNWGFJKOUDRYLKEOIIJIWSLAHNFKTSJKGBXNPFYVSVCUAURCFQLJYCQQFEBEOUYSFQZBMWRMGRLEDSIITMFHMAWOGKNTMHJPTZVDAAMTRYWQHTJUVVOQQCUIRZRTNSECVXNESUFQMOONIPWKYSURCRRZXYMUC");
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
    msg.setTimeStamp(0.17416577283197698);
    msg.setSource(24250U);
    msg.setSourceEntity(0U);
    msg.setDestination(61578U);
    msg.setDestinationEntity(39U);
    msg.timeline.assign("NVWIXTEXILBTEPGYNKTADURDMOHEJVLQWFJBOZZYVRLJKFWNNNXYAKCHGRSDQKDRMYPSVKEROPQUBZAFFAPRNPNHPTWGOTUXXNADBUTGDMMRUMLGEXZHFMCZBFWOJJCJQPHUESTSZDIWQOUCQLMSKKCAYQYFQYAVXOCOXSJQUSPIVSHYXZJMSZNBBRCAXWFWPLGTGRHZHWCOLEGMDVBIHDVUIAFLEJCFN");
    msg.predicate.assign("VAYYORGAZBDJEKDEPCRQYKIDVWKWQYIINWGMWQWWTKXBVOCMTDQTCKQAEHGRJNBSKOPDZFKMEVBCHNGUPDZHFLPSSVLCMTNETVXYEGMJSUFLLURRUZOIAN");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("UVNXCKQKAVSYFWXALAHRRWFZQHGBAUFNUIPKD");
    tmp_msg_0.attr_type = 5U;
    tmp_msg_0.min.assign("FIILULEAZXEWHYZJMTEWVVNNYTMFBCYZVTXUOFVGSWADLMFOCUQKOGTHLYWMCHFGSKAJIEDHLAFCHQYJDOPUIDAPTGBLHAVBNOFOXRSHMKTNHZRDCQMTZGUJUDKIDQRRJWYTATXIHIKGFRDGSSFFMIKLOAUWETRPZYEEBIUWPSSKLLPCZQNZAWXOCZNDPSYKBNXWSKPVBWMBNZBMHRRUSJAYJGXDRXJQBIC");
    tmp_msg_0.max.assign("ROQUHBBBUFEDPNLQRWXELHVFWJYYMOCOVHXQPPQ");
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
    msg.setTimeStamp(0.08458043774097546);
    msg.setSource(51803U);
    msg.setSourceEntity(181U);
    msg.setDestination(51818U);
    msg.setDestinationEntity(85U);
    msg.reactor.assign("MCCURPLFNJZGTEEAIGPIYUYLBXYLSYYBXXUJSDRHKIHAJUQWAJNWPDZRDHSIWWRAGUPSNRUFNMJGZBAIECPHZFOLBEXEBGFASEODQWTYXNKQVMSUZGJWKLUPYQYVLSGNTMDOKBTOFTOBDAFCBMJLSCVEINYMIDMPQKDUKPCBNIVCOQCGCOAKRLPKVHHJLIDFOHWMZZITXSOFXSR");

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
    msg.setTimeStamp(0.24415502680498202);
    msg.setSource(44032U);
    msg.setSourceEntity(187U);
    msg.setDestination(13146U);
    msg.setDestinationEntity(254U);
    msg.reactor.assign("HUOBODXNFSUIAJKCFTBFLMITKVQSMMKLZOCTMBRMEWQPIYGWFISWDABCIRCDGUNVLUUQHZAOVTXVXOUNNYYAYXYDPQJRYXHHNIDQGS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("METAZOLXHIRIQDGOWCITTEFXIKGONYCUWNQDYGBQQHCIWFHLEHOOYWSRZFPLXJWUQDQZYRQABSHMJIXBCFTLYORRJWNXVUBWL");
    tmp_msg_0.predicate.assign("EXKHCDCKWKYHRSJQSRTRGJEUPSCWDXRDJVTLZJIHVUHLFOPEVOXSVORTIXZKMEXNNPMHMECFSYLMFLTQQNBWAYGHQUEKMWRGPLDBAUDVEWNASWQPWUKB");
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
    msg.setTimeStamp(0.6128321688606415);
    msg.setSource(8622U);
    msg.setSourceEntity(163U);
    msg.setDestination(49820U);
    msg.setDestinationEntity(94U);
    msg.reactor.assign("ZJJIIMAAZYKSBCZUZFDKFLYXEYJC");

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
    msg.setTimeStamp(0.40279282164494);
    msg.setSource(27589U);
    msg.setSourceEntity(187U);
    msg.setDestination(60334U);
    msg.setDestinationEntity(11U);
    msg.topic.assign("XAXGZPRASWVIUEPAJIVACVRWQAMLYANJNRDXGGREEJCNHESOTUSHELIXSTWXOIZTSMKHGSJXTAVNZFKLPIBJSOUXCHOJYFEFBERDMTLOMBZVUPZQLNLPFETEZMVMDCVJBFYWPRBZLKOWVQGCCUYAOZXUQGRUAJQKFJIQHSZWNSIWDTHORFKKCTPWHKQUBVOYNMNVZBXDBDTPJ");
    msg.data.assign("FKTVAVENQDQQYUCRYTDCRICLAOGGWVHHAIGJAZLGMYIXPWDTGKEKFBVPDFEJ");

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
    msg.setTimeStamp(0.9245606039691197);
    msg.setSource(55750U);
    msg.setSourceEntity(74U);
    msg.setDestination(40741U);
    msg.setDestinationEntity(48U);
    msg.topic.assign("HNLNBAXXJZTFUWZJUZCVAQXJVISQNERMIDVMCAYLIUS");
    msg.data.assign("VFKXWIMTGTYFUEHGCXOVXDOMZNKZYEFFJWHDDGZCYRITGTVYEEEVNOELTLOAIQTQHQHNTBUTESVPIZDVGKNNSKXBWOBOVEDFPGIMUN");

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
    msg.setTimeStamp(0.5443105098288292);
    msg.setSource(56553U);
    msg.setSourceEntity(134U);
    msg.setDestination(26994U);
    msg.setDestinationEntity(219U);
    msg.topic.assign("DZOBRSZWXKQHBMEOKYHLGOWRZTRNVMBJHIUFHQNPRCDZFLEYNUHIBIXKXCDFDUZDVVADGCTAQBFQELNJGEKWUVJGQRPLSJBRSVVUDGJBHNMUSTALKEBGVOXYFCWYHWPHWLRYRNROSPXYAVSNIDCLGTHJGFWASLQPYOIXJJXKFQICLWABVUKXUSGEUYENKIZLT");
    msg.data.assign("SEOXZPGUXIOPAFHNYNSINXXIUTBEBABDAMEIUKLPRTCQXRUYZPEQPWEQZQPJBRBRBFVXNGGBWDJVBYCHOLLSHNJEKOPWVLQLWYAGIDULJVAXHDZXFHTQKFREOYWOHCNIMBYEDYVY");

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
    msg.setTimeStamp(0.19778724837860073);
    msg.setSource(63368U);
    msg.setSourceEntity(43U);
    msg.setDestination(65178U);
    msg.setDestinationEntity(219U);
    msg.frameid = 55U;
    const char tmp_msg_0[] = {-29, -122, -111, 80, -34, -63, -76, -79, -116, 2, 116, -12, 87, -3, -116, -68, -116, -115, -74, 24, -85, -106, 27, -35, 125, -20, 73, -48, -26, -62, 20, -66, -35, -41, -70, -102, 17, 85, -75, -31, -42, 78, -92, 61, 52, -122, -69, -100, 93, -34, -26, -21, -51, 93, -60, 15, 59, -121, 87, 34, 39, -106, 84, 69, 62, -108, 71, -114, -11, 79, 74, -107, 79, -110, -50, -87, -33, 40, -63, 65, 8, 50, -6, -44, -83, -16, -81, 109, -29, 56, -26, 80, -112, -74, 73, 110, 8, -110, 41, 51, -126, -50, -8, 9, -15, 66, -86, -82, 18, -119, 118, -63, 23, -61, 110, -63, -51, 95, 88, -117, -82, -28, 35, 121, 126, -86, 73, 17, 61, 70, 105, 53, 114, -21, -1, 61, 102, -114, 42, 36, -56, -12, 117, 91, 42, 5, 6, 114, 10, -8, 103, 14, -113, 43, -79, 107, -30, -123, -44, -83, 9, 68, 117, 49, -105, 38, -17, -56, 113, -21, 9, -61, 24, -96, 71, -90, -16, -7, -81, 120, 60, -29, -75, 89, -13, 99, 94, -127, -4, -11, -68, 2, 62, 99, 70, -89, 66, -91, -92, 54, -83, 34, -101, -39, -18, -107, -99, -23, 110, 17, 0, -3, 65, 22, -92, -78, -92, -30, -13, 80, 97, 5, 59, 59, 82, -66, 32, -34, 54, -1, 82, 88, -94, 107, -68};
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
    msg.setTimeStamp(0.6284352830313759);
    msg.setSource(12691U);
    msg.setSourceEntity(116U);
    msg.setDestination(4245U);
    msg.setDestinationEntity(193U);
    msg.frameid = 67U;
    const char tmp_msg_0[] = {107, 102, 47, 84, -54, -72, -5, 69, -105, -15, 104, 59, -101, 117, -19, -27, -60, -55, -80, 117, -107, -103, -15, 22, 65, -30, -7, 98, -77, -56, 69, 73, 67, -119, 111, 72, -32, 111, -18, -9, -62, 57, 102, 103, -62, -10, 75, -128, 66, 101, -56, 68, -96, 52, 76, 84, -9, 95, -8, 48, 111, 110, 23, -81, -7, 23, -75, -15, -71, -45, 96, 77, 97, 47, 106, -44, 20, -109, 118, 114, -1, 89, -86, -113, 18, 6, -8, 94, -3, -33, -107, 19, -81, 97, 111, 121, -30, -111, 90, 40, 40, -87, 89, -101, -21, -124, -49, 102, -99, -23, -13, 26, -114, 10, 59, -24, 107, -4, -48, 64, -57, 28, -90, -32, -55, -56, -48, -81};
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
    msg.setTimeStamp(0.08462131725466049);
    msg.setSource(24923U);
    msg.setSourceEntity(120U);
    msg.setDestination(35398U);
    msg.setDestinationEntity(218U);
    msg.frameid = 160U;
    const char tmp_msg_0[] = {-58, -32, -57, -67, 89, 48, -10, 116, 111, -9, 96, 21, 97, 52, 114, -99, 54, 91, 118, -31, -66};
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
    msg.setTimeStamp(0.588048696032542);
    msg.setSource(24944U);
    msg.setSourceEntity(7U);
    msg.setDestination(19010U);
    msg.setDestinationEntity(78U);
    msg.fps = 232U;
    msg.quality = 160U;
    msg.reps = 44U;
    msg.tsize = 220U;

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
    msg.setTimeStamp(0.8642815237777077);
    msg.setSource(5451U);
    msg.setSourceEntity(213U);
    msg.setDestination(22813U);
    msg.setDestinationEntity(163U);
    msg.fps = 146U;
    msg.quality = 52U;
    msg.reps = 35U;
    msg.tsize = 225U;

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
    msg.setTimeStamp(0.012824807413905792);
    msg.setSource(8798U);
    msg.setSourceEntity(207U);
    msg.setDestination(35392U);
    msg.setDestinationEntity(228U);
    msg.fps = 199U;
    msg.quality = 172U;
    msg.reps = 129U;
    msg.tsize = 167U;

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
    msg.setTimeStamp(0.7559022938178684);
    msg.setSource(10252U);
    msg.setSourceEntity(203U);
    msg.setDestination(48288U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.3112450233818512;
    msg.lon = 0.667737482295487;
    msg.depth = 66U;
    msg.speed = 0.40941322476388686;
    msg.psi = 0.40218059598063394;

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
    msg.setTimeStamp(0.4057338225410648);
    msg.setSource(29785U);
    msg.setSourceEntity(69U);
    msg.setDestination(42263U);
    msg.setDestinationEntity(100U);
    msg.lat = 0.9762811092122601;
    msg.lon = 0.8494314278890603;
    msg.depth = 29U;
    msg.speed = 0.04502735588204809;
    msg.psi = 0.1537743475586113;

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
    msg.setTimeStamp(0.5700588587876179);
    msg.setSource(993U);
    msg.setSourceEntity(4U);
    msg.setDestination(41087U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.2398035058200818;
    msg.lon = 0.937240170379059;
    msg.depth = 144U;
    msg.speed = 0.9303236574603851;
    msg.psi = 0.5486572295428551;

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
    msg.setTimeStamp(0.922834476367066);
    msg.setSource(22389U);
    msg.setSourceEntity(218U);
    msg.setDestination(26081U);
    msg.setDestinationEntity(89U);
    msg.label.assign("ECVAZEDRYTHDTGPBSSQHNCVWSBIRHOZZQULKANXCME");
    msg.lat = 0.14737445351183154;
    msg.lon = 0.06839525529177348;
    msg.z = 0.05038541523535034;
    msg.z_units = 129U;
    msg.cog = 0.03233584224571184;
    msg.sog = 0.6746904485430065;

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
    msg.setTimeStamp(0.91209960256697);
    msg.setSource(7973U);
    msg.setSourceEntity(203U);
    msg.setDestination(35055U);
    msg.setDestinationEntity(73U);
    msg.label.assign("PPUOSWCMOEGZOINTYNRZOZJVAQHRZZCSFJXMHYYOHMDAWPEFPXLPLCVTROIKRDPWUCKHISNMLIAXSKJZWOIXWVHFUDAGEEUWK");
    msg.lat = 0.23939016603625607;
    msg.lon = 0.7007304574685743;
    msg.z = 0.5345941437443801;
    msg.z_units = 175U;
    msg.cog = 0.1310285978688469;
    msg.sog = 0.961895297358507;

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
    msg.setTimeStamp(0.8286742164936042);
    msg.setSource(21931U);
    msg.setSourceEntity(196U);
    msg.setDestination(19549U);
    msg.setDestinationEntity(52U);
    msg.label.assign("WCDRLMNMEYBICSAJSOZIESJUEJNLBMGUPHUMDCCXFZGPEDFIUZHFQXWYNYKSTLKVOHWKPVYQEEAPFCOWZURCSAHEIMFMRDAVUZ");
    msg.lat = 0.13409000384246827;
    msg.lon = 0.6336718386679808;
    msg.z = 0.31398025557269804;
    msg.z_units = 40U;
    msg.cog = 0.5521388653623814;
    msg.sog = 0.5372837558412562;

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
    msg.setTimeStamp(0.34445361655633233);
    msg.setSource(34516U);
    msg.setSourceEntity(228U);
    msg.setDestination(27146U);
    msg.setDestinationEntity(14U);
    msg.name.assign("LROMPVVKLVWYPLDFHEPSXPYGEEQFYCOXWYMJSAKYHANRVXYWGRIBEHRRRIXZFUTWPGZVXTPCITNPJNETKFZWVDKOYOHPBJHUMSGAZDEKRLWNKMFJUBMTCYUAYSFPTQHJZQNJLUJWVAQTEBJCDOGEEBDHOWSMTBUDQHSKSTIZOAICDXERMIAXGBQYQCXDGGI");
    msg.value.assign("QEGNTCPWPNJBXRDABVDFSSAFSRUVZRWIPFTXTQPKEUQGFDYHOGKECVGHTMQHURWMSZXOVSKXALTFOCECISOZHELEOUAHRNNZJLMKOVWZYWFCDQPBWOCTEQYVXCGIRMNGIWDBUSXKCAZNTRUZBKBZJRFIXYJOBMYKPIDYMLPCTLNLEDMDQJPYBDXBPXHTWJUJOQJFHNKGVLUMJAXVLAILCEWNYYHZRWGUFSVRQYMIGSLHAGPQNZUMEIBDJAK");

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
    msg.setTimeStamp(0.4958465149254643);
    msg.setSource(27811U);
    msg.setSourceEntity(102U);
    msg.setDestination(29824U);
    msg.setDestinationEntity(224U);
    msg.name.assign("IOKBRXHZQZNQPSUCVVHATZWKYWWNNRSFKPJOWEOHZAAMFXHBJPBJISDI");
    msg.value.assign("MYFJAZACYHAHMRLIUXLZHZOENZQCAIPCJQYWYSXHDCNXAQOQPORKEDTIRTIRIVVAGEAIIUUTVJKRXKLDXUFWMLXYHOPSNHDWCYDHQPWHSVVFOXLENIRPNBCOQEHKWVSDGZYMOJNCBIKPBFAPJSCITRMFZJBWSTPWOQTEPUGGBGNESGUTXENWHZABVLLFWBTDBLPNUSVDZKBXUKCKMVVQJYAYFDMKFDEMTBULRCGJMGGORNUQMFWX");

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
    msg.setTimeStamp(0.5573365627225562);
    msg.setSource(33443U);
    msg.setSourceEntity(244U);
    msg.setDestination(56847U);
    msg.setDestinationEntity(181U);
    msg.name.assign("BBFJTQEIRRSYWMVIMMJKNJKEHQXXLDLBRANNVICKRQYSVGDLDPJCAUXPUIURZGGSRXNIHYYQCQWRBUQUELVTTSFHOBUZEDCAJCSRHUOXODZCKMSFODTDGEPPQFTHYOTIVFZHSVVMSCNGWLGYXCPLY");
    msg.value.assign("SVQMCWQTRXBTTXTAPVYIMHEZSNDZRHGFKZQLZWJPYJJMZBMUZDRUPZKVLLBAWMWXAYAOESYGBIZGAYUXTFBDPLECRTYGWNSRJQLD");

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
    msg.setTimeStamp(0.47905109124122336);
    msg.setSource(13870U);
    msg.setSourceEntity(214U);
    msg.setDestination(59096U);
    msg.setDestinationEntity(222U);
    msg.name.assign("JTSFOWNUUHKCZFBHUQPSQMRAFRCWONUWIPIZQZXMIPVWFZLEFGIKLGQLTCMGLCEYLLYRECKJPSOHTNDDHSLFTEVSTHFNVYOBXZIGAQJQEDFXXVECBMJZKJUHHFPSKNYADUKAZIGLCYQBOYEXKSBNNVRBCXQEMSOAZCXTMYPZGUIDAVAEKFRTYSGIRJDPNRJEAZYBNJXKAOORWMXKUIMX");

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
    msg.setTimeStamp(0.27833899812972174);
    msg.setSource(52962U);
    msg.setSourceEntity(27U);
    msg.setDestination(12214U);
    msg.setDestinationEntity(169U);
    msg.name.assign("APHRDJQQEJBOJNJXZMJTFDLAZAFKKPAFYLNSRYXHICNMUEVVQSWPVQMSNMGXXCFMVDRWYPHILYVGVOSYBGOZVTGTIQYUXPALWYOWDTWXHDIPBCIGULXJHPDHHGQFLWPAIZEDAOXLKDNKUWYFYJBESRQMCZCKCTESWLQFZEVABXSGRKPTZUESTBDGIQTPEZKUQJXMKNROCVUBZCKBFMTHWZMHNOVTGDOCSWAJNUELOFUBREBJN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("KDDVAVRDFRAKVPGZIDSEJNRWBBAJVGERYJTLLZUUFQGMWBHCLWZSBWJUUIQPTPD");
    tmp_msg_0.value.assign("GHSOUHRUTRXY");
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
    msg.setTimeStamp(0.6193342507383507);
    msg.setSource(38736U);
    msg.setSourceEntity(81U);
    msg.setDestination(64571U);
    msg.setDestinationEntity(220U);
    msg.name.assign("JBGGGPMKDLGWEVNGACKGXHPTRERQHRZCLBOWOLBKQCSCALLRRFLMDWXXZHKOZBTMMIUPXYFUCVSYOOSHXPEMNIVPJPZYAERAAMDUNHBQKXHFVPNEQWOMFVMWIFNYUINTVELWDRRQCASAFDOPT");

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
    msg.setTimeStamp(0.7599096274749834);
    msg.setSource(43551U);
    msg.setSourceEntity(18U);
    msg.setDestination(28408U);
    msg.setDestinationEntity(124U);
    msg.name.assign("WLRJGLNPZQEKQDRYJPGLZGXQZEAIBBNRFTNLEMNDDWWWTREIAVOPSOEOTJOHGJBZLVRFDEZSSPKIGKMHEGAWQIJWNFUNCICOTXGDPQIGKEYTMAPASPSIYLOXLVMBJPCVZDYQZPUMFRVSLHKWXCMUXSQCURLEYKUSNSVJRBYO");
    msg.visibility.assign("USLVKIBUQZSWSIBHVWOHPAJDTATYFADQVCHHEJGIMSRWMBMYCPRAFYTTPZQXJUDZZVGVOYVRANCTRIYEHYFDOPVHQMKGFDMQUVIUGJPDGWERSIPCEXZLDULNPNVLNXQNUWFQZODOHPQJJIPYKBWBWXXGRARCETNVMLZNETSILIDBRTAGNGKWKWMKQJOGHCZSIBFCSNBTEYOFR");
    msg.scope.assign("COPRGJIIPNVAHWOUEZIKNWMYEDIPYNMPAKOMUQNUBCHPNVLXKTCROJXQTQXAVSWCHNTRIRJQSLVKWNIVBSTZWMZYVKOYHBWYJ");

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
    msg.setTimeStamp(0.0003452667456239622);
    msg.setSource(52241U);
    msg.setSourceEntity(59U);
    msg.setDestination(38723U);
    msg.setDestinationEntity(93U);
    msg.name.assign("IOBAJHYWRDGTUTPTIEPHOKVQHXMXGEJBNPATGKVNAZYVAYVLUFMJRSQHWLKJBVFJHGFVIWXJKSIMZKOXYCKNQGGVCKJFEJMNJFU");
    msg.visibility.assign("MQITQHSPMRYIDTOQXXNEINPQGPCBJUSEIDCMZKSXGLXDYKAJLFRXQVFSPCFVIYGTUSOC");
    msg.scope.assign("MVGBQBDRUJZTEPOGNCNIEZHOBSREUIQLMJFATHVSSAJAZSUPJARGVCOTZKIYZGNOWDCWGFZEHRAJEUMKPNPXAONSXQQSWLMTXYLVOLTCJXFIUKQGCWPGFHJHIGVZVFHOBRPKURWAEYNEAXNKRCBHOYVKXHFPRBHDPXCAWMPNLVMFSITZJDNDFQL");

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
    msg.setTimeStamp(0.477575646308005);
    msg.setSource(56798U);
    msg.setSourceEntity(122U);
    msg.setDestination(177U);
    msg.setDestinationEntity(97U);
    msg.name.assign("NVAMFDTFZCACZEJRBPVXLY");
    msg.visibility.assign("CHBCYFYBAJXSUHINMLGXWKKCZGVGSDEGAQCWNXPSGAMSERQZ");
    msg.scope.assign("AQLZKUPDDWVIFUDWGMMBCORREPQPZRPNCGAGLCFHOCHYYTTIAANLPQKDGJWEJJASBBHXHLHXYIQJVRYMIJYBEXRGMIHXSWTODWLWUTXJDXKQUKGQFRESTSZANRODUCVGLCYXZQUZMSYFCPSVRMKPVFLEDZZZFTHGBXBVNELTNJWSKTOIMBNAJAGOWZUNSYDSXAHLNAHFOEBRYDJOEVIEKRITVPHXCNICMS");

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
    msg.setTimeStamp(0.003318839318154132);
    msg.setSource(22130U);
    msg.setSourceEntity(61U);
    msg.setDestination(34225U);
    msg.setDestinationEntity(147U);
    msg.name.assign("NXYWCHXQWVICEVWLOTQGEFRZDPWKSZKYDVSONJZMEJRKXMIUUPHDPAWBGHOLUCTBYRMYBUIBVWNGEYIITGMKQLCBSKYWZEUSVZQJECXDENKQBZIPIDDPXNVHIBTRWJGVPQYRUKUGBSEDXLHNSXDGDKAYFGAFQPFZAFQCLSFCXAFTZUJLGTANYLRMFQTGZONBAWHZLJPXVIOBHOEMRAXTESLPQHTYMVJLCIMRUNOKTAORASH");

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
    msg.setTimeStamp(0.8929776108386424);
    msg.setSource(41252U);
    msg.setSourceEntity(126U);
    msg.setDestination(2987U);
    msg.setDestinationEntity(132U);
    msg.name.assign("TLMHZAYIRFTXWNEYCIOJPFNUZIELFYKPJBMMYTSECIILTXNCJYSDVAGFGCOROVMFLGVBPKOCFQYNUDWUIELSBWERSVVLCHTCUUOYWKKGKIVAXUKNZDLQYGZLWNDWQKLJZAXHJMPSAGGUAHBMPXVGXQXKDETAVRRKUBMROXDMNEBETFOYHIEQAYFJWZIQSPXSQEDRVPIKRPFCQLMZZHMFQAJBAC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NRYWRZKDBVVRSLSVGWHDAGMZUFGEKIEIJRZRTRDBINCLS");
    tmp_msg_0.value.assign("NGPJJFJDGFQ");
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
    msg.setTimeStamp(0.44441831932533593);
    msg.setSource(3538U);
    msg.setSourceEntity(90U);
    msg.setDestination(53127U);
    msg.setDestinationEntity(117U);
    msg.name.assign("VGTRKKQFGICBBROPVQSHHADLMHKPMTCVLBGJJZHVHAYBSLTMPQUNBCHZMMOZWQECENOLWVYXFNFDUHSAPIATNZKDQJDZBMINGWXAYEGVFGDUFUIIQMKANDXHQQDQKEIWSCIFURMPCYAKPCVUWWYOZNMVWEJFSUHXUYALEDGORERJXPTBYARJTLBRDTJISACWEUELGTKKFGZ");

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
    msg.setTimeStamp(0.2863215094289089);
    msg.setSource(30688U);
    msg.setSourceEntity(77U);
    msg.setDestination(17828U);
    msg.setDestinationEntity(78U);
    msg.name.assign("SSDROXHBPNPBZZXRBCJGJCPIZABUUMHCUADSGXKCOFGCUVYRHQEWDWTWRKZPILLDHBPSCTQQXJMQAGJMITOZYLSKVCWFSHXCXJGWUWJWFPAINHSLJOJABAESKYVQVGVKAKHOYCB");

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
    msg.setTimeStamp(0.06948072039431574);
    msg.setSource(34606U);
    msg.setSourceEntity(152U);
    msg.setDestination(9646U);
    msg.setDestinationEntity(12U);
    msg.name.assign("YXGVLUFKCSMVSIRVXTJIJBCMYEYSOEPSBKAUMFDOOTXRNGPH");

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
    msg.setTimeStamp(0.847332672582935);
    msg.setSource(52570U);
    msg.setSourceEntity(248U);
    msg.setDestination(19221U);
    msg.setDestinationEntity(134U);
    msg.name.assign("IOGFIYGVUTDPRCXOZRUKXMPHKNAWZHSUEWXNMEESUVABCIXBDAFGTPKIMTGRCSEIZOJYUVHHYYFFKQGIMZFLMBGZSSSCCHRFUKMSHMAZFHEMNWCTMKJJPNPTBNPQQBZYLBXJXOZVXJTEWXWQLGFNUJIBIMOQQTTLNAABVDE");

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
    msg.setTimeStamp(0.9562308858203377);
    msg.setSource(17808U);
    msg.setSourceEntity(110U);
    msg.setDestination(55035U);
    msg.setDestinationEntity(48U);
    msg.timeout = 3625917172U;

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
    msg.setTimeStamp(0.38976021860233667);
    msg.setSource(27665U);
    msg.setSourceEntity(181U);
    msg.setDestination(49456U);
    msg.setDestinationEntity(151U);
    msg.timeout = 3565264407U;

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
    msg.setTimeStamp(0.9508782540689816);
    msg.setSource(6280U);
    msg.setSourceEntity(83U);
    msg.setDestination(25118U);
    msg.setDestinationEntity(74U);
    msg.timeout = 2912732251U;

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
    msg.setTimeStamp(0.7821433930237746);
    msg.setSource(33106U);
    msg.setSourceEntity(57U);
    msg.setDestination(24340U);
    msg.setDestinationEntity(150U);
    msg.sessid = 2042088337U;

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
    msg.setTimeStamp(0.48630063774956644);
    msg.setSource(59719U);
    msg.setSourceEntity(182U);
    msg.setDestination(32364U);
    msg.setDestinationEntity(39U);
    msg.sessid = 935663624U;

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
    msg.setTimeStamp(0.19150454024128094);
    msg.setSource(18461U);
    msg.setSourceEntity(181U);
    msg.setDestination(65300U);
    msg.setDestinationEntity(174U);
    msg.sessid = 2906665437U;

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
    msg.setTimeStamp(0.05868608808989739);
    msg.setSource(34996U);
    msg.setSourceEntity(170U);
    msg.setDestination(47821U);
    msg.setDestinationEntity(155U);
    msg.sessid = 3384333065U;
    msg.messages.assign("SMNRHLLUBVTIIVWUHRFBLDZHXGODZAVKQNJCLCZICWLOYRURZVIZBAWQMUQGOCDBIRXGYOYNUNEMHCYZIYPQTQEFZBOMGKXWVMXOQZNXHAKYUPFTSQGUIDWXPFFPPLSAVOYDVEYFQWTRTHEXMSGXDQHAIJVPCOLXJBNDDJJUTIKWEQMMWLKBKHRNECBJT");

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
    msg.setTimeStamp(0.24475857624266184);
    msg.setSource(48423U);
    msg.setSourceEntity(117U);
    msg.setDestination(3905U);
    msg.setDestinationEntity(179U);
    msg.sessid = 3834595688U;
    msg.messages.assign("ZIJUYFGACWSSOXYWJMNZNJNKVAJZYEZBFOPWSLQIRXVQVEHLZJCFEXSVIAVJANVPKMHRLZCSHXFLBTGKSVXFUIGQDMLFUIERMFPJROBHTXWZSHADWXGWTZLXTPNANWMBFIMOUOAJCYERGPUMLDZYUCKYEVTSWGMEOGFYDGVDURLHJBNMRDKDRHEUQEYKFQTCPXGPQKQNSRIPIYUHLPBIBKMBB");

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
    msg.setTimeStamp(0.22275487058082355);
    msg.setSource(25509U);
    msg.setSourceEntity(149U);
    msg.setDestination(33107U);
    msg.setDestinationEntity(194U);
    msg.sessid = 2726284082U;
    msg.messages.assign("XJBIXFPXGHIKBMSGGLUYKNLTVGPHNJILLYQUUUOYFTTXBRXOKDUWKPSIAYVYJBBNRPZZCQLQAOZEYCMXMTQULYHPRJVWHGCGWNHQQULSCARRAJTTDNVVTABFWTSAXVNICZDXHQFZOEBEBENJOYRKJJDSFONQWQKGZSDCKPMZC");

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
    msg.setTimeStamp(0.7617447225264729);
    msg.setSource(60091U);
    msg.setSourceEntity(124U);
    msg.setDestination(61962U);
    msg.setDestinationEntity(136U);
    msg.sessid = 3894892133U;

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
    msg.setTimeStamp(0.6283581356730433);
    msg.setSource(17412U);
    msg.setSourceEntity(162U);
    msg.setDestination(51888U);
    msg.setDestinationEntity(83U);
    msg.sessid = 10358289U;

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
    msg.setTimeStamp(0.7671198355117275);
    msg.setSource(22535U);
    msg.setSourceEntity(225U);
    msg.setDestination(9276U);
    msg.setDestinationEntity(153U);
    msg.sessid = 2970773944U;

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
    msg.setTimeStamp(0.5831542366919129);
    msg.setSource(57614U);
    msg.setSourceEntity(231U);
    msg.setDestination(57577U);
    msg.setDestinationEntity(248U);
    msg.sessid = 927957866U;
    msg.status = 4U;

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
    msg.setTimeStamp(0.6448551535916328);
    msg.setSource(34826U);
    msg.setSourceEntity(193U);
    msg.setDestination(4592U);
    msg.setDestinationEntity(37U);
    msg.sessid = 1473910168U;
    msg.status = 64U;

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
    msg.setTimeStamp(0.8751268403264694);
    msg.setSource(16950U);
    msg.setSourceEntity(106U);
    msg.setDestination(2688U);
    msg.setDestinationEntity(126U);
    msg.sessid = 1948786102U;
    msg.status = 98U;

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
    msg.setTimeStamp(0.06771031779360681);
    msg.setSource(43443U);
    msg.setSourceEntity(73U);
    msg.setDestination(35106U);
    msg.setDestinationEntity(252U);
    msg.name.assign("CIEWJIXRRCFKWNSTSFVZQBUXJZGYRGRMOEIBMRUALEXDXMO");

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
    msg.setTimeStamp(0.5326564599960166);
    msg.setSource(22968U);
    msg.setSourceEntity(183U);
    msg.setDestination(17368U);
    msg.setDestinationEntity(194U);
    msg.name.assign("RZPWYGHLPEDWFAFTMEZIQLBQBOAOSEUNUPTDHJEQUUVGXWFKQIVIJDKACXXCRAGPUCGTGRZEEIWTYNOCTYHRVCDE");

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
    msg.setTimeStamp(0.6704873081252647);
    msg.setSource(20415U);
    msg.setSourceEntity(158U);
    msg.setDestination(63440U);
    msg.setDestinationEntity(185U);
    msg.name.assign("ENCLJFXIYDSRYWYCLNEGVNCBECISGTYHJFZRJFWYFGVKPIASGNRKRYEKNQUSARFUSBMWHDBXQDLBKMJADMHHJJHCTXXW");

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
    msg.setTimeStamp(0.8538497988692778);
    msg.setSource(14779U);
    msg.setSourceEntity(243U);
    msg.setDestination(57849U);
    msg.setDestinationEntity(61U);
    msg.name.assign("IWJHLNITWSSGRJUFPFFBUACPBLEQSCTNPRWQQFCCTEHJCLYGGZCIGCVVQAMBKNEYKQUNSUJMOJDPHMDZYMUIIGOQUOYTYJAAPNWORXDRXLBZCERYZEPBOOETDZIJBPNOXNHWNDVVLMBZVRSACQMORHFTHXKLZJXMIAKFRN");

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
    msg.setTimeStamp(0.5746697059106858);
    msg.setSource(1362U);
    msg.setSourceEntity(231U);
    msg.setDestination(38990U);
    msg.setDestinationEntity(133U);
    msg.name.assign("YQARPNUPZTSTTUPTFAIKNWRHJCZVFSHWSQHEKSCWTFIREQMRNXMZIYYDOYJVXWJOHTCOXZVYZOLWDNERWVLHWMMLGBDZQXKJBLDOIPOMYTIZTEQLBIPVYSMGIHPZCHNVVPITAFFNMWAYSJYQVPKRFUWGLPDHEFUSHXYKURBGNXQHSAFBZGUKGOCGQCMAG");

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
    msg.setTimeStamp(0.7853063443564614);
    msg.setSource(61453U);
    msg.setSourceEntity(171U);
    msg.setDestination(11104U);
    msg.setDestinationEntity(29U);
    msg.name.assign("YMEHWYHTCCCSXMRSPXMXVSESACTIUHNQZPHRJBCJMVEJBEMQFANMPVHRPMDOUTZBHZEIXYQSTALWBOHXBQLFXGFQUTWWBYCGVKTOVKSWLUXFDDKZSYGIGQASPMXSDBVJRKZKFUILVJNIMXAJDQRASODZEG");

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
    msg.setTimeStamp(0.5475365081535644);
    msg.setSource(44209U);
    msg.setSourceEntity(224U);
    msg.setDestination(29949U);
    msg.setDestinationEntity(108U);
    msg.type = 52U;
    msg.error.assign("QNJDYOHRIWMIIGUSBZIJUQMXLZHWZHVDKEGCQVGQQNOBGMVJTTKDEZL");

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
    msg.setTimeStamp(0.2062885453704516);
    msg.setSource(19460U);
    msg.setSourceEntity(89U);
    msg.setDestination(36175U);
    msg.setDestinationEntity(143U);
    msg.type = 84U;
    msg.error.assign("EBKAWTHLYIPUORDCEFMNIGFVSQGUKQCMVBNGRSOFTHCYOCIZJOBQBGMGLDFXXHLSAKVPCXDIYDPICHJEKATUDFULXJDNCBAXEERSUKUEBUOVGRXRLPZQFQMEOJYJRZMYNWFHMLHZKRPYQGXSQGYUWTRFYVTHOSAGUWSRNXWLOHXQTDAIVVDHGLTSFSJJWWFIVMJLEKMKBPPZBVRPXECIYWKJAHNYWB");

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
    msg.setTimeStamp(0.7528370880374934);
    msg.setSource(48099U);
    msg.setSourceEntity(207U);
    msg.setDestination(51136U);
    msg.setDestinationEntity(84U);
    msg.type = 61U;
    msg.error.assign("RRRAXIQTJUDRGHUZQVNWIDYPVKITEYDYBXKDHAABXJMELSLKHBLOSXVPXZCZUGTTZQ");

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
    msg.setTimeStamp(0.8361826579089507);
    msg.setSource(51194U);
    msg.setSourceEntity(107U);
    msg.setDestination(64131U);
    msg.setDestinationEntity(18U);
    msg.seq = 45327U;
    msg.sys_dst.assign("HGOBDQXAXBDUDTNOHGBXZMJCFVGJTKICOQMEDAZLVOPDNNNDUYNIKHUVSDXEPMHLAJJIYUVGBMJDRPNLGOPWWSWAEBFZOSSRNFGUTJVAGPAFXTSCYMZHNKKJHQBUZFVNRLREYKYCQKIERWYQCASTBLRLZFOFJCCIOUBXGSTEWGB");
    msg.flags = 212U;
    const char tmp_msg_0[] = {102, -20, -102, 46, 70, 1, -125, 58, -121, 120, 25, -53, 109, 73, 15, 13, 113, -74, 126, -61, 57, -124, -76, -51, -33, -64, 92, 4, -89, 12, 123, -45, -47, 74, 34, -46, 47, -6, -56, 111, -77, -70, 48, -83, 79, -37, -95, 61, -75, 77, 119, 79, 33, -43, -121, 11, -110, 28, 100, 61, 86, 101, -83, -4, -6, -88, -79, -94, 37, -121, -8, 59, 95, 68, -114, -106, 39, 58, 54, 34, 19, 6, 29, -54, 13, 63, 71, -11, 117, 72, -30, -2, -78, 113, 20, -103, -49, 106, -57, 39, -2, 12, -46, 119, -56, 45, -40, 73, 65, -128, -89, -14, 42, 11, 67, -83, -111, 19, 1, -8, -24, -77, 13, 64, -97, -121, -38, 91, 59, 34, 110, 27, 82, 36, 23, 2, -16, 94, -122, 98, 69, 95, 31, 74, 58, 115, -117, 119, -21, 20, 10, 112, 86, 111, -71, 0, 45, -46, 124, -62, -97, -37, 64, -7, 26, 37, 88, -43, 68, -72, 88, 124, 35, 10, -48, -31, -78, -106, 77, 44, 40, 20, 7, -62, -19, -98};
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
    msg.setTimeStamp(0.9098592007961801);
    msg.setSource(14653U);
    msg.setSourceEntity(26U);
    msg.setDestination(23216U);
    msg.setDestinationEntity(97U);
    msg.seq = 2402U;
    msg.sys_dst.assign("MRICNNAVGUEUPOUENGTHBTZUJIWMVJJGJPCEMFQFVDDDEGIHPVSKQBBNNWBTSESGYXJQJVZFMOSFMGKOMYWOPMZXJFRNAHLZSS");
    msg.flags = 206U;
    const char tmp_msg_0[] = {-41, -68, -19, 78, -51, 19, -71, -24, 19, -1, -121, 85, 100, 70, -50, -30, -116, -68, 35, -124, -125, -104, -113, -108, 45, 36, 60, 18, -98, 78, -68, -49, 13, 69, -102, -17, 84, -74, -118, 6, -3, -11, 44, 60, -127, 99, 58, 25, -105, -101, 88, -83, 107, -16, -52, 32, -111, 97, -49, 118, -27, 49, -92, -94, -62, 90, 121, 19, -123, -102, 52, 9, -95, 67, 35, 37, -23, 76, -92, -108, 42, -114, 18, 34, 11, -116, 68, 84, -127, -115, -66, -63, -48, -50, 26, -48, -81, 69, 89, 87, -26, -49, -14, 107, 117, 90, 88, -20, -3, -43, 98, 83, -80, -28, -86, -72, 108, 81, -84, -30, -19, -11, -61, -76, -33, -62, -54, 66, -127, -50, 96, 87, -88, 112, -29, 24, -66, -124, -123, -5, 22, 50, 44, 6, -113, 36, -16, 94, -32, -21, 36, 103, 71, 83, 30, 17, -13, 93, 44, -3, 39, -103, -119, -59, -12, -108, 121, 10, -108};
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
    msg.setTimeStamp(0.20653021561512386);
    msg.setSource(13845U);
    msg.setSourceEntity(41U);
    msg.setDestination(57146U);
    msg.setDestinationEntity(74U);
    msg.seq = 10362U;
    msg.sys_dst.assign("UZKPONNZHLYTKXYREGKTGAAHGUNTZRMAHFDOPSJQBPSWHWFBEKXEUJGGDXREKDNGNWIGDVVPVVCPWSAWTVICFNJLTDOIEGZPUQMHLOPRIKIURMVCTECXWFHJLFKKYQKRRTTCLSZYROIJNAQQQCBFYCBGLLYBDYJDFQSSX");
    msg.flags = 136U;
    const char tmp_msg_0[] = {-63, 123, -76, 107, 4, 83, -19, -83, 118, -60, -78, -5, 45, -91, -51, -53, -11, 117, 51, 31, 53, -69, 76, -112, -41, -70, 80, -12};
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
    msg.setTimeStamp(0.18068286675312628);
    msg.setSource(62819U);
    msg.setSourceEntity(224U);
    msg.setDestination(47201U);
    msg.setDestinationEntity(67U);
    msg.sys_src.assign("DEMGZSUIHPNSNOPZOYIOROOBWZPKGICYNVVRLKKQMEAQYYBKMKTSDEIWFBWHTTFIZYEBPTBUYUVSGXEMT");
    msg.sys_dst.assign("TTDJZGGQJLRFQURWBDNYODQCYWTKJBIWRNWDLRNYUNBQPCTBWOQZLQXDQYEFCCCPPIHDTJAPFXPAUJVISCBNIONHKJZCLPDFAYXKNNOJYSKVPMZRGSESVUJAQKFVMDKMEGBCMTLOEEPIFLALGTVAGHOUILFZRWNZISFONUICHHABVHMZVXOGMYRHKSXLSTOFLBUEZXXVEJKRJXWXYWYU");
    msg.flags = 159U;
    const char tmp_msg_0[] = {23, 75, 117, -118, -118, -44, 28, -23, 3, 94, -20, -111, 41, -105, 111, -123, 34, -86, 93, 66, 113, 98, 75, -93, 42, -87, 86, -41, -58, -6, -89, -108, -104, 39, -113, 42, 3, 65, -1, -110, 15, -109, 56, 19, -26, 19, 51, -12, -117, -22, 69, 70, 60, 3, 93, 74, 99, -28, 124, -83, -89, 98, -60, -65, 39, -110, 113, -109, 118, -76, 111, 72, -31, -60, -49, -85, -125, -2, -84, -44, 57, -47, 45, 39, -81, 106, 59, -20, 119, 24, 67, -107, -111, 3, -61, -120, -21, -111, -126, 40, 109, -77, 73, -28, -46, 119, -108, 12, 73, 22, -112, 43, 19, 101, -59, -48, -71, -2, -13, -48, 60, -8, 46, -31, -100, -77, 39, 23, -75, 21, 94, -100, -122, 71, 37, -32, -9, 115, -55, 57, 49, -113, 36, -101, -62, 93, -81, -14, -32, -2, -126, 71, 125, -17, -113, -14, 39, -40, -47, -24, -123, 96, 17, 60, 32, -87, -22, 121, -110, 20, 21, 62, -74, 42, 46, -12, 32, -8, -74, -43, -116, -69, 119, 11, -105, -119, 22, 77, 107, 78, 102, 72, 4, -49, 4, 38, 15, 33, -92, 117, 49, -1, -63, 110, 95, -30, -65, 82, 87, 89, -90, 69, -97, 91, -20, 95, 110, 60, 8, 62, -7, 96, -37, 20, 31, -71, -31, 104};
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
    msg.setTimeStamp(0.6807610345110242);
    msg.setSource(22316U);
    msg.setSourceEntity(212U);
    msg.setDestination(25061U);
    msg.setDestinationEntity(210U);
    msg.sys_src.assign("FFZOOMZNUDQLSXHPGFUOXYPQXQWNGMWWMQEDXMYHNXOXRKUQXPKHNIPWYICFOYCJDZHJDNSRHYDGMFPAAYBZKLHYFESDMLKZZUJUCXUIBUDTTSVQTVKIJEVQTRTG");
    msg.sys_dst.assign("EAFGAMYDPZXREHTJVQGDHXOOOUCPSZHHSIOUPFJYRGBKFULBWTQTCIECSRWRMXSLTXCNAQKYKUYNOEWMGROVXRSVLAVSKMFEPVLIRXPECOXKANPWYNZAFUPUTVGBDMZFDLBLKFDNWCZARGKHGJKZIPBMBYVHFJDWZYSTMNMLIVYMDNYSCOQWQJXELHUJBYUCJGQZTCTHTHRFKXZJVQIFGSWEOXPWLBEQKTAOINWHDIMNSA");
    msg.flags = 45U;
    const char tmp_msg_0[] = {-27, -36, -51, -44, 22, 95, 33, -78, 121, 12, -112, -30, 51, 29, -109, -54, -38, -42, -37, -1, 73, 15, -41, -15, 69, -26, -46, 84, -87, -79, 79, -102, -102, -95, 82, -8, -94, 50, -8, -56, -63, 55, -13, 36, -51, -115, 12, 33, -30, 33, 81, -94, 77, -49, 3, 42, -87, -113, -7, 100, 4, -59, -38, 114, -1, 63, 62, -62, -1, -110, 29, -46, -31, 32, -15, 81, -109, -46};
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
    msg.setTimeStamp(0.5169047851037697);
    msg.setSource(59124U);
    msg.setSourceEntity(159U);
    msg.setDestination(14649U);
    msg.setDestinationEntity(103U);
    msg.sys_src.assign("FNUBGTHVQZDSQMYTJMENDYJJWTRATESQODQXOQUHOJWLILQVJGMBAIHOULRBPDPFYCPHOZRFYUBXLSANYIYCVOMKKXKPSSXJGWUHOXPQITRDXNLLWMGDSUICCGGQZHPCDXIEWWBZYFCUGOWBCTPVKSOKEFPLMNSREOBICXWEDKZKDFJIBDKETAEZZFNNRJNCHSPYMAUTZGRVFGAQPZAASVVJJUHVWNREIMWGLHAXUINYLYCLTKQ");
    msg.sys_dst.assign("XJYPQEDCEM");
    msg.flags = 61U;
    const char tmp_msg_0[] = {-33, 68, -51, -104, 36, -9, 113, -91, 71, 52, -40, -126, 40, 60, 30, -59, 101, 70, -61, 113, -54, 66, -36, -51, -66, 29, 59, 110, 0, -112, -54, -50, -122, 115, 32, 90, 3, -64, -26, -7, -1, 87, 76, 108, -54, -62, -68, -12, -23, 59, 37, -40, -37, -95, -31, 115, -35, -10, -29, 80, -63, 19, 115, 22, 31, -42, -69, -120, -45, 98, 120, -44, 78, 55, -122, -51, 12, 100, 52, 1, -53, -20, 104, 6, -102, -123, -52, -112, 83, 49, -14, -67, -69, 28, 119, -91, -31, -4, 29, 22, -76, -97, -87, 120, -78, -99, -118, 104};
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
    msg.setTimeStamp(0.12176055476419667);
    msg.setSource(26983U);
    msg.setSourceEntity(121U);
    msg.setDestination(1310U);
    msg.setDestinationEntity(128U);
    msg.seq = 35931U;
    msg.value = 6U;
    msg.error.assign("LTMFIQQBGKOWHSLY");

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
    msg.setTimeStamp(0.9060078871300364);
    msg.setSource(38660U);
    msg.setSourceEntity(215U);
    msg.setDestination(47186U);
    msg.setDestinationEntity(233U);
    msg.seq = 14149U;
    msg.value = 3U;
    msg.error.assign("KDFNIWNFAHPYWNDVHHDVZMLEHUFFWQXDWBGPHTOBFZSYYZBWZRQUDIWTLCCLCSPHPLJECLMRRNQORKABIAQXIMADNNGKUXPKQJYOTUECSFNXEPGZNPJMQAVVIZUGUYV");

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
    msg.setTimeStamp(0.014285628889349589);
    msg.setSource(618U);
    msg.setSourceEntity(158U);
    msg.setDestination(41009U);
    msg.setDestinationEntity(85U);
    msg.seq = 25700U;
    msg.value = 22U;
    msg.error.assign("UIHUNWVOWYTDUKKPLFVYNJJTKYJKPIGQIUAAOEMDIARKJSTIXDZDWJWNBMUBPLFXNYXRPLMQNPYBGDFWOQBZRDMKEPJALTCGYGDNYVEHFFMIAMFOSEFWFXZPCZIWXIJHRLPVCAVUEOJVOPJOEQIQSSKUZNTVQYVWGLUEAHGC");

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
    msg.setTimeStamp(0.6303820385211936);
    msg.setSource(47845U);
    msg.setSourceEntity(213U);
    msg.setDestination(39462U);
    msg.setDestinationEntity(24U);
    msg.seq = 1714U;
    msg.sys.assign("POFNOCSBJFBIGWOPYIBNQVMQHDFPRCWJBBALRQCLZMTZXTGQLRIIAZKYVFPFVCESZYTWNXWDGCGAUATKGKTSRAQNWDABYYMFPKOPHYUFVGOP");
    msg.value = 0.7302492831738725;

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
    msg.setTimeStamp(0.5458056358621158);
    msg.setSource(31318U);
    msg.setSourceEntity(91U);
    msg.setDestination(44758U);
    msg.setDestinationEntity(163U);
    msg.seq = 15899U;
    msg.sys.assign("XOAUMKUBZTTGTRVAQFVMUEAWZXSSHAKDVPRPNGVLVNWJNYFOXCARRLIOENEVCLDMGJSWFOYLDCHJDPXEFZDHQUYNTHUPQTECGGIYFAJZNYHSINMQUIKPQTRYCSOZRJCOMJIBBFPUJPHWXWLFQTDESXKNSYWGGJVDXLGZCBIOQQWJCRHELMVTXOAODGAEFRKYLGJUCSOLZQPWPUXFZRM");
    msg.value = 0.9121525394808211;

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
    msg.setTimeStamp(0.04930262604415592);
    msg.setSource(16835U);
    msg.setSourceEntity(254U);
    msg.setDestination(31589U);
    msg.setDestinationEntity(113U);
    msg.seq = 19849U;
    msg.sys.assign("XSLNQRYCTNSQDYADRYOAMYBRZKCUXBREIFL");
    msg.value = 0.8432002496333971;

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
    msg.setTimeStamp(0.7577677205550446);
    msg.setSource(12030U);
    msg.setSourceEntity(155U);
    msg.setDestination(55588U);
    msg.setDestinationEntity(60U);
    msg.action = 252U;
    msg.longain = 0.7568954584232337;
    msg.latgain = 0.09527250819918365;
    msg.bondthick = 3404662585U;
    msg.leadgain = 0.5320659840781001;
    msg.deconflgain = 0.7049426798688555;

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
    msg.setTimeStamp(0.11009772070172297);
    msg.setSource(54869U);
    msg.setSourceEntity(0U);
    msg.setDestination(19918U);
    msg.setDestinationEntity(142U);
    msg.action = 81U;
    msg.longain = 0.4183199068580772;
    msg.latgain = 0.9433601009334727;
    msg.bondthick = 3377347639U;
    msg.leadgain = 0.19257426795442656;
    msg.deconflgain = 0.3451931340314336;

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
    msg.setTimeStamp(0.7254034187532402);
    msg.setSource(30941U);
    msg.setSourceEntity(100U);
    msg.setDestination(7626U);
    msg.setDestinationEntity(1U);
    msg.action = 218U;
    msg.longain = 0.74801195227005;
    msg.latgain = 0.7959032667269691;
    msg.bondthick = 4179614703U;
    msg.leadgain = 0.9750877408773854;
    msg.deconflgain = 0.6618855074365881;

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
    msg.setTimeStamp(0.7911814411719015);
    msg.setSource(64350U);
    msg.setSourceEntity(249U);
    msg.setDestination(25554U);
    msg.setDestinationEntity(155U);
    msg.err_mean = 0.9807185469432487;
    msg.dist_min_abs = 0.5719568476611151;
    msg.dist_min_mean = 0.8419361309688572;

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
    msg.setTimeStamp(0.005830930597510164);
    msg.setSource(52761U);
    msg.setSourceEntity(223U);
    msg.setDestination(33531U);
    msg.setDestinationEntity(128U);
    msg.err_mean = 0.5664575473678289;
    msg.dist_min_abs = 0.8646277301370592;
    msg.dist_min_mean = 0.20945347323918084;

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
    msg.setTimeStamp(0.9273108841876982);
    msg.setSource(41586U);
    msg.setSourceEntity(76U);
    msg.setDestination(23749U);
    msg.setDestinationEntity(72U);
    msg.err_mean = 0.08283441966598915;
    msg.dist_min_abs = 0.7276395589342789;
    msg.dist_min_mean = 0.6807640714524921;

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
    msg.setTimeStamp(0.07803437701683713);
    msg.setSource(60977U);
    msg.setSourceEntity(251U);
    msg.setDestination(2215U);
    msg.setDestinationEntity(154U);
    msg.action = 26U;
    msg.lon_gain = 0.7553397986773718;
    msg.lat_gain = 0.8746432492793518;
    msg.bond_thick = 0.23052643784688853;
    msg.lead_gain = 0.6561935297616603;
    msg.deconfl_gain = 0.8548072467893771;
    msg.accel_switch_gain = 0.21134581043004763;
    msg.safe_dist = 0.09869009052771782;
    msg.deconflict_offset = 0.3245512263139638;
    msg.accel_safe_margin = 0.4112479005468729;
    msg.accel_lim_x = 0.671184086499148;

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
    msg.setTimeStamp(0.9650975598309903);
    msg.setSource(39705U);
    msg.setSourceEntity(94U);
    msg.setDestination(10210U);
    msg.setDestinationEntity(64U);
    msg.action = 246U;
    msg.lon_gain = 0.2775026799003034;
    msg.lat_gain = 0.5130538124616827;
    msg.bond_thick = 0.1260645183101673;
    msg.lead_gain = 0.4361411416331328;
    msg.deconfl_gain = 0.22166300562888508;
    msg.accel_switch_gain = 0.7577117290320228;
    msg.safe_dist = 0.07689307339418439;
    msg.deconflict_offset = 0.12472639091930027;
    msg.accel_safe_margin = 0.15185962761726024;
    msg.accel_lim_x = 0.31109527587708674;

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
    msg.setTimeStamp(0.3473287907363528);
    msg.setSource(26525U);
    msg.setSourceEntity(153U);
    msg.setDestination(22836U);
    msg.setDestinationEntity(22U);
    msg.action = 69U;
    msg.lon_gain = 0.9606119647878878;
    msg.lat_gain = 0.8169495456671724;
    msg.bond_thick = 0.17601157474866025;
    msg.lead_gain = 0.16744119069473495;
    msg.deconfl_gain = 0.5567359871592706;
    msg.accel_switch_gain = 0.743495462739782;
    msg.safe_dist = 0.7121371461741581;
    msg.deconflict_offset = 0.40732907066068413;
    msg.accel_safe_margin = 0.6151735082567442;
    msg.accel_lim_x = 0.90868198520526;

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
    msg.setTimeStamp(0.29437463090709404);
    msg.setSource(57146U);
    msg.setSourceEntity(85U);
    msg.setDestination(2231U);
    msg.setDestinationEntity(116U);
    msg.type = 239U;
    msg.op = 235U;
    msg.err_mean = 0.9735394214272102;
    msg.dist_min_abs = 0.7950996424615031;
    msg.dist_min_mean = 0.36217377406414775;
    msg.roll_rate_mean = 0.06746880502404062;
    msg.time = 0.7992988046454973;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 75U;
    tmp_msg_0.lon_gain = 0.2978109060908749;
    tmp_msg_0.lat_gain = 0.12429382727180438;
    tmp_msg_0.bond_thick = 0.6925238867902397;
    tmp_msg_0.lead_gain = 0.7199835419333612;
    tmp_msg_0.deconfl_gain = 0.047418210053271626;
    tmp_msg_0.accel_switch_gain = 0.14031378768099978;
    tmp_msg_0.safe_dist = 0.5436860089347479;
    tmp_msg_0.deconflict_offset = 0.3733483359955394;
    tmp_msg_0.accel_safe_margin = 0.4333229588812181;
    tmp_msg_0.accel_lim_x = 0.5414918925963494;
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
    msg.setTimeStamp(0.9120749057169152);
    msg.setSource(57960U);
    msg.setSourceEntity(71U);
    msg.setDestination(4792U);
    msg.setDestinationEntity(226U);
    msg.type = 111U;
    msg.op = 135U;
    msg.err_mean = 0.9217977278453265;
    msg.dist_min_abs = 0.9296951014846226;
    msg.dist_min_mean = 0.2401485097308077;
    msg.roll_rate_mean = 0.9956099136245367;
    msg.time = 0.9495596384545264;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 78U;
    tmp_msg_0.lon_gain = 0.12631370879845372;
    tmp_msg_0.lat_gain = 0.8033364401029476;
    tmp_msg_0.bond_thick = 0.4780251729021927;
    tmp_msg_0.lead_gain = 0.619065514344179;
    tmp_msg_0.deconfl_gain = 0.6124936698488789;
    tmp_msg_0.accel_switch_gain = 0.9346365893755715;
    tmp_msg_0.safe_dist = 0.31804035382471607;
    tmp_msg_0.deconflict_offset = 0.6032571230321224;
    tmp_msg_0.accel_safe_margin = 0.1403340796058511;
    tmp_msg_0.accel_lim_x = 0.3439103947942851;
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
    msg.setTimeStamp(0.7099399734726163);
    msg.setSource(53568U);
    msg.setSourceEntity(10U);
    msg.setDestination(49427U);
    msg.setDestinationEntity(130U);
    msg.type = 154U;
    msg.op = 130U;
    msg.err_mean = 0.007567604394628891;
    msg.dist_min_abs = 0.23296626130356712;
    msg.dist_min_mean = 0.7021822617460987;
    msg.roll_rate_mean = 0.16485246692591138;
    msg.time = 0.9254203309269088;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 175U;
    tmp_msg_0.lon_gain = 0.5724447807064141;
    tmp_msg_0.lat_gain = 0.07840745509873248;
    tmp_msg_0.bond_thick = 0.7746194537400305;
    tmp_msg_0.lead_gain = 0.7814675337571588;
    tmp_msg_0.deconfl_gain = 0.08893265955312968;
    tmp_msg_0.accel_switch_gain = 0.8644764246106491;
    tmp_msg_0.safe_dist = 0.011098974374656678;
    tmp_msg_0.deconflict_offset = 0.2837680612918023;
    tmp_msg_0.accel_safe_margin = 0.09016700815211465;
    tmp_msg_0.accel_lim_x = 0.6508879104183425;
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
    msg.setTimeStamp(0.45629910492719705);
    msg.setSource(31302U);
    msg.setSourceEntity(219U);
    msg.setDestination(15070U);
    msg.setDestinationEntity(25U);
    msg.uid = 177U;
    msg.frag_number = 4U;
    msg.num_frags = 22U;
    const char tmp_msg_0[] = {76, -111, 115, 116, 22, 48, -75, 109, -85, 12, -57, -66, -24, -2, 15, 0, -106, -5, 95, 52, 92, -30, -36, 10, -57, -93, 38, 2, 14, 121, 88, -25, -94, 9, -25, 10, 22, -104, 59, -98, 8, -99, -49, -46, 90, -17, -24, -75, -3, -43, -99, 42, 118, 74, 20, 64, 15, 61, -125, -49, -20, -93, 31, 9, 88, -67, -105, 54, -95, -43, 81, 123, 103, -31, 42, -64, 111, 69, -109, 46, 82, 34, 113, 36, -77, -49, -105, 71, 41, 44, -77, -56, -78, 51, 6, -35, 16, 97, 45, -121, -126, 87, 123};
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
    msg.setTimeStamp(0.13406096840066983);
    msg.setSource(26372U);
    msg.setSourceEntity(130U);
    msg.setDestination(36072U);
    msg.setDestinationEntity(153U);
    msg.uid = 225U;
    msg.frag_number = 103U;
    msg.num_frags = 53U;
    const char tmp_msg_0[] = {-101, 73, 78, -31, -73, -111, 77, -101, -32, -30, -126, -102, 116, 31, 106, -13, -88, -115, -78, -90, -88, -31, -98, 26, -56, 25, 75, -115, -60, -91, 60, 117, -55, 64, -98, 83, 89, -3, -111, -109, 12};
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
    msg.setTimeStamp(0.8390780709080359);
    msg.setSource(63209U);
    msg.setSourceEntity(36U);
    msg.setDestination(31722U);
    msg.setDestinationEntity(65U);
    msg.uid = 69U;
    msg.frag_number = 160U;
    msg.num_frags = 142U;
    const char tmp_msg_0[] = {37, -16, -18, 66, 15, 51, 124, 73, 8, 122, -8, -72, -78, -114, 121, -116, -60, 123, -62, 50, -111, -76, 55, -18, -34, 110, 86, 77, -98, -110, -58, -55, 52};
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
    msg.setTimeStamp(0.3774440569224575);
    msg.setSource(61859U);
    msg.setSourceEntity(44U);
    msg.setDestination(10819U);
    msg.setDestinationEntity(151U);
    msg.content_type.assign("OGSCLIQQDWQVHPRNNIBEJPOSWQQPMMJDALHWMMEAKQIYCCBNREVOPIPKDJGWUYDOFZNNUYNXBYUQGRBJHIKAU");
    const char tmp_msg_0[] = {-1, -62, -35, 15, -33, -10, -16, 122, -79, -77, 99, 107, -88, 115, -63};
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
    msg.setTimeStamp(0.37183156005980766);
    msg.setSource(36989U);
    msg.setSourceEntity(100U);
    msg.setDestination(47434U);
    msg.setDestinationEntity(62U);
    msg.content_type.assign("OBSHDQZNXLXIYMLOSCHFPSCDKKVNQGNIZHFJZYMXQJDBLWAMVFRMZDYQCOJIYVUUKDVGFOOEAHKNVUNTMTIPOTKXBBCNHXOZYSUADPDMVUEQUSERFRJWOGXIKCEMRMEAPXORQSOGVIFLAXLUYWZBITGTCYPSDMQJJQNFKNRGTHKERYYYXGTAVCJFQ");
    const char tmp_msg_0[] = {47, -45, -66, 102, 59, -11, 74, -80, -56, 105, -106, -24, -22, 32, -119, 46, 117, 48, -118, 83, -65, -37, -17, 9, 118, -20, 25, -116, 53, 25, -68, 95, -69, 37, 118, -98, -23, 112, 12, -15, 102, -34, 5, -26, 30, 52, -76, -41, -80, -29, 109, -87, 94, -93, -99, 108, -56, 70, -51, 50, 6, -42, -117, -113, 51, -114, -99, 0, -101, 2, 73, -127, 109, -112, -28, 30, 93, 80, 97, 124, 92, 57, 33, -31, 101, -5, 43, -14, 68, -43, 11, 94, 30, -18, 102, 115, 79, 29, 7, -18, 103, 26, -37, -55, 102, -72, -52, -70, 75, 112, 21, 73, 96, 98, -111, -52, 66, 74, 58, 80};
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
    msg.setTimeStamp(0.45631467058190434);
    msg.setSource(28964U);
    msg.setSourceEntity(159U);
    msg.setDestination(20211U);
    msg.setDestinationEntity(246U);
    msg.content_type.assign("FAJPLNYATEAGKESNVATDZTSLSHXXONRDJCOGMGAJBGZWBFCLBQQYRTRXLSRHXVXBYRSJDYXFYWQHJAHURYYIVOLHQUCOWEHISPJXEOFBW");
    const char tmp_msg_0[] = {-63, 36, -2, 121, 14, -92, 34, 112, 55, -13, 8, -48, -125, 5, 119, -32, 60, -78, -94, -6, 30, 20, -59, -42, 18, -23, -92, -75, 31, 26, 96, 36, 61, -98, 116, -76, -98, -3, -81, -78, 67, 88, 112, -77, -35, -8, 66, 93, 46, 19, 28, -85, -48, -109, 19, 107, -60, 14, -38};
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
    msg.setTimeStamp(0.7184350498403105);
    msg.setSource(14758U);
    msg.setSourceEntity(183U);
    msg.setDestination(23847U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.32570059373846083);
    msg.setSource(64523U);
    msg.setSourceEntity(209U);
    msg.setDestination(12861U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.9003597561726697);
    msg.setSource(21330U);
    msg.setSourceEntity(94U);
    msg.setDestination(11278U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.9675963813342391);
    msg.setSource(50927U);
    msg.setSourceEntity(105U);
    msg.setDestination(22670U);
    msg.setDestinationEntity(252U);
    msg.target = 65416U;
    msg.bearing = 0.2156551233788253;
    msg.elevation = 0.2647386982067733;

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
    msg.setTimeStamp(0.23483429899558894);
    msg.setSource(38586U);
    msg.setSourceEntity(89U);
    msg.setDestination(7166U);
    msg.setDestinationEntity(8U);
    msg.target = 55720U;
    msg.bearing = 0.41972453345917415;
    msg.elevation = 0.39124927788724473;

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
    msg.setTimeStamp(0.8462918349888656);
    msg.setSource(49585U);
    msg.setSourceEntity(214U);
    msg.setDestination(44187U);
    msg.setDestinationEntity(71U);
    msg.target = 51289U;
    msg.bearing = 0.5704096139048727;
    msg.elevation = 0.48860257342633595;

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
    msg.setTimeStamp(0.5157471470734172);
    msg.setSource(50189U);
    msg.setSourceEntity(103U);
    msg.setDestination(30911U);
    msg.setDestinationEntity(196U);
    msg.target = 16895U;
    msg.x = 0.31694784184849323;
    msg.y = 0.611437745723583;
    msg.z = 0.07772922242853908;

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
    msg.setTimeStamp(0.4292761956084141);
    msg.setSource(19361U);
    msg.setSourceEntity(7U);
    msg.setDestination(55408U);
    msg.setDestinationEntity(62U);
    msg.target = 34588U;
    msg.x = 0.3503670489981018;
    msg.y = 0.10923288233917838;
    msg.z = 0.7577905893070209;

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
    msg.setTimeStamp(0.7756178022032604);
    msg.setSource(10153U);
    msg.setSourceEntity(63U);
    msg.setDestination(45832U);
    msg.setDestinationEntity(4U);
    msg.target = 56430U;
    msg.x = 0.11876931454946527;
    msg.y = 0.7379172417209711;
    msg.z = 0.7845007042354519;

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
    msg.setTimeStamp(0.95814513888715);
    msg.setSource(25114U);
    msg.setSourceEntity(176U);
    msg.setDestination(52579U);
    msg.setDestinationEntity(39U);
    msg.target = 34967U;
    msg.lat = 0.7662763522396026;
    msg.lon = 0.11940232151171215;
    msg.z_units = 42U;
    msg.z = 0.3421054118229703;

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
    msg.setTimeStamp(0.08835998621800822);
    msg.setSource(33507U);
    msg.setSourceEntity(4U);
    msg.setDestination(2009U);
    msg.setDestinationEntity(163U);
    msg.target = 2858U;
    msg.lat = 0.8334744906249822;
    msg.lon = 0.40288729877771456;
    msg.z_units = 218U;
    msg.z = 0.059717755196194156;

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
    msg.setTimeStamp(0.6538265706463227);
    msg.setSource(42831U);
    msg.setSourceEntity(173U);
    msg.setDestination(48846U);
    msg.setDestinationEntity(166U);
    msg.target = 24683U;
    msg.lat = 0.4034231115506083;
    msg.lon = 0.6057030017755577;
    msg.z_units = 241U;
    msg.z = 0.28847433525714894;

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
    msg.setTimeStamp(0.6226331384812783);
    msg.setSource(18342U);
    msg.setSourceEntity(207U);
    msg.setDestination(15302U);
    msg.setDestinationEntity(129U);
    msg.locale.assign("JQBEWQVDXLULNDIDHZWPNTSXUHKWYOLCYMBBKTXRZJLOECSPNCVVJUKRSYSFMQRTMAAMIYWCAOFKTDHVEKHNQHUXBDCCUYGMKLEFUPRNGHSOOQVVZRMLSAMSNJBOPKFQCAJOEPWCUBJDRPWQXIJZGNYYRGNDSSZVBAFGDTMWTEKINFMUGFAZARXYXGZDOIFRFLITFJTALVPTCXIINIGBSEGDJMLGEVHQWQXXERJPIHYBHEKWZUOW");
    const char tmp_msg_0[] = {7, -63, -115, 118, -71, -51, 102, -94, -63, -3, -52, 105, -37, 103, -41, 72, 39, 55, -70, -94, 1, 69, -19, 116, 38, 46, 86, 51, 77, -20, -68, -88, -111, 31, -33, -114, -114, 13, 8, 123, -127, -110, 43, -122, -69, 50, -112, -74, -8, 27, -61, -32, -119, -74, 89, 55, 115, 77, -2, -23, -78, -11, 92, -65, -49, 54, 43, -27, 36, -54, -107, 102, 27, 16, -84, 108, 14, -109, -24, -125, -103, -116, -116, -111, 121, 94, 62, -9, 126, -37, 67, -80, 46, -77, -80, 90, 1, -40, 102, -2, 108, -76, 90, 54, -37, -77, 45, -64, 95, -49, -125, 0, 125, 102, 121, -116, 30, 12, -6, -55, 56, 35, -115, -98, -111, -110, -39, -30, 1, 115, -106, 90, -109, 120, 12, -72, -48, -56, 45, 98, -122, 10, 95, 117, -114, 20, -24, 111, 112, 111, -52, -4, -77, 118, -126, -96, -111, 90, -87, -96, 80, 108, 11, 105, -76, -113, 44, -18, -66, 121, 53, 107, -102};
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
    msg.setTimeStamp(0.22144950326647983);
    msg.setSource(24295U);
    msg.setSourceEntity(32U);
    msg.setDestination(5932U);
    msg.setDestinationEntity(228U);
    msg.locale.assign("GHZJRDFBYYHIFEMJWMX");
    const char tmp_msg_0[] = {-27, 32, 29, -22, 16, 43, 87, -24, 123, 18, 88, -34, -118, 12, 19, 125, -30};
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
    msg.setTimeStamp(0.683246399882701);
    msg.setSource(56073U);
    msg.setSourceEntity(188U);
    msg.setDestination(52752U);
    msg.setDestinationEntity(226U);
    msg.locale.assign("JMDCGKLPTKGGTDWPEKCABGBNSQMNRLTOQBNLNKJZEGAOMGFMAXIWOLEUTARVVHCIDGZQAYVIVANOWBDRLPKMSBMROQTBYHEBMJFAWSJPBDXXEWUDNQXZOEUOSHHJQY");
    const char tmp_msg_0[] = {51, 75, 33, 101, 12, -78, -117, 20, -105, 2, -36, 71, 78, 62, -121, -105, 25, 102, 8, -105, 18, 102, 116, -114, 9, -96, -36, -37, 114, -64, 40, -105, 73, 93, 15, -108, 1, -36, 15, 43, -46, 32, -75, 28, 12, 20, 73, 15, -104, -45, 36, 124, -54, -19, -76, -1, 41, -100, -44, -78, 67, -28, 126, 38, -108, -6, -105, 117, -58, -25, 19, 112, -77, 33, 94, 67, -13, 65, 52, -65, -98, -15, 100, -46, 69, 53, -14, -46, 122, 78, 106, -46, 93, 92, 3, -114, -91, 89, -74, -89, -100, 97, -23, 97, 119, -39, 65, 121, -101, 48, -8, 93, -2, 50, 69, 122, -11, 20, 106, -56, 68, 95, -53, 40, 44, -33, 110, 49, -93, -10, -54, -74, -79, 0, 119, -22, -105, 56, 58, -42, 94, -80, -121, -1, 26, 48, 5, -15, -55, -73, 92, 11, -59, 118, 117, -50, -106, -124, 75, 65, 40, -105, -61, 62, -19, 12, 78, 110, -57, -101, -79, 79, -58, -1, 59, 126, 45, 1, 45, 86, 116, 111, 36, -79, 5, -110, -100, -124, -116, 101, 103, -14};
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
    msg.setTimeStamp(0.10840834380220421);
    msg.setSource(50806U);
    msg.setSourceEntity(44U);
    msg.setDestination(50129U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.7850709813949189);
    msg.setSource(49716U);
    msg.setSourceEntity(196U);
    msg.setDestination(2797U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.7869627647329099);
    msg.setSource(40363U);
    msg.setSourceEntity(107U);
    msg.setDestination(36617U);
    msg.setDestinationEntity(109U);

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

  return test.getReturnValue();
}
