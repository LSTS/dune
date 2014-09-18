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
// IMC XML MD5: 429d4804a8915055fe12ce9d09cfa3b9                            *
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
    msg.setTimeStamp(0.11199455726006435);
    msg.setSource(39091U);
    msg.setSourceEntity(138U);
    msg.setDestination(22186U);
    msg.setDestinationEntity(83U);
    msg.state = 209U;
    msg.flags = 173U;
    msg.description.assign("ESLVAQNIXWJMLDTTK");

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
    msg.setTimeStamp(0.9915199159192861);
    msg.setSource(61067U);
    msg.setSourceEntity(184U);
    msg.setDestination(17524U);
    msg.setDestinationEntity(80U);
    msg.state = 235U;
    msg.flags = 76U;
    msg.description.assign("MADUCGASTDMSTJMHUJEIFAMTZEBGLGWYUKXBEQVGFJYDKPNARVMTUJAYKCXPQCTXWDKYUPTWIMCOQJDRETIUPVWZUFTFNWKGVWKPBORBQGHLZXFWIQLMPNBEITNBJVNRLXYLWZETZHWPHSQMSWBUZCJXZXGCOZSUULBDYFYFOOAHVBCRRXGHKSJXRDLLBDSCZV");

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
    msg.setTimeStamp(0.1956407422598344);
    msg.setSource(352U);
    msg.setSourceEntity(218U);
    msg.setDestination(23820U);
    msg.setDestinationEntity(231U);
    msg.state = 57U;
    msg.flags = 124U;
    msg.description.assign("OKTGKSSNJTQCPORWPTGBFCZEIDQJWLWCYQPLZCLGGRQYIEZIKTREXGJHIAMISWNJZYUFVAGAVJSMLTCKHPHBCKMNYSPGHRSCVOANWUJERBXLADOUYQVZZWMGFVZPHENBD");

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
    msg.setTimeStamp(0.4280544918901221);
    msg.setSource(52647U);
    msg.setSourceEntity(130U);
    msg.setDestination(52202U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.03218507531185266);
    msg.setSource(65141U);
    msg.setSourceEntity(63U);
    msg.setDestination(5305U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.20504989733188506);
    msg.setSource(25980U);
    msg.setSourceEntity(251U);
    msg.setDestination(47850U);
    msg.setDestinationEntity(144U);

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
    msg.setTimeStamp(0.8215589164657577);
    msg.setSource(65118U);
    msg.setSourceEntity(40U);
    msg.setDestination(40229U);
    msg.setDestinationEntity(185U);
    msg.id = 201U;
    msg.label.assign("XRNBSYRVQYWJVKIZZRIJODCOJNKCGDHNYOXWOGSJYMABWESZSUIUHHHBRNKSFSDGEGBPLTQCWO");
    msg.component.assign("VIMNSXPDSA");
    msg.act_time = 112U;
    msg.deact_time = 1081U;

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
    msg.setTimeStamp(0.6567042379654614);
    msg.setSource(10706U);
    msg.setSourceEntity(252U);
    msg.setDestination(53001U);
    msg.setDestinationEntity(48U);
    msg.id = 78U;
    msg.label.assign("VMHJMIRODJSYYLJKFZJQSWYZGVDWBXOKZZBJVFXHVAMXAIDWRTVAOIEVRGUIBWLUINDSYRNGZBRHXIDBKERGLMSXCLIBJZVFSVETKULCUHMGQVJPUKWSPZYMBENHAOHPOLQTWKFHTMPFDLTZUSCYDQDWACHTCXXYOFQY");
    msg.component.assign("RCBOZNRASQLRYDXMGWPUXHTNHGVKVTBZMYEVTOWUCIKQNLGJJSTDFLPBUJDOKWLLAQWMMMNHGJZOKBMSCRCIFHJZYQRZLPWHZFDDOMXKO");
    msg.act_time = 21388U;
    msg.deact_time = 29718U;

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
    msg.setTimeStamp(0.16582366167998108);
    msg.setSource(54737U);
    msg.setSourceEntity(145U);
    msg.setDestination(47556U);
    msg.setDestinationEntity(153U);
    msg.id = 187U;
    msg.label.assign("KXJDYNYMJFTMSLEONEDGHTIYPYPQYAGGLPDZZRUHQHFFGDTLFYTNCTPATFTZMEHXACBQRNQUVSNINAWXYZODPDOKGVOZORFMXFKSGCLYCIMUUZHVUNOJNWAEKWVMRELCQEVHZDCVQFBRKFVKRRVHEEJOCQDOXPKBDCWSINPUIKUUPWGBMJQHIIBIIEPUVJBCSSCLHWQRAHSOXJAKWBLSDMLTXAJROEXSBXJMQYWTBZJAUIXBRYWZGFGTZLKAL");
    msg.component.assign("LJMGCFYOOVIXZEEWTTAQWDTEORECJZUFBSUOJMCYUKYPWBFFXKEIDQWPAFSWBKPBQSNSVGOGNXQVEAFQFLLYOMSTVNFTIYRUPJQRMOTOYJLNEJHZELDAHKDKRMHVJPBWEPATHKXBSLLHIMNABVVCXIKIJZG");
    msg.act_time = 22362U;
    msg.deact_time = 35818U;

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
    msg.setTimeStamp(0.35356425557628013);
    msg.setSource(18386U);
    msg.setSourceEntity(196U);
    msg.setDestination(56989U);
    msg.setDestinationEntity(201U);
    msg.id = 96U;

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
    msg.setTimeStamp(0.29501711686440835);
    msg.setSource(17583U);
    msg.setSourceEntity(98U);
    msg.setDestination(37310U);
    msg.setDestinationEntity(122U);
    msg.id = 111U;

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
    msg.setTimeStamp(0.4278398358230543);
    msg.setSource(34138U);
    msg.setSourceEntity(98U);
    msg.setDestination(4071U);
    msg.setDestinationEntity(180U);
    msg.id = 114U;

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
    msg.setTimeStamp(0.9645370768706107);
    msg.setSource(48012U);
    msg.setSourceEntity(75U);
    msg.setDestination(52808U);
    msg.setDestinationEntity(168U);
    msg.op = 149U;
    msg.list.assign("DFNBYHVAZSXRHKQHQKLRDEBFVODBNRTPZYNQQNVRFAYEVXPJZBETDJJUNJMYQNENTCWHSKQQXHLGQLFUOYSHICJGWTHJFCIMLLNIZDZSEGJYSEMIWEOKTKHMTUPBPXWLPDOIEPXCWSCCUQLFYXSZAOGBLIUYDXQPVSEDHXMABAKTHJDTNAMMAKVMKPUZLWIVWRVBXTDGRFGZXFUTKVOIYOSPZUECGBWOCRAMAYLAKCVIIRJMPBUORZ");

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
    msg.setTimeStamp(0.9309282087077564);
    msg.setSource(35906U);
    msg.setSourceEntity(211U);
    msg.setDestination(10200U);
    msg.setDestinationEntity(60U);
    msg.op = 157U;
    msg.list.assign("GFOPYZVWUHJCBROFCRMKTCBJBVHCJBMOLZHRDZDIINJOHURIWFNXBUSIVAUWPPJJDSVGQZXDENHQVYBWKRXDPRTWGAUS");

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
    msg.setTimeStamp(0.43887435488414117);
    msg.setSource(43981U);
    msg.setSourceEntity(219U);
    msg.setDestination(17339U);
    msg.setDestinationEntity(215U);
    msg.op = 162U;
    msg.list.assign("RFYMYLCVMBNWRLTXTUAUQFYADUYXKBZJPZLRWWZNIKFFKMEYSAZJICOBTWVKRQQJREXXEANNSDZWPLDZBCCGGPIQAARGPSAJPVYEKQMUSTNOWSDSJWXLRLENOGFEHEQFSYLOGJIOAPDBXHJOTNDXTURFKJVGUJZ");

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
    msg.setTimeStamp(0.015928387348725703);
    msg.setSource(21068U);
    msg.setSourceEntity(129U);
    msg.setDestination(4015U);
    msg.setDestinationEntity(158U);
    msg.value = 244U;

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
    msg.setTimeStamp(0.14748230621480984);
    msg.setSource(52471U);
    msg.setSourceEntity(208U);
    msg.setDestination(2729U);
    msg.setDestinationEntity(18U);
    msg.value = 52U;

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
    msg.setTimeStamp(0.17594262488335233);
    msg.setSource(36736U);
    msg.setSourceEntity(18U);
    msg.setDestination(16212U);
    msg.setDestinationEntity(184U);
    msg.value = 63U;

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
    msg.setTimeStamp(0.030593004900251963);
    msg.setSource(24277U);
    msg.setSourceEntity(63U);
    msg.setDestination(11568U);
    msg.setDestinationEntity(74U);
    msg.consumer.assign("ZXOVWLUAEFGULYLDRCWAKXAZGMDRZMQHTRSGEAKAYUZTXREMWXCVIWTOBGNOTJVHZPWJGBNVBXFLLBBZSQGMOIAJUWYMVDTXFZCRRDJKJPODENKTVIEXXFPFYKHLHJHQQCIODEGJNNNIFEEYPYQNTCSSTPUOJCAMMTIKWCTKLROIVIIDHIAGWSBUWRZPOUJXBBQPUBKDGFUWYUCXSVO");
    msg.message_id = 17438U;

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
    msg.setTimeStamp(0.9798631494233865);
    msg.setSource(49819U);
    msg.setSourceEntity(47U);
    msg.setDestination(4646U);
    msg.setDestinationEntity(30U);
    msg.consumer.assign("AENOYMOSFWHZYHUKHB");
    msg.message_id = 17575U;

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
    msg.setTimeStamp(0.6873973128645344);
    msg.setSource(37363U);
    msg.setSourceEntity(251U);
    msg.setDestination(46876U);
    msg.setDestinationEntity(32U);
    msg.consumer.assign("MMSQHNPDUAAAYSDHLVEQPWJSICCPWFJVJFZRYCENOIEAJIHRPDAONWOEXGNBWKSJWABSJZJFQLAGY");
    msg.message_id = 48276U;

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
    msg.setTimeStamp(0.5837111748150844);
    msg.setSource(9727U);
    msg.setSourceEntity(132U);
    msg.setDestination(46716U);
    msg.setDestinationEntity(142U);

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
    msg.setTimeStamp(0.2575727811169972);
    msg.setSource(425U);
    msg.setSourceEntity(199U);
    msg.setDestination(45122U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.5812240257167984);
    msg.setSource(62862U);
    msg.setSourceEntity(67U);
    msg.setDestination(8311U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.6387000258269118);
    msg.setSource(38278U);
    msg.setSourceEntity(4U);
    msg.setDestination(52701U);
    msg.setDestinationEntity(231U);
    msg.op = 152U;

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
    msg.setTimeStamp(0.5726561130173705);
    msg.setSource(17047U);
    msg.setSourceEntity(195U);
    msg.setDestination(27250U);
    msg.setDestinationEntity(223U);
    msg.op = 81U;

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
    msg.setTimeStamp(0.2829764132487943);
    msg.setSource(31941U);
    msg.setSourceEntity(22U);
    msg.setDestination(2542U);
    msg.setDestinationEntity(78U);
    msg.op = 55U;

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
    msg.setTimeStamp(0.8795779121453613);
    msg.setSource(55906U);
    msg.setSourceEntity(90U);
    msg.setDestination(49109U);
    msg.setDestinationEntity(152U);
    msg.total_steps = 39U;
    msg.step_number = 247U;
    msg.step.assign("BRPXERLIDGKZAYMQVZUAMLQJEBYSFJRFIVMJXCXINJPCSJQIPOFPACDAZHAZVOTYINVPND");
    msg.flags = 45U;

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
    msg.setTimeStamp(0.6076847729510556);
    msg.setSource(32667U);
    msg.setSourceEntity(193U);
    msg.setDestination(38323U);
    msg.setDestinationEntity(166U);
    msg.total_steps = 194U;
    msg.step_number = 151U;
    msg.step.assign("YSKHCCQNTIPBFGHIHFOMPHZNDNBGIWOYIMJMRGFBCQXYDUBQTTWKQSFZLUAQLCKANHLYQUMEZVZHDUVEMXFVSGEMZIZLSUXITPVBTZNDAUELRLPAYXKWPTTXUIBWKKSOYJZODFWNGCJESLNQRFAADCWUPNKBGBTMCRHHBABDTFOXVMELZWGVWYYIJGVJHOETSRIQDAIURAPO");
    msg.flags = 202U;

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
    msg.setTimeStamp(0.047288419191842235);
    msg.setSource(42731U);
    msg.setSourceEntity(187U);
    msg.setDestination(5556U);
    msg.setDestinationEntity(121U);
    msg.total_steps = 0U;
    msg.step_number = 58U;
    msg.step.assign("QFRKAQEHYJUZBYOTIZTFNPRPIVENHVHAWBJILCOZCGNUOWYLSWCSQRWHMVGLKEKUAFMZFXLURIOQFYKKAXDLAIUTVSXBNULDFHUVEZJCJHQLTKOG");
    msg.flags = 214U;

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
    msg.setTimeStamp(0.4277976192793942);
    msg.setSource(56101U);
    msg.setSourceEntity(87U);
    msg.setDestination(37285U);
    msg.setDestinationEntity(115U);
    msg.state = 136U;
    msg.error.assign("MHRRJBVZHPYIISGOFBMGJEZSHZWEYBKGZPEOHOINUMNNSIUJAHWGLQWAZTPKSWXVOJBAVXRNDVXJRMDTDTNYTHQTLSBVVFXFCVZHJRYRQWOPMWFIHRPCKMYQWWCKFIUMEDPLIQOIYYLJCVZEENGPRAXVUKYFLCR");

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
    msg.setTimeStamp(0.309275138309572);
    msg.setSource(5873U);
    msg.setSourceEntity(159U);
    msg.setDestination(20152U);
    msg.setDestinationEntity(198U);
    msg.state = 162U;
    msg.error.assign("YXOTJPJKRYWFIEUEDSBPMRGYRNLZAYAMRWNIWHFEPLUZHKOZCZBZHVSLSAIBXPHMIPIXATDUGFYJYXKTDXBSYWSHQDUGIGLFWBKDTYPYVKBVDSFGAGIIRVVJIAHOPKXHWLTBSURQMCLFWOMGLLOPLFNHCVVACBJQUTQNOEOTUVKNZCPNXCREOFRJGQXGXAOWWDUCTDVQQNCFXCSWFKZJSQYEMHLMVJMKTHNAPBB");

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
    msg.setTimeStamp(0.6021327035138935);
    msg.setSource(52392U);
    msg.setSourceEntity(190U);
    msg.setDestination(38603U);
    msg.setDestinationEntity(193U);
    msg.state = 185U;
    msg.error.assign("ADHGOGURQMZJKGQUNBGMOTWSFFACKXURWHPRKIPDXOAFUJUIMHMINJLJSTXTRKCGXZFQSDHMORWGGXUKYAWDFHJPWTZBAXWIHCKRPCNLQESVOEZOSKDDNRYKVQBESTPVUFTHLNFDESXKQAVZQPVNVCVLNDJBTYVUYTQCZSJZTPIZYMJOBZTYELD");

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
    msg.setTimeStamp(0.7204892931517374);
    msg.setSource(31774U);
    msg.setSourceEntity(118U);
    msg.setDestination(24250U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.9031148554470766);
    msg.setSource(22014U);
    msg.setSourceEntity(246U);
    msg.setDestination(30798U);
    msg.setDestinationEntity(220U);

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
    msg.setTimeStamp(0.5136501659381612);
    msg.setSource(50793U);
    msg.setSourceEntity(248U);
    msg.setDestination(18781U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.18170052154406358);
    msg.setSource(21691U);
    msg.setSourceEntity(61U);
    msg.setDestination(3431U);
    msg.setDestinationEntity(230U);
    msg.op = 236U;
    msg.speed_min = 0.9206746611803733;
    msg.speed_max = 0.7568569705359354;
    msg.long_accel = 0.6992236490680869;
    msg.alt_max_msl = 0.7483534796137442;
    msg.dive_fraction_max = 0.1817788247680383;
    msg.climb_fraction_max = 0.6293537668374307;
    msg.bank_max = 0.0032282307361820584;
    msg.p_max = 0.6842929859584875;
    msg.pitch_min = 0.7754846202217381;
    msg.pitch_max = 0.6715291288038129;
    msg.q_max = 0.7922724953290328;
    msg.g_min = 0.5587807771932974;
    msg.g_max = 0.8778569314577367;
    msg.g_lat_max = 0.685415348027312;
    msg.rpm_min = 0.6886056609073792;
    msg.rpm_max = 0.80421274818568;
    msg.rpm_rate_max = 0.35790980773066927;

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
    msg.setTimeStamp(0.6908096399066975);
    msg.setSource(24154U);
    msg.setSourceEntity(74U);
    msg.setDestination(34340U);
    msg.setDestinationEntity(6U);
    msg.op = 44U;
    msg.speed_min = 0.36459010762415844;
    msg.speed_max = 0.39063830181769765;
    msg.long_accel = 0.9439780822116302;
    msg.alt_max_msl = 0.2954043112128675;
    msg.dive_fraction_max = 0.3822419564115379;
    msg.climb_fraction_max = 0.4986096500854267;
    msg.bank_max = 0.8270696225548145;
    msg.p_max = 0.2138315873143023;
    msg.pitch_min = 0.6795161221657888;
    msg.pitch_max = 0.39581515047048554;
    msg.q_max = 0.983785592791339;
    msg.g_min = 0.22411702861690364;
    msg.g_max = 0.8095115641129774;
    msg.g_lat_max = 0.024313982526528277;
    msg.rpm_min = 0.40089413707774957;
    msg.rpm_max = 0.44993899012165006;
    msg.rpm_rate_max = 0.6922694839238872;

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
    msg.setTimeStamp(0.16804425859017968);
    msg.setSource(28343U);
    msg.setSourceEntity(163U);
    msg.setDestination(58325U);
    msg.setDestinationEntity(27U);
    msg.op = 34U;
    msg.speed_min = 0.08127382702145736;
    msg.speed_max = 0.5192375102242427;
    msg.long_accel = 0.9623080365166122;
    msg.alt_max_msl = 0.23885423102071657;
    msg.dive_fraction_max = 0.6842147659393175;
    msg.climb_fraction_max = 0.822269378707409;
    msg.bank_max = 0.7292372363318359;
    msg.p_max = 0.5461497894985291;
    msg.pitch_min = 0.5655761663034964;
    msg.pitch_max = 0.05510474517504327;
    msg.q_max = 0.82422618395732;
    msg.g_min = 0.5720574777302581;
    msg.g_max = 0.6478582752157396;
    msg.g_lat_max = 0.4698174940926656;
    msg.rpm_min = 0.8142254926749719;
    msg.rpm_max = 0.9797036006082558;
    msg.rpm_rate_max = 0.4679968119741654;

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
    msg.setTimeStamp(0.5491199324053916);
    msg.setSource(65014U);
    msg.setSourceEntity(245U);
    msg.setDestination(2696U);
    msg.setDestinationEntity(50U);
    IMC::IridiumTxStatus tmp_msg_0;
    tmp_msg_0.req_id = 38403U;
    tmp_msg_0.status = 84U;
    tmp_msg_0.text.assign("ZITIBPPYBYVZKKEGXKASKZNJLAPDDNRGVIJNYUHQUEBVTHFGPSAEXGMKEIVRMLOBRYKFVXVJREMXVECNWLBXWPOLWPPQHMANUMQOEHRRYDEUZOZSRMLHJRIWOORNWXGUEJXOPLUIQCVMGKTWGNJSTYHCYTFWCDAPLM");
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
    msg.setTimeStamp(0.664094629235748);
    msg.setSource(12526U);
    msg.setSourceEntity(32U);
    msg.setDestination(35043U);
    msg.setDestinationEntity(83U);
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8822374464024616;
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
    msg.setTimeStamp(0.33138465654361227);
    msg.setSource(18839U);
    msg.setSourceEntity(186U);
    msg.setDestination(46181U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.6523860825034967);
    msg.setSource(15066U);
    msg.setSourceEntity(12U);
    msg.setDestination(61430U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.09117443142752812;
    msg.lon = 0.6791271519463102;
    msg.height = 0.1570045786280997;
    msg.x = 0.4612269406219488;
    msg.y = 0.9951534829972289;
    msg.z = 0.7717566383910195;
    msg.phi = 0.03412342652464562;
    msg.theta = 0.045893590491366654;
    msg.psi = 0.14931225305366336;
    msg.u = 0.9601856943108235;
    msg.v = 0.5040411349547631;
    msg.w = 0.7764073201735223;
    msg.p = 0.7413284964252971;
    msg.q = 0.7501273792319718;
    msg.r = 0.8811124865031079;
    msg.svx = 0.27330057506084093;
    msg.svy = 0.193316719758163;
    msg.svz = 0.4073950550132114;

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
    msg.setTimeStamp(0.16832091636008084);
    msg.setSource(40773U);
    msg.setSourceEntity(63U);
    msg.setDestination(54370U);
    msg.setDestinationEntity(104U);
    msg.lat = 0.2631569804665135;
    msg.lon = 0.9009606080506141;
    msg.height = 0.04624622354054386;
    msg.x = 0.3692098501539415;
    msg.y = 0.5317097779835622;
    msg.z = 0.12055224022297817;
    msg.phi = 0.7746964589955183;
    msg.theta = 0.4272198024585607;
    msg.psi = 0.5367362691084377;
    msg.u = 0.004951899018930672;
    msg.v = 0.7666473887128598;
    msg.w = 0.4222840660006023;
    msg.p = 0.49639449705498584;
    msg.q = 0.6332120913485658;
    msg.r = 0.5653937145083385;
    msg.svx = 0.1302305510390641;
    msg.svy = 0.8615934599450652;
    msg.svz = 0.8447711242012083;

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
    msg.setTimeStamp(0.5019588341843281);
    msg.setSource(45658U);
    msg.setSourceEntity(204U);
    msg.setDestination(64489U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.6951433581681536;
    msg.lon = 0.38059480369141574;
    msg.height = 0.7667502735181685;
    msg.x = 0.6842116976575678;
    msg.y = 0.782677868736242;
    msg.z = 0.8541652622475425;
    msg.phi = 0.8326202311244661;
    msg.theta = 0.7409386301042525;
    msg.psi = 0.13520566606888773;
    msg.u = 0.9215491736721362;
    msg.v = 0.9284428168140907;
    msg.w = 0.6855247981126306;
    msg.p = 0.5250175571284972;
    msg.q = 0.41670864173063327;
    msg.r = 0.43357104558921133;
    msg.svx = 0.7771861185570295;
    msg.svy = 0.1396722847954155;
    msg.svz = 0.9687004312654915;

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
    msg.setTimeStamp(0.04721969375829849);
    msg.setSource(891U);
    msg.setSourceEntity(8U);
    msg.setDestination(50957U);
    msg.setDestinationEntity(178U);
    msg.op = 79U;
    msg.entities.assign("YXNDREFEGCAREUCYIKVTWLSLVOOOXXQDXHCIWIZNEFBQGGANZPNYFWRMOKCXBOHIFLFXYHVHFDIUCOYAMBEXPZDSVAEZLBKLUSTUAIYQSIGZUZRVAFMJGXIPTBDPMJMQVMWXPRSBKQQUBSOFJCWWJSFKABDAGZH");

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
    msg.setTimeStamp(0.8403054215741151);
    msg.setSource(39611U);
    msg.setSourceEntity(225U);
    msg.setDestination(28736U);
    msg.setDestinationEntity(97U);
    msg.op = 242U;
    msg.entities.assign("ARDVTJHXFAMWDBGSKAFFUWKZSWSYKYXRSVHXMLQYIYEESNRMYZOFGHSOMURLWLCLIY");

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
    msg.setTimeStamp(0.8647117969485325);
    msg.setSource(24358U);
    msg.setSourceEntity(254U);
    msg.setDestination(37422U);
    msg.setDestinationEntity(161U);
    msg.op = 166U;
    msg.entities.assign("WRSQARZGPLKPWCGCIUEHRXLGBNRMRZTWLPXPOIVBAFWJYAHMUFPZHYQQNUDNMJKHKKYFWMDNESTYEUVUZCNXEFVNMWPNAQQTJTFZFBVSZIFRLYFNNIKXAMKPVZTSZQHJIBLDIIRCPXIAPVKEUSJJXGYVLHWKSDETFXUDDLMKZCODBGVHCGLXB");

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
    msg.setTimeStamp(0.07197511841278992);
    msg.setSource(59476U);
    msg.setSourceEntity(172U);
    msg.setDestination(52308U);
    msg.setDestinationEntity(238U);
    msg.type = 214U;
    msg.speed = 25087U;
    const char tmp_msg_0[] = {81, 84, 82, -51, -100, -7, -10, 27, 71, 108, -68, -8, 56, 8, -65, -85, -1, -25, 9, -101, 95, -82, 32, -36, 58, 77, 33, -34, 16, 95, 115, -24, 14, 48, -115, -15, -8, -32, 109, -79, -40, -64, -63, 11, 43, 48, -1, -126, -57, 103, -60, 89, -35, -110, -17, -1, -86, -7, -9, -92, -101, 54, -22, -53, 111, 56, -30, 37, 103, -9, -120, -115, 15, -23, -21, -111, 53, -21, 70, 48, 32, -89, 53, 43, 13, 84, -82, -91, -51, 68, -20, 73, 56, -34, 71, 5, 33, 33, 112, -111, 1, -25, -29, -28, 122, 87, -44, 34, 77, -45, -10, -13, 38, 67, 89, -25, -46, 84, 70, 110, 117, -25, -97, 30, -83, 27, -81, 42, 44, 18, 14, -70, -114, -24, -52, -21, 34, -114, -46, 39, 50, 56, 48, -40, 94, -109, -54, -62, 111, -22, -60, 82, -83, 97, 34, -13, -11, -122, 33, 45, 25, 104, -17, 119, 38, -34, 115, 32, -30, -3, -107, -4, 93, 56, -17, 42, -97, 34, 111, 45, 92, 108, -65};
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
    msg.setTimeStamp(0.046537113414290676);
    msg.setSource(40126U);
    msg.setSourceEntity(115U);
    msg.setDestination(46841U);
    msg.setDestinationEntity(182U);
    msg.type = 251U;
    msg.speed = 17723U;
    const char tmp_msg_0[] = {-12, -71, -128, 126, 11, 13, 46, 111, -70, -53, -93, 19, 59, 80, -54, -108, 4, -12, 12, 13, -36, 44, 13, -25, 15, 38, -101, 19, 51, -80, -109, 55, 118, 95, 80, -8, -104, 43, -62, -34, -21, 31, -17, -60, -108, 2, 24, -21, -60, 10, -51, 107, 46, -33, 63, -32, 17, -60, 89, 8, 115, 47, 42, 34, 107, 107, -38, -27, -51, -71, 97, -93, -27, 27, 12, 47, -27, 53, -128, 2, 41, 89, 64, -33, 92, -84, 43, 96, -113, -47, -103, 18, -98, -85, -97, 102, 80, -77, -71, 100, 61, 111, -105, 29, -46, 86, -50, 88, 125, 24, 0, -90, -43, 1, 124, -104, 14, 118, -99, -55, -83, 112, -111, 49, -119, -79, -51, 86, 35, -117, 50, 65, 60, 12, 2, 19, -80, -125, 111, -91, 2, 80, -119, 88, -110, -74, 102, -110, 4, -43, -57, 124, -124, 86, -59, -9, 13, -109, -69, -86, -112, 114, -38, 88, -127, 36, 27, 52, 43, 74, -124, -53, -34, 49, -38, 23, 7, 107, 77, -29, 11, 23, 11, 10, -90, -28, -19, -16, 107, -105, 66, 125, -80, -93, -70, 100, -28, -26, 13, -33, -31, 82, -30, 35, 29, -38, -36, 93, -59, 107, -74, 8, -12, -22, -20, -126, 12, 0, -35, 80, -56, -99, 96, -36, -52, -121, -83, -67, 92, -9, -57, 119, 21, 41};
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
    msg.setTimeStamp(0.537430413621055);
    msg.setSource(10816U);
    msg.setSourceEntity(238U);
    msg.setDestination(8967U);
    msg.setDestinationEntity(90U);
    msg.type = 4U;
    msg.speed = 56031U;
    const char tmp_msg_0[] = {103, -48, 79, 36, 92, -118, -46, -81, -90, -27, -115, -35, 105, 81, -127, -77, 121, 12, -61, -42, 15, 71, 34, -36, -44, 109, 10, 43, -29, 46, 18, 57, 6, 121, 29, 22, 108, -8, 55, -83, -10, 56, 101, -30, -14, 18, 114, -38, -63, 54, 80, -42, 105, 121, 120, 95, 106, 0, 111, -69, -62, -110, -122, 114, -114, 115, -57, -121, -11, 78, -33, -52, -67, -6, 105, 89, 123, -121, 73, 22, -78, -15, 21, -81, -22, -80, 1, 36, -70, -33, 19, -71, 20, 124, -63, -99, 105, -89, 96, 35, 121, -121, 55, 11, 64, -25, 119, -35, -5, -31, 28, -16, 23, 34, -79, -114, -21, -117, 9, 74, -113, -108, 35, -57, -56, 26, 99, -127, -92, 87, 16, 111, -113, -117, -33, -118, 8, -93, 46, 46, 41, 47, -76, -62, -72, -69, 81, -79, -49, 93, 44, -82, -110, 49, 120, 63, -125, 39, 49, -128, -6, 11, 75, -19, -123, -16, 124, -70, -9, 115, -59, 42, 86, -34, 7, -35};
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
    msg.setTimeStamp(0.6558768771451083);
    msg.setSource(64201U);
    msg.setSourceEntity(142U);
    msg.setDestination(33220U);
    msg.setDestinationEntity(2U);
    msg.op = 88U;
    msg.tas2acc_pgain = 0.7430625028011878;
    msg.bank2p_pgain = 0.9170835591537554;

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
    msg.setTimeStamp(0.14143298001512117);
    msg.setSource(95U);
    msg.setSourceEntity(153U);
    msg.setDestination(55223U);
    msg.setDestinationEntity(49U);
    msg.op = 19U;
    msg.tas2acc_pgain = 0.8175190001138133;
    msg.bank2p_pgain = 0.7075352148706944;

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
    msg.setTimeStamp(0.7579865761017105);
    msg.setSource(12110U);
    msg.setSourceEntity(4U);
    msg.setDestination(52333U);
    msg.setDestinationEntity(238U);
    msg.op = 179U;
    msg.tas2acc_pgain = 0.31483139402330207;
    msg.bank2p_pgain = 0.31141672323492564;

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
    msg.setTimeStamp(0.7101180972615244);
    msg.setSource(6436U);
    msg.setSourceEntity(189U);
    msg.setDestination(20233U);
    msg.setDestinationEntity(4U);
    msg.available = 2987000616U;
    msg.value = 137U;

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
    msg.setTimeStamp(0.7595476894448655);
    msg.setSource(52372U);
    msg.setSourceEntity(186U);
    msg.setDestination(4709U);
    msg.setDestinationEntity(8U);
    msg.available = 1909182760U;
    msg.value = 220U;

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
    msg.setTimeStamp(0.37175037330088134);
    msg.setSource(55347U);
    msg.setSourceEntity(131U);
    msg.setDestination(1702U);
    msg.setDestinationEntity(246U);
    msg.available = 1018627440U;
    msg.value = 85U;

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
    msg.setTimeStamp(0.05638803082863131);
    msg.setSource(54152U);
    msg.setSourceEntity(99U);
    msg.setDestination(58703U);
    msg.setDestinationEntity(137U);
    msg.op = 49U;
    msg.snapshot.assign("CLMXYWLRFSHDJCYOVDWIKRZADGPUNSBBMDPBAGZGEMAQQCATXLGNWZGFKTLIQYEIGVZWPAQDUHBEFJGUYQLIJEALOHPHVOMKWBBUOFGFVBQRXWIWZXTKKRFKXSEJENPNECVYSKMIJZMHYTWHYOIJSMRRYDDJEOANFRPCJTARGSUAXRLTZMNTLVTCHSSRF");
    IMC::Distance tmp_msg_0;
    tmp_msg_0.validity = 212U;
    IMC::DeviceState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.27677075648626126;
    tmp_tmp_msg_0_0.y = 0.270476873957029;
    tmp_tmp_msg_0_0.z = 0.9076698075694497;
    tmp_tmp_msg_0_0.phi = 0.8618124884705363;
    tmp_tmp_msg_0_0.theta = 0.1166994225827711;
    tmp_tmp_msg_0_0.psi = 0.5926608475957298;
    tmp_msg_0.location.push_back(tmp_tmp_msg_0_0);
    IMC::BeamConfig tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.beam_width = 0.5249646148730098;
    tmp_tmp_msg_0_1.beam_height = 0.06034532308064855;
    tmp_msg_0.beam_config.push_back(tmp_tmp_msg_0_1);
    tmp_msg_0.value = 0.7731756970778219;
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
    msg.setTimeStamp(0.27195468477192053);
    msg.setSource(49652U);
    msg.setSourceEntity(190U);
    msg.setDestination(16844U);
    msg.setDestinationEntity(106U);
    msg.op = 218U;
    msg.snapshot.assign("HHIHUUUGESUBDJCLKZQQHYKPFITWFCEBWZTRLXMJGJXQSONQQKGXMFHVPPYYMJYABFETBFLYARGNKRZDYMVVZKYQOWQHIMDMPAOFPKJUKIDWRNBOHJOGEIJXLAWAQCIKWXAARNGLUOSONSADUMHSCTBVDGXBDRRITHEVOVVRNCGUQNFUFRNFSIKXWCHTYRCXCLLEZTBSVVNUTTEDSMCWNPZSZDEBJZMEZAPYCLPKT");
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.7814513026677675;
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
    msg.setTimeStamp(0.38558556720177095);
    msg.setSource(48718U);
    msg.setSourceEntity(167U);
    msg.setDestination(37158U);
    msg.setDestinationEntity(66U);
    msg.op = 162U;
    msg.snapshot.assign("TSRQQVCYNXPHYXKMOOERBVLAXEAQLFECGIXMPXJCZAJNBGTICJYONGRJUQQSDURSWPZUNSUWCPIIGWMLIZDTRNNLBYQM");
    IMC::VelocityDelta tmp_msg_0;
    tmp_msg_0.time = 0.09372194984896232;
    tmp_msg_0.x = 0.23967592660155468;
    tmp_msg_0.y = 0.15073822223104716;
    tmp_msg_0.z = 0.3445580743875013;
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
    msg.setTimeStamp(0.7041097984479904);
    msg.setSource(49546U);
    msg.setSourceEntity(114U);
    msg.setDestination(39895U);
    msg.setDestinationEntity(194U);
    msg.op = 242U;
    msg.name.assign("YGMMQMOHWHQLVVCLLVTKFAGFONCSOGLXVFF");

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
    msg.setTimeStamp(0.6043693728581897);
    msg.setSource(1606U);
    msg.setSourceEntity(15U);
    msg.setDestination(5483U);
    msg.setDestinationEntity(218U);
    msg.op = 218U;
    msg.name.assign("ZGTRTDECVKMFLCJAJXMZNCCBZSUUIHNLTEQCVLXPNXVNQHFVCUEGQSUVAPEDGGRLZYXNPBWTIDULYVYQHCKWUVAKNDFKWVOXSARCPMWXYDZTRRZVYPKELAWRJEFONKKBOETHPJMZZDOPXISSMOTUJDITZOMJADXFGTKG");

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
    msg.setTimeStamp(0.03798435824335744);
    msg.setSource(62242U);
    msg.setSourceEntity(22U);
    msg.setDestination(28534U);
    msg.setDestinationEntity(189U);
    msg.op = 188U;
    msg.name.assign("QSFXFYIRSVJKKOLEZYLRZSFKU");

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
    msg.setTimeStamp(0.3048047579916475);
    msg.setSource(44995U);
    msg.setSourceEntity(89U);
    msg.setDestination(59903U);
    msg.setDestinationEntity(236U);
    msg.type = 8U;
    msg.htime = 0.6770472392836354;
    msg.context.assign("PHOSAJVTXUVZYOKTSGUUQXSBLOANWICNMUGBYMKIVLCARYLJJMMYYVAONLBWOQMCAXRSKHTTFCCUJCRZJDIQVTLAPVHZKPRCAUDKUCLNPNGABREWSAZVZWIHJUMGHRRIWWHIJENXZUOGEZXWDEJYKSOYEYKFVMQIBGZJKEQAPYMFPBNPRWBYNRGGDNHVLGODEDRQTNBIXGXCFFQLDZQHUXLFEHSPDS");
    msg.text.assign("SICFILQNUQFDZCXBQWFAIJCXHXPQAGULPHXZXINKFPLVTQMJHFARJLFEDDCTBWYHRUFYJOEYMEIANPOPEVRABMMOXMXDPTTGW");

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
    msg.setTimeStamp(0.6354883267022432);
    msg.setSource(30686U);
    msg.setSourceEntity(251U);
    msg.setDestination(23201U);
    msg.setDestinationEntity(46U);
    msg.type = 135U;
    msg.htime = 0.08156171975682824;
    msg.context.assign("SFIBFAVQJKXGBKRTGYFJMYMAYRLKJYYYKRFHUNLCLDLPCHAPQLPXTWNQBJCEALONWVHOTIQZEDD");
    msg.text.assign("SVXJMPZANGCQFTDQDFFFWHJZMNXREJWOWYDNSUKXDKCOMTEEAQMJYQETIACVJGVJPHGABLGELYKVAPITWXMXUHPRHQNDFDDMZKXASRCZJVJHYNZLBFLTPICAUPLZZQNXQTBVWWZITDCROOLKLKDJONHPYYXSRRITGXUTIKRFAGUSYHGSWLURKESGNCOANTOUGSLMEPLBFICJHIUOFYGEWVEVFDQHVOAWPCSUBZKMOQRX");

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
    msg.setTimeStamp(0.6196804860039073);
    msg.setSource(40451U);
    msg.setSourceEntity(201U);
    msg.setDestination(11036U);
    msg.setDestinationEntity(48U);
    msg.type = 42U;
    msg.htime = 0.196525380203323;
    msg.context.assign("UYWGATRTSTBSLBPYYSFQWOOMTGWOAKNDKHUUSZXVVHLBWBREXBTRAV");
    msg.text.assign("CBGJNILEOONPEZPDRFGQESAJMPOZPPWRVHIYTLFUGQNCTAMKVUCFMIWDXSWPNGWUHSKODARYDJSLBJYTKFQJMNYTIWRWJ");

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
    msg.setTimeStamp(0.5170091117913979);
    msg.setSource(54377U);
    msg.setSourceEntity(140U);
    msg.setDestination(52380U);
    msg.setDestinationEntity(249U);
    msg.command = 144U;
    msg.htime = 0.3606914094865089;

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
    msg.setTimeStamp(0.6421871418409418);
    msg.setSource(43198U);
    msg.setSourceEntity(124U);
    msg.setDestination(44394U);
    msg.setDestinationEntity(158U);
    msg.command = 16U;
    msg.htime = 0.5676209737529498;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 216U;
    tmp_msg_0.htime = 0.5120201910994528;
    tmp_msg_0.context.assign("LKZJDKXZYYCLQLUKSKEAHHWQXKBPJVIIWMXGGQWMUTWNJTQIVBRXUETMOMPGSNBOCOOSZROVBSTZFSOXNHGHPFDRSZEXZASDQPDFJBDXSFGBWMVHBUTAZOYERFBHQAMPRLXIDOACQCKLHFOTJKMYDTPFEPYIIYIGNMVAKETRRSAXNEBCCMYTRYUYWIISUGJJWL");
    tmp_msg_0.text.assign("FGBJZBJMGISPQMTWDAUVLNMLNASACREYQPBIZHCQIJDPIKDMPNLVROCBMGNTSWISFHFGEDLBYKEGEPYKPARYTVRGLAZWRXZOCASHENXUVJAGWUVDIWLWNZYNLKHHXQJJRWWUKXUYMBPVXZRBATLLUTYMQDQXODKESCMOURNOIHHL");
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
    msg.setTimeStamp(0.351797762640916);
    msg.setSource(62567U);
    msg.setSourceEntity(200U);
    msg.setDestination(60979U);
    msg.setDestinationEntity(121U);
    msg.command = 150U;
    msg.htime = 0.7180802127210981;

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
    msg.setTimeStamp(0.6163259061239841);
    msg.setSource(49870U);
    msg.setSourceEntity(249U);
    msg.setDestination(26449U);
    msg.setDestinationEntity(19U);
    msg.op = 162U;
    msg.file.assign("EYSHWQOOIPLYCWHUMHYFYFMQUPKNFPXEZIUQFZJCTNWRKKKATNWKUZZSHAOOFBDWZVSFVKTEAGEKJMOBUBUHQZGKLEVQICPXVAGSYVTPJTUNHCBOVEUPTDNDDXZDHLGDFJOXYXYILGHRLAGQBJRCWRQRBERKDPBUTFYVWFZMLDPJNUQCEBGIMGKSWXXVLBHSMXSOLQSC");

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
    msg.setTimeStamp(0.46208098259947883);
    msg.setSource(31842U);
    msg.setSourceEntity(91U);
    msg.setDestination(43357U);
    msg.setDestinationEntity(248U);
    msg.op = 106U;
    msg.file.assign("RLHNLMRLMOHTIEZOCTPDTXIICBJJRQBGKLOUHDURVASVWKLU");

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
    msg.setTimeStamp(0.25227744262236385);
    msg.setSource(57922U);
    msg.setSourceEntity(188U);
    msg.setDestination(20047U);
    msg.setDestinationEntity(224U);
    msg.op = 105U;
    msg.file.assign("ZKNVTVDZMCIZULMWJLSOYKGVPTMIPTWCRJELNFVCPCDNLYSAKWDEEFMGWBOSXVFRBZQYGYPVQIWXQSJBEVKPLDYCOUNCTPYUHHZHYFIJUHOTLAVWKAZIN");

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
    msg.setTimeStamp(0.4632115115178703);
    msg.setSource(39653U);
    msg.setSourceEntity(124U);
    msg.setDestination(10970U);
    msg.setDestinationEntity(92U);
    msg.op = 243U;
    msg.clock = 0.9127164563964626;
    msg.tz = -58;

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
    msg.setTimeStamp(0.9881178168929741);
    msg.setSource(50998U);
    msg.setSourceEntity(210U);
    msg.setDestination(19670U);
    msg.setDestinationEntity(181U);
    msg.op = 192U;
    msg.clock = 0.6627604700855626;
    msg.tz = 78;

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
    msg.setTimeStamp(0.4528443618403022);
    msg.setSource(45290U);
    msg.setSourceEntity(112U);
    msg.setDestination(60993U);
    msg.setDestinationEntity(108U);
    msg.op = 173U;
    msg.clock = 0.616971202539426;
    msg.tz = 55;

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
    msg.setTimeStamp(0.5446260244787927);
    msg.setSource(50976U);
    msg.setSourceEntity(30U);
    msg.setDestination(30668U);
    msg.setDestinationEntity(93U);

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
    msg.setTimeStamp(0.8458642565594615);
    msg.setSource(30521U);
    msg.setSourceEntity(105U);
    msg.setDestination(26766U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.7917524672599878);
    msg.setSource(35759U);
    msg.setSourceEntity(128U);
    msg.setDestination(28776U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.43563722623640944);
    msg.setSource(54451U);
    msg.setSourceEntity(86U);
    msg.setDestination(29491U);
    msg.setDestinationEntity(64U);
    msg.sys_name.assign("ENKTOMXHYRBIJVRDHWFUAONPTPAFDVZXLDZBWBQZLHGXBXSQMXOVUAJYDLQPKPSY");
    msg.sys_type = 55U;
    msg.owner = 11864U;
    msg.lat = 0.25802804184957784;
    msg.lon = 0.3398576536710729;
    msg.height = 0.5096583069738299;
    msg.services.assign("AYUMVJPIWYGXXCDDEPISVDCJTMPQXYFSLKLFJPFGDMVQXNPILTHBFJGTCFSYTULPZHUBPAKEWLCIBRWGYWRGMVGK");

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
    msg.setTimeStamp(0.3771809245554315);
    msg.setSource(49391U);
    msg.setSourceEntity(236U);
    msg.setDestination(43628U);
    msg.setDestinationEntity(126U);
    msg.sys_name.assign("OLAONVYKCWOZDNZUEOAVMVYLLHXDHAAQNFPAVUGHDIWBRIMXGCBJSIZYREJXDEJRCJRKOMKEPSALY");
    msg.sys_type = 14U;
    msg.owner = 20034U;
    msg.lat = 0.19640872700302403;
    msg.lon = 0.005123910093013384;
    msg.height = 0.9776753264779934;
    msg.services.assign("JPYPKHYIXEBZAXIKQQANOAWYIGYTKLKZIVTBSTWUGAPLBSXMCRPDEWTFAEFRVQJDQCJXVXPBHMCPILSLGNXDZHOPRPZROAVZVCFKTNWGDUBVS");

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
    msg.setTimeStamp(0.8339306390971725);
    msg.setSource(50033U);
    msg.setSourceEntity(195U);
    msg.setDestination(7780U);
    msg.setDestinationEntity(243U);
    msg.sys_name.assign("UCZKOEMRJWHECZJXMKNJJGQIRIFYSTVBFDTUESGXSBIUWQXEBIHLWYOMZLNVJUHRMSSLNDYLGFUTDCKNJVJTGTOAQXCAQDCHNSZGBKLILGRIDFFNPSPBSNCVILATDJYMNJASYYKUUUPAERGVREFIMKZDTRMP");
    msg.sys_type = 233U;
    msg.owner = 40312U;
    msg.lat = 0.09879140884455062;
    msg.lon = 0.05281201112851652;
    msg.height = 0.4859435348384207;
    msg.services.assign("IYJJSUBSCGTYORTTYYNPSKOQPGXGDXXIDWJKXSBBJCKABJLVZFJCROIZFIPUPRAMPOOZATLQEVNOHPNNLWEUOFPMAZYVUQHJVCMNKMKRUILTWHLKDDES");

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
    msg.setTimeStamp(0.8064573393954555);
    msg.setSource(32034U);
    msg.setSourceEntity(190U);
    msg.setDestination(61996U);
    msg.setDestinationEntity(135U);
    msg.service.assign("YNMDHJEJHNYKIDRMEFANNQXJWRLYUYIZPKFQVSUTZSJTHXMWQLYSXZGWSWWLNQSVKJFKRESLFZAIXKEOXCPYFTYAPFBNEMRDTQPKQGLXGXGRDHDIZOZOEVOZRKQRMLPFPQVUZTMLGYOHGBOUUVHCSADBURZCVNHKVIEOAAAYGHISBFHWCCDMQVBJWLBMI");
    msg.service_type = 104U;

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
    msg.setTimeStamp(0.24435746293726712);
    msg.setSource(3740U);
    msg.setSourceEntity(80U);
    msg.setDestination(54912U);
    msg.setDestinationEntity(138U);
    msg.service.assign("DHKSSVYIYDQVPTGMRUNQZMWZIETACHUHUPGAJFRMBMULWWXHLZQFEMONVZLICJMCZWYCSZXRXKVIOXTBOHDHAHWMVNRRRDPNJRVYGBBFQXWAZOFZAYFXNEOUIIPNTGRNJMMLGKDTXKMTDDHWOHLPBPSFUHFDWUTGILFSEKVZROGWXGOFSPCYSVUSEEEUVBSCBCLBAELVBJNQJCPDQYAAWKNG");
    msg.service_type = 131U;

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
    msg.setTimeStamp(0.5929794383414524);
    msg.setSource(36946U);
    msg.setSourceEntity(9U);
    msg.setDestination(35685U);
    msg.setDestinationEntity(233U);
    msg.service.assign("VMYTGFISLNNHBECNKWYSQAZYOEIIMJFKUFXWXCLNLUNAJOUAPFQVPLCRIWZSICGAHLQLXCBFHHUVORYRKLBHCGMOEDPSKTEFBQTIHJZYHJWKICTZXW");
    msg.service_type = 181U;

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
    msg.setTimeStamp(0.7596159037193131);
    msg.setSource(42075U);
    msg.setSourceEntity(189U);
    msg.setDestination(52699U);
    msg.setDestinationEntity(165U);
    msg.value = 0.11647578127559455;

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
    msg.setTimeStamp(0.8768913028412858);
    msg.setSource(10501U);
    msg.setSourceEntity(66U);
    msg.setDestination(15139U);
    msg.setDestinationEntity(95U);
    msg.value = 0.6791668507265513;

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
    msg.setTimeStamp(0.36702892093009243);
    msg.setSource(46672U);
    msg.setSourceEntity(159U);
    msg.setDestination(17618U);
    msg.setDestinationEntity(43U);
    msg.value = 0.751832026365293;

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
    msg.setTimeStamp(0.9352550613820967);
    msg.setSource(1533U);
    msg.setSourceEntity(67U);
    msg.setDestination(36090U);
    msg.setDestinationEntity(4U);
    msg.value = 0.9560745559264333;

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
    msg.setTimeStamp(0.5968463480805463);
    msg.setSource(54565U);
    msg.setSourceEntity(128U);
    msg.setDestination(37173U);
    msg.setDestinationEntity(253U);
    msg.value = 0.9019236652549656;

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
    msg.setTimeStamp(0.7054906917227094);
    msg.setSource(54378U);
    msg.setSourceEntity(151U);
    msg.setDestination(27060U);
    msg.setDestinationEntity(237U);
    msg.value = 0.8773062824909532;

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
    msg.setTimeStamp(0.9647779890313884);
    msg.setSource(18245U);
    msg.setSourceEntity(63U);
    msg.setDestination(14444U);
    msg.setDestinationEntity(204U);
    msg.value = 0.49159978789370695;

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
    msg.setTimeStamp(0.23878146909101827);
    msg.setSource(8033U);
    msg.setSourceEntity(232U);
    msg.setDestination(18371U);
    msg.setDestinationEntity(242U);
    msg.value = 0.6859711338450442;

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
    msg.setTimeStamp(0.5631920385994996);
    msg.setSource(6489U);
    msg.setSourceEntity(231U);
    msg.setDestination(55778U);
    msg.setDestinationEntity(34U);
    msg.value = 0.26983098958597873;

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
    msg.setTimeStamp(0.35517601000465227);
    msg.setSource(41815U);
    msg.setSourceEntity(146U);
    msg.setDestination(42241U);
    msg.setDestinationEntity(139U);
    msg.number.assign("EBWEOSEAHZHMUCGRCGOYHJVHBPZUQAPRRXXJZMGYRBJYSDHPHKCXKUQEKFVITSCUPRKBNNMTTKQEFW");
    msg.timeout = 61974U;
    msg.contents.assign("SILPCHTABOMUVVGYXXFJBOEQWLETXERVRIZPIKJUUZUOOSBMPIDWLQLEMFEULPFMLHMEAJZDHPFSAWQKSTHYGYYKVAFVWNRTHSAFGTQKCEDTYOTENCJUGQXPEJJNAIRIQUUBJZDNKAHSTDABCFORMSKXHKYOYBRJBWQGPHSRZBDWYODXVIKNNULCRG");

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
    msg.setTimeStamp(0.36864681992771875);
    msg.setSource(58171U);
    msg.setSourceEntity(51U);
    msg.setDestination(63114U);
    msg.setDestinationEntity(18U);
    msg.number.assign("VNCDSDIBUKGORD");
    msg.timeout = 5062U;
    msg.contents.assign("MEFKCGDBSUKNYQHRRMFGBOVPZCFNSNJFKJMOMZMBFDSPHAIJMFGDJYXGYWEFYREWWWLRFWNGXCDRGZUTTQXLQMETIMQINAEWCLXRDJUZNTFTWOOJXBYPNDLPVXQVVICYKRALCSTEJASUXOGYOBPMDZQI");

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
    msg.setTimeStamp(0.4247914939062929);
    msg.setSource(12923U);
    msg.setSourceEntity(131U);
    msg.setDestination(44322U);
    msg.setDestinationEntity(129U);
    msg.number.assign("FSKHRALIUDXDYZHSVKDFUYZLUSLMJWQQZMAKWMROFTEPZKCDATQNROYJJZXITVCHTTPBGQSNAIZAYTCDGTKMFGYGXSIENEGGLIRCTFRIQYXQFVNLNLSVAIHYEOPWBCMWPBUZSUVLEQBAUHJHMBOFKKJJXKAGITNWPOREXOXEEUSBHYGRVBICGLJCBBCHASPUDJEUQPMOVOBQPF");
    msg.timeout = 38745U;
    msg.contents.assign("LMOBFQUXIUJRVLXFHQOCITXFXRMQOGESISDGJNUKPSYEMXFJGQOYZDFGOHWOEVWKHCPXWAABCBOMCAZDVWVAUYHQOMEJWYZHDWNXJWBEQCEGTEPPMRQHSDNLYNIKDMQUJYLFNBSOBUHRRMIJWALVBWKYLRBWRIIRRDAAFPZKPSNLIVHLKPZGDTQCZJZVZLULGCYEDGTQKECBGNITBJDTOASATFKPJNPFYNICMKPUUF");

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
    msg.setTimeStamp(0.11772612396435134);
    msg.setSource(33925U);
    msg.setSourceEntity(166U);
    msg.setDestination(46162U);
    msg.setDestinationEntity(41U);
    msg.seq = 2116572272U;
    msg.destination.assign("DEXFAILWLGKAGLXQDTVELTRTMGFGYPATMICDYEFKNBKVWZZFMMYSFZCYGHAPYHXSZMSRSIKNLVXKCHXGBOVWHWJW");
    msg.timeout = 59500U;
    const char tmp_msg_0[] = {14, 50, -44, -79, -23, -84, 125, 55, -14, -124, -115, -35, -122, -7, 111, 15, -36, -106, 124, 84, -29, 79, 45, -14, 22, 1, -28, -102, 98, -13, -93, -50, -124, 123, -35, 106, 85, -80, -33, -123, 18, -46, 122, -25, -119, 68, 118, 81, 47, -92, 61, 28, 33, 3, 58, 85, -27, -36, 46, 22, -105, 86, -26, 124, -115, -11, -84};
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
    msg.setTimeStamp(0.3531689727391071);
    msg.setSource(17334U);
    msg.setSourceEntity(169U);
    msg.setDestination(44980U);
    msg.setDestinationEntity(108U);
    msg.seq = 3926970885U;
    msg.destination.assign("UUXBNIAOWTWLWGZRLMCVIVJJRYQHUJRJTGKOPBSSCGCADNSJZELAFMAXUJRXAIADTZFTZDHFSQTGYLEMWSCXKQSEBJCELLPSKKPIGZCHKIEIBHNSGSBUAIRDYHDNPGMOQMXBIEEFBRZOCVKVPZKQKTRZCHYNTJMYRPYVMFUUPWDWWMAMFEDCQWRFNVAZGDVUWLFBJOVKSXYOHNTWIXOEQBGCJVUZRONQDFLYQHPMXOYINVETOLFPBYGLTUHKPD");
    msg.timeout = 58228U;
    const char tmp_msg_0[] = {38, 120, 78, 109, 124, 52, -53, -62, 111, 3, 89, 34, -45, -50, -87, 123, 5, -49, 28, 91, 23, 123, -24, 77, 49, 21, 76, -107, -91, -7, -98, -5, 109, -109, -82, -53, 121, -91, -44, -95, 98, -90, -101, -103, -55, 68, 30, 113, 47, 4, -110, 114, 1, 117, -120, -61, 33, 84, 92, -114, 110, -113, 5, 105, -105, 49, 96, 10, -3, -31, -13, 7, -9, -26, 49, 25, 26, -27, 35, 45, -121, 96, -14, 26, 102, -5, 63, -98, 80, -4, -61, -84, -104, -118, -105, -24, 17, 36, -88, -99, -75, -102, 82, 44, -121, 91, -70, -61, 83, 48, 57, -72, 50, -96, 109, 55, 99, 61, -21, 89, -35, -109, -63, -91, -39, 91, -12, -6, -19, 53, -27, 112, 93, 12, -104, -41, -21, 50, 70, 7, 68, -55, 109, -108, -38, 111};
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
    msg.setTimeStamp(0.7318113692660967);
    msg.setSource(59089U);
    msg.setSourceEntity(246U);
    msg.setDestination(27504U);
    msg.setDestinationEntity(236U);
    msg.seq = 2941903550U;
    msg.destination.assign("REMZXWDOLKPUFBSCIZPFWYOWJLBSYWBHZDYGBGFVQV");
    msg.timeout = 53873U;
    const char tmp_msg_0[] = {-28, 60, -3, -6, 13, -39, 96, -35, 76, -46, -56, 114, 20, 22, -70, -37, 75, -41, -50, 108, 81, -111, 59, -114, 97, -71, 33, -90, -5, 118, -118, -92, 45, 105, 70, -1, -48, -47, -28, -30, 115, 14, 34, 117, -72, 74, 3, -32, -11, -109, -8, -56, -48, 38, -128, -64, -26, 68, 40, -78, 71, 66, 70, 110, -32, -116, 92, 4, 88, -74, -119, 10, 69, 93, -9, -119, 107, 95, 120, -74, 39, -94, -101, 2, 33, -97, -117, 84, -85, -38, -39, 15, -19, -38, -6, -83, 12, 5, -110, 118, -32, 73, -43, -45, -108, -91, 36, -122, -65, 100, 125, -102, 117, 92, -106, -28, -96, -106, 96, -112, -111, 124, -24, 68, 14, 116, 66, -31, 1, -101, 66, 106, 27, -115, -86, -27, -60, 25, 90, 55, -95, 34, -9, 42, -110, -71, 39, 78, -14, 39};
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
    msg.setTimeStamp(0.28971358890299337);
    msg.setSource(50111U);
    msg.setSourceEntity(98U);
    msg.setDestination(62864U);
    msg.setDestinationEntity(189U);
    msg.source.assign("GDNYRTTWCSVSPWCZLCXITMJACREDNJKMFBPHYTSIISHJPVSLKSLVUPAONNTGRIUMVZHXOEQAXGFQLLYIOOMPWYBODDBOOWKUXRRFFEPGZNTVMXQMFORCGKETREXZHKIHCKAXOULMRJWIDUUJHJWWZVZSFRFLGAEPEKYVGOQZAVEBMGKBTFVGQAXMTJLUNDVIZKJQDQHMBNITDBYLECYBRQAYQNN");
    const char tmp_msg_0[] = {111, -25, -63, -64, 6, -54, -30, 62, -24, -127, -105, -44, -92, -125, 57, -64, -10, -113, 63, 81, 75, 18, -98, -75, 52, -112, -89};
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
    msg.setTimeStamp(0.7061878429805719);
    msg.setSource(44138U);
    msg.setSourceEntity(63U);
    msg.setDestination(15407U);
    msg.setDestinationEntity(8U);
    msg.source.assign("JRBLDEGDAMIWCTISXZYFYMGUFANHFRJCGEELTLJYYHATKIPLJVQQARPRMRHQSVKXBWHLTWBHKNEFMAEBNCUTIYFGNHKRSBRITMGOJVIOOYUZJSLXKDYIOGXDODVRZQHDBZSYIFLQGKNOGQQABWXLCJMZMBXHEAZZFBUTFIXN");
    const char tmp_msg_0[] = {-52, 6, 29, -120, -121, 45, -68, 73, -82, 100, -24, -29, 58, 53, -87, 29, -70, 107, -74, -76, -61, 97, 87, 16, -87, 8, 114, 48, -79, 14, -123, 13, -13, 113, 16, 53, -69, 45, -119, 47, -114, 77, 56, -70, 72, -109, 103, 125, -77, 41, 97, 19, 53, 26, 116, -67, -71, -38, -43, 119, 12, -116, 17, -115, -51, -74, 1, 102, -38, -116, 13, 50, 30, -58, -39};
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
    msg.setTimeStamp(0.51202877027686);
    msg.setSource(19638U);
    msg.setSourceEntity(0U);
    msg.setDestination(15820U);
    msg.setDestinationEntity(75U);
    msg.source.assign("YQKMKDVCVUHMPXYTKAOEYDCWTUEGFHOQVPNNTXGSYNSBWNKIJLCRTBVPXWFNRAJGOQYZJCOJLJMMDKJBGEKTSHZWYHEOSKSMBQATPXHFOBWRGCFGJZVLGFPMTNAUISCQDE");
    const char tmp_msg_0[] = {53, 80, 9, 26, 78, 118, -91, 22, -30, -46, 71, -71, -47, 20, -61, 101, 70, 4, 3, -65, -16, -21, 46, -64, 34, -37, -94, -12, -93, 80, 123, 62, -115, 8, -31, 39, -39, -125, 3, 88, -63, 54, -36, -33, -114, 89, 72, 126, -58, 37, 126, 81, -38, -98, 20, -24, -111, -114, -33, 25, 81, -36, 65, -88, 120, 8, 51, 123, -78, -23, -40, 66, -11, -59, -112, 103, -26, 61, 116, -16, -12, 16, 82, 69, 23, -27, 39, -21, -123, -85, -20, 85, 77, 88, 95, 123, -123, 18, -35, 57, -116, -18, 85, 119, 36, 43, -118, -126, 1, -84, 22, 21, -90, 49, -39, 118, -4, -107, 95, 115, 5, 89, 49, 88, 46, 51, -45, -66, -43, -98, 59, -52, -105, 122, -81, 59, -22, -31, 89, -103, 27, -85, -73, 98, 13, -59, 92, 69, 113, 87, -26, 64, -2, 53, -75, 5, -52, -32, 47, 103, -69, -79, -55, -47, 82, 5, -73, -58, 62, 109, -103, 75, 43, -123, 109, -31, -55, -109, 63, 101, 87, -27, -21, 14, 8, -89, 125, 115, 95, -57, 107, 65, -25, 101, -31, -91, 50, -37, 89, -26, 120, -54, -62, 69, -59, 27, -79, 93, 83, -109, -116, 124, 44, -97, 78, 73, 116, 81, 102, -127, 6, -31, -7, 64, 55, -12, -44, 100, 97, -102, 54, -119, -116, 91, 99, 6, 104, -74, -30, 74, -2, 109};
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
    msg.setTimeStamp(0.614190684636938);
    msg.setSource(8189U);
    msg.setSourceEntity(44U);
    msg.setDestination(6988U);
    msg.setDestinationEntity(115U);
    msg.seq = 3394529784U;
    msg.state = 112U;
    msg.error.assign("STAVRFJYRXILXZEGVKMFYBFUSKJWXXBCTMUABGELEKOYNUGELKQGKITZNRLUQKDSLMCWXMIFSZSDOANEZFJCWGFSACVCEOSPCMCOYHYBANCQYDSBMXWYPTNNBLZXZMLSVFXWJKAPBZRQHRQWPOEDDTVNOEJTIHYWLRKGVQEKUGUNIHPQOOWOPDHFPBZVJXUJHAGJIPDWRVCXGTNTTUGH");

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
    msg.setTimeStamp(0.7347913785369596);
    msg.setSource(27040U);
    msg.setSourceEntity(200U);
    msg.setDestination(54711U);
    msg.setDestinationEntity(74U);
    msg.seq = 964954773U;
    msg.state = 31U;
    msg.error.assign("QGGZMYWIXJMACTWHCBYXTLEOKKOBBJVNVAEQUNKGDVFCIHYBJNZPYITYE");

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
    msg.setTimeStamp(0.11262441419700375);
    msg.setSource(57493U);
    msg.setSourceEntity(35U);
    msg.setDestination(17043U);
    msg.setDestinationEntity(77U);
    msg.seq = 3032601010U;
    msg.state = 60U;
    msg.error.assign("DCZRDTRCRHQPIUZJILTJURMBOZBYUGGSCLTSERIKUAVLUYBFXPANTPOEYJUYMEDKQMPVNAJAEQHBDJFXAUYXFHHMWZKEWOKQYNSSTVMMFGJYOLLCVIGSURDQWFSIPEFYRTSAHGTIKGJIICGVXCVOUJZSOBJJDRQBVLLHHAPZZOKOFENADLEDBHWMZXUMNBQQKGNGNFPRKCFAIZVBOOSGIMLCCSMTLYNCVHEYKFTTHWWPWBADVPXWNRNXP");

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
    msg.setTimeStamp(0.4679672844662567);
    msg.setSource(40U);
    msg.setSourceEntity(220U);
    msg.setDestination(30620U);
    msg.setDestinationEntity(16U);
    msg.origin.assign("UBBTKCSKVDUWOIPJIZGLWDMEXMOWPNIBHVULPKUHIJRWZZOSZRQIHYTVDMINZDOOBQDRVJGCMJCFCTHCHXUXANOFAGGEUZHQRBIIBJAKSXYXJYHEKKAANFSHPKWPFNVPJKEYDYCZYRSTYLVNHGRVJTGYIPCKRQLTWYFBQQJXUTPEFARMXCEFUZSVTTWDEWUFM");
    msg.text.assign("WZBRWRYEJHAJVVXGJMODSEICKZNHACPIJNDDATSCLLWUCBMCKLSOWSMNLIUYJDJOZLRSBIXTXFGMIDBYHVNTPFPGOXQNWGBKGUZCBBSSZDUWKHVZVPAQHMZTFFLTOQIZQQLCOQXVJCRCEOUPENMYRNLYMAXYSXPBSKRUJGXCGATHFJLPPMWRBNDTMEPHEPYADKHMLIGWIFQVVOTKRZVBYAQEHFUHKZ");

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
    msg.setTimeStamp(0.9908710324072476);
    msg.setSource(17581U);
    msg.setSourceEntity(151U);
    msg.setDestination(56113U);
    msg.setDestinationEntity(157U);
    msg.origin.assign("KYMVGXIHIRJBAEEATTUQZHPRPXNXGLMMNMVMQAJMNNNUCXZGZUYITFZLGJSBEMNYIIMTYKCKLDHWOSRITTWCVJFPVHWVTQZSWSHLLWZXNYEZHJLQFLGCBBPSPKFYXXACCUZHCPPOYDIMTOQFADBBRVGFRDJMUHEZOHADYUOOFWKPWRSSRDTDWXYVEGGVKIKQESVOAULAPPQNOBWNQAGKUFLFUESOTRQDEORBYQCBJUKXEDJSRHJKXDAIC");
    msg.text.assign("ZWHZSHLMNSERUMSNOVQPSNEOUFSGPJJUIXUXZQYTRMDBCZLSKDQJGRQUHOIGYNZROSQFMSAABCJKVIAFXKYZBTWNAVMEVLKJVCAHUUFMGGWFFTILBTICALYCOLPZDJQYFKYTBFDOHWNKPNERYYKIHPEEWHTTKDNWZBVXTADMXGLDEGWPXXRVVPLXFH");

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
    msg.setTimeStamp(0.6785095620189748);
    msg.setSource(49619U);
    msg.setSourceEntity(11U);
    msg.setDestination(17109U);
    msg.setDestinationEntity(199U);
    msg.origin.assign("CHQYPTAQQNRUDZVOJWMPHBUFOTYSFDEHBUCRFVHCGEMGFAANMWUGYQMKECQAPOIZWHSRKRDHPVJJKPVGIJMUUEKTZDNVAPUDZPYDFEYBIWSZSYLHGILAGEXKIDOPSPVHDRMFNOWGRUJJBZROHSQXDTFVCENJYJPOZMQCNXLIFSCMORRXBJXMOATQYZXICXYACBLLLZZBNMEOTWGCRIBSJWNXWT");
    msg.text.assign("QKQCKLZFMLUVIBZOWKPXCQSCXPBDWOIYRCFWDYTJZSPJPPOAYDFBLZOZIATBKVVMNGHXGXRGKLVFHXTHGCMXTUPMSTVXE");

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
    msg.setTimeStamp(0.8066032244288346);
    msg.setSource(32415U);
    msg.setSourceEntity(168U);
    msg.setDestination(19637U);
    msg.setDestinationEntity(104U);
    msg.origin.assign("XDEDCRGOMULVWJUSLKHEGNPRENGJYVXYNFBOGPKBXIDSMMQATPNNOFTUUZUKALDXBTROHYGQDZOQWVRRHRWJEGBYN");
    msg.htime = 0.8368505232508597;
    msg.lat = 0.3506762291110025;
    msg.lon = 0.9161811903813771;
    const char tmp_msg_0[] = {-100, 10, -90, -68, 24, 42, -123, -114, 0, -3, -8, -38, 72, -40, 3, -32, 63, -87, -18, -126, 35, 40, 51, -18, 16, -78, -2, 105, -81, -4, 27, 125, 0, -103, -45, 124, -61, 124, -58, -2, -109, -126, 79, 39, 40, -105, 29, -84, -28, -105, -93, 123, 123, -62, -124, -38, -107, -22, 22, 59, 41, -116, -16, 15, -48, -26, -92, -29, -39, 76, 44, -26, 18, 121, -96, -126, -68, 23, -61, -118, -122, 3, 4, 70, -11, -57, 38, 117, -31, -101, 124, -27, 119, -106, -110, 72, -46, -47, -115, 67, -17, -27, 115, 113, -65, -30, -108, 29, -75, -110, -45, 20, 45, 118, 32, 28, 54, 23, -94, 100, -12, 47, -44, -111, 57, -113, -42, -126, 61, 68, 72, 57, -28, 106, 13, 26, -25, -123, 9, -15, 75, -39, -102, 6, 21, 0, -7, -17, -92, 20, 64, -52, 99, -7, -107, -48, 87, 88, 125, 42, -30, -34, 67, 96, -25, 88, 98, 106, 89, -4, -3, -118, 42, -84, -7, -52, -100, -92, -100, -56, 15, -97, 108, 17, -79, 12, 101, -88, -113, -115, 5, -117, -119, 65, -47, -38, -35, 36, -110, -85, 11, 18, -128, 58, 83, 7, 39, 71, 16, 98, 123, -128, 23, 40, -75, -78, 20, -66, 53, -77, 106, 51, -65, -105, 28, 104, 69, -57, -57, 0, -64, -126, -24, 70, -99, 124, 95, 8, -94, -41, 44, -110, -115};
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
    msg.setTimeStamp(0.297918676048483);
    msg.setSource(12711U);
    msg.setSourceEntity(222U);
    msg.setDestination(44819U);
    msg.setDestinationEntity(111U);
    msg.origin.assign("PVJIVPTJFXWNIJZDYOLWIOXPYGWYEHLHTOUNKBUVCDCMTNIZZHEDQKPRGIOTGFWJRPBBZAKBKJFGWERUHGSAAPQREWZIEAJHRRXJKNVEODPRUXHVQGOLLKSECXASDMUPMYXFN");
    msg.htime = 0.4109761984748974;
    msg.lat = 0.6294873453943665;
    msg.lon = 0.09913985485312382;
    const char tmp_msg_0[] = {-102, -123, 1, -124, -101, -94, -85, 101, -48, 27, -60, -114, -19, -14, -88, 37, 24, -28, -32, -38, -25, -37, 26, 100, 55, 124, -17, -57, -19, 72, -20, 69, 20, -73, -41};
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
    msg.setTimeStamp(0.09973945032318032);
    msg.setSource(14190U);
    msg.setSourceEntity(193U);
    msg.setDestination(49408U);
    msg.setDestinationEntity(97U);
    msg.origin.assign("XLFGPDNUFEPEMHYPFJYCAEAXXOILQXCHBMYDRLZNZQLCWUWMRAONONNKWTUOOEWDFHQHTNAJNBEKYQQDBLRIRUVMQGZGKGJXQQRRQTEJMWTXYTZWAACVHCTKOTOCMKIRCBHPBYPLSUACMJZUIALGJUUVWZSKBVTJPPESSFJEXMYKLBIFKSCTWDFVAVZNSIKWQOAPUOTSKZ");
    msg.htime = 0.308341518144827;
    msg.lat = 0.057885159355832716;
    msg.lon = 0.5923915917552132;
    const char tmp_msg_0[] = {109, 91, -72, 9, 21, 17, 115, 12, -112, -36, 112, -69, -7, 116, -5, -69, -61, -79, -72, 90, -46, -5, 82, -33, 30, -106, 68, 29, 124, 44, -99, 108, -43, 113, 115, 70, -103, -79, 101, -124, -48, 34, -18, -105, -14, 113, 11, 101, 109, 6, 50, 46, 109, 83, -114, -3, -65, 87, 17, 83, -128, -58, -126, 56, 43, -128, -23, 10, -34, 67, -48, 78, 99, -88, -59, 41, -122, -37, -9, 47, 83, 3, -50, -16, -41, -125, 12, 82, 11, -111, 108, 71, 122, 114, 34, -107, -5, -53, -67, 14, -1, 5, -88, 5, 51, -14, 87, 79, -21, 105, 1, 64, -64, 8, 73, 34, 70, -88, -81, 85, 118, 26, 84, -27, -94, 39, -88, -14, -5, 21, -58, 116, 126, -5, 124, -115, 117, -13, -38, -1, 79, -42, 55, -65, 100, -52, -38, -125, -12, 54, 60, 55, 53, 121, 17, 94, -108, -118, -20, 10, 124, 50, -21, -69, -99, 37, -91, -67, 126, -43, -60, -51, -44, 45, -63, -66, -89, 125, -14, -42, -64, -39, -29, 96, -20, 81, -91, 23, 122, -11, 78, -58, 11, 56, 104, 98, 74, 52, 46, -8, 20, -86, 42, 71, -85, 71, 104, -115, 98};
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
    msg.setTimeStamp(0.5986933796595739);
    msg.setSource(48141U);
    msg.setSourceEntity(144U);
    msg.setDestination(11434U);
    msg.setDestinationEntity(210U);
    msg.req_id = 44357U;
    msg.ttl = 46704U;
    msg.destination.assign("GKOBTQPXGOCXGDPZHBWDKUKRJPXZPBTFTMGMAUDRJSYJGXNQYO");
    const char tmp_msg_0[] = {-78, 77, 77, 70, 70, 120, -30, -26, -96, -30, 106, -78, 94, 27, 101, 34, 38, 87, -76, 75, -102, 125, -36, 58, -54, -128, -45, 85, -30, 19, -65, 57, -82, 51, -58, -11, 17, -57, 118, 90, -7, -73, -117, -30, 113, -65, 1, 98, 24, 31, -97, 92, -66, 98, -97, -58, -73, 1, 43, -2, -76, -98, -83, -105, 46, -123, 17, -5, 27, 106, -112, -21, -85, -16, -103, -98, 57, 97, -34, -38, -9, -106, -16, 75, 98, 13, 2, 100, 65, -127, 27, -69, 79, -86, 4, 124, -90, 125, 71, -126, 119, 100, -77, -20, 80, -72, 54, 69, 69, -115, 124, -116, -84, 84, -9, -128, -77, -60, 88, -21, 35, 7, -56, 31, -56, 58, -102, -121, 119, -9, -27, -93, -63, 116, 28, 46, 10, 98, -113, 44, 71, 105, 59, 12, -52, 38, -93, -83, -12, 88, 68, 11, 20, -69, 29, 81, -27, -78, -111};
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
    msg.setTimeStamp(0.29231369910264715);
    msg.setSource(7714U);
    msg.setSourceEntity(196U);
    msg.setDestination(10516U);
    msg.setDestinationEntity(123U);
    msg.req_id = 57978U;
    msg.ttl = 46499U;
    msg.destination.assign("BGBHYGTCUSFCKTZIPWGJQPBNOJDHSZELULNOMUDLAZOSATCIAWGGFKRIEOEVOQTAWOLMSLIWGVRVJPQZUWHJBSPMXMYGAPOFKSLNVSQZHNAGRZQODZCRRQDYWZJXNFIEIZCSODXTQWKYKYHPXNDCYYVVEXJKMFBFUNRYMVUJNXRJXTKQBLCIFHELQBWDYK");
    const char tmp_msg_0[] = {-91, 73, -96, -104, -32, -46, 60, 37, -27, 51, 42, 62, 106, 39, -94, -52, 125, 80, 24, 46, 52, 91, -123, -105, -57, -28, 125, -41, -93, -33, -111, -56, 109, -52, -72, 21, -17, -99, -79, 91, -70, 62, 57, -111, 24, 125, 86, 72, -28, -36, 24, -22, 106, 89, -8, -113, 56, 104, 27, -61, 104, -99, -123, -108, 3, 116, 22, 7, -16, -84, -35, -94, 110, 117, 126, -11, 78, 96, -17, -125, -65, -50, -117, 54, 8, 99, 70, 109, -110, 56, 33, -70, -22, 6, 55, -71, -116, -99, -8, -49, -120, -64, 33, 70, 63, 53, -74, -128, -106, -49, 104, -55, -60, 105, 11, -81, -77, 107, 112, -36, -73, -45, -57, 50, -41, 70, 60, 21, -18, 58, -74, -103, -57, -54, 47, 1, 36, -69, -111, 10, 6, 74, -7, -112, 8, -101, 110, 67, 79, -84, -128, -58, -3, 46, -53, 56, 23, 64, -121, -24, -97, 84, -82, 3, -63, -73, 101, 97, 114, -101, -61, -30, 123, 16, -90, 13, 5, -16, 116, 49, 38, -71, -47, 16, 96, -57, 95, 19, 114, 8, 64, 124, 18, 36, -81, -96, 88, -64, -111, -60, 29, -96, -109, 42, 98, -89, -11, -87, -124, -106, 7};
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
    msg.setTimeStamp(0.44601886021983017);
    msg.setSource(54045U);
    msg.setSourceEntity(233U);
    msg.setDestination(12927U);
    msg.setDestinationEntity(163U);
    msg.req_id = 4358U;
    msg.ttl = 2073U;
    msg.destination.assign("ZRWPRMCFDXPNCOKTNEGEEZQIKZVYBWLRYTETNUSQIKSLLUATRFUTZAKVSHLEVEJABOSYFIHDYUWQVDTAEBJDALZQYQPQYNDRGNQDQUWCH");
    const char tmp_msg_0[] = {-40, 118, 90, 57, 48, -76, -98, -72, 15, 43, 4, 16, -25, 117, -95, -103, -89, 59, -126, -91, -15, -90, 90, 114, 76, 12, 68, 11, -58, -43};
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
    msg.setTimeStamp(0.17381470308033342);
    msg.setSource(64609U);
    msg.setSourceEntity(215U);
    msg.setDestination(63463U);
    msg.setDestinationEntity(187U);
    msg.req_id = 2084U;
    msg.status = 155U;
    msg.text.assign("JJKMBUHKUXCQRPJFITBFNGQWBUDCIBGXBKPUTLOSVDRVFANFCWQXNLMWCNZVSXSRBADZHZGBAWLYHUOOYXFDMVBJIGCXNWODECBPJNDYUQKSRCQRMTRLSQMRAMYFYVGSNPJZIUROHM");

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
    msg.setTimeStamp(0.369585513409147);
    msg.setSource(38167U);
    msg.setSourceEntity(158U);
    msg.setDestination(20546U);
    msg.setDestinationEntity(147U);
    msg.req_id = 13737U;
    msg.status = 213U;
    msg.text.assign("IWRMWTQZIHZVVDZEFRFBKJFTGKFAMFAAEDIOHIFAOBTHMBAJGUDSZVERKYDPEQFCZOJFWWEWWWDQYJHXDXDVRSHGWUUDZTHRBUPCPSEORQPJRIVXSMJSHSTCRLXALHGOOIUATLILQLWCEXMGZNSQBBFBKHYMMCWPNNN");

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
    msg.setTimeStamp(0.34898554793633385);
    msg.setSource(47876U);
    msg.setSourceEntity(166U);
    msg.setDestination(25955U);
    msg.setDestinationEntity(93U);
    msg.req_id = 51262U;
    msg.status = 249U;
    msg.text.assign("BAQGULXCNMFNFONQQPYAIFIHEJPBKDCFNQAWIEJOVKPVODHNGUBJBXJTBWYDMRTZQJMPLS");

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
    msg.setTimeStamp(0.027109276933878212);
    msg.setSource(53651U);
    msg.setSourceEntity(34U);
    msg.setDestination(63878U);
    msg.setDestinationEntity(229U);
    msg.group_name.assign("FUQPZMESLZYRYOAMEVBLIJXMWRGJNDIAKUCIQLBKWQSBWBYCDPGBEMXBPKYQPTRNSHCVKNCNIHIJENYHQTDURLJMTXDRYKTUEYFGZROMZPGLTHDFFHMFIJNHMZWFWMPTAQTNEAXQFEVOIPTFNSZLQULSOVRULPDZKDQCVAJKCGHDXPDUBJ");
    msg.links = 531593187U;

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
    msg.setTimeStamp(0.9973908602248347);
    msg.setSource(41108U);
    msg.setSourceEntity(208U);
    msg.setDestination(59413U);
    msg.setDestinationEntity(171U);
    msg.group_name.assign("HYCTEMQAOTKOINJGTFNLFAEUXIHSWVBUUSUDXPGIDVVROEWYNWTHNQZZPMPTIVEKDVGAGLSBZLGNBEEYJSANAOMHFEHTVGWJZJWZYMMOKZSABOSQLUCLTCKTVABXFAIGFIUJYZUFOYBTLAXFXG");
    msg.links = 1098095345U;

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
    msg.setTimeStamp(0.6451522748628052);
    msg.setSource(50897U);
    msg.setSourceEntity(84U);
    msg.setDestination(7408U);
    msg.setDestinationEntity(177U);
    msg.group_name.assign("XBKDHTUHKJHQIIOWADQVMEVNJAJRHGNQNVNILXHGHFKJCCPRJPWDDCFCCETDPLRTQESAMYDLQQKYFNLTKTSDXCHTUGQTTAKWFZYQZKXFPKHEJRZYEXURPJMJVBWZRWWCPDGLOPMGCMLZZGMUWOFOVOURIYIIASYBUWONPYVXXEBHSUAEOJPXNTNBXIZLNISSQFXVIABTDEBJBOYVOVSRGDM");
    msg.links = 4024432121U;

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
    msg.setTimeStamp(0.6540331094400209);
    msg.setSource(40048U);
    msg.setSourceEntity(151U);
    msg.setDestination(20078U);
    msg.setDestinationEntity(182U);
    msg.groupname.assign("MWCLJFVNTFJZNWBQTXLXQNWWEULGHXMWJISGHEONABTNEQXAPLTKUNAVDCROUWMIXGNACNEQPSMQAVARGXVIMDAMCKSHHPOYDZKCUYOMFRPWUCVYPZRKWICZZRUDUEXKLMTZVOJODHTLYBZYBHKGVBPRAWZUGBHISHREIGGXVFPRYSYRTDFFOJOTXLJKBESPBUSDRNVHQWYDFPSZSJEKGFECBVQTHDIJNYCUJGQZBLQT");
    msg.action = 154U;
    msg.grouplist.assign("BLXXGBFCSEHQWDTESDJNRWPAVEFRATPQJOXCAOJUKXJVWZGKSEOGVUQC");

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
    msg.setTimeStamp(0.5364428460828932);
    msg.setSource(29817U);
    msg.setSourceEntity(148U);
    msg.setDestination(56003U);
    msg.setDestinationEntity(137U);
    msg.groupname.assign("WTDAYBXIHKZLGRAJUNIGBBVNPKATNGGZJQUMRZWNOCUELSXHJDXXHIACPSYGRPBZLQBRXVQFLDCBLSIFMJUKCUQEZHTJMKJLFHDMEEFVWYJPJWLQFKOKUSYGGOTRTRXAWBOODBQDORMOEIVMMXIRNWZ");
    msg.action = 216U;
    msg.grouplist.assign("XDTZVEYZHPFXKERLGVOLESJWSKSMVGQSXEBZEKPHNICGAXNMIMXOLATFPYHEFLMRTAJNTMTFY");

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
    msg.setTimeStamp(0.8691136776387302);
    msg.setSource(51870U);
    msg.setSourceEntity(115U);
    msg.setDestination(31161U);
    msg.setDestinationEntity(140U);
    msg.groupname.assign("YNJMVRZZKPSDYRAGBBWEKQCWDWEUMEHCPYMFLTHSFSVFDRUYAQXXLVNIJCBEQEYBKHEWCOUMXJVZSTSIWQMAQTUILWOPPDGUOEOCJEQXFSVKAGNCHLBWPYGITIM");
    msg.action = 211U;
    msg.grouplist.assign("GHHKPKHUMQKMRANCBISWGWFCVMZZBECWHXJTTCGPBOTFBEAJMQEDUBRGAVTMWVZGAFWORMUXOUIIXNBRRUGKWYDNTJZZLLXYYMACDZEMWHJXYPDPVZSYTKKYVSCABXJACGFQLPSPRRTLQSVFESSVHVLOOLINGXDYOIDDHNHWLNJFUROQWYFTJLTXURRKQFXIYOKIGIASIMVBNEUOQZGTKWXDZNSNSOMNFPEQQJFDAEPBPLCELVJ");

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
    msg.setTimeStamp(0.18242598210326944);
    msg.setSource(62569U);
    msg.setSourceEntity(16U);
    msg.setDestination(41498U);
    msg.setDestinationEntity(206U);
    msg.id = 85U;
    msg.range = 0.002079558019708938;

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
    msg.setTimeStamp(0.8216779520400063);
    msg.setSource(41986U);
    msg.setSourceEntity(211U);
    msg.setDestination(36422U);
    msg.setDestinationEntity(23U);
    msg.id = 241U;
    msg.range = 0.8729853481045323;

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
    msg.setTimeStamp(0.4020510244843023);
    msg.setSource(43748U);
    msg.setSourceEntity(137U);
    msg.setDestination(39231U);
    msg.setDestinationEntity(90U);
    msg.id = 108U;
    msg.range = 0.8569903996900754;

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
    msg.setTimeStamp(0.3616342422012684);
    msg.setSource(18027U);
    msg.setSourceEntity(173U);
    msg.setDestination(56874U);
    msg.setDestinationEntity(151U);
    msg.beacon.assign("NMSCJRYJLKLTBHFPYQTNSRTIOIKHBJHBICWOMYERRDQCAKGXPFTZECZWJXSRETTVVGOEHRYGIRSXOIEETJJNQZSSHMBLNGKDGHPGJZLEUAGFABXADIBWFZSUTFNYMUSZRFVDEQWVVCCIDYYSDPQKAEHRVCNLNFNGIQJOPWUDKPGAWGQVQKL");
    msg.lat = 0.5115971154890948;
    msg.lon = 0.7754839317859323;
    msg.depth = 0.9290057860484042;
    msg.query_channel = 249U;
    msg.reply_channel = 13U;
    msg.transponder_delay = 54U;

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
    msg.setTimeStamp(0.7724682582906051);
    msg.setSource(54417U);
    msg.setSourceEntity(98U);
    msg.setDestination(38872U);
    msg.setDestinationEntity(106U);
    msg.beacon.assign("ZQWKVFXHYVVUUXGYWLNUZCRJACGJTCMXCYCJDMHLWPCNTTFBPFPFBADGXBGZBEJDKKCJHLTBADQMAWKIOLSYZOFZLRUGPCISLUFHSHBTJTYCAVEPANOKQNDSHZJRMLIARECGBMJBHQEMAUEQOKDSQEWEZIOOFDLPIBOQRSNRQXTRVPHVXWENSMILIKNXOVWYYMJPZLKWDKNSXIJVPGQNYTTWUYFKXGM");
    msg.lat = 0.8883800122244385;
    msg.lon = 0.7462861345087738;
    msg.depth = 0.02340527075477572;
    msg.query_channel = 94U;
    msg.reply_channel = 133U;
    msg.transponder_delay = 64U;

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
    msg.setTimeStamp(0.6193172723611776);
    msg.setSource(32077U);
    msg.setSourceEntity(10U);
    msg.setDestination(64502U);
    msg.setDestinationEntity(150U);
    msg.beacon.assign("LDUJFZRVZFJREPAICKTZATQSWGXYYPTRMKNRSDBMVHFLGGBOGTOJCUIZSIKLTUIEMWNNEDSHKMYBKWWBXRQDQBAPQGCEVPFUUEWITSKXFQSBFQIJOUJUCUXJPYNWOVRZVQYCCLWCPXMXVWMSKPEZBNJWZLMNIREHCAYHEMRGZUPOBVFAJJDXXDYCGAKIRDBXCHLTXWHGALNKHHFPHMKNEOAVD");
    msg.lat = 0.12794539961331008;
    msg.lon = 0.4776885300938284;
    msg.depth = 0.6749680169857019;
    msg.query_channel = 121U;
    msg.reply_channel = 177U;
    msg.transponder_delay = 167U;

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
    msg.setTimeStamp(0.7083297468634933);
    msg.setSource(56105U);
    msg.setSourceEntity(128U);
    msg.setDestination(14379U);
    msg.setDestinationEntity(5U);
    msg.op = 154U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XJXDUOIVDOYPMYZLCZXMRFJFYOWEKSERXFQOZTMNZRE");
    tmp_msg_0.lat = 0.6648946359398028;
    tmp_msg_0.lon = 0.5714307721786538;
    tmp_msg_0.depth = 0.16405758420401118;
    tmp_msg_0.query_channel = 134U;
    tmp_msg_0.reply_channel = 58U;
    tmp_msg_0.transponder_delay = 110U;
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
    msg.setTimeStamp(0.43520350455574064);
    msg.setSource(24045U);
    msg.setSourceEntity(254U);
    msg.setDestination(35259U);
    msg.setDestinationEntity(164U);
    msg.op = 85U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QXBVTAZPGBCFEKXSGSYKDBDJMQGTLDKEWGOYE");
    tmp_msg_0.lat = 0.2614378128148226;
    tmp_msg_0.lon = 0.9387687950819485;
    tmp_msg_0.depth = 0.055181098955455754;
    tmp_msg_0.query_channel = 0U;
    tmp_msg_0.reply_channel = 201U;
    tmp_msg_0.transponder_delay = 24U;
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
    msg.setTimeStamp(0.4261199908219886);
    msg.setSource(31843U);
    msg.setSourceEntity(4U);
    msg.setDestination(50426U);
    msg.setDestinationEntity(8U);
    msg.op = 160U;

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
    msg.setTimeStamp(0.4033906972696376);
    msg.setSource(36246U);
    msg.setSourceEntity(253U);
    msg.setDestination(2772U);
    msg.setDestinationEntity(225U);
    IMC::VSWR tmp_msg_0;
    tmp_msg_0.value = 0.9520031234098625;
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
    msg.setTimeStamp(0.7625530836928491);
    msg.setSource(15769U);
    msg.setSourceEntity(214U);
    msg.setDestination(36348U);
    msg.setDestinationEntity(83U);
    IMC::ManeuverControlState tmp_msg_0;
    tmp_msg_0.state = 153U;
    tmp_msg_0.eta = 11893U;
    tmp_msg_0.info.assign("IOYOZPQPBYOJCWOFHGHEAOEUIVPVPYGQDRVWMZYCXGPREJZRPIXHDDMIPHFRJXNSMAOFMBAHKZLJZFPATVIBNWTTRESDDXBMAFVENXSPJMKHKSNTUJLULOQSKQKNDKQKQEFLWOEIGZRASLLBUTNDIICWADBUQTMYSZDGSBQFENVDFKXOSMFCIGZBVYCASFAMTVNJZLWRULCGUW");
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
    msg.setTimeStamp(0.4249358351704643);
    msg.setSource(28730U);
    msg.setSourceEntity(246U);
    msg.setDestination(65443U);
    msg.setDestinationEntity(130U);
    IMC::Memento tmp_msg_0;
    tmp_msg_0.plan_ref = 2782438504U;
    tmp_msg_0.id.assign("UKCZZFNHKZVHOIPVMSRUEWWEEFEZFORBCCTTYFYVBEJJPQVRZBUCLZONXRXGRYIHSFGLNRGSYLDDVWMVATJBEIMOLADJGSHBALWIWBKHEFAPLWFGKVIGQRKDAQXIMEXNSZFLDSXNOPEWBUFYDPLXRMZHTMJTSQSAQCTOMZWUCNIBZDKIYXXU");
    tmp_msg_0.memento.assign("UZRBCQSODTWPFHGOYYHJNOYBAHGVWZLTQJLSVSZABHMJTEQMCCMMIWKHBUJWWIYWYCKSMNVXVQSRIQOCYPCNJXHYDXEDLBRIWLTXAELPPMCZPDMKUVWIHXEPTHBIMDHXSSTEZNGGAZLPEJVCVOYXBZXTPUSSRSALNFB");
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
    msg.setTimeStamp(0.5571219568575067);
    msg.setSource(12705U);
    msg.setSourceEntity(188U);
    msg.setDestination(26247U);
    msg.setDestinationEntity(21U);
    msg.op = 214U;
    msg.system.assign("JTGMNEDBMVDRJALUDPSLXZFYKNGHIQXVHLCRCGDKRAWZZTVHURQCPDVFSIPGTBPEPOBOJHOYPSYFZMCNQWUBZUZOMRBFERIANGHTLISSMJFYGWNHUEKATWHLFALQZYMOBLWPXIBAYTDYNUCMQZ");
    msg.range = 0.39786824005206445;
    IMC::NavigationData tmp_msg_0;
    tmp_msg_0.bias_psi = 0.05711924374746635;
    tmp_msg_0.bias_r = 0.1954129208648253;
    tmp_msg_0.cog = 0.524095231635346;
    tmp_msg_0.cyaw = 0.8580230335162067;
    tmp_msg_0.lbl_rej_level = 0.3273619770745646;
    tmp_msg_0.gps_rej_level = 0.9233710124600946;
    tmp_msg_0.custom_x = 0.8173361655141546;
    tmp_msg_0.custom_y = 0.8586757764861744;
    tmp_msg_0.custom_z = 0.40971484700541894;
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
    msg.setTimeStamp(0.9207208947908775);
    msg.setSource(17268U);
    msg.setSourceEntity(211U);
    msg.setDestination(16212U);
    msg.setDestinationEntity(142U);
    msg.op = 60U;
    msg.system.assign("QAAZMCIEECUBTKVSAJOFQXYDKHKXIIEOXJLUBSVGCZSADGDDENPSHRDJYVMSWXUFZDKFGBYDROIELHBWVRJVMEAOKZYMPRNWSFJIFTRNUCWMYWT");
    msg.range = 0.11517299764188682;
    IMC::Event tmp_msg_0;
    tmp_msg_0.topic.assign("RIALMAKWNXNBPDQDYFAPBNMVRGNNLUYWDRTBBUJWKGHIKFJJWWXMLEYJHGFKSIGZQLPOQCELUXVDFTSBOROCFZFKYICPJHPJVUTEVYOQVUXCHCEMZXMASIEDHXCZSOKWZVQOLMMTWZLATTFSCSQEAXPRZCHIHJFNRBUGAIPYEYABHJEUOISSGVANWGODCWMTVROETIQDITRYABBVC");
    tmp_msg_0.data.assign("PSIHWPAPHXSCREZXVRJBJCXYNKQHNHNLBDFDQXBWQBBMDYMEAVRMUUDFTNKTYQAOBADTUZWCJQCJXKAEYGSZZMJWVRFSNWCZXSAOHPRCFLMVZCNHKTYHYAI");
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
    msg.setTimeStamp(0.055838959576017144);
    msg.setSource(40877U);
    msg.setSourceEntity(215U);
    msg.setDestination(41700U);
    msg.setDestinationEntity(203U);
    msg.op = 94U;
    msg.system.assign("IJAWLEWHBGCGMOOUPLKDKYZDNRGGVNZTPEKFFWCXVLPBYXIFSRYUVQJZFCZVAYTKZIEDDWBCHNIFJNLNYJPQASVZNETJFNSUGAHAYRDEQYLDUYRGKQLIMBAAQTMRUBPWITKULRKCHVCPLOWHWRVOGLWDOSKUAXQNBZIXEUVLQHDDRWUTWCSPOPEMZ");
    msg.range = 0.4287233063796003;
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.42161788774758335;
    tmp_msg_0.lon = 0.45486834605429227;
    tmp_msg_0.height = 0.6867143266675526;
    tmp_msg_0.x = 0.5702191691533768;
    tmp_msg_0.y = 0.3820981072878026;
    tmp_msg_0.z = 0.7345185876167946;
    tmp_msg_0.phi = 0.5259086246659062;
    tmp_msg_0.theta = 0.298007016542996;
    tmp_msg_0.psi = 0.26424578207932525;
    tmp_msg_0.u = 0.17360980999992703;
    tmp_msg_0.v = 0.710942492665053;
    tmp_msg_0.w = 0.3149155700505195;
    tmp_msg_0.vx = 0.5635200012942948;
    tmp_msg_0.vy = 0.4930225408817237;
    tmp_msg_0.vz = 0.21994996880865114;
    tmp_msg_0.p = 0.8083984072748923;
    tmp_msg_0.q = 0.7534321572924608;
    tmp_msg_0.r = 0.09401034648014717;
    tmp_msg_0.depth = 0.20449765412964482;
    tmp_msg_0.alt = 0.5240061008453846;
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
    msg.setTimeStamp(0.9514119195199751);
    msg.setSource(64196U);
    msg.setSourceEntity(85U);
    msg.setDestination(46200U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.14900799513943763);
    msg.setSource(53452U);
    msg.setSourceEntity(112U);
    msg.setDestination(31620U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.8980817892413638);
    msg.setSource(63760U);
    msg.setSourceEntity(125U);
    msg.setDestination(3893U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.35194612241291334);
    msg.setSource(56359U);
    msg.setSourceEntity(19U);
    msg.setDestination(9588U);
    msg.setDestinationEntity(64U);
    msg.list.assign("JVOBCZTIIDCZRG");

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
    msg.setTimeStamp(0.33172539660725187);
    msg.setSource(47433U);
    msg.setSourceEntity(38U);
    msg.setDestination(15559U);
    msg.setDestinationEntity(232U);
    msg.list.assign("VYUJWJAEMHQZPUONJISZRHZVFAJLCWVBIPGCPXWKLIRQPJJYCKKZUEDSSAGIFIQDMAQMRNWCDUAQHGSXNZLQRXZIIXQOLKHGFXDDQOTXRZFOUAGLREIVWTREDNAHOVTGOLTNTWJPKQBAHXBHYLMLSGVNWIERHWVPSYRYKFENBDJGGKXYDENYMCHU");

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
    msg.setTimeStamp(0.18894411562574076);
    msg.setSource(20635U);
    msg.setSourceEntity(52U);
    msg.setDestination(43659U);
    msg.setDestinationEntity(195U);
    msg.list.assign("PJYUTZOUEDBTDJCQBFLPGWQJRISZCEEYTEWNQEKNNLHGJJIOOHACPFITIWORTGMYDHZFSKUSPGKORRXTNRTVVCSXMDZFDOCGHOWHXWWGJMEWPPNZCHFTNRLCMRUYRJIUYIBMCBOYXAKMFJSDNNBVDVKUKBLATILEBRXEZQMTAXDYAXPMKCVAKHL");

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
    msg.setTimeStamp(0.0541977389758691);
    msg.setSource(48002U);
    msg.setSourceEntity(54U);
    msg.setDestination(28273U);
    msg.setDestinationEntity(190U);
    msg.value = 29357;

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
    msg.setTimeStamp(0.3899663559605885);
    msg.setSource(13374U);
    msg.setSourceEntity(157U);
    msg.setDestination(33176U);
    msg.setDestinationEntity(113U);
    msg.value = 16737;

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
    msg.setTimeStamp(0.6614426823429431);
    msg.setSource(983U);
    msg.setSourceEntity(129U);
    msg.setDestination(51740U);
    msg.setDestinationEntity(121U);
    msg.value = -26505;

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
    msg.setTimeStamp(0.6912308884845481);
    msg.setSource(11791U);
    msg.setSourceEntity(76U);
    msg.setDestination(49592U);
    msg.setDestinationEntity(77U);
    msg.value = 0.9795628787205705;

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
    msg.setTimeStamp(0.9589670206135119);
    msg.setSource(26360U);
    msg.setSourceEntity(133U);
    msg.setDestination(54449U);
    msg.setDestinationEntity(16U);
    msg.value = 0.5719646012248596;

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
    msg.setTimeStamp(0.42816867830279104);
    msg.setSource(781U);
    msg.setSourceEntity(153U);
    msg.setDestination(28338U);
    msg.setDestinationEntity(181U);
    msg.value = 0.990580983350924;

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
    msg.setTimeStamp(0.5362249009333443);
    msg.setSource(27116U);
    msg.setSourceEntity(174U);
    msg.setDestination(13108U);
    msg.setDestinationEntity(175U);
    msg.value = 0.18789532621167815;

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
    msg.setTimeStamp(0.5290295557940555);
    msg.setSource(55290U);
    msg.setSourceEntity(191U);
    msg.setDestination(61732U);
    msg.setDestinationEntity(186U);
    msg.value = 0.8001003133701942;

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
    msg.setTimeStamp(0.16307508546084115);
    msg.setSource(798U);
    msg.setSourceEntity(227U);
    msg.setDestination(25882U);
    msg.setDestinationEntity(94U);
    msg.value = 0.8814465202888837;

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
    msg.setTimeStamp(0.00042467528417400313);
    msg.setSource(45682U);
    msg.setSourceEntity(151U);
    msg.setDestination(41859U);
    msg.setDestinationEntity(131U);
    msg.validity = 54282U;
    msg.type = 144U;
    msg.utc_year = 43096U;
    msg.utc_month = 145U;
    msg.utc_day = 39U;
    msg.utc_time = 0.5288892496909213;
    msg.lat = 0.7274499535322608;
    msg.lon = 0.9061250832529292;
    msg.height = 0.05610693392854815;
    msg.satellites = 132U;
    msg.cog = 0.6153368595926758;
    msg.sog = 0.08933170562581372;
    msg.hdop = 0.6162453610103221;
    msg.vdop = 0.645984821547191;
    msg.hacc = 0.6226264782917229;
    msg.vacc = 0.15115894423575338;

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
    msg.setTimeStamp(0.19220079915646293);
    msg.setSource(51979U);
    msg.setSourceEntity(228U);
    msg.setDestination(29254U);
    msg.setDestinationEntity(26U);
    msg.validity = 4520U;
    msg.type = 224U;
    msg.utc_year = 4538U;
    msg.utc_month = 166U;
    msg.utc_day = 18U;
    msg.utc_time = 0.693595242170925;
    msg.lat = 0.9466040348239393;
    msg.lon = 0.336946023025262;
    msg.height = 0.006512839269111392;
    msg.satellites = 63U;
    msg.cog = 0.3373145779170369;
    msg.sog = 0.5176005766707041;
    msg.hdop = 0.6725303191626432;
    msg.vdop = 0.6181097558178212;
    msg.hacc = 0.58518940380817;
    msg.vacc = 0.27497938061555893;

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
    msg.setTimeStamp(0.22102299874384213);
    msg.setSource(2949U);
    msg.setSourceEntity(50U);
    msg.setDestination(41996U);
    msg.setDestinationEntity(134U);
    msg.validity = 30182U;
    msg.type = 42U;
    msg.utc_year = 15431U;
    msg.utc_month = 221U;
    msg.utc_day = 116U;
    msg.utc_time = 0.9675419689070152;
    msg.lat = 0.26762056187729;
    msg.lon = 0.07321606479670617;
    msg.height = 0.17872600323591203;
    msg.satellites = 30U;
    msg.cog = 0.6665111266451453;
    msg.sog = 0.17972969803375705;
    msg.hdop = 0.41179770789264813;
    msg.vdop = 0.5772193234552621;
    msg.hacc = 0.7835850328981726;
    msg.vacc = 0.6322088311997063;

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
    msg.setTimeStamp(0.13789729900910597);
    msg.setSource(21091U);
    msg.setSourceEntity(93U);
    msg.setDestination(43216U);
    msg.setDestinationEntity(8U);
    msg.time = 0.8613748150097643;
    msg.phi = 0.17750863093847435;
    msg.theta = 0.24204634887416887;
    msg.psi = 0.26171106453642357;
    msg.psi_magnetic = 0.3697212895902193;

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
    msg.setTimeStamp(0.4173639901486904);
    msg.setSource(4291U);
    msg.setSourceEntity(232U);
    msg.setDestination(50722U);
    msg.setDestinationEntity(87U);
    msg.time = 0.9089907323710206;
    msg.phi = 0.7177070823570989;
    msg.theta = 0.9567539382521892;
    msg.psi = 0.02359709596998838;
    msg.psi_magnetic = 0.21704486465722284;

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
    msg.setTimeStamp(0.22944536376888947);
    msg.setSource(58396U);
    msg.setSourceEntity(248U);
    msg.setDestination(65037U);
    msg.setDestinationEntity(11U);
    msg.time = 0.002325775708067024;
    msg.phi = 0.0672817917168228;
    msg.theta = 0.5291346560988992;
    msg.psi = 0.8763341796683392;
    msg.psi_magnetic = 0.4784165927150056;

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
    msg.setTimeStamp(0.274502639941964);
    msg.setSource(7848U);
    msg.setSourceEntity(55U);
    msg.setDestination(53018U);
    msg.setDestinationEntity(86U);
    msg.time = 0.9820524657043458;
    msg.x = 0.5111404135305785;
    msg.y = 0.12080357514391338;
    msg.z = 0.9041749021658043;
    msg.timestep = 0.45167746654284746;

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
    msg.setTimeStamp(0.8761991531917913);
    msg.setSource(61507U);
    msg.setSourceEntity(5U);
    msg.setDestination(16808U);
    msg.setDestinationEntity(17U);
    msg.time = 0.9907566344074191;
    msg.x = 0.444045828150086;
    msg.y = 0.669342054567186;
    msg.z = 0.9364733304083982;
    msg.timestep = 0.3587842323257574;

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
    msg.setTimeStamp(0.7343911565566732);
    msg.setSource(47193U);
    msg.setSourceEntity(29U);
    msg.setDestination(24904U);
    msg.setDestinationEntity(238U);
    msg.time = 0.05676901099553444;
    msg.x = 0.8520768990234364;
    msg.y = 0.10948869831211461;
    msg.z = 0.6924045155420208;
    msg.timestep = 0.3566324563634463;

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
    msg.setTimeStamp(0.459141014772085);
    msg.setSource(21695U);
    msg.setSourceEntity(191U);
    msg.setDestination(34227U);
    msg.setDestinationEntity(131U);
    msg.time = 0.4362588055067226;
    msg.x = 0.4772923116047564;
    msg.y = 0.9963554240396159;
    msg.z = 0.20922125306092387;

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
    msg.setTimeStamp(0.5314701043564596);
    msg.setSource(50905U);
    msg.setSourceEntity(137U);
    msg.setDestination(6474U);
    msg.setDestinationEntity(224U);
    msg.time = 0.917002680001141;
    msg.x = 0.7111606983986907;
    msg.y = 0.8231078165188351;
    msg.z = 0.8816209980778481;

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
    msg.setTimeStamp(0.5388031797654048);
    msg.setSource(46299U);
    msg.setSourceEntity(148U);
    msg.setDestination(63181U);
    msg.setDestinationEntity(190U);
    msg.time = 0.6331114977665441;
    msg.x = 0.890033034803716;
    msg.y = 0.26922099847682646;
    msg.z = 0.8435972559555831;

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
    msg.setTimeStamp(0.9511466568039555);
    msg.setSource(55605U);
    msg.setSourceEntity(154U);
    msg.setDestination(4455U);
    msg.setDestinationEntity(244U);
    msg.time = 0.9071146491726664;
    msg.x = 0.13212059043871838;
    msg.y = 0.9011201235390832;
    msg.z = 0.44710586613400083;

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
    msg.setTimeStamp(0.3556406295012964);
    msg.setSource(1346U);
    msg.setSourceEntity(36U);
    msg.setDestination(65134U);
    msg.setDestinationEntity(6U);
    msg.time = 0.5830840006756672;
    msg.x = 0.4796550935607806;
    msg.y = 0.4397410090114032;
    msg.z = 0.5333973681436998;

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
    msg.setTimeStamp(0.5424631708101563);
    msg.setSource(28280U);
    msg.setSourceEntity(42U);
    msg.setDestination(13147U);
    msg.setDestinationEntity(186U);
    msg.time = 0.1797901582940591;
    msg.x = 0.100117068160271;
    msg.y = 0.6758085327572118;
    msg.z = 0.3842650025952641;

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
    msg.setTimeStamp(0.7451557768760977);
    msg.setSource(42879U);
    msg.setSourceEntity(204U);
    msg.setDestination(64192U);
    msg.setDestinationEntity(154U);
    msg.time = 0.5617403129519749;
    msg.x = 0.9505612059426726;
    msg.y = 0.5314880632103597;
    msg.z = 0.39454728426338337;

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
    msg.setTimeStamp(0.5262863594550077);
    msg.setSource(35535U);
    msg.setSourceEntity(146U);
    msg.setDestination(37437U);
    msg.setDestinationEntity(54U);
    msg.time = 0.8683453856812735;
    msg.x = 0.5451731532916696;
    msg.y = 0.32558938114713465;
    msg.z = 0.17360208808353084;

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
    msg.setTimeStamp(0.9658684554174624);
    msg.setSource(4767U);
    msg.setSourceEntity(228U);
    msg.setDestination(32777U);
    msg.setDestinationEntity(197U);
    msg.time = 0.9973177854105515;
    msg.x = 0.8077990275724607;
    msg.y = 0.5784698702912686;
    msg.z = 0.3573258191770401;

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
    msg.setTimeStamp(0.4736794047412304);
    msg.setSource(25032U);
    msg.setSourceEntity(249U);
    msg.setDestination(54484U);
    msg.setDestinationEntity(163U);
    msg.validity = 136U;
    msg.x = 0.5983815236809501;
    msg.y = 0.772428558577483;
    msg.z = 0.6150491961572753;

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
    msg.setTimeStamp(0.3899143903864064);
    msg.setSource(28050U);
    msg.setSourceEntity(88U);
    msg.setDestination(61636U);
    msg.setDestinationEntity(237U);
    msg.validity = 175U;
    msg.x = 0.8787659952278265;
    msg.y = 0.0826830646386395;
    msg.z = 0.3875829123999388;

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
    msg.setTimeStamp(0.5188701247087474);
    msg.setSource(18517U);
    msg.setSourceEntity(131U);
    msg.setDestination(41314U);
    msg.setDestinationEntity(80U);
    msg.validity = 69U;
    msg.x = 0.06999832121391236;
    msg.y = 0.7594291509067663;
    msg.z = 0.40627489098190117;

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
    msg.setTimeStamp(0.308400362991486);
    msg.setSource(2066U);
    msg.setSourceEntity(157U);
    msg.setDestination(36393U);
    msg.setDestinationEntity(4U);
    msg.validity = 171U;
    msg.x = 0.32551374044891346;
    msg.y = 0.13780735451040993;
    msg.z = 0.9828740927277151;

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
    msg.setTimeStamp(0.6553621001125618);
    msg.setSource(10865U);
    msg.setSourceEntity(162U);
    msg.setDestination(5256U);
    msg.setDestinationEntity(16U);
    msg.validity = 174U;
    msg.x = 0.5094264055058751;
    msg.y = 0.9902615495132476;
    msg.z = 0.3769256420459951;

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
    msg.setTimeStamp(0.45303691080392205);
    msg.setSource(36859U);
    msg.setSourceEntity(161U);
    msg.setDestination(48672U);
    msg.setDestinationEntity(249U);
    msg.validity = 177U;
    msg.x = 0.5018406414513473;
    msg.y = 0.9510703257192022;
    msg.z = 0.8177670538530757;

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
    msg.setTimeStamp(0.7702353415668609);
    msg.setSource(65509U);
    msg.setSourceEntity(204U);
    msg.setDestination(11345U);
    msg.setDestinationEntity(133U);
    msg.time = 0.9405029033104256;
    msg.x = 0.0626089208337357;
    msg.y = 0.6394955651077703;
    msg.z = 0.35135462202746626;

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
    msg.setTimeStamp(0.893618499681808);
    msg.setSource(13829U);
    msg.setSourceEntity(142U);
    msg.setDestination(45074U);
    msg.setDestinationEntity(100U);
    msg.time = 0.37229471261230573;
    msg.x = 0.8453002575553057;
    msg.y = 0.10241236826276001;
    msg.z = 0.7779793000745381;

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
    msg.setTimeStamp(0.5338131634760444);
    msg.setSource(62587U);
    msg.setSourceEntity(110U);
    msg.setDestination(2064U);
    msg.setDestinationEntity(185U);
    msg.time = 0.6574986341726008;
    msg.x = 0.3774389104569419;
    msg.y = 0.5389783875750848;
    msg.z = 0.31678466792222193;

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
    msg.setTimeStamp(0.26620562916491963);
    msg.setSource(63545U);
    msg.setSourceEntity(241U);
    msg.setDestination(25049U);
    msg.setDestinationEntity(139U);
    msg.validity = 117U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.04727017668439082;
    tmp_msg_0.y = 0.8436648327395568;
    tmp_msg_0.z = 0.7677943655241032;
    tmp_msg_0.phi = 0.012654280709845755;
    tmp_msg_0.theta = 0.44691783368647586;
    tmp_msg_0.psi = 0.3496260010346727;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.8626824060902629;
    tmp_msg_1.beam_height = 0.024110868006962494;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.4701061773597821;

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
    msg.setTimeStamp(0.9828261060058731);
    msg.setSource(55440U);
    msg.setSourceEntity(53U);
    msg.setDestination(29089U);
    msg.setDestinationEntity(227U);
    msg.validity = 70U;
    msg.value = 0.41990283884444246;

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
    msg.setTimeStamp(0.9119551808668005);
    msg.setSource(20931U);
    msg.setSourceEntity(9U);
    msg.setDestination(18047U);
    msg.setDestinationEntity(77U);
    msg.validity = 196U;
    msg.value = 0.6075697426863516;

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
    msg.setTimeStamp(0.4537391392467921);
    msg.setSource(60833U);
    msg.setSourceEntity(205U);
    msg.setDestination(48415U);
    msg.setDestinationEntity(209U);
    msg.value = 0.6369100452233633;

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
    msg.setTimeStamp(0.31743358301937197);
    msg.setSource(50396U);
    msg.setSourceEntity(244U);
    msg.setDestination(9704U);
    msg.setDestinationEntity(148U);
    msg.value = 0.91488362323907;

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
    msg.setTimeStamp(0.1309249974146508);
    msg.setSource(18145U);
    msg.setSourceEntity(227U);
    msg.setDestination(36753U);
    msg.setDestinationEntity(25U);
    msg.value = 0.14620132289751842;

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
    msg.setTimeStamp(0.38060635185667036);
    msg.setSource(53603U);
    msg.setSourceEntity(183U);
    msg.setDestination(35546U);
    msg.setDestinationEntity(85U);
    msg.value = 0.5684963077616554;

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
    msg.setTimeStamp(0.39089932690927154);
    msg.setSource(31589U);
    msg.setSourceEntity(117U);
    msg.setDestination(8785U);
    msg.setDestinationEntity(177U);
    msg.value = 0.9602412238325722;

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
    msg.setTimeStamp(0.2569554288962763);
    msg.setSource(42298U);
    msg.setSourceEntity(12U);
    msg.setDestination(65257U);
    msg.setDestinationEntity(26U);
    msg.value = 0.39976938470225;

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
    msg.setTimeStamp(0.7347197869935319);
    msg.setSource(25300U);
    msg.setSourceEntity(97U);
    msg.setDestination(11849U);
    msg.setDestinationEntity(17U);
    msg.value = 0.27050351825843455;

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
    msg.setTimeStamp(0.42146439120276025);
    msg.setSource(10691U);
    msg.setSourceEntity(107U);
    msg.setDestination(31643U);
    msg.setDestinationEntity(121U);
    msg.value = 0.8344205603780059;

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
    msg.setTimeStamp(0.2453596866414962);
    msg.setSource(61370U);
    msg.setSourceEntity(152U);
    msg.setDestination(35151U);
    msg.setDestinationEntity(169U);
    msg.value = 0.023445463632330465;

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
    msg.setTimeStamp(0.9781760892340902);
    msg.setSource(25823U);
    msg.setSourceEntity(90U);
    msg.setDestination(17354U);
    msg.setDestinationEntity(208U);
    msg.value = 0.5831917506217935;

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
    msg.setTimeStamp(0.7646934900234034);
    msg.setSource(56667U);
    msg.setSourceEntity(157U);
    msg.setDestination(34766U);
    msg.setDestinationEntity(3U);
    msg.value = 0.16444473772657486;

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
    msg.setTimeStamp(0.04333610997354609);
    msg.setSource(3219U);
    msg.setSourceEntity(223U);
    msg.setDestination(11944U);
    msg.setDestinationEntity(202U);
    msg.value = 0.6321665985039767;

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
    msg.setTimeStamp(0.6443144728981599);
    msg.setSource(24273U);
    msg.setSourceEntity(53U);
    msg.setDestination(19471U);
    msg.setDestinationEntity(144U);
    msg.value = 0.28651239452187804;

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
    msg.setTimeStamp(0.8152110114876095);
    msg.setSource(6579U);
    msg.setSourceEntity(78U);
    msg.setDestination(53223U);
    msg.setDestinationEntity(249U);
    msg.value = 0.2251555371970544;

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
    msg.setTimeStamp(0.21329419412092165);
    msg.setSource(54630U);
    msg.setSourceEntity(241U);
    msg.setDestination(54162U);
    msg.setDestinationEntity(62U);
    msg.value = 0.22829882412749491;

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
    msg.setTimeStamp(0.9150165904670542);
    msg.setSource(46996U);
    msg.setSourceEntity(208U);
    msg.setDestination(20967U);
    msg.setDestinationEntity(96U);
    msg.value = 0.8899337221261513;

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
    msg.setTimeStamp(0.5848693623982427);
    msg.setSource(45685U);
    msg.setSourceEntity(111U);
    msg.setDestination(22088U);
    msg.setDestinationEntity(36U);
    msg.value = 0.10349364399441874;

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
    msg.setTimeStamp(0.6637340873664086);
    msg.setSource(40459U);
    msg.setSourceEntity(144U);
    msg.setDestination(17140U);
    msg.setDestinationEntity(133U);
    msg.value = 0.1823088156193422;

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
    msg.setTimeStamp(0.3067077250808963);
    msg.setSource(35261U);
    msg.setSourceEntity(43U);
    msg.setDestination(40660U);
    msg.setDestinationEntity(189U);
    msg.value = 0.17147924994193087;

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
    msg.setTimeStamp(0.21924325284695478);
    msg.setSource(31412U);
    msg.setSourceEntity(186U);
    msg.setDestination(21950U);
    msg.setDestinationEntity(84U);
    msg.value = 0.8949226777583154;

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
    msg.setTimeStamp(0.962165537735745);
    msg.setSource(5525U);
    msg.setSourceEntity(148U);
    msg.setDestination(49751U);
    msg.setDestinationEntity(0U);
    msg.value = 0.19629995958560242;

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
    msg.setTimeStamp(0.016406752908635136);
    msg.setSource(38761U);
    msg.setSourceEntity(231U);
    msg.setDestination(54455U);
    msg.setDestinationEntity(33U);
    msg.value = 0.19575263739322513;

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
    msg.setTimeStamp(0.5368411782606957);
    msg.setSource(42022U);
    msg.setSourceEntity(47U);
    msg.setDestination(7464U);
    msg.setDestinationEntity(88U);
    msg.value = 0.2395762634179328;

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
    msg.setTimeStamp(0.17615437453618188);
    msg.setSource(10019U);
    msg.setSourceEntity(223U);
    msg.setDestination(47914U);
    msg.setDestinationEntity(12U);
    msg.value = 0.4780968708583603;

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
    msg.setTimeStamp(0.20667415157962898);
    msg.setSource(43910U);
    msg.setSourceEntity(130U);
    msg.setDestination(20231U);
    msg.setDestinationEntity(27U);
    msg.direction = 0.21296904916209813;
    msg.speed = 0.356883980987281;
    msg.turbulence = 0.05164087601660561;

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
    msg.setTimeStamp(0.24069995119897014);
    msg.setSource(40123U);
    msg.setSourceEntity(226U);
    msg.setDestination(39347U);
    msg.setDestinationEntity(64U);
    msg.direction = 0.1525827888965764;
    msg.speed = 0.4956558767274677;
    msg.turbulence = 0.13515176246870497;

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
    msg.setTimeStamp(0.36458429468880826);
    msg.setSource(23453U);
    msg.setSourceEntity(88U);
    msg.setDestination(44929U);
    msg.setDestinationEntity(102U);
    msg.direction = 0.49315178971172413;
    msg.speed = 0.04659679394409055;
    msg.turbulence = 0.7586864637238501;

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
    msg.setTimeStamp(0.8816292147991424);
    msg.setSource(54378U);
    msg.setSourceEntity(226U);
    msg.setDestination(47902U);
    msg.setDestinationEntity(13U);
    msg.value = 0.23752359985927762;

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
    msg.setTimeStamp(0.8501045618837094);
    msg.setSource(11780U);
    msg.setSourceEntity(12U);
    msg.setDestination(20206U);
    msg.setDestinationEntity(3U);
    msg.value = 0.06448025747837371;

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
    msg.setTimeStamp(0.8985321305757241);
    msg.setSource(46010U);
    msg.setSourceEntity(163U);
    msg.setDestination(7349U);
    msg.setDestinationEntity(245U);
    msg.value = 0.31927189855181304;

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
    msg.setTimeStamp(0.8026973156184145);
    msg.setSource(28543U);
    msg.setSourceEntity(1U);
    msg.setDestination(62458U);
    msg.setDestinationEntity(92U);
    msg.value.assign("UWNQTDOEWAUUZKLBZBWICAMPYTRDSPXWDVZMXTRAGBCXJNFQLVPJVHNPHIOZGIJKKNVOHEMLOTEWRDHCVEYFCMKRPECAJIJKGUIKQHVGZLUYULZDWQYIRGUMWPRXFEBFAPUNBDVYTSAXFCSXSHVQSDXTHOXROHCIHFEJCBSOYFJYRPLGSQKKSCOU");

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
    msg.setTimeStamp(0.6771496796886215);
    msg.setSource(51211U);
    msg.setSourceEntity(51U);
    msg.setDestination(51179U);
    msg.setDestinationEntity(69U);
    msg.value.assign("QYXCWMRKSWUQFLWVIBCXKIGVZHCPRSWAQSBAGBNUJDTYMXWYLIWTMHATSTDDPUEOLJKSHYPRGTQICHCIRSJLKMAHXDLVIPFGPNIGOWQPEDYGIFEFCNNSFNKWPGRJDEZICEKPLUCWBOZHUGJTMVNJJEALELUTBESNULUQKMBZPMAVBRNHBKAXSOYGMATFLHVXBXZQRORDHTHDEDRKOUXCQIJVVZNRTYFFNCXVYZKAOMSFGQFVDZZQYBEZUAOM");

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
    msg.setTimeStamp(0.8252190671639648);
    msg.setSource(41092U);
    msg.setSourceEntity(95U);
    msg.setDestination(9604U);
    msg.setDestinationEntity(68U);
    msg.value.assign("GNGDDTHXIMQVKMDLFDRLPAUURZFKYHLRYGCSAFLQNITSHREYEXSWZKQQPJVCHHVMUWRJCWSTIATOGVOJEJDWPRWECFECCGXJAXOKSGFPISEFLUXBIVBHSQOYRSVMGINSHFZOIQQYBUNKKYPLDXYEDBDQZPXMCGAAZADZZIYOBGUVMGMPBWZOREJNZOBAEKLXWFJKVVNUUTFPHNXPSMHLJLRLPC");

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
    msg.setTimeStamp(0.5064024013140039);
    msg.setSource(53225U);
    msg.setSourceEntity(111U);
    msg.setDestination(8258U);
    msg.setDestinationEntity(183U);
    const char tmp_msg_0[] = {125, 21, 28, -93, 115, -105, -23, -20, 61, 126, 92, -24, 13, 90, 120, -46, 1, 29, -83, 60, -63, -108, -18, -13, -109, -26, 59, 112, 20, 34, -9, -68, 44, 78, 64, 71, 94, -57, 53, -58, 45, -96, -32, 31, -31, -70, -16, 29, 97, -70, -104, -106, -38, -66, -50, 107, -52, -116, 36, 73, 14, 110, 25, -78, 15, 2, -72, -45, 26, 94, -59, -34, 0, -25, 86, 89, 96, -71, -9, -49, -4, 64, -28, -38, 38, 24, -26, 80, 75, -56, 70, 8, 96, 17, -76, -109, 32, 69, 19, 46, 73, -50, -43, 47, -75};
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
    msg.setTimeStamp(0.10436601837454962);
    msg.setSource(134U);
    msg.setSourceEntity(140U);
    msg.setDestination(62290U);
    msg.setDestinationEntity(83U);
    const char tmp_msg_0[] = {105, 82, -127, -85, -113, 28, 4, -61, -127, 117, 34, -119, -59, 100};
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
    msg.setTimeStamp(0.9967729546250094);
    msg.setSource(46843U);
    msg.setSourceEntity(137U);
    msg.setDestination(11669U);
    msg.setDestinationEntity(68U);
    const char tmp_msg_0[] = {50, 80, 32, -85, -43, -120, -88, -29, 101, -41, -12, -61, 86, 46, 46, 69, -82, -95, -124, -18, -128, 7, 122, 93, -49, 52, -72, -64, 0, -65, 27, 7, -102, 110, -82, -38, 97, 63, -128, 88};
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
    msg.setTimeStamp(0.15728340906636928);
    msg.setSource(21545U);
    msg.setSourceEntity(148U);
    msg.setDestination(26484U);
    msg.setDestinationEntity(119U);
    msg.type = 28U;
    msg.frequency = 1148465290U;
    msg.min_range = 4489U;
    msg.max_range = 14549U;
    msg.bits_per_point = 92U;
    msg.scale_factor = 0.09101511723151368;
    const char tmp_msg_0[] = {11, 98, 32, -79, -2, 23, -117, -95, 10, -120, 64, 105, 80, 9, 28, -100, 27, -1, 54, -100, -96, 78, -58, -52, 103, 34, -111, -19, -66, 53, -42, 29, -101, 42, 8, 18, -20, -38, 45, -9, -52, 2, 99, -77, -39, -14, -13, 28, -102, -76, 84, 26, 84, 61, -11, 111, 16, -70, 85, -59};
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
    msg.setTimeStamp(0.9897805155999044);
    msg.setSource(1015U);
    msg.setSourceEntity(107U);
    msg.setDestination(42247U);
    msg.setDestinationEntity(29U);
    msg.type = 0U;
    msg.frequency = 1582526336U;
    msg.min_range = 49075U;
    msg.max_range = 55711U;
    msg.bits_per_point = 205U;
    msg.scale_factor = 0.3498088681429409;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.45960872222703175;
    tmp_msg_0.beam_height = 0.46921042196550156;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-21, 31, 118, 12, -24, -118, -125, -87, -21, -32, -13, -70, -126, 124, 116, 1, -44, 99, -93, 58, 94, -32, 69, 64, -28, -29, 117, 5, 82, -42, -39, 97, -4, 99, -61, -8, -61, -66, -11, -2, 77, 108, 93, 115, -114, -119, 98, 99, 44, 18, -57, 58, -32, -111, 79, 19, 33, 115, 65, 41, 7, -57, 22, -70, 111, 9, -5, -54, 23, 81, -85, -17, -79, -56, 47, 116, 116, 73};
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
    msg.setTimeStamp(0.6177031908830045);
    msg.setSource(63099U);
    msg.setSourceEntity(126U);
    msg.setDestination(41440U);
    msg.setDestinationEntity(11U);
    msg.type = 62U;
    msg.frequency = 3332886916U;
    msg.min_range = 29513U;
    msg.max_range = 21710U;
    msg.bits_per_point = 44U;
    msg.scale_factor = 0.9030431403963208;
    const char tmp_msg_0[] = {-21, -117, -116, 108, -108, -46, -15, 117, -121, -78, 59, 121, -78, 94, 111, -8, -61, -89, -82, 102, -20, -15, -110, 10, -13, -122, -121, -127, -124, 52, -49, -53, -86, -80, -88, 56, 43, 22, -10, -10};
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
    msg.setTimeStamp(0.5677460495756782);
    msg.setSource(5412U);
    msg.setSourceEntity(127U);
    msg.setDestination(53158U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.04175871947395937);
    msg.setSource(337U);
    msg.setSourceEntity(191U);
    msg.setDestination(7857U);
    msg.setDestinationEntity(105U);

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
    msg.setTimeStamp(0.8552227624602712);
    msg.setSource(8084U);
    msg.setSourceEntity(200U);
    msg.setDestination(15007U);
    msg.setDestinationEntity(11U);

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
    msg.setTimeStamp(0.332262852110513);
    msg.setSource(27781U);
    msg.setSourceEntity(229U);
    msg.setDestination(14641U);
    msg.setDestinationEntity(244U);
    msg.op = 123U;

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
    msg.setTimeStamp(0.6706202772721898);
    msg.setSource(20543U);
    msg.setSourceEntity(117U);
    msg.setDestination(21824U);
    msg.setDestinationEntity(34U);
    msg.op = 23U;

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
    msg.setTimeStamp(0.5587737387290733);
    msg.setSource(12335U);
    msg.setSourceEntity(2U);
    msg.setDestination(4690U);
    msg.setDestinationEntity(225U);
    msg.op = 72U;

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
    msg.setTimeStamp(0.27915585373255547);
    msg.setSource(65206U);
    msg.setSourceEntity(28U);
    msg.setDestination(33632U);
    msg.setDestinationEntity(21U);
    msg.value = 0.3783504592927328;
    msg.confidence = 0.42637561714940764;
    msg.opmodes.assign("OPAFXVSOXETTCLTRLKLKKARECEGINOVIVXILKANBJCURYCHUFSHPXLICXYZLDLGDDDZRBFNISRHSJBYMUZH");

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
    msg.setTimeStamp(0.7116010943173888);
    msg.setSource(26224U);
    msg.setSourceEntity(1U);
    msg.setDestination(35566U);
    msg.setDestinationEntity(226U);
    msg.value = 0.7743045569703171;
    msg.confidence = 0.7392185859431152;
    msg.opmodes.assign("XHOXQFJIXQLNSPUQBYLAXTTLRQHKONBPRJGDCJUPWOKVXOIHYASESZTIGVUPAUHHQUDLFRAOHCAEILDWOISMBKLTDTZIJFUKEWVJMSVCVDRXYNIXTQYBCGYUKPKTAVNSPHWBQRCDBZTGMVMFELJRUPKAYFMXZIFKEDGLEOMGMBAVBWQZIWJPWTMORHEZDBJPZUKFRYZZAJEKQSMTLNFZHNWCFNLCPRJVCEYSSCBYWFINDYGNAEOOXSWGUXN");

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
    msg.setTimeStamp(0.9287320174004908);
    msg.setSource(22004U);
    msg.setSourceEntity(212U);
    msg.setDestination(25431U);
    msg.setDestinationEntity(29U);
    msg.value = 0.15513255543910875;
    msg.confidence = 0.3400556693884951;
    msg.opmodes.assign("GSJXFJXLUODFLRQZDWWPBFXVPNAEUBSXDUDSFBWODWVVHRJIMKJXVSVYPZZMCRDLUFJGNIKEVKSURWGHMTQXYWAYIKFCCZSANNOIJFPJTTTQSKGYARQTRQIECJXPQTLYBBINPHOZBETZZOOUDFNGKXIQREIALPKFSTBBWTYMDRCANXOKYQHPILCSYCYEJREYWZJRMHOBEFVL");

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
    msg.setTimeStamp(0.0353969076736933);
    msg.setSource(4986U);
    msg.setSourceEntity(11U);
    msg.setDestination(9350U);
    msg.setDestinationEntity(178U);
    msg.itow = 2769630237U;
    msg.lat = 0.711529706628923;
    msg.lon = 0.4112219797468548;
    msg.height_ell = 0.8090047436403219;
    msg.height_sea = 0.4208909679034355;
    msg.hacc = 0.11707884293720572;
    msg.vacc = 0.9176253939332405;
    msg.vel_n = 0.36075295238730753;
    msg.vel_e = 0.10762634439478846;
    msg.vel_d = 0.811688663140776;
    msg.speed = 0.7707844359068456;
    msg.gspeed = 0.057702177414508005;
    msg.heading = 0.034246405513138956;
    msg.sacc = 0.5110288250094432;
    msg.cacc = 0.3928176859371819;

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
    msg.setTimeStamp(0.7699002766209764);
    msg.setSource(35855U);
    msg.setSourceEntity(207U);
    msg.setDestination(44502U);
    msg.setDestinationEntity(188U);
    msg.itow = 581785629U;
    msg.lat = 0.35053114043678035;
    msg.lon = 0.5032924518755877;
    msg.height_ell = 0.33526566466428787;
    msg.height_sea = 0.921455496561168;
    msg.hacc = 0.15693300283522116;
    msg.vacc = 0.542925367208551;
    msg.vel_n = 0.7751732441797218;
    msg.vel_e = 0.9766995652365343;
    msg.vel_d = 0.015132421224795967;
    msg.speed = 0.7712118034420068;
    msg.gspeed = 0.21160605582762781;
    msg.heading = 0.2229614184033336;
    msg.sacc = 0.057770921543652154;
    msg.cacc = 0.3394744536332974;

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
    msg.setTimeStamp(0.2880067150308604);
    msg.setSource(13965U);
    msg.setSourceEntity(173U);
    msg.setDestination(11459U);
    msg.setDestinationEntity(160U);
    msg.itow = 3105334999U;
    msg.lat = 0.6033187309263462;
    msg.lon = 0.701336248030348;
    msg.height_ell = 0.37609746776339537;
    msg.height_sea = 0.33161368780524203;
    msg.hacc = 0.5197447503949868;
    msg.vacc = 0.5459886523877348;
    msg.vel_n = 0.4886475895904022;
    msg.vel_e = 0.1852852225574929;
    msg.vel_d = 0.37015155719444803;
    msg.speed = 0.6973051032126233;
    msg.gspeed = 0.13518056659513056;
    msg.heading = 0.6658614534414041;
    msg.sacc = 0.39003635328736574;
    msg.cacc = 0.6303643231635983;

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
    msg.setTimeStamp(0.17137167428184363);
    msg.setSource(57591U);
    msg.setSourceEntity(188U);
    msg.setDestination(62147U);
    msg.setDestinationEntity(1U);
    msg.id = 93U;
    msg.value = 0.006129698412886353;

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
    msg.setTimeStamp(0.25691602337762753);
    msg.setSource(65486U);
    msg.setSourceEntity(40U);
    msg.setDestination(37763U);
    msg.setDestinationEntity(93U);
    msg.id = 27U;
    msg.value = 0.4339760650760125;

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
    msg.setTimeStamp(0.7302426563769024);
    msg.setSource(48101U);
    msg.setSourceEntity(229U);
    msg.setDestination(62117U);
    msg.setDestinationEntity(89U);
    msg.id = 50U;
    msg.value = 0.1671260728727405;

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
    msg.setTimeStamp(0.016918896426681096);
    msg.setSource(61316U);
    msg.setSourceEntity(180U);
    msg.setDestination(34738U);
    msg.setDestinationEntity(217U);
    msg.x = 0.1317487667886551;
    msg.y = 0.9711873037661509;
    msg.z = 0.448176994741489;
    msg.phi = 0.21509948464202722;
    msg.theta = 0.8049446433108;
    msg.psi = 0.988041163969528;

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
    msg.setTimeStamp(0.3507790031031164);
    msg.setSource(17582U);
    msg.setSourceEntity(43U);
    msg.setDestination(4229U);
    msg.setDestinationEntity(72U);
    msg.x = 0.707277398687939;
    msg.y = 0.7026119436288537;
    msg.z = 0.2134466726500921;
    msg.phi = 0.6025638709063053;
    msg.theta = 0.41393158853083944;
    msg.psi = 0.4292780731648471;

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
    msg.setTimeStamp(0.44259192956558535);
    msg.setSource(11480U);
    msg.setSourceEntity(136U);
    msg.setDestination(28201U);
    msg.setDestinationEntity(8U);
    msg.x = 0.9700707990252324;
    msg.y = 0.9404438120361169;
    msg.z = 0.3099606550046108;
    msg.phi = 0.8439329707944202;
    msg.theta = 0.4478148534356885;
    msg.psi = 0.23957511152005084;

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
    msg.setTimeStamp(0.9915147802972414);
    msg.setSource(35109U);
    msg.setSourceEntity(107U);
    msg.setDestination(31334U);
    msg.setDestinationEntity(173U);
    msg.beam_width = 0.64106587840336;
    msg.beam_height = 0.6628369753822919;

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
    msg.setTimeStamp(0.04826704591608533);
    msg.setSource(45929U);
    msg.setSourceEntity(165U);
    msg.setDestination(51539U);
    msg.setDestinationEntity(18U);
    msg.beam_width = 0.4394439522251541;
    msg.beam_height = 0.07869035475353847;

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
    msg.setTimeStamp(0.9604741115498695);
    msg.setSource(50180U);
    msg.setSourceEntity(151U);
    msg.setDestination(16011U);
    msg.setDestinationEntity(214U);
    msg.beam_width = 0.061463250518133616;
    msg.beam_height = 0.9093288367404416;

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
    msg.setTimeStamp(0.23935690433089485);
    msg.setSource(22263U);
    msg.setSourceEntity(201U);
    msg.setDestination(32984U);
    msg.setDestinationEntity(184U);
    msg.sane = 28U;

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
    msg.setTimeStamp(0.8208868330427582);
    msg.setSource(36768U);
    msg.setSourceEntity(223U);
    msg.setDestination(50325U);
    msg.setDestinationEntity(154U);
    msg.sane = 41U;

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
    msg.setTimeStamp(0.878498558256842);
    msg.setSource(51554U);
    msg.setSourceEntity(214U);
    msg.setDestination(27655U);
    msg.setDestinationEntity(150U);
    msg.sane = 106U;

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
    msg.setTimeStamp(0.19077742264153996);
    msg.setSource(44452U);
    msg.setSourceEntity(241U);
    msg.setDestination(12061U);
    msg.setDestinationEntity(206U);
    msg.id = 201U;
    msg.zoom = 66U;
    msg.action = 166U;

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
    msg.setTimeStamp(0.7485890322318679);
    msg.setSource(31841U);
    msg.setSourceEntity(174U);
    msg.setDestination(58099U);
    msg.setDestinationEntity(250U);
    msg.id = 41U;
    msg.zoom = 130U;
    msg.action = 26U;

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
    msg.setTimeStamp(0.8774085904975846);
    msg.setSource(47579U);
    msg.setSourceEntity(97U);
    msg.setDestination(26106U);
    msg.setDestinationEntity(122U);
    msg.id = 241U;
    msg.zoom = 163U;
    msg.action = 32U;

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
    msg.setTimeStamp(0.25613370058366103);
    msg.setSource(23335U);
    msg.setSourceEntity(194U);
    msg.setDestination(56629U);
    msg.setDestinationEntity(164U);
    msg.id = 206U;
    msg.value = 0.40928508820746057;

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
    msg.setTimeStamp(0.8935730719703767);
    msg.setSource(51163U);
    msg.setSourceEntity(211U);
    msg.setDestination(56688U);
    msg.setDestinationEntity(171U);
    msg.id = 121U;
    msg.value = 0.11539713132256424;

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
    msg.setTimeStamp(0.9117222353842575);
    msg.setSource(27996U);
    msg.setSourceEntity(165U);
    msg.setDestination(32059U);
    msg.setDestinationEntity(168U);
    msg.id = 173U;
    msg.value = 0.20538298542458955;

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
    msg.setTimeStamp(0.6659631737164603);
    msg.setSource(42306U);
    msg.setSourceEntity(30U);
    msg.setDestination(62320U);
    msg.setDestinationEntity(133U);
    msg.id = 218U;
    msg.value = 0.5717692138153089;

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
    msg.setTimeStamp(0.8436019010825493);
    msg.setSource(2327U);
    msg.setSourceEntity(217U);
    msg.setDestination(46734U);
    msg.setDestinationEntity(195U);
    msg.id = 27U;
    msg.value = 0.554557211800049;

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
    msg.setTimeStamp(0.21696189047499737);
    msg.setSource(45408U);
    msg.setSourceEntity(39U);
    msg.setDestination(37614U);
    msg.setDestinationEntity(56U);
    msg.id = 65U;
    msg.value = 0.7392350872511638;

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
    msg.setTimeStamp(0.7275775819158959);
    msg.setSource(16874U);
    msg.setSourceEntity(33U);
    msg.setDestination(57412U);
    msg.setDestinationEntity(222U);
    msg.id = 133U;
    msg.angle = 0.8670400874971577;

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
    msg.setTimeStamp(0.9352829022069772);
    msg.setSource(28703U);
    msg.setSourceEntity(219U);
    msg.setDestination(5926U);
    msg.setDestinationEntity(157U);
    msg.id = 4U;
    msg.angle = 0.2462554998088211;

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
    msg.setTimeStamp(0.5145377922625843);
    msg.setSource(30057U);
    msg.setSourceEntity(206U);
    msg.setDestination(62584U);
    msg.setDestinationEntity(110U);
    msg.id = 101U;
    msg.angle = 0.07859418920095707;

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
    msg.setTimeStamp(0.4240589442007272);
    msg.setSource(6994U);
    msg.setSourceEntity(121U);
    msg.setDestination(14885U);
    msg.setDestinationEntity(121U);
    msg.op = 35U;
    msg.actions.assign("MVWPZFEZIBGOGGWWPWQCAKDZEABEZKGERUJNYIFIGIWLJCDXSJQBPUCKCDILDIYJSMQLIRHCPLXOTCKEDGARHJXOBZNKUHOKRFNDNBXNR");

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
    msg.setTimeStamp(0.5891607429511593);
    msg.setSource(28622U);
    msg.setSourceEntity(254U);
    msg.setDestination(58753U);
    msg.setDestinationEntity(233U);
    msg.op = 160U;
    msg.actions.assign("DOSHMWVTHBZAQFUWYYQEZXAKCNENTBJLWRHBQONXJVLLFCIXTMVRSPKALSNRNOGOCFXJGALKKEYJAMEIHEYPDRKPUIYMW");

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
    msg.setTimeStamp(0.4807695550033224);
    msg.setSource(13912U);
    msg.setSourceEntity(29U);
    msg.setDestination(64676U);
    msg.setDestinationEntity(17U);
    msg.op = 152U;
    msg.actions.assign("JBDIBMMXUTQJIIGDAZEKWCYNQDCEMPGOTCCRFXNVFIJOPVMBYLGFPTBEXUJZRZKNZHZDAOGIUJWKSZJVUTFXSYQZVHMSZSGSHOAYARCAQQUUAIEGFLPQFOHYVVBRGZLDXMQLWPDNWJLWMHKLFLVYWTFOWPNNZCHMUQ");

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
    msg.setTimeStamp(0.2146126126815633);
    msg.setSource(29377U);
    msg.setSourceEntity(42U);
    msg.setDestination(681U);
    msg.setDestinationEntity(100U);
    msg.actions.assign("OXEGCIMQNADFUGSNYROHYISTOFUABFHCQHFIAPQFWZLYPQOPOKZDNTGWCJLNFPQTOTVCIBUJMYYSVXFYNBKKWRRDRZWGY");

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
    msg.setTimeStamp(0.633875208990259);
    msg.setSource(60257U);
    msg.setSourceEntity(194U);
    msg.setDestination(60547U);
    msg.setDestinationEntity(98U);
    msg.actions.assign("WCBLDJEUOYPAQOSYTJAJMHTFOGXZYGQRHPGNUQIGZSKMYPIMJBYCVMUQGXNEASMEWFNTYVHVSKXOLNVZEACSZPQF");

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
    msg.setTimeStamp(0.6625514498398816);
    msg.setSource(16995U);
    msg.setSourceEntity(205U);
    msg.setDestination(63376U);
    msg.setDestinationEntity(194U);
    msg.actions.assign("FIMKCPKBUHMCLTAXQJNKBGXQDKPYZFXBEUEPKFHTAVDYNGNEDSAQIBAVFTWKEIOFUTMQPRN");

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
    msg.setTimeStamp(0.3391361123760007);
    msg.setSource(13188U);
    msg.setSourceEntity(88U);
    msg.setDestination(30396U);
    msg.setDestinationEntity(41U);
    msg.button = 132U;
    msg.value = 72U;

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
    msg.setTimeStamp(0.45639906512161776);
    msg.setSource(9283U);
    msg.setSourceEntity(116U);
    msg.setDestination(17418U);
    msg.setDestinationEntity(191U);
    msg.button = 13U;
    msg.value = 1U;

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
    msg.setTimeStamp(0.9704024641569406);
    msg.setSource(21909U);
    msg.setSourceEntity(202U);
    msg.setDestination(53501U);
    msg.setDestinationEntity(112U);
    msg.button = 192U;
    msg.value = 71U;

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
    msg.setTimeStamp(0.3969367972086659);
    msg.setSource(12936U);
    msg.setSourceEntity(28U);
    msg.setDestination(1395U);
    msg.setDestinationEntity(216U);
    msg.op = 145U;
    msg.text.assign("EBQNCWVWGDAWVMMEUPFGXTKVKMBYNNLLEXOKKNEXNPLQCMDTJAOJWASYWTCICLZRWOHTKQNLYBVLLHFIODUJSPPLPWXHZGDEBULCAGYVUKDFFA");

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
    msg.setTimeStamp(0.818535205408323);
    msg.setSource(64908U);
    msg.setSourceEntity(96U);
    msg.setDestination(53081U);
    msg.setDestinationEntity(224U);
    msg.op = 39U;
    msg.text.assign("RZPAJPSKUGTCOPRNDYKNTJHVRWVMWGEAZPBSWWUILBPXVTB");

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
    msg.setTimeStamp(0.055302204772842534);
    msg.setSource(37216U);
    msg.setSourceEntity(67U);
    msg.setDestination(33306U);
    msg.setDestinationEntity(214U);
    msg.op = 51U;
    msg.text.assign("FNTIFSRHKJENOYJWXDIPXYVVBCTRDZ");

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
    msg.setTimeStamp(0.04608096997683975);
    msg.setSource(30930U);
    msg.setSourceEntity(163U);
    msg.setDestination(53585U);
    msg.setDestinationEntity(109U);
    msg.op = 68U;
    msg.time_remain = 0.5118856781673214;
    msg.sched_time = 0.16981287128686628;

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
    msg.setTimeStamp(0.9798520313287754);
    msg.setSource(57216U);
    msg.setSourceEntity(34U);
    msg.setDestination(65420U);
    msg.setDestinationEntity(91U);
    msg.op = 65U;
    msg.time_remain = 0.2893065881323219;
    msg.sched_time = 0.9091859231801657;

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
    msg.setTimeStamp(0.7341566234921658);
    msg.setSource(36859U);
    msg.setSourceEntity(135U);
    msg.setDestination(15057U);
    msg.setDestinationEntity(235U);
    msg.op = 230U;
    msg.time_remain = 0.6137799653375209;
    msg.sched_time = 0.7491862542196875;

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
    msg.setTimeStamp(0.11698611085333199);
    msg.setSource(2779U);
    msg.setSourceEntity(50U);
    msg.setDestination(42402U);
    msg.setDestinationEntity(18U);
    msg.name.assign("UQJZWESEIUUORTZXRNCZZPGXKBFWRXFAMISFSXUYZFPLEYEHDBTBBQGQXMKIVTNMTQXVJRSFTJUXYVPHALONTIVYMKDLOLKCWILOUZDEMOPQDLEPGSBDXVAQBJCDJSRHSYHQUPOVFOHCWWHDMUVFTNQCWRXSWMRYLBYRRWQYVAFKGKMJGBZUXEMLFNWMGKDCNEWPYZGJCADINYKZCNBHAIHDICCJGFVHPOEPIRHJKQNG");
    msg.op = 172U;
    msg.sched_time = 0.3074791090372204;

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
    msg.setTimeStamp(0.8453514033143104);
    msg.setSource(45140U);
    msg.setSourceEntity(28U);
    msg.setDestination(52540U);
    msg.setDestinationEntity(160U);
    msg.name.assign("LJPJXELDINZIAFCVLIHYWPEJDSYMZUQGEULXFRUGMCPQEVPVLWCMVDPDVHHKRZGPGFURAJHFKB");
    msg.op = 167U;
    msg.sched_time = 0.8957251941928032;

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
    msg.setTimeStamp(0.911348648001435);
    msg.setSource(34454U);
    msg.setSourceEntity(222U);
    msg.setDestination(32519U);
    msg.setDestinationEntity(79U);
    msg.name.assign("QRDGMUPWXTDGZOKEBVCPYIASKPBXTUKODDAKJPSVGQYFILUSKVLZXRKEOXYRNAMZFVITBBEYXMHFQSCPHVHCVOCNTLIKZFTMMFQBQAKMS");
    msg.op = 254U;
    msg.sched_time = 0.6742151872051513;

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
    msg.setTimeStamp(0.655320154880841);
    msg.setSource(21689U);
    msg.setSourceEntity(230U);
    msg.setDestination(36537U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.5803178754578399);
    msg.setSource(54730U);
    msg.setSourceEntity(24U);
    msg.setDestination(1726U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.7247323871273867);
    msg.setSource(26829U);
    msg.setSourceEntity(27U);
    msg.setDestination(2424U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.6889392909971622);
    msg.setSource(50493U);
    msg.setSourceEntity(204U);
    msg.setDestination(35874U);
    msg.setDestinationEntity(33U);
    msg.name.assign("VDUKWWZSOBSFYAFMBLWOXMVXEFSDFTYTSFANGEUAJNRQHUZCCRLJHZESYZHARJBXNQIHSLLCHQ");
    msg.state = 216U;

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
    msg.setTimeStamp(0.16337726955558263);
    msg.setSource(58957U);
    msg.setSourceEntity(221U);
    msg.setDestination(25691U);
    msg.setDestinationEntity(199U);
    msg.name.assign("YYQDCRFIRHDFEDUIGDCXWKIBMZZAWMUPOECMDQZARPAWGGWIROXXUDJFVMPDRZOBXLDOSMVEHVFVEBFSVFCCNRIPZQXPILIHBBTENKTWGEQUJGWLAAAOXPHIJGHTSBRVFIROTLFPYYZHVZTXVFXGULVMUTHPETBHYYJQBLJAKMRHMNJLSKGWCZDUQWXSZRLKLLUKCNINKNQKTNWCTSJYYVYNXUHMJGTNFBWQZAKSEQBCOOJYCMP");
    msg.state = 100U;

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
    msg.setTimeStamp(0.500778170586557);
    msg.setSource(5740U);
    msg.setSourceEntity(99U);
    msg.setDestination(20309U);
    msg.setDestinationEntity(27U);
    msg.name.assign("TQFWVCTEVCJXITXFSWKWEUVZUJQYOMWIKYNDIFXNTLUFZZROGKBFYKUSGGTDVPXWFWHE");
    msg.state = 64U;

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
    msg.setTimeStamp(0.36219407997422004);
    msg.setSource(20833U);
    msg.setSourceEntity(170U);
    msg.setDestination(47277U);
    msg.setDestinationEntity(160U);
    msg.name.assign("CTGKUYHKWTVZSZORNXLENRYAIFZHBZJBFYYZRVBSHXESBALGJWXDYRZYXZVEPPFELLCKNBUTKXZNDAVQDSWHPMQIKJMOQTUCVJSAPVDYMHSUXQXTHAJMQNFZMDULGIQJJDBKWFNIARWWEUGPROAORONKACXCUUCOCWWHFILCPDPREBJIHKINOOGJLFPFGEPTYGAZSVDFUGMIKCLMOHTOVU");
    msg.value = 122U;

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
    msg.setTimeStamp(0.5409547061588291);
    msg.setSource(2929U);
    msg.setSourceEntity(119U);
    msg.setDestination(60204U);
    msg.setDestinationEntity(197U);
    msg.name.assign("VOJYDQVNJMKOATGTRLGARYDWXIAXABGPUGEWVNGZJKNTECBUUWCIPCFETXHPMHSLKDBPFVDCQBWICVFZZMLYBZEWADACNFROLINBOIOXJHDKSHHSREELLWYZHIWRBPGTNAKVDKVOTGCQJHYSXZQLYOCEKKRDEYMZMMVRBSTPFAFBPYQIQIHVSTXDMYRJQTKSAMOPPQEUWYJXROCNBZNWQNGUURXGUOJASFIHMUFMWLNIFFUZGKUSQLPVLH");
    msg.value = 142U;

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
    msg.setTimeStamp(0.3836574056987655);
    msg.setSource(34380U);
    msg.setSourceEntity(62U);
    msg.setDestination(12610U);
    msg.setDestinationEntity(216U);
    msg.name.assign("NYQHBKCZQWTTMHQDXAPVETZWUVPNTIUGXPJQYGSGSYBFUAMZMLSBPCAJROMFZITILYECOTCYHGBQYMZGWDGKIRHKPOROZJHUMPTBSOEEAWRWIUDBMBQSVVUQWOQJRCQNPCLR");
    msg.value = 212U;

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
    msg.setTimeStamp(0.7314916367696979);
    msg.setSource(43278U);
    msg.setSourceEntity(170U);
    msg.setDestination(14958U);
    msg.setDestinationEntity(155U);
    msg.name.assign("TCUZAPCQKEDYLGOBHVYVOPCMMIUWMYEMZKNEQDFPDNCIDABBLJIEYTDAVPSZRLRDSXXLQLCHSJXCHCTPTWYJRYZNTMOJRBCWOGKIVFSKWEHFIMYHQQZOZPFGMEAWUWVUXAISLFNHKVXYEFTPGVKSRUWUR");

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
    msg.setTimeStamp(0.6955992150373248);
    msg.setSource(25569U);
    msg.setSourceEntity(9U);
    msg.setDestination(2729U);
    msg.setDestinationEntity(33U);
    msg.name.assign("DJEOVOONSOZMAAHBSEXWHKXSTOOMOQZOXBWZ");

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
    msg.setTimeStamp(0.35075740651289244);
    msg.setSource(11473U);
    msg.setSourceEntity(84U);
    msg.setDestination(64189U);
    msg.setDestinationEntity(79U);
    msg.name.assign("YXNZFUZOOSGYVTJQIDKNCKGPEQFYXWORWAJNMTTOAXCPQZIDBSKRCAFZHVMYHPYERRBTIPEAIWEWCHMMCUAVFXHLGDMPAVBRLYCYSNOVJFRGKIXVPIJXICXMAGQNWAJDWRRZJBTEHGLWGQKDZQPZCWLDGHNHKOKKPTXNIQSYZUYDDQFBPJZXIRQQDBNSOBVF");

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
    msg.setTimeStamp(0.3334507005481301);
    msg.setSource(21658U);
    msg.setSourceEntity(169U);
    msg.setDestination(38573U);
    msg.setDestinationEntity(89U);
    msg.name.assign("NRRFCEXZIWCPCYEJNETVSSWMMURJOVNAUXUBRFZKCBROSJATYTUBHQEHNJACJYMFOQULFRMJVKQKGJSJXLODTMZRHQUFMGCMIXIIEHEICKDOYCVKWIJFZEHSXYQTQHOGGWMDYWENRBTZFTIBLQUPYGDVZPNCDZG");
    msg.value = 148U;

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
    msg.setTimeStamp(0.19887230888645413);
    msg.setSource(36940U);
    msg.setSourceEntity(57U);
    msg.setDestination(46632U);
    msg.setDestinationEntity(104U);
    msg.name.assign("OYJGLFFNLGPBHZTGYDGROKAQHJQKFQHKRCETQJXSIJPFXICCQWMKWAREFPGXATLBUTRKZRSOOHLYLMXWYRJYMEABCFINIGKMUYWVUGVTEQYBJMNWCVNUDLDQCXPAEMMGOMDOJDVGBBIZFCCPISSXBRYWXOAJUVEUS");
    msg.value = 162U;

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
    msg.setTimeStamp(0.6219790284096808);
    msg.setSource(38935U);
    msg.setSourceEntity(213U);
    msg.setDestination(35920U);
    msg.setDestinationEntity(193U);
    msg.name.assign("ZVUFAJOAELQYVRFKIFIJJFCCDQDNCJPTLNXTIHGFDCZVXLQVAUSVARDCYNZZBDTPOMBNGBCYVLBZACLHTJDSDUMMTHAIZKZTSYQAMMWHCZWCOUBJPCUIQHKRQZOHPASTXRPRSROBWLHDNFEZUTGJTKPGWJISLGGBVOFVWLIOMRFRMBQNIIQAFSXGIVXOXKNAHWEEQYMWKXTKOHXYEWNSRGOKHDYEEPWJUGP");
    msg.value = 126U;

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
    msg.setTimeStamp(0.6692059932307531);
    msg.setSource(30587U);
    msg.setSourceEntity(178U);
    msg.setDestination(13257U);
    msg.setDestinationEntity(3U);
    msg.id = 91U;
    msg.period = 231014758U;
    msg.duty_cycle = 4150360715U;

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
    msg.setTimeStamp(0.800880411448236);
    msg.setSource(43462U);
    msg.setSourceEntity(43U);
    msg.setDestination(58701U);
    msg.setDestinationEntity(3U);
    msg.id = 163U;
    msg.period = 2984125040U;
    msg.duty_cycle = 2070974491U;

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
    msg.setTimeStamp(0.7408923114513671);
    msg.setSource(60065U);
    msg.setSourceEntity(171U);
    msg.setDestination(14740U);
    msg.setDestinationEntity(200U);
    msg.id = 89U;
    msg.period = 4099927662U;
    msg.duty_cycle = 622707147U;

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
    msg.setTimeStamp(0.12231660742560135);
    msg.setSource(10185U);
    msg.setSourceEntity(134U);
    msg.setDestination(35833U);
    msg.setDestinationEntity(189U);
    msg.id = 239U;
    msg.period = 1935802381U;
    msg.duty_cycle = 682137258U;

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
    msg.setTimeStamp(0.3078393905737651);
    msg.setSource(37557U);
    msg.setSourceEntity(152U);
    msg.setDestination(55441U);
    msg.setDestinationEntity(16U);
    msg.id = 46U;
    msg.period = 1579860370U;
    msg.duty_cycle = 669672680U;

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
    msg.setTimeStamp(0.15845466461090885);
    msg.setSource(52967U);
    msg.setSourceEntity(132U);
    msg.setDestination(10552U);
    msg.setDestinationEntity(154U);
    msg.id = 135U;
    msg.period = 3467072870U;
    msg.duty_cycle = 297183142U;

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
    msg.setTimeStamp(0.7432446023861158);
    msg.setSource(56809U);
    msg.setSourceEntity(72U);
    msg.setDestination(46528U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.19283801669560252;
    msg.lon = 0.06665930539115517;
    msg.height = 0.6220180222318533;
    msg.x = 0.0007307620764840372;
    msg.y = 0.12338455845883911;
    msg.z = 0.596552433820534;
    msg.phi = 0.3683588956625402;
    msg.theta = 0.534337910136984;
    msg.psi = 0.8848359099873218;
    msg.u = 0.00983154311168577;
    msg.v = 0.3006281914338992;
    msg.w = 0.841829005594104;
    msg.vx = 0.4221801341823733;
    msg.vy = 0.9422980334925253;
    msg.vz = 0.758023367386304;
    msg.p = 0.9692494158404994;
    msg.q = 0.47092158674247764;
    msg.r = 0.7556503293077024;
    msg.depth = 0.09907867191654951;
    msg.alt = 0.014441212818803173;

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
    msg.setTimeStamp(0.06146587856468544);
    msg.setSource(44928U);
    msg.setSourceEntity(152U);
    msg.setDestination(46810U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.8368446438006424;
    msg.lon = 0.7729276425653261;
    msg.height = 0.04932961592303631;
    msg.x = 0.4784783780549967;
    msg.y = 0.2532547085469855;
    msg.z = 0.7742319048598637;
    msg.phi = 0.6017945978971396;
    msg.theta = 0.9294747346717557;
    msg.psi = 0.061443292967927166;
    msg.u = 0.9318617027900912;
    msg.v = 0.5396639770038119;
    msg.w = 0.20401879463831518;
    msg.vx = 0.025764957255927978;
    msg.vy = 0.9350473468834019;
    msg.vz = 0.15948563208749422;
    msg.p = 0.45714739988657094;
    msg.q = 0.5859736138895736;
    msg.r = 0.22010479028851415;
    msg.depth = 0.011299461213758799;
    msg.alt = 0.0020803078321597335;

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
    msg.setTimeStamp(0.29363395266374115);
    msg.setSource(44208U);
    msg.setSourceEntity(153U);
    msg.setDestination(42291U);
    msg.setDestinationEntity(164U);
    msg.lat = 0.48477423226879934;
    msg.lon = 0.05834101307231143;
    msg.height = 0.62250671618352;
    msg.x = 0.6705024329692739;
    msg.y = 0.19289412986000576;
    msg.z = 0.584191695296455;
    msg.phi = 0.5188959200447375;
    msg.theta = 0.9760591596488679;
    msg.psi = 0.09010494824777371;
    msg.u = 0.44151178725145257;
    msg.v = 0.7284913472246254;
    msg.w = 0.18004078475324414;
    msg.vx = 0.15112299245396998;
    msg.vy = 0.052361935354486744;
    msg.vz = 0.346698379153931;
    msg.p = 0.6328793636993134;
    msg.q = 0.35033091205586175;
    msg.r = 0.40888431719524054;
    msg.depth = 0.3073753719752047;
    msg.alt = 0.5435081085727407;

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
    msg.setTimeStamp(0.5636934217924657);
    msg.setSource(7740U);
    msg.setSourceEntity(14U);
    msg.setDestination(62337U);
    msg.setDestinationEntity(173U);
    msg.x = 0.16199447502773878;
    msg.y = 0.4607653143117936;
    msg.z = 0.16213307049026138;

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
    msg.setTimeStamp(0.8145068896180389);
    msg.setSource(6158U);
    msg.setSourceEntity(240U);
    msg.setDestination(48265U);
    msg.setDestinationEntity(97U);
    msg.x = 0.5497501571450512;
    msg.y = 0.3051462841029745;
    msg.z = 0.21960783409830853;

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
    msg.setTimeStamp(0.4098893516966894);
    msg.setSource(54078U);
    msg.setSourceEntity(225U);
    msg.setDestination(15531U);
    msg.setDestinationEntity(197U);
    msg.x = 0.08294510929933496;
    msg.y = 0.4265095218475037;
    msg.z = 0.5012133156351065;

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
    msg.setTimeStamp(0.20481914892914488);
    msg.setSource(11981U);
    msg.setSourceEntity(197U);
    msg.setDestination(20156U);
    msg.setDestinationEntity(127U);
    msg.value = 0.7038439136015784;

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
    msg.setTimeStamp(0.35982598661083276);
    msg.setSource(11836U);
    msg.setSourceEntity(149U);
    msg.setDestination(25095U);
    msg.setDestinationEntity(70U);
    msg.value = 0.9532909852884331;

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
    msg.setTimeStamp(0.4198939784429392);
    msg.setSource(15187U);
    msg.setSourceEntity(153U);
    msg.setDestination(37543U);
    msg.setDestinationEntity(193U);
    msg.value = 0.614105484262311;

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
    msg.setTimeStamp(0.353462232905286);
    msg.setSource(18688U);
    msg.setSourceEntity(171U);
    msg.setDestination(17384U);
    msg.setDestinationEntity(99U);
    msg.value = 0.5548174697314331;

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
    msg.setTimeStamp(0.3005881283741283);
    msg.setSource(54600U);
    msg.setSourceEntity(172U);
    msg.setDestination(42691U);
    msg.setDestinationEntity(73U);
    msg.value = 0.5223168447504195;

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
    msg.setTimeStamp(0.798557534810946);
    msg.setSource(63180U);
    msg.setSourceEntity(79U);
    msg.setDestination(10374U);
    msg.setDestinationEntity(237U);
    msg.value = 0.8609727642797265;

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
    msg.setTimeStamp(0.5378293823555826);
    msg.setSource(51577U);
    msg.setSourceEntity(11U);
    msg.setDestination(48388U);
    msg.setDestinationEntity(240U);
    msg.x = 0.43609733412192797;
    msg.y = 0.7480061236882398;
    msg.z = 0.8691910504913197;
    msg.phi = 0.27223708273175906;
    msg.theta = 0.36646571258746874;
    msg.psi = 0.13128727089310366;
    msg.p = 0.0699564610508292;
    msg.q = 0.9568266321007919;
    msg.r = 0.6303173664870141;
    msg.u = 0.34395847054337403;
    msg.v = 0.06932653799885469;
    msg.w = 0.28474626943670467;
    msg.bias_psi = 0.553900855468416;
    msg.bias_r = 0.7627757033202491;

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
    msg.setTimeStamp(0.2135904098266368);
    msg.setSource(63142U);
    msg.setSourceEntity(81U);
    msg.setDestination(11246U);
    msg.setDestinationEntity(146U);
    msg.x = 0.7828623384971833;
    msg.y = 0.11751060006389735;
    msg.z = 0.8704757280124298;
    msg.phi = 0.45813712851883315;
    msg.theta = 0.9619063615655354;
    msg.psi = 0.7922616442703095;
    msg.p = 0.40696821063715993;
    msg.q = 0.3643639189787533;
    msg.r = 0.7664907838327425;
    msg.u = 0.4062505657437482;
    msg.v = 0.6360381040726591;
    msg.w = 0.41649796646043835;
    msg.bias_psi = 0.6576582062853856;
    msg.bias_r = 0.757058275237292;

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
    msg.setTimeStamp(0.613529021677497);
    msg.setSource(9882U);
    msg.setSourceEntity(173U);
    msg.setDestination(41480U);
    msg.setDestinationEntity(253U);
    msg.x = 0.11476583962507159;
    msg.y = 0.8126090006120241;
    msg.z = 0.4725557170580663;
    msg.phi = 0.28248638532311443;
    msg.theta = 0.4776747087558727;
    msg.psi = 0.3154204928286328;
    msg.p = 0.7324037858267352;
    msg.q = 0.19683178559631398;
    msg.r = 0.43352366788152974;
    msg.u = 0.453756686664057;
    msg.v = 0.9325633017212234;
    msg.w = 0.45182521860210867;
    msg.bias_psi = 0.1588070758543788;
    msg.bias_r = 0.6220334199366588;

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
    msg.setTimeStamp(0.8295132368077982);
    msg.setSource(8274U);
    msg.setSourceEntity(28U);
    msg.setDestination(55877U);
    msg.setDestinationEntity(152U);
    msg.bias_psi = 0.6897924236149084;
    msg.bias_r = 0.05701978999520663;
    msg.cog = 0.17789876566794394;
    msg.cyaw = 0.7599232751759368;
    msg.lbl_rej_level = 0.7006067470666726;
    msg.gps_rej_level = 0.3383219114699938;
    msg.custom_x = 0.8761006751173842;
    msg.custom_y = 0.6289832959509336;
    msg.custom_z = 0.09903521302812157;

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
    msg.setTimeStamp(0.5005773679055348);
    msg.setSource(11422U);
    msg.setSourceEntity(71U);
    msg.setDestination(34351U);
    msg.setDestinationEntity(221U);
    msg.bias_psi = 0.6669884217441951;
    msg.bias_r = 0.8637831470114371;
    msg.cog = 0.5838469865555134;
    msg.cyaw = 0.9523564455766308;
    msg.lbl_rej_level = 0.5077084843970735;
    msg.gps_rej_level = 0.6204293744708995;
    msg.custom_x = 0.1745923104026994;
    msg.custom_y = 0.1013186335338756;
    msg.custom_z = 0.8612060962627837;

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
    msg.setTimeStamp(0.32189732010098715);
    msg.setSource(2189U);
    msg.setSourceEntity(176U);
    msg.setDestination(61272U);
    msg.setDestinationEntity(218U);
    msg.bias_psi = 0.5258088360905496;
    msg.bias_r = 0.5241840055615283;
    msg.cog = 0.4234096952214418;
    msg.cyaw = 0.32258000587066304;
    msg.lbl_rej_level = 0.05048876051224893;
    msg.gps_rej_level = 0.7080883029543559;
    msg.custom_x = 0.44852324572446245;
    msg.custom_y = 0.9387875350021438;
    msg.custom_z = 0.270405344097173;

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
    msg.setTimeStamp(0.7419313691131297);
    msg.setSource(44056U);
    msg.setSourceEntity(193U);
    msg.setDestination(42536U);
    msg.setDestinationEntity(251U);
    msg.utc_time = 0.7149313320654928;
    msg.reason = 86U;

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
    msg.setTimeStamp(0.32263421311548424);
    msg.setSource(42169U);
    msg.setSourceEntity(104U);
    msg.setDestination(30775U);
    msg.setDestinationEntity(166U);
    msg.utc_time = 0.4309093690750514;
    msg.reason = 76U;

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
    msg.setTimeStamp(0.4193343892244433);
    msg.setSource(40299U);
    msg.setSourceEntity(185U);
    msg.setDestination(47894U);
    msg.setDestinationEntity(230U);
    msg.utc_time = 0.978546109816999;
    msg.reason = 2U;

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
    msg.setTimeStamp(0.32609457931302777);
    msg.setSource(62426U);
    msg.setSourceEntity(70U);
    msg.setDestination(57335U);
    msg.setDestinationEntity(57U);
    msg.id = 15U;
    msg.range = 0.30846120886110284;
    msg.acceptance = 234U;

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
    msg.setTimeStamp(0.49542197604868443);
    msg.setSource(21706U);
    msg.setSourceEntity(228U);
    msg.setDestination(51475U);
    msg.setDestinationEntity(170U);
    msg.id = 134U;
    msg.range = 0.1717427323157218;
    msg.acceptance = 65U;

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
    msg.setTimeStamp(0.7175255776879049);
    msg.setSource(2622U);
    msg.setSourceEntity(126U);
    msg.setDestination(58813U);
    msg.setDestinationEntity(164U);
    msg.id = 227U;
    msg.range = 0.31896534794629927;
    msg.acceptance = 150U;

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
    msg.setTimeStamp(0.039606446753227);
    msg.setSource(45677U);
    msg.setSourceEntity(23U);
    msg.setDestination(12476U);
    msg.setDestinationEntity(249U);
    msg.type = 139U;
    msg.reason = 178U;
    msg.value = 0.9866019866989373;
    msg.timestep = 0.4122684434111443;

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
    msg.setTimeStamp(0.03123083703686469);
    msg.setSource(37429U);
    msg.setSourceEntity(11U);
    msg.setDestination(46898U);
    msg.setDestinationEntity(26U);
    msg.type = 88U;
    msg.reason = 111U;
    msg.value = 0.01879639400446309;
    msg.timestep = 0.4482866183556182;

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
    msg.setTimeStamp(0.5034027163723778);
    msg.setSource(43003U);
    msg.setSourceEntity(0U);
    msg.setDestination(60305U);
    msg.setDestinationEntity(229U);
    msg.type = 104U;
    msg.reason = 78U;
    msg.value = 0.10177657892521574;
    msg.timestep = 0.11782087604265268;

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
    msg.setTimeStamp(0.5406209922818499);
    msg.setSource(56778U);
    msg.setSourceEntity(194U);
    msg.setDestination(4378U);
    msg.setDestinationEntity(49U);

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
    msg.setTimeStamp(0.6680792761059419);
    msg.setSource(44711U);
    msg.setSourceEntity(144U);
    msg.setDestination(8188U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.1017357851491687);
    msg.setSource(18332U);
    msg.setSourceEntity(53U);
    msg.setDestination(25322U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.3330913639000246);
    msg.setSource(36371U);
    msg.setSourceEntity(134U);
    msg.setDestination(8774U);
    msg.setDestinationEntity(247U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QHZLBWCAXKSLMRAOTNSEZFJIKZCIXCQYLFHIKPXNJBAVRWCXZZNRVSTKFTOTLNFUWMHAPDBDGBQWPCCDHUEMUPDVSKRPADILRFGQJEMELJIDXQEQWR");
    tmp_msg_0.lat = 0.504485411681167;
    tmp_msg_0.lon = 0.7999343208425417;
    tmp_msg_0.depth = 0.9390523066497729;
    tmp_msg_0.query_channel = 68U;
    tmp_msg_0.reply_channel = 2U;
    tmp_msg_0.transponder_delay = 159U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.2430795468276461;
    msg.y = 0.3413831366099076;
    msg.var_x = 0.6660293486203126;
    msg.var_y = 0.07886468712941297;
    msg.distance = 0.8872452948614948;

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
    msg.setTimeStamp(0.8170699940831597);
    msg.setSource(53307U);
    msg.setSourceEntity(202U);
    msg.setDestination(59701U);
    msg.setDestinationEntity(170U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LTBVAEWEUWOHXLIWDPZPVSQREMMKPXIBQOXLSCECLTKGURVSPCHZAKSZ");
    tmp_msg_0.lat = 0.7689393295642535;
    tmp_msg_0.lon = 0.33591853193012355;
    tmp_msg_0.depth = 0.645506424643865;
    tmp_msg_0.query_channel = 110U;
    tmp_msg_0.reply_channel = 87U;
    tmp_msg_0.transponder_delay = 247U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.7931284969211372;
    msg.y = 0.3233691094937071;
    msg.var_x = 0.5161677228388836;
    msg.var_y = 0.6625013626053479;
    msg.distance = 0.2345256091341652;

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
    msg.setTimeStamp(0.9949602336195351);
    msg.setSource(40934U);
    msg.setSourceEntity(72U);
    msg.setDestination(21269U);
    msg.setDestinationEntity(59U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HWCFANRSQJOYEXYKNDFTBYGLEQQVWVYIPHOWOLRGKDJEMPGTBXZEQJNMIKCYBPHXHNQEWDTPLSRTOYKYPNOKSFEIWJALGIERRTSMKNIVLFXQRKIUZMRRHCKUXTXWDANISMZMJUUQCDNMHJTVVPLRSXEDIQPKBLCGF");
    tmp_msg_0.lat = 0.8225480921023828;
    tmp_msg_0.lon = 0.2708102030135905;
    tmp_msg_0.depth = 0.6559137374850599;
    tmp_msg_0.query_channel = 54U;
    tmp_msg_0.reply_channel = 25U;
    tmp_msg_0.transponder_delay = 196U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6591083404561181;
    msg.y = 0.9745754360751392;
    msg.var_x = 0.7287228406217346;
    msg.var_y = 0.34750122957609475;
    msg.distance = 0.9979260417826317;

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
    msg.setTimeStamp(0.36389140952989707);
    msg.setSource(50824U);
    msg.setSourceEntity(116U);
    msg.setDestination(35178U);
    msg.setDestinationEntity(172U);
    msg.state = 88U;

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
    msg.setTimeStamp(0.333986111263201);
    msg.setSource(34273U);
    msg.setSourceEntity(109U);
    msg.setDestination(3517U);
    msg.setDestinationEntity(143U);
    msg.state = 135U;

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
    msg.setTimeStamp(0.24777024523071545);
    msg.setSource(59530U);
    msg.setSourceEntity(177U);
    msg.setDestination(56259U);
    msg.setDestinationEntity(240U);
    msg.state = 201U;

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
    msg.setTimeStamp(0.9737744589049682);
    msg.setSource(9687U);
    msg.setSourceEntity(18U);
    msg.setDestination(63320U);
    msg.setDestinationEntity(21U);
    msg.x = 0.3533559122372518;
    msg.y = 0.6149749338363452;
    msg.z = 0.022146944654439338;

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
    msg.setTimeStamp(0.267790118513751);
    msg.setSource(60273U);
    msg.setSourceEntity(59U);
    msg.setDestination(10995U);
    msg.setDestinationEntity(213U);
    msg.x = 0.7488885999195226;
    msg.y = 0.883901041529293;
    msg.z = 0.6526669204466669;

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
    msg.setTimeStamp(0.14739798479183475);
    msg.setSource(37039U);
    msg.setSourceEntity(119U);
    msg.setDestination(31637U);
    msg.setDestinationEntity(240U);
    msg.x = 0.9709787725930457;
    msg.y = 0.811832214359866;
    msg.z = 0.20065046169756706;

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
    msg.setTimeStamp(0.29289432700079643);
    msg.setSource(5701U);
    msg.setSourceEntity(4U);
    msg.setDestination(6956U);
    msg.setDestinationEntity(86U);
    msg.value = 0.6734288910709878;

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
    msg.setTimeStamp(0.7611043758334783);
    msg.setSource(13802U);
    msg.setSourceEntity(226U);
    msg.setDestination(25711U);
    msg.setDestinationEntity(244U);
    msg.value = 0.906517628896769;

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
    msg.setTimeStamp(0.17570967315644415);
    msg.setSource(11081U);
    msg.setSourceEntity(38U);
    msg.setDestination(40372U);
    msg.setDestinationEntity(189U);
    msg.value = 0.06476638394807133;

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
    msg.setTimeStamp(0.9072376530611498);
    msg.setSource(41971U);
    msg.setSourceEntity(76U);
    msg.setDestination(12979U);
    msg.setDestinationEntity(109U);
    msg.value = 0.6524964370806211;
    msg.z_units = 225U;

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
    msg.setTimeStamp(0.8528951305744958);
    msg.setSource(19682U);
    msg.setSourceEntity(252U);
    msg.setDestination(18686U);
    msg.setDestinationEntity(113U);
    msg.value = 0.26670745484703773;
    msg.z_units = 209U;

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
    msg.setTimeStamp(0.9133518083472333);
    msg.setSource(64875U);
    msg.setSourceEntity(63U);
    msg.setDestination(40885U);
    msg.setDestinationEntity(250U);
    msg.value = 0.15833480004962153;
    msg.z_units = 20U;

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
    msg.setTimeStamp(0.5709299504521529);
    msg.setSource(36483U);
    msg.setSourceEntity(25U);
    msg.setDestination(32266U);
    msg.setDestinationEntity(192U);
    msg.value = 0.027784135500952933;
    msg.speed_units = 45U;

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
    msg.setTimeStamp(0.7297790574758669);
    msg.setSource(42665U);
    msg.setSourceEntity(145U);
    msg.setDestination(17291U);
    msg.setDestinationEntity(31U);
    msg.value = 0.5212178475701614;
    msg.speed_units = 3U;

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
    msg.setTimeStamp(0.9383499235785019);
    msg.setSource(31614U);
    msg.setSourceEntity(56U);
    msg.setDestination(33843U);
    msg.setDestinationEntity(0U);
    msg.value = 0.7281442671224857;
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
    msg.setTimeStamp(0.11524202859761812);
    msg.setSource(52808U);
    msg.setSourceEntity(129U);
    msg.setDestination(54220U);
    msg.setDestinationEntity(17U);
    msg.value = 0.6025702953565699;

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
    msg.setTimeStamp(0.9286442983405325);
    msg.setSource(64955U);
    msg.setSourceEntity(57U);
    msg.setDestination(63342U);
    msg.setDestinationEntity(122U);
    msg.value = 0.4423571217546597;

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
    msg.setTimeStamp(0.6147711998489183);
    msg.setSource(2599U);
    msg.setSourceEntity(55U);
    msg.setDestination(15323U);
    msg.setDestinationEntity(134U);
    msg.value = 0.3809670422429817;

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
    msg.setTimeStamp(0.8629667667688171);
    msg.setSource(28948U);
    msg.setSourceEntity(56U);
    msg.setDestination(48601U);
    msg.setDestinationEntity(13U);
    msg.value = 0.13680710120255535;

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
    msg.setTimeStamp(0.8795439790352132);
    msg.setSource(22730U);
    msg.setSourceEntity(248U);
    msg.setDestination(38189U);
    msg.setDestinationEntity(235U);
    msg.value = 0.05920459088386165;

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
    msg.setTimeStamp(0.8563972323007505);
    msg.setSource(60516U);
    msg.setSourceEntity(221U);
    msg.setDestination(47508U);
    msg.setDestinationEntity(152U);
    msg.value = 0.3496980892149485;

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
    msg.setTimeStamp(0.1773271343916406);
    msg.setSource(62132U);
    msg.setSourceEntity(171U);
    msg.setDestination(19946U);
    msg.setDestinationEntity(105U);
    msg.value = 0.6326372802375899;

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
    msg.setTimeStamp(0.2052477267679691);
    msg.setSource(10868U);
    msg.setSourceEntity(243U);
    msg.setDestination(136U);
    msg.setDestinationEntity(152U);
    msg.value = 0.24374181190317512;

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
    msg.setTimeStamp(0.15405885698286048);
    msg.setSource(53051U);
    msg.setSourceEntity(16U);
    msg.setDestination(18076U);
    msg.setDestinationEntity(159U);
    msg.value = 0.36341399880310055;

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
    msg.setTimeStamp(0.9010068132130569);
    msg.setSource(11328U);
    msg.setSourceEntity(78U);
    msg.setDestination(13447U);
    msg.setDestinationEntity(196U);
    msg.path_ref = 3136267827U;
    msg.start_lat = 0.4493088491430688;
    msg.start_lon = 0.32112689790496485;
    msg.start_z = 0.7190791418522834;
    msg.start_z_units = 241U;
    msg.end_lat = 0.8951690818161627;
    msg.end_lon = 0.3121092886313195;
    msg.end_z = 0.09790650177880678;
    msg.end_z_units = 12U;
    msg.speed = 0.0331939084457179;
    msg.speed_units = 25U;
    msg.lradius = 0.08020673642433962;
    msg.flags = 82U;

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
    msg.setTimeStamp(0.716726472264731);
    msg.setSource(28844U);
    msg.setSourceEntity(242U);
    msg.setDestination(17004U);
    msg.setDestinationEntity(114U);
    msg.path_ref = 2123015763U;
    msg.start_lat = 0.12989291565008276;
    msg.start_lon = 0.5032991509314344;
    msg.start_z = 0.5571753919148086;
    msg.start_z_units = 105U;
    msg.end_lat = 0.4302310527676323;
    msg.end_lon = 0.9732232922144379;
    msg.end_z = 0.9116264777070887;
    msg.end_z_units = 77U;
    msg.speed = 0.2617611805935254;
    msg.speed_units = 69U;
    msg.lradius = 0.14117767140193882;
    msg.flags = 163U;

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
    msg.setTimeStamp(0.45072208754292953);
    msg.setSource(24220U);
    msg.setSourceEntity(91U);
    msg.setDestination(4281U);
    msg.setDestinationEntity(191U);
    msg.path_ref = 2662688390U;
    msg.start_lat = 0.7404320374245665;
    msg.start_lon = 0.6951400017741641;
    msg.start_z = 0.9915843497257055;
    msg.start_z_units = 54U;
    msg.end_lat = 0.42181998803828336;
    msg.end_lon = 0.8824371119306047;
    msg.end_z = 0.956279547235542;
    msg.end_z_units = 188U;
    msg.speed = 0.12039022698511082;
    msg.speed_units = 73U;
    msg.lradius = 0.5949834426466836;
    msg.flags = 112U;

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
    msg.setTimeStamp(0.7181195235041334);
    msg.setSource(31932U);
    msg.setSourceEntity(169U);
    msg.setDestination(37047U);
    msg.setDestinationEntity(107U);
    msg.x = 0.23252910272628025;
    msg.y = 0.03860641041327062;
    msg.z = 0.971391863793404;
    msg.k = 0.8763144989526948;
    msg.m = 0.34535221641819003;
    msg.n = 0.5678227467062493;
    msg.flags = 231U;

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
    msg.setTimeStamp(0.5485904684707489);
    msg.setSource(60274U);
    msg.setSourceEntity(167U);
    msg.setDestination(60252U);
    msg.setDestinationEntity(184U);
    msg.x = 0.3718093663071397;
    msg.y = 0.421055519318675;
    msg.z = 0.13368385202325517;
    msg.k = 0.6980734409129761;
    msg.m = 0.7248618030207831;
    msg.n = 0.8725380682388149;
    msg.flags = 81U;

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
    msg.setTimeStamp(0.6237795418021884);
    msg.setSource(26017U);
    msg.setSourceEntity(84U);
    msg.setDestination(3025U);
    msg.setDestinationEntity(92U);
    msg.x = 0.3084496145193216;
    msg.y = 0.13791685132173126;
    msg.z = 0.9572905744090823;
    msg.k = 0.4125788983756101;
    msg.m = 0.06871772491594463;
    msg.n = 0.7380660138623009;
    msg.flags = 58U;

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
    msg.setTimeStamp(0.5503024615223403);
    msg.setSource(38502U);
    msg.setSourceEntity(251U);
    msg.setDestination(46592U);
    msg.setDestinationEntity(244U);
    msg.value = 0.2897971497368236;

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
    msg.setTimeStamp(0.6214526283103934);
    msg.setSource(18592U);
    msg.setSourceEntity(47U);
    msg.setDestination(40146U);
    msg.setDestinationEntity(225U);
    msg.value = 0.628037522386002;

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
    msg.setTimeStamp(0.5029126062637577);
    msg.setSource(31517U);
    msg.setSourceEntity(216U);
    msg.setDestination(46496U);
    msg.setDestinationEntity(205U);
    msg.value = 0.4806972555148774;

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
    msg.setTimeStamp(0.4263148072874027);
    msg.setSource(41530U);
    msg.setSourceEntity(211U);
    msg.setDestination(61964U);
    msg.setDestinationEntity(171U);
    msg.u = 0.27398582177321884;
    msg.v = 0.717718353882428;
    msg.w = 0.8963767437035114;
    msg.p = 0.427109475188969;
    msg.q = 0.554529274942951;
    msg.r = 0.19391142098287562;
    msg.flags = 26U;

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
    msg.setTimeStamp(0.13627232231913133);
    msg.setSource(14809U);
    msg.setSourceEntity(211U);
    msg.setDestination(6069U);
    msg.setDestinationEntity(79U);
    msg.u = 0.8493715363960894;
    msg.v = 0.3684003438110969;
    msg.w = 0.49240451932562;
    msg.p = 0.027815262419429665;
    msg.q = 0.9613755816544449;
    msg.r = 0.6111246719188692;
    msg.flags = 190U;

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
    msg.setTimeStamp(0.3041832526261381);
    msg.setSource(23409U);
    msg.setSourceEntity(99U);
    msg.setDestination(3672U);
    msg.setDestinationEntity(183U);
    msg.u = 0.6677827254331874;
    msg.v = 0.7760387523776918;
    msg.w = 0.606495098521128;
    msg.p = 0.39506177498450645;
    msg.q = 0.4653324629465595;
    msg.r = 0.5374483987793004;
    msg.flags = 247U;

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
    msg.setTimeStamp(0.39998033220024054);
    msg.setSource(54438U);
    msg.setSourceEntity(111U);
    msg.setDestination(58659U);
    msg.setDestinationEntity(209U);
    msg.path_ref = 1505817280U;
    msg.start_lat = 0.7528538432379264;
    msg.start_lon = 0.855317801682099;
    msg.start_z = 0.4891834801867604;
    msg.start_z_units = 48U;
    msg.end_lat = 0.3252024360851462;
    msg.end_lon = 0.657053500322729;
    msg.end_z = 0.6677747305121879;
    msg.end_z_units = 13U;
    msg.lradius = 0.46456317190377083;
    msg.flags = 179U;
    msg.x = 0.7199754369794774;
    msg.y = 0.7110809709010876;
    msg.z = 0.7146048813683462;
    msg.vx = 0.29967392624305156;
    msg.vy = 0.2425086316036701;
    msg.vz = 0.3905028304417695;
    msg.course_error = 0.32684159658960044;
    msg.eta = 54197U;

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
    msg.setTimeStamp(0.8154809069736421);
    msg.setSource(51695U);
    msg.setSourceEntity(80U);
    msg.setDestination(39102U);
    msg.setDestinationEntity(57U);
    msg.path_ref = 677482516U;
    msg.start_lat = 0.782838155952174;
    msg.start_lon = 0.8408363407889813;
    msg.start_z = 0.38718803631473353;
    msg.start_z_units = 157U;
    msg.end_lat = 0.6093119316769614;
    msg.end_lon = 0.3712246307266901;
    msg.end_z = 0.5596944137318013;
    msg.end_z_units = 136U;
    msg.lradius = 0.16967581958484856;
    msg.flags = 170U;
    msg.x = 0.7771861649704179;
    msg.y = 0.9308124965079371;
    msg.z = 0.9480462442303383;
    msg.vx = 0.194612851270062;
    msg.vy = 0.5812549213285;
    msg.vz = 0.3389348257904956;
    msg.course_error = 0.1601687086472533;
    msg.eta = 32326U;

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
    msg.setTimeStamp(0.002098435323775849);
    msg.setSource(10147U);
    msg.setSourceEntity(242U);
    msg.setDestination(2677U);
    msg.setDestinationEntity(168U);
    msg.path_ref = 1450771192U;
    msg.start_lat = 0.6935390537784388;
    msg.start_lon = 0.1996416684997463;
    msg.start_z = 0.6745137955193021;
    msg.start_z_units = 172U;
    msg.end_lat = 0.6424301142883002;
    msg.end_lon = 0.6696979454138112;
    msg.end_z = 0.033639263973060274;
    msg.end_z_units = 158U;
    msg.lradius = 0.049587994931966084;
    msg.flags = 70U;
    msg.x = 0.2899483110237072;
    msg.y = 0.23876598194157306;
    msg.z = 0.4869607728790636;
    msg.vx = 0.9945927792585655;
    msg.vy = 0.4349372812282061;
    msg.vz = 0.008033965655998232;
    msg.course_error = 0.04252230508048738;
    msg.eta = 8744U;

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
    msg.setTimeStamp(0.5747474643163948);
    msg.setSource(64215U);
    msg.setSourceEntity(56U);
    msg.setDestination(22585U);
    msg.setDestinationEntity(104U);
    msg.k = 0.9602871517919563;
    msg.m = 0.4178881410470414;
    msg.n = 0.6235278118835703;

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
    msg.setTimeStamp(0.9168386727811014);
    msg.setSource(25940U);
    msg.setSourceEntity(44U);
    msg.setDestination(7577U);
    msg.setDestinationEntity(52U);
    msg.k = 0.5816064798283905;
    msg.m = 0.7836428607319795;
    msg.n = 0.26349556715065026;

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
    msg.setTimeStamp(0.9198998484127334);
    msg.setSource(32816U);
    msg.setSourceEntity(87U);
    msg.setDestination(47561U);
    msg.setDestinationEntity(188U);
    msg.k = 0.06859379109192176;
    msg.m = 0.4310414586259709;
    msg.n = 0.4411923065475002;

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
    msg.setTimeStamp(0.260224149535798);
    msg.setSource(49921U);
    msg.setSourceEntity(9U);
    msg.setDestination(931U);
    msg.setDestinationEntity(43U);
    msg.p = 0.3001860731255661;
    msg.i = 0.5630603728437963;
    msg.d = 0.4253173875991475;
    msg.a = 0.6208020913049991;

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
    msg.setTimeStamp(0.7859386537342863);
    msg.setSource(30601U);
    msg.setSourceEntity(74U);
    msg.setDestination(7115U);
    msg.setDestinationEntity(201U);
    msg.p = 0.6073119506692465;
    msg.i = 0.9036808857244962;
    msg.d = 0.40191224092140254;
    msg.a = 0.05641195747993266;

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
    msg.setTimeStamp(0.42012983243092783);
    msg.setSource(49112U);
    msg.setSourceEntity(205U);
    msg.setDestination(48682U);
    msg.setDestinationEntity(182U);
    msg.p = 0.16796305746066675;
    msg.i = 0.32979758053288655;
    msg.d = 0.8456429230068316;
    msg.a = 0.9951689217307456;

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
    msg.setTimeStamp(0.9299295556478088);
    msg.setSource(13467U);
    msg.setSourceEntity(90U);
    msg.setDestination(17927U);
    msg.setDestinationEntity(219U);
    msg.op = 242U;

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
    msg.setTimeStamp(0.10963821160401732);
    msg.setSource(32438U);
    msg.setSourceEntity(143U);
    msg.setDestination(25926U);
    msg.setDestinationEntity(213U);
    msg.op = 253U;

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
    msg.setTimeStamp(0.6666848955735413);
    msg.setSource(59009U);
    msg.setSourceEntity(78U);
    msg.setDestination(47770U);
    msg.setDestinationEntity(247U);
    msg.op = 21U;

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
    msg.setTimeStamp(0.6311548681390958);
    msg.setSource(22051U);
    msg.setSourceEntity(158U);
    msg.setDestination(59615U);
    msg.setDestinationEntity(95U);
    msg.plan_ref = 3269085351U;
    msg.id.assign("WAKUYUUBKFYWEBOKAZIHOEUQTJYXGPAMOODTYLJNXEQVJMAEWWQWRRJFSCZJMOUYHWKSSPHCHSBLV");
    msg.memento.assign("LIJLNSWGICCFIZCFPTUQDCRZFTOQOZEPVIANIHYPPXEZSMZBLOCKWIGWNRDMJCBBYWDGKWMBYRNHSAETMKJEYSFVOYUGGHVLRUMGKSYAWRPJOJCQFLMMXPN");
    msg.timeout = 14567U;
    msg.lat = 0.8046098694699677;
    msg.lon = 0.4443771949418799;
    msg.z = 0.5657984342732522;
    msg.z_units = 6U;
    msg.speed = 0.008085852893871981;
    msg.speed_units = 177U;
    msg.roll = 0.588415737258456;
    msg.pitch = 0.626760832775628;
    msg.yaw = 0.7357800077775589;
    msg.custom.assign("OEPJLHESHCNCUKLNXYFHEUROTGBWYFQYJLZFAUMNHKIVNOFKCPPCAXSGHOZRSNIYWXYJAEVZLNBRAMDDQCDDOIRUCZNCLMSTEZNXHBIGURFKZBHSKEGQVAYGOPAYMISGAJHJJTKVKBPVWLTISMBZGRUQKBRLMZTRGMTVLSXRQFIHNKCDSZXYAIOIGMEABPPYETOIHFMQYXVFQPWUXWWDZPWDUUR");

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
    msg.setTimeStamp(0.870627521874777);
    msg.setSource(11424U);
    msg.setSourceEntity(220U);
    msg.setDestination(12690U);
    msg.setDestinationEntity(163U);
    msg.plan_ref = 2437604938U;
    msg.id.assign("NRIVEPTYZHHTJLIQHSAOMSNDJPRYSJDUPNZLLZCFJHENNMIZWBOQQIMFBMKWQUIDDUPRWAOTKJZUO");
    msg.memento.assign("RKOZWRLLPMAZWIYZRSTJDDHGXQLEDYCQAULMJPJWRNYLMGGFCCUDNZAH");
    msg.timeout = 55035U;
    msg.lat = 0.3041216624412021;
    msg.lon = 0.515520067655884;
    msg.z = 0.42085357911320875;
    msg.z_units = 227U;
    msg.speed = 0.41236904662101104;
    msg.speed_units = 112U;
    msg.roll = 0.23056515837159164;
    msg.pitch = 0.10131947438335664;
    msg.yaw = 0.6569534287783885;
    msg.custom.assign("OKTSFFKMYHWGSAIIBQNHHLFVEJNZBBJZFQQRXEXTASEGXPVBVQHDPZBNGOXCMZMSDRZUFKGHOFHCPLAWUJQBIJBEMNAUYLZCTUSOWRFEWSLGYPXMOKQNIZLYGCYLGAUIDCPQFKUSJYJONRMNEXMVTEMDZVJTUAUKCEVPBOPISQBICSCGMVUYDZFATXLLDTDEAO");

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
    msg.setTimeStamp(0.7041128361565894);
    msg.setSource(49058U);
    msg.setSourceEntity(117U);
    msg.setDestination(60032U);
    msg.setDestinationEntity(188U);
    msg.plan_ref = 2762626616U;
    msg.id.assign("JCOLNQSHKQKFGXEO");
    msg.memento.assign("LIWQFSLEMUAAFLLYOCBGINYTKNCIGUZUFHBJYGVXUHEXFCYAJUKZDPXPJZNRVWABMNNGCTVBEWKLLCZRBXRMQDTMIGKOPLORADASDRRJTHBDT");
    msg.timeout = 34452U;
    msg.lat = 0.24947985612864;
    msg.lon = 0.1734568007005528;
    msg.z = 0.058897148346086725;
    msg.z_units = 234U;
    msg.speed = 0.060260092456287384;
    msg.speed_units = 57U;
    msg.roll = 0.8095574876930914;
    msg.pitch = 0.6888929792981808;
    msg.yaw = 0.1253878381967446;
    msg.custom.assign("UNUNWBIATRKDHXHJKGCDJEPPPJGUHFVKDUZCGGQNRPGFMULWBQRESJZSAZZLXWVRXQSFJSJGNPJDMBOOBKCLCNRFEYCVXTSKKVXQYXHXOIYWLMMCLETDTPXESITGKVUVFTTNUNJHUQXEFPAROMPOIHZEYDDZWVBEGZHCKNBLYIUAFSNZTOORARMMQMKPIREBLHWAE");

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
    msg.setTimeStamp(0.09646635789448021);
    msg.setSource(34444U);
    msg.setSourceEntity(101U);
    msg.setDestination(53597U);
    msg.setDestinationEntity(24U);
    msg.plan_ref = 1771002477U;
    msg.id.assign("XRYRRBWWPNUBAAJYQSJRVLHMVEFYHRODTNNIDGPLPFKJCNXRGRUZTMOKWVCBYWVKJPXWEXXDMOGJTTACJEOIGIPTBYJOMIYAUNPHGLMBSCLFOPVQVTYOCZBIFSMMRKDSSULUFLKKAFWPSHTIHNSWTZQGZQIEZBKUVSOIEHNRUXPQEUBCJDWCDZBCAERLGDWQFKIVGZEILYELGXNQQHKJQAYFXLPYHCDCTOFZ");
    msg.memento.assign("INPVVEFCFMDNQORODIRVVYQXMBCEATSEUQAOYFCR");
    msg.timeout = 51142U;
    msg.lat = 0.5186109216006834;
    msg.lon = 0.1832635174032503;
    msg.z = 0.6532306382316005;
    msg.z_units = 138U;
    msg.speed = 0.5481992318165295;
    msg.speed_units = 141U;
    msg.duration = 40157U;
    msg.radius = 0.07252740329243978;
    msg.flags = 236U;
    msg.custom.assign("DKWDYMSYWQMGVCOSRVGMXEEUDIUTJEXZLBLSCFHDPIJOQWMODAEYNTUYQNNUVYCFDKZMPANNCCJXU");

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
    msg.setTimeStamp(0.773968266733624);
    msg.setSource(24067U);
    msg.setSourceEntity(118U);
    msg.setDestination(8818U);
    msg.setDestinationEntity(237U);
    msg.plan_ref = 3782383166U;
    msg.id.assign("DNJTDIRUGRYBNKPMZSHUPJLVZVWSFYXXSEVBQTDERKUMBGLGOPFYSWMMSIQEDNJFRNYERAJHNRSIVNULFUDEFQUESBYGTKZPWZSZHXGVWVVMRICFTOVCZDDLT");
    msg.memento.assign("PNUSQNCJDABTIEWBTVPCHZAGXMYWKNKFKXKOMUDAGBDQHELRLEQNXTWINGLYAWEZYERWSGUDPWSKMFGJKSRGARNHCHQDUIU");
    msg.timeout = 41587U;
    msg.lat = 0.31702959903118666;
    msg.lon = 0.5554067546948205;
    msg.z = 0.33812040606135896;
    msg.z_units = 228U;
    msg.speed = 0.3936818497996424;
    msg.speed_units = 189U;
    msg.duration = 22310U;
    msg.radius = 0.674516342531064;
    msg.flags = 240U;
    msg.custom.assign("AMJDAIZBWEPZJXCZ");

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
    msg.setTimeStamp(0.14429166775256297);
    msg.setSource(57947U);
    msg.setSourceEntity(220U);
    msg.setDestination(35694U);
    msg.setDestinationEntity(140U);
    msg.plan_ref = 2893505966U;
    msg.id.assign("GEUNYPDWBDAVKSPHOFWNXNHVJIEYCCTRILOVDYZLFUQMXWQEBWNLMKCTNAWBETDMBXVYVPQKPSOWCQFXIZLSJEDAAZLZUYOPROAJIMEAYRXVQEVAQCGXSHFTYBTOBZNZVARUAGOUGHICFKDIYZKWJFDOODDIRHREJIJFNCUTSGJPMMCWFJZF");
    msg.memento.assign("XNUGLBOMGZUNYYIBFDXTWHCJAKXGPXVFBJRFBKVKZQRIADHOSLPOJEESJIZLLPXLZPWFQBEDQMCILFDGMYRQYUIIVHRENGYZJVJGOXXJSZDTTOHJQECSAIR");
    msg.timeout = 8212U;
    msg.lat = 0.9671434552577054;
    msg.lon = 0.9761846265056447;
    msg.z = 0.47072728929518515;
    msg.z_units = 101U;
    msg.speed = 0.3461139485836585;
    msg.speed_units = 79U;
    msg.duration = 25543U;
    msg.radius = 0.5379530639670749;
    msg.flags = 201U;
    msg.custom.assign("NBDQRYENDNWFBRHGYRYMSXCGDMBUJFFXFQBRHEJJZKIPSOXVEUTZXLXZEXBRQJCFGCHPAFWELAOWILKILNACTFCHPUFRTYERWTOCVQKOPMANVUITPUNUCEHTHVDFJSESBKCLAGKVUPINDAODYQMUGYTKSVZWOKMVNWZGSCDWBYGDGJRUYTHRXGDBNTNEHYHFDXVSZKAAPJPISIBKPVZM");

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
    msg.setTimeStamp(0.5167917389887559);
    msg.setSource(9034U);
    msg.setSourceEntity(223U);
    msg.setDestination(18685U);
    msg.setDestinationEntity(247U);
    msg.plan_ref = 1657279649U;
    msg.id.assign("GDKXWROVFHKVIPURYOVWEGXCECOQGPCOUQXZAGALHQNMF");
    msg.memento.assign("HUXNIOTZOVNEFKSQNYJRDROZSXVGMMLBBKKJJFOIXXQPFVLKHJCZGWTJPIRDUITDHHVIAXGPGCTEPIXLVWTZRTEULYUBYHMKNQHFNGDMVCILUGZBBPDVIPYGMOQZYWRJMQFFKWBQUS");
    msg.custom.assign("MEUAVQSIENVHSJPNVDFVLF");

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
    msg.setTimeStamp(0.054827160313680845);
    msg.setSource(53943U);
    msg.setSourceEntity(195U);
    msg.setDestination(19633U);
    msg.setDestinationEntity(142U);
    msg.plan_ref = 2607722049U;
    msg.id.assign("WTHHCFDRTRARPCUDOFWZLDWTJYTYILFPHOXAKEPITAFMIJMICLMHMVGKSKSMQMSIXXQTOARJNHRITEEDOYMKEPRAPWBLZVXECEZPOXBQEOPUNLSCLOCOFVZECDCSSSIVNGQFYJOWUXFHSYBKRGIVHZGVQLJJVUQJQM");
    msg.memento.assign("HNYIKEDLSOUEALLFWWOMGHYJYIGTVNPPUWJOO");
    msg.custom.assign("NJZWHNERHCTPOHRWXTFEDGYYCYMGTQQHDJLHMSIWGAIFMJFSSMSUETDZ");

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
    msg.setTimeStamp(0.5895113404175656);
    msg.setSource(27310U);
    msg.setSourceEntity(88U);
    msg.setDestination(35698U);
    msg.setDestinationEntity(111U);
    msg.plan_ref = 3827922446U;
    msg.id.assign("OSIFISMGWZJZATNSDDWFQRUROJGYOCEJYZZZWUVDFPEQKMVZFZJACJNDMVEHAFBLTQBWNUKHIRASUODHVTBBYPXKLIHLAHDECCQKXNMYCLXEGLSQQEJEGRAGMOTBJEJGVRRBOIAVFUWXUPWTJVVPAFPBQNKFCXSUJTDQDHWHHUIXQYSHKPLBKEZBZ");
    msg.memento.assign("TSPYASZANUVBNFQIXGFQHGJZIFKKJSOBUZFDXFIPXOSBRYBJMZTGQWRQYFNAASXWKBVKWKQSZAHVQGUNVUTWIOUBEPEMHGCRPCCGVDDRMBVVNCLDRISDRONPDQJEJIOAWYHKJZEE");
    msg.custom.assign("DECSGGVMRJCVSNVUNWZDOFKJIINIRJJDIMLMSAPMYFOOUXUYRFMGHBHLOJVVCUMKTCOBWYYQTGDZSAXXXRRMTZSHSZYVBROFRCESVXOQNETZTCZKGFMO");

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
    msg.setTimeStamp(0.9264312321128798);
    msg.setSource(20766U);
    msg.setSourceEntity(232U);
    msg.setDestination(41546U);
    msg.setDestinationEntity(120U);
    msg.plan_ref = 1553781557U;
    msg.id.assign("QCMOINNTZDMNIMMCCSDDFGKYDBRTMPHCIPQUJGMPALOONGEWZPAZMQAEDKCWVRVGKZDGCESJRURN");
    msg.memento.assign("FPKVPEZXRHMLITZRFPQIROXVJJESLVSEAZIMBOJHRNZQQXKRUPAGXYTCJHQBSVGDZYNEFALWTKZZXCCJPOVZGINANETRFCQRBPFDFFBMGUWYLIWWJJYHQHXWENKUCSVMYGLUSJLBGQMXUPKFTRCOKHPPMBVQCWOSAUUUXBSWSSRRXAZACIZOYUGDKOJMVE");
    msg.timeout = 36270U;
    msg.lat = 0.14255797572995355;
    msg.lon = 0.6513216967235066;
    msg.z = 0.8746964522569624;
    msg.z_units = 115U;
    msg.duration = 64647U;
    msg.speed = 0.7697356613009084;
    msg.speed_units = 169U;
    msg.type = 205U;
    msg.radius = 0.36510900288391146;
    msg.length = 0.895508615907868;
    msg.bearing = 0.6465350011193234;
    msg.direction = 132U;
    msg.custom.assign("NPQHEJFSHCFITOAWCLTKZSUARNWZUQGTOZWXXYFLQHZXSGNUFZVIREJPMLPOMAX");

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
    msg.setTimeStamp(0.6001155155220967);
    msg.setSource(64067U);
    msg.setSourceEntity(44U);
    msg.setDestination(43054U);
    msg.setDestinationEntity(41U);
    msg.plan_ref = 1773871158U;
    msg.id.assign("ISEWOJBDFXNYQDOEAXGEBWZJQEPFAAGZCRLN");
    msg.memento.assign("CCZEWGFOVDITMMNBBSHURAGXRQXAKWQVSFNTYZBLRTSJGXYZHWSWWVXOVFNXJILIDANLPCMNYYVNEHKH");
    msg.timeout = 46243U;
    msg.lat = 0.5627115278271693;
    msg.lon = 0.010393950943974772;
    msg.z = 0.6035299985349201;
    msg.z_units = 74U;
    msg.duration = 11291U;
    msg.speed = 0.9134034419965157;
    msg.speed_units = 162U;
    msg.type = 146U;
    msg.radius = 0.7421213365021994;
    msg.length = 0.2887828149012005;
    msg.bearing = 0.5386400157130291;
    msg.direction = 89U;
    msg.custom.assign("QOBOYSULKJQOEXFAPVZMBPLALXPGVISGBPDERPHVVZFTDBETJYOCIIHIDDZQLXGRLWKYNLXANWNABEDLKSVYTPBIMQTHOSQBAJDOTZKRKSCZTUCLTXVWJHVKMNMGMFNLQVWAYYHJRJILOXVGCAFCUISOUKGNAUSTTIACNWXFOCBHSIZQTDHFEMZQJJMXDWNZNBFFEPCWYWKRBJMERUZ");

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
    msg.setTimeStamp(0.8985898423312523);
    msg.setSource(26607U);
    msg.setSourceEntity(253U);
    msg.setDestination(33992U);
    msg.setDestinationEntity(121U);
    msg.plan_ref = 1421684126U;
    msg.id.assign("BVEPPHCKPHNCQISHKRLQRAEICENMJRHNURBGKMPDAJLDLKTAHIWUUDXTXUGBJVKYWOGBGXYLSSXOFUSFXTIOLT");
    msg.memento.assign("LMVUHEWLRDKSZBIQMLTYDRYIOFMGVFQQAUHY");
    msg.timeout = 12532U;
    msg.lat = 0.8610455327791263;
    msg.lon = 0.21369233614755645;
    msg.z = 0.04975864173134992;
    msg.z_units = 191U;
    msg.duration = 35338U;
    msg.speed = 0.7914069307660693;
    msg.speed_units = 253U;
    msg.type = 106U;
    msg.radius = 0.15133573764654062;
    msg.length = 0.24117406025436883;
    msg.bearing = 0.29197768113990585;
    msg.direction = 233U;
    msg.custom.assign("VGRJJHOQARDXOIGWQXPNVYFSTLOMMOLCQNGDEBKREZGTXEAKPTAVUQAXPUJRQCSJODST");

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
    msg.setTimeStamp(0.6171716198441788);
    msg.setSource(52404U);
    msg.setSourceEntity(69U);
    msg.setDestination(51043U);
    msg.setDestinationEntity(152U);
    msg.plan_ref = 3675828376U;
    msg.id.assign("QWYUEAXSBIHXGDPFUVJXTFTMFITBMKNGULQGRNRMVZSCGOCYLJVIYKWBFKCGGPMVWZCBKDPVR");
    msg.memento.assign("MKBQDSVAQXJLAIRHPRLCVFLNZVELIHVXNLFUBQEJUWHCWYAEVYEYIFEUDVJIPQTWVXGRBUKYJWUJANPNOFLIUQWMAUTCWNHZOBHUSRWLCXMNGSXOAORVGYSWXYWDSRVCGJEOEPFTCPIIDDKQPOLKMBCMQYKOIFGKBMFRLZVUQPYH");
    msg.duration = 42783U;
    msg.custom.assign("CIFDLYHALXWRNEKZIHEVQCGIHRGZYGFKBEQFWSJQOFMHTUOTAXKLKTACVTNZIKXEVECJDLFLJDAHFGUHNXSYPZRFUWXHR");

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
    msg.setTimeStamp(0.5571430185254347);
    msg.setSource(52026U);
    msg.setSourceEntity(32U);
    msg.setDestination(56525U);
    msg.setDestinationEntity(241U);
    msg.plan_ref = 2750801903U;
    msg.id.assign("KOWLOMAPQMYFCHHLZDDZGCHCUVABXEFSMHYUNZUYSKMFMCMQATTFEMPGVPJEKCTVIOOQKPGBNMFYYJYVQIZIQSVWTWNCUYTHPNZUZXJUSCJZNY");
    msg.memento.assign("WSCHSYOJGFYOSBTXWAVSQZIYUXWKRPOACLTIIXPENAVDPKMZJSUEGOKWBVTULZHIKHNUFAGLCBTLQKSDMKOLYQRARFMVLSMQYPDDRFOPWQJUVTKVBSRCCWVJXJXDJIUPAHYEHBZRIKHUENCYZCOGNYLKAMUVHYS");
    msg.duration = 28508U;
    msg.custom.assign("RMNUJSLBCYZZKVVQOBHMCPYUQPYRQOSCRCFTIQPYUOBFPXEEGXROJIBARFJGWLIOPBTRYUPEMBHRBRGGXYMDUAPZUSDZMBTSTYXAFHWDWHCOJHYAGQRQVSQTGXIOIDMHVLVGXDXLJXPVUKNPGJKHAWFVMZPHEEDTOBSDWLYIAUFCUHVOFQEQICNSDKKLQKATWIHWMXZSWWVXFLVZJNEBRZUYDTNKALJDNMICMEZAKCKTECG");

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
    msg.setTimeStamp(0.9238752172671008);
    msg.setSource(47085U);
    msg.setSourceEntity(115U);
    msg.setDestination(21539U);
    msg.setDestinationEntity(177U);
    msg.plan_ref = 2488543257U;
    msg.id.assign("OVVJJPLTYKDFBNKWUEOYMXDELDVYLWIRBCWEJLZYSNMNPAGJSACDQLTOBHKIXUUAJTBYVELPHMHCBFTCWGFDNHQTPUTHRSTYPGJWALDQKOGOPIUIIGAPGXSAKCSOJCWQKGZYIFUVZCXJVZKGXNTKIRXBWQCXSXIBLGS");
    msg.memento.assign("CHVNNDTAETIXODQNBGYNYWWRMCFUBARAYXDFISLYVKSXRISDLEMUPHRHNZAVFKVLYHGOLZWLFOQGFIKPVRPQWQDEDOTQGPWZJXJKUHAURNBGAUJHQMABXHSOEHIDTOCZYSTZLJSTVZUWGCRGQIBBIBELGHUMZCWITEWAZJSZVMVUAQNPBKRRPJOO");
    msg.duration = 41145U;
    msg.custom.assign("RBLQLNALPUWHUFQWRXVYYGBBDSFKVCYOMMYYWMZYJNIPOVNUSTSNVCEHBFXPQZKIMFWGNNFUOVKKDWSZAOQDDJCZUSEKZTERIXHJLQKQCMOKXGBIQBHIRMUNFZERKNJBGJVPEEQLIBEIHFMAVWESRNJCOPGQTFPTHVKDIVUXDXUCWCOURHJTVYLLKGIEHIBTGPPWMXHGOYJXYSSWACMOX");

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
    msg.setTimeStamp(0.24556929922860116);
    msg.setSource(352U);
    msg.setSourceEntity(225U);
    msg.setDestination(11341U);
    msg.setDestinationEntity(29U);
    msg.plan_ref = 676826965U;
    msg.id.assign("EMGSQVXYLBZIRAIKLONACHOVDYFEORDQYKHGFE");
    msg.memento.assign("UVSRXKPXHENXPGVZFAYVYRZAKAEIJMGOQLBANETINTQBECASQYCZPOBCJHSSMLWVAONKPPZYKGOOLQNWHDMIFQD");
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.07987650927948864;
    tmp_msg_0.speed_units = 47U;
    msg.control.set(tmp_msg_0);
    msg.duration = 8940U;
    msg.custom.assign("QDWYEQSLGMZPVWBOWJZPUUTILTLUUQBCKWI");

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
    msg.setTimeStamp(0.10116135245495439);
    msg.setSource(44319U);
    msg.setSourceEntity(25U);
    msg.setDestination(24589U);
    msg.setDestinationEntity(16U);
    msg.plan_ref = 4275099287U;
    msg.id.assign("BHFQEKYGFNVPJZRGOHXOKXEWGOMERRAWZZXMSCXPLHENQPMPCKJNEZUXADOSIVKGPZIKKROFUIIFQLYRBFDKTUIETUSBLWVBMZQWVHGFTLPVVLUIXYNVZVAXQWTFOBPAURDEBTQRYGNKIUHHSVPCLSUNJICZYWDYNNQJJQIOLCADEJISHCOKHLMATHYUDFJYXWXFQCGRULPDOZADWY");
    msg.memento.assign("ABFTWPLOUDBJPQKRXQWWWUZTVYPKTTBCDRZLCGKDCIRXEOIIYHEGLDUGHPOOYWVKEIBTGOIFICSXMQBOVVAZYCWFFZAVAMUHPNHIHSKOFRAQSTPSMCLJLKONTYRDRTVMNEMXQSDPDMPJJKCZMGUXVHAXULLULGFGMAPSUHEXRENYYESYCAGU");
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.9861594616815559;
    tmp_msg_0.z_units = 78U;
    msg.control.set(tmp_msg_0);
    msg.duration = 33998U;
    msg.custom.assign("QDRQYOJPNSRGXIFIWVQMJRUVJCYLAOFHDPSLNHGPEUCECTQYQNGZLPEEZJDLNRTUTVTWUSOYPEHQKIRTLCNBMMULTYSNUHBKGNAIVZLABZWWQFUWPGYHSSFRBJAKMXCXPFSKKTAUVBIVZNEGAAXCZCPEMFFJCYKVUWMKOXXDHMDQCPSBYHSMWLRMLMRNDYBDHAJ");

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
    msg.setTimeStamp(0.9971088300176016);
    msg.setSource(43158U);
    msg.setSourceEntity(214U);
    msg.setDestination(56491U);
    msg.setDestinationEntity(120U);
    msg.plan_ref = 2609075091U;
    msg.id.assign("DORQWAFDCKGIEIRAMXZXETQLGSNVSVZKORHGCAMUFMKTGGYHXRDVXPATAJYJZOMUEVOJVWQTNCUPUENEULSCBFCYLJORXLJGYNILYJBPBSBEAVBWTAYMPWXZFKZFEJVDVKDTUPFFXTHWDSDLIOIGGFK");
    msg.memento.assign("DPVGZJCVGPKHYQHWUEBIJUJNAHKZSFGGWIANARRETDVPMWONTGGQVDCTLCNRQQHLRTWCHCNIRQJAHFBDCASLROEWXOVULKBADYSUNOSHWLKXXGSBLGKKDZFZ");
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.5402266692923124;
    tmp_msg_0.z_units = 19U;
    msg.control.set(tmp_msg_0);
    msg.duration = 15981U;
    msg.custom.assign("NGTCCGEFMHQTXHKTIWHTXDPSBFIUYOIHDYUYYJDKXIXDMAACZQYTJIQPOFVWZCDCHZJBMEPWLYFVZAEQBKMRAEONAQKHHLOGRFDUJYQEVTBSJOYABPJCEDBCNMLSIEISQMQRUAMCDWJILERGPKNJUXTUZOXLHFSKVMNDCKEPJSWLURNZAGIGWPGQXGPOWHPVSPXBYVABOSFNNVGSR");

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
    msg.setTimeStamp(0.6915411472787085);
    msg.setSource(61783U);
    msg.setSourceEntity(51U);
    msg.setDestination(59561U);
    msg.setDestinationEntity(186U);
    msg.plan_ref = 1622310492U;
    msg.id.assign("DUJVLABPSUZTGBOZRFLAYFHDSPVGJLFGNJSFYZXDOEEMHKOSWWDDATPQSXAFUWEOOPZDCGNVPYMWXUIVZBJPKLLXWZENXFZSUNARFEGQIQRIWLKLXDVMTJBPWCDXHV");
    msg.memento.assign("VCHHCHVSYONOVUBAFKEGTYUHZFFRILFCUEPYSWPKZHCZDIWLMJJNZKFVEXQDBWCBSNJTAGNSAMLUZWGQFYKRPLXFRLZGCOIVEMJHJPBRRNXTPKIXORSATSVWFRQKOYJWXATIVBBUGUJYOQSEZBTFSQJ");
    msg.timeout = 54147U;
    msg.lat = 0.6052866996658169;
    msg.lon = 0.6571630567235647;
    msg.z = 0.3996198749242058;
    msg.z_units = 24U;
    msg.speed = 0.6220611428528722;
    msg.speed_units = 33U;
    msg.bearing = 0.7456090042851247;
    msg.cross_angle = 0.42572505207495825;
    msg.width = 0.5352399393347387;
    msg.length = 0.5880891180163668;
    msg.hstep = 0.9121202320223517;
    msg.coff = 5U;
    msg.alternation = 204U;
    msg.flags = 141U;
    msg.custom.assign("BSKVNIMQKSKRGDYXTIPLAMIZWRXYHEUDNYCOJFLHTCJSIMHHRHJPAFYREBPVVLAYVOKIRGMCSQBKLULBTZTRTWXXPRVXJXRDDHYTVOGSJFGYZFJZELQXPBKNNCOWCNPOGYJYEADAEDQUFAIFMETMZPJBQMNYGZOQQBISPWVCXNAEZXCOFIVDTBUWHKPPSOKKGHBMNELZEZJUWARLUGW");

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
    msg.setTimeStamp(0.15168511062975176);
    msg.setSource(7207U);
    msg.setSourceEntity(10U);
    msg.setDestination(48344U);
    msg.setDestinationEntity(105U);
    msg.plan_ref = 3203431195U;
    msg.id.assign("BAZWTBXDUOMAJYDBNUGDTIZEITTJNWAYNRCKVDJYUIROLYCTPQHLVKEPNRATGNQZCDSCJZKMQYXMPCVCAPFWSYRFPQRSVHVQQLMWWCHNETOLSHVVGKVUXLEXQZMWSCDPLJYOUWUJKTIHLBBXVRJGIYLFDFPUGIKJBONIRERPEDZUCMOMKASMUSNFMYGERIRSNSLUHCJFXNXEQQGWOAFPEDKOLH");
    msg.memento.assign("OXQEOBIMIISGCKGMTVTJXZ");
    msg.timeout = 28559U;
    msg.lat = 0.18389492372984528;
    msg.lon = 0.7974865933427683;
    msg.z = 0.7479927953849033;
    msg.z_units = 58U;
    msg.speed = 0.5865956083854768;
    msg.speed_units = 173U;
    msg.bearing = 0.7896136057688363;
    msg.cross_angle = 0.2897817612371898;
    msg.width = 0.6246853305905411;
    msg.length = 0.19683591428537162;
    msg.hstep = 0.6079149036683213;
    msg.coff = 73U;
    msg.alternation = 103U;
    msg.flags = 95U;
    msg.custom.assign("TCECBXYENXDAGFBIKLJGIRKUWZDLJMFHLCWIYTTLPPPNNWQFKGIIHAJGBHKFPSMAOKNRHJMBELDFMAWOOHHEZLCTRLKPVGZDUEZIUZVJVDVDYDTBIXISRGYWNGZPTHSAXQYWZCSOJKEPBSVRWHRLPORAUNQACCWJMJOJQQTLTPMXNYMQVUGIBYMEPOCAOJVYRKYUWQSFSGTVBDSTNAXZWQXNSOUASMKXRUUYOXFQCLEVVQKBRNFF");

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
    msg.setTimeStamp(0.9492629933960954);
    msg.setSource(12762U);
    msg.setSourceEntity(155U);
    msg.setDestination(13076U);
    msg.setDestinationEntity(54U);
    msg.plan_ref = 1468682074U;
    msg.id.assign("LQWYIHETLLFERHZTXXZRGXMYPDYCMPSETKGSIUHXYCACAKWIXDSLQXYYWNUWHPKJJNPOTLZGGWDTCCQVUZWLNKNANAWNFVC");
    msg.memento.assign("JWOLHSYMYAZAKNNIMPJIMOHOXEFLSYUDOVPFZLTUSCXEOVLAPSHVTQZIBXVJRCBNKWVKNIQZCYSDZPSXGADRBYQUWNISXXHNKRREXWKLQXCASVTQUBNLFDOECPPIAAHVBCLPOWELMNOBPQDKHEJFKTAGJUVZZPWMAFOXIFQGIYMYUHDSD");
    msg.timeout = 50344U;
    msg.lat = 0.0787248883886742;
    msg.lon = 0.4029079712634843;
    msg.z = 0.5063927292794431;
    msg.z_units = 181U;
    msg.speed = 0.07018582588135802;
    msg.speed_units = 144U;
    msg.bearing = 0.22876901179959563;
    msg.cross_angle = 0.04750337926386883;
    msg.width = 0.5476212274017539;
    msg.length = 0.5028387630300968;
    msg.hstep = 0.11381241238683149;
    msg.coff = 173U;
    msg.alternation = 126U;
    msg.flags = 37U;
    msg.custom.assign("LPRGRPWLNAMFRFIHYQJJXOVOJPILTUZVWGMKGMDRFPBSYGKLWKCKHHMOLDMJEMONLQLIGDTRTJXTVQAFFNQGXDTQQYZHGVNBTCLPZSQDKWKIHNZZVSOBCRBCGJNIEWYQGXWFKYICXVWHCXUVQPDPORCVALZSDZOA");

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
    msg.setTimeStamp(0.27101977006368005);
    msg.setSource(22272U);
    msg.setSourceEntity(129U);
    msg.setDestination(41167U);
    msg.setDestinationEntity(74U);
    msg.plan_ref = 194477706U;
    msg.id.assign("GMEKVLALKXGQKQXFTVHTZODDXFCCXWNRJZNQJEHCZHGSIIBLOXKKFOOFNYBUWYJCMPJOURBYYSJYDRMXTLQSUKICZFWVBLFYHOIQWSBUHIQNPOBDGTNZLEHWDHVSPBWIHYZAPALUGZNIPBTZXTMPZAMWOMJWPAAXYYTLEWAEJMJNLTRLOUSUEEPFCUBDCIXAURSEPRUZRVKAQVKRQFNMPTCHVBTGEQOVXGRVJSGDSCNDNGFKMWHMICJQ");
    msg.memento.assign("WGHPCGZQPUBSRBJOQDJPXORAUOXWZCLSAWYQVERZVJIDHMBTRDNWZTUVNYXAFNBFNRTHVHWIPOHUXMYU");
    msg.timeout = 17100U;
    msg.lat = 0.7188950088306899;
    msg.lon = 0.8380672363483738;
    msg.z = 0.9596303327282427;
    msg.z_units = 216U;
    msg.speed = 0.9767520153959349;
    msg.speed_units = 246U;
    msg.custom.assign("SBBFDWGSFKMWNDOBNAJQNJEPUYERTOCORIKMPYNGKU");

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
    msg.setTimeStamp(0.9648176191572546);
    msg.setSource(22687U);
    msg.setSourceEntity(171U);
    msg.setDestination(21008U);
    msg.setDestinationEntity(58U);
    msg.plan_ref = 4282280650U;
    msg.id.assign("ENKNMYNSFHWXXEPSCTMIKCHEASMVLINEFGQSFKGUEZKMISRAOBJIYPVJPRQG");
    msg.memento.assign("PDTIUWSOOZKPPCEMAAUAMABTBGWHJUVGLPPEOCLKZZDAIYQSEDFXBYURGFDLLXYWLLTHXXGNJZNDCMOKWGMQKYJNBVPPLYZTCCNAMRJSQSPUOTIRRIQNOJUWUDEDAQSRJ");
    msg.timeout = 58220U;
    msg.lat = 0.29410566485155565;
    msg.lon = 0.6518364317014727;
    msg.z = 0.9183994372428841;
    msg.z_units = 28U;
    msg.speed = 0.2290630971820623;
    msg.speed_units = 236U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.340627150106543;
    tmp_msg_0.y = 0.019745523272822307;
    tmp_msg_0.z = 0.6750716968840368;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("BHJKQDSJRAZQAOQDQTVQCMKVWIYSZQZNRDHJRZVOJYA");

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
    msg.setTimeStamp(0.3699739384106294);
    msg.setSource(15292U);
    msg.setSourceEntity(141U);
    msg.setDestination(27664U);
    msg.setDestinationEntity(85U);
    msg.plan_ref = 1366067594U;
    msg.id.assign("PNTHLQOCIRWLWOUQAGZJGIJMBDYSNTYBFNKNFCXOVCFDMUSPYEUKMBYMV");
    msg.memento.assign("ICHNWPZXELOJRPTXNPAIDMXCQFIQMKVNGCSGXVTMQRUREWLVQIUZFYMCBVXRGTFGFWYAOQKAWYNKYIDFCYCBNSNLCZRXTTVKLGFKJDCSWJSVJIMHYKPWABTADKRJPKNMFTDUTPWNOBZZIAHVLXOHEASLBZCWAQQU");
    msg.timeout = 23916U;
    msg.lat = 0.5398191933820516;
    msg.lon = 0.8559421482014067;
    msg.z = 0.07265592882654315;
    msg.z_units = 203U;
    msg.speed = 0.1833276205587463;
    msg.speed_units = 41U;
    msg.custom.assign("QPZUUYDIXQVTMRTYRDOTMHVIGBFNLGSYU");

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
    msg.setTimeStamp(0.7279121970510348);
    msg.setSource(17170U);
    msg.setSourceEntity(5U);
    msg.setDestination(1702U);
    msg.setDestinationEntity(113U);
    msg.x = 0.925796304180443;
    msg.y = 0.41108050543256847;
    msg.z = 0.39249451966044857;

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
    msg.setTimeStamp(0.22573401371073354);
    msg.setSource(7392U);
    msg.setSourceEntity(79U);
    msg.setDestination(17175U);
    msg.setDestinationEntity(20U);
    msg.x = 0.35644436784318867;
    msg.y = 0.4005960518648157;
    msg.z = 0.7270823763427725;

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
    msg.setTimeStamp(0.35877402717071116);
    msg.setSource(26463U);
    msg.setSourceEntity(93U);
    msg.setDestination(39364U);
    msg.setDestinationEntity(232U);
    msg.x = 0.1980118509797345;
    msg.y = 0.49332611937464554;
    msg.z = 0.8893496027241429;

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
    msg.setTimeStamp(0.650477022684475);
    msg.setSource(24911U);
    msg.setSourceEntity(227U);
    msg.setDestination(38356U);
    msg.setDestinationEntity(140U);
    msg.plan_ref = 293233526U;
    msg.id.assign("QHLUOWMDLOGTUTCYUVJSAXQHFFGHAQTKGQDXUAMDSESYUNFOGFPPESNOOCBGIXHMCDJOWVGPJYYLSYZYSZCPFKBIHUDXDURNTLAHZZVKWEMFKCDVMRIXXOTQEQCTZBJFRZQIXLJCZEJIBPWHOVEKESAETFRNHNPUGJCVULMAGISJAYWIEYWJRNKXWCJIUDHTRBKMXZTKAYMMLXLVEIFCFR");
    msg.memento.assign("ATSDUWOKIWNSAPKEFHVAOL");
    msg.timeout = 32300U;
    msg.lat = 0.0019245838983680263;
    msg.lon = 0.9791024956852291;
    msg.z = 0.7521776616904604;
    msg.z_units = 79U;
    msg.amplitude = 0.7516964700512123;
    msg.pitch = 0.0026313314688908296;
    msg.speed = 0.38688732915565005;
    msg.speed_units = 91U;
    msg.custom.assign("FRCQKNUTHKTZQHPGRYZILXITNDMMSCCETDYJEWHDDNYEHAKOMLQLBQBAYHPVRKPUFBHUSRVHCARAXDUXOENLHIBOVGWYFJVUGOJAIYRHPPYNMAIGSUJXYFGDJBMEOUZWKMYJEPVHSFVOGUFPBLGQBMKOLODDSSXCWSGVBIKJIZRBWWUFLFTPWZTYSXMVOZR");

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
    msg.setTimeStamp(0.37078703312683825);
    msg.setSource(42167U);
    msg.setSourceEntity(23U);
    msg.setDestination(63118U);
    msg.setDestinationEntity(241U);
    msg.plan_ref = 186286463U;
    msg.id.assign("TLPPOMXFSGGMRWVCVFNRQ");
    msg.memento.assign("QELMAABVJVXPSBQBZZYHCVLORXMKSBSSEVKZKEGZXZFXRNZVWALMCUTADI");
    msg.timeout = 15553U;
    msg.lat = 0.4846620632819606;
    msg.lon = 0.4786144764858046;
    msg.z = 0.9579058140130084;
    msg.z_units = 194U;
    msg.amplitude = 0.7099716699983804;
    msg.pitch = 0.0640453258555822;
    msg.speed = 0.3828884564844839;
    msg.speed_units = 216U;
    msg.custom.assign("EFQHHWFXZJNGZTWLRQLJYTLFUIJVSBLBMIICELBYIIMPLWATQUAZZLOGXMVLPPECOEPRDGKSKCTNQDXOPDSPFAIBWQCDFQTFZDQSSLCOEUT");

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
    msg.setTimeStamp(0.2344806456415297);
    msg.setSource(46532U);
    msg.setSourceEntity(243U);
    msg.setDestination(40703U);
    msg.setDestinationEntity(221U);
    msg.plan_ref = 1135481299U;
    msg.id.assign("SQXFREYGATAFCKOZRRWXNSYCUTUFBNZIMDRDAFHVMQUGBIYABLBQWMWCCNNNVDUOQCPQFHVJMPSHLSUXDRBGCSFLXUVNMZBOVTQNJQTIAFDMEKWLOCXREFGTOWYRMURLKZSPGKGZEJEEGDQPOHTVLWKVLXKAZWZBNKYPEYAEMJIJZKTCULAYNWWXIOKAGHGJHIID");
    msg.memento.assign("JUKNHFMJBUQJGNGNCBPOIGKOTIWMLWHJXCYMXQOYYIVEJCQIFIRNGVZCBALWOEVXBUBPTDBUTDSKFUOVAFUDFIYDVYPTKTKXZDPHAHBFTJXGGHRSBZSDNSFPAQKRQOMLTPCUUQKYFIZNDCVWMVGAEZA");
    msg.timeout = 38641U;
    msg.lat = 0.17493170735270824;
    msg.lon = 0.9857870163586305;
    msg.z = 0.4430949005107224;
    msg.z_units = 15U;
    msg.amplitude = 0.8594799367196313;
    msg.pitch = 0.31682214299202704;
    msg.speed = 0.3827763110053607;
    msg.speed_units = 231U;
    msg.custom.assign("SJVQJSQRWGRJHNIVTKERVVNGQROVZWIOWNNKOCJFHWKQXKPLYVWXXGKTBMPIBLBCTCQEFHFUDYZACEIZANKVQBUBIIOXPVTNCLJOFMMRBJIOGUIDMEVUEOKDHMQGYPHNZXFAIBMHEEXRFGPSNTLCUZOTAYGTYWBQNYSZADMUJCSABLDPXFRDNUQFWVCGRSRZUEDEYYHDLZMFAFHUWKSP");

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
    msg.setTimeStamp(0.9522378643824568);
    msg.setSource(41870U);
    msg.setSourceEntity(53U);
    msg.setDestination(10135U);
    msg.setDestinationEntity(150U);

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
    msg.setTimeStamp(0.5388515150121729);
    msg.setSource(723U);
    msg.setSourceEntity(23U);
    msg.setDestination(58959U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.5953730514347074);
    msg.setSource(14407U);
    msg.setSourceEntity(93U);
    msg.setDestination(34468U);
    msg.setDestinationEntity(3U);

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
    msg.setTimeStamp(0.9887094141020617);
    msg.setSource(25416U);
    msg.setSourceEntity(189U);
    msg.setDestination(26588U);
    msg.setDestinationEntity(163U);
    msg.plan_ref = 262962901U;
    msg.id.assign("HCUYSSTTNTDZZAUIRVFJHDVGGMIQGQLSCEHYZXRUSZVKCGCWRFBFZGIAKHQLXHJONOAGYNXGODWWERPRICMBPCADLTMFENQLQMSXRUGYLVJLCHJAWTMWOMBDFFRFOQXDNTVQCXFYUQHAPSIUOUWEDIYLECNKVTNNKR");
    msg.memento.assign("VVUUNWGVODAYVFULQKEQWEPTIAZDOHXTJMUXSFMCRQNCYMTVXRXDYKWQSAOZHSYLPSOBCHGORIIZXGLWBKHBUZNMNTCDCXTQELAJXIVDOMROKDHWFAJTQNJSJQQCDBZAALEFSGFHYGBAFEJZNHKGJYKVZAWBLZSTPSGFXIYTVCZKNNMJBLCLVJNMJQKXGWIIYDGTRPHKHPRUMRFULDWFEORBYCEEGIMR");
    msg.lat = 0.09461491732243632;
    msg.lon = 0.4992552252436834;
    msg.z = 0.2528343573415822;
    msg.z_units = 41U;
    msg.radius = 0.22184593935922747;
    msg.duration = 46244U;
    msg.speed = 0.11286654508188942;
    msg.speed_units = 110U;
    msg.custom.assign("PJYZUXBFROWMBESCIENDCABVGYJHCUHIZYY");

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
    msg.setTimeStamp(0.8374116519944823);
    msg.setSource(18765U);
    msg.setSourceEntity(241U);
    msg.setDestination(4044U);
    msg.setDestinationEntity(240U);
    msg.plan_ref = 3907532224U;
    msg.id.assign("CCQSZQRYRFTAYBBVMVULDFBJHPEDFLBBVKNXRZQHPUAZEPKNRUPUFQPHLXQIYLPKMGJMPFTLAMBKBRHVKKMRXVLIFQWBIUSQWNFZGZGELJACUTCOTBTSMSQUTOMIALQXMXNDSFOGHJIKYWAOXCROWXHYWLODEVRIGNNEKCDOUKJJJWUOTTPXPAWJGSVHGEEJZOYIDGHRXSVNMVLDRZNDHYTZSZCSHEESZPA");
    msg.memento.assign("STBYVYTXNPFBULHVCOQMSNGLNIRFUAABWOMJDGXNZWOTKPXPJKRHWAHORYUIKFKIRHKHMXXALPTJLCJNYXPEDSEYLWNSRDVIOCQTELXNKJWROWFDZRXMFPEGFUANEQEXVAMGGPQZKDHDZOAQJHJGQKBNBAETMWTQYSSSEQIGVUDGJBUFHXEQBOOZGQCCUGPIAPPIYKECMHCDRWTZSTDKVTNZJBUVOWFJDYVZHZCMUCYMRYASLIU");
    msg.lat = 0.9523489623278092;
    msg.lon = 0.9560794240654655;
    msg.z = 0.09891339330722204;
    msg.z_units = 22U;
    msg.radius = 0.917268654882569;
    msg.duration = 63691U;
    msg.speed = 0.41689622572457263;
    msg.speed_units = 115U;
    msg.custom.assign("SCRCAITBNPVNZRUANLQATJHEWQLSKBACZSWEJYHKIOXBWOTAIQZVBXEZVGTDDJZGRPLQPALUDHHOIPZLVJHWJQUTGMMIQRDMQBQIDKFKLWPMVMFSFXZVFJQWTAV");

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
    msg.setTimeStamp(0.7318415599470491);
    msg.setSource(59425U);
    msg.setSourceEntity(147U);
    msg.setDestination(60250U);
    msg.setDestinationEntity(191U);
    msg.plan_ref = 2621524733U;
    msg.id.assign("BATVLFZRUKZIFHHXHOSIEXELQNRPCOEHDVGGKFBMDDWBVKIVONDCPSILRMGBBYNTOMAZFCKIQXJ");
    msg.memento.assign("ITMOKUFLPEEZQFVQOJVSEAZT");
    msg.lat = 0.2523965068073185;
    msg.lon = 0.09707860845721439;
    msg.z = 0.10840360510223623;
    msg.z_units = 166U;
    msg.radius = 0.502352556484189;
    msg.duration = 10773U;
    msg.speed = 0.10040155536716122;
    msg.speed_units = 64U;
    msg.custom.assign("FLJIJYVNSZGXGLOCSODPLQNQMTOYPEZKFXLUGYWNZZQFMJSVZJKTSAPBSSNEBFTJPUXNDAAMBWUEXDFXT");

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
    msg.setTimeStamp(0.502543909571562);
    msg.setSource(19792U);
    msg.setSourceEntity(152U);
    msg.setDestination(25955U);
    msg.setDestinationEntity(227U);
    msg.plan_ref = 1314359093U;
    msg.id.assign("LUNORNGMYYKARQCDRGBUQZPJRQFKDIYASXQLMQQOLFAMUGIKIKFPPCYCZKRDXJINOHKVDYJWNEHVQSVQBUABNYQUBNEAFBWWFTDHRCLCIHCVENDSEBPCHUDPBRTZJRXLUJOVFWOXKKCEATZVKIHATPDFUXXCGJBGGWNLLSQXMTTFLATOUJG");
    msg.memento.assign("HDFQWKZJPRNDKVDGIPJOTKVBCSUVACSAYESYIFQTQDQJYOVKBHSVCAXYWELWOXBTUMSTZRVCXFGYMDZHMKTRAJAOLFNXFBEOHMBZWIQCLJUXLOEGATXWYMUOHQLRMMZZFFJLCCUAJIPLENJLAOYJKWUMWENUPCDTKQBHYISNLDOYHTQJUZGRETPPMAPNFDSUIVREBLSTIPPKWSGWNHXMDZGANZUHDFZXRBSEYHRKIXGGRQIOBXVGVRQKCN");
    msg.timeout = 17954U;
    msg.flags = 227U;
    msg.lat = 0.6314422592690899;
    msg.lon = 0.6349200659644438;
    msg.start_z = 0.9502838733957477;
    msg.start_z_units = 143U;
    msg.end_z = 0.5740244332598187;
    msg.end_z_units = 234U;
    msg.radius = 0.35346150058547454;
    msg.speed = 0.23072052586098546;
    msg.speed_units = 167U;
    msg.custom.assign("YASMNMIHTDTNMSUACKUOVNXYUZEWUJPKQEOKRJOOFGVHLTHPLAMVMNPHIRDASFBFU");

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
    msg.setTimeStamp(0.7901828336669725);
    msg.setSource(54058U);
    msg.setSourceEntity(23U);
    msg.setDestination(33513U);
    msg.setDestinationEntity(192U);
    msg.plan_ref = 2111555068U;
    msg.id.assign("IFPUYNNDFCKXSHJJLZQWUAVMSYQBPKPWARSLWOZLIAPCLJLFHOOWBUIQJWWLPRGHWCLTYZT");
    msg.memento.assign("ENDYHNUUYUOGBAJGJENVRFMWUQZIZVKOHKMKCPJETSZMVRXZWSRZXVLTJQBKHVDWCYOEWDGLKNQNTOBSKIPAIYVFDSBWIIDMAEMEQPMRHFDCLXPFFCXIWIGPGU");
    msg.timeout = 38299U;
    msg.flags = 246U;
    msg.lat = 0.17557232108157672;
    msg.lon = 0.36821318861325636;
    msg.start_z = 0.6582166355243901;
    msg.start_z_units = 30U;
    msg.end_z = 0.10290502807738966;
    msg.end_z_units = 227U;
    msg.radius = 0.0017888152062606189;
    msg.speed = 0.9150104747576852;
    msg.speed_units = 204U;
    msg.custom.assign("UPTIIRTRVJLQSEWGAHLUKMODIQRFBZLDGARLPKUHWUMKIAYOCFVPQTLVLDYDMJMGFBTXNIFYOJPXYKDWOCM");

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
    msg.setTimeStamp(0.6334574717249883);
    msg.setSource(25121U);
    msg.setSourceEntity(1U);
    msg.setDestination(34389U);
    msg.setDestinationEntity(27U);
    msg.plan_ref = 3621980931U;
    msg.id.assign("WRTGOEXRJWAEPFEHOIYEYPLADWIJAUZIOBUZXDBMLJCYRQYXMNOWGRUNEBHNSDWTBPIDYORGQECRSLHNIFFKKRDEMSQNPFVTHVFPZSVSVCHDKTXOXCFPLGJISUDKUMKYUSKRTWKUTLWZVFJXHCYCTVYMUWVUVRHQJGLPOKIPABJAXGNDCQOWJGMYHTHFAYXBZMLTNLVPMZGBLJCOZVNQXMEKUGIZEQHADBLJAQWKFNESRZTFBDSBMGQAZXNI");
    msg.memento.assign("HAPXUGEOSLAVDQQYQJTYCYNCKNVJDMJK");
    msg.timeout = 51467U;
    msg.flags = 130U;
    msg.lat = 0.29873179129707284;
    msg.lon = 0.06301961633781905;
    msg.start_z = 0.5397537716574815;
    msg.start_z_units = 76U;
    msg.end_z = 0.4928952055941077;
    msg.end_z_units = 11U;
    msg.radius = 0.6524402240289999;
    msg.speed = 0.4057730532070738;
    msg.speed_units = 16U;
    msg.custom.assign("HWWTIGJSVNGVEGZOPKAZBBLUJYPKBQGIAJDNSBFBSEXFSRDHPOUPUMNNOKHMDTNCGILXXREZIGWARMMY");

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
    msg.setTimeStamp(0.8821593525498008);
    msg.setSource(57997U);
    msg.setSourceEntity(126U);
    msg.setDestination(34184U);
    msg.setDestinationEntity(153U);
    msg.plan_ref = 2952688800U;
    msg.id.assign("AIAZMZQXQQYEFHXZBGNNFKOCBJIWTTSETCRJXCXSHESWZWFSWEUKGLMCFLRDDWIWVVL");
    msg.memento.assign("BPNXSPHDSKWCCSCYHFRHCBUSPLNMQJCXTKPPLVYMBGOYFXBIZVEZQCKGBQOBSZHDTEKDLTIADJWAJNDSJDHOJBKEMIRLTMATUQVKBDGWVBFEAPUJLTS");
    msg.timeout = 33518U;
    msg.lat = 0.7097296626936426;
    msg.lon = 0.2892580588434118;
    msg.z = 0.07147423144710496;
    msg.z_units = 189U;
    msg.speed = 0.23357567304379523;
    msg.speed_units = 223U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.24484193814823285;
    tmp_msg_0.y = 0.35616344044772963;
    tmp_msg_0.z = 0.32601818424504836;
    tmp_msg_0.t = 0.06705426444746598;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("CFZPBDTMIVAPFFYVFRGGSBNZEJMLIMZYDEGWT");

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
    msg.setTimeStamp(0.1960333992341443);
    msg.setSource(63694U);
    msg.setSourceEntity(173U);
    msg.setDestination(2031U);
    msg.setDestinationEntity(126U);
    msg.plan_ref = 3307690439U;
    msg.id.assign("CYBWTOFRSXYCJKAZRBJFAUDCAZOAXJQAWUKEIYUFESFOJAMMPXC");
    msg.memento.assign("YGGJCYYHOKLOTSYYDUAKSFLOIHALWLGZFBMZWKWTOHWDDNQFBJSKQUADBDJQIFTUXUIFDXSWQVLECQRAPYTXPCJOIJRZBOMQBFWIQNJAPOMAVCCWMWFCQWKETCSVLTCRIPERNGCGAJXXFQIBUAEU");
    msg.timeout = 14414U;
    msg.lat = 0.9135247106292376;
    msg.lon = 0.5338718007008895;
    msg.z = 0.6228479516526714;
    msg.z_units = 195U;
    msg.speed = 0.5562750677576631;
    msg.speed_units = 251U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.5784274577530676;
    tmp_msg_0.y = 0.7572285522409643;
    tmp_msg_0.z = 0.23162787997947465;
    tmp_msg_0.t = 0.8096115497045225;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WLTKOHHWDJIEBLAZREGUQFGOFZWBZWQDJUPTXEIZKQVOWMTEM");

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
    msg.setTimeStamp(0.37552882595681714);
    msg.setSource(29043U);
    msg.setSourceEntity(49U);
    msg.setDestination(24502U);
    msg.setDestinationEntity(48U);
    msg.plan_ref = 2062226850U;
    msg.id.assign("NABQQTOWTYBOPXKTLRIMOJOP");
    msg.memento.assign("RQOKYAMBMXAYIPTRQFLKDEXEDPBLJAQZDVXTOHNVNREEOABJJUSVMOMRMLHHWUYKRMIQWFNGDMGPVGAPPDRLQZEJQIVBKXTXZLVGVYFICXTQWCSPYFNZLQHABWBDTSIPSAOCNETSUHZHSORGHYLDFHYIJKOANSFVULDGAZZDQWUAIFJLWWBCBZHECUHKZWY");
    msg.timeout = 4354U;
    msg.lat = 0.2886809972926535;
    msg.lon = 0.977078998153654;
    msg.z = 0.6731641279488492;
    msg.z_units = 61U;
    msg.speed = 0.5791421995010487;
    msg.speed_units = 0U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.47666443363822286;
    tmp_msg_0.y = 0.41614414827573953;
    tmp_msg_0.z = 0.20115031795592087;
    tmp_msg_0.t = 0.21084067831947917;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("AJMXFMYTDTAAQHJQBULFOYSYS");

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
    msg.setTimeStamp(0.9580034718969476);
    msg.setSource(7271U);
    msg.setSourceEntity(150U);
    msg.setDestination(5437U);
    msg.setDestinationEntity(96U);
    msg.x = 0.827006487388401;
    msg.y = 0.37746648114469483;
    msg.z = 0.44041409307894097;
    msg.t = 0.29426695880405307;

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
    msg.setTimeStamp(0.5921638723817513);
    msg.setSource(25723U);
    msg.setSourceEntity(183U);
    msg.setDestination(17656U);
    msg.setDestinationEntity(208U);
    msg.x = 0.4966073558160107;
    msg.y = 0.07068267583528853;
    msg.z = 0.3888757348931493;
    msg.t = 0.4838924672260334;

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
    msg.setTimeStamp(0.023207085166731867);
    msg.setSource(65324U);
    msg.setSourceEntity(195U);
    msg.setDestination(26030U);
    msg.setDestinationEntity(33U);
    msg.x = 0.5708399126376354;
    msg.y = 0.5266316434564989;
    msg.z = 0.6396594570217959;
    msg.t = 0.07703950259911752;

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
    msg.setTimeStamp(0.864947168247973);
    msg.setSource(5869U);
    msg.setSourceEntity(236U);
    msg.setDestination(28366U);
    msg.setDestinationEntity(19U);
    msg.plan_ref = 1229805936U;
    msg.id.assign("JWBWGPVYFGDKMDFLQYVDTPYCOPFTZLQAFSNCQZLYOQCQPNXORHJYHMBIIDBQSSRTNDLUXPPZJSRJDYWCHAEJAGMCYXMQGOJAVTZSIVKAROIEBTIUOEZZNINISWALNGXTRBEDBCOBPTEWAW");
    msg.memento.assign("SNDQPXFBAXHNVRBUIPYLCYMJNIBZGAKECAVZEIAZORHNVXPFDPNTSRKTHVOMWEUWGUQQRSIHTWRJTOCNUGRCPDEUJUMZKQFBWHKXVKOPGLLTWXVOKMFQWJWELSJEARFKDMWUREHLHJFJQKAHBPXESCBVIYDYJLYLPEIVNIXBBWUKPXLPOVGYSDBDYCYCRNDMQADGRZTGMTYEIAGTCWAKIJUTJDLMOGZOZMXFSIQHSSNVNQFACOCBTFF");
    msg.timeout = 59065U;
    msg.name.assign("IUOPDFVPCGYBOGKEMCUQKZZKMISCUMPCEQHBTFHQNKKVGHJUZRRFWTQQWEBBWJDYANPLUSGLFXYJBFFWUJXSXNLDXVAEEGEMMPDNUNGRJTLRSMQVODNPADSFAKGPMFRNICVOVDTKXHCZOUHTACIWZHYEBIDYXOOLEWYJQJOBNSXRYRDVWULBVILILGQPAZAOPYTMJXMNWTSBKIXBYZJTHVLKAHOLSITTD");
    msg.custom.assign("HQZFKEPUWDLBJICPNCZFBXPI");

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
    msg.setTimeStamp(0.5179645583000776);
    msg.setSource(45477U);
    msg.setSourceEntity(210U);
    msg.setDestination(55361U);
    msg.setDestinationEntity(47U);
    msg.plan_ref = 641296602U;
    msg.id.assign("CJRQWPHSMJXYIQECZQTIFWEFGVVNDTAHNGAXOFUDEZF");
    msg.memento.assign("WJVHXPCTBXEOFIMFRUQQROPYOMCTVWGZIAPHVLVXMEFFCOGKJSEXBXWSYBGAAEWQXGKOJLOKXWBMNMUGUYTIZKINCWIBASIVDJBBZAZIJRUVQLJGCSJGUTNHZMSFAQHORPNPXICLKMNHYLKVWTJQBDRSFJTPRFWJDDAUDPELCYQUOPSRIVHDNZZNHBEKZCPFLYHVKLIYKANLATNONYRWDERPYBCQGUEDC");
    msg.timeout = 45457U;
    msg.name.assign("ZEQGLATHARZQSFUFCGRSXWTIWPEWZNLJBHKWRIPMVHNWJFMUOGXJQYSJOVZRNPBXEWFIHDHINAUJEIKYYTYQHRWDTBKAMOPJIYVQKSFZGVUUJROSAMPALIYMPCNSYCNVMLNPHDPAOOGBIRAKTGNRCDOGKBBUUTMVBZRXJPTXZULYVMZNCQGVDQFDECXY");
    msg.custom.assign("CNTBZIGOWSEESQEKXGFRDKLSGWBIOMDKFJBRPYTWEYXQURIIIQSROTHLAFPDMYYMKKVUTDDDMXNZQZCBGMWJEICROTXWSOPVWRCACNKNPUJVBHOVQLRYJZHASLLNJGQAFUJKZDIAHXSDEHJ");

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
    msg.setTimeStamp(0.4658535222921997);
    msg.setSource(36129U);
    msg.setSourceEntity(176U);
    msg.setDestination(51582U);
    msg.setDestinationEntity(7U);
    msg.plan_ref = 3092579581U;
    msg.id.assign("STSHUHBWGRHMIUKRCMYAOLOIVYXVKSBVKCGLMADTDRHLSUUGYQVKIRCGJQWEGMPJRITNTQXPEYXNLVLRJBYRXFAJEKDQDUZMCVWBLINJOOMTFHUISHPQFZUPIRFXAMDEZXJNYCBQWRNPCESBDINWCOFNZMQRZDCXZWKWQLNVCVHUTNKMOHSYCAHSGXSIDZDOYGHTATVBLIEZOZFNGKVAMQBPWTAUPWAZBPLJTEGKFDJUFGWFAFBXELYKJJ");
    msg.memento.assign("XDEQJMZLFQGXMOIHEBUQWZACVBADGGCQDQNZFXRMVZDCJXUGQOYMZVKWWJIBNLPSBKTDLVWWOSPMMYWGPEIFLWSOBQFPWYYOSYNBFYXYUBSCIZGAGCRUEATFCJNTJLRBOKISTJNZQKBWCMIPRTFJDJTAVTPRAMHPLVFNBGSXLHSKXUTELHXVHOLEV");
    msg.timeout = 2269U;
    msg.name.assign("FVYPDXSDMFFUWAQXBZKBISQLWXOQPPASONGHJIKHHVUIEXZSNRWKGAVTDKZOHWAZSTXGQJVMFHAJLOEDLNNMBETSUOJTXLPFQHQMRTZNKSYDEOULYIUCDGEJJTUEVDQZAIRBLTVLYVMIVURNPGKIYZSXAZWLKAJRHJGGIMQBMCCJICWJBNBGHD");
    msg.custom.assign("KICBDQHDJKQWRFITVXFMGIYUZTYR");

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
    msg.setTimeStamp(0.3770679077541593);
    msg.setSource(5898U);
    msg.setSourceEntity(194U);
    msg.setDestination(32847U);
    msg.setDestinationEntity(33U);
    msg.plan_ref = 2418148838U;
    msg.id.assign("KAPCLSXORYQBDOVAFIYMELDMVTJWVUGAPYKMES");
    msg.memento.assign("BONTSFNJWNMUPNNFKJBCVEMIGOROMMRGQHGLTCAKQRMYVELDQJHAYJUKSCFOSZIUHVSDIUBOWWKLLF");
    msg.lat = 0.6977864269864108;
    msg.lon = 0.45902120857727147;
    msg.z = 0.9274153875823802;
    msg.z_units = 70U;
    msg.speed = 0.24076027998467864;
    msg.speed_units = 153U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 37172U;
    tmp_msg_0.off_x = 0.7883281281334977;
    tmp_msg_0.off_y = 0.00668710141950879;
    tmp_msg_0.off_z = 0.8843128224883154;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.9145349001637704;
    msg.custom.assign("UBFVVMEIWCMVJQCVNOIKJHMRAYBBLZFJTMLVKTKGFBQHANDCTSLLHKEBRYZT");

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
    msg.setTimeStamp(0.8886265482935939);
    msg.setSource(40792U);
    msg.setSourceEntity(179U);
    msg.setDestination(63647U);
    msg.setDestinationEntity(17U);
    msg.plan_ref = 2886713690U;
    msg.id.assign("IAURKEBYUOFBXFQXULOPOQDCBWXJILBEVOKYPVQZSKIYJKOTYNBHYNBEPAONG");
    msg.memento.assign("TTWJKCAYAPUBFTYGJSUCMZPOOSVCSPHZSEPGVFICQBLKAAYIXJXHLPKNJCGQPGXHAEZOVXNBRRWBURLX");
    msg.lat = 0.21077077605905625;
    msg.lon = 0.46760819159370814;
    msg.z = 0.41651811247544557;
    msg.z_units = 240U;
    msg.speed = 0.4635863398672494;
    msg.speed_units = 138U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 32640U;
    tmp_msg_0.off_x = 0.40679949074885213;
    tmp_msg_0.off_y = 0.6922183663864337;
    tmp_msg_0.off_z = 0.6572084624495871;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.765287771961379;
    msg.custom.assign("AEXOFOUTEIVAJXRMC");

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
    msg.setTimeStamp(0.8546957446848272);
    msg.setSource(20047U);
    msg.setSourceEntity(81U);
    msg.setDestination(46075U);
    msg.setDestinationEntity(28U);
    msg.plan_ref = 3387837659U;
    msg.id.assign("PAKRSZOYQQEIIHNZLLCGYSIYSDCWFJFTMTAXKRDSQHWLXBHVPTTAKODVIFNQGPEUITAGUORMPCDTFKIGPMBFELHUUGXKJAVRMPJRNOUBRPWCNBFNYXLAJMHXZCVDLRZHKYVPLMYXKDRVBCHHEOCWLNWWZJIKNDXQYVQFPUSBNYBAASZOEHTGEDVMIRECXZSATHEEXUEKUMZQWSIPUGJMQXOTYVZVFOALGCLBYFZNDJUKWSGCGQBONODWBJJ");
    msg.memento.assign("WUYQHLSZILAZEUDEGHKALXYLLJJIWFTRFQOYWBSRUTTJDYMNCKGMQKOIJKRRSUPBPNKZYXIQHVPXOUHTVYNZXNGWBBIYIGYADTXEXGODREQXDNJUTISSPLTIJFUGWFHWVQCGQAAKNUUMCTAWEZEZBSEIZOOAMARFLKVODRQFEHBOLZCSDCPSBAPCPAMTDHGPXVOFKMBVCLTNMSNMWVPEVVS");
    msg.lat = 0.5434197347444637;
    msg.lon = 0.6318578413705412;
    msg.z = 0.11081139602979784;
    msg.z_units = 217U;
    msg.speed = 0.11178739573235374;
    msg.speed_units = 161U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 43443U;
    tmp_msg_0.off_x = 0.22838692797402993;
    tmp_msg_0.off_y = 0.15323213609553554;
    tmp_msg_0.off_z = 0.14010404553156486;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.6924486336153779;
    msg.custom.assign("SZIRMIGVHOYTCEPZDWKXLVTOARRKKTSMBPOGJCZUMDNSHDONQEQZRPQSFWFPGBWIFPJUFUUQXNNLYSYOZTCKKUROHFXPVMRVHZBCSSVWADTEFEEXKOLAUWWZBWBDTFANYZADGPSBEETAVRJDTZGWHQUUWEVKMCMOWYQGVY");

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
    msg.setTimeStamp(0.3092432944093062);
    msg.setSource(8438U);
    msg.setSourceEntity(130U);
    msg.setDestination(22325U);
    msg.setDestinationEntity(207U);
    msg.vid = 18694U;
    msg.off_x = 0.04555398239451136;
    msg.off_y = 0.5290270617479296;
    msg.off_z = 0.9307247317902215;

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
    msg.setTimeStamp(0.3029423108846958);
    msg.setSource(61265U);
    msg.setSourceEntity(128U);
    msg.setDestination(26276U);
    msg.setDestinationEntity(25U);
    msg.vid = 56922U;
    msg.off_x = 0.33678661946645205;
    msg.off_y = 0.7104593419269314;
    msg.off_z = 0.8355668211701217;

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
    msg.setTimeStamp(0.9577089842531933);
    msg.setSource(34102U);
    msg.setSourceEntity(245U);
    msg.setDestination(59949U);
    msg.setDestinationEntity(70U);
    msg.vid = 56938U;
    msg.off_x = 0.8970988211449191;
    msg.off_y = 0.320830141761993;
    msg.off_z = 0.7128911431467669;

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
    msg.setTimeStamp(0.12427297475920096);
    msg.setSource(35013U);
    msg.setSourceEntity(67U);
    msg.setDestination(11888U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.15237886308906157);
    msg.setSource(44146U);
    msg.setSourceEntity(200U);
    msg.setDestination(24229U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.9236798935247993);
    msg.setSource(22411U);
    msg.setSourceEntity(206U);
    msg.setDestination(54417U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.8709861969360356);
    msg.setSource(37088U);
    msg.setSourceEntity(188U);
    msg.setDestination(13448U);
    msg.setDestinationEntity(122U);
    msg.mid = 21016U;

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
    msg.setTimeStamp(0.07315432156132229);
    msg.setSource(21196U);
    msg.setSourceEntity(71U);
    msg.setDestination(51600U);
    msg.setDestinationEntity(147U);
    msg.mid = 49995U;

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
    msg.setTimeStamp(0.8670572652453113);
    msg.setSource(49219U);
    msg.setSourceEntity(66U);
    msg.setDestination(43210U);
    msg.setDestinationEntity(54U);
    msg.mid = 33004U;

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
    msg.setTimeStamp(0.9812380627008114);
    msg.setSource(6095U);
    msg.setSourceEntity(193U);
    msg.setDestination(16850U);
    msg.setDestinationEntity(162U);
    msg.state = 133U;
    msg.eta = 35211U;
    msg.info.assign("CVOITTIEHAKDYFQJAIRFFWRWOQDEZUGHUSBBJHKYAIXWHSKJPFKLXQCNVKCQPTZQCJPQTMNAMNOSNJBHPHHRACBCQPEZGWCOXVSRGTVPFIAJMMKJECGHTXSXQHIBOMUDUUDXWJTMWZYERTEDXEDUZNSVQAFNYLALMJTILXSUMKYLOQRGJOVLSNORDDRIBYBFBFCXXYMEFVEVOADZWCLRZRSVTSEGLZGUYYPGBWMNGLWHVPNWKIADNU");

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
    msg.setTimeStamp(0.44211539226959706);
    msg.setSource(49084U);
    msg.setSourceEntity(253U);
    msg.setDestination(998U);
    msg.setDestinationEntity(214U);
    msg.state = 199U;
    msg.eta = 14479U;
    msg.info.assign("TFXZLMRHAZVUSWNPWUQHIXEBRFVYAESRJAHVGRFCDYWQRNPRGABUMUDTENCFEGRDGTYKXDIPZATWNNKAHIQEBRZBLBVYWNXUPNDS");

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
    msg.setTimeStamp(0.13248790900477148);
    msg.setSource(56210U);
    msg.setSourceEntity(98U);
    msg.setDestination(23608U);
    msg.setDestinationEntity(222U);
    msg.state = 87U;
    msg.eta = 636U;
    msg.info.assign("PLLWEEFWSZKDVPEUERCCQMTALVZEASTCINCMXGOCBDRPASUKASHNZUKYMQQIMNBCJWGKFEWLYTIFZBTDTELZJPINWMGYYISXNXPKFJWZJYNVAHMRMGCVBTXHUDYNLAGWRGPGHODOOEYHQDMCVLXHTUQPSOBQGIFJTMASARYLKHBZQZJXJBXMKLIUHAOAVZYZWKTLJCOJIRKHVUDNTWWBPFGQBFKFXQEUNPOFOX");

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
    msg.setTimeStamp(0.3441559055241552);
    msg.setSource(40765U);
    msg.setSourceEntity(136U);
    msg.setDestination(60931U);
    msg.setDestinationEntity(205U);
    msg.plan_ref = 649512636U;
    msg.id.assign("JMPJMCFWVEQHPVCLNGAZBEFAMGIDIAQEGWNLKOSGCYIPG");
    msg.memento.assign("TKDIEWWGYNZZECFYOUYLKIDGLYBPVDIMMTORWYCAXVSGFRSQFHSUUCBKNNQLABWBQJRTBTLOOBOJGSUMCPXVHSVAZFTNPJMVEMGGMPYBVEACGRZDACQPGCMHUKUNOQESMGAHMVNJLKEPZUSDTCWBTARCDQJXHAIDEWRWFT");
    msg.system = 4817U;
    msg.duration = 17524U;
    msg.speed = 0.6330461891387192;
    msg.speed_units = 123U;
    msg.x = 0.3889834192503906;
    msg.y = 0.8956193532332141;
    msg.z = 0.6291061939674918;
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
    msg.setTimeStamp(0.40904968374390827);
    msg.setSource(14247U);
    msg.setSourceEntity(129U);
    msg.setDestination(2573U);
    msg.setDestinationEntity(129U);
    msg.plan_ref = 1588622844U;
    msg.id.assign("TTDHVCVQRUKFLFGDJXMEVOKVQPMCFXUGGUXRXJMDSPGILELFUXPUYGVDAHFZRISNBSM");
    msg.memento.assign("OOZWTDIYQLLNBGJHSFJPRUMCUEHAEMXAEDDGWXNMXBIXOUFOXTIZKARCXISVKYTKLIBVLWXSVEYKVEYDADPCPVJDPMKUMBAZZUPLPGCSBPUSRFGNITTCJTVHZCAWWREDZAJMJHTXJYWHGSOSSMADFCNQERDFOQNQGQIEHNQKNFQWBFQGKXZRMNTZMCNXTUPLEIBZCBDGBWVETWRQHLYAGIN");
    msg.system = 36697U;
    msg.duration = 20469U;
    msg.speed = 0.16729736664058992;
    msg.speed_units = 168U;
    msg.x = 0.1878981059794227;
    msg.y = 0.14745529218833398;
    msg.z = 0.1474645512191577;
    msg.z_units = 228U;

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
    msg.setTimeStamp(0.18706608099777822);
    msg.setSource(11455U);
    msg.setSourceEntity(190U);
    msg.setDestination(6034U);
    msg.setDestinationEntity(60U);
    msg.plan_ref = 3293415066U;
    msg.id.assign("YNTZLUEHZMEJBAKUNYICSPXUBWLOCOOXKBIKJNLMMZXFQJRPXSWSHGQNPFZMTILPJIDQMOBSFTEKCXGGBRXGAQZKYNYQMUPVEIQDC");
    msg.memento.assign("FUGNNLKFBEVMUZXBRPOBNVJBGIUDKQPQXKXAQCERIGYIWRDRUTHXUTBYOZBQIJPSTTKCDJRKAJONUPLUSNQJFWHZUSCPESJCIXZPEHQAFLLFMSWEYOJYSVOZRGATLWPLHMQVUSQNKVENTTUYOZMVAZYYBDEHSHLSXMOFGXYZAMHWHMBCKYGTDPWDGRXKVNILOFBLVLIMTOXBMGQDCCDKVYRPSQHAWGAOEVAEWZAIJGXJ");
    msg.system = 44009U;
    msg.duration = 24707U;
    msg.speed = 0.9327310087938863;
    msg.speed_units = 252U;
    msg.x = 0.08848985847719815;
    msg.y = 0.502406395169287;
    msg.z = 0.7115138511741963;
    msg.z_units = 36U;

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
    msg.setTimeStamp(0.06446591656640233);
    msg.setSource(52807U);
    msg.setSourceEntity(199U);
    msg.setDestination(22511U);
    msg.setDestinationEntity(86U);
    msg.plan_ref = 3416741662U;
    msg.id.assign("FIJBPKJANPUL");
    msg.memento.assign("ACSYPNRWWXFLIBZUNRZJPIKUHGZESKHRRBMXDVAAHHNORUMWKJVKBQMKZKTUUDVMZLVPEKHOADLZSHCBYUEPWXHVTITGARXLJEWFIMUEEFGJFELTIZCDODOEDNLFDBTSVJHGVJJWCODLAVTSFLCYMQLUFAHWIVIECTDOIISYPSNQSMAYUXWRAMENKQBBMXZYGGYGO");
    msg.lat = 0.06695873238462535;
    msg.lon = 0.5389382765307826;
    msg.speed = 0.4278110206288974;
    msg.speed_units = 182U;
    msg.duration = 49533U;
    msg.sys_a = 63931U;
    msg.sys_b = 64869U;
    msg.move_threshold = 0.900378773229351;

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
    msg.setTimeStamp(0.8748027156676297);
    msg.setSource(38913U);
    msg.setSourceEntity(60U);
    msg.setDestination(45582U);
    msg.setDestinationEntity(222U);
    msg.plan_ref = 1223846391U;
    msg.id.assign("KMDKXJYNZVCFNRMOFSTFUWRVGIKCTIWJMHJOMCWHSOPZURBXONGVCOYNMZOPTLBDYJLDESG");
    msg.memento.assign("KCHRFPUAXNRLRQSBKFLMMBOAMMFEGUXWYSYRTCDOSOJLZPHUYMQVIRYAFFMDVAVBJDQNKJWXDIIXZNTEBPQYBEJUWYKCONQVSYQBDBZCJLRVTEGTRZXCPYGNDJNPNOLFRXPFWTA");
    msg.lat = 0.44571895315157317;
    msg.lon = 0.14131953057208269;
    msg.speed = 0.26168024312662563;
    msg.speed_units = 126U;
    msg.duration = 49296U;
    msg.sys_a = 59269U;
    msg.sys_b = 64355U;
    msg.move_threshold = 0.4707489143603971;

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
    msg.setTimeStamp(0.8539155593644774);
    msg.setSource(24513U);
    msg.setSourceEntity(172U);
    msg.setDestination(39122U);
    msg.setDestinationEntity(229U);
    msg.plan_ref = 21828264U;
    msg.id.assign("WABSZDECCQSVTWPZKCUOLNMPEKNEFTELUTQCYDFAMPGVEOPMNQFQITGUE");
    msg.memento.assign("XOMKMNQEQHVHDDYRPVSXSIDBNUBZ");
    msg.lat = 0.19774281215838396;
    msg.lon = 0.6335433008012045;
    msg.speed = 0.2472378964211558;
    msg.speed_units = 9U;
    msg.duration = 12265U;
    msg.sys_a = 3943U;
    msg.sys_b = 39211U;
    msg.move_threshold = 0.10246697172758579;

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
    msg.setTimeStamp(0.23274711254495406);
    msg.setSource(43659U);
    msg.setSourceEntity(132U);
    msg.setDestination(36018U);
    msg.setDestinationEntity(153U);
    msg.plan_ref = 1807253864U;
    msg.id.assign("QUWVEUXWPTIOKRRBPTVCNSSCUCPMXBCATSGTFQKFLLDUZKVEOQGBLWMZNZHYBDSYJOBZIOROGCZXKDLEDJPEPIOITOYMQD");
    msg.memento.assign("SJTLSPXKSJAILDAJPUQOMRWESWVKDVLHKSOBXSGRQOIEQKTGXUXTQTAIGLYGNYHRUFTUHCXFUWPSHZLICUJHMCLXZYEAAVYBCMTKQZCYEUYFIZCDRISRGMYLOBUAOWYXBOHOA");
    msg.lat = 0.8088409973482754;
    msg.lon = 0.5309321537376824;
    msg.z = 0.506838754204757;
    msg.z_units = 75U;
    msg.speed = 0.7214052474466673;
    msg.speed_units = 90U;
    msg.custom.assign("JPWSEAWLFGUAHWYYRVXWZYDOFAMDOABVLDZCXUTPQLBVOOIMRSJBKTNCFLLCJYWREHZAFQPZGWOUPXGHENOKWDFEIBJRGMKJYHQMRFCGTNDVKPWOCCGJMBXZDTYLVCOFRIKKEUEAZPHMTDQSVJOPAKYXYFNGXHQQRTFCIHEZVNVKHICSQNSGDIQACXSUUUBTIOBPBTNPUKAMSXSSJJBQZRIEZEMYNMTSQWLLXGXRAGUJMPIKFY");

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
    msg.setTimeStamp(0.05517858740561188);
    msg.setSource(53298U);
    msg.setSourceEntity(90U);
    msg.setDestination(26353U);
    msg.setDestinationEntity(49U);
    msg.plan_ref = 3158245442U;
    msg.id.assign("AAFKQCUHKYKNYIPGQPAMURNKOTHJCEOHETLTAOYMEBGVURPJRMYLUNVFLQJBZUCHLFWDYMIPVFR");
    msg.memento.assign("ZCVFMQKLUIQUMPLBWRQXCMROHURKBMJSPVRWZLWPHWEQEZDDEOYOLAFBWJADULRLTTBNFUJEHATFZEFAEGNYGGYPVIXVOIKNHNGOLZKTAHMXARADYUXYPCQDOGJSMBDYFNXAPIUQGPLOSNVVSBMESFHCSIGIXJRRTSNOXSMCWMUUNRNSJTEFYCQKWQZCSWJFOTWJFDPTKZXAPDRVVCHBLZBZGWKECHGKIEHYGTBP");
    msg.lat = 0.549772315095464;
    msg.lon = 0.49004534959140655;
    msg.z = 0.3396627923269203;
    msg.z_units = 73U;
    msg.speed = 0.3505954847733793;
    msg.speed_units = 232U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.9625004591448242;
    tmp_msg_0.lon = 0.08470403240341284;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("OMUIEJEZQWVFUYOGDQZYSMEWQUSVNFVWSUARPBXGSJLBYNPLWKSNBVHPCOHXOTHCANWTMTQHMKDPQDJSOBRUZWJCJHNGTFJHVWMNAAQCFOTEAYNYPQWCNRTJAEDRJDSOI");

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
    msg.setTimeStamp(0.0707504422289369);
    msg.setSource(62076U);
    msg.setSourceEntity(141U);
    msg.setDestination(42464U);
    msg.setDestinationEntity(242U);
    msg.plan_ref = 3657242581U;
    msg.id.assign("HNAUHUARTXHERLZJBEVLTZYXXENMCTKMQKHOJMEJJFWSZRNABUNICVSURVUELBGMZTKJWDQXJZCGYNOIGBVWIYYTGOIHBXGXDZSBRFCACNPSWOTLBCPTAEKFZOWXSSLYFFYCQJMQQSNYXUKDYIFTVPCDPVEIBLOIPU");
    msg.memento.assign("LIHREDAXFAMDRFWWZCPCSOXWCXKYGBPFTIBBRCVHNJUTSFENANGRLJDCXPKMILGFFWNTJMAMQWTNBUDRHPOHYYUQLNTPQFOGSGCLRLQFEAZQBUEBVOEGULOYUBEY");
    msg.lat = 0.7154822265499772;
    msg.lon = 0.2833702521394882;
    msg.z = 0.9421589842323126;
    msg.z_units = 83U;
    msg.speed = 0.8991445218516663;
    msg.speed_units = 163U;
    msg.custom.assign("YTQXCFQOTNDNFVEIXMQBUYJOORDPYBNLFSTHGKKMSWWIZSLZQKSCQORASJOGLCAXYJOAPNTUJFFNWDTMRZMKOJWIYUEPHVGVZKKUZCOGRDPMETBQBJTPIHWGLQORZIBWFHRIADPACWPLFHDKMDQNXIWPCJDZJBTMLCVHXLMUVFGXTDOMBANUYHSYRXMHHNJQIVKBXFZVZQEEEPVACI");

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
    msg.setTimeStamp(0.3653711638507442);
    msg.setSource(32811U);
    msg.setSourceEntity(0U);
    msg.setDestination(13631U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.4373009409264147;
    msg.lon = 0.14307476271840236;

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
    msg.setTimeStamp(0.5407192658127099);
    msg.setSource(1852U);
    msg.setSourceEntity(17U);
    msg.setDestination(54601U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.018455065718681496;
    msg.lon = 0.5456952856548494;

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
    msg.setTimeStamp(0.9963399773162788);
    msg.setSource(17382U);
    msg.setSourceEntity(65U);
    msg.setDestination(33776U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.16591867313152353;
    msg.lon = 0.12687614395674007;

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
    msg.setTimeStamp(0.5717203101329367);
    msg.setSource(20743U);
    msg.setSourceEntity(44U);
    msg.setDestination(52205U);
    msg.setDestinationEntity(188U);
    msg.plan_ref = 1640063505U;
    msg.id.assign("YCQFKDUSOGFOGMPZCWXTKAPVEEYXZTAGZQCUPMAAWOMKAKLPWXGQAMCBOTWHAFEUFQCYEDQWDRVPYSETIEWAVUPAYNBLFNDZSGSVXEFLSUNQKVIFUGWBIZLGTCJNOXJBBKYUJXTLILZONUDZ");
    msg.memento.assign("NRJEICLWNDKKEDDDGRUFLGOQEWJGZXCCQXPRIBVMSYCOBXVHPOSXWZOAYRERXQPRNRYXKUVXBRLTFOLFCSIRPFFKLBZQEQXINZAQUUWJLTKUHMLGZDZIYBEBLISJNVHNDTATCMJNAKVQODGVYZTGSNIOCPO");
    msg.timeout = 23624U;
    msg.lat = 0.474103809932675;
    msg.lon = 0.23042652566302035;
    msg.z = 0.9349369301395667;
    msg.z_units = 23U;
    msg.pitch = 0.5283113251703564;
    msg.amplitude = 0.059261160173431526;
    msg.duration = 34774U;
    msg.speed = 0.6192681977270585;
    msg.speed_units = 164U;
    msg.radius = 0.9883936728297495;
    msg.direction = 175U;
    msg.custom.assign("PSSYDQZBLZHSKNWCXTZBYKANVZOBZPQUDGPGMGMUNMYTPSFECEWIXIPWOIZIYQIVGMDULGNEAYVMGLJZOLWNLDRQXTSDDMOUCQNUHWAFPKJUSETVJUKRSEQBRVBLBTHXSGINXVOXULLZPYELCACFORIQPQEAJHGXRCKABSYCKJAFTWDBOFVHYTTBCXFHNXUFJEICRKBF");

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
    msg.setTimeStamp(0.441829848056418);
    msg.setSource(17835U);
    msg.setSourceEntity(198U);
    msg.setDestination(26031U);
    msg.setDestinationEntity(218U);
    msg.plan_ref = 1458841251U;
    msg.id.assign("OQUMBPOILNCHSSVLAYDKWQKLNUSZALYITKPDOMJVFZXOJDXERPHYBRNKGSGFAQWJMBAUVUBYUEMFRZGSMFGSFSUBVLIPKWVQXXGZANBCJSFISJXEOZGEE");
    msg.memento.assign("TEJYRZVOBFFEMERWSVTSAKB");
    msg.timeout = 19464U;
    msg.lat = 0.7095475394178986;
    msg.lon = 0.5943745152796696;
    msg.z = 0.24141233964293785;
    msg.z_units = 108U;
    msg.pitch = 0.8967020066880664;
    msg.amplitude = 0.5680452842486586;
    msg.duration = 58841U;
    msg.speed = 0.8658145995998688;
    msg.speed_units = 74U;
    msg.radius = 0.5908824667061131;
    msg.direction = 240U;
    msg.custom.assign("GAIQURVSQQRZEXZSOKPHPFPNYDCIYRSVZOFRWNEFGTSWZIGVOKUUIFWXZAGWMBPSZLAKXTTDZFIEHNBRNVUPNDILMBZOXQQYLTRDPEPNLHLAJXKFHNDIYTRICBALZYAJCCPSEBYYUNQJYMTMLRJLOGBTGXFTAMKPCQUKVVXBSUJFDQJFVX");

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
    msg.setTimeStamp(0.6704670307979878);
    msg.setSource(56157U);
    msg.setSourceEntity(201U);
    msg.setDestination(49683U);
    msg.setDestinationEntity(108U);
    msg.plan_ref = 899959946U;
    msg.id.assign("WAMGOXWPOPMBZGAG");
    msg.memento.assign("FSOOMFXPNULUBYJEAZQIIZBTZJAAWNRMAUTMMORAQTHFHDKLPWKKNRZIBXYNTVDCMSMPYVKVTURYGQTQEWSHDVBPMFNHOEKSXRSVVGBCXOLFCHWTIMUBRIEQXAQQXAOTCBJGAY");
    msg.timeout = 3247U;
    msg.lat = 0.8390120141219226;
    msg.lon = 0.29312723217239445;
    msg.z = 0.7042408079018131;
    msg.z_units = 197U;
    msg.pitch = 0.26470164694640697;
    msg.amplitude = 0.8180000590054771;
    msg.duration = 32839U;
    msg.speed = 0.9363876317112565;
    msg.speed_units = 212U;
    msg.radius = 0.837173924234845;
    msg.direction = 123U;
    msg.custom.assign("WFFVQBMHQDOUKZAMCWSORBBKLVERJTZQUBGFNWMPEAOGYAFJNXOZHLHPNHMMYAMKWJRGZUUSMOGXJPRCBWQCWZBIXEJWGRKZFCHIIUKUQORHGOCLNBSCDQKBSDGTMCZELKXQSEJPAKXDSLLDFDYRARWFGITIOVCESPNMAJQZJZCYXYNYRAGIEBWQKQLDXTPPDJUKBFAVXFNHDVRTTDPOIUHMJHLLVAXVEVVPPYTHLNNXSEISTV");

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
    msg.setTimeStamp(0.35647742884281686);
    msg.setSource(43531U);
    msg.setSourceEntity(231U);
    msg.setDestination(10993U);
    msg.setDestinationEntity(194U);
    msg.formation_name.assign("URUNKCANARGLTTNKCWUMJLTFVTEALQBCIAQQSWARZMVRTSOQYJLZBPEPBHOG");
    msg.reference_frame = 97U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 5435U;
    tmp_msg_0.off_x = 0.6103575633337257;
    tmp_msg_0.off_y = 0.8033680046464537;
    tmp_msg_0.off_z = 0.44967913528086023;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("XSBHEZCSXZICLIFPIWSNUVDBUHTSYELBGEDWPDSMPBWNYJOYIHJNFLNCDUTAWSKHXFTYUDOKFZENBALRTXWFQMDYYEDEAKDHPYPIRMMMJAOGPIXDNQRUMMZFQXEOAFKONPJVLAQIDQNCOQVE");

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
    msg.setTimeStamp(0.9539099949392659);
    msg.setSource(13110U);
    msg.setSourceEntity(76U);
    msg.setDestination(42418U);
    msg.setDestinationEntity(37U);
    msg.formation_name.assign("HFQCCNKNPHYVLQXYEPJTPSBKMCXTPSTWOJCLFWNKJOTLHFDIGZYXNRJRXFEAVCIBGQVURHHUKXGYOW");
    msg.reference_frame = 21U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 5309U;
    tmp_msg_0.off_x = 0.9756130868444904;
    tmp_msg_0.off_y = 0.04068843432567382;
    tmp_msg_0.off_z = 0.3197407012149902;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("MAITXPRVOVDALDCCZUXSYZSEUPYMQDWRYUJFZFYHUIVKRKJLIKTAHQTBDNWFXPZVWGDLNMGZRQJDRSJIEKNFTPGSDMKEVABYOCYXREKGFUXLLGBOYHFEGHMBPZEEWMPABKYXJCIYTUEGLMKCQSFNOXPSQKEOJSBVRAHZZGQJLCSFWKBDCHOIUVRFTZOXSHH");

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
    msg.setTimeStamp(0.3711942926406788);
    msg.setSource(15202U);
    msg.setSourceEntity(204U);
    msg.setDestination(11968U);
    msg.setDestinationEntity(196U);
    msg.formation_name.assign("FJKDOKNCWMEHNWDQHBKZOXMXUUPGPQQRQEPCITOAFJCNGIWVOBBMYUNZMCKSCECKLPBGJAGICILGDJIHGZL");
    msg.reference_frame = 126U;
    msg.custom.assign("XBZAXIVYNKMOULBUCEISJQGIFXVIDEWGRFFTSKVKQAEFBELLJJMUMEFPYFDHANWIQHJRPJOPPAZOBVZGSOQLXVCGGWSVEIZZCCEOYNJBBAWKPODPULHLA");

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
    msg.setTimeStamp(0.299543680896349);
    msg.setSource(20550U);
    msg.setSourceEntity(133U);
    msg.setDestination(60803U);
    msg.setDestinationEntity(234U);
    msg.plan_ref = 3359854359U;
    msg.id.assign("YMCXOCUWVSVNONMZWFBUTKFJBMBHDJIUAFPKPTGDSYZCIIOZSAQSIJWLZYUONZKHJTGCRKOWGXGAND");
    msg.memento.assign("CKFCUDBTZAMSTTQWFFNAEJDNDKTSOCUFKRAGEEEOSYWSDCODVGJQTZMPSWYOJIMZVDYYZAYPHPFIIKBSVXJMJBKPVTUHFPZBEUNNVWR");
    msg.group_name.assign("EXPOKSDXKHIPMLUPDVGONDGMTCPNSQRKMSUNXZTWXJIIDYJECHWOAMOOULCAJWBJVMQHDFRQVCJZCFTYAOPJEVSJKZDBLZIRYIPXPZRIFWXRHUWYWEGSVCPNMBNINOVBWGS");
    msg.formation_name.assign("WWFLBUNHLBFHVIDZZBFXRRQQEQTSWEPLHQPZCSLJCMLRYWCNUUAYJCSNKAYBXSOMZOKERJAENYCCGHRIIHTMTFMTGLJHKMDYUNNKOXRQUCVAHKKUWMADFABXJSLTDTX");
    msg.plan_id.assign("HEYQFGQLKFCYZYXGXPMHELNUKLVOVUOFPEHFASCUBZJJUYKOLNUMAZBEARAITHIKEKJOOZCGIMTSBECBEVVNSWBACMOKNHXHWRQRJMCDBYIUSBRXQYXKQSQPUXNRVLDARNEEZJHSSIQAUFPMVQCOZTWTNYUPOFWVILDOWXGGSWTMIOICMYGDWRXSMLRDWULPYJVHQDTLNBXJZZWNTWYZANPIJFFGGGQDBTCDMFZVKRAPTHBRDIS");
    msg.description.assign("QQAYVXXCIJPGZFQSKURPFHWYWYISFLNUHHCYUUMASFNZOEIPYHZGONEANDIFBQALBMZWLTSDLUPHEXKDKTAVKLPESEOZWWZFBWTSOOJKCVPJXRNDUXSUUUTEDFDJEHLTWOVGMNDSONPGVRPWWYTBKJKXWMYJMRAMFYRZQGYQGNARB");
    msg.leader_speed = 0.5291715279102907;
    msg.leader_bank_lim = 0.8081935202788406;
    msg.pos_sim_err_lim = 0.5929229747384137;
    msg.pos_sim_err_wrn = 0.7557861950660951;
    msg.pos_sim_err_timeout = 42373U;
    msg.converg_max = 0.36502102556229066;
    msg.converg_timeout = 18922U;
    msg.comms_timeout = 28553U;
    msg.turb_lim = 0.06516033150568712;
    msg.custom.assign("LEPKVFCFDZANEHGVOHWHDYZJFKQUCRLLANJBLZOVYITTESCEXIAWPNSMHHNJRMCGPYQDCAGDBYBTUZASPKRXWOPIOFFMDOSXEHDCAUTJAGTEJHBXWCNBNQFPIVXSTZQYOPLTJNXGVKZAQNOYSMXGVDWWXRNSIVNUCRZCIVJQKDJMVALKZQFFQDEPSPBUQVILGOQIAKLW");

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
    msg.setTimeStamp(0.739052968647263);
    msg.setSource(39481U);
    msg.setSourceEntity(188U);
    msg.setDestination(37846U);
    msg.setDestinationEntity(77U);
    msg.plan_ref = 3821703761U;
    msg.id.assign("YBFZIGRISMKYBXIJUOQOXUCJZBRVFMSTDNLHVMTCDQJBVAECPZQEEOTMYZJHLLYKDTVN");
    msg.memento.assign("WNBFOCYKDKWRUEIUSIGPUYBXNYPTZSWNDZPSJOACJHKJVDAZYOCXPRYUVPUILMMHHELMVLUEKDQOUDYZQFGQJBIBWTCZUAXILIFLVMRFVBPVBBDNJTLZZVRKKKJWEYCGAWAXNBMQIOGDKNPPAZLCISKJSUGYEKNRHGDMTXOHEQSFICDHJRAEEFCFGSNTOTXFOZQQOWFE");
    msg.group_name.assign("ROHGPHVFMOLSODUPIGXZCKMWNFJLVJLFWJQPB");
    msg.formation_name.assign("WSELNYMVHVSMFJPDQCTFURIMAOJIOHNFWHAIBRWJQIKEUYRZBYXNYGBNGCTXRKACEMVUQRMNJSIGRTFGHAXPLMNQSBVRCTSQHOGJZJMCXYCLDYKIKEOGXLNDKPKSDWFWZNRLWAYFCVLBUDKMSOBEIVZVJVAERUWDJEOIPPAWLGTOGHHFGDLOHESQOZZQLMFT");
    msg.plan_id.assign("FIWHYJGUVOHBKRN");
    msg.description.assign("ONYWPNAWNFRJJFKHBYSCJQZLSGQIKECRPSWZZRWKHHTPMHBZTPXQOHNKXPKZKWICXVQXSFPXPNEGKQHOGWBTUODQVBTBDGXFKZAVVLOEYHYOUFJESYTMLDWGONJULOMYQYEILIOCDIRCSURRLRRGMUUETQGMYWBBYFAGDQCNDVASNDZLJAAGXKSFZIFNMTOJBYEREMB");
    msg.leader_speed = 0.03280592346050637;
    msg.leader_bank_lim = 0.6609431527062897;
    msg.pos_sim_err_lim = 0.18061174043860473;
    msg.pos_sim_err_wrn = 0.4158708151875069;
    msg.pos_sim_err_timeout = 17855U;
    msg.converg_max = 0.9022727854092244;
    msg.converg_timeout = 53013U;
    msg.comms_timeout = 16464U;
    msg.turb_lim = 0.4641904352913323;
    msg.custom.assign("NBPSFHZZYTOOXSVKGCZOWEUCQSCGIJBELOUPSSBDGXDQVHNKYNEJMTARUIDOYDHDOITFAFSJEOSVNLQIRNSQMCLFPUILVETPYRWBZQTXDEXUAEKGGBJHLGEUDSOBZQYXHACRWNMUTYPFTXDHKJWRHWRAFSRLHQIZXRBHXLFMVCKNVFWLKUBJKUMTGZXDLAWJPN");

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
    msg.setTimeStamp(0.42477438007214474);
    msg.setSource(50741U);
    msg.setSourceEntity(247U);
    msg.setDestination(21431U);
    msg.setDestinationEntity(66U);
    msg.plan_ref = 1616653720U;
    msg.id.assign("MJPDQKCHKTOHYFLAEFSVFCGUCGERYDQXZFZEBTPSIGHTYDMHOXMZUWWUVMIPGOENCSWCTSXSIQXGNKHYJQNZEDNVDDWGHUTOYKKAWLRFEZJZYJLAJAZCTRPVHBFEPGOAUIJYYNUIJWVOMFF");
    msg.memento.assign("KZFQCXFEVYHDKEVSLFUNQUUAZOSUYDIUSOXAHEDZKHQMFKQTNLKJCHEJVGFOZJSYBFHGLKLWIIXVAIBVRBALDCCKBFPCSMYYKAFZQQPHUTREERIMTVMHIOZCWRBCMWBRPTTEP");
    msg.group_name.assign("TCMQDUWXGEXOKLZWZHTTUVBLIEKEHVEEODGQWKI");
    msg.formation_name.assign("GABAEQNHJMFZYLYDNVVCCPSWIYJLJLTHVLOCRWSQFJPWGPSLMNZJBWNJCLGXHTATCSAUPUVMZPFRVDOYHDHCEXKUEUEAVXEBNNHRQMGZEFTSRCYIBFAHSFOVBFTMEKZNRTKIIKXXGCZZBDAZWLYQUEIRJUYE");
    msg.plan_id.assign("UVZIOPBELYDFTZBOLKHZXCWIJIVGGPPSMSJCUQFYYUNGGEAVLNNWSJAUDOBZVHKRGYKEHERQUODLXASDWAXIFMBTODLXMGDRKLLAPDTTE");
    msg.description.assign("KZFHACRBNJZFSXVLCYVSFKQWTPDMDZLHBQNSXYYRYJSDVJHXHKIJZCRYDVSDQOIUWITQFQMFLGQVIGJLAGWWGDKMSAQATSOOENRWTPULFSOQRPLERASZMWWLAGXHBKZEYXKYJDKJNVVAPYCZFUCEQYMRFPEJIITDCFPKRNWMBZWBUOHGEKRMBPPTCMTXJNCCBGOIXOGGTANTHLBRZMJTEMEXIWNFYDCLEDIVV");
    msg.leader_speed = 0.39433851305875633;
    msg.leader_bank_lim = 0.40203322353576443;
    msg.pos_sim_err_lim = 0.08400512956751116;
    msg.pos_sim_err_wrn = 0.08279777174075564;
    msg.pos_sim_err_timeout = 14474U;
    msg.converg_max = 0.5440360337499489;
    msg.converg_timeout = 16564U;
    msg.comms_timeout = 11217U;
    msg.turb_lim = 0.898820575389786;
    msg.custom.assign("TTRWLWKTOZXCYDHHQDLTHVKOZZPBPNKPZISRUMGVRKGNSCUUNBGDYSELRKVUYFUCZWTEEFTZEGMTIAFGAKEEHXOFOJLBBNFYANNWRRRWBPMDVAJPPFCUBHEZKCJKONAJFIFIGNBMJNJQSTZAGZCAJDIOXDSVJDAR");

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
    msg.setTimeStamp(0.3964201848549609);
    msg.setSource(13578U);
    msg.setSourceEntity(161U);
    msg.setDestination(15403U);
    msg.setDestinationEntity(224U);
    msg.plan_ref = 3368742149U;
    msg.id.assign("AFAKFDCHJWNJTZHMQKVIFQUQDOLPHHXGZVCNTRPLMMVCCGFSGNMEFMXHKEZSIVEKTXDKXWQRQPADWYY");
    msg.memento.assign("YQNYEOTYYJFVKLZNUJIXJLDUCNRXWEVMQKSTBKFMGKHZEJMTNANRPUNVVMBCCJFNBZGMDQMXEYQDGYASHIYODLJOYVTWPFKXCBCRWPUPREZJDBIZQKWREUMNZP");
    msg.control_src = 18473U;
    msg.control_ent = 45U;
    msg.timeout = 0.06796027896589707;
    msg.loiter_radius = 0.8815950371069279;
    msg.altitude_interval = 0.44109250145515;

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
    msg.setTimeStamp(0.29426614646232774);
    msg.setSource(15774U);
    msg.setSourceEntity(123U);
    msg.setDestination(55356U);
    msg.setDestinationEntity(48U);
    msg.plan_ref = 1090521794U;
    msg.id.assign("XFMMHXHBKGVUCUWIJAOFEGEGDKTQADPMZSSPJHACMZJNYA");
    msg.memento.assign("GEEWVQJVGVVEUMGIVGPAAIPJGNZXNSUFVDVCDBTXN");
    msg.control_src = 9433U;
    msg.control_ent = 78U;
    msg.timeout = 0.4881063393763482;
    msg.loiter_radius = 0.11204827067100476;
    msg.altitude_interval = 0.9364587393230257;

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
    msg.setTimeStamp(0.1871739050622252);
    msg.setSource(27538U);
    msg.setSourceEntity(64U);
    msg.setDestination(16957U);
    msg.setDestinationEntity(73U);
    msg.plan_ref = 969218039U;
    msg.id.assign("SCNRVMVATYEQDNCNGYDCHFNXLSZQRQTHXIMQYQVOEKBWVJMGXJYTQSSHXBPQLUZAGOIBTCKOFWJADBFOIMITFJDWYURTIAGIEWXKDZTNTSNPWJLCDEMIFOJSDNSCAKFZGRAUPLSWHVXVRDXEOUCOHBOMVLKDUHFXRQYZVIGUIAPLAHEPSYZF");
    msg.memento.assign("JJRNPGBQXESXFNGTLMLCEHIKMFKAPFNBCKCBDSXRSMBATXIVCLIAPVWPHTVVFQNSSUEIRFDIBEIETJDJBQAZBUPLVYSMTOKJXPWONSDMZOZQDPJHHKLCQXYTRWPZWZROOLNHUYMRERWNAVGFYONYVWQHRUFMDAMVEGYBLBNXLKUVCGXMYEZIACQYGOAPIOYEIPUTHGTCQUIJQUUYKZNFHSCZQMXWKAJVCDTUSHGZLDOZGJOFWESKLA");
    msg.control_src = 35795U;
    msg.control_ent = 167U;
    msg.timeout = 0.039608188486200624;
    msg.loiter_radius = 0.7235907966556747;
    msg.altitude_interval = 0.25878228653611224;

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
    msg.setTimeStamp(0.38872452511020705);
    msg.setSource(18697U);
    msg.setSourceEntity(105U);
    msg.setDestination(39665U);
    msg.setDestinationEntity(7U);
    msg.flags = 75U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8070365733917324;
    tmp_msg_0.speed_units = 164U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.07759404241728818;
    tmp_msg_1.z_units = 219U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.21721759551811182;
    msg.lon = 0.7640695311345423;
    msg.radius = 0.7426642311440561;

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
    msg.setTimeStamp(0.1316994110751043);
    msg.setSource(63900U);
    msg.setSourceEntity(192U);
    msg.setDestination(5098U);
    msg.setDestinationEntity(84U);
    msg.flags = 217U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7402692885784313;
    tmp_msg_0.speed_units = 65U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.18100814093952078;
    tmp_msg_1.z_units = 194U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8004568993724201;
    msg.lon = 0.5352235726312119;
    msg.radius = 0.21650996812649004;

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
    msg.setTimeStamp(0.22992936598866953);
    msg.setSource(64632U);
    msg.setSourceEntity(251U);
    msg.setDestination(64119U);
    msg.setDestinationEntity(213U);
    msg.flags = 245U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.17606191818018102;
    tmp_msg_0.speed_units = 141U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.7536872417723184;
    tmp_msg_1.z_units = 15U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0006324824877419477;
    msg.lon = 0.8536712882692999;
    msg.radius = 0.06239029534357976;

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
    msg.setTimeStamp(0.9451318750569818);
    msg.setSource(14991U);
    msg.setSourceEntity(43U);
    msg.setDestination(44430U);
    msg.setDestinationEntity(145U);
    msg.control_src = 13894U;
    msg.control_ent = 132U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 229U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8471385847663285;
    tmp_tmp_msg_0_0.speed_units = 5U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.32195248923703623;
    tmp_tmp_msg_0_1.z_units = 160U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7830941228375966;
    tmp_msg_0.lon = 0.8420918528150396;
    tmp_msg_0.radius = 0.38370049783817894;
    msg.reference.set(tmp_msg_0);
    msg.state = 19U;
    msg.proximity = 128U;

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
    msg.setTimeStamp(0.6064805649187727);
    msg.setSource(63484U);
    msg.setSourceEntity(151U);
    msg.setDestination(51100U);
    msg.setDestinationEntity(8U);
    msg.control_src = 60480U;
    msg.control_ent = 4U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 83U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8335709670400122;
    tmp_tmp_msg_0_0.speed_units = 248U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6674664494199104;
    tmp_tmp_msg_0_1.z_units = 51U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9171577249382152;
    tmp_msg_0.lon = 0.8591419358970003;
    tmp_msg_0.radius = 0.6476111369282612;
    msg.reference.set(tmp_msg_0);
    msg.state = 69U;
    msg.proximity = 57U;

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
    msg.setTimeStamp(0.7869839977290999);
    msg.setSource(41756U);
    msg.setSourceEntity(70U);
    msg.setDestination(41148U);
    msg.setDestinationEntity(210U);
    msg.control_src = 6431U;
    msg.control_ent = 87U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 128U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.8668073941488385;
    tmp_tmp_msg_0_0.speed_units = 196U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.18772476633682145;
    tmp_tmp_msg_0_1.z_units = 163U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.7315660466759832;
    tmp_msg_0.lon = 0.4326656141367635;
    tmp_msg_0.radius = 0.9197465532457301;
    msg.reference.set(tmp_msg_0);
    msg.state = 158U;
    msg.proximity = 105U;

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
    msg.setTimeStamp(0.6726461191141275);
    msg.setSource(63357U);
    msg.setSourceEntity(220U);
    msg.setDestination(57247U);
    msg.setDestinationEntity(219U);
    msg.ax_cmd = 0.9815290675232333;
    msg.ay_cmd = 0.08367813792914858;
    msg.az_cmd = 0.11657307355820945;
    msg.ax_des = 0.024058077211938644;
    msg.ay_des = 0.08543142605281706;
    msg.az_des = 0.03222460148883877;
    msg.virt_err_x = 0.379391411488607;
    msg.virt_err_y = 0.42558037952497796;
    msg.virt_err_z = 0.20401354141949768;
    msg.surf_fdbk_x = 0.024701767745050174;
    msg.surf_fdbk_y = 0.730226340927408;
    msg.surf_fdbk_z = 0.6720624951622538;
    msg.surf_unkn_x = 0.9981067007410795;
    msg.surf_unkn_y = 0.42889982550868955;
    msg.surf_unkn_z = 0.7660354225819366;
    msg.ss_x = 0.933041547993709;
    msg.ss_y = 0.3153293012661772;
    msg.ss_z = 0.4319064312310592;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("INEMLZVXCCAHQGESYTPYYUWSJPKBBRRUZKDXIAKYHLJOHESMHXOVHPODQ");
    tmp_msg_0.dist = 0.3307525432496836;
    tmp_msg_0.err = 0.4496169817699882;
    tmp_msg_0.ctrl_imp = 0.3783354932247366;
    tmp_msg_0.rel_dir_x = 0.24723962817109335;
    tmp_msg_0.rel_dir_y = 0.5175260728328309;
    tmp_msg_0.rel_dir_z = 0.8633067212511746;
    tmp_msg_0.err_x = 0.8547897054435891;
    tmp_msg_0.err_y = 0.47375829920692647;
    tmp_msg_0.err_z = 0.002633915858547664;
    tmp_msg_0.rf_err_x = 0.7388275216333641;
    tmp_msg_0.rf_err_y = 0.14979316129961284;
    tmp_msg_0.rf_err_z = 0.9572810083601371;
    tmp_msg_0.rf_err_vx = 0.9302480607138461;
    tmp_msg_0.rf_err_vy = 0.7680406132668496;
    tmp_msg_0.rf_err_vz = 0.47053689373169805;
    tmp_msg_0.ss_x = 0.5479674602875823;
    tmp_msg_0.ss_y = 0.9994517438068533;
    tmp_msg_0.ss_z = 0.9650598387788656;
    tmp_msg_0.virt_err_x = 0.06550515562436066;
    tmp_msg_0.virt_err_y = 0.5440335695457564;
    tmp_msg_0.virt_err_z = 0.1668328144273914;
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
    msg.setTimeStamp(0.41852917689361246);
    msg.setSource(51734U);
    msg.setSourceEntity(7U);
    msg.setDestination(6480U);
    msg.setDestinationEntity(136U);
    msg.ax_cmd = 0.8200271543799629;
    msg.ay_cmd = 0.8805270034469668;
    msg.az_cmd = 0.5689783075742413;
    msg.ax_des = 0.2668308977282413;
    msg.ay_des = 0.9581090800363087;
    msg.az_des = 0.25837341811445824;
    msg.virt_err_x = 0.07380848507388682;
    msg.virt_err_y = 0.2669826507531722;
    msg.virt_err_z = 0.950241297966698;
    msg.surf_fdbk_x = 0.5663333117368885;
    msg.surf_fdbk_y = 0.3079944973442972;
    msg.surf_fdbk_z = 0.7895603927039642;
    msg.surf_unkn_x = 0.9932008145214288;
    msg.surf_unkn_y = 0.1970523188077763;
    msg.surf_unkn_z = 0.6741164856664013;
    msg.ss_x = 0.4566561625061458;
    msg.ss_y = 0.683682828367017;
    msg.ss_z = 0.6041372041659671;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("NVCYXODGOAJHOEJTINZZAVTLZEGLDTBXCYQSUBNKWUYUHVHQCROUJIPWPYZISLXUZEWDUUZYSDPPMMLJEQGJYIWIYJSVWNFBWIKPRHBXTCEB");
    tmp_msg_0.dist = 0.0918431884997708;
    tmp_msg_0.err = 0.8624613494327956;
    tmp_msg_0.ctrl_imp = 0.09791898585095915;
    tmp_msg_0.rel_dir_x = 0.036397696497920684;
    tmp_msg_0.rel_dir_y = 0.22719867408690297;
    tmp_msg_0.rel_dir_z = 0.8756104897229569;
    tmp_msg_0.err_x = 0.11500157346946527;
    tmp_msg_0.err_y = 0.9572949822393643;
    tmp_msg_0.err_z = 0.1758688089831748;
    tmp_msg_0.rf_err_x = 0.3369312134368898;
    tmp_msg_0.rf_err_y = 0.40097059436884497;
    tmp_msg_0.rf_err_z = 0.028533914848422937;
    tmp_msg_0.rf_err_vx = 0.08597830719986566;
    tmp_msg_0.rf_err_vy = 0.24331743091417724;
    tmp_msg_0.rf_err_vz = 0.8632374031816171;
    tmp_msg_0.ss_x = 0.812397754786243;
    tmp_msg_0.ss_y = 0.004648408621253597;
    tmp_msg_0.ss_z = 0.6179190302475341;
    tmp_msg_0.virt_err_x = 0.5802548087987532;
    tmp_msg_0.virt_err_y = 0.6397674935193777;
    tmp_msg_0.virt_err_z = 0.6249297437839577;
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
    msg.setTimeStamp(0.14651099092754483);
    msg.setSource(21033U);
    msg.setSourceEntity(215U);
    msg.setDestination(2873U);
    msg.setDestinationEntity(85U);
    msg.ax_cmd = 0.9646334646526201;
    msg.ay_cmd = 0.9629524931054706;
    msg.az_cmd = 0.1916717450617974;
    msg.ax_des = 0.6210891743061657;
    msg.ay_des = 0.9476976692157268;
    msg.az_des = 0.8228022421545025;
    msg.virt_err_x = 0.660274359386001;
    msg.virt_err_y = 0.463534481068822;
    msg.virt_err_z = 0.7065696356751202;
    msg.surf_fdbk_x = 0.6525052563144487;
    msg.surf_fdbk_y = 0.5390897980619715;
    msg.surf_fdbk_z = 0.7918202274591857;
    msg.surf_unkn_x = 0.5921064763836508;
    msg.surf_unkn_y = 0.21932000889755232;
    msg.surf_unkn_z = 0.6906594201616163;
    msg.ss_x = 0.7148061192434338;
    msg.ss_y = 0.251186867064744;
    msg.ss_z = 0.07288740766425228;

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
    msg.setTimeStamp(0.9405537086765733);
    msg.setSource(36763U);
    msg.setSourceEntity(148U);
    msg.setDestination(55361U);
    msg.setDestinationEntity(220U);
    msg.s_id.assign("YIIPMGANCQFOEINFWHSCWALRGCRQVECTVKMCLRSJPMLMAQKHXFBFYAUJSTJUTYGRYYJGOWZKEWTHXVBNBKJELSGBCUEKPTRHOBQVLFVYSCBADPNRLRQZKMRWVNXXKUOSDWTAVGZLHBFYJOHSPJDQWYPUP");
    msg.dist = 0.06765715695386942;
    msg.err = 0.7369977735294828;
    msg.ctrl_imp = 0.6650765859406629;
    msg.rel_dir_x = 0.5642511010261055;
    msg.rel_dir_y = 0.7214421285785669;
    msg.rel_dir_z = 0.8391525301229333;
    msg.err_x = 0.8734843850777226;
    msg.err_y = 0.179438735976016;
    msg.err_z = 0.12918515052457158;
    msg.rf_err_x = 0.17308323845153983;
    msg.rf_err_y = 0.9272660322932035;
    msg.rf_err_z = 0.9277268195864136;
    msg.rf_err_vx = 0.5429797006955649;
    msg.rf_err_vy = 0.1365997794912981;
    msg.rf_err_vz = 0.2877565070467003;
    msg.ss_x = 0.7289724031836353;
    msg.ss_y = 0.3274140241125455;
    msg.ss_z = 0.9273641625102655;
    msg.virt_err_x = 0.3733880109854557;
    msg.virt_err_y = 0.1922603901656137;
    msg.virt_err_z = 0.26508718978472545;

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
    msg.setTimeStamp(0.9762427322280303);
    msg.setSource(27923U);
    msg.setSourceEntity(175U);
    msg.setDestination(61261U);
    msg.setDestinationEntity(253U);
    msg.s_id.assign("RDUOSTSRXYLNMUQRLOLJGXEOQJCWQTKWYTCIBGJYQBYHFEWZZFFHDQDRXCUIGOKRSWGBZQICISU");
    msg.dist = 0.7164146823820604;
    msg.err = 0.10460017039072378;
    msg.ctrl_imp = 0.7795745518446537;
    msg.rel_dir_x = 0.9816887212035176;
    msg.rel_dir_y = 0.622172007645907;
    msg.rel_dir_z = 0.06284664602283796;
    msg.err_x = 0.8883961232654245;
    msg.err_y = 0.267948875222508;
    msg.err_z = 0.21675218600580382;
    msg.rf_err_x = 0.8355146131717918;
    msg.rf_err_y = 0.48280537578838734;
    msg.rf_err_z = 0.6553689400795596;
    msg.rf_err_vx = 0.0973000326620358;
    msg.rf_err_vy = 0.7754836229994835;
    msg.rf_err_vz = 0.5824112099469743;
    msg.ss_x = 0.0226154166497734;
    msg.ss_y = 0.32847391124612635;
    msg.ss_z = 0.36129089561330063;
    msg.virt_err_x = 0.18636632023359778;
    msg.virt_err_y = 0.8926917902832581;
    msg.virt_err_z = 0.6107786763351687;

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
    msg.setTimeStamp(0.7709841010000498);
    msg.setSource(42394U);
    msg.setSourceEntity(18U);
    msg.setDestination(10157U);
    msg.setDestinationEntity(217U);
    msg.s_id.assign("QKGMSHJJQTEHOVABLHOLWYBQFYUFLGPIJUONBSFSZBSTCGYIEHZIGEPDRCAYXAXSIQWVXGMANUGKSWTTDAXIRRGAODICOHOVNLIVJPSJJKLRFFRVZRUGYPXPUKUPVUNPUCEDANENFLQLQXUTFVRGQAMZSHHOMBJKCVNZYBOXRTFYTWPABICNTESOGYWDDMZHLDTWHYCMWKHVUECIKNZBPN");
    msg.dist = 0.03164922944647641;
    msg.err = 0.29102834366950203;
    msg.ctrl_imp = 0.634041437556303;
    msg.rel_dir_x = 0.3546626236696203;
    msg.rel_dir_y = 0.3787713634105435;
    msg.rel_dir_z = 0.9915962095775008;
    msg.err_x = 0.8308020992881686;
    msg.err_y = 0.6176027239500336;
    msg.err_z = 0.12107071934763103;
    msg.rf_err_x = 0.39170279064171254;
    msg.rf_err_y = 0.007198678316308271;
    msg.rf_err_z = 0.493100784948142;
    msg.rf_err_vx = 0.010372758117777381;
    msg.rf_err_vy = 0.9269507630176025;
    msg.rf_err_vz = 0.004535512773379935;
    msg.ss_x = 0.11394988196748024;
    msg.ss_y = 0.5174517255864853;
    msg.ss_z = 0.6277252958394031;
    msg.virt_err_x = 0.3080303498309448;
    msg.virt_err_y = 0.7986168881071205;
    msg.virt_err_z = 0.7516801950738825;

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
    msg.setTimeStamp(0.4558939012122897);
    msg.setSource(33017U);
    msg.setSourceEntity(245U);
    msg.setDestination(8992U);
    msg.setDestinationEntity(46U);
    msg.plan_ref = 690578710U;
    msg.id.assign("KAYBLXXYPUPIQQJSGPWFHZKDJQEXLKZTZGIEYKGDWAKKEPVRHFLIXQVUYSBOLUMVTRXPXIJOQMVAROTAMBNWAYJPLUYKFAWDDCLRFBZNDDFOFSSFBMBQTVEVEKQGXZNFOCHHUCYRXWGUYPBLTMJ");
    msg.memento.assign("OYZNVBPPAGLBRMVFQUNXPTWKFI");
    msg.timeout = 7899U;
    msg.rpm = 0.560072647892231;
    msg.direction = 228U;
    msg.custom.assign("LUXWOQJFMOXWNZFHVKMKOFIRPTJGMJRLDGUENBRHYXTVNTUFSRAKWIQKVHYWYADDVHNDFILDFPXCRNUSIFQILZBMSZLWEWKUHIOOAPSADM");

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
    msg.setTimeStamp(0.6735341742736605);
    msg.setSource(14954U);
    msg.setSourceEntity(3U);
    msg.setDestination(42012U);
    msg.setDestinationEntity(112U);
    msg.plan_ref = 1759007080U;
    msg.id.assign("PBMRGCDFYBUGPDPNYRWXXFESFUTRHYAXDPCECAFWJENCOSEDJUMESSDDZZPPIKQOKZAQJITHEBPFRKPKBOZZDIQFYRDMJHBLNOMXCFAUTLSHJCRTNWIRVILAXRWEFNKKB");
    msg.memento.assign("YNAHPCDAMVXTOHPYZPJBCMCLHTGCIWPJNODFKJFHCZKTLVAOUCZZQKXDYITNHYUZXXQQAYHVYHSULSIQUSFZMRCXNBUSWILBOJOSKYVDGLCBZWFAWUFFRNHWJUJVSLREWPIETXFQUIXKMEPRTLKGXRBSRGTCPRQR");
    msg.timeout = 35936U;
    msg.rpm = 0.045518613832845056;
    msg.direction = 54U;
    msg.custom.assign("PRSENJNZYHNEIVWNMPWOWIBMICEUFKWIJHEGFRZWTVTKSVQLCOOASXSFFRHKLXUUHAYQRFQRTLLEWGRZZAPFLEHXTIFMQHTJIBFCUBJVVBQLNGDKEBONVKYZTDCYCPXOOTBDUNDDMBKWSKLGLUPQUDBGUJUYYYYAZXDJKAQSYVPZEXBMQRXC");

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
    msg.setTimeStamp(0.3444542701384822);
    msg.setSource(16417U);
    msg.setSourceEntity(100U);
    msg.setDestination(65451U);
    msg.setDestinationEntity(195U);
    msg.plan_ref = 718043567U;
    msg.id.assign("QKLIHHRBUMWVXDFLPAHYKUOSROZBIHKSEVGCVFSALDYHKWYBNREZKEPXYDYPVE");
    msg.memento.assign("UPTSWUEMZTQKYEWEITNPERJFLLICBRCVSZNFUERWLVMNSMIXLYIKALIQTUDDMEJSQNQAHLESQFHFGTKFOBHCSDKNHGZBRAOJGXXCVKDFXIGDALPKRYVQMRYLWGUKNJIDRYMKPSKWRJAPCVMEAFTQGEJFYZU");
    msg.timeout = 47667U;
    msg.rpm = 0.5730852004203051;
    msg.direction = 55U;
    msg.custom.assign("UYRIZREOJCLZYEXPCQSOTVVAGKBKYRNJDNPYMEBMGBGRYQCWLAWSHLHAVPTKFEKFIHSDLBJQEMNYZUYSSHRSRIVHFUIIOGAGOPFMYNTZEPYL");

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
    msg.setTimeStamp(0.4222501471513924);
    msg.setSource(53150U);
    msg.setSourceEntity(250U);
    msg.setDestination(34652U);
    msg.setDestinationEntity(53U);
    msg.plan_ref = 1781095503U;
    msg.id.assign("NZKCRTJEPSPEXHOJNSTHVUIYQCYOHGUMRZGWFCDPGYBWPQRSILVPNQEWLBNOIOQSMCPAWZDOJWBCXOHHGNKHUYFCPATVNBQXKOBZIOHTGUFAEDFEPUNDVUPFWJAXVVJMXFEYIMIRQKAIHJWZASDWTLBNREWCVYHBFIDKWXHCUMKQDSNMRLZJNBXJVMGYZAQQFMGLJIRDSZJRLZFDFX");
    msg.memento.assign("WUPNOGRWDMBUQTUJNZIHTWBHTKTZJPGRBNSSSDVLYZCMJQYCFGYCUPMHYEDSXHBYJPCUZNEUAMQCLJURVWBYLKQXOVEHKHIJTAVFEYXQUGRQAQHSOZUKAAOKQMYOBRCEILXLFBGOTPDBVSRNGGDLRXNGAFXISJEUOKWCFNSAMQNPVBKCXDWJTKJMXZBNWTICQRMIRSHDWPVZOMVYZJEKFLIAVLLZNDYIMOFWIWIRPTAEDFCFPVSHDGE");

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
    msg.setTimeStamp(0.7787448310236651);
    msg.setSource(32045U);
    msg.setSourceEntity(20U);
    msg.setDestination(48038U);
    msg.setDestinationEntity(52U);
    msg.plan_ref = 1906160024U;
    msg.id.assign("VPBPPSDZTLCKUCZKFYQHKLROSZSNTXLHDWQTPMMPCBQRTWWANTJCBDVZINRWVRFKHUVDJJZQXALPRLOJRFIASXOWQMUXZRPCKFIGLDJFIYFLOQSICEAXUDJEQWDQIMSGZYECBMFHUUEHYKKCSQEZUJIMWHGMD");
    msg.memento.assign("UGVGCHGKQYAIWXQRHJIRUZUSDQGDLJDWCPRZWAEFNWVEBXJNLX");

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
    msg.setTimeStamp(0.883423386686866);
    msg.setSource(60318U);
    msg.setSourceEntity(188U);
    msg.setDestination(50253U);
    msg.setDestinationEntity(116U);
    msg.plan_ref = 3424442249U;
    msg.id.assign("YZMIXDCMRECQHUEZXZBIDFAHIKXUAOTLVGFSTQDNIKEGAAHUREDTATNJFAAMWBVOBHOPHVTPYYIJG");
    msg.memento.assign("RMIMBFCJSAAKEURZJWKSTOOFDJDUBHEURUNGXFJPQFFRXXOMYPGNWODYWTPYCNSFBOJAKXTQXMSTESFGMHHQN");

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
    msg.setTimeStamp(0.8611689402478531);
    msg.setSource(19151U);
    msg.setSourceEntity(141U);
    msg.setDestination(41322U);
    msg.setDestinationEntity(241U);
    msg.op_mode = 222U;
    msg.error_count = 216U;
    msg.error_ents.assign("TPCIZKWTGQEUBRGHUCAZKCBEKIZ");
    msg.maneuver_type = 56351U;
    msg.maneuver_stime = 0.12479457179709985;
    msg.maneuver_eta = 6290U;
    msg.control_loops = 3717952971U;
    msg.flags = 41U;
    msg.last_error.assign("JEXMZAQPDJKZPYAVHFBCJFORVKMVKGBUGKDIOWQLAZRGQXHTMFLVJGWUYUBYPUTWORLVAXVAKCCSDDKDNCUULPISUQPZICNFBIPILFYSPJESGWFOPHWHNCBCYLMRFTJOENTSEIYWUYVNTHPBGMKDBRBOUMKZMGJXASNTVVMSHWLQMYZDJKZNHD");
    msg.last_error_time = 0.6111297913669951;

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
    msg.setTimeStamp(0.4665111835888295);
    msg.setSource(36663U);
    msg.setSourceEntity(73U);
    msg.setDestination(8906U);
    msg.setDestinationEntity(94U);
    msg.op_mode = 102U;
    msg.error_count = 222U;
    msg.error_ents.assign("XSBFYXQMKWCWEYLYLAPOGNMOMRTJVGQUTCDAAZRAYJGFYIXRHWZHERAUNJUJSWBLBGIGCCCJCHVMGMSXVVZFSWHRRUEJAXPKBVNSMMIKMTAVKJBCHSPQUQFZTTKXLWUSTWLDSDNJYCVOFKNPFFIBCWAIUASHHYFRFZXIVLYVNKOZIJ");
    msg.maneuver_type = 18496U;
    msg.maneuver_stime = 0.48336295914533023;
    msg.maneuver_eta = 44079U;
    msg.control_loops = 3565022515U;
    msg.flags = 126U;
    msg.last_error.assign("RJQBQJNUHFGQOVVUNZWYAKJODTOPMGWYDFLXOZSBNALVNUXAPSZKRMORSLMGVGAFGULECJBJXMDCMVHHUPNPTDEKHEBQXDTITUDFAMWGYYNWFELIPINFQTWBHSIKUJXUESHOBDDKVWOJIPFZLUCEECQHYNQYBGZYZZTFSIXMCTVRFWRTAGKXYJBCGJZGEYQPBSMBFCWSIZHRHKXVIWQTALRITONVDISZUAVCANRMOHKXM");
    msg.last_error_time = 0.8629601932373964;

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
    msg.setTimeStamp(0.8675874529847235);
    msg.setSource(59153U);
    msg.setSourceEntity(75U);
    msg.setDestination(33863U);
    msg.setDestinationEntity(50U);
    msg.op_mode = 20U;
    msg.error_count = 211U;
    msg.error_ents.assign("JUFJZZZIWRJMSRCFTOQBNKMGANGVBVGMANPDVGJWNJAKCQOOGCPQJBXNPKIYRXYBLGLKOD");
    msg.maneuver_type = 52546U;
    msg.maneuver_stime = 0.8937631680018723;
    msg.maneuver_eta = 1791U;
    msg.control_loops = 1937968396U;
    msg.flags = 110U;
    msg.last_error.assign("FPQMCUUHRYASMEJPAZCAFQPGNZEQQTWLMADJSUQGHGBLQFPEUOTWMEOAYLGHMFSTIVFDGFFNNHHTFVIVYX");
    msg.last_error_time = 0.6660581674449352;

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
    msg.setTimeStamp(0.6060556276921077);
    msg.setSource(65306U);
    msg.setSourceEntity(93U);
    msg.setDestination(4237U);
    msg.setDestinationEntity(103U);
    msg.type = 171U;
    msg.request_id = 26645U;
    msg.command = 54U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.plan_ref = 1383960475U;
    tmp_msg_0.id.assign("MTJSDHKQEYJSSWXZPUYGWZQVAOMVITPEZVQGYL");
    tmp_msg_0.memento.assign("SPYRMOOOBHGUIGBAICRFURJHKCPWNADTNPOHBILITVECXYJJJMZAACCQTMGLIGTLDPJWXOSDRVVECSDEVZHRZZGUFEUJBPOXDHYHDYCBXPZYBWMQYJYIGNGKTSWSMAMJYXFKZQOFIESRSLVMAAZAHWXZSKSCKPFMFWCRWRVRQNHQXLZAYHIFBINBGPQDTZVHKKNFGE");
    tmp_msg_0.timeout = 54453U;
    tmp_msg_0.lat = 0.25214407083987467;
    tmp_msg_0.lon = 0.9171189039542506;
    tmp_msg_0.z = 0.9496334749663753;
    tmp_msg_0.z_units = 29U;
    tmp_msg_0.speed = 0.7978630180266855;
    tmp_msg_0.speed_units = 38U;
    tmp_msg_0.duration = 14052U;
    tmp_msg_0.radius = 0.5586617999541061;
    tmp_msg_0.flags = 94U;
    tmp_msg_0.custom.assign("JILZCLOYHUEWULSUPMHZFBLXUVFQRAUXVDUOBLENIPIWETDHMIEFJKRAYAIDOMHSOINBHNDCNRSRFQKWWMVWSARTVLJXSWPHGKCBMLKUPCOCYLYNXNMNEPFRYBIXYOAWGVNMAEOSSDAZTDIUQGFFMVRJZRHXKB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 27876U;
    msg.info.assign("FSVAXRUVEPAALPTGTJTGUMJSFCADUUWPZKVZPJXXBKOHSXGWCWKTJQCRUOUSGNEALMMGJZUIVYBYAKKOJPSLYCFPMPBIKRCSTOMBBK");

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
    msg.setTimeStamp(0.2024288393216116);
    msg.setSource(18388U);
    msg.setSourceEntity(24U);
    msg.setDestination(11U);
    msg.setDestinationEntity(254U);
    msg.type = 3U;
    msg.request_id = 8853U;
    msg.command = 219U;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.plan_ref = 325607737U;
    tmp_msg_0.id.assign("DFTCFGUNHMIUGXQXLNWAHJHWAEHGMOVAMIZBCZSPTCSRSDXLCHV");
    tmp_msg_0.memento.assign("AHDALBRIHLYQSNMZEGQMSLWVPGOBXFEAVBMSAXZDRFMFOUXIEYMOIFHLKTPUTLEMYCQXIPZJJNJAYYLGHFZUGOJCOPGHAMTCDQKBSPL");
    tmp_msg_0.duration = 62363U;
    tmp_msg_0.custom.assign("CCKJALIIPAFTSCYRQBAKZUOXOUMYXYBXGAQJHVRWOIINRGTTDGJBJNORZZZHQKEVTJRGAZDQLNPKQWHFJOESELUDDZIPMXNPHSEWCYMJYABYARIFDEBEFSXQLMNZOPLHGTSXTKLECOQYDMCVWXFWUULOWKCCBDWFYOVLSWIIQPNVJZLGGNMFSR");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 63164U;
    msg.info.assign("ARYEBRQMRTECVEKWWKMLKXEHSZZAQJQVXWVPZIUHMZSFUZJQPXAFRUHDRITWBCWBYSRVJRAOLGOILICWAYNZPDIMWGHQSDNQIYQUPEPHOFQCKPJPRDALLUTXDKOLMGCLNBPNHNGGNVUTBFDIOZLWBPJTXKOFOULLJENHKYGCEBSGUGWVVXTTESKFFCISAMOOBSHVTKQEZDMVVYDRXCHPTGBDAFHDFXISACUJIOZJFCARGJNNNJQYYUXKM");

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
    msg.setTimeStamp(0.8351412112294964);
    msg.setSource(9190U);
    msg.setSourceEntity(55U);
    msg.setDestination(20272U);
    msg.setDestinationEntity(46U);
    msg.type = 226U;
    msg.request_id = 63593U;
    msg.command = 76U;
    IMC::Memento tmp_msg_0;
    tmp_msg_0.plan_ref = 986231767U;
    tmp_msg_0.id.assign("SKREIUWNMQAKTXBUOMOLSPNETDQNEZEHNLJLVJPEAKKTAEZAIPTHDMJHBMRZISYMADKNLYGYUDNFCXTWAHUHXXFRJCCQMCJRVVGILGIEBWVQHIZZPGYUIWJONLBYFSLRAXLZSQGICHFWEXPHYCPOXMDESNPFYBFKYQZGUSWLKVUCWATMWLJFYZPAFINTTMVWVDBIXVAHXHUCRKDZRJBVKPGGOUOFRJBNJQX");
    tmp_msg_0.memento.assign("ONPOHCXPZDIHSGTAM");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 30363U;
    msg.info.assign("CVLWNGUNMMKNHSYVEFGFHFFZSWUKOBNNUBUYNYWCFIFUOJBNNAATEDWJETQZEDFGILZYRDKBYEHMNDQRAUUTGSWLJKRZTRBFATOYLABDIHSTKS");

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
    msg.setTimeStamp(0.20091189033857493);
    msg.setSource(41010U);
    msg.setSourceEntity(221U);
    msg.setDestination(38350U);
    msg.setDestinationEntity(52U);
    msg.command = 54U;
    msg.entities.assign("FOKWDYGNGKXAAQBTWEVKCKGUVEBRTYYIVHXAQAYHUFUSGROXMZWSSKALTDRMKIAJIVUDSPXXZVIOHGHCMURZQOWIEWCACXNJVNPNGONDJRWMEJBQHDTKMDIPPZDUBHSCEHEURJVBVOBKLIZMIGFTJOQTCWVQSTFZTAFTMLSFJSTEWESLMQCZOZUBEIRGFJPXKP");

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
    msg.setTimeStamp(0.5625409415691315);
    msg.setSource(3294U);
    msg.setSourceEntity(65U);
    msg.setDestination(48372U);
    msg.setDestinationEntity(51U);
    msg.command = 186U;
    msg.entities.assign("RJZBMIPHZLUUSAREOUUVCMGCPOXMQJEPVMMSQDUDYEJNRKJUYPSARDGOSTYZQEAJHZMFKFDXXQHNBLTQWFLFBYPHTITFWITZWGWXWBPHHNEZKYHXBGFPRXVSKQZYFWFTIQOICKZKGADICKHTSJVY");

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
    msg.setTimeStamp(0.7270967184741957);
    msg.setSource(5158U);
    msg.setSourceEntity(53U);
    msg.setDestination(42980U);
    msg.setDestinationEntity(60U);
    msg.command = 20U;
    msg.entities.assign("ZKDFCLSPPJUTLFKEPIMIRDCEXUVBIFAIFYYATJXTZXPWUCOAECEKWLHMYAGIHQXGLSPGNCBQDNJEBNQPPDJJBLZGTUXJVKKFUAZMLYVRGVORCRXNQHSBYOOFDSQAVN");

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
    msg.setTimeStamp(0.20199254205547001);
    msg.setSource(8536U);
    msg.setSourceEntity(106U);
    msg.setDestination(5710U);
    msg.setDestinationEntity(41U);
    msg.mcount = 161U;
    msg.mnames.assign("YLIPUJMCWAFSUVPEHYTXUIQNBZQHOUEVIEHGCAFTWLQAYRHDVFWAGFVKNQBMCYVQJMQXPIIGBKLASXZRPJZCWX");
    msg.ecount = 56U;
    msg.enames.assign("ZZDUGVOSPZRHLOSRDKEIMKWHICPDPVUPRVLATKXSFFJNHOGNNMYHGVOOBJCXUVTOSGJAIRUQYTOTLKV");
    msg.ccount = 251U;
    msg.cnames.assign("YIRUQMMHTPUCORHAMSXSYEZTCQQDEAUAXIIBBFRLCNWHGRTUQEPQHZNCFVHOBLOTSEQQHSGCWFOLWITYNXSFLMSYGLCCVOVLCKRHKDBJXUOAJFMOJ");
    msg.last_error.assign("FBHWCGOADGCILMWANZMYWTMCQFPRAXXKHSMHNPRIQOMDRFQQHJDNXLQEMXKUVJTEAUBONPVCFUUZGJJHUERTKDMNFYALNYBHVVECBLSSAYEPCIMGWGDGYEDVRNWXTSJJTQKIYZU");
    msg.last_error_time = 0.933153611055549;

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
    msg.setTimeStamp(0.7741865767173594);
    msg.setSource(36263U);
    msg.setSourceEntity(180U);
    msg.setDestination(21350U);
    msg.setDestinationEntity(71U);
    msg.mcount = 140U;
    msg.mnames.assign("RYAQASQHVCWEQDY");
    msg.ecount = 247U;
    msg.enames.assign("SYCGMOAQCLBFMWWUJWVXCIHGRTWDZTCHWBHAVSTAXNVVZZULUICHGZFYAPOSHRAYLFKLJUPAVYZDKPHMHUBXAGSKZWQQXMWGCLZPXXRVDUCEJEGFMFSIYEKZPKNNYEQVJXITDEPESBCNHCISBXPMKLNOQTVJFNZRPKSERMAZLXYPWHJUTDJMGCQ");
    msg.ccount = 72U;
    msg.cnames.assign("NFZVTPDUTDYYRKGENVTBQSAMLKKWRSZLGKQRSSZVIXHEOFDQHTPAWYWDBYIABVNRXENSBGIEO");
    msg.last_error.assign("TTQEJKDPKCFHHWIXIEHIPXIKFZRFREXIZZPSNVLCKEJVFGYWBUWKTGDAGGPPZBRROTLWGMRMLSSOOGICGJEOVDMXMYEJZTKRYUUSWVHSRMYKDNBTMEDNYHN");
    msg.last_error_time = 0.670897648238888;

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
    msg.setTimeStamp(0.20460044141531497);
    msg.setSource(13935U);
    msg.setSourceEntity(178U);
    msg.setDestination(47375U);
    msg.setDestinationEntity(8U);
    msg.mcount = 230U;
    msg.mnames.assign("FFYFDSZPGYSVIXIBOHRDZLUWNUIGICWVOBDHFVRNYVBOHCYQEUNLSMUALJWOZXCINEGKVUHHGXEEKAWMKNCWMQPPUASREQMXJJZYXBXIUCMHKYPTQVQCGEDTEQZSTFTGTTZAPNQOTXNFXUHSDCJRLZOTWDAPOJGBBKWUDIIZBDVWWBGLAUOEQSTVVNROPWRJMPJHML");
    msg.ecount = 70U;
    msg.enames.assign("BYJEQEDBKNJEZKLOWKMPGOFOJQZTDLQIAHLOUGWYXQIALLOVRMZETJKXNYXMNUWBHBYBCOQXLJKDMLXIHGMTIEMLQCBFSUDCSZTSXZIJEXPTDRNXSXGSVJAPDPYVVKWCNGMAECCKAJQIZUCSAUURSYPGNPFQVHIUNPMLCBFYRTOGYFHAEDWHPY");
    msg.ccount = 43U;
    msg.cnames.assign("EDNUVEITHZRGUWTGIBCHWIAITVUJTZCEFTFNCKRBEAOJHFSBBKNRKYLKMSJABZUZWQWCCJTFOHMJWGLHPILHHZGDLSEXPARYXPAOVBKZMINOEUGPHWLNJFGMWV");
    msg.last_error.assign("PNZIMMWVUJLSGADGKRMDMQOFUPWXLYLBBNYWXQASTRKGVDPTYUJARKXBLEYWZTQWIMWOKMTFDBTIUJXMVROZAKQGEFLFICEOBDJHVJMNPTQATLFROCSROYIJXQJGBDVWOPHGWUEFAPQHXCUENYHSCAKBXCLOZEQLHWADVFDYIDSTKJTBGXNSSHHGZCFCA");
    msg.last_error_time = 0.28109630351600157;

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
    msg.setTimeStamp(0.6873176590531692);
    msg.setSource(18653U);
    msg.setSourceEntity(90U);
    msg.setDestination(51481U);
    msg.setDestinationEntity(135U);
    msg.mask = 158U;
    msg.max_depth = 0.2279970657848709;
    msg.min_altitude = 0.0522913557249558;
    msg.max_altitude = 0.6749751871403779;
    msg.min_speed = 0.5495248674843077;
    msg.max_speed = 0.2227853509354939;
    msg.max_vrate = 0.7403107826599981;
    msg.lat = 0.4060120714080835;
    msg.lon = 0.27926948577071997;
    msg.orientation = 0.05862248483581012;
    msg.width = 0.6668612534209567;
    msg.length = 0.7060633474635326;

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
    msg.setTimeStamp(0.2713955078766115);
    msg.setSource(37205U);
    msg.setSourceEntity(63U);
    msg.setDestination(42990U);
    msg.setDestinationEntity(169U);
    msg.mask = 179U;
    msg.max_depth = 0.36641307642713183;
    msg.min_altitude = 0.43029095273027484;
    msg.max_altitude = 0.1634547422294439;
    msg.min_speed = 0.17707948621918457;
    msg.max_speed = 0.5286233528135353;
    msg.max_vrate = 0.8966054421992697;
    msg.lat = 0.9132784748159923;
    msg.lon = 0.5117850582141905;
    msg.orientation = 0.6298889662082557;
    msg.width = 0.1850851539030708;
    msg.length = 0.4086418840912419;

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
    msg.setTimeStamp(0.027595063436362754);
    msg.setSource(36371U);
    msg.setSourceEntity(141U);
    msg.setDestination(7031U);
    msg.setDestinationEntity(162U);
    msg.mask = 177U;
    msg.max_depth = 0.1168397304456682;
    msg.min_altitude = 0.48111889321721446;
    msg.max_altitude = 0.988579198573539;
    msg.min_speed = 0.3620186115820566;
    msg.max_speed = 0.4303858801712821;
    msg.max_vrate = 0.6327421221230051;
    msg.lat = 0.521513177649837;
    msg.lon = 0.7364921596413625;
    msg.orientation = 0.04730437002233401;
    msg.width = 0.05912609779792899;
    msg.length = 0.21334142882579188;

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
    msg.setTimeStamp(0.11502480629254308);
    msg.setSource(64743U);
    msg.setSourceEntity(208U);
    msg.setDestination(61429U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.29383046730121154);
    msg.setSource(37665U);
    msg.setSourceEntity(211U);
    msg.setDestination(52361U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.39687342586350194);
    msg.setSource(31611U);
    msg.setSourceEntity(165U);
    msg.setDestination(41347U);
    msg.setDestinationEntity(230U);

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
    msg.setTimeStamp(0.7117642056315275);
    msg.setSource(63564U);
    msg.setSourceEntity(8U);
    msg.setDestination(24466U);
    msg.setDestinationEntity(58U);
    msg.duration = 9199U;

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
    msg.setTimeStamp(0.05904754801761625);
    msg.setSource(4979U);
    msg.setSourceEntity(184U);
    msg.setDestination(54874U);
    msg.setDestinationEntity(148U);
    msg.duration = 53113U;

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
    msg.setTimeStamp(0.38646080003685435);
    msg.setSource(1090U);
    msg.setSourceEntity(191U);
    msg.setDestination(54312U);
    msg.setDestinationEntity(52U);
    msg.duration = 55636U;

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
    msg.setTimeStamp(0.25492829426736663);
    msg.setSource(5023U);
    msg.setSourceEntity(96U);
    msg.setDestination(1737U);
    msg.setDestinationEntity(181U);
    msg.enable = 56U;
    msg.mask = 166725470U;
    msg.scope_ref = 1304702440U;

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
    msg.setTimeStamp(0.5294890968835879);
    msg.setSource(26604U);
    msg.setSourceEntity(101U);
    msg.setDestination(50895U);
    msg.setDestinationEntity(200U);
    msg.enable = 233U;
    msg.mask = 1952950608U;
    msg.scope_ref = 944576282U;

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
    msg.setTimeStamp(0.16149840162520024);
    msg.setSource(19831U);
    msg.setSourceEntity(192U);
    msg.setDestination(29039U);
    msg.setDestinationEntity(70U);
    msg.enable = 105U;
    msg.mask = 24483415U;
    msg.scope_ref = 394368755U;

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
    msg.setTimeStamp(0.5784705344028958);
    msg.setSource(26966U);
    msg.setSourceEntity(177U);
    msg.setDestination(30977U);
    msg.setDestinationEntity(142U);
    msg.medium = 101U;

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
    msg.setTimeStamp(0.726046814697843);
    msg.setSource(53588U);
    msg.setSourceEntity(33U);
    msg.setDestination(3141U);
    msg.setDestinationEntity(61U);
    msg.medium = 205U;

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
    msg.setTimeStamp(0.3219577855171669);
    msg.setSource(9848U);
    msg.setSourceEntity(90U);
    msg.setDestination(13203U);
    msg.setDestinationEntity(104U);
    msg.medium = 229U;

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
    msg.setTimeStamp(0.1316202978937998);
    msg.setSource(60694U);
    msg.setSourceEntity(125U);
    msg.setDestination(35978U);
    msg.setDestinationEntity(149U);
    msg.value = 0.311241894163513;
    msg.type = 235U;

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
    msg.setTimeStamp(0.2186267724119919);
    msg.setSource(58300U);
    msg.setSourceEntity(141U);
    msg.setDestination(5676U);
    msg.setDestinationEntity(97U);
    msg.value = 0.2409592755712784;
    msg.type = 150U;

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
    msg.setTimeStamp(0.2419407359879031);
    msg.setSource(1952U);
    msg.setSourceEntity(70U);
    msg.setDestination(19808U);
    msg.setDestinationEntity(66U);
    msg.value = 0.14320658967285527;
    msg.type = 249U;

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
    msg.setTimeStamp(0.7590015915133439);
    msg.setSource(47753U);
    msg.setSourceEntity(208U);
    msg.setDestination(15656U);
    msg.setDestinationEntity(165U);
    msg.possimerr = 0.7970688419643347;
    msg.converg = 0.7874831422338101;
    msg.turbulence = 0.2592158338665934;
    msg.possimmon = 138U;
    msg.commmon = 191U;
    msg.convergmon = 98U;

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
    msg.setTimeStamp(0.9752847814999165);
    msg.setSource(3437U);
    msg.setSourceEntity(145U);
    msg.setDestination(64690U);
    msg.setDestinationEntity(58U);
    msg.possimerr = 0.3372991779027755;
    msg.converg = 0.16816245165671384;
    msg.turbulence = 0.5157521127791864;
    msg.possimmon = 1U;
    msg.commmon = 178U;
    msg.convergmon = 107U;

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
    msg.setTimeStamp(0.1288435955130145);
    msg.setSource(40620U);
    msg.setSourceEntity(6U);
    msg.setDestination(12373U);
    msg.setDestinationEntity(156U);
    msg.possimerr = 0.33738860504323165;
    msg.converg = 0.46619768392096306;
    msg.turbulence = 0.6317126013291701;
    msg.possimmon = 45U;
    msg.commmon = 201U;
    msg.convergmon = 97U;

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
    msg.setTimeStamp(0.24974948762205995);
    msg.setSource(45587U);
    msg.setSourceEntity(21U);
    msg.setDestination(46939U);
    msg.setDestinationEntity(169U);
    msg.autonomy = 46U;
    msg.mode.assign("TNVWPASOMDNCSMOIBLDEUSYUKMCZJMBERKGYFQYODWMUKTAXZHEFTABPMSTXPJDHHYKWIPZRKRKHNQWFSHDNKCXVNLTUOBISNXVUHPUAEJJLYCVWPGQAXPGUOXTCJFWMVUDLNSWEGQBYJYLHMQRR");

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
    msg.setTimeStamp(0.18386193008588447);
    msg.setSource(5584U);
    msg.setSourceEntity(180U);
    msg.setDestination(2367U);
    msg.setDestinationEntity(153U);
    msg.autonomy = 215U;
    msg.mode.assign("JRHVPOQJSEXLNXYULRWGKNIURSYQRLVJIJKCFWAZDTOHKENCZQPXDBCIMIBUBFSUDRAPOZENSJQOFCQSGTDYJNMEGTCFNDFENHVGKHQIZQMFDGYUWKXCQUAVSD");

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
    msg.setTimeStamp(0.9826759295348456);
    msg.setSource(49780U);
    msg.setSourceEntity(117U);
    msg.setDestination(15453U);
    msg.setDestinationEntity(99U);
    msg.autonomy = 5U;
    msg.mode.assign("OAHWSGXGZAMSBZKPNMNOVUQQPRHLXYBSARQXEWSGJUVTGSCCFXJXWXOPKUOCBGFIJQKZVKFRMXYNHGIVDUHLXLJQAWCICDIBJKROOGZHSVNZNIYUYAIJYLYDLVWKZLFWSBIKJPTQBTJMDFFDCQRCNFHMBRSEKEAAURXIGJHFAZMPAUGYTJPQMN");

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
    msg.setTimeStamp(0.33676855970363584);
    msg.setSource(39603U);
    msg.setSourceEntity(114U);
    msg.setDestination(14987U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.4514278565499126);
    msg.setSource(63561U);
    msg.setSourceEntity(234U);
    msg.setDestination(51132U);
    msg.setDestinationEntity(223U);

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
    msg.setTimeStamp(0.7816415052791799);
    msg.setSource(4928U);
    msg.setSourceEntity(204U);
    msg.setDestination(27176U);
    msg.setDestinationEntity(206U);

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
    msg.setTimeStamp(0.15967695796197012);
    msg.setSource(31483U);
    msg.setSourceEntity(22U);
    msg.setDestination(31474U);
    msg.setDestinationEntity(192U);
    msg.plan_id.assign("PJLDMJQKKTNRLTRVZFQSGIQQXOIF");
    msg.description.assign("UKMWTRFDGAMGXDSAUKYQWGNZDRLFFDPDQKROCBYIJDJPQQICTIHALYETPINLOGAZGMKYTQVOOKJJOXNIVPPELAZCOGHRPKFNTHBECUUIWJVBDBQVRGEDOIUQOCQXNFFNJJFCYMXNPEHJLSYUDMTOHMWVASWMXRZXVBFVGWJUMROHBHWLIZYHKEGUUAXYVKELZRXTAVSBXNSFPZCNWZPSJBI");
    msg.vnamespace.assign("YKIJBOHCHGTWGVHUVYWDLJYMDPGNPTRTALEAEGZQMMBKLFOFPWMSJUYNSSZRVEIOGMCNVVOQAELTBAGPOPTKJKYYLILJCWJRIETUEWEDCYRBOSYZADARQCHXACTNOBDBHNCUJSNRHZNVLUPPAJZCFFEXXKWHBOXXS");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("HDUBQYIGLDMAJZTILCPSBSEQSJOWEUAXTDAZUYRHDVCFBLCQFZDKJIBWIJVSAIJYQWOUFNMYTWSWQMKQQYRQTXDWINYIRKVZKMEBHVAOWJGPZZVGSOHKHPNIMXJNJVSRIXOLPEXOMDLU");
    tmp_msg_0.value.assign("PRSDZUQDRJ");
    tmp_msg_0.type = 56U;
    tmp_msg_0.access = 187U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("JSPXAPGRAGRGINNFVZBBNLKSXCFEOKMPTUPZQRDTXQGKCRTBYRNIVVKHEKJDPOQXVFJWXGSAJYWJMULEVGLNRFZBXDJTYQFDZXLPAZKWDPJUWNBZRWAQTRNGVLSUGFEIEYYMBTOHADOMLABTJCRHBHIWBORFYCIHMHJCNFLKYIDXLUKKWVPLEWCKSVOAUHLIJU");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("WLPMFIINEBFXUWKQIVIJNRDUCYGOQBOXIDGNZGJMORXUFCAHRNRPTZQKREYGDXVKMDSEHSJZVHYXXVEDNJQOFORHFQHEBSIYWNNDWWNZS");
    IMC::Rows tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.plan_ref = 2371801889U;
    tmp_tmp_msg_1_0.id.assign("RTQODEFWVSCUFZLXADUAUXNKCACW");
    tmp_tmp_msg_1_0.memento.assign("ADPMWGVXEWWGAFOTXOJFLJLHZTYWDLETPDMAJOISBLAHZVOCPMUYNSLSKDJSHNAEQZACZFTPDXII");
    tmp_tmp_msg_1_0.timeout = 17505U;
    tmp_tmp_msg_1_0.lat = 0.8219655443439242;
    tmp_tmp_msg_1_0.lon = 0.8187340813210914;
    tmp_tmp_msg_1_0.z = 0.1695976968790669;
    tmp_tmp_msg_1_0.z_units = 134U;
    tmp_tmp_msg_1_0.speed = 0.7818878329688687;
    tmp_tmp_msg_1_0.speed_units = 185U;
    tmp_tmp_msg_1_0.bearing = 0.15220972125981858;
    tmp_tmp_msg_1_0.cross_angle = 0.33568262802227766;
    tmp_tmp_msg_1_0.width = 0.17848307955527465;
    tmp_tmp_msg_1_0.length = 0.6688519584922135;
    tmp_tmp_msg_1_0.hstep = 0.5274363099857522;
    tmp_tmp_msg_1_0.coff = 151U;
    tmp_tmp_msg_1_0.alternation = 248U;
    tmp_tmp_msg_1_0.flags = 82U;
    tmp_tmp_msg_1_0.custom.assign("KUBXSYBJAODFATOYXWKKCAQKODWYIHLBXJAULDTPZOEGRQVSHTGYFISUYPTLMXRUZVLFBEHFWIKYNAWFRTGTJWJSAGTKUJXKXHTMSGJAYFVQRDYSIPBRHJVFAWCPMESCKQTNIWTGBMOUCL");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::PlanControlState tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.state = 65U;
    tmp_tmp_msg_1_1.plan_id.assign("KEPMIGADQUXWLFDETJUWVNRZPRZATDVPCFSUCMMYTFAJRNFDVMCFWJROFHYMEBNN");
    tmp_tmp_msg_1_1.plan_eta = -1576056931;
    tmp_tmp_msg_1_1.plan_progress = 0.28630964348990406;
    tmp_tmp_msg_1_1.man_id.assign("PZVXUGNBCOBUDFVMKRBIVUNFRSINJDURIGXHWW");
    tmp_tmp_msg_1_1.man_type = 62792U;
    tmp_tmp_msg_1_1.man_eta = -210797926;
    tmp_tmp_msg_1_1.last_outcome = 190U;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    IMC::BeamConfig tmp_tmp_msg_1_2;
    tmp_tmp_msg_1_2.beam_width = 0.5714833462576224;
    tmp_tmp_msg_1_2.beam_height = 0.033681606762462346;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_2);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("ZVBLLTIWAFSAKMEULAFOMETDGOTUJUBZAQWAAXVCPIURULQAWFYDMQKHYEEYVIZKHZSPHXHGMNYIVCERTZZEQBGBCIHGXBJOJYBDEISJUFLKTEPRODUOCBPXRDHRHDGHQ");
    tmp_msg_2.dest_man.assign("YZRIRGPRHBYMVJPPOCZDMNNJ");
    tmp_msg_2.conditions.assign("URKYBLBWHHYCORJCOTXXNLGUFYPJSNAWQLHAGPERANAKQBZGGMHOFQZBHUVDAPPIELFEKZDU");
    IMC::EntityParameters tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.name.assign("FHXCGJTHUBSVYFCGKFURMAKADCKMXMHKIYHDXIOTJP");
    IMC::EntityParameter tmp_tmp_tmp_msg_2_0_0;
    tmp_tmp_tmp_msg_2_0_0.name.assign("NSQPUUKYZVBSQIGICYFTVFDLINAGAHEALJHQSMITDRNXDPIJMOVGTUYVOSUUXFJGPKHGJUDVNCUYCUEBEJOTARKJEGLXJAENTXWVOEORRNZQWCNIEBMDYJLVYUPVEFTSSGMWNJMBWFHRK");
    tmp_tmp_tmp_msg_2_0_0.value.assign("QOKJTQMOPYCSVCNVFLJSWHNARROOKUYMEIDLZUBLUEGDTBJVDHXERGXXFFRBBSVMMBNNWUNTKYAEEKAGGFSRGWCVTCHLFQZUIABCBTXKCFMXAQYJKHYIHNDATTDGGSMOGFRZEELFAJDBPPIAUMJZSKWLPYQSENPLLPMZLAQEIKBROYAJIZMQHHDQZO");
    tmp_tmp_msg_2_0.params.push_back(tmp_tmp_tmp_msg_2_0_0);
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::BeamConfig tmp_msg_3;
    tmp_msg_3.beam_width = 0.02439756039670682;
    tmp_msg_3.beam_height = 0.7593769854247134;
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
    msg.setTimeStamp(0.33028859568518265);
    msg.setSource(24204U);
    msg.setSourceEntity(175U);
    msg.setDestination(7165U);
    msg.setDestinationEntity(162U);
    msg.plan_id.assign("STSJNIZKDIQJCMWULQBJTDRCYHODFOTHCSDNVAOAPTMRMYCQPIUHMZOZGNMUUCBXZELECWRAJHQGHBOWQLQKNCXVTTXMDYJZZTLIXFNHCVFBZ");
    msg.description.assign("KGWDQTUFDDPDIBSIXHEKIRCIJRAXN");
    msg.vnamespace.assign("PYCZIWYSADFTOWDCEGLZJLAPXXULDLCRXADNEBBSVXSNAVRGPJUOUMPAEHROWVVIEOGQZTZJRULFSAHMRJSIQMBYLQOOJIGFFBKNVB");
    msg.start_man_id.assign("NSLAIECUDJYVTDPTNJVOSGQIKOIECHMREEWGDBNEHBMMOYQGHQNITPTUZXDIHYWRRPDQVVZZKCZBWKBQMJXZOHLIWRJWOVXKFREGXFAHPWHUGTEJYEQIQKLITQKYCJLZGUYCEWDUVSGIUOAMXWNLCRSAJUGSTBOZHSLFNXDRWKFAPULYBBAYFMFBMCZNCHELNQAKJ");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("WNHSUNUEQJAGYAIVVXQOEUPDATZTTWNJPBFEUUXHHZT");
    IMC::FollowSystem tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_ref = 1147334646U;
    tmp_tmp_msg_0_0.id.assign("SSJAIJEPUPAQGDRRNLXEAGXNUZQOBFEIUZWLWRPVKXOITPCTMLKSGPDUUTAGVXHNQFJDPVZLRFXBEGQWBRIQLEBELXGMHOYMYNUEBQODJWCIFOHZKPJAOBRBVAUUPKLDISCYXDWVNVMWZCOTXSYKZOMMYGAKGLYMJXKWAQIRLJ");
    tmp_tmp_msg_0_0.memento.assign("BDQQSYDSZAYQFILPHVKHXIFQEZTHZOENZOPAGEDOIETGBAIYTIRYUVZTXFLUBUFJGOODQCQVBKKTEQYDTGSJWKINHRMDHCXCHELWQZRQZNFWJBNXCSRRBXVEMGAPMURFXVPAJJOLPCJNLCNUIAPJUALM");
    tmp_tmp_msg_0_0.system = 5401U;
    tmp_tmp_msg_0_0.duration = 3105U;
    tmp_tmp_msg_0_0.speed = 0.22159651460510144;
    tmp_tmp_msg_0_0.speed_units = 12U;
    tmp_tmp_msg_0_0.x = 0.9825720401827289;
    tmp_tmp_msg_0_0.y = 0.4428720241122649;
    tmp_tmp_msg_0_0.z = 0.7202324484022127;
    tmp_tmp_msg_0_0.z_units = 111U;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::SmsRx tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source.assign("PUIEQDIYNFTJZBRYRIRKDJERZYTEJTAEWMFUKLLLDRYNKKGQOWGXTNCXINWJUZHGQKPSOAPEWSBLOGFSXUVOVCNYLPPUXZLVRIIQCUXQAM");
    const char tmp_tmp_tmp_msg_0_1_0[] = {45, 55, -2, 62, 101, 81, -15, -96, 12, 121, -51, -32, -24, 45, -64, 99, -64, -84, 61, 6, -104, 108, 118, 112, 81, 41, 20, 68, -11, 113, 85, 91, -69, -12, -98, -115, 77, -6, 57, -12, -18, 30, 123, -81, -23, 30, -125, -41, 80, 34, -37, -56, 48, 96, 10, 54, -72, 53, -69, -8, -126, -119, -18, -9, -81, 36, 37, 72, 56, 122, -42, 69, -72, -79, -35, 39, 47, -68, 27, 114, 37, 66, 75, -73, -118, 25, -68, 29, -60, -28, -45, -90, 17, 119, -82, 112, -124, 125, 103, -81, 68, 38, 120, -108, 45, -14, 67, -69, -120, 52, 34, 5, -8, -73, 30, 63, 103, -66, 6, -75, 55, -123, 108, -70, 110, -20, -123, -61, 16, -91, 37, 107, 32, 97, -2, -80, -123, -109, 7, 61, 115, 116, 97, -31, -89, 23, -81, 47, -1, 112, 61, -111, -54, -46, 48, 100, -37, 41, -123, -8};
    tmp_tmp_msg_0_1.data.assign(tmp_tmp_tmp_msg_0_1_0, tmp_tmp_tmp_msg_0_1_0 + sizeof(tmp_tmp_tmp_msg_0_1_0));
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::UamTxStatus tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.seq = 35691U;
    tmp_tmp_msg_0_2.value = 77U;
    tmp_tmp_msg_0_2.error.assign("HJVVZEYUZLMHSKYIQSSUCJEIIQSYUDRGYQCUJFTPXTIERZWTEQZTVFKLUSEBOWANIAXVFYGQOPRIUDYVCHWSSTAAOCPDTYMVKLBNBQSPVQOHGCMOLFQVXJETQBPAJHPNWULGXBXHMKNDALSOBWGTJOIZECBTDCKEFRAXCZHMJLGWRW");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::RemoteSensorInfo tmp_msg_1;
    tmp_msg_1.id.assign("EHRTNPKSBMPYTBYDLNRZEHUHNIIELJPYBGAXPZFFXZKQMDYJYYWVUMSAPKREICVQCYALXUWRFDPFFVB");
    tmp_msg_1.sensor_class.assign("BDXGSXTXFKJKUMCCEQCMCZRPRGSAPGOIYVACGUSNKBOIHDJEVJDNBQMEPGSQZLWRMZFXLAHAPALWYSOEELRCTVTRZHJDLSMYKWLQSCBTQFGAUXBEPRTERXOUISWLVGYFNRHXNHHZVUZTFFNONMPIJQKKPOTYHETFHQUVYIXVUBJINZUOQAWPRYFOMDIMQADNL");
    tmp_msg_1.lat = 0.2646701643713778;
    tmp_msg_1.lon = 0.5824120920164527;
    tmp_msg_1.alt = 0.13853859079332098;
    tmp_msg_1.heading = 0.04563044034882657;
    tmp_msg_1.data.assign("AOAWRVEQZSWLIYZHQGVBMLDIPODYNMGWJBRSHMLAZTFVXCJUUVKGWNDRLYISHFINWGWUILHRTOCBSEQTKPFJBKYGTAOXCMZPFAFRMILUFRKOPOEYCQRBEVAVWZZGXPTLJYHAJPXWMWOEGDMEXUPHKQGNCSNEXKZJPHNA");
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
    msg.setTimeStamp(0.24020341985726545);
    msg.setSource(4481U);
    msg.setSourceEntity(92U);
    msg.setDestination(53340U);
    msg.setDestinationEntity(223U);
    msg.plan_id.assign("SENMJHFBRSPUCXDYEWHNPHWNFCCJNRJPOBIXPMSOHUIWMEMIZAFARNEYPJOILTPUCDWDTQN");
    msg.description.assign("KRUSSQHPENMNMXTYQBUWGUUHS");
    msg.vnamespace.assign("ONZPEKLOTIOTXUAV");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("IPCHNVRYWEKJUKHIQMUJUIDIAXLPOTWHM");
    tmp_msg_0.value.assign("KLGKFOJJJIVWWQQKZSAFGCJHWCIHJVUCHVMUJEQOSDDPZRAFNLMGNBSXXMUZXBGVYEICLYUAIRTLVDIFZKYPOLDCMAWUYICFPWZDNTUONBDVKSEJXWRYTQNQ");
    tmp_msg_0.type = 6U;
    tmp_msg_0.access = 67U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("PUNOIMGJGTROMCMBMHQNBZDKSAUCEHCIKH");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("FVSAQEJJNSIJCJXHLULQYVDNJIMPGIDEKVHEHEAOKNBBTROSHAFKXWWFDNBFUYWPBVYUAWVLZCIVQCHNBYFYPBVYEMURMSUZXOEGZFTZHGEJQTOLRFZKMLAYAMPMDQDWGOUONTVKGDDXCXRPZINZSCKFPUDIDBDRRHUELZWMXTRGYNSGVMGYTWPWZNOABTQIOUSRKQWSBNIZCFSCTKLQUAEGVLGXHTIHPIXHO");
    IMC::Teleoperation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.plan_ref = 4104081812U;
    tmp_tmp_msg_1_0.id.assign("MUEDCVZUBBXISAVFNZKDOXTLJTRSMNDSPLQXGBRKQDAXLNUODKAVCJQUGTOJVGRDCOVRLTEMPRPBNJRHYYGFIBMFQGUAXZYWZSTYOQZJJDLMQHKHNYIKGSVVLCCEPHTJHNCYHNJRAPWIVEEDZKIIRVASQTUBKSBWEWFAINEUEZGXINZMEGTPTJXFAWOCDBSCNULIXDVAFXHFKPIFQWTBFMZWOPAWMZQBYUWHO");
    tmp_tmp_msg_1_0.memento.assign("MKLGFNWSYFJVLDKTISEMSGYHEVRACPYEZDEYDMGKBKHWVFTOJOFZPAIZAMMTKQIIAZNNI");
    tmp_tmp_msg_1_0.custom.assign("IBUVNSMKKHEINZSSYYGOKVZYZJNQRHVNWMNLYSVJDSHJZEBQXXCPGTBQUUIPRQTUVHMRCRFNGCQJODBBDKWFNTXMEYWAIFMVODNKAFHGMURASRWESLSZOFLVTGJJSLQAFEMIOWLUCPMGWXLBGMBPOPAYFPMOHAQZLCAVIHDXYTYXTWKIRALPPHRPVTREGOWWYXAJCLBBKQD");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::YoYo tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.plan_ref = 2472479957U;
    tmp_tmp_msg_1_1.id.assign("EEDOAKGIIBZHSCBULGWRYGZQLTRIYMRMESZFKHLSVDTIEGCUXMTLJAHFIRPAARCKTUVKWKLUNDBZMUDEOY");
    tmp_tmp_msg_1_1.memento.assign("GBTTADQMGZZATOUGWWCHFGGRNZNEOVCJAYYXBRIIHBVXFSLDVICHAPSUXHHXJCGIDFQFRKMLYMOWVUAOQSMTPCSLLSKHJXCMPFLLFYYUXUUTAYNQCKEOUFSQYPVRWLPYBTBKC");
    tmp_tmp_msg_1_1.timeout = 21803U;
    tmp_tmp_msg_1_1.lat = 0.13150758460764955;
    tmp_tmp_msg_1_1.lon = 0.1916871581931484;
    tmp_tmp_msg_1_1.z = 0.11413007671578446;
    tmp_tmp_msg_1_1.z_units = 200U;
    tmp_tmp_msg_1_1.amplitude = 0.6640222818138389;
    tmp_tmp_msg_1_1.pitch = 0.014325065750673605;
    tmp_tmp_msg_1_1.speed = 0.686931150067531;
    tmp_tmp_msg_1_1.speed_units = 213U;
    tmp_tmp_msg_1_1.custom.assign("NJUJQMLEKSFSPCUDUPTDQBNBJQMTIBXGHSYDXOLTECBMMVNYBLYCQNDWCGWVEAHUKHSXSZVZTHAEBFSVCJUZWKJXAPRAZMPINGMGKOGJSYDTOTRSQRDSADEKHMFWXAVIRFMZJOLFMWCZKIRGYJKXLVRFHUHTDJQYBLSBJOAWLWUTOEXEFCONXYEAQAHCNLRCEZQN");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::MapPoint tmp_msg_2;
    tmp_msg_2.lat = 0.7232370782424764;
    tmp_msg_2.lon = 0.8126058589087349;
    tmp_msg_2.alt = 0.27690537151457195;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::RemoteState tmp_msg_3;
    tmp_msg_3.lat = 0.39177117923543825;
    tmp_msg_3.lon = 0.8226727630652186;
    tmp_msg_3.depth = 139U;
    tmp_msg_3.speed = 0.16406138796935088;
    tmp_msg_3.psi = 0.27195197983871977;
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.5144241814072688);
    msg.setSource(5355U);
    msg.setSourceEntity(181U);
    msg.setDestination(58724U);
    msg.setDestinationEntity(235U);
    msg.maneuver_id.assign("ABTCWZUOHEHMQTYNEDSLEDRGVKGOXGWHJSCSURMWIWAPASYYPAGUPMICWZZFYSSOXNQNGRTMDZPEIZXSZFXEKKCFBCXQBHBCWZORYLD");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.plan_ref = 1031565954U;
    tmp_msg_0.id.assign("TQBKMURWHYTMDXSPPYYHCFHERFUNAODLSMPMSBCDSRJKULQFXXKSYESXUPWFBVDLIQVJDTWYKGTIXBARNCPAWLAGRUPYHHBVIOZAZQEFGWBHRNUUNOTGTIIYOQWOBMIDDLBEKEHGHMMVCJFZQEZCLNNHRIRGGTTOBPLVCZYMFJKKVIEQXQABCECSAXWISNJUYNDAZDVGACQKPFSRKXZMLYKOGZOVNVP");
    tmp_msg_0.memento.assign("XFRZGVZKJAXIMCCQLOLZUGNJJKXMOSHZDAIGECFGZDNBWOJTZRYDYTTDWHQAQDIBJQIAQWPSXWRQCOEJDOUMHLDHOYTIMRUKIOCMEHRUYGVEPDWNJSECFGCTELDPXARKYNCLXPLNUQSVLGAJFTHFBYPLDXFIPROISFAZZBNMUKTARRCEHEHJXTWMPQUZVTIPKSNMEWLTVHBOBUXMWIV");
    tmp_msg_0.custom.assign("SIKVBPUKBQIFBXOPDPKJICSVNYRDTTETVMLBMLOPAASIOMPFRMQLSZNCTKUIWXZGQNJULFMDVNXNEDEGDQLVRTWZBEPWSAKYCRGKVCYHZCVWRAWFHFWWDKHXOCYULBJITVGKOYCZXREOURUJUXMTOFYNBBJYZRVEWIRQFNJEAIJQZTABOPHSKVDQPEPKYHCEEFPYUXLHSQNCXMDJLWNZMHGDAMF");
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
    msg.setTimeStamp(0.7302175751323171);
    msg.setSource(65475U);
    msg.setSourceEntity(113U);
    msg.setDestination(16024U);
    msg.setDestinationEntity(63U);
    msg.maneuver_id.assign("YCERQIRCYABYUSDDDSWVFEMDZTZKGMHFANBMTGMLAKIGWXUXDLPHBAGWBFCJICXWABYGHSHUJWWDWOTKZFOPRDNVEXT");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.plan_ref = 2007190322U;
    tmp_msg_0.id.assign("AMENOCMELEBPEUFZUJCSZMIFCYCJDSMJEQZRRBZKWXAYMIRPLGHLSTQLWSQOZPAKPJHGVVMNPLHYVCLYDBEXYFXFDNHUFAGMOEDCOELXXOBXQIYWDLAJHMZWXQTUINGSPFHPKOOLXITFZUSNKKCEHNSTBJUTDXCGBVZGFKUWZZHYYVIKTQWWMTSDNMAVRROQVJDOBACGUGJAWYRABPLPBKAJRGHIUUKFODCRH");
    tmp_msg_0.memento.assign("YMQJEHINXWZQZBQBKJNNYKJETEVNDGXWJOFADMWOSRWXMOVSHBDXEKXZWSCJLJIVACUZYMHGPTSHNIFQPLLRUYUOTPGPDAFFLWAIAJZHBLHSKEFDPQTZWCSCOLRVHMECEIDZUMFJZFUXDSFVBGDXCTOGQQXYYALFUJREQCTVAMGDYRCWHSOKUIVRLEZPKCMMAYTYKSONANDSZKMGK");
    tmp_msg_0.lat = 0.5523002075880477;
    tmp_msg_0.lon = 0.37096300396712645;
    tmp_msg_0.z = 0.6517750520777871;
    tmp_msg_0.z_units = 236U;
    tmp_msg_0.radius = 0.7941758125070748;
    tmp_msg_0.duration = 25035U;
    tmp_msg_0.speed = 0.9865963531602032;
    tmp_msg_0.speed_units = 218U;
    tmp_msg_0.custom.assign("VEAFHEJWOBWYVSMQSJHDPBAHMGLRCNILMGIRWDBUOZEPZVYLRNJEJFGOBPUOHRTVKNTSSDBJJWRXDNGOGHAXKWVPU");
    msg.data.set(tmp_msg_0);
    IMC::MagneticField tmp_msg_1;
    tmp_msg_1.time = 0.9111088046595498;
    tmp_msg_1.x = 0.7501040561275931;
    tmp_msg_1.y = 0.7791206541275806;
    tmp_msg_1.z = 0.44913064873559483;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::CacheControl tmp_msg_2;
    tmp_msg_2.op = 102U;
    tmp_msg_2.snapshot.assign("CYCDOYMXKGZQHYIBDXUNRGBXQBASPKNQPTYURVXFMWUDHMIACSAXGQZRTIODMZSCQTUIJMAVUNJTSFPFUMIBICRTUGEVALJBPMWFXQCPLZBMSSOCJFSHNWILAVJLI");
    IMC::PlanTransition tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.source_man.assign("FPPYIZXLPIJMEMADQOROMYGGNJEEIOGKOVPFEWIZCCNKSLUDUTCXRCDZMYPAWMZERVVQXTFPYNEOWVHVLTZYLFHDGQUQNOUYUANFADUMYPHJZOZXRTCKAURGUBAKQHZJHBHISYHRKFZSBZASFRCIQNRTRXTHKDJIBQJVXPGGALLNTXQMNSBCEWCB");
    tmp_tmp_msg_2_0.dest_man.assign("ZGFXOITPSOYUENOQNHHECMKJJIQEUORDXWMMHARINLHVSPIUQELJZSTBGDFHYXFKRDZJOGNOXHRMXQSBYPZGCJVOVBXTYIGZPBCQUFQSKBYSCSJIZOJKBWVCKLWWWUZVNRWJTPRMCJKVRFEUULXAZLLIPSGYIQB");
    tmp_tmp_msg_2_0.conditions.assign("RTXQZCDYHBCQUWYVGRWWVYEDSHEOVCHRJIDSHJIBOZGUQEGQNWQIPSWWBCISACKDQMDNUITMUEMNQNXRJJKVQCFAAYMDOFMVXSLOVXPGXKCFZCAVINDOXSEBVIGOMKTLRUYWRUQMQFAEOLGBZAJBKFELTILYMZPJSXYPFZIJDHFHDKGDHBAOFWPAPNLP");
    IMC::ReportedState tmp_tmp_tmp_msg_2_0_0;
    tmp_tmp_tmp_msg_2_0_0.lat = 0.7354765301047236;
    tmp_tmp_tmp_msg_2_0_0.lon = 0.6765672745778283;
    tmp_tmp_tmp_msg_2_0_0.depth = 0.17108169557227126;
    tmp_tmp_tmp_msg_2_0_0.roll = 0.5646519599332714;
    tmp_tmp_tmp_msg_2_0_0.pitch = 0.8646444004229333;
    tmp_tmp_tmp_msg_2_0_0.yaw = 0.7683427944263115;
    tmp_tmp_tmp_msg_2_0_0.rcp_time = 0.7807082261286293;
    tmp_tmp_tmp_msg_2_0_0.sid.assign("BODDZDXIPXPVNXYYKFKOLTXCOPQDMJCZEESLJQXRQLGWYRIZJLKZWUTAEQBATDFTRRKOELGWVKHIMBGSZAJHUCWMTHYVRIKJYVXFFPUOQERUXPQUJFAZZWBHSSGTNBRHJFROGWWHBPXBATPYPECDACQCGWIMQNNNYZELMHCUFKSNGUHIIIZSABPDOPLJ");
    tmp_tmp_tmp_msg_2_0_0.s_type = 139U;
    tmp_tmp_msg_2_0.actions.push_back(tmp_tmp_tmp_msg_2_0_0);
    tmp_msg_2.message.set(tmp_tmp_msg_2_0);
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
    msg.setTimeStamp(0.7533801427095727);
    msg.setSource(45751U);
    msg.setSourceEntity(86U);
    msg.setDestination(33519U);
    msg.setDestinationEntity(246U);
    msg.maneuver_id.assign("XVNOXJWFVZUHOMABUCAYAYTWPLSBDAGLULRLBKJCQKRIQLJGHOCWWTQOLPMIAMHQSRKIKOGUPNAKZMXXTMRTDJGEFSGFVJNGVOJUBYYAHZECFBZVXSIKDQTNBAIDQOSYETCCMSFODIJTJIUJESDCBFVPRGPCJFZILIHWPEAXHLTXUWUXZBAXRORIVQCH");
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.plan_ref = 1338910089U;
    tmp_msg_0.id.assign("DSWZNRAISPFPMAIBBRGJOPCQKFOEXHETNYKTHLRDNIVXVCUUYLHKJQOBNUVIHDOAZENJPOZGNBEVARSVTZDKDZVFGVMIMJHWAWQFLEYQTBQUAEDZJTPXSFWVDULUTXKYBZWYTPJDZURUMWEYCMOGFQAANBIYHUJWDMBXCPRIIDFZXXWHGIEOKLLAWMGPNYXGOKQRXUSFJHKQAOTGLGJCNCMEBXPSRTJCGYQYPHSCRIFRFBCMS");
    tmp_msg_0.memento.assign("ISUEBNENHOYVZABHJGWFLAMCVZPPOPFQDODBDEHOMBJLMTLQDZUIXMFKSZOPBBYXCKGQQTMTEVYPKHAUYVAWERWGHAILWGHWAGDHJYJWCNAZODWKTAONLBSQRXJCRWWHYZFSFIOCCBRQUMFQGRUOHJNTLSTACVPIJIYSVKDUPZBJKILZUGNKPQJKSZTXSFLCFDOXNUNGGYRIIDEMNWKJXETEG");
    tmp_msg_0.custom.assign("KCSOXIUAAGWLYJLSNLPWHQBNWYXAHTMNVZQMVDZYOYTRHAUSNWWXINLQWCHRYFAVEYVRBCULBSMOZBKZHEAWGKENGGFMFQMUUSVQJZQUOGPLUMXORCDNVSEWQWDTIDHPMVJDIBJGKKJTQLGLBFTPHFJSQRJMTKXKMPXCIFHFRVBXHJSRFHDWKSYROCPDCZMAGOFIJVISZCKPOTBNGNPZLQZY");
    msg.data.set(tmp_msg_0);
    IMC::DesiredHeading tmp_msg_1;
    tmp_msg_1.value = 0.8632313023889371;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::EulerAnglesDelta tmp_msg_2;
    tmp_msg_2.time = 0.5158604003067018;
    tmp_msg_2.x = 0.8293856814828724;
    tmp_msg_2.y = 0.43084901522509267;
    tmp_msg_2.z = 0.3129019593216269;
    tmp_msg_2.timestep = 0.7873857858452942;
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
    msg.setTimeStamp(0.21022461784522206);
    msg.setSource(28711U);
    msg.setSourceEntity(81U);
    msg.setDestination(61691U);
    msg.setDestinationEntity(26U);
    msg.source_man.assign("WPATNDURZIHONVWNNWWUODXGRKKIHSPFNRKCSVMQEVZFC");
    msg.dest_man.assign("XQRRHMLVZBQTHEMOOUOWHOEBGDDMIICGDOKWTXZBLDANNFNFCKAETCYRKPPGQQSBKDOWIBNAWEYCGVAPJUUCTFPZLIAGSXHOJHDJZIXOGPZWEOTCJVAYJPQXKEBXQIVYKURPLVZPDUKTXUUYLJSKLIVAYCFTSPMRBBMAUSTAVZBBNMMICSWYHWRSSXFQGSJAWCFVNUVECQIZHHHFRTEGNDDQYEHNTFMXZJLUDJKQSMPFMGNJFZKVYLXRIN");
    msg.conditions.assign("FLPRPBGTIJLHCVIKNFFYNDSUJXBVGIOQXANDHQELWLHAWMNMUVNCXHZOCTZKTYBMOSIQMFCDWLYWTSPVNXEUMPPXONIQLLJDKHC");

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
    msg.setTimeStamp(0.23532492334082322);
    msg.setSource(42138U);
    msg.setSourceEntity(114U);
    msg.setDestination(17023U);
    msg.setDestinationEntity(113U);
    msg.source_man.assign("UUHQQXBRJVXFKRPSEJNWCXISXOGDPZVAKORXAXEQDYMGHNPJICMSFFONWHFMLEWFQD");
    msg.dest_man.assign("WVMMNSLNSBWUYKJMIFZLPTQVADVLYAYTGCPUXOSDBPQIKPZETTWWILKOQELHXULTPYTNCT");
    msg.conditions.assign("BRUARNFJWTCDQXQKOLEKCSXWRGOCMTIQJJVLJSVIBXKPKCHFUCVGUNOTENDYXBGDGVNPWOJLQEFUDVYPIUREIDZTMEWRNPLZRQYURYTXSIIUEUAZBSPWQRAEVMOWVAZKVPDCHWASOFHIMFQYHKBGTTJOZNGWLNASQONXGVVKOKZFEZJQMCTXEZBYUKCNFXYDMMLZJKBGTWNAXFBLPHBIAFROLPXGLDARZE");

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
    msg.setTimeStamp(0.29861784419375315);
    msg.setSource(12016U);
    msg.setSourceEntity(117U);
    msg.setDestination(63840U);
    msg.setDestinationEntity(11U);
    msg.source_man.assign("KKOFIQVFXLUTSMIOXSMUDLCVMQTGIPKFJEYHEQZHDEQNRGPHESUWVWAVCZJIAS");
    msg.dest_man.assign("QXOYILDQIASOJNSJQCPFILKVZWWKCIRZSELIQUJSNIDLFMXWBEMMYVWHTLHZFLJUPZMVTGIBEZCIRWZSLPFQZJXIMUVWLFHWDRCMDCBEHQYXCVOVFVKYEKUPAPMYLBATTJOHQOTODHDGCKYONKTGDTYGBEUMMSEAPKRPYXAQTBCQXXEGRZADDYRFFYCGVAEPEBXVGZGFSUNHMHFRHUNKNPBWJRBNUGIVWHONGTOSPJAQLKTX");
    msg.conditions.assign("SFOONEMTPTWQXBIVVJIFLECZSJABOJDBHXJJBVLKVXUGAXBHKFLUYXFDYJSHERGLWDFAIOMSXQUZGJTNPYPNRPUTQQKHYQNUYIBFMNKXMUPYTOBMAVFNLYGCTVIMWRBTWYASGOCDKLEMEISZNSF");

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
    msg.setTimeStamp(0.8540978869093934);
    msg.setSource(9828U);
    msg.setSourceEntity(44U);
    msg.setDestination(56900U);
    msg.setDestinationEntity(237U);
    msg.command = 73U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("GRSPYESISSJOTUXCLRGRNQOXIYKTQXPKHWFBTQFCZDQIQHQAFODDZADLFBJPGUZNAQIRBUJPLAMVOBMFIVKOMQEVMHFSELLMHCWTMEHCDZKOSYKXGPXCYJGYNGHNCRJFEFQMDHWUEEICXKJEZSRCUXAAYWZYBMJUVYDXPXVKKUOAHGLBGNZJOCALVLZLVZURSYVPSNPSVHYBDIARMUAMVBTTQITLGUWRGTTWOTZEIXJJKHNRBWNODWEFWBP");
    tmp_msg_0.description.assign("TCOAVZWLFZSBNGUHHLNYAYMBHMWQCVAGTMBDOSNUPPSQJZDUSVKXOPWRRIMKBFHMZMERFQUDNLGTMPYVGDXPEBOZOTJKQFIYCNLIPBEZFVIKFVDCEAXNHAQCGXSQOYCSACIDZPJJHTJHZ");
    tmp_msg_0.vnamespace.assign("FCEVUIZJXGQRXDJACMBGUYRNRHBYNJSBCRQQWGBFMKOV");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("WUPOARPMLYYZFIAHJYDRILNAEOKTPMWSIIUXAKQZBGESHAEQCWEBUNITJGQVXSXROXACYCTGGEWJQNJHTXCDODGFCANCFSMFDWCJJOINBWLRDNPBBYBHUHGEXTUTXCJPOEZRIGYQGUWN");
    tmp_tmp_msg_0_0.value.assign("KMWWJYLDNZWOKJAQRVXOKWDORYRUYSYPIXGRSKCOQAYFKWHNNQMLHGVRBPNYJXTYRZVAZJQLDCDSJAULFWTBGSFRMVNDWXCDHIOINEGIVPCPZTTUWQGHUSKFPMPTOLLJUBXMTHHATEFCRNYCFTEHKRSHVSDMJXQNLCMRMGATEIEXZDDEPBLUZUBBQGFFEXBSNNCJHTMJBOKLMXVIOOQKYBCXEZPIKVVWIASUQQEGZUGBHPVAYJADUCA");
    tmp_tmp_msg_0_0.type = 202U;
    tmp_tmp_msg_0_0.access = 234U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("BUZFNNCDVVWZHXWMAGGHTUWKDKPQNEHSYAWGOHZAKHGROPEAEBOVQPQYZLOXHKXGVMKUBYYWIBWEQVJXLLNRBFGXCAPYQFIJGVZZBDXIMULFSBFLWSYQQILRCNNCDOTCIJRSMENJGELLWFCVJSYXSAXFMTJSKMIIXNXTOUAGJLTZDDROATKHYHAOAMDUETNFNEYRIYRDPHRVPLIJOGIVERPKBKMWCCDUBDHSJQUEZPU");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("FFGNWOVREDZBDKHLRANGOEGUSHJBMTMTOEUTGJDLCTKCBITOAUHYEWTZJAEHXLNWIPBJAIDJYSXXICECKMSUXJJMIEVPIMTQZJQBZCSCPDKNMEMRVZTSXWZFQLSRCYLZVYXIRSUEYEHNLAFDVHUOWCTMDHPXGLKKYMFZYZOONUIOPRBQXFQKAYVHPKWGQWCPHYNGOSKWRIFFDXRJZNAQVWLFBTNODARCFPLWDPAJ");
    tmp_tmp_msg_0_1.dest_man.assign("NBOZEZXWJLYTGKRVCDLBAKALPYUJJUTAAELJUZIUUCBKCQNLVRVHUWJSRPDUFPYDEOWSQOWCOCWYADCHXDURHFKMDPVGFQKXFQJMWASLEZYRCBHVZUGZIJVTIUJEOMFJNCGSAERKHXWLGBQPTXMTPIXSGBLIQEOYXXLNQNNDSDXHQKXHKCSJIZZSYYFPMEM");
    tmp_tmp_msg_0_1.conditions.assign("UUXUSOUUMYMIVEGMFRHMNEFEFVQCEIEJRHXKWBRFC");
    IMC::SaveEntityParameters tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.name.assign("NHWEZUTTEPBWNOLJGIPBDMWCLATODSZTHUKYZIKJCFKMIRAXSMSJXCRCSFZMIFERQNEHUZALNJBCDJASZUFTDCHBULJRQLMOPMONSFYZUVHQFDBXVNPRQWXOTLHJYXKBWADPTIWPDEHOBYRAYREKPXJYRVQVKQLAEMMSBOMBAOUQCRVICNVGJBYGLOSRNWFX");
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::DesiredVelocity tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.u = 0.13768360336032603;
    tmp_tmp_msg_0_2.v = 0.14388281705762584;
    tmp_tmp_msg_0_2.w = 0.9199256318556135;
    tmp_tmp_msg_0_2.p = 0.3931050440098667;
    tmp_tmp_msg_0_2.q = 0.9533605058204975;
    tmp_tmp_msg_0_2.r = 0.850459809518097;
    tmp_tmp_msg_0_2.flags = 31U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::WindSpeed tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.direction = 0.38027432582805487;
    tmp_tmp_msg_0_3.speed = 0.2915886611555325;
    tmp_tmp_msg_0_3.turbulence = 0.040561296484533105;
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
    msg.setTimeStamp(0.10761650095481545);
    msg.setSource(10178U);
    msg.setSourceEntity(224U);
    msg.setDestination(20314U);
    msg.setDestinationEntity(185U);
    msg.command = 178U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("UUYBWQNALJNFYCCVBHYRPAQGJBQVYVBKUDMSWJVVIGZZHJHUJPJXTWKSLJNRTDDLPUFDMTEFXOSRCEXQKISVAUBIBZWQLYIRSCPFIZSEXHDLJWRZVRMXYPOMSEPDWNYFNZ");
    tmp_msg_0.description.assign("AZRIBAPYGSHZZZAWIYEBYOHCINPATADGDXQEXWJYFCLCWQEAHTDGPIYSBKMFKKNNULJRWAMJAIZFUJRVLOHOHESVSLMUPNWPCHKQBFVRWOBDSXMEHQKCBMUCPCJMGBNIWIYZDGTQNVTEVMYEYCMFUZVPPKDAWMNOJGTPLBEDOQVXUQVQEBSFEUKYIOXHRIBFTDUZHXKTSZWLOV");
    tmp_msg_0.vnamespace.assign("XPWNTSWMYHPBAIJMVDOWZDLVKHZSEHQUGPPJYANQNEQL");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FLCDYNOSLYHVRMNYSTGOKEIQTLADWZVWLHZACUCDIXNAKEFFZXDWGQLVJVAFVINXPALNKUIWTRQBADXZELQENGDAODRJBEYENRUIMRCPCRHBNPUGTFNKIMPXCVLWPIJMSXSEBZQGEKSYHZSTFOBNPHQAWRHGKJOMYTPJPZUCMKQFCUUPBFHYWAHGKJGGEOXTODXYEPOLZBDJFVMRISRYICYFBKQGZTVBOTVBHJWOMLSTSMMRADJKCS");
    tmp_tmp_msg_0_0.value.assign("HVLEUOBJXCJEYOERLJTQEEMJKBTZZQKCUAGPQMBMHNDWUVVMUDAFSOKSMYAWIMRWPFKTMHZLPNWMWYGFBTOOQBGDIXOLCCSKQDOVWVHRGKDYXLPLRGSTZRFBLAIHDYUBAHLSIPPLYETZGHFMJIYTYZKCGQSWQDFAKXZVCGXSDVZJANXQTVAECKMKUFV");
    tmp_tmp_msg_0_0.type = 46U;
    tmp_tmp_msg_0_0.access = 203U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("QQLRHOXZPOYTAXNZFVWLWVLPYRMQWVGVTDFGMRJBC");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("CRAPDBXWQGMJTPWAGEHHPHLZVDMRJCLHYRQOONVSTMKINRUFVHXQTEQACRGWTFEAEUOFRIAPBFZGRSQCBIEWZNZKCXSRNSYHNDXFGXUAFPYBVCDNLYRAJSKDBJGBYDMJMVKCLDTSUIVYWAEQPO");
    tmp_tmp_msg_0_1.dest_man.assign("QEXQTAQGOQUXCSAHXIVNWZBNBXXCFPMNEJYQCGIWGCTFNLEETATVGIASHKPRDBGCOVSBZJJLLDHRYLKKCINOHFILWONBLWRISJLKRQKYKLQKBYUSDVRTYXFYVDCIVWWRNZWJUCMZYIMCNOZMXBMZKUERHNQQDJTFUTPSYAEVOOWZRFBZPDEPMHDPRODBEFVRHKVMTUAAEWSJZT");
    tmp_tmp_msg_0_1.conditions.assign("OVXYHGGLUZKWNXMESJTYMKJWAOSHIMTFXYMCYVHKRJHFUECACYTYQZDUJWVUGFIXBQJNRHYUTBOUNEQPRHMPAPPYIABTGHBFDMCJRFWSOVCZSKPZLBRAZLBNPXDQQVEUEMDYWWJBKSCWZILOZWWDHTDSJOVIEC");
    IMC::SetThrusterActuation tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.id = 120U;
    tmp_tmp_tmp_msg_0_1_0.value = 0.10814518932563166;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
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
    msg.setTimeStamp(0.040500590975955264);
    msg.setSource(63906U);
    msg.setSourceEntity(210U);
    msg.setDestination(14164U);
    msg.setDestinationEntity(137U);
    msg.command = 106U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("AIIPSABCMNZCIMKXEYFK");
    tmp_msg_0.description.assign("AVWTSYVRYKJSSSGSDZLRZYCWHKEUTUZRQAROWBPIUTET");
    tmp_msg_0.vnamespace.assign("GDNXUJLPVHKTNBUGMJJCXEKVMEXIIPUIOIIZRKFLSHWMVUQORQOCMOEOPLFNULWZPZEPWGNKSEUYXTSADNDKRSTFGJNFFA");
    tmp_msg_0.start_man_id.assign("VWXIJXZYROVPOIHHISRYCHZOHMZMPKUSBFTPLLHMJKQCJARQERAFBVSIADHOKUXOQSAIPNLQPYNYCGNDRJOMNRSNYEWGHYGCTTKJYTNLGSSWVBJFFHTTDUKWTCMBNRAUMZEGUQKESOOXYCRWUMIPUCEMVMFDVR");
    IMC::StopManeuver tmp_tmp_msg_0_0;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.6548890705482686);
    msg.setSource(21083U);
    msg.setSourceEntity(67U);
    msg.setDestination(25847U);
    msg.setDestinationEntity(242U);
    msg.state = 35U;
    msg.plan_id.assign("QJZNEQABJXSWLAXBJKTIOQMNPKXZTVHMUZFAVAHYJCDCSFVLJLRHDUMXNT");
    msg.comm_level = 10U;

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
    msg.setTimeStamp(0.014906743895341412);
    msg.setSource(20038U);
    msg.setSourceEntity(198U);
    msg.setDestination(7265U);
    msg.setDestinationEntity(125U);
    msg.state = 148U;
    msg.plan_id.assign("NDPGXVUCUJBPQNWQLMUUQWDMHGDIIBYFERASPEAFXWKOSOHJBNZLZLGFLELLSYBZTCNPOZWYWHKDMRCYWCKMUBJXOGHTK");
    msg.comm_level = 97U;

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
    msg.setTimeStamp(0.41765823433039495);
    msg.setSource(49605U);
    msg.setSourceEntity(195U);
    msg.setDestination(43691U);
    msg.setDestinationEntity(90U);
    msg.state = 175U;
    msg.plan_id.assign("HPKKSBDKQDKPBSNYIEACKGNGFYHHBRAJPJUIIAWDWXYXXSMBBRVCEOEEMBVHMSHCFCSAHJ");
    msg.comm_level = 166U;

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
    msg.setTimeStamp(0.07747280543903656);
    msg.setSource(64938U);
    msg.setSourceEntity(52U);
    msg.setDestination(50685U);
    msg.setDestinationEntity(106U);
    msg.type = 200U;
    msg.op = 69U;
    msg.request_id = 39098U;
    msg.plan_id.assign("BIEUZGMHYWVAGLJNQXRTDJZHYCLJXRWTNMNYXSCOKIKJENATBYKDPNHHQMDRAMWGCKPEFO");
    IMC::UamTxFrame tmp_msg_0;
    tmp_msg_0.seq = 23522U;
    tmp_msg_0.sys_dst.assign("RSJLCVWXVZROKJJHKCPLRBTKIBBXMXRJQCEPMQJOCFAHKWGZDTZHNEKHGYUSBITXMOBDXJYZJLAAVJVVJSKFTUYQZTJIWWGUXNCLIZAYEROSHHHDQUYKDENXSNUDRQUSWUTFQNFBWKRDPAMCVM");
    tmp_msg_0.flags = 117U;
    const char tmp_tmp_msg_0_0[] = {123, -108, 119, -4, -6, 72, -28, -98, -32, 91, -59, -117, -101, -54, 96, 80, -119, -39, 11, -65, 90, -89, 54, 33, 30, 34, -118, -71, -29, -56, 94, 23, -26, 18, -33, 36, -91, -59, -95, 86, 20, -72, 106, 35, 57, 99, 73, 5, -97, 68, -43, 104, 98, -21, -125, -43, -37, 35, -110, -44, 19, -100, -96, -63, 69, -2, 43, 91, 18, 49, -31, 45, -61, 68, -71, 56, 34, -60, -37, -8, 27, 15, 37, -96, 65, 9, -106, -75, -48, 125, -9, -37, -6, -75, 58, -69, 55, -64, -57, 110, 111, -128, 81, -110, 86, 121, 96, -88, -88, -21, -3, -55, 75, 33, -33, -49, -38, 2, 122, 110, 47, -47, 47, 19, -81, 103, 47, 2, 111, -21, 49, -126, -124, 120, 92, 111, -71, -80, 5, 109, -60, -99, 35, 10, -96};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IKOKRXDXTXXLYMCTPVVTOFNDYNRNDZYHWGVBKDCTEPBMCQIGXFCQGNIOSAEQSZICFNLEFBYXZYVYXASRFOSPZFTTHWRQWSUZLDUDAJAIZOHTOTWHJYXGCWSVMMGIUBV");

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
    msg.setTimeStamp(0.5928781518857813);
    msg.setSource(28263U);
    msg.setSourceEntity(201U);
    msg.setDestination(37735U);
    msg.setDestinationEntity(204U);
    msg.type = 97U;
    msg.op = 175U;
    msg.request_id = 4507U;
    msg.plan_id.assign("ERFUTFGVEPFEQQGDJVQMNPOSHVCBOGYJTEYRJKURJGKMFOMKCHZXYMFXACHONUDOLATUHIGDFAIETIOXCPBZXZPHOZANMHSLCKDHQIXSBNREFIUBCGHTXKVDPQYWWRFKQGAWCIBVDLVILNEPLVDAZBLGDQWJAVS");
    IMC::LeakSimulation tmp_msg_0;
    tmp_msg_0.op = 30U;
    tmp_msg_0.entities.assign("XVCOJMKEKTBZLJXCYKLYTKABMYGQDJYKCZXZGSPEPDVDRVLIFGDYNHPVQEKLWBBQGTIP");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SVYSYFTCTKKAINSGOLLOUAAPDOYMESQBLMBNDSMXRHHCFDPSZTEJFXHZQVURCWDDNIJNCIBDMOUQILGWRWJRKAQYVRJGOFIFNQZMIQBXRKCIRAGXXVUPBJCXELUGRAGOGNTQDBKMAKQNSEVPPTWAPSJEOBEOUJMKYDTFPNEXGKKREACFCHWZ");

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
    msg.setTimeStamp(0.8886386202776313);
    msg.setSource(22924U);
    msg.setSourceEntity(167U);
    msg.setDestination(17495U);
    msg.setDestinationEntity(163U);
    msg.type = 166U;
    msg.op = 22U;
    msg.request_id = 30865U;
    msg.plan_id.assign("IKNSBAUHJWOPMFQUDWBERITGUKVYGNUVYBBWMVVEOASDJBXPMCVPBYIGSMQANTEHAFRJILKZGANEOPHSCVEDOLOBSTWIOEQJNJXYBVFRMZIEQQLQMOHNXWXKFJC");
    IMC::Target tmp_msg_0;
    tmp_msg_0.label.assign("RUKMYOPNGYWRXIFQCWHUJEZJNJQMMCTCOYZBXXOWVSNFHNYLXIMDZWHWAFAGPIIGFJTAACZMPVSBGVEFLSDVXRKHOVKHDRLTNUSJOGSCZFLDFBWXBEASFYNYUBGABJI");
    tmp_msg_0.lat = 0.9838190950493483;
    tmp_msg_0.lon = 0.08938902320267761;
    tmp_msg_0.z = 0.8020795875918268;
    tmp_msg_0.z_units = 108U;
    tmp_msg_0.cog = 0.7766992644173788;
    tmp_msg_0.sog = 0.7710583892599318;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JLFWRCNTNQVHHORPQLYEYLVCPOVCBEEYJTOXHEGAAGWSMTLVFBTCIUUHUQDDMECJSGOXGOMOKAFIPZVWHJNLIHCNLZSIHFREVHVWUZAPBDBTNGRFNYKTNJEXNDUQMVYBWCGBZEEOIRACAFVPUSVTXKXNHIRSJGCJZOWRTQFQ");

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
    msg.setTimeStamp(0.5194649966529802);
    msg.setSource(55539U);
    msg.setSourceEntity(35U);
    msg.setDestination(47445U);
    msg.setDestinationEntity(153U);
    msg.plan_count = 64847U;
    msg.plan_size = 721314785U;
    msg.change_time = 0.33615908848822196;
    msg.change_sid = 47389U;
    msg.change_sname.assign("VFHNNSFQBMMDFOBVDIMFXSGRTNZYGHYGJBXZPOEXOBJBWKZCATDJSFOVDEDFOTSHHGAMXSUOPUGMTREQWALYC");
    const char tmp_msg_0[] = {-110, 18, -41, -98, -92, 20, 48, 66, -123, -21, 92, 91, 4, 67, -30, -121, -53, 123, 63, -2, 21, 23, -96, 117, -50, -113, 30, -10, -65, -35, 103, -43, 31, -116, 57, -79, 0, -27, -93, 33, 64, 111, 84, -76, -97, 98, 46, 41, -19, -15, 107, -96, -4, 110, 79, 27, 120, -34, -121, 17, -14, -54, -114, -25, -31, 90, 68, 78, -77, -85, -65, 96, 119, 107, -6, 70, 53, -41, -98, -23, 59, -32, 10, 31, 65, -54, -75, 125, -121, 67, 66, 87, -11, 17, 52, -64, -107, 92, -83, 75, -10, 114, 126, 34, -76, -33, -103, 16, -14, -69, 90, 43, -4, 106, -80, 100, -99, 66, -43, 50, 79, 32, -85, 92, 33, 37, 120, -36, 114, -48, 43, 113, -52, -58, -85, 17, 84, 39, 25, 54, 54, -106, -34, 76, 11, 56, 100, 73, -91, 90, -103, -27, 48, -96, -26, -121, 72, -50, 80, -67, -59, 123, 50, -18, -64, -74, 103, -116, -82, 73, -5, -13, 7, -92, 98, -18, -90, -85, -115, 116, 58, -69, 36, 12, -86, 97, 58, -23, -72, 55, 46, 109, 118};
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
    msg.setTimeStamp(0.600853901339046);
    msg.setSource(50082U);
    msg.setSourceEntity(67U);
    msg.setDestination(12233U);
    msg.setDestinationEntity(66U);
    msg.plan_count = 42597U;
    msg.plan_size = 3556543108U;
    msg.change_time = 0.6631523253174411;
    msg.change_sid = 34395U;
    msg.change_sname.assign("KVAUUZJGEMXMPJIFMTBDPNCNIQQCLTYGMCMLVWYHRDTNUPVJSIFSRONONABEIHPXJUVXGENTEPFWEDRIUQMJZROQBRMOSCMTKSOSLZTEBXLWBJOLAKXQDLRPIZCPDDYGYWQZCEEHRWWKEHCWHBRFAQBGXDSFNAOUYCWKIZOOAXGWPSJYR");
    const char tmp_msg_0[] = {21, 104, -66, -7, 55, 90, 30, -60, 57, -114, 31, -103, 51, 34, -35, 68, -37, 113, -63, -58, -28, -71, 29, 79, 110, -115, 27, -81, 121, -124, 122, 61, -36, 27, -54, -107, 64, -53, -103, 60, 79, -13, -100, -19, 81, 58, -59, -86, 105, 91, 115, -46, -109, -62, 26, 60, -14, 48, 89, 64, 106, 63, -39, -73, -123, 23, 82, 52, -25, -6, -23, 16, -112, -105, 105, -40, 87, -36, -58, 78, 102, -102, -109, 5, -58, 99, -106, -22, 21, 116, 86, -31, 92, -43, -37, -127, 108, -27, -22, -120, 33, -76, 99, -73, -106, 54, -20, 33, 71, 103, -77, 66, -64, 66, -44, -47, 74, -55, -60, 8, -95, 47, -95, -81, 119, 68, -23, 73, -106, 86, 90, 31, 96, -32, 114, -79, -127, -58, -73, -21, 28, 61, 72, -31, 105, 17, -64, -42, -53, 66, 27, -109, -84, 89, 75, -74, 11, -117, -58, 77, -72, -11, -40, 0, 32, 115, -83, 38, -20, -89, 43, 72, -79, -69, -42, 73, -30, -50, 88, 95, 71, -55, 30, 37, -115, 61, 11, 80, 120, -117, -24};
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
    msg.setTimeStamp(0.5039840617233912);
    msg.setSource(4291U);
    msg.setSourceEntity(160U);
    msg.setDestination(62253U);
    msg.setDestinationEntity(85U);
    msg.plan_count = 3808U;
    msg.plan_size = 1336928959U;
    msg.change_time = 0.5930180029354132;
    msg.change_sid = 43306U;
    msg.change_sname.assign("ZGFZSEHOACMGIHMVGIMYWYCGKOPYXRUHIQIDRIPOQXFBUDCXEHOKQLVKOYVPBFRBVUBTGCFQJAZSNQVJLJCAOXJWV");
    const char tmp_msg_0[] = {31, -119, 14, 55, -62, 59, 58, -46, 30, 101, 14, -86, -9, 36, -97, -75, -110, -4, 17, 125, -98, 10, -13, 72, 49, -59, 120, -91, -37, 12, -102, -93, 38, -52, -48, 59, 68, 28, 18, -48, -3, -116, -29, 26, 87, -15, -87, -8, -114, -22, -128, 115, 32, -30, 37, -15, 75, 99, -35, -105, -113, 77};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("CWWCMHRONYKSIBEVEZLJHCQLGZZYXCIOPRTAFWYRGDDJDUSYRVXE");
    tmp_msg_1.plan_size = 3606U;
    tmp_msg_1.change_time = 0.13468522627907753;
    tmp_msg_1.change_sid = 48548U;
    tmp_msg_1.change_sname.assign("DYWGAXYUZN");
    const char tmp_tmp_msg_1_0[] = {-49, 5, 73, -50, 116, -3, -109, -26, -30, 65, 116, 23, -80, 66, 29, -27, -96, 89, 5, 38, -8, -120, 53, -5, -80, 121, 43, -123, -6, 41, -4, 92, 44, -118, -3, -55, 10, 93, -8, 55, 56, -107, -73, 4, -5, -114, -26, 104, 120, -81, -13, 22, -39, -101, 82, -67, -102, 93, -26, 46, 8, 13, 28, 72, 120, 77, -106, -2, 97, -97, -25, -107, -75, 60, 119, 104, -88, -92, -12, -100, 61, -118, -4, 87, -47, 120, 47, 90, -26, 108, -36, 60, 68, 8, -106, -76, -89, -126, 28, -29, 52, 9, 13, 3, 41, -108, 14, 91, 102, -118, 9, 58, -47, -84, 94, -83, -118, -21, 28, 109, -22, 3, -80, 10, -30, -116, 2, 123, 17, 52, -75, -45, 52, 37, 72, 24, 0, -105, -42, 38, -102, 23, 78, 11, 58, -97, -37, -13, 47, -106, -62, 108, 117, 94, 83, 67, -128, 67, 69, -109, 23, 90, -25, -22, -116, 112, -47, 14, -60, -85, -23, 46, 97, 75, -88, -83, 27, -104, -57, 52, -119, 74, 67, 40, -98, 2, 36, -101, -89, 113, -85, -55, 64, 50, 43, 47, 101, -63, -44, -6, -15, 122, -32, 55, -18, -28, 25, 64, -118, 62, -14, 76, -17, 73, 97, 126, -67, -23, -48};
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
    msg.setTimeStamp(0.8926948682742678);
    msg.setSource(26906U);
    msg.setSourceEntity(201U);
    msg.setDestination(62814U);
    msg.setDestinationEntity(112U);
    msg.plan_id.assign("NQCEVMHMSSEADTDMOEWUEGXKYZGXRMBYNIUERHPHINQ");
    msg.plan_size = 20914U;
    msg.change_time = 0.288040303233725;
    msg.change_sid = 41962U;
    msg.change_sname.assign("AHKLFFGOFEAODJJDHTOOGWQHOGCGQADHKSAVUUNEQRLIZEBZJUBVWYSDCXNPSIVDPVUVTZTRXYLOECIMOFPPAEDHICSMBBNHWUGAU");
    const char tmp_msg_0[] = {-24, -50, -20, -10, 73, -68, -2, -38, 2, 99, 67, -52, 68, 72, -12, -81, 7, 44, 107, -98, -56, 91, -72, 92, -90, 10, 77, 106, 118, -110, -34, -97, 76, -113, 81, -34, 20, -90, 46, -97, 110, -35, -94, -85, -119, -2, 2, 125, 94, 84, -91, -63, 69, -22, -3, 18, -99, -89, 125, -52, 101, 44, -51, 36, 91, -8, 70, -4, 116, -55, 71, -30, -127, -79, 56, -114, 29, -13, -100, -19, -115, -116, -72, 70, -23, 20, 123, 16, 51, 118, -113, 121, 112, -52, 114, 28, 33, 72};
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
    msg.setTimeStamp(0.11615961642076711);
    msg.setSource(20343U);
    msg.setSourceEntity(24U);
    msg.setDestination(37321U);
    msg.setDestinationEntity(186U);
    msg.plan_id.assign("OVPXANSVRATBKESPDZFUWPKABMHAWICJXLKDDZYESUYKGMTUMBCJRMJVCXKOQIEZHZQKGHXOLOPGNGUYCSCIMOFFMOHPELFHKYGDOZUWEK");
    msg.plan_size = 23550U;
    msg.change_time = 0.305730690423778;
    msg.change_sid = 63682U;
    msg.change_sname.assign("NPBTEQFYRKJFAOFEAKNQFXSNMAXZKUDDPMALRHBDEGDAPYSLTUROBJTIRPQMSJMUGNBJDVAWETCWVMJJEKLDVIZHHYXXNKFWUPZWBYGWSWBIARZ");
    const char tmp_msg_0[] = {-110, -40, 43, -22, 100, 24, -85, 44, 94, 27, -60, 97, 31, -26, 61, -72, 64, 15, 63, 11, 100, 83, -59, 2, 7, -42, 91, -93, 83, -107, 78, -34, 44, 49, -50, -125, -92, -21, -118, -36, 52, 20, -41, 17, -15, 47, -78, -50, 10, 97, -16, -1, 117, 90, 11, 29, -81, 9, -37, -118, -78, 78, -15, 61, 121, 26, 56, 94, 16, 73, 66, -116, -128, 83, 108, -30, 13, 90, -48, 56, 101, 33, 36, 39, -66, -99, 86, -87, -72, -8, 1, 61, -81, 68, 72, 62, -91, 40, 14, 61, 59, 13, 41, -90, -112, -109, 76, 48, 111, 31, -15, 84, -70, 34, -89, -127, 30, 68, -124, -101, 83, 80, -48, 98, -76, -28, -60, -123, -6, -34, 43, 96, -109, -120, -16, 88, 113, 51, 53, -45, -12, 3, 79, -4, -84, -112, -57, 85, 42, 76, -76, -112, 95, 34, 18, -62, -112, -59, -123, 74, -51, -65, -35, 98, -118, -71, 71, 93, 118, -59, 65, -68, -66, -119, 34, -46, -50, 27, -102, 9, 18, 80, -26, 89, -116, -98, 32, -5, -85, -17, -53, 45, -5, -84, 61, 1, -7, -19, 54, 57, -40, -124, 19, 55, -20, -106, 95, -98, -93, 122, 56, 67, -78, -78, 86, 47, 92, 47, -106, 60, 40, 56, -63, -36, 87, 59, 20, 23, 30, -72, 39, -8, 116, -100, 43, 75, 69, 113, 40, 26, 7, -68, 107, -82, 82, 16, 6, -80};
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
    msg.setTimeStamp(0.5957823943434245);
    msg.setSource(52942U);
    msg.setSourceEntity(224U);
    msg.setDestination(11968U);
    msg.setDestinationEntity(95U);
    msg.plan_id.assign("IDTTIFKHFCVMJDYBAOAJBMQXEEFBMIHWGUPWMGTYKQYJNJBSOYVFHWQUEXWGRCXLRJRLDAVPOJPGWCWBNGNDDLRPUVTKYLISIJZKCJPMCSXVZIZNISBATPGURHYAIQQFZUCDYPNAGASVWTOCTNKTFFXXQDDMKJOOHB");
    msg.plan_size = 26099U;
    msg.change_time = 0.7479806840631554;
    msg.change_sid = 45249U;
    msg.change_sname.assign("UNFCYXLBEMTIMMDVQIBEISZJPNDTWDQAHAGWTFOLPYDBYJEGWGOOJHCWOWUKRORWHMPGHCRUZQMMBBAKYDZHPKCTXSRKJQFELUTKEPPLOFRAFAFFQHUYGVREMUHZFGPZEDMZISUZIRVIJVIXVVGOHSXECTDBCSAMSYZONPNFGDYKCFIKPBRLSBJUUHVMCOJQNJTNXLNXXQRAOJTSLDEKLXBKVSLARNIQVYAECINQYWKZQASWLB");
    const char tmp_msg_0[] = {-37, 77, -21, -50, -35, 58, 94, -122, 26, -93, 123, -107, 20, 84, 88, 18, -24, 123, -51, 81, -109, 3, -36, -49, 119, -42, -89, 87, -37, -3, -11, 38, -90, -66, 10};
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
    msg.setTimeStamp(0.084494653149781);
    msg.setSource(31573U);
    msg.setSourceEntity(141U);
    msg.setDestination(45816U);
    msg.setDestinationEntity(124U);
    msg.type = 46U;
    msg.op = 48U;
    msg.request_id = 40636U;
    msg.plan_id.assign("GHFMRLYLSKYHZXHFRLAZKWPQRKCTZTAYQRATHJQOBVXGDFYGRFLVUCTWTDGSAFFWIHOLQQKJUIHEKEPHOETODNSPCREEYUGTUAAEYYFNNRMXVOTZIEBMVNVGSJWDHKODVODNKWSLVLAZOBXFIWZLJBRGBPGMJILSBJXMKQHXXYPLXWJXJVMKZGBNIGIUJUFZBVCPICRNSAEQDNDQBQMNJODTWCEUEMZQUKZWWMSAPDCTPCXSYRPNS");
    msg.flags = 54074U;
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("JZGWHKOOPZCOTEQFYROEKMJBMDUCYNCBBEIPRQTYLZMJDXSRTVEHQQBMSYXLJVENPXLACQLDFBIJVDLBOLGUBEYFSPAITAZTAMLUFUWNWOMQIPPOHDXQSZRPTUIIBXSVSDLFEPACCRYDHMCGKKXUNNZALGLKNVRQQJV");
    tmp_msg_0.feature_type = 171U;
    tmp_msg_0.rgb_red = 201U;
    tmp_msg_0.rgb_green = 237U;
    tmp_msg_0.rgb_blue = 102U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.4055060776971642;
    tmp_tmp_msg_0_0.lon = 0.7424519192473449;
    tmp_tmp_msg_0_0.alt = 0.9946545464873348;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BOMZREWUEPZXEQGFMSWZACPHPCRISOXAOQQMCOSATTBRXNCYRSORKSJZNCGBHJEDLIKYGZFORPJFLHFUHWTBKUZDIUMNKGPPQKJMYVLCOXNQEMQDPNWVALXWEXFXSBYUNXI");

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
    msg.setTimeStamp(0.4570881145656076);
    msg.setSource(3592U);
    msg.setSourceEntity(76U);
    msg.setDestination(25447U);
    msg.setDestinationEntity(142U);
    msg.type = 93U;
    msg.op = 84U;
    msg.request_id = 41035U;
    msg.plan_id.assign("OCGJXZPZYGXEUZLCTIQMBJBUFLMCBBTMGIADQRWVQXAJQRDFXHJTNEEMENMVYKVAWVMZOIGJWYBWBAIFPADONLKHZFLSLCNTKFTSZREVIUMYHBNNEYWTSXJUNCLGPIPGDGYACMJIDHGQIOKXQPHRRDWJRHYUIHYWTWMSXYVRBPHGDSXOZKBBELKKAAEWTOOARPHKJONICFQCXFEZREDSULNUDVFUDOZXVURQTSSFZNCGSHQKVUVKAWPTY");
    msg.flags = 58917U;
    IMC::SessionSubscription tmp_msg_0;
    tmp_msg_0.sessid = 2841526909U;
    tmp_msg_0.messages.assign("SOOAZZJRXMPKIXOHRKHHMVLQYFNILPJECGFMQBRTJBAVAILKCTYDXXARTSTCUGKFPYIUDWBPCQYPSEVZVWYYRBHEFTNRIWHKURJIZSWXNPWDZRDCLEJOUZPAOYQQULTGPJJYDUWJOUCEIDDVFGPGNFCFUNGBAGZFK");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NKUIJXHBTBHENEHMSBOZPCQAAJFGGIUNZRRAZPUTJEPH");

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
    msg.setTimeStamp(0.07103435130801916);
    msg.setSource(54153U);
    msg.setSourceEntity(65U);
    msg.setDestination(41609U);
    msg.setDestinationEntity(22U);
    msg.type = 26U;
    msg.op = 65U;
    msg.request_id = 47159U;
    msg.plan_id.assign("XOMBOHRYAGECFIVAFEGGKCJLKDZQBKBTQALTWZCRUAGQCRPYVYUCLSHQXFKWUGHOBZXDEVXZNHEUVYFZERWECXTPWCEVMJAYJPHFMNISICAUPTJNZXXLFSJQFGOXQXVYSDTIVNMURGRSIBBMDIRQKGQPFXDMUUSMLKLEATCJNVEJDJSBIYZVUZMLSTOBHWLBWUJPKGTKWNCIHPO");
    msg.flags = 17998U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.plan_ref = 1577218814U;
    tmp_msg_0.id.assign("OTGLDJETRXCPTZKYRYTAHGEYYCPQCTVDIUIHUINAXGTDGFY");
    tmp_msg_0.memento.assign("DFMMEZDCMNRGGGGIUJXAFQNCRXYTIHRJWYUOHUT");
    tmp_msg_0.timeout = 53530U;
    tmp_msg_0.name.assign("XOQCUUNBQYZWPLSEIFJAJLXVOFUFRGLYWXGOFRVNUSYASFRJEVCLKTEPLXJBPWAZNKHATMDKQMTAMNOE");
    tmp_msg_0.custom.assign("IZNSTKRIDFGVWEOMARWCBCXIQWYIRXEQDDQHQHJKCEWNKCFOLYCXEKKINQHMSYHHAMPQFKSMGJINBGZWYVAFJZUPSPRTLSQFPOHDEMLKGUUTNWXHQVAFZAJSZBQUJYOUBZLNIMRGOSMFXPPNIRJTGKVGMDDFEUALRFBCEEECPXZTCUNUWUOROBSZYKHTVLPJODVZROUWYSNPEMTAAGBJVDXLZQBBGAL");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("LERPYVICMQFQLLZMUEXMXJCOEXQQSTUXXCNRD");

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
    msg.setTimeStamp(0.39111230493493654);
    msg.setSource(13895U);
    msg.setSourceEntity(12U);
    msg.setDestination(57256U);
    msg.setDestinationEntity(183U);
    msg.state = 234U;
    msg.plan_id.assign("BXFRJWQPTHVUDDVXMMUDIZPYIJVFZXBVAQJKCNSMZFKMKVYBIQUANKBOVGZYHGOOYFTCNHSPMGPFRLHOIIZPQZZXGPJJGAYIMCHRKXJHLSDYOCENRFPBULETQLUTXO");
    msg.plan_eta = 2065425559;
    msg.plan_progress = 0.9396121451000605;
    msg.man_id.assign("SORHNVDMMGMWWJWOQSKLPZFLCSMKIZMRCBKCVOSAVPNPKBXOETHHTUXAZIWOIVVEKFDSYBCAZGGXBEYYFWDXJPVENRYFYCNZRCGNTQLXVIZOJYEPGTHVXZCDABCTUUEQAUAJHYFSVPQVFKWDBJODXCKLRAZNGQTBBYBLGOIXKLRLNDHMXIDKQPPNCBFRFWGMTGPJHFSNSQWRHLAMRUHLKXULJYQUMEZITPDFZUOGTJYSEEUANASWTWOJDMEUR");
    msg.man_type = 47666U;
    msg.man_eta = 562678137;
    msg.last_outcome = 246U;

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
    msg.setTimeStamp(0.0419502446306067);
    msg.setSource(19672U);
    msg.setSourceEntity(227U);
    msg.setDestination(58815U);
    msg.setDestinationEntity(40U);
    msg.state = 165U;
    msg.plan_id.assign("YXBZVZNRXFQRBGOWTDZQYOKNDIFGCSOYOTLZZFQWQBVCRORHTNDZDEJETWGQAUUEJSJEVLLOINSKPWBAMUAVLBFLVXPDEUUFTRFVXQJMKDIKGEXHKMYWLGLDGMQZFTAUECIKMZWKILQPUCYJLCODPUAWVIHNSHPOICBSVWZNNHAXSFHFCJNPERQEHTMKAESRJBGSYBYJCOLWKMCYKQVSIFJRHGGWJ");
    msg.plan_eta = -620104252;
    msg.plan_progress = 0.10856974113146167;
    msg.man_id.assign("ETGRMMZHWHIAFNRTDCXUBVPMCCALEDUFESNMUKJCXUGLSUQGAISXYEGDCLQWRDKOAQDHJPMPOYZUGSNAZCJBGPFKHXVJJFLLDIWWTJBIVEZPMQFTYHTMFZTHQXPHLMFHBOLVQA");
    msg.man_type = 20197U;
    msg.man_eta = 235126337;
    msg.last_outcome = 167U;

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
    msg.setTimeStamp(0.1674227984467943);
    msg.setSource(63385U);
    msg.setSourceEntity(193U);
    msg.setDestination(28209U);
    msg.setDestinationEntity(147U);
    msg.state = 142U;
    msg.plan_id.assign("GLBFVESDOKMXPFYWHDIXBKQUSINRSIHHPQATLKNAOTKEEBEEPKRBFIGUCXCVUVDALUWKYLTTQJLWXMFGXFZJDQAGNTMNLYMMCNMZAFMLSZ");
    msg.plan_eta = 425062953;
    msg.plan_progress = 0.35727800444391455;
    msg.man_id.assign("SNMBDWKEEAIYKMRHOKCIMN");
    msg.man_type = 21671U;
    msg.man_eta = 223194213;
    msg.last_outcome = 1U;

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
    msg.setTimeStamp(0.39533102811119203);
    msg.setSource(14184U);
    msg.setSourceEntity(56U);
    msg.setDestination(54029U);
    msg.setDestinationEntity(74U);
    msg.name.assign("ZAWMQVFZMPFBKYSWXDGTWPNLTHSYGBCIFYRNZYAMZXSJKCJHOONFXLAOQHWZROTGYVTIJHSTMFBGRYJLGUOMQAJBDJNIDWBGS");
    msg.value.assign("ZPUMEQTGXSFLFHIUZUFBJGKGMATCALDYWOOVZBWOCSZNFVEXRXTLBQYZOHVTHGNXQQLMQBTRXQCGQLRNMCSVMVPTAPEJJXSWHRANNJVFNGWODYOZRKEWDILFBUUASWKLAEZEVIUYRIQYMMOIIUCVSETJPPAHGLUPHJKYSZLCAUKVCIYIGP");
    msg.type = 18U;
    msg.access = 244U;

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
    msg.setTimeStamp(0.23950936887524876);
    msg.setSource(63954U);
    msg.setSourceEntity(194U);
    msg.setDestination(34756U);
    msg.setDestinationEntity(139U);
    msg.name.assign("BLNCNGDSQUNETLYHBPPMCLXLZWKSTSABTRZGANWTGIZISGDJFIUMQICMAHECRKUFMSORQWAQELYDYBMHUBSFUFFAEHVXQIFRXXBYIUHGXFDLRYEDOBGWYAQOJOOYDPKWQVRVSVZHFGWZPGXPWJRLYMPTTEGELKPTIWCAJCBCSXZNVNDZHPJFAUKRJQHIHAQNONZIIPYUEDOVEAOPSKLZLTGXKCHVKWVJVVR");
    msg.value.assign("JJZOVGZRXWGLTTBCJNOPKGFHCXBZLGMSLEYSXYQOWSZBONXPURAESRWDZUTHHVUQRBMFUUUWIMMUOBKGINLIQPMSZNQHVKAILTGTXCSEBWVKANNJVIZQCGYFMNDLFXIJMWHZOSHERQVRPBAJSRCUSPAMYIYJMDTPFOYKUVFXWBINFZJDQQKYDOMLIKAQEAJUPEIOSCAVOCBEPECE");
    msg.type = 69U;
    msg.access = 55U;

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
    msg.setTimeStamp(0.6999166634501418);
    msg.setSource(64992U);
    msg.setSourceEntity(65U);
    msg.setDestination(41904U);
    msg.setDestinationEntity(245U);
    msg.name.assign("EKORFUMRKXAIXMKJGFASNQUYSFDBNYMABZJEBKQCTPVRJNCGHTVUYPRIXRZZBCTSRCJOTGSKWQRPXBYOHFYYRFTPCAMQQNZVONVXUCIMIBUNDEGQWPOVYMFUUHTDDXUTAQCVPZWWTWHJOKZHGMFZLFZNXGLOAJHWUFCJLEDEPQSIVTMGNROOFICDSNLJILHPPTAHEMKSXLBDAYCVGGAWGBUWILDVANJWHZYZBSKMVSQXEDYHKD");
    msg.value.assign("MUXTAFPDABXYKTNBYWIAOOKUSSDQJCKLVIBHYZYTICMCSPEEKVYPGVUIQCCZFDTZWRCXUMP");
    msg.type = 186U;
    msg.access = 169U;

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
    msg.setTimeStamp(0.3095508787750423);
    msg.setSource(27184U);
    msg.setSourceEntity(252U);
    msg.setDestination(21376U);
    msg.setDestinationEntity(5U);
    msg.cmd = 21U;
    msg.op = 29U;
    msg.plan_id.assign("FCBTRSJZVDZC");
    msg.params.assign("BDDQVXEMFAXTHHICORKBEFQWCVFNGFJNQEUUDTKXRNPFADPZVBRJECHNFQJTMRIYRRYHXMKNJGBBYYLCRPRG");

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
    msg.setTimeStamp(0.9856715851686134);
    msg.setSource(60989U);
    msg.setSourceEntity(199U);
    msg.setDestination(41862U);
    msg.setDestinationEntity(43U);
    msg.cmd = 99U;
    msg.op = 110U;
    msg.plan_id.assign("YIEAPCRDKREHXLNUSGRSMYPHCGRUFTQEINHPQOAXOJLDBQSDNBKKPSMXFTDRQXTMAFUWNZPYBEHXYJLZCZY");
    msg.params.assign("ZVZXEAWWCYMMTXRDQKXCSOBIYQEMGLXQCYPHVDMUJENRSZHBPSNTLULLZOJDCJIUTCAAKRQJFMQSVTZPLFAXWPGNTYFRWEAQUVTXDXEUDDJGKHVHCYWALVOBJHGLAOIEFLOPQVZKABER");

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
    msg.setTimeStamp(0.49353167154838884);
    msg.setSource(33118U);
    msg.setSourceEntity(168U);
    msg.setDestination(22130U);
    msg.setDestinationEntity(85U);
    msg.cmd = 47U;
    msg.op = 233U;
    msg.plan_id.assign("WWUZIZQUCEFIDBYNDXIYFXFFIOIFLIZBWHN");
    msg.params.assign("JZFRQGXKMDVYGIKOMSATNKKNJCYEYAZWVVLPUBLYSUFRYNXYVPOUNJZXVLXOUNRUEJZQHIGGKRLGQBMAVHDKFAUOFURPYGEIXHUNBOHQIWAMJGTEPHBTZHWYGCCJFHWQJLTVWFSOSSDPBLHZLWIVMKLCBTBEFDEWGYACZVOXRKLMCIAGXISQTRJXIWVCTISMQRENEZRCUKEJTPFBOKFSYPNTWQJMMDDABIOODFACHQUSNHXDTRBSQP");

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
    msg.setTimeStamp(0.3474417664515397);
    msg.setSource(44376U);
    msg.setSourceEntity(201U);
    msg.setDestination(35398U);
    msg.setDestinationEntity(128U);
    msg.group_name.assign("KVVWDCOMDSLZAOGAPFDXA");
    msg.op = 6U;
    msg.lat = 0.19505143413193227;
    msg.lon = 0.7380495182250494;
    msg.height = 0.2382621912704067;
    msg.x = 0.5543910160305487;
    msg.y = 0.31632146262557315;
    msg.z = 0.7440409423207146;
    msg.phi = 0.5212901697381286;
    msg.theta = 0.6770271505001729;
    msg.psi = 0.9082510276921626;
    msg.vx = 0.23345247965628713;
    msg.vy = 0.1710714342811861;
    msg.vz = 0.11319930323009508;
    msg.p = 0.3741377506774606;
    msg.q = 0.03270915437595734;
    msg.r = 0.28788251074832194;
    msg.svx = 0.31763025671588296;
    msg.svy = 0.7172173067324318;
    msg.svz = 0.30320182152336705;

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
    msg.setTimeStamp(0.6760318694312825);
    msg.setSource(41712U);
    msg.setSourceEntity(193U);
    msg.setDestination(32992U);
    msg.setDestinationEntity(175U);
    msg.group_name.assign("LFVXCYSVQVEAGJQICVFUEHRVVURUQGALPDLMWAWLSNNROUTOCDYKTZYPNDGVWNMOJPXYKSGTIIWVTSBWQMZZRUNSIHALLOIMQPCYLJYJGHZDJZQXRSESWNBRMEEGCSMHKXUBQEQMHPTKBLSMDWZPRKBXAWKUYZVVJBOTFCWYPKKWDOIBTEX");
    msg.op = 185U;
    msg.lat = 0.1645192496190523;
    msg.lon = 0.11387527446362877;
    msg.height = 0.5809457765251369;
    msg.x = 0.8057123733356242;
    msg.y = 0.9242488681384693;
    msg.z = 0.09933917340243581;
    msg.phi = 0.7377265885385957;
    msg.theta = 0.14976230582950656;
    msg.psi = 0.46202031041832226;
    msg.vx = 0.8797485433113161;
    msg.vy = 0.455734339812774;
    msg.vz = 0.1824299751766989;
    msg.p = 0.4591414690769159;
    msg.q = 0.11277629226340236;
    msg.r = 0.625787996254532;
    msg.svx = 0.42507285532428607;
    msg.svy = 0.6662442840130894;
    msg.svz = 0.8694615365504289;

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
    msg.setTimeStamp(0.8547359191429851);
    msg.setSource(21503U);
    msg.setSourceEntity(45U);
    msg.setDestination(52122U);
    msg.setDestinationEntity(224U);
    msg.group_name.assign("GZVPJYUOOGEJWDFDVMXPEOIGHKHRSUGFLNJPCLXAFWETHUPRXKNJKAGPBCPQNZ");
    msg.op = 69U;
    msg.lat = 0.401261251571266;
    msg.lon = 0.527897904890337;
    msg.height = 0.9568288166607044;
    msg.x = 0.317191255721175;
    msg.y = 0.9091929503572135;
    msg.z = 0.3220683318617896;
    msg.phi = 0.06515875814665606;
    msg.theta = 0.8959810882321734;
    msg.psi = 0.6524928932970856;
    msg.vx = 0.6564411083781505;
    msg.vy = 0.25853509974335676;
    msg.vz = 0.03423525027834473;
    msg.p = 0.41184794396936786;
    msg.q = 0.6626547004135385;
    msg.r = 0.17460987003477624;
    msg.svx = 0.7191899319204297;
    msg.svy = 0.8974268144130141;
    msg.svz = 0.009570677547964368;

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
    msg.setTimeStamp(0.541037110076851);
    msg.setSource(30917U);
    msg.setSourceEntity(15U);
    msg.setDestination(9223U);
    msg.setDestinationEntity(211U);
    msg.plan_id.assign("EQXKVOIUYTVXDDTNRMECLMENNDIPWPYLNTRZWUREWXPELXSCSFVDRCJOBBXZSYJMBWBFRBPJIHGUSSKEYWITAGNZODFJFBPXZQEYQIZMZKECFMNQSFPJCRQCALMIJKHQHILNDBPLQSCHGVUXQUGHXOBHWTMOQTPWZWOARCVYFGZOMUABSYNXEVKDKAYLAPNDUIUJOIWMTNFVHSUA");
    msg.type = 115U;
    msg.properties = 249U;
    msg.durations.assign("OSMSUCXXARBHOLDXVDPOISELAYNNXUJJEOUIVWKEMWILNRYHBBFKNLNUDKABAQUOGFDMXIWSNQWZAFRHJKBEFWLCYAVTQOTBOWHGRDUPXKIWLVTBEGOTDGYCLMETCJZCVQCWFYCRWNJJVPZFRFQFHUPGDYOTPXBZIKVHXLJGGZJZTHPUHXOGNIDPMPSGTSQIQLIEREMXDYNCEUTNHZRAQGMPEUMHYRSZBLZFKTVMSDWKMJASZ");
    msg.distances.assign("OQFPKASZPEWBFPGDBRFSVNOXUJGXANCMK");
    msg.actions.assign("UXQKDZIXEYYENVEHUBVRNYCZCTAFTGSUHAZQROFOISHNOCLVZSWZGJZFZVRHPQTBEAAYHXDWLABMGIGVCYQUNJKPLFMRTMJHHSFSGCQYDWECTKUBMELFFVOIIHJURRTNBPMTNKQSXRLLWAKLCJDPPUSBVSWNKMUXQCRVVMBWBNCEQ");
    msg.fuel.assign("XDBZIQPWGFYBLQRKJXWDHGDTPZFK");

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
    msg.setTimeStamp(0.22481348037411097);
    msg.setSource(10954U);
    msg.setSourceEntity(147U);
    msg.setDestination(40727U);
    msg.setDestinationEntity(125U);
    msg.plan_id.assign("TWGIRVFUXVKFAKABCSDTOELRZDCLBVSCOCLQDZEDVITCPJCQKDVAYEOSSFUVLPDTGOQSIEVKJETUOTPPXAXLPUAUHREYZOYHIKBOJHPQNNAOWPMRFG");
    msg.type = 10U;
    msg.properties = 130U;
    msg.durations.assign("HDVLMSYYWU");
    msg.distances.assign("PPPHBVRGVAKVNSKXLMNZKQAIOQBGPSPEIZJOMZXKDDNZIAFWUTUNJFARSEJIDQGPQKQSJHNCZNXWEJNYKTEXGXYVSRPWGHHTYDEXSUFJRCUTMMOWGIGFHYOHLCZVTEBBLYFCBWXRRIFETWITAHHVQCIDYZXKYBOKASUSBZQWNDXLOAFFYICAGVRLEUZRYLBLYJOMLSFKRIOUNM");
    msg.actions.assign("FPZZFGFQHGFKAYLWZMOGGKOXGSMVOFYROEQOJTGHMNVWQPXLFBJTZCMKPOMZDIEWDNIWMUXDSUBPTHVBWFKXYYCIAUAIJIEFYLRJQCESKBYOIPLCHPPSEDCSIVXURLERTRVAKVOQYUDHRHOACYXPEUJVQXFLUBNJBHHFKBMIQN");
    msg.fuel.assign("RTEPDCBILPQNKFRXEXMCSUPPJNGPOGQZVHQMTKVWEWLRXBIOFYOTIJDMQISVNWKLK");

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
    msg.setTimeStamp(0.23005626095350207);
    msg.setSource(33638U);
    msg.setSourceEntity(222U);
    msg.setDestination(35037U);
    msg.setDestinationEntity(9U);
    msg.plan_id.assign("BZJRPFYKZLMUMCJYF");
    msg.type = 189U;
    msg.properties = 12U;
    msg.durations.assign("CNYUSLILXDYEVMFLTKMLURRIJMYFPGVVWQB");
    msg.distances.assign("TIBOJWOTLXSTYHNLXOSAIWAAZAUURDMNJZVLYVQDYWSQYMDZGKWQPORKDRWSNHJDOZOXQZGNAYJIMLBHIBORRDXTFAIAFQEILAHWGBOYTPKZEWERENGECXJIHVUVCVNVCUDZBYDKZVRSYXJYMFBEZGRRMAISYDCXPBJ");
    msg.actions.assign("VMEHMJKWFGHIDJPVLKFJGMDWKJUGANRETMRPQUXWIARKPHFOINEOVOYCKMZ");
    msg.fuel.assign("RYDWKPOPMBRIUVJAGNETDXFUPTHMSXBFVBQOJRNVCRQKDGZGMJXDSJVLNZAGTKGUEFSFIPASHXXKTYTVPZCXAFIOPOYYWPLAKYWHXXEXACSYOFIFKLSGSNZTLAHMWCYBOWEMDBCWKBGNRDRHQVQQZIBECYWZAUNRSFHSUOLMQPQCNCWUIRHJYZBNTWJHDUDGYMSLJVOPLTERUHEZFMJOIEDTAPKWHNLQGVKQXKABMDJCRITGIJZELNCFZO");

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
    msg.setTimeStamp(0.4960241269313016);
    msg.setSource(24306U);
    msg.setSourceEntity(224U);
    msg.setDestination(53462U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.9114306797782086;
    msg.lon = 0.06045819858244772;
    msg.depth = 0.2729387909547474;
    msg.roll = 0.6829637514663586;
    msg.pitch = 0.7752070599857646;
    msg.yaw = 0.6290491392966412;
    msg.rcp_time = 0.3388266661970033;
    msg.sid.assign("NXULFKOFOWZPNLKRHLJHXYSUTSBHFZXOTBDGQNQQYFYMKLXTYUZAISPADNGODSBEIFHKPPIUENRUNJSRXBZHAVTOWABPRZIOSFMPXTDCGQQACTFOGBVRIDXBGJWTEORSNCCCWNCUAPIAGSTMGMLYVFGFXYKEHKRQYNCJQHDLEJGQIXPCEVYJMTJJDIWPZNRWELUWFMXSQQKVEHWYMKVBJVKOVAWSWDABMCDRLLVOBZDEICY");
    msg.s_type = 99U;

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
    msg.setTimeStamp(0.21958473843733528);
    msg.setSource(33039U);
    msg.setSourceEntity(90U);
    msg.setDestination(55629U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.9406630422308553;
    msg.lon = 0.1183489691866435;
    msg.depth = 0.4756614289320159;
    msg.roll = 0.037616026625927335;
    msg.pitch = 0.7221652903022209;
    msg.yaw = 0.6160474680882664;
    msg.rcp_time = 0.7147143089050972;
    msg.sid.assign("TDPSXQGJQOBNWEMZYETYIKOVPVGJJMJOLRHENWSHTMLZHFRGBANTPUMLGKYLIAOIEVCFJX");
    msg.s_type = 37U;

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
    msg.setTimeStamp(0.5002659284551847);
    msg.setSource(62204U);
    msg.setSourceEntity(51U);
    msg.setDestination(50426U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.3740801523986965;
    msg.lon = 0.6331218481373799;
    msg.depth = 0.05308136469570013;
    msg.roll = 0.6237501022163171;
    msg.pitch = 0.9141532384928772;
    msg.yaw = 0.7184954042615044;
    msg.rcp_time = 0.7534660900760087;
    msg.sid.assign("TVNWSKVIPEMJUAOLOQAFZOTHUEMCTFNTQMEZLGWNOCFIIAGZLDGHFHBOKEQVFFLZGYXQCNRXAYODLSJUKYCSAFRXYSYTEMOJRQRASJAIH");
    msg.s_type = 26U;

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
    msg.setTimeStamp(0.004222058454831479);
    msg.setSource(39089U);
    msg.setSourceEntity(197U);
    msg.setDestination(60839U);
    msg.setDestinationEntity(99U);
    msg.id.assign("RZDLOMDCMGWFCPNIFQPFEVO");
    msg.sensor_class.assign("XWYWYDOIIZHTUJSNUTRBLFNFRAICGKOXLJNZUBVMCBPSUAENWKPSOFELSVHGFBEAWLHJRSUCVKEHJDELYKBTXTZYWHYNTZRYPDHCTBYKRBWVAFEDEQGDWRPYOKTOQQOJXMFWUARZQMMADCQJKIGXISLFCYKSLGJVKMQIBQLTPORSGJIXFSNVEZIZUJGMOTCMJHEHWVCANNPZFAELVPG");
    msg.lat = 0.06288131711023892;
    msg.lon = 0.2109889704720489;
    msg.alt = 0.23883869199236785;
    msg.heading = 0.4919632566656259;
    msg.data.assign("QRSUYAXRIHQPNCBTJBUFNWVDIKNQZRFGBUVPMIHJLFFGKTZBOYUAIXDGBROMVELKHEGEHIIKZVDVDUEBJQVGZAYLQUAMOXTSGEWSKEPYKMHUIRIBNRQACANOSWRJYXXELNSCJCOSKBLMCJJSPPFNEOODZZYYDVTWMYTFTCZSMDAQRKGGSQWZTDWQROWFSHCPXALIFZMHHMPFPTECAUWFVJBHLUAW");

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
    msg.setTimeStamp(0.9480560321968028);
    msg.setSource(17736U);
    msg.setSourceEntity(213U);
    msg.setDestination(2923U);
    msg.setDestinationEntity(243U);
    msg.id.assign("XCYVXPEUAQITGCYXDNJP");
    msg.sensor_class.assign("UVOHZPGUDFAHTZZOSXRJSVFXEFAVAIYAUWNAAKYHJPQZSBJZCPSMJIPEILJCOGXXIJLPCBLWLXEPIJKYNTLQJMYBHOVIWGOUTDYTZHXSGLNCUVXWTCPHRMMORGMTZTNFNFLZXRIKOVDXEGYTKWURIOSTQBEYDISDMJNAVJEDIN");
    msg.lat = 0.9876126892250779;
    msg.lon = 0.7677838401150328;
    msg.alt = 0.8133417942108946;
    msg.heading = 0.3517399995357986;
    msg.data.assign("FEZUHMWWBXJQVLQDORRBNJNUUPAIFMTGPDGABEDASMOXJJHQOONMWYRSHSECERZLXRDPPRSZPLCEVDKCPIZKGGABHARHVOHLOSVAFWMAUQMKQIDGJGXDZPMUQTZTEYNQBXQKVWUGETKVARJQYCIXSJHGDSSUYLKFZIMJXKNOELLPHWYLBSBFPBJMFNVGKTUVCHZKYYXFITTWLENDFAIYIIOSRBVCAWKTUDCFWXQUNCTBHEOR");

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
    msg.setTimeStamp(0.11212830712679811);
    msg.setSource(18841U);
    msg.setSourceEntity(122U);
    msg.setDestination(60525U);
    msg.setDestinationEntity(222U);
    msg.id.assign("UEJEZCMLEBRWKFUVACIONHLQZMAAWZDADKKIQNBONOXOVDWBWKERCLTZLIAWACOQGVTRLEJFABG");
    msg.sensor_class.assign("OAEFSZNWFVGLAINWMKGZYXGFCAPPFKOCDUPKSJTCEUBLYPOGTOSXQESCFCGTRDEZQKFHDTQTBJCBFYSGVRHLPEJMXXUMNJHIZZXIBAVOKMWZJXHHJOETWQUJALOAIVUMUWCNLQXVLQZJPKIVMWKIFZVFANTYALSEEGLHREKISNRXNMIGDVOQSTNHROBGGRW");
    msg.lat = 0.08236769202606486;
    msg.lon = 0.5974230720388148;
    msg.alt = 0.8456585492294371;
    msg.heading = 0.7193560475560022;
    msg.data.assign("GEPHJGRGAMMUOYXXWATNRMVTCLKOADXOPXBBVKXIODOXYPQDYGJFNZORJIIPBCTFJSNTWZNZXIFEELZLHLAJQRWCRMIQEUADUMQYUHSXRZDEKHSVZWKQBLW");

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
    msg.setTimeStamp(0.1914300453687804);
    msg.setSource(40825U);
    msg.setSourceEntity(41U);
    msg.setDestination(1892U);
    msg.setDestinationEntity(107U);
    msg.id.assign("MANLXPFIOGXIZTNMRGCWCMDCFWSAGXDSXEOQIHYSCJAYWZKMSPYNVBURHOROLSIKZUOOVYEMYYNSBGQAJPEEAXUYXVJJ");

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
    msg.setTimeStamp(0.06739996014606975);
    msg.setSource(12528U);
    msg.setSourceEntity(244U);
    msg.setDestination(1705U);
    msg.setDestinationEntity(167U);
    msg.id.assign("LYNMGQEQSFGWYQKCRGZNPXBHLLIMZBCGWAFGYTAOIOPMANSIFVXNABHEELUDRWWNVJVICRYYLIFZCLFTSEEMYZQKJLOPWNREZWJHGUQQIXBCXWCUPHMAUYYIGJHUKXNOKVUVTFITITDVSMXCMSJHELSPJTHPLKHKPOAFOKOSGNECESBCQTDBJYDOAWXRVWQGRNHDVUWJVMXRXBRZPZOBXAFIYDKGFHPMDBZTLJRNQCSEPBDUZV");

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
    msg.setTimeStamp(0.2324795312127791);
    msg.setSource(19043U);
    msg.setSourceEntity(80U);
    msg.setDestination(36522U);
    msg.setDestinationEntity(6U);
    msg.id.assign("MSXVEUQLTHJSTRAXMYOBFGYOQMNEUNHXWKK");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("ZOTWJJHBXZVTNAON");
    tmp_msg_0.feature_type = 54U;
    tmp_msg_0.rgb_red = 202U;
    tmp_msg_0.rgb_green = 169U;
    tmp_msg_0.rgb_blue = 144U;
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
    msg.setTimeStamp(0.6391053836378161);
    msg.setSource(63889U);
    msg.setSourceEntity(16U);
    msg.setDestination(18139U);
    msg.setDestinationEntity(38U);
    msg.id.assign("FENPJEERXAKNIVUO");
    msg.feature_type = 162U;
    msg.rgb_red = 71U;
    msg.rgb_green = 195U;
    msg.rgb_blue = 4U;

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
    msg.setTimeStamp(0.5948941708663552);
    msg.setSource(32054U);
    msg.setSourceEntity(19U);
    msg.setDestination(41996U);
    msg.setDestinationEntity(201U);
    msg.id.assign("ENODFPSDZONHPQZQCXSKBWKPWCJWXQYSHFQJYPIJUITLIHWCKMDFGNAUOHSQGEMCMBDACRUSDPUPMFFSKNPSFQOJCGN");
    msg.feature_type = 102U;
    msg.rgb_red = 41U;
    msg.rgb_green = 7U;
    msg.rgb_blue = 249U;

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
    msg.setTimeStamp(0.17407525380265965);
    msg.setSource(44068U);
    msg.setSourceEntity(189U);
    msg.setDestination(13508U);
    msg.setDestinationEntity(239U);
    msg.id.assign("PWMPGPFSFCIKYNRBLYNIAEOTNOKUKGIEKLHGSZIXGMWJXWGPIBDTPUAPKAXCY");
    msg.feature_type = 46U;
    msg.rgb_red = 177U;
    msg.rgb_green = 146U;
    msg.rgb_blue = 129U;

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
    msg.setTimeStamp(0.6566764759522741);
    msg.setSource(24206U);
    msg.setSourceEntity(184U);
    msg.setDestination(45413U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.2831268461517378;
    msg.lon = 0.9305572033694175;
    msg.alt = 0.4543229395390459;

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
    msg.setTimeStamp(0.7493857665887828);
    msg.setSource(39107U);
    msg.setSourceEntity(142U);
    msg.setDestination(54670U);
    msg.setDestinationEntity(94U);
    msg.lat = 0.5135465601897348;
    msg.lon = 0.9852616085306285;
    msg.alt = 0.2752910633629604;

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
    msg.setTimeStamp(0.04919496627356734);
    msg.setSource(60175U);
    msg.setSourceEntity(82U);
    msg.setDestination(38023U);
    msg.setDestinationEntity(220U);
    msg.lat = 0.5925580452326301;
    msg.lon = 0.22543141338469352;
    msg.alt = 0.2682662326190257;

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
    msg.setTimeStamp(0.015730997953488757);
    msg.setSource(7046U);
    msg.setSourceEntity(144U);
    msg.setDestination(9328U);
    msg.setDestinationEntity(208U);
    msg.type = 218U;
    msg.id.assign("EBHRWJJHKCKKASOITACAVCQYLDXQGUPYHVTKXXWKELNED");
    IMC::Conductivity tmp_msg_0;
    tmp_msg_0.value = 0.49219991027393195;
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
    msg.setTimeStamp(0.344507100834205);
    msg.setSource(20400U);
    msg.setSourceEntity(189U);
    msg.setDestination(46210U);
    msg.setDestinationEntity(221U);
    msg.type = 3U;
    msg.id.assign("YXWFEIFVEMQUZCJBIJHHNNZLUXKRGZUPLHITMUPAOXLHAYTOHBQMTFDDOBTZRYHCWVUFTZIR");
    IMC::Memento tmp_msg_0;
    tmp_msg_0.plan_ref = 1827473124U;
    tmp_msg_0.id.assign("LVFLIJBKNEIKCABYKQMYEMOAPIXKDWMLLLTJKQPQOXGTGHGTIODHYEUANVUJNAVAJFHPGDNWNFMEFQCMJXYOVCBJOCFLZNSNOZHFGZZDFAAQBZWZGESDAWBMQIQZ");
    tmp_msg_0.memento.assign("ZNKPLOCEOZCLIYWYYFATBONRWSEQOZMUCIGWOARERUWYJQZNVRUGZSXAYWVQTIZLWCIEDKDPEFVHUKIHEICAIDRYTDQNTDOKRKKXXBJBTCSGPVFBNHSGHTIRLFCD");
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
    msg.setTimeStamp(0.3854966304270503);
    msg.setSource(19721U);
    msg.setSourceEntity(87U);
    msg.setDestination(12119U);
    msg.setDestinationEntity(197U);
    msg.type = 248U;
    msg.id.assign("VVPQFKGOFWLUPNAGDWQJUGNCZLJCWQZEHJGFTXCKQUMEMJPKRQDPIOTPVPMAXCNMTOAFUAUKZHMIRKVZCGYRNOWYYQQZCHGVDIFCILBEFBYKPHRBSBAKVIWLZDXWACROXEXSCWNEUSFSIABEYQJTRFSXIJUXGJBMBTZEUFEYXASBMAWNEXLEWUTDFZJHGVSDSBWDZDPOQMODCKLRUVHYLYGRZSKYAIHOHPORNXYLLHMTKNL");
    IMC::GroundVelocity tmp_msg_0;
    tmp_msg_0.validity = 20U;
    tmp_msg_0.x = 0.8186469917343547;
    tmp_msg_0.y = 0.6856515553250032;
    tmp_msg_0.z = 0.6811943906442776;
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
    msg.setTimeStamp(0.6497531517423232);
    msg.setSource(20667U);
    msg.setSourceEntity(108U);
    msg.setDestination(27443U);
    msg.setDestinationEntity(10U);
    msg.localname.assign("ZYVDRXAQQQXNNULWSRBFSSUXNACLQUKNNZPWDIBZGVLHZCDCEWIWOZUCTWJFSVJWFBGUOKQJHIEYQXQMGMMJNRFDCGKYJUVZTYPDACJPHNPOBZYLITPHRHMJAVQCTXAOOFJEBFDSTMXDETROEMDBE");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("PIILDGZVPGZEIWDTMHVXZFPOXFCTZQEINOXIMDAEVEAQKTJYFOTSONKBRASUTIOGRPLQETUYSUXDKVYUYMXJJHSNOIBDFBROSCYWZSWGVARZ");
    tmp_msg_0.sys_type = 44U;
    tmp_msg_0.owner = 30386U;
    tmp_msg_0.lat = 0.7242890455939455;
    tmp_msg_0.lon = 0.23594327539571125;
    tmp_msg_0.height = 0.1161564755230835;
    tmp_msg_0.services.assign("FBACYNDUUBVHGGQZPTOXAYIXOGBXEYEFNIDGRINZLLUQEKOFLRHFPTIYFEGPXSVJDYVCKBLKKLFSPQKIKVNBUWLIQZZNDMENOHPJTMRUILTNXKDOAISXRLXCVCWOQMG");
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
    msg.setTimeStamp(0.5513122117315349);
    msg.setSource(7007U);
    msg.setSourceEntity(51U);
    msg.setDestination(58611U);
    msg.setDestinationEntity(188U);
    msg.localname.assign("TQOPXSRWGNJAUVLMMKCJTNZIWLAGPDCUEWIOUGHCFFLBZEZHWMRXZBNFIQSKOHEHAIKKCZAMGDLVBDREXFUOXKFPYAYJOHNHMEIFQJKUJRGDBRGRPCLPRLVMTKXWTOVEHTWGZTNMQRQYSDQXUBNXBDGEYVBQCJZDLYYHSSI");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("IXKNYRDSTPIMEWZXJSZMBBHQYJEVHCFIUPAODVZH");
    tmp_msg_0.sys_type = 229U;
    tmp_msg_0.owner = 64476U;
    tmp_msg_0.lat = 0.8383920213537797;
    tmp_msg_0.lon = 0.06667484827724102;
    tmp_msg_0.height = 0.625899038164124;
    tmp_msg_0.services.assign("NBDRNPWFSUSIVBCDAMGFLISNWHKQAIMVXSHFTQYEFAEQDEHBJUZKSLPAOUPS");
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
    msg.setTimeStamp(0.8488785480563706);
    msg.setSource(12842U);
    msg.setSourceEntity(104U);
    msg.setDestination(15216U);
    msg.setDestinationEntity(206U);
    msg.localname.assign("QCGUXVAQMRFXERLQFCWYEVHKKOFIOCCAWGWCBRNDSQQBHPIZVVPIFQCSNDPCLXQXITJOJNOYWSGKDPZKJGKASXESFZZZXJ");

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
    msg.setTimeStamp(0.6710738095345822);
    msg.setSource(25256U);
    msg.setSourceEntity(243U);
    msg.setDestination(28310U);
    msg.setDestinationEntity(252U);
    msg.timeline.assign("UWLWSTMYFCVQJFIGHWCBZISBNWIVYMVRWQDOAUXVVEVORRHGGPFKZEHQFMNCAGNSPSSKMIOQXITQFZUTJMBKQYNGGDFXPKZUIZWXLOFEQVTMDZADPOEATEFDVIWDFQVJHDOMZCIPKPPSQAGIXSJKKMHYALAFKJGNGTSYWOUYTB");
    msg.predicate.assign("CIHMOLAINHSTZEXKIVLNIGVWJZCALLUZEXXYJMTRJZKWBDQDGFBGFGMHRQCTQDCARMWJGSA");
    msg.attributes.assign("JRRJVBUAJOWVBWIWZSPHGGT");

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
    msg.setTimeStamp(0.8350359199782103);
    msg.setSource(43122U);
    msg.setSourceEntity(165U);
    msg.setDestination(39711U);
    msg.setDestinationEntity(166U);
    msg.timeline.assign("PKVADLVNVLROYKSIVXTGQOOSMFINEJGFDBXPWJTEWEREWBUZFWSQIIJQXFGPCYIEJSYABCJXMUOLNUULBPQSUHUGAQOKWEYGNTETPFBBBYDQBUMJJIETIRPFZITDCAXZNHZWJDGHLYDGKJDULHTBRFQPZLRHVMLXKHAVTQRQWMZDPKRROYWKAFDMANQBVVNXHSELHAMTZZONKHCAITXXKSCPCFSKNPCSMCVZYSGOLMRXJCYIGYOZAHWMU");
    msg.predicate.assign("SQDGWVVHGTARMCWVHCJKEBMCEUAFJXOUVUCSVZMWEOERIINCUEPIMSSNHRZZAZATGIVTVLEVZGDIFOTRQBBQZNLNOUWCBLAFXZBAONGQNNFJNPFHBFOYTYJPIMRGYIZILYMSANKMUQLSSDPLVIAWYXGETJVQSDFYRDWEBZAXWMUPOKOYXUSNKQFDXADPGOTPRSTTGJRPGQXHDCHLLYF");
    msg.attributes.assign("QWJYCKTIAGBXXXAQLYURVBMMYIMVSHQZDYKKBMQJRSSPZLOUKJNZLWTRTCFZVDZWQROVADLXKGKRFJENNOPSGDVRVAQNWFEAHIXNFABWCUBCGPNZEYTCBLYEKUHJSZXWNQCKZVMMSLUUIANEKAFUCCBHLSZHOGPPQRERMSUDFBLMHUJTP");

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
    msg.setTimeStamp(0.841137330679673);
    msg.setSource(60398U);
    msg.setSourceEntity(194U);
    msg.setDestination(44049U);
    msg.setDestinationEntity(175U);
    msg.timeline.assign("RVPNJMJSKCRYFGKQZZYOPJSPBJWOMSPMEIVXESVGELVTUFXGAXEFBTIKYGXDNDGNGNSBQURJORLCBMCFDWCJBQKSARDHIQWGEOSWCAXOVXYFOYKQTFUMZCVQKGISPKSGJIFPKTTTEJUFKMOZBWRYYQTDLHVUEJFZWQ");
    msg.predicate.assign("EGLWZRQDBTMCXHKAHSNRMNRQJCFCAQUILSTYLXUUFIDVXJUMZXZIWFQEWZSNOEKVZEKMUTNQAJSUQBLETTDWBKPQBONJOKAJLYTXNGBVUCYRSZDZGHZORTUYNRJNWUJHCVPDOGYWYZDMLEOHOLUSPWTGFQEWPXXYHDDACEG");
    msg.attributes.assign("ZKXOWFWCPRUTAWKWVNYTOZVSGVIHRQMNEMYSHVMZBZIUPIHKHAZWMJZSUTFMIZXDIFXENRCJUYALOLTEFCRGXBBJNDKOOTDKMSCSGFTEKLEPNHGJHFYHR");

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
    msg.setTimeStamp(0.19429423036707383);
    msg.setSource(28458U);
    msg.setSourceEntity(164U);
    msg.setDestination(24973U);
    msg.setDestinationEntity(233U);
    msg.command = 214U;
    msg.goal_id.assign("VZFNAZHZOTLBYRWEEJHDGNQBPLKZFQPYIYRIGNKLHOOYRGBFQGXCCFCNQMIKACBUEFBLVXDOOKWOCMGXUQIDFHCUNYSVHASYCZDUALIPOJFBMTRKGSBAMWGTXGVVTIUJXPISZQUBUFSVXASEDWQDWWODKZYHPXDJPWQIEMEVNRGMAAP");
    msg.goal_xml.assign("XEQPSIGNNVIEXNUBXHULILUIAGWTGZLJJVDSMACPUSRFDOHVAHPGKHOXBTCVEDGXNROQKSTZOLJIOTEOKZWZBYGRFTHXYACMIOPFSUVQEANVRTRJVJGN");

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
    msg.setTimeStamp(0.4365240228177689);
    msg.setSource(10303U);
    msg.setSourceEntity(84U);
    msg.setDestination(16237U);
    msg.setDestinationEntity(64U);
    msg.command = 156U;
    msg.goal_id.assign("OCBLSGSKAHHWBXRTUZXZGHCACZSUWCTQGPDPGYZRMIENMKTPQAUCWRELOXNKQFSDMVVVIXAEPGTVEXJJJWAXMQFBFRVYFNWOQUXXOYRSFFZUKDMQGLSKCLMJCDSOPKEESADKNNKWJSEJOYZMTSHPHZLJEKWLWONEYQBGPYKIJTTM");
    msg.goal_xml.assign("ATPKVMWMCCLWA");

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
    msg.setTimeStamp(0.34558244372973);
    msg.setSource(18802U);
    msg.setSourceEntity(53U);
    msg.setDestination(44570U);
    msg.setDestinationEntity(168U);
    msg.command = 226U;
    msg.goal_id.assign("VXPWVXKSNLGSNYBPQSXHLWFGLJKRYPWZJFNYAPUWCWAWJVTGKLUXMRITPEPVHJDOPTUOAALNDMYEXPUBDZEQQRYOLSRZBFIMHFNFGQNKNDATDJIZCXFXNEMUIGWEZTE");
    msg.goal_xml.assign("TXSOGZTXUPKQEWSEHHUBBAGPGOOQQICDLZMGAWPCVVNYLSOLRWKLCJAVXNSRKCROYEKTMXIPTGSSJZDYNMVLMLYBJWUI");

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
    msg.setTimeStamp(0.49364798900614604);
    msg.setSource(15070U);
    msg.setSourceEntity(158U);
    msg.setDestination(31304U);
    msg.setDestinationEntity(140U);
    msg.op = 206U;
    msg.goal_id.assign("GQDAKKFKBPOXKZMATRWDXCRBOGGMSIAPHXJOAUXLGKTBEYBTNHFDQLJTKCOBZMYHYFJTQHBLUCCIICZYLSMRSIJUFVVXMBOZNDOVCRHNDTVSE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MWCFRYGFMUXKJHZGNZITEETZVDZFJNVHBYNWIBCGPLKTBDHHMWVWGYHSTVESIBFJMELEDORJCRRKGBSGPQORSSADPYWALQVKOXJXSGAGIAPIOXZWWSUIGFSPTZVLCRFNHJXKYCMKPBEDYUMZRRCAOCFDTLMZENEQXNWHPUJOXQWDJOMLQQZCVYHSRBXQHVOYIPUEUORNUICLDNJKMDWEQUBCOFUFLKBVTTLUAPDNHAYIGI");
    tmp_msg_0.predicate.assign("FKNSBAPTMNPMIYFJTVGUVZXHCMVRDVAHCAASDJIJXCWEJREZIHBUQUBDQLOSJLHLQZHUFSEVXMNSHZZFEWTWIPZMKFOAJTQGFNQQVJCENTUTYYNCEUOOIDAMYXKTOWFBJYFINCCEWHSOAIPZTRKXYDPSOLFZPODSBURGYNDVVLPIECGCTPLUKNWWBARXYQEX");
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
    msg.setTimeStamp(0.41020149237117065);
    msg.setSource(51981U);
    msg.setSourceEntity(136U);
    msg.setDestination(5995U);
    msg.setDestinationEntity(28U);
    msg.op = 74U;
    msg.goal_id.assign("YGUWQBGBSZNADWJLZDGDIGZOLLIGDYWQHYDXGJFLTELFFIYTCGIEGVPPAHSVTTJWONNTPBNMJXIAZWQSDKVMURXVRCDYHXCHFPHRKKP");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BOKBZSIDRNLSZEJERFGZDCTAGBBTWAQIZDWLAFXCKEQYPTOIQXVJPVMWERMVFFWZNAKVJJFAXTFZ");
    tmp_msg_0.predicate.assign("VOTTZXFQDIXOLGZKBCCDGEODYVXIBVM");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RWVWKPXFNUWIZJTEACMJATQGMNSDGXYSBHLOWQMHBGTBHDXSMSFVRNBMMIOPQRTFXDZQIXFTQKJIHJDABVCALXEYULGEGGDJDCRERVKYYUEZBGPT");
    tmp_tmp_msg_0_0.attr_type = 150U;
    tmp_tmp_msg_0_0.min.assign("XUQDJFMHEJZZTFOPCETZYYJFJSHVMRRYEPGFYXWPNNMTTVWGAFSJLJFAUOXQNEBBROKTQLMRFPLAQDMEKBKXNRGNYSPPLQCDOBAEXTITKNWWEFLWVMIZUNSZUVVJCMIHABKOPNOWBWUUOYMKJIQWBWDHHTQXGTLAOXZRHOHLGSGDWKRAEYSSGPRDCZBYUMTNNYLISBLAVEIGGEMVACZQZQCSOHGKKJIRDCIPUUADDBVXDFY");
    tmp_tmp_msg_0_0.max.assign("VJIRAQMYGHKVIOGJIZRWECSDPLFNUVSDJPZPRZXYCBIBUHZNSPVJHDLDKADAPTJAFRTFTGQNXCWRKOLAIYSCAZMZBODUTYZRW");
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
    msg.setTimeStamp(0.4563552439973485);
    msg.setSource(62341U);
    msg.setSourceEntity(94U);
    msg.setDestination(11810U);
    msg.setDestinationEntity(119U);
    msg.op = 199U;
    msg.goal_id.assign("XNLCQXJRIPSKJYRAQTSFPNWCHYDITKSGVMWDLXZESSFFEENFVYQJZCWGQGIDEJOVTLRDRBTQGSBLKTEKZHNPBZFIUVCBTKXYMMBJZCRNIDYZHSTHPUQKBUYFVGKVUROCBMZGUPQXTAZPOEIAZYGBJXJXPWEAADSFIOWYLCLHAGEOUPYREVW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VNCKZRVHIOMGIUUNJTVBDJGELWTYBGQWIIPHCWMGWKKVMFQLEHBHYLJPIXXCHZDVTFRLDSSGPQUJAMWMPQSCRQOPDGCMMJVELATQATFVTENYWFHFUWSZXHRUX");
    tmp_msg_0.predicate.assign("PFSQQXXDGHKLQSMEWQZHVGOANGHBREPIFGBSEINFXNGBJQVCOMNJOKTDJFFXNWNCYDDKEXFEYIYODDOGSMKWWEFIQZWWJUMEOVCUZVORFNHDMJARKYBDXMRNTAYRSBYRSYTTTKLICIUUGBRJPQYJZTPSZFYZHBTJLCQLEXTCVAZLVQCDSIGXRAPUAVHJOALDVZNXKFJEIBZUW");
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
    msg.setTimeStamp(0.9262002770353446);
    msg.setSource(29014U);
    msg.setSourceEntity(235U);
    msg.setDestination(12842U);
    msg.setDestinationEntity(163U);
    msg.name.assign("PRAYNSNACIANERTJRKOVXPOGFPFJBYXFQHHQCYXPGWBKVJBHNLJCDUNFWGVDIGUFHAPKZEDBLLMVOKKWSQDDZLSAGNBWOFKWRJZLQPWUGIQYDXEB");
    msg.attr_type = 115U;
    msg.min.assign("FEZHHDVNBGXHXYHCIUTUJOPPBEQIWPTELXSNCDYEJMFQROHVCKJODVIWBYXXWUFQJNLNWPPBLWGKRMZVDIJUHAYSLNPJMTKCAXNDQIHRMTRWPOBPOWYVQTKLJMFSGUSIVLDQGKQYSZCFLZJTFWOAIZSEHBWVUZEQASGZTDSARACDNOCAEPTACVZHHBLFXMMIODMLEXYACKNFNSRSOOGRUYABGG");
    msg.max.assign("ZDBIKSTRNCNOAOAGOLGSSGTJPRVJXBKBREFLMYSHJKDWUUDIWNUIYCHRDIQSZJWTAXBTKNXLLKTIJEYMLRWWJFOMKRCGYQGWCSFINLNXDIXLDKQVEUAGZXGTXHZAXMBFRFMPTKPHJNYZQEUQQWSGVFAEYCPPQZAVELUUOWMFKYWCZIBVMEDNGIQLTPVPZVOJMBVVGAOVATBQFE");

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
    msg.setTimeStamp(0.9124811930246451);
    msg.setSource(27751U);
    msg.setSourceEntity(134U);
    msg.setDestination(57681U);
    msg.setDestinationEntity(22U);
    msg.name.assign("CDEPNIETHYZBDROBIJBEVJRLUJXOOCKEIBLVPQNBHYURUMZTABOEJGMPOMGHL");
    msg.attr_type = 248U;
    msg.min.assign("BVFQUOSZLTPTPHPQCNBHZTGDLOHJNRWRSVYXNELHNFJALUNRUQJVKOKSGPADHQEROPJUTXUWSBQSXUYCFRSIREWXJFBWBYDEHCTZFMOZSIGDYMJKEPFXZGZUI");
    msg.max.assign("JVYNJJLXQUTWVRBNXSIOTTHDCFKNTRUBHFPGMFYJEMSNTOPWGYYHIIHWWWECQRCRKLAVQ");

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
    msg.setTimeStamp(0.7912204616219617);
    msg.setSource(54519U);
    msg.setSourceEntity(61U);
    msg.setDestination(61920U);
    msg.setDestinationEntity(122U);
    msg.name.assign("NQFCCFEQBBPHYSLSWNRRFQMZYZNVHPRFEOGJLPZKMBBPLDAXIWXYRKZRZVGTUCRIMEGMLNIHOAEXNAQJBIBLJFXTJIFUVCWOAMMUPAGJDOSIOYNBVEAEKHWKXRHNCGVWSIOPZDBCUXQOQMETUQCDSDHMDTZTUTXLKYRXWSNAXJULTQVVSPKPAVGNDWFAIYFGGKGOIHZODZHRFCVKDUEWPKDEFKPHJQIZUWMGTTXYOJERB");
    msg.attr_type = 239U;
    msg.min.assign("GCWNFLJVXVWDPXDFOKOSETXKGLEGJTSDKLYEUFQSFVPUOZSNHZAIGUINPYSAHEUPBRZPEBZZXHQPAOOMHCOTNRUEMSSRFLVTJIMVUFENJJRNIGNQQWABNXCWLFMABPDVUQNAJWJWDKARVVZDSGPOCLZILEAIYASXIRBWCFBDJEHLWYMHCZCRJKKIWVGTQFRDZWYQMHXQKBMKTCZXMYKHTLGNPMUCYKQTOYPTSOROB");
    msg.max.assign("WCWPWSQMOSGCIKKTZZKZBGUPGZXNLVZZZHBBFECXAJVODXWWBRWFQTWYBRBTRULPPHIHTOFXRGKCDUAMSNHAJMJMNNXMYLBAUMDXCSYTSEFLUIDDPKVCCWFFIXOATQRVAMCYHVOFREEGFRNDYPTYR");

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
    msg.setTimeStamp(0.41125289748177896);
    msg.setSource(13640U);
    msg.setSourceEntity(72U);
    msg.setDestination(15206U);
    msg.setDestinationEntity(92U);
    msg.timeline.assign("IDPYFOGWGCY");
    msg.predicate.assign("ULQWNASCUDWKXOYIQDWOUXXBF");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("KGPFPJQNLLGVFK");
    tmp_msg_0.attr_type = 249U;
    tmp_msg_0.min.assign("ZAVQIEDLTURQXONDKDCUWCHMQBNBZMWVXDYKPHZUHOBFZOMGNUTRRIFYLOWVFTBRGBAWZITQMSWKOGIDKZEFCNIQMDDJEPKPKYAGHPSVQSASFKXYFTOPQIRXTAXWLHZMJTNMFCWYJHCVJGSA");
    tmp_msg_0.max.assign("KXXVOQVEWMAJTNEMECQHOVTQAWXNKEURVSZUVTUKDJFUFZYOTTBLBFNHSHHUMCQECKSRDRVCNZCUFQEAYOSFJDBPLKXZPARDRCIGUTBDCGWQRPFKKHWNGZFBJJQWBJSIXLNKIAGPWRKGAVPLUZPQLJGQWODCLCRYWOLSBFXEJOYFMWMLVGMEPCYVXIBMWEODPMZTOXIIGDHLXNYIHJSIPGXIRIYBOVYB");
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
    msg.setTimeStamp(0.24223897757514945);
    msg.setSource(1506U);
    msg.setSourceEntity(241U);
    msg.setDestination(29911U);
    msg.setDestinationEntity(111U);
    msg.timeline.assign("CYEKUUSDCROLNHJUOVIUBRTXHYPBZTLGHWJFQDFMPWCGIXBBCEEXJJWJYCBYMALHUYFOZZKFBFINYVOWQCTUGPEJASXLANF");
    msg.predicate.assign("PNDSMZNMPRDHOLYELXQSQVIBRBKYYYEBREIPZANKEWL");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("KRQFIKELAXCHZYKYDWODVRYWPNUNEIOUGSMVTQKHTOLJCGSAZWTYZQJGVZECAM");
    tmp_msg_0.attr_type = 37U;
    tmp_msg_0.min.assign("SGZYHRTMFKYILMOAWWUNJUUQMTNLYGCAKUHJRZXMZHAOIARLQAVZPHXHFEGWCLLREUKUKTNYIXKIXZSNSEVITWPJYDWBZKX");
    tmp_msg_0.max.assign("TWCFETVNXTLROAPRPDCSGIBMKXJNHQVTGZCLHCCLMZKBVDMVTCAXIBBKFYMCMMRJDZHQZDEJOPONNBMSCGNRDOYGAULJAVYNREZPIGSMTGXAWWHFTSVDRJFNQNFUKMXFURMKOTXYQPSOADWIALHPUUHUXSYOKIDCKPQQVJPLNVWISWRUQOYDJHYKBFCQOEEGVWFZXZVOIHFQBEKGYUZHYZESZWJASBEPAJJBHGETRE");
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
    msg.setTimeStamp(0.27277160475413964);
    msg.setSource(54622U);
    msg.setSourceEntity(189U);
    msg.setDestination(60370U);
    msg.setDestinationEntity(148U);
    msg.timeline.assign("QRYMLETLWHWQIELPCNXVFTANKOAVBJOUJDFZDKBDMHIGXPNVNYANROLCJPZXZQTXQOYHRMTMWTKHBCNWMVMHTXUDUYGARRBRSJAWWBKRUPMLQPIJFGB");
    msg.predicate.assign("EDXGLREGNYTQOTTIXHIUPXUZPCVXXORAVSOEZQHFBUBBVILADJTJYGULKJEKZQJDDAAFCDCOHPRBTWIZPIHNKYDUXNMSVIVWOPMSQNZYBZNGLBJEMBXYTEVTQFPPQOBZTFPIURSN");

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
    msg.setTimeStamp(0.021653233127372884);
    msg.setSource(56737U);
    msg.setSourceEntity(223U);
    msg.setDestination(45302U);
    msg.setDestinationEntity(9U);
    msg.reactor.assign("LFGFWOEFGRAICUMNTKLLOZVKFZZSDHKEAMSNBTCXTNZIZYBDDCYPUXYKYQHXEVAAAZNSCWGTBDWOBVGZUOJXHXYNNPVASEOTOGPZ");

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
    msg.setTimeStamp(0.5920920332289631);
    msg.setSource(18953U);
    msg.setSourceEntity(159U);
    msg.setDestination(49733U);
    msg.setDestinationEntity(112U);
    msg.reactor.assign("WUYZFBUZRNZDPEJMCGLQGKQEKSFTRRRTVQYYEMHMDEYXFXSILCZNWTBSPXPCSWYZX");

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
    msg.setTimeStamp(0.06059389024251716);
    msg.setSource(35465U);
    msg.setSourceEntity(222U);
    msg.setDestination(25821U);
    msg.setDestinationEntity(156U);
    msg.reactor.assign("KBTYNZJUNTVUNOCPKSFWLXTDEGGEUQNPOAPAJHHDTEHEACCBQLJBYSDLPITPYVYIAZZXIJJOV");

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
    msg.setTimeStamp(0.06679728657288153);
    msg.setSource(53397U);
    msg.setSourceEntity(143U);
    msg.setDestination(48598U);
    msg.setDestinationEntity(165U);
    msg.topic.assign("EPGGZWCSQRDORTQASFPRIUXDOILKFJRXSTZZWXAOXOBFJMYGGOQPHYUKLUKWBVCRNHWLHGHXCJI");
    msg.data.assign("LJGOTDGLMVVBFBWYSTUJBCFJZX");

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
    msg.setTimeStamp(0.3425528953253516);
    msg.setSource(49367U);
    msg.setSourceEntity(187U);
    msg.setDestination(61745U);
    msg.setDestinationEntity(129U);
    msg.topic.assign("RGXAXMJUUCEVEDAZXTULBGLVTYROWFBBIMLWGSJKZLTLNBEIQQFEQTFZONYGTAVWUWAZVXCPEGRKCYSRYMGYSLJHZAIGLZNIXSNOZDGRFJKPHNYSVNWKNDHXOWBZDZIYABVLHNVFSMU");
    msg.data.assign("UWOIABDPYVZNSNJWELVRLSKQCIAFMUEOKMCRSIHITVQJPOFVYUKXPMTYPWXLHZXDLYUQHQBYAJYQMHTRECLQBRZAXSUFMHMMWDTJBQBKJZRTADOKKJCITHGZBDPGWARFVUVFRIFGKIE");

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
    msg.setTimeStamp(0.7289556739008962);
    msg.setSource(46289U);
    msg.setSourceEntity(147U);
    msg.setDestination(22662U);
    msg.setDestinationEntity(41U);
    msg.topic.assign("QRZQUAMBEPEKEIRJYULKFNTFTQAETSEPFKGEFJPWAWUJHZIXXNSXRKXLQXQKBWOAZILUVYCLQFWHJUBZGEGVMEXPATDCCZVXYAYYVNKSHUMRJKWDHZSFRHSABNUKHINCDPOCYSFDTWSZWEHFWHOCYF");
    msg.data.assign("CCBJWNMSNNVJRHJEOUFRICCZQUOXSXCEZIRJIWIDXTWDZKZSVDOOKGMQJNFCAKEGYAHYOBEUZTFPHZIBQJTYUNYQZBRDSBVBMECPFSQLVMTHKLLLTJDBRREGPRAWBOSNAWXXDLNIUBECCIBWYWTUPPIVQVPVGZUZGRHWSKAHTAUGYGPQMXTQFNLSFKJWDNMYXFEDGVJLKDIHHRXUHYMOOHFOSP");

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
    msg.setTimeStamp(0.39115952481840244);
    msg.setSource(25074U);
    msg.setSourceEntity(10U);
    msg.setDestination(33108U);
    msg.setDestinationEntity(195U);
    msg.frameid = 80U;
    const char tmp_msg_0[] = {22, 102, -29, 84, 93, -70, -68, -107, 106, -5, 110, -33, -34, -65, 61, -115, 26, 126, -114, 57, 35, 104, 81, 33, -118, -4, -99, 115, 108, 59, -125, 26, -94, -120, 25, -115, -57, -113, 126, 24, -24, -63, 108, -97, -48, 42, -47, -126, 116, 25, -85, -72, -65, -68, -119, -96, 84};
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
    msg.setTimeStamp(0.8350413201757948);
    msg.setSource(12810U);
    msg.setSourceEntity(90U);
    msg.setDestination(29879U);
    msg.setDestinationEntity(48U);
    msg.frameid = 156U;
    const char tmp_msg_0[] = {-52, 42, -94, 115, -19, 18, 27, 39, 50, -67, 100, 91, 87, -66, -94, -27, 84, 104, 104, 66, -41, -18, 65, -114, -87, -27, 35, -11, -56, 39, 16, -31, 84, 100, -76, 52, 64, -29, -86, 56, 113, 50, 54, -48, -75, -47, 4, 93, 23};
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
    msg.setTimeStamp(0.8189039281087753);
    msg.setSource(26708U);
    msg.setSourceEntity(27U);
    msg.setDestination(14149U);
    msg.setDestinationEntity(240U);
    msg.frameid = 1U;
    const char tmp_msg_0[] = {-74, -106, 12, -2, 100, -86, 16, 48, -41, 29, -85, -19, -43, 117, -7, 68, 11, 29, 46, -11, -76, -74, 83, -118, 69, -63, -23, 30, -81, 103, 17, 80, 116, -36, -18, -53, 67, -72, 13, -47, 38, -71, -97, 85, -28};
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
    msg.setTimeStamp(0.04269880484893673);
    msg.setSource(37332U);
    msg.setSourceEntity(83U);
    msg.setDestination(54996U);
    msg.setDestinationEntity(195U);
    msg.fps = 27U;
    msg.quality = 209U;
    msg.reps = 230U;
    msg.tsize = 180U;

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
    msg.setTimeStamp(0.6523144659547124);
    msg.setSource(14844U);
    msg.setSourceEntity(140U);
    msg.setDestination(32172U);
    msg.setDestinationEntity(161U);
    msg.fps = 191U;
    msg.quality = 97U;
    msg.reps = 199U;
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
    msg.setTimeStamp(0.8469498992959247);
    msg.setSource(45686U);
    msg.setSourceEntity(207U);
    msg.setDestination(17989U);
    msg.setDestinationEntity(147U);
    msg.fps = 191U;
    msg.quality = 203U;
    msg.reps = 2U;
    msg.tsize = 13U;

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
    msg.setTimeStamp(0.13783539812085788);
    msg.setSource(54651U);
    msg.setSourceEntity(243U);
    msg.setDestination(47631U);
    msg.setDestinationEntity(41U);
    msg.lat = 0.173040717748857;
    msg.lon = 0.6375645872875327;
    msg.depth = 205U;
    msg.speed = 0.02476303844662009;
    msg.psi = 0.8033399495192125;

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
    msg.setTimeStamp(0.4313993009469258);
    msg.setSource(36525U);
    msg.setSourceEntity(192U);
    msg.setDestination(47442U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.26528273267853897;
    msg.lon = 0.558121469268102;
    msg.depth = 96U;
    msg.speed = 0.5676182926211201;
    msg.psi = 0.4412065433655583;

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
    msg.setTimeStamp(0.23364946830730715);
    msg.setSource(1717U);
    msg.setSourceEntity(36U);
    msg.setDestination(2692U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.08735551148595666;
    msg.lon = 0.19875519930844965;
    msg.depth = 94U;
    msg.speed = 0.18455763661648406;
    msg.psi = 0.3867300286738805;

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
    msg.setTimeStamp(0.6754338036816595);
    msg.setSource(19759U);
    msg.setSourceEntity(149U);
    msg.setDestination(39718U);
    msg.setDestinationEntity(144U);
    msg.label.assign("DZQLUKGIFQMRNTMQVFFBQCYAVHOAECIVDYMADCHKGFIZJGTVHMCPHLYKUPFJNXXLQWOTZGAXUNHRFMXWDWOHXKLIGAEVUELNDCMAPJBWJRKMAVMZSTCFKEZGEKHHWSLRYHJUSSSVOYODDMRNPJCBHPUBTCEYBVZKWTLPOEXLSZXYIMIFPTIGSIVLJWORQXANIKAQBSWNPJSUZIQJYOTOUZNXFXDNJETYZNBRRGVAQTEEQLP");
    msg.lat = 0.7540308864289541;
    msg.lon = 0.6000444774459786;
    msg.z = 0.8723244332916056;
    msg.z_units = 17U;
    msg.cog = 0.31708003034547194;
    msg.sog = 0.06702656652650107;

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
    msg.setTimeStamp(0.9961404788248228);
    msg.setSource(57511U);
    msg.setSourceEntity(131U);
    msg.setDestination(57059U);
    msg.setDestinationEntity(4U);
    msg.label.assign("IGOBCAZOWLXIPLEGBSXOZERGTBPTQDPJZJYKXIXNDDDECSMOYXRFVBZLCVNMJLMEM");
    msg.lat = 0.004873802369038005;
    msg.lon = 0.2633340181677739;
    msg.z = 0.9246799939161682;
    msg.z_units = 10U;
    msg.cog = 0.41196059461875467;
    msg.sog = 0.5864644040218996;

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
    msg.setTimeStamp(0.08436420478831508);
    msg.setSource(14486U);
    msg.setSourceEntity(70U);
    msg.setDestination(24337U);
    msg.setDestinationEntity(249U);
    msg.label.assign("KWVSIDWMFXUPVNI");
    msg.lat = 0.17223295560201501;
    msg.lon = 0.8818668325555674;
    msg.z = 0.34835109698964284;
    msg.z_units = 14U;
    msg.cog = 0.717085561522974;
    msg.sog = 0.9516639064707743;

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
    msg.setTimeStamp(0.4778958838037971);
    msg.setSource(33916U);
    msg.setSourceEntity(36U);
    msg.setDestination(61293U);
    msg.setDestinationEntity(189U);
    msg.name.assign("BDYCEGYJKXBQPAUSVWXZPURNDILXNVRXTYSGBKYWOPWNFIITHSMNHTEARQEHLUZZHEMURNFDZFSOTIPIEDYMOUNZLKSALQPFKHDDOIEJYGWXYCJLMFOTAEWTMLIPCKTVC");
    msg.value.assign("BRCOGNJOKWUOGSPVQJREXQVTEDOLXWHPYMPZVGSZQIHIRABUQVVSEIYLAFPLZYN");

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
    msg.setTimeStamp(0.6533229932651313);
    msg.setSource(10073U);
    msg.setSourceEntity(87U);
    msg.setDestination(59222U);
    msg.setDestinationEntity(213U);
    msg.name.assign("IRMKHJHZPOJEHNTDUCZYVWPSTZJXNIWQOOQDEFIWYBGKNVFCRNLBIXEQSIBCGHFVNRBPZQBTGOTAKCOHEUUMGNLKWCNKFRHKDYHMDCXFICMJTGSZUPLVVTPPHSIULDYLZKKYWPUSJJMXXSYAQDMXIPGYE");
    msg.value.assign("CDKTEBBNVUNQWXBJOXABIEPAWLOYRVMVMNPYJGDFMERJCRGYKTTBYWFUFTABLQWUOUJXEKXHQDSQSTEQVOPSLLOTXWHPNCEIMVIPMXFWXMZVEORICAJSVZCILREDYNBIZLVJXWSKPCONHUVIDHFORTIKFAFCANDRQFDYVYCRTMOLUHRYSDHCXGZYLUASKGZXUHFNLPGSAD");

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
    msg.setTimeStamp(0.6823805341278497);
    msg.setSource(61350U);
    msg.setSourceEntity(45U);
    msg.setDestination(43750U);
    msg.setDestinationEntity(85U);
    msg.name.assign("VBLJYQFDWKQKNKKCMDZIJYCVNTVEBOXNHHUQQGYXPCYFVSWBQULBGVIXEAFBEFCQHFPLLHPQCKYSNUILFKSSMDJXPJDDJO");
    msg.value.assign("DUZGXPTBWZFRYWSJTDTHRNSHTJXQCSQESUBKPDFIQLVFYEARLDSYXAPGOLWLKMMNYMBIXVYQUDBOPRZHNFGKMXETZYGBGRTQGEQAFBCQLLKCRHAEAJIIUBPQFFJE");

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
    msg.setTimeStamp(0.638307987037126);
    msg.setSource(49659U);
    msg.setSourceEntity(245U);
    msg.setDestination(5734U);
    msg.setDestinationEntity(238U);
    msg.name.assign("UXPHNKQBZRMPRFRYMTUUUMUUSCXWHKRBQZOGCJFIEKLNVXJIKXGPDPYHZIDZQDZEQLWVJQADFWZOWSOXYBCQSDGZRGTRVBQEHQRKPFMVIKEFWIVFEIXXUAPBKYYVDDWOXTNTUJOSCFTZAZAILMGQHMARSLVJUHXMKHVHTAQMDLJNUGPOOLLJSELRNXPKSCGHDSOWLCNTJBNVRYCAYVJGYPNSMBWEEBGIFSCCMTGFZT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZDDJBUZPJHNCVSTMOGILISOYZIMXFDQVROEMGGWIZBJYEYBPAPSKLJBNGGVYWVCXAECHTTFIRNCMDUBEKUDKOQNFDABCKPHUNWIKOSHAPWBWYKKBFRVWZIVRGYXTEIUSLRCHUCRXZZAAEPDG");
    tmp_msg_0.value.assign("ORBDPEUFJYORJCHZVVOPLWJASGUDFNYDUEVGPXWUQNOZYZINHKBQIDBOWVIVZDJDFFTUOWITLFIDJXJLEVRKGSFAZDQTSQKCDJALYREMCOLNWGIQUGZONILLMELBZFMAEKBJEEARVIUNZCKRHKZSTWMQHASWBGCKYKKYSBANURTWFWTAYZCXSXPBDXSBANWCUNNGRISPPCHHC");
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
    msg.setTimeStamp(0.3749131458497885);
    msg.setSource(57150U);
    msg.setSourceEntity(32U);
    msg.setDestination(8667U);
    msg.setDestinationEntity(62U);
    msg.name.assign("GUOUUBDSDCMFIMKJLCDAXAEZMRTDZPEYDOVZAOKFGSCVXLZLVQLFWFHARBKCPSWNSITAPFWRFHTHWBJVQIHNQEJOXNNMKQVLXYDMDGHXQXNLDRMZQCBCPZQROHYJVWBHTPKVYQGXMUOHTSEJSCOTLODEHEWPEIFVNKUTPRGSBSFTFWKQLJXWRP");

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
    msg.setTimeStamp(0.7507140396832189);
    msg.setSource(38655U);
    msg.setSourceEntity(83U);
    msg.setDestination(44278U);
    msg.setDestinationEntity(164U);
    msg.name.assign("GZJOKXBCZATWJQWPOKRUKXICBYVJYSHPVMZFCHOPDPONEWSNWGNPHPIAOIYYFGNTVKVMVSMREASZBEPDNTIHKFQZPXKIVYYWEN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WQHXNCOXFSIHBBZFHPOVKIPOIBGJPXDWGZUTPPYFDMKLOMVLYGMFVHEKXJAKDJWFBXZMUSWJCLYXKOADZXKZKTCENLBRECYDBXFROCGALDQSZHVOPMGQRSIARHLLJZJNBSQEIVTWGEFVVAMLTGRWNNMIWJHRXSHNWWEQDFDQUELTUA");
    tmp_msg_0.value.assign("TQFPGEHMABSNWMSGYIJWCORIRFWLWYVIMHOPVYLBMQAVUSPDVXJOHLTGBLMHWAWLBEFIZBOBGSJUAXDCCQNAZTIXDMEXUPTLNXJAYZFQPIOSDQHXFKPICYBTQILOCWKUOJXDTKGRDYFKEJHPNSEKRTYERJCDKAUOUOCRAFYNWTCNCBGZGXRPHFVQZVGNSXZZGIJUWTJMZUFEAQM");
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
    msg.setTimeStamp(0.5891958785378756);
    msg.setSource(1133U);
    msg.setSourceEntity(227U);
    msg.setDestination(4921U);
    msg.setDestinationEntity(21U);
    msg.name.assign("ITOMHFKXTCBGBLQERWNAFMKWTNJHXFYFJXRXNBZKOCZRYNCWXJORQZQKZAPLEAEDTQIPCWOIGSELFPBUJLMAFDSDDXQYMVPIYOIBRJVXECWXISGGIQEAVCAGREKSMWDGEGIUYTVFVQYUWNMTXVNFJMUVOMHFPOEL");
    msg.visibility.assign("CVGHYAQMRVZFYWDAVUJOXTOSZNAIZJXDSGZLPEKNXCPRCUGFMOAQNWFIEIJKPWWIZGSJEX");
    msg.scope.assign("PXHHWRFMZAOEROPUNAXHHUYVWDDXRYZTOLUWEIIEDGEDTODTKQOJRTKWLDYOPVIGKVXJUOIINZZCBWQZYZKQFHXDQTNVQQMIOPOVVPTWUTSWCMYSAGLVMSLGLNIRNDMMFTSCHPSSRKFDMGYLGCCKKHSEUSLECNYAJGUYXKKAPXZYBBLVSBM");

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
    msg.setTimeStamp(0.8382920545034174);
    msg.setSource(32750U);
    msg.setSourceEntity(206U);
    msg.setDestination(23274U);
    msg.setDestinationEntity(64U);
    msg.name.assign("ZYDLCMIBYHFJSWXSMDIOARSHEFAWLQYPJDSDAKRZQQXUQJYBOELRIPMMYMTIXJZELNHUNLVVHPSJCPITLKDUVTZCXNZFASPRWYYKSNKVBFPACGLCFBTBRIRUDDMEVATHKNOEVQBKOVFPPDMEXBZXIBGRQHKKPWTUWFL");
    msg.visibility.assign("AIMMNSUTWZLEWDPCBGXQKGNORNMGJZBXBFVSZQLTVREAJZVBDOOLDXUNFTIFYMWISYCJXSXOQLENEGMVFKQXAHMETBKUNCYVUHPQKHHERAWKPLYIUZDFOECPWOIUYIDPGOOTQYVHBKJIZOBICPRIKABTYCPKZRNYIFAMGMA");
    msg.scope.assign("GJYENEXRQAMKMMSTJRPRAKGUPRCNPICQSFJBVXBKNHJDPAPLBVYYLMBECPABGGLNQTRHLJFLWVXJMDZYSFYMIEELGGINDUEVLTHJAFXFXZSYFZDVKOIEKDKDODPSMRXOQBTUYQWL");

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
    msg.setTimeStamp(0.7011172018312901);
    msg.setSource(12224U);
    msg.setSourceEntity(67U);
    msg.setDestination(62397U);
    msg.setDestinationEntity(229U);
    msg.name.assign("SPYWXGHXTJFTDCQVLLGXVZEUYLKBUVUJOHDLPEMXQSOJKPAGRRABLNOFXIHQMBVQDZWZNBVFWQIMOQUNBKLEYIEPSRMFYHIZAFVEBEKFQUSFATRRUAGWOZYIRSLKKPDPUAGINXJCOICDEIOMDSANWSTMBORNHYFXYBDSPDQVLZMKLVAUCQTWZTTWBYDIGWLPECKWAMJXPNZCRBYZHPGGHKOEUMCVUNHMV");
    msg.visibility.assign("KDVWJEEAUUXTHZGRORDUODGVRCYQHGJNUSXVWMSTCNDJH");
    msg.scope.assign("ILWBSPQMWJOXJOJZSVZXFSSYKYWQLULZBFIUWCYUAGEKDAHBTMTMVRJNELPWLMPUEQXIUUBAPBGNTERHBLVQHRBQADZNCFLQOMGGBOYDFZYVVHDOHNVTNNCIDDCTNKWVPIORDTXEPGICHWADGZJEAKOZOWY");

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
    msg.setTimeStamp(0.5622941766755651);
    msg.setSource(16494U);
    msg.setSourceEntity(130U);
    msg.setDestination(53206U);
    msg.setDestinationEntity(167U);
    msg.name.assign("BDIFHPAFOTWRZAVJZKZCNGMTUIECJLFLOADPMOTUMDRVEQRXJGDNFJXCHFXHDPFILFOGBTYVYUTOGCNBPQHRIIGARXQGVQAEHAWSHVBCBSKOKEJKYTQHTKGSBVSVCIZPUKNAQPLELKRFJNCMDWUYOZEYMJODRBWLTROHQJWMYNSBJKRQD");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LVVXNAYUVYQBNSGUCODVCFIBJMRNYEJSIXPZFQYVUSAZBPEJHRZZQGKXHYWMXSBHWACMSQJJALMLEIAJTELHIGGYHRIFUXQFVWEHTJPGZGUTORRDEMNWXSQLHGTCXTDHHAQGKFBGDXDWPEMWPZGUNBBVKJCNSTSVRFUNJPRSOIDUQVMBAFLDZNIKLHXKCEFXOTAIUICKPDDPKDFOECBWKKORJZCUCTLVZLYOTRQNR");
    tmp_msg_0.value.assign("XLFESFIDXAGPOFTVXTMUEWFGYAXZNQTKJZELKQLKCFECHXPVXJKGOSNKRERKIGMCDPRREZVMSIUCOGQZUCMBTKYJVGVRSGHZPTPUQCDBQECFORQSYBTMWLNXYUWHPY");
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
    msg.setTimeStamp(0.8403330168926709);
    msg.setSource(58356U);
    msg.setSourceEntity(89U);
    msg.setDestination(13430U);
    msg.setDestinationEntity(188U);
    msg.name.assign("PZVAMTGLFVDYCBLXMZRVWTVCSFGMGIZZDBIVISWDZMSHDAYGCSSQOLLIRQCNBATUKFBEBWAKZLJJTXKVPTOJACMQEUYFMWMPVRNTUNPRGCZNZJLDEMJBCDHJQELNPI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DUUMWOBHPOBURKDCLPQVZNHNKREDVTXVZGXTKNLMRAQFMEUQACVQTUQABWYIKZVGJNCFEXVGYLZDIOLIYRBUFQYUCMYQHWEDOEFYTYNWJCKUDTAJFRPSKALENKZGRZISIZNSQVBJLJFLWOQOWFYURJSBSWCTXSIJZPEPIXWZOATWRRPIKHVPZWXPJSLGESGQHCHBYMHJCIUVTMEAHBHTXFXAGFYBDSCK");
    tmp_msg_0.value.assign("MVWIFHEANRBZABTMGZQEPAUWYPHXMPXAXQGIKDJXXYCLDRIWLFZOEEVKFYLFMPNTWVBHQDKHYNLDWTEUGHLJSCLQFRKKMSKZDJXFEMZBBNLKICJJBUAYNDTQRRUPZGXLICYPWPSRJDCOEJHZBSMPKHJTTXCFPMSYUCBIORN");
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
    msg.setTimeStamp(0.22936976775219242);
    msg.setSource(22498U);
    msg.setSourceEntity(226U);
    msg.setDestination(46705U);
    msg.setDestinationEntity(107U);
    msg.name.assign("FKGBAOUZRYXYVXZQOXXRCREPMQNPUXCRHUNIZHAELMQERRPBEFYCIJMHWMYOTNSPTCCZUDDLHQJULMLN");

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
    msg.setTimeStamp(0.0469931686089351);
    msg.setSource(39002U);
    msg.setSourceEntity(180U);
    msg.setDestination(25719U);
    msg.setDestinationEntity(65U);
    msg.name.assign("UKSQVSYJZQPUQSWMKNOFZHMSIAWVTQUGLTWYOJSVOHEPTDKIAYNNLDTMGVCBTZVGADBKFIYPMFVDLVWZBFDJXSOMQIIDNTQELCFECPUMRZHOXOGNEMUYYPFUHRBPIDKAFXXLXHXLYJRCCPYXGFRSCGWAPNWQMTMEOSZNDCWEJLBMXUWJIQZZHRQECHANSBVJZYUEEUXJAGGLOTDIRBBJYTR");

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
    msg.setTimeStamp(0.19262471176661788);
    msg.setSource(41516U);
    msg.setSourceEntity(150U);
    msg.setDestination(28732U);
    msg.setDestinationEntity(20U);
    msg.name.assign("MTQZZTUVCGQUPQQEMZSDKLDBXSJLHEGIISCEUVWHJBXYYITPOOFTUSYKWZLAJNNFBRUREELUIDVFXOZSNOIQHAKBSAZVQHNABOLMGJDWRCGPSMVYAMCMHJHCHYVWRXVDAMOJZFYFVWSNEWGSTGEMATPDNOPQSCPORDIMICKPKTTNRFTNXLXQCOXRBEHUBIKAUYDJKPZNHPXACRXEUWGKLJLWUXIMHBDGYF");

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
    msg.setTimeStamp(0.6426760041457651);
    msg.setSource(31061U);
    msg.setSourceEntity(204U);
    msg.setDestination(30380U);
    msg.setDestinationEntity(233U);
    msg.name.assign("HFDXMAPZMUVUYPJTVQBDDBTMOEUQWCAEQTJPEOEPSKEGMYDAXRDHRALSCHGCYXGVCEVKSBOQZURMIUMZBJQLMIDWPXSEKWGRSQGRWYKAEJNTFCSITROMJKQNZMZCNG");

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
    msg.setTimeStamp(0.6347310270912145);
    msg.setSource(59811U);
    msg.setSourceEntity(241U);
    msg.setDestination(48982U);
    msg.setDestinationEntity(106U);
    msg.timeout = 2895262724U;

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
    msg.setTimeStamp(0.5446850010554899);
    msg.setSource(27114U);
    msg.setSourceEntity(225U);
    msg.setDestination(16770U);
    msg.setDestinationEntity(4U);
    msg.timeout = 1689284810U;

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
    msg.setTimeStamp(0.7157875162477045);
    msg.setSource(40506U);
    msg.setSourceEntity(45U);
    msg.setDestination(3495U);
    msg.setDestinationEntity(223U);
    msg.timeout = 33490577U;

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
    msg.setTimeStamp(0.501655534264274);
    msg.setSource(36077U);
    msg.setSourceEntity(108U);
    msg.setDestination(61242U);
    msg.setDestinationEntity(67U);
    msg.sessid = 3826058519U;

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
    msg.setTimeStamp(0.9729948565978744);
    msg.setSource(52983U);
    msg.setSourceEntity(75U);
    msg.setDestination(37942U);
    msg.setDestinationEntity(135U);
    msg.sessid = 1851320107U;

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
    msg.setTimeStamp(0.17404172063655476);
    msg.setSource(15778U);
    msg.setSourceEntity(162U);
    msg.setDestination(2089U);
    msg.setDestinationEntity(123U);
    msg.sessid = 2531766942U;

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
    msg.setTimeStamp(0.5165186925048609);
    msg.setSource(32621U);
    msg.setSourceEntity(164U);
    msg.setDestination(32713U);
    msg.setDestinationEntity(234U);
    msg.sessid = 2926725459U;
    msg.messages.assign("XCREISAFJXULPJYIHOAOGJSESLOMYGAZEIQJICGCNAYWLKJ");

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
    msg.setTimeStamp(0.9768029788099378);
    msg.setSource(32510U);
    msg.setSourceEntity(121U);
    msg.setDestination(15323U);
    msg.setDestinationEntity(17U);
    msg.sessid = 2988861466U;
    msg.messages.assign("VYCXFUZFYLPRPAMURCIYQEMQSUQLQRKOHXNSUOYHOHMCXQFIEEPYMIGZHQDRUCFDZMLBRKMJJQESBQJBCPAOEBSBFUWPPZXWZKSAUVXKDFJMWKPKONPHZWQSSIDODEOEAJTFTWATNVRWIEMTSGJIZZGVJRBNYEJNTUXHWFSVLAXXRBRATQHYUJCGKCDLHLBIDJYSIL");

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
    msg.setTimeStamp(0.9902423206474631);
    msg.setSource(7993U);
    msg.setSourceEntity(2U);
    msg.setDestination(40359U);
    msg.setDestinationEntity(102U);
    msg.sessid = 1591695215U;
    msg.messages.assign("EBRFYLXZVSJEOJFMLYBFHBBAUHZDNXJLFUUGPJSRPOTZUQYASDJGMWCYDDEZSJNXBMHMVKJNYRXQKRIVBMPOZTBDNGHJIVZCLHQAAKEFDOGNVQBWMYQWSRIONSUXICKTPHEPKOQEEHDCRHWUNTLFZVCKTJILQDELIFAGWOKXSEFZPCW");

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
    msg.setTimeStamp(0.664141962569711);
    msg.setSource(38125U);
    msg.setSourceEntity(151U);
    msg.setDestination(8508U);
    msg.setDestinationEntity(135U);
    msg.sessid = 2078669867U;

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
    msg.setTimeStamp(0.17187875048766643);
    msg.setSource(43996U);
    msg.setSourceEntity(1U);
    msg.setDestination(57715U);
    msg.setDestinationEntity(192U);
    msg.sessid = 2632138200U;

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
    msg.setTimeStamp(0.49061959791992216);
    msg.setSource(61458U);
    msg.setSourceEntity(207U);
    msg.setDestination(55763U);
    msg.setDestinationEntity(4U);
    msg.sessid = 3959360159U;

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
    msg.setTimeStamp(0.8719090084540814);
    msg.setSource(14629U);
    msg.setSourceEntity(29U);
    msg.setDestination(6305U);
    msg.setDestinationEntity(59U);
    msg.sessid = 3422160427U;
    msg.status = 187U;

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
    msg.setTimeStamp(0.40457076690404215);
    msg.setSource(44268U);
    msg.setSourceEntity(205U);
    msg.setDestination(46718U);
    msg.setDestinationEntity(144U);
    msg.sessid = 157723976U;
    msg.status = 162U;

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
    msg.setTimeStamp(0.9438695882321196);
    msg.setSource(33906U);
    msg.setSourceEntity(38U);
    msg.setDestination(4445U);
    msg.setDestinationEntity(223U);
    msg.sessid = 1476001978U;
    msg.status = 102U;

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
    msg.setTimeStamp(0.5351728627687385);
    msg.setSource(28161U);
    msg.setSourceEntity(65U);
    msg.setDestination(15870U);
    msg.setDestinationEntity(117U);
    msg.name.assign("NAUVIQSUFOAHCRNEYJDWYBXSQYUYEEGLMWLLLJPXRZRQEYTAKPVJNLYDLKSRVZUCHZUAZGTPLTCHRBHAZBDGZHVFMNWCZCTIUJEPIARLKWKEGAWFOIQHAQSPZOSDWSIALTGCITOJCWMFXNQZGCKDEXBBBBGWJYYINHXFTJRHNQFGSKOQSRVMTQVDJVKKZLXKNTCCBYHVSTFANXVKXSMMJBPGEOXMODFDIGRQIMWOWPIPFMJDMREUXHPBYDU");

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
    msg.setTimeStamp(0.2955148138291409);
    msg.setSource(27941U);
    msg.setSourceEntity(69U);
    msg.setDestination(2232U);
    msg.setDestinationEntity(38U);
    msg.name.assign("MGQBAWSSDLYHUQOMLQMTBXZFDANDMNGATRXNGGVZFHPKCCEUVECHWOOWTEAKYPSPVHOAMUTRKRGGIZWZPZSHMMVMFQJXSXWHJG");

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
    msg.setTimeStamp(0.15028165435146335);
    msg.setSource(4597U);
    msg.setSourceEntity(121U);
    msg.setDestination(62359U);
    msg.setDestinationEntity(31U);
    msg.name.assign("DXIGOZISPCJKFMFAXDQHTFMGVD");

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
    msg.setTimeStamp(0.7228394348021507);
    msg.setSource(39371U);
    msg.setSourceEntity(217U);
    msg.setDestination(58839U);
    msg.setDestinationEntity(90U);
    msg.name.assign("PJPVNBVQBTKRGOLTSMUFJUEKWIBCFGMRYVWTFKVOCWQDLNDIECJIJFAVPFCIZMBWARNHJIHKQENLKFMAZCXZPJNZRFSREEZYWXRAEHIRVDNWSNOVWLGQYUQYEPOOILCGJGTBFYTGGIUZOCTFNHSIJMZWVGDXQSTZLDBMXEXSHDMISRBNOVOCDBAZAXLJEWAZQHSSXHLTUDYCQXTYKXKMHWUTUGGPDXKRANSBLYPAKD");

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
    msg.setTimeStamp(0.27535338355055217);
    msg.setSource(64656U);
    msg.setSourceEntity(98U);
    msg.setDestination(5691U);
    msg.setDestinationEntity(127U);
    msg.name.assign("ECVHFBUWOKDSLDUWIMGWGOPNEXIEWPORFQZQUHAVYACMUVOZIDRKQHBCZAAVSJSOMPTNYSZXIOTCLHDDZLVXYNZUNSAFYGAIGPIAXELKMPYRMIJUPFEAEQDSRBXOEAGCTRRZFKQJNAJNTPKNCCHTVEJXMFXKKUWBNOGYNQVSYSZVYLMTBDHKQGRLYTGJXISQMJUWHFOBDHLRMDP");

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
    msg.setTimeStamp(0.8521707826510584);
    msg.setSource(48498U);
    msg.setSourceEntity(72U);
    msg.setDestination(55302U);
    msg.setDestinationEntity(69U);
    msg.name.assign("QEKMKPRHELAXALMXOGATRVNJEWGKIUFUEXRMCWWHLYUCRJCLQKXRWZJXBDZGGXEGUZQNZCVHLNYYBBPTKPNVPBETFBWBGZATHLFRMLVWODDKHXWVKOHITPCQKOCZAUFLDIYVIOHJCINMQUSXIMYZIRSSUARKIJBLFDYOWGXOMPPEAHZWMBTOJSSICCUIADYJEJSVVQ");

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
    msg.setTimeStamp(0.8399288969500691);
    msg.setSource(40112U);
    msg.setSourceEntity(30U);
    msg.setDestination(7944U);
    msg.setDestinationEntity(139U);
    msg.type = 159U;
    msg.error.assign("LCGOAZKWWZZSXPNQZOFRNOJVLVNRDTIXRFIFKTKBVEICQEAKUOKXYVJBAHNFOUSULHTAZDQUHFOQNPWOQZBPONHJWJUVRUQSSEIFMBUCKSXQOHYIKIFRDCVLNS");

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
    msg.setTimeStamp(0.08296421313101943);
    msg.setSource(48360U);
    msg.setSourceEntity(204U);
    msg.setDestination(26193U);
    msg.setDestinationEntity(213U);
    msg.type = 24U;
    msg.error.assign("LXGUPUQNGGWQBNTXVWUMVJFDYVTLXKATBOMQXNFIVYUJIULKDEDLVRLWDQWNPFKGKYBVHCLYRNSDFEKGNIMIGFIQVOHEJXAAQCWPTMSJHOHQMKVDXUZPTKKPIPSOWIGMPFXOEZZ");

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
    msg.setTimeStamp(0.05651141995976239);
    msg.setSource(15975U);
    msg.setSourceEntity(204U);
    msg.setDestination(47584U);
    msg.setDestinationEntity(140U);
    msg.type = 89U;
    msg.error.assign("TURYYANTPZLNOQCYVJCBXDMKYIKCAGIXZGSNXHBLWPDQPOUQDIOGHHZKFYRJQQZKETVXUEESSACUUGSKKFFBFTLFVXJGRYAMJIDYIJBLVSTGHGEW");

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
    msg.setTimeStamp(0.1623959587410212);
    msg.setSource(18256U);
    msg.setSourceEntity(116U);
    msg.setDestination(23839U);
    msg.setDestinationEntity(60U);
    msg.seq = 24768U;
    msg.sys_dst.assign("PKVLUQQQUNVMYJEZFFQPPXWZBOZEMANTOVORKVERPIPPS");
    msg.flags = 194U;
    const char tmp_msg_0[] = {4, 30, -69, 120, -40, -66, -57, 67, -61, -66, -28, 104, 2, 42, 100, 90, 56, 107, -45, -91, -119, -84, -72, 73, 124, 38, 76, 1, 71, -20, -94, -108, -38, -110, -94, 11, -42, 60, -62, -80, 43, 45, 87, 35, -26, 72, 97, -27, 45, -37, -95, 84, -1, -53, 23, -21, 21, -23, 10, 120, -96, -81, -111, 77, 9, 26, -65, 121, -29, -72, -8, 115, -99, 125, 126, 18, -52, 109, 15, 114, 71, 21, -37, 116, -41, 5, 37, 99, -53, -58, -84, 46, -118, 17, -110, 56, 81, -86, -37, 92, 101, -121, 46, 105, 18, -63, -67, -5, 101, -20, -103, 107, -52, 74, 2, 31, -18, 16, -75, 13, 7, -51, 73, 52, 46, 48, 21, -91, -125, -113, -128, -72, -31, -105, -11, -27, -102, 21, -45, 14, -49, -118, 85, -24, -43, -77, 3, 101, -113, -97, 48, 9, 125, -50, 20, 80, 88, -91, -91, 57, -72, -119, 74, -2, -34, -30, -116, 42, 7, -108, -60, -111, 9, 2, -42, 83, -84, -52, 51, 74, 92, 108, 67, -50, 0, -19, -6, 47, 50, -1, 68, -13, -30, 75, -68, -41, 84, -71, 79, -84, 55, 24, -113};
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
    msg.setTimeStamp(0.9691232364296286);
    msg.setSource(46580U);
    msg.setSourceEntity(94U);
    msg.setDestination(6428U);
    msg.setDestinationEntity(135U);
    msg.seq = 23310U;
    msg.sys_dst.assign("JCHEWIZBEXWLHVBRRVEQOAZVDSERQPYRYJVUKWQQLDGAGVECCOGZSEZFNGHDCQUZFLGOBWNGPKZFXOCCBMYMSNLDTAJKBIWSOOYPESDMLRJJLJCUOOXPHRWRYKACLEVQKSKLPKYYDKUVWPJMXWFMNTAMEINAUHPFUSHWNXOKIIYOGTGHZUZDQNITMICSTMCBSXPSB");
    msg.flags = 165U;
    const char tmp_msg_0[] = {21, 58, 50, -12, -125, 27, 121, 5, 30, -124, 124, -125, 3, 82, -6, -117, -11, 95, 66, 58, -106, 24, -110, 120, 49, 47, -100, -115, -123, -8, -59, 93, -105, -70, -40, 19, 66, -18, -22, 111, 74, 94, -92, 90, -102, 51, 119, 51, -31, -37, -70, -17, 93, 19, -59, -11, -123, -56, 92, -60, -35, -57, 63, -118, 102, 66, 20, -57, 38, 0, 96, 8, 38, -74, 16, -115, -4, -10, 80, 67, 104, 126, -112, 9, 38, -46, -84, 57, 35, 115, -23, 59, -48, -120, 126, -78, -65, 104, 61, 51, -27, 67, -79, -73, -42, -120, 54, 3, 120, 45, -116, -2, 82, 113, -87, 1, 27, -31, -124, 22, 29, -15, -103, -71, 34, -103, 101, -98, -12, 7, 126, 60, -112, 113, -55, 19, -117, 107, -39, 6, 98, 106, -68, 115, -88, 18, 25, 58, -32, -118, 64, 38, 88, 25, 32, 58, -33, 55, 43, -125, 25, 78, -38, -33, 119, -76, -38, -39, -100, 17, 22, 34, -92, 59, -46, -31, -105, 69, 58, 86, 30, 114, 87, -73, -53, 37, 96, 86, -116, -32, 87, -107, -59, -116, -3, 122, 112, -98, 52, 57, 7, -4, 67, 80, 125, -123, -124, -64, -107, -113, -120, 5, 8, -113, -59, 42, 39, -38, -34, 83, 119, 35, 101, -29, -99, -104, -90, 54, 78};
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
    msg.setTimeStamp(0.17048254985619526);
    msg.setSource(22769U);
    msg.setSourceEntity(138U);
    msg.setDestination(51905U);
    msg.setDestinationEntity(203U);
    msg.seq = 42522U;
    msg.sys_dst.assign("WGKFTGIUPXAAICCNEBTXLILUAIWOLZSYRNWFDWMTAURBVKWKDXHFMJWVESSPQNBTSCLPZAMORYSLMCKHKBY");
    msg.flags = 209U;
    const char tmp_msg_0[] = {-122, -7, -25, 83, 84, 63, -57, -27, 111, -89, -12, -111, -96, -91, -104, 114, 26, -75, -10, -117, -72, -125, -100, 91, -39, 81, 49, -42, 89, 107, -2, -16, -25, 49, -44, -120, 26, 115, 34, 49, 60, -52, 112, -25, 95, -60, 61, 30, 34, -27, -80, -117, -10, 0, -95, -29, 99, -93, -22, -99, 17, -37, 76, 0, -100, -124, 71, 85, -81, -35, 47, 36, 81, 63, -35, -106, -7, 99, -88, 74, -22, -119, -51, 62, -94, 83, -5, 47, -66, -21, 114, 33, 125, -73, -71, 44, 102, -57, -89, -8, -3, 5, -115, -32, -45, -7, 92, 70, -126, 19, -97, -69, -79, 5, 123, -40, 59, -85, -124, -59, -117, 124, -33, 79, 118, -109, 97, 107, 23, -60, 120, 19, -92, 13, -90, -26, 52, 96, -67, 36, 31, 15, -44, 74, -127, -124, 94, -61, 0, -86, 118, 117, 72, 80, 71, 101, 125, 48, -42, -31, -18, 13, 51, 71, -45, -25, 121, -105, 82, -67, -64, -122, 53, 42, 81, -32, -120, -104, -14, -69, 26, -98, 116, -35, 25, 30, 15, -89, -50, 91, -6, -80, -128, 110, 12, 5, 45, 18, -80, -92, 43, -17, 102, 44, -71, -117, 68, -35, -19, -121, 65, 84, 54, -109, 64, 102, 95, -20, -74, -96, -78, 6, -91, 123, -42, 94, -124, 69, 28, 69, -85, -26, 79, 98, -88, 27, -69, 78, -106, -90, 3, 73, 122, 31, -117};
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
    msg.setTimeStamp(0.9539213410989945);
    msg.setSource(54577U);
    msg.setSourceEntity(194U);
    msg.setDestination(7919U);
    msg.setDestinationEntity(95U);
    msg.sys_src.assign("MQPIHNIHHJBTQLVBVWGFYBAFXQTAXZZMGWSEKFNYJCUABVCDZAZJNSEPICKORXXAHOEVHKWBLRYULTQMORCRDPANNP");
    msg.sys_dst.assign("JVHYBPXJWNDXPSKGAMHMKBTGODXZVUJTZTEQOVHJLUQDNNNYTCHPNIJRQNKYMWAAOVHXAZRRHQFMCAWTBFZQBWNBGCQRUXTEHBIBGQASXGQCKXPBUAGFDDHJGOSAFRFVIYECTEIOJSITPCKBWZZGZVQSPWGISLAARVVLVCCVMXGYFYOZTDSFRCIOMPKUXEPYLORYOXZODKHJUUSFNCQWSM");
    msg.flags = 35U;
    const char tmp_msg_0[] = {-33, 32, 75, 70, -19, 43, -59, -103, -21, 118, -38, -69, -67, -20, -7, -22, -72, 83, 89, -126, -116, 43, -128, 15, 125, 90, -80, -10, -27, -55, -126, -116, -12, 125, 40, -8, 85, 13, -2, 82, 119, -78, 72, -123, 64, 35, 36, -42, 120, 87, -27, -101, 40, 96, -42, -56, 71, 66, 58, 56, -88, -39, 66, 64, -91, -57, -81, -90, -70, -27, -122, 113, -123, -58, 86, -14, 41, 82, -40, 52, 110, 125, 51, -48, 79, 50, 6, -79, -93, 102, 51, -8, -1, 51, -59, -94, -86, 63, 88, 57, 35, 29, -36, 95, 52, -100, -54, -101, -74, -118, 118, 39, 60, -123, 98, -126, 94, -3, 115, 103, -23, -48, -110, -4, -78, -21, 86, 75, -117, 77, 92, 105, 66, 72, -127, 50, -79, 78, 125, -33, 81, 71, 60, 71, -46, -22, 2, 121, -79, -15, -3, 63, -116, -87, 78, 89, 16, -71, -77, -38, 90, -50, -51, -15, -34, 56, -11, 14, 7, 121, 61, 81, 16, 37, 18, -125, -127, -123, 88, 126, 12, -117, -102, -77, 10, 37, -80, -15, -24, 59, 101, -46, 32, 115, -10, -82, -89, -93, 89, 121, -85, 124, 112, 24, 73, -68};
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
    msg.setTimeStamp(0.521783884195754);
    msg.setSource(23444U);
    msg.setSourceEntity(37U);
    msg.setDestination(31734U);
    msg.setDestinationEntity(194U);
    msg.sys_src.assign("MBAUZFQNILTEESPPNQQJRNOXUMRIXMLDRUKVPZKCDJCAKWSNGVYVYEAAQDGVOSFRRPYRSCEWRUVZXYDTXZVNZUQGUBBOEKJFWHWLDJQWJYCVQJWKAPLGXBDCMONXLFXPMDUPOPJWCWSOTTIWJZTUMJPXICGDOARGNGBGJKLMTCFNTNGIBHKQBSUBFEKBQANQMYXCEMTEIIKIAYH");
    msg.sys_dst.assign("PKBVLMGWJAYOBTTTTWEJLGQSFAXOJOMVEZUDNIPTBHLIDTCBCQHISXUXZHQHMQLYBCEPNJSBAAOJHBVDUZXSOUTNDGRKPSYASPRYZGJSGQPZMDICMZENKWNCRRCFIHLQVXOETROFXDUKHDRQMIWKRNVCKFEFBSCILUAJZVLL");
    msg.flags = 211U;
    const char tmp_msg_0[] = {87, 48, 61, 25, -91, -35, 51, 36, -96, -10, -124, -2, -104, 81, 16, 92, -117, -48, 126, 69, -86, 43, 22, -42, 96, -70, 34, -92, 75, 12, 43, 38, 26, 101, -125, 94, 97, -18, -114, 89, -56, -104, -46, -74, 105, -105, 118, 44, -106, -128, 23, 32, -63, -17, 60, 16, 14, -105, -9, 19, -38, -111, 46, 51, 70, -124, 51, 54, 27, 1, 100, -24, -43, -9, -79, -32, -70, -43, 107, -3, 27, 103, -26, -84, -39, -2, 81, 84, -7, 103, 87, 12, 17, 63, -127, -8, -4, 55, 3, 46, -70, 44, -51, 71, -5, 76, -55, 16, 87, -65, -23, 111, -105, -20, 102, 43, 14, -12, 55, -104, 87, -56, -48, 69, 2, 73, -32, 79, -25, -77, -118, 126, -120, -126, -27, -88, -121, 62, -112, -17, -26, 28, 63, -105, 71, -122, 41, -42, 21, -112, 112, -88, 114, 121, -84, 73, 73, -25, -14, 60, -69, 38, -27, -119, 72, -71, -37, 46, 119, 10, 125, -19, 119, 69, -94, 73, -67, 21, 110, -77, -90, -75, -91, -53, -36, -2, 125, 118, 61, 37, 113, 85, 92, 32, 18, 16, 61, -74, 120, 43, -61, -31, -76, 9, -2, 112, -105, -56, 18, -42, -66, -103, -122, -66, 75, -79, -28, -16, -111, -120, 24, 68, 42, 8, -95, -116, -113, 34, -105, 94, 30, -123, 3, -35, -57, -33, 87, -37, -119, -128};
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
    msg.setTimeStamp(0.6641364713813298);
    msg.setSource(2240U);
    msg.setSourceEntity(36U);
    msg.setDestination(59273U);
    msg.setDestinationEntity(97U);
    msg.sys_src.assign("LEFSRHVDOCEOYDSPLPBAHTVKYMWUMFGFIBTKWKQJJXRBYDXIDTFJHUIALNDSHSRFUXSFGLOEOWIDVYHXPSLIGIMMKMQBITYNUMCVANJVTTWJFXTTNOXVZCXQPOZBEHZOWWVLPQREKZCRKQMLYEEGENAJYPLMPYNCJAEXZRGCBBCFWRAJPGFMCJRPQDUQOZCHZOZVZDQQ");
    msg.sys_dst.assign("JMZPJNYSCSVTUCLAJJQQXUPVJYWHCIGIOWEUFRDBQDRDOJTKROZYAELEQHEBIUAMUVISKZQAFMLXDCCAZQKBVIURLWBHENYTHFQAGFBGPDCQNFFWEZSBYEMWIQGXXFWTIHIFPSLKXGBUSXGONJNHPVPOVVALTOLRUPKCMRGHGYVTHDKTGONVHSSGFORZWHPCMRFEXLNPAT");
    msg.flags = 67U;
    const char tmp_msg_0[] = {29, -104, -16, -56, -49, 126, -19, 39, -37, -40, -36, 74, -100, 33, 1, -2, 123, -20, -75, 106, 78, 120, -106, -110, 55, -51, -5, -39, 43, -109, -76, -81, 11, 104, -71, 19, -54, -68, 101, 23, -36, 69, 21, 110, 37, -42, -122, -86, 111, -126, -35, -119, -47, 64, 44, 45, 62, 97, 41, -1, -96, 124, 61, -13, -82, 38, -70, -35, -73, 80, -21, 69, 16, -96, 75, 30, -60, 25, -125, 123, -9, -28, 86, 68, -75, 112, 76, 21, -35, -1, -19, 92, 52, 68, -51, -57, 58, 91, 115, -119, -8, 11, 52, -7, 120, -120, -12, -33, 58, 11, 126, 80, 22, -106, 116, -39, 72, -9, 16, 112, -119, 79, -116, 111, -92, 63, -79, 6, -60, 23, 72, 50, 124, -74, -90, 3, -56, 101, 76, -16, 99, -111, 4, 89, -9, -56, -63, -72, -25, -42, -12, -47, -52, 70, -6, -88, -3, -96, 10, 60, -3, -19, -83, 4, 25, -99, 31, -29, 79, 92, -47, 72, -3, -9, 5, 80, -119, 29, -125, 13, 35, 32, -33, -12, 96, 31, 101, -29, -53, 5, -96, 23, 58, 3, -23, 23, -95, 42, 67, 62, 103, -50, 89, -89, -41, 121, -120, 121, -72, -111, 51, -13, 124, 64, 78, 30, 63, -115, 78, 91, -124, 72, -32, 19, -23, -100, 2, 8, 69, 27, 16, -80, 79};
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
    msg.setTimeStamp(0.17449568725175624);
    msg.setSource(14252U);
    msg.setSourceEntity(68U);
    msg.setDestination(62635U);
    msg.setDestinationEntity(238U);
    msg.seq = 61735U;
    msg.value = 124U;
    msg.error.assign("KQDBZNRJAWHMBKAFJYXHSTJQLXSDRUDALIEVVINUQHCPRRNICYXRMWFMTJTNFMVLHWFJNYVBOQQNE");

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
    msg.setTimeStamp(0.20471314579668332);
    msg.setSource(21408U);
    msg.setSourceEntity(115U);
    msg.setDestination(18006U);
    msg.setDestinationEntity(59U);
    msg.seq = 43919U;
    msg.value = 63U;
    msg.error.assign("SVIFVVHZXOEDNNAEWLRZFQRQOOAIHNIWOLXMINVKUPWUEKMTUAVAUZFTSSKMJEAWHOQSNPUJHSGTXTRKXRUSILQABMRQYGGKOBXBBYRPUGWSQHWXPWOQKBZERGSBDTMJRBBZCWZDQEVMZRABRPIDLTWNJCETTDBDNGGSEHKNAEFFYHYCHMOJJPXXAHZIJPL");

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
    msg.setTimeStamp(0.9856266577158213);
    msg.setSource(12301U);
    msg.setSourceEntity(218U);
    msg.setDestination(63470U);
    msg.setDestinationEntity(204U);
    msg.seq = 36105U;
    msg.value = 243U;
    msg.error.assign("SXHJZMFPLKQAEITVJNKZUFKBQJJFHIIVOXAADYBDRVDJNKDXRWVKETEQYKCKPOEHDNXGLMPYWANCCXOGUZKAQPABOCFYYGEHXPPMWFHHSROXJCVMPLNLELQWGSHLSZSWXWOEWFAGBYWKNOWTLKURFJPLLTSHEHDDQTUCRBFOGCBDNTXCTZPSORZ");

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
    msg.setTimeStamp(0.23102588674163083);
    msg.setSource(8085U);
    msg.setSourceEntity(114U);
    msg.setDestination(6481U);
    msg.setDestinationEntity(135U);
    msg.seq = 55389U;
    msg.sys.assign("LHTGYTNOYMFWFBZDPMJTATKNCKMISPECBGBQKTRHOOYNPNXWEKAIURWLJINKZRZUAYAAVLEMNKGSHHIYIQICDNFEWPYHALQVDAVKSFZGBQLOTJQBOBYCZGOLREBAIPWBHGZKPMGZUZWOFVIXDUULJCTDXOFSVRHSYEUWJXFSULHSYPQURSXMWAPTCRNQEWVXGV");
    msg.value = 0.5684383605396857;

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
    msg.setTimeStamp(0.3351371587491858);
    msg.setSource(5530U);
    msg.setSourceEntity(83U);
    msg.setDestination(17072U);
    msg.setDestinationEntity(204U);
    msg.seq = 31082U;
    msg.sys.assign("RBRFYYPUGNHGQUWSJKGOIHXWKDERTXPMZIVIEKYWEGMGRENIWBBHVCDFQGUTZWODQYCWTMLHRMCKOFJJULQCHKYBANVLRXTPNDTDPFKMZNAQJCARHBOKTLHOIRWPOWLKTYAVEUGYGPUZBIFPVJSEVFIAXLEDCQRJOZM");
    msg.value = 0.290611891024789;

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
    msg.setTimeStamp(0.6600116641482947);
    msg.setSource(22476U);
    msg.setSourceEntity(165U);
    msg.setDestination(2623U);
    msg.setDestinationEntity(189U);
    msg.seq = 26869U;
    msg.sys.assign("KMOUHDTDKVQCXIKNNIMOBLZEEQHEGIILNEMWYRHVLAESUTPDPPKOTPJKHVGLRMVFTVZJKZLWRAXYFWOO");
    msg.value = 0.33806227526747556;

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
    msg.setTimeStamp(0.27722533224119617);
    msg.setSource(64202U);
    msg.setSourceEntity(229U);
    msg.setDestination(289U);
    msg.setDestinationEntity(248U);
    msg.action = 209U;
    msg.longain = 0.4579456954245287;
    msg.latgain = 0.06648033854820301;
    msg.bondthick = 951714201U;
    msg.leadgain = 0.551477022105044;
    msg.deconflgain = 0.7455512258396787;

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
    msg.setTimeStamp(0.20655557916019507);
    msg.setSource(55138U);
    msg.setSourceEntity(169U);
    msg.setDestination(27440U);
    msg.setDestinationEntity(111U);
    msg.action = 226U;
    msg.longain = 0.5728046059799194;
    msg.latgain = 0.3602947544030233;
    msg.bondthick = 3687532361U;
    msg.leadgain = 0.9345536759621399;
    msg.deconflgain = 0.11692818101039426;

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
    msg.setTimeStamp(0.9350499846991563);
    msg.setSource(61654U);
    msg.setSourceEntity(121U);
    msg.setDestination(16358U);
    msg.setDestinationEntity(150U);
    msg.action = 238U;
    msg.longain = 0.38230719886435194;
    msg.latgain = 0.5234094295059034;
    msg.bondthick = 48930153U;
    msg.leadgain = 0.8966945271119475;
    msg.deconflgain = 0.9483240561908559;

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
    msg.setTimeStamp(0.971917855841046);
    msg.setSource(4895U);
    msg.setSourceEntity(2U);
    msg.setDestination(11535U);
    msg.setDestinationEntity(119U);
    msg.err_mean = 0.021108474184834414;
    msg.dist_min_abs = 0.831015663207862;
    msg.dist_min_mean = 0.6536763775650348;

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
    msg.setTimeStamp(0.3816612430773155);
    msg.setSource(26717U);
    msg.setSourceEntity(158U);
    msg.setDestination(10240U);
    msg.setDestinationEntity(205U);
    msg.err_mean = 0.5758952571868877;
    msg.dist_min_abs = 0.10659978193169484;
    msg.dist_min_mean = 0.009535547663730548;

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
    msg.setTimeStamp(0.23031191864298395);
    msg.setSource(17556U);
    msg.setSourceEntity(150U);
    msg.setDestination(30432U);
    msg.setDestinationEntity(245U);
    msg.err_mean = 0.34112035343921254;
    msg.dist_min_abs = 0.21530196079997233;
    msg.dist_min_mean = 0.8621935941143419;

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
    msg.setTimeStamp(0.6574023226099166);
    msg.setSource(62852U);
    msg.setSourceEntity(217U);
    msg.setDestination(3318U);
    msg.setDestinationEntity(95U);
    msg.uid = 172U;
    msg.frag_number = 32U;
    msg.num_frags = 187U;
    const char tmp_msg_0[] = {-48, 87, 103, -107, 31, 102, -18, -18, 64, 108, -119, -102, 43, 67, -115, -67, -54, 76, -43, 112, 103, -26, 122, 78, -83, -107, -111, 124, 95, -108, 19, 6, -113, 15, 77, 85, 41, 116, 15, 90, 80, -81, -82, 86, -113, -96, -73, 37, -117, 43, 90, 97, 86, 12, 92, -39, -22, -95, -104, 97, -36, 92, 3, -49, -56, 7, 98, -121, 19, -23, 18, 45, 0, -110, 110, -118, -87, 60, 109, -125, -34, -94, 99, 99, -30, -30, 40, -39, -35, -34, 81, 2, -38, 52, -123, -110, 1, -36, -25, 41, -34, -42, -6, -122, 1, 112, -81, -70, -54, -52, -86, 52, -92, 69, -109, 56, 64, 32, -81, 97, 79, -81, 25, 36, 81, 84, 121, -80, 21, -62, 123, -67, 17, 113, -18, 64, 112, -44, 81, 108, -100, 24, -96};
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
    msg.setTimeStamp(0.2517900596903657);
    msg.setSource(53786U);
    msg.setSourceEntity(231U);
    msg.setDestination(55833U);
    msg.setDestinationEntity(71U);
    msg.uid = 246U;
    msg.frag_number = 182U;
    msg.num_frags = 199U;
    const char tmp_msg_0[] = {-18, 69, 1, -26, 121, 39, 6, 43, 6, -11, -128, -115, 108, 96, -21, -32, 78, -73, 49, 29, -99, 124, -25, -94, -99, -102};
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
    msg.setTimeStamp(0.33769608790790884);
    msg.setSource(46773U);
    msg.setSourceEntity(150U);
    msg.setDestination(17628U);
    msg.setDestinationEntity(99U);
    msg.uid = 184U;
    msg.frag_number = 48U;
    msg.num_frags = 70U;
    const char tmp_msg_0[] = {-41, -100, 62, -123, -88, -98, 11, -2, 42, -8, 114, -25, 59, 27, 26, 80, -1, 69, 43, -53, 3, -116, -51, -104, -10, -33, 71, 24, -13, 86, -82, 67, -115, -91, -88, 55, 96, -50, -27, 66, -120, -21, 20, -86, 12, 46, -44, 81, -45, -107, -52, -33, 116, -45, -3, 95, 74, -80, -12, 25, -84, -63, 44, 104, 16, 72, -35, 14, 56, 99, -61, 60, -90, -98, -45, -90, 114, -121, -115, -52, 120, -71, 58, -128, -39, 80, -67, -32, 82, 103, 97, 7, -51, -4, -72, 75, -52, 68, 85, -111, 38, -58, 44, 31, 72, -22, -71, -74, 102, -39, 93, 83, 52, 30, 84, -22, -79, 46, 92, -126, 54, -47, -10, -128, 1, -23, 73, 6, -49, -60, 26, 41, -126, 67, -70, -66, -8, 109, -59, 119, 14, -59};
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
    msg.setTimeStamp(0.14866580194064127);
    msg.setSource(62483U);
    msg.setSourceEntity(144U);
    msg.setDestination(64589U);
    msg.setDestinationEntity(229U);
    msg.content_type.assign("HCTQMOYVBPCGZBUHIXUGBVSKCTWPIOEJPSWSWBCTWKZYUDKZZDZWWRLDBSMQXDJXTWBNFGYUPZEIJANXPXTUDHHYOFAUNYSIXVCJMBRACFGZFKULKLKRLOEPJRHQLSDFBMNCJOKGJQRYDYAMUIPRJMFGSOVMLDWNTMHPGRHXWGXXEFINQBATCNCHALRRYBZEDJYSKILCFROJGKEFVVXOEYZDWMFATQLPLPNUOUSASTVIHNHZQGIAQ");
    const char tmp_msg_0[] = {-19, -70, -124, 76, 71, -29, -22, -83, 112, 38, 24, 39, 90, 120, 51, -96, 22, -36, 54, 25, -117, 121, 60, 126, -4, -87, 92, -75, -66, 66, -40, 67, -34, 60, -29, -106, -4, 73, 63, 102, 19, -118, -57, 99, -118, 11, -45, 32, -119, 100, -97, 59, -19, -46, -16, -105, 37, -10, 79, -80, -18, 31, -25, -54, 27, 4, 54, 81, 113, -106, -1, -38, -22, -87, -52};
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
    msg.setTimeStamp(0.11790724597153224);
    msg.setSource(5138U);
    msg.setSourceEntity(132U);
    msg.setDestination(10107U);
    msg.setDestinationEntity(247U);
    msg.content_type.assign("OFDJQNTINBDJYYBAQHEECMOCLGDWYAANCVXCVDYSCIP");
    const char tmp_msg_0[] = {-70, -82, 35, 71, -78, 53, 79, 31, 2, 126, 13, -57, -95, 74, -58, 17, -14, -69, 20, -128, -86, 96, -114, 41, 112, -112, -75, -26, -33, -12, -10, -2, 44, -44, -48, 25, 44, 42, 37, 61, -125, 122, 36, -95, 8, 19, 92, 79, 38, -100, -40, 85, 65, -50, -45, -57, -15, 49, -120, 99, -18, -118, -92, -103, 90, -125, -57, 90, -20, 106, 71, -122, -66, 44, 99, 93, 3, 59, -123, -125, -107, 104, -29, 36, 31, -12, -31, 104, -41, 91, -48, -97, 21, -118, -126, -31, 94, -83, -104, -58, -39, 21, -24, 39, 105, 100, -46, -105, 77, -32, 77, -59, -119, 59, -13, -99, 24, -33, -11, 49, 62, 76, 59, 106, 120, 33, 8, -82, 112, 67, -32, -17, -101, 58, 21, 53, -92, -5, 105, 84, 74, 107, -75, -43, 43, -49, 124, -82, 49, 84, -98, 123, 38, 94, -86, 50, -8, -125, -80, 10, 58, 1, -9, 56, 6, -11, 75, -52, 81, 118, 101, -108, 29, 91};
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
    msg.setTimeStamp(0.045533015427997814);
    msg.setSource(20737U);
    msg.setSourceEntity(77U);
    msg.setDestination(15547U);
    msg.setDestinationEntity(171U);
    msg.content_type.assign("NBFAQRYRADYDGRMCRKRSOLLFFVLPYAHAOXYRKKZZCHTCHDIKACHBTDALVLOEKYTWQXDXUTMQRJAUDVWNFWLURFUATSEMGJDEVP");
    const char tmp_msg_0[] = {-108, 105, 57, -114, -32, 8, 78, -66, 125, -88, -80, 24, 64, -51, 105, -118, 22, -89, 114, 38, -50, -100, -89, 18, -19, -101, 15, 108, -2, 62, -86, -35, 124, 52, -121, -120, -60, -19, -47, 108, 126, -106, 73, 125, 67, 93, 75, 68, 10, 99, -52, 109, -122, 97, -55, 53, 120, -118, 17, -95, 68, -9, 5, -79, -100, 4, -62, 37, -89, -101, -21, 109, 33, -16, -64, 119, 77, -77, 66, -100, 30, -116, -25, -117, 64, -96, -8, 26, 0, 50, -71, 23, 85, 18, 47, 7, -61, -92, 104, 120, 48, -47, 69, -67, -127, -38, 56, -24, 20, -22, -92, -53, -33, 45, 32, 98, -88, -111, 23, -109, -85, -11, -112, -75, -66, -11, -76, -107, -71, -118, 112, -44, -75, -103, -21, -54, -108, -103, -21, 26, 8, -86, -14, 86, 14, 68, 9, -59, 10, -45, -61, 14, 82, 112, -126, 59, -5, 117, -101, 50, -31};
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
    msg.setTimeStamp(0.20418785213420654);
    msg.setSource(4571U);
    msg.setSourceEntity(102U);
    msg.setDestination(12521U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.8768314579245703);
    msg.setSource(46071U);
    msg.setSourceEntity(145U);
    msg.setDestination(55746U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.11253799908405637);
    msg.setSource(10799U);
    msg.setSourceEntity(119U);
    msg.setDestination(28896U);
    msg.setDestinationEntity(209U);

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
