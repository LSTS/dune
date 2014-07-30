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
    msg.setTimeStamp(0.805081831224);
    msg.setSource(11076U);
    msg.setSourceEntity(2U);
    msg.setDestination(14960U);
    msg.setDestinationEntity(185U);
    msg.state = 4U;
    msg.flags = 5U;
    msg.description.assign("YRLHNYFRZWTVJPYWJHFYMNUNLJHJXQHFMLLREGVAILREFASWIQOIUIOUVXSUDZTRYHCICANZBNBKATZUHDJKHONZYTVXESYIQEWXNMGYIOPPKCXKIKYPCGAWSBPCLDNSOTUMBFVTXPFVGMAKSIALGQHRZJZTLWQEGDXSBPC");

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
    msg.setTimeStamp(0.488911711383);
    msg.setSource(53190U);
    msg.setSourceEntity(107U);
    msg.setDestination(21671U);
    msg.setDestinationEntity(150U);
    msg.state = 85U;
    msg.flags = 152U;
    msg.description.assign("IXXJDNQBZCYYORTFAXJMUGJFKDZPFJZMBRYBEJVWSAAMWPPHMSDSUHLIAXNSMTHAPUTCAYWTZIMGUNBVPNLZKOGPSGRYPGBHXEBVDWGZKEQTNQFDOKYHKFUVFYZ");

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
    msg.setTimeStamp(0.875383104234);
    msg.setSource(25437U);
    msg.setSourceEntity(36U);
    msg.setDestination(62525U);
    msg.setDestinationEntity(48U);
    msg.state = 30U;
    msg.flags = 149U;
    msg.description.assign("WLFYLMVONYWDJQBPCIQVBAYXTJRKQWYBEHCUIVUTSSNSVWOHKMCJAFTVGEQZOCVDZKRPCIMOZSLBDOHURAGSPEIQRSAIKJNSVNOKMBMUCUORGWNTPKHXLKCZXDTQVHXBGAMHHNDGMAIUFPXJAWO");

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
    msg.setTimeStamp(0.247140665723);
    msg.setSource(15933U);
    msg.setSourceEntity(188U);
    msg.setDestination(41150U);
    msg.setDestinationEntity(231U);

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
    msg.setTimeStamp(0.227319327084);
    msg.setSource(54736U);
    msg.setSourceEntity(235U);
    msg.setDestination(25554U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.699391812531);
    msg.setSource(27724U);
    msg.setSourceEntity(128U);
    msg.setDestination(38341U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.323179799969);
    msg.setSource(2396U);
    msg.setSourceEntity(34U);
    msg.setDestination(5308U);
    msg.setDestinationEntity(154U);
    msg.id = 202U;
    msg.label.assign("LMDNLXRZFBLOUVCIGJPPTAPOHCTAYGEFZXPOMIFSORJYPYKLURUIEQBKDXFXDSMUDVIFWTTXMQKUTACOFYXSWYVAEIEFCPQVPMGS");
    msg.component.assign("VFCVOTUHXYUCPIUPORRRUNPCXQKMDXGSFTSSDNYKFZUMNLQJHDKYGOZNTEOCZBXQJBTHAUBRQALIEEQWTYUMDDZLAHJVVISAISESYE");
    msg.act_time = 50316U;
    msg.deact_time = 60807U;

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
    msg.setTimeStamp(0.0587998143806);
    msg.setSource(46854U);
    msg.setSourceEntity(117U);
    msg.setDestination(13925U);
    msg.setDestinationEntity(121U);
    msg.id = 33U;
    msg.label.assign("GAJPLPELZBCUBPCMUUJFDWROJEOALCGOYZEJTPDDWFPWRHXRQUFKXRALORUNWDGECXSHIAISEHBVFLDOERKGXXMYCSESDJHBLLGBQIUZFWYVVKPHQNSNTWSDAOIBKCRZJMURBQNCGYUOSVSFNAHZWEHAAKKMOIAZMXZQGOFKDLBQUQYKHGSOYFWEITLZKTIZHMICXWPFQDPQDVMMCWHYCQVJXIVA");
    msg.component.assign("UNLIYETJNSMSQZXZIXKICYXDOHUHADHACKNXWGYMUUPVBMBFBDKBIMMWDMOVPELTQTADJCFBAKSSEKFHADUFUSAJWPZYLBLYUCDSGBJTRSJPZZQECOKLNCJBNQONRIZIKXXQTEJWFFC");
    msg.act_time = 44031U;
    msg.deact_time = 31958U;

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
    msg.setTimeStamp(0.255753252391);
    msg.setSource(23514U);
    msg.setSourceEntity(130U);
    msg.setDestination(47116U);
    msg.setDestinationEntity(228U);
    msg.id = 160U;
    msg.label.assign("OUCESRKRYFFSOZQRXGNZPKJYVYYPKXNDFJSDSQRAERMVXECXGNXCQYPGJBXCCTOHCTGBRSWTLOYKJWQSLOEUSHDBVHCKWYHFPGJMWGVJTIAHPYXWFCRJWULVCBEIEFDIWDSALTURWKBCQIZ");
    msg.component.assign("QNXGEXYVNPNVMTCOQEVAOEGKPUNTYAUUAGTWMQZSMJTVDCCISCNLXUNGUBSTZTEISHPZWCBYYABVXSGFRTEDUUYZFWPLUBIFWKNEQDILLSBCJOAJPXZRVBIWLBBWRLUXDJODHOLGJRKFEQTYLUGFJKDFGASYVFWSPHERHSYPQPPVYXZMWIIZNLRBVXCHOMKTDKXHZGKJQALAMRQDPAMASFJICMWDQFOFHGEKOYRQEROMJR");
    msg.act_time = 36831U;
    msg.deact_time = 35026U;

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
    msg.setTimeStamp(0.932151288736);
    msg.setSource(42752U);
    msg.setSourceEntity(211U);
    msg.setDestination(17776U);
    msg.setDestinationEntity(25U);
    msg.id = 87U;

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
    msg.setTimeStamp(0.537427016358);
    msg.setSource(18256U);
    msg.setSourceEntity(5U);
    msg.setDestination(49061U);
    msg.setDestinationEntity(86U);
    msg.id = 155U;

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
    msg.setTimeStamp(0.434101491899);
    msg.setSource(32918U);
    msg.setSourceEntity(109U);
    msg.setDestination(27027U);
    msg.setDestinationEntity(206U);
    msg.id = 202U;

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
    msg.setTimeStamp(0.926931431137);
    msg.setSource(7743U);
    msg.setSourceEntity(55U);
    msg.setDestination(12049U);
    msg.setDestinationEntity(219U);
    msg.op = 114U;
    msg.list.assign("AORDLRNNEDMRHYCQSEHQFHMOATWOSRRNHGIYWQSJPUDIVXNEJZXZVOSOGOPKRPUYTXWEKEIYVQUMOPPHJUVMBRLHUQPBBNFGXCEGGPFICILDQTBZNJBDPJTJUXNVGVSJA");

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
    msg.setTimeStamp(0.359984645456);
    msg.setSource(16457U);
    msg.setSourceEntity(30U);
    msg.setDestination(25842U);
    msg.setDestinationEntity(40U);
    msg.op = 27U;
    msg.list.assign("JZHQGYLAOETKZRQLOOBTWNECEKMEXZDMNAFHCXHCZHJPRESTKWPFXJUVVDHFRTLJXUZOKSNYQIKMOZVKSJLSYFGDAAPDHDXDRYIBVWERQSHLOTGGGXJAFCQQRXNTOBMAQIZBULHNW");

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
    msg.setTimeStamp(0.389940637608);
    msg.setSource(53481U);
    msg.setSourceEntity(105U);
    msg.setDestination(28473U);
    msg.setDestinationEntity(106U);
    msg.op = 224U;
    msg.list.assign("OJFITDCAILSQRMJEZDWLYQCCLEYVFMCUTITATBESJGBKPKTHKZUXVZYYTOZFKMMEJNKHWTSMKAEPSHXOYSPGGQKXFWTHCRASHUKDRDKRENLYOIABVUPUERJYGXTIVPVQVNJQHPMUWGCYNLIRJDFRVONMCHSZDLMNASNAXPCWAQUBXSGKMJOBFNAFEBOWZXUGUPMBESZRZVDDVXBQAYCWWLPVXPTYWIRXQOCNLIU");

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
    msg.setTimeStamp(0.159269363893);
    msg.setSource(5365U);
    msg.setSourceEntity(36U);
    msg.setDestination(7639U);
    msg.setDestinationEntity(2U);
    msg.op = 210U;

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
    msg.setTimeStamp(0.866296307924);
    msg.setSource(37803U);
    msg.setSourceEntity(164U);
    msg.setDestination(24864U);
    msg.setDestinationEntity(87U);
    msg.op = 72U;

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
    msg.setTimeStamp(0.358259279068);
    msg.setSource(15002U);
    msg.setSourceEntity(145U);
    msg.setDestination(58430U);
    msg.setDestinationEntity(45U);
    msg.op = 62U;

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
    msg.setTimeStamp(0.457379693035);
    msg.setSource(56033U);
    msg.setSourceEntity(41U);
    msg.setDestination(33639U);
    msg.setDestinationEntity(119U);
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
    msg.setTimeStamp(0.694558899043);
    msg.setSource(59494U);
    msg.setSourceEntity(106U);
    msg.setDestination(34060U);
    msg.setDestinationEntity(1U);
    msg.value = 7U;

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
    msg.setTimeStamp(0.779827576671);
    msg.setSource(55766U);
    msg.setSourceEntity(17U);
    msg.setDestination(41546U);
    msg.setDestinationEntity(45U);
    msg.value = 47U;

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
    msg.setTimeStamp(0.759802828589);
    msg.setSource(25462U);
    msg.setSourceEntity(238U);
    msg.setDestination(63908U);
    msg.setDestinationEntity(26U);
    msg.consumer.assign("ZFFHTXGCXMKPUAXXTCKLAJEGNNAOREVJMJREIDUIR");
    msg.message_id = 8633U;

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
    msg.setTimeStamp(0.808681605232);
    msg.setSource(21332U);
    msg.setSourceEntity(37U);
    msg.setDestination(61769U);
    msg.setDestinationEntity(157U);
    msg.consumer.assign("ZMGCQDYLLFAFXAXRQSQOAXLTIZQEHBJATUJYCJDRQJHFPGAAMSOVPLPVCSQVBROSNXJPOVPIZCRFMZVUPUEYZXWNZBHHTWVXFNTRRKJYGIY");
    msg.message_id = 21978U;

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
    msg.setTimeStamp(0.454086328296);
    msg.setSource(17456U);
    msg.setSourceEntity(180U);
    msg.setDestination(55547U);
    msg.setDestinationEntity(150U);
    msg.consumer.assign("JVROSAWKPFUPNNDFWMARVFAVJYFVBBYZGYGVCDGRQRBMEGLMCXUJZXPKXLVMMVYQWXTPFSIUZPPLJDOQWBREHGPDUQYTIHWFULMHGHZGICJZUACOJVYDKXHCMFDLKLKRBEIZNOONRF");
    msg.message_id = 28166U;

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
    msg.setTimeStamp(0.0125015762012);
    msg.setSource(11642U);
    msg.setSourceEntity(96U);
    msg.setDestination(38950U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.427966613999);
    msg.setSource(44909U);
    msg.setSourceEntity(8U);
    msg.setDestination(28622U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.442832264164);
    msg.setSource(65345U);
    msg.setSourceEntity(49U);
    msg.setDestination(61887U);
    msg.setDestinationEntity(9U);

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
    msg.setTimeStamp(0.283968793308);
    msg.setSource(5857U);
    msg.setSourceEntity(183U);
    msg.setDestination(52U);
    msg.setDestinationEntity(150U);
    msg.section.assign("WFVRPZIMIAPXGKPUUQPFTATITJERLDMPOAAWWTXMQRCEBSNACAJVXGRNRCSHCOYWIRCYYUGHPHKGWNZONYYMCAJKULLZTNOZLYZME");
    msg.param.assign("VLHFNDJGBJLJQTZETIGUBLXHWZAQVXCRWMRRTYYZGAYSNXZRCFNDHOQADVWKBCPQPIQDWLNGRQG");
    msg.value.assign("JHONZVCSZOICQDVIVHFABUIUNVJMFNDEWLCPKTIIEKJPOEORLBMRWEZFDPGSKYLWVDQNXYLTGNOZJGTCCXEFMFQKMMAYBDDDFLESSPWFSSMLYIUXKGVQWNTJDBAYQVHZTOJRSRYJNTKGRSVSHPXJBTQUAAAERCJZIZOBWYKUYDVHAIHRUTURGCUQLEHBKPTXFSLQBGXFLWOPZZFENUAMPCQHWIOCX");

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
    msg.setTimeStamp(0.868158422772);
    msg.setSource(58791U);
    msg.setSourceEntity(184U);
    msg.setDestination(65440U);
    msg.setDestinationEntity(13U);
    msg.section.assign("YVEXTLSNCWWSHPBCSMEQNJCZVMSNGDLCJHDITIRYJDGGYRUHLXOZJSBXVOJLCHAXDINTHOUMJRCKOHLEWSHEZDSJQUVKWPBPBOISWFKULRBAOQNBBUORAGFUDKYGNMTNEFJEAYOVVQARYKJKTQODYGLZXETHWVKIGUXFFGXAAUVMMDIKRCMWEITYRWVNHFPENTXCPCQMTHTBLZJPSPNQKAWDPCPFZYZGYIVQAZAZESZBIFMQLRBPLXUKFDOIXQ");
    msg.param.assign("WQTTCHBFKMJPFWGIQZRVFCZIXAMYABCQNEDSVKNHVAUCINEVSIIFNSHFLRECXUISENWUAIZURVOXGMPJVBKZJHFQMQYRQBTZOYGTLCOYJRKEENZTLHLZIKLYSLZMNVKALSBRDTOUJOWPOLCDGCIKOXHCXYMPGOOGVAGLYFMQUQVUXKKESXGLFDATPSTTDDMWDJI");
    msg.value.assign("OAHLTZLTDRIDULAFVNSZUUPLFMIRDREERVXDZKRAMJKUKCPLQTRSN");

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
    msg.setTimeStamp(0.391781745726);
    msg.setSource(33254U);
    msg.setSourceEntity(122U);
    msg.setDestination(47937U);
    msg.setDestinationEntity(138U);
    msg.section.assign("ZLXLBVWIQKVJNLIUWDZNBKAUYSBWPEWFKBAHOKOMQQOWNACALVWVSCHIZDHFGMMQRVAJUHMSQJTOSBZZBGGXGUXTGLOXSJXXVYGHDPVYEUJQJYLRRRHYZDCTRLBXFUMNTNMPFMISJYTKCAUOEDNDKVIWCCLHEFGINEFXIHSRMWNPRYRAPOMSKJQOEROUJHTAEEKDKBRIQWHZBPYCDTMFODG");
    msg.param.assign("KNNYQNRGFWFLNPDOQCGMKBVCVPNWMAQSRRYHOYIJMJAFXILJGPUUM");
    msg.value.assign("VGBBPYTCHMMUGXFAVCWJORHJFQDFRNFYRPRQJCZFNPVPOKHHTTZOQOQY");

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
    msg.setTimeStamp(0.671582207513);
    msg.setSource(60794U);
    msg.setSourceEntity(154U);
    msg.setDestination(39103U);
    msg.setDestinationEntity(56U);
    msg.op = 21U;

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
    msg.setTimeStamp(0.582751391163);
    msg.setSource(19392U);
    msg.setSourceEntity(50U);
    msg.setDestination(14310U);
    msg.setDestinationEntity(195U);
    msg.op = 130U;

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
    msg.setTimeStamp(0.700580384737);
    msg.setSource(53251U);
    msg.setSourceEntity(30U);
    msg.setDestination(4344U);
    msg.setDestinationEntity(179U);
    msg.op = 114U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("XRBFPEZYRMBLMHMAXQBLLHGDFINYIVFTDNJYUOPNUDXDTZWCHRRHSQAWWZJZGMEYVQTIGGTVQECQWGRQMGRJUCKFXJJOB");
    tmp_msg_0.param.assign("ZDOJXVAQJAGIVXIAZMHRCSUDEHCTGYNLYTJVTBKRYBDTSIDHEOEPZPERPKBGMQCQVXFVUJTQKZHSPQUZMONXNYLKKIUJURLOINAWLXZIEIODBZYC");
    tmp_msg_0.value.assign("ZSJPGNDKURCRQDYVACFUYEDHJOVHRJLHFJTSDJFAOXNPJZAIKQDTZVTYQNXASMIVUBRIOXMBZQWQAKNXKSGLMSPDUWYCIRIWSHUY");
    msg.params.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.289215311164);
    msg.setSource(3683U);
    msg.setSourceEntity(46U);
    msg.setDestination(40599U);
    msg.setDestinationEntity(125U);
    msg.op = 232U;

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
    msg.setTimeStamp(0.369239470604);
    msg.setSource(48617U);
    msg.setSourceEntity(233U);
    msg.setDestination(55848U);
    msg.setDestinationEntity(198U);
    msg.op = 131U;

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
    msg.setTimeStamp(0.939502714356);
    msg.setSource(40065U);
    msg.setSourceEntity(106U);
    msg.setDestination(17227U);
    msg.setDestinationEntity(201U);
    msg.op = 127U;

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
    msg.setTimeStamp(0.130604435481);
    msg.setSource(55716U);
    msg.setSourceEntity(39U);
    msg.setDestination(3820U);
    msg.setDestinationEntity(135U);
    msg.total_steps = 153U;
    msg.step_number = 192U;
    msg.step.assign("XQHDDUYBEIITGDKDQIQAAGVJUKUPBCIFARRCCYBAXQKNKABUDPIZAOWLWYSSOWVBAHDCVHINYZNFFDPLYSKGMEFEHKWHTGEQMTCNJVRSUYGOKBTFXJPOSQSMVEHJZRXRQMOZIIUYTPAQFPTBOBZCRYZEDIKMLCMTJYXAWVXHWRFIHVGYKBEOUSWSCVTLMHQFXPUGDWJNRORCGOFLUEPXSRAVXNNLWZCWPEGZBMNFGJND");
    msg.flags = 157U;

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
    msg.setTimeStamp(0.792255498419);
    msg.setSource(17142U);
    msg.setSourceEntity(210U);
    msg.setDestination(17783U);
    msg.setDestinationEntity(171U);
    msg.total_steps = 205U;
    msg.step_number = 204U;
    msg.step.assign("ZGBMYTNCGCPWQQIVCLCMZSABCQFPFDKWTQMQBEUXDQOOUNIYZEQDYFUDTDHPDKLJYXGVBEKBDYCVXTTXOOSUEBIHRKNREJKNJCWHRAJEKBDTRXOKURASHJAXLLJFPQYZTEKFNMQNKNWUWTJZCSVMSECHRPJVXDFIWHNLLRFZUIIFYOOEAOGYAP");
    msg.flags = 161U;

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
    msg.setTimeStamp(0.381894358428);
    msg.setSource(4568U);
    msg.setSourceEntity(218U);
    msg.setDestination(64787U);
    msg.setDestinationEntity(33U);
    msg.total_steps = 95U;
    msg.step_number = 73U;
    msg.step.assign("QESBEDCUOCANQRFIPWQRESMTLWIJPFCZEISGHQKEZHIXHVNWBRJLBBHYVGTVXSETYLPJSVCAAWLVTSLBOYBGC");
    msg.flags = 11U;

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
    msg.setTimeStamp(0.386678323732);
    msg.setSource(11621U);
    msg.setSourceEntity(133U);
    msg.setDestination(55984U);
    msg.setDestinationEntity(106U);
    msg.state = 231U;
    msg.error.assign("HBMNZDNAHWYFPMRLXOXXMVHWGBVSKULURGLDFHVNPCERIUQBIODXEBUMHEXDEAEBOCNRTSVNQLLEPSZOHVHRMJWPOUIZUXRDYFLCTKOTYIUKZOZJUGRQRUTYTSSVGGDMITIPT");

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
    msg.setTimeStamp(0.505368974242);
    msg.setSource(51998U);
    msg.setSourceEntity(130U);
    msg.setDestination(51302U);
    msg.setDestinationEntity(237U);
    msg.state = 203U;
    msg.error.assign("EESGSOCDDGWUZYVTHQKQUQKIQKNGRJRSLIFSLENBKHLEDWSMKDJOPQSKPZYILZXCIHJBTTJVSAILXZTFZXCCOYSCZPUGAHDVJEKKCPHNWRNSDNVACKNZQFTWIGPPUEBMSPMDOOOTQLOXZEBGHHMTFF");

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
    msg.setTimeStamp(0.117989515015);
    msg.setSource(24790U);
    msg.setSourceEntity(7U);
    msg.setDestination(15621U);
    msg.setDestinationEntity(87U);
    msg.state = 5U;
    msg.error.assign("WRBZKDPWMSUOILXPVADZILSTQVNTMVJTMQEGEHMTFFKILMGFCMLCRAHCBYNVXOJITRUPQOZNQXLHGMJCUBUCJLMWIDIGTIENZJRUTYYLEVFGYYKXTEBMCWVABATEASXLIRQKJCBHMPBOZIGRRFVEDGCDEJWQFKWPBQGUHFAXHYLNZNQDRYKOPTZADASKVFZESVQNJJSPUGBBNXWKENRFSYZZLSK");

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
    msg.setTimeStamp(0.860192855346);
    msg.setSource(24433U);
    msg.setSourceEntity(93U);
    msg.setDestination(58080U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.306365325089);
    msg.setSource(10278U);
    msg.setSourceEntity(203U);
    msg.setDestination(51865U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.910348929288);
    msg.setSource(30168U);
    msg.setSourceEntity(209U);
    msg.setDestination(58379U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.946316401407);
    msg.setSource(21050U);
    msg.setSourceEntity(1U);
    msg.setDestination(47282U);
    msg.setDestinationEntity(91U);
    msg.op = 79U;
    msg.speed_min = 0.679015098101;
    msg.speed_max = 0.855499497819;
    msg.long_accel = 0.173545244627;
    msg.alt_max_msl = 0.559983764581;
    msg.dive_fraction_max = 0.768655247537;
    msg.climb_fraction_max = 0.786479056193;
    msg.bank_max = 0.97878857902;
    msg.p_max = 0.93849515976;
    msg.pitch_min = 0.0491966549831;
    msg.pitch_max = 0.100907486474;
    msg.q_max = 0.875055096888;
    msg.g_min = 0.364956501252;
    msg.g_max = 0.107480972236;
    msg.g_lat_max = 0.494511833715;
    msg.rpm_min = 0.759851673201;
    msg.rpm_max = 0.94329251976;
    msg.rpm_rate_max = 0.480305120665;

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
    msg.setTimeStamp(0.310806584395);
    msg.setSource(40073U);
    msg.setSourceEntity(19U);
    msg.setDestination(57161U);
    msg.setDestinationEntity(84U);
    msg.op = 195U;
    msg.speed_min = 0.290564049752;
    msg.speed_max = 0.271003769353;
    msg.long_accel = 0.987719710858;
    msg.alt_max_msl = 0.564649582909;
    msg.dive_fraction_max = 0.834028473972;
    msg.climb_fraction_max = 0.585221463025;
    msg.bank_max = 0.407550642488;
    msg.p_max = 0.319982989793;
    msg.pitch_min = 0.175364815867;
    msg.pitch_max = 0.785808669825;
    msg.q_max = 0.384536920333;
    msg.g_min = 0.210362419798;
    msg.g_max = 0.975762126881;
    msg.g_lat_max = 0.963080125752;
    msg.rpm_min = 0.709631370757;
    msg.rpm_max = 0.939921805598;
    msg.rpm_rate_max = 0.234490110738;

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
    msg.setTimeStamp(0.911758089278);
    msg.setSource(25866U);
    msg.setSourceEntity(61U);
    msg.setDestination(53118U);
    msg.setDestinationEntity(43U);
    msg.op = 127U;
    msg.speed_min = 0.288257031532;
    msg.speed_max = 0.314359780213;
    msg.long_accel = 0.654942148794;
    msg.alt_max_msl = 0.740570056945;
    msg.dive_fraction_max = 0.388740052911;
    msg.climb_fraction_max = 0.0555601979318;
    msg.bank_max = 0.18046786164;
    msg.p_max = 0.859362980304;
    msg.pitch_min = 0.104009100501;
    msg.pitch_max = 0.0634585028384;
    msg.q_max = 0.847377355045;
    msg.g_min = 0.838655676343;
    msg.g_max = 0.718332211556;
    msg.g_lat_max = 0.490972687576;
    msg.rpm_min = 0.37498487839;
    msg.rpm_max = 0.120765221096;
    msg.rpm_rate_max = 0.166018899329;

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
    msg.setTimeStamp(0.482153512977);
    msg.setSource(4300U);
    msg.setSourceEntity(128U);
    msg.setDestination(5237U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.417079065938);
    msg.setSource(19871U);
    msg.setSourceEntity(150U);
    msg.setDestination(41758U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.698666370226);
    msg.setSource(61995U);
    msg.setSourceEntity(16U);
    msg.setDestination(17735U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.990073763098);
    msg.setSource(53116U);
    msg.setSourceEntity(54U);
    msg.setDestination(42998U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.0652887305904;
    msg.lon = 0.186017236514;
    msg.height = 0.642847882617;
    msg.x = 0.541147802545;
    msg.y = 0.331702054262;
    msg.z = 0.75617268668;
    msg.phi = 0.377810348016;
    msg.theta = 0.0704450968653;
    msg.psi = 0.583268730931;
    msg.u = 0.400748405263;
    msg.v = 0.818717664274;
    msg.w = 0.85008143336;
    msg.p = 0.361124424282;
    msg.q = 0.446017577103;
    msg.r = 0.588575822936;
    msg.svx = 0.99131318704;
    msg.svy = 0.601782797196;
    msg.svz = 0.254636815963;

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
    msg.setTimeStamp(0.82109829386);
    msg.setSource(4032U);
    msg.setSourceEntity(73U);
    msg.setDestination(6330U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.0745877018304;
    msg.lon = 0.169359574666;
    msg.height = 0.026268323658;
    msg.x = 0.986160274747;
    msg.y = 0.973256311521;
    msg.z = 0.571242393316;
    msg.phi = 0.043593052989;
    msg.theta = 0.462380567533;
    msg.psi = 0.877966388139;
    msg.u = 0.0310809966988;
    msg.v = 0.191478997205;
    msg.w = 0.465783803998;
    msg.p = 0.753180357479;
    msg.q = 0.94976652491;
    msg.r = 0.0313818616142;
    msg.svx = 0.00983030554634;
    msg.svy = 0.480026461421;
    msg.svz = 0.752659592273;

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
    msg.setTimeStamp(0.238836038145);
    msg.setSource(38813U);
    msg.setSourceEntity(237U);
    msg.setDestination(18606U);
    msg.setDestinationEntity(202U);
    msg.lat = 0.0245433417325;
    msg.lon = 0.251262184708;
    msg.height = 0.561041027419;
    msg.x = 0.0691937588652;
    msg.y = 0.559005559957;
    msg.z = 0.138390580779;
    msg.phi = 0.654010606313;
    msg.theta = 0.310523871504;
    msg.psi = 0.2308945284;
    msg.u = 0.302989976894;
    msg.v = 0.00462065576049;
    msg.w = 0.974897457515;
    msg.p = 0.88549650726;
    msg.q = 0.764207636893;
    msg.r = 0.368606923896;
    msg.svx = 0.532174465116;
    msg.svy = 0.840245385982;
    msg.svz = 0.673059084745;

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
    msg.setTimeStamp(0.869906103972);
    msg.setSource(37046U);
    msg.setSourceEntity(226U);
    msg.setDestination(48261U);
    msg.setDestinationEntity(252U);
    msg.op = 44U;
    msg.entities.assign("ELRCGWIJVUPROZDNSUKKXYDVNWZBCLYJKFCPMUFNZZPIERVFUUJSIQDSBVXHIITNXMBGLOUHJQFYHKDAICWYJQWFAI");

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
    msg.setTimeStamp(0.1641207619);
    msg.setSource(18110U);
    msg.setSourceEntity(165U);
    msg.setDestination(40762U);
    msg.setDestinationEntity(14U);
    msg.op = 45U;
    msg.entities.assign("TJXDGTXUAIDHQYRKFDVCWXACKJSVOZIOQZXKEBNGQIIJHZOWUEBINPESQQFBUCBJVOKWUYMXAOLNXEIBUTFAKDGDAVGRGGMVZBTEPHWTOEXRCMWFMZSTBWJNPNOUYSGJFOFSWLQKTAYULKJPPNYSMVRYAEXFRETDRZECNTQPQXPPHFNLIRGKPHUDBMKXRRPDZAHYKDLHVHJVZAUVLCQJBQLMSYCNHYLJURMBGIGNSOFWAICFCDSLHT");

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
    msg.setTimeStamp(0.262987486402);
    msg.setSource(44613U);
    msg.setSourceEntity(60U);
    msg.setDestination(29099U);
    msg.setDestinationEntity(109U);
    msg.op = 196U;
    msg.entities.assign("KVVMSMIXNRANFDAZMWFVIVTRZTDXNJTXZRYEUZXTNBLHTIYVUWHIGHJNYCQCNSMFPPLPTQYTQNNSGDVCMHKURAQTDGPTROPGLADVEYWKPUSOHPKUWSWQQGJXBDJWRLWKZCHMTJPFLSEAMRJBZQXEAZLOBVSBOKROLUCEIXNBZSRPLWFEXPDOYCVDAXJGFHEGYCFJLCCKQYUWQOHZFBILOXBQGOGCUNZUEJKFOKHARDVDEFMSIGY");

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
    msg.setTimeStamp(0.944312424008);
    msg.setSource(46412U);
    msg.setSourceEntity(94U);
    msg.setDestination(20017U);
    msg.setDestinationEntity(182U);
    msg.type = 120U;
    msg.speed = 11691U;
    const char tmp_msg_0[] = {61, -42, -37, 31, -29, -45, -69, -6, -89, -60, 81, -81, -9};
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
    msg.setTimeStamp(0.427643811261);
    msg.setSource(37836U);
    msg.setSourceEntity(155U);
    msg.setDestination(45394U);
    msg.setDestinationEntity(74U);
    msg.type = 254U;
    msg.speed = 34727U;
    const char tmp_msg_0[] = {14, 105, -122, 22, 115, 95, -109, -85, -124, 36, 17, 2, 22, 47, 100, 15, 43, -107, -22, 120, -33, -7, -89, -75, 81, 84, -6, 16, 61, 10, 91, 14, -32, -41, -83, 56, 20, -75, -62, -24, -117, -55, -57, -93, 99, 56, 95, 105, 113, 46, -115, 66, -76, -86, 21, -44, -14, -91, 120, -20, 126, 117, 64, -59, 29, 70, 76, 12, -35, -15, 48, 96, 103, 126, 119, -28, 106, 92, -6, -53, 64, -123, 22, 10, 25, -53, -49, -37, 16, 87, -79, 62, 112, -104, 51, -19, 82, -56, -45, 69, -27, 66, -6, 27, 67, -103, -58, -30, 83, 89, -63, 126, 10, 110, -86, 48, 123, -87, -60, 98, 6, 11, -46, -7, 38, 31, -38, -2, -50, 58, 32, -48, 107, -107, -75, 26, 1, -3, 68, 27, 113, 123, 105, 64, 110, 71, 84, -72, 59, -53, -49, 6, -13, 44, -35, -40, -102, -124, 50, -54, -11, -37, 81, -43, -111, -105, 70, -92, -126, -100, 68, 1, -2, -110, -26, 40, 5, 77, 34, -104, -35, -60, 77, -117, -22, 58, 45, -106, 45, -91, 55, 57, -10, 28, 13, 80, -17, -122, -42, -95, 65, 21, 81, 55, -104, -95, -86, -127, -24, 58, -47, 104, 89, 16, -43, -77, 1, 48, 108, 19, 80, 103, 87, 88, -45, -59, -31, 11, -55, 1, -123, -64, 10, 93, 106, 56, -66, -36, 14};
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
    msg.setTimeStamp(0.328185410921);
    msg.setSource(5445U);
    msg.setSourceEntity(238U);
    msg.setDestination(17508U);
    msg.setDestinationEntity(223U);
    msg.type = 71U;
    msg.speed = 40301U;
    const char tmp_msg_0[] = {78, 42, -43, 93, 60, -122, -108, -23, -126, -125, 54, -93, 35, 23, 64, 67, -77, -17, 73, -68, 15, -19, 80, -4, 11, -73, 113, -4, 96, 70, 17, -98, 41, -94, -38, 122, -126, 73, 56, 19, 121, -40, 117, 52, 29, 4, 51, 58, -40, -116, -114, 5, -56, -63, -16, -87, 98, 112, 56, -26, 43, -57, 26, 96, 41, 47, -103, 116, 21, 48, -73, -95, 77, 77, 53, -69, -83, 86, -124, -78, -32, 8, -85, 95, 70, 32, -33, -24, -80, 38, 68, -16, 67, -29, -121, -110, 3, -72, 69, 94, -73, -127, -69, 100, -109, 37, -108, -61, 98, -89, 0, 76, -20, 4, 8, 67, 56, 28, -111, 53, -64, 41, -26, 34, 64, -107, -24, -114, 8, 114, 37, 71, 95, 118, 78, 100, 122, -116, 6, 45, 15, 15, 12, -120, -111, -110, 16, -15, 6, -89, -39};
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
    msg.setTimeStamp(0.927795164419);
    msg.setSource(56886U);
    msg.setSourceEntity(236U);
    msg.setDestination(41297U);
    msg.setDestinationEntity(194U);
    msg.op = 9U;
    msg.tas2acc_pgain = 0.405762019168;
    msg.bank2p_pgain = 0.00352713100923;

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
    msg.setTimeStamp(0.392781521148);
    msg.setSource(44468U);
    msg.setSourceEntity(42U);
    msg.setDestination(10656U);
    msg.setDestinationEntity(195U);
    msg.op = 49U;
    msg.tas2acc_pgain = 0.585231053877;
    msg.bank2p_pgain = 0.864818721066;

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
    msg.setTimeStamp(0.333990387326);
    msg.setSource(13753U);
    msg.setSourceEntity(50U);
    msg.setDestination(57764U);
    msg.setDestinationEntity(223U);
    msg.op = 12U;
    msg.tas2acc_pgain = 0.289314458801;
    msg.bank2p_pgain = 0.721784078699;

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
    msg.setTimeStamp(0.244931057413);
    msg.setSource(58757U);
    msg.setSourceEntity(123U);
    msg.setDestination(3421U);
    msg.setDestinationEntity(103U);
    msg.available = 3945530950U;
    msg.value = 120U;

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
    msg.setTimeStamp(0.0845804204837);
    msg.setSource(50487U);
    msg.setSourceEntity(251U);
    msg.setDestination(60847U);
    msg.setDestinationEntity(68U);
    msg.available = 2028375379U;
    msg.value = 240U;

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
    msg.setTimeStamp(0.0910285132915);
    msg.setSource(22354U);
    msg.setSourceEntity(124U);
    msg.setDestination(35347U);
    msg.setDestinationEntity(22U);
    msg.available = 2410551249U;
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
    msg.setTimeStamp(0.881797094245);
    msg.setSource(37120U);
    msg.setSourceEntity(201U);
    msg.setDestination(41420U);
    msg.setDestinationEntity(29U);
    msg.op = 196U;
    msg.snapshot.assign("KLRLDRVJGFJTODOCW");
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("LCVAUHRFPAIKZYGZGJRYCYDUEJBGRVUPOVWUJWCYENVBBUTMVIMPPAOXJXHNHSLLTWTMDOCGKTETNCLQSGXYLRAIWOUIPEFLVYRQQSFALIDSJBGGXHFQAFPXKQOOCXIGRM");
    IMC::EntityParameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YLRFQGUNRWBRCORTHZQRZDGOYPCNPGAFTJDXYXQBTTFODWCFGUAXPZXSMGAHJDVXXKVEKEVUDJFVZSPERZFEVCAZWOJJTBDUJBUWYJVKULTBYWYHMRGZUOQPIUILVKDYAEWUKAQIWSW");
    tmp_tmp_msg_0_0.value.assign("WJOZNLFQYJCXJBXGWWEJAYBEFHVZQFPRXSCMJDGURZRHDQBBYPHONMKYEGZOMUAUUVALTCJVCJIG");
    tmp_msg_0.params.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.860011781428);
    msg.setSource(26491U);
    msg.setSourceEntity(220U);
    msg.setDestination(18505U);
    msg.setDestinationEntity(167U);
    msg.op = 13U;
    msg.snapshot.assign("KEKJCZPOHMYVAGXOWZDFPSHORFNHXYHQVMRDUQTSCFRSNFQIVTMUHUKEBLXVSLHOQDIVJIRAIVLQKBWGBPGOILBVNJHJQEQKBECAFNMMUWJTLHVRTTLUOYWJDWFFT");
    IMC::IndicatedSpeed tmp_msg_0;
    tmp_msg_0.value = 0.917391320679;
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
    msg.setTimeStamp(0.551760675225);
    msg.setSource(24382U);
    msg.setSourceEntity(203U);
    msg.setDestination(60395U);
    msg.setDestinationEntity(123U);
    msg.op = 96U;
    msg.snapshot.assign("WPQHMSLISOCCFEFINVBZHBGNGGEGNPFOKOBLAPOYOPXJBSQTKCSISGRWPFJPZRNCXVBCTTVWWDUYVSZOWLIDUOANUITLJMUQYYIMXWVMHHLNXLPRMNHVAFJEGQKQXQDURQCMXGWKWJIDFBHKXEKBYUISRLMGDVASJFZCDKNBSM");
    IMC::GpsNavData tmp_msg_0;
    tmp_msg_0.itow = 1532199062U;
    tmp_msg_0.lat = 0.906794025512;
    tmp_msg_0.lon = 0.842424103258;
    tmp_msg_0.height_ell = 0.731975789288;
    tmp_msg_0.height_sea = 0.977113736458;
    tmp_msg_0.hacc = 0.30483062712;
    tmp_msg_0.vacc = 0.752907126544;
    tmp_msg_0.vel_n = 0.665032963785;
    tmp_msg_0.vel_e = 0.292416462101;
    tmp_msg_0.vel_d = 0.80954715849;
    tmp_msg_0.speed = 0.768912989671;
    tmp_msg_0.gspeed = 0.436935385635;
    tmp_msg_0.heading = 0.530001640372;
    tmp_msg_0.sacc = 0.620124715412;
    tmp_msg_0.cacc = 0.844137782468;
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
    msg.setTimeStamp(0.286118856924);
    msg.setSource(6743U);
    msg.setSourceEntity(31U);
    msg.setDestination(28807U);
    msg.setDestinationEntity(124U);
    msg.op = 215U;
    msg.name.assign("JXNVHPSIRUKTEYHSBJTQCWFVBBDFNHENLXROMCUMSZHYMDZLCIMJIVZ");

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
    msg.setTimeStamp(0.942199513089);
    msg.setSource(21385U);
    msg.setSourceEntity(200U);
    msg.setDestination(55351U);
    msg.setDestinationEntity(174U);
    msg.op = 236U;
    msg.name.assign("XGQSNRUUEHUJBVUGOSPGMZOWPHDMNUWTZEHPAIWHQVDZLZRNALICFYREPJYWEHCTIOVJHJAFKXMLRGTANZATQNNFSWGLDVKBVQTLOAWZJDZJTOGFIIJFKXFTXEWSLSKXANBJYTGXMMC");

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
    msg.setTimeStamp(0.70789381815);
    msg.setSource(45634U);
    msg.setSourceEntity(226U);
    msg.setDestination(29431U);
    msg.setDestinationEntity(64U);
    msg.op = 129U;
    msg.name.assign("DJHFKYKFVTWCSGFDGEQIXQXBQWDSOHUYMNWHSGZNFBTRNFAZYDAEFZYUZVBTWGGLJSMSRMRGVXZLDXOURVWJJTNJJAIMEVARBIBOAOXBEUCHMCBQHDBCKNKRIVQQMSAEUPHYRHNWIDNOPRYANYHTOLFUFKTDPZJVY");

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
    msg.setTimeStamp(0.0842209268599);
    msg.setSource(47703U);
    msg.setSourceEntity(219U);
    msg.setDestination(27774U);
    msg.setDestinationEntity(36U);
    msg.type = 99U;
    msg.htime = 0.0727952904432;
    msg.context.assign("YJZPGYPGMPNAFOEBOOVTTROAWLKISUVKAZVFUMIGWUNQNBGLWEMOIHPACBLSCXCUVEIGHEBWJORRZXMQTXJESHMGMPRIXYYZVLSMJRFSQYNMSQAARSZX");
    msg.text.assign("OOOGSKZMPGWMSGMNTYDVBKAAQAEHVYDPMCNJWNOZRXNKTXCTROFMBJKVAWBVHLHDTSFWQTCGFWGHRWMCNDZLVJNP");

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
    msg.setTimeStamp(0.265599351216);
    msg.setSource(26622U);
    msg.setSourceEntity(202U);
    msg.setDestination(13029U);
    msg.setDestinationEntity(246U);
    msg.type = 73U;
    msg.htime = 0.383230729193;
    msg.context.assign("ZXKSBYCSRCOVULFTHYFBQWJQJKVWZLVOFVRCIDLSYAMFCNTGJADHMYPPGGXEBNJYMHGPXVZUAIYJMZMXSMDKCJNPTWGFQEJVIGEBYDEPCUXZMRMRFCKGWDJSHTKBVURVIUNWOQHRDHRUNXOCYNEKECAI");
    msg.text.assign("BOJZFYDLYKQSKIEG");

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
    msg.setTimeStamp(0.247782695902);
    msg.setSource(59983U);
    msg.setSourceEntity(131U);
    msg.setDestination(23968U);
    msg.setDestinationEntity(88U);
    msg.type = 114U;
    msg.htime = 0.163449608086;
    msg.context.assign("WTUHCYOXBKYEHCZNTZEDZDGMDQOAPZKGVJCRPJRDMBQJAAWFQHRELFEOVNLRYPGHUHQBAOXFNANSGMFKJSNMYBEMCLORIDMRSKPYDZNMHHBDCVZWIJDCTVRPNPTUCTFPXEXOFDZQSQEKLOYMYUWUWSGGLAEGJETIUXBRIXKYIQAVQUTIASSRGTJYONJCJVBWGWKZKFLCQXSRSXMZUSKBABIHXDIPBLWUNKF");
    msg.text.assign("ITQABOVFDPQFUTRNPCHHFJVTCEFHZUZVQYDLLLWCFJGSAHQVKYFBDPILKKPNGOIYXUWZLHMOZZKYKXZAJEGYJXWMRDQEKJFRONZGBBNAJJSYCOIOYQCOTCITZSMSIDPCENNGRBAAXPWDJVBWZVHFWNUOIRXLEKDVEVSPCMYLAEEAHGLLEMGUTBWWUSHHRYNOGIQUQZCLSFT");

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
    msg.setTimeStamp(0.0991486196065);
    msg.setSource(54802U);
    msg.setSourceEntity(173U);
    msg.setDestination(62181U);
    msg.setDestinationEntity(180U);
    msg.command = 130U;
    msg.htime = 0.685892491076;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 180U;
    tmp_msg_0.htime = 0.616898155252;
    tmp_msg_0.context.assign("GPMPIAWJAZSHYRUWLVPOSPGBIXOMDPCLWGBYLTXZWOYJQKVUMZKMEIZTNXGKKMSVCQDDVXYAXVTGZYQLDNEGTFIYAETVREVCVWHPKSIGMUSJURFLPMUJCBLZBKQKHGHOTXFWNXTJBQHOONIPZHQNBAZRDIMLHTWRDBFXFSJFBECCYMNQSKHOHRQVENIRXULWPRLAYCCJASSQOHSOCDDEAUADPLBXQFWYTENUJJ");
    tmp_msg_0.text.assign("JJIYVDCEGLXVLBYBRQMLJKPNTOMCYGVRFAOLXKXCQSACWKSUWUJXFERKUPKNSTXEZKHNQDUEQGEB");
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
    msg.setTimeStamp(0.589530427511);
    msg.setSource(56414U);
    msg.setSourceEntity(15U);
    msg.setDestination(65180U);
    msg.setDestinationEntity(186U);
    msg.command = 129U;
    msg.htime = 0.569206673825;

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
    msg.setTimeStamp(0.0207238953382);
    msg.setSource(39547U);
    msg.setSourceEntity(164U);
    msg.setDestination(10652U);
    msg.setDestinationEntity(132U);
    msg.command = 13U;
    msg.htime = 0.572547376147;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 30U;
    tmp_msg_0.htime = 0.352869672322;
    tmp_msg_0.context.assign("PVQEZCHTKBIPAABALGFCRWHQYXCQEBHUVZOIHXSAVOWIRSPRQXOKHEMCSWJBYFNNFXHRJTRNHZZRWUFLBLGLKGTWVOFQDTKANCCMUPXQBGKDDYWPZDGCHSBFQX");
    tmp_msg_0.text.assign("JIPTZKUWPXSUGCXHNTAOXBSGVQDQYAYDKRFLCMBDKCRGEJJSHBCTVKWCCSFXNOMBWBTXXWPTYEZMKWQWSYXSHIJQQQHWJTAWFTHURNZZUIYMUQTBZJDPGVMRIUXNFRIOGESNSDYAOIEDOHFMBISCMADGLJFPEKOLRHDSKLULKVMCOPAVAYCIZ");
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
    msg.setTimeStamp(0.392127469743);
    msg.setSource(18160U);
    msg.setSourceEntity(100U);
    msg.setDestination(7116U);
    msg.setDestinationEntity(5U);
    msg.op = 175U;
    msg.file.assign("GAXWWDJUQNPSQLEZMUKPQSBCEVXOSVVJHLQJHRVZEURWNXFIYPFFXHAOZOMBFTINUQMIDBESKOBEGGHZOLDQBPAKHRASIAKVXASFUIGATACQMOZYKISUHDZSPCLIQTZDNVCJIJMVPVGTLGPMEHYKCWFNIYWTKGDBWJYDCTGRLXXJLPCUBKEMEWZTWNJOROYMVMNGXZHRCTZLPAHCYNLPLBRROISXFQGDFEKDAJN");

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
    msg.setTimeStamp(0.626266229061);
    msg.setSource(52685U);
    msg.setSourceEntity(167U);
    msg.setDestination(57535U);
    msg.setDestinationEntity(74U);
    msg.op = 64U;
    msg.file.assign("ACZMNFIXKUOTWJBPDVRRHNWYUXQROWFJAPAPYMTJHXEIFUEGFQWEBLHT");

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
    msg.setTimeStamp(0.297588103024);
    msg.setSource(54034U);
    msg.setSourceEntity(176U);
    msg.setDestination(24784U);
    msg.setDestinationEntity(218U);
    msg.op = 114U;
    msg.file.assign("WOELMYILRGCKFNBLGBJHAZSWCCWKNXGDQRORAWYQQXKHEXZQEFJEZGTNJVCEARSBSKTYLOFDIFBTOVLSIGUNVTLOPPYQJKFRRRYHAVCAGVNUYQNFJMWSZXMPBYID");

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
    msg.setTimeStamp(0.990264550173);
    msg.setSource(641U);
    msg.setSourceEntity(75U);
    msg.setDestination(25449U);
    msg.setDestinationEntity(28U);
    msg.op = 18U;
    msg.clock = 0.0694642025996;
    msg.tz = -41;

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
    msg.setTimeStamp(0.658413933818);
    msg.setSource(12579U);
    msg.setSourceEntity(95U);
    msg.setDestination(39688U);
    msg.setDestinationEntity(191U);
    msg.op = 224U;
    msg.clock = 0.982179770816;
    msg.tz = -36;

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
    msg.setTimeStamp(0.900070144185);
    msg.setSource(40043U);
    msg.setSourceEntity(115U);
    msg.setDestination(54544U);
    msg.setDestinationEntity(73U);
    msg.op = 254U;
    msg.clock = 0.143707744427;
    msg.tz = 79;

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
    msg.setTimeStamp(0.640733541738);
    msg.setSource(42249U);
    msg.setSourceEntity(163U);
    msg.setDestination(53157U);
    msg.setDestinationEntity(20U);

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
    msg.setTimeStamp(0.695042391003);
    msg.setSource(24226U);
    msg.setSourceEntity(122U);
    msg.setDestination(64098U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.685438807719);
    msg.setSource(49867U);
    msg.setSourceEntity(242U);
    msg.setDestination(26234U);
    msg.setDestinationEntity(62U);

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
    msg.setTimeStamp(0.82994139521);
    msg.setSource(23405U);
    msg.setSourceEntity(57U);
    msg.setDestination(25174U);
    msg.setDestinationEntity(77U);
    msg.sys_name.assign("TNPBQZLDQEKXRILUPMZIGRBMXYUIDFKUNHGAFBVEBLCYJDVLTXLNKNOCMCQAKENNBYTEQAPWXKTEOWOEXEFQVPWPZ");
    msg.sys_type = 47U;
    msg.owner = 49628U;
    msg.lat = 0.321166362946;
    msg.lon = 0.492370366957;
    msg.height = 0.562419369517;
    msg.services.assign("AQACSRVEDNWOLGOOFGCPSEJMWVBAULFRWMYCSIXJWUYSYNOJIEGJHVTBEQDIIBGSRRUKLVHWIEQAHZSTXJUWULPBTJRMKOSDMGAKZXBPZDMANJVTCEGFILPLLSPWQJDHCIZWEYUNCTGGSIZZRBDMNXYDAKXUPXMHNUKBSCQNHHHZYUYATDQMVWZETAXRJTGTQXGDFRMBVCAJFEYFOKIYLHLBFBMOPNKHZPKRYQOCXEVQONTZP");

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
    msg.setTimeStamp(0.657954201962);
    msg.setSource(43965U);
    msg.setSourceEntity(221U);
    msg.setDestination(47389U);
    msg.setDestinationEntity(225U);
    msg.sys_name.assign("FCXQMVCYNMSYJEPRZREHGBYUNZVURANEHQPBTRXVWFMSDYHZZBSDEDPDKQLXPYQXXXTVMTPSCTFAWVUSKXJGKTIGMCAOYIJRCWLPVSIKR");
    msg.sys_type = 178U;
    msg.owner = 37971U;
    msg.lat = 0.628852845095;
    msg.lon = 0.686653092823;
    msg.height = 0.274170236365;
    msg.services.assign("RNHHCKGYLLISEVSNXVTMLWYVQSKCAEHLCTJCQCGDZZISFDPKONRTJANFDEFIXQFBMEIOWJZJELCQAXEXVPDUVIIJLKXGSSZZBHGQKITCWRYWZBMNFUAQWEDAUVKISUORUYULXJRMZHPXDTQPQMGMYHPXZNBWBFTYPFREFHYBCYCBAMUNQRNUHXBSVVXTLJNRLBKSDKAAADFTWOVGJMYUEJPRGRBWEMIHTOMODLPFWUHKKOOOSDWQV");

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
    msg.setTimeStamp(0.161323733939);
    msg.setSource(15901U);
    msg.setSourceEntity(186U);
    msg.setDestination(63203U);
    msg.setDestinationEntity(101U);
    msg.sys_name.assign("SDQTHQUGOBEAKZFFRISWQYRNNPJJBJAUEIHJPMRHNMDVEYOWRTGCIYZAZMKNLDEKCUUKUIMJXQPZFKBFEPILVVUXUXCHVHKNWACGQXHESBCJCDEWOGOWMCPBLLXXLZAZYNGTKBQPFUTTMYRJQDRNTCWOHWZEMLPVKEIQPA");
    msg.sys_type = 74U;
    msg.owner = 2453U;
    msg.lat = 0.29767374285;
    msg.lon = 0.333075535474;
    msg.height = 0.71761417781;
    msg.services.assign("ABESQKYFOVRDUHLWAJNNXGZRNCECRBKGCMIDZVEAGPCEHBVTMLZPJUVOHTRGVWCWXSTSISGJQEDEMHYTXDERKOACFQOUZHXZEPAAJJPCLVOMMKQUYAQWZKQVJZATJQSOUZYMKYIZCNFFELMOROCW");

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
    msg.setTimeStamp(0.297107618584);
    msg.setSource(64742U);
    msg.setSourceEntity(47U);
    msg.setDestination(5469U);
    msg.setDestinationEntity(195U);
    msg.service.assign("LHCWPKRCOEEAPIGSQOAKYJZNRFQRZYRWRNSMQJEAUUZSRBCUPJVTIIGHKVMOJVGDJEZKRIIFUGWHMVLNGJHDARPLOFHDQEUMMWJFPXDILAEWAOBAVZGKKWYKBKVHXSMWLPDTTSPQQKDZHYCMCOHMUSGTZYODXIBEBUAWSJQYTYABXDZNHHSEFYIVUOVXLXFINXZZRDLWMQJVM");
    msg.service_type = 85U;

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
    msg.setTimeStamp(0.264938657431);
    msg.setSource(48242U);
    msg.setSourceEntity(182U);
    msg.setDestination(1156U);
    msg.setDestinationEntity(70U);
    msg.service.assign("LYEFJWRJAVVWYZEWPWMV");
    msg.service_type = 202U;

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
    msg.setTimeStamp(0.0595171209141);
    msg.setSource(34178U);
    msg.setSourceEntity(250U);
    msg.setDestination(52496U);
    msg.setDestinationEntity(212U);
    msg.service.assign("MZGHHVBXTCYLJKAVQHOFFLIMJFADDNYJPRWDGHTYGBCGNOFVIZLPPABNLRGRKTRAVGXOJWMNUNFKFZCAFESJECMWYQSYNQPLPKSCAKWBTUYQKEUQPSLTODJZQPRSGXJEXZKFMRZABOYDVOUDHIUMRKMLGRJOVQXBHLWYXSCXWTNUWHWPBMZXUXAHFIOUEETNVJIOHYHLPINDSNISLCIVVJEDYSSQZGRVTMDKTXEFZBQB");
    msg.service_type = 221U;

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
    msg.setTimeStamp(0.589446456782);
    msg.setSource(55161U);
    msg.setSourceEntity(10U);
    msg.setDestination(18288U);
    msg.setDestinationEntity(171U);
    msg.value = 0.368730290756;

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
    msg.setTimeStamp(0.676023896411);
    msg.setSource(16838U);
    msg.setSourceEntity(165U);
    msg.setDestination(28622U);
    msg.setDestinationEntity(118U);
    msg.value = 0.598340259944;

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
    msg.setTimeStamp(0.456750427332);
    msg.setSource(62906U);
    msg.setSourceEntity(96U);
    msg.setDestination(41947U);
    msg.setDestinationEntity(183U);
    msg.value = 0.961462118205;

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
    msg.setTimeStamp(0.0316320603702);
    msg.setSource(64194U);
    msg.setSourceEntity(63U);
    msg.setDestination(24011U);
    msg.setDestinationEntity(216U);
    msg.value = 0.935539762147;

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
    msg.setTimeStamp(0.740571825403);
    msg.setSource(2933U);
    msg.setSourceEntity(245U);
    msg.setDestination(21035U);
    msg.setDestinationEntity(188U);
    msg.value = 0.15631329375;

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
    msg.setTimeStamp(0.539464514669);
    msg.setSource(19330U);
    msg.setSourceEntity(207U);
    msg.setDestination(62666U);
    msg.setDestinationEntity(182U);
    msg.value = 0.617237545904;

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
    msg.setTimeStamp(0.594777656091);
    msg.setSource(1477U);
    msg.setSourceEntity(166U);
    msg.setDestination(26290U);
    msg.setDestinationEntity(182U);
    msg.value = 0.839281162933;

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
    msg.setTimeStamp(0.735238571839);
    msg.setSource(1566U);
    msg.setSourceEntity(210U);
    msg.setDestination(56879U);
    msg.setDestinationEntity(47U);
    msg.value = 0.348202483449;

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
    msg.setTimeStamp(0.804828557827);
    msg.setSource(19020U);
    msg.setSourceEntity(140U);
    msg.setDestination(55486U);
    msg.setDestinationEntity(82U);
    msg.value = 0.0309159302738;

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
    msg.setTimeStamp(0.354756639771);
    msg.setSource(41999U);
    msg.setSourceEntity(192U);
    msg.setDestination(46222U);
    msg.setDestinationEntity(149U);
    msg.number.assign("HTCRNYBGSYRABA");
    msg.timeout = 55064U;
    msg.contents.assign("TGKLUVXOLIYEPVVCDQIBGIUSILWPFNDW");

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
    msg.setTimeStamp(0.759071774762);
    msg.setSource(49063U);
    msg.setSourceEntity(122U);
    msg.setDestination(6386U);
    msg.setDestinationEntity(124U);
    msg.number.assign("ZKJZKSWHSHCCDRTFLIKNDXUDMZIKKYTGTQERYNNYWPPCGOEACMTGXPLBBKOGFHZSOVBEUXNAIDWWRCYKMJXNXCQMSMWOOVBTBTDOQREWYRJLSVLIDVUEQOAUCRJAKQPMZNMYQSURDPHDRCIAFHGNJHYXBWFEHH");
    msg.timeout = 63314U;
    msg.contents.assign("KMYZZZQLMCAOVTNBTUCGOXDLDODAZUPJJIFJUUBHEWHDFWYTUVFES");

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
    msg.setTimeStamp(0.698677344378);
    msg.setSource(52186U);
    msg.setSourceEntity(142U);
    msg.setDestination(47384U);
    msg.setDestinationEntity(177U);
    msg.number.assign("JWNEVDUZSMVEKYZXZUGYYFOHHNSJYFSAONBWXOAHSKKENVWCFLXGIKQVGOJPRYYAOFVPQQWTYGVMWBRBPTMUCJMDAIUZSMRHPYRORLYOSZJVBWQVPIEPCAHECUNDYTDWDOCBGAXCDHUMZJNISADFKPUBZIAKSGLQQRUELRWOZIILNKLKPTBBXCJTJQPGEVLMUAZEQGPDSONTIQXFTNXCCTLHQCRBKWUJH");
    msg.timeout = 25451U;
    msg.contents.assign("RWVTRHWZHJAEDETJLPIYGPCQKLUUJRGGJXVQFKREORXXIKEBGRDTUKNOJYAXVWUMIUQGJPNQDYMAVJMILCTSKWSGQCTVNDZKZCXFMRYQLEUBZRPBOUBLPHZHIWZFIJOCOCAOBUDHARPSPLFSNEQVSSIWQLHLFNXONYHBHVJZIBSWYAZVHZFXOUEGIXPDFTKWCFQPATABXMEDGOMFPCWRIGKKNHQYKSECUELMY");

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
    msg.setTimeStamp(0.876071193435);
    msg.setSource(57731U);
    msg.setSourceEntity(47U);
    msg.setDestination(35430U);
    msg.setDestinationEntity(153U);
    msg.seq = 1742665943U;
    msg.destination.assign("RWRUPALGDPGEFXRWOSUTUMHZVDOTPYTBPNPVMGKWLUJXUBLLHJJMK");
    msg.timeout = 37563U;
    const char tmp_msg_0[] = {-15, -72, -25, 123, -69, -13, 96, 6, -90, 25, -22, 60, 118, 102, -25, -81, 68, -128, -99, -56, -1, 43, -68, 27, 97, 89, -40, 90, 18, 96, -110, 99, -68, -59, -53, -119, 15, 61, 93, -38, -120, -58, 37, 43, -74, -91, -117, 7, 18, -104, 36, -66, -61, 9, 89, -43, 60, -122, -17, -20, 53, -61, 94, -90, -33, 31, -82, -2, 28, 58, -44, 1, 24, 66, -107, -47, 16, 94, -27, 123, -96, -12, -7, -41, -47, 74, 113, -86, 109, 107, 104, -40, -29, 6, -126, -56, 56, -69, -127, 71, -53, -86, -77, 106, -76, -87, 14, -108, -48, -118, 70, -73, -109, 32, 39, 95, 22, 73, 97, -22, 103, 86, -6, 18, 71, -28, -28, 81, -13, 64, 27, 71, 29, -23, -124, 53, 37, -123, 112, 118, 99, 26, -3, 60, -78, 105, -11, 125, 37, 13, 10, -6, 17, 61, 118, 28, 23, 87, 101, -35, -70, -49, -25, 35, -79, -53, 80, 96, -115, -20, -37, 40, 86, 45, 52, 103, 114, -57, -67, 36, -108, -115, 26, 44, -122, 35, -99, 79, 124, 121, 41, 115, 73, 50};
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
    msg.setTimeStamp(0.492140366266);
    msg.setSource(61884U);
    msg.setSourceEntity(120U);
    msg.setDestination(61393U);
    msg.setDestinationEntity(170U);
    msg.seq = 2717597004U;
    msg.destination.assign("BQKQEPJWQVCVBTIXHASYOUNINSAKQRGLUIWSOTMXUOMUSXJLLOVGYWDHZQZMDVGYOJNWDMFZAJVH");
    msg.timeout = 1118U;
    const char tmp_msg_0[] = {22, -26, -71, 69, -57, -99, 45, 67, -8, 82, 8, 87, 12, -61, 123, 61, -124, 91, 7, 115, 125, -36, -27, 22, -124, 100, 124, 76, -98, 2, -62, 6, -97, 6, 36, -55, 39, -117, 52, -110, 99, 5, -90, -52, 97, -36, 50, 111, 87, 3, -25, -127, -114, -36, -112, -61, -81, 75, -127, -43, 76, -43, 95, -61, -128, 86, 38, -78, 41, -83, -106, -18, 85, 116, -65, -4, 51, -89, 39, 19, 56, 3, 48, -72, -56, -3, 23, 68, 14, -51, 122, 17, -4, 86, 7, -89, -5, -29, -99, -17, -75, 29, -22, 84, 91, -53, 119, 53, -2, 46, -89, 29, 115, -9, -97, -116, -120, -8, -63, 102, 105, 108, 3, 126, -3, 47, 111, 40, 24, 20, 57, 12, -124, -68, 20, 87, 0, 0, 125, 74, -121, 84, -60, -3, 57, 60, 100, 7, 87, 21, 112, 37, 98, 22, 16, -123, 38, -57, -126, 98, 23, 35, -85, 116, -100, 84, 32, -53, -95, 34, 109, -27, 119, 0, -56, 76, -113, 117, 112, 0, -64, 15, -121, 60, 9, -37, -20, 20, -6, 123, -83, 69, -80, 41, -68, -28, -37, 104, 39, 45, -92, 114, 23, 119, -127, -51, 28, -42, 8, 88, -15, -118, 9, -31, -5, -70, 58, -101, -110, -95, 79, 8, -121, 11, 90, 0, -31, -111, 125, 28, -82, 82, 6, -31, 80, -41, -8, 6, 105, 92, -17};
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
    msg.setTimeStamp(0.24713895827);
    msg.setSource(4534U);
    msg.setSourceEntity(70U);
    msg.setDestination(53993U);
    msg.setDestinationEntity(20U);
    msg.seq = 879680048U;
    msg.destination.assign("EJUHOIFRCRZSGEGESSL");
    msg.timeout = 42292U;
    const char tmp_msg_0[] = {104, -75, 100, 42, -108, -127, -16, -112, 3, -127, 79, 22, 74, 80, -59, -118, 102, 78, 71, 72, -2, 51, -123, 68, 52, 81, -42, 73, -36, 22, 11, -79, -5, 58, -124, -108, 116, 7, 61, 83, 33, -104, -88, 56, 29, -16, -118, -29, 108, -33, -59, -42, -7, 50, -65, 56, 59, 7, 88, -116, 42, 25, 88, 30, 89, -102, 56, -113, 126, -63, 46, -89, -45, -23, -52, -65, -38, -27, -78, -18, -85, 68, -114, 95, 90, -59, 114, 20, -5, -31, -92, 36, 7, -53, -102, -35, -111, -51, -95, 30, 115, -50, -31};
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
    msg.setTimeStamp(0.377605026381);
    msg.setSource(42690U);
    msg.setSourceEntity(112U);
    msg.setDestination(5840U);
    msg.setDestinationEntity(113U);
    msg.source.assign("DAQYXNJNKWXZEHPH");
    const char tmp_msg_0[] = {31, 28, -92, -99, 6, -68, 8, -125, 112, 68, -8, -11, -110, -59, -30, -41, -62, 69, 23, -22, -44, 48, 88, 89, 100, 41, 90, -94, 89, -3, -59, -50, -40, 16, -21, 88, -66, -24, -1, 52, -55, -80, -49, -125, 87, 94, -96, -85, -59, 69, -56};
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
    msg.setTimeStamp(0.193416176264);
    msg.setSource(34698U);
    msg.setSourceEntity(211U);
    msg.setDestination(39348U);
    msg.setDestinationEntity(221U);
    msg.source.assign("VNGNBJMYDCIKPDUQUIZEJWGBESPKXGFSNRSDBFYWCJGMRRZMIYXKHOVPYQTRKLCKGAEBUDV");
    const char tmp_msg_0[] = {-63, -93, 70, -9, -121, 110, 44, 113, 23, -83, 88, -85, 124, -47, -74, -61, -84, -86, 101, -118, -24, 126, 24, -87, 22, 77, 50, -4, -110, -23, 96, 76, 118, -32, -44, -104, -14, 110, 31, 34, 106, -3, -127, -118, -10, -26, 41, -121, -87, 85, -76, -9, -57, 12, 121, -66, 79, 88, -101, -93, 64, 89, 94, 111, 110, -25, -43, 117, -113, 9, -122, 61, 100, -126, -82, -98, -54, 7, -39, 114, -106, 63, 54, -91, 51, -111, 80, 34, 6, 34, 51, -6, 63, -6, -99, -119, -68, -87, -41, -79, -62, -66, -12, 2, 98, 43, -118, -56, 100, -46, 108, -28, -34, -45, -98, -122, -95, 8, 9, -78, 85, 104, 35, 45, -76, -21, -36, 104, 90, 73, -42, -72, 116, -114, -9, -69, -114, 103, -75, -123, 69, 36, 79, 108, -12, -52, -98, -23, 91, -104, -77, -77, 3, 109, -59, -51, -35, -91, -15, 51, -38, 33, -35, 110, 78, -69, 53, 12, 125, 21, -86, 19, -75, 64, 117, -84, 92, -115, -80, 83, -78, 48, 19, -111, 32, -14, -15, -9, -28, 88, 29, 112, -46, 37, 110, 1, -29, -42, 71, 112, 66, -60, -113, 78, 40, 100, 85, 22, 4, -70, -59, -90, 62, 92};
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
    msg.setTimeStamp(0.793132740182);
    msg.setSource(5970U);
    msg.setSourceEntity(114U);
    msg.setDestination(540U);
    msg.setDestinationEntity(201U);
    msg.source.assign("EQVWITHSDACZNOJUBUWNMWTQNWGYPREDLOAHSBZJVINVBPXIJVQRZBEGGOEOCTXYLYCJZVIIPDTXOAZMKXQJDOBRTKUPXSHRIFDEUDFHFFGVRZVISUTNTLAKUSPSOBKBGYJNAGWQHUCJDVFACLAM");
    const char tmp_msg_0[] = {78, 23, 69, -53, -95, -66, 28, 94, 16, -98, 26, -10, 109, -58, 4, -83, -94, -124, 64, -8, 70, -25, -64, -8, -37, 61, -59, 95, 44, -40, 21, -64, -63, 88, -27, -6, -61, 51, -11, -10, 53, -82, 65, -11, 13, 107, -117, 3, 65, 60, -57, 43, -25, -83, 9, -92, -23, 106, 32, -12, -105, -1, 21, 17, 117, 100, 116, 120, 120, -20, -98, -22, -101, -89, 56, 25, 4, 33, -122, 80, 27, 43, 96, 114, 74, -103, -35, 25, 23, -126, 59, 11, 70, -125, -98, -54, -96, -40, -74, -22, 80, -55, 22, 64, 86, -92, -33, -19, 116, -52, -7, -87, 1, -70, 95, -86, 37, -104, 98, 126, -116, -5, -45, 94, 71, -54, -109, -98, -37, -116, -28, 92, -107, -111, 12, 85, 110, -96, -120, -76, -14, 66, -47, 52, -46, 50, 89, -41, -98, -59, -1, 27, 38, -117, -72, -61, -53, -69, -117, -59, 54, 90, 73, -92, -114, -28, 77, 92, -91, -20, 63, -122, 66, 9, 7, -73, -122, -89, 73, 73, -17, -73, 16, -47, -37, 115, 53, -72, -116, 50, -125, 37};
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
    msg.setTimeStamp(0.976746400803);
    msg.setSource(11357U);
    msg.setSourceEntity(73U);
    msg.setDestination(51779U);
    msg.setDestinationEntity(85U);
    msg.seq = 950751747U;
    msg.state = 176U;
    msg.error.assign("YAELJUTKCFODGJKJSRBBEITBBIPMVKIWRENAWCSHOYTERNNJNUHWCDVWEKFIXGRISONWLTNKZOPWYNNXWGCTLZQDUTJOYFBI");

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
    msg.setTimeStamp(0.329922657465);
    msg.setSource(43091U);
    msg.setSourceEntity(217U);
    msg.setDestination(24992U);
    msg.setDestinationEntity(201U);
    msg.seq = 2395523157U;
    msg.state = 193U;
    msg.error.assign("GRATMCAKCUUMQZQXOJEXJGVAJNQRIVXTPTDVONTNQQCPRROPAUZXUBKWHZWRPKZSBGSJXHBAMBLHJQUYXRGLHIPEVKGUUCHGNFIJQPEWEOFNCZZDPGXJPMQBRFANDDFCXVWTPMGWMDWJVOKEKTYZOUSUBJHZEFSTEDABDYNVYDYIYFWHATSJISNONSBV");

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
    msg.setTimeStamp(0.910282766639);
    msg.setSource(41827U);
    msg.setSourceEntity(204U);
    msg.setDestination(17667U);
    msg.setDestinationEntity(19U);
    msg.seq = 496807317U;
    msg.state = 141U;
    msg.error.assign("LCBQXTVOBYQWQXHHECRNYJLWQCNSFHTTWNQUXTMUSYUCZQUXSMUNOGGRTAIEKPBLPIHZZJRMWYYIPJAOUPMGIQQCTBLBKFTYVZFVOWFBOCMGRKSDRADRCIIG");

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
    msg.setTimeStamp(0.603033019568);
    msg.setSource(7748U);
    msg.setSourceEntity(87U);
    msg.setDestination(64589U);
    msg.setDestinationEntity(137U);
    msg.origin.assign("DZCUHRFLMMIEXSIYGNMFCMQWMHWUEKYMAZYETJRETQHRLVBGQGYLCJKIODRHSSUTWDWNWKKPJQRDSMWTATTAPKTACNCZXJQOAAQJVTDENUOXMEDCVCPZGWKLVKZURKUALBQOOGFFJGZUIBDUFJFXYPNTQIOJFJZRPMSSWHVREYVPGIGSZKGSBRONLXLPQY");
    msg.text.assign("EWGYNGUIFDVZOCTCZJUQXWGCOKEQASYOQXVTCH");

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
    msg.setTimeStamp(0.596822940754);
    msg.setSource(44558U);
    msg.setSourceEntity(246U);
    msg.setDestination(2806U);
    msg.setDestinationEntity(119U);
    msg.origin.assign("ISDMKXMIOVAJKOXPQRHLEJDXNYGJNGLSTXIEBWEJIGXGBCIRAHBLKUWOUTTMNKAPUKASWKDITEWLHTHNEUVGPVBACXULMGUUYFAKCBQYLVBWPGWZAQHZTSRDIJOYFCTZQEYNWFUZMQYRAFGIZJZRJOZYJSDSHIGHOL");
    msg.text.assign("ARFVRSLOXTJEKSWPSZJKUVDOYCXRQRPJGYATSSBSIZOYRYNFCYGKGWZUCEODQTEIPDHRXWTKYRQKUZYHWDSKZEHMXPNPPDBWWXDVAKUJVBICFFRSUXLNDOWAOLMYHTGWNOEMOFGNUQKHMHVOBRQLHLMZETAICZQASCNTPBGIMGWLKEGAVUEBFJGQYUNHTQRZEININ");

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
    msg.setTimeStamp(0.115399422241);
    msg.setSource(42264U);
    msg.setSourceEntity(85U);
    msg.setDestination(27172U);
    msg.setDestinationEntity(105U);
    msg.origin.assign("KLXELIBSHJVTFBVUBMITJACGWRTHWNVNHPYIEVOUCWMJAFGYZBDPQGRRPELDPKWDKDLETVQDFMUBFIYBZWQUNXOJAGIXUZJDTYATDPRAQVHDAPLAIHZKBRTHXIHJLTEISEQIVKSGCSUKUGVOGZMNYFC");
    msg.text.assign("KKHXAYHEFXZVOQYUYDWBTVZSSWZNCENGYVAQNFGXAURMTGPSFXCRPTLEOSQCDHKQBFYMKRIKAFKMVVDPJQJDKBVYBIMFYYRGIISOKIFRWTMYEQKJNJLDNJDJVRDQQTVRPFBUMWJCGAVNOEOISLUTROJDOPWSWIELUGADBBWQNJIZW");

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
    msg.setTimeStamp(0.288764399072);
    msg.setSource(54980U);
    msg.setSourceEntity(169U);
    msg.setDestination(58589U);
    msg.setDestinationEntity(121U);
    msg.origin.assign("LMTKFWZGNYFSQCBSCKFJHEYYUZVOTKQFZKSYMGMVMWDJEARWIYQFEXVZORUQTXAXKCJAYPDZNYDVCWCCSZMXOROFCSNGLKVGILDBOBUEBBKRYCNRBGXANIHANTRUJDLRPQYUPUIWJJXSUIPEAIOJVJRHWCPS");
    msg.htime = 0.323058722178;
    msg.lat = 0.403249093152;
    msg.lon = 0.812118022188;
    const char tmp_msg_0[] = {-65, -29, -122, -3, 45, -94, -94, -81, 17, 115, -76, 67, -5, 49, -119, -97, 88, -52, 53, -50, -96, -113, 92, -43, 32, -30, 122, -119, -66, -37, 39, 94, 82, 116, 123, -3, -30, -8, 7, -59, 117, -58, -7, -124, 29, 64, -98, 34, 111, -10, 82, 68, -117, -42, 91, -13, -52, -70, 69, 90, -31, 48, 38, 108, -53, -3, -63, 87, -82, -67, 112, 6, -64, 49, -45, -76, -70, -28, -97, -72, -108, -81, -58, -13, -48, 8, 66, 75, -69, 101, 49, 97, 79, 48, -11, -90, -111, -106, -91, 30, -66, 72, 6, -44, -82, 33, 72, -43, 78, 21, -117, 23, -53, -49, 77, -57, 113, -70, -12, -92, 91, 39, 111, 67, 37, -54, 36, 89, 10, -65, 101, 97, 67, 43, 102, 76, 110, 20, -105, -93, 119, 112, -121, 43, -31, -58, 56, 64, 5, 57, 70, 35, 88, -74, -124, 2, -25, -128, 28, -46, -21, 119, -13, 73, -63, -8, 57, -64, 35, 6, -120, 87, -57, -8, -113, -63, -30, 7, 106, -39, -128, 85, -68, -3, -47, -70, 76, 27, 22, 7, -86, 0, -118, -95, -95, 44, -18, -9, -36, -50, -56, -21, 103, 22, -20, -108, -16, -94, 110, -15, 109, -120, -112, -13, -77, 0, 54, 101, 126};
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
    msg.setTimeStamp(0.960946919978);
    msg.setSource(2768U);
    msg.setSourceEntity(144U);
    msg.setDestination(49094U);
    msg.setDestinationEntity(181U);
    msg.origin.assign("KGOVOMFVCFURJVTQEQCGYMKDQOOZJIGXGSBXRFVTCKELATZCXVIAUWSSBLPCTQTVHZLUZHEVHHXOBKEFYLQCYMMBQYPWHEPNFNATBVSREUIZZRKALLRSKONJWKDLMIOPNEFBRNPFYXWQNAJUPWARSTITJVJCPPQGDBFEMOYSINXKKQLNJRJCHPSU");
    msg.htime = 0.0940246928167;
    msg.lat = 0.360712553467;
    msg.lon = 0.592818786003;
    const char tmp_msg_0[] = {-37, -71, -92, -51, 87, 15, 84, -127, -38, -103, 44, 9, -25, -94, 72, 68, 51, 28, -24, -71, 64, 59, -65, -15, 78, -16, 122, -59, -110, 108, 124, -35, -12, -83, -91, -21, 30, 8, -39, 94, 9, -96, 90, 33, -27, -65, 120, -89, 101, 81, -125, 91, 50, 125, -52, 99, 33, 119, 108, -79, -43, -124, 61, -118, -39, 29, -110, 25, -38, 44, -67, 74, 13, 123, 82, 35, -2, -83, 2, 124, -119, 83, -61, 101, 43, 110, 101, -15, 115, -4, 126, 12, 77, -52, -89, 6, 81, -28, -69, 11, -105, -42, 51, -57, -56, 75, -107, 33, 3, 116, 73, 45, 12, 44, -51, 66, 30, -91, 18, 37, 31, 99, -103, -122, 34, 119, 75, -41, 40, 40, 56, -114, 124, -114, -124, -16, 11, 103, -4, 17, 24, -69, -123, 116, 28, 66, -23, -87, 80, -86, -53, -30, 47, -128, 39, -54, -69, -117, 50, 76, 74, -125, 24, -73, 24, 104, -92, -78, 66, 126, 1, -31, 16, 1, -122, -65, 123, 41, 119, -50, 25, -92, -48, 119, 8, -78, -77, 55, -6, -90};
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
    msg.setTimeStamp(0.921097864336);
    msg.setSource(41533U);
    msg.setSourceEntity(146U);
    msg.setDestination(7017U);
    msg.setDestinationEntity(192U);
    msg.origin.assign("FXVOMESTTMVQJBUZTWXJBBANQFQYSVYOHHQEAEALLFQVHDKFFJMGWZRJTASLOEAJKWXPZKQKIYZHGUIODRTCTJLKDGEIEEOKIGONTQIRBGZALZPKYPLPSUHHCPUMCUAREVTOXRUNLXCPQCTNPMJNNWOAGSFMNMHMQGLWKZWIBXGHJGWNIFHCWIBTEDPZKIYGWYVDBLCXJVWPVFNMYCRUIFABUCNYRFDRSSSDRAVZ");
    msg.htime = 0.733493879698;
    msg.lat = 0.0862388144228;
    msg.lon = 0.152090716201;
    const char tmp_msg_0[] = {56, -75, 44, -12, -15, -26, 10, -63, -55, 123, -110, 99, -4, -99, -89, -64, 3, -110, 32, -111, -116, 87, 18, -88, -73, -53, -31, -128, -65, 79, 118, -86, 57, -49, 113, 39, 111, 86, 110, -71, -17, 57, 124, -15, -59, 109, 54, 62, -117, 97, 78, 55, 106, -109, -97, 108, 74, -104, 92, -55, -44, -33, -27, 60, -62, -8, 37, -13, -127, 10, 35, 45, -36, 101, 20, -4, -61, -30, -17, 85, -110, 9, 3, -47, 124, -109, 78, 69, 125, -83, -86, -124, -108, 51, 65, -94, -116, 119, 80, -45, 89, 95, -101, 66, 95, -50};
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
    msg.setTimeStamp(0.279322336537);
    msg.setSource(56174U);
    msg.setSourceEntity(205U);
    msg.setDestination(23266U);
    msg.setDestinationEntity(78U);
    msg.req_id = 26883U;
    msg.ttl = 13692U;
    msg.destination.assign("UOXYNVYVWEMHWYTCGHNAGOTMRGWYJSOSPVZNXPJQFTOGZIABRKHOAAIZEUJCKJHLAQMLWWHZIBDYQYLSXWVQMPBNCPKKHUIDQKHCDBLBDMVOKATPFSOWDVZDEYTEHJBPSRUORJJVELEBRTKNOQCCIPJFXRZRFZGLUAYDFXTCMQIZRACQ");
    const char tmp_msg_0[] = {-27, -85, -21, 44, 22, -98, -93, 48, 98, 117, -108, -123, 38, 57, 87, -116, -21, 110, 121, -44, 25, -11, -95, -61, 123, -31, 51, 89, -50, 74, 62, 1, 51, 52, -69, 123, 64, -60, -62, -115, -3, 112, 98, 53, -75, -78, -16, -20, 5, 87, 117, -3, -114, 71, 120, 93, -40, 120, -56, 25, -30, -94, -107, 71, 2, 70, 35, -113, 101, -106, -53, 29, -66, 82, -34, 5, -36, 16, 87, 79, 54, 81, -117, -1, -98, -77, 65, 60, -27, -24, -114, -114, -35, -45, -88, 87, -88, 59, -113, -73, 67, -39, 16, 121, 109, -86, -127, 122, 51, 47, -27, -53, -22, 102, 89, 73, -88, 34, 2, -115, -69, 60, -93, -4, -104, 126, 18, 4, -25, -109, 84, 62, -103, 8, 63, 71, 38, 97, -81, 112, 50, -78, -79, -95, 105, -128, 115, -74, -17, -77, 28, -61, 34, -108, 5, -83, 110, 89, 81, 7, -34, -29, 123, -111, -69, -59, -70, 38, -93, 125, -121, -78, -34, -58, -54, -40, -66, -42, 39, -88, -26, -101, -89, 123, 58, 94, -105, 6, -71, 98, 66, -33, -26, -81, -108, -100, -117, 15, -95, -60, 6, 109, 105, 78, -67, -97, -80, 33, -16, -7, -33, -28, -78, -125, 67, -126, -122, -7, -126, 94, 48, 16, -57, 15, 111, -83, 103, 44, 97, 123, 100, -125};
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
    msg.setTimeStamp(0.611185989742);
    msg.setSource(59445U);
    msg.setSourceEntity(240U);
    msg.setDestination(53303U);
    msg.setDestinationEntity(59U);
    msg.req_id = 38690U;
    msg.ttl = 18222U;
    msg.destination.assign("NOCGQGHDHJUNOGTVWLLUGLPYJILYOEXPPFJMQBUXSGXLIMQAMBPOHCEMBEHZANNFYQMYAMCEWXJDGUKIITJSSOFMRQVTYDZZHHQROUFNYB");
    const char tmp_msg_0[] = {34, 54, -17, 100, 54, -46, 19, -25, -17, -30, 41, 90, -51, 39, 40, -43, -5, 24, -106, 44, -93, 25, -87, -109, 22, 52, -39, -81, -29, -56, -9, 48, -123, 85, 115, 29, 78, 92, -97, 63, 66, 74, -47, -43, 13, 35, -107, 46, 90, -72, -94, 121, -59, -86, -95, 5, 23, 45, 9, 42, -54, 118, -125, -101, 66, 53, 20, 90, 59, 11, -44, -96, -56, 70, -82, 84, -81, -80, -12, 72, -45, -11, 17};
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
    msg.setTimeStamp(0.272459251737);
    msg.setSource(52911U);
    msg.setSourceEntity(146U);
    msg.setDestination(11996U);
    msg.setDestinationEntity(114U);
    msg.req_id = 46753U;
    msg.ttl = 62189U;
    msg.destination.assign("UFMEWTPRBWFQXJTWP");
    const char tmp_msg_0[] = {-40, 37, -18, -58, 108, 53, -33, 107, 70, 99, -94, 58, -70, 48, 16, 37, -74, 51, -128, -116, -94, -52, 6, -54, 99, 17, 111, 1, -31, 64, -87};
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
    msg.setTimeStamp(0.302568658936);
    msg.setSource(17808U);
    msg.setSourceEntity(124U);
    msg.setDestination(20693U);
    msg.setDestinationEntity(90U);
    msg.req_id = 24663U;
    msg.status = 213U;
    msg.text.assign("PJPMYXEJBBZHPUXOHTWQHVRTGTMMDJHFLOJNGYMBIEJSSSAYNTXKEWVFIRYWASZQRGIEGHHOHVANRCOPEFODLUCOEKSNGOQGUJQZTKZCWUGIYUKPHDQYWBWPXQIZIMVPQQTBDOZMXSFHFZNLCDWUFOUSGWTKRZDTKRAXFSGRXMAITFAZLXANWYRSMDWQVOKJCHADVJL");

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
    msg.setTimeStamp(0.823569905021);
    msg.setSource(12996U);
    msg.setSourceEntity(19U);
    msg.setDestination(26737U);
    msg.setDestinationEntity(51U);
    msg.req_id = 42518U;
    msg.status = 7U;
    msg.text.assign("RYPTXFBMUIYBMXGXSTOIUCIOZHRALFGQZDTWMSTWPORUEPLLNZTWHYXSD");

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
    msg.setTimeStamp(0.410409996647);
    msg.setSource(31553U);
    msg.setSourceEntity(99U);
    msg.setDestination(45988U);
    msg.setDestinationEntity(127U);
    msg.req_id = 23U;
    msg.status = 45U;
    msg.text.assign("KRXTZZQLOENQT");

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
    msg.setTimeStamp(0.956560675723);
    msg.setSource(53313U);
    msg.setSourceEntity(75U);
    msg.setDestination(54063U);
    msg.setDestinationEntity(178U);
    msg.group_name.assign("WGWSNWSDPCZNVUEBYTOGUBAJPCXPTKHUXNRFUDWEQCCVEIPGUMFLKKQVNNWTLYOSKYYZWQVIHBAICSZUOJUHFTEBCYDMMQMOSHVKOXFGQLRAGJPDIJXMWXOSULQYBSPTNMEUS");
    msg.links = 1769820351U;

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
    msg.setTimeStamp(0.217131864773);
    msg.setSource(6301U);
    msg.setSourceEntity(223U);
    msg.setDestination(18252U);
    msg.setDestinationEntity(253U);
    msg.group_name.assign("MGMOCITAVXQNAFAPVAOIXPJYUCUYPBFEXDGKHWMVJYJXZLWKBJAWCSSGGHWWMCSIQNVAOUOUTRTXREKHTMMZFFENRBYDGGFWQSAUEZRDJQNDHCCAANXLJVCLZDOLSIMWQLVHXTSKZQHCLIPQVSRKZI");
    msg.links = 3519274941U;

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
    msg.setTimeStamp(0.407195029082);
    msg.setSource(45139U);
    msg.setSourceEntity(3U);
    msg.setDestination(42850U);
    msg.setDestinationEntity(36U);
    msg.group_name.assign("JEWDNWMMLJNOYHMMYNUTBBLRCHGZZWZHZLHSKLDUWCFWUIFYAZBRYCJBQARNBSPYYLPKTQNFJNUUDRKJEIMRJGIZFGBTWCTLOLRBCYDCXXZISXAKOUQNSIVIWGVTCBEYPUCPTBMJGXFLHWKSPEVVWIJAUME");
    msg.links = 778262530U;

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
    msg.setTimeStamp(0.273553669768);
    msg.setSource(58734U);
    msg.setSourceEntity(23U);
    msg.setDestination(3969U);
    msg.setDestinationEntity(39U);
    msg.groupname.assign("ZSULSASYAD");
    msg.action = 236U;
    msg.grouplist.assign("ALEPHSDRWIOAZZOHANUGKGTTCTTCQQEDCMMANHSXHLEKQHWKYZJPURSWZUTPSVXYGRYXEPOIXAMVLFIXAMO");

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
    msg.setTimeStamp(0.937573207827);
    msg.setSource(21883U);
    msg.setSourceEntity(219U);
    msg.setDestination(20819U);
    msg.setDestinationEntity(74U);
    msg.groupname.assign("YVFSEUFOTRLZWWUYNLLQWNPHJIPXNKEZZQJAAKWBPAVMCRGNOIMBUUJSIWKZFBHKLCSLPGGVN");
    msg.action = 254U;
    msg.grouplist.assign("VYFGEUZUZIOSNEKYIZRPMPTHSDCARXBLHWNRYYHCLMZUGWFBVMGPNAOJSHVTXSGQSUOA");

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
    msg.setTimeStamp(0.202392460325);
    msg.setSource(25976U);
    msg.setSourceEntity(78U);
    msg.setDestination(4294U);
    msg.setDestinationEntity(223U);
    msg.groupname.assign("DWTGHAMXXVTMEODFDPFGJHCEADSIWEHIRXKBQNBXRZGSLCQQNDKXETYGCQZLOXOPBYYNLMHJBMKJKFNFGLUSSF");
    msg.action = 93U;
    msg.grouplist.assign("OZOXNVSOUIZWCRLQECHSRQWPZIOWOAWDXZEQDZVKEXUKHMIDQFUTQWZVSNSRKIMSMAQKWKXTDFHIKDIVIHGNCYUUTHYQNHXONBYQTKYJCWSSPKHLEREXFEYBXPFACRXDDBCJPBYPMLTQLSYMCJLJSDH");

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
    msg.setTimeStamp(0.619810229368);
    msg.setSource(39044U);
    msg.setSourceEntity(187U);
    msg.setDestination(56605U);
    msg.setDestinationEntity(243U);
    msg.id = 21U;
    msg.range = 0.0670393833702;

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
    msg.setTimeStamp(0.048596204627);
    msg.setSource(40571U);
    msg.setSourceEntity(123U);
    msg.setDestination(52058U);
    msg.setDestinationEntity(190U);
    msg.id = 227U;
    msg.range = 0.430865436871;

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
    msg.setTimeStamp(0.570354401565);
    msg.setSource(3136U);
    msg.setSourceEntity(174U);
    msg.setDestination(47239U);
    msg.setDestinationEntity(70U);
    msg.id = 231U;
    msg.range = 0.942223640184;

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
    msg.setTimeStamp(0.443178337936);
    msg.setSource(42186U);
    msg.setSourceEntity(163U);
    msg.setDestination(31137U);
    msg.setDestinationEntity(35U);
    msg.tx = 140U;
    msg.channel = 73U;
    msg.timer = 41609U;

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
    msg.setTimeStamp(0.501910196728);
    msg.setSource(43387U);
    msg.setSourceEntity(215U);
    msg.setDestination(39473U);
    msg.setDestinationEntity(95U);
    msg.tx = 84U;
    msg.channel = 180U;
    msg.timer = 58243U;

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
    msg.setTimeStamp(0.289231673599);
    msg.setSource(47196U);
    msg.setSourceEntity(173U);
    msg.setDestination(32646U);
    msg.setDestinationEntity(14U);
    msg.tx = 28U;
    msg.channel = 183U;
    msg.timer = 60548U;

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
    msg.setTimeStamp(0.462923619175);
    msg.setSource(62580U);
    msg.setSourceEntity(190U);
    msg.setDestination(44164U);
    msg.setDestinationEntity(169U);
    msg.beacon.assign("IQBAMCPABNDEWSZJOTGQSTTDPVZRAEVVRXKIZRDZPUAHJBHOPJXCCOMSUYECEFPAGWBINXPYJDKTUBLMCJRBLDVZJUIZFAGFPWOXEAZLNNMKBGMARCGHZDGASXQJDQJMPVZNOWTWTRSUMYFWXVOIMNCODTGWHPDTNKW");
    msg.lat = 0.0180001157427;
    msg.lon = 0.184316333367;
    msg.depth = 0.044156947745;
    msg.query_channel = 184U;
    msg.reply_channel = 69U;
    msg.transponder_delay = 127U;

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
    msg.setTimeStamp(0.900034098258);
    msg.setSource(57552U);
    msg.setSourceEntity(252U);
    msg.setDestination(7507U);
    msg.setDestinationEntity(103U);
    msg.beacon.assign("GCKSNWFUJFQVYQRRIDVOWMCAJBGVOSHCLUFGDJWCQLIAAAXNEUDRTRBMWOFWEDJHEUHWZNAOVLZBWKOXDBSCSBCYIMFMBLPACYHYTBCZFNFEVXTNEWJPIGXAKPSETQRYQIATXHJYVJMKKWXHVJDQZSTYIROHMRWRNHZMZIDZGLXUZREQBPUSGXGFXGTFOXYVKOVKDCMNLZPYFKIUNTBKSPQUL");
    msg.lat = 0.733208727805;
    msg.lon = 0.794172418084;
    msg.depth = 0.556481304201;
    msg.query_channel = 57U;
    msg.reply_channel = 76U;
    msg.transponder_delay = 248U;

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
    msg.setTimeStamp(0.197908658129);
    msg.setSource(7464U);
    msg.setSourceEntity(48U);
    msg.setDestination(53790U);
    msg.setDestinationEntity(205U);
    msg.beacon.assign("RRUGFKQLOFVVQBHFKDWLEHRTLLJTWHBYBFMQXNZUHSGGIMNSPPUHVBETFGDCOJDZRCOGHRCYYKOUNBJETWVBMSDCF");
    msg.lat = 0.790092932192;
    msg.lon = 0.703380878651;
    msg.depth = 0.0952406697934;
    msg.query_channel = 241U;
    msg.reply_channel = 96U;
    msg.transponder_delay = 214U;

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
    msg.setTimeStamp(0.55539679768);
    msg.setSource(32553U);
    msg.setSourceEntity(47U);
    msg.setDestination(26139U);
    msg.setDestinationEntity(34U);
    msg.op = 176U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DNPSVYGDIUIVPKLBEPINFSZODAXIUEESJLZARKSAAXYPMDFVVOZZTNYPVPJCBLTXHORMUQNXXARVCSQOGAWIJGJUAGTSMQZQMHFKOHXVSZZEECLYRKIRKPQLUL");
    tmp_msg_0.lat = 0.456966320188;
    tmp_msg_0.lon = 0.903905209844;
    tmp_msg_0.depth = 0.996878713353;
    tmp_msg_0.query_channel = 52U;
    tmp_msg_0.reply_channel = 186U;
    tmp_msg_0.transponder_delay = 67U;
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
    msg.setTimeStamp(0.407364030273);
    msg.setSource(46057U);
    msg.setSourceEntity(22U);
    msg.setDestination(1993U);
    msg.setDestinationEntity(223U);
    msg.op = 29U;

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
    msg.setTimeStamp(0.103418910742);
    msg.setSource(18360U);
    msg.setSourceEntity(72U);
    msg.setDestination(50569U);
    msg.setDestinationEntity(246U);
    msg.op = 23U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IWPXZEWFMKRNBUSZUGFOHVNZWVGGQYAUDQYKURLTDTLNPAHMDVSFYWSTNPCIQCEVKPFJVYG");
    tmp_msg_0.lat = 0.274895102178;
    tmp_msg_0.lon = 0.837316708097;
    tmp_msg_0.depth = 0.0967749446904;
    tmp_msg_0.query_channel = 18U;
    tmp_msg_0.reply_channel = 81U;
    tmp_msg_0.transponder_delay = 61U;
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
    msg.setTimeStamp(0.595785831701);
    msg.setSource(48381U);
    msg.setSourceEntity(146U);
    msg.setDestination(20707U);
    msg.setDestinationEntity(38U);
    msg.address = 62U;

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
    msg.setTimeStamp(0.992009640562);
    msg.setSource(65375U);
    msg.setSourceEntity(200U);
    msg.setDestination(43921U);
    msg.setDestinationEntity(193U);
    msg.address = 229U;

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
    msg.setTimeStamp(0.610095810323);
    msg.setSource(39426U);
    msg.setSourceEntity(107U);
    msg.setDestination(4704U);
    msg.setDestinationEntity(46U);
    msg.address = 171U;

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
    msg.setTimeStamp(0.697762832929);
    msg.setSource(16589U);
    msg.setSourceEntity(164U);
    msg.setDestination(17267U);
    msg.setDestinationEntity(19U);
    msg.address = 14U;
    msg.status = 210U;
    msg.range = 0.140551940617;

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
    msg.setTimeStamp(0.0405697868081);
    msg.setSource(31222U);
    msg.setSourceEntity(93U);
    msg.setDestination(49258U);
    msg.setDestinationEntity(171U);
    msg.address = 88U;
    msg.status = 215U;
    msg.range = 0.00902688157947;

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
    msg.setTimeStamp(0.378331702702);
    msg.setSource(8084U);
    msg.setSourceEntity(173U);
    msg.setDestination(55968U);
    msg.setDestinationEntity(75U);
    msg.address = 193U;
    msg.status = 67U;
    msg.range = 0.449730608512;

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
    msg.setTimeStamp(0.673966853135);
    msg.setSource(4149U);
    msg.setSourceEntity(113U);
    msg.setDestination(15781U);
    msg.setDestinationEntity(94U);
    IMC::EntityInfo tmp_msg_0;
    tmp_msg_0.id = 231U;
    tmp_msg_0.label.assign("WECTGRMATPMBXIXTOJDCLYRIZSPTXJGIAJTIOWNOSGOTLFBEUHNVHMESFEVARSZARVCRSLFMHYKQWBWCNYCPPIZSLCAHTURLHUJNNODRXKFQFTHYCGGABPNKZHVZIZOUSZDTYXMGGPBFGQZRBBJZYWIJDGAVIWOONDMEVAXLEPOKGKVWAAYYTQDX");
    tmp_msg_0.component.assign("DTSBIHVKCGFWDBTAEECRUUKKTKQWZJXDYSIIHZADLMGMRAIQWVYSZZIVLHFZYKUCUJVQDBBXOZCXYSTJMKHMVNAVETNSPPCNDFAGFBEZTWMUVOFCBRQCTHNWABNIMGXHTNOWXXZMPBYQTSIUOJSGPYWOOCPWELUSGUIPJYKRNPBLLXIJHVXEMUFJQFSKMNTOVPBGPQUGONDHWAREYWEIDXRZAF");
    tmp_msg_0.act_time = 26561U;
    tmp_msg_0.deact_time = 47787U;
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
    msg.setTimeStamp(0.415466113877);
    msg.setSource(3798U);
    msg.setSourceEntity(248U);
    msg.setDestination(19074U);
    msg.setDestinationEntity(235U);
    IMC::GetOperationalLimits tmp_msg_0;
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
    msg.setTimeStamp(0.534051656423);
    msg.setSource(18688U);
    msg.setSourceEntity(144U);
    msg.setDestination(29633U);
    msg.setDestinationEntity(50U);
    IMC::LblDetection tmp_msg_0;
    tmp_msg_0.tx = 54U;
    tmp_msg_0.channel = 25U;
    tmp_msg_0.timer = 13480U;
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
    msg.setTimeStamp(0.512469937248);
    msg.setSource(29459U);
    msg.setSourceEntity(181U);
    msg.setDestination(15072U);
    msg.setDestinationEntity(119U);
    msg.enable = 45U;

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
    msg.setTimeStamp(0.305210149143);
    msg.setSource(11187U);
    msg.setSourceEntity(4U);
    msg.setDestination(55589U);
    msg.setDestinationEntity(106U);
    msg.enable = 185U;

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
    msg.setTimeStamp(0.497488554423);
    msg.setSource(42740U);
    msg.setSourceEntity(46U);
    msg.setDestination(54451U);
    msg.setDestinationEntity(202U);
    msg.enable = 246U;

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
    msg.setTimeStamp(0.419262400169);
    msg.setSource(50940U);
    msg.setSourceEntity(213U);
    msg.setDestination(48051U);
    msg.setDestinationEntity(195U);
    msg.summary = 4U;
    msg.level = 135U;

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
    msg.setTimeStamp(0.934098614082);
    msg.setSource(50145U);
    msg.setSourceEntity(191U);
    msg.setDestination(19726U);
    msg.setDestinationEntity(2U);
    msg.summary = 203U;
    msg.level = 82U;

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
    msg.setTimeStamp(0.813339204135);
    msg.setSource(33618U);
    msg.setSourceEntity(108U);
    msg.setDestination(64338U);
    msg.setDestinationEntity(40U);
    msg.summary = 94U;
    msg.level = 237U;

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
    msg.setTimeStamp(0.387513691092);
    msg.setSource(10348U);
    msg.setSourceEntity(183U);
    msg.setDestination(22201U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.899876797035);
    msg.setSource(29649U);
    msg.setSourceEntity(229U);
    msg.setDestination(1113U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.0239627343944);
    msg.setSource(60748U);
    msg.setSourceEntity(151U);
    msg.setDestination(24363U);
    msg.setDestinationEntity(111U);

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
    msg.setTimeStamp(0.440475574247);
    msg.setSource(61539U);
    msg.setSourceEntity(238U);
    msg.setDestination(9992U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.341569945398);
    msg.setSource(56254U);
    msg.setSourceEntity(80U);
    msg.setDestination(9042U);
    msg.setDestinationEntity(134U);

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
    msg.setTimeStamp(0.885955207546);
    msg.setSource(54113U);
    msg.setSourceEntity(168U);
    msg.setDestination(45103U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.0189949693081);
    msg.setSource(28943U);
    msg.setSourceEntity(252U);
    msg.setDestination(14978U);
    msg.setDestinationEntity(74U);
    msg.op = 82U;
    msg.system.assign("ZUDIOMCYWHAUVHYZILOJZNDTDVTHELKPTMFHRTOJCFXOTRFHGUKPWULNSFEWHYRLXFYDQDSXQBJVNAVARJPGWQHOOZBWIRSCMMNBUICYQNMVHQNFPTVIYGEKSTAKGZKWFLZEKIJOJOZXZEDBVGIUIQWVPHCPBTXRYFDQM");
    msg.range = 0.73274702695;
    IMC::AngularVelocity tmp_msg_0;
    tmp_msg_0.time = 0.321585350129;
    tmp_msg_0.x = 0.529648697145;
    tmp_msg_0.y = 0.520576877487;
    tmp_msg_0.z = 0.452041246705;
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
    msg.setTimeStamp(0.349710072531);
    msg.setSource(49838U);
    msg.setSourceEntity(117U);
    msg.setDestination(25130U);
    msg.setDestinationEntity(82U);
    msg.op = 185U;
    msg.system.assign("VPVZCCVABXOXJJGLRBCWWJGUVZPDUPBODJQLM");
    msg.range = 0.4209200982;
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("APDWQPQOZJCZALQPLXIOLAQIDNDSHOGYERYHOOCYDEGOIUTTVMXHCXSUTMCVNTXMDBRIFF");
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
    msg.setTimeStamp(0.673147459643);
    msg.setSource(36683U);
    msg.setSourceEntity(231U);
    msg.setDestination(6582U);
    msg.setDestinationEntity(137U);
    msg.op = 219U;
    msg.system.assign("RQCJJTUDEKACDWMGEXSDUMRYRSXOCLTYZOVOWQRIWUKTGKWUDNITNYAHPBEPUWZAYEOVZHEPBNACBSNALTDXSFUPFYESQEFSOPXBNXTMXZXAOFFLGJQIQKUURVHWYKJLRPRIMGDAJJDPARIGFXVXKKJSVZDVLWNGLYJXHGHMCEIEPMGFBKUMBLTRQNNTDVAMYCZQBFWWISZZQCTMFDK");
    msg.range = 0.302539725838;
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 22349U;
    tmp_msg_0.plan_size = 14711890U;
    tmp_msg_0.change_time = 0.195750056775;
    tmp_msg_0.change_sid = 826U;
    tmp_msg_0.change_sname.assign("WAUHOSCSTFASFLJXUVTSLPKDLLQZUGJETIQJGMSECAEZUGVTUNLXBGKKMPOJHWRDBUHIPFIOGMIKYTTVACCONIY");
    const char tmp_tmp_msg_0_0[] = {-42, -99, -91, -68, -7, 114, 40, 116, -22, -56, -10, 76, 0, -106, -32, 19, 39, -18, -89, 49, -4, -92, -80, -61, -67, 75, -99, -116, 42, -23, -48, -73, 98, -75, -2, -18, 92, 69, 26, -45, 39, -14, -113, -8, -96, 8, -118, 28, 28, -90, -57, 38, -110, 74, -104, -4, 111, 20, 65, 115, -116, -40, 35, 85, -48, -94, 19, -109, 3, -86, -63, 63, 23, -33, 79, -9, -115, -58, 83, -107, -125, -59, 69, -96, -98, 122, -98, -33, 89, -17, -101, 33, -53, -103, -123, -50, 55, 65, -63, 116, -115, -93, -86, 43, 101, 68, 89, 39, 98, -77, -8, -22};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.809625959221);
    msg.setSource(32570U);
    msg.setSourceEntity(11U);
    msg.setDestination(60005U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.0460105894088);
    msg.setSource(10836U);
    msg.setSourceEntity(129U);
    msg.setDestination(30058U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.798633125588);
    msg.setSource(33246U);
    msg.setSourceEntity(34U);
    msg.setDestination(6906U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.195457008256);
    msg.setSource(5842U);
    msg.setSourceEntity(70U);
    msg.setDestination(32170U);
    msg.setDestinationEntity(136U);
    msg.list.assign("JQJRONYVKIYRKNMAENWNTRSPIXCMZEGWGACBZEKJFUYBKBOYUCDFOMAOBTXFGNPFTOHCQOHSZFUCBHIARALVVJEPFBBDNXQUVI");

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
    msg.setTimeStamp(0.767435178546);
    msg.setSource(2839U);
    msg.setSourceEntity(0U);
    msg.setDestination(15116U);
    msg.setDestinationEntity(81U);
    msg.list.assign("BUCYOBXVBXPODSYEUZPUVMKAFQHGNRVAVZDJAKJJSGLMTZLXOSCDCQMGYLWIKKZFTKJJFQFWHYICQSMWCGBLZVNSMUPC");

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
    msg.setTimeStamp(0.768801600911);
    msg.setSource(55547U);
    msg.setSourceEntity(106U);
    msg.setDestination(11591U);
    msg.setDestinationEntity(21U);
    msg.list.assign("SCJWIGRVGBEZMQIDFQVKBTOAQNHHPGNZUXBRUHOPHYXIJSLFKKUGTOXKDWNENHSFSAHQOLCFKXQFIBZLAYNJGQBNWJRCYAIIHMRSLPIEVZDNTXBSTNJJEUGDSYEJVWWTWWDKTMFVCQKAAMOVKVDIHWRPZPEVRXOHDYPMKGQYXTMZRYSNBXKNWBUREBUFZAYEAIDQLLOWOSQTCYCJLPLJCECPJXMUZVSDULT");

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
    msg.setTimeStamp(0.727663170318);
    msg.setSource(46447U);
    msg.setSourceEntity(11U);
    msg.setDestination(57322U);
    msg.setDestinationEntity(105U);
    msg.value = 10670;

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
    msg.setTimeStamp(0.956825350332);
    msg.setSource(18725U);
    msg.setSourceEntity(242U);
    msg.setDestination(6847U);
    msg.setDestinationEntity(127U);
    msg.value = -32534;

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
    msg.setTimeStamp(0.412285941453);
    msg.setSource(62148U);
    msg.setSourceEntity(72U);
    msg.setDestination(40543U);
    msg.setDestinationEntity(217U);
    msg.value = 2839;

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
    msg.setTimeStamp(0.788072604256);
    msg.setSource(34062U);
    msg.setSourceEntity(151U);
    msg.setDestination(18129U);
    msg.setDestinationEntity(73U);
    msg.value = 0.806409584019;

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
    msg.setTimeStamp(0.188522912206);
    msg.setSource(13161U);
    msg.setSourceEntity(125U);
    msg.setDestination(31295U);
    msg.setDestinationEntity(213U);
    msg.value = 0.196248144277;

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
    msg.setTimeStamp(0.0763466915145);
    msg.setSource(20345U);
    msg.setSourceEntity(204U);
    msg.setDestination(21422U);
    msg.setDestinationEntity(250U);
    msg.value = 0.240081597198;

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
    msg.setTimeStamp(0.5295907108);
    msg.setSource(15502U);
    msg.setSourceEntity(185U);
    msg.setDestination(37030U);
    msg.setDestinationEntity(244U);
    msg.value = 0.939301285077;

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
    msg.setTimeStamp(0.0362467076367);
    msg.setSource(6377U);
    msg.setSourceEntity(141U);
    msg.setDestination(45688U);
    msg.setDestinationEntity(190U);
    msg.value = 0.390717565339;

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
    msg.setTimeStamp(0.980605900072);
    msg.setSource(60125U);
    msg.setSourceEntity(62U);
    msg.setDestination(46097U);
    msg.setDestinationEntity(106U);
    msg.value = 0.534829595582;

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
    msg.setTimeStamp(0.786348413654);
    msg.setSource(9610U);
    msg.setSourceEntity(7U);
    msg.setDestination(12092U);
    msg.setDestinationEntity(150U);
    msg.validity = 52353U;
    msg.type = 242U;
    msg.utc_year = 50804U;
    msg.utc_month = 169U;
    msg.utc_day = 65U;
    msg.utc_time = 0.263727129328;
    msg.lat = 0.305161713126;
    msg.lon = 0.0738685697309;
    msg.height = 0.693583269262;
    msg.satellites = 5U;
    msg.cog = 0.779716956828;
    msg.sog = 0.771257471113;
    msg.hdop = 0.505033248033;
    msg.vdop = 0.688199415656;
    msg.hacc = 0.109489458359;
    msg.vacc = 0.0491629509852;

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
    msg.setTimeStamp(0.902570365484);
    msg.setSource(26911U);
    msg.setSourceEntity(239U);
    msg.setDestination(16618U);
    msg.setDestinationEntity(209U);
    msg.validity = 28675U;
    msg.type = 205U;
    msg.utc_year = 17817U;
    msg.utc_month = 8U;
    msg.utc_day = 236U;
    msg.utc_time = 0.701954124849;
    msg.lat = 0.867297596379;
    msg.lon = 0.145308768404;
    msg.height = 0.625349169408;
    msg.satellites = 40U;
    msg.cog = 0.0933646904155;
    msg.sog = 0.384971070833;
    msg.hdop = 0.161406978194;
    msg.vdop = 0.829366342847;
    msg.hacc = 0.596101874419;
    msg.vacc = 0.35395713821;

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
    msg.setTimeStamp(0.0634609568612);
    msg.setSource(13421U);
    msg.setSourceEntity(76U);
    msg.setDestination(62799U);
    msg.setDestinationEntity(16U);
    msg.validity = 18164U;
    msg.type = 176U;
    msg.utc_year = 43343U;
    msg.utc_month = 98U;
    msg.utc_day = 100U;
    msg.utc_time = 0.0682091450268;
    msg.lat = 0.442349050747;
    msg.lon = 0.728076335786;
    msg.height = 0.199729431251;
    msg.satellites = 214U;
    msg.cog = 0.618799482966;
    msg.sog = 0.960857348339;
    msg.hdop = 0.379586030755;
    msg.vdop = 0.0768274596791;
    msg.hacc = 0.691044338316;
    msg.vacc = 0.31433630448;

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
    msg.setTimeStamp(0.144155860474);
    msg.setSource(63254U);
    msg.setSourceEntity(108U);
    msg.setDestination(26291U);
    msg.setDestinationEntity(34U);
    msg.time = 0.926111255192;
    msg.phi = 0.463741313309;
    msg.theta = 0.569371679567;
    msg.psi = 0.618702818576;
    msg.psi_magnetic = 0.000674311238192;

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
    msg.setTimeStamp(0.571391200923);
    msg.setSource(32598U);
    msg.setSourceEntity(220U);
    msg.setDestination(45007U);
    msg.setDestinationEntity(43U);
    msg.time = 0.0228855031983;
    msg.phi = 0.422268787128;
    msg.theta = 0.977900203446;
    msg.psi = 0.858247611639;
    msg.psi_magnetic = 0.73456856553;

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
    msg.setTimeStamp(0.467994202798);
    msg.setSource(35210U);
    msg.setSourceEntity(188U);
    msg.setDestination(478U);
    msg.setDestinationEntity(142U);
    msg.time = 0.817088721682;
    msg.phi = 0.394411970855;
    msg.theta = 0.251392051304;
    msg.psi = 0.288598963949;
    msg.psi_magnetic = 0.222634271337;

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
    msg.setTimeStamp(0.517914586597);
    msg.setSource(57346U);
    msg.setSourceEntity(72U);
    msg.setDestination(48207U);
    msg.setDestinationEntity(56U);
    msg.time = 0.474139689336;
    msg.x = 0.441731408559;
    msg.y = 0.408831530696;
    msg.z = 0.844003314957;
    msg.timestep = 0.50533744103;

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
    msg.setTimeStamp(0.873756411644);
    msg.setSource(17975U);
    msg.setSourceEntity(217U);
    msg.setDestination(25337U);
    msg.setDestinationEntity(176U);
    msg.time = 0.835953737492;
    msg.x = 0.358573220451;
    msg.y = 0.734409787961;
    msg.z = 0.996447484357;
    msg.timestep = 0.381742885141;

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
    msg.setTimeStamp(0.454441965426);
    msg.setSource(30692U);
    msg.setSourceEntity(188U);
    msg.setDestination(17473U);
    msg.setDestinationEntity(89U);
    msg.time = 0.801640136588;
    msg.x = 0.920305279102;
    msg.y = 0.312429802593;
    msg.z = 0.0902609055224;
    msg.timestep = 0.356429190248;

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
    msg.setTimeStamp(0.530425848754);
    msg.setSource(59330U);
    msg.setSourceEntity(243U);
    msg.setDestination(65429U);
    msg.setDestinationEntity(100U);
    msg.time = 0.582536772765;
    msg.x = 0.286011404985;
    msg.y = 0.535925716255;
    msg.z = 0.879198375044;

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
    msg.setTimeStamp(0.536088809841);
    msg.setSource(33173U);
    msg.setSourceEntity(219U);
    msg.setDestination(42298U);
    msg.setDestinationEntity(210U);
    msg.time = 0.358075224952;
    msg.x = 0.452678805316;
    msg.y = 0.111928970442;
    msg.z = 0.110459781399;

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
    msg.setTimeStamp(0.305180869828);
    msg.setSource(24763U);
    msg.setSourceEntity(20U);
    msg.setDestination(43340U);
    msg.setDestinationEntity(131U);
    msg.time = 0.710033782274;
    msg.x = 0.325244214773;
    msg.y = 0.697167825693;
    msg.z = 0.08067919037;

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
    msg.setTimeStamp(0.386373671845);
    msg.setSource(14511U);
    msg.setSourceEntity(189U);
    msg.setDestination(34624U);
    msg.setDestinationEntity(198U);
    msg.time = 0.12118041259;
    msg.x = 0.454180691677;
    msg.y = 0.262700137586;
    msg.z = 0.208836388299;

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
    msg.setTimeStamp(0.464818369135);
    msg.setSource(60687U);
    msg.setSourceEntity(135U);
    msg.setDestination(24227U);
    msg.setDestinationEntity(83U);
    msg.time = 0.771748511967;
    msg.x = 0.0114101131146;
    msg.y = 0.596053173584;
    msg.z = 0.0116591301723;

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
    msg.setTimeStamp(0.100223992492);
    msg.setSource(39310U);
    msg.setSourceEntity(164U);
    msg.setDestination(32224U);
    msg.setDestinationEntity(116U);
    msg.time = 0.750592183388;
    msg.x = 0.161764418722;
    msg.y = 0.0891301961871;
    msg.z = 0.66470102966;

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
    msg.setTimeStamp(0.361012920405);
    msg.setSource(41207U);
    msg.setSourceEntity(200U);
    msg.setDestination(11837U);
    msg.setDestinationEntity(79U);
    msg.time = 0.0562407838852;
    msg.x = 0.0507310780406;
    msg.y = 0.0681581648654;
    msg.z = 0.220311851037;

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
    msg.setTimeStamp(0.350274845401);
    msg.setSource(47393U);
    msg.setSourceEntity(25U);
    msg.setDestination(5268U);
    msg.setDestinationEntity(75U);
    msg.time = 0.974925452805;
    msg.x = 0.489141632824;
    msg.y = 0.0334622881978;
    msg.z = 0.44460707927;

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
    msg.setTimeStamp(0.165111014641);
    msg.setSource(38519U);
    msg.setSourceEntity(160U);
    msg.setDestination(5203U);
    msg.setDestinationEntity(230U);
    msg.time = 0.573938883467;
    msg.x = 0.514583163384;
    msg.y = 0.366533312472;
    msg.z = 0.980031937121;

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
    msg.setTimeStamp(0.488917641643);
    msg.setSource(23078U);
    msg.setSourceEntity(114U);
    msg.setDestination(2207U);
    msg.setDestinationEntity(34U);
    msg.validity = 202U;
    msg.x = 0.363191472673;
    msg.y = 0.341851778992;
    msg.z = 0.204242701583;

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
    msg.setTimeStamp(0.142463222848);
    msg.setSource(16545U);
    msg.setSourceEntity(64U);
    msg.setDestination(18532U);
    msg.setDestinationEntity(139U);
    msg.validity = 212U;
    msg.x = 0.960084007414;
    msg.y = 0.772773790462;
    msg.z = 0.525344165561;

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
    msg.setTimeStamp(0.888422356168);
    msg.setSource(8719U);
    msg.setSourceEntity(185U);
    msg.setDestination(2005U);
    msg.setDestinationEntity(4U);
    msg.validity = 38U;
    msg.x = 0.0707372773734;
    msg.y = 0.13839301088;
    msg.z = 0.23129225535;

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
    msg.setTimeStamp(0.5616883363);
    msg.setSource(38102U);
    msg.setSourceEntity(209U);
    msg.setDestination(30993U);
    msg.setDestinationEntity(4U);
    msg.validity = 123U;
    msg.x = 0.556569531931;
    msg.y = 0.428062332686;
    msg.z = 0.973595778473;

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
    msg.setTimeStamp(0.930047074997);
    msg.setSource(18662U);
    msg.setSourceEntity(105U);
    msg.setDestination(41784U);
    msg.setDestinationEntity(71U);
    msg.validity = 120U;
    msg.x = 0.563418379731;
    msg.y = 0.445286978223;
    msg.z = 0.744169377713;

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
    msg.setTimeStamp(0.43665179592);
    msg.setSource(39799U);
    msg.setSourceEntity(187U);
    msg.setDestination(991U);
    msg.setDestinationEntity(113U);
    msg.validity = 254U;
    msg.x = 0.896696784058;
    msg.y = 0.986288258866;
    msg.z = 0.0531918366621;

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
    msg.setTimeStamp(0.0100542513455);
    msg.setSource(16840U);
    msg.setSourceEntity(163U);
    msg.setDestination(62774U);
    msg.setDestinationEntity(72U);
    msg.time = 0.697024502364;
    msg.x = 0.361773831773;
    msg.y = 0.340787281136;
    msg.z = 0.925388013233;

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
    msg.setTimeStamp(0.0960042904879);
    msg.setSource(6908U);
    msg.setSourceEntity(174U);
    msg.setDestination(24464U);
    msg.setDestinationEntity(244U);
    msg.time = 0.938774946355;
    msg.x = 0.895414699741;
    msg.y = 0.559740269933;
    msg.z = 0.299889672728;

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
    msg.setTimeStamp(0.348846937653);
    msg.setSource(26669U);
    msg.setSourceEntity(225U);
    msg.setDestination(49450U);
    msg.setDestinationEntity(135U);
    msg.time = 0.0449125830408;
    msg.x = 0.397900760469;
    msg.y = 0.478200904925;
    msg.z = 0.402933502176;

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
    msg.setTimeStamp(0.286584702283);
    msg.setSource(1725U);
    msg.setSourceEntity(252U);
    msg.setDestination(52411U);
    msg.setDestinationEntity(53U);
    msg.validity = 26U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.518831154128;
    tmp_msg_0.beam_height = 0.625750377358;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.127804134682;

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
    msg.setTimeStamp(0.498456231896);
    msg.setSource(27512U);
    msg.setSourceEntity(202U);
    msg.setDestination(48542U);
    msg.setDestinationEntity(101U);
    msg.validity = 28U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.0441584797159;
    tmp_msg_0.y = 0.373338908234;
    tmp_msg_0.z = 0.649220567295;
    tmp_msg_0.phi = 0.45603267378;
    tmp_msg_0.theta = 0.65632536243;
    tmp_msg_0.psi = 0.0845602617178;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.126833497978;

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
    msg.setTimeStamp(0.449798539887);
    msg.setSource(42097U);
    msg.setSourceEntity(204U);
    msg.setDestination(5653U);
    msg.setDestinationEntity(30U);
    msg.validity = 196U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.64923179349;
    tmp_msg_0.y = 0.233179171572;
    tmp_msg_0.z = 0.92901198422;
    tmp_msg_0.phi = 0.954847970583;
    tmp_msg_0.theta = 0.123096582147;
    tmp_msg_0.psi = 0.360468713301;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.919046279395;
    tmp_msg_1.beam_height = 0.118653458821;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.460868688386;

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
    msg.setTimeStamp(0.703741791846);
    msg.setSource(11697U);
    msg.setSourceEntity(204U);
    msg.setDestination(29103U);
    msg.setDestinationEntity(137U);
    msg.value = 0.526135561023;

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
    msg.setTimeStamp(0.120230391774);
    msg.setSource(25664U);
    msg.setSourceEntity(173U);
    msg.setDestination(37103U);
    msg.setDestinationEntity(41U);
    msg.value = 0.777524405896;

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
    msg.setTimeStamp(0.0431648196052);
    msg.setSource(53740U);
    msg.setSourceEntity(189U);
    msg.setDestination(195U);
    msg.setDestinationEntity(94U);
    msg.value = 0.454220290157;

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
    msg.setTimeStamp(0.454589143549);
    msg.setSource(1408U);
    msg.setSourceEntity(143U);
    msg.setDestination(47503U);
    msg.setDestinationEntity(249U);
    msg.value = 0.131073525389;

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
    msg.setTimeStamp(0.94284516999);
    msg.setSource(57946U);
    msg.setSourceEntity(202U);
    msg.setDestination(17677U);
    msg.setDestinationEntity(220U);
    msg.value = 0.0515083870327;

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
    msg.setTimeStamp(0.329845306254);
    msg.setSource(7483U);
    msg.setSourceEntity(139U);
    msg.setDestination(18565U);
    msg.setDestinationEntity(109U);
    msg.value = 0.489950523171;

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
    msg.setTimeStamp(0.0552894166693);
    msg.setSource(58396U);
    msg.setSourceEntity(141U);
    msg.setDestination(9448U);
    msg.setDestinationEntity(127U);
    msg.value = 0.216389450883;

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
    msg.setTimeStamp(0.694488961652);
    msg.setSource(28969U);
    msg.setSourceEntity(234U);
    msg.setDestination(12042U);
    msg.setDestinationEntity(234U);
    msg.value = 0.43046764357;

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
    msg.setTimeStamp(0.220167355518);
    msg.setSource(29825U);
    msg.setSourceEntity(92U);
    msg.setDestination(41551U);
    msg.setDestinationEntity(109U);
    msg.value = 0.909841986988;

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
    msg.setTimeStamp(0.42448223458);
    msg.setSource(31657U);
    msg.setSourceEntity(37U);
    msg.setDestination(19398U);
    msg.setDestinationEntity(48U);
    msg.value = 0.978824460707;

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
    msg.setTimeStamp(0.174201182699);
    msg.setSource(46486U);
    msg.setSourceEntity(117U);
    msg.setDestination(7141U);
    msg.setDestinationEntity(244U);
    msg.value = 0.590488066806;

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
    msg.setTimeStamp(0.0217247396452);
    msg.setSource(30534U);
    msg.setSourceEntity(109U);
    msg.setDestination(25815U);
    msg.setDestinationEntity(99U);
    msg.value = 0.807524889572;

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
    msg.setTimeStamp(0.587596039133);
    msg.setSource(36965U);
    msg.setSourceEntity(115U);
    msg.setDestination(11741U);
    msg.setDestinationEntity(52U);
    msg.value = 0.952267187144;

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
    msg.setTimeStamp(0.157889559488);
    msg.setSource(3493U);
    msg.setSourceEntity(25U);
    msg.setDestination(7422U);
    msg.setDestinationEntity(111U);
    msg.value = 0.0658602538413;

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
    msg.setTimeStamp(0.366650975409);
    msg.setSource(9669U);
    msg.setSourceEntity(202U);
    msg.setDestination(54758U);
    msg.setDestinationEntity(181U);
    msg.value = 0.43166456291;

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
    msg.setTimeStamp(0.420445628655);
    msg.setSource(13057U);
    msg.setSourceEntity(222U);
    msg.setDestination(7049U);
    msg.setDestinationEntity(116U);
    msg.value = 0.930306930173;

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
    msg.setTimeStamp(0.306871960744);
    msg.setSource(37439U);
    msg.setSourceEntity(93U);
    msg.setDestination(54313U);
    msg.setDestinationEntity(131U);
    msg.value = 0.966696954281;

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
    msg.setTimeStamp(0.720026396216);
    msg.setSource(3377U);
    msg.setSourceEntity(21U);
    msg.setDestination(37457U);
    msg.setDestinationEntity(8U);
    msg.value = 0.192073550559;

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
    msg.setTimeStamp(0.765018339993);
    msg.setSource(18828U);
    msg.setSourceEntity(26U);
    msg.setDestination(28113U);
    msg.setDestinationEntity(70U);
    msg.value = 0.857994472129;

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
    msg.setTimeStamp(0.360845431084);
    msg.setSource(27333U);
    msg.setSourceEntity(104U);
    msg.setDestination(32330U);
    msg.setDestinationEntity(6U);
    msg.value = 0.705519246581;

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
    msg.setTimeStamp(0.635196022359);
    msg.setSource(18366U);
    msg.setSourceEntity(247U);
    msg.setDestination(39315U);
    msg.setDestinationEntity(103U);
    msg.value = 0.989910842556;

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
    msg.setTimeStamp(0.704522868923);
    msg.setSource(19301U);
    msg.setSourceEntity(169U);
    msg.setDestination(33226U);
    msg.setDestinationEntity(187U);
    msg.value = 0.54005279904;

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
    msg.setTimeStamp(0.963026382741);
    msg.setSource(1830U);
    msg.setSourceEntity(10U);
    msg.setDestination(27554U);
    msg.setDestinationEntity(153U);
    msg.value = 0.815939987854;

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
    msg.setTimeStamp(0.671256577061);
    msg.setSource(54392U);
    msg.setSourceEntity(45U);
    msg.setDestination(14146U);
    msg.setDestinationEntity(145U);
    msg.value = 0.20094405351;

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
    msg.setTimeStamp(0.81787160938);
    msg.setSource(33546U);
    msg.setSourceEntity(208U);
    msg.setDestination(55156U);
    msg.setDestinationEntity(252U);
    msg.direction = 0.435399728195;
    msg.speed = 0.964823646465;
    msg.turbulence = 0.0357576649904;

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
    msg.setTimeStamp(0.0176484232824);
    msg.setSource(64087U);
    msg.setSourceEntity(87U);
    msg.setDestination(32173U);
    msg.setDestinationEntity(181U);
    msg.direction = 0.168368780556;
    msg.speed = 0.875933802333;
    msg.turbulence = 0.0692246846365;

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
    msg.setTimeStamp(0.964362722388);
    msg.setSource(35101U);
    msg.setSourceEntity(96U);
    msg.setDestination(49490U);
    msg.setDestinationEntity(130U);
    msg.direction = 0.571722670363;
    msg.speed = 0.632190982819;
    msg.turbulence = 0.450331402657;

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
    msg.setTimeStamp(0.172211771314);
    msg.setSource(53583U);
    msg.setSourceEntity(34U);
    msg.setDestination(25489U);
    msg.setDestinationEntity(33U);
    msg.value = 0.297010743875;

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
    msg.setTimeStamp(0.791142342873);
    msg.setSource(40687U);
    msg.setSourceEntity(168U);
    msg.setDestination(12477U);
    msg.setDestinationEntity(154U);
    msg.value = 0.832701436282;

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
    msg.setTimeStamp(0.638912206083);
    msg.setSource(5051U);
    msg.setSourceEntity(183U);
    msg.setDestination(44807U);
    msg.setDestinationEntity(149U);
    msg.value = 0.502248624764;

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
    msg.setTimeStamp(0.86619439112);
    msg.setSource(45118U);
    msg.setSourceEntity(159U);
    msg.setDestination(60976U);
    msg.setDestinationEntity(233U);
    msg.value.assign("IPVASNOVLGWCACFEZFPDUTRKMTEJLEQHCQAITITX");

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
    msg.setTimeStamp(0.776626909152);
    msg.setSource(18831U);
    msg.setSourceEntity(227U);
    msg.setDestination(29700U);
    msg.setDestinationEntity(76U);
    msg.value.assign("TYOMFIGNPFCPLTNYUKXSYLTWTJRRQBWYDULHBMNYFPD");

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
    msg.setTimeStamp(0.639518874066);
    msg.setSource(13323U);
    msg.setSourceEntity(77U);
    msg.setDestination(12584U);
    msg.setDestinationEntity(218U);
    msg.value.assign("BZDXRJNFEYRGUWTGROHAUWEGWRICQMW");

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
    msg.setTimeStamp(0.580780474539);
    msg.setSource(58622U);
    msg.setSourceEntity(223U);
    msg.setDestination(58761U);
    msg.setDestinationEntity(161U);
    const char tmp_msg_0[] = {13, 122, -87, 40, 89, -44, -40, -91, 36, 68, -33, 28, 120, -65, 15, 45, -109, 126, 121, 36, -55, 111, -21, -97, 51, -44, -94, -4, 53, 79, -76, 66, 59, 119, -14, -7, 32, -44, -49, -115, 56, 40, -125, -72, -56, 123, -35, 52, -75, -82, 54, -84, 50, -23, -60, 97, 0, -76, 17, -62, -28, 11, 55, 32, 119, -17, -54, -32, -54, -82, -104, 100, -78, -103, -41, -115, 73, -51, -77, 62, 119, -26, -54, 59, 53, 30, -12, -104, -23, 85, 105, -9, -63, 97, -23, -106, 101, -73, 30, -67, 71, -43, 52, 28, -73, 36, -115, -79, 77, 98, 3, -87, -38, -39, -50, 87, 94, 121, -106, -86, -72, 29, 115, 116, 120, -123, -50, 40, -101, -79, 68, 91, 89, 98, 68, -74, 74, -125, -25, -69, 9, 7, -46, -7, -106, 27, 75, 50, -100};
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
    msg.setTimeStamp(0.903892508457);
    msg.setSource(9129U);
    msg.setSourceEntity(220U);
    msg.setDestination(23304U);
    msg.setDestinationEntity(124U);
    const char tmp_msg_0[] = {80, -71, -95, 18, 38, 65, -87, -59, -52, -31, -62, -124, 43, 5, -50, -80, 68, 98, -10, -14, 117, 72, -98, 84, 124, -39, 67, 7, -19, -87, 84, 17, -88, -12, 98, -3, 27, -83, 23, -40, -6, -25, -11, -75, 52, 115, -34, 93, -121, -104, -2, 117, 120, 55, -124, 13, -20, 44, 76, -40, 0, -24, 11, -97, 81, -53, -54, -82, 47, -40, 80, 45, -59, -10, 100, 73, 40, -20, -122, -78, 80, -12, -75, -18, 64, 119, 104, -9, 79, -118, -19, -36, 85, 16, -102, 65, 120, 114, 89, -70, -67, 5, 12, -50, 91, -86, 3, 56, -105, -116, -15, -113, -77, 38, -43, 90, -89, -113, -103, 90, -113, 105, 121, 60, 124, 95, 123, 23};
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
    msg.setTimeStamp(0.110067446398);
    msg.setSource(25623U);
    msg.setSourceEntity(150U);
    msg.setDestination(20390U);
    msg.setDestinationEntity(249U);
    const char tmp_msg_0[] = {-46, -115, -29, -30, 67, -66, 67, 124, -27, 48, -112, 8, -116, -119, 57, 109, 62, -64, 61, 73, -81, -116, 77, 68, -3, 12, 92, -27, -89, 97, 102, -31, -22, -100, -1, -7, -37, 16, 26, 59, 50, -94, -103, -66, 35, 84, 54, -57, -13, -122, -28, -84, -112, 31, 69, -80, 9, 71, 98, -4, -74, -30, -14, 26, -91, 71, -127, -39, 21, 12, 67, 61, 27, -115, -27, 56, 78, -23, -29, -8, -63, 68, 115, 75, 111, 95, -83, -97, -19, 123, -82, 106, 34, 23, 59, 117, -101, 46, -102};
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
    msg.setTimeStamp(0.286572916972);
    msg.setSource(21116U);
    msg.setSourceEntity(57U);
    msg.setDestination(32774U);
    msg.setDestinationEntity(220U);
    msg.frequency = 4250837382U;
    msg.min_range = 49338U;
    msg.max_range = 43495U;

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
    msg.setTimeStamp(0.315830577359);
    msg.setSource(3614U);
    msg.setSourceEntity(17U);
    msg.setDestination(11543U);
    msg.setDestinationEntity(229U);
    msg.frequency = 2728731424U;
    msg.min_range = 17755U;
    msg.max_range = 22909U;

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
    msg.setTimeStamp(0.583259484444);
    msg.setSource(8285U);
    msg.setSourceEntity(80U);
    msg.setDestination(48479U);
    msg.setDestinationEntity(15U);
    msg.frequency = 1982600860U;
    msg.min_range = 15989U;
    msg.max_range = 53338U;

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
    msg.setTimeStamp(0.114162354364);
    msg.setSource(57093U);
    msg.setSourceEntity(104U);
    msg.setDestination(26258U);
    msg.setDestinationEntity(151U);
    msg.type = 250U;
    msg.frequency = 2382120081U;
    msg.min_range = 45965U;
    msg.max_range = 49712U;
    msg.bits_per_point = 117U;
    msg.scale_factor = 0.968053193085;
    const char tmp_msg_0[] = {-73, 109, -78, -42, 116, -29, 94, -125, -4, -108, -109, -7, -70, -125, 24, 89, 92, 72, -121, 79, -88, -52, -111, 9, -78, 72, 38, 85, -115, -37, 86, -15, -58, 4, 50, -112};
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
    msg.setTimeStamp(0.599966530642);
    msg.setSource(11659U);
    msg.setSourceEntity(117U);
    msg.setDestination(31620U);
    msg.setDestinationEntity(142U);
    msg.type = 6U;
    msg.frequency = 529708637U;
    msg.min_range = 54247U;
    msg.max_range = 40494U;
    msg.bits_per_point = 193U;
    msg.scale_factor = 0.0225094244681;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.5152996104;
    tmp_msg_0.beam_height = 0.239379354734;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-52, -49, -88, 26, 108, 58, -11, 56, -118, 72, 36, -12, -109, -19, 61, 41, 101, 6, 109, 94, -94, 61, -89, -96, 110, -61, 77, 78, -45, -30, 8, -54, -55, 85, -93, -45, 110, -95, -80, -38, -46, -102, -122, 8, -102, -116, 109, -82, 54, 71, 44, 93, 20, -69, 53, -88, 76, -90, 29, -48, 105, -42, -95, 73, 28, 96, -23, 122, 122, 105, -32, -124, -51, -33, -30, -27, 61, 122, -69, -109, 26, -88, 58, 76, 59, -66, -112, 42, -23, -93, -31, -75, -29, -61, 36, 10, 14, 73, -97, 85, -81, 82, -113, -35, 65, -122, -62, 52, 93, 55, -79, 83, 112, 3, 63, -34, 87, -37, 99, -65, 54, -64, 56, -6, 80, -86, 53, -91, 59, -87, 126, 12, -82, 49, 4, -100, -8, -25, -118, -53, -120, 108, 4, -84, 31, -36, -121, 35, -14, 25, -45, 117, 46, 74, 108, -56, 15, 58, -112, 46, -125, -92, -84, 112, 26, -79, -85, 63, 24, -31, -47, -7, 33, -18, -63, -34, 100, -21, 59, 104, 87, -114, 117, 18, 49, -5, -71, 57, 31, 46, 81, -31, 67, -88, -116, -29, -64, 99, 66, 19, -25, 7, 23, 18, 66, 51, 25, 89, 48, 14, -36, 20, 10, -63, -99, 113, -125, 20, -67, -107, -5, 119};
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
    msg.setTimeStamp(0.744661987432);
    msg.setSource(22706U);
    msg.setSourceEntity(188U);
    msg.setDestination(9286U);
    msg.setDestinationEntity(15U);
    msg.type = 79U;
    msg.frequency = 798479277U;
    msg.min_range = 21482U;
    msg.max_range = 10995U;
    msg.bits_per_point = 69U;
    msg.scale_factor = 0.0733489438345;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.264996548292;
    tmp_msg_0.beam_height = 0.415364360234;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-12, 1, -48, 5, 117, -127, -75, 2, -118, 26, -42, 6, -34, -87, -106, -108, -111, -65, -26, 106, -106, 98, 80, 66, -33, -10, -110, -29, 64, -62, 24, -105, 39, 1, -94, -116, -77, -126, -79, 26, 89, 70, -109, 81, 44, 20, 96, 10, -81, 48, -73, -111, 29, -98, 69, -59, 36, 109, -20, 19, -50, 71, -92, 23, -55, -79, -7, 104, -10, 30, 76, 66, -79, -7, -62, -82, -56, 85, -10, 17, 17, -128, 44, 68, 85, 121, 103, -108, 81, -77, -52, -107, -93, -94, -87, -65, -103, -59, 16, -29, 9, -10, -10, -92, 115, 50, -112, -113, -66, 38, -8, 0, 26, -81, 113, 114, 112, 74, 69, -126, 28, -24, -62, -45, -1, 60, -67, 75, 69, 101, 93, -13, 90, 80, 60, 54, -115, -23, 120, -31, 28, -24, 87, 4, 98, 10, 35, 122, 23, 105, 47, -119, 29, -56, -63, 28, -97, -80, -71, 87, 23, -104, -22, 100, 85, -13, -95, 107, 107, -17, -47, -69, 4, 77, 84, -27, 25, 15, -40, -14, -42, -44, 9, 55, 1, 86, -83, 27, 47};
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
    msg.setTimeStamp(0.238902267507);
    msg.setSource(35531U);
    msg.setSourceEntity(42U);
    msg.setDestination(29628U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.0426710335758);
    msg.setSource(18846U);
    msg.setSourceEntity(34U);
    msg.setDestination(38204U);
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
    msg.setTimeStamp(0.540533364468);
    msg.setSource(34755U);
    msg.setSourceEntity(196U);
    msg.setDestination(39160U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.752348556601);
    msg.setSource(23046U);
    msg.setSourceEntity(234U);
    msg.setDestination(21527U);
    msg.setDestinationEntity(99U);
    msg.op = 228U;

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
    msg.setTimeStamp(0.533996853008);
    msg.setSource(24847U);
    msg.setSourceEntity(146U);
    msg.setDestination(30667U);
    msg.setDestinationEntity(155U);
    msg.op = 87U;

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
    msg.setTimeStamp(0.703915755643);
    msg.setSource(21940U);
    msg.setSourceEntity(102U);
    msg.setDestination(17862U);
    msg.setDestinationEntity(232U);
    msg.op = 32U;

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
    msg.setTimeStamp(0.134798418358);
    msg.setSource(2977U);
    msg.setSourceEntity(166U);
    msg.setDestination(60032U);
    msg.setDestinationEntity(198U);
    msg.value = 0.487208062437;
    msg.confidence = 0.0997058370607;
    msg.opmodes.assign("BFXRMKARAYXXWTUDSIFMFDAYKHLMUGPZFFYYASJJQHWRNCKHXVCBNDPMLWLMVJWBCKKEFWHDFDEPQIKCRBUGDSCDGPNXBSNIUYNVDDALFYCOIJLCUOWSTTNZKSTEQNSNHQXIPTEGKFJVCJVHQAMYLSNVRHQYJERHKIOWQOXUIAZOLTCETMRRVPOZIUWEPZVURLONPBZCGPGTMBLIAULVGRQHGAVEXTUJJEKFGJ");

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
    msg.setTimeStamp(0.759438070572);
    msg.setSource(46302U);
    msg.setSourceEntity(71U);
    msg.setDestination(62812U);
    msg.setDestinationEntity(146U);
    msg.value = 0.0696289027822;
    msg.confidence = 0.39034276223;
    msg.opmodes.assign("XOPWLVZHNVLHQMMUHIMEGYRC");

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
    msg.setTimeStamp(0.223687067294);
    msg.setSource(29735U);
    msg.setSourceEntity(254U);
    msg.setDestination(64368U);
    msg.setDestinationEntity(92U);
    msg.value = 0.582224018704;
    msg.confidence = 0.990766326645;
    msg.opmodes.assign("DKWZGILQYESO");

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
    msg.setTimeStamp(0.66722290539);
    msg.setSource(40976U);
    msg.setSourceEntity(180U);
    msg.setDestination(58105U);
    msg.setDestinationEntity(118U);
    msg.itow = 3183647350U;
    msg.lat = 0.459682334779;
    msg.lon = 0.0965069093814;
    msg.height_ell = 0.998506015969;
    msg.height_sea = 0.24543304549;
    msg.hacc = 0.874678369489;
    msg.vacc = 0.661234603127;
    msg.vel_n = 0.909209179346;
    msg.vel_e = 0.97829306737;
    msg.vel_d = 0.199067385601;
    msg.speed = 0.177277923165;
    msg.gspeed = 0.426876584318;
    msg.heading = 0.187568863125;
    msg.sacc = 0.372120233789;
    msg.cacc = 0.988337676462;

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
    msg.setTimeStamp(0.827536632981);
    msg.setSource(8717U);
    msg.setSourceEntity(3U);
    msg.setDestination(13296U);
    msg.setDestinationEntity(52U);
    msg.itow = 846337561U;
    msg.lat = 0.0176046721088;
    msg.lon = 0.721555158024;
    msg.height_ell = 0.368799384882;
    msg.height_sea = 0.539384086538;
    msg.hacc = 0.642881953921;
    msg.vacc = 0.588916606261;
    msg.vel_n = 0.446268248955;
    msg.vel_e = 0.763056607122;
    msg.vel_d = 0.378282179154;
    msg.speed = 0.0295326348286;
    msg.gspeed = 0.272536006194;
    msg.heading = 0.172724454737;
    msg.sacc = 0.201819004132;
    msg.cacc = 0.130558387939;

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
    msg.setTimeStamp(0.222955453175);
    msg.setSource(51371U);
    msg.setSourceEntity(147U);
    msg.setDestination(22849U);
    msg.setDestinationEntity(130U);
    msg.itow = 3614157201U;
    msg.lat = 0.750185330998;
    msg.lon = 0.0574729448703;
    msg.height_ell = 0.229901250821;
    msg.height_sea = 0.372011774767;
    msg.hacc = 0.0360373921102;
    msg.vacc = 0.262380266184;
    msg.vel_n = 0.531219390343;
    msg.vel_e = 0.657145112584;
    msg.vel_d = 0.370356364093;
    msg.speed = 0.0882325191936;
    msg.gspeed = 0.229705754977;
    msg.heading = 0.559777713571;
    msg.sacc = 0.838051189584;
    msg.cacc = 0.261330958791;

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
    msg.setTimeStamp(0.888876191894);
    msg.setSource(59443U);
    msg.setSourceEntity(125U);
    msg.setDestination(53662U);
    msg.setDestinationEntity(136U);
    msg.id = 130U;
    msg.value = 0.354425290734;

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
    msg.setTimeStamp(0.492369236161);
    msg.setSource(11570U);
    msg.setSourceEntity(101U);
    msg.setDestination(65037U);
    msg.setDestinationEntity(143U);
    msg.id = 152U;
    msg.value = 0.145961159451;

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
    msg.setTimeStamp(0.383951778839);
    msg.setSource(8053U);
    msg.setSourceEntity(24U);
    msg.setDestination(59156U);
    msg.setDestinationEntity(249U);
    msg.id = 210U;
    msg.value = 0.37173214663;

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
    msg.setTimeStamp(0.362574563773);
    msg.setSource(8323U);
    msg.setSourceEntity(120U);
    msg.setDestination(2943U);
    msg.setDestinationEntity(103U);
    msg.x = 0.0362877295196;
    msg.y = 0.193501079701;
    msg.z = 0.946312063418;
    msg.phi = 0.439849458799;
    msg.theta = 0.739139201378;
    msg.psi = 0.116110407944;

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
    msg.setTimeStamp(0.387159241511);
    msg.setSource(11490U);
    msg.setSourceEntity(200U);
    msg.setDestination(64492U);
    msg.setDestinationEntity(251U);
    msg.x = 0.0280217566182;
    msg.y = 0.504799817588;
    msg.z = 0.170635812423;
    msg.phi = 0.740643421202;
    msg.theta = 0.414466585671;
    msg.psi = 0.850704607344;

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
    msg.setTimeStamp(0.670516794749);
    msg.setSource(1943U);
    msg.setSourceEntity(57U);
    msg.setDestination(45491U);
    msg.setDestinationEntity(172U);
    msg.x = 0.915252659177;
    msg.y = 0.137538318058;
    msg.z = 0.309064361659;
    msg.phi = 0.0502617173628;
    msg.theta = 0.676276983428;
    msg.psi = 0.0647721781977;

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
    msg.setTimeStamp(0.05917634605);
    msg.setSource(58630U);
    msg.setSourceEntity(179U);
    msg.setDestination(54513U);
    msg.setDestinationEntity(29U);
    msg.beam_width = 0.61072860248;
    msg.beam_height = 0.621581937911;

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
    msg.setTimeStamp(0.693593944531);
    msg.setSource(53597U);
    msg.setSourceEntity(6U);
    msg.setDestination(59289U);
    msg.setDestinationEntity(158U);
    msg.beam_width = 0.468410877861;
    msg.beam_height = 0.511145197022;

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
    msg.setTimeStamp(0.487897843291);
    msg.setSource(43958U);
    msg.setSourceEntity(100U);
    msg.setDestination(55360U);
    msg.setDestinationEntity(136U);
    msg.beam_width = 0.0727128980746;
    msg.beam_height = 0.857692234067;

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
    msg.setTimeStamp(0.388112236694);
    msg.setSource(13332U);
    msg.setSourceEntity(152U);
    msg.setDestination(60734U);
    msg.setDestinationEntity(129U);
    msg.sane = 67U;

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
    msg.setTimeStamp(0.373564619068);
    msg.setSource(38019U);
    msg.setSourceEntity(117U);
    msg.setDestination(42148U);
    msg.setDestinationEntity(47U);
    msg.sane = 91U;

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
    msg.setTimeStamp(0.0917605819764);
    msg.setSource(6067U);
    msg.setSourceEntity(227U);
    msg.setDestination(21516U);
    msg.setDestinationEntity(0U);
    msg.sane = 44U;

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
    msg.setTimeStamp(0.522218763766);
    msg.setSource(61767U);
    msg.setSourceEntity(8U);
    msg.setDestination(61766U);
    msg.setDestinationEntity(58U);
    msg.id = 3U;
    msg.zoom = 128U;
    msg.action = 126U;

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
    msg.setTimeStamp(0.418655943579);
    msg.setSource(32009U);
    msg.setSourceEntity(154U);
    msg.setDestination(43250U);
    msg.setDestinationEntity(9U);
    msg.id = 36U;
    msg.zoom = 174U;
    msg.action = 28U;

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
    msg.setTimeStamp(0.723090065033);
    msg.setSource(58787U);
    msg.setSourceEntity(6U);
    msg.setDestination(17664U);
    msg.setDestinationEntity(17U);
    msg.id = 148U;
    msg.zoom = 81U;
    msg.action = 216U;

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
    msg.setTimeStamp(0.385000774709);
    msg.setSource(46049U);
    msg.setSourceEntity(206U);
    msg.setDestination(51566U);
    msg.setDestinationEntity(154U);
    msg.id = 245U;
    msg.value = 0.436936749115;

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
    msg.setTimeStamp(0.0838331566179);
    msg.setSource(49831U);
    msg.setSourceEntity(193U);
    msg.setDestination(26709U);
    msg.setDestinationEntity(126U);
    msg.id = 242U;
    msg.value = 0.42300552756;

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
    msg.setTimeStamp(0.823351601044);
    msg.setSource(18582U);
    msg.setSourceEntity(103U);
    msg.setDestination(43895U);
    msg.setDestinationEntity(169U);
    msg.id = 175U;
    msg.value = 0.570316302077;

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
    msg.setTimeStamp(0.216322753104);
    msg.setSource(11757U);
    msg.setSourceEntity(115U);
    msg.setDestination(204U);
    msg.setDestinationEntity(144U);
    msg.id = 249U;
    msg.value = 0.746741933274;

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
    msg.setTimeStamp(0.0154627359376);
    msg.setSource(33131U);
    msg.setSourceEntity(199U);
    msg.setDestination(39899U);
    msg.setDestinationEntity(131U);
    msg.id = 84U;
    msg.value = 0.839188540317;

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
    msg.setTimeStamp(0.385991570763);
    msg.setSource(13357U);
    msg.setSourceEntity(204U);
    msg.setDestination(1600U);
    msg.setDestinationEntity(31U);
    msg.id = 37U;
    msg.value = 0.342869607907;

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
    msg.setTimeStamp(0.881777645885);
    msg.setSource(52304U);
    msg.setSourceEntity(211U);
    msg.setDestination(59570U);
    msg.setDestinationEntity(191U);
    msg.id = 15U;
    msg.angle = 0.0753453138633;

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
    msg.setTimeStamp(0.0902991252867);
    msg.setSource(15802U);
    msg.setSourceEntity(34U);
    msg.setDestination(9265U);
    msg.setDestinationEntity(189U);
    msg.id = 31U;
    msg.angle = 0.752980338924;

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
    msg.setTimeStamp(0.568373737198);
    msg.setSource(65105U);
    msg.setSourceEntity(166U);
    msg.setDestination(50583U);
    msg.setDestinationEntity(72U);
    msg.id = 146U;
    msg.angle = 0.151657120876;

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
    msg.setTimeStamp(0.343025409332);
    msg.setSource(57660U);
    msg.setSourceEntity(115U);
    msg.setDestination(36644U);
    msg.setDestinationEntity(90U);
    msg.op = 245U;
    msg.actions.assign("YNYXTRIGZWRJHGNHEIYGKXPZTWJKADAARJLYXSYFOJWUKFUFKQMKQXSNEODLEAVEDWFCPVBMINRPWEKVTZQRXHMCGXFVTBL");

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
    msg.setTimeStamp(0.816516786194);
    msg.setSource(49275U);
    msg.setSourceEntity(11U);
    msg.setDestination(43234U);
    msg.setDestinationEntity(185U);
    msg.op = 25U;
    msg.actions.assign("TFQADZSTBSLIJWUKIAHDGNODTGGICPRVXJRUCSULPSMWQLWABGDMLKAMRHBJNPUBQVNVIOKIGMPEIJZIKBPYZAMZQNGUYGRXOTPWKYALGWTJITYTHDQOANFXEWBYNUYAV");

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
    msg.setTimeStamp(0.935927649814);
    msg.setSource(18948U);
    msg.setSourceEntity(120U);
    msg.setDestination(29385U);
    msg.setDestinationEntity(40U);
    msg.op = 59U;
    msg.actions.assign("GJPZFUSIZQJUIWNHVPJXBHZNHIKFVYSZQSGFCTAOHDBPCZWQGMNLQXSYFKPVSMKQIZXIIOYXEWUYKLVCFHWRFVXDBFAQPPBCUKWWRRZEEFATBSNCINANLULZMWPBRROYLLCGKBTOJMTHSW");

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
    msg.setTimeStamp(0.169702324391);
    msg.setSource(41692U);
    msg.setSourceEntity(225U);
    msg.setDestination(50258U);
    msg.setDestinationEntity(105U);
    msg.actions.assign("CTAWNYMJDTFEIXQTSVHARJEVRIMYANBGJFIYYAWOPQCEQWGPJSHENIUAMHHOUWJBXNJZSFROVTDTXRWPHFGEKXDSPLSOAQEBCFPVBPNOVIAMQADO");

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
    msg.setTimeStamp(0.732191703825);
    msg.setSource(56006U);
    msg.setSourceEntity(190U);
    msg.setDestination(44865U);
    msg.setDestinationEntity(98U);
    msg.actions.assign("PTMFYLPGBDJTSEOKWFJTVEUELJFPTSFFXBMQIMJMQHQKOMNLCCRAICMDNZKCHRXBSHSTYVUEXDMGOZARBRKRJJJTUIZYCZIWGAXOIQKYAMYHVUVBLQWJCLMSUHXIGWBJSOYOLUHKFDBVQNYECKFCPIUANEO");

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
    msg.setTimeStamp(0.873340192834);
    msg.setSource(46282U);
    msg.setSourceEntity(148U);
    msg.setDestination(36945U);
    msg.setDestinationEntity(196U);
    msg.actions.assign("RSQBDWUUOHNCKEYSZWJTSPBEZWXXHCNRKDNBRRHOMBMZQQBLTLESOSTHYFKOHTAPHTLQFLANGXVYQKJXZQJUUODDBNKXQOCDPYTSYYVLZMMCCOIVZJPAFEHMKZZILEPWGBIXUEAJJGROBDVIUYPJLYJXLDUGFRPPBTRPUBEVDXOIHZITSIVKAF");

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
    msg.setTimeStamp(0.411886375962);
    msg.setSource(50464U);
    msg.setSourceEntity(154U);
    msg.setDestination(65217U);
    msg.setDestinationEntity(134U);
    msg.button = 191U;
    msg.value = 253U;

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
    msg.setTimeStamp(0.692757125358);
    msg.setSource(32332U);
    msg.setSourceEntity(217U);
    msg.setDestination(18695U);
    msg.setDestinationEntity(93U);
    msg.button = 85U;
    msg.value = 197U;

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
    msg.setTimeStamp(0.520148997476);
    msg.setSource(4826U);
    msg.setSourceEntity(212U);
    msg.setDestination(61256U);
    msg.setDestinationEntity(183U);
    msg.button = 46U;
    msg.value = 18U;

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
    msg.setTimeStamp(0.0669741180217);
    msg.setSource(15560U);
    msg.setSourceEntity(89U);
    msg.setDestination(21958U);
    msg.setDestinationEntity(115U);
    msg.op = 92U;
    msg.text.assign("PGBOSZDYCISYKYOHQGBUZANCIKJNSRJFLPTHOLSFLNVMPAGADWJ");

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
    msg.setTimeStamp(0.0610834986739);
    msg.setSource(57064U);
    msg.setSourceEntity(85U);
    msg.setDestination(26916U);
    msg.setDestinationEntity(169U);
    msg.op = 237U;
    msg.text.assign("EWKYHZPVROPLTQAKWZ");

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
    msg.setTimeStamp(0.193248603323);
    msg.setSource(8707U);
    msg.setSourceEntity(230U);
    msg.setDestination(25586U);
    msg.setDestinationEntity(183U);
    msg.op = 190U;
    msg.text.assign("VLHXPXSIRIXSPKMULTWAFGTSMETRDBCJXFCHPJPWHRWAU");

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
    msg.setTimeStamp(0.169696075293);
    msg.setSource(5188U);
    msg.setSourceEntity(66U);
    msg.setDestination(1214U);
    msg.setDestinationEntity(107U);
    msg.op = 172U;
    msg.time_remain = 0.488646022664;
    msg.sched_time = 0.305549034979;

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
    msg.setTimeStamp(0.551002171391);
    msg.setSource(65246U);
    msg.setSourceEntity(221U);
    msg.setDestination(53932U);
    msg.setDestinationEntity(181U);
    msg.op = 14U;
    msg.time_remain = 0.214114333797;
    msg.sched_time = 0.337196832412;

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
    msg.setTimeStamp(0.185911118893);
    msg.setSource(44045U);
    msg.setSourceEntity(98U);
    msg.setDestination(39413U);
    msg.setDestinationEntity(15U);
    msg.op = 253U;
    msg.time_remain = 0.753943300035;
    msg.sched_time = 0.281030697807;

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
    msg.setTimeStamp(0.0633013329943);
    msg.setSource(42486U);
    msg.setSourceEntity(231U);
    msg.setDestination(29446U);
    msg.setDestinationEntity(2U);
    msg.name.assign("MMFOJCQNMCWHCOEORDKCCZRGOLZEFBIXEDIIYCSVNSPOUJWXGKVUMUIBDTVOEHUDJAWJSQIGPCQWFTDU");
    msg.op = 219U;
    msg.sched_time = 0.292769362767;

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
    msg.setTimeStamp(0.545213848734);
    msg.setSource(2709U);
    msg.setSourceEntity(158U);
    msg.setDestination(19806U);
    msg.setDestinationEntity(21U);
    msg.name.assign("MMZIADTUALHQXNXLVFEZMAGBBMNDHPLWJWXCVJKUCDELLBHHUWIVKHYUAYLWAHSJXLAQMTCMJRQOPZKIF");
    msg.op = 144U;
    msg.sched_time = 0.643438673364;

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
    msg.setTimeStamp(0.776908604528);
    msg.setSource(50749U);
    msg.setSourceEntity(244U);
    msg.setDestination(48642U);
    msg.setDestinationEntity(28U);
    msg.name.assign("JQNLGNBCRJTTOMBNJLMCYLSVSZQPUYBQRNFWASZZBAKEEKXQZBODDPTTLANKNWKPXXHRSSOBPYGRMJGRMEJDFLBXYGDESGDDIIHQTTGVJPEDVZVXYYMRRHWMUHWHERNPIEXFIXQCSFIRJTKOSAZYNOUWCLYTIJHBBZQLNZDUWVGQLFCHIXJWPOKRGGHA");
    msg.op = 48U;
    msg.sched_time = 0.0804568444378;

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
    msg.setTimeStamp(0.477888545733);
    msg.setSource(3248U);
    msg.setSourceEntity(130U);
    msg.setDestination(19950U);
    msg.setDestinationEntity(162U);

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
    msg.setTimeStamp(0.88327376051);
    msg.setSource(26780U);
    msg.setSourceEntity(145U);
    msg.setDestination(39775U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.191089089711);
    msg.setSource(12053U);
    msg.setSourceEntity(210U);
    msg.setDestination(10844U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.499853475716);
    msg.setSource(8462U);
    msg.setSourceEntity(181U);
    msg.setDestination(65093U);
    msg.setDestinationEntity(25U);
    msg.name.assign("KUSBROBMTBDZFCHZUOWUYHTJYMDHUOXFJCWYZEEWMMLNCNHAVTKNDVOHXMQLSQJWGOFRZQVHHJIQILXSSZQBAPXGFDGESRYEVRCLNTDRVFKVIIPWNFBDAKPKXCDGLSTELGACFJAFPWEGIGOXJAECTLDYJSOPINMVNLWBCTKZUZQJNTWYOCBXRALZWBMKFYZVNQIPKQUYTRAVDDBQVMZRKPGUJAMRYHOKCSSHBTIPGFUXJEILPXUPQA");
    msg.state = 6U;

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
    msg.setTimeStamp(0.690319569413);
    msg.setSource(37046U);
    msg.setSourceEntity(120U);
    msg.setDestination(16392U);
    msg.setDestinationEntity(50U);
    msg.name.assign("RDOEOYLHQBCXUEIBBOAKMEFCVHXTVXXDPQBSUNHETZUZAAMIBRILSXECREPSBNJSDDHFHADYCPGUJNAKCFUYQZKDMJUSIWCGLMKQANWHNQBECJAXYKYQSILTVGIWFKKHDSIGTOPNJAKGFWGYVMYDLLEPKGNSCUBRIWFBWOYGPRGLKSZWJQCXMREQURVVQAYJNREHTZPQMOZWXLZWXJDLFOYHFZMCWILTTZGNVTTPBPRNV");
    msg.state = 169U;

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
    msg.setTimeStamp(0.528341851647);
    msg.setSource(60474U);
    msg.setSourceEntity(86U);
    msg.setDestination(24515U);
    msg.setDestinationEntity(221U);
    msg.name.assign("OYENMUPTPQIYONLPNDXLOTQBUWAALFXZQLRKWOBJVBI");
    msg.state = 83U;

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
    msg.setTimeStamp(0.74003515245);
    msg.setSource(36308U);
    msg.setSourceEntity(157U);
    msg.setDestination(46982U);
    msg.setDestinationEntity(41U);
    msg.name.assign("CRVNFEOPAHPDJKTYNRGWUS");
    msg.value = 132U;

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
    msg.setTimeStamp(0.221843783281);
    msg.setSource(45712U);
    msg.setSourceEntity(187U);
    msg.setDestination(1480U);
    msg.setDestinationEntity(96U);
    msg.name.assign("TUASAQAYXDJIKSBOXQZTSWMFWANCTCXBLCRIFICGBAWHKATJFZKPESY");
    msg.value = 247U;

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
    msg.setTimeStamp(0.203131733596);
    msg.setSource(50931U);
    msg.setSourceEntity(63U);
    msg.setDestination(54528U);
    msg.setDestinationEntity(66U);
    msg.name.assign("ZHFQGQJODBOMKKPLWFXTEYGUJXDLSVDOALEFZGKUIVXRQCWRTZQWHCMROLFMIODXAOEUIQAUKKHJYFLUYVRMOJUEZAPGYVZOHIQYMNCHDCLHFESTVARKISFWNNBBGPTNCTGZWNHVNJWXOMPQWAYUMAFUAIDJESJRSSYBTLKHCXMZGNREWGTUIPRNADBLEZCTVRACHMKBLWEXWFYSBFBIMPXTIBSDHSVQ");
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
    msg.setTimeStamp(0.993211275325);
    msg.setSource(64790U);
    msg.setSourceEntity(53U);
    msg.setDestination(3645U);
    msg.setDestinationEntity(253U);
    msg.name.assign("LJQCQWNUNPZVGLQTXBFIZGBHXITWTFMYWADMYWDFSEHBZNPYQYTSUSORFBEZFGVLAFKCVRKDOIGTEIZWJMKKHQJRKNJSHEJKORXYMSONQVBORWXPCAPPUIJJONRNPFPMEVHGONYDZZUMBCRGGXICOUVBFYKJLGPQHCUSNUZSRBLDYTHVUTQVYWZKWGSYUAEALXVRMWKCKEODAXHEWMACLFIOLIMRXLESADXQ");

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
    msg.setTimeStamp(0.873610227811);
    msg.setSource(4762U);
    msg.setSourceEntity(47U);
    msg.setDestination(58723U);
    msg.setDestinationEntity(129U);
    msg.name.assign("DAFSWPQZRBGVKLJMAMONECQWENYTGWUJHXSZFYHNYZTTCFTBDWAJJGPEJVHMCXFOXYEUFUIZIEGSBWZV");

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
    msg.setTimeStamp(0.0181821500309);
    msg.setSource(8703U);
    msg.setSourceEntity(181U);
    msg.setDestination(40853U);
    msg.setDestinationEntity(6U);
    msg.name.assign("BHAGSKMJCBJMJGRUBFKWAWIKWPXXRCHZCEXUIKRKRCKNYGUHPOLVCVLNCGHIWYXZVLYZPTJVDDPCSLHIVRSXEVHLNNMG");

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
    msg.setTimeStamp(0.635841183963);
    msg.setSource(41669U);
    msg.setSourceEntity(250U);
    msg.setDestination(22208U);
    msg.setDestinationEntity(109U);
    msg.name.assign("TBFLRYYEIANYIWNQOXKXSNROJMLRIVQELNPKIXVKZBXHJSIVIGLKEWQQ");
    msg.value = 242U;

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
    msg.setTimeStamp(0.181769194695);
    msg.setSource(51200U);
    msg.setSourceEntity(53U);
    msg.setDestination(31949U);
    msg.setDestinationEntity(104U);
    msg.name.assign("CXAWVKOTGRIWZUVNFGMPHXXRUDGVFKPXDFESZKMLYURBQBKOWTSJTPJDTCHOUUOGPBVWNQDYDZUCNCIBSZFLXLHOJTQTNICGDAIZAGAWEAWKLQTLZRKRPZQULUMJHSBMIQPITGJZYULFLNJCWOQXPWHHYBNEGXRMMSVPEXEHQKYJLRZHNJVKJFAVGEBRIBSRYOSRJYKEVIFPASTWYFYYOOSODCDFBDTXQUAVGACMIZH");
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
    msg.setTimeStamp(0.79077058799);
    msg.setSource(20848U);
    msg.setSourceEntity(51U);
    msg.setDestination(17679U);
    msg.setDestinationEntity(172U);
    msg.name.assign("OLYAALYZNEPZROMVFINDJUAFOHRTYXQXCILFXILRIEKZSOETZBSQDHKHIXVNGZSLGPCFCNDKHSKEMJFIFNKGRYUWEKZLIKBWAVAFHHRMMORJVMPPUELFDXVXTHGYBTTJUEGJBWWSTASCUFYJDJCQQHUOHLQSZYBYJXEVBBGDPX");
    msg.value = 136U;

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
    msg.setTimeStamp(0.238549969505);
    msg.setSource(47416U);
    msg.setSourceEntity(65U);
    msg.setDestination(59444U);
    msg.setDestinationEntity(191U);
    msg.id = 228U;
    msg.period = 1446497377U;
    msg.duty_cycle = 1792627800U;

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
    msg.setTimeStamp(0.840536607058);
    msg.setSource(26742U);
    msg.setSourceEntity(41U);
    msg.setDestination(25521U);
    msg.setDestinationEntity(60U);
    msg.id = 80U;
    msg.period = 2224480154U;
    msg.duty_cycle = 644195738U;

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
    msg.setTimeStamp(0.780236852414);
    msg.setSource(45807U);
    msg.setSourceEntity(164U);
    msg.setDestination(24384U);
    msg.setDestinationEntity(246U);
    msg.id = 69U;
    msg.period = 3872381096U;
    msg.duty_cycle = 3142374609U;

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
    msg.setTimeStamp(0.915051986697);
    msg.setSource(43941U);
    msg.setSourceEntity(205U);
    msg.setDestination(11103U);
    msg.setDestinationEntity(249U);
    msg.id = 78U;
    msg.period = 2788175284U;
    msg.duty_cycle = 1509855226U;

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
    msg.setTimeStamp(0.736780568813);
    msg.setSource(14172U);
    msg.setSourceEntity(158U);
    msg.setDestination(26167U);
    msg.setDestinationEntity(116U);
    msg.id = 71U;
    msg.period = 3967134377U;
    msg.duty_cycle = 3804963176U;

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
    msg.setTimeStamp(0.752263981824);
    msg.setSource(4504U);
    msg.setSourceEntity(178U);
    msg.setDestination(20536U);
    msg.setDestinationEntity(128U);
    msg.id = 199U;
    msg.period = 384159654U;
    msg.duty_cycle = 2968824121U;

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
    msg.setTimeStamp(0.337043451797);
    msg.setSource(16030U);
    msg.setSourceEntity(76U);
    msg.setDestination(32848U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.823026017048;
    msg.lon = 0.458980838387;
    msg.height = 0.188856307159;
    msg.x = 0.0154868091962;
    msg.y = 0.216270995249;
    msg.z = 0.560015998248;
    msg.phi = 0.783833567419;
    msg.theta = 0.37977422928;
    msg.psi = 0.897022095571;
    msg.u = 0.021866812979;
    msg.v = 0.415126803458;
    msg.w = 0.601103762591;
    msg.vx = 0.847838235929;
    msg.vy = 0.826269309212;
    msg.vz = 0.392271335175;
    msg.p = 0.245721816956;
    msg.q = 0.392708515607;
    msg.r = 0.0582329349381;
    msg.depth = 0.919511941319;
    msg.alt = 0.0131613594561;

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
    msg.setTimeStamp(0.189357351639);
    msg.setSource(32066U);
    msg.setSourceEntity(46U);
    msg.setDestination(6447U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.456631525099;
    msg.lon = 0.241582833199;
    msg.height = 0.845874415198;
    msg.x = 0.844235020401;
    msg.y = 0.0410648812014;
    msg.z = 0.959932239669;
    msg.phi = 0.0977450202755;
    msg.theta = 0.99263756043;
    msg.psi = 0.109328164514;
    msg.u = 0.799841777571;
    msg.v = 0.93889600463;
    msg.w = 0.13357323562;
    msg.vx = 0.614395238615;
    msg.vy = 0.966671936427;
    msg.vz = 0.730451649515;
    msg.p = 0.909757291673;
    msg.q = 0.17325270666;
    msg.r = 0.674764846707;
    msg.depth = 0.945723403156;
    msg.alt = 0.897171745227;

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
    msg.setTimeStamp(0.0968536803971);
    msg.setSource(34022U);
    msg.setSourceEntity(45U);
    msg.setDestination(43040U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.422690545881;
    msg.lon = 0.293462842823;
    msg.height = 0.671800458974;
    msg.x = 0.424751432397;
    msg.y = 0.713296637094;
    msg.z = 0.723493068334;
    msg.phi = 0.00144878050986;
    msg.theta = 0.987569669655;
    msg.psi = 0.74028699104;
    msg.u = 0.194100458679;
    msg.v = 0.939950761088;
    msg.w = 0.732165422013;
    msg.vx = 0.134504804939;
    msg.vy = 0.959060574842;
    msg.vz = 0.970811729343;
    msg.p = 0.288956963366;
    msg.q = 0.642768929166;
    msg.r = 0.474974250818;
    msg.depth = 0.589926658447;
    msg.alt = 0.91727934855;

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
    msg.setTimeStamp(0.809495880521);
    msg.setSource(46102U);
    msg.setSourceEntity(214U);
    msg.setDestination(25582U);
    msg.setDestinationEntity(204U);
    msg.x = 0.940292202647;
    msg.y = 0.42955238943;
    msg.z = 0.167515297599;

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
    msg.setTimeStamp(0.436458525824);
    msg.setSource(7974U);
    msg.setSourceEntity(24U);
    msg.setDestination(58523U);
    msg.setDestinationEntity(161U);
    msg.x = 0.116226281603;
    msg.y = 0.0733918649377;
    msg.z = 0.364903736582;

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
    msg.setTimeStamp(0.821216550037);
    msg.setSource(17714U);
    msg.setSourceEntity(249U);
    msg.setDestination(21478U);
    msg.setDestinationEntity(20U);
    msg.x = 0.722936969521;
    msg.y = 0.448683775052;
    msg.z = 0.414761333394;

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
    msg.setTimeStamp(0.957370287295);
    msg.setSource(11855U);
    msg.setSourceEntity(209U);
    msg.setDestination(22535U);
    msg.setDestinationEntity(230U);
    msg.value = 0.0257950464898;

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
    msg.setTimeStamp(0.225487569478);
    msg.setSource(6106U);
    msg.setSourceEntity(39U);
    msg.setDestination(15104U);
    msg.setDestinationEntity(0U);
    msg.value = 0.92501219023;

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
    msg.setTimeStamp(0.926676617245);
    msg.setSource(36089U);
    msg.setSourceEntity(125U);
    msg.setDestination(30688U);
    msg.setDestinationEntity(1U);
    msg.value = 0.696906047161;

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
    msg.setTimeStamp(0.611367796704);
    msg.setSource(53618U);
    msg.setSourceEntity(12U);
    msg.setDestination(40525U);
    msg.setDestinationEntity(142U);
    msg.value = 0.177111894821;

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
    msg.setTimeStamp(0.915027284983);
    msg.setSource(9851U);
    msg.setSourceEntity(81U);
    msg.setDestination(27035U);
    msg.setDestinationEntity(152U);
    msg.value = 0.5699048116;

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
    msg.setTimeStamp(0.239785811004);
    msg.setSource(30635U);
    msg.setSourceEntity(129U);
    msg.setDestination(5717U);
    msg.setDestinationEntity(112U);
    msg.value = 0.062494402763;

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
    msg.setTimeStamp(0.772271512229);
    msg.setSource(58748U);
    msg.setSourceEntity(190U);
    msg.setDestination(3429U);
    msg.setDestinationEntity(131U);
    msg.x = 0.0698322970251;
    msg.y = 0.041272232418;
    msg.z = 0.00149749298464;
    msg.phi = 0.0402268525185;
    msg.theta = 0.640674267437;
    msg.psi = 0.361733665149;
    msg.p = 0.0819367156432;
    msg.q = 0.170466978444;
    msg.r = 0.483266473082;
    msg.u = 0.602947841025;
    msg.v = 0.692949027147;
    msg.w = 0.854202060835;
    msg.bias_psi = 0.208597123234;
    msg.bias_r = 0.133107912003;

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
    msg.setTimeStamp(0.51669943842);
    msg.setSource(27125U);
    msg.setSourceEntity(76U);
    msg.setDestination(44433U);
    msg.setDestinationEntity(247U);
    msg.x = 0.202802810323;
    msg.y = 0.854205277032;
    msg.z = 0.276416625109;
    msg.phi = 0.640318753973;
    msg.theta = 0.436975017391;
    msg.psi = 0.683497066962;
    msg.p = 0.594578854366;
    msg.q = 0.423674821268;
    msg.r = 0.15588857284;
    msg.u = 0.465726849341;
    msg.v = 0.920373573061;
    msg.w = 0.198582346087;
    msg.bias_psi = 0.80996998804;
    msg.bias_r = 0.0531689920133;

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
    msg.setTimeStamp(0.434272995125);
    msg.setSource(41247U);
    msg.setSourceEntity(152U);
    msg.setDestination(43349U);
    msg.setDestinationEntity(13U);
    msg.x = 0.391665647736;
    msg.y = 0.0224532570166;
    msg.z = 0.0218981319521;
    msg.phi = 0.844590649023;
    msg.theta = 0.892521185594;
    msg.psi = 0.190644718442;
    msg.p = 0.0666540784718;
    msg.q = 0.825989203573;
    msg.r = 0.520040562132;
    msg.u = 0.466237000999;
    msg.v = 0.482869525234;
    msg.w = 0.11305401065;
    msg.bias_psi = 0.0756813543993;
    msg.bias_r = 0.862605336791;

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
    msg.setTimeStamp(0.976024465637);
    msg.setSource(17123U);
    msg.setSourceEntity(213U);
    msg.setDestination(51224U);
    msg.setDestinationEntity(221U);
    msg.bias_psi = 0.443693518657;
    msg.bias_r = 0.0229750576113;
    msg.cog = 0.848237014526;
    msg.cyaw = 0.393159883224;
    msg.lbl_rej_level = 0.993587124257;
    msg.gps_rej_level = 0.892835141387;
    msg.custom_x = 0.390654733312;
    msg.custom_y = 0.807483474784;
    msg.custom_z = 0.776818598666;

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
    msg.setTimeStamp(0.989816979152);
    msg.setSource(24838U);
    msg.setSourceEntity(97U);
    msg.setDestination(41016U);
    msg.setDestinationEntity(196U);
    msg.bias_psi = 0.69625505333;
    msg.bias_r = 0.429036080848;
    msg.cog = 0.459283016888;
    msg.cyaw = 0.370339503235;
    msg.lbl_rej_level = 0.414379098332;
    msg.gps_rej_level = 0.647280327808;
    msg.custom_x = 0.428897272339;
    msg.custom_y = 0.933407637969;
    msg.custom_z = 0.725130418735;

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
    msg.setTimeStamp(0.0445472700454);
    msg.setSource(55504U);
    msg.setSourceEntity(178U);
    msg.setDestination(17820U);
    msg.setDestinationEntity(52U);
    msg.bias_psi = 0.827418711039;
    msg.bias_r = 0.444206090177;
    msg.cog = 0.885126385994;
    msg.cyaw = 0.716153458081;
    msg.lbl_rej_level = 0.13369334374;
    msg.gps_rej_level = 0.890006331613;
    msg.custom_x = 0.16907709881;
    msg.custom_y = 0.711485377953;
    msg.custom_z = 0.133857991944;

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
    msg.setTimeStamp(0.39172769869);
    msg.setSource(22575U);
    msg.setSourceEntity(122U);
    msg.setDestination(30365U);
    msg.setDestinationEntity(121U);
    msg.utc_time = 0.912212752592;
    msg.reason = 134U;

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
    msg.setTimeStamp(0.933638505466);
    msg.setSource(58788U);
    msg.setSourceEntity(183U);
    msg.setDestination(56085U);
    msg.setDestinationEntity(12U);
    msg.utc_time = 0.301444503079;
    msg.reason = 220U;

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
    msg.setTimeStamp(0.0668390504886);
    msg.setSource(29800U);
    msg.setSourceEntity(120U);
    msg.setDestination(320U);
    msg.setDestinationEntity(55U);
    msg.utc_time = 0.0679713446449;
    msg.reason = 28U;

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
    msg.setTimeStamp(0.605815168857);
    msg.setSource(31065U);
    msg.setSourceEntity(10U);
    msg.setDestination(19772U);
    msg.setDestinationEntity(207U);
    msg.id = 148U;
    msg.range = 0.222625169994;
    msg.acceptance = 177U;

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
    msg.setTimeStamp(0.0804232659726);
    msg.setSource(9806U);
    msg.setSourceEntity(62U);
    msg.setDestination(6843U);
    msg.setDestinationEntity(31U);
    msg.id = 187U;
    msg.range = 0.154734611806;
    msg.acceptance = 118U;

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
    msg.setTimeStamp(0.039205178523);
    msg.setSource(40699U);
    msg.setSourceEntity(231U);
    msg.setDestination(25904U);
    msg.setDestinationEntity(225U);
    msg.id = 29U;
    msg.range = 0.815800211304;
    msg.acceptance = 128U;

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
    msg.setTimeStamp(0.534199562017);
    msg.setSource(3457U);
    msg.setSourceEntity(217U);
    msg.setDestination(51003U);
    msg.setDestinationEntity(41U);
    msg.type = 151U;
    msg.reason = 107U;
    msg.value = 0.344361515679;
    msg.timestep = 0.461734691018;

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
    msg.setTimeStamp(0.847676606549);
    msg.setSource(38748U);
    msg.setSourceEntity(110U);
    msg.setDestination(42229U);
    msg.setDestinationEntity(215U);
    msg.type = 170U;
    msg.reason = 202U;
    msg.value = 0.876256486791;
    msg.timestep = 0.227121020451;

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
    msg.setTimeStamp(0.0238652332883);
    msg.setSource(40368U);
    msg.setSourceEntity(39U);
    msg.setDestination(27453U);
    msg.setDestinationEntity(203U);
    msg.type = 92U;
    msg.reason = 105U;
    msg.value = 0.476693557146;
    msg.timestep = 0.897838946902;

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
    msg.setTimeStamp(0.9501165043);
    msg.setSource(21300U);
    msg.setSourceEntity(207U);
    msg.setDestination(49574U);
    msg.setDestinationEntity(95U);

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
    msg.setTimeStamp(0.237085148374);
    msg.setSource(50602U);
    msg.setSourceEntity(205U);
    msg.setDestination(32602U);
    msg.setDestinationEntity(97U);

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
    msg.setTimeStamp(0.687204084797);
    msg.setSource(47823U);
    msg.setSourceEntity(86U);
    msg.setDestination(50578U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.928279829149);
    msg.setSource(64674U);
    msg.setSourceEntity(43U);
    msg.setDestination(11674U);
    msg.setDestinationEntity(10U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("IHUGULFISXWBRKXFKRVUBXAQXTLPDCGHZJOBIAGEAAFCMNWNYFIPQOZCINNDEYRJUPQMAMZETJOYBSTUUTRVDOAEQDQVTIWGYBSHREBIGANRUQBBV");
    tmp_msg_0.lat = 0.882066025988;
    tmp_msg_0.lon = 0.793279346554;
    tmp_msg_0.depth = 0.806116139963;
    tmp_msg_0.query_channel = 155U;
    tmp_msg_0.reply_channel = 148U;
    tmp_msg_0.transponder_delay = 183U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0231328775915;
    msg.y = 0.254437446113;
    msg.var_x = 0.469735433429;
    msg.var_y = 0.99381844121;
    msg.distance = 0.681726434598;

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
    msg.setTimeStamp(0.748352279604);
    msg.setSource(41859U);
    msg.setSourceEntity(133U);
    msg.setDestination(23772U);
    msg.setDestinationEntity(99U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KGYJJIPCUJUALMPWCDBSNUVBZPELBCQFSTHEVGSCETBVBNWUQDKNLCMTJHXQNAMGAWRTZSGVAVADBJRPLDHFBUVEYUFKGQWMLXXKGEDZSPPCRSLXCHSFAMZONIWONQOHIFAVVYFYLOEZLYREQFGBHKRUQIUTMQJJQYJOIMFCSKPFICJMZELMNZWYXSXHZWKXPEKKNPWNTDRVLGIWXRIXIOOMBTFHUYJA");
    tmp_msg_0.lat = 0.204676157852;
    tmp_msg_0.lon = 0.49181990954;
    tmp_msg_0.depth = 0.713504487652;
    tmp_msg_0.query_channel = 149U;
    tmp_msg_0.reply_channel = 151U;
    tmp_msg_0.transponder_delay = 230U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.913508851446;
    msg.y = 0.00276975844061;
    msg.var_x = 0.247197513618;
    msg.var_y = 0.332932155932;
    msg.distance = 0.106079086564;

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
    msg.setTimeStamp(0.6243598563);
    msg.setSource(3923U);
    msg.setSourceEntity(159U);
    msg.setDestination(1416U);
    msg.setDestinationEntity(207U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("PBCOEWBWHFWCTIFEMPMELUSHWYIUBIIJRBOPPUKLFLXJDAYHRDZDBYVBEMTVZQEUZZEMIFEGAPVACKTNTBIFKQOLJVGQZXRRENGJOQRJMTCKHRSVDNLWIWIPNXAMYCNLOASTAHHAFOGUSMDBJFJXVSLZOYGUYDBFH");
    tmp_msg_0.lat = 0.337909508306;
    tmp_msg_0.lon = 0.227928012587;
    tmp_msg_0.depth = 0.149558634482;
    tmp_msg_0.query_channel = 107U;
    tmp_msg_0.reply_channel = 172U;
    tmp_msg_0.transponder_delay = 168U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.270239067541;
    msg.y = 0.915204345904;
    msg.var_x = 0.575814931633;
    msg.var_y = 0.687784856738;
    msg.distance = 0.301771894517;

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
    msg.setTimeStamp(0.0525593748718);
    msg.setSource(36962U);
    msg.setSourceEntity(124U);
    msg.setDestination(3724U);
    msg.setDestinationEntity(239U);
    msg.state = 114U;

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
    msg.setTimeStamp(0.252588273099);
    msg.setSource(6814U);
    msg.setSourceEntity(217U);
    msg.setDestination(28458U);
    msg.setDestinationEntity(79U);
    msg.state = 64U;

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
    msg.setTimeStamp(0.953033113155);
    msg.setSource(12056U);
    msg.setSourceEntity(153U);
    msg.setDestination(46774U);
    msg.setDestinationEntity(189U);
    msg.state = 110U;

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
    msg.setTimeStamp(0.462939871991);
    msg.setSource(36625U);
    msg.setSourceEntity(21U);
    msg.setDestination(4359U);
    msg.setDestinationEntity(128U);
    msg.x = 0.326756885421;
    msg.y = 0.664037958396;
    msg.z = 0.159145339473;

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
    msg.setTimeStamp(0.0573624356099);
    msg.setSource(64691U);
    msg.setSourceEntity(213U);
    msg.setDestination(31945U);
    msg.setDestinationEntity(24U);
    msg.x = 0.466676558945;
    msg.y = 0.937349179489;
    msg.z = 0.676507068233;

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
    msg.setTimeStamp(0.920087783731);
    msg.setSource(22708U);
    msg.setSourceEntity(219U);
    msg.setDestination(8047U);
    msg.setDestinationEntity(214U);
    msg.x = 0.684930443029;
    msg.y = 0.194928594151;
    msg.z = 0.116042063633;

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
    msg.setTimeStamp(0.30334522962);
    msg.setSource(3849U);
    msg.setSourceEntity(155U);
    msg.setDestination(2428U);
    msg.setDestinationEntity(156U);
    msg.value = 0.494650436409;

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
    msg.setTimeStamp(0.361709129547);
    msg.setSource(47585U);
    msg.setSourceEntity(96U);
    msg.setDestination(43345U);
    msg.setDestinationEntity(137U);
    msg.value = 0.958108094714;

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
    msg.setTimeStamp(0.561776411841);
    msg.setSource(49920U);
    msg.setSourceEntity(153U);
    msg.setDestination(43283U);
    msg.setDestinationEntity(60U);
    msg.value = 0.0977353856928;

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
    msg.setTimeStamp(0.399143005375);
    msg.setSource(29896U);
    msg.setSourceEntity(35U);
    msg.setDestination(27415U);
    msg.setDestinationEntity(11U);
    msg.value = 0.707793236817;
    msg.z_units = 167U;

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
    msg.setTimeStamp(0.0593561219932);
    msg.setSource(53868U);
    msg.setSourceEntity(241U);
    msg.setDestination(1933U);
    msg.setDestinationEntity(199U);
    msg.value = 0.493180654696;
    msg.z_units = 251U;

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
    msg.setTimeStamp(0.0547368592081);
    msg.setSource(59358U);
    msg.setSourceEntity(6U);
    msg.setDestination(29608U);
    msg.setDestinationEntity(65U);
    msg.value = 0.511877105017;
    msg.z_units = 238U;

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
    msg.setTimeStamp(0.406572905437);
    msg.setSource(40106U);
    msg.setSourceEntity(125U);
    msg.setDestination(32989U);
    msg.setDestinationEntity(138U);
    msg.value = 0.592007203282;
    msg.speed_units = 252U;

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
    msg.setTimeStamp(0.0162187228213);
    msg.setSource(23124U);
    msg.setSourceEntity(163U);
    msg.setDestination(16892U);
    msg.setDestinationEntity(51U);
    msg.value = 0.824664865216;
    msg.speed_units = 121U;

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
    msg.setTimeStamp(0.939621846345);
    msg.setSource(24529U);
    msg.setSourceEntity(18U);
    msg.setDestination(10034U);
    msg.setDestinationEntity(16U);
    msg.value = 0.0168551967976;
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
    msg.setTimeStamp(0.850581079488);
    msg.setSource(52494U);
    msg.setSourceEntity(7U);
    msg.setDestination(17059U);
    msg.setDestinationEntity(120U);
    msg.value = 0.736199399556;

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
    msg.setTimeStamp(0.236061556974);
    msg.setSource(5537U);
    msg.setSourceEntity(139U);
    msg.setDestination(25601U);
    msg.setDestinationEntity(189U);
    msg.value = 0.383942668675;

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
    msg.setTimeStamp(0.10491505709);
    msg.setSource(13085U);
    msg.setSourceEntity(96U);
    msg.setDestination(18286U);
    msg.setDestinationEntity(89U);
    msg.value = 0.481005910114;

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
    msg.setTimeStamp(0.946487730192);
    msg.setSource(45918U);
    msg.setSourceEntity(182U);
    msg.setDestination(28254U);
    msg.setDestinationEntity(236U);
    msg.value = 0.992000313877;

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
    msg.setTimeStamp(0.216009779029);
    msg.setSource(65085U);
    msg.setSourceEntity(14U);
    msg.setDestination(195U);
    msg.setDestinationEntity(135U);
    msg.value = 0.81098008128;

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
    msg.setTimeStamp(0.774468186343);
    msg.setSource(29846U);
    msg.setSourceEntity(74U);
    msg.setDestination(43287U);
    msg.setDestinationEntity(21U);
    msg.value = 0.736982832872;

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
    msg.setTimeStamp(0.177394871791);
    msg.setSource(13873U);
    msg.setSourceEntity(159U);
    msg.setDestination(21966U);
    msg.setDestinationEntity(9U);
    msg.value = 0.185371054857;

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
    msg.setTimeStamp(0.887646150882);
    msg.setSource(7262U);
    msg.setSourceEntity(245U);
    msg.setDestination(59781U);
    msg.setDestinationEntity(23U);
    msg.value = 0.819497852097;

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
    msg.setTimeStamp(0.933357315179);
    msg.setSource(3023U);
    msg.setSourceEntity(82U);
    msg.setDestination(35176U);
    msg.setDestinationEntity(173U);
    msg.value = 0.0137724269882;

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
    msg.setTimeStamp(0.696493295629);
    msg.setSource(55722U);
    msg.setSourceEntity(198U);
    msg.setDestination(53122U);
    msg.setDestinationEntity(48U);
    msg.start_lat = 0.0467165892313;
    msg.start_lon = 0.238736109961;
    msg.start_z = 0.830195780825;
    msg.start_z_units = 6U;
    msg.end_lat = 0.201728036238;
    msg.end_lon = 0.26975049051;
    msg.end_z = 0.314424455431;
    msg.end_z_units = 17U;
    msg.speed = 0.731035298365;
    msg.speed_units = 70U;
    msg.lradius = 0.858623388988;
    msg.flags = 134U;

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
    msg.setTimeStamp(0.944504147123);
    msg.setSource(23234U);
    msg.setSourceEntity(64U);
    msg.setDestination(54140U);
    msg.setDestinationEntity(179U);
    msg.start_lat = 0.724053841746;
    msg.start_lon = 0.333331042891;
    msg.start_z = 0.0275719551311;
    msg.start_z_units = 88U;
    msg.end_lat = 0.0266668186989;
    msg.end_lon = 0.437553155155;
    msg.end_z = 0.489232515151;
    msg.end_z_units = 151U;
    msg.speed = 0.485820506074;
    msg.speed_units = 187U;
    msg.lradius = 0.328517456566;
    msg.flags = 235U;

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
    msg.setTimeStamp(0.853868724334);
    msg.setSource(47878U);
    msg.setSourceEntity(232U);
    msg.setDestination(22482U);
    msg.setDestinationEntity(69U);
    msg.start_lat = 0.906182696131;
    msg.start_lon = 0.830495812025;
    msg.start_z = 0.889469371367;
    msg.start_z_units = 204U;
    msg.end_lat = 0.420481972436;
    msg.end_lon = 0.941752265818;
    msg.end_z = 0.618561563376;
    msg.end_z_units = 33U;
    msg.speed = 0.657636377738;
    msg.speed_units = 177U;
    msg.lradius = 0.0466013508893;
    msg.flags = 76U;

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
    msg.setTimeStamp(0.384669590846);
    msg.setSource(26086U);
    msg.setSourceEntity(64U);
    msg.setDestination(26658U);
    msg.setDestinationEntity(71U);
    msg.x = 0.179741475506;
    msg.y = 0.138279647622;
    msg.z = 0.237372347078;
    msg.k = 0.464480229045;
    msg.m = 0.0453917738792;
    msg.n = 0.293460718231;
    msg.flags = 116U;

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
    msg.setTimeStamp(0.750103411214);
    msg.setSource(46059U);
    msg.setSourceEntity(27U);
    msg.setDestination(36722U);
    msg.setDestinationEntity(93U);
    msg.x = 0.924815134269;
    msg.y = 0.988829251948;
    msg.z = 0.177832496295;
    msg.k = 0.192895441852;
    msg.m = 0.941207949713;
    msg.n = 0.0480829319485;
    msg.flags = 149U;

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
    msg.setTimeStamp(0.0980976014702);
    msg.setSource(16025U);
    msg.setSourceEntity(61U);
    msg.setDestination(23034U);
    msg.setDestinationEntity(149U);
    msg.x = 0.937386955754;
    msg.y = 0.33044551573;
    msg.z = 0.866060131353;
    msg.k = 0.807169330461;
    msg.m = 0.246213285617;
    msg.n = 0.538554335963;
    msg.flags = 198U;

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
    msg.setTimeStamp(0.659188451232);
    msg.setSource(44198U);
    msg.setSourceEntity(180U);
    msg.setDestination(42290U);
    msg.setDestinationEntity(157U);
    msg.value = 0.418517502899;

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
    msg.setTimeStamp(0.215347522087);
    msg.setSource(48740U);
    msg.setSourceEntity(150U);
    msg.setDestination(60798U);
    msg.setDestinationEntity(82U);
    msg.value = 0.619876953499;

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
    msg.setTimeStamp(0.344516585822);
    msg.setSource(10717U);
    msg.setSourceEntity(247U);
    msg.setDestination(47119U);
    msg.setDestinationEntity(187U);
    msg.value = 0.395143940826;

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
    msg.setTimeStamp(0.35286675077);
    msg.setSource(34670U);
    msg.setSourceEntity(37U);
    msg.setDestination(15914U);
    msg.setDestinationEntity(42U);
    msg.u = 0.619326819095;
    msg.v = 0.433879295215;
    msg.w = 0.430363202217;
    msg.p = 0.124486709465;
    msg.q = 0.272305434847;
    msg.r = 0.46626116528;
    msg.flags = 167U;

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
    msg.setTimeStamp(0.84418866775);
    msg.setSource(49663U);
    msg.setSourceEntity(83U);
    msg.setDestination(25920U);
    msg.setDestinationEntity(238U);
    msg.u = 0.0747990038449;
    msg.v = 0.35216199903;
    msg.w = 0.579101997349;
    msg.p = 0.133387334087;
    msg.q = 0.0709339322117;
    msg.r = 0.0794284671094;
    msg.flags = 206U;

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
    msg.setTimeStamp(0.922193816729);
    msg.setSource(48254U);
    msg.setSourceEntity(76U);
    msg.setDestination(22025U);
    msg.setDestinationEntity(102U);
    msg.u = 0.396922864208;
    msg.v = 0.965558987504;
    msg.w = 0.239883586011;
    msg.p = 0.391901263761;
    msg.q = 0.419499370189;
    msg.r = 0.399509048042;
    msg.flags = 144U;

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
    msg.setTimeStamp(0.747728324122);
    msg.setSource(10838U);
    msg.setSourceEntity(126U);
    msg.setDestination(20685U);
    msg.setDestinationEntity(64U);
    msg.start_lat = 0.381146006708;
    msg.start_lon = 0.623669478852;
    msg.start_z = 0.735784392097;
    msg.start_z_units = 119U;
    msg.end_lat = 0.281919409408;
    msg.end_lon = 0.337152436829;
    msg.end_z = 0.985921356784;
    msg.end_z_units = 172U;
    msg.lradius = 0.0468858363213;
    msg.flags = 55U;
    msg.x = 0.494614313569;
    msg.y = 0.560180894735;
    msg.z = 0.33845625044;
    msg.vx = 0.42173604551;
    msg.vy = 0.142600926003;
    msg.vz = 0.194783286388;
    msg.course_error = 0.684936477875;
    msg.eta = 17525U;

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
    msg.setTimeStamp(0.096770394964);
    msg.setSource(13865U);
    msg.setSourceEntity(242U);
    msg.setDestination(48399U);
    msg.setDestinationEntity(71U);
    msg.start_lat = 0.630860202851;
    msg.start_lon = 0.343757519463;
    msg.start_z = 0.0493050381109;
    msg.start_z_units = 182U;
    msg.end_lat = 0.617159954817;
    msg.end_lon = 0.384851851065;
    msg.end_z = 0.179278384484;
    msg.end_z_units = 55U;
    msg.lradius = 0.24867851652;
    msg.flags = 231U;
    msg.x = 0.959467916614;
    msg.y = 0.510737094774;
    msg.z = 0.951398607717;
    msg.vx = 0.979612345562;
    msg.vy = 0.0560791720674;
    msg.vz = 0.448848096254;
    msg.course_error = 0.233473689612;
    msg.eta = 39868U;

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
    msg.setTimeStamp(0.0845315236432);
    msg.setSource(63257U);
    msg.setSourceEntity(137U);
    msg.setDestination(43858U);
    msg.setDestinationEntity(226U);
    msg.start_lat = 0.48767932055;
    msg.start_lon = 0.486636778216;
    msg.start_z = 0.665141084435;
    msg.start_z_units = 183U;
    msg.end_lat = 0.190011470905;
    msg.end_lon = 0.893758228224;
    msg.end_z = 0.340226922225;
    msg.end_z_units = 146U;
    msg.lradius = 0.59792485205;
    msg.flags = 86U;
    msg.x = 0.441731775072;
    msg.y = 0.690674269946;
    msg.z = 0.722357332646;
    msg.vx = 0.568110327901;
    msg.vy = 0.240555433822;
    msg.vz = 0.246694172677;
    msg.course_error = 0.0166567168111;
    msg.eta = 37532U;

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
    msg.setTimeStamp(0.302624384002);
    msg.setSource(15546U);
    msg.setSourceEntity(195U);
    msg.setDestination(11345U);
    msg.setDestinationEntity(114U);
    msg.k = 0.69566767859;
    msg.m = 0.948689207363;
    msg.n = 0.614224890495;

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
    msg.setTimeStamp(0.0515244405431);
    msg.setSource(29626U);
    msg.setSourceEntity(116U);
    msg.setDestination(52580U);
    msg.setDestinationEntity(73U);
    msg.k = 0.373779986428;
    msg.m = 0.191021747024;
    msg.n = 0.662972433393;

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
    msg.setTimeStamp(0.767822121307);
    msg.setSource(22101U);
    msg.setSourceEntity(160U);
    msg.setDestination(18860U);
    msg.setDestinationEntity(217U);
    msg.k = 0.413146901837;
    msg.m = 0.201009339584;
    msg.n = 0.767100803501;

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
    msg.setTimeStamp(0.629343224664);
    msg.setSource(20246U);
    msg.setSourceEntity(166U);
    msg.setDestination(30035U);
    msg.setDestinationEntity(206U);
    msg.p = 0.213888254697;
    msg.i = 0.224523281498;
    msg.d = 0.0715444755513;
    msg.a = 0.0926261694079;

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
    msg.setTimeStamp(0.587759084091);
    msg.setSource(53170U);
    msg.setSourceEntity(249U);
    msg.setDestination(1826U);
    msg.setDestinationEntity(242U);
    msg.p = 0.0266922996665;
    msg.i = 0.114740691063;
    msg.d = 0.703146103944;
    msg.a = 0.965966136986;

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
    msg.setTimeStamp(0.234246403986);
    msg.setSource(32489U);
    msg.setSourceEntity(226U);
    msg.setDestination(26102U);
    msg.setDestinationEntity(251U);
    msg.p = 0.822644991709;
    msg.i = 0.667227143961;
    msg.d = 0.182497269135;
    msg.a = 0.09288653965;

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
    msg.setTimeStamp(0.279752682067);
    msg.setSource(27973U);
    msg.setSourceEntity(155U);
    msg.setDestination(51215U);
    msg.setDestinationEntity(181U);
    msg.op = 54U;

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
    msg.setTimeStamp(0.905574421419);
    msg.setSource(21571U);
    msg.setSourceEntity(149U);
    msg.setDestination(25023U);
    msg.setDestinationEntity(142U);
    msg.op = 168U;

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
    msg.setTimeStamp(0.908393984519);
    msg.setSource(34764U);
    msg.setSourceEntity(164U);
    msg.setDestination(45515U);
    msg.setDestinationEntity(242U);
    msg.op = 242U;

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
    msg.setTimeStamp(0.836863101122);
    msg.setSource(9830U);
    msg.setSourceEntity(134U);
    msg.setDestination(24074U);
    msg.setDestinationEntity(205U);
    msg.timeout = 4705U;
    msg.lat = 0.984646248462;
    msg.lon = 0.26436923682;
    msg.z = 0.343344598403;
    msg.z_units = 20U;
    msg.speed = 0.834107977334;
    msg.speed_units = 227U;
    msg.roll = 0.627006421714;
    msg.pitch = 0.0282600719284;
    msg.yaw = 0.338837537944;
    msg.custom.assign("VKXPNSVSDXCDWEULKUQKMX");

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
    msg.setTimeStamp(0.0870632637052);
    msg.setSource(30928U);
    msg.setSourceEntity(248U);
    msg.setDestination(25351U);
    msg.setDestinationEntity(9U);
    msg.timeout = 7919U;
    msg.lat = 0.224818429556;
    msg.lon = 0.521291206449;
    msg.z = 0.96555978158;
    msg.z_units = 173U;
    msg.speed = 0.423618689961;
    msg.speed_units = 240U;
    msg.roll = 0.696358784246;
    msg.pitch = 0.839549605148;
    msg.yaw = 0.780537486067;
    msg.custom.assign("LUCVTUVBZBLNJCTUVFDQIOZNJQRUTKDYYBUIBAMAWQWCDAEKQSBJNAORNZSAXMPYZYGMVLRDPJMJRFIRVAMRGWQSWCUVELBIWTGE");

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
    msg.setTimeStamp(0.0258841594391);
    msg.setSource(65150U);
    msg.setSourceEntity(199U);
    msg.setDestination(54466U);
    msg.setDestinationEntity(203U);
    msg.timeout = 19724U;
    msg.lat = 0.643385113878;
    msg.lon = 0.048375287602;
    msg.z = 0.373642002609;
    msg.z_units = 253U;
    msg.speed = 0.67114555455;
    msg.speed_units = 35U;
    msg.roll = 0.0196153921195;
    msg.pitch = 0.0857186717401;
    msg.yaw = 0.82921890236;
    msg.custom.assign("YBLTIAWQNXNCTOXWSXDIHRKPOCSIOUDQGUAFLBVIHFOFBSAYMRHTWYQEIVSQIZFWRGVVIYSCMAUZUCZEABXJCUGKBMVJMIUDSTJBVGRPNC");

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
    msg.setTimeStamp(0.897215205883);
    msg.setSource(43256U);
    msg.setSourceEntity(42U);
    msg.setDestination(5949U);
    msg.setDestinationEntity(250U);
    msg.timeout = 48495U;
    msg.lat = 0.876535661104;
    msg.lon = 0.342640532001;
    msg.z = 0.150466801628;
    msg.z_units = 202U;
    msg.speed = 0.231941954781;
    msg.speed_units = 127U;
    msg.duration = 42425U;
    msg.radius = 0.639786213596;
    msg.flags = 243U;
    msg.custom.assign("HVNWYVZEJUOFBLEZBBAHMYBACUXMCTONLHFQXGWBOPFCWPYDKIEHQODLGIJTMVOTPQVZFSRKWAZFWVHWHSXOGWICFTUAOVCJNCDMLUBNRAEIKKLKKBJFENRQUWSCZMOPPGGDSRCPEQJNTZPTHRJUXXUDSMWZUNNJXGIOCBGJGYSSRHWYKVCYDRADLSHALZGTYQIGAVUQBTTVTIXKUELXKHJIYVQ");

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
    msg.setTimeStamp(0.759651353296);
    msg.setSource(21605U);
    msg.setSourceEntity(100U);
    msg.setDestination(30258U);
    msg.setDestinationEntity(173U);
    msg.timeout = 37267U;
    msg.lat = 0.730365653448;
    msg.lon = 0.507903366041;
    msg.z = 0.767357360795;
    msg.z_units = 97U;
    msg.speed = 0.672454002821;
    msg.speed_units = 81U;
    msg.duration = 13275U;
    msg.radius = 0.520131119543;
    msg.flags = 202U;
    msg.custom.assign("WNZLAUXXDNDYSPJKKQXVUPWCUHYSBWDLINDOKUJIKOLMWXBYQKITETVDIZRDETUOMRFWEBQOHORPNTE");

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
    msg.setTimeStamp(0.178627069396);
    msg.setSource(40613U);
    msg.setSourceEntity(134U);
    msg.setDestination(24038U);
    msg.setDestinationEntity(96U);
    msg.timeout = 11332U;
    msg.lat = 0.244882141943;
    msg.lon = 0.735951451478;
    msg.z = 0.281979995948;
    msg.z_units = 38U;
    msg.speed = 0.856407931109;
    msg.speed_units = 58U;
    msg.duration = 41426U;
    msg.radius = 0.575163517271;
    msg.flags = 108U;
    msg.custom.assign("AKSJSBEOUHKTSSI");

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
    msg.setTimeStamp(0.750225950456);
    msg.setSource(52150U);
    msg.setSourceEntity(110U);
    msg.setDestination(24115U);
    msg.setDestinationEntity(57U);
    msg.custom.assign("RDUMFPSNTNOQZAOCAKDOQXFMMXAWYRDOEACNYXHWGFPSKCSLUWBPXSUEUMOXVN");

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
    msg.setTimeStamp(0.551387022917);
    msg.setSource(3379U);
    msg.setSourceEntity(222U);
    msg.setDestination(9534U);
    msg.setDestinationEntity(47U);
    msg.custom.assign("FLYVTXLEAXKIXAOJIUHDMFWDARQUGLRLJTELIUFCWGJNFKEMKNXCZYMZEQWGVRYQSWMDYMIVGWXCRVCJOZDSWPZZCVPUFUNMUGRYTQUKONPQDHKTLNBHKIONRYRSQXNBOPCAJKJPNI");

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
    msg.setTimeStamp(0.81363339419);
    msg.setSource(43550U);
    msg.setSourceEntity(153U);
    msg.setDestination(47684U);
    msg.setDestinationEntity(125U);
    msg.custom.assign("UHAPNPHGWNMLBRDBGGBAWDGFHAJZRGWGZGOFYDJEUQFYROCLCHAOZHNYPFXUEABJCLMPLSSXUXKSKMQCJNHJTYYHNHJITTBZDXTVRKIELQOVWEVFDGQOKJLVMROWWNWPAKC");

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
    msg.setTimeStamp(0.901387574967);
    msg.setSource(29514U);
    msg.setSourceEntity(216U);
    msg.setDestination(33147U);
    msg.setDestinationEntity(130U);
    msg.timeout = 10681U;
    msg.lat = 0.319187926231;
    msg.lon = 0.29625299478;
    msg.z = 0.0430702170207;
    msg.z_units = 58U;
    msg.duration = 63572U;
    msg.speed = 0.206205108679;
    msg.speed_units = 27U;
    msg.type = 102U;
    msg.radius = 0.401425212531;
    msg.length = 0.66296547601;
    msg.bearing = 0.185311035768;
    msg.direction = 109U;
    msg.custom.assign("PWVCIWZDBWCNJVWGRMKCTOJMQKEQQFXNIWDIVMHNYMMPZDRGNABELUCILXVJWRWOUOQODEUSLTABBOYQHGYZYSQSFSTFYVIYFZUNOPKUHXMAWRVOHHKTGMTUEKCVYSZLDRTJTLGPAVNXJFKKTNLEIIBASFRCQXZYKADDURXHOYCPDAJLEZBHLFRHHNENENFXSLLJROG");

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
    msg.setTimeStamp(0.512576642327);
    msg.setSource(51875U);
    msg.setSourceEntity(57U);
    msg.setDestination(8624U);
    msg.setDestinationEntity(226U);
    msg.timeout = 8339U;
    msg.lat = 0.397497035165;
    msg.lon = 0.290510250111;
    msg.z = 0.841135300368;
    msg.z_units = 236U;
    msg.duration = 11348U;
    msg.speed = 0.456746070693;
    msg.speed_units = 225U;
    msg.type = 179U;
    msg.radius = 0.0150253525616;
    msg.length = 0.563496310261;
    msg.bearing = 0.409191064045;
    msg.direction = 110U;
    msg.custom.assign("DDMAUMXPESGZIVVEJGJRKYYQWFGRBPMANVAAHDAUFBJWDGMYRIUZLFURHONKNRNFSWCRQTEEPXTKB");

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
    msg.setTimeStamp(0.84908338576);
    msg.setSource(7789U);
    msg.setSourceEntity(201U);
    msg.setDestination(27666U);
    msg.setDestinationEntity(147U);
    msg.timeout = 64448U;
    msg.lat = 0.434091313728;
    msg.lon = 0.797129585107;
    msg.z = 0.515702366018;
    msg.z_units = 15U;
    msg.duration = 20362U;
    msg.speed = 0.477409777445;
    msg.speed_units = 167U;
    msg.type = 206U;
    msg.radius = 0.950885013497;
    msg.length = 0.703196456853;
    msg.bearing = 0.658445419783;
    msg.direction = 75U;
    msg.custom.assign("PPBMHWAIZCVWHFPMBNKKAASFSBMSCUPAMZBJRJPWCTYWEVDWJDHDXCLWXXKRZCSQYVATMEUNMNQRDACAEGKGFTTVPREOSYKEPFPRVRFSQGYLUTOLOCHLWYIXNMEXDCIZTFHOUGBZUSDMQBKQQZZCONRXNWVEWYIZTLQAUXJAOOKLTDSJNKXHENIRVXIQGJMUXUDDLHIIVVOPNOKLGZYTVBZGBJOBE");

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
    msg.setTimeStamp(0.273065624817);
    msg.setSource(41953U);
    msg.setSourceEntity(80U);
    msg.setDestination(46487U);
    msg.setDestinationEntity(223U);
    msg.duration = 21288U;
    msg.custom.assign("AVUZQELOUCCRMRVRTKUEOLWCHYJNJHKXLPFMBMGYGSCSRFAIUNRGSAXIFWXSDPVFQAUGSMSDBGJUEGJIKKHNWAASMRDHXJYNKMHKIWDJPHQEFKGYJTWDEITVJZOIPJUZBLVTMALQAXEIZRTECUPZOYXRVFFWUIQAWEPBKONRRTDJTPEGNXK");

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
    msg.setTimeStamp(0.110156058743);
    msg.setSource(39086U);
    msg.setSourceEntity(106U);
    msg.setDestination(7135U);
    msg.setDestinationEntity(30U);
    msg.duration = 24566U;
    msg.custom.assign("DQTCOECCSXXBMLIKJSMZPZXBSTVCCHMSFG");

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
    msg.setTimeStamp(0.501660806287);
    msg.setSource(23895U);
    msg.setSourceEntity(109U);
    msg.setDestination(63268U);
    msg.setDestinationEntity(44U);
    msg.duration = 38524U;
    msg.custom.assign("YSOWYIJEQZSIDKQZIQJFGIOMAWNTQDCDHUTBAN");

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
    msg.setTimeStamp(0.233029654561);
    msg.setSource(17765U);
    msg.setSourceEntity(138U);
    msg.setDestination(64090U);
    msg.setDestinationEntity(74U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.654955829127;
    tmp_msg_0.speed_units = 21U;
    msg.control.set(tmp_msg_0);
    msg.duration = 12413U;
    msg.custom.assign("NNSEJTFYALGOVXCQLRXGCTPJDWSAHKCAGDWRNNLASFLUIHFGDHTWIWMPEQSMQLMSNTKEGANYWITDRRDEJSBZBKHKNODAWPIEOFCKMBPJACRSGMTHQBJNWULKQDELZMCDJSCDXXAIJPEOFVSFUYQUKYXEINGHXUJGOUGZCOKEPVVYUEIYQAZLUZQTFHCO");

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
    msg.setTimeStamp(0.150472984121);
    msg.setSource(62055U);
    msg.setSourceEntity(227U);
    msg.setDestination(16499U);
    msg.setDestinationEntity(172U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.399473493235;
    tmp_msg_0.z_units = 181U;
    msg.control.set(tmp_msg_0);
    msg.duration = 35006U;
    msg.custom.assign("CKYOSLWHSFHLGJOEZLLNYZFXKQFCNXOWZPPJJBEMRGPNEJWCFAEOURAIPTCBFTNYBJXZMAHMNAHVGLSOKWMAZDIRGCKQIWIESRBXNZIFSNRTYTQWRUUCTUSUXKMWHRQSAWNDPCAVVEDQGVITCEHDKIAFHPQPEXVUOLOFHBLJDIISQNYGDVGOABYWCZUJXDZIYBODZSQNMQAJBCMKYZDOTXKJLBTGHTLEQMJYEVFWRRTMVVKMSG");

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
    msg.setTimeStamp(0.714979485599);
    msg.setSource(22105U);
    msg.setSourceEntity(210U);
    msg.setDestination(24918U);
    msg.setDestinationEntity(148U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.295316425236;
    msg.control.set(tmp_msg_0);
    msg.duration = 61726U;
    msg.custom.assign("SKLXAUXIVMMCGVCQNVPOALZVFISDYYWVDFICBHMRHAZLQFOVXWHLCAFMHJOEKPFSETNQQPHTSKXSLLGDMCZEVIVSTQRCDJGJFXOTOEKEXBDFRNCWPTHFIOPNTGTUNJVRPLCKRZAURLDKUHZOPLSBFWYDNYRWZHIJ");

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
    msg.setTimeStamp(0.535235852541);
    msg.setSource(38288U);
    msg.setSourceEntity(172U);
    msg.setDestination(12996U);
    msg.setDestinationEntity(153U);
    msg.timeout = 42127U;
    msg.lat = 0.359054963788;
    msg.lon = 0.0112344657791;
    msg.z = 0.652894527854;
    msg.z_units = 159U;
    msg.speed = 0.195205309858;
    msg.speed_units = 146U;
    msg.bearing = 0.485466598675;
    msg.cross_angle = 0.384843596067;
    msg.width = 0.93772013087;
    msg.length = 0.932331177768;
    msg.hstep = 0.240375949753;
    msg.coff = 129U;
    msg.alternation = 37U;
    msg.flags = 112U;
    msg.custom.assign("XFUWYUWNWGJFNKSEZTKCLACXEXAMXLOIVDEDIWLGCMOULVNEPVGPLRPPAMTTMTIOLPYQJKTQJRNBMSZQIRWYOEZZBKYBGZ");

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
    msg.setTimeStamp(0.533360926974);
    msg.setSource(13614U);
    msg.setSourceEntity(214U);
    msg.setDestination(51206U);
    msg.setDestinationEntity(216U);
    msg.timeout = 1754U;
    msg.lat = 0.301826306127;
    msg.lon = 0.242844705906;
    msg.z = 0.0155813987344;
    msg.z_units = 210U;
    msg.speed = 0.153109472314;
    msg.speed_units = 13U;
    msg.bearing = 0.270471830185;
    msg.cross_angle = 0.316939110443;
    msg.width = 0.406394531072;
    msg.length = 0.0728154018415;
    msg.hstep = 0.0932986259479;
    msg.coff = 137U;
    msg.alternation = 111U;
    msg.flags = 39U;
    msg.custom.assign("ATPAZPVGLZXRCLOTSOLWUUBUAOFBESLYVVKIVPSKQFBGJACENJKERJWFFVZHXLRCGHWAWIGGFISWNRUCMBBEPDESYMZITJRFBJGNVEMHYXOFGWQZSUFQYUPEDLBNZMODKARTSLMKDXCPIIOREVSANLUMQMPIIQCOVVQBWRHPKXNNHNCWTABNJJPZZIXCWDMDKJJYLUXBOAYCKATTMDSEHYTGZDMC");

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
    msg.setTimeStamp(0.355948654189);
    msg.setSource(39078U);
    msg.setSourceEntity(239U);
    msg.setDestination(50661U);
    msg.setDestinationEntity(166U);
    msg.timeout = 65044U;
    msg.lat = 0.762584382696;
    msg.lon = 0.974511863413;
    msg.z = 0.947082393185;
    msg.z_units = 142U;
    msg.speed = 0.989297325795;
    msg.speed_units = 82U;
    msg.bearing = 0.0181920912968;
    msg.cross_angle = 0.320648301108;
    msg.width = 0.854204787352;
    msg.length = 0.832909465774;
    msg.hstep = 0.911688695014;
    msg.coff = 3U;
    msg.alternation = 53U;
    msg.flags = 118U;
    msg.custom.assign("WKIADVHSOXFLRHMHXZMUIWJDNUCKUTEGOFGQNSXYEKMPVZAJSHHLIWDGYM");

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
    msg.setTimeStamp(0.878248815309);
    msg.setSource(35807U);
    msg.setSourceEntity(246U);
    msg.setDestination(13374U);
    msg.setDestinationEntity(87U);
    msg.timeout = 38235U;
    msg.lat = 0.0504341769817;
    msg.lon = 0.539843959917;
    msg.z = 0.632155903149;
    msg.z_units = 143U;
    msg.speed = 0.786715360831;
    msg.speed_units = 30U;
    msg.custom.assign("UGMARSFCCSMFRFHMDXEDRUOIXQGQKQPZWTQOLHSWZBGKSKQLJVHBVIZTUJRPMFXACZEZHWJBLUQFLLCBHDQAYDPNWJWHUANBWSKAOOWEJXYHZBMMFEPIEYBGPFBYTNJINPLPENXZDVIZVGOJUPTDLDEGGPRUOBRWOIYCENGVSNWGFTURECKXHYVNYRXFFIBAXUJTVSYHAZOZTL");

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
    msg.setTimeStamp(0.916343140958);
    msg.setSource(13534U);
    msg.setSourceEntity(0U);
    msg.setDestination(28052U);
    msg.setDestinationEntity(59U);
    msg.timeout = 38410U;
    msg.lat = 0.599746045569;
    msg.lon = 0.301330707004;
    msg.z = 0.254886666268;
    msg.z_units = 61U;
    msg.speed = 0.00846479611389;
    msg.speed_units = 117U;
    msg.custom.assign("RLKNNWTEDHUVJRKIMLNANZKWPFVTYGUBOZCHFXMYSWJISPWXEOATVXRGGQSBBGTCJKZUOEUYBTHKNKAQZTFSFTYODKGJUMOYFXWFYZNDQIYVUWCG");

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
    msg.setTimeStamp(0.367269198757);
    msg.setSource(45633U);
    msg.setSourceEntity(170U);
    msg.setDestination(63598U);
    msg.setDestinationEntity(17U);
    msg.timeout = 14885U;
    msg.lat = 0.539797752768;
    msg.lon = 0.134187324195;
    msg.z = 0.576695856987;
    msg.z_units = 24U;
    msg.speed = 0.101685228403;
    msg.speed_units = 2U;
    msg.custom.assign("KYKLGSFXWQWWVNCKWIHBZZXPTUEQDDALAYBLPCVVVJNIYBSDOLFNEMCNBYOOTXSUAPCZGKHYEVJRWAIEGIVCFFKTNYSHJCSROXETOANFWDQQNMTGTIIPXBGHDBPS");

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
    msg.setTimeStamp(0.847677529939);
    msg.setSource(31486U);
    msg.setSourceEntity(151U);
    msg.setDestination(18924U);
    msg.setDestinationEntity(152U);
    msg.x = 0.326307921289;
    msg.y = 0.0847915025331;
    msg.z = 0.699365209715;

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
    msg.setTimeStamp(0.854614167506);
    msg.setSource(548U);
    msg.setSourceEntity(244U);
    msg.setDestination(44229U);
    msg.setDestinationEntity(129U);
    msg.x = 0.67730944938;
    msg.y = 0.156312435802;
    msg.z = 0.305037008549;

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
    msg.setTimeStamp(0.961993771611);
    msg.setSource(55082U);
    msg.setSourceEntity(162U);
    msg.setDestination(25063U);
    msg.setDestinationEntity(187U);
    msg.x = 0.980364686843;
    msg.y = 0.68366453792;
    msg.z = 0.680408355482;

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
    msg.setTimeStamp(0.542049151204);
    msg.setSource(25946U);
    msg.setSourceEntity(62U);
    msg.setDestination(54824U);
    msg.setDestinationEntity(30U);
    msg.timeout = 26563U;
    msg.lat = 0.522112677366;
    msg.lon = 0.0221505613632;
    msg.z = 0.644494290995;
    msg.z_units = 15U;
    msg.amplitude = 0.95727892652;
    msg.pitch = 0.924381931979;
    msg.speed = 0.19701911092;
    msg.speed_units = 132U;
    msg.custom.assign("GOBKXDJLOWAGWGPPKRVFCNKCSRKEZTHKIRQXOHBDMOFMMNBZMAELJZLLTDYQXSBPJJVHHDXEIIQZFVIRV");

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
    msg.setTimeStamp(0.979621628014);
    msg.setSource(44390U);
    msg.setSourceEntity(154U);
    msg.setDestination(9852U);
    msg.setDestinationEntity(42U);
    msg.timeout = 3135U;
    msg.lat = 0.3535819142;
    msg.lon = 0.672379255049;
    msg.z = 0.0322565721481;
    msg.z_units = 65U;
    msg.amplitude = 0.722953078866;
    msg.pitch = 0.940481810337;
    msg.speed = 0.422368446442;
    msg.speed_units = 151U;
    msg.custom.assign("XEHVLQTIOVPIIGBXNNNYSJKYAQRRZEUEJOFTUOBWMDBCFVJSVAWZTUCBQARAOQZPOSXMKKFUPU");

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
    msg.setTimeStamp(0.845504392836);
    msg.setSource(14283U);
    msg.setSourceEntity(163U);
    msg.setDestination(27123U);
    msg.setDestinationEntity(154U);
    msg.timeout = 53919U;
    msg.lat = 0.881858287839;
    msg.lon = 0.892683941333;
    msg.z = 0.623124754123;
    msg.z_units = 87U;
    msg.amplitude = 0.310415329495;
    msg.pitch = 0.800161561053;
    msg.speed = 0.459814557384;
    msg.speed_units = 22U;
    msg.custom.assign("MUPIKDZQEYNTZOMCQQFHRMDKZGYPBYAAKGDAAUEWKFCRIGYFGLSJLJGMQURGLHRPQKCLNAXUUJHTYQCGCOZTBSPYVEWVSTRRRFSZPDPMWXOWOMXJOVJB");

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
    msg.setTimeStamp(0.216114562146);
    msg.setSource(41822U);
    msg.setSourceEntity(3U);
    msg.setDestination(13517U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.612884704424);
    msg.setSource(13598U);
    msg.setSourceEntity(192U);
    msg.setDestination(63053U);
    msg.setDestinationEntity(46U);

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
    msg.setTimeStamp(0.461143147766);
    msg.setSource(15413U);
    msg.setSourceEntity(96U);
    msg.setDestination(44399U);
    msg.setDestinationEntity(58U);

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
    msg.setTimeStamp(0.637994111836);
    msg.setSource(4927U);
    msg.setSourceEntity(53U);
    msg.setDestination(11349U);
    msg.setDestinationEntity(0U);
    msg.lat = 0.75371143686;
    msg.lon = 0.942501568142;
    msg.z = 0.620907960678;
    msg.z_units = 143U;
    msg.radius = 0.827873980512;
    msg.duration = 28148U;
    msg.speed = 0.263043075578;
    msg.speed_units = 22U;
    msg.custom.assign("SKKSTRTZKOXUIJRGBMMPHARZCYXZLVBWJQWEHMKOXKLSSWKDNBLBVYUOPMOSPDQJNXYXGBIBSZMUISSPVPRWAWJDHQAUMCAFYHACLIUKV");

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
    msg.setTimeStamp(0.364911224282);
    msg.setSource(11276U);
    msg.setSourceEntity(50U);
    msg.setDestination(24222U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.275134545347;
    msg.lon = 0.420879114335;
    msg.z = 0.726227653679;
    msg.z_units = 7U;
    msg.radius = 0.496564730429;
    msg.duration = 19614U;
    msg.speed = 0.775300191384;
    msg.speed_units = 78U;
    msg.custom.assign("GCJJYAPGRJMXVIXAVNMQSSMJVNSGKPPUZXTUUPKBYCPWAUEQYLIEHAKRTIQXTYPBZRHCNJJVMONOWFWOWDOVDRVKELLDWOAXIWKNCXMTWZDAFFTF");

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
    msg.setTimeStamp(0.131255379996);
    msg.setSource(23111U);
    msg.setSourceEntity(246U);
    msg.setDestination(16566U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.735832592388;
    msg.lon = 0.455994817194;
    msg.z = 0.456533714624;
    msg.z_units = 207U;
    msg.radius = 0.828601561608;
    msg.duration = 22375U;
    msg.speed = 0.047639635603;
    msg.speed_units = 242U;
    msg.custom.assign("YKKFMHQWKWPYVTCPIBHXOXEYOXEVDMITGKAOFCKGLTSGANEAMMFZBVQKRHMCFZHPSMQQWPTOHWZBWHZKGDMAHUOUFEIDHLEXNFTUJAGJLUDQDIUSVQBCURZPONRXYRCEVWYFVBRJAGRBTZC");

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
    msg.setTimeStamp(0.636827444816);
    msg.setSource(59566U);
    msg.setSourceEntity(12U);
    msg.setDestination(35022U);
    msg.setDestinationEntity(240U);
    msg.timeout = 44746U;
    msg.flags = 108U;
    msg.lat = 0.950085596734;
    msg.lon = 0.385933333288;
    msg.start_z = 0.569702213222;
    msg.start_z_units = 41U;
    msg.end_z = 0.449495557416;
    msg.end_z_units = 102U;
    msg.radius = 0.244067379461;
    msg.speed = 0.345883135575;
    msg.speed_units = 23U;
    msg.custom.assign("SKMGXBNXTXIISNTUGEWZIEPYHWDVYAJYANULZDIOPHFHFCRPTBFVEIWRHIEIYBQ");

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
    msg.setTimeStamp(0.227538976401);
    msg.setSource(6657U);
    msg.setSourceEntity(147U);
    msg.setDestination(45778U);
    msg.setDestinationEntity(197U);
    msg.timeout = 57666U;
    msg.flags = 53U;
    msg.lat = 0.757778169168;
    msg.lon = 0.36521508118;
    msg.start_z = 0.525070766004;
    msg.start_z_units = 212U;
    msg.end_z = 0.170514033665;
    msg.end_z_units = 243U;
    msg.radius = 0.923546703121;
    msg.speed = 0.743697480805;
    msg.speed_units = 77U;
    msg.custom.assign("WMJHKOYAKYMTZFFXMBBRGNWDQMSYFSPBAVIOOVDZWMUQUPEESISSRXMYYXCEUFXXHX");

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
    msg.setTimeStamp(0.0581623865399);
    msg.setSource(48478U);
    msg.setSourceEntity(179U);
    msg.setDestination(46806U);
    msg.setDestinationEntity(177U);
    msg.timeout = 48395U;
    msg.flags = 208U;
    msg.lat = 0.145569965399;
    msg.lon = 0.0359502406817;
    msg.start_z = 0.156797677223;
    msg.start_z_units = 45U;
    msg.end_z = 0.454305373813;
    msg.end_z_units = 178U;
    msg.radius = 0.123630015807;
    msg.speed = 0.706415621294;
    msg.speed_units = 213U;
    msg.custom.assign("WJVFMJVUBYAOXIQDROMBBBPJFWSMAPMYAFSEHPQSGCUMSCWDJFKNSVLNKTRAQWJVHBATOPFUSVTDRXSYNQKCDDXKQIJPWNDUYVVXNYAIQYBVVHBCKZCTXOZMHKRLZTICITYCPHIBZEROZLRLNVGJGGUPWECKKLEPEQGOXLSEWHOYOUREFLMDWEYUCZHNZFPFGZQHNDATBZEPRL");

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
    msg.setTimeStamp(0.0259959138986);
    msg.setSource(3083U);
    msg.setSourceEntity(12U);
    msg.setDestination(699U);
    msg.setDestinationEntity(171U);
    msg.timeout = 25363U;
    msg.lat = 0.703636248293;
    msg.lon = 0.0720580605174;
    msg.z = 0.0193136895633;
    msg.z_units = 183U;
    msg.speed = 0.122851719204;
    msg.speed_units = 33U;
    msg.custom.assign("ZJAEQDJIGKEDXMKYQRMRWGHXOUKJUVFLIUMASAZGDSLRZBCGFMUMMCBPFNRLVZEYRUHFSOAKIWIKONAFDKRNIVTHXJSLPFDNQLWALVEIDFHPPBZTVSNYWKYXVRQJULJJNUVXTBYDSONZEGEQNMARPJODZUASBYMJCHKGVLUWVEPTCYGBNLQCOTABSZH");

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
    msg.setTimeStamp(0.402316288575);
    msg.setSource(10632U);
    msg.setSourceEntity(208U);
    msg.setDestination(48671U);
    msg.setDestinationEntity(87U);
    msg.timeout = 21870U;
    msg.lat = 0.492100207338;
    msg.lon = 0.968500022427;
    msg.z = 0.295960499477;
    msg.z_units = 186U;
    msg.speed = 0.203426578495;
    msg.speed_units = 50U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.308723967894;
    tmp_msg_0.y = 0.701549239506;
    tmp_msg_0.z = 0.189907220207;
    tmp_msg_0.t = 0.85464651541;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TCPITQWVLFSYIFXTWSARNYRSKDNXVACBOKOGVTOCKBEKPRDPJKXNIAWEUVHDGZGPZLCYHCZUNCTGPERXSLWERSRHNMXYEASGSDUVQHHYNZOFNFGCDDGFWQBKFMTVNRUWTUAOFOOLKIMJORHTZJCQXMHQLZZCYHYIDYAVBDVPFGEBWJSBABLK");

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
    msg.setTimeStamp(0.265097059682);
    msg.setSource(25218U);
    msg.setSourceEntity(228U);
    msg.setDestination(62185U);
    msg.setDestinationEntity(230U);
    msg.timeout = 29418U;
    msg.lat = 0.0851116795845;
    msg.lon = 0.355322501451;
    msg.z = 0.826615939612;
    msg.z_units = 130U;
    msg.speed = 0.215220762257;
    msg.speed_units = 205U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.761648235734;
    tmp_msg_0.y = 0.996081541461;
    tmp_msg_0.z = 0.203827922941;
    tmp_msg_0.t = 0.524858517624;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RWOIJBBRGRLCHDLWQJFSKMHRDRWFNYBLXQWKQGJGSGOGYEVTUZJGXLKSNXTTLCKAJSOORLDZLCYFWUQWINZJXDIBXEMFNPVPTYUXMVOQRHDFWCTGPBXQBDIHXHSYIIAOUKVCLRPFPAXSEAWIEGZNZTPMCSLPJAZZOWQZETTRNKEMYBPHVNJQVKMUCUBVJEEVEIVPXJMYDADOFRZPDYIKHKUIKTUUWCHEMNBVSBCHMFUFMYANSHSZNF");

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
    msg.setTimeStamp(0.420708626335);
    msg.setSource(10201U);
    msg.setSourceEntity(178U);
    msg.setDestination(15458U);
    msg.setDestinationEntity(186U);
    msg.x = 0.589826341657;
    msg.y = 0.742435965324;
    msg.z = 0.648981657558;
    msg.t = 0.284009876553;

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
    msg.setTimeStamp(0.916036041466);
    msg.setSource(17535U);
    msg.setSourceEntity(99U);
    msg.setDestination(48415U);
    msg.setDestinationEntity(82U);
    msg.x = 0.363911872657;
    msg.y = 0.980503756675;
    msg.z = 0.495573396137;
    msg.t = 0.817298434002;

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
    msg.setTimeStamp(0.743548486406);
    msg.setSource(25254U);
    msg.setSourceEntity(52U);
    msg.setDestination(44458U);
    msg.setDestinationEntity(19U);
    msg.x = 0.833274209008;
    msg.y = 0.907544595735;
    msg.z = 0.330468953169;
    msg.t = 0.153224981302;

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
    msg.setTimeStamp(0.0807733420174);
    msg.setSource(33283U);
    msg.setSourceEntity(183U);
    msg.setDestination(26822U);
    msg.setDestinationEntity(133U);
    msg.timeout = 36309U;
    msg.name.assign("VHCDRYEBRYYBKABOAUMUWZFOHKOAGSMPUCTBNIRKFQKLXUSQRLMCRSEJLGDHBUCJDZSTIJLKKWOJTKZCEZDCNCBZFHNLWZFSQTWAWVWZJ");
    msg.custom.assign("ARZUDCLGKPMSATYTVFQFUONMUTCHEGOTZKTRVPLZXZJKLPSNVPSKUAPDHYEHZDMQQNDZLBNDWHAIIVCWYEQKKURINXGZZGQJNSCMBFQWESIANOXVQCLBWBULVPWUWJJFFKCBGJOYDLBMOHGIRRVVJBGXOPCMOIFWDOMEUYNHBHPRYAXQJOQDLIMKGEIOISGFJAWHXCLWYRAPEFPYZNTIGXVDQ");

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
    msg.setTimeStamp(0.965385459548);
    msg.setSource(22221U);
    msg.setSourceEntity(18U);
    msg.setDestination(10890U);
    msg.setDestinationEntity(73U);
    msg.timeout = 34983U;
    msg.name.assign("VCGXZXDNAAIVHQBJCDALFFPKWKTOZFGHFGUSMLXTKBXPZXNNECAYUWOJIEIIHZWOEDNPJLSFACSSDUENMDDJROSAN");
    msg.custom.assign("WDCFDJQSTMJNXJECSHIZWZKYRQBGGKPMQMVJCEWREXPYWMVOSGAMDTIZUOTPPBKXHSLTVXESWPQAIRFHBITAQUTWEXSNGULWJUQRYBNCZDZVRLFTGINUCWDMLQKNHHJPVYFHSKWFOAYAZNLUIKCXUVEULRJXJAMBBNJRXTHIICELFQEGCHFHYLXNCOYLEKVODYUGZOYJQRY");

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
    msg.setTimeStamp(0.474803003735);
    msg.setSource(17172U);
    msg.setSourceEntity(186U);
    msg.setDestination(46401U);
    msg.setDestinationEntity(114U);
    msg.timeout = 5693U;
    msg.name.assign("PDQHDVGMZBRQKFWOXAIKZFLUZOMCHPJRJIPFKRMVLNQUCWWQPKFLYUUZGZJTNTVAFKBPUECSYZSECRDWXRXQAWQOXDDSTINXLCGYSRWBUCQDLZQALBGGRJTTTPBKACGHOUHOTBXZHPVXIKVNJ");
    msg.custom.assign("IHWAOSXDNNKYHGFENNGFBDFKGKOGZBHJQMBKMHDLWCKQXUTVYIGCBUKEOLEPPUOXWDALSRAIZQWGTFPUZLETUQIVHVIJAPARJMRPRQTJQUFJNNVFBEUAIXBMJUCXSHBCZCLIOHYRYPGBSTLRWETOCRVNCXADSPMOIKMMCHAZYXKDMDIWWUQNLDDQQJYVXERTYZCZOYLPCFOILYRDUOGHJBTSTSAEZKEKPJMVAWSGWFEZVP");

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
    msg.setTimeStamp(0.944949784831);
    msg.setSource(5633U);
    msg.setSourceEntity(93U);
    msg.setDestination(31810U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.591189563318;
    msg.lon = 0.167562758133;
    msg.z = 0.119387732748;
    msg.z_units = 160U;
    msg.speed = 0.249145732847;
    msg.speed_units = 63U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.829437163411;
    tmp_msg_0.y = 0.720758687477;
    tmp_msg_0.z = 0.653452969112;
    tmp_msg_0.t = 0.287206020536;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.188835183909;
    msg.custom.assign("TWAPIQRUKNDRCUFJRBBHAZAHDNRHLPYHAXNEQVXWGHYZPLDMFYQAZQBLZUWJJNVQPVOCEPJXIGLFKXONGVBSLXXJSMKCAKQIUGN");

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
    msg.setTimeStamp(0.982041179398);
    msg.setSource(41473U);
    msg.setSourceEntity(87U);
    msg.setDestination(61284U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.456787248349;
    msg.lon = 0.57878589968;
    msg.z = 0.88978290984;
    msg.z_units = 24U;
    msg.speed = 0.561435613836;
    msg.speed_units = 247U;
    msg.start_time = 0.785435916549;
    msg.custom.assign("GAPEQOWFDFARFBNDXGDCPLVLYYSHAODGKHNCXDT");

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
    msg.setTimeStamp(0.878040555372);
    msg.setSource(16162U);
    msg.setSourceEntity(21U);
    msg.setDestination(3683U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.511005514316;
    msg.lon = 0.664699204406;
    msg.z = 0.87979833693;
    msg.z_units = 84U;
    msg.speed = 0.205423539523;
    msg.speed_units = 81U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.735578202917;
    tmp_msg_0.y = 0.672939510868;
    tmp_msg_0.z = 0.556065132238;
    tmp_msg_0.t = 0.857990324811;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.77258336383;
    msg.custom.assign("ROKPNFYGEXDTFTKMFJDADQMNBEZRTEUAWSFPCVTAHOJOLUHGMOQQUKUQVYSPXXRIQNJNGCJPHFHXSTAUESIEANSURAILCTJYUWQMIXYLTBEBZDPTGYXCHGIUHIDYOBYXMSXR");

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
    msg.setTimeStamp(0.907756659465);
    msg.setSource(48361U);
    msg.setSourceEntity(81U);
    msg.setDestination(65499U);
    msg.setDestinationEntity(185U);
    msg.vid = 11937U;
    msg.off_x = 0.745146764736;
    msg.off_y = 0.484307114127;
    msg.off_z = 0.693638820713;

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
    msg.setTimeStamp(0.655808719466);
    msg.setSource(59025U);
    msg.setSourceEntity(25U);
    msg.setDestination(63627U);
    msg.setDestinationEntity(64U);
    msg.vid = 29933U;
    msg.off_x = 0.850273617447;
    msg.off_y = 0.330505123276;
    msg.off_z = 0.0656285261912;

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
    msg.setTimeStamp(0.122218304719);
    msg.setSource(7077U);
    msg.setSourceEntity(162U);
    msg.setDestination(62160U);
    msg.setDestinationEntity(198U);
    msg.vid = 17777U;
    msg.off_x = 0.969969673516;
    msg.off_y = 0.291303612069;
    msg.off_z = 0.102764618698;

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
    msg.setTimeStamp(0.623821250232);
    msg.setSource(9160U);
    msg.setSourceEntity(12U);
    msg.setDestination(22444U);
    msg.setDestinationEntity(30U);

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
    msg.setTimeStamp(0.759548412948);
    msg.setSource(20636U);
    msg.setSourceEntity(90U);
    msg.setDestination(28617U);
    msg.setDestinationEntity(43U);

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
    msg.setTimeStamp(0.609854849151);
    msg.setSource(24332U);
    msg.setSourceEntity(230U);
    msg.setDestination(23521U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.495155509924);
    msg.setSource(64628U);
    msg.setSourceEntity(204U);
    msg.setDestination(48502U);
    msg.setDestinationEntity(76U);
    msg.mid = 32638U;

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
    msg.setTimeStamp(0.0180696356283);
    msg.setSource(55661U);
    msg.setSourceEntity(236U);
    msg.setDestination(16455U);
    msg.setDestinationEntity(78U);
    msg.mid = 4670U;

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
    msg.setTimeStamp(0.307680251228);
    msg.setSource(45072U);
    msg.setSourceEntity(89U);
    msg.setDestination(46151U);
    msg.setDestinationEntity(209U);
    msg.mid = 19457U;

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
    msg.setTimeStamp(0.386890679691);
    msg.setSource(7420U);
    msg.setSourceEntity(23U);
    msg.setDestination(58846U);
    msg.setDestinationEntity(188U);
    msg.state = 3U;
    msg.eta = 12012U;
    msg.info.assign("XMNAQJIGYLJUTFFGAPNAYZULMMNCTVGORITTRYWM");

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
    msg.setTimeStamp(0.865355075519);
    msg.setSource(11623U);
    msg.setSourceEntity(73U);
    msg.setDestination(8730U);
    msg.setDestinationEntity(198U);
    msg.state = 53U;
    msg.eta = 23092U;
    msg.info.assign("HEPSSBPOIWXJDGRKJJYFCEKYDCVFOFAPNZSPUPJJPBYAVZQDYZVDAWPDLMGLTXSRVFTQBIBEGEAHSNMJUOSVZTORCKNNDHGTOBCRTRW");

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
    msg.setTimeStamp(0.368506364897);
    msg.setSource(51992U);
    msg.setSourceEntity(52U);
    msg.setDestination(3401U);
    msg.setDestinationEntity(102U);
    msg.state = 55U;
    msg.eta = 11711U;
    msg.info.assign("AKGKWISXKXGCRDUOHVFSUZT");

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
    msg.setTimeStamp(0.410648316687);
    msg.setSource(24387U);
    msg.setSourceEntity(101U);
    msg.setDestination(50544U);
    msg.setDestinationEntity(68U);
    msg.system = 55506U;
    msg.duration = 57078U;
    msg.speed = 0.767404068112;
    msg.speed_units = 224U;
    msg.x = 0.458483892629;
    msg.y = 0.270998649807;
    msg.z = 0.27425211456;
    msg.z_units = 111U;

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
    msg.setTimeStamp(0.338376133074);
    msg.setSource(53486U);
    msg.setSourceEntity(223U);
    msg.setDestination(26039U);
    msg.setDestinationEntity(238U);
    msg.system = 24106U;
    msg.duration = 61412U;
    msg.speed = 0.65382952493;
    msg.speed_units = 124U;
    msg.x = 0.877515139146;
    msg.y = 0.223519426369;
    msg.z = 0.171598849992;
    msg.z_units = 219U;

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
    msg.setTimeStamp(0.21827885315);
    msg.setSource(40621U);
    msg.setSourceEntity(165U);
    msg.setDestination(22133U);
    msg.setDestinationEntity(55U);
    msg.system = 3078U;
    msg.duration = 8953U;
    msg.speed = 0.745129210079;
    msg.speed_units = 86U;
    msg.x = 0.864531514367;
    msg.y = 0.122003099905;
    msg.z = 0.901929965187;
    msg.z_units = 150U;

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
    msg.setTimeStamp(0.251685502212);
    msg.setSource(58620U);
    msg.setSourceEntity(214U);
    msg.setDestination(15043U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.325934780782;
    msg.lon = 0.203430096469;
    msg.speed = 0.727831073535;
    msg.speed_units = 173U;
    msg.duration = 25291U;
    msg.sys_a = 14607U;
    msg.sys_b = 21941U;
    msg.move_threshold = 0.891318684041;

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
    msg.setTimeStamp(0.510181721608);
    msg.setSource(56113U);
    msg.setSourceEntity(40U);
    msg.setDestination(30113U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.363175385209;
    msg.lon = 0.322179176188;
    msg.speed = 0.689494851827;
    msg.speed_units = 203U;
    msg.duration = 26749U;
    msg.sys_a = 21422U;
    msg.sys_b = 18842U;
    msg.move_threshold = 0.0877423096347;

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
    msg.setTimeStamp(0.507587394958);
    msg.setSource(10072U);
    msg.setSourceEntity(100U);
    msg.setDestination(53967U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.44815664534;
    msg.lon = 0.480766535801;
    msg.speed = 0.834849096201;
    msg.speed_units = 253U;
    msg.duration = 13284U;
    msg.sys_a = 17471U;
    msg.sys_b = 51380U;
    msg.move_threshold = 0.189946679206;

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
    msg.setTimeStamp(0.581385998013);
    msg.setSource(44515U);
    msg.setSourceEntity(58U);
    msg.setDestination(23686U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.958293431417;
    msg.lon = 0.828917992677;
    msg.z = 0.548005404713;
    msg.z_units = 231U;
    msg.speed = 0.752537346277;
    msg.speed_units = 244U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0504513588725;
    tmp_msg_0.lon = 0.813544783421;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("MROFZOPVIHVAQKRPDKMVABCMPAGEWGZCTNXQEJRAEXBUWENYONBXYCQLPPCXOYAKXUOFJGBVWGLCVZBMGUINXDREIPHEUGNMATDFZLVXTRHSFCSEOYIKUQLOROFQYOMICRWAJMZUBAFTRHWDOZYZDGZTJJVJCLWJXSBDHJUKEWVKDSTUWDUBSREZNPHHFRNMHDLKIYGFKQBHZYTLIGISTIC");

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
    msg.setTimeStamp(0.89176478845);
    msg.setSource(57043U);
    msg.setSourceEntity(91U);
    msg.setDestination(48088U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.141208458817;
    msg.lon = 0.410415650746;
    msg.z = 0.828853341747;
    msg.z_units = 209U;
    msg.speed = 0.498236961268;
    msg.speed_units = 157U;
    msg.custom.assign("UWBXGLEOICCXSMYKVSTSGWRWSQHOIDRNQURNYLUXINOFSFDYNKSXQOCJQCJTIQARZMQDYPWNAIGCVZMZBTRXUFLRPALGHNGOQMKXCIYWYRWTIUZCGUORKVFFPBZYXIPSLXUBBHYCVDACAEZKPJZERKZWEUMVPLQSLOREJVWHBXPVTNFBSQEHPKZHTHAIHUTTLKFGDMFJTNGJJNIQHMLPXCVKLEVVDKDJOOMDZHJJEMDSAYOAUAA");

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
    msg.setTimeStamp(0.259899429769);
    msg.setSource(44947U);
    msg.setSourceEntity(205U);
    msg.setDestination(51014U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.748552099369;
    msg.lon = 0.614977840298;
    msg.z = 0.981971353454;
    msg.z_units = 213U;
    msg.speed = 0.727605772685;
    msg.speed_units = 157U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.487012994184;
    tmp_msg_0.lon = 0.635854018695;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("ILCLOOYVMNDQECXYAHGOXEARVHMVOBPSXOBZKAZYTUYXQTFRPRSPVSYKNDKGWGHBMCIXMYTZTIWEGULYZIEJGINB");

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
    msg.setTimeStamp(0.0978825616861);
    msg.setSource(25786U);
    msg.setSourceEntity(128U);
    msg.setDestination(23795U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.904766889339;
    msg.lon = 0.714861938402;

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
    msg.setTimeStamp(0.35223976161);
    msg.setSource(49991U);
    msg.setSourceEntity(162U);
    msg.setDestination(28570U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.188041550739;
    msg.lon = 0.00822936293705;

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
    msg.setTimeStamp(0.285579388767);
    msg.setSource(12358U);
    msg.setSourceEntity(160U);
    msg.setDestination(37791U);
    msg.setDestinationEntity(115U);
    msg.lat = 0.311068336588;
    msg.lon = 0.270592894905;

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
    msg.setTimeStamp(0.0534038201077);
    msg.setSource(35053U);
    msg.setSourceEntity(62U);
    msg.setDestination(44210U);
    msg.setDestinationEntity(133U);
    msg.timeout = 35782U;
    msg.lat = 0.717218282084;
    msg.lon = 0.58842049968;
    msg.z = 0.485086353511;
    msg.z_units = 33U;
    msg.pitch = 0.84238066139;
    msg.amplitude = 0.761144680095;
    msg.duration = 14184U;
    msg.speed = 0.947214842862;
    msg.speed_units = 119U;
    msg.radius = 0.69060230111;
    msg.direction = 73U;
    msg.custom.assign("WYIJIZHNTXTBKCPRYITPYBGICQSZEUTJBMN");

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
    msg.setTimeStamp(0.306686410536);
    msg.setSource(52923U);
    msg.setSourceEntity(89U);
    msg.setDestination(41246U);
    msg.setDestinationEntity(61U);
    msg.timeout = 12205U;
    msg.lat = 0.0045068870426;
    msg.lon = 0.968009132693;
    msg.z = 0.423359188944;
    msg.z_units = 253U;
    msg.pitch = 0.399789113318;
    msg.amplitude = 0.723557687636;
    msg.duration = 42936U;
    msg.speed = 0.728393918435;
    msg.speed_units = 217U;
    msg.radius = 0.506695165365;
    msg.direction = 124U;
    msg.custom.assign("AYECJHWUQHWMIOOBUVWVZOAEMNLZMYXDOOZXHUDU");

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
    msg.setTimeStamp(0.156335244219);
    msg.setSource(39472U);
    msg.setSourceEntity(167U);
    msg.setDestination(38263U);
    msg.setDestinationEntity(186U);
    msg.timeout = 4389U;
    msg.lat = 0.556445527642;
    msg.lon = 0.0490668718713;
    msg.z = 0.847917164951;
    msg.z_units = 125U;
    msg.pitch = 0.474336634155;
    msg.amplitude = 0.407405901161;
    msg.duration = 40059U;
    msg.speed = 0.454742403933;
    msg.speed_units = 230U;
    msg.radius = 0.841593626519;
    msg.direction = 245U;
    msg.custom.assign("DOJXNEGWXJIXJTAVHIUUOERWPPJYBWWYXAUGAVYKHRZFVJEMQOSVGCKYYLCNQUPKNBUUOIQBLZSYMEVOCDBUZRNZOLFCFLQLZCKQQEYTWTATIJJPTVLTPC");

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
    IMC::FollowReference msg;
    msg.setTimeStamp(0.714698713869);
    msg.setSource(37869U);
    msg.setSourceEntity(95U);
    msg.setDestination(44069U);
    msg.setDestinationEntity(58U);
    msg.control_src = 23440U;
    msg.control_ent = 144U;
    msg.timeout = 0.592913700218;
    msg.loiter_radius = 0.284608744787;
    msg.altitude_interval = 0.16170396089;

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
    msg.setTimeStamp(0.725946964721);
    msg.setSource(39672U);
    msg.setSourceEntity(239U);
    msg.setDestination(61495U);
    msg.setDestinationEntity(236U);
    msg.control_src = 44118U;
    msg.control_ent = 174U;
    msg.timeout = 0.142550249557;
    msg.loiter_radius = 0.153720228637;
    msg.altitude_interval = 0.734404369635;

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
    msg.setTimeStamp(0.995542169012);
    msg.setSource(59593U);
    msg.setSourceEntity(106U);
    msg.setDestination(64180U);
    msg.setDestinationEntity(83U);
    msg.control_src = 59766U;
    msg.control_ent = 117U;
    msg.timeout = 0.712357551716;
    msg.loiter_radius = 0.657785818077;
    msg.altitude_interval = 0.680422663702;

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
    msg.setTimeStamp(0.206666048501);
    msg.setSource(64459U);
    msg.setSourceEntity(87U);
    msg.setDestination(33630U);
    msg.setDestinationEntity(100U);
    msg.flags = 153U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.585808101666;
    tmp_msg_0.speed_units = 43U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.730031973075;
    tmp_msg_1.z_units = 188U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.125080180526;
    msg.lon = 0.441967408026;
    msg.radius = 0.447843764925;

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
    msg.setTimeStamp(0.430735614989);
    msg.setSource(24941U);
    msg.setSourceEntity(208U);
    msg.setDestination(4028U);
    msg.setDestinationEntity(103U);
    msg.flags = 136U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.926663960163;
    tmp_msg_0.speed_units = 63U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.957635347569;
    tmp_msg_1.z_units = 190U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.37490860788;
    msg.lon = 0.822833032777;
    msg.radius = 0.0699329810191;

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
    msg.setTimeStamp(0.76942723637);
    msg.setSource(48384U);
    msg.setSourceEntity(203U);
    msg.setDestination(44974U);
    msg.setDestinationEntity(188U);
    msg.flags = 33U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.260254230725;
    tmp_msg_0.speed_units = 249U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.398822658864;
    tmp_msg_1.z_units = 128U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.679815384368;
    msg.lon = 0.887318526111;
    msg.radius = 0.123547267864;

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
    msg.setTimeStamp(0.446618919145);
    msg.setSource(34703U);
    msg.setSourceEntity(216U);
    msg.setDestination(25065U);
    msg.setDestinationEntity(225U);
    msg.control_src = 43100U;
    msg.control_ent = 81U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 148U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.704117795961;
    tmp_tmp_msg_0_0.speed_units = 44U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.0185658989085;
    tmp_tmp_msg_0_1.z_units = 19U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.2508246836;
    tmp_msg_0.lon = 0.831958942102;
    tmp_msg_0.radius = 0.9823670373;
    msg.reference.set(tmp_msg_0);
    msg.state = 149U;
    msg.proximity = 134U;

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
    msg.setTimeStamp(0.495584164947);
    msg.setSource(11080U);
    msg.setSourceEntity(209U);
    msg.setDestination(10609U);
    msg.setDestinationEntity(82U);
    msg.control_src = 38443U;
    msg.control_ent = 197U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 124U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.686006976996;
    tmp_tmp_msg_0_0.speed_units = 69U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.381615286206;
    tmp_tmp_msg_0_1.z_units = 50U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.197212321047;
    tmp_msg_0.lon = 0.332729596843;
    tmp_msg_0.radius = 0.650532248243;
    msg.reference.set(tmp_msg_0);
    msg.state = 149U;
    msg.proximity = 193U;

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
    msg.setTimeStamp(0.82352088278);
    msg.setSource(15615U);
    msg.setSourceEntity(139U);
    msg.setDestination(17889U);
    msg.setDestinationEntity(238U);
    msg.control_src = 2536U;
    msg.control_ent = 100U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 82U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.63805894399;
    tmp_tmp_msg_0_0.speed_units = 166U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.000994270463081;
    tmp_tmp_msg_0_1.z_units = 190U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.892144530558;
    tmp_msg_0.lon = 0.295739785645;
    tmp_msg_0.radius = 0.0113691526031;
    msg.reference.set(tmp_msg_0);
    msg.state = 52U;
    msg.proximity = 215U;

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
    IMC::Formation msg;
    msg.setTimeStamp(0.855902708826);
    msg.setSource(30829U);
    msg.setSourceEntity(179U);
    msg.setDestination(50544U);
    msg.setDestinationEntity(243U);
    msg.formation_name.assign("HEVXQKIQJVVJCXSLNMLPPGJETIYSIUYNKOMFXKYEWVBGHAGZPHOOQCABILUADCA");
    msg.group_name.assign("RGUISMCHEZEYKBLMWPKQJPTNDZVMTYXXGUNVFMALIZAGHJCHSRIKLBGBLBOWEFIVMFEKPHYOWMVSKJGZNHNXPQSSNWTYDECAKYZJOPFVFLSFBQEHSVEPMYIDTLQLYOKXCBUJRCGUTORWBAAHPL");
    msg.plan_id.assign("MDGEOVSEABIMJZSUZCPPYBUBGFKNIOEHSQQJGIFNTIRNPJAHPBRDAUDYZLOGRBKMGVFERVAJDZZINBFTBXFSGVWWXTXJXSPYSDKHQQISOQWZXPWYUFTLJLTAMHNIYHOMZZAWCZXECNCLTBDHCLOUITLTCKYTRVTEWHPYMSZEQFM");
    msg.description.assign("OUXZYKVZDVVZHTMSXKFUTHYMFAZXMNIQKNNQQGNQPXSDCUFIWFVAZLEJHTXIGIWROCUEOBUMYHLXPEBGHQCFOVDPGILOLZRIISTGETUWURYPXGLWERTCAIZLUGPWFJSKBBJOBXCYWESOAQFBYYQAOVYJADARGRBZFMKEJMDNAJ");
    msg.reference_frame = 71U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 1464U;
    tmp_msg_0.off_x = 0.632862062387;
    tmp_msg_0.off_y = 0.0200457984933;
    tmp_msg_0.off_z = 0.501794434861;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_speed_min = 0.00281683669699;
    msg.leader_speed_max = 0.309898593212;
    msg.leader_bank_lim = 0.499072918261;
    msg.pos_sim_err_lim = 0.0837636745819;
    msg.pos_sim_err_wrn = 0.270247820589;
    msg.pos_sim_err_timeout = 19602U;
    msg.converg_max = 0.706418953461;
    msg.converg_timeout = 20777U;
    msg.comms_timeout = 44802U;
    msg.turb_lim = 0.989686465902;
    msg.custom.assign("WFHUKZJHPOXMTYOVRUAOHZTWSPAYZLHUWTBJUZEZGWJRHYFRPHMGHNYSPBNWDFVAJOLJHJMQUYAXTRBDMSWEXLKVMIVBAZPILFRONVAREBT");

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
    msg.setTimeStamp(0.942949275151);
    msg.setSource(19125U);
    msg.setSourceEntity(49U);
    msg.setDestination(2441U);
    msg.setDestinationEntity(198U);
    msg.formation_name.assign("NPDCCQPZULNAQWZLZTNNIJTACUN");
    msg.group_name.assign("CYVHVKLEGYVZAQCNXWQLZMHHVTFKCPMIBXRGOPGKOIOFFFQLDJKWEMXULUDCMDXRVRSGTKTZWGUONXHJJHBORBAJFCBALNK");
    msg.plan_id.assign("AKLCHZJWECJKJZGYSHBELRZAJUJNGOFSUGJQUYLEMTVGMERDQZEQXSQWKGUNPRCWWSPLCAQSEBHSIUWKPDQHOEZOOXRTXFYMRZTXVHYOBHPBKLQAWBYVIXGDYNLTTMHKPYIPOPLCMTUEQVEUNTMMVJZXNJHXONDDUSNADONDNBVTJCFGYMYIFDMCGZVKCFRBOXRGMSASBGSWKPIPTKIIVAQ");
    msg.description.assign("ZNVNWLNBWNUVSECGVQKYPIIPZGQPBWZRMPUUOCOGDQKOCTXWYFRHSFYCJKVALLVMALOKWZNDTAT");
    msg.reference_frame = 170U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 7822U;
    tmp_msg_0.off_x = 0.887172773437;
    tmp_msg_0.off_y = 0.298178606334;
    tmp_msg_0.off_z = 0.211871905906;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_speed_min = 0.285527453213;
    msg.leader_speed_max = 0.667951177498;
    msg.leader_bank_lim = 0.739510225388;
    msg.pos_sim_err_lim = 0.711984781205;
    msg.pos_sim_err_wrn = 0.806337847374;
    msg.pos_sim_err_timeout = 7429U;
    msg.converg_max = 0.521609663111;
    msg.converg_timeout = 28164U;
    msg.comms_timeout = 37708U;
    msg.turb_lim = 0.927966081745;
    msg.custom.assign("VLUZHAFXCBWOAOCOAPOUECSBEVKPCDLDWHFVLHWZXUQRIVNFQINEYQZSQUIGYKJDUJMCFYYICGHNYUFFWFSBTRPPHJOVIEKMXNQOLHTKTWSZWUVGSPMCYBZMPGKIJQAFXRZXGLJNYYCDRAUWONNIZCTGRJDEADDXSSRFLPORIWSPEEIJQMGGAZXTVYGEJLMQZXUILKDUZXBEFETBVMCMLTAJSVKRBQDHMPSNNRATTMYLBKDXAGRJHTBW");

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
    msg.setTimeStamp(0.656016901604);
    msg.setSource(15221U);
    msg.setSourceEntity(134U);
    msg.setDestination(51249U);
    msg.setDestinationEntity(20U);
    msg.formation_name.assign("HCJRWWBAGZFQKNHXUDGNUPVXLXWCIQNGCSVIZVPIMCWWYH");
    msg.group_name.assign("LHUKNIXMVUFXDEBVCEGRBYCVOVREXCOLRVODJBFVUWLSMBGPLYMEOPYWTZXFZTIRNGYLZPYSCQKCJZPFGRBEAHBRMEXAKTRJPEBWPAFKGSWZSOCRVO");
    msg.plan_id.assign("EYXKMRZGQUWEZZUFMLDIWPIQJMBKVFXEKBNOIBVJOHGTRLZHUNXINTFGRCYKOWFPPDTHQFVCYFNRPQJLPBOTAZPWELCSESKMWDUIDKUAXYSEYTERAQBSLAZDWUJOMKBTFYGQAUTL");
    msg.description.assign("IIJYGVUAUXUAPHPLPYGYOQOFYKIWGFSRRYFFCDDRHFKCJZSTPFEMHYBSGPROSJDDMLDYTHUMXXVITKAXQAOAOORSETILZPBTZHMWTRQJEEDWNGFKYPXUDUVRNZMQWNKLPOCFYFWMOZCTJEUJXECJWBIBQCJGCYEXLVXAZVENSBKXQDB");
    msg.reference_frame = 75U;
    msg.leader_speed_min = 0.93813599345;
    msg.leader_speed_max = 0.738256747737;
    msg.leader_bank_lim = 0.233308000948;
    msg.pos_sim_err_lim = 0.617057692689;
    msg.pos_sim_err_wrn = 0.538423355938;
    msg.pos_sim_err_timeout = 64588U;
    msg.converg_max = 0.876556695245;
    msg.converg_timeout = 11628U;
    msg.comms_timeout = 42649U;
    msg.turb_lim = 0.417269872214;
    msg.custom.assign("CMICBAALUDFTVPOAZWAITEVKSURBFPHTIOFLJSSYJOEVWPGUZPQKRRNKQLPOIEOCLGTWVCFFBXOJNASLRSEAFVKLMDCBQBTNECXTYMPJDSYMRVQIUOBZKEDUQWHJAKMJYBEIMNNNLDZHGHDLURMSMWGJFHWUXZHGQPKIVAVLTITHZNDISZNGYOEPMLKAUVMXSCYCAJCHKGXDISXQNZYVGJHQ");

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
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.822751116846);
    msg.setSource(65101U);
    msg.setSourceEntity(49U);
    msg.setDestination(20113U);
    msg.setDestinationEntity(173U);
    msg.dist_min = 0.747629618593;
    msg.ax_cmd = 0.269695524046;
    msg.ay_cmd = 0.00581658239997;
    msg.az_cmd = 0.827863287915;
    msg.ax_des = 0.957078878216;
    msg.ay_des = 0.305351573856;
    msg.az_des = 0.73762276273;
    msg.virt_err_x = 0.491779027626;
    msg.virt_err_y = 0.647264247028;
    msg.virt_err_z = 0.886615439416;
    msg.surf_fdbk_x = 0.782135243084;
    msg.surf_fdbk_y = 0.787730544391;
    msg.surf_fdbk_z = 0.223598486506;
    msg.surf_unkn_x = 0.0427187504258;
    msg.surf_unkn_y = 0.614422198217;
    msg.surf_unkn_z = 0.80532896495;
    msg.ss_x = 0.280219796317;
    msg.ss_y = 0.718757451731;
    msg.ss_z = 0.0492389562129;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("SVCKQYDUFNYEGOMTPQJIPJYYVFWRTUJKHCNALCPOBQHVBXDMTSVHGLBSPHNJXFVRXRZPIDIFXQHFSTACCGEOFNUZYWKXOIAZNNTMKDRIQLBGDJWMCOLMPOXBUKVBCMWCYOY");
    tmp_msg_0.dist = 0.341399543175;
    tmp_msg_0.err = 0.491763703537;
    tmp_msg_0.ctrl_imp = 0.722436681984;
    tmp_msg_0.rel_dir_x = 0.659655854861;
    tmp_msg_0.rel_dir_y = 0.972074671954;
    tmp_msg_0.rel_dir_z = 0.0501965030572;
    tmp_msg_0.err_x = 0.469470671784;
    tmp_msg_0.err_y = 0.108414190705;
    tmp_msg_0.err_z = 0.302841378527;
    tmp_msg_0.rf_err_x = 0.668250517407;
    tmp_msg_0.rf_err_y = 0.303848536335;
    tmp_msg_0.rf_err_z = 0.389398039268;
    tmp_msg_0.rf_err_vx = 0.937999048221;
    tmp_msg_0.rf_err_vy = 0.199642605972;
    tmp_msg_0.rf_err_vz = 0.843746505603;
    tmp_msg_0.ss_x = 0.861176567348;
    tmp_msg_0.ss_y = 0.606797055236;
    tmp_msg_0.ss_z = 0.496507809357;
    tmp_msg_0.virt_err_x = 0.108711191714;
    tmp_msg_0.virt_err_y = 0.488004601151;
    tmp_msg_0.virt_err_z = 0.609950027694;
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
    msg.setTimeStamp(0.334413133128);
    msg.setSource(26240U);
    msg.setSourceEntity(100U);
    msg.setDestination(7391U);
    msg.setDestinationEntity(206U);
    msg.dist_min = 0.164607493488;
    msg.ax_cmd = 0.144366796905;
    msg.ay_cmd = 0.0911689616153;
    msg.az_cmd = 0.961348410354;
    msg.ax_des = 0.741777203704;
    msg.ay_des = 0.304279225652;
    msg.az_des = 0.475109201768;
    msg.virt_err_x = 0.0961087820433;
    msg.virt_err_y = 0.276052514072;
    msg.virt_err_z = 0.993843380812;
    msg.surf_fdbk_x = 0.569719886276;
    msg.surf_fdbk_y = 0.197501058873;
    msg.surf_fdbk_z = 0.444442421143;
    msg.surf_unkn_x = 0.556650256483;
    msg.surf_unkn_y = 0.0903975467055;
    msg.surf_unkn_z = 0.0738753560581;
    msg.ss_x = 0.578002168433;
    msg.ss_y = 0.517080853695;
    msg.ss_z = 0.74464369332;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("TZQYWSWFYXSJCMFANQQUWXTYUQTGRGTNLJBSWDJFDSKDEDJDUHKPFZZTHTZVSWCKJINHEQLSQDQEZUCBZAUBJKHNLVGLKORUZHOEFIUPKIZOLGEJXUQLTXXKYRWMHEVVMELYANSGVRFYLNUBDHPCAQRYOOWRDS");
    tmp_msg_0.dist = 0.980459681751;
    tmp_msg_0.err = 0.177814143375;
    tmp_msg_0.ctrl_imp = 0.241863181921;
    tmp_msg_0.rel_dir_x = 0.801690584415;
    tmp_msg_0.rel_dir_y = 0.138314216213;
    tmp_msg_0.rel_dir_z = 0.228766181822;
    tmp_msg_0.err_x = 0.00635224452779;
    tmp_msg_0.err_y = 0.923612034238;
    tmp_msg_0.err_z = 0.428231385718;
    tmp_msg_0.rf_err_x = 0.608150802528;
    tmp_msg_0.rf_err_y = 0.499377262814;
    tmp_msg_0.rf_err_z = 0.0443094300506;
    tmp_msg_0.rf_err_vx = 0.641734654257;
    tmp_msg_0.rf_err_vy = 0.487539217005;
    tmp_msg_0.rf_err_vz = 0.7116784391;
    tmp_msg_0.ss_x = 0.265905828029;
    tmp_msg_0.ss_y = 0.714493302238;
    tmp_msg_0.ss_z = 0.683337803151;
    tmp_msg_0.virt_err_x = 0.204619288832;
    tmp_msg_0.virt_err_y = 0.837183318199;
    tmp_msg_0.virt_err_z = 0.961845952638;
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
    msg.setTimeStamp(0.551556556337);
    msg.setSource(7032U);
    msg.setSourceEntity(110U);
    msg.setDestination(16790U);
    msg.setDestinationEntity(172U);
    msg.dist_min = 0.101976139773;
    msg.ax_cmd = 0.0795109796668;
    msg.ay_cmd = 0.456483550864;
    msg.az_cmd = 0.381118579202;
    msg.ax_des = 0.675105952327;
    msg.ay_des = 0.821289358642;
    msg.az_des = 0.68272798073;
    msg.virt_err_x = 0.239964796943;
    msg.virt_err_y = 0.432439166253;
    msg.virt_err_z = 0.977058455262;
    msg.surf_fdbk_x = 0.589856764399;
    msg.surf_fdbk_y = 0.568785966927;
    msg.surf_fdbk_z = 0.0198363432785;
    msg.surf_unkn_x = 0.0726299596432;
    msg.surf_unkn_y = 0.566076029965;
    msg.surf_unkn_z = 0.611320352474;
    msg.ss_x = 0.652797647201;
    msg.ss_y = 0.788827934637;
    msg.ss_z = 0.820962526509;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("NGUSPUYCFWSKLLE");
    tmp_msg_0.dist = 0.506632666662;
    tmp_msg_0.err = 0.0409180568541;
    tmp_msg_0.ctrl_imp = 0.659429089156;
    tmp_msg_0.rel_dir_x = 0.739294426226;
    tmp_msg_0.rel_dir_y = 0.216972940548;
    tmp_msg_0.rel_dir_z = 0.966789115023;
    tmp_msg_0.err_x = 0.377703268485;
    tmp_msg_0.err_y = 0.787009718999;
    tmp_msg_0.err_z = 0.854427190208;
    tmp_msg_0.rf_err_x = 0.329303551496;
    tmp_msg_0.rf_err_y = 0.261360083587;
    tmp_msg_0.rf_err_z = 0.892599601377;
    tmp_msg_0.rf_err_vx = 0.641132586659;
    tmp_msg_0.rf_err_vy = 0.0468124203954;
    tmp_msg_0.rf_err_vz = 0.598263953963;
    tmp_msg_0.ss_x = 0.64562645593;
    tmp_msg_0.ss_y = 0.330716387718;
    tmp_msg_0.ss_z = 0.56430160767;
    tmp_msg_0.virt_err_x = 0.126656154524;
    tmp_msg_0.virt_err_y = 0.520034474976;
    tmp_msg_0.virt_err_z = 0.748982765117;
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
    msg.setTimeStamp(0.981819579753);
    msg.setSource(34501U);
    msg.setSourceEntity(49U);
    msg.setDestination(9112U);
    msg.setDestinationEntity(48U);
    msg.s_id.assign("XSIKJMTWABKLNWQVZUVOMPUEOBNZDRCSUCIWPENWMPZDPSCKIQKIOYUGTMFSVEHPHZFYASYXUBFCVISMFVPQGEQ");
    msg.dist = 0.761403866572;
    msg.err = 0.675139574648;
    msg.ctrl_imp = 0.831302309961;
    msg.rel_dir_x = 0.335231081016;
    msg.rel_dir_y = 0.372395401548;
    msg.rel_dir_z = 0.385067730036;
    msg.err_x = 0.228528473257;
    msg.err_y = 0.665793299839;
    msg.err_z = 0.118087627786;
    msg.rf_err_x = 0.588070998966;
    msg.rf_err_y = 0.398471858896;
    msg.rf_err_z = 0.451844366938;
    msg.rf_err_vx = 0.687065835432;
    msg.rf_err_vy = 0.576337238165;
    msg.rf_err_vz = 0.222402113029;
    msg.ss_x = 0.942212064228;
    msg.ss_y = 0.791034024141;
    msg.ss_z = 0.223791789041;
    msg.virt_err_x = 0.161594128906;
    msg.virt_err_y = 0.99565520656;
    msg.virt_err_z = 0.288623359798;

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
    msg.setTimeStamp(0.252527814822);
    msg.setSource(55175U);
    msg.setSourceEntity(138U);
    msg.setDestination(16061U);
    msg.setDestinationEntity(188U);
    msg.s_id.assign("UHSALDQSPGKBZWTBAIQJIVWKAJSOIYATWBVIGEGCKUHQSNMNNTYEVCGVUSLHSNRHRBODKQNJBPHZQLZZYFFPMTPXJAGUMDPBLYXWAYZMHHQBZMOLSZUZDVRJRNSDAXPYDLRULPXDIMEGYJGXFAZPKMQMOFJEUYWFQNTXYEOFGWQNIWSEWHBKWPWREEMLBTHEIVRNOINTACX");
    msg.dist = 0.0322197824856;
    msg.err = 0.548499123145;
    msg.ctrl_imp = 0.317515972634;
    msg.rel_dir_x = 0.709706654671;
    msg.rel_dir_y = 0.291831515574;
    msg.rel_dir_z = 0.519747595288;
    msg.err_x = 0.769798491103;
    msg.err_y = 0.308976195635;
    msg.err_z = 0.619036661146;
    msg.rf_err_x = 0.565024656743;
    msg.rf_err_y = 0.12156812004;
    msg.rf_err_z = 0.158672551356;
    msg.rf_err_vx = 0.578165139227;
    msg.rf_err_vy = 0.423161496141;
    msg.rf_err_vz = 0.105911309614;
    msg.ss_x = 0.83601734143;
    msg.ss_y = 0.17275852345;
    msg.ss_z = 0.484099769691;
    msg.virt_err_x = 0.136767240025;
    msg.virt_err_y = 0.764115587136;
    msg.virt_err_z = 0.26435840096;

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
    msg.setTimeStamp(0.369700730718);
    msg.setSource(22919U);
    msg.setSourceEntity(140U);
    msg.setDestination(18854U);
    msg.setDestinationEntity(252U);
    msg.s_id.assign("OQLBAKYUDYMZLHDCRFMJSVQACXGUKUMHBYWYEAQQUSXHXNQMKEEOXJCADXIQHPNFIYDNHDVJSIDTCFXJLWGMUCJCMJPADIAKUKJPSCBFOWPFGVLLVJQ");
    msg.dist = 0.479111551117;
    msg.err = 0.141173187742;
    msg.ctrl_imp = 0.809016636443;
    msg.rel_dir_x = 0.297315722797;
    msg.rel_dir_y = 0.570635585425;
    msg.rel_dir_z = 0.177975810906;
    msg.err_x = 0.128177396364;
    msg.err_y = 0.212746558619;
    msg.err_z = 0.622644401391;
    msg.rf_err_x = 0.396700640691;
    msg.rf_err_y = 0.141362219825;
    msg.rf_err_z = 0.300841806291;
    msg.rf_err_vx = 0.864063164974;
    msg.rf_err_vy = 0.142058769884;
    msg.rf_err_vz = 0.676956891279;
    msg.ss_x = 0.958350491672;
    msg.ss_y = 0.890752534824;
    msg.ss_z = 0.464477242946;
    msg.virt_err_x = 0.648826952067;
    msg.virt_err_y = 0.665084239242;
    msg.virt_err_z = 0.118105312953;

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.199033747039);
    msg.setSource(58777U);
    msg.setSourceEntity(124U);
    msg.setDestination(18327U);
    msg.setDestinationEntity(24U);
    msg.op_mode = 111U;
    msg.error_count = 244U;
    msg.error_ents.assign("KQCRYGDTJRNSHQOQLSKKGOVCBIRXXNJPDTIHBYOATJJYAKFYZVDMQCVZLWKTHIPNUFPWDDEXYVUVIAWGSCOKUWCLSPIKQJESTEFIFXMUNESTABBZWPVVZVNRYXTRDAIMMPQXIULMBBJHQDLAFMLGPAEOYCNSBWUARGYXICCGJKMLEZECPTJRTUHOMIKXEHWHUMVQFEDBSTOAGBNOYUW");
    msg.maneuver_type = 47411U;
    msg.maneuver_stime = 0.623044036062;
    msg.maneuver_eta = 8157U;
    msg.control_loops = 494682959U;
    msg.flags = 227U;
    msg.last_error.assign("WQNHWQSCGJZQXUNEVJZNKSLNBOFPKOIIWDQKABFYXILWSTYMSPEVSPGXAHVDZPIHCRGAHTNZZELGCVJHTETUBRANOLIWZXFEUHFHMPTQRELBLFJSVDEDJKDOWRFAIVGNLCCAAKFZVYSBRWDECRWSDBMTLGLNMCYBC");
    msg.last_error_time = 0.24970619042;

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
    msg.setTimeStamp(0.0384413013886);
    msg.setSource(48202U);
    msg.setSourceEntity(160U);
    msg.setDestination(27244U);
    msg.setDestinationEntity(24U);
    msg.op_mode = 49U;
    msg.error_count = 156U;
    msg.error_ents.assign("SNPMVAXXDACSGZHBR");
    msg.maneuver_type = 33840U;
    msg.maneuver_stime = 0.150197380451;
    msg.maneuver_eta = 23252U;
    msg.control_loops = 2505410567U;
    msg.flags = 17U;
    msg.last_error.assign("CCFJMRUHIKSEANUUXIOBSYWYLSTDGJLHRNPPZPOZHOQTGFAGFIRITHDCXABPQXHAERVAEUFWQXNWCZSQWEURZPHJFSIYVLJEGLPRVNBERAAW");
    msg.last_error_time = 0.673524674296;

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
    msg.setTimeStamp(0.729008781828);
    msg.setSource(33617U);
    msg.setSourceEntity(51U);
    msg.setDestination(599U);
    msg.setDestinationEntity(0U);
    msg.op_mode = 57U;
    msg.error_count = 119U;
    msg.error_ents.assign("ZGMPBAUDAFRNZQSARIDSAABHMIJYULPVXLFJNEMBYXTJZNYMIOBRRIJYWQGSWYZCREBNHQNPVWUKLWGZFPBRHPFPTYZBTTDMFDSOYXELFBVKNWCOHMCTGUWCCJCOLCQSRELZXXOFHIQCMGHQDSSEVQQVGUKDBEPGLIWUHSNXJJCZUJQSKGXALWKAXARQ");
    msg.maneuver_type = 60500U;
    msg.maneuver_stime = 0.832754731381;
    msg.maneuver_eta = 2417U;
    msg.control_loops = 98543802U;
    msg.flags = 125U;
    msg.last_error.assign("MSVMEHXVKUKKDWOVGWBFLEQHCMIYERJPGBOHCFZMWMYEHCQBUKXXDHXBQJMNCYBOLOHQVQBZYHITQTTNGXAKQCPUOISARFQDGOCECEVQRKDGFYAXPLTLNMMYAIHELLGJUCLONSLDPTSNDRNWKIOZUPJLSPIWPWGARPNFZUHFVROATYSDJDEQZCVHUJEWBNJXTITLWJZJRRJESWSVYGGXMBFAICDUMRPSTYUFYXFBANZKKZUBNAIOXIP");
    msg.last_error_time = 0.0972012968147;

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
    msg.setTimeStamp(0.397408997781);
    msg.setSource(27253U);
    msg.setSourceEntity(13U);
    msg.setDestination(13103U);
    msg.setDestinationEntity(166U);
    msg.type = 215U;
    msg.request_id = 3235U;
    msg.command = 246U;
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 46625U;
    tmp_msg_0.lat = 0.199132717343;
    tmp_msg_0.lon = 0.609850628089;
    tmp_msg_0.z = 0.835313878143;
    tmp_msg_0.z_units = 226U;
    tmp_msg_0.speed = 0.113354825013;
    tmp_msg_0.speed_units = 88U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.560407863641;
    tmp_tmp_msg_0_0.y = 0.43520839067;
    tmp_tmp_msg_0_0.z = 0.889795628382;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("TVLAFPUCXGGKLVZSSUDVRRYWBZQRROJZXKZEMKFIYKMWHLUKTSQPTBJLMYAVCQCVWBHYUEEZDRIFECGVMSYAQLMNTIKTDTJCZULIAMPQMFNVBUFJSWHJABVYXKSPVZPSTXWMONMDKIPIIABHQDFCPIDJNCGZVTQAHBQWZNJSTXERIGOFODRUPWODEXHWGCNEBNZCKDGHYRNNGAGJONOHOLCHYOB");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 38143U;
    msg.info.assign("UGSPQNCLUKLCFNCOUUCWIVMAMTMDGXEYCOBMEQIIXQTMNZKYIXZQFBQYGMLRHNTYBUWHAJMAZVGLFXLCATDDQVWULIPIWGSRYUEROKKRBSCQDWSRFRGNXWRFJKDBACSOTLTETJOPJFTYGXJXPIPRKOVZDKJHDAIPKYXEFCHHSBMRHWVOEJOQEHBKILPRGFQBUWNAFDVGPDVYELMZWTPKBHASPYAGENSHMZFBJDXVQACZUENXOYZZZ");

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
    msg.setTimeStamp(0.154533201826);
    msg.setSource(25403U);
    msg.setSourceEntity(81U);
    msg.setDestination(44309U);
    msg.setDestinationEntity(39U);
    msg.type = 143U;
    msg.request_id = 16623U;
    msg.command = 244U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 58782U;
    tmp_msg_0.lat = 0.947613786963;
    tmp_msg_0.lon = 0.659319002447;
    tmp_msg_0.z = 0.0644950675089;
    tmp_msg_0.z_units = 128U;
    tmp_msg_0.speed = 0.852490626676;
    tmp_msg_0.speed_units = 174U;
    tmp_msg_0.roll = 0.828967555036;
    tmp_msg_0.pitch = 0.93235615962;
    tmp_msg_0.yaw = 0.644829626196;
    tmp_msg_0.custom.assign("JXJYHCUWHCEOTRSFEWIWGGSVWWSLACUKRHLZIYMRBQNAVLTOMIBUKUFKNWCZAWNBNOUMDPTJCFPJIGNNBPLSPBNQVEDVVLZSCJGBOVEKDPBROIFTGMZVTSTLTXRAGSYMSVOQDDCF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 14577U;
    msg.info.assign("KTLDUEOCFAZZAESHIUWKHPSXXLOICVLUKFNGKXNGGIYHQVOXVYBLRRHKAIBLHZJEWTJJWWBORGFFRAMIBOZCWQASAOVSMBCHQTTYGRINOWYGFKEKXYVJKLDLUWUAPQDFURGMMJTPTINACLABNGKWTPDSESVOREBCUTHFZJGPUDMFDMQSNZJXRNYTD");

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
    msg.setTimeStamp(0.167474081559);
    msg.setSource(47505U);
    msg.setSourceEntity(138U);
    msg.setDestination(34667U);
    msg.setDestinationEntity(60U);
    msg.type = 42U;
    msg.request_id = 26076U;
    msg.command = 28U;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.762233374511;
    tmp_msg_0.lon = 0.755528601506;
    tmp_msg_0.z = 0.13441953889;
    tmp_msg_0.z_units = 251U;
    tmp_msg_0.speed = 0.655321457933;
    tmp_msg_0.speed_units = 0U;
    tmp_msg_0.custom.assign("LKHJJVCRBDNHERGPRSWTGWR");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 52683U;
    msg.info.assign("MURSTTKSMIPRZXGFTKCIGOJJXYKZIQJBYMIUQDFNWMCTTDNIXBVAYELNHDZGZXCRIXAHEAWOGHZTPLOLVASLRKCIJSJVLCMSAEBKKTQLQYDRAASFFPHRZFVKQYNOUVHVBQYUJGGLCIZDWWBMGNXWHBGFPLBAOG");

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
    msg.setTimeStamp(0.847346453971);
    msg.setSource(25843U);
    msg.setSourceEntity(66U);
    msg.setDestination(57286U);
    msg.setDestinationEntity(189U);
    msg.command = 14U;
    msg.entities.assign("YIDGRFUKTCSIKLTVNODATPMMLWBRHOHLFTVXMMCSOMWWFDUUYPAHLNMXNOQAJCAQQMAGVVJXJUFHVMLPULRVUPCZCDSCSUPWIPVNWOGFRRSTYNPYQJCISHHKZUTBWZXLPXQGKSTGWHZSRSDUVLDCKUZJYGCNGFBPKNDGFDEOYZEJLZ");

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
    msg.setTimeStamp(0.715934291097);
    msg.setSource(54174U);
    msg.setSourceEntity(225U);
    msg.setDestination(58647U);
    msg.setDestinationEntity(154U);
    msg.command = 58U;
    msg.entities.assign("OVXRCUUVEWPPICWWGOSCRMFUWYIUZCGTFMPHVOKYTIMJQLVQYCKLHBKFBLSNSIQDYJVWMGDRNQSWPOHTNSCAAXRRSIIHUAPBGFMEXASUKKPXEYL");

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
    msg.setTimeStamp(0.328271100026);
    msg.setSource(39109U);
    msg.setSourceEntity(190U);
    msg.setDestination(63842U);
    msg.setDestinationEntity(234U);
    msg.command = 183U;
    msg.entities.assign("MRXDZNHQEEEFBGHAZVUSXLXUYYYZVBDKAQGGWLMNCYGTJOBJ");

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
    msg.setTimeStamp(0.533272155298);
    msg.setSource(39918U);
    msg.setSourceEntity(30U);
    msg.setDestination(19947U);
    msg.setDestinationEntity(62U);
    msg.mcount = 185U;
    msg.mnames.assign("VHLQXXCJNGTCQWGGIOWUPVLCRFEAFFRSQBNDLMPLJDLOZETKYYWBSSBSXVIYDBHSTCAKAPQOXFEKYKXXGAOLZEUDFWKJIYEGRGMHBITQMNLBOMSATPSLONHNSDICTQRVJVAZRDFIGPNUQVSFNCNPBXJUWHXZEOY");
    msg.ecount = 191U;
    msg.enames.assign("BVMGZDFHAKAH");
    msg.ccount = 212U;
    msg.cnames.assign("EZOPPKKGGYDHUZQMS");
    msg.last_error.assign("OMEGGUWONJXXRHXSJEKODEOMPBXSRQCTYNKCQZOZDTANVLXQNERNWFMQQZJRJLKOFFHFRMNIKDGNEXBEVALDXESHWITVPLAYGEZCIDRJTVKHM");
    msg.last_error_time = 0.517572766848;

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
    msg.setTimeStamp(0.889899231618);
    msg.setSource(63592U);
    msg.setSourceEntity(177U);
    msg.setDestination(4714U);
    msg.setDestinationEntity(20U);
    msg.mcount = 56U;
    msg.mnames.assign("DULPDZFGMRBRUNMDQIKHQEXGAQJNUWROUYYFNASJIWYUTXQUYFWBEBCFCTRHTHSATFECRIZKSGCRKNCQIVOIEKFANZNDLKPDWECNPGWPTODQWHTAFZATVJOELWKOVSWAKIDVIUSAZJTVBGLBOSNXMAVDMYWQJOSHTOVPYCLYULMGLYFYIZNMBVXPGZNHRARQMEEHCSPIOPHQXDBGZIXQPDLBYGJOUEXXGBMJKRPZTEWVMXRKCBSFFXCHMLUJ");
    msg.ecount = 121U;
    msg.enames.assign("HCDZAYNRGEAGDAUDWRCMMWNSYJXGGMJFIXQGVGDNKJPSODHQVQZSYNWYZQUFKERNACFBCSPBHXXLFULCPGREBGKSRJMIMYHTWTUAKVASKTIZCUZXALIZOVFNHODHYVVPFTZARRXOFPYJDQNPYLSEIWCZGPSNYNKWCMEASOUSKXJDBCLVUKOQTDZPWUGTVWKTMB");
    msg.ccount = 107U;
    msg.cnames.assign("FGWIMRTJYVTZDDUBTGRVWVEJFVCBUAANSZUYGZDIXXCMPYVXQWLEAOZMASKWDRAXENNKTOOEJRAQSCOCINMDPTYHBQBGLGSBJFQATGGOTPFUPISVKFXUMUHRPQPIKMBIYNHDEOUMLPE");
    msg.last_error.assign("LNYSUYTOVUBBPSXIISTXJUZGPVQYDLPDLYWCCDHZCYRJHWQOAI");
    msg.last_error_time = 0.431887899143;

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
    msg.setTimeStamp(0.995204246486);
    msg.setSource(42085U);
    msg.setSourceEntity(65U);
    msg.setDestination(59600U);
    msg.setDestinationEntity(243U);
    msg.mcount = 72U;
    msg.mnames.assign("MVXYVOJAOTVSVDBNQNPONNIULISJCEGWQPDMEIDESVPDTTRGUBKKMCSGLNRXIXBSBFJMXFJHERQGPUAZBUMRKHTGIYUKWMQFFUZLVTUZWEMXEDLXBQXJRLHHCEHGNVETQARFQPSCAZWSSYXDQAHNOUPVLKZJWOHAIJJBUTDILJASLHFTWLEFFYGDGIJWNYEMTOCZFFYBPUNAKDWKSCYDCBZYOKWZTGVWQPXV");
    msg.ecount = 15U;
    msg.enames.assign("FMVUHHKAEYAYUWOXQCDQNQRMQDZSNLPEOREUNMXTKTAFFNVWUAJVABHDZGKRFOGKFBSIBYLVFZGW");
    msg.ccount = 59U;
    msg.cnames.assign("JTNHGCBDCBAZMNDKJPRLDZHVXJEVEJJZETLSAIXFGIZZZYXYOQUGBUXATDYXHDDENOHTKWAUCBENMPQHYSMGPGKSOKKREWLLIRLZRZYIOUMBIFWCSSSEUCAELQQBUP");
    msg.last_error.assign("OWYZXGZPPXCQPZAUBIHOODEJGUHYIRDHKTYMMOYQRQZSDLTHLOUCJVMAGNINNWUWABSDKBFLSWRBSLHFUAPYEDBDABWWRQTFUHCFEYZXNSVPDJFXKVLGAZWEPWDPVLEIMXQTZVNTOVQUFYTXCZBCDEGJQMFJQYSCTERMCJ");
    msg.last_error_time = 0.818019480425;

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
    msg.setTimeStamp(0.653443685697);
    msg.setSource(44697U);
    msg.setSourceEntity(125U);
    msg.setDestination(19930U);
    msg.setDestinationEntity(106U);
    msg.mask = 143U;
    msg.max_depth = 0.38372836917;
    msg.min_altitude = 0.655413689816;
    msg.max_altitude = 0.400219270452;
    msg.min_speed = 0.478719527005;
    msg.max_speed = 0.698627672306;
    msg.max_vrate = 0.897074028348;
    msg.lat = 0.630937693835;
    msg.lon = 0.536217691794;
    msg.orientation = 0.991965687487;
    msg.width = 0.443826407557;
    msg.length = 0.128540662292;

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
    msg.setTimeStamp(0.406821139738);
    msg.setSource(9206U);
    msg.setSourceEntity(64U);
    msg.setDestination(19944U);
    msg.setDestinationEntity(206U);
    msg.mask = 128U;
    msg.max_depth = 0.537008726024;
    msg.min_altitude = 0.323591548594;
    msg.max_altitude = 0.452804935919;
    msg.min_speed = 0.29806841527;
    msg.max_speed = 0.292891278347;
    msg.max_vrate = 0.480940437308;
    msg.lat = 0.708338879995;
    msg.lon = 0.0137220540463;
    msg.orientation = 0.60182866912;
    msg.width = 0.862359927547;
    msg.length = 0.280211964034;

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
    msg.setTimeStamp(0.753316563067);
    msg.setSource(28151U);
    msg.setSourceEntity(243U);
    msg.setDestination(43373U);
    msg.setDestinationEntity(107U);
    msg.mask = 36U;
    msg.max_depth = 0.429967034402;
    msg.min_altitude = 0.116828821871;
    msg.max_altitude = 0.2178379557;
    msg.min_speed = 0.714360122449;
    msg.max_speed = 0.270505097597;
    msg.max_vrate = 0.428032651077;
    msg.lat = 0.973031511193;
    msg.lon = 0.983710053869;
    msg.orientation = 0.133528047999;
    msg.width = 0.573060799081;
    msg.length = 0.333195500289;

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
    msg.setTimeStamp(0.775247472886);
    msg.setSource(9809U);
    msg.setSourceEntity(41U);
    msg.setDestination(10537U);
    msg.setDestinationEntity(38U);

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
    msg.setTimeStamp(0.706443526484);
    msg.setSource(40772U);
    msg.setSourceEntity(9U);
    msg.setDestination(50718U);
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
    msg.setTimeStamp(0.429743293406);
    msg.setSource(18559U);
    msg.setSourceEntity(249U);
    msg.setDestination(27058U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.570444241226);
    msg.setSource(31158U);
    msg.setSourceEntity(41U);
    msg.setDestination(52315U);
    msg.setDestinationEntity(170U);
    msg.duration = 46665U;

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
    msg.setTimeStamp(0.404454830704);
    msg.setSource(34183U);
    msg.setSourceEntity(147U);
    msg.setDestination(29112U);
    msg.setDestinationEntity(1U);
    msg.duration = 47055U;

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
    msg.setTimeStamp(0.239309508447);
    msg.setSource(47823U);
    msg.setSourceEntity(128U);
    msg.setDestination(46816U);
    msg.setDestinationEntity(116U);
    msg.duration = 51560U;

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
    msg.setTimeStamp(0.205826154357);
    msg.setSource(57773U);
    msg.setSourceEntity(131U);
    msg.setDestination(57001U);
    msg.setDestinationEntity(72U);
    msg.enable = 245U;
    msg.mask = 1324870439U;
    msg.scope_ref = 4034600262U;

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
    msg.setTimeStamp(0.0727012877727);
    msg.setSource(1160U);
    msg.setSourceEntity(110U);
    msg.setDestination(27784U);
    msg.setDestinationEntity(215U);
    msg.enable = 216U;
    msg.mask = 160636396U;
    msg.scope_ref = 3311888950U;

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
    msg.setTimeStamp(0.0900374580258);
    msg.setSource(2747U);
    msg.setSourceEntity(233U);
    msg.setDestination(46195U);
    msg.setDestinationEntity(19U);
    msg.enable = 47U;
    msg.mask = 480171079U;
    msg.scope_ref = 2192348298U;

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
    msg.setTimeStamp(0.761661951462);
    msg.setSource(18041U);
    msg.setSourceEntity(250U);
    msg.setDestination(32075U);
    msg.setDestinationEntity(126U);
    msg.medium = 27U;

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
    msg.setTimeStamp(0.416474253407);
    msg.setSource(59109U);
    msg.setSourceEntity(182U);
    msg.setDestination(46132U);
    msg.setDestinationEntity(171U);
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
    msg.setTimeStamp(0.0441173574733);
    msg.setSource(42883U);
    msg.setSourceEntity(163U);
    msg.setDestination(32916U);
    msg.setDestinationEntity(186U);
    msg.medium = 103U;

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
    msg.setTimeStamp(0.111492095848);
    msg.setSource(30055U);
    msg.setSourceEntity(185U);
    msg.setDestination(46143U);
    msg.setDestinationEntity(17U);
    msg.value = 0.901555378329;
    msg.type = 99U;

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
    msg.setTimeStamp(0.585856834125);
    msg.setSource(14349U);
    msg.setSourceEntity(32U);
    msg.setDestination(13270U);
    msg.setDestinationEntity(48U);
    msg.value = 0.717695727035;
    msg.type = 173U;

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
    msg.setTimeStamp(0.639995772251);
    msg.setSource(43558U);
    msg.setSourceEntity(11U);
    msg.setDestination(11099U);
    msg.setDestinationEntity(212U);
    msg.value = 0.715480725694;
    msg.type = 233U;

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
    IMC::FormationState msg;
    msg.setTimeStamp(0.8947315615);
    msg.setSource(4393U);
    msg.setSourceEntity(40U);
    msg.setDestination(24574U);
    msg.setDestinationEntity(132U);
    msg.possimerr = 0.713298011919;
    msg.converg = 0.462265960692;
    msg.turbulence = 0.114226024335;
    msg.possimmon = 162U;
    msg.commmon = 99U;
    msg.convergmon = 115U;

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
    msg.setTimeStamp(0.5127217591);
    msg.setSource(53685U);
    msg.setSourceEntity(134U);
    msg.setDestination(5382U);
    msg.setDestinationEntity(102U);
    msg.possimerr = 0.103724400204;
    msg.converg = 0.720408417382;
    msg.turbulence = 0.346296800613;
    msg.possimmon = 144U;
    msg.commmon = 81U;
    msg.convergmon = 3U;

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
    msg.setTimeStamp(0.614811815536);
    msg.setSource(12864U);
    msg.setSourceEntity(193U);
    msg.setDestination(55037U);
    msg.setDestinationEntity(67U);
    msg.possimerr = 0.877227879854;
    msg.converg = 0.33858771686;
    msg.turbulence = 0.0901130378801;
    msg.possimmon = 199U;
    msg.commmon = 65U;
    msg.convergmon = 180U;

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
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.92391309371);
    msg.setSource(21686U);
    msg.setSourceEntity(207U);
    msg.setDestination(2390U);
    msg.setDestinationEntity(60U);
    msg.autonomy = 60U;
    msg.mode.assign("OGMELZSQBJCMLCFSRTZBDTTMQCWVIZGVOMPITZAPCQUVCRLQFJOPGDXAHHTBGXIVOHDKAWCZWFNDDHEKVUERQMSXOTJKNRQHVYDUGXSGEJOMOJXUPWHGZIHMNVYO");

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
    msg.setTimeStamp(0.459872949627);
    msg.setSource(61940U);
    msg.setSourceEntity(33U);
    msg.setDestination(34628U);
    msg.setDestinationEntity(18U);
    msg.autonomy = 123U;
    msg.mode.assign("RMHPAYENUOLWICBISXRDSYIMOLHNMXNAMQZLCFKGORFNWTKGJMAHFEWQDENHOTLYGVUXSHJVNIDOXQBRAIMPNZCYWPIEVZZGUVUECZTIOCANTJSGVQPJSGVHTUJDGOHNDCPXQLFLMHUYXXZELPJMSJKKHGBYRDJWCPRGOKYBA");

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
    msg.setTimeStamp(0.800968066435);
    msg.setSource(873U);
    msg.setSourceEntity(29U);
    msg.setDestination(54637U);
    msg.setDestinationEntity(109U);
    msg.autonomy = 110U;
    msg.mode.assign("SFDZCDWFZEIBSPLI");

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
    msg.setTimeStamp(0.787308643608);
    msg.setSource(27090U);
    msg.setSourceEntity(80U);
    msg.setDestination(40074U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.380020681393);
    msg.setSource(24119U);
    msg.setSourceEntity(211U);
    msg.setDestination(64752U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.890663145265);
    msg.setSource(24609U);
    msg.setSourceEntity(200U);
    msg.setDestination(44559U);
    msg.setDestinationEntity(17U);

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
    msg.setTimeStamp(0.724304280192);
    msg.setSource(60899U);
    msg.setSourceEntity(57U);
    msg.setDestination(8384U);
    msg.setDestinationEntity(236U);
    msg.plan_id.assign("ZIDFRNBOISGZFVKKBLGTFNEHNDPWCGTNUXQEXBXDDVIQCULBAWKIRNRQAJALXUJHCDOECMMWVCKDJANRQVTARDMYOPJOHCVNJYJEGGSNYCUMFAPLGAWPVOCJZRZDSUCOQYXSNOGXBBLZCPFUABMSSGVXFMZKYBBWHXXIWJVIMFHIOFRNPIREQYLHVJLAWHGEUYRLQHKGFLWPUDKSBZWASFTKEQTOWMQIZKMZQYXTPPTYT");
    msg.description.assign("TCEAZJFNNSFEKRVYDIMFPMNSZEPTEEGMAZMTBBPDRNYLVJWACDTAWOUCVOUBKZSRCGCKLIUNKOCBKYXLJANYHBDTRYQFSCZPOCGDUJYBHKUGXVVTGAXPIIHEVXUZRLLIAMLSGUCNDKQMVAQBHRUPOXWLJYRNSDIURZJFZMQYXKRWDKIZTOXHBRWTZOESUYLXQHJPNMLKSQDEHIMFF");
    msg.vnamespace.assign("EPLIBUPMYGLIYSZMXKREWJUMUOWBXGURNAFDFRJAQCDVDFRLJEGTVWPLDUFQAKHFIVWQARLLHDFETWMQVNXGNSUPTHBBHIAXAMKWYMSDJPQMKICLECZDIJZZOLVRNHBTCDTIOAKVUNIGUGGHPYMQYKHXCXSKNQJCGMHR");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("NARKTXNBRMDURQOBHTAASVPHFLZAWFOGCVYYWOUUEBIXZNIMZVBVXZWHFJDJYSWGVPYRAYRMIGKXWIWPJVJKDPLAGYHKLDDMOBPXLOTFPECNAGQOCCBRKWSQGLDMPSYACJZHEXPQHIG");
    tmp_msg_0.value.assign("DEPUQSEDNENTDFGBRJCXGXLBEIRPSNFIIPJNHCLQZYMDMUNAHVMVHWCVBAZESSJIPUHKYXOPXPLXXQUQBANRNJDNACO");
    tmp_msg_0.type = 251U;
    tmp_msg_0.access = 194U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("DOWZOALZHTEUGFSOUAXPLIMEFWVTIDEBEGPWSQXRCTSFNIOEJQLBYJANIEBPQNRVIJGHFNIBPLBDLFJDFIVGEHQOEGMCYVKDJHYIVY");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("YKPMPDIFRWWFHOUXPRPVNUFPJXAJVNKFUVSMMCOWBRBQKGPXXVYHYJCDAXXYBD");
    IMC::StationKeeping tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.634193865759;
    tmp_tmp_msg_1_0.lon = 0.597768832819;
    tmp_tmp_msg_1_0.z = 0.342164823453;
    tmp_tmp_msg_1_0.z_units = 153U;
    tmp_tmp_msg_1_0.radius = 0.497919356027;
    tmp_tmp_msg_1_0.duration = 33989U;
    tmp_tmp_msg_1_0.speed = 0.89291893631;
    tmp_tmp_msg_1_0.speed_units = 10U;
    tmp_tmp_msg_1_0.custom.assign("TDGRDFAVEVFCIPILBMHWCMKQJUELSOTYHOPZGKIGCOWQXWJBPHTHTRLXSFVGIEPASRLMRVKCUZZZENYUVBVFQZPFTDLQYRYHIXMIOEKTGZNTDQDWPCXDYCUSSZUNKPXIGGHWOLRIJJJOBLJKKRTLKDVNQAOYVJDEFBJWXSOHVFCK");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::SmsRx tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.source.assign("VWLXCBGGKWGMIMFQQYHCJHIEMXKAWTLYUGMVFGTIFLUUVBHTZYTDIFKXCZZBOHKNCJVPBNGNHRFRWNWIXEUYKDTDXESRXWNEEDHA");
    const char tmp_tmp_tmp_msg_1_1_0[] = {103, 17, -94, -91, -77, -82, -26, -82, -61, 53, -88, 16, -100, -47, -115, -53, 3, 25, -123, -8, -104, -54, -122, 51, -1, 112, 7, -7, -15, -79, 108, 99, 75, -65, 28, -6, 26, -7, 86, -18, 12, 29, -63, -27, 62, 16, 57, 39, -120, -117, 44, -96, -7, -118, 69, -118, 8, -41, 64, -71, -11, 42, -103, 35, -105, 101, 103, 101, 98, -71, -69, -41, -82, -70, -111, 47, -14, -119, 42, -91, -45, 27, -47, -127, 113, -64, 26, 110, -24, -115, 0, -73, -53, 31, -125, 0, 49, -24, 106, -122, -114, 97, 125, 36, 106, -75, 21, -105, -78, -81, -92, -38, 122, -81, -107, -25, 110, 102, 88, -49, 95, 56, 7, -108, 77, -12, -79, 120, -118, 102, -114, -104, 99, -86, 92, 107, 6, 97, 15, 37, -53, 58, 72, 122, -26, 66, 86, -3, -80, 26, 87, -121, 8, -65, -51, -73, -21, 88, -24, 54, 46, 44, 69, 70, 106, -114, 115, 51, 110, -16, 31, 115, -64, 27, -82, 26, 68, 117, -53, 58, 113, 13, 90, 104, 80, 78, 15, 68, -90, 77, 34, 100, 27, -56, -35, -104, 70, 8, 122, 40, 45, 27, -22, 72, -99, 64, -53, 79, -112, -37, 38, -60, -96, -16, -65, 85, 76, 94};
    tmp_tmp_msg_1_1.data.assign(tmp_tmp_tmp_msg_1_1_0, tmp_tmp_tmp_msg_1_1_0 + sizeof(tmp_tmp_tmp_msg_1_1_0));
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("XYLOCDIPJFERACNATRVOTUEWQHRTDBQGLVLVYEGTURQIZVUFTAODNMSYOANAUHPXUJIWXTFGUKZWWISFMPZIEXHNDFDTFLZANVYLUZJRQFABJNTNXZMOGNUVIXMMKOSGERMJCCALJQJJSMXRJMNTDFCWYIDHGKHEYIQKJHBSBWKHPWHOPPYOHBTVECZDOPXRL");
    tmp_msg_2.dest_man.assign("FGXRUZNNYPBWTAWIZYEIEGMUYARZKIJMSXDEBUHPHQPSQLXYGFMCBZOLHQGBFWOVKHOJGYLTSSFLZISOOPAYJNWQQKLDNRIPSKANECRNWHRDTGVTKQILNKZTJMXEJTPYSJEGMAC");
    tmp_msg_2.conditions.assign("QPBELGYWUQTVWJVCILBZFTZUNSQLZGGIZCSPIJUGQC");
    msg.transitions.push_back(tmp_msg_2);
    IMC::MonitorEntityState tmp_msg_3;
    tmp_msg_3.command = 176U;
    tmp_msg_3.entities.assign("KZFGHADJZKJBSNLKXMFJVPGCHPRGWCXZKETJYVNFAIZFULYQKDLITPUGSPYECRRXNVCAHETYXQIKUBRXENBXODKWEMOLLSUGRMJSAHFHRWNWGTIPKCRTBTHFPKJDQADFWGBQEUYICAMXYOVUMNPYQPXJTPOWOGHMVSSQQIEUSAONYFZDDLLAZILIVDUXUBLOGAFVAHDMGBSOQKYZZCZWLWUNEPRMNOOIBFMNDTTIXWMQTVESCVRHJWB");
    msg.end_actions.push_back(tmp_msg_3);

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
    msg.setTimeStamp(0.439922288051);
    msg.setSource(58871U);
    msg.setSourceEntity(147U);
    msg.setDestination(13488U);
    msg.setDestinationEntity(20U);
    msg.plan_id.assign("RZMSQBFQKFHHMJDGEYYLPTQCLPWVDVKAPEDFRKIYAWUBSBNVMQAIPNSDRCFVYLUAFFUUCDTBZMJZUUMMXVTHWVPDWBOGJVNKLXRZSXQQPOADGYXFJOGFENRLMUGIVGHLZELREHQAYOUGPBWNKDSMJEJTBJTJTESR");
    msg.description.assign("HTLZDSFWKMRZKZHLAQZSPWTCHTWXXKDBORXRFIEMNRSVZLMARQUJOG");
    msg.vnamespace.assign("BVVQVEBHVEKBUJKNULMYPPKPTMCJUZIIDXUXNCYFJJEYBDZSZGLFSALDALAOBPFEKQBNDSSXWGMXOKTHHZQFRWBIXKNXJOLBRCYMOUMYSIWZHRRPPIEIWFRPCIBHWUGNCRQRTTLJCQIDZGTNYOLSAAGBXAVFYJEWXOUWTOALOLDFCMQZXYDJWGNQQDRJNDTSFPHZYPYEADWHNVUFHCVKCGHCZFGTMOKSM");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("GJFEDAVYIZLFGIWCHEGMNVPJIBULYVKXLNPUAOGQQLRQHUE");
    tmp_msg_0.value.assign("VIOWVYCACARXFNCWEAEGIXDT");
    tmp_msg_0.type = 67U;
    tmp_msg_0.access = 78U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("SGSFLPAQJYFXUIRDWXKDLBQNJVGHXUQOAGCUQPPFJGYNAOJLIRDZQSEMJHIQQODZHMKNOZMVOTWTQKAWQNRJKTUSIGWXAUYUPJBSTXCFACUCBEKYPRMWNTVIZFNEOJVYRPNDHYBDSMCOEBCBEDAVULMSM");
    IMC::IridiumMsgRx tmp_msg_1;
    tmp_msg_1.origin.assign("GHELOLZBXURMQFSHIQTWOPDOGGADQQRAGRYWWZUEVZHHILFNEYXBJYCITXNKHXTSBKPRGVJFYEIRDXKOIKIMDTARNZX");
    tmp_msg_1.htime = 0.549653607984;
    tmp_msg_1.lat = 0.297359413311;
    tmp_msg_1.lon = 0.61508559491;
    const char tmp_tmp_msg_1_0[] = {2, -12, -125, 72, -45, 62, 104, 39, 48, 106, -79, 86, 42, 73, 52, 100, -57, -112, 65, -81, 99, 63, -99, -59, 32, -5, 60, 90, 13, -117, 71, -17, 68, -111, 31, -43, 50, -86, -68, 38};
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
    msg.setTimeStamp(0.45972775072);
    msg.setSource(33876U);
    msg.setSourceEntity(158U);
    msg.setDestination(17005U);
    msg.setDestinationEntity(73U);
    msg.plan_id.assign("ZEOYHAZOFBSESCYSQIMENVVTQPTMYHKPYXMADSRL");
    msg.description.assign("QIDXBFJJBEPLPQPYZCDMNJLIWFSVSWZQBGNYJ");
    msg.vnamespace.assign("IWLMGQOPZCCNBQMKFFDWEFGSIWACVZPMGWOZNJYDAVKIBKVDNZTBQEXJCJXURAEWOETDVTFMZCJZOIDZDEEPGEMLYBYKERASWBPNCMRPFEBUHHNUUMCPIHULIKBYXRIFVYBULUKRZVHWCWUQXTTGKCQGWRXJLHOMHRZG");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("HBTWQOUWFBSPKIZPKNBQVGGDFOCBBITLFREYYTIDHCXNGDHFQXSQATVRTSEGFXYEWVQUOQBOZTJCEHZLTWYDCMOPJECPNCYRZPFXQMXMGFUQXVMMDWKEYPLRQKAKHMGYVIJJBUXUUSHCXOPAZIRKCFETKWZJMUKDWHAOVDSLKOQRN");
    tmp_msg_0.value.assign("SNHCDHQAUYQVUQAKEBZQNEZUHVFWESCXZKJSPAJHTBFUIYJDTWSKUXQSLGSFNTUZNDINHQLRBPZIRTHIXTECO");
    tmp_msg_0.type = 165U;
    tmp_msg_0.access = 130U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("BKDWVZSUMPUKYFEEURCJSARSFZKOLYNHLWTFMTDXKOBSCEKLJNYZXFPTCNUXHJJEPOUTDVBKGWPTPOSNKWHYLFABDNBOVKZAOREFMZTLOZXBFXKOVJRHVGITEIEOVJHJFIQLDNMIPXLIQQSNLMMNWZQDEWUBCYUAMCYTQIR");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("YUAJMBLWIGDTDESKHHONXWXCYLPPNEEJAAJQDUMFIARVSZRAYAVSSLDTXYRKFVFLNQDUCMZWCPAVAGYPDVMZJDRCQQEBGYKNNOESWYPDQNMNJEFKLKWZWYIWMYTKKJGUQCUWEGIGZHPOWLLBXNIPUXGIKMOVRUTPTJIEYFOZRUD");
    tmp_msg_1.dest_man.assign("OYYFCNDMBXDVYDVLLVFYLINYZADCNOXHTZFGNJYPBVKCUDMOVRKYZDHVRZZIWERYI");
    tmp_msg_1.conditions.assign("MYZBMTVMHRLGSUHVVOXJXNQGGMYCUIZAHJNSYAXWEJQNLETXTMWDQQYRPPQJYMBCPHKIYZFEENBJETCSJQXEIEWZKHLOGZAFOSBMYUDUNVTDUGCZIPLOCWUUOAWHLMDCWDWTTQOCNKJGRZPIFCAOXJFJDYLZRFGFSRPGFNFVATNSMFRCKBBRAUVYZDFOPSIKXABQAHATBXDDQR");
    IMC::Brake tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.op = 227U;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::CoverArea tmp_msg_2;
    tmp_msg_2.lat = 0.673166448896;
    tmp_msg_2.lon = 0.990808405276;
    tmp_msg_2.z = 0.91630582175;
    tmp_msg_2.z_units = 183U;
    tmp_msg_2.speed = 0.381338157534;
    tmp_msg_2.speed_units = 32U;
    tmp_msg_2.custom.assign("SPXKPADUUZOLQYVLILRSBFWDNKIMVOVKMHXRDENXOTWEHATPMOJJPAVDSYXGGZLPHXWMVFATIBLJLHUCSYHPZOHGCYTZETURORJQDNYVDKWJFTQJWURGGYCGZXWMNABILCUXYTAUKVOSBLUFPXTDQPQPMQQTRECAEWPF");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::CcuEvent tmp_msg_3;
    tmp_msg_3.type = 250U;
    tmp_msg_3.id.assign("PTAZYOLKJEDQUBBLEIHAKFYKZGYXYLGFPOCWNKARXWTPENRMBQZPQDCBAGPCSRYPQZUXDJRWEWHTGDJEBSJJWFHNRSVYHNDUMTPGLDOLCOFHPTVIXRPSVLMZOATYHZFROOGKRXWO");
    IMC::Depth tmp_tmp_msg_3_0;
    tmp_tmp_msg_3_0.value = 0.130062959814;
    tmp_msg_3.arg.set(tmp_tmp_msg_3_0);
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
    msg.setTimeStamp(0.674148934419);
    msg.setSource(61331U);
    msg.setSourceEntity(35U);
    msg.setDestination(19625U);
    msg.setDestinationEntity(207U);
    msg.maneuver_id.assign("POQHOHPCWOYFRBDNCNNSCQVZFKIGXXAWESDKPSKNZZENGCSOTLABOMJVDXQRUAIREIZKKKYEYZFFDUHMIIJLEKIAXCFQCGTCRKDSDBRMYJMVFMUMOQYPWSDBYISSPKQUPLBIISOYSVCWEHFUBTLJHRNYAHZXBDGARXZJRCVVEZZNODGHFCMRMGMTIQLHLPJPLVNGAWKPXAUXJJAXBLHEFTTJQWTTXBUUWMUVGQYDYRBVEAGNQTVGZWWOJOT");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 2685U;
    tmp_msg_0.lat = 0.198579132652;
    tmp_msg_0.lon = 0.679321646119;
    tmp_msg_0.z = 0.878493446612;
    tmp_msg_0.z_units = 110U;
    tmp_msg_0.speed = 0.358816546047;
    tmp_msg_0.speed_units = 82U;
    IMC::PathPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.250001533509;
    tmp_tmp_msg_0_0.y = 0.913532473056;
    tmp_tmp_msg_0_0.z = 0.0743257324285;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("EZDFGGEYPYFANISTAODLOUNNLOCETJYXAKBELSXHGUOSOIFYYEJMPHSWMQRBVGWYXCSTXDCNFRLXARLQZVERJDPFMJUVGWESJXYDRQEBXQNAFICGIPEMZRSBPKNNLCCHIUWKRWTHOWHVQVJBAHOEFFDZMSRIHARUTWQ");
    msg.data.set(tmp_msg_0);
    IMC::AcousticSystems tmp_msg_1;
    tmp_msg_1.list.assign("KQVKBKSTMAGBATFACRQFCVZFNYYLPRJHIFZCWEQTBZGRPXTVZTUSIJUSBFDMCYMSJSFDODBWYMLDDMJXSQJZFLWLTMCXYUVLVGHAYPHOVCNPPNGAFOGTLOTQLUHXLHXIEOIHWNJKYXACOBBKIHRMQMZSMOEYLKEVZMBBAXVINPPQGCEUEOKCNJWVTYQDPLGRXJIWZRGKJWTSPGWZEUHFXIRUNUARQEESHAKNJYIIDSNOEKCQDWFAD");
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
    msg.setTimeStamp(0.0892902730591);
    msg.setSource(8097U);
    msg.setSourceEntity(141U);
    msg.setDestination(34138U);
    msg.setDestinationEntity(246U);
    msg.maneuver_id.assign("KBCTSFGCSACBGNIJCAUQNYLKEWISMVSWKPPKDGJNHFEQWZKLH");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.589687198805;
    tmp_msg_0.lon = 0.232418401229;
    tmp_msg_0.z = 0.743286313241;
    tmp_msg_0.z_units = 109U;
    tmp_msg_0.radius = 0.69081074225;
    tmp_msg_0.duration = 41960U;
    tmp_msg_0.speed = 0.964018922768;
    tmp_msg_0.speed_units = 176U;
    tmp_msg_0.custom.assign("SEOKXQSUSRXOYFZSAXOMYCVSCLGZJFXBJCZASPLUNQMNHFCNQHMUNKHTDXDKGQZHKXGSETALSTXFKQTVEMQWZWBWPIYDOUYYCPGKGZOJJHPXWRNVYOBTDVVNIIGZWBLJ");
    msg.data.set(tmp_msg_0);
    IMC::SonarData tmp_msg_1;
    tmp_msg_1.type = 167U;
    tmp_msg_1.frequency = 3556976798U;
    tmp_msg_1.min_range = 61776U;
    tmp_msg_1.max_range = 5136U;
    tmp_msg_1.bits_per_point = 141U;
    tmp_msg_1.scale_factor = 0.296252156397;
    IMC::BeamConfig tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.beam_width = 0.451692780636;
    tmp_tmp_msg_1_0.beam_height = 0.646214739402;
    tmp_msg_1.beam_config.push_back(tmp_tmp_msg_1_0);
    const char tmp_tmp_msg_1_1[] = {33, -87, 48, -122, -67, 61, -69, -121, 8, 27, 40, 84, -34, 101, 110, -41, -70, 86, 107, 64, -13, 112, 50, -90, 32, -49, 102, 110, 21, -97, -110, 56, 55, -67, 89, -50, -10, -31, 60, -1, 53, -22, -20, 39, -4, -75, 106, 24, -7, -60, -90, -30, 37, 53, 89, 13, 1, 112, -112, -97, 126, 89, -42, 44, -30, 82, 51, 20, -75, -50, 0, -46, 122, 64, -64, -44, -115, -44, -15, 53, -21, -26, 91, -95, 23, 125, 83, 106, 104, 49, -32, 78, -110, 2, 87, 69, 80, 24, 74, -90, 100, 62, 99, -111, -105, -73, 119, 112, 101, 88, -80, 78, -48, -120, 7, -81, 41, 37, 55, 35, 99, -18, 20, 102, 21, 35, 122, -66, -121, -46, 36, 108, -127, 56, 17, -12, -106, 53, -61, -20, 1, -37, -114, -2, -19, -18, -87, -26, 109, 90, 27, -43, -84, 105, -43, 40, 97, 51, 38, 23, 15, -103, 13, -71, 51, -67, -1, -107, 68, 10, 87, 124, 30, -123, -89, 11, -79, 27, 72, -23, 26, 112, -91, 39, -17, 50, 103, -58, 78, 116, 4, -121, 22, -97, 7, 1, 16, 19, -32, 57, 87, 105, 68, -33, -75, -125, -5, 26, -122, 93, -98, -47, 99, 22, 39, -123, 112};
    tmp_msg_1.data.assign(tmp_tmp_msg_1_1, tmp_tmp_msg_1_1 + sizeof(tmp_tmp_msg_1_1));
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Calibration tmp_msg_2;
    tmp_msg_2.duration = 17694U;
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
    msg.setTimeStamp(0.622718956159);
    msg.setSource(50501U);
    msg.setSourceEntity(121U);
    msg.setDestination(47505U);
    msg.setDestinationEntity(0U);
    msg.maneuver_id.assign("OZVNRTBXYZAUYVPIZJGTCMLBNBJFMVRGSAJVGXXWQGIPQDNNSSVHTPFROHYEZCXEGTRKIXEKWRYCQVXWFTHJSSBQTALLBALHWZJZWCCPZIMNKGDJFIRBBPUYGKRDAAYKSHUOTMFKPXIQNWTUQZWEMQCLMUYYPNEVSJDM");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 36759U;
    tmp_msg_0.lat = 0.327184995388;
    tmp_msg_0.lon = 0.0325091634118;
    tmp_msg_0.z = 0.18033840068;
    tmp_msg_0.z_units = 27U;
    tmp_msg_0.speed = 0.593676952271;
    tmp_msg_0.speed_units = 182U;
    tmp_msg_0.roll = 0.308324217555;
    tmp_msg_0.pitch = 0.4103392579;
    tmp_msg_0.yaw = 0.154346948943;
    tmp_msg_0.custom.assign("EEVHEDVOTWBJYVDTBJLKISBOCYNQBNHLDCGWGUZFNCIZWFBDQRYNOJOVNNQMRFJOLWAUCSIMGBCFYHYRPTHCJZZBKRIYUZTKUGMR");
    msg.data.set(tmp_msg_0);
    IMC::RemoteSensorInfo tmp_msg_1;
    tmp_msg_1.id.assign("GMWUECXMDRTSFHMNSRVIQJPYWJKVVTOUIA");
    tmp_msg_1.sensor_class.assign("AQSENRAOLTFEIPADLJQGSMHYEROHDQXJQCDGJRTPSNPJDAIRLQMWHWXKVYYXOPBAPCRUJAPANDEDTFVVSWLHTWBCGFU");
    tmp_msg_1.lat = 0.447023615457;
    tmp_msg_1.lon = 0.483882160929;
    tmp_msg_1.alt = 0.335466555318;
    tmp_msg_1.heading = 0.918766510012;
    tmp_msg_1.data.assign("PBBCWBNZQKTALRVDDIUJCJPDZKUBDNFOUJGVXLBUUZEZRDPZEGMDTXOAYRWKFLXUSNAQHKNLXEICRTSALPYBGSZHMYWHLELIIEIMHWOUCRGFDPOHZJHVMARFFTTWLPAVEPSJYVMGOYEIVHVSGKIKNZCNDVZXUAYITRYSRQOTSNELNAQQKJMHKHWPUSWXRTTBJZIFCXIUSRJVQOCPQFMQGXBXOAJFG");
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
    msg.setTimeStamp(0.127411013031);
    msg.setSource(25003U);
    msg.setSourceEntity(183U);
    msg.setDestination(6973U);
    msg.setDestinationEntity(176U);
    msg.source_man.assign("WCFSFCFGOOEZNDVTJHVHUSUIQNCIKTZBPXMKDQUDNKNOXGZEGZJNIQTMLCLMIWPTOMEQCLMWAZHFCHADVUTKNOXRZVXFFBRETBNAHSDJAUYIMDTTHRHTJWFHCYBKMLFYKNVEAXRJGGLYKXWRELZZYINPWSJZSUILADJPITBNGXBGSGDXYEAQYUCXVQPQPBPWWJOAKQBKARDPPRSSLZDABXHHYUCYVFKWSOMJ");
    msg.dest_man.assign("ATCGTMNMTQOIHKXIAFZUKOSOKIEOTJSJFWEHDPEISAQRFEQJWQUJNBZZVBRRYPBSGFOMGGYYJJMFAPDRFYYZEDXHWMBFANXLZRZCVXACMHKDMQWGHLORIAMNEQVJWYPLXINSAILKDJQOMIYCDSUERJCROKTXFNMEUNZWBULCWBJIBKGTVHKXBGUVYPPCVYZVQHLUGHS");
    msg.conditions.assign("YLXFPQABZBHXJXUKWECEVKTATMPOVDXCJJWOLMUCANGYYIEIRWDTZIFBPMLWGFGJXRJBAGVFYSOQWEKVDVQSFQZSDNTHIBGBAIHNRUDYNIZ");
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.539186222482;
    tmp_msg_0.y = 0.13081539046;
    tmp_msg_0.z = 0.551279044149;
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
    msg.setTimeStamp(0.260804743123);
    msg.setSource(16296U);
    msg.setSourceEntity(251U);
    msg.setDestination(1997U);
    msg.setDestinationEntity(131U);
    msg.source_man.assign("STRXJWFUDXDPAQNYAVNMJUHWXUGFTWFMVTPLKIDNCGERDLSJZNBOLBJEDMBDSWQPEGNMDWHKOGPBJDOOUQSIZVOHAWCZAWJHEAFVYGOVKCYTJLHUTYRSKLIWZIMBQGCRRUYLDHNKSXZOCIXXBTYQPOQCPGEFHQBPJZPFNSW");
    msg.dest_man.assign("TZHOJKESRRRIVLXVAZKDGJFKUOUIQBQTZPFMRMIPLJJXODCVYMYWMUTPNBTIEVTCSDDUWISEYALWNQMGKGQALDHQUUHRKIWTAVIEJUTXSASUOJFBBXIETJOPPNCLSSBVJGNZGMBAFZWYKNRZEKAXMNTXYFERDWOQGMLSEOYKXIHCNSLWCXDSWKYFJNHHECI");
    msg.conditions.assign("TAHGPOGSDFLKYJSDFRLZAZETOWIZWDYREGTSMSYQEDSAEKDQKSEPDISEFIRRNJOIOQNSWVJHBCTIULMYVOZBUIXRQXUOWCGPGVYVTALRHAJOPGZVUFCMB");
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 1848746611U;
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
    msg.setTimeStamp(0.19604108292);
    msg.setSource(15549U);
    msg.setSourceEntity(188U);
    msg.setDestination(39991U);
    msg.setDestinationEntity(47U);
    msg.source_man.assign("HKCVUFFJHBDTDAOQFUYGNFOZWVDKPMXNREJRSPDPGICUQBSCKENXDLWZGCENJNLHCZCJMXFELPCUVREFWIDMUAGBTZYOQBYZKXOWTVJWUBQVMULYVBCAUKFNWCCRIGNKPRDDNXHSNKLHERUMETAAHVAKYYQYJASBJTLSELMYWRTVBMOFJ");
    msg.dest_man.assign("RXVMGGYWNIJTJFPNJDCAUQBWNGUNYDHIMLLPXFLKWDHZKIJMSHSESVAVOXUJZZZAYCCBEBTJQAXWFODXMLOZDHEKXXHYTFZPZNESBIEZVGORIFEDQGTQGRYPRQWSAGCULZIKXLNTTWFIEHILVHTVLPHSHYNAEF");
    msg.conditions.assign("XDJKPQQQGTIAHPTPHBFJADYVCEFTRYGUHTZXUUYUKIHUXWLFCLWHIPKOVACIGWDUZHLCLWGMQROUPMVOPWBSCZLJKAJWPSRZVEYLISWVMTSHKWDQKVHDB");
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 36405U;
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
    msg.setTimeStamp(0.768338931588);
    msg.setSource(10953U);
    msg.setSourceEntity(123U);
    msg.setDestination(51717U);
    msg.setDestinationEntity(219U);
    msg.command = 179U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("VIAHUMQYBNJURSMCERJKQSONXNAGJEDZUJPH");
    tmp_msg_0.description.assign("HTSTIASYYITDHOJLDJPLRXWXOGLGMVBAWJFKZYOAEFZOTHEWDEVKQCERPKMRRWPCAHZHVOKDLHFEHNUQBFYXITCUQXNSOTFNLWPSPANEXDFQIGZIMRVKLMATTUIQDSNOSRNLXCVHIKHKRUVBZUCSKYIVIUEMDOUXALJWGDQSSNFCXBWGZKBYPCJPVIJZXQW");
    tmp_msg_0.vnamespace.assign("LWUGGCRCGKLUWOKNYCVQNMQFYXQWJARSEYTIFDWWFGXITCDSLHUGJAWDMRIKCIJQHOHPTKPMVEQBYJQVELXTOMGXWWZFADIJWVTBOJVNEHMJNLUKJTLAHBOKTF");
    tmp_msg_0.start_man_id.assign("TKUQHLFKIBZUIHJUEAWLOOPOQFBPJKNNVPJGBSCMSXAQMNJEDQDZVEBYGFPJYIVSRBIZORSNWKENLCTRUWSLPRFBZTCDDEQQHURTURRDMSJCUHJYPYHGMSYXFYTEPYNARWVHBTQHGEDLOIXYXLAZZQVOJBVWKLOTAMUQVEGBKPAGGWDDXMUQCLEVWKKLLXXGAZATDXCTAZNAGIROOHIP");
    IMC::CloseSession tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sessid = 738056453U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.137418045885);
    msg.setSource(34372U);
    msg.setSourceEntity(138U);
    msg.setDestination(56803U);
    msg.setDestinationEntity(212U);
    msg.command = 38U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("IUFHIYHRKSIGEDGMNCPHJSRTKVRLIYQJNKWSCNZMJAZLXKTZWTNGONCXCKRPJAYYWAMCUGLQOMPQAZNTERHUWDLDMNVDFKVLYRTYCEMIPBXEFVWNBHHOUSJBEEXOGMOYPOGAEWCQUNSKYEBQJBBDFKDRSRLZJHVBLTOSXWDPVQRCCQGZXXQPHPWSFYOPVTWQDLMSPOTFGFJKA");
    tmp_msg_0.description.assign("SLGBEQISZJUFYDXDMNWSQVVFVBNTMEFROCRYDBIXJAHKELBUOHCZQGWUXHMYWSCSANZNLHELDYWPBZOFVSHQXKTZCWYRNDGUPFCGKYLFNVITTWDKKMIRMYDFREARIHXOBRCEABQXQUTVKPNHKEASVPUBHMXMUPJGAFRCMAPAXLEOODTWVKPXXWQQIFHOOLRGJMVJW");
    tmp_msg_0.vnamespace.assign("LFMVKEREUYRVMAFEBFKFDZRJDMREBZLPXWWIHQWXYJXOATJQOLJWVLCPQECKNSTXXQQYMCOMPPVFWYLACWKFDRATPHHINTSOAKJOHCSQVJVLNBFILISTROTADNDHBXPCYGUMXZHHGUMIKPZNYVZJAEVKECSUKQQXRDMSSEUAPLCBAGKNZNUAOZDXDUGZMLPJBBIVJGSYRTEZJFGISUIGTDOHEYRFNRLXBDWBUMYINCSPWNU");
    tmp_msg_0.start_man_id.assign("NRQEQVGFIAAVFKFTJYPDPUGDVZQLIWEXGFQKXL");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("VXJQIHIWQETWLSHUNUKHAXYNXYSCTCESDTVCEKTDHISAXBJWCJCZNNDZFFPXXUAPUIRLTDDJWVBJQIGWKVCYZMCEIXYMMYFQMLEMXVSCQGPQVJRMVOFMDODNGBBHNEISIAAKYBNQZUREMEBLLKWBJKFPKQMJRZGWEPFKYJHQZFYWSGHLHFOTQRXUAZSTRHBGUYPTPUVVORUAWLRWGKFBGOMZSGGZTNJ");
    IMC::Rows tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 53703U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.366948198598;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.301893160934;
    tmp_tmp_tmp_msg_0_0_0.z = 0.267338664525;
    tmp_tmp_tmp_msg_0_0_0.z_units = 15U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.483979231265;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 176U;
    tmp_tmp_tmp_msg_0_0_0.bearing = 0.0355359535338;
    tmp_tmp_tmp_msg_0_0_0.cross_angle = 0.797779904993;
    tmp_tmp_tmp_msg_0_0_0.width = 0.882986040103;
    tmp_tmp_tmp_msg_0_0_0.length = 0.44828030412;
    tmp_tmp_tmp_msg_0_0_0.hstep = 0.504990700685;
    tmp_tmp_tmp_msg_0_0_0.coff = 233U;
    tmp_tmp_tmp_msg_0_0_0.alternation = 225U;
    tmp_tmp_tmp_msg_0_0_0.flags = 205U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("OZCRCHJPHFJVTTSP");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::ControlLoops tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.enable = 0U;
    tmp_tmp_tmp_msg_0_0_1.mask = 261179110U;
    tmp_tmp_tmp_msg_0_0_1.scope_ref = 3163257959U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::FollowPath tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.timeout = 40912U;
    tmp_tmp_msg_0_1.lat = 0.694495232388;
    tmp_tmp_msg_0_1.lon = 0.372941920537;
    tmp_tmp_msg_0_1.z = 0.475317541146;
    tmp_tmp_msg_0_1.z_units = 231U;
    tmp_tmp_msg_0_1.speed = 0.761650020642;
    tmp_tmp_msg_0_1.speed_units = 211U;
    tmp_tmp_msg_0_1.custom.assign("EWWTGXFMPXQYUKZIZPVCCIJRZTMLALJNLVYSCAWHWHVZSGHEIPIFJWMOCTOTUGIZKYKKBEWAUEBAQOI");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::VelocityDelta tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.time = 0.571306165342;
    tmp_tmp_msg_0_2.x = 0.824298157466;
    tmp_tmp_msg_0_2.y = 0.835368952269;
    tmp_tmp_msg_0_2.z = 0.543995828877;
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
    msg.setTimeStamp(0.703155563585);
    msg.setSource(21605U);
    msg.setSourceEntity(165U);
    msg.setDestination(44046U);
    msg.setDestinationEntity(174U);
    msg.command = 136U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OGKXEXKVLTWBSYQRKJMJTLTFUYUTRWVXFUHNJHPWWRJNMYXVZTGFSKJIZCSSWEETUGQLFXKDADGCZSIAKQACZBIPHELFHACUZXJOFDBQPKJNHGRCDPNDCAZMPJMXRCSLOGREGZRBBSHZNDTJINZOLPCBGMMVNPQRVWKUQFTLYIOPRHATKNDEVWJBYBU");
    tmp_msg_0.description.assign("ZRDDVZSZMPYHCTBFPEKGLLZEYTJWSQOXFWQGLV");
    tmp_msg_0.vnamespace.assign("HBQGYWBQPAHOMRAXLIHOMKNQWGQCYKBZRTUKZONWASUXP");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KNZBOIFMRLJSBLMUWZPVNAWNPHRKTSKSFNONAPTKEBXSZUIUMPQKVOGABPCQCBSZIBYYRGHDOUVOKZMXXTPZIGBAFETCXFDLFVBPJHPNUFVMIWTJQADWAQGDQPBIYERJKYQEWYQXHOGHOGTCLWQRDSLXHWWDJOVYAYEEWSXJDPEKZENUCSIJNCJDVGDHRMZTMWVRKXFQJVFH");
    tmp_tmp_msg_0_0.value.assign("DXECBNMDMJJJBWEFJZYBGVGIFGOFQFIDOMMJLULZJCPSIEPTAMSVTQHWYXLXUVRBTNHORYMZNKAQYKIWTHBMRTUCAWENYEUXOJELDCMFBDAPTUTZJPENZXLSKSAGPENEHJGUSLGBTYAUIFFQRDJDFRGZXMYOVVOXDLCKARIWOQZLP");
    tmp_tmp_msg_0_0.type = 28U;
    tmp_tmp_msg_0_0.access = 14U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("CLHBUYMSTZQCWZELWQNYUOFSKXBDIPHAVQHSDSAXIHESYRMKVTQTXOMJPWFOJEFUPGXIYRPQASBUATNJPJIMQKDUEZ");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("ZXSFTWJZGCSNOUPSETHAFGZCEWQDDCPBUPNPBODNCVVVYARTHXBTYMBKRQYQXURSIJJGRFDCNLCKXOOPCVUOGFREIDGWANPWCHMVYQRBQMMRNS");
    IMC::PopUp tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 24199U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.935361566258;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.594619880114;
    tmp_tmp_tmp_msg_0_1_0.z = 0.19095141898;
    tmp_tmp_tmp_msg_0_1_0.z_units = 223U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.188893345325;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 161U;
    tmp_tmp_tmp_msg_0_1_0.duration = 23917U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.197008742137;
    tmp_tmp_tmp_msg_0_1_0.flags = 156U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("BALNJXQYSGYMNUAVOEEWHOFGICJKESBJBMGZEFXBGSGOTIXBYRCCDWRLLXWEKXXVMVHLAIGDDPRVLMYSVHNMZTKDPWSQQRSKANNSDXSJEUFHZAEVDPPUCAWMYQIYTCCKLBJNJMWGDPHIXMPZIAGOVQKDMCSDJALTQRPREWFXTWICNEFHTKZBTITZMUHUYKHUORQSTLZKBUQNFVXOLHIZJTQGQYCUFCZNUO");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::OperationalLimits tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.mask = 89U;
    tmp_tmp_tmp_msg_0_1_1.max_depth = 0.818505794915;
    tmp_tmp_tmp_msg_0_1_1.min_altitude = 0.405572067395;
    tmp_tmp_tmp_msg_0_1_1.max_altitude = 0.0167040545237;
    tmp_tmp_tmp_msg_0_1_1.min_speed = 0.803210869152;
    tmp_tmp_tmp_msg_0_1_1.max_speed = 0.0771501475708;
    tmp_tmp_tmp_msg_0_1_1.max_vrate = 0.378540509539;
    tmp_tmp_tmp_msg_0_1_1.lat = 0.179611637447;
    tmp_tmp_tmp_msg_0_1_1.lon = 0.640165504328;
    tmp_tmp_tmp_msg_0_1_1.orientation = 0.627345885128;
    tmp_tmp_tmp_msg_0_1_1.width = 0.774415597982;
    tmp_tmp_tmp_msg_0_1_1.length = 0.740794478465;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::CustomManeuver tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.timeout = 46905U;
    tmp_tmp_msg_0_2.name.assign("JZNALJWYSBEPOXKTRKNAUMJFCKIIQVYUBQDNRNSGJXGCKBMMXVDLFEESKILBOYEFHVMTTHWKVLAASOORZWTKJXSUZHCNDPUETBQN");
    tmp_tmp_msg_0_2.custom.assign("NSDRTVQSZDMVSJBGDZCDFVSECKBAYOTYPLLIWXMPQQNIYKAFSDBJCAILMWIMKCVTUCJKAVURYVPBEUXJYTCWMNOFPECEBWHPUWZDPXXXVEHHJOZOUBNSGRFHNZWOHAJLXQPAWHZITNLLWOFRZRJOYGSPBDXLUAPNCKZTTTGE");
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
    msg.setTimeStamp(0.9815815129);
    msg.setSource(35667U);
    msg.setSourceEntity(193U);
    msg.setDestination(6133U);
    msg.setDestinationEntity(111U);
    msg.state = 221U;
    msg.plan_id.assign("XXGJMPVAMAEFGLRQRHWPBTBICZYYAVIBZOWXPFMEVPGHDTHIFDSRZNNKLQPEIEEOIBTNDPZBDNJLBKGWJLAGHOQGNJCLFATYMMKGNXIMWPTQBRDTKAVOYFBNURJJSVWHTZWBAUBHKOLHYKOUFXYYQUXIXUXMEPDQDZFFVESUVYUCQLDKXQMSNACLOTKCAGGOPWSURTSRKDAEZRC");
    msg.comm_level = 27U;

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
    msg.setTimeStamp(0.317873018265);
    msg.setSource(35030U);
    msg.setSourceEntity(142U);
    msg.setDestination(21166U);
    msg.setDestinationEntity(130U);
    msg.state = 51U;
    msg.plan_id.assign("BSHVHMBTXDNPQLIAZWOESAZXCONQXPUCFAUHDGS");
    msg.comm_level = 163U;

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
    msg.setTimeStamp(0.464443985193);
    msg.setSource(2883U);
    msg.setSourceEntity(163U);
    msg.setDestination(28944U);
    msg.setDestinationEntity(200U);
    msg.state = 11U;
    msg.plan_id.assign("CXFVTGXYCMHIKRMYSWBFMXDSANJMUCAZEBBWTZXWGJKTAPXGRHEIDNDOQUZYELEUFJKPJTGXCAEQKVKFYAPBYNVWUFKCOKJXGDLQLSVFAEONWVAMUHMYWOROYBUBOLNTOBECDLYSYHFRIZHODUJUXTINFNOREVZHOCIQHZVMPXJVSWTSNBTNCLQPARGS");
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
    msg.setTimeStamp(0.920447048132);
    msg.setSource(58855U);
    msg.setSourceEntity(78U);
    msg.setDestination(8428U);
    msg.setDestinationEntity(191U);
    msg.type = 241U;
    msg.op = 48U;
    msg.request_id = 7546U;
    msg.plan_id.assign("FUQGFVOUNJPGSATIMZNJJAYQJPXBFNGDQUBLOWURICTRICVZMZOUIQZBSXXSZSKDWZBEYGFBRVJLXAHSIPJLHPTDIKVCLZWTXCDHCDIRASMENGCJUWAKVPWHFXKLKMGPHEQAYEPPPOBQOKUISQNTBCGREYMQBREFWGROQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("OQXGWYCWLHOUPBMFMXSSMOFWUOHPCVXGTQGZHLCETCDXDHIJAKABEI");
    tmp_msg_0.predicate.assign("NQQMLGEFMHXZXFEPZABAWHSHJFSTOXNOGKYGQCUKNNMLRHPNQXHYUDOMROASSENXLQPEAYYTZMBMWCTKIRPKIHIUKJTDZKPFNYWXGDDQSFBTWOECWYKUKFEZNXMKJQODAQXVBPLUAUJNADALPJGDHPOYXZFIIRZJGVBCVKRJUQAVCZZJIOSYFVCBRJHWCWSIBNDTULMMHXVURZCYMCVTRTLLGUPIVTIASWSRCRYIEW");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TSLIJIVGIFMTDOJQYPEPCEVYAZAMYNDPWRIOAQGGXHOBOAGHYFZSMKLONHZWTHZJMWKVJNLFUTLULVYQYBNCGMMPRUYXOGLVQFVCKWTERESGELMHCBZRWFZKAUBDTAOSISFYDCBEHWXKCBNUWJAMPKUEDCBVQHPXUOVOMLGJZ");

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
    msg.setTimeStamp(0.161032868367);
    msg.setSource(3187U);
    msg.setSourceEntity(87U);
    msg.setDestination(48376U);
    msg.setDestinationEntity(56U);
    msg.type = 252U;
    msg.op = 9U;
    msg.request_id = 56417U;
    msg.plan_id.assign("PUAHRMZQVJKHJFRLAZDGQNTFUNWFGXJPRGVFPYYQWBUUTKOCHZESGEWUEOOSDLJABOLYPSXIWZKXTBLKTAKAIENDVHRLYXIPILYYACNNKJPGZORMFVTEQPMFAHNLDHVBQJFDKMZSBSRRPAECLH");
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZPUJUFXCLWZHQRLYPEMGGIPQUMLEFBXSEGBNMNAIIXWMGDXNZGNGRBMVTTCWVETBEGAQDHSTANJXHKBBUCWVERQTVQODWGNUERFROMUYKKDICTBAFROFZODOPPWYBZMFXCDTVRCJLJDLAHXPVTIYDZPHZFSAIYBLAOMHSGLUJYOF");
    tmp_msg_0.description.assign("OSCYLMHVRCRIJZFAEEZQWUVEKVQTCPOIDGLKR");
    tmp_msg_0.vnamespace.assign("KZPZXIGVOCGEPDJSYGFLTJUDCXASZPRSKKTTFEVDMNQEMOYDWZIICYVLMPNZPJHROUZENJBJYFAWXDUXQRJYFRFSYGJEQGTAUORKCFUBGNMIVOLPMNPVMUWEHQQNQLVWLMCXBANSBBGZJMKOWEWRPXWZBLEDCADLBBOAQONAPIMHOJIYPHYHRHKEMCDZIIWQKFWJDL");
    tmp_msg_0.start_man_id.assign("XMPMKNGLYTOHEFHRCBEKWRJZPLEOCPXHFKISSAVDKGHPNYPSXVOURXNILGJBQIRDDSTYJAPGBWRPFUJFTNYMYQICYMBYPMDSYZPWRGKAQWTVNBZJVCZXOVOECATVMVVXQNXRUZMNDEIKGGFFELQFDJMBOZIIYGOCMUFRRCSNDWXRWVUTSWAHJYZLLEBEDGAOXGADCTJNKUBKJSEFLQHOAPBXLUBZVNWWA");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("CASZXLKCVHEYXEAKUDZDCMYYCGMQQFATVRADLPKRMWAPBMCXVBBYDZFRRLMIZQXBCXZBTCNRVUOONDTHOHCSKEBBYUEDRZFGZQUWITUZSNVMFMKGFGDITYJSDJJOHUVVOWBOITEWHQSMLPYXSNJHWJKEOSOQXTWVJZGGANTGPPBHWGJUYPTHLSCITRLWFMMD");
    IMC::VehicleFormation tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.186883098715;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.78231919743;
    tmp_tmp_tmp_msg_0_0_0.z = 0.672901599408;
    tmp_tmp_tmp_msg_0_0_0.z_units = 239U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.328748230396;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 245U;
    tmp_tmp_tmp_msg_0_0_0.start_time = 0.550705915538;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("DEZGHASHRCENWAVCCAKHZAUSYJEYCYGYFIWMNMRRNWOQEJEMRRJTPWILPWPVTGIEXIBYHHCTKEBUVYOXULDOEOG");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::Collision tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.780540973787;
    tmp_tmp_tmp_msg_0_0_1.type = 107U;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("KWAGUARTHHQSMPFMKFMONQESBVLYOZJLPAKQBZIAXJJDVFNBXWDUFPVOJFYXUBLBTVBEISNCSYSGNRYA");
    tmp_tmp_msg_0_1.dest_man.assign("VUPFCKGPUOUHRGMBXNZFRIPRJISOMXHLZBALXNGQCOFEXGDDVSEIUQDQDFOXDHCYHWQLTVVVMBNXRYDXWSZABRMHUZLSVSWCOTUXWLPONSRFPJZAJVOIBSTYWMKBBAIUZHINEUIRKXFDZMZYIJRTYVGHYDJTZKFGFOJPLKBWWNEUJCZIEVTETWGGTGFYTADEQCJDQRUQEBTJKSOBKNAMPAMX");
    tmp_tmp_msg_0_1.conditions.assign("PRZGTIKWZRQCFTVWXVYORSEVNIQMILSGOFAHGAJVMUUKNQOAHCENPGTMJJVYJMZXKBQLVDMLAMANVZXZYABYSSEXBWQDHXNLSQDUHZITSCZBCJEYXVELADDDXSETUPCTW");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::QueryPowerChannelState tmp_tmp_msg_0_2;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XSGROBVRVBWEURFNGALHLBPEWFXMDVLAJBRSTRTTSSNZOFYZJZZNH");

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
    msg.setTimeStamp(0.00532375998675);
    msg.setSource(46324U);
    msg.setSourceEntity(98U);
    msg.setDestination(15417U);
    msg.setDestinationEntity(130U);
    msg.type = 121U;
    msg.op = 117U;
    msg.request_id = 27031U;
    msg.plan_id.assign("WVZDCLDSJVETLHKHCXPMFRGICYOZXPYIJGJAQBBFFJZLAYKOQANOJWHRPBTEMBDOEJBDHAHRXPSWIUUFSCVVKHDPMITVRNGGBVDQGXISNMPMBWKAEVPZSZYGJIRWMLYFYVAPLZNSOYJQWLOFHMRLVCTDUGURBUNTURQTCJDQKAZMPELYOUIMZQPZDQDTTXCQWFNGLSCMZRKCKYSXWTIEKSULNWQJHEEFOXASKNUAGTHHNOUB");
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.445151371217;
    tmp_msg_0.lon = 0.586377162397;
    tmp_msg_0.z = 0.689906290932;
    tmp_msg_0.z_units = 252U;
    tmp_msg_0.radius = 0.0311491452957;
    tmp_msg_0.duration = 1359U;
    tmp_msg_0.speed = 0.458085036801;
    tmp_msg_0.speed_units = 13U;
    tmp_msg_0.custom.assign("COYMGWQGJXHBAVSKTJVIEDZDSKPFSDPDHMHFZIEGCKOCKOLCREIBFPMBXVRUCPGVONGUNKHYFSGXMRXKTZQVIQRYEVJLEQJCZFFLYWBSKKYYJVAYP");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KKJDJVOJOPVCLPPPINSQQSFDFRNZEVPLEVBFABJYLAGQZEYVJHARSBWYJTXEMNGWZCJUXUNDALKEKVGMDRZRSBSZQRTGIRHZNYGHVN");

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
    msg.setTimeStamp(0.391947948591);
    msg.setSource(18346U);
    msg.setSourceEntity(82U);
    msg.setDestination(57931U);
    msg.setDestinationEntity(184U);
    msg.plan_count = 60216U;
    msg.plan_size = 1721174168U;
    msg.change_time = 0.547869650947;
    msg.change_sid = 3548U;
    msg.change_sname.assign("BFBPXDNXUQGGEMMRNRBXSSNBUYFTBYMWPQGMBYGFCDWSALWPYZADKYWJYHKTGMRIREWDEFAQJIEPOOLDUPMUZLUFDZXWVLAEBEQKPZPHTCUJGTBVSVRCUIWNYFHKTJGXLFEULGCQJMUXBHNVDNDKVVKAOJNQJIZXORANQTWHCSTREHATIJXWOZSKVTDQFLHCSSOIWRPODECGRMIALYNVHYQ");
    const char tmp_msg_0[] = {116, -14, -82, -93, 93, 125, -32, -62, 77, 81, 80, -15, -21, 79, 122, 84, 89, 29, -82, 24, -94, -64, -64, 5, -112, -15, -38, -31, 17, 52, -15, 106, 22, 64, 117, 78, 120, -4, -55, 42, 124, -116, -35, -53, 114, 114, 50, 6, -29, 121, -18, 85, 50, 113, 118, 94, 118, -52, 35, 32, -38, 126, -79, 87, 40, 75, -15, 70, 117, 111, 111, -9, -68, -50, -21, -8, -84, -70, -33, 103, -93, 10, -109, 37, -14, 48, 67, 95, 100, 106};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("JUWRJSVCXWMULGNFHFZBSVKDJVETRHPLRZYMLZUDRFGCDRNDBXPAYLBWHVPWRHHWQJIYDXIOSOXGUUAOIYWFTOJDMYXKDQZATZRTMZANAZHTBKQXABOXKLNDTUWDFKUMKAELQOPNSAFKXRQOSMW");
    tmp_msg_1.plan_size = 35570U;
    tmp_msg_1.change_time = 0.885498067449;
    tmp_msg_1.change_sid = 45677U;
    tmp_msg_1.change_sname.assign("PSTAGHNVQAQYLZIDKMNWEKORJPIDTRPNHEDGAYPILXXMLIEHMWZS");
    const char tmp_tmp_msg_1_0[] = {-22, -5, 55, -68, -33, -22, 53, 94, 115, 15, -54, 7, -22, 120, -123, 105, 119, -97, -39, -88, 122, -31, 0, -10, 15, -79, -83, 90, 81, -19, -64, 96, 7, 37, 38, 9, -125, -33, 116, -99, 47, 59, 114, -73, 27, -79, -30, 17, -14, -47, 26, 42, 73, 102, -26, 86, 66, 35, 51, -24, -7, 62, -53, 52, -53, -62, 36, -55, 94, -81, -73, 91, 98, -75, 30, 17, -34, 19, 37, -114, 26, -117, -123, 116, -103, -24, 74, -53, 0, -53, 30, -67, -72, 103, 19, 68, -89, 47, -103, -89, 118, 7, -53, -109, -89, 30, 92, 45, 119, 125, -28, -63, -78, -82, -43, -61, 122, -1, -55, 12, 94, 3, -2, -73, -53, -121, -47, 89, -40, 56, 42, 31, -60, -63, -107, -5, -55, -50, -6, 19, -92, 110};
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
    msg.setTimeStamp(0.585883597127);
    msg.setSource(25109U);
    msg.setSourceEntity(245U);
    msg.setDestination(14183U);
    msg.setDestinationEntity(124U);
    msg.plan_count = 55958U;
    msg.plan_size = 1706526664U;
    msg.change_time = 0.639861613359;
    msg.change_sid = 16672U;
    msg.change_sname.assign("SWXUKIOPMOQJJFVBWHTQXVAETWTXUCRFRYTDOYDAKFCAGAFGYGYKTWVHSLMHIHXBTUHBIYUQZCDSMAKSAGJZWQBZOUDLNXPFCBGVNUVEJORPWTINQGXANEQUZJEJZIDLENVPMRNRGEGCPCECLXJOFTFXPWSZIJRTOSMNLBRVSUAKZDPGLXCDEHHEIMWWDQBSZQD");
    const char tmp_msg_0[] = {-74, 107, -87, -72, -85, 98, 2, 79, -18, 109, 113, 110, 66, 30, -55, -45, 13, -26, 65, 56, -101, -115, 49, -26, 39, 69, 82, 86, 1, -84, -108, 74, 46, -12, -94, 65, -79, 94, 30, -88, 57, -114, -65, 75, 25, 109, 68, -26, -4, 97, -39, 91, -57, 76, -88, -88, 66, 90, -75, 113, -87, 2, -10, -85, 44, 123, -87, -6, -39, -33, 39, 120, 59, 39, -31, 102, 118, 62, 114, 93, 72, -105, 24, 61, 28, -10, 19, 91, 122, 32, -81, -21, -82, 123, 44, 54, -127, 0, 100, 35, 39, 83, 44, 32, 8, -7, -111, 110, -38, 73, 78, 1, 28, -66, 60, 53, 23, 96, 46, -46, -17, 73, -15, -18, -102, -38, -36, 103, -74, 109, 78, -1, 106, -41, 111, -95, 110, -71, 112, -106, -49, -65, -41, 113, -82, -94, -65, -108, 105, 112, 11, 120, -118, -23, 22, 0, -17, -52, -38, -126, -71, -30, 62, 89, 13, 19, 67, 65, 31, -1, 24, -102, 11, 85, 32, 49, -16, 94, 108, -91, -114, 79, -34, 70, -93, -16, -60, -100, 34, -77, -40, -25, 108, -100, -28, -71, -98, -123, 10, 117, -32, -57, 79, -82, 22, -56, 82, -102, 17, -102, 100, -97, 76, -108, 77, -22, 32, 18, -91, -12};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("JKIIEKWJMSVWRJUDZLSOBNDMZFCRQAXYFRIQQWAHZFJKTUGGWTECYBAYULBPGOIWROVMLOSTSNXCIOJWGIYJEYNBWDXUYXFLPYMLBQSUJBZZQEPTCCVZHWXZOBTZCUEYMCUPW");
    tmp_msg_1.plan_size = 32299U;
    tmp_msg_1.change_time = 0.768710117553;
    tmp_msg_1.change_sid = 23541U;
    tmp_msg_1.change_sname.assign("QDKHLJCPDXAZVWGBEIYBVYHKSJXMOKSIKLLICDFOEYUHZVESTCQZUAOARNU");
    const char tmp_tmp_msg_1_0[] = {-108, -51, 111, 118, -55, 74, 83, -69, 49, 44, 113, 27, 65, 50, -119, 42, -53, 30, 61, -8, 23, -6, -115, 6, -13, -33, 79, 73, 125, -17, -72, 121, 18, -46, -97, -94, -45, 29, 17, 91, 32, -62, 99, -65, -66, -115, -38, 88, -76, -13, 117, 83, -40, 14, 42, 16, -21, -90, 73, -48, 37, -8, -122, -57, -56, 25, 34, -7, -114, -13, 81, -32, -2, 43};
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
    msg.setTimeStamp(0.699640294575);
    msg.setSource(5557U);
    msg.setSourceEntity(107U);
    msg.setDestination(60742U);
    msg.setDestinationEntity(147U);
    msg.plan_count = 57427U;
    msg.plan_size = 166212425U;
    msg.change_time = 0.313416381086;
    msg.change_sid = 2955U;
    msg.change_sname.assign("QPCKWGEPKOFEOSFAICPJFBKBWFRFRQXWAUFZBWYMENCQUFGCZNCJGITDMJITMAMSRXZNBDBVUJKQBTZAHUXQYVVGBXNEHVKIVSENXHKNAYIDMXHQHVRMCDOWKINWJ");
    const char tmp_msg_0[] = {7, -31, -102, -27, 82, 111, 56, 0, 94, 102, -65, 55, -70, -58, 91, 37, 96, 38, 60, 44};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("SDIBOGBBYINOJCBVCGZBPKXQOJUEPYWUIPUSUGMEITIFQXWVTLMYQSJUDVJALRFDNNQEBYCIXMZBFDIFEOEVHRRJGTKJNHEYTDRCZEYXIXLNPEVMLOJWFAHZDHDAYZYEZPGWFDQURPVBRGUDOSAOLRGPVSRCGXSTPTYMWCEOMAIFMSIXKAUQFNLHUAVGZNLZTCGXQOJFNWRRKVWQBZAKHHUHWQWFADBLCKSYQNKWSKTVKCXT");
    tmp_msg_1.plan_size = 28752U;
    tmp_msg_1.change_time = 0.496332332819;
    tmp_msg_1.change_sid = 64797U;
    tmp_msg_1.change_sname.assign("VQKWQQMHZCDAKPASTMINFHLXNGAYXYDISMVNZXHIGWEDUYSLZRMUF");
    const char tmp_tmp_msg_1_0[] = {-43, 123, 58, 111, 55, 54, 113, -83, 75, -33, -120, -56, 124, 102, -60, -32, 91, 74, -57, -109, -21, -3, -121, 77, 31, 31, -97, -84, 11, -101, -29, 55, -2, -62, -70, 113, -22, -23, 88, -25, 92, 85, -81, 20, 13, -12, -38, 84, 124, 72, -52, 86, -111, -117, 120, 102, 106, -63, -53, 7, -57, -87, -65, 99, -50, 27, -113, -124, -124, 116, -4, 67, 33, 26, -32, -112, -40, 31, -90, -2, -91, -84, 68, 8, -110, 14, 14, 65, -115, 72, 86, -29, 107, 56, 12, -109, -5, 1, 39, -123, 11, 62, 72, -12, 13, -63, -102, 17, 126, 64, -82, 30, -39, -118, -26, -108, -48, 110, -87, -89, -4, -14, 8, -26, 109, -27, 21, -114, -104, -16, 119, 56, -36, -115, 62, -62, 60, -62, -119};
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
    msg.setTimeStamp(0.230725716425);
    msg.setSource(11718U);
    msg.setSourceEntity(63U);
    msg.setDestination(10930U);
    msg.setDestinationEntity(221U);
    msg.plan_id.assign("DWGIFDACEXTCMSTOXEHHZPBEKDUDKVMOOEHTAPAFJVACBITUZNSQAKKMWZIYSDGYZSRTRQQUQUOULTHYAPDJBYBVHWWFAJZJVOIYWMOPQIZHDRNIFKVERLYUBDJXBSZNGPRCRLNXWGOCRLLVFCJLEBLFNHYRPZAGWQANNPCVQFSXPZMMWPINHFNXICQHUZIVWRXOAVJCLPEYCUFSGGQYBETDELJTUNUXHBKF");
    msg.plan_size = 45670U;
    msg.change_time = 0.355614776425;
    msg.change_sid = 38510U;
    msg.change_sname.assign("BTTBQIKPQTJVQKCQUQVILVMLWYMAQXWFJARGWFSXJRMDUOTBLNPKNCRPSDKYABMAAOYFHOAVZDBOOXWJDMKOEUIZMENXBKZOCJPRAYVMUEWWRYFXTXIRFWUQFBBFZMCTDXGJUVIDLF");
    const char tmp_msg_0[] = {-71, 0, 9, 112, -105, -52, -79, 4, 65, -92, 50, 121, 62, 8, 9, -95, -54, -54, 126, -7, 55, 65, -62, 38, -48, 75, -53, -41, -126, 31, -102, -62, 66, -124, 65, 89, -114, -83, -31, 39, 124, -84, -98, -110, 124, -21, 113, 70, 66, 107, -22, 13, -73, 27, -93, 94, -34, 51, -81, 71, -27, -119, 22, 16, -98, 91, -115, -91, 8, 12, 10, 19, 51, -108, -64, 83, 51, -79, -66, 122, -33, -46, 89, -89, 67, 80, -21, -86, 121, -85, -56, -52, 9, 24, 125, 81, 109, 81, -27, 83, -41, -60, 49, -72, 95, -118, 123, -47, 85, 85, -97, 7, 108, 1, -49, 74, -35, 58, 119, -6, -11, -86, -125, -79, -25, -5, 104, 8, 101, 62, -49, 78, 84, 38, 66, -127, -79, -46, -85, 21, 114, 22, -62, -122, 92, -70, -97, -95, -47, -115, 47, -54, 14, -32, 29, 70, -56, 84, -35, -53, -103, -115, -76, -33, 68, -105, 111, -22, -75, 85, 59, -73, 118, 124, -2, 23, -15, -49, 42, 116, 17, -22, 88, 107, 62, 123, 96, -106, 118, -112, -17};
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
    msg.setTimeStamp(0.748159640422);
    msg.setSource(54307U);
    msg.setSourceEntity(45U);
    msg.setDestination(56124U);
    msg.setDestinationEntity(225U);
    msg.plan_id.assign("YSMVPGMDDEIMVJXEFMTPEKPXUJAQZXSCMMTTFWLSOZYLAIUPIDBWRMOWTEUPHXRNQLQHWJIAJHXKSNCPUGULFOZVEZIRPLWVGDDULOCBKRISJGWFUPAKTVTFZOFFBWHCDGJMIJYGCZQYGQQQXCKWBDBUNSSZBPZHIFXMJXLGPNKTDLMBNSRYRKEBDVKEIRZCNJGJS");
    msg.plan_size = 15236U;
    msg.change_time = 0.972471904581;
    msg.change_sid = 24955U;
    msg.change_sname.assign("SNPQYLTVZYJXHPKAQISUELWPKOKWUYZDQKXRAMMDDPUPQGSWNMEEQKOT");
    const char tmp_msg_0[] = {47, -2, -121, -103, 60, 55, -63, -116, -70, -1, -43, -82, -80, 41, -110, -92, -88, -94, -17, 113, -104, 11, -98, -79, 79, 117, -123, -39, 91, -80, 28, -86, -69, -6, -23, 124, 58, -103, -83, 40, -14, 28, -73, 37, 31, -2, -14, 37, 55, 53, 126, 66, 12, 89, -97, -113, -123, 52, 25, -84, 40, -14, -13, -103, -112, -44, 51, 28, 109, 114, -28, -55, 110};
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
    msg.setTimeStamp(0.772788221174);
    msg.setSource(37157U);
    msg.setSourceEntity(188U);
    msg.setDestination(28495U);
    msg.setDestinationEntity(162U);
    msg.plan_id.assign("GSPZESYQDMCLDCWZUBZFUQVECNDDIBETENJMOCUQYTFUPLPLPKHZAXJYNPBUZFOYTOBMWXNSRMOSUKTROBAFGVXUVCUIHCVFXPRNJYQ");
    msg.plan_size = 65493U;
    msg.change_time = 0.537565218522;
    msg.change_sid = 3219U;
    msg.change_sname.assign("MNQBSDKRABFHCGZXPXNUGZLQFIKNINVACUAPOEZPWTYN");
    const char tmp_msg_0[] = {82, -108, 21, -21, -19, 57, -86, 109, -20, 31, -110, 24, 61, -93, -47, 42, -79, -60, -126, 21, 16, -5, 114, -13, -103, 7, 54, -46, 122, -87, -65, -75, -110, 13, -98, 98, -15, 118, 84, 57, -20, -53, -103, -44, -23, 40, 39, -21, 0, -122, -15, 117, 61, 32, 115, 86, 98, 99, 98, 2, -119, -44, -77, -21, 117, -102, 72, -35, -96, 91, 79, 126, 118, -119, -93, -11, 63, -36, -103, 107, -41, -46, -102, -52, 72, 72, -51, -119, -38, -19, 23, -22, -125, 106, -55, -38, 68, -115, 118, -44, -99, 1, 51, 13, 52, -10, -94, 102, 52, 76, 97, 0, 82, -75, -34, -30, -97, 13, 118, -82, -46, -86, -71, -44, -28, -98, 72, 12, 59, 82, 109, -98, 68, -119, -74, 95, -86, -9, -21, -57, 97, 1, 60, -25};
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
    msg.setTimeStamp(0.104094040612);
    msg.setSource(12126U);
    msg.setSourceEntity(67U);
    msg.setDestination(49591U);
    msg.setDestinationEntity(131U);
    msg.type = 193U;
    msg.op = 76U;
    msg.request_id = 64993U;
    msg.plan_id.assign("TDQWYZXDYRZQGHDYBWTKTDTIGXVWLQUQEBGFUWZKCVUZFYRQTGPVMLGPUWANRLHGQKORRYAWIZRTVFEJYOCNNCJPFPJZTOTOSKERCUJSVOVQHMOCLEELNQJLSMAJCOMMLYRNDFIJEZHFXBFBCVYPNJZQWASFIUZKUGHHSIAXXUPUUPMMHBYNAFALATEIALDKBIBYNMFXGJXHSQGWNVOEDPEHNGO");
    msg.flags = 34322U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.609054610699;
    tmp_msg_0.speed_units = 190U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HVDGCCCVFBPHNZAPWTZTUIQJSUZNVSUYDTYVEKSWMPEAUUPYQUDGQYADBU");

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
    msg.setTimeStamp(0.808575082351);
    msg.setSource(28747U);
    msg.setSourceEntity(188U);
    msg.setDestination(62159U);
    msg.setDestinationEntity(0U);
    msg.type = 39U;
    msg.op = 160U;
    msg.request_id = 26281U;
    msg.plan_id.assign("WOKJRTPTJFUAOLVXHLISFBCKQKBHIQBXLFTNOGKEEANWZMILRJKENLWMUHBDVGOHJIOYDQEIGSZCSFNWPQXUMXJZAVCPZMMEVVKKLDUMTDFTANXIBACHWUTRHMOBYBVPXUDRWPFYJLUZBXGVAXCAGTCDVIOUGFLATWOCCJRWWUPRZYOIMEYCYJESCTRFSUTBDXNFQPKDDAAGPQKQYFSYRZKGLVGEDRGMHSBQQ");
    msg.flags = 40281U;
    IMC::AngularVelocity tmp_msg_0;
    tmp_msg_0.time = 0.274511544152;
    tmp_msg_0.x = 0.445814344564;
    tmp_msg_0.y = 0.525133858034;
    tmp_msg_0.z = 0.548269032052;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OVDZNXFZDDLIHCYAHBYJHEJQLPICOLYSPPKPSELFXBOZKOWBWXETTHNWWBPKDAMNNWGFTHUMJHUXRTILMEXWZUOFTBROSIVAYZKHPCGREQQTVAQJFZNFZDURECIMGKZYVEQXUFGJLVAFIUBGAFQJVTAKFNETLZILJSGGWAVOYZSKESSCCUQGMROMHCEANMDMYMJRCIKGUCJT");

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
    msg.setTimeStamp(0.860831587062);
    msg.setSource(35507U);
    msg.setSourceEntity(48U);
    msg.setDestination(11458U);
    msg.setDestinationEntity(221U);
    msg.type = 54U;
    msg.op = 28U;
    msg.request_id = 7730U;
    msg.plan_id.assign("ZMGTWDESRPKEVPTXODDDPQAINDTZXEPLMWIWRWRZYFMF");
    msg.flags = 60399U;
    IMC::FormationState tmp_msg_0;
    tmp_msg_0.possimerr = 0.752711759168;
    tmp_msg_0.converg = 0.39934423019;
    tmp_msg_0.turbulence = 0.69194394517;
    tmp_msg_0.possimmon = 241U;
    tmp_msg_0.commmon = 209U;
    tmp_msg_0.convergmon = 159U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("EKUKRCNRJZTHSROQVJPSTVZOUPHBACRHAKDWBABWLGXMGKYAEZMSSSDQVDBXBPLOUTVTEPBMFLYYIJWJILQWHTRGMBKIHOCQDRPUVKXHUVCIGCYERWASCMEFKLIFAZQCZPEBKNDCFFMUUJWLHDMEFKUNQBNNVH");

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
    msg.setTimeStamp(0.280656722516);
    msg.setSource(43453U);
    msg.setSourceEntity(15U);
    msg.setDestination(4188U);
    msg.setDestinationEntity(199U);
    msg.state = 197U;
    msg.plan_id.assign("HCKALMRBMOQJTNCZHWQDRJBOFBPMPLDDPNBUOQTNYJZTFOYWBYJYOAVDQNCTPMXWVRCWEKMBYKXLUCWRBVCCUQILEIXJWRIIP");
    msg.plan_eta = 2124291823;
    msg.plan_progress = 0.289794068897;
    msg.man_id.assign("WJXKCOYLPS");
    msg.man_type = 61760U;
    msg.man_eta = -1912868650;
    msg.last_outcome = 204U;

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
    msg.setTimeStamp(0.060442923382);
    msg.setSource(32800U);
    msg.setSourceEntity(80U);
    msg.setDestination(12580U);
    msg.setDestinationEntity(77U);
    msg.state = 38U;
    msg.plan_id.assign("CJZOZVQPHTWYRJJIWAYDVMTTVIEQR");
    msg.plan_eta = 1285363324;
    msg.plan_progress = 0.0632266304264;
    msg.man_id.assign("OTCMATFZTQRDALZHZKVYBONVIXEMXXQJWZNCMPVIVQWXEYMQYZSWHIJEBSYFEPLWKUIKIXTJYHLGHOXSPVJXTNPEIRLRVOBCPDPQKFWKYJGKBJIYRRIUHMQLSOLYNVUZBDQQXNNCSVWEZCCORUSTTDBZGQEGAXJAUKIGLAWAZJTYEHASDNQGUBFOGVHLETCKRNAVSBWJPEOPFODAKRGNPTDMWLOFYCGNLDMMRMFHHKUUUFCRAJCUPSXZHWDBMG");
    msg.man_type = 276U;
    msg.man_eta = 2143400521;
    msg.last_outcome = 121U;

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
    msg.setTimeStamp(0.819427123238);
    msg.setSource(23608U);
    msg.setSourceEntity(113U);
    msg.setDestination(10343U);
    msg.setDestinationEntity(6U);
    msg.state = 50U;
    msg.plan_id.assign("NOLFSUWIKRDYCNAVCHMCUFNEDAIVFOSYUUUDXHSUBZMJPWQGEODJXHOJSIHQRBEBCQNQVCMTIHJGCWUIVXJMRPEHLTZETPQJXCOUBJHALPHZCGYDXAMZALVSVPOTZWZYAIRDOBGICMWILFWRSZLZKLUNHNJFTPDJGVUKTKPOEWELEDQKZTMAANKRSYWSEXQQRTYRNMEBJKZ");
    msg.plan_eta = 925065879;
    msg.plan_progress = 0.821351436173;
    msg.man_id.assign("PVAWEBWVNUCKBPECSESLDXVXCMQPFLOJOGKJFSDOPDUMUI");
    msg.man_type = 61513U;
    msg.man_eta = 952560439;
    msg.last_outcome = 234U;

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
    msg.setTimeStamp(0.769945352054);
    msg.setSource(365U);
    msg.setSourceEntity(29U);
    msg.setDestination(11245U);
    msg.setDestinationEntity(98U);
    msg.name.assign("ZSPGSYGPGUPFJEOAKUMHZJKLSCVCYNVZTLLHP");
    msg.value.assign("XYVUKAWIIRHVULTFSTVINCUZAWHGRTJZKPUDZVIDBLDRQSNGTELUXXDMOLAOHXEIGEMABSBSUQGXHHMONSSEBTJASDRLJNECYYPPDNOGEIBZHCDQPAVLCCTJLJPWCUTJMAIHCFGRLZMLLEDYXGQYWZOOTRNKYHWUMZSGSQJTYVFJKBCHBPVZIPYR");
    msg.type = 183U;
    msg.access = 86U;

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
    msg.setTimeStamp(0.113640062434);
    msg.setSource(18657U);
    msg.setSourceEntity(143U);
    msg.setDestination(2792U);
    msg.setDestinationEntity(117U);
    msg.name.assign("TJNTULWLROLSDWDZMQBDEWCWOISPAENLJMJEJHMHLMNXZCQVWVXPYSROJCVFYAFQLKKMQRTRNRSBGRYQZVFVYWUOPFHQNEGYGXYEBOHMHAWAUZUVOTQXVCEHNUDSKIOJXZEUKGLAWDDSPRCZKUFDMNIGTWJRTZIAVCSIAYJXOFLSPTCHOGAFPCKYCYSQUGKEMEFXGBNPUZHHPUIBLQOITDSBCZNBFRBXFITWARTNKKDMBVHYPZJDIEKGIPXA");
    msg.value.assign("KBSHTKLWXTRVRLQYYMBDATCBINXXFZOTLLJHJARIUGGRIFPBFJWMIRRVCWHXSEQZYPWJGHBDKVEYIENDXIFTOPGGVDAFQJZKZGFGORIAGDMLWAZKWAVKNZSQRQVHWQCYMHBNYCIPVQAFSDVHUBPNZKCPEEMKLCGETIMXNQJSMOAPXYRXNENBSEPMTOUCUVSUHNWTZSYQYSBTJD");
    msg.type = 12U;
    msg.access = 245U;

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
    msg.setTimeStamp(0.892693315959);
    msg.setSource(17477U);
    msg.setSourceEntity(22U);
    msg.setDestination(12919U);
    msg.setDestinationEntity(157U);
    msg.name.assign("YTCASHEGMMSPOIPPSXOCNZEYUAEYRTIJVULCXJWHMLHTFTHANBOXCHTUCVQOKSJ");
    msg.value.assign("HZMWXWHNFFMEZGJWQSPUZQHTDBOAZYVRGQVXORDBVBMYNAFIMPTGAOJXPANEFCABPPKFTIDCXVQZZICWKTQUYCCFYXWIVCTJDSRJVGLRHCHIOWSQUGVLMSRGOAASNEEQOYBIKOYJGYBUDUPJVBJVFLNRWIFNGYBZZERADRXYVCEDISNGDMLBLSMMKUPEKTBOGJHXCNSCQLTQEQIIMMUFKREHJXHOHTRWKAUNWFNHXOEPLKTLWSUAZPDLJKDY");
    msg.type = 26U;
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
    msg.setTimeStamp(0.232418683047);
    msg.setSource(35339U);
    msg.setSourceEntity(21U);
    msg.setDestination(835U);
    msg.setDestinationEntity(50U);
    msg.cmd = 189U;
    msg.op = 234U;
    msg.plan_id.assign("YAZDNHLXLWAIRVMYHD");
    msg.params.assign("GHHDAFHUHIGCJFJWQGRPMOIUUCUEWVDVTYYYCYQOQITXMXFPXDSOFDICFZUKRYNUNPSRJBEHWGMFYPLCDDKJGOUQTBIDOWQXATMNWMPRKYZSKJGLAZMZJCNSDRAEKLEEEHSSGCHXZPSTIQJXKQGPIZBVYFMTTFBXAVKMPFNBHNKEOOEYNQQOVIWAXVWAINFVBJMBRBHRGC");

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
    msg.setTimeStamp(0.618623539008);
    msg.setSource(13024U);
    msg.setSourceEntity(147U);
    msg.setDestination(11572U);
    msg.setDestinationEntity(246U);
    msg.cmd = 60U;
    msg.op = 244U;
    msg.plan_id.assign("HUEMLUJMHQEBLROOSWERSRANWGNKBKWQHKQLGCRKAHNDLXCAXJKBNPVGOHEJUDXBIZENKQZIVVBFNCSDYJRTTTWZDJPTYYAVFMCCCOUSJQVQGILERFVLOJOZXKVQNMLYCNAMMONXWXPPUVBSATUDSRSWBXPEUITFSYDXZYWJHTDZPOPWOTEIJCRMTZDJE");
    msg.params.assign("UQZXMQKJOFGYHUVSDPJVSDIFFLXKUVMFZUGHHSZCLQJDBPVNOPAVTLEXWSZLESSTWPMVDJODGXFXTNGGPNZYPVVRPLKABYUHFIXESRDRSDQKNBRTYHEYZCIWGTCGEPIRQXMFEXIMJWUYROBNSEYNOAATBCHCDBZYDQASMVLQHNOKNYAUGOFTWKURACWCKWBZLIWGHUIQQMNJTKIEAMBOWAOKBFYJQZJDUIJHMXPGAKORLNF");

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
    msg.setTimeStamp(0.722794642656);
    msg.setSource(22408U);
    msg.setSourceEntity(149U);
    msg.setDestination(28425U);
    msg.setDestinationEntity(90U);
    msg.cmd = 184U;
    msg.op = 186U;
    msg.plan_id.assign("AQVJGNLVESGGWXGZZFTNTBFUADAONDJWWURDXLFYZXYIRKNKXTHGPPSPVQELVWMSFKBPWLKJACCPHGDRZJRYCCJCHKZMPQNFTMNMLZFNBGCRJKYONQVHEIJFIHQMUMZWWAZGPXIALBRSJIITQDARDEUUFPFTCDVDPASOTWLWEEHCQISOILABHFATPQZOEKEYUTJSBGKVIYSXUQQLMHJXONOVRURTYUYNXHVBXSDXCEWC");
    msg.params.assign("DWWAYJSIHZLNHOKHSIOKZGCYQROBOANRJYBRPVFEQGQQMXQXJVKEGNZVKREZDHD");

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
    msg.setTimeStamp(0.0649365920857);
    msg.setSource(45275U);
    msg.setSourceEntity(56U);
    msg.setDestination(9241U);
    msg.setDestinationEntity(24U);
    msg.group_name.assign("AKJRQYXMTFBKLWPVGCTUZHYKBYSVQBESNFXUCNLHLIUKXUHDIIJUDIONWOSORNINHMZJGOSWLPBBBQSMDTJPZXVAVBANFKNWHDQBIEFRYUVXKVSJZTIGJZXPPTYIHCLFPIERMEQXGWAXRNJLYGPPIACECTSDZVWOWFCJTSYHVKHYFGPUVQXGCMEHPTLGQOKJAF");
    msg.op = 192U;
    msg.lat = 0.0825791034238;
    msg.lon = 0.374601101377;
    msg.height = 0.799755144825;
    msg.x = 0.416038979615;
    msg.y = 0.515386062604;
    msg.z = 0.104993879676;
    msg.phi = 0.476756589996;
    msg.theta = 0.147796268894;
    msg.psi = 0.490965862624;
    msg.vx = 0.177756277272;
    msg.vy = 0.102089490345;
    msg.vz = 0.905817348369;
    msg.p = 0.511834986554;
    msg.q = 0.698714748806;
    msg.r = 0.239228698289;
    msg.svx = 0.964067436454;
    msg.svy = 0.601109555056;
    msg.svz = 0.853514861588;

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
    msg.setTimeStamp(0.714476731941);
    msg.setSource(7326U);
    msg.setSourceEntity(64U);
    msg.setDestination(39215U);
    msg.setDestinationEntity(6U);
    msg.group_name.assign("NSUCAPGFQJRUIHWQNKJMYPGVICRNZFLNHUWBTZEPHOMQAJUICXVJKDKRHFDXVVABSTFRNNWNWEKLNPQZDVRFAGQBISXZCTLVMSLGEESHLBRBOWBLYJDHHGFYPVOKJZVUMJTOLVHCBASDCIRCQBXMIXUHQLPZIJFYFXYDTRYIXQNYEWACTLYJVOUGHDZEWPKKWYITBZCTZUUEGCRSKMSFOSGODXJD");
    msg.op = 175U;
    msg.lat = 0.554938936347;
    msg.lon = 0.29209987424;
    msg.height = 0.475183055674;
    msg.x = 0.0465714894162;
    msg.y = 0.282488435969;
    msg.z = 0.367469048607;
    msg.phi = 0.115339720494;
    msg.theta = 0.130385541714;
    msg.psi = 0.0428406355841;
    msg.vx = 0.999486897195;
    msg.vy = 0.427953898382;
    msg.vz = 0.780638224613;
    msg.p = 0.248320640796;
    msg.q = 0.552118736931;
    msg.r = 0.00759087326176;
    msg.svx = 0.217865044419;
    msg.svy = 0.938946354649;
    msg.svz = 0.612491240677;

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
    msg.setTimeStamp(0.64975526975);
    msg.setSource(63831U);
    msg.setSourceEntity(226U);
    msg.setDestination(36336U);
    msg.setDestinationEntity(38U);
    msg.group_name.assign("PSKTTHEFUVPEBSFCXSKEOFZPWCXJVQGHUCYTDTKUYMHRQLATVCFZKEZOAHUKJYWZDUZONPBGRKQDZTHPTNGGKQEMVURYMNEZIPHAHOEWEGVASDDXIBBBROLJHXFSNXIBIIWAXJAQLVAPJQBSKDIWGLNYNIPOYPIFYNVFOJLAJBUCGFVIKSLURYMZJQVZMDRLCMYEAMLID");
    msg.op = 38U;
    msg.lat = 0.732725058391;
    msg.lon = 0.0298197251178;
    msg.height = 0.777932258618;
    msg.x = 0.668108053262;
    msg.y = 0.315358251906;
    msg.z = 0.123030378833;
    msg.phi = 0.290853548719;
    msg.theta = 0.836105041439;
    msg.psi = 0.317838055034;
    msg.vx = 0.561802779912;
    msg.vy = 0.856933198901;
    msg.vz = 0.327092697597;
    msg.p = 0.126092129399;
    msg.q = 0.25040824085;
    msg.r = 0.347572223405;
    msg.svx = 0.309949241618;
    msg.svy = 0.299345718355;
    msg.svz = 0.865168572183;

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
    msg.setTimeStamp(0.210718706921);
    msg.setSource(56147U);
    msg.setSourceEntity(234U);
    msg.setDestination(47088U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.0458294466248;
    msg.lon = 0.375677461328;
    msg.depth = 0.565747071185;
    msg.roll = 0.909123772002;
    msg.pitch = 0.261083170996;
    msg.yaw = 0.79771121524;
    msg.rcp_time = 0.102960613628;
    msg.sid.assign("VPNCIBPPRCNWJCDUNLKSFSQGSKYZMZQGHMEHZIVGFPQYFEENRZETJVZBELXBUNTHXVDVTHCCINWSAJHQGUWROTAWNHVXTTBYBZYOSCRPFEGLVWSKJCVQXKWQDKSFDWVLOSGQMIWDTJXPAAVMFQMBLNOXCJJOOLPPLUJPMRKQOFARGHCYBRTAYSDDRZKQXBDIGPZABKUAJMUEERGXAETXOWZLOXMYANYCLTMGUR");
    msg.s_type = 173U;

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
    msg.setTimeStamp(0.597839761362);
    msg.setSource(23351U);
    msg.setSourceEntity(46U);
    msg.setDestination(31522U);
    msg.setDestinationEntity(27U);
    msg.lat = 0.789428261826;
    msg.lon = 0.622878922398;
    msg.depth = 0.70017843849;
    msg.roll = 0.413502417123;
    msg.pitch = 0.916381253329;
    msg.yaw = 0.0523657971257;
    msg.rcp_time = 0.124970123107;
    msg.sid.assign("EHVAPQUERKDEPMZXWIPYADZJEZTQBFILNOFFDONKJYFIYBJNNGWRCUCAQMUGBSFSXQOTKHRDMPPAOQEUJWDSUOXIYAACPQTXUZEAYFIN");
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
    msg.setTimeStamp(0.32046184717);
    msg.setSource(44624U);
    msg.setSourceEntity(236U);
    msg.setDestination(65136U);
    msg.setDestinationEntity(133U);
    msg.lat = 0.0271419357225;
    msg.lon = 0.095618735645;
    msg.depth = 0.152161390307;
    msg.roll = 0.601716489366;
    msg.pitch = 0.69793337445;
    msg.yaw = 0.296984696061;
    msg.rcp_time = 0.843690434756;
    msg.sid.assign("NHUWOFYLKAWHRZEJKAOUEOPBICGKQE");
    msg.s_type = 197U;

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
    msg.setTimeStamp(0.0953040654889);
    msg.setSource(65276U);
    msg.setSourceEntity(65U);
    msg.setDestination(11950U);
    msg.setDestinationEntity(211U);
    msg.id.assign("CXTXFGEUUHDYQBYMINWBMEMFRCGTTOOYSWXUDZKATUSQYVRJMFKLKVHFDHFAJLNOKQIKPSMZZPPWBZJACGVBQEXRSIWTCSZCOZXOQRHGVATIBEHFGJWPVIUXZNQEESFDFYTXPNWMNBKRABLLGUKORPVCRGSLGUAKLVPESVBLIZGNOMKUOMRIQXTEAHJUDEYOYJWJARXCXDNMHIBNAOWCVIHJVU");
    msg.sensor_class.assign("WWXVVPTDBWQUIKXCGHTMMDISUEGHTKLTBMDPIKBTNWO");
    msg.lat = 0.376790561289;
    msg.lon = 0.69297168028;
    msg.alt = 0.6036687318;
    msg.heading = 0.564539886626;
    msg.data.assign("VHXPSEBTXCTLWRLPRMHQUIYRLVJWMQYHGCFJSUBHTNGJAOAZAXMWEOFPMGHQEXAZGQQIOHBRXUKAGDDFERLQRTSFNKXCG");

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
    msg.setTimeStamp(0.192491018673);
    msg.setSource(54431U);
    msg.setSourceEntity(27U);
    msg.setDestination(38204U);
    msg.setDestinationEntity(151U);
    msg.id.assign("HAFMRZBFNJHIWDWLMHHCACFGXKINCHFHCMNKKGZNCUCTNMCPFXRBWWJATYZGUOMZQKBSKQXUIHJSFYPXVENKDSJQIWPYVGHDBURESQASQPWPRLILIZOFEPEQADNLQALSNVGSYSUMKGAAVQLJXVGZJYPXXGATDUOFBDBPJZWCENCETYRJUOEZKHIXOWAUGTTHDLOZLRYQXBMKWJTIMOOFVFKTIVTMBVDRBSOEQSCJDRMLX");
    msg.sensor_class.assign("YKJBEBVMZDBUNQTFSWTGMFALGYLENPOBTPVANKKURUXVEQXFAUTQIXWALVTBVCO");
    msg.lat = 0.0914432455381;
    msg.lon = 0.337992034963;
    msg.alt = 0.0379638600679;
    msg.heading = 0.334741881444;
    msg.data.assign("TRFMJWHSPWRSUURUMUMCBRNENXFCKEGLHQJRXUTCZFYAZMGURYOHQMVVDJYSOBDTLHQXKBDNNOPCFCELGZGRAZBPVAGJPGJBVLIPSWKPTUDBLSYIYQMEBTJKDSXHYCAPPBTHIJDQKAXVXHAQOEJGZXELNNXNSMNQIUDSJWMYEAIRJZOBQILAFVWKCWVZYRVKZXUWFIAFHIE");

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
    msg.setTimeStamp(0.757467795776);
    msg.setSource(52240U);
    msg.setSourceEntity(196U);
    msg.setDestination(5709U);
    msg.setDestinationEntity(246U);
    msg.id.assign("JXRZLHWKHZDKQQGYIIGUKADOCSMHFDGJAIJTLWWELLVHQNXCHAADJATMMWHLFAFPDNQO");
    msg.sensor_class.assign("ZMGOBIDLNPMHCWDZAHYFQKERAUVBKDLEKROAKBBZFYVFCUJSGBOQZJXIMCUQJNGYTSFCKHGEWWDMXVNXMYRIEWPXRPANE");
    msg.lat = 0.365947420989;
    msg.lon = 0.596548343332;
    msg.alt = 0.0502114484401;
    msg.heading = 0.851494013167;
    msg.data.assign("PSBCXCKOVOKLEKUTHSDMBQQXVBYZRJHDLOEWUIBTCPNSYAIKRUIACGYFMVHXNNDSYGWPWXZFURFVXIHHCGELLJKNAQWRPSLAANNMAXCTUALXDBGWJODFR");

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
    msg.setTimeStamp(0.466234431854);
    msg.setSource(55419U);
    msg.setSourceEntity(5U);
    msg.setDestination(22308U);
    msg.setDestinationEntity(44U);
    msg.id.assign("HFWEFJPDDMKJPISXKYRIQBTIBPFEFNPDCQQTXAUZTSETG");

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
    msg.setTimeStamp(0.71786148737);
    msg.setSource(465U);
    msg.setSourceEntity(98U);
    msg.setDestination(2032U);
    msg.setDestinationEntity(213U);
    msg.id.assign("HELVHAYSREUEQPQKRUNOTMMYWFFNZOGXMLLGRHPGFORWJAJWCXVLIUVTUPLQBZOJTXTLAOFRKNZPEEHJSTCFTNHYGJDFULYRCVXWGYGDBGZWBDUKDIOKCWIOVKYMXLSEQF");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("LUFNZKZSNOCJNJVRIVXRZCHYTORKLGMPSHJAOETNXWVRXXHOLFZNMNTHCJQOFDIILMCPGBHNEFHRQBLRIZJEKLTGBHBVYRGVECXSKGKZLUJEWAAIPHYDXBCNWPZLLEEXTTKQQQHMCKKFOYOUTYAJYDDKFAGUFASMDWNBPRIKZVMYGOUMTAVSPDFBUMRQJTDDGEDCMXYQUOPGIQAJQEYWBVMZPSWVAWXDXBTU");
    tmp_msg_0.feature_type = 41U;
    tmp_msg_0.rgb_red = 176U;
    tmp_msg_0.rgb_green = 230U;
    tmp_msg_0.rgb_blue = 7U;
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
    msg.setTimeStamp(0.127516202755);
    msg.setSource(21801U);
    msg.setSourceEntity(243U);
    msg.setDestination(39242U);
    msg.setDestinationEntity(201U);
    msg.id.assign("TJORLUGIIFIX");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("OWOVKXXOQNQTYXYHWSEEHDMUQBJIKAKNHWGGZYKBKQYKJNPAFPEFEDFAVBQTRTYKIICJGJCIEFAISNHCJUWWTHBFTKOPSFODCUVEAYFCD");
    tmp_msg_0.feature_type = 242U;
    tmp_msg_0.rgb_red = 15U;
    tmp_msg_0.rgb_green = 40U;
    tmp_msg_0.rgb_blue = 239U;
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
    msg.setTimeStamp(0.0355273487996);
    msg.setSource(57520U);
    msg.setSourceEntity(202U);
    msg.setDestination(59137U);
    msg.setDestinationEntity(198U);
    msg.id.assign("DVHTNLUAFFAUZNPIQAXIHALIZDCRWVFOJZASVLQHNJIERHZGJTYCUGLASQYAERGVSXGRXRSWTKJMWN");
    msg.feature_type = 181U;
    msg.rgb_red = 239U;
    msg.rgb_green = 154U;
    msg.rgb_blue = 205U;

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
    msg.setTimeStamp(0.743396462158);
    msg.setSource(26610U);
    msg.setSourceEntity(116U);
    msg.setDestination(61680U);
    msg.setDestinationEntity(169U);
    msg.id.assign("PYYRJLQYZCEWSBCXFTKBRDIUDTPNIMUWRLHXUSVMQPTBIDNHXHYXYLPRWMLEEJBHRJCQAQXZRBDZZIICNJLGWNPDLANDMBJHFQNBFPFEMRFPUOOVJGSDDTAQYYOPA");
    msg.feature_type = 162U;
    msg.rgb_red = 13U;
    msg.rgb_green = 141U;
    msg.rgb_blue = 212U;

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
    msg.setTimeStamp(0.635808009017);
    msg.setSource(37430U);
    msg.setSourceEntity(80U);
    msg.setDestination(56138U);
    msg.setDestinationEntity(221U);
    msg.id.assign("XKKLAVJPVELKXDISGVXZDHRWTQMVANZIMRWDLAJWBLPMPHZUWHQVCKBRFBBZQEBBRGNXFGINEQTHJMJQLHAJHYKWXHZQOSKUFWTSIEESOXPNUTGUPFGKZOTVJSPCSHXOUAKADYDNLCMYIJDRCTDROUZYTC");
    msg.feature_type = 209U;
    msg.rgb_red = 241U;
    msg.rgb_green = 179U;
    msg.rgb_blue = 215U;

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
    msg.setTimeStamp(0.79487411121);
    msg.setSource(23900U);
    msg.setSourceEntity(119U);
    msg.setDestination(7877U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.67895010438;
    msg.lon = 0.554131027248;
    msg.alt = 0.995364365595;

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
    msg.setTimeStamp(0.948541402311);
    msg.setSource(37497U);
    msg.setSourceEntity(53U);
    msg.setDestination(63467U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.606557623739;
    msg.lon = 0.459747784674;
    msg.alt = 0.668883285811;

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
    msg.setTimeStamp(0.469290178619);
    msg.setSource(55239U);
    msg.setSourceEntity(20U);
    msg.setDestination(26009U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.152839330877;
    msg.lon = 0.63654271014;
    msg.alt = 0.185881962414;

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
    msg.setTimeStamp(0.423453609694);
    msg.setSource(42783U);
    msg.setSourceEntity(245U);
    msg.setDestination(18639U);
    msg.setDestinationEntity(134U);
    msg.type = 67U;
    msg.id.assign("EUJYMBOTQNYWFEMVRXKQFLSTDRIOCQNHBZWULWVNYYRNFBLYIREWYMXZHACNWRVCTXDFEAMSWAPGOTVNJNKVHDAIJZGYVHYKFNTKBEGAUBLGMLURSHOOBCIQTOJWZFKXRSQODKLFXVPCEQRTHQCOGILXXDKWKQPLETMGNEYGIGWCPCJWZDETJUIHUXBAVIJTEASBVZUYJS");
    IMC::Brake tmp_msg_0;
    tmp_msg_0.op = 121U;
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
    msg.setTimeStamp(0.776643337355);
    msg.setSource(38144U);
    msg.setSourceEntity(159U);
    msg.setDestination(58530U);
    msg.setDestinationEntity(127U);
    msg.type = 27U;
    msg.id.assign("ICAUDBMAZCLZMWMSWCXWYDJZXGCJRADDJVHOPOCBTLUXHRULBXEQGPPKRJQPEPFMIGSLYGWPFRJVUYUYHBAKNWVHFOQEQJADLFAEKIW");
    IMC::PlanControl tmp_msg_0;
    tmp_msg_0.type = 82U;
    tmp_msg_0.op = 38U;
    tmp_msg_0.request_id = 65035U;
    tmp_msg_0.plan_id.assign("HLZAXQUWAECCSTTACQWUEPTOUKNIXKIJVOPHMJONHRMJQKEFCBNDVWUQDTLXVUGBXMGFZSAMDMHWZGFHOJQLJNXEQXPZFLDUNKSNSAUIHROYRVPGBXDKZKMTRINIXPIJZSINULKAAWHOWYRTQINTVWBOEJGYXSRBDCLDFYGSRFIGEPUENTBZCTYWVPWPBRPFBMCOBAELJTDFLCGFOKUEYCQOZZKMIJSRYDH");
    tmp_msg_0.flags = 24803U;
    IMC::AcousticMessage tmp_tmp_msg_0_0;
    IMC::DesiredPitch tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.240948580853;
    tmp_tmp_msg_0_0.message.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("SIWOIADRIAGKHJFNSHWLGNFPZLBWQBRVISZWVFVTASNUFNUGTTGWKNBXCRYTUJXXFCZKKJLAQ");
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
    msg.setTimeStamp(0.999515796265);
    msg.setSource(9099U);
    msg.setSourceEntity(142U);
    msg.setDestination(59622U);
    msg.setDestinationEntity(166U);
    msg.type = 60U;
    msg.id.assign("TECWDWLDJWYTVGKPNIFKVXFVJSZEGAPBOVTACOKXMCFMOLAXAJGMSNNOTXFQQENXUQHZQGEUMUETWKHPDIWFAQTFXQEFSCJZARKDYPURTOOUDULRAQGWRSSPKQUSGSOEHVUHXBYMMRLNJIBHPYIYWHGVHTFBIJGWPBCQDLVZZCLEYADGYRS");
    IMC::Temperature tmp_msg_0;
    tmp_msg_0.value = 0.458685939687;
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
    msg.setTimeStamp(0.80180442433);
    msg.setSource(59993U);
    msg.setSourceEntity(231U);
    msg.setDestination(15787U);
    msg.setDestinationEntity(29U);
    msg.localname.assign("PAPFVBNZZJOZDNLTQKURQWOYLCTAOJLCIQYHXMTDBOTTNRTNUEGUCOWSOQ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("RHDQBFKFFCGIZLRLKTJBMTZEXRTOVYAUJHFBOEVNQNPHVVUYVQJIXSQSSIATFTYCWYNCPPRQGQOL");
    tmp_msg_0.sys_type = 124U;
    tmp_msg_0.owner = 49049U;
    tmp_msg_0.lat = 0.900137394961;
    tmp_msg_0.lon = 0.67782461396;
    tmp_msg_0.height = 0.811330133714;
    tmp_msg_0.services.assign("USGQLKPWRHUTFAFJHLOSBVIUYTNQHGRPQNAFXDSSTRMLTQJHPTBCSPJYRURTHEFXLMQOZPDEXJLDVIIQLUNLVFRIKCJZUAGWHZYKCHFGXUWPAPBUVZIYECRTVJNFHSNEQAVKOKFLDNIBYOCNXMZHQBZMPFXERXQMWCEPAS");
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
    msg.setTimeStamp(0.112518035571);
    msg.setSource(29628U);
    msg.setSourceEntity(174U);
    msg.setDestination(25176U);
    msg.setDestinationEntity(174U);
    msg.localname.assign("PHEZQHBCQBRMXFQXGFYNMCTZXGRPDMEEBDIGOUHHTUNNWTJBLHDYSVWIPLSKDVZQUFKKPYFLUTJFCIFJXEPYRXGGHYAQMUSOLDABKOADHGILIQPKWNCUJPOWMPYIJXVWPLEZKVRYQJRXSVNRCLDJEFWVTSUZXFSREEUGZNCAUUWOTSXAADDTSSAJMGOIZONOCKNOKNBVVNXFEAFBHDZZOACGITQWKZEWWYTLKYMVB");

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
    msg.setTimeStamp(0.0259063262765);
    msg.setSource(19752U);
    msg.setSourceEntity(18U);
    msg.setDestination(20652U);
    msg.setDestinationEntity(148U);
    msg.localname.assign("KNIANNVTRFSABUUAUGFKNMXBCDZFF");

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
    msg.setTimeStamp(0.182145771583);
    msg.setSource(8833U);
    msg.setSourceEntity(76U);
    msg.setDestination(58936U);
    msg.setDestinationEntity(144U);
    msg.timeline.assign("UAKPXAODNYCABOHHERMZDOQRCBTUZLNBNWMHELFVZHJNRRXUUVGYBMEWSOOAAXYIJJWLIXPDDFOHTMRBDCNNWQDVYTWTJIESPXGBKUYPFWFRWFGCIXRYZDKZDAZLDKBEPVSSHTAVGQKVEFDQPFQTHNSJSIPUKQGSOAEMVLUZEIIZKSVCIFUQ");
    msg.predicate.assign("VUNASFZWXXKKYYPFXVPAUOMHQCSNXZRSPQLZLPIQTWWPTXSABEBCSKOIMOKFPJQUMDUMDTWFQLPYJHXODLXACCKCKYMEPWTDVULBHVYOFXCNHTLJQREMFZBSQRJHTEGYWIZRHSYETKQAWVZZREZDORKVW");
    msg.attributes.assign("WBGMYQBYWBWMDSQZDPDJQCFIBNVEPPXQDRXQWCDMLQJKKXMBQDZCPTHFZIGOLUBINJOBCGTLAZNPROFVQAVTFXJRRZLJENAHBWAUIPHDGIL");

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
    msg.setTimeStamp(0.273949653248);
    msg.setSource(23329U);
    msg.setSourceEntity(132U);
    msg.setDestination(47000U);
    msg.setDestinationEntity(194U);
    msg.timeline.assign("SCXZFKQYZPEMGYBSLQFAUCJHWGZNQDBLAHGUJHPDWKNLFYIBBAZDOPYBFEVCONFCNPWUNDXQDNQRRSSKGVHOLFHDUAFETLIQWLMXEVSODZWYXOQAVRRTYXINTYEERTZPHOXKVEMCSHRJKLJOEIPIGGBPMAPH");
    msg.predicate.assign("VLDRBCBIABDOHNGKGFED");
    msg.attributes.assign("HTXAOSPBOUDZIEKJGVQWTBLFXGHWHRBWMQBBQGINYGQYXYRSSMOKNBEXEBONZAKRTNQPCNXPGIUVGCIRDSYRTMEJUVCPOFQAKTHMNSLVZFIQZUXUJIHYJCRSZELDPHKDTUOUEULLWCYXXTFMC");

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
    msg.setTimeStamp(0.780852546661);
    msg.setSource(20285U);
    msg.setSourceEntity(120U);
    msg.setDestination(42379U);
    msg.setDestinationEntity(60U);
    msg.timeline.assign("YLIHRWWEGAAIWGHWTZQUFBTTYBIDHPWPAIQETCGSNSSDHDFPREURKQBOXTOULFZBOHXSDQVSLOOVAXUCMKINWOUYYPBAMREUMMGCD");
    msg.predicate.assign("GZYIZIAKBVYSCPEYALHDTIAILBHWGWFKCUHPDSHQIATTUWMOZMHQBUMUFEAXQOJGWJAARMFXOWMWCNZEOBKPZGDQRVXYDLDVHJFJJGEXBPKVROPERISCEXJLWBQRECOYUXVTQDNMPCONDJHMUNIBWGSCLSQOLJIRGZENELYJYYNFKTNKSXBZZTXLATSLSPRYFUDBFTJNUUVPEXISHCPXHGDRQKPMQHTUTVKGMGANO");
    msg.attributes.assign("DRDWFCISEEPEXVHEHIHEICDVWWCWURRRRJJIKSGLMODKEPKTZO");

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
    msg.setTimeStamp(0.352303471302);
    msg.setSource(27516U);
    msg.setSourceEntity(216U);
    msg.setDestination(56599U);
    msg.setDestinationEntity(178U);
    msg.command = 115U;
    msg.goal_id.assign("HOLETABFPXABVSTUWQPNGHISVDFMICOLEGBLDDDDATWXRNOTXKWHHZBQNALLSPNYUVFEGJVUMPZNDHPMQQYRHCRDOUQIKHUREVGDQHALUAZFEMGUTBZRKZGMLVHMEKOBJTAYCGXGELCJOUWKGFTIJUOLCVNXKWKDJAPYXZODYIYRYISSCWFPIAVNKKTSFMYOLZWUIMSYVMYWISQQEHIBFMCRRBNKQ");
    msg.goal_xml.assign("SEXTCPRJDPJHFZMWRXSVMFZWJWKL");

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
    msg.setTimeStamp(0.967570971227);
    msg.setSource(45281U);
    msg.setSourceEntity(35U);
    msg.setDestination(22116U);
    msg.setDestinationEntity(252U);
    msg.command = 237U;
    msg.goal_id.assign("ASMBFDUPLQHNWAXUVEGTNXKJAZUQWWKDZOMSROVFCCTSDCFJLLHXBOMHYJQMGDJECEOCURDUSPEQRFYHRZZYNFYHMXFIEYSQVLRVZDZPUXSYVTCPAGUDZOVEJQXSNMDLLKWFVVNKMYJSTTFCEPCZKPGIYIBWT");
    msg.goal_xml.assign("VFAIRVUWMOZNTEOUQTSKFGWGJXJMAOBETOEWTMDEKHNJUCYKZJSQZNRFKDBBVTEVHFPUJIDAQGYCCKIOYPYIFLDOLCLXZSISPLZWURHYYPTIAHGBSVYXFPGRRKYQNZBKBGSUWZPN");

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
    msg.setTimeStamp(0.735671595123);
    msg.setSource(56371U);
    msg.setSourceEntity(189U);
    msg.setDestination(20592U);
    msg.setDestinationEntity(107U);
    msg.command = 207U;
    msg.goal_id.assign("YNRONZCRXJZEKLVOLAGMKUCTZWUCHEWKTCYEXYXPKDWEPMLASRMSRVSXOZTTIIHFXDOFHZRUIPXVQHCBTNBISRRYBPCJYGMEUJHWQBWIMKEDDULPLOBYWCGGVTQKOVONRMOBLDIZFELKCZYWSKGPDAPUFPQTOFVENFAXVIFRQQNZQMX");
    msg.goal_xml.assign("GQQNYFUHSQTGSWOTOOWYYDMYSLYGLVVFMHQFEDJJAEWZDKPYDRTNOTVIFDFACBNLNZVIQXEWHMUIYPMBKRTZBCRCVEOBEATCJTEICYKPUUSCYWJJEJQRZEMKBHZJQWLAXHAVQDITSQULDGIBKBPGDNROSMMWNGCFSVZHCVBCUHOLFIGDRKUGNOAZXXAUJPMUDPZBCPAMIGNROWT");

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
    msg.setTimeStamp(0.60388334872);
    msg.setSource(23587U);
    msg.setSourceEntity(245U);
    msg.setDestination(41314U);
    msg.setDestinationEntity(79U);
    msg.op = 35U;
    msg.goal_id.assign("DPPRYXOETEXVPZDNXERPLGKUIXSPHRXQZCILUXLVJCPQYZWCIHQAGZGIEHU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SWLKCQCKFYHBNUUCCUQJZSSKNO");
    tmp_msg_0.predicate.assign("KTBEOPBQDIICF");
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
    msg.setTimeStamp(0.319776103017);
    msg.setSource(22922U);
    msg.setSourceEntity(143U);
    msg.setDestination(52180U);
    msg.setDestinationEntity(246U);
    msg.op = 97U;
    msg.goal_id.assign("CBSSHPRAKYHIGTNSQUQAYUHWJNXHOESYTQBHSXPPQCJASVIULKZXVIJVDSALRYLHAPYKNCRADSEKTTLYFTJWMMEXVBQWCQBOWYZDCJFBBXZJFFEGJKURCIHRYIZPVOJQFUALOQVKWPNVGBUNKGUUTMPVDZHCLWXUGCUX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TXHADIDDTXLYSRDLTEMPUICBHEKGRCFHPOABSXRTXYRHDFOIYJWLIDKKMQBWYFXHKKWYYNGNESWRMALRZVBGZHEFAQIZDWZLZOTZJVKIPEQRJGPNTOUOJCQIJUORSGOVGCXCTNPBHYHQGAXAJRUBFPUSKXMVSXAPGEYVLXICJTFIOEIVCYBCMUDWPSLZMJLUWSZKWMKBQOPNFASQFJEHHUMUZEGEDUSAWVNGDTT");
    tmp_msg_0.predicate.assign("BSPZOEJLKTGTXEHOPRGEXHSAXUBFBCSGZIALQKDFNXZHQHXWWNKEHGNTIKTNVHIFZNELSTUVLQRZVPMSMANCOHKQ");
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
    msg.setTimeStamp(0.817621609138);
    msg.setSource(37739U);
    msg.setSourceEntity(18U);
    msg.setDestination(33770U);
    msg.setDestinationEntity(118U);
    msg.op = 76U;
    msg.goal_id.assign("ADNINTLCOLQPZGRWHJOITVJUFYSWFMQWXRYTJUEIYCVWPKRENDTNNUBXAXI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("DGMZCXACOBCYEMYGBWEWQOZ");
    tmp_msg_0.predicate.assign("QAPPSKSNYDJPHIT");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("EFKTSFUZETIPDYRJEYAPDFCNNOGXXHGULJKCMLAROBCVCFYVENECSVIVKGLDKMECGZIBSWZKUKTJQGLWQBBKLHWHRYQOJTKMZLRLPNUSMLPPDIOFGHWRMDTIZVEMBTWCNPPCPVXNUQWWJBYXFAWPXSIYMUTPDYENZZDDFOHUFYUHSAGSQXKCCWJHSAOWKOBGBIJISFMQBMXAJZOUTRJLFHXQNYHAMTNDDAOQOGJZQTIGENXAYZ");
    tmp_tmp_msg_0_0.attr_type = 196U;
    tmp_tmp_msg_0_0.min.assign("XQZKGFCFYDKUATNMWPLDNGOGWHHTJROYAKIZKEQHRWXGGLMAOUGLKOWDGXWITVCIKTHEXZLMNQARYSMHDXPXPNTWKMQOTZKFWPIIENHFAXSOABVJOBCVEKGBBRJJIITCFYFCKCUFEXEQSLXJNRPADPRHVYXUDTBDMUUQGHYJLZVJNWZQMCWAPSYIURSMFQPJBLZAFDZHIBSOCBETENRISLY");
    tmp_tmp_msg_0_0.max.assign("BMIUQEPVOGEBAFIFRSLMCGRJGSKICOWLLPNNDQVEMUHSRLVNMXSKADXCKHHCOACFVTXQCQSNGOKIZYZLHPFIKJWMORHHSEZDDPLDN");
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
    msg.setTimeStamp(0.68366572552);
    msg.setSource(2915U);
    msg.setSourceEntity(225U);
    msg.setDestination(300U);
    msg.setDestinationEntity(102U);
    msg.name.assign("ZOULDISZWGCYAFGGTNYKCCSRQLDVMYVFJNWGOLQAMKNWCFDNNGCBIPWLEIKHAMUXIKGYSXFBUDTZSRBQZMXSOLTTOEKPRPZYEROBU");
    msg.attr_type = 45U;
    msg.min.assign("ZOPXULHNTMWNKTWJXFXWNYVPVOSAGOLEVPHZSOHORPCGJYYYEADQHRQBXYVCNQKLDEKCUFFSQMP");
    msg.max.assign("VTTZERJAZPSMYFVFUGGQIEWSKAXHHOUYMCIERMNBMZDKOURTUGWMNRUJJEQSFKWOMSWHKNRWACCVKVIEJZFIZDVLDJABURWOYKPCOQEAPYUOGLQBPQQMWACLYDCPSZEKZDNNJJILXOLHDDGIMZTQVHLVBQSPNYYUFTHTYXIVXRMKGMUBTSYWPDZOSFCNNOPXBALXFTLKCJAYUQFGFGSXRBGOZJBHKAVBRXTQWHLXFEVJD");

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
    msg.setTimeStamp(0.170283849487);
    msg.setSource(58102U);
    msg.setSourceEntity(241U);
    msg.setDestination(36361U);
    msg.setDestinationEntity(7U);
    msg.name.assign("RMVSJFMLIHXCHOEPMWTLGYEWWINLDIHUYHSUBVBSXRLHPUKQZTQMFISKWBVETNZKDNSVGJARGYPXJKRZTFCCDMQQKPEAZQZYEQEJRFZJXSCIOQPQYQFBWOLVUMTMCEFHKHGZWIFNRRUOGKWSJYZMUYOSUUOXPVGILIBGAOETOHMWAKDHCBPAHRGYWKATSIBON");
    msg.attr_type = 168U;
    msg.min.assign("RGPTNSIYOLZDIUWKOVBSMMJJFJZMSJSANOXNGXUFRMIFVHUVGRDYQEWXDKLTNNOOYFHTZEFCJAEMYRWYLBPHKFUNDGASNZVPWRZEYCDQLWCYXWBVJOTSEFHLJVYAYTPQYFXUKXGHPCJBVWZCWTARDCECZLIBMRLQDGIMJIRTVGCDIXBKQHZHPPKBDUOCCIVMBKXHSEQDAUESEQFHLSBS");
    msg.max.assign("HCWFTAYONYYSQWAVVPRLRPBHBYTHTKJYBZALOMNJUEPHMEMOZSWHPLDEFEDSGDDKRMVRRJFKGCAGGJOQUNABBYXEOTMODZCGSUDIVCUISNVIJQJXZSUAETMSJEDLFAVRLQIDIIXFPUMZUFLQEWCXGQRZMXBXEGVULQZLLHHPHNNITPUKXNBKC");

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
    msg.setTimeStamp(0.729047563168);
    msg.setSource(34911U);
    msg.setSourceEntity(141U);
    msg.setDestination(18479U);
    msg.setDestinationEntity(57U);
    msg.name.assign("OGKHHEICUYQJD");
    msg.attr_type = 248U;
    msg.min.assign("QZIPVWBXTENRBADCLJHXLDLUGRPRNQRHMGQRJTZTXZGHCMMRAIQSHTBFLGSXLTUZFVUDYNAUUDUPZELKVJUUGODAOQCKBTLOGCFZYDPFVDTCVWGVHSJDXFVFUWTWMAJIAKZGXLFLMYZJBWHIPWXTKXYILNKYPQOHNYRCZAMCYHAPEQNAIFIDHSSMPKBEZGNKBRESMUGVNBROWOJCCVYMOFBM");
    msg.max.assign("UWHSNACPENHRXFLIIJICLMYBJPLPBZAHOVYOSHXHILYMZGSFZYIFFOKCRZOBVSJGVAS");

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
    msg.setTimeStamp(0.66186209861);
    msg.setSource(1869U);
    msg.setSourceEntity(227U);
    msg.setDestination(27781U);
    msg.setDestinationEntity(243U);
    msg.timeline.assign("CPZWDDUQWIZGIICNURQOAOBFSHVVBREJND");
    msg.predicate.assign("GVHDLSRKGZYHHAPVICZOQQQJVNISZMLWPVXQSOFHUPICLWMINSEPMHXYIXCJMRSDCJWFYRPYZAZLFNBUECNFTDHWSBUORLZYWENFV");

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
    msg.setTimeStamp(0.688373553874);
    msg.setSource(65364U);
    msg.setSourceEntity(64U);
    msg.setDestination(31815U);
    msg.setDestinationEntity(151U);
    msg.timeline.assign("ICTIUHFEAWVYNDZXCRSPDMDWLWZFENNYAPDZXIOYQLXVYBDMJOWSLKAAYXGDRBVKDVZMHKLSSROTBYNEPNLXWDCGUUXRQESEAGAWSHMHKBATYFVUTUXTFTJJBHTQWCDFMEBFPQAGBTALVSHRJJWOMVGNIEHGURVNYRNPKFFUOBSNZSCFGQSOJBHZRYREOVGDWKBXPPIIPMKLXGEQZQOAJYOQUVKPCCIQZHWZC");
    msg.predicate.assign("XTLCVKBRKXSJDCTEBKNYKCXRDYGPLSAZQRDLVKBMAUMTEDIHEGSXW");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ZGVGNJKAIJONGQXEIFAJTFRBAWTLEWSCUYOAJTASEXHSUPOTBDIWGGYCNMTHEPMXFPWCLZNYSDFXPJXNKVMIZLSOBYLSXOEIOVNCFHRZKQWWLJZCITHEGQKLWFICUYCHFRTHCDFSVHEDKDDRGKBJADUDBPBOUBXAVTZAQT");
    tmp_msg_0.attr_type = 248U;
    tmp_msg_0.min.assign("WLBVOOTQMMNYMWOYZULHIVZZXFLDIBJCQHOEHWCLSXAFZZDUSZDRLVIKVRSERUBEDSMZDIHUKRAYAQOIBPXCYJKGGSFTGXIXJHWYZUBIDWTPKEKGITQFZTRPKHJFVNJANHDJHTOWEQSPCKLVPFQYCRYDOAQBGTXTMUWRYNEOGBCJMSVTHNMEROPJJMPKXAAMQTCVXABNYCCPLPGRXKGVUW");
    tmp_msg_0.max.assign("ZPIHOMTULJUTIRCYCORCQTFPOWDZMLHZJLMSDJRXTCAYFUBCSIAMKVUWIGHGTOINEPZLWQPMQHDXTYRJNOHZJHREHEMYVUGTVQOOPOBEUBFCWQWGYGDUFIEDFNXBN");
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
    msg.setTimeStamp(0.148710407359);
    msg.setSource(5180U);
    msg.setSourceEntity(80U);
    msg.setDestination(65288U);
    msg.setDestinationEntity(175U);
    msg.timeline.assign("YYQBVNMNTSLJKYZTOGAVVVCHCWRSGXNURGQUTQKUQUULYMSXAQCSJEXZBPFDHGOMZBVGHXXHRYSOLVZU");
    msg.predicate.assign("HWFXHXOXCLWSDELNTHLQZOJECNLBFIOCZSLJRVUOUTIVVZGGEWMJCISBDJPMECHS");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("WZAODPXIDLPEZYJMUSMSMUWUGFCYAZATIHSCAJZZXJCUYMEZMLHDEDAMCNIQTYKQMSULEYVVDBLNTTCRXJIEIHPXNLJTUFYJQFLURBKFXGKQAVAFNGOMOASIRVIZYDGVQNGDYNHRCBFNVSRVDMKQBKBKJPPOLERYJA");
    tmp_msg_0.attr_type = 242U;
    tmp_msg_0.min.assign("ANLLRZFSXOSHWCGMMQJ");
    tmp_msg_0.max.assign("STOUABTCYTEGXTZXSDGUHILCKCDJZWBJABEFPJVZPSMULNKSLHDKBN");
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
    msg.setTimeStamp(0.579727444209);
    msg.setSource(9592U);
    msg.setSourceEntity(248U);
    msg.setDestination(39539U);
    msg.setDestinationEntity(145U);
    msg.reactor.assign("KZOAKPDSLYIOXUXBXADHBKFNAQUZNATSJAJGAGDOTELYXZNMJTFCNQELSIZBWUXQHQPKAJWVRYVZNZBWWSIHDCHJVSPYOSPQTTBMBZLTFBLKTHDVHW");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CSVORAVITENYCYQWZUOIYFIZHCLEFCQXSDYWAKOYPFMQMVTDHUZXZRRNGTBWSPIDUQXBHKWHUDFJNFUQLNWKMXELZVNMJNPDGTPZDPAOSJGFBJMMOQRRLVBSCVKSHNJMBWOFCPLAAGKAOIRJXUZQIESYURCPEZAKIOLXCCGGIZOSLVGNPZYNG");
    tmp_msg_0.predicate.assign("CONGATMDEPTHRYRKHEPUIVXZMVDNPRRCIZ");
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
    msg.setTimeStamp(0.811414619248);
    msg.setSource(13253U);
    msg.setSourceEntity(196U);
    msg.setDestination(46028U);
    msg.setDestinationEntity(183U);
    msg.reactor.assign("AHDBOOUXXYNIRPYMAOESXRWXUJAWNUFUTDOSNWJWOXEGTEFQMVCRNYEURNHQACEEWAKLYNPBOIZCPMVHXIWISKSKIMIGQLGKLGAFELULJYZZLVGCKCMLTGGFXPNCKXTTGPHLBWHUOFFVGEQHQGRRRVDKPMABMZZQJFCDMSKZWFBXYTDPAZRLSCEVITHQISNYZSYVDRWUAS");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BCBGXDHUDCZLXFKJZOOANIJLWNKZPBHYJMHXLSSTZBPYDWDVCFPTQICFWLNMSJGHORKNJAYCKDPFCZEQUMUOZYTRCTMXTWYNAADIIIHRARHVZXQNZHPISEOLKXAWTUUIGOMJIOMDKBVVM");
    tmp_msg_0.predicate.assign("GDKDISJMOIWANNSWVLSTJSPPVIOBSYWXAKUHKUUIYFOMYFMZJECDUCPNUVENURJGDIABPHGMXBEUNZJEULTLHOGCZFRKQLXWJGVXAVJMVLZHLNXQBRFYQAFSQDTNRRGKEMXFCSJ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OPVBZEELFASVPBYVIMFHFRPJWZQSROUPMVALNUVCIVGPTNDYXYYKJZSUEPGBEWQHXTGTATAUBNZRGOXMKPFQWDBIOSWKKZCBCOASHJMIXSSLSVDORCJZYNTLTGFILNACMJDXQOURHHUGNPQSHKKYWOELLQRMTQGMANIDRV");
    tmp_tmp_msg_0_0.attr_type = 102U;
    tmp_tmp_msg_0_0.min.assign("LCXRIGMBZAMJFQANJXPEPZNKGSGSEYBCURPXJHKOXSBFTVMBVTHGNEUIUZAEUZDAYMHZEXNLKTUVYCGBVBFHJQGFNXTIXKBYJIWOKIFGUHIPQQRSYVLNATREBSHZPFLWOXQAKIMDJOBKHCOJYLRRMPOTYVCWARCSCTQMJUEVPTDWNQJZMDHFLCIRXYE");
    tmp_tmp_msg_0_0.max.assign("MGJGSOYHDHVFXTOOPDNMZPEDBEBCZMXFVIJRQXIHRXKOAMOKNZWMKBGHULUFVKBQRBOXZWEYAJGJTJYCLBEELCSJPXJCLVSVUNIGEWGQCBLPAIURHVZCTSUMXPJGWWZVIDPQUCRWLEGYNDFYUOWIMNFXWEZBPOSQEAWYXDNKHZYGUTQROSARTPFPTHFLHPIKTFDCBWY");
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
    msg.setTimeStamp(0.654350289853);
    msg.setSource(30683U);
    msg.setSourceEntity(192U);
    msg.setDestination(37987U);
    msg.setDestinationEntity(22U);
    msg.reactor.assign("HILRUTHUGJSWNMHZATPVSHHANADBNPFYRKYAVMJMORWWUTTEKENIZIWPUBDRMVLSALQPYFHRKQKMCYBBMUIJDXJGDYVSISHHWNDFMEJBCVCZAGMPXODTXDJBYSTGXGCCPQSRCERQTFBCXDZMNUXHKOOOKLLCKXZUONBVJQAUXNTGALSSQYPFAUSFZRPWGQCITWINNFIFYFGGLXQOOREEZKAKYVYLETLDJZGFIVLBOOUWQREHBJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IFQCNJORAIISIXBAHUQTDCVDCKOAAXZFGSUYUGUMJMJCRCTTTREZDWBQGJTNOTPGBREKSF");
    tmp_msg_0.predicate.assign("KGEFJWBWKRZXXTCFGULFOAXVKIOJVVYFIZMLHWOLVNQBHSUMDECOMURXAEAQDPRBIVJSYNXXWXWSLJQTQXTLRQINMGMAOAFIHYRPCFYPEATZMCGZJQKLVYURYUMGMBZLAGNKYKUNZSPUPZRKALQOHNXUTJVKRBQRTFAGSDUEYGJCEPZNPLNQEHFQKDDKBWSDOWXNYPHTSSVHEIJIADETDTZHIGWSCICFWRJMVOITCBHPMEBCDOBJDWB");
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
    msg.setTimeStamp(0.491807620136);
    msg.setSource(51045U);
    msg.setSourceEntity(235U);
    msg.setDestination(18892U);
    msg.setDestinationEntity(84U);
    msg.id = 188U;
    msg.width = 40966U;
    msg.height = 3042U;
    msg.widthstep = 40829U;
    msg.channels = 120U;
    msg.depth = 17U;
    msg.finaldata = 46U;
    const char tmp_msg_0[] = {106, -110, -1, -120, -110, 0, -59, -42, -49, 57, 2, 72, 68, -45, -114, -26, -90, 42, -82, -103, -62, 41, -121, 34, 84, -123, -84, -27, -68, 99, -66, 111, -55, 20, -10, -112, -88, -96, 82, -22, 91, 95, -49, 62, -35, 13, 105, 58, 22, -77, -17, -78, -82, -39, 84, -19, -80, 65, -111, -33, -128, -13, -10, 54, -98, -52, 120};
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
    msg.setTimeStamp(0.586305013924);
    msg.setSource(9391U);
    msg.setSourceEntity(38U);
    msg.setDestination(9910U);
    msg.setDestinationEntity(89U);
    msg.id = 46U;
    msg.width = 6851U;
    msg.height = 45856U;
    msg.widthstep = 58835U;
    msg.channels = 82U;
    msg.depth = 129U;
    msg.finaldata = 253U;
    const char tmp_msg_0[] = {32, 99, -10, 122, 50, 27, -58, -30, 25, -14, 60, 88, 21, -34, 18, -112, 105, -68, -89, 14, 115, 73, 91, -109, -75, -5, -33, -127, 9, 33, 4, -106, -29, -104, -19, 15, 82, -20, -55, 13, 42, 28, -66, -9, -5, 30, -83, 70, -46, 16, -22, -50, 33, 66, -101, -78, -25, 68, -84, -73, 64, 95, -43, -66, 6, -25, 60, -49, 76, -115, -10, 42, 52, -62, -67, -86, -60, -108, 87, 39, -50, -58, 25, -13, -40, -1, -118, 92, -124, -126, -69, -125, 90, 78, -119, -26, -48, 67, 119, 26, -97, -28, -60, -119, -120, -121, 51, 98, 32, -4, -92, -74, -15, -98, 53, 18, -107, -89, 20, -9, -38, 36, 101, 71, -89, -124, -21, 67, -109, 82, 117, 3, -76, -59, -13, 15, -107, -15, 55, -122, -117, -51, 52, 22, 5, -65, -73, 55, -14, 86, 40, 112, 29, 120, -37, 18, 25, 43, -59, 3, 104, -22, -13, 98, -117, 53, 107, 61, -59, -42, -19, -70, -55, 40, 98, 126, -115, 126, -71, -90, 62, 124, 83, -52, -93, 82, 48, -123, -14, -107, -61, 7, 47, 36, 18, -82, 121, 23, 64, 87, -92, -92, -2, -77, 29, -53, -97, 0, -94, -8, -66, -31, 122, -113, 45, 4, 66, -47, -124, 120, 11, 113, 53, -25, 58, -94, -56, 43, -11, -102, 86, 120, -102, 35, 80, -113, 55, -40, 36, 32, 12, -56, -87, -75, -77, -1, 22, -104, 88, 101, 58, 27, 82};
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
    msg.setTimeStamp(0.120417819283);
    msg.setSource(38933U);
    msg.setSourceEntity(18U);
    msg.setDestination(42046U);
    msg.setDestinationEntity(17U);
    msg.id = 91U;
    msg.width = 12908U;
    msg.height = 43020U;
    msg.widthstep = 40482U;
    msg.channels = 234U;
    msg.depth = 130U;
    msg.finaldata = 216U;
    const char tmp_msg_0[] = {-12, 4, -93, -54, -38, 45, 22, -74, 87, -89, -125, 110, 49, -69, 66, -72, 53, 11, -48, -77, 124, 58, 69, 26, -64, 59, -8, 113, 120, 85, -70, -127, 83, 113, -66, -56, -128, 80, -51, -83, -106, -52, -16, 29, 121, -128, 84, -50, -125, 2, -119, 46, 97, -33, -110, -9, 68, 19, 87, -42, 71};
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
    msg.setTimeStamp(0.663399475007);
    msg.setSource(5822U);
    msg.setSourceEntity(16U);
    msg.setDestination(10082U);
    msg.setDestinationEntity(206U);
    msg.width = 31818U;
    msg.height = 29481U;
    msg.channels = 184U;
    msg.depth = 79U;
    const char tmp_msg_0[] = {-58, 36, 31, 24, -105, -34, -38, 102, -71, 9, -100, 20, 96, 34, -128, -57, -100, -55, -98, 12, 33, -59, -6, -15, 77, -75, 65, -102, -3, 37, 107, 116, -102, 102, 87, 66, -8, -69, 92, 55, -54, -105, 93, 60, 65, 5, 92, -116, -23, -54, -112, 45, 102, 3, 30, -73, 77, -110, 55, 112, 8, -54, 54, 82, 115, -126, 84, -44, 99};
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
    msg.setTimeStamp(0.176232914323);
    msg.setSource(56886U);
    msg.setSourceEntity(153U);
    msg.setDestination(58834U);
    msg.setDestinationEntity(112U);
    msg.width = 37118U;
    msg.height = 12023U;
    msg.channels = 185U;
    msg.depth = 11U;
    const char tmp_msg_0[] = {38, 2, -93, -125, -53, 15, -112, -75, -94, 43, -89, 93, 115, 114, -36, -54, 49, 17, 50, -128, -128, 112, -10, 120, 114, 32, -2, 100, -71, -57, -114, -122, -18, 98, -3, 20, 124, 18, 3, 118, -111, -20, 15, -111, -99, -5, -89, 43, 50, -22, 124, 80, -66, -73, 9, 68, -74, -98, 94, -84, -38, -26, 105, 56, 3, 20, 109, -44, 118, -113, -128, 50, 125, -117, -9, -55, -48, -59, 60, -76, -33, -86, -67, -74, 91, -53, 60, 67, 110, -25, -40, 97, -115, 65, -87, 61, 85, 120, 17, -113, 24, -86, 102, -17, 73, 68, -89, -53, 5, -19, -122, 93, -127, 53, -113, -4, -113, -80, -14, 10, 30, -31, -36, -93, 12, -58, -32, 117, 15, 123, 104, -102, 37, -28, -60, -68, -112};
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
    msg.setTimeStamp(0.0668068512429);
    msg.setSource(16591U);
    msg.setSourceEntity(192U);
    msg.setDestination(35790U);
    msg.setDestinationEntity(32U);
    msg.width = 17151U;
    msg.height = 52317U;
    msg.channels = 160U;
    msg.depth = 221U;
    const char tmp_msg_0[] = {113, -52, -62, 119, -10, -73, 96, 65, 110, -103, -128, 31, -48, 117, 42, -25, 76, -111, 53, -42, -128, -74, 51, 15, -43, -22, -92, 104, -31, -125, -65, 69, 125, 81, -47, -101, -47, -68, 65, -79, 45, 86, -42, -99, 126, 97, -32, 31, -48, -55, -112, 71, 123, -52, 9, -76, 73, 13, 99, 93, -90, -73, 22, -91, 99, -45, -4, -49, 55, 9, 120, -119, 82, 99, -125, -67, 71, 123, -89, 18, -35, 77, 18, -34, 8, 66, 114, -31, 30, 56, -71, -50, -93, 53, 26, -120, 16, 82, -55, -11, 10, 25, -126, -19, -85, 87, -32, -117, 30, -40, -41, -28, -33, -44, 41, 117, 17, 78, -110, 44, 91, -9, 7, -61, -88, -96, -98, 55, 121, -119, -100, 48, -73, -90, 2, 110, 93, 108, -33, -21, 83, 60, -123, -5, -26, 111, 34, -67, 27, 117, 96, 5, 28, 78, 109, -39, 3, 116, 111, -18, 118, -123, 55, -121, -57, -78, -64, -25, -115, -103, 86, -37, 98, 88, 107, 113, -38, 117, -45, -40, -81, 95, 96, 60, 53, -124, -26, 59, 3, 77, -9, -41, 48, 96, 46, 107, 29, 82, -119, 79, -35, -64, -49, 68, 98, 76, 20, -111, -89};
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
    msg.setTimeStamp(0.86344650535);
    msg.setSource(58791U);
    msg.setSourceEntity(53U);
    msg.setDestination(63000U);
    msg.setDestinationEntity(98U);
    msg.frameid = 190U;
    const char tmp_msg_0[] = {-25, 20, 14, 0, 71, 12, 81, -118, -17, 27, 81, -88, 10, -101, -9, -61, 17, 31, -69, 102, 87, -88, 72, 78, 97, -64, 95, 107, -60, -115, -75, -80, 59, 86, 122, -15, 60, -93, -94, -44, -11, -88, 59, -15, 60, 77, -109, -84, 9, 94, 115, 101, -97, 6, -18, 100, -65, 67, -45, -37, 62, 125, -53, 55, -20, -58, -55, -106, 39, 89, 85, 71, -125, -13, 44, -60, -44, 26, -16, 20, 101, 79, -125, -83, 43, 52, 84, 21, -67, 119, 91, 41, -77, 87, -115, -82, 124, -60, -54, 83, 104, 120, 16, -102, -127, -107, 79, 95, 86, -26, 23, 47, 82, -67, -52, 123, 117, 35, 77, 94, -125, 120, 98, -100, -126, -100, -121, -60, -16, 53, -74, -56, 58, -16};
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
    msg.setTimeStamp(0.658665536861);
    msg.setSource(25576U);
    msg.setSourceEntity(55U);
    msg.setDestination(35472U);
    msg.setDestinationEntity(141U);
    msg.frameid = 65U;
    const char tmp_msg_0[] = {123, 61, -76, -2, 111, 36, -97, -72, -58, -101, -22, 22, 88, 90, 17, -110, -43, -21, -27, -30, -74, 125, 62, 37, 68, -86, 92, 30, -4, 22, -41, 61, -118, 15, 10, 86, -123, 0, 61, -95, 125, -27, 123, 79, 91, -117, 101, 41, 16, -62, 5, -56, 73, -52, 47, -38, 105, -55, -9, -125, -58, 89, 85, 19, -25, -84, -67, -17, -16, 78, 96, -73, -8, -44, -45, -94, -68, -11, -110, 90, 73, -109, 70, 102, -48, -100, 105, 116, -10, 7, -4, 5, -101, -82, -69, -117, 5, -8, -95, 25, -39, -95, -71, 122, -76, 99, -98, 4, 69, -127, -66, -117, -59, 23, 40, -100, -37, 89, 70, -118, -22, 112, 48, -46, -56, 70, 49, -36, -25, 122, -104, -100, -60, 124, -8, -32, -122, 3, 89, 81, 81, 38, 70, -51, -59, -61, 119, -116, -24, 84, 17, -117, -108, 96, 60, -122, -19, 58, 104, 77, 85, 14, 79, 50, -24, -29, -7, -2, -102, -15, 84, 108, -115, 32, -112, -17, 71, 35, -18, 77, 64, -125, -60, 25, 105, 99, -13, -66, -48, -54, 81, -101, 84, 99, -73, -29, -78, -120, -94, -122, -121, 105, 15, -62, 67, -29, 74, 66, 62, 65, 52, 8, -30, 48, 77, 99, -13, -35, -124, -59, 109, 67, 18, 55, -33, 62, 70, -27, 48, -93, 0, -95, 85, 54, 38, 107, 84, 115, -30, -95, 88, -126, -86, 5, -25, -50, -36};
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
    msg.setTimeStamp(0.741862567834);
    msg.setSource(46546U);
    msg.setSourceEntity(146U);
    msg.setDestination(19022U);
    msg.setDestinationEntity(66U);
    msg.frameid = 16U;
    const char tmp_msg_0[] = {-101, -6, -100, -94, 29, -103, 37, 78, 102, 58, 95, -120, -8, -54, 40, 28, 46, 39, 26, -103, -60, 67, -109, 22, 43, -122, -55, 2, -124, -104, -110, 92, -47, -119, -112, 24, 25, -47, -38, -36, -63, 47, 64, 12, 94, -42, -38, -36, 123, -14, -75, -49, 38, -126, 97, 35, 50, -104, 51, 6, -10, 32, -37, -65, -56, 108, -85, 26, -27, 32, -13, -64, -98, -104, -11, 107, 22, -68, 82, 113, -8, 27, -40, -64, 18, -51, 76, -30, -108, 9};
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
    msg.setTimeStamp(0.846661960729);
    msg.setSource(49464U);
    msg.setSourceEntity(225U);
    msg.setDestination(15369U);
    msg.setDestinationEntity(32U);
    msg.fps = 143U;
    msg.quality = 16U;
    msg.reps = 102U;
    msg.tsize = 164U;

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
    msg.setTimeStamp(0.272959862797);
    msg.setSource(63296U);
    msg.setSourceEntity(246U);
    msg.setDestination(5461U);
    msg.setDestinationEntity(154U);
    msg.fps = 219U;
    msg.quality = 245U;
    msg.reps = 115U;
    msg.tsize = 200U;

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
    msg.setTimeStamp(0.0518767475354);
    msg.setSource(51098U);
    msg.setSourceEntity(148U);
    msg.setDestination(52159U);
    msg.setDestinationEntity(117U);
    msg.fps = 139U;
    msg.quality = 237U;
    msg.reps = 77U;
    msg.tsize = 227U;

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
    msg.setTimeStamp(0.0875142281626);
    msg.setSource(555U);
    msg.setSourceEntity(162U);
    msg.setDestination(52148U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.257630104424;
    msg.lon = 0.579282215872;
    msg.depth = 12U;
    msg.speed = 0.909654497951;
    msg.psi = 0.454854924508;

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
    msg.setTimeStamp(0.113276883756);
    msg.setSource(10290U);
    msg.setSourceEntity(170U);
    msg.setDestination(21031U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.724629786036;
    msg.lon = 0.802055388804;
    msg.depth = 197U;
    msg.speed = 0.0941179811297;
    msg.psi = 0.937375809036;

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
    msg.setTimeStamp(0.972046025581);
    msg.setSource(52010U);
    msg.setSourceEntity(103U);
    msg.setDestination(18205U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.670273012758;
    msg.lon = 0.608377374593;
    msg.depth = 172U;
    msg.speed = 0.0859770192542;
    msg.psi = 0.522685056481;

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
    msg.setTimeStamp(0.719990234802);
    msg.setSource(26173U);
    msg.setSourceEntity(59U);
    msg.setDestination(17236U);
    msg.setDestinationEntity(96U);
    msg.label.assign("OFODARELRTSMMLPXLQPPTFBFTXMYWDLERATISRUXYCIWVKBFQKGHYVHYPVAOIUONXUCZGVGYMFLTHTDPHBBSPJCBEUDUYQVDFNMNXEUGOFWKJKDDABZXJKUOTBXPAKRVEIWQCKCHZGVLSWD");
    msg.lat = 0.0989123960666;
    msg.lon = 0.13056898021;
    msg.z = 0.86549652201;
    msg.z_units = 113U;
    msg.cog = 0.312512930548;
    msg.sog = 0.632650994469;

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
    msg.setTimeStamp(0.736616635945);
    msg.setSource(31153U);
    msg.setSourceEntity(249U);
    msg.setDestination(64416U);
    msg.setDestinationEntity(54U);
    msg.label.assign("NHVWCIBMZWYLKUEASIKQFZLANTOUQREIXKCFNDCZAGGPBQJPSAIAZDWRUCLNGDZQBIRXDTSCTEBPJMTCAHIYUYEEHVHULWREWIPMZXLLXJRFTUOCANXKOVWKYJCMBDV");
    msg.lat = 0.878760420512;
    msg.lon = 0.300552365896;
    msg.z = 0.469351695909;
    msg.z_units = 82U;
    msg.cog = 0.65066740344;
    msg.sog = 0.0180777836729;

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
    msg.setTimeStamp(0.208154299883);
    msg.setSource(58432U);
    msg.setSourceEntity(99U);
    msg.setDestination(7608U);
    msg.setDestinationEntity(181U);
    msg.label.assign("ZTHDGNQQOODYWIOLKHRESPATFVDLUOVVYNWXTYDXNSUBMICGQDOVDURYYCMLWFWYYXZRPNTQLAWPQRPMCNGFCRFHZJFJHALHU");
    msg.lat = 0.362600064549;
    msg.lon = 0.756110209631;
    msg.z = 0.664243964647;
    msg.z_units = 104U;
    msg.cog = 0.0532693380754;
    msg.sog = 0.737898636088;

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
    msg.setTimeStamp(0.609490808655);
    msg.setSource(57453U);
    msg.setSourceEntity(28U);
    msg.setDestination(25565U);
    msg.setDestinationEntity(235U);
    msg.name.assign("LVENGOMNNFAGEWBPGCAMFRTSZODLHIUBKYWDIAYLHVIHDJWKXKAEAPWAQINJSAGMOVEVYSPLGXDLDOUPFNCEJDQQSHTPHIMNOJRHOAGVSQMROFPCUYKTRHIXUIOLDJYUCGFBXSWNSXFKQYDVYJSBPLGBCTLFYESBDQZGJEDRCUIUPTZNCKEHFVZKYSRXJJCWVUMUETZVZZVWXEITFWGCPUHXLTCOMYMWTZIAMKXAXFRJR");
    msg.value.assign("FCIAHCDCNWRFRATTFJDUE");

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
    msg.setTimeStamp(0.27886839553);
    msg.setSource(3507U);
    msg.setSourceEntity(155U);
    msg.setDestination(9907U);
    msg.setDestinationEntity(89U);
    msg.name.assign("KOQSLJDWTUHEKCGBUGASDILUEFGBTIDCEOMAIIIQEYHSTTBLFMETXQVLVEIKYRXIJJXTYMEUXPBRGHAQUVOKKNFHDCDYYMSDRXXBICTZAHDZXUJLGOSMWYTUAQBLCPHRGKMHWFNZQURHIABPPHFEYVETJFZJQFDZOMXLB");
    msg.value.assign("CGPTEGHQPIYMQJKVERXGJKDWBCDXRICOCUPOOYCBKWRRHAXLZROTVLEEWXITMZISJTVSZLVEZPQKYIMNGSWSBLGPWBEVISWUZJNPXNVRIHYRKWAXMJAJUUFSXHPDWJSKYHOFLQDFFKYLECSHBYTZLCMOWLJTYDZAFADPHZTYISGUFGTNMSTOJVABPCONNYHAQOMVRWUGNHNGMDBMEZDXHKICAQBGFLAUBURBVDNUVXRCMOQKNEJFFDTAQEKQIP");

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
    msg.setTimeStamp(0.978352542582);
    msg.setSource(37812U);
    msg.setSourceEntity(218U);
    msg.setDestination(57703U);
    msg.setDestinationEntity(243U);
    msg.name.assign("SFBCJCDJWWKSIHOCJJWHGTDCURLBGXXIBCWABIZMOWWRJFETPKHSGJZYAQZUTBAHVWHCQCLNBQMKTZGPEVZEOXMPBRHIKASFUNUHZIONVLJOMAYUXPXGJYBLFLEKYRPWFJKMVIMXTFEOTBENNZZVDYOXFNSIXXALTFMZROQYAPWVYVNHTQKBGMVGVPWGNUNCTRRDICHQAIJOSKKPDRIMU");
    msg.value.assign("QHXIAUUHVQMISTWOBVJYLNNOPMAUTJYGWCGATZQXIGHKGTCUAKICXBFWDFKCYAOBZXUFUZITRSPSPLSCZYVGEDAHYMDZLRWNZBLZDXVYMKDBFKKZOXVUIZYTKRURVTEQTEEIUWWONEOSDVAOHMYOVJCCLGYDJVUBNGJBACJHDGLLFPNNIFQKCKETXSBTBWEPIFNLDPWLZXNSEYMWFOMGNOSFADMRRJPJHFQCQXVXJSHMPBWQESAKH");

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
    msg.setTimeStamp(0.54271863667);
    msg.setSource(10667U);
    msg.setSourceEntity(222U);
    msg.setDestination(656U);
    msg.setDestinationEntity(206U);
    msg.name.assign("VVHDXVOUWVUXFBCHXVPDJTEVGDYXGIGYNEVNHUSJNMMQQKWESLXRZPSALQMLOUYQDTACMYUKJINLTDFHJVIMAABPKQHBFEAAZKRPOTCFTRXSGLRIWPKZMDBXGJYIWJZOAYZZSIFWMCRVCZMSHRGLHIBEOYIEPHOIVTQWGBSFFKYDZHWKDUZOUNCQEQWATRHEEDYGLUPNRJPQUNKCSRNWOUPTWFEOILBXPBYFRBBDCACKJFLCGSTJSMNZLJOXA");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IFAHWHALJIONMHOZWYSXUPERAWZDDGFBLXFHJOSNGZIYCGUFESXSTQDZBXGYICPHEWAWDZOENALJUNRRFMMGWKKSMUAXODFKILYPEBSUMNBIUTNKROYIHPQHDXSTDDGBCUCQKVQZPCUVBWYVZZAR");
    tmp_msg_0.value.assign("IOPJCYCLVKJXSVUJXSBOKOBZSRAGFFDEMEZXPYVNQMHIAVHWJEXQXRNBOGDKKSCETIATYFXLLUPMXGDQHWKHWQGSNZSGNQEYCOZESEJZSWQYKIXGTBHLETZTWVQHPDAGVCVBBWRPWUFFWDHICPRWKDDAAURVDYIVNTTKS");
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
    msg.setTimeStamp(0.0417485068344);
    msg.setSource(48827U);
    msg.setSourceEntity(39U);
    msg.setDestination(27859U);
    msg.setDestinationEntity(168U);
    msg.name.assign("AFQJDNMNVBMUICISWHPTCZAMUOZOVVEDVKZAGBXGOSJSUXBSYQWHBSKDNXHHBRFGHBSXKIYXWNUJZBZFATYPCOHUPEXECQRFCATPLDIKYJVJEOQXYLHVFKXCMZYEVROWIWNLDQNMZGJOAGZKDTRGAAKGTKZDGTSRHFUKPBJJCELJCRPSLTYMDQODVWNNIINFPMQLYTEHC");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("BKMSFQDXPNNFBIHNZSWILBBHJQYJLETROMISBJGTZLPFFRLGCMKA");
    tmp_msg_0.value.assign("FLJQRFDCVBHUOZEKHZKNWHNXOGOEFVMKNEQIXRAYZQDWCPPFTIUZRJTASK");
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
    msg.setTimeStamp(0.100421011882);
    msg.setSource(39355U);
    msg.setSourceEntity(204U);
    msg.setDestination(32426U);
    msg.setDestinationEntity(178U);
    msg.name.assign("IZLZRTMWWAZLAUVDTWCYWVZYTPCL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HWJKSWZVVNGIPOVTBEHQBUQUJDPBUZRJNSVHDDAVKGHUVRIDDXXZEAHAWOMRUBSYWNNAFQLZMPTVGWPYRZOZOLFFDGERKYGASFYCUREMCSHNZBKIPJPIGXBTKCTDIQDMJQIHNTJSUKYKBFW");
    tmp_msg_0.value.assign("BCISDAXXHXATZRXPNLIDPVOGHQLUSUMNFPMITBOQOHJHIZFJOCVHUVCFSEVWNPZSGERUCAQPVRAFDIPGEJFRSTWKCYFPVBWKBKBIDDPYEUPIMLYQGETBSLXOKZYWOGURTYYVNMINNBLHSFWZGFNWVNEWCDAKCQCWSZUYXXLOTDVLHMOAPOXJRMKRFKE");
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
    msg.setTimeStamp(0.717950729373);
    msg.setSource(63886U);
    msg.setSourceEntity(217U);
    msg.setDestination(65344U);
    msg.setDestinationEntity(215U);
    msg.name.assign("RYNDHZTDFMFFSFQEESOM");
    msg.visibility.assign("TQWSGSFPJVUWTZTEGBJXRHUIENXCVZXQNEKFTZBQBLHGPBWDTDLGUFORONPISRHVAYWCYYAZMYNWPKTTDLAHRESVOUZHDVSOASXESCRTWBVWKJQANTOEXRMJCAHPRHQMGEXFJDZYEMUWYPCVAZ");
    msg.scope.assign("CSJMQUZJWIVBPXUUMINZEEUMSAAFCGTTZFV");

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
    msg.setTimeStamp(0.240366669807);
    msg.setSource(49260U);
    msg.setSourceEntity(173U);
    msg.setDestination(20831U);
    msg.setDestinationEntity(133U);
    msg.name.assign("AZBNGKUAXCWXHJAECYVUHHJVWFZXSYFILXYLURCRWYMKXCQIEZRSPDNVYQBBGACSMTJZOCKCONTOQVFHSMIBKGJFVNSFULUJDTXOGLROTSXXIDDUZKKWZPNPIPSOSPYAEWULEIPMVPGAEYIPANYNESUPEQE");
    msg.visibility.assign("MCCWPVKJSLKOIJWSERNJTEFAHPQVMN");
    msg.scope.assign("MRQKZWPKOLRVMTFCCZRRMHKHMVPNVJQKTIETQWIUXDDPONJQLUSQFZYSIDJHUBSHGYRUKYNBPQXRPBTDENLGPIKUCIIZIBAXCTPNFBFJIDVWZVWHOPYRXQATZGAFVAQNMDLJMNNLSFSXXFGAHLPWTXKBQTUMLXCUWOHRMOZZGYWSOZLJZJUWVD");

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
    msg.setTimeStamp(0.509952964441);
    msg.setSource(18276U);
    msg.setSourceEntity(49U);
    msg.setDestination(29413U);
    msg.setDestinationEntity(215U);
    msg.name.assign("MDQGEHEQZPWKGFWHIQYQOASFIHAXWHQVQTVNBBQRAVHPEJBOBZWEKZYSVKZUNWCFFULNRUNTYVGAMSCKSOGYCKBKKZXGZMPRYLNBDCYPLLWXXIKPOSITEJEIWROYTOJLXIGXNXDSUGMZVDANKATCGBOJPBTF");
    msg.visibility.assign("GIUKFCGZJRLXOCSMXWQLHBQOHDSEXVTGOJSQXOVIPFYMBGOCZEKFDJZCUWEORUPEGDMDUPWUJNHLSBNHHKHHKRVEZQERZBBRPPDSJKTQDXCCTQVVAIYJJYYGJQUCWSSVCUMVWYIPKINMGHXFTLWGFAALOBZFQUIBOLMANFWXAWPTNWBYRZLKZVDASTNYXMEPMLRMFIPOZTYLRFUSNEGJIHKXBCUMGSVZHY");
    msg.scope.assign("CWDLVXNNCETZTDXGPNCNBLTZSU");

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
    msg.setTimeStamp(0.112669172858);
    msg.setSource(22600U);
    msg.setSourceEntity(244U);
    msg.setDestination(51424U);
    msg.setDestinationEntity(150U);
    msg.name.assign("DDAOZIUGWVEERQJAFYYLOKRIAVKVDUERUOBNGHXBTJHXFSZRGHEKRZUZMQHSWNCOPTIWXRSJZADPGWTFIUMCRLNYTMIRELRITCPKWCKDJWKSZVNGYBQSTAOKGLYJHZTFAUZEPNJBSWLXVQIEAFFUBQPYGQKBLSMOXOCXLKFSSWVQYJYDKQLRAVZMLFOTPDVGNXHQIBFACDNOIWMDGCCAYM");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZYGGEWUPOMNKSYWJJOXSMJGSCWTTNUTZMREBOLABP");
    tmp_msg_0.value.assign("YVGXDLKHMSSZSOKUJWVCETDVZJTQLUAZWOFWXYMAZIPSOKVTRYPHPWOYVLSDNQWHJBHBDXKYGKMFKWMXOTBHFCNGXRCHJENRYQMNILWMIRYUEPGNEFVPUUZLPCPBDWGSJBLIEOQRZIIYEQOXHNMDTZTJDFIUPAEALIBSTSVTJEFMYAAUZLFXPEXTSLVGKRBCCZCXNBQWAMGLXCRRHEDFCNTNKGAQBMUHKAOGYJNZWVFSDRCQQPRIUHAGKI");
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
    msg.setTimeStamp(0.908511744814);
    msg.setSource(40188U);
    msg.setSourceEntity(157U);
    msg.setDestination(44129U);
    msg.setDestinationEntity(217U);
    msg.name.assign("QMIZUQYMJADACOUANMMBRXU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JHBCPXFPPUJUBOYLBWTIJECWFAZIQH");
    tmp_msg_0.value.assign("NTOOZXJXUFDNRVQKNAJJIKHUESQXCFSWYRLUWNAYYKHYRZMCVCQWWN");
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
    msg.setTimeStamp(0.0508821089293);
    msg.setSource(5401U);
    msg.setSourceEntity(137U);
    msg.setDestination(56664U);
    msg.setDestinationEntity(21U);
    msg.name.assign("GLREJVBKGXYGTBTXOZXNRZDTPMYPFIQBDHJOSVENMZBOEWHTJCIQQKIWIKEIRUWIKGHTOZDMMVFSTG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XPXXRSYPIFAFGEA");
    tmp_msg_0.value.assign("PEDOJUGJQTMHGQMLTYUYDLDCLCSJWXHDXGLUUPIKGWKXIWPNTGPIIJGZQHWRVBGKUVNOPRAORFQWFFVYSOBEHOXANTKEBSZKUZVNVTLKZUEFJMIXAHSFLECCINDHFELINJZTSRWSIOPZRLOLRDMKIVTTZVKZQ");
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
    msg.setTimeStamp(0.909174170681);
    msg.setSource(20245U);
    msg.setSourceEntity(85U);
    msg.setDestination(22514U);
    msg.setDestinationEntity(168U);
    msg.name.assign("MEDZPWUWFJISSGLBCTJWAODYSHGAZJUVWPHSTRYJLENKVNQMAVHDKCCIHOFPIWXUKATTWHVPLHQFDSOGBZXEBKMMPEFLLRWZDLEUVHXCCCMTHZIFXQLBOMMLTKNUAJQDYQXKTRFOPVSXYQEJGDADTNQWKDVWISJIPRAGVLQ");

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
    msg.setTimeStamp(0.244765523367);
    msg.setSource(9407U);
    msg.setSourceEntity(209U);
    msg.setDestination(10730U);
    msg.setDestinationEntity(250U);
    msg.name.assign("CNFCUBXRQVWNOKHRMBUDCPLOMJAOJFEJOSCAYGBVOEXTFVZDZSDJFNDQZJPGHCHSZANRBNXAOMRKTATQLDVAMSBIEEYVNGMWLKSKOILGPAVGDUXQYLZMSBGATRLHWIWZUHPCHTBEVPIRLQUWNHTSAHFLQSGKRQUYERMRJNHSYXQJPJQZUIDAINWTPYREUCOKCWBDKZXYKODHNLSVGFDMGBTXPFLTZFUVPMWXVJICIWGKFXU");

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
    msg.setTimeStamp(0.671205757229);
    msg.setSource(52770U);
    msg.setSourceEntity(197U);
    msg.setDestination(50813U);
    msg.setDestinationEntity(13U);
    msg.name.assign("VKQJWSQFZNTQBPMOTIOGPZJDEDPEOKCVSNFNUJIPDZOUWDVIZLVKSAXHGJFUCEJWGULRXMNWLNSHEPNDTQEYQIGCHKQCLKLHQPLFJXRCBJFTEIHKQDVRPTZYSSSCQPMVMMUIBUGYPAXZRWCGTUBKXXEFBCGFABNGXHZWLYRWC");

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
    msg.setTimeStamp(0.502833597999);
    msg.setSource(56676U);
    msg.setSourceEntity(93U);
    msg.setDestination(8644U);
    msg.setDestinationEntity(217U);
    msg.timeout = 296750109U;

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
    msg.setTimeStamp(0.968286895405);
    msg.setSource(35923U);
    msg.setSourceEntity(165U);
    msg.setDestination(49516U);
    msg.setDestinationEntity(177U);
    msg.timeout = 3346762800U;

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
    msg.setTimeStamp(0.881536094893);
    msg.setSource(11587U);
    msg.setSourceEntity(106U);
    msg.setDestination(13072U);
    msg.setDestinationEntity(65U);
    msg.timeout = 3679549078U;

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
    msg.setTimeStamp(0.195297982162);
    msg.setSource(5351U);
    msg.setSourceEntity(75U);
    msg.setDestination(55059U);
    msg.setDestinationEntity(153U);
    msg.sessid = 49662266U;

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
    msg.setTimeStamp(0.247666943893);
    msg.setSource(27352U);
    msg.setSourceEntity(104U);
    msg.setDestination(1621U);
    msg.setDestinationEntity(98U);
    msg.sessid = 3454697550U;

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
    msg.setTimeStamp(0.846664860674);
    msg.setSource(9522U);
    msg.setSourceEntity(66U);
    msg.setDestination(10012U);
    msg.setDestinationEntity(238U);
    msg.sessid = 2850676909U;

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
    msg.setTimeStamp(0.0609053466567);
    msg.setSource(28941U);
    msg.setSourceEntity(206U);
    msg.setDestination(59930U);
    msg.setDestinationEntity(70U);
    msg.sessid = 3407877349U;
    msg.messages.assign("SNMGUYJSYVNPAWRIFAZLLQTBXQZYCYUUKDIRKOQOVRFCEEOJHSCCNNUOOOGKHPVFDAAAHPFOHTHRYDXDNRDXRIYFFHOSMJZSMQUMTNVPDGOAEWVXCXMRDXBCZCEQTLVLWPTRJYMLFIEPINUNIZFYSNZMWDWAEZFQGWQBIMLEXJQWZBBEXAGYQKVLPTLCKQGPMCUXPGKIVUKWHLSBHKVBRO");

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
    msg.setTimeStamp(0.539394557682);
    msg.setSource(61947U);
    msg.setSourceEntity(114U);
    msg.setDestination(14280U);
    msg.setDestinationEntity(126U);
    msg.sessid = 558283201U;
    msg.messages.assign("IYQCUULFQYXDGQCXBBGHKILAGBSCWHJUHJTSPHRZHTGUAKYLCZKSYEENFYZVTMVWNXYFSUWVPCOTQSTEVYEDRL");

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
    msg.setTimeStamp(0.854663831277);
    msg.setSource(50137U);
    msg.setSourceEntity(143U);
    msg.setDestination(46866U);
    msg.setDestinationEntity(19U);
    msg.sessid = 343420152U;
    msg.messages.assign("YVXNANMZPEZWOCJYFJXSUYSUMROLSZZ");

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
    msg.setTimeStamp(0.683499511638);
    msg.setSource(26055U);
    msg.setSourceEntity(240U);
    msg.setDestination(51818U);
    msg.setDestinationEntity(119U);
    msg.sessid = 1450811084U;

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
    msg.setTimeStamp(0.70656124641);
    msg.setSource(6198U);
    msg.setSourceEntity(153U);
    msg.setDestination(45432U);
    msg.setDestinationEntity(25U);
    msg.sessid = 181604641U;

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
    msg.setTimeStamp(0.473794657791);
    msg.setSource(32461U);
    msg.setSourceEntity(39U);
    msg.setDestination(54460U);
    msg.setDestinationEntity(147U);
    msg.sessid = 1836648080U;

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
    msg.setTimeStamp(0.141027839317);
    msg.setSource(17763U);
    msg.setSourceEntity(146U);
    msg.setDestination(58458U);
    msg.setDestinationEntity(225U);
    msg.sessid = 1469562953U;
    msg.status = 105U;

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
    msg.setTimeStamp(0.908096246378);
    msg.setSource(49995U);
    msg.setSourceEntity(149U);
    msg.setDestination(56670U);
    msg.setDestinationEntity(12U);
    msg.sessid = 1596378833U;
    msg.status = 105U;

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
    msg.setTimeStamp(0.919774269003);
    msg.setSource(16505U);
    msg.setSourceEntity(114U);
    msg.setDestination(33639U);
    msg.setDestinationEntity(139U);
    msg.sessid = 463904790U;
    msg.status = 7U;

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
    msg.setTimeStamp(0.681643241174);
    msg.setSource(38553U);
    msg.setSourceEntity(44U);
    msg.setDestination(5400U);
    msg.setDestinationEntity(197U);
    msg.name.assign("FVWERZVLKC");

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
    msg.setTimeStamp(0.0665981790246);
    msg.setSource(22086U);
    msg.setSourceEntity(128U);
    msg.setDestination(40612U);
    msg.setDestinationEntity(27U);
    msg.name.assign("SEAMUDCKHDPASIMLAYZMJLZYLWTJUDFWCGFXGHAHOVFEVBWZRQBHJEMNQVNWYJQOMYKLKYRBCZMNJXAEPLUTWKSGBLCTJXLGXCRCGFVMGLQFPYDDVZNTJXNHFCIZEOGXPDYNOURIP");

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
    msg.setTimeStamp(0.0689201853497);
    msg.setSource(2354U);
    msg.setSourceEntity(228U);
    msg.setDestination(45902U);
    msg.setDestinationEntity(104U);
    msg.name.assign("WUWBYKOHZYAQFJXHZETGXCZKWRWBAGVFWOIPTTRIDMSSLWFIJKQXCUTMRBLJSYBPXQADOULQOEEJFUQEZQHAMNVYPPKOFGITUR");

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
    msg.setTimeStamp(0.897963120654);
    msg.setSource(54986U);
    msg.setSourceEntity(128U);
    msg.setDestination(62123U);
    msg.setDestinationEntity(116U);
    msg.name.assign("HLTUFNVVCOHVTMFGJLYODJLNBXLGCYHNNKKOICDS");

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
    msg.setTimeStamp(0.513808773983);
    msg.setSource(42733U);
    msg.setSourceEntity(121U);
    msg.setDestination(31962U);
    msg.setDestinationEntity(50U);
    msg.name.assign("BREXJQDMEMFKSYVQVZTPGZ");

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
    msg.setTimeStamp(0.182599543126);
    msg.setSource(14027U);
    msg.setSourceEntity(144U);
    msg.setDestination(5658U);
    msg.setDestinationEntity(240U);
    msg.name.assign("AUWSKOZMWDRMZEDAQYPJNZNYJKUHVYBYZGUJFJNOSTSNYVHLJHGCBUXBXSECKPFFEMMCOWUQXHASVDQXTQQVMFTADOHUZBGQNJFIJWSTCBAKVJLPDKRRICFGFLRKWODWCETRIMLECCHYMQKVTGXNSCGOMGLXXZITPZXQYYUGBGNIIJRPRLOWTBNHKDBLUKNTT");

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
    msg.setTimeStamp(0.568430324239);
    msg.setSource(6104U);
    msg.setSourceEntity(92U);
    msg.setDestination(30959U);
    msg.setDestinationEntity(241U);
    msg.type = 153U;
    msg.error.assign("AIZOMCJUGUETLHBKMBKRGCXEEILCYKQXWULJQVOHAHYNVPVEPTYDAQRXJSWFSGYUQMITJDHYAONFXZIVFISPKCPPJUVBMVMZDLMYYWJDZEWRDAGRLXXNAFXYLKVSWBKSRDKDTTCCGPTZUHMGBZOFHLSICUWDZIXPIVOAHEQNBXJYKQQRIBGLOAMLNWONOAKMATGZSJFUFHPXTQBUNKFPTREQWTSESDRQMPYZWL");

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
    msg.setTimeStamp(0.483117377587);
    msg.setSource(37306U);
    msg.setSourceEntity(98U);
    msg.setDestination(54122U);
    msg.setDestinationEntity(106U);
    msg.type = 23U;
    msg.error.assign("BPIVDFPLNZKYL");

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
    msg.setTimeStamp(0.968231193763);
    msg.setSource(37285U);
    msg.setSourceEntity(130U);
    msg.setDestination(3774U);
    msg.setDestinationEntity(122U);
    msg.type = 100U;
    msg.error.assign("MTMLYAROJUWIVTAEYHOHKXOVYVOJHDBGEZQGFBPCFCXVNGUZKNBJSOALDQFIQKVVRNGGCFLFZZAIJAIQWXRQPKMWJPQJOPPAXRMLWHSKWRBCMCKXMGOIYQXJRQCODJPGXYWLITS");

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
    msg.setTimeStamp(0.443270031726);
    msg.setSource(59530U);
    msg.setSourceEntity(87U);
    msg.setDestination(13996U);
    msg.setDestinationEntity(236U);
    msg.seq = 55930U;
    msg.sys_dst.assign("YYTUNKCYTKODBYPOJPMVEFSNQBDXHSLPXYGWATGICDCPREKDUXCUNIQQFZQHQFEZMZAGIYKDSCGPDBZERIZAUMFDMKRRBOWWOWYJZGLJOMIARXBLSERPLMGUXFTTSP");
    msg.flags = 118U;
    const char tmp_msg_0[] = {-115, -95, 80, 7, -9, 13, -118, 100, 40, -116, -14, 41, 116, -91, 30, -128, -54, 101, -98, -29, -12, -104, 9, -43, 41, -78, 60, 51, 24, 124, -25, 5, -68, 39, 57, 19, -11, -24, 74, 39, -125, -82, -118, 51, 90, 102, 3, -95, -102, -106, 82, -33, -118, -4, 43, 93, 43, 13, -105, 63, 55, 98, -46, 68, 99, -115, 0, -107, -34, 35, -42, -62, -71, -118, -36, -2, -4, -79, 33, -85, 60, 70, 28, 28, 36, -9, 69, -116, -14, -111, -4, -126, 103, 56, 66, 36, 89, 55, 114, -42, 79, 1, -110, -89, -21, 22, 109, 1, 4, 87, 40, -45, 22, -109, -21, -107, -103, -21, 92, 78, 110, 65, 111, -128, 58, -61, -5, -54, -13, -50, -42, -120, 124, -51, 112, 6, -26, -83, -60, 22, -78, 14, -127};
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
    msg.setTimeStamp(0.0835474417468);
    msg.setSource(62253U);
    msg.setSourceEntity(242U);
    msg.setDestination(6331U);
    msg.setDestinationEntity(136U);
    msg.seq = 42003U;
    msg.sys_dst.assign("ZRELLRASLGXZQIXURIUQUALTFKTIMMUJRWYQQK");
    msg.flags = 193U;
    const char tmp_msg_0[] = {105, 89, -105, -44, -82, -58, 72, -114, 99, -55, 57, -42, -2, -73, -14, 124, 55, 70, -34, -1, -3, 15, 107, -78, -110, -40, -12, 49, 35, 115, 13, -70, 36, 61, 88, 112, -105, -5, 8, 67, 103, -112, -38, 50, -9, -8, 91, -23, -50, -20, 49, -72, 122, -118, -61, 50, 110, -84, 26, 14, 117, 52, -122, -120, -104, 69, -119, 1, 126, 75, -47, -44, 14, -3, -105, -32, 13, -53, 6, 69, 71, -86, -3, -79, -13, -46, -57, 80, 97, 13, 20, -121, 84, -2, 108, 32, -5, 6, 81, 59, -98, -17, -6, 0, 83, -36, -16, -29, -107, 103, -32, -15, 86, -28, 40, -79, 78, 11, -110, 72, -53, 21, 110, -43, -41, 33, 12, 81, 88, 0, -39, -30, -91, 25, -123, -46, -18, 116, 73, 0, -19, -63, 36, -110, 76, -119, 78, -47, 65, 78, -103, 101, -82, 100, 116, -3, -126, 95, -24, -122, 42, -97, 62, 46, 125, 3, 123, -103, 61, -116, -100, 60, 86, -95, 87, -52, -84, -71, -103, 97, -55, -111, 103, -55, -7, -73, -116, -30, -22, 97, -111, 50, -70, 64, 57, 88, 114, 107, 36, 22, 2, 121, -42, 117, -40, 110, -57, -112, 3, 71, 17, -26, -22, 72};
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
    msg.setTimeStamp(0.159139739294);
    msg.setSource(14379U);
    msg.setSourceEntity(101U);
    msg.setDestination(1627U);
    msg.setDestinationEntity(38U);
    msg.seq = 36170U;
    msg.sys_dst.assign("DFWDPZIPECRHKBPNZTEWKLYLMGHACCKSZQHBYAXYTOCXYHXJEINIWLHGJERXJUTGOUCPEBOPPKC");
    msg.flags = 208U;
    const char tmp_msg_0[] = {44, -44, 40, -34, -5, 119, -98, 3, 62, -91, -65, -20, -34, -106, -43, 105, 89, -57, -51, -100, -46, -45, 66, -33, -52, 3, 81, -88, -31};
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
    msg.setTimeStamp(0.287688869667);
    msg.setSource(49695U);
    msg.setSourceEntity(61U);
    msg.setDestination(14901U);
    msg.setDestinationEntity(122U);
    msg.sys_src.assign("SDYWFLAMPGQYZENGKGQGILJIEWDTLJVCKMVGNXOLUXTEITIHPGBYALNFJKSRYGUBWZDQVRPOMZXHBKIBXRRBAIBUFQAGHRRUWRVSDONUXVPKVSCZZSMEFZWDWYHQTOAWJOYYGLKYQDCMTZEINPSFNJBPXEHHVQUDZMERCPKVZJ");
    msg.sys_dst.assign("QUKEMCUWUPCYIVRARTMHHFOVWLZRRFQBPPGTVAJNTKYEIVOZOGOSGVWYFSWOBWCVNRDGPFHTOWAAYBCBXJNUZJOQDIWMBNCCECHAZUMUFALKNNZTDILBXILLBIDTFGNBXHLMVEHYPFKOIMWUCGVLJ");
    msg.flags = 111U;
    const char tmp_msg_0[] = {-19, -7, 118, 4, 126, -92, 33, -67, 3, -111, -18, 85, 4, -80, 15, -38, -23, -80, 93, 85, -106, 44, -12, 67, 119, -83, 92, -27, -101, -19, -110, 121, -85, -82, 14, 93, -53, 7, -60, 10, -23, -46, -78, -44, -55, -95, 111, 55, -19, -114, -31, 15, -63, 77, 0, 107, -46, -13, 27, -82, -124, -63, 37, 64, -74, 105, 5, -14, 70, 25, 28, -103, 6, -127, -66, 25, -17, 62, 112, 122, -126, -121, -24, 86, -124, -108, -36, 80, -123, -118, -36, 57, 73, 53, 2, -1, 76, 6, -124, -40};
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
    msg.setTimeStamp(0.249132511577);
    msg.setSource(56255U);
    msg.setSourceEntity(73U);
    msg.setDestination(30400U);
    msg.setDestinationEntity(236U);
    msg.sys_src.assign("OOFIOQCOMBYUHYCWMMCHFCHWGGFDKTZBIQNVKFHPDJTLSIEIQLZHSGTITBJQUCTBUQFDXZDAOAOVEFFBPNJXMTDFXWDVKZPCPWIUV");
    msg.sys_dst.assign("DXVITQNBOHIZRBADLMWBEZQGHPAPMEYMPYMNSDNJIWNDLZXTAAEYHIQJBMRAMGFKYLELHOVJAQXDNOQNFYJUJEIUZFWHFFOCAVCGUMCMPTUTBVHPXOGGCPBXDDWKTSDIKJUHDWVTJKBKXPKSOLNSTGULHZEBLPQXUFHCSCSGVWAVIKYKWCRP");
    msg.flags = 194U;
    const char tmp_msg_0[] = {61, 9, 12, -43, 9, 22, 64, 56, 103, 80, -97, -15, 48, -124, -48, 57, 41, 58, -43, 94, -100, 12, 48, 42, -27, 102, -73, -121, 74, 15, -12, -71, 80, -80, 12, 109, -110, 25, -85, -94, -18, 95, -101, 33, 125, 3, 100, -13, 62, 17, -37, 22, -25, 56, -91, -127, 92, -12, 61, 62, 91, 13, -82, 57, 61, 122, -42, -17, 57, -32, 68, 7, 36, 103, 60, -68, -18, 3, 93, -63, 41, 98, -15, 21, 33, 76, 17, -22, -39, -74, -35, 66, 73, -96, -98, -38, -14, 125, 124, 56, -19, 53, -46, 83, -39, -115, 11, 7, -64, 15, -102, 114, 31, 40, -119, 97, 10, 60, 95, 34, -4, -73, -11, -8, -20, 34, 126, -117, 31, -97, 75, -108, 11, 98, -110, 89, -38, -6, -22, 114, 44, 6, -32, -1, -63, -106, 80, -87, 125, 92, 125, -123, -85, -65, -73, -75, 71, -51, -112, 75, 105, -77, -115, 77, -36, -41, -74, -71, 121, -113, 97, 24, 78, -55, 98, 18, 33, -123, 63, -86, 107, 15, -117, -85, 13, 101, -30, 58, -34, 113, 37, -88, 92, 56, -86, 71, 81, 45, 115, 119, 41, -6, -97, -67, 47, 44, 117, -43, 17, 54, -31, 1, -123, 112, -56};
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
    msg.setTimeStamp(0.410035244729);
    msg.setSource(39651U);
    msg.setSourceEntity(116U);
    msg.setDestination(25727U);
    msg.setDestinationEntity(95U);
    msg.sys_src.assign("HUPVAKPHOLEFCNRDQBVCPZNVNIEVJYGJUOFKEPAUSYRSYQZWUAQDZACPLMFDPERAMEBGDLTIXTEEOCW");
    msg.sys_dst.assign("XMYMHSCQLWUKDNBTIABISXVZCWRQBLYJDITNEUGVYWSFKGPGZVRTYXCTJEPVNTNCPVWDFGLPMYLDXKAMULIIRLWIOQOTJYJLOVGMEYRSFIQNQHSPOHICTWXGKNESFLCDQGYRARCOAMUOAUPLQBAWUBSRRSMYMNZUFJDKGKJXCUZESFEZJDUGVKJSPDBVWIWOFZXOETKPPZLHBTZQHRNEADBAHQW");
    msg.flags = 33U;
    const char tmp_msg_0[] = {64, 82, 65, -52, 41, 4, -44, 24, -127, 104, -6, 109, 48, 75, -103, -37, -15, 56, -72, 31, 106, 37, 72, -51, -70, 86, -5, 84, 123, -19, -53, -61, 25, -68, -49, 28, -97, -66, 31, 37, 44, -40, -67, -123, 40, 96, -64, -114, -118, -71, -102, 2, -90, 20, -95, -30, -58, 37, 93, 95, 97, 116, 50, -116, -127, -41, -107, 24, -126, -106, -118, 67, 109, -12, -80, 48, -54, -96, -34, -88, -29, 69, 58, 2, -67, 63, 32, -87, 27, 124, -107, 61, 14, -94, 83, 74, -91, 39, -118, 42, -78, 28, 20, -66, 47, 7, 90, -119, -61, 111, -109, -56, -95, -1, 1, -83, 121, -83, -42, 12, 115, -93, -2};
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
    msg.setTimeStamp(0.761549593477);
    msg.setSource(48989U);
    msg.setSourceEntity(22U);
    msg.setDestination(43256U);
    msg.setDestinationEntity(208U);
    msg.seq = 25290U;
    msg.value = 62U;
    msg.error.assign("WAHFUROBXXFVDMTKMLZXDSJCSLMRIFKBGPNKPDBY");

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
    msg.setTimeStamp(0.276124150339);
    msg.setSource(7577U);
    msg.setSourceEntity(182U);
    msg.setDestination(25106U);
    msg.setDestinationEntity(206U);
    msg.seq = 53021U;
    msg.value = 199U;
    msg.error.assign("ROEWDPHXCCLEIRCTEIOAIOZUVLMHFXAQGNOWXJFWWJJMZYELPIQYFVDANGHYTEBISVMQSHIYZRSZROPPNINBYPJXEOOESNGWGJXVESPNNQBUWGFBLUZHFTYBHBYUAXSAKRXTRKUBQDUKXBDFMWDFLGNQIVYLDRJMCAHGRXZUJNJWIVQRJBPLRGKFMACCLXGTQDVZAUDPVV");

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
    msg.setTimeStamp(0.793861207417);
    msg.setSource(36736U);
    msg.setSourceEntity(57U);
    msg.setDestination(39734U);
    msg.setDestinationEntity(250U);
    msg.seq = 8406U;
    msg.value = 164U;
    msg.error.assign("ZBDVMWNHRZDROCJHBFDEPAZWLHIMGQFYFNKMAZGSNAFBIKUGBCTAODVJFCGMSIPCLVFZJXRPXPJRAPPRNYCWPOIXTUJKOSVMQBYJBGUWIPXRBKEIMRMTNNTDRACAQKCWOSVFNBXHHVGQTLOSUEIKXTLEWJEOSMUDYBSULCJDKOYFAKEQWT");

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
    msg.setTimeStamp(0.0626967319492);
    msg.setSource(48545U);
    msg.setSourceEntity(67U);
    msg.setDestination(16788U);
    msg.setDestinationEntity(248U);
    msg.seq = 30804U;
    msg.sys.assign("OEUHDTXLQVZZJETXCCOBWAQFLYQYWDOKRLQDUPHOBRKSJRNXLPS");
    msg.value = 0.53082763996;

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
    msg.setTimeStamp(0.191980234327);
    msg.setSource(23669U);
    msg.setSourceEntity(31U);
    msg.setDestination(14790U);
    msg.setDestinationEntity(49U);
    msg.seq = 24859U;
    msg.sys.assign("IWFKFSINYIGIMNFOUXXPKIWPYCAQEZMEHPUFCEBZSBSXNREPHBCMZPQLMVWXGJMEZQRLGKDWQLLSDFWDUCBHTQJSOCPTNHKSUAMVDFGOGNULYVSTNFKLCUAYVVIZYAOXTGWBXDGTAOJYEJIIDAROPPOCFCSOLJFTBBZZTNQJBOJ");
    msg.value = 0.12924137763;

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
    msg.setTimeStamp(0.651659950124);
    msg.setSource(15040U);
    msg.setSourceEntity(235U);
    msg.setDestination(4170U);
    msg.setDestinationEntity(116U);
    msg.seq = 57914U;
    msg.sys.assign("VRKELMYLCWAWHVZLJBCFDPREAXORSTJYIFXKINMZXVIYXNKXFJQXVZIGLQDATLGXVYVPNGKHVPWYKWHUTOWQUJSBOCXZGMXKYTJRDMKGZKBOBNMLOUCSBXTEGRSEMLNEJRDMYNCOHWBZHGW");
    msg.value = 0.421025673822;

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
    IMC::AbortAcked msg;
    msg.setTimeStamp(0.324392709589);
    msg.setSource(7994U);
    msg.setSourceEntity(46U);
    msg.setDestination(7468U);
    msg.setDestinationEntity(46U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbortAcked #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbortAcked msg;
    msg.setTimeStamp(0.959588460272);
    msg.setSource(8374U);
    msg.setSourceEntity(110U);
    msg.setDestination(58274U);
    msg.setDestinationEntity(194U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbortAcked #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbortAcked msg;
    msg.setTimeStamp(0.697177999596);
    msg.setSource(44591U);
    msg.setSourceEntity(149U);
    msg.setDestination(27003U);
    msg.setDestinationEntity(123U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbortAcked #2", msg == *msg_d);
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
    msg.setTimeStamp(0.015158974095);
    msg.setSource(5121U);
    msg.setSourceEntity(230U);
    msg.setDestination(63005U);
    msg.setDestinationEntity(229U);
    msg.action = 139U;
    msg.lon_gain = 0.816209844928;
    msg.lat_gain = 0.291218403422;
    msg.bond_thick = 0.817729973613;
    msg.lead_gain = 0.485225149682;
    msg.deconfl_gain = 0.390439261136;
    msg.accel_switch_gain = 0.664316944863;
    msg.safe_dist = 0.236909555952;
    msg.deconflict_offset = 0.838709536473;
    msg.accel_safe_margin = 0.85965304532;
    msg.accel_lim_x = 0.756270155459;

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
    msg.setTimeStamp(0.68940330972);
    msg.setSource(18844U);
    msg.setSourceEntity(77U);
    msg.setDestination(1918U);
    msg.setDestinationEntity(235U);
    msg.action = 180U;
    msg.lon_gain = 0.806639042281;
    msg.lat_gain = 0.377784051387;
    msg.bond_thick = 0.203357371074;
    msg.lead_gain = 0.137576644126;
    msg.deconfl_gain = 0.58425294987;
    msg.accel_switch_gain = 0.173894767247;
    msg.safe_dist = 0.703257939302;
    msg.deconflict_offset = 0.662414861711;
    msg.accel_safe_margin = 0.0590440867245;
    msg.accel_lim_x = 0.143522062616;

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
    msg.setTimeStamp(0.439142155256);
    msg.setSource(6203U);
    msg.setSourceEntity(175U);
    msg.setDestination(59737U);
    msg.setDestinationEntity(138U);
    msg.action = 180U;
    msg.lon_gain = 0.0322449120733;
    msg.lat_gain = 0.915084052526;
    msg.bond_thick = 0.774684815152;
    msg.lead_gain = 0.625040420242;
    msg.deconfl_gain = 0.00723512129638;
    msg.accel_switch_gain = 0.416271925549;
    msg.safe_dist = 0.619402002709;
    msg.deconflict_offset = 0.872777327239;
    msg.accel_safe_margin = 0.00542169182487;
    msg.accel_lim_x = 0.803879906988;

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
    msg.setTimeStamp(0.673380516912);
    msg.setSource(17521U);
    msg.setSourceEntity(225U);
    msg.setDestination(45479U);
    msg.setDestinationEntity(68U);
    msg.err_mean = 0.759835000996;
    msg.dist_min_abs = 0.186125772326;
    msg.dist_min_mean = 0.724439629267;
    msg.time = 0.890815381879;

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
    msg.setTimeStamp(0.69029260277);
    msg.setSource(39227U);
    msg.setSourceEntity(19U);
    msg.setDestination(17188U);
    msg.setDestinationEntity(75U);
    msg.err_mean = 0.750420118086;
    msg.dist_min_abs = 0.249139935982;
    msg.dist_min_mean = 0.389196060745;
    msg.time = 0.0466856812723;

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
    msg.setTimeStamp(0.708336961178);
    msg.setSource(47956U);
    msg.setSourceEntity(145U);
    msg.setDestination(311U);
    msg.setDestinationEntity(11U);
    msg.err_mean = 0.118756185725;
    msg.dist_min_abs = 0.976160260748;
    msg.dist_min_mean = 0.782186398011;
    msg.time = 0.894103908863;

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
    msg.setTimeStamp(0.370927518973);
    msg.setSource(23572U);
    msg.setSourceEntity(251U);
    msg.setDestination(22220U);
    msg.setDestinationEntity(138U);
    msg.uid = 186U;
    msg.frag_number = 8U;
    msg.num_frags = 191U;
    const char tmp_msg_0[] = {15, 14, -91, 107, 78, 30, 20, 23, -31, 7, 0, -47, 54, 44, -73, 24, 81, 81, -6, 1, -103, -43, -22, 78, -5, 111, -84, 85, -51, -8, 12, 21, -111, 116, 90, -43, -15, -64, 107, 11, 42, -106, 112, -15, -92, 47, 47, 104, -117, -85, 80, 59, 17, 85, -52, -47, 24, 26, 34, -79, -120, -58, 65, -106, -70, 49, -103, -34, 95, 124, 103, -114, -46, -75, 17, -107, -24, -96, 105, 91, -72, -57, -98, -111, 111, 11, 12, -69, -71, 71};
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
    msg.setTimeStamp(0.767232808379);
    msg.setSource(27536U);
    msg.setSourceEntity(46U);
    msg.setDestination(5453U);
    msg.setDestinationEntity(113U);
    msg.uid = 80U;
    msg.frag_number = 112U;
    msg.num_frags = 223U;
    const char tmp_msg_0[] = {76, -19, 22, 120, -26, -52, -61, 125, 60, 110, 89, 112, 14, 65, -104, 39, 16, 67, 79, 103, 122, -106};
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
    msg.setTimeStamp(0.0351962594084);
    msg.setSource(41382U);
    msg.setSourceEntity(4U);
    msg.setDestination(60047U);
    msg.setDestinationEntity(1U);
    msg.uid = 243U;
    msg.frag_number = 156U;
    msg.num_frags = 9U;
    const char tmp_msg_0[] = {-40, -67, -26, -63, -71, 82, -27, 102, -59, -106, -56, -87, 73, -96, -18, -22, -96, -71, 13, -39, -65, -34, -36, -128, 101, 37, 90, -8, 64, 86, 114, -110, -26, -45, -26, -35, -41, -62, -78, -115, -92, -40, -97, 121, 71, -12, -42, 125, 57, -52, -36, 68, -76, 35, 49, -94, 107, 67, -13, 112, -40, -84, -111, 37, -48, -98, 43, 72, 126, 49, 121, 125, -111, 56, -44, -89, 96, -9, 53, -104, 54, 86, -52, 95, 22, -57, 87, 123, -106, 24, 33, -102, -44, -97, 23, -101, 104, -60, 113, -69, 78, 59, 16, 104, 118, -14, 34, -58, -21, -9, 44, 29, -58, 32, 28, 90, -71, -76, -72, 39, 80, 74, 80, 94, -40, 100, -122, -110, 73, -90, 67, -111, -106, 25, 24, -30, -113, 12, 76, -81, 49, -92, -94, 121, 103, 38, 31, -117, 28, -33, -18, -23, -7, 46, -76, -91, 65, 62, 18, -121, -88, -5, -18, 112, 64, -14, 35, -34, 118, -43, -102, 89, -14, 0, -56, 62, -76, -103, 15, 95, 23, 58, 98, 116, -65, 52, -87, -82, 73, -49, -2, 57, 37, -32, 47, 100, -124, -61, 30, 31, -32, 48, -63, -99, 95};
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
    msg.setTimeStamp(0.933055110231);
    msg.setSource(18189U);
    msg.setSourceEntity(126U);
    msg.setDestination(21820U);
    msg.setDestinationEntity(29U);
    msg.content_type.assign("FARHNWKGGRZVBFUYGFSXFJUJDVTYBHSPCLSLPAOHQIBAMQTLTWIUWMZZZSFPQQJOBXMXAHXVIEVVRLCZYWMEKNI");
    const char tmp_msg_0[] = {-125, 87, -75, 83, -7, 99, 4, -114, 106, 26, 6, -67, 74, -63, 48, 122, 93, -62, 64, -66, -108, -83, -100, 79, -79, 106, 81, 41, -11, -25, 87, -6, -8, 99, 70, 79, -79, -96, 118, 12, -50, 23, -99, -4, 112, 64, 8, -8, 76, -28, -47, 44, -88, -97, -105, -14, -20, -36, -83, -97, -57, 48, 10, 91, 58, -115, 59, -107, -16, -126, 120, 91, 10, -74, -74, 31, -19, -97, -110, -26, 80, -24, -80, -83, 99, -32, -46, 14, -72, -59, 11, 91, -55, -46, 58, -12, 81, 21, -90, 60, 76, -19, 73, -61, -35, 80, 27, -29, -86, 88, -26, 103, 70, 26, -51, 92, 103, 0, -11, -18, -65, 33, 114, 63, -25, 116, 7, -119, -48, -37, 96, -69, -96, -84, 108, -46, 59, 44, 119, 75, -124, 51, -50, 115, -65, 53, 23, 25, 14, 34, -9, 10, 117, 85, -109, 123, -81, -58, 22, -29, -81, -42, 87, 115, -105, -69, -3, -22, -24, 99, -109, 17, -128, -104, -30, 4, 42, 80, 72, 125, 79, 0, 87, 124, 13, 53, -12, 42, -114};
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
    msg.setTimeStamp(0.546015768747);
    msg.setSource(5866U);
    msg.setSourceEntity(61U);
    msg.setDestination(46091U);
    msg.setDestinationEntity(80U);
    msg.content_type.assign("LRNZNJVDYHGIYMIMPNUNPTCMWCJRNMEZRNTLCRELZEOLUYKIXRTYCPBGPWOVNGEOKFGHXSFXBMXQTFZJAAKSQSPVWMOSTGLYURZQYUAIITQJBUBUCAPSAIRSMWCIGJHDIEGQPHODOJCBFEAUHCYMVUXBGDLHQWDWDUCNIQJXPPTHWUGQJ");
    const char tmp_msg_0[] = {83, 7, -7, 5, 119, -1, -40, 70, 62, -32, -8, 31, 31, -59, -93, 23, 70, -27, 34, 95, 58, -69, -101, -71, -107, -2, -4, 35, 65, -80, 61, -87, 54, 126, 123, 65, 13, 41, 125, -43, 23, 74, 44, -80, 47, 26, -49, 120, -128, 98, -21, -10, -80, -67, -81, -46, -64, 44, -68, 3, 125, -123, 74, -61, 118, -126, 121, -80, 14, 124, -80, -68, 113, -108, -115, -82, 102, 87, -45, 117, -46, -16, -115, -96, -16, -116, 105, -86, 22, -87, -78, 69, 69, -3, 64, 86, -8, -25, 26, 111, 115, -125, -119, 50, -13, -128, -114, 93, -102, 101, -71, -72, -108, -26, 116, -101, 32, -6, 72, -126, -57, -60, 59, -89, -12, 82, -75, 46, 97, 75, -35, -122, -59, -113, -46, 119, -12, 119, -90, -10, 71, 38, -94, 56, -126, 23, 37, -36, 11, 91, -112, -110, -118, -34, 10, 47, -30, -76, 21, -75, 77, 9, 123, -48, -83, 1, 54, -128, -11, 22, 9, 60, -54, -117, -75, 50, -88, 61, -91, 42, -35, -60, -32, 19, 83, 114, 97, 116, -126, -52, -126, -100, -22, -126, 104, 27, -112, -61, 113, -83, 68, 45, 54, 98, 74, -1, -117, -39, -90, 31, -89, -27, 51, -81, -25, 52, -46, -18, -81, -71, 31, -14, -53, -75, 16, 89, -114, 13, -11, 101, 33, 96, -100, -6, 36, -125, 0, -98, -13, 33, 26, 40, 36, 27, 22, 41, -70, -85, -109, -112, -37, 17};
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
    msg.setTimeStamp(0.49918325593);
    msg.setSource(52646U);
    msg.setSourceEntity(132U);
    msg.setDestination(14690U);
    msg.setDestinationEntity(16U);
    msg.content_type.assign("GXHYAVLAGZYKHVTUZZLGMEHCWWITRCSGKMRDHOEASPDCPCKQXTCSODZGLRIGNPQMUFABEQUSIFASMTPBZBHSFYRJUYQNKIXDXATBHTQTYWSMBPHMJGUGJANRZPDYSIIQ");
    const char tmp_msg_0[] = {124, 45, 24, 73, 19, -30, -101, -81, -90, -77, -103};
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
    msg.setTimeStamp(0.93336616267);
    msg.setSource(34931U);
    msg.setSourceEntity(81U);
    msg.setDestination(56154U);
    msg.setDestinationEntity(200U);

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
    msg.setTimeStamp(0.572402330105);
    msg.setSource(24987U);
    msg.setSourceEntity(51U);
    msg.setDestination(55099U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.564294919346);
    msg.setSource(9159U);
    msg.setSourceEntity(51U);
    msg.setDestination(2543U);
    msg.setDestinationEntity(154U);

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
