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
// IMC XML MD5: 0f425402b735f36a64d579da7bb4baf3                            *
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
    msg.setTimeStamp(0.972428749348);
    msg.setSource(8381U);
    msg.setSourceEntity(18U);
    msg.setDestination(37431U);
    msg.setDestinationEntity(35U);
    msg.state = 50U;
    msg.flags = 19U;
    msg.description.assign("EDUNGGAVXBPMTWDRRRXMWDHOVOKFMJOXSYWQDSECBCPPZLNHWZOCAOTPXFHKCVAMJQYDKVDFGVMSIPLWQBAZZMAJHISFIWHXJNTXZVNEXDEGHWOREIVKCUAYTGYREKDFSSVBCNQOFLEKTJPLXPSJKNRUCRBTMCLKBPAWBQQJVJLVYILZBZCUZUIDRAYXLQAOWNQGUTNEUFFLTHYGUKMHSGRPFEILNSJBZEIGHYAMNDIRXOUYFZYTJIHKM");

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
    msg.setTimeStamp(0.4461281995);
    msg.setSource(6996U);
    msg.setSourceEntity(140U);
    msg.setDestination(28530U);
    msg.setDestinationEntity(61U);
    msg.state = 1U;
    msg.flags = 14U;
    msg.description.assign("FZCBGSUZFPXQFKVVNHXTRDIMIQJPRFMMQEYLDCKDVUJYYXYPBAQTTEOXVLZMWMKZFMOHAAUWOVNXRNHNRIQIHSOZS");

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
    msg.setTimeStamp(0.235419014022);
    msg.setSource(41308U);
    msg.setSourceEntity(221U);
    msg.setDestination(18562U);
    msg.setDestinationEntity(92U);
    msg.state = 154U;
    msg.flags = 5U;
    msg.description.assign("WVNUHBAITJWSLKMDFAZDYKNWGHGKEJZCASBHZUQMFCWCWFEIPEZEBMDSDCJYBNJNMKFKKQRROERVPGIONDTVSXJAAZHLMRGOATFCBWFTZIZTNIQQCILSGHACCSGBYRBFYDOMXVXRRAYFUAHVMPO");

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
    msg.setTimeStamp(0.264428024938);
    msg.setSource(27826U);
    msg.setSourceEntity(65U);
    msg.setDestination(39473U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.112978737191);
    msg.setSource(1320U);
    msg.setSourceEntity(107U);
    msg.setDestination(60240U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.0664126358085);
    msg.setSource(34922U);
    msg.setSourceEntity(96U);
    msg.setDestination(21135U);
    msg.setDestinationEntity(129U);

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
    msg.setTimeStamp(0.778916792237);
    msg.setSource(14966U);
    msg.setSourceEntity(6U);
    msg.setDestination(15133U);
    msg.setDestinationEntity(26U);
    msg.id = 57U;
    msg.label.assign("ADUTGWMKCHFGYEUCANVZCXSYKSFMDHVMNGGKPCDSCQHYUESINCBBQTSZXMMIBZQJLGRROFWIPDBRURXVTAEAHAKZRBXHOYJLWVKVKNTOCPIIYBRCEIEWPLUK");
    msg.component.assign("LVBSPQTFIWLWSQYWBLUXXDHYNXUGDQLCEMCVYRKEUXXTNSIUMFVYPZBJGSGEPOCYPSN");
    msg.act_time = 33788U;
    msg.deact_time = 29752U;

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
    msg.setTimeStamp(0.325482478059);
    msg.setSource(683U);
    msg.setSourceEntity(4U);
    msg.setDestination(9906U);
    msg.setDestinationEntity(215U);
    msg.id = 124U;
    msg.label.assign("KUPUMATWWWNFKZIUBXBLTIXCHSFXECAZVNAOZHWOCALCTYKKXJPXLQDZPVMKNMBCJMHUBIOHTYDGMQQGIBXWTAGQNGJCZYVYCKORVWANDOEUWETXCYMYJOOREZLXYTVSVPFIFVGHLREUAFFJBTGOXLRQHAFDNZXPNFQRHLBCJKFMJBOHSLCTGDYUNHQRSUWEPQRSLEGGKBMEWJDZPELFPPDMYNVJYVJURPSSOKSZDAIDIBKEQ");
    msg.component.assign("QMEPATVBZESGPEBYFSFCPHRWRXDFKMJKQDQYLAHRCFDWOLVNRZNUVTMGDNADVMLBHRZKDVYWWOGHVPOYGWNQZXCQGTOJVIFJPNZQLIEUVHTWYEAENAMBOGIKFZJZNUALFVOQPUFPXDZBICNGITTICRIZCAXQRUEFMNLEPGHMBLUHSCBUG");
    msg.act_time = 14221U;
    msg.deact_time = 6367U;

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
    msg.setTimeStamp(0.490727726442);
    msg.setSource(57314U);
    msg.setSourceEntity(100U);
    msg.setDestination(15538U);
    msg.setDestinationEntity(185U);
    msg.id = 149U;
    msg.label.assign("WGHVPSVKBOCNJZSUMYQSJVULPTCSANRQYTZKEKRMWIIGOUREYIBLVWWOGZFESXIGNELAPJTZADZDIYXQEYZBNTCQWHHTL");
    msg.component.assign("DDYSGHMAHAHTELXXLADOOIIGHE");
    msg.act_time = 33454U;
    msg.deact_time = 10645U;

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
    msg.setTimeStamp(0.0341341597753);
    msg.setSource(51010U);
    msg.setSourceEntity(22U);
    msg.setDestination(44200U);
    msg.setDestinationEntity(98U);
    msg.id = 170U;

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
    msg.setTimeStamp(0.271712105086);
    msg.setSource(41015U);
    msg.setSourceEntity(81U);
    msg.setDestination(35429U);
    msg.setDestinationEntity(224U);
    msg.id = 201U;

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
    msg.setTimeStamp(0.380035328989);
    msg.setSource(33963U);
    msg.setSourceEntity(112U);
    msg.setDestination(63714U);
    msg.setDestinationEntity(158U);
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
    msg.setTimeStamp(0.813701016882);
    msg.setSource(28162U);
    msg.setSourceEntity(15U);
    msg.setDestination(64786U);
    msg.setDestinationEntity(164U);
    msg.op = 70U;
    msg.list.assign("LQISMJSWQRATYJEBNSJUHWQHAJNKLCRYCUPXGPHIGXEWPURNFQBPHUOQMJHFOXCVYWNFXPZNDKMCRIGUFBDNAMSLRKSPDOYIFEVBHKFAQYOEISZAFMZLUQZZIXXAPMPJGVJDKMGTLDXYEAXDSTZHWWFEIUQDCVUWR");

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
    msg.setTimeStamp(0.746046778444);
    msg.setSource(47008U);
    msg.setSourceEntity(60U);
    msg.setDestination(52908U);
    msg.setDestinationEntity(164U);
    msg.op = 125U;
    msg.list.assign("JRQDCSDOGNNUFMACXVBXGZWWLTDREOGTKWHUEFIBTDBJEGGXDFYANYVOLNLIVINCTDQZJUCKWNXPYOZTQBCPXSHSTYMSXBWPZNJVKCWDGRPHKYSFHOFQOQILRFPQLNXVCUBYMSAEKOZKKQRFLGVYEUWPIMQPCRMLKZREYSJZOHZTBIAJAHXLAFHTHB");

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
    msg.setTimeStamp(0.518815737287);
    msg.setSource(59900U);
    msg.setSourceEntity(130U);
    msg.setDestination(53534U);
    msg.setDestinationEntity(50U);
    msg.op = 84U;
    msg.list.assign("VGBHKJDMTVTWNZIBSPLREJUYXALPJXDYWMDHWWPGNZMWKDTDTNIPQVFVLZNJQGKYLIDMMZIFOOLBPNRACTUFSIJZYJLQUZEUFUAMCXOTNMDQKAVCFDKFYQEWXUXYQKUIOVUZEXSFPEJAYZAGEOOZSXUMGEWVHXPHXHKHYARSTKBLCBLWRGCOMEROHQVNJRIORICAFEDLBISFANSTSCWBNYPI");

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
    msg.setTimeStamp(0.905214213226);
    msg.setSource(27764U);
    msg.setSourceEntity(14U);
    msg.setDestination(61615U);
    msg.setDestinationEntity(22U);
    msg.value = 114U;

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
    msg.setTimeStamp(0.226570116411);
    msg.setSource(14468U);
    msg.setSourceEntity(38U);
    msg.setDestination(4845U);
    msg.setDestinationEntity(178U);
    msg.value = 188U;

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
    msg.setTimeStamp(0.951267830456);
    msg.setSource(45759U);
    msg.setSourceEntity(157U);
    msg.setDestination(40762U);
    msg.setDestinationEntity(57U);
    msg.value = 178U;

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
    msg.setTimeStamp(0.154598888386);
    msg.setSource(54827U);
    msg.setSourceEntity(215U);
    msg.setDestination(54001U);
    msg.setDestinationEntity(169U);
    msg.consumer.assign("THMTCLRARIKIRJAYUJPOWNQHETEESMPQSBOBCTKPDKOELTLYMWEDQAOSPUBPQUAGXLSZPZDMGGQORTOFAHWTWPFHPWIPIVNCKLCJAQEUZQIFSMDVUJGZFFGXWHBSILQSYJOEHLXTZAZRVKYABIDEGFGFF");
    msg.message_id = 52236U;

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
    msg.setTimeStamp(0.0472722013931);
    msg.setSource(46389U);
    msg.setSourceEntity(181U);
    msg.setDestination(5833U);
    msg.setDestinationEntity(103U);
    msg.consumer.assign("JVKJTGYLOQRNIEKFMTLMCYFFDRQGIHATCJULYYBMRXPNXGYCOEEZTXNDGRHLRTILZBJZTUGIUFZAXDNPXVIGOFVCYSKUVNRDRBJKSOWFDGWBEZBAKFCISMEOEVASKQFRQYWJNQBICSSDZYZHGBWMIPWHAWQTBVHOPCDORMQKLMZLIDQPIWQSXDJDUOTEUASXREMMGTJQKWVJAUNHKHPHENMLNBWHJWZXAOLVFPLUSCHAFSNEVOXPVYCPUTAPY");
    msg.message_id = 38181U;

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
    msg.setTimeStamp(0.162769545244);
    msg.setSource(44122U);
    msg.setSourceEntity(149U);
    msg.setDestination(38820U);
    msg.setDestinationEntity(6U);
    msg.consumer.assign("BOHSDQITBYUDDHLXJGSMRCYVOQJQEABGLWKIOQBYHKCMATJDKPEQXUDHXNSWPGIOKXQLXZFJTIKLABKITPBNZFWNYAZHECTWKEJOFKPPIJCIFUXEVAOHDTHKELUYGJSMMSGYUNDPSZJQMGMUWCVRVFYABN");
    msg.message_id = 7055U;

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
    msg.setTimeStamp(0.605212342709);
    msg.setSource(62471U);
    msg.setSourceEntity(39U);
    msg.setDestination(29470U);
    msg.setDestinationEntity(188U);
    msg.type = 50U;

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
    msg.setTimeStamp(0.883306558366);
    msg.setSource(2240U);
    msg.setSourceEntity(254U);
    msg.setDestination(48252U);
    msg.setDestinationEntity(30U);
    msg.type = 124U;

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
    msg.setTimeStamp(0.122500977376);
    msg.setSource(24492U);
    msg.setSourceEntity(235U);
    msg.setDestination(18652U);
    msg.setDestinationEntity(153U);
    msg.type = 2U;

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
    msg.setTimeStamp(0.414608375779);
    msg.setSource(36765U);
    msg.setSourceEntity(107U);
    msg.setDestination(32897U);
    msg.setDestinationEntity(236U);
    msg.op = 181U;

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
    msg.setTimeStamp(0.781620091832);
    msg.setSource(14839U);
    msg.setSourceEntity(185U);
    msg.setDestination(35591U);
    msg.setDestinationEntity(120U);
    msg.op = 243U;

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
    msg.setTimeStamp(0.848658660466);
    msg.setSource(62152U);
    msg.setSourceEntity(175U);
    msg.setDestination(35984U);
    msg.setDestinationEntity(194U);
    msg.op = 144U;

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
    msg.setTimeStamp(0.593737175538);
    msg.setSource(63054U);
    msg.setSourceEntity(18U);
    msg.setDestination(19332U);
    msg.setDestinationEntity(7U);
    msg.total_steps = 83U;
    msg.step_number = 144U;
    msg.step.assign("XZZJFXFCAOMSPVHQEVHCMYMHSSWOATRTSYYYXRPMKJUUPYPKTLXULEKDBNMUIDLLRSJUWCQMUMZRNDDNYG");
    msg.flags = 94U;

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
    msg.setTimeStamp(0.121749656999);
    msg.setSource(41971U);
    msg.setSourceEntity(149U);
    msg.setDestination(19413U);
    msg.setDestinationEntity(85U);
    msg.total_steps = 44U;
    msg.step_number = 21U;
    msg.step.assign("EDRRMQEKDBVUGQWJLSXLACAINBROSWGXDOODTMMCVRPQYYAYSVSXF");
    msg.flags = 217U;

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
    msg.setTimeStamp(0.0116530527063);
    msg.setSource(47305U);
    msg.setSourceEntity(57U);
    msg.setDestination(9096U);
    msg.setDestinationEntity(71U);
    msg.total_steps = 96U;
    msg.step_number = 76U;
    msg.step.assign("TQMFITWPZEMPKFO");
    msg.flags = 50U;

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
    msg.setTimeStamp(0.522685133769);
    msg.setSource(46482U);
    msg.setSourceEntity(216U);
    msg.setDestination(64135U);
    msg.setDestinationEntity(219U);
    msg.state = 127U;
    msg.error.assign("JMTJKYGTZZDSBTTMCXPFLIHLOBBKDXNYBJGGWHCISVABIKDOVQHGJZWQVWMXCMZSDDWUAKIFMBEYGZLUGCJFGJEUSBQXTAIRDX");

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
    msg.setTimeStamp(0.24349193754);
    msg.setSource(17823U);
    msg.setSourceEntity(209U);
    msg.setDestination(4702U);
    msg.setDestinationEntity(225U);
    msg.state = 16U;
    msg.error.assign("PJTIXWPUNGUHLHHYNYKWGTFYQNULLKHUCDQMZRCDSTTUVKZLTMBXWVWWLADIMXFSZEELCKWVRDLKNEIPOAOHARYOVQMCSOWORSJSQ");

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
    msg.setTimeStamp(0.939117723099);
    msg.setSource(49472U);
    msg.setSourceEntity(154U);
    msg.setDestination(5732U);
    msg.setDestinationEntity(235U);
    msg.state = 173U;
    msg.error.assign("HSDJZKVWECCUXYJBFIRVQPRLLJIUMMTEWZHWZGKZODXUHPNIKKPQGNAUTISFAQZRBHSLGHFKNQNRNDJWWMYSVAONYVBXYCNVLQXPOCZOCBTYPJGCFTIYCECDSBILQHQAFGWHZADYAQLIPTZEGSKOJLUEUNXJEFBDFSIBALJDBBSEVWQAXMEBYWAMRTVGDGPKORTWHFUOKS");

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
    msg.setTimeStamp(0.243124684276);
    msg.setSource(21762U);
    msg.setSourceEntity(183U);
    msg.setDestination(1927U);
    msg.setDestinationEntity(78U);

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
    msg.setTimeStamp(0.987217297903);
    msg.setSource(41534U);
    msg.setSourceEntity(2U);
    msg.setDestination(18472U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.602218781663);
    msg.setSource(31156U);
    msg.setSourceEntity(63U);
    msg.setDestination(48763U);
    msg.setDestinationEntity(249U);

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
    msg.setTimeStamp(0.0802069293734);
    msg.setSource(8285U);
    msg.setSourceEntity(132U);
    msg.setDestination(47263U);
    msg.setDestinationEntity(163U);
    msg.op = 27U;
    msg.speed_min = 0.620000291189;
    msg.speed_max = 0.892827788309;
    msg.long_accel = 0.98840576951;
    msg.alt_max_msl = 0.472336217204;
    msg.dive_fraction_max = 0.423930509113;
    msg.climb_fraction_max = 0.676541013855;
    msg.bank_max = 0.698258448535;
    msg.p_max = 0.769664315597;
    msg.pitch_min = 0.590960319824;
    msg.pitch_max = 0.694480160693;
    msg.q_max = 0.690768897994;
    msg.g_min = 0.710179388857;
    msg.g_max = 0.492689639967;
    msg.g_lat_max = 0.107681224181;
    msg.rpm_min = 0.0135601721526;
    msg.rpm_max = 0.922279195324;
    msg.rpm_rate_max = 0.379983941524;

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
    msg.setTimeStamp(0.179561650053);
    msg.setSource(1777U);
    msg.setSourceEntity(154U);
    msg.setDestination(36875U);
    msg.setDestinationEntity(53U);
    msg.op = 235U;
    msg.speed_min = 0.373746347212;
    msg.speed_max = 0.40522435757;
    msg.long_accel = 0.504094764703;
    msg.alt_max_msl = 0.823826953558;
    msg.dive_fraction_max = 0.0149409463614;
    msg.climb_fraction_max = 0.371844390764;
    msg.bank_max = 0.6560383817;
    msg.p_max = 0.301790327972;
    msg.pitch_min = 0.45208016531;
    msg.pitch_max = 0.376080091108;
    msg.q_max = 0.273097982079;
    msg.g_min = 0.518812139992;
    msg.g_max = 0.884710342389;
    msg.g_lat_max = 0.0383743402029;
    msg.rpm_min = 0.842093789567;
    msg.rpm_max = 0.686085037374;
    msg.rpm_rate_max = 0.87763393791;

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
    msg.setTimeStamp(0.101207283344);
    msg.setSource(28362U);
    msg.setSourceEntity(20U);
    msg.setDestination(59758U);
    msg.setDestinationEntity(109U);
    msg.op = 37U;
    msg.speed_min = 0.346025358925;
    msg.speed_max = 0.772194173704;
    msg.long_accel = 0.841298934244;
    msg.alt_max_msl = 0.726924478455;
    msg.dive_fraction_max = 0.579929842901;
    msg.climb_fraction_max = 0.834220586519;
    msg.bank_max = 0.878848105605;
    msg.p_max = 0.0619366666094;
    msg.pitch_min = 0.08623118631;
    msg.pitch_max = 0.562693653364;
    msg.q_max = 0.0828734810511;
    msg.g_min = 0.968324559685;
    msg.g_max = 0.144931712396;
    msg.g_lat_max = 0.11592956414;
    msg.rpm_min = 0.00379633653494;
    msg.rpm_max = 0.550986928247;
    msg.rpm_rate_max = 0.395303544784;

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
    msg.setTimeStamp(0.0111259926523);
    msg.setSource(15871U);
    msg.setSourceEntity(73U);
    msg.setDestination(53822U);
    msg.setDestinationEntity(93U);
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("MDWQZRWJGSBVEUSLHDQUVGIOEOISPPNABTRFINYKSSCLTPQMQETJORYGJXBAMHZKGZJOILDWUNCLMDQ");
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
    msg.setTimeStamp(0.660451293483);
    msg.setSource(9842U);
    msg.setSourceEntity(55U);
    msg.setDestination(40062U);
    msg.setDestinationEntity(236U);
    IMC::GetOperationalLimits tmp_msg_0;
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
    msg.setTimeStamp(0.650501184355);
    msg.setSource(42707U);
    msg.setSourceEntity(135U);
    msg.setDestination(55745U);
    msg.setDestinationEntity(203U);
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 50606U;
    tmp_msg_0.lat = 0.393761826042;
    tmp_msg_0.lon = 0.587903320453;
    tmp_msg_0.z = 0.717430987064;
    tmp_msg_0.z_units = 192U;
    tmp_msg_0.amplitude = 0.732671716411;
    tmp_msg_0.pitch = 0.652271695162;
    tmp_msg_0.speed = 0.0558526006264;
    tmp_msg_0.speed_units = 241U;
    tmp_msg_0.custom.assign("VHLJVLORUDQEYFKWMKLUBHRCHSEWSNWWPOIFYYIZFNLJPOKIHKDZZOUXUJFYTSOATCJHBAVWGCJPVAHJSTQTMSFXFIVXJGWEKEZDAZAMBFPXGDNCRUXHBDTUYKNCMNLGKZLVEPVEIRAE");
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
    msg.setTimeStamp(0.352274233099);
    msg.setSource(3572U);
    msg.setSourceEntity(159U);
    msg.setDestination(18856U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.304163389027;
    msg.lon = 0.863424841101;
    msg.height = 0.482952222332;
    msg.x = 0.585459943151;
    msg.y = 0.939738504767;
    msg.z = 0.780268873208;
    msg.phi = 0.888420298605;
    msg.theta = 0.707844543329;
    msg.psi = 0.047398238197;
    msg.u = 0.103050819467;
    msg.v = 0.123949578514;
    msg.w = 0.708612442265;
    msg.p = 0.850641124543;
    msg.q = 0.810606825087;
    msg.r = 0.114383467668;
    msg.svx = 0.403639463418;
    msg.svy = 0.944486301115;
    msg.svz = 0.595144596957;

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
    msg.setTimeStamp(0.779412182076);
    msg.setSource(23003U);
    msg.setSourceEntity(100U);
    msg.setDestination(53599U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.474120453329;
    msg.lon = 0.83114931111;
    msg.height = 0.235400754182;
    msg.x = 0.720652546717;
    msg.y = 0.392153830524;
    msg.z = 0.646551189993;
    msg.phi = 0.71083130344;
    msg.theta = 0.469653374074;
    msg.psi = 0.70871234426;
    msg.u = 0.860476647194;
    msg.v = 0.526309862209;
    msg.w = 0.729370083729;
    msg.p = 0.776730863914;
    msg.q = 0.604728247685;
    msg.r = 0.519133892816;
    msg.svx = 0.00830326410121;
    msg.svy = 0.320027863405;
    msg.svz = 0.0716173981606;

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
    msg.setTimeStamp(0.521085950836);
    msg.setSource(63121U);
    msg.setSourceEntity(186U);
    msg.setDestination(41298U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.421074073867;
    msg.lon = 0.484221902436;
    msg.height = 0.309231953239;
    msg.x = 0.379746401636;
    msg.y = 0.813239787612;
    msg.z = 0.292780550211;
    msg.phi = 0.131802755333;
    msg.theta = 0.624099519911;
    msg.psi = 0.528647486119;
    msg.u = 0.517130898139;
    msg.v = 0.0712526208928;
    msg.w = 0.785516916732;
    msg.p = 0.0913225867441;
    msg.q = 0.588427920684;
    msg.r = 0.903708382754;
    msg.svx = 0.708923035289;
    msg.svy = 0.642528685368;
    msg.svz = 0.0840532148022;

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
    msg.setTimeStamp(0.89669269135);
    msg.setSource(57962U);
    msg.setSourceEntity(71U);
    msg.setDestination(4344U);
    msg.setDestinationEntity(21U);
    msg.op = 59U;
    msg.entities.assign("ZVUTHSLWAYFLHTZGIVOOMGGRZMNLZIWHIKFJRUSXMVZYTKEPHNCJDXKQACWTBKYIFSGHIIKAEKNYMNJXAPTCQBLDRRSUYBANCXKMVBUQVCKOXEPFCJUSNQOEWPOXQCVMYPEWSCZDWBUUUXTSMTSQIXQEUOCGDHFAYTMABRTFRSFWQJHWJPHDGLORWLIKBLAEQFMVFELSVZHVPGGLZENVBCI");

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
    msg.setTimeStamp(0.150520961238);
    msg.setSource(28652U);
    msg.setSourceEntity(142U);
    msg.setDestination(25645U);
    msg.setDestinationEntity(71U);
    msg.op = 241U;
    msg.entities.assign("NSEQNKMNXYYMRDWIKCUDGRLWDQZNARJPPHCHVCQFAOPXOERVW");

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
    msg.setTimeStamp(0.250460456559);
    msg.setSource(14010U);
    msg.setSourceEntity(23U);
    msg.setDestination(48777U);
    msg.setDestinationEntity(206U);
    msg.op = 154U;
    msg.entities.assign("GOIJAJUTULCDFOGASLPOHZSUJCQGLTUPRUFBBQJARYOTVJLCTBBEKOTXGYMOUSNKMZEDVFVCNNYCSGR");

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
    msg.setTimeStamp(0.36730072679);
    msg.setSource(26154U);
    msg.setSourceEntity(36U);
    msg.setDestination(3853U);
    msg.setDestinationEntity(147U);
    msg.type = 91U;
    msg.speed = 52779U;
    const char tmp_msg_0[] = {88, -64, 58, -67, -71, 73, 5, 123, -124, -37, -51, 105, 0, 20, -64, -93, 104, -124, -67, -79, 11};
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
    msg.setTimeStamp(0.259744762386);
    msg.setSource(51627U);
    msg.setSourceEntity(122U);
    msg.setDestination(52708U);
    msg.setDestinationEntity(203U);
    msg.type = 243U;
    msg.speed = 47946U;
    const char tmp_msg_0[] = {88, -16, -71, 104, 90, 81, 48, 114, -17, -97, 45, 85, 42, 71, -120, -76, 52, -97, -71, 115, 69, 115, 63, 24, -21, 124, -27, -44, -8, -12, -85, -50, 90, -117, -69, -104, -101, 124, 24, -32, -105, 37, -13, 51, -13, -83, 26, 8, -117, 45, 9, -68, -90, 102};
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
    msg.setTimeStamp(0.0264133182864);
    msg.setSource(17502U);
    msg.setSourceEntity(5U);
    msg.setDestination(38111U);
    msg.setDestinationEntity(167U);
    msg.type = 85U;
    msg.speed = 15081U;
    const char tmp_msg_0[] = {-66, -110, 99, 82, 41, 15, 113, 76, 15, -56, 17, -67, 114, -9, 53, 55, 35, -29, -54, 63, -106, -99, -2, 21, -97, 40, 56, 126, 7, 6, 117};
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
    msg.setTimeStamp(0.293522343232);
    msg.setSource(52037U);
    msg.setSourceEntity(100U);
    msg.setDestination(36118U);
    msg.setDestinationEntity(44U);
    msg.op = 202U;
    msg.tas2acc_pgain = 0.0462801116965;
    msg.bank2p_pgain = 0.511279783398;

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
    msg.setTimeStamp(0.820959417171);
    msg.setSource(41427U);
    msg.setSourceEntity(152U);
    msg.setDestination(52838U);
    msg.setDestinationEntity(193U);
    msg.op = 69U;
    msg.tas2acc_pgain = 0.796666602048;
    msg.bank2p_pgain = 0.470579392079;

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
    msg.setTimeStamp(0.510470449307);
    msg.setSource(5440U);
    msg.setSourceEntity(96U);
    msg.setDestination(45536U);
    msg.setDestinationEntity(99U);
    msg.op = 3U;
    msg.tas2acc_pgain = 0.772491922915;
    msg.bank2p_pgain = 0.0224711019968;

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
    msg.setTimeStamp(0.54844590045);
    msg.setSource(16299U);
    msg.setSourceEntity(178U);
    msg.setDestination(34856U);
    msg.setDestinationEntity(76U);
    msg.available = 1455902348U;
    msg.value = 246U;

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
    msg.setTimeStamp(0.0742576445201);
    msg.setSource(41296U);
    msg.setSourceEntity(19U);
    msg.setDestination(32693U);
    msg.setDestinationEntity(189U);
    msg.available = 1069178544U;
    msg.value = 54U;

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
    msg.setTimeStamp(0.894532878925);
    msg.setSource(40806U);
    msg.setSourceEntity(21U);
    msg.setDestination(20043U);
    msg.setDestinationEntity(174U);
    msg.available = 4082361992U;
    msg.value = 84U;

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
    msg.setTimeStamp(0.785961403649);
    msg.setSource(64054U);
    msg.setSourceEntity(139U);
    msg.setDestination(25173U);
    msg.setDestinationEntity(109U);
    msg.op = 236U;
    msg.snapshot.assign("KXROJUITYIIJDPVOWXLXAZGZGXCERODBNIMPCQKBQUVCLCXJBEMERFNZYJUJCRJTYXIKKNHLGGFIPXEPUFHDXJWOKQHEQRQIROWOKZVJKPPXOPUNGTZBEEFLMSRZLMKFCAVBYSIHZMMUELYDDTHUATKVNHFAZCHRHKSGLLVMACDYBTDPFAYJAWFSPRAWBT");
    IMC::AngularVelocity tmp_msg_0;
    tmp_msg_0.time = 0.362455572207;
    tmp_msg_0.x = 0.799481082901;
    tmp_msg_0.y = 0.214795148123;
    tmp_msg_0.z = 0.251630946415;
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
    msg.setTimeStamp(0.448048181648);
    msg.setSource(37681U);
    msg.setSourceEntity(45U);
    msg.setDestination(65351U);
    msg.setDestinationEntity(116U);
    msg.op = 242U;
    msg.snapshot.assign("UPZXMJUHJMFNQRLZDDXSZIKSDMQROGXBYUPADIVRHHYVDIHYVDKTHXLRUAJJEPEGFMEFKPRSKYABYTTZMLZQIWEPAJFOQQSLZOPELJFSYZBGCAIIXBTGPYVIIATCTQXCWNMVSNQPBZIMJKOGSWSVJKDGKQOYGMQHOELCASFFRGGZLXCWWFEEVORUTKHHOCTM");
    IMC::Aborted tmp_msg_0;
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
    msg.setTimeStamp(0.47858235093);
    msg.setSource(33338U);
    msg.setSourceEntity(109U);
    msg.setDestination(40881U);
    msg.setDestinationEntity(217U);
    msg.op = 49U;
    msg.snapshot.assign("CLAMXYNHQEOVGFKZHLCXRVHDTAKWVKQTXYTTEZSREKISBHRCDQHUYJRJVNZOHSQGUISMJUBLFKALWDEQOVFGTLZXYATGOMDNHVXSWBBUDQJCBEINUJFIOZYYUMGMZDGFMPTGHRNPYPSWXKOZLBUSFQQICDBUPBNCQOTPGBJZWTVKCPYSSXOAENGSWNCWTIJOYRCZFKPEHPKAERIHAAMKULVOGECFIMARMQWYZBDFJVNJDJLUPAPRXFIRLM");
    IMC::HistoricDataQuery tmp_msg_0;
    tmp_msg_0.req_id = 28183U;
    tmp_msg_0.type = 196U;
    tmp_msg_0.max_size = 54008U;
    IMC::HistoricData tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.base_lat = 0.753765925626;
    tmp_tmp_msg_0_0.base_lon = 0.488177984336;
    tmp_tmp_msg_0_0.base_time = 0.663411406702;
    IMC::RemoteCommand tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.original_source = 25900U;
    tmp_tmp_tmp_msg_0_0_0.destination = 1717U;
    tmp_tmp_tmp_msg_0_0_0.timeout = 0.909732688169;
    IMC::Rpm tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.value = 7644;
    tmp_tmp_tmp_msg_0_0_0.cmd.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_msg_0_0.data.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.88089395415);
    msg.setSource(15301U);
    msg.setSourceEntity(109U);
    msg.setDestination(51154U);
    msg.setDestinationEntity(96U);
    msg.op = 22U;
    msg.name.assign("CKBLCQPFRWWRISRIYIVFGMFAYDYAOWCBRIBIEQRJQDAYUQYDNUADDPHDOSMQZABLOMBVLMZEZVDWHPRVXNVRZWNSKESFBIOGAFLHHXFFADUTUORZSJKEYZWWDTXPGILEGWNOPZQCEGTUJJKSIETSSRXTYRTWSYLVQFNLZBMKCVXPCNEGQUFCJHJGXIFOAEPPHUGXQBOOWNGMAHNPCETBMHVMYV");

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
    msg.setTimeStamp(0.460136364853);
    msg.setSource(31275U);
    msg.setSourceEntity(82U);
    msg.setDestination(57614U);
    msg.setDestinationEntity(65U);
    msg.op = 38U;
    msg.name.assign("XMOYGNBJJXWEURYLUMQEOSEMPLZGKVFAFLESTAUFBZCHLC");

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
    msg.setTimeStamp(0.36606580974);
    msg.setSource(35097U);
    msg.setSourceEntity(103U);
    msg.setDestination(14596U);
    msg.setDestinationEntity(225U);
    msg.op = 35U;
    msg.name.assign("YUJUTZVDEXIQIPFTUOESQEUJOHPXCPFOIDMBHZXVHQYEJWEWUAZRVLZUCPKMYSZPXBOIBKAMYFQNRFVGLVDVPSZAEQEXNGSGMBGJORDCQXNKFBJDYGMTCMFFOYKJTJNZHNVATXJAWYXAMDWKQWLDWATWLPBBCTKDHUVLJTHZSDIGSGRWKKSRNIQOGRFSCFDNTLNS");

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
    msg.setTimeStamp(0.0664911166315);
    msg.setSource(57687U);
    msg.setSourceEntity(215U);
    msg.setDestination(6673U);
    msg.setDestinationEntity(233U);
    msg.type = 122U;
    msg.htime = 0.0301018894381;
    msg.context.assign("HWYEBENGEWZNJICKFBOMIMXCHNPRDEM");
    msg.text.assign("YAFANDIKZJMQEWVKGAHCZKXPNBGRCFVEURPHG");

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
    msg.setTimeStamp(0.429502060222);
    msg.setSource(48248U);
    msg.setSourceEntity(215U);
    msg.setDestination(36002U);
    msg.setDestinationEntity(163U);
    msg.type = 214U;
    msg.htime = 0.770044573195;
    msg.context.assign("XBQIZDXEFBHPZCAMYRPPXWZULU");
    msg.text.assign("SZBGKVLIOYNCCBOTQBDTQCAPYFMXQRTWUNRGNQVJFAOYPWEMAJIJLPIF");

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
    msg.setTimeStamp(0.973211250655);
    msg.setSource(20944U);
    msg.setSourceEntity(119U);
    msg.setDestination(4257U);
    msg.setDestinationEntity(102U);
    msg.type = 240U;
    msg.htime = 0.657164484195;
    msg.context.assign("BECVIAZVPALIYYO");
    msg.text.assign("IEZPBLEIPYBNYDKCSSOVREGEZSOKDAQKRONWJHWQLMFYDUKHSVRBTRZFWOWPALFNRCAXLHMBFPBQRGBOHKEDQVQGQZCSETDFAPJMGJVMTVZMOSDTOFSVLHZYFHJPPGNFXOJWOJWVZKKYCLAETWUHUDDHYJCQWOQUNMZLUKNLKYIJGVCEBXREVGCCCIAREIXDIVUYSFLGUIXNQNBCNSXSGMKYIWRAMTBPLJTAX");

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
    msg.setTimeStamp(0.064245732599);
    msg.setSource(60574U);
    msg.setSourceEntity(101U);
    msg.setDestination(57951U);
    msg.setDestinationEntity(167U);
    msg.command = 24U;
    msg.htime = 0.515103171293;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 146U;
    tmp_msg_0.htime = 0.152502351756;
    tmp_msg_0.context.assign("NAXZIAFTIFWSGGVJYDUWKKLAQKBYVORSJDKQQPOMMKHDTXTSVPJFLNSTBTSLYPGPRIDDMEWPXMLZSLZKCHSEJBSFVVJXRCOBFWRLDZZHTKMROATQZFGOUGWVNDFHUDXLWWUFMLNWLYNNOAQZQQEIPWRZYCGPIITABAPGOGMVIPSULBJCY");
    tmp_msg_0.text.assign("DCEJAQJPHDHOQOKLCEJPSGMUCIZPFBIYZMMDDRGBACINCLSBJQVTIHSDITTXAVTKHUDXNEPKYMXQXKMLUPFJNGZSRGKFEMZOCYNWAOFPECIUMYGILRQFBHIABHHPKYBTIFSGZAEQHYQJVEVV");
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
    msg.setTimeStamp(0.960145238074);
    msg.setSource(50160U);
    msg.setSourceEntity(54U);
    msg.setDestination(57552U);
    msg.setDestinationEntity(27U);
    msg.command = 222U;
    msg.htime = 0.79671593151;

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
    msg.setTimeStamp(0.798138020027);
    msg.setSource(60775U);
    msg.setSourceEntity(139U);
    msg.setDestination(22473U);
    msg.setDestinationEntity(232U);
    msg.command = 138U;
    msg.htime = 0.238106628459;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 200U;
    tmp_msg_0.htime = 0.0305989257976;
    tmp_msg_0.context.assign("CQSQGGFVRNUIRFPWNYFQKHQEVANSZEMNGEJNADGUFDMLKBISRKZKTYOBGHXLOSLISUVGUTIBEAAXXHNJJYJYQDXFRSDILTCYLWXTCPDBOWTGBZWQOLBVUQLIYQJFIIJBWWYTSDTEBXPHRMZAJAMXZDVNHHYKQANMZEOPPIJKDOJVO");
    tmp_msg_0.text.assign("EJFFHORKHVHQULFAYPHGVJBJWAORAMQCUCSUVZURMSGTYVCHKYFRIESGGWSWCIOOMILGDOIPJRQGBJDQLHXVQFKSGNYNPXEFZKTUKFELJCXGRVKIFMPZCKQTMBGETYJVLCLHPATWWHNXVXQLTMSEMDHQDIWAPVXODBJYEEOCDBUEAJPPAJSUXZKREWNSFYWIDKKZLUXAZCDQRTQITUCFOPLYUMXG");
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
    msg.setTimeStamp(0.913560948931);
    msg.setSource(34335U);
    msg.setSourceEntity(132U);
    msg.setDestination(21984U);
    msg.setDestinationEntity(33U);
    msg.op = 24U;
    msg.file.assign("TPSXFBYDWGNCXHQFKZSYBPFQMVHUUDTKAFUPJIQAUGNZUKWAMPZOBSBDFMUVPOJWDFEJXJXXCWJVCCRXFAWHPRSYDLZQYVQJJNIDSULIWGGTTNJPEIGLYI");

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
    msg.setTimeStamp(0.514978944297);
    msg.setSource(8412U);
    msg.setSourceEntity(236U);
    msg.setDestination(59779U);
    msg.setDestinationEntity(47U);
    msg.op = 186U;
    msg.file.assign("NPUTDPXSJTLNBJIBCDKVFIXWSKONWORZAEQIZVAPRBJFDPAXKEKMLGMGURETMKIRQSFNHYQTVVGBXBYNTMQADAICB");

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
    msg.setTimeStamp(0.555394243181);
    msg.setSource(56307U);
    msg.setSourceEntity(78U);
    msg.setDestination(5335U);
    msg.setDestinationEntity(186U);
    msg.op = 98U;
    msg.file.assign("BDWZEATHGRSTVNVVDSBNQOTXZDUHUEAGJADWSCNASHINFHABLPFBWCTGFPFFFKYEPUXVLOGCTEZOAJJWUEKOBYXFXVNYEDYQBPTBPZMMKMGYXHPDKQCIRSZWLRVIKOGRXVQMEQOFJCGCMDQJPUPBTDTZANUEHUGWCSONXJXRICSXQWHRIRXTMLLVFSZLMIWIELNHMEYZRLZCKYLMQJBDOJRJVPYDZWNATGUIOVR");

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
    msg.setTimeStamp(0.267969476035);
    msg.setSource(13477U);
    msg.setSourceEntity(37U);
    msg.setDestination(27971U);
    msg.setDestinationEntity(105U);
    msg.op = 168U;
    msg.clock = 0.94886291129;
    msg.tz = -106;

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
    msg.setTimeStamp(0.756098116186);
    msg.setSource(369U);
    msg.setSourceEntity(28U);
    msg.setDestination(3531U);
    msg.setDestinationEntity(52U);
    msg.op = 224U;
    msg.clock = 0.645894398642;
    msg.tz = 57;

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
    msg.setTimeStamp(0.293834846193);
    msg.setSource(26973U);
    msg.setSourceEntity(44U);
    msg.setDestination(1761U);
    msg.setDestinationEntity(177U);
    msg.op = 125U;
    msg.clock = 0.633913633842;
    msg.tz = -48;

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
    msg.setTimeStamp(0.209974128684);
    msg.setSource(43566U);
    msg.setSourceEntity(84U);
    msg.setDestination(14612U);
    msg.setDestinationEntity(215U);
    msg.conductivity = 0.122704582468;
    msg.temperature = 0.781462634442;
    msg.depth = 0.616117180698;

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
    msg.setTimeStamp(0.199243763635);
    msg.setSource(28673U);
    msg.setSourceEntity(188U);
    msg.setDestination(40520U);
    msg.setDestinationEntity(17U);
    msg.conductivity = 0.310532374229;
    msg.temperature = 0.422776940386;
    msg.depth = 0.257249487909;

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
    msg.setTimeStamp(0.313724433039);
    msg.setSource(24126U);
    msg.setSourceEntity(24U);
    msg.setDestination(64754U);
    msg.setDestinationEntity(245U);
    msg.conductivity = 0.728535196259;
    msg.temperature = 0.619151967832;
    msg.depth = 0.390235444685;

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
    msg.setTimeStamp(0.207201050796);
    msg.setSource(15322U);
    msg.setSourceEntity(229U);
    msg.setDestination(2847U);
    msg.setDestinationEntity(67U);
    msg.altitude = 0.828998721534;
    msg.roll = 28528U;
    msg.pitch = 14220U;
    msg.yaw = 36696U;
    msg.speed = 26675;

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
    msg.setTimeStamp(0.262496113276);
    msg.setSource(57121U);
    msg.setSourceEntity(100U);
    msg.setDestination(22572U);
    msg.setDestinationEntity(130U);
    msg.altitude = 0.783301140945;
    msg.roll = 22882U;
    msg.pitch = 44545U;
    msg.yaw = 12442U;
    msg.speed = 22661;

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
    msg.setTimeStamp(0.459130067784);
    msg.setSource(39868U);
    msg.setSourceEntity(67U);
    msg.setDestination(27400U);
    msg.setDestinationEntity(229U);
    msg.altitude = 0.617594488475;
    msg.roll = 58026U;
    msg.pitch = 13871U;
    msg.yaw = 40560U;
    msg.speed = 8262;

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
    msg.setTimeStamp(0.986626326456);
    msg.setSource(35399U);
    msg.setSourceEntity(61U);
    msg.setDestination(24857U);
    msg.setDestinationEntity(66U);
    msg.altitude = 0.206876996468;
    msg.width = 0.488730556778;
    msg.length = 0.539191556591;
    msg.bearing = 0.661378346704;
    msg.pxl = 15541;
    msg.encoding = 105U;
    const char tmp_msg_0[] = {-99, 75, 91, -89, -96, -4, -79, 8, 33, 123, 21, 33, 72, 48, 112, 8, 84, -55, 120, -6, -63, -40, 33, -26, 34, 5, 23, 63, 31, 88, -55, -12, 111, 108, 2, -90};
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
    msg.setTimeStamp(0.419042620774);
    msg.setSource(50009U);
    msg.setSourceEntity(106U);
    msg.setDestination(57772U);
    msg.setDestinationEntity(235U);
    msg.altitude = 0.713829677535;
    msg.width = 0.932698584972;
    msg.length = 0.261648825211;
    msg.bearing = 0.531712141811;
    msg.pxl = 8322;
    msg.encoding = 9U;
    const char tmp_msg_0[] = {-53, -10, 7, 115, 125, -108, -4, 53, -46, -25, 33, 126, -82, -3, -37, -111, 102, -61, 111, 22, -71, -117, 118, 38, -68, -106, 18, 92, -68, -25, -88, 40, -51, -10, 11, -66, 1, -16, -122, 22, -54, 106, -50, -116, 118, 47, 103, -128, 105, -79, -16, -103, -32, 57, 65, 12, 62, -24, -39, 125, 40, -71, 7, -23, -2, 106, -20, 94, 25, 7, 53, 4, 115, 100, -89, 87, 70, -18, -9, -81, 37, -17, -87, -37, 98, 62, 27, 109, -97, -51, -70, -4, -27, 106, 119, 97, 82, -91, 57, -91, 2, -41, 103, 81, 17, 43, 5, 109, -13, 74, 66, -19, -25, -14, 64, -128, 69, 10, -105, -86, 8, -30, 77, -97, -115, -123, -116, 48, 101, 86, 105, 119, -125, 10, 85, -50, 0, 22, -43, -100, 13, -12, 23, -74, -16, 119, -75, -50, -59, -42, 53, 21, -39, -59, 92, 50, -69, -49, -27, 5, -122, -20, 82, 63, 92, -65, 41, -16, -32, -24, 93, -68, -71, 10, 102, -47, 98, -24, 35, 12, -84, -102, -42, -92, 35, -94, -22, 57, 66, 50, 32, -99, -91, -63, 68, 44, -87, 65, 106, -31, 124, -88, -34, -55, -21, -125, 12, -25, 46, 95, -124, -22, -3, -55, 38, 61, 32, -126, -27, -22, -126, 87, 109, 75, -123, 10, -28, -52, -43, 25, -82, 111, 118, -81, -36, 62, -72, -98, -2, -102, 20, 118, 98, 29, 62, 29, -109, -105, -95, -30, 19, 16, 31, -54};
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
    msg.setTimeStamp(0.00471059737601);
    msg.setSource(4591U);
    msg.setSourceEntity(198U);
    msg.setDestination(3131U);
    msg.setDestinationEntity(21U);
    msg.altitude = 0.0658280764019;
    msg.width = 0.904373100014;
    msg.length = 0.209573706664;
    msg.bearing = 0.866106632332;
    msg.pxl = 17053;
    msg.encoding = 26U;
    const char tmp_msg_0[] = {-120, 6, 73, -101, 28, 114, -80, 126, -122, -45, -55, -91, -58, -104, 72, -38, -17, 89, 62, 53, 101, -5, 24, 36, -72, -89, -50, 95, -8, 6, 86, -121, 58, -117, -30, 25, 96, -2, -82, -40, 118, -80, -61, -46, -53, 15, 29, -2, -8, 111, -118, -73, -2, -51, -114, 97, -35, 72, 5, -30, 42, 107, -62, 21, -12, -28, 70, -124, 48, -82, -102, -27, 93, -84, -110, 82, -76, 115, 62, 100, -99, -109, -12, 71, -56, -69, 79, 52, -50, 48, -74, -45, -122, 72, -92, 91, -101, -26, 125, 85, -9, 29, -21, 86, -123, 45, 100, -33, -100, 117, -22, 124, 100, 125, 50, 99, 42, -32, 82, -71, -66, 106, -96, -104, 12, 61, -103};
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
    msg.setTimeStamp(0.576472513077);
    msg.setSource(46308U);
    msg.setSourceEntity(3U);
    msg.setDestination(59981U);
    msg.setDestinationEntity(58U);
    msg.text.assign("TENQNKAWDZQTNYBMHCOOQUDLDHZZPHIEBAZWIRGWCJZYBFPUCXGBGWHPTGMWKROCKCFAJIRMQFPMODJVSTWJUEKU");
    msg.type = 198U;

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
    msg.setTimeStamp(0.273795041611);
    msg.setSource(6441U);
    msg.setSourceEntity(254U);
    msg.setDestination(15461U);
    msg.setDestinationEntity(82U);
    msg.text.assign("KAFVHEOUGKANZRFVUNNLQLERCGFNCEFVAYNDEOOFUDFPDKKZOIIGHHXSKTIZAIAOARGZHQBXEITTAMGVRC");
    msg.type = 19U;

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
    msg.setTimeStamp(0.395933497532);
    msg.setSource(36778U);
    msg.setSourceEntity(13U);
    msg.setDestination(9296U);
    msg.setDestinationEntity(223U);
    msg.text.assign("LDBGDLWYHXAMCNNKOKQKKMTMKRXVMARUACYTAILUWZQJHWZYSFGFZWDKAUBDBRNTDQTXEWRCPAJTMWPOOPQOQUAVSELLF");
    msg.type = 51U;

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
    msg.setTimeStamp(0.273947192775);
    msg.setSource(40751U);
    msg.setSourceEntity(22U);
    msg.setDestination(3711U);
    msg.setDestinationEntity(35U);
    msg.parameter = 12U;
    msg.numsamples = 52U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 1922U;
    tmp_msg_0.avg = 0.969074898975;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.640801940176;
    msg.lon = 0.314811099302;

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
    msg.setTimeStamp(0.613506906846);
    msg.setSource(59925U);
    msg.setSourceEntity(2U);
    msg.setDestination(29703U);
    msg.setDestinationEntity(104U);
    msg.parameter = 19U;
    msg.numsamples = 119U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 15572U;
    tmp_msg_0.avg = 0.407886792161;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.223474332847;
    msg.lon = 0.816939257334;

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
    msg.setTimeStamp(0.969450903156);
    msg.setSource(36282U);
    msg.setSourceEntity(9U);
    msg.setDestination(27135U);
    msg.setDestinationEntity(148U);
    msg.parameter = 57U;
    msg.numsamples = 254U;
    msg.lat = 0.264561659832;
    msg.lon = 0.61632519189;

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
    msg.setTimeStamp(0.255234129247);
    msg.setSource(20810U);
    msg.setSourceEntity(145U);
    msg.setDestination(65231U);
    msg.setDestinationEntity(245U);
    msg.depth = 14586U;
    msg.avg = 0.610552869047;

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
    msg.setTimeStamp(0.105587694168);
    msg.setSource(27111U);
    msg.setSourceEntity(152U);
    msg.setDestination(20755U);
    msg.setDestinationEntity(43U);
    msg.depth = 32420U;
    msg.avg = 0.138667678489;

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
    msg.setTimeStamp(0.309675583214);
    msg.setSource(25017U);
    msg.setSourceEntity(168U);
    msg.setDestination(62444U);
    msg.setDestinationEntity(112U);
    msg.depth = 10246U;
    msg.avg = 0.164227859359;

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
    msg.setTimeStamp(0.435611275916);
    msg.setSource(40273U);
    msg.setSourceEntity(22U);
    msg.setDestination(12649U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.768340450998);
    msg.setSource(28391U);
    msg.setSourceEntity(152U);
    msg.setDestination(57628U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.0987417580108);
    msg.setSource(40717U);
    msg.setSourceEntity(132U);
    msg.setDestination(12603U);
    msg.setDestinationEntity(191U);

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
    msg.setTimeStamp(0.235748458557);
    msg.setSource(15303U);
    msg.setSourceEntity(28U);
    msg.setDestination(9798U);
    msg.setDestinationEntity(191U);
    msg.sys_name.assign("RCEXKBLGIEXTY");
    msg.sys_type = 116U;
    msg.owner = 61199U;
    msg.lat = 0.805342444078;
    msg.lon = 0.957708072516;
    msg.height = 0.299925957247;
    msg.services.assign("CAVDSFNJSDYWDQPHEIPNSYOOXZWHRLLTRVAFGWFMXFAZWKVPYDDXJFPBUUOUJTLNCZQNRHJIJGMEPJCQBLIEJGMYBNTNHAKNHUSTB");

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
    msg.setTimeStamp(0.430550559721);
    msg.setSource(739U);
    msg.setSourceEntity(19U);
    msg.setDestination(28146U);
    msg.setDestinationEntity(143U);
    msg.sys_name.assign("EWYJHPECZBBMVOCMRESOUDHOTHWDDNOXVMXNLAOJHTRFAETKTPUGEFPGLBYQFSJJRYXSYPIEBAHFDVZRKZHAJXQPOOWOUTYCILPVEDQTNYYACXVWUZGLNKCKBDWSISGIRVUMJFRPELZJKSIJFHMUWHGCVIAYNUSDQNAXFDQTGATULPHMJZPOLQQVRWCDSEKGVKKGBRUATENKGCJWSBX");
    msg.sys_type = 196U;
    msg.owner = 10523U;
    msg.lat = 0.0087530181326;
    msg.lon = 0.00743063040894;
    msg.height = 0.90293281121;
    msg.services.assign("ERPZYNYVBWWANCXCMJLTOAPKMNUCBKRPWZQXTFDUGQVOQOYBUXFYQMVRZFEKXMVBDUEUDMSODEPUGCPOJRRXWQUZKIUSWNFAIXDYCSRFPZOLSAIDSNTPSWIIIZOQWVGVHSMURCTR");

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
    msg.setTimeStamp(0.660047831165);
    msg.setSource(27028U);
    msg.setSourceEntity(111U);
    msg.setDestination(51308U);
    msg.setDestinationEntity(83U);
    msg.sys_name.assign("JQULDCSJQGOYDZRGTDQTLMAIWXOSYEROLPUKPMCTAKMFNWPQJOVOPNZEYDMYWXNMZFGSXBJTTQBUKETNFRAOACXVXHPMQLNYIFEYHUQACTHUAFBVDRZZYFBPLUSSXMKZHREWNDQHDVOSVNWLVEFPSNIF");
    msg.sys_type = 236U;
    msg.owner = 9925U;
    msg.lat = 0.568533926219;
    msg.lon = 0.654682680759;
    msg.height = 0.362996711934;
    msg.services.assign("FUCPAPNAEHSCUJHCOUSQKAVXLMBLDLCNMSLCUJNOUWXLEGLLBHZTOMHQZVBJZOTYSNKUKYRDYOFAGPRSTHTPWGWCQMKEURGJEYQXEJGQQKRA");

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
    msg.setTimeStamp(0.518143691385);
    msg.setSource(29220U);
    msg.setSourceEntity(97U);
    msg.setDestination(47839U);
    msg.setDestinationEntity(157U);
    msg.service.assign("WADGKRIBFTSAUGTMUHYLYUUAKPOVCTQXMMSGQDATRPWXVVUMPFVEWHZJTECVEZCLIELYPKZFJBMZPOIGPXJNTVZTBQCLOVUSFXQHWJWDIYNXNZKNGFVDLMSYRCBWRFANHOGJACYFEOWJVLIEBWQMANGSQWKVPXTIEJMCSLBDEYHLCPJOBCWMKOTIBQDXAYLPIZJNHNDBKAKLCQS");
    msg.service_type = 77U;

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
    msg.setTimeStamp(0.728616857126);
    msg.setSource(19706U);
    msg.setSourceEntity(20U);
    msg.setDestination(21422U);
    msg.setDestinationEntity(148U);
    msg.service.assign("SIZVWPGEPUJTWXYYDRBVXOFLTSYIBOOEWLQVESUYZVPDWOIRELGBCGQOHYJJWIAIUDHYOSZFIQTSGAHWWHXQHZVBPUUGVPRRBAVBHJDTMQFEJNGRQEQGNUUSXNBORNHMJSKHCVHPUQGXCNTCTDFAXNZFUCFKHZGBJNYLIRSOZFXALCNMBXVWWIADQMCTCLFTPKEKPAUPZXLMYJ");
    msg.service_type = 37U;

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
    msg.setTimeStamp(0.613727965462);
    msg.setSource(5474U);
    msg.setSourceEntity(8U);
    msg.setDestination(26383U);
    msg.setDestinationEntity(201U);
    msg.service.assign("TPBGHSYDLZOGTVPBJJTBQMFRZDMANVLQOOLSNIUJKAUYOIWCUMEPEZODNUSMEXLRIWSTSMNBGEYQTDDVUYSYWMCCFKEVFVRDYNSRQUE");
    msg.service_type = 176U;

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
    msg.setTimeStamp(0.850733390125);
    msg.setSource(46881U);
    msg.setSourceEntity(71U);
    msg.setDestination(36693U);
    msg.setDestinationEntity(101U);
    msg.value = 0.227444055069;

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
    msg.setTimeStamp(0.213326936216);
    msg.setSource(44252U);
    msg.setSourceEntity(190U);
    msg.setDestination(15128U);
    msg.setDestinationEntity(59U);
    msg.value = 0.829300157749;

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
    msg.setTimeStamp(0.8194640209);
    msg.setSource(26356U);
    msg.setSourceEntity(61U);
    msg.setDestination(14622U);
    msg.setDestinationEntity(94U);
    msg.value = 0.927893019526;

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
    msg.setTimeStamp(0.486881233944);
    msg.setSource(54076U);
    msg.setSourceEntity(71U);
    msg.setDestination(48034U);
    msg.setDestinationEntity(157U);
    msg.value = 0.241942807224;

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
    msg.setTimeStamp(0.0486664886258);
    msg.setSource(2048U);
    msg.setSourceEntity(153U);
    msg.setDestination(44558U);
    msg.setDestinationEntity(183U);
    msg.value = 0.948307867178;

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
    msg.setTimeStamp(0.0626806086724);
    msg.setSource(11123U);
    msg.setSourceEntity(146U);
    msg.setDestination(45060U);
    msg.setDestinationEntity(67U);
    msg.value = 0.851897379239;

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
    msg.setTimeStamp(0.562956269959);
    msg.setSource(27763U);
    msg.setSourceEntity(124U);
    msg.setDestination(52110U);
    msg.setDestinationEntity(221U);
    msg.value = 0.438884703719;

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
    msg.setTimeStamp(0.0734641115339);
    msg.setSource(5648U);
    msg.setSourceEntity(241U);
    msg.setDestination(34424U);
    msg.setDestinationEntity(13U);
    msg.value = 0.111990200579;

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
    msg.setTimeStamp(0.353604819389);
    msg.setSource(48087U);
    msg.setSourceEntity(57U);
    msg.setDestination(30381U);
    msg.setDestinationEntity(201U);
    msg.value = 0.518418772196;

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
    msg.setTimeStamp(0.371426024063);
    msg.setSource(64419U);
    msg.setSourceEntity(129U);
    msg.setDestination(767U);
    msg.setDestinationEntity(4U);
    msg.number.assign("YXTHFYNEMCMLWCDPIYWWUUMNYVHLCDDEXXOUKDQTBDZDSACEBSCRLNCTZGFUWYROAGNFRHMJQGOFPWTRILQPYBOZKZJJUIFVQDKLYCKCQRPOKETHZIDJBAMUWOSZGFXKMIUSVKZXUMPPIPEAPVNPZMJYDEJVMCNARVW");
    msg.timeout = 19548U;
    msg.contents.assign("RRXPKDCLKAFGSVPG");

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
    msg.setTimeStamp(0.597810206889);
    msg.setSource(31247U);
    msg.setSourceEntity(87U);
    msg.setDestination(58446U);
    msg.setDestinationEntity(200U);
    msg.number.assign("FBFMOFGXSRBHVMDHGLBCUKERKWZJDYOGPWYKVIAKYBIVGIYBXDZRUZRVYNPTSZTSGSXOKGIMEQNAENAJKZPPDIHEYOMWXLXKEEQUKEWACORTOXTPTXNCILNGPAKQAIBF");
    msg.timeout = 2873U;
    msg.contents.assign("NIHTFDMDSIRJYFGTUTAVVBNXMCKYIPLRWROCIKFEOMPSGOUFZGQVZTXAHALAWCFLDQHOSATEBXUAAREXJ");

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
    msg.setTimeStamp(0.626379902508);
    msg.setSource(60056U);
    msg.setSourceEntity(9U);
    msg.setDestination(27922U);
    msg.setDestinationEntity(225U);
    msg.number.assign("PANPVCZXFQZLMIWODBRBXTIVEBYRYXYQWVH");
    msg.timeout = 31242U;
    msg.contents.assign("FPAKQUCMRPEIIIPHFFUWXYRQRQVTJKQIXLGANHGZTSFJUDOSUOFRWTDLDLAGDNESBOWRDWTCMRSELQYVJQIDZSJWXHMONXALXZLBUQBKILHSKIZXTEVFNOMACVGUDOLIYVEYEYDVZSVJKIXTMBSVHQNJWHMUFCTBXKWOPBPPYCYZGMCXAETJGNX");

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
    msg.setTimeStamp(0.805543805102);
    msg.setSource(57746U);
    msg.setSourceEntity(243U);
    msg.setDestination(23723U);
    msg.setDestinationEntity(138U);
    msg.seq = 2011251570U;
    msg.destination.assign("QLOELECRABLYZCMOEUOJRPEXZVAFWTSPUREAGWTFVCJSWMVWORLJXAQRGXYULCIYPFVIAUFSOEZAVFTBFGPHSXNBCUYIRTBXPQGRGXRQPTOHMXSWJNKJIUYYHIQKKHLDNOWSZPQJUKDDTJJALZILMCFRCKODHTWCXBIXVQTZMUMAEGHMYWTHFONQNMYNPVEANUNHFYGMDSLSRIHVPKHBFKSODGINIVBCNWZBDBGZKTLZBEJE");
    msg.timeout = 7372U;
    const char tmp_msg_0[] = {55, 9, -7, 107, -50, -68, 90, -81, 103, 100, -16, -76, 114, 99, 51, 11, -1, -23, -23, 112, 81, 5, 87, 3, -57, -83, 41, 50, -42, -126, 43, 5, 57, 115, -23, 65, 18, 1, 23, 54, -58, -99, 35, -39, -61, 89, 88, -104, -58, 126, 2, -71, 66, 59, -19, 21, 29, 60, -22, 86, 113, 115, -115, -92, -78, -115, 101, -100, 125, 23, 20, 121, -98, -12, 27, 40, 119, -61, 124, 104, 92, 34, 35, -13, 106, -5, 31, -111, -95, 16, 115, -83, -108, 120, 44, -7, -15, -28, -107, 73, 5, -76, 116, -83, 10, -62, 60, 68, -107, -23, -8, 18, -25, 4, 116, 62, 100, -19, -110, 12, -27, 43, -82, -93, 8, 55, 81, -56, 71, 125, 110, 6};
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
    msg.setTimeStamp(0.877487556846);
    msg.setSource(29393U);
    msg.setSourceEntity(131U);
    msg.setDestination(29641U);
    msg.setDestinationEntity(147U);
    msg.seq = 814386400U;
    msg.destination.assign("MAFSAVJCAVUVKWCRNDQKMLXGGYXBIDSRIPPBHUEMBYJANIEOXTNZPXTOOXKRICUIHCABOOGLPMEGFCUEHZVSZZZLUVPBKCHABLGQOKYJBFSJEWTIBHHOCWQWTMYPYNZDCFEFQLWTIWKSRFZUQGHGSWKDAAYNNTWDJXFGYDNDWLMYTFXKITJRJPOLCAYPJKODZFJDRSSHRFQPUR");
    msg.timeout = 16399U;
    const char tmp_msg_0[] = {-91, -118, 81, 114, 9, 41, -91, -97, -60, -45, -98, -112, -88, -84, -48, -19, 68, 61, 21, -102, -116, -43, 63, -3, 41, 102, -116, 49, -50, 14, 12, 111, -111, 114, 38, -66, 44, -86, -62, -49, 39, 54, -106, 36, -66, 54, 80, -47, 73, 53, -102, 110, 48, -96, 56, -68, 1, 85, 23, -82, -87, -48, -56, -91, 46, -116, 41, -17, 101, 20, -85, -74, 2, -34, 81, 33, 85, -67, -21, 28, -41, 126, -104, -114, -52, -103, 49, -87, 121, -34, -124, -64, 66, -9, -18, 51, 23, 96, 119, -113, -34, 31, -115, 47, 38, -56, 3, 15, -76, -46, 54, -101, -53, 47, 122, 113, 98, -22, -29, -79, -92, 110, -104, 122};
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
    msg.setTimeStamp(0.904238952207);
    msg.setSource(15542U);
    msg.setSourceEntity(121U);
    msg.setDestination(14949U);
    msg.setDestinationEntity(189U);
    msg.seq = 3211709391U;
    msg.destination.assign("SVTTYTLOEAKZUVNOVYWIFNKHXZYGCZBJGGKOWCHUQABUWLXBEOHAGBBVFCRETVNVWQMSEGKJXFWSCNUZDSHAXLPAA");
    msg.timeout = 42144U;
    const char tmp_msg_0[] = {-55, -112, 48, 15, 58, 12, 117, -77, 115, -73, -72, -61, -60, 24, -78, -22, -108, -115, 16, 83, -123, 46, -111, 108, -28, 23, -75, 108, -16, 64, -87, -5, -95, -105, 8, 80, -41, -81, 115, -107, 67, 53, 126, 61, -14, -112, 28, 30, -57, -119, -61, -19, 73, -75, 58, -118, -109, -72, -105, -112, -90, 113, 64, -72, -7, 91, -82, 42, -110, -43, 111, 8, 70, 61, -102, -120, 54, -123, -62, 87, 6, -77, -115, -87, -2, 94, -51, -28, -105, 58, -65, 108, -42, -49, -19, 72, 109, 68, -123, -89, 55, -69, -8, -2, -64, 98, 28, 33, -24, -98, -22, -125, -121, 59, 68, 38, -66, 49, 88, 56, 2, 120};
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
    msg.setTimeStamp(0.458409640746);
    msg.setSource(27720U);
    msg.setSourceEntity(147U);
    msg.setDestination(12178U);
    msg.setDestinationEntity(143U);
    msg.source.assign("BXNBZKFPCBPWFJ");
    const char tmp_msg_0[] = {5, -1, 97, -90, 55, -26, -8, -43, -64, -72, -126, 80, 61, 37, 49, -26, 96, -5, -8, 44, 76, -71, -22, -96, 67, 119, -127, -27, -62, 43, -18, 70, -17, 50, 12};
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
    msg.setTimeStamp(0.00950474606214);
    msg.setSource(58849U);
    msg.setSourceEntity(110U);
    msg.setDestination(46927U);
    msg.setDestinationEntity(91U);
    msg.source.assign("HLQKDFNBZXLNXNCIYFDIVBRZHICSRUUYLXGPLPKAGAHCYTVSZKQYIAEUTJQQPUPCDRNAUKWLESWNCKAKDBETLNICWRHGQDHUJYAJVFGBKVOCFAJREBSZFSKYYZQBXAWORGODRGBTESOTNMKIJHXQDBWSYHFOSVOGFHMPDMTPJPWIQMBZIDLTGCVJLJUW");
    const char tmp_msg_0[] = {-37, 92, -23, -97, 32, 90, 11, -38, -108, -118, -56, -125, 112, -115, -121, 47, -1, 66, -106, -54, 29, 34, 64, -43};
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
    msg.setTimeStamp(0.347047578515);
    msg.setSource(51304U);
    msg.setSourceEntity(49U);
    msg.setDestination(46376U);
    msg.setDestinationEntity(12U);
    msg.source.assign("KXUPYMWDJTJOKFGRYKXNBFIMFPPIAWVMZVQHBFMPSACBMLNYKHDAQNDLPHRJNCGEMCNPYUOQMDZIBLUGEVEYQTGSLTZLVKQCACFPSFHLITNZSKSSBONQGEWVTWTBNPMJGRBCGAOHOAFTWYBEI");
    const char tmp_msg_0[] = {74, 20, 40, -60, 112, 81, -28, 5, 45, -48, 117, -6, -37, 50, -66, 82, -128, -75, -18, 83, -19, -94, -71, -30, 97, 6, -49, 36, 62, -74, -13, 104, -92, 88, -51, 72, 123, 1, -123, -7, 29, -81, -76, 79, 88, -85, 18, -101, -104, 6, -95, -54, 38, 90, -49, 24, -20, -6, -30, 64, -33, -89, -37, 83, -68, 1};
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
    msg.setTimeStamp(0.0963244014152);
    msg.setSource(32819U);
    msg.setSourceEntity(132U);
    msg.setDestination(24766U);
    msg.setDestinationEntity(157U);
    msg.seq = 3711877531U;
    msg.state = 251U;
    msg.error.assign("QQCKHRIXKLSAFJMZIRWTXYDIAXGXVTUVNEKTUYCZHMLINIQPHITMSTNMLGFNVZTSUUPMNLSJHFBPHXHRELKSCRAPZNJFLWWLCVCKLDORGBBGDWGJDFPROTZQYPVCBKYHNEJHXKPVCIJUQDRJMSBOOAKICKCUQUNWBWPYUCFZUDRSZDXIAWDIQHYETYJOQ");

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
    msg.setTimeStamp(0.666572696149);
    msg.setSource(63357U);
    msg.setSourceEntity(196U);
    msg.setDestination(39108U);
    msg.setDestinationEntity(224U);
    msg.seq = 3006826120U;
    msg.state = 226U;
    msg.error.assign("EEXKCEVPSBCBKZUIMLGFLFMQUJDEHCTLCAXDGTWXUMCBKFHJJQWNEJDFODUOQMLHAKIEWWLMQALHPURANCWAGPNYFOXUIQZQQHUOEVSVJKBSHVQVBZNYNICYKLTXNYEMWSLUAEYWPFLRRKGMUQOIYZJNXOVWSRWARMXWFYPGZDSZZXJZQOJKOTRRDAVCCROMKNRGOFACBBJXTUDYPBIRPDKYDTSABSHHITBFTZGITDZLVJIS");

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
    msg.setTimeStamp(0.63577066898);
    msg.setSource(62744U);
    msg.setSourceEntity(37U);
    msg.setDestination(40782U);
    msg.setDestinationEntity(235U);
    msg.seq = 585246808U;
    msg.state = 27U;
    msg.error.assign("SZAIVGSXFDZXMFAUIJERZNERVFMGXQCYWHCGROVKUK");

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
    msg.setTimeStamp(0.462446626426);
    msg.setSource(31930U);
    msg.setSourceEntity(137U);
    msg.setDestination(11968U);
    msg.setDestinationEntity(93U);
    msg.origin.assign("TSQWTIVEGRBAIPEFGRBXWPRGCJHEYBVHMYIRPVXZBYLLWYSOZUJVLFXPOYHLSH");
    msg.text.assign("SOZNFASUJRPDSSXLZVCUKXTLUUNGKWUYQZEDMYPMNSCVROTSVRCTZBZRDBFHAJTAUZ");

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
    msg.setTimeStamp(0.781737864025);
    msg.setSource(36593U);
    msg.setSourceEntity(222U);
    msg.setDestination(49722U);
    msg.setDestinationEntity(250U);
    msg.origin.assign("EDPIOVCDTMZFTSNDEQLKNPMFLEWBLXZXKKRAIEDRJEQYINDTGUTUCGKWQVKSPSWTJJEORQSPNTQGGRJRQHSVVUZABCPMOHPYGLGAVAEWIIIPMXSXAMKEJLKDMMTPHDVNQBUONHRFRBHXHAXWBXTUHGLBOCXXOUHZGQAGUWNNUPCUYQZARSBBOTSQJVIOVUKMJDELCCDRLLTOCZKYYYFAFFBZ");
    msg.text.assign("JTKSXCIJUTRCNJUVMOKTNLVZGXOGHGOJYSJHBPLMIILNYTDNRVRQCGEKMJAQWNHPLYQEWRGIQVLLQENKNFBWEYUSVTOUARVLSCUWAEGIWFFTHIWABKIAPZFAZNDPFAYZCQFTVVZSAIQBMOFUCURSSVYEOSYXE");

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
    msg.setTimeStamp(0.0362391735409);
    msg.setSource(39851U);
    msg.setSourceEntity(119U);
    msg.setDestination(64110U);
    msg.setDestinationEntity(142U);
    msg.origin.assign("LPMIPXONGURXVTAWSKYOLUSMYJLSMUPFAXEFRGFRXYUBJVMBPWQFVZVMUKTIZVHYOWLAHSMDRKROIYNBQJSJWEIYGDRKWPKA");
    msg.text.assign("FTIUGHMCNZOXTJEVLZHXIDRACXYUJDAONMYXDVDRLQGSQNQQMUJSUZJDTWUIRURTHDPKPHOMLLDKTGPMXOKNITOPJZMDFRSRHYZTYNNAMSMLQWYBAWOFZJWZKWXCSVIJDKQBZOKHRPLBEXSYCSTTRIPQMBBMYPSAEVPPIFLFNVBNWACXKPGQVTSUEKBHCBGBVYQYKXWLRZAGCULUUGNASVYLEJCEFIIFW");

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
    msg.setTimeStamp(0.541528142088);
    msg.setSource(50564U);
    msg.setSourceEntity(15U);
    msg.setDestination(39101U);
    msg.setDestinationEntity(217U);
    msg.origin.assign("HFKUYAVJWRLGRCFWMMRUAHIYZQQUJAVVXIQCLQQLFXQMULIMLRAUSWUTQDBFBVZPHYZYXZKVEIXMHPWJVKOOPYNPGIBFWAKBBPOXZQZOTEWEACPHEQEJXSEALAAGDVNBEBYNXPTCGCDKXHIFRRVUFHJCLJMCKNTVCLURLTDJDZGDSBRDGNEDETNYLOT");
    msg.htime = 0.0122254910208;
    msg.lat = 0.0818402650974;
    msg.lon = 0.0692572226617;
    const char tmp_msg_0[] = {8, -108, -24, 101, -92, 120, 65, 110, -29, -87, -69, -117, -114, -108, 63, -109, 33, 105, -79, -38, 96, 95, 16, -79, 41, 37, 38, 4, -63, -14, 61, 117, 49, 118, -128, 29, -118, -55, -103, -54, 86, -73, -57, -119, 48, 45, -95, 66, 5, -13, -20, -71, 15, 34, -38, -95, -52, 17, -54, 82, 89, 68, -81, 14, 116, -48, 106, 54, -26, 105, -69, 68, -106, -31, -38, -109, -89, -98, 48, -21, 37, -106, -38, -67, -94, 11, 113, 4, -23, -52, 30, -1, -86, 31, -9, -21, 71, -76, 4, -36, -53, -61, 122, -89, -82, -79, -20, -64, 24, 120, -113, -91, -101, -117, -20, 56, 61, 35, -69, 72, -64, -4, 107, 53, -112, -99, 58, -57, -88, 39, 126, 122, 24, -124, 4, -33, 58, 26, -9, -13, -108, 3, -81, -93, -79, 55, 22, -68, -92, 14, 58, -111, -122, -127, 53, -86, 83, -115, -59, -87, -39, -2, -23, -11, -126, 52, 58, 107, -5, 9, -87, 15, 62, -120, 79, 109, 122, -120, 27, 35, -59, -29, -120, -95, 17, -31, -121, 63, -38, 81, 100, 92, 99, -12, -91, 119, 2, 28, -67, -29, -88, 29, -118, -9, -23, -100, -76, 94, -73, -41, 50, -61, -119, 58, 77, -26, -109, -79, -24, -105, 18};
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
    msg.setTimeStamp(0.0510623119745);
    msg.setSource(25607U);
    msg.setSourceEntity(59U);
    msg.setDestination(59677U);
    msg.setDestinationEntity(135U);
    msg.origin.assign("MAOCUUVEYRQIVCYDNYEOEMQSXHAUCJSGQYVDWCBBGTGDHHCCELEUPKRWIFILYQJZIALTKLGJSKDNDMBRSMMWAPEWWXAYWOZBVVRXBTGEDLNAHFDOEMOOAPJRFBOJSKQJKNHHQXZDIXFYJZTKRNPQLRZWKBOGGRZWXISUTIANNHCPPXPFUEFCHLGGSTI");
    msg.htime = 0.362694857831;
    msg.lat = 0.324035406393;
    msg.lon = 0.15754359659;
    const char tmp_msg_0[] = {125, 34, 111, 119, 84, -56, 119, 125, -3, 119, 1, 53, 44, -35, 37, 80, 69, 2, -35, 126, -10, 9, 95, 87, 13, 122, 111, -11, 75, 1, -54, -8, 65, -109, 0, 101, -122, 104, -58, 23, -3, 9, -124, 120, -98, -100, -3, -115, -62, -65, -83, 89, 12, -58, -15, 38, 59, -65, 22, -26, -45, -114, -87, 71, -70, -21, -5, -69, -22, 17, 23, 44, 9, 14, 29, -128, 88, -115, 122, -45, 40, -60, 90, -54, -68, 51, -24, 116, 105, 79, -2, 79, -41, -49, -12, 6, 17};
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
    msg.setTimeStamp(0.404657765312);
    msg.setSource(35174U);
    msg.setSourceEntity(240U);
    msg.setDestination(60823U);
    msg.setDestinationEntity(194U);
    msg.origin.assign("DMOYOMOKTXHZPAGBSQNGRCWYJTYSFQHIYDKGDKXPEPFCWDWFHDSOIOYURRPWNADHWUZDZIRQYTRBFNSKWXVGVLAVLMEHKUCPUHEELFFBDBZTHEFNQVVHJYURCIMYQYNEQJATHGGRXLCTGUPABBVVUJHIBQNGOMFINAXVZRSLLBJVXTKCUJ");
    msg.htime = 0.873029999222;
    msg.lat = 0.054333331624;
    msg.lon = 0.279442969113;
    const char tmp_msg_0[] = {-92, -103, 66, -124, -17, 23, -47, -100, 42, -103, 58, -101, -71, -15, 125, -103, -53, 113, 9, -36, -66, -122, 37, 113, 52, 8, 57, 31, -127, 31, 29, -88, -60, 107, -27, -94, -6, 69, -98, 87, 119, -23, 121, 92, -44, -85, -58, 53, -115, -108, 55, -12, -118, 13, -38, 49, 59, -87, 43, -127, 119, 1, 49, 19, 9, 100, -23, -118, -114, -79, -108, 51, 31, -121, -95, 84, 99, -36, -60, -82, -96, 73};
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
    msg.setTimeStamp(0.672714173217);
    msg.setSource(41565U);
    msg.setSourceEntity(220U);
    msg.setDestination(19223U);
    msg.setDestinationEntity(8U);
    msg.req_id = 56809U;
    msg.ttl = 3521U;
    msg.destination.assign("DHKNOTDOUZDOTXMHUFRHEKQAYVTLACYJPQQBGLUOEHULCWQEPZJSUSSWNCRVGXCIBODVZSBEZPYEGRAFNPYKYBIRLSJXLDJBEMQEDSZOMAGHBINXAK");
    const char tmp_msg_0[] = {-8, -42, 112, 42, 6, -20, 87, -54, -12, -58, -48, -108, -13, 110, 76, -8, -7, -106, 32, -40, 35, 110, -33, 4, 124, -95, -3, 28, 66, -103, -19, -122, -85, -68, -38, 83, -35, -127, 79, 56, 121, -18, -44, 87, -1, 78, 97, 10, 42, 75, 121, 97, 62, -88, 11, 114, 59, 114, -45, 95, -59, -108, 39, -28, 68, 58, 125, -6, -40, 56, 117, 59, -65, -128, -108, -30, -65, -102, -86, 30, -80, 125, 69, 37, -74, 45, 111, 75, 96, -2, -58, -98, 54, -24, -111, 51, 26, 44, 17, -86, 17, -45, -32, 107, 120, -3, -118, 35, -69, 7};
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
    msg.setTimeStamp(0.444953647535);
    msg.setSource(59565U);
    msg.setSourceEntity(242U);
    msg.setDestination(39091U);
    msg.setDestinationEntity(48U);
    msg.req_id = 43712U;
    msg.ttl = 50879U;
    msg.destination.assign("MYMIZUKUSMDQ");
    const char tmp_msg_0[] = {85, -119, 122, 68, 34, 108, 16, -96, 16, 33, -100, -17, -23, -27, 35, -39, 25, 76, -82, -42, 90, -22, -3, 49, -126, -86, 14, -18, -48, -35, -59, -57, 103, 72, 26, -79, -114, 109};
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
    msg.setTimeStamp(0.757939006397);
    msg.setSource(57913U);
    msg.setSourceEntity(103U);
    msg.setDestination(12191U);
    msg.setDestinationEntity(179U);
    msg.req_id = 9182U;
    msg.ttl = 24184U;
    msg.destination.assign("DFRCMXKFUKYEDRDOVGUKRXJFKZAOQQIYDCVUYOXSHRQDYXGXFRLJBYNHFZIBLMGQAHIBLQSAWCUGRMOMJIKBT");
    const char tmp_msg_0[] = {-105, 53, -56, -125, -117, -96, -102, -1, 65, 120, -7, 102, -24, -104, -16, -66, 48, -12, -35, 96, 35, 0, -35, -90, -99, -2, 71, 97, 11, -114, 124, -89, 7, 52, -98, 39, -98, -122, -25, 46, 82, -124, -87, 67, 37, 30, -64, -121, -87, -3, 58, -43, -32, -78, -55, 54, 39, 15, -64, 61, 119, -17, 9, -101, -116, -36, -32, 57, -65, -106, 29, 124, -2, -88, 39, 3, 75, -111, -9, 16, -88, 101, -124, -13, -116, 44, 86, -117, 99, -101, 83, 20, -52, -75, 124, 108, -53, -118, -92, 59, 93, -64, -89, -79, -26, -32, -88, -35, 103, 6, 21, -77, -32, -79, 14, 43, 21, -1, 105, 12, -82, -57, -72, -61, 124, 18, 53};
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
    msg.setTimeStamp(0.920053065196);
    msg.setSource(49557U);
    msg.setSourceEntity(193U);
    msg.setDestination(38557U);
    msg.setDestinationEntity(234U);
    msg.req_id = 64331U;
    msg.status = 49U;
    msg.text.assign("PCCNHHYVBNWHATTSNWKGDDDDTGMRETLQCTODVRPVQKCV");

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
    msg.setTimeStamp(0.680113821409);
    msg.setSource(46075U);
    msg.setSourceEntity(126U);
    msg.setDestination(58820U);
    msg.setDestinationEntity(71U);
    msg.req_id = 2547U;
    msg.status = 192U;
    msg.text.assign("MURLVXQDXCZKGHFFRCHMGSPVTVKVUGOACLQFYUPGENKXWCFGV");

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
    msg.setTimeStamp(0.719037731504);
    msg.setSource(51006U);
    msg.setSourceEntity(85U);
    msg.setDestination(62611U);
    msg.setDestinationEntity(169U);
    msg.req_id = 54926U;
    msg.status = 152U;
    msg.text.assign("VXWZJVGVMTKLXKWNHNATESLPYFTEWTLJOUNPYCOLEAAGLXQJFQVWYQEMRYAPIICRZDMTVRIOCBOJHAHMLEACNTOKY");

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
    msg.setTimeStamp(0.0730789768537);
    msg.setSource(54021U);
    msg.setSourceEntity(182U);
    msg.setDestination(19903U);
    msg.setDestinationEntity(17U);
    msg.group_name.assign("XDNJBSMTAXQJVHQUGGBZZXQZNMQQWFYAAVWPRDQCOYURSMCYLLWRBOHEGBZRMHHLXOIPMKDAPDYKCGYMOIEVVHARDUADYFEUJTOIUVTFIIOJETHHPQYGWZREULKIJLIIVALHSOMQHNXSYBGALKFSSNTWTUNRUJAZD");
    msg.links = 3791541365U;

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
    msg.setTimeStamp(0.962566762796);
    msg.setSource(2121U);
    msg.setSourceEntity(204U);
    msg.setDestination(20736U);
    msg.setDestinationEntity(254U);
    msg.group_name.assign("LYOSRHBTMWVPAKRQGEVUYEDQNBLPFXPATEQXGFLHWRATOWHUDDTQJLDSFNGIUBZREZWSHZQLSJBW");
    msg.links = 1528270243U;

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
    msg.setTimeStamp(0.601541128936);
    msg.setSource(45774U);
    msg.setSourceEntity(86U);
    msg.setDestination(20009U);
    msg.setDestinationEntity(27U);
    msg.group_name.assign("OLAHMFJYQSMIFVOGDPWLLBWNYQGECHXQXAUDZDKRPBISMHJCI");
    msg.links = 976197235U;

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
    msg.setTimeStamp(0.52422834324);
    msg.setSource(53051U);
    msg.setSourceEntity(250U);
    msg.setDestination(5115U);
    msg.setDestinationEntity(21U);
    msg.groupname.assign("LBHIQNWZGTOKEGVIEPXTREKNHVLMGYRCOIMLVMZZUODKICRAFAGOQSNRQJCGTNSZUXMAAHFXDZGBJLHWUYIKPSMZGHFSPUWNVIBAYWJPAZRWHIRFLKDUOJGWWXQOSXLRXTPBSQCUQEKCAOVKWTXVYACQTYQNKQHBFSPUSVICNGXZVRO");
    msg.action = 10U;
    msg.grouplist.assign("YJCQNJEVBLPWJPMBZMXDEZVCRSRXIGIYGEZYTWFOHBFCFRDSPTQTIFBFAGINCUBGXASJRNNQVRUNOHMNQDJAPTFBIKJNSLPCVDOSOKLKULYGISTRXQOYKAKDKFWQUMADMZZMWLQXHWVTUCSMDPGYXHJQTFGEVYOEKGHCDELCJRHPOZFTWHGOAIBUSOWAJESYUXZAPVLCEKXLXKWLBQZJLUBRNNBEXEHIIVTDKTFVYWWHSPYUOCDHZURIGV");

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
    msg.setTimeStamp(0.332877976285);
    msg.setSource(22767U);
    msg.setSourceEntity(214U);
    msg.setDestination(38259U);
    msg.setDestinationEntity(237U);
    msg.groupname.assign("IQUXGCOUYGMROLYQXLLDCCQIGSRJWTXNVKBCCPRIOFOFHQSOPJENKEWFYTFHHTMWSSFRVVUSTARTWACXOYKLHDAADJLPNYQORQPDMGIHTAZXXBYZFGAWQEXPSITEBZUMJLXPIU");
    msg.action = 0U;
    msg.grouplist.assign("LHPJCUIVPACLBLDCZSONKTNLMUVPYWQPJJVSRZNPHZZWWQNKHTSZJDXDDKFKCSWMMYLTHCUAJEO");

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
    msg.setTimeStamp(0.0376696071056);
    msg.setSource(21587U);
    msg.setSourceEntity(212U);
    msg.setDestination(26526U);
    msg.setDestinationEntity(195U);
    msg.groupname.assign("VNKTNHKKJJTGHPYWZNCMIPPNRUGJAVBTSLJALVODGZNPXBCBELHKQSWHAABRADTZZEGMBWPEUVCLRRIXVNMAVOOCHTZYCXOUFJZSVWEDLRSFQPBKHDZNFXTHTDSJIUYJWIXXDKHORQAJIHUBPILAFI");
    msg.action = 192U;
    msg.grouplist.assign("SENXFUNPEZUJWODTDSWEKGBRMAYUMYAQSHVKMFVIZTNHESBUOQQRGPNYGWEMKYCWUKVXYQVCCLJGF");

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
    msg.setTimeStamp(0.648430850618);
    msg.setSource(43779U);
    msg.setSourceEntity(42U);
    msg.setDestination(19426U);
    msg.setDestinationEntity(240U);
    msg.value = 0.805990914875;
    msg.sys_src = 47104U;

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
    msg.setTimeStamp(0.752707348324);
    msg.setSource(2274U);
    msg.setSourceEntity(109U);
    msg.setDestination(25219U);
    msg.setDestinationEntity(198U);
    msg.value = 0.30495762594;
    msg.sys_src = 57418U;

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
    msg.setTimeStamp(0.715064095179);
    msg.setSource(44136U);
    msg.setSourceEntity(189U);
    msg.setDestination(54240U);
    msg.setDestinationEntity(93U);
    msg.value = 0.883235581013;
    msg.sys_src = 35884U;

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
    msg.setTimeStamp(0.394493614427);
    msg.setSource(33187U);
    msg.setSourceEntity(54U);
    msg.setDestination(18230U);
    msg.setDestinationEntity(221U);
    msg.value = 0.406973788249;
    msg.units = 155U;

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
    msg.setTimeStamp(0.254058443839);
    msg.setSource(33085U);
    msg.setSourceEntity(236U);
    msg.setDestination(20572U);
    msg.setDestinationEntity(35U);
    msg.value = 0.752725786851;
    msg.units = 21U;

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
    msg.setTimeStamp(0.19631860794);
    msg.setSource(16733U);
    msg.setSourceEntity(71U);
    msg.setDestination(50589U);
    msg.setDestinationEntity(72U);
    msg.value = 0.680091122188;
    msg.units = 32U;

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
    msg.setTimeStamp(0.753643646544);
    msg.setSource(12469U);
    msg.setSourceEntity(230U);
    msg.setDestination(14027U);
    msg.setDestinationEntity(119U);
    msg.base_lat = 0.228670679118;
    msg.base_lon = 0.942391055674;
    msg.base_time = 0.252356866739;

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
    msg.setTimeStamp(0.688455423277);
    msg.setSource(61966U);
    msg.setSourceEntity(45U);
    msg.setDestination(20051U);
    msg.setDestinationEntity(222U);
    msg.base_lat = 0.0805473959876;
    msg.base_lon = 0.0207759460851;
    msg.base_time = 0.0457051919601;

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
    msg.setTimeStamp(0.756372228313);
    msg.setSource(59459U);
    msg.setSourceEntity(133U);
    msg.setDestination(31787U);
    msg.setDestinationEntity(251U);
    msg.base_lat = 0.550044269994;
    msg.base_lon = 0.696877501007;
    msg.base_time = 0.762148366931;

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
    msg.setTimeStamp(0.861790671765);
    msg.setSource(17808U);
    msg.setSourceEntity(231U);
    msg.setDestination(34031U);
    msg.setDestinationEntity(85U);
    msg.base_lat = 0.521213435805;
    msg.base_lon = 0.800137151037;
    msg.base_time = 0.985602316438;
    const char tmp_msg_0[] = {-21, -38, 111, 3, -3, 44, 63, -61, -33, 89, 41, -118, -68, 99, -124, 67, -66, -79, 68, -63};
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
    msg.setTimeStamp(0.804215603226);
    msg.setSource(21233U);
    msg.setSourceEntity(35U);
    msg.setDestination(27765U);
    msg.setDestinationEntity(132U);
    msg.base_lat = 0.833693881312;
    msg.base_lon = 0.571132623163;
    msg.base_time = 0.909766760735;
    const char tmp_msg_0[] = {109, 57, 101, -36, -20, 124, 61, -15, 93, -45, 57, 98, 11, 56, -69, 6, -87, -91, 44, -20, 101, -75, -110, 26, -8, 18, -22, 14, -105, -9, -91, 74, 16, -48, 64, 63, 32, -115, 80, 19, 71, 107, 11, 91, 15, 9, -6, 56, -79, -43, 98, 79, 90, -102, -42, -90, 76, -17, 117, 59, -95, 44, -119, -103, 72, 67, 80, -93, 28, -79, 99, 117, -97, -84, -14, 81, 70, 36, -123, 118, 44, -29, -35, -63, 0, -109, -102, -77, -94, -116, 72, 65, 72, -68, 29, 2, -3, 95, 40, -63, 82, 112, -38, 112, -25, -24, -102, 42, -79, -104, -55, -21, 69, 122, 10, 67, -117, -14, 2, 11, -97, 123, -28, 23, 85, -77, -90, 122, -77, 11, -26, -60, 123, -38, -64, 30, -118, 21, 72, 22, 80, 38, -95, 109, -64, 48, -77, 55, -122, -55, -8, 34, 89, 85, -88, 8, 27, -7, 126, -127, 51, -66, -25, -82, 106, -93, -24, -110, 41, 104, 93, 81, 84, 14, 126, -71, -58, 108, -17, -12, -7, -64, -85, 37, 26, -5, 115, -79, -62, -102, -84, 37, 105, 36, 77, 66, -127, 86, -50, 20, 54, -28, -106, -55, 15, -43, -118, -30, 32, 104, 31};
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
    msg.setTimeStamp(0.878478021327);
    msg.setSource(39950U);
    msg.setSourceEntity(30U);
    msg.setDestination(33371U);
    msg.setDestinationEntity(236U);
    msg.base_lat = 0.231576376886;
    msg.base_lon = 0.510765584287;
    msg.base_time = 0.255128449034;
    const char tmp_msg_0[] = {22, -15, 11, -90, -99, -117, 86, 49, 115, -23, -76, -11, 113, -111, 96, 58, -6, -91, -106, 11, 86, -48, -78, 115, 97, 73, -120, -78, -9, -17, 85, 88, -56, 67, -105, 6, -106, 14, -43, 45, -95, -62, -52, 3, 15, -70, 5, 104, -105, 56, -60, -103, -59, -6, 0, -97, -7, -112, -5, -113, 79, 61, 26, 12, -127, 64, 72, -31, -126, 72, -28, 122, 84, 5, 32, 91, -44, 48, -82, -31, -64, -87, 49, 24, 81, -5, 97, -87, -43, 34, 125, -126, 60, 44, 38, -8, 109, 2, -3, 58, 126, -126, -7, 120, 20, 66, -119, -74, -45, -115, -71, 18, 15, 41, 77, -35, -94, -104, -121, -126, 95, 70, -8, 115, -48, 19, 78, -34, 80, 13, 114, 102, 5, -116, -114, -105, 83, 90, -5, 57, 60, 0, -63, 107, -10, -18, 105, 22, 5, 30, 52, -99};
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
    msg.setTimeStamp(0.319531065859);
    msg.setSource(23604U);
    msg.setSourceEntity(83U);
    msg.setDestination(19409U);
    msg.setDestinationEntity(199U);
    msg.sys_id = 13750U;
    msg.priority = -15;
    msg.x = 13216;
    msg.y = -18475;
    msg.z = 4750;
    msg.t = -10676;
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("JYXHTPRLGXRBVDJEFFJAIUHFAVDGMAJDUYJMMEVZFZLOXSUPOMXCQJNFGXGWBSYOQLIRGJNHIZQYIZPJMWJMRHRZLIAMATOCWFKRSSLFRAIOXHTDYCAXKGGEWDURKXNAUJVGKFQLTPUQBBOFYWKCKGREYWHBVOMBBITPDAENVDHEBTON");
    tmp_msg_0.visibility.assign("BVMWBXOTQMJVYPXYRCGP");
    tmp_msg_0.scope.assign("GSEUKYMCIAJADFQOWYRJWGBXCDHUEYHXLISNEZKTPWVIKHHNHANHJTLGSXOOXCJXDVXGXSADBAGIYYUZPTWYFCHZFPNURYVWFDBCECWYGSLBHUEVQMONJGDQBGKMTMZCDTKHBVMCFJOP");
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
    msg.setTimeStamp(0.190982880425);
    msg.setSource(58180U);
    msg.setSourceEntity(97U);
    msg.setDestination(25224U);
    msg.setDestinationEntity(48U);
    msg.sys_id = 8805U;
    msg.priority = -96;
    msg.x = 32551;
    msg.y = -15666;
    msg.z = -4481;
    msg.t = 26123;
    IMC::Pressure tmp_msg_0;
    tmp_msg_0.value = 0.911152151777;
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
    msg.setTimeStamp(0.405988697912);
    msg.setSource(37264U);
    msg.setSourceEntity(206U);
    msg.setDestination(26988U);
    msg.setDestinationEntity(142U);
    msg.sys_id = 37047U;
    msg.priority = 117;
    msg.x = 16572;
    msg.y = -19024;
    msg.z = -4420;
    msg.t = -4269;
    IMC::SaveEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("XAEHXVQJSAWHQYPIDXRKCSBGRXQNIRIIATNTFWPLQZXBUJKTQMHCECKIZXYMSHE");
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
    msg.setTimeStamp(0.182656096518);
    msg.setSource(48415U);
    msg.setSourceEntity(206U);
    msg.setDestination(50337U);
    msg.setDestinationEntity(175U);
    msg.req_id = 27106U;
    msg.type = 208U;
    msg.max_size = 6327U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.0607115768856;
    tmp_msg_0.base_lon = 0.881582984644;
    tmp_msg_0.base_time = 0.822473304222;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 16241U;
    tmp_tmp_msg_0_0.priority = 16;
    tmp_tmp_msg_0_0.x = -5453;
    tmp_tmp_msg_0_0.y = 11914;
    tmp_tmp_msg_0_0.z = 21918;
    tmp_tmp_msg_0_0.t = -21640;
    IMC::PlanControl tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.type = 76U;
    tmp_tmp_tmp_msg_0_0_0.op = 186U;
    tmp_tmp_tmp_msg_0_0_0.request_id = 35538U;
    tmp_tmp_tmp_msg_0_0_0.plan_id.assign("ANFCTXNJQNQXQSWJIUJFPGSAGTHTSKDXQOGCWMQMMBKLCUVZPLMZEXLOGXMDXYSFEPUNGME");
    tmp_tmp_tmp_msg_0_0_0.flags = 33993U;
    IMC::LblRange tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.id = 107U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.range = 0.36234998183;
    tmp_tmp_tmp_msg_0_0_0.arg.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.info.assign("EDFXFIYPLFGEMAXYZDYZFBLBMJRJAURGZLLBJLOQVZUVBBRWQVRWTEQHXWSFFLKETAUFCTIXKNDDGWXCXRVKRTSKJQCGUOTHHOVVMTMYQVMVDBNJTTNEIEZASQKNPAUDGAWXUGLSNXCRSPKFPSSJCWJQIEGJEAQOPHCKYVFNSN");
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.397743704848);
    msg.setSource(56959U);
    msg.setSourceEntity(48U);
    msg.setDestination(10801U);
    msg.setDestinationEntity(88U);
    msg.req_id = 28971U;
    msg.type = 118U;
    msg.max_size = 17905U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.811086618882;
    tmp_msg_0.base_lon = 0.485335737115;
    tmp_msg_0.base_time = 0.330401477359;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 34847U;
    tmp_tmp_msg_0_0.priority = -81;
    tmp_tmp_msg_0_0.x = -14749;
    tmp_tmp_msg_0_0.y = 1546;
    tmp_tmp_msg_0_0.z = 26592;
    tmp_tmp_msg_0_0.t = 21020;
    IMC::PulseDetectionControl tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.op = 181U;
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
    msg.setTimeStamp(0.0979967461948);
    msg.setSource(61588U);
    msg.setSourceEntity(143U);
    msg.setDestination(42524U);
    msg.setDestinationEntity(69U);
    msg.req_id = 3178U;
    msg.type = 225U;
    msg.max_size = 61720U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.219441343018;
    tmp_msg_0.base_lon = 0.271245853764;
    tmp_msg_0.base_time = 0.812939695207;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 33011U;
    tmp_tmp_msg_0_0.priority = 19;
    tmp_tmp_msg_0_0.x = -21622;
    tmp_tmp_msg_0_0.y = 26806;
    tmp_tmp_msg_0_0.z = 6700;
    tmp_tmp_msg_0_0.t = -13060;
    IMC::AcousticRequest tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.req_id = 50212U;
    tmp_tmp_tmp_msg_0_0_0.destination.assign("GGIYXPCLLX");
    tmp_tmp_tmp_msg_0_0_0.timeout = 0.673542559906;
    tmp_tmp_tmp_msg_0_0_0.range = 0.214916411181;
    tmp_tmp_tmp_msg_0_0_0.type = 164U;
    IMC::RowsCoverage tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lat = 0.395665195671;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lon = 0.231490166847;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z = 0.599894951097;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z_units = 19U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed = 0.266554222403;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed_units = 75U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.bearing = 0.553015666578;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.cross_angle = 0.176039794307;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.width = 0.758176609624;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.length = 0.637804768665;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.coff = 120U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.angaperture = 0.731354098716;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.range = 52989U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.overlap = 9U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.flags = 111U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.custom.assign("IVWAPDHNRSPSJNVYZSFKQPKHZPQHTTOYJGOWMTQUDBABCWFDWAFORMVKXIXJMMGRNKONGXXXKCSV");
    tmp_tmp_tmp_msg_0_0_0.msg.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_msg_0_0.sample.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.301437268441);
    msg.setSource(53444U);
    msg.setSourceEntity(130U);
    msg.setDestination(21161U);
    msg.setDestinationEntity(212U);
    msg.original_source = 42171U;
    msg.destination = 60750U;
    msg.timeout = 0.466204955267;
    IMC::CrudeOil tmp_msg_0;
    tmp_msg_0.value = 0.257411771037;
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
    msg.setTimeStamp(0.300944810411);
    msg.setSource(33660U);
    msg.setSourceEntity(46U);
    msg.setDestination(6758U);
    msg.setDestinationEntity(126U);
    msg.original_source = 31372U;
    msg.destination = 49820U;
    msg.timeout = 0.335893504986;
    IMC::ReportControl tmp_msg_0;
    tmp_msg_0.op = 147U;
    tmp_msg_0.comm_interface = 154U;
    tmp_msg_0.period = 3139U;
    tmp_msg_0.sys_dst.assign("FXIJZYFQRUCFYOZYJXMDGGBQMIHVPIDTAFUYOJLOEXPJAHMOEBBHPOFXTRRQVUUWFRVEKCZNVIPWAYAMTCLDNPCORRUWWJVVAENVNETJHOLYCLICKCSWNKZD");
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
    msg.setTimeStamp(0.263912012948);
    msg.setSource(61905U);
    msg.setSourceEntity(170U);
    msg.setDestination(35466U);
    msg.setDestinationEntity(179U);
    msg.original_source = 30360U;
    msg.destination = 65012U;
    msg.timeout = 0.0954483646964;
    IMC::RemoteState tmp_msg_0;
    tmp_msg_0.lat = 0.555943230698;
    tmp_msg_0.lon = 0.687270850473;
    tmp_msg_0.depth = 166U;
    tmp_msg_0.speed = 0.629478970244;
    tmp_msg_0.psi = 0.720442881232;
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
    msg.setTimeStamp(0.244770815142);
    msg.setSource(56881U);
    msg.setSourceEntity(50U);
    msg.setDestination(39620U);
    msg.setDestinationEntity(116U);
    msg.type = 20U;
    msg.comm_interface = 60433U;
    msg.model = 51474U;
    msg.list.assign("QMVHRMELPXOOZBMIRABKQRYIIHDETZYENGWYHLLDNHOEBQT");

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
    msg.setTimeStamp(0.13808122512);
    msg.setSource(26164U);
    msg.setSourceEntity(190U);
    msg.setDestination(40144U);
    msg.setDestinationEntity(110U);
    msg.type = 150U;
    msg.comm_interface = 61184U;
    msg.model = 18316U;
    msg.list.assign("YHHVOGUGCJRVNQWWYFPSNCAUIKLPUPHOJWXPCMGGCVJYAMDQXTARWXCHKFMRSAJQALBNWCULSWALOEENHBKQAWZSMQYRNXTDDODUTVKFUKNDIMBRXQCNJGABEPHCYE");

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
    msg.setTimeStamp(0.155609185081);
    msg.setSource(10074U);
    msg.setSourceEntity(93U);
    msg.setDestination(23700U);
    msg.setDestinationEntity(55U);
    msg.type = 245U;
    msg.comm_interface = 5102U;
    msg.model = 47344U;
    msg.list.assign("UOEWQZHHDJ");

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
    msg.setTimeStamp(0.286076695708);
    msg.setSource(20118U);
    msg.setSourceEntity(195U);
    msg.setDestination(18243U);
    msg.setDestinationEntity(196U);
    msg.type = 71U;
    msg.req_id = 1517795568U;
    msg.ttl = 53576U;
    msg.code = 222U;
    msg.destination.assign("JICLCTLKPZDMQLAXPWXFTDZMBJAKQEPGIWYOMTGOEEOYHIIDHYJVDGXJHKUENJTBGIVLHPACSUAZOMUYCHITVQKLDMNXWGENWBJSQ");
    msg.source.assign("NPGPBJWYPSHFNFNDKQMVMUNUIRUTDOOJIXHOJRGZWQTADAQFOJPSCNPXEGAUGILQWPHLFLSRRTLNAODIQTSQQVMMLARDXBYBGEPH");
    msg.acknowledge = 136U;
    msg.status = 86U;
    const char tmp_msg_0[] = {82, 70, 21, 108, -86, -74, -107, -120, -91, -2, 96, 23, 112, -113, 124, -105, -88, 54, 117, 106, 87, 91, -10, -119, 82, 32, -19, 54, -70, 97, 42, 5, -36, 34, 33, 12, -10, -38, 31, 123, 4, -17, 80, -82, 6, 41, 125, 122, 120, -118, 4, -14, 85, -14, -56, 63, 95, 34, -122, 36, -108, -111, 89, -85, -117, -63, 10, -51, -65, 11, 92, -31, 25, 44, -98, -82, 113, 87, 12, -55, -95, -103, -13, 110, -104, 76, -33, -102, 38, 17, 53, 75, -39, 77, 88, 86, -103, 103, 41, -10, -95, -58, -103, 69, 79, -34, -108, -108, 35, 125, -111, -114, -6, -50, -26, -56, 54, 73};
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
    msg.setTimeStamp(0.742833703661);
    msg.setSource(2780U);
    msg.setSourceEntity(233U);
    msg.setDestination(17974U);
    msg.setDestinationEntity(114U);
    msg.type = 52U;
    msg.req_id = 2857291387U;
    msg.ttl = 62531U;
    msg.code = 101U;
    msg.destination.assign("TPVCKEBBSUMBKUPBRUPGGFPZVCNZQGYJHHGMTFSXGNXZV");
    msg.source.assign("UUCKKFGGJQDEHMYMIHRJICPYMZPXYQOKXVZNAUCSNDDECSMVPXDDJQOHWOBIXFFJBBOMONJAGXKPNHRBIOTNBIBYQFQFIIAHKTVJWUZLFTSRRLIXYSTPRVJEKSMILBGLECCTPFHBTJERULACHXZPRRQAAEAYNPRTMG");
    msg.acknowledge = 84U;
    msg.status = 159U;
    const char tmp_msg_0[] = {-92, -15, -100, 97, 15, 9, -24, 33, -120, 54, -17, 122, 48, 115, -60, 16, 104, 16, 105, 47, 117, 99, -86, 28, -50};
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
    msg.setTimeStamp(0.489511825492);
    msg.setSource(48923U);
    msg.setSourceEntity(189U);
    msg.setDestination(59536U);
    msg.setDestinationEntity(131U);
    msg.type = 245U;
    msg.req_id = 564189130U;
    msg.ttl = 56501U;
    msg.code = 97U;
    msg.destination.assign("KXRFAVWWLJZUILPGXNZIWRBSNTOBBTHFNXMPHTTXAKRZTBVRAJSR");
    msg.source.assign("SNEKOYFHSSPDUKBVJLVUFSGNNDAYANQVEBPNYJDHDEBXKQBAIBKICBYXBJBEJMMFIUOEFYDCVKTSQODTWDTPUFRAHTIPLLYGJCHEPMZINQMQQXZKWVCSNHRURRRZMT");
    msg.acknowledge = 232U;
    msg.status = 43U;
    const char tmp_msg_0[] = {76, 49, 16, -22, 26, -75, -9, -30, -16, -25, 32, 14, -97, -51, -48, -95, 94, 50, 62, -112, 124, 11, -75, 0, 98, 58, -97, 38, 92, -45, 40, 22, 4, -101, 15, 86, 40, -67, -64, -79, 64, -48, -59, -65, 16, 53, -71, 34, 34, 67, 61, 110, -94, -77, 122, -74, 37, -47, 105, 119, -79, -72};
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
    msg.setTimeStamp(0.090150792685);
    msg.setSource(27392U);
    msg.setSourceEntity(179U);
    msg.setDestination(12715U);
    msg.setDestinationEntity(23U);
    msg.id = 233U;
    msg.range = 0.737375913987;

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
    msg.setTimeStamp(0.498168510656);
    msg.setSource(47013U);
    msg.setSourceEntity(113U);
    msg.setDestination(44577U);
    msg.setDestinationEntity(203U);
    msg.id = 9U;
    msg.range = 0.495672303243;

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
    msg.setTimeStamp(0.181625498325);
    msg.setSource(63800U);
    msg.setSourceEntity(146U);
    msg.setDestination(7914U);
    msg.setDestinationEntity(240U);
    msg.id = 106U;
    msg.range = 0.477253563788;

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
    msg.setTimeStamp(0.96676631003);
    msg.setSource(44436U);
    msg.setSourceEntity(99U);
    msg.setDestination(3756U);
    msg.setDestinationEntity(73U);
    msg.beacon.assign("WKRLMLJMNAXNEEPZWZBIGBDOFZZGDVUHXFXBSRXZBGQOHKASASQOFDICYKNVKRHSCEROHHVUIOGQQXPLVXWWKAAGHYLWKDAIPTLLLNHFXMDIDFMACBPSSYLNFYEIAVECXTMJOODIJKRJBMIGFGIUBTTJJPTXCNZFTCUZZPGJTEFNJQRYAQPSLDKRNQYEEWBGFTURHDSICCZQKXM");
    msg.lat = 0.954203311138;
    msg.lon = 0.19513384339;
    msg.depth = 0.845967010671;
    msg.query_channel = 38U;
    msg.reply_channel = 61U;
    msg.transponder_delay = 100U;

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
    msg.setTimeStamp(0.177121670726);
    msg.setSource(3909U);
    msg.setSourceEntity(7U);
    msg.setDestination(37346U);
    msg.setDestinationEntity(147U);
    msg.beacon.assign("KKHQZUXOADRASDNJKIJVCWPYWLUIFUYJUMUVTHGSCNHIVDQBZZNFAASICPWBDDBURHEFRRMOWLQ");
    msg.lat = 0.244013272721;
    msg.lon = 0.0482856491116;
    msg.depth = 0.25393270507;
    msg.query_channel = 92U;
    msg.reply_channel = 247U;
    msg.transponder_delay = 33U;

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
    msg.setTimeStamp(0.190321067053);
    msg.setSource(3405U);
    msg.setSourceEntity(28U);
    msg.setDestination(10891U);
    msg.setDestinationEntity(254U);
    msg.beacon.assign("HZKVXRICTYIZENWKJLPPHARDTLHJYFJGOIRGOISOWXSEBBCJYMMLWZOVMOCJANGOMPFFDLHKWHHILPLXYYQWXVLXVXYNOUKKKXENAPMADJSGFASLRANZJVGNXAEWTSTPGFIUDBWCIBIVLXKGNMZVUCCUHJBGDCUQK");
    msg.lat = 0.760424388037;
    msg.lon = 0.190929203375;
    msg.depth = 0.396718462541;
    msg.query_channel = 161U;
    msg.reply_channel = 128U;
    msg.transponder_delay = 7U;

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
    msg.setTimeStamp(0.0248829089737);
    msg.setSource(10414U);
    msg.setSourceEntity(7U);
    msg.setDestination(35272U);
    msg.setDestinationEntity(71U);
    msg.op = 174U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RCHQFYCWOTSGQWRBBDEIGYGJAZDPFFXTNZSCGHKQQMNZKXSVWEDJHDATMKOUONHRTUYDKRFRQOXIXLIDKTLIGWACAVSIXPAOLZLHOVCYIPVQFEEBYOUTWMPDXIQJVHADRPYXXZTLNJFHJCAYQNCKYJJBDRLBFRKJSOEUSNCZEOWMLFHEWKTUEWHBINHULGOMJNAKLRCSRGZVFVAUUEPEBMI");
    tmp_msg_0.lat = 0.139647431237;
    tmp_msg_0.lon = 0.48422070622;
    tmp_msg_0.depth = 0.610208969976;
    tmp_msg_0.query_channel = 107U;
    tmp_msg_0.reply_channel = 127U;
    tmp_msg_0.transponder_delay = 37U;
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
    msg.setTimeStamp(0.485832265384);
    msg.setSource(45872U);
    msg.setSourceEntity(42U);
    msg.setDestination(21000U);
    msg.setDestinationEntity(2U);
    msg.op = 140U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JVAYBSPGZWRASABXFCEHWYPXIWRZXDVVMSDJHHRMCLNFKGYWLDJMFRYBHBLNXKPRMWTQDRRGYEHTAXHUZXAOOTZOUSINDTISNFDFGNTWMGMUWDQKNJYJKBPUINQRLLWQQJWJQIYYSDOFSMALVVSQAUEVCFCGNBJGTOZQCJZOFKFVMXZNKXPPAOVNRPQSACEHIGLZICKHPTKXCPCEKGJLKEIEWAUYUFBSOTDBUZRQOELCPLTZMEUD");
    tmp_msg_0.lat = 0.0788393827976;
    tmp_msg_0.lon = 0.768011281054;
    tmp_msg_0.depth = 0.918699981821;
    tmp_msg_0.query_channel = 238U;
    tmp_msg_0.reply_channel = 128U;
    tmp_msg_0.transponder_delay = 162U;
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
    msg.setTimeStamp(0.511736946557);
    msg.setSource(16513U);
    msg.setSourceEntity(172U);
    msg.setDestination(5841U);
    msg.setDestinationEntity(103U);
    msg.op = 252U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EOHSIIYLPEBGEHQPWWPTKAZZDYBMQNDHVDNPCPZTJGAHZSNFWDTKCLIMGEOJGVGVTKVMLOAAMXSWBNLQFGALSIDTXJRRFUPNSRNYPRPQJMTASBVQZDMNGWQSAKDMYWZQGDLAVTFIYIRRRJJNBOAOERUVSJQVGTUCABMWFLKXZHXIBQUKUCWKXWQDBLEHZKEBVYKYKCRCHUGUPXFULOFZCIXNXYVFYF");
    tmp_msg_0.lat = 0.829715516489;
    tmp_msg_0.lon = 0.771205756467;
    tmp_msg_0.depth = 0.949944701382;
    tmp_msg_0.query_channel = 62U;
    tmp_msg_0.reply_channel = 148U;
    tmp_msg_0.transponder_delay = 59U;
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
    msg.setTimeStamp(0.40789528002);
    msg.setSource(28114U);
    msg.setSourceEntity(91U);
    msg.setDestination(23918U);
    msg.setDestinationEntity(219U);
    IMC::EntityState tmp_msg_0;
    tmp_msg_0.state = 177U;
    tmp_msg_0.flags = 196U;
    tmp_msg_0.description.assign("QSJXBAPHLYGAJVVFKFFSCYKCYOZCBCRIOTNNMGWKSHCNAVSTIBFZRZGNRMQMERETMVFKWQEGTXIDXNODCAUWEEEIGYLUFEMWELJOHFZVPPFOUIVICLLXMBMQTRZDNWVHF");
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
    msg.setTimeStamp(0.95012485256);
    msg.setSource(47012U);
    msg.setSourceEntity(31U);
    msg.setDestination(61108U);
    msg.setDestinationEntity(208U);
    IMC::GpsFix tmp_msg_0;
    tmp_msg_0.validity = 7081U;
    tmp_msg_0.type = 194U;
    tmp_msg_0.utc_year = 46911U;
    tmp_msg_0.utc_month = 176U;
    tmp_msg_0.utc_day = 23U;
    tmp_msg_0.utc_time = 0.050320992536;
    tmp_msg_0.lat = 0.321175209101;
    tmp_msg_0.lon = 0.85191535168;
    tmp_msg_0.height = 0.552281005472;
    tmp_msg_0.satellites = 39U;
    tmp_msg_0.cog = 0.647916768996;
    tmp_msg_0.sog = 0.972243290521;
    tmp_msg_0.hdop = 0.549351820524;
    tmp_msg_0.vdop = 0.576874161189;
    tmp_msg_0.hacc = 0.0205160594489;
    tmp_msg_0.vacc = 0.830353357567;
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
    msg.setTimeStamp(0.93481914647);
    msg.setSource(14156U);
    msg.setSourceEntity(136U);
    msg.setDestination(8838U);
    msg.setDestinationEntity(177U);
    IMC::Phycocyanin tmp_msg_0;
    tmp_msg_0.value = 0.608337539425;
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
    msg.setTimeStamp(0.0820766683347);
    msg.setSource(52498U);
    msg.setSourceEntity(233U);
    msg.setDestination(33579U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.905853645232;
    msg.lon = 0.892801700814;
    msg.depth = 0.280340993669;
    msg.sentence.assign("SFXHBRJEDJLECHCMMDHONLTFLXBIVJSAYCABYYCBYFEGDNZJFADGZIKHLICGLXQHUZSFNMWRBMKOPJYODURTVMKSUORPBRTHRMHFUQKAPTDAJEFPEAKUJOWMUZSTLPCCUHEPGVTAROHEIDEFXZRWBLSLNQQFSKPXVSQFOPRUMRIYADILKBNVMUWGWSZKQXEPLGZNXIETJZWIXDWYPYVNWUIGCBCBNXNWDZQWVKKVGTOHCTGIYQ");
    msg.txtime = 0.0918172672926;
    msg.modem_type.assign("HVHBCEUGJVDXDTSTEHMDBVBHEBTVOURGKGZPWLIQHNWZTHYXIJYFABFUKUSOFKYAAYVQZPCZZZUSTDJPTSWXKXBFOSZRIUSQWQKGDRWRYEYHOCTXUBNCJMFSBMDNLCZMDVJUOMFZNBIVNMOLZQIBEPTXPOLNYYHGVSWEKVLWLJKDSGRICEEWOMJEAPNPGLTNQNCSQLFXKWPRYARUD");
    msg.sys_src.assign("ZLAALNCYXLGOIPGMHRCWCBKEJKDIHWMWKPWUETAXJVYRAQHYTPHGTULRADVQWMNIQNHXFVMLNPBHVVLW");
    msg.seq = 44999U;
    msg.sys_dst.assign("OEFTOFFWJGLYOWSJCVRQMIEYNMHNFWRIJJJSHBNDRWVKCKCEVGXMGSSEMIRDZWKFP");
    msg.flags = 216U;
    const char tmp_msg_0[] = {95, 44, -128, 52, 95, -5, 122, -85, 80, -59, 6, -122, -74, -30, 39, 87, 89, -106, -89, 12, -7, 71, -83, 70, 87, 118, 113, -85, 25, -20, -73, -35, 74, -48, -41, -116, 36, -26, -77, -97, -18, -88, -118, -14, 55, -82, -76, -122, -74, -89, 50, -32, -43, -48, 7, -101, -86, -114, 85, -29, -95, 39, 30, -107, -101, -75, -85, -74, 2, 124, -2, 99, -105, 121, -55, 102, 126, 96, 87, -21, -75, 8, -24, 42, 13, 43, 86, -4, -23, 12, 31, -115, -77, 65, -95, 19, -76, 88, -61, -72, -8, -74, 11, 78, -57, -17, 125, 42, 125, -15, -12, 116, -3, 119, -124, -2, 59, -119, -11, -8, -21, 76, -49, -27, 95, 3, 6, 113, 80, 25, 53, -87, 3, 20, -103, -47, -30, -98, -97, -15, 76, -38, 111, 25, 3, 8, 46, -53, 41, -42, -47, 38, -43, 27, 111, 108, -33, -75, 106, 68, -113, -60, -10, 54, -104, 27, 122, 32, -25, -14, 84, -7, -12, -95, -47, 83, 30, -124, 88, -23, 80, -31, 125, 85, -18, 64, 0, -17, 58, -45, 10, -43, 65, 59, 1, -115, -37, 23, 17, -62, 96, -11, 49, 118, -44, 54, -57, 11, -12, -78, 82, 43, -111, -16, 11, -126, -100, -10, 103, 22, -121, -79};
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
    msg.setTimeStamp(0.960470265914);
    msg.setSource(51265U);
    msg.setSourceEntity(81U);
    msg.setDestination(62388U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.00162103042071;
    msg.lon = 0.429241792446;
    msg.depth = 0.374407204412;
    msg.sentence.assign("CRGTVYOCEBVKMQUJMMDUKHHSXTMVLDEZQHAQZFKJGCATUHHRDFXRRAQMVARDBRBLJSGEQCARGUONMXWGIPBRTTOSXMPPZMKVXJIDPVLHTDSLWCFFZECLEVNOBWNKGNLSWPWZSWPXBEYAKGTUYSZFJWQFB");
    msg.txtime = 0.39471339432;
    msg.modem_type.assign("RIUDCPJVBINUAMFEWDDMPUFKQFCCYPAVDWGPHGCERFSTWGNAEAJYZFBXBGGTFHVUNGWAZVAUTKLOHGNHAQFKCVDDSHXJSJZQJBTXTUXRAANPTISOOOOYEKEQBLHMVLDXVWULCIXWRUVFXEITJQBMTQNBKBBEHGKPZQPLAMYEKDKCZTPMISH");
    msg.sys_src.assign("GKPQQIJXGGZLTYWFPQCEJDDWCHXECBVULSRHRIIZZDHCCOJHARKNSKGTVZBLGUFXPBLRJIZOLCEQOWVEZJJUIQH");
    msg.seq = 14696U;
    msg.sys_dst.assign("TKXBBROSGHFCFBYEYRJXJYZHXQIWPBNLNRNLEVWOGBTPNINXRLQVPMPRAGWEAIGIOEATMJVOGCSIYKSJIPFPUYPWUHOUCTHTGJLGZLFZHBYUKRVSQCEABNZFDHQEWDFJWXIDKSGFIQUMQMRTYAOXQDLMWRONFESNKXDFVTCBZTUJVOMHTLCVDAQIGNCQJYUYKYAWENJRU");
    msg.flags = 26U;
    const char tmp_msg_0[] = {-70, 15, -17, 60, -1, -100, -90, 47, 79, -89, -28, 101, 40, -6, -71, 98, -50, -22, 5, -47, 102, -36, -37, 114, 81, 68, -11, 104, -91, -109, 3, -123, -125, -116, -108, 117, 24, -119, -60, 15, -106, -25, -83, -46, 125, -61, 7, 18, -62, 103, -95, 108, 13, -94, 20, 106, -82, -48, -108, 66, -62, -115, 32, -119, 26, -19, 87, 33, 91, -73, -81, 44, -92, 60, 116, -20, -47, -109, 72, -109, 109, -72, -35, 116, -21, -114, -94, -73, 11, -51, -82, -34, 10, -53, 125, -81, -126, 41, -13, 28, 102, 19, 99, -106, 9, -73, 62, 95, 124, -62, -72, -59, -21, -117, 102, 87, -8, 46, -50, -5, -115, -7, 54, 116, 41, 35, -67, 5, -18, 101, 33, -16, 52, -2, -91, 38, 2, -127, -91, -22, -1, -67, -102, -115, 45, -29, -124, 69, -40, 27, -66, -80, 54, -71, 89, -70, -48, 38, -62, -87, 10, 57, 109, -122, 98, -106, -78, -111, -53, 105, 26, -44, -65, 93};
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
    msg.setTimeStamp(0.383018507501);
    msg.setSource(48304U);
    msg.setSourceEntity(166U);
    msg.setDestination(52636U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.0651569213835;
    msg.lon = 0.0742933359578;
    msg.depth = 0.876922534054;
    msg.sentence.assign("TEOMZLFILWKMYPGLQLVYLCIVCZ");
    msg.txtime = 0.994287261649;
    msg.modem_type.assign("HWKRJEBTCJZTAPPLYOLFKZAVVGYBAIRFSXMZZXLEVNYTLGDTLLHCUYBUKMGMDOCOIWUOECEQITKFGRQYUJHVRBDOEMGJZXTUUHLDFNCKAWAHIHGERWF");
    msg.sys_src.assign("AOQQWKUUFQNHIPVLTHTKEMHERLGIMULWIIGKGVVKKOSZGIXZVEDLPEDGGBZSVZNNQZWERPSKNFDTFLMJBSOVATXDEGRMWHHOBQJFAWYXBLCZAJUTLLRPCHKFIYEDSKUONJC");
    msg.seq = 38161U;
    msg.sys_dst.assign("ROPZQAPYZQZHBHIGIORLNAAPQKMKRTSCOFDSIHBFSIZPWWHJPSMRJDTZKKNAKOMBOUJMGSVQUECYQUCTGVWGTOCDRSMLVZYVEEGAMUAZIBDPMFXSCTNXCIYDXXJMXRFXQWJZBNZUXLDMXKUTALEVLTFVSVUWUOHHNECGPKKEXLFOERFIWGYWVBELJBNKQLHOYGTW");
    msg.flags = 131U;
    const char tmp_msg_0[] = {-16, -96, -36, 14, -28, -27, -121, 12, 52, -96, -55, -68, -2, 103, 116, -2, 112, -8, -16, -75, -58, 25, 71, -52, -43, 9, -82, 98, 79, 44, -58, -11, 7, -115, -27, 112, -119, -28, -58, -77, -105, -24, -102, 55, -48, 55, 5, 103, 11, -42, 118, -92, -69, 43, -42, -60, 24, -80, 57, -34, 111, -102, -128, -80, -72, -24, 52, -102, 63, -118, 22, -123, -125, -50, -42, -68, 7, 42, -27, -57, -69, -118, 74, -39, 43, -121, 33, -44, -76, 100, -64, 90, 54, 111, -60, -115, -60, 25, 37, -81, -13, 30, -21, -67, -83, -48, -27, -90, -87, 117, 26, -121, 49, 31, -12, 87, 98, -128, -121, 28, -39, 82, -10, 49, 63, 68, -102, -4, -63, -20, 58, 107, 77, 113, 114, 81, 116, -82, 66, -95, 62, -32, 81, -38, -72, -105, 38, -5, -69};
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
    msg.setTimeStamp(0.546350949404);
    msg.setSource(65267U);
    msg.setSourceEntity(88U);
    msg.setDestination(23570U);
    msg.setDestinationEntity(250U);
    msg.op = 74U;
    msg.system.assign("FCQRZARHFECOFSOAKUISBYNFLGA");
    msg.range = 0.483057337833;
    IMC::QueryEntityState tmp_msg_0;
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
    msg.setTimeStamp(0.286081138053);
    msg.setSource(64670U);
    msg.setSourceEntity(108U);
    msg.setDestination(53553U);
    msg.setDestinationEntity(220U);
    msg.op = 240U;
    msg.system.assign("UJOZEPACYBQPFKEPRGGCCILYBARHQWWZUIJZPNYLQHGCUTXOPWZGLDBFFMWXCECYPTLAIUZMSBRFMHQXUNQHDZBGMIUKHNMYKVYANXHJSROBSRHECKPSDEBNNJIDEQJCUFWKWIHKVZCTTLOAAJAQSRVJDDPARLWJHMRDZKMEDBJMMXTTAKLJU");
    msg.range = 0.169259103945;
    IMC::QueryEntityInfo tmp_msg_0;
    tmp_msg_0.id = 60U;
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
    msg.setTimeStamp(0.745028864111);
    msg.setSource(49824U);
    msg.setSourceEntity(112U);
    msg.setDestination(21410U);
    msg.setDestinationEntity(105U);
    msg.op = 223U;
    msg.system.assign("SGXOAOIWBVUOUUJELPAHESRXBCURKYMWVXQKQUPGERDRVQEWQBLXYMHPWKLIIDGFVDDCADFPMNZMKNEEHTQBU");
    msg.range = 0.232044306574;
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 16U;
    tmp_msg_0.error_count = 128U;
    tmp_msg_0.error_ents.assign("KNPOLEBYEXGTSLZECASTKDNJNYIQMAHWMXVPBOYTGIGLQTWMGREAYFQAJZNBFCTHROQKBZKAFMYWHCQQLCSMSDEPYJXVIDJUZAEMLPLKVHDKSNBUSECCXDHUYWPFIOULRXAJIWUMLUZHUTGQPBSFIWNLIYUBKPIBVMCIPRJA");
    tmp_msg_0.maneuver_type = 22300U;
    tmp_msg_0.maneuver_stime = 0.88298055139;
    tmp_msg_0.maneuver_eta = 58177U;
    tmp_msg_0.control_loops = 1699226739U;
    tmp_msg_0.flags = 178U;
    tmp_msg_0.last_error.assign("OHIDERRDSRMBLPFACYGAOUISZVVAYKBLFXJHCCIXNQAZUFSUZXGQHQFWIKBOZTDBMPYNXWJWQPXVSJIRSMBGKEZRWKHMZGWUFLVGAJDHCTLBMLRQKI");
    tmp_msg_0.last_error_time = 0.518607916067;
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
    msg.setTimeStamp(0.821333159874);
    msg.setSource(9492U);
    msg.setSourceEntity(66U);
    msg.setDestination(23844U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.958661699377);
    msg.setSource(37602U);
    msg.setSourceEntity(122U);
    msg.setDestination(23968U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.0470503669145);
    msg.setSource(56050U);
    msg.setSourceEntity(201U);
    msg.setDestination(55339U);
    msg.setDestinationEntity(184U);

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
    msg.setTimeStamp(0.221976773215);
    msg.setSource(48798U);
    msg.setSourceEntity(71U);
    msg.setDestination(40454U);
    msg.setDestinationEntity(252U);
    msg.list.assign("JRVEZLVILMZPRKCMXQNJPQEOGRYBGZVSFHMXURUWKGBPSAJRYZTZSTKJQREFNCIJIWLXFVOVYHFXXAEGGOPMCEKIFOQYSSKDGANAIQTZJNZVJLCZOTAHEHPUQEOWDNQPHPGWLLRLGOIPTCBAHNSKTKBNRMBNWYPZVOSAWLHBSKBJXXRFIHIUSBDYAUABVTXGTWYMZOIQMCDKQUFNJLLW");

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
    msg.setTimeStamp(0.414772570168);
    msg.setSource(61866U);
    msg.setSourceEntity(236U);
    msg.setDestination(16100U);
    msg.setDestinationEntity(241U);
    msg.list.assign("OMFXGDIWCVYTLHRDRBZAMVFUEQBMGCSYVKTOZXPAVKMIKAUEOFHGQPSCMLBNJJBWUHHUKINVRALONXKTDZNPZIYVPKNWXGUCIBJDECEFEBIDQLSLSSAPLAWXOOJHFQIZTVGWSCWARKPBURSJZAXYEOGTKRTLFZACSPQEEYHODZXYIHICSDJGFMJBLXEDUNEKNYBKYNTNHMDXYITWOPPWPJQNUAJRTXZBOFFGZQDYC");

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
    msg.setTimeStamp(0.7813547301);
    msg.setSource(32266U);
    msg.setSourceEntity(251U);
    msg.setDestination(40583U);
    msg.setDestinationEntity(55U);
    msg.list.assign("QLWKUTXKBYMXBNKPGAHLPP");

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
    msg.setTimeStamp(0.704409027678);
    msg.setSource(19381U);
    msg.setSourceEntity(86U);
    msg.setDestination(2672U);
    msg.setDestinationEntity(18U);
    msg.peer.assign("OOPXHWOJARGXTAJFMADDLPWAHQAWLOHAZVLWRSKKNBCGKQXKWLILXNEGCYFIYLBEUNNZHQMBFVECYAGLHUMAYBEUTCGKSEVOCJNSCLTDOPWQJQYRBFGIYDYNDAXTLBJJRUITNFDZGMXWZTPHVUSDNZJEXIUHBPMJKIFFJKIBLAPPKUTBGQQGIZOSVYHF");
    msg.rssi = 0.302873138172;
    msg.integrity = 7071U;

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
    msg.setTimeStamp(0.382864976444);
    msg.setSource(43508U);
    msg.setSourceEntity(180U);
    msg.setDestination(15344U);
    msg.setDestinationEntity(88U);
    msg.peer.assign("WEWUOPJHWPJJBZGFKNVMVODBGRNJOYQEMAZRGKTPEYCTHLTMJQWBYSUKSDSZGVZWWZKAUVNWNAJV");
    msg.rssi = 0.823635510527;
    msg.integrity = 21565U;

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
    msg.setTimeStamp(0.358368077933);
    msg.setSource(52323U);
    msg.setSourceEntity(184U);
    msg.setDestination(12484U);
    msg.setDestinationEntity(87U);
    msg.peer.assign("MOKJSUSZFHPYYUXFZQIIQCEBXIFWXYUMVIEKXEDWVCWKBCDQTZVZWSILKPPUCNWVYFLJXBZGKJMILOOOGYZFLDKIGXJABVQTUDENKCTBTVNDXXABQDHCPCHCABWAKAABIFXNSTRXZARLODZERFLEQUTVVVEBUPHQSBRZHGGYQNL");
    msg.rssi = 0.963045664722;
    msg.integrity = 18207U;

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
    msg.setTimeStamp(0.455173693905);
    msg.setSource(65315U);
    msg.setSourceEntity(126U);
    msg.setDestination(10268U);
    msg.setDestinationEntity(198U);
    msg.req_id = 38873U;
    msg.destination.assign("ULSIRVJRGHAABOTSNREIJPCUDSXXCUIVANVYEJEMIYSFWSRAPEXUTCTVTXBCEFHLZDFELITPZNTZRZBVXKBLOHVIAHHQYMXDLEJTFXWUOKWDSMUNCXHAGGZDMBEYJUBBSTWWUJLZKBGMQAXJAMKRNFODKRHTRJYQVMGPVWFQDMBCNYOVQQUDGWMOLSPYOGCNHGLDWVBQHSAXIW");
    msg.timeout = 0.314966363907;
    msg.range = 0.146465494484;
    msg.type = 82U;
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 237U;
    tmp_msg_0.entities.assign("NECPDFWZTNWVPSUGLOZPBDMRRSNFOBWYRHLJPTVKMITIXNTKXJJJZBQNEUPMVIQSXLABUUGCUERGTODWOVEWHFSBVZXRPQYIWJETOPCEGYRVQMKSRXMLJAIDYMEYDKIWGQIPUSDCTFMHMFZOCYQZGYVAIFCVQNRTKJUTGAKDEZPASGYXCBSLCCJKSQOLLHITLMVUKMFNBNYFGZWLXYJXAOWBNKKFXNPEAXVWEDBHOQADRDUHUCQAHR");
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
    msg.setTimeStamp(0.249948269059);
    msg.setSource(45782U);
    msg.setSourceEntity(113U);
    msg.setDestination(39980U);
    msg.setDestinationEntity(225U);
    msg.req_id = 60769U;
    msg.destination.assign("SMBZPPKEKTIYVULCKWTFQFPWWVQDDKOXLOEVBYFGKLQEHDFATGRTCSFSHTHQZUHARMMIIXZNVHJPDRFNOMOGHEJTWCBGPFQGAWDIIZJMXLCSEGNEQVIKXAIMKNGCLURYUOUWETAVJSNRLPXIYJTDIZMRBEKPGZB");
    msg.timeout = 0.0428965544014;
    msg.range = 0.659240778618;
    msg.type = 121U;
    IMC::SmsRx tmp_msg_0;
    tmp_msg_0.source.assign("SQGZPUISKGTWTDNASCDBCL");
    const char tmp_tmp_msg_0_0[] = {18, 24, -7, 43, -24, 73, 54, -98, -37, 43, 118, -28, 110, -87, 28, -6, -59, 93, -96, 20, 5, -116, -88, 37, 100, 74, 113, -54, -127, -86, 58, -59, 32, -123, -23, 20, 120, -37, -9, 23, -107, -93, 42, 104, -8, -2, -108, 61, -13, -28, -15, -88, 74, -90, 67, 48, -40, 10, -39, 10, -11, -27, -11, -15, 41, 25, 29, -57, 123, -14, -37, -104, -27, 9, -99, 51, 52, -28, -117, -41, -54, -46, -70, 21, -118, -60, -80, 5, 32, -17, 87, -4, -8, 48, 56, 11, -128, 88, -59, -121, -111, -60, -20, 125, 11, 25, -27, 54, -33, 14, -76, -101, 92, 65, 45, -86, -52, 93, -67, 2, 91, 71, -116, 13, -51, 84, 62, -29, -79, 19, 30, -77, 90, 11, -6, -54, 74, -49, -104, -109, 124, 56, 110, -8, 121, 111, -52, -117, -83, 124, -2, -61, -73, -107, -30, -66, -88, 66, 123, 119, -54, -117, -106, -121, 11, -81, 37, 95, -58, 115, -31, 113, 115, 65, -17, -71, -10, 11, -72, 82, -17, 117, 78, 96, -31, -118, 105, 34, 32, 92, 66, 102, 80};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.403040642631);
    msg.setSource(8304U);
    msg.setSourceEntity(68U);
    msg.setDestination(42482U);
    msg.setDestinationEntity(238U);
    msg.req_id = 17571U;
    msg.destination.assign("NFDNKAFNZWKVJSHTCRKFWWBWEAOHETOPLMVLSMDCNJPWFZHQTURZHSRAUUYOPKEICSLNEOOBVMHPELYBUZFUMYABXXCDNEZGVBXPIWJKHECJGBIGRCKLFVGVUGLXDTY");
    msg.timeout = 0.392313155065;
    msg.range = 0.923010534654;
    msg.type = 14U;
    IMC::DissolvedOrganicMatter tmp_msg_0;
    tmp_msg_0.value = 0.271053351579;
    tmp_msg_0.type = 54U;
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
    msg.setTimeStamp(0.421942689151);
    msg.setSource(37285U);
    msg.setSourceEntity(46U);
    msg.setDestination(53157U);
    msg.setDestinationEntity(124U);
    msg.req_id = 18154U;
    msg.type = 248U;
    msg.status = 118U;
    msg.info.assign("UJZOAODPKXXITKBGFMNWWZYEOQIARNQEMMJRSLJPQIQDTJKEFCFKOTAXGNIEWUAAXMSJBLWQLHEQGOFTACIEIP");
    msg.range = 0.101875668892;

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
    msg.setTimeStamp(0.481541875737);
    msg.setSource(62035U);
    msg.setSourceEntity(221U);
    msg.setDestination(12914U);
    msg.setDestinationEntity(103U);
    msg.req_id = 27338U;
    msg.type = 213U;
    msg.status = 15U;
    msg.info.assign("SCHBQPNHOECSVIYODQCFORBGALMWZXVXWGPAIUEOHZOSYMWUVCSKWXGNBFTLFFCGXYJDPMPSFZOTARZTGGQRJDPNLKALNKUSQIUJGPXZJBFRWLIHEIBZEDERSCNLQUULYGTRCDQLVEHCYEZXUNUHERITVPAHXEXWZVIOWAMBTRTVAQYGOJCKBHFDTVTGKMDXKYZJAQMIMKYFBBURRJNDWNWSPZILJI");
    msg.range = 0.105624093822;

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
    msg.setTimeStamp(0.875569385019);
    msg.setSource(46923U);
    msg.setSourceEntity(85U);
    msg.setDestination(27222U);
    msg.setDestinationEntity(173U);
    msg.req_id = 47291U;
    msg.type = 61U;
    msg.status = 135U;
    msg.info.assign("PAVOWDTVUQDNCFZYYNMXGTSTCMVPOFGCWCGUITAIQSSUMLNFRZWLBLNNTTWKLFLJXDHUBHPKXSIJQSKYIBUHJRLEEEVFUZHFTGODZDSQTUWIBPCMKBTKBOYYIMYMEJ");
    msg.range = 0.0247252157064;

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
    msg.setTimeStamp(0.393249800428);
    msg.setSource(39902U);
    msg.setSourceEntity(185U);
    msg.setDestination(61670U);
    msg.setDestinationEntity(94U);
    msg.value = -14757;

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
    msg.setTimeStamp(0.832695462511);
    msg.setSource(2873U);
    msg.setSourceEntity(134U);
    msg.setDestination(10790U);
    msg.setDestinationEntity(66U);
    msg.value = 18141;

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
    msg.setTimeStamp(0.306358452056);
    msg.setSource(59584U);
    msg.setSourceEntity(111U);
    msg.setDestination(53124U);
    msg.setDestinationEntity(5U);
    msg.value = 2109;

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
    msg.setTimeStamp(0.577066716848);
    msg.setSource(30774U);
    msg.setSourceEntity(250U);
    msg.setDestination(469U);
    msg.setDestinationEntity(71U);
    msg.value = 0.78874943822;

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
    msg.setTimeStamp(0.704649529287);
    msg.setSource(12007U);
    msg.setSourceEntity(70U);
    msg.setDestination(39919U);
    msg.setDestinationEntity(76U);
    msg.value = 0.911394982271;

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
    msg.setTimeStamp(0.144531114562);
    msg.setSource(18155U);
    msg.setSourceEntity(10U);
    msg.setDestination(26327U);
    msg.setDestinationEntity(154U);
    msg.value = 0.00584786841666;

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
    msg.setTimeStamp(0.180189866864);
    msg.setSource(47879U);
    msg.setSourceEntity(247U);
    msg.setDestination(10646U);
    msg.setDestinationEntity(169U);
    msg.value = 0.516143148564;

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
    msg.setTimeStamp(0.336437823922);
    msg.setSource(4679U);
    msg.setSourceEntity(32U);
    msg.setDestination(63619U);
    msg.setDestinationEntity(235U);
    msg.value = 0.403703625144;

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
    msg.setTimeStamp(0.671662620602);
    msg.setSource(19780U);
    msg.setSourceEntity(73U);
    msg.setDestination(32389U);
    msg.setDestinationEntity(206U);
    msg.value = 0.350700715434;

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
    msg.setTimeStamp(0.948709392687);
    msg.setSource(56436U);
    msg.setSourceEntity(129U);
    msg.setDestination(42810U);
    msg.setDestinationEntity(221U);
    msg.validity = 65477U;
    msg.type = 103U;
    msg.utc_year = 15137U;
    msg.utc_month = 187U;
    msg.utc_day = 95U;
    msg.utc_time = 0.785090056896;
    msg.lat = 0.891642542505;
    msg.lon = 0.245754970617;
    msg.height = 0.391247237854;
    msg.satellites = 63U;
    msg.cog = 0.0983473443049;
    msg.sog = 0.359190777425;
    msg.hdop = 0.440426676038;
    msg.vdop = 0.380776064222;
    msg.hacc = 0.299905914351;
    msg.vacc = 0.909995927217;

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
    msg.setTimeStamp(0.791419511157);
    msg.setSource(1640U);
    msg.setSourceEntity(161U);
    msg.setDestination(650U);
    msg.setDestinationEntity(168U);
    msg.validity = 32616U;
    msg.type = 85U;
    msg.utc_year = 56078U;
    msg.utc_month = 87U;
    msg.utc_day = 125U;
    msg.utc_time = 0.519802887374;
    msg.lat = 0.437705708289;
    msg.lon = 0.823374196823;
    msg.height = 0.038282346366;
    msg.satellites = 179U;
    msg.cog = 0.150031389626;
    msg.sog = 0.308576620114;
    msg.hdop = 0.0905664529484;
    msg.vdop = 0.210653442268;
    msg.hacc = 0.179480888955;
    msg.vacc = 0.413653445224;

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
    msg.setTimeStamp(0.0159323343677);
    msg.setSource(64920U);
    msg.setSourceEntity(160U);
    msg.setDestination(57769U);
    msg.setDestinationEntity(8U);
    msg.validity = 60978U;
    msg.type = 241U;
    msg.utc_year = 26010U;
    msg.utc_month = 252U;
    msg.utc_day = 197U;
    msg.utc_time = 0.841087615733;
    msg.lat = 0.164892592857;
    msg.lon = 0.251408268098;
    msg.height = 0.137312062456;
    msg.satellites = 193U;
    msg.cog = 0.717777245224;
    msg.sog = 0.150236012084;
    msg.hdop = 0.909303904694;
    msg.vdop = 0.166235129846;
    msg.hacc = 0.096009119748;
    msg.vacc = 0.895793741595;

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
    msg.setTimeStamp(0.486992421617);
    msg.setSource(29185U);
    msg.setSourceEntity(114U);
    msg.setDestination(49300U);
    msg.setDestinationEntity(1U);
    msg.time = 0.295227292795;
    msg.phi = 0.697012944973;
    msg.theta = 0.0160891597459;
    msg.psi = 0.0178763397195;
    msg.psi_magnetic = 0.298645938679;

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
    msg.setTimeStamp(0.805749120382);
    msg.setSource(25316U);
    msg.setSourceEntity(156U);
    msg.setDestination(57181U);
    msg.setDestinationEntity(130U);
    msg.time = 0.901544338655;
    msg.phi = 0.504545871133;
    msg.theta = 0.529648683902;
    msg.psi = 0.983126773778;
    msg.psi_magnetic = 0.781178269418;

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
    msg.setTimeStamp(0.452658443466);
    msg.setSource(1739U);
    msg.setSourceEntity(47U);
    msg.setDestination(9402U);
    msg.setDestinationEntity(52U);
    msg.time = 0.792295550379;
    msg.phi = 0.921653061434;
    msg.theta = 0.0534090441645;
    msg.psi = 0.122390239085;
    msg.psi_magnetic = 0.397076397219;

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
    msg.setTimeStamp(0.716355234317);
    msg.setSource(6263U);
    msg.setSourceEntity(122U);
    msg.setDestination(26126U);
    msg.setDestinationEntity(253U);
    msg.time = 0.88469287883;
    msg.x = 0.162456099207;
    msg.y = 0.65940944441;
    msg.z = 0.445270074716;
    msg.timestep = 0.316755029553;

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
    msg.setTimeStamp(0.825501008641);
    msg.setSource(21150U);
    msg.setSourceEntity(191U);
    msg.setDestination(15393U);
    msg.setDestinationEntity(154U);
    msg.time = 0.93155130305;
    msg.x = 0.903383421163;
    msg.y = 0.65313276376;
    msg.z = 0.707674642147;
    msg.timestep = 0.941329816953;

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
    msg.setTimeStamp(0.324761580093);
    msg.setSource(10939U);
    msg.setSourceEntity(115U);
    msg.setDestination(4282U);
    msg.setDestinationEntity(179U);
    msg.time = 0.7757545196;
    msg.x = 0.744274649351;
    msg.y = 0.477068183219;
    msg.z = 0.848204897897;
    msg.timestep = 0.199528640181;

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
    msg.setTimeStamp(0.285930831905);
    msg.setSource(23208U);
    msg.setSourceEntity(22U);
    msg.setDestination(37171U);
    msg.setDestinationEntity(14U);
    msg.time = 0.238258815975;
    msg.x = 0.468777338053;
    msg.y = 0.747496959324;
    msg.z = 0.763667384855;

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
    msg.setTimeStamp(0.244621147122);
    msg.setSource(54452U);
    msg.setSourceEntity(5U);
    msg.setDestination(63647U);
    msg.setDestinationEntity(147U);
    msg.time = 0.604592246382;
    msg.x = 0.156582481877;
    msg.y = 0.0646942181867;
    msg.z = 0.59500990231;

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
    msg.setTimeStamp(0.209236006121);
    msg.setSource(2138U);
    msg.setSourceEntity(36U);
    msg.setDestination(44345U);
    msg.setDestinationEntity(44U);
    msg.time = 0.59279802721;
    msg.x = 0.198788302224;
    msg.y = 0.48938236712;
    msg.z = 0.915191465184;

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
    msg.setTimeStamp(0.29756467072);
    msg.setSource(19147U);
    msg.setSourceEntity(108U);
    msg.setDestination(32561U);
    msg.setDestinationEntity(78U);
    msg.time = 0.513388141878;
    msg.x = 0.755607066169;
    msg.y = 0.106517522902;
    msg.z = 0.127763126412;

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
    msg.setTimeStamp(0.277141316653);
    msg.setSource(5050U);
    msg.setSourceEntity(192U);
    msg.setDestination(25965U);
    msg.setDestinationEntity(221U);
    msg.time = 0.992237963784;
    msg.x = 0.345383298965;
    msg.y = 0.688004972649;
    msg.z = 0.919235170144;

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
    msg.setTimeStamp(0.478989636112);
    msg.setSource(16276U);
    msg.setSourceEntity(169U);
    msg.setDestination(44153U);
    msg.setDestinationEntity(175U);
    msg.time = 0.283268331513;
    msg.x = 0.644666261989;
    msg.y = 0.320659398475;
    msg.z = 0.862551246486;

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
    msg.setTimeStamp(0.817598387408);
    msg.setSource(3699U);
    msg.setSourceEntity(114U);
    msg.setDestination(26057U);
    msg.setDestinationEntity(234U);
    msg.time = 0.27833193194;
    msg.x = 0.691910111204;
    msg.y = 0.900748334487;
    msg.z = 0.0413380085767;

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
    msg.setTimeStamp(0.391260235078);
    msg.setSource(38552U);
    msg.setSourceEntity(219U);
    msg.setDestination(3585U);
    msg.setDestinationEntity(171U);
    msg.time = 0.926347724711;
    msg.x = 0.534363303461;
    msg.y = 0.212096749497;
    msg.z = 0.147340973012;

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
    msg.setTimeStamp(0.291379951771);
    msg.setSource(36765U);
    msg.setSourceEntity(228U);
    msg.setDestination(41976U);
    msg.setDestinationEntity(156U);
    msg.time = 0.595880307293;
    msg.x = 0.673280288943;
    msg.y = 0.339697025985;
    msg.z = 0.331507496127;

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
    msg.setTimeStamp(0.73754216448);
    msg.setSource(7414U);
    msg.setSourceEntity(59U);
    msg.setDestination(60839U);
    msg.setDestinationEntity(43U);
    msg.validity = 224U;
    msg.x = 0.267563148031;
    msg.y = 0.117828057648;
    msg.z = 0.554300412073;

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
    msg.setTimeStamp(0.256029470954);
    msg.setSource(50133U);
    msg.setSourceEntity(77U);
    msg.setDestination(33188U);
    msg.setDestinationEntity(145U);
    msg.validity = 250U;
    msg.x = 0.375806080868;
    msg.y = 0.225960183496;
    msg.z = 0.428800537397;

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
    msg.setTimeStamp(0.425431699805);
    msg.setSource(55449U);
    msg.setSourceEntity(156U);
    msg.setDestination(7944U);
    msg.setDestinationEntity(200U);
    msg.validity = 226U;
    msg.x = 0.77114464952;
    msg.y = 0.71860710769;
    msg.z = 0.260942204558;

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
    msg.setTimeStamp(0.19054599167);
    msg.setSource(51956U);
    msg.setSourceEntity(206U);
    msg.setDestination(23723U);
    msg.setDestinationEntity(31U);
    msg.validity = 171U;
    msg.x = 0.925452029342;
    msg.y = 0.600254185211;
    msg.z = 0.082190942496;

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
    msg.setTimeStamp(0.603924373752);
    msg.setSource(13926U);
    msg.setSourceEntity(155U);
    msg.setDestination(15396U);
    msg.setDestinationEntity(13U);
    msg.validity = 44U;
    msg.x = 0.751376555379;
    msg.y = 0.69474929596;
    msg.z = 0.577319697959;

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
    msg.setTimeStamp(0.601235293552);
    msg.setSource(63118U);
    msg.setSourceEntity(51U);
    msg.setDestination(53865U);
    msg.setDestinationEntity(167U);
    msg.validity = 118U;
    msg.x = 0.406683110987;
    msg.y = 0.925992138039;
    msg.z = 0.564051995798;

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
    msg.setTimeStamp(0.728976574353);
    msg.setSource(64901U);
    msg.setSourceEntity(39U);
    msg.setDestination(36433U);
    msg.setDestinationEntity(11U);
    msg.time = 0.636266639179;
    msg.x = 0.348558490163;
    msg.y = 0.625812657442;
    msg.z = 0.0331957455707;

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
    msg.setTimeStamp(0.39478937092);
    msg.setSource(56698U);
    msg.setSourceEntity(18U);
    msg.setDestination(15950U);
    msg.setDestinationEntity(58U);
    msg.time = 0.0442718278845;
    msg.x = 0.593992271689;
    msg.y = 0.124852792854;
    msg.z = 0.150954317959;

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
    msg.setTimeStamp(0.778795364615);
    msg.setSource(9890U);
    msg.setSourceEntity(186U);
    msg.setDestination(56815U);
    msg.setDestinationEntity(115U);
    msg.time = 0.422763936731;
    msg.x = 0.769524809985;
    msg.y = 0.64712083919;
    msg.z = 0.274538398506;

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
    msg.setTimeStamp(0.821586966294);
    msg.setSource(39033U);
    msg.setSourceEntity(158U);
    msg.setDestination(33651U);
    msg.setDestinationEntity(253U);
    msg.validity = 26U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.050926488549;
    tmp_msg_0.y = 0.815855430395;
    tmp_msg_0.z = 0.785037283539;
    tmp_msg_0.phi = 0.479938215031;
    tmp_msg_0.theta = 0.283135225262;
    tmp_msg_0.psi = 0.506856730992;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.360481057782;

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
    msg.setTimeStamp(0.476073543121);
    msg.setSource(27134U);
    msg.setSourceEntity(215U);
    msg.setDestination(32576U);
    msg.setDestinationEntity(53U);
    msg.validity = 103U;
    msg.value = 0.0687831967967;

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
    msg.setTimeStamp(0.796780851465);
    msg.setSource(40555U);
    msg.setSourceEntity(100U);
    msg.setDestination(39639U);
    msg.setDestinationEntity(11U);
    msg.validity = 208U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.0595154649492;
    tmp_msg_0.beam_height = 0.0514332930425;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.137635901879;

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
    msg.setTimeStamp(0.941033162865);
    msg.setSource(35386U);
    msg.setSourceEntity(134U);
    msg.setDestination(40231U);
    msg.setDestinationEntity(201U);
    msg.value = 0.0737035622718;

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
    msg.setTimeStamp(0.646287278887);
    msg.setSource(4646U);
    msg.setSourceEntity(18U);
    msg.setDestination(11419U);
    msg.setDestinationEntity(67U);
    msg.value = 0.848228057045;

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
    msg.setTimeStamp(0.292273515782);
    msg.setSource(59310U);
    msg.setSourceEntity(162U);
    msg.setDestination(46491U);
    msg.setDestinationEntity(125U);
    msg.value = 0.442839236956;

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
    msg.setTimeStamp(0.885482029511);
    msg.setSource(30434U);
    msg.setSourceEntity(245U);
    msg.setDestination(39543U);
    msg.setDestinationEntity(118U);
    msg.value = 0.0327930701581;

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
    msg.setTimeStamp(0.59680538946);
    msg.setSource(58176U);
    msg.setSourceEntity(117U);
    msg.setDestination(33328U);
    msg.setDestinationEntity(72U);
    msg.value = 0.0836024310448;

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
    msg.setTimeStamp(0.45036265561);
    msg.setSource(58827U);
    msg.setSourceEntity(44U);
    msg.setDestination(53033U);
    msg.setDestinationEntity(28U);
    msg.value = 0.476388704605;

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
    msg.setTimeStamp(0.236143948951);
    msg.setSource(47483U);
    msg.setSourceEntity(253U);
    msg.setDestination(29333U);
    msg.setDestinationEntity(167U);
    msg.value = 0.282203425212;

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
    msg.setTimeStamp(0.0031595807604);
    msg.setSource(54125U);
    msg.setSourceEntity(95U);
    msg.setDestination(47624U);
    msg.setDestinationEntity(36U);
    msg.value = 0.865835033655;

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
    msg.setTimeStamp(0.837826376491);
    msg.setSource(47949U);
    msg.setSourceEntity(197U);
    msg.setDestination(58160U);
    msg.setDestinationEntity(45U);
    msg.value = 0.217488714722;

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
    msg.setTimeStamp(0.0247295901447);
    msg.setSource(23565U);
    msg.setSourceEntity(88U);
    msg.setDestination(62074U);
    msg.setDestinationEntity(153U);
    msg.value = 0.54954899515;

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
    msg.setTimeStamp(0.172371626559);
    msg.setSource(35261U);
    msg.setSourceEntity(26U);
    msg.setDestination(25175U);
    msg.setDestinationEntity(76U);
    msg.value = 0.794966801183;

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
    msg.setTimeStamp(0.22315737051);
    msg.setSource(35454U);
    msg.setSourceEntity(72U);
    msg.setDestination(53780U);
    msg.setDestinationEntity(44U);
    msg.value = 0.463883238235;

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
    msg.setTimeStamp(0.377784585213);
    msg.setSource(49364U);
    msg.setSourceEntity(230U);
    msg.setDestination(34010U);
    msg.setDestinationEntity(194U);
    msg.value = 0.903816311801;

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
    msg.setTimeStamp(0.443459868563);
    msg.setSource(64915U);
    msg.setSourceEntity(118U);
    msg.setDestination(52175U);
    msg.setDestinationEntity(41U);
    msg.value = 0.298791347686;

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
    msg.setTimeStamp(0.112821639276);
    msg.setSource(17388U);
    msg.setSourceEntity(29U);
    msg.setDestination(81U);
    msg.setDestinationEntity(135U);
    msg.value = 0.232785410024;

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
    msg.setTimeStamp(0.183438489566);
    msg.setSource(21900U);
    msg.setSourceEntity(74U);
    msg.setDestination(4800U);
    msg.setDestinationEntity(160U);
    msg.value = 0.458991229378;

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
    msg.setTimeStamp(0.482846480113);
    msg.setSource(3357U);
    msg.setSourceEntity(207U);
    msg.setDestination(15621U);
    msg.setDestinationEntity(220U);
    msg.value = 0.123011451121;

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
    msg.setTimeStamp(0.995415449527);
    msg.setSource(7423U);
    msg.setSourceEntity(207U);
    msg.setDestination(26138U);
    msg.setDestinationEntity(34U);
    msg.value = 0.252564006636;

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
    msg.setTimeStamp(0.363920109454);
    msg.setSource(974U);
    msg.setSourceEntity(199U);
    msg.setDestination(54750U);
    msg.setDestinationEntity(183U);
    msg.value = 0.638466670369;

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
    msg.setTimeStamp(0.259427107995);
    msg.setSource(38158U);
    msg.setSourceEntity(10U);
    msg.setDestination(49835U);
    msg.setDestinationEntity(160U);
    msg.value = 0.333509970476;

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
    msg.setTimeStamp(0.399944677437);
    msg.setSource(33821U);
    msg.setSourceEntity(41U);
    msg.setDestination(10877U);
    msg.setDestinationEntity(141U);
    msg.value = 0.416285557071;

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
    msg.setTimeStamp(0.123551873175);
    msg.setSource(8461U);
    msg.setSourceEntity(54U);
    msg.setDestination(43522U);
    msg.setDestinationEntity(76U);
    msg.value = 0.52130452708;

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
    msg.setTimeStamp(0.949288379629);
    msg.setSource(61156U);
    msg.setSourceEntity(226U);
    msg.setDestination(2606U);
    msg.setDestinationEntity(106U);
    msg.value = 0.0382356932774;

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
    msg.setTimeStamp(0.908879081764);
    msg.setSource(55386U);
    msg.setSourceEntity(31U);
    msg.setDestination(25199U);
    msg.setDestinationEntity(240U);
    msg.value = 0.669730449726;

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
    msg.setTimeStamp(0.466632047318);
    msg.setSource(58353U);
    msg.setSourceEntity(74U);
    msg.setDestination(54383U);
    msg.setDestinationEntity(245U);
    msg.direction = 0.117963735729;
    msg.speed = 0.375919426199;
    msg.turbulence = 0.819865805315;

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
    msg.setTimeStamp(0.0981801731728);
    msg.setSource(49056U);
    msg.setSourceEntity(185U);
    msg.setDestination(56283U);
    msg.setDestinationEntity(86U);
    msg.direction = 0.299740222274;
    msg.speed = 0.0409287057619;
    msg.turbulence = 0.0849265641225;

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
    msg.setTimeStamp(0.117455634973);
    msg.setSource(14165U);
    msg.setSourceEntity(129U);
    msg.setDestination(65111U);
    msg.setDestinationEntity(196U);
    msg.direction = 0.916681655756;
    msg.speed = 0.174297022989;
    msg.turbulence = 0.764534104535;

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
    msg.setTimeStamp(0.239904408739);
    msg.setSource(9394U);
    msg.setSourceEntity(140U);
    msg.setDestination(28489U);
    msg.setDestinationEntity(15U);
    msg.value = 0.452078078546;

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
    msg.setTimeStamp(0.110371122026);
    msg.setSource(48954U);
    msg.setSourceEntity(163U);
    msg.setDestination(47074U);
    msg.setDestinationEntity(181U);
    msg.value = 0.680471049928;

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
    msg.setTimeStamp(0.739060711932);
    msg.setSource(51414U);
    msg.setSourceEntity(230U);
    msg.setDestination(62749U);
    msg.setDestinationEntity(104U);
    msg.value = 0.45382048889;

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
    msg.setTimeStamp(0.542732698);
    msg.setSource(59823U);
    msg.setSourceEntity(41U);
    msg.setDestination(44453U);
    msg.setDestinationEntity(247U);
    msg.value.assign("WWIGCEQIFFXLIRMHQMNLCCDKBHPM");

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
    msg.setTimeStamp(0.964100432647);
    msg.setSource(56066U);
    msg.setSourceEntity(220U);
    msg.setDestination(21563U);
    msg.setDestinationEntity(84U);
    msg.value.assign("CYNGTZKBFBTHSDDPNXZDKECBGCBTTNVMGFSMNGIHWHURLMSAKQNLXJIABVJQHHNSTOIPSCCRDHZEVKMWKDLMJZJMDZRVELWEXYZXBPVOETTSWFROHPYASBUWMAKIKDBJOURNGYHXQYYRFRZYPLQCLIAERTZIYGKWLXASFIXEDIJXINAQTSRDKWGFPLQNOLCUYGBRFPDGVAWVFIVNPLBEMHFQGZJQJEAOXYUPVWZPUJMQWCE");

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
    msg.setTimeStamp(0.422496940667);
    msg.setSource(1418U);
    msg.setSourceEntity(156U);
    msg.setDestination(1831U);
    msg.setDestinationEntity(197U);
    msg.value.assign("OQYPCJSLDPVPWIHRGFKTKEFHYGOVMHXZJKROXKQUADNJNJJDHSXFBPJRFMRQLETOBTADJRPVWLVXEZYMMSSDWPAENYZITBUFCXAVVBFGNCTJUCUOZZDQEWCIYYZLLUCGBFIZXOIZBSWLFAES");

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
    msg.setTimeStamp(0.637727138635);
    msg.setSource(52837U);
    msg.setSourceEntity(218U);
    msg.setDestination(2092U);
    msg.setDestinationEntity(230U);
    const char tmp_msg_0[] = {-23, -65, 39, -21, -53, 29, 13, 56, 61, -53, 31, -33, 27, -45, -14, -114, 5, -60, -121, -69, 45, -34, -126, 45, 10, -27, 16, -14, -71, -99, 39, -75, -128, -61, -17, -47, -32, -11, -46, -26, 118, 52, -39, 126, -32, -22, -116, -109, 18, 59, 7, -112, -97, -75, -47, 103, 11, 11, 43, 82, -111, 11, 69, 33, -27, 71, 23, 23, 8, 85, 72, 21, -119, 53, -87, -9, 51, 61, -126, 14, -95, 74, -11, 82, 50, 59, -91, 13, 21, -91, 14, -20, 94, 73, 40, 1, 121, -8, 38, -75, 78, -70, -18, -111, 123, -2, -17, -40, -12, -21, -3, -55, 42, 101, 72, -72, -70, 62, 82, 6, -111, 102, -23, -7, -56, -68, 94, -41, -32, -108, 13, 101, -103, 16, -11, 32, 107, 28, -23, 74, 47, 108, -91, 24, 78, -48, 29, -4, -64, 90, -60, 124, -83, -23, -121, 61, 56, -21, -100, 94, -104, 52, 114, -120, -78, -42, 103, 40, -45, -119, -61, -22, -1, 72, 124, 100, -9, -84, -1, 66, 90, 60, 87, -54, 80, 90, 78, -72, -20, 1, 57, 13, 93, 38, -6, -79, 31, 20, 121, -62, 113, -114, -20, 88, -29, -57, -13, -5, -38, -21, -24, -6, -42, 94, 97, -89, -61, -47, -46, -49, 20, 99, -36, 101, -118, 44, -16, -13, 98, -65, 21, -126, -64, 23, -8, 57, -23, 72, -41, -60, -120, 58, 59, -36, -47, -88, -75, 85, 87, -109, -55, -91, -26};
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
    msg.setTimeStamp(0.666720691586);
    msg.setSource(14863U);
    msg.setSourceEntity(6U);
    msg.setDestination(4462U);
    msg.setDestinationEntity(119U);
    const char tmp_msg_0[] = {98, -116, 51, -71, -53, 112, -120, -95, 122, -30, -15, -21, 114, -99, -23, -4, -77, 4, -22, 119, 75, -28, 32, 45, 119, 99, 44, 75, -96, -81, -78, 68, -34, -81, 64, -46, 114, 10, 24, 67, -118, 44, -98, -36, 4, 124, 95, -38, 106, 75, -127, 126, 100, -28, -37, -94, -78, -85, -111, 113, -57, 10, -4, 68, 69, 26, -52, -20, 50, 35, 119, 111, -71, 112, -26, 67, 83, 17, -7, 6, 84, -34, -110, 87, -2, 33, 45, 100, -20};
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
    msg.setTimeStamp(0.360972469917);
    msg.setSource(26773U);
    msg.setSourceEntity(172U);
    msg.setDestination(31579U);
    msg.setDestinationEntity(144U);
    const char tmp_msg_0[] = {45, -61, 54, 90, -9, 103, -86, -65, -39, -81, -77, 89, -48, -126, -118, 33, -73, 111, 123, 96, -65, -105, -63, 116, -80, -25, 89, 35, -122, 120, -28, -83, 82, 121, -105, -44, -97, -89, 117, -74, 94, 64, 19, 29, 69, -46, -21, -12, -76, -81, 101, 54, -23, 57, -2, -98, -9, -72, 36, 14, -107, 87, -5, -24, -113, 15, 14, -49, -43, 33, -44, -91, 57, 110, 12, -122, 118, 92, -34, -61, 11, 20, -118, -97, -68, -22, -83, 76, -78, -58, -44, 33, -72, 76, 12, 122, -125, 15, 125, 8, 40, 88, 61, -72, -95, -70, -26, 35, 19, 53, -71, -27, 89, -119, -61, -87, 26, -123, 90, -57, -98, -47, -76, -74, 63, 88, 118, -60, -60, -61, 14, -78, 83, -62, -69, 93, -98, -45, 93, 30, -3, -123, 61, -9, 10, -96, 72, 38};
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
    msg.setTimeStamp(0.0883493226111);
    msg.setSource(54668U);
    msg.setSourceEntity(176U);
    msg.setDestination(1312U);
    msg.setDestinationEntity(232U);
    msg.value = 0.362243288988;

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
    msg.setTimeStamp(0.87647943165);
    msg.setSource(54656U);
    msg.setSourceEntity(7U);
    msg.setDestination(58573U);
    msg.setDestinationEntity(17U);
    msg.value = 0.497604853502;

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
    msg.setTimeStamp(0.375813046511);
    msg.setSource(45479U);
    msg.setSourceEntity(42U);
    msg.setDestination(7364U);
    msg.setDestinationEntity(66U);
    msg.value = 0.591446945964;

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
    msg.setTimeStamp(0.492745911913);
    msg.setSource(53776U);
    msg.setSourceEntity(124U);
    msg.setDestination(2337U);
    msg.setDestinationEntity(95U);
    msg.type = 61U;
    msg.frequency = 2403980280U;
    msg.min_range = 11904U;
    msg.max_range = 11558U;
    msg.bits_per_point = 86U;
    msg.scale_factor = 0.324822203171;
    const char tmp_msg_0[] = {-10, -7, 27, 36, 70, -83, 34, -109, 80, 13, -35, 94, 47, 29, -59, 87, -23, -24, 95, 81, 2, -116, 105, -108, -36, -109, -105, 116, 26, -29, 121, -78, -35, -59, -114, 2, 50, 124, 56, 27, 122, 85};
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
    msg.setTimeStamp(0.90284941089);
    msg.setSource(20197U);
    msg.setSourceEntity(215U);
    msg.setDestination(61867U);
    msg.setDestinationEntity(226U);
    msg.type = 244U;
    msg.frequency = 1074885684U;
    msg.min_range = 41649U;
    msg.max_range = 20495U;
    msg.bits_per_point = 110U;
    msg.scale_factor = 0.19489613962;
    const char tmp_msg_0[] = {-56, 18, 77, 74, -10, 6, 106, -46, -82, 27, 35, 59, -47, -2, -1, 114, -14, -20, -98, -99, 35, 29, 11, 98, 83, 79, -4, -88, 12, -114, -49, -45, 47, -18, 124, 122, 89, 68, -91, 41, 29, 89, 6, -85, -37, 89, 97, -98, -13, 61, 82, -107, -79, -30, -86, -43, -38, 88, 121, -113, -76, -114, -22, 101, 8, -47, -80, 71, 79, 94, -61, 27, -99, -29, 20, -48, 116, -118, 98, -100, -18, 121, -92, 41, -71, -8, -35, 0, -80, -125, -18, 51, 57, 58, 10, 82, -17, -56, 16, -83, 9, -26, -125, -89, -36, -49, -54, 55, 36, -111, 47, -60, -27, -52, -117, -91, -40, 121, -99, -122, 24, -84, 91, 73, 48, -90, 41, -76, -108, -48, -20, 53, -66, 3, -22, -7, -118, 6, -68, -99, 116, 68, -73, -51, 42, 28, -82, 96, 124, -18, -92, 53, 118, -74, -105, -28, 69, -18, 81, -89, 50, 73, 76, 23, 47, -18, 58, 125, 39, -124, -110, -57, 77, 73, 76, 71, -28, -91, 62, 41, -62, 106, 41, -82, 38, -45, -88, -62, -42, -6, 30, -108, -21, 54, 86, 82, 38, -54, -20, -91, -121, 68, 20, -45, 110, -58, 87, 82, 36, 49, -127, -110, 35, 71, 121, 78, -44, 23, 78, 70, 27, 49, 62, -1, 44, -127, -109, -100, -51, 27, -96, 115, 4, -32, -77, -92, 27};
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
    msg.setTimeStamp(0.697981126667);
    msg.setSource(11374U);
    msg.setSourceEntity(183U);
    msg.setDestination(57527U);
    msg.setDestinationEntity(106U);
    msg.type = 233U;
    msg.frequency = 1949818757U;
    msg.min_range = 12171U;
    msg.max_range = 24802U;
    msg.bits_per_point = 144U;
    msg.scale_factor = 0.294613811651;
    const char tmp_msg_0[] = {-43, -115, 119, -32, -114, -53, 94, 73, 38, -98, -3, -81, 101, -15, -7, -47, 99, -12, 12, -70, -117, -110, -35, 63, -95, -95, -94, 112, 67, 95, 21, -35, -73, -112, -63, -122, -128, 32, 18, -12, 74, 43, 45, 51, 60, -113, -45, -95, 66, 80, 43, 112, -78, -6, -79, 56, -93, 33, -62, -11, 72, 3, 102, 99, -116, -5, -51, 55, 125, 5, 53, 72, 3, 40, -124, -105, -8, 56, -57, -26, -98, 44, 8, 65, -123, -126, -95, 79, -19, 7, 37, 100, 103, 42, 16, -49, -51, -80, -45, -121, 15, 40, -93, -121, 67, 19, -38, 109, 22, -41, 63, 88, -85, 16, -91, 109, -63, -91, -125, 124, -48, 110, -59, -128, 42, -82, -73, -112, -54, -33, -113, 100, 31, 72, -103, 2, -50, -52, 64, -42, 70, 40, -19, 116, -78, -65, -102, 21, -10, -89, 77, -30, -9, 121, -101, 47, 115, 14, 6, 31, -60, -88, 99, 61, -58, -105, -13, 0, -118, -75, -110, -29, 54, -107, 97, -99, 59, -55, 47, -60, -52, -121, -127, 102, -100, 29, -93, 28, 14, 34, -128, -103, -35, -102, -102, -103, -50, 35, -99, 99, -101, 31, -58, -111, 39, -54, 67, -54, -7, -50, -116, -16, 6, -90, 92, -103, 45, 101};
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
    msg.setTimeStamp(0.105607680808);
    msg.setSource(504U);
    msg.setSourceEntity(118U);
    msg.setDestination(64801U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.933475096682);
    msg.setSource(2422U);
    msg.setSourceEntity(45U);
    msg.setDestination(906U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.293708275464);
    msg.setSource(56721U);
    msg.setSourceEntity(241U);
    msg.setDestination(19011U);
    msg.setDestinationEntity(38U);

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
    msg.setTimeStamp(0.234861617164);
    msg.setSource(8346U);
    msg.setSourceEntity(101U);
    msg.setDestination(59923U);
    msg.setDestinationEntity(87U);
    msg.op = 156U;

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
    msg.setTimeStamp(0.763245732634);
    msg.setSource(3020U);
    msg.setSourceEntity(178U);
    msg.setDestination(47004U);
    msg.setDestinationEntity(85U);
    msg.op = 121U;

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
    msg.setTimeStamp(0.312931453516);
    msg.setSource(11638U);
    msg.setSourceEntity(104U);
    msg.setDestination(62951U);
    msg.setDestinationEntity(224U);
    msg.op = 231U;

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
    msg.setTimeStamp(0.412159861375);
    msg.setSource(23484U);
    msg.setSourceEntity(41U);
    msg.setDestination(15167U);
    msg.setDestinationEntity(135U);
    msg.value = 0.0608405757124;
    msg.confidence = 0.483124114785;
    msg.opmodes.assign("IAHAXTYFVHQCOKDFVEPZBPSHVEQOVYGCUFVIMRVESQWAZBWNNRWJACTDBMIGYLLZNDAPQREABBIWJCNGSXJHNTKKRYUHWFGZFZQJFJHHAPMBCNVBFMVLUIPKHHURVGIBRXMOHLTSEDYTDEADDCZLATIPATISSKVJRSKOFZMBWBDKOYMEXUXNCXKIJGZETNCGPWMKQWXDWQSFYSCPXXUTYJQYGOGURPNLWOYOPZOFERUMJGLTLIKZJ");

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
    msg.setTimeStamp(0.0897519174528);
    msg.setSource(22938U);
    msg.setSourceEntity(121U);
    msg.setDestination(58106U);
    msg.setDestinationEntity(151U);
    msg.value = 0.626201651603;
    msg.confidence = 0.870299938268;
    msg.opmodes.assign("NDBDVFXTLGWQDIAOUOQTBRCPVKRZECTKUKGYKBYGANFIYGUMSINDGFPOPUYASKVYCFTJLQPFSTRNXJXOHHMRBAZPILYQPYTENSWMMSHMCBBASNZFVSFJQLXGWKKPHBNRXHODHCTERNUAULGLUQEWMTQJXIVIIJJBXAZNRMZCDULWLPIVFWJCKBWHZMZOJMGYQYQEEGHUOBWUFCADNJLT");

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
    msg.setTimeStamp(0.281611406729);
    msg.setSource(31378U);
    msg.setSourceEntity(128U);
    msg.setDestination(46644U);
    msg.setDestinationEntity(51U);
    msg.value = 0.135371646684;
    msg.confidence = 0.402289248347;
    msg.opmodes.assign("WRHQJSHAMIFKAUOANLJNMWFEWWTLXYTIRFYZHGDGPCXCVOSOUILVYKHMLCXQE");

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
    msg.setTimeStamp(0.361957228595);
    msg.setSource(29141U);
    msg.setSourceEntity(193U);
    msg.setDestination(37393U);
    msg.setDestinationEntity(97U);
    msg.itow = 558752557U;
    msg.lat = 0.0250893607476;
    msg.lon = 0.143613511571;
    msg.height_ell = 0.877460625976;
    msg.height_sea = 0.481364412391;
    msg.hacc = 0.175972920141;
    msg.vacc = 0.27042893273;
    msg.vel_n = 0.513969620283;
    msg.vel_e = 0.769548788316;
    msg.vel_d = 0.0677429298216;
    msg.speed = 0.293562403204;
    msg.gspeed = 0.288046977934;
    msg.heading = 0.998026716981;
    msg.sacc = 0.487239265414;
    msg.cacc = 0.402437178975;

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
    msg.setTimeStamp(0.608943633101);
    msg.setSource(25641U);
    msg.setSourceEntity(23U);
    msg.setDestination(59142U);
    msg.setDestinationEntity(56U);
    msg.itow = 2843905042U;
    msg.lat = 0.504576557248;
    msg.lon = 0.325587274262;
    msg.height_ell = 0.602119116003;
    msg.height_sea = 0.342946112001;
    msg.hacc = 0.686180660947;
    msg.vacc = 0.584734908864;
    msg.vel_n = 0.537850058773;
    msg.vel_e = 0.202454058901;
    msg.vel_d = 0.792629349094;
    msg.speed = 0.38853635364;
    msg.gspeed = 0.29111757134;
    msg.heading = 0.649123541598;
    msg.sacc = 0.128911826715;
    msg.cacc = 0.919654901943;

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
    msg.setTimeStamp(0.404751830655);
    msg.setSource(23540U);
    msg.setSourceEntity(254U);
    msg.setDestination(45481U);
    msg.setDestinationEntity(213U);
    msg.itow = 875349424U;
    msg.lat = 0.79908010855;
    msg.lon = 0.451681503486;
    msg.height_ell = 0.964310313761;
    msg.height_sea = 0.116306530546;
    msg.hacc = 0.10785674956;
    msg.vacc = 0.191970437793;
    msg.vel_n = 0.970383451921;
    msg.vel_e = 0.125694726695;
    msg.vel_d = 0.511998997338;
    msg.speed = 0.563737041539;
    msg.gspeed = 0.00848898988281;
    msg.heading = 0.562894849445;
    msg.sacc = 0.896721538314;
    msg.cacc = 0.391769361998;

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
    msg.setTimeStamp(0.856487628518);
    msg.setSource(45312U);
    msg.setSourceEntity(9U);
    msg.setDestination(38167U);
    msg.setDestinationEntity(62U);
    msg.id = 149U;
    msg.value = 0.633091384731;

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
    msg.setTimeStamp(0.258853689455);
    msg.setSource(57125U);
    msg.setSourceEntity(59U);
    msg.setDestination(35681U);
    msg.setDestinationEntity(96U);
    msg.id = 2U;
    msg.value = 0.209637030146;

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
    msg.setTimeStamp(0.0215820467328);
    msg.setSource(59330U);
    msg.setSourceEntity(135U);
    msg.setDestination(48042U);
    msg.setDestinationEntity(156U);
    msg.id = 194U;
    msg.value = 0.694494490019;

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
    msg.setTimeStamp(0.86067781122);
    msg.setSource(36569U);
    msg.setSourceEntity(254U);
    msg.setDestination(37754U);
    msg.setDestinationEntity(74U);
    msg.x = 0.406447506793;
    msg.y = 0.635927762789;
    msg.z = 0.805192326281;
    msg.phi = 0.144475657649;
    msg.theta = 0.488663181446;
    msg.psi = 0.873383085222;

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
    msg.setTimeStamp(0.0978780850286);
    msg.setSource(65343U);
    msg.setSourceEntity(90U);
    msg.setDestination(70U);
    msg.setDestinationEntity(124U);
    msg.x = 0.859199540525;
    msg.y = 0.0115881529235;
    msg.z = 0.213420225909;
    msg.phi = 0.0545994503277;
    msg.theta = 0.0606832708683;
    msg.psi = 0.115323221172;

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
    msg.setTimeStamp(0.0294902369152);
    msg.setSource(21578U);
    msg.setSourceEntity(123U);
    msg.setDestination(33177U);
    msg.setDestinationEntity(136U);
    msg.x = 0.213493295412;
    msg.y = 0.75474751238;
    msg.z = 0.211514371337;
    msg.phi = 0.105447287038;
    msg.theta = 0.56706461522;
    msg.psi = 0.87075775387;

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
    msg.setTimeStamp(0.4575415957);
    msg.setSource(65431U);
    msg.setSourceEntity(155U);
    msg.setDestination(59086U);
    msg.setDestinationEntity(9U);
    msg.beam_width = 0.198962835579;
    msg.beam_height = 0.706859342786;

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
    msg.setTimeStamp(0.200704119612);
    msg.setSource(63123U);
    msg.setSourceEntity(129U);
    msg.setDestination(16482U);
    msg.setDestinationEntity(101U);
    msg.beam_width = 0.624011309295;
    msg.beam_height = 0.366891961068;

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
    msg.setTimeStamp(0.732729668988);
    msg.setSource(23187U);
    msg.setSourceEntity(243U);
    msg.setDestination(40242U);
    msg.setDestinationEntity(51U);
    msg.beam_width = 0.506604399978;
    msg.beam_height = 0.573920908337;

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
    msg.setTimeStamp(0.305656045444);
    msg.setSource(25163U);
    msg.setSourceEntity(64U);
    msg.setDestination(34882U);
    msg.setDestinationEntity(93U);
    msg.sane = 26U;

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
    msg.setTimeStamp(0.112842015773);
    msg.setSource(46767U);
    msg.setSourceEntity(189U);
    msg.setDestination(43993U);
    msg.setDestinationEntity(154U);
    msg.sane = 16U;

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
    msg.setTimeStamp(0.644320414641);
    msg.setSource(22675U);
    msg.setSourceEntity(162U);
    msg.setDestination(8691U);
    msg.setDestinationEntity(175U);
    msg.sane = 186U;

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
    msg.setTimeStamp(0.733691888181);
    msg.setSource(6364U);
    msg.setSourceEntity(163U);
    msg.setDestination(43848U);
    msg.setDestinationEntity(175U);
    msg.value = 0.321296336528;

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
    msg.setTimeStamp(0.421782366616);
    msg.setSource(44276U);
    msg.setSourceEntity(32U);
    msg.setDestination(19836U);
    msg.setDestinationEntity(145U);
    msg.value = 0.0102298739671;

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
    msg.setTimeStamp(0.656371120357);
    msg.setSource(16847U);
    msg.setSourceEntity(72U);
    msg.setDestination(21671U);
    msg.setDestinationEntity(245U);
    msg.value = 0.314082048527;

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
    msg.setTimeStamp(0.767508191697);
    msg.setSource(10348U);
    msg.setSourceEntity(132U);
    msg.setDestination(4319U);
    msg.setDestinationEntity(7U);
    msg.value = 0.582082639541;

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
    msg.setTimeStamp(0.942759131523);
    msg.setSource(63455U);
    msg.setSourceEntity(99U);
    msg.setDestination(41151U);
    msg.setDestinationEntity(150U);
    msg.value = 0.260577830598;

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
    msg.setTimeStamp(0.54129349482);
    msg.setSource(48980U);
    msg.setSourceEntity(103U);
    msg.setDestination(10933U);
    msg.setDestinationEntity(235U);
    msg.value = 0.103124818384;

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
    msg.setTimeStamp(0.257003694314);
    msg.setSource(5692U);
    msg.setSourceEntity(110U);
    msg.setDestination(7710U);
    msg.setDestinationEntity(157U);
    msg.value = 0.640701546118;

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
    msg.setTimeStamp(0.513031193089);
    msg.setSource(43499U);
    msg.setSourceEntity(36U);
    msg.setDestination(52260U);
    msg.setDestinationEntity(119U);
    msg.value = 0.117174034481;

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
    msg.setTimeStamp(0.675316095385);
    msg.setSource(42090U);
    msg.setSourceEntity(100U);
    msg.setDestination(33909U);
    msg.setDestinationEntity(26U);
    msg.value = 0.902373071135;

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
    msg.setTimeStamp(0.0393397399371);
    msg.setSource(45111U);
    msg.setSourceEntity(200U);
    msg.setDestination(26118U);
    msg.setDestinationEntity(123U);
    msg.value = 0.432857624033;

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
    msg.setTimeStamp(0.451927493822);
    msg.setSource(54367U);
    msg.setSourceEntity(29U);
    msg.setDestination(29789U);
    msg.setDestinationEntity(155U);
    msg.value = 0.862960303908;

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
    msg.setTimeStamp(0.934564371455);
    msg.setSource(11371U);
    msg.setSourceEntity(99U);
    msg.setDestination(55431U);
    msg.setDestinationEntity(193U);
    msg.value = 0.329477520819;

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
    msg.setTimeStamp(0.188487042714);
    msg.setSource(7143U);
    msg.setSourceEntity(18U);
    msg.setDestination(30671U);
    msg.setDestinationEntity(51U);
    msg.value = 0.162357410374;

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
    msg.setTimeStamp(0.760072908938);
    msg.setSource(22571U);
    msg.setSourceEntity(225U);
    msg.setDestination(9529U);
    msg.setDestinationEntity(44U);
    msg.value = 0.0924280105707;

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
    msg.setTimeStamp(0.745093321256);
    msg.setSource(54105U);
    msg.setSourceEntity(46U);
    msg.setDestination(1769U);
    msg.setDestinationEntity(240U);
    msg.value = 0.0502933534132;

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
    msg.setTimeStamp(0.783466200686);
    msg.setSource(51545U);
    msg.setSourceEntity(29U);
    msg.setDestination(48279U);
    msg.setDestinationEntity(194U);
    msg.value = 0.27370344873;

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
    msg.setTimeStamp(0.181081835618);
    msg.setSource(34915U);
    msg.setSourceEntity(71U);
    msg.setDestination(22578U);
    msg.setDestinationEntity(160U);
    msg.value = 0.395624284593;

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
    msg.setTimeStamp(0.857383629612);
    msg.setSource(11826U);
    msg.setSourceEntity(219U);
    msg.setDestination(41714U);
    msg.setDestinationEntity(217U);
    msg.value = 0.624402619692;

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
    msg.setTimeStamp(0.540132534056);
    msg.setSource(26089U);
    msg.setSourceEntity(228U);
    msg.setDestination(61223U);
    msg.setDestinationEntity(7U);
    msg.value = 0.849065510583;

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
    msg.setTimeStamp(0.530841226943);
    msg.setSource(16383U);
    msg.setSourceEntity(158U);
    msg.setDestination(12394U);
    msg.setDestinationEntity(189U);
    msg.value = 0.273783172483;

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
    msg.setTimeStamp(0.0739859506093);
    msg.setSource(59753U);
    msg.setSourceEntity(33U);
    msg.setDestination(1989U);
    msg.setDestinationEntity(176U);
    msg.value = 0.367433743834;

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
    msg.setTimeStamp(0.417052496288);
    msg.setSource(25230U);
    msg.setSourceEntity(180U);
    msg.setDestination(24465U);
    msg.setDestinationEntity(111U);
    msg.value = 0.577813292096;

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
    msg.setTimeStamp(0.0849428427327);
    msg.setSource(14180U);
    msg.setSourceEntity(190U);
    msg.setDestination(4762U);
    msg.setDestinationEntity(145U);
    msg.value = 0.906097934023;

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
    msg.setTimeStamp(0.674164951001);
    msg.setSource(17727U);
    msg.setSourceEntity(194U);
    msg.setDestination(27806U);
    msg.setDestinationEntity(130U);
    msg.value = 0.449409393917;

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
    msg.setTimeStamp(0.355858653622);
    msg.setSource(11906U);
    msg.setSourceEntity(164U);
    msg.setDestination(31534U);
    msg.setDestinationEntity(42U);
    msg.validity = 47476U;
    msg.type = 226U;
    msg.tow = 1326094466U;
    msg.base_lat = 0.388277720653;
    msg.base_lon = 0.334914839409;
    msg.base_height = 0.461145536718;
    msg.n = 0.835280243894;
    msg.e = 0.0307945349302;
    msg.d = 0.0754550679561;
    msg.v_n = 0.847708613387;
    msg.v_e = 0.408181177957;
    msg.v_d = 0.849441485559;
    msg.satellites = 44U;
    msg.iar_hyp = 6801U;
    msg.iar_ratio = 0.149799230939;

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
    msg.setTimeStamp(0.573568792862);
    msg.setSource(29473U);
    msg.setSourceEntity(25U);
    msg.setDestination(22705U);
    msg.setDestinationEntity(84U);
    msg.validity = 12853U;
    msg.type = 238U;
    msg.tow = 2966027664U;
    msg.base_lat = 0.341187665411;
    msg.base_lon = 0.598088705414;
    msg.base_height = 0.230461818599;
    msg.n = 0.0437213818351;
    msg.e = 0.24670000431;
    msg.d = 0.842451758627;
    msg.v_n = 0.385448442799;
    msg.v_e = 0.977808369129;
    msg.v_d = 0.0479290274451;
    msg.satellites = 201U;
    msg.iar_hyp = 7679U;
    msg.iar_ratio = 0.656990693328;

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
    msg.setTimeStamp(0.254727100612);
    msg.setSource(8655U);
    msg.setSourceEntity(100U);
    msg.setDestination(40420U);
    msg.setDestinationEntity(142U);
    msg.validity = 60989U;
    msg.type = 41U;
    msg.tow = 1712102216U;
    msg.base_lat = 0.174836063021;
    msg.base_lon = 0.578185451561;
    msg.base_height = 0.16787011609;
    msg.n = 0.959934947235;
    msg.e = 0.700812895509;
    msg.d = 0.421185175594;
    msg.v_n = 0.923197603427;
    msg.v_e = 0.165266494076;
    msg.v_d = 0.0152248589281;
    msg.satellites = 211U;
    msg.iar_hyp = 20072U;
    msg.iar_ratio = 0.426004401074;

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
    msg.setTimeStamp(0.824220519116);
    msg.setSource(6251U);
    msg.setSourceEntity(195U);
    msg.setDestination(59181U);
    msg.setDestinationEntity(51U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.717520658165;
    tmp_msg_0.lon = 0.730927609455;
    tmp_msg_0.height = 0.334227596343;
    tmp_msg_0.x = 0.267527980413;
    tmp_msg_0.y = 0.0942945318326;
    tmp_msg_0.z = 0.101889434956;
    tmp_msg_0.phi = 0.644924863335;
    tmp_msg_0.theta = 0.0338578551653;
    tmp_msg_0.psi = 0.449567847723;
    tmp_msg_0.u = 0.0012205361605;
    tmp_msg_0.v = 0.588467689077;
    tmp_msg_0.w = 0.609288899891;
    tmp_msg_0.vx = 0.150871988926;
    tmp_msg_0.vy = 0.757060062652;
    tmp_msg_0.vz = 0.631977188776;
    tmp_msg_0.p = 0.637582016214;
    tmp_msg_0.q = 0.592014138689;
    tmp_msg_0.r = 0.666798297448;
    tmp_msg_0.depth = 0.118761815511;
    tmp_msg_0.alt = 0.396344226545;
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
    msg.setTimeStamp(0.262618821758);
    msg.setSource(58629U);
    msg.setSourceEntity(247U);
    msg.setDestination(8207U);
    msg.setDestinationEntity(186U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.239654003924;
    tmp_msg_0.lon = 0.366816335843;
    tmp_msg_0.height = 0.989783554609;
    tmp_msg_0.x = 0.530812460661;
    tmp_msg_0.y = 0.0208197342575;
    tmp_msg_0.z = 0.110958793095;
    tmp_msg_0.phi = 0.176688069489;
    tmp_msg_0.theta = 0.800471557738;
    tmp_msg_0.psi = 0.287368552291;
    tmp_msg_0.u = 0.020757432043;
    tmp_msg_0.v = 0.306731176762;
    tmp_msg_0.w = 0.829196298216;
    tmp_msg_0.vx = 0.0646492829184;
    tmp_msg_0.vy = 0.913395407395;
    tmp_msg_0.vz = 0.169132792479;
    tmp_msg_0.p = 0.0393861064017;
    tmp_msg_0.q = 0.537880909547;
    tmp_msg_0.r = 0.801228033596;
    tmp_msg_0.depth = 0.511063984515;
    tmp_msg_0.alt = 0.5508694589;
    msg.state.set(tmp_msg_0);
    msg.type = 227U;

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
    msg.setTimeStamp(0.309886192701);
    msg.setSource(47128U);
    msg.setSourceEntity(120U);
    msg.setDestination(882U);
    msg.setDestinationEntity(58U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.413229110553;
    tmp_msg_0.lon = 0.2150259395;
    tmp_msg_0.height = 0.406308766668;
    tmp_msg_0.x = 0.358986365409;
    tmp_msg_0.y = 0.776180869757;
    tmp_msg_0.z = 0.409633431981;
    tmp_msg_0.phi = 0.655841560194;
    tmp_msg_0.theta = 0.764746702503;
    tmp_msg_0.psi = 0.0860768304027;
    tmp_msg_0.u = 0.691618350478;
    tmp_msg_0.v = 0.392813771267;
    tmp_msg_0.w = 0.8350080718;
    tmp_msg_0.vx = 0.555592583713;
    tmp_msg_0.vy = 0.269562951918;
    tmp_msg_0.vz = 0.97720788719;
    tmp_msg_0.p = 0.614184475185;
    tmp_msg_0.q = 0.158676467154;
    tmp_msg_0.r = 0.328307971721;
    tmp_msg_0.depth = 0.385795449448;
    tmp_msg_0.alt = 0.543415716905;
    msg.state.set(tmp_msg_0);
    msg.type = 124U;

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
    msg.setTimeStamp(0.280255042226);
    msg.setSource(33934U);
    msg.setSourceEntity(47U);
    msg.setDestination(37191U);
    msg.setDestinationEntity(143U);
    msg.value = 0.236531176327;

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
    msg.setTimeStamp(0.0302069119658);
    msg.setSource(24991U);
    msg.setSourceEntity(147U);
    msg.setDestination(31468U);
    msg.setDestinationEntity(33U);
    msg.value = 0.160571566138;

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
    msg.setTimeStamp(0.842799782186);
    msg.setSource(21638U);
    msg.setSourceEntity(48U);
    msg.setDestination(49242U);
    msg.setDestinationEntity(72U);
    msg.value = 0.215557946447;

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
    msg.setTimeStamp(0.118194076818);
    msg.setSource(14290U);
    msg.setSourceEntity(208U);
    msg.setDestination(24341U);
    msg.setDestinationEntity(91U);
    msg.value = 0.87099126257;

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
    msg.setTimeStamp(0.302437332839);
    msg.setSource(10078U);
    msg.setSourceEntity(124U);
    msg.setDestination(18943U);
    msg.setDestinationEntity(168U);
    msg.value = 0.132879345818;

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
    msg.setTimeStamp(0.27062611461);
    msg.setSource(51904U);
    msg.setSourceEntity(57U);
    msg.setDestination(53192U);
    msg.setDestinationEntity(11U);
    msg.value = 0.43776156237;

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
    msg.setTimeStamp(0.4549241443);
    msg.setSource(59636U);
    msg.setSourceEntity(134U);
    msg.setDestination(65235U);
    msg.setDestinationEntity(144U);
    msg.value = 0.898340945801;

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
    msg.setTimeStamp(0.0572233104723);
    msg.setSource(10409U);
    msg.setSourceEntity(99U);
    msg.setDestination(22862U);
    msg.setDestinationEntity(45U);
    msg.value = 0.422031775686;

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
    msg.setTimeStamp(0.787179902491);
    msg.setSource(53128U);
    msg.setSourceEntity(232U);
    msg.setDestination(29020U);
    msg.setDestinationEntity(124U);
    msg.value = 0.604507226958;

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
    msg.setTimeStamp(0.545699376854);
    msg.setSource(13388U);
    msg.setSourceEntity(74U);
    msg.setDestination(39995U);
    msg.setDestinationEntity(139U);
    msg.value = 0.687057203799;

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
    msg.setTimeStamp(0.789153501032);
    msg.setSource(45294U);
    msg.setSourceEntity(96U);
    msg.setDestination(43301U);
    msg.setDestinationEntity(179U);
    msg.value = 0.293527286164;

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
    msg.setTimeStamp(0.109365930542);
    msg.setSource(27870U);
    msg.setSourceEntity(106U);
    msg.setDestination(18075U);
    msg.setDestinationEntity(222U);
    msg.value = 0.671418863545;

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
    msg.setTimeStamp(0.392191589791);
    msg.setSource(59703U);
    msg.setSourceEntity(211U);
    msg.setDestination(10385U);
    msg.setDestinationEntity(134U);
    msg.value = 0.457805182888;

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
    msg.setTimeStamp(0.188501756113);
    msg.setSource(37038U);
    msg.setSourceEntity(210U);
    msg.setDestination(24214U);
    msg.setDestinationEntity(203U);
    msg.value = 0.135913400218;

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
    msg.setTimeStamp(0.429547703493);
    msg.setSource(37200U);
    msg.setSourceEntity(60U);
    msg.setDestination(56098U);
    msg.setDestinationEntity(116U);
    msg.value = 0.262382677472;

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
    msg.setTimeStamp(0.626963302565);
    msg.setSource(30385U);
    msg.setSourceEntity(32U);
    msg.setDestination(23969U);
    msg.setDestinationEntity(151U);
    msg.id = 16U;
    msg.zoom = 199U;
    msg.action = 235U;

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
    msg.setTimeStamp(0.565804879366);
    msg.setSource(56228U);
    msg.setSourceEntity(29U);
    msg.setDestination(30127U);
    msg.setDestinationEntity(246U);
    msg.id = 13U;
    msg.zoom = 43U;
    msg.action = 232U;

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
    msg.setTimeStamp(0.66797929073);
    msg.setSource(23356U);
    msg.setSourceEntity(81U);
    msg.setDestination(23364U);
    msg.setDestinationEntity(95U);
    msg.id = 117U;
    msg.zoom = 109U;
    msg.action = 53U;

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
    msg.setTimeStamp(0.219075912479);
    msg.setSource(27775U);
    msg.setSourceEntity(208U);
    msg.setDestination(53133U);
    msg.setDestinationEntity(118U);
    msg.id = 129U;
    msg.value = 0.512184093303;

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
    msg.setTimeStamp(0.167571895771);
    msg.setSource(10845U);
    msg.setSourceEntity(0U);
    msg.setDestination(48980U);
    msg.setDestinationEntity(198U);
    msg.id = 6U;
    msg.value = 0.0687609989253;

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
    msg.setTimeStamp(0.437052097108);
    msg.setSource(6574U);
    msg.setSourceEntity(146U);
    msg.setDestination(43043U);
    msg.setDestinationEntity(81U);
    msg.id = 168U;
    msg.value = 0.500936762467;

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
    msg.setTimeStamp(0.200144571057);
    msg.setSource(27466U);
    msg.setSourceEntity(155U);
    msg.setDestination(45130U);
    msg.setDestinationEntity(236U);
    msg.id = 237U;
    msg.value = 0.265084805865;

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
    msg.setTimeStamp(0.468071076377);
    msg.setSource(8303U);
    msg.setSourceEntity(197U);
    msg.setDestination(23765U);
    msg.setDestinationEntity(99U);
    msg.id = 173U;
    msg.value = 0.13206568774;

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
    msg.setTimeStamp(0.838948509379);
    msg.setSource(36326U);
    msg.setSourceEntity(219U);
    msg.setDestination(44866U);
    msg.setDestinationEntity(11U);
    msg.id = 90U;
    msg.value = 0.178611421907;

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
    msg.setTimeStamp(0.727186254908);
    msg.setSource(12216U);
    msg.setSourceEntity(138U);
    msg.setDestination(15269U);
    msg.setDestinationEntity(202U);
    msg.id = 166U;
    msg.angle = 0.465994632205;

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
    msg.setTimeStamp(0.914934384447);
    msg.setSource(52230U);
    msg.setSourceEntity(235U);
    msg.setDestination(20825U);
    msg.setDestinationEntity(51U);
    msg.id = 208U;
    msg.angle = 0.933042556046;

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
    msg.setTimeStamp(0.52819402328);
    msg.setSource(32013U);
    msg.setSourceEntity(134U);
    msg.setDestination(34532U);
    msg.setDestinationEntity(99U);
    msg.id = 40U;
    msg.angle = 0.738076380599;

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
    msg.setTimeStamp(0.846867376739);
    msg.setSource(40835U);
    msg.setSourceEntity(231U);
    msg.setDestination(60938U);
    msg.setDestinationEntity(85U);
    msg.op = 241U;
    msg.actions.assign("QBSJVTWTXWBJFVBGKLTBFPGLZCXT");

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
    msg.setTimeStamp(0.99939453595);
    msg.setSource(26672U);
    msg.setSourceEntity(243U);
    msg.setDestination(60552U);
    msg.setDestinationEntity(94U);
    msg.op = 134U;
    msg.actions.assign("JKIUXTGCYKYQIAUQXZNEPTXZOGHIPBVPFWBFVHMOBKLTYBDOUJOALRAYZYDAUZYMLVZITLTFKCRLUTBIWMOCVCERZSDHFGQIXKMS");

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
    msg.setTimeStamp(0.253192190303);
    msg.setSource(25718U);
    msg.setSourceEntity(91U);
    msg.setDestination(48834U);
    msg.setDestinationEntity(149U);
    msg.op = 74U;
    msg.actions.assign("FYINFIVHSALYOXYRXMVOHKQCQOZXBUJAEPJAPEIDOWOINZLPRFOJXJEGCHHXIHRITUGNWZFARKRUXZJLUICGSLPAQTEZTTSDABPMXEEAFDQTUHFNSLGRRVDOENMKMSNKRWANGPLWNGBCDNZVAUBVLHUSOCR");

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
    msg.setTimeStamp(0.238365510375);
    msg.setSource(44210U);
    msg.setSourceEntity(27U);
    msg.setDestination(26385U);
    msg.setDestinationEntity(199U);
    msg.actions.assign("ZIVEZTNYAOHCJXASLOMKQRCHMKHHPKMZWEUFNIZWBOKMAJEUXLJEAATNKAPNVZDYUDVPZJVRDZTYB");

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
    msg.setTimeStamp(0.349315485243);
    msg.setSource(47683U);
    msg.setSourceEntity(182U);
    msg.setDestination(12444U);
    msg.setDestinationEntity(8U);
    msg.actions.assign("ZDCPQUWGVSKZBSZTPXPURKAXGEVYCNHKIJGPNGJVQVXYUVIPVZNSNZGEQYSHRBIQOWANMXTAVSAXMZJFDOFRPMLDRSMKIDOEQBJEGBLUOPZREPFJHHWBVIGCRIYTJBSYYLXUNLOMCALBTTZWPVTCTWNALXTQMDHGJFTHTOUZFNCQHUIEQUECSELYKNOHQAHXLKGOLWJYPKXRFWR");

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
    msg.setTimeStamp(0.362557461155);
    msg.setSource(60227U);
    msg.setSourceEntity(140U);
    msg.setDestination(36866U);
    msg.setDestinationEntity(92U);
    msg.actions.assign("PHSZIAZSPBYPCNZSWMUSWDWKKTAVLZDNXGGRMBQXWYDTIVWNHOPJAHPLOYLHRCOWEVWWFTLBTSLUCFRMUSGIMYHKNUKXFEJUFPOKUIGKKPQDEFBXPSGYBORRVS");

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
    msg.setTimeStamp(0.276507758193);
    msg.setSource(61622U);
    msg.setSourceEntity(30U);
    msg.setDestination(14250U);
    msg.setDestinationEntity(120U);
    msg.button = 170U;
    msg.value = 125U;

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
    msg.setTimeStamp(0.98796994265);
    msg.setSource(46450U);
    msg.setSourceEntity(9U);
    msg.setDestination(54926U);
    msg.setDestinationEntity(162U);
    msg.button = 129U;
    msg.value = 113U;

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
    msg.setTimeStamp(0.178309054692);
    msg.setSource(40250U);
    msg.setSourceEntity(216U);
    msg.setDestination(6356U);
    msg.setDestinationEntity(125U);
    msg.button = 139U;
    msg.value = 31U;

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
    msg.setTimeStamp(0.0819959887241);
    msg.setSource(44632U);
    msg.setSourceEntity(136U);
    msg.setDestination(15835U);
    msg.setDestinationEntity(171U);
    msg.op = 218U;
    msg.text.assign("RZTHNNTLPCZQQVXRQURRAJNSDSYDJEPVWOYOCYAVDEKTCZIEGYBBNGBSZLQFOZTXXYHFWCLDSKDNNTWGGXXUHIEEIRHUTQYFAHNZCOBRUUAAKDSBHKGWOFHZDBUJZVMPRXWBMMYKMVFJGAALSIJCMJCKMELMAOSFBVEQHUTVQPSOFFUQPOQPBRHQTXIXJXVLAGZSDLTDJGCLATINWOIWPLVJEXKNRMIEWVKMGLYCPUW");

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
    msg.setTimeStamp(0.561939789838);
    msg.setSource(5959U);
    msg.setSourceEntity(249U);
    msg.setDestination(55256U);
    msg.setDestinationEntity(168U);
    msg.op = 14U;
    msg.text.assign("XLWQUOXHQTWRIVSPXQYJGKPRHGIGBCRTTKSFGCIZJXAACALSEIYZVDOOHLJLDPMLWPTRKDLPEURGUGPHUMJSVVDPZMFKPAVIUDFNFWGBOQQANHXHTEYNVZSWUBCDNDHMUXMEGWRCUYOFZZUCTOQEEZBXOMLYFJYTVFHXAIKIFYMJCTZBCQRAWBKVGYNHSDLEXQOBIDEFVYNDR");

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
    msg.setTimeStamp(0.360859196784);
    msg.setSource(37291U);
    msg.setSourceEntity(135U);
    msg.setDestination(12014U);
    msg.setDestinationEntity(205U);
    msg.op = 96U;
    msg.text.assign("EKUEZUWUJPKMEW");

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
    msg.setTimeStamp(0.146910316729);
    msg.setSource(58527U);
    msg.setSourceEntity(242U);
    msg.setDestination(35437U);
    msg.setDestinationEntity(108U);
    msg.op = 214U;
    msg.time_remain = 0.536313754988;
    msg.sched_time = 0.767951944561;

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
    msg.setTimeStamp(0.165301566064);
    msg.setSource(13452U);
    msg.setSourceEntity(78U);
    msg.setDestination(38757U);
    msg.setDestinationEntity(210U);
    msg.op = 21U;
    msg.time_remain = 0.479706092159;
    msg.sched_time = 0.756473575404;

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
    msg.setTimeStamp(0.06278134625);
    msg.setSource(37880U);
    msg.setSourceEntity(60U);
    msg.setDestination(45857U);
    msg.setDestinationEntity(93U);
    msg.op = 235U;
    msg.time_remain = 0.373000077416;
    msg.sched_time = 0.345920846918;

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
    msg.setTimeStamp(0.92726327032);
    msg.setSource(22589U);
    msg.setSourceEntity(114U);
    msg.setDestination(19082U);
    msg.setDestinationEntity(43U);
    msg.name.assign("HKCPUVBDFGRVKPIUNFBSWQLCCGOMELCQWHYXNXGWKFWCEHJWRQRNDVOQUUJRMROVPLTZOQAYZVVKRFWSPIMZNPTMFASKLOBZLSXJDEGDREZXHTJXENJAFYSSWTYOPGMJTFHLNJFKJLAAPXDUQHIXCGKWMCQVDTBYKHQYTYFUDXUTAWYEBOJKOGTMOMSGCLBSBAASFUWD");
    msg.op = 54U;
    msg.sched_time = 0.621472767005;

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
    msg.setTimeStamp(0.492124646661);
    msg.setSource(39421U);
    msg.setSourceEntity(196U);
    msg.setDestination(27492U);
    msg.setDestinationEntity(11U);
    msg.name.assign("DYBEJNICNPFIOQHZIDWRRKQDOPRYNTLHWKAHQQCFEJAPLLIPZIRZHCHXPMGZTRMPQSVEIQVVEWYGXUGKVYAVWXRXJJNBWVDTHMKOATBTQRUCWZYCDYCOLALJJXKLJLZBZMQCGXKVXRSYDVCJNIBIUQWZKULBADTBEUDOENMFVYFAITOHGXMCPKOSOFU");
    msg.op = 94U;
    msg.sched_time = 0.519549058864;

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
    msg.setTimeStamp(0.682388015761);
    msg.setSource(37745U);
    msg.setSourceEntity(62U);
    msg.setDestination(48218U);
    msg.setDestinationEntity(123U);
    msg.name.assign("SQOYKPFBNREKWIPDCJWVSZHZIGTNQYHRVNDLIZLDVCOGIJZLXZDYHSQPRHVFTHHCTSEZYWWTJBIMGBKPDWDJFLFLBFPMLOWGXEYHXRMOCTGXEYJADADUOKBEMGUBUAQTSPFVQPTDJMSIIALMESHRKQESPRQXSXCACXCSOBLYKAWFXHZOHAQVLVFZUJJEMUKEDKYNZOKPWCTINQUCMTNZBFNYIGAUUOPJBAQVNBXGGKCU");
    msg.op = 132U;
    msg.sched_time = 0.854801617798;

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
    msg.setTimeStamp(0.434271729007);
    msg.setSource(59388U);
    msg.setSourceEntity(35U);
    msg.setDestination(13415U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.0453516535578);
    msg.setSource(1024U);
    msg.setSourceEntity(130U);
    msg.setDestination(2922U);
    msg.setDestinationEntity(0U);

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
    msg.setTimeStamp(0.562106451768);
    msg.setSource(62558U);
    msg.setSourceEntity(126U);
    msg.setDestination(6527U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.16044518558);
    msg.setSource(9336U);
    msg.setSourceEntity(103U);
    msg.setDestination(23942U);
    msg.setDestinationEntity(24U);
    msg.name.assign("LXSTQTBVRAZBYYNLIHJPNAQBNXDZUWGHNIOCURSYUXKEJICHEVKPGZCXNSXVFWKJCOWTMRLKVYVDHZVCHSPZDOBMDMJMALRQPDX");
    msg.state = 101U;

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
    msg.setTimeStamp(0.170782489066);
    msg.setSource(57925U);
    msg.setSourceEntity(168U);
    msg.setDestination(2026U);
    msg.setDestinationEntity(61U);
    msg.name.assign("NCPPMKZUKUDGGGEGDNBLWPTQDJIDKVBPOWSRIWIYRYVIOSGZIGUFRFKPISGFCXXJQQUAAHCUKRUTCEAMQUVYGGIZNMKYEXJEDVEUDHJMEQRBBZQVFFTXGZJWCOWAZSBMNBNXKQJAXTKVRIYYEYLZZRTVFTLPRMJZMYVTVFRCOTWJKAXWCQHZENWHFVBLSCAYHATLCAFYIPHXPDOOHOUSOAWBNENPNNHDBO");
    msg.state = 74U;

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
    msg.setTimeStamp(0.482652761901);
    msg.setSource(37281U);
    msg.setSourceEntity(6U);
    msg.setDestination(20119U);
    msg.setDestinationEntity(145U);
    msg.name.assign("UOEFTJYPMKIGCKRJSLODUJSRYPYARJLELONK");
    msg.state = 81U;

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
    msg.setTimeStamp(0.886138006784);
    msg.setSource(64302U);
    msg.setSourceEntity(242U);
    msg.setDestination(54193U);
    msg.setDestinationEntity(89U);
    msg.name.assign("RKQDHTRKCJZYZ");
    msg.value = 74U;

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
    msg.setTimeStamp(0.3840863835);
    msg.setSource(26279U);
    msg.setSourceEntity(123U);
    msg.setDestination(8835U);
    msg.setDestinationEntity(1U);
    msg.name.assign("GSNRDJTAINZQKARKOSDVHDOODBIYBIERPVPWRUGPMUYWLJMFBTRHTELTKESJRGGAQFNHSGDBHLFGYIWHXLYLXZWETQHCQAXLRDZSJKTMOCYZWXVTPBZEEQPLKUGENSOPNJWIFFHAWNESCQYECNNIMMYMXUOXMKUWXPRSJDBZCOGJZXZR");
    msg.value = 20U;

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
    msg.setTimeStamp(0.205655704824);
    msg.setSource(50307U);
    msg.setSourceEntity(230U);
    msg.setDestination(19041U);
    msg.setDestinationEntity(118U);
    msg.name.assign("OUHDNADNSBJKHPEUBGSOABHTUXYWKQZRCVFVUQBYOCPITYMZKKVLUEJMGGDPEFWLBQNSGFGBLYKCDWLUDQGGOTTXUQKPUSPAFZJXONHWTMBJMWUMZNPGQLMISYC");
    msg.value = 160U;

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
    msg.setTimeStamp(0.563752779283);
    msg.setSource(56371U);
    msg.setSourceEntity(34U);
    msg.setDestination(112U);
    msg.setDestinationEntity(122U);
    msg.name.assign("UVAEFCZWSMRXKXFNYHFJLZVUHBUSKDRXYWZTYSLPMLFFSNPJPZXXNTQSOPQOFNQKWBHHOGUTVUAYFQRKQGJDBYSAEPDSCZRQGOLPOOJJQGTIBBTKOGLWBLIVACAGQCEWMUKERJEKBWHAUIGIGVXVTKCXZSCCFAVLPZYRHIDUHVAEMMCHXBBLOYIKEAIVPEOUEUDDPTMLCWTDWMYJJJSIQ");

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
    msg.setTimeStamp(0.964183991488);
    msg.setSource(8663U);
    msg.setSourceEntity(223U);
    msg.setDestination(59513U);
    msg.setDestinationEntity(149U);
    msg.name.assign("ZOZWGAXYDVFGABPNJFHIXVEKCDCUEIJNEHXSUEAOLYGWJEUZIQZSSIRTLBTEIBRULYQSHWCMDNBWLKNVHRCWFPJHAANKDZDJJMSOQYQOSYRMMKLSZPMKAXEHDPLORHPZCVROAKMCXIZYFVHJBZUEDNWRVVGHGOTNYPWUFBEGQXXPSUMBCTPJJ");

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
    msg.setTimeStamp(0.7640671082);
    msg.setSource(59609U);
    msg.setSourceEntity(201U);
    msg.setDestination(59378U);
    msg.setDestinationEntity(66U);
    msg.name.assign("LSXSGILRLFOUTHGJWLXMPOQCNNXVLAOXCTUZWIXZCACFYEYEFEWRMNFSBMAPPQIZROXLCYJHGVBWWGUQUFDYKXFOSLEYJVWFHVSTHTDIKSRSHUNZIOQYQIMUFXBUDWSZZJKLVVXBWQCLGBZOYHRJQHVZCTZWMDNAEETTEUHPOIKADPRZDRJPDUJPGEKNUTDYGADYBXTYQBEPVPV");

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
    msg.setTimeStamp(0.111887595089);
    msg.setSource(21223U);
    msg.setSourceEntity(87U);
    msg.setDestination(20364U);
    msg.setDestinationEntity(230U);
    msg.name.assign("RLWKNZGMPBUEZBHFCYCQQUUBXLWCUAESHCJUJLQHGMMXXWRNRSWFLEVOCSBJOLOWIPO");
    msg.value = 158U;

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
    msg.setTimeStamp(0.511885258329);
    msg.setSource(31494U);
    msg.setSourceEntity(174U);
    msg.setDestination(35421U);
    msg.setDestinationEntity(202U);
    msg.name.assign("MLTXQVFGVKCYVRRHYKWHJXHGMJQWHDPKGURRCWIDTWNGFZLBBDSEASATOGEEMDCQZLIMIOHTWYARCRXFPCONPXBJYMMAGPXOYLLLWNMOTWUKELUQZ");
    msg.value = 151U;

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
    msg.setTimeStamp(0.561770432717);
    msg.setSource(8330U);
    msg.setSourceEntity(138U);
    msg.setDestination(42939U);
    msg.setDestinationEntity(147U);
    msg.name.assign("KAHPKZKDDLQRYEDSCEAQJTUHUUSBHBQAVXRWPYGIYGTLPPZFWXNNYLUTSZVSWMMOJEJIFSAIBYKAWQYLUTEWZJEMXKCKEWUOJGNHQXZFMSNRJGRQXYGZIBLUVVMTMCNSUDZCHQFPAVNUFSJZBTHGHDPCOQOOWLDOXPFSQG");
    msg.value = 76U;

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
    msg.setTimeStamp(0.740285823569);
    msg.setSource(4290U);
    msg.setSourceEntity(89U);
    msg.setDestination(24874U);
    msg.setDestinationEntity(126U);
    msg.id = 33U;
    msg.period = 2545903516U;
    msg.duty_cycle = 1008251538U;

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
    msg.setTimeStamp(0.776883243242);
    msg.setSource(35919U);
    msg.setSourceEntity(43U);
    msg.setDestination(40377U);
    msg.setDestinationEntity(134U);
    msg.id = 6U;
    msg.period = 1433668851U;
    msg.duty_cycle = 4259989069U;

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
    msg.setTimeStamp(0.587510084085);
    msg.setSource(51242U);
    msg.setSourceEntity(170U);
    msg.setDestination(62736U);
    msg.setDestinationEntity(94U);
    msg.id = 203U;
    msg.period = 3221121727U;
    msg.duty_cycle = 2586833128U;

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
    msg.setTimeStamp(0.0855671547872);
    msg.setSource(23793U);
    msg.setSourceEntity(85U);
    msg.setDestination(24475U);
    msg.setDestinationEntity(2U);
    msg.id = 226U;
    msg.period = 2769415979U;
    msg.duty_cycle = 3260436095U;

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
    msg.setTimeStamp(0.200879547858);
    msg.setSource(9504U);
    msg.setSourceEntity(201U);
    msg.setDestination(51533U);
    msg.setDestinationEntity(153U);
    msg.id = 166U;
    msg.period = 2223557848U;
    msg.duty_cycle = 435993073U;

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
    msg.setTimeStamp(0.129089948459);
    msg.setSource(49800U);
    msg.setSourceEntity(150U);
    msg.setDestination(31586U);
    msg.setDestinationEntity(52U);
    msg.id = 180U;
    msg.period = 3838120747U;
    msg.duty_cycle = 1100747757U;

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
    msg.setTimeStamp(0.68730421415);
    msg.setSource(52899U);
    msg.setSourceEntity(112U);
    msg.setDestination(40320U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.861318730835;
    msg.lon = 0.975705993945;
    msg.height = 0.448257126583;
    msg.x = 0.711898134499;
    msg.y = 0.673332220248;
    msg.z = 0.0911872025124;
    msg.phi = 0.951754368234;
    msg.theta = 0.500353921314;
    msg.psi = 0.294329784021;
    msg.u = 0.303513080727;
    msg.v = 0.188118194767;
    msg.w = 0.405821018727;
    msg.vx = 0.660795921408;
    msg.vy = 0.609376384384;
    msg.vz = 0.598398248588;
    msg.p = 0.431734785964;
    msg.q = 0.916354368064;
    msg.r = 0.76602192636;
    msg.depth = 0.82325925049;
    msg.alt = 0.607899138066;

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
    msg.setTimeStamp(0.797250968702);
    msg.setSource(28206U);
    msg.setSourceEntity(35U);
    msg.setDestination(23449U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.98912350004;
    msg.lon = 0.197332957751;
    msg.height = 0.10789055723;
    msg.x = 0.857389793995;
    msg.y = 0.953054983091;
    msg.z = 0.127668918183;
    msg.phi = 0.403669760655;
    msg.theta = 0.595563343245;
    msg.psi = 0.0618779165389;
    msg.u = 0.224664084817;
    msg.v = 0.88544155827;
    msg.w = 0.68938074677;
    msg.vx = 0.911145377531;
    msg.vy = 0.00573315470549;
    msg.vz = 0.528853450836;
    msg.p = 0.599144198186;
    msg.q = 0.785908960284;
    msg.r = 0.280917324923;
    msg.depth = 0.195271990738;
    msg.alt = 0.385138531739;

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
    msg.setTimeStamp(0.858116885673);
    msg.setSource(59318U);
    msg.setSourceEntity(207U);
    msg.setDestination(35257U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.152472191764;
    msg.lon = 0.240538817026;
    msg.height = 0.00812992957208;
    msg.x = 0.909284514013;
    msg.y = 0.650671333069;
    msg.z = 0.793275205921;
    msg.phi = 0.68412276463;
    msg.theta = 0.816460144505;
    msg.psi = 0.105600017489;
    msg.u = 0.1900467775;
    msg.v = 0.503987052135;
    msg.w = 0.489769618091;
    msg.vx = 0.323384507768;
    msg.vy = 0.121644067523;
    msg.vz = 0.276265908822;
    msg.p = 0.109637204647;
    msg.q = 0.0795591523344;
    msg.r = 0.706759445698;
    msg.depth = 0.21734731434;
    msg.alt = 0.0465840605607;

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
    msg.setTimeStamp(0.162846038661);
    msg.setSource(48171U);
    msg.setSourceEntity(195U);
    msg.setDestination(30184U);
    msg.setDestinationEntity(19U);
    msg.x = 0.994142775544;
    msg.y = 0.713388593843;
    msg.z = 0.507093564797;

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
    msg.setTimeStamp(0.865063913102);
    msg.setSource(9830U);
    msg.setSourceEntity(103U);
    msg.setDestination(19415U);
    msg.setDestinationEntity(209U);
    msg.x = 0.136255960599;
    msg.y = 0.787957884239;
    msg.z = 0.989729056429;

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
    msg.setTimeStamp(0.405862878774);
    msg.setSource(29896U);
    msg.setSourceEntity(242U);
    msg.setDestination(3655U);
    msg.setDestinationEntity(184U);
    msg.x = 0.34951953901;
    msg.y = 0.673298179753;
    msg.z = 0.290261331259;

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
    msg.setTimeStamp(0.889753568093);
    msg.setSource(6676U);
    msg.setSourceEntity(135U);
    msg.setDestination(43797U);
    msg.setDestinationEntity(178U);
    msg.value = 0.723936154425;

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
    msg.setTimeStamp(0.559136007118);
    msg.setSource(31615U);
    msg.setSourceEntity(50U);
    msg.setDestination(46859U);
    msg.setDestinationEntity(173U);
    msg.value = 0.133550825079;

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
    msg.setTimeStamp(0.0845706282749);
    msg.setSource(27427U);
    msg.setSourceEntity(103U);
    msg.setDestination(52441U);
    msg.setDestinationEntity(190U);
    msg.value = 0.427589111503;

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
    msg.setTimeStamp(0.787739578518);
    msg.setSource(58457U);
    msg.setSourceEntity(181U);
    msg.setDestination(44265U);
    msg.setDestinationEntity(178U);
    msg.value = 0.544115330458;

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
    msg.setTimeStamp(0.169879346093);
    msg.setSource(30222U);
    msg.setSourceEntity(235U);
    msg.setDestination(24458U);
    msg.setDestinationEntity(118U);
    msg.value = 0.145302098681;

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
    msg.setTimeStamp(0.340210193533);
    msg.setSource(31057U);
    msg.setSourceEntity(96U);
    msg.setDestination(24044U);
    msg.setDestinationEntity(177U);
    msg.value = 0.227186086144;

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
    msg.setTimeStamp(0.599517757671);
    msg.setSource(62177U);
    msg.setSourceEntity(75U);
    msg.setDestination(34517U);
    msg.setDestinationEntity(212U);
    msg.x = 0.214992639784;
    msg.y = 0.191247565365;
    msg.z = 0.843229843394;
    msg.phi = 0.184389406569;
    msg.theta = 0.572029661035;
    msg.psi = 0.258298846337;
    msg.p = 0.577120603081;
    msg.q = 0.70152424249;
    msg.r = 0.558381879445;
    msg.u = 0.0249611175035;
    msg.v = 0.557583127025;
    msg.w = 0.880045521472;
    msg.bias_psi = 0.897752439413;
    msg.bias_r = 0.899935958072;

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
    msg.setTimeStamp(0.0385535157536);
    msg.setSource(64626U);
    msg.setSourceEntity(87U);
    msg.setDestination(50350U);
    msg.setDestinationEntity(130U);
    msg.x = 0.145636075239;
    msg.y = 0.466139453849;
    msg.z = 0.564523301619;
    msg.phi = 0.929582567936;
    msg.theta = 0.765793522998;
    msg.psi = 0.528382278099;
    msg.p = 0.091075711283;
    msg.q = 0.110015800049;
    msg.r = 0.0723746442597;
    msg.u = 0.0110889662982;
    msg.v = 0.670676123458;
    msg.w = 0.0647379974951;
    msg.bias_psi = 0.298799011954;
    msg.bias_r = 0.785017557371;

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
    msg.setTimeStamp(0.769710661774);
    msg.setSource(61783U);
    msg.setSourceEntity(187U);
    msg.setDestination(4595U);
    msg.setDestinationEntity(176U);
    msg.x = 0.171757467329;
    msg.y = 0.584233800011;
    msg.z = 0.547011164503;
    msg.phi = 0.758945503784;
    msg.theta = 0.180825042747;
    msg.psi = 0.0756462519129;
    msg.p = 0.131415384677;
    msg.q = 0.649727057012;
    msg.r = 0.0910324156446;
    msg.u = 0.204477658365;
    msg.v = 0.588680398977;
    msg.w = 0.145281149277;
    msg.bias_psi = 0.168833704142;
    msg.bias_r = 0.291812906411;

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
    msg.setTimeStamp(0.268706573012);
    msg.setSource(1474U);
    msg.setSourceEntity(81U);
    msg.setDestination(39644U);
    msg.setDestinationEntity(25U);
    msg.bias_psi = 0.241562116397;
    msg.bias_r = 0.351301858341;
    msg.cog = 0.847127320359;
    msg.cyaw = 0.239366203027;
    msg.lbl_rej_level = 0.395641806397;
    msg.gps_rej_level = 0.353949215007;
    msg.custom_x = 0.92586600464;
    msg.custom_y = 0.342555817647;
    msg.custom_z = 0.122007305216;

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
    msg.setTimeStamp(0.127678475128);
    msg.setSource(16381U);
    msg.setSourceEntity(52U);
    msg.setDestination(38078U);
    msg.setDestinationEntity(173U);
    msg.bias_psi = 0.793402588686;
    msg.bias_r = 0.0312924363425;
    msg.cog = 0.785273313507;
    msg.cyaw = 0.784397680652;
    msg.lbl_rej_level = 0.205283206139;
    msg.gps_rej_level = 0.845492244754;
    msg.custom_x = 0.0323895791651;
    msg.custom_y = 0.586348139561;
    msg.custom_z = 0.75544499134;

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
    msg.setTimeStamp(0.320935328045);
    msg.setSource(1830U);
    msg.setSourceEntity(103U);
    msg.setDestination(5514U);
    msg.setDestinationEntity(226U);
    msg.bias_psi = 0.52411526339;
    msg.bias_r = 0.426223459198;
    msg.cog = 0.715892407304;
    msg.cyaw = 0.102178853797;
    msg.lbl_rej_level = 0.18591178045;
    msg.gps_rej_level = 0.598272414246;
    msg.custom_x = 0.864687990842;
    msg.custom_y = 0.329373126627;
    msg.custom_z = 0.620156683672;

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
    msg.setTimeStamp(0.00422811508417);
    msg.setSource(43416U);
    msg.setSourceEntity(66U);
    msg.setDestination(23893U);
    msg.setDestinationEntity(119U);
    msg.utc_time = 0.647923034851;
    msg.reason = 237U;

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
    msg.setTimeStamp(0.650614825803);
    msg.setSource(12439U);
    msg.setSourceEntity(30U);
    msg.setDestination(5502U);
    msg.setDestinationEntity(184U);
    msg.utc_time = 0.947862245233;
    msg.reason = 246U;

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
    msg.setTimeStamp(0.839671731949);
    msg.setSource(29062U);
    msg.setSourceEntity(163U);
    msg.setDestination(16409U);
    msg.setDestinationEntity(133U);
    msg.utc_time = 0.212014606203;
    msg.reason = 146U;

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
    msg.setTimeStamp(0.696933657791);
    msg.setSource(60228U);
    msg.setSourceEntity(110U);
    msg.setDestination(48171U);
    msg.setDestinationEntity(174U);
    msg.id = 60U;
    msg.range = 0.949800071811;
    msg.acceptance = 64U;

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
    msg.setTimeStamp(0.363077394836);
    msg.setSource(26186U);
    msg.setSourceEntity(241U);
    msg.setDestination(55590U);
    msg.setDestinationEntity(76U);
    msg.id = 147U;
    msg.range = 0.545138532401;
    msg.acceptance = 234U;

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
    msg.setTimeStamp(0.298581710803);
    msg.setSource(59437U);
    msg.setSourceEntity(131U);
    msg.setDestination(33371U);
    msg.setDestinationEntity(47U);
    msg.id = 154U;
    msg.range = 0.326769672643;
    msg.acceptance = 245U;

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
    msg.setTimeStamp(0.0820061820658);
    msg.setSource(44584U);
    msg.setSourceEntity(190U);
    msg.setDestination(7250U);
    msg.setDestinationEntity(169U);
    msg.type = 97U;
    msg.reason = 131U;
    msg.value = 0.368305689922;
    msg.timestep = 0.094891191407;

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
    msg.setTimeStamp(0.254717093847);
    msg.setSource(61852U);
    msg.setSourceEntity(222U);
    msg.setDestination(39966U);
    msg.setDestinationEntity(94U);
    msg.type = 182U;
    msg.reason = 198U;
    msg.value = 0.451549735817;
    msg.timestep = 0.0340767728406;

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
    msg.setTimeStamp(0.436690641351);
    msg.setSource(20627U);
    msg.setSourceEntity(102U);
    msg.setDestination(44499U);
    msg.setDestinationEntity(199U);
    msg.type = 101U;
    msg.reason = 94U;
    msg.value = 0.445725470338;
    msg.timestep = 0.889040747347;

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
    msg.setTimeStamp(0.704826938899);
    msg.setSource(64666U);
    msg.setSourceEntity(143U);
    msg.setDestination(59605U);
    msg.setDestinationEntity(92U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PXVQJSQGLUCIGZJEWFUCUVMKCTZKRQHZULJAAEDSXDTNBARGFCVXCZIUWDJABFWSXNRQMOUWPRLKVMBHONNCNMFTYTMLJEYJYPUOYVOSMEXSOKAOS");
    tmp_msg_0.lat = 0.60677382289;
    tmp_msg_0.lon = 0.866610200045;
    tmp_msg_0.depth = 0.754724791284;
    tmp_msg_0.query_channel = 52U;
    tmp_msg_0.reply_channel = 50U;
    tmp_msg_0.transponder_delay = 213U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.67099059428;
    msg.y = 0.858710297197;
    msg.var_x = 0.429539905759;
    msg.var_y = 0.829670237518;
    msg.distance = 0.540999155388;

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
    msg.setTimeStamp(0.800408283118);
    msg.setSource(58859U);
    msg.setSourceEntity(112U);
    msg.setDestination(39012U);
    msg.setDestinationEntity(39U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EILYUKKLVUQIUCXIJPPOJJYISIVIKNJSWCTRYGBDRXVYGFVJWURCAJBMSLFYNYZMFHWNZHBHESHSMMIBHTPXUOGBLWNETTIKGHSAFCFASYXMXXPNZTWFOOWZQTEEHDEDEBWGDUNEQORK");
    tmp_msg_0.lat = 0.0627536649218;
    tmp_msg_0.lon = 0.115983612644;
    tmp_msg_0.depth = 0.0250266095364;
    tmp_msg_0.query_channel = 105U;
    tmp_msg_0.reply_channel = 130U;
    tmp_msg_0.transponder_delay = 130U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.170162795681;
    msg.y = 0.562850399868;
    msg.var_x = 0.613498645972;
    msg.var_y = 0.914104805725;
    msg.distance = 0.967240426994;

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
    msg.setTimeStamp(0.813920563198);
    msg.setSource(52916U);
    msg.setSourceEntity(133U);
    msg.setDestination(38637U);
    msg.setDestinationEntity(239U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LAKDOWPQZAMLUADUPJEGRMAUGOTQYXHZCWFDKZZBRWHZCVSLBCTBRVHMPFKEWMOJIRIGIHLGEEZQRHYFLJSRJYUEQQLSUZBJIBNVHSOIHFCXBKTOFLYDSISDBEZONCBHEPOBJLW");
    tmp_msg_0.lat = 0.190550795339;
    tmp_msg_0.lon = 0.634027314337;
    tmp_msg_0.depth = 0.66275290236;
    tmp_msg_0.query_channel = 51U;
    tmp_msg_0.reply_channel = 38U;
    tmp_msg_0.transponder_delay = 1U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.872511094139;
    msg.y = 0.275225115376;
    msg.var_x = 0.0119917143025;
    msg.var_y = 0.0642068896444;
    msg.distance = 0.39652135277;

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
    msg.setTimeStamp(0.893272528264);
    msg.setSource(54707U);
    msg.setSourceEntity(14U);
    msg.setDestination(48198U);
    msg.setDestinationEntity(164U);
    msg.state = 137U;

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
    msg.setTimeStamp(0.823459196666);
    msg.setSource(55916U);
    msg.setSourceEntity(243U);
    msg.setDestination(57560U);
    msg.setDestinationEntity(205U);
    msg.state = 111U;

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
    msg.setTimeStamp(0.854414650194);
    msg.setSource(26122U);
    msg.setSourceEntity(246U);
    msg.setDestination(54745U);
    msg.setDestinationEntity(96U);
    msg.state = 115U;

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
    msg.setTimeStamp(0.687892029845);
    msg.setSource(20421U);
    msg.setSourceEntity(78U);
    msg.setDestination(36605U);
    msg.setDestinationEntity(214U);
    msg.x = 0.196091334455;
    msg.y = 0.697515250124;
    msg.z = 0.660347631523;

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
    msg.setTimeStamp(0.0499900515528);
    msg.setSource(22575U);
    msg.setSourceEntity(60U);
    msg.setDestination(64485U);
    msg.setDestinationEntity(175U);
    msg.x = 0.491750439553;
    msg.y = 0.693564484801;
    msg.z = 0.654424448871;

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
    msg.setTimeStamp(0.689970123257);
    msg.setSource(35587U);
    msg.setSourceEntity(28U);
    msg.setDestination(46909U);
    msg.setDestinationEntity(180U);
    msg.x = 0.259403400573;
    msg.y = 0.2357675825;
    msg.z = 0.27558246429;

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
    msg.setTimeStamp(0.214539518648);
    msg.setSource(39002U);
    msg.setSourceEntity(76U);
    msg.setDestination(41015U);
    msg.setDestinationEntity(149U);
    msg.va = 0.972426263738;
    msg.aoa = 0.336217775944;
    msg.ssa = 0.89735851127;

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
    msg.setTimeStamp(0.890591229288);
    msg.setSource(31943U);
    msg.setSourceEntity(217U);
    msg.setDestination(62529U);
    msg.setDestinationEntity(17U);
    msg.va = 0.692436560521;
    msg.aoa = 0.329299517001;
    msg.ssa = 0.801446099366;

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
    msg.setTimeStamp(0.0266447822886);
    msg.setSource(59261U);
    msg.setSourceEntity(175U);
    msg.setDestination(64052U);
    msg.setDestinationEntity(193U);
    msg.va = 0.811047670408;
    msg.aoa = 0.412689430224;
    msg.ssa = 0.317856733743;

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
    msg.setTimeStamp(0.390826058732);
    msg.setSource(27191U);
    msg.setSourceEntity(214U);
    msg.setDestination(65251U);
    msg.setDestinationEntity(56U);
    msg.value = 0.419003325199;

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
    msg.setTimeStamp(0.659439157335);
    msg.setSource(30859U);
    msg.setSourceEntity(156U);
    msg.setDestination(50831U);
    msg.setDestinationEntity(147U);
    msg.value = 0.630990224675;

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
    msg.setTimeStamp(0.176401468927);
    msg.setSource(38140U);
    msg.setSourceEntity(6U);
    msg.setDestination(6009U);
    msg.setDestinationEntity(151U);
    msg.value = 0.158922834716;

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
    msg.setTimeStamp(0.556338889834);
    msg.setSource(119U);
    msg.setSourceEntity(114U);
    msg.setDestination(1091U);
    msg.setDestinationEntity(180U);
    msg.value = 0.281535001749;
    msg.z_units = 68U;

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
    msg.setTimeStamp(0.977238925607);
    msg.setSource(51229U);
    msg.setSourceEntity(43U);
    msg.setDestination(50732U);
    msg.setDestinationEntity(96U);
    msg.value = 0.0996981979006;
    msg.z_units = 126U;

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
    msg.setTimeStamp(0.981210394849);
    msg.setSource(31699U);
    msg.setSourceEntity(64U);
    msg.setDestination(20556U);
    msg.setDestinationEntity(137U);
    msg.value = 0.0463190333994;
    msg.z_units = 83U;

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
    msg.setTimeStamp(0.910377958429);
    msg.setSource(34708U);
    msg.setSourceEntity(30U);
    msg.setDestination(45909U);
    msg.setDestinationEntity(224U);
    msg.value = 0.359843737226;
    msg.speed_units = 149U;

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
    msg.setTimeStamp(0.464715243719);
    msg.setSource(52403U);
    msg.setSourceEntity(24U);
    msg.setDestination(47436U);
    msg.setDestinationEntity(220U);
    msg.value = 0.715504051903;
    msg.speed_units = 94U;

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
    msg.setTimeStamp(0.840696905025);
    msg.setSource(19680U);
    msg.setSourceEntity(83U);
    msg.setDestination(21134U);
    msg.setDestinationEntity(252U);
    msg.value = 0.43131107041;
    msg.speed_units = 8U;

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
    msg.setTimeStamp(0.0986733852894);
    msg.setSource(7474U);
    msg.setSourceEntity(103U);
    msg.setDestination(18573U);
    msg.setDestinationEntity(224U);
    msg.value = 0.361239249742;

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
    msg.setTimeStamp(0.663342205757);
    msg.setSource(34594U);
    msg.setSourceEntity(246U);
    msg.setDestination(15159U);
    msg.setDestinationEntity(110U);
    msg.value = 0.973986639981;

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
    msg.setTimeStamp(0.21097814936);
    msg.setSource(30862U);
    msg.setSourceEntity(241U);
    msg.setDestination(52714U);
    msg.setDestinationEntity(123U);
    msg.value = 0.539817293119;

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
    msg.setTimeStamp(0.986929783999);
    msg.setSource(36538U);
    msg.setSourceEntity(109U);
    msg.setDestination(57722U);
    msg.setDestinationEntity(131U);
    msg.value = 0.572728188187;

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
    msg.setTimeStamp(0.511377043204);
    msg.setSource(43035U);
    msg.setSourceEntity(0U);
    msg.setDestination(58128U);
    msg.setDestinationEntity(188U);
    msg.value = 0.833344284546;

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
    msg.setTimeStamp(0.54207960233);
    msg.setSource(24127U);
    msg.setSourceEntity(65U);
    msg.setDestination(37089U);
    msg.setDestinationEntity(46U);
    msg.value = 0.188652655623;

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
    msg.setTimeStamp(0.907374995806);
    msg.setSource(36560U);
    msg.setSourceEntity(129U);
    msg.setDestination(59434U);
    msg.setDestinationEntity(63U);
    msg.value = 0.774636024414;

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
    msg.setTimeStamp(0.875461085137);
    msg.setSource(32965U);
    msg.setSourceEntity(91U);
    msg.setDestination(19090U);
    msg.setDestinationEntity(5U);
    msg.value = 0.879740219893;

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
    msg.setTimeStamp(0.284044518159);
    msg.setSource(33861U);
    msg.setSourceEntity(252U);
    msg.setDestination(62776U);
    msg.setDestinationEntity(224U);
    msg.value = 0.197126110977;

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
    msg.setTimeStamp(0.683500766587);
    msg.setSource(54272U);
    msg.setSourceEntity(33U);
    msg.setDestination(38285U);
    msg.setDestinationEntity(62U);
    msg.path_ref = 3750631003U;
    msg.start_lat = 0.314770053554;
    msg.start_lon = 0.0426467099194;
    msg.start_z = 0.66172474276;
    msg.start_z_units = 211U;
    msg.end_lat = 0.252594623695;
    msg.end_lon = 0.683026624135;
    msg.end_z = 0.742751393718;
    msg.end_z_units = 128U;
    msg.speed = 0.687974633337;
    msg.speed_units = 244U;
    msg.lradius = 0.258145442007;
    msg.flags = 165U;

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
    msg.setTimeStamp(0.427785270898);
    msg.setSource(56580U);
    msg.setSourceEntity(152U);
    msg.setDestination(20434U);
    msg.setDestinationEntity(196U);
    msg.path_ref = 3928780269U;
    msg.start_lat = 0.387989516477;
    msg.start_lon = 0.116498672951;
    msg.start_z = 0.347644043798;
    msg.start_z_units = 92U;
    msg.end_lat = 0.995356115054;
    msg.end_lon = 0.843863693989;
    msg.end_z = 0.859091236848;
    msg.end_z_units = 216U;
    msg.speed = 0.653227259626;
    msg.speed_units = 97U;
    msg.lradius = 0.269932141383;
    msg.flags = 104U;

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
    msg.setTimeStamp(0.596368822884);
    msg.setSource(29228U);
    msg.setSourceEntity(215U);
    msg.setDestination(59796U);
    msg.setDestinationEntity(175U);
    msg.path_ref = 3393293521U;
    msg.start_lat = 0.85385268512;
    msg.start_lon = 0.822261077296;
    msg.start_z = 0.0244053410788;
    msg.start_z_units = 175U;
    msg.end_lat = 0.00790621714287;
    msg.end_lon = 0.741388474439;
    msg.end_z = 0.803676152829;
    msg.end_z_units = 223U;
    msg.speed = 0.867983345819;
    msg.speed_units = 34U;
    msg.lradius = 0.127324579318;
    msg.flags = 194U;

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
    msg.setTimeStamp(0.541448637564);
    msg.setSource(16038U);
    msg.setSourceEntity(133U);
    msg.setDestination(32884U);
    msg.setDestinationEntity(43U);
    msg.x = 0.651443202208;
    msg.y = 0.74221473131;
    msg.z = 0.00790785049145;
    msg.k = 0.867578859103;
    msg.m = 0.255083436611;
    msg.n = 0.997240727941;
    msg.flags = 141U;

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
    msg.setTimeStamp(0.70916270283);
    msg.setSource(4722U);
    msg.setSourceEntity(251U);
    msg.setDestination(39792U);
    msg.setDestinationEntity(240U);
    msg.x = 0.149841606075;
    msg.y = 0.0497932078581;
    msg.z = 0.56988657057;
    msg.k = 0.690575529018;
    msg.m = 0.180670180154;
    msg.n = 0.406571217344;
    msg.flags = 186U;

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
    msg.setTimeStamp(0.602152825815);
    msg.setSource(32128U);
    msg.setSourceEntity(145U);
    msg.setDestination(14488U);
    msg.setDestinationEntity(203U);
    msg.x = 0.0719063069425;
    msg.y = 0.343100238731;
    msg.z = 0.771645053185;
    msg.k = 0.510357817051;
    msg.m = 0.00963160453743;
    msg.n = 0.599307072399;
    msg.flags = 83U;

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
    msg.setTimeStamp(0.641003242758);
    msg.setSource(38348U);
    msg.setSourceEntity(47U);
    msg.setDestination(39841U);
    msg.setDestinationEntity(144U);
    msg.value = 0.0109919211659;

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
    msg.setTimeStamp(0.648843209862);
    msg.setSource(19402U);
    msg.setSourceEntity(112U);
    msg.setDestination(60187U);
    msg.setDestinationEntity(144U);
    msg.value = 0.861037980429;

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
    msg.setTimeStamp(0.520038044077);
    msg.setSource(500U);
    msg.setSourceEntity(143U);
    msg.setDestination(49704U);
    msg.setDestinationEntity(241U);
    msg.value = 0.834296773196;

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
    msg.setTimeStamp(0.957576464677);
    msg.setSource(18668U);
    msg.setSourceEntity(143U);
    msg.setDestination(26358U);
    msg.setDestinationEntity(56U);
    msg.u = 0.0462326073821;
    msg.v = 0.204198709071;
    msg.w = 0.25359174014;
    msg.p = 0.577414583752;
    msg.q = 0.482609685055;
    msg.r = 0.772180825856;
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
    msg.setTimeStamp(0.151778147593);
    msg.setSource(26622U);
    msg.setSourceEntity(12U);
    msg.setDestination(50072U);
    msg.setDestinationEntity(253U);
    msg.u = 0.207627627865;
    msg.v = 0.280234088864;
    msg.w = 0.972987004501;
    msg.p = 0.928383615087;
    msg.q = 0.795124656797;
    msg.r = 0.678906339617;
    msg.flags = 60U;

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
    msg.setTimeStamp(0.525317504557);
    msg.setSource(55942U);
    msg.setSourceEntity(102U);
    msg.setDestination(4539U);
    msg.setDestinationEntity(161U);
    msg.u = 0.00304001139667;
    msg.v = 0.354138715483;
    msg.w = 0.0999485472692;
    msg.p = 0.584029834237;
    msg.q = 0.803596968551;
    msg.r = 0.919929435088;
    msg.flags = 146U;

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
    msg.setTimeStamp(0.236517064945);
    msg.setSource(302U);
    msg.setSourceEntity(220U);
    msg.setDestination(64900U);
    msg.setDestinationEntity(60U);
    msg.path_ref = 49377371U;
    msg.start_lat = 0.848750415123;
    msg.start_lon = 0.288374166974;
    msg.start_z = 0.162184538189;
    msg.start_z_units = 232U;
    msg.end_lat = 0.0590655233132;
    msg.end_lon = 0.309987627374;
    msg.end_z = 0.935772835188;
    msg.end_z_units = 164U;
    msg.lradius = 0.997146966175;
    msg.flags = 46U;
    msg.x = 0.725690757326;
    msg.y = 0.511433185664;
    msg.z = 0.585628136269;
    msg.vx = 0.296217428534;
    msg.vy = 0.0549450919363;
    msg.vz = 0.927158647538;
    msg.course_error = 0.580661659764;
    msg.eta = 17871U;

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
    msg.setTimeStamp(0.246251005572);
    msg.setSource(12204U);
    msg.setSourceEntity(155U);
    msg.setDestination(56548U);
    msg.setDestinationEntity(93U);
    msg.path_ref = 3924548087U;
    msg.start_lat = 0.937131542042;
    msg.start_lon = 0.107342386703;
    msg.start_z = 0.904487887133;
    msg.start_z_units = 2U;
    msg.end_lat = 0.283514016418;
    msg.end_lon = 0.853945855368;
    msg.end_z = 0.899758067866;
    msg.end_z_units = 75U;
    msg.lradius = 0.370988085344;
    msg.flags = 82U;
    msg.x = 0.153802805965;
    msg.y = 0.178007891482;
    msg.z = 0.22326021579;
    msg.vx = 0.0835603413092;
    msg.vy = 0.531646170719;
    msg.vz = 0.67491435865;
    msg.course_error = 0.592131989927;
    msg.eta = 64628U;

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
    msg.setTimeStamp(0.0160998179015);
    msg.setSource(33619U);
    msg.setSourceEntity(0U);
    msg.setDestination(46105U);
    msg.setDestinationEntity(179U);
    msg.path_ref = 4193117932U;
    msg.start_lat = 0.74122034765;
    msg.start_lon = 0.971515990289;
    msg.start_z = 0.685521092707;
    msg.start_z_units = 141U;
    msg.end_lat = 0.627345556959;
    msg.end_lon = 0.112848166136;
    msg.end_z = 0.239737818466;
    msg.end_z_units = 189U;
    msg.lradius = 0.743869445519;
    msg.flags = 174U;
    msg.x = 0.644266229237;
    msg.y = 0.571040862322;
    msg.z = 0.236229919328;
    msg.vx = 0.992440219123;
    msg.vy = 0.742541337108;
    msg.vz = 0.0807815537547;
    msg.course_error = 0.134943249304;
    msg.eta = 20250U;

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
    msg.setTimeStamp(0.409706824939);
    msg.setSource(54745U);
    msg.setSourceEntity(32U);
    msg.setDestination(32346U);
    msg.setDestinationEntity(192U);
    msg.k = 0.822242854385;
    msg.m = 0.498490023739;
    msg.n = 0.428345664074;

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
    msg.setTimeStamp(0.822813339233);
    msg.setSource(8098U);
    msg.setSourceEntity(91U);
    msg.setDestination(53447U);
    msg.setDestinationEntity(20U);
    msg.k = 0.0896964699605;
    msg.m = 0.448594378886;
    msg.n = 0.102910542218;

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
    msg.setTimeStamp(0.0652651545774);
    msg.setSource(1291U);
    msg.setSourceEntity(81U);
    msg.setDestination(61135U);
    msg.setDestinationEntity(90U);
    msg.k = 0.887544646549;
    msg.m = 0.260182210352;
    msg.n = 0.00575275427686;

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
    msg.setTimeStamp(0.462386235119);
    msg.setSource(15853U);
    msg.setSourceEntity(239U);
    msg.setDestination(42183U);
    msg.setDestinationEntity(176U);
    msg.p = 0.744925313455;
    msg.i = 0.766428070689;
    msg.d = 0.834619656427;
    msg.a = 0.405378284437;

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
    msg.setTimeStamp(0.916078262675);
    msg.setSource(6692U);
    msg.setSourceEntity(168U);
    msg.setDestination(23044U);
    msg.setDestinationEntity(211U);
    msg.p = 0.866168263088;
    msg.i = 0.163866346648;
    msg.d = 0.284230806084;
    msg.a = 0.475576654438;

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
    msg.setTimeStamp(0.923256618992);
    msg.setSource(7411U);
    msg.setSourceEntity(167U);
    msg.setDestination(13140U);
    msg.setDestinationEntity(65U);
    msg.p = 0.658607698214;
    msg.i = 0.175460871736;
    msg.d = 0.616370789573;
    msg.a = 0.508554499307;

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
    msg.setTimeStamp(0.981725136922);
    msg.setSource(14954U);
    msg.setSourceEntity(57U);
    msg.setDestination(64235U);
    msg.setDestinationEntity(158U);
    msg.op = 41U;

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
    msg.setTimeStamp(0.1729636524);
    msg.setSource(54618U);
    msg.setSourceEntity(187U);
    msg.setDestination(20573U);
    msg.setDestinationEntity(102U);
    msg.op = 159U;

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
    msg.setTimeStamp(0.694814370838);
    msg.setSource(6637U);
    msg.setSourceEntity(82U);
    msg.setDestination(32638U);
    msg.setDestinationEntity(38U);
    msg.op = 182U;

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
    msg.setTimeStamp(0.459263549272);
    msg.setSource(10149U);
    msg.setSourceEntity(187U);
    msg.setDestination(9790U);
    msg.setDestinationEntity(17U);
    msg.x = 0.168452511508;
    msg.y = 0.0794367852586;
    msg.z = 0.647521502136;
    msg.vx = 0.447284605049;
    msg.vy = 0.233353788435;
    msg.vz = 0.103586238433;
    msg.ax = 0.753516683052;
    msg.ay = 0.982563499306;
    msg.az = 0.118727941833;
    msg.flags = 27631U;

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
    msg.setTimeStamp(0.525129713719);
    msg.setSource(60016U);
    msg.setSourceEntity(76U);
    msg.setDestination(5325U);
    msg.setDestinationEntity(21U);
    msg.x = 0.956572428965;
    msg.y = 0.581425859243;
    msg.z = 0.601735599365;
    msg.vx = 0.290967808033;
    msg.vy = 0.893467652008;
    msg.vz = 0.374368748681;
    msg.ax = 0.0707267234842;
    msg.ay = 0.268834158977;
    msg.az = 0.226317884599;
    msg.flags = 56056U;

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
    msg.setTimeStamp(0.72925721718);
    msg.setSource(55818U);
    msg.setSourceEntity(161U);
    msg.setDestination(51258U);
    msg.setDestinationEntity(10U);
    msg.x = 0.789429395617;
    msg.y = 0.4161495765;
    msg.z = 0.540402970119;
    msg.vx = 0.564786574542;
    msg.vy = 0.427851616786;
    msg.vz = 0.975391304523;
    msg.ax = 0.970233967253;
    msg.ay = 0.353569038212;
    msg.az = 0.60884615702;
    msg.flags = 13868U;

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
    msg.setTimeStamp(0.786800857825);
    msg.setSource(29473U);
    msg.setSourceEntity(51U);
    msg.setDestination(16612U);
    msg.setDestinationEntity(117U);
    msg.value = 0.293525444966;

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
    msg.setTimeStamp(0.489808024045);
    msg.setSource(33508U);
    msg.setSourceEntity(9U);
    msg.setDestination(64422U);
    msg.setDestinationEntity(186U);
    msg.value = 0.316227622121;

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
    msg.setTimeStamp(0.752424796136);
    msg.setSource(28543U);
    msg.setSourceEntity(173U);
    msg.setDestination(35493U);
    msg.setDestinationEntity(6U);
    msg.value = 0.854986699037;

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
    msg.setTimeStamp(0.509373210705);
    msg.setSource(29849U);
    msg.setSourceEntity(244U);
    msg.setDestination(42301U);
    msg.setDestinationEntity(45U);
    msg.timeout = 7149U;
    msg.lat = 0.206359262707;
    msg.lon = 0.425322188561;
    msg.z = 0.756447233033;
    msg.z_units = 192U;
    msg.speed = 0.77331800976;
    msg.speed_units = 195U;
    msg.roll = 0.162337807384;
    msg.pitch = 0.470186425472;
    msg.yaw = 0.0907362669182;
    msg.custom.assign("QVQLOUOZASOSQESGWDDXZNXRLUIXCTEEWRLOQHVJKHIMVPXBAWRRGJSWZPIJYPSAFAJKUSFGNQWFWDJTRDPLBCRF");

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
    msg.setTimeStamp(0.603377955157);
    msg.setSource(147U);
    msg.setSourceEntity(181U);
    msg.setDestination(26179U);
    msg.setDestinationEntity(196U);
    msg.timeout = 52021U;
    msg.lat = 0.814187050124;
    msg.lon = 0.713617469521;
    msg.z = 0.764939148349;
    msg.z_units = 166U;
    msg.speed = 0.104267860994;
    msg.speed_units = 46U;
    msg.roll = 0.485550414547;
    msg.pitch = 0.712200743513;
    msg.yaw = 0.931911191473;
    msg.custom.assign("RZJHCLOTHACJJWYHDOWLQIHFSYGXAQWMYNAXVGFQZVMMWBAJCOKDJOCEDSFFQKYQKOIBCDEXTZZRVWIYSBZEIKVPRUSXEVEUSWHBGHJOUTDALXDJWRMCYMNHBLPNYRIXPZVUKSNVFAGMAZTTTMQCGALPQCRPJEOFANTSLWCERUNPLLMKBVUBBGIYKWZEH");

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
    msg.setTimeStamp(0.855158780093);
    msg.setSource(44582U);
    msg.setSourceEntity(22U);
    msg.setDestination(35652U);
    msg.setDestinationEntity(183U);
    msg.timeout = 24346U;
    msg.lat = 0.642697334374;
    msg.lon = 0.673281247344;
    msg.z = 0.624907239026;
    msg.z_units = 147U;
    msg.speed = 0.668782773335;
    msg.speed_units = 0U;
    msg.roll = 0.853588160312;
    msg.pitch = 0.0204817316425;
    msg.yaw = 0.593583566247;
    msg.custom.assign("LEJZZBALFBZUDGELGQGAZJJYFVCFQLEKHAFPQMHQPPUJHOKSKAVGIXTTFNDNWRTLADDGVYEEDOUIKUQSEH");

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
    msg.setTimeStamp(0.596995345916);
    msg.setSource(15703U);
    msg.setSourceEntity(58U);
    msg.setDestination(39890U);
    msg.setDestinationEntity(241U);
    msg.timeout = 50780U;
    msg.lat = 0.902083734817;
    msg.lon = 0.695907032043;
    msg.z = 0.311395689128;
    msg.z_units = 31U;
    msg.speed = 0.679298738252;
    msg.speed_units = 68U;
    msg.duration = 35080U;
    msg.radius = 0.895788587129;
    msg.flags = 22U;
    msg.custom.assign("NYBDNJYNCJJGQOZUVHDKURSGVXQXRKDCZZHHIDDFJPIMUVGAHKJQJMUCSVZREPCUOANNHAFFVUEFPV");

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
    msg.setTimeStamp(0.68248964407);
    msg.setSource(63361U);
    msg.setSourceEntity(36U);
    msg.setDestination(14451U);
    msg.setDestinationEntity(39U);
    msg.timeout = 31511U;
    msg.lat = 0.989575519716;
    msg.lon = 0.90303005106;
    msg.z = 0.37118625599;
    msg.z_units = 167U;
    msg.speed = 0.226432745282;
    msg.speed_units = 68U;
    msg.duration = 50494U;
    msg.radius = 0.603144504869;
    msg.flags = 175U;
    msg.custom.assign("UJZQDPQFSFPQXAODBJXORMIPMLSIXXELMODZZFORIOGWSVHFGUTXUBYHIPKOBKTPDLWPZTNYJFCVJUAAIULNYSZYQJWVXKGTRDTG");

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
    msg.setTimeStamp(0.277596294276);
    msg.setSource(43979U);
    msg.setSourceEntity(94U);
    msg.setDestination(24866U);
    msg.setDestinationEntity(146U);
    msg.timeout = 58319U;
    msg.lat = 0.122221630087;
    msg.lon = 0.759888401283;
    msg.z = 0.1227450345;
    msg.z_units = 21U;
    msg.speed = 0.173930036799;
    msg.speed_units = 68U;
    msg.duration = 62605U;
    msg.radius = 0.820686611255;
    msg.flags = 111U;
    msg.custom.assign("QXIXTZOTJOOCQYXQGSCKMNCRVAJEZHHITOWZFNWIBXLLJRZQMBQHMHJMZQUGYDCCUHNENPOCNRBLBGNQEMZRPTICUYJPWLOISJKWTDRLTGAAXKPAGZTZPWVYGAPAIKGSYRWATFFDCYUQJRDKXKQDEIPPXEUGDYN");

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
    msg.setTimeStamp(0.0750749230782);
    msg.setSource(9262U);
    msg.setSourceEntity(80U);
    msg.setDestination(15754U);
    msg.setDestinationEntity(232U);
    msg.custom.assign("ANGPNEZUSYQODXFNRKDGJDEBZTAYYLLPPUPQJHHVCKJIUXKVVBCWH");

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
    msg.setTimeStamp(0.631817085547);
    msg.setSource(18547U);
    msg.setSourceEntity(36U);
    msg.setDestination(6891U);
    msg.setDestinationEntity(145U);
    msg.custom.assign("WQMJXECGOXULJQBGTHTQEABKXIQIADWVOTMVMYMTBXNZFRHRYJOVVFLZYAMFEQMHDDEJTJOEJKQPRJPZQJAYDPSADPBXFNGHSGCFKZHLHSGOZIXNZOIHCETPMIDBIFCSCUOTHVNNJSWFIBCJOULKYMVYLTYDQEITPOEEUUKDWZKNVCPAVXRLWSSXBXZWCZRDKTZQFWSBYCRUALWUCNABKLYBUMMPHILUIQLNGSGGRVFYKVSNKUFDPWEARW");

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
    msg.setTimeStamp(0.384102350317);
    msg.setSource(32421U);
    msg.setSourceEntity(54U);
    msg.setDestination(6924U);
    msg.setDestinationEntity(113U);
    msg.custom.assign("YPCEOREJJSXUHVLSITXMVKJMWSYUPWHVMNWWUGAGMJGNBEQQWEOWTCQHZXDSLPBANVERZHWLUZPHUBYIZXZRSTCPIJPTY");

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
    msg.setTimeStamp(0.746258014355);
    msg.setSource(60374U);
    msg.setSourceEntity(47U);
    msg.setDestination(42823U);
    msg.setDestinationEntity(40U);
    msg.timeout = 34191U;
    msg.lat = 0.923242179977;
    msg.lon = 0.299736353273;
    msg.z = 0.416706938004;
    msg.z_units = 98U;
    msg.duration = 46640U;
    msg.speed = 0.716938178773;
    msg.speed_units = 93U;
    msg.type = 163U;
    msg.radius = 0.00470995635302;
    msg.length = 0.658810812895;
    msg.bearing = 0.477755250455;
    msg.direction = 98U;
    msg.custom.assign("GCLJCHRVUVKGXPDFOWPIFVSRQUCRGYMTTNCATGMGZQNPZAGKBWIOMZHHDFJTLDVBHODXBANESEGEXHWEVZELISYFWVKOPUUSSBWOECBXZWQMLAXOK");

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
    msg.setTimeStamp(0.725227714389);
    msg.setSource(38979U);
    msg.setSourceEntity(112U);
    msg.setDestination(51073U);
    msg.setDestinationEntity(92U);
    msg.timeout = 16736U;
    msg.lat = 0.687051247742;
    msg.lon = 0.0934573982079;
    msg.z = 0.427477390937;
    msg.z_units = 121U;
    msg.duration = 51769U;
    msg.speed = 0.678249287677;
    msg.speed_units = 213U;
    msg.type = 51U;
    msg.radius = 0.288293323376;
    msg.length = 0.330899486176;
    msg.bearing = 0.682017334675;
    msg.direction = 56U;
    msg.custom.assign("FJQRDENVNIENGCIAYXYMNKQKPVKOUUPJYJKLOOYPSJWFGHFEQVCLRNNCOUUWLDAWRJLEMUSZQQFTPBOGMHPCIFJNYYXRPHFPQS");

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
    msg.setTimeStamp(0.904296449942);
    msg.setSource(50364U);
    msg.setSourceEntity(176U);
    msg.setDestination(46520U);
    msg.setDestinationEntity(252U);
    msg.timeout = 50464U;
    msg.lat = 0.463889920333;
    msg.lon = 0.985598617872;
    msg.z = 0.519728951776;
    msg.z_units = 122U;
    msg.duration = 40002U;
    msg.speed = 0.986031237164;
    msg.speed_units = 133U;
    msg.type = 185U;
    msg.radius = 0.979858699757;
    msg.length = 0.302194376199;
    msg.bearing = 0.108504716666;
    msg.direction = 247U;
    msg.custom.assign("FVKIMWEFEDUQBNCYREWNFNUIYVIAP");

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
    msg.setTimeStamp(0.292019540402);
    msg.setSource(9899U);
    msg.setSourceEntity(53U);
    msg.setDestination(50982U);
    msg.setDestinationEntity(180U);
    msg.duration = 57183U;
    msg.custom.assign("WUELXTBZZDBPXQPWIUKHHCYLEEWIFXLLHRMSTISYVXLGBTMYKNSQKSVIWBIUDFRQCUKGMPHYDJFCNPBJZSTPZEPFMUAVFGYATOXQPKXDFTURGMQGUFYCZHBTWWEODFBAGHKCMOEACXRSVJOGEJSHLOIFDBGLHGRKRZUWNXDOIVVMQRSNISRMUAUCDCXLZCEWVPNZAOTYFQJNNNEJRLHLXTQJYPYRJKVIQAQZVGOANKPMJBIEV");

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
    msg.setTimeStamp(0.195915485966);
    msg.setSource(12018U);
    msg.setSourceEntity(60U);
    msg.setDestination(65116U);
    msg.setDestinationEntity(212U);
    msg.duration = 51938U;
    msg.custom.assign("UBVVPFOKDJCNTSBEZEHHWHBDHBBRVGPVCDQUQRYLNXJISDUKJXFTWGOMLRRAZSKDLOBOIKDUQOTWWMUGMJHKSGTQBPIISYXJEXCAABLCYKMYKXEJCADUHMUHTPQWIODXQPULYYFOZYZMALCLJARLTNNREMSKCSHTNCGORSVNZFAVTRRFQGQNLJPTPKVATVEJWCWXCEXSMIWPEGYMIUVJPHFNZMYQNZVYBIH");

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
    msg.setTimeStamp(0.201819328254);
    msg.setSource(22949U);
    msg.setSourceEntity(231U);
    msg.setDestination(37767U);
    msg.setDestinationEntity(254U);
    msg.duration = 31684U;
    msg.custom.assign("TIGCZWUXZFJYDCRYQIAPYIEUBZWYLTCFRRXJHDCBVFXATDEVCIQPXMQHGJGCAPFBJMOIBDULUSBMNQDLCCVGZMEEQTXWWUVOIK");

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
    msg.setTimeStamp(0.61456654129);
    msg.setSource(47109U);
    msg.setSourceEntity(249U);
    msg.setDestination(18082U);
    msg.setDestinationEntity(226U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.990604784083;
    msg.control.set(tmp_msg_0);
    msg.duration = 57414U;
    msg.custom.assign("AYMPSQWWHRLXIZWUAFFACVVLQYERWZCEYEZEJUXBOQTCDYCSUKNEBSQZTCIRUSPIHJCBSPZH");

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
    msg.setTimeStamp(0.767678291288);
    msg.setSource(22855U);
    msg.setSourceEntity(60U);
    msg.setDestination(43393U);
    msg.setDestinationEntity(36U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.636966112537;
    msg.control.set(tmp_msg_0);
    msg.duration = 22426U;
    msg.custom.assign("GILPVZDNDGHGLVDZJJNCHQAYRKHTAGPVIUAMOVDBGBZPQRLCOOPQRUSRZAANPNCKSEXNDBAFZXPGTNUTMHFRYMGGAMYPAEGCHVEVEHWXALSJRDFDXZEUPBJYNTVSXYXBHJTPSXWFUWXTTMJUBHLIUIDOC");

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
    msg.setTimeStamp(0.626720939397);
    msg.setSource(1848U);
    msg.setSourceEntity(78U);
    msg.setDestination(51075U);
    msg.setDestinationEntity(110U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.279899940624;
    tmp_msg_0.speed_units = 207U;
    msg.control.set(tmp_msg_0);
    msg.duration = 34475U;
    msg.custom.assign("DACAKBNWRLJFMHGQCTWSYFMQUAIMFYRZLJKKYWPUYVKMCLKBERPTDAQHTCQKSQWDPTUVJPERCXQVNVJAWZHDUXUROJBEWVMLFBCCCAEYTGEZIMINSJPMJICOBVOGXFEANYHJUHYOHRITHZWBDXIYEXZLZF");

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
    msg.setTimeStamp(0.751045995472);
    msg.setSource(11701U);
    msg.setSourceEntity(216U);
    msg.setDestination(35993U);
    msg.setDestinationEntity(168U);
    msg.timeout = 36966U;
    msg.lat = 0.873377122628;
    msg.lon = 0.149314717723;
    msg.z = 0.250838426583;
    msg.z_units = 101U;
    msg.speed = 0.848923267895;
    msg.speed_units = 62U;
    msg.bearing = 0.733973236083;
    msg.cross_angle = 0.119279298815;
    msg.width = 0.542856395837;
    msg.length = 0.163537819122;
    msg.hstep = 0.401284972778;
    msg.coff = 151U;
    msg.alternation = 8U;
    msg.flags = 248U;
    msg.custom.assign("QGXTQTJNVNAIFGAMYNTGSPIQJYNFBJLBTKOQIYTOQZHFDZALELCZBHKHXUVWMBHGAQHRKSVCHZWEAECXMMQXWNQGUBFAGZBERORDFBVVFMYDPPIYTDZPENXYGFGPDIJNJPBWNMSIXUTNYJHEEGUVXOKLTKWVZCVISWQPCVALSEXKZDOSWKRHRBLFUODFCGTZHCCTJMSO");

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
    msg.setTimeStamp(0.633726484394);
    msg.setSource(18230U);
    msg.setSourceEntity(209U);
    msg.setDestination(49675U);
    msg.setDestinationEntity(182U);
    msg.timeout = 51602U;
    msg.lat = 0.862041576057;
    msg.lon = 0.287444385724;
    msg.z = 0.31964737879;
    msg.z_units = 175U;
    msg.speed = 0.865252930359;
    msg.speed_units = 159U;
    msg.bearing = 0.0587933125154;
    msg.cross_angle = 0.521854354824;
    msg.width = 0.342209117055;
    msg.length = 0.096017520067;
    msg.hstep = 0.723315752322;
    msg.coff = 91U;
    msg.alternation = 9U;
    msg.flags = 65U;
    msg.custom.assign("BVDVPVZXXSGKMMFGPJRJOQDFMRAWOKZRCMGLRQOOAJYZUAMUYTPCAEXYQVYSKPKUCFNRWTUBLOJUGOBLHCECSPPBNVUIDVQUHSNIVQGVFEJEHGDHEENAMLMBCOQTBSAHDAZWDJYXGWQNENOYUPFPIBTKTNLIWRWKTMEWWZFGPRLZESKFORQDUYCLXASXRIAF");

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
    msg.setTimeStamp(0.935406093309);
    msg.setSource(17440U);
    msg.setSourceEntity(61U);
    msg.setDestination(62968U);
    msg.setDestinationEntity(202U);
    msg.timeout = 39265U;
    msg.lat = 0.523811024374;
    msg.lon = 0.0384759888813;
    msg.z = 0.741931198844;
    msg.z_units = 122U;
    msg.speed = 0.772057276691;
    msg.speed_units = 57U;
    msg.bearing = 0.13641298146;
    msg.cross_angle = 0.24734490012;
    msg.width = 0.924897120836;
    msg.length = 0.0410164979787;
    msg.hstep = 0.717352653805;
    msg.coff = 42U;
    msg.alternation = 206U;
    msg.flags = 54U;
    msg.custom.assign("RJTECWGGZRVNTFQQGLEILOAIWKADKFHQBAJCBODPJOJKGBSDPLH");

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
    msg.setTimeStamp(0.193809860407);
    msg.setSource(6947U);
    msg.setSourceEntity(224U);
    msg.setDestination(52113U);
    msg.setDestinationEntity(78U);
    msg.timeout = 65339U;
    msg.lat = 0.462639042151;
    msg.lon = 0.961068064265;
    msg.z = 0.491059141856;
    msg.z_units = 37U;
    msg.speed = 0.991483749616;
    msg.speed_units = 138U;
    msg.custom.assign("GPQCZTEWBEZHNUJWCIDDAMGAOCFSIUCEQHOLOAKKCGAEWYOMWDTJLZDGU");

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
    msg.setTimeStamp(0.412135328259);
    msg.setSource(36654U);
    msg.setSourceEntity(203U);
    msg.setDestination(20309U);
    msg.setDestinationEntity(186U);
    msg.timeout = 43891U;
    msg.lat = 0.283095099777;
    msg.lon = 0.481301822662;
    msg.z = 0.40995387238;
    msg.z_units = 56U;
    msg.speed = 0.791539691142;
    msg.speed_units = 54U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.932900720876;
    tmp_msg_0.y = 0.27159674374;
    tmp_msg_0.z = 0.27116236362;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("SBIYOCGXDSFGAYMZHFFINQQBFISQGUVWMJZMQEVAWEFLBU");

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
    msg.setTimeStamp(0.188340688434);
    msg.setSource(39361U);
    msg.setSourceEntity(74U);
    msg.setDestination(12063U);
    msg.setDestinationEntity(229U);
    msg.timeout = 31598U;
    msg.lat = 0.737272282858;
    msg.lon = 0.553408483268;
    msg.z = 0.913369955636;
    msg.z_units = 58U;
    msg.speed = 0.651414748188;
    msg.speed_units = 221U;
    msg.custom.assign("WVAYCEJADWWYHJXXHAODYHZWFOHCEBUPDTBZCVYVMCKWKTGNLHQBPKGIPVJKRAYIDOLBZTSZNRRFJCCMXBSNMMXEESAPQEJNZHWYHOTLFMVVZYBSFEUKREKGUCORHRIDLWSVPWDENGZRKVMTFQUCPCISLEQDYTOOGUNUZTJL");

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
    msg.setTimeStamp(0.529279449408);
    msg.setSource(30274U);
    msg.setSourceEntity(159U);
    msg.setDestination(16258U);
    msg.setDestinationEntity(228U);
    msg.x = 0.326733584131;
    msg.y = 0.454723586832;
    msg.z = 0.178089076033;

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
    msg.setTimeStamp(0.761995622942);
    msg.setSource(31197U);
    msg.setSourceEntity(96U);
    msg.setDestination(23244U);
    msg.setDestinationEntity(118U);
    msg.x = 0.437515961016;
    msg.y = 0.141930361319;
    msg.z = 0.376221031944;

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
    msg.setTimeStamp(0.342482305244);
    msg.setSource(22775U);
    msg.setSourceEntity(113U);
    msg.setDestination(45344U);
    msg.setDestinationEntity(45U);
    msg.x = 0.113812754324;
    msg.y = 0.975935806799;
    msg.z = 0.667806908595;

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
    msg.setTimeStamp(0.967195017406);
    msg.setSource(31779U);
    msg.setSourceEntity(14U);
    msg.setDestination(15113U);
    msg.setDestinationEntity(163U);
    msg.timeout = 16226U;
    msg.lat = 0.619455477845;
    msg.lon = 0.437202572002;
    msg.z = 0.844887491445;
    msg.z_units = 80U;
    msg.amplitude = 0.752011822519;
    msg.pitch = 0.560627786585;
    msg.speed = 0.961958707109;
    msg.speed_units = 53U;
    msg.custom.assign("TPZENUAKFRQNNKMRLHDWRDIWBIOBZNNEPJTCQDXOEKHHGMMABXIIQPVRWJWWXFCCR");

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
    msg.setTimeStamp(0.0687062038742);
    msg.setSource(28071U);
    msg.setSourceEntity(186U);
    msg.setDestination(27494U);
    msg.setDestinationEntity(186U);
    msg.timeout = 58315U;
    msg.lat = 0.0524719087473;
    msg.lon = 0.688322949395;
    msg.z = 0.965874851896;
    msg.z_units = 123U;
    msg.amplitude = 0.669253192234;
    msg.pitch = 0.959732653539;
    msg.speed = 0.228952203075;
    msg.speed_units = 193U;
    msg.custom.assign("MLWLEXDMOSAXRNUKIQYYXBQRJALWUQGKNXCMZEXNQCUIRVJP");

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
    msg.setTimeStamp(0.466200318586);
    msg.setSource(39602U);
    msg.setSourceEntity(3U);
    msg.setDestination(13358U);
    msg.setDestinationEntity(69U);
    msg.timeout = 10319U;
    msg.lat = 0.0955738102843;
    msg.lon = 0.91117780759;
    msg.z = 0.786326978583;
    msg.z_units = 193U;
    msg.amplitude = 0.351149824774;
    msg.pitch = 0.141012564179;
    msg.speed = 0.941455022005;
    msg.speed_units = 173U;
    msg.custom.assign("YESSOGOHKHMVFJFUYYILPITUZFNSTCGFWCOXGXSBMDHAHACXGQHTJFXGQRBQUZOIRPRLDHKSWEJZYIRUWDWLYOKMCFKFEIBBAPSEKDCLMWOXAQVZNLPDJTPXLUOTOJGPNEEUZOFZSYAJWMPLPNYZVHAIMRJMAQKRYIXAZUESWJMZCQBXDAUNZHBRINNVIVNVLJKGRDBBFDWTCUCPMSNCQLAFQTRDMBEGCYTWXKNSTVRJKLHDKWXEOPGBVYGHI");

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
    msg.setTimeStamp(0.63916454298);
    msg.setSource(58333U);
    msg.setSourceEntity(189U);
    msg.setDestination(19665U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.477758179553);
    msg.setSource(47767U);
    msg.setSourceEntity(254U);
    msg.setDestination(56070U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.950841555731);
    msg.setSource(63819U);
    msg.setSourceEntity(171U);
    msg.setDestination(2450U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.135044793737);
    msg.setSource(44897U);
    msg.setSourceEntity(141U);
    msg.setDestination(60913U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.0602508190095;
    msg.lon = 0.716522830904;
    msg.z = 0.433877046843;
    msg.z_units = 65U;
    msg.radius = 0.529627705527;
    msg.duration = 38327U;
    msg.speed = 0.437448362904;
    msg.speed_units = 130U;
    msg.custom.assign("JYUDSJRUYCVRCWHQKUUTLBHMQGHHSNLHHDJCBLQXDEEJSNOWBFLYPSQGPGNVYGHRF");

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
    msg.setTimeStamp(0.699712797988);
    msg.setSource(23063U);
    msg.setSourceEntity(117U);
    msg.setDestination(4179U);
    msg.setDestinationEntity(150U);
    msg.lat = 0.848264928189;
    msg.lon = 0.745755661242;
    msg.z = 0.329041392855;
    msg.z_units = 207U;
    msg.radius = 0.29598006296;
    msg.duration = 22663U;
    msg.speed = 0.684340710099;
    msg.speed_units = 243U;
    msg.custom.assign("FNZVHJFZBRPOPKHYAGZCGLBXCGCQGIJRWNDDAQPRSPSFLHKNOXHNVFUDASMIKGKMQBBIFTNKJTHYVUNWZOLJNAYQTVGEXBWILKWJTLNHTMQMFIWCEURVQEPVWRROOWGMFIWTJCAKXQOZZCXOTGDVIDEBSXWHBRIKHLLJKCCBMUAAUYDRYJSAEGIYNTZMDSVDFQUQNZLSSXUUYJFSUSMPI");

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
    msg.setTimeStamp(0.518932668097);
    msg.setSource(53544U);
    msg.setSourceEntity(219U);
    msg.setDestination(6851U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.180540159643;
    msg.lon = 0.353040441981;
    msg.z = 0.419928441033;
    msg.z_units = 77U;
    msg.radius = 0.639957388784;
    msg.duration = 37246U;
    msg.speed = 0.652303008355;
    msg.speed_units = 212U;
    msg.custom.assign("SZGVQPNDVEUHTWRHDOOWXYQLYERYNDMLPDSQLEOPEAHVTRPTSEJJGEXCCTGBANFWNAHAAAUZGROMXTRKZSOKEIZQGJDFCKPBZERDFXXCINGBVTORYNTIDKSRJSAUANWKMNUYUIZFYFQJMUHQIIWFQPBTLDZJRBFPLVJWQEXWLBZIRWYIEKMOKMFCT");

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
    msg.setTimeStamp(0.08497179391);
    msg.setSource(38535U);
    msg.setSourceEntity(28U);
    msg.setDestination(25817U);
    msg.setDestinationEntity(56U);
    msg.timeout = 36848U;
    msg.flags = 131U;
    msg.lat = 0.493091399616;
    msg.lon = 0.359007884881;
    msg.start_z = 0.0507087674519;
    msg.start_z_units = 31U;
    msg.end_z = 0.73316043717;
    msg.end_z_units = 76U;
    msg.radius = 0.954998439729;
    msg.speed = 0.217117657953;
    msg.speed_units = 152U;
    msg.custom.assign("DUSMUJLFXREVXNYNUMGZHDMZCJQXAEDKLYKEQQITGLBHVUGIIZZVLEIKBHNFRTYZADPQFHXLPAJFMOGXNTZWEWVLHCCGDXBJNACKIZUQGPRQWKTAVBHFNOOLAVYIDHIGKQWSOYVCXGWEPWSDDYERBOHKTFTBFKTUASRCIHJELHAEPDMFSXJFMMQOMBSSZMJRZWPVBMVBWPVPCOKKWRTLNYUOR");

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
    msg.setTimeStamp(0.154068295734);
    msg.setSource(57825U);
    msg.setSourceEntity(166U);
    msg.setDestination(41757U);
    msg.setDestinationEntity(173U);
    msg.timeout = 18781U;
    msg.flags = 84U;
    msg.lat = 0.0359961417865;
    msg.lon = 0.72643284929;
    msg.start_z = 0.637257285575;
    msg.start_z_units = 90U;
    msg.end_z = 0.193330048757;
    msg.end_z_units = 102U;
    msg.radius = 0.58175895339;
    msg.speed = 0.855302193913;
    msg.speed_units = 14U;
    msg.custom.assign("HPBIEEQGILBGYRGGAUKTIJZLRQALZYTNRIHSJTZXTUPJRLTZIFTVYGODRBCZAQUYWDXZXNWLZBQ");

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
    msg.setTimeStamp(0.474374242602);
    msg.setSource(51045U);
    msg.setSourceEntity(184U);
    msg.setDestination(48771U);
    msg.setDestinationEntity(69U);
    msg.timeout = 54576U;
    msg.flags = 234U;
    msg.lat = 0.106151431839;
    msg.lon = 0.988636062874;
    msg.start_z = 0.895745499753;
    msg.start_z_units = 97U;
    msg.end_z = 0.89101614397;
    msg.end_z_units = 90U;
    msg.radius = 0.197892467908;
    msg.speed = 0.988598755603;
    msg.speed_units = 244U;
    msg.custom.assign("JYPFZBPSEANPVGZABONQNSXSSRVNSTDWQRROFMUOYYJDHDQGRUIGEZIGVUBHPHBVWNDEECMANXBIMWHTZTLKTPXRVQQFXDOXQCDOLYYIOCONMGGWDZDKSXBTKPAEZRJGXXEMFSUMCUYJVDEKWGFTWUKHQKYAPJESQAJJTYCRMJUURBFMOALYCXFTVBCOLBRHKCIAHOIUBXFFGACERIVJWHSUTKNHSMTYZEFVK");

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
    msg.setTimeStamp(0.995244758671);
    msg.setSource(32898U);
    msg.setSourceEntity(90U);
    msg.setDestination(15760U);
    msg.setDestinationEntity(6U);
    msg.timeout = 15389U;
    msg.lat = 0.933939326189;
    msg.lon = 0.346060202893;
    msg.z = 0.503160245601;
    msg.z_units = 15U;
    msg.speed = 0.897795920036;
    msg.speed_units = 0U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.755023198364;
    tmp_msg_0.y = 0.727757540193;
    tmp_msg_0.z = 0.697182295567;
    tmp_msg_0.t = 0.767903814187;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("YAXACPTEEGUFLOSSDSMCOENRPHXJNPPWJXEKLBXNPGQVVKOUNXINDEWMHGQGSUSWRKNXBLXITKFUPEMAJSAOBBOFYDJCRVSNJHQZUMKYOKHZCKRURQFBUVWVALYXE");

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
    msg.setTimeStamp(0.201054567672);
    msg.setSource(33122U);
    msg.setSourceEntity(9U);
    msg.setDestination(19019U);
    msg.setDestinationEntity(44U);
    msg.timeout = 42538U;
    msg.lat = 0.671535536876;
    msg.lon = 0.679142531314;
    msg.z = 0.966710276441;
    msg.z_units = 114U;
    msg.speed = 0.445837514155;
    msg.speed_units = 162U;
    msg.custom.assign("XUJFKRHQGXAUPVVFJIANTPAENAPBHCODKWNEYQXCGNSUKLRVFEODLEXWTKROOBRMIYKWUTFNKJBCWUBXWSAPSDZVWVPNZOYDEQTFGDYFHGNUNZMJEPFHMJLLSMPZGTVKJWIXRUDZWRSOEEGGHCRHIFHOQCYQWTRLTAOEBQHBZJXCGU");

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
    msg.setTimeStamp(0.983952027417);
    msg.setSource(61397U);
    msg.setSourceEntity(253U);
    msg.setDestination(56916U);
    msg.setDestinationEntity(220U);
    msg.timeout = 23122U;
    msg.lat = 0.149866010198;
    msg.lon = 0.852422875303;
    msg.z = 0.537937009283;
    msg.z_units = 108U;
    msg.speed = 0.110478597837;
    msg.speed_units = 6U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0179678086248;
    tmp_msg_0.y = 0.618440857412;
    tmp_msg_0.z = 0.0286080268649;
    tmp_msg_0.t = 0.598373241932;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WURAIJIEQGUHHKKOJSQYFRJNOSRHFVTDMKFFTBFUWXINWZWIPPCWLZTWDIZNYYQMSEXOPVMBQHCDKWBALVXNPYGPKZEHTHPJYHMDEBNROJSJTVHIKQXAMVANXGMOZEEVQGBLOZQMBEAEBJZSCNKJSHCFHOEFCAXRRQCDRVGKDPGLUCVUIMDJCUOSPLUYMDZKYWWTBUPZFTLNCUBYRXFTUA");

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
    msg.setTimeStamp(0.893729335053);
    msg.setSource(33064U);
    msg.setSourceEntity(27U);
    msg.setDestination(57911U);
    msg.setDestinationEntity(102U);
    msg.x = 0.77749778224;
    msg.y = 0.987502508558;
    msg.z = 0.0386928704808;
    msg.t = 0.941760628206;

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
    msg.setTimeStamp(0.479710576124);
    msg.setSource(18901U);
    msg.setSourceEntity(60U);
    msg.setDestination(4219U);
    msg.setDestinationEntity(138U);
    msg.x = 0.334791722156;
    msg.y = 0.488329462175;
    msg.z = 0.967226546294;
    msg.t = 0.740916061538;

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
    msg.setTimeStamp(0.404914589772);
    msg.setSource(15709U);
    msg.setSourceEntity(170U);
    msg.setDestination(44948U);
    msg.setDestinationEntity(171U);
    msg.x = 0.59085696651;
    msg.y = 0.617823849307;
    msg.z = 0.283724437244;
    msg.t = 0.759678066793;

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
    msg.setTimeStamp(0.887705126348);
    msg.setSource(51642U);
    msg.setSourceEntity(118U);
    msg.setDestination(58276U);
    msg.setDestinationEntity(120U);
    msg.timeout = 34207U;
    msg.name.assign("LMFQPIMSZFCBCRVHEXRUTJEJMBYQYOCCTGYAENEMCHFOXTJVPKOTJYBULIVPUTDVNDLFUEZNBTMGAPGZOI");
    msg.custom.assign("TJZTCFSHTUVIELQRURCZBGVVQKESYGDLRZZGZWAFLYDBYQNDZISEXIKWGDNVWKLZOOETIMKXDBPJN");

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
    msg.setTimeStamp(0.990168633476);
    msg.setSource(56664U);
    msg.setSourceEntity(75U);
    msg.setDestination(36353U);
    msg.setDestinationEntity(178U);
    msg.timeout = 24362U;
    msg.name.assign("FHIPPWSGHVGOICAFCTMDVMVEFJYAWXKKJYCIXJSSBQFITNTALZYNIQSDKBGLRNTWTZBZKNASSLCHMEUXAGFQGRUOAAGFPZFGZRSUMZVIVTDSWKEUXUEPFKNFLKXRLWKE");
    msg.custom.assign("EOWZDDHBELUGJUYZGPBRJRFCSDASWOCOTMUMATCNAVANNIOQQGRXIYEBSUUPMKXERAJUXCHKOILMSEGPBQCFMOYBHTLBVAUFDSEAKTQQDMVOAKTTWOWGNKNFPCCDKDBZZHLYIXVGJHBNVQWVZWDYHIXNSXXMLJTPOHJSGTQHQRZVPFOXKSGNPTZIISVLHEUCNCXQYWBQKM");

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
    msg.setTimeStamp(0.567503178612);
    msg.setSource(7733U);
    msg.setSourceEntity(19U);
    msg.setDestination(28623U);
    msg.setDestinationEntity(138U);
    msg.timeout = 42812U;
    msg.name.assign("UVPMHUKTBRGNHFNZGTAWPXKOWUFWRGINJZMIZZJXNTUIPWIBVKUZIYONYPLHFBUUJQLPXWDDANYYVDOETEWGXEQTPSOHSCEJFSVMDCKHEOZOMMIUMQQCUSQCSVYOOSBRERTPKBTMHRVDXNIDREJBLCMFVXAVNGICNDPJGRZLFVOWALMXHSECGKBBLEKGYZIXASWYILXARJWEFVLDYHPRYFYQPFCLUOTZQQFLRDJBSABQDCSATJZACKMQ");
    msg.custom.assign("AHVWFXXKNSWTQOYQXHCLNTUBSKBIEXLPHVEMJVGMNYCJPKOZKDRKUVRNFEOLXWAJBROSOWADHKMRHPPRUZEWQVYUTDHCNQBDFMOLJQYYUMZZJAFGDLIKQQCKSJYTSIBGUSGACPCUPBNKYZWFNCTLRFSSZMGVTCWA");

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
    msg.setTimeStamp(0.569207647972);
    msg.setSource(24751U);
    msg.setSourceEntity(55U);
    msg.setDestination(48838U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.890181354951;
    msg.lon = 0.0436071104415;
    msg.z = 0.59594723538;
    msg.z_units = 180U;
    msg.speed = 0.511320196177;
    msg.speed_units = 25U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.727386688048;
    tmp_msg_0.y = 0.246184877201;
    tmp_msg_0.z = 0.0552261659817;
    tmp_msg_0.t = 0.558690069613;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.0912553997991;
    msg.custom.assign("WXARKPDSBUGZIZIMTJEMAUCVBPCSPWRQFUXFRYJCHMJAXQZDFSIGENRTLASDLBXWIWKFVDBHGFNUGAZGYNYWOZQCKXMGGCQNZACKVGNSHBDDTOOICEUTMFJNACMOWTNJLILFXWDXBYRQLIUXCVYRKVEVAPSEMQOYZIIMSOEVAPPUSOHEEHVANBPUCTOUBRYTLOXKFYYNMHRLVDYJRJSLLUZXJJEWHHQWK");

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
    msg.setTimeStamp(0.326777449782);
    msg.setSource(36192U);
    msg.setSourceEntity(141U);
    msg.setDestination(45658U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.666934861949;
    msg.lon = 0.194007706365;
    msg.z = 0.116525640931;
    msg.z_units = 77U;
    msg.speed = 0.0269405717541;
    msg.speed_units = 52U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 31975U;
    tmp_msg_0.off_x = 0.645945569054;
    tmp_msg_0.off_y = 0.535951190801;
    tmp_msg_0.off_z = 0.991784288559;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.700273371118;
    msg.custom.assign("MHURASNNZGDIHSGVXONTYBVHLDHFMQHGKBUENAAXOEEMRCRJSQTWEJOFKXSAYTWLUEIIBPRSQKIUBFOGEEZAJW");

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
    msg.setTimeStamp(0.30473473664);
    msg.setSource(40169U);
    msg.setSourceEntity(102U);
    msg.setDestination(4817U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.837958782354;
    msg.lon = 0.38727929039;
    msg.z = 0.721062155486;
    msg.z_units = 247U;
    msg.speed = 0.0870379775392;
    msg.speed_units = 187U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 24618U;
    tmp_msg_0.off_x = 0.167557564929;
    tmp_msg_0.off_y = 0.417235842601;
    tmp_msg_0.off_z = 0.877282553092;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.93779474761;
    msg.custom.assign("RLUSCVPECRWGUMJSWRQATBZLEATRSZAYKITFAMCEKFRXUPMDWZCJHWVQVCA");

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
    msg.setTimeStamp(0.516255150983);
    msg.setSource(50684U);
    msg.setSourceEntity(205U);
    msg.setDestination(59119U);
    msg.setDestinationEntity(206U);
    msg.vid = 53349U;
    msg.off_x = 0.854381404692;
    msg.off_y = 0.513011106223;
    msg.off_z = 0.187704247353;

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
    msg.setTimeStamp(0.158614724651);
    msg.setSource(23583U);
    msg.setSourceEntity(224U);
    msg.setDestination(163U);
    msg.setDestinationEntity(94U);
    msg.vid = 4294U;
    msg.off_x = 0.982302194794;
    msg.off_y = 0.587074671962;
    msg.off_z = 0.593440211371;

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
    msg.setTimeStamp(0.703701311794);
    msg.setSource(48546U);
    msg.setSourceEntity(226U);
    msg.setDestination(63316U);
    msg.setDestinationEntity(111U);
    msg.vid = 28830U;
    msg.off_x = 0.919764230885;
    msg.off_y = 0.471268411499;
    msg.off_z = 0.985156211061;

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
    msg.setTimeStamp(0.734683966596);
    msg.setSource(53976U);
    msg.setSourceEntity(246U);
    msg.setDestination(19658U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.760179163567);
    msg.setSource(31804U);
    msg.setSourceEntity(148U);
    msg.setDestination(5194U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.705882872247);
    msg.setSource(65350U);
    msg.setSourceEntity(21U);
    msg.setDestination(54630U);
    msg.setDestinationEntity(38U);

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
    msg.setTimeStamp(0.40031597198);
    msg.setSource(4433U);
    msg.setSourceEntity(162U);
    msg.setDestination(32046U);
    msg.setDestinationEntity(173U);
    msg.mid = 62919U;

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
    msg.setTimeStamp(0.484954779881);
    msg.setSource(3238U);
    msg.setSourceEntity(92U);
    msg.setDestination(1838U);
    msg.setDestinationEntity(21U);
    msg.mid = 25355U;

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
    msg.setTimeStamp(0.319918040215);
    msg.setSource(11714U);
    msg.setSourceEntity(252U);
    msg.setDestination(35808U);
    msg.setDestinationEntity(189U);
    msg.mid = 10013U;

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
    msg.setTimeStamp(0.7632909617);
    msg.setSource(55217U);
    msg.setSourceEntity(22U);
    msg.setDestination(53393U);
    msg.setDestinationEntity(223U);
    msg.state = 180U;
    msg.eta = 5267U;
    msg.info.assign("SYSNCNOSYBQPLIVARLPQTHESRYBTPYJFOCIJRZALCXWHCFKBREOXNEMAZVOFAVRUGPKOVHVWJCAMIPJKUENKAYANMSGZPJYRHQTIRQDEIASZSXTUFGUQWEZGSBWJHBFOXBVBPWUVXMITUMXRW");

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
    msg.setTimeStamp(0.0124435124379);
    msg.setSource(2740U);
    msg.setSourceEntity(192U);
    msg.setDestination(45464U);
    msg.setDestinationEntity(25U);
    msg.state = 207U;
    msg.eta = 21236U;
    msg.info.assign("CGZPZEWCBBKAODCYNHKBLKYHXOWQEMHGUUYDJIPDGJVXCPWXNVZMNDYIDJRECCASOEZOGOLXJTTIGGZUTAEQHCRPIZQJTVFKWRWUGEVMSMYEVQQRAUAFWZPYLVWIRWSYTYEFIZYFDMRPOGWQFVIJOXDHPSMQFXBGSHUBSKUTKBCQHULNLCLMRBIBVSFFNEBUNAAVOWLDXDQPYLOXKTJPARZRSNQNHXXNBSDJTTHKVKOIAJLJKPMANFMUTERLIG");

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
    msg.setTimeStamp(0.253559429217);
    msg.setSource(7223U);
    msg.setSourceEntity(231U);
    msg.setDestination(43387U);
    msg.setDestinationEntity(35U);
    msg.state = 70U;
    msg.eta = 65268U;
    msg.info.assign("PPWSVIDTWJAJIXZHZIYONJAONWQQDLCTKYZXYKFFFIBGBQIMCWOBXDZCHLLDWDZSIYZUHKMEUZGAPSFSPCUTERHRPTWJTPHZOMRNOJNDHGVUSCIWNPHQCHHYXWEIFFVGDAKEKRAPFFYQOFGKNGSQEVJCOEULXURXUSBPMMGVECWVYCYAKIRGBEJBOMCKTRNAJ");

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
    msg.setTimeStamp(0.665564105779);
    msg.setSource(37316U);
    msg.setSourceEntity(135U);
    msg.setDestination(44096U);
    msg.setDestinationEntity(87U);
    msg.system = 29218U;
    msg.duration = 58000U;
    msg.speed = 0.166749742404;
    msg.speed_units = 149U;
    msg.x = 0.57842831942;
    msg.y = 0.715875695231;
    msg.z = 0.506575282642;
    msg.z_units = 116U;

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
    msg.setTimeStamp(0.804434294224);
    msg.setSource(23157U);
    msg.setSourceEntity(106U);
    msg.setDestination(29597U);
    msg.setDestinationEntity(114U);
    msg.system = 39773U;
    msg.duration = 25069U;
    msg.speed = 0.0818741435458;
    msg.speed_units = 96U;
    msg.x = 0.579047731293;
    msg.y = 0.816183371591;
    msg.z = 0.613867171432;
    msg.z_units = 60U;

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
    msg.setTimeStamp(0.778753968578);
    msg.setSource(39002U);
    msg.setSourceEntity(76U);
    msg.setDestination(1611U);
    msg.setDestinationEntity(190U);
    msg.system = 38479U;
    msg.duration = 35707U;
    msg.speed = 0.666911840347;
    msg.speed_units = 39U;
    msg.x = 0.322156471291;
    msg.y = 0.76574534215;
    msg.z = 0.278220971912;
    msg.z_units = 202U;

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
    msg.setTimeStamp(0.90877014952);
    msg.setSource(31299U);
    msg.setSourceEntity(164U);
    msg.setDestination(55315U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.528184196566;
    msg.lon = 0.591190247196;
    msg.speed = 0.162481623869;
    msg.speed_units = 246U;
    msg.duration = 33831U;
    msg.sys_a = 5915U;
    msg.sys_b = 59530U;
    msg.move_threshold = 0.105400129043;

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
    msg.setTimeStamp(0.407493404128);
    msg.setSource(65251U);
    msg.setSourceEntity(190U);
    msg.setDestination(8586U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.796668367279;
    msg.lon = 0.720854081034;
    msg.speed = 0.366809870574;
    msg.speed_units = 188U;
    msg.duration = 11083U;
    msg.sys_a = 28597U;
    msg.sys_b = 32456U;
    msg.move_threshold = 0.693618401739;

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
    msg.setTimeStamp(0.0527812906397);
    msg.setSource(48674U);
    msg.setSourceEntity(113U);
    msg.setDestination(41840U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.574649286214;
    msg.lon = 0.270246567231;
    msg.speed = 0.985062080907;
    msg.speed_units = 144U;
    msg.duration = 28074U;
    msg.sys_a = 10508U;
    msg.sys_b = 45830U;
    msg.move_threshold = 0.355622161695;

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
    msg.setTimeStamp(0.724441376233);
    msg.setSource(14755U);
    msg.setSourceEntity(161U);
    msg.setDestination(45371U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.357121577527;
    msg.lon = 0.107097169665;
    msg.z = 0.95039715055;
    msg.z_units = 173U;
    msg.speed = 0.916809792222;
    msg.speed_units = 45U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.594429711053;
    tmp_msg_0.lon = 0.669193522567;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("LBWTNVVAPYNZOJHVIGILRKLRQLKHYXMPBUFSBIAZOZXXSLVRFVEPYGGDFIFEWCOTXCWAJCASVDGHHLTDXRUPSMFEBGVBFQNUGVCMUFGRILOYQXSIDFSKJEJEXZBJQPIMQJMFPENQKIKDRUQETHBGIOYMPXCDCPZTERUWJMTONLKRXI");

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
    msg.setTimeStamp(0.0686162109398);
    msg.setSource(62356U);
    msg.setSourceEntity(21U);
    msg.setDestination(29350U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.560932302841;
    msg.lon = 0.411382528289;
    msg.z = 0.879641716568;
    msg.z_units = 204U;
    msg.speed = 0.280801697555;
    msg.speed_units = 75U;
    msg.custom.assign("CFZYXQVKTUDYWAMTEXAZSIXKDOTSVWKHOAANXYTRJYJVXRNIGBMHEPKGDKJLOHXASQSCUIILZEMPMNZJJOZUCMGCWMUPTTNQQQILJSBDYQEZEKGMWKGWSKTOQZVLFDAAYAGIQCJLYNBTVLHNLWPFOVHJUHSOFFYITRYPXFLZQHFLVBPDUURUBGFPWBRFRTEDRIYPVWOUJPMSZQBCDGBRMURENEOJK");

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
    msg.setTimeStamp(0.805420267188);
    msg.setSource(56023U);
    msg.setSourceEntity(173U);
    msg.setDestination(65017U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.373632610819;
    msg.lon = 0.70615880131;
    msg.z = 0.326718958302;
    msg.z_units = 153U;
    msg.speed = 0.13262095135;
    msg.speed_units = 248U;
    msg.custom.assign("DGOYYLKPZAVCFJWHITIYPQGPVIEDFFGPJRWTNBQSAMBLXKKJIBOFJRGEXLNXXQNKVERFKNTCBLMOLDODXAVVLSZXICDWJXUKVWRWDSRPAHWCKIUPRSHMQELPHLSZXRJNBCHJCBMWSLUBGDEZAIFUHMVMZUQYZFBQNRQAVDMHBQOJDC");

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
    msg.setTimeStamp(0.928460513536);
    msg.setSource(59197U);
    msg.setSourceEntity(20U);
    msg.setDestination(45140U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.472985135534;
    msg.lon = 0.898545858164;

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
    msg.setTimeStamp(0.379143149973);
    msg.setSource(1218U);
    msg.setSourceEntity(244U);
    msg.setDestination(50428U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.979576938164;
    msg.lon = 0.446857829662;

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
    msg.setTimeStamp(0.696920722296);
    msg.setSource(22826U);
    msg.setSourceEntity(248U);
    msg.setDestination(50669U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.0815001390646;
    msg.lon = 0.0941638205255;

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
    msg.setTimeStamp(0.236295805905);
    msg.setSource(16365U);
    msg.setSourceEntity(233U);
    msg.setDestination(57879U);
    msg.setDestinationEntity(133U);
    msg.timeout = 60992U;
    msg.lat = 0.498384553708;
    msg.lon = 0.226468063539;
    msg.z = 0.314739136639;
    msg.z_units = 240U;
    msg.pitch = 0.965812046227;
    msg.amplitude = 0.178699860587;
    msg.duration = 22393U;
    msg.speed = 0.0298887488101;
    msg.speed_units = 142U;
    msg.radius = 0.561781909539;
    msg.direction = 145U;
    msg.custom.assign("FXRFOAMIIJYJNDHDCQLTEVBGCLRXGLWQYBXNSALRQOPCDNZVNORFKBEHYYJNMQPWXIDGEEJBQUUHFEBEGOIVFUYZSSRGVQVRRNLWMMZWPSKSDUBAUKTMZUKJXKBTEHAYCCXHPUFWGHTCNZKNDMPFGVNJQOALI");

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
    msg.setTimeStamp(0.923800563983);
    msg.setSource(19237U);
    msg.setSourceEntity(231U);
    msg.setDestination(61506U);
    msg.setDestinationEntity(31U);
    msg.timeout = 25165U;
    msg.lat = 0.79492943782;
    msg.lon = 0.380712831122;
    msg.z = 0.922493045119;
    msg.z_units = 81U;
    msg.pitch = 0.75970404625;
    msg.amplitude = 0.793774812612;
    msg.duration = 20403U;
    msg.speed = 0.159010088604;
    msg.speed_units = 53U;
    msg.radius = 0.638019680208;
    msg.direction = 210U;
    msg.custom.assign("YJHFXEGLTNKKZUWJSQWBHJIHPNVTOZLNFKUHEJLLAVMBMGZYGTSAJKJWBVHFGORCNFQMPPDXDVLYMRQIFKIOKQWYZEGVWTDRGHTYQOUJZCDLSVWWMINCPCLRBTAZBNUOYUAVYNPXUEXQOGRSABSWLRHVDRJSEGRZAEKKEYBCPTCSAIZXOQFPXDAMYRDGCFVKNFIFJPVXEFXNHSPWUTUZOBUSDEHGIQBIMRQINHOTLOULSCCDPM");

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
    msg.setTimeStamp(0.749808142731);
    msg.setSource(24357U);
    msg.setSourceEntity(0U);
    msg.setDestination(26762U);
    msg.setDestinationEntity(211U);
    msg.timeout = 1453U;
    msg.lat = 0.545049938197;
    msg.lon = 0.723966901749;
    msg.z = 0.783969092886;
    msg.z_units = 209U;
    msg.pitch = 0.265890067568;
    msg.amplitude = 0.989232255256;
    msg.duration = 24364U;
    msg.speed = 0.195938357713;
    msg.speed_units = 233U;
    msg.radius = 0.0813269609124;
    msg.direction = 115U;
    msg.custom.assign("HOLETVTOBSYQIYADWNPDLKOBQKPQNPGDACMLVMCLHYJVAXMWYPJOXMIJTMTKPCBRRJWIIFUDAWVHVKZUVWXQCHJQGPRBBZMXGLUACOJIQAECFUMQYQZGZEFFESJPMKELVGZHNRGLUSDZMXBDFSEKZRMYBCBZCKORWYSOURDSHXIJFLIWNSSYBTUXGURXCEJVHZNTBUEZTIYLWKFNLSDVFTXPPQ");

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
    msg.setTimeStamp(0.363817412973);
    msg.setSource(59987U);
    msg.setSourceEntity(32U);
    msg.setDestination(46164U);
    msg.setDestinationEntity(127U);
    msg.formation_name.assign("YAMZZRCRHBSNUZZXWMHZJTCQRILKLQNBSVQPVXIEPKDDJEXGPGMYNJOQFIIVGJLLHDMRATIBASDATFHSDYOVHVISQRWOTSOGXDFCQBPXQSDIURJKWLEMOHWSOKOFQVUWEUPUJAQUKTNRJOHMJBDYBVNNEULYIUPKFCAFZYFBCSWCNMAKCHPGIWVZRTMXEYWLTMEKPSBVWAAMVGNTCBCFKZJTLRDN");
    msg.reference_frame = 90U;
    msg.custom.assign("WGZNCYAJOXGHWSXFESCZHLYQXOZJDBRZHPHUBIVQNOSQWEJLDXXXIURCBTKWQYTTQQIVJRDAOBWMZVPEPUMNGTCHEULHTCSLBSAGGYMOGAIONFVLKSLMKSBUMKWPKEPNPHREPGDIHVDNJSCWWDQNPOYLKUORZJMXMVBFEFZMFTVYFBZBRWRZWAVICENVYSGXHCUVCYFXQECXRGRQOYAPLFIISMJGATDKUY");

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
    msg.setTimeStamp(0.145143923491);
    msg.setSource(13567U);
    msg.setSourceEntity(36U);
    msg.setDestination(60271U);
    msg.setDestinationEntity(175U);
    msg.formation_name.assign("NXKULNVUMQCHGIUEKZBCOHSOAAJVUODQFJFHCWZMOSFEYRZSLZHBGLPWYLSIGSFCRJSNGGLXNYWDKDVBLCSUWMHVMTYDWXGPYAADTC");
    msg.reference_frame = 15U;
    msg.custom.assign("NRSWQTJIYTFRPVCJOEWAYHPEAWNQROKEQDZXTTIEPCYXFIPGNMBWGHZKIUZDKBIAHBOMYNQNCHNLTCZPVJGWHBUQGQABKGXDOIILECLXMZTDSZJ");

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
    msg.setTimeStamp(0.847191814051);
    msg.setSource(61279U);
    msg.setSourceEntity(19U);
    msg.setDestination(27229U);
    msg.setDestinationEntity(132U);
    msg.formation_name.assign("MHREBPDKZCIJNHBJUUIQUUTMQYNAOSRTVSCMTJTUYETZFUTKLORXCLYKAOLPLCNFYXAWKLFUXCWJYHKGSLJNFTXNIVIVRKVRVODMI");
    msg.reference_frame = 36U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 50806U;
    tmp_msg_0.off_x = 0.670144988148;
    tmp_msg_0.off_y = 0.658650281325;
    tmp_msg_0.off_z = 0.976848898069;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("RDVXBGVZAKMCAMTUAOXOQTQQQWQMGIVCUUIPGOYAESEZBXRMWQNFSWKENGGTGGIYVUH");

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
    msg.setTimeStamp(0.284829468431);
    msg.setSource(13642U);
    msg.setSourceEntity(126U);
    msg.setDestination(7306U);
    msg.setDestinationEntity(48U);
    msg.group_name.assign("IMIIMTDAPSMYIBBIVJQWOUNQLDHTQKDFRJPOMIIUGGQZGOAJHWGXUFGFZACQZRDKERBANALWFQRKLDHBATSZVXPRWKYDHURUIUPJGTYIELLY");
    msg.formation_name.assign("SAMNHBGLYWVKKQICWOVTNRDASGCZANU");
    msg.plan_id.assign("TEWHVWLACSIOYTHYWUWAINDULUCREKWFWGOROGAFKRLLLDBEVXVWRNWDIJVXZENSYVQBBEVYANNTPOYKSMZRXUJBFUCWTVFVTDKMGAJIQRTCDXHHGEYZIIJXCRJHLBUCXM");
    msg.description.assign("TJKBGAPJNWPACKNLAZZEBTIGYXYBUTMYXJWVKIJOTYSDRTQIQAAOUHZHQRGHFWS");
    msg.leader_speed = 0.892617234661;
    msg.leader_bank_lim = 0.837558322431;
    msg.pos_sim_err_lim = 0.283737525986;
    msg.pos_sim_err_wrn = 0.708868075582;
    msg.pos_sim_err_timeout = 34019U;
    msg.converg_max = 0.268277636651;
    msg.converg_timeout = 55250U;
    msg.comms_timeout = 61716U;
    msg.turb_lim = 0.657660406456;
    msg.custom.assign("KOXHHMCHWWHWSNCWHDUBHDRGGCPQQROJOINULDPGLSDEXRKXJXGUGOENFKFXYBFFYVUVYECCJBGQFQSYHRCOZZLQGMPIVWANWAZQYVKJJINYMKTXDAAJZJRNYUUHIBJSSVEZMOJMSLCWDXAOAPLTZEKVITHMRBCMBOXIPWENZIESPQPTRTTPVEAKXCFYMTAPMGLTENFOSZRQLUTBSRUQABVUFLDFJTWCYKZURKVINSQMIFVPXWGDD");

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
    msg.setTimeStamp(0.203252390408);
    msg.setSource(1003U);
    msg.setSourceEntity(5U);
    msg.setDestination(26629U);
    msg.setDestinationEntity(180U);
    msg.group_name.assign("XZFHOBLJUTVOUZKKYLPWNQPDESGWLZVYGGDLGKUXJATYCDJSKHDCLVZDUTUYNTSXPENQOAVUVZGSEACTDLEPZJIUCOBHWKAJQMHYWCBFZSMBGCVTOSXZENTFEWMFLSDHJFXDMSNMBZBWVPNFEDQQ");
    msg.formation_name.assign("YFDIATJZXABZISRZZCVOYKZCBSPXVGVPLMVHWELOSGGMERAQYISDJFJLUJOUHUYPIKKAWEABZMOJLHRRNGPHEEQUTNSYCVAWBBLDTQZTDSFMRLPARXXACSEIFLMZDEVXQWCHIHJURQGCXEGFGDMWNFPVXIOIGJPZCUHUTBLNBXQWKNWWTQOMEYFJNOCNLFDBJPTMLWRNVTVC");
    msg.plan_id.assign("VGIKJCDYZVEBKQLLKQHUBJARPZOEJYFRMMEXTOXBPGPGIMXAIFFWQHFYVTHAUNWSKEDZFCQJOMNYATHAWFZIEPCTAXBUZUJTYSIZJAQSHKPDBSCGKRYIBHZDHEJWWKGRWSOZOTLQ");
    msg.description.assign("AZSDRJZLJLFYWQSBXGIKBOAEMMSPOJWTIPESQPVZRFKFPEYALETUVDULACXCNHLOBFNQPGJRIUYBJIGQUOVDGMWSBPQSJRTFLBDDBUDVCYXHAXIQESH");
    msg.leader_speed = 0.49839637579;
    msg.leader_bank_lim = 0.609844154613;
    msg.pos_sim_err_lim = 0.0353030113045;
    msg.pos_sim_err_wrn = 0.564587183005;
    msg.pos_sim_err_timeout = 27514U;
    msg.converg_max = 0.63434231728;
    msg.converg_timeout = 63099U;
    msg.comms_timeout = 31062U;
    msg.turb_lim = 0.521100558501;
    msg.custom.assign("BRFZHXVKEYZFBGFQYPTYJHVGUOGWIIXLMJWIMCOXKHALAADYCVSNMLNFHFONMFKZPHZAXKIOEZIZQLWQNEAEWXBTKTOTACMCXDRJPIBMOFNDUGXOVQJARLKRPRYVBHEPTQHQNQXEQYYGXNUASBFKMKPMRCEGUVWQZBGPLTBFWREISGHRWEINOMQCLYLVTDCWOIUXEUMZYNTOIDJSSDFULDKNPVHHWBDSJTLZGCZUSBRJVWACUVSUJSYDDJ");

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
    msg.setTimeStamp(0.881556102394);
    msg.setSource(57435U);
    msg.setSourceEntity(234U);
    msg.setDestination(3944U);
    msg.setDestinationEntity(97U);
    msg.group_name.assign("CFIRGIYFGQVTSJNMTIFNTDRQXTLJRZSIYNUUYHKTZZGOHMSSBNWAGVFCBMUOZDOACXXWWLHCHOBBDYYTXUCRNWXHXRJEQOAJGDBACNGKQINULTSKUAKGPIVDPMYO");
    msg.formation_name.assign("KHGFBFXEZVQWRZSSIRCGHJBROJXQOTGKWGLJZCYKMVFLZRLWLNPJEXSBGLZVPPSKOFETVWAGBOJPQUPQHM");
    msg.plan_id.assign("AGZQBSSDMNKIKDUGGOIEXPIQOUTOSZIDBUMBOXJFPARGRQQFSQOCRCSTMTPPACTLFHVSHVKJKAYPFRBLSHANFLAXLEHIMDMNZCJRTPLYWCRXGGFEXFSOPHLCGJYCNEKHOAUIQIYJABWKDVVOBTJZMUBKJDSJYBHXCNPVRDYWNAWZRPVCQFTGWSVUKMXTFLAQFLIGTDMH");
    msg.description.assign("FLHCSARDBDAYOKGCWRFLESHNZOJTSNFXIHBTLPBAXKEAWFUBUIFJMMTAQMNTAVLRGPAUVJZCWKPNKWEIIBRDYSTVQVCHEVOUQPHZENVAXDWYLDEZALNIPWRXGTJRNWGTAEHOOZKWFQLIPY");
    msg.leader_speed = 0.976288162844;
    msg.leader_bank_lim = 0.294345572404;
    msg.pos_sim_err_lim = 0.594092040398;
    msg.pos_sim_err_wrn = 0.590434475449;
    msg.pos_sim_err_timeout = 43436U;
    msg.converg_max = 0.936853452019;
    msg.converg_timeout = 6732U;
    msg.comms_timeout = 37707U;
    msg.turb_lim = 0.660603562765;
    msg.custom.assign("JKIVRXPCNJRFOJUMGMLUAUQNENCJRNWSZAPRWQSKKZTFKWXMADGJIBWLHWZPNEDEQUQHDBKDQVFLYQXTOIEMDBAUMFHZCPDBMBGUSFUCEZSDYJTHDUQRFRMWYPTVLGAOFXZSAWGYFRLNMQVCGDONLSVHAGOMLIKNBHTWNTJIJAIFZRCVEUACOVRWLYGIJXJLXHVPSYHBPACZIFGUHKXYKNKIYTV");

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
    msg.setTimeStamp(0.94745521521);
    msg.setSource(33566U);
    msg.setSourceEntity(107U);
    msg.setDestination(3043U);
    msg.setDestinationEntity(140U);
    msg.control_src = 9168U;
    msg.control_ent = 169U;
    msg.timeout = 0.306856427338;
    msg.loiter_radius = 0.378606152353;
    msg.altitude_interval = 0.696265404749;

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
    msg.setTimeStamp(0.684422284633);
    msg.setSource(13729U);
    msg.setSourceEntity(21U);
    msg.setDestination(10879U);
    msg.setDestinationEntity(175U);
    msg.control_src = 55480U;
    msg.control_ent = 75U;
    msg.timeout = 0.14275063657;
    msg.loiter_radius = 0.410164432187;
    msg.altitude_interval = 0.623241443014;

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
    msg.setTimeStamp(0.342455334972);
    msg.setSource(7154U);
    msg.setSourceEntity(153U);
    msg.setDestination(42382U);
    msg.setDestinationEntity(185U);
    msg.control_src = 7114U;
    msg.control_ent = 84U;
    msg.timeout = 0.964772651965;
    msg.loiter_radius = 0.565987874239;
    msg.altitude_interval = 0.500228442752;

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
    msg.setTimeStamp(0.66482543785);
    msg.setSource(52056U);
    msg.setSourceEntity(2U);
    msg.setDestination(57878U);
    msg.setDestinationEntity(207U);
    msg.flags = 153U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.645803717504;
    tmp_msg_0.speed_units = 87U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.261688898708;
    tmp_msg_1.z_units = 189U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.780738339507;
    msg.lon = 0.579117739192;
    msg.radius = 0.692701110611;

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
    msg.setTimeStamp(0.118125684292);
    msg.setSource(45782U);
    msg.setSourceEntity(110U);
    msg.setDestination(4319U);
    msg.setDestinationEntity(32U);
    msg.flags = 55U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0334846769044;
    tmp_msg_0.speed_units = 123U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.85585719237;
    tmp_msg_1.z_units = 99U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.553300895169;
    msg.lon = 0.892236465449;
    msg.radius = 0.159317186464;

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
    msg.setTimeStamp(0.597905888318);
    msg.setSource(25859U);
    msg.setSourceEntity(222U);
    msg.setDestination(30949U);
    msg.setDestinationEntity(74U);
    msg.flags = 148U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.359920282354;
    tmp_msg_0.speed_units = 164U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.170112750969;
    tmp_msg_1.z_units = 145U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.430552065639;
    msg.lon = 0.638849316032;
    msg.radius = 0.880886910105;

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
    msg.setTimeStamp(0.449551788307);
    msg.setSource(10761U);
    msg.setSourceEntity(35U);
    msg.setDestination(58858U);
    msg.setDestinationEntity(0U);
    msg.control_src = 54501U;
    msg.control_ent = 45U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 107U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.384548150033;
    tmp_tmp_msg_0_0.speed_units = 208U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.131942024286;
    tmp_tmp_msg_0_1.z_units = 189U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.57971223358;
    tmp_msg_0.lon = 0.773559578381;
    tmp_msg_0.radius = 0.0449239315319;
    msg.reference.set(tmp_msg_0);
    msg.state = 207U;
    msg.proximity = 41U;

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
    msg.setTimeStamp(0.728110780641);
    msg.setSource(50582U);
    msg.setSourceEntity(129U);
    msg.setDestination(12344U);
    msg.setDestinationEntity(41U);
    msg.control_src = 9513U;
    msg.control_ent = 124U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 113U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.0422161359145;
    tmp_tmp_msg_0_0.speed_units = 199U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.723991456466;
    tmp_tmp_msg_0_1.z_units = 189U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.529818202146;
    tmp_msg_0.lon = 0.302158117943;
    tmp_msg_0.radius = 0.09901250053;
    msg.reference.set(tmp_msg_0);
    msg.state = 11U;
    msg.proximity = 142U;

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
    msg.setTimeStamp(0.681982761113);
    msg.setSource(26410U);
    msg.setSourceEntity(173U);
    msg.setDestination(41220U);
    msg.setDestinationEntity(110U);
    msg.control_src = 7711U;
    msg.control_ent = 247U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 233U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.576698405531;
    tmp_tmp_msg_0_0.speed_units = 88U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.381744387053;
    tmp_tmp_msg_0_1.z_units = 160U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.975466403684;
    tmp_msg_0.lon = 0.719289240798;
    tmp_msg_0.radius = 0.812337354811;
    msg.reference.set(tmp_msg_0);
    msg.state = 246U;
    msg.proximity = 90U;

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
    msg.setTimeStamp(0.0326568140119);
    msg.setSource(8560U);
    msg.setSourceEntity(149U);
    msg.setDestination(36900U);
    msg.setDestinationEntity(201U);
    msg.ax_cmd = 0.617420319954;
    msg.ay_cmd = 0.134153466317;
    msg.az_cmd = 0.99762314945;
    msg.ax_des = 0.252059935085;
    msg.ay_des = 0.565036572044;
    msg.az_des = 0.934439952428;
    msg.virt_err_x = 0.228401788394;
    msg.virt_err_y = 0.50457810993;
    msg.virt_err_z = 0.29906751748;
    msg.surf_fdbk_x = 0.415195289768;
    msg.surf_fdbk_y = 0.627849890822;
    msg.surf_fdbk_z = 0.646068526834;
    msg.surf_unkn_x = 0.293597996606;
    msg.surf_unkn_y = 0.718152977866;
    msg.surf_unkn_z = 0.0872229221614;
    msg.ss_x = 0.505345345998;
    msg.ss_y = 0.771086856991;
    msg.ss_z = 0.177242619165;

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
    msg.setTimeStamp(0.693603364332);
    msg.setSource(59665U);
    msg.setSourceEntity(63U);
    msg.setDestination(59092U);
    msg.setDestinationEntity(12U);
    msg.ax_cmd = 0.815485763732;
    msg.ay_cmd = 0.792355189984;
    msg.az_cmd = 0.162016888422;
    msg.ax_des = 0.015271131431;
    msg.ay_des = 0.193175483903;
    msg.az_des = 0.741955793903;
    msg.virt_err_x = 0.537874765295;
    msg.virt_err_y = 0.542331843318;
    msg.virt_err_z = 0.282640467591;
    msg.surf_fdbk_x = 0.800565768727;
    msg.surf_fdbk_y = 0.146907081784;
    msg.surf_fdbk_z = 0.293357537785;
    msg.surf_unkn_x = 0.339540254818;
    msg.surf_unkn_y = 0.336428776409;
    msg.surf_unkn_z = 0.61628313728;
    msg.ss_x = 0.0956315160209;
    msg.ss_y = 0.850444289254;
    msg.ss_z = 0.12301380888;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("MNKYJKEORNOSOENLMGHNPHJQSIDYOGWCFMBGTURGTBOTJLTJIJKXXIWC");
    tmp_msg_0.dist = 0.97912129278;
    tmp_msg_0.err = 0.555174668051;
    tmp_msg_0.ctrl_imp = 0.159794220518;
    tmp_msg_0.rel_dir_x = 0.599930466177;
    tmp_msg_0.rel_dir_y = 0.611026176329;
    tmp_msg_0.rel_dir_z = 0.126011772806;
    tmp_msg_0.err_x = 0.0874399648524;
    tmp_msg_0.err_y = 0.273405126602;
    tmp_msg_0.err_z = 0.963657246149;
    tmp_msg_0.rf_err_x = 0.859795919198;
    tmp_msg_0.rf_err_y = 0.499978918994;
    tmp_msg_0.rf_err_z = 0.230882769823;
    tmp_msg_0.rf_err_vx = 0.936222466161;
    tmp_msg_0.rf_err_vy = 0.362217914049;
    tmp_msg_0.rf_err_vz = 0.751606360187;
    tmp_msg_0.ss_x = 0.735096290084;
    tmp_msg_0.ss_y = 0.558517053809;
    tmp_msg_0.ss_z = 0.701945904448;
    tmp_msg_0.virt_err_x = 0.664430802716;
    tmp_msg_0.virt_err_y = 0.900566129788;
    tmp_msg_0.virt_err_z = 0.834440267551;
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
    msg.setTimeStamp(0.112585259703);
    msg.setSource(57164U);
    msg.setSourceEntity(237U);
    msg.setDestination(12840U);
    msg.setDestinationEntity(159U);
    msg.ax_cmd = 0.908407440347;
    msg.ay_cmd = 0.903231851203;
    msg.az_cmd = 0.636713037204;
    msg.ax_des = 0.500757656258;
    msg.ay_des = 0.41785701671;
    msg.az_des = 0.595463608618;
    msg.virt_err_x = 0.608797302742;
    msg.virt_err_y = 0.458977350906;
    msg.virt_err_z = 0.645639126867;
    msg.surf_fdbk_x = 0.322474006618;
    msg.surf_fdbk_y = 0.431462687082;
    msg.surf_fdbk_z = 0.210470606964;
    msg.surf_unkn_x = 0.338677925889;
    msg.surf_unkn_y = 0.715840624766;
    msg.surf_unkn_z = 0.183031535572;
    msg.ss_x = 0.961316751208;
    msg.ss_y = 0.398461258216;
    msg.ss_z = 0.617067162791;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("KXVIOSSDPZPMPPXHAIPBDUHTDGUVHUZBEERYGMZXZLOOVNWKGIFCQSJRMJMKAHHLUBORXGBTLDAIPDYSFIOEGPNCYKRFQLIGYMWDHHESCHOFYWDZBIFIJBKJWISJTDHGRMGRCAVZSEJSPSAWBKNNXJQZGBQAVNGECLBYZQTOYZCZELMLBF");
    tmp_msg_0.dist = 0.788251767303;
    tmp_msg_0.err = 0.568075890887;
    tmp_msg_0.ctrl_imp = 0.705235045061;
    tmp_msg_0.rel_dir_x = 0.725791131889;
    tmp_msg_0.rel_dir_y = 0.220614023967;
    tmp_msg_0.rel_dir_z = 0.65987785783;
    tmp_msg_0.err_x = 0.241570903555;
    tmp_msg_0.err_y = 0.0694271578289;
    tmp_msg_0.err_z = 0.425859781372;
    tmp_msg_0.rf_err_x = 0.373980579208;
    tmp_msg_0.rf_err_y = 0.3884758316;
    tmp_msg_0.rf_err_z = 0.72299182917;
    tmp_msg_0.rf_err_vx = 0.389159389177;
    tmp_msg_0.rf_err_vy = 0.839039117533;
    tmp_msg_0.rf_err_vz = 0.353467069339;
    tmp_msg_0.ss_x = 0.542259320449;
    tmp_msg_0.ss_y = 0.0991108961926;
    tmp_msg_0.ss_z = 0.663903274122;
    tmp_msg_0.virt_err_x = 0.692244405127;
    tmp_msg_0.virt_err_y = 0.867095000153;
    tmp_msg_0.virt_err_z = 0.265298707241;
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
    msg.setTimeStamp(0.523607077649);
    msg.setSource(53925U);
    msg.setSourceEntity(180U);
    msg.setDestination(22005U);
    msg.setDestinationEntity(145U);
    msg.s_id.assign("PMPJSMPLQQJGWBTXZZQJHRLURHVKAAIMDZSIRUYRNJQWSZPCRVTAAWBMYGXEOZTPNBVOWDZFBRIAMNAPDIWQYSDTHLX");
    msg.dist = 0.184029341402;
    msg.err = 0.588177520574;
    msg.ctrl_imp = 0.219348118948;
    msg.rel_dir_x = 0.0495051790088;
    msg.rel_dir_y = 0.913247741442;
    msg.rel_dir_z = 0.877055367323;
    msg.err_x = 0.0950753393464;
    msg.err_y = 0.0928470803964;
    msg.err_z = 0.676518003285;
    msg.rf_err_x = 0.34315141527;
    msg.rf_err_y = 0.334516701354;
    msg.rf_err_z = 0.950482219651;
    msg.rf_err_vx = 0.518118270134;
    msg.rf_err_vy = 0.108592019474;
    msg.rf_err_vz = 0.977762659871;
    msg.ss_x = 0.970514429733;
    msg.ss_y = 0.436483995255;
    msg.ss_z = 0.648369360112;
    msg.virt_err_x = 0.834975110189;
    msg.virt_err_y = 0.478924862602;
    msg.virt_err_z = 0.304236468765;

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
    msg.setTimeStamp(0.732773703299);
    msg.setSource(42187U);
    msg.setSourceEntity(13U);
    msg.setDestination(34914U);
    msg.setDestinationEntity(237U);
    msg.s_id.assign("KOTHVOHRGRGIKTALYEFPJYBTCPDHRIICWQBNLLXKVZYOSAULBCKHUTIVFOPMISOHMYEQFTXUWHHMZTBGZJKQKRGNBANNGYSLTHFFLWNCJJVYCHGEYJAKVPPFJVWINBCUAOJZDDJUDGFUPMRZFKJCRADIVAXLPDRY");
    msg.dist = 0.390026056705;
    msg.err = 0.291743816601;
    msg.ctrl_imp = 0.511817544916;
    msg.rel_dir_x = 0.951557580599;
    msg.rel_dir_y = 0.172079916529;
    msg.rel_dir_z = 0.874115317861;
    msg.err_x = 0.778125721192;
    msg.err_y = 0.699639143864;
    msg.err_z = 0.352957379034;
    msg.rf_err_x = 0.166106234817;
    msg.rf_err_y = 0.80250674146;
    msg.rf_err_z = 0.891907645285;
    msg.rf_err_vx = 0.978170467853;
    msg.rf_err_vy = 0.87121038939;
    msg.rf_err_vz = 0.951016186951;
    msg.ss_x = 0.885839050822;
    msg.ss_y = 0.327530349045;
    msg.ss_z = 0.748323395788;
    msg.virt_err_x = 0.508105864884;
    msg.virt_err_y = 0.972645098114;
    msg.virt_err_z = 0.553798368171;

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
    msg.setTimeStamp(0.925348814518);
    msg.setSource(40684U);
    msg.setSourceEntity(80U);
    msg.setDestination(63760U);
    msg.setDestinationEntity(30U);
    msg.s_id.assign("KGLCSKETRBKWDCPMFMIXXDRAEDIYSHHDIUVHIXKJFDNAONRQUQCUWUZLCBPQRHBYONMCAHMTFNTCZKOBVLPSFIGAXZTRGMUTEWQLFTZHYHYVYKGLRBOYUOICWEQDGYLVJITANOJNUBNJEZJJFLMZSMWBTMWWQVAHZLRUBJWCVRFQSOGEMCHFPKKJSJUSFOLRLEOCXGDAVTDKEWIXRVSANDBIYFPPDSZGAXUEPXPPXX");
    msg.dist = 0.637051888662;
    msg.err = 0.335866258066;
    msg.ctrl_imp = 0.827179811222;
    msg.rel_dir_x = 0.383269934917;
    msg.rel_dir_y = 0.312482409203;
    msg.rel_dir_z = 0.0286198763269;
    msg.err_x = 0.662577936851;
    msg.err_y = 0.0964173474833;
    msg.err_z = 0.241261326816;
    msg.rf_err_x = 0.052395836389;
    msg.rf_err_y = 0.929362125882;
    msg.rf_err_z = 0.397730218741;
    msg.rf_err_vx = 0.282373873477;
    msg.rf_err_vy = 0.540189064429;
    msg.rf_err_vz = 0.19622499021;
    msg.ss_x = 0.160389788869;
    msg.ss_y = 0.892889236364;
    msg.ss_z = 0.509233788078;
    msg.virt_err_x = 0.720715036848;
    msg.virt_err_y = 0.00455295626629;
    msg.virt_err_z = 0.197484481494;

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
    msg.setTimeStamp(0.985420380248);
    msg.setSource(52145U);
    msg.setSourceEntity(37U);
    msg.setDestination(18881U);
    msg.setDestinationEntity(18U);
    msg.timeout = 55148U;
    msg.rpm = 0.349894464092;
    msg.direction = 104U;
    msg.custom.assign("ILZDLEXSEOQEASHBFSCGHFZYTQUGGDLRQEDFGUBBHJUVOVGXQOYMMXDCPDIGPUVAKHYTUZLCARXWSNHAEUOXQYKIT");

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
    msg.setTimeStamp(0.701289528502);
    msg.setSource(47232U);
    msg.setSourceEntity(155U);
    msg.setDestination(2619U);
    msg.setDestinationEntity(227U);
    msg.timeout = 43404U;
    msg.rpm = 0.692269015796;
    msg.direction = 164U;
    msg.custom.assign("XHCNTRIVYVDLEHBLCADROXFKDAMNYUMILTFFNPKASMBTURETGOATPTRIODSOKYUGRTGCRRYJSOMDVSKNDUUDLXSKGBPJPKPCBTMWFG");

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
    msg.setTimeStamp(0.0163876175253);
    msg.setSource(52589U);
    msg.setSourceEntity(184U);
    msg.setDestination(62280U);
    msg.setDestinationEntity(16U);
    msg.timeout = 47845U;
    msg.rpm = 0.926493270533;
    msg.direction = 15U;
    msg.custom.assign("BUQNBFDQHRRDZEZFRQDIZJHBXOXWWCMRLGJQZNTBSOTROEFVVELRPKVWJQAOCLFAPABPYEYGRNXOEAUIEMMEJBOJYVCTGYIKSZWEZKSSCOIAXABWVKRKHALGVYATLPVIGSWIEKJXMMSINNUPWDJDXXGELDQYGNZQZGGNQRMKUUHPPKIMHJZVCYVJYGCLMLHDBWFDUWCODFFUTMXSTLNDHFBTK");

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
    msg.setTimeStamp(0.639141799636);
    msg.setSource(56165U);
    msg.setSourceEntity(40U);
    msg.setDestination(46852U);
    msg.setDestinationEntity(70U);
    msg.formation_name.assign("RIURFADTWVTXNNHEUKLRIMJFGSBYRNHYYZWFTDUMDOEOQBSDLDRGCFVFKCABQVQJLGOVCUDOYHEIMBZCBANCYKGAXGHFQWMRWBACGIOILZIRROGLKJFEXJEOLMEJZUPYTKQSKMYWBXSHUXNPPPMMRLQQCZOAONJXKUHFQKWZDUBWMPRHZSGEFPGJKSEQCIPVP");
    msg.type = 146U;
    msg.op = 39U;
    msg.group_name.assign("XPHHUZVOTDGHFSPBIOQTCKTORGCXALGNZZCDNWLPSUJCMUDAOUQDPYPVYEOYUERVBCUNNSIAQVIRCLDYZUEHYJVMQPPJUZKIGRXMNELNTEMMYGBZWKQUCMDIXILXDFKJXABJGTWWMZBFZASRXGFBAWSTZJNFKYOIKTVOAMLXRQDAELCJACFEQJJILGIWYNDSKHPEDHTSOXLHBXAFWPMGYO");
    msg.plan_id.assign("QAUJWJMFVGSSZEZGDMHTQZJRBQAJLKLVECZSAAHCIRVCXTUXKDBXUIAVCWBPBOSGWRKZDHCQLXEKUDWSDEFWNHYETZGFZYMVYPGXGNL");
    msg.description.assign("ILCYMCHDRURCTAJUWBROPZINZLMZVMHBRFSMPLNJVOEKWCKWHPDGMITZTAPUIEQYVJJCEDWJRBZRLPNTPIVWGTQFLCZNUKPCQUBSSLAOJKLFOJFUODYMGBXEKKECEEBXRXQGURNDTJAVHBVXHIGSDZW");
    msg.reference_frame = 146U;
    msg.leader_bank_lim = 0.0728726767229;
    msg.leader_speed_min = 0.337972440324;
    msg.leader_speed_max = 0.399668602389;
    msg.leader_alt_min = 0.468647984714;
    msg.leader_alt_max = 0.314859383192;
    msg.pos_sim_err_lim = 0.928968801739;
    msg.pos_sim_err_wrn = 0.531561621089;
    msg.pos_sim_err_timeout = 32753U;
    msg.converg_max = 0.383782521596;
    msg.converg_timeout = 10547U;
    msg.comms_timeout = 8457U;
    msg.turb_lim = 0.795800775001;
    msg.custom.assign("CPFLDCPJVQGSGYKXOWYNQSEXPLVWSRVCJMBMDLXHATBTPJUCFJMRQVUZQUONXBODBAHSAWTQAGYHTAIIFKTCFGIHHVMONKWUWFSLNKRCVOYLUSGBZBVAFECHFN");

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
    msg.setTimeStamp(0.188318291866);
    msg.setSource(60514U);
    msg.setSourceEntity(160U);
    msg.setDestination(20650U);
    msg.setDestinationEntity(197U);
    msg.formation_name.assign("FQOWLJEAIHOAUZMWXFYFIBPVCOSKXWTJQGXSTQVFNYHPOSDSCEWAUSXKVUPUCSNYELBZENUJPMWEGHNWGJATEGQTVEUVMLBIIPZHNHQMTPJROTQTCGCKKAZGHIDQYFNZKIJMBIRDLOBYRXSLRCRMWRJIRZDPZCDLTF");
    msg.type = 169U;
    msg.op = 202U;
    msg.group_name.assign("BLAVABDKUJSCWJZRXTERWAVGAYIGEERNPJYCCHQXZOKLEVHWYWDNNQJH");
    msg.plan_id.assign("ILKWLPGRDFUVKIZCWBGLJSDQDSCGQOVOUTUPQNCHTZQWFSJWZXYGZOKGMOCLNBSDRFKVDWMUTYVHNUGEJYBEVSYFPMKKQSMPZMAJTZOARIAFTASSVJJYGTNSPDMKPNXRFRJMOYXPQPQHBMERMRLTBVNNBKRFOXHHWHUFAAAVODFCEY");
    msg.description.assign("YQHFMFLJHUPISCLDRATLILOOUMVDGGNYTDTAKZJHKUZKRDNBYDNOEMWWVGFOHERKFUEHPRKRAIVVVJQQMKTUAMLNHUKUMZPGJJH");
    msg.reference_frame = 250U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 27744U;
    tmp_msg_0.off_x = 0.385636170503;
    tmp_msg_0.off_y = 0.351424926568;
    tmp_msg_0.off_z = 0.718262288555;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.371995189423;
    msg.leader_speed_min = 0.979679223651;
    msg.leader_speed_max = 0.577684990083;
    msg.leader_alt_min = 0.768319410188;
    msg.leader_alt_max = 0.605084105943;
    msg.pos_sim_err_lim = 0.541680390618;
    msg.pos_sim_err_wrn = 0.913190274472;
    msg.pos_sim_err_timeout = 38575U;
    msg.converg_max = 0.716322460141;
    msg.converg_timeout = 40054U;
    msg.comms_timeout = 34765U;
    msg.turb_lim = 0.400960643146;
    msg.custom.assign("JAFREODRQIATFDJWQZKOZMFZOIRVAUFKHKYICZMIWFPSFIBVBRCBVBZJKVNFZVNUPADYESZGLTRRNKMENLJXOQUYNXRUUDGIQHIIUCQWGLSEQHNMPZBSHXPXRNUKWWOWMSAEHLUVTAIWDGOXDXUCLKCTYBGJLPGEVSSJWGHV");

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
    msg.setTimeStamp(0.696435474452);
    msg.setSource(17308U);
    msg.setSourceEntity(174U);
    msg.setDestination(50447U);
    msg.setDestinationEntity(42U);
    msg.formation_name.assign("RPSOMPEHIJSYBEBLSKAIYZCVQRVVMWPRYNJUEVTAETDUOGALQDQJOUBZPYUMIJFYISTJJDWYHHMDVGEFCZQKVGTCUDAXSCGBWCIGTRFOPAHRCLBZQGTWXWQPUNMYNCCKYNCHSXHZRMAWLYVWVFKNGGBQOBDRNUIPBLKDXENTROITXZDALFZLXPCOANXFMOZKRMKBNJFHQVSFQQKBOIWHOWZWTJDEFFSVLYIELHZXPKI");
    msg.type = 130U;
    msg.op = 24U;
    msg.group_name.assign("KGZCEDURASGPGJMBOIRMYPGTNRDXNZDRTBEDEGTVAHJHHCETTJLHOARX");
    msg.plan_id.assign("AAREVGXQLYNAEWJHJRGBKPSRTNGJUQAZYJHBEVZQMXFWUWRXDPCFVZGEPWCZOLCKUMSRZXNXTVQEIHFBSHWJDMPAOLSUCLXEGRAIHOKQDIYROMLYXSDFSJBCTBWITYVVNQSWAXMNURWQDVPSMTZYEJQBVHUHRHHZOKNLPTCDXDZPIGZUMRCO");
    msg.description.assign("OXCAPVUREYSRAZDEWNQLTGIYNXYWTFZJPLDCURNAPMOMJOXATVQGBDFLYEEISFDKTOCVYZHSVTJUXQUIMEWWAIJSPTKFCXGRQDENQXSTOVKBOIVHSHIHHFGJZWSOJZXZJKBGXUAVNUMFOMEWQKVBPCKDDPIBLFYMJIIHFCVMRBQXZAJPTUPAFWCSZPYBWJAKNOHHVCKEENRPLZRIQDYLRNHNUGWRTXGHB");
    msg.reference_frame = 100U;
    msg.leader_bank_lim = 0.898742802231;
    msg.leader_speed_min = 0.720446665974;
    msg.leader_speed_max = 0.171553594886;
    msg.leader_alt_min = 0.944075878763;
    msg.leader_alt_max = 0.892095362188;
    msg.pos_sim_err_lim = 0.0231493358767;
    msg.pos_sim_err_wrn = 0.393341163547;
    msg.pos_sim_err_timeout = 13429U;
    msg.converg_max = 0.0322574421384;
    msg.converg_timeout = 47703U;
    msg.comms_timeout = 47893U;
    msg.turb_lim = 0.107226722191;
    msg.custom.assign("SWIFVKJHFYTTEKNSSPYJWFEHZIUBTYWDIQDAHCNVMDLHLZKBTCJZJYOMP");

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
    msg.setTimeStamp(0.310827247343);
    msg.setSource(48501U);
    msg.setSourceEntity(20U);
    msg.setDestination(39390U);
    msg.setDestinationEntity(66U);
    msg.timeout = 7960U;
    msg.lat = 0.750422878444;
    msg.lon = 0.168416711577;
    msg.z = 0.0679322644517;
    msg.z_units = 220U;
    msg.speed = 0.0534037274162;
    msg.speed_units = 201U;
    msg.custom.assign("SJOSTNSLWXTLQIYHXBMEEJUXPBIUYLODAOYMRJPRJEHNWYYEUTOUDQFANCRKIQBWXZVSXLMAWNKJQAFEOVZVIYBTX");

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
    msg.setTimeStamp(0.822892970914);
    msg.setSource(3730U);
    msg.setSourceEntity(18U);
    msg.setDestination(5195U);
    msg.setDestinationEntity(2U);
    msg.timeout = 62406U;
    msg.lat = 0.717098063372;
    msg.lon = 0.279919815968;
    msg.z = 0.610924572078;
    msg.z_units = 216U;
    msg.speed = 0.901548426485;
    msg.speed_units = 36U;
    msg.custom.assign("NGLHVTCYKKVFFJKRCPCIBDKAXWICTVZSBDYOGFDONOWJDITSMXZSBDKVIEERRLTVUUHAWIFZYFXPGHZMUVWNJNLJYCFDNMGGRSQJEZRNOSRVDLWXABGUAXAAVIEPCYEBLXMMQPMUIEYXHUGBMLCMDRTKKPWNQZMVUHPNRWFOCYHEZHHOJIGPMPJ");

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
    msg.setTimeStamp(0.469208613248);
    msg.setSource(40258U);
    msg.setSourceEntity(97U);
    msg.setDestination(35194U);
    msg.setDestinationEntity(126U);
    msg.timeout = 18979U;
    msg.lat = 0.975785951342;
    msg.lon = 0.246830365492;
    msg.z = 0.465596731118;
    msg.z_units = 16U;
    msg.speed = 0.154436331433;
    msg.speed_units = 82U;
    msg.custom.assign("VGJVROTXOMBAKS");

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
    msg.setTimeStamp(0.88972432673);
    msg.setSource(4084U);
    msg.setSourceEntity(92U);
    msg.setDestination(35813U);
    msg.setDestinationEntity(42U);
    msg.timeout = 64658U;
    msg.lat = 0.306655373146;
    msg.lon = 0.209615469999;
    msg.z = 0.459564554963;
    msg.z_units = 17U;
    msg.speed = 0.236408791243;
    msg.speed_units = 203U;
    msg.custom.assign("QTBLZYJOSXLGKCHGTIAFFACFKOAWYPWSKYSFVIXJVSXFFNRPOGLYLAXJQDZMTKSZEVMCZMHDZQCVWBCBIGRMRWUCGZRJPFTJJHJKNYUJYYZILOKSLVVSBJPNNHEGFEMLQBXOERPTWVSBAVIMKQTABUXDTJZEWBRHSSOWQQDMKUPID");

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
    msg.setTimeStamp(0.928248159941);
    msg.setSource(4045U);
    msg.setSourceEntity(31U);
    msg.setDestination(29596U);
    msg.setDestinationEntity(25U);
    msg.timeout = 29841U;
    msg.lat = 0.0725515906396;
    msg.lon = 0.115269441944;
    msg.z = 0.162115539413;
    msg.z_units = 147U;
    msg.speed = 0.532576056468;
    msg.speed_units = 117U;
    msg.custom.assign("JCXLXCSXVROVAKKWZILCXKRIUESNGOZVIWJSFCDMRZAZCDUHOYOBIHKFAUTWKIYBSYHKMSIAMUDODOEUDBNDATTFHQWBJUDEJCEMLUYXZNFWWIVFUHMQCTYPAHWZQTGRUVDBYTTUWBCNXQDVBWCRGSXHXFGIRGJKFAPNL");

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
    msg.setTimeStamp(0.935296986044);
    msg.setSource(64451U);
    msg.setSourceEntity(235U);
    msg.setDestination(59779U);
    msg.setDestinationEntity(254U);
    msg.timeout = 12900U;
    msg.lat = 0.344123837418;
    msg.lon = 0.80918826173;
    msg.z = 0.780953095742;
    msg.z_units = 187U;
    msg.speed = 0.478115400091;
    msg.speed_units = 244U;
    msg.custom.assign("BDGCJOBRKDZDMBHMTCMGDLZKMSOXUMAVTUNILHZJOUZWMYSWXHCMYWINQKBFUMXSIATPPYNUPCVDPPINSFMLLEROHNQCKRKGBGARVYCZHNGKMTSAOQRXFABGFFFOPEHUJWOBWDIUWLSNNJWVVCPVHEVRWDFVXJARTOLHITCSKXUVFDCH");

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
    msg.setTimeStamp(0.263010648519);
    msg.setSource(39956U);
    msg.setSourceEntity(235U);
    msg.setDestination(13427U);
    msg.setDestinationEntity(200U);
    msg.arrival_time = 0.81565045839;
    msg.lat = 0.424797557275;
    msg.lon = 0.0729682559965;
    msg.z = 0.90545001989;
    msg.z_units = 196U;
    msg.travel_z = 0.168110753747;
    msg.travel_z_units = 207U;
    msg.delayed = 51U;

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
    msg.setTimeStamp(0.9835301098);
    msg.setSource(40250U);
    msg.setSourceEntity(16U);
    msg.setDestination(13348U);
    msg.setDestinationEntity(106U);
    msg.arrival_time = 0.565139373633;
    msg.lat = 0.813713074099;
    msg.lon = 0.404093449197;
    msg.z = 0.659347226764;
    msg.z_units = 175U;
    msg.travel_z = 0.388964418583;
    msg.travel_z_units = 55U;
    msg.delayed = 167U;

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
    msg.setTimeStamp(0.285077671149);
    msg.setSource(41971U);
    msg.setSourceEntity(79U);
    msg.setDestination(40074U);
    msg.setDestinationEntity(175U);
    msg.arrival_time = 0.28550465087;
    msg.lat = 0.353345122576;
    msg.lon = 0.633005826191;
    msg.z = 0.447556522486;
    msg.z_units = 253U;
    msg.travel_z = 0.174986363359;
    msg.travel_z_units = 245U;
    msg.delayed = 169U;

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
    msg.setTimeStamp(0.758282186923);
    msg.setSource(20981U);
    msg.setSourceEntity(121U);
    msg.setDestination(54508U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.741667686242;
    msg.lon = 0.0259529219085;
    msg.z = 0.0172365818212;
    msg.z_units = 27U;
    msg.speed = 0.347672082491;
    msg.speed_units = 109U;
    msg.bearing = 0.890190479191;
    msg.cross_angle = 0.438744067584;
    msg.width = 0.985839611223;
    msg.length = 0.725553872699;
    msg.coff = 94U;
    msg.angaperture = 0.947618501488;
    msg.range = 28149U;
    msg.overlap = 151U;
    msg.flags = 156U;
    msg.custom.assign("YDNLAJDGEFYZNFRTRLDOOMGICVQNSWHLAEZYKRQJQFKWUVTBHIZFFYCBCBXZNHDMXWIZYQFSSDMMTUDECSLXVQLKOCFJYWFGOUUQOLLOGKAXVRZKNVZAWYJOPEVFIJAXJBIETHHDVZONPCGLHVVGCPJQPPSCRHFWBUGJLOKDHERHDGRGEZTODIKMIEMYMPNBRIQWMBNKHAEPJTAQMMLKZTUC");

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
    msg.setTimeStamp(0.265439707884);
    msg.setSource(42030U);
    msg.setSourceEntity(247U);
    msg.setDestination(1794U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.861998979707;
    msg.lon = 0.558836215351;
    msg.z = 0.0468726663799;
    msg.z_units = 198U;
    msg.speed = 0.316313250722;
    msg.speed_units = 58U;
    msg.bearing = 0.788394333989;
    msg.cross_angle = 0.863833899344;
    msg.width = 0.0185423299185;
    msg.length = 0.715720905732;
    msg.coff = 251U;
    msg.angaperture = 0.97259973306;
    msg.range = 57634U;
    msg.overlap = 107U;
    msg.flags = 98U;
    msg.custom.assign("XTSVRUGLJOLCIVBYSBNEKMORDXQGAZWFWLSLPKICDMBJQQKZJHTPWYFCFOGU");

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
    msg.setTimeStamp(0.40132863807);
    msg.setSource(2075U);
    msg.setSourceEntity(38U);
    msg.setDestination(27328U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.506782797893;
    msg.lon = 0.529672509624;
    msg.z = 0.122453901951;
    msg.z_units = 33U;
    msg.speed = 0.153697142001;
    msg.speed_units = 208U;
    msg.bearing = 0.311356536468;
    msg.cross_angle = 0.998221128934;
    msg.width = 0.772198683844;
    msg.length = 0.654574663271;
    msg.coff = 11U;
    msg.angaperture = 0.389636786925;
    msg.range = 13314U;
    msg.overlap = 145U;
    msg.flags = 28U;
    msg.custom.assign("XMWVQEQCEQEGUZPDERKVYJEWYNWTAIHSCBCEBBSXKTLNNYIKJQUVSVXDIRNUCMWNCTJWMWAYNZHGGQGHYGCANBAALBPFSXMZSNPKXTGLXDITPXAOLQJOYAVMYIZZFJIBYIFZZFHXBMEGNKMOOFHLTWFFAEUOVMOGVPLFLFOYIEWQGSTKHDZRMJQCZCDXHRPUDYPDUJKSUOTSEWLMDCBCRRFPURSVZKXAVRGLSQJP");

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
    msg.setTimeStamp(0.582168141435);
    msg.setSource(55416U);
    msg.setSourceEntity(237U);
    msg.setDestination(61268U);
    msg.setDestinationEntity(38U);
    msg.timeout = 21286U;
    msg.lat = 0.842729593824;
    msg.lon = 0.884780306103;
    msg.z = 0.635676286305;
    msg.z_units = 158U;
    msg.speed = 0.595614183015;
    msg.speed_units = 23U;
    msg.syringe0 = 123U;
    msg.syringe1 = 103U;
    msg.syringe2 = 99U;
    msg.custom.assign("ORSAMUZZNTIAOTYHWQKFXJBBLTXXNJHDUVEEXLQVEEDDWCSCYDRUNLFRBLMRYKGFGSFHJBEGAZSPDYZINPOUAVFKKZAHYQYBMWBRBSLBHCVIXCJUAQPHJVUOTYMWMOXGGEFAUCUKKIYQKXRQGVTHVMJOGRZQL");

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
    msg.setTimeStamp(0.744161035367);
    msg.setSource(17915U);
    msg.setSourceEntity(177U);
    msg.setDestination(34863U);
    msg.setDestinationEntity(203U);
    msg.timeout = 1293U;
    msg.lat = 0.0625547477188;
    msg.lon = 0.647202825567;
    msg.z = 0.372343841221;
    msg.z_units = 53U;
    msg.speed = 0.76991979595;
    msg.speed_units = 122U;
    msg.syringe0 = 211U;
    msg.syringe1 = 4U;
    msg.syringe2 = 130U;
    msg.custom.assign("MPRIDJGKKYWVSXEYKMPNWVOLJXPQSQZPZCYZKKKA");

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
    msg.setTimeStamp(0.0781813750279);
    msg.setSource(65218U);
    msg.setSourceEntity(49U);
    msg.setDestination(17107U);
    msg.setDestinationEntity(11U);
    msg.timeout = 29136U;
    msg.lat = 0.407069722106;
    msg.lon = 0.443763582198;
    msg.z = 0.649766426105;
    msg.z_units = 10U;
    msg.speed = 0.388728129467;
    msg.speed_units = 96U;
    msg.syringe0 = 159U;
    msg.syringe1 = 32U;
    msg.syringe2 = 152U;
    msg.custom.assign("YEYIKPOKHNGIFFVCFWAMJVYOLWXUMAUXYYLXWNEVRDHQNOQRASDULNHTWEIRFJXC");

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
    msg.setTimeStamp(0.110225201586);
    msg.setSource(37627U);
    msg.setSourceEntity(144U);
    msg.setDestination(42045U);
    msg.setDestinationEntity(124U);

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
    msg.setTimeStamp(0.0961740633522);
    msg.setSource(36006U);
    msg.setSourceEntity(223U);
    msg.setDestination(17555U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.496924588062);
    msg.setSource(59336U);
    msg.setSourceEntity(154U);
    msg.setDestination(63203U);
    msg.setDestinationEntity(54U);

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
    msg.setTimeStamp(0.506340947184);
    msg.setSource(37066U);
    msg.setSourceEntity(44U);
    msg.setDestination(7062U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.262882281792;
    msg.lon = 0.938495046922;
    msg.z = 0.160330531773;
    msg.z_units = 215U;
    msg.speed = 0.118730448098;
    msg.speed_units = 101U;
    msg.takeoff_pitch = 0.570550608613;
    msg.custom.assign("PEQCJEYVOZNXYCVROIQHWYALTIRPBOYLYZEHAUGIEBRRXCNFJKBGOJVLLMKYTDPXJTXSWDOUMOTREKWD");

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
    msg.setTimeStamp(0.030649053134);
    msg.setSource(54054U);
    msg.setSourceEntity(176U);
    msg.setDestination(44205U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.00659829603228;
    msg.lon = 0.11329081398;
    msg.z = 0.511979811273;
    msg.z_units = 120U;
    msg.speed = 0.497030863531;
    msg.speed_units = 222U;
    msg.takeoff_pitch = 0.568903554311;
    msg.custom.assign("LPANBZBLWCSICVEFRDWOGIJXGZLMFVJDJURLMHCGPIUXYXSVTUIKYVNLAXWKEGKEYEQCVAJEQARCVYZQPVUDJTWFOUYEJJIZQAUTSNRTBDQGSXPIAXNMKOCBRYOPDHEUTZDQGLHBHIVSTDGMZWTTQMUDSKBEQNWHCFLNHZPXJYBDEAJPZWZOLOTIEOMVGUMYMRHXFPCFYUBOWPQ");

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
    msg.setTimeStamp(0.917602710168);
    msg.setSource(48747U);
    msg.setSourceEntity(109U);
    msg.setDestination(39434U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.287030775031;
    msg.lon = 0.604973723284;
    msg.z = 0.525848961371;
    msg.z_units = 214U;
    msg.speed = 0.395343484205;
    msg.speed_units = 177U;
    msg.takeoff_pitch = 0.498888437586;
    msg.custom.assign("WKPVZFBPLJVRPRENRZBXQAGDOXDFFXOVHPWTOMVLTKSWKCPBRSKGSZVVAFJXVFRJAEZYHBDUZHPZIRQKIDQCJBDYCDISRTCHTLYFXFGUNIHUINTRSTUNZLPDAOMVENLLUYCYYBUEJGODVMCACONHBJTIUMQGEMZVIYQHBKOEOKJGYQLSQXLIGKLWKNWIUAWJTXEMGFSMUCDNSSWTMBPCTKUQJNDHAAPMOOWYCXSHQMRRQPGXYLGIZ");

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
    msg.setTimeStamp(0.653986783674);
    msg.setSource(1015U);
    msg.setSourceEntity(0U);
    msg.setDestination(50700U);
    msg.setDestinationEntity(77U);
    msg.lat = 0.886924128491;
    msg.lon = 0.623510959002;
    msg.z = 0.096469406391;
    msg.z_units = 142U;
    msg.speed = 0.991781684255;
    msg.speed_units = 123U;
    msg.abort_z = 0.609765130432;
    msg.bearing = 0.429837971459;
    msg.glide_slope = 16U;
    msg.glide_slope_alt = 0.862338548642;
    msg.custom.assign("SYESTHRDBKLSSAJXNUWBTVHOGVAUKYPUVAXWTBTOCEFNJKJKINLENOYVLIKGRMVNAIDDHFGYTSQLURGWYWIPCOTGLTZCJKCCWJSVGWFHPQF");

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
    msg.setTimeStamp(0.671066867105);
    msg.setSource(40551U);
    msg.setSourceEntity(200U);
    msg.setDestination(61434U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.748481800019;
    msg.lon = 0.271370461661;
    msg.z = 0.573912263908;
    msg.z_units = 186U;
    msg.speed = 0.111270401353;
    msg.speed_units = 218U;
    msg.abort_z = 0.818851620863;
    msg.bearing = 0.424527986306;
    msg.glide_slope = 216U;
    msg.glide_slope_alt = 0.401337392788;
    msg.custom.assign("BGYCHQHCIJPPQBCOEZCIZQMLDULRFMWALL");

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
    msg.setTimeStamp(0.258278561566);
    msg.setSource(53725U);
    msg.setSourceEntity(113U);
    msg.setDestination(30284U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.315486242342;
    msg.lon = 0.325112538647;
    msg.z = 0.952973145983;
    msg.z_units = 251U;
    msg.speed = 0.901003394384;
    msg.speed_units = 36U;
    msg.abort_z = 0.293727229597;
    msg.bearing = 0.825922326545;
    msg.glide_slope = 184U;
    msg.glide_slope_alt = 0.282624634966;
    msg.custom.assign("GHZLDLTCDYNKDIDIOSMJRUOLAGTQUBHMPWDEAHNBZFPYRPSBVLWCLIIUYWQLKEVSOKXDKVQPJJJCVXTOJTHIBKUFVXDVNSDYTBFHATHDEXFPXXXWPMEXOGEUCTLUCVRSOGHKWZJNGGZQCVTWSCIBIOCWHAKFKSEGAJTML");

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
    msg.setTimeStamp(0.97597979499);
    msg.setSource(47850U);
    msg.setSourceEntity(32U);
    msg.setDestination(10772U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.929830892671;
    msg.lon = 0.794836719124;
    msg.speed = 0.232750205994;
    msg.speed_units = 163U;
    msg.limits = 41U;
    msg.max_depth = 0.753594115387;
    msg.min_alt = 0.851641127287;
    msg.time_limit = 0.492855468632;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.521130374105;
    tmp_msg_0.lon = 0.525037001046;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("LYETFIZIBGBREXQWPESOSSAKIRFRSECNMLZLRWGGFKHHJEPVYOEBFQJMTXSXJKLCCPUXJTOUSJJBNZS");
    msg.custom.assign("GDZPDTSLNHIIEXAJDMTFUMNFYWCLLDHTDKVQSVZWBDDSQJXCNSQUZCEHEXEZTKQGSUENXMPWYJKQYJGPPXPQWRKAWRFBNZNOWMESFUMGVBVDQKICMLYMUXUERIYJTZIZCYQMUWWSROHEPAIBNCJOFTEPPXTCKPMJGWBXUASYETVHFIWLGVNLZCIBJLZURNUJZGFCLVPROXHGBQHAIRKKSTVGHOSDOAVALBHYKYOFAOOLKDCMAOXFYRRV");

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
    msg.setTimeStamp(0.588141200128);
    msg.setSource(32508U);
    msg.setSourceEntity(56U);
    msg.setDestination(30766U);
    msg.setDestinationEntity(192U);
    msg.lat = 0.664588559183;
    msg.lon = 0.565512732772;
    msg.speed = 0.48270584094;
    msg.speed_units = 90U;
    msg.limits = 201U;
    msg.max_depth = 0.658337266032;
    msg.min_alt = 0.498641117331;
    msg.time_limit = 0.59514125192;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.767256222796;
    tmp_msg_0.lon = 0.625383845603;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("NIDOIJGZXYNVMHYAQPSONZBSUNOWBABQHGVNNXNZPMJAAVSVQRFQJKWERDKMULQGFFYVIXTTMQWRGINBLDXLBKTCFCGJMORFRBBBUCWSISVHYNNOLWGLRTPCUKZDXMWHRPCCPICWAZLGVFJMJLOPPGIYWZGRDBYMTYRAIFTDZSGJOZVQSUCUVSTLDXZPUEUQIKPUAVEEXXIAJKEMEXDKEFTFHDREOHAMPHKCLFOYQELYKHOCWH");
    msg.custom.assign("YUMCKCDYDWYOSJITSKNMMEWE");

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
    msg.setTimeStamp(0.208473612563);
    msg.setSource(37640U);
    msg.setSourceEntity(75U);
    msg.setDestination(19832U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.0495229468555;
    msg.lon = 0.793845833122;
    msg.speed = 0.98822900308;
    msg.speed_units = 67U;
    msg.limits = 135U;
    msg.max_depth = 0.73496339557;
    msg.min_alt = 0.445918264183;
    msg.time_limit = 0.178993692532;
    msg.controller.assign("STGXWAPTXNOVBILZBVQFPEEQQCNIUOZUWBGXDOHPBRQRIG");
    msg.custom.assign("SKJBGXHBROLCKZUMPHHVDDLKMALSFWMOBNOOHBWYRNDXZKFEUHPCUJMEUEWLAKVRZFZKXKUYFVNUAJLBAMSUPNFEMWAUAHAYYINELYDSGMVJGDPSKRBXDZJXRECGCFIQMEYZSTQPFRSCJJYIMTJTTPIIUQDBXQCQLITNPHJNNXOYKLGCRWFSXICQPJSOHSQGOORZFGKVYZPQQRIUFLNDADWNL");

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
    msg.setTimeStamp(0.17639984962);
    msg.setSource(8502U);
    msg.setSourceEntity(225U);
    msg.setDestination(53570U);
    msg.setDestinationEntity(248U);
    msg.target.assign("JQYTWFSLSAQSNGNZBRSKSNZPHQOPRGXVPHUPFMJXBBJCQIXCQEZIARSGNEIIOBOKTLGMSJFRCUJRKYHHIXAWVSMFMWBCGGEWHNFRLXAXQYWDLCFAUQLKYHJZHHOQCPWBAFLVMEREYYVVUTZBDTOPVGZSTWUUKKCHZLDAXWGVWMDFPCMDVYNXBKSPEBDLMNEMZKOVXEU");
    msg.max_speed = 0.701256252021;
    msg.speed_units = 52U;
    msg.lat = 0.573481537454;
    msg.lon = 0.0579742364766;
    msg.z = 0.869200352466;
    msg.z_units = 97U;
    msg.custom.assign("YUSWVVKKFCGFEWRKIHOFKSUYZQLCSJHBPMQZWMDVWCJXNYGACIXIKVFBBLRFEKQNPAVOMLNMUOMFHBGJTKLQYEPMQGAJVMCPICWAZBOTEDZTSEVQ");

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
    msg.setTimeStamp(0.277082159565);
    msg.setSource(55928U);
    msg.setSourceEntity(194U);
    msg.setDestination(60345U);
    msg.setDestinationEntity(249U);
    msg.target.assign("KEHRXQZVDUAEYRJGGJLBDYEKKFVAEPYZMMACXIVAPKOLUPOETLMNSIFFTALRZMWGDIEMDZHNHFWVBPSJKTTUQNXORMBHHSRGDWMZZNQVKOBLYWSQNSCCPIURJNYOLHUSYAIRWGUSAMHJZDBUEOMOGESJJGZQYFPGTVXCBXINKVHUCTOLCRFDUJLQFTAAYLCBELFJWFXBQAGKCCZDISTBVVWMQVDPYJTRQKNGXTEBUXNOIZOIIWXSCHPWRKX");
    msg.max_speed = 0.0132806555389;
    msg.speed_units = 58U;
    msg.lat = 0.800901976348;
    msg.lon = 0.133703841281;
    msg.z = 0.354859202088;
    msg.z_units = 56U;
    msg.custom.assign("BDUJSMQUEAYHBSJHZIWEBOLCHBWEXXBOQKCFAFGRKZHHERHOERFRKABUGRXVBVCLNHUEGYGZFSJJXXNBLALSWPHJTTJSQGQPINAZXNQRDMVDQPJQSAMVOIICPYWTZTLWXUTDGPHXOMNPMPVCZFPOBSYUIJUAGMSDWYKMODTFZTIHZNIMNATTKLVDYNBRFCYFTPXWJEUOKORVDLNVLLIMO");

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
    msg.setTimeStamp(0.779097664171);
    msg.setSource(29425U);
    msg.setSourceEntity(222U);
    msg.setDestination(41523U);
    msg.setDestinationEntity(1U);
    msg.target.assign("DSDPYXDTVFQPVABLZQQTWDKKKYXAVUFHPMZCCXFIRYLCXCMPGRPMUKYIEWHMKXJDCPSVEZHFQMACRWDDL");
    msg.max_speed = 0.841751718415;
    msg.speed_units = 160U;
    msg.lat = 0.208738728712;
    msg.lon = 0.0919868514759;
    msg.z = 0.772052328957;
    msg.z_units = 245U;
    msg.custom.assign("WWSHRVWFRNGZGYUTOILEJDJHZJHJKBZNLPYEVDKLKQZOCMSCEGHGBSOUBLKTGGSQIIEFNWC");

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
    msg.setTimeStamp(0.625652080343);
    msg.setSource(19410U);
    msg.setSourceEntity(164U);
    msg.setDestination(49617U);
    msg.setDestinationEntity(115U);
    msg.timeout = 24081U;
    msg.lat = 0.795385394975;
    msg.lon = 0.00664460288295;
    msg.speed = 0.278863696635;
    msg.speed_units = 19U;
    msg.custom.assign("TNKTGPQODCMCGTOGIZKUKPPGNVMDTEIYPFIOMAXRDYBFSUEFJHZTJWXYNRUJUFDTDOSOMXRLBZLYCHHOXFSYPMCCRJHMJSBZNLHVSIGRQEVRDBQ");

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
    msg.setTimeStamp(0.999080876561);
    msg.setSource(44654U);
    msg.setSourceEntity(97U);
    msg.setDestination(33816U);
    msg.setDestinationEntity(88U);
    msg.timeout = 47870U;
    msg.lat = 0.340486426567;
    msg.lon = 0.231845724215;
    msg.speed = 0.623329434926;
    msg.speed_units = 59U;
    msg.custom.assign("FQDMFKLZWHSKEPESPGGMMDPUHMAPOCUPGNZVLSKSJOJHRZI");

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
    msg.setTimeStamp(0.463086901476);
    msg.setSource(15392U);
    msg.setSourceEntity(208U);
    msg.setDestination(5634U);
    msg.setDestinationEntity(70U);
    msg.timeout = 18535U;
    msg.lat = 0.0554370226905;
    msg.lon = 0.0330555028292;
    msg.speed = 0.0419137118486;
    msg.speed_units = 124U;
    msg.custom.assign("KMHXTIEFRIEPRCXCIYUVMYGNAYGPHLVVVWGYHBKVJUDCSCMOYCHEAXURLMOTZOVFVDGWGWCNNPGAEJHIZQOTSGEWMOPSKUNRCQMHOBFFVWLAYLZBRHSRFPARZJXKPSCEQQOOAPYKZQXNWDDQSKDJJZJPXAUTAXDXIQUDGYZSUEILOFEHQXDMLSRXUYOFBYHUNVRFTATBMWWITWIPBCLLBDQZVQBNJCJI");

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
    msg.setTimeStamp(0.994879767932);
    msg.setSource(19044U);
    msg.setSourceEntity(205U);
    msg.setDestination(11241U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.75688211113;
    msg.lon = 0.355118933229;
    msg.z = 0.0535652292559;
    msg.z_units = 91U;
    msg.radius = 0.541283167744;
    msg.duration = 17685U;
    msg.speed = 0.172100135432;
    msg.speed_units = 133U;
    msg.popup_period = 64817U;
    msg.popup_duration = 4041U;
    msg.flags = 108U;
    msg.custom.assign("KTUSXNJKIUFJUEMLMGJKBXKGDBGOQAMTSWRYQCSKTDDLIKIKMBERXFBHUXEZQNLROHRJIHJWZPMUARQVFJDBYCLPOYLNAARMEGRILOSOVLVGIWQVELECGKDWGTUPXCPFVTGTLESHKHROBFLNDYUAXXAMEDHHCOQCTBAXADOVQMDXNUYBMHXIQPQZ");

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
    msg.setTimeStamp(0.468835619485);
    msg.setSource(4680U);
    msg.setSourceEntity(182U);
    msg.setDestination(2730U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.755753014157;
    msg.lon = 0.693429788094;
    msg.z = 0.943135360352;
    msg.z_units = 36U;
    msg.radius = 0.988740130712;
    msg.duration = 33685U;
    msg.speed = 0.053925965942;
    msg.speed_units = 88U;
    msg.popup_period = 49836U;
    msg.popup_duration = 17981U;
    msg.flags = 191U;
    msg.custom.assign("TTROSKQTPCKEHNDMHNVHLLBCMZIAROSXORKXGXYSWUBIQAPLMYCDQGWLNSKFWBRWIIJRLOVTFDNZUUEKZPUKTVPHCGHCVZZGANQGSKPAZPGOJXJXMDGYWJDPAVSYILHFFFHBQBQXKMIOTMDJZXWICYFLVYMSUWVLCBVDEBCZTHSBSV");

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
    msg.setTimeStamp(0.847316434025);
    msg.setSource(37089U);
    msg.setSourceEntity(39U);
    msg.setDestination(6778U);
    msg.setDestinationEntity(127U);
    msg.lat = 0.296466168489;
    msg.lon = 0.4437540347;
    msg.z = 0.883789185074;
    msg.z_units = 168U;
    msg.radius = 0.273389221957;
    msg.duration = 48998U;
    msg.speed = 0.832395610952;
    msg.speed_units = 142U;
    msg.popup_period = 6638U;
    msg.popup_duration = 49869U;
    msg.flags = 16U;
    msg.custom.assign("LRPQBRGRRTDQYUSDITKDOOHVHPGXLZTEYZOQTCZUPASNUDHLXSAFSKJORYKMMOHNBIGPCNFGGEGLZVII");

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
    msg.setTimeStamp(0.221191736545);
    msg.setSource(21029U);
    msg.setSourceEntity(254U);
    msg.setDestination(21700U);
    msg.setDestinationEntity(161U);

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
    msg.setTimeStamp(0.454611367205);
    msg.setSource(39577U);
    msg.setSourceEntity(250U);
    msg.setDestination(32114U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.173367490634);
    msg.setSource(17932U);
    msg.setSourceEntity(167U);
    msg.setDestination(23600U);
    msg.setDestinationEntity(227U);

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
    msg.setTimeStamp(0.277393865766);
    msg.setSource(32550U);
    msg.setSourceEntity(136U);
    msg.setDestination(35419U);
    msg.setDestinationEntity(167U);
    msg.timeout = 26193U;
    msg.lat = 0.222449413014;
    msg.lon = 0.0962459632656;
    msg.z = 0.272182059849;
    msg.z_units = 173U;
    msg.speed = 0.432702042753;
    msg.speed_units = 245U;
    msg.bearing = 0.0338761306369;
    msg.width = 0.615513271051;
    msg.direction = 83U;
    msg.custom.assign("PIJZIOCKWOTEJJXDUKEVXSLLZQLXOKQSWZQJYBTHFRSVMZFLZTNNIPNHUAUCYDCURRYAYBLSHDVDHNYXHFHUYSKFJGKOTDZTEMRYRJKRBDWAATAEAKBIQCPNVEVGYQOVNIWBAWUBOTRMQEVUEHBLHMPLLDSAPMSGBSQVZTLWWAZGIMOFGXIGHXIYIZKTODDQWXPGGNMXRKUNDQE");

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
    msg.setTimeStamp(0.850362387117);
    msg.setSource(23794U);
    msg.setSourceEntity(155U);
    msg.setDestination(19912U);
    msg.setDestinationEntity(82U);
    msg.timeout = 57215U;
    msg.lat = 0.770035023653;
    msg.lon = 0.546455250709;
    msg.z = 0.898630727075;
    msg.z_units = 55U;
    msg.speed = 0.692252742648;
    msg.speed_units = 241U;
    msg.bearing = 0.448356575246;
    msg.width = 0.604108181634;
    msg.direction = 97U;
    msg.custom.assign("TOEJIFSGBAPBDVJJHPUAOCSMSFSEFYTYDFBVPYIUPAWMJKRTRSLFJEDWAMQRKREMENQWEQXKHYWSIDOYIJMUHC");

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
    msg.setTimeStamp(0.929282521516);
    msg.setSource(56578U);
    msg.setSourceEntity(198U);
    msg.setDestination(61749U);
    msg.setDestinationEntity(212U);
    msg.timeout = 35071U;
    msg.lat = 0.375433584503;
    msg.lon = 0.58857212322;
    msg.z = 0.738874615405;
    msg.z_units = 195U;
    msg.speed = 0.839943769892;
    msg.speed_units = 39U;
    msg.bearing = 0.11034016234;
    msg.width = 0.685756483914;
    msg.direction = 123U;
    msg.custom.assign("LSTVWXVDNSRNWXTOQKJJUFGXTXEKBWAIBHQJMVCBLUHYFTEBNZQODGLXTWANDNB");

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
    msg.setTimeStamp(0.0102425276397);
    msg.setSource(25564U);
    msg.setSourceEntity(100U);
    msg.setDestination(59758U);
    msg.setDestinationEntity(23U);
    msg.op_mode = 69U;
    msg.error_count = 166U;
    msg.error_ents.assign("WJANHYBWOP");
    msg.maneuver_type = 17316U;
    msg.maneuver_stime = 0.607531574005;
    msg.maneuver_eta = 40516U;
    msg.control_loops = 1972548815U;
    msg.flags = 249U;
    msg.last_error.assign("QLAIEDGQXDIRZUTBJZMSVSLOTSX");
    msg.last_error_time = 0.560321549676;

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
    msg.setTimeStamp(0.865246782901);
    msg.setSource(35397U);
    msg.setSourceEntity(75U);
    msg.setDestination(48512U);
    msg.setDestinationEntity(224U);
    msg.op_mode = 185U;
    msg.error_count = 45U;
    msg.error_ents.assign("OVYFSYZAHWRMVSKYDGWQLFNAVNVLLMDYPUEZDLSJBZTXRKOWOTVUFZRBHECZYYIEIFVXQQYFPWOMWSENIWSHOXVWSLXNATTMGOTERMEIZUPEMAKNMJPIUTVXBCSGAOJTUGIFHDJBUAAYFQOQXBDKCSM");
    msg.maneuver_type = 23271U;
    msg.maneuver_stime = 0.579233352104;
    msg.maneuver_eta = 54346U;
    msg.control_loops = 321193200U;
    msg.flags = 36U;
    msg.last_error.assign("APTZLRRHLLHRXJNUYOHNVSJBFYYANBKCIXZGXEOJUQIUUBWQPPHOTYYXVXOOVCJYBSGAWOKZKNFIZINJDCINKZUQLGELLZMGSSFBVVFWEDFVQWZPPKMGTQHZIU");
    msg.last_error_time = 0.7354351493;

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
    msg.setTimeStamp(0.32574299543);
    msg.setSource(4615U);
    msg.setSourceEntity(242U);
    msg.setDestination(32113U);
    msg.setDestinationEntity(95U);
    msg.op_mode = 232U;
    msg.error_count = 50U;
    msg.error_ents.assign("LUAQGXMIOJNYAPYMKARYPEDACTFVSIUNJNCSXZBRFDEKDEBPVPKJTVMFPITWXOTNWOZXWDXFQKZCDDILHJDDYLJHQCHVIHBOBWBKWIVBFHGKVXGCYUSOIBHM");
    msg.maneuver_type = 43227U;
    msg.maneuver_stime = 0.651684680081;
    msg.maneuver_eta = 4633U;
    msg.control_loops = 2276070531U;
    msg.flags = 37U;
    msg.last_error.assign("GMBTMIUHTEHDAZLUSCGNCWSOJVXVJCIJLARMRKECAFXAXSLNCOGQQORKDZNWKAEHEFZBWGQJNETHZTTHVIFRUSAEAZIEPYEDZCTSVCQVWZOBKD");
    msg.last_error_time = 0.816316718039;

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
    msg.setTimeStamp(0.0812507802434);
    msg.setSource(58653U);
    msg.setSourceEntity(50U);
    msg.setDestination(25992U);
    msg.setDestinationEntity(71U);
    msg.type = 254U;
    msg.request_id = 26407U;
    msg.command = 211U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 11715U;
    tmp_msg_0.lat = 0.71030339642;
    tmp_msg_0.lon = 0.918779867571;
    tmp_msg_0.z = 0.561370009688;
    tmp_msg_0.z_units = 175U;
    tmp_msg_0.amplitude = 0.706273891718;
    tmp_msg_0.pitch = 0.0347512750245;
    tmp_msg_0.speed = 0.859162430133;
    tmp_msg_0.speed_units = 64U;
    tmp_msg_0.custom.assign("SXRACBGKXTWIBZNBPXZKYVJLDMFHRTYNYPJRBFXEZMWSICZNBPYVHQPSLRVTNIBBMFVCRJXYVKPTZQWWMUWKLUPNSAJJQHTSQNHIWURFHAMEUEIKDVBUHXILLDTGYGWJABODSRTODOEYZSWOEUHXAFQXADPQMAPVDLYXAAQQVMEYHZHPCJJGKUCPGWOGISSZDTSQRFJMKONGBOTYTCLGIHEKKJXFEQC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 14739U;
    msg.info.assign("XXPANPQNNWZLCZWQNTVKJHKIUMCAEDZYOGUQFHQUVSFPEVDXOTCJFYURPBBMZSEJOQRJQLBGLWNRLMSPXDQONOASPBYWHUPJXJBNWMKFKMHDJYHYFVCIAMODYEVEKLIURTGYWIIFODFDEDUVJAGYU");

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
    msg.setTimeStamp(0.19158009407);
    msg.setSource(5561U);
    msg.setSourceEntity(194U);
    msg.setDestination(27744U);
    msg.setDestinationEntity(249U);
    msg.type = 98U;
    msg.request_id = 19797U;
    msg.command = 3U;
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.168949436589;
    tmp_msg_0.lon = 0.753646516076;
    tmp_msg_0.z = 0.518879475446;
    tmp_msg_0.z_units = 62U;
    tmp_msg_0.radius = 0.686286690156;
    tmp_msg_0.duration = 44811U;
    tmp_msg_0.speed = 0.179441018518;
    tmp_msg_0.speed_units = 14U;
    tmp_msg_0.popup_period = 50832U;
    tmp_msg_0.popup_duration = 59785U;
    tmp_msg_0.flags = 37U;
    tmp_msg_0.custom.assign("BPPLLTOYAYUTKBRFWNMSOTBTIGZFBWDHOFXGNBUVDRAEJKFNUXOQJLMOHPJTTDPWQVUCXKLIZHLRGNCEYNBHKQMYISLGEUBECDMPQLNQAWEIEZCVXVXOCNSUBWHYZUJVUJORPBUXIWDGGKRIQZHRCHQNIOYDVAHKXDSWKQMPRIFOZQCWEFSXRGLPIDNUZXGT");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 31958U;
    msg.info.assign("VRNFYRFXECBHWMFSOJYPBLBRMKLASPSOXAKWMQUEHGMWCOGRYGN");

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
    msg.setTimeStamp(0.611360935067);
    msg.setSource(38008U);
    msg.setSourceEntity(88U);
    msg.setDestination(20440U);
    msg.setDestinationEntity(197U);
    msg.type = 98U;
    msg.request_id = 61212U;
    msg.command = 106U;
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("WXPOAKCYDWOVJRATGRKUNQCYKKPRJQRTYFZRGIMZQRCLXOEXRGUJHMINZSJMJZETOXSOOVKDFXAESBGZCWAESCIFMYYTQZMFTPJMMIHWITAELJGYERWVYFYJQIBBFOSTUBCCDPHDWWSGGLBZPWZTVKKLRBLLLNUWXPXVINVRDKPSLXLH");
    tmp_msg_0.max_speed = 0.940939180464;
    tmp_msg_0.speed_units = 36U;
    tmp_msg_0.lat = 0.728138392251;
    tmp_msg_0.lon = 0.705900312171;
    tmp_msg_0.z = 0.566567087612;
    tmp_msg_0.z_units = 198U;
    tmp_msg_0.custom.assign("DYOVAVAYGCWMWPRWLSURLHWQBRAJNWMGHPOLYOQXWHMFUZGQXNKQTYAGPORHAXIMUNSSKMHJLTFBPMYNKKLIPUBZDWEDHXVJHAJCYHSOJIEPHOLGOJTSDNDQQKVUCXVFYZLKRBUUDZEPDXZ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 474U;
    msg.info.assign("WBAGOKZCVGRXLHQNOTUROLWFXRGSYQDJODATDLPKKZJBDGTPMNNLYCQIIJSSOPFRQPVVTIBCZUGYBYWELRTMEGQFDUJVZLUWQOGKWHSFKRUCNMAQOIQAAMZZFVDDTZLBHASNYJHPCXUWFINULVJOSRAOKYDH");

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
    msg.setTimeStamp(0.828104672345);
    msg.setSource(52279U);
    msg.setSourceEntity(145U);
    msg.setDestination(8668U);
    msg.setDestinationEntity(50U);
    msg.command = 132U;
    msg.entities.assign("SFEHHCFZETBRVESSKXRFXIAKWAPSEGZFYGMGMUCJVHLWOTUBTFTDHEJKRNYIQJUQZANAB");

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
    msg.setTimeStamp(0.603103511077);
    msg.setSource(52086U);
    msg.setSourceEntity(125U);
    msg.setDestination(65364U);
    msg.setDestinationEntity(116U);
    msg.command = 85U;
    msg.entities.assign("GWRRWGXHWSGSPWNJTBSHQOZYBZPNNCFNJUKUVWHIOCEGNFDRNEHYSMTKBBTMACIQJAPFFAOMLRMLFBXXDZHHSMSILLJJXGXVREIGVVHKVDUEAEJZAZXBPOUQOATFYFTMJNIGKAGOVJYPPIAJCEQOZRTOFRFZGNXVAUDKSIDXBSUDYEQDJPWKMCRHETTNTKHWVZWXDQKLRWXYNILCLOEQVEDSCQBLD");

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
    msg.setTimeStamp(0.0766450258061);
    msg.setSource(28075U);
    msg.setSourceEntity(236U);
    msg.setDestination(52391U);
    msg.setDestinationEntity(224U);
    msg.command = 139U;
    msg.entities.assign("ZDYCXTOXSAPOLMLMKEDHGQAMCGBAGCTQGJBIJQUPYKUBHWBCTLOQISXGCQZNWNDTISUUXYMGYPXLJZWHBCEULJYNHJOOPPIVNZFULQJBKZAVFNQICPGDBHQRSMEJWOSUVEEXEBAJXYRPAZOFQSDFTHAMEMDBHXKMSEWODPCVFVMAIPUYLCUDR");

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
    msg.setTimeStamp(0.688834630249);
    msg.setSource(45752U);
    msg.setSourceEntity(127U);
    msg.setDestination(41793U);
    msg.setDestinationEntity(79U);
    msg.mcount = 210U;
    msg.mnames.assign("MOQEJBCAHOVUYNJXYPSRGBLZMBDLQOZKKZDZXTVUDARYEXVXLCUMHHEMGIJGCOEWWIOSIBFNADXDRKCWJPNPEMZYTHWTOIQLRSHAFJSTKKHZSIVSCTEKYFQGEUIHKQVBBMAZOBRVUSAFNFKJCUPXRDSPWIIZLGFCWRTZBADVGRPJRQVNWXHAPEJAYVSC");
    msg.ecount = 208U;
    msg.enames.assign("BRZTNAJHMEPEDONLLXQFKRNRRISHDTIAKDXXNFTUWEWGLZCIBZMENZXEQYVOFRJRPIXBDFSCZUEWBWOBJNAMIAPPBGCGUTCAQRUXFOJEKMWVBDARATWUMPJGY");
    msg.ccount = 84U;
    msg.cnames.assign("ULIEEFMONJVRTQKXUDIRMQWVNYNZRKZKTPOTGYSHXDHUPKBQMLDAVSYHTEQIUNCLBXJKAEZWGWBODGVNPTXJGRKTUCZFTJADZWOIADIEPZLJVPDOMQQHQHNKTOHLYNYNGJHMDLCFLESQRBMJXISQPSTYSROFKJGUZVGESMRFRCEWYVAQIKLGINPYWNUYVBEXFAXVRKFTBVXSWBCXYB");
    msg.last_error.assign("APRMJJOCYSMVEPBJUGMYKRDUVOFBTNKAUSJRQMEZZDXOXYJWRBKCQDIGSEADHMCQFEDZQZKLQRADGCSHSBWEIWLEFVZRTPTFQYDFHDMQTNTKBGIDXHTNELOQZTNBNCUVUIARXBMITGLTZKYWPXBYQOTRNPJJPYVWALCJHWVVPXVAGKEOKFMHU");
    msg.last_error_time = 0.968162586726;

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
    msg.setTimeStamp(0.744046642015);
    msg.setSource(13974U);
    msg.setSourceEntity(131U);
    msg.setDestination(23009U);
    msg.setDestinationEntity(162U);
    msg.mcount = 68U;
    msg.mnames.assign("ARHXTVKWOLMLZIRMVHSDFFHDKSNGWHVEMKONCVVTSTQGTIPKLLXMSXNRFVODMMBSQIOYRYBJVQPNCITSUPHRJQUUZGUOPJDKFLCEOETFAIEWHAIYJRJCZXYPEJXTDAICMGWBZCIQANBXEEFGWGUVDPRPRPESQXRWFXIP");
    msg.ecount = 12U;
    msg.enames.assign("VVNJBHFNABOEGCZGVDWXDCSKHKTGPVUSGLLSFAMPYQPOXVXVWVTBGOCWNFAWSRYRWKDZQHUIJLASZLGDJEHD");
    msg.ccount = 157U;
    msg.cnames.assign("MURCQQYHYIZRMKFWPAWARBMMXBLWIYOBFIUZIMAGOYHHKDJMNVZQFCKDRVEXQMFOAJNQDIUDJFNTVYSEQGKHGRCWVMQEAITIUSHSATUFDIIPBOLOBKPWZZWNWLJQTVUCREHCFCRXKWNKZCPXHHDSZBPFJLSCOVUYCXTYHMBGXKAYEACTNAYGGQLXNNKZPROAMQPETGESLVGSBDVTDLRUSTWBFNHUOGLXNPXWFLZPBTSPRVUSDZXJLK");
    msg.last_error.assign("XUVBZNCJHQLGKZMTDOFVLPPINOHBZXZIQZBGVQFJCWXVMIVGZWITMWTMHPDYLOLJTMXFVVUOSKDCLAZVOLAIEJQJIEANGLRJCHHDBIUFTWSDGSPDHTQZVREUMZTSKRFAUOJXPDUKJFCHWUEWZNWUYBQMKSXRWTPLEASPPEMTROFYHRYEOQ");
    msg.last_error_time = 0.550895609543;

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
    msg.setTimeStamp(0.712634606891);
    msg.setSource(44155U);
    msg.setSourceEntity(189U);
    msg.setDestination(23063U);
    msg.setDestinationEntity(254U);
    msg.mcount = 244U;
    msg.mnames.assign("SBZTHKNDVWJTOKRXHBZZCDAWDUWJQOIJZPKGJTKWCZAVOFCFFTUQENEKFRJUMUOZKSDSDCLPSLQAOWWRPKVFCREHUZETWEZYEPTGJUPGMARIMIJUEYLNSCDMPGLLXFVHLYXA");
    msg.ecount = 208U;
    msg.enames.assign("ZSABANPJQIATJXHKSCJKRYZZIFSUMYHMFKNPPRAHRETBXLEFPAWULIEVPNCPICJXYURVHYBKSCNVMKWBYEAZTGUBDUDXUOXJQXZJYBNRUWGVKZATBQAMGXQIMOTRWVFPHDQWLNMEQEUTJWJVCZOBOLJPYBTQ");
    msg.ccount = 160U;
    msg.cnames.assign("NRFDABGFQKOFVYXCDGKSFJJPGAMPLPEOAXFLCGGWKKHEYDJNZYRBDNZHRGVLCHTSRDQXWQXLGMQNULTDJZBDEERAVBIIXMALOIACOCASKRIWITOMRVSCGSOHORRBZPZHNZENVTVBMZWXHKUJQJMIXKFQPTTEJPRUEWSPBNXUMCYHOVEXMHEUKWKLMVYNYYIBUUSXTFWFCLYBDHWCW");
    msg.last_error.assign("PJGMQCDZLZHXEQHTTEZCZTYNDZAYBKUDHFNBQEDPORKEDJFLHFCIEIPRLUIVAIHLZWOQMNVTZBWCCJIXMUTOGNODIFXCIKMKQUHPFVFLYVUVLJONDCCPDUUFHQXXSSSHVXUSWKXSWIAMSOKGVNLEYYRLIPTYYGSJXNATXRCJBWOJZTABUUPKVJGMKNEPRYQQGBDAWMGCADVQXKGAFOEYWPHTBVHSMRB");
    msg.last_error_time = 0.0722220591517;

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
    msg.setTimeStamp(0.902853652751);
    msg.setSource(45791U);
    msg.setSourceEntity(48U);
    msg.setDestination(55235U);
    msg.setDestinationEntity(119U);
    msg.mask = 51U;
    msg.max_depth = 0.509095260112;
    msg.min_altitude = 0.831869322739;
    msg.max_altitude = 0.535408483866;
    msg.min_speed = 0.634897813361;
    msg.max_speed = 0.654169351335;
    msg.max_vrate = 0.857224668001;
    msg.lat = 0.259531631768;
    msg.lon = 0.143225362944;
    msg.orientation = 0.480525472479;
    msg.width = 0.78614436976;
    msg.length = 0.51586604628;

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
    msg.setTimeStamp(0.751093916618);
    msg.setSource(17242U);
    msg.setSourceEntity(135U);
    msg.setDestination(3360U);
    msg.setDestinationEntity(135U);
    msg.mask = 96U;
    msg.max_depth = 0.304417264439;
    msg.min_altitude = 0.0196139974279;
    msg.max_altitude = 0.0143487685337;
    msg.min_speed = 0.432009117548;
    msg.max_speed = 0.103629859582;
    msg.max_vrate = 0.623948825863;
    msg.lat = 0.994814386126;
    msg.lon = 0.894893032994;
    msg.orientation = 0.0690901333098;
    msg.width = 0.555893811977;
    msg.length = 0.683149748623;

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
    msg.setTimeStamp(0.368155751823);
    msg.setSource(47229U);
    msg.setSourceEntity(86U);
    msg.setDestination(1131U);
    msg.setDestinationEntity(12U);
    msg.mask = 66U;
    msg.max_depth = 0.0168540954421;
    msg.min_altitude = 0.425845609273;
    msg.max_altitude = 0.852321304938;
    msg.min_speed = 0.357989275695;
    msg.max_speed = 0.173208601988;
    msg.max_vrate = 0.211194728406;
    msg.lat = 0.388551302576;
    msg.lon = 0.836310031865;
    msg.orientation = 0.0643964636431;
    msg.width = 0.0989652179337;
    msg.length = 0.182764985236;

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
    msg.setTimeStamp(0.898674788035);
    msg.setSource(31599U);
    msg.setSourceEntity(115U);
    msg.setDestination(19904U);
    msg.setDestinationEntity(139U);

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
    msg.setTimeStamp(0.795613238161);
    msg.setSource(56459U);
    msg.setSourceEntity(50U);
    msg.setDestination(21565U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.167902120421);
    msg.setSource(64478U);
    msg.setSourceEntity(53U);
    msg.setDestination(44488U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.445158606875);
    msg.setSource(23356U);
    msg.setSourceEntity(206U);
    msg.setDestination(34370U);
    msg.setDestinationEntity(205U);
    msg.duration = 2982U;

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
    msg.setTimeStamp(0.876547545716);
    msg.setSource(10805U);
    msg.setSourceEntity(149U);
    msg.setDestination(18402U);
    msg.setDestinationEntity(249U);
    msg.duration = 23458U;

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
    msg.setTimeStamp(0.120295708823);
    msg.setSource(59695U);
    msg.setSourceEntity(75U);
    msg.setDestination(54378U);
    msg.setDestinationEntity(8U);
    msg.duration = 35173U;

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
    msg.setTimeStamp(0.489004188394);
    msg.setSource(21409U);
    msg.setSourceEntity(75U);
    msg.setDestination(42474U);
    msg.setDestinationEntity(141U);
    msg.enable = 180U;
    msg.mask = 3280969614U;
    msg.scope_ref = 1312690071U;

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
    msg.setTimeStamp(0.00871824088132);
    msg.setSource(32979U);
    msg.setSourceEntity(63U);
    msg.setDestination(45866U);
    msg.setDestinationEntity(43U);
    msg.enable = 242U;
    msg.mask = 1334319749U;
    msg.scope_ref = 3527089901U;

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
    msg.setTimeStamp(0.0604006130781);
    msg.setSource(28990U);
    msg.setSourceEntity(178U);
    msg.setDestination(28240U);
    msg.setDestinationEntity(68U);
    msg.enable = 218U;
    msg.mask = 46763431U;
    msg.scope_ref = 880531761U;

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
    msg.setTimeStamp(0.846682614117);
    msg.setSource(44441U);
    msg.setSourceEntity(64U);
    msg.setDestination(59467U);
    msg.setDestinationEntity(250U);
    msg.medium = 10U;

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
    msg.setTimeStamp(0.182147155022);
    msg.setSource(56802U);
    msg.setSourceEntity(95U);
    msg.setDestination(57333U);
    msg.setDestinationEntity(196U);
    msg.medium = 8U;

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
    msg.setTimeStamp(0.698121944688);
    msg.setSource(45753U);
    msg.setSourceEntity(171U);
    msg.setDestination(29709U);
    msg.setDestinationEntity(58U);
    msg.medium = 115U;

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
    msg.setTimeStamp(0.428671916749);
    msg.setSource(43813U);
    msg.setSourceEntity(113U);
    msg.setDestination(14216U);
    msg.setDestinationEntity(170U);
    msg.value = 0.496467612791;
    msg.type = 55U;

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
    msg.setTimeStamp(0.171421600538);
    msg.setSource(60929U);
    msg.setSourceEntity(16U);
    msg.setDestination(61422U);
    msg.setDestinationEntity(38U);
    msg.value = 0.724513232437;
    msg.type = 71U;

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
    msg.setTimeStamp(0.68344254128);
    msg.setSource(5723U);
    msg.setSourceEntity(144U);
    msg.setDestination(35422U);
    msg.setDestinationEntity(67U);
    msg.value = 0.9258727326;
    msg.type = 239U;

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
    msg.setTimeStamp(0.12311252133);
    msg.setSource(18245U);
    msg.setSourceEntity(110U);
    msg.setDestination(22124U);
    msg.setDestinationEntity(60U);
    msg.possimerr = 0.0328276293838;
    msg.converg = 0.438650985606;
    msg.turbulence = 0.249853687678;
    msg.possimmon = 8U;
    msg.commmon = 28U;
    msg.convergmon = 106U;

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
    msg.setTimeStamp(0.589085174224);
    msg.setSource(36885U);
    msg.setSourceEntity(112U);
    msg.setDestination(2552U);
    msg.setDestinationEntity(151U);
    msg.possimerr = 0.501513929016;
    msg.converg = 0.24531176928;
    msg.turbulence = 0.813659157731;
    msg.possimmon = 129U;
    msg.commmon = 248U;
    msg.convergmon = 156U;

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
    msg.setTimeStamp(0.547196762432);
    msg.setSource(24009U);
    msg.setSourceEntity(163U);
    msg.setDestination(51303U);
    msg.setDestinationEntity(139U);
    msg.possimerr = 0.353506603033;
    msg.converg = 0.646203221498;
    msg.turbulence = 0.827877450975;
    msg.possimmon = 142U;
    msg.commmon = 1U;
    msg.convergmon = 46U;

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
    msg.setTimeStamp(0.598113792957);
    msg.setSource(21995U);
    msg.setSourceEntity(84U);
    msg.setDestination(64177U);
    msg.setDestinationEntity(86U);
    msg.autonomy = 27U;
    msg.mode.assign("FKQYBYJKCHPKGVBXOMRWLJSXGOCTPQRIQMPHGCRZTGUJWKEHEBZZNRONQVOUZDDSREDGZJLNSFCWQKBAQXXUNHGVHAFGXAWQIPCKFMVQULDSYIHFIJHPJOVRMNCNBPASSACCXANLZTVBWNBQAIMGTLEVHOFMFUEHZEIVUFZNDYSZSYAJCGL");

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
    msg.setTimeStamp(0.724216994635);
    msg.setSource(39376U);
    msg.setSourceEntity(98U);
    msg.setDestination(5351U);
    msg.setDestinationEntity(130U);
    msg.autonomy = 43U;
    msg.mode.assign("GUSSZYKOUBKXRCBZFMVSBXEJUBZRFFQTXHENVJCKYZMTKWNKELAYQGZDRVZSJGLGOVODFCZDVICKQEQPFIOUYGAWDHJDWRIPXFJNCQRPJYEMJUPOVOGSZOITJZRWXTLLKMBREWDMPVRCKLWAXESNBHETAPAILJYRQHVMMHTFIUIACKYNEMLGOB");

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
    msg.setTimeStamp(0.280265765214);
    msg.setSource(53609U);
    msg.setSourceEntity(103U);
    msg.setDestination(53040U);
    msg.setDestinationEntity(129U);
    msg.autonomy = 235U;
    msg.mode.assign("WQWCVGTDTAKZDPEPTGSMNQPSNXPIYKRAZBWIQRVPXADIGMIDGLVRHHJWTFHJKCDMQHDEHZEJUOFLELOOBYRQXIIVMRBIORYMVFPGYOHWXQLQACMMZNIVPGAYQNNENRAOYJUTKKTCIWSCLZLQRBUAHTXMNSKKPCUXHEPXJBQUHDNTKFVFWECDKZBHVYOCFJEYOSBSA");

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
    msg.setTimeStamp(0.957771158041);
    msg.setSource(24358U);
    msg.setSourceEntity(57U);
    msg.setDestination(22281U);
    msg.setDestinationEntity(88U);
    msg.type = 230U;
    msg.op = 33U;
    msg.possimerr = 0.165163540932;
    msg.converg = 0.29741532934;
    msg.turbulence = 0.644140299525;
    msg.possimmon = 52U;
    msg.commmon = 5U;
    msg.convergmon = 184U;

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
    msg.setTimeStamp(0.288277401386);
    msg.setSource(36208U);
    msg.setSourceEntity(160U);
    msg.setDestination(6317U);
    msg.setDestinationEntity(130U);
    msg.type = 80U;
    msg.op = 91U;
    msg.possimerr = 0.194579253561;
    msg.converg = 0.75918176898;
    msg.turbulence = 0.756315400791;
    msg.possimmon = 234U;
    msg.commmon = 44U;
    msg.convergmon = 57U;

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
    msg.setTimeStamp(0.147187332755);
    msg.setSource(30335U);
    msg.setSourceEntity(97U);
    msg.setDestination(668U);
    msg.setDestinationEntity(226U);
    msg.type = 43U;
    msg.op = 2U;
    msg.possimerr = 0.65745171347;
    msg.converg = 0.0487272201533;
    msg.turbulence = 0.160233984646;
    msg.possimmon = 215U;
    msg.commmon = 191U;
    msg.convergmon = 195U;

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
    msg.setTimeStamp(0.684587457179);
    msg.setSource(10593U);
    msg.setSourceEntity(94U);
    msg.setDestination(62441U);
    msg.setDestinationEntity(132U);
    msg.op = 65U;
    msg.comm_interface = 231U;
    msg.period = 11400U;
    msg.sys_dst.assign("GXXHYHJJABOHRZUAEZUTQLOPXQNTVUQZJMAHTNZZNDKSXYQBMRMHFCDTRFPNILNJGRXQGYLIWMOAEWAEOCWOKLKLMWRVYMSOKDTMTABWZWUDMKXVDICRXVLIEHQGEBDPNOWZPHFQAZGVPNCFDVDJOAPFLCBIPQAUGEHFEUSHGWCSVRKTVFBNXYVLIIGSRAYKSTYYGHXBNK");

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
    msg.setTimeStamp(0.728310719514);
    msg.setSource(33783U);
    msg.setSourceEntity(71U);
    msg.setDestination(10356U);
    msg.setDestinationEntity(19U);
    msg.op = 155U;
    msg.comm_interface = 201U;
    msg.period = 4182U;
    msg.sys_dst.assign("TBGEHTSTUQYWEAKDVEKKFCCWTPSASBYGAIOXMQBWIUUDJ");

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
    msg.setTimeStamp(0.206095089402);
    msg.setSource(46490U);
    msg.setSourceEntity(18U);
    msg.setDestination(55209U);
    msg.setDestinationEntity(154U);
    msg.op = 156U;
    msg.comm_interface = 107U;
    msg.period = 56706U;
    msg.sys_dst.assign("UKJSILLTMMEKJNUPGOVHHCSQOAGJJSTPQLPFAODUGCBMTLHTEALOEQWXVHTVERHXXGTYUZHDGXURFAJKWMKBAUOQFXSLXRTKMIWSVOTKVWQXFFAVDIUFBQWCPOKYBYKNWWMJDMHLMFPYZBRZWVSGZIERFEPVANQSGRXPZNCBKUHFEGIPCWIHQYYLZZTJNDXXORICERUSYBNCDAQAPVYCHNBCGPZEZKMLOCBRLJJDSBNYMZGODIQIDJDFNRAWY");

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
    msg.setTimeStamp(0.0594535916398);
    msg.setSource(61910U);
    msg.setSourceEntity(77U);
    msg.setDestination(417U);
    msg.setDestinationEntity(9U);
    msg.stime = 946964530U;
    msg.latitude = 0.609399074463;
    msg.longitude = 0.982259128307;
    msg.altitude = 52742U;
    msg.depth = 62047U;
    msg.heading = 29224U;
    msg.speed = -21451;
    msg.fuel = -94;
    msg.exec_state = 112;
    msg.plan_checksum = 19924U;

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
    msg.setTimeStamp(0.110501110141);
    msg.setSource(16922U);
    msg.setSourceEntity(66U);
    msg.setDestination(7541U);
    msg.setDestinationEntity(52U);
    msg.stime = 2229115335U;
    msg.latitude = 0.293040266545;
    msg.longitude = 0.52513965867;
    msg.altitude = 52992U;
    msg.depth = 32692U;
    msg.heading = 51170U;
    msg.speed = 12354;
    msg.fuel = -100;
    msg.exec_state = 116;
    msg.plan_checksum = 33185U;

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
    msg.setTimeStamp(0.647624774861);
    msg.setSource(60861U);
    msg.setSourceEntity(2U);
    msg.setDestination(58627U);
    msg.setDestinationEntity(61U);
    msg.stime = 3195505053U;
    msg.latitude = 0.470753503494;
    msg.longitude = 0.937825520641;
    msg.altitude = 39562U;
    msg.depth = 50716U;
    msg.heading = 50959U;
    msg.speed = 22038;
    msg.fuel = 46;
    msg.exec_state = -77;
    msg.plan_checksum = 57774U;

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
    msg.setTimeStamp(0.0701469671891);
    msg.setSource(15875U);
    msg.setSourceEntity(79U);
    msg.setDestination(1279U);
    msg.setDestinationEntity(210U);
    msg.req_id = 16534U;
    msg.comm_mean = 212U;
    msg.destination.assign("JJJTFYOFKYDFOPKNCFMBXZGZSCAIQTVPDFAUMVNURGFNQFDVLXRAUVOSWAOWDVIXGGKL");
    msg.deadline = 0.235671111541;
    msg.range = 0.310945748106;
    msg.data_mode = 74U;
    IMC::FormationEvaluation tmp_msg_0;
    tmp_msg_0.type = 18U;
    tmp_msg_0.op = 67U;
    tmp_msg_0.err_mean = 0.391670477963;
    tmp_msg_0.dist_min_abs = 0.445677950186;
    tmp_msg_0.dist_min_mean = 0.731456236824;
    tmp_msg_0.roll_rate_mean = 0.126309755964;
    tmp_msg_0.time = 0.596536117819;
    IMC::FormationControlParams tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 115U;
    tmp_tmp_msg_0_0.lon_gain = 0.437841612367;
    tmp_tmp_msg_0_0.lat_gain = 0.755098700961;
    tmp_tmp_msg_0_0.bond_thick = 0.264354233878;
    tmp_tmp_msg_0_0.lead_gain = 0.29513204754;
    tmp_tmp_msg_0_0.deconfl_gain = 0.257018499155;
    tmp_tmp_msg_0_0.accel_switch_gain = 0.0165714366771;
    tmp_tmp_msg_0_0.safe_dist = 0.67004558099;
    tmp_tmp_msg_0_0.deconflict_offset = 0.948520855965;
    tmp_tmp_msg_0_0.accel_safe_margin = 0.567036369785;
    tmp_tmp_msg_0_0.accel_lim_x = 0.299674478619;
    tmp_msg_0.controlparams.set(tmp_tmp_msg_0_0);
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("HDMVLAARRYBGYNRTLAIOCEMIEPDLOXGPWGAZAFUXVCCYZEKFQFPUPIIHSMBSFTCJJIXKZWBOSRTFQXUMKUPDSOQBSXKVSJEGALUJEYHHRGCDFLNVDEMUJHOQWNVSQAUNBKVRECKGAFGPNQAXLQYZWODMMVLFYKRRZWVESZTJULGIM");
    const char tmp_msg_1[] = {-121, 101, 11, 108, -88, 84, 49, 53, 65, 22, -108, -64, -56, 50, -34, 113, 33, 35, -17, 57, 32, -119, 19, -112, 62, -50, -108, 63, -13, 65, -86, 6, -56, 118, 107, -81, -4, -103, 124, 3, -27, -26, -35, -55, -75, 3, 71, -111, 58, 114, 82, 15, -26, 87, 92, 95, 86, -41, -61, 53, -86, 106, -11, -117, 82, -89, -66, -109, -74, 113, 19, 95, 98, -40, -26, -97, 3, -20, 13, -88, 125, 68, 21, -48, 86, 75, 48, 95, 83, -101, -80, -107, -23, -86, 49, 67, 102, 5, -19, 123, -91, -97, -54, 55, -69, -47, 122, -2, 71, 34, -19, -63, 91, -46, -58, 45, -43, -75, 83, -106, 31, 123, 53, 92, -7, -26, -120, 20, -70, -71, 14, 47, 68, 110, 90, -39, -128, -62, 98, 109, -111, 41, 36, 4, 115, -25, -79, 115, -128, 73, -75, 68, -109, -122, 99, 97, -24};
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
    msg.setTimeStamp(0.832472293932);
    msg.setSource(363U);
    msg.setSourceEntity(223U);
    msg.setDestination(49063U);
    msg.setDestinationEntity(62U);
    msg.req_id = 7629U;
    msg.comm_mean = 219U;
    msg.destination.assign("RSHUDDYWLYWAHDROGJNBTPEJGNRDZBKWTOKTQFRFSYREAEMKPOXFDTXSQVRCCIVLZJAZLEJQMLZLHFYTAWGBDKMINFNWGSKQIMXPAWTRPUEODVHNCODKEGCIITAYLIKTXBQHYNWQQAPCYFUIMWEYCSVUKMIUUFTCJEJJRIBXL");
    msg.deadline = 0.139462744827;
    msg.range = 0.753455891429;
    msg.data_mode = 218U;
    IMC::SmsState tmp_msg_0;
    tmp_msg_0.seq = 1673285032U;
    tmp_msg_0.state = 151U;
    tmp_msg_0.error.assign("KMQJTIFRMGIWLGYHLYCHXIVDRDRQXCTINGCSANCNUGESCHEZHEVHLFIOPYXZSVRDJNDOVVAWKNAPAROOMXNTRXZUFBUMWYFACVOWJTZAHDXTCOEGFUDLOKYF");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("IKZWLJLMFUIQOSHWYRMUVWXAWUXQQDMOCGHEJONPNDACUZQYSDLTGKREOYOIAONXYJAGEAXFXFCBIJBCYRKLROSWXZCDKFZUBLOEGXZPWRAWNEVVYUQCQJPUMEAEBHXNCVYNGGMJRIHNSAAKNUVPT");
    const char tmp_msg_1[] = {71, 60, 4, 105, 44, 105, -116, 43, 119, 9, 33, -13, 109, 41, -96, -11, -47, 112, -74, -121, -33, -104, -99, -127, 34, -77, 86, -91, -14, -35, -4, -29, 39, 72, -90, -37, 58, -26, -54, -115, 101, -125, 51, -120, -25, 92, -38, -55, -32, 5, -36, 71, -18, -125, -30, -60, 48, -112, -13, 76, 48, -112, 109, 67, 105, 64, -120, -39, 10, 28, -13, -42};
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
    msg.setTimeStamp(0.702320066947);
    msg.setSource(35776U);
    msg.setSourceEntity(161U);
    msg.setDestination(60179U);
    msg.setDestinationEntity(33U);
    msg.req_id = 50438U;
    msg.comm_mean = 165U;
    msg.destination.assign("CGLMBWAVYQSTUSKFHIOCYUTGFKGURWYPNPFRVSZQPYWXLHSRKEYWZCTAJXZLZWVYARNTACUQBFXNZEBNFTURGFWGZPELDOGGBDTAPWTVODYQZPHJIMMAXKSZCEDHCXIUUJIKOWCSNQRXQIGXINQBD");
    msg.deadline = 0.978817062221;
    msg.range = 0.606927230526;
    msg.data_mode = 57U;
    IMC::SaveEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("INDEAGQUHWUYWLJLVZJMTVMHFCYPKZDESYAMRJYSAKQLCCKLFLPYSJKTMPMOHXMUVDUEORDNKTSPBZLXCEJVCWXKZMOHHTBGQGYHGIAABCN");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("JIKAVNJSFUDFSWJTNFFCRKQTWX");
    const char tmp_msg_1[] = {101, -114, 87, 42, -44, -82, 42, -83, -106, -7, -25, 74, 35, -101, -126, 93, 83, 65, -71, 102, -54, -113, 72, 97, -106, -87, 7, 68, 14, 113, 46, 51, 107, -127, -114, 59, -52, -115, 7, 61, -71, 44, 99, 72, 65, 124, -53, -64, -64, 44, -31, 70, -84, 106, -119, -44, 59, -9, -19, -119, 76, 26};
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
    msg.setTimeStamp(0.861387749959);
    msg.setSource(25309U);
    msg.setSourceEntity(185U);
    msg.setDestination(21788U);
    msg.setDestinationEntity(245U);
    msg.req_id = 47211U;
    msg.status = 220U;
    msg.range = 0.550831579209;
    msg.info.assign("XLCHZZIZGKJKBIYKADADASEWDXNNTSQULQYLXKUPESBQARPWJQNFWCKHNFROCOCSLERQUQWVUXWVTTCFRTAKYMHQICBJFYDOFTEUEAXJZFUOMMRKWGBXCGHFTMLYFNPHBTOKPMVQREFGAD");

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
    msg.setTimeStamp(0.390491170663);
    msg.setSource(52996U);
    msg.setSourceEntity(212U);
    msg.setDestination(25287U);
    msg.setDestinationEntity(87U);
    msg.req_id = 28564U;
    msg.status = 53U;
    msg.range = 0.416883485974;
    msg.info.assign("SFVECOPYROVIRQSIVJTKCZDEHYPAPYEENWQDUGMXPCCFDKONHGJRGIIHIWCJQKNYSPRHZAMZKZDFBJLXMIPTHYOWTSLNGOSKRGYUXTDBVSBLXUFQEUTEUAKIFGXQQYNLHAFSQEREXFAFPWJOZQUMLMUBWUTNDTLTWJNIFAVBKODBKNEAYYMQBKLODJLUYSFALBWMRPSZGZUEZ");

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
    msg.setTimeStamp(0.496591413926);
    msg.setSource(26942U);
    msg.setSourceEntity(78U);
    msg.setDestination(43484U);
    msg.setDestinationEntity(28U);
    msg.req_id = 9320U;
    msg.status = 162U;
    msg.range = 0.826681775165;
    msg.info.assign("JDTDIVJDWOCRHCOAURUVAWDOTVLJHLSHCNONERIGKVPEGBJKYGSREWDNDVYZKPOUXXVMLEPJBQLSGZCEYSAGIRTFHQ");

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
    msg.setTimeStamp(0.682779341488);
    msg.setSource(1477U);
    msg.setSourceEntity(147U);
    msg.setDestination(4964U);
    msg.setDestinationEntity(144U);
    msg.req_id = 12617U;
    msg.destination.assign("CKDEOSOTROCXGAOMR");
    msg.timeout = 0.331273916507;
    msg.sms_text.assign("HUNZPITGRHDFIRHMLRPMYIJGGHDRYQQXZRUUDHWRYEVRDJMIPFWVAWMOROQILCGIZMLOTPEFXKTDSGYGSFTRVNJNBDYEEMSPFVOFKHZFQKOXZMCUAJWIKOEHLVNSGDPGWOKGOEIBRAQKCACFFJZKZAFHAZNUEQQBBB");

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
    msg.setTimeStamp(0.439401997531);
    msg.setSource(30712U);
    msg.setSourceEntity(64U);
    msg.setDestination(29000U);
    msg.setDestinationEntity(99U);
    msg.req_id = 56812U;
    msg.destination.assign("IDLKKTWXORMGLAWLMRXJQWOWATWZMXTTEXQJOWEEXBCPNSYETNGAREYDBMQHKIALPNBCZFJOQCZFSLLSRFRQNRUPNCKKNOFXDANVXVZBCTESHDJVSPNWJGWAYBRMVUROCCXATUHDKSTZIVGYUVKWZIKULZFIOSOVUIHQYNVHHBEYFLDQESERVQGRGUZYDGYKAMHOZGWMZHPYLUAFQAFPD");
    msg.timeout = 0.168710417018;
    msg.sms_text.assign("OMYZMOOFZGFWIJQCCWJLELTPKRKDYHFLLAWXDYWYDTAIDHUHNPAHGGTRPUCONHMJHXVEOSCMVVJBINNRPIYMVWSXVRDQYTZBGQICBSMGTJNZAWSEKNHHNQSOWZPHVGCDIWPSETKKVTPGRYISUQLCPCUFMLHNIXJGBXXQATZXWTBDFJLFKS");

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
    msg.setTimeStamp(0.00888447760603);
    msg.setSource(60374U);
    msg.setSourceEntity(82U);
    msg.setDestination(38707U);
    msg.setDestinationEntity(40U);
    msg.req_id = 14442U;
    msg.destination.assign("DDPJWLQGVSRAEDCDDEJYZMMGFNEUVMXUXPPDRDVKEAABSLZMAFELVNONSNRYKUFXAZLFYXHYSKYWTRGIQOWXIWHFOMMISOGLZCWSOPXRBXPWNORGYSHTPSIWTCGIKKEMEWZLJVA");
    msg.timeout = 0.320151020933;
    msg.sms_text.assign("ASYKIKIEELPNHETTOIUNRUJYSOKVHZNUCECJXCGQHCHPVYHJWIMKBRWEQSFOTQAWURUJKCLRBPVGDMZPCRPMCTJQPSFXBDHISYNTHARUXLLDWXXHJZUFDJEHWNDPZKDWSWOYBYFNAROURKXEACUVDXZIQFAFGMIAMTVKVIVMLWQMPCVZQKSQYOGZNTGBWOQWDYTNLSYEZLGQIZTDM");

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
    msg.setTimeStamp(0.0142714696243);
    msg.setSource(21900U);
    msg.setSourceEntity(111U);
    msg.setDestination(14994U);
    msg.setDestinationEntity(36U);
    msg.req_id = 27072U;
    msg.status = 195U;
    msg.info.assign("XTPOXKCZOMUDNJWSKRJIFDWYNOVVYNBTIUADGQSZTUGBKLZIAMAEETTTGVBDLJOCDELRHRVKHKVGLFBACXTPKEQGOCPYIICBZOZRVHKXRURUJAXWBFNAPJJFYAXTCFUILWLBMDSSPGMXVRNWNWQMNOECQUFHDQXYGITXEKQIVTKCGMYQIEISWJZDYESN");

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
    msg.setTimeStamp(0.423203083279);
    msg.setSource(65233U);
    msg.setSourceEntity(233U);
    msg.setDestination(18292U);
    msg.setDestinationEntity(250U);
    msg.req_id = 30989U;
    msg.status = 132U;
    msg.info.assign("UICRPMPARBGUDTJZCAFKYZSHJOSIEIQEUSRFPKIHGNQTYIMHMAXQLTLIJFHVGSHXTSOBMNPHHKJXTTKULPZUGGMNMRPGFBGOOABIDVDFSCDHKVPDWPYERIYCBVRDYVKJLOCEABBQUVMAQGXWNNTQANKINBZAXVZXISJKEAFJFBZYFWWTWDEUWLRXYCSPJMOZODFY");

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
    msg.setTimeStamp(0.397019200364);
    msg.setSource(22188U);
    msg.setSourceEntity(74U);
    msg.setDestination(9798U);
    msg.setDestinationEntity(248U);
    msg.req_id = 9183U;
    msg.status = 34U;
    msg.info.assign("ABQXFUROQJZGWVLYMNCIXZLWQKVLJPUDPVKQLOIJCIYXQCEPCTZJVKJF");

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
    msg.setTimeStamp(0.99032205904);
    msg.setSource(55328U);
    msg.setSourceEntity(21U);
    msg.setDestination(29717U);
    msg.setDestinationEntity(34U);
    msg.state = 244U;

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
    msg.setTimeStamp(0.566727936834);
    msg.setSource(40964U);
    msg.setSourceEntity(113U);
    msg.setDestination(16302U);
    msg.setDestinationEntity(184U);
    msg.state = 25U;

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
    msg.setTimeStamp(0.462822055831);
    msg.setSource(56969U);
    msg.setSourceEntity(131U);
    msg.setDestination(50887U);
    msg.setDestinationEntity(62U);
    msg.state = 129U;

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
    msg.setTimeStamp(0.165066939791);
    msg.setSource(1202U);
    msg.setSourceEntity(46U);
    msg.setDestination(5698U);
    msg.setDestinationEntity(212U);
    msg.state = 31U;

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
    msg.setTimeStamp(0.220083528965);
    msg.setSource(36661U);
    msg.setSourceEntity(50U);
    msg.setDestination(44588U);
    msg.setDestinationEntity(119U);
    msg.state = 115U;

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
    msg.setTimeStamp(0.609780606258);
    msg.setSource(5018U);
    msg.setSourceEntity(231U);
    msg.setDestination(46711U);
    msg.setDestinationEntity(139U);
    msg.state = 125U;

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
    msg.setTimeStamp(0.860946033138);
    msg.setSource(8252U);
    msg.setSourceEntity(198U);
    msg.setDestination(56808U);
    msg.setDestinationEntity(77U);
    msg.req_id = 61080U;
    msg.destination.assign("JNWDJVWVNQREPGELZSHYLXHPVYUCQESQTSJWZCMNYWGQFMWRFGIOPFZOEQODDADVEWFAZIAUXUUYUPKAHOJBPCJLEHYGLDMKRKSATSZNEWGMQORTNMKIFBPWAPQCSNRIACZZAJSIAUOXOGBYLKECTIHUCZHVQKLQPNBBXVMQIRMHLBXGYPTIXUTPYCRXTZKFFWHVDBRNCTUSNVCULBVMMDJEOHXVJOISNJKTMLADKYXZFOXIFYLWRHKFGJ");
    msg.timeout = 0.238393377209;
    IMC::IoEvent tmp_msg_0;
    tmp_msg_0.type = 99U;
    tmp_msg_0.error.assign("SWWAQGPJIDEWTXMFXZMSHMLXPZOWIUUTWSYSVICHJTAHCVVZQCHLVWCTDUQGJGXIBSZRURKUBZJQYNONGIOYZQITTGDFRENKUJQJKEHYAKFOXMWPOBFNHGWCAFUSDLVFBCYYVUCNLANDKKLKRLRLATOOFGEKPJPBONZHZDUHAXBTIRRXCTSVDGSPZEIBVRRMJTQKEOCDHYDNEJQEFECIKLJFAAONFWXMNMXMQPRAUPSGWIQYHPBLXPMGEYYVB");
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
    msg.setTimeStamp(0.463605594909);
    msg.setSource(46432U);
    msg.setSourceEntity(145U);
    msg.setDestination(11132U);
    msg.setDestinationEntity(208U);
    msg.req_id = 49180U;
    msg.destination.assign("LKKKHZDAIYUYUTPTZMEXYSUNASEVFCLAIGCFPGAPRFXPQJGUVFUKHYNOPWLDSWQSBORJNUERHISQNIGNVTMDRVJJRCCUQWBAOLPGZBIVAXGAZZOJTZUYCWVFEEFKGNCBUFOZZD");
    msg.timeout = 0.152712999121;
    IMC::OperationalLimits tmp_msg_0;
    tmp_msg_0.mask = 3U;
    tmp_msg_0.max_depth = 0.709864060242;
    tmp_msg_0.min_altitude = 0.98011197703;
    tmp_msg_0.max_altitude = 0.913916529315;
    tmp_msg_0.min_speed = 0.281254475203;
    tmp_msg_0.max_speed = 0.683414230106;
    tmp_msg_0.max_vrate = 0.720406770341;
    tmp_msg_0.lat = 0.661740688043;
    tmp_msg_0.lon = 0.627875898837;
    tmp_msg_0.orientation = 0.496801282586;
    tmp_msg_0.width = 0.103775122654;
    tmp_msg_0.length = 0.0208682909495;
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
    msg.setTimeStamp(0.421121921125);
    msg.setSource(30991U);
    msg.setSourceEntity(65U);
    msg.setDestination(28463U);
    msg.setDestinationEntity(226U);
    msg.req_id = 30057U;
    msg.destination.assign("APXHADOWCNYOPWUKJCOCTIQUKAESHGYUBTNIDXBQMLLPNTUXQSYGAKNCEGVMFYZGZKLIZGWBSGPXAVCGRTFICNEMOBTQBRVOJIVMRTQJFQJNOUEJLXMWLYMHYBUEYRYEXTXFNELIPWUQHBWXSIJWUHLBCZMOOBPCQRZMDGDIPKASRWMTDAVKFHHJMOAJDSSVWVFKQKTYURXZQAEFRRHLUO");
    msg.timeout = 0.318659483998;
    IMC::EntityList tmp_msg_0;
    tmp_msg_0.op = 126U;
    tmp_msg_0.list.assign("CLFZNCQPGLNRTKXZDKXJIRUICNKEYOIPLBDIWQMPDGKVWIYJB");
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
    msg.setTimeStamp(0.0372607793038);
    msg.setSource(40355U);
    msg.setSourceEntity(112U);
    msg.setDestination(59321U);
    msg.setDestinationEntity(232U);
    msg.req_id = 30981U;
    msg.status = 136U;
    msg.info.assign("YVRXIZFLFHCMXXTWXSBUFPEJLLLKGQDGOAH");

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
    msg.setTimeStamp(0.516875056607);
    msg.setSource(54099U);
    msg.setSourceEntity(9U);
    msg.setDestination(52340U);
    msg.setDestinationEntity(107U);
    msg.req_id = 44743U;
    msg.status = 113U;
    msg.info.assign("NFYKCSLKHAYDAIJWZPZZFJKTWLCGIIXMHRKQUHNNXLAAPOXHCACLMAGCQDIOZMCEDBGQYMMRSJESGKMYVU");

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
    msg.setTimeStamp(0.482114324505);
    msg.setSource(46524U);
    msg.setSourceEntity(6U);
    msg.setDestination(51711U);
    msg.setDestinationEntity(83U);
    msg.req_id = 27848U;
    msg.status = 98U;
    msg.info.assign("OHOIOZQBLZLMBFBPGUMDIJOLKBWXNTQNBROAMVCISWHRXTCKRPFCJONKSCTJNGENGRZQAIFH");

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
    msg.setTimeStamp(0.508059063872);
    msg.setSource(41201U);
    msg.setSourceEntity(202U);
    msg.setDestination(45981U);
    msg.setDestinationEntity(232U);

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
    msg.setTimeStamp(0.389462702369);
    msg.setSource(65077U);
    msg.setSourceEntity(40U);
    msg.setDestination(54480U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.431200463207);
    msg.setSource(18207U);
    msg.setSourceEntity(47U);
    msg.setDestination(49568U);
    msg.setDestinationEntity(235U);

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
    msg.setTimeStamp(0.00194896624781);
    msg.setSource(19807U);
    msg.setSourceEntity(47U);
    msg.setDestination(14446U);
    msg.setDestinationEntity(22U);
    msg.plan_id.assign("TVIHBVNWBQYAFDBZZDGAPVIIIVHQVBRIEFNAASREFCZQGJYHKVBWOELGCKPQDIYGDBGKNKPHTURJEIUZCFYGWYAUQIXVJFQFMJWEPPLSCYQCHSHFLKUQGPOMHFXEDMYKLPGMETWDGOXBMXWUSOLBVCAITRDDWSKOHBSJARTKSRMULFTON");
    msg.description.assign("YZFWJVTGRMBJGFXZQRQXCYHBVYEXYZZUFIAEMHDKANHBOPGWPWVVKNSUOVIDQOAUOCRNFHUERMHPTWRAGNMTNVFCSADKDYLHXITQYKPDJAUMJSRLLOZMOWJIIPJDECSKGGOCIANKECGRVIMHOKZCPYXYJHTTXBRNSNQXDELVWCDCLSQPEBQPLHU");
    msg.vnamespace.assign("KTYZIUBWLAEXMIHBAQSVNSFZKMSLGZLAUEDCYCVRGISMPPQQQSMEOERBLINMJDVVOTAYDWCAWQHWSRUZGKSFRKULLYUBZDIZYNYOHKJIWXJYHEFWGJNPNEXJXZVXGJCIKMOAFHAB");
    msg.start_man_id.assign("ESJLUCUKTLKJWWCVRQVKDEBQBBDMZSFTYJUYIILNEHZRIGTGKBAITJQPKOWQZCVXMSTRJYXVEBHXRGKOMZHRZYXYGEWCRDSYTDELNUOEWQRLFTDFTPXMZNOPCNLVAIPDUMPSRIFFFUSNGVGQUE");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("NTZDVORMTHUGRZPVAUWOZSMOVNIWCQYHRAOERFPYKZERXAWYBGRRXXVHXIODIQRVKTNOAPDUOJSTNPEHGEHSUTMXPHUADVWFKQFNMGTCHMKGJBJNBFIYJLMLDLSQVIQKYAFJLAYKEFKZUSKZFTBSGIWVLVMQJWLAEPXITXYBYQFUDNACRGQJGIKDSEZRTNQJYLCLVLWBNMDMEOPYETJOCCDOWDSBKHXCPHSWQBAFHWXSBBCGEC");
    IMC::Magnetometer tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 17011U;
    tmp_tmp_msg_0_0.lat = 0.651946227727;
    tmp_tmp_msg_0_0.lon = 0.979815618598;
    tmp_tmp_msg_0_0.z = 0.254145830264;
    tmp_tmp_msg_0_0.z_units = 22U;
    tmp_tmp_msg_0_0.speed = 0.394564191622;
    tmp_tmp_msg_0_0.speed_units = 196U;
    tmp_tmp_msg_0_0.bearing = 0.855778880162;
    tmp_tmp_msg_0_0.width = 0.923600071649;
    tmp_tmp_msg_0_0.direction = 232U;
    tmp_tmp_msg_0_0.custom.assign("AKWYHRQNVODYTLFOKHBDZNRBPNKYSSTPIXRGEERPKATEVUYOBQDSFGMVRAWXCCZZWFKURPTRJOTCHFMKEYBPFLODBDZGUCUFHOVIJQTAPGBNYGFQWQDCXETKZZUJUOEHIYXBUYAGTELGXMHISVSJVJIICQXZNCSNVJZLOQNVEQNAPGCHHLFKNDRWMXQERCPUHRUPJDWJKJBAHISMFBMENASZAYZPSMCOLUGAGVDMT");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::YoYo tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.timeout = 16811U;
    tmp_tmp_msg_0_1.lat = 0.454359004296;
    tmp_tmp_msg_0_1.lon = 0.548995751845;
    tmp_tmp_msg_0_1.z = 0.284720647677;
    tmp_tmp_msg_0_1.z_units = 28U;
    tmp_tmp_msg_0_1.amplitude = 0.129228622853;
    tmp_tmp_msg_0_1.pitch = 0.215925353853;
    tmp_tmp_msg_0_1.speed = 0.764985159302;
    tmp_tmp_msg_0_1.speed_units = 166U;
    tmp_tmp_msg_0_1.custom.assign("IEOPFOCZICRMATIPMMGYTUQAMKWQDWBGIBLUNUIBKLSDXOGZPMCXIPZYJKHCWJHSOBORESHGNXZVBZJYXHFOEDUPDISNWHCEBMTMLSCEIBVLGWKWEFRKAVTQHJCQZSCHSWXLTUQRYGNZRFBAKTGMDMCNTLNQIXYERWJJPZVWZOKJLDTPMVRFXSOLVRNLNTIDHZAQXUYAFLEUBJYQQJAFXYADUKYHUOEHWFPOJV");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("RVEYIVTSLPSLOBQOBTAEQBYGTAXWZSNOTBDGBWJRGEYJFVLKUXCGZDUWSVHHMZFUZPLFTYEZZLXDPMSSVWYQNEXJCJDJSKNKFPJWKLKBHSCIRFTXRKIDEAEPUTNATJQOZBEMRDUPAFOKJIOECDORBMP");
    tmp_msg_1.dest_man.assign("SEOXFAYTWSSPAXMOMTHNWCEIIFPTKPNXCKUWCYTVZPNSBKFLIGHGOHLXWRFCNOCZQEFBDMSRTWEPMRUKAIJPYDIVHOPKJLIFZLBAQAHWDKWVDUNGWVNRFGAVHELBRXMCHBDKQRGJYVJVNQEUYNZHGAWNJVCFZUEZGGSTAPOLJVXSGWRYFQBHONUZTIPOKUUCDXLQMLOM");
    tmp_msg_1.conditions.assign("PVAKUNJSALWHTXUMNZELLREPLCJBTXTIGNEADZIPRSUSMLWZYKIRVIFFZDXXRPHLJTYENQAVLPDCDCQJOQKJKQWMRGMDHGOBXSQTBWDYJYTVYQMIIVPAFHVCXBEEEZRKJGKBWPKKOOZESYNMVNPAIGDSBQAOQXXUHOGKHFCVQWRFPRITTMZGDFGJHYSBJPUGMW");
    IMC::PushEntityParameters tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.name.assign("GJFSCYCTRTSIBSIZRRPLGWXBWGJDXELKLOVBMIYDWVVODF");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::SetPWM tmp_msg_2;
    tmp_msg_2.id = 31U;
    tmp_msg_2.period = 2759904470U;
    tmp_msg_2.duty_cycle = 1847375477U;
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
    msg.setTimeStamp(0.439863382804);
    msg.setSource(7438U);
    msg.setSourceEntity(83U);
    msg.setDestination(35972U);
    msg.setDestinationEntity(210U);
    msg.plan_id.assign("CAUSZVMDTPLQBFWSXCQRUFKBVNCYXZRJZNMGIHFDPOIQKEDNGYETVAOXQXOYSRNGOQUZBJYKBLJ");
    msg.description.assign("VNNBNDXKJPQEWRZTMGREZBOOAEKDONMFWCRXDORIWLG");
    msg.vnamespace.assign("BHHGRVJVJCKDJYDEDZPRZBXXPYEWNVKAXEMSOC");
    msg.start_man_id.assign("SHDNEUYTZPORCVWQXWQIKKRBJCKNCIKBLEQKGZFFAIRPICEZSRXEGZWUTNONADOCBCMPKFSVQMJNYSRGYGSRYYOUPAHFSTNGAHMIUUIGOORYUSLWXI");
    IMC::ServoPosition tmp_msg_0;
    tmp_msg_0.id = 200U;
    tmp_msg_0.value = 0.653851536619;
    msg.start_actions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.732238580499);
    msg.setSource(61024U);
    msg.setSourceEntity(31U);
    msg.setDestination(26756U);
    msg.setDestinationEntity(66U);
    msg.plan_id.assign("JTTYWOHUMVSWHIXAPZQNQGWXBBICIRPOAHUUNKDWRFOXGUPFDWIZSMQGQGYXOVQJMXINDKZENYWUJKKYTBVXEAPKPGYERGOZMAZCDJRAFVNBHHCYYISECMGYQFJPKUGBUSFDNAMCHEBSVQYMTRJWDRVFBNNFFXFILRFQOIDPDLTCAZSJTOVHPCKUAJXZSLMOPQLWLETBZSISXRVLKAZU");
    msg.description.assign("TIRETZIIJBQHSYBNCUCNTLAMPAAUCBASIBELNONYCWDOGFVQUZFWU");
    msg.vnamespace.assign("SLHMEEHAIQGTNVHLEGUDKEGHFPYPXZYGWQAAXLZDJNSVFOZYZOYQUFICLOUO");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("RSGYRYKNTDZGQBZVYQIUORFRMZGWDLZKVPUXUMOABINZYPWCEHJIKVNMUFIHVVMSPIQWGLYZDCIZZAWEKZXXXBJTSETQWMJJBYSCAUPSGVHMAWNCRLVUSVICIFERTQMKFFCJBSNCTMAXMVQBPDWBJXERX");
    tmp_msg_0.value.assign("MYKKMVWSOVMJCGSXDQWMGCGUCIWTCHVLWRSYLQVJOQGJUNWDCUWFIPANHRVZJDZHKOFOZMIRJJUPAQOQDMIISHELIKSQRYYWOUATBXTRGZRABXZETPXVKPLTLBGNKBNAFQPWDIEDHJZCNBUMXJRFXMTYHITXQHDJYONNNIZCQRHLSXXBAATUADVLFPYZPJSVZFY");
    tmp_msg_0.type = 103U;
    tmp_msg_0.access = 173U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("BGOJOHFCLQPTRKQFQIAZCAQVMVTNTKTUZROAVWYUJKPTIVGFVCZFUKBSUOIOT");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("PYUFJHKFBAKDSMAYQWCXGVOVJLAFHNIWLUEMDGISJNFQDSXXFQVHWEDCSHYMLOPQQYWFJMTPEYQNBTSEHQPAPKRXRCRESTIKRAOLZPVVXDDOCOOWTEQZWUDPXZBBJMXIBMRXVZTOZFNBJRBWTGOEYKZRSDGAMPS");
    IMC::FollowReference tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.control_src = 55564U;
    tmp_tmp_msg_1_0.control_ent = 223U;
    tmp_tmp_msg_1_0.timeout = 0.18225230717;
    tmp_tmp_msg_1_0.loiter_radius = 0.823153944;
    tmp_tmp_msg_1_0.altitude_interval = 0.489779979267;
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::ApmStatus tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.severity = 27U;
    tmp_tmp_msg_1_1.text.assign("CAPCKRTISZIAZZXKJ");
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::Conductivity tmp_msg_2;
    tmp_msg_2.value = 0.865002601959;
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.482510132104);
    msg.setSource(26710U);
    msg.setSourceEntity(204U);
    msg.setDestination(38722U);
    msg.setDestinationEntity(128U);
    msg.maneuver_id.assign("VGENLLJKURHGDLEUBWCKOOSIHKXLYIFFNAQSOXQZVTMDDTWIFLQJOMWYJGIMNFBUWLMMWOXZKIYTAYPLAROZSHCQZYUOTHNADNAPXQPKTKCOOAQDWJDGJPHFTKFWASVEASHCCIMTMCNVQMDREPXTBPGBYPUG");
    IMC::Loiter tmp_msg_0;
    tmp_msg_0.timeout = 52092U;
    tmp_msg_0.lat = 0.508868491674;
    tmp_msg_0.lon = 0.790487694525;
    tmp_msg_0.z = 0.378554422865;
    tmp_msg_0.z_units = 0U;
    tmp_msg_0.duration = 38935U;
    tmp_msg_0.speed = 0.305232977119;
    tmp_msg_0.speed_units = 26U;
    tmp_msg_0.type = 157U;
    tmp_msg_0.radius = 0.953491515844;
    tmp_msg_0.length = 0.217011250417;
    tmp_msg_0.bearing = 0.699664786655;
    tmp_msg_0.direction = 220U;
    tmp_msg_0.custom.assign("WOLDUEIZDDLVJXREZTKKRTCPSQIRPZHUVDTCNKEQWDLYWXUALZZWGZQFFGNYBSIFDNDCIUHBXYSPHIYAQJERWHYPOXYLJNTOMVABBUQJFLSBAZCZEFRGKJTMQHVEPCVVCJXFHMRZUWYRNNMJME");
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
    msg.setTimeStamp(0.592474101439);
    msg.setSource(15340U);
    msg.setSourceEntity(106U);
    msg.setDestination(16836U);
    msg.setDestinationEntity(71U);
    msg.maneuver_id.assign("HHNRLLJGZUDCRKTMNFFAETDASHOVLWXKBQOQANKOIWQZRHVDIGSZKBKRHXMGEWSTXWOGQUIWQGPYOCTEXSVVVHDSSW");
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.609753150504;
    tmp_msg_0.lon = 0.785890158767;
    tmp_msg_0.z = 0.221522497546;
    tmp_msg_0.z_units = 115U;
    tmp_msg_0.radius = 0.787925043158;
    tmp_msg_0.duration = 17549U;
    tmp_msg_0.speed = 0.316592657957;
    tmp_msg_0.speed_units = 92U;
    tmp_msg_0.popup_period = 23794U;
    tmp_msg_0.popup_duration = 11520U;
    tmp_msg_0.flags = 136U;
    tmp_msg_0.custom.assign("HCSXLEKEQGMIHMSMHNZWEGXMHIUVTAEACEBUZOEZRIHNJUQGXDRHINJGLLARCOAAMYISZPHLKVFZCOROHPSXRYXYMGRJGFJGTSFOBXPRJIXTLQPAMKDVTYLHTUPJEJVKXVPBNCPFFCICAOIFHAWDSDYTRUCMGKZYZJYNWOQDPKBZYEQVBOKQQMVBGW");
    msg.data.set(tmp_msg_0);
    IMC::SessionSubscription tmp_msg_1;
    tmp_msg_1.sessid = 1569307241U;
    tmp_msg_1.messages.assign("PRGIQLEAKUUYLTHGQTDKMVIIUOBFYXPBSKHQXXWFJHUQZQXCVVFMCNEPVBGDJAZXOKTIVBICWRDUQPHOCZHULCZIZJHDYIWSIOLBZDGDXBUGHAHYLRKWDEYMPFTMVGAOBETJAMA");
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
    msg.setTimeStamp(0.154035075115);
    msg.setSource(11789U);
    msg.setSourceEntity(206U);
    msg.setDestination(46193U);
    msg.setDestinationEntity(49U);
    msg.maneuver_id.assign("ONMPJTLVUHCGIUEODZTIBDQSPWEJFHEAUEZIBDDDOKYVLRGCNANBAHOCOKIGBINWMBMCKNNBYQJCCMUSABZQJJRYXDNNVXMFQWXIVPPKVXQRAVFFROBGUUUKDA");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 47429U;
    tmp_msg_0.lat = 0.184898751564;
    tmp_msg_0.lon = 0.540751042258;
    tmp_msg_0.z = 0.329758843844;
    tmp_msg_0.z_units = 123U;
    tmp_msg_0.speed = 0.503435400676;
    tmp_msg_0.speed_units = 32U;
    tmp_msg_0.roll = 0.524399461194;
    tmp_msg_0.pitch = 0.493541614569;
    tmp_msg_0.yaw = 0.0142665686275;
    tmp_msg_0.custom.assign("VTUPXVQPSMIMQDTOFHRLLFEWCJLYYTMRQUGOVSYISXPZAOZTMEMGDCFVFAXHQDIGMWISZXVHPKPFXEZJKSKZRHZMLQVAVRDXIUDJWWFVSBNPWQPCFURTCOKNDPGLNCZHGLOHRYGHBTODRUWAXOBYIECPSJDCNEXIANSOQHTUVUQBBDKNCBQRIYAJBYSGJAEETCHDXEBBLWRUAQZJKLJIYENTGPKGAWNAKFKWWZBOF");
    msg.data.set(tmp_msg_0);
    IMC::Airflow tmp_msg_1;
    tmp_msg_1.va = 0.53084168885;
    tmp_msg_1.aoa = 0.694674351366;
    tmp_msg_1.ssa = 0.207536789494;
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
    msg.setTimeStamp(0.80019336506);
    msg.setSource(57431U);
    msg.setSourceEntity(25U);
    msg.setDestination(40028U);
    msg.setDestinationEntity(101U);
    msg.source_man.assign("KCCSGGTCBSQOOPEDCFQTMZJVZPJAALZOGREFYUBMMAIZYJWONPKBKUXZYQWRFUZVKVSHYNEXHIBEWLYXMHEYLHYHHAKXHOBDURCLTSAXGDXNJAKEFCFPVCSDAFEDGLBCGJPPWAQGRVPTLPQMQJOUGPSRKVDIW");
    msg.dest_man.assign("WFARZJISXVFDTUNHSIMLKFTWETWZOGPPSXZXBGEGQFKENIZ");
    msg.conditions.assign("GZOPRRLGVIVBTNGGFHYHLJNXASDNRYZMOQPWNCRSHYYNPGHXZEDNIYTBTSWQRXOFICCYHKKOFXREBSEXKUHCWTPDTXIHTTJJAWMPVLJYDPFBHKBZNAMXLFVCGPYXOSTF");
    IMC::UsblFixExtended tmp_msg_0;
    tmp_msg_0.target.assign("TOIWMZITSXUJLCVAAVUYUQZKDPRMLXXFVLVHXSKEQRPUGPAFGAB");
    tmp_msg_0.lat = 0.76552706134;
    tmp_msg_0.lon = 0.8899431281;
    tmp_msg_0.z_units = 78U;
    tmp_msg_0.z = 0.790912208378;
    tmp_msg_0.accuracy = 0.926151595144;
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
    msg.setTimeStamp(0.244644750148);
    msg.setSource(26629U);
    msg.setSourceEntity(104U);
    msg.setDestination(13579U);
    msg.setDestinationEntity(37U);
    msg.source_man.assign("ISCZEKJMNDDERNQJRRPJPLDBFLCVRMQHPQXFDKKEINZVESOFJEKWITXNZEOJFAIOSLRVIVYGFPUSFGCOVTLRGSUBQITWYHQOWYHBNQGABMSQGXZUEXCTCRWYDVHPAWAPRSREBHODMQWAGCWSNVXHVLMMUGOFXJTAPMCLVIZPWRKGZZUYMLSUQOHYFNUFBAXXP");
    msg.dest_man.assign("YKXBDTCSTXGHIPNVKPNWVUSUTWGRAXVARHOXWJZOTPDSIEOXGJYBIOCTSFQKZIMANZSCUYFBIGEJKJCLAAWTLSOGXEJFQEQOYWNJVXLNITHLLYOWVNCCPBPVMLWNZFSRPGJFFQUIUXROGJIZEMQQUQCQQYCTNHREJKMADKXDWERQBOHDETPCXMEYHPAZF");
    msg.conditions.assign("PTNSLVDIUFHXBHBHBCEVUUPEGTYZBRQSQBBNANXIMIENHDVQQLFUSMKWGUIOAOSWXCLOWXJDMMRWLXOHGLGLGMVDTY");

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
    msg.setTimeStamp(0.0121629220441);
    msg.setSource(12366U);
    msg.setSourceEntity(199U);
    msg.setDestination(63865U);
    msg.setDestinationEntity(5U);
    msg.source_man.assign("LFFZIIUOCGNFOSULAWDIJOSKWUOVZUSTVEPBMXQJKTWWTDVKERYCHKNDNVVYTCAFHUEUEMUUAZECEDELWZUJDNSGQOHBVVJEDNAZSELGPZCXHRPW");
    msg.dest_man.assign("HUZRVEBZZEQEPTDSOETMVBLQSXOPWREAOGCHGFIQDVKNYVDBYLKVRSWZCCVXGTDQYFFCZMDVAXUUQFGXSZPXFJAHFNUQSWAUOPSYXMPJZNFZRUOIVDRNCHOKTDBEAPQELRZLPNRZJMELBDMUABNWDGTHUKJFPSXAOGXUL");
    msg.conditions.assign("SBARVMEQWXFUYTLHCWUKWJQQJNXIRSXGHKELYVGGXOMINPLAIZKRXHPRWNUBOCDSXCMHVLNWVYZSTYFVZLFPFSDCQGNEKHUHFQGTZXBXYWWQJZHYTFBDTFEKAIEYKUHSZGPPGAODKQIDFTBRSBKFVOQHUKMWRPMBUMROCCBECNEAIZAIGCOCRYQJAMHBCTZYJWTTPPKVLAUNSXYDUXVDZNGIEWSLJVVSF");
    IMC::TrexOperation tmp_msg_0;
    tmp_msg_0.op = 183U;
    tmp_msg_0.goal_id.assign("TFHPGMGXCANNDSEUFCZNKBNWJQGMYDCKFLQXTLSIZBZAZAYPGFPRQAAVCFOQTFSHGSFJQJEIASQZTMNODKHTLIPMBYLYEYQKYSIKWETPJYILOCDXDAPSJKPWFYAHKRWENERBXLURFWCVJVJDDLOHSARBRRVJUPAOWFJICQZLHUO");
    IMC::TrexToken tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeline.assign("YAGEJKOWIGYMIURWTFSAYMLFKTUFBFVEBBOENZAZLKQRYPEZPCQKVQSHSFVIXBPLJPGOEARFJCGDQYAEPYIBDLZRHSBQVUVWVOMIXUKKOYXOPSKLJZHGN");
    tmp_tmp_msg_0_0.predicate.assign("FICMCBRKBJRDUVOTDDMSXBCXAJFPVHGCIEISVAVPLCXOBGHYTWZQUAKLBYQHMDXRIYUQOGGCGKWXWPJEHGWAXYPLUFEWHPUNWONVOPKUVUOHBQJOFIEOIITVNAREKQYQBHJQGJLFRJX");
    tmp_msg_0.token.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.860797358184);
    msg.setSource(5254U);
    msg.setSourceEntity(225U);
    msg.setDestination(32622U);
    msg.setDestinationEntity(156U);
    msg.command = 135U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("MHGQICUCJFYLTTUYPVIZDGLDVNU");
    tmp_msg_0.description.assign("YLVDERKBFTQJAQKWYMAGGUWDIIMNSNBRDNIM");
    tmp_msg_0.vnamespace.assign("ETMRUWTEHAYLLHUHENXNHPUHNIITVYGCDSKXSXRCJZJJIVKPUVFVXDVXBAAOFOKTCMIYSGZLKNLDERFCYBOMGKRYXLTIWJFZCGAQWVILHPDZKWNMLDORDYWCTQKHMDFSOCJWHPZTHBJZMZGAVROOAKBBIZAYLQTPXNQFSGGCGRVETKMNLUSQCENSPZCAVAKOENUUPLFGJDYRQWBXRJUUWQMPFBWSMIAYTYUOSZJQXEEJI");
    tmp_msg_0.start_man_id.assign("QGEVFOAPQMXYYQBKOQPJCGRRERXLJFAVSGSQAWSQKBYZ");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("KJQUSMJNOJXIAVPUDIUHNJLHQSHXVBIMTIKCYIQJUVWAUNWHRYQZRRDHOEJYMDKJYTYBKDFAWBWIDPHGUOTLEOYAFJUQVIDOGRHFJPAXZTNBBISDTCFYKTXBSRPLNIOHSFCKEZGWRLQPVZWUZRECNSQWPRZSSLLGFMEAUGCCJVGB");
    IMC::Land tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.502982431983;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.172681742871;
    tmp_tmp_tmp_msg_0_0_0.z = 0.597574977381;
    tmp_tmp_tmp_msg_0_0_0.z_units = 253U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.770653997631;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 47U;
    tmp_tmp_tmp_msg_0_0_0.abort_z = 0.915742396094;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.693554949135;
    tmp_tmp_tmp_msg_0_0_0.glide_slope = 80U;
    tmp_tmp_tmp_msg_0_0_0.glide_slope_alt = 0.993735827779;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("JZMCKGSUSEEIQQJYMOFBWSGWYCHVYYNUNCDFGIHRMCESJVVONNT");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::HistoricDataQuery tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.req_id = 44267U;
    tmp_tmp_tmp_msg_0_0_1.type = 155U;
    tmp_tmp_tmp_msg_0_0_1.max_size = 50569U;
    IMC::HistoricData tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.base_lat = 0.17949372093;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.base_lon = 0.576371828475;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.base_time = 0.570136876058;
    IMC::HistoricSample tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.sys_id = 13233U;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.priority = -72;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.x = -31266;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.y = 11470;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.z = -5590;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.t = 4462;
    IMC::MapPoint tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0_0;
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0_0.lat = 0.705137484707;
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0_0.lon = 0.0946458049482;
    tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0_0.alt = 0.182288276227;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0.sample.set(tmp_tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0_0);
    tmp_tmp_tmp_tmp_msg_0_0_1_0.data.push_back(tmp_tmp_tmp_tmp_tmp_msg_0_0_1_0_0);
    tmp_tmp_tmp_msg_0_0_1.data.set(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::BeamConfig tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.beam_width = 0.740525761319;
    tmp_tmp_tmp_msg_0_0_2.beam_height = 0.464513625285;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("QMIFGZTTENAPDCLITKRPHJQWNHZHVBVBJQXRBUAGOFLSHEFZBYRKBXAYADMCWEDWONSRDLGLQYEQOKXKNCZLGEYFCKEFXLYRSMSPOJDNWKGFNMRNATEIVJVJDUXGLJHBSKZXOPMBNZDDRHDQJYSAKAPKOUUHMPVTZZSYNNTOTOCQEC");
    tmp_tmp_msg_0_1.dest_man.assign("NVRXAMXSMWMPGZILHGQZTMXBKFCWEXHWYWFGEJIDJCLQTIIFLMUOOLFGOVVAKVTIQRPNPEMHXEOPKTINVXRTENCNFBUFWWUJ");
    tmp_tmp_msg_0_1.conditions.assign("BMGZVJHDGRZCKXDTVPAABKWWMMBYMECFFPPHQKPDEXDWPWXGYJCSGKQTRIEYPCJRBYLEVDJTHXSZIUISUTQFYOJIGEAAK");
    IMC::HistoricSonarData tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.altitude = 0.729876240873;
    tmp_tmp_tmp_msg_0_1_0.width = 0.615889463143;
    tmp_tmp_tmp_msg_0_1_0.length = 0.392615508817;
    tmp_tmp_tmp_msg_0_1_0.bearing = 0.249881625536;
    tmp_tmp_tmp_msg_0_1_0.pxl = -9482;
    tmp_tmp_tmp_msg_0_1_0.encoding = 174U;
    const char tmp_tmp_tmp_tmp_msg_0_1_0_0[] = {4, 113, -35, -94, 78, -72, 72, -11, -50, 94, -31, 27, -105, 17, -65, 110, -103, -42, -102, -88, 21, 97, -99, -15, 41, -107, 36, 104, 122, 86, 96, 81, -83, -126, 78, -19, 35, -70, 64, 71, 38, -43, 88, -95, -125, -95, -42, -66, 79, -122, -4, -67, 126, 55, 13, 42, 121, -58, 54, -31, 24, 25, 35, -123, 49, 41, -92, -1, 79, -103, 4, -42, -95, 69, -1, 124, -95, 59, -53, -115, -24, -40, 100, -12, -126, 71, -20, -117, 113, 83, 76, -95, 44, -50, -101, -91, -70, -78, -65, 31, 65, -3, 51, 44, -23, 33, 108, 124, 63, 61, -51, 115, -83, 64, 104, -59, 111, -86, -86, 63, -54, -42, 100, -8, 77, 72, -93, -52, 78, -70, 88, -40, -43, 52, -27, 87, 104, -67, -24, 121, -106, 70, 96, 34, 22, -66, 66, -16, -105, 104, -16, 74, 71, -103, -10, -120, 53, -37, -58, 85, -127, 110, -56, 100, 99, 69, -6, -50, 122, -50, 75, -81, 16, -87, -115, 54, 54, 21, -83, -84, -87, 105, 66, -73, -63, -83, -19, -21, -56, -95, 14, 57, 101, 34, 74, -115, -22, -25, 111, -100, -49, 84, 59, 117, 23, -126, 108, 68, 91, -92, 57, -40, 17, -27, 50, -34, -107, 126, 33, -31, -66, -73, -48, -8};
    tmp_tmp_tmp_msg_0_1_0.sonar_data.assign(tmp_tmp_tmp_tmp_msg_0_1_0_0, tmp_tmp_tmp_tmp_msg_0_1_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_1_0_0));
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::CameraZoom tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.id = 74U;
    tmp_tmp_msg_0_2.zoom = 9U;
    tmp_tmp_msg_0_2.action = 120U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::DesiredRoll tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.value = 0.384224954873;
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
    msg.setTimeStamp(0.845648204639);
    msg.setSource(23049U);
    msg.setSourceEntity(112U);
    msg.setDestination(40888U);
    msg.setDestinationEntity(89U);
    msg.command = 78U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SEGXSYZUDJGWMDMDDSOQMMNWBRZBICSBLPARROLNRPHAGIIRFWNMYUWPBJRTSRKBKQGMCHTOLUZHLCOFKSEYAFFNNTXUFCHGNAHJJNZXVIAPYXKFMNJKVTWQBOWZTQCCLDMOYWHOZCDPSFJLIMTBIKOLQXVWJFVRDATNXFQLTCTJVXUVSEPZPDRGSYEULEXIVZYEGYXMTCHACH");
    tmp_msg_0.description.assign("CIOGWFMJIJOTPPBDCWMSDHDIKLZYSTFOBYYQHTPMLZCHCVXXBNPBBLOPCNUFORADETPVFHZCIKKWYJQWARKNEXTISMFJZUGVQEKTRYUNZJXVELWCL");
    tmp_msg_0.vnamespace.assign("IPTNAXGLVWTWRFAAICGOLMTBSMYMYLUQSNCPQARPSQQYAPZGQIOMYEHWHZSIRJZNTACFGNNBEZPAIRYYYOWDDEPBMDBTFEWZIXWKNOIAISKWJQYGSBJFRLKUOGFWKUQRFDOFTAUMXBLZCQFJXUMNEPLHOYXQRXDEBKTTHXNQOITMECFECDTWHGHS");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NYSULYEBXVWBKVSXEQIGSSUSPUKUICRNRCMHXW");
    tmp_tmp_msg_0_0.value.assign("DTSZVYFZZOUXGFBLORADLPQMEUZSPJJOLGTRHKCPIGZYABXTGEYGKEGHXLWCSEGIQHVNWURPEMARMSIFFSDJNOYKTZNUQKPROCHTPSPIDTJADNQETDJVAWNRMBMDCXPBZNMAHVQSWVBXQWQBEWYDVJUMAUHGWTEXFTCAKVOLIKYCRJIMRKKFJ");
    tmp_tmp_msg_0_0.type = 182U;
    tmp_tmp_msg_0_0.access = 85U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("EGLJFXACZLSWNZESLVBYBWNKQEEGPXIVNTCOZLDOSTUWQHUKXRMPCUDZKWAQAIDXGDIWFHQYTSKYJTOAICPDWZMGVDTGHW");
    IMC::FollowPath tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.timeout = 23433U;
    tmp_tmp_msg_0_1.lat = 0.424106218659;
    tmp_tmp_msg_0_1.lon = 0.621646260646;
    tmp_tmp_msg_0_1.z = 0.399924893784;
    tmp_tmp_msg_0_1.z_units = 250U;
    tmp_tmp_msg_0_1.speed = 0.478803519567;
    tmp_tmp_msg_0_1.speed_units = 109U;
    IMC::PathPoint tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.x = 0.447579628718;
    tmp_tmp_tmp_msg_0_1_0.y = 0.0697638312856;
    tmp_tmp_tmp_msg_0_1_0.z = 0.827457827409;
    tmp_tmp_msg_0_1.points.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_tmp_msg_0_1.custom.assign("NZDLKGOOAJTWSFJZBTKVXQOFQQMNZZAWDVWYPAOYSMTCSIYYTGQSUFPNZKEMJRKOLAHFOCGIGKWEWHJSTRLDUXBDQWOMKWNVBZUXPSEWMMMIKLVBIVKUVTFPJPUAYYSGPRYBJQTXXNICIBEDMVPJQTUBLHFXIUSUAQZDWNB");
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
    msg.setTimeStamp(0.223333837345);
    msg.setSource(19139U);
    msg.setSourceEntity(53U);
    msg.setDestination(6463U);
    msg.setDestinationEntity(76U);
    msg.command = 70U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZTMQNTRRHVJTPJOYUVILDJHFXCRGCLDLSAGWDSWPYOPVFTHVWMEXJFBASBYGKSMJGOKH");
    tmp_msg_0.description.assign("PLQTWYTPJPBVGOJNOBUVRESZINUYLJEZTGRSZMABAJINRQJHAVMXUYEYYYFWHMLXNNHFAXPOZOKSTXVCPQDRKBOQIVICMSHUZ");
    tmp_msg_0.vnamespace.assign("TNSCPBFCIYCZAZRJBXSKSDJJNXVTWEGJYAIBNNLOWVCFIRWPXMUWOLHFPMVKATEOADDAWZTOEQDCTYSNJSHGYMDIGNEFEJSQZIIYYDNFXHXHRZRSEMKKGAKXYFZUALAJFNVDRRPLCQWGWGZPKPEGBEUPPMVLQHCQRMHWZKBLDWDDVBIRMOUBHUNJETHULGFYJOKOGFIQUSRTIYHZUYTFCKXIPAMJNRVM");
    tmp_msg_0.start_man_id.assign("FSZZGVOSKYAMIGSQPCTIMTBNBRTWVPQMZAJUYQCCCIPBPWXLQHXFIQOHATZVUFZKJSGUD");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("UIOWYCNRQDSDAOBAQWDQMFWZFIOLGWLDECPXMMWGUYPUJYNAFSCQZNNRMEELLRHEJJUETRHWVBKXHKAMTHFZOXZTETVCYYOUJGOZKFOKQBCVRHKXKRBIPGCFISLOLNBHHYDTFJRNBYOEIGQGLBFIJCXJQSFJCRUVAAPSTGHPSDUJDYKXZMNZOTXDAKSUGVWIVWGELTXSDLPXPZTVEXRTVMAQDVIIKHAYQJBHAYIZKMGRBBPPUSPSWEZMCWUNNL");
    tmp_tmp_msg_0_0.dest_man.assign("IAEDSAWIJUNXUYWLGZNILFVFKDMWEBFEYLUCPXYOCSCCDWMCJDHTXJOFRTGXGZATYRGLPMQFBMTCTOEHHSGROFKKGYQDRAIXMBXHLUGVBPDJTUIZZEQPYLCYBBWCJVRBLEAAAUJKNSXXWIUOHEOZRLSKNFKONIWSYZNVWVQYDXUURFIWMMVGMEJPVZ");
    tmp_tmp_msg_0_0.conditions.assign("FAWSUSKTIUIGXVDKCAHWMWALQBFIPKGJZFOPNTO");
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
    msg.setTimeStamp(0.335115650491);
    msg.setSource(36340U);
    msg.setSourceEntity(141U);
    msg.setDestination(7658U);
    msg.setDestinationEntity(213U);
    msg.state = 81U;
    msg.plan_id.assign("VKUGXNDLSJMRNRPWHPMHSEZTPNFJ");
    msg.comm_level = 86U;

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
    msg.setTimeStamp(0.809055846431);
    msg.setSource(32272U);
    msg.setSourceEntity(147U);
    msg.setDestination(13772U);
    msg.setDestinationEntity(7U);
    msg.state = 12U;
    msg.plan_id.assign("FXDWPEEMTPZRJCVWRKPBJLUWQMZDJARHCIIWJPSNNKRJGSHLEWFYNJMMAVKQMBHYEUIKXGQYXGNTWYTYADGAETROJQTSRWMKEZPUKGCZLLDNTUUQFMZSLZAUPWOOBRNKXXQFFTPMVLEYOEHNVHNXPZMSJFQGCRBUODAHLDGFOCWRSFFBZVLKICICIXIADWM");
    msg.comm_level = 160U;

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
    msg.setTimeStamp(0.691474837331);
    msg.setSource(33798U);
    msg.setSourceEntity(86U);
    msg.setDestination(43844U);
    msg.setDestinationEntity(210U);
    msg.state = 216U;
    msg.plan_id.assign("YEOLPWSVGGYCJBGWHDETRETDQAFJEPFPEUZVRQKITKVPZYMADLYJTIHISWQFJSZFXXBJHYKACCDKGKVQRMRTZMPTJZFLRBWZ");
    msg.comm_level = 79U;

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
    msg.setTimeStamp(0.740775789612);
    msg.setSource(56857U);
    msg.setSourceEntity(175U);
    msg.setDestination(31993U);
    msg.setDestinationEntity(242U);
    msg.type = 73U;
    msg.op = 130U;
    msg.request_id = 15086U;
    msg.plan_id.assign("NZQCSJAVEPABKNSTOHFIFNKUFHZMWNZVECXWETZRQKXCEDGYUPXSBGWFLKBZRIDNSFYBGOHNLPVZMPNCJDUKATMGJFHKZNIXIMTYMLOMPDICXJUBOZQYGVIVPUFODQGOJYPQTNTGWXOEJBTSWZKLDVWISSCBAAFHPLTOXQVLAKYECXSRHPBQGHVBHDTLDRTMXDIHNRYZJXVIBCRFHIUEAOAFQWAJSRUWCEWUO");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.554261866882;
    tmp_msg_0.lon = 0.357748440491;
    tmp_msg_0.z = 0.0748761522381;
    tmp_msg_0.z_units = 167U;
    tmp_msg_0.speed = 0.469696520433;
    tmp_msg_0.speed_units = 235U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 41824U;
    tmp_tmp_msg_0_0.off_x = 0.371510911626;
    tmp_tmp_msg_0_0.off_y = 0.204595334452;
    tmp_tmp_msg_0_0.off_z = 0.285996459841;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.983603724668;
    tmp_msg_0.custom.assign("RTQMLHAYBHCMZCMIXYIBOFKUVOBAIOZYQPZEKGXTK");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SRZQVXMTRVYAVNAMPTJLQLWOTAECWOAAATJHKZPIBTYBJFCKHHSDDRHHCCVUWBXEKSMXMGZQYBTMNWEOTQRKJCASUFDIOFZUINIIFCGFLHCQKUXYGDYNLKYEVSGBVFPPOLBNFBEQMODJMVOIEQOVLYONGWBVRF");

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
    msg.setTimeStamp(0.00646472809729);
    msg.setSource(22498U);
    msg.setSourceEntity(73U);
    msg.setDestination(13969U);
    msg.setDestinationEntity(154U);
    msg.type = 238U;
    msg.op = 199U;
    msg.request_id = 44941U;
    msg.plan_id.assign("IRTPQPEJZXROHRWSEFGTRXSNCZJVLXCQCSPVJINCTQIBXQJIBUDTPXRAELCMBBLHVUDYSMLJKHHRWZYYWOCFHRKODDIBZJPWNQQOUAGMFQFTXGEMRSPICRKPOTSDZYGCCVNNOVKTEIU");
    IMC::ApmStatus tmp_msg_0;
    tmp_msg_0.severity = 72U;
    tmp_msg_0.text.assign("HMVRQFMBNKOTNTPJJLZSYAUFNMUPDBZIFBOTDXLVUXRWYLJJRAENOWAULHGMOGUICRARWOTNYRUMZYZCAZIAZWLQLKKUQDCMOFVCDBXAJXWVSWKINFYEYHXDOZCPZWSTBEWQOHOTHGRVKIFS");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WSAYJJLECXBKVVYKXUNEFYWRUVUOVAFMFTULIMGGQHWXPOLYCZITRZDTOCRUKHMSRVFEWOODHAFQBHNHCNERPBUYYNWNSJGVZCFQALKUGGLZJQAUKGXTLTXLDPIYIPQPIDVH");

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
    msg.setTimeStamp(0.824913930156);
    msg.setSource(37328U);
    msg.setSourceEntity(220U);
    msg.setDestination(29633U);
    msg.setDestinationEntity(173U);
    msg.type = 243U;
    msg.op = 52U;
    msg.request_id = 37072U;
    msg.plan_id.assign("DSJCXQZILXIPERCGDLUMTXWTYMYVJEFZVNEQUHDFGMNDTFQLENYFMZVLVRHWWQNEFAXEOGAGEYVDMKDQGBODSUJXARCBQLEZRMRYQMABDPCSNSITYIKZKHKOTFENZCFWPOLXCUWHHBWXJLCPYISWSYIIZKILFKAUBUGRRSZKGPVVJBPZRTGDTNGMHQLX");
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("XYKSLRNTEQTSUFSCOICNKMMHMJYJBOESOCPAVLSPQEDZNMUIJWYZEVBDRESUFZWCRNQGTZPGDGSYTWUWQJDIYEKEQLDNIFJXZZSHLHEUFXAXHCVRBFDKYBROYSXUBWXIQGSAQHUCJBUDCHGMVYLGQENCMLDTFAMZQOFGHWLOWLDGYOGNRWQKBOBYNJD");
    tmp_msg_0.max_speed = 0.475461393457;
    tmp_msg_0.speed_units = 132U;
    tmp_msg_0.lat = 0.609953365158;
    tmp_msg_0.lon = 0.243810482962;
    tmp_msg_0.z = 0.530038120723;
    tmp_msg_0.z_units = 65U;
    tmp_msg_0.custom.assign("EWQZBRYLRJHSORPFQZQPJOKWZNEOBWRXDLIZKWGPGSYEYITCXYHNCSQXEHAFLYCKTLMSMCSUTRZUAFMCVVMAUXQDEAPJXTIBMDAVBLBLHGXAQWIKLZYPAQGKWUDIKHBILNXSIRTPQODGBVGUNGDXMWMKQOACIEKIPSOVKUGRIBJKNWJZJYFVNURHPTJENMZRTFUVXYFWVOMFNHJLLCHTODYTWEDCVUBAEONJXPFYSF");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XOZGXCVBEIRLOYQMKATXJRNDXOQQZRRZHJMETKLJPWNBNDRVSRCZMVBHHPLKNRQOVVISLTSGJXLWUAGIUEHCQKLNPZBRBRUZQFDTIICSFCAWPIGSVOZMKNFGTYWUFCKWFGLMNYHAGSBAXQSVDAOOPIFBDODXZJLNHANUHRZYAWWPLFQYXJYSIEKIPM");

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
    msg.setTimeStamp(0.861953604229);
    msg.setSource(19119U);
    msg.setSourceEntity(72U);
    msg.setDestination(30434U);
    msg.setDestinationEntity(62U);
    msg.plan_count = 43030U;
    msg.plan_size = 542336743U;
    msg.change_time = 0.483614477509;
    msg.change_sid = 63011U;
    msg.change_sname.assign("VBOCXOTDKTXFCCZEWQWIQMGSDMBSOKBONSDCEYLIGVDQDZPBJQAQLMFPIOKWFLSYFXARPBAEITXNURNCIJUGOIFUUOAIZATAACUNJVGXTLJEKMKXNGAYTUWCJTSGVJHQBZQJKGTHPAWMDYLIWKJOLIRPLHMFXBLYHSZYUWMQEZMRDWXEEZENKYWCQUZWSPRMYVOBDBLEVVPULNDGNXMPQGRVVFTSHNHFKNFZRTYEKSJRSHP");
    const char tmp_msg_0[] = {-47, 80, -126, -114, 56, -5, 105, 30, 112, 109, 96, -86, -57, -88, 26, 78, -21, 29, 3, -72, -72, 86, 108, -70, 83, 120, -95, 124, 77, 44, -67, -23, 108, -5, 109, 29, -59, -17, 32, 5, 44, 123, 78, -2, 76, 49, -117, 43, 38, -11, 106, 40, 30, -105, 52, -118, -15, 82, -100, -125, 6, 123, -96, 17, 73, -60, -87, 90, -87, -109, -60, -35, -113, 46, -22, -126, 51, -54, -98, 83, -107, -85, -71, -26, 90, 55, 63, -5, 67, -52, 48, 98, -16, -119, 0, -1, -114, -72, -65, 24, 52, -127, -56, -99, -119, -90, 24, -57, -90, 74, 41, -8, -36, -88, -45, 6, 61, -95, 77, 113, 57, -9, 72, 83, -83, -34, 116, -79, 41, -94, -121, 18, -21, -51, 87, -79, 19, -45, -33, -78, -123, 21, 61, 86, 58, 106, -30, -34, -39, -121, -88, -25, -87, -30, -91, 118, 47, 53, 18, 121, -27, -34, 114, -101, -105, -116, -48, 80, -92, 82, -15, 9, -96, -128, -63, 48, -87, 86, 53, -76, -46, 37, -52, 54};
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
    msg.setTimeStamp(0.947576786105);
    msg.setSource(17695U);
    msg.setSourceEntity(230U);
    msg.setDestination(18138U);
    msg.setDestinationEntity(110U);
    msg.plan_count = 57601U;
    msg.plan_size = 2603151045U;
    msg.change_time = 0.112406855047;
    msg.change_sid = 63167U;
    msg.change_sname.assign("SNAHYKGUSMJBTGOCYHIWJRKJKXMUWJDCKTQNTPLBMXXQWKGURCLLQPTESCNUAJPAKBXUOGFKQQW");
    const char tmp_msg_0[] = {103, -111, 16, 73, -110, 72, -8, 39, 109, 90, 118, -28, -70, 94, -42, 95, -62, -36, 33, 3, -80, -128, -11, -107, -101, 31, 107, -47, 75, -84, 24, -1, 73, 72, -70, -70, 114, -44, 71, 67, -44, 52, -83, -128, -109, 44, 23, 79, -93, 60};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("XKLYOUHAGKVGLTISTUKKVBMDULRXQBNMEXVNOHSWZWNDFSTUKHGFNHQTCYSFZHFHCXEFIGRADUMKODYMDFDSDWEWSIXRJVWIAPCNUBVLXMUFYMRQRQIPTCXPAMLQ");
    tmp_msg_1.plan_size = 64042U;
    tmp_msg_1.change_time = 0.241947101745;
    tmp_msg_1.change_sid = 3965U;
    tmp_msg_1.change_sname.assign("THESRXWQCPJEELJTYER");
    const char tmp_tmp_msg_1_0[] = {14, 6, -25, -15, -55, -114, -10, -39, -57, -30, -40, -90, 9, 33, 99, -9, 116, 31, 95, -85, -53, -90, 6, -73, 75, 66, 14, -14, -8, 18, -66, 125, -98, 45, 37, -29, -56, 110, -115, 8, 74, -94, 1, -38, -93, 104, -93, 67, -107, 29, 43, 81, 52, -110, -115, -50, 54, 125, -22, -27, -94, -7, 122, 54, 96, 33, -33, 100, 97, -7, 43, -95, -106, 116, -89, 24, -102, -58, 18, 89, -22, -40, 30, -36, -28, -78, -116, -8, 56, -7, -71, -110, 34};
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
    msg.setTimeStamp(0.534916550295);
    msg.setSource(17736U);
    msg.setSourceEntity(220U);
    msg.setDestination(34926U);
    msg.setDestinationEntity(106U);
    msg.plan_count = 32098U;
    msg.plan_size = 2791240664U;
    msg.change_time = 0.811430068345;
    msg.change_sid = 63866U;
    msg.change_sname.assign("RQVRRUPLHNBNVHHZOPBJCYGTVYTUVLXZDZGPUT");
    const char tmp_msg_0[] = {-2, -36, 33, 64, 13, -123, -106, 123, -56, 28, 104, 8, 88, 62, -29, 70, -117, 122, -63, 91, -32, -45, 100, 84, -26, 34, 16, -50, 74, 59, -95, -42, 7, 20, -67, 110, -32, -41, 12, -50, 66, -69, -54, 46, -17, 87, -66, -127, -52, -17, -95, -48, -68, -82, 92, -16, -60, -26, -124, -25, -78, -96, 9, -47, -75, 72, 83, 77, -1, 7, -77, 87};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("SWUXSXJHMIBPHKZLIPHYXTGAZGJXCLASWUGYBFWADQGOKOMZWCHCTFTPIS");
    tmp_msg_1.plan_size = 55767U;
    tmp_msg_1.change_time = 0.982966770175;
    tmp_msg_1.change_sid = 9749U;
    tmp_msg_1.change_sname.assign("UUPWQCFRRMCUVPGTJXOFEISDRYTZCZFTZPVBVQUBPLOTQVBBKERFDIJHQCERISFTVYSPTEZYDVUHTASUMYESJFODTWWPDVDMGJPCKICYHMDVERZCGUNTWMOOINKQYALONEJSGJOGGSAOKKDN");
    const char tmp_tmp_msg_1_0[] = {-9, 73, 86, -16, -17, -50, -35, -120, -29, -24, 3, 106, 74, 46, -2, -127, 91, -116, 94, 12, 104, -61, -16, -40, 96, -6, 4, -121, -100, -119, -17, -15, 111, 19, 27, -89, 73, 37, 94, -75, -58, -51, -69, -112, 53, -19, -37, -97, 108, -47, 45, 3, -65, -69, -120, 52, 46, -44, -40, 109, 29, 10, 118, -116, -118, -111, -47, -93, 108, 3, 69, 2, -48, -60, 84, -79, 21, -74, 19, 106, -83, 61, 65, -128, 68, 119, -120, -79, -80, 95, 19, -35, -12, 75, 70, -109, -91, 34, 45, -23, -4, 94, -76, -101, -108, 68, -106, -45, 20, -59, -58, 107, 115, 126, -45, -27, -89, 11, 78, -15, 111, 120, 101, -91, -26, -74, -45, -77, 97, -4, 6, 22, -39, -38, -15, -95, 31, 22, -84, 104, -95, -46, 88, 57, -111, -28, -77, 41, 62, 95, -64, 62, -80, -30, -126, 79, -85, -25, -74, 75, 91, 11, -4, 20, 62, 18, -111, 111, -39, -59, 57, -85, -60, 123, -70, 104, 99, -55, 30, 28, 108, 126, -18, -58, 24, 0, 36, -32, 93, -106, 51, -39, 31, 94, 89, -121, 106, -22, -55, -56, -105, 55, -113, -124, -58, -87, -90, -56, -80, 46, 77, -23, 34, -112, 98, 9, -112, -86, 13, -99, 120, -68, 4, -14, 96, 49, 81, 13, 39, 112, -108, -89, 95, -44, 44, -106, -109, 67, 53, -110, 8, 47, -62, -51, -14, 86};
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
    msg.setTimeStamp(0.510021997187);
    msg.setSource(9793U);
    msg.setSourceEntity(76U);
    msg.setDestination(59257U);
    msg.setDestinationEntity(247U);
    msg.plan_id.assign("YGZOAGLLUNPZWMROYTQMDEMBMZLNKURKHPZVYXUAEVZXEISDEQPNWRSAWQJWGLQBFAOMIWTPFAQDZLGEEOTCYHAOZJYOPDFWBBDENTXTFUPFSTHIRPXPVKKMDVIJCHFVBWQIGYORLRVZDDEMSHQSINTLJEMTMDQNNBGBSJXCRAUCCHJONSADXJUKNWYICIXCCWRPKSOWFSHLRHGXFAHIXMVJGOIBNYZ");
    msg.plan_size = 48282U;
    msg.change_time = 0.720536766747;
    msg.change_sid = 64477U;
    msg.change_sname.assign("RNPVTMXKQWAAVIHUVNYVFSOAATXFRCEHFBEWCDYMSSLBPVGPGMBLHEAGHFTJHDYPMULRNLTKMRVUJFHIKECGIQEBGOAJBK");
    const char tmp_msg_0[] = {67, 81, 71, -25, -111, 65, -72, -23, -102, -72, -69, 2, -59, 71, -83, -39, 33, 121, -4, 48, 47, -69, -16, -10, 50, -85, -88, 7, -73, -8, -25, -127, 104, -121, 81, -114, 117, 12, 87, -68, -55, -44, -38, -13, 106, 37, -83, 105, 122, 15, 5, -74, -39, -86, -85, 89, -127, -72, -7, 12, -75, 68, -29, 126, -70, 37, 115, 3, 63, 97, -91, 105, -112, -22, 68, 7, -27, 1, 112, 75};
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
    msg.setTimeStamp(0.824072882089);
    msg.setSource(46709U);
    msg.setSourceEntity(67U);
    msg.setDestination(24721U);
    msg.setDestinationEntity(103U);
    msg.plan_id.assign("XJGTWDCJODPWOWRUKCZZELSUVHTLYPWOJSHEU");
    msg.plan_size = 95U;
    msg.change_time = 0.616560099745;
    msg.change_sid = 46774U;
    msg.change_sname.assign("VKSQTRESTGAPLSCTFFZWYADILYJWKLEIPTLBUQWONAXNWDBEQPXUF");
    const char tmp_msg_0[] = {-57, 6, 65, 78, -58, 85, 33, -3, -107, -33, 30, -84, -76, -116, -106, 43, -58, 85, 68, -116, -123, 83, 8, 63, -18, 49, 52, -70, 45, -127, -128, -55, 39, -52, 105, 56, -124, 104, 114, 81, -30, -123, 85, -5, -74, 126, 121, -65, -41, 112, -108, -111, 41, -63, -87, -98, 37, 111, 102, -3, 93, -18, -87, -76, 44, -73, -2, -125, 59, -104, 42, 55, -114, -44, 115, -94, 39, 17, -6, -126, -6, -54, 14, -80, 47, 88, 84, 9, 91, 123, 34, 36, 124, 9, -16, -76, 112, -74, -15, -5, 69, 106, -4, -111, -65, -107, 123, -126, -52, 71, 56, -101, -90, -128, 62, -87, 98, -126, -65, -118, -105, -18, 119, -8, 112, 63, 41, 11, 56, -65, 67, -29, -33, 116, 38, 81, -77, -47, 69, 125, 66, 67, -69, 84, -97, -7};
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
    msg.setTimeStamp(0.726941039962);
    msg.setSource(36455U);
    msg.setSourceEntity(20U);
    msg.setDestination(39892U);
    msg.setDestinationEntity(162U);
    msg.plan_id.assign("XQBBUIDNSMAYPABQARRNWRLQCEOZUPAOTEGIJJXECJSNCAOFPDGSWJBYOEHEQKZXVMKOVBLLSVPGRUNZDNSEMMCYFVVYFTAKWQZFWKUFMWRSVHOGKRTXQRGLLVZHEBHZDZEXDWD");
    msg.plan_size = 53187U;
    msg.change_time = 0.230552281319;
    msg.change_sid = 14108U;
    msg.change_sname.assign("HNMNKMNIKYRQJVHGDUQLEDDBJWIQDMYNSARPTFUEYOVJWYLGBDCECQA");
    const char tmp_msg_0[] = {41, -12, -63, 122, 81, -50, 70, 108, 116, 113, -16, -75, 75, -26, -109, 49, -55, -92, -96, -2, -67, 71, -106, -95, -115, -2, -9, 89, -49, -61, 13, 44, 3, 70, 17, 15, 65, -74, 74, 77, -76, 0, -55, 89, -121, -125, 81, 24, 21, 105, -67, -108, 47, 59, -121, -90, 19, 48, 17, 15, -90, 71, 22, 50, 80, 52, -96, -11, -14, -99, 24, -20, -51, -78, 113, 12, -14, 1, 122, -38, 86, 66, 17, 38, -55, -69, 58, 5, 109, -99, -32, -94, -1, -126, 120, 13, 78, 16, 5, -52, -44, -51, 69, -57, -71, 83, -122, -32, 101, 116, 41, 83, -52, -89, -39, 52, -93, 68, 88, 46, -124, 125, 7, 89, 44, -84, 112, -76, 99, 67, -66, 35, -113, -103, -63, -54, -36, -114, -36, 3, -38, 47, -71, -57, 108, 89, -124, -110, -58, -90, 44, 18, -92, 30, -39, 110, -30, -117, -65, 67, -38, 39, -14, 74, -68, -113, -61, -67, 95, -122, 102, -29, 112, -13, 30, -60, -74, 52, -52, 102, -68, -120, -9, -44, 62, -110, -88, 32, -49, 5, -27, 69, 28, 123, -113, 83, -81, 26, -97, -107, -21, 61, -47, -56, 61, 52, 23, -83, -55, 76, 81, -50, -18, 126, -102, -29, 100, 83, 43, -34, -91, -58, 52, 51, 16, 3, -53, 78, -104, -53, -12, 26, -62, -9, -4, -12, -101, -59, 68, -112, -57};
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
    msg.setTimeStamp(0.627896914259);
    msg.setSource(37402U);
    msg.setSourceEntity(29U);
    msg.setDestination(21473U);
    msg.setDestinationEntity(132U);
    msg.type = 180U;
    msg.op = 252U;
    msg.request_id = 5069U;
    msg.plan_id.assign("RXADIRABQASYFHLANBTOOPPHBOSJIWGDYAHZADDUDNDIXEJPOFNFWGWXMLUHNSDKUPNVFQRMGGSSWQVZBJ");
    msg.flags = 63011U;
    IMC::UamTxRange tmp_msg_0;
    tmp_msg_0.seq = 3472U;
    tmp_msg_0.sys_dst.assign("CDKUJKBPDJDEMNINISOZKAZFLEHDIHSJUKURKYXSHCIWFUNAEFTSYWOZVXVDMSCBOEJWQPMPBLPBVTAHMGOQRMCYNHSNVVZMNIDSBIWNEGFRCYRKQVIAJDQURTPOWYLSWWEKRNXRBEGUZOT");
    tmp_msg_0.timeout = 0.783302350579;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("CPKJFHBWGVQJPZEGXCKECMQPVYSUJQXCXDYGHICUFEUIHDE");

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
    msg.setTimeStamp(0.524745726376);
    msg.setSource(32209U);
    msg.setSourceEntity(110U);
    msg.setDestination(24272U);
    msg.setDestinationEntity(221U);
    msg.type = 225U;
    msg.op = 34U;
    msg.request_id = 26398U;
    msg.plan_id.assign("FSHOLHNZINHLNHJOHPBCWUDZXUUVZMHSXCJBYEBUIVPKBOAPJKRCNTGZMYPUTIZHDERIDRTPYQZVYVMCGSDNEYLTFJBQFCJMEURYJOMTCIFROGQBPRXLJSONOEWP");
    msg.flags = 52358U;
    IMC::DesiredHeadingRate tmp_msg_0;
    tmp_msg_0.value = 0.645883829942;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HSNTJUNTALREKEAVPMFBMOHLBWNRKGYISDFHLFLJVTOBVDGHXKWDEYVMIGMCMGCKJZPIFLHWOZXXQRYPKCWTAXCWYRZXOWQLEVNDQAAOFAGBBPKCLZXIZRXVIEAOXPBSQUQNYJRUMSCWJOMSTOUIMIKDTSVJWZXGQRBQIHYEKUGZYSAPLMHTZTSLAEAIICFGS");

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
    msg.setTimeStamp(0.0133532147994);
    msg.setSource(53854U);
    msg.setSourceEntity(62U);
    msg.setDestination(39830U);
    msg.setDestinationEntity(237U);
    msg.type = 201U;
    msg.op = 176U;
    msg.request_id = 7317U;
    msg.plan_id.assign("FIBURUHGAIOVSSQYRPWGGVESFNDODVCCMSZYTZUYPDKHUJXXLXXMMEIIBJRYYWHFMAEEDGBFRTWKDPGJUDNZLIZMQWBJJZQILJJOPNBQAKQRHMRATQDBKZQBPJFIVVHNSFHDUOPMSECXNNGYBOAQITYENMTPEKDPCRVCPAVLXKRUCVSOWSOFORIFTFYAZGKRLAWNBQZTIODLVWCWJCMKXHNCQLHSGLZHE");
    msg.flags = 44017U;
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 4015972985U;
    tmp_msg_0.start_lat = 0.577998586074;
    tmp_msg_0.start_lon = 0.893460003283;
    tmp_msg_0.start_z = 0.736097138929;
    tmp_msg_0.start_z_units = 57U;
    tmp_msg_0.end_lat = 0.276542325744;
    tmp_msg_0.end_lon = 0.288934734434;
    tmp_msg_0.end_z = 0.686171561624;
    tmp_msg_0.end_z_units = 176U;
    tmp_msg_0.speed = 0.493654745714;
    tmp_msg_0.speed_units = 49U;
    tmp_msg_0.lradius = 0.736306439918;
    tmp_msg_0.flags = 241U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DCOBMVNMBOPEGIJZRXTOEQRUHTREQYTNOXMVZBGJCSVXLQYYIVCUPTTUGTSWHXSOIARYFV");

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
    msg.setTimeStamp(0.221609161083);
    msg.setSource(10766U);
    msg.setSourceEntity(186U);
    msg.setDestination(44201U);
    msg.setDestinationEntity(227U);
    msg.state = 24U;
    msg.plan_id.assign("AOOVUSNRMCFSVDUBTPCQKIZHDJFZBDFYPY");
    msg.plan_eta = 995348515;
    msg.plan_progress = 0.396417016996;
    msg.man_id.assign("WUGXCBZOYLYBSNRSXMZNGMDUEAYWKZQTMYTUVUCPHXNORISHFROSVVMJSWRSGCTLRUAWDCMBHKRWNALVEFPHVZIILQLSPCZEFYWWMMBGZCPFQTDIWMOFQUTNYKISTIBSWGBNGTXPEYGFVDDVVEBXYKRGGDFRDQLKOLH");
    msg.man_type = 9999U;
    msg.man_eta = 1280862320;
    msg.last_outcome = 174U;

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
    msg.setTimeStamp(0.637275108557);
    msg.setSource(56738U);
    msg.setSourceEntity(194U);
    msg.setDestination(29645U);
    msg.setDestinationEntity(185U);
    msg.state = 16U;
    msg.plan_id.assign("ZCROQOJXXAPFMUKDEXIZGXLLPVGLZCAIAAQFPOKDPOUJNLUPHYTRCWFQJZWBIEADUDTDQKPNWOJWLYDLTJKYTOYVFYSFHRENBXWTGBIMLORSVKQHUBIGEPOLUHMC");
    msg.plan_eta = -1823212720;
    msg.plan_progress = 0.548066438087;
    msg.man_id.assign("PCECVVKFVSSZNJBOHHQPKGURGVJDFFZYUTHTXQUSYCBCIGNLLXQDTT");
    msg.man_type = 12509U;
    msg.man_eta = -1271146129;
    msg.last_outcome = 151U;

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
    msg.setTimeStamp(0.75876467688);
    msg.setSource(26305U);
    msg.setSourceEntity(89U);
    msg.setDestination(54434U);
    msg.setDestinationEntity(76U);
    msg.state = 52U;
    msg.plan_id.assign("PWRWGTJRJHFOEZXMXELYXRBYGTKAGYDZJYX");
    msg.plan_eta = -1858550160;
    msg.plan_progress = 0.294064534896;
    msg.man_id.assign("INPLXMVSUGTZDHATCXLUQNXEZOBKDEBXIENVDCONFZRUKGJOTAPODEVFIBISSSLOOONPZNWSUBRWOYYYGHAGMMOMZDJRMEKWVUPNYNFYTKGRAQZMAEVQIWEKLWECRTDWAZHRTDHWKJLHUQGHPWRFPD");
    msg.man_type = 20723U;
    msg.man_eta = -965190978;
    msg.last_outcome = 26U;

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
    msg.setTimeStamp(0.719987827815);
    msg.setSource(28199U);
    msg.setSourceEntity(72U);
    msg.setDestination(38093U);
    msg.setDestinationEntity(108U);
    msg.name.assign("WQPLXNYKQIVECFPDSLUBZZGQWSROGFGRDXLJDZCPOZNTNUAWZVVXLWSRXJBOKKCBCHOSUIPWTVCMOAXZTQVYJVPCMFVHHAZHIBXBGLRXKEJMGPGYPZTISNMYJJSFUWKNXOEBEKRLIYHPAFUSTSYUDIEFTJRJHSKKADLAKFUIDGPQAIDTODGEHMHUJGQVVDRAEWFLEGONQXBJTBENCURYQMWQZFWRSPNHYDOH");
    msg.value.assign("BEEGQKWTQSROXJHJIDKFFPBVNMOQFMZIXLRDECJGTGZZVHCILCQJOTKRKZPYRVQMMPNPZNXWUBTBNASVBGFJRFGFVFVDLIBRNYNDRFMYKOLQYOGAWVMVGCDWKRWQOEJLKNZXEFCXCCPAAJUXUHBTQEYMLYUZJTIZAHHZXCPGUXEUTWINOOFWYCHAHGKISBPLOXDSWZHSIYARDAWSSOVTULNQSSEPEGDNEMUMBKITDPIJSMV");
    msg.type = 148U;
    msg.access = 248U;

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
    msg.setTimeStamp(0.459115501177);
    msg.setSource(6951U);
    msg.setSourceEntity(157U);
    msg.setDestination(25487U);
    msg.setDestinationEntity(242U);
    msg.name.assign("LZBPUROEDUKTVBPZGOJUGMJSCYDUADPQIVWOUXIQAZPXSYMWIUYURYNKCRWOMQDBLDUQKGQGAQRHWIXTLVXVTROMVNNHZHWKCBOFCGEZZSZQBDVXHWSHQBLLAIDIYBEPKFNAOREBEKEKMZLXNOJALJYVCONMIFYDPMBJTPFXQFKUPJMZLTCXRHWDSFJCGRLFDNWVNTTEPRQSVTSKWGJFTAFHJANNPHETIJHWHGZS");
    msg.value.assign("KFTKTQSEMOWPTKHSPBUZGHTGCFJUARDHQOTPJQKJWOVRJFSVIAUJWNMNHWBXC");
    msg.type = 214U;
    msg.access = 19U;

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
    msg.setTimeStamp(0.992109234228);
    msg.setSource(19515U);
    msg.setSourceEntity(136U);
    msg.setDestination(60587U);
    msg.setDestinationEntity(33U);
    msg.name.assign("ANFSPCKFQDFNHHVOGKHZQKZSGXJTSKHXYMNLFWEKTXXZHZBPDLUCTEMGAVDKOIPMAPRBJOUKCDUZOPAIIOVRSNUPGGTHDENEIQAQFMAROCJLVOJDKHRNHKFAXMBJLALZSJRWXWDCDBFCZQWYSZGSWDUOBRUTYNFUQRK");
    msg.value.assign("IAXCPSTINCUJVSSVFRRVTNAESHHPONGJQGQJMZSLQCMGTGAKQVSCXNQNGJUBVOAPURFEUVXJCZMNYBKOBZAMXPAPKGKO");
    msg.type = 48U;
    msg.access = 238U;

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
    msg.setTimeStamp(0.776364660183);
    msg.setSource(59568U);
    msg.setSourceEntity(22U);
    msg.setDestination(49278U);
    msg.setDestinationEntity(196U);
    msg.cmd = 250U;
    msg.op = 47U;
    msg.plan_id.assign("GGIKBBZJIWJSWRMQUWTHCUGWKSDIVAMPNYFVUCEQYVMNCSVCHELHUQEASAZD");
    msg.params.assign("PNIOAOLOYUSEYAQRJNCURCFTLYDBDCEQCEWRECMZZZTJDBKNCZVWHKFNUQKMSUBWXZYMKFSNDSUKVGOMYMHHPVISHIVAAYDEPGTDQDIDTKKKLBYQXKVCUWLFIJSLGVVNLZVDTFXULWPQRLZLMGOECTARNS");

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
    msg.setTimeStamp(0.908630147364);
    msg.setSource(64615U);
    msg.setSourceEntity(221U);
    msg.setDestination(3987U);
    msg.setDestinationEntity(83U);
    msg.cmd = 17U;
    msg.op = 178U;
    msg.plan_id.assign("FTTOJQQAKYTGWBDZNCEWWHBEKZCBYOODOZ");
    msg.params.assign("RXHTSCHOJALOVYKAFQHLKPRAMHIURVGCVRONLQNCTZRVHKPXSFWBRZZBCCMDSZUONDEBDJPVE");

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
    msg.setTimeStamp(0.918150061817);
    msg.setSource(25767U);
    msg.setSourceEntity(16U);
    msg.setDestination(23946U);
    msg.setDestinationEntity(202U);
    msg.cmd = 85U;
    msg.op = 101U;
    msg.plan_id.assign("KILITHYSSBNCQVGYSOURPHPLQWZNHCVOWHYWTDMOEJBJZMAUIXLQSHEGXNFKVTDGSGWNEYWRMFHJRPXPTQMMDRAEUKYBWQHPQUNAVZXEXSCQMKHCQELWTKBDZFJKOPAVVMSGNTDCFTBEXKRVKGUCUYAACXLCRIPNAXODHVYFJZFW");
    msg.params.assign("DDEPFRXINNWXYVOBTHEXBLGULGHMTAJMQDSPGJKABFQTWJQQYHYUONWSYKYEZGESCNGDENKJBFRGTHSHWPIPABDMAEVQMRDLDZPVYVCQZREROAUHQALSXOMSCZYTSQFSPUZTSLBANSTFONKXCDKVLCXVVCBXYWDNCHHQXVEYICLLORIFKRZXOCPUPMEAWFPIZATRJZIWFUQ");

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
    msg.setTimeStamp(0.414552148718);
    msg.setSource(39025U);
    msg.setSourceEntity(47U);
    msg.setDestination(53207U);
    msg.setDestinationEntity(97U);
    msg.group_name.assign("UCQQTAEVOTQNUFKETOVYSPDNGQSJXMGKJRWUVZDLBOXURBWARVGPMYYKBSJGADRZIHIERLJMQENAEOLEIJKWUBLNWTUDRMLSUEVDUASGQYOKWLYCFIEBNTWCAKWQGEAGVYZARPMILPZHHPQFIFBXNG");
    msg.op = 149U;
    msg.lat = 0.02791354072;
    msg.lon = 0.660302219194;
    msg.height = 0.789149169403;
    msg.x = 0.756204362306;
    msg.y = 0.861011144462;
    msg.z = 0.0945154579337;
    msg.phi = 0.193474374043;
    msg.theta = 0.908102679973;
    msg.psi = 0.647876489229;
    msg.vx = 0.252345655293;
    msg.vy = 0.31879310805;
    msg.vz = 0.491771019571;
    msg.p = 0.27848921071;
    msg.q = 0.519756400991;
    msg.r = 0.910227406647;
    msg.svx = 0.872641437833;
    msg.svy = 0.142647826313;
    msg.svz = 0.948076798204;

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
    msg.setTimeStamp(0.203872063728);
    msg.setSource(26987U);
    msg.setSourceEntity(168U);
    msg.setDestination(39127U);
    msg.setDestinationEntity(220U);
    msg.group_name.assign("RYFPJNCKFOGVWALHKKPBCXSMSWVOEXANHRFVRLWNNQQDPTAEMVQTCHIQZFZBLTCYXPZMTSQVGMWSXIOZUHWRYHJVVYLAGZFEKPESKLNUHKSELVZYGWUTBLDETXUYBXDINESDXMCFTBUHNXLGOMIRMLPLGCEDXGFAEBFJTRONCIJCRWVKQIQJWWHBMKJSYFUIEBSBMDYRZIMJQQAOJPCDYJNPUADXTRAASZQUZWYBIK");
    msg.op = 240U;
    msg.lat = 0.966983231413;
    msg.lon = 0.986727137398;
    msg.height = 0.989265447948;
    msg.x = 0.728694311669;
    msg.y = 0.11659406014;
    msg.z = 0.727454672341;
    msg.phi = 0.446130282608;
    msg.theta = 0.760010894879;
    msg.psi = 0.00339484056115;
    msg.vx = 0.220321204324;
    msg.vy = 0.908670760265;
    msg.vz = 0.636998261431;
    msg.p = 0.873302184445;
    msg.q = 0.337681037414;
    msg.r = 0.0171114545939;
    msg.svx = 0.163633209918;
    msg.svy = 0.387155494656;
    msg.svz = 0.976345161371;

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
    msg.setTimeStamp(0.595975514038);
    msg.setSource(16728U);
    msg.setSourceEntity(66U);
    msg.setDestination(63396U);
    msg.setDestinationEntity(178U);
    msg.group_name.assign("KDYVKLPOBHNXGJIWVONTFDQXJXCCIVQODANRXDRRFSTWREEEQRJGMGBQFSJOAGWCYKULIWAJFTNKHXNBOZWMBDCKGHIAGMQPMDPKXODQCAQWXWHYFGENBPTHMSOIJGJCZGKIUBWHXYLAFSKOYVWWFFLKAQLVMGNTSVVEMNECEUTQSU");
    msg.op = 187U;
    msg.lat = 0.634385185437;
    msg.lon = 0.643667944656;
    msg.height = 0.807618567664;
    msg.x = 0.924823502002;
    msg.y = 0.693388179545;
    msg.z = 0.971436079926;
    msg.phi = 0.560707591029;
    msg.theta = 0.863758781466;
    msg.psi = 0.359827342031;
    msg.vx = 0.226683587031;
    msg.vy = 0.338590007035;
    msg.vz = 0.772214959461;
    msg.p = 0.201091964163;
    msg.q = 0.110969880507;
    msg.r = 0.713325558606;
    msg.svx = 0.098052664909;
    msg.svy = 0.233243647143;
    msg.svz = 0.634756261922;

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
    msg.setTimeStamp(0.459633247216);
    msg.setSource(60565U);
    msg.setSourceEntity(200U);
    msg.setDestination(48136U);
    msg.setDestinationEntity(216U);
    msg.plan_id.assign("THINMOQPGNKNYXYFXQNPEURBTHFQHJSBYLP");
    msg.type = 198U;
    msg.properties = 43U;
    msg.durations.assign("IUYPESHUXXLZTGVAVAQSMSOUNQSHCUTYHKAXYDCXDCYWPWUGQMMVXSDAQFIAYZPVXT");
    msg.distances.assign("MTCQOXLSHXEFSVVYIDDLTOTCJABXPJLAGNOUVYWMXVWKEDOSBQZWJXCFAPPUJZWVAZUCNRLVKMIFLELRBMPRSZYXXJZEZCSRPWWALKKBKURDLDLCVDFYVSYNPDGEKAI");
    msg.actions.assign("ZFQBUAFGZWYCHTRFRSJFCRDJTXJEOTUFTTATRTYFODVVUQYCLQQTJNKZINPXBHXVJIFOLQSUEXJVSCVRWWKIEEVAMLPSQNSBORQLMFIWYKAGWABUGOKFHDHTIMIKBHHBDLHMEYMODPZQGZMNMUNOYKDXLSICJHWREXWCNGPUACCIEBWLK");
    msg.fuel.assign("RVYLJFEZUKLITWRZTCCAWSLPQPOBZNSUUVFHCAZJXVYHIVRJMHCGOJAUMDGLNSYDPGTQDMDATLTDUVPZNGUFFTFJGBXSGXIIEZSENWPXKGNOBLUXKWYOIYAKKEQOGFSYJPFBDBVSBYEKMHHWRAG");

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
    msg.setTimeStamp(0.685507637638);
    msg.setSource(55201U);
    msg.setSourceEntity(227U);
    msg.setDestination(134U);
    msg.setDestinationEntity(18U);
    msg.plan_id.assign("ICOHQRORNSSPVORTNJTAZOVFQPAKNXUGWXNPDMMNYAMLVJMNLZUHIHGELDGVYFSBSXZOBHRPQAULOZJSHHWTZYEOKKBCHKZRWYPJFRADVXEPCFLKWXDARLXKAEIPUYXYWRFLVVXRJE");
    msg.type = 156U;
    msg.properties = 153U;
    msg.durations.assign("DTVXETKJNGNEFPFUEMIFOPSZZOTFLQPZCSYCMQKQGMMWASUKNMBXVUCZYVIUUPROZONHHPAANIBDYGMFDU");
    msg.distances.assign("PBMWLXAUELSSTZFDFKMGNBCXZAYEQRZAOCAERQUMSLYCPZDCYWXTSTEOHJWPEMZWQPXDHBWPZMMFZLNILRTNNISOIMUFRJXCZNBLQDUCUPTKVOKKACNISPWQNHSBSROVHCVXOUHXFBOJGAAYHESGJLFFWGEZGDFKLJIUTJUWFTKMQAGYQHHIKKOWTIQLJJNVOEQDYIXRINVCORQTMARXVKPMTYHJJYGUPEBGDELDUFCKDBXA");
    msg.actions.assign("TGWLJQQWPDHAYYHBENWEXYZSBCVZPDEDZTZFRZJCFVNLBESBIUFVMJSRAZDUCISJTHIIMSAUGPQCPHWTMFSYCOIJHAXVCORRUSJEDXFNSEJIPMYWZNQXZOGKXLLUAOWVVLMRMWDRAPWNUWKGTUIXNITLNTUUXCBTHDYZXAMLCXNPOQKTPZBGAJEDOKFACPOLQGLNLVOISYQDEVFUHGFOCBV");
    msg.fuel.assign("LLGUGNZRTOLAMPWUGAJBIUAXULEI");

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
    msg.setTimeStamp(0.255397232156);
    msg.setSource(24895U);
    msg.setSourceEntity(207U);
    msg.setDestination(44633U);
    msg.setDestinationEntity(106U);
    msg.plan_id.assign("JWCPULMWCOXQHHMTQEKKKWOEQSBZHOVIADMGKJFXAAUDJHMZYYOOD");
    msg.type = 45U;
    msg.properties = 81U;
    msg.durations.assign("JOPGKEFDYGBWTTKXFAMSAMJJHSXLRZNQK");
    msg.distances.assign("SUIJRSKWWCTPQEEFBTNRTPYVNFMDDNBUMOTCFXVJQUUQCSGKAAFFAGPAFWYLZBMEONZVYZJJQCKVNYKUOXKFHJCKDEOPIAJNBAIQOMKGZJHC");
    msg.actions.assign("OWGKBUHHBYKWVAGDLXQTASEZXMKNFGPTFYA");
    msg.fuel.assign("QEPBFZHSXYTVWGVWGXFQKWOEZZSOZBPLIBRIDHMECOZHUJVKABBTLGVTXIKQGQDOOJYGUUWOASHVZCJKYFBWAGPDNRGLSFOUPJCNDNYXQWVNKUTNIVNDFEXPJMVXGDAMFTNNIRXETQTROJZYWAMDCKQIDHOGDKDLPOHISUUXCMPURMVUSAZRSGMMS");

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
    msg.setTimeStamp(0.725933292578);
    msg.setSource(18853U);
    msg.setSourceEntity(198U);
    msg.setDestination(44160U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.262441973054;
    msg.lon = 0.320393171642;
    msg.depth = 0.200321378564;
    msg.roll = 0.874985206582;
    msg.pitch = 0.688015972273;
    msg.yaw = 0.00613327065337;
    msg.rcp_time = 0.510230310301;
    msg.sid.assign("RQSYMTNOUEVBAYPLZLLHXEBAAEUFHITRTMPCOXZPHQCSLDZHOSSUZTWVQPXTDAQONEKPLNKEPKBNZIUSVGMTRJLXDDBFJXQPZXWCQGMYJSFSCUGSQJVJCQYCCEQMRFFAZKSHZBDEXSANFYIKWJWYGTMRKWCZRGOUJFIUMJGRDVNGIMHGNDNBWGLWWKXT");
    msg.s_type = 168U;

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
    msg.setTimeStamp(0.252929464059);
    msg.setSource(42624U);
    msg.setSourceEntity(163U);
    msg.setDestination(2042U);
    msg.setDestinationEntity(15U);
    msg.lat = 0.342788272102;
    msg.lon = 0.91516716763;
    msg.depth = 0.611615420269;
    msg.roll = 0.28714206612;
    msg.pitch = 0.655895250184;
    msg.yaw = 0.96839512564;
    msg.rcp_time = 0.801068116959;
    msg.sid.assign("ZCJQGPAZTAQXUZGBGHMXAABAFOMJEXDJAJTWNYVBWYIDOOHUBRBQHVXVLCGLUNYPELSSMWPUIKWSRPYWCICZTSFFXEYIVNZ");
    msg.s_type = 189U;

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
    msg.setTimeStamp(0.200864623548);
    msg.setSource(42138U);
    msg.setSourceEntity(198U);
    msg.setDestination(51402U);
    msg.setDestinationEntity(136U);
    msg.lat = 0.275961870561;
    msg.lon = 0.891030996316;
    msg.depth = 0.985832098009;
    msg.roll = 0.155894422672;
    msg.pitch = 0.754528049579;
    msg.yaw = 0.237473833315;
    msg.rcp_time = 0.386847113067;
    msg.sid.assign("XYLDCLJONCBCIBAODTZKRMYOPRMQWHJJSGSUFENCXYTQATOBOMSFLJISGNVLGBNDTRDHNXHMRBPQEDKGIHQRMECPURQZDUBMGZXIS");
    msg.s_type = 18U;

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
    msg.setTimeStamp(0.782692278277);
    msg.setSource(30427U);
    msg.setSourceEntity(36U);
    msg.setDestination(20206U);
    msg.setDestinationEntity(223U);
    msg.id.assign("UPDLFSJLACSBKMSCWSGVVKWOWRTAJMXETBEIFNCDPAHXNGJCWODIZTNDWSVUJYFXBXFNFRGDOQLGVRVMHKJPYZJYWDAMTUMRMYZQKEVVRRWPYGEDHDRSUPUF");
    msg.sensor_class.assign("DDBCFZNZHLJUOCAKARXHQUEWDISGQCYPATCFSIZQEVLMYCAGWISQFYHLRRIHKEXTXVPGEDERURVXSRKBUXGEHRGSFZNMMXVANBOYMPTFETETYTPKNKOXZLVOKUYYFHDQUBPDEUVPXQPTHBZQOBUWSWLZLIUQLBZUBCZRPHONMKVGCWFRJRFKLADIOJXSJTCCEWMAOMTMJLJIJSWGMDFNNVADJPLSBMSKXNFTIDKNAOOQWJGGYHWCQBVVAI");
    msg.lat = 0.0454052657945;
    msg.lon = 0.374086292519;
    msg.alt = 0.196951196558;
    msg.heading = 0.0445367886407;
    msg.data.assign("KOFZYAIBDLCBACTNDSMXTTOWUTHNNWUHVHDASJZPOWLC");

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
    msg.setTimeStamp(0.474190464327);
    msg.setSource(51244U);
    msg.setSourceEntity(159U);
    msg.setDestination(19494U);
    msg.setDestinationEntity(11U);
    msg.id.assign("TPDQFLXPFRXZPYXPWKGJMEQWYACCGDSGKKGPEXZYFGVHRFCXHARASKNPUHEECFYKIWWL");
    msg.sensor_class.assign("DEYCWSEZMHAVDUKATCOUQOTGSWWLOKZYLBXFJYKXVHRJGGOHAOGNKKSBZCDXDGZPOAVDJMISUSTZBPVCEQFEMBGMYFMQOYTABWLEYDINVFHFHNRHYXUYPNPCWXISCMKVSFOZVPRNQIWQ");
    msg.lat = 0.924947219532;
    msg.lon = 0.849052910688;
    msg.alt = 0.761517699418;
    msg.heading = 0.538419528175;
    msg.data.assign("DCAHWSHBFDWQZWJMDLGDJQMAYFYFLHPIGRGKQUKTOTOEGSCIJMLETNWVNUYUTFVIJBQPEXTVNPYAAIGAYYP");

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
    msg.setTimeStamp(0.876421476975);
    msg.setSource(52241U);
    msg.setSourceEntity(236U);
    msg.setDestination(9763U);
    msg.setDestinationEntity(100U);
    msg.id.assign("CDINQBPFABTGLUQTGFDSAXGBQIAHYMDDGZHUUKCFRHACEQOODOEEXVYASVJAMWEGDJWRUSWTAKUXJIPVYZYJPXKPULTGMPOKELKBBCEWEWOCLAHEPCJLJYSOHFXAVHJ");
    msg.sensor_class.assign("HNKEFXYYMOLTTFIVJXRXOWNQSKBYZQKWMMMQDKLNRFIGAUBOOCUZDNVSYXLQMFWHPFINAOSFEAESVTHCAPQSHGGKJOTMVRHUIJRHWKCNATLCHVXGPBONXCQTPPMNZAIWUBZNHS");
    msg.lat = 0.230878894345;
    msg.lon = 0.536968485328;
    msg.alt = 0.896729691934;
    msg.heading = 0.29406896316;
    msg.data.assign("DUNQOCGRQMNSPKMUFYVBOIOMOMIXPCZGZBEAWQFZXWSNOGVPWAZEZNEYHYIEUWILXFXXVVRGYCDJCNRISSIJXLTHDFANJZPSXPSGHZONHZMEDKURLLCXSDOAREJBDHIUTKFWGO");

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
    msg.setTimeStamp(0.806968212829);
    msg.setSource(13429U);
    msg.setSourceEntity(88U);
    msg.setDestination(64532U);
    msg.setDestinationEntity(148U);
    msg.id.assign("YEWXBUWKUNBVIOELYGXKKWORMKASPWGFKFRUOHBJRTADESBWFZSFBRLVDRMOPMNIDJZSUQKMBTQLQRUCCSVITGPTNCQUQTMHEGNZFUFWDTXJCLOSRITLZYHDEVCIAECCZVFMYVPHHTMJJPLYFCDTGGQYBXAXHJLHWYOUVTHEVASUDPSOHVYKRPGUGDMAORXN");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("HFTKXXIYQOUOREVGGAZNKQOFTMABBJZHKDEHBVMMJZNYPDIMFPXRILWYSHJPIEJEUJSMODGWQIWUFQMOFCISBTJFVKTDRFIKBJKGDNRTYWTGZBPVCOBPQNAOACXLZQKZYYLCSZXQGEPSULAPAAMMUCRUGLUSTGCEPGHLISCENBDXKDHETDTVVOAEBVSRD");
    tmp_msg_0.feature_type = 148U;
    tmp_msg_0.rgb_red = 61U;
    tmp_msg_0.rgb_green = 80U;
    tmp_msg_0.rgb_blue = 141U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.735012752209;
    tmp_tmp_msg_0_0.lon = 0.236841914969;
    tmp_tmp_msg_0_0.alt = 0.714114898001;
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
    msg.setTimeStamp(0.496766541163);
    msg.setSource(50833U);
    msg.setSourceEntity(141U);
    msg.setDestination(28871U);
    msg.setDestinationEntity(1U);
    msg.id.assign("FJPCHQRNCECOCUMPQVZNBOQYBRDLLTZWHCZABEROVNYNYTKULIDGXMENWSJIRKHKXHEUYUVIEEJOIDQATSHZNJDZBALGMEACDASAOYJGZUIVJGCKXLOSJAOQZBJWRXMSNBPEHNFRZYVWMFWFIGGFVA");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("UVOVTLHBZUXCOLGRMCPNNXMNJOZZWVEFKZYUXPIFAILRDYBIFXRVLEWQHUYMTOWKNOCLJVBWDDOXAEAWVJQZUUBJFMLKDUKCAHMSXHHBPYEGYOSFGJMORJPGWLQTCLZBGTAEFEBZHIMFZQIPTCSPRQFWDOTGWYMHBGSIXISCJQEDPAFQKLDWYASUJXCTMDKHGJCGIRICIQTKJHRVPRSNRLBNAZDVBPSHXRMUZSTN");
    tmp_msg_0.feature_type = 233U;
    tmp_msg_0.rgb_red = 45U;
    tmp_msg_0.rgb_green = 227U;
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
    msg.setTimeStamp(0.790503779428);
    msg.setSource(42723U);
    msg.setSourceEntity(119U);
    msg.setDestination(59931U);
    msg.setDestinationEntity(210U);
    msg.id.assign("BSFFZNMBMKXJKVOEPHRGDFQHTYCNXELUSKAZYKUWKIGZECDNHASJACGX");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("WMEGRGMOWKEOQJVQKUPBFWDFHXEJAHDGMUIASXTKTZKAWAXNQCHYERZTZJZXSVBICVJAPGYSERIVQMIKKSCWTYRLOMHHCKNOCPZRDLSLDTAWPVAUCZYUHJFOEGBEHIUXHDNYAGYENIBELTOYANWQGFSPTFQCLRXWMWRJUAVHLZJXO");
    tmp_msg_0.feature_type = 238U;
    tmp_msg_0.rgb_red = 199U;
    tmp_msg_0.rgb_green = 51U;
    tmp_msg_0.rgb_blue = 13U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.636975175;
    tmp_tmp_msg_0_0.lon = 0.22035315129;
    tmp_tmp_msg_0_0.alt = 0.478478949471;
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
    msg.setTimeStamp(0.728284331565);
    msg.setSource(22881U);
    msg.setSourceEntity(58U);
    msg.setDestination(24047U);
    msg.setDestinationEntity(7U);
    msg.id.assign("PRIAIGTCPZVTRZULTTAHCJDRFRFKLGCMSVOTELCBSYJSKHWDRXULTGYMNYAUONLILEBXNKNJIAXZOQYYFWENUVAQJDLEXHYOKIHIXNJZPUPHYSEWDASZGSJQQLFKOHEHABJUAIDDZTUFEGMBWSXFKTBWUKMHXPBPGEQNGZLNPVPQDSWDVYOGJEFTMCHUFVCSWTMOQWCXCKBVNPPR");
    msg.feature_type = 32U;
    msg.rgb_red = 98U;
    msg.rgb_green = 52U;
    msg.rgb_blue = 118U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.571072721469;
    tmp_msg_0.lon = 0.811226537004;
    tmp_msg_0.alt = 0.507604356554;
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
    msg.setTimeStamp(0.0162666346377);
    msg.setSource(2147U);
    msg.setSourceEntity(45U);
    msg.setDestination(54255U);
    msg.setDestinationEntity(181U);
    msg.id.assign("JXRPURSLMOKJCAFNGEAVPHXKPYZRRBEZJQCAQESXCLUXWYHUQYXABDJPDADWGNWZFLKTMYQVMKSIGLTQQRTQJNOWNUCPBBHQGPFBHHDPUTSDVAWVOKNWGEZCHFVLEXIFE");
    msg.feature_type = 59U;
    msg.rgb_red = 167U;
    msg.rgb_green = 243U;
    msg.rgb_blue = 243U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.79231731757;
    tmp_msg_0.lon = 0.563764689829;
    tmp_msg_0.alt = 0.258631021898;
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
    msg.setTimeStamp(0.741572276495);
    msg.setSource(54469U);
    msg.setSourceEntity(89U);
    msg.setDestination(15237U);
    msg.setDestinationEntity(101U);
    msg.id.assign("CUXDUNEEAJTGJBFRCRWKTIODXHORMVNXJEAEMJLXLUAFJZOMICRSVTTAZYNVTHHGKQQHGWSQZJTFUEAYIVZPWBCZVBQLKMRDYRAWTOJLWPSKQYNTHVJIUNHXLNBHAGPHSMAFVLCIKOOCQFRNFGPABGTUIBDIWEKBKPFULRFOEIECCMDSWMPBXYQXXXZVYNUEIPCZGQLHMYONWWSTPMEODFWRZDDPLHILJUDPGVVBSUBDZ");
    msg.feature_type = 203U;
    msg.rgb_red = 207U;
    msg.rgb_green = 227U;
    msg.rgb_blue = 176U;

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
    msg.setTimeStamp(0.256898036587);
    msg.setSource(18799U);
    msg.setSourceEntity(84U);
    msg.setDestination(33519U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.504639515498;
    msg.lon = 0.681800878223;
    msg.alt = 0.752638890124;

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
    msg.setTimeStamp(0.893309970489);
    msg.setSource(20670U);
    msg.setSourceEntity(149U);
    msg.setDestination(39686U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.377589106164;
    msg.lon = 0.222463165179;
    msg.alt = 0.258062625327;

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
    msg.setTimeStamp(0.519455596697);
    msg.setSource(56147U);
    msg.setSourceEntity(90U);
    msg.setDestination(5374U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.463022614016;
    msg.lon = 0.534275664318;
    msg.alt = 0.323255820383;

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
    msg.setTimeStamp(0.649448475183);
    msg.setSource(8100U);
    msg.setSourceEntity(170U);
    msg.setDestination(24225U);
    msg.setDestinationEntity(196U);
    msg.type = 90U;
    msg.id.assign("QGXNPBFOPIOLTHNVFBCKPDQPGMDYRXUYOROXBIUGQAHJLWWDYUFDKKDZYTURHVJWOOMKRTSTMRRPAGNAYTBTFOWCLZMYZ");
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("ZXLFYZABFHVHORINIHMIUWAGHDXVAGAKBHEJFPCPESYTNJQWKFULGKZUFLJNPEPLHIIWFJYEGRRTIOLPEKKBRBNRTYGAWOXTCUFYZPMUWXAXHPBEJCCHTZYOQDQUBSUEECRERWJMZKOXFWJGSLONMLZMKJNMDXVHGQEQMRKTVGSXZIOYTTDDJSRVWYHKKZVCPPALQTSRBUVQTQANCCWSVONYXIS");
    tmp_msg_0.formation_name.assign("NEKLYFZHCWNEWMQLQCSJCWEVMGDCAPFKBNOKKXZSYOIXRJMMWUSNCAIZVETZQYFCEWQTADRGOTXIBNAVHQFYRWSLGITEXDAUFVPHRZMUCPHSCTSKFVVUOPASHJJROTTDPWGZQHLSLHJMXDHPBYKJALXSFFIVRZXPGNXWBIIKBUKXLUYSQZTERTQAOIIYDTKNAMDPOCP");
    tmp_msg_0.plan_id.assign("ACLHVMWIXOTIQFRSZCMQSHFBMWWWQQSYMTHXZEVPEDYRKMWZRDUROSOXNSBVAEXVAPHXPUOJIODNAKYTXGKOPULNOYTUETWMLZSHPSWHQZEABGOEXSHIIZTUEYOIYRQKLCCZDBQDFFFMBKDUDILJGMYRVQNVBCYTTJFGNNJKZLZVLTEGEOBZWCQGLKP");
    tmp_msg_0.description.assign("YWMJZUKVEILDVMTIAEJHTBZPTGPEUUVZLUYKDRFENWASAQPGAWMZFJIZBGJBVRCRMDGXMCOGBXUHKBIUPQNGHHOVMXTEWLWZDAZYOLIBTZJXSOSMRQRCQDCISOJWVNPJDKWQOHPFRWTSQKBVHHATRHBNZSLECYPWIHRFLGFXDXUXQEN");
    tmp_msg_0.leader_speed = 0.917148420834;
    tmp_msg_0.leader_bank_lim = 0.41609728479;
    tmp_msg_0.pos_sim_err_lim = 0.191164084828;
    tmp_msg_0.pos_sim_err_wrn = 0.524156362057;
    tmp_msg_0.pos_sim_err_timeout = 11113U;
    tmp_msg_0.converg_max = 0.47365610273;
    tmp_msg_0.converg_timeout = 41332U;
    tmp_msg_0.comms_timeout = 934U;
    tmp_msg_0.turb_lim = 0.129811913558;
    tmp_msg_0.custom.assign("GLSWYJTAGKFMOBYHNFJEZAVUZEDCYIWCZACBEXOWBUJMZRHKCOHIIFCDGRFQXCJCADFRJATUYXPDRTBEZYEMGLNDOJPMYUYFNXIXWMRKIMYUFNAJLGEIJPVXPSASPNHXSUSNQICGQAZXWOHHKVOOLSMVNBIHXGRPRWELHTOVQWHKLULBLMZVFTZDHWNEPEQZUCBOVGRMPQSKNDKUISJBFTCZLMGQTVLPXDQEVOABKFSQQTYTWVNS");
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
    msg.setTimeStamp(0.163417207206);
    msg.setSource(33498U);
    msg.setSourceEntity(125U);
    msg.setDestination(40679U);
    msg.setDestinationEntity(26U);
    msg.type = 21U;
    msg.id.assign("ZTPJZVNLAFFQCICSSAPUVHPQQEJBMAMSBOJNJWGCFWNGVAKRMLVLPOABOIXTAMBBCNZXPHMYKQZWPGMOAJJDWKUXIKIAYGRVQKYGLSAHVRJIYVIYQDGUYWHZKHWDUUCLJCEITHG");
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.357182250263;
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
    msg.setTimeStamp(0.426233835125);
    msg.setSource(20101U);
    msg.setSourceEntity(69U);
    msg.setDestination(37216U);
    msg.setDestinationEntity(35U);
    msg.type = 137U;
    msg.id.assign("BFODKVJHNAYPZFUMMWGSTVBAITILDMRREYPPAZLIIDYXTKSUGGJESGQQHGWFUGKRYWRPLTREOTMLPDHDDKCEEAWAPCGKFLHJBCYNOWSQSCUXLIONOCZDVNXAWQCAVLTKASRHYBXMQNBDMTRWFGPBNMOXRSQSGZTKIVBVRDKWLPCX");
    IMC::DissolvedOxygen tmp_msg_0;
    tmp_msg_0.value = 0.295632025218;
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
    msg.setTimeStamp(0.810112434121);
    msg.setSource(21498U);
    msg.setSourceEntity(164U);
    msg.setDestination(61154U);
    msg.setDestinationEntity(50U);
    msg.localname.assign("EQSSRCBQZSVWTIMSLMBOCPIPVKXGBDCPWAHNXCECNDMERTPHGTUHZDCLZLVCGISUYNLQOWKUGAFDWMWHJVABRVNGDWJFHQLNYKMQPLYWLRCODBKEXDNXUEUJQESSUZQAHTRUFQBJPMRYEKMGHONPJYXSBIZFKIFQTBGBZTAAGUJOCIUGHDWFJSTIXYJJZALNQUXWNRFHZVLGMOHRFTFAKLZIZTRXVRKVYCPOODMOAKWMIOPEYYYNFIVVBXTDE");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("TADCCEKFEKZGGQEPWYUSCZQL");
    tmp_msg_0.sys_type = 132U;
    tmp_msg_0.owner = 13409U;
    tmp_msg_0.lat = 0.945875433089;
    tmp_msg_0.lon = 0.662553772295;
    tmp_msg_0.height = 0.746590847789;
    tmp_msg_0.services.assign("SFUZCONXPLMDPDSWQNLPZSMFDTRCTHRPEIZKJWAXAXJEITAUYJAJWWWVSDMECWEBNOXSEYCVWXXGSBTYQAXTIVLQQSFYFCDOMNJJIBMUZLNVHGBKTNWYQTHDZPKAIUGPRHUJHCXGPIHROFAWLVRZBNVPPHJGICUCFMHRODKLKSKZBYIEEKBVGNFLQZTRTGLLFNUVRFGEQQYXHJEBAIDMBXOGVVWGKRYTKUHUPKLRQDZNMZCSFJUDASEM");
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
    msg.setTimeStamp(0.449532972244);
    msg.setSource(16860U);
    msg.setSourceEntity(51U);
    msg.setDestination(29490U);
    msg.setDestinationEntity(34U);
    msg.localname.assign("JFLBVEJNTEAJLGEWRDRUEKDHDWTARDYZSOXQJNPQOCOBUQSVVFIDCLLIPWDFRKOZYHVRSMAAEZQZTYUUXAHYCBVCAPMFAWRXCKMOPUCAJCQFSBZIIJINYLHDLYTKITKNHLXBOUGFGHUWTGZOFGORKBBEKVMNQQXVSGVPLNKBNHPGKEYTVUTVJEBXA");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("BBPZMFMTJRFCRGBACYTTDOXNTVE");
    tmp_msg_0.sys_type = 42U;
    tmp_msg_0.owner = 41086U;
    tmp_msg_0.lat = 0.03167177213;
    tmp_msg_0.lon = 0.869887307516;
    tmp_msg_0.height = 0.477175559949;
    tmp_msg_0.services.assign("AMEHRRJLGAQANTJGMDIDMBXVAEPCWQTFUGXIONRVXDLPKWNSYEMYFGTJSF");
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
    msg.setTimeStamp(0.430406829305);
    msg.setSource(13847U);
    msg.setSourceEntity(237U);
    msg.setDestination(63263U);
    msg.setDestinationEntity(202U);
    msg.localname.assign("XKDHRBLAJZXMPTBEWAUMDTBDMYRMRULSIORCMLQKIKJCSVBKAAQVQATVNABRHHBKCNNWYCJDGFFYEEOHPPNCRRSRNGGTUSSVZMUIJOHJCDYGGLSLIZDFPXZJVIOGSERUONXGKEBIYZXMYDJNLWZAVUAVWNTFKPNPUYXPKSAVGLUBFIXHWWIQZLZWAEVOGJSEUVFKGZID");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("UQLEOIXFGJZPKEHYNAOWBVBILVWYDTHJFZKBHAIVHADLVDBOAXKOXQYZFGXDUTKWDPMSTONBWMWL");
    tmp_msg_0.sys_type = 62U;
    tmp_msg_0.owner = 42619U;
    tmp_msg_0.lat = 0.155354207325;
    tmp_msg_0.lon = 0.811756325824;
    tmp_msg_0.height = 0.218728821514;
    tmp_msg_0.services.assign("CODAAWEQLDMTLSERHVUDHRIPXCYFRMVSFPTZQPCUBIPIOFSZRJJJFZJGIWYHULAQQHCWZJDTCJISVBWYQUMORHEMAEN");
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
    msg.setTimeStamp(0.58273940571);
    msg.setSource(637U);
    msg.setSourceEntity(35U);
    msg.setDestination(33650U);
    msg.setDestinationEntity(179U);
    msg.timeline.assign("BUZFUURUDLNPJVATVXFCXWXKQNMOOUKCJALAOLRGTPLSVFGTVPHCPPDXPMEOTLFLPHXCTSGYBCBSJVCYIJKICWVNZEYAOAZLWSMMXHXWZJHSOJCRQSKESHVAYBHYSQMEAXBTYIOFDAUIJAHNONBXLOUEQUMWFKINEYBKGPRRFQTLGDBYGDUHYWWHRQQVKZVIYEZXAIZPDRSMRWTZQDVQGUIIKWP");
    msg.predicate.assign("MBKJEKMEAHRGAJUWBRVJWEXXNDCCAZWXRNVOPVOJIIKXLELMGKNFPNHUQUZSIBQNGWBDBQATHRDULLTFCMYUGLPJABAUZVTYKCVUSYZSSQOPFRLQNHLLPIKCEAZRWFTHPIRFDWNYSVXMRTHWXZPWIQCYIHCBFYADVLUOKNZYJQWCEMETERBSOJXPJVZOTCDJYRVPHHKEHVLMTBMPZOQO");
    msg.attributes.assign("JEILJTRELYSRPMUWTGIHCQJHHPKXBIPPQAOFEEXSTTVQIUDTYSHDVZTVCINLJWWHCDFLUGKKEXHUWRCXOVHZCRDBWUDQYMZAEIAVLLXIWDDKPNGJGJMEBVIUNVVGNAQXZIMEHLVAYUPGCSERDYMESQFWJLROUXCMKWMPHTRZZOKCYN");

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
    msg.setTimeStamp(0.0811035335265);
    msg.setSource(48539U);
    msg.setSourceEntity(6U);
    msg.setDestination(15102U);
    msg.setDestinationEntity(215U);
    msg.timeline.assign("NBSPZPOIXKAJYIRQHAKYTMOMQGJSCQMUHXXQTQQCUECOGINJLEZCYSVYNZOYFULOMZKLDORZYALJMFIWEVMTDTBHLZXSMXWDCFTYFTRHOJKTJAXVHMEWEEAQDXNBTFKQSCHIPLOBEGCRSERJNYM");
    msg.predicate.assign("YKHERZBVMSFJTXCGTGPCOHKSXDFYQNRTPIAHFXRLUKXPNDNOVTMHIUNSOQGDCDBYJWWUSTQJPDXOQLJBPYMUIATGFJURBZUWEHTLGYSBYCPMZCVSZADIQUAIEVSKWMMVVETNRAWKYRKUPUS");
    msg.attributes.assign("JKIFICCVQKOPWRCYFGMPVDKPSCEQUIDPMVLORBJLNNGNLTMPOYYBILDJIFQHZUZEIEXUAKMSCSPKFTLNRPCEYZDGNZGLIKHBZMRZEIEOMJ");

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
    msg.setTimeStamp(0.322722196531);
    msg.setSource(36417U);
    msg.setSourceEntity(185U);
    msg.setDestination(4326U);
    msg.setDestinationEntity(29U);
    msg.timeline.assign("PMJNMRDHXESKSYXKIXBGIFEPCIGURTWOXWBXZUBMYVLNQQNUHLWQYPPGGQGCWZSDJFHWGZLNBOOLZYQAOGCTDZCFULBRFRHFPAAJSKRCEKDKVYWICAMMKUZIVC");
    msg.predicate.assign("PGVHZQQKLUVFRERENRIYCJXQPBDDAFIZVSPRUGTTEYCLBSPFONPVEFIGZOCHZWYKOSSMMDZYFWVSTKLHHZDBHWZNDLJXOYSHWCTNOULCLTGVXKGDUFMMZMJQHAIIMDCJYBQIRSKIJWYYNQJPTFAXNJEADNPW");
    msg.attributes.assign("SVPZCPNDGJGJSZUFBGMUOQPAF");

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
    msg.setTimeStamp(0.224590020637);
    msg.setSource(11266U);
    msg.setSourceEntity(146U);
    msg.setDestination(12015U);
    msg.setDestinationEntity(59U);
    msg.command = 114U;
    msg.goal_id.assign("OFIMVBPDYCZPZQEOHFGKIGUNVPXUEDXMVUCUWDGTTJV");
    msg.goal_xml.assign("HMDLHKAPPKTEVKXOSRYM");

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
    msg.setTimeStamp(0.942364217588);
    msg.setSource(38340U);
    msg.setSourceEntity(65U);
    msg.setDestination(39202U);
    msg.setDestinationEntity(91U);
    msg.command = 64U;
    msg.goal_id.assign("EYVJPMLVLRRAMYHGHHZDDOXGMDOGUOPZNASUYQWGSVOLCZNKCQHLTUSHEMEMFBSPRGWNZLRSINFEZXUKZOCUDICJXOCBVRAQDMVICXALZEUKAZZMLQSJRNGQNWIXXWSJWITRFVOYGBINUTDTFHQSGKKRFQIBXDVEWVQKIWAUPYFFJABFMHWOEPDQABY");
    msg.goal_xml.assign("VXZXAJXBNBZNLICDQYKLASKQUDLERDYFNNOICZATMOKAOPDYQHOJZIUJZWEEHDNWKEUBBQWPLGDOVGTTSMGTEKURZL");

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
    msg.setTimeStamp(0.564305356392);
    msg.setSource(29069U);
    msg.setSourceEntity(112U);
    msg.setDestination(57766U);
    msg.setDestinationEntity(236U);
    msg.command = 14U;
    msg.goal_id.assign("TBXQPEBMHEEOSKLWPJRFIHWAUQCRVHZTRQAPRNGITDCXLHTWNLQYZLTZKMJROLGNLYASBLGTGMJPZBNZHTZXRFTDUQRJXJXYVWQBIOOMFDOFBWBRHYXRVPFVXSYTYQQMFKLJQKGWOFXYTBYCZSWCWUNKEEYDOGGEJGOIIMEFPCHPCVAFMJZPFCNIBOGLAVWCVVSNSXODSQDRDZSXUEAVDUBGAHHKSJAVCSDAKMHMUIUMI");
    msg.goal_xml.assign("TAEGJFWOHHNWVCVQGMNITMTIVMRGZCLPHFOSEWHDSTPNSOXWISLAMGLQH");

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
    msg.setTimeStamp(0.942920102729);
    msg.setSource(57220U);
    msg.setSourceEntity(27U);
    msg.setDestination(681U);
    msg.setDestinationEntity(76U);
    msg.op = 89U;
    msg.goal_id.assign("KQNRLMQHGZKHWNPPPELYKFJUODLRCQYGBVZKIBJOIGXMWSULTRUCYBLFFFPYDUNJVECAGYPIDMNIDXBWVSSHNTOZZKJAEVPJSWZWENHCVGQLJFDCPHOWOZSTUGHXNGAMXEIOTLQYVYXWPFOBWIMGCHMZQUZJRUFADBQTSDWIJNKIDICDCFRETANVMATIBWQGBZRLLUYRVEJTYAXUHJOZACSFMBMNKRRKKQVKBQSPLUCMOGXFXEASTSX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CBKRTLTYQUOAMYIOXMZQBOPHIOYPPGBAJDPJHPBHMRIAPLYTLGRUIUVED");
    tmp_msg_0.predicate.assign("ULFTMDKSFLGCURIRJOUSXUOBIBABWKMKIUMADAMUNZZXTEIWTEKBJNJDQMHGLKXDJWXEWTTNYYOCYGSLDUDZASWXBMYQPTCLHTSRJ");
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
    msg.setTimeStamp(0.949438963567);
    msg.setSource(60454U);
    msg.setSourceEntity(135U);
    msg.setDestination(25608U);
    msg.setDestinationEntity(133U);
    msg.op = 143U;
    msg.goal_id.assign("LSESEIMOBMAKOROHQHJDSUAZGZIMYUQICYXDWUYGVUBNLMZWLLGYAHPXAFMJBHSQATXMRBWOHRAVAPBTFXEQEPVWNIWZLQPFOHKCKSOWJGDGGHUIRNAJQVFGNUPFUJIHDCDZGOWMVEDCTSILMJPGAWFDKTCJNKRZWLPNYSTDYGEBMSUFDEQNVVFHRRKKTRVKTQX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ESQLCZKTDAOMLOJXYLCOWCPNQBPPVPGPNXPHBZVHCARHJINADOEBWUDYGFHVZHOBUQGKIKRWSDAIXDSKYFITLMZNOJCFTLRMBUWLYMXUEVUHQJPDMRENRVHGSJNUAAWMDQPJKDEELKCFXYGTUBKYATSFVFYHGRWZVRICDWZSROWYFWEMYSAHLSVQMQNESSTFTHZKJLQPVOEFRNFXXQXTUMEJIKWBCCITGN");
    tmp_msg_0.predicate.assign("GNJAYGIFNDHXPGRVGKBNNUAKQYNRQBHVDALZDCJFKTDVMQXVIZUZCBTGHFPBSVLYTCDFYZSVLEVQHGJLICIHWRQ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HWWYQUZELNHVNZNHMUMCSNVSBOGPJAELGWRUPJEJKDPZLNEMOTEVKFTZBIUUALNIEXTKCESOJGZAFONSWZQIDSRRPWACPPRKJVRIYYAKYAPKEMBNXDVCILRPJUKPYNHJCTXCIQYAAVFGRKMYS");
    tmp_tmp_msg_0_0.attr_type = 210U;
    tmp_tmp_msg_0_0.min.assign("MFHCQNUYOLPVEATOIRDVRCKFQ");
    tmp_tmp_msg_0_0.max.assign("SWKPELJNYSFRGLWPRNTVFFHQBOZXJDTACQIEVXACHHZUIEKRTIAFWDRDYOI");
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
    msg.setTimeStamp(0.214925294547);
    msg.setSource(49763U);
    msg.setSourceEntity(82U);
    msg.setDestination(21075U);
    msg.setDestinationEntity(83U);
    msg.op = 34U;
    msg.goal_id.assign("JLDEXOZFWNRQQCPSZWXUAJUFQZBTRWERFHMJZLWTJOIRGIEEKKLBLKHQINZSSVVAUZEWNCPYJLYXLOPGJDTKPEAIPYABVHJQVAVNGIWDNLTWCOJXNHXVMCBSDGMBGHRBADDIVGPKRCHEUTQCYZPXOPNWSOFOJYAAEMGSGUSMZKFGIWHOSARUHNNKZQGFOFMMTLWUDEIRSQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GVPSIMJWDDOULABKFPNUDWIJX");
    tmp_msg_0.predicate.assign("HJAOICTRXOYULXRTSGSKGHYSDRTNPGEIMPXTZPVKSSHDYOZZYJEUORYWNQLVHFCQIPKJTEYEXWFELDGSWPPWAQUANDVDNAIXHUCSFWWIUNCCCVVOQLLFHIHRBFAMMBBQPEWGQPCDPFZHRLYKTWRAXQZIKODOAOQGCVSPOAUMKFVXMTYRAYBXRZXFBHSOZFEDJXDEMMJWYBUBBJ");
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
    msg.setTimeStamp(0.404025552956);
    msg.setSource(26445U);
    msg.setSourceEntity(38U);
    msg.setDestination(61196U);
    msg.setDestinationEntity(153U);
    msg.name.assign("QJTGVQBWUYKPTPHJFCJDYECMBEAYZPYFJLWINXHRAHIGMFOOXXENDUCRHVVYJRVEFDMREKCOYDSUFZZSEDRAZUSFAGNNSYPPNTXPJXISGVPLMWVPWNOTWMMTHFTMVJMBHUYWZKDBRGQGIKXRHMOCRVJQHOOAKHBKQOJISRRCPAQHKDWXZTLEBFNXAQGBXUUNPNSILCZEWQAUZSWSUSTCLDDBLBLINCAIEODGOYVTBKQVCFTZUAIEFJW");
    msg.attr_type = 57U;
    msg.min.assign("JXTISMEFYPLEAHHQCQGCCBUFRYZXLEBAPBKXEFGHRWZWURYRXSFDTGPELVTPDXXJQVOJKSWCTWIRPZWJTFNNMEOUARDWOECVRSLMXTNAPDCBPITAGUNKCLSHZLWFACYVUFQQVRDDOKHOVARRHBPEGYYZYLQKQUNTEBQITSGJVDKJSKMJKXICDDBNYZUBPTMDZCWWSSMIUAVZXKLJIGVWHHKHXFLNQSAMJMI");
    msg.max.assign("REPMVJMTMQLTBWBETVIJKNKTIZWNAJSOSPPVYRMEHHSBYXCCTWANHEADNPVEIBVKPFNQEWWVNXYNFSGLXKXP");

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
    msg.setTimeStamp(0.408237506042);
    msg.setSource(45680U);
    msg.setSourceEntity(233U);
    msg.setDestination(39024U);
    msg.setDestinationEntity(149U);
    msg.name.assign("AYBXRKYBBYNVGTVCUVUMJADVHNQWHFGINCNEYXVFQPSUQEXHNGDQZJOGICSSPL");
    msg.attr_type = 253U;
    msg.min.assign("CNVIRNXYAOVYLKSGOMEUOWRUNCWCFZEVDHQDCPWFIBEUTOGPGZNJYORRVLGOAUSNJWDJAKNUVWILMUBKSOQLRNXJGTKUVSTZLQLTXSZJJXHNRYZTAGHKKMFFLFQI");
    msg.max.assign("OAAABEDIHZQDKVPUTTZBISLAPWNEBGTJKMFPAVJZJLCFGVGONBDXFRLHTVSOHLDMWATVKURQOEYUXIJYMGEIQOMIHAGMZAUJSKYPYNNIDFRCTGCWCDZENKHCFBKXZRRBDQTIDXBQISCEJRZMTKLNBUWMX");

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
    msg.setTimeStamp(0.257379808636);
    msg.setSource(3599U);
    msg.setSourceEntity(84U);
    msg.setDestination(29061U);
    msg.setDestinationEntity(177U);
    msg.name.assign("BSNPOCWKOUQCUEECPIVGPISSFVBZLAPQVHRAWZSJYJNADMJSHCFJMPBGJRDX");
    msg.attr_type = 24U;
    msg.min.assign("NHVVDWADLHXQSZFIJKNOUYMXPECMXDPGTRFUMREYAEYZTHJOTIUZJUVETYIYICCZBNNDFKKOIS");
    msg.max.assign("RTQLFMIVHKLRYWYWVARVUZAHENXXPNOZERZASKUVPIKTKPMIWFMYMSVUZFBEBYGWKMVEDHB");

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
    msg.setTimeStamp(0.00586698667413);
    msg.setSource(33007U);
    msg.setSourceEntity(140U);
    msg.setDestination(7818U);
    msg.setDestinationEntity(93U);
    msg.timeline.assign("BVSODDUTFOOHVJXKBTSJDLRYQYRISYLLRWCDRHFMAYUPHQYOWIKIURLZQACNKERGMQKFEAWXCCEIFYTUBIVLZZFNQMYAJQKHJKXBMODFHESCEPBGWJMKRLCYIVFDLKDEUBYWGPTUXAEVCTXRIPVCNIOFZSAGCBXABPXZNBPUNAXNVIPMAFPCVMYINVOZSSPZALHZRHJTNQGWNKDLTHEPOSSJWZBWJJGOXEMDFKOUGGWHUQLXMMUQDJ");
    msg.predicate.assign("BFXGIXQMCGFOAFZBCBMPFWHCIOIQOJYHJLAISKDVSLZTWLXLKHFEHEGJAAKWTDRCUTOZCFQYPPPYHUBXKNNEXMVOTQUFTZEMYSXLSPRNFKIRLNUHYDWXXNUORCEQWCKYSLZGRAELROVTFPMBPAJOKZTMTUDTYJHOALTIZEEJRKPZISMNGYBOAGAJYYAQRZMBCWIH");

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
    msg.setTimeStamp(0.932928715936);
    msg.setSource(46131U);
    msg.setSourceEntity(245U);
    msg.setDestination(62547U);
    msg.setDestinationEntity(157U);
    msg.timeline.assign("KLHJAHLBAPWZLYLFZGSCVTLZSTSHIEADPATMDUTOBVYNRIHOAQPKXKZXLUQDCSNUXBAEKJWEWQTYTEECGFVCOBOGHFZXFLJUNGGEURRMJJELIJCDAFGMBNKYKCOTHNPCRSTMOFXCPDWYFRASMPDPQBVRRUIUUZGQRKROHVIPYPWXUBFOVHJJFTZESIQWXSZDVNDDQBSBKNJFQYRVXBPNOQVKWHXWMLGITKMICLMXIWNZZYG");
    msg.predicate.assign("MFQWGJYMVEEWGRDOCYRQQEXLSDXDYVIBVZWPPQFDHGUUHBJRDLFHRWXKTFAJVNIUWIGESSIJIOXNCJELKKMTFBJYBMVALSNCRVQSOYZOBGYZHRJCTRBEUHVGKUMORKKHYIKUNXAHZNFDSMNPSPPTHVLFSOHZYWPEJOFZPUAOXQJBMIYUQSVXTDOFCQCBTYDZZWSAMTAGNNVJPEIDFLLLEPMGZBUTNZG");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("HKVJUQETDQWXGFDVECAYIAGZXYXAEUWTLRQTWHCCJOZVMXUEKXADTJVDDNIOCHTZEMPPOMHPBA");
    tmp_msg_0.attr_type = 88U;
    tmp_msg_0.min.assign("XNSXIYZPALIWXBJSEIUYFBNWNCIVRPVSAWIUPDXSYDXLRTZLUWKMGDGMEZTQAOLLQRWFOEHYRPCVUURXQVZKTEOBFVGGOMUXVYCNOALOTAKOWYNRQVOPTQYDXUJEUJBCLFPOMBIUGSLKCXHMELKHTMZHRJEHFPEEJGSHPZIHYHBNZDFYFVNSAVALHGSMQDPAVIOCFBTYKMFKJTAQDRICGQXKWNFKZPIDWWJJJSCCCUTBZBQHGZKD");
    tmp_msg_0.max.assign("TCYDKGFNSPASASOOIZKTNJOYZJOHSNYGJELTZIQZGYUZIMLFEXZFWQVMZQIFPCOPSTLSXHPRNXMGWCSOYVIRQGRUUVSGNJHBQKCHGAFNDAEFIKJBTVHWJWEGKEWBYEXXRMWHBVCXCSQCRJEQGBECUZDWQAOKPMTDIALDKYTXBDTMBHQVMVHQDRNAKPXJ");
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
    msg.setTimeStamp(0.535325393641);
    msg.setSource(41851U);
    msg.setSourceEntity(238U);
    msg.setDestination(64292U);
    msg.setDestinationEntity(244U);
    msg.timeline.assign("GTKCHFGVBCGBTOXRNYFNWSZMFVGSDBDBNEWWMWORVJHADZUCIVJKQBEYHLEWJXVAUROINJGMMNWEIIDIZEAZNCKJDVPOQAZHOPOYXDZHXDOSJCLJVZQOEXMAGFKCUXREHEV");
    msg.predicate.assign("QKFXKVCCYTJSFAGIZJVQCTKLXZBOWAAFIUHSBBNQXQZLFCDBXATYMJVNWIBKWEHODEQSOWDFLSUVKUEPRHKRFTSGETGLJRVOCVXUHDFYWVHMXJGTRRUAGMPDQOVLAUYMCGWPHOYQNBQUEWDAZLTFLVJGIIRMCYSEQBXUBV");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("BBQMXMMHOSOWGVCFSLVUSQVRLEOYQTVJWMCJQATSPHGJVUAMZIMLUWIDNBSUPJBFCYQUCHYDFEYAAKGRBFGTTNFNUCSHFLIKNYOGEQLZRGFVZLMUEIJBNWHKGZYDJAZQKCIZDKLYHDDKPUWJIBKSWWBMCONKUMOFIGITEWPSTAJVRJEKZXXEJPQCRPEWZPPQETPKXIQLVBTZPDHTAWROBLRXDSOHOGMXDIXYRRGSOEHFYAZXUYCHNRNVLA");
    tmp_msg_0.attr_type = 89U;
    tmp_msg_0.min.assign("FOCELIGJJULZWGKGVHOJYJQERXWVHGRMNHONAGPUDPPVKKFCMEVXUDMVFYTZPQL");
    tmp_msg_0.max.assign("GTHTVEGWQDKOLKOYPHLWRPXNKYWZDFEEYITVZXWYVHVJACRKSAWWLGAFHBNVCUEDVHLRAHSSREGEIEIPAVMNRQFTWHYRMBLWYVZATAGYJTSKBMMYRXNSCPYSLGZHZJACMFRZCFUCAOFOXMDQPLFTGBBIKZSWXUBPNJIGUIHHKLBVNZRISDDJCOLJPXLJQXMQUNQOPSRIUBXUZYXFQDCEMKUNTJZKTDVGXEOUIBJMGWQAOFCEQ");
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
    msg.setTimeStamp(0.957346965862);
    msg.setSource(59176U);
    msg.setSourceEntity(217U);
    msg.setDestination(61645U);
    msg.setDestinationEntity(83U);
    msg.reactor.assign("HYVFKSUOVLRWIGPMNDAYSJAAFJGIEWQTRPWZHDEFYQZRDLVNHEOQLBICHXLNTNXTPGSZABVTLRGZVMASAFETFTRUMWCPSLMKKBJJGYUKQCJUBYFFEBWPYVCEOIFAQKWXPBIMZAEWSXUQISVMJOPYUVCYHENDKJUTDKWXPYKFOMNWBCQXOKPXUSQUBLE");

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
    msg.setTimeStamp(0.00841654931083);
    msg.setSource(32010U);
    msg.setSourceEntity(30U);
    msg.setDestination(38250U);
    msg.setDestinationEntity(77U);
    msg.reactor.assign("EGQFACVJLYAUTBLAURUBZJOMHEYOVXLCDJILSGAHTITVEFDEWONIVYIPYHKVNXRCFZQDTLMAJNNSRQXDCRLDMWIGJFWWACTZCYQKEZHBABEGWUXNQTCJGVFRULEYPUIHKUPGLMSKCPSNIZOWHOSSNKQVHRPVZDODRXUAKRQZSBEURWNGPTSHKWNMXCHXEFVHMIGJTFKBSKCKYDYZ");

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
    msg.setTimeStamp(0.101074656016);
    msg.setSource(45499U);
    msg.setSourceEntity(21U);
    msg.setDestination(46609U);
    msg.setDestinationEntity(57U);
    msg.reactor.assign("BRGQAXPNISVLLFNDJYFUYXEPLBTVPYVZWRWKKRFMTFMWGOCGGCJANTHJBUBGQOZHGUVHVKHOLJQYGEZSJNOCRNCSDQPAHWMJFDWDDZTAHIBXMYKAY");

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
    msg.setTimeStamp(0.213643556058);
    msg.setSource(16202U);
    msg.setSourceEntity(193U);
    msg.setDestination(58778U);
    msg.setDestinationEntity(151U);
    msg.topic.assign("AFZSQEGEBQEMVISIKZBSGCZZDYRIDQJFGGXGOBBTOLWQTEHQFZKIPDGMOARIVUQYOXNMJWJYUJWRGAGPDDNLKFKRJNJYXTWIULOVVYFNTZLKTPMRAWUINJYQHBXJQGTCNVSACFWEVAMUOW");
    msg.data.assign("QADUUFPBYBQATSKWFRXWBPYSJDNEOAJDNLYYGHHRBECOAFBYHATSLXFIKMLMNDMHFWMGONMEPOTXISMKXTZOGEHMWKYUMIZFQDOWUBLMGYLCNLTLPSKW");

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
    msg.setTimeStamp(0.862891714904);
    msg.setSource(45389U);
    msg.setSourceEntity(50U);
    msg.setDestination(50993U);
    msg.setDestinationEntity(187U);
    msg.topic.assign("LFILEBMNBIZELJNPSMPRBAHXRMVYEMUPUHKQYALTHXOHSZJVZDIIGWOKFKBKJUCWUSBJNRNGHQCBZVLKYINSFOHKQYUSTCCGWUQLVRXZSXKRPGKLFFELFEGUWXFTVMYOHO");
    msg.data.assign("GPXWRYSGRBPCDXZSKYMJHHHTOYBHDVGWEGDMORIFYMHAHTBJZAGIEIIGPTYLUEYIFOUUZWUEQQLDKIVJTXINTXVCOQOQADNNLMVHKZKRAAJMWMCGQUWGEVYCFJYNRLPAWECGDMDMUAPLCCTJKMSFJSLXLWRNKOXOOXCSEQGZSFFVYZNEQPTSLH");

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
    msg.setTimeStamp(0.215855757675);
    msg.setSource(27782U);
    msg.setSourceEntity(146U);
    msg.setDestination(20130U);
    msg.setDestinationEntity(95U);
    msg.topic.assign("JTBSUQYIVWDPMDTSMVVLMNFKDOEXVIFQJZVHDFLEBGNCBOUAROZNMASWXXBIMOSUXVZSMXQOCPTSPSQYLZWCEXOTKGHNJUEGEXYVBCLFAAHZQJHWKTJFYZPFKPMITHDWYOABZEWNFGZQQTNJGLBTVSNPJKKLVMJCAZYHWIXVUBOCXIECRCQ");
    msg.data.assign("TERULOXRDTJBHAIQHZRFVCZOARDCDKDTUEBOQOXOPIKFTWEZMCUVUXLSPQWUUBGCZKHYVFBUXXEADRENMSDCIINPORZMYKKBPOMWJVAQHKACPRDAINQHBWWF");

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
    msg.setTimeStamp(0.249317825185);
    msg.setSource(11179U);
    msg.setSourceEntity(225U);
    msg.setDestination(41967U);
    msg.setDestinationEntity(69U);
    msg.frameid = 225U;
    const char tmp_msg_0[] = {20, 37, 67, 6, 76, 24, 51, 90, 107, -83, -28, -60, -61, -39, -65, -62, -69, -80, -63, 117, -62, -29, 30, -114, 35, -104, 95, 105, -13, 9, 8, -83, 48, -26, -8, 6, 105, 119, 19, 1, 86, -95, -86, 34, -95, -48, -119, 61, 122, 62, 27, -5, -93, 40, -113, 106, 26, 106, 49, -52, 104, -127, 111, 94, 27, -92, -11, 106, -38, 38, 5, 44, -111, -66, 18, -90, 25, -36, 17, 20, -66, 116, -93, 5, -22, 19, 94, -57, -109, 79, 23, 49, 81, 79, 41, 106, -26, -101, -63, 59, 28, -35, 32, 105, 95, -60, -52, -60, -24, 51, -42, -94, -72, 67, 29, -1, -107, -114, 14, 38, 90, -114, 118, 57, 53, 106, 40, -20, 42, -62, -63, -51, 126, 49, -126, -30, 110, -48, 66, -124, -22, 73, 20, -101, -21, -11, -37, -25, -72, 16, -16, -68, -75, -105, 41, 22, 97, -37, 76, -122, -28, -86, 125, -3, 97, 116, 2, 73, -45};
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
    msg.setTimeStamp(0.0783385722392);
    msg.setSource(18758U);
    msg.setSourceEntity(232U);
    msg.setDestination(30217U);
    msg.setDestinationEntity(5U);
    msg.frameid = 240U;
    const char tmp_msg_0[] = {-124, -96, 44, -93, -87, -110, -110, -42, 20, 89, 50, -52, -29, 18, 90, 54, -51, 33, -52, -50, 66, 44, 95, -117, -33, 105, -83, -67, 79, -103, -114, 78, 14, -48, -15, 111, -124, -88, 124, -37, -57, -85, -102, 73, 57, 10, -10, -84, -76, 107, 101, 11, -21, 65, 2, 65, 104, 38, -14, -59, -119, -59, -19, -72, 98};
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
    msg.setTimeStamp(0.754268100799);
    msg.setSource(60287U);
    msg.setSourceEntity(198U);
    msg.setDestination(30163U);
    msg.setDestinationEntity(38U);
    msg.frameid = 212U;
    const char tmp_msg_0[] = {-30, 84, 126, 94, 103, -24, -14, -99, 87, 55, 59, 20, -81, -122, -121, -111, -82, 93, -70, -3, -60, 115, 56, 43, 10, 17, -122, -33, -98, -122, -20, 71, -28, 32, -117, -39, -4, 7, -21, 56, 79, 56, 0, 97, 10, 4, -32, -12, -83, -111, 99, -112, -79, 75, 38, 32, -87, 9, -9, -69, -68, -64, -118, 1, 81, 49, -98, 12, -108, -119, -124, 113, 57, -126, 26, -105, 93, 20, -3, 58, 123, -24, 93, 56, -110, -77, 81, 104, 110, 90, 92, -22, 14, -99, -119, 124, -51, 26, -34, -38, 41, 60, 46, 53, 46, 40, 50, -104, -20, -114, 97, -20, 6, 11, -127, -117, 110, 116, -57, -67, 18, 52, 5, 68, -35, 40, 86, -6, -2, -91, 26, -29, 66, 61, -25, 85, -109, 74, 16, 105, 39, 64, 13, -77, 49, 3, 27, 66, 74, -127, 16, -9, 101, 40, -18, -35, -43, 124, 29, -92, 33, -28, 48, 6, 47, 106, 75, -65, -92, 37, -53, -81, -126, -65, -103, 34, -65, 63, -17, -116, 2, -76, -25, 113, -41, -95, -114, -121, -75, 67, 44, 45, 85, 58, -48, -38, -25, -82, 19, 37, 80, -52, -15, -40, -43, 27, 91, -65, -118, 40, 31, 104, 103, 111, 101, 97, -79, -128, -9, 9, 0, 110, -65, 38, 83, -45, 70, -9, 81, 79, 113, -84, -39, 37, -19, -10, 75, 47, -86, -69, 111, -127, 85};
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
    msg.setTimeStamp(0.60668521011);
    msg.setSource(34865U);
    msg.setSourceEntity(29U);
    msg.setDestination(48152U);
    msg.setDestinationEntity(102U);
    msg.fps = 189U;
    msg.quality = 42U;
    msg.reps = 170U;
    msg.tsize = 232U;

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
    msg.setTimeStamp(0.944667708774);
    msg.setSource(1502U);
    msg.setSourceEntity(176U);
    msg.setDestination(34983U);
    msg.setDestinationEntity(224U);
    msg.fps = 2U;
    msg.quality = 254U;
    msg.reps = 47U;
    msg.tsize = 15U;

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
    msg.setTimeStamp(0.832617886219);
    msg.setSource(16551U);
    msg.setSourceEntity(193U);
    msg.setDestination(17289U);
    msg.setDestinationEntity(0U);
    msg.fps = 2U;
    msg.quality = 243U;
    msg.reps = 51U;
    msg.tsize = 41U;

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
    msg.setTimeStamp(0.354735407824);
    msg.setSource(62340U);
    msg.setSourceEntity(45U);
    msg.setDestination(28740U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.753095300803;
    msg.lon = 0.411563863;
    msg.depth = 164U;
    msg.speed = 0.143133454829;
    msg.psi = 0.907354141004;

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
    msg.setTimeStamp(0.839989693502);
    msg.setSource(6260U);
    msg.setSourceEntity(219U);
    msg.setDestination(31250U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.838253160162;
    msg.lon = 0.978607115414;
    msg.depth = 81U;
    msg.speed = 0.928262187229;
    msg.psi = 0.348248826154;

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
    msg.setTimeStamp(0.928352814579);
    msg.setSource(6389U);
    msg.setSourceEntity(211U);
    msg.setDestination(8440U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.746501739655;
    msg.lon = 0.544245930921;
    msg.depth = 83U;
    msg.speed = 0.201409891154;
    msg.psi = 0.193102790884;

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
    msg.setTimeStamp(0.185410631033);
    msg.setSource(42177U);
    msg.setSourceEntity(97U);
    msg.setDestination(27458U);
    msg.setDestinationEntity(8U);
    msg.label.assign("OYLPTUBSIAXSDZNDGGHJBGOEDADPQPARUZMJGVVZNTFQMOKOKXRFPVVXUPQZACZUKFJLEHBBGLQTRSCRKICQKHZJISPYDBWTBWSKQFZMEHCSXUEWIURWESOHPVNBFAHLILEIUNMJVJXOHMYJUCWQKWDXTZEYBGRETXVTTMWJLBSCNDJPSFJTROAGCEFPUNSAQKDYZOYYMXOAEGNIALUDPCYVIQFLMDVTRY");
    msg.lat = 0.308144745076;
    msg.lon = 0.937437602117;
    msg.z = 0.113090322297;
    msg.z_units = 131U;
    msg.cog = 0.848610362353;
    msg.sog = 0.549540336484;

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
    msg.setTimeStamp(0.304385263462);
    msg.setSource(17377U);
    msg.setSourceEntity(10U);
    msg.setDestination(14959U);
    msg.setDestinationEntity(247U);
    msg.label.assign("SQUBLXKWMMDBFRBLNWAZXGM");
    msg.lat = 0.29038470897;
    msg.lon = 0.774452043858;
    msg.z = 0.40765307371;
    msg.z_units = 114U;
    msg.cog = 0.874980404075;
    msg.sog = 0.869656774128;

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
    msg.setTimeStamp(0.309645657519);
    msg.setSource(35437U);
    msg.setSourceEntity(4U);
    msg.setDestination(41290U);
    msg.setDestinationEntity(109U);
    msg.label.assign("XQVYRYCDUJFOLULINATJQCQZKGPFPELOBDAWMIJVPWJZMIWVHNHIYUDMEPXVVKUNKDOWUHIHTRHTQVYRZUQGNSBGXTTYNDJTOWQXWFCSBSWKZSDGAOUKAXHAMTNQDZVBCIGMYGIPULSFAGTRIIVGUBMLNHXFDPPCKSMOOLRCTPGBBCYGWMAZQOXMFWCYEQS");
    msg.lat = 0.743859103596;
    msg.lon = 0.698947441941;
    msg.z = 0.581898445657;
    msg.z_units = 31U;
    msg.cog = 0.0160035727397;
    msg.sog = 0.980517345566;

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
    msg.setTimeStamp(0.551160170872);
    msg.setSource(5584U);
    msg.setSourceEntity(146U);
    msg.setDestination(31151U);
    msg.setDestinationEntity(179U);
    msg.name.assign("VBBZMSBSKRPAQATUVLHMQFDPXOVXTEKGJTBAXQGRQBZHTBESMREWTLVUKRMDAXSCVRAVLZPSYLOLGJWVHOKAISGPWERDCEBPGRLZIYNFVNZCDNYLIWZFHCPEGYFWNSPXAQCWWUTLFELYMKINHQMODYAAWBDRLJGFHRTHPAEFOQQTJIXKGIWEQWVXJINDJFJHFZPJZCCNSMYVXNONKY");
    msg.value.assign("BGIBJFSZEJZVANSLJCIWVNPTWGHFFRSLMXSXKUYKPSRLNCTIVRYOBPZPZCBODXHHXTOISUNGENAFQLQAKUOIVYJNROSELDDHQZKNLZMQYJFCWJIYISMUPC");

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
    msg.setTimeStamp(0.697471088831);
    msg.setSource(53954U);
    msg.setSourceEntity(134U);
    msg.setDestination(9037U);
    msg.setDestinationEntity(35U);
    msg.name.assign("DFIUVYATQJODKDNPKHMBSVQZDAPKTOZWRPGKBOCFFCRASVXHXWBVDXPEUYRMPOLTHDMQZNETESOXAGQELIZPLGHYLKBOGTSGXWYKBMDJULWSZHXHEGFGJYCWJYOBHXIRMGCIZUUVZMVUAMWWFYHFTSGEMCCMPQXTJMQRQANHSZAVPRKWNRQSQCEITJSUVIWODFCNNPUVJETVGNBTKLQFICRJKYSBIOCAEADYRNFKPUZEUZLWLNLNIOXRLAH");
    msg.value.assign("GTGDWNPSAXUJMQWBHPWDDJQPAGLKKRUFNVUGXOZYVXJMUVWPSBIMYKMLRUWKUTZOIJYLFBRNMEXLTQBVIFAYLQGULARYQQSQSMJQKOLNYJPFCHOXREXQPURZCBXKGCCGSLEMNCRONFBEKSDZSECPMISEDFBHHITCUJBPDDBCJXAURAIGJMCRSVZZATHANPIMZACKYVWTGGYBVTEKWVFDNNVIZIOFYNOHJZWEIVQHKOXHPOXLEEYRFT");

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
    msg.setTimeStamp(0.410308445966);
    msg.setSource(4341U);
    msg.setSourceEntity(43U);
    msg.setDestination(27604U);
    msg.setDestinationEntity(91U);
    msg.name.assign("CPKBNXMEUFJQPZX");
    msg.value.assign("ZOBNLPOCZODLBNVRXTQHHCBFAWWSAJIGSGXGKZEAQYFILYCJHOWWIWFHXUSUUEGCLRKMQOGEHCSRTZMMIEEPTJHFDMKZAAJXOTRDHSSMRGDIMTACJXSDGWVQATKTYGZFOQVCAYDTVMUEBBKLGEFXAPPNBWWZRJPUUQXYNLNNVMWNFFYXRQISQPVDQKMKLBSYUUHYIWRKKGCTJEJBUKLCDNVHPY");

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
    msg.setTimeStamp(0.392092234281);
    msg.setSource(14480U);
    msg.setSourceEntity(121U);
    msg.setDestination(17753U);
    msg.setDestinationEntity(232U);
    msg.name.assign("VTRRRKWXHCNNTSLNKPYYKBLXDERN");

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
    msg.setTimeStamp(0.126406784283);
    msg.setSource(5716U);
    msg.setSourceEntity(60U);
    msg.setDestination(56157U);
    msg.setDestinationEntity(213U);
    msg.name.assign("NQJPUBIQSMLEGHFUIOGKBPFPUYZVDUESJLRCVWAMXXQHXKGVEBCRNYTMGTGJCRJWWJVPBLPPARAYBGCQMKJIHTFOMUCBRAWKWFAMFDNDGCXRZDXDATQJXGUMNMHEVTAVSWLIZYA");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XESGOELWBEQOZBWGKHVBASYPMWUYXHPLNEFWTALIEOWMRWGXBDMUUKHEAIUHTFGTICQDCKMTCZZZNPDSAOBHPDXNFVZMZRNJTTLTJHFRIDJLJMGDGKDKYSHKTPBVWXYYERGKPCNKUPIVJYLNUYARUAQOFZADPSSNFACYCVPZVIOQLFVYSHNHGQWKOFMWWZFQIRIAQVUBVXJUXXRBRUFJQ");
    tmp_msg_0.value.assign("KDOMHEHDUVQMQNMIPYKNTVBZKKRBIFZDHRIVBYUVSAQTQLEEXDRKIEHIENYYPZCDBYNLDCUSLRPUVMNOWZUTPOQJUFVDNAYEXOKXXGYQRMQFPWNHNFIHIFFPRXPBPCHNBETHXWJCJASJOSUSCRALMWXWJBSSWMIJIMNAXCFTVGGIPCWSCMTQGUDFYZLLJVLHVRWWKZSTJGCTTBZXBYCESFFRGRO");
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
    msg.setTimeStamp(0.739748817259);
    msg.setSource(24632U);
    msg.setSourceEntity(253U);
    msg.setDestination(6865U);
    msg.setDestinationEntity(142U);
    msg.name.assign("GGVEVDVBDWCYBIWZWQFLELRLYQDKINUSADFQDUIVDGTJXBBRWNKUQQOHOPYCETICSMNZMOFLNHOTELEYKJCMNVUMSBGYPSOHTAZPKOVVPWPTZWJFTMCUALCIFYTSXUXDNYHIYCBKIWFEFJREODOXMHMFNGVUXVXZAXXNHPPOXZSBPAJJTQWQMLXTCAARKJIZABYHBFRHFAMSZNMKNJHHJSKWLDLKQUBEZPGUUSCRGRGQRSRRKODVLWCQAPI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZYRYZBPNIURBELXJDXBSKMOCCVCZUOGWOPBMFORWUYRZGZKLJQXINRISJWUHUVNMFDHRNTDGPDPDKAWWBUXJCITTEASYXTKFEVWDIKCJNYLRGELFMROQXWJYTLAKCUJNAZFQBOFTQOXJQEAWRXCBULLKVQCGVHCKWALYSQTJSNZPLSGSAHFYZGTHANFSPFENNVXZGHQSEPPGU");
    tmp_msg_0.value.assign("ZJNQGTDDAGSACYOMAIHLNIXZOCSHLUEOBASIVPFMSKCYEDITKQFHEDJRYXZWCKHOSEVGTAPJOUPRIHAAFSJXHSWANLXCGBBPQWIADGLBOMMJIQWLWJBZTYBTCUGQUMNCVJVYPWELMFGHGDZXNNCYTIMTXLEVWOKTFRRLWCKFYMCUKZMQRBRBPRUJMVVPRHDQOTQJEGIUFYVWKYDPDXKAPNHIBYUSPNBZXFVESOFUOFQL");
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
    msg.setTimeStamp(0.619023872294);
    msg.setSource(38166U);
    msg.setSourceEntity(33U);
    msg.setDestination(39948U);
    msg.setDestinationEntity(169U);
    msg.name.assign("IHOGXZTEBZOJUVLZEDCUBXGPYHOWNYAMQESASGKJAAPEWCMOZWMLIJXAFJUNEMTFYIVQQGWGHFPVQRSRWSLTBXMVZEQLACQXCFWFZPMMBLDETWKBKSDWKHMMDCRGNXRABDZRSJQTXKBIYILAQDTDVJGNFVCKSYZAUNSEPGLONTVWLYRSPHXKQJICGUIIMZHKRTZLUFXIYVOUTBCGSWKFD");
    msg.visibility.assign("CHWQGBPSKIDWFRETPGSQBUNDCDQMBSFFOQGOSLPPOCYXWXUTIJTJXWUNEEYOHWJOEONGHLVGJBJQYTIVAMZINHKVFTZCURLQSKCEUHGGIRZXDWLYCZAXUKWJAUTGUQXMKYDAVLAMRIOZNNNKVRYJWFDBIHESGEUXMHZKBMMWHDMTNMHZPEWFRRFOXAZYAIKORGTPCBPLBAJLFAEXNOPCQBTQZVKZSJ");
    msg.scope.assign("HZPWSJCCIKPXDTWNZGMXUQRSAVXEHEDAKJYUJUXPNLZUKEWDOLRIBWDLJRGEVNQLFJGXVPKROFASQFQBWMKOVHZFCKTCSDOEBOYZQTJCRVIKRMNGYEIHNHFFLGINRQRVBHSZEUSYLQOZJLXTTPAWNIYVYFWDAJWPYFLTXZ");

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
    msg.setTimeStamp(0.0541742501695);
    msg.setSource(36255U);
    msg.setSourceEntity(115U);
    msg.setDestination(49012U);
    msg.setDestinationEntity(85U);
    msg.name.assign("VQZSXZFMSTJBF");
    msg.visibility.assign("FPYTAYNXWUGMGIDENMYNQTJJFHGTZHCRQWEVLFGIXKKTCKMFDHQIAZEJTWNAZYXEPHCYUDBZFUTWVHVADMGNSJZHBOPQXCLNUKTRZYWEUQWUWRSGAFRMSOSJLIOLNVYAZIDAMZDVZORQCMWMJDKVYISCDGHLTWBDXKLPVPSQHAPVPFJMRBBQXPRDNLEGOEUFBKOISHJXSXGOATUGHPYOPRWBJOCLEYXOS");
    msg.scope.assign("VILNXEEPHWDRADFNRULEKTHXPWKGDIGLVOIENGSDYVUYGIFYTQTZYWEDJMTDARCZAJDMAMNXTUVFCOBUOIHFSCHCVMBNYAXBAZPRBMQHTILUPOHJYKVFPANWABDWSZUTLKJXTMQCBOGYEKLJUMQO");

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
    msg.setTimeStamp(0.306670592505);
    msg.setSource(35396U);
    msg.setSourceEntity(93U);
    msg.setDestination(22464U);
    msg.setDestinationEntity(96U);
    msg.name.assign("SYIVUGDHZHMNGJHZXGIRTCVJPQRNZRVDBPIQZEVOQCTLKKXESUDQGBEYHFMNBYLLOEZHGXFWVNULKWLAJOWBCEBKWXPBKRAYIOVXVBSAXFFFKWYHHDKNOJMWIJFPTUURAJQNXNQAEJUTTYSAIAOQXEUPR");
    msg.visibility.assign("SAGKCLOLDLMJRXFPLIUJBFSQKKPQWDSEEMJHTBLCXIDOMPTONVVOSYCUZZEFWGYNENTGXJCPTHZYACJEAUNUBIZPTUCIOPCBIHHOIXYFMTAASNJIKJRKQQTQNBYVXFOQKBCAPNPFRVLWDUQVPSZVSNMYGVOAPERERTNXKLRWZWYEOLUCOZQHSQRZLIJUDWVUBWTVGZYBXBDXDFMHDGKUHJHDGYRJEWSRIMFMFBHG");
    msg.scope.assign("PFGYSMLZAMVTIUHLBPRBJMYTCROERIKHHCUYNKEEUNFJYXIJFTLQQDTCJAZTAOIHJBVXLLNLWPSOILSCBOGAJDEBQ");

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
    msg.setTimeStamp(0.57300297111);
    msg.setSource(59370U);
    msg.setSourceEntity(225U);
    msg.setDestination(16489U);
    msg.setDestinationEntity(152U);
    msg.name.assign("LMNFALHQEGXDHRNDDLYQDZIMVTHFIGOZOYEOEXKVOMYVDQALUCJBYMPSIGNWUMSXQQFLUWGHFKCKHUSMQKWABYZDOCUHBAPJVSJWERWPRAFSVSVTP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("OSOMSGAGDPUJFJVWKRCDFIAJXSZTNOCFVOSTYEKEXVIQCZZZQBBFXXYYFUGLPTPCAPOIWUEVFLZZGCMIVOUQOSYBFGZHAQQSUBATOWMWEDHLIBUSLUGNPVFKZWVXQBIMROEXH");
    tmp_msg_0.value.assign("BJGXFMKLMQJQVXZGQOKHTBUJOBEGIRCFVCVLCPIASBAHVZDSMYRBACDPXSMWPLQSEGUNEFHQUHWEFOPBHFHCJTLLKFIYBZMTYWPOMLTJXWIGTLJEHENDFGZMFHWIHRCKRKIOZQURRPNRKUYXA");
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
    msg.setTimeStamp(0.952488036346);
    msg.setSource(44637U);
    msg.setSourceEntity(159U);
    msg.setDestination(52197U);
    msg.setDestinationEntity(117U);
    msg.name.assign("QNEUVFNVHSZAATAGNIUDUQXLSPSVGDPHIHWQDPKTQOYVYAZBBBLZCIUHTQUTJEFBIDMTVRIPAZGKIXOBGJFXVTWNBCJLSXRKEFEWDEVXCSNWYRPQKMTJALVLLAXFWDRKGFDMAMRCIZKQJELQQENWDLPCKCPWGYHGGRNPYCOGCMCWUZSYOGRFUZJMCDNLWHXRSQYRUHFHOJYMRAPTYOSAKBNBDSXOBOZNFHJMFMUJZOXWKUEKIPHBXTIJM");

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
    msg.setTimeStamp(0.416009431402);
    msg.setSource(48325U);
    msg.setSourceEntity(243U);
    msg.setDestination(58143U);
    msg.setDestinationEntity(210U);
    msg.name.assign("JFBEMMFGRUJRCNVYQCMDUXXWERBZFICOWLXCEVELALQJFSSNVJMQDJJKXSXYQ");

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
    msg.setTimeStamp(0.909697896888);
    msg.setSource(4851U);
    msg.setSourceEntity(132U);
    msg.setDestination(64318U);
    msg.setDestinationEntity(115U);
    msg.name.assign("JKKYEHYZUFZXVDGODMBTWQBBYWZBEPJRQMGMKCGFMOHHLFHTBXECCIXSWHVCGCUUBAKAUTFZGLPDGSWDCAJYAORTDTEFDUHVJZIWYBMPYVJVXDKZROEKJSDLFXORINJRVMBLRISXEXNOOSZUFRRMTHCKINSAEGMLAWYVEWBGIEPDRDIOPNHEFNLYQNPPFQASWTQIZQJMNPUXTAQWVNVAZUONQYLO");

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
    msg.setTimeStamp(0.965058345826);
    msg.setSource(29145U);
    msg.setSourceEntity(69U);
    msg.setDestination(25734U);
    msg.setDestinationEntity(69U);
    msg.name.assign("CJUVAPMTIHDPWZPKQFJNIMLIAUQRAANCCCDKTYWCMM");

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
    msg.setTimeStamp(0.817056301224);
    msg.setSource(20349U);
    msg.setSourceEntity(116U);
    msg.setDestination(47768U);
    msg.setDestinationEntity(123U);
    msg.name.assign("FVFLEOHYNUEMGJUEZGVNXQYAAGCSDDP");

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
    msg.setTimeStamp(0.876229282924);
    msg.setSource(57011U);
    msg.setSourceEntity(138U);
    msg.setDestination(51363U);
    msg.setDestinationEntity(168U);
    msg.timeout = 899819829U;

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
    msg.setTimeStamp(0.236773403788);
    msg.setSource(32551U);
    msg.setSourceEntity(149U);
    msg.setDestination(49502U);
    msg.setDestinationEntity(232U);
    msg.timeout = 4219586965U;

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
    msg.setTimeStamp(0.399338452066);
    msg.setSource(5006U);
    msg.setSourceEntity(18U);
    msg.setDestination(64176U);
    msg.setDestinationEntity(50U);
    msg.timeout = 2212109900U;

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
    msg.setTimeStamp(0.507047241848);
    msg.setSource(64968U);
    msg.setSourceEntity(84U);
    msg.setDestination(48398U);
    msg.setDestinationEntity(182U);
    msg.sessid = 1706972577U;

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
    msg.setTimeStamp(0.801793322839);
    msg.setSource(38630U);
    msg.setSourceEntity(217U);
    msg.setDestination(10073U);
    msg.setDestinationEntity(120U);
    msg.sessid = 1828223274U;

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
    msg.setTimeStamp(0.906102172437);
    msg.setSource(6516U);
    msg.setSourceEntity(57U);
    msg.setDestination(25127U);
    msg.setDestinationEntity(68U);
    msg.sessid = 2064964442U;

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
    msg.setTimeStamp(0.486858517636);
    msg.setSource(51952U);
    msg.setSourceEntity(250U);
    msg.setDestination(4895U);
    msg.setDestinationEntity(197U);
    msg.sessid = 3815717155U;
    msg.messages.assign("PKRYQWOQPWKHBDSPXBZISZTULWHVKEILVIZZAWATOINZQN");

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
    msg.setTimeStamp(0.783764681936);
    msg.setSource(4827U);
    msg.setSourceEntity(39U);
    msg.setDestination(52569U);
    msg.setDestinationEntity(132U);
    msg.sessid = 253791392U;
    msg.messages.assign("GRGQFFSVQWTXLJNKGRXHRLKIFRPNCIVZVDCKEBJXDEYXELSXLOMHBSISRGKPQZPROPYCYIFKQTUFWI");

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
    msg.setTimeStamp(0.0518100690841);
    msg.setSource(53519U);
    msg.setSourceEntity(197U);
    msg.setDestination(33104U);
    msg.setDestinationEntity(114U);
    msg.sessid = 3857418783U;
    msg.messages.assign("LIHEMWLPQKVXQCRORAALOZKBHILUXIUJXSQDOWKMBUUPCUMSHINZOXCOUBGFCQSJMHHZBFUJYMVRVZAEWPEQOXVQTGKIJMGRJKWNGXAJMXLOFTHLBIYVIPERWBPPGHJTWVQEENNTYRFGNJDZJPXDYYSCQWSGTDDFYCYNSCEGPFSDNYHCFUILGMKQBSYIWNVFVAL");

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
    msg.setTimeStamp(0.30996040973);
    msg.setSource(13062U);
    msg.setSourceEntity(237U);
    msg.setDestination(5169U);
    msg.setDestinationEntity(120U);
    msg.sessid = 274843293U;

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
    msg.setTimeStamp(0.514929296244);
    msg.setSource(45831U);
    msg.setSourceEntity(222U);
    msg.setDestination(803U);
    msg.setDestinationEntity(54U);
    msg.sessid = 3276296187U;

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
    msg.setTimeStamp(0.434560945442);
    msg.setSource(27432U);
    msg.setSourceEntity(89U);
    msg.setDestination(61819U);
    msg.setDestinationEntity(148U);
    msg.sessid = 2314160435U;

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
    msg.setTimeStamp(0.5364255915);
    msg.setSource(52120U);
    msg.setSourceEntity(19U);
    msg.setDestination(40207U);
    msg.setDestinationEntity(156U);
    msg.sessid = 694063838U;
    msg.status = 74U;

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
    msg.setTimeStamp(0.464115387074);
    msg.setSource(18760U);
    msg.setSourceEntity(84U);
    msg.setDestination(15301U);
    msg.setDestinationEntity(94U);
    msg.sessid = 2815886167U;
    msg.status = 9U;

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
    msg.setTimeStamp(0.682214295993);
    msg.setSource(51051U);
    msg.setSourceEntity(45U);
    msg.setDestination(25110U);
    msg.setDestinationEntity(174U);
    msg.sessid = 217679031U;
    msg.status = 55U;

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
    msg.setTimeStamp(0.0486768758227);
    msg.setSource(61880U);
    msg.setSourceEntity(242U);
    msg.setDestination(32054U);
    msg.setDestinationEntity(0U);
    msg.name.assign("EOBQDCYGOLTRROTEOJNWBBJBPIKBDZZHBONKVIBAFQWEOXGQMMZAUGHEEFELUIBPZMEWXRGXTVCKMSRIJUDPSKRPIBPJNAFLSADDQJCXLIVWTKSFCVTXLIWUAQVFTLWEVHNYMCPJMYTDZFSMLGUXJUSAUOIRUUHXHVLPZHWMIMPENESKAIQRKGCLJSVAHDXOZPKAOUCMTNSBOP");

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
    msg.setTimeStamp(0.0351471891353);
    msg.setSource(52921U);
    msg.setSourceEntity(18U);
    msg.setDestination(10738U);
    msg.setDestinationEntity(164U);
    msg.name.assign("QNCAKJWESMAIXJHGIDHRWDZFUUBRWCP");

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
    msg.setTimeStamp(0.485474537327);
    msg.setSource(43863U);
    msg.setSourceEntity(123U);
    msg.setDestination(53382U);
    msg.setDestinationEntity(117U);
    msg.name.assign("WXVYWGXIYJATNHDQBLUXTBGSDATAVKIYRIBDIQLGZILLVOIAMAQDOBLAGYTBXFIVMLWSMPRCNAPLMHFFUTCCZPWZJPUVEYCZQXRTFWUZVDRMGGJXNPYGHEMFLOJVONESAFRGDBCJRSKPMTENWINBQVOWAQDREECBPXZCKXSUEKNTUUQBSVSQRYZHCFCOHFRMJPMBKAYIHKETDRCFHNYDKJJHQNLZXJZNOHTOIKPGX");

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
    msg.setTimeStamp(0.962131094641);
    msg.setSource(57973U);
    msg.setSourceEntity(81U);
    msg.setDestination(42047U);
    msg.setDestinationEntity(187U);
    msg.name.assign("SIVBXASNIHNWNXRKOZMCDATQAHJKDVO");

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
    msg.setTimeStamp(0.680199672444);
    msg.setSource(4706U);
    msg.setSourceEntity(189U);
    msg.setDestination(54382U);
    msg.setDestinationEntity(252U);
    msg.name.assign("IUSGWNYKWITQSQVEEURWR");

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
    msg.setTimeStamp(0.729683863427);
    msg.setSource(26714U);
    msg.setSourceEntity(29U);
    msg.setDestination(32637U);
    msg.setDestinationEntity(64U);
    msg.name.assign("IPRJSEYLDTZBSGTQANPWCNRHZIPAZXIKHXTOUYLFFLWWGVKHJWNSFMEUEOFLKCGRINFUVHMCRSZDQXFJWPT");

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
    msg.setTimeStamp(0.84279521146);
    msg.setSource(22314U);
    msg.setSourceEntity(153U);
    msg.setDestination(24469U);
    msg.setDestinationEntity(25U);
    msg.type = 228U;
    msg.error.assign("VQAFIZVAUHBBFVGZCYHSDUCYSWCZMCJPIPLBIDUZHIAKHRNABROFINRLXLPWZMRMGTHNKROXOOTWMUGATJKPJJTMGYYQKCZQMQULEFJV");

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
    msg.setTimeStamp(0.348908996329);
    msg.setSource(64012U);
    msg.setSourceEntity(152U);
    msg.setDestination(3973U);
    msg.setDestinationEntity(73U);
    msg.type = 179U;
    msg.error.assign("INRLIOEKBOEMZGGATQDZTFBYSCZMCJADRUXNDURYUZNFNSFOBKZORVLJCUWXZKNTSSGHJCMDLCPTCHVTCOXQGPVPTVUIFZQBZPYQUQMKEIRKXLJRSWPHFMSRSAQTGUWLQHNYAXCKQKWVDMBDFUSIHYEPITODIDWZIAXHVUA");

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
    msg.setTimeStamp(0.373461721127);
    msg.setSource(16223U);
    msg.setSourceEntity(31U);
    msg.setDestination(5777U);
    msg.setDestinationEntity(4U);
    msg.type = 122U;
    msg.error.assign("KMDDQVIORSEDLVAYXJGYKSFECPMEJPUIOABBVXMLOOHHRNTSAQIBTZEWZGPJLXDAFDKTWOXYUBMU");

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
    msg.setTimeStamp(0.490317373734);
    msg.setSource(30624U);
    msg.setSourceEntity(61U);
    msg.setDestination(10677U);
    msg.setDestinationEntity(56U);
    msg.seq = 25942U;
    msg.sys_dst.assign("WYTLGDSIEXGHOIUMVTZNAZWPAWSESKCURPBKIKNDDKXNSSFWYIYQPPQREBEVUKVHJIKCFBUAMXMNJRJHDLQMYNWSWWBLEGWTOXBPVLNWCXLRXQFFFFHCCOOJWTYRYSJFI");
    msg.flags = 244U;
    const char tmp_msg_0[] = {11, 119, 48, -96, 13, -40, 72, 126, 52, -22, 105, 27, 95, -30, -28, -118, 80, 50, 99, 118, 89, 63, 1, 63, -84, 95, 125, 27, -19, -8, -54, 91, -102, 3, -34, -59, 112, -3, 95, -121, -36, 105, 47, -105, 85, 13, 74, 105, -89, -1, -76, -72, -44, -118, 0, 28, -53, 120, 22, 6, -63, 69, -37, -72, 79, 21, 105, -6, -93, -55, 20, 2, 5, -81, 2, -67, 41, 62, -57, 18, -34, 11, 12, 82, 81, 79, -121, -9, -73, -16, 51, 70, 102, 51, -59, -25, -12, 100, -4, -89, 61, 18, -104, -35, 78, -125, -28, 109, -51, 80, 74, 68, 44, -107, 87, 83, -98, 60, -27, -9, 47, 35, -115, -52, -30, 61, -68, -120, -4, 34, 121, 2, -82, 79, -125, 104, -64, -58, 85, -123, -24, -11, -15, 112, 84, -122, 90, 120, -67, 75, -27, 93, -112, 85, -23, 87, 14, -57, -104, 52, -5, 74, -20, 118, 39, -41, 61, -97, -64, 50, 22, -117, -18, 45, 68, -94, 103, -43, -85, 120, -113, -21, 93, -68, -48, -54, -84, 44, 76, 2, -126, -28, -58, -120, 123, -28, 29, 0, 30, -12, -72, 103, 90, -19, 82, 25, 84, 3, 56, -90, 103, 74, -60, 29, 111, 33, 47, 54, 86, 57, 65, -40, 54, 77, -24, 117, 83, -110, -29, 109, 57};
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
    msg.setTimeStamp(0.381248656826);
    msg.setSource(13770U);
    msg.setSourceEntity(87U);
    msg.setDestination(51984U);
    msg.setDestinationEntity(38U);
    msg.seq = 51U;
    msg.sys_dst.assign("CXFZMQGLWUBEHXOREJFUCRKJBSPQIUATAYVOSSZINYDCYNKPKZKXZLURANYQNUANXMCLTPLZHNPFLSZATDDUCGCQWWKMWTDMPMSGFE");
    msg.flags = 237U;
    const char tmp_msg_0[] = {97, 107, 46, -13, 8, -121, -32, -35, 104, -61, -38, 96, -111, -5, -33, -79, 61, 90, 35, -42, -121, -68, 24, 8, 76, 99, -1, 102, -33, 9, -73, 124, 57, -81, 73, -37, 87, 66, 124, 89, 55, -29, -21, -71, 88, -104, 19, 25, -17, -60, 107, -91, -115, 58, 4, 82, -127, -8, 97, -20, 124, 104, -112, 85, -50, 100, 32, 94, 2, -88, 83, 85, -13, -98, -15, -105, 35, 30, -37, -28, 28, 108, -62, -75, -29, -33, 46, -120, -29, -5, -83, -49, 94, 32, 110, -56, 87, -64, 63, -11, 100, 76, -24, -101, 105, -44};
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
    msg.setTimeStamp(0.61590159313);
    msg.setSource(24713U);
    msg.setSourceEntity(89U);
    msg.setDestination(7533U);
    msg.setDestinationEntity(11U);
    msg.seq = 49838U;
    msg.sys_dst.assign("HZBNCYQBATWGVXAPCHIVLTRPOSMFRLGYMCQWFPNWUBRSGRJOGXPKCXLGEEEKVSGRCMHMUTUYFRDHWZFIXZQ");
    msg.flags = 27U;
    const char tmp_msg_0[] = {-121, -26, -20, 26, -33, -91, -87, -83, 81, 37, 84, -60, 71, 96, 122, -43, -36, -44, 39, -52, -47, -56, 35, 101, 65, 76, -103, 11, -90, 77, -45, 26, 23, -60, 46, 113, 84, 25, 117, -85, -117, -47, -115, -18, -87, 119, 78, 5, -113, -44, -94, -113, -103, 83, 86, -82, 126, 96, 85, 81, 2, 53, 15, 118, -49, 67, -95, -24, 82, -71, -57, -62, -30, 27, -12, 113, -43, -67, 42, -52, -78, 12, -59, 18};
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
    msg.setTimeStamp(0.365481793629);
    msg.setSource(63562U);
    msg.setSourceEntity(166U);
    msg.setDestination(45637U);
    msg.setDestinationEntity(213U);
    msg.sys_src.assign("VQEOVKSAMSPZIRKRUQRJFHYPTJFFRPBKSCESVWWFIMVHZDOBRRLSIGJYVHHIEVXXBRJNNTNQYDXCDQCZOPXHKNTZRBYAZ");
    msg.sys_dst.assign("HRDKVNMIGCWTHQNEXAYAYSZPJQEWFJKCNZEHJLNHUXPNBZIVZRUBDDSGGOQZOXWVUGKUODYJQXUGWUYDMEXYOUHNYKAXIIJLMAUQPOGTBRESCWMMTIFATHFXVVLNRKPZDKGCXRZAFMSPLPAOIPCBXOQQMFRQXYJAVAKOBJTWDCOTLRVERECZSHCUJDDIRBOGITLHYJGVSCTWKFJZMIVGPSFSBFFBENWPPQMLWCYIYLEW");
    msg.flags = 249U;
    const char tmp_msg_0[] = {18, -84, -27, 103, 117, -24, -123, -97, -69, -41, -119, -17, -55, 54, 21, -128, -96, 24, -12, -96, -62, -115, -53, -89, -28, 33, -11, -57, -102, -126, 60, 120, 3, 44, -39, 90, 30, -120, -18, -69, -5, 116, -26, -9, -125, 100, -94, 45, -89, 66, 65, -58, 94, -120, 43, 91, -124, 25, -84, -93, -122, 98, -52, 121, 62, 30, -98, 96, 105, -121, -103, -16, 87, -37, 72, 10, -89, -87, 125, 80, -124, -65, -22, 122, -26, 105};
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
    msg.setTimeStamp(0.708193524945);
    msg.setSource(49822U);
    msg.setSourceEntity(137U);
    msg.setDestination(12269U);
    msg.setDestinationEntity(243U);
    msg.sys_src.assign("LARIOKHPIHQBZJOEITFKOTYNBRQVIMHJSRSYBPQSEUUNMTDCYNPGLMIZPGAJLHDYJXCBFJNVQGLDXZMMDFBVXIFOCRSBBAXKSDMCTAGCNZFAEDTCGYGNAGIHOSQVDQZTWDLAEWJPPSVWXFDEVVPJRXWWXWEFEMRLFNRQNLWZHSZMKUE");
    msg.sys_dst.assign("IRZLUMGHDDYIUZXWGMXPPWPFWETSNLCIQMKBBFYOEYGQHACTWGCTAQP");
    msg.flags = 24U;
    const char tmp_msg_0[] = {43, -29, -82, 98, 10, 123, -86, -50, -2, 3, -102, -48, -119, 35, -5, -76, 116, 85, -8, -68, 95, -79, 41, -123, 9, -7, 68, 125, -5, -14, 6, 122, -89, 82, 52, 72, -27, 91, -65, 82, 81, -78, 100, 97, 69, 42, 117, -103, 106, -85, 88, -32, 98, 74, -53, 88, -24, -6, -82, -12, 63, -40, 125, -115, -34, 78, -15, -1, -11, 64, 71, 68, 70, -20, -70, -16, 95, 14, -42, -32, -81, 9, -121, 19, 27, -7};
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
    msg.setTimeStamp(0.210826524751);
    msg.setSource(13288U);
    msg.setSourceEntity(211U);
    msg.setDestination(56507U);
    msg.setDestinationEntity(97U);
    msg.sys_src.assign("FECTOMQRMFCQFAPCIBNQMHYHIZTMXKGKWOAJGUNUIDCQNYHZSXVHJFRPSBGZVBTDQTJFGTXOQLAHEOFOXATWVWBYWBFCATPFJSONAGQKVHESZEDJVBOCOXTSWLUXAIEZOWQWBIERUHNLLGMSZVNSBHMWNXYKQRYYXZGKPPHNLDRXSIEFSXIDOLVIDIJEZDGLRKVAUNUVYYMPLCZK");
    msg.sys_dst.assign("ZGTEAHJISGRUDHJBRCJACWVMTRJFKPUKKUVFHTGPKPAIPO");
    msg.flags = 48U;
    const char tmp_msg_0[] = {-64, -100, 123, 93, 16, -108, 11, 93, -19, -117, 112, -59, -55, -68, 107, 112, -65, 6, -27, 25, 115, 93, 78, 40, 113, -119, 120, 108, 14, 117, 29, -96, 58, -9, -38, 42, -101, 58, -26, -26, -79, -46, -17, 97, 86, -48, -31, 22, 4, -127, 0, -74, 45, -64, 16, 40, 24, -103, -118, 94, 71, -116, 46, 49, 63, 84, -34, -106, 54, -77, 59, -66, 88, 4, -6, -32, 32, -80, -96, -21, -101, 20, -104, -5, 121, 81, -124, -65, -110, -97, 29, -109, -66, 46, -44, -102, 88, 29, -97, 62, 56, -99, -54, 66, -10, 31, -19, 70, -32, 110, -87, -120, 77, 64, 124, 106, 62, -19, 77, -27, 19, 108, -20, -112, 29, 17, 58, 122, -74, 105, -55, -99, -44, -56, 69, 86, 47, -89, 93, 100, 68, -61, 25, 107, 84, -107, 55, 89, 0, 77, -78, -105, 101, 103, -68, -80, -92, -14, 118, 110, 29, -50, -72, 118, -126, 40, 39, 98, 94, -36, 91, -99, -106, -46, -92, 125, 3, -96, -55, -40, 13, -94, -118, -49, 88, 20, -9, -17, 85, -43, 68, 50, 23, 21, 35, 46, 51, 81, 63, -25, -105, 12, -30, 52, -37, -115, 95, 53, -69, -82, -79, -81, 27, -105, 113, -65, -66, -25, 98, 25, -1, -22, -125, -89, -15, 30, -51, -106, 107, 112, -89, -128, -41, 94, -53, 66, -44, -116, -108, -105, 3, 89, 29, 124, -44, -102};
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
    msg.setTimeStamp(0.198394469395);
    msg.setSource(28710U);
    msg.setSourceEntity(254U);
    msg.setDestination(30118U);
    msg.setDestinationEntity(74U);
    msg.seq = 4317U;
    msg.value = 185U;
    msg.error.assign("OUNXOSDCNPCUVVPZQEQBWBKILRMIHTHEXVHXRJKKSRLWTMJUJFDCMWEXTVFSVMDRBJHMIPLCBANQGWJVIAGFSGFWGISCGNTLIETOTXRCQUUYFFAWEZBAPGEUKZJWHKLCKQVYBVYRETZOTZSZDF");

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
    msg.setTimeStamp(0.628095197346);
    msg.setSource(56604U);
    msg.setSourceEntity(40U);
    msg.setDestination(65493U);
    msg.setDestinationEntity(0U);
    msg.seq = 17641U;
    msg.value = 14U;
    msg.error.assign("NMLSADXINELCEOELWQCWPGUURNPLKRAXCOTFVTIODQGAVYEKSMFDGMVOUAQVCTDDNNOQDVFYWBOHZIOLPVFKPOIXMWJHFTMRXZEMJREMXTIIRQWCSBKYHRRNSZXWJYKEJIKTTTYJZNURQZUYLBGPUAKVXKSAUJY");

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
    msg.setTimeStamp(0.274467624504);
    msg.setSource(19852U);
    msg.setSourceEntity(31U);
    msg.setDestination(10221U);
    msg.setDestinationEntity(241U);
    msg.seq = 34460U;
    msg.value = 85U;
    msg.error.assign("DLHXRMDTVFMKZOPNPJZLNAIIBPUSLHNFNUS");

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
    msg.setTimeStamp(0.198065541523);
    msg.setSource(45528U);
    msg.setSourceEntity(70U);
    msg.setDestination(32531U);
    msg.setDestinationEntity(99U);
    msg.seq = 43104U;
    msg.sys.assign("YATHQAZPONZYUJRBCEAODOTDZCIULNAPFLNCOVUGWPHFGBGFUPRMMJRETKKZNFINGWLTBNHHGXPSYNAOFDYNTMMQQUYSQVHJMERHPLZEBHKYWOJRAHPQZXMBRIBNSCVXICOSWDTSHIRWAWLYEKCKFEVKXJDRUYVJIKYZBJWCVIUDEVDOVLOICKGBFCAEAMQGMFXTWSETUQSDJYAXKGXLBXPZMFQWLRWGVCSQXJDUFSTMPJLBUZL");
    msg.value = 0.997815278836;

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
    msg.setTimeStamp(0.628749285093);
    msg.setSource(20218U);
    msg.setSourceEntity(233U);
    msg.setDestination(58618U);
    msg.setDestinationEntity(111U);
    msg.seq = 44517U;
    msg.sys.assign("YWWLMKWSQGJWYXVUPMEMIGUDZNTZXJINFPCUAMAMXQTVF");
    msg.value = 0.773004804666;

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
    msg.setTimeStamp(0.141407303549);
    msg.setSource(16671U);
    msg.setSourceEntity(60U);
    msg.setDestination(17245U);
    msg.setDestinationEntity(45U);
    msg.seq = 18942U;
    msg.sys.assign("ZMHLCGWIFPMAFLNVATRUMWTJMMBYGZRBNYIDVYLEEPXFNXICJEONSUBZKMPCAVXKOBKWQKAKWLURACFSLIAYHSCKWJEZOMNPUXSNZRL");
    msg.value = 0.977076505519;

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
    msg.setTimeStamp(0.0776566121099);
    msg.setSource(39761U);
    msg.setSourceEntity(239U);
    msg.setDestination(29336U);
    msg.setDestinationEntity(128U);
    msg.seq = 35397U;
    msg.sys_dst.assign("TLSDSZLIBWOXEONHWYNIMWEFRNKAJSQUKSKJSAHVGNMWJUKNCTPEWIWFKLPUIGN");
    msg.timeout = 0.0323400267501;

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
    msg.setTimeStamp(0.594745288521);
    msg.setSource(19052U);
    msg.setSourceEntity(44U);
    msg.setDestination(1799U);
    msg.setDestinationEntity(126U);
    msg.seq = 63913U;
    msg.sys_dst.assign("BRTZEBTMHNKOVWDSAGMOMLIXFODLDEUQSVFFMOLCEFHCASPZTAPGXZNPOBUHIWURSLTSYHACVKFGELQEQCJBYKUCJHLSZJQGJBWBURGDZFWXLDRHOCQBYYSGCDCVSGMNKVIADTKYXPAWNRBWWXUZWNW");
    msg.timeout = 0.33968514612;

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
    msg.setTimeStamp(0.637950384238);
    msg.setSource(31982U);
    msg.setSourceEntity(86U);
    msg.setDestination(28736U);
    msg.setDestinationEntity(22U);
    msg.seq = 52567U;
    msg.sys_dst.assign("BJHPDFMOCENPEVX");
    msg.timeout = 0.890887341373;

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
    msg.setTimeStamp(0.442262577994);
    msg.setSource(40339U);
    msg.setSourceEntity(140U);
    msg.setDestination(48218U);
    msg.setDestinationEntity(209U);
    msg.action = 104U;
    msg.longain = 0.473384315161;
    msg.latgain = 0.821132310888;
    msg.bondthick = 1925725371U;
    msg.leadgain = 0.241799502508;
    msg.deconflgain = 0.753005885227;

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
    msg.setTimeStamp(0.1312913991);
    msg.setSource(62551U);
    msg.setSourceEntity(166U);
    msg.setDestination(39014U);
    msg.setDestinationEntity(125U);
    msg.action = 200U;
    msg.longain = 0.638250427387;
    msg.latgain = 0.243135540878;
    msg.bondthick = 2220937743U;
    msg.leadgain = 0.770632119928;
    msg.deconflgain = 0.344696704303;

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
    msg.setTimeStamp(0.427117737703);
    msg.setSource(32767U);
    msg.setSourceEntity(27U);
    msg.setDestination(45263U);
    msg.setDestinationEntity(69U);
    msg.action = 55U;
    msg.longain = 0.612595534381;
    msg.latgain = 0.932155496511;
    msg.bondthick = 715711912U;
    msg.leadgain = 0.831752638341;
    msg.deconflgain = 0.368536823194;

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
    msg.setTimeStamp(0.904309356572);
    msg.setSource(58694U);
    msg.setSourceEntity(106U);
    msg.setDestination(15002U);
    msg.setDestinationEntity(247U);
    msg.err_mean = 0.402786762871;
    msg.dist_min_abs = 0.0292063022258;
    msg.dist_min_mean = 0.479376316583;

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
    msg.setTimeStamp(0.682942903737);
    msg.setSource(25289U);
    msg.setSourceEntity(224U);
    msg.setDestination(21714U);
    msg.setDestinationEntity(35U);
    msg.err_mean = 0.0383126368294;
    msg.dist_min_abs = 0.718410743853;
    msg.dist_min_mean = 0.115988288222;

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
    msg.setTimeStamp(0.469654633617);
    msg.setSource(5750U);
    msg.setSourceEntity(23U);
    msg.setDestination(20894U);
    msg.setDestinationEntity(228U);
    msg.err_mean = 0.386329571414;
    msg.dist_min_abs = 0.0214954035643;
    msg.dist_min_mean = 0.102271432965;

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
    msg.setTimeStamp(0.0101228548201);
    msg.setSource(28695U);
    msg.setSourceEntity(41U);
    msg.setDestination(39348U);
    msg.setDestinationEntity(164U);
    msg.action = 38U;
    msg.lon_gain = 0.860672520823;
    msg.lat_gain = 0.445888782232;
    msg.bond_thick = 0.492276834696;
    msg.lead_gain = 0.260336597711;
    msg.deconfl_gain = 0.35732030566;
    msg.accel_switch_gain = 0.430443565003;
    msg.safe_dist = 0.99484000416;
    msg.deconflict_offset = 0.519588818725;
    msg.accel_safe_margin = 0.454468993564;
    msg.accel_lim_x = 0.36002305398;

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
    msg.setTimeStamp(0.73803185497);
    msg.setSource(29007U);
    msg.setSourceEntity(29U);
    msg.setDestination(6904U);
    msg.setDestinationEntity(105U);
    msg.action = 75U;
    msg.lon_gain = 0.920903735704;
    msg.lat_gain = 0.484970727036;
    msg.bond_thick = 0.108629141679;
    msg.lead_gain = 0.39706767019;
    msg.deconfl_gain = 0.0844462398835;
    msg.accel_switch_gain = 0.643464753776;
    msg.safe_dist = 0.880157237408;
    msg.deconflict_offset = 0.901668781688;
    msg.accel_safe_margin = 0.55633534395;
    msg.accel_lim_x = 0.228444957646;

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
    msg.setTimeStamp(0.485148563813);
    msg.setSource(2809U);
    msg.setSourceEntity(59U);
    msg.setDestination(24636U);
    msg.setDestinationEntity(126U);
    msg.action = 33U;
    msg.lon_gain = 0.912611103104;
    msg.lat_gain = 0.0371045684265;
    msg.bond_thick = 0.409340085107;
    msg.lead_gain = 0.972750945468;
    msg.deconfl_gain = 0.637068884953;
    msg.accel_switch_gain = 0.39337672572;
    msg.safe_dist = 0.9278577716;
    msg.deconflict_offset = 0.718925969208;
    msg.accel_safe_margin = 0.343140915138;
    msg.accel_lim_x = 0.968041757296;

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
    msg.setTimeStamp(0.499379200487);
    msg.setSource(57218U);
    msg.setSourceEntity(253U);
    msg.setDestination(32930U);
    msg.setDestinationEntity(143U);
    msg.type = 102U;
    msg.op = 96U;
    msg.err_mean = 0.910020989294;
    msg.dist_min_abs = 0.023750320057;
    msg.dist_min_mean = 0.763390713543;
    msg.roll_rate_mean = 0.259586269587;
    msg.time = 0.97094126155;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 33U;
    tmp_msg_0.lon_gain = 0.543586794547;
    tmp_msg_0.lat_gain = 0.412989412902;
    tmp_msg_0.bond_thick = 0.128871061709;
    tmp_msg_0.lead_gain = 0.404207812672;
    tmp_msg_0.deconfl_gain = 0.325172178487;
    tmp_msg_0.accel_switch_gain = 0.196410064721;
    tmp_msg_0.safe_dist = 0.581842804296;
    tmp_msg_0.deconflict_offset = 0.562843105265;
    tmp_msg_0.accel_safe_margin = 0.0623494766256;
    tmp_msg_0.accel_lim_x = 0.840763845454;
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
    msg.setTimeStamp(0.620532360475);
    msg.setSource(41801U);
    msg.setSourceEntity(82U);
    msg.setDestination(6560U);
    msg.setDestinationEntity(104U);
    msg.type = 71U;
    msg.op = 153U;
    msg.err_mean = 0.267656544722;
    msg.dist_min_abs = 0.6489736674;
    msg.dist_min_mean = 0.216952804037;
    msg.roll_rate_mean = 0.655904587214;
    msg.time = 0.176267999027;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 33U;
    tmp_msg_0.lon_gain = 0.984731771693;
    tmp_msg_0.lat_gain = 0.170693203463;
    tmp_msg_0.bond_thick = 0.411870755422;
    tmp_msg_0.lead_gain = 0.35562223022;
    tmp_msg_0.deconfl_gain = 0.599346988315;
    tmp_msg_0.accel_switch_gain = 0.753914806158;
    tmp_msg_0.safe_dist = 0.0955678320373;
    tmp_msg_0.deconflict_offset = 0.691584376064;
    tmp_msg_0.accel_safe_margin = 0.326731298217;
    tmp_msg_0.accel_lim_x = 0.138625941506;
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
    msg.setTimeStamp(0.285909846001);
    msg.setSource(25165U);
    msg.setSourceEntity(96U);
    msg.setDestination(11537U);
    msg.setDestinationEntity(134U);
    msg.type = 95U;
    msg.op = 94U;
    msg.err_mean = 0.977527402263;
    msg.dist_min_abs = 0.751236400869;
    msg.dist_min_mean = 0.707988937004;
    msg.roll_rate_mean = 0.639451087568;
    msg.time = 0.846974559244;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 2U;
    tmp_msg_0.lon_gain = 0.404573114039;
    tmp_msg_0.lat_gain = 0.16709002271;
    tmp_msg_0.bond_thick = 0.18918707439;
    tmp_msg_0.lead_gain = 0.17228430488;
    tmp_msg_0.deconfl_gain = 0.516677311788;
    tmp_msg_0.accel_switch_gain = 0.127250732226;
    tmp_msg_0.safe_dist = 0.560527442114;
    tmp_msg_0.deconflict_offset = 0.451935802951;
    tmp_msg_0.accel_safe_margin = 0.615494880071;
    tmp_msg_0.accel_lim_x = 0.517421336235;
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
    msg.setTimeStamp(0.533319978812);
    msg.setSource(29404U);
    msg.setSourceEntity(204U);
    msg.setDestination(37293U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.202535647961;
    msg.lon = 0.9582615634;
    msg.eta = 2269675773U;
    msg.duration = 16752U;

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
    msg.setTimeStamp(0.28319400736);
    msg.setSource(4736U);
    msg.setSourceEntity(22U);
    msg.setDestination(48435U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.662648039557;
    msg.lon = 0.00283770115217;
    msg.eta = 2405261029U;
    msg.duration = 6465U;

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
    msg.setTimeStamp(0.863340939223);
    msg.setSource(22152U);
    msg.setSourceEntity(142U);
    msg.setDestination(27085U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.759021040349;
    msg.lon = 0.292679568739;
    msg.eta = 1790691025U;
    msg.duration = 62108U;

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
    msg.setTimeStamp(0.753150482641);
    msg.setSource(33400U);
    msg.setSourceEntity(228U);
    msg.setDestination(6544U);
    msg.setDestinationEntity(69U);
    msg.plan_id = 56684U;

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
    msg.setTimeStamp(0.00201078181523);
    msg.setSource(55014U);
    msg.setSourceEntity(192U);
    msg.setDestination(43846U);
    msg.setDestinationEntity(171U);
    msg.plan_id = 19714U;

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
    msg.setTimeStamp(0.499727018734);
    msg.setSource(37073U);
    msg.setSourceEntity(166U);
    msg.setDestination(59617U);
    msg.setDestinationEntity(19U);
    msg.plan_id = 49836U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.347206436313;
    tmp_msg_0.lon = 0.546152877265;
    tmp_msg_0.eta = 2735525301U;
    tmp_msg_0.duration = 32881U;
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
    msg.setTimeStamp(0.144554487849);
    msg.setSource(34882U);
    msg.setSourceEntity(205U);
    msg.setDestination(39312U);
    msg.setDestinationEntity(227U);
    msg.type = 108U;
    msg.command = 75U;
    msg.settings.assign("MCHITOQWEIDALSYWKUFGCPDGMAXCTUCJGNTQOHDZKKCDNZCVQPJVLUUSOBTKKCNRZOXNJCUSQYPMMHJXWLUPTXQOWEBRVZASWZQKLPWYRZKLOOWNHOMGAXFIVUUIAVSYKLSPFQVMJDFH");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 49876U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0129045773442;
    tmp_tmp_msg_0_0.lon = 0.8867253066;
    tmp_tmp_msg_0_0.eta = 722468841U;
    tmp_tmp_msg_0_0.duration = 1912U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("EHJFRZBPRNJXUVOQMUSSGBBLBNPRUOGQZQZJHGTOFUDFMOFTMJPHZNFJBKCPNKXGELXRXZA");

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
    msg.setTimeStamp(0.695557864368);
    msg.setSource(35977U);
    msg.setSourceEntity(230U);
    msg.setDestination(33280U);
    msg.setDestinationEntity(25U);
    msg.type = 59U;
    msg.command = 133U;
    msg.settings.assign("VGNMBKHGTD");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 55947U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.115059747386;
    tmp_tmp_msg_0_0.lon = 0.00961153433029;
    tmp_tmp_msg_0_0.eta = 1213831865U;
    tmp_tmp_msg_0_0.duration = 47519U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("DLJSIPVORCQNKMOAPZXXZQUOSGGFWJPLKBPEUIUPDYWJZMRFVIVSTPGDXKCZMVMFLVTAKWWBCLYIEJXKAGBKSKKNHPVBIVCRYAQCRWAHSWPMYUEMGWXCMFJIWGWBHFSZDRSOFTYQHTCMDLENSENQXLUFFCNK");

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
    msg.setTimeStamp(0.693718711451);
    msg.setSource(39051U);
    msg.setSourceEntity(56U);
    msg.setDestination(16454U);
    msg.setDestinationEntity(202U);
    msg.type = 222U;
    msg.command = 14U;
    msg.settings.assign("KUVCPVAXPZLATHQWHAPQTQKWYJQNXXQLUJFWWNYZDOTJDG");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 45232U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("CCSSWNNRHDQKTPDKYJLRIRLSIMEBAQDELYYPRIFUXITQJHJPCTAGOPOOKNXKGMVWSJVFLQJGARBXNDGNSFLCODWQESFQUMZYFAPTQCYXKSWHNIVWNKO");

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
    msg.setTimeStamp(0.470559036372);
    msg.setSource(48660U);
    msg.setSourceEntity(11U);
    msg.setDestination(39740U);
    msg.setDestinationEntity(7U);
    msg.state = 54U;
    msg.plan_id = 41022U;
    msg.wpt_id = 196U;
    msg.settings_chk = 48391U;

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
    msg.setTimeStamp(0.53071376817);
    msg.setSource(12028U);
    msg.setSourceEntity(100U);
    msg.setDestination(55616U);
    msg.setDestinationEntity(239U);
    msg.state = 102U;
    msg.plan_id = 17748U;
    msg.wpt_id = 157U;
    msg.settings_chk = 35635U;

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
    msg.setTimeStamp(0.545541036443);
    msg.setSource(18895U);
    msg.setSourceEntity(96U);
    msg.setDestination(4614U);
    msg.setDestinationEntity(118U);
    msg.state = 229U;
    msg.plan_id = 29491U;
    msg.wpt_id = 167U;
    msg.settings_chk = 34303U;

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
    msg.setTimeStamp(0.830109796493);
    msg.setSource(4149U);
    msg.setSourceEntity(139U);
    msg.setDestination(4214U);
    msg.setDestinationEntity(136U);
    msg.uid = 14U;
    msg.frag_number = 37U;
    msg.num_frags = 137U;
    const char tmp_msg_0[] = {86, 82, -31, 86, 102, -67, 43, -53, -57, 12, 36, 92, 45, -59, -122, 108, -33, -93, 81, -94, -35, 104, 98, 105, 62};
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
    msg.setTimeStamp(0.472572132918);
    msg.setSource(415U);
    msg.setSourceEntity(140U);
    msg.setDestination(10023U);
    msg.setDestinationEntity(29U);
    msg.uid = 51U;
    msg.frag_number = 1U;
    msg.num_frags = 70U;
    const char tmp_msg_0[] = {9, -80, -124, 101, -93, 79, -27, 18, -82, 96, 2, -26, -125, 95, 7, -26, 49, 82, 46, 17, -114, -23, 51, 121, 78, 41, 75, -49, -5, -103, -37, -28, 66, 121, 84, -38, -24, -7, 116, -33, -67, 72, -56, -33, 14, -127, -46, 18, -72, 109, -14, -40, -24, 121, -96, 102, 92, 31, -88, 5, 5, -41, 110, -52, -105, -83, -11, 126, 30, -16, 121, 97, 53, -7, 75, 12, -101, -3, -94, 57, 123, -80, -118, -71, -75, -30, -18, 117, -49, 101, 57, 70, -56, -47, -106, 75, -10, -126, 41, -112, 82, 103, -102, 36, -102, 111, 118, 81, 122, 23, 68, -105, -78, 7, -3, 4, 6, -120, -42, 58, 14, 39, -102, 34, 107, -3, 46, -51, -30, 26, -19, -119, 105, -47, 101, 46, -86, 79, 123, 68, 43, -69, 1, -2, 107, -21};
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
    msg.setTimeStamp(0.850563268184);
    msg.setSource(52965U);
    msg.setSourceEntity(191U);
    msg.setDestination(50586U);
    msg.setDestinationEntity(118U);
    msg.uid = 234U;
    msg.frag_number = 69U;
    msg.num_frags = 152U;
    const char tmp_msg_0[] = {-46, 34, 54, 34, -121, -25, -54, -23, 36, 16, -5, 55, -53, -8, 75, 17, -72, -48, -1, 3, -35, -100, -124, -46, -103, -35, -3, 37, 54, 91, 125, -88, -31, 117, 109, 16, -90, -79, 104, -40, -49, -69, -53, -21, 105, -14, 2, -1, -29, -94, 105, -83, -33, 52, 57, -49, -104, -16, -110, 16, -37, 33, 73, -100, 73, -87, 7, -63, 81, -73, -100, -35, -79, -79, -99, -95, 73, 50, -3, 39, -91, 45, -114, 96, 20, 21, -56, 103, 24, -32, -84, -1, 39, 122, -113, 43, 21, 65, 53, 20, 86, -127, -72, 75, -121, 52, -14, -87, 113, -97, 28, 79, -109, -85, 85, 11, 101, 49, -75, 69, 123, 32, -6, 78, 67, -3, -106, -1, -16, 126, 82, -29, 107, -32, 15, -43, 4, -65, -39, 83, 69, 91, -96, -13, 94, 76, 65, -97, -73, -94, -65, 106, -92, 36, 73, -26, 84, 24, 89, 123, -67, 15, -20, 4, 30, -80, -26, -55, 105, -52, -57, 20, -101, 73, 41, -117, 108, -102, -118, 80, -58, 93, 62, -91, 115, 19, 109, 68, -77, 108, -112, -22, -37, -128, 40, -127, -41, 125, 106, 96, 37, -60, -57, -36, -98, -62, 87, -40, 54, -40, -101, 89, -1, 57, -58, 3, 87, -19, 93, 51, 121, 105, -34, 26, 59, 29, 81, -31, -39, -12, -57, 74, 24};
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
    msg.setTimeStamp(0.862041847106);
    msg.setSource(9374U);
    msg.setSourceEntity(49U);
    msg.setDestination(29743U);
    msg.setDestinationEntity(11U);
    msg.content_type.assign("OGDEYOVOPRUUNYDGCIRXHJXCNVRJHBFMMUMKVCQHNIVPSA");
    const char tmp_msg_0[] = {-90, -117, 11, 66, 96, 89, -28, 9, 72, -66, 83, 59, -118, -112, 27, 4, 55, 77, 86, -65, -69, -60, -34, 108, 21, -63, 77, 69, 120, -79, -13, 82, 112, -78, -99, -12, -42, 87, 24, -81, -103, -98, 36, -122, -81, -123, 32, 104, -93, -50, -49, 109, -41, 84, -100, -42, 0, 50, -28, 92, 85, -121, -97, -88, 29, 68, 31, -103, -106, -102, -104, -26, 24, -84, 100, 70, 66, -106, 64, 28, -99, 21, -12, -58, 80, -24, 118, 11, 5, 34, 13, 121, -118, 19, 33, -56, 89, 56, -50, -116, -80, 64, 87, 59, 105, -43, 35, -121, -77, -76, 120, -23, -103, -23, 122, 83, 33, -44, -111, -105, 34};
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
    msg.setTimeStamp(0.838780723694);
    msg.setSource(2534U);
    msg.setSourceEntity(30U);
    msg.setDestination(22346U);
    msg.setDestinationEntity(85U);
    msg.content_type.assign("CTFAHJJJMOZQNGJECTOHPNADZWSXWSCWHVCILSBCQYFTSMZHNMVLEIZDLJOOYIFVCGDGENQMENTFVUXUVPHUGIIZDRPIVLYYLAEYRZAIGUMJUXRZMXVBAEHEVPXJWJMPSYQADBRMTBHTYGQUDEDXFDFAAEQNK");
    const char tmp_msg_0[] = {84, 13, 50, -113, 9, 106, 94, 56, 110, 2, 62, -118, 87, -35, 9, 79, 39, -30, 25, -11, 67, 97, -72, -45, -115, 87, 120, 74, -48, -108, -83, 111, -121, -61, 75, -118, 116, -79, -33, 29, 46, 28, -113, 86, -31, -26, -41, -51, 124, -28, 92, 119, -19, 97, 80, -108, 68, -66, -40, 108, 40, -26, -2, 45, -30, -74, -90, 79, -37, 103, -118, -44, 49, 2, -94, 117, 20, -11, -112, -4, 104, 73, 60, -123, -76, 44, 76, -58, -13, 71, 109, 40, 17, 86, -126, 39, -66, -88, -19, -112, -82, -27, -83, -5, -7, 8, 11, 99, -34, 89, 11, -112, -112, -80, 96, 71, 102, -14, 125, -10, -128, -35, -22, -121, 70, 38, -6, 87, 38, 103, 73, -98, 78, 99, -111, 104, -98, 76, -67, -10, -10, 99, 67, -105, -6, 23, -92, -4, -16, -122, -96, -38, -59, 10, 50, 24, 102, -110, 15, -64, 5, 54, -116, 38, 33, -6, -121, -31, -29, 119, 0, 100, 6, 94, -56, -50, -47, -119, -107, 67, -52, 37, 100, -9, -93, -70, 81, 1, 60, -40, -34, 16, -117, 112, -117, 41, 28, 45, -4, 33, -4, 52, 45, -40, 115, -6, 39, -62, 60, 26, -62, 78, -118, -39, 41, 35, -128, 108, -66, 70, -97, 51};
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
    msg.setTimeStamp(0.91909361061);
    msg.setSource(48037U);
    msg.setSourceEntity(100U);
    msg.setDestination(51928U);
    msg.setDestinationEntity(171U);
    msg.content_type.assign("PQKENILHSUEUOAVYLDOOMCIRLWZIXCVXNZJZDQXCGVYBEEYA");
    const char tmp_msg_0[] = {-128, 3, -105, 95, -21, 109, -40, 93, -95, 5, 99, -5, 0, 22, 15, -74, 124, -47, -81, -8, 23, -103, -21, -64, 18, -108, -57, -5, -83, 26, -11, -82, 53, 23, -109, -48, 51, -74, -48, 126, 37, 112, -27, -44, -60, -48, 106, -25, -109, 102, 104, 31, 101, 85, -109, 4, -51, 124, -12, -105};
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
    msg.setTimeStamp(0.772920001622);
    msg.setSource(22502U);
    msg.setSourceEntity(99U);
    msg.setDestination(40641U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.598460193717);
    msg.setSource(46034U);
    msg.setSourceEntity(128U);
    msg.setDestination(9232U);
    msg.setDestinationEntity(114U);

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
    msg.setTimeStamp(0.155640717753);
    msg.setSource(57663U);
    msg.setSourceEntity(227U);
    msg.setDestination(8017U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.529005980109);
    msg.setSource(25415U);
    msg.setSourceEntity(126U);
    msg.setDestination(14880U);
    msg.setDestinationEntity(124U);
    msg.target = 34133U;
    msg.bearing = 0.13376538004;
    msg.elevation = 0.944873780504;

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
    msg.setTimeStamp(0.532652533718);
    msg.setSource(48137U);
    msg.setSourceEntity(153U);
    msg.setDestination(46794U);
    msg.setDestinationEntity(113U);
    msg.target = 3963U;
    msg.bearing = 0.480096670228;
    msg.elevation = 0.550391357373;

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
    msg.setTimeStamp(0.0830691355925);
    msg.setSource(57072U);
    msg.setSourceEntity(40U);
    msg.setDestination(19700U);
    msg.setDestinationEntity(28U);
    msg.target = 21631U;
    msg.bearing = 0.385093211577;
    msg.elevation = 0.448961862328;

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
    msg.setTimeStamp(0.795106577484);
    msg.setSource(46138U);
    msg.setSourceEntity(240U);
    msg.setDestination(55127U);
    msg.setDestinationEntity(13U);
    msg.target = 34313U;
    msg.x = 0.131733008485;
    msg.y = 0.767688131019;
    msg.z = 0.267056821968;

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
    msg.setTimeStamp(0.776709618039);
    msg.setSource(27724U);
    msg.setSourceEntity(210U);
    msg.setDestination(47052U);
    msg.setDestinationEntity(230U);
    msg.target = 18404U;
    msg.x = 0.82924977985;
    msg.y = 0.0391297542818;
    msg.z = 0.90323853038;

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
    msg.setTimeStamp(0.976032708274);
    msg.setSource(36549U);
    msg.setSourceEntity(48U);
    msg.setDestination(15995U);
    msg.setDestinationEntity(104U);
    msg.target = 40108U;
    msg.x = 0.965389738633;
    msg.y = 0.307281129147;
    msg.z = 0.0390806679446;

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
    msg.setTimeStamp(0.158558625658);
    msg.setSource(19287U);
    msg.setSourceEntity(53U);
    msg.setDestination(54108U);
    msg.setDestinationEntity(199U);
    msg.target = 34656U;
    msg.lat = 0.43216163254;
    msg.lon = 0.167275003736;
    msg.z_units = 114U;
    msg.z = 0.485157532028;

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
    msg.setTimeStamp(0.337882539573);
    msg.setSource(38417U);
    msg.setSourceEntity(192U);
    msg.setDestination(49865U);
    msg.setDestinationEntity(176U);
    msg.target = 19842U;
    msg.lat = 0.247535480648;
    msg.lon = 0.500191502262;
    msg.z_units = 196U;
    msg.z = 0.829689966997;

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
    msg.setTimeStamp(0.661525287855);
    msg.setSource(17639U);
    msg.setSourceEntity(183U);
    msg.setDestination(11901U);
    msg.setDestinationEntity(43U);
    msg.target = 23260U;
    msg.lat = 0.45897726861;
    msg.lon = 0.694935120597;
    msg.z_units = 152U;
    msg.z = 0.969057333454;

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
    msg.setTimeStamp(0.499291310833);
    msg.setSource(48141U);
    msg.setSourceEntity(161U);
    msg.setDestination(30472U);
    msg.setDestinationEntity(227U);
    msg.locale.assign("LREIOLBNULFKBSFVVQTOZVDLSMIOWKCZYQUMYDFGGPNODSKVTVKULMOKHANUNWIAWEBIHMNAZTETBCYGZKWTRIRGJQQJWFOBHGWFVVCJGCQXEUZPQSLKCYWMTTHCOLFCHARNJQUAICWPBERUHDEPL");
    const char tmp_msg_0[] = {-30, -3, 40, 81, 83, 107, 47, -113, 92, 48, 37, 63, -114, -92, 92, -112, -9, 67, -2, -27, -111, -120, -34, 32, 63, -72, -83, 12, 86, -19, 11, 70, -116, -126, 59, 26, 93, -8, 33, 20, 100, 71, 87, -15, -18, -38, -89, 5, -123, 42, 22, -23, 22, -99, -93, -36, -71, 113, 101, 113, -61, -114, 25, -8, 93, 67, 83, 104, -51, 19, 87, 65, 117, -94, -45, -43, -14, 34, 89, 107, -76, 93, -49, 109, 14, -101, -25, -87, 71, 107, -22, 31, -32, -5, -64, 19, 10, 44, -42, 86, -23, -63, 50, 3, 119, -47, 72, 24, 124, 81, -29, -10, -4, 107, 37, -123, 118, 99, 31, -10, -66, -118, -8, -117, -113, -31, -90, 82, 108, 74, -52, -6, 98, -42, -76, -19, -39, -89, -91, -119, -98, 48, 69, 28, 20, 30, -87, 4, -44, -93, -38, -71, 7, 76, 47, -8, -11, -101, -69, 59, -13, 38, 32, -34, -115, -13, -123, 58, -28, 106, 117, -128, -127, 91, 56, -109, 124, 101, -84, 100, -3, -20, 45, 67, 69, -107, 35, 59, 19, -116, -31, 76, 100, 66, 95, -82, 78, 6, 70, -37, 114, -6, 107, 105, 91, 16, 15, -3, 121, -65, -39, 112};
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
    msg.setTimeStamp(0.206961450186);
    msg.setSource(32709U);
    msg.setSourceEntity(212U);
    msg.setDestination(37791U);
    msg.setDestinationEntity(11U);
    msg.locale.assign("ARCYTRCUHVZNZMTMDHLFQIPNBBEWCIFWKGAWCTJUELJFOPYOKRRQLDHQVVAJKPZBRGXDACMVKOTTJQWXEECTPPSDAGLSIFVCILQYSTZVIMRUJHBXNORYFSBZDUHIJBSONCKXGBXKZHLEUBGMOSZGKADYYGDTSKWDXRXVSNQHASVFOLEEMDGOTHVFIPXWRMYHYUUISPEGTUQAGOC");
    const char tmp_msg_0[] = {-74, -41, 119, -61, -22, -96, -39, 84, -17, 17, -122, -5, -9, 49, -105, -105, 66, 40, -44, -92, -76, -75, 18, 25, 29, -40, -85, 58, -49, -9, 55, 49, 74, 20, -64, -3, -89, -33, 33, -72, -36, 90, 25, -119, 28, -19, 80, -87, 126, -52, 39, -97, 100, 62, 103, -6, -110, -46, -122, -120, -109, 45, -56, 83, 23, 57, -119, -58, 66, 122, 103, -37, -86, -39, -62, 69, -6, -8, 57, -37, 57, -58, 35, -18, 89, -116, -118, -48, -37, -57, -85, 97, 17, -124, -101, -45, -120, -80, 90, 15, 109, -17, 68, 82, -123, 88, 77, 47, -75, -56, -66, -89, 71, -44, 104, -71, -117, 104, -50, -45, -35, 60, 106, -16, -18, 26, -93, 126, 69, -123, -121, 24, 84, 37, 108, -65, -28, -17, 115, 122, -122, -97, 13, 63, -71, 8, 101, 80, 72, -85, 18, -52, -1};
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
    msg.setTimeStamp(0.122484850999);
    msg.setSource(7187U);
    msg.setSourceEntity(129U);
    msg.setDestination(20045U);
    msg.setDestinationEntity(143U);
    msg.locale.assign("ANQDKXVSSGOPZTFWCCNQUDDASICHYQGBXUVKBUMAOAKGTWLVJKRGGFMFJIQTIBWSSJKYPPOPJJLUUVTEQNIAOZFVBZGMQPWRFHPGTMFFFCTZXXACINOKEEMDRLUIMIHJOEFYDTYGHQZDSHYGJPPNCRTKVLMBYGAERNALXSWYSKBESVUXTRPBRKMWHIVHXXLCWDVRELZ");
    const char tmp_msg_0[] = {-93, -29, 93, -48, 109, -76, -59, -65, -95, 33, 32, 77, -62, -43, 38, -5, 70, 70, 42, -89, -41, 104, -2, -2, 4, 70, -41, 112, -83, -8, 97, -20, -106, 109, -57, 118, -89, 121, 65, 20, 26, -40, 124, 78, 78, -19, -106, 52, -26, -68, 66, -45, 57, -81, -88, 3, 65, 84, -47, -75, -63};
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
    msg.setTimeStamp(0.278092866522);
    msg.setSource(65340U);
    msg.setSourceEntity(186U);
    msg.setDestination(9796U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.181304078513);
    msg.setSource(62006U);
    msg.setSourceEntity(174U);
    msg.setDestination(50753U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.00664799312917);
    msg.setSource(21835U);
    msg.setSourceEntity(124U);
    msg.setDestination(5651U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.844366706965);
    msg.setSource(63547U);
    msg.setSourceEntity(143U);
    msg.setDestination(51693U);
    msg.setDestinationEntity(115U);
    msg.camid = 221U;
    msg.x = 19597U;
    msg.y = 4999U;

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
    msg.setTimeStamp(0.563268904738);
    msg.setSource(24350U);
    msg.setSourceEntity(119U);
    msg.setDestination(16650U);
    msg.setDestinationEntity(17U);
    msg.camid = 149U;
    msg.x = 65470U;
    msg.y = 58501U;

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
    msg.setTimeStamp(0.868367459976);
    msg.setSource(44782U);
    msg.setSourceEntity(31U);
    msg.setDestination(10831U);
    msg.setDestinationEntity(82U);
    msg.camid = 9U;
    msg.x = 54148U;
    msg.y = 59516U;

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
    msg.setTimeStamp(0.968438402248);
    msg.setSource(3093U);
    msg.setSourceEntity(150U);
    msg.setDestination(35523U);
    msg.setDestinationEntity(109U);
    msg.camid = 100U;
    msg.x = 61059U;
    msg.y = 34239U;

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
    msg.setTimeStamp(0.496967738938);
    msg.setSource(5629U);
    msg.setSourceEntity(208U);
    msg.setDestination(49259U);
    msg.setDestinationEntity(26U);
    msg.camid = 177U;
    msg.x = 16574U;
    msg.y = 47822U;

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
    msg.setTimeStamp(0.759900559129);
    msg.setSource(22623U);
    msg.setSourceEntity(188U);
    msg.setDestination(1321U);
    msg.setDestinationEntity(244U);
    msg.camid = 217U;
    msg.x = 30406U;
    msg.y = 46120U;

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
    msg.setTimeStamp(0.757933815768);
    msg.setSource(36527U);
    msg.setSourceEntity(240U);
    msg.setDestination(58939U);
    msg.setDestinationEntity(254U);
    msg.tracking = 81U;
    msg.lat = 0.271638816669;
    msg.lon = 0.542365252917;
    msg.x = 0.802931977869;
    msg.y = 0.686116376299;
    msg.z = 0.226016485491;

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
    msg.setTimeStamp(0.578576725856);
    msg.setSource(15142U);
    msg.setSourceEntity(26U);
    msg.setDestination(56689U);
    msg.setDestinationEntity(46U);
    msg.tracking = 14U;
    msg.lat = 0.826353269511;
    msg.lon = 0.244793257149;
    msg.x = 0.708092148559;
    msg.y = 0.369739387532;
    msg.z = 0.455928698173;

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
    msg.setTimeStamp(0.973830649436);
    msg.setSource(1665U);
    msg.setSourceEntity(55U);
    msg.setDestination(30566U);
    msg.setDestinationEntity(146U);
    msg.tracking = 98U;
    msg.lat = 0.11798373192;
    msg.lon = 0.47954532756;
    msg.x = 0.0390587737649;
    msg.y = 0.474102397741;
    msg.z = 0.163140539751;

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
    msg.setTimeStamp(0.191599469528);
    msg.setSource(45551U);
    msg.setSourceEntity(148U);
    msg.setDestination(47025U);
    msg.setDestinationEntity(155U);
    msg.target.assign("LZMEZMVDJYTMINKLKFKYCTOFBGCBWLONOXBPSSMIXKTLOIOPZDXRQSAEQVMBOIDREFFVGGJVPBQWWYBHVBTFSSRYXAXINJEDEWWJTMKHUCSGGRQCKTPYQNFOXSUPHAEFGHBUZGXZMVFUYHRQUPRLSMJSXCKFN");
    msg.lbearing = 0.531920459799;
    msg.lelevation = 0.760119816457;
    msg.bearing = 0.569159379745;
    msg.elevation = 0.561574377042;
    msg.phi = 0.182686804747;
    msg.theta = 0.669539915289;
    msg.psi = 0.165020418803;
    msg.accuracy = 0.370929897494;

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
    msg.setTimeStamp(0.668923748963);
    msg.setSource(63667U);
    msg.setSourceEntity(64U);
    msg.setDestination(64787U);
    msg.setDestinationEntity(183U);
    msg.target.assign("JNSBABTGQHVMOEKITWIAQUWYASJFEVERGOJVTHQVBYXDNNEABHXIGMYRUDUYCOKJVMOBPPZFLZYLLLFQKAJWTUMQRDWXUSNJHBXWFMDSUEYKHWUGAWDLVUOCPLCXFEXVZQGEMJHGFULPKSJRZPJZIRRDDXQZPHPTZTBICSKIOPJBGCDHOCLNWBWHKWYCXETADVFTCFRRMVHRQOKQEIGQLCSANBKSMNINLKYEOMTZXR");
    msg.lbearing = 0.364125077751;
    msg.lelevation = 0.380892877429;
    msg.bearing = 0.536773286209;
    msg.elevation = 0.844160159096;
    msg.phi = 0.467552412077;
    msg.theta = 0.601428265552;
    msg.psi = 0.80602078274;
    msg.accuracy = 0.776937593948;

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
    msg.setTimeStamp(0.543365790927);
    msg.setSource(34720U);
    msg.setSourceEntity(194U);
    msg.setDestination(33784U);
    msg.setDestinationEntity(7U);
    msg.target.assign("HRNXGPZPEXYWKTORUGPDTOSSNXPDALFSEUKYGBWHUSRCENQIGWNKZJYAKCRJHSTJUPSGTUABQLVBXYLIWLXLDSRGFRHEMDUBZNBYJFKTZHJXOOJCZFPUFEGYFVAMYRAIVWHXXSLIU");
    msg.lbearing = 0.0164612565873;
    msg.lelevation = 0.848167824897;
    msg.bearing = 0.0272611510813;
    msg.elevation = 0.109921487257;
    msg.phi = 0.871177961705;
    msg.theta = 0.281070420272;
    msg.psi = 0.998886345213;
    msg.accuracy = 0.356531284902;

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
    msg.setTimeStamp(0.576637107548);
    msg.setSource(23997U);
    msg.setSourceEntity(52U);
    msg.setDestination(16349U);
    msg.setDestinationEntity(227U);
    msg.target.assign("DAAMHYVSOGCDZXKUHESQISMWXEWWMDFXLLYWAPFUIQDQPOOHPXKNYATEFTLKNFWVOVBSLGBMIJVORFRAZOPOHSBTAGZTISKNZICQQMPCUYGZBHVMGZYCUFLPXNHYCGTUWNCUTXYRANAJQZSPJRRFTEDXJMVRCQVQWCFXYLDMGUBKAOJCBKENTPDJZVCJWGKZXRBLPHIQUUEISNNLNJHTDPIFYWHJRKVHOIGKBOEEV");
    msg.x = 0.902050058121;
    msg.y = 0.737506024503;
    msg.z = 0.0348604850554;
    msg.n = 0.663345263323;
    msg.e = 0.526421195648;
    msg.d = 0.894087088632;
    msg.phi = 0.940456904572;
    msg.theta = 0.419198980273;
    msg.psi = 0.690708132965;
    msg.accuracy = 0.19617301652;

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
    msg.setTimeStamp(0.702670676942);
    msg.setSource(13042U);
    msg.setSourceEntity(105U);
    msg.setDestination(15206U);
    msg.setDestinationEntity(173U);
    msg.target.assign("WIMXNBHYZEUGUBQRCRDZCIOVHZMVNMDLPFHQKCARQTTVXSPIBHHNABFSQCJSOQETDRSQPJJJSRGXFELLFKYFHEEWECJKWOUKSJPUOAEHBXUWHXTTKZKCAMVAIOVOJJYKUWMMDYZYACGVINEJNAOISOUBMAILBLXHBINPTXZNPSYIYQUPTKCKRDDBWFRGSGVXRSZDLGDMUDVYEKOYCVZTQYMUFAOZQLWGEWPMWXLZPFXGFVWNFTD");
    msg.x = 0.085016704443;
    msg.y = 0.648492581288;
    msg.z = 0.455067625921;
    msg.n = 0.801841615783;
    msg.e = 0.429305833974;
    msg.d = 0.147459431549;
    msg.phi = 0.693446528707;
    msg.theta = 0.27298335126;
    msg.psi = 0.558359680301;
    msg.accuracy = 0.910536796764;

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
    msg.setTimeStamp(0.615426405316);
    msg.setSource(4519U);
    msg.setSourceEntity(76U);
    msg.setDestination(3330U);
    msg.setDestinationEntity(85U);
    msg.target.assign("ZTNGOXTNTOQKDEPSAJLMFFEXIAQVHXLFWZEEKGBPFUTYHZWMRBMYBDSRVUICXYGQRZWQKMYMNYHR");
    msg.x = 0.422360010807;
    msg.y = 0.164485134991;
    msg.z = 0.660042235484;
    msg.n = 0.00921530990544;
    msg.e = 0.49380378316;
    msg.d = 0.302447597115;
    msg.phi = 0.830563409793;
    msg.theta = 0.898574837998;
    msg.psi = 0.208394148966;
    msg.accuracy = 0.178239852355;

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
    msg.setTimeStamp(0.614604699785);
    msg.setSource(47340U);
    msg.setSourceEntity(15U);
    msg.setDestination(41318U);
    msg.setDestinationEntity(162U);
    msg.target.assign("JSAMHXDBKEVMSSLAZHPTAENECWYXPFWSSYQIYPKUAQJRCLSDNKFOQXUIHTFBOEJFHVTRWLLAKRFVCQSPUEKDWUJJGBYGCAOJCKTWPKNZLNJZOYWMNUTEPOLCXHANGXMHGRUXFRPVQIRABNZGMYVIKDQQTZI");
    msg.lat = 0.422835804567;
    msg.lon = 0.360515965463;
    msg.z_units = 155U;
    msg.z = 0.844442442733;
    msg.accuracy = 0.155111131866;

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
    msg.setTimeStamp(0.0537287740922);
    msg.setSource(16728U);
    msg.setSourceEntity(110U);
    msg.setDestination(49899U);
    msg.setDestinationEntity(233U);
    msg.target.assign("TZQVHZCMUGEMERBYGFXGPINFXITX");
    msg.lat = 0.603828332053;
    msg.lon = 0.799593184916;
    msg.z_units = 254U;
    msg.z = 0.674796300069;
    msg.accuracy = 0.142679764054;

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
    msg.setTimeStamp(0.720053424969);
    msg.setSource(3642U);
    msg.setSourceEntity(230U);
    msg.setDestination(33621U);
    msg.setDestinationEntity(216U);
    msg.target.assign("YINLQTMRMRLFEQEUCWQOWAOHBKDXSLQZBOIBGMGWBRWHFHBEIMKPNTHBQAORDLVYOZEHUGUTGPIGWVVZFIYJLWCXZTBTIIUQOPIYERNPORHIDFBVPACVSFVATZKD");
    msg.lat = 0.300145683123;
    msg.lon = 0.0845035950553;
    msg.z_units = 79U;
    msg.z = 0.229557067633;
    msg.accuracy = 0.851914252251;

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
    msg.setTimeStamp(0.639425483616);
    msg.setSource(52549U);
    msg.setSourceEntity(193U);
    msg.setDestination(47388U);
    msg.setDestinationEntity(205U);
    msg.name.assign("YJOACFSKBCPDCPSAUJGQJPXNCMDOXDXZEQXVBTNQWIGUMPMWWRCHYCFNXCIJZGHVJNESTCBNKMYXLVATGUOOABDRDGJXQXTRAZHMAGPGPVBYDGIAGZFULEONLWFULCKSHDDBVNIPRZYEQEWKLRHSPXBUVHUHSOANLFERSKVZJZLDDHITVZJQWJFWISRFRFSVKYNWYKTQTLZVKNMQLIQKHFTOKIYGXWITCOMEUHWPEBAREMLS");
    msg.lat = 0.76862229844;
    msg.lon = 0.953101252023;
    msg.z = 0.923973247375;
    msg.z_units = 134U;

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
    msg.setTimeStamp(0.577169935951);
    msg.setSource(30878U);
    msg.setSourceEntity(160U);
    msg.setDestination(33843U);
    msg.setDestinationEntity(181U);
    msg.name.assign("SIUWVAORQPJKMOUVDBBHJWHKTSZQIXFLRDBIFXGTELDHYZBGHTXROWSLRWQEENADONYUEYZLEJMFKSCFBWQCVPRVDDLVPUJBAGUEPPYXCZWRBYKGTAUVIGUIWOATOEVQEHCYOVMSGGHICFHLGLNNZRTXQDUTTYSASJKLNHBGQPNSXMKDKZDHIFJRNFFVICEJXXBYQMLMICQBRWPTNDAMZCZYZOAEOXPZAFVCWSQJGMPUUPJKIHMNMON");
    msg.lat = 0.729549098461;
    msg.lon = 0.241865486757;
    msg.z = 0.661708372836;
    msg.z_units = 159U;

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
    msg.setTimeStamp(0.622015188751);
    msg.setSource(65004U);
    msg.setSourceEntity(50U);
    msg.setDestination(24101U);
    msg.setDestinationEntity(109U);
    msg.name.assign("LEQWCMEYSCBZTXDNYPGUTPMMRJHCIWXQDRVBDXTFGBEYEELPYYWJHRLFILBAWHHBUSIRAZASEJAZHXQKPXPNGEJUTQCYFKRSKJKDWVZNGOQDTPGENUWWAQRMPIRLNKQLKDVHASCRIXWDIMJFZKUFAVNHORYBUJZGDOOATMMSUKGJCHIYLXFZ");
    msg.lat = 0.383658634257;
    msg.lon = 0.889856834196;
    msg.z = 0.290597183593;
    msg.z_units = 58U;

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
    msg.setTimeStamp(0.460435919608);
    msg.setSource(65487U);
    msg.setSourceEntity(109U);
    msg.setDestination(13388U);
    msg.setDestinationEntity(221U);
    msg.op = 154U;

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
    msg.setTimeStamp(0.932777594084);
    msg.setSource(44744U);
    msg.setSourceEntity(244U);
    msg.setDestination(30593U);
    msg.setDestinationEntity(4U);
    msg.op = 198U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("FHYJCZCDZONEUTSCINSVBQLJQHMMYXKJTZWTYLBAVUVCWJKCARTHHLIFMWNKQYGIGUOELIQUOREGDQWPLJMIXVRFQUITGBEPRAVIILOZGWPKLDEDPKUPPXFNYRHNTSOKMSBS");
    tmp_msg_0.lat = 0.323471482427;
    tmp_msg_0.lon = 0.769291533924;
    tmp_msg_0.z = 0.502426726147;
    tmp_msg_0.z_units = 44U;
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
    msg.setTimeStamp(0.374676872907);
    msg.setSource(47640U);
    msg.setSourceEntity(7U);
    msg.setDestination(21251U);
    msg.setDestinationEntity(26U);
    msg.op = 58U;

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
    msg.setTimeStamp(0.94558017476);
    msg.setSource(42368U);
    msg.setSourceEntity(10U);
    msg.setDestination(16977U);
    msg.setDestinationEntity(125U);
    msg.value = 0.272984624468;
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
    msg.setTimeStamp(0.345352441806);
    msg.setSource(62357U);
    msg.setSourceEntity(116U);
    msg.setDestination(42201U);
    msg.setDestinationEntity(46U);
    msg.value = 0.975038748604;
    msg.type = 35U;

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
    msg.setTimeStamp(0.517827867615);
    msg.setSource(7122U);
    msg.setSourceEntity(86U);
    msg.setDestination(40057U);
    msg.setDestinationEntity(145U);
    msg.value = 0.690424474165;
    msg.type = 179U;

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
    msg.setTimeStamp(0.911699107468);
    msg.setSource(41746U);
    msg.setSourceEntity(108U);
    msg.setDestination(32066U);
    msg.setDestinationEntity(159U);
    msg.value = 0.936688893971;

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
    msg.setTimeStamp(0.24562517618);
    msg.setSource(33468U);
    msg.setSourceEntity(102U);
    msg.setDestination(63613U);
    msg.setDestinationEntity(91U);
    msg.value = 0.939805527947;

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
    msg.setTimeStamp(0.765213997156);
    msg.setSource(62291U);
    msg.setSourceEntity(206U);
    msg.setDestination(59725U);
    msg.setDestinationEntity(25U);
    msg.value = 0.937068433482;

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
    msg.setTimeStamp(0.542324544106);
    msg.setSource(24912U);
    msg.setSourceEntity(194U);
    msg.setDestination(35780U);
    msg.setDestinationEntity(40U);
    msg.timestamp_last_service = 0.970822713057;
    msg.time_next_service = 0.911327575763;
    msg.time_motor_next_service = 0.0819771195582;
    msg.time_idle_ground = 0.623580989295;
    msg.time_idle_air = 0.589229654063;
    msg.time_idle_water = 0.248027959505;
    msg.time_idle_underwater = 0.872556228206;
    msg.time_idle_unknown = 0.823385239524;
    msg.time_motor_ground = 0.663026591013;
    msg.time_motor_air = 0.626541483974;
    msg.time_motor_water = 0.344583461068;
    msg.time_motor_underwater = 0.953139460336;
    msg.time_motor_unknown = 0.373465972194;
    msg.rpm_min = 382;
    msg.rpm_max = 2739;
    msg.depth_max = 0.857629809567;

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
    msg.setTimeStamp(0.0285763733236);
    msg.setSource(3818U);
    msg.setSourceEntity(72U);
    msg.setDestination(62074U);
    msg.setDestinationEntity(241U);
    msg.timestamp_last_service = 0.453872213766;
    msg.time_next_service = 0.276448626;
    msg.time_motor_next_service = 0.780710924422;
    msg.time_idle_ground = 0.0633025510897;
    msg.time_idle_air = 0.578163545959;
    msg.time_idle_water = 0.0409607670973;
    msg.time_idle_underwater = 0.116367782084;
    msg.time_idle_unknown = 0.763682745469;
    msg.time_motor_ground = 0.456982655015;
    msg.time_motor_air = 0.721966530617;
    msg.time_motor_water = 0.313792442238;
    msg.time_motor_underwater = 0.578381744407;
    msg.time_motor_unknown = 0.70187773221;
    msg.rpm_min = 21722;
    msg.rpm_max = 32481;
    msg.depth_max = 0.00764171948078;

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
    msg.setTimeStamp(0.466991693135);
    msg.setSource(11398U);
    msg.setSourceEntity(156U);
    msg.setDestination(7677U);
    msg.setDestinationEntity(159U);
    msg.timestamp_last_service = 0.190853388399;
    msg.time_next_service = 0.153742897617;
    msg.time_motor_next_service = 0.178902571972;
    msg.time_idle_ground = 0.0456372663837;
    msg.time_idle_air = 0.993016953736;
    msg.time_idle_water = 0.133550849771;
    msg.time_idle_underwater = 0.988112859114;
    msg.time_idle_unknown = 0.139889754278;
    msg.time_motor_ground = 0.525193606652;
    msg.time_motor_air = 0.289743568365;
    msg.time_motor_water = 0.881841228666;
    msg.time_motor_underwater = 0.333041956979;
    msg.time_motor_unknown = 0.491623808363;
    msg.rpm_min = 5593;
    msg.rpm_max = -4382;
    msg.depth_max = 0.916468972695;

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
    msg.setTimeStamp(0.898143599824);
    msg.setSource(3957U);
    msg.setSourceEntity(127U);
    msg.setDestination(5123U);
    msg.setDestinationEntity(150U);
    msg.severity = 79U;
    msg.text.assign("JIBFLHBNHJHVTHXPFWXTABDTZFXOCZWMNWTEICUPGEKVMVUVFTUDZASRACDOJZHBLXBRFWXFNXLNUAPWYLMTJAQVKIXANSCCHDGOUKYCRNKSIZNJDKXYARJOQEAYZDESBEQUKUQMTCVQSLHVDQMTJSWOWKMGOSAQZFIMLBGHSYMZEIPUDJPYRKEKXQYFHWRRHMGIREYJEKZIVOIGBGDXENPBCLYQLSGZANVTGQCBO");

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
    msg.setTimeStamp(0.00614294085487);
    msg.setSource(6301U);
    msg.setSourceEntity(197U);
    msg.setDestination(19901U);
    msg.setDestinationEntity(230U);
    msg.severity = 165U;
    msg.text.assign("SJCXSMPIOCNGIILXNZFEACBUKRVOKKCKUBUYWJUXGGDAVKSBZFTVAFUCECFLNRZOWKWRGVYUPHAEADPVEZXDBQMMMTZDFSJPQJUBQOGVYHKXJDXSDHLSFJMFEQWZPIPZDLQHLRZLTALBHELSIIGTAVUENOETPQJOHRDORXYQIGFNMNCNWCDIHWMZSCMFTKMSEBYTJBQDHUBTPGQBWPJVKZWAXAGCWVTKLYAQYPROYXMRUSYGXLFNVRYETN");

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
    msg.setTimeStamp(0.661671932225);
    msg.setSource(16944U);
    msg.setSourceEntity(211U);
    msg.setDestination(552U);
    msg.setDestinationEntity(133U);
    msg.severity = 128U;
    msg.text.assign("DYPGRSHMFIWIQJBXEUJQWMAVBLIOVQXNVVTFRSXMWTWDOKMWBPCKIFTPVHYDYNLXUAAKQDEBHNYJUTTEOYGCBUKRPNUAZAMCCHOXXZOQJLUSVZVGEJWIIKCHBGQYZEZPCCFEIQMRBXIGKNNSTCNREDAGRUFRWONZGTOGWMXISMQLPSDFWPUSTQTLEXLLADZFJHHQHPRZPKLCJAXMFSFCBJVRNOAZVHGLPGUIDSKYAZDSB");

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
    msg.setTimeStamp(0.17837139783);
    msg.setSource(48682U);
    msg.setSourceEntity(158U);
    msg.setDestination(40753U);
    msg.setDestinationEntity(126U);
    msg.channel = 34;
    msg.value = 920471476;
    msg.gain = 161U;

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
    msg.setTimeStamp(0.36304446093);
    msg.setSource(30068U);
    msg.setSourceEntity(94U);
    msg.setDestination(9689U);
    msg.setDestinationEntity(254U);
    msg.channel = 123;
    msg.value = 249681901;
    msg.gain = 6U;

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
    msg.setTimeStamp(0.98325944293);
    msg.setSource(46866U);
    msg.setSourceEntity(49U);
    msg.setDestination(61891U);
    msg.setDestinationEntity(49U);
    msg.channel = -32;
    msg.value = -1314116694;
    msg.gain = 205U;

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
    msg.setTimeStamp(0.370017497264);
    msg.setSource(20491U);
    msg.setSourceEntity(50U);
    msg.setDestination(10209U);
    msg.setDestinationEntity(176U);
    msg.ch01 = 0.920849900066;
    msg.ch02 = 0.762120819296;
    msg.ch03 = 0.199089619398;
    msg.ch04 = 0.885492189393;
    msg.ch05 = 0.143485582246;
    msg.ch06 = 0.991692000386;
    msg.ch07 = 0.692768118258;
    msg.ch08 = 0.33458827624;
    msg.ch09 = 0.721319811297;
    msg.ch10 = 0.779125351389;
    msg.ch11 = 0.241075515175;
    msg.ch12 = 0.95421642216;
    msg.ch13 = 0.852275472126;
    msg.ch14 = 0.00989315625874;
    msg.ch15 = 0.544468415027;
    msg.ch16 = 0.486010908781;

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
    msg.setTimeStamp(0.663804555174);
    msg.setSource(33538U);
    msg.setSourceEntity(213U);
    msg.setDestination(6201U);
    msg.setDestinationEntity(45U);
    msg.ch01 = 0.412183877737;
    msg.ch02 = 0.702100858145;
    msg.ch03 = 0.241192213653;
    msg.ch04 = 0.722913283316;
    msg.ch05 = 0.150576659383;
    msg.ch06 = 0.450473967445;
    msg.ch07 = 0.269534966407;
    msg.ch08 = 0.939159583809;
    msg.ch09 = 0.926756500404;
    msg.ch10 = 0.415744981468;
    msg.ch11 = 0.73888718141;
    msg.ch12 = 0.482295920173;
    msg.ch13 = 0.415483648126;
    msg.ch14 = 0.078327844879;
    msg.ch15 = 0.790997533591;
    msg.ch16 = 0.693916043456;

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
    msg.setTimeStamp(0.900353058098);
    msg.setSource(15811U);
    msg.setSourceEntity(76U);
    msg.setDestination(30481U);
    msg.setDestinationEntity(173U);
    msg.ch01 = 0.685629938359;
    msg.ch02 = 0.591814611585;
    msg.ch03 = 0.498762644414;
    msg.ch04 = 0.252214835822;
    msg.ch05 = 0.50219491436;
    msg.ch06 = 0.97076586982;
    msg.ch07 = 0.0953798997001;
    msg.ch08 = 0.284387728095;
    msg.ch09 = 0.371433409255;
    msg.ch10 = 0.520793941549;
    msg.ch11 = 0.719199127881;
    msg.ch12 = 0.394253493846;
    msg.ch13 = 0.203050282831;
    msg.ch14 = 0.812151204743;
    msg.ch15 = 0.31383784501;
    msg.ch16 = 0.849956434476;

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
    msg.setTimeStamp(0.496910064478);
    msg.setSource(1289U);
    msg.setSourceEntity(206U);
    msg.setDestination(40109U);
    msg.setDestinationEntity(142U);
    msg.op = 129U;
    msg.lat = 0.86807272035;
    msg.lon = 0.210647910873;
    msg.height = 0.469802856845;
    msg.depth = 0.456833929132;
    msg.alt = 0.640852599834;

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
    msg.setTimeStamp(0.988005391358);
    msg.setSource(22374U);
    msg.setSourceEntity(31U);
    msg.setDestination(39225U);
    msg.setDestinationEntity(64U);
    msg.op = 135U;
    msg.lat = 0.940482734914;
    msg.lon = 0.255118902025;
    msg.height = 0.575497765602;
    msg.depth = 0.843695149241;
    msg.alt = 0.766321590599;

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
    msg.setTimeStamp(0.837274952154);
    msg.setSource(29254U);
    msg.setSourceEntity(93U);
    msg.setDestination(24890U);
    msg.setDestinationEntity(210U);
    msg.op = 155U;
    msg.lat = 0.664753494739;
    msg.lon = 0.70483637496;
    msg.height = 0.56801904984;
    msg.depth = 0.52063409801;
    msg.alt = 0.100322397468;

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
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.494142543882);
    msg.setSource(58312U);
    msg.setSourceEntity(198U);
    msg.setDestination(53287U);
    msg.setDestinationEntity(166U);
    msg.value = 0.02417892354;

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
    msg.setTimeStamp(0.864740338628);
    msg.setSource(27798U);
    msg.setSourceEntity(194U);
    msg.setDestination(57058U);
    msg.setDestinationEntity(86U);
    msg.value = 0.257209646792;

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
    msg.setTimeStamp(0.30905901626);
    msg.setSource(41606U);
    msg.setSourceEntity(75U);
    msg.setDestination(11087U);
    msg.setDestinationEntity(246U);
    msg.value = 0.549138745443;

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
