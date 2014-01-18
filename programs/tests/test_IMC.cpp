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
    msg.setTimeStamp(0.919720357851);
    msg.setSource(62703U);
    msg.setSourceEntity(118U);
    msg.setDestination(22894U);
    msg.setDestinationEntity(216U);
    msg.state = 217U;
    msg.flags = 60U;
    msg.description.assign("TWGYQXIPKWVYBOXVBJMZKIXGHXDXHDUIUJBNXDXCSUYUAWZPKJOPNOTZMFFRSNHIGMSLBYCHGOZPLEGKNWGBHGSQKVTVTKCQAOFEXRTORMUFQDIIRESODFVPZEJEHZAQGFLYXDBOMINTWQJZEPARTEAUSYUNCDCFXEJSZSKKMPQWHOWDVKWPYJJIMAV");

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
    msg.setTimeStamp(0.723622134457);
    msg.setSource(59751U);
    msg.setSourceEntity(234U);
    msg.setDestination(40162U);
    msg.setDestinationEntity(207U);
    msg.state = 67U;
    msg.flags = 49U;
    msg.description.assign("LKWFEUZNVSWVCJCXYQQYZYUSCKAVTKPWMBTBDOLFCDFEHSXGQUMBOORR");

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
    msg.setTimeStamp(0.864885752359);
    msg.setSource(54325U);
    msg.setSourceEntity(5U);
    msg.setDestination(47440U);
    msg.setDestinationEntity(180U);
    msg.state = 100U;
    msg.flags = 26U;
    msg.description.assign("VYLACYINDHYMRQAZNJYBRXQOTXUBRMQHPPZAHFNNLYDPPUPWJIGYOCGTWWQSJKUTLOAMXFRRRNBPFCKFXBUQFNHHBDEEZTYUOTCCL");

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
    msg.setTimeStamp(0.121102559952);
    msg.setSource(27038U);
    msg.setSourceEntity(190U);
    msg.setDestination(57944U);
    msg.setDestinationEntity(24U);

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
    msg.setTimeStamp(0.34009279922);
    msg.setSource(51834U);
    msg.setSourceEntity(248U);
    msg.setDestination(45207U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.184855131536);
    msg.setSource(41631U);
    msg.setSourceEntity(21U);
    msg.setDestination(54563U);
    msg.setDestinationEntity(204U);

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
    msg.setTimeStamp(0.668025376057);
    msg.setSource(230U);
    msg.setSourceEntity(51U);
    msg.setDestination(4148U);
    msg.setDestinationEntity(12U);
    msg.id = 85U;
    msg.label.assign("DAPYSMPGWHWBPWBZZVCZCSFNANEXASJKVADIJSTMZJJGWXONEUZQBTEYIZDOFAQXDNCDJMXPIVVLZRFQLEHZSYYTFSPURDQUBEXOWROJIHYSUOAMEPNNCRICGWZEGNPMQIEQIWQQGTRAREGKKLFTLAFNYIHMVHCTFSACDTXLECKVLKKPJK");
    msg.component.assign("QZIARDYLZYOVZUTNCIEKIEHHOJNQDSYCSFLXKFMKPR");
    msg.act_time = 54312U;
    msg.deact_time = 45840U;

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
    msg.setTimeStamp(0.884536425707);
    msg.setSource(8691U);
    msg.setSourceEntity(95U);
    msg.setDestination(56281U);
    msg.setDestinationEntity(12U);
    msg.id = 210U;
    msg.label.assign("KAEUHQXJNNYCMXVVISZMPBITGRSOZFHKZTUTPMZJUTIDYPKLUEQVJMRLINZWEUVERNR");
    msg.component.assign("LDIDTQCJNCHMVTDFXWYOWZPEGJCTJRVYMEZRMPNZDNGMBNNAMFRTRRVBVKZJ");
    msg.act_time = 18851U;
    msg.deact_time = 65275U;

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
    msg.setTimeStamp(0.00421416272233);
    msg.setSource(55450U);
    msg.setSourceEntity(197U);
    msg.setDestination(47487U);
    msg.setDestinationEntity(11U);
    msg.id = 125U;
    msg.label.assign("NYUDYGGGWFGFKUQXESOSZBLUOINAZEGUTNWDRPUMSZVXOVNKXPCJKZFEAJBICCFWZAKMOVGNQFQXEBNDRPTDLJMJXLJPNWUENCOHUUEEXCHJSRMTOVGFLTTSRPQYMPAWMCXGQSTNBLWYVKHUQJBKI");
    msg.component.assign("BWLEJSMFDFENQUBYAKUYNFLZOLNQHNOKAWGTGEWQHHZJVC");
    msg.act_time = 51351U;
    msg.deact_time = 31130U;

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
    msg.setTimeStamp(0.0678550187074);
    msg.setSource(57534U);
    msg.setSourceEntity(160U);
    msg.setDestination(2956U);
    msg.setDestinationEntity(40U);
    msg.id = 189U;

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
    msg.setTimeStamp(0.498204913067);
    msg.setSource(23874U);
    msg.setSourceEntity(90U);
    msg.setDestination(36425U);
    msg.setDestinationEntity(141U);
    msg.id = 45U;

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
    msg.setTimeStamp(0.43384476537);
    msg.setSource(43687U);
    msg.setSourceEntity(140U);
    msg.setDestination(56462U);
    msg.setDestinationEntity(192U);
    msg.id = 2U;

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
    msg.setTimeStamp(0.996155729129);
    msg.setSource(48579U);
    msg.setSourceEntity(177U);
    msg.setDestination(28609U);
    msg.setDestinationEntity(233U);
    msg.op = 8U;
    msg.list.assign("NABHWQDGUMKMZWLBWFHMCUBSXWQQQKDIMUKAULKJZVALBZCNMVWRVAKSZNYZJEIZOXIC");

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
    msg.setTimeStamp(0.348353748421);
    msg.setSource(11588U);
    msg.setSourceEntity(80U);
    msg.setDestination(24219U);
    msg.setDestinationEntity(217U);
    msg.op = 195U;
    msg.list.assign("GGATDLHTYBQAQPZHFXCRRSKTAJNVIMYAKWKEAMSMYYELERWQPIUXIZUAKQUZFCUFPBOLQACYHNETXOBUTLLLVBWRGDCPOIFXFFLQCQEHJRWYHQWWJMIINXJJUCIODTKXPWSGSEMAIGZOGKNBZKTVWVHTCVBCUNENOFTZDRDYPBMJKLPMGHHWPZMYFEQRZUDJRLSYQSOZXHVDIVNKJXGDYGGNASBPXTUXVFROEVCOBKUMSEOCNDD");

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
    msg.setTimeStamp(0.782651567461);
    msg.setSource(43770U);
    msg.setSourceEntity(87U);
    msg.setDestination(24480U);
    msg.setDestinationEntity(188U);
    msg.op = 183U;
    msg.list.assign("EITHSGBCQWJVPNWCUJNHEZFRVKICKNTKNXPM");

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
    msg.setTimeStamp(0.882247299337);
    msg.setSource(28929U);
    msg.setSourceEntity(100U);
    msg.setDestination(60578U);
    msg.setDestinationEntity(111U);
    msg.op = 158U;

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
    msg.setTimeStamp(0.934196652387);
    msg.setSource(12983U);
    msg.setSourceEntity(199U);
    msg.setDestination(32591U);
    msg.setDestinationEntity(254U);
    msg.op = 205U;

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
    msg.setTimeStamp(0.659444483644);
    msg.setSource(48626U);
    msg.setSourceEntity(183U);
    msg.setDestination(30352U);
    msg.setDestinationEntity(118U);
    msg.op = 81U;

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
    msg.setTimeStamp(0.901063263185);
    msg.setSource(11522U);
    msg.setSourceEntity(220U);
    msg.setDestination(38588U);
    msg.setDestinationEntity(254U);
    msg.value = 218U;

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
    msg.setTimeStamp(0.660604185853);
    msg.setSource(25394U);
    msg.setSourceEntity(92U);
    msg.setDestination(17722U);
    msg.setDestinationEntity(28U);
    msg.value = 61U;

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
    msg.setTimeStamp(0.976573440146);
    msg.setSource(54663U);
    msg.setSourceEntity(214U);
    msg.setDestination(17694U);
    msg.setDestinationEntity(92U);
    msg.value = 196U;

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
    msg.setTimeStamp(0.040379873377);
    msg.setSource(40386U);
    msg.setSourceEntity(20U);
    msg.setDestination(62008U);
    msg.setDestinationEntity(103U);
    msg.consumer.assign("ETTJFKMCDMXZSKOHHNQFAYZLFRJAFOBATODZJEPZCHBLQGCLBWYSGRVVANJYFUDMZQAAXVCRKETIIHSQDOMOVLGYKOWFBCRINPIPTWACSBCZPJRUIQECGFDJHJNDNWLVSYHUQJSXBXWHXHUGPINVFCKPSWGTQYGUIQLOXZCYVNZBZMDRLVUIWDVTXAHJXENQPKQNOBRMWYLRM");
    msg.message_id = 47791U;

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
    msg.setTimeStamp(0.737212432244);
    msg.setSource(21788U);
    msg.setSourceEntity(24U);
    msg.setDestination(29414U);
    msg.setDestinationEntity(209U);
    msg.consumer.assign("VCOVTUMNGMEFZXRGUKPPWGQTGFOQLVRKGYZBMJDPEIZSXMRVYAQFIYBJOOSTNNFHAXO");
    msg.message_id = 51913U;

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
    msg.setTimeStamp(0.550335065855);
    msg.setSource(4504U);
    msg.setSourceEntity(202U);
    msg.setDestination(12972U);
    msg.setDestinationEntity(144U);
    msg.consumer.assign("VBBWKUGKEGPFWVBVTK");
    msg.message_id = 18063U;

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
    msg.setTimeStamp(0.615932476843);
    msg.setSource(41046U);
    msg.setSourceEntity(120U);
    msg.setDestination(24273U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.281872489806);
    msg.setSource(52734U);
    msg.setSourceEntity(243U);
    msg.setDestination(9458U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.704137735058);
    msg.setSource(10050U);
    msg.setSourceEntity(134U);
    msg.setDestination(41708U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.511255680492);
    msg.setSource(40284U);
    msg.setSourceEntity(16U);
    msg.setDestination(7030U);
    msg.setDestinationEntity(112U);
    msg.section.assign("MNJIPCRDAEFVZUHBTJJWHMGLFLUQQSYAXHZNPGGWXKJBYOEISIYLBCXAGDHLAONDEKVADCXT");
    msg.param.assign("OVABFNLURWGYONTCSTDUEURFYSIMGTBIGJKNDBVYQTOSAZIIOCUAROGVXJOPDWKNKHHQXELZQGZXRGSYCFFMSJCWVOZXBDVYMTUOAQHMWNRYVECYDBUSLJPBQLFUXLGAPHFSWNQKKZKJCJUQHZRJMTPRZMLXGIFE");
    msg.value.assign("UYMJGVFKKGQDISDVTDBATETHDVPJNXCOJIYHSIXQEEWZWHFXXEOLWFZWBGCRMDOELDXORLRCUPHONYZVIWDBZYMVHKEALNXXYGEMJBILUYPJZTZPWSXKIFMWCUXYGPAMNTQSJQHTKVYUGXUEOCFFNVACFFINQPSQIUTEALKHUQZBSODRQMWBMVLKKAKNZLGYMIGZUJJSEAVIFJHKRCURTBVFSBTR");

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
    msg.setTimeStamp(0.742368929169);
    msg.setSource(48266U);
    msg.setSourceEntity(87U);
    msg.setDestination(48119U);
    msg.setDestinationEntity(88U);
    msg.section.assign("SAQOSCNDWUHIMROGTAPNSCNIGDZFCCBXPNYNJMSQKSHOEVYOQIXXZXKROGOVUBZPDIZNQLVGRBJWGRUIEHTJDUBKFNNZYHYWORFJGQNKEULIPADTDLMBPAMZJFGFUJWFJVAXWJPDRGEQFKMCDVTXYPMSOWYLALCXTVRMRBWWAIUNQMKEYLARBEMFDEYHVBZVTDJFPFLLSSHTUHHIUASLKIKMYVZE");
    msg.param.assign("NFIQVYKJUUBULSDYRYUAS");
    msg.value.assign("UJMLOAKCIIZQYGXYCHIPCNWWLNIIFJYMNZVECGRSTVVQBRZXZFCBHPREHHHNJHMJSHKEOBFFFUAENKKYYZLKGVSDMXPJDIOMWLNDPMAPXVBBUWUTCLMVLRPZOESQQAHEC");

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
    msg.setTimeStamp(0.163412692011);
    msg.setSource(34837U);
    msg.setSourceEntity(184U);
    msg.setDestination(45958U);
    msg.setDestinationEntity(228U);
    msg.section.assign("MEIOVLAVZQAFWJCFJSCSTCUOAFDODAETXJUQGBDRBWNKUSYOZGHGOGRSZJIYXSUZCJMDDFMNNWDKQBOLYYMDH");
    msg.param.assign("MTVFNHZCOCGXJDLWVFFTBNAHNWSDSIJGIKSYWVGVPSLLGUPCJDJQKERWHGUULJPXHYYKRHWLYRSQGFEARRUMFKJQBQOVJZNCSBOLZQZWTORDXPQLXQAFVKMGXPCBZOQEUEBMMNKSHICDAUQYVVFTVPDCBAEXOWLSBMAPTTWITITFENYCMPRRIRMZNDNJKEDGXPOOIQHLTBDJTWXMYVNEKHOEBBXGWLRADHSIIP");
    msg.value.assign("IHVGCCKNREAASYAZLBUTNHMSLKNTQIFAIBICSPHTMCBULMFPEVFCKKJZXVMVJERTPVPUOLFDFELZLUGPENGDWUGCHUXAHYLLPIAISUFTWMEVBNQNXAIAMZYTDQDSFNELFBATHMUKOCIRRHWXGEWHSBQWROVJWSNMQEWODDBOTHQSXRZJDHPTDYYLFRYRYZODIYIXYGOZWEWXJZRWUTQPJQDFPXKGPNQCCAMXJKM");

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
    msg.setTimeStamp(0.969481468852);
    msg.setSource(10520U);
    msg.setSourceEntity(83U);
    msg.setDestination(41125U);
    msg.setDestinationEntity(228U);
    msg.op = 159U;
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("FVMAGCXBMKWHGOZVEALHFYEIQKUTQWZXVUWISSZKLITZZMQYNYFQOHKXWKKPVMXQNODLITCEUVQWFPIMJXKEEVKFLTPHUF");
    tmp_msg_0.param.assign("FZESZMIHVHUAO");
    tmp_msg_0.value.assign("YZPBVFQAWYZTZKSDWYEGIZNTGKQFUKLILDPYKGUBNVFZGFHFBMOXVQMGXUWEMHMEGNVTJSTRBLIPTCOKLUSZWAIANBIDAVFBCLKLUHVYHZCSJOXAJORUALIPRDOBNRAKCXRTATFUCHDEEXIBVEMNEGUSJOHNXOHKOSKZMARQDJPFECTHPNNCWPEYBCYIXSRBPYIZJDQWJDQXFLQWUGRXDCRZOOHGWSVUXMAJEYFSJVLQDJSMMPTR");
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
    msg.setTimeStamp(0.724681733921);
    msg.setSource(7709U);
    msg.setSourceEntity(27U);
    msg.setDestination(57247U);
    msg.setDestinationEntity(130U);
    msg.op = 219U;

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
    msg.setTimeStamp(0.0676901348138);
    msg.setSource(3988U);
    msg.setSourceEntity(128U);
    msg.setDestination(51539U);
    msg.setDestinationEntity(206U);
    msg.op = 14U;

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
    msg.setTimeStamp(0.28736833213);
    msg.setSource(31006U);
    msg.setSourceEntity(203U);
    msg.setDestination(30364U);
    msg.setDestinationEntity(48U);
    msg.op = 251U;

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
    msg.setTimeStamp(0.600596059234);
    msg.setSource(44311U);
    msg.setSourceEntity(146U);
    msg.setDestination(10641U);
    msg.setDestinationEntity(129U);
    msg.op = 183U;

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
    msg.setTimeStamp(0.354992343485);
    msg.setSource(13301U);
    msg.setSourceEntity(41U);
    msg.setDestination(23522U);
    msg.setDestinationEntity(167U);
    msg.op = 60U;

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
    msg.setTimeStamp(0.854077947813);
    msg.setSource(36917U);
    msg.setSourceEntity(167U);
    msg.setDestination(51355U);
    msg.setDestinationEntity(161U);
    msg.total_steps = 100U;
    msg.step_number = 177U;
    msg.step.assign("VBWBRFPOYTMGZYQDNBJHJZNKBGFVGLIQEXPTAKCYVWRCPLEMCOUMBDDTDWLIQGCPQSVLUUGPYDCEFQDLCZMIFEFSBZXPMJDMYGJSRUYHBYYHQNUMIJZQAXHFOEIFTMMTHHZNBPZLZPGAZLXVOOEYRUSTNFOPTKK");
    msg.flags = 162U;

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
    msg.setTimeStamp(0.460674708296);
    msg.setSource(63686U);
    msg.setSourceEntity(36U);
    msg.setDestination(7509U);
    msg.setDestinationEntity(142U);
    msg.total_steps = 32U;
    msg.step_number = 84U;
    msg.step.assign("XNXBDBIYSNLHBZOEUNTFMUGLOONGCESUNJIOKTLFMGYZKJRFXSWXDEGPCWUCAKNTOAVDXMPKEHWPISEHRSYHGGSXKJVXRWFTFDOGZEVANMRQSMZZUPGFOYYQXCCZIQIMBIBPEYNTJYWKAAYOQQSVUUKFPDZPIGWZQPEJBNTLCWJCDSJAAHLUCSYBLIGKAPOLHVXLZDQUVKIMLRTTHOWFMPE");
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
    msg.setTimeStamp(0.853716482969);
    msg.setSource(57086U);
    msg.setSourceEntity(132U);
    msg.setDestination(32008U);
    msg.setDestinationEntity(243U);
    msg.total_steps = 0U;
    msg.step_number = 103U;
    msg.step.assign("NTMHKLKRXNZWHCQLOEBWPRRDITJKKLTFYAHDIUJHGVDOOGDQATCOBBHSFRZVKTUNLRBHMSTUNXJJCLMURYXYMXLVJXPJSBVIGHULYEMKSXAWSAQZPMRDJUMEISNWPEZZNCFDJQSEONOXARBZQKPAUGQEBIPMXCWFWVWLZWGAWXIQFTCASPTHVIYKMTZGPFQRKCVUTNDYUSQFELI");
    msg.flags = 19U;

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
    msg.setTimeStamp(0.568300722796);
    msg.setSource(46240U);
    msg.setSourceEntity(185U);
    msg.setDestination(29004U);
    msg.setDestinationEntity(126U);
    msg.state = 27U;
    msg.error.assign("UQNLVCIFESAAHNHSIJOOIADVMYPHLJGOAXEQXXOBWMANDMNVDVPBLWZIBZGRTNXSKSORPTBILSVWVJYDRKLTAPHSWVFNOMVWBBTFNLXDJYQCCHWNSOUWIMTDDWPREMCHXKRRVICHLGWLJVEQEUQOYUASAFKZXXMTQXHUJLMEYHFFUXYJUCDTNHYFSKMTRRCGBAZQKQIKPENPJGIGCUFD");

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
    msg.setTimeStamp(0.951542907088);
    msg.setSource(31419U);
    msg.setSourceEntity(25U);
    msg.setDestination(9582U);
    msg.setDestinationEntity(41U);
    msg.state = 70U;
    msg.error.assign("DWSFVAMXTOKHCNTVFEGXUEOADYZGOUMIEEAKSFQYNWBOBLLVBWDTQFTPGCKEOQZKRDHLDUHQUGVUBCRJCPOUJVAEVWRRYP");

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
    msg.setTimeStamp(0.933086894654);
    msg.setSource(1151U);
    msg.setSourceEntity(171U);
    msg.setDestination(39346U);
    msg.setDestinationEntity(117U);
    msg.state = 247U;
    msg.error.assign("YQYPCKOFCYFPYFPMZBICBZWKWDTCKHYVYNUKWXECKQQFGVTIXJNRQZARHRQWMMPNWKEIJFFARIOOXQMYRDBHGATVGHWRAHIVGWQSUAEUJPSSZGBVDOJMJPCDYQUKCTUFHLEWSDUTCEUXJBYLJTJDVONPLLCXREDOMIQEIAYJOLLAXHSBTFOMXNNWBOLTPNPIFVKRZVXNSNGKZIGNUSEBTLEQDHEZS");

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
    msg.setTimeStamp(0.515372357491);
    msg.setSource(45115U);
    msg.setSourceEntity(24U);
    msg.setDestination(33962U);
    msg.setDestinationEntity(88U);

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
    msg.setTimeStamp(0.634859911132);
    msg.setSource(23654U);
    msg.setSourceEntity(164U);
    msg.setDestination(8325U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.222873844699);
    msg.setSource(26423U);
    msg.setSourceEntity(68U);
    msg.setDestination(4130U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.858379185616);
    msg.setSource(34711U);
    msg.setSourceEntity(169U);
    msg.setDestination(18917U);
    msg.setDestinationEntity(225U);
    msg.op = 8U;
    msg.speed_min = 0.478496074911;
    msg.speed_max = 0.820315322053;
    msg.long_accel = 0.248106240301;
    msg.alt_max_msl = 0.665306382014;
    msg.dive_fraction_max = 0.326595358551;
    msg.climb_fraction_max = 0.149627073841;
    msg.bank_max = 0.907912871338;
    msg.p_max = 0.370915191336;
    msg.pitch_min = 0.617856528266;
    msg.pitch_max = 0.366845860178;
    msg.q_max = 0.316768538616;
    msg.g_min = 0.0293967358752;
    msg.g_max = 0.534060389894;
    msg.g_lat_max = 0.00186424209132;
    msg.rpm_min = 0.761111596262;
    msg.rpm_max = 0.967132574772;
    msg.rpm_rate_max = 0.25747267024;

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
    msg.setTimeStamp(0.471542635657);
    msg.setSource(62947U);
    msg.setSourceEntity(31U);
    msg.setDestination(41543U);
    msg.setDestinationEntity(136U);
    msg.op = 121U;
    msg.speed_min = 0.465525075985;
    msg.speed_max = 0.620630075937;
    msg.long_accel = 0.0447074130693;
    msg.alt_max_msl = 0.0349154010549;
    msg.dive_fraction_max = 0.81122350401;
    msg.climb_fraction_max = 0.543403105301;
    msg.bank_max = 0.642132590847;
    msg.p_max = 0.475842417887;
    msg.pitch_min = 0.627078221383;
    msg.pitch_max = 0.944750194095;
    msg.q_max = 0.860603134769;
    msg.g_min = 0.746722844367;
    msg.g_max = 0.802348813438;
    msg.g_lat_max = 0.775434390159;
    msg.rpm_min = 0.877825779125;
    msg.rpm_max = 0.374108525051;
    msg.rpm_rate_max = 0.0164915200556;

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
    msg.setTimeStamp(0.527191683405);
    msg.setSource(31255U);
    msg.setSourceEntity(232U);
    msg.setDestination(9797U);
    msg.setDestinationEntity(204U);
    msg.op = 109U;
    msg.speed_min = 0.268524430931;
    msg.speed_max = 0.462744412802;
    msg.long_accel = 0.814228287709;
    msg.alt_max_msl = 0.757864615425;
    msg.dive_fraction_max = 0.718809039604;
    msg.climb_fraction_max = 0.674253973725;
    msg.bank_max = 0.0641535551806;
    msg.p_max = 0.692038848097;
    msg.pitch_min = 0.165331602349;
    msg.pitch_max = 0.960477600235;
    msg.q_max = 0.0362145208883;
    msg.g_min = 0.089502539076;
    msg.g_max = 0.139597843523;
    msg.g_lat_max = 0.451002204008;
    msg.rpm_min = 0.53632719561;
    msg.rpm_max = 0.155949077934;
    msg.rpm_rate_max = 0.354117833777;

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
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.612192255889);
    msg.setSource(15777U);
    msg.setSourceEntity(169U);
    msg.setDestination(40221U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.934316461776;
    msg.lon = 0.28070130141;
    msg.height = 0.222507621691;
    msg.x = 0.546770563396;
    msg.y = 0.949946998346;
    msg.z = 0.730610991655;
    msg.phi = 0.645522498542;
    msg.theta = 0.54790219415;
    msg.psi = 0.946326554784;
    msg.u = 0.0266216541465;
    msg.v = 0.723044803557;
    msg.w = 0.638707978192;
    msg.p = 0.996358081771;
    msg.q = 0.69323551343;
    msg.r = 0.520992656282;
    msg.svx = 0.524586153432;
    msg.svy = 0.56140586945;
    msg.svz = 0.485443728418;

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
    msg.setTimeStamp(0.818989106462);
    msg.setSource(58046U);
    msg.setSourceEntity(229U);
    msg.setDestination(31080U);
    msg.setDestinationEntity(106U);
    msg.lat = 0.212657393293;
    msg.lon = 0.875149559107;
    msg.height = 0.541822126766;
    msg.x = 0.333505894701;
    msg.y = 0.765120879423;
    msg.z = 0.583934941625;
    msg.phi = 0.674269608084;
    msg.theta = 0.806802329214;
    msg.psi = 0.612079671934;
    msg.u = 0.371860138777;
    msg.v = 0.898712920436;
    msg.w = 0.928842150932;
    msg.p = 0.209552113821;
    msg.q = 0.53170228511;
    msg.r = 0.562349137191;
    msg.svx = 0.950138427867;
    msg.svy = 0.0875520882704;
    msg.svz = 0.859723674433;

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
    msg.setTimeStamp(0.0376799213567);
    msg.setSource(52581U);
    msg.setSourceEntity(45U);
    msg.setDestination(5534U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.0753324063052;
    msg.lon = 0.960148329615;
    msg.height = 0.500290925546;
    msg.x = 0.49517679132;
    msg.y = 0.320345492961;
    msg.z = 0.0427813364335;
    msg.phi = 0.774780501655;
    msg.theta = 0.509270210182;
    msg.psi = 0.897471336549;
    msg.u = 0.138929902115;
    msg.v = 0.960857976563;
    msg.w = 0.116564242926;
    msg.p = 0.374085490624;
    msg.q = 0.326305259135;
    msg.r = 0.265811809309;
    msg.svx = 0.626854421909;
    msg.svy = 0.373267565515;
    msg.svz = 0.937263476295;

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
    msg.setTimeStamp(0.771577055867);
    msg.setSource(56464U);
    msg.setSourceEntity(71U);
    msg.setDestination(48167U);
    msg.setDestinationEntity(37U);
    msg.op = 247U;
    msg.entities.assign("QVRREDTWCCNAJBFGXNWJNIOZKCQQMXLXOSGJMUSBFLXJILGHRYZRFATGPENUTLZLHNZHYKDPZUMBOCRTOPMMDPYXNNKCFAJFFNSPQZVIHWYBTUXRVGAZKHUQAGVNYKAVFIYEZIFWQBJGGYEPUSIYW");

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
    msg.setTimeStamp(0.547979242749);
    msg.setSource(1970U);
    msg.setSourceEntity(122U);
    msg.setDestination(62439U);
    msg.setDestinationEntity(92U);
    msg.op = 182U;
    msg.entities.assign("IZVRKFFCOLLNIGBQVDMJNXNPTGCPLTXMIIQXUPMBNHWLJKYRCHKTCJZIZGCHUOOZYEFVEQQUOTWVTNAFABDSQGJMLQVEHDAZBLVKTCUAXDMFAPJXDFGAYMNFBTCDBKQWPEWCVHYRHSDGYHNSSYWRSIJPHDXZQFAXEOLUWPXZTG");

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
    msg.setTimeStamp(0.416982323707);
    msg.setSource(4189U);
    msg.setSourceEntity(97U);
    msg.setDestination(2169U);
    msg.setDestinationEntity(200U);
    msg.op = 21U;
    msg.entities.assign("NHTJWYLKWVCGRIZDAQLIIHFSIHDPIGVKLCCALCBROHXRBWQYYUTVSSYDHTNQVULICFODLCTPBBODPNRPKVWJQXKLADNJZRYSLZNTJTCZSNJJADESCOBGY");

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
    msg.setTimeStamp(0.0109811148879);
    msg.setSource(7651U);
    msg.setSourceEntity(63U);
    msg.setDestination(47086U);
    msg.setDestinationEntity(87U);
    msg.type = 98U;
    msg.speed = 41851U;
    const char tmp_msg_0[] = {50, -111, 102, -95, -117, 68, -128, -71, 52, 47, 70, -58, 44, 41, 57, 27, -82, 33, -74, 120, -7, 32, -109, -37, -43, 104, -87, 18, 6, 54, -79, 4, 126, 54, 42, 63, 51, -115, -127, -18, -112, -24, -58, 91, 36, 32, -124, -17, 44, 63, 26, 85, -10, -77, -31, 85, -41, -64, -105, -87, -109, -85, -115, 97, -74, 76, -15, 115, 55, 18, -106, -106, 116, -29, -67, -99, -41, 1, -18, -83, 31, -47, 52, -20, 40, 63, -44, -14, 114, 15, 63, 2, 13, 27, -96, -125, 121, 16, -76, -17, 73, 32, 76, 88, -6, 11, -59, 86, -78, 16, 46, 116, 71, -121, 39, 9, 36, 125, -4, 71, -16, -64, -62, -25, -89, 97, -90, 65, -44, -1, 114, -99, -17, -124, 75, 2, -84, 21, -16, 54, 84, -29, 110, 64, -56, 17, -91, 108, -77, 52, 61, -10, 46, 120, 98, 62, 102, -27, -55, -107, -36, -3, -114, 19, 32, -21, 66, 0, 32, -118, 10, 110, 0, 93, 65, 2, -8, -44, 19, -72, 115, -25, 124, 63, 45, 122, -80, -96, 80, -94, -70, -102, 19, 18, -95, -120, -37, -92, -127, 97, 30, -90, 34, -112, 61, 96, -41, 30, 96, -11, -42, -46, 66, 57};
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
    msg.setTimeStamp(0.121497974548);
    msg.setSource(33862U);
    msg.setSourceEntity(23U);
    msg.setDestination(48959U);
    msg.setDestinationEntity(52U);
    msg.type = 161U;
    msg.speed = 43884U;
    const char tmp_msg_0[] = {-115, 68, -33, 61, -23, 126, -28, 18, -11, -19, 78, -82, 118, -92, 73, 75, -98, -52, 80, -4, 36, 76, 7, 70, 92, -118, -61, -115, -88, -100, 8, 50, -79, 65, 95, -107, -93, -78, 47, -22, -64, -86, 64, 104, -7, -67, 118, -75, -14, -110, 65, 112, -35, -30, -26, 62, -41, 40, -55, 75, -56, -22, 43, 100, -6, -93, 125, -101, -97, -3, -18, -53, -88, -93, -123, 121, 97, -35, 4, 7, 114, 55, -101, -87, 108, -54, -45, -123, 13, 92, 61, 106, -116, 9, -15, -9, 125, -6, -25, 52, 57, 68, 7, 34, 51, -75, -2, -76, -110, -71, -3, -51, 106, 49, 39, 56, 10, 73, 49, -104, -111, 97, 11, 82, -38, 109, 56, -110, 57, -90, -80, -67, 53, 17, 114, 99, 126, -34, -120, -15, -91, 63, -64, 112, -8, -63, 64, -39, -6, 2, 26, 67, 76, -64, -93, 65, 81, 84, -91, -99, 54, 19, 93, -60, -82, -15, 24, 123, 63, 74, 66, -66, -63, -35, 121, -28, 3, 13, -49};
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
    msg.setTimeStamp(0.97347766382);
    msg.setSource(56736U);
    msg.setSourceEntity(220U);
    msg.setDestination(44461U);
    msg.setDestinationEntity(23U);
    msg.type = 135U;
    msg.speed = 53276U;
    const char tmp_msg_0[] = {13, 60, 88, 119, -104, 38, -55, -68, -89, -89, -38, -6, -54, 84, -23, 92, 54, 70, 50, 124, -26, 45, -63, 36, 57, 5, -101, 9, 69, 111, 81, -15, -36, 73, 71, -76, -10, -13, -7, -109, 95, 107, -112, -98, -26, -104, -75, 39, 93, 71, -40, -36, 107, -113, 66, -54, -59, -31, -65, 86, -53, 22, -52, 112, -20, 99, -123, -83, 73, 1, 45, 17, -80, 5, -91, 18, -1, 90, 13, 50, -70, -7, -25, 33, -84, 29, 86, -54, 11, 50, 82, -26, 73, 79, -65, -22, 48, -81, 16, 31, 64, -1, 68, 106, 90, -81, -38, -61, 57, -51, -66, 76, -22, 106, -13, -67, -100, -103, 120, 68, 3, 106, 20, -66, 76, 54, -14, -3, -7, 77, 29, 31, -4, 81, 1, -10, 94, 56, -107, -69, 71, 6, 118, 74, 109, 31, -126, -40, 103, -73, 26, 118, -62, 64, 82, 6, -107, 38, -93, 59, 43, -84, 104, -22, -15, -51, 102, -98, -69, -28, 63, 54, -15, -123, 18, -120, -55, 44, 108, -91, 13, -53, -125, 85, 74, 118, 116, 81, -56, 83, 17, 110, -11, 109, 21, -109, -38, 91, -94, -54, -42, -105, -64, -125, -50, -38, -81, -42, 77, -75, -83, -125, 14, 18, -32, 37, -30, -11, 17, 12, -111, -53, 56, 117, -113, 16, -72, 15, 105, 77, -12, -120, -73, -117, 34, -52, -71, -120, -115, 39, -58, 64, -3, 11, 49, 99, -83};
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
    msg.setTimeStamp(0.588559002079);
    msg.setSource(24935U);
    msg.setSourceEntity(252U);
    msg.setDestination(11042U);
    msg.setDestinationEntity(246U);
    msg.op = 221U;
    msg.tas2acc_pgain = 0.516955843714;
    msg.bank2p_pgain = 0.279675163594;

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
    msg.setTimeStamp(0.814536541785);
    msg.setSource(23592U);
    msg.setSourceEntity(222U);
    msg.setDestination(52101U);
    msg.setDestinationEntity(234U);
    msg.op = 208U;
    msg.tas2acc_pgain = 0.00782402925078;
    msg.bank2p_pgain = 0.0258499957237;

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
    msg.setTimeStamp(0.745195046725);
    msg.setSource(54494U);
    msg.setSourceEntity(87U);
    msg.setDestination(26806U);
    msg.setDestinationEntity(252U);
    msg.op = 213U;
    msg.tas2acc_pgain = 0.40999479162;
    msg.bank2p_pgain = 0.585324071369;

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
    msg.setTimeStamp(0.187393730718);
    msg.setSource(3705U);
    msg.setSourceEntity(147U);
    msg.setDestination(22202U);
    msg.setDestinationEntity(167U);
    msg.available = 2940457070U;
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
    msg.setTimeStamp(0.292197206042);
    msg.setSource(18409U);
    msg.setSourceEntity(54U);
    msg.setDestination(30644U);
    msg.setDestinationEntity(174U);
    msg.available = 1774186489U;
    msg.value = 166U;

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
    msg.setTimeStamp(0.461847429712);
    msg.setSource(14183U);
    msg.setSourceEntity(17U);
    msg.setDestination(30973U);
    msg.setDestinationEntity(220U);
    msg.available = 1226588412U;
    msg.value = 115U;

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
    msg.setTimeStamp(0.556620173417);
    msg.setSource(33897U);
    msg.setSourceEntity(221U);
    msg.setDestination(26325U);
    msg.setDestinationEntity(82U);
    msg.op = 211U;
    msg.snapshot.assign("CEYRKJUETZKWGVRNMCISOJYFTANVJTRIUSHHPTLYDOWXENHQZFCQJISROZKBMLHZIOASFDWEKHIEWMTBJVGM");
    IMC::Rpm tmp_msg_0;
    tmp_msg_0.value = -9048;
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
    msg.setTimeStamp(0.703033305344);
    msg.setSource(53778U);
    msg.setSourceEntity(104U);
    msg.setDestination(31756U);
    msg.setDestinationEntity(232U);
    msg.op = 37U;
    msg.snapshot.assign("MXUGWBZYGOZSBJFTGCNIDSCVONSIDTDPKUUKBVDPHPZYNXMKCDHIQLERCAEQZJACVSTJPKDM");
    IMC::SonarConfig tmp_msg_0;
    tmp_msg_0.frequency = 581003485U;
    tmp_msg_0.min_range = 35916U;
    tmp_msg_0.max_range = 10448U;
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
    msg.setTimeStamp(0.762660549251);
    msg.setSource(58988U);
    msg.setSourceEntity(234U);
    msg.setDestination(55129U);
    msg.setDestinationEntity(111U);
    msg.op = 84U;
    msg.snapshot.assign("OEBRHCSHEARHSGAQILVVEMUMXSHQFBEZFRWEWUNTPGGQUHBMEXQMUNRXBTAAZRRBFNOXKWIWGNCSZIDOHDAIQVZDRLVJWLLAXDEY");
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 11317U;
    tmp_msg_0.off_x = 0.337131978158;
    tmp_msg_0.off_y = 0.93927140928;
    tmp_msg_0.off_z = 0.531002265606;
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
    msg.setTimeStamp(0.486015538144);
    msg.setSource(35509U);
    msg.setSourceEntity(182U);
    msg.setDestination(57162U);
    msg.setDestinationEntity(210U);
    msg.op = 246U;
    msg.name.assign("DTVRSTLZXVEPDUWCORKFHDILLLCEHGBMSHBGAVXYCAJJOXJVRBMYRFUNMRKLWBPALOCRSEGINWFXIFBACCNTKPSFRPGWXDMEKJIPHZAHXTWOSQEVHYVUPAZNESDHUNFPDUMXYCDTNOIJPZGGUYKFMHSOPBQRAUVRARXNFOYQEMYPKCWQJFOKUVFSTDQLJQQWUHXKCVHNJQSMLT");

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
    msg.setTimeStamp(0.41499114754);
    msg.setSource(39581U);
    msg.setSourceEntity(213U);
    msg.setDestination(28707U);
    msg.setDestinationEntity(211U);
    msg.op = 165U;
    msg.name.assign("UCKBLKXMFAOZDTYWSMASZTNXGTAKFVYDGBEDPLMUGDQVRKLKWWXDMBJBTRPQFAWPSZOCGWONQLCNUMGGTYIPISNONSJECHUPZCDBBYYXXHREBCCEFANDVMLZQZT");

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
    msg.setTimeStamp(0.395090328863);
    msg.setSource(32729U);
    msg.setSourceEntity(112U);
    msg.setDestination(40819U);
    msg.setDestinationEntity(44U);
    msg.op = 243U;
    msg.name.assign("YSDQKIKZYSFDEPSFGMXYMPGXPHCGWDRCFEQXEPQMITZAJGHVBZKTJMLVIEVCYJUZGAQQOUPXLJMEBBQFHTFWOCJCSZRRCCNUEOGSHSURNPOVIKUWJQIVITZMNXOKRFNRNQXGWHBSHRCHBIKXFBHCTWYWNRPDFKBYLMACAPVUGJTOKPSSEJLXFDUAY");

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
    msg.setTimeStamp(0.790247019889);
    msg.setSource(43479U);
    msg.setSourceEntity(86U);
    msg.setDestination(22797U);
    msg.setDestinationEntity(168U);
    msg.type = 52U;
    msg.htime = 0.0783308301655;
    msg.context.assign("HAZXIJWYJQTALWWQWSMMVVUDLBTEBXXCIRUOMBVOPWCSONYTVGBPZTCGEEKDOKOXLWQOHNICNJUYXNYZHFLIJVARBPJQCBLPTQFACFSKCUASKKJIUPXBSHDPDFHGGAHYIDCKKUVZJAUQFYGMKSJIEWDNWDA");
    msg.text.assign("CQYONFAGIMHLAMNXDQWYFIMPZVJFKQSPUVXWTXKKREMTPKNYZCWAWIETGEMGSBWJJJIYAFDADYINODGJYUSYFAKSLBIXLHLTDHZTVNUDQCPWXZGEKNWDSDBVOGPVOJCJRITUXKWPRSHIMXNLLCEXEUAYROAZJTPAICBJVZQTKAZQRQLZBRBUZSEDHHGRHXEBRVSGSWNVBCOFOZCHMWFQLUUPDUPEPQONMTLVRYOTYFSHIBCBECJKRNGLVGKMO");

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
    msg.setTimeStamp(0.945763178903);
    msg.setSource(25440U);
    msg.setSourceEntity(54U);
    msg.setDestination(7337U);
    msg.setDestinationEntity(140U);
    msg.type = 134U;
    msg.htime = 0.300663910514;
    msg.context.assign("XTSVXQKZKUDFDTWWUYJAMTHSUXRTYJDSHQKJNEVRFJBUEIMGZQPYRDJWFINBNEJLSVMDONABYQWXHQLCRFYMPEWFJBKSEQIIHMGRELZUXYWFNYB");
    msg.text.assign("BVKCCWCGZZQHCSVQHDVASHAFGYNHPESSZVRIYEXXIJBASEFMRNFKQBVHFXMGCBMTCXPNNQYQEWLZOUGPGCPY");

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
    msg.setTimeStamp(0.000858507536954);
    msg.setSource(42232U);
    msg.setSourceEntity(58U);
    msg.setDestination(31461U);
    msg.setDestinationEntity(254U);
    msg.type = 98U;
    msg.htime = 0.24355275088;
    msg.context.assign("ANPJYLSIXLPSQELTBJTRYYRODNCJTKJLJCZKPVNYIAOXZWPUOSOURUDTBRVLUNDBPALQBFIFUWLAYSQJIXUOAKPQTDXPFDZTXBKZGHFICSBDHHEMMFJCNBCPHGGMVEZGWZKMFMXHKEMEYGFYWAGVZSGWSOUVKMEXNZQSVVWXDTCWHAJNPLDCIJHHLGVNBWK");
    msg.text.assign("NIDKTTZBXAGXYRCYFWQUDNEFDMWAMBZWCACMTBBMUQPTNXELPEJBTNQKFGVMN");

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
    msg.setTimeStamp(0.563643500128);
    msg.setSource(40924U);
    msg.setSourceEntity(0U);
    msg.setDestination(43787U);
    msg.setDestinationEntity(18U);
    msg.command = 47U;
    msg.htime = 0.946783071685;

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
    msg.setTimeStamp(0.149113522828);
    msg.setSource(18182U);
    msg.setSourceEntity(147U);
    msg.setDestination(32033U);
    msg.setDestinationEntity(205U);
    msg.command = 129U;
    msg.htime = 0.981849250997;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 214U;
    tmp_msg_0.htime = 0.812035666143;
    tmp_msg_0.context.assign("LHHRYAWSASOFEHZDLGJNMAEPOSVMPLTBFAZWGJXJXQRKKNNKKENTZRVUFCSPZNYXOTFOBVXNPARUCUIQDIDJGLRSLBWUWIDDXKSNWSCWIMBCUDHYYTAVCPEQTFJQSZOKZLFWUSQIMCMEEMAJOBGUOHIYEBFDXIBKDTMKCNEVZDNZUGHYHQXXPYOBJFJXICPWIYCJGTRPWGQEVLMRGSAYDRQKHJETNHQPVBILBXARTZGFQMVY");
    tmp_msg_0.text.assign("ENZODUSVNPHZRXTQORLGUNWCMYDWNTKFLUFWEEETSDHBGISWPRJAPYUJDNCSAUQUAOPRPQRAWZHIVNSERDLTOL");
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
    msg.setTimeStamp(0.734611228524);
    msg.setSource(13388U);
    msg.setSourceEntity(143U);
    msg.setDestination(40256U);
    msg.setDestinationEntity(118U);
    msg.command = 104U;
    msg.htime = 0.3600556676;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 146U;
    tmp_msg_0.htime = 0.0285300656009;
    tmp_msg_0.context.assign("GKTXQDTXKYEUVIQEFPGTKNIOJDRHBOBYDFCKFHOQYB");
    tmp_msg_0.text.assign("OVKHEODPECYPGQWAIXCTDHRFXGWZGLKEUATFBCOJAWXOCKJGUTWTTXQFNIPZMFMVFTQCZYLNELRTJQGNVEYMZVRQNOHWUIXLSMOWZUGJKKSZHHEDMLYGLWXZBHWTEWEOIOURKCDALZHIMFSNYRXVKDQSCXVJLDEPOBRQPHCIIFAJFJARZBASMWYPUVVPBMKAGMDCPXHILT");
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
    msg.setTimeStamp(0.546311434139);
    msg.setSource(2694U);
    msg.setSourceEntity(114U);
    msg.setDestination(18394U);
    msg.setDestinationEntity(167U);
    msg.op = 0U;
    msg.file.assign("XVFKKRWEMGEFDPUCRQQSBJYOLHDHLJNZDHAEWMBECHFVQWGATQROVRAQPJCQDNYHJIOVGIGY");

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
    msg.setTimeStamp(0.929101523814);
    msg.setSource(1580U);
    msg.setSourceEntity(8U);
    msg.setDestination(32905U);
    msg.setDestinationEntity(127U);
    msg.op = 148U;
    msg.file.assign("QOUYFJUBNVTUWOYDGMEBSAGUXJMXZVCBBRPXEHMLDQHUZKLWUICHHEMFWRGAQWXOEREKYIHSITMNKTPUZAOJNNXEIPISDLBIYGYZKKZVYUAKBUFJLTOFMNSXVCAHYFPQXZCGEVRCODEVROMTUTY");

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
    msg.setTimeStamp(0.913612538698);
    msg.setSource(45690U);
    msg.setSourceEntity(184U);
    msg.setDestination(31719U);
    msg.setDestinationEntity(64U);
    msg.op = 195U;
    msg.file.assign("ZIYTEUPGKDGDKDMSCLETPOUUEYQOSMWXIUOVRRDHHLXNLFBMGPYEJWGPELRCSUWRXJZAEUAALWMMQPIZWFITPXOXNZS");

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
    msg.setTimeStamp(0.621047726868);
    msg.setSource(13692U);
    msg.setSourceEntity(168U);
    msg.setDestination(49989U);
    msg.setDestinationEntity(84U);
    msg.op = 229U;
    msg.clock = 0.19587627664;
    msg.tz = -67;

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
    msg.setTimeStamp(0.395585225204);
    msg.setSource(7518U);
    msg.setSourceEntity(130U);
    msg.setDestination(30751U);
    msg.setDestinationEntity(208U);
    msg.op = 210U;
    msg.clock = 0.360639425815;
    msg.tz = -25;

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
    msg.setTimeStamp(0.614158010717);
    msg.setSource(16175U);
    msg.setSourceEntity(206U);
    msg.setDestination(24987U);
    msg.setDestinationEntity(249U);
    msg.op = 237U;
    msg.clock = 0.144007657194;
    msg.tz = 85;

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
    msg.setTimeStamp(0.415235104777);
    msg.setSource(43U);
    msg.setSourceEntity(252U);
    msg.setDestination(30891U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.014346386736);
    msg.setSource(59706U);
    msg.setSourceEntity(68U);
    msg.setDestination(15157U);
    msg.setDestinationEntity(87U);

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
    msg.setTimeStamp(0.546484334299);
    msg.setSource(28862U);
    msg.setSourceEntity(248U);
    msg.setDestination(9306U);
    msg.setDestinationEntity(173U);

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
    msg.setTimeStamp(0.92272999746);
    msg.setSource(38991U);
    msg.setSourceEntity(83U);
    msg.setDestination(36145U);
    msg.setDestinationEntity(153U);
    msg.sys_name.assign("OQZLUYMEJFJFMAIIOBHTYLVDVEERQZRVCWASGXYQGXFWBBHFFRUMPXPAZLDPVLRHRDVOICRFNYGHSYJNCARKFSLUWEOHKGGJCSNBMZNCEYCOBUGCUEJWATNPPQXFDKXSPOEDNATIZTXDWJRYOJFJVBGACDHDLXPHCKHKTMURVLNESGIUISXQZPTMXMQZ");
    msg.sys_type = 118U;
    msg.owner = 14560U;
    msg.lat = 0.0529678754757;
    msg.lon = 0.691126602547;
    msg.height = 0.933223671056;
    msg.services.assign("OCTFBIQIVUMXNLLFKVCGADHRXQHNMZXMMSZTUGDRHBMHWZIQLIMOAJGYALFADCDTGYNMUAKWKGJVBXDWJPKOEDWEIYWYVDSBEONBZVBWGBFJURGZDSQAXRPFDZUURXESUNVVLTIYULINEPTFFCSKSAJPSYSMQARNCXOBPTYI");

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
    msg.setTimeStamp(0.758633387815);
    msg.setSource(51588U);
    msg.setSourceEntity(229U);
    msg.setDestination(21965U);
    msg.setDestinationEntity(19U);
    msg.sys_name.assign("UGKMQCAVRUXKQWVMYTTROEVYZOQLCQBPJLENPALGGPEMKGNPYGHSKLIXIENRTZZWKUWUEFRTHFHMXDKPBJIIPSDJTZCOSCDRUROEGVFXZZIWPOHYBDEVBEGNXAGLRJUMDLVBLSXCTNOMTFDJW");
    msg.sys_type = 1U;
    msg.owner = 58196U;
    msg.lat = 0.988320773411;
    msg.lon = 0.479117004219;
    msg.height = 0.2391126827;
    msg.services.assign("GFTXFJMGKXJEQUMVGTZSDWEVUQRLGHRWDPXFBEYNVBGZKTWOUTBOKIMYRLEOMWIFHMLZONJDUEIIBWEIIMUXJPQDPNZYJGYCFBPPKDKZMAOAXSXCNKJLSCEJQWCXWNOWBVXRLNVWHBAYRESFSCCVVGQCUASNDTZCYHP");

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
    msg.setTimeStamp(0.213911545459);
    msg.setSource(62492U);
    msg.setSourceEntity(198U);
    msg.setDestination(45352U);
    msg.setDestinationEntity(231U);
    msg.sys_name.assign("JAJMNPVFRGBOZBEDRWAEUKGGLKTZWJPLSHTQINHFULPWTCMBLZLCXCFXPNTOJDNYGVQISOCV");
    msg.sys_type = 147U;
    msg.owner = 14563U;
    msg.lat = 0.153890406043;
    msg.lon = 0.294717181009;
    msg.height = 0.281528284084;
    msg.services.assign("ACHZMYSISYEJHLCMMRQGXEZTAOTRVRWJREVITNGGOBALNOSEZSBSGUCHZOEIPQXDOXASCNKGXYWZMZVNPOPVBVXTKRZKSBQDVFCEBDHEJUOUM");

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
    msg.setTimeStamp(0.359085935884);
    msg.setSource(60734U);
    msg.setSourceEntity(13U);
    msg.setDestination(11168U);
    msg.setDestinationEntity(204U);
    msg.service.assign("NHBEMJFWNMLFLWQMTTZOPXIFUASSGAWWUEMTDEKGWZGQVLYOFBNJXGMFYFKBPWIRVUILYCHBSSXQRPANBPDPOYPJPAQDSKNDAWGCYIEPFJHXGKTGUYCXVJLBWRRFKCHLQKBSJZEECYPIVZOVCATNPHSKMAMHCDJYKOUZTZCVFTNROIQERSKRGBQZHNJUZACBAOUIEDMXHTIJYWNZHMIRQOUDHSEIVLD");
    msg.service_type = 80U;

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
    msg.setTimeStamp(0.352074004444);
    msg.setSource(13164U);
    msg.setSourceEntity(123U);
    msg.setDestination(9585U);
    msg.setDestinationEntity(78U);
    msg.service.assign("VBOPCTFZMFOWQOMFUWXMJJKNYERBOQCKINLTGJUPNVNDENUADLHHETTOCZYPNLUSXPSKJYIGFZMAHGXGNPEYIRCSLFDYHTMPFITTHDBSJJWDOREKKZIUTBNACHDYARSJIBQXQMGPNNHIPARBHEDUSZXLBSVTLIKWBXOVADZGHYYLFMWALPPU");
    msg.service_type = 116U;

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
    msg.setTimeStamp(0.551204169151);
    msg.setSource(53875U);
    msg.setSourceEntity(16U);
    msg.setDestination(38814U);
    msg.setDestinationEntity(238U);
    msg.service.assign("EQMBHWFZNJVPGFIQIEXLZUUVXPRWZGOSFNPYJOBOOUJIVWEIIDJGWELEMDAQDITSGLFKCGNFX");
    msg.service_type = 93U;

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
    msg.setTimeStamp(0.629326964635);
    msg.setSource(10482U);
    msg.setSourceEntity(146U);
    msg.setDestination(52661U);
    msg.setDestinationEntity(18U);
    msg.value = 0.407303678776;

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
    msg.setTimeStamp(0.555007049163);
    msg.setSource(15375U);
    msg.setSourceEntity(89U);
    msg.setDestination(62485U);
    msg.setDestinationEntity(124U);
    msg.value = 0.291990983003;

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
    msg.setTimeStamp(0.744889511965);
    msg.setSource(46934U);
    msg.setSourceEntity(39U);
    msg.setDestination(63052U);
    msg.setDestinationEntity(185U);
    msg.value = 0.543198891675;

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
    msg.setTimeStamp(0.255209746534);
    msg.setSource(28411U);
    msg.setSourceEntity(58U);
    msg.setDestination(6305U);
    msg.setDestinationEntity(212U);
    msg.value = 0.00379387595234;

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
    msg.setTimeStamp(0.837465243317);
    msg.setSource(9037U);
    msg.setSourceEntity(157U);
    msg.setDestination(27848U);
    msg.setDestinationEntity(181U);
    msg.value = 0.997424004699;

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
    msg.setTimeStamp(0.404429834422);
    msg.setSource(24456U);
    msg.setSourceEntity(226U);
    msg.setDestination(31620U);
    msg.setDestinationEntity(115U);
    msg.value = 0.612250570513;

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
    msg.setTimeStamp(0.0741329228062);
    msg.setSource(13198U);
    msg.setSourceEntity(93U);
    msg.setDestination(55655U);
    msg.setDestinationEntity(201U);
    msg.value = 0.106398018353;

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
    msg.setTimeStamp(0.294165315695);
    msg.setSource(1192U);
    msg.setSourceEntity(97U);
    msg.setDestination(23862U);
    msg.setDestinationEntity(220U);
    msg.value = 0.229574117646;

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
    msg.setTimeStamp(0.537908164326);
    msg.setSource(1513U);
    msg.setSourceEntity(214U);
    msg.setDestination(49673U);
    msg.setDestinationEntity(101U);
    msg.value = 0.186271920003;

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
    msg.setTimeStamp(0.297467785037);
    msg.setSource(56074U);
    msg.setSourceEntity(112U);
    msg.setDestination(49648U);
    msg.setDestinationEntity(251U);
    msg.number.assign("OOGYXNBIHTOFXYAGHQNBHCSEXIAIQIRSHEGNDSLVMNMELCVDPZOYTSRAWIVXKUOQQLUMMTYJXEJGBKKOTQWPWUHZAKAIMKKMFDETRFFBFXLLMBZVHSGCBAHNFVNMDG");
    msg.timeout = 34170U;
    msg.contents.assign("WAGTKJDSNXYHUZVCKBJRYWEHEQVSCPIUJQVKIHWIUXNAGJMAEZRZFHRCZWJONDIYMAOPUYPFKFBJQDHBQJTXOVAFFTOHCGNLQKLNRTQIHPMQCLVHSDVTMDSGEJAMCLKXYBYRTDVNSKNZBABZSGTLPIESCQVBRIXDMWNQTUZDYGVREEWOPOSEUZYLXIXNSWHMBXFKNEALMGJWGFFLUVBQBICKI");

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
    msg.setTimeStamp(0.248959405567);
    msg.setSource(52387U);
    msg.setSourceEntity(173U);
    msg.setDestination(20448U);
    msg.setDestinationEntity(90U);
    msg.number.assign("VOWEIETFLGBXSRMPDQXSLYYVXJRCKTDUAKFKJFIYGDVBOCRHNHQOVICECAHZNFRUNLXPCWKZZXZUMMXSWNSXQEMITKSHTMKMDOPFJWBEBJFGLPNWYKZEAIAKNAPCUNRBVFGJLUBBAQPVOTOLONGDDUJESKVZJBWYUIRDMHBEKPCHTGXQSRCWIVZIWEGFEUPYPYSRHARAY");
    msg.timeout = 46295U;
    msg.contents.assign("QVHZKEFJJURIDQVLTRCYWJFUETNBTLFGHBUWXHVEZIWULIUKJMJKWYCIXVCTIFZGELQWRVXSMTXWRANPIHSUDNWXTRU");

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
    msg.setTimeStamp(0.441765120227);
    msg.setSource(39551U);
    msg.setSourceEntity(31U);
    msg.setDestination(6606U);
    msg.setDestinationEntity(75U);
    msg.number.assign("ONHZNDYMGBNTVKQGBRGXHPZLJNMVWOYUHEXBPMHLRICNDYAAGUHCVGQFZRMOYEEESQWEFSAZBKILDIXDEXMEIUOABCZCWMPSMSSXCAAODPKDKUTVQJSJRBPLHKGENOPTJZULQAXDMHKGVWNCETPZWFZSGXDXRKFZRIFTFJZEBNIJIRQQJLNCYGKTLOVYBLYJKIUMXSOFQLUFUUSPCJAWR");
    msg.timeout = 5372U;
    msg.contents.assign("ONOHWAWDDNAVCVBETQKWXBXZQKGZETUKVTEZFJYNRIWSKNYQTOIDWHRCEUOGFGWRWUSNXFYGIWGETLSTYXQMLMOSXPBKYMYPQFXHEJNGORLLJLXAPKLHBZSSCJPXBQPCPIRMLELKIPUJGD");

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
    msg.setTimeStamp(0.164749273116);
    msg.setSource(22808U);
    msg.setSourceEntity(205U);
    msg.setDestination(20857U);
    msg.setDestinationEntity(247U);
    msg.seq = 1183542682U;
    msg.destination.assign("TUDSNKRRFZCIXPVKFUNMHUQFITQVINNVEMFAYJJEWJGAUOTSKDQDIBZXIJX");
    msg.timeout = 59656U;
    const char tmp_msg_0[] = {3, -40, -73, 47, -62, -13, -122, 28, -107, 3, -44, 90, 108, 38, -84, -86, -111, -128, -120, 86, 67, -112, -25, -63, -50, 100, 68, 21, -7, 60, -80, 89, -126, -25, 23, 54, 71, 85, -44, 38, -85, 96, -24, 49, 94, 85, 81, 61, 66, 0, -103, -3, -64, -55, -97, -98, 23, -121, -90, -126, -82, -112, -93, 48, 32, -23, -122, -106, -25, -46, -22, -45, -18, -10, -67, 83, -62, -30, -127, -6, -72, 75, -47, -44, -87, -66, -78, -90, 10, 80, 66, -85, 30, -47, 45, 9, 120, -108, -6, 76, 120, -71, -108, -24, -125, -109, -25, -127, -127, 47, 12, 112, 114, -116, 57, 85, 70, -122, 80, 72, 53, -30, 93, 52, -16, 114, -13, -117, 121, 7, 110, 35, 28, -62, 119, -55, 81, 121, -104, 7, -88, -60, -103, -86, -108, -52, 112, 17, -60, -23, -111, -117, 85, 80, -115, -79, -7, -56, 44, 104};
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
    msg.setTimeStamp(0.918666873411);
    msg.setSource(30710U);
    msg.setSourceEntity(19U);
    msg.setDestination(39072U);
    msg.setDestinationEntity(204U);
    msg.seq = 48997804U;
    msg.destination.assign("YKJWIZDWDLJTYOVPBHSAFEBEMTPLNSXMFIBABSYJ");
    msg.timeout = 11674U;
    const char tmp_msg_0[] = {-3, 21, -99, 67, 12, 10, 68, 90, -46, 9, -35, -50, -116, -119, -29, 34, -36, 79, -42, 112, 58, 77, -57, 3, 48, 28, -74, 8, 12, 26, 51, -23, -49, -9, -60, -105, -127, 61, 74, -71, -66, -126, -118, 81, 55, 103, 119, -66, -84, 51, -46, -119, 48, 23, 90, 32, 13, 95, -10, -88, -118, -115, 50, -32, 14, 52, -25, 39, 67, 53, -12, 104, 16, -99, 66, -93, 122, 29, -16, 52, -18, 46, 122, -119, -116, 66, 8, -98, 42, 114, 47, 8, -6, 124, -77, -85, -58, 110, 82, -83, 63, -110, -95, 94, -84, 72, 69, -39, 110};
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
    msg.setTimeStamp(0.0591559907107);
    msg.setSource(24872U);
    msg.setSourceEntity(213U);
    msg.setDestination(45228U);
    msg.setDestinationEntity(187U);
    msg.seq = 1748318887U;
    msg.destination.assign("VDSCBFQECLOQUVGKRKHRIFFFAAWNDNOBQHLDXBCUCYJUJGLKNFYJKASE");
    msg.timeout = 1445U;
    const char tmp_msg_0[] = {105, 49, 67, 77, -33, 83, -65, 30, -22, -11, 60, 37, -42, -128, 33, 118, -118, -109, 28, 124, -24, 4, -24, 80, 92, -94, -110, -73, -22, -109, -79, 52, -100, 8, -19, -30, -126, -23, -51, 123, -21, 57, 78, 30, 124, 60, -49, -93, -112, -86, 39, 24, -15, 40, -86, 40, 84, 88, 6, 114, 81, 75, 77, 45, 78, -18, 58, -102, -71, -54, 100, -93, 41, 85, -74, -75, 76, 91, -35, 27, 117, 92, -31, -126, -47, 62, 100, -64, -20, 5, -12, -75, -1, -110, -86, -13, 122, 84, 73, 109, 59, -15, 14, 55, -14, 0, 0, 124, 110, -4, 36, -125, -117, -99, 26, 53, 92, 60, 66, -103, 36, 26, -17, 31, 50, -13, -65, 92, 94, -81, -104, -60, -17, 20, -57, 81, -20, -57, -13, -67, 4, -82, 32, -72, 74, -120, -18, -110, 76, -81, -38, -114, 114, -107, -110, 31, -106, 45, 36, -124, -73, -7, -50, -56, 109};
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
    msg.setTimeStamp(0.398500243026);
    msg.setSource(14567U);
    msg.setSourceEntity(249U);
    msg.setDestination(62962U);
    msg.setDestinationEntity(217U);
    msg.source.assign("TEMUOBCXVHHWSFDUKYBYEHCFYUYZOZWVJDRXBLQHEVGKJWNYOZIS");
    const char tmp_msg_0[] = {-97, -5, -8, 93, 89, 1, -67, 80, -80, -25, -104, -3, 27, -72, -36, -22, 28, 56, -101, -81, -60, -40, 51, -112, -68, -16, -119, -63, 86, -103, -90, -18, 80, -30, 62, 30, 103, -69, -72, 118, -93, 71, 78, 95, -4, -113, -122, -99, -11, -116, -59, -102, -56, 86, 46, 109, 70, -106, -80, 93, -41, -41, -114, 21, 122, -111, -72, 125, 101, -29, 115, 85, -67, -81, -25, -49, -11, -108, -9, -70, 92, 78, 119, -76, 95, 23, -62, 97, -122, -121, -59, -17, -23, 7, 83, -90, -49, 96};
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
    msg.setTimeStamp(0.733825127992);
    msg.setSource(45903U);
    msg.setSourceEntity(101U);
    msg.setDestination(53306U);
    msg.setDestinationEntity(172U);
    msg.source.assign("IAZSZYVOEYUEVFCOGMZMXWMLYYCIBGBFNJS");
    const char tmp_msg_0[] = {-85, -75, 87, -112, -117, 42, -62, -71, 25, -17, -85, -9, 73, 25, -55, -4, 111, -17, -116, -107, -29, -56, 59, 114, 107, 50, 89, 25, 71, 94, -16, 104, -37, 31, 80, 39, 59, 13, 13, -119, -101, 24, -93, -112, 32, 116, 23, 115, -66, -88, 1, 56, -5, -106, 6, 72, -124, -14, -99, 24, 111, 0, -40, -34, -33, -63, -115, -103, -35, 80, -78, 125, -53, -115, 27, -43, -75, -22, 109, 79, 125, 44, -112, -34, -116, -95, 103, 27, -13, 7, -78, 61, -9, 82, -122, 54, -43, -11, -33};
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
    msg.setTimeStamp(0.441232515767);
    msg.setSource(6513U);
    msg.setSourceEntity(23U);
    msg.setDestination(53362U);
    msg.setDestinationEntity(91U);
    msg.source.assign("UTLBNQGEDFTMEUWOFSXPZHMKLIWTVMGQVJHGZIZMJVYOSOTZIRMBTMQFTFOXLJIRKMXOWDNFYPKCWYWPOJMAPSVIPLCNCFUJIKAHBARWEVLCSETWQRJKNLJASMDJXDEQGLT");
    const char tmp_msg_0[] = {98, 74, -69, 48, -30, -66, -62, 87, 35, -74, 117, -75, 41, -70, 63, 25, 21, 109, 50, -116, 110, 44, -108, 41, -2, 79, 9, 45, -77, 104, -90, 17, 85, -77, 73, -43, 35, -1, 59, 90, -1, -66, -121, -7, -58, -67, -19, -37, 74, 98, 29, -12, -120, -46, 116, -95, 46, 34, 2, -110, -79, 104, 16, 19, 36, 9, 101, 19, 57, -29, -52, -8, -16, 124, 111, 75, 38, 15, 57, -78, -80, 104, -116, -4, 1, 11, 27, 86, -82, 98, 2, 17, -111, -8, -102, 126, 115, -99, 102, -5, -95, 124, -42, 64, -49, -7, 21, 117, -77, 86, 25, -126, 82, 100, -22, 126, -55, -71, 84, -99, 50, -43, -21, 41, -108, -51, 78, 50, -45, -5, -106, -92, 36, 80, -47, -2, -95, -93, -111, 15, -8, -83, 37, -4, 62, -36, 44, 76, -68, 124, -17, -123, 99, -38, 113, 71, -74, -11, -42, 116, 16, 33, -31, -99, 43, 72, -101, 11, 44, -73, 57, -85, -66, 111, -1, -118};
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
    msg.setTimeStamp(0.55950841139);
    msg.setSource(63682U);
    msg.setSourceEntity(246U);
    msg.setDestination(12188U);
    msg.setDestinationEntity(241U);
    msg.seq = 2524191893U;
    msg.state = 53U;
    msg.error.assign("SXYQLRROBXINAFIWOQJN");

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
    msg.setTimeStamp(0.552575952042);
    msg.setSource(31228U);
    msg.setSourceEntity(148U);
    msg.setDestination(40487U);
    msg.setDestinationEntity(153U);
    msg.seq = 170328224U;
    msg.state = 142U;
    msg.error.assign("FNOCZKDBYEQBGUQKUSAKQEWXYOVDTEPYLDCNBHGMGNKNHXD");

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
    msg.setTimeStamp(0.194055498394);
    msg.setSource(28210U);
    msg.setSourceEntity(75U);
    msg.setDestination(8779U);
    msg.setDestinationEntity(245U);
    msg.seq = 3261504271U;
    msg.state = 161U;
    msg.error.assign("NKXYTNQRXKFIRPNYIGXUMEWOFCODELWRROHVFISVCGLVVIQAIQFKUDTMOKYNQPIOLKEZJFHAIMGJTNAQBHALQAWZDACGQJHVDYEMUPVFKLSGBRFNXCUXHWLSAXZOYFSLBSPARJOZZVMZNEFUDDOGRHHCTCRUXZSDLR");

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
    msg.setTimeStamp(0.121152683826);
    msg.setSource(1860U);
    msg.setSourceEntity(38U);
    msg.setDestination(27142U);
    msg.setDestinationEntity(44U);
    msg.origin.assign("CSUTJDZEJDBJBAJGXIWAMFNYKFZMPFINYSXENFEPCQNUVRTSJDCDYXUNGAFVLRWBHQAQRVBCSSYOEWERGPSFLKFORMQNVKVMYTPIJDYGCTQWQJGOUHLHBPUMIZNEDQTOZPKXNIUMMIZRZDUODBHSBZMDEBUKWHAHIYCHVWKPVSXJGTEWXAJKCCEPIWMIKYEFSFATQVBMLPXSGTVZLLCHKPHNBG");
    msg.text.assign("WVFHRPCAKBGGGAUDJHGBPERUFUKDGNLQPEVZOMPXYIQTLIIMISUXASYJIPHWLGDYBJXGNKBCPVNWVGDQENFAUDTOZHVFDECCCROBIXEEIBTXVDTGYNCYQRJBWCSAEXYJJXZMMTROTRQUJGMAUBEWPOASRUWMWQUT");

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
    msg.setTimeStamp(0.318653317809);
    msg.setSource(48535U);
    msg.setSourceEntity(135U);
    msg.setDestination(17157U);
    msg.setDestinationEntity(192U);
    msg.origin.assign("EVZRBJJWQOGGDZLZTLSAMKBPAGAGDUIVNUTIODNLFZXVVCQJNOSTICIKYXWVLWUSCMKAQDIKOGEXZHLHBRTZAWBUNJWJXTUVPHLUAUJREZLMLBBTOSEFFNNMMRTRDQGWTTYYOEVIPHKSKPQSXUOKRHLMIMQCFJPLDBIWAUKYRRUAXDEZHYGHI");
    msg.text.assign("OXEVUBJEVKRUVPBSODGKLJVEBQLXXDHAQQNWTMTPHAFSTXEDSVYOXUNTZUDHUNUBORWQYT");

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
    msg.setTimeStamp(0.737841318094);
    msg.setSource(18334U);
    msg.setSourceEntity(87U);
    msg.setDestination(19912U);
    msg.setDestinationEntity(150U);
    msg.origin.assign("RCHTXJICRGMHECZIPKULBHJFDDSIQWOEWJYUUSWSUFUXOUEWHEFLYNIMXDQTODZIXQFZVQFAYBMXJKDPCWNJBAMGVK");
    msg.text.assign("HKMDHFLTKQQVTBXIXJQMPCVJMFDCHFGZYICWXNEQYOLBFJBJWDWAPOSPYKUVOSXUBYNBPORZIRGZVDJQWZHXNIIKKUNORWRISCJZVOCLXPKHGCIFUNSECQQSYMJCCNAMGFRUTXPCEORMIRPTUMABFZHSBWOSBLMDXWEGKYFARAVZOWSLQ");

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
    msg.setTimeStamp(0.798217848305);
    msg.setSource(58114U);
    msg.setSourceEntity(36U);
    msg.setDestination(5118U);
    msg.setDestinationEntity(85U);
    msg.origin.assign("MQBRINVIVKTYBPDJDGGVFVTQEWMNGJPMSQUYWLLLPIITPULZPXTEDZYUSDOWQHXAFUBORKFCVQGYOXDIQDFFKOMYHOCYZULIEVMDZTVWFOVLMZHKHQWBXYWREIDJOXIWRIJNEQHJTGBNGLVZGZFCHKURQWPDYIUHKSKAUZCOGCTASLSUPSAMTHUVOWTAWASFKLRAHBZXGXMSMBBYROCEHFEJNYF");
    msg.htime = 0.37090449389;
    msg.lat = 0.113831361724;
    msg.lon = 0.628160701548;
    const char tmp_msg_0[] = {-102, 41, 29, 17, -104, -71, -15, -60, -88, -93, -35, 88, 30, 26, 66, 81, -52, -10, 5, -128, 31, -67, 26, -41, -125, -56, -95, -62, 43, -28, 115, 125, -66, -25, -11, -76, 30, 94, 80, 119, -16, -23, 27, -127, -101, 88, 83, -79, -20, 7, -52, 29, 46, 62, 28, -68, 8, 1, -71, 60, 57, 74, -28, 3, 75, 118, 67, -32, 78, -100, 38, -56, -51, 24, -113, 110, -30, 85, 78, -86, 16, -65, 80, 8, -118, -66, 29, -26, 117, 38, 83, -14, 89, 28, -73, 60, -87, -110, -128, 28, 100, 27, 125, -43, 54, 92, -17, 98, 108, 60, 80, 36, -118, 125, 2, -10, -92, -17, -71, 26, -104, 8, 116, 18, 107, 26, -67, -19, -89, -64, 83, 79, -7, 95, -33, -41, -56, 36, -81, -118, -96, 32, -89, -18, 73, -9, -26, -17, -24, 90, 30, -31, 80, 19, -96, 37, 98, 84, 105, 6, 120, -76, -37, 26, 12, 88, 60, -103, -66, -102, 91, -83, -111, -98, 12, -108, -100, -99, -54, -107, -29, -56, -99};
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
    msg.setTimeStamp(0.823900725808);
    msg.setSource(32696U);
    msg.setSourceEntity(129U);
    msg.setDestination(28789U);
    msg.setDestinationEntity(247U);
    msg.origin.assign("DFEQSTLKPELTCCMDUXEQPGMJOVITGVYGJGFOZHBJJIAUNGGQRCZKEGJSHDYOPZEMBSWBWFQKZZFEANURUNPAYKOEAYLQNWXEVZYQQWWVNDHLQEYROJRIZDXJXBSUUANRXCMQHFTPCOHXWMBLBPETADYZBSRVHVYISTUMULPJRFKWBPNWPYKVXBNAMFMSAKKXFCINSOOFA");
    msg.htime = 0.0371150516067;
    msg.lat = 0.418706453689;
    msg.lon = 0.22556117065;
    const char tmp_msg_0[] = {-31, -1, -2, -61, -67, -33, -48, 121, -87, 4, 93, 44, 104, -50, -63, 85, 29, -60, -81, -57, 54, 93, 35, 61};
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
    msg.setTimeStamp(0.28788513448);
    msg.setSource(16327U);
    msg.setSourceEntity(242U);
    msg.setDestination(42168U);
    msg.setDestinationEntity(156U);
    msg.origin.assign("PKITYJTHVGMEXLLTHHBRINUQKZHFZUZALPXGMKGNUACZIOZUVJSXGHGBBRWBKJHINCEDSMVARTIHDNUPKCVQQCVXYIREDKQWTUYGMFSKNMKNOPNJQHOEPOIDJZAULBNUTMWVWLYFVXJDUZIQVECOVVOTGCBJEDZFHSXLYCNMHPKXPOFCWSSERSEQYAYYABFGLCLFRDXIOJLXZSEM");
    msg.htime = 0.0621430117324;
    msg.lat = 0.534016915638;
    msg.lon = 0.101621316036;
    const char tmp_msg_0[] = {11, -35, -3, 71, 30, 112, -26, 36, 115, 26, 61, 112, -22, 34, -38, 74, -62, 55, -121, -105, -1, -95, -84, 77, 35, 43, -81, 121, -91, 6, -116, 116, 122, 10, -72, -62, -73, -123, 51, -77, -67, -128, -126, 81, 39, 75, 49, 79, 95, -32, -81, -45, -124, -110, -88, -61, 75, -48, 78, 13, -102, 120, 45, 93, 118, -104, 114, -95, -35, 40, -10, -88, -126, -80, -6, 114, -50, 69, 15, 8, 93, -113, 100, -119, -5, 70, -3, -127, 96, -61, -85, -75, -112, -21, -4, 63, 87, -73, 54, 2, -76, 63, -56, 116, -21, 53, 109, 59, 13, 115, 71, 0, 86, -63, -18, -20, -77, 116, -76, 124, -102, 111, -44, -45, 112, -55, -14, 45, 76, -98, -80, -58, 76, 75, 92, -3, -88, -65, 63, 103, -125, -16, 55, 109, 117, 64, -92, 66, -120, -83, -62, -41, 105, -76, -32, -13, -60, -31, 92, -128, 97, -99, 60, 36, -122, -79, 10, -3, 42, -3, -16, 35, -100, 8, 96, -86, 103, 114, 79, -26, -35, -11, -23, 126, -66, 96, -14, 64, -57, 83, -107, -51, 5, 39, 81, -21, -20, 34, -47, 42};
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
    msg.setTimeStamp(0.606497449546);
    msg.setSource(30374U);
    msg.setSourceEntity(129U);
    msg.setDestination(39409U);
    msg.setDestinationEntity(64U);
    msg.req_id = 14904U;
    msg.ttl = 35027U;
    msg.destination.assign("ZLLHLHSQHNGOBYNJZSTXMFWXVYHTEYKJDJAMQHOCPBKKXMADDQIXEFBICNBQLBWUHFOWYKRQODUQUXWFGJZPI");
    const char tmp_msg_0[] = {39, 120, -25, -63, 89, 95, -73, 18, -44, -11, 8, 97, 21, -51, 23, 20, -124, -41, 52, -20, 12, 60, -58, 1, -23, 56, 66, -70, 84, 98, 121, -94, 82, 78, -105, -15, -8, 39, 54, 81, -128, -7, -66, -118, -31, -1, -8, -25, 108, -107, 86, -5, 33, -95, 106, 61, -71, 103, -42, -66, -99, -87, 81, 49, 28, -33, 34, -66, -2, -35, -94, -70, 0, -40, -30, -16, 88, -23, 76, -75, 24, -110, -60, 58, 74, 54, 99, 34, -7, 81, 5, -101, 84, -72, 63, 54, 23, 14, -57, -42, -111, -42, -8, -89, 16, 85, -65, -31, 75, 122, 18, -47, -30, 93, 31, -67, 97, -5, -119, 89, 66, -23, 113, -40, 90, -72, -32, -17, -65, 20, -11, -107, 26, 53, -127, 29, -56, -120, -125, -76, 39, 103, 47, -1, 51, 48, 106, 46, 32, -119, -88, -119, -68, 28, -99, -41, -81, -77, 119, -77, -61, -96, -60, -103, -80, 105, -59, 81, -41, 0, -21, 103, -68};
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
    msg.setTimeStamp(0.2885025489);
    msg.setSource(202U);
    msg.setSourceEntity(124U);
    msg.setDestination(40658U);
    msg.setDestinationEntity(232U);
    msg.req_id = 19714U;
    msg.ttl = 3610U;
    msg.destination.assign("GIDDDMYJFPUZRXYOKZLPAXNDXLPMEWWBBHMICRUATWUVBZICGMFFNJRGEWCYLMQWSQHZVGOBCUUSRPHLUTVSQVZVEYNXVJQNLCOPADTAFPZLRXILIQYVDANMWOAOUSIGMYNAATBNMLOKUEGWAEZYHHXJHCUPWSKYTLSGBJROXJKFKFNLJ");
    const char tmp_msg_0[] = {-49, -36, 3, -33, 48, -84, 8, -45, -104, -29, -1, 85, -67, -61, 74, 79, 29, -20, -81, -32, -106, 24, -106, 62, -108, 8, 107, -44, -88, -15, -66, 20, 49, -124, 18, 52, 54, -16, 37, -125, 84, -87, 56, -13, -16, -86, -66, 64, -120, 73, -21, -59, 69, -117, 85, -27, 112, 84, 37, 15, 21, 47, 27, -96, -40, 19, 52, -48, -67, -114, 85, -93, -14, -99, 81, 35, 103, 28, 94, 0, 73, -4, 31, 44, -111, -32, 57, 79, -74, 88, 84, -4, -99, 11, -9, 83, 8, -24, -55, 5, 54, 33, 5, 0, 40, 43, 29, -108, -3, 65, -7, 117, 120, -118, 58, -9, -35, 107, 115, 102, -77, 102, -66, -55, 22, 14, 119, 61, -97, 53, -83};
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
    msg.setTimeStamp(0.992722176226);
    msg.setSource(33006U);
    msg.setSourceEntity(131U);
    msg.setDestination(63383U);
    msg.setDestinationEntity(72U);
    msg.req_id = 41443U;
    msg.ttl = 360U;
    msg.destination.assign("ZFZVCXXRPPURVVPODCW");
    const char tmp_msg_0[] = {-125, -76, -29, -96, 8, 114, -125, 40, -88, -30, 41, 104, -90, -112, -85, 7, -23, 25, 34, -73, -85, -84, -86, 57, -40, 11, -35, -33, -91, 9, -67, 115, -51, -10, 109, 86, 83, 119, -66, 73, -113, 20, -26, -76, -80, -44, -90, -74, 87, -99, -2, 42, 63, 0, -125, -74, -19, 113, 1, 72, -58, 126, 36, 71, -22, -124, -122, -117, -64, -19, 20, 53, 102, 7, -116, 114, 112, -27, 50, -68, 39, 12, 7, -60, -68, -107, -57, -62, -21, 35, -121, 70, -109, -51, 47, -80, -113, 59, -104, -119, -103, 66, -113, 103, 103, 25, -104, 109, -51, 89, -30, 30, 92, 84, 47, 39, -61, 0, 107, -12, -49, 9, 26, 75, 57, -29, -100, 42, -20, -5, 44, -81, 119, 14, -71, 19, 90, -15, -58, -42, -127, -43, -64, -18, -59, 62, 76, 24, 64, -9, -16, 40, -8, -24, -29, -117, 74, -17, 10, -84, -120, 102, -108, -59, -101, -68, 92, -95, -37, -110, 47, 71, -28, -26, 3, 59, -79, 112, 95, -18, -17, -53, -31, -72, 53, -69, 56, 98, 27, 99, -115, -82, 106, -63, -25, 81, -76, 68, 28, 93, -73, -118, -101, 103, 47, -111, 126, 1, 89, 39, -52, 96, 114, -35, 68, 66};
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
    msg.setTimeStamp(0.36818568021);
    msg.setSource(25297U);
    msg.setSourceEntity(84U);
    msg.setDestination(49539U);
    msg.setDestinationEntity(5U);
    msg.req_id = 17786U;
    msg.status = 158U;
    msg.text.assign("XSAMBUTWJKGEBSQYIJSTRMWTZLSOOYAEGTMHRXLSCJWIGEFYFKDCMOBXFCSQFEMWFGVDLNCKNCAQUBDPJQZCYVULIPRYTJKLWDDPZGDLRAUETSCLBWNGTLBOVETRR");

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
    msg.setTimeStamp(0.630677116341);
    msg.setSource(48404U);
    msg.setSourceEntity(95U);
    msg.setDestination(38808U);
    msg.setDestinationEntity(178U);
    msg.req_id = 35242U;
    msg.status = 173U;
    msg.text.assign("ZFTJFGTLBQFPFRYJHBCINPCYLFKWFWSXNNBSNCJFURMEQWDBDJIVUQOWDBDBYHPLTUCJURIVNGJUYZFZPZTABEHLMOIAGKXMTESMKPSOLGZSVSHRR");

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
    msg.setTimeStamp(0.0199645842959);
    msg.setSource(56932U);
    msg.setSourceEntity(235U);
    msg.setDestination(61743U);
    msg.setDestinationEntity(47U);
    msg.req_id = 39445U;
    msg.status = 199U;
    msg.text.assign("XZEUDMIYFRFBKYFPDWIECJAUKAAQOBQOWQGGKELWUUYRZCCHFNYAPNEBRCETXOQJHADDEJTTLUDYOKGNJZWSFOPSBAMBJMINCQEKOZLCIIRDTNKBTHQNSLYFGRFBUOZFUAPVVJUSCWHZILLETWYMUKSSIWZYNHHLSQXXVGFLPUWWDYRBKZNEYBAGSGEOHRQRAOXRQGTGLBFHCKZPXMLITVTHX");

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
    msg.setTimeStamp(0.475637262842);
    msg.setSource(26775U);
    msg.setSourceEntity(41U);
    msg.setDestination(5924U);
    msg.setDestinationEntity(112U);
    msg.group_name.assign("UZMBYVIHJGOEMAYHWRJLESSTWRBQ");
    msg.links = 3242758306U;

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
    msg.setTimeStamp(0.464384322954);
    msg.setSource(63771U);
    msg.setSourceEntity(248U);
    msg.setDestination(19667U);
    msg.setDestinationEntity(246U);
    msg.group_name.assign("DMTJPYHSZBBVLPDHNMSIHXGNDURJTAWPKLAUUGBJMDFVJKXPWKEOUURWRIVPHHKXYLXXQFJSSPZZMCFMQBTEYVHQGGZGPGOKSLOXIKUNAKLJNWQKEGLIJAEIEKLQZRZSRIEONSXDY");
    msg.links = 2831731622U;

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
    msg.setTimeStamp(0.385595036544);
    msg.setSource(52079U);
    msg.setSourceEntity(224U);
    msg.setDestination(34247U);
    msg.setDestinationEntity(3U);
    msg.group_name.assign("KFPDVQJOYXVTYLHEOVJXMVRRJBOYMUEHUTWOBHPLIZRYCQSBXSRAUOFPHGUXYEANIXDUFZJIQPQKXLHFQKRULRCBYABANNSKMMGAITVMHPOZBZAUIHYFIZZVVRKZRSBBPTSPOIHDGEEN");
    msg.links = 4107904722U;

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
    msg.setTimeStamp(0.28045069436);
    msg.setSource(23401U);
    msg.setSourceEntity(151U);
    msg.setDestination(23948U);
    msg.setDestinationEntity(148U);
    msg.groupname.assign("XLTXIALJGYXKARHZBOZXLXNQQEMNKFHFULMTFFNNKDAZEWKTTLCHVOQDCNTGFXIGBGUEHHDBD");
    msg.action = 227U;
    msg.grouplist.assign("FPONCIQWCTVYH");

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
    msg.setTimeStamp(0.415633276681);
    msg.setSource(20362U);
    msg.setSourceEntity(219U);
    msg.setDestination(48322U);
    msg.setDestinationEntity(142U);
    msg.groupname.assign("WFEVWPLVYKXGDSFAMDECIQZZLGGHOVIGUKJXWWPDRPCMOZBSIHWAPAQGXNBICGCOQACPJUQUDDQYIFTJOZAKQZGMRJSTTMNE");
    msg.action = 177U;
    msg.grouplist.assign("IDBMPKDQFFTIWTVAXIYOTHXBXZUKSPKQXWFLBNBVEYUIDTZCLNQEBGNZWVNRMMINMFXBEHNHLOCLETHKCPOTNQIQZPWFXWRFCKLAQCPJVSWWASVLDJAPBSVUJTDRAQFTREWRIJJCPOUOCRWAOQUGDZFUMHSYYRYZIYLXGJGIPSXLWEMGYOMDAVNHJV");

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
    msg.setTimeStamp(0.028549889034);
    msg.setSource(9849U);
    msg.setSourceEntity(133U);
    msg.setDestination(1473U);
    msg.setDestinationEntity(92U);
    msg.groupname.assign("VMGNTCVLITPLOQIHFSSPPZGUDTHOUXVDGJMXRCAJZXOLDBSIRYJGPOHVGHFYNVFKMKJUPQJIXFHCNAXPSLPADVFWHNYZKHORCMZMNBVLFDWSNGRCBVHZKQIT");
    msg.action = 120U;
    msg.grouplist.assign("YPKBWTMRDHVDQUCMSMTIUZWBDRXBRHZGAULOBWNAXOEGOKONLHJHLRXSTYHSGSZVURGTMLKQQPGCJMUWRKXPEUGHAHPEUPDNTJYYKRQCDHCOHPKZQVIEWMSSVWAJFONLZKOMBSXNMLCYLBSVEXWFBLIEZGBXBKAIJPNYFINYOFJJFPSCIIECIODQVBFTAE");

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
    msg.setTimeStamp(0.948719066232);
    msg.setSource(10525U);
    msg.setSourceEntity(118U);
    msg.setDestination(35264U);
    msg.setDestinationEntity(113U);
    msg.id = 197U;
    msg.range = 0.540325035263;

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
    msg.setTimeStamp(0.228215701929);
    msg.setSource(25625U);
    msg.setSourceEntity(236U);
    msg.setDestination(61834U);
    msg.setDestinationEntity(35U);
    msg.id = 222U;
    msg.range = 0.505690133986;

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
    msg.setTimeStamp(0.94476506386);
    msg.setSource(58689U);
    msg.setSourceEntity(254U);
    msg.setDestination(29950U);
    msg.setDestinationEntity(34U);
    msg.id = 200U;
    msg.range = 0.308583819557;

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
    msg.setTimeStamp(0.390671917327);
    msg.setSource(27921U);
    msg.setSourceEntity(219U);
    msg.setDestination(63407U);
    msg.setDestinationEntity(198U);
    msg.tx = 49U;
    msg.channel = 129U;
    msg.timer = 38925U;

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
    msg.setTimeStamp(0.00203687929896);
    msg.setSource(44705U);
    msg.setSourceEntity(138U);
    msg.setDestination(58141U);
    msg.setDestinationEntity(0U);
    msg.tx = 115U;
    msg.channel = 18U;
    msg.timer = 2027U;

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
    msg.setTimeStamp(0.666356009379);
    msg.setSource(64078U);
    msg.setSourceEntity(196U);
    msg.setDestination(54175U);
    msg.setDestinationEntity(158U);
    msg.tx = 72U;
    msg.channel = 102U;
    msg.timer = 11407U;

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
    msg.setTimeStamp(0.220890821073);
    msg.setSource(40663U);
    msg.setSourceEntity(243U);
    msg.setDestination(62952U);
    msg.setDestinationEntity(148U);
    msg.beacon.assign("YGTQSMGGXOJLKGPOMASAMRVKWZELLLJJMIZMSJWOCOGTEVZFGBHFHKHJTLHDWUBLCGXCDOTTWIKHIQMSRUFWAEIZNNDRRYESMIKVNNBMXZQZ");
    msg.lat = 0.00668233744129;
    msg.lon = 0.589675515777;
    msg.depth = 0.243898553953;
    msg.query_channel = 89U;
    msg.reply_channel = 155U;
    msg.transponder_delay = 84U;

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
    msg.setTimeStamp(0.532571090679);
    msg.setSource(12125U);
    msg.setSourceEntity(84U);
    msg.setDestination(34688U);
    msg.setDestinationEntity(93U);
    msg.beacon.assign("ZLCRUNFKVDDHVRBSYSSFUYHJXHETGHAWUIOLRPDCSFEEEVUWLUATXBEMQSDTWJEMZXDLTJOZWAHZKYBRFUNGPAYIWZBQSNNGOSEORCQATPDYRJKLDNLZGWABXPUZCXFZOKIVGGIHPQMKGHVREQMQBCVIPJBKMDKQIJQIEJTBALXPICNGZFXVKJMDJQBRYMFVICWZOPXANGSQXYPHOOHYAUCFONTAOCU");
    msg.lat = 0.164949329101;
    msg.lon = 0.907325620447;
    msg.depth = 0.830620080028;
    msg.query_channel = 86U;
    msg.reply_channel = 117U;
    msg.transponder_delay = 198U;

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
    msg.setTimeStamp(0.471768678854);
    msg.setSource(24522U);
    msg.setSourceEntity(88U);
    msg.setDestination(29567U);
    msg.setDestinationEntity(23U);
    msg.beacon.assign("BFFOTRUCMFNYAICMOBDWFLGMMKQKOGRUMJXGQTXSGSYVNGSAMMJRRJHRQSKUOTLAPVNFBEWZWNPTCLPFPDIACQXGLUYOLRCKHWCZAIHYMYLEILQBTHEJPDSUDVXWRNOHARNPZGJIGMHHZFVZUSYEEHWAISBYBVCQKWJBHCT");
    msg.lat = 0.354690737179;
    msg.lon = 0.111147248203;
    msg.depth = 0.296254814319;
    msg.query_channel = 95U;
    msg.reply_channel = 232U;
    msg.transponder_delay = 20U;

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
    msg.setTimeStamp(0.984682478749);
    msg.setSource(5173U);
    msg.setSourceEntity(106U);
    msg.setDestination(35617U);
    msg.setDestinationEntity(150U);
    msg.op = 23U;

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
    msg.setTimeStamp(0.309078349384);
    msg.setSource(4544U);
    msg.setSourceEntity(178U);
    msg.setDestination(4539U);
    msg.setDestinationEntity(226U);
    msg.op = 179U;

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
    msg.setTimeStamp(0.492319654566);
    msg.setSource(44747U);
    msg.setSourceEntity(209U);
    msg.setDestination(60222U);
    msg.setDestinationEntity(242U);
    msg.op = 157U;

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
    msg.setTimeStamp(0.765388811862);
    msg.setSource(54044U);
    msg.setSourceEntity(192U);
    msg.setDestination(51788U);
    msg.setDestinationEntity(234U);
    msg.address = 164U;

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
    msg.setTimeStamp(0.432321457906);
    msg.setSource(61154U);
    msg.setSourceEntity(243U);
    msg.setDestination(31722U);
    msg.setDestinationEntity(130U);
    msg.address = 160U;

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
    msg.setTimeStamp(0.768323375245);
    msg.setSource(33727U);
    msg.setSourceEntity(50U);
    msg.setDestination(20917U);
    msg.setDestinationEntity(126U);
    msg.address = 172U;

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
    msg.setTimeStamp(0.493050227951);
    msg.setSource(4361U);
    msg.setSourceEntity(26U);
    msg.setDestination(3864U);
    msg.setDestinationEntity(130U);
    msg.address = 23U;
    msg.status = 105U;
    msg.range = 0.419211370615;

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
    msg.setTimeStamp(0.772425572765);
    msg.setSource(7761U);
    msg.setSourceEntity(193U);
    msg.setDestination(21512U);
    msg.setDestinationEntity(67U);
    msg.address = 20U;
    msg.status = 165U;
    msg.range = 0.623313522805;

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
    msg.setTimeStamp(0.46951095854);
    msg.setSource(64098U);
    msg.setSourceEntity(33U);
    msg.setDestination(9291U);
    msg.setDestinationEntity(64U);
    msg.address = 114U;
    msg.status = 247U;
    msg.range = 0.0506542047041;

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
    msg.setTimeStamp(0.393977264493);
    msg.setSource(15396U);
    msg.setSourceEntity(114U);
    msg.setDestination(1116U);
    msg.setDestinationEntity(149U);
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 52143U;
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
    msg.setTimeStamp(0.917336474525);
    msg.setSource(62260U);
    msg.setSourceEntity(160U);
    msg.setDestination(18389U);
    msg.setDestinationEntity(90U);
    IMC::UamTxFrame tmp_msg_0;
    tmp_msg_0.seq = 34669U;
    tmp_msg_0.sys_dst.assign("CHENZLXIDUPEELYOCSVDPOFMQAGOZDJRZKRAGRQDZBLKXJWRWBDQ");
    tmp_msg_0.flags = 22U;
    const char tmp_tmp_msg_0_0[] = {-84, -23, -24, 90, -97, -110, 52, 31, -123, 33, -35, 20, 52, 105, 105, 18, -3, 17, 60, 52, 26, -3, 117, -124, 101, -66, 71, -121, -16, -14, 53, -100, -81, 89, 79, 40, 15, 46, -68, 79, -66, 34, 117, 49, 69, -33, 76, -75, -118, -70, -106, -19, -106, 13, -43, -118, 51, 29, -106, 97, -59, 92, -65, 72, -2, 6, -17, 53, -35, 116, -45, -6, 84, 65, 108, -11, 6, -104, 85, -60, -35, 24, -23, -28, -70, 12, -75, 57, 3, -20, 18, -28, 120, -56, 44, -78, 1};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.24832078583);
    msg.setSource(26073U);
    msg.setSourceEntity(239U);
    msg.setDestination(62026U);
    msg.setDestinationEntity(21U);
    IMC::RestartSystem tmp_msg_0;
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
    msg.setTimeStamp(0.556228050837);
    msg.setSource(34889U);
    msg.setSourceEntity(146U);
    msg.setDestination(24144U);
    msg.setDestinationEntity(37U);
    msg.enable = 78U;

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
    msg.setTimeStamp(0.022668103645);
    msg.setSource(52816U);
    msg.setSourceEntity(8U);
    msg.setDestination(55266U);
    msg.setDestinationEntity(64U);
    msg.enable = 222U;

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
    msg.setTimeStamp(0.791033751085);
    msg.setSource(44460U);
    msg.setSourceEntity(242U);
    msg.setDestination(52817U);
    msg.setDestinationEntity(13U);
    msg.enable = 216U;

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
    msg.setTimeStamp(0.0122061111398);
    msg.setSource(61388U);
    msg.setSourceEntity(90U);
    msg.setDestination(15176U);
    msg.setDestinationEntity(191U);
    msg.summary = 54U;
    msg.level = 32U;

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
    msg.setTimeStamp(0.940947082503);
    msg.setSource(65405U);
    msg.setSourceEntity(188U);
    msg.setDestination(30711U);
    msg.setDestinationEntity(33U);
    msg.summary = 247U;
    msg.level = 128U;

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
    msg.setTimeStamp(0.549428237627);
    msg.setSource(23170U);
    msg.setSourceEntity(222U);
    msg.setDestination(20961U);
    msg.setDestinationEntity(207U);
    msg.summary = 32U;
    msg.level = 192U;

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
    msg.setTimeStamp(0.718737226742);
    msg.setSource(10027U);
    msg.setSourceEntity(63U);
    msg.setDestination(36781U);
    msg.setDestinationEntity(68U);

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
    msg.setTimeStamp(0.486564286059);
    msg.setSource(28842U);
    msg.setSourceEntity(38U);
    msg.setDestination(31986U);
    msg.setDestinationEntity(64U);

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
    msg.setTimeStamp(0.467348442173);
    msg.setSource(63388U);
    msg.setSourceEntity(153U);
    msg.setDestination(25910U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.193289794933);
    msg.setSource(29604U);
    msg.setSourceEntity(85U);
    msg.setDestination(16247U);
    msg.setDestinationEntity(60U);

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
    msg.setTimeStamp(0.628958749487);
    msg.setSource(38764U);
    msg.setSourceEntity(10U);
    msg.setDestination(26812U);
    msg.setDestinationEntity(141U);

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
    msg.setTimeStamp(0.807186826273);
    msg.setSource(4208U);
    msg.setSourceEntity(42U);
    msg.setDestination(41203U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.761123414253);
    msg.setSource(49944U);
    msg.setSourceEntity(71U);
    msg.setDestination(29226U);
    msg.setDestinationEntity(172U);
    msg.op = 200U;
    msg.system.assign("JWXYTROOAXOIXBTCSUDNSXLLCOPYNHFVPMNGTVMGTHKBRJPDWAQWYMQEPMDTDSHVXETRIOUMVUFFKUDDFMOOFFJIZGBQEZNMJZACKWMFUFARGBCKLSPGQGVTJNXPRILKLZABFZUJCWSOHRCVHGTBPRKBIPNW");
    msg.range = 0.125048183376;
    IMC::AcousticNoise tmp_msg_0;
    tmp_msg_0.summary = 175U;
    tmp_msg_0.level = 188U;
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
    msg.setTimeStamp(0.234050009103);
    msg.setSource(54087U);
    msg.setSourceEntity(114U);
    msg.setDestination(14835U);
    msg.setDestinationEntity(31U);
    msg.op = 114U;
    msg.system.assign("TIWIIDEVFSUQAXNAVFKISMPNPHCTTTWFVXHKJSOZXDEHCEFUBRXOOKXBIREGCWYLQRSENJCLEWSDGLHUNDLFPOPXLUMGFUJOBAIYMGCGVZAZJSRIMXVBHWNKCYIDCRJQWYMNNJHMAYCRSPXZYERBVONVABLQLTJUJUBMBVKJCETLHHACXKWZDSUBEFDQPNYLARITRZOKQHFXZFGQGAHTZOGRVBNPQKYKUPMGAVUTDYIGDYZKMZMWTQPWJOSFQ");
    msg.range = 0.297388947811;
    IMC::CompressedImage tmp_msg_0;
    tmp_msg_0.frameid = 215U;
    const char tmp_tmp_msg_0_0[] = {66, 50, 20, -122, -19, 79, 52, -79, -98, 78, 38, -51, -2, -59, -61, 120, -63, 83, 103, 109, 104, -78, 33, -71, -64, 93, -84, -96, 74, 84, 38, 101, 53, 94, -114, -62, 6, -123, -54, 47, -79, -121, 43, 49, -40, 58, 17, -64, 2, 74, 125, 67, 53, 73, 41, -103, -113, -112, 0, 64, 6, 14, 124, -47, -101, 70, -43, 102, 107, -78, -106, 29, -83, 119, 32, -121, -44, -116, 64, -31, 7, 21, -22, -119, -4, -54, -5, -89, 32, -30, -1, 108, 19, -38, -24, 49, -114, -45, 20, -102, -35, 96, -13, -99, -53, 115, -71, -48, -60, 123, -63, -20, 58, -96, 18, 5, -7, 51, -19, 103, -35, -55, -84, -127, -81, 52, -87, 0, -126, 9, 85, 13, 77, 115, 73, -28, 30, -108, 4, 24, 45, 26, 19, 11, 23, 57, -68, -3, -54, 9, 82, 20, 71, -3, -57, 114, 112, -109, -71, -96, 18, -108, 64, -56, 108, 57, -28, 101, -111, 111, 108, -20, -31, 121, 49, 111, -71, -124, -38, -56, 27, 102, -42, -56, -113, 102, 105, 8, -114, -19, -64, -58, 63, -36, -67, 30, -120, -56, 68, -73, -12, -119, -31, 68, 95, 51, -25, -107, 1, 64, 39, -35, 70, -11};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.480784488154);
    msg.setSource(23646U);
    msg.setSourceEntity(124U);
    msg.setDestination(4564U);
    msg.setDestinationEntity(68U);
    msg.op = 100U;
    msg.system.assign("VTNJCLRWTKTIQORJFHKWEXLDMTPFMGNUJOMRKGETPMZOIFESEUGYOBSDVCRSPWMHGOOKCIHPCIEDDEOZJOBPEANBLYN");
    msg.range = 0.684183822929;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.270038992267;
    tmp_msg_0.y = 0.470435887059;
    tmp_msg_0.z = 0.0719125787494;
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
    msg.setTimeStamp(0.857675890522);
    msg.setSource(64289U);
    msg.setSourceEntity(181U);
    msg.setDestination(20465U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.894485244548);
    msg.setSource(62772U);
    msg.setSourceEntity(190U);
    msg.setDestination(20174U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.591869663636);
    msg.setSource(65301U);
    msg.setSourceEntity(185U);
    msg.setDestination(39576U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.366597297191);
    msg.setSource(45832U);
    msg.setSourceEntity(23U);
    msg.setDestination(27171U);
    msg.setDestinationEntity(9U);
    msg.list.assign("DDDWLVKGSRCYEKEFIUREBXSOIGJLCXJOVZFEQBJ");

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
    msg.setTimeStamp(0.707693275184);
    msg.setSource(54595U);
    msg.setSourceEntity(7U);
    msg.setDestination(7973U);
    msg.setDestinationEntity(98U);
    msg.list.assign("JOTNZGPWCXKXQKYEYNJGGIYZUJOJNTPEXRMPKAVNHQSHYEBYDTHBOOJRSPOBCMURAAMDQ");

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
    msg.setTimeStamp(0.714143103169);
    msg.setSource(14200U);
    msg.setSourceEntity(77U);
    msg.setDestination(55559U);
    msg.setDestinationEntity(54U);
    msg.list.assign("DDMOXLTXHAKXCOZKKPSQYWHIMLUKARQJNHHDSAUNXVCYDVQAVZRXRHRETBSFFYULPOOZQPPQTIAFEUBDMJUGDJGECBNRBTJOWANJBGLWVZGFTITWXTZYSQNYYCRLPBEBXGIMAGUKHQBCSGRMMIQNWSECOHIPIVLBOJHVJJLAJZXESPYUXLFXTKRMCHKVBIWSFAMUTYE");

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
    msg.setTimeStamp(0.802694741497);
    msg.setSource(57854U);
    msg.setSourceEntity(252U);
    msg.setDestination(12529U);
    msg.setDestinationEntity(168U);
    msg.value = 30003;

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
    msg.setTimeStamp(0.63351423442);
    msg.setSource(20211U);
    msg.setSourceEntity(12U);
    msg.setDestination(61194U);
    msg.setDestinationEntity(16U);
    msg.value = -29865;

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
    msg.setTimeStamp(0.827164989945);
    msg.setSource(3073U);
    msg.setSourceEntity(161U);
    msg.setDestination(43162U);
    msg.setDestinationEntity(85U);
    msg.value = -1496;

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
    msg.setTimeStamp(0.124554642715);
    msg.setSource(16920U);
    msg.setSourceEntity(20U);
    msg.setDestination(40082U);
    msg.setDestinationEntity(121U);
    msg.value = 0.281459855093;

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
    msg.setTimeStamp(0.356863391556);
    msg.setSource(8989U);
    msg.setSourceEntity(160U);
    msg.setDestination(30325U);
    msg.setDestinationEntity(10U);
    msg.value = 0.478118389286;

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
    msg.setTimeStamp(0.491725841172);
    msg.setSource(23161U);
    msg.setSourceEntity(104U);
    msg.setDestination(39389U);
    msg.setDestinationEntity(231U);
    msg.value = 0.0439386958057;

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
    msg.setTimeStamp(0.16003061531);
    msg.setSource(54048U);
    msg.setSourceEntity(232U);
    msg.setDestination(17392U);
    msg.setDestinationEntity(207U);
    msg.value = 0.200956260426;

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
    msg.setTimeStamp(0.749092372501);
    msg.setSource(7857U);
    msg.setSourceEntity(92U);
    msg.setDestination(39192U);
    msg.setDestinationEntity(242U);
    msg.value = 0.825973754773;

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
    msg.setTimeStamp(0.198492721323);
    msg.setSource(46384U);
    msg.setSourceEntity(232U);
    msg.setDestination(61987U);
    msg.setDestinationEntity(78U);
    msg.value = 0.661257346727;

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
    msg.setTimeStamp(0.479171593475);
    msg.setSource(46746U);
    msg.setSourceEntity(162U);
    msg.setDestination(509U);
    msg.setDestinationEntity(23U);
    msg.validity = 60415U;
    msg.type = 78U;
    msg.utc_year = 17403U;
    msg.utc_month = 22U;
    msg.utc_day = 206U;
    msg.utc_time = 0.157853380413;
    msg.lat = 0.950885465106;
    msg.lon = 0.428588210072;
    msg.height = 0.662093655103;
    msg.satellites = 244U;
    msg.cog = 0.0412682554176;
    msg.sog = 0.228643889242;
    msg.hdop = 0.356815433217;
    msg.vdop = 0.911931435402;
    msg.hacc = 0.917896606626;
    msg.vacc = 0.52761729871;

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
    msg.setTimeStamp(0.930185130633);
    msg.setSource(39596U);
    msg.setSourceEntity(213U);
    msg.setDestination(24999U);
    msg.setDestinationEntity(164U);
    msg.validity = 52995U;
    msg.type = 15U;
    msg.utc_year = 18865U;
    msg.utc_month = 17U;
    msg.utc_day = 37U;
    msg.utc_time = 0.921665150166;
    msg.lat = 0.651597952962;
    msg.lon = 0.362775462375;
    msg.height = 0.323513370791;
    msg.satellites = 212U;
    msg.cog = 0.695114020962;
    msg.sog = 0.246386118932;
    msg.hdop = 0.647231229506;
    msg.vdop = 0.210018816504;
    msg.hacc = 0.546582729768;
    msg.vacc = 0.407050217615;

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
    msg.setTimeStamp(0.88377197889);
    msg.setSource(39904U);
    msg.setSourceEntity(21U);
    msg.setDestination(33013U);
    msg.setDestinationEntity(116U);
    msg.validity = 3608U;
    msg.type = 205U;
    msg.utc_year = 34715U;
    msg.utc_month = 226U;
    msg.utc_day = 244U;
    msg.utc_time = 0.246229624059;
    msg.lat = 0.778565688114;
    msg.lon = 0.657807041485;
    msg.height = 0.972107891332;
    msg.satellites = 174U;
    msg.cog = 0.899844455877;
    msg.sog = 0.404030736198;
    msg.hdop = 0.110647496892;
    msg.vdop = 0.509432513011;
    msg.hacc = 0.082558214518;
    msg.vacc = 0.429732261915;

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
    msg.setTimeStamp(0.121070020693);
    msg.setSource(19213U);
    msg.setSourceEntity(50U);
    msg.setDestination(4465U);
    msg.setDestinationEntity(235U);
    msg.time = 0.473255751523;
    msg.phi = 0.225420571382;
    msg.theta = 0.478284100437;
    msg.psi = 0.0593830037585;
    msg.psi_magnetic = 0.875077535021;

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
    msg.setTimeStamp(0.962675965861);
    msg.setSource(49847U);
    msg.setSourceEntity(29U);
    msg.setDestination(27110U);
    msg.setDestinationEntity(10U);
    msg.time = 0.962968111551;
    msg.phi = 0.484023528839;
    msg.theta = 0.0823784436687;
    msg.psi = 0.771465686105;
    msg.psi_magnetic = 0.399271340672;

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
    msg.setTimeStamp(0.481574486512);
    msg.setSource(25239U);
    msg.setSourceEntity(157U);
    msg.setDestination(24715U);
    msg.setDestinationEntity(150U);
    msg.time = 0.435393500095;
    msg.phi = 0.932749863559;
    msg.theta = 0.941418876418;
    msg.psi = 0.713268329102;
    msg.psi_magnetic = 0.608555878785;

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
    msg.setTimeStamp(0.273534251828);
    msg.setSource(64385U);
    msg.setSourceEntity(0U);
    msg.setDestination(27109U);
    msg.setDestinationEntity(229U);
    msg.time = 0.730435735072;
    msg.x = 0.0911234905931;
    msg.y = 0.243265192711;
    msg.z = 0.744700630282;
    msg.timestep = 0.585758474983;

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
    msg.setTimeStamp(0.624619196371);
    msg.setSource(55262U);
    msg.setSourceEntity(16U);
    msg.setDestination(44135U);
    msg.setDestinationEntity(30U);
    msg.time = 0.497757330087;
    msg.x = 0.472950730444;
    msg.y = 0.360362243731;
    msg.z = 0.837954117673;
    msg.timestep = 0.920566706434;

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
    msg.setTimeStamp(0.445521736011);
    msg.setSource(41693U);
    msg.setSourceEntity(145U);
    msg.setDestination(20313U);
    msg.setDestinationEntity(3U);
    msg.time = 0.551773803026;
    msg.x = 0.524798125478;
    msg.y = 0.915973013978;
    msg.z = 0.209291647328;
    msg.timestep = 0.0109679928274;

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
    msg.setTimeStamp(0.610601828008);
    msg.setSource(51540U);
    msg.setSourceEntity(181U);
    msg.setDestination(28240U);
    msg.setDestinationEntity(240U);
    msg.time = 0.2600966244;
    msg.x = 0.261399485128;
    msg.y = 0.29478092978;
    msg.z = 0.29646688868;

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
    msg.setTimeStamp(0.841692205247);
    msg.setSource(20830U);
    msg.setSourceEntity(49U);
    msg.setDestination(44356U);
    msg.setDestinationEntity(47U);
    msg.time = 0.140193306389;
    msg.x = 0.187001146428;
    msg.y = 0.882114841327;
    msg.z = 0.99886963748;

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
    msg.setTimeStamp(0.0319165251684);
    msg.setSource(35904U);
    msg.setSourceEntity(16U);
    msg.setDestination(58189U);
    msg.setDestinationEntity(87U);
    msg.time = 0.514844905096;
    msg.x = 0.53439113368;
    msg.y = 0.296353856343;
    msg.z = 0.691762466939;

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
    msg.setTimeStamp(0.800085767853);
    msg.setSource(1957U);
    msg.setSourceEntity(240U);
    msg.setDestination(22473U);
    msg.setDestinationEntity(184U);
    msg.time = 0.922362996261;
    msg.x = 0.671662267927;
    msg.y = 0.354456823959;
    msg.z = 0.882233700584;

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
    msg.setTimeStamp(0.453559269939);
    msg.setSource(64360U);
    msg.setSourceEntity(34U);
    msg.setDestination(43866U);
    msg.setDestinationEntity(221U);
    msg.time = 0.977802455148;
    msg.x = 0.0196618328478;
    msg.y = 0.426132528928;
    msg.z = 0.520252304073;

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
    msg.setTimeStamp(0.530157676309);
    msg.setSource(33678U);
    msg.setSourceEntity(142U);
    msg.setDestination(17186U);
    msg.setDestinationEntity(253U);
    msg.time = 0.306753979356;
    msg.x = 0.817379079025;
    msg.y = 0.220692620435;
    msg.z = 0.926209429488;

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
    msg.setTimeStamp(0.162497814919);
    msg.setSource(35207U);
    msg.setSourceEntity(88U);
    msg.setDestination(49045U);
    msg.setDestinationEntity(179U);
    msg.time = 0.825435493904;
    msg.x = 0.492904881785;
    msg.y = 0.849676498477;
    msg.z = 0.602726596858;

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
    msg.setTimeStamp(0.857148904648);
    msg.setSource(14732U);
    msg.setSourceEntity(116U);
    msg.setDestination(63784U);
    msg.setDestinationEntity(208U);
    msg.time = 0.854896394926;
    msg.x = 0.910944874667;
    msg.y = 0.732988878764;
    msg.z = 0.110031874714;

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
    msg.setTimeStamp(0.328221743037);
    msg.setSource(9475U);
    msg.setSourceEntity(26U);
    msg.setDestination(31556U);
    msg.setDestinationEntity(155U);
    msg.time = 0.100205128827;
    msg.x = 0.978582861441;
    msg.y = 0.837680287555;
    msg.z = 0.898170532708;

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
    msg.setTimeStamp(0.539186137636);
    msg.setSource(40994U);
    msg.setSourceEntity(92U);
    msg.setDestination(168U);
    msg.setDestinationEntity(48U);
    msg.validity = 249U;
    msg.x = 0.596016864479;
    msg.y = 0.487430744656;
    msg.z = 0.597502088421;

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
    msg.setTimeStamp(0.00970810572538);
    msg.setSource(38759U);
    msg.setSourceEntity(76U);
    msg.setDestination(34586U);
    msg.setDestinationEntity(135U);
    msg.validity = 170U;
    msg.x = 0.105605472011;
    msg.y = 0.879855057527;
    msg.z = 0.896322587019;

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
    msg.setTimeStamp(0.577785398122);
    msg.setSource(4815U);
    msg.setSourceEntity(114U);
    msg.setDestination(77U);
    msg.setDestinationEntity(250U);
    msg.validity = 140U;
    msg.x = 0.91556718288;
    msg.y = 0.775762118683;
    msg.z = 0.448301485404;

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
    msg.setTimeStamp(0.261721796862);
    msg.setSource(38965U);
    msg.setSourceEntity(135U);
    msg.setDestination(34281U);
    msg.setDestinationEntity(207U);
    msg.validity = 28U;
    msg.x = 0.41667970808;
    msg.y = 0.557964335107;
    msg.z = 0.271066491547;

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
    msg.setTimeStamp(0.840702564973);
    msg.setSource(25066U);
    msg.setSourceEntity(88U);
    msg.setDestination(56406U);
    msg.setDestinationEntity(103U);
    msg.validity = 154U;
    msg.x = 0.190614985136;
    msg.y = 0.470961984634;
    msg.z = 0.376709222665;

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
    msg.setTimeStamp(0.436187296817);
    msg.setSource(29472U);
    msg.setSourceEntity(163U);
    msg.setDestination(39777U);
    msg.setDestinationEntity(124U);
    msg.validity = 152U;
    msg.x = 0.424676971431;
    msg.y = 0.125984646458;
    msg.z = 0.350572814734;

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
    msg.setTimeStamp(0.463361045323);
    msg.setSource(35898U);
    msg.setSourceEntity(254U);
    msg.setDestination(9865U);
    msg.setDestinationEntity(57U);
    msg.time = 0.836872901981;
    msg.x = 0.738639383793;
    msg.y = 0.739448780457;
    msg.z = 0.125593701873;

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
    msg.setTimeStamp(0.397188423681);
    msg.setSource(36095U);
    msg.setSourceEntity(92U);
    msg.setDestination(29439U);
    msg.setDestinationEntity(40U);
    msg.time = 0.129126554932;
    msg.x = 0.343425690634;
    msg.y = 0.469202631453;
    msg.z = 0.894512194155;

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
    msg.setTimeStamp(0.830012337484);
    msg.setSource(57524U);
    msg.setSourceEntity(151U);
    msg.setDestination(24815U);
    msg.setDestinationEntity(193U);
    msg.time = 0.924572697068;
    msg.x = 0.538625236743;
    msg.y = 0.750996612847;
    msg.z = 0.0191303490807;

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
    msg.setTimeStamp(0.290494129733);
    msg.setSource(16405U);
    msg.setSourceEntity(120U);
    msg.setDestination(13002U);
    msg.setDestinationEntity(163U);
    msg.validity = 143U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.0635054709563;
    tmp_msg_0.beam_height = 0.298625678474;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.915441960236;

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
    msg.setTimeStamp(0.988364944536);
    msg.setSource(61356U);
    msg.setSourceEntity(8U);
    msg.setDestination(12150U);
    msg.setDestinationEntity(238U);
    msg.validity = 136U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.377322925079;
    tmp_msg_0.y = 0.235197252178;
    tmp_msg_0.z = 0.837944444073;
    tmp_msg_0.phi = 0.686518001674;
    tmp_msg_0.theta = 0.811800285594;
    tmp_msg_0.psi = 0.625825751605;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.736249315681;

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
    msg.setTimeStamp(0.632692394964);
    msg.setSource(12586U);
    msg.setSourceEntity(206U);
    msg.setDestination(43165U);
    msg.setDestinationEntity(201U);
    msg.validity = 249U;
    msg.value = 0.799176566375;

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
    msg.setTimeStamp(0.367868963098);
    msg.setSource(2334U);
    msg.setSourceEntity(64U);
    msg.setDestination(49485U);
    msg.setDestinationEntity(71U);
    msg.value = 0.0749395114954;

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
    msg.setTimeStamp(0.255993647257);
    msg.setSource(19001U);
    msg.setSourceEntity(223U);
    msg.setDestination(63216U);
    msg.setDestinationEntity(143U);
    msg.value = 0.835172365811;

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
    msg.setTimeStamp(0.664473124899);
    msg.setSource(15923U);
    msg.setSourceEntity(39U);
    msg.setDestination(33400U);
    msg.setDestinationEntity(219U);
    msg.value = 0.546895665858;

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
    msg.setTimeStamp(0.0744487044691);
    msg.setSource(65061U);
    msg.setSourceEntity(76U);
    msg.setDestination(12491U);
    msg.setDestinationEntity(222U);
    msg.value = 0.541038966286;

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
    msg.setTimeStamp(0.575981582471);
    msg.setSource(62293U);
    msg.setSourceEntity(55U);
    msg.setDestination(54650U);
    msg.setDestinationEntity(87U);
    msg.value = 0.624996694216;

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
    msg.setTimeStamp(0.939158078188);
    msg.setSource(49658U);
    msg.setSourceEntity(140U);
    msg.setDestination(65469U);
    msg.setDestinationEntity(77U);
    msg.value = 0.228238139564;

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
    msg.setTimeStamp(0.48606607553);
    msg.setSource(9745U);
    msg.setSourceEntity(200U);
    msg.setDestination(34659U);
    msg.setDestinationEntity(5U);
    msg.value = 0.228832643509;

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
    msg.setTimeStamp(0.738956875829);
    msg.setSource(60711U);
    msg.setSourceEntity(45U);
    msg.setDestination(7704U);
    msg.setDestinationEntity(187U);
    msg.value = 0.568311174307;

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
    msg.setTimeStamp(0.139638553554);
    msg.setSource(30257U);
    msg.setSourceEntity(134U);
    msg.setDestination(50390U);
    msg.setDestinationEntity(25U);
    msg.value = 0.522354818726;

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
    msg.setTimeStamp(0.760224040682);
    msg.setSource(35546U);
    msg.setSourceEntity(239U);
    msg.setDestination(62383U);
    msg.setDestinationEntity(70U);
    msg.value = 0.121234058766;

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
    msg.setTimeStamp(0.521531522059);
    msg.setSource(33801U);
    msg.setSourceEntity(174U);
    msg.setDestination(49369U);
    msg.setDestinationEntity(128U);
    msg.value = 0.00475660341954;

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
    msg.setTimeStamp(0.546867080868);
    msg.setSource(42153U);
    msg.setSourceEntity(173U);
    msg.setDestination(59089U);
    msg.setDestinationEntity(249U);
    msg.value = 0.381129270345;

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
    msg.setTimeStamp(0.287164338745);
    msg.setSource(52036U);
    msg.setSourceEntity(110U);
    msg.setDestination(29344U);
    msg.setDestinationEntity(47U);
    msg.value = 0.133098145054;

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
    msg.setTimeStamp(0.337064479903);
    msg.setSource(35032U);
    msg.setSourceEntity(139U);
    msg.setDestination(14148U);
    msg.setDestinationEntity(240U);
    msg.value = 0.567923703345;

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
    msg.setTimeStamp(0.183300795546);
    msg.setSource(64341U);
    msg.setSourceEntity(93U);
    msg.setDestination(12359U);
    msg.setDestinationEntity(160U);
    msg.value = 0.310747221386;

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
    msg.setTimeStamp(0.00802543158564);
    msg.setSource(27062U);
    msg.setSourceEntity(18U);
    msg.setDestination(37845U);
    msg.setDestinationEntity(71U);
    msg.value = 0.652190568892;

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
    msg.setTimeStamp(0.393282805962);
    msg.setSource(34087U);
    msg.setSourceEntity(69U);
    msg.setDestination(37630U);
    msg.setDestinationEntity(30U);
    msg.value = 0.848224761699;

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
    msg.setTimeStamp(0.0725545770896);
    msg.setSource(57404U);
    msg.setSourceEntity(4U);
    msg.setDestination(37291U);
    msg.setDestinationEntity(193U);
    msg.value = 0.887714590199;

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
    msg.setTimeStamp(0.105787045373);
    msg.setSource(13516U);
    msg.setSourceEntity(66U);
    msg.setDestination(64924U);
    msg.setDestinationEntity(85U);
    msg.value = 0.927933450595;

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
    msg.setTimeStamp(0.523791478072);
    msg.setSource(39805U);
    msg.setSourceEntity(88U);
    msg.setDestination(10614U);
    msg.setDestinationEntity(148U);
    msg.value = 0.0205924485404;

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
    msg.setTimeStamp(0.825557100264);
    msg.setSource(8580U);
    msg.setSourceEntity(213U);
    msg.setDestination(65200U);
    msg.setDestinationEntity(166U);
    msg.value = 0.844265038616;

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
    msg.setTimeStamp(0.525259314112);
    msg.setSource(61775U);
    msg.setSourceEntity(161U);
    msg.setDestination(53994U);
    msg.setDestinationEntity(137U);
    msg.value = 0.164714977221;

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
    msg.setTimeStamp(0.571812487188);
    msg.setSource(51806U);
    msg.setSourceEntity(246U);
    msg.setDestination(23946U);
    msg.setDestinationEntity(28U);
    msg.value = 0.286317795476;

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
    msg.setTimeStamp(0.288289161051);
    msg.setSource(43533U);
    msg.setSourceEntity(23U);
    msg.setDestination(48374U);
    msg.setDestinationEntity(97U);
    msg.value = 0.880940897436;

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
    msg.setTimeStamp(0.214411388151);
    msg.setSource(699U);
    msg.setSourceEntity(108U);
    msg.setDestination(22396U);
    msg.setDestinationEntity(53U);
    msg.direction = 0.584450833453;
    msg.speed = 0.451670840022;

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
    msg.setTimeStamp(0.535364586161);
    msg.setSource(53592U);
    msg.setSourceEntity(240U);
    msg.setDestination(63770U);
    msg.setDestinationEntity(228U);
    msg.direction = 0.0495707525666;
    msg.speed = 0.439820649327;

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
    msg.setTimeStamp(0.386856940599);
    msg.setSource(40752U);
    msg.setSourceEntity(216U);
    msg.setDestination(47221U);
    msg.setDestinationEntity(127U);
    msg.direction = 0.0850188476649;
    msg.speed = 0.476659892987;

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
    msg.setTimeStamp(0.718620473403);
    msg.setSource(47877U);
    msg.setSourceEntity(84U);
    msg.setDestination(10442U);
    msg.setDestinationEntity(180U);
    msg.value = 0.920934647379;

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
    msg.setTimeStamp(0.444246354101);
    msg.setSource(16190U);
    msg.setSourceEntity(21U);
    msg.setDestination(23164U);
    msg.setDestinationEntity(41U);
    msg.value = 0.126874271212;

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
    msg.setTimeStamp(0.0528273503198);
    msg.setSource(19720U);
    msg.setSourceEntity(50U);
    msg.setDestination(50740U);
    msg.setDestinationEntity(118U);
    msg.value = 0.760144682973;

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
    msg.setTimeStamp(0.756084548483);
    msg.setSource(3569U);
    msg.setSourceEntity(66U);
    msg.setDestination(30781U);
    msg.setDestinationEntity(87U);
    msg.value.assign("OGJVHNATSDIKCYBBZRBZGPGZLJFJJTECSKQD");

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
    msg.setTimeStamp(0.701647079777);
    msg.setSource(24794U);
    msg.setSourceEntity(45U);
    msg.setDestination(5773U);
    msg.setDestinationEntity(43U);
    msg.value.assign("RWVXPRXXTNJJLCBWKUYHIKVWZELSJZNSAQGJCOWAFZUBYTLCEXNBRCMNNFTKFXZGWFFXXSVZBYGDJQMMXOJTVZUAQEMOCGVSFNGKDQHGABDEZLPCPLGTIHORNUUYMFAEIISPOMVLBYRENUHECMLOGVCDSKHDRWOUPXWYQMBBXAIJUTLHIGRKBDKQMHSU");

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
    msg.setTimeStamp(0.651468726643);
    msg.setSource(57744U);
    msg.setSourceEntity(246U);
    msg.setDestination(35788U);
    msg.setDestinationEntity(185U);
    msg.value.assign("ZGHLKAOPIMMALJYJEPCSNNXBZECZQWDJYQITWCQG");

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
    msg.setTimeStamp(0.143175427501);
    msg.setSource(12732U);
    msg.setSourceEntity(128U);
    msg.setDestination(31881U);
    msg.setDestinationEntity(226U);
    const char tmp_msg_0[] = {124, -42, 89, 72, -26, -99, 85, -127, 96, -92, 0, 107, 63, 52, -115, -42, 23, 119, 73, -100, -64, 80, -64, -47, -121, 25, -102, -69, 36, -75, 56, -88, -1, -35, 81, 63, -26, -41, -47, -39, -69, 10, 94, -53, 7, -45, -9, 4, -89, 47, 11, -124, 15, 24, 15, -113, 0, -66, 86, 122, 4, -70, 6, 45, -83, -90, -110, 14, -69, 48, 124, 20, -107, 77, -69, -61, -97, -39, 76, 85, -19, 76, -72, -35, -88, 53, -4, -15, -53, -89, 5, 82, -108, -60, -28, -12, -36, 19, -38, -79, -41, 24, -25, 49, -108, 73, -10, -117, 42, -105, -44, 28, 83, 15, -106, -119, 68, 108, -82, 45, -67, 108, 3, -59, 118, -33, 26, 45, 97, 86, 37, -27, 1, 106, 85, 115, 87, -52, 59, 68, -109, -123, 67, 88, -70, 106, -59, -34, 120, -24, 108, -51, -99};
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
    msg.setTimeStamp(0.400592914158);
    msg.setSource(34188U);
    msg.setSourceEntity(231U);
    msg.setDestination(30587U);
    msg.setDestinationEntity(173U);
    const char tmp_msg_0[] = {-58, 62, -115, -17, 30, -81, 68, 25, -20, -82, -3, -99, 62, 93, 97, -33, 49, 67, -16, 16, -22, 21, 72, 48, -86, -82, -48, -124, 109, 7, 36, -65, -41, -74, -64, -21, -93, 106, -92, 121, -24, -2, 122, -64, 53, -52, -24, 122, 88, -100, 57, 55, 75, -22, -113, 58, -18, -5};
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
    msg.setTimeStamp(0.458794483171);
    msg.setSource(23094U);
    msg.setSourceEntity(220U);
    msg.setDestination(49331U);
    msg.setDestinationEntity(22U);
    const char tmp_msg_0[] = {90, -44, 47, -116, 91, -125, 71, -66, -62, -27, 93, -108, -92, 115, -125, 104, 106, -29, -8, 80, -94, -11, 1, -103, 68, -127, 38, -126, -71, -115, -53, -47, 7, 47, -40, -97, 40, 94, -26, 72, 122, -3, -56, -10, -117, 116, -11, -96, -8, 11, -39, 125, 48, 59, -122, -59, -74, 55, -116, -82, 125, -61, 5, -43, 65, -57, -109, -41, 8, -14, 6, 85, 73, 17, -119, 1, 45, -56, -23, 122, -37, 92, 108, -19, 25};
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
    msg.setTimeStamp(0.0355829824184);
    msg.setSource(46905U);
    msg.setSourceEntity(146U);
    msg.setDestination(24390U);
    msg.setDestinationEntity(232U);
    msg.frequency = 1283754826U;
    msg.min_range = 6056U;
    msg.max_range = 62725U;

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
    msg.setTimeStamp(0.593163428833);
    msg.setSource(52112U);
    msg.setSourceEntity(127U);
    msg.setDestination(34455U);
    msg.setDestinationEntity(101U);
    msg.frequency = 2095812481U;
    msg.min_range = 17141U;
    msg.max_range = 7381U;

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
    msg.setTimeStamp(0.130743085267);
    msg.setSource(47309U);
    msg.setSourceEntity(147U);
    msg.setDestination(20714U);
    msg.setDestinationEntity(30U);
    msg.frequency = 1675508549U;
    msg.min_range = 48951U;
    msg.max_range = 8232U;

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
    msg.setTimeStamp(0.786497993126);
    msg.setSource(22490U);
    msg.setSourceEntity(40U);
    msg.setDestination(51007U);
    msg.setDestinationEntity(247U);
    msg.type = 113U;
    msg.frequency = 3910677194U;
    msg.min_range = 12629U;
    msg.max_range = 12512U;
    msg.bits_per_point = 217U;
    msg.scale_factor = 0.432260571601;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.195030280711;
    tmp_msg_0.beam_height = 0.0480167788381;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {62, -16, 120, -108, 115, -80, 12, 28, 83, 64, 111, -2, -77, -27, 94, -90, 1, 48, -68, -42, -8, -1, 62, -90, -67, 25, -31, -22, 3, 9};
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
    msg.setTimeStamp(0.858038850717);
    msg.setSource(21453U);
    msg.setSourceEntity(196U);
    msg.setDestination(30161U);
    msg.setDestinationEntity(170U);
    msg.type = 62U;
    msg.frequency = 2764723675U;
    msg.min_range = 25737U;
    msg.max_range = 38809U;
    msg.bits_per_point = 219U;
    msg.scale_factor = 0.106858981064;
    const char tmp_msg_0[] = {-101, 19, -110, 112, -59, -24, 101, -27, -103, -67, 30, 88, -18, -32, -122, 25, 72, 61, -77, 114, 113, -81, -16, 117, -35, 41, 108, -119, 19, -70, 4, -79, 26, -8, -69, 115, -104, 82, -92, -46, -39, -89, -33, -98, 48, -40, -103, -17, 100, 55, 83, -18, 3, 106, 91, 69, 120, 11, 22, 18, 101, -13, -98, -110, -13, 39, 69, 102, -81, -100, 110, 75, 85, -12, 9, -37, 87, -102, -66, 69, 66, -49, -85, 118, 95, -15, 89, 7, -14, -38, -96, -124, -61, -36, 87, 21, 103, 62, 75, -80, -109, -63, -90, 0, 52, -4, 36, 104, 88, -42, 85, 124, 109, 74, -110, -48, -29, -60, -13, -36, 11, 30, -51, 56, 56, 105, 84, 30, -1, -59, -55, -91, 62, 56, 7, 80, -5, 1, 84, -127, -46, -96, -121};
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
    msg.setTimeStamp(0.608881287913);
    msg.setSource(16989U);
    msg.setSourceEntity(7U);
    msg.setDestination(19158U);
    msg.setDestinationEntity(101U);
    msg.type = 223U;
    msg.frequency = 2393007362U;
    msg.min_range = 49129U;
    msg.max_range = 42173U;
    msg.bits_per_point = 137U;
    msg.scale_factor = 0.533761008218;
    const char tmp_msg_0[] = {103, -5, -124, 4, 120, 38, -102, -121, -106, -128, -17, 40, 17, -51, -37, -57, 118, 60, 8, 39, -64, 96, 2, -126, -107, -23, -122, -21, -113, -92, -38, 24, 74, -120, 60, -29, 52, -112, -60, 72, -70, -69, 55, -111, -39, -90, -106, 2, -23, -114, -8, -90, 51, -62, 69, 12, 111, -11, -107, -12, 51, -97, 69, -86, -117, -20, -123, -71, 102, -127, 107, 87, -106, 61, 35, 21, 2, 108, 55, 72, -72, 110, -111, -111, -96, 46, 24, -18, 30, -105, -125, 50, -36, 57, -67, -12, 75, -121, 54, -11, 41, -91, -25, 18, -89, -122, -87, -24, -2, 110, -1, -65, 92, -32, -126, 51, 126, -72, -78, -34, -127, -18, -71, -71, 25, 38, -80, -42, -17, 75, 27, 83, 34, 46, -62, -5, -77, -52, 15, -49, 25, -14, -65, -66, -123, 56, -104, 115, -53, -7, -119, -13, 112, -16, 63, -65, 62, -88, 73, -48, 86, -39};
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
    msg.setTimeStamp(0.151057582016);
    msg.setSource(29826U);
    msg.setSourceEntity(118U);
    msg.setDestination(2571U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.206558089307);
    msg.setSource(3875U);
    msg.setSourceEntity(124U);
    msg.setDestination(8644U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.492168069069);
    msg.setSource(28341U);
    msg.setSourceEntity(116U);
    msg.setDestination(52576U);
    msg.setDestinationEntity(7U);

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
    msg.setTimeStamp(0.445635667673);
    msg.setSource(33683U);
    msg.setSourceEntity(200U);
    msg.setDestination(57608U);
    msg.setDestinationEntity(133U);
    msg.op = 176U;

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
    msg.setTimeStamp(0.903029028007);
    msg.setSource(24936U);
    msg.setSourceEntity(218U);
    msg.setDestination(31117U);
    msg.setDestinationEntity(204U);
    msg.op = 56U;

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
    msg.setTimeStamp(0.41704731445);
    msg.setSource(48361U);
    msg.setSourceEntity(7U);
    msg.setDestination(10967U);
    msg.setDestinationEntity(47U);
    msg.op = 236U;

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
    msg.setTimeStamp(0.559042573203);
    msg.setSource(8671U);
    msg.setSourceEntity(72U);
    msg.setDestination(31978U);
    msg.setDestinationEntity(91U);
    msg.value = 0.0273438828838;
    msg.confidence = 0.380128898815;
    msg.opmodes.assign("SRTYYIVDQXUHWMJSTUNPDMYTDZOSOOPEZTSFEUZMODALIRMTSRUKGJKISTFCOBCXGVDIPUNODIHQKODKRHJTIEGMBAFTENNBOJJPLGMWVEPGZZGRJSCMQCGLJJAZDRRWYQJAYHVXKFAXFBEQXHLNQTKXOYPICAXIZWQOCBGYFHUUAIDKHKGEXRPLCNEFMNFWDVCRWVVQHQABGCHKWFYHNECLBVAYEVMSUWXLNMJSNKPLWVUTZB");

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
    msg.setTimeStamp(0.700333841607);
    msg.setSource(37525U);
    msg.setSourceEntity(126U);
    msg.setDestination(4467U);
    msg.setDestinationEntity(181U);
    msg.value = 0.674818187363;
    msg.confidence = 0.498164149327;
    msg.opmodes.assign("ADNOAKLPHXGTVUYBKCEXZFXFAJZFEBEQGZBEOUGXPJDTHDHDRVCLMUJBV");

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
    msg.setTimeStamp(0.0699015688738);
    msg.setSource(56705U);
    msg.setSourceEntity(127U);
    msg.setDestination(27937U);
    msg.setDestinationEntity(149U);
    msg.value = 0.620993465912;
    msg.confidence = 0.896944152242;
    msg.opmodes.assign("VVNRMFUNMYQSJLANPSWBQQDZXSSGJNZDIZHENQFTYXSXJHOFWDEGIMYWCTDFZTYWGPLCEHZXNOSMDBZLJPLXUIKBESOPTXJFRWBA");

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
    msg.setTimeStamp(0.953627972034);
    msg.setSource(4631U);
    msg.setSourceEntity(44U);
    msg.setDestination(48248U);
    msg.setDestinationEntity(132U);
    msg.itow = 2148704185U;
    msg.lat = 0.934468001449;
    msg.lon = 0.194351750535;
    msg.height_ell = 0.191143999767;
    msg.height_sea = 0.288471439553;
    msg.hacc = 0.979342529935;
    msg.vacc = 0.188371453764;
    msg.vel_n = 0.139323618168;
    msg.vel_e = 0.536316437573;
    msg.vel_d = 0.297685411622;
    msg.speed = 0.35106962607;
    msg.gspeed = 0.817018749192;
    msg.heading = 0.153635078558;
    msg.sacc = 0.831197141496;
    msg.cacc = 0.234410002343;

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
    msg.setTimeStamp(0.807087146041);
    msg.setSource(48254U);
    msg.setSourceEntity(202U);
    msg.setDestination(60035U);
    msg.setDestinationEntity(82U);
    msg.itow = 1264432793U;
    msg.lat = 0.86229841807;
    msg.lon = 0.587088075545;
    msg.height_ell = 0.574287032717;
    msg.height_sea = 0.417051502325;
    msg.hacc = 0.691431191352;
    msg.vacc = 0.0879459197015;
    msg.vel_n = 0.0980049115151;
    msg.vel_e = 0.441510266904;
    msg.vel_d = 0.439420973039;
    msg.speed = 0.0411461985188;
    msg.gspeed = 0.867020325828;
    msg.heading = 0.383427513168;
    msg.sacc = 0.663597633367;
    msg.cacc = 0.80051283792;

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
    msg.setTimeStamp(0.520611968398);
    msg.setSource(8389U);
    msg.setSourceEntity(128U);
    msg.setDestination(23078U);
    msg.setDestinationEntity(216U);
    msg.itow = 3499335222U;
    msg.lat = 0.0177886911836;
    msg.lon = 0.0966000958027;
    msg.height_ell = 0.881362821909;
    msg.height_sea = 0.157724447965;
    msg.hacc = 0.605521725471;
    msg.vacc = 0.907085000764;
    msg.vel_n = 0.213316120192;
    msg.vel_e = 0.274442780529;
    msg.vel_d = 0.354743564682;
    msg.speed = 0.905984868474;
    msg.gspeed = 0.592458903614;
    msg.heading = 0.38971490441;
    msg.sacc = 0.312151716916;
    msg.cacc = 0.159878276635;

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
    msg.setTimeStamp(0.983627369377);
    msg.setSource(38557U);
    msg.setSourceEntity(201U);
    msg.setDestination(55048U);
    msg.setDestinationEntity(22U);
    msg.id = 10U;
    msg.value = 0.0558336848489;

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
    msg.setTimeStamp(0.33126451603);
    msg.setSource(1235U);
    msg.setSourceEntity(99U);
    msg.setDestination(39162U);
    msg.setDestinationEntity(25U);
    msg.id = 58U;
    msg.value = 0.44871967156;

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
    msg.setTimeStamp(0.63977681337);
    msg.setSource(61148U);
    msg.setSourceEntity(97U);
    msg.setDestination(30349U);
    msg.setDestinationEntity(49U);
    msg.id = 134U;
    msg.value = 0.609690258617;

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
    msg.setTimeStamp(0.0219669306842);
    msg.setSource(48094U);
    msg.setSourceEntity(208U);
    msg.setDestination(33464U);
    msg.setDestinationEntity(104U);
    msg.x = 0.905401983884;
    msg.y = 0.618312692749;
    msg.z = 0.857724174599;
    msg.phi = 0.954034075126;
    msg.theta = 0.571299598463;
    msg.psi = 0.721249490729;

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
    msg.setTimeStamp(0.877050175817);
    msg.setSource(5677U);
    msg.setSourceEntity(191U);
    msg.setDestination(43022U);
    msg.setDestinationEntity(54U);
    msg.x = 0.516564349633;
    msg.y = 0.372917158066;
    msg.z = 0.574278224394;
    msg.phi = 0.213592735243;
    msg.theta = 0.582983704536;
    msg.psi = 0.329050392631;

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
    msg.setTimeStamp(0.365262376897);
    msg.setSource(3615U);
    msg.setSourceEntity(165U);
    msg.setDestination(61524U);
    msg.setDestinationEntity(245U);
    msg.x = 0.73807476624;
    msg.y = 0.872997212083;
    msg.z = 0.957476579361;
    msg.phi = 0.356276343442;
    msg.theta = 0.67867664302;
    msg.psi = 0.0219884972829;

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
    msg.setTimeStamp(0.472268833311);
    msg.setSource(37520U);
    msg.setSourceEntity(44U);
    msg.setDestination(53764U);
    msg.setDestinationEntity(133U);
    msg.beam_width = 0.867021633619;
    msg.beam_height = 0.680495157837;

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
    msg.setTimeStamp(0.931233388699);
    msg.setSource(26804U);
    msg.setSourceEntity(221U);
    msg.setDestination(18679U);
    msg.setDestinationEntity(163U);
    msg.beam_width = 0.277042590162;
    msg.beam_height = 0.246315108471;

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
    msg.setTimeStamp(0.433718495788);
    msg.setSource(30074U);
    msg.setSourceEntity(21U);
    msg.setDestination(54866U);
    msg.setDestinationEntity(154U);
    msg.beam_width = 0.431896159914;
    msg.beam_height = 0.808838723697;

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
    msg.setTimeStamp(0.952541278727);
    msg.setSource(56791U);
    msg.setSourceEntity(203U);
    msg.setDestination(9722U);
    msg.setDestinationEntity(201U);
    msg.sane = 59U;

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
    msg.setTimeStamp(0.130366422544);
    msg.setSource(8763U);
    msg.setSourceEntity(98U);
    msg.setDestination(63427U);
    msg.setDestinationEntity(65U);
    msg.sane = 247U;

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
    msg.setTimeStamp(0.566507681466);
    msg.setSource(46959U);
    msg.setSourceEntity(104U);
    msg.setDestination(59250U);
    msg.setDestinationEntity(199U);
    msg.sane = 46U;

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
    msg.setTimeStamp(0.520182687473);
    msg.setSource(10332U);
    msg.setSourceEntity(87U);
    msg.setDestination(30308U);
    msg.setDestinationEntity(21U);
    msg.id = 196U;
    msg.zoom = 57U;
    msg.action = 119U;

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
    msg.setTimeStamp(0.690208781165);
    msg.setSource(11105U);
    msg.setSourceEntity(108U);
    msg.setDestination(57640U);
    msg.setDestinationEntity(190U);
    msg.id = 251U;
    msg.zoom = 6U;
    msg.action = 10U;

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
    msg.setTimeStamp(0.152740098071);
    msg.setSource(43234U);
    msg.setSourceEntity(163U);
    msg.setDestination(36644U);
    msg.setDestinationEntity(69U);
    msg.id = 218U;
    msg.zoom = 147U;
    msg.action = 120U;

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
    msg.setTimeStamp(0.651779954809);
    msg.setSource(16369U);
    msg.setSourceEntity(9U);
    msg.setDestination(55230U);
    msg.setDestinationEntity(155U);
    msg.id = 46U;
    msg.value = 0.618946690243;

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
    msg.setTimeStamp(0.597241770229);
    msg.setSource(16457U);
    msg.setSourceEntity(159U);
    msg.setDestination(21496U);
    msg.setDestinationEntity(197U);
    msg.id = 68U;
    msg.value = 0.238720602677;

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
    msg.setTimeStamp(0.358601588248);
    msg.setSource(37855U);
    msg.setSourceEntity(49U);
    msg.setDestination(41612U);
    msg.setDestinationEntity(39U);
    msg.id = 174U;
    msg.value = 0.273699288574;

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
    msg.setTimeStamp(0.192670364282);
    msg.setSource(56851U);
    msg.setSourceEntity(134U);
    msg.setDestination(4603U);
    msg.setDestinationEntity(2U);
    msg.id = 169U;
    msg.value = 0.344267250752;

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
    msg.setTimeStamp(0.164621638297);
    msg.setSource(9507U);
    msg.setSourceEntity(215U);
    msg.setDestination(64862U);
    msg.setDestinationEntity(181U);
    msg.id = 100U;
    msg.value = 0.737960600346;

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
    msg.setTimeStamp(0.517408609864);
    msg.setSource(53913U);
    msg.setSourceEntity(121U);
    msg.setDestination(967U);
    msg.setDestinationEntity(196U);
    msg.id = 149U;
    msg.value = 0.369088283992;

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
    msg.setTimeStamp(0.984311973957);
    msg.setSource(12896U);
    msg.setSourceEntity(178U);
    msg.setDestination(64896U);
    msg.setDestinationEntity(81U);
    msg.id = 70U;
    msg.angle = 0.729347016277;

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
    msg.setTimeStamp(0.637559446121);
    msg.setSource(11879U);
    msg.setSourceEntity(153U);
    msg.setDestination(21183U);
    msg.setDestinationEntity(176U);
    msg.id = 22U;
    msg.angle = 0.529702539006;

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
    msg.setTimeStamp(0.773072697659);
    msg.setSource(59373U);
    msg.setSourceEntity(98U);
    msg.setDestination(13645U);
    msg.setDestinationEntity(63U);
    msg.id = 127U;
    msg.angle = 0.687638060186;

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
    msg.setTimeStamp(0.845114506342);
    msg.setSource(22608U);
    msg.setSourceEntity(141U);
    msg.setDestination(32093U);
    msg.setDestinationEntity(156U);
    msg.op = 241U;
    msg.actions.assign("ROULEMNQDCABAEFAQCDLXBBXABGGLCZPROEHXYZPYWYDSYZOXCIKNRAVPWDYFCEPFNPTJPHJIVRGEETIQLRHOQGZUFYGJTTVQBOWVTXEYARGHGFFMEJNKGNURIOUSLNTVUDTXQMLNASUGSKZSWFLUSVSCEKVKHDDXRKZDUYKHSIPZOMINELGVZXPVLMMTCHIOWV");

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
    msg.setTimeStamp(0.474963649243);
    msg.setSource(2067U);
    msg.setSourceEntity(71U);
    msg.setDestination(51598U);
    msg.setDestinationEntity(49U);
    msg.op = 53U;
    msg.actions.assign("JWMYDOFNUWTOCQHRKIFFHVGYGWJMLNYKJOIQXNZGIJIKELEDRODMAJLYNQ");

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
    msg.setTimeStamp(0.801868789668);
    msg.setSource(18689U);
    msg.setSourceEntity(31U);
    msg.setDestination(38971U);
    msg.setDestinationEntity(34U);
    msg.op = 253U;
    msg.actions.assign("YAGQQKZOGAQTZVUIAFJWFYPUMCXDMVJCDKSMVQTZHXKLSHNTUMVXIJATQHYBLGDCMGBFKVOBVZGSTZKDQFMOOIPWKUIAHWMRTJMSCBQEHCTRYHAYAPXALZQEJNDUDKPIXHWIWERWGGWPUOQJOCOIAJECDSZPXUTHEHCLZIUNYRFYLRRRTNSJJLBISKYVVUYG");

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
    msg.setTimeStamp(0.0709830697417);
    msg.setSource(17278U);
    msg.setSourceEntity(252U);
    msg.setDestination(36045U);
    msg.setDestinationEntity(42U);
    msg.actions.assign("QUGKHWVPXEDJKTXZGMOCSRBLJGEWVZARUKGTYJILKBNMKIHFXIHTPZTXAERGGUFTYVJCTNWUREKEADSIAICFAEVSX");

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
    msg.setTimeStamp(0.0127528028807);
    msg.setSource(13200U);
    msg.setSourceEntity(87U);
    msg.setDestination(51804U);
    msg.setDestinationEntity(37U);
    msg.actions.assign("WUXOJTTLEODHYLUGBHANVUPCGIHZOCLSPAJNOFHQNCIKACBSBKKZBSQMMFPODEQQAFSWTPRDXNKIVLQZLLUPGBJMLECONGXOKNYEGAOSJXFYAZIRTUISVZVVCZHAYXUNTPSNYMVGCAWRUGYZSJCXEYDHBWEQKUVGMKWELJZFRUMFRJNYDOEPKJIVKPITRHGNPTYBGDXBYWEAQMIUTLHIFDROPTXRZFHDBTACSDQWR");

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
    msg.setTimeStamp(0.981361980501);
    msg.setSource(59192U);
    msg.setSourceEntity(235U);
    msg.setDestination(18239U);
    msg.setDestinationEntity(180U);
    msg.actions.assign("VPPLFZDZDTUMTQQHZKCEWJWXPDJSRNBHLIHCDJYXZQXCKESVYWPXGHSIGGSYBYUCEJDVBHUZYLEMYPLOHWNPKFTXBIZEVIQEREFNAFRSDRARIYCAETJTBMJBUNLOPKDBFUHZGBNGCNKSDTVUJQAFSAMXPUNICUCMVLORRYWSGTLJAAYXECVHUKAJKKMKIHBRIXRTQOZXDJMZOONFLPIOQTNUQXOWADWSGEGGVGWVYPMLIFRMQTSNZWKACO");

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
    msg.setTimeStamp(0.00463235790507);
    msg.setSource(34722U);
    msg.setSourceEntity(174U);
    msg.setDestination(22616U);
    msg.setDestinationEntity(23U);
    msg.button = 144U;
    msg.value = 174U;

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
    msg.setTimeStamp(0.448896787716);
    msg.setSource(48010U);
    msg.setSourceEntity(112U);
    msg.setDestination(63149U);
    msg.setDestinationEntity(11U);
    msg.button = 197U;
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
    msg.setTimeStamp(0.0900588181673);
    msg.setSource(16337U);
    msg.setSourceEntity(198U);
    msg.setDestination(44150U);
    msg.setDestinationEntity(159U);
    msg.button = 173U;
    msg.value = 52U;

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
    msg.setTimeStamp(0.492318187235);
    msg.setSource(48207U);
    msg.setSourceEntity(0U);
    msg.setDestination(34398U);
    msg.setDestinationEntity(251U);
    msg.op = 26U;
    msg.text.assign("TAUHTOZGDWKHYNBGMSHKSHLLJFKOICENJSQWXVPZUCKTFVRTXKXGEILRVMFYNSWSBYFGXYLTARBBXLDPJDWKPMKBFRVKQSNZINTIQRMHFRDMA");

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
    msg.setTimeStamp(0.11239542122);
    msg.setSource(24507U);
    msg.setSourceEntity(133U);
    msg.setDestination(12666U);
    msg.setDestinationEntity(214U);
    msg.op = 162U;
    msg.text.assign("DNZAQBBTMZVWNJIJEVNCFEWXOMZEJHULDAPNPNNQYQAY");

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
    msg.setTimeStamp(0.289088215198);
    msg.setSource(20526U);
    msg.setSourceEntity(110U);
    msg.setDestination(19780U);
    msg.setDestinationEntity(199U);
    msg.op = 144U;
    msg.text.assign("YLTRSIDBDUKBEOUCHGFLCICYHGMURTFPBLLYITUZERUJJTVVXHHQXBUMLJICAWANDYNVJHPEEVRHNHBJAETDPFGNQPZGNQISDLYVMAHAOYDLDUMTBWXOSTSAOMXPXLGVNFPKBTDAQSKSWRQEZAEZFSDLJRWTOJGPNOKGXFZCPVKKERUQCSABGPFFIEVBXIZGYQWZJWKSMQOXMITBMCRYRCNKCMXQCMYSXUJWIAVRLNZWKVWJPUKIHFH");

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
    msg.setTimeStamp(0.829069259018);
    msg.setSource(39423U);
    msg.setSourceEntity(148U);
    msg.setDestination(34512U);
    msg.setDestinationEntity(103U);
    msg.op = 180U;
    msg.time_remain = 0.679122417199;
    msg.sched_time = 0.695282512675;

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
    msg.setTimeStamp(0.997907565199);
    msg.setSource(39515U);
    msg.setSourceEntity(190U);
    msg.setDestination(21039U);
    msg.setDestinationEntity(111U);
    msg.op = 3U;
    msg.time_remain = 0.197144567102;
    msg.sched_time = 0.661035821513;

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
    msg.setTimeStamp(0.978917440143);
    msg.setSource(64759U);
    msg.setSourceEntity(247U);
    msg.setDestination(43833U);
    msg.setDestinationEntity(241U);
    msg.op = 39U;
    msg.time_remain = 0.72969771437;
    msg.sched_time = 0.50556841541;

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
    msg.setTimeStamp(0.623908698493);
    msg.setSource(12123U);
    msg.setSourceEntity(11U);
    msg.setDestination(41172U);
    msg.setDestinationEntity(181U);
    msg.name.assign("KSYITMTUTFASPUMWULINJPZXHEFGHMLBCECRGWSUXSADRXHLJIVWATRWJCHNHZVCNFYUJECUVMVQLFOZEDEOKXMBEAPPKJIDGUHAIOWXNKJGGNTSPDSNGJWMRMERQVRGLHVYF");
    msg.op = 155U;
    msg.sched_time = 0.473805673402;

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
    msg.setTimeStamp(0.681159533991);
    msg.setSource(16883U);
    msg.setSourceEntity(134U);
    msg.setDestination(990U);
    msg.setDestinationEntity(120U);
    msg.name.assign("EUADNIITJABZYAZUYOKLYLQWCEZUTXZMAJFDCFWRBSSAFIMLEVTPCMFUFJ");
    msg.op = 181U;
    msg.sched_time = 0.191242792561;

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
    msg.setTimeStamp(0.525416283381);
    msg.setSource(58500U);
    msg.setSourceEntity(225U);
    msg.setDestination(7915U);
    msg.setDestinationEntity(133U);
    msg.name.assign("GRBSMHZFYUACNQZYLRA");
    msg.op = 196U;
    msg.sched_time = 0.533347402823;

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
    msg.setTimeStamp(0.362378040576);
    msg.setSource(19865U);
    msg.setSourceEntity(194U);
    msg.setDestination(31952U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.986933847556);
    msg.setSource(34962U);
    msg.setSourceEntity(221U);
    msg.setDestination(38502U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.433841185104);
    msg.setSource(10170U);
    msg.setSourceEntity(179U);
    msg.setDestination(58668U);
    msg.setDestinationEntity(226U);

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
    msg.setTimeStamp(0.427111091261);
    msg.setSource(50071U);
    msg.setSourceEntity(37U);
    msg.setDestination(26188U);
    msg.setDestinationEntity(237U);
    msg.name.assign("APUYXYFALXYBNMKFBKYBJSWHDECNVMVBYTRPLWDFGTLNQLOHBWPISKXIKTUABTRHQPHDJMGWGNSOBNLDEVEAIWFCTRAKTVREMIUHLODAGZSPZJRQWAXXSQGHVZUOOXKZXGITJICNVHMFTUYURMMZSLENDPZAZGMJZFBKDSHWECJCQIYSVPINTPOOKQWYKBFHJYTPGREHAQWJCFPOWUJIXUCVDBKDACXGGFSQUQRMRCEILFSVLONYCVUNEOLJX");
    msg.state = 114U;

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
    msg.setTimeStamp(0.233650804037);
    msg.setSource(58972U);
    msg.setSourceEntity(89U);
    msg.setDestination(22278U);
    msg.setDestinationEntity(201U);
    msg.name.assign("OAVMZYGYUSNJFOIVHOXUSRLOOPDGFSVJVYXFILBDGXTFMMOWIUVXCCWWHTXIWJZCJKEMEHRJLOASDGPGBTRJQDCRMWUTLRUMRPSJUPBIUXGHNXPRBSUYWQHZBINEFCJIECDSSAAKDYDAEVVQZRMFNFFENKHEHPILQDVAKFNLRAMZWNLOKDPMTNXBTMAGWSBOTEVZXYQWZTYTCSEAEHBZDN");
    msg.state = 174U;

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
    msg.setTimeStamp(0.675382364373);
    msg.setSource(41128U);
    msg.setSourceEntity(141U);
    msg.setDestination(28541U);
    msg.setDestinationEntity(215U);
    msg.name.assign("UGNUJJGDWYJE");
    msg.state = 99U;

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
    msg.setTimeStamp(0.753447431639);
    msg.setSource(48189U);
    msg.setSourceEntity(95U);
    msg.setDestination(36630U);
    msg.setDestinationEntity(53U);
    msg.name.assign("ZIVJYMXBTRMMUZNJUDVYWPYTMDBSRDKNJPLPZSJPLMXAOEBMFQRITUVUKLGBNNNVUMZLKIEERDDHWMWOJLISAWEHYVFGYAXGFIGOEDETYQDEICTYCDSONALQPSXOFNHFUOKXCRSSQOWZYKYP");
    msg.value = 195U;

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
    msg.setTimeStamp(0.87222935471);
    msg.setSource(51685U);
    msg.setSourceEntity(30U);
    msg.setDestination(4350U);
    msg.setDestinationEntity(198U);
    msg.name.assign("IJLESPOAIUPUJGCRUWGVUXCJCDWGCDOHWSBVXFULYTGKFTPLAXJZYZARJLMRXNIDNCVSTGZIAQUNNXRBFVTPDRLRBZNDAEHMZHAOSBWNQKMFGJHMWOMYZHBMXCXKQOJQSQKGAYCTADQWRFYSFIYBHVOTFVSDLKRL");
    msg.value = 198U;

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
    msg.setTimeStamp(0.806045696561);
    msg.setSource(56064U);
    msg.setSourceEntity(194U);
    msg.setDestination(19838U);
    msg.setDestinationEntity(235U);
    msg.name.assign("XMMUCLYJHTETNJSSWXECAEQNROJYKALXLUWHCAESIIWXVHWOWXIJXDUCABQDLYNMVBNIKYBBCGQKGGKTEQMZTGBVYDQUBENBHFNGOMWFUAWONIZRHBNFHIVPHPUGZXCFMAGSYDOJMHGJSOTTLJDUCJZBPXKWEYTUCLRADAZPIORVWFPUMIPQNDJNGXZCDHYFILRFZBRSORLDMTLKSTWHRPYZV");
    msg.value = 208U;

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
    msg.setTimeStamp(0.358104050085);
    msg.setSource(18768U);
    msg.setSourceEntity(135U);
    msg.setDestination(10578U);
    msg.setDestinationEntity(103U);
    msg.name.assign("RQZVBKKSXAHFZEQSBMFOMGRMCPYNORQENXPAOIYGK");

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
    msg.setTimeStamp(0.697128733024);
    msg.setSource(9574U);
    msg.setSourceEntity(1U);
    msg.setDestination(31403U);
    msg.setDestinationEntity(160U);
    msg.name.assign("GAFXXMEPUBCUTZXDRMXKFYNOOAOVQCQQIBYYUOUDQHLXTCVIT");

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
    msg.setTimeStamp(0.231402261557);
    msg.setSource(41970U);
    msg.setSourceEntity(134U);
    msg.setDestination(51914U);
    msg.setDestinationEntity(254U);
    msg.name.assign("ZOSRPSQZYFK");

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
    msg.setTimeStamp(0.4058826525);
    msg.setSource(44845U);
    msg.setSourceEntity(67U);
    msg.setDestination(54077U);
    msg.setDestinationEntity(158U);
    msg.name.assign("QAWZPKLIMHSTOBPNTBUUJAQJLBHDUBQOIABUZVRXCYW");
    msg.value = 246U;

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
    msg.setTimeStamp(0.969809736866);
    msg.setSource(595U);
    msg.setSourceEntity(131U);
    msg.setDestination(334U);
    msg.setDestinationEntity(61U);
    msg.name.assign("WOYZWYFDKMPGTJGTMFARIOAUBLV");
    msg.value = 63U;

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
    msg.setTimeStamp(0.878629738498);
    msg.setSource(43951U);
    msg.setSourceEntity(144U);
    msg.setDestination(48527U);
    msg.setDestinationEntity(120U);
    msg.name.assign("OSRPBAKAFBCTYBMXKUCQRSFJDBJNQOAUHHSPFCVESPPQFLIREEVLMINPUDRGDHPABJJGSNJXDICXUUZKGWZLUCMEMRTPREFOQGFVJMYGKOITSQVFQIKBACEXYKQHYZOYJUPVJWQNLWJHXRCNYWZNTWCLYKFTILLBVAOFUHSXCNLGVDWKIADGXZBXBRDLOHEORGMGEXASDZ");
    msg.value = 98U;

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
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.66107675377);
    msg.setSource(14515U);
    msg.setSourceEntity(64U);
    msg.setDestination(62468U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.937848299019;
    msg.lon = 0.490948434336;
    msg.height = 0.866750676794;
    msg.x = 0.72354491621;
    msg.y = 0.00637495405328;
    msg.z = 0.083509966179;
    msg.phi = 0.493254616412;
    msg.theta = 0.230659530336;
    msg.psi = 0.0274947431505;
    msg.u = 0.367374553284;
    msg.v = 0.494304448096;
    msg.w = 0.489072419331;
    msg.vx = 0.119406901836;
    msg.vy = 0.0667252843625;
    msg.vz = 0.913568013281;
    msg.p = 0.09222645093;
    msg.q = 0.305688521791;
    msg.r = 0.344963072534;
    msg.depth = 0.888636541731;
    msg.alt = 0.37901788567;

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
    msg.setTimeStamp(0.503991058484);
    msg.setSource(16971U);
    msg.setSourceEntity(164U);
    msg.setDestination(64872U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.441721249064;
    msg.lon = 0.824258962832;
    msg.height = 0.572522287088;
    msg.x = 0.186750078436;
    msg.y = 0.932717912799;
    msg.z = 0.508253869127;
    msg.phi = 0.461562671366;
    msg.theta = 0.539245501318;
    msg.psi = 0.705981441099;
    msg.u = 0.428916569316;
    msg.v = 0.318017038016;
    msg.w = 0.428263823643;
    msg.vx = 0.360939716858;
    msg.vy = 0.246203703794;
    msg.vz = 0.502323238187;
    msg.p = 0.58548188013;
    msg.q = 0.238540328871;
    msg.r = 0.519447480872;
    msg.depth = 0.0615104259282;
    msg.alt = 0.248502578209;

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
    msg.setTimeStamp(0.409136052031);
    msg.setSource(28052U);
    msg.setSourceEntity(53U);
    msg.setDestination(58833U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.518365864859;
    msg.lon = 0.450909431156;
    msg.height = 0.860407027813;
    msg.x = 0.516803993627;
    msg.y = 0.696695360673;
    msg.z = 0.962041421509;
    msg.phi = 0.997933394659;
    msg.theta = 0.0956176595261;
    msg.psi = 0.42766223761;
    msg.u = 0.620897880717;
    msg.v = 0.546133705153;
    msg.w = 0.098645711534;
    msg.vx = 0.0380318169988;
    msg.vy = 0.116180827464;
    msg.vz = 0.692284667204;
    msg.p = 0.435090688756;
    msg.q = 0.875075370137;
    msg.r = 0.934832895888;
    msg.depth = 0.700263541725;
    msg.alt = 0.467874902858;

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
    msg.setTimeStamp(0.638881447807);
    msg.setSource(22167U);
    msg.setSourceEntity(18U);
    msg.setDestination(34354U);
    msg.setDestinationEntity(6U);
    msg.x = 0.568789574522;
    msg.y = 0.454361679488;
    msg.z = 0.0922744810721;

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
    msg.setTimeStamp(0.0459292185881);
    msg.setSource(63684U);
    msg.setSourceEntity(62U);
    msg.setDestination(2294U);
    msg.setDestinationEntity(208U);
    msg.x = 0.722397239578;
    msg.y = 0.252758727453;
    msg.z = 0.863980578724;

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
    msg.setTimeStamp(0.36472815931);
    msg.setSource(19787U);
    msg.setSourceEntity(201U);
    msg.setDestination(12430U);
    msg.setDestinationEntity(122U);
    msg.x = 0.993550197352;
    msg.y = 0.638319199322;
    msg.z = 0.729352966037;

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
    msg.setTimeStamp(0.510388558358);
    msg.setSource(26245U);
    msg.setSourceEntity(172U);
    msg.setDestination(45580U);
    msg.setDestinationEntity(136U);
    msg.value = 0.38458189774;

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
    msg.setTimeStamp(0.0575218634893);
    msg.setSource(36824U);
    msg.setSourceEntity(70U);
    msg.setDestination(54555U);
    msg.setDestinationEntity(46U);
    msg.value = 0.990053732128;

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
    msg.setTimeStamp(0.926847636363);
    msg.setSource(50383U);
    msg.setSourceEntity(94U);
    msg.setDestination(48182U);
    msg.setDestinationEntity(181U);
    msg.value = 0.832461893544;

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
    msg.setTimeStamp(0.0709819906515);
    msg.setSource(24607U);
    msg.setSourceEntity(76U);
    msg.setDestination(49710U);
    msg.setDestinationEntity(207U);
    msg.value = 0.061353821196;

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
    msg.setTimeStamp(0.881725955021);
    msg.setSource(3654U);
    msg.setSourceEntity(189U);
    msg.setDestination(8134U);
    msg.setDestinationEntity(97U);
    msg.value = 0.641629780886;

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
    msg.setTimeStamp(0.145043774569);
    msg.setSource(12080U);
    msg.setSourceEntity(46U);
    msg.setDestination(10035U);
    msg.setDestinationEntity(70U);
    msg.value = 0.879714197871;

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
    msg.setTimeStamp(0.326850883654);
    msg.setSource(19896U);
    msg.setSourceEntity(254U);
    msg.setDestination(7850U);
    msg.setDestinationEntity(156U);
    msg.x = 0.304862856286;
    msg.y = 0.933561584525;
    msg.z = 0.550421056504;
    msg.phi = 0.698872970535;
    msg.theta = 0.140266226987;
    msg.psi = 0.165078825926;
    msg.p = 0.63953614244;
    msg.q = 0.168186031427;
    msg.r = 0.921667739691;
    msg.u = 0.914338826854;
    msg.v = 0.422991271304;
    msg.w = 0.0488641767456;
    msg.bias_psi = 0.111982810954;
    msg.bias_r = 0.457758822376;

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
    msg.setTimeStamp(0.294995287628);
    msg.setSource(16383U);
    msg.setSourceEntity(29U);
    msg.setDestination(15605U);
    msg.setDestinationEntity(13U);
    msg.x = 0.160995319255;
    msg.y = 0.375380663667;
    msg.z = 0.466587678297;
    msg.phi = 0.720298800383;
    msg.theta = 0.0683141752753;
    msg.psi = 0.0836431942344;
    msg.p = 0.0125987023559;
    msg.q = 0.50628127154;
    msg.r = 0.340323627475;
    msg.u = 0.11848665578;
    msg.v = 0.318757936627;
    msg.w = 0.655643596813;
    msg.bias_psi = 0.623080024261;
    msg.bias_r = 0.286436289212;

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
    msg.setTimeStamp(0.985913278802);
    msg.setSource(28299U);
    msg.setSourceEntity(3U);
    msg.setDestination(55496U);
    msg.setDestinationEntity(64U);
    msg.x = 0.903024525346;
    msg.y = 0.983884208931;
    msg.z = 0.833924260466;
    msg.phi = 0.560175325382;
    msg.theta = 0.105038765271;
    msg.psi = 0.829355282143;
    msg.p = 0.859867200766;
    msg.q = 0.0142365090214;
    msg.r = 0.707323383828;
    msg.u = 0.764538912701;
    msg.v = 0.374151758484;
    msg.w = 0.29177090883;
    msg.bias_psi = 0.358325568311;
    msg.bias_r = 0.76197940876;

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
    msg.setTimeStamp(0.636128186482);
    msg.setSource(39191U);
    msg.setSourceEntity(119U);
    msg.setDestination(51905U);
    msg.setDestinationEntity(156U);
    msg.bias_psi = 0.521881109203;
    msg.bias_r = 0.0612558129828;
    msg.cog = 0.956223711548;
    msg.cyaw = 0.536675658649;
    msg.lbl_rej_level = 0.309170072445;
    msg.gps_rej_level = 0.35004466291;
    msg.custom_x = 0.234515183134;
    msg.custom_y = 0.398062365716;
    msg.custom_z = 0.595633371349;

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
    msg.setTimeStamp(0.461506570758);
    msg.setSource(40963U);
    msg.setSourceEntity(28U);
    msg.setDestination(10467U);
    msg.setDestinationEntity(36U);
    msg.bias_psi = 0.927040861983;
    msg.bias_r = 0.479067027656;
    msg.cog = 0.817243625759;
    msg.cyaw = 0.447112592476;
    msg.lbl_rej_level = 0.436019559978;
    msg.gps_rej_level = 0.33855327718;
    msg.custom_x = 0.029055775196;
    msg.custom_y = 0.204258964443;
    msg.custom_z = 0.617313833089;

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
    msg.setTimeStamp(0.0918977380304);
    msg.setSource(49747U);
    msg.setSourceEntity(185U);
    msg.setDestination(20086U);
    msg.setDestinationEntity(140U);
    msg.bias_psi = 0.287959715694;
    msg.bias_r = 0.497063523389;
    msg.cog = 0.833906094831;
    msg.cyaw = 0.703818238029;
    msg.lbl_rej_level = 0.322653964476;
    msg.gps_rej_level = 0.203536428669;
    msg.custom_x = 0.217326609405;
    msg.custom_y = 0.191478304076;
    msg.custom_z = 0.749588910248;

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
    msg.setTimeStamp(0.360358990171);
    msg.setSource(19464U);
    msg.setSourceEntity(160U);
    msg.setDestination(47813U);
    msg.setDestinationEntity(253U);
    msg.utc_time = 0.323767951074;
    msg.reason = 212U;

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
    msg.setTimeStamp(0.805629638028);
    msg.setSource(1903U);
    msg.setSourceEntity(172U);
    msg.setDestination(11249U);
    msg.setDestinationEntity(191U);
    msg.utc_time = 0.962346816986;
    msg.reason = 125U;

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
    msg.setTimeStamp(0.866927689795);
    msg.setSource(46435U);
    msg.setSourceEntity(203U);
    msg.setDestination(53667U);
    msg.setDestinationEntity(125U);
    msg.utc_time = 0.126870970799;
    msg.reason = 95U;

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
    msg.setTimeStamp(0.945920210265);
    msg.setSource(55944U);
    msg.setSourceEntity(180U);
    msg.setDestination(29365U);
    msg.setDestinationEntity(10U);
    msg.id = 123U;
    msg.range = 0.750064859438;
    msg.acceptance = 184U;

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
    msg.setTimeStamp(0.211200655038);
    msg.setSource(35301U);
    msg.setSourceEntity(53U);
    msg.setDestination(61719U);
    msg.setDestinationEntity(52U);
    msg.id = 201U;
    msg.range = 0.831663435979;
    msg.acceptance = 122U;

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
    msg.setTimeStamp(0.371150575981);
    msg.setSource(36191U);
    msg.setSourceEntity(227U);
    msg.setDestination(4074U);
    msg.setDestinationEntity(87U);
    msg.id = 203U;
    msg.range = 0.577990887471;
    msg.acceptance = 152U;

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
    msg.setTimeStamp(0.87537746487);
    msg.setSource(58123U);
    msg.setSourceEntity(54U);
    msg.setDestination(15638U);
    msg.setDestinationEntity(101U);
    msg.type = 12U;
    msg.reason = 152U;
    msg.value = 0.902026843188;
    msg.timestep = 0.661023574238;

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
    msg.setTimeStamp(0.102334357167);
    msg.setSource(7211U);
    msg.setSourceEntity(8U);
    msg.setDestination(50637U);
    msg.setDestinationEntity(237U);
    msg.type = 78U;
    msg.reason = 233U;
    msg.value = 0.889587887879;
    msg.timestep = 0.241631891244;

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
    msg.setTimeStamp(0.727471373067);
    msg.setSource(2619U);
    msg.setSourceEntity(249U);
    msg.setDestination(10545U);
    msg.setDestinationEntity(83U);
    msg.type = 215U;
    msg.reason = 68U;
    msg.value = 0.572249235191;
    msg.timestep = 0.365082370551;

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
    msg.setTimeStamp(0.780013516199);
    msg.setSource(58177U);
    msg.setSourceEntity(92U);
    msg.setDestination(22367U);
    msg.setDestinationEntity(241U);

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
    msg.setTimeStamp(0.309833724953);
    msg.setSource(52065U);
    msg.setSourceEntity(170U);
    msg.setDestination(4689U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.742914913489);
    msg.setSource(1071U);
    msg.setSourceEntity(63U);
    msg.setDestination(42431U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.535842458513);
    msg.setSource(3224U);
    msg.setSourceEntity(23U);
    msg.setDestination(39408U);
    msg.setDestinationEntity(223U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HXOKLOZEDCHOHQPQSYMZTEDEMWTXGTLFA");
    tmp_msg_0.lat = 0.758343684473;
    tmp_msg_0.lon = 0.807472988007;
    tmp_msg_0.depth = 0.724951053464;
    tmp_msg_0.query_channel = 203U;
    tmp_msg_0.reply_channel = 87U;
    tmp_msg_0.transponder_delay = 136U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.478499381941;
    msg.y = 0.240624165223;
    msg.var_x = 0.208948785851;
    msg.var_y = 0.682821700245;
    msg.distance = 0.808256675601;

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
    msg.setTimeStamp(0.468190052194);
    msg.setSource(16496U);
    msg.setSourceEntity(80U);
    msg.setDestination(1620U);
    msg.setDestinationEntity(68U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("TXWVEDLRIBYOIHFOPYYTLECNHCWBYWORQNKSPWQMVZPFZIINUSZEQGTWBLRULRFPPKJJXZUARMMEBYQGPJCMDRNUZECDXHEIRWDMIWTJJGCWLMFREJDTBBDTKJLSCTUZDYRMZG");
    tmp_msg_0.lat = 0.799501616228;
    tmp_msg_0.lon = 0.738640499232;
    tmp_msg_0.depth = 0.435113526801;
    tmp_msg_0.query_channel = 166U;
    tmp_msg_0.reply_channel = 89U;
    tmp_msg_0.transponder_delay = 107U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.10335027872;
    msg.y = 0.525533518815;
    msg.var_x = 0.939914773186;
    msg.var_y = 0.682109257566;
    msg.distance = 0.776024253952;

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
    msg.setTimeStamp(0.275291214952);
    msg.setSource(38466U);
    msg.setSourceEntity(97U);
    msg.setDestination(3914U);
    msg.setDestinationEntity(12U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("HWJZOGXFCEUNZVVCYNIXBXNOBFTWCDMZXSHESFRDWANQDUAPOCXXVIZLLKVJJENRQAPCWRYAMIYCXLNWVRVLDJGWSBUKNZOQZHM");
    tmp_msg_0.lat = 0.735127382042;
    tmp_msg_0.lon = 0.974155428584;
    tmp_msg_0.depth = 0.768549676465;
    tmp_msg_0.query_channel = 47U;
    tmp_msg_0.reply_channel = 91U;
    tmp_msg_0.transponder_delay = 40U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.803133993814;
    msg.y = 0.189201406511;
    msg.var_x = 0.516397236253;
    msg.var_y = 0.0285411137263;
    msg.distance = 0.888937333764;

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
    msg.setTimeStamp(0.873818165926);
    msg.setSource(59937U);
    msg.setSourceEntity(229U);
    msg.setDestination(64326U);
    msg.setDestinationEntity(249U);
    msg.state = 174U;

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
    msg.setTimeStamp(0.720492392679);
    msg.setSource(65046U);
    msg.setSourceEntity(25U);
    msg.setDestination(59026U);
    msg.setDestinationEntity(211U);
    msg.state = 156U;

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
    msg.setTimeStamp(0.66299181157);
    msg.setSource(12456U);
    msg.setSourceEntity(155U);
    msg.setDestination(37385U);
    msg.setDestinationEntity(103U);
    msg.state = 165U;

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
    msg.setTimeStamp(0.0421048058878);
    msg.setSource(64536U);
    msg.setSourceEntity(122U);
    msg.setDestination(60852U);
    msg.setDestinationEntity(146U);
    msg.x = 0.377503331536;
    msg.y = 0.383718470663;
    msg.z = 0.317232514961;

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
    msg.setTimeStamp(0.454392316744);
    msg.setSource(31623U);
    msg.setSourceEntity(151U);
    msg.setDestination(22464U);
    msg.setDestinationEntity(211U);
    msg.x = 0.84483567764;
    msg.y = 0.350635275733;
    msg.z = 0.88130197407;

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
    msg.setTimeStamp(0.184340671869);
    msg.setSource(5366U);
    msg.setSourceEntity(181U);
    msg.setDestination(36857U);
    msg.setDestinationEntity(185U);
    msg.x = 0.978076655913;
    msg.y = 0.112916908982;
    msg.z = 0.00432138619013;

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
    msg.setTimeStamp(0.768977303335);
    msg.setSource(31884U);
    msg.setSourceEntity(151U);
    msg.setDestination(10824U);
    msg.setDestinationEntity(196U);
    msg.value = 0.165167573954;

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
    msg.setTimeStamp(0.529831763004);
    msg.setSource(6765U);
    msg.setSourceEntity(160U);
    msg.setDestination(52015U);
    msg.setDestinationEntity(144U);
    msg.value = 0.737398186213;

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
    msg.setTimeStamp(0.882398555456);
    msg.setSource(45724U);
    msg.setSourceEntity(15U);
    msg.setDestination(7751U);
    msg.setDestinationEntity(50U);
    msg.value = 0.884359241864;

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
    msg.setTimeStamp(0.290516983299);
    msg.setSource(34767U);
    msg.setSourceEntity(66U);
    msg.setDestination(18274U);
    msg.setDestinationEntity(248U);
    msg.value = 0.701091105338;
    msg.z_units = 79U;

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
    msg.setTimeStamp(0.937542313791);
    msg.setSource(20715U);
    msg.setSourceEntity(96U);
    msg.setDestination(13212U);
    msg.setDestinationEntity(129U);
    msg.value = 0.23133433589;
    msg.z_units = 170U;

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
    msg.setTimeStamp(0.978177482065);
    msg.setSource(9083U);
    msg.setSourceEntity(253U);
    msg.setDestination(58779U);
    msg.setDestinationEntity(1U);
    msg.value = 0.215583439576;
    msg.z_units = 115U;

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
    msg.setTimeStamp(0.701083616853);
    msg.setSource(20147U);
    msg.setSourceEntity(157U);
    msg.setDestination(30808U);
    msg.setDestinationEntity(150U);
    msg.value = 0.224088708455;
    msg.speed_units = 119U;

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
    msg.setTimeStamp(0.873126812064);
    msg.setSource(18869U);
    msg.setSourceEntity(133U);
    msg.setDestination(61924U);
    msg.setDestinationEntity(5U);
    msg.value = 0.646660178514;
    msg.speed_units = 88U;

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
    msg.setTimeStamp(0.0705058018837);
    msg.setSource(40993U);
    msg.setSourceEntity(63U);
    msg.setDestination(60018U);
    msg.setDestinationEntity(147U);
    msg.value = 0.587817030692;
    msg.speed_units = 37U;

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
    msg.setTimeStamp(0.429898803197);
    msg.setSource(5614U);
    msg.setSourceEntity(46U);
    msg.setDestination(18561U);
    msg.setDestinationEntity(149U);
    msg.value = 0.694360969313;

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
    msg.setTimeStamp(0.591312644092);
    msg.setSource(37328U);
    msg.setSourceEntity(182U);
    msg.setDestination(4688U);
    msg.setDestinationEntity(161U);
    msg.value = 0.278437854002;

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
    msg.setTimeStamp(0.0020994748194);
    msg.setSource(60451U);
    msg.setSourceEntity(251U);
    msg.setDestination(3052U);
    msg.setDestinationEntity(156U);
    msg.value = 0.389899226473;

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
    msg.setTimeStamp(0.89755920925);
    msg.setSource(60420U);
    msg.setSourceEntity(162U);
    msg.setDestination(34148U);
    msg.setDestinationEntity(1U);
    msg.value = 0.831236071813;

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
    msg.setTimeStamp(0.944471433687);
    msg.setSource(47847U);
    msg.setSourceEntity(178U);
    msg.setDestination(2325U);
    msg.setDestinationEntity(179U);
    msg.value = 0.594377882651;

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
    msg.setTimeStamp(0.940939954923);
    msg.setSource(31111U);
    msg.setSourceEntity(25U);
    msg.setDestination(49691U);
    msg.setDestinationEntity(235U);
    msg.value = 0.698826388695;

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
    msg.setTimeStamp(0.110764044814);
    msg.setSource(462U);
    msg.setSourceEntity(41U);
    msg.setDestination(18006U);
    msg.setDestinationEntity(75U);
    msg.value = 0.0178951663828;

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
    msg.setTimeStamp(0.106798793209);
    msg.setSource(38246U);
    msg.setSourceEntity(211U);
    msg.setDestination(24279U);
    msg.setDestinationEntity(89U);
    msg.value = 0.954260948883;

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
    msg.setTimeStamp(0.0993900026625);
    msg.setSource(61323U);
    msg.setSourceEntity(188U);
    msg.setDestination(28474U);
    msg.setDestinationEntity(193U);
    msg.value = 0.384629589432;

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
    msg.setTimeStamp(0.24146490278);
    msg.setSource(61112U);
    msg.setSourceEntity(10U);
    msg.setDestination(12700U);
    msg.setDestinationEntity(194U);
    msg.start_lat = 0.987801028379;
    msg.start_lon = 0.533672224167;
    msg.start_z = 0.610587514461;
    msg.start_z_units = 18U;
    msg.end_lat = 0.277983108532;
    msg.end_lon = 0.527206196678;
    msg.end_z = 0.317904902993;
    msg.end_z_units = 73U;
    msg.speed = 0.330656588461;
    msg.speed_units = 213U;
    msg.lradius = 0.414952769055;
    msg.flags = 51U;

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
    msg.setTimeStamp(0.616701055789);
    msg.setSource(43486U);
    msg.setSourceEntity(52U);
    msg.setDestination(34753U);
    msg.setDestinationEntity(14U);
    msg.start_lat = 0.100226133151;
    msg.start_lon = 0.807157493223;
    msg.start_z = 0.289459522938;
    msg.start_z_units = 143U;
    msg.end_lat = 0.094510439479;
    msg.end_lon = 0.0640144173314;
    msg.end_z = 0.530841342311;
    msg.end_z_units = 47U;
    msg.speed = 0.0600908536532;
    msg.speed_units = 139U;
    msg.lradius = 0.391786134531;
    msg.flags = 213U;

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
    msg.setTimeStamp(0.798038120359);
    msg.setSource(12198U);
    msg.setSourceEntity(55U);
    msg.setDestination(13331U);
    msg.setDestinationEntity(103U);
    msg.start_lat = 0.411082190194;
    msg.start_lon = 0.521180720688;
    msg.start_z = 0.925866378922;
    msg.start_z_units = 138U;
    msg.end_lat = 0.901390610345;
    msg.end_lon = 0.121898514996;
    msg.end_z = 0.40535528974;
    msg.end_z_units = 111U;
    msg.speed = 0.489801355693;
    msg.speed_units = 204U;
    msg.lradius = 0.30567264828;
    msg.flags = 118U;

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
    msg.setTimeStamp(0.558467605686);
    msg.setSource(59611U);
    msg.setSourceEntity(125U);
    msg.setDestination(15854U);
    msg.setDestinationEntity(140U);
    msg.x = 0.743235372579;
    msg.y = 0.00941480607866;
    msg.z = 0.888380647787;
    msg.k = 0.0474646900396;
    msg.m = 0.755918387492;
    msg.n = 0.184170793424;
    msg.flags = 83U;

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
    msg.setTimeStamp(0.889960410013);
    msg.setSource(26314U);
    msg.setSourceEntity(132U);
    msg.setDestination(14611U);
    msg.setDestinationEntity(172U);
    msg.x = 0.0519801139476;
    msg.y = 0.219742472945;
    msg.z = 0.949735457293;
    msg.k = 0.978852262684;
    msg.m = 0.99540782174;
    msg.n = 0.701522322242;
    msg.flags = 160U;

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
    msg.setTimeStamp(0.744692423429);
    msg.setSource(6323U);
    msg.setSourceEntity(239U);
    msg.setDestination(52198U);
    msg.setDestinationEntity(85U);
    msg.x = 0.45618301658;
    msg.y = 0.19734792452;
    msg.z = 0.328219997277;
    msg.k = 0.637653112302;
    msg.m = 0.954585764123;
    msg.n = 0.363185645584;
    msg.flags = 84U;

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
    msg.setTimeStamp(0.195325827733);
    msg.setSource(52435U);
    msg.setSourceEntity(205U);
    msg.setDestination(56542U);
    msg.setDestinationEntity(11U);
    msg.value = 0.957364061367;

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
    msg.setTimeStamp(0.0302916390392);
    msg.setSource(41672U);
    msg.setSourceEntity(158U);
    msg.setDestination(38657U);
    msg.setDestinationEntity(36U);
    msg.value = 0.669085003258;

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
    msg.setTimeStamp(0.495846310586);
    msg.setSource(707U);
    msg.setSourceEntity(165U);
    msg.setDestination(15367U);
    msg.setDestinationEntity(203U);
    msg.value = 0.791191626872;

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
    msg.setTimeStamp(0.34322363011);
    msg.setSource(24313U);
    msg.setSourceEntity(127U);
    msg.setDestination(7170U);
    msg.setDestinationEntity(70U);
    msg.u = 0.777691958354;
    msg.v = 0.337291966;
    msg.w = 0.0932806899573;
    msg.p = 0.663884430016;
    msg.q = 0.595252669027;
    msg.r = 0.115574393695;
    msg.flags = 155U;

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
    msg.setTimeStamp(0.460897230261);
    msg.setSource(23358U);
    msg.setSourceEntity(78U);
    msg.setDestination(9412U);
    msg.setDestinationEntity(166U);
    msg.u = 0.881603986295;
    msg.v = 0.87240515338;
    msg.w = 0.126849039758;
    msg.p = 0.58785825867;
    msg.q = 0.114028327395;
    msg.r = 0.463715889703;
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
    msg.setTimeStamp(0.6414252026);
    msg.setSource(31513U);
    msg.setSourceEntity(0U);
    msg.setDestination(64156U);
    msg.setDestinationEntity(134U);
    msg.u = 0.793245377899;
    msg.v = 0.862703776303;
    msg.w = 0.939166232427;
    msg.p = 0.500049989504;
    msg.q = 0.0551027542541;
    msg.r = 0.559321713272;
    msg.flags = 56U;

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
    msg.setTimeStamp(0.218160996525);
    msg.setSource(64695U);
    msg.setSourceEntity(89U);
    msg.setDestination(14785U);
    msg.setDestinationEntity(165U);
    msg.start_lat = 0.432695394933;
    msg.start_lon = 0.396252797293;
    msg.start_z = 0.667571029728;
    msg.start_z_units = 40U;
    msg.end_lat = 0.720319350726;
    msg.end_lon = 0.769246982836;
    msg.end_z = 0.298701554725;
    msg.end_z_units = 93U;
    msg.lradius = 0.34835758729;
    msg.flags = 142U;
    msg.x = 0.452044486429;
    msg.y = 0.625507377827;
    msg.z = 0.165614803195;
    msg.vx = 0.732800985418;
    msg.vy = 0.340694705379;
    msg.vz = 0.529961268914;
    msg.course_error = 0.663512786436;
    msg.eta = 24248U;

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
    msg.setTimeStamp(0.394778119579);
    msg.setSource(7783U);
    msg.setSourceEntity(103U);
    msg.setDestination(56884U);
    msg.setDestinationEntity(87U);
    msg.start_lat = 0.891547448192;
    msg.start_lon = 0.355155707505;
    msg.start_z = 0.305705402077;
    msg.start_z_units = 5U;
    msg.end_lat = 0.760015444541;
    msg.end_lon = 0.525165485628;
    msg.end_z = 0.699803977652;
    msg.end_z_units = 225U;
    msg.lradius = 0.789739098625;
    msg.flags = 182U;
    msg.x = 0.087813919623;
    msg.y = 0.479205418641;
    msg.z = 0.0375164767886;
    msg.vx = 0.55674634735;
    msg.vy = 0.861632538282;
    msg.vz = 0.681599348226;
    msg.course_error = 0.919780885418;
    msg.eta = 29144U;

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
    msg.setTimeStamp(0.324197533576);
    msg.setSource(27625U);
    msg.setSourceEntity(158U);
    msg.setDestination(39714U);
    msg.setDestinationEntity(23U);
    msg.start_lat = 0.515463354651;
    msg.start_lon = 0.983302421071;
    msg.start_z = 0.000253171756137;
    msg.start_z_units = 174U;
    msg.end_lat = 0.0789460948246;
    msg.end_lon = 0.358713610717;
    msg.end_z = 0.48610195402;
    msg.end_z_units = 148U;
    msg.lradius = 0.21634297277;
    msg.flags = 230U;
    msg.x = 0.71077856249;
    msg.y = 0.897434173779;
    msg.z = 0.131206290776;
    msg.vx = 0.689692368584;
    msg.vy = 0.895329129879;
    msg.vz = 0.351492192508;
    msg.course_error = 0.344793412087;
    msg.eta = 49032U;

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
    msg.setTimeStamp(0.16544656541);
    msg.setSource(65229U);
    msg.setSourceEntity(157U);
    msg.setDestination(18451U);
    msg.setDestinationEntity(13U);
    msg.k = 0.465010717221;
    msg.m = 0.0261911477327;
    msg.n = 0.929651273015;

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
    msg.setTimeStamp(0.136563234781);
    msg.setSource(28916U);
    msg.setSourceEntity(194U);
    msg.setDestination(50718U);
    msg.setDestinationEntity(225U);
    msg.k = 0.0381232378322;
    msg.m = 0.422286280875;
    msg.n = 0.988496422466;

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
    msg.setTimeStamp(0.22122896544);
    msg.setSource(45127U);
    msg.setSourceEntity(182U);
    msg.setDestination(58021U);
    msg.setDestinationEntity(114U);
    msg.k = 0.638402940745;
    msg.m = 0.435679620377;
    msg.n = 0.62379777908;

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
    msg.setTimeStamp(0.55374858619);
    msg.setSource(63940U);
    msg.setSourceEntity(201U);
    msg.setDestination(24257U);
    msg.setDestinationEntity(111U);
    msg.p = 0.0277049151839;
    msg.i = 0.576590880066;
    msg.d = 0.6904836946;
    msg.a = 0.667083674968;

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
    msg.setTimeStamp(0.0420021205615);
    msg.setSource(11264U);
    msg.setSourceEntity(173U);
    msg.setDestination(41848U);
    msg.setDestinationEntity(60U);
    msg.p = 0.766871448378;
    msg.i = 0.515285326919;
    msg.d = 0.127833437519;
    msg.a = 0.185335428841;

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
    msg.setTimeStamp(0.23753198902);
    msg.setSource(62148U);
    msg.setSourceEntity(103U);
    msg.setDestination(33483U);
    msg.setDestinationEntity(40U);
    msg.p = 0.47812461154;
    msg.i = 0.334221175875;
    msg.d = 0.129734694809;
    msg.a = 0.220730557602;

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
    msg.setTimeStamp(0.127598328994);
    msg.setSource(29132U);
    msg.setSourceEntity(33U);
    msg.setDestination(20283U);
    msg.setDestinationEntity(162U);
    msg.op = 110U;

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
    msg.setTimeStamp(0.210886679977);
    msg.setSource(57155U);
    msg.setSourceEntity(102U);
    msg.setDestination(64421U);
    msg.setDestinationEntity(70U);
    msg.op = 30U;

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
    msg.setTimeStamp(0.855360965837);
    msg.setSource(4718U);
    msg.setSourceEntity(84U);
    msg.setDestination(56845U);
    msg.setDestinationEntity(237U);
    msg.op = 55U;

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
    msg.setTimeStamp(0.93537846309);
    msg.setSource(44636U);
    msg.setSourceEntity(86U);
    msg.setDestination(29157U);
    msg.setDestinationEntity(38U);
    msg.timeout = 5101U;
    msg.lat = 0.539665322785;
    msg.lon = 0.22561915448;
    msg.z = 0.509027455939;
    msg.z_units = 218U;
    msg.speed = 0.0536807713859;
    msg.speed_units = 155U;
    msg.roll = 0.681166587847;
    msg.pitch = 0.223180005513;
    msg.yaw = 0.310576644203;
    msg.custom.assign("BUZDPRSSOWBCINWQPQVYGKZXEVTFWLOPBCRXPNGEGOTBGPZQZGUIFNARTWKZIINMPTUDYKLRRCFAJJXNPZHYXNQSJGVAYRBVSEXWXONDQIJGKEUCCDQWEPJRUMFIONLYRZLSJDTHBYJUWEKKKZMWSHLAMVIJLQBRSLXQIGDXHMWRCHONIASKHAGHUEEHYMFUCEGOELYBDXTT");

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
    msg.setTimeStamp(0.284939036741);
    msg.setSource(37563U);
    msg.setSourceEntity(220U);
    msg.setDestination(63849U);
    msg.setDestinationEntity(42U);
    msg.timeout = 59653U;
    msg.lat = 0.334268399428;
    msg.lon = 0.523207506981;
    msg.z = 0.665936624853;
    msg.z_units = 87U;
    msg.speed = 0.255550310172;
    msg.speed_units = 219U;
    msg.roll = 0.400907411654;
    msg.pitch = 0.280486610491;
    msg.yaw = 0.584468984875;
    msg.custom.assign("RMDVXCSHRFIFVVNHESGNWHCBAUAKACBEHQHTIQMEPGJPRRJOLZYUPPSGQKLZCYQFBIWDPNTMPWXVLISBOXRXKAOVEOJTPOUXSZNUQJKCUFAZXCQXIDSRIJFIKVYKTWRFWUTDHBSZJZYGCWYQYAPUMAHHWTDYEHMWDZLATMDLABFWKZEEGNGSKNYAJEDOXMOXFGTFLLDLVVCEIBLODWOR");

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
    msg.setTimeStamp(0.518036702237);
    msg.setSource(13148U);
    msg.setSourceEntity(154U);
    msg.setDestination(50881U);
    msg.setDestinationEntity(9U);
    msg.timeout = 16010U;
    msg.lat = 0.73737856988;
    msg.lon = 0.904826642508;
    msg.z = 0.655557072207;
    msg.z_units = 48U;
    msg.speed = 0.379172319713;
    msg.speed_units = 174U;
    msg.roll = 0.250987168165;
    msg.pitch = 0.610222170339;
    msg.yaw = 0.726214771723;
    msg.custom.assign("YLCALVTUPHLVYBVIAJVKRZSJZDNXMWYZFOYMLGUURRNQEFNXWHYCLCGLVEUXJX");

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
    msg.setTimeStamp(0.218622991517);
    msg.setSource(5874U);
    msg.setSourceEntity(103U);
    msg.setDestination(44535U);
    msg.setDestinationEntity(191U);
    msg.timeout = 53952U;
    msg.lat = 0.226902223725;
    msg.lon = 0.637811805157;
    msg.z = 0.70660668177;
    msg.z_units = 254U;
    msg.speed = 0.170811890724;
    msg.speed_units = 75U;
    msg.duration = 42471U;
    msg.radius = 0.477416692873;
    msg.flags = 207U;
    msg.custom.assign("QSIGWNATORXOISCUWMQLPBDDHWTUXNSLNECISELQSOMLMGVEOPFFNOBYPRVAWQCCQKRUZEYEK");

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
    msg.setTimeStamp(0.0577977540006);
    msg.setSource(64167U);
    msg.setSourceEntity(26U);
    msg.setDestination(9331U);
    msg.setDestinationEntity(191U);
    msg.timeout = 8752U;
    msg.lat = 0.621867368569;
    msg.lon = 0.774205810311;
    msg.z = 0.129770313388;
    msg.z_units = 229U;
    msg.speed = 0.737946833793;
    msg.speed_units = 198U;
    msg.duration = 61919U;
    msg.radius = 0.702920483998;
    msg.flags = 159U;
    msg.custom.assign("NFBCKTPPRXNHGICKNFJPHDMWBXQLOBYDXHDSWQXKBOOKFEUMVREURVYVZVSKHDTBJJMNLCHGSZISTNERGNAPCOOZQTJ");

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
    msg.setTimeStamp(0.873395655272);
    msg.setSource(2882U);
    msg.setSourceEntity(188U);
    msg.setDestination(20887U);
    msg.setDestinationEntity(62U);
    msg.timeout = 38645U;
    msg.lat = 0.655016072361;
    msg.lon = 0.10401148885;
    msg.z = 0.33542765753;
    msg.z_units = 176U;
    msg.speed = 0.593431286911;
    msg.speed_units = 201U;
    msg.duration = 43320U;
    msg.radius = 0.625737993966;
    msg.flags = 29U;
    msg.custom.assign("HNMYVSRIDVCYEDAXREGHFCGBAQQISUXQDYRFWXWDYQNTKZLIWDNNVTXYEUNHIVGOKTPGPCKHZDLBGPCAETSQSJPFZEZAGODDOTEBSVAEKFFXJQPJNYMLBKPWUCWGFREHALCJHJCXQKMHCCLADERPUSMOJTFOJBGNLIYYKSFBZVSPONKWVUAGJUBVMJQQBUC");

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
    msg.setTimeStamp(0.836791062494);
    msg.setSource(4744U);
    msg.setSourceEntity(45U);
    msg.setDestination(21246U);
    msg.setDestinationEntity(5U);
    msg.custom.assign("YVBQLYCVXZWGHJQJQKBKQRWPIUNBELFDRYPNJNRWBWYHLTSUXJFQBCHXMKSITMAGCOYTQUFWHVNEKNTMUZBVYFLDOGWQOPLPGLEVSPUKSIIGAIJNNXGFDMMLHP");

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
    msg.setTimeStamp(0.125106317436);
    msg.setSource(54251U);
    msg.setSourceEntity(247U);
    msg.setDestination(22205U);
    msg.setDestinationEntity(208U);
    msg.custom.assign("TNKMXILVJGGJUUCOBPFVLNEFIJZVDUMQALHRULHQKMRDVNTFLUSHWVFSXNTBOSBPWFYGUOOYHBJOLRRTISKYHHGMTRJZGESJTFAUGAPYKCCXGDUWWHCWTPQSDFSZTFQIBFUYHMVLECAQPGDDEJNQIRAYEBKYCWZEYRGALKWJNVXDKZWVABSDBXXQPQSOIPMQHAMWEBKVKIOLKMBLICXZZIOANJOPFPJDQTAIRPRXMEE");

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
    msg.setTimeStamp(0.718198533237);
    msg.setSource(8545U);
    msg.setSourceEntity(30U);
    msg.setDestination(13071U);
    msg.setDestinationEntity(183U);
    msg.custom.assign("CZJNSPYOOKKAXQJFDDTRXUFHZMSTBFGMROWJLYPKQEQGIJHYKHCRCGEBGOITFCEQYWLIALZYYPXDNJMITVBVCACMBZKUUPOZDGVUWEBGEKUPBLFMQOTZYQJNTAVXAHBYCHPYSWVHRJBEVZCFNVWRHRTXFCKRNXNSLVHAMQWIXUTPGHJXRALFUIUKSOLZDESIPJJPOIXLDDOBXYLBFQUSQGESNNAPSMMW");

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
    msg.setTimeStamp(0.418902959308);
    msg.setSource(46524U);
    msg.setSourceEntity(129U);
    msg.setDestination(32378U);
    msg.setDestinationEntity(85U);
    msg.timeout = 5005U;
    msg.lat = 0.843302801452;
    msg.lon = 0.470505624891;
    msg.z = 0.0327991140273;
    msg.z_units = 139U;
    msg.duration = 33624U;
    msg.speed = 0.38083401169;
    msg.speed_units = 191U;
    msg.type = 147U;
    msg.radius = 0.244296058361;
    msg.length = 0.326874515944;
    msg.bearing = 0.339966843432;
    msg.direction = 179U;
    msg.custom.assign("VACXDWSRWHWOVQTXULJPKQRQPMKKWIOFILERSAOFKLTVUHXNWTQMMEIENHBRPBYMMMIFHRBNBXNSBNLZZHHPMFVSFUQIYBJUCPYIKCPORCYLHJVWAPFANSXWLZQUGIPNXAANGGIFNVCCZTYRTDDAKOSPMEBKZWJJATFGOFQTLGQOYQMRBKWJXUBGHEPUERAXVXSRDLDCYOZKZNCYSEJFGEJGJLKLSWJOYDVDXEO");

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
    msg.setTimeStamp(0.461058471225);
    msg.setSource(59285U);
    msg.setSourceEntity(145U);
    msg.setDestination(27932U);
    msg.setDestinationEntity(43U);
    msg.timeout = 20719U;
    msg.lat = 0.998997786992;
    msg.lon = 0.643291107835;
    msg.z = 0.915932701929;
    msg.z_units = 156U;
    msg.duration = 50732U;
    msg.speed = 0.23906725842;
    msg.speed_units = 113U;
    msg.type = 0U;
    msg.radius = 0.0731977857511;
    msg.length = 0.850518518145;
    msg.bearing = 0.558367809778;
    msg.direction = 39U;
    msg.custom.assign("UZXVDKRWBCVDUDBDFBEWDLEOHOQRYMCFFTNSSEMLMDGVLMNTPOYREXAKNO");

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
    msg.setTimeStamp(0.8503070505);
    msg.setSource(49850U);
    msg.setSourceEntity(1U);
    msg.setDestination(38038U);
    msg.setDestinationEntity(115U);
    msg.timeout = 36163U;
    msg.lat = 0.127933220169;
    msg.lon = 0.650656666264;
    msg.z = 0.764578487532;
    msg.z_units = 106U;
    msg.duration = 46508U;
    msg.speed = 0.280465268729;
    msg.speed_units = 215U;
    msg.type = 194U;
    msg.radius = 0.368432414966;
    msg.length = 0.149634420172;
    msg.bearing = 0.193650069071;
    msg.direction = 101U;
    msg.custom.assign("SVWYOVEDQSG");

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
    msg.setTimeStamp(0.356497727071);
    msg.setSource(24826U);
    msg.setSourceEntity(168U);
    msg.setDestination(26398U);
    msg.setDestinationEntity(211U);
    msg.duration = 65275U;
    msg.custom.assign("ISEZRFMLZGVSTTPACNZZZBPKXELL");

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
    msg.setTimeStamp(0.743267924388);
    msg.setSource(13635U);
    msg.setSourceEntity(98U);
    msg.setDestination(23315U);
    msg.setDestinationEntity(189U);
    msg.duration = 11740U;
    msg.custom.assign("VMAJBJNWAOMOFXSHQYJVVPOZMUCOKLZMEXNTCIUVUGOYBKQLHTRSTWLQNHQCLYYDKEUGBPNBSXLVTZYHHQJHILWAAOEVIRRYYZPXGCPFNXVNRVHKEWEOFQSLRRNDDKDPFLIWNHGXYKBJOUPGGWMXQJBCAPMNHSPTWKKABCCNGUDMRFCCSKUCTBSDWFVJEOUTSZZLMQRZZVUUWISMWFGLTADXYKXDIMOJTZSJP");

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
    msg.setTimeStamp(0.568290356424);
    msg.setSource(515U);
    msg.setSourceEntity(38U);
    msg.setDestination(9812U);
    msg.setDestinationEntity(75U);
    msg.duration = 1484U;
    msg.custom.assign("RLWSNMDSFHZGPVBMDVHNXTLRRMGWMNIYVJCVZVINPPWIKSCMKRVTDZTSZRUEAWQMOVULTTHHYBFZOADRXKUKCLCCGLSZYVFGSTVLDUEDWYCGTYLYISPDY");

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
    msg.setTimeStamp(0.382798456939);
    msg.setSource(36287U);
    msg.setSourceEntity(191U);
    msg.setDestination(4000U);
    msg.setDestinationEntity(238U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.start_lat = 0.121576598714;
    tmp_msg_0.start_lon = 0.95382579877;
    tmp_msg_0.start_z = 0.455073739428;
    tmp_msg_0.start_z_units = 242U;
    tmp_msg_0.end_lat = 0.327854638861;
    tmp_msg_0.end_lon = 0.47011690727;
    tmp_msg_0.end_z = 0.0819155561541;
    tmp_msg_0.end_z_units = 186U;
    tmp_msg_0.speed = 0.792703692946;
    tmp_msg_0.speed_units = 149U;
    tmp_msg_0.lradius = 0.661395132316;
    tmp_msg_0.flags = 242U;
    msg.control.set(tmp_msg_0);
    msg.duration = 11034U;
    msg.custom.assign("IXFCZDFHNKPJSWDDZNOXAKPMCATMTOBXGGBUUVOIDASYUVFGNQQMSQWQZRYXVKLLOUFXUGZD");

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
    msg.setTimeStamp(0.888421822432);
    msg.setSource(6235U);
    msg.setSourceEntity(9U);
    msg.setDestination(30122U);
    msg.setDestinationEntity(58U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.210798412187;
    msg.control.set(tmp_msg_0);
    msg.duration = 58036U;
    msg.custom.assign("MUSMWXNAPKPLAJNLULIKMSZKQCUBQNAHGFZJFOIFTSKLOGKBZRZOTYGPZASQFFAGDYIQOWYZDCOYOTTCQOLSWRUUJBPATVEPIUWFMNDXNDKGRKEOVXMEVYVTTIVXFCHWYNEEHQRCAWRSDRXIPYRNOUTLJQCDMSBXETFYGPVBQPTZHWCKXLAUSHZCAULVZBEHHBQKNNZUIIGOJDNDFJMJEIXCGGWFSHCXVQYJSREPV");

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
    msg.setTimeStamp(0.857780350352);
    msg.setSource(36961U);
    msg.setSourceEntity(218U);
    msg.setDestination(50320U);
    msg.setDestinationEntity(0U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.51585933041;
    msg.control.set(tmp_msg_0);
    msg.duration = 64182U;
    msg.custom.assign("AFTMQSVXETDVWNRUOTMDUHGTWOYKBNMBURSDVXNPHWPMXZKZCUMILBCGULHAIDTPQQVFCRQJEPZNNBVTETJZIDUJYKNIYDGKAQOHSCGCKXSFPTRVCGMNYLHXUJEQTEWRGHGPFEJSQZEWIDFQOCMGOJEOASYZMBWHOFYWBNCAJSIYZILGRBQCUXJDONBBRKA");

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
    msg.setTimeStamp(0.178844309658);
    msg.setSource(54290U);
    msg.setSourceEntity(37U);
    msg.setDestination(37733U);
    msg.setDestinationEntity(96U);
    msg.timeout = 50278U;
    msg.lat = 0.580549855344;
    msg.lon = 0.789926458666;
    msg.z = 0.602682067684;
    msg.z_units = 61U;
    msg.speed = 0.832328821233;
    msg.speed_units = 89U;
    msg.bearing = 0.825226184366;
    msg.cross_angle = 0.898138774312;
    msg.width = 0.789160447706;
    msg.length = 0.404014756856;
    msg.hstep = 0.673360412762;
    msg.coff = 233U;
    msg.alternation = 143U;
    msg.flags = 225U;
    msg.custom.assign("WTLQZMALOKPNSFYZRYACEAJYGZUTOZHRCLJVFHPNKKMIHUWOFTFTGSNWHKTDDQKKOWMOPBGORMDCGTUHYAVARWERGIIYPLFHRUHLTQLIJQXHWAYMJBBVBDQUDEKMBCEJQZDUPXPIOEGVRDFCFJBTXBKULGNVFDDNVBMPENNSNEHOLUVRWUMCAXBSAECEJPJVP");

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
    msg.setTimeStamp(0.861199307527);
    msg.setSource(44824U);
    msg.setSourceEntity(86U);
    msg.setDestination(25605U);
    msg.setDestinationEntity(224U);
    msg.timeout = 16926U;
    msg.lat = 0.376999273464;
    msg.lon = 0.648521605814;
    msg.z = 0.662969056441;
    msg.z_units = 172U;
    msg.speed = 0.969181314157;
    msg.speed_units = 22U;
    msg.bearing = 0.418657990396;
    msg.cross_angle = 0.725356014869;
    msg.width = 0.905611214165;
    msg.length = 0.105598055223;
    msg.hstep = 0.471465930818;
    msg.coff = 222U;
    msg.alternation = 12U;
    msg.flags = 220U;
    msg.custom.assign("BGIJCIFDSXYFUXODIXIZDFSPCQTIWRZOLYHAJSSBPQCWQEXEQSOGAQVLOWGRTVYVIV");

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
    msg.setTimeStamp(0.1615921241);
    msg.setSource(17577U);
    msg.setSourceEntity(32U);
    msg.setDestination(12795U);
    msg.setDestinationEntity(237U);
    msg.timeout = 34404U;
    msg.lat = 0.827398671583;
    msg.lon = 0.139167130318;
    msg.z = 0.691723483578;
    msg.z_units = 225U;
    msg.speed = 0.656678059606;
    msg.speed_units = 217U;
    msg.bearing = 0.546138400519;
    msg.cross_angle = 0.719381164186;
    msg.width = 0.316946455157;
    msg.length = 0.819183436176;
    msg.hstep = 0.030430852203;
    msg.coff = 198U;
    msg.alternation = 199U;
    msg.flags = 225U;
    msg.custom.assign("UFYFRVIBGZTVVXGAMWTXLMZBCRBJAQWLNHGTHSWA");

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
    msg.setTimeStamp(0.111018001793);
    msg.setSource(54218U);
    msg.setSourceEntity(138U);
    msg.setDestination(37354U);
    msg.setDestinationEntity(233U);
    msg.timeout = 57432U;
    msg.lat = 0.952700861284;
    msg.lon = 0.969052078596;
    msg.z = 0.593803958445;
    msg.z_units = 43U;
    msg.speed = 0.0808215654262;
    msg.speed_units = 41U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.124255528019;
    tmp_msg_0.y = 0.721386627247;
    tmp_msg_0.z = 0.508279626817;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("IYOOWVDHHISSNUHDKRGXWOXRFMZSHIMMXLNHJTVDKFNLRGYBFBFCBORQLLZPBQRURFNDNCCADJBQRWEGKGVYRZNEOOMJBUQHYPOELLWSUYELUNCEJZGWEFTUAOFCWATDCAVQNLFQIWVHAFABOEZ");

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
    msg.setTimeStamp(0.0777500626992);
    msg.setSource(35728U);
    msg.setSourceEntity(128U);
    msg.setDestination(14378U);
    msg.setDestinationEntity(250U);
    msg.timeout = 23118U;
    msg.lat = 0.364735329829;
    msg.lon = 0.281778344095;
    msg.z = 0.346188843198;
    msg.z_units = 184U;
    msg.speed = 0.9270287098;
    msg.speed_units = 153U;
    msg.custom.assign("SVMJQRLALMZSOPIEQUYSKHAHLDTMGJURMNRJHNMGUYJTFEHDBXLAYFIUMWWOPQOXXKPIZQTWVIFKPCVYQTIINRUKNZOVYUBTWENKTISGWXLHZFJVUXPOMGCXYRBBZJMJDSYUQVNBNQIAHWLLEGTOXSZEGCGCAPAAFEKVQVRYWDFOSUSBBCCZWCKABJDODFPHROGDOFTEJKCPXWTNDRDPCZVYTKGMHIINGDLUELYNPSERBKXQBHAXSZAHRFJLW");

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
    msg.setTimeStamp(0.604596265475);
    msg.setSource(31384U);
    msg.setSourceEntity(120U);
    msg.setDestination(3990U);
    msg.setDestinationEntity(216U);
    msg.timeout = 30197U;
    msg.lat = 0.238908635492;
    msg.lon = 0.306841787108;
    msg.z = 0.444059516804;
    msg.z_units = 178U;
    msg.speed = 0.867141467178;
    msg.speed_units = 161U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.951121969178;
    tmp_msg_0.y = 0.951675507387;
    tmp_msg_0.z = 0.821110635186;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UJBETWPDQJWPOFTEMAKRQQLUFVTLRLNJQHEJSAOAUUCPFQWGNGGEZWOUIVPBPWDJIVDUBMSALLCLAQCCXGOHHNROZHYZESUPZFWGNIZVIWVJDPRDCYXDXFWOHXTRNFLMQXMYYZWHDIRAEXHABEBVYBALHKRTBEOIMQTJKVFCOVQKGNMSDRWACMKYOKXZRXKTVSXIIDJJYLNCMZCGHKGVESBEYRCTZSUPKFUONISFTFBDZTKLYMPQSGMAI");

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
    msg.setTimeStamp(0.623939665491);
    msg.setSource(56246U);
    msg.setSourceEntity(217U);
    msg.setDestination(10867U);
    msg.setDestinationEntity(4U);
    msg.x = 0.991998386482;
    msg.y = 0.599773939541;
    msg.z = 0.543255993362;

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
    msg.setTimeStamp(0.836696375399);
    msg.setSource(52110U);
    msg.setSourceEntity(210U);
    msg.setDestination(37581U);
    msg.setDestinationEntity(150U);
    msg.x = 0.190684353827;
    msg.y = 0.202871797849;
    msg.z = 0.173080839018;

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
    msg.setTimeStamp(0.158616237631);
    msg.setSource(35427U);
    msg.setSourceEntity(198U);
    msg.setDestination(39737U);
    msg.setDestinationEntity(225U);
    msg.x = 0.179396902792;
    msg.y = 0.805050110946;
    msg.z = 0.404909277912;

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
    msg.setTimeStamp(0.861871543394);
    msg.setSource(49688U);
    msg.setSourceEntity(49U);
    msg.setDestination(10094U);
    msg.setDestinationEntity(24U);
    msg.timeout = 26833U;
    msg.lat = 0.822118343479;
    msg.lon = 0.878079641289;
    msg.z = 0.939714868677;
    msg.z_units = 68U;
    msg.amplitude = 0.514279804934;
    msg.pitch = 0.103459803795;
    msg.speed = 0.705320993566;
    msg.speed_units = 249U;
    msg.custom.assign("XQSNXCLOPIOLPFKGWRDZALOUQEJEGOVAMJZWEEIGODTBEFRTFWSAECKJVVHJPUSFITXBWLNKGSOTZWPB");

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
    msg.setTimeStamp(0.827442450088);
    msg.setSource(10129U);
    msg.setSourceEntity(192U);
    msg.setDestination(60777U);
    msg.setDestinationEntity(117U);
    msg.timeout = 12035U;
    msg.lat = 0.542854038718;
    msg.lon = 0.462795796564;
    msg.z = 0.176653548802;
    msg.z_units = 247U;
    msg.amplitude = 0.936945571474;
    msg.pitch = 0.179093166246;
    msg.speed = 0.852405254026;
    msg.speed_units = 96U;
    msg.custom.assign("VCJYTLPBATNZGSIBOZLPVXXPHIUXIQMBLCEMNPSPCUCLNVOWKGXMUKRFBLVLRQSPNUZUGADBDJDAEONBJQJQCUYHROCOISTFYJHYANXPCJEDPIWANLEEGMHNVMRXAXHKYQSZBRGYKHTYFSGAUMNFZBJHVWVBGMMTCCQK");

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
    msg.setTimeStamp(0.385176090872);
    msg.setSource(65296U);
    msg.setSourceEntity(146U);
    msg.setDestination(2246U);
    msg.setDestinationEntity(37U);
    msg.timeout = 7321U;
    msg.lat = 0.540846752578;
    msg.lon = 0.13455333909;
    msg.z = 0.617421686908;
    msg.z_units = 199U;
    msg.amplitude = 0.920631904931;
    msg.pitch = 0.366365368787;
    msg.speed = 0.321625276529;
    msg.speed_units = 227U;
    msg.custom.assign("UKTWSAFUVQLXDARDIRDWVMNOEZNQHYYYSUKRKSPLEMFKOFXQNBESRGBLOFAIMAJENXRLGDLUZGTITZOFAPYPMVHJYNFSCMEKWNOFIEPSXKGDKJNEPOIRMPPUDCZWDBRNXTNHIOHVDGWBZUFBWXAZIYLCSOIKLJBLJVAHCWZCDCPYGHQQAMBCTIGXJMYDTLFTGASCXOTFEGJUCWOJLRJBYVCIWTXMVUBXRKUMWRQJHZQQ");

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
    msg.setTimeStamp(0.39302221066);
    msg.setSource(13330U);
    msg.setSourceEntity(16U);
    msg.setDestination(1509U);
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
    msg.setTimeStamp(0.0223562438633);
    msg.setSource(55646U);
    msg.setSourceEntity(231U);
    msg.setDestination(55117U);
    msg.setDestinationEntity(150U);

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
    msg.setTimeStamp(0.0676115088073);
    msg.setSource(34535U);
    msg.setSourceEntity(160U);
    msg.setDestination(58136U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.679963221352);
    msg.setSource(57930U);
    msg.setSourceEntity(168U);
    msg.setDestination(13821U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.0812593613035;
    msg.lon = 0.276646997133;
    msg.z = 0.403384337786;
    msg.z_units = 146U;
    msg.radius = 0.203054964954;
    msg.duration = 54024U;
    msg.speed = 0.921938415512;
    msg.speed_units = 235U;
    msg.custom.assign("IMCOLRVARASAFIOYJFRBTOPKZECMXYSPSXBBVBYJNFQZLIQTWCHTAYIKPKSXWODDONRMTDGPDNQZRDKDLQFBXGGCRVPRLQZFSDGPASQUJYURPZENIYFJVUBHFNIUOJCVMAYYNTXRZGZQOXTJKSWU");

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
    msg.setTimeStamp(0.678549956751);
    msg.setSource(19783U);
    msg.setSourceEntity(29U);
    msg.setDestination(46812U);
    msg.setDestinationEntity(16U);
    msg.lat = 0.566286747935;
    msg.lon = 0.415442862759;
    msg.z = 0.193309779746;
    msg.z_units = 134U;
    msg.radius = 0.399709365811;
    msg.duration = 40265U;
    msg.speed = 0.718686752581;
    msg.speed_units = 128U;
    msg.custom.assign("GDYSCXCOTERPGMASTXGJDYAEUHJBIRFZDVVXFQNDXWGOKGYJTBJYEQIQCWEWHSIKTELGUPIQHYTZJOFSVVVOKLQRYQUPUJJDPMLDHNYFXKAMTTUPNJAVFLNHMHUXBVUBNL");

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
    msg.setTimeStamp(0.279522950721);
    msg.setSource(44045U);
    msg.setSourceEntity(84U);
    msg.setDestination(15972U);
    msg.setDestinationEntity(64U);
    msg.lat = 0.32948782369;
    msg.lon = 0.623238072292;
    msg.z = 0.388053740589;
    msg.z_units = 144U;
    msg.radius = 0.0140299223386;
    msg.duration = 36295U;
    msg.speed = 0.65828486588;
    msg.speed_units = 203U;
    msg.custom.assign("WDKPQFAHCJEWJFIBIEICUNZDRVLUSDPANYMNBEVGPHDVHXYCMAXHCRZBMXQTEGZHJCWWNADQBWHJBHYKU");

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
    msg.setTimeStamp(0.964002998725);
    msg.setSource(52557U);
    msg.setSourceEntity(202U);
    msg.setDestination(65364U);
    msg.setDestinationEntity(30U);
    msg.timeout = 22278U;
    msg.flags = 239U;
    msg.lat = 0.659291882408;
    msg.lon = 0.364625712221;
    msg.start_z = 0.0802015725779;
    msg.start_z_units = 236U;
    msg.end_z = 0.981020775441;
    msg.end_z_units = 245U;
    msg.radius = 0.931281729357;
    msg.speed = 0.673780670511;
    msg.speed_units = 191U;
    msg.custom.assign("QTCQHEJATCPBIVWNWNJLKIWWAEQANPLGNYPBRONUSYZKDPFILDEOTVVBXYOKCQCGNIDGAPOJOGSVPLJJLOGONLSSUWUBLJYXZYFVMHUEVYGYKDCTZVOJZWCJBCDIHEGGXAWEXZKDTHDITXQEWUFVUKRVH");

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
    msg.setTimeStamp(0.372467248511);
    msg.setSource(53606U);
    msg.setSourceEntity(9U);
    msg.setDestination(44075U);
    msg.setDestinationEntity(143U);
    msg.timeout = 57576U;
    msg.flags = 20U;
    msg.lat = 0.211124459304;
    msg.lon = 0.4907934615;
    msg.start_z = 0.689149673269;
    msg.start_z_units = 61U;
    msg.end_z = 0.510572113687;
    msg.end_z_units = 67U;
    msg.radius = 0.385854600585;
    msg.speed = 0.171523778092;
    msg.speed_units = 149U;
    msg.custom.assign("RRCZATESIPPMCYXHX");

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
    msg.setTimeStamp(0.310354594386);
    msg.setSource(37132U);
    msg.setSourceEntity(184U);
    msg.setDestination(48341U);
    msg.setDestinationEntity(229U);
    msg.timeout = 65027U;
    msg.flags = 119U;
    msg.lat = 0.312877213168;
    msg.lon = 0.294869112725;
    msg.start_z = 0.0669846887032;
    msg.start_z_units = 194U;
    msg.end_z = 0.807903525987;
    msg.end_z_units = 217U;
    msg.radius = 0.458803437101;
    msg.speed = 0.924253468414;
    msg.speed_units = 113U;
    msg.custom.assign("SAWPIXGALGQFLQWNYBKTEUQGRVKFOGZZHACUVJOZUHZDRPAZJXAERSHQCRGPKFKCNQWVFJRZAMTUVENDGMQTWVEGYALYKJUXBDUZQUENOCOZ");

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
    msg.setTimeStamp(0.227985310761);
    msg.setSource(46456U);
    msg.setSourceEntity(51U);
    msg.setDestination(50705U);
    msg.setDestinationEntity(147U);
    msg.timeout = 9591U;
    msg.lat = 0.862795851308;
    msg.lon = 0.359504057365;
    msg.z = 0.220363194992;
    msg.z_units = 146U;
    msg.speed = 0.116418414879;
    msg.speed_units = 117U;
    msg.custom.assign("EKMFVRHSRFRVQZVALBNOLEZBHALIGNCISLNCFGVBLJTPXTLGSBVABQOOBYVMDUOHUHVJMBHGDARWDPZYFQXPTVNJQZTUJFOKAMWWI");

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
    msg.setTimeStamp(0.2656692407);
    msg.setSource(42342U);
    msg.setSourceEntity(35U);
    msg.setDestination(41794U);
    msg.setDestinationEntity(200U);
    msg.timeout = 62130U;
    msg.lat = 0.783298548955;
    msg.lon = 0.726848888578;
    msg.z = 0.0570141603662;
    msg.z_units = 145U;
    msg.speed = 0.915920067584;
    msg.speed_units = 85U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.580347153646;
    tmp_msg_0.y = 0.567363236737;
    tmp_msg_0.z = 0.872286409698;
    tmp_msg_0.t = 0.353534894844;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("CHMLDPPMJWTHTFRHMEVEOSDIFDKIRPMQYAOXTSLGXZRCIBVKXRQPTXYWKIJSOSBFKTFLHFJUPLDLZVAJVUVDPECEOZAQVOLIUNLZRYJCEKJYTMQAOYUFWFPQKRNRMBNQKSOBZLNEYNGTDCMZXCYGTBEAJWDNHMCQR");

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
    msg.setTimeStamp(0.96856565774);
    msg.setSource(54397U);
    msg.setSourceEntity(69U);
    msg.setDestination(14315U);
    msg.setDestinationEntity(22U);
    msg.timeout = 794U;
    msg.lat = 0.31823067309;
    msg.lon = 0.916690167169;
    msg.z = 0.366909369587;
    msg.z_units = 74U;
    msg.speed = 0.100918787332;
    msg.speed_units = 68U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.273880531395;
    tmp_msg_0.y = 0.247006741541;
    tmp_msg_0.z = 0.232919823502;
    tmp_msg_0.t = 0.994245023867;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GGSSDTHOQQMDILEQAEFGRJYXBNWPWBGZAELFRUESCYMKUZJOPUSNHXTVTOCSOLTWWDWKYHCNRJYBFRKJQPMIDOHHKMEEYITTIKOURJYAXSTVNHHPRXVWBKKNVALXGJCUEZFDFCVGNZBDYQZQUOFSMWHWYVYMUZVZUXJQDABIDJRLQVXSKCIBZUGAPFIQOOBLPBNPZZJA");

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
    msg.setTimeStamp(0.138989687224);
    msg.setSource(15257U);
    msg.setSourceEntity(104U);
    msg.setDestination(54289U);
    msg.setDestinationEntity(249U);
    msg.x = 0.930441485791;
    msg.y = 0.153083586358;
    msg.z = 0.611727237463;
    msg.t = 0.727156850667;

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
    msg.setTimeStamp(0.375195568311);
    msg.setSource(13608U);
    msg.setSourceEntity(175U);
    msg.setDestination(40988U);
    msg.setDestinationEntity(147U);
    msg.x = 0.587162939377;
    msg.y = 0.175767911067;
    msg.z = 0.562504629437;
    msg.t = 0.174534725755;

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
    msg.setTimeStamp(0.901981346543);
    msg.setSource(62208U);
    msg.setSourceEntity(229U);
    msg.setDestination(44981U);
    msg.setDestinationEntity(172U);
    msg.x = 0.47228073816;
    msg.y = 0.724944127008;
    msg.z = 0.541138611221;
    msg.t = 0.848449293088;

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
    msg.setTimeStamp(0.656499225493);
    msg.setSource(25951U);
    msg.setSourceEntity(9U);
    msg.setDestination(51447U);
    msg.setDestinationEntity(53U);
    msg.timeout = 6308U;
    msg.name.assign("UXLDVIKOQUWKISYQQKJYRFPEJCFIUVDWYCQWGUPVUXQMLLMGYMRLYDDRZCWEPJHUAPINVVOCGFYWZGRTOWOEGHJKGNYMIJITLPGIXPMVBNHRFHDWQFXQXCEOYLEFVKZHYAWOAKXVPUFNZSBSAMAARNAHQDXFLZRCHNMZFOBMRUSUQXXSPBGBYZTJSOSOSHTHBNREZJUIFEKGEATLD");
    msg.custom.assign("ERRQWOTXSSIDFZCINNKCEPCKJPVNZUJPFPAXTIBLMZJPUOZQIICGMKABEJTVXAMLFZPDEIUTHSXUMBWKSMDJXAPAEVQQKPHKDZZDRMACNBGV");

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
    msg.setTimeStamp(0.54759404284);
    msg.setSource(52326U);
    msg.setSourceEntity(2U);
    msg.setDestination(1055U);
    msg.setDestinationEntity(42U);
    msg.timeout = 32299U;
    msg.name.assign("MARDHQXVJHMYJFGHCF");
    msg.custom.assign("HZHNUDRZKVY");

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
    msg.setTimeStamp(0.0885657813768);
    msg.setSource(3069U);
    msg.setSourceEntity(135U);
    msg.setDestination(11917U);
    msg.setDestinationEntity(212U);
    msg.timeout = 40978U;
    msg.name.assign("RXLXPEZMHOFTCJXWMYGWCCHJPPFORGMSTHHYIJAQOGMCMZUJWCFXHDYXXAAKYJNHIDSDRLMLNPMSYIZEPDLVGTGNWTAQFLUKZVUFSXQBPFMGVZZQBTPUDWFSQRQUEVTIBIHYYNDAHFGBVRQFEOAAVKAGPKMEDAJKOLBHKUJDBMTLNKGKEUYOVNENXTNPIKZURQL");
    msg.custom.assign("YSLNXEIIDHDACPNVUXBRQYLEHYLTWGNFFTNSAIBB");

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
    msg.setTimeStamp(0.757555125205);
    msg.setSource(26885U);
    msg.setSourceEntity(130U);
    msg.setDestination(58013U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.240007256803;
    msg.lon = 0.910151610363;
    msg.z = 0.851727740311;
    msg.z_units = 20U;
    msg.speed = 0.133625657896;
    msg.speed_units = 231U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 26377U;
    tmp_msg_0.off_x = 0.429051289455;
    tmp_msg_0.off_y = 0.100032206383;
    tmp_msg_0.off_z = 0.818122196838;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.386027715218;
    msg.custom.assign("PGDSYILRWUUTRPCMLHIIBQBZMUAPKCAIIGREOXHUVONPLSGGNEEMLZMBTRTVYWOWIJLTV");

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
    msg.setTimeStamp(0.734478378657);
    msg.setSource(51590U);
    msg.setSourceEntity(193U);
    msg.setDestination(39027U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.197451690385;
    msg.lon = 0.495298178081;
    msg.z = 0.422784877741;
    msg.z_units = 146U;
    msg.speed = 0.942816617788;
    msg.speed_units = 109U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0829503756751;
    tmp_msg_0.y = 0.0429521327394;
    tmp_msg_0.z = 0.0461541777184;
    tmp_msg_0.t = 0.414887488718;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.194368339254;
    msg.custom.assign("XZJWEKLTRUPTTCLAXTMJDENVCFFDDVZEVFWGFQRSNKFOSJUWXIKKOCNXSIMFXXUYOPCHKKVBDZJWDBWSFNQLPAO");

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
    msg.setTimeStamp(0.753075342165);
    msg.setSource(47377U);
    msg.setSourceEntity(137U);
    msg.setDestination(63976U);
    msg.setDestinationEntity(200U);
    msg.lat = 0.75200115218;
    msg.lon = 0.511844115454;
    msg.z = 0.635554613539;
    msg.z_units = 244U;
    msg.speed = 0.858077821513;
    msg.speed_units = 202U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.741633611922;
    tmp_msg_0.y = 0.974104804391;
    tmp_msg_0.z = 0.42904876082;
    tmp_msg_0.t = 0.141728614985;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.68095491911;
    msg.custom.assign("NDXACUAIWXNDEAYPRWMHKFNYWLETNEIREFTPVJENCBGRNRQHUSDVHVKYOQJPBTUCMHRRTSXXSFDYTPTVKSNEXPFZQVHEELNRUCBYQEMORQCRZGQJKXXGQCDWHZLSIYDFAHHPMUUIFPIVHDYOQBIWQJARXJSZPUFOAGKLCLFWBLYCKOSJUMLJTJJODMGOLPGWVM");

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
    msg.setTimeStamp(0.318846010156);
    msg.setSource(33099U);
    msg.setSourceEntity(115U);
    msg.setDestination(54963U);
    msg.setDestinationEntity(219U);
    msg.vid = 58173U;
    msg.off_x = 0.460150563376;
    msg.off_y = 0.339497230421;
    msg.off_z = 0.668015696359;

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
    msg.setTimeStamp(0.688701879888);
    msg.setSource(29194U);
    msg.setSourceEntity(111U);
    msg.setDestination(35223U);
    msg.setDestinationEntity(56U);
    msg.vid = 41360U;
    msg.off_x = 0.813989300353;
    msg.off_y = 0.211016842116;
    msg.off_z = 0.986689286404;

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
    msg.setTimeStamp(0.648379029305);
    msg.setSource(24075U);
    msg.setSourceEntity(216U);
    msg.setDestination(43359U);
    msg.setDestinationEntity(238U);
    msg.vid = 34957U;
    msg.off_x = 0.64056285287;
    msg.off_y = 0.931010273816;
    msg.off_z = 0.198590853205;

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
    msg.setTimeStamp(0.858189639549);
    msg.setSource(7648U);
    msg.setSourceEntity(204U);
    msg.setDestination(14079U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.906856146402);
    msg.setSource(53166U);
    msg.setSourceEntity(149U);
    msg.setDestination(60009U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.0374247709113);
    msg.setSource(14059U);
    msg.setSourceEntity(172U);
    msg.setDestination(39308U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.181126510251);
    msg.setSource(43918U);
    msg.setSourceEntity(193U);
    msg.setDestination(48565U);
    msg.setDestinationEntity(159U);
    msg.mid = 25507U;

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
    msg.setTimeStamp(0.170854219916);
    msg.setSource(41587U);
    msg.setSourceEntity(158U);
    msg.setDestination(24153U);
    msg.setDestinationEntity(50U);
    msg.mid = 14101U;

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
    msg.setTimeStamp(0.477138497819);
    msg.setSource(29332U);
    msg.setSourceEntity(233U);
    msg.setDestination(31094U);
    msg.setDestinationEntity(220U);
    msg.mid = 55192U;

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
    msg.setTimeStamp(0.46328957442);
    msg.setSource(41708U);
    msg.setSourceEntity(238U);
    msg.setDestination(21427U);
    msg.setDestinationEntity(73U);
    msg.state = 251U;
    msg.eta = 46203U;
    msg.info.assign("IEETPKESVYGGKIKHPCMPS");

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
    msg.setTimeStamp(0.792507839921);
    msg.setSource(49333U);
    msg.setSourceEntity(158U);
    msg.setDestination(40519U);
    msg.setDestinationEntity(217U);
    msg.state = 98U;
    msg.eta = 46639U;
    msg.info.assign("NVTERDPZENGTUWPRUAAASGFLVULAENNJRIQQYPLVPBXWWSWLVSMFDRYKAEYMVKIREJGDQFCBAADGTLKJYPDDDPLYUZKVFEKURVASXTTOWEFXKUHIDZNNMTCMUXWFNKHYIGOCLNSYMTPJCFEZHQFBHPUUOFZSBMKXFSDHGSMORCZGTXJXURJYIWEOVIYIICSBZWDBABJOJCHWOTHZIQXRCSQLMXTOQOLRGBIQNLPGOGQMHK");

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
    msg.setTimeStamp(0.217966200928);
    msg.setSource(5029U);
    msg.setSourceEntity(151U);
    msg.setDestination(27609U);
    msg.setDestinationEntity(153U);
    msg.state = 72U;
    msg.eta = 2149U;
    msg.info.assign("JPUOMGQWSNZYSXBESLOEIHLDIHZTPSJDOQWRMOCBOSEOREHNANVWRMZBNQFDHIDCXSBSBHZQYAYAKKKGFTAHLVPSRTOWGYKJZIBDYYDJZFGNTLWFXHBTWUTUDCTQTVJAMGGKVZYKJPPV");

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
    msg.setTimeStamp(0.0229481118835);
    msg.setSource(8487U);
    msg.setSourceEntity(236U);
    msg.setDestination(29569U);
    msg.setDestinationEntity(182U);
    msg.system = 43702U;
    msg.duration = 58653U;
    msg.speed = 0.559685720216;
    msg.speed_units = 195U;
    msg.x = 0.112624145787;
    msg.y = 0.431458995387;
    msg.z = 0.451657594396;
    msg.z_units = 118U;

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
    msg.setTimeStamp(0.998220327506);
    msg.setSource(44848U);
    msg.setSourceEntity(21U);
    msg.setDestination(63321U);
    msg.setDestinationEntity(88U);
    msg.system = 9031U;
    msg.duration = 60955U;
    msg.speed = 0.901136575892;
    msg.speed_units = 131U;
    msg.x = 0.0776914101577;
    msg.y = 0.6124232321;
    msg.z = 0.0973899336285;
    msg.z_units = 26U;

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
    msg.setTimeStamp(0.88290582053);
    msg.setSource(19265U);
    msg.setSourceEntity(115U);
    msg.setDestination(12180U);
    msg.setDestinationEntity(5U);
    msg.system = 1854U;
    msg.duration = 59194U;
    msg.speed = 0.0863063009555;
    msg.speed_units = 222U;
    msg.x = 0.250568061847;
    msg.y = 0.617789303112;
    msg.z = 0.653738067047;
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
    msg.setTimeStamp(0.220451840706);
    msg.setSource(14277U);
    msg.setSourceEntity(180U);
    msg.setDestination(25457U);
    msg.setDestinationEntity(219U);
    msg.lat = 0.537713395004;
    msg.lon = 0.525750120613;
    msg.speed = 0.970941816268;
    msg.speed_units = 236U;
    msg.duration = 31454U;
    msg.sys_a = 11325U;
    msg.sys_b = 62650U;
    msg.move_threshold = 0.51088992331;

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
    msg.setTimeStamp(0.316520499594);
    msg.setSource(62211U);
    msg.setSourceEntity(254U);
    msg.setDestination(40635U);
    msg.setDestinationEntity(156U);
    msg.lat = 0.0584496108217;
    msg.lon = 0.122998655115;
    msg.speed = 0.829316006804;
    msg.speed_units = 22U;
    msg.duration = 65453U;
    msg.sys_a = 56180U;
    msg.sys_b = 26000U;
    msg.move_threshold = 0.978385688392;

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
    msg.setTimeStamp(0.842939140472);
    msg.setSource(6776U);
    msg.setSourceEntity(250U);
    msg.setDestination(38736U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.419861090673;
    msg.lon = 0.391666717407;
    msg.speed = 0.153210881795;
    msg.speed_units = 143U;
    msg.duration = 53921U;
    msg.sys_a = 4217U;
    msg.sys_b = 21498U;
    msg.move_threshold = 0.368793544483;

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
    msg.setTimeStamp(0.133481389086);
    msg.setSource(24112U);
    msg.setSourceEntity(16U);
    msg.setDestination(59149U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.00591749630943;
    msg.lon = 0.768793776865;
    msg.z = 0.456599613431;
    msg.z_units = 193U;
    msg.speed = 0.434465682129;
    msg.speed_units = 53U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0600404726187;
    tmp_msg_0.lon = 0.558192545814;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("CXOGETXKRVUHHZFAHRYGAK");

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
    msg.setTimeStamp(0.232276137052);
    msg.setSource(48419U);
    msg.setSourceEntity(248U);
    msg.setDestination(15936U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.167296472164;
    msg.lon = 0.254381580972;
    msg.z = 0.653311756362;
    msg.z_units = 41U;
    msg.speed = 0.65388587403;
    msg.speed_units = 239U;
    msg.custom.assign("OSIDAGVKTCOMCORHVDSZUAABYGERWKMLUQALJHQIVZHSEFAGCXXLFHCQ");

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
    msg.setTimeStamp(0.498693497221);
    msg.setSource(64259U);
    msg.setSourceEntity(127U);
    msg.setDestination(45379U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.713949423916;
    msg.lon = 0.862932098563;
    msg.z = 0.0809273976467;
    msg.z_units = 187U;
    msg.speed = 0.510843819805;
    msg.speed_units = 214U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.0907951128683;
    tmp_msg_0.lon = 0.590520726484;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("IOFPRDACSCLOOMXQGTMCHORLWPTLTBRCECIFDJZOGEBYXUEVARYBXWGYUBBFCZQYMLVNNBZHQMRLDGVDLFXEPYTVWRVZDBLAZPCDSMQOFJMQZAQSUIUJBMIHHGEQPNTPMUSRAHOYDJHORYJZJEKCKHETZKNWQHVWUJIQRKLIKFSFSBFQUNNXSSVWYPAT");

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
    msg.setTimeStamp(0.447034337514);
    msg.setSource(21149U);
    msg.setSourceEntity(243U);
    msg.setDestination(57719U);
    msg.setDestinationEntity(66U);
    msg.lat = 0.0921652923373;
    msg.lon = 0.556965013379;

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
    msg.setTimeStamp(0.284452278617);
    msg.setSource(40259U);
    msg.setSourceEntity(176U);
    msg.setDestination(10795U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.217991808128;
    msg.lon = 0.715692580925;

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
    msg.setTimeStamp(0.506625761287);
    msg.setSource(29786U);
    msg.setSourceEntity(163U);
    msg.setDestination(24195U);
    msg.setDestinationEntity(81U);
    msg.lat = 0.939190804494;
    msg.lon = 0.550261180597;

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
    msg.setTimeStamp(0.645147023281);
    msg.setSource(38753U);
    msg.setSourceEntity(173U);
    msg.setDestination(30664U);
    msg.setDestinationEntity(12U);
    msg.timeout = 58414U;
    msg.lat = 0.415800212929;
    msg.lon = 0.538329615575;
    msg.z = 0.950300125633;
    msg.z_units = 234U;
    msg.pitch = 0.456954863775;
    msg.amplitude = 0.705612937175;
    msg.duration = 65247U;
    msg.speed = 0.854704845597;
    msg.speed_units = 14U;
    msg.radius = 0.142984694652;
    msg.direction = 133U;
    msg.custom.assign("EDEIUYCFOYCSOBVTJFNJCZNRQVJPOJOBSLNCVWFZJCSDQCFOCDVWGBRGKETKXWXHCNIZLPAJPJEPRDELBIPFXOPWTXFNSMKXLJOKCUKUHYGUTYZHYFAFICWHBDZZPIWKRQQLVBKEIAHKT");

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
    msg.setTimeStamp(0.230496683671);
    msg.setSource(43767U);
    msg.setSourceEntity(170U);
    msg.setDestination(51187U);
    msg.setDestinationEntity(202U);
    msg.timeout = 48874U;
    msg.lat = 0.521128265303;
    msg.lon = 0.469203485705;
    msg.z = 0.510770037508;
    msg.z_units = 80U;
    msg.pitch = 0.552412306001;
    msg.amplitude = 0.403995432632;
    msg.duration = 48132U;
    msg.speed = 0.976214517921;
    msg.speed_units = 216U;
    msg.radius = 0.966067577052;
    msg.direction = 94U;
    msg.custom.assign("AXZOTUPPHKCENYAMXXCJCSFAOZMLEDKBHKEGBZIZXFFJZYFRTYYSLKNIBELWDOJMXPIMBIONYTVVLFYSWWMKOEKRITEDPTDFQRTQJEYRDFWDBWJGDVGSBCHWUNQFTEIVGAVBXBMEULLQRFHVHRPYCEXJXRUHQPJCXIQUDIOANAAMBGZIPRZPWLLULJVVKZAAKJOOPLBGUCSHVZKMITSSWQZRYJGSAPMFHUUCCNDDN");

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
    msg.setTimeStamp(0.38002678424);
    msg.setSource(38201U);
    msg.setSourceEntity(98U);
    msg.setDestination(58321U);
    msg.setDestinationEntity(46U);
    msg.timeout = 37114U;
    msg.lat = 0.373803297838;
    msg.lon = 0.468422992544;
    msg.z = 0.377572368559;
    msg.z_units = 106U;
    msg.pitch = 0.168132977095;
    msg.amplitude = 0.50894872081;
    msg.duration = 17169U;
    msg.speed = 0.230019024026;
    msg.speed_units = 42U;
    msg.radius = 0.0358533521122;
    msg.direction = 143U;
    msg.custom.assign("YYNBEFKTIIUXRHWZNVOXKEWICGFNIAGTHDJIMCYMPRPUERNEEWDDWSPTFXRULDNOLXMYSBBJBACAUFVARIEFRDMQICWNFASTYYCBPQHHZQZXSNJWFDCGDTGKMQOOXTCHLFCTGYASKLPLLKMJIKASSBLUMPJSWXNVBQBPCGDLJLGZSHBEKGZPUYZQLONPM");

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
    msg.setTimeStamp(0.720055604318);
    msg.setSource(23724U);
    msg.setSourceEntity(215U);
    msg.setDestination(32237U);
    msg.setDestinationEntity(136U);
    msg.formation_name.assign("TOWIKBBVVZLGWNSTFWXCRWUJOWLMNPUGJZBFGRVAXYNYPTLZVCGAJQVUKHKIRIRFVXIMMYEGIHSCQHPATFAKTLQKAIPERIPGBBQVYVJJYCZPHFFSHXNSFTXQ");
    msg.reference_frame = 203U;
    msg.custom.assign("RXKLZMFSOZCXBFDLWWZYRVGHABTMPARMXSNXCKUICQKCDMERDFDGBTKVUVTWWQNULVTBUMRTPIPIFOLGEOKYNEJUQFVKEHRCSQHAXMPQHTTWDAODUNVFLMKIQSAVRKIPLCHSIAVJGYNJOKEYOZVAYDIJFXQLTSSBZRQHMWDPJEGLARCPNGUYLXIUHUMLZRABJEOZCX");

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
    msg.setTimeStamp(0.285362668274);
    msg.setSource(63488U);
    msg.setSourceEntity(245U);
    msg.setDestination(10090U);
    msg.setDestinationEntity(71U);
    msg.formation_name.assign("WBTEELIUGPHEGBDRDOWRTXWSZYCNVYVSFCWVQNMADXGYHVMQHRYIVMNFZUEGAAZXKVCULPQJYKTATWAPLUMLUYYQCIEODTDSDXWAKZFOPXK");
    msg.reference_frame = 0U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 53297U;
    tmp_msg_0.off_x = 0.814857526394;
    tmp_msg_0.off_y = 0.843226136953;
    tmp_msg_0.off_z = 0.222326928294;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("WBJUFVEEWKYTQCELDGTKZMSRDMAWJBQXDTHUPDWYFFJXRYOJAICTYENHSXYVFRQCGRILGSDGJLPBXZD");

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
    msg.setTimeStamp(0.336600170141);
    msg.setSource(23865U);
    msg.setSourceEntity(67U);
    msg.setDestination(48601U);
    msg.setDestinationEntity(228U);
    msg.formation_name.assign("AMJYCESSJQFZQCVBKPRGMRFGWCQHJJFENYXZIVDSBNPASAHHSZKEJBJSXHNOEWNTUAXHIZERYNVTYROPWPPLOTGDPYRYISKQWBUUUJYKXDVKJJXAYCRQTPDLRUMLDTTRSEOUHDEHUYBOSMFEZTLUBLKXZCWVRINDCSVOVDFYLIAGNOCIMEGVBFCMKWUITKPOMGMVXAHBGGPGCFMQFMQHZLFJLENWLINAGKRVKXQLHIO");
    msg.reference_frame = 128U;
    msg.custom.assign("MYGNJVBJLNKTCQRWCYHPTFMKMSOOUEFAEKSNSTCRUQRQLFZSX");

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
    msg.setTimeStamp(0.329171146025);
    msg.setSource(31910U);
    msg.setSourceEntity(68U);
    msg.setDestination(65255U);
    msg.setDestinationEntity(124U);
    msg.group_name.assign("MAFUKZFDHREGXHUTXTJZXMYSAKEVDGTRYDGHKICOWLDKPTVOSSFFSROZBJMAKZQGHRKLTQMCEYQMNSHJEAFBBHEXXYGGTRRPDYJDPAWZPZPLAH");
    msg.formation_name.assign("VJCKCCLQBOKNZARI");
    msg.plan_id.assign("QSZEZIMNJXGZULPMZYSJXUWRKXVSSBOAAXFTQEVMKVQXUAAGTDDNCUPKSHSEVMQMULXBGHYIYUFOCZFYGOIKJKSIAN");
    msg.description.assign("IVUHOGVCQGOSEOUNAWNTLWBPCMHANJITDKNRREFVVMEXTZBVBHZPTOIFZXVHANDFRPSPJIUXEMIJGFKCSLWFBPNRZJMQFPOLAMYLXWZPUGPBAYVAIKIXJHPRJPXRYGQNWQLJKZADWDFYD");
    msg.leader_speed = 0.592932315415;
    msg.leader_bank_lim = 0.856606170805;
    msg.pos_sim_err_lim = 0.216293234063;
    msg.pos_sim_err_wrn = 0.864162692596;
    msg.pos_sim_err_timeout = 19482U;
    msg.converg_max = 0.551549219713;
    msg.converg_timeout = 47334U;
    msg.comms_timeout = 7879U;
    msg.turb_lim = 0.970064448785;
    msg.custom.assign("QQHXWIYEPNPWDAPTNFZXAAOMTDXRLJZJRMQVVWUCRXJJLWJDCEJVZORZSB");

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
    msg.setTimeStamp(0.855466620182);
    msg.setSource(11254U);
    msg.setSourceEntity(23U);
    msg.setDestination(31033U);
    msg.setDestinationEntity(3U);
    msg.group_name.assign("EUZQNJDOCVXMTNOOJIKPNC");
    msg.formation_name.assign("JFSGRNVYXJEICWNUEWWBIQOJYUVONIQWJWNOKCUAALLARVGZFZMBODFTMXFGBTSMHTTXDOAIPXECDCNRPFCJYGYGFHQITOPZIBQDKKKZOJVIKWKICWQCMPTUREOSLJUVQHQPUQHUSYZLYKRIEDUNPKBCHLLDFBSDWJOMGPHMRNXHPMZ");
    msg.plan_id.assign("FLGRSXDKCCRRSNQEDMFVALJKAPKQWYPXQDGCXKMEMVKBPZXHXJWHEJIBAARRONAROLNZPUSUOCTSXGNLJORTQBBVZCWKJITDHEKZQQNSOASTFVGYVHMHGOJMPADTUSILFXIZMCFEXTDWTIYZSPWEEKHACHVXIPYTBDZWWFVNYGDJIUMWJZYEREIBVCNXLCVGFWOBPMTLIE");
    msg.description.assign("WOESBBXKGIRRPUHVYCYKODINGEGIRQVILZZFIAYMPQGIJGXPFHFUQGOGFJRCWAVALNTEXIRYEQZRSAQXVHKBLPZLFVPO");
    msg.leader_speed = 0.313657818157;
    msg.leader_bank_lim = 0.796775682511;
    msg.pos_sim_err_lim = 0.591362987514;
    msg.pos_sim_err_wrn = 0.750924920903;
    msg.pos_sim_err_timeout = 13425U;
    msg.converg_max = 0.43621500345;
    msg.converg_timeout = 27010U;
    msg.comms_timeout = 48958U;
    msg.turb_lim = 0.35337112167;
    msg.custom.assign("YMTEDNMUCIWEWDQTRDBYXHA");

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
    msg.setTimeStamp(0.334424881934);
    msg.setSource(17688U);
    msg.setSourceEntity(183U);
    msg.setDestination(10350U);
    msg.setDestinationEntity(130U);
    msg.group_name.assign("DDPAXGZGNSTRVMFLFZMMKXYYLCNTNXDRTJHVBWJEXJQMMFRPCOGCMESJUWINAHVAEQAGZHKZFOJDRDMBHGOUQDBWBZPYJYWPOAXPZQLATDQVSFQIYRPBPUSPYGH");
    msg.formation_name.assign("ISTCAYYNGLPGFJFCJVNVMKBNNMPLHBHRTUTWDRMACUZWDDVKJIPWTXDVZVMFTKXGYQMEFHBOZHTSLMEXUBLEYUGXLGAXRVDCAUJZKSNBTLCJHGODSEFCDYSAXLNNXTCIPRVULNSRKIMOFLQBGGTBOMEJFAOJHBWGCYBPIPQJSESFKYXQAVIQLICFJWQSRPPHNRRZONAOZFEWWBKOCR");
    msg.plan_id.assign("GGFRGYPYCGLDULQVFKPVTLKAIHLMDRPOMNSSPVYJUKJSDDZFFDVSWPMWPTZWEOEIATBFNEAXNDGJIQQIRTSBGVBEIESVICDUKMWZYNTHUYXCGH");
    msg.description.assign("GOFDPPOEPGBUEEALBJSMZODKDRUMEKJWXZQHHSZVGYKVNPVXQBGTIFCZUKHWHTXGMAGDDYCTOYFXTFWQEXSIUCYQARLMIIYSTCNNARZSZVWYJUYYUGCMHQTKIVKROZDWKZRXHFIJBKQWUQQUBILATCHROVLYJGEJPPVNKLIJFXACPNMLDAPLAUCDUQOTKWOEQSWCXBVMDRESRIPNNMLBVIJSMA");
    msg.leader_speed = 0.210304514134;
    msg.leader_bank_lim = 0.68809070204;
    msg.pos_sim_err_lim = 0.121128028924;
    msg.pos_sim_err_wrn = 0.457548180041;
    msg.pos_sim_err_timeout = 45493U;
    msg.converg_max = 0.710653732004;
    msg.converg_timeout = 52148U;
    msg.comms_timeout = 51044U;
    msg.turb_lim = 0.411464520371;
    msg.custom.assign("VSECILWBQEEQIVRHRDMAIFGDAXHNKHVNFOCHOLAMHWXZJDDWRGLODXSXUUMAMTWENSYQTFXPMRPKNVOKUDCAIOVSHBYIYVIUTCERPTWKQDLJMXZTGJNFRUISAQNBETUJFQLVHEWHNPLNEDKUTFJGCGYUXXBYDWKABRREQSKOBJJZRTGWQCJSLBLOZCQCPASWYZFOFXRWZYVNHXECFQSYILVIYZGSKIJCUMZGYFHMGVAPTGKKOMOZPA");

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
    msg.setTimeStamp(0.730631960645);
    msg.setSource(61625U);
    msg.setSourceEntity(164U);
    msg.setDestination(53016U);
    msg.setDestinationEntity(171U);
    msg.control_src = 33893U;
    msg.control_ent = 61U;
    msg.timeout = 0.64232521857;
    msg.loiter_radius = 0.201092278;
    msg.altitude_interval = 0.967436504724;

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
    msg.setTimeStamp(0.789863673661);
    msg.setSource(46167U);
    msg.setSourceEntity(59U);
    msg.setDestination(5470U);
    msg.setDestinationEntity(63U);
    msg.control_src = 10686U;
    msg.control_ent = 142U;
    msg.timeout = 0.768436901548;
    msg.loiter_radius = 0.622000408803;
    msg.altitude_interval = 0.291591970354;

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
    msg.setTimeStamp(0.186801837809);
    msg.setSource(11151U);
    msg.setSourceEntity(195U);
    msg.setDestination(22169U);
    msg.setDestinationEntity(227U);
    msg.control_src = 30138U;
    msg.control_ent = 75U;
    msg.timeout = 0.0867453001374;
    msg.loiter_radius = 0.502507808738;
    msg.altitude_interval = 0.495031815687;

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
    msg.setTimeStamp(0.823173112741);
    msg.setSource(4569U);
    msg.setSourceEntity(254U);
    msg.setDestination(51508U);
    msg.setDestinationEntity(229U);
    msg.flags = 32U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.241214866751;
    tmp_msg_0.speed_units = 1U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.722658508687;
    tmp_msg_1.z_units = 162U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.677948445691;
    msg.lon = 0.622644547344;
    msg.radius = 0.941988028102;

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
    msg.setTimeStamp(0.131811411065);
    msg.setSource(52206U);
    msg.setSourceEntity(151U);
    msg.setDestination(27786U);
    msg.setDestinationEntity(137U);
    msg.flags = 174U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.496752694925;
    tmp_msg_0.speed_units = 247U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.253306349611;
    tmp_msg_1.z_units = 98U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0938740791185;
    msg.lon = 0.694052617458;
    msg.radius = 0.722983780344;

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
    msg.setTimeStamp(0.612201357774);
    msg.setSource(52660U);
    msg.setSourceEntity(203U);
    msg.setDestination(3412U);
    msg.setDestinationEntity(69U);
    msg.flags = 72U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.22626004167;
    tmp_msg_0.speed_units = 1U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.943888354689;
    tmp_msg_1.z_units = 219U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.0313103857309;
    msg.lon = 0.130964112125;
    msg.radius = 0.120860677716;

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
    msg.setTimeStamp(0.769334660295);
    msg.setSource(20899U);
    msg.setSourceEntity(112U);
    msg.setDestination(50954U);
    msg.setDestinationEntity(184U);
    msg.control_src = 49286U;
    msg.control_ent = 251U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 20U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.363788841233;
    tmp_tmp_msg_0_0.speed_units = 182U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.825355371991;
    tmp_tmp_msg_0_1.z_units = 209U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.975953690432;
    tmp_msg_0.lon = 0.781994668642;
    tmp_msg_0.radius = 0.687558137292;
    msg.reference.set(tmp_msg_0);
    msg.state = 15U;
    msg.proximity = 92U;

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
    msg.setTimeStamp(0.069570163841);
    msg.setSource(24455U);
    msg.setSourceEntity(143U);
    msg.setDestination(42950U);
    msg.setDestinationEntity(184U);
    msg.control_src = 33754U;
    msg.control_ent = 121U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 121U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.443719248084;
    tmp_tmp_msg_0_0.speed_units = 123U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.554370293126;
    tmp_tmp_msg_0_1.z_units = 157U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.275858824502;
    tmp_msg_0.lon = 0.201195862998;
    tmp_msg_0.radius = 0.501645246863;
    msg.reference.set(tmp_msg_0);
    msg.state = 9U;
    msg.proximity = 186U;

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
    msg.setTimeStamp(0.715972044018);
    msg.setSource(59657U);
    msg.setSourceEntity(248U);
    msg.setDestination(63580U);
    msg.setDestinationEntity(97U);
    msg.control_src = 60674U;
    msg.control_ent = 185U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 140U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.109643036199;
    tmp_tmp_msg_0_0.speed_units = 211U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.955497341779;
    tmp_tmp_msg_0_1.z_units = 39U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.201726010057;
    tmp_msg_0.lon = 0.725571086668;
    tmp_msg_0.radius = 0.165580516479;
    msg.reference.set(tmp_msg_0);
    msg.state = 35U;
    msg.proximity = 93U;

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
    IMC::VehicleState msg;
    msg.setTimeStamp(0.189090233312);
    msg.setSource(16654U);
    msg.setSourceEntity(3U);
    msg.setDestination(6410U);
    msg.setDestinationEntity(159U);
    msg.op_mode = 12U;
    msg.error_count = 154U;
    msg.error_ents.assign("AQXNKDMDGXRDPSNZVZVYMFTTXLMCTAYXQBYVLZPREUICPTKDUDCWSDJBGILOKEVOUNWGOEKCOYRANUAJKHBLGGBOJJNHMJNFZJPTIBVRRUWBDFHQRXNEVCZXVZYIUPJGJZNAHEWPUJOHCLPXXMZAZHMVELFHIKWSFFFQBSORKMPKXAWDYYWESGBVIS");
    msg.maneuver_type = 10923U;
    msg.maneuver_stime = 0.250529301965;
    msg.maneuver_eta = 23365U;
    msg.control_loops = 2970877549U;
    msg.flags = 198U;
    msg.last_error.assign("MCSFLYOVTUDIEGGFABSWKKGZJGETLBSYGOHKPPEA");
    msg.last_error_time = 0.910499156563;

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
    msg.setTimeStamp(0.105542358875);
    msg.setSource(60950U);
    msg.setSourceEntity(216U);
    msg.setDestination(36416U);
    msg.setDestinationEntity(31U);
    msg.op_mode = 70U;
    msg.error_count = 197U;
    msg.error_ents.assign("JPWRUYLUHTQGTPWVXHLTTWDCDXLXQXNTOBUWANIPUVOEAPYFWESBKAQYSUWBLDJGKYJAODZSIPGANXMGFUNOAFSMTDIBCEJGOEEAQGJPVQJGTYMXUBDRLZSOXNK");
    msg.maneuver_type = 33485U;
    msg.maneuver_stime = 0.926022845879;
    msg.maneuver_eta = 28492U;
    msg.control_loops = 4090699964U;
    msg.flags = 168U;
    msg.last_error.assign("UNQIPXZZMTSHPFTZORRYPVQBQL");
    msg.last_error_time = 0.613225372558;

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
    msg.setTimeStamp(0.745321939655);
    msg.setSource(31314U);
    msg.setSourceEntity(83U);
    msg.setDestination(32630U);
    msg.setDestinationEntity(25U);
    msg.op_mode = 113U;
    msg.error_count = 55U;
    msg.error_ents.assign("FBBDCSFYDGRNZCHSOGQGLLNGZIDTRWYPCKTBHBEHJABIXEOZTNMJEIJRMCHKEZVOMJXFIBVXPKAHWDMOQRKEPTUIFQFHABCSDUQEPCPPXIKFNTJAURYKNYIFCLPGTGIABSYUKZTEJMUINQEQFHLGLWJVLEROBKWLTCRWDQVICKWMPXYOSDTKFVGVPAUZPYJWAHMZFWX");
    msg.maneuver_type = 34123U;
    msg.maneuver_stime = 0.462350193649;
    msg.maneuver_eta = 8356U;
    msg.control_loops = 3268749597U;
    msg.flags = 200U;
    msg.last_error.assign("FNUVWAOKVIRKOCMWZSUZPPKDRNRPQDZSFTCSIGPGYXRELQUTHXLBATRWXIHSYFJDEZKOFHYVNCXYGOMASVJIWVZKMUQIJADMREUCKNYZILIIKYWBFERFMQTBKUGLLTTGBAJLEMCXYHXVDMJSILZALOEEWGDPDCYJSUSKVUMQIQPBOHBJHCQEMKYXONSGTDPJEJQRTMTGUVHOLGNZHPAQPZNB");
    msg.last_error_time = 0.65402370719;

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
    msg.setTimeStamp(0.202691316029);
    msg.setSource(18975U);
    msg.setSourceEntity(27U);
    msg.setDestination(8477U);
    msg.setDestinationEntity(119U);
    msg.type = 122U;
    msg.request_id = 27248U;
    msg.command = 118U;
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 50125U;
    tmp_msg_0.lat = 0.740730282501;
    tmp_msg_0.lon = 0.423319208704;
    tmp_msg_0.z = 0.24014786774;
    tmp_msg_0.z_units = 30U;
    tmp_msg_0.speed = 0.153467188942;
    tmp_msg_0.speed_units = 72U;
    tmp_msg_0.bearing = 0.879449755521;
    tmp_msg_0.cross_angle = 0.547164937273;
    tmp_msg_0.width = 0.866140295326;
    tmp_msg_0.length = 0.812646163854;
    tmp_msg_0.hstep = 0.415021944045;
    tmp_msg_0.coff = 0U;
    tmp_msg_0.alternation = 204U;
    tmp_msg_0.flags = 157U;
    tmp_msg_0.custom.assign("SKMCKRPBYSUQHGLVIWHFFYEOFDZVFZLCGEXJHHIZLJKPPNGFONRABDTXZQUCVMCATTAEJAOTXZGZDWSLYNGIYDRJJHAVTLIBQQIRJHAENQWYWUPBWMJKUKNLLSNZAGPDXRDFOPHUXTMBVOJEUIG");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 27419U;
    msg.info.assign("RYVRPRBMNDLOYXZSQPBFQCONILXRFAAUDDTVEYZJTZXIHWEYSFECTWAELBALWKOBHRPCCOUDNCGGMYWNTANKSWVKSAZIVSVBXYZJLHUERVGLCZMQPJOAIMXLWOGOYGJLLUPFCDBXKRJEPJSVDGJUMDMOZ");

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
    msg.setTimeStamp(0.524890083655);
    msg.setSource(62150U);
    msg.setSourceEntity(91U);
    msg.setDestination(13437U);
    msg.setDestinationEntity(178U);
    msg.type = 184U;
    msg.request_id = 19996U;
    msg.command = 124U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 19699U;
    tmp_msg_0.flags = 20U;
    tmp_msg_0.lat = 0.302115642285;
    tmp_msg_0.lon = 0.415774091229;
    tmp_msg_0.start_z = 0.106893691414;
    tmp_msg_0.start_z_units = 83U;
    tmp_msg_0.end_z = 0.330784975056;
    tmp_msg_0.end_z_units = 244U;
    tmp_msg_0.radius = 0.262781643876;
    tmp_msg_0.speed = 0.752298578997;
    tmp_msg_0.speed_units = 26U;
    tmp_msg_0.custom.assign("SQANOFAMKEXMMLRSTSHQHYXCDIECDHCBMPVVKOQ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 25000U;
    msg.info.assign("YCBVSIQBXVKTP");

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
    msg.setTimeStamp(0.833356843261);
    msg.setSource(31902U);
    msg.setSourceEntity(151U);
    msg.setDestination(43616U);
    msg.setDestinationEntity(2U);
    msg.type = 44U;
    msg.request_id = 8751U;
    msg.command = 182U;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 48107U;
    tmp_msg_0.name.assign("LSOSKEXVQJMCMGADEZHVGDTDMXUZXEDJORKXXWTKNTGQIECYEKWYZFGWLIBARFMVJZGAWLIBLQKEMPTKVR");
    tmp_msg_0.custom.assign("HCKABBHWMXFCFQMMRHKNEWXZJZGUKOUJOIHIGCFMPUTLGITJYGQWPLEEVQYZKXUMFCNSPAXBASVTLNZMSRDARIQXDZVLOQQELQVEERZVLOQWHDWJRVOMICJTUKNDYNAFYGNJUCYCZLUKGPSBRKFFDDXVHILHXWWUIUPZEQYCIAGZTTCDGYS");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 21058U;
    msg.info.assign("LKODLWRJJWOZLFBBIMBHWCJVPGTDZFDPSDZJDTXSFXPUJUCYDIHHNEWHCYKQPKXXMUMVZFBBJXPOJYYKWRERNAAEEUWGTVHKHMMQVSOVILMQCHFNCCRXKEGZLENKNCTSLIZKPVCQAOUYULQYRYJHNIUASRQBFEZYDTZIYMSSOFXGIAVJUVNMFSEBGX");

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
    msg.setTimeStamp(0.529140849259);
    msg.setSource(29404U);
    msg.setSourceEntity(57U);
    msg.setDestination(22228U);
    msg.setDestinationEntity(47U);
    msg.command = 232U;
    msg.entities.assign("WLSHXGPIEFMLPUBVQOUCEUBZFEBLNUSWTXSKJPZGNVBIWYDOQSXUAZJPYZPKRXKWKRDJTXAFTGSWNMBMPEVDCLXUHHTDXFZOGTHBWMAUVMPLXGYAUBDNFQXDTZEBOLNHGICHAWEEPATNXKILOFVHQHZSMRIAQTRJVLZJFWGQQRQJOMKCMCKPGQRJAGLFYONSAKHVUDUDLRVMCHNZQICIBYAECWDKRSYOTGIOTRNVIYJVJK");

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
    msg.setTimeStamp(0.88530301977);
    msg.setSource(44319U);
    msg.setSourceEntity(212U);
    msg.setDestination(17082U);
    msg.setDestinationEntity(215U);
    msg.command = 35U;
    msg.entities.assign("XVMYZDPICLYJRVTXMNJVPDOMOCYUZTEZLAGCMSPETHEDUSEFWHBIDYSRSLQAXSHKXWJGEVHIJMEHQQNXFTUNB");

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
    msg.setTimeStamp(0.988884375375);
    msg.setSource(46725U);
    msg.setSourceEntity(190U);
    msg.setDestination(49225U);
    msg.setDestinationEntity(137U);
    msg.command = 199U;
    msg.entities.assign("GSVOEDNLXIUAYLWGOHUPUTUQYQCLJVWOCLNLTODHMEMHNRVAUPFUVCKTSHXNWIXEYNSECOKHPWEYZGBBGMCRDTRCXDVJLIKKZBHIMLWPHZWZLJRQBGYPHBPNIFJHXHOXSU");

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
    msg.setTimeStamp(0.439598381031);
    msg.setSource(33453U);
    msg.setSourceEntity(68U);
    msg.setDestination(57216U);
    msg.setDestinationEntity(17U);
    msg.mcount = 62U;
    msg.mnames.assign("YHNPUVDYGXYUXWJEBIDPCLFWVBJPBKLEVMGCDFFGOXJNKGONDWJTKPYNMAAKMREZDBZUONRGWFSMIZKPZLZIQUFMOVBQRTUMYAMBSGLHEJSCEKTLEMOWJRCIHFACBSIKISRUPWHLVSMEXQQRRTOBHXJECRXKXIIHOZQWPVLYILNUXQDYBQCFBLCJSNJDNFAAQOGHGARYWZCUIFWAVOLTZFSVNZARPWTSYQKAVKC");
    msg.ecount = 222U;
    msg.enames.assign("IANDFMBYIXUELYYSXNYLDGJQHSPFHJEJRAEHXPOVVZMZHFSQKWKUCCTDVYHLWQHMMFBOKCDWXVKWQVNNSMBVWTPDXKMRYDDBNSOBQZQJJHMAUEKWAPZMBGUWJWBPFANMLGCELVCTRWGIETFAORHPVGUCMFNXVCLBXIOAZYUIKZORDNDELXTHAPIJOUFXOSYUKWTTGJRNJISSPKRFUEGQBZLZBZ");
    msg.ccount = 48U;
    msg.cnames.assign("UVQARHRXDNXPYIPAQLYBSWXBWAUNZP");
    msg.last_error.assign("IOTBQPEOZRRWAEXLXOEBPDKSZMRVYRAWFYPBDJCIENBZWRJPCDBKIMHEUCNYUBGJULTDRIXPVGQUAVCSTVFVHCWBWDAKCQPTFUNPYLMGDTXQKBQDUNSTZFHZJIJAEZGUROTNUHXRGUIXAHCMCZQCAOGVFFLNJAYNJXYRZEMBQOMFOMX");
    msg.last_error_time = 0.605925674759;

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
    msg.setTimeStamp(0.130632493991);
    msg.setSource(7813U);
    msg.setSourceEntity(246U);
    msg.setDestination(37843U);
    msg.setDestinationEntity(89U);
    msg.mcount = 100U;
    msg.mnames.assign("FXQOVQFWHFSFCAJUGCYNGARPKOPPVTTIPSDEBXYQUNMAHPPGBHRNOAKLAMXWNITLMLRJDNBQAWIZJIQNVVNDLFRMSKXIGXVJTYGJIHFOUXKLDPWOBAWNSZIWJOYTVHZHLBAFKICBVTWXOUGFQDUFTZILEVZMYCWPNUYJZBXXEZSLJMJWUEDAGCYCDHHRZRKUPSSKE");
    msg.ecount = 41U;
    msg.enames.assign("NURLINEDPSTZRBGUUMVNXHLYFSD");
    msg.ccount = 43U;
    msg.cnames.assign("HQBGIBDQHVKPSMNJHWKMHZPLFUOTMFPPGPRGXOOAGDZMAFQATQVXLLAWMJVBJTEJYIGVEXYIVNVKXWVSQQRLSRDWURBYDGQMDFGFLTMSOYF");
    msg.last_error.assign("ICSCIGWQDFMLOIXTAPVWVKTUMUYNQGSBBGYMAFAZCDWTMOOUMZQPJEGULELJWZNRBDPLHILPDVCFXPBSYHKHNBWAJEDTTLDVMJORXGCDOVASVKRRQIFARPXEEPAIKYVTJWFZQIHAYUNDTKRCLFFKAUVJOMFWJRVQTKSOSTRJDUBPE");
    msg.last_error_time = 0.688534327244;

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
    msg.setTimeStamp(0.205386169147);
    msg.setSource(37713U);
    msg.setSourceEntity(126U);
    msg.setDestination(51498U);
    msg.setDestinationEntity(79U);
    msg.mcount = 233U;
    msg.mnames.assign("IYMKCMQSYLKSWDYCNTQABQKZEPNXNZUVGZVUYJZBTJCMWHCQXPTBUIZNDUUDPHAHPQRZTXPQIFFCTLOWSVOWROYVXRVJDCEALOBVAPHSZCOLGMUXRKUUHOTVYSXVCHDSLHMEVTAKYCAYUKPIEDOTDKFDSLFQIAFBKYSWJAISJGGBZWNIMEMGMZNTNGFJPHGCABHGLBLWBQXAOJMNUIWRKMXRTNPEJEEHKZQLDJLNSRJGGXPR");
    msg.ecount = 216U;
    msg.enames.assign("TFAPYMULQQBQQFCQHHRSDWHILKNMHCOFIWADDVOFPMAKLTKNZSMGTJSPVNFUVHGIZIUEGC");
    msg.ccount = 107U;
    msg.cnames.assign("OCISLDNRUVITDYYPVBNLPFGIDBZHPBBMMEUZCXKZSLZAWBPCUENVNIBWXTKKZLEMCHMIDYEXCQFDFGHFSEMTTAQTWOFQRRMSUSWJZEEDPOOULLGPGLNGKFVOMNXVIJFKQGTVGHAUVQLTRJZJOIYHYRYVTJXOEACKMSAADSGRZPDHVWBYWQDHTRHJAFUWVNKCRUHQYKNNWEBKXNPIBTSPGXI");
    msg.last_error.assign("TYAWUNQDVUOIRVNFGQWCSRBZATAOWDTDLHEMIXUXAFHGGNXXCJECQNZHSIVOWZJVTWGJKSVPKMYEJIAVKBONNPNLFTYYZUHTFFKUKUZYPMHECFXVRREXXGNIITWQBGEPGRZZABUAJNBKRFRCZMMDBCROBHFHLIHLSPJLAUTSYWIYSOJQEIG");
    msg.last_error_time = 0.953650753134;

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
    msg.setTimeStamp(0.0749730721964);
    msg.setSource(65095U);
    msg.setSourceEntity(126U);
    msg.setDestination(64813U);
    msg.setDestinationEntity(250U);
    msg.mask = 127U;
    msg.max_depth = 0.721799099552;
    msg.min_altitude = 0.108433620995;
    msg.max_altitude = 0.604158732235;
    msg.min_speed = 0.414754171761;
    msg.max_speed = 0.935637100652;
    msg.max_vrate = 0.956515610966;
    msg.lat = 0.830865624444;
    msg.lon = 0.872998645328;
    msg.orientation = 0.833125365178;
    msg.width = 0.953053049868;
    msg.length = 0.288072320565;

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
    msg.setTimeStamp(0.581098559565);
    msg.setSource(44599U);
    msg.setSourceEntity(152U);
    msg.setDestination(17078U);
    msg.setDestinationEntity(209U);
    msg.mask = 235U;
    msg.max_depth = 0.0714668903297;
    msg.min_altitude = 0.397359545626;
    msg.max_altitude = 0.172264253909;
    msg.min_speed = 0.859973062107;
    msg.max_speed = 0.501037982668;
    msg.max_vrate = 0.105595521728;
    msg.lat = 0.73258476146;
    msg.lon = 0.132718216979;
    msg.orientation = 0.804705293446;
    msg.width = 0.380913545414;
    msg.length = 0.529772100307;

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
    msg.setTimeStamp(0.427954821849);
    msg.setSource(2085U);
    msg.setSourceEntity(171U);
    msg.setDestination(56378U);
    msg.setDestinationEntity(27U);
    msg.mask = 237U;
    msg.max_depth = 0.467143653491;
    msg.min_altitude = 0.103303764105;
    msg.max_altitude = 0.35202787902;
    msg.min_speed = 0.0492242258035;
    msg.max_speed = 0.0541126665933;
    msg.max_vrate = 0.312451373689;
    msg.lat = 0.499658293967;
    msg.lon = 0.69574509602;
    msg.orientation = 0.234664043773;
    msg.width = 0.0509800277765;
    msg.length = 0.305500527428;

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
    msg.setTimeStamp(0.402506314129);
    msg.setSource(56795U);
    msg.setSourceEntity(218U);
    msg.setDestination(60301U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.983107726717);
    msg.setSource(17440U);
    msg.setSourceEntity(88U);
    msg.setDestination(36009U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.265473588027);
    msg.setSource(29532U);
    msg.setSourceEntity(87U);
    msg.setDestination(62305U);
    msg.setDestinationEntity(42U);

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
    msg.setTimeStamp(0.315042476798);
    msg.setSource(44897U);
    msg.setSourceEntity(3U);
    msg.setDestination(12944U);
    msg.setDestinationEntity(213U);
    msg.duration = 10200U;

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
    msg.setTimeStamp(0.919651463557);
    msg.setSource(43960U);
    msg.setSourceEntity(169U);
    msg.setDestination(49669U);
    msg.setDestinationEntity(195U);
    msg.duration = 28420U;

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
    msg.setTimeStamp(0.293791167537);
    msg.setSource(15448U);
    msg.setSourceEntity(30U);
    msg.setDestination(41051U);
    msg.setDestinationEntity(246U);
    msg.duration = 611U;

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
    msg.setTimeStamp(0.227149146456);
    msg.setSource(32885U);
    msg.setSourceEntity(225U);
    msg.setDestination(25839U);
    msg.setDestinationEntity(202U);
    msg.enable = 113U;
    msg.mask = 1528150750U;
    msg.scope_ref = 3189666534U;

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
    msg.setTimeStamp(0.779753134997);
    msg.setSource(27904U);
    msg.setSourceEntity(244U);
    msg.setDestination(44728U);
    msg.setDestinationEntity(253U);
    msg.enable = 237U;
    msg.mask = 3428863191U;
    msg.scope_ref = 1426486505U;

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
    msg.setTimeStamp(0.529667821146);
    msg.setSource(54019U);
    msg.setSourceEntity(16U);
    msg.setDestination(8920U);
    msg.setDestinationEntity(21U);
    msg.enable = 247U;
    msg.mask = 89827731U;
    msg.scope_ref = 3726424018U;

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
    msg.setTimeStamp(0.537687452244);
    msg.setSource(43001U);
    msg.setSourceEntity(47U);
    msg.setDestination(54821U);
    msg.setDestinationEntity(229U);
    msg.medium = 236U;

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
    msg.setTimeStamp(0.452151088114);
    msg.setSource(47860U);
    msg.setSourceEntity(126U);
    msg.setDestination(15320U);
    msg.setDestinationEntity(254U);
    msg.medium = 171U;

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
    msg.setTimeStamp(0.347987829971);
    msg.setSource(59654U);
    msg.setSourceEntity(117U);
    msg.setDestination(4596U);
    msg.setDestinationEntity(242U);
    msg.medium = 204U;

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
    msg.setTimeStamp(0.633197187896);
    msg.setSource(62480U);
    msg.setSourceEntity(180U);
    msg.setDestination(26275U);
    msg.setDestinationEntity(182U);
    msg.value = 0.151620637944;
    msg.type = 163U;

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
    msg.setTimeStamp(0.163845907259);
    msg.setSource(39368U);
    msg.setSourceEntity(87U);
    msg.setDestination(48121U);
    msg.setDestinationEntity(67U);
    msg.value = 0.906470481357;
    msg.type = 246U;

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
    msg.setTimeStamp(0.316987654225);
    msg.setSource(61499U);
    msg.setSourceEntity(25U);
    msg.setDestination(57586U);
    msg.setDestinationEntity(39U);
    msg.value = 0.385899014414;
    msg.type = 54U;

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
    msg.setTimeStamp(0.855476454495);
    msg.setSource(5999U);
    msg.setSourceEntity(112U);
    msg.setDestination(63910U);
    msg.setDestinationEntity(249U);
    msg.possimerr = 0.423809042327;
    msg.converg = 0.402647998967;
    msg.turbulence = 0.666515955642;
    msg.possimmon = 165U;
    msg.commmon = 183U;
    msg.convergmon = 101U;

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
    msg.setTimeStamp(0.308723845866);
    msg.setSource(33891U);
    msg.setSourceEntity(112U);
    msg.setDestination(8552U);
    msg.setDestinationEntity(231U);
    msg.possimerr = 0.745226395167;
    msg.converg = 0.859121940155;
    msg.turbulence = 0.00474552972087;
    msg.possimmon = 88U;
    msg.commmon = 59U;
    msg.convergmon = 170U;

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
    msg.setTimeStamp(0.65367286321);
    msg.setSource(13502U);
    msg.setSourceEntity(166U);
    msg.setDestination(35398U);
    msg.setDestinationEntity(73U);
    msg.possimerr = 0.624296288051;
    msg.converg = 0.787949265059;
    msg.turbulence = 0.473216306172;
    msg.possimmon = 148U;
    msg.commmon = 58U;
    msg.convergmon = 230U;

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
    IMC::Abort msg;
    msg.setTimeStamp(0.422724887056);
    msg.setSource(9359U);
    msg.setSourceEntity(242U);
    msg.setDestination(32252U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.848879051521);
    msg.setSource(61370U);
    msg.setSourceEntity(91U);
    msg.setDestination(25293U);
    msg.setDestinationEntity(32U);

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
    msg.setTimeStamp(0.959159362141);
    msg.setSource(507U);
    msg.setSourceEntity(58U);
    msg.setDestination(53609U);
    msg.setDestinationEntity(102U);

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
    msg.setTimeStamp(0.266368693456);
    msg.setSource(4105U);
    msg.setSourceEntity(187U);
    msg.setDestination(4861U);
    msg.setDestinationEntity(175U);
    msg.plan_id.assign("ECFYEEMUXAPKCFMHBJRKFHJEHUQRJERDWBOPHMDWIHYMUNLHHKIKPFZYKNXTKYWIZDBJTLLCXGLVZOATTNIFLLWVVYKMCELGWARXHGUXRSFDMSENRBYXUEZIHPPQINWWGXSTWSTEPIVDASOXWOBPGLTGCGTOYDQJNA");
    msg.description.assign("RHSUVLDQMRPBANASVWDUIBESEHWRUZXKWOZOCSGQNFAWZOJJVDZUKITITGXWHFGJMXGRIQOWFBSYLQNWHHVMXCLLGEGXPTNZHAOAPHTAXIBMDUOAVXKSEQYBBTRPTAZPMVUXFKCWJGLIACLFKLUZYLDGQRIPVKMPCYILRDPYKXQNMUIMYJRFYDMSNEJVNOETCQSRDTEJWXBBBZFIULVFCATDTMBYKGNHKOZHHPNPJQVOJWCJFSE");
    msg.vnamespace.assign("QZXAESECLPVMENKAIZGTZXYKT");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("NUCDSNNOBCMVJAEMODZXYRGTDXBDEVNVYUIDTCFQBIVKLGSCAMWRMHKJYBARQHYKIMQXNUAKHCTSGKLJPKHKNMOCDOECBFEFWLUBPUSOENGLKLHHQERSSI");
    tmp_msg_0.value.assign("XTTOVYOIMXRTUKFJAQXEIRRFWZUWJFLSCVQBOVCAELEMHGDQPWPSTAYXNEVRAYTWLKCGYQJO");
    tmp_msg_0.type = 56U;
    tmp_msg_0.access = 28U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("BSKRPVHBIZWOTQGETFOWMHUIDLJTDWSQFKGCZRUSK");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("SMZRKSHNAPGWFMCQIQBUNTOIKZWFJUXPYNABLCCGBWVGQUBIIHQCQTTRQOOTGRHPGXZENLCEKHQSRYOZGPBMPAKXDSWJDEHLFWIQAVZYFYNFGMZJTMREROAUVTJAWDYNLPJYMSMVKHALXTOKJDUUFWDAMMHLJRCLZDEIUXDVEAKJEVGQMXGZFNCFXEHLJBAGFWCINLRSWBZTSOYBIP");
    IMC::CommsRelay tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.820231823513;
    tmp_tmp_msg_1_0.lon = 0.759393738342;
    tmp_tmp_msg_1_0.speed = 0.368839970775;
    tmp_tmp_msg_1_0.speed_units = 216U;
    tmp_tmp_msg_1_0.duration = 60221U;
    tmp_tmp_msg_1_0.sys_a = 28671U;
    tmp_tmp_msg_1_0.sys_b = 36513U;
    tmp_tmp_msg_1_0.move_threshold = 0.869943865957;
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::FormationParameters tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.formation_name.assign("BDEKXKDYUSOVFTMKXVCGXFAEODWEBPJLGQHJOPGJYXWUDLVHGMVKIQIYKBNBFMRUCSFWPCKZWMIDAEOQPZZRTRGUOEQSLATATMTCNXLWCTASUFXPQTHIUTNUVDHQZJBHMUPLBECTGOEIYJANSNUYRSRLZBKXGDNGBOPPJJNDZCSJJBSQZZRVVOXKLAWWFMZBD");
    tmp_tmp_msg_1_1.reference_frame = 244U;
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_1_1_0;
    tmp_tmp_tmp_msg_1_1_0.vid = 15729U;
    tmp_tmp_tmp_msg_1_1_0.off_x = 0.441446728669;
    tmp_tmp_tmp_msg_1_1_0.off_y = 0.872132847368;
    tmp_tmp_tmp_msg_1_1_0.off_z = 0.424365544552;
    tmp_tmp_msg_1_1.participants.push_back(tmp_tmp_tmp_msg_1_1_0);
    tmp_tmp_msg_1_1.custom.assign("NCFWLMYKHGTHKNOTBPXCBVKGWEMSRZUFTEINWZAGRFJQYZPFVAGQFEOISQXUAIOERLLVZTZKQPLSWLUNIWXCKLQYWPDUHWEPNDKCPRYUHXDIBC");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::RegisterManeuver tmp_msg_2;
    tmp_msg_2.mid = 50788U;
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
    msg.setTimeStamp(0.36944895103);
    msg.setSource(14387U);
    msg.setSourceEntity(249U);
    msg.setDestination(49127U);
    msg.setDestinationEntity(150U);
    msg.plan_id.assign("KREHSHUVVDXWGOECDZMPCGZYACFFUYOKEQENUELSAFOBBCLIGUFUYTLNFPRVIZOVDWTRPSZSAJONKQHMKAIONWRQKGREPIMNWOXPBQBLEZCQGYXQNQVTJSPSFFUBJJLBGUJDKWOJBATGSGPTAIOXWVYURFYZEWSLXCRLDXEDGEXFYQYILQAPXJAHCG");
    msg.description.assign("XFFTFLYMHYTMROCGHUBIRLMGCWZLCAFRMWUZVIETNNGLEATNCYWYDVHBPIAONGCXFSRRMMQAOKUHANFCSUBPNVUWZJXVZUITYGCKWFWXCFKZGEBBLRLMYIJAEEEYSBPSPCWLDVUIJTQPJXKQBNDZBPRZZPSQTMRHGKQEDENEH");
    msg.vnamespace.assign("FENJHGVSEFVHQCYPUIQYMXVLFYTQDOTYNWXLAMQWAHAKBWFWLXCIHUJIUJZKMTZSPTJWESPBOCVVLSZLDJJYUNVRPMXKMIIDMBNEQKGYTGBAEWNU");
    msg.start_man_id.assign("WSEGCIJWNPIDRNTEXESTEDWEQLAYWUJNIGBQDXLEMAALOXEIZLLSXGRZJPKLTLRYFYBUSRIAPVJHEWTUGDORSFUNFVBCKGZWDKLVJZUTUYAHBGYWZVQQGRHFVOTHQVNCEUKFOWRQZPDKFKDNSMZMJCIBSBQKMPIOINNPPGXYINDVRPPQXOCYFDMYOPFBLCMBAZHCNTWHWUZRBAOYJQJGVCHOIO");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("FFTJQSSQDNKBBLUTZCGYPDSFJEGMRBWZHMRPQTNONSVQREKSOHCGXUFDMJVLTDO");
    IMC::FollowTrajectory tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 58464U;
    tmp_tmp_msg_0_0.lat = 0.17069804573;
    tmp_tmp_msg_0_0.lon = 0.187420856126;
    tmp_tmp_msg_0_0.z = 0.952513437846;
    tmp_tmp_msg_0_0.z_units = 249U;
    tmp_tmp_msg_0_0.speed = 0.130973672938;
    tmp_tmp_msg_0_0.speed_units = 128U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.x = 0.976817752152;
    tmp_tmp_tmp_msg_0_0_0.y = 0.64129897712;
    tmp_tmp_tmp_msg_0_0_0.z = 0.422404203937;
    tmp_tmp_tmp_msg_0_0_0.t = 0.929894956391;
    tmp_tmp_msg_0_0.points.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.custom.assign("UBZIQKCDCFZFZZMDCSYAHUNNTCXLGWPODKDMNNJIRANSUKGUPJEMDWUWXRDZVNYQFSEIFBCXPAAUSCMEFCSVLYFCZNYKTBAASJYPLYREZTXPMWMXXROVYFGHRWKORLJQKTALYSULJLWNFDLOKXVKGJUKHEGHIQNBGMJWVZOUGJBOFVORB");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::DesiredSpeed tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.684510331769;
    tmp_tmp_msg_0_1.speed_units = 188U;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.142229539328);
    msg.setSource(41175U);
    msg.setSourceEntity(230U);
    msg.setDestination(36274U);
    msg.setDestinationEntity(55U);
    msg.plan_id.assign("VYAZJWKCQUT");
    msg.description.assign("TFATBQYIDVGPLMWCXYXZGWGNZDCKXBPHSIKWZWVRCIIGLTAPQNSEHQWUMEUUILZVNZNNMIIVTMCOFUSIDOEOETQFFLYENWEQEPMCQLDTDGBXSSUHFKTVGDKAWZSDLRUYLJXXJZCPRASKQ");
    msg.vnamespace.assign("VEWIWZQPDFBVRYQJSOFWLBJYQHBNECENAQKHFGPHARBHABISYABDVWNRGOOZEODIGKTOWHIFLLVIITGTFZSOSXESDOILZOKOVLCIRHXGMRDJMKNJZCTVNZCHPKTKLWPMGYDJXXUYJTQHRKEFXAOZAXUFDLUBSFQRGJCUDBQZESPMJVXCERQSMBGEWUPANAHCUZLTQSDVM");
    msg.start_man_id.assign("XOZOUXXVWALVQUVODPCLZZISZLAVJAFHBJFVNZQYJRLIBXOHYPGXIPKKGQMVKZOYCMBEOUJLASVKPECNTDICZBROBTJCPNTIUYNMALDRUHTRGITNWZNHIFTIXRFWVDMUQOTRSPLJGXFXGMOLJJXEYSJRSHKMFHCVUPWRLPEPWDNFBEYMMEDWLFXGNNSGMZYKUBRHSQBBPKFQQWYJUNBKQZ");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("TTCVZJAYFZETEQCNKFJI");
    IMC::FormationPlanExecution tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.group_name.assign("CCZWRYGKDOSJDDGWUTESIRZQGDSHTFWPYCVXBVZQHAMLJJHIUYTFAXTBCCDWPTAXJFAMAMGURXKF");
    tmp_tmp_msg_0_0.formation_name.assign("HSYAFEBYBVCGJAESPLHJTRGKXBSUSLJRZUKHAXBLMSYEWNYHOLYHGAXROYBPMCBGRKGIDDXLEWZZATPDTZVEPWAVGOZBVDKMCRGJJCVVWYQUCMUBUQKUWPFTMOQQLGAHLJDDDBKCNIIRNHNLWZKDATPMNPQVQHSLQYCKIJWOCTQRIOEDPFQKJXYRAOSFHPJWVISFXLTWCBNOQVINXOZGFANRFJTMGFFUCZIKEF");
    tmp_tmp_msg_0_0.plan_id.assign("ACNLUVUHXQYNUMURPEGATKIWBHARC");
    tmp_tmp_msg_0_0.description.assign("LPGVFNBTFTIBVFQSGNKQZDMXYBYSYMUPIMTDSHVQXOUZYEOVRSWDPVWEELRBACVYCIKJPTWNDAIZDGXNDCZTAHLMFTXWWANOQJAXXJXPIFZMOMVYRUJTWJJBEQBSEFJRMHOQHKQDRLSKBXARYJRZVDPGEACEAGCKLMLIXFIKHLPLDU");
    tmp_tmp_msg_0_0.leader_speed = 0.0566593188606;
    tmp_tmp_msg_0_0.leader_bank_lim = 0.317083738154;
    tmp_tmp_msg_0_0.pos_sim_err_lim = 0.489701764613;
    tmp_tmp_msg_0_0.pos_sim_err_wrn = 0.00175696688515;
    tmp_tmp_msg_0_0.pos_sim_err_timeout = 10504U;
    tmp_tmp_msg_0_0.converg_max = 0.98179735979;
    tmp_tmp_msg_0_0.converg_timeout = 23017U;
    tmp_tmp_msg_0_0.comms_timeout = 1596U;
    tmp_tmp_msg_0_0.turb_lim = 0.000643702425271;
    tmp_tmp_msg_0_0.custom.assign("BJPNJTMKNVXZORXNUBLBAZAGVSKKWHSPUZPVXHJMQLNUUMATNOIYCHRCRCMHLBBDJGYFTVOCWPDSCMWKMYUFAHZKUFWLNCIUYDIPUKKHJTLHGDJXLXMSOCXEQGXGXROGAGJCCBYASNSWDBGRWIXSAVPNZQQBRECKIVHEBNSZJELSYVTVDPARTQJOFWDUDMHVWAFYVNZSYIIQMPGDLEHDIGLURZROIEEYTIO");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::AnnounceService tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.service.assign("IYWFBXIUNNKZTMDPIOSTULZFZDSAIHJNADKGUULUBLPMM");
    tmp_tmp_msg_0_1.service_type = 110U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::OperationalLimits tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.mask = 84U;
    tmp_tmp_msg_0_2.max_depth = 0.273221466388;
    tmp_tmp_msg_0_2.min_altitude = 0.520119386776;
    tmp_tmp_msg_0_2.max_altitude = 0.00447417863938;
    tmp_tmp_msg_0_2.min_speed = 0.273871204962;
    tmp_tmp_msg_0_2.max_speed = 0.50211786992;
    tmp_tmp_msg_0_2.max_vrate = 0.0185021383633;
    tmp_tmp_msg_0_2.lat = 0.864445516903;
    tmp_tmp_msg_0_2.lon = 0.981797023902;
    tmp_tmp_msg_0_2.orientation = 0.734197638065;
    tmp_tmp_msg_0_2.width = 0.784946239283;
    tmp_tmp_msg_0_2.length = 0.400659504263;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::RemoteActions tmp_msg_1;
    tmp_msg_1.actions.assign("LSXLGKASOFBJBODZWFTCZESDONDNKQYZHAASJUSJIFWDZWTRKVQZTYVBJVPUHMJFURMIPGXHIFQOPUYOQINMYKOFTKBJHQEMURCVARTXPDCNHLRGISCMMWP");
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
    msg.setTimeStamp(0.17617414583);
    msg.setSource(32333U);
    msg.setSourceEntity(188U);
    msg.setDestination(62709U);
    msg.setDestinationEntity(87U);
    msg.maneuver_id.assign("TIRLGFTWKDCVPXMMYYUPCUBMKAA");
    IMC::Rows tmp_msg_0;
    tmp_msg_0.timeout = 5072U;
    tmp_msg_0.lat = 0.598262705667;
    tmp_msg_0.lon = 0.116652873139;
    tmp_msg_0.z = 0.443545631125;
    tmp_msg_0.z_units = 113U;
    tmp_msg_0.speed = 0.396951689065;
    tmp_msg_0.speed_units = 58U;
    tmp_msg_0.bearing = 0.429879407624;
    tmp_msg_0.cross_angle = 0.263057532195;
    tmp_msg_0.width = 0.172480974929;
    tmp_msg_0.length = 0.522677136717;
    tmp_msg_0.hstep = 0.148712050536;
    tmp_msg_0.coff = 120U;
    tmp_msg_0.alternation = 85U;
    tmp_msg_0.flags = 177U;
    tmp_msg_0.custom.assign("SIPGKJYHDUAPVBZKFMYCQTNPKOZOBMUWRUJHRTCGJEFDGHSTPLZCKELWNQKBDRTTNQLUNUIZQAXBJJGEEYBX");
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
    msg.setTimeStamp(0.00111775482577);
    msg.setSource(10120U);
    msg.setSourceEntity(41U);
    msg.setDestination(11691U);
    msg.setDestinationEntity(167U);
    msg.maneuver_id.assign("UHAVFFPCFBEWPBNIDRDYAXUHPPDZWXZEGLURMCYCXXQEZQMELFKULNQUHEOGWMIWQYPLCIAXENXVJKSBZYPRJJBSKBJNVLOCFDROSUNJVLFAINSWOSHGANRFNYTXWOPJHKBDHEMZOYQZAOJQKJTKTMZTGZCXRPHUQYJZTILSSGYDTSCETHIFQKRAYTYGULMDTOVENSVWLGCVEHPPOUDWLMGMVMBFTIKAGDISXJRCQWOZAW");
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.52464515702;
    tmp_msg_0.lon = 0.758560938801;
    tmp_msg_0.z = 0.0196931102901;
    tmp_msg_0.z_units = 45U;
    tmp_msg_0.speed = 0.523236253925;
    tmp_msg_0.speed_units = 167U;
    tmp_msg_0.start_time = 0.464815382445;
    tmp_msg_0.custom.assign("UHRAWYSNCQIMGCSMMZEDOKAOUJXSJVFUOG");
    msg.data.set(tmp_msg_0);
    IMC::EulerAngles tmp_msg_1;
    tmp_msg_1.time = 0.361330476016;
    tmp_msg_1.phi = 0.719473705034;
    tmp_msg_1.theta = 0.904309146962;
    tmp_msg_1.psi = 0.784023123017;
    tmp_msg_1.psi_magnetic = 0.219637685949;
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
    msg.setTimeStamp(0.707815691278);
    msg.setSource(22411U);
    msg.setSourceEntity(72U);
    msg.setDestination(32826U);
    msg.setDestinationEntity(135U);
    msg.maneuver_id.assign("LGKHATVEBYJZRLDPTQTIAKWNULPSEIYFDMDBAHQBCMIKHDLCKVGGMNVVCOUQYPDMXYGMRZTRHZXLUKMYNQVLUWJXVGEISMOUCCSTFXHOABJZEFWQHAFKSWRMUWKOLINOVDSOSPORZJKNSAGZIIFRAUMJYHQDGRNLRCGWYSYBXRHKQNOJYZOAJDVINVWWYBPQRGPSCCOXL");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 29188U;
    tmp_msg_0.lat = 0.966269615475;
    tmp_msg_0.lon = 0.577699974188;
    tmp_msg_0.z = 0.87280008034;
    tmp_msg_0.z_units = 242U;
    tmp_msg_0.speed = 0.482355333169;
    tmp_msg_0.speed_units = 62U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.273325908945;
    tmp_tmp_msg_0_0.y = 0.0267188708682;
    tmp_tmp_msg_0_0.z = 0.9883318547;
    tmp_tmp_msg_0_0.t = 0.561012771345;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("VJZLHPGMMNEEOILCMUSWWJNPKTINHZMJKQTLQBRRZRLFIXXPOOSCKFEZFVSYQPSSXUSYVSZWRDSHJQWXJQGXAUHDPUDTUBGRTYTNYACXHASXHFCKLUADADIZKWZLOWBCQNYUFAIYGKNBNECTIDCTQBLMEORWJAHEDCDVQZOVEXIVOBYMGRMRIYQPJEFPVLIHUMGGGFOZVEGYWBWMONJB");
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
    msg.setTimeStamp(0.92542227734);
    msg.setSource(21770U);
    msg.setSourceEntity(55U);
    msg.setDestination(50304U);
    msg.setDestinationEntity(9U);
    msg.source_man.assign("GALTYGDTTQIIKQSFYUHYVFKFRVVOZBDBTJOQEPJUZSUIFRTNWMKVPUCHUKDSWADZXZWOCAYHADDXLSURKWTNODKQVIPQRCTRKXYZMIBNRBCIPXOFGKEJJZACUIVRLYVKJIBMCEHRNFXSMOEAJUQQMHFEMYWLUYEXNHHFBJKYLHGRXLEWZGPJRBAECDPTVMOSGNGOPNNGGENAWQYEGLAVBZPIJCANSPTMFUHJBZTLOPQSCMWWXSMX");
    msg.dest_man.assign("RDVUBEAXJXULTUPCPYSODOJYPGFUHPBEBIAGSSKAIDUWEZVQPYIEXF");
    msg.conditions.assign("URQHBKPDQVVIWCCDMPXNAMBGHBWUUDVFIKFSDMDYBELMRTLQTUEJVMHVJNNZANOENOTGH");

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
    msg.setTimeStamp(0.430928656329);
    msg.setSource(1320U);
    msg.setSourceEntity(116U);
    msg.setDestination(20222U);
    msg.setDestinationEntity(247U);
    msg.source_man.assign("OHWCFAEEEZTIISHYWDWFAORKISKJSUZLRZYTEFIGJBFXFZNMHZVTGVJAUBW");
    msg.dest_man.assign("BKIJVMWHEYVNBTCEFSWGPEDPCYMSAZENZTGXGOOANKVQQOSPDLJCQXWBFIJMICZFFBSITCUAYWWLOHVZOOGXSQVJWKOSLGNGGWSMDGPL");
    msg.conditions.assign("FSQPAQPKVVXMEOHVJKCZJHNARBDRSMGMOZKNFKJPMOWBYJJQOLLIIUCBTMOPSLUFTEZQDSTLYZPIFCLYCUIYUDKRXDCPEHGOIEQXCFKNGTXSXRZDRGAXNWZWXYOLRDAEVOHJPHRTCVWI");

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
    msg.setTimeStamp(0.502934418191);
    msg.setSource(37693U);
    msg.setSourceEntity(127U);
    msg.setDestination(23903U);
    msg.setDestinationEntity(118U);
    msg.source_man.assign("EGZCVBQWLIFYJDXXXMICFCAYXBAKAIDCFSSQKDQPDFEIOBQKWJMGXPCHJIVIXZWABEWEXCHSHJHGATWLNRXUOOGVNJUDHSJYUOYKVWRNJMVEZVEFVNTJHPVCLSIQNQESYVWRERATKLBNBHMNPGZ");
    msg.dest_man.assign("MNWYJUEUHJQGHJGCLNTKDAWELXVKQGWXOCTERSLRQXUSLUOJTNMFRIXBLIRFPDBXZGMHQDIRZZDVSV");
    msg.conditions.assign("AXKLBYZJREWVGXKBDSQIQTPIEKITFEKNGGCQUHVZCGYXPWTOLSHCMNDCLVEWXXLHUJVPRIBFXQMAYWDLLLFQWXMUVAVVURKUUREHGQZPEIBLMGUVACG");

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
    msg.setTimeStamp(0.235500618906);
    msg.setSource(28288U);
    msg.setSourceEntity(30U);
    msg.setDestination(22178U);
    msg.setDestinationEntity(61U);
    msg.command = 105U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HDYFCVRDQUJELVYXRAHWAYVIXLOYXSWRVMFJMVWMXGDFULVWFOFMIJJLIOXDMKCKATBPATLGWXPLRPJZXBRZYWIHMSVTTQWKXOLACZIGDPAMFSKNXCBNBZQCZUENRKOFZMBHSMZPGWMJJGEDQSZKHQC");
    tmp_msg_0.description.assign("FHQEKWPPEZDOENVXNCUSUJPERKDYJSWOLNIFTKZGWDIWNJJFENDAZIKCMKHCSEHYBMKBCUKYEXSLIPFLVCHVPPHQQYZYIXHSVAYBZMALGVFUTDGFWMCCJXGSTGDZEAMAHSGUEADBJTDAGTQBMDBVUPOGRCKQTHMRZWPZBTCUOYYMFSJBXVXPI");
    tmp_msg_0.vnamespace.assign("RMBSZXNLSBEYCBYHNAFMEKCHJVUZXIJVFLTMRMXAAHVVQQFGPQSMBZFETNLBNGIETERASWTRFPOOCYCKFUNATSYKWPOVGLRDVQDJTOWZQXOBMJIJQCISCXYOZSBZGZTDUUXEIKBDUDOKFEJPTAGZWNLJLVFZTPMWVPEBRDPILQXYIQZIYDGUNWCRW");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DRQOQXDSKQOWZYEBDAVXMITIQHOBVGGUAIFCCJYGXJJOOVKCRRCBDEWWVBKSRXLGITMWSYHXCKYNHORYTHINODECZCYRQAOGMSPWELFKMRJTBATTLLVFKOPZYFBEJXEKJBHJPPXGRILDQPLQKMYFHCIAONFFIIBWSDFMVN");
    tmp_tmp_msg_0_0.value.assign("WRNVLHLLSWQAIXGXMAMLTPCQUQVLZRRAXZIWLBDDSPFGWSEKPOPKSVNUKSCMNQGGTXJTTIPEUYEOAHKFBHPJQRQIAYHRNOFCOJJKBQNYQHPGUUKDTCOLVMTXYSBGDAEPWZMZOFVPMRXINALZJWFONHXCIYJJVFQDGDKMTEOMJPCSFNOABUSKMWACXWYS");
    tmp_tmp_msg_0_0.type = 230U;
    tmp_tmp_msg_0_0.access = 142U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("PEMAYWVVGXGBNGCPNYQSSJDJVIPZCVSP");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("BCMKENKBQWYDMCEVZZPJSXNOEGBSPFUYGYXLLBDSVAGOTZPAQRUHULCKGWPIMMRXDDHDSZQOQZRD");
    tmp_tmp_msg_0_1.dest_man.assign("KUOUJRLKADMSQOYQFTNDGUJCRMAADHPOFCYZTLBFXIZUDLAHKDFVWYAEZHQDDBBHEGQKIPHCCYQTPPMYLO");
    tmp_tmp_msg_0_1.conditions.assign("UYAVYSOYONSQVIBJJPSSRTUXWXEGTBFCDCLHIOWKRKOBDKWAFQXXVPDFUHGNZJITZWXVFXWHAVSMALSKVLDSBOFTNYROWHYRADMTQLGJHNEIDEGQTDFMHCYMOQZLEGFBUARKTCCUJQPIUBYLBINUJRXFSPTRPZRAEIGAZDHZOHNGRLNBLT");
    IMC::LeaderState tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.group_name.assign("HODRUQWZXSAFQUGZQPQ");
    tmp_tmp_tmp_msg_0_1_0.op = 6U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.856898796032;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.033206130584;
    tmp_tmp_tmp_msg_0_1_0.height = 0.0489046949628;
    tmp_tmp_tmp_msg_0_1_0.x = 0.604152414656;
    tmp_tmp_tmp_msg_0_1_0.y = 0.931659991142;
    tmp_tmp_tmp_msg_0_1_0.z = 0.59821338359;
    tmp_tmp_tmp_msg_0_1_0.phi = 0.834075612315;
    tmp_tmp_tmp_msg_0_1_0.theta = 0.142066173797;
    tmp_tmp_tmp_msg_0_1_0.psi = 0.542675414737;
    tmp_tmp_tmp_msg_0_1_0.vx = 0.827335186262;
    tmp_tmp_tmp_msg_0_1_0.vy = 0.717693605304;
    tmp_tmp_tmp_msg_0_1_0.vz = 0.497535865915;
    tmp_tmp_tmp_msg_0_1_0.p = 0.150836624187;
    tmp_tmp_tmp_msg_0_1_0.q = 0.397643768693;
    tmp_tmp_tmp_msg_0_1_0.r = 0.340390408248;
    tmp_tmp_tmp_msg_0_1_0.svx = 0.189058539242;
    tmp_tmp_tmp_msg_0_1_0.svy = 0.755485830577;
    tmp_tmp_tmp_msg_0_1_0.svz = 0.282386666363;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.967695091848);
    msg.setSource(42307U);
    msg.setSourceEntity(109U);
    msg.setDestination(11061U);
    msg.setDestinationEntity(89U);
    msg.command = 228U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("UWEFTHPIHQXAQFBASUXSVXRKBXDVHEDHQQUFI");
    tmp_msg_0.description.assign("KWLZWSIWXLKJZHRMSYZSTOYXXDEHUKMNBHDPNRVXCSCPUBYUYZZO");
    tmp_msg_0.vnamespace.assign("YRCQVCNBZFSOVDLYSBUENNIXYBSAJUZTEIKSMQATMFIZUWVFHPRYPNGMLBGNXGGPEVJGXHVJTXFWTNOEOLYSDPLKOKZYTJMXBUVZJIZKBBBLOAWORSCFRIWILPTYPRDEKZSAYCBSQVQIWPLPQTEDHRCKQWICKHQYWRLLVWXIMFZFNHNQGNPIUDDMPAKWJJDGMEQJHVERDSRGNCLAMMAEJUXORST");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZWPRAVOTKTVHKOILIYUBBFAOLBNWVCNDIMAMCGTQAAEVBSVPNLYZHGMUSDEVOUFBSMDJPPUIXXKKFKABQNCACWLECJCHFRJZHMFREOPFYTYWTLYOYQKRXNDNIQXOIKLJCRRJWAHISHMZEFIQJTDSCKOXXJQCSMPKLHEZVLDCQFZTER");
    tmp_tmp_msg_0_0.value.assign("SYWCWTPFZHYYIPFVWYNAFMQZPLPNLUVNWBGMKASTVRLFRXIMBHMHNOZMOOTZAHXWOBZGUVROGTKRMVCMSRQUBUDATNDRWLSSMWJAJNPGUIIFSBLQJEWRBYCFKEKAB");
    tmp_tmp_msg_0_0.type = 125U;
    tmp_tmp_msg_0_0.access = 78U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("KYLWFBZGBMWXGSUUIVJOTTZPMHYUKMDZOTQPTYOGJ");
    IMC::PlanDB tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.type = 75U;
    tmp_tmp_msg_0_1.op = 188U;
    tmp_tmp_msg_0_1.request_id = 22242U;
    tmp_tmp_msg_0_1.plan_id.assign("OJDVWWNHQLUXUXLRZQEBPWUGTZOFUJOLYTCBWAVHRZJUIOEGGZISYXPJKJNPYFHMMGEDOSSHKNXHMWATBPLLAMEOVUZZFQKAIQADOLPLKBNBQETXNMWXDUFXVMNHXUDVCW");
    IMC::ControlLoops tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.enable = 185U;
    tmp_tmp_tmp_msg_0_1_0.mask = 2349722436U;
    tmp_tmp_tmp_msg_0_1_0.scope_ref = 3180398001U;
    tmp_tmp_msg_0_1.arg.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_tmp_msg_0_1.info.assign("BRCHIZHLUCPOARNBOPIMVFIXD");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.303753145148);
    msg.setSource(43874U);
    msg.setSourceEntity(96U);
    msg.setDestination(6398U);
    msg.setDestinationEntity(30U);
    msg.command = 95U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WXSHVAVGSFGGLXTBMFRPZCTJVQVKIJFJTQOLJUERCJ");
    tmp_msg_0.description.assign("KORPXVTCCGARNYLKVEWSECHLJJVLHNAQBODBDPCYIAUOJFTYUFCUGSSQOZXYCGMCKJSUNKRZWKKFBPVQ");
    tmp_msg_0.vnamespace.assign("RMJVALEERIWJOTHJOLOCXEPQWRSYBGUDRWZWYTEICFMXMNPVIFUHNJVKBOIQVOZQMUGDQGXNDKKQSWOROECQPPNFNYVDEIBUTGIIPDBJHXVUYEZGSKAEYJAFGNNHLBPSLYHDRVCERQTMLDWJX");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("MXTNBZFCWPSGUUMYZFWIOYUGEKQHKTTDCVRJCNLNSWEYZFEOZAHBNSMUBXLOFZYTQMAPWVLQCAPCUHKWCSRVUDTHVPGJJELNELKZFMZPHBBSVYIAMAJWWXHWMVKQU");
    tmp_tmp_msg_0_0.value.assign("PKXMLNQFJCHPWHGNBNPDNPDNQXZTPRXILMAUICIGGFBBCPYIAXEENKKWUDROSUTBKCPCKQQMHQHXFGRSWOTAKFADVYVQBJFFJLWKRQOORWQOMSGLVGBUBVWYLSFZMNDAADZMWJSNSDPFJUCKEQRJLEJMGTTBUNOGKHUZVRVOOSEUB");
    tmp_tmp_msg_0_0.type = 110U;
    tmp_tmp_msg_0_0.access = 124U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("RWKAXJOSFIZIFCRT");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("YOTPVKHTRFMAOEQPNWAOECSYIDJGMODIVZIJWIEAFGRHTNAXTHLYHKPTULARHUGUXRZMFEXUVNGRFESGHBLWKRRUESQGYGWKWHVBYBYMPPBWMSAEXCFDJRCZRQWQBQOUQEALNCTPSQSADOIZCKVZMLUVZQPCKDCZOQBLEXJCFBGT");
    IMC::StationKeeping tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.75492413116;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.23632507263;
    tmp_tmp_tmp_msg_0_1_0.z = 0.901846711786;
    tmp_tmp_tmp_msg_0_1_0.z_units = 182U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.0910044918817;
    tmp_tmp_tmp_msg_0_1_0.duration = 4573U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.0101653747646;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 14U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("LDRPULQAGOFFX");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::AcousticDiagnostic tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.enable = 89U;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.214695801142);
    msg.setSource(11491U);
    msg.setSourceEntity(48U);
    msg.setDestination(906U);
    msg.setDestinationEntity(228U);
    msg.state = 123U;
    msg.plan_id.assign("DMLZBIRQYWLQEHTAAWECIUNIXOSOSZEAAVYSEIVFYGHMOCAJUBPYGGCWFNBMKFMPWTHQBBBQEDZEKHJTAMRQMTCKGVIAWTKPYJKBCLPWVXLSSBXODYQSWASVQYDLNJZUPVFNTBOVLJAUWMRMIFDCZTPXJQPRIGXFJGCDXKGUYOYJOOLNZCFQEADSHUCHCUGKWP");
    msg.comm_level = 176U;

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
    msg.setTimeStamp(0.832694532532);
    msg.setSource(18534U);
    msg.setSourceEntity(123U);
    msg.setDestination(9393U);
    msg.setDestinationEntity(244U);
    msg.state = 73U;
    msg.plan_id.assign("FWTAYMKMTAMLEOLAPJBZDOJVDDQKMGAVKLQXDPTCCZCKCEKGFZHHWUCBHITOGVLDIOWRZNEVQYXXLSMPUXHINOQPNJNFNXJBWSCYQUEAEQMNHJDZQRNGYBUDYCWXMIHGIODOWPEPRZFBVIEPWIKXRJMIBZMTUCLNPTKGLBYASOSSANURWZHQHDSZIRYRSISVRXGCJFPBGELKF");
    msg.comm_level = 192U;

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
    msg.setTimeStamp(0.0527556584645);
    msg.setSource(58562U);
    msg.setSourceEntity(116U);
    msg.setDestination(21811U);
    msg.setDestinationEntity(139U);
    msg.state = 153U;
    msg.plan_id.assign("ZLHJPWZLCMOUELBNIBIHXPCXXPCSZMTJGOKGSGHSDURYELJDBDIHQVWBZAFEMAIS");
    msg.comm_level = 26U;

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
    msg.setTimeStamp(0.217733024367);
    msg.setSource(41289U);
    msg.setSourceEntity(231U);
    msg.setDestination(59982U);
    msg.setDestinationEntity(141U);
    msg.type = 149U;
    msg.op = 49U;
    msg.request_id = 20704U;
    msg.plan_id.assign("QSTAWNLJXOWXBHWEFPTYZTXEGNOLRLHZXBUI");
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("FNEDPIWKMGCVYVTEQZJIWHCNAZIOVCEJMPFPBIFOAUXJVBTQSWAOUEHRCRFGXRVLQOSHDCVJDXTLAYJIGDARUHDYSURTCYVGELBYKKIHWFBEUJQLWLJAYDQKEDFUBNOMRMFLAXIRWXBIGJKWAINSVKSKBLCSYNQMBSTTYQZOUAFNRXPGONPAZZURFPZERODKPVOPMLJZHHQZGXTXUMCIBHZW");
    tmp_msg_0.service_type = 142U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("OMKIODRTDCMIDDIMSHDGBPUVNQNNEBOKAQQEUHXSIXXJKCVVNCYURFUEMRAUHFVHZAIOYSGWBSKYOITRGVBMUFQCKASFYOEBZLZJMVXXISWFNMKPEACCTSPTOOREAJUWJSTYWTHHUNPFJYFNBMQPBJZACLLWYWAXQRJVBLIIK");

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
    msg.setTimeStamp(0.790069748368);
    msg.setSource(27701U);
    msg.setSourceEntity(120U);
    msg.setDestination(64787U);
    msg.setDestinationEntity(171U);
    msg.type = 16U;
    msg.op = 129U;
    msg.request_id = 55433U;
    msg.plan_id.assign("UINGYMXMYXFGAFAHWOFOXFJBVVLLIMQOFSTABHHRQEXITALCLDWRGCNBDMCLGQMWSVKOJEBXVHYNPKMIZRESD");
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.23681637323;
    tmp_msg_0.type = 165U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VWFVUMKQEIDLCQNLRMKMEKYLXBQBZDDPRJGLGHWDAPKXAXRJCINAQ");

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
    msg.setTimeStamp(0.223882696953);
    msg.setSource(25661U);
    msg.setSourceEntity(70U);
    msg.setDestination(54827U);
    msg.setDestinationEntity(164U);
    msg.type = 24U;
    msg.op = 59U;
    msg.request_id = 6973U;
    msg.plan_id.assign("TLASZJVZIVXENLXIXJXETUYKDFMEFCGGYFZOPKTUJQCIEOYBHINWNYSADLHSAMNQRBSQZFHULROPGQRUNHHPDASYRWHYLSCIJBNTGPOQXXZFGJPOUTZPILNWB");
    IMC::Acceleration tmp_msg_0;
    tmp_msg_0.time = 0.407135641003;
    tmp_msg_0.x = 0.0867429487982;
    tmp_msg_0.y = 0.399415491346;
    tmp_msg_0.z = 0.220106625402;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VEKWFDMEGROQSVWJIOXQQBBIHLUAZQEHKYGJXHBOOTWNNVFAOUNEGLBZQTGCDVYNSYLCOIDYSTLCZFENDBTAMAL");

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
    msg.setTimeStamp(0.0881841544482);
    msg.setSource(53735U);
    msg.setSourceEntity(27U);
    msg.setDestination(64278U);
    msg.setDestinationEntity(17U);
    msg.plan_count = 43029U;
    msg.plan_size = 1659244893U;
    msg.change_time = 0.0562835194514;
    msg.change_sid = 34955U;
    msg.change_sname.assign("MDTZVHPVWBTMBFICUXKGTEDZXT");
    const char tmp_msg_0[] = {66, 87, 14, -85, 58, 70, 56, -87, 71, -128, -90, 121, 25, 121, 105, -125, 36, -106, -10, -79, 7, 95, 9, -95, 92, -34, 87, 14, 14, -34, -23, 9, -45, 102, 79, 102, -115, -37, -34, -75, -81, 63, -43, -12, -54};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("JMDSVQGGPQHNYZFRUIBGEGMRJOGAVDMQREKTUKPTRLHLVWJHBIEMPOZCCLYRESYKWXIFEIHSXYTWJDQAGAHMGLRXKLHERSNCNRCNQFUOIOVWPUZYFCSFZRLQEUWBZAXLUCUPNSUVSICCKWLVOGLWIKCJLYPQKJDXBNYKYKXFBONRJVEAQAEAOBIFJETTTVZVZC");
    tmp_msg_1.plan_size = 35594U;
    tmp_msg_1.change_time = 0.656962887675;
    tmp_msg_1.change_sid = 31849U;
    tmp_msg_1.change_sname.assign("LMARMSHPARWHQ");
    const char tmp_tmp_msg_1_0[] = {-111, -33, -74, -71, -10, -108, -128, -10, 34, -47, -48, -15, 113, 102, 61, 117, -6, 122, -53, 53, 77, -112, -109, -6, 100, 76, -4, -15, -12, 3, -52, -117, -48, 16, -12, 118, -102, 88, -21, -96, -37, 9, 27, 108, -70, -104, 24, 91, 96, -78, -8, 122, -128, 43, -20, 70, -100, 14, 90, -53, -44, 63, 11, -40, -95, 55, 73, -109, -83, -106, -2, -83, 0, -80, -99, 42, 2, -97, 94, -110, -55, 27, 83, -68, -26, -69};
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
    msg.setTimeStamp(0.657278860987);
    msg.setSource(40643U);
    msg.setSourceEntity(94U);
    msg.setDestination(17916U);
    msg.setDestinationEntity(93U);
    msg.plan_count = 5790U;
    msg.plan_size = 971361565U;
    msg.change_time = 0.0208933881327;
    msg.change_sid = 46737U;
    msg.change_sname.assign("HFQACXYYHTTQIZQLIQYYCVNPMVPFFQQHOPHNERXDCYWRDPSZDDBSGBUPIKOREOLFHUJ");
    const char tmp_msg_0[] = {-21, 111, 80, 113, 110, -117, 45, 113, -48, 109, 25, -66, -113, -3, -34, 48, -43, 125, 13, 67, 66, 13, -99, 34, -117, 98, 9, 16, 90, -78, -72, 47, 59, -128, -126, 18, 72, -96, -17, -14, 6, 23, -41, 61, -26, 78, 0, 41, 119, -118, 115, -115, -126, -73, -112, 61, -101, 58, 87, 94, 108, 116, -112, -116, 124, -45, 25, 105, 115, 116, 101, -40, 29, 30, 73, -75, 76, -79, 108, -120, -37, -58, -28, -57, 105, 26, -120, 65, -100, 123, 23, -15, 0, -93, 111, -114, -39, 10, 65, -77, -13, 27, 41, 21, -28, 63, -89, -31, -128, 124, 85, -79, -36, -8, 33, -124, 118, 86, 106, -101, 36, 62, -67, 8, -22, 4, -4, -122, -35, -74, -16, -34, 122, 103, -70, 67, -55, 48, -18, 89, 15, -95, 53, -121, -5, 18, -78, -96, -87, -17, -105, -86, -113, 55, 60, -84, -121, 63, 17, 65, -89, 105, -12, -8, -105, 115, -79, -63, -17, -53, -120, 110, -74};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("PHJJYNBGEOYMBRVWFNRSOFHZUARBEXKMZTWBJHRQNJKIFALSYPWNXCIJVZXWNXYDBNWQSMNDMAUKCWVXLBSKPRACDRZKFADORTVHGJKAHXXCYUTQQESM");
    tmp_msg_1.plan_size = 63734U;
    tmp_msg_1.change_time = 0.839423006131;
    tmp_msg_1.change_sid = 1863U;
    tmp_msg_1.change_sname.assign("FYDWDEASLHNQPTVJFUOZCUAZRSLFDRQXJKKGCRDUPHQHILZXMFJZZCRRHYKXOIDQISTLOWSIWVLXNYBQCEXJTTOYAWLKEPIWBMIKEGCUNOTKGZVXGTUHUTMJSBFAXKAMOJABZAWMAGABCBDDL");
    const char tmp_tmp_msg_1_0[] = {-120, 57, 94, 49, 122, -61, -19, 75, 114, -32, -7, 94, -95, -54, 43, -60, -114, 114, -59, 38, -104, 90, 74, -21, -109, 109, 82, -36, 126, -104, -21, 63, -68, 97, -1, 7, -118, 37, 50, -74, -102, 47, -106, -14, -62, -10, -128, -4, -45, -34, 72, 39, -123, 77, -21, 77, -112, -101, 94, -95, 10, 86, 35, -36, 100, -84, -11, -36, -115, -118, 34, 32, 29, -114, 29, 54, 50, -85, 125, -106, 74, -106, -28, 38, -67, 61, 10, -27, -27, 30, 9, 117, 59, -123, -72, -96, 118, -64, -77, -7, -56, -31, 99, -71, 25, 3, -1, -63, -95, -64, 5, 34, 12, -33, 117, 7, 21, -96, 35, 103, -52, 116, 119, 11, 23, 20, -42, 72, -7, 91, 40, -92, 69, -102, 12, 116, 14, 56, 25, 5, 30, 17, -114, -53, -89, -18, 125, -48, -2, 16, -47, 71, -59, -92, -29, 42};
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
    msg.setTimeStamp(0.380311309336);
    msg.setSource(57623U);
    msg.setSourceEntity(90U);
    msg.setDestination(53024U);
    msg.setDestinationEntity(225U);
    msg.plan_count = 9205U;
    msg.plan_size = 665163074U;
    msg.change_time = 0.951546618036;
    msg.change_sid = 29255U;
    msg.change_sname.assign("ONYXJTETNSLKBCMJPKPULIOHAWBHYZRBXPPRONFPRNLJOSKCUITR");
    const char tmp_msg_0[] = {-127, 125, -34, -63, 41, 26, -20, 81, 108, -63, -37, 42, -29, -71, -28, -84, -9, -58, 69, 71, 58, -58, 126, -96, -117, -36, 99, -44, 8, 75, 126, -104, 84, 7, 44, -98, -94, -32, -86, 86, -77, 89, -113, -91, 63, -54, 111, -38, -117, 90, 83, -105, 15, 92, 1, -26, -89, 22, 45, 90, -8, 4, -121, -42, -127, -113, -50, -66, 102, -12, 32, 104, 29, 27, 66, -103, 45, 83, -55, -114, -124, 90, -127, 0, -74, 37, 34, -71, 34, 53, 48, 47, 68, 120, -83, 42, -46, -13, -51, -101, 24, 7, -13, 115, -111, -92, 9, -6, 95, -45, -26, 75, -107, 46, -36, 16, 72, 7, 107, 86, -10, 38, 55, -65, -34, 82, -79, 96, 122, -110, -119, 52, -62, 18, -77, 54, -88, -23, 122, 126, -115, -2, 111, 45, -62, -99, 66, 116, -76, 12, 122, 118, 97, -34, 115, 90, 51, -106, -122, 44, 48, -48, -56, 52, -55, 61, -42, -93, -57, 96, -79, 71, 97, 84, -51, -3, -85};
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
    msg.setTimeStamp(0.836426859955);
    msg.setSource(51973U);
    msg.setSourceEntity(20U);
    msg.setDestination(9588U);
    msg.setDestinationEntity(147U);
    msg.plan_id.assign("OAZUWTLONCJFPPZZGQSLMWWNAFZUCJOVVIEVDMPIHCYHZHWSPGQAABVNJGXJBVDDBPZKMUIDNRNBQPFRRBOTPOPVLBE");
    msg.plan_size = 18736U;
    msg.change_time = 0.93012319525;
    msg.change_sid = 61302U;
    msg.change_sname.assign("GNOJLERHAWWHVDIITPFXNOJIYVHMESAGLKTQNYS");
    const char tmp_msg_0[] = {72, 70, -44, 3, -50, 121, -77, -51, 24, 17, -44, -104, -126, 51, 119, 12, -51, -128, -40, 28, 42, -64, 77, 57, 107, 21, 13, 102, 83, 23, 120, -41, -19, -49, 29, 27, 104, -31, -73, -52, -45, 37, -11, -21, 86, -62, 7, 120, -115, 26, -126, -67, -55, -106, -68, 29, -90, 57, 34, 84, -36, -42, 99, 107, 3, -30, 26, 58, -106, -23, 117, -112, 114, 126, 20, -121, -78, 30, 104, -126, 101, -58, 17, -87, -75, -85, -98, -41, -93, 17, -21, -91, -72, 101, 80, -7, -108, 19, 113, -81, -100, -39, -49, 65, -77, 4, -3, 78, 74, 99, -115, -42, -81, 32, 29, -13, -7, -126, 68, -58, -6, -119, 119, 109, 63, 14, 59, 77, 62, 74, 46, 122, 23, -38, -62, -103, -40, -102, 82, 52, -101, 63, 85, 107, 17, 49, -90, -107, -9, -1, 11, 60, 96, -79, 62, -55};
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
    msg.setTimeStamp(0.283788288931);
    msg.setSource(36257U);
    msg.setSourceEntity(201U);
    msg.setDestination(11668U);
    msg.setDestinationEntity(250U);
    msg.plan_id.assign("DHCBGNLXGDONNXIHWVJFDPSMNQKGKFSHL");
    msg.plan_size = 10852U;
    msg.change_time = 0.742401964928;
    msg.change_sid = 47962U;
    msg.change_sname.assign("UODRNVQEGLXUPVSGAEGYBFCAORGBYQIDGYNGWHOBSGHKEJFBTDFDOHUJSWUEPBWPNITJLVUOPGBRCONLAQXJAVPZRQZUDSPBFMNTMLYDMYTNUJXGWCHKFZEHIKOAJNJYLUWXQBOKCVMMTEYJVFRNZLPECLAWQISDTIYTZUBXPC");
    const char tmp_msg_0[] = {102, -22, -88, 62, 34, -43, -44, 32, 94, -25, 51, -85, 67, 108, -67, -55, -9, 25, 92, -92, -23, 21, -84, -24, 66, -65, -80, -44, -105, -100, -32, 105, 98, -121, -91, -53, 35, 49, -83, -63, 59, -124, 106, -17, 97, -59, 90, -56, 71, 21, 102, 66, 66, -12, -70, 3, 54, -93, 79, -128, -112, 8, -65, 122, -84, 78, -81};
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
    msg.setTimeStamp(0.859183424991);
    msg.setSource(10170U);
    msg.setSourceEntity(14U);
    msg.setDestination(62087U);
    msg.setDestinationEntity(240U);
    msg.plan_id.assign("LBRSYUVIKIVPSKXWLYCFQT");
    msg.plan_size = 20851U;
    msg.change_time = 0.417219815559;
    msg.change_sid = 22254U;
    msg.change_sname.assign("OPZPILLREAGTSUMNTATRFHQVVYIUBJJMYXHUAJEFCEWGULNHGTKYLWLOQYFBKFFVGDKPXCRBXIU");
    const char tmp_msg_0[] = {-18, -79, 43, -108, 84, 36, -90, 88, -97, 62, 78, -124, 7, -76, 83, 78, -95, 103, 57, -66, -108, -93, -81, -78, 35, -88, 7, -126, -68, -109, -71, -98, 48, 61, -49, 49, -14, -97, -85, -55, 17, 40, -14, -54, -79, -75, 67, 59, -103, 41, -120, 83, 106, -12, 12, 82, 90, -8, -63, 56, -57, 80, 67, -23, -82, 34, 40, -15, 116, -66, -36, 65, 85, 108, -44, -41, 16, -78, 17, -35, 121, -34, 122, -12, 120, -69, 74, 119, -72, 25};
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
    msg.setTimeStamp(0.231079566209);
    msg.setSource(42066U);
    msg.setSourceEntity(192U);
    msg.setDestination(30341U);
    msg.setDestinationEntity(221U);
    msg.type = 121U;
    msg.op = 23U;
    msg.request_id = 38371U;
    msg.plan_id.assign("LOUQBJHQKKAMCPBSMOLRGJUXIFJVDIUARGWJGTTSUZXPMHHAZFUZHAMAELEGONRNNMTRQPPMETIESYYMWDERMVFZSLICPDVWHGXLWUZBVJVXDIZYXRIJHZLDYKXVHABJYWCHAFLFSHPKWBCTBNKRNONCKWWVTSZCQXYTFOQPRVQPCLAEDNSKFECGLFYTUDSPKGQIBAYDEFAJDMZOFNXQSRN");
    msg.flags = 27474U;
    IMC::DynamicsSimParam tmp_msg_0;
    tmp_msg_0.op = 26U;
    tmp_msg_0.tas2acc_pgain = 0.771649943113;
    tmp_msg_0.bank2p_pgain = 0.52729405357;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WAXFGAGYZZQJXBXPIAGYSVDBYYMLRSIIADETITSMYODTZQNZSOKICIEYUCJMCPNHRPACQVDERYRJOJNRURKGVCKWPYCGIUBHTXNKKZPRMOBDSRABUNCNNGXJUKAPWPLGFVEVTFFQTNDPTHHXUJRJMTJHYZQIFFWHEFWVKZQHBAVXLSLLOSAZRIFXSMWALEKMODEUUWEWOMBQBLIQDUFVETTDWBESHBMCNVGKVXLXHONZHKY");

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
    msg.setTimeStamp(0.929229450573);
    msg.setSource(32677U);
    msg.setSourceEntity(205U);
    msg.setDestination(62097U);
    msg.setDestinationEntity(53U);
    msg.type = 184U;
    msg.op = 32U;
    msg.request_id = 43313U;
    msg.plan_id.assign("ROSTNADWNZMVOIZGJSQNOLZHVMTLQLUWXPBCPMJWGYVKJMTJGAOCMHSQSAVWBLVYFEIICFVZDPKCTVQ");
    msg.flags = 45456U;
    IMC::RSSI tmp_msg_0;
    tmp_msg_0.value = 0.77561786675;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NWLVFTXEHSDTROIQIHOSBEVTURZCCLGABQULVKOGBVCQSQ");

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
    msg.setTimeStamp(0.979046545075);
    msg.setSource(54588U);
    msg.setSourceEntity(199U);
    msg.setDestination(10073U);
    msg.setDestinationEntity(57U);
    msg.type = 57U;
    msg.op = 198U;
    msg.request_id = 19262U;
    msg.plan_id.assign("LYRNISJPMQLRUOZBLIDEVVCLSVYRVQMHVWLUBTCBEJYCYRICRXXKAKSSDTYAQNEZDWTVKBJPTGXRUHBWPTXAZKZEHZBKFNONIHNUUBADVJTAFLQXWHGAUGRFXMSFDPCEJJWFNGRMOWGHYFSXOEKDICHLLVQZEUDDSMXUGQHPAYENSKBMETIIKJOSTWJOCWLPEQGSMZZWKIRACQFOQUYHOZUOZFYBMNPGJMACTWNOAX");
    msg.flags = 16303U;
    IMC::DynamicsSimParam tmp_msg_0;
    tmp_msg_0.op = 59U;
    tmp_msg_0.tas2acc_pgain = 0.354366983523;
    tmp_msg_0.bank2p_pgain = 0.189683495023;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("QFOTWPNOUCWTAYLKCKRVHOKAPWFGPWBPUQMMTLYOIYSIMLTXEHEVIJPUJZEPVQDKMUSACEWQZKRJVLKDOBFWOGIDDKZHHHXABGKEEFVNYDHHGFAGJFGUYECIRCQJGSGTFMSYVSDMIPEIXRUMGNAUCZOEDSHBGZVQZPLPIJ");

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
    msg.setTimeStamp(0.1606943221);
    msg.setSource(38841U);
    msg.setSourceEntity(108U);
    msg.setDestination(48116U);
    msg.setDestinationEntity(254U);
    msg.state = 135U;
    msg.plan_id.assign("MZUALXROKVEKDUTWTOVQNBCUEMITDDPZHJFJFZZDEVEKJFXKVEFTGSTDGDRARDWBMIZGNUPXFOCYLRJUGDZQTMSKILOILRKCPQKQYYGHNSBNSAMYGLQNWUMWWNAQKHKHPYMXOELSHQETRFNOAYAAWQPBLUXXEDVADIBTICVBROPCJNWUJSFSOAIMLJCIRBHCICAKQSZMHLHYCGOWRJQPYPVIEWXBNPBBZFXUSGFXMHJRUVOHTFVEXGGSWVZZLN");
    msg.plan_eta = -1907208394;
    msg.plan_progress = 0.962990029415;
    msg.man_id.assign("HUJBYJAICVCNQHKFPRMNKFLWXAALBRBPPLHGWDQOSFLGBPGSWWIUUVTXLVEWKESKDPDPOKKRLWSXMURDNQVNUQFUMZTFRSJJCHPDMTFZDKVZVERCJJHEOGOSOGPMEMPXYNRTIATKLIVGIZOCVLFXUEKYMUJZHAZYMITBHROJCYSXAYQIMSNDIGLQCEJYOJOUXAZXAHBFZECHNHUYFAWWTRF");
    msg.man_type = 27347U;
    msg.man_eta = -516930863;
    msg.last_outcome = 77U;

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
    msg.setTimeStamp(0.460917234602);
    msg.setSource(43573U);
    msg.setSourceEntity(142U);
    msg.setDestination(37883U);
    msg.setDestinationEntity(69U);
    msg.state = 244U;
    msg.plan_id.assign("VGPITVHKTVKOPFCGOEKIMBBH");
    msg.plan_eta = -469326784;
    msg.plan_progress = 0.220517390058;
    msg.man_id.assign("FSZZZJKKMWOEUSEJJLUNXJVSTGAUFAYOPUTTIBKOKMLFNIQPQOAYSGUZCDTRJEHQCHBCLCQFWICKUCWJNHLYFFSPAHIVDUCPCJQGBZNSDPEKBRTLQLVZGRYPFTLZWTOQZRAMIKHGCLBWIEDPPBRVZSLREJMXINOBDOQJXABDRUFWTXSNGNEEOQBNMWZYHYXWYMKXHEVRAAYWSFGTGMJPXHDLXAYMAOCNWNIMXUHRIMTGDEKVYIVRXOQDVBK");
    msg.man_type = 17335U;
    msg.man_eta = -1044047962;
    msg.last_outcome = 47U;

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
    msg.setTimeStamp(0.53181270662);
    msg.setSource(32974U);
    msg.setSourceEntity(131U);
    msg.setDestination(7774U);
    msg.setDestinationEntity(218U);
    msg.state = 11U;
    msg.plan_id.assign("IPIKDBDJYPCEVORBELOUGEBCGHUWVNRUZHYTESAEXWGTQGNKVJQWHBLCHACNFKVAGANWIDYVSVOPIYNKHPVDSDEWDJLSCZQLEBNLIFSAFLFEUAYYUDPQTKSHGNOTZDJFZGXJXJSIFMOKUJBRZUMLJBRQRRMWILXLSQXDGEATMQZOUHBWHUCHOMENCVNQXFYRQXOHPMZOMTTAJFABYCMRTPZJZPYISWFOBKGGRT");
    msg.plan_eta = -2011513991;
    msg.plan_progress = 0.203350811736;
    msg.man_id.assign("YTAVZHBKSEGDWDNFTGMJKEHHEXZXYJMKHIUYLMOPQWPKEVCNBJVTPPMDMVQIGLIWYAZWZBKMKOCZILVJQVWRXXIUGCKDZFYWTTQTLGVXBLFUWTFILHFSI");
    msg.man_type = 51849U;
    msg.man_eta = 73807424;
    msg.last_outcome = 218U;

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
    msg.setTimeStamp(0.997718144907);
    msg.setSource(33329U);
    msg.setSourceEntity(124U);
    msg.setDestination(15184U);
    msg.setDestinationEntity(58U);
    msg.name.assign("RZFOPAAKKIGRMISHERECPUTEXCBJCFZPGGECXCZLBMGJZYKFJJJUVZTDLWOFAXKDZUNWYAYOHNUQWEEXFXQRJIOISQFWVPATPBLLSIMDQFASGXPSCDRADTRTDNJNKLMHNSQAKYYVTHGSTWKFBVIBSIDBJBP");
    msg.value.assign("UVJCJAXDQLOTERFODEGBWKTCSAWSQYEMOBZRKXNIFZDEMEYHVCKDFVJNXEGHZABGIGQYYRPTRTYXTFKOPDUWSOPLU");
    msg.type = 203U;
    msg.access = 234U;

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
    msg.setTimeStamp(0.510975205439);
    msg.setSource(36376U);
    msg.setSourceEntity(23U);
    msg.setDestination(8541U);
    msg.setDestinationEntity(204U);
    msg.name.assign("XGMSRFFONXPICE");
    msg.value.assign("VHVYVRQGZYNNTWGIDYOZOGHITUWTUIUIFHRSXMTKSBAGFHJVEQPOSQUXERDHVLBFONEKXQVFUENMWECBDLMHDWMKYXWUZEGRWUCXOARLHDMTOTDZPXAYRYLCQFRWBIXKOQLJDJOXNSPUKJDNRB");
    msg.type = 187U;
    msg.access = 229U;

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
    msg.setTimeStamp(0.321828889955);
    msg.setSource(3563U);
    msg.setSourceEntity(70U);
    msg.setDestination(9067U);
    msg.setDestinationEntity(41U);
    msg.name.assign("PSFJOTHXKLKMDNJAZLFBMPNDTARXWRSBNMQKPOCUWIYITSFTZOPQVLAJCWKTIGMCHCGWJXKQJGTAGALEBMMMJQTPKREQNDLUQFGYAULRNNFOIHERRQCYWOGYFLAZTVSGEUVBXEDQXZOPYPGBILSCYDRVUNMZDKHDWBVVWQ");
    msg.value.assign("ZYQYZGRNRIBPTDUAFEIGOKYEFLWNRSWKCXNLPGFKUVYNHZHNIAUNZCDLGMSMDTQWQTTTKOXWYDXUJVHSCSEWELPZVSQQURCCMHJIUAVORJJDYPYLJUGKMAYYYHQIILPVADTRIGGERSSSWQORFIJPCXBJNKNACJKTPNLBCUET");
    msg.type = 90U;
    msg.access = 54U;

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
    msg.setTimeStamp(0.654656954726);
    msg.setSource(40014U);
    msg.setSourceEntity(199U);
    msg.setDestination(53989U);
    msg.setDestinationEntity(206U);
    msg.cmd = 104U;
    msg.op = 42U;
    msg.plan_id.assign("NNPODKRWLDBKIAJLDCLIHFSTZMRHHEQMFPOWEFIIIEVWEHXHJGPUBMMCJZBBMMUZKGXKOZTEYSLWPPYENPKJYHKJLUIGLYQQYHBXIPIXFTIOTZYRZFYREBFENLJKTWXNTWZCCSZCTRDVUQNHPOUUSSGNRAXVWJFOBBVMRGHGOQFKCGWCXOSKQMVXLAOFKDZBSIZTUNHLJJRAUAYFRWMTPDRAGCVDYMCXUAYSVWGQAAVSC");
    msg.params.assign("LIFIBXPDQSDZCTCJIMKTJQNPHZTWKSTRDHMZNTOPJJUHRCGHYASZNAGVRRNYOTFIVWNEOFKDKYNRECPA");

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
    msg.setTimeStamp(0.23047010578);
    msg.setSource(45232U);
    msg.setSourceEntity(235U);
    msg.setDestination(43978U);
    msg.setDestinationEntity(43U);
    msg.cmd = 168U;
    msg.op = 171U;
    msg.plan_id.assign("LXRSJTOCEEYTBSPZMPSRKDEIKWHBTTOTJMXDZIWIGQMGIPXHNMLFDPEYNJDHZZUKUTGHQYYCAJZILJGACE");
    msg.params.assign("ILZEVQMIFMHTYZYPOUCSTUNXIXHVOEDZFYVWONXLVQDENFKMWBKTYKMDBKAOJXGRALPYECXSOAFJVAI");

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
    msg.setTimeStamp(0.931478828546);
    msg.setSource(39861U);
    msg.setSourceEntity(97U);
    msg.setDestination(44471U);
    msg.setDestinationEntity(131U);
    msg.cmd = 231U;
    msg.op = 145U;
    msg.plan_id.assign("SWCBZVOLSSFIXKQTYVSLFFTAQUHODNRBDCPWNZUDUNXAMCLYGNIEDDOPJFZUFQUQYKJYRXMTVBRWGXBPWQJYREEVASZMNJQOTMGOMHOQYHDWYWNTKZWQWGBBEZJKAFZFFRHULOIXLAKIKPLUMFDRHJBNJTSUJPLTMKPA");
    msg.params.assign("PNAKULDEXICUNGPPGJJXBRTHWDSEHOVILUZECBMCHVTDWYQXMUWOGIRYEEHKOTDXMDNPTQDKZJSMBQSGONASVWMAQVXOAPLJYUTXQNHOKZUMCSORWCRGBNJGQZOMXEYIUARHPVWYTZSXQBCIMAQFUZEFCMKSFJTHAFUKPRGDGBHQWVNMJYYNQLKFOWSSBLNTRETJIIWELVPZHEYDVBJCLATZPJLKLHRKVFKDAXFGRAWUZNCBIFZPGLCIRIB");

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
    msg.setTimeStamp(0.674398008706);
    msg.setSource(58385U);
    msg.setSourceEntity(43U);
    msg.setDestination(26615U);
    msg.setDestinationEntity(121U);
    msg.group_name.assign("EMVLOUNGQIDXSQWDOPUCMKLVFCPWFTIZRFBMCTRUYEFERANKNIQX");
    msg.op = 205U;
    msg.lat = 0.361461727631;
    msg.lon = 0.358479103489;
    msg.height = 0.961224413094;
    msg.x = 0.908148715819;
    msg.y = 0.00159722958772;
    msg.z = 0.0451180532347;
    msg.phi = 0.967185385614;
    msg.theta = 0.284583361627;
    msg.psi = 0.438258729028;
    msg.vx = 0.343172979117;
    msg.vy = 0.395352594366;
    msg.vz = 0.795740957712;
    msg.p = 0.617140817881;
    msg.q = 0.953961312064;
    msg.r = 0.230752167575;
    msg.svx = 0.786299538401;
    msg.svy = 0.792160395996;
    msg.svz = 0.133169968394;

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
    msg.setTimeStamp(0.993923133528);
    msg.setSource(50225U);
    msg.setSourceEntity(103U);
    msg.setDestination(26614U);
    msg.setDestinationEntity(106U);
    msg.group_name.assign("DSQHQWRHTGFCPWQRVJLMISAPAPXZRANNJUTIWTAUDCNRZMVBDVFLUYWISFZZEXIOBWXRIOESOKERESDQFEP");
    msg.op = 57U;
    msg.lat = 0.746795075308;
    msg.lon = 0.18852204765;
    msg.height = 0.7085985053;
    msg.x = 0.489806695002;
    msg.y = 0.993793827683;
    msg.z = 0.700759466786;
    msg.phi = 0.0180258541647;
    msg.theta = 0.132412479553;
    msg.psi = 0.446735918418;
    msg.vx = 0.739903410086;
    msg.vy = 0.336128869851;
    msg.vz = 0.412688941;
    msg.p = 0.567800327818;
    msg.q = 0.442004903788;
    msg.r = 0.325918592165;
    msg.svx = 0.546060720804;
    msg.svy = 0.718793720253;
    msg.svz = 0.0828809981891;

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
    msg.setTimeStamp(0.276112690527);
    msg.setSource(46195U);
    msg.setSourceEntity(127U);
    msg.setDestination(31080U);
    msg.setDestinationEntity(83U);
    msg.group_name.assign("YGSJUREDZWSXLPVHLBBLMQXWFKFPVNCBPQQKAAKAWTDNEYOG");
    msg.op = 124U;
    msg.lat = 0.91904395247;
    msg.lon = 0.816207931057;
    msg.height = 0.122045642594;
    msg.x = 0.88382196574;
    msg.y = 0.918859802667;
    msg.z = 0.912255644215;
    msg.phi = 0.997742149047;
    msg.theta = 0.244564826722;
    msg.psi = 0.39633045526;
    msg.vx = 0.400934636327;
    msg.vy = 0.389945608662;
    msg.vz = 0.980318348617;
    msg.p = 0.163858959502;
    msg.q = 0.698100483321;
    msg.r = 0.681544535265;
    msg.svx = 0.663506151607;
    msg.svy = 0.72751497741;
    msg.svz = 0.670535555438;

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
    msg.setTimeStamp(0.923110780894);
    msg.setSource(34845U);
    msg.setSourceEntity(138U);
    msg.setDestination(2160U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.889762395888;
    msg.lon = 0.419530662951;
    msg.depth = 0.996333997013;
    msg.roll = 0.642703568838;
    msg.pitch = 0.333407148974;
    msg.yaw = 0.639735184481;
    msg.rcp_time = 0.221945737899;
    msg.sid.assign("ASCHWYJLVPEPPAYSFEACYGGOKUGTHPVEWMDFUKCKIVBNFBMGVXMGRRXOSADWBQUIVXRMOAZLOQWBNHFJZZVDNQLJUHID");
    msg.s_type = 123U;

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
    msg.setTimeStamp(0.111253967817);
    msg.setSource(11411U);
    msg.setSourceEntity(253U);
    msg.setDestination(141U);
    msg.setDestinationEntity(17U);
    msg.lat = 0.181771147844;
    msg.lon = 0.939333028279;
    msg.depth = 0.0283682926755;
    msg.roll = 0.964710121332;
    msg.pitch = 0.476542073424;
    msg.yaw = 0.424369716737;
    msg.rcp_time = 0.718603513479;
    msg.sid.assign("XLZLASWRXKCYMKFWLQFBJSPAQUNBQMQGNPOOLBHFRAVESCYZAOURUQDQKNMCXEUVTRCMMHIAGCTJJWM");
    msg.s_type = 178U;

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
    msg.setTimeStamp(0.831279119042);
    msg.setSource(38453U);
    msg.setSourceEntity(120U);
    msg.setDestination(56312U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.477612542355;
    msg.lon = 0.674819421352;
    msg.depth = 0.276023423371;
    msg.roll = 0.117184234004;
    msg.pitch = 0.576545699026;
    msg.yaw = 0.598336444022;
    msg.rcp_time = 0.349511454062;
    msg.sid.assign("DRGNJAPDWQSLKLTPUAJKLYIMHGIETKHCEJBDLRDFNWEZSOKDPPBNIZUXXMOFLGUIQVMUXHQHCGLKNNVWLZSEUPSFMDATIBUYIQP");
    msg.s_type = 154U;

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
    msg.setTimeStamp(0.839119045341);
    msg.setSource(49960U);
    msg.setSourceEntity(166U);
    msg.setDestination(26511U);
    msg.setDestinationEntity(31U);
    msg.id.assign("PASHQXTBBHDAJMOCXFPAPNQQRTIELJGBCOBIIRVGFNNLZUSAG");
    msg.sensor_class.assign("FXMDLSMJFRMJRDHPLJCNLVOPVVSUKNQTWUUSVGIVMKAUAQXRWVZWUAEOZZQIG");
    msg.lat = 0.621973667462;
    msg.lon = 0.140472157698;
    msg.alt = 0.503709943211;
    msg.heading = 0.212553027871;
    msg.data.assign("KBWIZJSDTQA");

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
    msg.setTimeStamp(0.17023787181);
    msg.setSource(50378U);
    msg.setSourceEntity(253U);
    msg.setDestination(27800U);
    msg.setDestinationEntity(45U);
    msg.id.assign("YAUXPNJWTVDWMLDGLRAEYHXWADYOCYWAK");
    msg.sensor_class.assign("BJKTKYDGQJYSKPJSPDLQKQDSOALBXZATXHTUVCTWWXPZUIQDRGYTHVWMHRAQOYOVBTFLFZSSKFVSSFUMGCBIHRAPMBOWVSRZLRXHUYRTJRENAGGZCPJDCNIGPNDWQLNCFFKDVCIFMFRHEQYKDTWAMIJEVETMAWPIXHJYXRQVOCLIEJKGAFDMWIBZLYLKENJCUEYFEQOWJBEXPBOVKHPY");
    msg.lat = 0.100553130773;
    msg.lon = 0.518466843748;
    msg.alt = 0.124263943363;
    msg.heading = 0.317804837709;
    msg.data.assign("JDNDPZEPAWMPKNZBTWJRPUAMTEDFHEEKIRDLBSRIZYAUIICKSVHIGOCDWXSSBTJWAEIOGOPLQLACQNCAIVSBOWXUNWEFVRITRGULVNMZOTABWPLJFTGHACLAMPYJMSRVSPDOYYIGEJYFTUOCGLDHHQQGCQTQFQZLOKQDTBZNXBYWJJKDMMPFEHGUVONMVAGLYFBHXZFXOYXHRXKWIEKJEXKX");

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
    msg.setTimeStamp(0.703924490662);
    msg.setSource(18605U);
    msg.setSourceEntity(136U);
    msg.setDestination(49692U);
    msg.setDestinationEntity(74U);
    msg.id.assign("RZHVESRZAAYTDBSIIBQCSPQFASXTNZFNLWYKTGUGSCIZTUXPBAJSJDWKAICMXGYRRVJJOEAUFEHOEFHAVKONRLDFAMNLVDMXZUTSQZVJEOGOKXOQUMCHJSKQHKCPBPXWVHEBCBCKY");
    msg.sensor_class.assign("OQJVYNCCWKORFUKVBPOWEMKPNELIWAXOTEUFHOZHQBMABPXAXKLGGRSPRBKHSUGANUSFDZLVNKYOKCFPGTKMI");
    msg.lat = 0.270909066581;
    msg.lon = 0.245894156576;
    msg.alt = 0.710573077686;
    msg.heading = 0.132976677176;
    msg.data.assign("WQJPNHFLVSJHHIGDREBOKGZACPEAOKGDABKAVNPIJFMANLMJZDDPUSAYSFPLIORZRBMTTSHPYDSWRCCAHWFSMMOVGUKOJTVEFUDBTDZTWAHGRIYQCSOIXKOBODTLJKDZXITYG");

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
    msg.setTimeStamp(0.780342499635);
    msg.setSource(25043U);
    msg.setSourceEntity(210U);
    msg.setDestination(16843U);
    msg.setDestinationEntity(220U);
    msg.id.assign("OQYATIOJTEQRROPUWBAXJKXQVGMLHJYXZJYPZLMNPBCSZPOIGZCYFGCVFSUMYUNZHDARZWSIOAMKUEQIOKJVRJNAYTFTQNJTWPNWHOTCSQDPOBAMLIUISKWDWCWCXLAPLWRBTRIPNYRGODRHKKHSEBQFNDDGHHHUJDFAUGPXZLW");

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
    msg.setTimeStamp(0.801086195604);
    msg.setSource(8834U);
    msg.setSourceEntity(93U);
    msg.setDestination(25078U);
    msg.setDestinationEntity(128U);
    msg.id.assign("TAWPIMVYZHMQPJWDWASOQKOIDSOFOFXPOLNQRCZPUNGRQRKLXWYR");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("UCHZREIPDECCMWWROONNSXDIUUDDABYWTNZTLVVXUMJIPDXXJEIQWFPDRBZQNVVZCKSSWJZXWQAQKMZJFHGDAJCLMYIERHRKGGEXRUJKMFOIYPRXBVAJOXTNSQMBDTLOSHKSHVAZBHHPDCGMWCCRQQNTPLIFCTYLGMFYSAFLBRODYGPYEKTWSIUXWTH");
    tmp_msg_0.feature_type = 203U;
    tmp_msg_0.rgb_red = 129U;
    tmp_msg_0.rgb_green = 214U;
    tmp_msg_0.rgb_blue = 179U;
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
    msg.setTimeStamp(0.172949364533);
    msg.setSource(10841U);
    msg.setSourceEntity(34U);
    msg.setDestination(22611U);
    msg.setDestinationEntity(164U);
    msg.id.assign("LWZHCDQOTGVEBRZRLTRAAUIMY");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("RSIYJZWTRNODWATUFDFURNCHWXUHHLGBCMEIJPTPJNPUGDTJHKDYEXAUYXWFXGEEKWMPQCLBQSZKJCLLBMTORCCKXDLDFSDWUFGBEDGGJGDEJPYASQJQRNBZYIQQKYVRPMFCVVXLTBIRQZNMVOOYKOTCRKWIKCVZARYBZBLSVAXOAPGGHZXTUVMIZPLQNHZLNESRMQVAAHFCOHZIVKIQWNSEP");
    tmp_msg_0.feature_type = 163U;
    tmp_msg_0.rgb_red = 69U;
    tmp_msg_0.rgb_green = 191U;
    tmp_msg_0.rgb_blue = 127U;
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
    msg.setTimeStamp(0.840886595142);
    msg.setSource(13191U);
    msg.setSourceEntity(168U);
    msg.setDestination(47621U);
    msg.setDestinationEntity(171U);
    msg.id.assign("JFXHXQESPZAUDRTQIMFIPPMPFJZWTPGJVECOGUTURLRRTBEOETVEUZMGJQHDGOCKMVYSGNHFYVFMIOHHJNLQISOEFORLUMYKSWDOUTUEFKGYHCZPXDSPNWLFBDNURCRDMWWNNCPRPQPISXQFYDJKZLYEEAANQYBHAXCCZDLJYSXQWQQHHMNLKGWHCKWVASGMVZYVROKLIVALTIKXAFOWBDIBXJXBBGZA");
    msg.feature_type = 182U;
    msg.rgb_red = 141U;
    msg.rgb_green = 185U;
    msg.rgb_blue = 47U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.861718622312;
    tmp_msg_0.lon = 0.0428513111858;
    tmp_msg_0.alt = 0.360652421602;
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
    msg.setTimeStamp(0.67621987833);
    msg.setSource(58920U);
    msg.setSourceEntity(5U);
    msg.setDestination(28835U);
    msg.setDestinationEntity(159U);
    msg.id.assign("XRIKCJGATEWKMOEPRXTGDGTGPSFLORTZLHVEGFHIJIPPHYVJMKBYASCQDOPYODYZHUJMTLWJYQRFITMCMFDEAXBPIIBUQOWZDXBKWQFHCAVVKNEULABDCQSUNYBZPYFWRSAFJGVQGAIVFIUMBCGMIBAHEDQLZKMTLNNWRZZRXPCYISDDOKSOFKJZXWCQRNEZLSMSJKXJNKGTLUSUXCWNLNXBQEHQ");
    msg.feature_type = 34U;
    msg.rgb_red = 77U;
    msg.rgb_green = 135U;
    msg.rgb_blue = 198U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.7676233208;
    tmp_msg_0.lon = 0.100727747088;
    tmp_msg_0.alt = 0.691381918566;
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
    msg.setTimeStamp(0.422594439506);
    msg.setSource(61119U);
    msg.setSourceEntity(81U);
    msg.setDestination(58848U);
    msg.setDestinationEntity(250U);
    msg.id.assign("TEYFLXRAFJXSHHUBZWISWORCWVECZQBJJWMBMUMSB");
    msg.feature_type = 171U;
    msg.rgb_red = 189U;
    msg.rgb_green = 101U;
    msg.rgb_blue = 67U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.388499165874;
    tmp_msg_0.lon = 0.276335254458;
    tmp_msg_0.alt = 0.383451706622;
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
    msg.setTimeStamp(0.784323684452);
    msg.setSource(4218U);
    msg.setSourceEntity(169U);
    msg.setDestination(54720U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.433639396711;
    msg.lon = 0.142075993207;
    msg.alt = 0.900955630964;

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
    msg.setTimeStamp(0.210051659676);
    msg.setSource(27663U);
    msg.setSourceEntity(14U);
    msg.setDestination(20000U);
    msg.setDestinationEntity(25U);
    msg.lat = 0.579366371014;
    msg.lon = 0.119329275192;
    msg.alt = 0.154418910486;

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
    msg.setTimeStamp(0.209230049425);
    msg.setSource(32105U);
    msg.setSourceEntity(148U);
    msg.setDestination(56619U);
    msg.setDestinationEntity(195U);
    msg.lat = 0.964663455149;
    msg.lon = 0.340049603945;
    msg.alt = 0.365637118682;

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
    msg.setTimeStamp(0.181200827375);
    msg.setSource(19034U);
    msg.setSourceEntity(4U);
    msg.setDestination(8759U);
    msg.setDestinationEntity(133U);
    msg.type = 233U;
    msg.id.assign("TJCXZFNHGJUQMNEHRPRAJZYBXCMXPSLEGSPEWACRBLKYCPV");
    IMC::TrueSpeed tmp_msg_0;
    tmp_msg_0.value = 0.200310608917;
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
    msg.setTimeStamp(0.696580013784);
    msg.setSource(23013U);
    msg.setSourceEntity(55U);
    msg.setDestination(36469U);
    msg.setDestinationEntity(120U);
    msg.type = 59U;
    msg.id.assign("AINLSSMBQYMVISQQSTICKVDQNRQFDVOTKEUGCJBIRFYHDNPCCMPRELCOAZMNRYXSBPQROZKHMGNELLDWFCWRWTXUIYHGKNXGQXHFTETWETFKOLZOFWBUZBKWTJTDJUERPBHPFDJOSHIAVLXWHUQPALSZXAXQMZUCVMLIPCLKMFXZKTBPUYFKGYYGWUPSAZOENEZZVNIEHMJUWAIETDXIVBNDOYQHSBJ");
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("HYFWDRDXKFBKURNXYGTOJQUQNODBQIETMABSHDVVXCTBMQRZSWHWMDWFEVHKNWIZQXAKQXAWFJAEUNYCLHELZDICGRYGJDRALWOFLLYKBPPCGKRBDXXZVNVVJOMZMVOAGPTGGORRUQHJBGICFSUIYGSHPZRPHNFUEQMPPZCONENERQWFJUNPPTMKSHSBIEUTIFMLPAJZOLCMICXVLUY");
    tmp_msg_0.visibility.assign("NGHTJOQIDBFSKJPDNCXYLBXLVCHCLQXWFDNHRTAQPEATHIZYEZFKGRDIXACLRBHKVJDWSATUYQDGNOAAMUVWVQSIFRZCUXZVXJLANRGEGNOQO");
    tmp_msg_0.scope.assign("WUDBTEQZNMOFMETVYMPLVKNWRLOSBKHVCSXIGTAKAAAUQNGCGPZTIEJDWHYSQHRLBTWPZZMLTUQWXQZSVKPZOHYYZKMJBSUQBEANLEIRVIVXQDBOJZXQYUSYSPIJLEFFGOHOHACEDCIFQKCFHB");
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
    msg.setTimeStamp(0.373934855787);
    msg.setSource(24337U);
    msg.setSourceEntity(148U);
    msg.setDestination(65287U);
    msg.setDestinationEntity(51U);
    msg.type = 186U;
    msg.id.assign("BIIQOXDDVKVHEASOQDUWNURNPBQZPQZZQPSYURLAKTGHTIKRMSQQAOAVLRJYV");
    IMC::TeleoperationDone tmp_msg_0;
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
    msg.setTimeStamp(0.761062935684);
    msg.setSource(30776U);
    msg.setSourceEntity(19U);
    msg.setDestination(1512U);
    msg.setDestinationEntity(102U);
    msg.localname.assign("NDPTSOMBDCXVWZHFVDHJ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("KBGGLOSRDCFDVKEFGKFDBHEZRNSKRJTZPWEQMPSQFYZPDOGSWHZTXTHHZTLNCNJLICHHXDBMAIXWERIRJMXABWADXYN");
    tmp_msg_0.sys_type = 190U;
    tmp_msg_0.owner = 45938U;
    tmp_msg_0.lat = 0.972242363656;
    tmp_msg_0.lon = 0.503989208063;
    tmp_msg_0.height = 0.761621880033;
    tmp_msg_0.services.assign("SWTFVJTHJWBEZVOHBDQQFTINP");
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
    msg.setTimeStamp(0.620326484);
    msg.setSource(20997U);
    msg.setSourceEntity(165U);
    msg.setDestination(59280U);
    msg.setDestinationEntity(133U);
    msg.localname.assign("MWGFWWHQJPCEDZJIERTQFAXCJDSIUDVNFLEHTMQBMOAKWOMEJZ");

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
    msg.setTimeStamp(0.525597090001);
    msg.setSource(9144U);
    msg.setSourceEntity(12U);
    msg.setDestination(30781U);
    msg.setDestinationEntity(216U);
    msg.localname.assign("JKGXPKJLUIUBLYZOOIDHIPIEQKAPCDNREVHUSFHGNWDNJSROVRMAORYECKOAPSNHPCCRDBTBJZAXVLGSYQDNGTCFGWVKCLJ");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("QFXFJPEICOPGMDNRYFRYISNMANXGMAUBILDJFNDFBYHVLMRIBBQLSEBYLHLOOTADLUMSTPCEBCSIDAMWVDJS");
    tmp_msg_0.sys_type = 150U;
    tmp_msg_0.owner = 43473U;
    tmp_msg_0.lat = 0.0985133511818;
    tmp_msg_0.lon = 0.146706746905;
    tmp_msg_0.height = 0.145536208204;
    tmp_msg_0.services.assign("ROJSPSUVXEXQWVOMJASVIGLNJFMSXGXACRNQYKLYSNWMKHWZEJYEYFNQNRJMMLREPITZOOBWLKQOFZODOCABMBGLRSRDKVWYZASNPQTXYQBHMOBSUAIQILVIHIGEFRLECNBZHTIQZ");
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
    msg.setTimeStamp(0.665573734866);
    msg.setSource(40907U);
    msg.setSourceEntity(68U);
    msg.setDestination(58863U);
    msg.setDestinationEntity(142U);
    msg.timeline.assign("JWANCLSPPXCDYLNPIHNAQFJTACXJVRCMABVICOZDUBQBFHKJOOXDJSGAIXVEORYUEUDIVYNRNTEFFNUQIGOWKLKVBLFOZSZ");
    msg.predicate.assign("VSAJSUPBMAHNJLCXK");
    msg.attributes.assign("XDRIPQCXQMTNZVKCFQGJNTCLHTHAWYAUBEJCJKRRYUEEYMEBHYSYFDUFCWFQGOEVGAOFKHGXEAQGZVYSWSHIIPPBAZPDZWLZJNNPHBTKPNQCORWVSMWQOFGBTKDZCIWELOOXUNUNARTVBMRZRKIJGCYUKORLBBAEXZIJGVXZTBHXJVTFDIPFPGQULWVIXAMFNPSLJJHBYRMKJXNYULIWOVKSDYSQN");

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
    msg.setTimeStamp(0.123880177888);
    msg.setSource(10571U);
    msg.setSourceEntity(235U);
    msg.setDestination(45469U);
    msg.setDestinationEntity(133U);
    msg.timeline.assign("KFLTJRPGBOVOEIBXFPEBPCMUNJXTBLZWVOOGPPNSZCWTQWUUSIJYQAQMJAKXZRQHHHJCNBIYJJOZKYVBGEFGOAUNSDXYPPLZVITRHXEMVNHDUCTEGXMWBTRIVSYHKTWXJWPCCSCFOHIYEAONWDWDLCBDMWFXHUUP");
    msg.predicate.assign("RCIHSNNEESTVYNRQYWQAZHTUFCVZPSRDMXAWCNWBUIEYDVHALHPJVYQBDMMOHBYDEJBZITXRPRSZOXJISMOUBXISESALLEWEXUPODUJDHZCTJALLXLLMOPGQIKNSMOKLQJWFCDFRBZKJVFXXAGIAYBFVQGBVRFYCNXPBHPWEFJFJGTXDZCKIAQKGCMGEWMALWUMNURKOGCYPMLOTVNFKYERQRYDHTOUWGJKVZPTKHIUWSHTNIVAFP");
    msg.attributes.assign("OQIKZNGFXJUDDVOPBUHILKPHZXJMEABDHUWDUJTVTBLWSHZGFCIOUUBCZIYMMFWWSSVICWXEPZTQALALYWUYSTBPMJJCVDPPXVSRYGXPTCPMDZQFSCMHFYFYWQQNQLVGKTNURMBEYRQARYRTGRJVEAHJTGXTZVFGKNLSGJPHLNRQHXBOAENFOGZSDECRYLIIZKKXB");

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
    msg.setTimeStamp(0.843647745354);
    msg.setSource(50093U);
    msg.setSourceEntity(252U);
    msg.setDestination(22003U);
    msg.setDestinationEntity(197U);
    msg.timeline.assign("IBFCTTKJPADHHLKNXJUXSPPLBEJGJHAORPZFNZABPHQTDRXNEJFKHXRMSHDOGLHMORRZZQPRSSZYYDMCLNBKOZS");
    msg.predicate.assign("TSPWFBBPHMFTDRNFXOBVIFYCHTBDYHQUEWJJGEKWQKYONLVGUXJEUMBCIBLIXLMKVHMFPTJJMVINGYRRIKKOLCDCQAWGYJNHYQZBGZPOPMKIPBSSSXDZZOUQZIZAFREXOSQILAMAVTEAGJVNGFNUFCHCKUCRKADWONXEMPTFSDANYZXGHQIGQJURYSVYSRTSEGTKDOSLFYMJZZNTOAPVDEOWXAEQHCBXVWTNARULUDBW");
    msg.attributes.assign("WTDZJSWDNHVTMZLWXQHTUOJGVYOKKATDBQZRHDTXLNIZXHDFEIVHTNUJKWDAMQPQQMWFSXIENHFMVJPUOWYRBAYRPOEZZTWRWCOGUXBCAPKTQFBEHTZIFTABWYFIRPNRYROMIRVAPMSXAVMBHSISJSIGXEELRCPSQIOPYKLCSZMKLPUCUYKGNMJEZCFYLGDJCWDGFYHLB");

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
    msg.setTimeStamp(0.972410061819);
    msg.setSource(40618U);
    msg.setSourceEntity(158U);
    msg.setDestination(13339U);
    msg.setDestinationEntity(212U);
    msg.command = 87U;
    msg.goal_id.assign("KLOQGKVRWTXABMDUIZRLTRUFKKXURWMTLGACCZQRAZYAFYDGKXLZBISEBAWSVNOPWZQMNNEITCKFOIIZJXGYHEMTTDJJLNUNPUQBBHIRMPOJXJGNPHOQHMWSGXHSECSJIQBYQZLYCIPLTSAEDHKFQUHGXFNIVHKOVUPVOJVVBRAFPSBZGXVEIJUWDPSCJUQWBCGMEAAEYZECYCVRFZTYLAMLFFMWXUGDKLXNWRONMNFSTPHTKDOJEBY");
    msg.goal_xml.assign("KXDLNBKPYSOAMVSYQYTSVSIZJGLGNMOQRYNTQVHIZRASYDMZXQULHWEGEOKZSVADNVSUDCQXCKVBRHBBBNNVAWFHDGHXEMFLGKFJMQZQADXMCYFYTNDUGTLPPCOREEPSIIPPGFJTYCTWHIPOKXDFSXVRCZZWJFBQUOWWEJXHZLNIUCNEIMDZIHJJQFAPAIJQFOUA");

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
    msg.setTimeStamp(0.949236851171);
    msg.setSource(3974U);
    msg.setSourceEntity(131U);
    msg.setDestination(11324U);
    msg.setDestinationEntity(21U);
    msg.command = 70U;
    msg.goal_id.assign("EHXTNUKMLLQOPTZDHICWOZCRPBLVFYTDVDERGAKEVRSPEFGAHRUWPFWRMBVKQTWQKXGDXTUPSBVOGVAHHYBYFSDKLZIJBPAFMPXXSGIDYGLACZWNZSUJCNTYIUWM");
    msg.goal_xml.assign("MQVLDVGPSIKSJTEZUGOMESFCTCQTGGYAYXOYXLERFNAVBLILWESYUBSFDZGBJSNWHYJDXYZHKJFVCAVCWXGDZRYAUNNFVHINWDP");

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
    msg.setTimeStamp(0.491750654331);
    msg.setSource(64704U);
    msg.setSourceEntity(10U);
    msg.setDestination(33951U);
    msg.setDestinationEntity(176U);
    msg.command = 136U;
    msg.goal_id.assign("KYEXESAIGPVPLXYIHPOFZALUGJYQSEUIEJAQCXUWZORXBQKAZHMKTKYMSTHLYZUWJDBHGUEGMIYTCCVDYPECNJNUQNPVLCSWKFS");
    msg.goal_xml.assign("SBMPVOBOIYWTGNUEN");

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
    msg.setTimeStamp(0.598792964832);
    msg.setSource(44045U);
    msg.setSourceEntity(159U);
    msg.setDestination(39413U);
    msg.setDestinationEntity(146U);
    msg.op = 18U;
    msg.goal_id.assign("XIYVTWVLBXYXVKBADVIKSJVUBEFWQMONZEXGRGDNPYRTMULJCFTDTXFOCLWVPKWQSSSJEIJMCOYBAWQPHZMAJUSERBZSCTYPMMFYOLNOANOCWZEBGZJJUKXZAJZOQYVQVGKJCRTDUIQLRJWHNZOHINXMEMULQKNGEEIFVUHGPSLWRLDFKEANHPARBOAFGCRLNYOFCTQDEGYDUMSPUWGDLFXKQFSGWATTPSACUHKRDPHXYNRIIHBIBZTZBI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FSZIKKFFRGYYTHBSXSHUCMHPGJZVQWAFXDERBYCODQJVAAGNJAOMECGIBTVJUZVONWPIZRBXRQDOSVMYELFQMIXNYQJXKFWKNJOMNXBPHVHSXOW");
    tmp_msg_0.predicate.assign("SPBRVMBUYRSAZFFSRPTHKBXWAHJLEAOEVIUVLPZRHWPWLZGVYJKMQLQLCFKQDOPXNYFGYFPFJAFSHJEWVO");
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
    msg.setTimeStamp(0.0432799272009);
    msg.setSource(33577U);
    msg.setSourceEntity(18U);
    msg.setDestination(32959U);
    msg.setDestinationEntity(89U);
    msg.op = 70U;
    msg.goal_id.assign("SLIMHIQKNZCIRADNVFPFJEAMDJCOXJL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("IDAPDFQWICTGZLIOBWFXPPMSZWWCIRBPW");
    tmp_msg_0.predicate.assign("SQQSOOLVYKQGLSBFJNQT");
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
    msg.setTimeStamp(0.138216917193);
    msg.setSource(42291U);
    msg.setSourceEntity(20U);
    msg.setDestination(24832U);
    msg.setDestinationEntity(33U);
    msg.op = 228U;
    msg.goal_id.assign("HRKSFYAKHGKAQGGKXOTOSRZWJOMMAXPVZNONLDKPFIVQOQWIGMZRBNFKCRNBBDELXEEKYNGFESEBSAPINVJZDZAKAYWPTHLXDXOZUIELQVEBMWJWUARXYGPRJFSCWHCAHRLPUYRIHSUCGNWJVPUBIHKIUWWULTLICIXOZCVTNQQYMHBJCEFDMJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FHUMDKMJBLDYLUSOQQDIWNREDUBSACHAJTJKBFPPYXNFMHLIOIETJZZTXBVAONRXKKHCZBRNFCSWNNUKOJBFIAKQNEWQXVMATNYSZYXPGAQLIVIWZPSHRQRLJEXQWDBIPGVGUTRAYFCPSKATQCLCUYWMCQMEDECEPGNKIXDHVDSFXXPZVOVUMEZVJHASXKSGFBVRYFZPYTWEUWQGRMAGHHWGPHOUUIDIEY");
    tmp_msg_0.predicate.assign("UAOEQIMATSWUWMOPKVGJLTMOJKUAPJAEDSWILMNIRLHEMFDS");
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
    msg.setTimeStamp(0.612502961226);
    msg.setSource(31768U);
    msg.setSourceEntity(228U);
    msg.setDestination(2702U);
    msg.setDestinationEntity(82U);
    msg.name.assign("SZFJSMXUNDPPCNASBOGHJZPMOQESJVKMDHKXGTFRRBOYQOUALCZWKJYCPYEIFYTVKWVMDIOFZEDYTLFEAXLZB");
    msg.attr_type = 37U;
    msg.min.assign("GZABAHOFQJYEWUSTPFSBBHNQSWFOHYVXWJCTCZVDNIAHLWFUQIXACIQLVYXJMSSDNVIX");
    msg.max.assign("XLVQPPOLKUCGHCBGEXXBBVRTSHDWAJIZDSYWRJMPSCKVMAYJMDBPJZVQKRLNOTHEESOCFAZXEKFVKWHPQHAQVSNLJUDZGUGUYIRDHCTNEYXBPMWBFZPYGVXKEWGRSIRGLNCRYMHOPEXQDLVFAFSOPUILNYOWAIFIBAOAGSSIDEZJREUIQZ");

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
    msg.setTimeStamp(0.23641326032);
    msg.setSource(13534U);
    msg.setSourceEntity(173U);
    msg.setDestination(34525U);
    msg.setDestinationEntity(231U);
    msg.name.assign("SMAPVFCUFZZVSSEDVLMB");
    msg.attr_type = 125U;
    msg.min.assign("ZVXBWYXIFWQUSFYHNGHMDMOLRAOLDUIXPSWLVJOFNVDRTKJQKHRHKAFZYPNDCKKQHLTBOOMRMBDVCEVXAIBPFPGFCRWXZPXSTMSNIVWEZSHKGLVCNUYAOPUBRQBIKAZCGHFXD");
    msg.max.assign("KYJPDBIRXQXJTJTOLLHBHNRUNDDPAMDVQWDJAASKYPDLMZHCPXEVYPMTGTOXFZXAFSQHQFCUNDPKAVWCNJIPWZHBHTNVZBEYLWSUGIVVELGOBFRGSXMEMOEZVYFMKNEQRKIQFZEMNGPYSIVUUJOHTOIKXDHFUPLICRLSOXKZXUTYJCAGQZCEENGQAWCTWLZBURPCNELS");

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
    msg.setTimeStamp(0.404793678015);
    msg.setSource(16540U);
    msg.setSourceEntity(97U);
    msg.setDestination(18378U);
    msg.setDestinationEntity(247U);
    msg.name.assign("CLLHUZBTBFKJXYDHYHALSMDOKLSUGXISNBGESVKC");
    msg.attr_type = 127U;
    msg.min.assign("KMAYHEKQPYOSRJIYLZGSBJITWNHYPAFLVKKQDVGWUGDOFDYVQBKQGVTHOFAZHBFLLYVQELDQMMDSILOBHONFYXNRPERUSCGFPZECTOEMBALWEMTYXSUKQJNWXWNGREXHROPZOIWMJFHDUCSIPRRWTFLBDXHUJCGXNHL");
    msg.max.assign("SJCJTGFBZDLYMAECYOYIHEUSPACWGRBEUFEGVLXWUONCKBMHJVVZFEZIBIIXTYIAOMXUPCIOZFYMQBTWPGDHFNRWAPWM");

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
    msg.setTimeStamp(0.557306511993);
    msg.setSource(2305U);
    msg.setSourceEntity(82U);
    msg.setDestination(41301U);
    msg.setDestinationEntity(250U);
    msg.timeline.assign("EBKJUEUNNKKTTBZNRREISOWHUKQCTBRNPRCJTNYQPUNALUPQTDKCTVGEEGVWKDFORSQGBMAIWZJHXSWQNYJLGTXVBA");
    msg.predicate.assign("SJMOZHVURWNQCQVMXIGIFYVKHVGYFNLMUUPXFBFDZQPLOJKTCRBYFWLEJAOVCSZISI");

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
    msg.setTimeStamp(0.0776518857282);
    msg.setSource(49433U);
    msg.setSourceEntity(217U);
    msg.setDestination(23412U);
    msg.setDestinationEntity(209U);
    msg.timeline.assign("AEZBTXCMFFTTOBMFPGZYHUUPFDVKGHLUTRLKEKTRKQUIERVZLQYGLMJLBKAPLXVRJNQHPAGFVQYUSBWNVWECNXISFYPPFXZBZCBVKZOHRAHOSBEWCIDDGISNNNOAWWOCEEWGCLMHSVMRAGRSIEZJEYPIQVISMTWICYSCKXCVDJMLJGODLHANQ");
    msg.predicate.assign("SPRUIIOLYJUWAHCQXFYJBKTLCSCNJSWLBMNVNADTBHOWDEPYXGCBEK");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("EIFCPSTMHRZACWDCIEXJJYJBBBLRTCTFITQAOOFAKHPIHKK");
    tmp_msg_0.attr_type = 76U;
    tmp_msg_0.min.assign("EPHYZCMYXGHCHHGVYQRSHIXHAPBLONANPJZZUZTEHDDJMMBDVDCYJAQLXTMJVMMIXYCDLBSIAUVTBRJIYKWCZKJAFRRSWTKPVFNOTKNBWLKOFXKTGPSFNOXXTLHEDFHEQMMEFIDNGWWNEYCSBA");
    tmp_msg_0.max.assign("CWLUTZVIXMMCRENYYGSYRSAFCVFCWVXTUAKOTHAATJSOFJEQRJXQDWCLXZGCDGGNYGNMGBPHDMORSLOAMQABNLWDYLJCOESWIBPVUZPQLAUPPHWBRNLZLQBVBRIZLFADMGOVEDCJTLVFNCWXYFSXCTKJFTHBQFRHXKIPG");
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
    msg.setTimeStamp(0.727814717324);
    msg.setSource(19650U);
    msg.setSourceEntity(107U);
    msg.setDestination(59469U);
    msg.setDestinationEntity(62U);
    msg.timeline.assign("YCKYIYOASBTOCXVGWQAJJTAHEVTMOG");
    msg.predicate.assign("DVCXUIDZNLXUAIKXUAVIJPRRXPWWBOGDAEYSNKRZCZSJIIHSFMYPKBFTCCSANRIDKTWSGOKMVWJDXJMNPBLLEJIPAVAVAPDCTUQYGSFSLERFNKBGNTXAQEHJEYZOQXLVWRZJMLTPQYZICAPDBVHEFMOUYFJMCMF");

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
    msg.setTimeStamp(0.74196718466);
    msg.setSource(27076U);
    msg.setSourceEntity(163U);
    msg.setDestination(28770U);
    msg.setDestinationEntity(153U);
    msg.reactor.assign("JDEXUKNRZLMYEYAZHFMQBUWLAYQLNSTATCWCK");

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
    msg.setTimeStamp(0.343481881189);
    msg.setSource(18605U);
    msg.setSourceEntity(186U);
    msg.setDestination(54253U);
    msg.setDestinationEntity(99U);
    msg.reactor.assign("NYNDXEXEAGRYRTQTGJGCRJXVZQZAMIENLRKCLDWMOKFJCIZDPHXKLAHZQKRQRLTIMLSESAWQYNELXCRCWQFYKZSYHBGQIZRMJJBIQWYUCTVVVQYZJFDSEANMHEDFIONDNQIHMVPLAKHLBJMPMOGJMIVBZKSPIULWSVEBGBPAUOWPDUWKBFKCXOZGXAYAGFZXUWTBDBNMUVNCD");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("TGUEIVDYHOMAGQTBORSWNXIZQFRCEDUPPSDXEMUKBYFURTMMCSCAWIYSVPMQPVKUAGGPEEAGPHJTISOWHNFLCNLTVAGNYXLWRHEQMGSLTYFZ");
    tmp_msg_0.predicate.assign("WSJWNAOAYHJJQQN");
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
    msg.setTimeStamp(0.419022462883);
    msg.setSource(10064U);
    msg.setSourceEntity(122U);
    msg.setDestination(8671U);
    msg.setDestinationEntity(64U);
    msg.reactor.assign("NUHPYHKINCEBMFSTMDANVQAXYYDOWNZPFRNJCABOEFDYKIZVSHJWXHRXMKUDSTT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RQOMCAUQPKDUFOUZQRMQBXOMZMMWREGDCKLRMSJRYSILNLHKCEAPUUBIEDAPIXTBXBRMVJPWLIGVGZGXPFOCPBVVSLZIHHAHLNQEDPQNFISEFNJYKTXBBUDSWOEZBTNAJSIMMHZKYDHCSWXKVZLEYED");
    tmp_msg_0.predicate.assign("QMBRFCWTDUJKOOYFLQRMTWXVARPPJVJTSGQWXZBKTNSTTXZRYMLGOWAOIFRIBFHMTVEDHCUEPGEEINHKBGPGBIRWWUIJQKJBYYCSWYYOEXDAPVNMSMOLU");
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
    msg.setTimeStamp(0.874277976735);
    msg.setSource(46030U);
    msg.setSourceEntity(17U);
    msg.setDestination(21442U);
    msg.setDestinationEntity(73U);
    msg.id = 66U;
    msg.width = 17703U;
    msg.height = 59866U;
    msg.widthstep = 11298U;
    msg.channels = 170U;
    msg.depth = 172U;
    msg.finaldata = 35U;
    const char tmp_msg_0[] = {71, 93, -84, -127, -122, 64, -45, -115, -8, -49, 91, -41, -73, 30, 82, 25, -17, -106, -72, 49, -66, 56, -2, -24, 77, 56, 78, -5, -116, -7, -86, -120, -7, 83, 65, 23, 17, 56, 60, -114, 109, 79, -85, -80, -95, -77, -3, -47, -13, 58, -99, -61, 81, 63, -41, -48, 113, 88, -21, -28, 57, -34, -76, -24, -30, -87, -53, 67, -18, 71, -7, -108, 98, -17, 37, 26, 104, -43, 81, -37, -84, -69, -5, 94, -26, -21, 25, -2, -80, -102, -68, -28, 13, -109, 47, -34, 96, 35, 29, -60, -98, -89, -70, -23, 42, 82, 10, -67, -1, 40, -91, -118, 116, 119, -80, 56, 107, -53, -18, -12, 23, -3, -19, -100};
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
    msg.setTimeStamp(0.829953709571);
    msg.setSource(58182U);
    msg.setSourceEntity(71U);
    msg.setDestination(24824U);
    msg.setDestinationEntity(202U);
    msg.id = 25U;
    msg.width = 32203U;
    msg.height = 49899U;
    msg.widthstep = 23469U;
    msg.channels = 128U;
    msg.depth = 147U;
    msg.finaldata = 129U;
    const char tmp_msg_0[] = {53, -30, -2, 0, 77, -121, 37, -91, 95, 116, -70, -107, -96, -72, 111, 67, 64, -47, 110, -112, -12, 31, -50, -125, -53, 8, -93, -7, -125, 58, -29, -89, 65, -17, -15, 61, 57, 112, 54, -91, -118, -81, -89, 70, 62, -42, 11, 32, -26, -102, 3, -122, 64, 2, 57, -54, 122, -78, 125, 8, -3, -125, 42, -3, -4, -86, 99, -14, 3, 50, -85, 5, 75, -126, -89, 117, 31, 79, -54};
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
    msg.setTimeStamp(0.97743254197);
    msg.setSource(75U);
    msg.setSourceEntity(196U);
    msg.setDestination(56998U);
    msg.setDestinationEntity(204U);
    msg.id = 120U;
    msg.width = 22406U;
    msg.height = 32131U;
    msg.widthstep = 21711U;
    msg.channels = 65U;
    msg.depth = 188U;
    msg.finaldata = 26U;
    const char tmp_msg_0[] = {16, 36, 117, 36, -81, 35, 25, 102, -111, 99, 19, -74, 11, 74, 93, 38, 77, 112, 15, 49};
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
    msg.setTimeStamp(0.190373441869);
    msg.setSource(42396U);
    msg.setSourceEntity(216U);
    msg.setDestination(41326U);
    msg.setDestinationEntity(50U);
    msg.width = 2630U;
    msg.height = 64817U;
    msg.channels = 155U;
    msg.depth = 0U;
    const char tmp_msg_0[] = {57, 109, 60, 53, -19, -101, -34, 68, 88, 51, -34, -45, -126, -46, -78, 125, 99, 85, 44, 95, 68, 6, -18, 49, -42, -103, 33, 74, 124, -44, 117, -124, 112, -107, 117, 118, 84, -96, 98, -83, -65, 107, -30, -99, 83, 118, 61, -122, 59, 122, -37, -87, 75, -71, -14, -78, -77, -121, 79, -45, -91, 101, -2, -44, -73, 17, -98, 54, -83, 117, 114, 126, -13, -44, -8, 15, 73, 80, 35, -38, 116, 33, 77, 88, -5, -3, 0, 6, -21, 50, -81, -12, -67, 30, 42, 13, 99, -77, -25, 83, 17, 74, -39, -33, 8, -94, 79, 107, 54, -108, 109, 65, -19, -73, 95, 69, -115, -106, 53, 29, -32, 82, 19, 81, -42, 103, 47, -26, 25, 25, 72, 3, 38, -122, -116, -120, 48, 113, -15, 25, -47, 45, -85, 91, -75, 64, 112, 60, 12, 62, 85, 59, -66, -5, 93, 0, -1, -94, -87, -68, 120, -39, 3, -75, -42, -1, 102, -34, -109, 88, 31, -64, -57, -34, -51, -98, 74, 85, -35, -31, 12, -63, 122, -88, 61, 76, -57, -29, 63, 56, 35, -115, -29, 115, -7, -34, 64, -119, 33, 89, 32, 116, 62, -7, 33, 115, 42, -9, 8, -126, -49};
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
    msg.setTimeStamp(0.323427872805);
    msg.setSource(35531U);
    msg.setSourceEntity(207U);
    msg.setDestination(49092U);
    msg.setDestinationEntity(237U);
    msg.width = 4384U;
    msg.height = 18380U;
    msg.channels = 19U;
    msg.depth = 232U;
    const char tmp_msg_0[] = {40, 75, 0, -47, 86, 50, -8, -29, -128, -54, 74, -4, -5, -15, -47, 17, 7, -39, 30, -53, 55, 107, -23, 91, -82, 93, -82, -68, -59, 1, -76, 103, -10, -53, -34, -19, 42, 123, 67, -34, 53, 34, -15, -61, 5, 74, 41, 28};
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
    msg.setTimeStamp(0.87114349708);
    msg.setSource(61290U);
    msg.setSourceEntity(225U);
    msg.setDestination(3229U);
    msg.setDestinationEntity(208U);
    msg.width = 13006U;
    msg.height = 11101U;
    msg.channels = 199U;
    msg.depth = 191U;
    const char tmp_msg_0[] = {-45, -120, 23, -82, 24, 76, 113, -33, 109, -47, -19, 97, 71, 27, -37, 77, -30, -126, -122, -17, -24, -94, 24, -60, -95, 67, 4, 62, -25, -107, 39, -31, 61, 10, 49, 77, -101, -87, -66, -10, 10, 27, -4, -117, -55, 51, -9, 112, -10, 69, -84, -46, -55, 69, -122, -127, 91, -80, 3, -81, 34, -98, 21, -119, 96, -8, 106, 22, 43, -57, 13, -120, -74, -85, 5, -59, -125, 15, -81, -94, -38, -93, -16, -12, -77, 30, 18, 56};
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
    msg.setTimeStamp(0.279166658846);
    msg.setSource(3064U);
    msg.setSourceEntity(200U);
    msg.setDestination(47916U);
    msg.setDestinationEntity(135U);
    msg.frameid = 217U;
    const char tmp_msg_0[] = {-118, 61, 126, -86, -59, -5, -36, -36, 98, -90, 71, 49, -30, 79, -41, 33, 112, 85, 30, 56, -115, -67, 13, 4, 26, 6, -128, 44, 51, -102, 99, 37, -127, -79, 71, -14, 26, -101, 115, -28, 46, -105, -25, -116, 69, -46, -76, -83, -116, -19, 38, -123, -73, -34, 16, -64, 71, -27, -13, -4, -45, 26, 91, -65, -113, 50, -10, 71, -65, 91, -124, -79, -37, 73, 119, 126, -97, -119, -30, -61, -100, -27, -78, 24, -87, -32, -37, 55, 115, 71, -1, -23, 101, -18, 85, -12, 114, -43, 1, 110, 39, -50, 58, -104, -92, -84, -110, -46, -123, -124, -118, -85, -108, -78, -97, -27, 41, -121, -5, 32, -10, 6, 64, -79, 27, 44, -115, 76, 18, 15, 96, -50, -127, 23, 3, 52, -63, 126, 87, -50, -47, -80, -19, -57, 81, 56, 107, -128, -123, -14, 64, 8, 74, 93, 23, 55, 81, 109, 103, -91, -50, 9, 64, -10, 111, 93, -22, 63, -46, -112, -55, 122, 44, -85, -47, -33, -77, -88, -55, -80, -62, 4, -24, -13, -99, 52, 122, -45, -106, 91, -66, 60, -53, -98, -93, 73, 24, -87, 27, 105, -120, -12, -108, -64, 17, 83};
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
    msg.setTimeStamp(0.87207159239);
    msg.setSource(42069U);
    msg.setSourceEntity(252U);
    msg.setDestination(11736U);
    msg.setDestinationEntity(103U);
    msg.frameid = 162U;
    const char tmp_msg_0[] = {-112, 110, 66, 123, -112, -64, 32, -45, 71, 9, -62, 78, 16, -20, 104, 72, -84, 83, -124, 77, 31, 35, 71, 29, 50, 79, 70, -9, -64, 23, -117, 114, -24, -65, -107, -66, 65, 89, 48, -22, -97, 15, -49, 79, -83, -14, 24, 102, 58, -128, -87, 105, 94, 26, -123, -62, 11, -43, 24, 106, -35, 115, -125, 59, -118, 13, -65, -44, 65, -17, -77, -94, -85, -72, 76, -84, -86, 72, -90, -2, 88, -72, 118, -102, 48, -10, 64, -13, -6, -34};
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
    msg.setTimeStamp(0.64313384151);
    msg.setSource(35421U);
    msg.setSourceEntity(132U);
    msg.setDestination(40329U);
    msg.setDestinationEntity(38U);
    msg.frameid = 177U;
    const char tmp_msg_0[] = {114, 74, 64, -59, -45, 114, -30, 10, -96, 1, -107, 73, -49, -40, 121, -12, -92, 59, 123, -54, -91, -116, 87, 106, -56, -50, 86, -9, 79, -35, 123, 94, 30, 43, 69, 82, 81, -36, -117, -31, -27, 99, -5, 39, -44, 5, -122, -79, 61, 52, -78, 105, 2, -21, -109, 102, 126, -13, -83, 48, -101, -32, -117, 84, -52, -109, -92, -102, 25, -103, -116, 121, 119, 54, -25, -120, 121, -49, 79, -60, 126, 43, 50, 13, -103, -53, 4, -123, -97, 35, 27, 2, 40, 32, 88, 67, 98, 100, -112, 54, -33, 99, -109, 9, -109, -81, 8, 83, 15, 111, 36, -73, -44, -29, 85, 23, 18, 76, 36, 46, -82, -126, 123, 103, 63, 71, 99, -55, -60, -38, -22, -61, -113, 50, -32, 16, -21, -79, 62, 90, 9, -81, 2, -87, 90, 27, 57, 119, 34, -7, 47, 80, -54, -42, 67, -102, 69, 30, 103, -42, 48, -15, -8, 71, -111, -110, 91, -35, 70, -86, -79, -53, 79, -62, -80, 72, -96, 98, -103, 126, 84, -72, 42, -96, -71, 36, 62, -34, 5, -31, 32, 88, 22, 29, 37};
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
    msg.setTimeStamp(0.00866493886598);
    msg.setSource(58302U);
    msg.setSourceEntity(203U);
    msg.setDestination(55430U);
    msg.setDestinationEntity(87U);
    msg.fps = 169U;
    msg.quality = 166U;
    msg.reps = 4U;
    msg.tsize = 236U;

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
    msg.setTimeStamp(0.961737714444);
    msg.setSource(59322U);
    msg.setSourceEntity(161U);
    msg.setDestination(14482U);
    msg.setDestinationEntity(32U);
    msg.fps = 181U;
    msg.quality = 207U;
    msg.reps = 84U;
    msg.tsize = 80U;

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
    msg.setTimeStamp(0.706420729344);
    msg.setSource(177U);
    msg.setSourceEntity(206U);
    msg.setDestination(34216U);
    msg.setDestinationEntity(157U);
    msg.fps = 84U;
    msg.quality = 26U;
    msg.reps = 211U;
    msg.tsize = 164U;

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
    msg.setTimeStamp(0.360832056203);
    msg.setSource(10111U);
    msg.setSourceEntity(153U);
    msg.setDestination(17342U);
    msg.setDestinationEntity(53U);
    msg.lat = 0.920792065264;
    msg.lon = 0.439038670808;
    msg.depth = 95U;
    msg.speed = 0.799495002887;
    msg.psi = 0.163751201329;

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
    msg.setTimeStamp(0.437065220667);
    msg.setSource(40883U);
    msg.setSourceEntity(40U);
    msg.setDestination(7911U);
    msg.setDestinationEntity(56U);
    msg.lat = 0.625152764122;
    msg.lon = 0.443735621205;
    msg.depth = 76U;
    msg.speed = 0.000438653135894;
    msg.psi = 0.794155114184;

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
    msg.setTimeStamp(0.990314981971);
    msg.setSource(46368U);
    msg.setSourceEntity(177U);
    msg.setDestination(51656U);
    msg.setDestinationEntity(161U);
    msg.lat = 0.0548761012562;
    msg.lon = 0.412518376145;
    msg.depth = 125U;
    msg.speed = 0.875582329638;
    msg.psi = 0.951161585065;

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
    msg.setTimeStamp(0.86169489438);
    msg.setSource(65088U);
    msg.setSourceEntity(92U);
    msg.setDestination(48320U);
    msg.setDestinationEntity(165U);
    msg.label.assign("WHIRNOCBRGCWOJBVNNTICXYASGBPBQHIYHYUFDGCPDYGSHTRLHABEFIMUZQRNVQAHWSWCGXMADFAAJVSMQETXGHLEACMVNZVDKEVHIVROBISQUMCORQBSFMCNANLXPSZDKFERWYZEAOEIRLCOANOTTYJSKIMRJTPXDJQWMULDLLHKKTGZZNUFKPJBELXVUWMJBUUTCVQKJZPQOXZQPFOX");
    msg.lat = 0.25563269186;
    msg.lon = 0.825875159715;
    msg.z = 0.158059434933;
    msg.z_units = 70U;
    msg.cog = 0.469616795753;
    msg.sog = 0.324385633366;

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
    msg.setTimeStamp(0.808125981878);
    msg.setSource(47583U);
    msg.setSourceEntity(150U);
    msg.setDestination(51782U);
    msg.setDestinationEntity(17U);
    msg.label.assign("DBPBWHFHDCHEBDLCZFJTZWERRMSIRIXBBUZPJMPKZJMDFQVN");
    msg.lat = 0.609964107597;
    msg.lon = 0.236739508471;
    msg.z = 0.140736882928;
    msg.z_units = 134U;
    msg.cog = 0.703096255253;
    msg.sog = 0.422640864989;

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
    msg.setTimeStamp(0.550375661807);
    msg.setSource(61628U);
    msg.setSourceEntity(254U);
    msg.setDestination(64753U);
    msg.setDestinationEntity(114U);
    msg.label.assign("XIHEPPYHHNFXWSBKQSRFYH");
    msg.lat = 0.76196179953;
    msg.lon = 0.281733210644;
    msg.z = 0.676372150388;
    msg.z_units = 189U;
    msg.cog = 0.069490226711;
    msg.sog = 0.628402357493;

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
    msg.setTimeStamp(0.760017681973);
    msg.setSource(36432U);
    msg.setSourceEntity(37U);
    msg.setDestination(65271U);
    msg.setDestinationEntity(145U);
    msg.name.assign("EEUTOLRZZSRDKIMQKAOKOMRSSAQAKJQAFPELYJMXVVIGJPMLWUAVXMTPAGYHGMNKVAQDONNHSYKCJJHJTHRDTZHNUTFHHYNBACFCNCFCNBDCUHHRZMQFYGWYPIFCXNLTDNFGQNPGOLSYQZVZISOPWUTMSXGGZPIUJKVEBSLXRWPKBDOBABIXTEMRVIXRCDFXOLLOUMEW");
    msg.value.assign("NCFWBCZSNDMGWXKBHMXLJDIQZYEVVWJRFYYGNQLSOQKPNFDVVMOBLLXUPYXZMGASAOBDUTUCUHLMDSPRPPBVRPRNMBRQVHFOEEDSQTEKODFNCFYCUOYXTZLUTANFGJEDEXAMJHUNAJSBSYBZACTXPWPIWDNODKYVJQOGZAKSJVZJHKKXIQGTGRYJIWWGHKHJSRYBCOOLNIPQALGKFAIETRQWMCTCHHRGPTKZAXQMEIVIFHUXUULLECBMSI");

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
    msg.setTimeStamp(0.434956572758);
    msg.setSource(22176U);
    msg.setSourceEntity(166U);
    msg.setDestination(32429U);
    msg.setDestinationEntity(33U);
    msg.name.assign("JZFYEKZTWNPUCCJFYZOAVGJQRNPLVVSMZPANTJFEPKIBNTLOKJLLPMHGQTABRCPKPPXWXZAFOTOWRSRBBGGN");
    msg.value.assign("EXGFNQYDBWLNEWLRYQIVQVJIXKKKVIIOOQVPXYPKULDBCUDYKUBBYEKRGGGKSMXUMVSJL");

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
    msg.setTimeStamp(0.571399761795);
    msg.setSource(59337U);
    msg.setSourceEntity(33U);
    msg.setDestination(7569U);
    msg.setDestinationEntity(103U);
    msg.name.assign("AKYTNINNKSFOUWTZHQQWSPYFLRHJEBRONJQIDOZRUFXFEPQAVLPZWIHIVOUXWWCTBEWEQTETUCLUUMRDHHZKUROARTBXYAIDXYYHTVLJUIXBRSVITARNCDMDZBWFVCRZKBUYYGGFBPJEPYSCTKOXXJGSBWCWVVOIDANJEKJLHJSMVGSMMQPMSXABDZDEYPFPQVZCHKKZMSUPAILBD");
    msg.value.assign("DEQPPMVKFZTGVAMRVWATCMRULGJKULUJFBCWUTEVLAQHPKAJSYQINNLEZHQFYOMXJBIPNLPLOEPJCUKOVUTUDOKXJSJIEXDWOUMHDIIJNSWKGBZSZKGZZAYAIFYYMOXLTKTGESSWDNGVPLSHQNOWVIGMMRJQXGDZYVGHDNLQWFRICQTIBEFAADYXZTBVZVHMRICWRBOUHMKHTECXXFOHCSAFQDDBCYJZNEGWSNBXFCQRWTLFUKPYEOHPRBYRR");

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
    msg.setTimeStamp(0.984944797143);
    msg.setSource(17208U);
    msg.setSourceEntity(158U);
    msg.setDestination(25024U);
    msg.setDestinationEntity(205U);
    msg.name.assign("VYJHPUAGMWQUSBRJZWGJAMWBWKVRGYFVVOJNJOLJRYVROYIENCIIFTHFUFLRZOLEWZHXZPASIYLHFPXVWLLSSKXEGGFPDSDNKBJJTVADRIBYCB");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UOBIWNOBORMFGVZOAKWOZDQPZAJHFXLFNGYWCIQOEWOGYZHMFQNMYPVSLDRGHIWPYTDAHISYSZJXGXBUBMJNOEUPPAHKOTWJAQCCUNVSABXFNFDPSWQBLXRMDM");
    tmp_msg_0.value.assign("AOWTCAYUNPCVVARMVHPJMCPJZUDAQSIOKWNGDYTSYCELHRNIQKWJQLNLAICJFBXSQNA");
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
    msg.setTimeStamp(0.93821369089);
    msg.setSource(36067U);
    msg.setSourceEntity(159U);
    msg.setDestination(9971U);
    msg.setDestinationEntity(115U);
    msg.name.assign("DMQVFGJRPNFGIIHOLFLJDYQAICTDSWZEAMKZBJEPMGVMNDXTPPOFVBOEFUNMYZDSJLSRBWOIMWOHHLIWXWNKOVNVSLFOJQTSKVCSHXQCRQZHNGPDXDXEIUFLRMMBIPVWNQFUCYCLYCIXEGGHUZASYWZAQQAZKSGTCRTXPRJDNTBUZJENXVODNUWATCQALFEAHKOAUJCXZIEETLLWRETCPOKBVHKMYVHRJHGBYYITPAWRPBBFKUKYKMUGYZDGJB");

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
    msg.setTimeStamp(0.834677782994);
    msg.setSource(21203U);
    msg.setSourceEntity(117U);
    msg.setDestination(58139U);
    msg.setDestinationEntity(35U);
    msg.name.assign("QHXZCOHXCFLNUEZX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("HYNPJAYPCOPGLKHXUXWVXJOCQTSUOFIBQENGTEVQWWNKGYMIPDUDCCRPESDANFSSWSVCFGYCVMVSETIDYCUMJIQITGZERZIVATAOBALQZCZYKMKTRDHHHMUNKQAXLGSBNJLMRPUVFDHDRWTREDFJMUZFZBLFBHEZLDPAVIWJINFOYMDPAYOJTTXTHRXOYSZGZ");
    tmp_msg_0.value.assign("BWTUYYUGGYMDMAFRTWRDZBAGITOWOETEAWNVOIOUPIPZKXLSSXFWAHWPNNYLKKRLCOZQSNXCUHNGLMPVHJQQDSJGUHFFCFQIJJEYPRPMVIINZLONDBQQNHTVAKRJYHZVQTIBCJSVFQGKRXJVEFFKHZBMKDXQSGLYLMEWYSPYZFGRJNLUEJZIEOCRPDZTDVLNHZBOBSBUWHAIMMCFOUECWDQLTEJBSVXXRGHTMMVDCKA");
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
    msg.setTimeStamp(0.301803555517);
    msg.setSource(30549U);
    msg.setSourceEntity(216U);
    msg.setDestination(63384U);
    msg.setDestinationEntity(124U);
    msg.name.assign("UUXDAJCEKHWQDGKJOTFSJHIITJLNYDNBVGWXESRZYCHSRHFHQZOLZHRPWVDAKGGRKOWBEVEZGKWBIYQUOLLVVFIWIDCJJPFCAKDEPSIURUSXZAQNTCMASMJHJHEBVIVPLQQXCTAGTCXOVENPTPCKYQZFZMRMUITZBSXDQWRJGYGIMXZSTXHOFYMLLLUUAEYNCMLVGIMNP");
    msg.visibility.assign("EIPIQMETRV");
    msg.scope.assign("IDCSMVIBDBBYQHR");

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
    msg.setTimeStamp(0.832634111961);
    msg.setSource(33643U);
    msg.setSourceEntity(238U);
    msg.setDestination(43634U);
    msg.setDestinationEntity(123U);
    msg.name.assign("KSRPTISBSPRMDYHFRLMHTWKJE");
    msg.visibility.assign("FMFSXZJVFUFSJFVPKZHWJGZNIDQJVXUNILLBQWTWVZ");
    msg.scope.assign("IXBJNGUQQUDCVWHOJEUFMTJDHJWFNVHUTZPZNFKVUHIHMFXOSXYEQKJBZCHWMLSOZAEYSMHVCFAMBPWJXOALSGBQQIPRJDGKEKAKMOKMTDFQETVYLSAQZGAXCZITOYANRFTWJXROLYQTWEORQPDVVUAWGMXDRNWDMOCUECFNTRVJNGHPVYNSKDIPRCRSLHKLUCUTISSJYNBTZB");

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
    msg.setTimeStamp(0.161298298106);
    msg.setSource(5586U);
    msg.setSourceEntity(145U);
    msg.setDestination(59018U);
    msg.setDestinationEntity(19U);
    msg.name.assign("YEQAZZUQREQMMGIWVAXIATRYABITTJXUYJEFJQXKPNLWDRSRNTKMWNWEACHXTXMBSNZSGCSPNKFALOHICNUFKZUEGQRYONBHMHPMENAJDKPJODPSTKCJUVPDMPLTLHZJYBWKIUSWUSCOBGVQYVZFMGGBTBKEEYVLHXOHOGKMPFFXJFETNPWJPQRLLZMNDLFIQHSLRRGHOVYCOOXRBCWAZZDRZQ");
    msg.visibility.assign("AHINFUXEBYEBSUQIDFWXMUEFSIGNYTIYLGLLVEVWARJKMTZDROLKBXTXJVIQZYRWNBLXAZEEQGQCXKDEPSVSVFTAWHUPCYFKCNZVZHPRJPCVELZNOMWIDTRWGGUOMYBAFRSLYWKJVHTAGODIMAJKTNJFXSWSPCLAUOSMPBFHVKRRIYJZZGKYBNKIXMQJQDJRDCAHCQHKNGZHJFAGNURUVHCB");
    msg.scope.assign("MJICPJNCYKPBLYSSNDUXXDYMVJZLTPHPRGLEWKMUZLTONNFYARTGOZUFCUEWHZBLGATFHS");

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
    msg.setTimeStamp(0.24334541554);
    msg.setSource(26043U);
    msg.setSourceEntity(239U);
    msg.setDestination(57381U);
    msg.setDestinationEntity(72U);
    msg.name.assign("RAFZHWFJGQEJTAUKXMZRCGAQPVZMKSQDYYWMTMOYZOTGVJFODOSGLGCPDJWZBZTYVINCZUXLTRFVDDAXAMENNNAUKEJWVIWWFTIDYPPLALUBUOGNXEUDRPLPEIYGKCBSMSCSCCVPSHLVORVLJXQMRDPXBKRZMGYL");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NBBPRXYOSRGMZVROMFCXWDLWLNKSVHYMNKXOGGRBMFDFWT");
    tmp_msg_0.value.assign("NXLKTHECAYFZCJQHKCAGXVPSHEVNAZJDCZTAJDMJOIYDBNMXVLOPOBRSFCFS");
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
    msg.setTimeStamp(0.316745695709);
    msg.setSource(19196U);
    msg.setSourceEntity(43U);
    msg.setDestination(2963U);
    msg.setDestinationEntity(29U);
    msg.name.assign("LASSPWPGNSGWMZWTAQJCKWBOWBFMZBFJUGYPPENMVYQRIRDTISOBNCYBFHNUCDEHIALOXRYCEQKDZGQLFJCUNXOQAJVXDAEKEYYKVVXKXGKLDZRCTTXKUZTUOHQIYLMQJIONUFGVASTV");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("PSKYBHQNRHDYWDYCTLNZRUGKYETTAIVEPFFNIIAFPRMTXOXEIUUVILVLPEKTVDXOQIBFVWCFTAMCNUMPEAOSVHZJUDUYWWQHSGQJSZLKRXLYEIGCMWTMBGZJXHWFXZYNEYHXMSVNDVBEESJGBRLTMGUGXHGZPKRYOJUBAFKCJESPXBKCWKAFWZCCSXJCINJPOZDADKTSRYOVLUBWDAZMAUMNGRPRFMQHCHDTLQJAVQQPDIQJN");
    tmp_msg_0.value.assign("GPQAHYKEXKHUZNBWDFYCUVTURVTYVHAWMUFVGAWDEBNLPCFLINSEIA");
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
    msg.setTimeStamp(0.907540364717);
    msg.setSource(41640U);
    msg.setSourceEntity(219U);
    msg.setDestination(3342U);
    msg.setDestinationEntity(197U);
    msg.name.assign("XQOEFADKKOZFPIURQJHKLSFLSUZTLLXRSTGZMU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("VTLSRUAGHSOBODLWYVYKINYDGTGRMOPRYFPNCWTKEIKIOQCRCQMXFDJNOFUMPNJODNBFPCPXEIYXRLFISCFBBOJIWJTEPQNCHXVHDQUOGBUAOUNAALJEKCHQDSHQMVZCFZZDBZLWWSPISR");
    tmp_msg_0.value.assign("GDZGOZOPKWJPXQXIDFPJCEHBMTZQONRWLFLJAMZZFERAQVDTGQOUC");
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
    msg.setTimeStamp(0.933172334801);
    msg.setSource(15741U);
    msg.setSourceEntity(72U);
    msg.setDestination(40101U);
    msg.setDestinationEntity(245U);
    msg.name.assign("AILGJRRAADWCAKVQHUBIKJVBCHEAEFBCMGZZZBHSZTXDDUFKJMEMLFOJHAKAGMFHSNGIYNPRMCLKVXNCDOTZKQOLMLDRNFTQXQLXQOKYRVLAOPPVEEIVXEUMRWFFXSDGTPOTRCKEXSLOWWYKHWNHYQWCGJTPSUYSFEUISVJDYCQJVPQENCUMQIMVYDRWOLJISOPYBBGZJUAWLXWPITGBNBJ");

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
    msg.setTimeStamp(0.576444408297);
    msg.setSource(8468U);
    msg.setSourceEntity(123U);
    msg.setDestination(3568U);
    msg.setDestinationEntity(100U);
    msg.name.assign("URQKQBGKMAMBVNXJZVPLZZSTJFCVHSEAHUZBRWOWISSELDXPLETZNUHTLZRYQRYSSMGEQFCDJFKPUUONDEGMUVDGCTBTHQKZXAYKGAEOJLIWVCJNJIF");

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
    msg.setTimeStamp(0.245110688245);
    msg.setSource(55573U);
    msg.setSourceEntity(175U);
    msg.setDestination(44456U);
    msg.setDestinationEntity(51U);
    msg.name.assign("VHJXQFUVSVUSQMMFMWPQPVDCXUWSRWLBIDGVGGCTCTEZYVTLJACIO");

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
    msg.setTimeStamp(0.869363421774);
    msg.setSource(25406U);
    msg.setSourceEntity(215U);
    msg.setDestination(62283U);
    msg.setDestinationEntity(204U);
    msg.timeout = 1800107630U;

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
    msg.setTimeStamp(0.515682977941);
    msg.setSource(45956U);
    msg.setSourceEntity(129U);
    msg.setDestination(14609U);
    msg.setDestinationEntity(143U);
    msg.timeout = 254223187U;

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
    msg.setTimeStamp(0.95535153502);
    msg.setSource(41587U);
    msg.setSourceEntity(177U);
    msg.setDestination(38734U);
    msg.setDestinationEntity(248U);
    msg.timeout = 3671165548U;

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
    msg.setTimeStamp(0.0642456408667);
    msg.setSource(13685U);
    msg.setSourceEntity(158U);
    msg.setDestination(7775U);
    msg.setDestinationEntity(205U);
    msg.sessid = 3451818695U;

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
    msg.setTimeStamp(0.657075136685);
    msg.setSource(33319U);
    msg.setSourceEntity(46U);
    msg.setDestination(35583U);
    msg.setDestinationEntity(17U);
    msg.sessid = 1666798024U;

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
    msg.setTimeStamp(0.153061408005);
    msg.setSource(57697U);
    msg.setSourceEntity(98U);
    msg.setDestination(21476U);
    msg.setDestinationEntity(123U);
    msg.sessid = 773453486U;

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
    msg.setTimeStamp(0.416255546042);
    msg.setSource(46916U);
    msg.setSourceEntity(177U);
    msg.setDestination(32714U);
    msg.setDestinationEntity(120U);
    msg.sessid = 1974306308U;
    msg.messages.assign("MAYOVDYLSOWXMUNPNITCFXBZJ");

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
    msg.setTimeStamp(0.537736134315);
    msg.setSource(46218U);
    msg.setSourceEntity(202U);
    msg.setDestination(13000U);
    msg.setDestinationEntity(194U);
    msg.sessid = 182232814U;
    msg.messages.assign("JHWYQWNJCGLPWHTOEPTYKTDLPWZFHISQZUFEIYQGRNRVWRDBZSOXQOUDMNJNBAEMOWBDGIOPHUMBAJPNKPVUELXLBGACDJPEQCTNGERGUNDTMYXHOZYXAUXOHSZFLIECZHDYDYZVBTNMATXOVKCEZZLLKKLVIUCQRQRBHD");

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
    msg.setTimeStamp(0.757060400637);
    msg.setSource(48881U);
    msg.setSourceEntity(162U);
    msg.setDestination(45505U);
    msg.setDestinationEntity(76U);
    msg.sessid = 3743516203U;
    msg.messages.assign("VPLKJYAQFERTGGAFZACZ");

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
    msg.setTimeStamp(0.876218756796);
    msg.setSource(43154U);
    msg.setSourceEntity(153U);
    msg.setDestination(28898U);
    msg.setDestinationEntity(220U);
    msg.sessid = 1967078566U;

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
    msg.setTimeStamp(0.86901904239);
    msg.setSource(2925U);
    msg.setSourceEntity(49U);
    msg.setDestination(20023U);
    msg.setDestinationEntity(235U);
    msg.sessid = 3808536308U;

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
    msg.setTimeStamp(0.170697936875);
    msg.setSource(44285U);
    msg.setSourceEntity(114U);
    msg.setDestination(46480U);
    msg.setDestinationEntity(71U);
    msg.sessid = 2824215978U;

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
    msg.setTimeStamp(0.860366887625);
    msg.setSource(5516U);
    msg.setSourceEntity(178U);
    msg.setDestination(61721U);
    msg.setDestinationEntity(82U);
    msg.sessid = 2493291725U;
    msg.status = 251U;

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
    msg.setTimeStamp(0.180281021184);
    msg.setSource(43450U);
    msg.setSourceEntity(235U);
    msg.setDestination(20209U);
    msg.setDestinationEntity(103U);
    msg.sessid = 3297361028U;
    msg.status = 195U;

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
    msg.setTimeStamp(0.987280193133);
    msg.setSource(21888U);
    msg.setSourceEntity(252U);
    msg.setDestination(16714U);
    msg.setDestinationEntity(36U);
    msg.sessid = 2236321129U;
    msg.status = 79U;

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
    msg.setTimeStamp(0.287256991407);
    msg.setSource(8068U);
    msg.setSourceEntity(184U);
    msg.setDestination(37906U);
    msg.setDestinationEntity(58U);
    msg.name.assign("LPJCWIXQGVRLTVNAWUBRFZJOMKYVYYMOGWZQZLCKSKYJGUJSCDEOZNPQKZOFWDEXAXLCTHBCWTZUVKAOHFZHDFIRITKIWGZOVEUSINAPSCFJBQHHAJCJNVLIXKYNYHUVOHZOEBHQFYVXUPCILNPWJGLDNSSMTBXGNTVFWXPILRMLIMH");

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
    msg.setTimeStamp(0.013202544225);
    msg.setSource(31822U);
    msg.setSourceEntity(190U);
    msg.setDestination(34591U);
    msg.setDestinationEntity(200U);
    msg.name.assign("JVSUFDICTGPNJNYPQMZZQDBAWZIARJKWPGEIVCDLQOKTJYYLJRFKVAQMLOCRUQJOMNZYOUPHEHBKQFIOHVHEANNYGVSZNWAIMJTNLLPXOO");

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
    msg.setTimeStamp(0.402066454511);
    msg.setSource(32716U);
    msg.setSourceEntity(102U);
    msg.setDestination(31061U);
    msg.setDestinationEntity(12U);
    msg.name.assign("DRXMVUMXMNUXAEPSJQVCIUBYOXGAIKDTWMTAKFRDPIHNGYQRQUSWPVOFEDCYLPTBSEOUHRTMKNOTPTNISWZJLVMNXEAZBCYAMYZNNBTJOCQSX");

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
    msg.setTimeStamp(0.0783889428903);
    msg.setSource(47744U);
    msg.setSourceEntity(129U);
    msg.setDestination(6684U);
    msg.setDestinationEntity(122U);
    msg.name.assign("VQZBMARNHNPCLLZDOCPMOAVXUTVNRLWWQG");

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
    msg.setTimeStamp(0.718790308789);
    msg.setSource(32684U);
    msg.setSourceEntity(15U);
    msg.setDestination(60082U);
    msg.setDestinationEntity(47U);
    msg.name.assign("APHHNMUQCGSHHEIWQADBOVIXMKIZKIRUFMEWZHFGVHFMXCRTAOHKRYVSMDNCILLRUAGNVFSBBDDYUNCCSRW");

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
    msg.setTimeStamp(0.436636167266);
    msg.setSource(30553U);
    msg.setSourceEntity(174U);
    msg.setDestination(27235U);
    msg.setDestinationEntity(23U);
    msg.name.assign("DKCZGYAOGBSBOCQCKXFARGAIGZFDRIWHLCXZIZBYOEZVEJIWSLNFLYXBWFUNMGDTIYFOWANBFHXMCVV");

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
    msg.setTimeStamp(0.231787790908);
    msg.setSource(35309U);
    msg.setSourceEntity(3U);
    msg.setDestination(19047U);
    msg.setDestinationEntity(235U);
    msg.type = 98U;
    msg.error.assign("OTSEIBVNUVZSRNWHLQSQRFPYADCHKIVTQFSBLRYLGGMQNAHCNSUZHZVBROXJANIWGXOTVJUOYQOXVWMCJQCLONSZREBTKWFXLFQXLPOJTVFAWGNDECRORESOXBUYKFKAHZYRDVLVEJQCYPEBZDMYBWKTAHNWVMBHPXGTRHIXMZHXDTEMUDAPUENUFKKIYIHNELCIPLGWAFUMKUPGOQFMPSRLSCFDKBTAJJUEDSCZWJWJAMGCY");

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
    msg.setTimeStamp(0.349267698528);
    msg.setSource(18031U);
    msg.setSourceEntity(199U);
    msg.setDestination(17651U);
    msg.setDestinationEntity(57U);
    msg.type = 202U;
    msg.error.assign("DEIFRTJGDWPCYGKDLOZZB");

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
    msg.setTimeStamp(0.0311707814514);
    msg.setSource(36977U);
    msg.setSourceEntity(76U);
    msg.setDestination(61105U);
    msg.setDestinationEntity(159U);
    msg.type = 176U;
    msg.error.assign("AKMUGRHLTUUAICBJPQFGLXCXDLRCODWEGABLAXBUEITQKYZIHWMYNOTKAEOBLVDHGGXZWNEGLGZFHBAJKQFTKNPIIIVOTGSSPJVFSRJYZXVYDWWEURCYZFDTVLMLQKYEHJIASRSDZSIZVCPQCPUJYBKPCRPONQURMFYU");

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
    msg.setTimeStamp(0.878610419384);
    msg.setSource(34176U);
    msg.setSourceEntity(184U);
    msg.setDestination(43294U);
    msg.setDestinationEntity(41U);
    msg.seq = 7770U;
    msg.sys_dst.assign("QRITRIPWZOOSFRYPWNFXDVLAMFAIGUXNFPGIOBPOYIWQLLBFGCBXVSJTHDTPBTSJSILAHEWUHUCYGYMDVKRJDRPRKFSMSTMLXBWHEHKXIQHTEVYTUCZNMYNFSIFSVUQDQGPJVADCZNELTDIQQB");
    msg.flags = 30U;
    const char tmp_msg_0[] = {106, 36, -46, 56, 118, 52, 14, -33, -9, 122, -53, 122, 115, 116, -34, -28, 51, 43, -37, 59, 94, -19, 51, -4, 10, 86, 23, -82, 110, -126, 108, -29, -20, 61, -34, -12, -14, 56, 13, 65, 101, 98, -126, -54, 123, 114, 54, -83, 104, -86, 19, 65, 38, 3, -110, -97, 80, 17, -2, -94, 111, -53, 104, -82, 84, 13, 65, 84, -95, 50, 47, 2, -10, 103};
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
    msg.setTimeStamp(0.323417993306);
    msg.setSource(9656U);
    msg.setSourceEntity(192U);
    msg.setDestination(12342U);
    msg.setDestinationEntity(83U);
    msg.seq = 12336U;
    msg.sys_dst.assign("YNBICIJIZRYXRDJTWQWCCOZKFWIJSSZDHBWRRWNLVQUVAQXCFKZGZCRGZANKENWHLXENHQJODPDEM");
    msg.flags = 254U;
    const char tmp_msg_0[] = {-128, 37, -22, 107, 51, -55, -18, 15, 65, -68, 118, -12, -93, 106, 53, 116, -103, -45, -56, -28, 99, -34, 123, -1, 5, 34, -113, 22, 60, -123, 84, 77, 69, 14, 10, -117, 26, 102, -30, 68, -38, 62, 11, 52, -20, 20, 27, -122, 73, 18, -88, 104, -103, -112, -5, -111, 50, 10, -2, 2, -101, -11, -13, -22, 15, 92, -26, 63, -75, 51, -14, -113, 66, 15, -39, -39, -119, -39, -68, -9, 122, 96, 3, -15, 24, -95, 36, -76, 32, -113, -22, 97, -108, 48, 49, -15, -65, 59, 122, -2, -88, 126, -62, 113, 24, -19, 125, 120, 16, 5, 23, 29, -3, 97, -6, 120, 78, 124, -5, -41, -47, -44, -128, 68, 85, 108, -19, -22, 61, -93, -85, -38, 24, -38, -12, 66, 118, -86, 86, -30, -127, 91, 7, 60, -30, -89, 87, -111, 88, -26, 86, 61, 1, -74, -37, 16, -75, 14, -38, -29, 76, 14, -39, 45, 97, -128, -35, 82, -8, 99, -89, -91, 71, -116, 6, -65, -26, -114, -117, 40, -33, -68, -7, 30, 40, 49, 28, 105, -45, -89, -91, 24, -2, -22, -43, 122, -16, 96, -110, 4, 126, -114, -96, -89, 105, 62, 72, -74, 53, -34, -3, 39, -57, 82, -15, -105, -81, -41, -85, -115, -80, -45, -124, -35, -36, 87, -12, -108, 78};
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
    msg.setTimeStamp(0.43773698638);
    msg.setSource(25774U);
    msg.setSourceEntity(89U);
    msg.setDestination(28489U);
    msg.setDestinationEntity(197U);
    msg.seq = 55544U;
    msg.sys_dst.assign("HKAWCMSTTWCJNDDFUWJFHABDGNZQSSUYPPRMOMNVFDPHVYCAJVWDFUTEGUTNLRNJHILAKSXEIXCNOJWCOMTTRWGNWOURKSBMIUKMMIUBERJALTYIOGCTZERGQAZYKRZATBHIQIPVMIQZUBWXVJQYFXXZVJPQVXOWFGHXESLEISBDQOSOGXTBKDKLMGUAQOEFKSZAYZHCSPNPWQBCFDEUHYGLFYMO");
    msg.flags = 22U;
    const char tmp_msg_0[] = {-96, -50, -117, 111, 111, -94, -88, -49, 115, -58, 19, -90, 83, 33, -115, 55, -80, 32, -128, 87, -98, -89, -77, -4, 21, 92, 68, 98, -112, -14, 16, -114, -119, 37, -35, -73, -80, 70, 86, 7, -62, 53, 48, -89, 15, -117, 1, -70, 11, 62, 30, 100, 107, 77, 85, 122, 104, 83, 48, 24, -100, 123, 30, -24, 106, -62, -41, 71, -82, 111, 104, 77, -70, -78, -80, 89, -80, 15, -17, -72, 48, 18, -62, 76, 89, -53, 51, -89, -113, -98, 85, 112, 64, 99, 53, -70, 93, 51, 106, 64, -127, 42, 65, 33, -57, 69, 101, -98, -22, -84, -69, 61, -92, 64, -124, 70, -118, -38, 74, -93, -5, 16, 17, 125, -90, 25, -12, -118, -54, -101, 55, 97, -78, 22, 111, 13, -36, 41, 126, 51, -91, 98, 65, -60, -107, -56, -114, -100, -96, 68, -31, 65, -5, 36, 103, -40, 87, -39, -81, 24, 69, -117, -69, -63, -110, 14, 52, 46, 26, -87, -72, -97, -83, -101, 70, 3, -56, 8, 106, 107, -84, 62, -89, 93, 110, 77, -53, 93, 113, 96, -104, -88, -85, -17, 27, -72, -114, 93, -85, 103, -38, 40, -22, -14, -57, 85, 79, 103, 59, -13, 96, 108, 19, 52, -82, -51, 6, 83, -7, -99, 20, -101, -14, -75, 99, -93, 12, -108, -93, 57, -118, -83, -120, -50, 81, -97, 70, 2, 87};
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
    msg.setTimeStamp(0.309824291187);
    msg.setSource(20687U);
    msg.setSourceEntity(201U);
    msg.setDestination(8901U);
    msg.setDestinationEntity(184U);
    msg.sys_src.assign("QZCJOXSBKPGOGAUUHNOVTLBGWOLBBFZFDVCFTHINJLJNKVFCNCCQJBWPUIGRITADHSMUYMADCQEYOQEHHAJPBVOMREGSMCBJXPYEHQOJPVRSUYGBFKGKSZKQZQSHXUZDWFAPXEPKTLCJTYIWKJZIXIDWCNLTVEWULAESSOFYBQTPQYVSNVMVIBUTFQS");
    msg.sys_dst.assign("SJMMQESXOGUUGDRRQOCSKDLQWZMDLKASHPZRMH");
    msg.flags = 40U;
    const char tmp_msg_0[] = {104, 123, 113, 1, -12, -21, -119, -72, 90, -74, -9, -98, 26, -120, 73, 83, -113, 36, -115, 77, 111, -43, 76, -113, 49, -107, 17, -69, 82, -42, 74, 35, 4, -125, -127, -123, -42, 94, 70, -77, -120, -110, -85, 12, -120, -109, -35, -1, 1, -23, -7, -26, 105, 55, 74, -39, -8, -27, -47, -115, -62, 16, -1, -7, 109, 3, -89, -38, 84, -88, 43, -109, -128, -67, 15, -34, 52, -90, 68, -37, 14, 37, 42, -99, -12, 29, 118, -53, -100, -87, 112, 41, -8, -94, -20, 52, -120, -80, -112, -115, 101, -29, -20, -22, 86, -95, -24, 94, -44, -34, -45, -8, 92, -24, -50, -26, 114, -17, 107, -17, 110, -9, 106, -82, -3, 39, 36, 122, 52, 63, -72, -48, 48, 115, 77, -113, 9, -93, -114, -125, 123, -127, -52, 74, 123, 35, -94, -41, -108, 15, 18, 106, -127, 67, -97, -75, -15, 54, 22, -123, 123, 38, 97, -68, -55, -120, -21, -61, -71, -13, 59, -81, 25};
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
    msg.setTimeStamp(0.561355245992);
    msg.setSource(53542U);
    msg.setSourceEntity(67U);
    msg.setDestination(34973U);
    msg.setDestinationEntity(71U);
    msg.sys_src.assign("QWCSSTKZJXPNWKPFTNVVBXHRJJIRDQRKGUQLAEAMFLGHHSCJQIPAFJMAQUIXYZSUWOIAXIKYBKTDPJATVMKKYENGRYHRZPALWQEYTKDQSIPOFICXLEDYXNVOWFTSWMXVJJAWOTGSXZUBCLHECRGVYPQZZLHDENEBNRLBFEF");
    msg.sys_dst.assign("XHFGVQQVPYCLZSKAWSETSOVCONWMNUXWFJKTRULEYYUXMDPEJBFLQDTEQONNJXWSIKHJITZAOCHBNGACLVUZEVHBAIQQSLFEZQLIWGQPTRUXBRZWPFRCMKOZOMTIENIBGDWOUZRQCWVSGNFGYKXBUGABKRSYXAMSEDIWPDTMTZKFQSLAYOVJMSCLPHPDMGZGDLOJZNTHMEMHEPRNXPVUWRCRHYXUVNLBDHJPJJYJBOAFTGAHIIFRD");
    msg.flags = 254U;
    const char tmp_msg_0[] = {-32, 91, -55, 68, 65, 44, 20, -3, 98, 89, 82, 81, 104, 74, -100, 57, -94, 106, 24, 76, -125, 89, -16, -75, 119, -26, -88, -91, -70, -115, -113, 117, 10, -82, -108, -102, -99, 59, -60, -89, 108, 90, -12, 14, 38, 9, -36, 119, -66, -125, -12, -62, -87, 111, -113, -82, 71, -75};
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
    msg.setTimeStamp(0.117071401724);
    msg.setSource(27057U);
    msg.setSourceEntity(110U);
    msg.setDestination(59213U);
    msg.setDestinationEntity(83U);
    msg.sys_src.assign("ZKVIUVSWZEORVYUIBKSLXQSJFMSPKCIGNQSBMDDOVYEKVAHVJWRZCOXHBIPZEYGYIDGBAPFMUWRRINWWYKPOAVTMBYXWAJENFNMLNKTTCXMQMRXWBYGHYOZJZUALFXECPFSCATDGHPRGKKEMLIIEIFJUPXVOPTCSUBTIRX");
    msg.sys_dst.assign("FLZFYZPGPXBAROXCJNMEIUDDVMSPZUVJAKZQCMQCSH");
    msg.flags = 72U;
    const char tmp_msg_0[] = {45, 54, -10, 85, 125, 97, -57, 85, -106, -22, 71, -46, -123, -25, -72, 72, -27, -99, 125, -110, 92, 14, -115, 108, 74, 109, -8, 115, -40, -8, 122, -26, -108, 62, 97, 15, 12, -74, -22, -33, 78, 61, 103, -17, -20, -103, -70, 72, -59, 98, 117, -26, -85, -111, 25, 96, 60, -110, 101, -104, 76, -75, 18, 115, -28, -99, 117, 33, 39, 90, 90, 44, 69, 112, 51, -37, 115, 23, -3, 2, -89, 114, -52, -117, 45, -15, -17, -15, -38, -49, 94, 9, -66, 81, 66, 24, 28, -43, -2, -1, 107, -116, -42, -125, -119, -26, -121, -8, 3, -24, -77, 81, 104, 98, 10, -13, 6, 105, -3, 54, 93, -82, 21, 80, 56, -86, 66, 45, 20, -35, -7, -69, -69, -14, 45, 107, 29, -47, 112, 97, -121, 102};
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
    msg.setTimeStamp(0.159893511167);
    msg.setSource(13628U);
    msg.setSourceEntity(224U);
    msg.setDestination(59261U);
    msg.setDestinationEntity(53U);
    msg.seq = 37769U;
    msg.value = 83U;
    msg.error.assign("CJVYJVXPXQTWCRPZEFEF");

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
    msg.setTimeStamp(0.239408728495);
    msg.setSource(9957U);
    msg.setSourceEntity(144U);
    msg.setDestination(29424U);
    msg.setDestinationEntity(144U);
    msg.seq = 8578U;
    msg.value = 44U;
    msg.error.assign("YZZSEHCHEDRDZIBWJVBQDXKBPGVIKGRYDSDYCXEOGLJGCOLTBHCGNPLAUQEVRXYUUTQHBCBMPSHWIJQGNCVOXZMMFVNHTYFRZQLMGOXKXTVAPIBMZSWTMOAPYGHPVOGNDYEUVTWXNSOFJWIPCQFWFAVZGANFPIUKFFUMCLRDRFLXJZYCWTPDAEKKBIBHSTLKBAMXRMSLWIIRCEQVSQ");

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
    msg.setTimeStamp(0.705566100456);
    msg.setSource(20867U);
    msg.setSourceEntity(43U);
    msg.setDestination(15776U);
    msg.setDestinationEntity(43U);
    msg.seq = 22828U;
    msg.value = 254U;
    msg.error.assign("PEHVWUAFQFWFSAUSYFXZOKDRMDIXMMRPONRHQGFCDALURNGCGHQAPZETKCOICMVWTIVRLXQORQKDJSECUNIWTUGLUGHLSNQPNRTSBCHIJBQPEVFVFDEVBOYGMTVBZDGJJWVEAJMNZXWGJUWTZHAGSMJXUTOZEFCDWYAQKQOYWADPYSHKHJP");

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
    msg.setTimeStamp(0.00139229053276);
    msg.setSource(55825U);
    msg.setSourceEntity(197U);
    msg.setDestination(7096U);
    msg.setDestinationEntity(61U);
    msg.seq = 18146U;
    msg.sys.assign("AVISQUSRFLAJQWADBOIUCWIRLKXTEHYNTFIAUINLVFXLEJFEXOSLIUZFEHSYEIANKGLAKHBKAGTNWJGRUQCEYGMUICTBVCKJQQZEPHCMBMSFZDDNMRWFVSGPJO");
    msg.value = 0.725135906553;

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
    msg.setTimeStamp(0.614623899737);
    msg.setSource(39618U);
    msg.setSourceEntity(170U);
    msg.setDestination(31632U);
    msg.setDestinationEntity(226U);
    msg.seq = 40435U;
    msg.sys.assign("FYIHHJDUVBEUVOCDSNIEHXADMGTKTPRFFBNHLNQVFCPZMKEZXJBESKRWDPUNROIYHCLBJGOQCWGMJOSWUKVDQRMYUYRZETRGAUARXCIAAIQLQWGDSWOLWOXJP");
    msg.value = 0.148226149681;

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
    msg.setTimeStamp(0.727155956112);
    msg.setSource(3440U);
    msg.setSourceEntity(125U);
    msg.setDestination(54937U);
    msg.setDestinationEntity(139U);
    msg.seq = 29626U;
    msg.sys.assign("XQXYWLEKYBUTJEITDMHREMPUGSYYENNBKEFQDGDFTPTHOOZWQFYBKQTMCBJCSNCTFMIXZJJDMSJSPPNRGDAKSZORMHKTPJLECIAWILAPGVLLHFXRWZAGSVKPLMDOLVHVCUOQMYWNNIZCYOHQSQXSOQFRLTILPCBBJUXEHZDVAXUADYXRRUZWQWUVFIOEVPVEMHCLZGUERTXOAZIOWGAYAFUSNSBGWKIRDJB");
    msg.value = 0.723537703289;

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
    msg.setTimeStamp(0.786057113785);
    msg.setSource(20699U);
    msg.setSourceEntity(197U);
    msg.setDestination(65354U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.982817007971);
    msg.setSource(48912U);
    msg.setSourceEntity(129U);
    msg.setDestination(49742U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.24999844553);
    msg.setSource(34014U);
    msg.setSourceEntity(157U);
    msg.setDestination(11087U);
    msg.setDestinationEntity(72U);

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
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.798059161254);
    msg.setSource(31148U);
    msg.setSourceEntity(177U);
    msg.setDestination(38897U);
    msg.setDestinationEntity(249U);
    msg.action = 254U;
    msg.longain = 1639803369U;
    msg.latgain = 677314309U;
    msg.bondthick = 242508114U;
    msg.leadgain = 285706423U;
    msg.deconflgain = 3408997627U;

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
    msg.setTimeStamp(0.660364901345);
    msg.setSource(12429U);
    msg.setSourceEntity(76U);
    msg.setDestination(37202U);
    msg.setDestinationEntity(167U);
    msg.action = 16U;
    msg.longain = 170143981U;
    msg.latgain = 4101581185U;
    msg.bondthick = 1495598716U;
    msg.leadgain = 2538066653U;
    msg.deconflgain = 2989718062U;

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
    msg.setTimeStamp(0.553208417696);
    msg.setSource(20973U);
    msg.setSourceEntity(102U);
    msg.setDestination(15773U);
    msg.setDestinationEntity(134U);
    msg.action = 87U;
    msg.longain = 67550588U;
    msg.latgain = 1336517203U;
    msg.bondthick = 1797514889U;
    msg.leadgain = 1931852361U;
    msg.deconflgain = 1071630590U;

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

  return test.getReturnValue();
}
