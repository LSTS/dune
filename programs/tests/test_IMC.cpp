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
// IMC XML MD5: 685ccd58f94bda7bf50f1d1ddf3be199                            *
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
    msg.setTimeStamp(0.038784099884136225);
    msg.setSource(29610U);
    msg.setSourceEntity(73U);
    msg.setDestination(43865U);
    msg.setDestinationEntity(222U);
    msg.state = 104U;
    msg.flags = 15U;
    msg.description.assign("XRZCURPUGIRHLVFGOWNSVYASANTAHKMZJJZQOIBVBDFNTCAYJGTRBCAJOVMJWTWYUAMDVGCEOLHKRDRCCHWQXYIPJOMBEXULVGXNSQEOFVSLKAXBVZOEOLFDIZSSKNLFPMKXFYUTPLNZJWEDGDLNKSTIEYSLWKMKJHITFJNRQQPQVWCSP");

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
    msg.setTimeStamp(0.31729419887652244);
    msg.setSource(6099U);
    msg.setSourceEntity(148U);
    msg.setDestination(1613U);
    msg.setDestinationEntity(71U);
    msg.state = 1U;
    msg.flags = 185U;
    msg.description.assign("GIUTQOBRURGJXYJSUZOJNUTADXJTDMNDQGYGNBITTELI");

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
    msg.setTimeStamp(0.07402141057953293);
    msg.setSource(10679U);
    msg.setSourceEntity(111U);
    msg.setDestination(52562U);
    msg.setDestinationEntity(69U);
    msg.state = 201U;
    msg.flags = 197U;
    msg.description.assign("KZDQWTFLWWYAFNMGNVUOLCUXEXPQSOYWJYUPXHJKMBTFQJBWYWIFNGWKDQAEMIYCGODJBIPLHTNDELCVGYSZZHKXMMOZGKDDCLTAPWBEUGBJOIOVZMUCGTOSIRLFMOLRBDXSVNBELFJJPKXBQVUPXNHRTEOISSARAVWKFPMZXSJLBRIMPHNVGRTAEPURJQVICCDDOAVD");

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
    msg.setTimeStamp(0.37210714310136794);
    msg.setSource(42042U);
    msg.setSourceEntity(135U);
    msg.setDestination(24930U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.44322993137670585);
    msg.setSource(62528U);
    msg.setSourceEntity(207U);
    msg.setDestination(63976U);
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
    msg.setTimeStamp(0.7807040775025014);
    msg.setSource(28838U);
    msg.setSourceEntity(247U);
    msg.setDestination(56441U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.09413584713208134);
    msg.setSource(57287U);
    msg.setSourceEntity(18U);
    msg.setDestination(48299U);
    msg.setDestinationEntity(193U);
    msg.id = 110U;
    msg.label.assign("RWHEGBSVANYKQMLEWDUTDAVAJGNLMSPUYCNTPNTKPNKVLWTPQVJOQVAJSMGRQDCOWZOUXSRZABTKTANPXEOYFSBAUJOFNWEOG");
    msg.component.assign("TEJZYHWEVXYXU");
    msg.act_time = 22583U;
    msg.deact_time = 20136U;

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
    msg.setTimeStamp(0.2870947871625902);
    msg.setSource(21967U);
    msg.setSourceEntity(60U);
    msg.setDestination(45536U);
    msg.setDestinationEntity(227U);
    msg.id = 25U;
    msg.label.assign("EHWZVEDAIFORTJIPGZFGQMANCMUSLYEBGJUKNWSTMJJDKJZVBQLSVOAYXDEZOYGFYBGSNBMHQORLVDTAKFPKIPQCXCBSVYXEYBMNNWZHHOBPZTFRLGIHPIQDGXLJCWFTRXSLCWPVWTUJYOBSEKMOCWUDEMIECNEBUIMRVHUHORBVLXZRIAHSDHXUNGWKTLSRFOVQJZRRLYFAJPQGIGAZEPCUFKUCYVOKDKNAAMXIUQN");
    msg.component.assign("VKKDBAQVWZIOPXESDGMUXLOOMQYHYESIWYJUPBQFPNJHDSGERCZQPRFZYODZCVGQQWZNCKACAWSTZSYBYNBKPMIPITTJVLXVOVNRKSVHN");
    msg.act_time = 4454U;
    msg.deact_time = 60279U;

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
    msg.setTimeStamp(0.09818931538789044);
    msg.setSource(1094U);
    msg.setSourceEntity(1U);
    msg.setDestination(19250U);
    msg.setDestinationEntity(36U);
    msg.id = 68U;
    msg.label.assign("WYFPQXVUFHXVIVOZIFDQCXSLHPAPMQFRSAORWIWAWIRVJDZFMZOXBYWEYSAZFKNLLKJZXMSOBANIQXVHCBTJSUIWWKDUSLGBDJXRQUYFHGFOFJHTTRLTYBVJCPSXMBIDAEZGYAPNUZCCKYRZHPOMMOLHCECENTDYPTWUWLGGWIKGHSBA");
    msg.component.assign("CGNBZFBFVTHCRXBWGARSZAMTELFYQELYTVDJMYDMFOURPOGKAWCPIBKGHASMCMWIBZFSDTDUTZOVNZOUPJZKGBPFDEYBQGPOYJIOJXNIWXRJWUIYZAUUWAEEHPOWESMLKDNKGIQIMNXLCTYHKCWVNUYTREGJQDWVBFOEWGCUDFKSBLAXMLZHCKVLXISNZNZEHCGVPQ");
    msg.act_time = 40798U;
    msg.deact_time = 29008U;

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
    msg.setTimeStamp(0.5302236767143524);
    msg.setSource(41961U);
    msg.setSourceEntity(108U);
    msg.setDestination(42173U);
    msg.setDestinationEntity(46U);
    msg.id = 76U;

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
    msg.setTimeStamp(0.26456047563296325);
    msg.setSource(41325U);
    msg.setSourceEntity(103U);
    msg.setDestination(31585U);
    msg.setDestinationEntity(80U);
    msg.id = 25U;

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
    msg.setTimeStamp(0.022968505976728615);
    msg.setSource(18257U);
    msg.setSourceEntity(250U);
    msg.setDestination(48078U);
    msg.setDestinationEntity(253U);
    msg.id = 92U;

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
    msg.setTimeStamp(0.487582968342518);
    msg.setSource(26207U);
    msg.setSourceEntity(75U);
    msg.setDestination(9960U);
    msg.setDestinationEntity(178U);
    msg.op = 177U;
    msg.list.assign("GJLJYQGOUKLGMGEKZCQUPANFPPYOEMRKRGGNTPBIAHIQISQAFFMEMCMKYZNWWGFDPMHWHOGBCDDHSFVBDKXOXJLPYAMXFKERTQJHHZIIIQKDTQGVNJPHEWFUCZSOJKTSLPSTPXURAI");

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
    msg.setTimeStamp(0.5424985690434335);
    msg.setSource(51286U);
    msg.setSourceEntity(161U);
    msg.setDestination(50416U);
    msg.setDestinationEntity(40U);
    msg.op = 113U;
    msg.list.assign("UKXBUYUZHPLPLQVHYFXWXZXGONKDZTGCYNTOJKFMLJUUDZECZCWIFTQSFDTXCYFYHCHZJJMVZXZIAQLZCVJEYFSDLQLPSNQKLVEKGNMBEWNIGORKVPUMAGBXBLKJCCRFDPVJNSUETIXAKOLHOMPMIPOSQXRYFNMHTKRGQEWWMZEWCDBIESJRRYHILVHBQNFWADDOBPGNGOTRAA");

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
    msg.setTimeStamp(0.09312580165166706);
    msg.setSource(56635U);
    msg.setSourceEntity(141U);
    msg.setDestination(50198U);
    msg.setDestinationEntity(205U);
    msg.op = 188U;
    msg.list.assign("KRFTJLGZBVYVYERHCSZMFHJDJMPZDQQYQFZVKVUATEBRDAUWDPYINZCYWXMGFKNARIFHVPGBSESWALKFMTJQWDSVMMBZVNSVXIGAAXLDKZUDUWOHHBCSNBIGWRWZCCHCJIOLEYRRKXOQOBKMTNLYPYMSOLBPKQIKJOPB");

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
    msg.setTimeStamp(0.375186823159541);
    msg.setSource(64819U);
    msg.setSourceEntity(160U);
    msg.setDestination(41030U);
    msg.setDestinationEntity(157U);
    msg.value = 178U;

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
    msg.setTimeStamp(0.2717304462888924);
    msg.setSource(59012U);
    msg.setSourceEntity(212U);
    msg.setDestination(62519U);
    msg.setDestinationEntity(91U);
    msg.value = 222U;

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
    msg.setTimeStamp(0.050864340473245284);
    msg.setSource(36405U);
    msg.setSourceEntity(59U);
    msg.setDestination(8458U);
    msg.setDestinationEntity(221U);
    msg.value = 223U;

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
    msg.setTimeStamp(0.16902637790546615);
    msg.setSource(59525U);
    msg.setSourceEntity(134U);
    msg.setDestination(23708U);
    msg.setDestinationEntity(30U);
    msg.consumer.assign("VKFRENQSRSPBWFQHPBOXTIXOPVDPTNSBIWUGRNCOMITRTIMGEUXHTVLWTALFLFZRSUSZFRWHTHPPXHMBJE");
    msg.message_id = 21495U;

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
    msg.setTimeStamp(0.14683354410123883);
    msg.setSource(9449U);
    msg.setSourceEntity(73U);
    msg.setDestination(51389U);
    msg.setDestinationEntity(166U);
    msg.consumer.assign("YASIOOZKCZKDNFWWUGIIVVFQCQMVIHOAEUSPXLTMSRZDKMWDGZIMIGHIQHKWARLJDEAOCPCVMBMBJSSBURAJMXSRNHVTUEKDKURJCYGXSPWZNFPBJJUFBDVOTLVTXEWAVIH");
    msg.message_id = 24592U;

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
    msg.setTimeStamp(0.953167566059333);
    msg.setSource(25071U);
    msg.setSourceEntity(236U);
    msg.setDestination(18863U);
    msg.setDestinationEntity(177U);
    msg.consumer.assign("DHEGZKFMRARNYEUTCOSTOXWETVZHVBIPIBMPFQFHOHLGXPMOSHLCKSETEBMGKKGKDLZUDWZQXTIQYREBRUFWLNYVHDMLNLMGYTWYPGNWQBFWGKUSGQNOKYNRFWUJQILSVCKADSCIDSVAWFIZYSLGFMHAWOAYCPJPAJLCXVVDPEEPMSMBUNPFXZRBI");
    msg.message_id = 16014U;

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
    msg.setTimeStamp(0.2230259329873362);
    msg.setSource(23643U);
    msg.setSourceEntity(94U);
    msg.setDestination(56938U);
    msg.setDestinationEntity(190U);

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
    msg.setTimeStamp(0.20810927072824026);
    msg.setSource(19818U);
    msg.setSourceEntity(221U);
    msg.setDestination(3171U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.030787743188487315);
    msg.setSource(18185U);
    msg.setSourceEntity(26U);
    msg.setDestination(26453U);
    msg.setDestinationEntity(41U);

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
    msg.setTimeStamp(0.7099623520411318);
    msg.setSource(61587U);
    msg.setSourceEntity(232U);
    msg.setDestination(59410U);
    msg.setDestinationEntity(146U);
    msg.op = 240U;

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
    msg.setTimeStamp(0.08058814580882356);
    msg.setSource(8454U);
    msg.setSourceEntity(235U);
    msg.setDestination(37250U);
    msg.setDestinationEntity(213U);
    msg.op = 22U;

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
    msg.setTimeStamp(0.7729598402990784);
    msg.setSource(16643U);
    msg.setSourceEntity(241U);
    msg.setDestination(8489U);
    msg.setDestinationEntity(150U);
    msg.op = 252U;

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
    msg.setTimeStamp(0.7980259139097472);
    msg.setSource(9075U);
    msg.setSourceEntity(104U);
    msg.setDestination(57447U);
    msg.setDestinationEntity(100U);
    msg.total_steps = 124U;
    msg.step_number = 27U;
    msg.step.assign("TIYNZPVQRMLQNYFIXGLVUOFQRWTHRDSBXUFTJOWBTRMIPFU");
    msg.flags = 57U;

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
    msg.setTimeStamp(0.31658062474600857);
    msg.setSource(2372U);
    msg.setSourceEntity(30U);
    msg.setDestination(12572U);
    msg.setDestinationEntity(196U);
    msg.total_steps = 213U;
    msg.step_number = 64U;
    msg.step.assign("QYQZLKJUBTEYLXOPEYIHOKNLWEAIHEJGWPRYCCTGVNRDLRKSOQISJOOHYRUWFTMRVNYKDZZZNPOZMCMDWSXGFRFAQFAZZJHAEORFKJHXHEJIJNNHPKVWVUSSNKZRDFPCDASABGHMWQKNCAKYIKYDYIXD");
    msg.flags = 254U;

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
    msg.setTimeStamp(0.6507338270665307);
    msg.setSource(53613U);
    msg.setSourceEntity(40U);
    msg.setDestination(55720U);
    msg.setDestinationEntity(182U);
    msg.total_steps = 15U;
    msg.step_number = 142U;
    msg.step.assign("EJIXTAHTTYYMHXYZCQADKEYKCXHOUNNWHEZXUR");
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
    msg.setTimeStamp(0.18364814191956103);
    msg.setSource(51892U);
    msg.setSourceEntity(118U);
    msg.setDestination(57321U);
    msg.setDestinationEntity(46U);
    msg.state = 172U;
    msg.error.assign("LUCHBVYAMCVFTWFFSYALMKKUTDBLUJWNJYFBHBJHBDODQJWOHYCJOZYQUVAJIKTZKXPYGVYGHRDPMSRRPWPBGCSYBFIGQPDLWDQQIEAFMUTRNUZTEMGXLOGBI");

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
    msg.setTimeStamp(0.28933523327899624);
    msg.setSource(62286U);
    msg.setSourceEntity(91U);
    msg.setDestination(13384U);
    msg.setDestinationEntity(190U);
    msg.state = 130U;
    msg.error.assign("AUBZKAFLDMKKZDEXVJUDWSSNZJGQWLHLWIMBYDBFOOEWHJIPG");

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
    msg.setTimeStamp(0.27097808233068876);
    msg.setSource(41275U);
    msg.setSourceEntity(165U);
    msg.setDestination(15345U);
    msg.setDestinationEntity(200U);
    msg.state = 55U;
    msg.error.assign("NMAKVGBLTHLXGTFBDNIUXFCBKZIZMJQUNEGWDVPBRTTPBOYKXODHXMWRPGWMHSDQGVRKKLZVBONIZSSNNYJBXIVCCQORMSFTJUNDDYFQPEKXWWOOAUNEVJIXFIXUXCGKQGTZOHESYVJLAIGFMMRFEGAUPWEMAOFTZYRMHCNTWLUEBHZJHYLAUSODOYKSWQREPYDZTC");

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
    msg.setTimeStamp(0.03586591604416556);
    msg.setSource(53063U);
    msg.setSourceEntity(169U);
    msg.setDestination(1607U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.12047314504099327);
    msg.setSource(48099U);
    msg.setSourceEntity(219U);
    msg.setDestination(21568U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.5256105328696146);
    msg.setSource(51150U);
    msg.setSourceEntity(200U);
    msg.setDestination(32982U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.021556043663589985);
    msg.setSource(36281U);
    msg.setSourceEntity(42U);
    msg.setDestination(40631U);
    msg.setDestinationEntity(195U);
    msg.op = 8U;
    msg.speed_min = 0.14499988243724737;
    msg.speed_max = 0.7170381476823561;
    msg.long_accel = 0.827013043065633;
    msg.alt_max_msl = 0.436094142899194;
    msg.dive_fraction_max = 0.2317719587355177;
    msg.climb_fraction_max = 0.4935166606644694;
    msg.bank_max = 0.5076064047229729;
    msg.p_max = 0.8002208576228025;
    msg.pitch_min = 0.799849011877589;
    msg.pitch_max = 5.856009469518142e-05;
    msg.q_max = 0.89487380667335;
    msg.g_min = 0.7124984373961122;
    msg.g_max = 0.8194194405196877;
    msg.g_lat_max = 0.6671927170510387;
    msg.rpm_min = 0.16843031723940682;
    msg.rpm_max = 0.2492104027468588;
    msg.rpm_rate_max = 0.10317744191242761;

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
    msg.setTimeStamp(0.010577863425364598);
    msg.setSource(5457U);
    msg.setSourceEntity(50U);
    msg.setDestination(28114U);
    msg.setDestinationEntity(137U);
    msg.op = 252U;
    msg.speed_min = 0.17324074586997928;
    msg.speed_max = 0.157720139961666;
    msg.long_accel = 0.2384217225368629;
    msg.alt_max_msl = 0.8710264252292794;
    msg.dive_fraction_max = 0.882262725115567;
    msg.climb_fraction_max = 0.3661385484653208;
    msg.bank_max = 0.2332775376997409;
    msg.p_max = 0.3894861713954243;
    msg.pitch_min = 0.24068409772902977;
    msg.pitch_max = 0.4931256386377647;
    msg.q_max = 0.7182016740410541;
    msg.g_min = 0.1936227738756634;
    msg.g_max = 0.026211572301948816;
    msg.g_lat_max = 0.9216318642846346;
    msg.rpm_min = 0.39348004337698084;
    msg.rpm_max = 0.5562336707374917;
    msg.rpm_rate_max = 0.43856861327292185;

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
    msg.setTimeStamp(0.47387455487578034);
    msg.setSource(32708U);
    msg.setSourceEntity(241U);
    msg.setDestination(52160U);
    msg.setDestinationEntity(230U);
    msg.op = 201U;
    msg.speed_min = 0.6501095065765365;
    msg.speed_max = 0.11999857750265364;
    msg.long_accel = 0.7741235174817747;
    msg.alt_max_msl = 0.8494884825804475;
    msg.dive_fraction_max = 0.43972606405407033;
    msg.climb_fraction_max = 0.3958280129619347;
    msg.bank_max = 0.5675509359751822;
    msg.p_max = 0.23036718416396917;
    msg.pitch_min = 0.7354192340386794;
    msg.pitch_max = 0.2621180010413352;
    msg.q_max = 0.3302925968901206;
    msg.g_min = 0.6859536507425742;
    msg.g_max = 0.311943427868309;
    msg.g_lat_max = 0.47031825720663656;
    msg.rpm_min = 0.6443190960053314;
    msg.rpm_max = 0.9632705419605323;
    msg.rpm_rate_max = 0.8260555688956921;

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
    msg.setTimeStamp(0.9755676310810109);
    msg.setSource(29791U);
    msg.setSourceEntity(59U);
    msg.setDestination(15233U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.8625237404588304);
    msg.setSource(60026U);
    msg.setSourceEntity(167U);
    msg.setDestination(18657U);
    msg.setDestinationEntity(206U);
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.4752879759311427;
    tmp_msg_0.lon = 0.5379886827797328;
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
    msg.setTimeStamp(0.8242617087635933);
    msg.setSource(53090U);
    msg.setSourceEntity(34U);
    msg.setDestination(46892U);
    msg.setDestinationEntity(182U);

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
    msg.setTimeStamp(0.6280752387282623);
    msg.setSource(21887U);
    msg.setSourceEntity(229U);
    msg.setDestination(49300U);
    msg.setDestinationEntity(93U);
    msg.lat = 0.2574843831142438;
    msg.lon = 0.8611046383942326;
    msg.height = 0.16269314082356723;
    msg.x = 0.24044437826894927;
    msg.y = 0.023433019597993376;
    msg.z = 0.8612562976345142;
    msg.phi = 0.07698604410926069;
    msg.theta = 0.08059292765747272;
    msg.psi = 0.8407172299274169;
    msg.u = 0.9777727787027418;
    msg.v = 0.21285837467454882;
    msg.w = 0.9009015593555469;
    msg.p = 0.7985215831643688;
    msg.q = 0.900281544530006;
    msg.r = 0.7829174179638815;
    msg.svx = 0.43848308463469576;
    msg.svy = 0.9691057257146126;
    msg.svz = 0.42737210901210265;

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
    msg.setTimeStamp(0.48097950659610034);
    msg.setSource(9168U);
    msg.setSourceEntity(142U);
    msg.setDestination(28398U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.3012189985594411;
    msg.lon = 0.7706870196420076;
    msg.height = 0.31925006671746325;
    msg.x = 0.5582766347928899;
    msg.y = 0.4299805251372092;
    msg.z = 0.30332784491933384;
    msg.phi = 0.30256540921059005;
    msg.theta = 0.010054230553648957;
    msg.psi = 0.7940168034684886;
    msg.u = 0.35011595472027535;
    msg.v = 0.5115026463026032;
    msg.w = 0.9580121289033892;
    msg.p = 0.8593257569197942;
    msg.q = 0.5703983198207446;
    msg.r = 0.636447776389507;
    msg.svx = 0.16312818273273133;
    msg.svy = 0.41388955625368085;
    msg.svz = 0.4693967768128784;

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
    msg.setTimeStamp(0.6874962584629489);
    msg.setSource(4881U);
    msg.setSourceEntity(66U);
    msg.setDestination(11271U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.8873452103498725;
    msg.lon = 0.6622104491313349;
    msg.height = 0.46946506766420426;
    msg.x = 0.31296090131953225;
    msg.y = 0.8317265211055859;
    msg.z = 0.009640360228682754;
    msg.phi = 0.738477746845784;
    msg.theta = 0.6832920275190144;
    msg.psi = 0.13363198410148291;
    msg.u = 0.1308583744245877;
    msg.v = 0.7379392373232682;
    msg.w = 0.9878169893084101;
    msg.p = 0.8221535001801323;
    msg.q = 0.480915513842482;
    msg.r = 0.8724814544918019;
    msg.svx = 0.19349917445357356;
    msg.svy = 0.10217896785059266;
    msg.svz = 0.10351880352979614;

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
    msg.setTimeStamp(0.8131898489993636);
    msg.setSource(50141U);
    msg.setSourceEntity(89U);
    msg.setDestination(9235U);
    msg.setDestinationEntity(80U);
    msg.op = 223U;
    msg.entities.assign("LPIYDCXLSNYCUVOMAEECVGZNXSVNPKRQIPWTQOMSRPVKUHQXBXBWDOLJWPIRIHZHQUINJOGEAMHDESXOFZA");

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
    msg.setTimeStamp(0.6414894660060794);
    msg.setSource(38362U);
    msg.setSourceEntity(76U);
    msg.setDestination(54457U);
    msg.setDestinationEntity(168U);
    msg.op = 195U;
    msg.entities.assign("RYDKGIXYMSQYKNLJCCSZDBNFKCYEWIQPVKOHMEABHQUSVPDJEVAZEIXRZOKWCJGQTRNFLIGCQUWDEXVRPIKHORSBWMDM");

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
    msg.setTimeStamp(0.2455419410873556);
    msg.setSource(17617U);
    msg.setSourceEntity(39U);
    msg.setDestination(35036U);
    msg.setDestinationEntity(115U);
    msg.op = 250U;
    msg.entities.assign("NNGAEBYRLRSKOVJEBBJUELZXIQAANQYMZIVUGKWEQZQQTMKPUJVJCEQITBSIOKXHWGLEPWNNLGZXLXYCCVGSMTPJSWDYYTKHUXFJHWMWBSSIQRGHWFFKDLDAYYLJVPKGCFFAMRQRYUPVWTOHLUGZNRVAKZJXIIDKCIFOFROUFVTOEDDCARSFOBPBTHXUNZCKNZHLMSFWZTNCDAXNPYADMXJPWLXPBTIHEZOPDUBMMSVHGUBIQM");

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
    msg.setTimeStamp(0.0866236961817416);
    msg.setSource(46134U);
    msg.setSourceEntity(31U);
    msg.setDestination(44767U);
    msg.setDestinationEntity(228U);
    msg.type = 179U;
    msg.speed = 5850U;
    const char tmp_msg_0[] = {63, -110, 85, 78, -36, -15, -70, -9, 116, 71, 17, -49, -30, 38, -16, -76, -125, -65, 5, -43, 54, 35, -45, -46, -56, -102, -87, 42, -101, 54, -42, 118, -8, -87, 60, 38, -119, -16, -57, 126, -79, 5, 121, -47, -81, -88, -69, -51, -14, 108, 64, 46, -60, 80, -38, -70, -48, -117, 110, 89, 14, -73, -128, -35, -15, 66, 104, -96, -81, 87, -19, -8, -19, 32, 1, -115, -122, -115, 15, -4, -124, -32, -89, 41, 26, -43, -97, 57, -11, 83, 77, 68, -17, 98, -57, 12, 115, -75, 2, -104, 86, 117, -33, 8, 7, -8, 24, -109, 121, 86, -22, -100, -127, -1, 69, 97, -96, -51, -53, 3};
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
    msg.setTimeStamp(0.4157863034315671);
    msg.setSource(41811U);
    msg.setSourceEntity(195U);
    msg.setDestination(57693U);
    msg.setDestinationEntity(229U);
    msg.type = 100U;
    msg.speed = 35942U;
    const char tmp_msg_0[] = {-1, 50, -92, -31, 93, 70, -88, 100, -75, -80, 22, 74, 71, -58, -97, 44, -58, -27, -34, -40, -81, -108, -49, 17, 87, -2, -33, -3, -54, 76, 28, 5, -95, -114, -123, 54, -15, 71, 17, 114, 68, 105, 76, -112, 86, -80, 105, 118, -62, 83, -123, 91};
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
    msg.setTimeStamp(0.6447195129552613);
    msg.setSource(8019U);
    msg.setSourceEntity(225U);
    msg.setDestination(14652U);
    msg.setDestinationEntity(159U);
    msg.type = 147U;
    msg.speed = 62087U;
    const char tmp_msg_0[] = {-2, -99, -19, 41, -27, -128, 6, 124, -83, -62, 75, -28, -71, 102, 43, 8, -88, 89, -123, -39, -90, 120, 110, 104, -82, 124, -85, 1, -99, -63, 51, 115, -37, -94, 109, 34, 71, -17, -75, -120, -78, -98, 80, -73, 96, 116, 70, -73, -11, -120, 24, -29, 17, -47, -66, 35, 66, -28, 34, -20, -74, -60, -6, -30, -58, 57, 46, -103, -117, -2, -39, -36, 93, -64, 9, -78, -91, -81, 49, -67, 6, -100, 17, 55, -114, 46, -107, -102, 120, -104, 5, 29, 123, -96, -52, -26, -19, -3, -76, 51, 12, 41, 75, 64, -32, -71, 11, 52, -106, 4, 27, -102, -122, -35, 49, -114, 33};
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
    msg.setTimeStamp(0.11493498511343214);
    msg.setSource(21701U);
    msg.setSourceEntity(31U);
    msg.setDestination(30375U);
    msg.setDestinationEntity(157U);
    msg.op = 63U;
    msg.tas2acc_pgain = 0.6070458682952855;
    msg.bank2p_pgain = 0.004457933685131699;

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
    msg.setTimeStamp(0.1329260140750821);
    msg.setSource(29142U);
    msg.setSourceEntity(109U);
    msg.setDestination(26030U);
    msg.setDestinationEntity(220U);
    msg.op = 132U;
    msg.tas2acc_pgain = 0.368916125102249;
    msg.bank2p_pgain = 0.22172340302147564;

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
    msg.setTimeStamp(0.09075897523293153);
    msg.setSource(1084U);
    msg.setSourceEntity(153U);
    msg.setDestination(45777U);
    msg.setDestinationEntity(98U);
    msg.op = 62U;
    msg.tas2acc_pgain = 0.2134115381193662;
    msg.bank2p_pgain = 0.8710598351199818;

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
    msg.setTimeStamp(0.2874696076141525);
    msg.setSource(64777U);
    msg.setSourceEntity(37U);
    msg.setDestination(39640U);
    msg.setDestinationEntity(123U);
    msg.available = 3333991303U;
    msg.value = 122U;

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
    msg.setTimeStamp(0.9744196238492483);
    msg.setSource(63376U);
    msg.setSourceEntity(211U);
    msg.setDestination(46295U);
    msg.setDestinationEntity(205U);
    msg.available = 3504015621U;
    msg.value = 38U;

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
    msg.setTimeStamp(0.08992554184799229);
    msg.setSource(51130U);
    msg.setSourceEntity(33U);
    msg.setDestination(45937U);
    msg.setDestinationEntity(200U);
    msg.available = 1871765399U;
    msg.value = 243U;

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
    msg.setTimeStamp(0.22227357201254494);
    msg.setSource(10832U);
    msg.setSourceEntity(215U);
    msg.setDestination(18967U);
    msg.setDestinationEntity(32U);
    msg.op = 175U;
    msg.snapshot.assign("OPZNMBTIKAQSHQSDHKMWWQEYVQBZTAOKAPNJFAPFJLMMVZGAZUHYUSFXOKRGAFQDWCDCELTAJDXTVKHEZZONJTBPUIPTFNGNWUMSUHGDONMXVJQNFVRCQWKPRETURUUBLPHNJWVHXMBGSLTIETCYLCCYLNDRYGSKWQJSBXPJIEAYQXQVLOHXXEAZO");
    IMC::VSWR tmp_msg_0;
    tmp_msg_0.value = 0.7473802788001579;
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
    msg.setTimeStamp(0.049238792307381374);
    msg.setSource(62841U);
    msg.setSourceEntity(214U);
    msg.setDestination(61U);
    msg.setDestinationEntity(75U);
    msg.op = 192U;
    msg.snapshot.assign("JWHKXSGLJMCNAOEFUWIVKDSJOIMKFDNJUGJWQUCIARACBXWQL");
    IMC::LeaderState tmp_msg_0;
    tmp_msg_0.group_name.assign("BLRKJZYTQGHDLJQNLEXVDCYSKOPAV");
    tmp_msg_0.op = 198U;
    tmp_msg_0.lat = 0.04701776813783187;
    tmp_msg_0.lon = 0.2803380968590313;
    tmp_msg_0.height = 0.16104465084141273;
    tmp_msg_0.x = 0.036199597238698256;
    tmp_msg_0.y = 0.8867700354101823;
    tmp_msg_0.z = 0.04361735296619251;
    tmp_msg_0.phi = 0.03253208455641299;
    tmp_msg_0.theta = 0.10822200212336275;
    tmp_msg_0.psi = 0.03439353465626627;
    tmp_msg_0.vx = 0.03201567772439429;
    tmp_msg_0.vy = 0.8086629351643839;
    tmp_msg_0.vz = 0.7116714885590197;
    tmp_msg_0.p = 0.8821332698008304;
    tmp_msg_0.q = 0.8436080495234844;
    tmp_msg_0.r = 0.8570481142842669;
    tmp_msg_0.svx = 0.3731180545228977;
    tmp_msg_0.svy = 0.5443842742149185;
    tmp_msg_0.svz = 0.3999764685785069;
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
    msg.setTimeStamp(0.22697041675901453);
    msg.setSource(51547U);
    msg.setSourceEntity(143U);
    msg.setDestination(1402U);
    msg.setDestinationEntity(32U);
    msg.op = 149U;
    msg.snapshot.assign("MNWQMTDOXOPMGJUKPMCKEVKBXHPETJCJUCWHKFUYXMXTUAIMNLOYQSAIQQFCJSMBOBWCSGUAXRNFIWKAVZDZYHECKVBWALDZJBILHNYPSFNADZFTOOWFWGTRROGIJABOGYIFOGNRRIUKKIGLNXEXYXESQCRURUUKSVBANLBJIWFPPSDZAKHDTYYTPZNEDLQSWAVCGGOTHIZVMLBPDZHCREZDVCFVWHVNYJQVTEHMJ");
    IMC::EntityInfo tmp_msg_0;
    tmp_msg_0.id = 85U;
    tmp_msg_0.label.assign("HCUYNIYBLLFZKEDYOKMWOFHDWDTBGXSHOBQUEPSXZIAWNPVKWAWVNHOORIQMIEFAROURZHBWIQFSYLTFUYSXGGCQMFDUQTZYKQCBCHORAWKMVPMOUASJIELGGOVHZDRPMJXTBPZYBBIZFNWAGLQJSBCSAZNRAFGKPJVU");
    tmp_msg_0.component.assign("ADXKNFWJIMUCJQTXOKYCFUHLYNCGZXEWRMZSVNOQQPIUKCJONMZHRYXBUDLHTKHDBZCPZJOBPMWMSNQTJJRYLFQOAZYRRLNKMQWVGCIXTTYVOJVEIZPZTRHNCTIEILSPALVDVEGODGABIMEGDBWSLXIKQGRQAZDWNHUAVFJQZSSPPHMJXAYVLOGKDIGACEWVSGDWFBEFAVPBIOEWHKXYMDUWLTNXGUYLEKT");
    tmp_msg_0.act_time = 38813U;
    tmp_msg_0.deact_time = 32839U;
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
    msg.setTimeStamp(0.3736430484212597);
    msg.setSource(31908U);
    msg.setSourceEntity(31U);
    msg.setDestination(49296U);
    msg.setDestinationEntity(222U);
    msg.op = 78U;
    msg.name.assign("XDJJYYADPKOXCQI");

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
    msg.setTimeStamp(0.6255067173435847);
    msg.setSource(36039U);
    msg.setSourceEntity(148U);
    msg.setDestination(37198U);
    msg.setDestinationEntity(122U);
    msg.op = 179U;
    msg.name.assign("EFVBPLKLHOMTVIMKUJOHOTWFTCHJQSXAKRHNCZRNFXXIFPORAAGEQWTEWLJCGZTXDZQYGTCTWUQWYRSVGWPLMFFJEYVLQFRQADXXYCRJISMBJLRPKDEOHGBYMMKOHAOCXVLWCIAEYSANBUODGFBWSXIDIUKIJBKUXYJTECQKVDVIANWTKPDNOPUYMMBDZMHRZIJTUZEZQHNFEVPCOSEBNDNYZUMZPNGPQ");

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
    msg.setTimeStamp(0.7852292418735084);
    msg.setSource(1830U);
    msg.setSourceEntity(111U);
    msg.setDestination(18514U);
    msg.setDestinationEntity(43U);
    msg.op = 153U;
    msg.name.assign("TRRYMZFEENKZOSKLKUSWOXKBBBJVTMUCTFGVTGCRZLXUWPVGECKKKWUZQLXGSPNDWESAYRPRHQNCMFBTQXRYVJVVBFCYOMDTLLOUJTPDFHDNIQRWAPBDYJYAJZIXHYGRTISOGNGDPTDXC");

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
    msg.setTimeStamp(0.6554346367652537);
    msg.setSource(2187U);
    msg.setSourceEntity(194U);
    msg.setDestination(31844U);
    msg.setDestinationEntity(5U);
    msg.type = 65U;
    msg.htime = 0.03299461235436374;
    msg.context.assign("JMEIJOTBEEUHUZXGDNCWWLRCNCNVFDQRXAIIBJHCHWKMPXKZOVVESRIADALMCREWSJXYZURCGQKERHPNESZQXEHZANQPVWGRWRDXTTTHSUBWMPSKNGLRPDQYFIILOWEOGUPXNYPLMVKDBYFOWTLVXZDKDLZQFOJIKBBWUFCTHFVBISQMQFKPPTHGRKZGNYUBLSKUMGGXAFLOBCSDADMSTYXZVFYNCSILMTJJ");
    msg.text.assign("QIZJEBNKXRGTUNCAYMTJTYAVDPYOHVRAZJFAURCAWLFHTIPOBQHODLDJHEEIILGEKRNENBMWVNVEOZVXSYGARYFRKWAYORBKXBMYDNJCRXJDKAWTPCIMVUCGLUXIGQROENSQGAPVMSYIZJHXPSUVOMXLKUMFZWHAZTCKURHFNXFOXSWLJSFDZJVTTSLYGTQ");

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
    msg.setTimeStamp(0.5187700647862704);
    msg.setSource(63948U);
    msg.setSourceEntity(162U);
    msg.setDestination(40739U);
    msg.setDestinationEntity(170U);
    msg.type = 160U;
    msg.htime = 0.9499112556279228;
    msg.context.assign("AJIQVWXMSGGUSMZWCYPIIPENFKIKMTIGRUFCBUK");
    msg.text.assign("ROZVYEYISETJZEVTSDNFWLLRIGJGWMYSVGAXVTQMFARBXSVKT");

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
    msg.setTimeStamp(0.1796300729972108);
    msg.setSource(57974U);
    msg.setSourceEntity(116U);
    msg.setDestination(19008U);
    msg.setDestinationEntity(179U);
    msg.type = 124U;
    msg.htime = 0.5038177934665785;
    msg.context.assign("DTMNIKLKJDBAPVAUSTJGCHFUVYUWQBTEIHQWSRAXSZEOKGVLAQNVINQKKDMYCXHUJNWZXDFWYOJRUQTEFNBNIGVNPYJPIHKHZXBPSFSBJIRJHLEFLQOXVZSPGYTEWMJRGCRHOLCADWLMYVAQYDBVUFOKODGDTAIHCCFFMNOTWFQWXCEQLPZHGXDAZRPMIIIERLCOLZPKWECOJN");
    msg.text.assign("XBFDAIJEAQTIPUBJQCNHQODYQVXRHUPURNHFGJWEZIUCVQXCNX");

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
    msg.setTimeStamp(0.271371022702827);
    msg.setSource(62892U);
    msg.setSourceEntity(2U);
    msg.setDestination(18305U);
    msg.setDestinationEntity(37U);
    msg.command = 132U;
    msg.htime = 0.8360918155194831;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 60U;
    tmp_msg_0.htime = 0.6208780278863336;
    tmp_msg_0.context.assign("WCORZNYDPAGQETKJQJYJZLRPBUWRPAYHDVVIMUKYBTERROGJUZGBANMKMUTNLSUISFSHCHAFYKIQNHEHTUROLNDLZSQVBSYDLTZETOCKDRNQZOXZZXZFPEASFNBPCONHRWMNWOBCPGGJUJDYHIEWEQVVDMPFGAWOOX");
    tmp_msg_0.text.assign("FWHLVGDZNCPPUCZRHPKMWLLLDUBBG");
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
    msg.setTimeStamp(0.3309672047411939);
    msg.setSource(16654U);
    msg.setSourceEntity(199U);
    msg.setDestination(19017U);
    msg.setDestinationEntity(125U);
    msg.command = 197U;
    msg.htime = 0.6598941481466405;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 219U;
    tmp_msg_0.htime = 0.5402885413030776;
    tmp_msg_0.context.assign("HFOZNEASYQOHKCKIQYDAAYVIYRZBHOTESGLZIACCPCCFM");
    tmp_msg_0.text.assign("TMWAGLUZDENVKIQZNBAGVLVPMJJQKEJDRBFYASKSPGXZMWMP");
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
    msg.setTimeStamp(0.3569404594101835);
    msg.setSource(42737U);
    msg.setSourceEntity(9U);
    msg.setDestination(38855U);
    msg.setDestinationEntity(127U);
    msg.command = 145U;
    msg.htime = 0.02490284576517854;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 96U;
    tmp_msg_0.htime = 0.06512214178494702;
    tmp_msg_0.context.assign("QLQNJKMOOBMEYRYDNWAEJQWGTPCBDOFWCVHDSAGHGCUAUKEYNSLHIWTGIPBMPEFUHOYYDQJDCEFIQTPXWKWUJYUABCMRKFRNMMSCMRVHXFNDUUGSOEBKZXHSQPZEORQSIFVVTKFOITGJHXLPHOLRVZUSECOGWPXQAZ");
    tmp_msg_0.text.assign("VJIPRKSZOWZTGGYFRJQQXNDUHABOHCIKCFSAGGIBPRYVVJWSYNQDFWKELUYWIPOOJXLADFCDVYDZCKSWADUEXPVOMQMBKSVRMKQNBNEWOFZOKXYGFXWL");
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
    msg.setTimeStamp(0.8037291878796172);
    msg.setSource(31322U);
    msg.setSourceEntity(135U);
    msg.setDestination(31665U);
    msg.setDestinationEntity(153U);
    msg.op = 156U;
    msg.file.assign("GOEBSTBTWLYPSPAAIUOMBUUSGLXNNHVBXPYHVCEGRXPRNZRFQQYKKCUVASNDWRSXACQIDQDYPTYABLVVWSEQBZOZQJCYMJDQSGGBOKTTHCDJUYRFTEFOVTNFXFWYQMDI");

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
    msg.setTimeStamp(0.03358924910809413);
    msg.setSource(12073U);
    msg.setSourceEntity(90U);
    msg.setDestination(28586U);
    msg.setDestinationEntity(66U);
    msg.op = 227U;
    msg.file.assign("YWOEGDNQEAVIEFGHOHCKXIHIPNVLHRCAZBPCVUAFACLTCVSQZWYENEDJMXKQBBKXGZAEPRSQNOMMMPIFTJMHZYJPZGVVWXXITLPCFEBGQYMUUALWNIPNRQWQZHXJGBKRDSLDFRKQAMYHODRQZJTXGJODBIELNVWTUZHVCPXUFKTWVCBLEZJXUKMMYCSMDSKTNS");

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
    msg.setTimeStamp(0.18431514708527585);
    msg.setSource(6246U);
    msg.setSourceEntity(197U);
    msg.setDestination(37479U);
    msg.setDestinationEntity(173U);
    msg.op = 237U;
    msg.file.assign("QXPEGHPFWGDYFXBZQASARQJHUCTWQNYRWITASNJDZVAPUFLRHEDQSLLGXWJCEAPGQTGYBRZEKXCDRLLHJUKLOTLMRZFOFQDCPTTXYHUQURCW");

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
    msg.setTimeStamp(0.5417092536986683);
    msg.setSource(27813U);
    msg.setSourceEntity(27U);
    msg.setDestination(64527U);
    msg.setDestinationEntity(188U);
    msg.op = 46U;
    msg.clock = 0.6784924847101467;
    msg.tz = -5;

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
    msg.setTimeStamp(0.27472986116235476);
    msg.setSource(54579U);
    msg.setSourceEntity(77U);
    msg.setDestination(13269U);
    msg.setDestinationEntity(66U);
    msg.op = 225U;
    msg.clock = 0.1853418804064172;
    msg.tz = 94;

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
    msg.setTimeStamp(0.07026135974959813);
    msg.setSource(47804U);
    msg.setSourceEntity(108U);
    msg.setDestination(46718U);
    msg.setDestinationEntity(65U);
    msg.op = 100U;
    msg.clock = 0.0028003638020204225;
    msg.tz = -31;

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
    msg.setTimeStamp(0.5685452696964497);
    msg.setSource(35005U);
    msg.setSourceEntity(0U);
    msg.setDestination(64325U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.3617076130678395);
    msg.setSource(45937U);
    msg.setSourceEntity(128U);
    msg.setDestination(64902U);
    msg.setDestinationEntity(70U);

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
    msg.setTimeStamp(0.2789977171121252);
    msg.setSource(16945U);
    msg.setSourceEntity(44U);
    msg.setDestination(1991U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.56915957899384);
    msg.setSource(41778U);
    msg.setSourceEntity(238U);
    msg.setDestination(1039U);
    msg.setDestinationEntity(79U);
    msg.sys_name.assign("HPOASAPNVYBXWKZBKPGOFGMJOHPPNPLWQITPYNAVCGRVRWJOAKLVHJFUDQMGYWKMZFQCBWJZMMTEUBGSOEQMRHWZTVJFMTARYUYJULQRWCQXUOFTEAZAXJQJNCGHSGVZUJDDLISXOUMNBRCZRFUUOSDHODWVSTKQLDLNDIWSCCDKDTHMEBY");
    msg.sys_type = 88U;
    msg.owner = 17119U;
    msg.lat = 0.4801843474993356;
    msg.lon = 0.03890258781261047;
    msg.height = 0.24379480637140072;
    msg.services.assign("LTOIFSAGCVEPWLSINAGBEQBPOXSVDBKYMPRZZBOKQJECVSNCWIMCANFIKLHARGSMMMNIEHRKZGUFRWXOYSBRKQHHLJGQNZPDCXTXAPGZ");

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
    msg.setTimeStamp(0.42636007242966234);
    msg.setSource(40825U);
    msg.setSourceEntity(189U);
    msg.setDestination(29425U);
    msg.setDestinationEntity(241U);
    msg.sys_name.assign("REJORENHBMBBWQZJBGMAXOTNTTXNJXRQAYYCDSCOEGCPIMZNSOQKUUMTJFAPCNSRZMSQBIAMALZGVYLTFECXBJXLS");
    msg.sys_type = 165U;
    msg.owner = 29068U;
    msg.lat = 0.9339767061842388;
    msg.lon = 0.8270119584558339;
    msg.height = 0.8983932587524259;
    msg.services.assign("GQKAZHKZBZZAVMGNQWBNEPDCEVVDTMBICQUQXRJXQQIL");

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
    msg.setTimeStamp(0.8293283922228055);
    msg.setSource(28805U);
    msg.setSourceEntity(78U);
    msg.setDestination(31803U);
    msg.setDestinationEntity(158U);
    msg.sys_name.assign("ETGUKHUGDDKJVOLTTOENMVGYWBIXMOAIZNCVVPYKGJFQUNBFWVJYTFOFJDCXIPSXMPAIPOMAXZEFUUAPGLSYNXPAGLXECLTENSWWBDGYTZSHPIFKCPRZLBIVZQLZUNOHXRBHMXHCQFAVJLYQBDWCKHQNFSMMQHGYERRDOHEGDWVSBPNBQKDPSJRTQRXOKEWDWYBCIUTAFALAUIOYNMNQCDV");
    msg.sys_type = 109U;
    msg.owner = 50530U;
    msg.lat = 0.8203025107561392;
    msg.lon = 0.6026334678347463;
    msg.height = 0.5302267554115098;
    msg.services.assign("PJRALJJKZIGPTVRDBRDTQYJNVHZUKEGHMQRNARGOJMNPJDYXCDVYESJSGTZTSIWIZFSWSHTICPHNJKSHMGQUWFWHQBIKCLQDCYBWLQGZCCOVLBEKPRLBNEICGAXQYFXLATPUWQIZDKUXUMQSFLVEGSAKGSXIBLNSUTAZFMURMZHGCPYXOXMODTAJBEUHECOXFZBXHOMFWOFLLVKVQTRFWHIYDOVAPVEC");

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
    msg.setTimeStamp(0.7945503113571344);
    msg.setSource(25860U);
    msg.setSourceEntity(18U);
    msg.setDestination(46577U);
    msg.setDestinationEntity(61U);
    msg.service.assign("NFMRNVKULPUUUWTWPZTULQXOFTTISGWRCBEXLYAAPZJZGRJXDHOSUIXLNWEQBEVDEPSKHHKUSSTWETCBTIAOQWRHEICNCVQNGHHFWBHYXQXFXZIMOPGPRGKIFYRGISHSIFADRYAVOCMPCZFDYAIOHKJJRMDMJKDPFYFDDJRGTAENLZDQ");
    msg.service_type = 102U;

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
    msg.setTimeStamp(0.014152233552510385);
    msg.setSource(18738U);
    msg.setSourceEntity(83U);
    msg.setDestination(58598U);
    msg.setDestinationEntity(73U);
    msg.service.assign("GNRHLJOSIXOJHZWBOVALGPJNLNOXCICCCAGCCYAMOYTNFPKGHVSITMPXMQEOBQNSTYTUBUTEMHWYZHEFVXAQQEPRSAHMSFODRZITYBULIRVLYWKHVKMADJDJPSUAHZYFOIINSUDDWGKDZLLXRVZEFU");
    msg.service_type = 141U;

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
    msg.setTimeStamp(0.5713383270039498);
    msg.setSource(10586U);
    msg.setSourceEntity(81U);
    msg.setDestination(57290U);
    msg.setDestinationEntity(162U);
    msg.service.assign("XMITUXPOWPCJOXWEAIZEDMPNAUQFZQYSEOWVEUMSLRKNBMMQMDSAFUNPTZPKIEDDCVZQANACDLGFQNSLWLYMBIFVHVZSCDTBYJWBYWRBGEXXQBNZIZWAUJIORPRSCKLRUTAFXRNVAFKRRNYBWRCKCBHILSJHUJZTLTZQTVOYJLOXOPCPXFJADNUKWMXYEYTCVIESTSHO");
    msg.service_type = 254U;

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
    msg.setTimeStamp(0.06884675970188159);
    msg.setSource(28564U);
    msg.setSourceEntity(192U);
    msg.setDestination(6567U);
    msg.setDestinationEntity(28U);
    msg.value = 0.3326495726402192;

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
    msg.setTimeStamp(0.9622664899461031);
    msg.setSource(54173U);
    msg.setSourceEntity(212U);
    msg.setDestination(30610U);
    msg.setDestinationEntity(77U);
    msg.value = 0.4755357923298432;

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
    msg.setTimeStamp(0.022394153611921208);
    msg.setSource(35677U);
    msg.setSourceEntity(130U);
    msg.setDestination(62859U);
    msg.setDestinationEntity(252U);
    msg.value = 0.98725993400458;

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
    msg.setTimeStamp(0.9917309293172244);
    msg.setSource(61604U);
    msg.setSourceEntity(153U);
    msg.setDestination(63020U);
    msg.setDestinationEntity(241U);
    msg.value = 0.5007919801546802;

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
    msg.setTimeStamp(0.9638010489145347);
    msg.setSource(18858U);
    msg.setSourceEntity(79U);
    msg.setDestination(16908U);
    msg.setDestinationEntity(205U);
    msg.value = 0.5329460515333457;

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
    msg.setTimeStamp(0.8781361783518666);
    msg.setSource(32684U);
    msg.setSourceEntity(48U);
    msg.setDestination(22684U);
    msg.setDestinationEntity(132U);
    msg.value = 0.8002248158341535;

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
    msg.setTimeStamp(0.9064734744571178);
    msg.setSource(20789U);
    msg.setSourceEntity(72U);
    msg.setDestination(22526U);
    msg.setDestinationEntity(176U);
    msg.value = 0.9317073529754482;

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
    msg.setTimeStamp(0.8988426749801465);
    msg.setSource(46881U);
    msg.setSourceEntity(7U);
    msg.setDestination(44149U);
    msg.setDestinationEntity(216U);
    msg.value = 0.00473609605392622;

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
    msg.setTimeStamp(0.00814399423892953);
    msg.setSource(52451U);
    msg.setSourceEntity(61U);
    msg.setDestination(62235U);
    msg.setDestinationEntity(253U);
    msg.value = 0.2761331050908188;

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
    msg.setTimeStamp(0.09966554838503217);
    msg.setSource(63453U);
    msg.setSourceEntity(132U);
    msg.setDestination(10269U);
    msg.setDestinationEntity(66U);
    msg.number.assign("QNXQIDTVXNWAXETCBJCXCCGUPOTBLPZLMILZSAMHYMVEEBURAWVAWVDHYFYVXFYWMOXJCSEYERFSMZIESJWCIDNGKWSVXVOUYYLJTGHQFIYRUPZDUALIPVAJJRLADVUDLWKBUOFRQDLJQDFMDWGFKBJVLURUOQSOIIZPPAZCT");
    msg.timeout = 18450U;
    msg.contents.assign("RBYKOERMJNMEAHPAIZBKVZRVDMTCMXZZSWCQWWOCBBXKRYRYWCITBZEQYUGYSTGQRIDIXJOMQONLUADVUJ");

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
    msg.setTimeStamp(0.5752258831386414);
    msg.setSource(62996U);
    msg.setSourceEntity(86U);
    msg.setDestination(7468U);
    msg.setDestinationEntity(169U);
    msg.number.assign("MQVREMMJCFMSWGRKIRPYIOAXCZQLVDKPANPGDYOXQEPHUXLIHVOMCBPJNUMGUHTSTXWHZPPRCWTZOCLVHUTNTYYKDRAZSCNKJUPZTYBGWLEEKSHXRJJWXXAVIZTYVAYNJVJUBJYTBECGVNFCFXKZQNWMTVQZWSNAUUGDQYQNXDBFAHSLLKMFKGIOLFWFWJCXPABGRHEOMFLG");
    msg.timeout = 23915U;
    msg.contents.assign("IUYMAUZOUKJMTAGEHFZJHJDLEXVZROUDZABICAOMDSETOGSBVBEEIYRJBZOFKIESBLSHJKOCITYFWKVRTJTGNXZBUCZLNGBPFAPQDGVXHWCSRKODLFWPPTWYAMLVIWVJNXGJWBQETSRHHSNC");

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
    msg.setTimeStamp(0.9277325451779892);
    msg.setSource(53265U);
    msg.setSourceEntity(130U);
    msg.setDestination(65309U);
    msg.setDestinationEntity(150U);
    msg.number.assign("TJUMRXHJAPSAOVDJIUUCAEHZVHWSPJHEWNFIVAHMFEJXFOXSGVCHBYXPXMAIJMMBNIOVUKYWVJLRIALESQATYBMYPNKKNNTBRGLVGXZGEYCKXFWBDHKBPNCYNFZPFNUCVTGOPAMCIJLBDYXLRYGULMKSGZKPWZQDLCZRKHOXOSQSCTFDGQWUYUAETADMNVTLOBGLWFEQZBRQDOZEQWHIGUTSRVIFDCZLJTUINWODPRHSOQMJRBFQWTSYXRPZDI");
    msg.timeout = 63413U;
    msg.contents.assign("MEHAHXLXWZPLPJHENJPSDUALYRIGUWX");

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
    msg.setTimeStamp(0.061075365066899145);
    msg.setSource(32675U);
    msg.setSourceEntity(190U);
    msg.setDestination(54445U);
    msg.setDestinationEntity(92U);
    msg.seq = 698111449U;
    msg.destination.assign("KHLBNREAIDTCUPJLGCWASAILLDZONFBHCCVJOUWDYADIWPTKGTWNQMFGHXZIJGSZYUYIHFBUNKQUDFXIGZUUBJMBWJYAIFSTXWXMOQEYTOIAHLXRRPRPILGKNHJKKVJXJPRHTDSMVZPOFNPUWQXPNPEEYWCRPIMZOTROLKBAMKHQDEBNSQSVVAZVBRZLYMGRSEJHVQTJLWSCQEFXASVKEMCHSNYUMXGELCZVFQTDREYOTOFGMVWDZKUDXOB");
    msg.timeout = 16771U;
    const char tmp_msg_0[] = {37, -79, -103, 74, 46, -24, -9, -7, 52, -41, 4, 21, 124, 30, -98, 68, -91, 32, 87, -102, 22, -27, 27, 55, -36, -74, -45, -128, 23, 10, -62, 53, 42, 124, -76, -124, 48, -6, 72, -31, 98, -69};
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
    msg.setTimeStamp(0.9322950724634683);
    msg.setSource(55302U);
    msg.setSourceEntity(177U);
    msg.setDestination(57095U);
    msg.setDestinationEntity(175U);
    msg.seq = 1818002712U;
    msg.destination.assign("VRMICZTAAJTSOACPOYKSKQJWZQWYQTKUHKGMEYENRWJVCROABNLDMHXDJSHNMEFTCOEEIJGXRZPZKBGNXGUBTWCDTQKOWDQIYZDXRNAKKZPIQLZCUQIFPLJTOHNCDPLKSLQCNHRMZREGLYJYUPYLDOIBVXVEKWFPOVPAXXXAVHSGVNTHRFOBRBXGSSFWPJZWSCLYVMOIAYEDHRWDMBAUMGV");
    msg.timeout = 40545U;
    const char tmp_msg_0[] = {-30, 59, 124, 84, 111, -47, -8, -28, -89, 17, -73, -89, -110, -16, 77, 14, -70, 72, -64, -20, -102, 78, -105, -100, 81, -115, 92, -18, 51, 113, 19, -106, -124, -15, -68, 102, 4, 32, -56, -76, 17, 96, 113, -10, 44, 94, 84, -69, -35, 72, 62, 11, -127, 50, 114, -50, -3, -113, 45, -32, -60, -74, -100, -83, -46, -80, -104, -60, 117, 101, -26, 73, -65, -16, 75, -34, 45, -17, -83, 76, -103, -111, 16, 59, -14, 52, 5, 27, 53, -73, -30, -114, 113, -25, -123, 41, 92, 17, -74, 68, -96, -41, -99, -87, -62, -60, 39, 106, -105, 63, 81, 86, 53, -91, 106, 51, -77, 33, -65, 36, -128, 105, 98, -31, 1, 35, 41, -24, 7, -33, 68, -33, 115};
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
    msg.setTimeStamp(0.5958652024814061);
    msg.setSource(57706U);
    msg.setSourceEntity(106U);
    msg.setDestination(50902U);
    msg.setDestinationEntity(3U);
    msg.seq = 1417653724U;
    msg.destination.assign("PFAJBOYIIZWTZWMHMXVNNSYQAVMHSLGWELAHNDLZWGLTQREPLVKXBVAANMFTFESAACZPXBIOGGJYIRRRQCBUXNJBZKXKBEHGPSHEEOTCOOMYVSFWZJJLTGMFOIWTMMCAQZTLSPDRQPPVOCUAIYSQOWFKZEYC");
    msg.timeout = 50902U;
    const char tmp_msg_0[] = {47, 110, -53, 121, -23, -58, -115, -2, 112, 117, -65, 102, 41, -63, 17, 49, -25, -107, 44, 59, -46, -12, 113, 119, 1, -55, -54, -32, 11, -22, 39, 66, 121, -33, -93, 26, -36, 100, -106, -29, -39, -107, -25, 61, 111, -98, 31, 38, -25, 120, -123, 40, -101, -60, 88, 93, 80, 22, -79, -9, -112, 13, 40, -93, 54, -90, 60, -5, 120, 41, 46, -41, -28, 96, 36, 24, -94, -127, -86, 70, -75, -55, 120, 8, -14, 125, 36, -26, 9, 60, -91};
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
    msg.setTimeStamp(0.7771627411942559);
    msg.setSource(37556U);
    msg.setSourceEntity(168U);
    msg.setDestination(8931U);
    msg.setDestinationEntity(89U);
    msg.source.assign("DNHDLFVGDATHWLYDDZMOYSUSUGOMWCYXJEJTBZOGTWIKUPSCVZAWTVPGPRLQALYGYFALILPQHQURNZXRSMUXQJBFNKVOAKSCOCLZECVVOXSWVHJIDLXEVBTEHNZXBYFHGTFIZNKICIIZGMROUTBERAVOXVCKQPTDKXQU");
    const char tmp_msg_0[] = {-122, 34, 7, 20, 64, -39, -85, -122, -11, -34, -43, -34, 75, 27, -75, 106, -118, -55, -53, -20, 125, 100, -59, -126, 23, 123, 14, 63, -36, -9, -11, -7, -123, 52, 75, -84, -32, -112, -16, 35, 48, 23, 82, -17, 23, 56, -108, 62, -76, 106, -35, -103, -99, 59, -49, 79, -109, 1, 42, 96, 66, 20, -49, -90, 59, 16, -120, 2, 0, 7, 32, -69, -94, -36, -120, -51, 20, -115, -14, -110, -36, 22, 80, 11, -36, 121, 27, -82, 0, 68, -23, -116, -21, -38, 87, 75, 31, -79, -85, 78, -17, 118, -58, -12, -44, 64, -112, 50, -119, -35, 72, -116, 118, 48, 99, -9, 30, -12, 6, -116, 62, -79, -83, 31, 3, 73, -66, -87, -17, 39, -71, -112, -70, 98, 78, 81, 52, 84, 90, 71, 44, -100, 82, -85, -71, -122, -76, -33, 126, -29, 99, 124};
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
    msg.setTimeStamp(0.9662266690643112);
    msg.setSource(32147U);
    msg.setSourceEntity(45U);
    msg.setDestination(12461U);
    msg.setDestinationEntity(239U);
    msg.source.assign("XANXWBWSLGVVLQBDVJHRPBCRHHEOFKRAMQNIAPYFCYALBMLODSLFJSBMZYGIOXTFRAQSBUMNTIGKDPYEICMQBRDABNWERXIBZQJPLLAYCWKNCVPSFEPKDJIYLMJFPCOHQDCEXHVTGRNJYVOIUDULSVVKUYXKAGMNFHUGSPCJSXKTUZFODZHCQZOTMYARM");
    const char tmp_msg_0[] = {40, -20, -67, 14, 65, -128, -34, -33, -103, -95, 100, -69, 60, 78, -47, 12, 64, 105, -126, 122, -49, 51, 114, -32, 89, 2, -126, -31, 99, 103, 79, -119, -108, -31, 27, -94, -104, 103, 97, 28, -113, 13, -27, 2, 50, -57, 63, -47, -62, -19, 56, -105, -81, -125, -19, 111, -73, 36, -83, 104, 97, 56, 17, 94, -93, 101, 46, -12, 95, 40, 38, -120, 36, 0, 48, -29, 80, -76, 120, -55, 63, -30, 84, -50, -84, -44, -53, 48, -37, 30, 110, 85, -77, 90, 55, 60, -6, 69, -95, -94, -85, 105, -36, -98, -78, 110, -119, -64, 76, -107, 29, -8, 42, 11, 76, -12, 118, 83, 113, 37, -51, 105, -60, 82, 84, 49, 95, 110, -86, -66, 32, -70, -77, 123, -114, 4, -113, -38, 28, -7, 119, -68, -92, -47, 108, 6, 63, -125, -3, 80, -123, 84, -45, 89, -40, -118, -74, 96, -69, 21, 22, -23, 9, -118, -103, 3, 38, 61, -91, 29, -37, -15, -88, -27, 69, -12, -50, 86, 122, 113, 22, -41, 83, -121, 86, -8, 26, 34, -90, 9, -117, 98, -84, -103, -47, 68, 1, -49, 73, 91, -9, -24, 97, 98, 8, 18, -57, -62, 66, -51, -17};
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
    msg.setTimeStamp(0.7010941270325864);
    msg.setSource(49747U);
    msg.setSourceEntity(108U);
    msg.setDestination(15957U);
    msg.setDestinationEntity(49U);
    msg.source.assign("VNSLKDDQENGWKCQCIJRBDPRYBHGOYNYDKWFOVDSZURPPWWOPYXHKTHUTMRFTXSNNQJZNGXGTIHUVEOVPTDFSEXABGOOHMUCVZAYCIBRWRWEDGFCLACKZBAELJGYKCISRCYQMUQTWLTURQXXEZQWJJEJPHGHVFCKDSVSOFDIMUFFYDIALMYJBFNQUZAVVYPXSEZOJHMUMHWWOOTQARPTEKLLBEXNBIPRNIASMIZ");
    const char tmp_msg_0[] = {-7, -6, -1, 126, -102, 121, 4, -20, -65, -103, 57, -18, 110, -86, -18, -53, -73, 11, 75, -23, 58, 59, 53, -15, 113, -82, 7, -30, 53, 42, -5, 76, -10, 75, -29, -61, 48, -32, -122, -98, -118, 95, 39, 107, -94, -70, -103, -31, -118, 52, 10, -11, -64, -44, 9, -6, -95, 78, -79, -37, -34, 14, -101, 18, 74, 107, 65, -87, 98, 70, 8, 118, -127, -32, -37, -111, -90, -28, 9, 110, 33, -87, 74, -55, 59, 68, -60, 21, 27, -39, 39, -18, 86, -43, 47, -99, 100, -74, -97, -87, -72, 14, -74, -95, 101, -124, -111, -16, 37, -15, 48, -86, 85, -81, -104, 23, -18, 50, -47, 119, 7, 46, -98, -114, -32, -16, 29, 101, -66, -127, -2, -80, -48, 43, 26, -95, -112, 112, -110, 60, 9, -93, -32, 113, -51, 0, -17, 1, 95, -110, 113, -121, 14, 12, 104, 34, 121, 64, 62, -70, -74, 19, 72, 16};
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
    msg.setTimeStamp(0.10103334829922228);
    msg.setSource(43464U);
    msg.setSourceEntity(81U);
    msg.setDestination(30939U);
    msg.setDestinationEntity(131U);
    msg.seq = 108925980U;
    msg.state = 37U;
    msg.error.assign("BEIELBTUDDLKJQHCAXJBMYSWBVQBZQNOHJROGYGWJMAVUNVRTLRXGMEVRQMIRFFYKKBOSJYWPQDGYRIYQAGADTKIYQCKWSLWPNWCGPFNWPUCSSOQXUQZPUDIPKIPTWLSFTAOOJLCBIEKOHHDWTVVFXKUZOLHWVOC");

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
    msg.setTimeStamp(0.9324029642796894);
    msg.setSource(57753U);
    msg.setSourceEntity(125U);
    msg.setDestination(34299U);
    msg.setDestinationEntity(1U);
    msg.seq = 2754756199U;
    msg.state = 100U;
    msg.error.assign("OPNXLCAKDENSXYRLFIMPZNJUHDPOSE");

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
    msg.setTimeStamp(0.7067192591374036);
    msg.setSource(47374U);
    msg.setSourceEntity(136U);
    msg.setDestination(34909U);
    msg.setDestinationEntity(162U);
    msg.seq = 1854304334U;
    msg.state = 23U;
    msg.error.assign("NKFANIDHVTLVAMOJTLCYGPTYALQABZJZIGZIHSBDHKPKFILUFWCBI");

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
    msg.setTimeStamp(0.27767924555551493);
    msg.setSource(48609U);
    msg.setSourceEntity(205U);
    msg.setDestination(17035U);
    msg.setDestinationEntity(6U);
    msg.origin.assign("UNIJEGJOYMCKGCFHOIZLBAQYZPHJELBQKEXZJJDSDDBULDOTI");
    msg.text.assign("TUMSULTMGGCTLMQHVRLSSOGILGZGFJUAIKQOTRJJDQGSBZQZFUBQFSJXOZWVYCZCWMENZFYOXBVLAWI");

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
    msg.setTimeStamp(0.028067149032593774);
    msg.setSource(51467U);
    msg.setSourceEntity(215U);
    msg.setDestination(42889U);
    msg.setDestinationEntity(81U);
    msg.origin.assign("ZHUYYCBLPCPWHJNGDOGNZXRXOLWUWBJHYGBEQXPVNSGQJVQLGSPXBFSQCTDAMVHZIYPDJYSRLLKMYCBNJDPCQDER");
    msg.text.assign("XHPXEEBYQQLRIXZJTPFHUSRQYRHSNVHFAZAKORTKEBYCMBVRZHGNSPLALLFQMQOTNSCMCJUWETIBUGUKQQXKDZBWDCINTHGKZJEVYORZJGCZKULOITHFXNIDBMGHRJVSPXHNYCAFKGYJEGITNGWADZJYESV");

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
    msg.setTimeStamp(0.40899971279200453);
    msg.setSource(64777U);
    msg.setSourceEntity(119U);
    msg.setDestination(63789U);
    msg.setDestinationEntity(131U);
    msg.origin.assign("KIMNTXTANQIXQSQHUPGGGIKMOBYKZEFLIVJAMZYJRCEHMNSPCJUEBHLDQNRBEOCYPHKFTFDFVHVHRGZECWPYVMFXDSMOSGTUQVFDKIVJCABYEZYSRNYECSXGGAAODLXXFNTUJHVSWXAMMOWSYTUXPIRRGULQMNFFZDREIZCOBJBKNBNUKWJRALQQPCSFIDOTTUNOPYWAKGVVXJZURLTDEPQXBBWBJATKOWDCVCRHAYPWLLSGEJ");
    msg.text.assign("EDUKCAYIJPLGRNXPHPHBQCATYCICEPRXAQTMQXBNFHDIYRBHSWAGMKYVMMKSVXPBVGCSQFMLDDKHISALIZCZNKOZWXJJXRVTOT");

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
    msg.setTimeStamp(0.32203979584571407);
    msg.setSource(55128U);
    msg.setSourceEntity(249U);
    msg.setDestination(53857U);
    msg.setDestinationEntity(120U);
    msg.origin.assign("UYQOVRWLVUHH");
    msg.htime = 0.9917391510864865;
    msg.lat = 0.5025844895949904;
    msg.lon = 0.2601237233843505;
    const char tmp_msg_0[] = {-32, -106, -37, -53, 114, -75, -94, -110, -2, -44, -35, -59, 69, 7, 108, 41, 121, 71, -79, 86, 117, -74, 94, -19, -4, 38, -78, -127, -71, 38, 31, -30, -65, 95, 94, 107, 71, -84, -78, 72, 117, -73, 126, 102, -61, 83, -99, 44, -22, 19, -99, 61, -29, -101, 82, -30, -102, 105, -23, 53, -61, -63, -70, -68, 0, 77, 121};
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
    msg.setTimeStamp(0.8226613364741736);
    msg.setSource(2422U);
    msg.setSourceEntity(173U);
    msg.setDestination(40229U);
    msg.setDestinationEntity(138U);
    msg.origin.assign("QEIWNSYPOCLRBBOBFNCKFIDGBANENBMSLNZRYATUBOGYHXZJPPIUDTAKUGFMRAMJ");
    msg.htime = 0.4549416197504118;
    msg.lat = 0.6672925094553692;
    msg.lon = 0.07171134106606702;
    const char tmp_msg_0[] = {5, 106, -21, -42, 94, -89, -26, 23, -40, -114, -1, 14, 75, 108, -124, 16, -53, -105, -1, -120, -46, -67, 118, 74, -10, -63, -33, 70, 114, -122, 18, 51, 110, 54, 65, -95, 121, 88, 25, -39, 98, 45, -99, -47, 21, 42, 110, -4, -5, -82, 82, -30, 94, 115, 86, -54, -91, -93, -67, 112, -15, -125, 58, 80, -73, -27, -51, 64, -49, -29, 100, 22, 97, -86, -13, 100, -106, -90, 71, 48, -97, -123, -86, -8, -58, -68, -68, 21, 96, -123, 112, -89, -114, 0, 114, -63, -34, -40, -116, 124, 70, -106, 35, -91, -4, -42, -10, -116, -25, 105, -127, -122, 1, 10, 82, -128, -80, -84, -66, 47, 100, -37, -97, 74, 88, 3, -98, -33, 126, -81, 116, 17, -77, 100, 97, -125, 12, 115, -5, 43, -85, -44, 105, -110, 73, -99, 67, -112, 116, 68, -107, -52, 0, -103, -21, -16, -41, -20, -53, 66, -74, -60, -103, 91, 28, 39, -48, 0, 113, -38, -101, -93, -76, -65, -14, 11, -79, 18, -96, 126, -34};
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
    msg.setTimeStamp(0.7364734922662557);
    msg.setSource(64004U);
    msg.setSourceEntity(34U);
    msg.setDestination(21697U);
    msg.setDestinationEntity(83U);
    msg.origin.assign("BJENDGPPVPJRCCTRERZFPKWQFAIKIDJJLNNZIXXGAALHTZUXVIOXOTDFYCOUAKEYYFULZBQITSSOHFYPJNBQJBLLFHSBFVQAPEHYCTWBLAURGGMVOUWUMKNGDQPOSIYLTGPWCNSWBJCHMZATDEFSXVLXMKCEZIHMFDGNZHMTTZEJRGTSMVLKODGHIZOEPICMJQDEWSKGPHROWBNASDUASXWZARQV");
    msg.htime = 0.5586170195408535;
    msg.lat = 0.35059654357678993;
    msg.lon = 0.4777399579194639;
    const char tmp_msg_0[] = {-33, -120, -48, 30, -47, 71, 117, -60, -90, 108, -7, -105, 107, -58, 99, -26, 84, -103, -46, -5, -40, -76, -11, 69, -100, 49, 50, 87, -125, 23, -21, -114, 50, 98, 61, -111, -10, 58, -63, -51, 125, -125, 14, 88, -123, 115, -114, 8, -31, -101, 27, -65, -94, -49, -69, 103, -43, -25, 18, -12, -84, -108, -21, 63, 7, 35, -107, 59, -126, -58, 14, -30, 0, 119, -90, 72, -87, 38, 2, -16, -103, 126, -65, 42, -7, 40, -73, 46, -38, 123, -111, 52, -26, -33, -72, 38, 98, -124, -19, 99, 29, 62, -70, -31, 90, -9, -102, 111, 47, -105, -44, -127, 51, -97, -101, -15, 60, 93, 36, -124, -41, 12, 52, 42, -124, 79, 63, -30, 23, 104, 98, 13, 102, -105, -122, -128, 38, -21, -106, 1, -98, -18, 95, -114, -6, 50, 53, -46, 92, -80, -74, 24};
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
    msg.setTimeStamp(0.9412451655903472);
    msg.setSource(1827U);
    msg.setSourceEntity(46U);
    msg.setDestination(15994U);
    msg.setDestinationEntity(49U);
    msg.req_id = 54010U;
    msg.ttl = 51339U;
    msg.destination.assign("KEDEGVBZMCRZZLXVIQCYWJVNLSSVUFKLHXEAHZVCELCNEWUJZR");
    const char tmp_msg_0[] = {116, 78, 126, 9, 124, 10, 53, -10, -78, 2, -15, -46, 104, 94, -40, 102, 82, 106, 87, 82, 69, 11, 54, 3, -115, -113, -57, 57, -115, 98, 60, -23, -103, 119, -6, -12, -9, -126, -80, -3, 82, -91, 30, 121, 13, 33, 82, -27, -7, 48, 43, 8, -28, -63, 118, -38, 4, 74, -17, 83, 1, -66, 10, 101, -100, -13, -31, 105, 19, -88};
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
    msg.setTimeStamp(0.06061398132083884);
    msg.setSource(36193U);
    msg.setSourceEntity(91U);
    msg.setDestination(39138U);
    msg.setDestinationEntity(195U);
    msg.req_id = 38802U;
    msg.ttl = 50632U;
    msg.destination.assign("SLFXGYQYJZNSUUXUHHGMXZGBHMBPCFRWQEUAJGCYMCNMTIFVHAIGECMFDJYLDH");
    const char tmp_msg_0[] = {-40, 72, 71, -115, -3, 18, -127, 11, -121, 72, -122, 38, -62, 113, 86, 25, -8, -83, -70, -93, 98, 31, -62, 52, 97, 95, -40, -112, -49, -76, 70, -8, 24, 16, -118, -88, 63, 8, -11, -51, -117, -56, -4, 5, 42, -32, 109, 104, -2, -121, -79, -111, 122, -10, 81, 93, 62, -79, 40, 113, 98, 38, -51, 73, -89, -65, 33, 100, 58, -105, 72, -86, -5, -92, -37, -70, -6, -84, 42, 13, -88, -96};
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
    msg.setTimeStamp(0.5221471995041033);
    msg.setSource(12674U);
    msg.setSourceEntity(253U);
    msg.setDestination(62790U);
    msg.setDestinationEntity(201U);
    msg.req_id = 22535U;
    msg.ttl = 3785U;
    msg.destination.assign("QHDTMKMIVBAGPJWQATCXNMDWCBZCVKLVHRXYMNSDIQPOCDTZHSLZIQUREODBJTCBUHJSFRZRFPDUTPKXHHYFDNLTEZPMJEOZAUSSGFEFHYSBNTIXVBKUWGAQFGRIAWOWGXDGAXBJKISEYFMOPULZAOWRPENPKERCCVVYNATCQWQROHVLKOQIDNRXNQIMBFLYXEMMWLLYJZYZHFAKVJGJ");
    const char tmp_msg_0[] = {109, 97, 32, -82, 65, -41, -5, -81, -73, -87, 63, 43, 55, 98, -42, 0, 89, -98, -61, -18, -109, -96, 82, -72, 73, -39, 21, -22, -4, -66, 80, 25, 12, -114};
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
    msg.setTimeStamp(0.6953802770198282);
    msg.setSource(27456U);
    msg.setSourceEntity(151U);
    msg.setDestination(65366U);
    msg.setDestinationEntity(82U);
    msg.req_id = 41083U;
    msg.status = 195U;
    msg.text.assign("GLROZMUOKCRBPKLQWMHGRFKKRYJQSUABZDZFVPFPHEESHVPVQDMVGQJEEZOZWTDJITAXHMLYMYCNZUQGLDNRYJONIURSSFZRGBSXPAUVAEGFUFHJZIBAFRPQCQWLXFVKVLNFCOCHXHIXEDTWCSKJHNXUTONWIY");

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
    msg.setTimeStamp(0.3452609685269662);
    msg.setSource(58155U);
    msg.setSourceEntity(71U);
    msg.setDestination(36153U);
    msg.setDestinationEntity(153U);
    msg.req_id = 54225U;
    msg.status = 246U;
    msg.text.assign("ELUSIJOBZYOIFHANMDGCAGSNZOYCKWNYCUCSDWEZBKPIAUOIQNIAVAMLEIBMIVNWFPVJWEPHKWFGDXEEIBAWHHJQBTTTJUFMBOSRMFRJTOXFMWLRPUQ");

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
    msg.setTimeStamp(0.08437751291352069);
    msg.setSource(61234U);
    msg.setSourceEntity(75U);
    msg.setDestination(56595U);
    msg.setDestinationEntity(191U);
    msg.req_id = 40418U;
    msg.status = 233U;
    msg.text.assign("RSKAREGFLABJ");

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
    msg.setTimeStamp(0.1406618198427826);
    msg.setSource(64833U);
    msg.setSourceEntity(123U);
    msg.setDestination(38312U);
    msg.setDestinationEntity(215U);
    msg.group_name.assign("ZHIHDXOWEHSJWIEGTNPAYNRZBOAYAKODTKDBRVZUKUIDZKYHFHVEYCEFENATSBEUMIEGCZRUFBWICQIMVTZNSXWFTMYJWMFUKYFBCSLPUZADSEBGISLPXMJXANXUNOPOYFUTXGTMYQRDYJKRQOKWGTIUIJOALVQWHVDWXJPCLBVCLLQRDRBUSLQQTRHJEBCSMOYZPCQGJCWFNSSKHRVNMAJPGJFHTKWXOXNZIQCQBXMGKFGLPNMVLZDPHLGVA");
    msg.links = 3323486142U;

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
    msg.setTimeStamp(0.1859973688044294);
    msg.setSource(37570U);
    msg.setSourceEntity(142U);
    msg.setDestination(32316U);
    msg.setDestinationEntity(71U);
    msg.group_name.assign("BJWNDIKRECQHJMKNHEXWDYIYHLVQFJXEODGRZXUUFFCDQUARRRRDCAUDJTBJ");
    msg.links = 1572594609U;

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
    msg.setTimeStamp(0.06869063596694847);
    msg.setSource(4136U);
    msg.setSourceEntity(126U);
    msg.setDestination(14283U);
    msg.setDestinationEntity(103U);
    msg.group_name.assign("CVBLXZUDXNOYXHDYJJWYJIU");
    msg.links = 265097832U;

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
    msg.setTimeStamp(0.2519422450189128);
    msg.setSource(43265U);
    msg.setSourceEntity(244U);
    msg.setDestination(45608U);
    msg.setDestinationEntity(75U);
    msg.groupname.assign("SXLVPIKKLRJFFVLABLDYIJCAUEZZGUOOFVPDKJSKNNIWJFQFKOCCAADZGVDWVMXEAFKBGXGTZUPQTJPAKMXHNZWHBZCXMMGSLNELHUDTXRTESEQEYRSIEYTXB");
    msg.action = 120U;
    msg.grouplist.assign("JVZUJMGIYHTLZVYBIQCPDSJQXJQRPRWESOFFHSLMSAUAJGFFVPSBHPCAOXWPXL");

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
    msg.setTimeStamp(0.9086377083944709);
    msg.setSource(49981U);
    msg.setSourceEntity(39U);
    msg.setDestination(15380U);
    msg.setDestinationEntity(249U);
    msg.groupname.assign("YSGZCJBWDBAHVSSTUJPPACFJKLDKPANOUEIVBUWQMLSGHWKIGDRPOGJWNWYTINWGTXKOTEQEQXVMFQJJVTLGFMDZHEQHZCVCCFYYKZJLFBSDORENQDRBMHHTNSQFBDCIZSGZATNDCQECSPWKNJJLHVMPISYIOGLZRYXOULLMJUOEOQBRRKGWLAXZFAVIVPNTHNUBXWEXXRSRRQOOYPYEHPIAMHGBURMTKXYMFYKKPUDWFLAXCUI");
    msg.action = 252U;
    msg.grouplist.assign("WREPLKYICPDFNVANSLKZODAZCUYALDMKCANXOXOEOSVMGXDHVTGBEHFYKKYXGWJQJVHTLUDSGONXKFPMMJYUZRIVSQGTABEIRECEGCKKRJQQPSNMOYUSWPFWRGAUBTRZWHKIVLTDFH");

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
    msg.setTimeStamp(0.975569702457463);
    msg.setSource(52951U);
    msg.setSourceEntity(251U);
    msg.setDestination(14330U);
    msg.setDestinationEntity(168U);
    msg.groupname.assign("BSOSTYORVHWSRWTMVQHYQBGWXDNWSXFTODAHHFXDDICKJLBXNPPNZFEIJAKVJOPLAIAQXQPBZZNPLJMSZWOBUHROQPKQGHIMBGFIJSAVWMCRYCIEHCAQMGGQTXSNKWLNRSRCTUMJVOUYWEPKECBYZOUYSUEZLBYXHXEJIKGDTWPVGDCCONVEEVKUDAEFEKTJARVKQYULNAUFYZITUQMWIGFMRFUZ");
    msg.action = 71U;
    msg.grouplist.assign("CETNBZQKKRFGRTPPOEUVBBULQGCWZTOCCNBBEGSNDCUUOBOBSAXSDDHLVNEZVVZXYAPMQHSPXBBYLKSRZJYIOZAJIHGXWCREROTMQLKJCFJLYSTUMQFBJCQNDTVDMEGAXYTJWYFYLNKLWZFZMTFPYKLRW");

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
    msg.setTimeStamp(0.8425990346290652);
    msg.setSource(49538U);
    msg.setSourceEntity(176U);
    msg.setDestination(27102U);
    msg.setDestinationEntity(235U);
    msg.id = 179U;
    msg.range = 0.5751947571389815;

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
    msg.setTimeStamp(0.5842711470509883);
    msg.setSource(57679U);
    msg.setSourceEntity(212U);
    msg.setDestination(11358U);
    msg.setDestinationEntity(158U);
    msg.id = 161U;
    msg.range = 0.14165047011096232;

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
    msg.setTimeStamp(0.23531995758313207);
    msg.setSource(10711U);
    msg.setSourceEntity(147U);
    msg.setDestination(26861U);
    msg.setDestinationEntity(247U);
    msg.id = 214U;
    msg.range = 0.18552800130821478;

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
    msg.setTimeStamp(0.9682335776131549);
    msg.setSource(39210U);
    msg.setSourceEntity(55U);
    msg.setDestination(10354U);
    msg.setDestinationEntity(50U);
    msg.beacon.assign("CNELAUHVLJYMVJLKSZCWBGPFDYGBZZKTDTMRTDDSFJRHZHUDRCOTQQQXVWLLMFRMNQGCIPTIXYIJKZNFPIUEKI");
    msg.lat = 0.33608342663363777;
    msg.lon = 0.9361802119239943;
    msg.depth = 0.9124605614958136;
    msg.query_channel = 128U;
    msg.reply_channel = 154U;
    msg.transponder_delay = 191U;

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
    msg.setTimeStamp(0.8245973593290329);
    msg.setSource(23016U);
    msg.setSourceEntity(161U);
    msg.setDestination(26253U);
    msg.setDestinationEntity(187U);
    msg.beacon.assign("VVPKWNUZIDWSBJVFKXYGSAAXVOSPNUDKTDEYRQHSAURYPOCCBULKXIACENGJKFDDLCNWMWQHIFTTZXLTHMBHCCGHFAIGQKFDENOBDXIFSRBEBXAHSPCGRCOB");
    msg.lat = 0.5121467892800239;
    msg.lon = 0.6052485235029738;
    msg.depth = 0.3917092940311625;
    msg.query_channel = 51U;
    msg.reply_channel = 212U;
    msg.transponder_delay = 10U;

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
    msg.setTimeStamp(0.053501395009357244);
    msg.setSource(43779U);
    msg.setSourceEntity(254U);
    msg.setDestination(25343U);
    msg.setDestinationEntity(86U);
    msg.beacon.assign("DLPPFHDRKHYPQUFZJWZADFMTGRYAENYOHLSGIKVAEWZHKONLXRTEBZSECMZRECKWUMMZMXYRRBPPIWTEWEKBUMNXTRPQGUBSSTJJNLUQSXKUCFQBGGLGSGGBNOQIBCLNJXHADIRJEJANCEFHMQLOGTYONLSDOLWVCFFVBXWJUQTXVCKXI");
    msg.lat = 0.008257948335924525;
    msg.lon = 0.5361524757934023;
    msg.depth = 0.5138134787780442;
    msg.query_channel = 197U;
    msg.reply_channel = 86U;
    msg.transponder_delay = 140U;

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
    msg.setTimeStamp(0.767193553549768);
    msg.setSource(20277U);
    msg.setSourceEntity(247U);
    msg.setDestination(17448U);
    msg.setDestinationEntity(134U);
    msg.op = 50U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LHQBDXJDOMXTZYRVCQFZCNODNBXTFKDPSSIVHEENSEUZRYISAVYFXFRYZIFOPMYSMAHLJTKPNNMCVJHZOQBIGSZQEUPEHWLTLEGMBBBLRVDTGGUWONCRFYOKVLMVFTRPPKGEAYJPXUCXUWHURVBNYHNDQRYAQOSRDBHHKCOOPLAGTKVIJEGWWKQAWLJJWDNGVAXMXEBDFMQIDEILZPZTUGS");
    tmp_msg_0.lat = 0.09769468985488394;
    tmp_msg_0.lon = 0.6994438384727443;
    tmp_msg_0.depth = 0.9098132260614381;
    tmp_msg_0.query_channel = 13U;
    tmp_msg_0.reply_channel = 184U;
    tmp_msg_0.transponder_delay = 84U;
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
    msg.setTimeStamp(0.8516956007366548);
    msg.setSource(52465U);
    msg.setSourceEntity(145U);
    msg.setDestination(41374U);
    msg.setDestinationEntity(233U);
    msg.op = 78U;

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
    msg.setTimeStamp(0.4625186448624541);
    msg.setSource(35595U);
    msg.setSourceEntity(35U);
    msg.setDestination(8892U);
    msg.setDestinationEntity(107U);
    msg.op = 86U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QYGRTXDMGMCSGDGMUCYEJHBKCAGTMHRSRFOSZUTHQUZKWIXPRYUPJNODIUEKKEPCTWSPQQZZFUJUPPLFAMOIMEVHVONFFLRWRYBYSJWLQVVHRX");
    tmp_msg_0.lat = 0.6860129252281743;
    tmp_msg_0.lon = 0.4961124575378536;
    tmp_msg_0.depth = 0.15259585021538757;
    tmp_msg_0.query_channel = 172U;
    tmp_msg_0.reply_channel = 135U;
    tmp_msg_0.transponder_delay = 37U;
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
    msg.setTimeStamp(0.6434647487512194);
    msg.setSource(3587U);
    msg.setSourceEntity(238U);
    msg.setDestination(35705U);
    msg.setDestinationEntity(100U);
    IMC::Event tmp_msg_0;
    tmp_msg_0.topic.assign("IWRCSQUHPYATIUUHNLOQBZMPVFDLGLWYXIFIJJTTGGTFSGIDDGZHXMADMJLZLKXUPNXVBNEKRGEVFQMYJGOJBFZAIOAMQHGPTYYTMYSVSGRFDIDWAEQZVPXVCIKBUBIWCKCUATVERHXSCNRMYJUSVUXHHTZSRWXOJVUPEWHKLMDVQWPEZLQOYWGRNE");
    tmp_msg_0.data.assign("EFITFBSUIEYVSXMXTGURCRFKNDQHCWUTQXZBYKLAHBJAFIZZVXWRMENADNLESZXOMZVJOTHYP");
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
    msg.setTimeStamp(0.6813097841356834);
    msg.setSource(34882U);
    msg.setSourceEntity(191U);
    msg.setDestination(21875U);
    msg.setDestinationEntity(74U);
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("IPLJAWYMKVYERPDXBXSTIMOTIYRBEMUYBJASDNCZUQKCHVIZOEGDPHTAWDJROIQNZYHXDCJNQOQZBW");
    tmp_msg_0.attr_type = 66U;
    tmp_msg_0.min.assign("MLXCPRNYGXNOSDRVQBRNLMEDCFHQEIVQKMRUTJJBTPTWNUJWSFIRLCHDDSIPLMXNZXEDIDMOWHUWSGLARPEAGKBOFWVYNAWTFXWVABOXPTQYQRKVVYYQXHBDZUNAJGYXCPOIILNKYKVMSZPOXFWGYHHTKEAMAZXNYKOUPGQTUDGMTPGSUZHOHCOIFDJBBCNJFUCRWVUQVEAZVGATLQKZPEAGIIJSDFHFWOSFZZSJCCRBTLJBMYZHERLJUKIM");
    tmp_msg_0.max.assign("NRZISCUYVDPLSQBCQFWGKEBROGEMOVMHPLRAWKFHMGZSCOWADFLRIDGXJNJPLQKQFKXIGFCKWSXHUOALDHIIKTDEGGDVLRZOSIPDXOUFMALVYLVPVFMPAOQAIATQSJXTWENYSFENMJHCYABMUBPTGRJJCZ");
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
    msg.setTimeStamp(0.7292886798645936);
    msg.setSource(37097U);
    msg.setSourceEntity(240U);
    msg.setDestination(43281U);
    msg.setDestinationEntity(214U);
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.plan_ref = 2994641217U;
    tmp_msg_0.id.assign("UIDIQVNYXSCLNZLMGWYRQGMZVDKVSECZOZXBIJDKVFWHQPKXEIGRKSTZWBJCJFAUWUZHXAAYRZEQNGVTWTKCQTFZFOQAPGYXAYBDQYVJXHSHJMKYSPUPUFHIBSRPBNVRTRCIMWNLXFWSHIDFGTLVNMKIOELMLQPJZMORTLNPTWCWDPGIOAFFEBAJYKOKIHOLVYJSMMODHSAUWUHCQGKNMLERUYXEVDZUCTEACBNOGSELENCHTABQBXDRDXO");
    tmp_msg_0.memento.assign("HEADWBBCRJBRSBYYTLJLXJOZDORFMIPZNVADANIYSJNRKGCYWOQGTIMMHKZNWFHDJDGSYTKFHENPHSOAPRVIZMQFZWMREMPJHCMXZQLSKWVRLJDUFKKMREDPXTPASUPNGLFAKWXDBUIANWSOVAVXZKEMIS");
    tmp_msg_0.timeout = 50291U;
    tmp_msg_0.lat = 0.2525693412321094;
    tmp_msg_0.lon = 0.5188831670581696;
    tmp_msg_0.z = 0.46652964789416485;
    tmp_msg_0.z_units = 35U;
    tmp_msg_0.duration = 1157U;
    tmp_msg_0.speed = 0.40503860212698406;
    tmp_msg_0.speed_units = 113U;
    tmp_msg_0.type = 228U;
    tmp_msg_0.radius = 0.0648636932788268;
    tmp_msg_0.length = 0.3285002341557278;
    tmp_msg_0.bearing = 0.7072463713300479;
    tmp_msg_0.direction = 164U;
    tmp_msg_0.custom.assign("JXYVWRKGGJEBAXGDVZMOWDICRGOZEZTEHYSWENIJQXDHPCLJOIPVZVMRSAKABFXZYKYODCAVOXMATFBEXSABKPGMZMIWUUQFZDMLOJWSWDCIODTJPZMSTCNLBJNFFGDMLXSNRHOSAKYEQNYUPIYPM");
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
    msg.setTimeStamp(0.8134621566002225);
    msg.setSource(14568U);
    msg.setSourceEntity(244U);
    msg.setDestination(48917U);
    msg.setDestinationEntity(139U);
    msg.op = 1U;
    msg.system.assign("PAHVKUUYFZEWMUTTCJCGIUVXOIAUVFZBHFJTYEPZQVFLDPOUNJNOHWMQAMXULJBO");
    msg.range = 0.14143668884255067;
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 151U;
    tmp_msg_0.quality = 251U;
    tmp_msg_0.reps = 240U;
    tmp_msg_0.tsize = 105U;
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
    msg.setTimeStamp(0.027609106526004012);
    msg.setSource(27199U);
    msg.setSourceEntity(132U);
    msg.setDestination(2912U);
    msg.setDestinationEntity(76U);
    msg.op = 26U;
    msg.system.assign("ZAKCOWYRXRIOBUHOJBTYXFMYEVSPWRQZQQENBHHYDOUFIQQCMLBXOZVTYBGBEDJQSFEAPTJGWJHXPMGIGTWIATOMMTJNRKFDDXRHDXPFIODXCSASGFNMVWGKPKJYHRFZZWYNDAHWMHAZLYTRAKPOEVNSERSTONUUZANASKKDVLWFUSZPYVLKZEVLGHTPSLICCVIOCULXLLELGHEFVBWXINEBQUDWNCCUJX");
    msg.range = 0.1922379498641268;
    IMC::TrexOperation tmp_msg_0;
    tmp_msg_0.op = 184U;
    tmp_msg_0.goal_id.assign("AXBAQLCPQNUSKVIIOBSZKDRYZXUKRCNYZKLFTKPJBAFLYOWVMAEHBGHQOXSGRLVEYNETETMRJAWJWWXOUKNFMLIVMTOZAKBYTBLDDMAJYWHXHWCTSDSHCPIDNQZOPXVYSJPXUIONJVW");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("WQNKPLADTDSVABFCSNFLFOOBGLXLCEQTFD");
    tmp_tmp_msg_0_0.predicate.assign("FGDWQHDOYLFIUSKJQPZDAFTTLKDZTYMDCZSSAJCHQRIEJNSAMCLAHQRNFYNPMONNNQKHTBEEMMBLWPYMZPQXXIUUKVVGCNRXPYICRZIEOMZ");
    tmp_msg_0.token.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.37446617695454376);
    msg.setSource(35789U);
    msg.setSourceEntity(179U);
    msg.setDestination(3095U);
    msg.setDestinationEntity(161U);
    msg.op = 83U;
    msg.system.assign("EVQXHNUQKKBYGWJMTBFRFHTDOOHEJPTRTKYASPXMHDLAJYYZAAQFBYNOCDCPCQBCWLNGPGSOUEHHVBGXWJZNDMKUMXIWLHRKFXRWVKUQSMYGCAOYIZIDAYUTOCGINUTXKMSOTVFRLEVYKBTLFECRCEEHXWJAVTADZZQNHKPGLSDTBDAIMFUPSDXLCZSXCQFJJYEKUNZSUGPRIRZIZOXHVBPWGADNIPZBVJEEWFNVQIMSIO");
    msg.range = 0.7557704705840401;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.plan_ref = 2932219984U;
    tmp_msg_0.id.assign("BJIZSYRMJOJPRHMSONOVTIRFOZPIDNLNFNSROLCAKWHBASQKREGCECLKXUYDJUWKBEWODYJHAKBVFVSYLMELIMTGCTODPAMEFIAZBBPFRKZAGNTNQWXLQPZVEFCYTEMQQJCHBVDDZZHSPYHXLIRXFGDPPXHY");
    tmp_msg_0.memento.assign("WDTPHEMQEEMSPFGLBTONVJDTAXCVEMODFPLANWWPNVIYJSYWFHIAZUVSSFQVRZKUHGIIKQCLYYAFPXSOAKOA");
    tmp_msg_0.timeout = 21594U;
    tmp_msg_0.lat = 0.44799433554507195;
    tmp_msg_0.lon = 0.09311419737457971;
    tmp_msg_0.z = 0.050802845761890314;
    tmp_msg_0.z_units = 254U;
    tmp_msg_0.speed = 0.7702694655656852;
    tmp_msg_0.speed_units = 23U;
    tmp_msg_0.duration = 16173U;
    tmp_msg_0.radius = 0.7688052189480499;
    tmp_msg_0.flags = 251U;
    tmp_msg_0.custom.assign("IWPPCWTLXZTZOLUYAAQPJWYIKBDBJRWFTOYOSGPBSFNXJOMDLHHQMNQGAATUBZLGDEAKWMRVGJLQLTSCEFAFEXGKEPFBCSKYHWZCPCEBDCAHXUUBHFGXWAKIVHDIHHQVRYODENCPZRJWDTJOHZLVCILNFISCFYIAPOVLJEMEOQ");
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
    msg.setTimeStamp(0.7619553688677164);
    msg.setSource(30123U);
    msg.setSourceEntity(177U);
    msg.setDestination(10289U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.2709453803863099);
    msg.setSource(6947U);
    msg.setSourceEntity(169U);
    msg.setDestination(1381U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.7290276457571537);
    msg.setSource(20427U);
    msg.setSourceEntity(78U);
    msg.setDestination(4545U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.9586345032871771);
    msg.setSource(4752U);
    msg.setSourceEntity(142U);
    msg.setDestination(36778U);
    msg.setDestinationEntity(50U);
    msg.list.assign("PMELPSVPKNDEFODRCPZYSJIVTVHIWYTATMORQAESFVLEWOOAJCRMYGIIKKUQCTDQJAXTWLFEGCGOMDKESXZYNKRGMXOANVEOMBEZKBLUHULGBJXLUPTHWSBYTCZIPPXNRRFUQHDIZFDPGHTMQQAWCPSQFBBSKBZHZBXKWDGZNMXVMJSVWYTLFRWYYIBJFFUHRAEDUKWDVGANGO");

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
    msg.setTimeStamp(0.3955984980666375);
    msg.setSource(11428U);
    msg.setSourceEntity(28U);
    msg.setDestination(22911U);
    msg.setDestinationEntity(141U);
    msg.list.assign("NDYPGOPQCWVIWJSEOCHOWSZZEAZSWVFDNSNON");

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
    msg.setTimeStamp(0.9308117832912066);
    msg.setSource(37299U);
    msg.setSourceEntity(220U);
    msg.setDestination(44107U);
    msg.setDestinationEntity(93U);
    msg.list.assign("QJILJLONLCHOXIJAEGSDMTOTXHVXHRMJGSCNKAWWBRFVZYBXWQSCSQQMZAN");

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
    msg.setTimeStamp(0.571984532256873);
    msg.setSource(62423U);
    msg.setSourceEntity(41U);
    msg.setDestination(17102U);
    msg.setDestinationEntity(218U);
    msg.value = 6655;

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
    msg.setTimeStamp(0.9174142853058567);
    msg.setSource(26547U);
    msg.setSourceEntity(244U);
    msg.setDestination(32879U);
    msg.setDestinationEntity(132U);
    msg.value = -23879;

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
    msg.setTimeStamp(0.3499366939123665);
    msg.setSource(19049U);
    msg.setSourceEntity(245U);
    msg.setDestination(23873U);
    msg.setDestinationEntity(173U);
    msg.value = -6787;

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
    msg.setTimeStamp(0.3591324034965434);
    msg.setSource(58975U);
    msg.setSourceEntity(113U);
    msg.setDestination(31394U);
    msg.setDestinationEntity(122U);
    msg.value = 0.4513297734872497;

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
    msg.setTimeStamp(0.47358116674253325);
    msg.setSource(61515U);
    msg.setSourceEntity(62U);
    msg.setDestination(10288U);
    msg.setDestinationEntity(221U);
    msg.value = 0.6638831504371012;

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
    msg.setTimeStamp(0.8052949305623638);
    msg.setSource(41682U);
    msg.setSourceEntity(63U);
    msg.setDestination(22930U);
    msg.setDestinationEntity(8U);
    msg.value = 0.9280542783088693;

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
    msg.setTimeStamp(0.6010634986035645);
    msg.setSource(44741U);
    msg.setSourceEntity(90U);
    msg.setDestination(63184U);
    msg.setDestinationEntity(151U);
    msg.value = 0.0524548136284978;

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
    msg.setTimeStamp(0.004282901934442251);
    msg.setSource(28585U);
    msg.setSourceEntity(225U);
    msg.setDestination(33689U);
    msg.setDestinationEntity(243U);
    msg.value = 0.8937990810991489;

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
    msg.setTimeStamp(0.6186695117644874);
    msg.setSource(1635U);
    msg.setSourceEntity(167U);
    msg.setDestination(41053U);
    msg.setDestinationEntity(117U);
    msg.value = 0.2725967042302858;

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
    msg.setTimeStamp(0.19335711314656823);
    msg.setSource(31946U);
    msg.setSourceEntity(160U);
    msg.setDestination(27372U);
    msg.setDestinationEntity(210U);
    msg.validity = 64000U;
    msg.type = 27U;
    msg.utc_year = 64621U;
    msg.utc_month = 226U;
    msg.utc_day = 52U;
    msg.utc_time = 0.2634412112789405;
    msg.lat = 0.8962259955316076;
    msg.lon = 0.9546293080250489;
    msg.height = 0.49089896925567045;
    msg.satellites = 151U;
    msg.cog = 0.9209110928930656;
    msg.sog = 0.23288345283760115;
    msg.hdop = 0.9532495271700353;
    msg.vdop = 0.5501763208805032;
    msg.hacc = 0.9491913020512638;
    msg.vacc = 0.22305953679476442;

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
    msg.setTimeStamp(0.1972642559479606);
    msg.setSource(6685U);
    msg.setSourceEntity(182U);
    msg.setDestination(45300U);
    msg.setDestinationEntity(82U);
    msg.validity = 58163U;
    msg.type = 190U;
    msg.utc_year = 56060U;
    msg.utc_month = 94U;
    msg.utc_day = 251U;
    msg.utc_time = 0.8936578341751045;
    msg.lat = 0.959423067225157;
    msg.lon = 0.6628724329244821;
    msg.height = 0.7591845036701846;
    msg.satellites = 70U;
    msg.cog = 0.8871350988188885;
    msg.sog = 0.44911136085224335;
    msg.hdop = 0.3252247979445835;
    msg.vdop = 0.4597880230195237;
    msg.hacc = 0.3535643513695942;
    msg.vacc = 0.7789207003835935;

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
    msg.setTimeStamp(0.5768674907373919);
    msg.setSource(44491U);
    msg.setSourceEntity(213U);
    msg.setDestination(518U);
    msg.setDestinationEntity(136U);
    msg.validity = 58128U;
    msg.type = 174U;
    msg.utc_year = 54339U;
    msg.utc_month = 201U;
    msg.utc_day = 245U;
    msg.utc_time = 0.6290098299844763;
    msg.lat = 0.20148268254653712;
    msg.lon = 0.9378256528305033;
    msg.height = 0.2379756536063492;
    msg.satellites = 242U;
    msg.cog = 0.827678978950726;
    msg.sog = 0.28879894324692323;
    msg.hdop = 0.3502368966596583;
    msg.vdop = 0.42816057469356095;
    msg.hacc = 0.6893788815258253;
    msg.vacc = 0.45415779068472284;

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
    msg.setTimeStamp(0.9037024514927755);
    msg.setSource(63914U);
    msg.setSourceEntity(134U);
    msg.setDestination(61819U);
    msg.setDestinationEntity(31U);
    msg.time = 0.08935020525398307;
    msg.phi = 0.3043931292189561;
    msg.theta = 0.2578947417596944;
    msg.psi = 0.7740228556853862;
    msg.psi_magnetic = 0.49915988969331004;

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
    msg.setTimeStamp(0.2638529737934173);
    msg.setSource(54131U);
    msg.setSourceEntity(193U);
    msg.setDestination(2791U);
    msg.setDestinationEntity(137U);
    msg.time = 0.8380831373219851;
    msg.phi = 0.739835721245254;
    msg.theta = 0.06767407248419022;
    msg.psi = 0.6686601358843346;
    msg.psi_magnetic = 0.553791811035324;

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
    msg.setTimeStamp(0.48721599807572546);
    msg.setSource(50341U);
    msg.setSourceEntity(201U);
    msg.setDestination(21162U);
    msg.setDestinationEntity(144U);
    msg.time = 0.1622149755302671;
    msg.phi = 0.7947289564461061;
    msg.theta = 0.42192340513181603;
    msg.psi = 0.19577959472893847;
    msg.psi_magnetic = 0.03991957858258788;

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
    msg.setTimeStamp(0.6916397805520533);
    msg.setSource(15292U);
    msg.setSourceEntity(157U);
    msg.setDestination(26776U);
    msg.setDestinationEntity(90U);
    msg.time = 0.9714091717890972;
    msg.x = 0.8331657780685239;
    msg.y = 0.5507710091420345;
    msg.z = 0.383535328456182;
    msg.timestep = 0.667025399215419;

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
    msg.setTimeStamp(0.6514674141192182);
    msg.setSource(5117U);
    msg.setSourceEntity(92U);
    msg.setDestination(5690U);
    msg.setDestinationEntity(89U);
    msg.time = 0.5443585823494598;
    msg.x = 0.3648836927778272;
    msg.y = 0.3461055616902682;
    msg.z = 0.35884681286061126;
    msg.timestep = 0.3088381937761706;

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
    msg.setTimeStamp(0.6901021228165356);
    msg.setSource(6225U);
    msg.setSourceEntity(154U);
    msg.setDestination(38871U);
    msg.setDestinationEntity(163U);
    msg.time = 0.338141710953223;
    msg.x = 0.8783810626910387;
    msg.y = 0.1384192125841257;
    msg.z = 0.7097746705639205;
    msg.timestep = 0.930548322468653;

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
    msg.setTimeStamp(0.34252868701030725);
    msg.setSource(53433U);
    msg.setSourceEntity(186U);
    msg.setDestination(19898U);
    msg.setDestinationEntity(193U);
    msg.time = 0.5492236109298232;
    msg.x = 0.3380238718229335;
    msg.y = 0.30211281384474786;
    msg.z = 0.34601086396583214;

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
    msg.setTimeStamp(0.9884879384101327);
    msg.setSource(16937U);
    msg.setSourceEntity(35U);
    msg.setDestination(9871U);
    msg.setDestinationEntity(141U);
    msg.time = 0.1838344863084349;
    msg.x = 0.5967059131734884;
    msg.y = 0.7429968472492207;
    msg.z = 0.043729698156894425;

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
    msg.setTimeStamp(0.648907642269765);
    msg.setSource(26016U);
    msg.setSourceEntity(150U);
    msg.setDestination(41583U);
    msg.setDestinationEntity(3U);
    msg.time = 0.8233414398042669;
    msg.x = 0.6643728148842049;
    msg.y = 0.6816822593276468;
    msg.z = 0.3330314413698917;

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
    msg.setTimeStamp(0.05476399903451079);
    msg.setSource(55048U);
    msg.setSourceEntity(34U);
    msg.setDestination(65328U);
    msg.setDestinationEntity(234U);
    msg.time = 0.5568849206247076;
    msg.x = 0.2344139453975056;
    msg.y = 0.0009545176385544751;
    msg.z = 0.2220947683685136;

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
    msg.setTimeStamp(0.2879202718643533);
    msg.setSource(55917U);
    msg.setSourceEntity(152U);
    msg.setDestination(45137U);
    msg.setDestinationEntity(162U);
    msg.time = 0.9080119492810845;
    msg.x = 0.6303584333626566;
    msg.y = 0.0762775251668859;
    msg.z = 0.5708199710393558;

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
    msg.setTimeStamp(0.03367781254828972);
    msg.setSource(36518U);
    msg.setSourceEntity(114U);
    msg.setDestination(44412U);
    msg.setDestinationEntity(211U);
    msg.time = 0.09359376174442235;
    msg.x = 0.9968385009203867;
    msg.y = 0.9937596094829391;
    msg.z = 0.8622462213605137;

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
    msg.setTimeStamp(0.35390761143503024);
    msg.setSource(21865U);
    msg.setSourceEntity(102U);
    msg.setDestination(38216U);
    msg.setDestinationEntity(33U);
    msg.time = 0.4434982528200987;
    msg.x = 0.7027581598938184;
    msg.y = 0.20746742221931513;
    msg.z = 0.24407505026942355;

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
    msg.setTimeStamp(0.4355425689544501);
    msg.setSource(62864U);
    msg.setSourceEntity(152U);
    msg.setDestination(48374U);
    msg.setDestinationEntity(193U);
    msg.time = 0.26366611989565203;
    msg.x = 0.7717881684038407;
    msg.y = 0.6660396906836246;
    msg.z = 0.38058682030155877;

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
    msg.setTimeStamp(0.643677432257473);
    msg.setSource(22879U);
    msg.setSourceEntity(45U);
    msg.setDestination(58609U);
    msg.setDestinationEntity(254U);
    msg.time = 0.8592146607054207;
    msg.x = 0.13632179266118627;
    msg.y = 0.08850809093798473;
    msg.z = 0.3780749492966462;

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
    msg.setTimeStamp(0.358367092951827);
    msg.setSource(33361U);
    msg.setSourceEntity(10U);
    msg.setDestination(11423U);
    msg.setDestinationEntity(21U);
    msg.validity = 39U;
    msg.x = 0.9413234346017425;
    msg.y = 0.06257419337579917;
    msg.z = 0.5710026290831108;

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
    msg.setTimeStamp(0.062182460958436714);
    msg.setSource(21573U);
    msg.setSourceEntity(154U);
    msg.setDestination(55483U);
    msg.setDestinationEntity(175U);
    msg.validity = 171U;
    msg.x = 0.7248597833995681;
    msg.y = 0.43550034759903355;
    msg.z = 0.9232653035463287;

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
    msg.setTimeStamp(0.5218870769966877);
    msg.setSource(3332U);
    msg.setSourceEntity(225U);
    msg.setDestination(30728U);
    msg.setDestinationEntity(21U);
    msg.validity = 17U;
    msg.x = 0.7583484269926788;
    msg.y = 0.41595173111174744;
    msg.z = 0.5816873518934369;

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
    msg.setTimeStamp(0.3715730473685681);
    msg.setSource(7013U);
    msg.setSourceEntity(91U);
    msg.setDestination(22401U);
    msg.setDestinationEntity(114U);
    msg.validity = 134U;
    msg.x = 0.38766381198707256;
    msg.y = 0.35113796322534363;
    msg.z = 0.8817071029331796;

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
    msg.setTimeStamp(0.19579810887362814);
    msg.setSource(152U);
    msg.setSourceEntity(113U);
    msg.setDestination(45894U);
    msg.setDestinationEntity(243U);
    msg.validity = 3U;
    msg.x = 0.2947898479707983;
    msg.y = 0.9994338131180726;
    msg.z = 0.7914039052965517;

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
    msg.setTimeStamp(0.15469417813402409);
    msg.setSource(32948U);
    msg.setSourceEntity(36U);
    msg.setDestination(40114U);
    msg.setDestinationEntity(130U);
    msg.validity = 46U;
    msg.x = 0.38344596338806725;
    msg.y = 0.6862730269202013;
    msg.z = 0.1446261326330579;

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
    msg.setTimeStamp(0.08241483101040492);
    msg.setSource(6380U);
    msg.setSourceEntity(88U);
    msg.setDestination(25037U);
    msg.setDestinationEntity(14U);
    msg.time = 0.5877493879660179;
    msg.x = 0.1612604776972023;
    msg.y = 0.27762584705440874;
    msg.z = 0.6192600776134755;

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
    msg.setTimeStamp(0.17263542551480082);
    msg.setSource(16123U);
    msg.setSourceEntity(28U);
    msg.setDestination(57785U);
    msg.setDestinationEntity(73U);
    msg.time = 0.7364462838902509;
    msg.x = 0.44995141120844817;
    msg.y = 0.13048381699375722;
    msg.z = 0.6909806338298357;

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
    msg.setTimeStamp(0.6895259034404863);
    msg.setSource(48898U);
    msg.setSourceEntity(136U);
    msg.setDestination(18694U);
    msg.setDestinationEntity(147U);
    msg.time = 0.113502135988227;
    msg.x = 0.9406943553672134;
    msg.y = 0.47114158266111295;
    msg.z = 0.19780452077665822;

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
    msg.setTimeStamp(0.011265680587597693);
    msg.setSource(13282U);
    msg.setSourceEntity(127U);
    msg.setDestination(45741U);
    msg.setDestinationEntity(166U);
    msg.validity = 44U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.17095304875658401;
    tmp_msg_0.y = 0.738132903666096;
    tmp_msg_0.z = 0.8801594219140242;
    tmp_msg_0.phi = 0.28618310805988334;
    tmp_msg_0.theta = 0.49568225919186526;
    tmp_msg_0.psi = 0.13356258992025727;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.9711717475457543;
    tmp_msg_1.beam_height = 0.6867270425499219;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.8454154892673087;

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
    msg.setTimeStamp(0.28261429124694104);
    msg.setSource(42554U);
    msg.setSourceEntity(110U);
    msg.setDestination(41987U);
    msg.setDestinationEntity(251U);
    msg.validity = 45U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.48954379424969763;
    tmp_msg_0.beam_height = 0.0363994532098294;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.1658229344129064;

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
    msg.setTimeStamp(0.15052894564267005);
    msg.setSource(24090U);
    msg.setSourceEntity(65U);
    msg.setDestination(8748U);
    msg.setDestinationEntity(169U);
    msg.validity = 254U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.02409651552916836;
    tmp_msg_0.y = 0.806993697725773;
    tmp_msg_0.z = 0.7054885222446641;
    tmp_msg_0.phi = 0.742548128828913;
    tmp_msg_0.theta = 0.6821487331487676;
    tmp_msg_0.psi = 0.26970159586509046;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.12296987194652298;
    tmp_msg_1.beam_height = 0.982510407461491;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.8545992709499347;

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
    msg.setTimeStamp(0.4344806090887017);
    msg.setSource(8888U);
    msg.setSourceEntity(80U);
    msg.setDestination(7043U);
    msg.setDestinationEntity(189U);
    msg.value = 0.7561409785979603;

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
    msg.setTimeStamp(0.11563542685197181);
    msg.setSource(51844U);
    msg.setSourceEntity(74U);
    msg.setDestination(48921U);
    msg.setDestinationEntity(217U);
    msg.value = 0.7048976863864779;

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
    msg.setTimeStamp(0.15896556890253255);
    msg.setSource(36480U);
    msg.setSourceEntity(139U);
    msg.setDestination(40498U);
    msg.setDestinationEntity(193U);
    msg.value = 0.6736644460012255;

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
    msg.setTimeStamp(0.805630520757632);
    msg.setSource(51946U);
    msg.setSourceEntity(253U);
    msg.setDestination(56959U);
    msg.setDestinationEntity(91U);
    msg.value = 0.3989989586899272;

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
    msg.setTimeStamp(0.49201007347969095);
    msg.setSource(3017U);
    msg.setSourceEntity(171U);
    msg.setDestination(38491U);
    msg.setDestinationEntity(168U);
    msg.value = 0.4926644596356716;

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
    msg.setTimeStamp(0.3614025440056152);
    msg.setSource(8529U);
    msg.setSourceEntity(7U);
    msg.setDestination(28275U);
    msg.setDestinationEntity(49U);
    msg.value = 0.4619678991927618;

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
    msg.setTimeStamp(0.3352303634769427);
    msg.setSource(17586U);
    msg.setSourceEntity(135U);
    msg.setDestination(36036U);
    msg.setDestinationEntity(97U);
    msg.value = 0.4127325830421319;

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
    msg.setTimeStamp(0.8641566335394267);
    msg.setSource(21161U);
    msg.setSourceEntity(158U);
    msg.setDestination(34017U);
    msg.setDestinationEntity(232U);
    msg.value = 0.8497044195316946;

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
    msg.setTimeStamp(0.002313839047147437);
    msg.setSource(24188U);
    msg.setSourceEntity(241U);
    msg.setDestination(21179U);
    msg.setDestinationEntity(28U);
    msg.value = 0.1480643985634198;

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
    msg.setTimeStamp(0.46303421487686547);
    msg.setSource(51316U);
    msg.setSourceEntity(107U);
    msg.setDestination(53238U);
    msg.setDestinationEntity(235U);
    msg.value = 0.13471176158067322;

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
    msg.setTimeStamp(0.2994396146654855);
    msg.setSource(8095U);
    msg.setSourceEntity(178U);
    msg.setDestination(50037U);
    msg.setDestinationEntity(27U);
    msg.value = 0.12377371255385816;

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
    msg.setTimeStamp(0.7945811424720328);
    msg.setSource(19484U);
    msg.setSourceEntity(139U);
    msg.setDestination(23211U);
    msg.setDestinationEntity(25U);
    msg.value = 0.580211887609024;

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
    msg.setTimeStamp(0.675439828953367);
    msg.setSource(36217U);
    msg.setSourceEntity(236U);
    msg.setDestination(58683U);
    msg.setDestinationEntity(163U);
    msg.value = 0.3618694812217086;

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
    msg.setTimeStamp(0.2706134640437893);
    msg.setSource(34191U);
    msg.setSourceEntity(130U);
    msg.setDestination(31827U);
    msg.setDestinationEntity(36U);
    msg.value = 0.3776758690575238;

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
    msg.setTimeStamp(0.8488249075591606);
    msg.setSource(4994U);
    msg.setSourceEntity(153U);
    msg.setDestination(26411U);
    msg.setDestinationEntity(12U);
    msg.value = 0.13099551251566321;

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
    msg.setTimeStamp(0.057014774992826256);
    msg.setSource(38683U);
    msg.setSourceEntity(35U);
    msg.setDestination(11262U);
    msg.setDestinationEntity(237U);
    msg.value = 0.7636481263955368;

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
    msg.setTimeStamp(0.35617793431566525);
    msg.setSource(15153U);
    msg.setSourceEntity(16U);
    msg.setDestination(9301U);
    msg.setDestinationEntity(233U);
    msg.value = 0.5413869019764593;

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
    msg.setTimeStamp(0.9373945988284991);
    msg.setSource(15599U);
    msg.setSourceEntity(63U);
    msg.setDestination(33116U);
    msg.setDestinationEntity(189U);
    msg.value = 0.6320833209452495;

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
    msg.setTimeStamp(0.8813201715324911);
    msg.setSource(15440U);
    msg.setSourceEntity(3U);
    msg.setDestination(20976U);
    msg.setDestinationEntity(206U);
    msg.value = 0.3734415653180424;

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
    msg.setTimeStamp(0.6099923028483568);
    msg.setSource(1829U);
    msg.setSourceEntity(44U);
    msg.setDestination(65295U);
    msg.setDestinationEntity(52U);
    msg.value = 0.6527030335660503;

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
    msg.setTimeStamp(0.891016960194521);
    msg.setSource(58823U);
    msg.setSourceEntity(115U);
    msg.setDestination(4266U);
    msg.setDestinationEntity(109U);
    msg.value = 0.1614538478072185;

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
    msg.setTimeStamp(0.3074075186571653);
    msg.setSource(57199U);
    msg.setSourceEntity(2U);
    msg.setDestination(9327U);
    msg.setDestinationEntity(232U);
    msg.value = 0.47740601202988786;

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
    msg.setTimeStamp(0.09039593259922785);
    msg.setSource(59890U);
    msg.setSourceEntity(145U);
    msg.setDestination(36682U);
    msg.setDestinationEntity(178U);
    msg.value = 0.8446638392133413;

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
    msg.setTimeStamp(0.24908060029325774);
    msg.setSource(58616U);
    msg.setSourceEntity(184U);
    msg.setDestination(28348U);
    msg.setDestinationEntity(29U);
    msg.value = 0.1674272633555527;

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
    msg.setTimeStamp(0.47467564359070535);
    msg.setSource(41278U);
    msg.setSourceEntity(114U);
    msg.setDestination(1901U);
    msg.setDestinationEntity(70U);
    msg.direction = 0.49919361449067545;
    msg.speed = 0.45936094500113844;
    msg.turbulence = 0.5419880425342024;

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
    msg.setTimeStamp(0.0849836072682022);
    msg.setSource(10878U);
    msg.setSourceEntity(152U);
    msg.setDestination(35290U);
    msg.setDestinationEntity(211U);
    msg.direction = 0.6025995524232147;
    msg.speed = 0.12711901703223205;
    msg.turbulence = 0.43989501416002696;

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
    msg.setTimeStamp(0.10453822399737223);
    msg.setSource(1315U);
    msg.setSourceEntity(191U);
    msg.setDestination(10053U);
    msg.setDestinationEntity(125U);
    msg.direction = 0.5216841196696743;
    msg.speed = 0.9356089251458635;
    msg.turbulence = 0.7685797414685588;

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
    msg.setTimeStamp(0.17599268410871494);
    msg.setSource(4691U);
    msg.setSourceEntity(33U);
    msg.setDestination(36924U);
    msg.setDestinationEntity(208U);
    msg.value = 0.8022330512835906;

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
    msg.setTimeStamp(0.8743785332775734);
    msg.setSource(31588U);
    msg.setSourceEntity(193U);
    msg.setDestination(49168U);
    msg.setDestinationEntity(184U);
    msg.value = 0.07221599462072448;

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
    msg.setTimeStamp(0.848365093505436);
    msg.setSource(48261U);
    msg.setSourceEntity(76U);
    msg.setDestination(29489U);
    msg.setDestinationEntity(136U);
    msg.value = 0.31831778939823285;

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
    msg.setTimeStamp(0.5363909503714039);
    msg.setSource(34884U);
    msg.setSourceEntity(230U);
    msg.setDestination(38215U);
    msg.setDestinationEntity(149U);
    msg.value.assign("MSTNNJDQKAIDKWSPDYOCYDTMLQRSZCRLXV");

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
    msg.setTimeStamp(0.46464306015803614);
    msg.setSource(40966U);
    msg.setSourceEntity(67U);
    msg.setDestination(21677U);
    msg.setDestinationEntity(24U);
    msg.value.assign("WHQEOQDRHWQVFZFJAOVFTZSEFWSUYAHQGYEGTMINLJUBPUJIEHDYLQAPKJRCXATHXHEYTLKPKGZQCVLABJVFXUYGDPJWBCIJNVCRYXNNBEURZSSMNDNXSQRZUWHXOYWUCYGAVSPPFRITZYVSLLCANOZZCHIOILKDZLRPFKVCRXBYFRKSIOSXRMXPNGGAEMUOAGODBUOQELZWUKBFVNXHBDEWDTPTJWTVEMIWIBCJDMPFTJQONHDMBM");

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
    msg.setTimeStamp(0.9737324290040981);
    msg.setSource(8903U);
    msg.setSourceEntity(192U);
    msg.setDestination(60661U);
    msg.setDestinationEntity(236U);
    msg.value.assign("WVMXJSYFOIZQAZZCAUMIGOWYLYDHSGXWIEVZMJLYSABTXNKTYBGHKUYCGENKMVXPEHQVVZNNLWCLRYLNHUGMFICAJPBFEIYNJTHFSQMXNQERXFZNREJSGCUORJMQYFDOURUKTHKFDPCLGDTRRICDFJSASXSCZKNCXVQVVLANKQEPMGHLZXCPBVIWHDUGJ");

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
    msg.setTimeStamp(0.4239816128034791);
    msg.setSource(57216U);
    msg.setSourceEntity(104U);
    msg.setDestination(2586U);
    msg.setDestinationEntity(247U);
    const char tmp_msg_0[] = {28, -57, 72, -47, 3, 68, -101, 12, 122, -104, -51, -66, -7, -108, -104, -21, -67, -35, -113, 97, 39, 85, 89, 35, 34, -47, 32, 64, 99, 53, -128, -34, -104, 29, -16, -43, 48, -111, -90, 25, -9, 29, 47, 18, -94, -49, -26, 61, 7, 35, 111, -70, 103, 112, -113, 39, -92, -23, 120, 109, 44, -3, -91, -23, -35, 50, 79, -100, 91, -108, -91, -39, -28, -122, 103, -95, 54, -65, 66, -71, -118, -60, -86, -65, -103, 109, 51, -79, -47, 4, -43, 61, 4, -110, 124, -96, 92, -78, 22, 98, -89, 119, -118, 2, 60, -120, -22, 33, 106, -54, -42, -37, 10, -125, 120, 7, 69, 107, 28, -53, -121, 92, -118, 44, -90, -53, -48, -36, -127, 4, -56, 99, -108, 109, 82, 75, 84, 87, 0, 76};
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
    msg.setTimeStamp(0.49842423457559704);
    msg.setSource(4411U);
    msg.setSourceEntity(154U);
    msg.setDestination(24914U);
    msg.setDestinationEntity(69U);
    const char tmp_msg_0[] = {102, 38, -11, -63, 92, -9, 106, 42, -57, -15, 123, 98, 105, -62, 51, -55, -93, -110, -2, 97, -17, 12, -98, 98, -36, -114, 65, 45, -62, -23, -75, -80, -39, -103, -18, -36, 6};
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
    msg.setTimeStamp(0.2397450865696884);
    msg.setSource(52775U);
    msg.setSourceEntity(2U);
    msg.setDestination(45648U);
    msg.setDestinationEntity(86U);
    const char tmp_msg_0[] = {-80, -119, 70, 64, -32, 80, -76, 112, -114, 79, -70, -23, 11, 91, -1, 24, -97, -5, -98, 73, -28, 122, -121, -12, 113, 52, 101, -113, 31, -85, -33, -65, -13, 93, -84, 24, 26, 58, 100, 57, -80, -6, 46, -24, 111, 62, -35, 121, -8, 59, 81, 77, 104, -33, -111, 108, 117, -125, -115, 117, 76, 24, 96, -15, 88, 39, -21, 42, -5, -84, -18, -94, 87, -78, 26, -112, -125, -94, -30, 103, 58, 122};
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
    msg.setTimeStamp(0.23969585722981746);
    msg.setSource(62841U);
    msg.setSourceEntity(216U);
    msg.setDestination(60785U);
    msg.setDestinationEntity(13U);
    msg.type = 220U;
    msg.frequency = 2536513368U;
    msg.min_range = 25089U;
    msg.max_range = 44724U;
    msg.bits_per_point = 234U;
    msg.scale_factor = 0.0948241758234124;
    const char tmp_msg_0[] = {-32, 83, 94, -119, 122, 82, -28, -70, 1, 95, 38, -42, -76, 93, 54, -111, 73, 114, 112, 10, -27, -97, 13, 43, -115, -125, -57, -45, -67, -117, 56, 72, 29, 14, 57, 74, -4, -108, 111, -76, 38, 69, 9, -103, 116, 89, 105, 105, -110, -5, 86, 67, 69, 110, -104, 1, -49, 18, 84, 22, 73, -117, 27, -127, 119, -8, 29, 15, 101, -77, 75, 113, 89, -64, 64, -57, 118, -78, 89, -10, -31, 22, 86, -14, -33, -85, 7, -85, 63, -80, -99, 77, -128, -65, -61, 29, 7, 48, 116, 19, 19, 82, -42};
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
    msg.setTimeStamp(0.22304808077737248);
    msg.setSource(28156U);
    msg.setSourceEntity(2U);
    msg.setDestination(11424U);
    msg.setDestinationEntity(32U);
    msg.type = 7U;
    msg.frequency = 734318322U;
    msg.min_range = 56972U;
    msg.max_range = 65144U;
    msg.bits_per_point = 150U;
    msg.scale_factor = 0.20463314820100353;
    const char tmp_msg_0[] = {-4, 31, 118, 33, -86, 12, -82, 90, -84, -117, 35, -57, 2, 77, 53, 77, 86, 123, -10, -83, -44, -35, -7, 95, -113, -70, 105, 108, -65, 1, 118, -126, 42, -21, -19, -78, 72, 111, -93, -3, -105, -116, 89, -52, -72, -57, -76, -11, 74, -71, -56, 125, 28, -47, 55, -104, -79, 126, -23, -127, 125, 114, -37, 22, 6, 101, 98, -122, -125, 52, 65, 68, -108, -104, 95, 8, 65, -6, 83, -114, -84, 51, -76, -101, 85, -104, -5, -7, -28, -118, 94, 21, 118, 96, 111, -66, -55, 103, 114, -108, 115, -84, -12, 108, 104, -55, 42, 2, 10, 62, -99, -87, 8, 68, -115, 89, -83, -83, 34, 113, 49, 116, 101, 63, 34, 74, -37, 91, 21, 32, -4, -92, -14, 40, 6, -98, 1, -12, -117, 17, -53, 41, 48, 91, 53, -40, 81, -25, -112, 84, -52, -43, -36, 104, 75, -128, 78, 117, 102, 2, 78, 14, -49, 44, -109, -92, 28, -111, 11, 125, 87, -65, 23, 7, -109, 9, 107, -63, -11, -54, -1, -75, 65, -118, -25, -70, 125, -89, 14, 99, 71, 95, -54, -11, 84, -29, -43, -66, -53, 41, -111, -66, 11, -72, -123, -87, 64, 19, 101, 99, 4, 52};
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
    msg.setTimeStamp(0.17524172375625002);
    msg.setSource(47625U);
    msg.setSourceEntity(131U);
    msg.setDestination(49917U);
    msg.setDestinationEntity(101U);
    msg.type = 189U;
    msg.frequency = 1190878596U;
    msg.min_range = 12068U;
    msg.max_range = 3046U;
    msg.bits_per_point = 243U;
    msg.scale_factor = 0.7481331897221922;
    const char tmp_msg_0[] = {-80, 98, -14, 104, -38, 111, 88, 2, -102, -95, -11, 20, 85, -105, 22, 37, -21, 49, -36, 82, -78, -44, 12, -32, 118, 61, 1, 6, -79, 65, -57, 88, 19, -87, -94, 107, -43, 45, -103, 114, 104, -40, 62, 106, 38, 70, -38, 22, -5, -17, -54, -90, -52, 37, 84, 105, -108, 125, -86, 81, -97, 21, -50, -62, 10, 17, -39, 90, 99, -109, -7, -68, 2, 103, -117, -122, 17, 68, -55, 31, -128, 126, -120, -97, 11, 94, 3, 120, -90, -127, 23, -28};
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
    msg.setTimeStamp(0.18516284351537182);
    msg.setSource(11569U);
    msg.setSourceEntity(246U);
    msg.setDestination(34667U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.6429072005108968);
    msg.setSource(37172U);
    msg.setSourceEntity(237U);
    msg.setDestination(27565U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.15826171937782585);
    msg.setSource(21008U);
    msg.setSourceEntity(252U);
    msg.setDestination(36040U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.9056084193290486);
    msg.setSource(42292U);
    msg.setSourceEntity(164U);
    msg.setDestination(19392U);
    msg.setDestinationEntity(93U);
    msg.op = 0U;

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
    msg.setTimeStamp(0.4528835239187703);
    msg.setSource(61108U);
    msg.setSourceEntity(148U);
    msg.setDestination(38361U);
    msg.setDestinationEntity(72U);
    msg.op = 204U;

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
    msg.setTimeStamp(0.7937006773787666);
    msg.setSource(20390U);
    msg.setSourceEntity(206U);
    msg.setDestination(14707U);
    msg.setDestinationEntity(248U);
    msg.op = 79U;

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
    msg.setTimeStamp(0.30979301994838515);
    msg.setSource(16473U);
    msg.setSourceEntity(48U);
    msg.setDestination(64038U);
    msg.setDestinationEntity(215U);
    msg.value = 0.8306960639211922;
    msg.confidence = 0.5582104508878198;
    msg.opmodes.assign("KHMRDLWCHKJAIGHAKNXVGDXOEUCYCPHCCQTRZWSSNXGFSLIHBBTVIODJGL");

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
    msg.setTimeStamp(0.9976143544636037);
    msg.setSource(18955U);
    msg.setSourceEntity(77U);
    msg.setDestination(62798U);
    msg.setDestinationEntity(177U);
    msg.value = 0.18636319998201367;
    msg.confidence = 0.6525462694763287;
    msg.opmodes.assign("LJCADKBJJFDWGMAGGAUDLUNSPILMOVLQWKLIGCHMHATDFWEQGJNXSFNITMMUEOUQMCTJXZYRWDVODOZLENYRYPPFGCXVTBUXHKMVNQULNTGTPASJICNCFQRPBVRZBEAILENRVZRZFEKRHQBRHAPMRHJDBSCURCVWZLWTEDKOLKIHZBQBQEDBAJEKSISTYC");

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
    msg.setTimeStamp(0.14031181103060575);
    msg.setSource(45498U);
    msg.setSourceEntity(220U);
    msg.setDestination(27539U);
    msg.setDestinationEntity(152U);
    msg.value = 0.8913641452577937;
    msg.confidence = 0.4125956475360838;
    msg.opmodes.assign("SWDGNOKSMBINEZWOJKINNUVUFCLSWSOAGKRIRCFLWQAXHPYFFWHLJIJUIXORGLYGBJFGDKPBMBVASCDLJNVBTPYTPFQLZZSFQFCKRAOETKDXYYVYCXZTGOOXTPHHQYSBAMQPVOIJDDJUHVQJDTPKZQCMUTDXILXHORWRTJEYKSDSVWAUTWMGAEPKCQZMRRHPFMCNAMNABZZDWLAMUQBKHEEVPEFBN");

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
    msg.setTimeStamp(0.900058866792192);
    msg.setSource(46336U);
    msg.setSourceEntity(197U);
    msg.setDestination(59883U);
    msg.setDestinationEntity(6U);
    msg.itow = 502430903U;
    msg.lat = 0.6713929427058788;
    msg.lon = 0.14962058629582753;
    msg.height_ell = 0.9016969859922699;
    msg.height_sea = 0.7800521752030861;
    msg.hacc = 0.46368444705580525;
    msg.vacc = 0.7198417809570442;
    msg.vel_n = 0.46742591708252823;
    msg.vel_e = 0.48442351594617594;
    msg.vel_d = 0.4262476161439839;
    msg.speed = 0.29081789243694334;
    msg.gspeed = 0.27779049166383996;
    msg.heading = 0.33596387303856845;
    msg.sacc = 0.7662554019840292;
    msg.cacc = 0.8619962170061497;

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
    msg.setTimeStamp(0.3393143613274413);
    msg.setSource(47919U);
    msg.setSourceEntity(134U);
    msg.setDestination(42145U);
    msg.setDestinationEntity(208U);
    msg.itow = 1941591346U;
    msg.lat = 0.840127570248521;
    msg.lon = 0.5923991886887313;
    msg.height_ell = 0.9947714499987186;
    msg.height_sea = 0.3137865141934678;
    msg.hacc = 0.10976969347820142;
    msg.vacc = 0.2442111020699137;
    msg.vel_n = 0.6643283685563306;
    msg.vel_e = 0.5850212593426868;
    msg.vel_d = 0.012176055386612816;
    msg.speed = 0.5785074842453519;
    msg.gspeed = 0.15926871199086778;
    msg.heading = 0.537230154587613;
    msg.sacc = 0.6018743764813641;
    msg.cacc = 0.7802014999831045;

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
    msg.setTimeStamp(0.10494086639994626);
    msg.setSource(21292U);
    msg.setSourceEntity(14U);
    msg.setDestination(63990U);
    msg.setDestinationEntity(20U);
    msg.itow = 3471679402U;
    msg.lat = 0.9972003569017974;
    msg.lon = 0.7421780969740553;
    msg.height_ell = 0.9609715151768962;
    msg.height_sea = 0.2326278941517984;
    msg.hacc = 0.9822288505452731;
    msg.vacc = 0.7125297570583848;
    msg.vel_n = 0.8498333566486063;
    msg.vel_e = 0.9505973635641934;
    msg.vel_d = 0.7147295252112281;
    msg.speed = 0.6521927922671671;
    msg.gspeed = 0.9162339366466836;
    msg.heading = 0.49828776040162415;
    msg.sacc = 0.730008963048307;
    msg.cacc = 0.7495062023111883;

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
    msg.setTimeStamp(0.7746225600680542);
    msg.setSource(32638U);
    msg.setSourceEntity(235U);
    msg.setDestination(21682U);
    msg.setDestinationEntity(14U);
    msg.id = 214U;
    msg.value = 0.37957347151653065;

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
    msg.setTimeStamp(0.47753405867607945);
    msg.setSource(47113U);
    msg.setSourceEntity(39U);
    msg.setDestination(16890U);
    msg.setDestinationEntity(31U);
    msg.id = 89U;
    msg.value = 0.7532726172277048;

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
    msg.setTimeStamp(0.5872059808171967);
    msg.setSource(5365U);
    msg.setSourceEntity(137U);
    msg.setDestination(53899U);
    msg.setDestinationEntity(73U);
    msg.id = 218U;
    msg.value = 0.6802262264899943;

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
    msg.setTimeStamp(0.2016981150520134);
    msg.setSource(51634U);
    msg.setSourceEntity(137U);
    msg.setDestination(57478U);
    msg.setDestinationEntity(205U);
    msg.x = 0.7388889222776825;
    msg.y = 0.07809131454944707;
    msg.z = 0.009400668405359802;
    msg.phi = 0.6824273053507444;
    msg.theta = 0.9871339096128297;
    msg.psi = 0.29406543228502224;

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
    msg.setTimeStamp(0.9404198284294967);
    msg.setSource(38103U);
    msg.setSourceEntity(77U);
    msg.setDestination(63306U);
    msg.setDestinationEntity(5U);
    msg.x = 0.10176865933712775;
    msg.y = 0.0034756255080092835;
    msg.z = 0.019647623681849025;
    msg.phi = 0.5077726546469573;
    msg.theta = 0.3468517859703132;
    msg.psi = 0.4564423733155827;

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
    msg.setTimeStamp(0.5202789862496918);
    msg.setSource(27757U);
    msg.setSourceEntity(47U);
    msg.setDestination(23777U);
    msg.setDestinationEntity(70U);
    msg.x = 0.003713049272777602;
    msg.y = 0.27103085745796063;
    msg.z = 0.0029758716810011077;
    msg.phi = 0.9830653034128278;
    msg.theta = 0.09114301206055408;
    msg.psi = 0.1601518964480505;

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
    msg.setTimeStamp(0.7578017174254351);
    msg.setSource(41063U);
    msg.setSourceEntity(176U);
    msg.setDestination(59642U);
    msg.setDestinationEntity(28U);
    msg.beam_width = 0.4377349034194977;
    msg.beam_height = 0.34595435250173545;

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
    msg.setTimeStamp(0.6890882812468951);
    msg.setSource(11729U);
    msg.setSourceEntity(156U);
    msg.setDestination(60197U);
    msg.setDestinationEntity(115U);
    msg.beam_width = 0.9656583912299372;
    msg.beam_height = 0.7792819022343893;

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
    msg.setTimeStamp(0.3232928207549599);
    msg.setSource(58480U);
    msg.setSourceEntity(150U);
    msg.setDestination(56647U);
    msg.setDestinationEntity(60U);
    msg.beam_width = 0.4215247394543822;
    msg.beam_height = 0.11978493327447415;

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
    msg.setTimeStamp(0.25126183986183226);
    msg.setSource(50926U);
    msg.setSourceEntity(164U);
    msg.setDestination(45863U);
    msg.setDestinationEntity(5U);
    msg.sane = 250U;

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
    msg.setTimeStamp(0.5772178478040533);
    msg.setSource(5900U);
    msg.setSourceEntity(240U);
    msg.setDestination(6192U);
    msg.setDestinationEntity(45U);
    msg.sane = 12U;

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
    msg.setTimeStamp(0.040758149260787246);
    msg.setSource(7274U);
    msg.setSourceEntity(7U);
    msg.setDestination(63425U);
    msg.setDestinationEntity(17U);
    msg.sane = 65U;

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
    msg.setTimeStamp(0.5601951164335287);
    msg.setSource(59869U);
    msg.setSourceEntity(161U);
    msg.setDestination(1856U);
    msg.setDestinationEntity(59U);
    msg.value = 0.05707697825070801;

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
    msg.setTimeStamp(0.04086689973105995);
    msg.setSource(13327U);
    msg.setSourceEntity(159U);
    msg.setDestination(39130U);
    msg.setDestinationEntity(252U);
    msg.value = 0.570358248544521;

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
    msg.setTimeStamp(0.40729775568765514);
    msg.setSource(64678U);
    msg.setSourceEntity(40U);
    msg.setDestination(33773U);
    msg.setDestinationEntity(242U);
    msg.value = 0.6991999762531224;

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
    msg.setTimeStamp(0.6908457611681359);
    msg.setSource(60856U);
    msg.setSourceEntity(208U);
    msg.setDestination(1400U);
    msg.setDestinationEntity(191U);
    msg.value = 0.6796118920296522;

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
    msg.setTimeStamp(0.6377200704487672);
    msg.setSource(33522U);
    msg.setSourceEntity(123U);
    msg.setDestination(3581U);
    msg.setDestinationEntity(240U);
    msg.value = 0.22674114707174475;

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
    msg.setTimeStamp(0.6236322201723457);
    msg.setSource(49303U);
    msg.setSourceEntity(225U);
    msg.setDestination(11212U);
    msg.setDestinationEntity(219U);
    msg.value = 0.49137936449426955;

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
    msg.setTimeStamp(0.004178603734431241);
    msg.setSource(9788U);
    msg.setSourceEntity(234U);
    msg.setDestination(58343U);
    msg.setDestinationEntity(231U);
    msg.value = 0.9949340235890439;

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
    msg.setTimeStamp(0.02384428581705811);
    msg.setSource(37980U);
    msg.setSourceEntity(152U);
    msg.setDestination(61093U);
    msg.setDestinationEntity(169U);
    msg.value = 0.1647060035710477;

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
    msg.setTimeStamp(0.42998999915102876);
    msg.setSource(4762U);
    msg.setSourceEntity(12U);
    msg.setDestination(23910U);
    msg.setDestinationEntity(222U);
    msg.value = 0.39715963048431113;

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
    msg.setTimeStamp(0.8883109474080023);
    msg.setSource(3514U);
    msg.setSourceEntity(95U);
    msg.setDestination(28841U);
    msg.setDestinationEntity(253U);
    msg.id = 124U;
    msg.zoom = 254U;
    msg.action = 176U;

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
    msg.setTimeStamp(0.8093071571750393);
    msg.setSource(8408U);
    msg.setSourceEntity(71U);
    msg.setDestination(15333U);
    msg.setDestinationEntity(103U);
    msg.id = 113U;
    msg.zoom = 59U;
    msg.action = 65U;

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
    msg.setTimeStamp(0.21844578893398425);
    msg.setSource(58551U);
    msg.setSourceEntity(13U);
    msg.setDestination(64747U);
    msg.setDestinationEntity(155U);
    msg.id = 193U;
    msg.zoom = 151U;
    msg.action = 201U;

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
    msg.setTimeStamp(0.25547975734903683);
    msg.setSource(45168U);
    msg.setSourceEntity(93U);
    msg.setDestination(30752U);
    msg.setDestinationEntity(51U);
    msg.id = 146U;
    msg.value = 0.14957674245775665;

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
    msg.setTimeStamp(0.34843963146070844);
    msg.setSource(13883U);
    msg.setSourceEntity(130U);
    msg.setDestination(24626U);
    msg.setDestinationEntity(45U);
    msg.id = 53U;
    msg.value = 0.4685658568476374;

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
    msg.setTimeStamp(0.32684423449312605);
    msg.setSource(49502U);
    msg.setSourceEntity(47U);
    msg.setDestination(54097U);
    msg.setDestinationEntity(131U);
    msg.id = 195U;
    msg.value = 0.2778885223122284;

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
    msg.setTimeStamp(0.5456196553828735);
    msg.setSource(28309U);
    msg.setSourceEntity(55U);
    msg.setDestination(57790U);
    msg.setDestinationEntity(6U);
    msg.id = 30U;
    msg.value = 0.7885474171345096;

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
    msg.setTimeStamp(0.7286201462961155);
    msg.setSource(61992U);
    msg.setSourceEntity(105U);
    msg.setDestination(34141U);
    msg.setDestinationEntity(35U);
    msg.id = 168U;
    msg.value = 0.6221743545799224;

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
    msg.setTimeStamp(0.012452057167788633);
    msg.setSource(15693U);
    msg.setSourceEntity(84U);
    msg.setDestination(22573U);
    msg.setDestinationEntity(116U);
    msg.id = 58U;
    msg.value = 0.5444602073120336;

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
    msg.setTimeStamp(0.7036027184737718);
    msg.setSource(61564U);
    msg.setSourceEntity(16U);
    msg.setDestination(54345U);
    msg.setDestinationEntity(41U);
    msg.id = 134U;
    msg.angle = 0.9039502184577497;

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
    msg.setTimeStamp(0.34757379704771196);
    msg.setSource(957U);
    msg.setSourceEntity(137U);
    msg.setDestination(2405U);
    msg.setDestinationEntity(2U);
    msg.id = 103U;
    msg.angle = 0.6327728656856348;

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
    msg.setTimeStamp(0.19805082302693255);
    msg.setSource(40487U);
    msg.setSourceEntity(205U);
    msg.setDestination(47062U);
    msg.setDestinationEntity(70U);
    msg.id = 169U;
    msg.angle = 0.4655183817581694;

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
    msg.setTimeStamp(0.2925638524300246);
    msg.setSource(50594U);
    msg.setSourceEntity(167U);
    msg.setDestination(13621U);
    msg.setDestinationEntity(199U);
    msg.op = 185U;
    msg.actions.assign("JSMECLTXIVWGURHFGJLJOBIJSUBKAYLTSIVPXKJYQKRJFOZKMYLNXBEIISPCNYBUFQAQCUAHHKDXWXVGAZDQOQQZYSZGEETCMURSZWDNMWPJEFJVNYUPRXQVTQGRRAWROFXSTLAPYLPCGGTBTLZXTAVJCYKKXFKCNEHMEUWCQPHLFIPNWQGVWBCVHMBOVRHYXDGZJBWOFLMDTFFCAZLZSSDBEETGOIMSHIPIRMAZNDEKAHUD");

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
    msg.setTimeStamp(0.804662756902469);
    msg.setSource(21123U);
    msg.setSourceEntity(0U);
    msg.setDestination(50688U);
    msg.setDestinationEntity(186U);
    msg.op = 171U;
    msg.actions.assign("IWIHNZDMLBFMASECWGPTVGJIIPFIVYMLTBFWDOBPWYVLNTMWDFGCWCZFZQNSTEOQAZNQCYDTUJCFKYIRRUIOSKPRHCBLRYKXUVLHDZDMZSANJNUPEQOJKSUCTLPLHFZOXOHNGCQJDKEYXCOGNEBRFSYUWFMVOLNBZKQXGIGOBVEHJTRLMRRJTAUXSAGYPDQCJEFWXIDUEZ");

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
    msg.setTimeStamp(0.2110380306142453);
    msg.setSource(41040U);
    msg.setSourceEntity(111U);
    msg.setDestination(27185U);
    msg.setDestinationEntity(153U);
    msg.op = 212U;
    msg.actions.assign("ZDZVAVVWHEJBJVCRZXAYIFPAJPVDHIHDZKBGJWNYIGOOHUGSPJFRWEOTXTTZUNYTGKNVDKBCGZOJHRDMBGUL");

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
    msg.setTimeStamp(0.11926925680165501);
    msg.setSource(47413U);
    msg.setSourceEntity(58U);
    msg.setDestination(60159U);
    msg.setDestinationEntity(32U);
    msg.actions.assign("UCPSITMNDADYHBGQANRSMFEZGFXIBDPNVOALGUHNPKETCZYMFOJCGOUJKRTZSPIWNIQAMTIHNBQCNHSINYKQPVEDHBZWZMDTGVYEHPOIXDXLUEBCDWRUWCOFJVKDULSQYQJBPVXETUJWDITHKGGXYALRLZAHNIGBYSMXHZWSKFPESKVJFDVAS");

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
    msg.setTimeStamp(0.03120279513418689);
    msg.setSource(4723U);
    msg.setSourceEntity(145U);
    msg.setDestination(28253U);
    msg.setDestinationEntity(141U);
    msg.actions.assign("YNFLUXZEZMZOSWHKTAOQMGXNOAKDOXEVQHGEANRCFCVOBPRPABYMDRLFACDYVWTQLERXXGDYRIMILYZMNDUPSJWIGQUSLVBUKNMFKBJIKNSZMZHKAUQKWTUWPHGRGCSWMPXQSJDJ");

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
    msg.setTimeStamp(0.09560652287912941);
    msg.setSource(44523U);
    msg.setSourceEntity(8U);
    msg.setDestination(18519U);
    msg.setDestinationEntity(55U);
    msg.actions.assign("DVNNYERRGQFOVQMUYADP");

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
    msg.setTimeStamp(0.42884973865509435);
    msg.setSource(47412U);
    msg.setSourceEntity(83U);
    msg.setDestination(47250U);
    msg.setDestinationEntity(172U);
    msg.button = 70U;
    msg.value = 111U;

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
    msg.setTimeStamp(0.9155127444809118);
    msg.setSource(138U);
    msg.setSourceEntity(1U);
    msg.setDestination(27516U);
    msg.setDestinationEntity(242U);
    msg.button = 200U;
    msg.value = 163U;

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
    msg.setTimeStamp(0.013043762641750556);
    msg.setSource(11445U);
    msg.setSourceEntity(56U);
    msg.setDestination(53142U);
    msg.setDestinationEntity(93U);
    msg.button = 121U;
    msg.value = 236U;

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
    msg.setTimeStamp(0.12261248312516027);
    msg.setSource(4556U);
    msg.setSourceEntity(88U);
    msg.setDestination(1937U);
    msg.setDestinationEntity(27U);
    msg.op = 213U;
    msg.text.assign("VSTCTLRQAQJMCRJYWEALGOTZYNPNTZOHNYNMRQLAEUNEHAPHKNZGSBXRIUXDOBUGROVOTFLZUPKBMJLYCFWWDLOWWBCDQYXOWPHGZPAXIQSTUHOZFLDDTVMYMI");

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
    msg.setTimeStamp(0.5566058116906535);
    msg.setSource(33925U);
    msg.setSourceEntity(113U);
    msg.setDestination(45033U);
    msg.setDestinationEntity(211U);
    msg.op = 35U;
    msg.text.assign("JZVKGPXIAOLBVAPBDKPMLIHXTHADBPPRAYVAFVYZLXVXSDIODRCSXUPKIEPKVOJZSHHFEZLZWDVJHWYCKBGYSNFHWGGCNUUSYCPMDKTYJSNXTQCIQLMJFIWQSNJOUNGLJPBUZHUUQDBZLEFGEWWCMBHQOEOWWKOGFEXNGLIDQYKMTAXUARODTHRKARNVBIFGZEFRSOJZNJWLTWRVFLEB");

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
    msg.setTimeStamp(0.6022329632194915);
    msg.setSource(30156U);
    msg.setSourceEntity(59U);
    msg.setDestination(46994U);
    msg.setDestinationEntity(59U);
    msg.op = 158U;
    msg.text.assign("YPROUKQEBQVEIDUAGNNRYAHQITJCQLQJBEQHSQXJFNJGPWCIWRMAPTZUXKONTOWYWGINDLGTYFPLZOAXRDHDIZJSMFDCKMFMKERFSDZWKWGIYATHCCVWKSVDBMAMEQHGSFYEUOPCHAAZBWLVYRLTFPVUXTKIOCBMUMSGWPOODBXMISELCKKIYNBABJGVNZGEMDEXBZNJUJHOTORSFXHRXJFZNNVRVRUY");

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
    msg.setTimeStamp(0.10434697486470523);
    msg.setSource(3719U);
    msg.setSourceEntity(87U);
    msg.setDestination(18253U);
    msg.setDestinationEntity(33U);
    msg.op = 165U;
    msg.time_remain = 0.19590472935342718;
    msg.sched_time = 0.612850108891836;

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
    msg.setTimeStamp(0.8274581205196112);
    msg.setSource(21151U);
    msg.setSourceEntity(16U);
    msg.setDestination(52032U);
    msg.setDestinationEntity(112U);
    msg.op = 96U;
    msg.time_remain = 0.3014278395612314;
    msg.sched_time = 0.5109413624743271;

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
    msg.setTimeStamp(0.959546799767317);
    msg.setSource(29589U);
    msg.setSourceEntity(133U);
    msg.setDestination(11567U);
    msg.setDestinationEntity(40U);
    msg.op = 160U;
    msg.time_remain = 0.4464726579057069;
    msg.sched_time = 0.9470760896910875;

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
    msg.setTimeStamp(0.9166848196850763);
    msg.setSource(43205U);
    msg.setSourceEntity(68U);
    msg.setDestination(12096U);
    msg.setDestinationEntity(90U);
    msg.name.assign("PILSZWFXYSVKVFCYOWVGASFQAPKWUVXHAEKVJUFODNCNJGTAOUCFHYZLXHTTKGJRXDAUTVGPYWUX");
    msg.op = 147U;
    msg.sched_time = 0.6170722745155321;

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
    msg.setTimeStamp(0.7705009067529144);
    msg.setSource(48643U);
    msg.setSourceEntity(46U);
    msg.setDestination(33292U);
    msg.setDestinationEntity(39U);
    msg.name.assign("SDQAEYTBCCKMSUXPZ");
    msg.op = 96U;
    msg.sched_time = 0.024297933815442874;

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
    msg.setTimeStamp(0.444266459256481);
    msg.setSource(12710U);
    msg.setSourceEntity(59U);
    msg.setDestination(23759U);
    msg.setDestinationEntity(2U);
    msg.name.assign("DAGVRHRPHDWKPPFAAEKMEGCVYBVLTWIAPUCFOYGDCHGFJCBUEWGVNJTZGCOXPFMOMQBKSRUTUHVISFRUFRXC");
    msg.op = 75U;
    msg.sched_time = 0.7689123393652533;

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
    msg.setTimeStamp(0.36212566630714105);
    msg.setSource(50687U);
    msg.setSourceEntity(133U);
    msg.setDestination(6629U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.7030522631570928);
    msg.setSource(51381U);
    msg.setSourceEntity(199U);
    msg.setDestination(40372U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.5680335535591197);
    msg.setSource(42684U);
    msg.setSourceEntity(121U);
    msg.setDestination(47173U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.1806915111464502);
    msg.setSource(19245U);
    msg.setSourceEntity(75U);
    msg.setDestination(14161U);
    msg.setDestinationEntity(144U);
    msg.name.assign("BAZWFZGCUOYBOORXFUAAUANVNGFIHUINIWEBJXIYRWMXZXNYCESIIDUPCFOPCFOMOVBSLVCKRLIMTHNPWW");
    msg.state = 2U;

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
    msg.setTimeStamp(0.4627338503173597);
    msg.setSource(62103U);
    msg.setSourceEntity(64U);
    msg.setDestination(34844U);
    msg.setDestinationEntity(159U);
    msg.name.assign("CZAWASMYIFBDIMMTPGKJMUSBPHBDAGIRYCIUWTONOFENEUHXRZWSZUOQGEHCDFSDEIEZFILVEFDRYGASHVWSQONNMNUNEVCPJWGXXAPYLHVYTJFFCHYOIYWLVYNMKLNVXPDHHAKTBQXTLWZLDSCTVBPFULJYIOKELGQETJSMOCGURTZKDPTTECUAPRX");
    msg.state = 140U;

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
    msg.setTimeStamp(0.8493077219502835);
    msg.setSource(34090U);
    msg.setSourceEntity(102U);
    msg.setDestination(63293U);
    msg.setDestinationEntity(83U);
    msg.name.assign("PQNIHRDEMLFSQKCSCZVSHKHHOINANWTTPBTQUABSSRCAPFVJPRWFFBAKZEAHXHS");
    msg.state = 16U;

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
    msg.setTimeStamp(0.05788532082333675);
    msg.setSource(33487U);
    msg.setSourceEntity(99U);
    msg.setDestination(62121U);
    msg.setDestinationEntity(84U);
    msg.name.assign("LESPADEDALDGNIYND");
    msg.value = 18U;

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
    msg.setTimeStamp(0.6807356463441321);
    msg.setSource(46949U);
    msg.setSourceEntity(58U);
    msg.setDestination(53211U);
    msg.setDestinationEntity(120U);
    msg.name.assign("FTJRJQLPLDMAYDTOFAVYGXTGIOTZQXEBUJNIFZVRROAXVFIKUCWKFTROZCCCXUENSABHDXCNHBWLXBVGRNSXYQLCDMSYHLFDBHETDJUXCEOZCAZIQEQQURJMFSRHTNNTHYOPSLQBFPVLEMIYAQLGEPIMKJZPRNXMWHBFBKDYGWNSEOLBYZEWAMCHVTPWSOOGNLDGBZAKPJATPFKCVPSJOMYN");
    msg.value = 62U;

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
    msg.setTimeStamp(0.08015461437256932);
    msg.setSource(10021U);
    msg.setSourceEntity(51U);
    msg.setDestination(11545U);
    msg.setDestinationEntity(183U);
    msg.name.assign("NNSYGTQTIWZEGBCUGRLDJLGOPHJYWQPXXQHPEVCUZNNAAOPYRCJNXUCOPLAOANSOMEVBJVYEIJSKKXIFMJMDIFGMPZSSUHWAMJDAKXIZEZQTWBVSWLUDMAMBBWYFDLWTORRFTRSQFNHHJEDOADI");
    msg.value = 81U;

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
    msg.setTimeStamp(0.5663352686339254);
    msg.setSource(14752U);
    msg.setSourceEntity(12U);
    msg.setDestination(42022U);
    msg.setDestinationEntity(157U);
    msg.name.assign("XMAYKGKWUAYAAKLUJQYJCEGVACFWONSVPSGJCEVSNTBLRPNVERXUBVZZLCQJSLWISHVSOMGFQDAHUXXAZRQFGDVRBHJDDWHRCSDXNIYFANYBZLGKBQPJDHTNAOEDJSTXVFMBKQCCHDPQLDZJEBNPFZESCLWXYUROMNAMOWYUTPZEEOKYPLJIRUIXTBIMOHIRNLFEFMQKSTQNETRGYUCPFBGVMMVWPO");

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
    msg.setTimeStamp(0.3859663336391118);
    msg.setSource(37973U);
    msg.setSourceEntity(8U);
    msg.setDestination(28264U);
    msg.setDestinationEntity(155U);
    msg.name.assign("CZLRGEMUFNREOZIUZVJGUJPRXEKREYAHEHLGWCQDRVBONZMWDBLIAKYMAPQFBDTPIPRTCDPKJLVBO");

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
    msg.setTimeStamp(0.9383945712566136);
    msg.setSource(26004U);
    msg.setSourceEntity(93U);
    msg.setDestination(11892U);
    msg.setDestinationEntity(34U);
    msg.name.assign("LDTPJYKASCTWZJEFBOKZENYDRZDFVIUHSJPUFPVUXRYXJZOBQXFUAHILNEHBBCWNCJNMIFTCAXLIQGMIQFNVAWYZTCXHIWUMNA");

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
    msg.setTimeStamp(0.9360704243238371);
    msg.setSource(65281U);
    msg.setSourceEntity(220U);
    msg.setDestination(13736U);
    msg.setDestinationEntity(16U);
    msg.name.assign("FQELHOYQJDUIGXBEHWMDKFEVFBXLVAUMSUCRNGCLTLOXRAFVEPVMOULAPIJIDHVSMCJJXBDWHSQTIBOPGYYEWITFJIQFMQNBBQDPXHTFYUIHNRCCUCLZMRLYRXAXMZUTAHVOEVBDWZKUGYSQFVYCNHKSNCEXFUKJZQXWJOSNSZVMRELPERNSTIZGIO");
    msg.value = 232U;

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
    msg.setTimeStamp(0.9895335698802294);
    msg.setSource(12074U);
    msg.setSourceEntity(213U);
    msg.setDestination(46637U);
    msg.setDestinationEntity(72U);
    msg.name.assign("ABMOTUVJANXSQCYWDGXTLJEULLDWERGHKTYJQDPMVCMRQGYIMLSRDEQSSFBJZTUYXOJJBFWKDPMTOEKOJKKHVQZIPZJVZPDZKDONGFBFZOJNASUGTTSOGRPNYAQMKFHGRFOPUELFYVEUGZHLYMVXOOAXCCBQMIZRNUWNWDBPYLXSDBNRWCFKEF");
    msg.value = 143U;

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
    msg.setTimeStamp(0.8102644521584267);
    msg.setSource(24038U);
    msg.setSourceEntity(101U);
    msg.setDestination(30045U);
    msg.setDestinationEntity(254U);
    msg.name.assign("VRLSZINPKPFBVMOHJWUCITQGOINKEQZULKGDQXUNILOCWCJXNTFBTIKHHDYQREVQIETGGMOLROCTPLZOFONIWBTWUEEDPEGJAGLFVYEWHMVXBJKSWHVXBWUDYDYFGYMSRCPORZDRIZYFJXATKWABCCUSKPYDHQXGJPPAXHFKDBAFFIJZWTDSHXTAVFGSZDKTMMLRBZOU");
    msg.value = 61U;

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
    msg.setTimeStamp(0.4772230027520692);
    msg.setSource(29929U);
    msg.setSourceEntity(149U);
    msg.setDestination(21898U);
    msg.setDestinationEntity(71U);
    msg.id = 46U;
    msg.period = 2848476881U;
    msg.duty_cycle = 3468121101U;

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
    msg.setTimeStamp(0.03493713253933306);
    msg.setSource(57360U);
    msg.setSourceEntity(35U);
    msg.setDestination(24668U);
    msg.setDestinationEntity(222U);
    msg.id = 107U;
    msg.period = 1583949395U;
    msg.duty_cycle = 1932127649U;

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
    msg.setTimeStamp(0.2865130406497999);
    msg.setSource(7761U);
    msg.setSourceEntity(37U);
    msg.setDestination(48042U);
    msg.setDestinationEntity(212U);
    msg.id = 174U;
    msg.period = 1465996782U;
    msg.duty_cycle = 3034115983U;

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
    msg.setTimeStamp(0.9758004013298937);
    msg.setSource(10645U);
    msg.setSourceEntity(170U);
    msg.setDestination(52062U);
    msg.setDestinationEntity(178U);
    msg.id = 213U;
    msg.period = 3531135597U;
    msg.duty_cycle = 2939382232U;

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
    msg.setTimeStamp(0.7089298971946133);
    msg.setSource(60963U);
    msg.setSourceEntity(136U);
    msg.setDestination(10403U);
    msg.setDestinationEntity(34U);
    msg.id = 168U;
    msg.period = 3430239211U;
    msg.duty_cycle = 90584610U;

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
    msg.setTimeStamp(0.8165174187002893);
    msg.setSource(45598U);
    msg.setSourceEntity(159U);
    msg.setDestination(14118U);
    msg.setDestinationEntity(184U);
    msg.id = 160U;
    msg.period = 1022822022U;
    msg.duty_cycle = 1887600227U;

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
    msg.setTimeStamp(0.8370561456661739);
    msg.setSource(61942U);
    msg.setSourceEntity(92U);
    msg.setDestination(55627U);
    msg.setDestinationEntity(39U);
    msg.lat = 0.42763471777681406;
    msg.lon = 0.2445173222804935;
    msg.height = 0.42946811954163;
    msg.x = 0.33064149605367865;
    msg.y = 0.7360757517862826;
    msg.z = 0.8332248548823438;
    msg.phi = 0.22773540816150606;
    msg.theta = 0.1723647277892093;
    msg.psi = 0.8135807567729877;
    msg.u = 0.6051137441918517;
    msg.v = 0.6732927874966826;
    msg.w = 0.6979375756937976;
    msg.vx = 0.1858588404168915;
    msg.vy = 0.8638535995141443;
    msg.vz = 0.2873022416801789;
    msg.p = 0.5055779632921524;
    msg.q = 0.9790090614924517;
    msg.r = 0.6041787265016998;
    msg.depth = 0.0552001543168994;
    msg.alt = 0.02448088436053819;

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
    msg.setTimeStamp(0.3938544652525523);
    msg.setSource(45925U);
    msg.setSourceEntity(145U);
    msg.setDestination(52113U);
    msg.setDestinationEntity(109U);
    msg.lat = 0.4137193733748762;
    msg.lon = 0.08359990320183663;
    msg.height = 0.09965786563629542;
    msg.x = 0.7279567803793524;
    msg.y = 0.6219973984225122;
    msg.z = 0.21682372801161076;
    msg.phi = 0.19718768942234943;
    msg.theta = 0.6047930388036442;
    msg.psi = 0.7005909514296834;
    msg.u = 0.39732891971990947;
    msg.v = 0.615207259552767;
    msg.w = 0.4570597815469909;
    msg.vx = 0.7338282153618714;
    msg.vy = 0.758024013781284;
    msg.vz = 0.27135131216742236;
    msg.p = 0.14602215327597023;
    msg.q = 0.24508214290753727;
    msg.r = 0.8445057092654099;
    msg.depth = 0.8139517325925092;
    msg.alt = 0.23412892339572156;

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
    msg.setTimeStamp(0.4272954490269638);
    msg.setSource(62224U);
    msg.setSourceEntity(131U);
    msg.setDestination(7095U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.07596118820005726;
    msg.lon = 0.3666195430905398;
    msg.height = 0.7937004930988742;
    msg.x = 0.537318273239273;
    msg.y = 0.8749183707284126;
    msg.z = 0.4379123107916444;
    msg.phi = 0.5652063401220092;
    msg.theta = 0.5229268425086744;
    msg.psi = 0.4726565036562618;
    msg.u = 0.9989320316562554;
    msg.v = 0.6767103721310033;
    msg.w = 0.15897977831555088;
    msg.vx = 0.5614719433315872;
    msg.vy = 0.8143976827024856;
    msg.vz = 0.3050137518137682;
    msg.p = 0.7681895820569733;
    msg.q = 0.8370123010423448;
    msg.r = 0.5977959337359916;
    msg.depth = 0.7843577293121116;
    msg.alt = 0.07358668081644626;

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
    msg.setTimeStamp(0.014214774871732061);
    msg.setSource(7153U);
    msg.setSourceEntity(27U);
    msg.setDestination(6371U);
    msg.setDestinationEntity(12U);
    msg.x = 0.3014797785044657;
    msg.y = 0.40031539511646996;
    msg.z = 0.31388074815150024;

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
    msg.setTimeStamp(0.18636946833721946);
    msg.setSource(14990U);
    msg.setSourceEntity(61U);
    msg.setDestination(59177U);
    msg.setDestinationEntity(161U);
    msg.x = 0.15441020593865806;
    msg.y = 0.3317210820459099;
    msg.z = 0.1224667667141579;

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
    msg.setTimeStamp(0.811429514253932);
    msg.setSource(64232U);
    msg.setSourceEntity(102U);
    msg.setDestination(59793U);
    msg.setDestinationEntity(217U);
    msg.x = 0.8646583779256776;
    msg.y = 0.9395844283748667;
    msg.z = 0.8697554226190463;

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
    msg.setTimeStamp(0.9183885957223559);
    msg.setSource(48838U);
    msg.setSourceEntity(1U);
    msg.setDestination(58694U);
    msg.setDestinationEntity(99U);
    msg.value = 0.12536930689454906;

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
    msg.setTimeStamp(0.12743336828728236);
    msg.setSource(29816U);
    msg.setSourceEntity(74U);
    msg.setDestination(59593U);
    msg.setDestinationEntity(122U);
    msg.value = 0.26191072188732256;

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
    msg.setTimeStamp(0.014349725182749573);
    msg.setSource(23382U);
    msg.setSourceEntity(22U);
    msg.setDestination(59426U);
    msg.setDestinationEntity(37U);
    msg.value = 0.29175780531856155;

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
    msg.setTimeStamp(0.11627895209888905);
    msg.setSource(14636U);
    msg.setSourceEntity(254U);
    msg.setDestination(21339U);
    msg.setDestinationEntity(110U);
    msg.value = 0.657861660323295;

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
    msg.setTimeStamp(0.9003431355915525);
    msg.setSource(64559U);
    msg.setSourceEntity(145U);
    msg.setDestination(10994U);
    msg.setDestinationEntity(128U);
    msg.value = 0.21667788166649293;

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
    msg.setTimeStamp(0.5551291520302128);
    msg.setSource(3213U);
    msg.setSourceEntity(160U);
    msg.setDestination(64416U);
    msg.setDestinationEntity(0U);
    msg.value = 0.1143774138171958;

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
    msg.setTimeStamp(0.8262448169401184);
    msg.setSource(39429U);
    msg.setSourceEntity(190U);
    msg.setDestination(37789U);
    msg.setDestinationEntity(57U);
    msg.x = 0.3674202504163764;
    msg.y = 0.4015481235002428;
    msg.z = 0.47402770305734576;
    msg.phi = 0.7363681133575659;
    msg.theta = 0.8515303196231678;
    msg.psi = 0.005950990620080865;
    msg.p = 0.6783819033706233;
    msg.q = 0.5032245913928711;
    msg.r = 0.41260630417074695;
    msg.u = 0.054663963560312;
    msg.v = 0.7514827696290883;
    msg.w = 0.4470528150906613;
    msg.bias_psi = 0.8397407820296555;
    msg.bias_r = 0.625655223807033;

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
    msg.setTimeStamp(0.04554399862034764);
    msg.setSource(19553U);
    msg.setSourceEntity(68U);
    msg.setDestination(54648U);
    msg.setDestinationEntity(164U);
    msg.x = 0.9408290271399375;
    msg.y = 0.8643958102500824;
    msg.z = 0.11081857138725515;
    msg.phi = 0.656035681118707;
    msg.theta = 0.1746604133008729;
    msg.psi = 0.31613362453853655;
    msg.p = 0.007520429492911984;
    msg.q = 0.6423619456228941;
    msg.r = 0.05999192080249127;
    msg.u = 0.07220076456965319;
    msg.v = 0.6615580198400254;
    msg.w = 0.19838621705381843;
    msg.bias_psi = 0.30163494433700033;
    msg.bias_r = 0.9657833956672485;

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
    msg.setTimeStamp(0.16511548880895932);
    msg.setSource(32296U);
    msg.setSourceEntity(20U);
    msg.setDestination(29351U);
    msg.setDestinationEntity(96U);
    msg.x = 0.03064498376050373;
    msg.y = 0.14174822044275193;
    msg.z = 0.6807771959381547;
    msg.phi = 0.8531224974832229;
    msg.theta = 0.5421961086204237;
    msg.psi = 0.7776444951493978;
    msg.p = 0.9679934860742332;
    msg.q = 0.588023465705395;
    msg.r = 0.9081570262175188;
    msg.u = 0.8405619828507571;
    msg.v = 0.9085229704788605;
    msg.w = 0.8865343241167992;
    msg.bias_psi = 0.9027939571271305;
    msg.bias_r = 0.8233196044454315;

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
    msg.setTimeStamp(0.2315334885830942);
    msg.setSource(56393U);
    msg.setSourceEntity(101U);
    msg.setDestination(5292U);
    msg.setDestinationEntity(199U);
    msg.bias_psi = 0.017870759730538976;
    msg.bias_r = 0.49295557261025047;
    msg.cog = 0.6296345852833171;
    msg.cyaw = 0.4437585047588728;
    msg.lbl_rej_level = 0.529768786747679;
    msg.gps_rej_level = 0.1567228910949895;
    msg.custom_x = 0.7534141812922253;
    msg.custom_y = 0.11384473073581935;
    msg.custom_z = 0.4829173309875886;

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
    msg.setTimeStamp(0.9266743643424084);
    msg.setSource(22295U);
    msg.setSourceEntity(41U);
    msg.setDestination(31051U);
    msg.setDestinationEntity(124U);
    msg.bias_psi = 0.7465120929013304;
    msg.bias_r = 0.3542010722878203;
    msg.cog = 0.9024483975285512;
    msg.cyaw = 0.15183657002380246;
    msg.lbl_rej_level = 0.842288988456805;
    msg.gps_rej_level = 0.9574746915764025;
    msg.custom_x = 0.3573235476743277;
    msg.custom_y = 0.7930626228762567;
    msg.custom_z = 0.49485852400580255;

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
    msg.setTimeStamp(0.05372882597665296);
    msg.setSource(18042U);
    msg.setSourceEntity(117U);
    msg.setDestination(49295U);
    msg.setDestinationEntity(153U);
    msg.bias_psi = 0.3184890579543056;
    msg.bias_r = 0.9613133463299534;
    msg.cog = 0.6880674071461991;
    msg.cyaw = 0.6666616671337986;
    msg.lbl_rej_level = 0.6099417148636204;
    msg.gps_rej_level = 0.30944403690917266;
    msg.custom_x = 0.9596653880719618;
    msg.custom_y = 0.6430462907738538;
    msg.custom_z = 0.5734117720372749;

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
    msg.setTimeStamp(0.6661559408143768);
    msg.setSource(4340U);
    msg.setSourceEntity(84U);
    msg.setDestination(21507U);
    msg.setDestinationEntity(236U);
    msg.utc_time = 0.4609724258750034;
    msg.reason = 6U;

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
    msg.setTimeStamp(0.6101590710065807);
    msg.setSource(42791U);
    msg.setSourceEntity(57U);
    msg.setDestination(46766U);
    msg.setDestinationEntity(25U);
    msg.utc_time = 0.15943311881041555;
    msg.reason = 6U;

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
    msg.setTimeStamp(0.4715408189121607);
    msg.setSource(56626U);
    msg.setSourceEntity(142U);
    msg.setDestination(17733U);
    msg.setDestinationEntity(154U);
    msg.utc_time = 0.9770160263688255;
    msg.reason = 98U;

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
    msg.setTimeStamp(0.19553789385747333);
    msg.setSource(42548U);
    msg.setSourceEntity(145U);
    msg.setDestination(62886U);
    msg.setDestinationEntity(109U);
    msg.id = 188U;
    msg.range = 0.20384146177818163;
    msg.acceptance = 42U;

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
    msg.setTimeStamp(0.3510205561472439);
    msg.setSource(25390U);
    msg.setSourceEntity(250U);
    msg.setDestination(59012U);
    msg.setDestinationEntity(246U);
    msg.id = 142U;
    msg.range = 0.19293031758124268;
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
    msg.setTimeStamp(0.35390049780195665);
    msg.setSource(16641U);
    msg.setSourceEntity(247U);
    msg.setDestination(18524U);
    msg.setDestinationEntity(246U);
    msg.id = 146U;
    msg.range = 0.15776130752048945;
    msg.acceptance = 238U;

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
    msg.setTimeStamp(0.626668795861429);
    msg.setSource(26293U);
    msg.setSourceEntity(61U);
    msg.setDestination(49672U);
    msg.setDestinationEntity(137U);
    msg.type = 144U;
    msg.reason = 57U;
    msg.value = 0.6229148552151532;
    msg.timestep = 0.09538215719190657;

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
    msg.setTimeStamp(0.035594547196832305);
    msg.setSource(48643U);
    msg.setSourceEntity(162U);
    msg.setDestination(49355U);
    msg.setDestinationEntity(104U);
    msg.type = 123U;
    msg.reason = 229U;
    msg.value = 0.5994382933972537;
    msg.timestep = 0.29014402661245864;

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
    msg.setTimeStamp(0.9111737172733148);
    msg.setSource(45382U);
    msg.setSourceEntity(93U);
    msg.setDestination(23477U);
    msg.setDestinationEntity(34U);
    msg.type = 194U;
    msg.reason = 127U;
    msg.value = 0.5343315267655817;
    msg.timestep = 0.3203700299101162;

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
    msg.setTimeStamp(0.5192077775713078);
    msg.setSource(1053U);
    msg.setSourceEntity(107U);
    msg.setDestination(26016U);
    msg.setDestinationEntity(192U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MPHSRKRJXCWBLLDKCHEIMDZRIPGQFGPMUYUGZIIGYMZMGJSQFUAFFKEZFQAWVEMLYPTNPNRVUDPDFVDSUCOYOVOBWFJEOBWWIZDBWOAWTTWZNFWNJRYEXGKLQSLLALXGNKOCZNRZBBBYJSXSKMNETKPPOPOHAJXW");
    tmp_msg_0.lat = 0.5926446811523443;
    tmp_msg_0.lon = 0.9336492901331557;
    tmp_msg_0.depth = 0.4410403553843485;
    tmp_msg_0.query_channel = 28U;
    tmp_msg_0.reply_channel = 204U;
    tmp_msg_0.transponder_delay = 194U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.2770885197453212;
    msg.y = 0.9360253045649801;
    msg.var_x = 0.14565277369166696;
    msg.var_y = 0.006125011711962336;
    msg.distance = 0.41070744684597127;

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
    msg.setTimeStamp(0.3785640546110355);
    msg.setSource(48727U);
    msg.setSourceEntity(10U);
    msg.setDestination(16104U);
    msg.setDestinationEntity(98U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VGJFNEMFDUXTHCOLWRNFPZGAOYIVKYXQSZXPCPKCTKBEQTGOABDALDEDAZMJABMJUOGRKCIEINCGZJVQYUKSYZTAELZLXCSFFUXVKQRYWZTQYLFULQUEWJXSBDAXHUVIJQCLNXOQWYIIVRPBGEJMGZJDVSWLBRTBMITUVCRR");
    tmp_msg_0.lat = 0.9034935600663254;
    tmp_msg_0.lon = 0.43812482092480887;
    tmp_msg_0.depth = 0.3986846280847828;
    tmp_msg_0.query_channel = 237U;
    tmp_msg_0.reply_channel = 25U;
    tmp_msg_0.transponder_delay = 120U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7589925638072068;
    msg.y = 0.17535121932230957;
    msg.var_x = 0.2686735135293996;
    msg.var_y = 0.9800749252171455;
    msg.distance = 0.19628630262431146;

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
    msg.setTimeStamp(0.5193886921137103);
    msg.setSource(17321U);
    msg.setSourceEntity(247U);
    msg.setDestination(1008U);
    msg.setDestinationEntity(81U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("MQYSKBUWNHKAHSGDJWRXEALYGLAVVKNBSPVXCBWOXQHERQNJTVOTTEGNPQBMBPOUKEXPVLIKQDWLFUMARJUZNYHOFJPIJDYGWYNHICCHAUSBYRIDPRDDGZVWHZYDQRLEMVDSGVHCMXDFFR");
    tmp_msg_0.lat = 0.2326220358089368;
    tmp_msg_0.lon = 0.027274907113652658;
    tmp_msg_0.depth = 0.08960812429460607;
    tmp_msg_0.query_channel = 111U;
    tmp_msg_0.reply_channel = 100U;
    tmp_msg_0.transponder_delay = 45U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7584620216735842;
    msg.y = 0.8799702017473642;
    msg.var_x = 0.4117258288344031;
    msg.var_y = 0.9297095645960658;
    msg.distance = 0.5146971365395127;

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
    msg.setTimeStamp(0.12625663216024996);
    msg.setSource(55689U);
    msg.setSourceEntity(124U);
    msg.setDestination(20401U);
    msg.setDestinationEntity(60U);
    msg.state = 205U;

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
    msg.setTimeStamp(0.441668259685831);
    msg.setSource(59798U);
    msg.setSourceEntity(227U);
    msg.setDestination(44955U);
    msg.setDestinationEntity(20U);
    msg.state = 93U;

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
    msg.setTimeStamp(0.861429151988458);
    msg.setSource(47460U);
    msg.setSourceEntity(248U);
    msg.setDestination(28947U);
    msg.setDestinationEntity(254U);
    msg.state = 71U;

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
    msg.setTimeStamp(0.08708132150484937);
    msg.setSource(44663U);
    msg.setSourceEntity(108U);
    msg.setDestination(51366U);
    msg.setDestinationEntity(85U);
    msg.x = 0.8274096476183483;
    msg.y = 0.15232721641462454;
    msg.z = 0.343185945302509;

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
    msg.setTimeStamp(0.9793989875783286);
    msg.setSource(29051U);
    msg.setSourceEntity(75U);
    msg.setDestination(26558U);
    msg.setDestinationEntity(160U);
    msg.x = 0.24931962716172973;
    msg.y = 0.7997464533578346;
    msg.z = 0.4605909049541361;

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
    msg.setTimeStamp(0.8539379808444737);
    msg.setSource(7416U);
    msg.setSourceEntity(99U);
    msg.setDestination(43209U);
    msg.setDestinationEntity(221U);
    msg.x = 0.4945421819480469;
    msg.y = 0.717727652895717;
    msg.z = 0.5765546649079276;

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
    msg.setTimeStamp(0.15585905572376035);
    msg.setSource(58207U);
    msg.setSourceEntity(71U);
    msg.setDestination(46886U);
    msg.setDestinationEntity(83U);
    msg.value = 0.7516592150870567;

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
    msg.setTimeStamp(0.8996788782638133);
    msg.setSource(10445U);
    msg.setSourceEntity(154U);
    msg.setDestination(47221U);
    msg.setDestinationEntity(189U);
    msg.value = 0.09904724028869738;

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
    msg.setTimeStamp(0.039969542646611345);
    msg.setSource(19119U);
    msg.setSourceEntity(120U);
    msg.setDestination(19322U);
    msg.setDestinationEntity(96U);
    msg.value = 0.3619102332549169;

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
    msg.setTimeStamp(0.7153242185168625);
    msg.setSource(7245U);
    msg.setSourceEntity(40U);
    msg.setDestination(63546U);
    msg.setDestinationEntity(82U);
    msg.value = 0.8708207640111872;
    msg.z_units = 111U;

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
    msg.setTimeStamp(0.4521524159203868);
    msg.setSource(36069U);
    msg.setSourceEntity(220U);
    msg.setDestination(27903U);
    msg.setDestinationEntity(151U);
    msg.value = 0.5786901757635472;
    msg.z_units = 221U;

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
    msg.setTimeStamp(0.8460861388461712);
    msg.setSource(46162U);
    msg.setSourceEntity(224U);
    msg.setDestination(56634U);
    msg.setDestinationEntity(210U);
    msg.value = 0.7415171663089651;
    msg.z_units = 61U;

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
    msg.setTimeStamp(0.6630459662698269);
    msg.setSource(412U);
    msg.setSourceEntity(121U);
    msg.setDestination(30963U);
    msg.setDestinationEntity(85U);
    msg.value = 0.9045868684394787;
    msg.speed_units = 195U;

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
    msg.setTimeStamp(0.5343646280247529);
    msg.setSource(17667U);
    msg.setSourceEntity(36U);
    msg.setDestination(61102U);
    msg.setDestinationEntity(19U);
    msg.value = 0.6246494920690558;
    msg.speed_units = 24U;

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
    msg.setTimeStamp(0.8860140094933141);
    msg.setSource(10U);
    msg.setSourceEntity(176U);
    msg.setDestination(54682U);
    msg.setDestinationEntity(90U);
    msg.value = 0.427246019669256;
    msg.speed_units = 70U;

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
    msg.setTimeStamp(0.04426279787840526);
    msg.setSource(63532U);
    msg.setSourceEntity(40U);
    msg.setDestination(61958U);
    msg.setDestinationEntity(187U);
    msg.value = 0.7350255330546739;

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
    msg.setTimeStamp(0.7583645675712725);
    msg.setSource(21377U);
    msg.setSourceEntity(0U);
    msg.setDestination(55999U);
    msg.setDestinationEntity(83U);
    msg.value = 0.7218587961460203;

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
    msg.setTimeStamp(0.507872083643381);
    msg.setSource(32879U);
    msg.setSourceEntity(158U);
    msg.setDestination(5779U);
    msg.setDestinationEntity(162U);
    msg.value = 0.236683450482833;

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
    msg.setTimeStamp(0.8577754256442329);
    msg.setSource(3108U);
    msg.setSourceEntity(18U);
    msg.setDestination(23749U);
    msg.setDestinationEntity(75U);
    msg.value = 0.3841453731187249;

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
    msg.setTimeStamp(0.9593755575648366);
    msg.setSource(26174U);
    msg.setSourceEntity(46U);
    msg.setDestination(19121U);
    msg.setDestinationEntity(99U);
    msg.value = 0.13846496261830243;

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
    msg.setTimeStamp(0.26264415693721976);
    msg.setSource(37662U);
    msg.setSourceEntity(52U);
    msg.setDestination(49524U);
    msg.setDestinationEntity(232U);
    msg.value = 0.5313609564368155;

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
    msg.setTimeStamp(0.9931262306451429);
    msg.setSource(4716U);
    msg.setSourceEntity(143U);
    msg.setDestination(10995U);
    msg.setDestinationEntity(44U);
    msg.value = 0.3122573889141935;

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
    msg.setTimeStamp(0.1601396679910072);
    msg.setSource(13526U);
    msg.setSourceEntity(28U);
    msg.setDestination(31172U);
    msg.setDestinationEntity(223U);
    msg.value = 0.1332825573142402;

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
    msg.setTimeStamp(0.18748683263108135);
    msg.setSource(37665U);
    msg.setSourceEntity(76U);
    msg.setDestination(17811U);
    msg.setDestinationEntity(116U);
    msg.value = 0.5444865110854793;

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
    msg.setTimeStamp(0.04740945867333779);
    msg.setSource(4058U);
    msg.setSourceEntity(34U);
    msg.setDestination(55701U);
    msg.setDestinationEntity(60U);
    msg.path_ref = 3707151360U;
    msg.start_lat = 0.4473389885075647;
    msg.start_lon = 0.5483760636301495;
    msg.start_z = 0.36094726140016886;
    msg.start_z_units = 136U;
    msg.end_lat = 0.3176965532396797;
    msg.end_lon = 0.9192321170261356;
    msg.end_z = 0.0704572440842186;
    msg.end_z_units = 39U;
    msg.speed = 0.5873994727835969;
    msg.speed_units = 13U;
    msg.lradius = 0.9188048699213155;
    msg.flags = 235U;

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
    msg.setTimeStamp(0.10577615502498272);
    msg.setSource(40747U);
    msg.setSourceEntity(95U);
    msg.setDestination(17013U);
    msg.setDestinationEntity(154U);
    msg.path_ref = 2168322450U;
    msg.start_lat = 0.2730004824847876;
    msg.start_lon = 0.4176864078440331;
    msg.start_z = 0.8724439919767909;
    msg.start_z_units = 145U;
    msg.end_lat = 0.9278328634877767;
    msg.end_lon = 0.8873026213910609;
    msg.end_z = 0.9722601845185368;
    msg.end_z_units = 180U;
    msg.speed = 0.0537006400990393;
    msg.speed_units = 69U;
    msg.lradius = 0.849287708950162;
    msg.flags = 147U;

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
    msg.setTimeStamp(0.5130772035453167);
    msg.setSource(57906U);
    msg.setSourceEntity(92U);
    msg.setDestination(61125U);
    msg.setDestinationEntity(161U);
    msg.path_ref = 866796780U;
    msg.start_lat = 0.4480050045347648;
    msg.start_lon = 0.9770558675121538;
    msg.start_z = 0.028761515928606873;
    msg.start_z_units = 18U;
    msg.end_lat = 0.08729843813199278;
    msg.end_lon = 0.062015901733400436;
    msg.end_z = 0.03569259918270373;
    msg.end_z_units = 11U;
    msg.speed = 0.2307175707653788;
    msg.speed_units = 88U;
    msg.lradius = 0.38262556890144006;
    msg.flags = 229U;

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
    msg.setTimeStamp(0.20071461321446316);
    msg.setSource(46885U);
    msg.setSourceEntity(111U);
    msg.setDestination(20396U);
    msg.setDestinationEntity(60U);
    msg.x = 0.22821115905084133;
    msg.y = 0.4216015121290184;
    msg.z = 0.7457712694883476;
    msg.k = 0.7608166060886546;
    msg.m = 0.9943584455628673;
    msg.n = 0.05463985825970874;
    msg.flags = 166U;

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
    msg.setTimeStamp(0.43580192831375986);
    msg.setSource(38349U);
    msg.setSourceEntity(195U);
    msg.setDestination(35102U);
    msg.setDestinationEntity(234U);
    msg.x = 0.970715927373869;
    msg.y = 0.4387212101265481;
    msg.z = 0.4446606780818806;
    msg.k = 0.2808960597254099;
    msg.m = 0.702765343077956;
    msg.n = 0.09309855261820843;
    msg.flags = 136U;

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
    msg.setTimeStamp(0.7740581555857163);
    msg.setSource(37821U);
    msg.setSourceEntity(41U);
    msg.setDestination(47517U);
    msg.setDestinationEntity(232U);
    msg.x = 0.7036447252762117;
    msg.y = 0.7021424097159421;
    msg.z = 0.742709642185279;
    msg.k = 0.8260421856786274;
    msg.m = 0.058480063176902686;
    msg.n = 0.01808819839164799;
    msg.flags = 179U;

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
    msg.setTimeStamp(0.178852809424344);
    msg.setSource(48243U);
    msg.setSourceEntity(101U);
    msg.setDestination(56096U);
    msg.setDestinationEntity(18U);
    msg.value = 0.18435066830538738;

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
    msg.setTimeStamp(0.40937814542021);
    msg.setSource(18203U);
    msg.setSourceEntity(75U);
    msg.setDestination(40955U);
    msg.setDestinationEntity(48U);
    msg.value = 0.27499558588589734;

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
    msg.setTimeStamp(0.7897381345272235);
    msg.setSource(13533U);
    msg.setSourceEntity(79U);
    msg.setDestination(38625U);
    msg.setDestinationEntity(5U);
    msg.value = 0.6802222938375362;

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
    msg.setTimeStamp(0.9800470115392297);
    msg.setSource(64092U);
    msg.setSourceEntity(115U);
    msg.setDestination(22937U);
    msg.setDestinationEntity(12U);
    msg.u = 0.527237333198612;
    msg.v = 0.44410851015556174;
    msg.w = 0.6806423564676799;
    msg.p = 0.24921587160905934;
    msg.q = 0.8991590415452784;
    msg.r = 0.8853047127424046;
    msg.flags = 166U;

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
    msg.setTimeStamp(0.7786610166106966);
    msg.setSource(25806U);
    msg.setSourceEntity(162U);
    msg.setDestination(4181U);
    msg.setDestinationEntity(74U);
    msg.u = 0.6344740371889727;
    msg.v = 0.05846666075520468;
    msg.w = 0.4647436630786802;
    msg.p = 0.5329737485457912;
    msg.q = 0.1043674928124535;
    msg.r = 0.0022275705705554483;
    msg.flags = 159U;

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
    msg.setTimeStamp(0.32005347604777346);
    msg.setSource(13379U);
    msg.setSourceEntity(129U);
    msg.setDestination(32856U);
    msg.setDestinationEntity(198U);
    msg.u = 0.9255983533830748;
    msg.v = 0.8879365062370836;
    msg.w = 0.3401017881456433;
    msg.p = 0.26326757299403225;
    msg.q = 0.8052450122156707;
    msg.r = 0.02171834107974946;
    msg.flags = 18U;

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
    msg.setTimeStamp(0.1804468704940313);
    msg.setSource(6846U);
    msg.setSourceEntity(174U);
    msg.setDestination(42990U);
    msg.setDestinationEntity(94U);
    msg.path_ref = 979721265U;
    msg.start_lat = 0.3558179086322215;
    msg.start_lon = 0.5785936557865327;
    msg.start_z = 0.5461466311813925;
    msg.start_z_units = 3U;
    msg.end_lat = 0.9173740522360653;
    msg.end_lon = 0.4101309958755691;
    msg.end_z = 0.3607891601189578;
    msg.end_z_units = 146U;
    msg.lradius = 0.07069478811168539;
    msg.flags = 89U;
    msg.x = 0.4667510873861831;
    msg.y = 0.380242043044993;
    msg.z = 0.2679669367202019;
    msg.vx = 0.0345873581355054;
    msg.vy = 0.27139867197090684;
    msg.vz = 0.11285035379202768;
    msg.course_error = 0.8135893228013028;
    msg.eta = 57446U;

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
    msg.setTimeStamp(0.30409337578382045);
    msg.setSource(31772U);
    msg.setSourceEntity(217U);
    msg.setDestination(57522U);
    msg.setDestinationEntity(20U);
    msg.path_ref = 815825324U;
    msg.start_lat = 0.9705806897665972;
    msg.start_lon = 0.857612124709662;
    msg.start_z = 0.5431082931868352;
    msg.start_z_units = 232U;
    msg.end_lat = 0.8112842271868397;
    msg.end_lon = 0.18526607487011215;
    msg.end_z = 0.8018420729549001;
    msg.end_z_units = 129U;
    msg.lradius = 0.5039838126087988;
    msg.flags = 47U;
    msg.x = 0.9371367579161546;
    msg.y = 0.5918175055236714;
    msg.z = 0.6519360297550616;
    msg.vx = 0.07532861437316074;
    msg.vy = 0.596597279055341;
    msg.vz = 0.7468499959896313;
    msg.course_error = 0.9541535161945315;
    msg.eta = 19993U;

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
    msg.setTimeStamp(0.09584280886876151);
    msg.setSource(55800U);
    msg.setSourceEntity(207U);
    msg.setDestination(28754U);
    msg.setDestinationEntity(49U);
    msg.path_ref = 2639585600U;
    msg.start_lat = 0.595184638968324;
    msg.start_lon = 0.34204721106818814;
    msg.start_z = 0.04909086927536066;
    msg.start_z_units = 53U;
    msg.end_lat = 0.5643990466819481;
    msg.end_lon = 0.7842091943130535;
    msg.end_z = 0.1917924127303542;
    msg.end_z_units = 174U;
    msg.lradius = 0.5432381839056032;
    msg.flags = 182U;
    msg.x = 0.059091836888502836;
    msg.y = 0.4157296772936304;
    msg.z = 0.6493027006346275;
    msg.vx = 0.9520456478148346;
    msg.vy = 0.04238699101123922;
    msg.vz = 0.8592230897775667;
    msg.course_error = 0.9710928579793462;
    msg.eta = 39890U;

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
    msg.setTimeStamp(0.9497402251918181);
    msg.setSource(51461U);
    msg.setSourceEntity(164U);
    msg.setDestination(21417U);
    msg.setDestinationEntity(175U);
    msg.k = 0.21966970132553088;
    msg.m = 0.6632568388046368;
    msg.n = 0.8797020276199402;

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
    msg.setTimeStamp(0.621262581331913);
    msg.setSource(32085U);
    msg.setSourceEntity(244U);
    msg.setDestination(20836U);
    msg.setDestinationEntity(116U);
    msg.k = 0.8778860657755418;
    msg.m = 0.19237903601472994;
    msg.n = 0.242435616182346;

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
    msg.setTimeStamp(0.9016865018081124);
    msg.setSource(54404U);
    msg.setSourceEntity(54U);
    msg.setDestination(8140U);
    msg.setDestinationEntity(134U);
    msg.k = 0.92313557446819;
    msg.m = 0.9537214210738558;
    msg.n = 0.9588605964228388;

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
    msg.setTimeStamp(0.5186971112290093);
    msg.setSource(36244U);
    msg.setSourceEntity(149U);
    msg.setDestination(39910U);
    msg.setDestinationEntity(246U);
    msg.p = 0.7946854882038047;
    msg.i = 0.26966779243863204;
    msg.d = 0.487887578447991;
    msg.a = 0.6930651021087861;

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
    msg.setTimeStamp(0.6273158729424968);
    msg.setSource(50832U);
    msg.setSourceEntity(14U);
    msg.setDestination(19982U);
    msg.setDestinationEntity(107U);
    msg.p = 0.6846772903603586;
    msg.i = 0.8351826013911827;
    msg.d = 0.1304357261353014;
    msg.a = 0.6338253565336243;

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
    msg.setTimeStamp(0.08433904530369929);
    msg.setSource(48813U);
    msg.setSourceEntity(169U);
    msg.setDestination(21359U);
    msg.setDestinationEntity(193U);
    msg.p = 0.9924540588229658;
    msg.i = 0.8166251435436168;
    msg.d = 0.2484921544040345;
    msg.a = 0.5175698027573385;

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
    msg.setTimeStamp(0.5447555695185413);
    msg.setSource(15605U);
    msg.setSourceEntity(73U);
    msg.setDestination(44732U);
    msg.setDestinationEntity(180U);
    msg.op = 150U;

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
    msg.setTimeStamp(0.215523458251067);
    msg.setSource(17100U);
    msg.setSourceEntity(45U);
    msg.setDestination(61973U);
    msg.setDestinationEntity(156U);
    msg.op = 1U;

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
    msg.setTimeStamp(0.49777001926872166);
    msg.setSource(8786U);
    msg.setSourceEntity(216U);
    msg.setDestination(7968U);
    msg.setDestinationEntity(87U);
    msg.op = 173U;

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
    msg.setTimeStamp(0.6141890427903985);
    msg.setSource(41144U);
    msg.setSourceEntity(191U);
    msg.setDestination(43179U);
    msg.setDestinationEntity(45U);
    msg.plan_ref = 2994989321U;
    msg.id.assign("OMZEKNAJSFUQROAEYDNZLTTZNUJLJRJXCEPPAHIHGYQJVMQWTPCSULMSMVXVNWSKMYPWWXIGNAKCOGVTSHLSEVVBCYIDIEMAHBXGPWDJRQWHSXCBERDFKCEZWPFGHJBFRWILAYXUGWGMFTZNOKCRYFSTDPOFUNRXO");
    msg.memento.assign("XIYEDQLKHHFSVXWELFEOIIKMCMNQHSBFSNGKQFABLKYHOPKJQHDDARXAYNYWMTMMSXPGVIWFUYHOKYUNIGUQMZFTWWJOTRBSUJVIMEAKOGOFJRBZTSSTDEKNACTCYIEZUWNHYHRJUVRAQIXUZDJCHMRSGNVQBRXZPXVCYVCFCEQPDOPLAWBAGJSQULGZBWBLVQXPMOXPLKRJJVZEOORCMEPPTAZSCTXPIFDLR");
    msg.timeout = 36919U;
    msg.lat = 0.8777353449636738;
    msg.lon = 0.1578012406440935;
    msg.z = 0.5071857841597021;
    msg.z_units = 189U;
    msg.speed = 0.09406016573543641;
    msg.speed_units = 238U;
    msg.roll = 0.09536036831307904;
    msg.pitch = 0.9573438644419549;
    msg.yaw = 0.19761430930311186;
    msg.custom.assign("EXJKWYHIHUWPYTKRJAKCTTSRCDDBFSLGNTNDDEVYXSZSBNIRZNDHDCYFBLWGQPQRXUFUSPOOYEMIOOLBAQHNJWMRVIBEVZRPBZOFXCJZKFXLSALEWAVUQWZQCHEEMRHJQQLSBOJIYSYOKYHUZRKTMCJIFFKGZVMOUOTWXEIUQAKOKJTVYPRGTPVWANFAACLIWLVVPKTHGCDDUXAAC");

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
    msg.setTimeStamp(0.3026393187896791);
    msg.setSource(52692U);
    msg.setSourceEntity(205U);
    msg.setDestination(965U);
    msg.setDestinationEntity(126U);
    msg.plan_ref = 1615421534U;
    msg.id.assign("KJYJQPGPQTKKPAHEMIBCVVHKUNZEPWUCVACFBXQMJABXPQGYRAIRDQZLJBBTBUBCKDDMYGAZLARLBIXEVNYNTMGPVJAYLKTEXQFKYLMNEQRHVMFGWWSTDKKJGLZKYIRXEZJUTNWOEOOQANJHFSCZJIOVLHSWTZHOFWHDNRFESLRZXSOPRVSW");
    msg.memento.assign("HSXPJTXPXGTFZCRKYNHKBAKNVZNGBAAKCNSUIVLJEEVARERIGOWXCUMOTEQKFWOKDZDTQRZZYUVXFLNCOGNBXVLWTDQFVFHGVMCAEDDZJSCBWUYERORPKFWGNGQHRUOWDSSMQDMJPKZLIIYLXTOQOQJKPUTSAMYDAPTADBVEWHLJGIMMSLUFCAXBJQURDIJNHLZCVWBWBVPHKWIRSLETIUB");
    msg.timeout = 34207U;
    msg.lat = 0.5418218203213025;
    msg.lon = 0.977362983987595;
    msg.z = 0.43088647256156154;
    msg.z_units = 219U;
    msg.speed = 0.2881822948941135;
    msg.speed_units = 188U;
    msg.roll = 0.21519078564988647;
    msg.pitch = 0.400821943819359;
    msg.yaw = 0.5336406186893662;
    msg.custom.assign("ZCTIBTFBXAELJOFOYQDGHQHLQIRKCNEKGJLSRPIVROPUSTTIUDBKREAGWOAHHXQYLNQOCDGFNMTKVQFUXDQOMVVKQ");

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
    msg.setTimeStamp(0.2768221654146522);
    msg.setSource(46381U);
    msg.setSourceEntity(218U);
    msg.setDestination(54198U);
    msg.setDestinationEntity(100U);
    msg.plan_ref = 833607291U;
    msg.id.assign("RKHFYKWMCHJOECVAQXATKARSIZPMGGPVJQWZIWLMGJYKSOBLNFGJAVUYTWWYVGBNBUXROGPFUZDXBWEMDXXCHHKTIQVJNZSIPCPZLNDNTAMYELLYUUFQQMUIAPMRTICRMIKLVXKMSXEXQDKPUALEYXEUCWQDHSQGGOCDEVDTDETJPTUOHVSASBOSCRVBJEOFIFCOVHOB");
    msg.memento.assign("CASRMKOFYYMIQGFJBNQTGYEQQWCMOVNYTOGXBSVPVLAPOSZVPACKNRBJMLKXYLHEBBRKBWXDQIGIVXVVYXTDWJMAGMLKANNUPOREIUWJPHNLDFUUBDYZJWUFMSBISUSRGJTHKTNEWFRZZCJTHHFGCRWMJGXOXPUYBLZYCPQYROEWACCDQKCULIQZWJJTOVEDTXZQ");
    msg.timeout = 16957U;
    msg.lat = 0.15327388540414677;
    msg.lon = 0.08892769943388434;
    msg.z = 0.19726407393164735;
    msg.z_units = 5U;
    msg.speed = 0.08821064997705363;
    msg.speed_units = 170U;
    msg.roll = 0.8458896712620395;
    msg.pitch = 0.38549742183559677;
    msg.yaw = 0.4650519426572166;
    msg.custom.assign("QRFAUXZSXHZZSJJRDAZOTKQWEVOVKKLICIPC");

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
    msg.setTimeStamp(0.9439872595903651);
    msg.setSource(53791U);
    msg.setSourceEntity(31U);
    msg.setDestination(9865U);
    msg.setDestinationEntity(187U);
    msg.plan_ref = 2511927579U;
    msg.id.assign("IXSTNKKGXJGBWRGFMJYYDAOZSXTAJGYYCQINGFRPNBUOHFUCNFPWVNHLBOLKXBYLYIURNDQMSQALTCJXVEVVDAIOUBFUWIEADJBJROVWKWOMTGJGEJEPCJNFQHTZEDUMISDPLTCNBBXWGTLEYVQHZOFXZPHVPAZGMLHBADVPKMSRWZMMEOZFRRKQEICEPOGSIWCNJHIDITWEDVYHQTCNBXUMRRSSLPAQZXMKTLKAWQPAFZKYUV");
    msg.memento.assign("YERUTRPAXVBIRLAESFLZMNSEBUOYUPJYXRHAZHABDFRGALKHDMWHMNFBPNSCGVVXBEPVP");
    msg.timeout = 23003U;
    msg.lat = 0.5348187358618067;
    msg.lon = 0.27483702091908846;
    msg.z = 0.5510242019430149;
    msg.z_units = 188U;
    msg.speed = 0.945298648670356;
    msg.speed_units = 81U;
    msg.duration = 35778U;
    msg.radius = 0.06719390970933481;
    msg.flags = 24U;
    msg.custom.assign("XRHORMNKFIFEZCARBYGCFWJZKLSVLAHRUJBDWAARDTPHTXFHFOIYJUYYNZKVGVENTEGQXYNBNUEIMXQGJBJTIEBWDOEDYNQMXVAEOPAZRZXZFVACDDMVLEVJKJTIHUJQOVYKHMGMRLWNUALTSRZBDHJIFLYPIGLGNWUFSYOCXPLZGSPMKHYQHXVOQZOIBLCBWQWTESUKCQKWCWXAKGASSLSPVSEDOKUPGJTNPPOFFIMBDBUCHUMMTRCQI");

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
    msg.setTimeStamp(0.22711981141350324);
    msg.setSource(6094U);
    msg.setSourceEntity(210U);
    msg.setDestination(61473U);
    msg.setDestinationEntity(49U);
    msg.plan_ref = 3956364573U;
    msg.id.assign("YGRZEBSPATJYOWITHMYEVOBTIPXWYKHEOBNAIKEVSEBTQUDJMCHLJGVRGQZNBVNENOMPSDLNBQKORMYAPARUVXRUMKHZXXDIXNUIYMVKUTLCIHWXHMGKUXTQHVOEYMQJWCFCIFJVCGTJZCRDDPLKLFAQUBBMHFCYOPQGZYHDTPJBNMWCTQODPLFQIJVHLZWFCFZAAUFKXLAXISCUGFKSSPRWAUR");
    msg.memento.assign("FQXTSOLWUWMNITZOJJBIQNEFEXHFRXNCVTFRIERYMHZPZYZVPFJGSNVOYRIKAZWBRAMGUOBQVTQXYRWTPKHWWBMEZLIBDUIQQKRXKFIFXIUSWYMCYGGBPHSLRAVAWZLOGCYLUEEZGHUVAQWJVDIXEPSHEHKMNGJDASEAQVULQSOPHCAJSBCULBGYFVNNTCOOTCDPVIACFWUYXDTAZENMPJFDYDXBSPNXLGMKKTDODMMLNQGHJHOTRLCCDU");
    msg.timeout = 22030U;
    msg.lat = 0.9673939440910672;
    msg.lon = 0.5746989515884702;
    msg.z = 0.11165518791342133;
    msg.z_units = 66U;
    msg.speed = 0.3699961584065915;
    msg.speed_units = 247U;
    msg.duration = 46569U;
    msg.radius = 0.5868813505057268;
    msg.flags = 182U;
    msg.custom.assign("ZUMWMPUBOAROZAHVZRHJTFOKXIQNDOROUYXDHLDJKKHIUPUVJKSPMBLCJCDUTFGVPWQEVXGYXKVVKLLWESKPJRLHHTRLYYBAINEENAFEKYJZTDCNKFNYWUMWNQZFNBULSVATMQXWLMCNVEDRAXTYGH");

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
    msg.setTimeStamp(0.6516931219888175);
    msg.setSource(37843U);
    msg.setSourceEntity(139U);
    msg.setDestination(25180U);
    msg.setDestinationEntity(199U);
    msg.plan_ref = 938965183U;
    msg.id.assign("UDFEBJIKSRKPSXDFWHIYLJVYGXHGUVPEDNDOLAYMKOGGOMOLDGJJNQOYQWQRZERZLPFLRZIRQJJJUKAYYYXWHRVNSOCXIURASEVJGSOZWOYFXINGLTTBKBJLTUXAMQSVBLKVUPEWQMCEPXKWYWDGZPNANNZTUKDMLJFYNGHCMUXTZQC");
    msg.memento.assign("SXQDCMKBNWNJLOIHZAORYWNGCYDRUAGMKWCEMVPNFZSYPUWIVSXJCDOUOCXVEJZPBVETGGHTCPGPBURUFLTLSPNLZOQJFDXGBYSHYMEZMYABRFKINOTUHAHBFVVNXJYWFKIZIXAFOXTOTDBUDTPXSQPZOZACQRTLWD");
    msg.timeout = 48359U;
    msg.lat = 0.31367720360066786;
    msg.lon = 0.2128434667824468;
    msg.z = 0.5501611799674987;
    msg.z_units = 229U;
    msg.speed = 0.588506026003896;
    msg.speed_units = 242U;
    msg.duration = 13327U;
    msg.radius = 0.1312329560151978;
    msg.flags = 77U;
    msg.custom.assign("LCHARZBVWVACGXTVIIKLFDNXRAHBMYTOSHMDTZNAYUPEWQWAJLUCDZUJKAESRYLHMXXBTQCEODFSKKJLQSPPMQMFRBIXYQBTVTKQITGDWQE");

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
    msg.setTimeStamp(0.39962284370077117);
    msg.setSource(17419U);
    msg.setSourceEntity(196U);
    msg.setDestination(12421U);
    msg.setDestinationEntity(175U);
    msg.plan_ref = 3733863093U;
    msg.id.assign("KPUGIVLSLLIAQJFWXAKVFFKBWTEQYRPHVVQGJOLXWNWNSYGKWAKDHLUHJBATTRKNVHFJBXRSFBZEVYDOXHMMTRONEHGCVCZGPUDAMPYCXZMQAXDZIUSOICYMJCEIRBPCDGNOYSXWZFADQMPARTPO");
    msg.memento.assign("PYVFUWBZSJKMZXYHTPGCOHOLNQTPAHNMXJPRXZJYVRACUFDBKITXNFKOVONOXEAMDJUISUQVWWAPSDGRIKYSDTXQLVAIJBMAWEPWBZCFVWYVRQZGUHTRILQMJNLSYRHUJQDKEXKPFIZEUENPGSCMJLFNCYZQQVWMUDCBMYOLSTOHTIELASCNFVYG");
    msg.custom.assign("XUINXRSXDSKERTZMWVEROJTEGHFWTHQJJTYIBWTDIGKFHLLGFFOVSTHXDAFEAFSPUVDYKYJEINAUNJETZMWLSACAAUCNXNRXBKCYMKHHIPOIXMUFDOMSUXCIOEMCVIOBBDHQTPRLWRLPFWVODYWSZQPRENNVZPPCPPGOZUEGRGYHBUJIKZVNXQSLOYADGNXMQQUBHTVQIGVCRNZKYLGZCD");

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
    msg.setTimeStamp(0.4826087979542433);
    msg.setSource(46871U);
    msg.setSourceEntity(85U);
    msg.setDestination(31730U);
    msg.setDestinationEntity(164U);
    msg.plan_ref = 2691094366U;
    msg.id.assign("NODRVLWQDTMURZQZSBLDSRILTVPCYZBGVGJAQKFKQVGMIESTNHNPHHPFUWKXPLDVJFZWAMBQBECRYVAGWLQKTWZGTSQYVAIWUDJPGLDUJTEWPEJXMUDRUXRYLMNADOTESQODMRX");
    msg.memento.assign("MJFWGACPIQAHUCY");
    msg.custom.assign("OBOPRLMQDRANSGEJDUCALRSIMLZQUUMGDTWOXHIMEFKVCHESVCUPDIPLAZTRKHWEFEAZNQONVWXMRENYTPSXBDLLCAPJPOAZZRQPVYCHFTYSEGYDXJWBHZCVYNEISSGTMWAYLNBKASUVFOMZXYISXCQBOGMLV");

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
    msg.setTimeStamp(0.5130997859348948);
    msg.setSource(53816U);
    msg.setSourceEntity(110U);
    msg.setDestination(37584U);
    msg.setDestinationEntity(204U);
    msg.plan_ref = 4183148978U;
    msg.id.assign("IIPXLYEEOAOBRRJDVSPKFNGCWVIFGHBMMQTELGUEUXORJQTZVPRMFADZZVJZSYGTSLNBJHBDQPVKIDCLHTZBXWRJTNOVXFNVWDYNLSVFFHMHRQDUYFQQSKXKJOGUSPBZPACHLMMVFGEINWFWTRAWOOJOIKQHYSPAR");
    msg.memento.assign("DNYQPUJEELFZDNFUZBOVXGDTKADQLSGGKOHYJBEHEHYHWMCLZRSASMJAKPANPLQCVRNKQPUHWFUFFTZDGQXTSXJGNZABXHUIYRSTJYPSTNRQGLURKBIZTMRSXFQPDILVCBGLDMLZXBWAQMCUWICSIQCHPIUJGHQHANCIVZBVOPTWKAPM");
    msg.custom.assign("KGOXHVFYBRBUZIYQLWGSWYNEQVDFULCLXECEHXRUZVBIJDNOPAWSJEAMBZFKPCBVFDJJGNKQOMUIIPWOTIUOMHAFRRPUMTODYDZVQJQRBENXCPGHAOECVTGLWDQFPCTJNASHKLSRGNRDHPVQGMSMJLWZWDBGUBNIENLAMRYMXS");

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
    msg.setTimeStamp(0.4456461955012405);
    msg.setSource(64440U);
    msg.setSourceEntity(209U);
    msg.setDestination(54383U);
    msg.setDestinationEntity(96U);
    msg.plan_ref = 505052932U;
    msg.id.assign("VJPSAGSJXWDAOTXZKKBJPOTVHQWJYULKKBUVRMJNDRDDPRJFTJMWAXHHO");
    msg.memento.assign("ZAUQGWCQQSOFBMBEGLINLZQWFYBXVRYAYJWNKNFRLQNMZMTVMCNIMFLTKHEBIMXQOOAVCJAVWIGFPPCYKUGBHJSCRGGHLRVXUVFD");
    msg.timeout = 44990U;
    msg.lat = 0.9247726700476544;
    msg.lon = 0.8899991836080079;
    msg.z = 0.145829664223751;
    msg.z_units = 219U;
    msg.duration = 10608U;
    msg.speed = 0.5162195844138212;
    msg.speed_units = 17U;
    msg.type = 125U;
    msg.radius = 0.08659665511874626;
    msg.length = 0.9128741243605984;
    msg.bearing = 0.32087084834666435;
    msg.direction = 96U;
    msg.custom.assign("DCJYDGOXXRDJPYAIJYNCQEVFTZRWDYCQVHXRJZEITMEBFWMEFOLAZTGPUJFTLRCPNOFXPSJWUUDWWKZSQENGHMTHHFYHKKYSIQNKPSSCALRSEGQOTCMIPJKUMIUAUBMSDHU");

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
    msg.setTimeStamp(0.4652814729907888);
    msg.setSource(19477U);
    msg.setSourceEntity(167U);
    msg.setDestination(61068U);
    msg.setDestinationEntity(172U);
    msg.plan_ref = 3085673398U;
    msg.id.assign("UBGDIRJNZPAFLSMZJDDNRZSWQWXKNWMSYSVKORUKKUZLHXPRKBCYMYZXEWCTJUFTXQNTZSMTDE");
    msg.memento.assign("EZJWRPWUBONUVTJFWWDKHRBEMTSTXXUMTJMQSAVNINKKQKQGPUFJMQKVEDZDDYJITLKVEQAUUAZSCJLNDZVODGYABKRFNILBRXDYVRCCYLKPPRHJAIWPMLNCMHLVSDTGZHOZFGXCAIDGCUEMLZQNOGOZBXFFQKYNYBEWASXBJTIFZXBGPIDVROIXAGPLYHNTMESSWBPKEMHRONVQYUCXWSAVJWAYCTQRGHTEFHBHPUYQXL");
    msg.timeout = 12560U;
    msg.lat = 0.04519610173994448;
    msg.lon = 0.7340336016916571;
    msg.z = 0.5967641912592477;
    msg.z_units = 117U;
    msg.duration = 48278U;
    msg.speed = 0.8604441187531284;
    msg.speed_units = 8U;
    msg.type = 142U;
    msg.radius = 0.8594786432670088;
    msg.length = 0.6262798532690977;
    msg.bearing = 0.05699293205414757;
    msg.direction = 207U;
    msg.custom.assign("JLIEMSHMFZLEGLRPSMOSZBRZHBPGLKAERGKLHNASQLNUTEPMNNBVPYDDRI");

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
    msg.setTimeStamp(0.05884797570046807);
    msg.setSource(22331U);
    msg.setSourceEntity(19U);
    msg.setDestination(36514U);
    msg.setDestinationEntity(211U);
    msg.plan_ref = 3303564038U;
    msg.id.assign("OSLZRUEBMQRUGUIBYFNVAGXWOLIHKTQEHIBERZPLVKHPNBNRTDAFKAMQTNHMJATDJOSIXTXWJEVUEMUVZTPQZCNGTB");
    msg.memento.assign("RHHRGXWYTVGKNBZYEKAEGVOSBYSDJXPHDVNUFLOELCDKWBPDTEIWFSJFCEM");
    msg.timeout = 56031U;
    msg.lat = 0.6099892146246342;
    msg.lon = 0.6774970139530431;
    msg.z = 0.7891810193773946;
    msg.z_units = 87U;
    msg.duration = 49809U;
    msg.speed = 0.06357139467246842;
    msg.speed_units = 111U;
    msg.type = 50U;
    msg.radius = 0.41695558958885914;
    msg.length = 0.06059759905796891;
    msg.bearing = 0.9290142267935612;
    msg.direction = 228U;
    msg.custom.assign("SGBJCIZJQWCJBAHYDTCTVXZCZXTOKPKGNRLBHZUCDQGPIJPVUFGVRSMFDMIUYSRLAUXRZAYONVXYKGWOZAEDNJDDTPYXHOEUWLNUCGQZWERWINZKETDSIPQMQBVFFFEMXLTQJEJQSPPWZWNMOJQXVCXUNCJYGBRFNHKGLKCRSEOMFPMAHFCSHFJATI");

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
    msg.setTimeStamp(0.8666266453662843);
    msg.setSource(65139U);
    msg.setSourceEntity(232U);
    msg.setDestination(1862U);
    msg.setDestinationEntity(30U);
    msg.plan_ref = 3759100427U;
    msg.id.assign("NKIQMTBCPZKEWZJXQQVOVIDYSXERQVTZEGMBDRBBLFWGOCDPDOPMZRVVEKSLKLYNJMRALUXMSZUCLOITPZOCSJHCYADBAGNFXBZYZDQGLDWJXSHKCWIUUPPTGDNYMXBTCAUJWPDBIZUYQHKGQNRGSQFSGVEOKFHPLKTEEUJMIEIVHVBLGTHUOZSRARJWSHAGBIIKFRYUDWRFOWPSACXLTIKNHNVOHPMUMJJFQRFCJFNX");
    msg.memento.assign("ROEYFEELFZDZYLTBVYLIKGJEOQYXMUPTZQKGXAHVXPZQNMPSWHNDNUVVKFVCTQQAWRLQOEISDGPTFBYDLTFEBWTQAFZMVCZAKZWSUIKIPMORQITNCCJSXXHUESMRDMJZKMSPUSIWNHRKRZGJNPKDHCGNGHPWEBRSPJDXLNYRHBCZXTAWRDGVBOXQ");
    msg.duration = 50829U;
    msg.custom.assign("HQCLYQTFTPLTWHDXYBZLVTCJDGYBUFFQJTDBAEKDNRYIUXXHAORIJKXOAVCTQAECAYPXPBVELOKZZGSPVEZYHHMZVVHGNO");

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
    msg.setTimeStamp(0.154431626265915);
    msg.setSource(15259U);
    msg.setSourceEntity(252U);
    msg.setDestination(50647U);
    msg.setDestinationEntity(134U);
    msg.plan_ref = 855428595U;
    msg.id.assign("OHZXZWFFPSHPCTDSKZIHCNPGLATEVYXLKVBXRKRXTPVJJHAGJAXTNWTHUFCOBENPBFUQMJQJQBAFEUPMBYIBYVWEUDVXANLLWQNOJYEVMSQZCPMGWRCVZRZEAUISWGMMSTVOLDOXDCFALQFYVKQUAHSHBRWMAYSGLWWKGSQDKRURCIGGYFEBTQFHOBTMUFZPPDEEIRDGKOALBTDKXLJGKCMOTOIVMXUXEYWN");
    msg.memento.assign("MFEHAKHMIYMXFIMTABOWMFJBYKKZCKVPNCYTBIYRLCYDZJXLKLSLSJBEJMDPUGONWOEJBDRJPNQEKWDQTTBDSQVQMZBNVLYSU");
    msg.duration = 15858U;
    msg.custom.assign("OYZMBITXMYIRQWHUXZVGLSJDZWWCOGHCQAKGIZZPVDUDRHSPFTMZJELXETALZUGVXDXANNSFJYPKBJHQGOORKFRTUXHNNBYTWJRMQOTSQXMMPOMVMUWENV");

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
    msg.setTimeStamp(0.6201524059784863);
    msg.setSource(33117U);
    msg.setSourceEntity(195U);
    msg.setDestination(42857U);
    msg.setDestinationEntity(4U);
    msg.plan_ref = 1744763016U;
    msg.id.assign("SPTFQFHYRWPGAZUCOFIBSMWIPLFRUTCKZHWXEVAPOQKGXYLBTMTPZPYJRZASUKZRMSMRDOBYPMJPBFCMNHTQSDKEENISNLOCAZUESY");
    msg.memento.assign("UBKHTXAJFOQZBPPOLYLZASHPFJSCGXQPEFBNDPTMKDMXNJNLWATUODKCHNOCKWKMKJWVXVAFLBWZOIHRMCF");
    msg.duration = 6485U;
    msg.custom.assign("JNTASSTAFQOZUHVAZPRQQDJIYQOELREMSHZFCDFLVCYLRYXTTMBHLMZCWIVUFBHUDDNIDUZEANGETJHCFFODPBSBRHNCGFQWBVXSBIBMGXKSADLZXTMWGKPNWGMZNVJVTXQRSJQKIJXZTAMPFIFSKTJPECAYLVYNWVXGBWHKRLIGOZNUJBXWRPDDLNSPJTEOEVAORUHCYJKKPUGXCQIKOIQSOYKPUIEHKYRMMGYWQYLHUOURDZE");

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
    msg.setTimeStamp(0.18152697693150988);
    msg.setSource(62838U);
    msg.setSourceEntity(77U);
    msg.setDestination(59931U);
    msg.setDestinationEntity(189U);
    msg.plan_ref = 490780352U;
    msg.id.assign("PTZFHPELQFMZJLONZTSQMKRRONFBBJTCHAHVHUKFAGMSMYEEGRDZGGZTCFENNUYYAMMTOXOCXDDWYSBOXUZIQNWOKJHBLNLUVLREFVAQKCNWJRWAQVGPVSQAJXISLIPEWNYYIEDDFZWIRYSHEGTIMCRWBDUFHTAFKLQBUOKZYJRSBXDXMLMTVJNSLVBVGHQWPGKIWSKRXIFOUPUBPONCCD");
    msg.memento.assign("OQUATMBDCPJEABYBVZOGZJXCCZZSPOQIKOIFWWZMDNGTKMIQXCNHGQRITQMNFHWSJGRUOGPHWLSUGXRYFBVVEJHULPRDEPNCSKMAAXTWNBLPOWMAOEVLXLSXDIYAVTRP");
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.9773583383219572;
    msg.control.set(tmp_msg_0);
    msg.duration = 25883U;
    msg.custom.assign("JJXVTLTIKUEUKAEHDBYGFBXREZVCQGOGUERZRYDCWRALUCSSJOGDWSAZNFURQYOWSLFYTQFZTLQJXFMBGLKRAXOFUEMAMAKJOPLVPJCIWYFBNHQHNARSYPQPKVYXVSWRSNBLITBHXWEEJG");

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
    msg.setTimeStamp(0.18798105059686243);
    msg.setSource(54179U);
    msg.setSourceEntity(10U);
    msg.setDestination(52735U);
    msg.setDestinationEntity(150U);
    msg.plan_ref = 261716921U;
    msg.id.assign("RFTWZHYHUGXPNOFPVBACQBVRUEGKRWFQNPZGEBBWIYBLAVHOOSFJRGJLKDUXDZCDEMDXTHMZWTLE");
    msg.memento.assign("TLXSQGVQXLRLCTFRIKXPMUDKIBHXASHKDVNRVPKVHZOWHCADIFMJPDCYVWBYTJCWOLWVIZITS");
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 952277439U;
    tmp_msg_0.start_lat = 0.8057009890352611;
    tmp_msg_0.start_lon = 0.6305726078862608;
    tmp_msg_0.start_z = 0.9751064515635733;
    tmp_msg_0.start_z_units = 94U;
    tmp_msg_0.end_lat = 0.7528887897522978;
    tmp_msg_0.end_lon = 0.23563963715376635;
    tmp_msg_0.end_z = 0.9317180568234011;
    tmp_msg_0.end_z_units = 187U;
    tmp_msg_0.speed = 0.4995825995877029;
    tmp_msg_0.speed_units = 176U;
    tmp_msg_0.lradius = 0.9240589583754968;
    tmp_msg_0.flags = 84U;
    msg.control.set(tmp_msg_0);
    msg.duration = 12630U;
    msg.custom.assign("AXKWHZFSTPIGITCEUIGBPZAYTEHRNHWFGAJFKWIZUZVMGGZNFECAGLWSQRQUAYFKQEVHBSBDNMVX");

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
    msg.setTimeStamp(0.4014557806897947);
    msg.setSource(16786U);
    msg.setSourceEntity(177U);
    msg.setDestination(28666U);
    msg.setDestinationEntity(44U);
    msg.plan_ref = 4191739639U;
    msg.id.assign("BMGHOAJJEGZRTAEUFLFQLDGLVWYJSTAXDQXPFRASLOIYNIVQDYKUEZCKCVTHIVHXORWWVWUAHXAYMIRRIGTKXBBIXUVNJAFQOVUBWOAULXKPDZFIPQQYHQLWF");
    msg.memento.assign("WPTIQXNGDQMTYNHGUXVTPKMEPHWODSMNABOSMGGJJYWCWWDPBEFMLZQOLTFHYXMXFMUFMMISESOLYKAUTOOTQKJFGCRNAOVYYDI");
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.47669725168484967;
    msg.control.set(tmp_msg_0);
    msg.duration = 20598U;
    msg.custom.assign("ZVSDGFFTKQIIQELAVOQUDDMUBNKWMTVQCAEFMCFGCZZHCHQBJOFHSUNRRVUPGGEDBPKXCWYMTLDLKIYEYCRNEZRKOFBIZUJA");

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
    msg.setTimeStamp(0.20849001399841027);
    msg.setSource(30257U);
    msg.setSourceEntity(143U);
    msg.setDestination(13858U);
    msg.setDestinationEntity(86U);
    msg.plan_ref = 3259029878U;
    msg.id.assign("GAVHLBXXLFEIMYGZURTGWTVMPVAMCTPJIYHQSXCXQNQGZYBWCKAFCYRSEPYCKRZCMHTMVXLJVKBQIVKNXTFFJLHGJGFCYNHHTQWKDEMWXKDBPUIBWVPEZRONSOYLRHPAHVSNVKRQUZNMMSZSRWLUBYMRKNEAJTNENI");
    msg.memento.assign("FKDLLWHEHXQBUSAVMCMTOTESBZIDNQVCNSWLZDRTMUUKLVAUBSEWTUBZHYBGMWSJDJSPRZQYXGLVGKYHFTCGDYRRMYATPRVXKIUQRLWRJBFGFZGRNKWOQHQNOQFCJSKAPYSNFJPFOYGMJZWTIOOYJUQVKNLPMGALUUXFACADIPDEXGXCPWJNXCWIFXNHRLQVAOZHCGTVHSWPXYXTJJRCDEANVIIEMDEOMHLOMZTNAEKPYBQDCIEOZBSUPHEF");
    msg.timeout = 46307U;
    msg.lat = 0.7691173408671995;
    msg.lon = 0.1898844043013349;
    msg.z = 0.5725477173796661;
    msg.z_units = 193U;
    msg.speed = 0.3377848952343667;
    msg.speed_units = 108U;
    msg.bearing = 0.08647868415370641;
    msg.cross_angle = 0.1299716729077256;
    msg.width = 0.6189865352697249;
    msg.length = 0.3479557624315044;
    msg.hstep = 0.16760146402854714;
    msg.coff = 161U;
    msg.alternation = 189U;
    msg.flags = 179U;
    msg.custom.assign("UMPPGVCHRKVIQEYODHJNKKTPHPHYQOPTDIDZTXAHAGLYFZIJSYDWRRHGSEFSOPVOWNRARYTXQWQWFFUQDCNHWBJEKCBUUIFKYLIVZJUVSAUCJKMVNVIUQQMJFURLNFZWSCGLUDOXFGACBYIXZUSPGPHIHZLMTTWMOCDANHLSDKRBZNVZXRYSTLAAGXOXODKNLWJSYTJOWJMOLFGQ");

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
    msg.setTimeStamp(0.7577348311088365);
    msg.setSource(21521U);
    msg.setSourceEntity(31U);
    msg.setDestination(13350U);
    msg.setDestinationEntity(196U);
    msg.plan_ref = 3969291643U;
    msg.id.assign("XDQPTDVAQFMTATQIJUQPWVIBABLDKBQDUGSJMZKXAXZTYJPSSEXGRQSCDADBUBFVZZLICEBYJGEHPNHRAHGJYFFIVYTTGVJMGRXQGXSNUODNPAGMRMELKXNQWSELHELFCOCKDRPXZNVRZEZCNKHWWRKSRPMCRLMQOYWTWNOOUHOMSNWTVWXOUPILEMCIFKOFIEFHKSOKNEPXCSABLWUHVUUAYRPBBJOGJVMZTYGTWLJHZNKD");
    msg.memento.assign("VKOUKZKLCTKIFZXQGYUBBNIWYWQXSOXSWGAOJIHKESUMHYYKDUYTRDPPKHDZFGIPYPQFDCMABZYVTJBBAQNFMWAYNZOVCPHADVAJSWMXECRHYPGSISWMQGNFZDFIFENBTXAZHQNSHCVZJOROCPIVYVUNELBSREQTVTLUXXLMJNA");
    msg.timeout = 365U;
    msg.lat = 0.6013977371613993;
    msg.lon = 0.9784603438470318;
    msg.z = 0.24745591912489384;
    msg.z_units = 43U;
    msg.speed = 0.9838593362685477;
    msg.speed_units = 18U;
    msg.bearing = 0.7513492077073429;
    msg.cross_angle = 0.47272235473224855;
    msg.width = 0.2174777871020417;
    msg.length = 0.3369020189586853;
    msg.hstep = 0.7691747750452615;
    msg.coff = 58U;
    msg.alternation = 173U;
    msg.flags = 199U;
    msg.custom.assign("SFOIYURJGEEHVJSJASBKQCIBMBQMXTHCMXJXOKFIWAEZWFOSQGYOLTMKWCZYHM");

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
    msg.setTimeStamp(0.07337917541898609);
    msg.setSource(16556U);
    msg.setSourceEntity(72U);
    msg.setDestination(314U);
    msg.setDestinationEntity(139U);
    msg.plan_ref = 1703668639U;
    msg.id.assign("HECJSLQVVAPYSJXDPWRZLURUQNAXIYCRIUFSBFOJTNGMHEUAGCQWIMFPGTRNOFFYDDQIWWNQTDAVVUEHZNBGINTCPBMSWGZISRJYZCUTBMOVBKZJBOIUZPXUPCQKYXLOFOYDVCYIKAXVZGGC");
    msg.memento.assign("AJQJRATLYELFRTKFESCGRL");
    msg.timeout = 10457U;
    msg.lat = 0.10104445460341327;
    msg.lon = 0.2741560920032222;
    msg.z = 0.45886927709346526;
    msg.z_units = 185U;
    msg.speed = 0.06615000119786962;
    msg.speed_units = 211U;
    msg.bearing = 0.46628877072324515;
    msg.cross_angle = 0.8641544654908659;
    msg.width = 0.8143545412627314;
    msg.length = 0.11467757617094876;
    msg.hstep = 0.5248998643087756;
    msg.coff = 231U;
    msg.alternation = 150U;
    msg.flags = 206U;
    msg.custom.assign("RZUYJSHJUNJCSTQPY");

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
    msg.setTimeStamp(0.5051766314227749);
    msg.setSource(40558U);
    msg.setSourceEntity(170U);
    msg.setDestination(10588U);
    msg.setDestinationEntity(38U);
    msg.plan_ref = 2681720972U;
    msg.id.assign("IBZJQEONYSXYWIKSMPVZAINALPHYPVGBNXFMDJXDGMXYOECVTZCFLBFRLZOHAABGXGDFRCSLQDQJFIIANFLDJQUOJMSTPPRTBZ");
    msg.memento.assign("CKMKNLCCUBANHNZRXOCPWWZZAFUNSQIYMTNUJSEKRNKOJ");
    msg.timeout = 29258U;
    msg.lat = 0.2746529019400976;
    msg.lon = 0.9821723001506146;
    msg.z = 0.9526159089770057;
    msg.z_units = 68U;
    msg.speed = 0.6058331881655056;
    msg.speed_units = 113U;
    msg.custom.assign("FMKNODFEOOJJVMDQLRPLUQZHWUPUPRKDBZBIQQFIWYCYWPMNJKGBHYFXRDYTZUUZBQGCBPHIXBSCPVMNEOZPXRVRRVNSZTRQOKQEBHKYXFHNCDATUARLCAMFJASMLJGTKJWGMLKKHMHHDIBLCH");

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
    msg.setTimeStamp(0.9322106068075247);
    msg.setSource(2388U);
    msg.setSourceEntity(254U);
    msg.setDestination(63494U);
    msg.setDestinationEntity(16U);
    msg.plan_ref = 1443252748U;
    msg.id.assign("KZQIETPIKBUOUILSXTDGHOPYSPVFNGGBDMGNPJWBATCSZLP");
    msg.memento.assign("PHNWMCODXLFFZSTVOBRHPREUISZLXTIKSBLQURFCFDKCBDSSQNKZKCTSBYLHWWPONQJTJLBHEMTPGXWNKPAISNGUEJTHWCPOZUXNVEUYYJGQZQNJKWKJZTDLZHPVEAXMYTKPVXVIADFIRHJBOADGESRRBFUAIYBRAH");
    msg.timeout = 4417U;
    msg.lat = 0.6266915746921792;
    msg.lon = 0.9580377861223749;
    msg.z = 0.7381573876201812;
    msg.z_units = 141U;
    msg.speed = 0.9548291273661347;
    msg.speed_units = 180U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.16883372482580605;
    tmp_msg_0.y = 0.06271611397305821;
    tmp_msg_0.z = 0.1976599469844481;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZNIHCCSOFCOYJQNFYBYDPIPFIKXNGECANZBXESSIXL");

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
    msg.setTimeStamp(0.4491464506154377);
    msg.setSource(52274U);
    msg.setSourceEntity(250U);
    msg.setDestination(51856U);
    msg.setDestinationEntity(123U);
    msg.plan_ref = 1468043401U;
    msg.id.assign("VIJHNXBEOCMCMZVNEBAKFRKBKDRFRMPMRXWOKIQEFJLGWGRTZLHRJXZNZSMFTKLMPQUPMJWFCYUBIKJNFWOUAOVLBXOHYUYHUQSTRLNLAASIVECVRLSSWTJ");
    msg.memento.assign("ZJBGBYUMOSQPONQEHCAWVLYAEDTSBONXSGDJXSFMYHGNPHMZMFYWVVCCHTOZEJPWQFKZ");
    msg.timeout = 2779U;
    msg.lat = 0.6840773024087716;
    msg.lon = 0.9635094997828717;
    msg.z = 0.6636943986097643;
    msg.z_units = 216U;
    msg.speed = 0.8763496431028227;
    msg.speed_units = 30U;
    msg.custom.assign("CKMVOXWXSJUJTDLNABSKRWMOVZIWNTHLWXTGCOKAMFWQZJNDFSUPYCYBNUCLSQFTDNOLRZGVERGXBNLEFQVIBUHVDDPGCASZOMIPXVBRPSGPYZFPJVERGKXBULLZIMRJWZDMPDJEYOOYMWHTBGNXEILFSCZJWVJIGGCQFQTNJREYLDKFRWEPQYOUEVAMUWUDBHYACZAQQPFZTEXOKTKHTPYISNUMKDJHSAQQEHM");

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
    msg.setTimeStamp(0.36128740914311586);
    msg.setSource(21109U);
    msg.setSourceEntity(239U);
    msg.setDestination(36912U);
    msg.setDestinationEntity(112U);
    msg.x = 0.6739304437875099;
    msg.y = 0.3230096423066987;
    msg.z = 0.8063887958106841;

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
    msg.setTimeStamp(0.04605981570218398);
    msg.setSource(53035U);
    msg.setSourceEntity(81U);
    msg.setDestination(10385U);
    msg.setDestinationEntity(32U);
    msg.x = 0.6913563001645536;
    msg.y = 0.7511058859393239;
    msg.z = 0.45930959444065955;

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
    msg.setTimeStamp(0.3996182867364252);
    msg.setSource(10804U);
    msg.setSourceEntity(208U);
    msg.setDestination(27813U);
    msg.setDestinationEntity(244U);
    msg.x = 0.5570108378106735;
    msg.y = 0.33673531348208063;
    msg.z = 0.6271360226443601;

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
    msg.setTimeStamp(0.8211762753818532);
    msg.setSource(28413U);
    msg.setSourceEntity(34U);
    msg.setDestination(38597U);
    msg.setDestinationEntity(51U);
    msg.plan_ref = 2378887650U;
    msg.id.assign("MVWMXXPMLEGBDGLQNCTLKYWJPSSZZIPNSIO");
    msg.memento.assign("GXGXSVLGRPBQPEQJMTWVWTJLIYKURQTLEJQFDQVHDLRXHBEAMLWZDDFIBPBNSCVYBVNUUDYVXNJEWTDFLWEZTAGONAJCNTCVUYIEVUPQOOYMQIDUAHYRILSXOSDWOSWKIFCAXRJPSGPZMMKSXSJXLUJNRRTZDITAXZZGZAUDIHKJHHQGPWRUNZCMCOBF");
    msg.timeout = 57379U;
    msg.lat = 0.4525886206272943;
    msg.lon = 0.3632371281991047;
    msg.z = 0.4109296619687688;
    msg.z_units = 134U;
    msg.amplitude = 0.1429165459864885;
    msg.pitch = 0.6109123041922575;
    msg.speed = 0.02494012928557343;
    msg.speed_units = 131U;
    msg.custom.assign("VSNSPXUKONHBWVTWJQDAHUIYQIFQTRYVXIKVKQYZRTOBYUMBQGQMSEQMUHNQDOLKPSJLAKOQBMWVWPAJTJGZSHTDTKXGBZDCXLHCCXMBEFCSAHIWVBZLYFGXTFEIRCZOAZXGOCZUXHKGDQCEMRRTZOEGNOSXVVCHKBIHDMGEJWEURNYKAFEMWBTAPHLGFNTIELUEYJZUMPAYXFFJBIVACNSLJDODRWPRRNKDSOFWSZDIUPLYIYMRLCPNWP");

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
    msg.setTimeStamp(0.9476758238076337);
    msg.setSource(8187U);
    msg.setSourceEntity(134U);
    msg.setDestination(13714U);
    msg.setDestinationEntity(75U);
    msg.plan_ref = 3125409524U;
    msg.id.assign("VGOABMHFLUZRDUMESEBWNYSMGBJKKXWOORTHBAHCJUEWFNCXDMYHZYNSSBFLRWJ");
    msg.memento.assign("ALHYKDOWGOFZBCUMMKLBTCIBTYABFNCRWINYAZHRHDMWFEYXN");
    msg.timeout = 29182U;
    msg.lat = 0.7206855173483814;
    msg.lon = 0.5017962876190565;
    msg.z = 0.3191916322406909;
    msg.z_units = 213U;
    msg.amplitude = 0.0931604157891408;
    msg.pitch = 0.8583164991563579;
    msg.speed = 0.31928519726528715;
    msg.speed_units = 144U;
    msg.custom.assign("GXENOSZJOGEPEAZLTJOVTQHMAWUHYYQADHYKIDQSSNKBOMRXQDHRWXYEQVNPYCNWMKVXOFUEVJRWZWTRBHT");

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
    msg.setTimeStamp(0.7999093352437912);
    msg.setSource(5410U);
    msg.setSourceEntity(160U);
    msg.setDestination(10653U);
    msg.setDestinationEntity(50U);
    msg.plan_ref = 2568046548U;
    msg.id.assign("ZZMBQPSOYPSRGIUKGZTGPWVOREDMTFJHJAFCCLXGCTTJERDXEQLRMXPIRRQACGPCPCOMINZKWNWQUQAGSFNQTYVUNZCMQELGEJADJENEKAUNZYAPSJPUCYDADOMNNZGDUBTFRPVMLLKPWILKVKVOWFYVVLNFHBTFUZXQNTSTSMBIZHWDHBOKDOUXHROEYWFIKYLSVBAMUKAXJCHMXEXSRVBXELBLBWZIBDYOJKQWIITSSUJQC");
    msg.memento.assign("QZDGZEDKHYMESPRUITRNDJOHSAAQRASQJSMPYZNAYPTQMOHZQRFCGOUNARHCZUJZTGAEFXLVPDWOJZVNGVNNQPZBCPPCVOQIMVDOBYNXLXWCAIWCCWYKYKSLZEMHFURFUTJZGMF");
    msg.timeout = 33629U;
    msg.lat = 0.05670941681688457;
    msg.lon = 0.5231077291115773;
    msg.z = 0.19300633935456746;
    msg.z_units = 83U;
    msg.amplitude = 0.44721829536732993;
    msg.pitch = 0.5970942814838243;
    msg.speed = 0.10560241181762753;
    msg.speed_units = 174U;
    msg.custom.assign("IJBYEBRKWSHPLXFUXHNGEQJHAQTYIKLVINMPURPBYTHKKXKUMGBDANUKFIXWTWNSQMABNPSCYVKRRFVZWDEFBTZCMHADOMMNYJBJZPZLWWZZOVTMBMNBXUDXRUCRTWUKIPITEGQEAKJBQOGIEQHMEIECFTSPUCLPWJDYVCHFOYOEYQGQVUQZKSUDSAJHPZSVSGOVWCVFOONGGX");

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
    msg.setTimeStamp(0.05802436810807421);
    msg.setSource(43661U);
    msg.setSourceEntity(127U);
    msg.setDestination(38861U);
    msg.setDestinationEntity(187U);

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
    msg.setTimeStamp(0.762527880766588);
    msg.setSource(15773U);
    msg.setSourceEntity(177U);
    msg.setDestination(12586U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.9283346627255957);
    msg.setSource(695U);
    msg.setSourceEntity(126U);
    msg.setDestination(5556U);
    msg.setDestinationEntity(37U);

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
    msg.setTimeStamp(0.23681063753953213);
    msg.setSource(13499U);
    msg.setSourceEntity(50U);
    msg.setDestination(45131U);
    msg.setDestinationEntity(158U);
    msg.plan_ref = 4048802265U;
    msg.id.assign("GJDUFAPFZCLOXMMAFCCFOPNOAEWLVHWGFRWNJ");
    msg.memento.assign("COCHKFVKDSHMABIDWDWGONIOZSNPZCBMRBXHEJLKQPLGYEHXJRZLDZVTWFHMNYWHAYETLBPFDZ");
    msg.lat = 0.7111773509144448;
    msg.lon = 0.9197972803692452;
    msg.z = 0.08933568519203172;
    msg.z_units = 76U;
    msg.radius = 0.6707566655473135;
    msg.duration = 36026U;
    msg.speed = 0.6656988976778146;
    msg.speed_units = 191U;
    msg.custom.assign("MKBBJABQCURGNHVISEHYUKOWPSMVXJHESRPJPYAGYBSLKQCRKVZKAYHHEATTPCDSTJIKKRAHDCZEQMOARKJZZDSVITUVCGXWRFSFIWWDFMWUYOUMEEUJFGOMYDFYMJGBFOPXONVLWTCVSBPBBHRPJMQTXNJYE");

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
    msg.setTimeStamp(0.9129187205580434);
    msg.setSource(38242U);
    msg.setSourceEntity(18U);
    msg.setDestination(55749U);
    msg.setDestinationEntity(111U);
    msg.plan_ref = 2431908704U;
    msg.id.assign("CSQLJSBKWHWON");
    msg.memento.assign("AQFQLQRFBVHFETOWCILQMMZYLFRWTUCRRUGEYVFJRXKLLITVNSDBZIHTLHPTHNSWGZUQOESPFXSWGNVPITZXGAPSZWMJKLILCBMXAJXBJVTXQDZIWKIBQNEICWMJDCTCQEDLKBGJAONEOPROUKRYPSFKGZRGYDUQIUJQEZDAEMJKSCAXSMHBFMCWYNWXPYGKFNHVAVADZYBBNDXAOVHJHBDUNHUPKJASKUDLGUOOMM");
    msg.lat = 0.24551343282263838;
    msg.lon = 0.6059839161387708;
    msg.z = 0.2104266963731911;
    msg.z_units = 90U;
    msg.radius = 0.01799119349113054;
    msg.duration = 25922U;
    msg.speed = 0.4088747325216757;
    msg.speed_units = 204U;
    msg.custom.assign("BJBEOACHPKHPZQXHVZDNDEIXIPJRWDVDAYKHRIGNQWTOEGCPUVMAEAUSYLDCXNDYFRKBFWNMTFBQUOIEQLYCQXWFNJOO");

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
    msg.setTimeStamp(0.5457228100960568);
    msg.setSource(36887U);
    msg.setSourceEntity(13U);
    msg.setDestination(31079U);
    msg.setDestinationEntity(230U);
    msg.plan_ref = 452939206U;
    msg.id.assign("YUAENIFKQIIOWPHEPMXMBRBEVMHRLGWOJVHUBNKSWFCVNIKSXCVKODEOOWNHANCVCCQIXQJNQSYVEAPOJQYSTDBZTMGAHWKNAHNYXWRFLPTGBMBUMLGMNCPUEDCUGTFDUQANBGBZEJUYMJFRFIGBLYYIXZYGJEVCQIPFUDQZRYSYXJZDKORKWKQ");
    msg.memento.assign("RHAEODAONZLUKVPBTYUEHTDXXYPUIUSPGOTWBHFIZOTIIACJVMSFXGEXZYOSBOIXQVMXLYEBVDSHOARWRPPWOWJPCGWQJIJGKZSXLLF");
    msg.lat = 0.49400541151200117;
    msg.lon = 0.4503956420353009;
    msg.z = 0.8729508874214221;
    msg.z_units = 170U;
    msg.radius = 0.3859377371637446;
    msg.duration = 7653U;
    msg.speed = 0.3542224245453913;
    msg.speed_units = 204U;
    msg.custom.assign("STGAZHERRJVBTWIVQGZPPZUDOVJHFRSDFNXRSULTCIKRLYCCVYNOOBHYHCDZCAZKXGWSXKTFEZDXDSFBQGPSXKNIZZPWFAKXYJAFFAPIIEGWWXCEEMGXMIZYSUWUPTSSINQMUEJQMLBQCGUHMQOWDNMTQNKAVFFVNMLVREQJDBIYOYYLPTXTHAVDBUCRUOGMIVE");

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
    msg.setTimeStamp(0.5747671209196947);
    msg.setSource(21348U);
    msg.setSourceEntity(143U);
    msg.setDestination(17576U);
    msg.setDestinationEntity(33U);
    msg.plan_ref = 3169781102U;
    msg.id.assign("FOKAUJLGBOEQFGAXJAPQSGVLNVWQWVSZVFLENNLJJUNSHBHVFJDXRPPEYXEMKLRATUAMTAXSEOSVBOLEXZZFDOQTHHYICGSJTNGZOBXFPTOHTIJZBMYOJXQRRLNUURUZXJHYPDKQWDUHCBPKKKRNCHGCQKNMLKJMMIERDZVQLWUUFFTIQZYIFUKHPIPEYADKNLCIXMCDEGHQBCPOTRVGVWWIMGBAOISNVIYZWY");
    msg.memento.assign("NQDJOJBOATFRZZRRHHOIPAAEMDAPWHDPMJBYMOIQOPUWWZQEEHAAIXBXDCJSLUZUSZLNLCVYUAJPV");
    msg.timeout = 2496U;
    msg.flags = 87U;
    msg.lat = 0.25993377028953846;
    msg.lon = 0.3895957362022303;
    msg.start_z = 0.17454008064498805;
    msg.start_z_units = 179U;
    msg.end_z = 0.40839258800426337;
    msg.end_z_units = 99U;
    msg.radius = 0.4849758689038589;
    msg.speed = 0.6364657480785837;
    msg.speed_units = 130U;
    msg.custom.assign("URWHSTVIDDLPISCTLFYBHLKRQEOBYOMQAJKOTVPWYBHW");

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
    msg.setTimeStamp(0.7201849254723873);
    msg.setSource(12140U);
    msg.setSourceEntity(46U);
    msg.setDestination(42990U);
    msg.setDestinationEntity(119U);
    msg.plan_ref = 1055557033U;
    msg.id.assign("UMMKTMXNURHHZNGETKVRXHGOPWEVWFIYEAUPEWLBHSYRJCF");
    msg.memento.assign("ITSQRGECFLUBG");
    msg.timeout = 61497U;
    msg.flags = 90U;
    msg.lat = 0.5558029068350907;
    msg.lon = 0.8769009730657362;
    msg.start_z = 0.7409207377131853;
    msg.start_z_units = 99U;
    msg.end_z = 0.6549732789191615;
    msg.end_z_units = 211U;
    msg.radius = 0.7739590803236253;
    msg.speed = 0.4261440832071346;
    msg.speed_units = 204U;
    msg.custom.assign("TQFCBXDDFLESEUDHOBJXZLKPETCUJPFMYYREARXVPJCZIQPTGYVASKXLVHITOVJMAMQZHDSWNISXPGDUWWBAPCANFNCGKBQONHSJHRXOEJNPGWUSDEFUWOYSZSXMUMYZWVUODTYNXVDGYOEJLIVMUZCTZRGURCSTHAJZWFJYMTLBARVTGDNEIWBPOSMKXIQGDHGYYHLPBQAEPLFNVTWCQRFRKOOKJWIMKKFKQ");

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
    msg.setTimeStamp(0.35352915314878974);
    msg.setSource(59259U);
    msg.setSourceEntity(187U);
    msg.setDestination(7826U);
    msg.setDestinationEntity(124U);
    msg.plan_ref = 3761813320U;
    msg.id.assign("ZXDJUDBVTAJYEQDNKRIFORSBNCYERTEBDTUNGYMRFXLBALCMEHCWHEXPEKKUZIZGMRUOFBVBNIRFHKXQNWALTAHVIYYOVQHXXELLSPAZHJGLYVNPMUCVNEEQHKDOSPLYWCBVWGBMQXMWWOVJFCOIYQADVFTDGASGMZSFXRSWZIIZRUTKPTKOMHTZFFWPALCNPBXGUPJCMAOCZYRTPUSNDJQQJDLRCZJSDXKMQILGGOSQAPBVIKJKGOHYFUWU");
    msg.memento.assign("PTFTESQGRCYNBNMNLCHAGDHZEHFFDVOQWDCHWMGTODFTREMKYUIAUPJEOSDCKOFTLHGQKJTXQPWVFBAQKERRQJZSGLSBXZVHSLKDWXIBOPZVMFPURXCUZWSXZBCUVCDVBUIWKQGNYCNAJSBR");
    msg.timeout = 178U;
    msg.flags = 174U;
    msg.lat = 0.2843042076941701;
    msg.lon = 0.43095472879817676;
    msg.start_z = 0.8280942369285942;
    msg.start_z_units = 191U;
    msg.end_z = 0.6194236005325768;
    msg.end_z_units = 4U;
    msg.radius = 0.38886090993113964;
    msg.speed = 0.6794010063344543;
    msg.speed_units = 96U;
    msg.custom.assign("KDKTXUWXSKMPBOTCQSAQYXMCMZISUUXHBBUDHJFHQGGRSDETBDFRQJIVEDOCTYVHJVPEZGKFOMXXRLWAPEHWANCLENGQLMDIKXTYUVNKKJCFLSHYCTRRSSMTQNWAMSGQITOALCLLXPWRBEHMPEFLHZRMUGFAQDQPZDYBYUIORECKAVJPCOVYWYGYWNNJINPFFTTIZUOKUE");

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
    msg.setTimeStamp(0.014302273420684797);
    msg.setSource(61873U);
    msg.setSourceEntity(219U);
    msg.setDestination(29560U);
    msg.setDestinationEntity(36U);
    msg.plan_ref = 1734651926U;
    msg.id.assign("EIDMQKGUOXTFIVNFYRPQGXXPARIJMITQNYFAVEGAPVJTPJBVASQYMJHUTERWWXHQDWBIWUKMUHVXKOCALEUYMEWCZXWBBUFLGAEDRRAUDHLXHMXSQJQNYAMBDGCCAKQRMYLHUBUSBVSJLIJIBKFIPNZLLVMSCOGJOOWWQTZOPCTOGDMFXC");
    msg.memento.assign("HMRTBUKRDVGXBJOMUVRPZFVNIXRBJBDPYBVDKGCUWZYEETKVQSHCDIJGAFTRQRPJOXYLCTHEWXLGZWZBNFDKAFPWLMISWQNEMNQZYIMBIBJKANVBIONTEKMGSPUEEJUPIOLTFKTYCXILALLMYPQA");
    msg.timeout = 53289U;
    msg.lat = 0.7914046428715575;
    msg.lon = 0.4100171788836626;
    msg.z = 0.8444532771730103;
    msg.z_units = 74U;
    msg.speed = 0.29858525610515385;
    msg.speed_units = 187U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.36114192779927656;
    tmp_msg_0.y = 0.6018255023422746;
    tmp_msg_0.z = 0.5015469696077356;
    tmp_msg_0.t = 0.3681027495301257;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("MXGUJFMDQOYVOSBODWQCVIMVEEKYYAODUPEVDRQRPEKOTHHZRWKRZPZVALWILLAFKTDPJSOJAUCSNQDYXNTEZYWJGZFCLTFEHHDYVHXKRAPPGHLTARSQLLZXFWHJXXXRFPMNMHZOJICJBMZQGMT");

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
    msg.setTimeStamp(0.6988036671672917);
    msg.setSource(13543U);
    msg.setSourceEntity(37U);
    msg.setDestination(38971U);
    msg.setDestinationEntity(36U);
    msg.plan_ref = 3678155513U;
    msg.id.assign("CLHETKFMGRBNIFSAIQJTQHPIJDEUHAXMDNZMADJRDRCGXJAWGPFVBOMFFPCZIPDLZNWLUPWKOSJSNZGQUOBKVBAVSVWGYWERTIIHRYLB");
    msg.memento.assign("NZHUIINFHQCLHDUJKKNIWSDWICKQEZURGBOIOVXYCXWTQCIUAONGJMUXVZYSWXYUEENVGAQLQBBODDFPGFRGXLKQTLTJZXVYXAZLPJHWIVEUDAFPFQXLAELPZSBT");
    msg.timeout = 51739U;
    msg.lat = 0.36431376469100196;
    msg.lon = 0.18605175847253697;
    msg.z = 0.7703115087311135;
    msg.z_units = 112U;
    msg.speed = 0.24070169682348275;
    msg.speed_units = 36U;
    msg.custom.assign("NGTOVYKDAUHAGNSWGLSMCULCXXXSDZRFXBAPWAEKFCSFWRETDSDEWIIUUZQPJXWPSCUJTLJFQHRGOLTRVBXCHCKGJGDLJLJAONKIINNRCPEUYEWAGZZIIZJEMYFHCBXEYRFHQDQNOKBMXYVVYBKTLINYD");

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
    msg.setTimeStamp(0.7676602370339455);
    msg.setSource(51300U);
    msg.setSourceEntity(61U);
    msg.setDestination(65436U);
    msg.setDestinationEntity(103U);
    msg.plan_ref = 544298396U;
    msg.id.assign("JCOBUIZCKTARKEGVBEESVBEAXXNIONMBVEYHXAOLJPZPROVSBSJPHIKVATUSYQGHCAUKDLCZOZTHDXDFKIELPLJRZQFZWKXWZFMHXQGYEHXOVGIJMCVJNRDLCNFQUUBTVWJQGOUDRYLERLGIPGBJFMIXIBIGWMLCNWSCGTXNHPAQDHYRQCFWLRT");
    msg.memento.assign("XBEMZSLXRMIWBIIVVTCPFAGXVVLPIXOJQKCKIOWBRXKIVQDRZEOGWYBGKSMYLYISJUMQCFOINBSESMXUYULTWJBNSZEQJOJE");
    msg.timeout = 41635U;
    msg.lat = 0.8283196567551195;
    msg.lon = 0.37349834516318015;
    msg.z = 0.9087020305233252;
    msg.z_units = 22U;
    msg.speed = 0.542021571742217;
    msg.speed_units = 0U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.3490009652841912;
    tmp_msg_0.y = 0.6082119655565406;
    tmp_msg_0.z = 0.20843614091948126;
    tmp_msg_0.t = 0.4319822636569417;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("THXHYPURBVMIEBFPSYZATSLYAEPAHJCTCBZHQVFNGMXLKMKRCXQQKCJXWPDTZPWRAOGUJUGDYRMEQFFWLWNJKKMGVKZFRYOUBNWLLDSXHJEFMYVSYZSUVFKTFODMNCLNIPBNLJWQVNFDDNGDAUGMAYAEIOTHKQU");

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
    msg.setTimeStamp(0.6212582887624631);
    msg.setSource(23457U);
    msg.setSourceEntity(149U);
    msg.setDestination(8168U);
    msg.setDestinationEntity(82U);
    msg.x = 0.031133748824723084;
    msg.y = 0.1325024651850717;
    msg.z = 0.3029394669895398;
    msg.t = 0.35806412577357616;

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
    msg.setTimeStamp(0.25716492722778295);
    msg.setSource(36476U);
    msg.setSourceEntity(126U);
    msg.setDestination(42425U);
    msg.setDestinationEntity(247U);
    msg.x = 0.550112905110202;
    msg.y = 0.6737434996940947;
    msg.z = 0.6777570473590299;
    msg.t = 0.9034857685734542;

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
    msg.setTimeStamp(0.9295023805528727);
    msg.setSource(7732U);
    msg.setSourceEntity(216U);
    msg.setDestination(39989U);
    msg.setDestinationEntity(102U);
    msg.x = 0.9469163448431022;
    msg.y = 0.4655677323292189;
    msg.z = 0.5638718156321436;
    msg.t = 0.7825452841528234;

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
    msg.setTimeStamp(0.4927629454609457);
    msg.setSource(63208U);
    msg.setSourceEntity(113U);
    msg.setDestination(45363U);
    msg.setDestinationEntity(113U);
    msg.plan_ref = 1451267185U;
    msg.id.assign("IEWLVWNYLRBBAYFHGZRHKNXBODD");
    msg.memento.assign("YVVHLUBOMJLXABLBJRCYSQLWKMDZIAHIAFVRRNVKPVGWLLHCJAZOVTEGCXBCRIXGLTMMLYCWFPRNYPZBIEATOSVUFSMCFEQUPPYQGGRZPEEPOWSIMFZZUUUEXYDRJJJUVHFBQVIYHXFNFNDNNDXJSJESHAGJGKGLPTQEXJAMDTOSOIDW");
    msg.timeout = 6525U;
    msg.name.assign("ETVYLPGUFUXORDEXPZYYTUSHBRBSCJBMRLXGVWFAHOBAWTZLDSMBKWRZMIDCEDVYYSYENGWPXOLNEFJKGEHIYIUBTHPIRQDAJCHPMGBPHOXSYAKPJCDHSLWEACARRFIJLXJWACSKTGWQFKCQOQTZOEOUKXUGZQIWKCVPVZVDIVB");
    msg.custom.assign("BHNMEJOMQYCHSMUUBQZLRTKKSYWWLFAAPRYTHPBCONSQVJQHQYPXOIKUVSEHINTMBSWVALDMMJWGJPVZLTLZRJANKNBOJUOPOFXTGANIEPPIWIRGTYDCIZRJADKDRLNGOFHGJRSKDCIYFOVFAHUYPFX");

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
    msg.setTimeStamp(0.8933943248146508);
    msg.setSource(13518U);
    msg.setSourceEntity(60U);
    msg.setDestination(43769U);
    msg.setDestinationEntity(31U);
    msg.plan_ref = 2215488935U;
    msg.id.assign("YAPHNUFSMYLKRJWEBEAWGGDEFL");
    msg.memento.assign("EFCNHKQYXUDYHSGMHFJPQSFBEMJZVUVEPYWQVKFZLNRAQGGQNNRUILXCCNPIPAEFBFUOXAZYAJKWMXFEHMXKERHUPKJRELCKWWAPWJLJMSXYHJLRBPDRJCOWGTBBOBRTSZSQPIZSVBZJQUKQMUSUYZMBHNMUHWOTDCSIJDEOVRTVRYLBPHQSPVTDZICVTDXNMTYYALDXALAGQODOVMA");
    msg.timeout = 53908U;
    msg.name.assign("OVCZPTQHMTHRSJQVOMQDMMXZRGTZBESIHSLBJPSKSOYWYFWHUHK");
    msg.custom.assign("XRYVEPVNUBGHSYSYBRULQDFXRBHYVIYPFNFUCULLDELYKOJRBPADJGTZBRLXAJLLYCCRSBZCKKMMFHJQHUBZEHJENNLQVOIAQUMZECUPQQZWOQXPPQFAGDAIPCWSAMVWFEMQIWEWTWIANFDZECMKCJHOMZCOYHJHGGXZMGBSVZINYIAGUAROAJHDDSHLTKMOFIUEWWRVWTRKECGQXKVUNGWSOPMJVPTN");

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
    msg.setTimeStamp(0.6392329351101156);
    msg.setSource(56023U);
    msg.setSourceEntity(96U);
    msg.setDestination(17282U);
    msg.setDestinationEntity(150U);
    msg.plan_ref = 989099761U;
    msg.id.assign("CYPQDMYZWRCZEYCXWUMSXXOSHVFVMIRZPUHDVZBLDRZKHQRPPWBJKABGLAAQWXWNJWUDMNVQYRJEYLRAKSNLHGMOVAGMWVSFSHIBATITKIDTFQOUTDZVXLIFJQIXVOBBQEEUXGRGGFPXEJKFPHZRAEINKXTFHCIQZCEZSJSSRTGMQCOBNAHA");
    msg.memento.assign("QPUECBYUYWSFFVQIGGOTTYKMSLNNKYRAEXOBNOWGCHHXAC");
    msg.timeout = 35265U;
    msg.name.assign("DNFPFEVBCKXTJWEACQQEEAJABRHOUDCPUDPVDDPQZSCTAGKFWYTSWGXCGKRQMNUMGTYLZFUOEEFTRSPSSDEOLSBKVTRFMGBHYOJZOYZ");
    msg.custom.assign("IECUQRNZEJBONPUBZEUVNXUSYBZIETGURMTEQKVJCEDRENWXOAPWTFTMLJSLCGSONIJZCQXRSYPVONW");

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
    msg.setTimeStamp(0.2898873432416468);
    msg.setSource(8503U);
    msg.setSourceEntity(146U);
    msg.setDestination(48094U);
    msg.setDestinationEntity(247U);
    msg.plan_ref = 4101461083U;
    msg.id.assign("BCNFVLUPOHYMEDHXDOBKRBJOHAKIVVWBCIHCKGPSXZCPBEGQCJIPAGPSHWAOSXHSGMQUINXNBXTMLIDEIOVPKFPMVXR");
    msg.memento.assign("YZUXMOIABBGAQCZQKZPOUPPMKXUMFKYYGHURUBAQLHFLFKREUAIMOTDTQPCIKRJKGJQVSXLEHOTKOXJMPWSXXSVCIVCYNECNPIWTZDNRHMDJHJQVANZIGDFG");
    msg.lat = 0.2243803967770942;
    msg.lon = 0.3520024453838031;
    msg.z = 0.6633274975525266;
    msg.z_units = 250U;
    msg.speed = 0.2817018337994994;
    msg.speed_units = 23U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 37007U;
    tmp_msg_0.off_x = 0.35164554559802774;
    tmp_msg_0.off_y = 0.8071066195320733;
    tmp_msg_0.off_z = 0.2400211299110684;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.4013722535061661;
    msg.custom.assign("UBOQFUVDANPISFGOGXDRXKEUZSACHH");

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
    msg.setTimeStamp(0.008629008154487194);
    msg.setSource(37973U);
    msg.setSourceEntity(32U);
    msg.setDestination(31315U);
    msg.setDestinationEntity(165U);
    msg.plan_ref = 1563032566U;
    msg.id.assign("YMLVQJWMDHALRQTHJAQBTVHNE");
    msg.memento.assign("VYKHVLQMCZLJKWACMSADZOZRRNNMLJSSBNNYTHUPRCSJEVSXJANEODYGTEDVICFSPNGRTGGRQMIADBEYTBDXQANUCTGAPISHFOFUWLYEKHUYFCMMQVKPDIXSHOJRMFDWWXTXETMGDHUPPSIZNQOMJPJWCCMVHGBQGBEWOBXLXZXKADONURBFKPIUIPVFLANTRWXTWVHISUQWEEFBOLYBKZKQGGYT");
    msg.lat = 0.3775194866954087;
    msg.lon = 0.8610385226929902;
    msg.z = 0.30898140086260706;
    msg.z_units = 63U;
    msg.speed = 0.7387589133412789;
    msg.speed_units = 68U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 9747U;
    tmp_msg_0.off_x = 0.7529999672543354;
    tmp_msg_0.off_y = 0.8735559940311399;
    tmp_msg_0.off_z = 0.6367383774395369;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.5824845626002999;
    msg.custom.assign("SUNQCGPNGNQUYHGKLQYNKMRGCXANUXEAESTITIUWRTICDAOCIMQMQWDHDBDKOHQTGBJGECXUZFKXQWWPRZYMWHPJEMCASVOLOZLDWWPOBJKRARAKHQAGXJSLHFKVCTFINZXGBIYBXVPFGBAXVLGEEKQUZOFRKYPNQWJDOAZWJEOTLTXHSDZEMMJFKDIRBZVSBYIDYNSYIPEUTBFIUYHCBJSYPMTRVVAXLJUVWZLUCDHFPS");

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
    msg.setTimeStamp(0.40754881700692314);
    msg.setSource(50956U);
    msg.setSourceEntity(110U);
    msg.setDestination(62247U);
    msg.setDestinationEntity(88U);
    msg.plan_ref = 1164929476U;
    msg.id.assign("HNRKHGGFKEYIRGTW");
    msg.memento.assign("IMMCXZWRUPRKSAPYUONQVOXLJJQWUTBFLQKIAWYODZKGHTOEFZQYBLJOSRIAKRTNIGTFIOCDZLTWDFKBBIVQXPBODFJSPUSAKYYKAJHSGCOPZDKBAWVSMHIVVVTBXCZLQHAXOVMVMCZSHDQBNWPKNYGFLMIMQJQWXHIZEZLUUDMEXEUNNECCVMGOECJZLEHNFFBJFNUDRHGNQESYPGSTKCWA");
    msg.lat = 0.5473431985763011;
    msg.lon = 0.08673614755277426;
    msg.z = 0.7060851278109967;
    msg.z_units = 243U;
    msg.speed = 0.040239457605746765;
    msg.speed_units = 82U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.3456349700544633;
    tmp_msg_0.y = 0.880617385830527;
    tmp_msg_0.z = 0.7609746301361725;
    tmp_msg_0.t = 0.4265302856172103;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.7929639626970382;
    msg.custom.assign("WFVWLQCUQONPNQTTFUQHLNYJIZVNNUJORTXYZABCRTEF");

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
    msg.setTimeStamp(0.6784707700263418);
    msg.setSource(14910U);
    msg.setSourceEntity(90U);
    msg.setDestination(64272U);
    msg.setDestinationEntity(66U);
    msg.vid = 41946U;
    msg.off_x = 0.43936327898003624;
    msg.off_y = 0.9627235879715934;
    msg.off_z = 0.16084211124625702;

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
    msg.setTimeStamp(0.847479362329609);
    msg.setSource(41622U);
    msg.setSourceEntity(150U);
    msg.setDestination(51049U);
    msg.setDestinationEntity(135U);
    msg.vid = 13299U;
    msg.off_x = 0.16410982985164324;
    msg.off_y = 0.5671245493364894;
    msg.off_z = 0.4193634426327689;

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
    msg.setTimeStamp(0.5263899903709341);
    msg.setSource(13731U);
    msg.setSourceEntity(157U);
    msg.setDestination(64312U);
    msg.setDestinationEntity(136U);
    msg.vid = 48229U;
    msg.off_x = 0.08262041844530266;
    msg.off_y = 0.2861457397634427;
    msg.off_z = 0.32928320944789313;

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
    msg.setTimeStamp(0.5685881335307974);
    msg.setSource(14527U);
    msg.setSourceEntity(196U);
    msg.setDestination(52944U);
    msg.setDestinationEntity(205U);

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
    msg.setTimeStamp(0.37096628820358246);
    msg.setSource(31856U);
    msg.setSourceEntity(75U);
    msg.setDestination(39925U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.7728547288988191);
    msg.setSource(6243U);
    msg.setSourceEntity(172U);
    msg.setDestination(61940U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.7591336847239356);
    msg.setSource(39421U);
    msg.setSourceEntity(233U);
    msg.setDestination(61550U);
    msg.setDestinationEntity(166U);
    msg.mid = 38326U;

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
    msg.setTimeStamp(0.7840711687926363);
    msg.setSource(32200U);
    msg.setSourceEntity(171U);
    msg.setDestination(11157U);
    msg.setDestinationEntity(169U);
    msg.mid = 6194U;

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
    msg.setTimeStamp(0.19002138302442295);
    msg.setSource(1914U);
    msg.setSourceEntity(105U);
    msg.setDestination(16706U);
    msg.setDestinationEntity(49U);
    msg.mid = 44478U;

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
    msg.setTimeStamp(0.23083744205665002);
    msg.setSource(8577U);
    msg.setSourceEntity(68U);
    msg.setDestination(52952U);
    msg.setDestinationEntity(93U);
    msg.id.assign("SDYBAJTSDVOSHKDAFCTPVSDPKDPUBLVYOPIVJAMIJXZYKTIKLUPCXCVQQBRXOTGQYNVGTFMSUWUQMBNAMNFOLYMHWNMORWLRZEABCIHPBJZNYFCIGKNJFKFECJXJECVCTTAEFGWAZSWQWNI");
    msg.type = 592U;
    msg.state = 81U;
    msg.eta = 62173U;
    msg.info.assign("CSGIZHPUCGCOZVGKFJVLXFDBEURDJVBQNEOCWGVHKQJIDDFMOWSVFQTOZYPZGUDAQBCIPKYKHFXUOGSSFOXNAPSOQJZZGLPOAJMLELMJNRASMEITZYQIPURCANVTYHWREMERRMBLLXTYYEMKNHCWBXDFGUMDLBRRSQLKKDTAWHIBJCVXPILFXFOYTREVZPNYRQPWYHAANTBK");

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
    msg.setTimeStamp(0.21900633405330405);
    msg.setSource(34228U);
    msg.setSourceEntity(249U);
    msg.setDestination(32728U);
    msg.setDestinationEntity(40U);
    msg.id.assign("GNUBIDOLPFBDZNGXSCQWYTMOJUOTTBOYNHVATZSORMNKUZIEZPQUCDCLFWHRVPCSUQEEWVCXTBRAJPLKUYFRXHNWBQDOYVRGURMQVKLWMZKVTTBAESXPTAHWMMQGZWEGRAPPDLJVYGFVHQGBKVJVAKICXUFSEIYOJP");
    msg.type = 1119U;
    msg.state = 120U;
    msg.eta = 26679U;
    msg.info.assign("SELPUBCBAWHNTCBOZHVCFIJRFJFYWBG");

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
    msg.setTimeStamp(0.26346174802952627);
    msg.setSource(4891U);
    msg.setSourceEntity(45U);
    msg.setDestination(431U);
    msg.setDestinationEntity(39U);
    msg.id.assign("HMSTSCIWLNDCEDNXIFBOWOFNARQMXBOYWWFXRFOVQQKACLHPEKTRLTENKCVICJCZGGVMOYBWVUMHQNDJQRPTNDEZGPYILOAOGBUIRXRIVJKJNMOIIKRUMJOYPZLAPUJEAMZJNHHUDHMPGOIPKZQZKQYUEHQSUWERTJMXDEGTVTWDBGUVXBPSTFLABFIKNLSSZQXSRPLWHYNCXBKFBGYYXERD");
    msg.type = 31137U;
    msg.state = 206U;
    msg.eta = 53000U;
    msg.info.assign("EMCXWWNWEQANKVXSMIKRYESUJTXSGSAYBKMTTHWBHTVDOKKYLVSBPXVPSDCASALVLSNMGXNJMFALMRMFBDJCUPYHBRTDYINAJCFFQCGNHPMTCOOIVITOWWHEQYRPENBZFXSRHNEPGTAPUFZJVUJUDFKWZJO");

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
    msg.setTimeStamp(0.7458337190644395);
    msg.setSource(37235U);
    msg.setSourceEntity(120U);
    msg.setDestination(64446U);
    msg.setDestinationEntity(155U);
    msg.plan_ref = 2648578162U;
    msg.id.assign("BGZJSRXEVJIPNHJSTPXLTFZWMCEIDTBFUIMSLBKAAOCOXOIDCYXYHGQXKXPLPCRUAPVTQQGHZMWKKHJONRN");
    msg.memento.assign("KSAXKZQMORMQGNFORXDWRHPVIWAFFQJWOHDAHVZVRPSZUIELHXGJTZQEAJJUTYUGAOYBLZLGYWEPFNLBFPNXFEUZJALKSWSBVMZPYGCLQMKGRNQJMYOYHRWNNDSQPXRLENIUTQVTWWITEBHAJHXTPDXZUQLKEBTGDEKNJELACODSAUFDAVRIV");
    msg.system = 4722U;
    msg.duration = 43330U;
    msg.speed = 0.40078743434033215;
    msg.speed_units = 124U;
    msg.x = 0.25587880008380404;
    msg.y = 0.36520602536622426;
    msg.z = 0.17776721601909828;
    msg.z_units = 53U;

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
    msg.setTimeStamp(0.3484504731615067);
    msg.setSource(41746U);
    msg.setSourceEntity(250U);
    msg.setDestination(35471U);
    msg.setDestinationEntity(233U);
    msg.plan_ref = 119282567U;
    msg.id.assign("BDOFAVXFFABTOMBPWNGUWKOHZMRQIFWNRYYOBSNJZHIJOSGMIQQLPEWLXWYHOWVEVMSEABZCMEFJIUVWEOZGNQWJQTY");
    msg.memento.assign("UIGAWGEWUEACGPONEMKTZFTQDKAZLLBBRIRSCDYGGCVKSVEFXKOUEAYZXNMFWGGCGBYIEXOVQPHPHCZEEBTTIYJMJN");
    msg.system = 23930U;
    msg.duration = 49087U;
    msg.speed = 0.6503907509242927;
    msg.speed_units = 69U;
    msg.x = 0.8395414912434684;
    msg.y = 0.5546367880718839;
    msg.z = 0.6317464267876004;
    msg.z_units = 69U;

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
    msg.setTimeStamp(0.9803233215197505);
    msg.setSource(43775U);
    msg.setSourceEntity(99U);
    msg.setDestination(54655U);
    msg.setDestinationEntity(97U);
    msg.plan_ref = 2088042110U;
    msg.id.assign("IEOEZRWPPZJEGMYYYKDSLSSNPUYTWRTPGXXQAFCVBKPHHWDSUKFIUPRUSTYYKMFSHGSWGXFIJNOALDCDKBVQNACREVBMYUXJZETQLDICUTOJLNHWDCJMAGTAAKCRFVHANZMPEIABFZMTSCWTOXWEPMQVORCOYHGBQVTKMLJCUEVBWNXUZIBVFIGYSAQBPNXXOGRZECQZLGOBIRQWVLKVDRQFRSYMIHLAGJZXHHDNNHOBDFLLPXTQEF");
    msg.memento.assign("OWLWKIVOXHWNYCVETJWQQRXVFLMSSKMXKHZCZZGPUBTGEFSRCUBYSCKMBHTLPXLKSZCKRHOWB");
    msg.system = 21774U;
    msg.duration = 3125U;
    msg.speed = 0.28212855983839524;
    msg.speed_units = 158U;
    msg.x = 0.8442157137153256;
    msg.y = 0.26429960434013366;
    msg.z = 0.7257996778967952;
    msg.z_units = 142U;

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
    msg.setTimeStamp(0.3657506102053999);
    msg.setSource(49217U);
    msg.setSourceEntity(151U);
    msg.setDestination(41444U);
    msg.setDestinationEntity(191U);
    msg.plan_ref = 545224038U;
    msg.id.assign("LZQTOOFDKHSLYFYCYZWXMJTYCVDMWBLEWOFUBOZPWSHROKUN");
    msg.memento.assign("QIHCSIHWSEZSAZDCZOPQLKVJRHK");
    msg.lat = 0.8143961408135844;
    msg.lon = 0.749540659826327;
    msg.speed = 0.5404203419379006;
    msg.speed_units = 5U;
    msg.duration = 63826U;
    msg.sys_a = 45568U;
    msg.sys_b = 37278U;
    msg.move_threshold = 0.5666710635580823;

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
    msg.setTimeStamp(0.014994893300394163);
    msg.setSource(44956U);
    msg.setSourceEntity(218U);
    msg.setDestination(33470U);
    msg.setDestinationEntity(173U);
    msg.plan_ref = 3786631239U;
    msg.id.assign("HLFXXIHOAEGKICIWHDJHKESQIFAMFWPYNGFQDVXEXJLSXOZKASBBA");
    msg.memento.assign("QKRFNBCLXPPNMVKRNJSLALIIXKMIOYHDCEQBMRJVUSHGGRTMEVZICXSQOFHJAONHXTAPQHIXFGIMVYGZNOTXDWDFKYPPMACIWUJBDGXJZAAFHJRJWYARDPCIXTWNVQETZWUUKIRBZQLYDEHZTIVCBZCYYHTKLQRTGDFOUHKPVJBUONBSPWFKAGGURLKEPBOCLWSROWSOMZNLJSWGYBGPCWUHUSCME");
    msg.lat = 0.8773071776059796;
    msg.lon = 0.22680189304231224;
    msg.speed = 0.7475156785872631;
    msg.speed_units = 156U;
    msg.duration = 5235U;
    msg.sys_a = 13807U;
    msg.sys_b = 31527U;
    msg.move_threshold = 0.013269432749854038;

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
    msg.setTimeStamp(0.4528810619686835);
    msg.setSource(57462U);
    msg.setSourceEntity(204U);
    msg.setDestination(1495U);
    msg.setDestinationEntity(254U);
    msg.plan_ref = 485785286U;
    msg.id.assign("IBIJBJEYAAUGAAFIWSVHRMNMAZYRCBXLEZQXPJKUREEVTDDEGWXZRELHPYGNNOQZUBFTLQOSSKSMUWYQFTRNEANIFCOCCELGZGUPDXPFWUEWKXTKPYPQZBCSJGBKSYISNICZFQAZWMUOFVLMNDFYUIVMRXTCVRRURTXLHOOWGCGSDTVYVJZMMDBKPHMVCCUJJZKBFWXMLTDBSKDSNQHBTHPGYARHXQAW");
    msg.memento.assign("FHUINBAJXCKQUGTKDJMFLKPOYWVLDYRJDEGVAPUWQLETFHCOZTOCLZXSCOUUCCAWVOZGRSGMPHKPAVSIML");
    msg.lat = 0.22386516751056518;
    msg.lon = 0.4536646171309583;
    msg.speed = 0.17581834665060203;
    msg.speed_units = 53U;
    msg.duration = 16607U;
    msg.sys_a = 35903U;
    msg.sys_b = 45364U;
    msg.move_threshold = 0.5092516996809989;

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
    msg.setTimeStamp(0.44199042573457836);
    msg.setSource(35226U);
    msg.setSourceEntity(3U);
    msg.setDestination(54145U);
    msg.setDestinationEntity(77U);
    msg.plan_ref = 1671403212U;
    msg.id.assign("FBZNPWTKVRGOGSAZWHECPXAITYLYEYVUPSKWNWZDUUMZJXHVBLYOISVPXPGPSIPTJFNUDQDFTZBMJKVIJJVXTBGMYSJUCIZQKSDZXRMQRFOBIWJZSXHNNLV");
    msg.memento.assign("OKBTGLZNVGXHHQYAXTPBIJYGGFADWPPXXTBNRLFDQAMRKPRVDVTRPCWCVWNLBKDEONNZZQKQSVWDJODRLJECCUEWJEAYJSKTSQYLMSVSQWPKFGFDMRC");
    msg.lat = 0.9899182748670371;
    msg.lon = 0.7412452080273968;
    msg.z = 0.9686736542872366;
    msg.z_units = 157U;
    msg.speed = 0.9149121749711602;
    msg.speed_units = 223U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.4760874236077649;
    tmp_msg_0.lon = 0.29195566807098805;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("CGWMRJPFHKCNYMSXXNUZBOUEHTNCJODAZNLAYAZWBSULVBSXFJUQADTFQNXZVVDBGJSOQPKJBLBWIROXRSTHHIKOIXSJRVCXRPFJMCICCDGZLLWDMHUZPDPQRWNUOGJPFELYYNYZSTYLTBPMFMQYPQYGWNZDPMTVKKMYOERTAPLXCWCUJFUUUKIOFGTKITFFEYEIVEAZGDWDEBKZWDAVRVLATQOSR");

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
    msg.setTimeStamp(0.3768829685410573);
    msg.setSource(54798U);
    msg.setSourceEntity(173U);
    msg.setDestination(15177U);
    msg.setDestinationEntity(34U);
    msg.plan_ref = 2684158895U;
    msg.id.assign("URWWFYXYJIGNZHMVWUSDEBPZFPPNKWYSZCYIBWXJNJLKBDMFHNHCQQJOSTVNSHWGNMMEJSULCHDBFZOCFDLBLTRZAKXMPQOBOGXTZFIRAGLBKSLXYJDTCZMJVYNGPPWRXOKCCUUCKULJEYVAGZITQREDEBEMEDQSVUNFXDMKHPSVHFWERQSTNRUBJNHFYQLOGEIAMDPTICCVHLAGGVOAPWOJTTRZFYAGXZHQRXXITAQKAYVRBODSWUKQAI");
    msg.memento.assign("GMOIBGRKLKPKPJTE");
    msg.lat = 0.9831705297684652;
    msg.lon = 0.495178393268921;
    msg.z = 0.3943755855246035;
    msg.z_units = 48U;
    msg.speed = 0.02507924291853969;
    msg.speed_units = 59U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.9718676101419637;
    tmp_msg_0.lon = 0.5209946489117492;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("TUTCPZIKBMGLQOACVGFXRVUDDBWIGTXPTFSSHOHQVBLSJAMRVEQKUQFFJEWHANEFCRZDDYCDWSDSZPLMQJYXVPMRHEXHAUBYPWAGWYVBITIYKVVNLKRKPOCZCNJUDYEMQASABOGKWENKJNTRJBUXQEYOWGUPBWNYXONZLPLFBULGZRDSMHHUROFXQJNOKDIECMQETTJADWNZFHFTSFLIIVMJLHKORZS");

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
    msg.setTimeStamp(0.42798337113782003);
    msg.setSource(15711U);
    msg.setSourceEntity(92U);
    msg.setDestination(128U);
    msg.setDestinationEntity(197U);
    msg.plan_ref = 2742320146U;
    msg.id.assign("HRIVGWQHMSCUYFOXEGLVGPHTQMPMJOZDXCAUNANOXHAWRIDYHVNXSREWIMAZNTJSYECVLKLPDPUSHMVGWLUJAPEBNXOOHNUPBCNQDJG");
    msg.memento.assign("TFUUJVUXLVHTKCYCXWAPLQWHLFXAPKSBQWJMGFFMKABICXVQAQVWETKSGVAZDWUZELPCLIKTLXRUMQGFAHWQUAYYPFPDRMJXMSOEKOPCCLKZHQRCMYNBTAJVKCWBAXHGAJYDTLJITBEXYNKIJLDRXDUHBZZGPGHRSNUQYTYIDJSFTIREHNUDFRGCOESSOHDDNWITEOENYGVZUVEJQOFIQNMZZNOGZCHPNSSFOJBSDBOPXBIIZWY");
    msg.lat = 0.16678068808268176;
    msg.lon = 0.3529120321020095;
    msg.z = 0.6239698389696097;
    msg.z_units = 165U;
    msg.speed = 0.3829876609669546;
    msg.speed_units = 64U;
    msg.custom.assign("COVASCKVFDRCNETMQWVNNEWDQHGQLCKLMPXNAESAEAXAXCQDHFJYUPUIVIGSLXTHPNOKLMBJYPUCGSIJVRBZUNDHRLAZZSIEIAMZXPDUXEIZFDPCYVYOGUAQN");

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
    msg.setTimeStamp(0.4302144503935803);
    msg.setSource(60771U);
    msg.setSourceEntity(101U);
    msg.setDestination(51814U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.6539376287836113;
    msg.lon = 0.27979203522848595;

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
    msg.setTimeStamp(0.26897439753694063);
    msg.setSource(8339U);
    msg.setSourceEntity(105U);
    msg.setDestination(18166U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.9331521555455068;
    msg.lon = 0.6484198692936095;

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
    msg.setTimeStamp(0.06546323978168433);
    msg.setSource(30530U);
    msg.setSourceEntity(49U);
    msg.setDestination(40030U);
    msg.setDestinationEntity(92U);
    msg.lat = 0.4979858547856161;
    msg.lon = 0.31945152555774003;

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
    msg.setTimeStamp(0.04354150828898096);
    msg.setSource(33858U);
    msg.setSourceEntity(40U);
    msg.setDestination(63553U);
    msg.setDestinationEntity(198U);
    msg.plan_ref = 634507310U;
    msg.id.assign("MLLENNEUOKTCDZSZTFLGRJUPJKWQQPLEGPYHDXCIBMWRYMHCESZLKCQPEWVHAIOSJTUYDRSAOAGOYDYMPSMESRAKXOAINSQLRXNWBWTKAMBSYEVLDTKCB");
    msg.memento.assign("RDJEFIIVTGVZFUBUBY");
    msg.timeout = 63083U;
    msg.lat = 0.9009682089110808;
    msg.lon = 0.11612720983781932;
    msg.z = 0.0573626270927623;
    msg.z_units = 143U;
    msg.pitch = 0.7971403099778177;
    msg.amplitude = 0.003353959039453569;
    msg.duration = 2382U;
    msg.speed = 0.13135593593168116;
    msg.speed_units = 54U;
    msg.radius = 0.3357285165969949;
    msg.direction = 251U;
    msg.custom.assign("ZQIECFEKPJSBDIPXQXYEASPFYGUJXFHBSEEOGQQCMTYK");

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
    msg.setTimeStamp(0.2955912691610739);
    msg.setSource(12844U);
    msg.setSourceEntity(172U);
    msg.setDestination(53090U);
    msg.setDestinationEntity(142U);
    msg.plan_ref = 106707867U;
    msg.id.assign("ZZDUFSAWLJHTGRZRJBDNIUWMUHOWHTBOYZBSUJGYEAKBLUQPCIEEMDNERQVNWIIXLDPODEMPJXSVVGXYWQFGTYVLOPAHQWVJFQVCACTHSJWTKSFVHBFKJQTERSRVXFAMRXSZXVHUNPDRGKZUBSQNZCAQGIFJDQEOIPLXCXHKKUCOMMBNIMTWGQIXGIKZASDCZXEWYLDHRTJNOJFCEKYTVHBDPEIRWZMAGFLKCOLOM");
    msg.memento.assign("VJTAEWIGNUPMXUCRZBTLHGFJKPKXDHJEDNMCVTUTVPDWJYBQOQZANWHJPUHCSKAOSATGDGVQIVXGXJSADHPWDKNBGOUAROJPEIIUMZMEQBKHKEUVSTPJTLRCBFLZSMCXYMIXKCWLEMIBVFENIMLHTHNGDCWQWXCRLQOPLYKWUZLRFBPPOLWYJRAGRFEY");
    msg.timeout = 50007U;
    msg.lat = 0.618859044769178;
    msg.lon = 0.27284061589471686;
    msg.z = 0.5849852482678788;
    msg.z_units = 32U;
    msg.pitch = 0.5178924565472723;
    msg.amplitude = 0.5561942704957216;
    msg.duration = 725U;
    msg.speed = 0.44179620133056774;
    msg.speed_units = 112U;
    msg.radius = 0.44797680695152864;
    msg.direction = 232U;
    msg.custom.assign("OXUXACFCNAYOEPPZBOTUMZLFYWXGJKCGHXAMRSZUSLABGVGLGUQUETQZPCSSFBIHJPQFHAMNKUMMWMKETRDGQRDZRMWGCMWXNEKTHSWNJWQIJHBQYLNTRHQVDBRSCCYJKYAHUOKAFJDUKDXLOVPOTOVVAJERJPSIFIRYSOJNWUFEYEUNMPVKBXZYDVBIHEPEILOJKT");

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
    msg.setTimeStamp(0.8231071424561087);
    msg.setSource(47068U);
    msg.setSourceEntity(116U);
    msg.setDestination(10320U);
    msg.setDestinationEntity(205U);
    msg.plan_ref = 2488219495U;
    msg.id.assign("AEPWEZZRXZDSWQCYHQBMXLYCRIITYUDRZJSJOXSWUZLJCCW");
    msg.memento.assign("PAVBOSHWDNMFYQOQUTOZCSWVLRWOCPLKKQMSYLIIRBCZJEYDBJGBPMX");
    msg.timeout = 21961U;
    msg.lat = 0.1812677360271301;
    msg.lon = 0.9302115335747178;
    msg.z = 0.9735624066044091;
    msg.z_units = 229U;
    msg.pitch = 0.4521769576493251;
    msg.amplitude = 0.08240669753562746;
    msg.duration = 63472U;
    msg.speed = 0.13439017412000198;
    msg.speed_units = 50U;
    msg.radius = 0.05480028927922331;
    msg.direction = 48U;
    msg.custom.assign("LAXMKMMOABVNGO");

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
    msg.setTimeStamp(0.3546674341194367);
    msg.setSource(26674U);
    msg.setSourceEntity(60U);
    msg.setDestination(56980U);
    msg.setDestinationEntity(97U);
    msg.formation_name.assign("QKYGRUBRSWPWCNUCFWIHQMUKRTHCGYSXOXTVHZCVKGPMYXPQPSUATFPRSNSBNFLYMZAXDBYMXQIGNNTXOBFNKHYILXQCRFXDEDMJMHWACVPWTBHTPZRCDBMVKADSSILNKVKNGG");
    msg.reference_frame = 133U;
    msg.custom.assign("JVQQHZIXSTBICJISYADJJTOABIULNAKUETNINRVYQZZNHLXMBTUBMRBXPDABTMZURRUIMWYSOEJFSCLRMNQDNTHHVKIPFXTZIHFIDLVDNDYFGSHXQJMWQQWSTAOVVHCOZCWTUFKCHJVESEPSXFKGMGBJXPEOUEZKPAQKQOYEJLWSLALIGVSGRGMLVRPPWBUOJQHXLHDDMOGUYOABPWGRNMKCYZCCGUYXLKYFFZNKRWPWEFDWXDRNFCPGAYTOVC");

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
    msg.setTimeStamp(0.0009230806204651998);
    msg.setSource(45346U);
    msg.setSourceEntity(82U);
    msg.setDestination(62308U);
    msg.setDestinationEntity(26U);
    msg.formation_name.assign("ANKIPUYVXOZRHVASUBSGVOSNHSYISLRTCOKXKAXPNXQFAJUQPIRLIJXHGOSHLVQUFVWTVGWDUABDTQEKDLPWTYLBADCOGETKPPNOEREUMZNCLDTCMMJPYBHADXWKIKEBKRWGEVEWOMFXWYBMCEMPZYLLUTVEN");
    msg.reference_frame = 28U;
    msg.custom.assign("KDRMHFPOBULUNHLPCSXLRWOEUKXRLHWSEZYKMXJBCBVYXCGZPAUWYJTOUIXVTCZMHGBNDDZACACEMDFENBDGJIUUEQNIWYBNYJVSAPQRGJRQSOWVFVEBRPOBGVADCTQTDJPYOPJULXOFGLAWGTGFTVQKIMYBLQIEQKWVTNENNSLHMKLXPHKIDKJOWSA");

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
    msg.setTimeStamp(0.85891548058732);
    msg.setSource(43288U);
    msg.setSourceEntity(176U);
    msg.setDestination(5705U);
    msg.setDestinationEntity(67U);
    msg.formation_name.assign("ITXXTBDUIGPZQIJWMFWEAPHBZUTQGRGVIYSDFNBMELXVYNCQLUONZRIYIEFYDVTOQYHSTKUCBUNACIVAQOCHCLBOKXITSDXPPLRAFDPKBHJHAPTCHWUGMGLRQYZEFCWOWUUGWHRCXDMWZJBVRVDPISNFJSJJZFIKHGJSYPNQOUCEVAEYDLWKJYFTGZFB");
    msg.reference_frame = 247U;
    msg.custom.assign("TIBWMJOESARLZTHRQIFRCGWBTQHXMRYDKRCPAEKWDWPMHPGGZULSFYAKQPDOEXTWINKODPCZZPISNQCOZMBVEKVFNSCILCDGTIOPVAKJHRGHMQVKUXJBLAVUMELIUANQGTFXKLXAVZOSHHYQCDDUUDHCFJLNEZYUXNZPJLMRBZDEQFTOVOSNDWWWEWEOYUVJPBBGUBVZGRSXCCABKYRRGIQLPXSNFYYJAMHOXJMMUVIJGTBSNQIYFSHFL");

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
    msg.setTimeStamp(0.20373008624068922);
    msg.setSource(44597U);
    msg.setSourceEntity(254U);
    msg.setDestination(65270U);
    msg.setDestinationEntity(179U);
    msg.plan_ref = 2890449463U;
    msg.id.assign("MGYICUAFYOVWYHUDYHSUXIJKLJGACZCICRXIOEKRVNWCUFNPRNJWXPITBUHMOCTQTLHKIQROXWMSLXAHXVVLTUKBNEUTFUZEHJCCWYDLMDATEGNDJZDDJSOUIXTVZXFJPJNJTYWFSGFQPGAOLBBQFPMNZQAPHWFTRLORFDGUSKCDMIQGESEOYSALBDBQXRHBYNKOGWVAIN");
    msg.memento.assign("RVBNEEOIUYSCSEFGKITPBZXWRPIHRKCXXWRVTIPTYCQUKFZQRHCWLOIBGIJGNEKMNNDGYCSBGYCZVTJLSLSZQHCWPJDMPAHHOMLHTBNEPKFROWJDCJVXUTMEXMIKAEJUZLDDFKAUVPIFGVYKGODNUABPQTIVWZSQRJOUUXQNBSFWYMDTFADLOOXBRSZCXEEGLVLYMCTBRHMZTQZP");
    msg.group_name.assign("NQMZDIBGZHCBALQCSOTPGRQOUKOFWOBJPMZFNLTSJUJHOGFRBKBPGUHCJUQKSOWOXGIWYZEKSKMJXWRJZMFDLVSUCIKICLMQHDJLIYYLXREYVQETEDFTDGFNWASPOIQZHGVNFLGESWSCQPVPVXOKXYDJYGZBXKTYRTJHXNKMMAVREYRUPIZVYTALQEWUNAWARJHECTPINVDUTDISA");
    msg.formation_name.assign("KSSXQXPAVREQMVGOSPINZOBZTEMGRGFOJWRLWVZDULXOPKGIYPMLCRYWZGLVHOCBEFAUURAKTNQYFIAKPPOCCHGDHSJGDXDZMAOLDRJHEJEZLPUJYOQTDMIRQVWENYUGUBHBJPDKEFWBLFPIWIXNSSWTFACNXSCWKAHKMBVMDCWKVRIHIQNGEBZHJYUOVUXVGJXKHJCBDUICPTBXMNLQQFVMDEQF");
    msg.plan_id.assign("PIONCGGVMUGOVBVYVJOPAQSYGWSQXFCSJDYGRIZDAOESSOKGTTNDLWIMMCBTHJBTLNRXIVBVNIZYHMXPZTNICHDVRICOANUZBLQLPZJTLDDXESBQUMDIWDLHUUILWMQIWGRVPYNVDHJPAEEKWEEZRMQCFBWSJBLMNFJURQLTKPGXSYTFMQKUQKKACAJCRFWUOPHKZPKXFYSHSFELEAKYZOBFAJDRXHEUOHCENZWKWGFAFQGRTNXXJAOPTRXZ");
    msg.description.assign("OYNKVKGFZBAWQFLOBBLJOHTVVVTPCXDFZMRAVUXJORDNKDGNQCYIGIZNQBHDLSTKZVUMJIIGCXAUSBYIRCZTELWJPORHAMIJSCAXLKDZDPWRXNCNEYZGXOOPNHFGWPPTWQEP");
    msg.leader_speed = 0.18449893505768544;
    msg.leader_bank_lim = 0.2506798330767692;
    msg.pos_sim_err_lim = 0.7953570250730582;
    msg.pos_sim_err_wrn = 0.6249420708451123;
    msg.pos_sim_err_timeout = 8194U;
    msg.converg_max = 0.3667364987912176;
    msg.converg_timeout = 4061U;
    msg.comms_timeout = 302U;
    msg.turb_lim = 0.22675232340780827;
    msg.custom.assign("NSXBLRXZASXRBMJCKGHSVRNIVNGCKYLJQLLEKPAURPNMUBVHDQCYPWNYRJZWIZQCMGZZIGBTPCABCFJAUFLPZFGUPPSZRCKBQOUVNEQLOEBYECIRRSFMSIBEIXNEBIYITXDELSRENEOJTZXVDYAQKHTHX");

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
    msg.setTimeStamp(0.6436110309614625);
    msg.setSource(50350U);
    msg.setSourceEntity(249U);
    msg.setDestination(50685U);
    msg.setDestinationEntity(192U);
    msg.plan_ref = 4067437233U;
    msg.id.assign("WKNICIDQUVRIXMFRESGQUFXRFIJPLDPJJMTMDZLAYFHVPJZAUDHRFLOCNCXCOKBIPBEOBYSHJDUXMCFZZUVZYGXJMAQMGRHQZTDJVSJTZNVAYOTOKENVNRILBXCHUGLBPYYHTAGOAHSKFWWPHEPWRKSLRKXAEVDVHSQRUUBBOKYPKJCXFHVITNDET");
    msg.memento.assign("WFRGSLEGAKEODZDTYPECQGBFBDXSJQVTWSTMVHJAZVXKGPWHHINGRBJPMUAVQESOVOCHQZLEZCQJAJOMVRRGNCNQVBYZINYNFWET");
    msg.group_name.assign("YOAIXABFHMWJIBDHKCMRPQWFMPCDPMTOTSEUCTKISWLSAJUGFBFZHQWWZJNFVHZVGKFEWLQTBAXSXYEHMUTBKMANMJCYCZYBWEKIEPOXPIGTUKSCASFXRDWJEGXDZUNSHVJQOXLCYCGONNFCRRNVIBKNXGRO");
    msg.formation_name.assign("NLWOWJGWJZTHFRZXFWGMTNDBYPJPLPAZFKYADCSLKSJDXKOAEORXQOSRGLHRMABRGPYXHQEXLCRLMAIXUIKZATJXOEKTRQHUZQQSNNTIBPFPOKQMAOFLPGOBCOBWUGJISUZFHVCALIKBUHVCSMWNHBYIQBFEJNGADSVGSTZNEDULFDCSWWHKVUPGUEJSOIYXCMWYTMDGEMRBDVPJABYVMNRYCUVVQIFKDTZXUZ");
    msg.plan_id.assign("WFZEJUWFATZD");
    msg.description.assign("OJVZVQZKDXFPGUHEGMGSLQHWFDVBNFUHNEAVCBNYSZSSAYNJIKMDPBDLEQIZI");
    msg.leader_speed = 0.997536193789986;
    msg.leader_bank_lim = 0.4453988737783806;
    msg.pos_sim_err_lim = 0.6879095135634485;
    msg.pos_sim_err_wrn = 0.6361546386344228;
    msg.pos_sim_err_timeout = 58544U;
    msg.converg_max = 0.8824383670280674;
    msg.converg_timeout = 49024U;
    msg.comms_timeout = 10456U;
    msg.turb_lim = 0.784170604906908;
    msg.custom.assign("MOFDUCQWOBPASTNJAPGAXKLVQZHJTWRTYZXEROZUDECJUEWCSGDPHDMHPXHBWWVYBETKEIYTDBINBS");

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
    msg.setTimeStamp(0.4844284788901906);
    msg.setSource(20854U);
    msg.setSourceEntity(153U);
    msg.setDestination(51642U);
    msg.setDestinationEntity(182U);
    msg.plan_ref = 3494088825U;
    msg.id.assign("WHVBRHOZBZMWVMJREXNNDN");
    msg.memento.assign("ZHFDNUWTQLJWKIJRUAAKTEDMZ");
    msg.group_name.assign("ADYZYILPWUAPVYTPOIGFVGXFNPNQXTSJKHURZUTWNRITZQYHHEPVVCNZDKBCTVBBQFLYWVXBRFGQOSJDMHUGLEXHIAUSDP");
    msg.formation_name.assign("MPBXCTUDYSGHFBYGPFUAIVTAFJGEYI");
    msg.plan_id.assign("AKUDGGYUSFPOWRHVMQPHXVIZGGQOVPIRKEYGMUXKJMWWCPEMCMJHATQQLBGAZPYWQXYITJQSCQHWGLVCCWYIXXMRJJNDXJYSPBZDWJFBPPKDCHSKKRMXFNOUPEKZOWVFCJFFIRTCZDIRLG");
    msg.description.assign("CUWGTAIRXNMSTXSIQPHRGSSWMIPSBRECAJDKYVQUYTHYXZAOKGHUCIUVWZAHVXAKVMXDPFRJIGEJKML");
    msg.leader_speed = 0.9258104040514388;
    msg.leader_bank_lim = 0.6411108012359993;
    msg.pos_sim_err_lim = 0.9023850222041937;
    msg.pos_sim_err_wrn = 0.1721676078413682;
    msg.pos_sim_err_timeout = 50667U;
    msg.converg_max = 0.13257754465342564;
    msg.converg_timeout = 64455U;
    msg.comms_timeout = 13445U;
    msg.turb_lim = 0.5814795885935782;
    msg.custom.assign("NUIYMNRLFMQZGUBDBENVKQIDYEUMXTFUTCXXUNPFSEIJGJOQBOGYAXPECHEGTURMQHXVFINZLDRILZNPWWV");

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
    msg.setTimeStamp(0.517178574108907);
    msg.setSource(17615U);
    msg.setSourceEntity(203U);
    msg.setDestination(59199U);
    msg.setDestinationEntity(29U);
    msg.plan_ref = 520308691U;
    msg.id.assign("ZVPLMWDMFKZHYFSNLYVCKAWSLJXAUCJLXKOBPWRKNBTAQNSCAGWFVT");
    msg.memento.assign("JWBZBHZKMUNYQEIZDBXWGXMRNYJEXLLVAEWEHIZNROUYTDFOXFVODJEQDDOVIXNPOYHSRJVZBTEWCVPGGDLRKKZMUIHOSUPFQPYMQACZILBKQNWSNMFTPEKADIYFCUJHWTYZHLHVTIQDOYOKGLSXQK");
    msg.control_src = 57776U;
    msg.control_ent = 84U;
    msg.timeout = 0.16336165643286693;
    msg.loiter_radius = 0.2872049032738392;
    msg.altitude_interval = 0.005325581030078408;

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
    msg.setTimeStamp(0.3477292919877262);
    msg.setSource(20793U);
    msg.setSourceEntity(22U);
    msg.setDestination(43116U);
    msg.setDestinationEntity(199U);
    msg.plan_ref = 3346926532U;
    msg.id.assign("OIENYSWXPCUPWGFQBGUKHLZSGRRJMGCGRCVTANFAUISJXXDUWOUZYLKQBXAXXSTWYJFPSTLSYXDMLTHIEVAVOCOJZARXZVAWZRTBURTEEMZZDESQPMNWYEFSIZKRJILMLMTIKYZLSBFQCPGHQNHXOILHRGCEBHKHPNFBPJPYYVVLOUF");
    msg.memento.assign("QCFDWKQRXZBMUNGDDWVVWZGUOILQLOZPDXAEYTQBFUEUTRAJZNIGPIIPMRJVZOYZMYEEENFLBYELCLYNGWKJHEHPJ");
    msg.control_src = 41995U;
    msg.control_ent = 191U;
    msg.timeout = 0.5509066641075292;
    msg.loiter_radius = 0.2762262488622379;
    msg.altitude_interval = 0.059696569798831534;

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
    msg.setTimeStamp(0.7216555570345621);
    msg.setSource(35109U);
    msg.setSourceEntity(31U);
    msg.setDestination(44805U);
    msg.setDestinationEntity(25U);
    msg.plan_ref = 1696093723U;
    msg.id.assign("DSAFKEKHENZZADTEOJYZVNOJVIBJNOCRIARZJKTFNQWKRQZHQRQLCEOTWHVQMSXGJIGFZPUGWDMJPYNXLBOEYUWVPRMIWOYKBZGUHLOPUVEMGHCLVVFKYTSKNSYLCIAISFRPOABLHBFPLNARTTURFFHPXSHOIJNXQKXCCTLQUAYIBDTXQPQYXTWFCGXIEMNNWD");
    msg.memento.assign("OEOYUYULRIZQBKFJVPAQWZMTCFNZXJYKEJYOGNMGMCIBVPWHVYLAFRWHLVFPANHIJMGXSVBVBNDLELFEKBJZIEPFMDSETHARKPHDPTDJHIUJIWXOFLXR");
    msg.control_src = 34050U;
    msg.control_ent = 26U;
    msg.timeout = 0.48224710431711726;
    msg.loiter_radius = 0.6381389766087081;
    msg.altitude_interval = 0.39396090783937765;

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
    msg.setTimeStamp(0.5208531526341417);
    msg.setSource(34248U);
    msg.setSourceEntity(115U);
    msg.setDestination(50300U);
    msg.setDestinationEntity(118U);
    msg.flags = 20U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.2668761826341155;
    tmp_msg_0.speed_units = 124U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.9216879811898429;
    tmp_msg_1.z_units = 168U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.19983482009869513;
    msg.lon = 0.2495378061103205;
    msg.radius = 0.3246799044857904;

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
    msg.setTimeStamp(0.18973562247642894);
    msg.setSource(12919U);
    msg.setSourceEntity(183U);
    msg.setDestination(40212U);
    msg.setDestinationEntity(22U);
    msg.flags = 3U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.3574868982924806;
    tmp_msg_0.speed_units = 19U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5249998576870986;
    tmp_msg_1.z_units = 176U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.3449841233567923;
    msg.lon = 0.5014590993544489;
    msg.radius = 0.6946419282237308;

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
    msg.setTimeStamp(0.0610240903583813);
    msg.setSource(43037U);
    msg.setSourceEntity(216U);
    msg.setDestination(48640U);
    msg.setDestinationEntity(189U);
    msg.flags = 31U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6519670709882874;
    tmp_msg_0.speed_units = 182U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5412078055108965;
    tmp_msg_1.z_units = 4U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7353316805125283;
    msg.lon = 0.12075427263068883;
    msg.radius = 0.7666510370944501;

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
    msg.setTimeStamp(0.3344045516545392);
    msg.setSource(18749U);
    msg.setSourceEntity(61U);
    msg.setDestination(58841U);
    msg.setDestinationEntity(250U);
    msg.control_src = 29747U;
    msg.control_ent = 54U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 218U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5962010445905447;
    tmp_tmp_msg_0_0.speed_units = 213U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0987620598071921;
    tmp_tmp_msg_0_1.z_units = 213U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.26769239385486243;
    tmp_msg_0.lon = 0.6815460084152215;
    tmp_msg_0.radius = 0.8333054262232178;
    msg.reference.set(tmp_msg_0);
    msg.state = 108U;
    msg.proximity = 2U;

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
    msg.setTimeStamp(0.6551556150654155);
    msg.setSource(56367U);
    msg.setSourceEntity(21U);
    msg.setDestination(24870U);
    msg.setDestinationEntity(169U);
    msg.control_src = 30084U;
    msg.control_ent = 95U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 219U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.517124823531446;
    tmp_tmp_msg_0_0.speed_units = 75U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.19579709116228472;
    tmp_tmp_msg_0_1.z_units = 218U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.19464599981481256;
    tmp_msg_0.lon = 0.296965874594069;
    tmp_msg_0.radius = 0.6866953315900997;
    msg.reference.set(tmp_msg_0);
    msg.state = 198U;
    msg.proximity = 58U;

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
    msg.setTimeStamp(0.4598253919695223);
    msg.setSource(8059U);
    msg.setSourceEntity(214U);
    msg.setDestination(22621U);
    msg.setDestinationEntity(104U);
    msg.control_src = 30753U;
    msg.control_ent = 140U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 53U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7553004832880695;
    tmp_tmp_msg_0_0.speed_units = 14U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.19673640391953018;
    tmp_tmp_msg_0_1.z_units = 178U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3935289583454016;
    tmp_msg_0.lon = 0.7298932481240359;
    tmp_msg_0.radius = 0.3210469529475153;
    msg.reference.set(tmp_msg_0);
    msg.state = 11U;
    msg.proximity = 159U;

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
    msg.setTimeStamp(0.12726589126327903);
    msg.setSource(23342U);
    msg.setSourceEntity(66U);
    msg.setDestination(27620U);
    msg.setDestinationEntity(17U);
    msg.ax_cmd = 0.8122113943411995;
    msg.ay_cmd = 0.36416156439449676;
    msg.az_cmd = 0.04379583051361824;
    msg.ax_des = 0.664575627061928;
    msg.ay_des = 0.3442256060735065;
    msg.az_des = 0.08416089964254492;
    msg.virt_err_x = 0.7759130703015861;
    msg.virt_err_y = 0.7794539144859741;
    msg.virt_err_z = 0.4172313180310525;
    msg.surf_fdbk_x = 0.8540902884297636;
    msg.surf_fdbk_y = 0.5683693193459003;
    msg.surf_fdbk_z = 0.5632653152654892;
    msg.surf_unkn_x = 0.9478974204827504;
    msg.surf_unkn_y = 0.04500246276858777;
    msg.surf_unkn_z = 0.20584631919775098;
    msg.ss_x = 0.3984046355218964;
    msg.ss_y = 0.9116215276325232;
    msg.ss_z = 0.8396927047820518;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("IEXUAWFUYDJQBOEXKWYPSOKGATHLVYZVEFULJESNRDVRQCZGBYIWGOFVZCBDDJCHWLFXOMRJVIFWCKSHPROKUNTLQYXKWHXOANEMPSGQRSBKEGBMXTQYPNWBSLFAOAPQJDKBRTEYEPHNAZRSNSUUMXZIAMQBRTXOIWJYIEDYITXZMLLIPQCNTGDFMCWHBOVTHKGFUXNTGWZTNPZLFOJVHHJMRISCVAKCEFJRLSLAPVPNJK");
    tmp_msg_0.dist = 0.3466958091996677;
    tmp_msg_0.err = 0.587392950910109;
    tmp_msg_0.ctrl_imp = 0.3822469836709903;
    tmp_msg_0.rel_dir_x = 0.8544992035084482;
    tmp_msg_0.rel_dir_y = 0.15659876728301758;
    tmp_msg_0.rel_dir_z = 0.8148847718015871;
    tmp_msg_0.err_x = 0.7982867386248798;
    tmp_msg_0.err_y = 0.5331121611027412;
    tmp_msg_0.err_z = 0.26475529646267193;
    tmp_msg_0.rf_err_x = 0.13852292221181195;
    tmp_msg_0.rf_err_y = 0.5471385324540698;
    tmp_msg_0.rf_err_z = 0.4631874449683022;
    tmp_msg_0.rf_err_vx = 0.7147442525307101;
    tmp_msg_0.rf_err_vy = 0.16802455201495603;
    tmp_msg_0.rf_err_vz = 0.16035840846221383;
    tmp_msg_0.ss_x = 0.47618179854232945;
    tmp_msg_0.ss_y = 0.3538106707321581;
    tmp_msg_0.ss_z = 0.2258234413734359;
    tmp_msg_0.virt_err_x = 0.6130830679066914;
    tmp_msg_0.virt_err_y = 0.23010703808873145;
    tmp_msg_0.virt_err_z = 0.8192788994078196;
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
    msg.setTimeStamp(0.09270577481472853);
    msg.setSource(3936U);
    msg.setSourceEntity(177U);
    msg.setDestination(52061U);
    msg.setDestinationEntity(171U);
    msg.ax_cmd = 0.6654317069124981;
    msg.ay_cmd = 0.2698644262197216;
    msg.az_cmd = 0.6494830273306192;
    msg.ax_des = 0.11134462628846842;
    msg.ay_des = 0.3507534038004422;
    msg.az_des = 0.7500078482989052;
    msg.virt_err_x = 0.4684181088369046;
    msg.virt_err_y = 0.8555581682802251;
    msg.virt_err_z = 0.2155260734558616;
    msg.surf_fdbk_x = 0.10524959851214832;
    msg.surf_fdbk_y = 0.6235499334926955;
    msg.surf_fdbk_z = 0.0565636930969694;
    msg.surf_unkn_x = 0.5767718197808497;
    msg.surf_unkn_y = 0.055607294111230776;
    msg.surf_unkn_z = 0.5861006321684621;
    msg.ss_x = 0.8160747768705976;
    msg.ss_y = 0.8281492373619646;
    msg.ss_z = 0.2265657414908525;

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
    msg.setTimeStamp(0.13079148348986047);
    msg.setSource(15365U);
    msg.setSourceEntity(40U);
    msg.setDestination(21568U);
    msg.setDestinationEntity(64U);
    msg.ax_cmd = 0.5713350496196682;
    msg.ay_cmd = 0.764319605342975;
    msg.az_cmd = 0.006504291649458649;
    msg.ax_des = 0.4256314722599249;
    msg.ay_des = 0.9450714396266815;
    msg.az_des = 0.5024240291348824;
    msg.virt_err_x = 0.2526551042806383;
    msg.virt_err_y = 0.8008246787125228;
    msg.virt_err_z = 0.2680980915509632;
    msg.surf_fdbk_x = 0.3743150779599569;
    msg.surf_fdbk_y = 0.5320701997398805;
    msg.surf_fdbk_z = 0.9362098592848466;
    msg.surf_unkn_x = 0.4662719987939705;
    msg.surf_unkn_y = 0.1581652087202271;
    msg.surf_unkn_z = 0.7503900914768434;
    msg.ss_x = 0.0891350282619302;
    msg.ss_y = 0.8419702662787638;
    msg.ss_z = 0.3670565018668144;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("EPVZLWLRHCEDLPINZKCOOBWJJKXJLTDZPATVITRJOYXUAFNDJDUSCRZWDGXRZILKMTRGQAIEEISQADCFCFDMYUBSQAZXCHWBL");
    tmp_msg_0.dist = 0.5088414138674996;
    tmp_msg_0.err = 0.4309534954597658;
    tmp_msg_0.ctrl_imp = 0.5573899525263023;
    tmp_msg_0.rel_dir_x = 0.10489035267666902;
    tmp_msg_0.rel_dir_y = 0.8885000678115738;
    tmp_msg_0.rel_dir_z = 0.4222240872779205;
    tmp_msg_0.err_x = 0.5055210194795311;
    tmp_msg_0.err_y = 0.22512701038258587;
    tmp_msg_0.err_z = 0.10912264498399582;
    tmp_msg_0.rf_err_x = 0.2538654528344113;
    tmp_msg_0.rf_err_y = 0.7866271445435752;
    tmp_msg_0.rf_err_z = 0.543439274836987;
    tmp_msg_0.rf_err_vx = 0.11618609599965701;
    tmp_msg_0.rf_err_vy = 0.7762807181054816;
    tmp_msg_0.rf_err_vz = 0.9865319002139364;
    tmp_msg_0.ss_x = 0.9745292480467798;
    tmp_msg_0.ss_y = 0.5615841406809371;
    tmp_msg_0.ss_z = 0.6123567296183987;
    tmp_msg_0.virt_err_x = 0.7322439957880111;
    tmp_msg_0.virt_err_y = 0.8097698875765937;
    tmp_msg_0.virt_err_z = 0.25693408178530475;
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
    msg.setTimeStamp(0.6277873936959035);
    msg.setSource(64249U);
    msg.setSourceEntity(253U);
    msg.setDestination(13290U);
    msg.setDestinationEntity(32U);
    msg.s_id.assign("UEODLVXEOKEAQZXWKYWRAOHUHKVLIVXQHWOVDYWLXOZNMSRYRTGQBYVWDJNPERMSQYOTZEADLHIUXJDZRBEWJOPFFCJUFGWRA");
    msg.dist = 0.8463974547644373;
    msg.err = 0.8046669087618138;
    msg.ctrl_imp = 0.6128747870387723;
    msg.rel_dir_x = 0.8469851067746205;
    msg.rel_dir_y = 0.563642494747443;
    msg.rel_dir_z = 0.5430982084691357;
    msg.err_x = 0.594221099030935;
    msg.err_y = 0.2588715224621774;
    msg.err_z = 0.35198469716253566;
    msg.rf_err_x = 0.21690617320193728;
    msg.rf_err_y = 0.9642298929071954;
    msg.rf_err_z = 0.4487691089493657;
    msg.rf_err_vx = 0.8538283247784937;
    msg.rf_err_vy = 0.5794719788410956;
    msg.rf_err_vz = 0.30948131083510066;
    msg.ss_x = 0.6338939908823418;
    msg.ss_y = 0.010599923407369705;
    msg.ss_z = 0.6749206020052568;
    msg.virt_err_x = 0.09110121083179845;
    msg.virt_err_y = 0.12280570607895891;
    msg.virt_err_z = 0.6934315788140801;

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
    msg.setTimeStamp(0.18556043676708756);
    msg.setSource(28291U);
    msg.setSourceEntity(98U);
    msg.setDestination(29279U);
    msg.setDestinationEntity(239U);
    msg.s_id.assign("JVLKLAOCNHKEIAYJPMDHPLWZEXZZKKPXOEBULGAZCYADOLPMKQXRASMIQFRWONRGCMOAHRJLHTODTGDPJGMQHIVPCGGWQSFWVNWTQVKFDBZMNTBRAFOSKLHIUBEGKEQTN");
    msg.dist = 0.7867574106407565;
    msg.err = 0.8764513517011894;
    msg.ctrl_imp = 0.15674215055672724;
    msg.rel_dir_x = 0.03642157649130562;
    msg.rel_dir_y = 0.9049430164692422;
    msg.rel_dir_z = 0.09987104464018048;
    msg.err_x = 0.7441777612275964;
    msg.err_y = 0.921024417148258;
    msg.err_z = 0.27371913165855144;
    msg.rf_err_x = 0.3923480712853231;
    msg.rf_err_y = 0.7150010865957196;
    msg.rf_err_z = 0.1771111808828637;
    msg.rf_err_vx = 0.49634447243020796;
    msg.rf_err_vy = 0.6815151558525832;
    msg.rf_err_vz = 0.31191495342212794;
    msg.ss_x = 0.24717401168899356;
    msg.ss_y = 0.5258671494621414;
    msg.ss_z = 0.06534590734546708;
    msg.virt_err_x = 0.8878006950504108;
    msg.virt_err_y = 0.7455837205875671;
    msg.virt_err_z = 0.5944548966341807;

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
    msg.setTimeStamp(0.6177045165897332);
    msg.setSource(25386U);
    msg.setSourceEntity(158U);
    msg.setDestination(50448U);
    msg.setDestinationEntity(34U);
    msg.s_id.assign("HODBBSBFQCSQNDURPTQUUZEHIQPFJWKXQJAUGRGPNGHZRSYYZJXLWPJEMTTIUOFSNVRRPWXGMUIBCGFHCJMEBWWWAUVCCQEZEXDLJMLZGXPWLGHEKPKXGQDQXYFWLIGFITOCYHXDZAFOMTFVVQDOSJNAKXEJFAJCVZDIMOYESVBYTHYVQKBKKMJKBPHIYURSSCTNVWOFLSAVZNUZGWIHAMODTKPLOVRPEIT");
    msg.dist = 0.4421173229642489;
    msg.err = 0.5580975700998984;
    msg.ctrl_imp = 0.0478073491272486;
    msg.rel_dir_x = 0.14786748635604718;
    msg.rel_dir_y = 0.8776450352514987;
    msg.rel_dir_z = 0.665018619694686;
    msg.err_x = 0.24329460261766178;
    msg.err_y = 0.10432832998855257;
    msg.err_z = 0.7404069832052069;
    msg.rf_err_x = 0.7504512999771847;
    msg.rf_err_y = 0.9145137062107475;
    msg.rf_err_z = 0.8262073240571257;
    msg.rf_err_vx = 0.31901208108114976;
    msg.rf_err_vy = 0.8677531405794185;
    msg.rf_err_vz = 0.842920779905778;
    msg.ss_x = 0.8103325357262182;
    msg.ss_y = 0.5881608423799232;
    msg.ss_z = 0.8831518386921531;
    msg.virt_err_x = 0.429390768232755;
    msg.virt_err_y = 0.6973699303054931;
    msg.virt_err_z = 0.5297721135769068;

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
    msg.setTimeStamp(0.339609734209107);
    msg.setSource(13848U);
    msg.setSourceEntity(12U);
    msg.setDestination(1605U);
    msg.setDestinationEntity(227U);
    msg.plan_ref = 1002530771U;
    msg.id.assign("UTRIOAPLOSEXGKSBXTZNHTFENDXDSSUOOBOKCOLDZHEVEKZGLTTNQAIKJUJJJEXZHKDRGWJQMZAFCLVHXMXTEFINYFSASQIRQTQVLFEYRJLJOPLRXWKVRURKYCRYFDFSUHMCIADIGDTQZYQWCVRPBGMPHOSWOWWATWLDAN");
    msg.memento.assign("GCLRLXTMTIYHVYCBKRSJKIHHZFBWDQDQZLNUZWKRFIDMARGCMCSHVFRSQMAUIYYONOXYSSGFMFNLXTBJPKKUAEENYIEEDNVCJOOEJPMBPXNAWVTDAPUVTREOQLMYAAQGMFCNTHXCLQQZRLFWKZIDGZXUBDTVMBVOZONSKHASOFBJQCFWGVAZNOCUSJJDMNIHSUWJBJDWPKXICLEIPXTRIPBVKWPTQUGLXHDJL");
    msg.timeout = 49884U;
    msg.rpm = 0.829475568362524;
    msg.direction = 39U;
    msg.custom.assign("IEIVFGXOJWETQTWMELPADJKMTSFGBZVFISMPCOBWSGGAYBIYKRSLNRRBFZQYOKVOACOXMDXEUCRQTZLFGHXXVEOERQZSWMCTZAXGMBEYVI");

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
    msg.setTimeStamp(0.3450831948584637);
    msg.setSource(60310U);
    msg.setSourceEntity(109U);
    msg.setDestination(35025U);
    msg.setDestinationEntity(108U);
    msg.plan_ref = 2726240330U;
    msg.id.assign("UIFQEZQSBIBVRQOQYNGTTUN");
    msg.memento.assign("CGEBADMYBWULTWZNCCJPFQQFFUOJPSDVV");
    msg.timeout = 23880U;
    msg.rpm = 0.8623144053150225;
    msg.direction = 53U;
    msg.custom.assign("SVAFVSEJXKAIWOYXWIDNURTZPBOXYDIKDTRXGLQPGEEZMIERSKHQFFKHBDUDPWUVQYLGKZEPEDBTDYQSPFGHTZBPQOZVOYAWC");

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
    msg.setTimeStamp(0.5924830673801945);
    msg.setSource(47072U);
    msg.setSourceEntity(235U);
    msg.setDestination(52080U);
    msg.setDestinationEntity(5U);
    msg.plan_ref = 1995783708U;
    msg.id.assign("PXPZTTLTWBUYYLXJQNSQWZRMQGKUOIHLRYTALFPTPBPMUVEYONKIBOVJIWVBHTDKNEVIILMASTSKKPWSBCJQAYYQKQJZZDIOCGLJSUMXARJTMUGFHAYPZQNXGQMZBZQGCJMZSHOGEUWEFIOORBVREDTJRTXCSF");
    msg.memento.assign("IYIJVENGLPIECGIMTRXQURZVFHBZBBJAWTABJZAOCOFCNXXYQNKAILATIULZSSOMQLUWPYRSBVXMKHUXZFWVPVOWCJUJYWNNOZDPCYUSMBHAMWWSHE");
    msg.timeout = 1442U;
    msg.rpm = 0.6804750041539771;
    msg.direction = 190U;
    msg.custom.assign("UPQQRVRBJFGXYFAKTUNHEGVZYPQPKDNZOBCWHWTWQLSPFFVSILNABLEDSTNQCPNISXGCEYWUOSWXOGYDTFIUWOASAXDASULEEUUDJGYMKDRTMBUKOWPFAMOJHBJVGGBZLDCUAVNRZNVPWSQMFTYHKBCMVOJSKEWKLCIJMFOEVQCRRZKBFG");

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
    msg.setTimeStamp(0.49420030606978105);
    msg.setSource(64060U);
    msg.setSourceEntity(204U);
    msg.setDestination(21796U);
    msg.setDestinationEntity(57U);
    msg.plan_ref = 2920030790U;
    msg.id.assign("PTDQBSWEUOKFLVZMOBKAULPEFYSLRACZVROLBGBWZGEQFINNHASATFMRIHFBCIJXXIYESWYCKNIGPXXZSDANIOUDWMRASAQOKLHUGEQYGDOWDJQTYTJCEVHPHIYREPPMZVRVFHXWZJWKPJZXGXFIBSGCZDTHUFNUKBJTOBPCVAIGMENSLPMFLRSHZGTEZNVTJUQLGPILFXQYBHONDWYANQTMRVXNUVMJCWRJKYYBJTQKM");
    msg.memento.assign("BRJNKZIDOOJNPQRLFJUEDFGINBCMXQVUESSWYOAYAVBHFRUQSMJRIPSLTVHWFEQXKVUPOBKQEWLZIQKGLYGZYTWKGRCARPWASOXFUTFJZCVUMHCRUOGEHBMVHGFYEPBBTCXIOPVTZDXIHHAUEBEDXCMIISUACLPGKCSZIAVOCSJAFZKBLJUXHYBTCVDWLPRDMQWSAX");

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
    msg.setTimeStamp(0.2607060038448008);
    msg.setSource(27571U);
    msg.setSourceEntity(186U);
    msg.setDestination(5440U);
    msg.setDestinationEntity(127U);
    msg.plan_ref = 1654743466U;
    msg.id.assign("QZKRYLJSPHMNIYROXNWCAKC");
    msg.memento.assign("UFYEFHZLBITDPDDRKWBPLIPXXKHMGLBYNSEVQYGHXXMAPCMDPMPIESUOTCRXOLXZPXIMVSRFNONK");

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
    msg.setTimeStamp(0.2717157942568501);
    msg.setSource(16923U);
    msg.setSourceEntity(86U);
    msg.setDestination(26679U);
    msg.setDestinationEntity(176U);
    msg.plan_ref = 863700946U;
    msg.id.assign("USASHNNYNJZFSJOAMXBAZLQAKGVTXNLHYOSVQUIPMAJBRXWGXDYHIWRPFCLJFWVIELKGZCBHYQCUGVRIICAFOONFLOWHQVMMKKEBGXTDDUNNXFHCWNEWRYHRBQZSIUZGCTKPUMIKHPTCMSJPFZJSKDWBRBAZZDVBDWQCWRNTYUOBWZLMPLYLTRVEYEOGDXUCDQTMGV");
    msg.memento.assign("MVKLSHUXAOMIFZKRRSXDROAPPVORZRKLZQHJFXVTLTPIBGTBALCNEDSMDQTZZHEOPFOSAEEZWWTMUAPOQKFPUVVEYNPQLWXJDJISIIVMHHALNPGVHHWVNBURGGJGYCJKBOYLIGMBKYUBSMPXLQRYTEGZSRFKYUBJFEDUEQDW");

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
    msg.setTimeStamp(0.778558755099976);
    msg.setSource(61725U);
    msg.setSourceEntity(104U);
    msg.setDestination(35133U);
    msg.setDestinationEntity(175U);
    msg.op_mode = 231U;
    msg.error_count = 11U;
    msg.error_ents.assign("XBHCRMRKJDTXSQWODHJZQWBLUUXYDVHULTAIQJBOLSXYMYZCPYUKSRKVDSHNBLRBSDOLFONJFRBGEOPQIZGPSYLUDSJPTOUADWHIIAEAASWPPAFOYPZTFRCGYPGYONWRTQBXVMETEAENMJWEPMJHCQSTFNKOWZZXYHAUIDTHBIAILGEFNIMWKVMUCKFFJXTIVDWNNCRSZGUODRGVMBMKVLKBCEQJUM");
    msg.maneuver_type = 8418U;
    msg.maneuver_stime = 0.28001143558316766;
    msg.maneuver_eta = 27748U;
    msg.control_loops = 3598933535U;
    msg.flags = 181U;
    msg.last_error.assign("QRBCBSNYFCPKNUYJHMUDTYMZSSBYAIMGVHSYEDPUATVNMAFQPPCKMVHLPRUYOLBKKEXNEPFDWHJYHXLUIAYRMZLJOEIWCJLZRTZMBOGEXFILX");
    msg.last_error_time = 0.32175823972256057;

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
    msg.setTimeStamp(0.9041167602491659);
    msg.setSource(11416U);
    msg.setSourceEntity(121U);
    msg.setDestination(60238U);
    msg.setDestinationEntity(55U);
    msg.op_mode = 137U;
    msg.error_count = 239U;
    msg.error_ents.assign("BFZZNYJQZONDMBDRYNMYCRVNTFDFVVCHXQHUBAAJTHHYKNWLBKYSSXMNJTTUJZQUWLRVZOXLCGESSOXDVQCI");
    msg.maneuver_type = 31125U;
    msg.maneuver_stime = 0.6565578433601337;
    msg.maneuver_eta = 37161U;
    msg.control_loops = 1267019301U;
    msg.flags = 145U;
    msg.last_error.assign("EFGNOCKMWXWSTFDNNJLPGAQECPVMHNVDUREPVXHSPDIZOQTQTIUXVWYHLUSQAKXYZZZCCDSUMBKQPFJJDLEKXRAKOUCHKBGOLWWXSUYV");
    msg.last_error_time = 0.9636087489719692;

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
    msg.setTimeStamp(0.56290326247056);
    msg.setSource(55044U);
    msg.setSourceEntity(108U);
    msg.setDestination(3024U);
    msg.setDestinationEntity(103U);
    msg.op_mode = 228U;
    msg.error_count = 223U;
    msg.error_ents.assign("DESVDDLSFNZEUBDJOFAFSFHIIQNTYTDLONTLLFDNXIXFKVOBHJLJYHEGSMSTLKHNQMVJJNJCNZGTPQPVDYPZEMCVJVGUXKHCAPMBEYUAHQAQUMUHGIKZJYQTENVIGDZPAPOWQMCKBWBBSLECMZWQBYHTKYNRATYBCSFWTFMACCYSIZYWPIBXUMXAOONXULLDOBZIXRDFREWRAR");
    msg.maneuver_type = 14971U;
    msg.maneuver_stime = 0.8587479463010266;
    msg.maneuver_eta = 12301U;
    msg.control_loops = 3134730623U;
    msg.flags = 54U;
    msg.last_error.assign("YPOUSRGCSMEHPHKZLIPFPFVWRZMOAXCDIORIKTOJQNLCCUTCKVLRCYDTBMJSQHUOYYM");
    msg.last_error_time = 0.2556004834205873;

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
    msg.setTimeStamp(0.6922712542753988);
    msg.setSource(8262U);
    msg.setSourceEntity(157U);
    msg.setDestination(19002U);
    msg.setDestinationEntity(156U);
    msg.type = 238U;
    msg.request_id = 11180U;
    msg.command = 117U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.plan_ref = 174604120U;
    tmp_msg_0.id.assign("WORJMTIZYBFXCNFOWJETQVGKIAGWHYQKOAHOATBKGKMLVYARXYMMHVGCJOZRDLTRXQASUPDPRTPWRBSYDEJAESDXHGFEGLLEQMUSWCIIBQXFNKTMDTQYZMAROFFFUYAZFUYCHNLKWNPMDRJVXLNIDPTFCRGSTQZZDCZQPGJNWWKSLQEBSZTPSILXPVNBJMBFDIKSKRVBVYCLIHIXOQGHGZWXEIAJUUDYOABKUNUVCH");
    tmp_msg_0.memento.assign("BBIINKJEQFRDPBGKEEZNVHVBDTAPVDGKHQBQDIOUVGNRFFNPX");
    tmp_msg_0.timeout = 42759U;
    tmp_msg_0.lat = 0.4039087314150044;
    tmp_msg_0.lon = 0.7811473067555221;
    tmp_msg_0.z = 0.958020626040198;
    tmp_msg_0.z_units = 103U;
    tmp_msg_0.speed = 0.3613780089413542;
    tmp_msg_0.speed_units = 103U;
    tmp_msg_0.bearing = 0.23672733663511247;
    tmp_msg_0.cross_angle = 0.9643941257786129;
    tmp_msg_0.width = 0.11546261343155295;
    tmp_msg_0.length = 0.6087957820691281;
    tmp_msg_0.hstep = 0.8713949026677915;
    tmp_msg_0.coff = 246U;
    tmp_msg_0.alternation = 232U;
    tmp_msg_0.flags = 47U;
    tmp_msg_0.custom.assign("TAWFONCAJOQUCUWWWBKRAXTUXWCKKLSJJYORBWFTIMKNMPQSULTFUEAYWOISHRJYGDURXDYGTXMQIDPXXBIFLPVAIAHHBZEZXNNQLOLOGCKVNEQKBOEIFEDSKGSVKPMACZWJVPXECMWNDFCMZSOTNSSGQJARHEDJHL");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("JHCSZDOESPYPBLQEKPNXSGJKZURGMWEOJZMQXMPWJISOZCZBUHB");

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
    msg.setTimeStamp(0.2930890298069776);
    msg.setSource(60608U);
    msg.setSourceEntity(164U);
    msg.setDestination(1479U);
    msg.setDestinationEntity(91U);
    msg.type = 150U;
    msg.request_id = 41231U;
    msg.command = 1U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.plan_ref = 1824602050U;
    tmp_msg_0.id.assign("FPBKBGLVVAVCXSBYRMLZVYLFXRSWHWSDDXZOAAHWDOQYHIFRBDHECBRPGGZFIFCFELCJIFCYTPLMOIOIZWRYHDOMZEWGULJINOIYKRIGNJPKGIEDJETIDTTXMBAANRSQULJKJMUBAQKHAOTNURCNQBPVPXFHSDOFSPAH");
    tmp_msg_0.memento.assign("ZTCSZQMPUNZLQVXUTWNPSTPZQXCAZJRQFPRZGJTVZAWBGEJRYGXUOEDQPMYXXXIUHQBTWCHXSCGKHGUJMBNTMHICNEUEPFCEIBYNALAIEKQONIHDYXSEBJUNRBLFSDOCDCVORNO");
    tmp_msg_0.lat = 0.14731796282459564;
    tmp_msg_0.lon = 0.08775753399392017;
    tmp_msg_0.z = 0.17591762497746322;
    tmp_msg_0.z_units = 100U;
    tmp_msg_0.speed = 0.7759984293322866;
    tmp_msg_0.speed_units = 194U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.8399302210320997;
    tmp_tmp_msg_0_0.y = 0.6724158486572558;
    tmp_tmp_msg_0_0.z = 0.4445992131104297;
    tmp_tmp_msg_0_0.t = 0.8135198258242067;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.vid = 26149U;
    tmp_tmp_msg_0_1.off_x = 0.9260003161543631;
    tmp_tmp_msg_0_1.off_y = 0.11413584811952637;
    tmp_tmp_msg_0_1.off_z = 0.29367405979674965;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_1);
    tmp_msg_0.start_time = 0.2596586100681487;
    tmp_msg_0.custom.assign("QNEKKCAJTAJVZDVURGHYYHUCFOKQZSCQKCJYBOZOLVFYAOIOCASAIGNIQWRFFEBRHTYILPPIMWSBMXUFONBWTBEDGAOLBRDZZJRMMKERXQFLTVMCNMIKSDXFLSKWRJVLBVXUNMHPJGHNWNLPOODRQWZIAPYCUETIIGEFGTKADDEHFQXMYAED");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("TWEIEVHKMGNWNGCKPOQRVJBZBGMTNLGZGQLNNHWZZVPDGJEANKMWBTBAYPBIDDYIISSXUARFPTHBPNBHZULEPCKGJIXDDKGGLUXMFTFJRMYQOJTYNDKMCIKSLROOFTIUVNASVDECCBLEVSOZOTTBZSQIFCLWFYSDFQA");

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
    msg.setTimeStamp(0.779547384094615);
    msg.setSource(54854U);
    msg.setSourceEntity(117U);
    msg.setDestination(36349U);
    msg.setDestinationEntity(18U);
    msg.type = 143U;
    msg.request_id = 11791U;
    msg.command = 10U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.plan_ref = 3910388488U;
    tmp_msg_0.id.assign("IJPRUBSJRUAWMRSUFOJYBYFTZVXMIREJQJPTEWYKVFGDEVMQPFTONLMBJHHWSZMHILVNAWGSNDRQNZAERSOZTTDRAMCHBUCORVAXJEHQZVQVEEWLLIMXLVBDXDPYWDLFGJEKJQHICQOFXLGUCWMRKBMPTNYODRUSTZAQCFGPLXCBHGYSVOFBELPIPKOKTGPNZVPMKYDC");
    tmp_msg_0.memento.assign("OMVRDFLSDGPAKJWOEFDLPONDFF");
    tmp_msg_0.timeout = 42572U;
    tmp_msg_0.name.assign("QCSZEAXAOUKJVDQLFVOPYDFJMPWYRSUDJIBFGUTKMFJTCTCSZUZNWYMIWIIPDFPHRXFCUYEGPHOEUAPWAQKRRROBGLGKEFMIMEOWHSTQKTPLZTOJZLQOCHARRDNXVGCTLHVANDISCBSEFSGSWZKMLZAXBNKHYWJZIAJYLPNTV");
    tmp_msg_0.custom.assign("QTYRIMCWZKUWICUPQLVETRXPWNRVCSJCINECCEZOQDJSUANUQIPTTFWVYFTGISCAOHMEYBKSBXCHSGBJLSBRYFGMALFQLXXNPIAHETQJGYPNFHZKQDICAUBULWHDODTVKMWRBPIKGVLXBOGUDYVNETAZPPNXDKOMHZLEZBREWHYMCJHWVFJQYUPVJGMSMNFKZXQZMWOVUXIKMXFATUDHOLKOJPREXTZRBNYAEFRDHQOBR");
    msg.maneuver.set(tmp_msg_0);
    msg.info.assign("RELXTSWAVGIGHVSYOURAUUEMMDCNPMFRCFCMZJAKPKXO");

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
    msg.setTimeStamp(0.6770990464267554);
    msg.setSource(14619U);
    msg.setSourceEntity(56U);
    msg.setDestination(38749U);
    msg.setDestinationEntity(179U);
    msg.command = 225U;
    msg.entities.assign("VIKUKFFWPCYGDJFCHLXTOKCIHAFKXYUYZPPTLAUTDVTOMMZMIKNWWKAQDNVNPQZLRIOQEDQSUPCFNJGFEOQKVWMXQBTIHPRBNELUIEWHAMOOZUISZYSMKRSBAJBBVCJLWOXPGASCCVGNEXEBWYELUHDOREDGRKGFXLJSD");

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
    msg.setTimeStamp(0.8083860365805916);
    msg.setSource(47705U);
    msg.setSourceEntity(205U);
    msg.setDestination(27514U);
    msg.setDestinationEntity(203U);
    msg.command = 182U;
    msg.entities.assign("TLRGHZYOJKXOAGPBLSPQBQXELMFVORZPHTMAKYFDXBUXPKXKVLGOJMTBWPMVGSUXUNTGDKWJWNWNIEYDJATDYEKHUXNVZYCXBEIMPOCTFYQYCAUMIYCLUWWUBIZWHUVASTGBCHORSNFAERUARGCWCOIHMPQJOBKKIDGHFDRIVRDZEMPE");

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
    msg.setTimeStamp(0.9354584738679202);
    msg.setSource(15969U);
    msg.setSourceEntity(107U);
    msg.setDestination(23393U);
    msg.setDestinationEntity(155U);
    msg.command = 182U;
    msg.entities.assign("DVLCTIGDBDUCWNSLNETKDSXCHXYFKFXFMWWPYIRIGTBGCYVSLVLGQHMBZYEKYPHKRUJJGMWTSKISIRAQOYYMNJBBTKDNVYTKPXGZZRFMEORPSJJUZYUJIQQCDLAEEXPGMRJNCQHGADLUZDCGTQOVZVAUJELHPULWHRRUWFHZNQJWVBEHBNMPOBOENPZIFIZAUSSARLBGWKFOPRIDKQJFNEONMDVWMATAXOPFVCLIWCSAO");

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
    msg.setTimeStamp(0.3712551268606875);
    msg.setSource(7515U);
    msg.setSourceEntity(28U);
    msg.setDestination(45543U);
    msg.setDestinationEntity(184U);
    msg.mcount = 76U;
    msg.mnames.assign("OHXSJQXXPORKEUWVIHAYCFQHUOJWSDLFZVAPWFUDCICANUZVRPDXVHFRTELTEITPNJLGRUEIYMGHJABSWAFHDMACUEKCMQWDUHBKOSNASKBUBMKFOEEOIRFPGRBNZILUGSOSNPKQYXZMPRCWBPVKITDMQKHYNNP");
    msg.ecount = 239U;
    msg.enames.assign("IYNCNBKECGFHYFXJJJPVECVGQRZZBWXTIJDBBPBHHQMJXZREDRODDIKYZHUZMBLCAGCCLUFLDTVWDXNPFZVSMKSYZPFKNWQWCEMOLLOJUDUSUKLWALONFATNTTAVCJFRELMVHQBDNNXVSVXDNINOKIRWFQWQPQXUOIJKZXXSMMYUZAIHGSQWCKAOTSEQAAKPYTRKPRUYZYAPWSMSREPGETLBBBOYVYRXGDUCTUHFLOQ");
    msg.ccount = 128U;
    msg.cnames.assign("NLQLXPMKMHBCFRCZSOMJBLXHTZMWM");
    msg.last_error.assign("NHHHWXLPFPIYLUDXHUHROPXMIRNOGVLDLZZTUCXKOIVYTAYSYVYTTDGJZIJAFGYRYGMBEXEVREL");
    msg.last_error_time = 0.785657456692761;

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
    msg.setTimeStamp(0.7417974298604385);
    msg.setSource(61722U);
    msg.setSourceEntity(198U);
    msg.setDestination(8278U);
    msg.setDestinationEntity(81U);
    msg.mcount = 98U;
    msg.mnames.assign("VRJGWZNFAPOBJAMALBYLUPEONUKZEJBGTUBXJOFIXQVWDKCKMUDZDFMQHBSPZAWTZFTQEACWMBWSSYGVVWSNBOHQJEPLVRCSORBAYFXYUTOANEZYTKQMREMUQSQFHWIPDBQKHJCGLCZTDRXXDXNMDHJEVGFTPGICDMGVKHYOXQHIRWEOVYISPKGLCRSTJLQSOAAUVNFDOZFRPNULIHJZCXPDTRXNMLB");
    msg.ecount = 67U;
    msg.enames.assign("DMODXWXQFKVCBTXRJU");
    msg.ccount = 117U;
    msg.cnames.assign("TAHOYRFDVWOOUKBEATTPTKJQQZRWZAGHDML");
    msg.last_error.assign("ZEXAQJEJDUYUSMPZOVWCULMKXQKDHPPNPXCIBOLZQENAXWAOWUYIBJIPUNEOKSBALYAGFMICRZNYNSHSHRCXNBXQJHWQZKTTEWURRZMDZAYSGHHMYZNTPPLEVIFDORIJFEHGXAUWWSWYDRGJKIKMCJVZFKGBQRTOWNLBJCVPNDVLTHKEFUVMZ");
    msg.last_error_time = 0.526952926174025;

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
    msg.setTimeStamp(0.08011228503542);
    msg.setSource(10221U);
    msg.setSourceEntity(147U);
    msg.setDestination(56932U);
    msg.setDestinationEntity(12U);
    msg.mcount = 74U;
    msg.mnames.assign("RNTBHNSTXCXPTOZRYVESQCKQOQILLAYUMQDRGTMAWMSMGUYTWUJLPZQOZBIIMNXPGYDXVWJWEFZDYPRRHJOPNIGKKSVLJXBOKDMDUPBYQWYKQDRUEBLCC");
    msg.ecount = 166U;
    msg.enames.assign("KETYDZYSMODTBTJBHWIUCDCMAPRLPRTMQPJVWULIGTQPWEZQGPXLITLNNKJZKHIOXCWSVOOONECNMRJUQLCZJHUHBHWEDVBZLFFVJGUFMDWODSGVFSEQRWDGNUGVMIFXLQCAAXPHKXTTJUYSIIPXMCSGZCYEARBACUABLNGAVINPHYHNTJYGMFGEORJ");
    msg.ccount = 105U;
    msg.cnames.assign("SXFCTIPYQQTIBOZBATDCWMECNWMBHPMNVXVXMLXSAIJMHMFOBHDSJVDQWLFLSVKXOIUREZGGPQBO");
    msg.last_error.assign("LVGWJPULMCNYFBVHJNODUVXMSZARFWMBMCBDIFAQEOAYRZLFIHFASCSFOUHSVYBIMFUFZZAOMGSXOQQHKKLTIBQWJHZGTXYMRSENOWYTIJDSOPSFCQPUWCKWGSTALDMRDGXEXNPLPQCCRLV");
    msg.last_error_time = 0.3310179767607704;

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
    msg.setTimeStamp(0.4265234236367088);
    msg.setSource(64707U);
    msg.setSourceEntity(234U);
    msg.setDestination(19643U);
    msg.setDestinationEntity(202U);
    msg.mask = 17U;
    msg.max_depth = 0.6641988284449029;
    msg.min_altitude = 0.9609529418036267;
    msg.max_altitude = 0.27629494996340986;
    msg.min_speed = 0.827328224585898;
    msg.max_speed = 0.6866962148342884;
    msg.max_vrate = 0.05687309070419633;
    msg.lat = 0.8588986681250442;
    msg.lon = 0.16333248924152788;
    msg.orientation = 0.9757475115865636;
    msg.width = 0.10271003363801978;
    msg.length = 0.5315319631949202;

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
    msg.setTimeStamp(0.7494393764928681);
    msg.setSource(14761U);
    msg.setSourceEntity(127U);
    msg.setDestination(52527U);
    msg.setDestinationEntity(117U);
    msg.mask = 191U;
    msg.max_depth = 0.15856840336086997;
    msg.min_altitude = 0.10941000150083069;
    msg.max_altitude = 0.6078303439565352;
    msg.min_speed = 0.4187226817197285;
    msg.max_speed = 0.9160024262674501;
    msg.max_vrate = 0.12542394659922118;
    msg.lat = 0.8469370844867541;
    msg.lon = 0.9356684939461983;
    msg.orientation = 0.957736780060932;
    msg.width = 0.9445576874305406;
    msg.length = 0.5107265224974455;

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
    msg.setTimeStamp(0.44586811002445836);
    msg.setSource(24441U);
    msg.setSourceEntity(30U);
    msg.setDestination(30282U);
    msg.setDestinationEntity(54U);
    msg.mask = 13U;
    msg.max_depth = 0.7307594433247829;
    msg.min_altitude = 0.24371026605589874;
    msg.max_altitude = 0.13610288444249174;
    msg.min_speed = 0.9051672968268288;
    msg.max_speed = 0.5104437094923879;
    msg.max_vrate = 0.7225098068751551;
    msg.lat = 0.8002439423977866;
    msg.lon = 0.5052023482388919;
    msg.orientation = 0.6329990975113048;
    msg.width = 0.8306642597760832;
    msg.length = 0.6468176242185789;

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
    msg.setTimeStamp(0.8606610814572597);
    msg.setSource(19615U);
    msg.setSourceEntity(52U);
    msg.setDestination(22927U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.6939689190822476);
    msg.setSource(34589U);
    msg.setSourceEntity(118U);
    msg.setDestination(5222U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.14160125810916924);
    msg.setSource(59808U);
    msg.setSourceEntity(205U);
    msg.setDestination(12026U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.7011191177135702);
    msg.setSource(47627U);
    msg.setSourceEntity(21U);
    msg.setDestination(41333U);
    msg.setDestinationEntity(60U);
    msg.enable = 19U;
    msg.mask = 2028852420U;
    msg.scope_ref = 3282519073U;

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
    msg.setTimeStamp(0.3784885305258654);
    msg.setSource(22067U);
    msg.setSourceEntity(182U);
    msg.setDestination(9223U);
    msg.setDestinationEntity(156U);
    msg.enable = 195U;
    msg.mask = 417504382U;
    msg.scope_ref = 2173935166U;

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
    msg.setTimeStamp(0.4290528436224651);
    msg.setSource(19727U);
    msg.setSourceEntity(150U);
    msg.setDestination(60700U);
    msg.setDestinationEntity(188U);
    msg.enable = 26U;
    msg.mask = 2042022566U;
    msg.scope_ref = 3377327024U;

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
    msg.setTimeStamp(0.1476926952123343);
    msg.setSource(18448U);
    msg.setSourceEntity(138U);
    msg.setDestination(22023U);
    msg.setDestinationEntity(115U);
    msg.medium = 153U;

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
    msg.setTimeStamp(0.16378959977590424);
    msg.setSource(25327U);
    msg.setSourceEntity(6U);
    msg.setDestination(37123U);
    msg.setDestinationEntity(58U);
    msg.medium = 0U;

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
    msg.setTimeStamp(0.4780124835884898);
    msg.setSource(25279U);
    msg.setSourceEntity(249U);
    msg.setDestination(62927U);
    msg.setDestinationEntity(138U);
    msg.medium = 99U;

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
    msg.setTimeStamp(0.5087537650884685);
    msg.setSource(39492U);
    msg.setSourceEntity(170U);
    msg.setDestination(14511U);
    msg.setDestinationEntity(103U);
    msg.value = 0.6217038399537687;
    msg.type = 49U;

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
    msg.setTimeStamp(0.07989099201215455);
    msg.setSource(29244U);
    msg.setSourceEntity(42U);
    msg.setDestination(31083U);
    msg.setDestinationEntity(81U);
    msg.value = 0.724613866837534;
    msg.type = 17U;

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
    msg.setTimeStamp(0.5416306541864162);
    msg.setSource(27977U);
    msg.setSourceEntity(212U);
    msg.setDestination(56295U);
    msg.setDestinationEntity(93U);
    msg.value = 0.4630076827670404;
    msg.type = 234U;

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
    msg.setTimeStamp(0.21764215875921022);
    msg.setSource(28775U);
    msg.setSourceEntity(108U);
    msg.setDestination(25867U);
    msg.setDestinationEntity(65U);
    msg.possimerr = 0.7195869500528386;
    msg.converg = 0.18253720189573774;
    msg.turbulence = 0.3381506638501084;
    msg.possimmon = 172U;
    msg.commmon = 78U;
    msg.convergmon = 21U;

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
    msg.setTimeStamp(0.08624692178046833);
    msg.setSource(39861U);
    msg.setSourceEntity(131U);
    msg.setDestination(29659U);
    msg.setDestinationEntity(137U);
    msg.possimerr = 0.5322414655108677;
    msg.converg = 0.6274589320855238;
    msg.turbulence = 0.7248148292716862;
    msg.possimmon = 64U;
    msg.commmon = 234U;
    msg.convergmon = 196U;

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
    msg.setTimeStamp(0.08521240432057464);
    msg.setSource(10538U);
    msg.setSourceEntity(201U);
    msg.setDestination(53608U);
    msg.setDestinationEntity(107U);
    msg.possimerr = 0.988037689027342;
    msg.converg = 0.8468241521436085;
    msg.turbulence = 0.9965914769788884;
    msg.possimmon = 220U;
    msg.commmon = 26U;
    msg.convergmon = 117U;

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
    msg.setTimeStamp(0.04721778457766734);
    msg.setSource(42651U);
    msg.setSourceEntity(187U);
    msg.setDestination(42223U);
    msg.setDestinationEntity(249U);
    msg.autonomy = 32U;
    msg.mode.assign("YUDCZRSGNIPBXMCOGZAKVDWITQLGXQMHLOXIHLTYNRIPBTBVFRYSPSQDBIQVAAUXQQXIGNEFQPWPMOCYMJTYPAACKEUEJFDSAQYEZQLYJVRLQDUXLFPVTTOCFCDZVBA");

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
    msg.setTimeStamp(0.9028118108227913);
    msg.setSource(48160U);
    msg.setSourceEntity(4U);
    msg.setDestination(59975U);
    msg.setDestinationEntity(227U);
    msg.autonomy = 114U;
    msg.mode.assign("QOQLZDELOKEXJNWAYKXQACT");

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
    msg.setTimeStamp(0.4567991230051939);
    msg.setSource(40906U);
    msg.setSourceEntity(31U);
    msg.setDestination(9597U);
    msg.setDestinationEntity(29U);
    msg.autonomy = 32U;
    msg.mode.assign("LDAAFWXSMGZMPOTTWBHOMBZYENUNNKSIQELTBQYUIZIVBGZMFXFRVEJPALENEVIBTTYCVAOHRDWYNEFNXGVOIWOFRLRDUOXAVJCSDAJZQZLZLMXNLUDWOPKXQMPTQPHVMKEOEMRHFQDPHPKGFKVZCRXNDYGXJTWQESJEVIQJHCRCOYOIKRQGUUCAXSRBIGJKHUNLAGSUCJMJTHWUZTVPWCLYCPRSBXSAYKDBUFG");

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
    msg.setTimeStamp(0.43613438725851594);
    msg.setSource(58190U);
    msg.setSourceEntity(211U);
    msg.setDestination(38045U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.2137989195861103);
    msg.setSource(16335U);
    msg.setSourceEntity(121U);
    msg.setDestination(16189U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.2727468817213893);
    msg.setSource(42053U);
    msg.setSourceEntity(168U);
    msg.setDestination(12611U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.7551725535016606);
    msg.setSource(38839U);
    msg.setSourceEntity(126U);
    msg.setDestination(51121U);
    msg.setDestinationEntity(192U);
    msg.plan_id.assign("XTCVHWHRLSWQIXKNMAOZQLTOBSFXWWFWQTOSEHSSZBWSPEHSXLEZXYVFRJPUSMKQIANDXVEFKNFBAKUBKGWVJXGTTOOUFLMVPEYQYYDZRJHCCULMBFMBUTNPKFCXELHIHTYMMPNGFEDCDLVA");
    msg.description.assign("ATAIVOWLOFFPJKTAARLXUPHCZNQFLZHBVVPXSDKPKQNKPODMOFCSAETIUANRXDCISKWUEFJOPDBJNHLWVSPGBJGGGCCQORNXZTXIDHHCZQYMRFBBCIGVUIRLACDZREIKGZYTLMXVYJFSHXXYSWQHJDOEIQWTUWHNSARDATFBVYQCKRGJOUXPFTEHQRNEGQLJHYSYJVMMPWXMUNEEBLY");
    msg.vnamespace.assign("WFZBUELYUYHIA");
    msg.start_man_id.assign("ABMJYGNHYYSBMJGQEUPWUHWNMXLIJDIMHJAAWXPGBRYYIJXOSVLWZXPWDXBPTNZOEORUZAIHIDFRAMFRXLKEMTCTSEGVLNBNUILTCLLGTDFK");
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("LWFYTMRPFKJSBSDECUKJSJCWXTRHABXCQQLLQHHOURTHDLJEPZVUJIRGIGTBUQFLBEVZQGLFNYSUNDDNBOZANECRSGXZAWGXAFBAEPMPJPXVXKUOQQGQOFEMMVQCXMILBAVFCRABHSYYWNVZATLHKNCMIDEESKLRIHWWQGJDIJHUKRWDPZWSEEIAJNU");
    IMC::EntityParameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WLZIZWUIRRJDRVMKNGUQOBEBSSEGELXFRTYCSFSUNCEPMTZMIAKCGMAXYNTEFJAYWVOTLKGIVFSAUYQWWVHAHXAHPUDVJOQCTHFGDNCBFNKNWHHREQLHEUQEIPZXYASLBACBXDUDDYXKKNBPWLKQZPMFPLDOOKSXXYKYCIROJYQDROVJFJEMGUVIWVBGRSFHWGPJAHCZGBBPHVQWAITQMRNIEZJQFT");
    tmp_tmp_msg_0_0.value.assign("JCSFMGDVXTPJALJKLFWTHCALMYGOVPISWPZKBJHZFAXZMYZXJWOC");
    tmp_msg_0.params.push_back(tmp_tmp_msg_0_0);
    msg.end_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.6367295275232624);
    msg.setSource(35378U);
    msg.setSourceEntity(83U);
    msg.setDestination(20799U);
    msg.setDestinationEntity(35U);
    msg.plan_id.assign("QSWNMQGBXLFEPTDCWWUYHJCIOPJYUBZHZLVZJVOGMEGTEFPSKXYRLSSLEBTCOLHFRDTWWTOUMVUWINZSCYDPMSAOOGKFDIASLLHVVJJQKVIFVXORNAHHMODGIBANMASZYURWEYZC");
    msg.description.assign("NLSRBDPXMFYTJQPPKWQKROOHAFQYMBVFWORBXPFGVOSIQWWVIWSLBCCAJCLKNEDLZRYVHWROFPAMUQHJWDDRZKIIMUGJZTCKTGHZIAQKGNTAUMXZUCWVQTUTCRHZGBAJEP");
    msg.vnamespace.assign("NNXGHPKKVICKVGYQQMFAQWNRLXZNEHHHUMWXSRKIOSOBIQMLRJUFFWUMJFJKDLPGNNBZSZFXAIMSHPRLBBTOREYARCZBOLRWYVKJFRQHWOOUVHCUJXKANNJGMYDDHIZASQWYEGDFEQLWTPZBYXMGZWESKNYTUGEABIVUXTPEPPTLXVJDALMIIMWPJZKATYGDSCOAUUOZVSJP");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("LTZJFHJMUIZB");
    tmp_msg_0.value.assign("EBZZLCSHMTJDRXKRMFIQAYTQERNPBORFJKLGLQRVYNXZIXABCVWOVCZFGWJFFADKSPLODNMHXCQEJIVXHQPHSRBXVNVHLGTFQIGAPTPEJDLSGQMVVYPGEKMNCUXBWFZPWRZYWZJHSETTJROEBPCHYTTVA");
    tmp_msg_0.type = 13U;
    tmp_msg_0.access = 234U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("HQCFASWFQCABICXFLWJOJRHLHYSVXPIDYOEMGZZAZUJHWYSOPMHATSOZZWPUUKFJZNKCNMKCAQXLKPFNOZUYDYKTDMTLEDRIYKMNSGSKIUXXGLCEOHTAVRSIUCDYXYWBFVHVQTWBKENPVGIYFHRGGJJTEMSQBVLXENMLJRNCDGAFOPTIQIDFOS");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("WLCYKQGAUEYGVVEBOWIBFTGFUYPPMZHRRWPJINUEQQJNLRDGXCVHZSCZJSOLXGVMVQEVZMYLPSEUOWENSXYCUMBNHXODBWPTHQFEKJBTRCFUSMLMUNDLHDDHAWRXTGKAKGYDSPNQUUAAVRQNNZFGIPKOTYTXCIIPMLJHKJSTSJROFOEIBFUOJJRZGIMYVAQKSJMAWZEZYIKBFOQTARWDFNCKBLGIWHLXOSAYCI");
    IMC::VehicleFormation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.plan_ref = 3863846631U;
    tmp_tmp_msg_1_0.id.assign("VTSEAOEEGWCARRESLFHGKWFCCFMVBBBNVRBQHCRONJYVZNCZAXTFXJSLKJKTLFPQFZWZJIRUAYKUGXJHVWSCTQUOLSNMSMSLYGPVXLXPTOFNLODIRUWGDXL");
    tmp_tmp_msg_1_0.memento.assign("APPOWFLCKUCMAITTBZSAKVZKZVIYKGCLXTVRSBIUGVMETWMZPNXKDXMSEHCJDFYNPMQUCHWBKEOWPXDOCUJBCGFEHAZPLLGFNNJSVLGRGGAUJORRJNKVPDAHXYBFAVINWLHHIFQCBUINGJEWE");
    tmp_tmp_msg_1_0.lat = 0.9514914954840353;
    tmp_tmp_msg_1_0.lon = 0.7535484777809444;
    tmp_tmp_msg_1_0.z = 0.9144445894670151;
    tmp_tmp_msg_1_0.z_units = 226U;
    tmp_tmp_msg_1_0.speed = 0.5770156123457092;
    tmp_tmp_msg_1_0.speed_units = 19U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.x = 0.3091980580167236;
    tmp_tmp_tmp_msg_1_0_0.y = 0.2253681561183981;
    tmp_tmp_tmp_msg_1_0_0.z = 0.2112713104391093;
    tmp_tmp_tmp_msg_1_0_0.t = 0.05855640884710256;
    tmp_tmp_msg_1_0.points.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.start_time = 0.21528360361230914;
    tmp_tmp_msg_1_0.custom.assign("UUCRRQDRDGPNLQGYTDTBNTRLEAENTYKIBZSXPOHSVDYCJXGPBWYRIJVDBMIDXSFUFWMOKPLFUFLFSHHWNHRKMFVMQNJMEAZEFGBUDZXZWPZVHBOYCAININWZZQAFICJEKHOQDHTQVVNYRPWMXIQGXROJZAXWYIFVCECOCSGSIUXAUXBKZKQWKGRJJMLBTKKOCVGPEQLEDIGBLGWYQDSVAZAWKSANYXJOOTSUHFEUYCJPLLMHHRMLPVA");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::CustomManeuver tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.plan_ref = 3038610528U;
    tmp_tmp_msg_1_1.id.assign("DSKNZPVQRIDWRPFHOVXIMUDUVAXHCCOFTZEYQILODCYXWLGZUCVAOVUHYZBWIEPTE");
    tmp_tmp_msg_1_1.memento.assign("XBGFUVUJPDDQRLZLNXDNHSKSFOUXEXSWMKWZJNTGLEIJIFZHTLXCYHFFXCRKNRBSKDNYSIIJOOJYKWDOAVKTALBBGBAOQFPEOCYRUZECGPEOKCUPX");
    tmp_tmp_msg_1_1.timeout = 517U;
    tmp_tmp_msg_1_1.name.assign("CXBGVYBNISJLADVHYRFEKMILMWHOMDRZPMGCQSHBLHIROWOHDYVZZUMSRONSWOERSXYAYXGKINYMUAPAIPUACFOKFOWBBTKFGANLDXWUJKCYDWASUKIEQFGDZWFDWYGVQZIJTTNJUJLKYDAHNGXSTJVZPLEI");
    tmp_tmp_msg_1_1.custom.assign("ARFZCLBNJLDPEOZZQWAOWGWVODSFWGGUABHWEHANXRKQGHEQJLYBNTTYIDIWZ");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::ButtonEvent tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.button = 236U;
    tmp_tmp_msg_1_2.value = 18U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("DHCLUVNNZJXHODQQ");
    tmp_msg_2.dest_man.assign("WTEJXLOBEIJSKBCHVRHJFNNGZYMNNCYMJMMZABEFQRZXATDJAO");
    tmp_msg_2.conditions.assign("ZFGJKFVXOGQLLEWYRRUVTVYFGTKHQKNCGPGEEISCKPUEUHGE");
    msg.transitions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.415375312521422);
    msg.setSource(64380U);
    msg.setSourceEntity(244U);
    msg.setDestination(20903U);
    msg.setDestinationEntity(73U);
    msg.plan_id.assign("SEUATSOJLRXYCETLFNDYQYUMZUHEFFJJSGGXHICOTVNOSXWMNWMECRMKGYGWANQFLANAHKDEPSILFHZKGFUSWSTUWWVJPGDCADMXBSZNMBCBOFYQDIBUEEZGOOTQHIQYJKLHQVVTJKDZKTUBDRDQLLPQAMIBCZHYYZVHRHONOVWRNWNTIKGJVRXVAWDPAQMEEHGCSWATCUJARLYRPKMBLFJEOLCVJXI");
    msg.description.assign("KHRDEXFNASEHFGMTXNFEMVZDTILKFSZCOTERJIYFOLWTPYDBWZBUAWBDZNLRTICSEZHOJZFKJAIXGCAMHPQWHGOUYRGCUXJPABKGFLUXLJORSWQVKBWZTNCCKSYPRFPPGYLKMHYQDIAZMIOGQBEBVGBATJKMMWUXRTMADPVMQVQYCEKSVXVYIQUSVBSUBDOJHL");
    msg.vnamespace.assign("SBBOFTPRZXCUCQZDRQPLHLAUSRJELLPBSIYKDQVDFIABGVYAGHRCFUOYIPYWAUMMQJXYWZKHQPKPFLLAZSXKVMODOAZUDEIJIKLUOIXROYSGZPEQYNPMPNGTSQVYHHYVJEFWDCRTWWETUSYLRGNVVDJEWWXCKBKJBVZMFNTVNHMJHNPLGAIWNDGRLCJETNFOJWAHRFFVMGOHAXXQAXRDNONZTICTOSSBCZXICQCKMEMHK");
    msg.start_man_id.assign("JEXAEWLXVVOZAKUXMYAKHCHEBECRAGNJJCFQUSGCGPPLSITRMYVDMEEIMTBKIHBULUUQZXLMWKTGZWMHERDYZGDCMBXDRLDWMCTPEFYJOZJDLVSAJRNGOSCMYVNHMVKDHPQFWBZTDTNELPZFXQVIHKZBOSVFWSIXGFWCFWIPAWDOKQSYAAXSIYBBWLQGPOYNAIBNBURGQFRCJXSRICYOSNNGUQPQVRPNTUIJHTXVZJTUJQL");
    IMC::NavigationUncertainty tmp_msg_0;
    tmp_msg_0.x = 0.23810522906925324;
    tmp_msg_0.y = 0.5435917171204101;
    tmp_msg_0.z = 0.6880912517403184;
    tmp_msg_0.phi = 0.6484421652160025;
    tmp_msg_0.theta = 0.019082123463628475;
    tmp_msg_0.psi = 0.7512546289685362;
    tmp_msg_0.p = 0.9582872174209442;
    tmp_msg_0.q = 0.18231902526192523;
    tmp_msg_0.r = 0.9429076083613764;
    tmp_msg_0.u = 0.8859968744251472;
    tmp_msg_0.v = 0.27213523743548085;
    tmp_msg_0.w = 0.696969399287583;
    tmp_msg_0.bias_psi = 0.625125232206385;
    tmp_msg_0.bias_r = 0.6789463920945339;
    msg.start_actions.push_back(tmp_msg_0);
    IMC::DeviceState tmp_msg_1;
    tmp_msg_1.x = 0.6919195969469617;
    tmp_msg_1.y = 0.9574473337307433;
    tmp_msg_1.z = 0.42024884712286625;
    tmp_msg_1.phi = 0.9070715116944644;
    tmp_msg_1.theta = 0.1738804516579192;
    tmp_msg_1.psi = 0.4348321167876613;
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
    msg.setTimeStamp(0.1035662165300888);
    msg.setSource(50270U);
    msg.setSourceEntity(45U);
    msg.setDestination(42756U);
    msg.setDestinationEntity(207U);
    msg.maneuver_id.assign("LBKGKTUXAGNHERHKRVDWWDVMSEKUVTJHEMQHJFZJZLSBOIMISQVTZMXSGCISDXMPDORHSZEDYQCETIJTEVXGYPWCRNP");
    IMC::Memento tmp_msg_0;
    tmp_msg_0.plan_ref = 3057206385U;
    tmp_msg_0.id.assign("JVJPLBNVIQXMEVDVMZJGMNYLFHBPGYLSECXAGKZRQTTZSNAAKDSNLCLRNIRHSFKFEFWIAPVTXPEUXAWXIBJFRUUMZHKWZOAMMCRRBFSISXSZHZOBPUGDTFHBKBDKKTGGMQHWVQGCNSOFNWYAJBQMZGYRLKIOLTRTHXJWXBFEPQQLUQIQEIJJZDPWGEHCXNTOFRDXWBUWAECYCYCUMDVLONMOSKONEJLODUVE");
    tmp_msg_0.memento.assign("YSIUPXTDCIALTPMBECRCVWQIMRNZSRNKJVNLNOTZLXZGGYEAQSQWSVUFKNCATVVVVXBLWNSIQJFEYYBHHTAKUUPMZHJCSBFPKTFKINWREDZRPUDMEJCWCEEFGDNXNPOGDTDOHFLABGRGYXWYXIWFDSLOAPMFOMZBKJTHUAMNQBHAYJRDOWLGZWCQHMUYDPPBEYXIRVGXRJXICCDIGQJXLIUZAYBFTJHGMSJOWEKUSTKEVQM");
    msg.data.set(tmp_msg_0);
    IMC::DevCalibrationState tmp_msg_1;
    tmp_msg_1.total_steps = 238U;
    tmp_msg_1.step_number = 21U;
    tmp_msg_1.step.assign("BGGAVDTEHIEMWHRKWDXWBIYAPVACJVLNQOTLYQUWFRJNFDKAZODOERQJOINIITTDMCCSZDZARXBEMXMHVSPWJKSCLFNYDNMPMXFYSSTGHKDYUQBKDEPWOHTREDNAV");
    tmp_msg_1.flags = 7U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::TrexOperation tmp_msg_2;
    tmp_msg_2.op = 154U;
    tmp_msg_2.goal_id.assign("EEQJIJCZLRQXZRXBELKANPRJANIYSZJDYHRDNVSPJQLAOKGCGCSQYONPWGGRMSDZTUYGUKJLXMLMWZHCWQBTVYKSOLCTWBWJPCCHCPHVOSENMADJFFFP");
    IMC::TrexToken tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.timeline.assign("UECXJUFYXKYIORDFSSTLYLKRYMWMDENWGSKCRXCORCZNPTWIPMOEOFLQLFAPGVAHINSMKBPUDAETNPIUMJZAXQGMHGDTFJAFSJSSELZZMCGAIPUWLFWRQYPUXEPYHHEEVQPDOBSRGCRWVRZYQVVXGGSDJNUJOGGXTTUJZEHTXHNDCWVJVJSBBYRZBOLNIIDTHNMTVFZWACBILBBMQBAVWVQKZUKKKNDKPIHXRUJCQZWCFHETLODANH");
    tmp_tmp_msg_2_0.predicate.assign("XBKTIHWSXYVBYSYXVMWFZENMFEJMODEYWVADXTFLXUTZGQIWZMABHVNQGAIVFHILRQMRKECAUVLICQNNSBKSATSXUVGOABOCGIOULFDRHIAJAFJRDYLFDNBQLOFPOYZJULXPELLSQZPTEQMKHYYCTRTKRYPCUOZRHKPHNFJQGDGYJEWBJXDCSWGPZOJBGPIPCEZEMRORDCDPBAKMFWLUSJWWKVTRGAIGQOKMNMT");
    IMC::TrexAttribute tmp_tmp_tmp_msg_2_0_0;
    tmp_tmp_tmp_msg_2_0_0.name.assign("EBGYMHEEXRWEFNWDYSOVJQTUIDXAHUTUJMKJPDZOTQJSQRIMFWDAAQXHICDRXRZFIYUDZXXFOCWTSPWPLZSYNFLYQCVUFLQGRKJZLVTVC");
    tmp_tmp_tmp_msg_2_0_0.attr_type = 106U;
    tmp_tmp_tmp_msg_2_0_0.min.assign("RQYQPTHVYDLYNCSFJJJTZAOEMFVBSNQGHTXYTKSAYZHAOMRBEPGKMMPEKKOXRFOOUQGEDUZBOWRDCPIFEDCKZRLSJVATQPLWCNNZBNFAYJ");
    tmp_tmp_tmp_msg_2_0_0.max.assign("LKIQNXUTSPZUUBDOVZTGTVOVIAUXAEYBXCYPPRRXPFATKWZMELQGSWNYPKFMIGJYQEQFIOIQEODCNFDJJAOFHNXGXS");
    tmp_tmp_msg_2_0.attributes.push_back(tmp_tmp_tmp_msg_2_0_0);
    tmp_msg_2.token.set(tmp_tmp_msg_2_0);
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
    msg.setTimeStamp(0.853974885321217);
    msg.setSource(16624U);
    msg.setSourceEntity(100U);
    msg.setDestination(38027U);
    msg.setDestinationEntity(201U);
    msg.maneuver_id.assign("MJRIJEPHHULFBDVW");
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.plan_ref = 905820101U;
    tmp_msg_0.id.assign("EXIPCSUDMLBKQDLRGNNFQBJPEJIFOCOFKIGZVLGYXHRUYMJOIHRVKPFTWHZEXDQEANCFWDQRWWFMKNHYDSXDTWYPQPJTSEOKLYSJHOYQBZIULCWTUHKJCDOYYAQZLZNVSFPBKIAEXBCPCVEWSTYGFBXEXUUFNQZTUGZQIPITXNLWOEUVRHWMKNTMVXMDBHWGHTZAMMAADLEPAJCSGGOHGRCORX");
    tmp_msg_0.memento.assign("VVZYAHFCAOQBPBQCPSAJTTFTIQLOEUXNDEWSWGHBGACMHRJVDKPSIYUQHHAKUICZHMNVJPQNCUFGFOOCTOQDSMJ");
    tmp_msg_0.lat = 0.022682912200932326;
    tmp_msg_0.lon = 0.6828559659997739;
    tmp_msg_0.speed = 0.7676077111414327;
    tmp_msg_0.speed_units = 198U;
    tmp_msg_0.duration = 24694U;
    tmp_msg_0.sys_a = 57945U;
    tmp_msg_0.sys_b = 50705U;
    tmp_msg_0.move_threshold = 0.8518459295162398;
    msg.data.set(tmp_msg_0);

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
    msg.setTimeStamp(0.37906704652890055);
    msg.setSource(308U);
    msg.setSourceEntity(157U);
    msg.setDestination(6813U);
    msg.setDestinationEntity(34U);
    msg.maneuver_id.assign("PSVOXHMBILIYKFBIFCVSBGFAHUMHOGEYAAUOYWVNIHUESYAJCYLQTGTHAQFMZIUPWNJUMWCTZUATNHBYJVPJKSAVG");
    IMC::FollowReference tmp_msg_0;
    tmp_msg_0.plan_ref = 2172977439U;
    tmp_msg_0.id.assign("LCJDEQYYCPNCXLXLLBABGIMGPWDSSXGUDYBYMTLTTEKUEGRQKSCSXTHXWORAXEMDDDVGHBCJKIKONSFWOZMNZTMJUVFUCCJRSDZPPAEGHMJODNVIMBRIOFLBCRIOFZDTFFKUTSPWQERSJALKVEYAQEVFPIIWJYYOBXGCRWUQBGFZUQNBZWNMHNRYVOWVUXPUTZEVYOFQQIKBMOZHV");
    tmp_msg_0.memento.assign("XXOMZHGRDHHYKTRTMQFYLBQDGSNJUHGJVOCQVOSKJAVMQRXHLRWZIUWSVPMDVYPQXSQVTHTBJVZFDWKHNUUYHCZELKRVZSBWCPWCEZSNPZUKFMXGRPKOPJGDYQUEROYFFCKBNGIPLDSMHOANACTXUDSQSIEYEWMBLAITBEUFJKHFJPUGJOMBRYRSFFRZANLNNITCWVBCBMLJFIEWY");
    tmp_msg_0.control_src = 28209U;
    tmp_msg_0.control_ent = 206U;
    tmp_msg_0.timeout = 0.6763202535476834;
    tmp_msg_0.loiter_radius = 0.3406766310802386;
    tmp_msg_0.altitude_interval = 0.9432352149434886;
    msg.data.set(tmp_msg_0);
    IMC::Current tmp_msg_1;
    tmp_msg_1.value = 0.12888907496735502;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::RemoteSensorInfo tmp_msg_2;
    tmp_msg_2.id.assign("IUTXZQIUFHMPMZCECJKNSXKKXXNZTEZGQIPKZOQHFTMSVFRVEDEYGUKYJDWDPKPFCVEYZBIAZVUYDQHGTAPGIQMAFAXMQBTBXDXEBHCLMTNWTUNZAUHAKDBQYLUICOROFKSRJFKBXGZMESVNJW");
    tmp_msg_2.sensor_class.assign("XIQPRZKJRAWEWQZSVLDEGOTRMKWPCEKWMXOOTZQOOHULWMDWAXUUPKLQIGKNCRPACNBBPIZNBQWRETLXCJVQUCDDRGLJFEOYIYALYXVPGJBIFCQJKZLZNIMQCUZFFXNMYCSLUZSXAADSMBOAXUSMBJYQKPKHRTNKLNPA");
    tmp_msg_2.lat = 0.3678005594198863;
    tmp_msg_2.lon = 0.5815867609863037;
    tmp_msg_2.alt = 0.4168844309256714;
    tmp_msg_2.heading = 0.8150779878855147;
    tmp_msg_2.data.assign("TANDRICLPSCBSUYXBCLLZDESKIIXWMYVJUORYMWKNYFDTPK");
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
    msg.setTimeStamp(0.7030705742006483);
    msg.setSource(39735U);
    msg.setSourceEntity(96U);
    msg.setDestination(50624U);
    msg.setDestinationEntity(230U);
    msg.source_man.assign("GQEHORJXNBAGHOLRKNVCDYGNCUPUYPVIWQUFTYTMSLQRDAIMBZYTLEPISARXHZWD");
    msg.dest_man.assign("LHJLSQBXVGZUEJWWUYBTYKCSYUZOVZPCQ");
    msg.conditions.assign("OYCRNNQEKSLZKUDNFWFPKFPOSAUSKFVUMINWVXDYXRYHGPPQEZD");
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.7401399596255415;
    tmp_msg_0.lon = 0.7454332996688775;
    tmp_msg_0.depth = 0.8723746272682517;
    tmp_msg_0.roll = 0.3215228145444462;
    tmp_msg_0.pitch = 0.2967407122869783;
    tmp_msg_0.yaw = 0.6344921081039437;
    tmp_msg_0.rcp_time = 0.4006693763084719;
    tmp_msg_0.sid.assign("TWGKCWVJECBXFSZWCRFXIWBQPHDGTTOSDZTEHBOILUTPKOKHVZSBVOZYZSCCYYAIFJPVVZGDOPFCXGQRSFRNZGULODYRRNIQVXXQDRWAWBVZRWSOERPJPZIETLUTBFKXVEMUZOCAMANAIIPAPJCVFLKAUBQEKNCLYMAMAEMXBYVOUHPPBFJJJLGKTJWKXUNIQGQMEOYQQCXLYJNNFHF");
    tmp_msg_0.s_type = 248U;
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
    msg.setTimeStamp(0.7731018669450466);
    msg.setSource(1272U);
    msg.setSourceEntity(97U);
    msg.setDestination(6744U);
    msg.setDestinationEntity(227U);
    msg.source_man.assign("FSLDABGXUVPJRKUIIYEBOSOHRWNVQPPEXJUPYTMXTQXZMJIZSBPNLMRTAMIXVVVVDVKIMQCQAVITXTBUDTGHRWHNIZYDIFAAYHTTRJJLVKCNPPIQYSJZNDJCBQYOXYCEGHKFGIETRDWNALEFWDWQHLWDAKREZOGZGODSHASVWOZZBZSHGGJLKCWMPBUXWYQLMFFFBEKYKFUGEYLTQHLAMHFNXKDLARRCU");
    msg.dest_man.assign("GNXXINAIBOVEWMCHKLVAKMZYQDBBEHJWTYPUIHJZATFIWNQCPPGIYUAFFLKGDFXBQBEMLYIRKSNCVQUXFZWERKCVWUFRRKFDDTFBPQDRWHLMUTDKOVMNMSLLOEKVSYOHPZTGKXHJEZMAGNUBZOYVAXRWPGRPQPOWNONVBGTEIADRBSXJTJWDUPSYA");
    msg.conditions.assign("BTSQEZYTCFVRLSBGVMSKYUMFXWPSLGJBRIMIKULEUSBHRQHHAQDKGCBPFAKGUNZCTFDRJBDNSLNVEMZEYXPHLAJUXLKJURFPZOFTGTMOHYBDZVYPWOUOWHVASCMGAHXIKCQFAIYHZPMLNWCVQDYGRITHBJPLNUIIIJWEFJYODGDEJAJMCYODMAOWQIZIWFVGSDQWTVQYKUBZNJHVXRPSAFTSKGWNE");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.plan_ref = 870099387U;
    tmp_msg_0.id.assign("OVNMKFFZJNSSAPDEDULWCWEQBKXNTJHLQNEVFCGQKJTRWWXCAGOVDBXJLGJHAHOXMVGFYVPKVEPISASGLZOENNDQYPJXPWEANPUZDOBQFTXVCJFRIMGPLMSZTYCVSVARBRDMKONGQZYHMJLBHKREKCNDILPYUILPATHDYUAJGZZDQRTSTDQOWQURTXMFOTUIEYMCXEKWYCRSNMKRUEBTHFZIWHVGWOBGKBQIOSYUWCXZJUHAI");
    tmp_msg_0.memento.assign("VHSTRATHIEQSDFGDSSIYXVNOXROUXOHSLMCHRCZJJGHVETKOALEFHFTGCLBBTKVVMXLGSPAJQVTPOQSKWMYAFHLSKWPOZWZQFOJDKYEBBHJNPNPTYUCDDFCPWGQFPLZNKZIWUCYAPUBPLCXDIYZQJRUJFKWJAUREORZZLYFBUUEYJTWVG");
    tmp_msg_0.custom.assign("OOZMAFGYDJELFAKOVJFWIPGHMSLJATWDCYOHFAIDOVNKSSXBZTUVGTDWPPZXRJKZIHROOINDLGZTSWKKRTNEYEVGPRCEWBKWDBUJSHDAMGGNZZYJCPVOMXEPACSFWTRVLVUQUBEUMNHIUMWEWFQYQJRJUOVDLLVZLHEIATAIILZ");
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
    msg.setTimeStamp(0.3135534552949838);
    msg.setSource(32705U);
    msg.setSourceEntity(205U);
    msg.setDestination(23058U);
    msg.setDestinationEntity(177U);
    msg.source_man.assign("PTTUGAXIHWQKQKOBQLSZNTZXCNHKHEGMOHXVFWFMNNVGDOQNSNJDMSTTRALWZJYAWGCCASVPJUPZTZCEVXZAYFXCEDQBPYQAVKPLWRJYU");
    msg.dest_man.assign("LKSUWEZCOXOSTLTZBYGOLLQFUHJYIAILOUWLRBMKXBVPXSFGJFVSHDQYFDZBPXAQLQFBJKRCJBBQKGKWHBNHMNGZKCOFIONKZEXDIDGLMDCARWIOTEQVSXRMVJNDLZREDKEZZXXSVDSNITGIHVHKBVFGMCTCFU");
    msg.conditions.assign("LNKJROQJAVTJFDWWSGXTQDJTJVBRZIBHTCBWUJPFMUHCKOJDEKTMPHMEPFZVZYEATUXCHWNBUVPPROR");

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
    msg.setTimeStamp(0.9440296122206874);
    msg.setSource(26865U);
    msg.setSourceEntity(63U);
    msg.setDestination(62134U);
    msg.setDestinationEntity(131U);
    msg.command = 110U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("COUVCLVMWENKEOHKXAOQPAIKSIVRJJYGQBCCLUZYDHFJANFITXXZEGGKWICEQIFELWPPRFYMYOBRCDTNMWDAXBEITJSXCQLGJYTCZAUGFHJFVSTBPSVAHCSTSEBXKMBJXFXVVUAFNDOMGZCHRZRGRWPOMUSHMLPEXRMBRWYWIDSDOTNQIGEPGPZKZUDOYTSWK");
    tmp_msg_0.description.assign("SDYNMSXFVQKTMBBRTDMHOEFCLKZFKOVXPMSJVY");
    tmp_msg_0.vnamespace.assign("ICIXSNQBOCFXWDZOUAUFWAHOORTZLDGQQVRDKIJIZHNZNUOTEIXEXJDSGWQLTUYS");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IYTSJPQMLGRFZGKWWFLWAVYCPICYEJFBHHCSZQNMXAPEWLYTMIMTVHFECSISIWINGENYSMOFRNUQBZDKDBARPYCDTZUJXFXHLCWYRKHGUQKNWUQOMSROLYRHGZ");
    tmp_tmp_msg_0_0.value.assign("YHQXFKESXBECMFKBJRFDDPXIRLJYHRDUSKBHSOPEKVCWELLAVGXKRFMIYNAVPUTGGZZTUIQJYTQUVHRLDHQNIBLZZJBWDCTKHPYHLXKZLPYBXMJNYTSCXQNWTDOUNISRYNTQLCEGUMDYRDOXUROPQXVQTBCIEVRZGBAFUSGQNGMOPIWAZXJVABFROEOUCNOAOGMEUNZWCQPAFCCKJHFSAFPKLVMIMDJOKZTHYWWA");
    tmp_tmp_msg_0_0.type = 43U;
    tmp_tmp_msg_0_0.access = 176U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("DROANNZGEGRGNJQDUTBXQNFAWOZ");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("MKAFYQIYGXOAZFJ");
    IMC::StationKeeping tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.plan_ref = 2880269740U;
    tmp_tmp_tmp_msg_0_1_0.id.assign("JAXFRDDJEGIKEYJNCKFCKISISWGPWQWYDNNTWDHCLXGFISDDPPOALKUWXKQFKDJBQHYGUONNIIWJ");
    tmp_tmp_tmp_msg_0_1_0.memento.assign("IPFVJROQDAGESWZXKZIQSCWPXPVMXVLRBALGFHHXPBHARPSTBZMDDOVGHLKNCSMRICFATJLNDMSQYBJYIPIXUXXUEQODXNZDBFLXFZFWEMYREGMTIVAUSHCKHYASPNVSJVTNWWZWUMLNMILEKFDJTJMGBGZCRDGTQLVJMKFTAGNWCNYHUSOO");
    tmp_tmp_tmp_msg_0_1_0.lat = 0.19516023357156842;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.1386086982668977;
    tmp_tmp_tmp_msg_0_1_0.z = 0.9882373990035603;
    tmp_tmp_tmp_msg_0_1_0.z_units = 62U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.3099793007544973;
    tmp_tmp_tmp_msg_0_1_0.duration = 31203U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.4552787089574417;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 184U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("WDZKIITBTLOBVOSKPWWMMKSNKCRGRKLJPSCGHSBFYSYWKPBREVDROUAWPCXSTNJSLXZVFIDNMMEIEJWCUZBOZHRLCSVWANWINTDJXKGLPFICYBDQXNWPQUMQRJQAZGTEFHAAUTERBHGDOYCAVXXNPAJHUEDZFENLTGEIGQHYKELUPAVBWGVJMYCFURNVCTOZILLJOYXYXXMQMOMQZMNOTPBCHQZRGYHJBAEVOJSDGIP");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::RemoteState tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.lat = 0.21069837785104828;
    tmp_tmp_tmp_msg_0_1_1.lon = 0.0839721911110638;
    tmp_tmp_tmp_msg_0_1_1.depth = 225U;
    tmp_tmp_tmp_msg_0_1_1.speed = 0.5381384376359094;
    tmp_tmp_tmp_msg_0_1_1.psi = 0.21255782084680241;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::TrexOperation tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.op = 186U;
    tmp_tmp_msg_0_2.goal_id.assign("GNIFPMSJRHAPCMXEXCIRQPYDQTZRPBEUKWKACCEIMKFXYLSLJSHAAROKYVUQDIILNLVBFFGEQDLAFSIECWNHWPYDGUIKRJUMETSPWDZZOUYHUVKXECYLTGKNVAHTLOBQBTTWRQGJVDKHMFSSSCFCNVZCRUJWYZAIYVYEWAHQDNWJFMVMOKZDKBVLAJZUHXONNHDSCOILXBUOMJFDWBRABHBOGXYTMTSNPTUQXXJRTQGXIOPFZGMOGWE");
    IMC::TrexToken tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.timeline.assign("YKKZDKTLFVYNXVCVEBBFNPGTCMVVKDBZBHWKDOCGTLDZLBNRZGAJCAXHWHKOMHMRCJTQBSNEKDNVWNEVFOFSQEMFHIUMEWUPFYEJLTKGXCMPQQQOCMHQIZBURPIXYUIXLYZTCSAUZXWTBGACJNDPFSPYOHDPJGUYJASWXILJXIMFGSDATNVRZRREFHLOSHSOG");
    tmp_tmp_tmp_msg_0_2_0.predicate.assign("IFXYKZXQRSVLGHUARBPKVYYDUUEQDHJBLLSLRVTSCLJGPIANUUUHCZZDYWKJRKAMMCGQDFCNIGHUJGCOKPYVFWABOVIFJHPWFEBLAVGAESVNQCPHYWEZWTTRPTJXEWXQCSMLYDBYSQIZRNRQDYTFUKMUAZHNDGVXXUOZCHOGJQNFFIEKZEMXYTTGOVRWENLTJN");
    IMC::TrexAttribute tmp_tmp_tmp_tmp_msg_0_2_0_0;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.name.assign("IYUVOMNBYHRPKDIERFGBSWDVIMPITAGAM");
    tmp_tmp_tmp_tmp_msg_0_2_0_0.attr_type = 117U;
    tmp_tmp_tmp_tmp_msg_0_2_0_0.min.assign("DWCQKLXPVTCAMZIHSNMNVXJELHEUNMZFFWDBNPZACZHYSQNPDCUSCSJVLCKGZDBGRQXFGUFHEEPEDBGYONKIJYQBVTWBYTMGLVORCMYQVRUJKMPHMDXGROZBZJOWAWHOOGISWUZQYXIGNEWLKRETCDNITASJRJIZSMNCHPFBTFQXWXQIIXBPUS");
    tmp_tmp_tmp_tmp_msg_0_2_0_0.max.assign("SUVCWDRARYAYKVKSSNHEZKTXFYHJWJESSEJGONGYTCJCQVRHBAHNIZXXXQEQLQRMRCTKTVJSFZURQQZUIYBCIGDJHBPPATXNFIUFJXS");
    tmp_tmp_tmp_msg_0_2_0.attributes.push_back(tmp_tmp_tmp_tmp_msg_0_2_0_0);
    tmp_tmp_msg_0_2.token.set(tmp_tmp_tmp_msg_0_2_0);
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
    msg.setTimeStamp(0.6072097746545964);
    msg.setSource(56414U);
    msg.setSourceEntity(72U);
    msg.setDestination(49405U);
    msg.setDestinationEntity(139U);
    msg.command = 13U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("NODTWQVKXEYZFYUXOBUTMSLHJBQYLOPH");
    tmp_msg_0.description.assign("UDALCORUQPOPZBWBTQYPGNCGRRMYQAJFNBAKCEBHHHAGXEFTKIXNHAOCSQXMUASWNHRSDVEGJKAXRZCODNMXMPMZE");
    tmp_msg_0.vnamespace.assign("DZTLGMFICTTM");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NXMYQFFBLVQGOSOHQGIWXZOXBVGHWNKZCVQYZSKRYPPSUUVMQJGTWOXCYHKWMMQEWQUBKRZDXABODPFEKUUFWPOUFNPFCZNGMLPRSJIWLLKGEBNDQJAEDCMBDHZFHJPDDIJATTTRWPZ");
    tmp_tmp_msg_0_0.value.assign("XIZEQDMDOLSXXZLOZBVTTWMOZZKARXFQHATMDKCCKIYXZNIUQREQEUGVAUFAFOGNVWGYDPQXLWAYNKSQULFKWWDEOTWYEIKEZSOJSPJUYQBRMIOZRICBYHUYLVYAETWBLFNJMDXWOSJOVDPRCLVKHSHRHEGUHKCIUVGFMNFWZPGPCSVINGLCMJJVPATTTXJGNGSXYBLKR");
    tmp_tmp_msg_0_0.type = 87U;
    tmp_tmp_msg_0_0.access = 248U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("OMJNLMDIOHMSYLVSWFFUWAFSITF");
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
    msg.setTimeStamp(0.023049437105894133);
    msg.setSource(53442U);
    msg.setSourceEntity(136U);
    msg.setDestination(30285U);
    msg.setDestinationEntity(1U);
    msg.command = 158U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("EVJFYZXFGOFOUJOZJLWDAEXZPTUWMIRNZNKMLSXIYWIVFCPUKZLWGVNGHDGALEMEAP");
    tmp_msg_0.description.assign("GMWTHIFLVRNVPOBMSUFLRGZYANORRCWZHDDJWHGQXGZNIXYTEVFJXVZMZRDQEPMMUNUMFVXIJLOPPYHQDYDTHXK");
    tmp_msg_0.vnamespace.assign("PTLQMYMDXOPEDCQOFAILHDTIMGCSZCOYBCLIUVANEHSJUXNLIPCLANPTNXUDNEDLLV");
    tmp_msg_0.start_man_id.assign("MELAQORHIJRRTZEXJXUYLOLPV");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("INQEMNQFLWNEGYTLGIIMBCFZ");
    IMC::Teleoperation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.plan_ref = 3629851880U;
    tmp_tmp_tmp_msg_0_0_0.id.assign("FIGYNKLUHGGSRRMTZGPQWCUJZEHZUEXTHVESZBWOVIOWPZIEJMESDASWBAMGKDDLXDVKCMBUPHSUSHZFXAZBLTIAXXJQPCVWYNSOOKGETQPFANKKOPBOQDWWWXMUV");
    tmp_tmp_tmp_msg_0_0_0.memento.assign("NQVLRJNSIPPGECUIXEUJUZVYYRUXUZIBOEDTWATGYASZMCVHXTIZYVWUWYQAKRPOSAOWAUMURDHCFCGZKEOCVBJTXFCZVWPSHJOWPPCDIOHYDGTBFPYTRJNPKLHFIZBHGRNNMW");
    tmp_tmp_tmp_msg_0_0_0.custom.assign("BQMLYCTVNGIGTFZZEZFDZPJNFHLUQDUISASYGMXKBTXTNBSGBHETMHQSWDRKRFOIWYRHUUQVTUPKSWXQJEQRVKAWFZABERDPYAFEWPBSJEZAUWHNGUQKRZVPKILDCDOLNHXZNVCHVOSCQYBBGONTROAIYIXYYOZSDMMHVHHKSGTFYLMWWLIDCVLPOWFXKT");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::PlanGeneration tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.cmd = 249U;
    tmp_tmp_tmp_msg_0_0_1.op = 235U;
    tmp_tmp_tmp_msg_0_0_1.plan_id.assign("IHJQGWNIBMTLHGRQBOVDGOTUOJFTTFMBLHFMCRVNSLMZZQSETOJBIPXDSLKRTJGSUDKPZWNRFYYURSDIOWPVGPJSVJIJKYDYYXEEQWCYNQEKQGZJOKIWPZWATNPCEAPVABVWADGOMFMKNYQAINDGUZDTIQECXJHHXUFYKXAORDUEWCMLQNBXVOHWULZTPCCNBVEZUCULNXQFXDMAKLMRRHGAPYIBSFJIKCMLPXUYSXKBHGRRBE");
    tmp_tmp_tmp_msg_0_0_1.params.assign("MPOLSJZEFBJPBAEUGQNTJQTXRSWLYVKBXTZWMKVEZOJRFOIKTUFRZIMJNLVOCDSYRNNZDGQLKAXHYMGNMUMABNZBGSTRILTFGDBFYISWNCPKRBIZILSTMMEGRSOZFXHXDKYIOVORYKUAHSAAPCXGPQDHUKPWVGLQUCJQPVLVHZYWHGNEICASMLNCDCIOUHXAMBUAPVE");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::QueryEntityState tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("WEZQSAQAXNUYLZAKUOUMEUOPBLYCCGHQVWYPBHYMXKBNYOAKCOAFNDBQWDVH");
    tmp_tmp_msg_0_1.dest_man.assign("HBJBFWCYJCFWUGZMIZEUIDQEWMIZBQTFJYOPLQKKSFOFUUJVVMQFNNMXPWRGWDXHSLPKMKEIDRNAIOCELDQMRRVBSGYZVZNAHKSQQYKWLTPGXPIDAXUARXUPBXVLWJDNOVUOGCOMBVGJCTEWHFTYTESDXJZOYAHKGCXSUFLTKJQDZSELVCIFPARTEYCYZDLBEMXHOQGAITHZZTJDGTXNVARWPNIUSPSJNMURQOOLVRWABFYRKL");
    tmp_tmp_msg_0_1.conditions.assign("OEOIQOOSGYRTPKEBNGAASANXVFYMVANOZHAWUZDCUEKUJFNTPJVKNWJZPJYCDMOHXVKTLGLVVCEFJILCYDZRBJXC");
    IMC::PowerOperation tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.op = 153U;
    tmp_tmp_tmp_msg_0_1_0.time_remain = 0.28225112817354947;
    tmp_tmp_tmp_msg_0_1_0.sched_time = 0.9885191329770625;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::DataSanity tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.sane = 162U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.9572044375766459);
    msg.setSource(37340U);
    msg.setSourceEntity(219U);
    msg.setDestination(5836U);
    msg.setDestinationEntity(34U);
    msg.state = 54U;
    msg.plan_id.assign("RILPPGSBQPSVJAKVUFENIBPUIEOTPHUMANDVCTEWVZUNRXTXRJKYYXYBMQHFWUVZDPSWVBCRQEECMJGRYHCSJIJFMTJXGXEAOZRQRVZDRFYNQBOUWSJ");
    msg.comm_level = 163U;

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
    msg.setTimeStamp(0.9923709595440188);
    msg.setSource(45352U);
    msg.setSourceEntity(21U);
    msg.setDestination(65435U);
    msg.setDestinationEntity(40U);
    msg.state = 55U;
    msg.plan_id.assign("IIMAJPXULZPFCNWVXZBLLIBPZDDDZARXGNJYLUEABRBOMBWAGKMWBNGNDGUFCHZRVQZXMFENFDSTXWEVOQHQRHUTOEPUDVLAZWOXDTQEJQHOZKCITVRBPJCUQCSYONATMXTCSBESMMIBEOHHWOYRTYCMDSVFQEPKTCRHEWJVJPOCJILBJQSGDXPMPSNQHYVRGEAULUWQKKIHAPKGYFOLLIVYRVKNZRSDKGNJUAFYXSM");
    msg.comm_level = 113U;

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
    msg.setTimeStamp(0.26296219740515336);
    msg.setSource(564U);
    msg.setSourceEntity(59U);
    msg.setDestination(55838U);
    msg.setDestinationEntity(47U);
    msg.state = 34U;
    msg.plan_id.assign("VFMSBZSMTFMWCTKLIDCYYJUQWURQDOFCRBOOPSSBBCHVUAQYERWMZRKKUGRLEHDLKBPFFCICODNAEDEVVWANIJBPOFYF");
    msg.comm_level = 224U;

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
    msg.setTimeStamp(0.46354410356933917);
    msg.setSource(38478U);
    msg.setSourceEntity(74U);
    msg.setDestination(20190U);
    msg.setDestinationEntity(254U);
    msg.type = 18U;
    msg.dt = 148U;
    msg.op = 48U;
    msg.request_id = 53643U;
    msg.object_id.assign("YJENVHGKIIEGNZCZGXNMRYTWOMIEHZOUEGSUY");
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("USPJOAENJOIKMBUAUCQIHUXSBGMQHLYHYJEAWXGFPUIYXXUFBVSAXZGOFXFPGIKHNQYVZKLZRGZJOOHAQROAYVGAKPNTXJTXRCEWUGOZLDOHKLQBECDBFQZVGTMNZVOTMPPLHJTRCADIEIUYFVYNWGPDXEDVLMBJSEMMJGNDMBTSTOVLJSHCFRDSSDNWKIBWWSRNKTBLQBRCEAVHPIKNTUCIAFFYKQRRTHZLMQXYCVEQZZD");
    tmp_msg_0.reference_frame = 143U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 19964U;
    tmp_tmp_msg_0_0.off_x = 0.5434529557791141;
    tmp_tmp_msg_0_0.off_y = 0.11100377667735284;
    tmp_tmp_msg_0_0.off_z = 0.48263392563167407;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("FUZBIRKSAXQKGFDJLQLATPDWLULWNWLMJGEINMCYOWXMHEVQLVMRCNSZFPADPKWVPBKXAGXVLLTPOVYFYRRTCNAZHZODUUFKATKRSTFMUNEKAJYYZDMINHQIVKJZGJQSJQCOEXOYMOQDBQCZKNLWWVMPNANUGJSBJIRXZCJZBCFYVGSPTYTLTDIEHDMPGHSHICRVEKUIGYHRBAYVZXCHTSTBPWJDXURGGQ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CPDWLOTUJPETRHANLYVBOXNZLTEAPXZGGGROIBSFEXEYUVQLTFEYMBAUQETTZYOPKLSULRETANVJSWHPSCWLYTOJZYSOBYFKBHQFFFSNRXBKQGAIXEUDGKPLIUOQMBJDJAMSQKDXWJFQVHKMPJWCCDWGFNFNZOC");

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
    msg.setTimeStamp(0.7861173864846992);
    msg.setSource(53936U);
    msg.setSourceEntity(5U);
    msg.setDestination(26956U);
    msg.setDestinationEntity(246U);
    msg.type = 252U;
    msg.dt = 60U;
    msg.op = 53U;
    msg.request_id = 45790U;
    msg.object_id.assign("IXIJBBXAPHGXWKELQPRWSQDFKMTMMVKHRLBBTIGORIJKLVDONZOCMGCGAFELGYXJULWJFVIBWURJGDXNOMZRWOYTAHNGPMFTHFEVEHUCKWIALIJCTKUTSUI");
    IMC::LcdControl tmp_msg_0;
    tmp_msg_0.op = 41U;
    tmp_msg_0.text.assign("OXPHTFSRVYIWDJPJNYRRZVKT");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WMNPQBOYIYIWLKNLRTTJSKZXBEEIOVTCXZ");

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
    msg.setTimeStamp(0.6481929962374386);
    msg.setSource(1475U);
    msg.setSourceEntity(10U);
    msg.setDestination(2796U);
    msg.setDestinationEntity(110U);
    msg.type = 244U;
    msg.dt = 94U;
    msg.op = 19U;
    msg.request_id = 43455U;
    msg.object_id.assign("CEWLVPBHNPFKJSOPCZUWBZINAXLXMDQNKZYEVUZCSSGTZZBIYMGMLTHKSOZFKJUDMLLLUZEOSYAAPBKBXTRLDFWFTDOFYQGUNNFALDWBRQBYWJDYTTJTQREHPWOPEVGAAVLQXZEVCSSCDHVTCRMJGMETMYXOQRPKPIQRKCHSILFAWBOYWMUXXKCROGAUDNRH");
    IMC::OperationalLimits tmp_msg_0;
    tmp_msg_0.mask = 96U;
    tmp_msg_0.max_depth = 0.5144454926313478;
    tmp_msg_0.min_altitude = 0.9495882599924285;
    tmp_msg_0.max_altitude = 0.24740574439215113;
    tmp_msg_0.min_speed = 0.9801079743006224;
    tmp_msg_0.max_speed = 0.3864208526209081;
    tmp_msg_0.max_vrate = 0.845531596547076;
    tmp_msg_0.lat = 0.6650508524301987;
    tmp_msg_0.lon = 0.36397188060099217;
    tmp_msg_0.orientation = 0.855527697421997;
    tmp_msg_0.width = 0.7372847023289529;
    tmp_msg_0.length = 0.9589226995166379;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NQXJOCUWEOUVYMCSPCWQTGAJIIFZIJRDLBG");

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
    msg.setTimeStamp(0.12836508311222494);
    msg.setSource(9169U);
    msg.setSourceEntity(58U);
    msg.setDestination(29521U);
    msg.setDestinationEntity(41U);
    msg.object_count = 59255U;
    msg.object_size = 2386686026U;
    msg.change_time = 0.9569145691711513;
    msg.change_sid = 7299U;
    msg.change_sname.assign("KUYPPVZTNCOZJMRHWELVOKZXDYXLCGHOQMHFUTSNYVKLRKBJNTBIYXFUOJJVONMFUREWDJUAFDVAAKBIMXGITZFQAYSBSBHODTULPSRMQSMZRBCDGGQXFWNNJKQWAQOIQGQSHHFLWLZKOTBHRTMJHBGAXYE");
    const char tmp_msg_0[] = {-13, -86, -35, -95, -5, 84, -32, 37, -13, -59, 49, -2, -34, -8, -123, 7, -43, -100};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.object_id.assign("SPYXMOJYZJFEKPSIXXJTIXQUKCRGKCBGJNWHXVGVUFAOPANCGTUHUYFRDSPNEDWZOCXWRIKIWGLKHMLJCCVYJHGQGIHGPAVPKHDDBARVSASNHRWZWMUTVKLMFVMAQAJZEXRMKOELRIQQRAQZTLMMLHQEYNBEGFDOUWYUFTYLJVZGVFBNEAYIBBZFWONYEZ");
    tmp_msg_1.object_size = 53168U;
    tmp_msg_1.change_time = 0.6345274169150152;
    tmp_msg_1.change_sid = 23533U;
    tmp_msg_1.change_sname.assign("HARVJMDXDONKYKGJDYWXPLYGKLNFMUXVESEXPQEMGTWUVAAVCQOJJCGTKDQJPLERCMUQPSSAYGPTMKCDVDPFMVQKOTGZHSUFCOORPFPQSCSZEMHATDUEJJPMWJSNZBRLIMIAY");
    const char tmp_tmp_msg_1_0[] = {94, 94, -100, -105, 121, -114, -119, -16, 25, 80, -52, 22, 21, 4, 69, 25, 0, -85, -16, -84, -37, -77, -65, 27, 112, -30, 51, -42, 15, 62, -119, -78, -84, -120, -79, 20, 26, -127, -49, -50, 39, -38, 53, 105, 77, 11, -49, -108, -31, -33, -17, -111, -75, 125, 3, 103, -105, 6, 125, 95, 3, -60, 6, -65, -22, 57, 113, -30};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    tmp_msg_1.complementary_information.assign("SYEDNAFEWRVRLGSVQSLMKGCCTXCQEPFZATEXWREJMXVHUPGQKUBNYUOBWKTFJAZNZNNHGPFAIZLLZPH");
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
    msg.setTimeStamp(0.24471204623301768);
    msg.setSource(29839U);
    msg.setSourceEntity(151U);
    msg.setDestination(35153U);
    msg.setDestinationEntity(110U);
    msg.object_count = 8131U;
    msg.object_size = 3461491525U;
    msg.change_time = 0.13865172538210147;
    msg.change_sid = 12477U;
    msg.change_sname.assign("AMJYWZCLLGTAVZBWOVMDMLEVDZXKHIBRDDKDNURQKLTDUQCVPELORWWCGTAZPGAYFYMOSUEJBPCWFJYDLWTBQQHQSCEHUJMPZIUSFHTXMXKVNHIJGAPRFFQEHKOYGOXLONBTBZGLSXLMHWYNUBPDJIOXIRXJCEMOGKNINVKSAFWYEDGEFTKNHLSQIVWXIZSKFCEJVPRRURQBYIVYSF");
    const char tmp_msg_0[] = {-76, 115, -50, -43, -2, -40, -63, 104, 82, 81, 62, -45, 15, -51, 39, -59, 119, -40, -74, 54, -74, 117, -75, -91, -80, 103, 122, 2, -96, 20, 84, -92, -116, 111, 66, -91, 70, 101, 93, -56, 33, -72, -27, -8, 53, 105, -126, -49, 55, -29, -88, 123, -117, -127, -28, 45};
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
    msg.setTimeStamp(0.3844165792271963);
    msg.setSource(27077U);
    msg.setSourceEntity(2U);
    msg.setDestination(11511U);
    msg.setDestinationEntity(227U);
    msg.object_count = 47244U;
    msg.object_size = 2557209615U;
    msg.change_time = 0.9615684640608416;
    msg.change_sid = 46439U;
    msg.change_sname.assign("STYQEJTGVIMCHJTCRBCQLUIUYBNFUMHDPDFWGRAXKCXCWEQAFSJLZJYOMKWOIGNLHEWUXZQIZGLRMOSOASEDLHKKRROKGFPSCZYQQMWZGZOQPGKWAEHBPJLCWJFQZUBMPRYTIHEQTSVOAKUBBSYVAMUGRDNXDDNKDGUNUADHATXLVVSFZVCDPTZNECONKNOFN");
    const char tmp_msg_0[] = {58, -6, -70, 66, -114, -102, 108, 51, -90, 85, 49, -90, -2, 18, -57, -14, -20, 115, -63, 70, 19, -127, 103, 59, -59, 38, -43, 55, -32, -19, -17, 71, 111, 91, 83, 94, -69, 26, 112, 79, 81, -83, -43, -119, 99, -5, -123, 79, 50, -52, -20, 28, -110, 28, 4, 122, -90, 108, -32, 71, -6, -47, -28, 37, 95, -81, -46, -10, -71, 64, -48, -7, 28, 43, 112, 115, -73, -59, 85, 109, -107, 121, -57, -52, -51, -16, -28, 36, 31, 101, -55, -86, -93, -116, -109, -77, 65, -107, -6, 89, -92, 124, -110, -15, -87, -54, 84, 109, -99, -126, -13, 71, 76, 38, 98, -95, -50, 106, 100, 77, 102, -57, -53, 105, 25, 113, -20, 41, 2, 18, 67, -88, -16, -2, 118, 96, 36, 47, 91, -89, -117, 108, 2, -76, 97, -128, 98, -39, 30, 84, -69, -61, -128, -19, -106, -52, -29, 121, -44, -43, 73, -14, -46, -94, 54, 111, -86, 48, -58, 25, -6, 15, 54, -101, 50, 50, -76, 54, 88, 64, 61, 67, -36, 104, 63, 43, 79, -89, 76, -47, -31, 103, 79, 113, -30, 68, -119, -101, -112, 8, -117, -6, 81, 99, 85, 29, 95, -82, 109, 46, -89, 120, 46, 125, -87, -87, 46, -17, -78, 3, -53, 31, -63, 32, -119, -105, 108, 56, -76, 67, -52, 35, -23, -6, -30, -114, -71, -79, -80, -118, -74, 40, 79, 103, 98, -126, 65, -25, 91, -89, -71, 117, -127, 114};
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
    msg.setTimeStamp(0.2576939501552207);
    msg.setSource(18035U);
    msg.setSourceEntity(110U);
    msg.setDestination(57788U);
    msg.setDestinationEntity(22U);
    msg.object_id.assign("JNBCTVZIWITUGOZOBYQTUBYCNYSRBZESUCEQYZMGRDDGLSSSXMNCIHFEBKOZAYWYROLPAEETRPBMHXQQJDMFCOAKRSLKJZQBZVWTNMZHFGNTKFKGVHUHHVPJJDFIDDMAPDXFOWLCIPKAUMVUTSVXOOZJWBIUDRFLAPKYDNGXQGXXYXNSKQKQEEHCALTUUPWCGVCFIHTEARKFLCTWYJZWSDYPGSPIRXVLRAWHXNVQLJEIQHAOMR");
    msg.object_size = 40161U;
    msg.change_time = 0.6453364574764142;
    msg.change_sid = 32946U;
    msg.change_sname.assign("AJTSTJWRXHGKQZHRULFHHCFOGMPQAPYRAZQQOFUZHIARKLCSHPWNVXYTGLKIGVMJ");
    const char tmp_msg_0[] = {-98, -18, 75, -107, 84, -3, -54, -74, 22, -27, 109, -106, 125, -10, -28, 117, -47, -19, -109, 13, -111, -100, -42, -11, -57, 80, 116, -124, 22, -38, 126, -84, -75, 2, 126, 76, -109, -69, 28, -108, -41, -88, 97, -56, 43, -104, 102, -48, 3, 125, -53, -97, -90, 126, -36, -29, -34, 17, -124, -9, -46, 109, -39, 54, 67, -111, -20, 70, -119, -7, 94, 10, -103, -24, -33, 72, 37, 62, -10, 111, -105, 74, -20, -65, -78, 109, -95, 38, -126, -81, 66, -70, -46, 14, -11, 8, -39, -84, 69, -98, -10, -1, 66, -94, -58, 12, 78, 1, -96, -92, -124, -18, -12, -54, -33, 54, -35, -89, 119, 8, -11, -70, 7, 61, 87, -11, 77, -38, -99, -57, 94, -99, -12, 94, 73, -81, 117, 39, 3, 112, 6, -102, 21, -91, 22, -41, 16, -62, 122, -3, 118, 64, 62, 32, 73, -116, -49, -92, -18, -92, -77, -104, -101, 34, 49, -56, -8, -65, 21, 58, -90, -102, 35, -99, -1, -66, -5, 100, -98, 115, 16, -31, 118, -109, 25, -121, 85, 9, 42, -38, 73, 93, -52, 29, -47, 31, -6, 66, -41, -100, -12, 113, -116, -90, 90};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.complementary_information.assign("ZEYOEHJXNSQPPCDTEAUDJMQQVYIGDXEANYIEOQFDUBVRDMNDTHWWGYUZWGOTSXBPLJIOFVJBGIFGLBVUAMEQIBACZFJBBLLSC");

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
    msg.setTimeStamp(0.5509158542822841);
    msg.setSource(62299U);
    msg.setSourceEntity(116U);
    msg.setDestination(43527U);
    msg.setDestinationEntity(9U);
    msg.object_id.assign("IFJOJQNLRHNKUFJKVKYEPXPRZGFQKSCUZYIYGSXYWHAVUUTGDFEHBOAJKFLKECQIZJKBWPGUIHHMAPUCXDDRQRCUEJGIMLBCWOZJPMBUGBTDSSBKAGOSHFXRAJQPVVNVXCBTWPNISKYWXZTAOWIMZFNELAEATHAGLNMRWPMYVYAVBBUBFENZDSOMHGNGWYDEERQLDHFTMHNQWLSTLOYTXYQUWPSOVIOMICK");
    msg.object_size = 62743U;
    msg.change_time = 0.5058472002295885;
    msg.change_sid = 20285U;
    msg.change_sname.assign("DOXBRHCOBHAGZIOSTFOQASFRGAESIQUVQCKURUNYKGFHHUNDVQMWZVKHOYGOYAOQJPFQEEXHSQJBWYISFFAUEJMBDEMLHDTNMNRTBCHWIJEDRCFDLCRWDPMGJHWZYPVZDLXLBBBCRKTKXEVAJCHZPWPXMGIKFVQLTFOLNRKERLCYCTXJXZLJMIOTYUPGMJYGZTVWEPQSC");
    const char tmp_msg_0[] = {-117, 119, 68, -65, 124, -49, -82, -20, 62, 13, 36};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.complementary_information.assign("ITWJLYCWEAKCICOZKMFTZJOGJDPKNKBFTIVNKYLNQ");

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
    msg.setTimeStamp(0.28162658643946537);
    msg.setSource(18079U);
    msg.setSourceEntity(138U);
    msg.setDestination(22754U);
    msg.setDestinationEntity(253U);
    msg.object_id.assign("GIFNFQEEIVPOEQJJPAFWLPTOKEUIHGQZUALDHFAFMIWETJMMLUYVLBGNMDSCVDCZSLOCAZBKHWXGHZSAJVXNVOCYPYMOMSWEDKRJBEXSPFOYGRKAHEORLLALZWLDQUFHKKUNDKWGTMIRRYXTSIXNSDCRQUECZHTWQGHSAVTFBBIGOQJJDCPZKTBZUXEQVYOYXBRJUDYAMGSBVIQCBSXOFNPHMCPJWIGDPCQBUXJTWKVPMNRZ");
    msg.object_size = 32095U;
    msg.change_time = 0.9043546515269602;
    msg.change_sid = 44299U;
    msg.change_sname.assign("LKHZOLFZMWAJKMNIZGHWCIAKUNVVURYSWQSPQDRBUSTXXKLHKIQZAESWRJBPDZDKHFCGIKDVGQQUALDSQDHSIZUGEOARUBEROQFBCASLJMVCCR");
    const char tmp_msg_0[] = {43, 44, -87, -6, -35, 117, 118, -37, 15, 44, -80, 112, 79, -96, 108, 8, -94, 118, 111, 109, 91, 30, -108, 30, 97, -53, 79, 107, 29, -36, -110, 114, -42, 23, 113, 27, -33, 82, -88, -26, 92, 11, -27, 9, -33, 91, 0, 115, 20, -53, -2, 29, -87, -41, 102, 111, -46, 58, 99, 126, -120, -26, 94, 24, -57, 115, 100, -19, -52, -95, -2, 10, -32, -14, 96, 23, 34, -65, 15, 98, -52, 50, -55, -118, 53, 46, -50, -111, -70, -78, 56, -46, 58, 81, -127, -99, -25, 14, 31, 118, 124, -1, 101, -53, -90, -86, -7, 1, -93, -13, -81, 70, 24, -82, 95, 62, 60, -96, 26, 89, -37, -50, -74, -110, -37, 112, 113, 112, 82, -44, -77, 69, 122, 58, 64, 42, -24, -95, -46, -33, -114, -15, 109, -65, -123, 29, -85, 28, -27, 98, -33, -78, 57, -19, 121, -1, 19, 66, -68, 23, -114, 90, 57, -120, -91, -80, 26, -87, -101, 43, -66, -22, 58, 72, 47, -110, -72, -17, -105, 41, 12, 36, -20, -9, -32, 2, 48, 50, -101, 78, 11, 50, -37, -63, -70, -33, 24, -15, 65, 115, -81, -93, -115, -80, 74, 28, 104, -28, -96, 62, 41, -78, -77};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.complementary_information.assign("HNPVGCHICGEXCDNNWZPWAIKMQXYFHPWGSVWMYABKBKDZZGSULRUZQGUSENGRCEDJWILZKAPYNIKSVZXAMOZSLJICEVLQDFVGSWYBTAQKURAJXTELNMJHYJOTGHFCKMNVJOZOQZCXPOFJBTJBDIIMWADYJSEVUMKUAOADBWTXLYCZQQLVXUTIFTYUXPEBFHFPIXRCRKMHPWBSUDEVMDYNO");

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
    msg.setTimeStamp(0.40940782715611646);
    msg.setSource(56221U);
    msg.setSourceEntity(102U);
    msg.setDestination(6629U);
    msg.setDestinationEntity(59U);
    msg.type = 151U;
    msg.op = 236U;
    msg.request_id = 9325U;
    msg.object_id.assign("AJGFVGZRGDCNKPKUNFWBVNJDUBOIZSUWNVOUAHRGQXXKAUYKYDWKTHQBEZDEALNAHMJEBZLRC");
    msg.flags = 27510U;
    msg.dt = 41U;
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("JNJTVROUDMMWIKUVLUJCQRPMVAXEQJUTROPSOBOZHMIQJHFUKOGWZREDYTFQNBGYRZHUKXRQDNCRWONEMKLIBJWSOEGUAUBATQIJBOBXMLELSNZZNDYJLSCCCSQNKDANETXCOBWZGFFEDWSTFVHSXPSBPIALMGZXIVIPFLQHYMNLVYDGZMSAMQVWYRDACXWC");
    tmp_msg_0.service_type = 114U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KBRGPTFIOBQQOQSQRGFBCZMFLZGHJCAVVYHFEFHLKISHHWDTLDLUYBCYUUZNIOEBRTAUGYIKORMZQALYFZRAMEMRZPWULEVDQIQVKJPVCKCNSOVXGWOTEXISHKPEYJTMANFOUDNHDNREWOXFLMTIP");

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
    msg.setTimeStamp(0.3247363760123084);
    msg.setSource(65160U);
    msg.setSourceEntity(209U);
    msg.setDestination(61597U);
    msg.setDestinationEntity(203U);
    msg.type = 63U;
    msg.op = 168U;
    msg.request_id = 6406U;
    msg.object_id.assign("BWIAFUFZXKCNZAQNVURQGFNWBXLQHMLYNBHTBCXRASTXSPAGLWTCBEMGBUVJPIKXXZRTGNJHPMUDWSFSUDDGITZMBZOSBEAGDZUYQUKWCDHHFOJHEWDYYZPWRYZYALJDHKBRPUCNEFAKXQAHUCQDVOAQYEMIGSMYLPTFNVNPVPCVJJFQRKIYIGHEEOVWSKRMCROTOXXNRZIXBROFYEKFVLJSMPQKGIJOJ");
    msg.flags = 50803U;
    msg.dt = 204U;
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 3631004181U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CRMYBUWBXMDOTQTEPEUIUSUUFIZNHIWJQYAQUWGAPFJRPSZVKUWWVSMYNBFVOLGTAFIKLNJHXGWMRCQFXJDYSWPXGVGDDKVQYOWQEHHGXEDCNKKWEOHCQBIBABTMXKSPSNSPHSSJZIRNRSEKNYZYAUKZJVQDGLTBJMOQVQLFJAHDEEMTCOACIPLDRNDVFZRYLZRCMUHGERHTONI");

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
    msg.setTimeStamp(0.2929367876691188);
    msg.setSource(1605U);
    msg.setSourceEntity(166U);
    msg.setDestination(5298U);
    msg.setDestinationEntity(107U);
    msg.type = 28U;
    msg.op = 151U;
    msg.request_id = 45675U;
    msg.object_id.assign("ZRSYJZVDWHXBUQVQJFMJSOJNODEAYPXYAWOTDCZQSKTXPUMVJLPASOBZWGECWZCSOGHXZLDOZTVFOMEUOBDDTVLBQPPSOUVBIQBPWLYLBQQOPRKBMGNUNZHUXETCMFFHYGHWCARFRSNNKGDWUJNWTKWRBJTLYLAGFJMNMEPSRAFMLICCVHRXMRLVNDAGPIRKXZPCTDNYEHULJYKFCIKGWESZHKKYAVQDIKFAQH");
    msg.flags = 14572U;
    msg.dt = 161U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.plan_ref = 2373085658U;
    tmp_msg_0.id.assign("SFCKNGLELJHCMZSZQVSXDMGKHWVOYBKMPMNBDQYY");
    tmp_msg_0.memento.assign("HZDIBNNDAEVUGQPLDKCJUTULGPQAQTAKJXPVTONXJNTBJQIJE");
    tmp_msg_0.timeout = 19115U;
    tmp_msg_0.lat = 0.4929219041857098;
    tmp_msg_0.lon = 0.9489473729102077;
    tmp_msg_0.z = 0.5163959928798831;
    tmp_msg_0.z_units = 10U;
    tmp_msg_0.pitch = 0.7423558171707182;
    tmp_msg_0.amplitude = 0.4350668169934844;
    tmp_msg_0.duration = 13230U;
    tmp_msg_0.speed = 0.9502729486413029;
    tmp_msg_0.speed_units = 128U;
    tmp_msg_0.radius = 0.26707941509679245;
    tmp_msg_0.direction = 64U;
    tmp_msg_0.custom.assign("ANNLEQXAEXVUJLDYJVMRSRUXIKRKPTOFIFJNOFBJWRUNBYIQDVXXKTGDCUCDVQ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("YSSMFIRJPQKFLKYACNJSYGPVYKFUXPSNIWPLUYGSQCUWHZXOTXZBXKRZGZXAVHQTGPCZGKMLCTXGZVLDIWNQXUIUBVSAWCLECGKEIFTXODRBRIYMEANHRBNBFJWHSCDVMLDDZODJSHWTJFORKHZMGAOHMMZGBQOLWFWJBLGUTJFPUDNQRYESLBYVVKLVNPFANH");

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
    msg.setTimeStamp(0.0704978844285492);
    msg.setSource(21173U);
    msg.setSourceEntity(153U);
    msg.setDestination(22800U);
    msg.setDestinationEntity(88U);
    msg.state = 202U;
    msg.plan_id.assign("OOEZYPDXHUPBVSEEZJYBQKVDSQZEWQSJZXAQCVGHKYFFDO");
    msg.plan_eta = -1170558754;
    msg.plan_progress = 0.017776446381544297;
    msg.man_id.assign("DAUVGNSLIHHIUGCZYYBGAJYETMNQLZWLXVFBMEZKNGYYCQYBUNARIKWCYAKFZWRXQYWKZZXLPDLCSEXNRKJVUWDJKUHASJKCFSPMDBDRRRPOEQZVZJCQQABWQVVOBJOXJ");
    msg.man_type = 39324U;
    msg.man_eta = 1682923010;
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
    msg.setTimeStamp(0.69960292080771);
    msg.setSource(63388U);
    msg.setSourceEntity(191U);
    msg.setDestination(56991U);
    msg.setDestinationEntity(76U);
    msg.state = 218U;
    msg.plan_id.assign("TXKLFXWKMPURVSPBYKGHWVPMJNLFTNXDWCOJPZXQSETIIWGDUFWUMXZJUFWKOYGKITEZQNRZDJQUNOUQPBDOYLFLVOBDPZXXNPIZVEBOCHGOZYETCBCXAESCIQHLBSMTSLLPHMJSRMGGSQNXTHFNQHKACRVLRJGAVHVMWYMORKIAM");
    msg.plan_eta = 9193867;
    msg.plan_progress = 0.6068712973265015;
    msg.man_id.assign("RMYTMJONBDRCJMUTACAYXXKIALHTNJRGLZPOQLDHJIWRIUOFZUHWPE");
    msg.man_type = 3749U;
    msg.man_eta = -2146555485;
    msg.last_outcome = 253U;

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
    msg.setTimeStamp(0.325301769737971);
    msg.setSource(33690U);
    msg.setSourceEntity(140U);
    msg.setDestination(5004U);
    msg.setDestinationEntity(99U);
    msg.state = 186U;
    msg.plan_id.assign("JBSNSHONJAGQGBXNSDVICJRCZNBHPPYYLPGSOHMOTS");
    msg.plan_eta = 233253293;
    msg.plan_progress = 0.6784340974934248;
    msg.man_id.assign("FEKLVRTWWLXMXBPARLZDFDSITSHIOFMGRTEROSOMVPCMSVMJBHFQVQKBACVAVXUZAOYJZZDCEOQDGHYPOAVSUUPUNIOCRBLEGCTIIAWSCJRIQNWNANNPIYSFZDGYVODRKJZBJDFBKNKLYZORLQTFGTVOKTFVIXQUQCDSNYWMYSRBEXKRPTNMLMEUKUUHWGUJTHFNEWLEADJXEKBBZINTLCMPGWPXWYKHHGYFXJUBEJYLXPWDQHZPHQAZ");
    msg.man_type = 38247U;
    msg.man_eta = 2141278328;
    msg.last_outcome = 49U;

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
    msg.setTimeStamp(0.9104759364350276);
    msg.setSource(12275U);
    msg.setSourceEntity(243U);
    msg.setDestination(12984U);
    msg.setDestinationEntity(221U);
    msg.name.assign("HQESNKFMODKNUMWHZKNOZRFRLBTDE");
    msg.value.assign("GIBUEVGYAVPQMPCQRWZXWZACANAWPZMOOFVRMSTZYEMYPQTVOFUMRPJWKZJQTOESWNRHOUFLSVLHOHDKTOJCTHKYFALTIYTMGIHSFODCGGEOZXSCXILLRCELALRLGZYKKRVBEKMSIBTWBDMDQUXFIJYDYDAXIVQPKXMIAXPSHHIMBDNQNLPGXYJQXNCQNCQJK");
    msg.type = 83U;
    msg.access = 145U;

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
    msg.setTimeStamp(0.9114501259223736);
    msg.setSource(22596U);
    msg.setSourceEntity(18U);
    msg.setDestination(44171U);
    msg.setDestinationEntity(118U);
    msg.name.assign("HYORKUHGBLIZCKGXVCWDWVZJIBKGWBAHTYPIARXNNQMDCJPTNLANHMHMDVOQTBRYRBEFYMRQCMBJCQISQQMJBLJERZUDXFDUDVONHIKVIVZYEACIPWKSFANSJQEOLTYKEFUVNDWLSXDU");
    msg.value.assign("MBZBDRQRIOGOAVGTWTGQYXFTPHNOTNWXQTDQEUANVZGOYTRKHPJLMDFIZLVYQIWECSJKSALRWPSHMUYQSKUYDFXVLJOHECTLMGVYIWHJNGLJMWOQIJTAIKBTMGEBGNSKPLVHXAMOOORXVLDEZSZQNIJXVDAAYXCDABQNISKJWMPFHKYDUAPF");
    msg.type = 107U;
    msg.access = 239U;

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
    msg.setTimeStamp(0.49282168286503725);
    msg.setSource(51163U);
    msg.setSourceEntity(177U);
    msg.setDestination(14499U);
    msg.setDestinationEntity(27U);
    msg.name.assign("GIWCBQFBCUARBFQDYMGRMDEVJJUQOSVHHTUNYLPBVEJGQYEIHUILOUZYASTQFJKFJJWPRYFLYPNBNKCX");
    msg.value.assign("BHMTGEXSXOMQWIUJFFPKWNMXCPHPLEUWJBJVRIEGACXKDYYZBBXEXEOHRRAUYAHDERNXPSBAZNZBZDMOGTMWTDPC");
    msg.type = 23U;
    msg.access = 139U;

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
    msg.setTimeStamp(0.8313233011652232);
    msg.setSource(52211U);
    msg.setSourceEntity(111U);
    msg.setDestination(61308U);
    msg.setDestinationEntity(254U);
    msg.cmd = 35U;
    msg.op = 79U;
    msg.plan_id.assign("NPTLYSNGADRLMQOBDGRVWWHTDJHVQDOY");
    msg.params.assign("YNBCCJVRVJYMWCVBEFGMRUFMGXGBIDPYNHIHVFNQCJLSDLAPPTMDPFUSDWKGVBCLPEEOSMEWZEHZKQJQGZGGQPVRHIEXKOQLLFFUUKJCNWTSVIADAIHSMBOYTZAFXAAKYREQJTNXLZWRWLIYIOKGUDPSLXBYGUABFWNYJXTEKTJCBWXUHIPXH");

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
    msg.setTimeStamp(0.39724504199720845);
    msg.setSource(39762U);
    msg.setSourceEntity(215U);
    msg.setDestination(30311U);
    msg.setDestinationEntity(69U);
    msg.cmd = 177U;
    msg.op = 159U;
    msg.plan_id.assign("CFOBALWMHQHZBYCVMIKEYTIHEROCMRWEIUQIZSSDHUYGYKSXACXGBEKOFCUWUKJYQZSNGVCLBARYHIEHCWKLLTENBDAUMNMQDJWWZLLHNUEPMNGORUYDZIWBYTXOSCIVPNFFFIPXAKUVJJINRGFA");
    msg.params.assign("JQOSHGBKUQQGPUANSIPKIJKVSLOXMCRUYEPJZCHCUCFWKJZFNGIHGVNYMHKYWCVDMJERP");

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
    msg.setTimeStamp(0.49626999069328037);
    msg.setSource(62164U);
    msg.setSourceEntity(112U);
    msg.setDestination(27672U);
    msg.setDestinationEntity(195U);
    msg.cmd = 16U;
    msg.op = 134U;
    msg.plan_id.assign("YXQGHVJYIOPLXJTGIQYEZ");
    msg.params.assign("PNJVTZIBJT");

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
    msg.setTimeStamp(0.158797672256777);
    msg.setSource(52801U);
    msg.setSourceEntity(211U);
    msg.setDestination(13680U);
    msg.setDestinationEntity(221U);
    msg.group_name.assign("XEJJZXYNTPNGCBFQJJLSJSRJILQPJGVZAZDEFHLEPUFSPMUTPWNMMQMRRAXKKLHFBKRHEYKFDIWFSGOXTSVKMXTUGGJIHZTBFRBCZQSMQBZUKEOGWZVJACEVCYHWOWINIWNMUTLDTTMIENIAIHWBYHRKURVKYQTBEVONWSBHOOIKCFLXHGPZDQUUDYYXSK");
    msg.op = 121U;
    msg.lat = 0.11166338436445256;
    msg.lon = 0.0034531950748786233;
    msg.height = 0.2803956894212136;
    msg.x = 0.0827162197091783;
    msg.y = 0.9714823044395688;
    msg.z = 0.9761671439363647;
    msg.phi = 0.4979754161089056;
    msg.theta = 0.4748764245034328;
    msg.psi = 0.03997789500286031;
    msg.vx = 0.582749865923444;
    msg.vy = 0.4746761398947842;
    msg.vz = 0.2060947280759976;
    msg.p = 0.0033996180428932377;
    msg.q = 0.11148978783839358;
    msg.r = 0.5577663492445066;
    msg.svx = 0.07811236551934908;
    msg.svy = 0.40628093807239996;
    msg.svz = 0.14344690517951186;

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
    msg.setTimeStamp(0.4871130191075418);
    msg.setSource(51340U);
    msg.setSourceEntity(25U);
    msg.setDestination(41587U);
    msg.setDestinationEntity(32U);
    msg.group_name.assign("MWAWYQSMJVBWPBWXZSWLTGEQVO");
    msg.op = 160U;
    msg.lat = 0.3989065456656995;
    msg.lon = 0.20623424049835093;
    msg.height = 0.9556809135798675;
    msg.x = 0.6131292494785823;
    msg.y = 0.6797234498447702;
    msg.z = 0.8441879644595421;
    msg.phi = 0.22164358575025866;
    msg.theta = 0.7107528606392693;
    msg.psi = 0.21589664522296947;
    msg.vx = 0.7574185905948426;
    msg.vy = 0.08622155006208343;
    msg.vz = 0.3988210169929044;
    msg.p = 0.8146696124464543;
    msg.q = 0.3305806624370845;
    msg.r = 0.24816038189172662;
    msg.svx = 0.07456788481548882;
    msg.svy = 0.06543577862231686;
    msg.svz = 0.6336502646163604;

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
    msg.setTimeStamp(0.7920888409030453);
    msg.setSource(26943U);
    msg.setSourceEntity(172U);
    msg.setDestination(18745U);
    msg.setDestinationEntity(80U);
    msg.group_name.assign("WHXRAPLZZYNNKIDUDHWZXMTBTKPHQYZHEOJSGRVGVJOJVVWPQNCOYLFOGMZLUMWRGUBYOXEAWBBLNMCIYEJEQPPBEJJEKASPSDTCVSGBGLXOTRFTKOXRVCPGHAFITCQBFXLZSDQRZYXDDRBEHOQSSZWDFSAUIVUAF");
    msg.op = 170U;
    msg.lat = 0.998710366510268;
    msg.lon = 0.053873733646107924;
    msg.height = 0.5074221661191495;
    msg.x = 0.1160108580634277;
    msg.y = 0.7027166866221574;
    msg.z = 0.4249726934163687;
    msg.phi = 0.09279480104181714;
    msg.theta = 0.28160224415473234;
    msg.psi = 0.619358395533355;
    msg.vx = 0.9829754710849146;
    msg.vy = 0.9742313640264554;
    msg.vz = 0.39742287343675864;
    msg.p = 0.9846134802012353;
    msg.q = 0.8449696168088785;
    msg.r = 0.5800853812355858;
    msg.svx = 0.126281771035045;
    msg.svy = 0.5663220542979531;
    msg.svz = 0.8553253267434878;

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
    msg.setTimeStamp(0.8012446945831804);
    msg.setSource(55580U);
    msg.setSourceEntity(146U);
    msg.setDestination(62436U);
    msg.setDestinationEntity(246U);
    msg.plan_id.assign("VZZOOMDIXCDJKCMKYWAGYZCEPDBPZEBCCMWHYUTWLVBDNLYSAQCLASTKUHEHQMEBIAANFJSHIHVNOFROSLODZLTTWYRRYKXEHWBFKPEVEKMIJGOPNIKVWNODXGJRDMUJYBFLZTRALYOKFSCJDQRUSRSITGANGFXLMZ");
    msg.type = 114U;
    msg.properties = 156U;
    msg.durations.assign("PBITTKRWHZQJYZTYHVQOMBRMMPGIJSOODSELGWVTTNLFCIFEOGHQDMULNJYIWVXVRFGXEAJBGPYXKHIBRCDZOERCWKMAPXNTNZCUERBRIAADQSLSXHNGXXDMLXUUVSOQFCOKIZKNZNNEWYURCDZT");
    msg.distances.assign("TNBTMWMHIFUEXPNVSJMRJAOEXSRUYZYEGKDJZABMGRAYZGHWWAXBAVYOXXUNLZHLKUESTFIRFOASYTNUPSVPXQHKWLCQDLCYKMARXUDCILNIWKXOZTACVCVWCWPJFVCRTDOGJHBZJZNKBDLWZ");
    msg.actions.assign("QQADFWDCVFTEJRPZPEJQRAUUYPRFOLVBPEIQGHPXUCKWFLTYIWQAXLFQLTCHZCOSMROIWQUXJCTEOFEFGNRHIIYOEWXBNNZZJWMABIGSNECKGAYCNZAIODKVIYSVJMNUHWVBTLTTSXXHADMLYRKZGGVDMCEMINJHTQMWHMPJGQODKRBSGFVUPLAMUHYFVCBBPSBDFBERYJNLEZKXVAGZTSSUZDLMKKDKPWYDUJIXCWXKNXSPJLVBYNAOGHZSO");
    msg.fuel.assign("TREEQOCWYAVVNYSJRMDLUAPWKHSYVCRCLAXBTPITWHJAJPFLLOBLDONOKMBDGRVZACRHTELPLQYJMUIWCWWGVEHKFMXWQZHFQCDZPIJTKFZOYMUNCZTRGIQKVNMFGJZGPFBUIOTPQVXUVZOQQXIONCIDAEMFRXKFKRJBCMLGHBHABWSALFSRNDJXXYHXELKCNHDSAYDUDUTSRJGMPEBSNT");

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
    msg.setTimeStamp(0.3334263222851883);
    msg.setSource(8763U);
    msg.setSourceEntity(159U);
    msg.setDestination(6606U);
    msg.setDestinationEntity(61U);
    msg.plan_id.assign("QXVJIAKNQSWFUXPQMGLKFYPJRHUCHAXTNSBRCZPQNZDNRLZEDLFOUMVGDSWCOD");
    msg.type = 57U;
    msg.properties = 82U;
    msg.durations.assign("GNHGCOQSIPJUDHXIU");
    msg.distances.assign("ZOEUTRCVEPOKGBGNPAOZKJDYBXEHDKDQVMYVIDCSTAWHRXLMMJPWMEXYOFMNNTSWPDRUNRAPQWBPCKNUZGUCLRFCWKUUATKQVXHBWJLIYSNEDKSHFLJOUVBJURYFCQBQAILCFDALYJLNQISJHYVEIDNICGAGRYSCIJMZGGGKFIYRQWZSESPETLDLTFEXLBUWWMOHHPNVMYSHHOJJAPKFBX");
    msg.actions.assign("WDHZYWNRRPQXQHEFMSIAFWTJDELDAUOXNSHKVLUEBRUVOKCGAJVMUKWQZXBEOYAVPYBKQYOQHGJUIPXYOSLIYRYM");
    msg.fuel.assign("LUIQTVIOWHVWOZLKINNNTOUPYMJGHKKSEDRVBYDRCAXBEKZFTGYBSWJTZGLWAXPCSVZDNOJDDTCAUXRFGNQESRMGVPLSPFIBIKCHYOFOSHSMDPVCEQDNMOWKIPKARRKFJHGUXSEYFHAWCXBCBYXJLVTRFWXRKJIZJDNBXVIBCGUWTLHAPSYGLQALEHZJWIMVNCQEGUPIZLAMQQZMMJQZNQJOQLOTEFORGEPMHSXAYTFBEKDRUBMWVUH");

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
    msg.setTimeStamp(0.37543752781437556);
    msg.setSource(63032U);
    msg.setSourceEntity(90U);
    msg.setDestination(36761U);
    msg.setDestinationEntity(146U);
    msg.plan_id.assign("OSSAQVDWKTDLIICRDMVOOBVTQJISUELZWDHTXGCSYPIYVAXTOKZKHJRJIMGVUOLRHVGUPMECDMGEYCMRBSJDRKYTUNBWHUTZIFCPJRJFYTMT");
    msg.type = 184U;
    msg.properties = 42U;
    msg.durations.assign("NAEFFENTFFMYEUNAGQIOZQSJOWWJMRRNKIFCTQJNXUHRVDILTLZABTFLYXDDQNCEHMPUIKVPZLKCDYWUSFIMHBSLLSDQSLIPZMTTPAROXZAPRRNORPIKYCCC");
    msg.distances.assign("IPCXZNNFIMYQE");
    msg.actions.assign("GPCRCNCJBIUUASLBEFMXHDUTWQFZXPZKJELKMBPMLNGXGLMIDSNYDXASLVRGVOXDVIPPUERDCAOSZRQTGSLEFLGIDOJGTQXIXBIKNYXFTMBCA");
    msg.fuel.assign("AHFGVAQRGOUWWNQNQNRJHEBZUEIWYQBWBDAUSZONFCGQJYVMSSLTDGRBOZVXJPAAEHIRXJQLQLOLNGRCNNTVFSOLSXYVECMWUDSUULMRCOZMFTCEACTYEZMRYXJUGNNLLYWMFIKFOPYBMUAXEAWNMYSKYEEBPHTHJTCDZHVKBZPTVZFDZKMPJBRAKGOKPO");

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
    msg.setTimeStamp(0.9868983844255796);
    msg.setSource(26230U);
    msg.setSourceEntity(191U);
    msg.setDestination(8045U);
    msg.setDestinationEntity(0U);
    msg.id.assign("IMKBEVHCALEOFKKSVEGOSERYJAYJUWUQCDEEYYVRJDHWVPXZPCQDQIHNVNUPQMGKVIWFFIHRVAUCXPBVMBWRNXCQBMFTMMUHOBMNDKQXBSCRUWFPIXTSBKZGEJDWZXQTFMFLOREAJOJYUDPCGGDLBOLZLSKHSGQGZIPDFTKAVTGSKYPYUFWEIOUNTJGJNQTDTARASMPIMXWHRNNZWPJUBIYRHVZNNLYAQLXHYEHXAKCTIOLXCSOZGRSBA");
    msg.plan_id.assign("EFYDWWLBRAIAMLJCYHVCAHBQVDJPXYGHRPFBNOYFOXZZKGT");
    msg.maneuver_id.assign("NWOKCUZTZVXSNMOTPZPRBUTSKWDKIHWUIKGEYAXQMXOXEQIR");
    msg.memento.assign("OQLTYBAAWNRFNJJGDYRVQCQKMIDSTDATXCRGGGKCVTUPDMANEZPLEUJEYHCELILVNOMGJRPNUYDCIV");

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
    msg.setTimeStamp(0.6184843401900104);
    msg.setSource(44090U);
    msg.setSourceEntity(205U);
    msg.setDestination(10168U);
    msg.setDestinationEntity(183U);
    msg.id.assign("XNUXTVASHUUFOAQFQKMQLIJKQCZRTAVROUTXWWATUOGVZYNXUYKHHHMGHGOJRXEZIOPIXPQMPLYLPIBXZNUBKWTYRYVDFQJCVMBVWDHFBDOFTCTWGFGQJONEEWAMMSQRJZUZHCJQGGVHVSN");
    msg.plan_id.assign("VNKFRMIJHEVTYNSGCPDTE");
    msg.maneuver_id.assign("OVMNBPJUIQVYAVWYYFOUQHLF");
    msg.memento.assign("BAKZFMQGISICEAGGPWMVJCXLHMPYTWDZRSIRGPUDHJNUBTMZKVJDUSGFHTJMOYBJUHZABAZSQDRWPXNXLZBMFYPQDOETVCZNOQSRAWIEOIQHNKURBOCUQMVXSNQLFFMEKONPKKYIQXDAFJTQZJVXFDAYRWHYKVMEUJHFSTMXQSKOCZCOAPERXYIVZSKWDW");

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
    msg.setTimeStamp(0.8698743447165337);
    msg.setSource(46643U);
    msg.setSourceEntity(170U);
    msg.setDestination(15955U);
    msg.setDestinationEntity(89U);
    msg.id.assign("RVKQXHAGTBYJINWFFAIRWBTQZDIWZZQHFHAUUSCLLMOAGWSRBKDZITIVRDMECPYXCCZDAZOLKKLJSNROJNYLNPRFNXNTPXCODFSVGZFQSWDUVWXBXFMOHZGJKECCELLHEUJOLWORYQVXRHWWEPPYIGXKYKNJYQJCGESTMFMIDQORRBEUVGSANUNP");
    msg.plan_id.assign("MYWEQKAQCQWSRGYJ");
    msg.maneuver_id.assign("WXQBOFHXQERMTETAKKQDRZLDMUHYYTOGDPYVUM");
    msg.memento.assign("ALHBYWEAAOCLIBSGDXZJQMMAPBJFQRSICYDGNSJDXMGRZJIEMLLPQDIWDISKWKWOBNOVKZIXOLVNUFQCUZDXHXRDXSVUTEFRBRCKTMPAJQZGNVCJBITTARTLEIOWGFNPZERUYFJJCQWSGWQHSULEMUPULVZTGFSOJNIHNHTCYFOBFVZXTAEXHFCKWPDKFDYXUVQYY");

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
    msg.setTimeStamp(0.3780785875224305);
    msg.setSource(8790U);
    msg.setSourceEntity(169U);
    msg.setDestination(8006U);
    msg.setDestinationEntity(49U);
    msg.lat = 0.9074492176812977;
    msg.lon = 0.36995535420399484;
    msg.depth = 0.5170818911420055;
    msg.roll = 0.3320796482656193;
    msg.pitch = 0.20920496405393896;
    msg.yaw = 0.22593316991259638;
    msg.rcp_time = 0.6615157047887229;
    msg.sid.assign("LVPBKGMZQEJCTHNRAGUKZTPLHOIZVEZMRLCIDUQFTKWLSACBIQEFREJNZYFRWUTJBXMWYTJLASUCCKCUSDARTYMPHXBRJPPKGFTLEUQEJBOIZNEUSGIJWHKTGHRKRFNZCWVYBEWVQMDWHDHDKZXOUAZFCUYXPSQANNULYSXHYVPIEQOJXNCTBDLQNBSHXMDWFVGITMANYPKGMNFOZOWI");
    msg.s_type = 217U;

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
    msg.setTimeStamp(0.8734671629945763);
    msg.setSource(48776U);
    msg.setSourceEntity(154U);
    msg.setDestination(25839U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.6924182615693643;
    msg.lon = 0.08802927489720103;
    msg.depth = 0.03680583795200487;
    msg.roll = 0.012216834799045784;
    msg.pitch = 0.8455844071293825;
    msg.yaw = 0.47678661419606494;
    msg.rcp_time = 0.5445864551259073;
    msg.sid.assign("FFROPCQYLKCTQWMMMLYVNLFHSHSPJDRYBVKPEXIIPEXJNKLHOGZAJQAYTDBFVNRCNWBVBJOKIOXUFBMKUUEBYAQUELELTYQLJASHVLDWTYMABYJYFZWENSVRAKZWECBIXOMRIDANQCNDWGZJOSUUSODZHHIARGVTUGTWXZUCSDFETZOARGQPCMHOYRVSMKPCSEWGMDUKVGZBZJXQCDQTDKJXNJUFBXFZXNGXTCINWRIS");
    msg.s_type = 142U;

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
    msg.setTimeStamp(0.6410930251770955);
    msg.setSource(30722U);
    msg.setSourceEntity(250U);
    msg.setDestination(38806U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.3044431313857079;
    msg.lon = 0.12982112205044594;
    msg.depth = 0.6307691292506806;
    msg.roll = 0.5126684765000492;
    msg.pitch = 0.5758156256255156;
    msg.yaw = 0.6805214017404647;
    msg.rcp_time = 0.8118721334075101;
    msg.sid.assign("GFETUSWICGSFNEBOFVNUNMVWCNJKZQGQVPXKRRDDWJTDOPXWVWWZOYHLAZRMFKHTUYEEQYFCLDIFNTCGMRDBYQXLNICIQELTUYOTBONOXPIKJMULMZEXZFYPJBBRGTEDKAHFPTSROKHICUDJOBBAEMSHRNMLKRSYIYPXIFAD");
    msg.s_type = 53U;

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
    msg.setTimeStamp(0.052293046210690974);
    msg.setSource(45902U);
    msg.setSourceEntity(12U);
    msg.setDestination(47908U);
    msg.setDestinationEntity(239U);
    msg.id.assign("MVJEBDVPHQRSNHKYNSACUPXNLYIAEQDDMVUIPXIHBWLBEHLSLVAYFQDWAZTURJSZKCRONDYIGGMQDTBGTTNZWPEHNLWMWULZCJTOKNDYAFOMDFSUFARPNRCENKDJUEPVWUPLXEIOQBSJXXQGZKUECKATVTJTYOZNXOHWWRGBMOSVMMXYFIAMUJRTLJUCBCFIKXQEVYBB");
    msg.sensor_class.assign("SWFTQWARKECDSPSXIFVHLPIFTKSKDGATVZOVKLMUKLOMIFRLXAUPIQYYACBTHMNBIHOGMBFSCYDYSNRHWQWSKYCJQZYMQPPFVGALWTBJCQTZEQZNEOYUNTIBBBZAOOC");
    msg.lat = 0.29027576273725975;
    msg.lon = 0.24842768992499964;
    msg.alt = 0.07389140859262666;
    msg.heading = 0.7109584847486932;
    msg.data.assign("EQLLJHTTDFVNSJFAEAYZQHAEEXPQDZCUAGWTWDWBHVPXFLAXJQFRHFOUSMMBOSVFWCIEOSBHKCYOYZWUNPDBHJLKOSUPXFLJQAYHTIGOWUAVBBYULMKYGFBRPCPB");

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
    msg.setTimeStamp(0.5298391424927373);
    msg.setSource(23742U);
    msg.setSourceEntity(35U);
    msg.setDestination(23175U);
    msg.setDestinationEntity(19U);
    msg.id.assign("QIQVOPMASZZKSWZORGXJYIXNPXHGELKUBNIYERVTCJEQUXTZOOPL");
    msg.sensor_class.assign("SFXJVYBSKTFHLAAMNACPRWOHCTYIPCTXPUHMENKIJTDZZTNNQBHMEERTPLXSUIXXBFDPKIELJZKM");
    msg.lat = 0.6414864752108292;
    msg.lon = 0.6760197816934626;
    msg.alt = 0.7796485899361425;
    msg.heading = 0.05878667845490548;
    msg.data.assign("QIMYQFCBCSIPORBZVJCHUODSEKECRLFGZJHBSCBFOHWIISUNXDGUYOMBLDTVNVJXMRBAEYUETAFPGFWTPMZXRZZIAJKYOLAKXACMDENLBIFRUIVMJTXQVSKHKLURZXSJNGLLEAOHPWDKTRNOVZYBAMVDIKFTV");

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
    msg.setTimeStamp(0.703666263651191);
    msg.setSource(63851U);
    msg.setSourceEntity(184U);
    msg.setDestination(29239U);
    msg.setDestinationEntity(37U);
    msg.id.assign("WDIVXNUFCIHNXFWBBKWYKOANLXKFDBGOMRDYOQOJELEEIQBLLDNASYIRQFZRAGNHKJOBYPTMJHQGPIIFUYBVJPMDCTRVTPGKSGYGSTZDXSSEVDFLYNSCDMZUTQRPJZAFJQCIXBLRVEZHRMD");
    msg.sensor_class.assign("DIEUJTVYTFDWMOAROLYPXYDGQTLVOZEIFKPOAJKHGZYKLEJJLDAEAUELCPFGRSEWOJQUCHHIXDRFXCNITBVAPNDMMFZTYFCRKZYWQXJYWUCYRZNMSCICCCBJSBQPNELAGWWXVELZTQHNTXDZPRWMWQYBAGSHHKPVQBBCJDWPFGUNNMINOGTI");
    msg.lat = 0.6543386129515935;
    msg.lon = 0.06486219782157965;
    msg.alt = 0.616558051620817;
    msg.heading = 0.8919895018055324;
    msg.data.assign("WQTJRXWAGCROOGXJQRTUZTIHMXLTMRGHAPOCYFOEZMZMEYNHYHNROMLVNBPADAWDXWEEZTONU");

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
    msg.setTimeStamp(0.7451351013999815);
    msg.setSource(53671U);
    msg.setSourceEntity(32U);
    msg.setDestination(51483U);
    msg.setDestinationEntity(85U);
    msg.id.assign("LGFWOPSJGEXDQZGMUHKTCNOHQWBCUSJMCZUQQPVTWNHBNLTHZEYJAEJDKJUXFYDBVEVFLGISJXAITCARXIBRKWXVAENAFBYNGP");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("BIVNRHTZJIBGMUYLOEVSYLSHXVAQKHMIGPTMVUQBJCYMZTVBJYAJGUAOQZQFNSEJZPGFVRBLFBKWHCHRDQMRULLEDFCROPROMGLWUQFXNBZPXLJJKJQMEQAWGHUNNKGOWNECAMAHTUPXHNIKZCXLTICCGXKJUEZCSPPDDUVISVMXTALBFIYXDDDFKYGYVTWPOPQZHSSIDKWKMIETSYRCEIBUOQYSAXDKJEOZRDBOVPRWZGNRFFWXHT");
    tmp_msg_0.feature_type = 102U;
    tmp_msg_0.rgb_red = 146U;
    tmp_msg_0.rgb_green = 216U;
    tmp_msg_0.rgb_blue = 10U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.19653477293851518;
    tmp_tmp_msg_0_0.lon = 0.6969856764414386;
    tmp_tmp_msg_0_0.alt = 0.11095880088877574;
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
    msg.setTimeStamp(0.3633537557922363);
    msg.setSource(13817U);
    msg.setSourceEntity(202U);
    msg.setDestination(53504U);
    msg.setDestinationEntity(190U);
    msg.id.assign("EDATFLSHNDMNAKYPVAEEIRQHRIBWREOOBVKFWJCCVKWXDWT");

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
    msg.setTimeStamp(0.9753239191933027);
    msg.setSource(39982U);
    msg.setSourceEntity(68U);
    msg.setDestination(55631U);
    msg.setDestinationEntity(241U);
    msg.id.assign("CXPOPHOCQNDOJPWEPSLJMVFLRSQPBZYERGSKLBSATEBGJODOAKQFJSMDWYWBOWIHGNIWTRXZIFRHPVGRXAIMLJOAETCHSKXGIHDWLMXCUNVADAVKTTEWZUMRWUDUBTELXFYSFNFQKCYQLQXY");

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
    msg.setTimeStamp(0.3669243987299927);
    msg.setSource(38708U);
    msg.setSourceEntity(93U);
    msg.setDestination(37044U);
    msg.setDestinationEntity(85U);
    msg.id.assign("NIJHHJWSRLQRYIYCEVCFAPWEWHUCRXDUSVFIMGXEQTFLIBFQQVRJHLMQHDGSGGNLUGTJXFUMAVOGAYKDAAOHONWMHDMQQSLGBLEPCXCEQJUXBKEYAFFZIMYTZM");
    msg.feature_type = 161U;
    msg.rgb_red = 251U;
    msg.rgb_green = 129U;
    msg.rgb_blue = 101U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.4797900103837368;
    tmp_msg_0.lon = 0.9672690057804922;
    tmp_msg_0.alt = 0.5606850540087646;
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
    msg.setTimeStamp(0.43383193913696905);
    msg.setSource(881U);
    msg.setSourceEntity(21U);
    msg.setDestination(53846U);
    msg.setDestinationEntity(37U);
    msg.id.assign("AEKQANHJPLBHEWXASJLGOATJFTMPAPIUWXHYHXRVUWOTJZCNIXHQLVMFXZTYRIFLOWYCIUICEKLUPOSBPCEVRLMTMVHEJQQNFCGOLRIMWMDNSNRFKYNGGEWDZDKSGIBAGFSBWCHQNBTHVJJBOIVFSXZQBJKOGASPCFWDRMXDMHUDWXMYPIKPSSZEUYAMEWDSKB");
    msg.feature_type = 19U;
    msg.rgb_red = 190U;
    msg.rgb_green = 81U;
    msg.rgb_blue = 156U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.3309861338771476;
    tmp_msg_0.lon = 0.4044717660768966;
    tmp_msg_0.alt = 0.313583068177147;
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
    msg.setTimeStamp(0.4578197678128749);
    msg.setSource(35321U);
    msg.setSourceEntity(67U);
    msg.setDestination(32453U);
    msg.setDestinationEntity(247U);
    msg.id.assign("UPAWRGNBKGZHRGHXSYSXZBKJDMLYEMJYJUDQDYVASWCFUPAQPQNGZXBLMMFZYRJEZNMSEROUTHQIAFXSOIQFVJDFUCWF");
    msg.feature_type = 239U;
    msg.rgb_red = 192U;
    msg.rgb_green = 33U;
    msg.rgb_blue = 153U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.3503064895084138;
    tmp_msg_0.lon = 0.972826315768431;
    tmp_msg_0.alt = 0.19135963918757015;
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
    msg.setTimeStamp(0.3174962647274483);
    msg.setSource(13712U);
    msg.setSourceEntity(105U);
    msg.setDestination(13158U);
    msg.setDestinationEntity(135U);
    msg.lat = 0.8193628577793596;
    msg.lon = 0.7169032019965474;
    msg.alt = 0.8196706470375427;

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
    msg.setTimeStamp(0.456332589855877);
    msg.setSource(23169U);
    msg.setSourceEntity(150U);
    msg.setDestination(9574U);
    msg.setDestinationEntity(180U);
    msg.lat = 0.4797703678732783;
    msg.lon = 0.18237146100380164;
    msg.alt = 0.2541317996073108;

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
    msg.setTimeStamp(0.9680108952167119);
    msg.setSource(25310U);
    msg.setSourceEntity(68U);
    msg.setDestination(5525U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.20759867918968922;
    msg.lon = 0.19850819812701848;
    msg.alt = 0.3319023403877429;

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
    msg.setTimeStamp(0.16147399089545633);
    msg.setSource(22665U);
    msg.setSourceEntity(149U);
    msg.setDestination(56936U);
    msg.setDestinationEntity(235U);
    msg.type = 20U;
    msg.id.assign("XKIIQOARXKDJYODORJPDFDIZWHFNTJAUSAVICJCKEHARLFJJZWUGPMJBDQYGBWVJOCULRXXCSNKDLFYMQMIGLKZQFDKABWEZTZPXWVZNZAIAHCG");
    IMC::LowLevelControl tmp_msg_0;
    tmp_msg_0.plan_ref = 2470320127U;
    tmp_msg_0.id.assign("QXPEZGPMFLZTGTXPFBBHVTNBAFPWGSTQSJCFBNCOSHUQCELQBSNOIKFDZVMCIQOAKOBVAJCNIKUYIXAGKOJBYLENOVWSJVRMEHACWHWSYCDUXSWGKLGGARRXHLNWEUQEIZTLXHBIMGTLILQKFDYIUQRHZMTHACEMDUDVYQPJXTVXPNEPF");
    tmp_msg_0.memento.assign("CHVYSSGYEOZMBKQKMDWWIBYWUTFAYZUNXFWYLRFBEPTIFSYVNRSGYLLRDSSVWZCMQVCQAHDAZHJXTDMYXUOAFQOFJNINHIDGXPXOXMJUTPYQBTYDRFTQRMDOXZBVPCNLKEEUPEWRNORLGPHOVMJFEAUZHENAACWAHGXCLKQVUGPQTOJPIIJKOCGLVLCUZTVFSLJCOPBAHGKJFSU");
    IMC::DesiredRoll tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.1203657973206157;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 2800U;
    tmp_msg_0.custom.assign("WGBOLZDZPIXWTCLYJIYMGVQHNTRXSTVUYEMSOPDDKFRUADKPIUIVYJJJRKTYZATXYPXMHSZTXFLRASWHEUCOZ");
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
    msg.setTimeStamp(0.9712880219735578);
    msg.setSource(30282U);
    msg.setSourceEntity(214U);
    msg.setDestination(39336U);
    msg.setDestinationEntity(212U);
    msg.type = 9U;
    msg.id.assign("HPTQMOMDPZYWEIRUEPXBYOZJOVDJYRFQENWAHUHSMGISFWEKTYJKT");
    IMC::TeleoperationDone tmp_msg_0;
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
    msg.setTimeStamp(0.35061761347677856);
    msg.setSource(6430U);
    msg.setSourceEntity(193U);
    msg.setDestination(57088U);
    msg.setDestinationEntity(116U);
    msg.type = 248U;
    msg.id.assign("EDWKFUSCCWKFLHBAXSCHRXSEGMARZMPXRYLGWRVPPACEAX");
    IMC::CrudeOil tmp_msg_0;
    tmp_msg_0.value = 0.2393591205199579;
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
    msg.setTimeStamp(0.11805982294555828);
    msg.setSource(23615U);
    msg.setSourceEntity(236U);
    msg.setDestination(21105U);
    msg.setDestinationEntity(147U);
    msg.localname.assign("OCMOOJOZUIADEMAGNJKRVSFSKTHMECRWYSPGGMKMMWXHBDPHHNSNFUXWBHESBT");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("DVPQNLIGNQQOCWHQXRTFSWXTXZWKZEFKTAMMNFBCEUYZWNPVNPRLBZPBUBJGTOWOGOSQHRAIYZFLTZFQLNEHVEJVGUCQDLFTLZSGGSLDIRUOMBCODYSDVPTTJOEYAQUTVMEFSXZWCMUIBHWHCXBNDRCYXUICHRPRKRGQUOFXETQAWMGZL");
    tmp_msg_0.sys_type = 216U;
    tmp_msg_0.owner = 51506U;
    tmp_msg_0.lat = 0.2823701821469633;
    tmp_msg_0.lon = 0.37518963007822714;
    tmp_msg_0.height = 0.5887528940948085;
    tmp_msg_0.services.assign("KWAMEWHDSCYAFRMWIZPEAROGXRETMJVWFXMOFMIDKPQQSCIFENXEEXQJNXBTGBJCHIFPNJPLSLKJRTQUEOCNDUPWMUZJYUIXLVGQSXENYOIAQHCCNDMPPLQBFTBVVNJDDASUYNBWDJQTBTVULAFCKMIHCSGKZZEQOYIDMOBHXESJZJZLHXVDOBGUZGTATZHRAGGWIQCHAVVFSDOVPUOPZRNSGMWTYRRLBKKXULT");
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
    msg.setTimeStamp(0.26250750282486734);
    msg.setSource(42252U);
    msg.setSourceEntity(15U);
    msg.setDestination(58887U);
    msg.setDestinationEntity(189U);
    msg.localname.assign("NYOLZNYOYKAGMKGENKTBKAAVISBLBUZVLRQVKZJARWEVXZWHZVOHCXQCIXQYTLJRQUCGFJRICUVXRXWRBXXPKGMUPWOPQUOVMMZTNMVTICQEOIHEIDGUJLSKDMMDYXFHJOLFAPDYDLMUJPRZHMWSPDS");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("UPOSHBICRCPIYZSWJFXEVQPJLOFPOINFFWTQCLYYZAWRTBHKQXDOTNXMYYXJJMEPNAUZDFNKWGAYBYVVBTSYOSDKLYKLZBJWUJWXEUMNXRRSGOEKPGIUIQAQUZAZZYOMFAHJLXHJTVRDMRQCRPNDLVOGUJNWHACAFHSDQSUKTMEKVELFNQEZHIESMPBCLFCDIASPKVOEIWNQDGXBZBDAFJGLQXUDPCME");
    tmp_msg_0.sys_type = 91U;
    tmp_msg_0.owner = 57310U;
    tmp_msg_0.lat = 0.46544724601271836;
    tmp_msg_0.lon = 0.009835409579087573;
    tmp_msg_0.height = 0.7789489879931126;
    tmp_msg_0.services.assign("RPREPFFBBHPDQCUAKEQGQJIYSXAZLXGCBSNDXTJJTDA");
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
    msg.setTimeStamp(0.8349879844946838);
    msg.setSource(23116U);
    msg.setSourceEntity(51U);
    msg.setDestination(32673U);
    msg.setDestinationEntity(205U);
    msg.localname.assign("AKIZTLVSWQTUACTIWVXXBVONOUUQMBKLMRRGZAPQTGNRDSDSHDDGWEKKPWCFCAGCUZEDMIRXHIQEKMDRKWIDYEAEYCNZQWZSDCVTKLPUYFXNMPRQWBATGNHOCAYPOHDQDSPLJMETCJMBLRFNJPYKZAUBKHGIOGFOUMHXJHJBLOCXGUBTFVLZIYQSQEFSBQMUKOSPWJXXYGVCWVLFBXONZGSIVNUFIPVYZFVBMEIHTJ");

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
    msg.setTimeStamp(0.16821960346700604);
    msg.setSource(53851U);
    msg.setSourceEntity(170U);
    msg.setDestination(23203U);
    msg.setDestinationEntity(220U);
    msg.timeline.assign("BDPVCMCKGMGFTMMDTSYAABKOLTBAMZIKUCYCJKEQDLTXYGIWQJOOLTQMJHAYIPAUORDKXXOXWNXSBVJ");
    msg.predicate.assign("GIDGTWFVVDUOZCHLKOLXTNTIDXYECEZSPRUIYBFWJS");
    msg.attributes.assign("IQMQXBPYAJRTTJJRYTKQHOBJSXKSQOKHVTEMUNVOWMQCANKDDRXVAVPHGIGSLFMPEWOSTXEPZUVLQIUZIRMA");

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
    msg.setTimeStamp(0.7472547926074287);
    msg.setSource(377U);
    msg.setSourceEntity(121U);
    msg.setDestination(33316U);
    msg.setDestinationEntity(161U);
    msg.timeline.assign("HAYPIMVRWSDXWXAOUCCEJQMHILXQFDKEAOPQOQNJGBOKGRTMRJNKBLJFOKXJ");
    msg.predicate.assign("JMCSUBSPMDOMDUNFGYJDJIPGSWWSTRXYEJKIPEEDIGAWAWREHSKBVIUTAZLIQZFRFQHYHCQNNABMINYKXVLCYXSBDTMXKUXOQTYYVZUCFPJLCSEKUUXLKLRHHPXRMLSWTBIGMWHCLAORQHXMTND");
    msg.attributes.assign("RROWJPSQAYDBMYMGDBZCZWJUFRLSNJDXOSBXYEDHWAWMKUSVCFLGRUAMSZGWFELNPZRNMDAYHIMSQMHBMCWVOQZRUCHPGYNJXTIKDTFEAXTBDVUDWOKUCECAFBEVTJGBBSSFCFWWYJIZNPOUPLNXEEJB");

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
    msg.setTimeStamp(0.42496379931834893);
    msg.setSource(20005U);
    msg.setSourceEntity(22U);
    msg.setDestination(40773U);
    msg.setDestinationEntity(149U);
    msg.timeline.assign("CMLGWRMGTXKPFXHORDQBJHMWBJORCQFCCKQYRHCZIJSXIOILIHGNTOAAQPHHSMPSKPVAWIDSUQLWTAOIUNXBAXTRNZGLQXECDZNHZPAXFTVHTNFTLFLFEWVNARDMBKEWZEAPBOKQCROSZBYFGCLSSLBPFAYKMRAUVQDLENWEGCTVINUIJSUFGUMKDK");
    msg.predicate.assign("CHKFMBAAYLLVKIWOAOWSGWTWNQWPSJEURCJKYJAPITAOENBJNEDDTKMXZHNOAHBUAFCGKSNLPBIMQZLQGXLOUEBZCRMHOZHPYJFTAZJBCDQOPULRHVLKHUIDERDRQGTEYFSFYUJKSSBLXPEUNMUKGRQKCBNVSZGXHEDVZMZSIWIRLVSMWQEJFURCCDGJFXMMPTHI");
    msg.attributes.assign("CQCBTTBAWPUAFHWTQQSBGEICRHCFQZMLKOCDZEYSQIIKXYBYDAFEECNBOMDPDWMZAMHCAOARYMNVCLYZTZTIYUVRKCTIXMNKNDUBMHGFYNUMJWGJKQZVLOSKVWEAILVULIAHUKNSJQDXNVZMJNZDGHRPSDBROPVPJIURQWFFWCEGETZJTYUPNWSXDEGJLXPGPBIDZXSXERAHOAVWLXLJHBXKRQGTFTGKFNFULJOQYHFPVMSELSPUJSWXB");

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
    msg.setTimeStamp(0.8194379145764186);
    msg.setSource(51430U);
    msg.setSourceEntity(146U);
    msg.setDestination(32411U);
    msg.setDestinationEntity(177U);
    msg.command = 223U;
    msg.goal_id.assign("ASKDSKWJXOLVGTCHVETYQLYKXJGITWSLYDHJDJWHLWVREJIMBQWEPAZSRANTZMWAFVUVXUSUEMEVWMORBMSONZCNDIXBOTFLHPYHUYDHZQXIUKTRARDAGPOBQRIKGRNBZMXPRHVUSZKJLMAMZLNVEGSCQXDPBFEBDKHEOPWOMJEGLFLZLICINIUYXCZQIXWYPPCGNOPBCTVFQKHDZTQAJGYWRGOCRYMSKIYF");
    msg.goal_xml.assign("PSSICHSALTYUXCKRVAGODULYNTAJFGPOROXYXRXNHHICMEASFGZNCTHTXZODVKOXIPXGUJBYDJHHKPBANFMHAFBBLVNWOCOBJCYLUIHDSJMNZBMRZQWAQORNQEBSTEPHJUGGDVJZVCHEEWRTQPZIWWF");

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
    msg.setTimeStamp(0.3380862794461702);
    msg.setSource(17373U);
    msg.setSourceEntity(126U);
    msg.setDestination(33812U);
    msg.setDestinationEntity(49U);
    msg.command = 174U;
    msg.goal_id.assign("NKJPXOWLFLZSICBDLQHZBBMTJGZXIQVJOSGUTSOCVHFXFGQGFFOQHQSGUEUGDPVMONXRVZFPQVPTIE");
    msg.goal_xml.assign("SJADBDCNGEAVAKKDXVKUZTHYJYZYJRBGLPBHGITVCBXZEAMSOFHCPLAFEEBXBPOIHZWPULIOJYIJWCROAYRKFEIVSFTLRDPMCUKALJQJLTOXZMQKCVPEWCXOVFMQNRDDWUTEOYUULGTRRUAMDFRHTNMQNZZWIFIVGXNSCFOQWGGWLXJVQNACQRDIBYJTBYWPJSSUTVIHBXEZYGKHMQWVRMDNKNCOTNPZESUXLQGFIUG");

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
    msg.setTimeStamp(0.34706878025015153);
    msg.setSource(22870U);
    msg.setSourceEntity(108U);
    msg.setDestination(58850U);
    msg.setDestinationEntity(63U);
    msg.command = 33U;
    msg.goal_id.assign("UVOAMPWSHXOBMTKIRURBWLIYUEILDCRGGTBLYDVLXRUCRZKTZFHEHKRZXAIFFXAHJUIBYUVNEMTWWZOQZGGDBTLSDYSSNPVUSJBTDSOQKHLLANGYPVMCPKAGSUAFQAW");
    msg.goal_xml.assign("VCNZUMTPRUXKBABHEORZMJBSZMMOTUSFVOMYYGHCRQHGNEXFCTGAGSCWJHQKMKZDCRIWVIVQWXILGNYVPNCFKCAEJDEOTVBQAFFBJXVSLHNLPGMDTHBEFTHTEOIRQDNTXXPZSOCYXBMKFULPWYLDXHWKXLONSAJDKNZWTRBQJIZJVAQJWZWPFCLKRLVPZFDSD");

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
    msg.setTimeStamp(0.7292554678976522);
    msg.setSource(58955U);
    msg.setSourceEntity(139U);
    msg.setDestination(17825U);
    msg.setDestinationEntity(151U);
    msg.op = 20U;
    msg.goal_id.assign("EZRLQLOINZOVHYFRUAIFFLBRZWEZBGBIDXXXHNMNZOOSJCVNMMQSZVBUHEKAICMVAABEGWSNJGJTPJPTEFBBSUYNVDHFQHTGWIINWDYTKCCKQUKGOWTUVDBDXDPVKLRGZTLRPLQWQUUJCBTEZAPLZVCVPMYPKLXXROWGSREJDEFDCIMIFKFDYLWPGFSWYGJQOHOBTPHYLKWUPNJHKCCJAATKNFDQQZIUX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VMLJYJXZTQQTROYDPNHGNAWFIGJCBAXGWFOUURFLLIZODYCKUSCZOGEXDFQULPNHJEYVCVCVEDGHROMDDWSJXOENOIFXBBTTQXTBZCAKVMFHQMWGTJUUTBBQNIWVJRJDNQE");
    tmp_msg_0.predicate.assign("ZWCFSIRAYVNEDTOTLTLKZARYEQZVEQGBPDDZMZFLBPEJUUTYOIWKWIPQGTFDKCSXVXBSMFHKKIGZFXMPIXSKBAMIJSLMMALCJEYYJOVTNGZRKVHMUWRJYGUUXBGCWUJHROQPWRNUNAQBVAVLNSIBTFLBVBCYA");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IMLQHWUOGJFXFMVLRTWN");
    tmp_tmp_msg_0_0.attr_type = 246U;
    tmp_tmp_msg_0_0.min.assign("PTHVGQOZQNHJJQNXEACMZUPLVHLAYMTNRDZTBNRZDKOFYNCZHWDATBFTGOPXVBHACGCOXQQFEYQJGEMOJOSMSWWZKYNUBJALSFWVSIVEBOICDYUXBMNXCWCWVOANCLIHLLRWJDPJUZKYTRSLJBPMPQXLUVREZKRCFWREKKSICIPZJOHKDGIVRQPMRXFX");
    tmp_tmp_msg_0_0.max.assign("EUTDURCYQGMTGHRLGGLYICAIIMHXQWGDHVKIAZOXRWGVEGYFCAPOSHKJJTDHYGXDSENTWXQMCLHRGSEZYJZQALKZBSQUEFI");
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
    msg.setTimeStamp(0.5056796527392639);
    msg.setSource(15655U);
    msg.setSourceEntity(196U);
    msg.setDestination(48483U);
    msg.setDestinationEntity(64U);
    msg.op = 56U;
    msg.goal_id.assign("CAFJYHELRNLSQBIQCQFXQINXJPUBALWDHPIEFDIJQVAXLWARWKJDOXZQUKMIORZNWSVEFWLMSGWXOECMSIHOFMEMJKRCTZHAPQGUPJMBPEMGLDBYCFOVRUFBIMXCSLDZSYYDTMZVVFZNEPAUZBUYVLYQTNGKBNXETFSURTHKGNTDUWVUHOZZRJFXAZAWHGDVYRPOAUCRBXGSWYHCKNGDLXATCPCJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OFWZUPACMVMFQZUXVBUJAIWKSCOPXTIRTORFVQTYQQHZPDYGOJZRMHAGUCJKGTBEKZXSYQJYX");
    tmp_msg_0.predicate.assign("HAVEEJVZSNWKJZGJAAYVLDIKBCOAMYTUGJDSOKHNGPBYYUOLWWYZGHIKIBFZCAMSXMFBPBVUIXLPTDICSYEVVTHDPFJEYULOTDGCLWDREMRJMLXOKTYSRFMGHNYBCMPHFCQNPHZADXAUXJQKBUDHMLHQCPCNTTEUKCRHQANWXQRPQRRJENKVTPLRGKWUOZOPSWXJOFQJUTENLXZMVRZYILSRIWNIMKWDEFVSXZQBFUEZQWASOXAG");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QDTKNSMYWAFMXOSFQOUWQBGNDWOTJDMGITJPGCCSZXCBEXSERJDDUKGQCCOPGJPELIBLXKAAHCEGBNTUNOMUMFRW");
    tmp_tmp_msg_0_0.attr_type = 160U;
    tmp_tmp_msg_0_0.min.assign("HSBMBAAFDEXXWOLGZRGYCPPFHNUKMVQJJSFSZGISDTRQHVTFTMVYVSMWGEQOMJHLJOWADRCBOBKDUJIMNEWPONLEUIATVKQFUXMJJKXHCZUEVSKQIBYDXLDWJZWJZRKXCPLCZAOGUGVDLOIXRMDKLYVBGSTMUBTPNWIRCPWERGLZAELDGCHOGUXZCJYANUQAPOCLRKFOXUBYZNIFHTDPWTSNIZHCBSFHENHYWRNAPVYYAESTTVKY");
    tmp_tmp_msg_0_0.max.assign("SLJRYFQDZKPMYVIGICUEOFJSSABZSZDTAYAGMOPOQMPYIFLWXKRSPTPICMTXUWBRCDFDVGLJXAZQJMUWUZHWSDHARIXVABGTBYJBSCYWRHAEOHHFUVRPUDXQQOEGNODLKBPNGCLAQWMKKFQHCOX");
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
    msg.setTimeStamp(0.0072388167185046814);
    msg.setSource(33310U);
    msg.setSourceEntity(125U);
    msg.setDestination(2808U);
    msg.setDestinationEntity(201U);
    msg.op = 191U;
    msg.goal_id.assign("MDJHLQVFPZBSLGKNCCFZXCICVXGDBHYACTXROJRHULDWHDLWZZNPXAWBYUNWODWMZJNEBRLWGLUYJBOEPVXYCQXUQRUSDHISNJYFWTSKCPTHTTHUOQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WPNIUKGSEMXEEIGOSBBQLVKFRRYVUVDRJTGKZZCKZLLWPBONXSVNEWAXSHMDYEPJLXUHBLUYVMOGINDQBHHMAXDARYOHZMDZKPCWIOTPYDQCJDIFVCQTZMMTNIBINUGHEEIASCHUAVLNKTTQX");
    tmp_msg_0.predicate.assign("HLGXSKFBTWCZEYIUQRSDPDOGOEHZKPXHOSOMUPMMYYRQSHABYTFFNVATKGNAMCBKBMBOIFLTZLTCEYNPHGICBZOWHNYRVRYAXIATLDPXJKFZXNRZIOVLITVZMUGJEHEPWONUULCJVPNZBRDIKCAXQX");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("XYDMURXTPJNPOZZXWGOLLBWDRZFAGCNWJXEUMWYQBRLRC");
    tmp_tmp_msg_0_0.attr_type = 134U;
    tmp_tmp_msg_0_0.min.assign("ITFRXRRTRBDPDAYZMRHLFYQQHAODLWKLCCZAGSVQGJJMWKCGGXIJQMEYFGYZAOIFSCJ");
    tmp_tmp_msg_0_0.max.assign("NNKNQAMVQFHAPTSPIQRDXYAJGEXFMUGKKCNEIEVFPYMQBCLBBXJZUNIJDYGYFJVTLSUAVXIISXIWTIWCKARYMEDOPMLYHOYSEEACTWHADWERHTKBSZBOVEVXKGBLHCFFDHJINNIAXSDKGJCMZWVWWRNUUCFFMKRTMJSJRDKHLNLXOBYGHQUWZPRFHLZOPBUXQQPLAFCGOONIMUVSTMOKBOCTRZHJ");
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
    msg.setTimeStamp(0.9003685291801734);
    msg.setSource(53127U);
    msg.setSourceEntity(48U);
    msg.setDestination(39037U);
    msg.setDestinationEntity(59U);
    msg.name.assign("WPLIWIJLXJGFJXEZBYMENFSNKEUVGLATFNBCYQCUIUXQCZCSABOS");
    msg.attr_type = 37U;
    msg.min.assign("WECLQBFEEQAYVXRCQJSEWVNJCTRZBROLPBNNNXATZBRQRAILHGSXOPGUFCEPFLLIMMUYUMPHKAONBYOQSXVZZYWQPJWGZUSGLUHBGFGXOLKPDADGVEMJAGKDIOPLIZVFNCYPFYSUZFKHOLKRCTRQSDXBZJBSWDISXBCXYEHHRMFTJTXJPDMCJYISUHKRBVKKKDVNCDPTWINMEIIMGSNHAUWWMTDLDZMAQFVKHWWETY");
    msg.max.assign("ERVMHTLZUUKGADNCRPIRLKGUCOMAWCHYNBMBYJQJGQIHYBLFIDXDVVZZHGVCQOOAHQRKZPMNUDWRDUABKLMSTEIASTZTUMCITUYBVFSDHTLOTWNYBFIPWCDKCGHLNKVZAGSQAYPWNFBJQKORJOPMEOGJKSVFIVTQJHAWRLEZCEGDWXDSZMBAESKNQNMXFSFUPCPUTLWYFGZMEEJSRFVYWEWVJLQQUHX");

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
    msg.setTimeStamp(0.5766253009197793);
    msg.setSource(23069U);
    msg.setSourceEntity(140U);
    msg.setDestination(57290U);
    msg.setDestinationEntity(171U);
    msg.name.assign("ESQQGUBUQWOFJTIHRJSDDTAMBCLMURUCWTOUNGZXURLXAXZIIVPOBJVKEOQWXGVKRWPPLBERHQFIFUSFJHCZLOPODECVEQXRQFWHMWKJHKDNEDCVCSPMMMTXSASXGLAWVJJOWCGAYHKEITBYESSIHITSWHBIMJHBGZPZGNYWECKRAUZLYLRXQZBYNXYZBDA");
    msg.attr_type = 26U;
    msg.min.assign("WBCLNLLAGUHEJJBOA");
    msg.max.assign("TXYUNUEBGCCFBXDXROGIMCACTIWJRKSYQNKECKFWGSBCQMOQGEVYOVVOYIRLBBZKZADSIGRNZDUHVPJISFUEWHVCHSRTSFXPLRDSGKWAQAQDBHNLYMOVNMWYQQSXMPSTVTZDJFFIHNPEYPKNYUEIGIQGHHLZUPWG");

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
    msg.setTimeStamp(0.5704326834181581);
    msg.setSource(27770U);
    msg.setSourceEntity(96U);
    msg.setDestination(31911U);
    msg.setDestinationEntity(225U);
    msg.name.assign("HPMWJHNAVVLLIXFOZCDHSPVCDQSNDKJKAPZLFYTCLGLNQGMAKRLEDWMDYFARVWGBMUJJZINUTDFOHEOHGIRRHFUZHQNRDHWICITCZVXRKWIDXGSHSHSBPLGUXAKGQWRAVMBJXP");
    msg.attr_type = 248U;
    msg.min.assign("TCLTZAIFICEAZULSETUYBMYFCBYFDONSGPSCAFNCZKDTJYDSJBHGJHRURGOFEJQKMPZTOOEUCJOAJXQQOVXLRFOQUYRKVLVHDEDGZXPLEKNIPPWGWXXONCDENWPHYJHTITROGAHXEWKIZSUVKQUVKWNBCARVGVXGWTBMHAIHOLKMGHLXIUQNQSIMXWSKEBTJYRDTLJPYNL");
    msg.max.assign("ZWZAEGILMAMFSHZHHAOMALSZDS");

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
    msg.setTimeStamp(0.9352423600661107);
    msg.setSource(48463U);
    msg.setSourceEntity(147U);
    msg.setDestination(31950U);
    msg.setDestinationEntity(195U);
    msg.timeline.assign("RWUPFMMBJOZKXTHERNLWGWPX");
    msg.predicate.assign("DSWDFAEJMADJSXAKCIFOACEMRQQPOVPHNNPYXSQFKRWIEIRZUGVVXWMDUOHZTGNBVXKLWNNOZAHISHQQKAUCJLJBLGKDNEZXOQEZBTVCGBKPVSDPFARPTWMJPSHLOQBVRABVXXRTFUYENHTRUFBLTXCJWUQGLZCFLHPUJDGXICTTIYNHYMIXPACPYLZSFWTZBIIADUJSGSEQVSBNL");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("OHBIHHRXURVMOIJCUTEIRIKJDCGCXISHEFXHOMJCQJXRJRPTFKWSWRTBJGKLBSMLFLPXEIPQJAHPLXQOPNYTXQVVGQRXSWGZZKORYD");
    tmp_msg_0.attr_type = 37U;
    tmp_msg_0.min.assign("SJFESIFNVZNFRKHYLQOKXGZCUSHMXLECWEZAMGJPRQHSOCHDWPAOTVWVJJBAPVPUMMHXUQRSFUQWNGQONWPINIDZMOGEEYYJFEINWIIVZXHAUHYBMLTYSRTIZADSPCSMBBQDTWG");
    tmp_msg_0.max.assign("QPTMEMGXWHYWWCQIVTSVWLUYKLCGCKHPJOPDKDTUWQPAVSIFCGGTSYETOIEACKUCLOREWYMEFPINOMTBZBAKDJLFJWUVXHFOXUQSPARFXIBUOVBEMILHEJNVZDIMQRFMNFRVCRKAYBZBSZYLXNDRXJMAWHKXJWOTUYKNLNBHZEJQRLFFBPKGNZSNAAUDDNKDNTVYHSSWZGCMJIXZBATPFIJA");
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
    msg.setTimeStamp(0.008331590560820779);
    msg.setSource(39102U);
    msg.setSourceEntity(121U);
    msg.setDestination(63652U);
    msg.setDestinationEntity(63U);
    msg.timeline.assign("BGJZEFNMFLPXDOXHEDEOYUFABBLRNNEBTTXFWRUCYJGTYWIPLOVLKFBQUBXDOYQVYWZDKKYXZVQGVIUQIFJALIKOGCMEWSFADNRHXRTEHISJDXNYPSBVLZOZOSPLPIAXXGDCZMTFMCGMRVJSCNKHTGTHUJKUVLUDDYQPCNSAVQKQSLBWMBIMHCQNAEEGIPKGADTZJSWWRWSKUINZCHWPOAHVOJQFYEGTW");
    msg.predicate.assign("EYZXZUSGYEXLUKORGHTQ");

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
    msg.setTimeStamp(0.7497038139952529);
    msg.setSource(16163U);
    msg.setSourceEntity(15U);
    msg.setDestination(15293U);
    msg.setDestinationEntity(119U);
    msg.timeline.assign("NKZWGWNFULZXCIYLVLTEZOXKDKNLACSIDFSGABGDUYYOPQERVWYDOBIDYARTAHNCEZTSBIUUBJEVRWEPOZ");
    msg.predicate.assign("DKFVRPGMRKBJHUDCSAZXHHIRDLCLOYEJQFOQUCXSPWYKZVUZGFEGUUIEMTIJMLNONMZTMUCLVKWEZPIRXSWZADDTTHOKEORVKIB");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("CXXKHKSGEZWWKJHRFXRYTLNBIEPRNNCLUBVKSVYPAJBNBFPGHSXLMNYVEXPOPNUQJIAUIQREPXAJFEVWVRQUSJQJDZCLVYVTCAWHQKTAGIGLETAWTNPLJMXAKDTYOQFWKCBYHCLGWDGJDYBSQEIFBZTFTGSLTAJWMOMQIUUVYDHXTHCSOPZOZUFLGU");
    tmp_msg_0.attr_type = 176U;
    tmp_msg_0.min.assign("DITJQMNVGLLFUOSJRTTUKVSKEPPPQMDBWNSOTBGFUFRRJRYSHCSEAGZWVCYNXWXUOQQRGEJTDU");
    tmp_msg_0.max.assign("HQMIPDPLFOAWLXMXUEIYBUVATEXMTECOJITDVBDRRSBKLGSGJPAQNHJIQMSZUVIHYNUKY");
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
    msg.setTimeStamp(0.5943153093428424);
    msg.setSource(42444U);
    msg.setSourceEntity(162U);
    msg.setDestination(14117U);
    msg.setDestinationEntity(245U);
    msg.reactor.assign("RCOJHKGVEVTGEGZPYQXMRRZYUPDBJBGLITSQSPRQUNIEWMIQXZJROIIVHGUQHAOHAXVXSVTLYOLVBNUBEMBJGYKATDRJRFSMNQBEDDCVAIDF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VEQLHSUOZRFKJBLODSNSXVSCFELSHZXCRBXUWNKYRBZWCMGOTHJVVDJTYEBPWRQSZRYKWPLVLQEQCATNMEDYAYROPQGYWOQHKMGTYKPODUVJJIELCKWMIZIFYUZOTRBLMKNNHUKADQPWUTUFJYWXOMUMGIZHELXXFRCXFVDSODKCPMBFMTAMFLXXLPGGGJVZAAFNRBBIDDCHZGEWIPGPZBHIKNNVTQCHATJQ");
    tmp_msg_0.predicate.assign("DILNTVYWEUGGUICCLUBXXOHHAJBFUHOIUWO");
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
    msg.setTimeStamp(0.17959417151471424);
    msg.setSource(48618U);
    msg.setSourceEntity(220U);
    msg.setDestination(21349U);
    msg.setDestinationEntity(233U);
    msg.reactor.assign("NZLXMTNKOISQOYVFGOHJGNKNW");

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
    msg.setTimeStamp(0.9456853302822431);
    msg.setSource(28473U);
    msg.setSourceEntity(85U);
    msg.setDestination(18564U);
    msg.setDestinationEntity(130U);
    msg.reactor.assign("RGEDAKLTDKAGKOWZKQRCFCMVMMPQERCUUVWIXSSXSXIHQHI");

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
    msg.setTimeStamp(0.9502978379014552);
    msg.setSource(24092U);
    msg.setSourceEntity(175U);
    msg.setDestination(60809U);
    msg.setDestinationEntity(19U);
    msg.topic.assign("AFSLEWAIBLSHYFOKJXFZYWEQKQYUQZFZJNQHPBSITOKIBNEDZBJWGOMEJVRFGNHSQYJXIZSAQAQBGOPHVQLDMYHABMIVSJNIKGZCQMDJPPWSNEEATOJVZIJNMGZWWRSXDURVRDLPKAETHUDGALOODLWMBHXNHXYCLPCQFXBJDTTVIOUZCYGXKTIXTYVLHDLRSGHPNGRDFMMC");
    msg.data.assign("OKGEBZYLCTIFJIFSPEDJQKEUVQWOFRRXKOEWJWIXUVCRTEZABDHOTHHWCPMQOSKJZTIHHDNFPTIYCJUCSLXXXMFPIKBMADQVLVIAXMLGAHBOYVESCOSBGZJAOMSTMYPNKYNWT");

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
    msg.setTimeStamp(0.8958600011337303);
    msg.setSource(7724U);
    msg.setSourceEntity(87U);
    msg.setDestination(57180U);
    msg.setDestinationEntity(196U);
    msg.topic.assign("ODQWHBJJXQFUQYAUPXUUVVHVIWRRNUIIMHYAPDFZIQCERKUDTTLVRZOMDFDSGRLRBJOGTFJCQOPUJTZLKKJNGOBNLVXGYWHZMZWLEHCZYEPWQGAEVDRJJSKTNHMCMVUWJZOGAEACSRYKJKBEGHFRTLIWIBNMXTXXPKTARPFPNHHLEEAYBSKNOXDWSAZYGCXTCNBMMPSSLIXNEL");
    msg.data.assign("CIPCTFQHUWLMLUKNVQOWTOVETBOJTDTKCVYJFWCNVPPWEEYMDOOVLRJTMXRHNIAHVAPTLWNBFQUCQIPKGSMZJTJRPYHTCLQASOKIQGAXIRJZZWQCJBZVIDEYPBFNSDYZKNIIZSMABUOIGUEHBSHMVSASYGSDAYNUADCGMPEWH");

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
    msg.setTimeStamp(0.7237317667122597);
    msg.setSource(4337U);
    msg.setSourceEntity(177U);
    msg.setDestination(48853U);
    msg.setDestinationEntity(56U);
    msg.topic.assign("FRGYJQTGGEMFXKZTBQLDPFJCDUDCHQXDUNGZGQHRXMLLIYJDNDBNIQKZBHPF");
    msg.data.assign("VNNQXHUUVQRAZIFZBDJPROGFPLQRHDHGNETPWJGSSGZLTDVOYODXQVWNLKBIHTBIWJCFZLYFQBRGGSHDVKZYXKSBMPPJTCYFTMAJMFVPWEUAMWAEILSCNKTSVPOSQFXUKKGSAAJZIIFOYEMPCNJVYHBHVKCUMWVUEUPCDOIFHXMQWTXRZGAKOBGALZOSCYXJERWWQCTAQJDLLJRCETOWKOCETHRNSKMUGLYXRINUFBBZM");

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
    msg.setTimeStamp(0.7521541801436815);
    msg.setSource(23129U);
    msg.setSourceEntity(249U);
    msg.setDestination(47780U);
    msg.setDestinationEntity(164U);
    msg.frameid = 82U;
    const char tmp_msg_0[] = {-60, 68, 65, 77, 73, -15, 74, 84, 9, 117, 50, 104, 116, 14, -43, 103, 123, -72, -96, -79, -11, -23, 24, -92, -19, 20, -33, -91, -126, -121, -27, 120, -33, -98, 96, 54, 91, -70, -35, 106, 13, -73, -89, -12, -3, 0, 73, 40, 93, -34, 71, -48, -19, -94, 90, -59, -30, -71, -93, 91, -101, -75, 117, 10, -97, -4, -85, 19, -10, -57, 25, -90, 19, -11, 36, -11, -21, 72, -23, -62, -22, 38, -113, -59, 35, 42, 34, 66, -25, -34, 100, -57, -23, 26, -73, 22, 83, 50, 123, 12, -108, 94, -105, -99, -36, -42, 33, 85, -74, -72, 14, -4, -43, -54, -120, 40, -4, -93, 71, 102, -22, -24, -37, -81, -104, -49, -47, -82, -76, -38, -70, 62, -122, 25, 26, 104, -82, 62, -88, -76, 50, -46, -35, -32, 8, -52, 100, 88, -18, 69, -105, 40, -15, 76, 9, -71, 49, -103, 74, 115, 38, 56, 104};
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
    msg.setTimeStamp(0.33613453972053686);
    msg.setSource(46830U);
    msg.setSourceEntity(221U);
    msg.setDestination(36365U);
    msg.setDestinationEntity(57U);
    msg.frameid = 15U;
    const char tmp_msg_0[] = {-64, 44, 50, 5, -80, 13, 68, -111, 23, 21, -93, 8, 109, 41, 70, 69, 89, 82, 36, 69, 87, 36, 76, 80, -25, -47, -123, -84, -106, -31, -69, -22, -72, -2, -6, -56, 22, 107, -120, 14, 101, -32, 45, -63, 57, 77, 81, 43, -108, -108, -83, 96, 43, -82, -4, -60, 117, 85, -77, 74, -92, 89, 35, 114, 122, 55, 63, 24, 108, 109, 73, -65, -7, -75, 22, 93, 42, 20, -112, -114, 28, 13, -29, 114, 88, -37, -105, -26, -8, 95, 112, 103, -84, -75, -56, -39, 29, 14, -46, -38, 109, 60, -9, -120, -39, 85, -23, 20, -90, -26, -47, -50, 6, 93, -20, 19, -84, 124, 87, 125, 68, -20, 126, -113, -51, 96, -59, -92, 1, -32, 47, 37, -103, -13, -92, -53, 112, -18, -115, -46, -98, -110, 16, -91, 52, -71, -126, 118, 28, 93, 9, -2, -37, -57, -122, 100, -88};
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
    msg.setTimeStamp(0.7744880902366722);
    msg.setSource(14060U);
    msg.setSourceEntity(58U);
    msg.setDestination(56907U);
    msg.setDestinationEntity(131U);
    msg.frameid = 217U;
    const char tmp_msg_0[] = {-81, -2, -96, 3, 7, 7, -43, -73, -33, 51, 97, 13, 95, 15, 119, 47, 12, -51, -67, -31, -44, -67, -103, 27, -15, -39, -63, 91, 80, 96, 89, -12, -55, 121, -110};
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
    msg.setTimeStamp(0.5629682803101034);
    msg.setSource(46013U);
    msg.setSourceEntity(217U);
    msg.setDestination(11734U);
    msg.setDestinationEntity(66U);
    msg.fps = 88U;
    msg.quality = 178U;
    msg.reps = 169U;
    msg.tsize = 32U;

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
    msg.setTimeStamp(0.35996545328745466);
    msg.setSource(44257U);
    msg.setSourceEntity(67U);
    msg.setDestination(3305U);
    msg.setDestinationEntity(179U);
    msg.fps = 66U;
    msg.quality = 158U;
    msg.reps = 68U;
    msg.tsize = 85U;

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
    msg.setTimeStamp(0.5425254524771986);
    msg.setSource(34195U);
    msg.setSourceEntity(183U);
    msg.setDestination(30183U);
    msg.setDestinationEntity(7U);
    msg.fps = 163U;
    msg.quality = 70U;
    msg.reps = 56U;
    msg.tsize = 44U;

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
    msg.setTimeStamp(0.8755053984971252);
    msg.setSource(34017U);
    msg.setSourceEntity(32U);
    msg.setDestination(35779U);
    msg.setDestinationEntity(217U);
    msg.lat = 0.15634962915234696;
    msg.lon = 0.5621589577953031;
    msg.depth = 221U;
    msg.speed = 0.13486164022440206;
    msg.psi = 0.5345666267596001;

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
    msg.setTimeStamp(0.8097920912569458);
    msg.setSource(46619U);
    msg.setSourceEntity(48U);
    msg.setDestination(40930U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.5645483938511064;
    msg.lon = 0.9864616660783764;
    msg.depth = 140U;
    msg.speed = 0.9908504221236362;
    msg.psi = 0.9210346319015974;

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
    msg.setTimeStamp(0.4817839373226168);
    msg.setSource(42175U);
    msg.setSourceEntity(10U);
    msg.setDestination(20378U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.2481049317187758;
    msg.lon = 0.3703050335414674;
    msg.depth = 172U;
    msg.speed = 0.3099939884726727;
    msg.psi = 0.6384670118068855;

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
    msg.setTimeStamp(0.2799302256831294);
    msg.setSource(13247U);
    msg.setSourceEntity(187U);
    msg.setDestination(55675U);
    msg.setDestinationEntity(68U);
    msg.label.assign("BPQDUOFDGDPYUUHUBWRZFSBKZVDLJKSZSKPQHMWBYHOQCOSTYXLADOXJJFLGYJEKRZLHOPQGMUTTFMHRRNYMHTNZJQSGEOJMLPALTKEVALAJFASPPBLWSFCMEXV");
    msg.lat = 0.7352914520443418;
    msg.lon = 0.6898440764012371;
    msg.z = 0.22724388795800843;
    msg.z_units = 196U;
    msg.cog = 0.41109289465243015;
    msg.sog = 0.7361041349287387;

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
    msg.setTimeStamp(0.844087953304258);
    msg.setSource(33918U);
    msg.setSourceEntity(5U);
    msg.setDestination(42624U);
    msg.setDestinationEntity(119U);
    msg.label.assign("VLSDUZWEVPPRWMIWMJEZLCDPKYWGTOLXOEVMXSATQKTOOLQCTBRNVHJGDAPZZOTGPCGBAWKLUBEUTCCXANOAWHVHFTLNNIQYBP");
    msg.lat = 0.4938916078557063;
    msg.lon = 0.09692428291549005;
    msg.z = 0.8150052522517828;
    msg.z_units = 127U;
    msg.cog = 0.11054429056299653;
    msg.sog = 0.8485969604348793;

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
    msg.setTimeStamp(0.6436278541601749);
    msg.setSource(10158U);
    msg.setSourceEntity(4U);
    msg.setDestination(35284U);
    msg.setDestinationEntity(88U);
    msg.label.assign("CMZWKBDWUKJDXFQPODPOCRJMZLSXRYHWKVEIGKGVSSAZABRCLBGLXQDIEXAUJHLRYUHUFYGFEIZRRTINQOCRDLNNKVUPODQOTBTXQQLEIVMBLPTGYKLNFVCPPAPNAGHFJRILCXZHXSTZTPDCABOPMWEHDNSUEMOFHBXDGKFWKEWLFBESRZESYHAGVWMSZKGUVNTCIFIHCUJYJIJZBRYAQTMWVVJDHSOYPYMNOYOCNQTFK");
    msg.lat = 0.10642000885306435;
    msg.lon = 0.9177073791956961;
    msg.z = 0.4007482396071411;
    msg.z_units = 45U;
    msg.cog = 0.8109496231983874;
    msg.sog = 0.032066224368236584;

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
    msg.setTimeStamp(0.6863864027065476);
    msg.setSource(41904U);
    msg.setSourceEntity(139U);
    msg.setDestination(3784U);
    msg.setDestinationEntity(159U);
    msg.name.assign("VOROHSIBLWHTAQGGXRCVGDHOSXUAIWVCJEEXSRDIJUERTLLBMKTDCPFTYOIERLISCVGNMBWAHWCKYAWXAFAVKAINRMDHRPJXTTFUQDYUPJPGYDZJBBXWNXEENUT");
    msg.value.assign("VHWZGIPLJME");

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
    msg.setTimeStamp(0.033397185764950654);
    msg.setSource(41766U);
    msg.setSourceEntity(104U);
    msg.setDestination(65175U);
    msg.setDestinationEntity(201U);
    msg.name.assign("SKAIGTJWLUUPSDLCOBBFIGVPROJAQCVHRJEHYYKGAKTWYCVZOPNLKKRDHXWJZDWTAIMTVIETZYVZRCISGCCQMQSFFDTMNPGRMBXMCYXOCIZIABDQTAMNXVBFTWHEALYHBNOXPGMILDXOHDUNOVLRWJSJNIDYPRERNGSQZDLMQLP");
    msg.value.assign("NILAWUOSVDPKCHTFNTDYILFMJIWEDAMK");

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
    msg.setTimeStamp(0.030024278454479414);
    msg.setSource(55135U);
    msg.setSourceEntity(232U);
    msg.setDestination(21075U);
    msg.setDestinationEntity(9U);
    msg.name.assign("WLJUVQZKRRLDLEBQMEINSNIBKPPHOXGSTWUGCHNBDWJFPIZXMRJEHHAVTWBXOJUFCZULYBZAGKQDLYJKHCZEKTOOHHECADWMFFBOIJDNWYRJXLWHPADSKZFFMODJEXMSZOXRNNKNYZTA");
    msg.value.assign("KILJGSZSHBWUVAMRPJFQHMJJYBGHFVYDTARVWPCXGTIQOVNXRCJTNJRMPVTSGTROIEDSVFBLIEUCFASQPIWGNYXHCQMXAUMLQDY");

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
    msg.setTimeStamp(0.049805220513004955);
    msg.setSource(41661U);
    msg.setSourceEntity(70U);
    msg.setDestination(1842U);
    msg.setDestinationEntity(199U);
    msg.name.assign("UNRNHHFERNNXKIBBCGKGPQBKNHQMIJTBFCLCSAPHHJNAWVFDBIZSYEHISVTQOOXXRLQTNHIZLZUTMUFXOGWUITOYCCTENQUMJYCAFYQNFCKABBWDPALT");

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
    msg.setTimeStamp(0.6906727522649824);
    msg.setSource(3870U);
    msg.setSourceEntity(37U);
    msg.setDestination(28153U);
    msg.setDestinationEntity(99U);
    msg.name.assign("MRZAJBDYRCGXYLDXFDRMWFDYNMEFGBCYWBCTQBUOHSOUTPRQVRK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LZYZCFDWTYMTREJVLGUBWIVIDCSO");
    tmp_msg_0.value.assign("QAHIPQXYGJNBHEGLXCNPUWMLEFYVJQJMDBUHHIMFSGXSQZSSDTWCTLAUTPZBNZWSCCEJDYJGPWUBJKYPWONXBIXAANXBNWQXAIQRLT");
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
    msg.setTimeStamp(0.09979149756475403);
    msg.setSource(5676U);
    msg.setSourceEntity(74U);
    msg.setDestination(28575U);
    msg.setDestinationEntity(179U);
    msg.name.assign("CAUMRQIHFMTISSOHTDEUVNJBMKFDICPJGXZLBTBNUWDEWMZZQCJVQTQHELMKVJOLWRTGEOBAFZPBBSJRFYWQVGMYQENYHUPTACXNORBEDWYUMBIDAXOHPI");

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
    msg.setTimeStamp(0.30092618108469316);
    msg.setSource(19667U);
    msg.setSourceEntity(186U);
    msg.setDestination(58331U);
    msg.setDestinationEntity(43U);
    msg.name.assign("OAOGLZUPHWPXJRJGMPRESWNIQLGOBE");
    msg.visibility.assign("JYOSWRSORPSAMLADKYVIBCVZCUBEPUFIXKTZUVKPWHQNCVXIIJUGNCWYPBLJZQXDAQQVGXYJITGPMSAHDFLNUSFMHABRHUEUUGJQSIRDNZKWCJRNWXENOCUCAICFZFQKIGPANHJOAQMHLYOJHBBKQDIVKPYEOLS");
    msg.scope.assign("ARGDWKSLHPONAJROFGDQYGYBDUTYRZFJVLFRAKBEJJGYUTFHSTVHSJUHSQDIDBZIXMEBZLYAQAZIYECAJKNABBUUVPFGPULPQRNSFLQCBGJXTTMCHCGXSEKWFMOTVPAQQBWTAGDZNKIXUVTOZSYCRJ");

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
    msg.setTimeStamp(0.3063409653797413);
    msg.setSource(61409U);
    msg.setSourceEntity(174U);
    msg.setDestination(64625U);
    msg.setDestinationEntity(186U);
    msg.name.assign("ZAGFXFKASKQSCROELZZSGNVTWSPVRJJVPCJAAFUQYTXZLYUODPQTOLANXBKAXUCCALWPUUZVNLWZVFEQMSSRWTXNZCPYHGPNQMQQGXJKEOCILRKGGEOMWDTAWITIZMWHHGNJHFYIJBKVYFUNWWBARCSVOHPKKSIZYIDULEMENXFGQIDMVZRVUQBMRMXKLHBLHCTEUWNDPMLHHYTYDNUYBCGDPSSBVFIIBFRJOEDTRTFGEIAJXMQHJJODCOKYBX");
    msg.visibility.assign("LGFTFQAZHXRIHPKSEFDGGORXTHZUIODWEFQNUKFEOAVXTBWSKGDDPRQYRJWWYDIILKJMWNBNSPDVA");
    msg.scope.assign("VUHJWCLKVWGKOQUTYDZKXFGIQVXJSREKVJVLFPYRGDTOUWCHXVEWOOCSOYBXHVLKKATSZBEHREXAIFSOZKPYMCTUUJIAHLBAILNOPNHUEBSNUIPXBMQDKTBZXLUPMNRPAXMSGEYXJSW");

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
    msg.setTimeStamp(0.71039319487546);
    msg.setSource(50304U);
    msg.setSourceEntity(212U);
    msg.setDestination(12791U);
    msg.setDestinationEntity(157U);
    msg.name.assign("MWSNIPYSHEWUECEXQROVVMYAHTOEJYVVJHJKHQINACYFIUAPDPJETDSSBBZCPAAOCGJSWDEBXRXXFGHIRMUMFIGGQIEGWUOFVFFULYRCTOIDVGCDGIPSDLRU");
    msg.visibility.assign("RQXQDJFNXAXEQVZOTSAFUNHODTVPBKCCHMWZHDMXKAQYFSRPYBYGZGOYHXKELJKZEHEOWPPFIDCSITQBIFTZJLWJMPX");
    msg.scope.assign("LLQXFGWNOJFFAQWISFZPGMCQETMEGOOFIRNKJFBOPKDTKUJFJAKKISECHSWMLDXOZ");

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
    msg.setTimeStamp(0.759897962922195);
    msg.setSource(26721U);
    msg.setSourceEntity(146U);
    msg.setDestination(480U);
    msg.setDestinationEntity(29U);
    msg.name.assign("FYYWFHJBQZSAFOTNDVYWPUECMGPJHZVMSWADEALMCQNBLUNKNCANPIFXDQIEKNULZBGOIQCHZMNFJZISARUTPOSCCMYBBXODKHDOHGEEULFSMNOTAIXQGUASWPLXYVIPCXOFZWNVZDFGUQWBGTBDMVLSLQKFASVELQWDZWYLHCLIZYBUMEJSRBPTKXSYH");

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
    msg.setTimeStamp(0.041627265789271894);
    msg.setSource(22248U);
    msg.setSourceEntity(181U);
    msg.setDestination(19299U);
    msg.setDestinationEntity(2U);
    msg.name.assign("HWXEGOARNKMDCZMAGPOWKQMTPVXTVEPHLBJHWBSUFRBR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("KSZDYGURJHQMLBARXXDCEMDRJVIMK");
    tmp_msg_0.value.assign("UVXZRSEUXVPDJXXYJMUCGKACABTHOWDFLPFAYBDOFBFZRZVEUWPOGTIVPOOMBWQTWHDKACYNJLFCAHEESZZNKROSQKUWTZEULVRIMTASEICXSBQRIXHXFVIWSODGIHGPFPCQUEHLZNFMUYATLRJLIXQWYG");
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
    msg.setTimeStamp(0.4221266512510734);
    msg.setSource(32049U);
    msg.setSourceEntity(222U);
    msg.setDestination(808U);
    msg.setDestinationEntity(234U);
    msg.name.assign("HRKFTYVHAUOWGUAAAXOLGSPCRDBPRGIVRMGQEKEA");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QPVPYAHSHJMXAEUCLJOGQYRHTACDDXSAVEQEWVNQZ");
    tmp_msg_0.value.assign("KPRETCHWXEGSTRNYBITHVQNFDIEJUQIHAYHZIXSCJGJIVZRATBTUOGCSBNVSGTIJEYPQDKQUEWASDXUANM");
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
    msg.setTimeStamp(0.5597900881701459);
    msg.setSource(30242U);
    msg.setSourceEntity(48U);
    msg.setDestination(38750U);
    msg.setDestinationEntity(113U);
    msg.name.assign("DYXYVTAFSUPJZOQRASNZWEENYPROKLJHIBVKCVUSMUAGVSPRCEIOITRICJCJSFLXBCEGIPYAIGPKXRHUTESFAUDTMCSZCMAAKWFTNFMVQONYWIDNJXZOXDFYJHNXDLGHGFBQBRMKTWUYTMLHBBUQUAGZLBUZHEQKVHXFPRVCOLELTQNDKOYLPGBWDWAMQHLKYWVFDMEATXPJUOGXRWBNQPSBEISYRTNPICDEZOIZKVSQXGHJQRDJHO");

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
    msg.setTimeStamp(0.41799237156304836);
    msg.setSource(31935U);
    msg.setSourceEntity(36U);
    msg.setDestination(56116U);
    msg.setDestinationEntity(211U);
    msg.name.assign("HRONMMUWWSUUCEMCOOLUCYYRUPFTZBBHSJVQSGEDUHXZRMBJPGRGHTRFXBIXFMPOIEFAWZZZVAAQJLIBAZDHDQRUEHIYIHMWYXZAETCDWCKHBQPVLNGKKJJETTGFYDGTRLDCLFGSZBADBHFECWEDJGJQSACSPDNUZFYQEMAWNOYSL");

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
    msg.setTimeStamp(0.32420576108477706);
    msg.setSource(32451U);
    msg.setSourceEntity(247U);
    msg.setDestination(60371U);
    msg.setDestinationEntity(128U);
    msg.name.assign("IZWHJNQHEMRLMSNYECRUJAXFJKZFKZDHXJPDGXXMDELQZWIFICSPQOMPWLVFGHMXCVVRVUBMEONFFPFWZOBABLGSLAIQEAGAPTCQUWPBROHPSIWOXP");

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
    msg.setTimeStamp(0.6829482989496835);
    msg.setSource(11562U);
    msg.setSourceEntity(93U);
    msg.setDestination(26937U);
    msg.setDestinationEntity(228U);
    msg.timeout = 156092772U;

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
    msg.setTimeStamp(0.7402373869057244);
    msg.setSource(23202U);
    msg.setSourceEntity(195U);
    msg.setDestination(30642U);
    msg.setDestinationEntity(114U);
    msg.timeout = 375469051U;

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
    msg.setTimeStamp(0.15318812469720255);
    msg.setSource(12139U);
    msg.setSourceEntity(3U);
    msg.setDestination(48982U);
    msg.setDestinationEntity(185U);
    msg.timeout = 858064609U;

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
    msg.setTimeStamp(0.4838380256150133);
    msg.setSource(28402U);
    msg.setSourceEntity(115U);
    msg.setDestination(47428U);
    msg.setDestinationEntity(15U);
    msg.sessid = 1707338483U;

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
    msg.setTimeStamp(0.7197439541555983);
    msg.setSource(23381U);
    msg.setSourceEntity(207U);
    msg.setDestination(1926U);
    msg.setDestinationEntity(184U);
    msg.sessid = 2158924623U;

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
    msg.setTimeStamp(0.35207622341388933);
    msg.setSource(24633U);
    msg.setSourceEntity(208U);
    msg.setDestination(41553U);
    msg.setDestinationEntity(229U);
    msg.sessid = 2261789343U;

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
    msg.setTimeStamp(0.9214681135418523);
    msg.setSource(65298U);
    msg.setSourceEntity(204U);
    msg.setDestination(42148U);
    msg.setDestinationEntity(9U);
    msg.sessid = 3693074214U;
    msg.messages.assign("LVWBHCGOEDBWLVRJEGYEMUATTPOVCFNVWBHNXERROQJQHYTXBTOWPYIODIJAUFDKSJPGTYQUMZQLFQQZBYI");

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
    msg.setTimeStamp(0.7980112760274821);
    msg.setSource(3776U);
    msg.setSourceEntity(241U);
    msg.setDestination(27359U);
    msg.setDestinationEntity(91U);
    msg.sessid = 1249440373U;
    msg.messages.assign("PXUUXQYZTRNKFHMIOGFREZMFCWYKTYYJOERICTDRSPMYZTDWEAMAOXGNGDBIDLAABFCOSEKCRCUGQMVBLTILFNDXNUNCPQTOFBHKUHYTPODWUE");

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
    msg.setTimeStamp(0.4756224468936109);
    msg.setSource(30824U);
    msg.setSourceEntity(153U);
    msg.setDestination(11216U);
    msg.setDestinationEntity(16U);
    msg.sessid = 459641327U;
    msg.messages.assign("MXRTRELBWYLWMGIQFTAHOQTHNJSXOZIGAKJUOWUTOUJWPRNZOZU");

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
    msg.setTimeStamp(0.1829830934681157);
    msg.setSource(28822U);
    msg.setSourceEntity(89U);
    msg.setDestination(3253U);
    msg.setDestinationEntity(178U);
    msg.sessid = 507511805U;

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
    msg.setTimeStamp(0.35647442367251003);
    msg.setSource(44322U);
    msg.setSourceEntity(146U);
    msg.setDestination(34972U);
    msg.setDestinationEntity(102U);
    msg.sessid = 2047333845U;

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
    msg.setTimeStamp(0.1447113238571872);
    msg.setSource(40518U);
    msg.setSourceEntity(11U);
    msg.setDestination(307U);
    msg.setDestinationEntity(10U);
    msg.sessid = 2591481852U;

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
    msg.setTimeStamp(0.32832399214140084);
    msg.setSource(63903U);
    msg.setSourceEntity(197U);
    msg.setDestination(52737U);
    msg.setDestinationEntity(9U);
    msg.sessid = 2819719903U;
    msg.status = 181U;

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
    msg.setTimeStamp(0.6484669610654434);
    msg.setSource(22490U);
    msg.setSourceEntity(142U);
    msg.setDestination(49405U);
    msg.setDestinationEntity(194U);
    msg.sessid = 687409132U;
    msg.status = 171U;

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
    msg.setTimeStamp(0.845927078214946);
    msg.setSource(11035U);
    msg.setSourceEntity(210U);
    msg.setDestination(49496U);
    msg.setDestinationEntity(5U);
    msg.sessid = 945270158U;
    msg.status = 229U;

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
    msg.setTimeStamp(0.40559708092821845);
    msg.setSource(54901U);
    msg.setSourceEntity(168U);
    msg.setDestination(60933U);
    msg.setDestinationEntity(35U);
    msg.name.assign("VASELTWQAZHKHJSCCQMIJJGLWHFIEXMIJSNTFJYEANRBZNMJAVRUZXCMGKVTXXRHYXDDBKKVTYTATNDWOTNJUUZGOBVIDMWJBORPGWRGXQQSAKWQRBKEUTFSSMPDPXSQPKOGXFWEKLCMBEADIGLFYVGMGZKYFOBLYIRDB");

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
    msg.setTimeStamp(0.3106535017984068);
    msg.setSource(51802U);
    msg.setSourceEntity(74U);
    msg.setDestination(35982U);
    msg.setDestinationEntity(9U);
    msg.name.assign("VPBUBIOVPDDPGCRJXFNSFMCCUIYKGSXDFREFIHTHAMYCZJYOGGYCWKOHMTETAKKZWXNRFFJLWIAUQMXPKCOKVZGZULDWTTAWAFSXFUEPEXBCDBNNBMMBAUNYVOQNHQPNJJJVWBLBFICQTHRXKBSHSZJEWQLVQAVOLSVYWXJAGOQPYRNFYUPPQXZXRKRLYGMMRETLUHSET");

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
    msg.setTimeStamp(0.9879478075194364);
    msg.setSource(27451U);
    msg.setSourceEntity(8U);
    msg.setDestination(31765U);
    msg.setDestinationEntity(247U);
    msg.name.assign("ZTJETMXJKQACQXGSYISWJURKZIFUHNTSOSLAIUOXEOWPJDBFFGLP");

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
    msg.setTimeStamp(0.7068096930640847);
    msg.setSource(40146U);
    msg.setSourceEntity(129U);
    msg.setDestination(49003U);
    msg.setDestinationEntity(61U);
    msg.name.assign("IHEJPXAVQBKDTRYLMBZZPNAQUJDKDWPWBHGONSJQUSWJWNAKGHZFNQTLYVDJTFIPVUCMGLHSBGUWPMIZKSUJYSMXRVYHIDCITHYLCIFHQMUDANENFRGLKYOBJ");

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
    msg.setTimeStamp(0.9550934540552135);
    msg.setSource(8136U);
    msg.setSourceEntity(150U);
    msg.setDestination(38859U);
    msg.setDestinationEntity(15U);
    msg.name.assign("YJUTORHQDNJDJOIGWZIKRGZLLYSCLXVYPUQSGWFUCTIELWSSLWXMVVTCREDXAZKUVTBMNTPVNWCNQGCRKOFLHZX");

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
    msg.setTimeStamp(0.5587132996753291);
    msg.setSource(19072U);
    msg.setSourceEntity(217U);
    msg.setDestination(28441U);
    msg.setDestinationEntity(156U);
    msg.name.assign("NGPXFRGMBSWSBZMLAYJNADPSSYUHNBLZAIHUBEPREHILCEPTDAUDFBSSAWWITPNFLYICESPRPVPEJRLENFAHYGEMLKZVTIEGDJFGTHOTNUKCTGOZWOLBKVJZRVJMJANWWQBWXZLXQAKGXKKCQUYDUEKZKVCXSTJHEHJFDMGTOQRDFZXRYMUWDHUOBWWVBZGVMVCISQYIOVMRIANAQIOYYXKKYHCXQIDRLNTF");

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
    msg.setTimeStamp(0.29430185308695866);
    msg.setSource(42333U);
    msg.setSourceEntity(17U);
    msg.setDestination(11318U);
    msg.setDestinationEntity(251U);
    msg.type = 111U;
    msg.error.assign("TMVAGJUVJNEBWGJDPFXSNVLCCXXHFBODRAHCPVNIPNXCITFODMRWROPYTVMIIKQEHRZJOQUBAWIWMAJYVRNPYETEUTRE");

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
    msg.setTimeStamp(0.25238289521963475);
    msg.setSource(41110U);
    msg.setSourceEntity(103U);
    msg.setDestination(31531U);
    msg.setDestinationEntity(141U);
    msg.type = 74U;
    msg.error.assign("JDBTZXOBBEIURGJZRWLCWHMOOKEWBNUJAQRYBEGKFDUVYKNKHWDYNMUIFHRTLYVXTLQCPNDRCMNHMVJMLQNXZOCVPAFBSBYQZXSUKSPWMCLTIIDAVHKIVJMXAELQJJRTZZFIMOETGYKYWCNKUGEQCMXALDFSVASVAOWXCECTLPNZEPRWUDFOGEHKSGNYDZJAMOZPHUWCAUJJYFQSIRDPFKSXNFYDRIIOHGUQSOIGLXB");

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
    msg.setTimeStamp(0.4253327039711965);
    msg.setSource(14799U);
    msg.setSourceEntity(116U);
    msg.setDestination(54364U);
    msg.setDestinationEntity(159U);
    msg.type = 106U;
    msg.error.assign("IRQNGNOJBLDSUBRYRJLUZLMODUFAZSECOKNGNZJKDXGNRHGEPETKPHFOIMMILSPJHWZXKCXTZHMQHOZWPFBMOFFQETQMOYLBIPNUVCVAPOJLXXPOMXUFYRTYTALCRBACRIGQLAJVYDADHTCVMLCFAYDCZKVQVDEHGDSPKGXBK");

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
    msg.setTimeStamp(0.47882689295889014);
    msg.setSource(11356U);
    msg.setSourceEntity(51U);
    msg.setDestination(61772U);
    msg.setDestinationEntity(175U);
    msg.seq = 36969U;
    msg.sys_dst.assign("FJHMHJRYEFVZDRXMXFWHUKBDIO");
    msg.flags = 228U;
    const char tmp_msg_0[] = {58, 58, 6, -105, 18, -86, -61, -11, -14, 56, -115, -52, -38, -128, 39, -5, -101, 1, 101, 114, -78, 115, 62, -36, -126, 38, -84, -2, -91, -97, -84, 59, 109, -63, -78, 47, 96, -42, 80, 110, -19, 90, -79, -90, -26, 92, 17, 53, -18, 41, 64, 38, -54, 89, 44, 44, -120, 23, 35, 121, -70, 116, 57, 20, 99, -67, 63, 25, 102, 59, 70, -37, -102, -61, 65, 102, 29, 23, 60, -42, 97, 81, -46, -77, 121, 37, -90, -20, 104, -49, 69, -16, 17, -36, -54, -42, -41, -88, -72, -30, 33, 51, -60, 27, 63, -44, -50, -1, 126, 97, 94, 20, -102, 124, -29, 117, -52, 93, 60, -122, 64, 18, -86, -113, -105, 26};
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
    msg.setTimeStamp(0.382701379447712);
    msg.setSource(19702U);
    msg.setSourceEntity(83U);
    msg.setDestination(64823U);
    msg.setDestinationEntity(157U);
    msg.seq = 47330U;
    msg.sys_dst.assign("QKQTBGYPTQAAWEMDJ");
    msg.flags = 127U;
    const char tmp_msg_0[] = {8, -22, 17, -77, -1, -98, -104, 27, -34, 62, 93, 37, -61, 101, -1, -31, 40, -118, 24, 61, 64, 109, 45, -74, 0, 27, -60, 63, -15, -116, -11, 114, 59, -20, 58, 41, -53, -39, 50, -48, -124, -18, -57, -30, -24, -98, 28, 26, 96, -42, 52, 80, -99, 43, 123, 101, 113, -47, 99, 113, -111, -61, -6, 27, 57, -2, -120, -30, 82, -66, 54, 108, -80, 40, -15, 4, 1, -22, 93, 95, -29, -110, -30, 21, 5, -107, -114, -116, -45, -26, 100, -94, 109, -76, -43, 79, -59, -43, -118, 119, -79, 58, -99, -19, -36, -61, 91, -123, 62, -127, -96, -40, 67, -50, -73, -27, 13, 103, -116, 44, -71, -71, -14, -7, 104, 104, 52, 5, -65, -81, 91, -25, -39, 18, -38, 65, 88, -58, 55, -11, -70, 28, 120, -29, 57, -96, -107, -51, -78, 95, 30, 5};
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
    msg.setTimeStamp(0.7179017027847824);
    msg.setSource(13332U);
    msg.setSourceEntity(208U);
    msg.setDestination(19797U);
    msg.setDestinationEntity(15U);
    msg.seq = 60980U;
    msg.sys_dst.assign("RLCOKLJMXOCQSIFBPQJVEIPBGYFIASEEDKXKBNMYPMTJBMNAZEHHAPZDROWQTNAMBDRGKUCSXLOVZPHOVDKQELZIXKXYCFAUTWVWQUDFLKKBYAPQFZUPCEVVNFGYUYHVTYWKNQIMFWSGUYYCPZZLVTBJRUDANURBJRM");
    msg.flags = 67U;
    const char tmp_msg_0[] = {-41, 13, 53, 117, 78, 74, 80, -72, -13, 26, -42, -84, -33, 13, -101, 14, 83, -93, -55, -109, 10, 98, 78, -81, -52, 35, 9, -101, 29, -106, -33, -51, -15, 64, 119, -26, 120, 43, -85, -6, -48, 15, -14, 43, 18, 66, 2, 44, -2, -54, 41, 76, 67, 74, 99, -3, -78, -47, 29, -25, -13, 57, 88, 56, 69, 18, -81, -31, 21, -100, 114, 70, 61, -94, 49, -110, 102, -21, 116, -33, 28, 63, -66, -30, 68, -110, 47, -41, 114, -108, 66, -10, 106, -66, -126, 118, 79, 122, 22, 92, -105, -76, 113, 35, 91, 41, -77, 90, -112, -103, 21, 18, 60, -62, 95, 81, -58, 110, -83, 22, 0, 82, 26, -117};
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
    msg.setTimeStamp(0.3046696575573158);
    msg.setSource(4722U);
    msg.setSourceEntity(195U);
    msg.setDestination(21909U);
    msg.setDestinationEntity(97U);
    msg.sys_src.assign("ARZCRNOUFMSXBOQTVVCBTOGZPDGESA");
    msg.sys_dst.assign("NARTSFUHQBDVUWZWIOEUFQSRMYOSBBJXPELGGAWYTLDPYZUUYYPCFSVMAEXXVEXKQFBPIIAJLCZAWHKNEQANWDMWICHOXENWTNLVJSIRQZHMKWMQILVEJRURNFHDXKPXVQDBAUZYYPE");
    msg.flags = 93U;
    const char tmp_msg_0[] = {31, -117, 118, 118, 47, -100, 50, 96, 66, 65, -127, -74, -78, -113, 16, -85, 24, 70, -127, -40, -79, -16, 75, 108, 83, -93, 19, -114, -96, -103, -36, -112, -9, -114, -13, 14, 47, -37, -69, 30, 16, 7, 37, -72, -90, 4, 37, 45, 85, 101, 98, 0, 27, -109, 29, -69, -36, -91, -22, -121, 21, 108, -24, 104, 79, -67, -19, -62, -111, -94, -122, -22, 87, -23, 108, -121, 50, -113, 28, 83, -107, -23, 67, 89, -50, -40, 69, 47, 6, -18, 43, 96, -126, -82, 122, -2, 93};
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
    msg.setTimeStamp(0.7046620396399202);
    msg.setSource(37014U);
    msg.setSourceEntity(184U);
    msg.setDestination(39091U);
    msg.setDestinationEntity(145U);
    msg.sys_src.assign("AJZIFTHVGQZFDISLFLGSXGSMCXVARODRYNFECUSJGGIJSOSBLIJNRIWHXBHNZQEKMFXCKYZQDVJECHPWOIRSXUTFWERXHPFKCKBJLBAVWUPPNTMKIAUTTWMETYCEHYKEBSNWYTPXYQQDNOWDMPJJZDMNRBUONOZBLQUVGYPJZRHIDQYUUBBQKCPAVOAUMCLQGMPDAAEHERADSA");
    msg.sys_dst.assign("ASSMCNOOWDOGSDVIRCVAYSHPBKPHGRGMFANIXKFPPVLOTBBWRDRMYLSYJQBPLRZDLUFVGTEQUPIHIDURYCQQDUHVMZYAJYOKIJXRSXQAQFFNTGGOUZXIRLBHXNZMOYJDIWPSKXWEKZAWGBFVKUWNLIOJSETDDFVGNFCMP");
    msg.flags = 99U;
    const char tmp_msg_0[] = {-86, 22, -33, 81, -6, -89, 85, 44, 82, 60, -122, 58, -96, -119, -89, -52, 66, -87, 54, 116, 31, 26, 39, 15, -121, 111, -123, 82, 91, 126, -107, 62, 67, 85, -41, -46, 64, -41, 65, 116, -17, -79, -84, -71, 101, -106, -106, -78, 61, 6, -77, 17, -124, -58, 114, 70, 3, -94, 98, -77, -53, 10, -15, 53, 63, 3, -74, 50, -56, -19, 74, -111, 61, -59, 40, 19, 112, 9, -71, 29, -17, -113, -37, -115, -69, -70, -92, 105, 73, -103, 111, -58, 3, -70, 34, 100, 77, -102, -122, -10, 39, -74, 91, -93, 38, -109, 34, 80, -100, 77, 103, -97, 33, -34, -7, -58, -62, -111, 27};
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
    msg.setTimeStamp(0.9528427137273083);
    msg.setSource(2342U);
    msg.setSourceEntity(71U);
    msg.setDestination(50183U);
    msg.setDestinationEntity(186U);
    msg.sys_src.assign("OMFYTTQCIOKTNOETXDHEBAMZBWPIKNRVOYPKEEGKQFJVSGXZFXDXXANWYXMBLASSLBLTPPIAVRRYCCCDHUKEFPHIAXJDIXHPOUZIBTLVNGAEXTPWQTG");
    msg.sys_dst.assign("XPTEYUFUFAKGCNHYLOWYPYFTUKEQGHNFBZILEZHZTWCDUKCXFSWWFLMEDQARNAYYHBGGJRXKQDSEDVXJCCSWOKOTJLQKZTPHGEKMOSIRRYIIRDWACIFXBWMZBAUVQYLQZJHRXLBOAKLFRDGMHOWQUQCJLMVFMNUSVXWVEFDNJHVGIUPQNRPSBBDEGINJTYUNSSKPEVINWCEASQTLLVTXBUIGHOOZVVRIT");
    msg.flags = 79U;
    const char tmp_msg_0[] = {-71, 15, -106, -120, -61, -17, -92, 68, 60, 7, 37, 123, -46, 32, -116, -15, 74, 115, 71, -76, -57, 53, -56, -31, 62};
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
    msg.setTimeStamp(0.1458975462257308);
    msg.setSource(29088U);
    msg.setSourceEntity(116U);
    msg.setDestination(42544U);
    msg.setDestinationEntity(195U);
    msg.seq = 1198U;
    msg.value = 89U;
    msg.error.assign("WVEBGQVJRPCUQQOHYGQFDTBKZRIILDZWYLQLCRVBAAVUTTNDBFPWGRDNTGXTDJZPIEJDLJOAMEVEMJLMFQQASRBYUUFJTVZGIHBZIHIUCEPNWSAWEACXGFSDMSOLZFKLMQPWAFNVRIYTQONMZSRDCDYNTHPYRFNIAKGHFOAKWYPXVEWAHX");

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
    msg.setTimeStamp(0.3653980663026848);
    msg.setSource(3013U);
    msg.setSourceEntity(19U);
    msg.setDestination(32793U);
    msg.setDestinationEntity(52U);
    msg.seq = 32484U;
    msg.value = 151U;
    msg.error.assign("SLLWCDFYEIGWZXVXPXNUNOPTAZJFOPWZKLCHHNAJTYQMUTEGYMQSBJZULSYJPAQNGJURRYGOLTTZXDTSVCVMKLBSNCMVOJVQMSAFRCXKDGBVHXAPILHQOWYSQPLBDCTRCRFDJNJQHFJPUKINVUOHJXMASYRCDZIHABGKFMYAD");

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
    msg.setTimeStamp(0.5210966054281442);
    msg.setSource(48374U);
    msg.setSourceEntity(76U);
    msg.setDestination(52656U);
    msg.setDestinationEntity(186U);
    msg.seq = 38106U;
    msg.value = 84U;
    msg.error.assign("RNANEOUEKKNRKASOMALMNDNYIBCWMPRTOMVDBCPEEMODOPSWQXOWVZUNBIOYTWIYAAZMYEPLBRJDTOPCOZXMOKFRHGXUDYWZTQVYFTESLVDSICHZFWFIWRIJHUNNXKXYGZSWQGTVXQUPGXPJBJGLYAXLBJIFHSFBDHXEKPVZSQWVTCJCFJM");

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
    msg.setTimeStamp(0.015161094347408866);
    msg.setSource(9041U);
    msg.setSourceEntity(66U);
    msg.setDestination(27122U);
    msg.setDestinationEntity(75U);
    msg.seq = 5496U;
    msg.sys.assign("DFACERCGFLDAIERPTSBKZCKZYAXPJOTELNQZYIGGVZMHWVTJSXXKOCPZZNBTHZTCQUOPQPBODSXMZBFLMZYEEJXUIQYUSHQXYXVNFKQJERWLJHITCFVCKVWNTXEBWHPXSIKFUSWJNULCKJHCKBLWDGMPGNMFFGLIDLLDIQDVHPFOMEIUVABWSRRVYYYSIOQTRXTNBUAARNIRQWGGPUDMHWOGMSMNBOTE");
    msg.value = 0.44876393606679554;

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
    msg.setTimeStamp(0.9655022604215991);
    msg.setSource(9450U);
    msg.setSourceEntity(214U);
    msg.setDestination(31557U);
    msg.setDestinationEntity(25U);
    msg.seq = 3747U;
    msg.sys.assign("UBESYNUNMOBTFGEKWUCWXEFQYETVHDJDMSFCAIFIPSHMMGOEDPMKPCJRHSSASXIQHJKJSGVQVGQWVOKNKFMYLFZVRWRNBOMWRGYTK");
    msg.value = 0.08924950764291162;

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
    msg.setTimeStamp(0.3501091183964554);
    msg.setSource(59767U);
    msg.setSourceEntity(98U);
    msg.setDestination(11404U);
    msg.setDestinationEntity(38U);
    msg.seq = 36303U;
    msg.sys.assign("ALHSCDCRNVBZIQEYAFMLHLNYCAEENQNASTZYGMKIXJZFRWMFDSOMTRPRGSZKWBVDBOKPEIQMNONRXSRBGDCUJFMGVAFJBJNJKXOYFQSUJMTXPKYYVOJZNSZQDUBVHQGWOTNPQAVUPSIFWJXUQELAOMZXVHMYKESHXVIIUHHKWHLLZBDMRFPCLUTITXIWKCRGCPXVLTRTPBQUWPRFEBDLTNWETJGLDWQDDFEBUCWCCZUG");
    msg.value = 0.5596887099599006;

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
    msg.setTimeStamp(0.02106385402983635);
    msg.setSource(14950U);
    msg.setSourceEntity(196U);
    msg.setDestination(4465U);
    msg.setDestinationEntity(161U);
    msg.action = 252U;
    msg.longain = 0.892508358445204;
    msg.latgain = 0.7768969367455391;
    msg.bondthick = 3929436826U;
    msg.leadgain = 0.4323297268950902;
    msg.deconflgain = 0.008384923363713437;

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
    msg.setTimeStamp(0.3819876500140984);
    msg.setSource(45160U);
    msg.setSourceEntity(80U);
    msg.setDestination(9853U);
    msg.setDestinationEntity(161U);
    msg.action = 89U;
    msg.longain = 0.21376685237119641;
    msg.latgain = 0.10452988287472764;
    msg.bondthick = 2184319012U;
    msg.leadgain = 0.6032363213120674;
    msg.deconflgain = 0.26079211121654433;

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
    msg.setTimeStamp(0.40364189625200864);
    msg.setSource(33175U);
    msg.setSourceEntity(1U);
    msg.setDestination(46258U);
    msg.setDestinationEntity(172U);
    msg.action = 148U;
    msg.longain = 0.35560175697419427;
    msg.latgain = 0.28047064002379796;
    msg.bondthick = 844715525U;
    msg.leadgain = 0.24142142596327987;
    msg.deconflgain = 0.0865163335423419;

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
    msg.setTimeStamp(0.08239258176020126);
    msg.setSource(28978U);
    msg.setSourceEntity(118U);
    msg.setDestination(15287U);
    msg.setDestinationEntity(180U);
    msg.err_mean = 0.10914885711807498;
    msg.dist_min_abs = 0.9652361954469424;
    msg.dist_min_mean = 0.6292265906434288;

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
    msg.setTimeStamp(0.489118106460662);
    msg.setSource(24944U);
    msg.setSourceEntity(148U);
    msg.setDestination(6249U);
    msg.setDestinationEntity(93U);
    msg.err_mean = 0.975544962519207;
    msg.dist_min_abs = 0.8430879009450147;
    msg.dist_min_mean = 0.25345493934637664;

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
    msg.setTimeStamp(0.9857130396773887);
    msg.setSource(5191U);
    msg.setSourceEntity(111U);
    msg.setDestination(9912U);
    msg.setDestinationEntity(137U);
    msg.err_mean = 0.25485417340051353;
    msg.dist_min_abs = 0.7096302095504625;
    msg.dist_min_mean = 0.548957504203799;

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
    msg.setTimeStamp(0.8233403145947633);
    msg.setSource(25967U);
    msg.setSourceEntity(37U);
    msg.setDestination(12667U);
    msg.setDestinationEntity(42U);
    msg.uid = 110U;
    msg.frag_number = 44U;
    msg.num_frags = 254U;
    const char tmp_msg_0[] = {0, 33, -70, 11, 19, -10, -17, 0, 98, -40, -83, -29, -40, -7, -14, 121, -56, -108, -96, -80, -90, 83, 101, -39, 17, -55, -52, 2, -79, -78, 56, 7, 77, -94, -82, 72, 55, -11, -112, -42, 58, 125, -71, -89, 90, 103, 48, -81, -77, -52, -101, -32, 107, 110, -51, 121, 49, 22, 41, 8, -111, -7, -124, -10, 10, -36, 45, -19, 15, -22, -23, 87, -98, 80, -69, 124, 121, -61, -24, 52, 113, -78, -36, -121, 51, -83, -101, 75, 65, -32, -124, -124, -10, 78, -68, 46, 86, 3, 94, -47, -101, 50, 46, -99, -53, 4, -1, 39, 73, -68, -9, -3, 44, 68, 26, 45, 70, 125, -107, 47, 0, 45, -4, -101, -84, -29, -94, -31, -92, 43, -73, 0, 47, -2, -25, 3, 54, 124, -75, -126, -44, 102, 109, 54, -115, -98, 93, -54, -53, -98, -38, -8, 92, -36, -43, 80, -78, -35, 52, 65, 54, 78, 54, -43, -24, -105, -30, 64, -52, 112, -94, -99, -79, 123, 72, -26, -10, -26, 125, 101, -117, -89, 125, -56, -83, 69, -42, -61, -26, 115, 8, 99, 117, 54, 109, 118, -70, -71, 66, 41, 53, -27, 53, -11, 27, 57, -38};
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
    msg.setTimeStamp(0.5285135099967967);
    msg.setSource(61986U);
    msg.setSourceEntity(234U);
    msg.setDestination(26835U);
    msg.setDestinationEntity(172U);
    msg.uid = 98U;
    msg.frag_number = 207U;
    msg.num_frags = 37U;
    const char tmp_msg_0[] = {39, 0, 57, -42, 38, 59, 25, -6, -52, 3, 44, -31, 31, 24, 4, 22, -32, 48, 58, -80, -91, -56, -16, -13, 45, -67, 64, -7, 51, 104, -39, 104, 17, -22, 53, 66, 56, 126, -65, 1, -127, 57, -3, 76, 109, -11, 110, -87, 11, 113, 32, -2, 3, 72, 76, -100, 40, 88, 53, -76, -23, 17, -31, 18, 109, -44, 54, 11, -37, 7, -61, 58, -124, 18, -12, -47, -88, -26, -59, 43, 56, 3, -5, 46, -58, 8};
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
    msg.setTimeStamp(0.018788970262217375);
    msg.setSource(32991U);
    msg.setSourceEntity(44U);
    msg.setDestination(48292U);
    msg.setDestinationEntity(204U);
    msg.uid = 120U;
    msg.frag_number = 133U;
    msg.num_frags = 50U;
    const char tmp_msg_0[] = {53, -75, -107, 63, -73, 8, 56, 18, 28, 92, -79, -111, -81, -17, -59, -5, -64, 80, 36, -47, -66, -124, -40, -19, -81, 84, 30, -5, 46, -36, -54, 111, -25, 46, 60, 96, 6, -32, 61, 31, -121, 73, 41, -9, -106, -62, 94, 26, -64, 18, -109, 117, -90, -117, 52, -116, -12, 23, -48, 116, -126, -10, 110, -44, -27, -90, 19, -128, -75, -116, -48, 35, -120, -44, 83, 106, -1, -60, 93, -102, 71, 51, 10, -100, 61, 115, -44, 123, 109, -100, -107, 4, 17, 63, 15, -4, 39, 24, 65, 5, -127, 55, 106, 87, 55, 25, 90, -124, 21, -120, -82, 24, -9, 12, -1, -38, 4, -122, -7, 57, -4, -43, 24, -6, -64, 79, 63, -93, -68, -57, -44, 21, 38, -47, -58, 19, 20, -128, 100, -98, -19, 17, 85, -2, 108, 101, 14, 46, 119, -42, 74, 124, -120, -111, 112, -115, 22, -120, 35, 56, -39, 90, 93, 43};
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
    msg.setTimeStamp(0.8970906068596568);
    msg.setSource(21384U);
    msg.setSourceEntity(140U);
    msg.setDestination(62732U);
    msg.setDestinationEntity(163U);
    msg.content_type.assign("PPRMBSLOZVXAJLIAPBYOOTBZYDFRXFFLUDAAFQLVUGPRWFGABCDGMYNHUWINXPSVNDRECUTTVCYEJQUNRNHMLYWXKZKIMGMCQLESQYMASVSOE");
    const char tmp_msg_0[] = {-105, 3, -19, -7, -15, -122, 97, 6, -109, -42, -24, -81, -31, 124, -29, 98, 27, 48, -104, -91, -89, -11, 79, -38, -66, -123, -80, 27, 126, 121, 26, 48, 30, -47, -21, -118, -13, -4, 31, 99, 49, 106, 15, -33, 108, -61, -51, 36, 103, 111, -65, -104, 81, 71, 91, -106, -95, 71, -84, -117, 76, -100, -23, 57, 2, -29, -83, 110, -61, 50, 80, -64, -88, 118, -114, 118, -26, 119, 30, -116, -96, 15, -125, -63, 17, -22, -60, 90, 23, 4, 120, 123, -118, -29, 9, 33, 65, -113, 22, 35, -44, 84, -32, 67, 122, -68, 5, 65, -60, 11, -98, 0, -6, 113, -13, -45, 4, -115, 33, -32, 88, 124, -53, -7, 87, -1, -29, 69, 103, -52, 69, 11, 44, -52, -18, 119, -15, -85, -39, -86, 2, -42, -90, -123, 94, 14, -96, 23, 48, -100, 78, -89, 3, 110, 72, 114, 90, 67, -128, -106};
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
    msg.setTimeStamp(0.8234458260489886);
    msg.setSource(31299U);
    msg.setSourceEntity(173U);
    msg.setDestination(14558U);
    msg.setDestinationEntity(154U);
    msg.content_type.assign("IGUMJQDYCNTPKJRXQYTJZCYBAQUCOGEWXOKSDAIVKTGJLDLWLISNTSKSQIZXRDADGTTHZMUHGQSYFZFFSMQVMKQYCHIKGIAURQHWBXQPZWMMPDUFXHJNSVIBWUZENTNZAXRBWBXZHSPLCTYLWVKXAEDGRRQMJ");
    const char tmp_msg_0[] = {70, -60, -80, 14, 122, 57, -97, -41, -61, -128, 42, 121, 51, 73, 50, 79, -49, 25, -21, 5, 98, 84, -112, -89, -68, -42, -24, 92, -125, 73, -11, 1, 53, -104, 32, -50, -109, -94, 39};
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
    msg.setTimeStamp(0.8776399643023455);
    msg.setSource(25163U);
    msg.setSourceEntity(91U);
    msg.setDestination(2585U);
    msg.setDestinationEntity(12U);
    msg.content_type.assign("OZCVCVOJDEGLOWBFKHGRMIBUHGSIFPPTMAQHIKGSFVUBWFEOXUUVMVXZDTJDUQJYKXNMIXPSGCKWOCWCAEVULNTQKUAMLTXLLDJTSLOESMCOGJHSLXAVAHDZAYBOIHXKPJHTRHIGBZXBLFRWOGCMYZZNIRYEFZYEIQBWZZCRPISQQZRKQKMENBTQDYPSYPWSGUYADKLNNLYHGQCPFTAENUWUEMDRWCJTJFKYNFNNOWBPHARJEBVDRQIX");
    const char tmp_msg_0[] = {110, 107, -96, 24, 25, -38, 117, 27, -8, 56, -56, -39, -36, 91, -104, 51, 34, -45, -45, 92, 70, -29, 77, -22, -101, -81, 3, -121, -4, -26, -37, 63, -47, -55, -109, 84, 84, -52, -27, -122, 100, -49, -88, -35, 122, -113, 17, 77, 106, 42, -4, -73, 64, -109, -12, -108, 103, -110, -75, 87, 76, 100, -64, 43, -119, -54, 30, -55, -57, -26, 51, -44, 108, 78, -3, 25, -105, 41, 104, -10, 98, -74, 81, 7, -103, 2, -45, 116, 69, 54, 54, 87, 105, -69, -121, 90, -27, 123, -28, 76, -53, -86, 100, 125, 88, 53, -19, 62, 112, 81, -23, -118};
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
    msg.setTimeStamp(0.3890379674268981);
    msg.setSource(19636U);
    msg.setSourceEntity(86U);
    msg.setDestination(59457U);
    msg.setDestinationEntity(121U);

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
    msg.setTimeStamp(0.038808038445391047);
    msg.setSource(20208U);
    msg.setSourceEntity(235U);
    msg.setDestination(11255U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.9354044623225898);
    msg.setSource(60029U);
    msg.setSourceEntity(220U);
    msg.setDestination(65314U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.05822811183319798);
    msg.setSource(1165U);
    msg.setSourceEntity(136U);
    msg.setDestination(4819U);
    msg.setDestinationEntity(138U);
    msg.target = 6870U;
    msg.bearing = 0.39780322057193873;
    msg.elevation = 0.5344261776180372;

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
    msg.setTimeStamp(0.24436690669452188);
    msg.setSource(39923U);
    msg.setSourceEntity(166U);
    msg.setDestination(20127U);
    msg.setDestinationEntity(106U);
    msg.target = 37444U;
    msg.bearing = 0.6971736222019908;
    msg.elevation = 0.6623779898840916;

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
    msg.setTimeStamp(0.5505987221704731);
    msg.setSource(29053U);
    msg.setSourceEntity(188U);
    msg.setDestination(42293U);
    msg.setDestinationEntity(124U);
    msg.target = 19945U;
    msg.bearing = 0.5981610522605909;
    msg.elevation = 0.6367098151886262;

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
    msg.setTimeStamp(0.11377798147862161);
    msg.setSource(52946U);
    msg.setSourceEntity(35U);
    msg.setDestination(43187U);
    msg.setDestinationEntity(83U);
    msg.target = 1049U;
    msg.x = 0.6430138545408;
    msg.y = 0.49960607502551013;
    msg.z = 0.3314953366809177;

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
    msg.setTimeStamp(0.020934060251052933);
    msg.setSource(57806U);
    msg.setSourceEntity(120U);
    msg.setDestination(18084U);
    msg.setDestinationEntity(205U);
    msg.target = 63220U;
    msg.x = 0.7244370995491787;
    msg.y = 0.11090714239084021;
    msg.z = 0.4982761954715871;

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
    msg.setTimeStamp(0.6180044205069305);
    msg.setSource(10508U);
    msg.setSourceEntity(241U);
    msg.setDestination(48536U);
    msg.setDestinationEntity(134U);
    msg.target = 20316U;
    msg.x = 0.23176486643076477;
    msg.y = 0.37080135758270827;
    msg.z = 0.8268685176281125;

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
    msg.setTimeStamp(0.9854264164994679);
    msg.setSource(56184U);
    msg.setSourceEntity(192U);
    msg.setDestination(22262U);
    msg.setDestinationEntity(207U);
    msg.target = 31933U;
    msg.lat = 0.7244383769166252;
    msg.lon = 0.26706926104929163;
    msg.z_units = 118U;
    msg.z = 0.14552042204643745;

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
    msg.setTimeStamp(0.6613023478581577);
    msg.setSource(33105U);
    msg.setSourceEntity(178U);
    msg.setDestination(20474U);
    msg.setDestinationEntity(172U);
    msg.target = 64623U;
    msg.lat = 0.29175928422094144;
    msg.lon = 0.5732531623379722;
    msg.z_units = 157U;
    msg.z = 0.21757533031496346;

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
    msg.setTimeStamp(0.8765718199055188);
    msg.setSource(29113U);
    msg.setSourceEntity(157U);
    msg.setDestination(58087U);
    msg.setDestinationEntity(32U);
    msg.target = 21251U;
    msg.lat = 0.5334586355017247;
    msg.lon = 0.6857954518651713;
    msg.z_units = 188U;
    msg.z = 0.17976437202872864;

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
