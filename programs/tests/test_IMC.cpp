//***************************************************************************
// Copyright 2007-2013 Universidade do Porto - Faculdade de Engenharia      *
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
    msg.setTimeStamp(0.0825566892394);
    msg.setSource(14562U);
    msg.setSourceEntity(83U);
    msg.setDestination(41037U);
    msg.setDestinationEntity(112U);
    msg.state = 92U;
    msg.flags = 169U;
    msg.description.assign("EFHXONVNDDZYWLFTJSZLLBNGULYRCPSRFHYDGFOTZKAHHIIJHJUERESIYFIEUKBZXWXCVQKAKRPUUGVQMEUBXEIAEKDQHLJSBVKPAGBDTVPAYMGCOPMJSLNSVYXHPWGIRTANOPOXUDMAONKOJBEKWHZMZFCMGTFGBDUJLAXYOJQSGZCQBTBREHWDQQKPPMMADTZLNSMC");

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
    msg.setTimeStamp(0.639431348676);
    msg.setSource(5515U);
    msg.setSourceEntity(245U);
    msg.setDestination(15584U);
    msg.setDestinationEntity(117U);
    msg.state = 130U;
    msg.flags = 43U;
    msg.description.assign("GMQMDSCFVOKSBJCJYVWMJZHPHUNEC");

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
    msg.setTimeStamp(0.570543007607);
    msg.setSource(4338U);
    msg.setSourceEntity(248U);
    msg.setDestination(41619U);
    msg.setDestinationEntity(111U);
    msg.state = 103U;
    msg.flags = 191U;
    msg.description.assign("IMWYKPSEXTJERWFAAXLUVQXBGDXIJMNTGKKNZESXEDNPKGOCMORZDKBWYVFCBWKSDKLQZHJBUTAMQIRGQZOOOFHHRTYTVSMMNAXNZYPLUDCQUQLAUBTRHLZOEIFWGJVHQPTOGDHISXXXTIYIQVBZRQDJPKUWSAZRFCLBJMCYNVOPFIIUOELLRM");

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
    msg.setTimeStamp(0.669590170803);
    msg.setSource(42537U);
    msg.setSourceEntity(233U);
    msg.setDestination(48485U);
    msg.setDestinationEntity(51U);

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
    msg.setTimeStamp(0.553325349892);
    msg.setSource(22266U);
    msg.setSourceEntity(109U);
    msg.setDestination(37437U);
    msg.setDestinationEntity(155U);

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
    msg.setTimeStamp(0.864803186257);
    msg.setSource(49031U);
    msg.setSourceEntity(182U);
    msg.setDestination(49883U);
    msg.setDestinationEntity(213U);

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
    msg.setTimeStamp(0.451600808567);
    msg.setSource(55608U);
    msg.setSourceEntity(168U);
    msg.setDestination(15523U);
    msg.setDestinationEntity(72U);
    msg.id = 79U;
    msg.label.assign("BALFRZMZHWZMDDSJYGQQPNQWYTVMRZHGFRMWCXFOEUI");
    msg.component.assign("IZNBRXRHGLDAKKWHG");
    msg.act_time = 61862U;
    msg.deact_time = 25390U;

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
    msg.setTimeStamp(0.0838237902526);
    msg.setSource(28292U);
    msg.setSourceEntity(50U);
    msg.setDestination(51260U);
    msg.setDestinationEntity(111U);
    msg.id = 18U;
    msg.label.assign("AJQLIPGEMCOGOXXTWBJSFZTCIHSLKPTAVLAGDYZFO");
    msg.component.assign("KCHQCMGOOYOUMIHXNPRCSBTDEAZRITWURLHXERTGUHZPVYLOSVRPJIFYOIFYKJHJFBWZTPDJXLCLAKWORNBSPSNHQMEWDTDESUYTUMEKDCIISAOEQVBVQPDQNXOBNTGIZBNYURLRMFFAYXMRWCGEXUQBKMOEZLVZPIDASTFVFNUEKXJTGADFXVFATNGDQWQBAHIQHGMWIKJKVBHSMSPEPRGJ");
    msg.act_time = 7797U;
    msg.deact_time = 12084U;

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
    msg.setTimeStamp(0.333702553981);
    msg.setSource(41351U);
    msg.setSourceEntity(170U);
    msg.setDestination(16763U);
    msg.setDestinationEntity(159U);
    msg.id = 230U;
    msg.label.assign("YHKARIZQCRJOVSKROSNZEUZGQSAURFZCODSYMWQHWVQQUWBZLIOJEBIUGSXEJMJNWDQSEVMCIMLFPIKNLXUMXCXHNSQJFDAMEJQHDDMRJGPOIT");
    msg.component.assign("JLSIXFJTCCAUQOUEQLAOOACWDYUMRIPAPEWMIBCYQUINZQNVMHHLXHUBJWFVVCTIOCNHHYBVKRN");
    msg.act_time = 42240U;
    msg.deact_time = 64438U;

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
    msg.setTimeStamp(0.43057143689);
    msg.setSource(16919U);
    msg.setSourceEntity(185U);
    msg.setDestination(22543U);
    msg.setDestinationEntity(187U);
    msg.id = 254U;

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
    msg.setTimeStamp(0.605356397108);
    msg.setSource(32513U);
    msg.setSourceEntity(50U);
    msg.setDestination(11613U);
    msg.setDestinationEntity(204U);
    msg.id = 226U;

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
    msg.setTimeStamp(0.211178178998);
    msg.setSource(38546U);
    msg.setSourceEntity(82U);
    msg.setDestination(32781U);
    msg.setDestinationEntity(135U);
    msg.id = 70U;

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
    msg.setTimeStamp(0.27374858801);
    msg.setSource(5525U);
    msg.setSourceEntity(178U);
    msg.setDestination(60067U);
    msg.setDestinationEntity(68U);
    msg.op = 163U;
    msg.list.assign("XNWJQLPCXZPPVHKDHUKYFJEBYSROMOKMHVNVFFWNNGJZUDILOUTOPGNUJWDRSXAHLWTBCBBCQQJKESTBBLYTRJOWSHNWFCEMNLYHUYZBRZYKMDKGHIIRGGQEARASZCAGV");

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
    msg.setTimeStamp(0.110599505739);
    msg.setSource(25123U);
    msg.setSourceEntity(142U);
    msg.setDestination(13916U);
    msg.setDestinationEntity(83U);
    msg.op = 186U;
    msg.list.assign("JLBTOMYCZWSFHBDVSTJDBKXFJCLGKMHALVAWAEUSSQJZENGZYQUJPGHPRJAEFMTLLTFUYMWOISAUIVWLCDRWHOYNWIVRTEDCNEULQEKFRICFFNYADYQSYHHJNKVNOXBWZYDGKIBICHCMEFEQOTPRLPHLXRNUSEOXQRQVZARTKQGCMUDMKZXNXLEIYTWUXACPAWPKGIPYXBORNUSMDBZ");

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
    msg.setTimeStamp(0.286809881984);
    msg.setSource(43552U);
    msg.setSourceEntity(217U);
    msg.setDestination(18529U);
    msg.setDestinationEntity(34U);
    msg.op = 219U;
    msg.list.assign("OJVQNOIMIMYYUUTWDHTGEKVUCOTIUXNLHFHPBRLMVBBYJIIGSACVURTDVSORINZJQAJINLFTYVIHRODZVNVDYPXAKURKPEYYTPDYSZPEQTMAXEGVBKFQFWQPLIRQFNWFKKGTKEQNUBCGBZLDSJDZSWXZWECQLJJJIFHMDTCPCUQNMM");

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
    msg.setTimeStamp(0.0347164714742);
    msg.setSource(14290U);
    msg.setSourceEntity(6U);
    msg.setDestination(37357U);
    msg.setDestinationEntity(225U);
    msg.op = 87U;

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
    msg.setTimeStamp(0.472078366423);
    msg.setSource(60568U);
    msg.setSourceEntity(19U);
    msg.setDestination(32210U);
    msg.setDestinationEntity(29U);
    msg.op = 147U;

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
    msg.setTimeStamp(0.288388204518);
    msg.setSource(63841U);
    msg.setSourceEntity(109U);
    msg.setDestination(7706U);
    msg.setDestinationEntity(145U);
    msg.op = 86U;

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
    msg.setTimeStamp(0.28416227098);
    msg.setSource(15073U);
    msg.setSourceEntity(152U);
    msg.setDestination(8543U);
    msg.setDestinationEntity(205U);
    msg.value = 211U;

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
    msg.setTimeStamp(0.356363654758);
    msg.setSource(63192U);
    msg.setSourceEntity(64U);
    msg.setDestination(50906U);
    msg.setDestinationEntity(6U);
    msg.value = 129U;

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
    msg.setTimeStamp(0.673525987345);
    msg.setSource(6735U);
    msg.setSourceEntity(181U);
    msg.setDestination(20441U);
    msg.setDestinationEntity(123U);
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
    msg.setTimeStamp(0.38839154327);
    msg.setSource(58259U);
    msg.setSourceEntity(42U);
    msg.setDestination(36936U);
    msg.setDestinationEntity(232U);
    msg.consumer.assign("HXZSDPHVPYWVMMXHFYUYLADRUXNDQJQVVBAUNVRDRV");
    msg.message_id = 10236U;

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
    msg.setTimeStamp(0.460667498057);
    msg.setSource(7237U);
    msg.setSourceEntity(164U);
    msg.setDestination(34016U);
    msg.setDestinationEntity(132U);
    msg.consumer.assign("UFUJCYCRUQBXCFEAJARNPMFHLJRYRGDFYUZEMOZFOMQGNGLVIFAYHWSQWIWEZGPDJWIRFWETSKZOENICVBFIPJHZUKKVWSMJDGXBUJOSVBMQAAPUAWUSLRQKPEZYARSPBCPJGAVLLKOBOLWEBTKSCALXYCDYGMHZNYTOGDFJPBTDHCPLWIDSMRQQTXSPEHNXDTOXDBRUNEMEKXSYVMTQXZTZNVUTLIGLIMHDCOVJNIVVRGXIOXKY");
    msg.message_id = 39065U;

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
    msg.setTimeStamp(0.591159865535);
    msg.setSource(37620U);
    msg.setSourceEntity(128U);
    msg.setDestination(14206U);
    msg.setDestinationEntity(89U);
    msg.consumer.assign("UUUEPCRSQNVSDVVTPQXCPYSAAKYDGOBQFGITHRUOOPVKWUXXKWLITNGCOGDJEDKNLJQEJVBGBIXABMHFUSTYXLBQSCSFWNRNZGWFCHIYTYAQYAEMKMHWIXMBDIXRNJIPHKQJGHRLBXYNITEMHRCWLEJDAMHPIZPZGNRPRFGNOLJRFCYZFRSOJXZANOXEKKZVAQ");
    msg.message_id = 16175U;

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
    msg.setTimeStamp(0.620126380142);
    msg.setSource(38745U);
    msg.setSourceEntity(103U);
    msg.setDestination(24586U);
    msg.setDestinationEntity(100U);

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
    msg.setTimeStamp(0.694997822246);
    msg.setSource(54171U);
    msg.setSourceEntity(167U);
    msg.setDestination(36958U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.0564560181372);
    msg.setSource(62963U);
    msg.setSourceEntity(169U);
    msg.setDestination(57430U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.545512213472);
    msg.setSource(36621U);
    msg.setSourceEntity(230U);
    msg.setDestination(53124U);
    msg.setDestinationEntity(116U);
    msg.section.assign("SYEDCCLEJFDRNBKDRWXQYKBVWKWDXZVCMOIQLHOHVGROFQTNYAATIGLEZRICHBINLTLJXPIUKTODKYZFWUDQQPSOQHUAWGNTVSRNAPLUHGHPMUCSMTWSLBDDBGOXSWHNXLEPVZGIFOGCPFMFJLVJAKUWYMCEKWUGYNETHXENKRNTPZHGABMUUDIQAOWSINMVCRSFBFHQJPXZRVLRZ");
    msg.param.assign("FZURCYGISIUVCNNPSZQYMXUGPPDUXQQKHDQLFTBEZFRITARXHAGSHSOLLJXFAYLEWSQSAMGORKDAEKNOXACBEQVNVCVJAPPVRYRRDHZXQXGRUCIRFOJWMLRWDPGOPUVTKIGJPBCDMJWZTOFJQNG");
    msg.value.assign("WNYJCNLHIEMGGIBWWKJKUGBWGPMZJZBCUFLQLWPAEVLHGIH");

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
    msg.setTimeStamp(0.617196100238);
    msg.setSource(45357U);
    msg.setSourceEntity(153U);
    msg.setDestination(9269U);
    msg.setDestinationEntity(48U);
    msg.section.assign("YOGGCIIXSDKIBOCRYDYFWAWGNKPRQEDKKMTVOBYJ");
    msg.param.assign("LTUINLLKGMYTGFBPVDBZETRDCJSWMCBWQCRXFZWALIZVJOWVFAVACYNIFMRGKMIEKHSHSDMKXIVHOQVDXNUHLU");
    msg.value.assign("KYUTWAJVSEHDYZREUQAHZFVNQYTXWSZKHHLVLEBQNITWEOPAAQDOEPZNDG");

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
    msg.setTimeStamp(0.954314557407);
    msg.setSource(6373U);
    msg.setSourceEntity(22U);
    msg.setDestination(16704U);
    msg.setDestinationEntity(95U);
    msg.section.assign("NGSXMOFFZJWZQGLYNWASCFPPDCWUXREVCNTIFUOYANAMRVKIMKDQHNXQBRNXTRHTLFCATXWZJUIQDBBCPGDULIOKYNDEZHPSGYVYYGPEBSLJAHHJJZRWXBUJ");
    msg.param.assign("UKQDHBKIOEALZYSMWRSIZZLIGVMZLREUHJMLLZDBDUEPJBFXCPTDIEXZUXEFGDIKAMQQYTZFOMTACFOTASUYTLRYGLVKLGOQKYWWGKQIQKIOVMNXZJRVYVOHUNCDBWVRBYAGANXMVGTJDPUOVNLBUBYEZX");
    msg.value.assign("TETIANXJTTVOQLWRWLDZHXARLNMKSJWBKXXBVBEYQVEAWXWCTYKTPRAXSSXLEPNFUDQDSWJNOVAAYUOJAFMZFUXWXPGKCHNSIANZEWQFSKHCUGJKBQCIQNOYDTEQCLLU");

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
    msg.setTimeStamp(0.723531537811);
    msg.setSource(24384U);
    msg.setSourceEntity(182U);
    msg.setDestination(6772U);
    msg.setDestinationEntity(118U);
    msg.op = 192U;

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
    msg.setTimeStamp(0.228580765033);
    msg.setSource(59289U);
    msg.setSourceEntity(214U);
    msg.setDestination(22742U);
    msg.setDestinationEntity(16U);
    msg.op = 235U;

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
    msg.setTimeStamp(0.653001148199);
    msg.setSource(21775U);
    msg.setSourceEntity(8U);
    msg.setDestination(10383U);
    msg.setDestinationEntity(131U);
    msg.op = 45U;

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
    msg.setTimeStamp(0.368614140572);
    msg.setSource(12046U);
    msg.setSourceEntity(168U);
    msg.setDestination(45389U);
    msg.setDestinationEntity(39U);
    msg.op = 148U;

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
    msg.setTimeStamp(0.934734376007);
    msg.setSource(24995U);
    msg.setSourceEntity(119U);
    msg.setDestination(4974U);
    msg.setDestinationEntity(199U);
    msg.op = 57U;

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
    msg.setTimeStamp(0.233246096148);
    msg.setSource(34307U);
    msg.setSourceEntity(155U);
    msg.setDestination(45748U);
    msg.setDestinationEntity(90U);
    msg.op = 124U;

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
    msg.setTimeStamp(0.359803580627);
    msg.setSource(37785U);
    msg.setSourceEntity(5U);
    msg.setDestination(34159U);
    msg.setDestinationEntity(144U);
    msg.total_steps = 251U;
    msg.step_number = 252U;
    msg.step.assign("NCZNKHRDUMQPMMAODACBZOVCEDGMPKVKZPYPMQXGOWHRLOWDNLXSRRDBPWTHSEXUXKKGSMTBCTACDXOWFIGAIXV");
    msg.flags = 87U;

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
    msg.setTimeStamp(0.941103396162);
    msg.setSource(50754U);
    msg.setSourceEntity(104U);
    msg.setDestination(47488U);
    msg.setDestinationEntity(151U);
    msg.total_steps = 15U;
    msg.step_number = 226U;
    msg.step.assign("EUTYUTELQGCAGYVYLJNMLKWIDTIT");
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
    msg.setTimeStamp(0.547832894434);
    msg.setSource(26169U);
    msg.setSourceEntity(80U);
    msg.setDestination(48158U);
    msg.setDestinationEntity(114U);
    msg.total_steps = 252U;
    msg.step_number = 71U;
    msg.step.assign("ROEEIUDDUBZUVVNXIPAFSIRJPTMFCUKMZCUGJEBKBRBYDGZXZHELOJOMINPLSHHWCKXWJSQYDANJPFXLEHPIZQCUBMGHRTHZXESKOBZCNSMJRHIMOQOWGTRLKSKVQAPVCBJXYYNTDQFDDYNAFYMIDGXHLPLSNVUXITHTRTIJLTEOWGFF");
    msg.flags = 121U;

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
    msg.setTimeStamp(0.241043180083);
    msg.setSource(817U);
    msg.setSourceEntity(42U);
    msg.setDestination(56635U);
    msg.setDestinationEntity(254U);
    msg.state = 236U;
    msg.error.assign("XONYWVZQOPWZPAQTSYSDIHTOXVBHEINAZUZRHVLUMJPJKVSWATZTXOQWLPYYEJJAFPKEZNWQXCRBDUDRJULNBJELBCBJSNFJWMAODFHSQAI");

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
    msg.setTimeStamp(0.144216899409);
    msg.setSource(31104U);
    msg.setSourceEntity(237U);
    msg.setDestination(26779U);
    msg.setDestinationEntity(29U);
    msg.state = 29U;
    msg.error.assign("VWGIHGUEHSASBICOTTMBLZPKYUKMQIEMTOFCRDQVDCHJDXPAWZTAUOTUBWJHQBWEHYAPOSVWEIGGIJZSKJTJNEPSXMRYLTHJENNTNFUADJEBSKFDZPOVYCOATO");

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
    msg.setTimeStamp(0.682141529188);
    msg.setSource(53691U);
    msg.setSourceEntity(37U);
    msg.setDestination(34374U);
    msg.setDestinationEntity(29U);
    msg.state = 100U;
    msg.error.assign("DGVVNEYJZSBGLAIUYOKUMJBUFZXOGWDTOZZWPLXBYHHNUCPANYBTYIISHYCGNDJVONYLSDDUVRZELWZKAPATQXEDUQWBDIXJFMVKXTFJKWQHSFRSMZSRMCRHFJOQPHKAIMRVECAXQRGUHCEKAHSWVMQZOLLZENQLPHPDRGPJUOENCIIAYMIFYVVCWNFLYJGWJCULFKIMJOHGWTSAQCRMPIEOKPBFKLBXXSRFTDBMXQPONADBNKUSRCTWEBT");

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
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.988902999126);
    msg.setSource(55362U);
    msg.setSourceEntity(114U);
    msg.setDestination(10372U);
    msg.setDestinationEntity(2U);
    msg.op = 83U;
    msg.speed_min = 0.158674741561;
    msg.speed_max = 0.24011913882;
    msg.long_accel = 0.141082616291;
    msg.alt_max_msl = 0.838034746865;
    msg.dive_fraction_max = 0.528942215577;
    msg.climb_fraction_max = 0.325751607913;
    msg.bank_max = 0.316611693884;
    msg.p_max = 0.428144703928;
    msg.pitch_min = 0.339847279916;
    msg.pitch_max = 0.778252801416;
    msg.q_max = 0.427370903066;
    msg.g_min = 0.180961694076;
    msg.g_max = 0.478018885121;
    msg.g_lat_max = 0.127102223378;
    msg.rpm_min = 0.328105913199;
    msg.rpm_max = 0.232519583769;
    msg.rpm_rate_max = 0.943349802688;

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
    msg.setTimeStamp(0.226072615319);
    msg.setSource(2953U);
    msg.setSourceEntity(103U);
    msg.setDestination(12484U);
    msg.setDestinationEntity(253U);
    msg.op = 16U;
    msg.speed_min = 0.73644644166;
    msg.speed_max = 0.789127380365;
    msg.long_accel = 0.71206869931;
    msg.alt_max_msl = 0.62259973053;
    msg.dive_fraction_max = 0.849270985108;
    msg.climb_fraction_max = 0.201082378719;
    msg.bank_max = 0.310267073382;
    msg.p_max = 0.500448197553;
    msg.pitch_min = 0.372405214874;
    msg.pitch_max = 0.992583306083;
    msg.q_max = 0.520542109068;
    msg.g_min = 0.931947975606;
    msg.g_max = 0.0431106890441;
    msg.g_lat_max = 0.961946248316;
    msg.rpm_min = 0.169808152119;
    msg.rpm_max = 0.779522231666;
    msg.rpm_rate_max = 0.29680613184;

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
    msg.setTimeStamp(0.410095040995);
    msg.setSource(3874U);
    msg.setSourceEntity(9U);
    msg.setDestination(64833U);
    msg.setDestinationEntity(162U);
    msg.op = 196U;
    msg.speed_min = 0.648183469378;
    msg.speed_max = 0.690019743614;
    msg.long_accel = 0.842982437568;
    msg.alt_max_msl = 0.394979749273;
    msg.dive_fraction_max = 0.267628144496;
    msg.climb_fraction_max = 0.190009035656;
    msg.bank_max = 0.85953793048;
    msg.p_max = 0.888515542371;
    msg.pitch_min = 0.0136148114687;
    msg.pitch_max = 0.652198208522;
    msg.q_max = 0.0877273090244;
    msg.g_min = 0.288393702011;
    msg.g_max = 0.473313173006;
    msg.g_lat_max = 0.959093411571;
    msg.rpm_min = 0.214603827386;
    msg.rpm_max = 0.777340913929;
    msg.rpm_rate_max = 0.511395892737;

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
    msg.setTimeStamp(0.576059881296);
    msg.setSource(49027U);
    msg.setSourceEntity(183U);
    msg.setDestination(2105U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.829314701468;
    msg.lon = 0.263288378657;
    msg.height = 0.188098666603;
    msg.x = 0.54927695547;
    msg.y = 0.425396885896;
    msg.z = 0.808534986492;
    msg.phi = 0.276571132068;
    msg.theta = 0.251796879823;
    msg.psi = 0.955565475731;
    msg.u = 0.184067750326;
    msg.v = 0.737634789447;
    msg.w = 0.599024950248;
    msg.p = 0.981622552868;
    msg.q = 0.157905392994;
    msg.r = 0.322946404408;
    msg.svx = 0.970846126455;
    msg.svy = 0.0695556969199;
    msg.svz = 0.39256852638;

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
    msg.setTimeStamp(0.539169506775);
    msg.setSource(4111U);
    msg.setSourceEntity(177U);
    msg.setDestination(12708U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.846774129669;
    msg.lon = 0.0996196932179;
    msg.height = 0.17794285313;
    msg.x = 0.408302166446;
    msg.y = 0.341167709442;
    msg.z = 0.101319119596;
    msg.phi = 0.488504265796;
    msg.theta = 0.360892208284;
    msg.psi = 0.443843801918;
    msg.u = 0.0868423984663;
    msg.v = 0.489617476558;
    msg.w = 0.526297043268;
    msg.p = 0.0792085584663;
    msg.q = 0.79475262029;
    msg.r = 0.163341681709;
    msg.svx = 0.245105697588;
    msg.svy = 0.485924311057;
    msg.svz = 0.0297255772398;

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
    msg.setTimeStamp(0.157230207565);
    msg.setSource(27710U);
    msg.setSourceEntity(219U);
    msg.setDestination(59393U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.461402875287;
    msg.lon = 0.801206789969;
    msg.height = 0.522255146678;
    msg.x = 0.640625751001;
    msg.y = 0.266040418569;
    msg.z = 0.130239498983;
    msg.phi = 0.988024021066;
    msg.theta = 0.188458806811;
    msg.psi = 0.831490892635;
    msg.u = 0.249002597629;
    msg.v = 0.0452028765913;
    msg.w = 0.0302968353019;
    msg.p = 0.660058637422;
    msg.q = 0.668008515481;
    msg.r = 0.529347600903;
    msg.svx = 0.995384071318;
    msg.svy = 0.664666617275;
    msg.svz = 0.1572736464;

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
    msg.setTimeStamp(0.384136987524);
    msg.setSource(40397U);
    msg.setSourceEntity(45U);
    msg.setDestination(25168U);
    msg.setDestinationEntity(223U);
    msg.op = 246U;
    msg.entities.assign("XONPGCLXZWEICAWVUTQYEXGLIWDMTQMXOAASHLRDXNHNKOPPBFWGEEKGEOEFVKQBMZCJORAELFHHZTFABISMBVFYJWDCYGSBMVHRHXURVLWFWNNNDDDAOPKZWFUUM");

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
    msg.setTimeStamp(0.373048709045);
    msg.setSource(53331U);
    msg.setSourceEntity(40U);
    msg.setDestination(9906U);
    msg.setDestinationEntity(172U);
    msg.op = 147U;
    msg.entities.assign("CVRBKJYGRXSOVDCHWZCAEQTVUTYGHSMQPZDNHRPWBQCSMRHQQYOLPRULUTRZBAOUDYIHXOATVUIXGMGRPEYJSDSFKHEQXQKSEDWPZLFJMTOKAHKDDEDZMGNJNMCFLCCOBGJZFJNVPIAISZDSNFIIYVEZWFHKQZRVSCXBPWXIOLMWIQJARHBAXOUULW");

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
    msg.setTimeStamp(0.147516299977);
    msg.setSource(37440U);
    msg.setSourceEntity(216U);
    msg.setDestination(26352U);
    msg.setDestinationEntity(37U);
    msg.op = 198U;
    msg.entities.assign("VLFOKVSYHXSZIWIAAKXPCEJFFWJBLKERNRFBPRPNOXJNJFFCPPHRSZQGSXWCTAYDBMOMTUWNKUUPYXPJRWZLXPXNYERREZYNCMOASCVGFCURGRUTDJUKILVBJAYVMM");

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
    msg.setTimeStamp(0.0767663077571);
    msg.setSource(12594U);
    msg.setSourceEntity(204U);
    msg.setDestination(46659U);
    msg.setDestinationEntity(49U);
    msg.type = 53U;
    msg.speed = 58812U;
    const char tmp_msg_0[] = {-110, 70, -44, 46, 65, 24, 40, 117, -28, -55, 58, 88, 44, 115, -72, -41, 77, 46, -26, 86, -89, 80, 15, -121, -93, -48, 71, 81, 100, 79, -111, -18, -45, -124, 125, 58, -106, -21, -101, -25, 116, 68, 113, 57, 70, 115, -121, -122, -115, -59, 118, 25, 69, 102, 68, -19, -43, -4, 65, 87, -11, -80, -108, -83, 29, -99, -101, 13, -19, 32, 78, 79, 1, -11, 60, 111, -45, 87, 77, -114, -66, -38, 12, -52, 40, 56, -126, -7, 125, 29, 33, 63, 16, 73, 88, -126, 60, -10, -19, 101, 116, 65, 3, 102, -60, 1, 117, 97, -87, -116, -119, 123, 104, 38, -42, 4, -61, 18, -116, -54};
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
    msg.setTimeStamp(0.0909241838405);
    msg.setSource(59535U);
    msg.setSourceEntity(32U);
    msg.setDestination(47444U);
    msg.setDestinationEntity(117U);
    msg.type = 26U;
    msg.speed = 52049U;
    const char tmp_msg_0[] = {27, 7, -34, -1, 3, 122, -106, -3, 7, -99, -91, 0, -62, 50, -63, 103, -109, 58, 86, 29, -28, 115, 32, 65, 56, 24, -87, 76, -87, -36, 21, -66, -43, -105, -46, -59, 124, 113, -18, -112, 102, 81, 77, -93, 68, 21, 100, 89, -3, 113, 11, 121, 38, 27, 20, 4, 121, -65, 44, 85, -31, -6, -10, -98, -86, 98, -92, -34, -40, -4, 95, -36, 65, -103, -59, 113, -79, -47, 42, -118, 80, 53, -21, -76, -24, 55, 27, -82, 4};
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
    msg.setTimeStamp(0.306170367303);
    msg.setSource(58737U);
    msg.setSourceEntity(141U);
    msg.setDestination(6532U);
    msg.setDestinationEntity(80U);
    msg.type = 3U;
    msg.speed = 33229U;
    const char tmp_msg_0[] = {-52, 38, 115, 114, -5, -63, 77, 84, -37, -47, 124, 71, 86, 100, 64, 72, 57, -67, -103, -121, -51, -15, 42, -72, -92, 99, 80, -75, -118, 84, 9, -118, -56, 66, -62, 50, -42, 30, -75, 39, -37, 29, -112, 73, -31, -49, -79, -49, -62, 16, 101, -42, 118, -10, -104, -55, -117, -80, 16, 17, -36, 124, 87, -41, 38, -74, 67, -87, -94, -77, -100, -19, -41, 38, 49, 112, -41, 68, 44, -75, -105, 84, -112, 70, -58, 81, -94, -74, -84, -59, -47, -76, 30, -99, -90, 120, 70, 31, -123, 53, 76, 123, 63, 33, -1, -21, -105, -115, -97, 126, 125, -115, 79, 5, -60, 112, -124, 115, -87, -37, -62, -5, -71, -69, -33, -12, -15, 71, -59, -50, -53, 66, -27, -118, 93, -7, -2, 58, 34, 114, -62, -54, -41, 25, -88, -22, -78, 114, 52, -9, 125, 42, 43, -93, -30, 40, 115, -55, -108, 16, -123, -15, 98, -95, -40, -60, 48, 5, -49, -55, -74, 88, 51, -20, 122, 73, -16, 5, -91, -85, -27, -32, 40, 0, 111, 46, -43, -81, 6, -127, -4, -88, -62, -46, -78, 5, -74, 85, -82, -55, 4, -119, -93, 54, -6, -5, 53, -73, -56, 13, -51, -92, -16, 35, -40, 14, 33, 64, 75, -56, -76, -97, 122, -65, -113, 30, 44, -14, 113, 60, 24, -84, -6, 3};
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
    msg.setTimeStamp(0.435676943688);
    msg.setSource(28565U);
    msg.setSourceEntity(21U);
    msg.setDestination(1025U);
    msg.setDestinationEntity(19U);
    msg.op = 231U;
    msg.tas2acc_pgain = 0.920199962393;
    msg.bank2p_pgain = 0.399882560933;

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
    msg.setTimeStamp(0.227155688465);
    msg.setSource(26138U);
    msg.setSourceEntity(215U);
    msg.setDestination(38299U);
    msg.setDestinationEntity(120U);
    msg.op = 154U;
    msg.tas2acc_pgain = 0.410145551269;
    msg.bank2p_pgain = 0.431267980231;

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
    msg.setTimeStamp(0.583023938018);
    msg.setSource(42761U);
    msg.setSourceEntity(27U);
    msg.setDestination(22493U);
    msg.setDestinationEntity(38U);
    msg.op = 236U;
    msg.tas2acc_pgain = 0.158864189165;
    msg.bank2p_pgain = 0.574660813445;

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
    msg.setTimeStamp(0.19198007254);
    msg.setSource(49950U);
    msg.setSourceEntity(87U);
    msg.setDestination(4207U);
    msg.setDestinationEntity(47U);
    msg.available = 1518182906U;
    msg.value = 113U;

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
    msg.setTimeStamp(0.779105785493);
    msg.setSource(8664U);
    msg.setSourceEntity(178U);
    msg.setDestination(47114U);
    msg.setDestinationEntity(48U);
    msg.available = 262793311U;
    msg.value = 188U;

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
    msg.setTimeStamp(0.22877562236);
    msg.setSource(20126U);
    msg.setSourceEntity(23U);
    msg.setDestination(49112U);
    msg.setDestinationEntity(50U);
    msg.available = 2915709121U;
    msg.value = 223U;

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
    msg.setTimeStamp(0.452732109407);
    msg.setSource(9271U);
    msg.setSourceEntity(14U);
    msg.setDestination(32764U);
    msg.setDestinationEntity(215U);
    msg.op = 192U;
    msg.snapshot.assign("APYKNGSXSBXXHZCPBDFRUFLEYRJYDEXSQSCQXNNWBHUREOIDIXDTZTLOVUVEHIWQTFHIRFTYTKVGNBNUBFZGRROWDJDKWOFWNKPPNAAJWQQVKXSIFHCLTZMYOWQAVZZJLVFAIZGKJCXERHMCULMVEFDEZTFLMKURCJPBKWTODMUUQZMDGVXJPMCYOKWPQUUYYBGBKSHJTMRHQOELI");
    IMC::QueryPowerChannelState tmp_msg_0;
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
    msg.setTimeStamp(0.258265499464);
    msg.setSource(32529U);
    msg.setSourceEntity(85U);
    msg.setDestination(11319U);
    msg.setDestinationEntity(115U);
    msg.op = 184U;
    msg.snapshot.assign("XCAUQEWUGQYSRJ");
    IMC::DesiredHeadingRate tmp_msg_0;
    tmp_msg_0.value = 0.456708077382;
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
    msg.setTimeStamp(0.0531748718945);
    msg.setSource(53880U);
    msg.setSourceEntity(19U);
    msg.setDestination(8225U);
    msg.setDestinationEntity(21U);
    msg.op = 222U;
    msg.snapshot.assign("GIBKLXXINCSMXVQEDPLFQMLAPQYLQBNCTTMFVCTIZZWDLLYYDUVNRDUSYYXVQFFDJMBJZWDISWUWQTFMUQKFPDJIKUSTHCVKWSYZPFRATTAECPAFOGJPXTOLFICAPXMGBEHONDVJLEHIUK");
    IMC::Parameter tmp_msg_0;
    tmp_msg_0.section.assign("SOFQOHOBKSXVGGHCDYJCYOTJJCVXLSTOEWTPDDTXKIYZPHIUQHRQMRAUZKPJPXGDPFRIRAUCEQJUJLPNVTSZCRTTXEXAAUJCBOZAEIQLFWYPEAHCBFMLANXKYRYZDULLSYGMZUSBAOJFKIZKFNYCSBOBQNVWQOVWKEPJNQTMKWFYLGUZZMLRVLJNQEBBGGYGUNXMEWEPBFTDHAWIHNRBWNSHWMSGHQIUD");
    tmp_msg_0.param.assign("GPTKTCGKNZNIBFTCCZIJSGONMOPQBVPEYRXTMVWYGXHKPISATDAWCXBQREFZFOEHSNAXKAHKRYKKEEDBPRQAUBUJCIMTVBEFBYRSHXOWZWZXMJRDWUFZKUWDEZWLXDVBMFLFDAFFELGEQNGIDUTIUIHYLMYWWCOPGZ");
    tmp_msg_0.value.assign("GDKFLDAYZDCWVCWNXVNUZQDFYLBDILYVELMSPUMTDAOCPWUSKANSCUYJFEVZUHVOOBZMZXXYMHMQOSMXCCQPGHHQORGOXIMBTEUEB");
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
    msg.setTimeStamp(0.239429447278);
    msg.setSource(60159U);
    msg.setSourceEntity(93U);
    msg.setDestination(38627U);
    msg.setDestinationEntity(82U);
    msg.op = 67U;
    msg.name.assign("LSNZIGEKGRATKMPOQSHVANVBXPAARCIDUORVKOJRCJDAHSTSGLJZJYPDBCEWFZXTXJUZSXBNSYGMBWIWTMBVOLHRMSZOFBUDKOUFMMFXWYKFXKHNGDYFYGPMVMEDPTDYDHTSWREURPRULKJEWUJQTTRYOAQHMATHNNHQQIBXAYBCPYKQBRXHQXSFLFZXNWLYIVFES");

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
    msg.setTimeStamp(0.294113209421);
    msg.setSource(58163U);
    msg.setSourceEntity(23U);
    msg.setDestination(16395U);
    msg.setDestinationEntity(145U);
    msg.op = 196U;
    msg.name.assign("JIPUMHKHJGGLKQQRQFSNIDQGSXDNVDFCXADTYJUZQRINLPCSQLOCNWDKKFMZZKBAEMWTJPHMJYDCGWUENEEOUSGDMNZACRLXTKWAQHBBTT");

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
    msg.setTimeStamp(0.46763281952);
    msg.setSource(61138U);
    msg.setSourceEntity(179U);
    msg.setDestination(43325U);
    msg.setDestinationEntity(79U);
    msg.op = 36U;
    msg.name.assign("VKHRZLQVTGERCNGYBMYDSHBEXECJDVUSQFQFLBYPHEBIGACRTDAHAADKSQSLMJDXTMFOHYOWCMCOEULITZTCWDYFQFFTBFRZKGCPNTKAISPNXCWUCZSHEURXKJOJFHNBXULIWPKSAMTZPJVDUCEGOZXDRQXISLN");

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
    msg.setTimeStamp(0.0944463180378);
    msg.setSource(18748U);
    msg.setSourceEntity(68U);
    msg.setDestination(13607U);
    msg.setDestinationEntity(232U);
    msg.type = 195U;
    msg.htime = 0.245974077755;
    msg.context.assign("HNQWQEQAFBEKRFYZJCYPAMLEJIVSCMFQTHZNBXTLUDHSDPSDCYRCOXGEVGIOSNUFWTOTISPOKGBKLTCGFXVZFEKJGMQHCNRNVHSZMRKHFMXSPZAXQWHITUMOZRMYDBLUWITPJFARI");
    msg.text.assign("WZFABVOOPLXCXPOGJTNTALSOFIOWZUWTFDXIJIGAZNBMYYXBSEQDQHBQTYNRXLFAEHXIGWQYDMLSOLLQZGZRJUHKWMVCHKAVFRKYWRSVMMYEUIMJZHBTSEVJBIWVFPUJPMFGVOAZMPRRIVNNGCZGQIKUERGYKSNKWLBDNHSDLONEDDJKKXICJTBQHMFPQYGNSHBRXUPAJANDAHVPUQTTORTCFRPWXZSEPVYCUHMECBCOCGDFTZULQA");

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
    msg.setTimeStamp(0.735023649676);
    msg.setSource(46301U);
    msg.setSourceEntity(193U);
    msg.setDestination(60970U);
    msg.setDestinationEntity(66U);
    msg.type = 131U;
    msg.htime = 0.727603888399;
    msg.context.assign("SHZJIIQLQCWCFZXPIBLACMVFTVNZBQTUXEHIYWWWDJNWYXOTDWBADRILWKVPPEKVHQMMJWLZXACFLODSTFBCVMFEBQDNIKOHHMWOSAYMZEJSNHGDRORKHGPTTNVPPORQXFTOCKDJPCBLQTPSDRUZMKKZQGIIBRYUASOEYSALYYUXIBQSPFAVCAZPLDDHGBZKGXRJRSTYWMGGGNCQJUFUEMHNGFYZEL");
    msg.text.assign("OKEPPSMIGILYCTAZTZVLLNXXNTBOFZJY");

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
    msg.setTimeStamp(0.317841715435);
    msg.setSource(42763U);
    msg.setSourceEntity(2U);
    msg.setDestination(35625U);
    msg.setDestinationEntity(27U);
    msg.type = 86U;
    msg.htime = 0.48772036974;
    msg.context.assign("NYGFKHIMMXKOQSLTDRXIECVDBDJQVETLTQJCTOKOYMSWQXCGBWTYGWBUOZXQOQFSDUOFDSNGAEVSHSBGNWWGHNV");
    msg.text.assign("FFCHQBLXLHAVDBYUVRNWI");

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
    msg.setTimeStamp(0.0307728005025);
    msg.setSource(9080U);
    msg.setSourceEntity(233U);
    msg.setDestination(48689U);
    msg.setDestinationEntity(119U);
    msg.command = 32U;
    msg.htime = 0.324966885454;

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
    msg.setTimeStamp(0.616154355341);
    msg.setSource(46269U);
    msg.setSourceEntity(213U);
    msg.setDestination(13365U);
    msg.setDestinationEntity(85U);
    msg.command = 225U;
    msg.htime = 0.557619341358;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 16U;
    tmp_msg_0.htime = 0.0801308397607;
    tmp_msg_0.context.assign("WBGRHXQLBJBILBKMTERCSOFDTHTMDSZSUGFNAFMKSAZXOKZVNNDENDTYQCIQLANTMGKKRCAGVOVDOQXDPCIHNILYBMOPTRW");
    tmp_msg_0.text.assign("MHQZJKGVZJMDJPGYWXNLQRHDLEJJWKFNBQWMYFMPXTGDEIRGOYTBIHLRKUCSLWWQMACEXVSNTSWEWRYPCDSWFOUMJFASUUPEHUANLLYVMPQVBAZGCJINKSUZHGHEKDSNIRLTEOUJXPVYXKIGOGPEGATCBHMKIFFDSVNBREZPVJZKZTXAVBJAQCFUAKRNPDLVXRAIHNUTQIUSOYEWOLQTDPXODTWB");
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
    msg.setTimeStamp(0.903292028886);
    msg.setSource(58244U);
    msg.setSourceEntity(164U);
    msg.setDestination(47491U);
    msg.setDestinationEntity(193U);
    msg.command = 8U;
    msg.htime = 0.291084643912;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 101U;
    tmp_msg_0.htime = 0.909249583498;
    tmp_msg_0.context.assign("XIIGDAXXTDEVSLUAKEAGKTFCCRLB");
    tmp_msg_0.text.assign("MUNFIZAIZPWQCTXEFORNXBWLALVCPDWKVHGOXKCDOWCTHNFXBMSJCVLHUWCXJZRLAQFSRJUIQIYQHFKXKUDRIRFYMKNJLKRAOQAMSGZBSMDVQZQYOENYHDQUTNJYGOIFWMSURMGKXBBZULVGGWAVDIMYGSEFVLJPHYZMAMEITPOGHBOKAXJOQXVVJTFCPSTDZBCAOUHTYNICHNPPTDUPTCEDEBAVYRNGRSSLSPZEGQUPNFI");
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
    msg.setTimeStamp(0.765748613644);
    msg.setSource(42193U);
    msg.setSourceEntity(51U);
    msg.setDestination(54555U);
    msg.setDestinationEntity(244U);
    msg.op = 53U;
    msg.file.assign("GGVIGFUKWXTJJLNNKDYS");

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
    msg.setTimeStamp(0.365281734851);
    msg.setSource(19562U);
    msg.setSourceEntity(202U);
    msg.setDestination(36251U);
    msg.setDestinationEntity(170U);
    msg.op = 69U;
    msg.file.assign("ZFXPLBRNHEEFTUMBJFHWFJQONKWPLYMDOGWUQGGPPXWSUXIUJLZINIYXPZVVRRZITKGVCTCNDHAUQKEYMIHUAZFNXJCRURPLTQBIFKEVABHMT");

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
    msg.setTimeStamp(0.83603999817);
    msg.setSource(25284U);
    msg.setSourceEntity(98U);
    msg.setDestination(12608U);
    msg.setDestinationEntity(91U);
    msg.op = 86U;
    msg.file.assign("KQYUSIGITJFEMZBCBCPFBTZIPQPPMUHMEYMHUQILATFJQLXOUVCYEPADGEAWJXAVGLZHYDYCUWDRRVICFSCINBKWKTUQNVTMCVPGDKOSNYMJDORXEPZFQNTZSHGKNDRXAKAJBTAKROKEONUGHGVMFRRVQ");

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
    msg.setTimeStamp(0.712781670951);
    msg.setSource(4471U);
    msg.setSourceEntity(195U);
    msg.setDestination(16160U);
    msg.setDestinationEntity(59U);
    msg.op = 127U;
    msg.clock = 0.264845794961;
    msg.tz = 29;

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
    msg.setTimeStamp(0.0477531020707);
    msg.setSource(44475U);
    msg.setSourceEntity(238U);
    msg.setDestination(31382U);
    msg.setDestinationEntity(226U);
    msg.op = 150U;
    msg.clock = 0.366241159951;
    msg.tz = -31;

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
    msg.setTimeStamp(0.59046493337);
    msg.setSource(51734U);
    msg.setSourceEntity(217U);
    msg.setDestination(20737U);
    msg.setDestinationEntity(223U);
    msg.op = 22U;
    msg.clock = 0.612402305955;
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
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.829100939322);
    msg.setSource(21314U);
    msg.setSourceEntity(91U);
    msg.setDestination(49564U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.691031427334);
    msg.setSource(61787U);
    msg.setSourceEntity(25U);
    msg.setDestination(28661U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.957904993617);
    msg.setSource(49287U);
    msg.setSourceEntity(83U);
    msg.setDestination(19215U);
    msg.setDestinationEntity(23U);

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
    msg.setTimeStamp(0.499731483505);
    msg.setSource(45327U);
    msg.setSourceEntity(43U);
    msg.setDestination(43482U);
    msg.setDestinationEntity(191U);
    msg.sys_name.assign("LRSAQMYJLIVJSTPRMBFPVGWDAHZDSWNNGXFCSEXHGCMIJIXUAUYYMCBUSMMWMYESLQPYLUFGIXHTRGHJIQGDUSCKQOTAJLBUDDBCHZVRKXONBTARXPOLKATHNGJWAKJSIPQWOVRUXKKFFCSETDZNGFKONXYHCHXEUHNUIRMZOWOTPNTAQD");
    msg.sys_type = 82U;
    msg.owner = 29788U;
    msg.lat = 0.804033112504;
    msg.lon = 0.381708675345;
    msg.height = 0.710636487468;
    msg.services.assign("ENNVLWTAXSVEIIRQBRFVAXSVGBSBGYJDOTNPTK");

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
    msg.setTimeStamp(0.896061470634);
    msg.setSource(57195U);
    msg.setSourceEntity(81U);
    msg.setDestination(22635U);
    msg.setDestinationEntity(157U);
    msg.sys_name.assign("FQHIBLFIBOAGIWPYFQOEHBQUHZPNJDKUNYOHVKYAEZNZJLPTEPKHOLICJJMLTBVBRBDNDAMLQZZHTFNKUTDDLIAOBGZVDOYVEXZHMFBLSVFQWPCWRJSKXGFGACRSMYIKQKXRVASIMWKC");
    msg.sys_type = 8U;
    msg.owner = 54038U;
    msg.lat = 0.60605420183;
    msg.lon = 0.887614020342;
    msg.height = 0.0651379492124;
    msg.services.assign("CEJLQOKDQQXSHTDHOBC");

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
    msg.setTimeStamp(0.342584073297);
    msg.setSource(45270U);
    msg.setSourceEntity(5U);
    msg.setDestination(17232U);
    msg.setDestinationEntity(37U);
    msg.sys_name.assign("FUJCYOJGQBKULINFCPEQZYVLNSQCKGJPCOUEKBIGLRXAMJVOVSFFBEGSQVFVQQAHHXD");
    msg.sys_type = 150U;
    msg.owner = 33586U;
    msg.lat = 0.594680647256;
    msg.lon = 0.777659204389;
    msg.height = 0.987683879539;
    msg.services.assign("TPMOYTYVUTWFKZZIHQAYXIGOICJYWLCXLQEPDLWERIRCKMDNYTYNPADSFOALNHBHIRTIJCUGIHKMRQVAGPFZLFFDUHOCPVPXEOVBZPSZCJACRRCSFLCRDZWLTFEXUNDUHGKKATFEVXDKOJQNMOCHXFAWJNMLISMPAQMEHEGWJXZTLPSSUOKBGB");

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
    msg.setTimeStamp(0.896787519541);
    msg.setSource(63878U);
    msg.setSourceEntity(89U);
    msg.setDestination(2278U);
    msg.setDestinationEntity(67U);
    msg.service.assign("MOEDOKXLGOQTEIOKDFQKSCJPLEEWZABMGHTNJIIBHXAEOYAIQVLTCENSDXZUQJGBCTUMULLSHFKRKIIMNUBZFJICNLSWGWQQRPMDYNVCUEDHUVLI");
    msg.service_type = 251U;

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
    msg.setTimeStamp(0.22917397753);
    msg.setSource(41018U);
    msg.setSourceEntity(177U);
    msg.setDestination(15842U);
    msg.setDestinationEntity(97U);
    msg.service.assign("PMOMHMAZLOSHLGHXIRRZVEBZRQCTTDDGQTGPXXHWOLEVUMRAOWRCUBYYVPXVZJIVMWJONEHNYKWLPPRFVLEWDUPKEHDSDXTQPEJSIRSCBZKDYGUFAQQXUFSJMTMAVQNXDYSBGJJCONULMF");
    msg.service_type = 139U;

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
    msg.setTimeStamp(0.670109519553);
    msg.setSource(13286U);
    msg.setSourceEntity(35U);
    msg.setDestination(28432U);
    msg.setDestinationEntity(54U);
    msg.service.assign("NJYNEVISTLLXXYABTCQOCOZZYUPOXBCPGVLTKBTMDPYXXEDHWNKQZNJSHBPPNVPBNOEGLOXFVOFZGMCUJSZRTUIGYUCGNCLTAQIMLTFHIRRXWGFRKJJOLQCBZQXRVMFHWKOQZUADZBCLJPERKJTKSXGBFKUVOJHETHDVHCEAWYRIUGASBIAYNWSEPJWLVPDSUOIFVQ");
    msg.service_type = 10U;

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
    msg.setTimeStamp(0.332161002521);
    msg.setSource(40153U);
    msg.setSourceEntity(198U);
    msg.setDestination(64854U);
    msg.setDestinationEntity(162U);
    msg.value = 0.719586876405;

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
    msg.setTimeStamp(0.437794457575);
    msg.setSource(26299U);
    msg.setSourceEntity(73U);
    msg.setDestination(30533U);
    msg.setDestinationEntity(185U);
    msg.value = 0.0658653069247;

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
    msg.setTimeStamp(0.00339163939122);
    msg.setSource(21898U);
    msg.setSourceEntity(17U);
    msg.setDestination(52465U);
    msg.setDestinationEntity(205U);
    msg.value = 0.580494559325;

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
    msg.setTimeStamp(0.234426976792);
    msg.setSource(4910U);
    msg.setSourceEntity(172U);
    msg.setDestination(34721U);
    msg.setDestinationEntity(60U);
    msg.value = 0.19392814913;

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
    msg.setTimeStamp(0.651810960104);
    msg.setSource(3257U);
    msg.setSourceEntity(27U);
    msg.setDestination(19554U);
    msg.setDestinationEntity(203U);
    msg.value = 0.386209289281;

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
    msg.setTimeStamp(0.305385554162);
    msg.setSource(5184U);
    msg.setSourceEntity(117U);
    msg.setDestination(41426U);
    msg.setDestinationEntity(28U);
    msg.value = 0.0361776060583;

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
    msg.setTimeStamp(0.427222801387);
    msg.setSource(20494U);
    msg.setSourceEntity(101U);
    msg.setDestination(10058U);
    msg.setDestinationEntity(108U);
    msg.value = 0.546406927662;

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
    msg.setTimeStamp(0.439704866394);
    msg.setSource(21393U);
    msg.setSourceEntity(18U);
    msg.setDestination(5299U);
    msg.setDestinationEntity(110U);
    msg.value = 0.247058492346;

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
    msg.setTimeStamp(0.293499732967);
    msg.setSource(47724U);
    msg.setSourceEntity(124U);
    msg.setDestination(58928U);
    msg.setDestinationEntity(211U);
    msg.value = 0.778116094541;

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
    msg.setTimeStamp(0.0539652111562);
    msg.setSource(1799U);
    msg.setSourceEntity(104U);
    msg.setDestination(51244U);
    msg.setDestinationEntity(1U);
    msg.number.assign("KVHNZRGMJRNXYLARMSSFIJPCBIMFUFDMXPIFXTKMWKINQXTMKCHDM");
    msg.timeout = 21214U;
    msg.contents.assign("XZLYORXHARNMQBWACCZNEVPOPYSWTIHLPUPDZTXTQSJFCJRWGYKFDNPUTYLZLAXEEIAKRLXTGMINBQGCQSIJKSFIAQXEBVCMLOAFZBOKWCNEGXGZKIBSHTDWUSJZJRADSXYHBFWMHPMWUUVKFJOBJMINHQSAFJERKUTCVPEXIPOZQWUGNYDHLZJECDYSOTQLAQTVVOGHPCIRUYHROGDHNBLEMSTDBX");

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
    msg.setTimeStamp(0.788386332844);
    msg.setSource(10474U);
    msg.setSourceEntity(157U);
    msg.setDestination(65100U);
    msg.setDestinationEntity(118U);
    msg.number.assign("LVPZIBFOGMQKZKKGAERNQDDCEJEIYAOORYTBLFSSTJAJVZHWFXWIPLHUGYKZOEGNNGGAWMMB");
    msg.timeout = 47533U;
    msg.contents.assign("JNKKJSPESJYVXGTGU");

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
    msg.setTimeStamp(0.979348111209);
    msg.setSource(16685U);
    msg.setSourceEntity(20U);
    msg.setDestination(59669U);
    msg.setDestinationEntity(67U);
    msg.number.assign("STBTXZQTHKHGUFEMVDGDHKSNXGMXYX");
    msg.timeout = 38118U;
    msg.contents.assign("MCQGPEQYEHUZKUCTTIFRRNNPDULALRXHLBIDHUFKBWXKVISWTZXZHMVUHEBNKWNSCBMVRVLFOTGTMRLIJWFPHRKOYEOTVMFUDUZJRIAATAN");

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
    msg.setTimeStamp(0.320647866055);
    msg.setSource(4863U);
    msg.setSourceEntity(135U);
    msg.setDestination(17654U);
    msg.setDestinationEntity(124U);
    msg.seq = 1124262211U;
    msg.destination.assign("OPIQAQIZYGTFKFHNNLZHZUOIAXCSSESSYEFHGRAMAJNJEAUBDMQPMQKCXWHJUNOIVKRNIKSXEVVRKZLSCLHIMTEKQSLRAWKRRZMQUJLCPTDMRCLZVTPJXLOFBNZFJQXDUAWKBXLFQWYVDGCGDLBDFCEQFZXXOPMDZGWPUBJEOPNTNDRITYXIWGMCYCGDHGVHHUSVXTYJYNCFOZWELSOKUYUOAVUJSIBBEHKABTMAIWRBTWJGF");
    msg.timeout = 44970U;
    const char tmp_msg_0[] = {96, -108, -20, 1, -84, -6, -66, 0, -117, -40, 26, -122, 109, -124, -70, -80, -77, 5, 92, 23, -95, -3, -32, 124, 122, -69, 84, -107, -96, 23, 98, 22, -106, -98, -17, -5, 116, 79, 39, -59, 115, -64, 119, -78, 65, 30, 109, 37, 118, 73, 63, -40, 37, -98, 81, 26, 69, 21, -50, -85, 58, 19, 33, -71, -85, -39, 83, -94, 90, 2, 49, -74, 27, -89};
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
    msg.setTimeStamp(0.213156826778);
    msg.setSource(62459U);
    msg.setSourceEntity(217U);
    msg.setDestination(9417U);
    msg.setDestinationEntity(218U);
    msg.seq = 1439950726U;
    msg.destination.assign("FNRISXHSHPPKDYJYIUDLZMVSCXOJFLTIVVWSDWPVYOYNJGPASVGZUEWFCLLMRPHDCWAKHTCPQMMHQFDXGNHAMUYGCFRZTXYJRTKJIOMLGRBOGQFDFMGOJOYBZKIXHICGTLRQZVBEQRDWBUPNCDKTEPKSYQOMDOKHCEEAGFWYEUZWLAAGXVSHIXIOUKZLUEYUJTRAQEOPQAKSLUJMWDANQAIIBHVBWZKPTJVBLCSRTBTNZXNCFBBWNXXN");
    msg.timeout = 31011U;
    const char tmp_msg_0[] = {-117, -23, -72, -110, -105, -22, 30, 40, 52, -124, 29, 6, -49, -16, 63, 26, 74, -115, -91, 109, 15, -73, 61, 30, -98, -124, 122, -33, -16, 55, 20, -97, -35, -86, 42, 7, 61, -54, -101, 98, -35, -54, 37, 31, 16, 19, -41, -5, -53, -10, -112, -68, -63, -19, 115, -91, 120, 42, -7, 72, 52, -8};
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
    msg.setTimeStamp(0.256978219961);
    msg.setSource(62851U);
    msg.setSourceEntity(57U);
    msg.setDestination(26133U);
    msg.setDestinationEntity(91U);
    msg.seq = 261355561U;
    msg.destination.assign("DLIFERDQOJLHKVVQHCCDGOLHQJLJCGPYRTSOEZJJZKCQTLANAEHANLIJBVDWETCHGAFIZGOIBFMYXUNDGYUUFMKBIYFXFJMUZZBEWECVKFPHJGSRBNRYLMZMEROXZUXZYWTXWPMLQNKRSUBWNYFUSYIRKZHHDUGSLXBGCVWQPKBCETMDSMCADFVOPEVMSBWRYWXBQSD");
    msg.timeout = 42621U;
    const char tmp_msg_0[] = {103, 58, -101, -61, 76, -78, -62, 68, -17, 0, -125, -103, -31, -109, 123, 126, 118, -33, 46, 37, -36, 76, -34, 2, -28, -108, 66, 49, -63, 10, 114, 70, -78, 109, -56, -64, -41, 105, -84, 102, 49, 25, -105, -121, -16, 40, 84, -56, 102, 93, 36, -61, 46, -111, 49, 51, -59, 92, -6, -39, 59, 18, -98, -91, -43, 0, -86, -24, 29, 84, 29, 78, -116, -8, 75, 75, -28, 47, 14, -67, -5, -123, 4, -100, -90, -72, -112, -25, -87, -44, 79, 79, 75, -3, 119, -101, -49, -9, -91, 66, 53, -87, 69, -47, 69, -60, -87, 32, 8, 36, -41, -98, -82, -17, 0, -63, -24, 65, 13, 50, 41, -61, -44, -66, -26, 57, 71, 114, -96, 71, -96, -74, 115, -98, 55, 5, 24, -72, 113, -87, 35, 57, 25, -111, 104, -112, -27, 83, 55, -63, -100, 11};
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
    msg.setTimeStamp(0.848982547859);
    msg.setSource(25398U);
    msg.setSourceEntity(181U);
    msg.setDestination(52850U);
    msg.setDestinationEntity(173U);
    msg.source.assign("DXVKIEULCKSVTRROITYIBZTHCCADOUTJGPVPUQCKCDVNDSMURHGVMKQGHVKFQWNNORJCGOMQXLXVIZRPQPQBIY");
    const char tmp_msg_0[] = {-95, 90, 57, 121, -106, -66, -123, -99, 49, 71, -72, 41, -106, 90, 112, 126, 31, 82, -47, 95, -40, -15, 73, 44, 13, 42, 123, -15, 38, 21, -83, -127, -14, -56, 41, 20, 58, 2, 81, -9, 24, -107, 113, 85, -67, -114, 106, -76, 82, -3, -68, -67, 56, 113, 88, 126, -100, 89, 117, 3, -43, 39, 74, -36, -107, -33, 112, 30, 7, 126, -103, -108, 97, -32, -41, -43, 14, 99, -19, 14, -29, 51, 68, -61, 118, -17, -114, 100, -26, -45, -80, -98, -67};
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
    msg.setTimeStamp(0.229851953312);
    msg.setSource(51937U);
    msg.setSourceEntity(100U);
    msg.setDestination(3789U);
    msg.setDestinationEntity(35U);
    msg.source.assign("NJQMSLAXFJJOWZEAGHSRMIVENBBRMNOAIUFBIVJTSBCKCEPEOLGYBKPGQLASUL");
    const char tmp_msg_0[] = {50, 95, -76, -63, -39, 126, 39, 11, 75, 8, 85, 44, 31, 75, 78, -81, -87, 124, -105, 78, 58, 75, -21, 43, -17, 49, 19, 95, -89, 66, -117, 12, 12, 58, -39, 30, 58, -26, -47, -58, 23, -101, 62, 24, -9, 101, 31, -85, 48, 78, 18, -44, 13, -99, -80, -25, -73, 48, 110, 56, 30, 123, 59, 6, -103, -91, 55, -116, 24, 82, -23, 30, -59, -32, -22, -120, 113, 77, 47, -50, 106, -45, 27, -93, -121, 28, -28, 8, 115, -93, -72, 74, -103, 44, 118, -55, -72, -67, -40, 13, -5, -64, 49, -25, -69, -18, 90, -85, -11, -17, 88, -87, -36, -110, -67, 3, -105, 116, 89, -42, -20, -43, -54, 21, 84, 10, -94, -37, -113, 103, 28, -12, 17, 108, 36, 57, 39, 12, 69, -9, 26, -26, 115, -80, 17, 32, -101, -71, 86};
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
    msg.setTimeStamp(0.643586704095);
    msg.setSource(10125U);
    msg.setSourceEntity(238U);
    msg.setDestination(4652U);
    msg.setDestinationEntity(161U);
    msg.source.assign("NQUAQUBHQBMCJLABNWLSCOJOQVGCDFMKJIROWHQFERUAMYEQTTXIDKCAPDGVOQRCQBXCAMEPDKEBJCNWVPTKHSIHKGDRIGNHXESEOBALBZVZXKPWFMRDEKWOTPJVTGRFDT");
    const char tmp_msg_0[] = {92, 34, -13, -39, 74, 64, -85, -107, -79, 46, 26, -89, -80, 42, -69, 88, -1, -41, -17, 74, -20, 0, 41, 6, -73, 105, 34, -17, 111, -60, 61, -30, -28, 45, -11, 111, -24, 14, -23, 124, 18, -96, 7, 70, 91, 58, 55, 108, 108, 48, -6, 91, -56, -101, 99, -105, 103, 36, -12, 84, -55, 21, -108, -7, -65, -82, 7, -54, 114, 14, -69, 31, 109, -114, -88, 116, 124, 19, 48, -62, -122, 94, -42, 104, 63, 63, 54, -56, 123, -42, -65, -127, -92, 74, 54, 100, 106, 80, -39, -3, -93, -123, -51, 62, -53, -104, -69, 20, 85, -21, 16, 14, -82, 89, 91, 2, -31, 125, -78, -71, -27, 103, 37, 28, -17, 95, 49, 98, -14, -33, 66, -117, -110, -115, -103, 70, 64, 121, -49, 73, -5, -118, 3, 101, 0, -99};
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
    msg.setTimeStamp(0.223958077374);
    msg.setSource(9785U);
    msg.setSourceEntity(244U);
    msg.setDestination(60889U);
    msg.setDestinationEntity(7U);
    msg.seq = 1698341202U;
    msg.state = 178U;
    msg.error.assign("ZILBPBKTFXAQNHOSVLDKJIMEVFXXDPXZCVCRHFLMAHANEFBVXHQBZTWMTMQRYSUCDWLKZIXFCKDHWRTSWVMGBEHPMNDAGYPNOGEUQQNOMPYGUHEPPUQEGJMYVVXZFJLNIQZJDSOURDRMJLJOJAUCLENJWIIRGUTIHOZACTRNZFOGJTHAIBEXACTGTPYPCQFNUMWYKWVXBREAWLOQWK");

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
    msg.setTimeStamp(0.729861280459);
    msg.setSource(64736U);
    msg.setSourceEntity(91U);
    msg.setDestination(40469U);
    msg.setDestinationEntity(230U);
    msg.seq = 1467277964U;
    msg.state = 40U;
    msg.error.assign("TNOCKWXUSDAAVLHGPNYZMKMSWQAHVWJYQFALIKLDNVXIZCHVAFHFSQUZKMBTTITQOZNGSJIWUUSCRSUBGKGVPGRJCDLRTNBZOEVTOPVCBGSVRDDOWBMPDUTACXMQBXIEIIPBKVEOCGYJMOQLWRLLTDAZATXKOZRULEEJYWCAJRFEWGFSM");

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
    msg.setTimeStamp(0.784084618676);
    msg.setSource(7090U);
    msg.setSourceEntity(43U);
    msg.setDestination(15563U);
    msg.setDestinationEntity(37U);
    msg.seq = 1582568246U;
    msg.state = 242U;
    msg.error.assign("SDTOTKFFUNUEZEAQMGAGWENLNOEEACJUYHYPOGCGLFVKFYBZMIJMMGRDJFQORIKRRQRVSWBIOATCXBYUXHPEMDLNBZVEVXRKCWEAPMHSPGPUSJWYSIRZMGXIBOUQAKTWFH");

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
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.0234279354749);
    msg.setSource(55527U);
    msg.setSourceEntity(22U);
    msg.setDestination(7390U);
    msg.setDestinationEntity(5U);
    msg.group_name.assign("QFWMCQTKPJIWEANTGORMTPYMLBYUELDGGVEAS");
    msg.links = 1247087427U;

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
    msg.setTimeStamp(0.067876287741);
    msg.setSource(36898U);
    msg.setSourceEntity(147U);
    msg.setDestination(40705U);
    msg.setDestinationEntity(142U);
    msg.group_name.assign("BEZIBNDSYLIYMANAQGDDSIOJVIHFKPWDVMNGXSMCUUYTBVISTJKMYOVZSGNOUDMARYPIHWCFHDBCBFWQTKZPSREGREGLYGKVRTLZLGJSWKHYCUQUXAYXHYSZLEXDPZJGMCTTXSKATXQZEWKVZJFHLPAONJCLOIADDKCHFLBEHJCUUQBP");
    msg.links = 1248767950U;

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
    msg.setTimeStamp(0.782498744735);
    msg.setSource(2515U);
    msg.setSourceEntity(254U);
    msg.setDestination(12215U);
    msg.setDestinationEntity(65U);
    msg.group_name.assign("RVWSJSHOPESJCTEOTYRJGRHURKZUSMIHMJACOPOKRDCZUGKFNFGYKPIVXLZNHGVTNQGOUGADEXSKEMXJGIZNHTOCYBFWQOSGPFRTEUTSCZIHXCOEWIFFMNNUOEVSADOXPLLACTKLLYVVBTXUNNBKIREWVGBYQIGWDIDSKWYANDYQPQWSAJUPJPWVQHFCJZKLYIYRWJLMZLZ");
    msg.links = 2504153861U;

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
    msg.setTimeStamp(0.657692056002);
    msg.setSource(5259U);
    msg.setSourceEntity(27U);
    msg.setDestination(32712U);
    msg.setDestinationEntity(154U);
    msg.groupname.assign("VTUJMRNTGDHETZOFPZZDVUJXTFKJJFUPNPWMVDRIZLXXQBWBHRNQE");
    msg.action = 41U;
    msg.grouplist.assign("GDEFGYDUQBGBURFXXLUNVTKAXVJBMJIAOFSOBILHCZCAHRFAFAZWEENHMLPARRYRCYSHXWNRUUIYYQKVBUQABTPHOLDJFZZRMQWXPIIMJZOKVTYEVMKSNWMVDNKOBNUNBSTDRQKOEWWTSPACIKOJUYHLWQXKSVSTDUKE");

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
    msg.setTimeStamp(0.799415589041);
    msg.setSource(55803U);
    msg.setSourceEntity(158U);
    msg.setDestination(50013U);
    msg.setDestinationEntity(27U);
    msg.groupname.assign("UFUMUVGPYEVVMYQFNWIXDRBPEKINDKNCUJCESHKAIROHVEXXGAARFHTMXAXFLZASFXMKZYUWXHJDESVWBPCKTLFDWTTJPYXORIOYKZCLVWKHGUCXRESSNPNMJJPYBDWIUDCNTEGTRQJIYZSTOSRQQNOBZEOJAKNLUTYQWHBGTAKSQMIBQOWKNFQZPSLXOR");
    msg.action = 90U;
    msg.grouplist.assign("YTFJUFWSYIXASRHZMLMFQHHSIYRKRSDBTTKDHBYEZRDCOJUODAZIBUPXWPAAFFKXSKJRHIBNRGMCVRNVWGMNXEDBKVPVTKNYIIJVUNDQICGVHCBXEVKOXIEJYDFEWGTUXZZOEGEOTNLPVLJRCYINQWXFDPEGABKHTLTUBACMUOLE");

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
    msg.setTimeStamp(0.246241895353);
    msg.setSource(26887U);
    msg.setSourceEntity(113U);
    msg.setDestination(39138U);
    msg.setDestinationEntity(4U);
    msg.groupname.assign("LXTCXMIVDZGOOR");
    msg.action = 152U;
    msg.grouplist.assign("HLJOGHDVKJAHIYMCVDOMSIRRYHOPOHNVPUDLKBWPMPKZGMRKDSXZJUFVFQBZVHUJQIIJ");

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
    msg.setTimeStamp(0.444454504354);
    msg.setSource(14193U);
    msg.setSourceEntity(240U);
    msg.setDestination(55717U);
    msg.setDestinationEntity(185U);
    msg.id = 41U;
    msg.range = 0.07271932673;

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
    msg.setTimeStamp(0.432363271279);
    msg.setSource(58390U);
    msg.setSourceEntity(178U);
    msg.setDestination(20281U);
    msg.setDestinationEntity(222U);
    msg.id = 79U;
    msg.range = 0.982976942213;

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
    msg.setTimeStamp(0.172131295427);
    msg.setSource(13397U);
    msg.setSourceEntity(57U);
    msg.setDestination(56010U);
    msg.setDestinationEntity(209U);
    msg.id = 46U;
    msg.range = 0.195135422918;

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
    msg.setTimeStamp(0.924217211948);
    msg.setSource(49367U);
    msg.setSourceEntity(197U);
    msg.setDestination(38754U);
    msg.setDestinationEntity(167U);
    msg.tx = 230U;
    msg.channel = 121U;
    msg.timer = 16762U;

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
    msg.setTimeStamp(0.510413395377);
    msg.setSource(3476U);
    msg.setSourceEntity(50U);
    msg.setDestination(46536U);
    msg.setDestinationEntity(230U);
    msg.tx = 78U;
    msg.channel = 165U;
    msg.timer = 27007U;

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
    msg.setTimeStamp(0.0244581654321);
    msg.setSource(2277U);
    msg.setSourceEntity(234U);
    msg.setDestination(8948U);
    msg.setDestinationEntity(17U);
    msg.tx = 112U;
    msg.channel = 105U;
    msg.timer = 42347U;

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
    msg.setTimeStamp(0.367329483628);
    msg.setSource(7025U);
    msg.setSourceEntity(117U);
    msg.setDestination(27825U);
    msg.setDestinationEntity(252U);
    msg.beacon.assign("DMKIUHLKXNWNHDZPNXCGGVGMSPOPAEWMGIUAROSOOVGISEXNSFCEBUWAFWPLESYBLFKFMTQJQMJNWYAIRWAHHDVTJKFCYRHRIGFBZNWCDZHMZWPGZIGBDK");
    msg.lat = 0.340960980466;
    msg.lon = 0.926731973903;
    msg.depth = 0.686701767641;
    msg.query_channel = 14U;
    msg.reply_channel = 251U;
    msg.transponder_delay = 215U;

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
    msg.setTimeStamp(0.549339495209);
    msg.setSource(22782U);
    msg.setSourceEntity(187U);
    msg.setDestination(26232U);
    msg.setDestinationEntity(182U);
    msg.beacon.assign("RDQILTNKFJVRCAWASIFOUOFCBQRKZOKTDPKFVSJERNXHFJRKNEMZWBSNPVUWV");
    msg.lat = 0.178838722367;
    msg.lon = 0.0971358983003;
    msg.depth = 0.485759030866;
    msg.query_channel = 119U;
    msg.reply_channel = 59U;
    msg.transponder_delay = 191U;

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
    msg.setTimeStamp(0.228027862353);
    msg.setSource(7287U);
    msg.setSourceEntity(207U);
    msg.setDestination(5634U);
    msg.setDestinationEntity(118U);
    msg.beacon.assign("AXTZAWGSKXQMZJXGQVOVAGYFI");
    msg.lat = 0.279345995723;
    msg.lon = 0.332484183616;
    msg.depth = 0.539705926956;
    msg.query_channel = 183U;
    msg.reply_channel = 111U;
    msg.transponder_delay = 9U;

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
    msg.setTimeStamp(0.855814527662);
    msg.setSource(28451U);
    msg.setSourceEntity(108U);
    msg.setDestination(55269U);
    msg.setDestinationEntity(122U);
    msg.op = 172U;

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
    msg.setTimeStamp(0.119606486325);
    msg.setSource(4800U);
    msg.setSourceEntity(41U);
    msg.setDestination(47053U);
    msg.setDestinationEntity(62U);
    msg.op = 141U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RGKHJWHYKIOUPVORKGFMFMAAOJHLMTIVDRIJDZMQCCOOZGSJNPNQVVINBBCNYKJYSXVTMZGSOCLBBYIAUWEFCZPZXLEKSBIENIQLKPDUOYYYLLCRJPSPDLQRTQKDHLJYPSBOQFJTTPZZEVBFWDNTIBEWFJXREIKWLSVCMGTMMXYHEWMHUNBVUDXSXORQFGERWAMHFGUGSV");
    tmp_msg_0.lat = 0.412781065143;
    tmp_msg_0.lon = 0.894301327427;
    tmp_msg_0.depth = 0.0334829809036;
    tmp_msg_0.query_channel = 14U;
    tmp_msg_0.reply_channel = 185U;
    tmp_msg_0.transponder_delay = 136U;
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
    msg.setTimeStamp(0.0146421813279);
    msg.setSource(8082U);
    msg.setSourceEntity(102U);
    msg.setDestination(60803U);
    msg.setDestinationEntity(169U);
    msg.op = 177U;

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
    msg.setTimeStamp(0.483125628837);
    msg.setSource(64827U);
    msg.setSourceEntity(18U);
    msg.setDestination(40334U);
    msg.setDestinationEntity(1U);
    msg.address = 248U;

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
    msg.setTimeStamp(0.965962055069);
    msg.setSource(59282U);
    msg.setSourceEntity(128U);
    msg.setDestination(63543U);
    msg.setDestinationEntity(40U);
    msg.address = 32U;

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
    msg.setTimeStamp(0.660159861071);
    msg.setSource(53399U);
    msg.setSourceEntity(53U);
    msg.setDestination(44842U);
    msg.setDestinationEntity(29U);
    msg.address = 74U;

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
    msg.setTimeStamp(0.922843485929);
    msg.setSource(30861U);
    msg.setSourceEntity(184U);
    msg.setDestination(11553U);
    msg.setDestinationEntity(160U);
    msg.address = 175U;
    msg.status = 42U;
    msg.range = 0.378067575058;

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
    msg.setTimeStamp(0.399609875676);
    msg.setSource(35062U);
    msg.setSourceEntity(106U);
    msg.setDestination(52928U);
    msg.setDestinationEntity(100U);
    msg.address = 95U;
    msg.status = 99U;
    msg.range = 0.728981208339;

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
    msg.setTimeStamp(0.722892117047);
    msg.setSource(11041U);
    msg.setSourceEntity(3U);
    msg.setDestination(39680U);
    msg.setDestinationEntity(148U);
    msg.address = 16U;
    msg.status = 102U;
    msg.range = 0.0222367577122;

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
    msg.setTimeStamp(0.347274908465);
    msg.setSource(32618U);
    msg.setSourceEntity(123U);
    msg.setDestination(3712U);
    msg.setDestinationEntity(150U);
    IMC::DepthOffset tmp_msg_0;
    tmp_msg_0.value = 0.962238900742;
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
    msg.setTimeStamp(0.707887436961);
    msg.setSource(14209U);
    msg.setSourceEntity(114U);
    msg.setDestination(44039U);
    msg.setDestinationEntity(11U);
    IMC::Pressure tmp_msg_0;
    tmp_msg_0.value = 0.290634402408;
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
    msg.setTimeStamp(0.643733116664);
    msg.setSource(6061U);
    msg.setSourceEntity(72U);
    msg.setDestination(38504U);
    msg.setDestinationEntity(130U);
    IMC::AcousticDiagnostic tmp_msg_0;
    tmp_msg_0.enable = 69U;
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
    msg.setTimeStamp(0.0311726990449);
    msg.setSource(7483U);
    msg.setSourceEntity(51U);
    msg.setDestination(12085U);
    msg.setDestinationEntity(222U);
    msg.enable = 155U;

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
    msg.setTimeStamp(0.498383695613);
    msg.setSource(28665U);
    msg.setSourceEntity(85U);
    msg.setDestination(48833U);
    msg.setDestinationEntity(133U);
    msg.enable = 190U;

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
    msg.setTimeStamp(0.733483618885);
    msg.setSource(38523U);
    msg.setSourceEntity(124U);
    msg.setDestination(17123U);
    msg.setDestinationEntity(24U);
    msg.enable = 127U;

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
    msg.setTimeStamp(0.932767700485);
    msg.setSource(36079U);
    msg.setSourceEntity(26U);
    msg.setDestination(34073U);
    msg.setDestinationEntity(132U);
    msg.summary = 6U;
    msg.level = 198U;

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
    msg.setTimeStamp(0.497947903466);
    msg.setSource(46950U);
    msg.setSourceEntity(182U);
    msg.setDestination(36790U);
    msg.setDestinationEntity(180U);
    msg.summary = 10U;
    msg.level = 48U;

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
    msg.setTimeStamp(0.226399322651);
    msg.setSource(12548U);
    msg.setSourceEntity(221U);
    msg.setDestination(53455U);
    msg.setDestinationEntity(79U);
    msg.summary = 47U;
    msg.level = 251U;

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
    msg.setTimeStamp(0.294808107015);
    msg.setSource(11868U);
    msg.setSourceEntity(128U);
    msg.setDestination(51631U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.6383968521);
    msg.setSource(8681U);
    msg.setSourceEntity(148U);
    msg.setDestination(2495U);
    msg.setDestinationEntity(48U);

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
    msg.setTimeStamp(0.594669003897);
    msg.setSource(62407U);
    msg.setSourceEntity(44U);
    msg.setDestination(31249U);
    msg.setDestinationEntity(208U);

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
    msg.setTimeStamp(0.879287967116);
    msg.setSource(55621U);
    msg.setSourceEntity(65U);
    msg.setDestination(38943U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.577680263384);
    msg.setSource(5907U);
    msg.setSourceEntity(84U);
    msg.setDestination(5302U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.317781337857);
    msg.setSource(46847U);
    msg.setSourceEntity(66U);
    msg.setDestination(51611U);
    msg.setDestinationEntity(252U);

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
    msg.setTimeStamp(0.10161512905);
    msg.setSource(21411U);
    msg.setSourceEntity(79U);
    msg.setDestination(54006U);
    msg.setDestinationEntity(7U);
    msg.op = 68U;
    msg.system.assign("JGJWBRPSHSCOLKZLYRNMRFFBGOUPZUZGANAWYMPEOMKLCFAIOFQOONKLWVIXTVXMURWPOQTJSYAGSISUGTVWLTFZBWAQGCJOBWNQWXNQZPDBRXZ");
    msg.range = 0.0385266149857;
    IMC::CpuUsage tmp_msg_0;
    tmp_msg_0.value = 23U;
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
    msg.setTimeStamp(0.439041266056);
    msg.setSource(42899U);
    msg.setSourceEntity(180U);
    msg.setDestination(19202U);
    msg.setDestinationEntity(47U);
    msg.op = 12U;
    msg.system.assign("RSQZYWQHZVLPDVOUOQWHSBLAJDRROGGQOPMGQBAUFYDEABEFSWASPXKWLDRTWWFLKUUJRIECJPFRNFNCNZZYH");
    msg.range = 0.556951960355;
    IMC::EntityInfo tmp_msg_0;
    tmp_msg_0.id = 17U;
    tmp_msg_0.label.assign("NYAHXSDIHJRMDQXDQQBKADHFUQIWZPNPPSOBGJLPXUMSYSREUZHRXCPFTOTHYGP");
    tmp_msg_0.component.assign("QZMVAMCZQKMEFPXJTFIBMNCGLGLUYMPW");
    tmp_msg_0.act_time = 32243U;
    tmp_msg_0.deact_time = 8839U;
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
    msg.setTimeStamp(0.64726591857);
    msg.setSource(53694U);
    msg.setSourceEntity(45U);
    msg.setDestination(39417U);
    msg.setDestinationEntity(13U);
    msg.op = 65U;
    msg.system.assign("EQIISPVKMXLJDBBNHEXOBFAKOHFGGTQNUPGSWGUQRHBCZHABEKZORUGCXKXPMTMPDIYAOSDMQEBLMNVAKRRHJPJRTJSNLBTTGGGRZTXVHOJVKPZMSZCQJHEYUORWXQQNUFCVFUXNSVFYWLIJNFOTDWAPWYDBFNDISGFKLZXRCLHA");
    msg.range = 0.0550490123159;
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.877435062578;
    tmp_msg_0.z_units = 58U;
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
    msg.setTimeStamp(0.988209615463);
    msg.setSource(62845U);
    msg.setSourceEntity(163U);
    msg.setDestination(18551U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.355941309396);
    msg.setSource(25282U);
    msg.setSourceEntity(99U);
    msg.setDestination(14376U);
    msg.setDestinationEntity(254U);

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
    msg.setTimeStamp(0.632412530029);
    msg.setSource(33102U);
    msg.setSourceEntity(5U);
    msg.setDestination(9496U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.479263327819);
    msg.setSource(17449U);
    msg.setSourceEntity(44U);
    msg.setDestination(39225U);
    msg.setDestinationEntity(38U);
    msg.list.assign("BXQVOPPYGLTMQDSOXJKZEJSZWOBZVEKUNIIPNUHGPIGSXOLCOPQFAWCEYZTZGHUIGTS");

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
    msg.setTimeStamp(0.265339373983);
    msg.setSource(14477U);
    msg.setSourceEntity(248U);
    msg.setDestination(18838U);
    msg.setDestinationEntity(59U);
    msg.list.assign("ZWEQCUDQXGVHWHMIWJYATBNRLUTOKYTJMXLUFTCMGYCGSNALBSVQEVICSZEOTVJGYAMKGXCUDNTJDQIIVEYJHGFBSQPPJDNQXZAZDHDLXBQFBPROSTKEHFAYPJQSVRDFAYPNWZGMTMRLNDMYHXCURFEGXIXTWHPOQSYSWFDIHCIKLBKARNKFOOVOUOBBRVJAZCNSMEPBWLQTORUASVCRPEPHZHOPBUDWEMIKKNEC");

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
    msg.setTimeStamp(0.904466685803);
    msg.setSource(10812U);
    msg.setSourceEntity(81U);
    msg.setDestination(19389U);
    msg.setDestinationEntity(145U);
    msg.list.assign("ZKMFOZBRKPNAULSINWLDSKFUJIDSMOXHQOVXXMFHNSQCHYQQOISOQWIGTARFQKJPJQMYBDXHCOCOPVHZAWNIYIRHXZDCRXTYDGRMUFPAKFIRAVDDJNVTJUGUPEEXFECFGJHLZSCLQTWPYAYFWLJBRSTYSEITTEDCDGMYOOGKLEVRZTJGWRPFNMRGHAPXUKLQEJVBGNEETBWPIVUMKWVWY");

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
    msg.setTimeStamp(0.208603971667);
    msg.setSource(17060U);
    msg.setSourceEntity(36U);
    msg.setDestination(33192U);
    msg.setDestinationEntity(20U);
    msg.value = 9902;

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
    msg.setTimeStamp(0.415513136033);
    msg.setSource(3298U);
    msg.setSourceEntity(44U);
    msg.setDestination(36709U);
    msg.setDestinationEntity(232U);
    msg.value = 14877;

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
    msg.setTimeStamp(0.501727013471);
    msg.setSource(17373U);
    msg.setSourceEntity(28U);
    msg.setDestination(5357U);
    msg.setDestinationEntity(176U);
    msg.value = 29790;

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
    msg.setTimeStamp(0.151372533621);
    msg.setSource(35687U);
    msg.setSourceEntity(123U);
    msg.setDestination(4544U);
    msg.setDestinationEntity(114U);
    msg.value = 0.597591836498;

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
    msg.setTimeStamp(0.156014869778);
    msg.setSource(57058U);
    msg.setSourceEntity(52U);
    msg.setDestination(27313U);
    msg.setDestinationEntity(58U);
    msg.value = 0.0845025855265;

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
    msg.setTimeStamp(0.492144131825);
    msg.setSource(9786U);
    msg.setSourceEntity(66U);
    msg.setDestination(46663U);
    msg.setDestinationEntity(147U);
    msg.value = 0.99276472227;

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
    msg.setTimeStamp(0.0808341889035);
    msg.setSource(24865U);
    msg.setSourceEntity(142U);
    msg.setDestination(46242U);
    msg.setDestinationEntity(150U);
    msg.value = 0.510932606704;

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
    msg.setTimeStamp(0.963325935056);
    msg.setSource(5855U);
    msg.setSourceEntity(190U);
    msg.setDestination(39186U);
    msg.setDestinationEntity(64U);
    msg.value = 0.852105768646;

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
    msg.setTimeStamp(0.7741896295);
    msg.setSource(42989U);
    msg.setSourceEntity(111U);
    msg.setDestination(48459U);
    msg.setDestinationEntity(185U);
    msg.value = 0.699961925296;

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
    msg.setTimeStamp(0.361262369626);
    msg.setSource(34012U);
    msg.setSourceEntity(175U);
    msg.setDestination(63744U);
    msg.setDestinationEntity(92U);
    msg.validity = 53701U;
    msg.type = 205U;
    msg.utc_year = 12133U;
    msg.utc_month = 161U;
    msg.utc_day = 71U;
    msg.utc_time = 0.0676653143212;
    msg.lat = 0.459925508933;
    msg.lon = 0.236311929619;
    msg.height = 0.734994056593;
    msg.satellites = 246U;
    msg.cog = 0.726311168766;
    msg.sog = 0.266093854943;
    msg.hdop = 0.637717043494;
    msg.vdop = 0.112598595997;
    msg.hacc = 0.893664010925;
    msg.vacc = 0.5669769996;

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
    msg.setTimeStamp(0.725422812174);
    msg.setSource(18920U);
    msg.setSourceEntity(64U);
    msg.setDestination(54478U);
    msg.setDestinationEntity(65U);
    msg.validity = 38118U;
    msg.type = 142U;
    msg.utc_year = 3200U;
    msg.utc_month = 226U;
    msg.utc_day = 156U;
    msg.utc_time = 0.0235157757103;
    msg.lat = 0.994017882041;
    msg.lon = 0.230569704121;
    msg.height = 0.609417432503;
    msg.satellites = 246U;
    msg.cog = 0.0577900700934;
    msg.sog = 0.970933425396;
    msg.hdop = 0.884517038801;
    msg.vdop = 0.452550534785;
    msg.hacc = 0.249671665726;
    msg.vacc = 0.627831116513;

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
    msg.setTimeStamp(0.373753637768);
    msg.setSource(51817U);
    msg.setSourceEntity(54U);
    msg.setDestination(30775U);
    msg.setDestinationEntity(126U);
    msg.validity = 15061U;
    msg.type = 158U;
    msg.utc_year = 61325U;
    msg.utc_month = 48U;
    msg.utc_day = 141U;
    msg.utc_time = 0.0886441071675;
    msg.lat = 0.116987363193;
    msg.lon = 0.562309439387;
    msg.height = 0.219806259313;
    msg.satellites = 20U;
    msg.cog = 0.160181174166;
    msg.sog = 0.857122615352;
    msg.hdop = 0.485315656851;
    msg.vdop = 0.636331681882;
    msg.hacc = 0.244296549558;
    msg.vacc = 0.985226013298;

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
    msg.setTimeStamp(0.372589668694);
    msg.setSource(18271U);
    msg.setSourceEntity(177U);
    msg.setDestination(63100U);
    msg.setDestinationEntity(198U);
    msg.time = 0.616606840966;
    msg.phi = 0.185512985162;
    msg.theta = 0.673542581544;
    msg.psi = 0.760308421109;
    msg.psi_magnetic = 0.563519827048;

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
    msg.setTimeStamp(0.987431718457);
    msg.setSource(36759U);
    msg.setSourceEntity(41U);
    msg.setDestination(34104U);
    msg.setDestinationEntity(167U);
    msg.time = 0.862609717708;
    msg.phi = 0.626459395604;
    msg.theta = 0.100890314685;
    msg.psi = 0.2358517677;
    msg.psi_magnetic = 0.698575109111;

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
    msg.setTimeStamp(0.923071033188);
    msg.setSource(41039U);
    msg.setSourceEntity(38U);
    msg.setDestination(56336U);
    msg.setDestinationEntity(254U);
    msg.time = 0.427430563393;
    msg.phi = 0.380372764418;
    msg.theta = 0.18616372198;
    msg.psi = 0.690117542633;
    msg.psi_magnetic = 0.547633407774;

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
    msg.setTimeStamp(0.149550713849);
    msg.setSource(48820U);
    msg.setSourceEntity(131U);
    msg.setDestination(8243U);
    msg.setDestinationEntity(6U);
    msg.time = 0.796676168304;
    msg.x = 0.459527867088;
    msg.y = 0.552901468527;
    msg.z = 0.00318201999784;
    msg.timestep = 0.583602612358;

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
    msg.setTimeStamp(0.791279603598);
    msg.setSource(9941U);
    msg.setSourceEntity(11U);
    msg.setDestination(21726U);
    msg.setDestinationEntity(32U);
    msg.time = 0.814976952159;
    msg.x = 0.122627399492;
    msg.y = 0.89873628497;
    msg.z = 0.129407390098;
    msg.timestep = 0.772491641262;

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
    msg.setTimeStamp(0.188405396004);
    msg.setSource(51485U);
    msg.setSourceEntity(154U);
    msg.setDestination(13066U);
    msg.setDestinationEntity(118U);
    msg.time = 0.719283362532;
    msg.x = 0.434774757181;
    msg.y = 0.315235803478;
    msg.z = 0.139481859391;
    msg.timestep = 0.300452098139;

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
    msg.setTimeStamp(0.0588779294556);
    msg.setSource(27451U);
    msg.setSourceEntity(127U);
    msg.setDestination(41313U);
    msg.setDestinationEntity(147U);
    msg.time = 0.943390625773;
    msg.x = 0.326262223023;
    msg.y = 0.644504125676;
    msg.z = 0.568154957631;

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
    msg.setTimeStamp(0.495064761046);
    msg.setSource(57708U);
    msg.setSourceEntity(68U);
    msg.setDestination(43834U);
    msg.setDestinationEntity(70U);
    msg.time = 0.485341415897;
    msg.x = 0.918986693897;
    msg.y = 0.837708787487;
    msg.z = 0.418095610557;

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
    msg.setTimeStamp(0.335754776011);
    msg.setSource(2899U);
    msg.setSourceEntity(51U);
    msg.setDestination(48395U);
    msg.setDestinationEntity(94U);
    msg.time = 0.0102893596946;
    msg.x = 0.691528369903;
    msg.y = 0.346507966165;
    msg.z = 0.405099528839;

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
    msg.setTimeStamp(0.795649856329);
    msg.setSource(14801U);
    msg.setSourceEntity(121U);
    msg.setDestination(19649U);
    msg.setDestinationEntity(136U);
    msg.time = 0.0462213730731;
    msg.x = 0.343570605352;
    msg.y = 0.526550291173;
    msg.z = 0.910774068592;

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
    msg.setTimeStamp(0.387678173616);
    msg.setSource(15122U);
    msg.setSourceEntity(57U);
    msg.setDestination(59599U);
    msg.setDestinationEntity(247U);
    msg.time = 0.300708155322;
    msg.x = 0.028434135151;
    msg.y = 0.970004033214;
    msg.z = 0.872440143323;

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
    msg.setTimeStamp(0.75159340511);
    msg.setSource(30875U);
    msg.setSourceEntity(244U);
    msg.setDestination(5259U);
    msg.setDestinationEntity(40U);
    msg.time = 0.634857781118;
    msg.x = 0.728087737515;
    msg.y = 0.459658138366;
    msg.z = 0.00988804363603;

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
    msg.setTimeStamp(0.625853843526);
    msg.setSource(27764U);
    msg.setSourceEntity(88U);
    msg.setDestination(62974U);
    msg.setDestinationEntity(199U);
    msg.time = 0.561355846017;
    msg.x = 0.794545776844;
    msg.y = 0.214066635569;
    msg.z = 0.83729828914;

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
    msg.setTimeStamp(0.029910935598);
    msg.setSource(28984U);
    msg.setSourceEntity(113U);
    msg.setDestination(14066U);
    msg.setDestinationEntity(77U);
    msg.time = 0.750891846024;
    msg.x = 0.83097397658;
    msg.y = 0.813899331785;
    msg.z = 0.627620393532;

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
    msg.setTimeStamp(0.162824261858);
    msg.setSource(30544U);
    msg.setSourceEntity(8U);
    msg.setDestination(8438U);
    msg.setDestinationEntity(141U);
    msg.time = 0.851053398389;
    msg.x = 0.57243336132;
    msg.y = 0.078790923323;
    msg.z = 0.242712413759;

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
    msg.setTimeStamp(0.367556976717);
    msg.setSource(15943U);
    msg.setSourceEntity(50U);
    msg.setDestination(49621U);
    msg.setDestinationEntity(239U);
    msg.validity = 191U;
    msg.x = 0.923422163678;
    msg.y = 0.0723302421258;
    msg.z = 0.832175529647;

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
    msg.setTimeStamp(0.374779125173);
    msg.setSource(17287U);
    msg.setSourceEntity(173U);
    msg.setDestination(35798U);
    msg.setDestinationEntity(129U);
    msg.validity = 127U;
    msg.x = 0.654537622247;
    msg.y = 0.334777321404;
    msg.z = 0.653678276861;

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
    msg.setTimeStamp(0.117777431707);
    msg.setSource(45199U);
    msg.setSourceEntity(170U);
    msg.setDestination(10362U);
    msg.setDestinationEntity(34U);
    msg.validity = 182U;
    msg.x = 0.510017221313;
    msg.y = 0.850054952472;
    msg.z = 0.403659226238;

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
    msg.setTimeStamp(0.416733167641);
    msg.setSource(33924U);
    msg.setSourceEntity(93U);
    msg.setDestination(32698U);
    msg.setDestinationEntity(143U);
    msg.validity = 187U;
    msg.x = 0.806100107018;
    msg.y = 0.0227662167315;
    msg.z = 0.158051596389;

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
    msg.setTimeStamp(0.580964105695);
    msg.setSource(20295U);
    msg.setSourceEntity(220U);
    msg.setDestination(28336U);
    msg.setDestinationEntity(105U);
    msg.validity = 72U;
    msg.x = 0.308660187809;
    msg.y = 0.0222972344234;
    msg.z = 0.218200140753;

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
    msg.setTimeStamp(0.148544823245);
    msg.setSource(38927U);
    msg.setSourceEntity(46U);
    msg.setDestination(20211U);
    msg.setDestinationEntity(183U);
    msg.validity = 250U;
    msg.x = 0.397434135972;
    msg.y = 0.289584687241;
    msg.z = 0.895982892437;

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
    msg.setTimeStamp(0.700711530157);
    msg.setSource(16656U);
    msg.setSourceEntity(20U);
    msg.setDestination(29371U);
    msg.setDestinationEntity(86U);
    msg.time = 0.0201778501657;
    msg.x = 0.940477143648;
    msg.y = 0.341416775284;
    msg.z = 0.0384898625487;

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
    msg.setTimeStamp(0.000378257945905);
    msg.setSource(36597U);
    msg.setSourceEntity(110U);
    msg.setDestination(41232U);
    msg.setDestinationEntity(77U);
    msg.time = 0.477417131126;
    msg.x = 0.608185228287;
    msg.y = 0.922358502326;
    msg.z = 0.972629476547;

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
    msg.setTimeStamp(0.522963545529);
    msg.setSource(12748U);
    msg.setSourceEntity(137U);
    msg.setDestination(17349U);
    msg.setDestinationEntity(249U);
    msg.time = 0.354630266378;
    msg.x = 0.728271405581;
    msg.y = 0.417640525545;
    msg.z = 0.765076259346;

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
    msg.setTimeStamp(0.669272409692);
    msg.setSource(34490U);
    msg.setSourceEntity(62U);
    msg.setDestination(49605U);
    msg.setDestinationEntity(37U);
    msg.validity = 224U;
    msg.value = 0.821673905934;

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
    msg.setTimeStamp(0.372676082812);
    msg.setSource(59400U);
    msg.setSourceEntity(150U);
    msg.setDestination(5751U);
    msg.setDestinationEntity(218U);
    msg.validity = 139U;
    msg.value = 0.374176834595;

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
    msg.setTimeStamp(0.83967518825);
    msg.setSource(16339U);
    msg.setSourceEntity(30U);
    msg.setDestination(11606U);
    msg.setDestinationEntity(103U);
    msg.validity = 125U;
    msg.value = 0.874919109558;

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
    msg.setTimeStamp(0.865473884401);
    msg.setSource(19095U);
    msg.setSourceEntity(119U);
    msg.setDestination(3737U);
    msg.setDestinationEntity(103U);
    msg.value = 0.898119414439;

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
    msg.setTimeStamp(0.679458021031);
    msg.setSource(23595U);
    msg.setSourceEntity(243U);
    msg.setDestination(33161U);
    msg.setDestinationEntity(47U);
    msg.value = 0.320826281471;

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
    msg.setTimeStamp(0.272568364741);
    msg.setSource(53998U);
    msg.setSourceEntity(243U);
    msg.setDestination(9140U);
    msg.setDestinationEntity(96U);
    msg.value = 0.170001372647;

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
    msg.setTimeStamp(0.671260902432);
    msg.setSource(11667U);
    msg.setSourceEntity(7U);
    msg.setDestination(60243U);
    msg.setDestinationEntity(213U);
    msg.value = 0.971188776686;

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
    msg.setTimeStamp(0.0743011107381);
    msg.setSource(13878U);
    msg.setSourceEntity(78U);
    msg.setDestination(58702U);
    msg.setDestinationEntity(159U);
    msg.value = 0.602776186048;

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
    msg.setTimeStamp(0.234974894504);
    msg.setSource(25257U);
    msg.setSourceEntity(35U);
    msg.setDestination(11222U);
    msg.setDestinationEntity(200U);
    msg.value = 0.240659807058;

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
    msg.setTimeStamp(0.319920857529);
    msg.setSource(43127U);
    msg.setSourceEntity(245U);
    msg.setDestination(6279U);
    msg.setDestinationEntity(62U);
    msg.value = 0.0336076252993;

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
    msg.setTimeStamp(0.275674011704);
    msg.setSource(62828U);
    msg.setSourceEntity(47U);
    msg.setDestination(37683U);
    msg.setDestinationEntity(102U);
    msg.value = 0.221934277093;

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
    msg.setTimeStamp(0.552249174518);
    msg.setSource(17796U);
    msg.setSourceEntity(170U);
    msg.setDestination(5547U);
    msg.setDestinationEntity(196U);
    msg.value = 0.0890063061654;

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
    msg.setTimeStamp(0.0802009525202);
    msg.setSource(28059U);
    msg.setSourceEntity(60U);
    msg.setDestination(26547U);
    msg.setDestinationEntity(109U);
    msg.value = 0.300044107225;

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
    msg.setTimeStamp(0.194491307426);
    msg.setSource(5500U);
    msg.setSourceEntity(45U);
    msg.setDestination(31423U);
    msg.setDestinationEntity(38U);
    msg.value = 0.968383068823;

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
    msg.setTimeStamp(0.140903070171);
    msg.setSource(63957U);
    msg.setSourceEntity(8U);
    msg.setDestination(19701U);
    msg.setDestinationEntity(142U);
    msg.value = 0.194024844844;

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
    msg.setTimeStamp(0.474322287135);
    msg.setSource(12563U);
    msg.setSourceEntity(207U);
    msg.setDestination(31290U);
    msg.setDestinationEntity(81U);
    msg.value = 0.698262918656;

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
    msg.setTimeStamp(0.219522635269);
    msg.setSource(52882U);
    msg.setSourceEntity(182U);
    msg.setDestination(44568U);
    msg.setDestinationEntity(92U);
    msg.value = 0.439731335044;

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
    msg.setTimeStamp(0.689677068669);
    msg.setSource(57935U);
    msg.setSourceEntity(18U);
    msg.setDestination(20899U);
    msg.setDestinationEntity(96U);
    msg.value = 0.1995698599;

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
    msg.setTimeStamp(0.765156372108);
    msg.setSource(206U);
    msg.setSourceEntity(141U);
    msg.setDestination(5549U);
    msg.setDestinationEntity(198U);
    msg.value = 0.142915366706;

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
    msg.setTimeStamp(0.927591651613);
    msg.setSource(35376U);
    msg.setSourceEntity(90U);
    msg.setDestination(6093U);
    msg.setDestinationEntity(173U);
    msg.value = 0.40443826653;

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
    msg.setTimeStamp(0.345974442481);
    msg.setSource(11500U);
    msg.setSourceEntity(49U);
    msg.setDestination(51710U);
    msg.setDestinationEntity(5U);
    msg.value = 0.417372296204;

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
    msg.setTimeStamp(0.595124628446);
    msg.setSource(28622U);
    msg.setSourceEntity(158U);
    msg.setDestination(13342U);
    msg.setDestinationEntity(143U);
    msg.value = 0.617886183348;

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
    msg.setTimeStamp(0.560559991167);
    msg.setSource(48990U);
    msg.setSourceEntity(251U);
    msg.setDestination(35497U);
    msg.setDestinationEntity(220U);
    msg.value = 0.0016754042048;

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
    msg.setTimeStamp(0.475114524234);
    msg.setSource(36581U);
    msg.setSourceEntity(83U);
    msg.setDestination(27668U);
    msg.setDestinationEntity(9U);
    msg.value = 0.440056650051;

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
    msg.setTimeStamp(0.837898438834);
    msg.setSource(50257U);
    msg.setSourceEntity(198U);
    msg.setDestination(56284U);
    msg.setDestinationEntity(193U);
    msg.value = 0.926111315692;

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
    msg.setTimeStamp(0.272687361949);
    msg.setSource(61346U);
    msg.setSourceEntity(8U);
    msg.setDestination(3086U);
    msg.setDestinationEntity(16U);
    msg.value = 0.0389093465894;

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
    msg.setTimeStamp(0.264322386078);
    msg.setSource(7334U);
    msg.setSourceEntity(32U);
    msg.setDestination(31245U);
    msg.setDestinationEntity(76U);
    msg.value = 0.557878207449;

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
    msg.setTimeStamp(0.975807449668);
    msg.setSource(1329U);
    msg.setSourceEntity(222U);
    msg.setDestination(58107U);
    msg.setDestinationEntity(242U);
    msg.direction = 0.646049794839;
    msg.speed = 0.885746900274;

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
    msg.setTimeStamp(0.677748254994);
    msg.setSource(16501U);
    msg.setSourceEntity(185U);
    msg.setDestination(2228U);
    msg.setDestinationEntity(152U);
    msg.direction = 0.822514595615;
    msg.speed = 0.450786182361;

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
    msg.setTimeStamp(0.92553788851);
    msg.setSource(7222U);
    msg.setSourceEntity(95U);
    msg.setDestination(34081U);
    msg.setDestinationEntity(58U);
    msg.direction = 0.513103185037;
    msg.speed = 0.324737074363;

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
    msg.setTimeStamp(0.277600953763);
    msg.setSource(17268U);
    msg.setSourceEntity(29U);
    msg.setDestination(47731U);
    msg.setDestinationEntity(14U);
    msg.value = 0.505581358869;

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
    msg.setTimeStamp(0.0849107696267);
    msg.setSource(44323U);
    msg.setSourceEntity(101U);
    msg.setDestination(8533U);
    msg.setDestinationEntity(238U);
    msg.value = 0.259213072116;

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
    msg.setTimeStamp(0.315390348247);
    msg.setSource(18713U);
    msg.setSourceEntity(58U);
    msg.setDestination(20546U);
    msg.setDestinationEntity(55U);
    msg.value = 0.286806764174;

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
    msg.setTimeStamp(0.107305886661);
    msg.setSource(27899U);
    msg.setSourceEntity(4U);
    msg.setDestination(32903U);
    msg.setDestinationEntity(88U);
    msg.value.assign("AHLKFPDRPPTVPTMYHWVJVWBWKOZWCVSHFTOJJKYNWNEVZXTEAEILEUSACRQXPBUDUMLZFX");

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
    msg.setTimeStamp(0.762537445298);
    msg.setSource(21897U);
    msg.setSourceEntity(101U);
    msg.setDestination(3495U);
    msg.setDestinationEntity(141U);
    msg.value.assign("LUUILICAWSSCHLMENKVJQPVUXXPUVOJDZTHCBQKQWGJFRHZVXWYEPHOJPEKOWPNZTMINBMVYZXRAZHNWFTAGUAYBIWFOSGNJNMIVXYTRUQCOGMLBCDBIKHZPTXOMXFGGRBXERCTJOYBEFQHIORQDEUZDLEFQZGVMHTFTSPQOXNYWZZSJVBGIBWSGBDMWCDLGAWPJNLRHFFAKDLLXVE");

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
    msg.setTimeStamp(0.85030585452);
    msg.setSource(16217U);
    msg.setSourceEntity(146U);
    msg.setDestination(34551U);
    msg.setDestinationEntity(70U);
    msg.value.assign("ZKGMUTDLLUAJSDYVAOKBRJGZFWWKLUZNEIFUUITCQRINCQWDZGEFYQWBMZQTSHEGVNPBZGDAFRBAGODEXLSXYOOLSPRIDHELPMLMYFBNSFPUUXNYNTFVNQCHAVN");

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
    msg.setTimeStamp(0.781204434318);
    msg.setSource(30672U);
    msg.setSourceEntity(190U);
    msg.setDestination(25817U);
    msg.setDestinationEntity(113U);
    const char tmp_msg_0[] = {56, 64, 53, 121, -104, 55, 36, -9, 3, 114, 80, -53, 116, 114, 86, 18, -40, -125, -113, -60, -40, -32, -4, -11, 95, -98, 3, -15, 26, 22, 83, 100, -105, -127, -43, -128, 96, 28, -111, 116, -90, -15, -26, -25, 21, -93, -92, 62, -86, 52, -107, -58, -35, -127, 121, -44, -98, 65, -122, 41, 57, 121, -39, -33, 13, -73, 37, 52, -99, 98, -1, 52, 92, -49, 33, -46, -103, -23, 97, -14, -68, 1, -31, -78, 95, 19, -111, -24, 7, -63, 111, 18, -6, 25, 54, 9, 13, 74, -96, 11, 84, -86, -126, -37, -16, 86, -80, 3, 109, 79, -99, -109, 33, 101, 74, -122, 37, -5, -95, -15, 105, -73, -94, -87, -17, 79, -65, 81, 41, -22, 118, -82, -24, -69, -67, 101, 63, -101, 27, -81, 59, 1, -100, 59, -59, 89, 26, -10, 110, -87, -70, 53, 66, -31, -79, -3, 85, 108, -107, -58, 24, -44, 22, 16, 126, -6, 63, 14, 102, 111, -90, -26, 5, -91, -82, 24, -24, 111, -90, -51, -53, 73};
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
    msg.setTimeStamp(0.760845742263);
    msg.setSource(31336U);
    msg.setSourceEntity(138U);
    msg.setDestination(38919U);
    msg.setDestinationEntity(167U);
    const char tmp_msg_0[] = {27, 114, -46, 25, -41, -3, -127, -77, -23, 118, -15, 98, 22, 116, 2, -32, 1, -17, -47, -51, -52, 87, -41, -39, 83, -79, -34, 13, -29, 11, 67, -34, -5, 77, -92, -19, 80, -42, 22, -2, -57, -111, 63, -64, 30, 56, 123, -57, -86, -105, -26, 110, 125, -9, -1, 67, 86, 35, -98, 81, 126, -17, -65, -96, -24, -19, 59, -125, -94, 126, -3, -62, 56, 27, -60, -26, -13, -93, 96, 45, 53, 79, 4, 77, -36, -54, 78, -50, 21, -97, -90, 121, -59, -14, -31, 4, 53, -124, -27, -28, -8, 51, -28, -128, 37, 47, -48, -117, 7, 32, 42, 28, 115, -45, -49, 122, -21, 5, -120, -116, 125, 37, 72, 32, -67, -85, 88, -87, -33, 53, -51, 79, -87, -109, -14, 83, 15, 26, 56, -60, -29, 100, 92, -42, 14, -52, -67, 73, 124, 124, 37, 69, 81, 24, -20, 100, -83, -22, 105, 105, 30, 37, 83, -3, -36, 81, 93, 105, 3, -66, 46, -1, -25, -110, -41, 31, 115, -33, 33, -71, 123, 124, -98, -36, -125, 76, -123, -122, 94, 34, -12, -81, -58, -54, 95, -30, 33, -95, -7, -38, -68, 90, -97, 110, 105, 61, -71, -97, 29, 24, -107, 50, 63, 57, -81, -109, 36, -105, -15, -113, -14, -68, 23, 9, -87, 71, 12};
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
    msg.setTimeStamp(0.682375533871);
    msg.setSource(64353U);
    msg.setSourceEntity(19U);
    msg.setDestination(39333U);
    msg.setDestinationEntity(64U);
    const char tmp_msg_0[] = {-14, -12, 105, 12, 5, 44, 49, 11, 111, 88, -123, -13, 102, -88, 101, 115, -33, -71, -105, 83, 96, -77, -75, 101, 119, -31, 66, 65, 75, 25, -10, 116, 82, 23, -56, -57, 110, -29, -50, 26, 26, 77, -97, -97, -87, -124, 75, 84, -51, 67, 39, 53, -15, -64, 114, -16, -77, -14, -118, 95, 55, -98, 53, 22, 31, 21, -11, 123, -122, 103, -106, 49, -21, 22, 11, -123, 99, 2, -20, 64, 101, 100, 111, -52, -66, -67, -8, -83, 69, -90, 116, -21, -96, -73, 94, -109, -58, -73, -8, -108, 28, -19, 76, 17, 121, -35, 14, 79, -63, 117, -63, -93, -12, 29, -101, 17, 87, -35, -123, -121, 26, -116, -116, -23, 27, -62, 8, 90, 87, -58, 91, 78, -22, 39, -34, -58, 72, 60, 81, 3, -9, -122, -56, -93, 7, 89, -82, -65, -122, -75, -107, -13, 105, 104, -123, 62, -3, -127, 116, -48, 51, 107, 107, -61, 69, 93, 16, 14, -82, -2, 14, -115, -103, 100, -93, -111, -22, -104, -93, -115, 125, 55, 34, -95, -83, 67, -73, 63, 110, -92, -36, 22, -2, 19, -108, -50, 14, 96, -4, 11, 106, 115, 94, -48, 92, -12, 32, 108, -67, -48, 65, -119, 11, -59, -113};
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
    msg.setTimeStamp(0.611541683729);
    msg.setSource(49472U);
    msg.setSourceEntity(172U);
    msg.setDestination(44409U);
    msg.setDestinationEntity(250U);
    msg.frequency = 1740514889U;
    msg.min_range = 11730U;
    msg.max_range = 8432U;

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
    msg.setTimeStamp(0.19246457991);
    msg.setSource(58691U);
    msg.setSourceEntity(217U);
    msg.setDestination(3552U);
    msg.setDestinationEntity(145U);
    msg.frequency = 3003129277U;
    msg.min_range = 25332U;
    msg.max_range = 52979U;

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
    msg.setTimeStamp(0.864399093685);
    msg.setSource(4361U);
    msg.setSourceEntity(1U);
    msg.setDestination(24519U);
    msg.setDestinationEntity(47U);
    msg.frequency = 909007032U;
    msg.min_range = 15233U;
    msg.max_range = 27465U;

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
    msg.setTimeStamp(0.150868750311);
    msg.setSource(16866U);
    msg.setSourceEntity(196U);
    msg.setDestination(56805U);
    msg.setDestinationEntity(52U);
    msg.type = 42U;
    msg.frequency = 2898107675U;
    msg.min_range = 32468U;
    msg.max_range = 26145U;
    msg.bits_per_point = 108U;
    msg.scale_factor = 0.88507875531;
    const char tmp_msg_0[] = {20, 114, -110, -29, -94, 37, -63, 118, 86, -96, -8, 76, -79, -105, 16, -16, 41, -20, -107, -96, -41, 22, -57, 1, 21, -34, 83, -54, 123, -9, 92, -21, -109, 63, -110, 4, -53, 57, -106, 36, -64, 3};
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
    msg.setTimeStamp(0.307020823062);
    msg.setSource(33164U);
    msg.setSourceEntity(247U);
    msg.setDestination(19197U);
    msg.setDestinationEntity(134U);
    msg.type = 18U;
    msg.frequency = 3834718393U;
    msg.min_range = 3138U;
    msg.max_range = 13100U;
    msg.bits_per_point = 34U;
    msg.scale_factor = 0.507385077349;
    const char tmp_msg_0[] = {2, 64, 76, 10, 7, 67, 39, 45, 9, 45, 120, -95, 122, -11, 44, 103, -24, -73, 42, -114, -100, 5, -94, 55, 0, -13, -33, -75, -52, -51, -11, 6, 63, 53, 81, -114, -11, 47, -22, -25, -6, -31, 11, 105, 92, 28, -50, -95, -102, -92, -90, -67, 13, 125, 125, -105, -36, -38, 37, -96, 109, -48, 55, 118, -25, 70, 73, -70, 43, -21, 69, -123, 71, -94, -128, 15, 83, 37, -72, -49, -113, -90, 0, 22, 49, -91, 57, -41, 12, -6, -1, 82, -114, 70, -11, 12, 107, 82, 108, -85, 92, -40, 90, -75, 74, 83, 79, -104, 66, -79, 21, -44, 126, -112, 118, 117, -119, 76, -96, -60, -81, 118, -116, 115, 5, 7, -24, -35, -53, -115, 72, -87, 66, 102, 112, -80, 25, 67, -88, 47, -119, 96, -38, -62, 12, -69, -27, 114, -106, 76, 57, 118, 47, -109, -10, 83, 19, -125, -52, -105, 3, -91, 32, -100, -127, -96, -17, 58, 78, -116, 110, 59, -36, -111, 86, -83, -57, 122, 80, -98, 99, -53, -40, 46, 80, 8, -58, 50, -56, -12, 22, 88, -119, -64, -39, 0, 72};
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
    msg.setTimeStamp(0.394010622276);
    msg.setSource(31492U);
    msg.setSourceEntity(239U);
    msg.setDestination(64202U);
    msg.setDestinationEntity(24U);
    msg.type = 225U;
    msg.frequency = 2023959936U;
    msg.min_range = 37210U;
    msg.max_range = 60975U;
    msg.bits_per_point = 1U;
    msg.scale_factor = 0.931666997948;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.43578488331;
    tmp_msg_0.beam_height = 0.508816735202;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-103, -82, -75, 119, -39, 6, -26, -120, 17, -93, 76, 86, 108, 116, 38, -25, 11, 68, -50, -35, -76, -44, -42, 30, 7, 24, 1, 24, -11, -20, 6, 117, -66, 1, 52, -32, 16, 86, 5, -88, -27, -69};
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
    msg.setTimeStamp(0.566883567686);
    msg.setSource(54859U);
    msg.setSourceEntity(36U);
    msg.setDestination(781U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.601285615053);
    msg.setSource(18505U);
    msg.setSourceEntity(184U);
    msg.setDestination(27912U);
    msg.setDestinationEntity(238U);

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
    msg.setTimeStamp(0.121306299444);
    msg.setSource(52050U);
    msg.setSourceEntity(173U);
    msg.setDestination(1143U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.376613734726);
    msg.setSource(52062U);
    msg.setSourceEntity(237U);
    msg.setDestination(59604U);
    msg.setDestinationEntity(145U);
    msg.op = 253U;

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
    msg.setTimeStamp(0.712704415687);
    msg.setSource(27780U);
    msg.setSourceEntity(182U);
    msg.setDestination(32993U);
    msg.setDestinationEntity(189U);
    msg.op = 202U;

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
    msg.setTimeStamp(0.784805630717);
    msg.setSource(9293U);
    msg.setSourceEntity(2U);
    msg.setDestination(1388U);
    msg.setDestinationEntity(233U);
    msg.op = 12U;

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
    msg.setTimeStamp(0.684268975858);
    msg.setSource(50187U);
    msg.setSourceEntity(35U);
    msg.setDestination(39151U);
    msg.setDestinationEntity(138U);
    msg.value = 0.524494117;
    msg.confidence = 0.167176894174;
    msg.opmodes.assign("PRXILWQRDPOVZHWQKEDSMXWTWCIOFZENPFQHZDPJRWQTMHFSYVGVSHHSJNGRKNZOZYEKBQBOMSVCXSCJRNZCRVIUFHAUFUAHPVZWHBLMFZVWEPMBOIAEFZLKGIITNIDZAGCVTJPXLTBTSFKGVTMUYAC");

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
    msg.setTimeStamp(0.242255717058);
    msg.setSource(2036U);
    msg.setSourceEntity(5U);
    msg.setDestination(22164U);
    msg.setDestinationEntity(186U);
    msg.value = 0.950549190464;
    msg.confidence = 0.225640299799;
    msg.opmodes.assign("YPLGSDONRBKJEOIRIUTCUFNUATZWNJKTQCCYZJSEPTVZJETGARQERPQPISVVOOFINIJUXSPEKZSRJMHNFJF");

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
    msg.setTimeStamp(0.182407760985);
    msg.setSource(14775U);
    msg.setSourceEntity(74U);
    msg.setDestination(57631U);
    msg.setDestinationEntity(3U);
    msg.value = 0.526869899174;
    msg.confidence = 0.191541479096;
    msg.opmodes.assign("XRIVLXYCUKFPAZT");

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
    msg.setTimeStamp(0.782985628444);
    msg.setSource(2236U);
    msg.setSourceEntity(61U);
    msg.setDestination(23526U);
    msg.setDestinationEntity(137U);
    msg.itow = 922220540U;
    msg.lat = 0.0565740927542;
    msg.lon = 0.69016548375;
    msg.height_ell = 0.816586618926;
    msg.height_sea = 0.567430709735;
    msg.hacc = 0.925905624294;
    msg.vacc = 0.878445739082;
    msg.vel_n = 0.900873993219;
    msg.vel_e = 0.521052235712;
    msg.vel_d = 0.0612596460623;
    msg.speed = 0.227426256221;
    msg.gspeed = 0.694463828455;
    msg.heading = 0.917679407713;
    msg.sacc = 0.740754613128;
    msg.cacc = 0.374537815193;

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
    msg.setTimeStamp(0.162218120716);
    msg.setSource(57039U);
    msg.setSourceEntity(98U);
    msg.setDestination(39720U);
    msg.setDestinationEntity(172U);
    msg.itow = 910091989U;
    msg.lat = 0.121369859828;
    msg.lon = 0.405552266292;
    msg.height_ell = 0.412519815336;
    msg.height_sea = 0.359975220039;
    msg.hacc = 0.17121750622;
    msg.vacc = 0.937625830937;
    msg.vel_n = 0.508566900366;
    msg.vel_e = 0.653099751081;
    msg.vel_d = 0.906462751698;
    msg.speed = 0.249329831326;
    msg.gspeed = 0.900163575954;
    msg.heading = 0.287395667426;
    msg.sacc = 0.231743769008;
    msg.cacc = 0.873049338263;

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
    msg.setTimeStamp(0.525998175546);
    msg.setSource(14683U);
    msg.setSourceEntity(113U);
    msg.setDestination(31791U);
    msg.setDestinationEntity(243U);
    msg.itow = 1666441354U;
    msg.lat = 0.0855966710528;
    msg.lon = 0.376944346231;
    msg.height_ell = 0.909475953779;
    msg.height_sea = 0.740478180434;
    msg.hacc = 0.20590671932;
    msg.vacc = 0.609642324088;
    msg.vel_n = 0.0955991279154;
    msg.vel_e = 0.918825370284;
    msg.vel_d = 0.373322767128;
    msg.speed = 0.217682305495;
    msg.gspeed = 0.713408238576;
    msg.heading = 0.674436422224;
    msg.sacc = 0.839030847362;
    msg.cacc = 0.359857318915;

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
    msg.setTimeStamp(0.544433462596);
    msg.setSource(62304U);
    msg.setSourceEntity(200U);
    msg.setDestination(24444U);
    msg.setDestinationEntity(50U);
    msg.id = 104U;
    msg.value = 0.0958004642852;

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
    msg.setTimeStamp(0.0395848782971);
    msg.setSource(21127U);
    msg.setSourceEntity(244U);
    msg.setDestination(63810U);
    msg.setDestinationEntity(112U);
    msg.id = 13U;
    msg.value = 0.279866023433;

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
    msg.setTimeStamp(0.238062778374);
    msg.setSource(27832U);
    msg.setSourceEntity(177U);
    msg.setDestination(11252U);
    msg.setDestinationEntity(111U);
    msg.id = 38U;
    msg.value = 0.0821285576085;

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
    msg.setTimeStamp(0.565502150629);
    msg.setSource(20718U);
    msg.setSourceEntity(4U);
    msg.setDestination(49779U);
    msg.setDestinationEntity(46U);
    msg.x = 0.270471743172;
    msg.y = 0.0705899176186;
    msg.z = 0.885103530499;
    msg.phi = 0.397923905642;
    msg.theta = 0.909284386942;
    msg.psi = 0.796246426461;

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
    msg.setTimeStamp(0.59346229203);
    msg.setSource(60818U);
    msg.setSourceEntity(33U);
    msg.setDestination(51160U);
    msg.setDestinationEntity(213U);
    msg.x = 0.53431916567;
    msg.y = 0.66816758696;
    msg.z = 0.124019411796;
    msg.phi = 0.897577135526;
    msg.theta = 0.37788116591;
    msg.psi = 0.000750253530869;

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
    msg.setTimeStamp(0.815937935097);
    msg.setSource(44123U);
    msg.setSourceEntity(34U);
    msg.setDestination(35340U);
    msg.setDestinationEntity(35U);
    msg.x = 0.508597848737;
    msg.y = 0.151188916516;
    msg.z = 0.834415459082;
    msg.phi = 0.643643284657;
    msg.theta = 0.33099608949;
    msg.psi = 0.471562863844;

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
    msg.setTimeStamp(0.523773381521);
    msg.setSource(18381U);
    msg.setSourceEntity(52U);
    msg.setDestination(10531U);
    msg.setDestinationEntity(148U);
    msg.beam_width = 0.627737804896;
    msg.beam_height = 0.167716588583;

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
    msg.setTimeStamp(0.338929238307);
    msg.setSource(11120U);
    msg.setSourceEntity(242U);
    msg.setDestination(18741U);
    msg.setDestinationEntity(102U);
    msg.beam_width = 0.808642769351;
    msg.beam_height = 0.475261078312;

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
    msg.setTimeStamp(0.5479398756);
    msg.setSource(50333U);
    msg.setSourceEntity(167U);
    msg.setDestination(41990U);
    msg.setDestinationEntity(114U);
    msg.beam_width = 0.219546449447;
    msg.beam_height = 0.37837200033;

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
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.393699817085);
    msg.setSource(24153U);
    msg.setSourceEntity(201U);
    msg.setDestination(49571U);
    msg.setDestinationEntity(249U);
    msg.id = 37U;
    msg.zoom = 66U;
    msg.action = 110U;

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
    msg.setTimeStamp(0.231392146267);
    msg.setSource(26356U);
    msg.setSourceEntity(80U);
    msg.setDestination(47155U);
    msg.setDestinationEntity(54U);
    msg.id = 134U;
    msg.zoom = 164U;
    msg.action = 14U;

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
    msg.setTimeStamp(0.251548565241);
    msg.setSource(29351U);
    msg.setSourceEntity(9U);
    msg.setDestination(57087U);
    msg.setDestinationEntity(72U);
    msg.id = 149U;
    msg.zoom = 180U;
    msg.action = 213U;

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
    msg.setTimeStamp(0.282565964753);
    msg.setSource(57662U);
    msg.setSourceEntity(208U);
    msg.setDestination(5380U);
    msg.setDestinationEntity(242U);
    msg.id = 192U;
    msg.value = 0.451349779082;

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
    msg.setTimeStamp(0.255832161059);
    msg.setSource(43557U);
    msg.setSourceEntity(157U);
    msg.setDestination(49928U);
    msg.setDestinationEntity(177U);
    msg.id = 235U;
    msg.value = 0.882971234261;

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
    msg.setTimeStamp(0.104187243435);
    msg.setSource(64848U);
    msg.setSourceEntity(23U);
    msg.setDestination(6573U);
    msg.setDestinationEntity(18U);
    msg.id = 192U;
    msg.value = 0.0404021146027;

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
    msg.setTimeStamp(0.798288273397);
    msg.setSource(24297U);
    msg.setSourceEntity(93U);
    msg.setDestination(54089U);
    msg.setDestinationEntity(180U);
    msg.id = 50U;
    msg.value = 0.923108124308;

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
    msg.setTimeStamp(0.507962654531);
    msg.setSource(3355U);
    msg.setSourceEntity(104U);
    msg.setDestination(17971U);
    msg.setDestinationEntity(13U);
    msg.id = 4U;
    msg.value = 0.305180120785;

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
    msg.setTimeStamp(0.873282563636);
    msg.setSource(4900U);
    msg.setSourceEntity(228U);
    msg.setDestination(63645U);
    msg.setDestinationEntity(42U);
    msg.id = 59U;
    msg.value = 0.0994087242279;

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
    msg.setTimeStamp(0.546485975425);
    msg.setSource(53986U);
    msg.setSourceEntity(12U);
    msg.setDestination(49643U);
    msg.setDestinationEntity(139U);
    msg.id = 243U;
    msg.angle = 0.97029178846;

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
    msg.setTimeStamp(0.989848984581);
    msg.setSource(38639U);
    msg.setSourceEntity(210U);
    msg.setDestination(41688U);
    msg.setDestinationEntity(249U);
    msg.id = 34U;
    msg.angle = 0.3524276568;

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
    msg.setTimeStamp(0.945002059044);
    msg.setSource(15169U);
    msg.setSourceEntity(219U);
    msg.setDestination(13058U);
    msg.setDestinationEntity(234U);
    msg.id = 214U;
    msg.angle = 0.0781775077226;

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
    msg.setTimeStamp(0.800901713394);
    msg.setSource(52248U);
    msg.setSourceEntity(120U);
    msg.setDestination(46537U);
    msg.setDestinationEntity(195U);
    msg.op = 230U;
    msg.actions.assign("AJBQYQMLOIVKTKAOCTZXBSWXUCZPIRYQFZMOLLTHUBDOAUANWGATLXSQKLMWPZVIKDMDUWYJDEPHICJSBOZUSXYVBOUFFMXDDKXVRTCAOWWSWUCIHIBESTRFF");

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
    msg.setTimeStamp(0.127358479473);
    msg.setSource(31698U);
    msg.setSourceEntity(146U);
    msg.setDestination(4881U);
    msg.setDestinationEntity(2U);
    msg.op = 12U;
    msg.actions.assign("NNJZMLGNGDZWKLSXYYMMVUUJQDFOLHETUHEHIQMYSLXOYHRFESJKMBTBHYZERTTIKSXCQWWQRLWOLSXHIPOVOVTKOFMXCQROQCSYDCJLPDHNQPRGJCFIMRAI");

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
    msg.setTimeStamp(0.33619991599);
    msg.setSource(62584U);
    msg.setSourceEntity(82U);
    msg.setDestination(39636U);
    msg.setDestinationEntity(146U);
    msg.op = 220U;
    msg.actions.assign("NYCJUCAZJLQSZGJOFOMQRXXWRECGNBARKKSIYVWLJCRDOHPTYMEUAOASSMPOZITLDTXEMJPUDYYCZHTCAVGQBSRZCXWITFBUDEVLUUATJVKNPVFERXVKFRDBQYPJVNPWBWFMHBXCSWHYSENBIKSFAAOLZFGHQCBLWYZQOXZTCRPLUKEGJAKONXQLEESIPHRGSUIBPITLZOMQUIOXMNHFJKDKEGYIGIYDAUNBGTVQPWFHMXMVHDNTHZVLNDWK");

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
    msg.setTimeStamp(0.888171743611);
    msg.setSource(35675U);
    msg.setSourceEntity(184U);
    msg.setDestination(1462U);
    msg.setDestinationEntity(45U);
    msg.actions.assign("LGUMPFGCMLLNKNKQMRWBOXOVQYBJRQJAMWGVCJHTWPERGGWFTNTAGZTHOUBVCINQQZSLKNKDUZHCCHPLVPGYAQVWWMPXLGLUDJSJOGFYORCDTGJHCYAKRHINFIASVSAKQBPZNOZSZFEETDCEJBPZFPQNKYBIJWAWULTOCPKEIHZIZQUHIFEJUSUTIYXRIRBMXVXLBIOVYVVOADETDNHARFURKF");

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
    msg.setTimeStamp(0.448890354684);
    msg.setSource(50460U);
    msg.setSourceEntity(190U);
    msg.setDestination(7290U);
    msg.setDestinationEntity(125U);
    msg.actions.assign("WVPPXIMKOVAFVTRFAU");

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
    msg.setTimeStamp(0.358502166045);
    msg.setSource(41269U);
    msg.setSourceEntity(241U);
    msg.setDestination(11373U);
    msg.setDestinationEntity(46U);
    msg.actions.assign("VLWEEAYVVOXXPHJMHKZSGUNBNQFDGWLRHXTWBNBJJPYEQWHTHNZHMBFGEZDSHSODUQYKCIEMWFRMIBYOPMLKAAZSFCELFGXHLCTVPKDXAWZRULPVSDPLICIRNUGDJWJAVALJXZOGGTPTYCMYJVZCBIGOHQMMDZVKIONDPXWPVFNCTDWUETYROLK");

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
    msg.setTimeStamp(0.0179355157029);
    msg.setSource(60094U);
    msg.setSourceEntity(114U);
    msg.setDestination(1337U);
    msg.setDestinationEntity(131U);
    msg.button = 171U;
    msg.value = 28U;

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
    msg.setTimeStamp(0.217855462062);
    msg.setSource(35076U);
    msg.setSourceEntity(79U);
    msg.setDestination(58337U);
    msg.setDestinationEntity(225U);
    msg.button = 181U;
    msg.value = 82U;

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
    msg.setTimeStamp(0.406167555812);
    msg.setSource(43176U);
    msg.setSourceEntity(237U);
    msg.setDestination(22873U);
    msg.setDestinationEntity(3U);
    msg.button = 109U;
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
    msg.setTimeStamp(0.111111189126);
    msg.setSource(3955U);
    msg.setSourceEntity(194U);
    msg.setDestination(37303U);
    msg.setDestinationEntity(177U);
    msg.op = 70U;
    msg.text.assign("OBMDWLFRNDPOTVSNZVJTBIFQPUAELVXAZRPNSUGMFNSQLNCYKRCHLYVUZMFHIUFYNSJJAPROXETUBYVJNMMRAUZQJGPLW");

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
    msg.setTimeStamp(0.283325402632);
    msg.setSource(2491U);
    msg.setSourceEntity(204U);
    msg.setDestination(32936U);
    msg.setDestinationEntity(7U);
    msg.op = 93U;
    msg.text.assign("CETDSMIKVKZGRXWJBEGSAQWOVLCXUWLKBGXUQYXIFFMUQGQMSLJHOFAIUNEXLDXFTLDHPOTPTYJNRAGJIZKTKETBYPJVUVSNEVRSGERJMVRWZLXKYTPNEIZAMZSOTSSVHPCP");

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
    msg.setTimeStamp(0.241211112168);
    msg.setSource(63687U);
    msg.setSourceEntity(122U);
    msg.setDestination(28955U);
    msg.setDestinationEntity(75U);
    msg.op = 81U;
    msg.text.assign("DGJUEEQGBRASGMOHDMMBRXLCXJOZNFQFHDWTFDABMQSZUGIZPQHWHVWTLRLPAFHQEAFXXKQSKXZJLSVAOYUDGEVHQNCXENMNXDIWMDKIZCCYLJAYXJSTHOQRAPSIREDSFINBGPYWKTPNQJFN");

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
    msg.setTimeStamp(0.588336368764);
    msg.setSource(19356U);
    msg.setSourceEntity(113U);
    msg.setDestination(14322U);
    msg.setDestinationEntity(20U);
    msg.op = 0U;
    msg.time_remain = 0.950626914145;
    msg.sched_time = 0.0412068149469;

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
    msg.setTimeStamp(0.861766255145);
    msg.setSource(56637U);
    msg.setSourceEntity(3U);
    msg.setDestination(41209U);
    msg.setDestinationEntity(19U);
    msg.op = 167U;
    msg.time_remain = 0.514214775293;
    msg.sched_time = 0.756237553525;

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
    msg.setTimeStamp(0.828880796764);
    msg.setSource(1974U);
    msg.setSourceEntity(147U);
    msg.setDestination(25042U);
    msg.setDestinationEntity(118U);
    msg.op = 190U;
    msg.time_remain = 0.620952181579;
    msg.sched_time = 0.75429580678;

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
    msg.setTimeStamp(0.00792442667333);
    msg.setSource(58389U);
    msg.setSourceEntity(209U);
    msg.setDestination(17465U);
    msg.setDestinationEntity(201U);
    msg.name.assign("IGLLSKRWEAJEMXFBRJWRVJALLZDPBKYMSIMHJGTWOMYHICLFDSDTZLQVUCLBYVUOKAVFWXYORPYFRFNXAJHNEWJZGRPZEKNOOFGGEXQCBBQQKHSTLSMEOGAEYYCZTHVTWKVCWWXIRJZSTPMTWCTIQQUUYVJSAQOFLPPCHXSNFZNGECHANXHQDDUUKIXNBRSLDBOXKYIMQBVFZHUKBKERIMNTFHNGA");
    msg.op = 189U;
    msg.sched_time = 0.494792451983;

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
    msg.setTimeStamp(0.0797453340085);
    msg.setSource(7948U);
    msg.setSourceEntity(212U);
    msg.setDestination(51919U);
    msg.setDestinationEntity(91U);
    msg.name.assign("IFLTZITASGWISTWWBZPHROBQPBXQVCXOMFBJJIMPGKHGBRFFGWAGDNKSTVYVCHOVHPDWYGQKZOKEG");
    msg.op = 206U;
    msg.sched_time = 0.0446309162856;

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
    msg.setTimeStamp(0.732046392506);
    msg.setSource(34132U);
    msg.setSourceEntity(218U);
    msg.setDestination(488U);
    msg.setDestinationEntity(22U);
    msg.name.assign("JOGSZKHMWIKVYPHLHEQIAVQMIGMRIKCYSFZEYUAKCGOTUJGTBLXRZLHSJJMARFFNWVBCHLZUKCAUKPYDBWZPLRLDSDDTLPZDPB");
    msg.op = 242U;
    msg.sched_time = 0.855326907268;

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
    msg.setTimeStamp(0.095921474093);
    msg.setSource(25957U);
    msg.setSourceEntity(71U);
    msg.setDestination(56756U);
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
    msg.setTimeStamp(0.906905574127);
    msg.setSource(14861U);
    msg.setSourceEntity(216U);
    msg.setDestination(43067U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.476475529323);
    msg.setSource(7069U);
    msg.setSourceEntity(146U);
    msg.setDestination(52482U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.53302987272);
    msg.setSource(51517U);
    msg.setSourceEntity(112U);
    msg.setDestination(35452U);
    msg.setDestinationEntity(81U);
    msg.name.assign("BKRVYIPQLYJJPQSRKOTHGTAASWULFHKZTOFUXZDRVEAIMPEKYOZWJQAPUXEKLPQAANPDYDNEJSRDAPANVLUUFTNWVMYLCDUDHEVJMPGLCIBASFMYVFBOZHZHZQMHCNIVHSBXRCQSYTNQXDNKZRTDLWJGWBUXGBJUHOJIREGZFOXCRWRIY");
    msg.state = 155U;

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
    msg.setTimeStamp(0.471371633421);
    msg.setSource(48824U);
    msg.setSourceEntity(209U);
    msg.setDestination(50662U);
    msg.setDestinationEntity(93U);
    msg.name.assign("MOPQRPHUBCJKTAIAHVIWOXBCYALVNOQLVQXOOVPOYGHEZWNGQGXSBCDGIKPFDLRCTEFNTJQDJZGREYMMHWWWDLEQNSUECYKHZCXSTRGXVKYAJODODXAPVNLCAZKZNTJZZCUIQEJDAPTMM");
    msg.state = 161U;

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
    msg.setTimeStamp(0.48815439399);
    msg.setSource(30774U);
    msg.setSourceEntity(241U);
    msg.setDestination(13739U);
    msg.setDestinationEntity(217U);
    msg.name.assign("BGURXJBGIMNNOQBXSIZLMZXIQLODWJQECJKVMPVG");
    msg.state = 73U;

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
    msg.setTimeStamp(0.636570231501);
    msg.setSource(34253U);
    msg.setSourceEntity(192U);
    msg.setDestination(42578U);
    msg.setDestinationEntity(150U);
    msg.name.assign("OKJABOBWBDYKBAFSMZIRNBIERCIYIBQTTNJHB");
    msg.value = 40U;

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
    msg.setTimeStamp(0.38796028013);
    msg.setSource(5165U);
    msg.setSourceEntity(37U);
    msg.setDestination(28450U);
    msg.setDestinationEntity(205U);
    msg.name.assign("EWIPFDUWQUVJZXJMQQRZVJRGVAPCIJYVOLSGDZVKVRHAHRIPTLBHADGJNFPFFPQWVIMEHDXHPCQILBLYHTXSFTWLBJYSCEGUBNBZIAAUSTZRCBCZXJTMLOXQDIDGVAROXMZYOMFL");
    msg.value = 105U;

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
    msg.setTimeStamp(0.0462107789836);
    msg.setSource(18658U);
    msg.setSourceEntity(120U);
    msg.setDestination(56949U);
    msg.setDestinationEntity(30U);
    msg.name.assign("MFMBELQNKBJTHDXWJOIYNVXKITDXMQODGPWBBJGRSAKHJHOITOVDSRYGWFVCVSBEZBRZMFEYHYSCYTRETZZSRDVQSXEGHLMCIAWJWIKDSFWHBOMSFTIYPFLXLEPUUBCUWPMCLBPTXNYPYNINNRKDCNCCHUVJJTHEWIHGXGXPXELKIHQVRVRAMOXGLNLJKZAGZQPGOAIAFQRDTSFUYKUZQMQLEAOKZALJWUEZFTAKCPQFANO");
    msg.value = 4U;

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
    msg.setTimeStamp(0.962892894443);
    msg.setSource(35608U);
    msg.setSourceEntity(6U);
    msg.setDestination(44112U);
    msg.setDestinationEntity(154U);
    msg.name.assign("GQAKOIUCRVQHSAGAKMKKESLNOORXUTEEVYXPTHTPASTZZICBQOYEFIOTCNRDUKRLZLJYQFOHEIIFIPCXNKCRNHPTGFJAEAAQVRCIHFLOLSLXWMBDZEVZSOKQJXIRFWBUNHHGMGDFPUZBMPVCMFYTEVXYWYTXQEDPYBEMNBWRNWWUQJYPNVFVWIZNTZNFDOLMXWOUHADKYAQHJUJIGTBXDPLYDU");

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
    msg.setTimeStamp(0.0669695434642);
    msg.setSource(49952U);
    msg.setSourceEntity(177U);
    msg.setDestination(28838U);
    msg.setDestinationEntity(88U);
    msg.name.assign("CAPQTQNFWIZZVOQKMARHBUJVYYFFMHCIXUIKWHULVNKZESWMWAMRFDAHSFVGVXTRTYESZOJFYBMUELGXDGDVOJRCVWLOSFDLZBZLBKIIGHJCDIBPPACHGYGAKXME");

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
    msg.setTimeStamp(0.980538787401);
    msg.setSource(6409U);
    msg.setSourceEntity(154U);
    msg.setDestination(6392U);
    msg.setDestinationEntity(252U);
    msg.name.assign("ZGNKACXYHUPDCMWISWIHUACRMHGAHUM");

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
    msg.setTimeStamp(0.100144735721);
    msg.setSource(19933U);
    msg.setSourceEntity(157U);
    msg.setDestination(47092U);
    msg.setDestinationEntity(144U);
    msg.name.assign("LNFTTIPBKKZUYQWIVOUUKWGDVBTXXXTGICQPWEVZZHIGLOWETPJJIGVTHVVQRCNFOUPBSPZXMDLDBRYOHVASJXOYFDOLSVAAZYQEFPXMESYNJGSUAKCHORQTNRAGYKKIETXZBMWVCYBMGXSNGLKKULHCSHDMTODLOCMJDILQCAVFDMSARQZWJQBNSPRHX");
    msg.value = 119U;

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
    msg.setTimeStamp(0.900634417842);
    msg.setSource(12720U);
    msg.setSourceEntity(207U);
    msg.setDestination(28462U);
    msg.setDestinationEntity(86U);
    msg.name.assign("XNLKPPIFUWJCYDZODPQDCHSQMDYHWWIQBKSENELUXMQMSBMSAZXRSERVBHTNZYWLFATUEHZJGGJYDTBVHNKGPBWICRTCQBPFUQJZGALEDMUJCTIVCKGDHFBCIQXOKRNMWGZEXCBANVXKTEZKDZYYWOHPUSZGFNLQYHAKYMMAFSNOULOPSJDILBWRURVIZ");
    msg.value = 45U;

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
    msg.setTimeStamp(0.114200547476);
    msg.setSource(30017U);
    msg.setSourceEntity(222U);
    msg.setDestination(11457U);
    msg.setDestinationEntity(7U);
    msg.name.assign("TFUQMTCZFFMSZBOSHPVYWKRLHPTCHYBDLVNKNFEITJVZWYUIIUXWJWYGRORJDZIRSNFVNWHYPGHCQTPOKMLVQCDTGYRU");
    msg.value = 178U;

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
    msg.setTimeStamp(0.878205716662);
    msg.setSource(18714U);
    msg.setSourceEntity(148U);
    msg.setDestination(43255U);
    msg.setDestinationEntity(247U);
    msg.lat = 0.872894679974;
    msg.lon = 0.95384793681;
    msg.height = 0.7496190151;
    msg.x = 0.611220682707;
    msg.y = 0.504683043346;
    msg.z = 0.384417770576;
    msg.phi = 0.725390950524;
    msg.theta = 0.214050100317;
    msg.psi = 0.0922121650419;
    msg.u = 0.88401422234;
    msg.v = 0.893663114062;
    msg.w = 0.0570588014659;
    msg.vx = 0.735835805105;
    msg.vy = 0.393081318759;
    msg.vz = 0.163458245462;
    msg.p = 0.365834171852;
    msg.q = 0.128403285231;
    msg.r = 0.365909591478;
    msg.depth = 0.651762491818;
    msg.alt = 0.800738998903;

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
    msg.setTimeStamp(0.666969056421);
    msg.setSource(12473U);
    msg.setSourceEntity(219U);
    msg.setDestination(53208U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.997833742851;
    msg.lon = 0.124152053185;
    msg.height = 0.312525592026;
    msg.x = 0.372399734039;
    msg.y = 0.516463367896;
    msg.z = 0.467564118042;
    msg.phi = 0.960167659262;
    msg.theta = 0.9697826496;
    msg.psi = 0.996983206735;
    msg.u = 0.625562271231;
    msg.v = 0.76141630243;
    msg.w = 0.137648663384;
    msg.vx = 0.374600558363;
    msg.vy = 0.180410171191;
    msg.vz = 0.968025178751;
    msg.p = 0.738437956911;
    msg.q = 0.624140914592;
    msg.r = 0.868466735323;
    msg.depth = 0.660449243906;
    msg.alt = 0.568090020632;

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
    msg.setTimeStamp(0.811436141132);
    msg.setSource(5295U);
    msg.setSourceEntity(23U);
    msg.setDestination(50077U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.163505352088;
    msg.lon = 0.922347231026;
    msg.height = 0.395408822212;
    msg.x = 0.201995612326;
    msg.y = 0.073710148779;
    msg.z = 0.877247265893;
    msg.phi = 0.307188512909;
    msg.theta = 0.69546279961;
    msg.psi = 0.313462458691;
    msg.u = 0.918514672551;
    msg.v = 0.760966587168;
    msg.w = 0.935226555988;
    msg.vx = 0.0762399520335;
    msg.vy = 0.114329674344;
    msg.vz = 0.229074655976;
    msg.p = 0.325879700515;
    msg.q = 0.116591739717;
    msg.r = 0.949960270979;
    msg.depth = 0.39347790203;
    msg.alt = 0.297270345086;

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
    msg.setTimeStamp(0.0476326965287);
    msg.setSource(12113U);
    msg.setSourceEntity(132U);
    msg.setDestination(9388U);
    msg.setDestinationEntity(173U);
    msg.x = 0.114604479112;
    msg.y = 0.745648098964;
    msg.z = 0.27022094751;

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
    msg.setTimeStamp(0.523431980322);
    msg.setSource(62358U);
    msg.setSourceEntity(71U);
    msg.setDestination(56406U);
    msg.setDestinationEntity(76U);
    msg.x = 0.0104068907827;
    msg.y = 0.64870545806;
    msg.z = 0.53161311291;

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
    msg.setTimeStamp(0.236157220285);
    msg.setSource(62405U);
    msg.setSourceEntity(60U);
    msg.setDestination(54256U);
    msg.setDestinationEntity(105U);
    msg.x = 0.0157836903743;
    msg.y = 0.821846089511;
    msg.z = 0.620424494762;

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
    msg.setTimeStamp(0.0930799124907);
    msg.setSource(33242U);
    msg.setSourceEntity(246U);
    msg.setDestination(24875U);
    msg.setDestinationEntity(93U);
    msg.value = 0.541062996033;

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
    msg.setTimeStamp(0.449648061537);
    msg.setSource(1062U);
    msg.setSourceEntity(142U);
    msg.setDestination(34299U);
    msg.setDestinationEntity(244U);
    msg.value = 0.0895300195768;

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
    msg.setTimeStamp(0.711907627369);
    msg.setSource(36909U);
    msg.setSourceEntity(185U);
    msg.setDestination(16395U);
    msg.setDestinationEntity(158U);
    msg.value = 0.819132164723;

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
    msg.setTimeStamp(0.620232077246);
    msg.setSource(53402U);
    msg.setSourceEntity(29U);
    msg.setDestination(25802U);
    msg.setDestinationEntity(51U);
    msg.value = 0.959010645865;

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
    msg.setTimeStamp(0.966473746424);
    msg.setSource(64654U);
    msg.setSourceEntity(221U);
    msg.setDestination(43376U);
    msg.setDestinationEntity(72U);
    msg.value = 0.13479936796;

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
    msg.setTimeStamp(0.40220133575);
    msg.setSource(28131U);
    msg.setSourceEntity(52U);
    msg.setDestination(3170U);
    msg.setDestinationEntity(243U);
    msg.value = 0.904479378588;

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
    msg.setTimeStamp(0.154085379674);
    msg.setSource(5030U);
    msg.setSourceEntity(31U);
    msg.setDestination(48738U);
    msg.setDestinationEntity(209U);
    msg.x = 0.829811405268;
    msg.y = 0.334903251419;
    msg.z = 0.712397747412;
    msg.phi = 0.79950012342;
    msg.theta = 0.0459287470482;
    msg.psi = 0.540021992119;
    msg.p = 0.102318465465;
    msg.q = 0.821658061435;
    msg.r = 0.176054242062;
    msg.u = 0.118822799131;
    msg.v = 0.351506444169;
    msg.w = 0.124542946176;
    msg.bias_psi = 0.431754459202;
    msg.bias_r = 0.125077737555;

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
    msg.setTimeStamp(0.198085508036);
    msg.setSource(9760U);
    msg.setSourceEntity(115U);
    msg.setDestination(52703U);
    msg.setDestinationEntity(137U);
    msg.x = 0.554083312205;
    msg.y = 0.57331296163;
    msg.z = 0.723310442895;
    msg.phi = 0.678513499209;
    msg.theta = 0.204767117842;
    msg.psi = 0.650098537109;
    msg.p = 0.491185649107;
    msg.q = 0.415795769673;
    msg.r = 0.578901900133;
    msg.u = 0.789821160373;
    msg.v = 0.207630372146;
    msg.w = 0.812804762453;
    msg.bias_psi = 0.311868313528;
    msg.bias_r = 0.675086790568;

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
    msg.setTimeStamp(0.485829448305);
    msg.setSource(25646U);
    msg.setSourceEntity(233U);
    msg.setDestination(55122U);
    msg.setDestinationEntity(62U);
    msg.x = 0.878396832152;
    msg.y = 0.270662978172;
    msg.z = 0.334180660972;
    msg.phi = 0.578776503522;
    msg.theta = 0.162856747915;
    msg.psi = 0.849911869167;
    msg.p = 0.92346063918;
    msg.q = 0.965106944315;
    msg.r = 0.571737515834;
    msg.u = 0.00678740928905;
    msg.v = 0.328497509217;
    msg.w = 0.92277491703;
    msg.bias_psi = 0.938681377277;
    msg.bias_r = 0.470937668035;

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
    msg.setTimeStamp(0.22887041004);
    msg.setSource(50849U);
    msg.setSourceEntity(68U);
    msg.setDestination(54178U);
    msg.setDestinationEntity(102U);
    msg.bias_psi = 0.216676198513;
    msg.bias_r = 0.374246902208;
    msg.cog = 0.122563821964;
    msg.cyaw = 0.643150835669;
    msg.lbl_rej_level = 0.2855296981;
    msg.gps_rej_level = 0.00842781996928;
    msg.custom_x = 0.171545507477;
    msg.custom_y = 0.284000770781;
    msg.custom_z = 0.414300833592;

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
    msg.setTimeStamp(0.361196908857);
    msg.setSource(35524U);
    msg.setSourceEntity(16U);
    msg.setDestination(13760U);
    msg.setDestinationEntity(219U);
    msg.bias_psi = 0.0528863040364;
    msg.bias_r = 0.611381733197;
    msg.cog = 0.765927947874;
    msg.cyaw = 0.573848497576;
    msg.lbl_rej_level = 0.418563074243;
    msg.gps_rej_level = 0.854354245084;
    msg.custom_x = 0.205565435955;
    msg.custom_y = 0.302866880201;
    msg.custom_z = 0.196620486979;

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
    msg.setTimeStamp(0.788307637179);
    msg.setSource(36860U);
    msg.setSourceEntity(202U);
    msg.setDestination(36965U);
    msg.setDestinationEntity(114U);
    msg.bias_psi = 0.475953110902;
    msg.bias_r = 0.86528821564;
    msg.cog = 0.927825317719;
    msg.cyaw = 0.267628318246;
    msg.lbl_rej_level = 0.912843124054;
    msg.gps_rej_level = 0.253971882147;
    msg.custom_x = 0.750381016061;
    msg.custom_y = 0.986975334806;
    msg.custom_z = 0.748228735837;

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
    msg.setTimeStamp(0.840892740259);
    msg.setSource(20627U);
    msg.setSourceEntity(245U);
    msg.setDestination(36869U);
    msg.setDestinationEntity(103U);
    msg.utc_time = 0.508962699558;
    msg.reason = 176U;

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
    msg.setTimeStamp(0.154279787211);
    msg.setSource(60904U);
    msg.setSourceEntity(35U);
    msg.setDestination(2826U);
    msg.setDestinationEntity(195U);
    msg.utc_time = 0.785481961499;
    msg.reason = 228U;

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
    msg.setTimeStamp(0.395502078242);
    msg.setSource(54273U);
    msg.setSourceEntity(79U);
    msg.setDestination(1419U);
    msg.setDestinationEntity(9U);
    msg.utc_time = 0.917008237542;
    msg.reason = 65U;

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
    msg.setTimeStamp(0.020528530134);
    msg.setSource(50644U);
    msg.setSourceEntity(222U);
    msg.setDestination(12755U);
    msg.setDestinationEntity(103U);
    msg.id = 34U;
    msg.range = 0.761272513521;
    msg.acceptance = 97U;

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
    msg.setTimeStamp(0.551225160343);
    msg.setSource(16537U);
    msg.setSourceEntity(69U);
    msg.setDestination(43450U);
    msg.setDestinationEntity(140U);
    msg.id = 89U;
    msg.range = 0.180749241984;
    msg.acceptance = 208U;

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
    msg.setTimeStamp(0.145348555505);
    msg.setSource(5673U);
    msg.setSourceEntity(23U);
    msg.setDestination(5187U);
    msg.setDestinationEntity(96U);
    msg.id = 41U;
    msg.range = 0.235901803318;
    msg.acceptance = 173U;

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
    msg.setTimeStamp(0.562399478754);
    msg.setSource(57893U);
    msg.setSourceEntity(77U);
    msg.setDestination(802U);
    msg.setDestinationEntity(15U);
    msg.type = 55U;
    msg.reason = 58U;
    msg.value = 0.720472649121;
    msg.timestep = 0.605066806231;

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
    msg.setTimeStamp(0.743186212648);
    msg.setSource(6408U);
    msg.setSourceEntity(212U);
    msg.setDestination(58815U);
    msg.setDestinationEntity(185U);
    msg.type = 203U;
    msg.reason = 227U;
    msg.value = 0.0790106826254;
    msg.timestep = 0.78434536842;

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
    msg.setTimeStamp(0.994461606471);
    msg.setSource(27746U);
    msg.setSourceEntity(54U);
    msg.setDestination(11280U);
    msg.setDestinationEntity(152U);
    msg.type = 196U;
    msg.reason = 104U;
    msg.value = 0.859375068076;
    msg.timestep = 0.437121610595;

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
    msg.setTimeStamp(0.932030922076);
    msg.setSource(52280U);
    msg.setSourceEntity(34U);
    msg.setDestination(35924U);
    msg.setDestinationEntity(154U);

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
    msg.setTimeStamp(0.0738377789942);
    msg.setSource(64688U);
    msg.setSourceEntity(205U);
    msg.setDestination(31159U);
    msg.setDestinationEntity(2U);

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
    msg.setTimeStamp(0.484867563908);
    msg.setSource(36381U);
    msg.setSourceEntity(249U);
    msg.setDestination(47529U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.904157190253);
    msg.setSource(1145U);
    msg.setSourceEntity(219U);
    msg.setDestination(30443U);
    msg.setDestinationEntity(253U);
    msg.beacon.assign("AWBLEAWGFRZYQVMYBUMNCLZSFMCXRHXVLXBBUREOCWWPTVFIORYJDBUZLJMOMQBUDCPYITHXVPEWCXSDCYLZOZBKHGUCYRDGXVZMIHCIWOJRQXJIQUUVOTAICFJVZRQAQEZNKAFMKEHYJNEFNNYKSQGHRDGUTKLHQTXHO");
    msg.x = 0.0814848292879;
    msg.y = 0.208751127087;
    msg.depth = 0.626926755682;
    msg.var_x = 0.941043248338;
    msg.var_y = 0.477018070255;

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
    msg.setTimeStamp(0.479985760126);
    msg.setSource(60273U);
    msg.setSourceEntity(161U);
    msg.setDestination(46601U);
    msg.setDestinationEntity(93U);
    msg.beacon.assign("RCIDPGZYQOEVDTJNIUDKPQYCJFOVBCQWFPZHRLMGWJHJJBQTAUPIITPDGRSOCKWOINSZLGQMYKXDCLFXCKEOUPWYMKWUTMKZFIXVMWODEAQONLEIHVFIUFXUUKGDYMPXTHZLKXHEJVEROGSQBBFZWYACFIBRCZHTHEYGFESXVALH");
    msg.x = 0.990783091454;
    msg.y = 0.726810384399;
    msg.depth = 0.0285519247041;
    msg.var_x = 0.370727901239;
    msg.var_y = 0.729008123431;

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
    msg.setTimeStamp(0.0570010817936);
    msg.setSource(46126U);
    msg.setSourceEntity(90U);
    msg.setDestination(16247U);
    msg.setDestinationEntity(237U);
    msg.beacon.assign("EUXINOGJBBNPH");
    msg.x = 0.36615025493;
    msg.y = 0.448827692851;
    msg.depth = 0.225332033559;
    msg.var_x = 0.0485639795456;
    msg.var_y = 0.0950380637285;

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
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.770701926171);
    msg.setSource(54105U);
    msg.setSourceEntity(197U);
    msg.setDestination(27531U);
    msg.setDestinationEntity(108U);
    msg.x = 0.682126216464;
    msg.y = 0.558004377188;
    msg.z = 0.346033792949;

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
    msg.setTimeStamp(0.353900272096);
    msg.setSource(21813U);
    msg.setSourceEntity(54U);
    msg.setDestination(56279U);
    msg.setDestinationEntity(204U);
    msg.x = 0.135623020291;
    msg.y = 0.246329258324;
    msg.z = 0.392964222177;

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
    msg.setTimeStamp(0.365934492751);
    msg.setSource(27636U);
    msg.setSourceEntity(86U);
    msg.setDestination(20082U);
    msg.setDestinationEntity(211U);
    msg.x = 0.811754014935;
    msg.y = 0.732718907005;
    msg.z = 0.400310966512;

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
    msg.setTimeStamp(0.689840245135);
    msg.setSource(11868U);
    msg.setSourceEntity(8U);
    msg.setDestination(43261U);
    msg.setDestinationEntity(104U);
    msg.value = 0.993128078361;

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
    msg.setTimeStamp(0.852451969628);
    msg.setSource(38482U);
    msg.setSourceEntity(53U);
    msg.setDestination(12588U);
    msg.setDestinationEntity(242U);
    msg.value = 0.942248497773;

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
    msg.setTimeStamp(0.887217884735);
    msg.setSource(43798U);
    msg.setSourceEntity(157U);
    msg.setDestination(24592U);
    msg.setDestinationEntity(199U);
    msg.value = 0.187794293563;

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
    msg.setTimeStamp(0.788990007306);
    msg.setSource(65166U);
    msg.setSourceEntity(196U);
    msg.setDestination(14305U);
    msg.setDestinationEntity(201U);
    msg.value = 0.452921131938;
    msg.z_units = 87U;

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
    msg.setTimeStamp(0.565659587489);
    msg.setSource(40549U);
    msg.setSourceEntity(248U);
    msg.setDestination(4007U);
    msg.setDestinationEntity(224U);
    msg.value = 0.915636589836;
    msg.z_units = 93U;

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
    msg.setTimeStamp(0.648312889981);
    msg.setSource(48546U);
    msg.setSourceEntity(203U);
    msg.setDestination(53890U);
    msg.setDestinationEntity(123U);
    msg.value = 0.961036161301;
    msg.z_units = 157U;

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
    msg.setTimeStamp(0.327245006334);
    msg.setSource(46664U);
    msg.setSourceEntity(244U);
    msg.setDestination(42397U);
    msg.setDestinationEntity(118U);
    msg.value = 0.407621375645;
    msg.speed_units = 6U;

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
    msg.setTimeStamp(0.538823006313);
    msg.setSource(18159U);
    msg.setSourceEntity(232U);
    msg.setDestination(49709U);
    msg.setDestinationEntity(40U);
    msg.value = 0.23815000905;
    msg.speed_units = 85U;

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
    msg.setTimeStamp(0.662388749521);
    msg.setSource(54824U);
    msg.setSourceEntity(137U);
    msg.setDestination(36142U);
    msg.setDestinationEntity(249U);
    msg.value = 0.265509938644;
    msg.speed_units = 218U;

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
    msg.setTimeStamp(0.455032203968);
    msg.setSource(20240U);
    msg.setSourceEntity(62U);
    msg.setDestination(47474U);
    msg.setDestinationEntity(154U);
    msg.value = 0.541812926364;

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
    msg.setTimeStamp(0.964498602314);
    msg.setSource(6645U);
    msg.setSourceEntity(219U);
    msg.setDestination(46089U);
    msg.setDestinationEntity(229U);
    msg.value = 0.865443953962;

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
    msg.setTimeStamp(0.523715575274);
    msg.setSource(29306U);
    msg.setSourceEntity(104U);
    msg.setDestination(38777U);
    msg.setDestinationEntity(149U);
    msg.value = 0.658332413729;

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
    msg.setTimeStamp(0.0943578952877);
    msg.setSource(40659U);
    msg.setSourceEntity(112U);
    msg.setDestination(11779U);
    msg.setDestinationEntity(43U);
    msg.value = 0.825288418298;

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
    msg.setTimeStamp(0.980305077223);
    msg.setSource(27174U);
    msg.setSourceEntity(191U);
    msg.setDestination(50993U);
    msg.setDestinationEntity(7U);
    msg.value = 0.954043801121;

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
    msg.setTimeStamp(0.537790542155);
    msg.setSource(39113U);
    msg.setSourceEntity(32U);
    msg.setDestination(56773U);
    msg.setDestinationEntity(36U);
    msg.value = 0.42771255557;

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
    msg.setTimeStamp(0.026913088538);
    msg.setSource(33128U);
    msg.setSourceEntity(179U);
    msg.setDestination(38409U);
    msg.setDestinationEntity(74U);
    msg.value = 0.507175705371;

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
    msg.setTimeStamp(0.968705818926);
    msg.setSource(1975U);
    msg.setSourceEntity(37U);
    msg.setDestination(38390U);
    msg.setDestinationEntity(73U);
    msg.value = 0.309422582465;

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
    msg.setTimeStamp(0.13365471329);
    msg.setSource(38999U);
    msg.setSourceEntity(147U);
    msg.setDestination(62156U);
    msg.setDestinationEntity(72U);
    msg.value = 0.740453322241;

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
    msg.setTimeStamp(0.890082381911);
    msg.setSource(32959U);
    msg.setSourceEntity(220U);
    msg.setDestination(55186U);
    msg.setDestinationEntity(158U);
    msg.start_lat = 0.358318025231;
    msg.start_lon = 0.521982462697;
    msg.start_z = 0.776221730052;
    msg.start_z_units = 175U;
    msg.end_lat = 0.144509006654;
    msg.end_lon = 0.762675521318;
    msg.end_z = 0.371442970347;
    msg.end_z_units = 82U;
    msg.speed = 0.314167300014;
    msg.speed_units = 190U;
    msg.lradius = 0.973977828912;
    msg.flags = 86U;

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
    msg.setTimeStamp(0.172499565288);
    msg.setSource(3033U);
    msg.setSourceEntity(203U);
    msg.setDestination(58292U);
    msg.setDestinationEntity(201U);
    msg.start_lat = 0.708695233433;
    msg.start_lon = 0.210269646643;
    msg.start_z = 0.234816067178;
    msg.start_z_units = 117U;
    msg.end_lat = 0.853577887082;
    msg.end_lon = 0.359125121332;
    msg.end_z = 0.708560317055;
    msg.end_z_units = 132U;
    msg.speed = 0.18990327012;
    msg.speed_units = 228U;
    msg.lradius = 0.293101891695;
    msg.flags = 66U;

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
    msg.setTimeStamp(0.0616132618746);
    msg.setSource(60436U);
    msg.setSourceEntity(147U);
    msg.setDestination(34779U);
    msg.setDestinationEntity(24U);
    msg.start_lat = 0.185235813431;
    msg.start_lon = 0.59981138701;
    msg.start_z = 0.888019522301;
    msg.start_z_units = 150U;
    msg.end_lat = 0.69519899571;
    msg.end_lon = 0.669524505855;
    msg.end_z = 0.980415902138;
    msg.end_z_units = 6U;
    msg.speed = 0.459352186976;
    msg.speed_units = 216U;
    msg.lradius = 0.721317565972;
    msg.flags = 16U;

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
    msg.setTimeStamp(0.284368685325);
    msg.setSource(31650U);
    msg.setSourceEntity(198U);
    msg.setDestination(59672U);
    msg.setDestinationEntity(3U);
    msg.x = 0.547491963535;
    msg.y = 0.205042746532;
    msg.z = 0.849626042122;
    msg.k = 0.375280010351;
    msg.m = 0.168096874944;
    msg.n = 0.93769347909;
    msg.flags = 40U;

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
    msg.setTimeStamp(0.615373446569);
    msg.setSource(3273U);
    msg.setSourceEntity(46U);
    msg.setDestination(49577U);
    msg.setDestinationEntity(173U);
    msg.x = 0.426517062784;
    msg.y = 0.641403002751;
    msg.z = 0.675070549386;
    msg.k = 0.968783463858;
    msg.m = 0.246214254011;
    msg.n = 0.923448648091;
    msg.flags = 56U;

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
    msg.setTimeStamp(0.7873830851);
    msg.setSource(8595U);
    msg.setSourceEntity(152U);
    msg.setDestination(3329U);
    msg.setDestinationEntity(197U);
    msg.x = 0.0525813933669;
    msg.y = 0.342677716895;
    msg.z = 0.703358433254;
    msg.k = 0.892309051029;
    msg.m = 0.562419829367;
    msg.n = 0.558219753978;
    msg.flags = 125U;

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
    msg.setTimeStamp(0.280517683212);
    msg.setSource(36391U);
    msg.setSourceEntity(130U);
    msg.setDestination(28784U);
    msg.setDestinationEntity(113U);
    msg.value = 0.154924107166;

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
    msg.setTimeStamp(0.951146928084);
    msg.setSource(30587U);
    msg.setSourceEntity(170U);
    msg.setDestination(54294U);
    msg.setDestinationEntity(97U);
    msg.value = 0.933395559776;

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
    msg.setTimeStamp(0.206023622344);
    msg.setSource(21690U);
    msg.setSourceEntity(12U);
    msg.setDestination(30137U);
    msg.setDestinationEntity(88U);
    msg.value = 0.231907332108;

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
    msg.setTimeStamp(0.440036140456);
    msg.setSource(35234U);
    msg.setSourceEntity(44U);
    msg.setDestination(34624U);
    msg.setDestinationEntity(132U);
    msg.u = 0.229330192475;
    msg.v = 0.0593572191882;
    msg.w = 0.29278705023;
    msg.p = 0.505999218904;
    msg.q = 0.227806997074;
    msg.r = 0.86076814062;
    msg.flags = 39U;

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
    msg.setTimeStamp(0.0391975343007);
    msg.setSource(51192U);
    msg.setSourceEntity(100U);
    msg.setDestination(10012U);
    msg.setDestinationEntity(92U);
    msg.u = 0.769307984725;
    msg.v = 0.669507416813;
    msg.w = 0.476172518419;
    msg.p = 0.362053864239;
    msg.q = 0.42893341237;
    msg.r = 0.333862866244;
    msg.flags = 45U;

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
    msg.setTimeStamp(0.641265508737);
    msg.setSource(40460U);
    msg.setSourceEntity(43U);
    msg.setDestination(48483U);
    msg.setDestinationEntity(125U);
    msg.u = 0.191475861033;
    msg.v = 0.0549957282123;
    msg.w = 0.776569249401;
    msg.p = 0.604106181801;
    msg.q = 0.0384210997168;
    msg.r = 0.387804430084;
    msg.flags = 195U;

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
    msg.setTimeStamp(0.239905190658);
    msg.setSource(60572U);
    msg.setSourceEntity(23U);
    msg.setDestination(64350U);
    msg.setDestinationEntity(36U);
    msg.start_lat = 0.899585721663;
    msg.start_lon = 0.891419952899;
    msg.start_z = 0.587800604954;
    msg.start_z_units = 94U;
    msg.end_lat = 0.0825036174793;
    msg.end_lon = 0.650625981815;
    msg.end_z = 0.770002682762;
    msg.end_z_units = 14U;
    msg.lradius = 0.919887131931;
    msg.flags = 3U;
    msg.x = 0.188975253037;
    msg.y = 0.0497315542117;
    msg.z = 0.388034377073;
    msg.vx = 0.166872639513;
    msg.vy = 0.544483889987;
    msg.vz = 0.821612315608;
    msg.course_error = 0.615013811987;
    msg.eta = 49457U;

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
    msg.setTimeStamp(0.502495461312);
    msg.setSource(59674U);
    msg.setSourceEntity(43U);
    msg.setDestination(48723U);
    msg.setDestinationEntity(149U);
    msg.start_lat = 0.448395455153;
    msg.start_lon = 0.639117338134;
    msg.start_z = 0.58252791736;
    msg.start_z_units = 23U;
    msg.end_lat = 0.0891429735535;
    msg.end_lon = 0.269977026608;
    msg.end_z = 0.83159100265;
    msg.end_z_units = 159U;
    msg.lradius = 0.767320354569;
    msg.flags = 52U;
    msg.x = 0.022034659926;
    msg.y = 0.947646032932;
    msg.z = 0.878935021969;
    msg.vx = 0.739854189155;
    msg.vy = 0.447933713518;
    msg.vz = 0.487713983875;
    msg.course_error = 0.89439101842;
    msg.eta = 47993U;

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
    msg.setTimeStamp(0.799971393334);
    msg.setSource(28659U);
    msg.setSourceEntity(230U);
    msg.setDestination(15167U);
    msg.setDestinationEntity(29U);
    msg.start_lat = 0.384089266261;
    msg.start_lon = 0.873649046005;
    msg.start_z = 0.290835195438;
    msg.start_z_units = 1U;
    msg.end_lat = 0.112685533899;
    msg.end_lon = 0.725915397905;
    msg.end_z = 0.141451299661;
    msg.end_z_units = 80U;
    msg.lradius = 0.692088010502;
    msg.flags = 185U;
    msg.x = 0.697302462411;
    msg.y = 0.0845077499799;
    msg.z = 0.942376122707;
    msg.vx = 0.0804313742474;
    msg.vy = 0.230834838596;
    msg.vz = 0.457612061236;
    msg.course_error = 0.375409117335;
    msg.eta = 18605U;

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
    msg.setTimeStamp(0.707676648417);
    msg.setSource(56192U);
    msg.setSourceEntity(139U);
    msg.setDestination(56194U);
    msg.setDestinationEntity(138U);
    msg.k = 0.106638079833;
    msg.m = 0.26871156364;
    msg.n = 0.34233440134;

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
    msg.setTimeStamp(0.042317464194);
    msg.setSource(65128U);
    msg.setSourceEntity(172U);
    msg.setDestination(64907U);
    msg.setDestinationEntity(226U);
    msg.k = 0.0476226646854;
    msg.m = 0.498529295685;
    msg.n = 0.989323579146;

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
    msg.setTimeStamp(0.455466169551);
    msg.setSource(32058U);
    msg.setSourceEntity(180U);
    msg.setDestination(65131U);
    msg.setDestinationEntity(216U);
    msg.k = 0.867225194117;
    msg.m = 0.700619695173;
    msg.n = 0.651941337237;

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
    msg.setTimeStamp(0.951832758901);
    msg.setSource(1587U);
    msg.setSourceEntity(129U);
    msg.setDestination(33955U);
    msg.setDestinationEntity(1U);
    msg.p = 0.756274629837;
    msg.i = 0.552103651321;
    msg.d = 0.8178720113;
    msg.a = 0.00770808707966;

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
    msg.setTimeStamp(0.890264558658);
    msg.setSource(3346U);
    msg.setSourceEntity(101U);
    msg.setDestination(59153U);
    msg.setDestinationEntity(31U);
    msg.p = 0.749278748502;
    msg.i = 0.92316852175;
    msg.d = 0.823667217257;
    msg.a = 0.637065018827;

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
    msg.setTimeStamp(0.382022689466);
    msg.setSource(63522U);
    msg.setSourceEntity(79U);
    msg.setDestination(14805U);
    msg.setDestinationEntity(167U);
    msg.p = 0.415626445026;
    msg.i = 0.641834195274;
    msg.d = 0.137335049938;
    msg.a = 0.774939335851;

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
    msg.setTimeStamp(0.133076259635);
    msg.setSource(34235U);
    msg.setSourceEntity(189U);
    msg.setDestination(42067U);
    msg.setDestinationEntity(236U);
    msg.op = 57U;

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
    msg.setTimeStamp(0.657842140504);
    msg.setSource(55350U);
    msg.setSourceEntity(252U);
    msg.setDestination(44688U);
    msg.setDestinationEntity(6U);
    msg.op = 247U;

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
    msg.setTimeStamp(0.42728205769);
    msg.setSource(5286U);
    msg.setSourceEntity(250U);
    msg.setDestination(10611U);
    msg.setDestinationEntity(40U);
    msg.op = 250U;

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
    msg.setTimeStamp(0.204193145323);
    msg.setSource(59282U);
    msg.setSourceEntity(25U);
    msg.setDestination(2901U);
    msg.setDestinationEntity(146U);
    msg.timeout = 7046U;
    msg.lat = 0.178589112269;
    msg.lon = 0.654337255772;
    msg.z = 0.553743606743;
    msg.z_units = 194U;
    msg.speed = 0.879174136459;
    msg.speed_units = 17U;
    msg.roll = 0.110189308409;
    msg.pitch = 0.128674547707;
    msg.yaw = 0.164724595161;
    msg.custom.assign("YZGQPOJGLKJRXUJZLSYZDECCTZXUFRIHSWTQTSZVHMVTHCVIFHPKV");

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
    msg.setTimeStamp(0.944784019451);
    msg.setSource(25474U);
    msg.setSourceEntity(4U);
    msg.setDestination(33258U);
    msg.setDestinationEntity(186U);
    msg.timeout = 13936U;
    msg.lat = 0.288454261296;
    msg.lon = 0.853743766227;
    msg.z = 0.174210276462;
    msg.z_units = 81U;
    msg.speed = 0.941352663058;
    msg.speed_units = 229U;
    msg.roll = 0.873036090571;
    msg.pitch = 0.919440606718;
    msg.yaw = 0.844471582266;
    msg.custom.assign("WBKHRBACWNEXECAWFVPXYZPAIEPMGXEXQGTMMSPTMLJCLEISADGNNKYTBUHULHKNBRKGGGPXXBDDFVHHRKGJMXFISRFLQHYGIDOEEWNLYTSIXDYJNITULHTZQRYZPVCNJSHTOVZSQCTISVFOUJBKLCFXFMEPBHUBOZROSYOYLQIYPNOSRDGVOKYGUWNDQNWFOLQAAJOCQRTWKULCDTBKMZIDVQJDAPCSWEWKBMFWMJCEMRAIVJFHZAVPRJZ");

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
    msg.setTimeStamp(0.976849643941);
    msg.setSource(32005U);
    msg.setSourceEntity(240U);
    msg.setDestination(27369U);
    msg.setDestinationEntity(179U);
    msg.timeout = 8316U;
    msg.lat = 0.3412668316;
    msg.lon = 0.645233883596;
    msg.z = 0.778504666951;
    msg.z_units = 178U;
    msg.speed = 0.814908167675;
    msg.speed_units = 115U;
    msg.roll = 0.795250460031;
    msg.pitch = 0.149914541978;
    msg.yaw = 0.672467940845;
    msg.custom.assign("IAVUGGNHUSEBPTIPBSYRRZTWOWSMCQHVKZLCBAAYESLXENBZJBWDPFXABZSZFKBFOPPVOGCCMLHJKLFUASWKHTIDCAWPGCPDUNJSBASNXVIFIZVTGXZOIYLAQY");

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
    msg.setTimeStamp(0.705170622059);
    msg.setSource(39403U);
    msg.setSourceEntity(73U);
    msg.setDestination(58387U);
    msg.setDestinationEntity(182U);
    msg.timeout = 15991U;
    msg.lat = 0.531653840392;
    msg.lon = 0.114349015229;
    msg.z = 0.823646120159;
    msg.z_units = 111U;
    msg.speed = 0.402872726252;
    msg.speed_units = 236U;
    msg.duration = 14076U;
    msg.radius = 0.0916718620531;
    msg.flags = 189U;
    msg.custom.assign("CQYDCGRUINIKXJEAUNOHOMBPKJQKXSYZFZWNUPBPZAEOLJZMCACYRPFVGDWYJMTRZBVPBJSMNFSMTPRWHEVQERDRTKLNKOZFHUYDCHBVFGAPOGQGVJNGURQUOKWFIAZSXQICJBXUIRJTYUQSXPOGKINMCMMCEDRHCVDHHMKQIUOSLEIDWTRNGBSZPG");

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
    msg.setTimeStamp(0.98445420396);
    msg.setSource(36277U);
    msg.setSourceEntity(94U);
    msg.setDestination(15859U);
    msg.setDestinationEntity(202U);
    msg.timeout = 21990U;
    msg.lat = 0.8224310905;
    msg.lon = 0.738649137969;
    msg.z = 0.0429732900049;
    msg.z_units = 35U;
    msg.speed = 0.916847848555;
    msg.speed_units = 152U;
    msg.duration = 20368U;
    msg.radius = 0.526684305412;
    msg.flags = 114U;
    msg.custom.assign("BFEVXHZHRUBXSNOROOBITWJLHTRBFRFUUFFDAQDPEQKLTNVWPZZSKFWSQAIHHEVVMYLKWPWCMQISGTGGWSUPHEJOPYVZYDINGEJAHKZOPWYNLSGKKNEBSRYCBGYJTUAVAPMSLXEWVCBDDXMPUDTRYZJTCUJAEZLAYOVGDICXAYLDGVHSFOCKNNIDGKXXXZYJZIKKFQMVLIFPMJAHXDCIMWRURLFWEMROQBUQJTJONNUME");

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
    msg.setTimeStamp(0.0417798041611);
    msg.setSource(41648U);
    msg.setSourceEntity(80U);
    msg.setDestination(17649U);
    msg.setDestinationEntity(162U);
    msg.timeout = 8531U;
    msg.lat = 0.0860468710566;
    msg.lon = 0.648792932265;
    msg.z = 0.889958384621;
    msg.z_units = 169U;
    msg.speed = 0.40844324503;
    msg.speed_units = 216U;
    msg.duration = 22689U;
    msg.radius = 0.972755324766;
    msg.flags = 246U;
    msg.custom.assign("RSDWKSKWIXILUXUVTOAFXRLYUTFNWERONXAARMHVCNZACMRFDHXMKGRJEYNWZSQZOPXYKIXQUQODNJVCBZCUXCDOFVAVJHBYDJFEIEDMBXGIZIQTOKQUCPJTELWBBGKLWENSVGLVABSHDFPBLKMRRCPUPPHKZQTJYHWTCGMZSCHTGLZUUQROEQFPTEJ");

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
    msg.setTimeStamp(0.0630619579839);
    msg.setSource(33558U);
    msg.setSourceEntity(154U);
    msg.setDestination(52245U);
    msg.setDestinationEntity(197U);
    msg.custom.assign("WFCMUFNHOASWNXRNWVVHLEUVCRSRLXFLZSVHQNTZTCJAUWCPWLPOYUDBPZEYIZFATNLECYGKYACHRKGJOXEBJLTKKGWAGOHBDTCNPDFCKUUJGFESJSHNRWZEZMOXZABAQUYQSTQFDTQRENMQOMVAVPQBZMPTJZIYNRAHVFRTICUYLPVJKIUKSXYQRHO");

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
    msg.setTimeStamp(0.730024640125);
    msg.setSource(576U);
    msg.setSourceEntity(172U);
    msg.setDestination(17032U);
    msg.setDestinationEntity(224U);
    msg.custom.assign("IWIEOXVROTNYZLNCAVYDTMDKSSRTIISLDQRDYFLJWTPIWJRPGGJOQAFUTLHTXUKEMMZCZBXORYTHWCYZBZCMUJXAUXUZNQVCFDSPLHDWECQMPPAPXHEFKNKWEXBOCJPTHXGVSZMLHKDVHQYKINWBQNWC");

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
    msg.setTimeStamp(0.299048436439);
    msg.setSource(48976U);
    msg.setSourceEntity(233U);
    msg.setDestination(20733U);
    msg.setDestinationEntity(147U);
    msg.custom.assign("TSQQXTYMXDPKREWXFVYZBACYVUHBPDEHOLLHFZENYWADYFLEIOKCJFCWMPOGKSRJEANQOQGDIBHXRYWMLEDZYHZJYRUSFOVHOCQZVRKCXBJMTSKFCJFPJRIZHWTWACIXTSLPIAUDYTBKWNSQHVNCMUKAMSJGLPSXNEBTSIRTYONHQMOBIJGPVPABUZLBGOMREMWHDOLUCQAFGXXNZXLDQAGFSGQKDLVNBTVNWVCAIPZDUMZTJUK");

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
    msg.setTimeStamp(0.175259258171);
    msg.setSource(36562U);
    msg.setSourceEntity(62U);
    msg.setDestination(13766U);
    msg.setDestinationEntity(110U);
    msg.timeout = 30158U;
    msg.lat = 0.730678751823;
    msg.lon = 0.180404411187;
    msg.z = 0.250310164863;
    msg.z_units = 107U;
    msg.duration = 26815U;
    msg.speed = 0.540338222975;
    msg.speed_units = 32U;
    msg.type = 199U;
    msg.radius = 0.596915555283;
    msg.length = 0.780570634764;
    msg.bearing = 0.271246912588;
    msg.direction = 16U;
    msg.custom.assign("KRQYQMNKEYSBKCWWPAELSFXKFZVPFXTUSUFIOXLFOXMXBTHPVKGCRZARZDCPBJVGQFYLFYTXDNCWATVEBA");

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
    msg.setTimeStamp(0.102940128009);
    msg.setSource(55696U);
    msg.setSourceEntity(0U);
    msg.setDestination(35694U);
    msg.setDestinationEntity(232U);
    msg.timeout = 61708U;
    msg.lat = 0.735222414562;
    msg.lon = 0.887166029298;
    msg.z = 0.816139326312;
    msg.z_units = 195U;
    msg.duration = 60457U;
    msg.speed = 0.885378050337;
    msg.speed_units = 234U;
    msg.type = 56U;
    msg.radius = 0.751192596848;
    msg.length = 0.17744267594;
    msg.bearing = 0.233114048545;
    msg.direction = 7U;
    msg.custom.assign("GFERLXUSOGRQTDQBWTTJEBYJMRSAPHOKYZDOSAHRBWJOBHLXPTKZECYLGNVLYHKWFXLIZGIOHLUBFIKGWFDFJMCTLQVCSHXQZQNKGVXGWNITCNSSEYUKKMRQWDWZEWCVHPUQMPXGAZZRPFCVVNTFMUVDIRQWLIVPKDACLNZBFJPUYRESSB");

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
    msg.setTimeStamp(0.0762756557289);
    msg.setSource(52873U);
    msg.setSourceEntity(237U);
    msg.setDestination(22280U);
    msg.setDestinationEntity(51U);
    msg.timeout = 43491U;
    msg.lat = 0.421588010579;
    msg.lon = 0.669216858953;
    msg.z = 0.366719799372;
    msg.z_units = 51U;
    msg.duration = 5576U;
    msg.speed = 0.854579928498;
    msg.speed_units = 53U;
    msg.type = 94U;
    msg.radius = 0.345734927563;
    msg.length = 0.633439439264;
    msg.bearing = 0.261395822178;
    msg.direction = 172U;
    msg.custom.assign("SRDEWICMVJSXKKFAXHFVASNUJBXZRQAYPDGPOWUYBIQKHZDXDRWRVCLHBOLRWJKTSJFNHCEQIBZLABGURETUXPLWCQLLRUFJTAO");

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
    msg.setTimeStamp(0.889923965888);
    msg.setSource(4502U);
    msg.setSourceEntity(44U);
    msg.setDestination(139U);
    msg.setDestinationEntity(177U);
    msg.duration = 46597U;
    msg.custom.assign("ONAQYTLLXHUEGWLPKRXN");

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
    msg.setTimeStamp(0.833618876403);
    msg.setSource(24667U);
    msg.setSourceEntity(46U);
    msg.setDestination(58964U);
    msg.setDestinationEntity(174U);
    msg.duration = 35776U;
    msg.custom.assign("WLYRXAJGFSHYLIPYXBDGPJRUFVKFHKWZIWVHMYEIDGBLUXPVHRCBWLSJRNDDCMEAACIWL");

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
    msg.setTimeStamp(0.683925425012);
    msg.setSource(35796U);
    msg.setSourceEntity(166U);
    msg.setDestination(52817U);
    msg.setDestinationEntity(204U);
    msg.duration = 15523U;
    msg.custom.assign("HWQCANJBUNURFRSLUJEYPSUJBAKDEFKYVNILYJDPQGRZMJDLVWEMDLLWXYMGYMTEHDCJBVBZPCFYXXQVOHPFPLZTZDILMBHGGPSNFDPWFBTZNBGKEEULVZKPWCXEZZMROPOIIAWFHNHRCXVWSVUIIAQLEIQTWUGOQKN");

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
    msg.setTimeStamp(0.128324837806);
    msg.setSource(64422U);
    msg.setSourceEntity(162U);
    msg.setDestination(41888U);
    msg.setDestinationEntity(66U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.353903772526;
    msg.control.set(tmp_msg_0);
    msg.duration = 28005U;
    msg.custom.assign("JRFYBQDYEGBYDLGAUWZFTUXRINVUXOACZZSTQOHRSRIEZMERBKWACIPIHLIFGQMVLNSGEADGPSTBFGBKJMWHCKOYZKRQJUILYCKSWCKZOKPGPJKYNQPNMZFSTXMBDTOEAJRYESUDMLJXOVFQXSQBRUVAQMVEWHPJCUURWNGVMFWAIDLH");

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
    msg.setTimeStamp(0.157339988673);
    msg.setSource(47605U);
    msg.setSourceEntity(133U);
    msg.setDestination(39971U);
    msg.setDestinationEntity(206U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.371087337155;
    tmp_msg_0.speed_units = 77U;
    msg.control.set(tmp_msg_0);
    msg.duration = 42653U;
    msg.custom.assign("KELGIDNOIDWYASTQHYDAFWAYENAZVKUEPCEFFLECUUORKDMVNVQW");

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
    msg.setTimeStamp(0.19917142695);
    msg.setSource(15836U);
    msg.setSourceEntity(185U);
    msg.setDestination(13665U);
    msg.setDestinationEntity(141U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.924705688982;
    msg.control.set(tmp_msg_0);
    msg.duration = 4708U;
    msg.custom.assign("AXBONCUVZRUAKKSQGSEQLU");

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
    msg.setTimeStamp(0.390464259888);
    msg.setSource(27966U);
    msg.setSourceEntity(245U);
    msg.setDestination(11188U);
    msg.setDestinationEntity(219U);
    msg.timeout = 54753U;
    msg.lat = 0.366305072287;
    msg.lon = 0.505411113536;
    msg.z = 0.166326012133;
    msg.z_units = 4U;
    msg.speed = 0.532136438096;
    msg.speed_units = 243U;
    msg.bearing = 0.58368227635;
    msg.cross_angle = 0.668131281588;
    msg.width = 0.228940551406;
    msg.length = 0.648445507354;
    msg.hstep = 0.361406621188;
    msg.coff = 38U;
    msg.alternation = 231U;
    msg.flags = 123U;
    msg.custom.assign("CABPDXQFXJEYEVHAOWXJUHQFDWVOWLAWCMCMBXBJZVDEQBRONTZCIWGPJSWDSYLYRFLL");

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
    msg.setTimeStamp(0.0727001478134);
    msg.setSource(62646U);
    msg.setSourceEntity(210U);
    msg.setDestination(23470U);
    msg.setDestinationEntity(60U);
    msg.timeout = 35663U;
    msg.lat = 0.509937617772;
    msg.lon = 0.967171310973;
    msg.z = 0.809306558917;
    msg.z_units = 34U;
    msg.speed = 0.404419015728;
    msg.speed_units = 92U;
    msg.bearing = 0.388388456349;
    msg.cross_angle = 0.979498691845;
    msg.width = 0.189752144685;
    msg.length = 0.28321616533;
    msg.hstep = 0.311092522158;
    msg.coff = 143U;
    msg.alternation = 2U;
    msg.flags = 62U;
    msg.custom.assign("SFLPEYNFNRYRUAFWHWMIKCQIQXJFJSKBTZUANKRKAZJUTUAIWDOGRWZOTSNADPHWQEWPDXPTUCEUPFDNSGHEHSNDGNBMBXLDPMXQALKEAWSJTRWZB");

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
    msg.setTimeStamp(0.57058299791);
    msg.setSource(29888U);
    msg.setSourceEntity(10U);
    msg.setDestination(51097U);
    msg.setDestinationEntity(219U);
    msg.timeout = 3202U;
    msg.lat = 0.971643115276;
    msg.lon = 0.486658798618;
    msg.z = 0.545956937185;
    msg.z_units = 23U;
    msg.speed = 0.972395720166;
    msg.speed_units = 75U;
    msg.bearing = 0.929767671478;
    msg.cross_angle = 0.763188549961;
    msg.width = 0.945760741859;
    msg.length = 0.43296657176;
    msg.hstep = 0.383536754157;
    msg.coff = 111U;
    msg.alternation = 63U;
    msg.flags = 163U;
    msg.custom.assign("PKLAPZFTHDOANKHUHVSISQYLMTBNPQMJGVEOLXCKLJIFTTVSQHGUKTYCJJEXHRULLBXBMVWZBMDZWCTMJBAKRVKRXSFSIAJPTLUAPHIXNGZFQCYJSJEXIMUBMYZQYFQHARULSUFGDRD");

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
    msg.setTimeStamp(0.461175195753);
    msg.setSource(19637U);
    msg.setSourceEntity(235U);
    msg.setDestination(53123U);
    msg.setDestinationEntity(61U);
    msg.timeout = 58835U;
    msg.lat = 0.107695344762;
    msg.lon = 0.18371218328;
    msg.z = 0.627276116928;
    msg.z_units = 225U;
    msg.speed = 0.417535411409;
    msg.speed_units = 107U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.602155463823;
    tmp_msg_0.y = 0.502578766541;
    tmp_msg_0.z = 0.457416177873;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("RGTBDZLTXBWKSKHREOWITSPKDAFWNAACUXUMFKCEPYTSCAEOWGKNVMGZTDOVVJHEKMHGQXRSHYQEODGDDZEWIWGLNZTOJDVKSNQZILLKPRYFUCVQUVFWKQCRCGBHICJFSZPUIQVOQMYTGYGHVXZCXFK");

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
    msg.setTimeStamp(0.601277709686);
    msg.setSource(29805U);
    msg.setSourceEntity(190U);
    msg.setDestination(44005U);
    msg.setDestinationEntity(214U);
    msg.timeout = 1125U;
    msg.lat = 0.511356921711;
    msg.lon = 0.958150460183;
    msg.z = 0.240352896983;
    msg.z_units = 78U;
    msg.speed = 0.910558290256;
    msg.speed_units = 72U;
    msg.custom.assign("GEECBYNSUWDJZMQUGYBDTRHXEWBELQWYJDDSDHZWJYMRBKYKWHGIVSWGLFTTLAXCOSFXEZVAOMTAZSVNGUUTCAVNRLNBRRIHLZMDWGTPBLUWONYDSKFQMNOUJOJAKUBWZQQTFVOPMENBKWHLEMGRJNOSVAIPXSEQNRAPKKHFXLPXAFCHCJVROCCZQTYK");

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
    msg.setTimeStamp(0.0959754493855);
    msg.setSource(26473U);
    msg.setSourceEntity(71U);
    msg.setDestination(5496U);
    msg.setDestinationEntity(180U);
    msg.timeout = 370U;
    msg.lat = 0.948305563422;
    msg.lon = 0.74834404982;
    msg.z = 0.379193757365;
    msg.z_units = 144U;
    msg.speed = 0.343659883208;
    msg.speed_units = 252U;
    msg.custom.assign("MQDHGSTAATAMUYJZCRONWZHSDDIKCKMCHNJAMJABQXSCPIWKMDDCAAPXENGZYRPJUTHXVVRBJMFXXFPWKGMFLSOYZVWFTOEBOLSXIFWVITZJGDKETSEWBPFEIYBTIFMVDCLQQGUXYNSUHKKOWBHZZQJVLLZAFIPHIPKNYGUEIEQTLLSMZOPZNBAGXBOOUBRMQQKRVPHIQJUUDLEPCY");

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
    msg.setTimeStamp(0.944016918704);
    msg.setSource(4695U);
    msg.setSourceEntity(134U);
    msg.setDestination(20002U);
    msg.setDestinationEntity(127U);
    msg.x = 0.212011631986;
    msg.y = 0.131058613292;
    msg.z = 0.236553029501;

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
    msg.setTimeStamp(0.0410980670095);
    msg.setSource(45659U);
    msg.setSourceEntity(146U);
    msg.setDestination(18611U);
    msg.setDestinationEntity(252U);
    msg.x = 0.501528403805;
    msg.y = 0.442239406718;
    msg.z = 0.191283528736;

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
    msg.setTimeStamp(0.971263850323);
    msg.setSource(1179U);
    msg.setSourceEntity(93U);
    msg.setDestination(63806U);
    msg.setDestinationEntity(116U);
    msg.x = 0.359094065303;
    msg.y = 0.691226583618;
    msg.z = 0.229492036479;

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
    msg.setTimeStamp(0.307475746798);
    msg.setSource(5131U);
    msg.setSourceEntity(209U);
    msg.setDestination(10642U);
    msg.setDestinationEntity(115U);
    msg.timeout = 32308U;
    msg.lat = 0.771010982254;
    msg.lon = 0.861275636099;
    msg.z = 0.852501886408;
    msg.z_units = 154U;
    msg.amplitude = 0.726729153131;
    msg.pitch = 0.482960923184;
    msg.speed = 0.891883796038;
    msg.speed_units = 95U;
    msg.custom.assign("MSXLFQHFRDRCAHBRTONDPYJXJXQBBBIPUMWZVRNNQWXFNODSHXLMRPUKCDMVVLKZUZEECAWLYPZUCPISILXASTIPBCOBNNRNVCZSMBQYQPKYIQMUWGHZPGBBV");

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
    msg.setTimeStamp(0.797850725009);
    msg.setSource(7950U);
    msg.setSourceEntity(34U);
    msg.setDestination(46891U);
    msg.setDestinationEntity(71U);
    msg.timeout = 65200U;
    msg.lat = 0.265228790435;
    msg.lon = 0.836937469024;
    msg.z = 0.855574219367;
    msg.z_units = 32U;
    msg.amplitude = 0.301057126985;
    msg.pitch = 0.299710576662;
    msg.speed = 0.78635622384;
    msg.speed_units = 160U;
    msg.custom.assign("ZTAYVNIDODKGZQEAYGBPYDVZEZGOSHGKQSRTPVERLIQLRTDXDELC");

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
    msg.setTimeStamp(0.885489384174);
    msg.setSource(51800U);
    msg.setSourceEntity(149U);
    msg.setDestination(16622U);
    msg.setDestinationEntity(132U);
    msg.timeout = 56284U;
    msg.lat = 0.892295596919;
    msg.lon = 0.0519686734549;
    msg.z = 0.253265049096;
    msg.z_units = 120U;
    msg.amplitude = 0.0214132622052;
    msg.pitch = 0.873234905689;
    msg.speed = 0.640050858064;
    msg.speed_units = 201U;
    msg.custom.assign("JCJAZJLKWYJVIYDMIHEEBOHNXKBTIRPXRQIGUCTVVQTEXWXTBAFBMUVGG");

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
    msg.setTimeStamp(0.448969533083);
    msg.setSource(53546U);
    msg.setSourceEntity(183U);
    msg.setDestination(40498U);
    msg.setDestinationEntity(52U);

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
    msg.setTimeStamp(0.971846316577);
    msg.setSource(13817U);
    msg.setSourceEntity(253U);
    msg.setDestination(16064U);
    msg.setDestinationEntity(103U);

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
    msg.setTimeStamp(0.0889015509391);
    msg.setSource(48314U);
    msg.setSourceEntity(235U);
    msg.setDestination(46645U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.362015446114);
    msg.setSource(50759U);
    msg.setSourceEntity(123U);
    msg.setDestination(1396U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.712510032091;
    msg.lon = 0.170958068341;
    msg.z = 0.523187482346;
    msg.z_units = 89U;
    msg.radius = 0.629385024699;
    msg.duration = 22512U;
    msg.speed = 0.640502009719;
    msg.speed_units = 88U;
    msg.custom.assign("NQUPUDZZAMZEWXXJBBLWIWHJBVOKQACURFHQCRYFERTGFCBGZPZHTNELYURYZAZIKYJFRVFFODWWVNGUJJEACOLAUCOKVQPTAGJRDHPJMLIOYSVQLRQMRNNEAYKNVIOIPXOHCTTLQRDKAKMKDBAYNBTJOODMBFWXBQGISXQHTMULJUWPMCSDPIZXHTFHERKSJNEFSVVWPKDSBLYZONX");

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
    msg.setTimeStamp(0.876833123458);
    msg.setSource(24967U);
    msg.setSourceEntity(18U);
    msg.setDestination(26512U);
    msg.setDestinationEntity(45U);
    msg.lat = 0.140278351388;
    msg.lon = 0.0326529446603;
    msg.z = 0.341482201968;
    msg.z_units = 202U;
    msg.radius = 0.867813475508;
    msg.duration = 44574U;
    msg.speed = 0.857154887756;
    msg.speed_units = 238U;
    msg.custom.assign("MDTHWYEGXTWSGRNOZAAMUUIUDRLFVMIKWKWJRMMDQYZMVABCTEPPJBLSQGTXKKBGJYHCLYKXWRNLGZNFIUHVQJUHPENMCRSXFQOBULLWANGULNVTRAIQQZGFWOFSIEEQUZDYXAQPXOAHHLUNZFBWSZXWZDVCNFOAOSCPVCLJKUPDIOGCBCTJYMCDBMHXCJXEXIRIZRRVAIKGSVQHYEVTYNKJSDFNEDOEPPD");

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
    msg.setTimeStamp(0.38929263138);
    msg.setSource(10094U);
    msg.setSourceEntity(27U);
    msg.setDestination(6820U);
    msg.setDestinationEntity(122U);
    msg.lat = 0.569562031561;
    msg.lon = 0.688551419693;
    msg.z = 0.158357997247;
    msg.z_units = 49U;
    msg.radius = 0.332209637192;
    msg.duration = 5893U;
    msg.speed = 0.592790389547;
    msg.speed_units = 55U;
    msg.custom.assign("AZBGVZVYGGSTTBSPFXDLJEKNUEWPYJXZFFQTEEPZODDUWXDJOIQIPGSLWYHOOSZIVHGRRAZYQSHQQAJMPUCGTDDVXGAROTOFIXCLQFLCYINWVRPPPOTWKSVXTABBLJDMXLASDZICAETYXOUPFFURIPHGJUBYNCEKKMFEMBNNRNBYRONSZGKTXMHBSWMETZXSCOQHLFYMRQWBMNARHUUYUVVWJGHJDJKEKVJC");

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
    msg.setTimeStamp(0.734916162768);
    msg.setSource(24014U);
    msg.setSourceEntity(81U);
    msg.setDestination(11016U);
    msg.setDestinationEntity(41U);
    msg.timeout = 54896U;
    msg.flags = 117U;
    msg.lat = 0.810869592171;
    msg.lon = 0.535516306703;
    msg.start_z = 0.429961564348;
    msg.start_z_units = 166U;
    msg.end_z = 0.50391100753;
    msg.end_z_units = 204U;
    msg.radius = 0.744248169562;
    msg.speed = 0.0430484847875;
    msg.speed_units = 112U;
    msg.custom.assign("RZDYXFNQQZMQVHCQZEKTGFXXNLCENUGFTYOCAZUDDXHGKFDPARYSTNEHJMGLJQKRSDNZKHYMPXIFEMICNJDMVPIBQGSWPBCTZXCRUBAQIUWJFTRFPUDOVQCBLJTUDRYCBVLQSNVLYYGHUNXLLAPAWTMMHDSKJLASYHWPVRAEJZFSKNEWWDLIKZHKOKBTOBRUEANICOCJALPUIUGWVWPORMRBSKZEBOGJBZOG");

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
    msg.setTimeStamp(0.279492184819);
    msg.setSource(24837U);
    msg.setSourceEntity(189U);
    msg.setDestination(32226U);
    msg.setDestinationEntity(249U);
    msg.timeout = 5609U;
    msg.flags = 53U;
    msg.lat = 0.863639687399;
    msg.lon = 0.632255971274;
    msg.start_z = 0.628617339641;
    msg.start_z_units = 239U;
    msg.end_z = 0.275063900787;
    msg.end_z_units = 147U;
    msg.radius = 0.307445582794;
    msg.speed = 0.150412160066;
    msg.speed_units = 110U;
    msg.custom.assign("WRCYHEXIFFICHOWJNBLVQLYMJUCKCDCMVZOVGVDFFUSJOGGATZVWUFHYAUSGYPTLYIDMBIXVTCRLOUCDMNSWEJOEPKWSPRAPGTBYJZDKXPWSTBEGEQFCQVPHAKAPNJTASULQUQXYGYSYFNDNCIOLBMSMAORKKHZBYRKJXRPURITMRWEBWBRRMFXUQEDHNOIZDVLZSPLILJCWVDOAZQMFOMZTUHX");

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
    msg.setTimeStamp(0.617780670035);
    msg.setSource(35217U);
    msg.setSourceEntity(217U);
    msg.setDestination(38854U);
    msg.setDestinationEntity(235U);
    msg.timeout = 17808U;
    msg.flags = 188U;
    msg.lat = 0.00309423577542;
    msg.lon = 0.995514935258;
    msg.start_z = 0.890172685239;
    msg.start_z_units = 30U;
    msg.end_z = 0.87772054844;
    msg.end_z_units = 80U;
    msg.radius = 0.0132918435581;
    msg.speed = 0.856368637702;
    msg.speed_units = 229U;
    msg.custom.assign("OUUBPNNVSAIBCLZHPTXUXBABDHIDNUKUZLNJENYVQMQCKIMD");

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
    msg.setTimeStamp(0.626490989964);
    msg.setSource(44013U);
    msg.setSourceEntity(187U);
    msg.setDestination(15487U);
    msg.setDestinationEntity(214U);
    msg.timeout = 41174U;
    msg.lat = 0.800061521972;
    msg.lon = 0.0301037057735;
    msg.z = 0.0698103193993;
    msg.z_units = 78U;
    msg.speed = 0.389252359372;
    msg.speed_units = 152U;
    msg.custom.assign("OCNYFLMFDOKXETJZSUMNDCQGWQAYIKBFKFJESXHKCYFSIYECMFBERRGIXJVOJIADHRVLSELGWMLJEKBBWDDOAFDPNJGNTBGIKRUIWWUQZVTLORJZVQXHHAZPXREELZQAHVPXHFZMEVOKNLYQUEPTSKTMCZNMGPVCIWUZNNXILBXDBPWSSAOCDWNWPRGHD");

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
    msg.setTimeStamp(0.587880770863);
    msg.setSource(22463U);
    msg.setSourceEntity(241U);
    msg.setDestination(5657U);
    msg.setDestinationEntity(114U);
    msg.timeout = 63154U;
    msg.lat = 0.749252955111;
    msg.lon = 0.703104650446;
    msg.z = 0.450371037057;
    msg.z_units = 169U;
    msg.speed = 0.500185251512;
    msg.speed_units = 52U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.732209233132;
    tmp_msg_0.y = 0.56124724948;
    tmp_msg_0.z = 0.734155267811;
    tmp_msg_0.t = 0.728110295928;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PAMCNXWOAZSDENHVLGFRLIIIQBYTAOEGUIPDMLHZBDDYYXJLQVNWXBOVHEHEHFSVVLQFWDPSGHYDFOFCJTOLNLCBPEECALNT");

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
    msg.setTimeStamp(0.713477673769);
    msg.setSource(26371U);
    msg.setSourceEntity(94U);
    msg.setDestination(55898U);
    msg.setDestinationEntity(227U);
    msg.timeout = 36432U;
    msg.lat = 0.91286693355;
    msg.lon = 0.0738434041638;
    msg.z = 0.362569234629;
    msg.z_units = 85U;
    msg.speed = 0.613586747688;
    msg.speed_units = 113U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0604867243967;
    tmp_msg_0.y = 0.141327629944;
    tmp_msg_0.z = 0.920491766708;
    tmp_msg_0.t = 0.973359411185;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("JMXUEGNAAFZLHSSMZYTBHSVVOWHBTTNXVTHFJBCEPFWLUNPNSRAZQZUZUDLITJNRWQRKQWTXMHIPIDCCPZIDAANYCZJMGJHUMJPIQVHYODEODKFIVEROUNYTDMX");

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
    msg.setTimeStamp(0.791299436736);
    msg.setSource(32463U);
    msg.setSourceEntity(78U);
    msg.setDestination(56293U);
    msg.setDestinationEntity(210U);
    msg.x = 0.184033626247;
    msg.y = 0.273523568102;
    msg.z = 0.132854897361;
    msg.t = 0.702102118446;

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
    msg.setTimeStamp(0.548585168871);
    msg.setSource(49942U);
    msg.setSourceEntity(125U);
    msg.setDestination(46504U);
    msg.setDestinationEntity(49U);
    msg.x = 0.824778896187;
    msg.y = 0.41454235507;
    msg.z = 0.999799073218;
    msg.t = 0.853754992029;

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
    msg.setTimeStamp(0.122089458016);
    msg.setSource(38717U);
    msg.setSourceEntity(149U);
    msg.setDestination(16815U);
    msg.setDestinationEntity(209U);
    msg.x = 0.129189547521;
    msg.y = 0.654102847366;
    msg.z = 0.77351392942;
    msg.t = 0.999177802142;

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
    msg.setTimeStamp(0.393925524504);
    msg.setSource(51083U);
    msg.setSourceEntity(161U);
    msg.setDestination(26537U);
    msg.setDestinationEntity(169U);
    msg.timeout = 54173U;
    msg.name.assign("IIAMMUAPULBGHCAZXXPHPDJSHTIQPTPIOFJLZGUMEOTQLQRNBVZIBOUQTAZFMDSHTDCUONQVSBJFNCCDLTYGHESQEKHYCPNIESAZNQJDVTIQWILVNUCYWDVGSZPMOARMFBOCGOSLDUBDAUFWKWVLBBAMRJKJKUSIUKYXHPRLZYRLYQJETKZXWANAKPTGYDMGECJFFFRVENTYGYBHGXFEWRWJOIESRLWHKXKXXOXYMNXWGDRPCWMN");
    msg.custom.assign("CMZWHEYFORPOFBKDSCFGKTXPFFPVWSTUYIETNOPCHUIZQSYVWPQJEUBWGATIYZOKQAXMCRQCANBUMMDGIBHJMDMYIEDZJLZEMCKNHUTKHMVHR");

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
    msg.setTimeStamp(0.550411511442);
    msg.setSource(17787U);
    msg.setSourceEntity(95U);
    msg.setDestination(32166U);
    msg.setDestinationEntity(53U);
    msg.timeout = 48919U;
    msg.name.assign("BETGAPMYCOJXEKNQXOSTWYMYKMXNHIXRRTSITWJTRGCMJBQDQIWEPHSMUDKIHVHEGKUSJWOSOANFFQJPXHLBOXCZDDGBNFPVMKBOXLUCE");
    msg.custom.assign("YMNUGFGKFRUZXTUNLVP");

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
    msg.setTimeStamp(0.282707189643);
    msg.setSource(40857U);
    msg.setSourceEntity(11U);
    msg.setDestination(27066U);
    msg.setDestinationEntity(19U);
    msg.timeout = 17381U;
    msg.name.assign("RGFJOFHLUMCKPEYPXDKLFRVZSQRMGSJJLMAGRLYOIEWCNJEEBPNJDEKJNQCMCRHQERHABUOAFUHDCBZAUISWTKSPAKZLVMCGMRYAYDKXVVNXUOFQZGUMRXASZWOZVBBJFSEHTDFCCSWRYPMAM");
    msg.custom.assign("CJNKTMHNQRRPDTZSMYORCOGMAFTPAZWCQOEWGBQEFIWKONNONRMLFWMCGAIXRZDNRPIZYFGPOVFJSDVOJKJBJZFYSUEMZDXIIXUQUXTPXKUBQUCKHJLHIPMACIDATELWOZLETESNGMKVQMXVHYEAGABBDNTCPTESISWULFTOOGAFRQRXPXHHVDUVHJGDWYINKBLVPCSYLZDVUBYCX");

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
    msg.setTimeStamp(0.486269805549);
    msg.setSource(59200U);
    msg.setSourceEntity(153U);
    msg.setDestination(3979U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.56149787817;
    msg.lon = 0.696089536707;
    msg.z = 0.832693269401;
    msg.z_units = 15U;
    msg.speed = 0.445424305241;
    msg.speed_units = 243U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 4812U;
    tmp_msg_0.off_x = 0.658918374762;
    tmp_msg_0.off_y = 0.00653438880383;
    tmp_msg_0.off_z = 0.747199529811;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.990751478963;
    msg.custom.assign("NYUPXKFMHKMAWDXKPWYYTOFGSDRIFAMZFPSMJPZMQEQQZBPBFEPKVPIYWJNGGSRYIAAOTEXUDJXRUFEXYTJAWXBTVWBRKUTJGTKLBPOWMRGQNRPBNQJOCGC");

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
    msg.setTimeStamp(0.440282767113);
    msg.setSource(37226U);
    msg.setSourceEntity(69U);
    msg.setDestination(11115U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.478001618649;
    msg.lon = 0.708555011432;
    msg.z = 0.787603204224;
    msg.z_units = 220U;
    msg.speed = 0.349448534588;
    msg.speed_units = 168U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.37075804017;
    tmp_msg_0.y = 0.321498756191;
    tmp_msg_0.z = 0.844100758357;
    tmp_msg_0.t = 0.583520340817;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 58672U;
    tmp_msg_1.off_x = 0.0683353311434;
    tmp_msg_1.off_y = 0.501335021205;
    tmp_msg_1.off_z = 0.33163670287;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.18774753959;
    msg.custom.assign("IRPLQRJNIEVCKGTNCIBJHMTCLMMNVBZUXPKEBTBTKBMZSBRVXQLGOJLAPDFPUXOWOZUXAHWSXJVAZKMWZNASKUPQMEDSVOBX");

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
    msg.setTimeStamp(0.480674802547);
    msg.setSource(54245U);
    msg.setSourceEntity(191U);
    msg.setDestination(55209U);
    msg.setDestinationEntity(35U);
    msg.lat = 0.980580641944;
    msg.lon = 0.548663324662;
    msg.z = 0.810336698825;
    msg.z_units = 23U;
    msg.speed = 0.0471078052203;
    msg.speed_units = 37U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0671971906319;
    tmp_msg_0.y = 0.108128257693;
    tmp_msg_0.z = 0.0658249011018;
    tmp_msg_0.t = 0.88212817628;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 5034U;
    tmp_msg_1.off_x = 0.432076924587;
    tmp_msg_1.off_y = 0.853660974067;
    tmp_msg_1.off_z = 0.395312480826;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.336214909747;
    msg.custom.assign("FUMLPKRHTHOVMEGNPNSLIBHWIBSGPMUSGOYSDDNEXHVOPZGARXZERBMRKYYZIDMTOSWYKDIYLGCAEJXDSFYNRCGIWVDFXQSRLEJCDWDKZUQKVSLKXBWOHKKWYMVANQXQTJCCUOCTBRBMINOVFUMSQVOAZHZFCBZFOTLRUTODHLVNTQWNJYIALEGDGWYULHGIKZKEMPZCJGFUJARFWBJVLESXANJTUC");

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
    msg.setTimeStamp(0.282994397273);
    msg.setSource(14578U);
    msg.setSourceEntity(101U);
    msg.setDestination(35413U);
    msg.setDestinationEntity(245U);
    msg.vid = 28428U;
    msg.off_x = 0.332047842466;
    msg.off_y = 0.151304986344;
    msg.off_z = 0.279882521734;

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
    msg.setTimeStamp(0.0945184327083);
    msg.setSource(28261U);
    msg.setSourceEntity(16U);
    msg.setDestination(9197U);
    msg.setDestinationEntity(252U);
    msg.vid = 25748U;
    msg.off_x = 0.767126997751;
    msg.off_y = 0.0347494545459;
    msg.off_z = 0.405008313629;

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
    msg.setTimeStamp(0.679350925048);
    msg.setSource(13006U);
    msg.setSourceEntity(98U);
    msg.setDestination(29311U);
    msg.setDestinationEntity(225U);
    msg.vid = 63751U;
    msg.off_x = 0.232759055299;
    msg.off_y = 0.376708492613;
    msg.off_z = 0.631918024229;

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
    msg.setTimeStamp(0.542149811027);
    msg.setSource(54274U);
    msg.setSourceEntity(190U);
    msg.setDestination(7259U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.748167757288);
    msg.setSource(39650U);
    msg.setSourceEntity(110U);
    msg.setDestination(5033U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.887144265395);
    msg.setSource(64106U);
    msg.setSourceEntity(200U);
    msg.setDestination(16583U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.280863596242);
    msg.setSource(6482U);
    msg.setSourceEntity(44U);
    msg.setDestination(42491U);
    msg.setDestinationEntity(189U);
    msg.mid = 50343U;

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
    msg.setTimeStamp(0.333667193962);
    msg.setSource(34009U);
    msg.setSourceEntity(36U);
    msg.setDestination(16502U);
    msg.setDestinationEntity(203U);
    msg.mid = 27387U;

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
    msg.setTimeStamp(0.322691535529);
    msg.setSource(28471U);
    msg.setSourceEntity(61U);
    msg.setDestination(63229U);
    msg.setDestinationEntity(238U);
    msg.mid = 58547U;

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
    msg.setTimeStamp(0.389392126122);
    msg.setSource(14292U);
    msg.setSourceEntity(7U);
    msg.setDestination(24869U);
    msg.setDestinationEntity(230U);
    msg.state = 98U;
    msg.eta = 59604U;
    msg.info.assign("SLXNITXWLWNYEFGPOIHGMVRSXHNDLALRQTDROUMWVPKRLCRFVNQVARMGARHAFMBVCPFTECVVBKGDXEZKTOKEBXBOXPBFSULDQQEJJARRNSBMIIDSPADSJIFWYTZZQGAWBYXYUSGWJEDASZFGUJTPNLSYWHTBTKFEZWZKCHNCOQQSVLLJNIJGUUAOUCMOENKYUKCQBWDCZAOTPVXFHKCYJPKHXHHQCFYOMUYUIDXRMMLEZDPNIMWZOGTQG");

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
    msg.setTimeStamp(0.555059168471);
    msg.setSource(22268U);
    msg.setSourceEntity(80U);
    msg.setDestination(7855U);
    msg.setDestinationEntity(76U);
    msg.state = 94U;
    msg.eta = 60653U;
    msg.info.assign("GVNKAWUQRHHPFBNMLWZZNBAKKZQGMNIXSVPVYHYLOHFXUZHCWRWPMAYQAQUYVZADUVSJLZOZSUNIGSPQJDXODESNEHBVTUYKQKWXLEIRSLTWJRYJZFXMZMVHEJCJYIQKGIBYKVGZORFILJXGAECOMGFTHQOOHDOXEWXTRAPUORILUHERCWJ");

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
    msg.setTimeStamp(0.68186604524);
    msg.setSource(49048U);
    msg.setSourceEntity(220U);
    msg.setDestination(54113U);
    msg.setDestinationEntity(93U);
    msg.state = 160U;
    msg.eta = 62275U;
    msg.info.assign("POKPIPZIHRGSUXLEMWGPHNIPWCQFVERZSSMAHZCYTBKVTJNLQCYZEVTVUESBUMZEUBKTZLBKGFFTDEXOOJGPJWXNLQFAYHSKBVEXOAJZHJZJTSCOYMEBQFDXHLDVOTXJQUVGAIWYZRRQWWIWOMRYASVRPFQEOIYAXUUNTIRNPFWIAMGP");

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
    msg.setTimeStamp(0.961934984375);
    msg.setSource(6774U);
    msg.setSourceEntity(137U);
    msg.setDestination(7510U);
    msg.setDestinationEntity(207U);
    msg.system = 53702U;
    msg.duration = 24593U;
    msg.speed = 0.585935162521;
    msg.speed_units = 99U;
    msg.x = 0.595419202374;
    msg.y = 0.19846474382;
    msg.z = 0.00124402003653;
    msg.z_units = 153U;

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
    msg.setTimeStamp(0.946003755228);
    msg.setSource(61271U);
    msg.setSourceEntity(200U);
    msg.setDestination(33809U);
    msg.setDestinationEntity(109U);
    msg.system = 59662U;
    msg.duration = 32423U;
    msg.speed = 0.859456782871;
    msg.speed_units = 44U;
    msg.x = 0.65790061027;
    msg.y = 0.0493428504207;
    msg.z = 0.328749004629;
    msg.z_units = 108U;

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
    msg.setTimeStamp(0.158709039424);
    msg.setSource(15629U);
    msg.setSourceEntity(233U);
    msg.setDestination(57289U);
    msg.setDestinationEntity(144U);
    msg.system = 36754U;
    msg.duration = 4312U;
    msg.speed = 0.044598895799;
    msg.speed_units = 34U;
    msg.x = 0.43367507956;
    msg.y = 0.477592575307;
    msg.z = 0.91501576151;
    msg.z_units = 210U;

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
    msg.setTimeStamp(0.738083580612);
    msg.setSource(42777U);
    msg.setSourceEntity(238U);
    msg.setDestination(3038U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.0421280428289;
    msg.lon = 0.595337450413;
    msg.speed = 0.720499340909;
    msg.speed_units = 153U;
    msg.duration = 24530U;
    msg.sys_a = 34080U;
    msg.sys_b = 5966U;
    msg.move_threshold = 0.531173752913;

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
    msg.setTimeStamp(0.649816167011);
    msg.setSource(49835U);
    msg.setSourceEntity(131U);
    msg.setDestination(35749U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.478633980258;
    msg.lon = 0.235381166858;
    msg.speed = 0.896963477007;
    msg.speed_units = 117U;
    msg.duration = 64847U;
    msg.sys_a = 45656U;
    msg.sys_b = 1439U;
    msg.move_threshold = 0.121674261193;

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
    msg.setTimeStamp(0.292786467235);
    msg.setSource(62477U);
    msg.setSourceEntity(103U);
    msg.setDestination(29065U);
    msg.setDestinationEntity(43U);
    msg.lat = 0.947830877728;
    msg.lon = 0.480425551649;
    msg.speed = 0.902437361575;
    msg.speed_units = 18U;
    msg.duration = 2885U;
    msg.sys_a = 11392U;
    msg.sys_b = 46412U;
    msg.move_threshold = 0.617977715042;

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
    msg.setTimeStamp(0.148031990598);
    msg.setSource(47848U);
    msg.setSourceEntity(230U);
    msg.setDestination(34320U);
    msg.setDestinationEntity(205U);
    msg.lat = 0.693082322011;
    msg.lon = 0.667893263849;
    msg.z = 0.992106299329;
    msg.z_units = 141U;
    msg.speed = 0.742604227446;
    msg.speed_units = 37U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.13774623367;
    tmp_msg_0.lon = 0.422090338544;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("YKIXMUXSCAHEBQHZULIEMNNPMDOCXGINGSFGTDNLQQYNJRDZSQAUQKPLXKWOWLPUBYINQZJZIAEJFXXOYRJEYBHKVJXGNMURLPOBUEBEHZPSTWSLVYOMOASFGMVGOWDDRFTPTLFMTXIZTTEBJJKNIWWCYWSGOBPUURFZGTQALSCFQRBRNCRTVSQYKPWPVYDKLLHXCHVRPAZVFSGMIVAVOJJKEIKEIOQMWMCJA");

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
    msg.setTimeStamp(0.41080574874);
    msg.setSource(22895U);
    msg.setSourceEntity(31U);
    msg.setDestination(14373U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.0955129023143;
    msg.lon = 0.0805100205385;
    msg.z = 0.407053388833;
    msg.z_units = 8U;
    msg.speed = 0.1312735725;
    msg.speed_units = 97U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.633694233342;
    tmp_msg_0.lon = 0.563732449719;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("EBBFQYUSVTJLUKJEKJFIAIWZNKGCRUWDXTMROWCNSRMCUYQSQKCNVSTXSBDANXHKWQRCIBFJPMNQWIDUQIOVXFFKOMWWMAYVIJMJOOKJRJZBGODKNZPVMLFQQYGAFLEPOOVZ");

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
    msg.setTimeStamp(0.127120014656);
    msg.setSource(6903U);
    msg.setSourceEntity(244U);
    msg.setDestination(37058U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.084667945665;
    msg.lon = 0.687239690915;
    msg.z = 0.537955880886;
    msg.z_units = 225U;
    msg.speed = 0.0807110550346;
    msg.speed_units = 40U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.120354065017;
    tmp_msg_0.lon = 0.603853350509;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("SQRJUYFWGFOFWKONSCLGNZLHUQUHZAEJHOXVETDDOICZXUENROMPBGVYZYPTMMBRC");

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
    msg.setTimeStamp(0.543334817771);
    msg.setSource(37253U);
    msg.setSourceEntity(28U);
    msg.setDestination(55072U);
    msg.setDestinationEntity(134U);
    msg.lat = 0.720788416511;
    msg.lon = 0.609409120385;

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
    msg.setTimeStamp(0.0377134916046);
    msg.setSource(26038U);
    msg.setSourceEntity(181U);
    msg.setDestination(51610U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.470885256663;
    msg.lon = 0.727106735155;

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
    msg.setTimeStamp(0.291672837826);
    msg.setSource(14797U);
    msg.setSourceEntity(176U);
    msg.setDestination(22531U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.774229665863;
    msg.lon = 0.277399488437;

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
    msg.setTimeStamp(0.729840154515);
    msg.setSource(55383U);
    msg.setSourceEntity(135U);
    msg.setDestination(23555U);
    msg.setDestinationEntity(127U);
    msg.timeout = 32302U;
    msg.lat = 0.433199698226;
    msg.lon = 0.338079200246;
    msg.z = 0.100953764491;
    msg.z_units = 24U;
    msg.pitch = 0.193369368298;
    msg.amplitude = 0.0130873945741;
    msg.duration = 52574U;
    msg.speed = 0.973483719553;
    msg.speed_units = 129U;
    msg.radius = 0.0429772103417;
    msg.direction = 240U;
    msg.custom.assign("TDTONSIZBWDVQMVNIGWPGLZXQVMSFTVNJKWKFGQYEGJEXSNVAFFJVCDLBUHTPTSKOYALPYIMLOAQDRQGSEDJMQEGFMZQSOGOGJIPMZDRTHWYVGRCRBNTOFWAXCC");

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
    msg.setTimeStamp(0.325040595813);
    msg.setSource(39328U);
    msg.setSourceEntity(136U);
    msg.setDestination(3666U);
    msg.setDestinationEntity(192U);
    msg.timeout = 8465U;
    msg.lat = 0.905684470416;
    msg.lon = 0.0663509349589;
    msg.z = 0.195709527315;
    msg.z_units = 56U;
    msg.pitch = 0.744938016984;
    msg.amplitude = 0.282892591083;
    msg.duration = 64851U;
    msg.speed = 0.354649181367;
    msg.speed_units = 74U;
    msg.radius = 0.231108522213;
    msg.direction = 6U;
    msg.custom.assign("JNEFOHUNMKNPXBGPWQOOSSXTURHQEUYCEIYFOUWAOELHQWMLVAOVZYDVRGFSZZNEFIJBGGUQNFBUYDJVTBEOKDUCTCQSTHRRJUAMYQIKBIXYQGGIBXTMAYKKNCXLZRNFPCCZFJQNHJUCLGHWSMPOTXPKVNSMWHFNAZSPDRLMVGWIAJADRPWOSKUIHPVYPGRXSTGBCBECKIDEODRTDWZVPIALSFWRKVDLHMXMKCZDLMEEJQTYXLBYZQFXZLH");

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
    msg.setTimeStamp(0.00451797367656);
    msg.setSource(6315U);
    msg.setSourceEntity(79U);
    msg.setDestination(27953U);
    msg.setDestinationEntity(68U);
    msg.timeout = 45603U;
    msg.lat = 0.679551444857;
    msg.lon = 0.945749274983;
    msg.z = 0.680432371022;
    msg.z_units = 57U;
    msg.pitch = 0.935341978331;
    msg.amplitude = 0.348118867589;
    msg.duration = 359U;
    msg.speed = 0.708331370362;
    msg.speed_units = 12U;
    msg.radius = 0.55702065904;
    msg.direction = 73U;
    msg.custom.assign("REDLOVTFOYROUABPVBGDQGAYINVHHALYXKT");

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
    msg.setTimeStamp(0.807793407987);
    msg.setSource(33967U);
    msg.setSourceEntity(48U);
    msg.setDestination(50824U);
    msg.setDestinationEntity(38U);
    msg.formation_name.assign("ZVPDEVAIRYNXLGPBLVXLTSTOSCGCBSIJRRNRLMOVWQELZNIKLMLOUQQTYQOKGJOMDYDVYPDXZSYBSWKMAUNFHOFHXDDTYRVFMUNKBIUBGKCAPZPG");
    msg.reference_frame = 233U;
    msg.custom.assign("YFDVEJABVYOWZPNGOOYDLTDKITTGCSVDWVYBPRAEJRTHIYTDYJCDCQDFOMMIGFFRRQIUZUBXBMWASUFBJBOYJPPMXCHXBXZNDCOSHCIUELSUVJRALZTKNPPZHSKUEWKRKVHGSTQQWKNVNXRLNULNRMECXGOEOXQZLDIHWHGULSNQYVCCEHXASAGEGGQKMASEGAPZJDVFIWZPFTKRKMWHMFJQHYLXXFBZUPKJQWBICOPTSLIJ");

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
    msg.setTimeStamp(0.930161460492);
    msg.setSource(46339U);
    msg.setSourceEntity(254U);
    msg.setDestination(34714U);
    msg.setDestinationEntity(24U);
    msg.formation_name.assign("PKOZYQCWAYZZLGILSFJRHGBJVEHVIHSJLZZYTCWCRVPTFUGUDCDBKPNDKASINQNHSBNONBODRQMYEGDFTKAKPGEPWBFQZGFOXRNNEZSXJEMOUMRIBVQOHXDARXXRGYVHMPDEJOISW");
    msg.reference_frame = 162U;
    msg.custom.assign("SSEPISICAPTQDZJFNGLSDWAWKYLDCNJVVDRBVGOOKIQZQIGMIDSUHCOOYJOKJZFQEHWUZNYRNFFEXCYXBULHTNBA");

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
    msg.setTimeStamp(0.935074094518);
    msg.setSource(42608U);
    msg.setSourceEntity(249U);
    msg.setDestination(12345U);
    msg.setDestinationEntity(21U);
    msg.formation_name.assign("ABRKMHHRUOSGFASJVUDETTVYYTGJWJMPHFVUMONVKMLRCCZPUQSWJJQQILCHNZCNVAZWCYZCWIBDWPBCIYNDVOTHZAYIXFYKJVGOICXKSEQWVFEWXBOBEMARVNBIMQTINDYEBEFTGLSRDATWRBORUSXQKLPXUMDFKLNHHYNFOLVSQPXPIAKWAAEMFZUUCXPLCBOSQPRHDZXXTGNSYGRDKTEI");
    msg.reference_frame = 114U;
    msg.custom.assign("JRFCIQDEVJHBHCXOBKNVYFCZJFFWBFPUTMPWHHSQENUNUPTZIICBBLRKSQIJHJMXBFLEMVPLGWOXHRACSBLNEXRGKAETSRXDXPMRAZYNDAXIGEGSTTNRYVSMVPGZLUGOKAVDZARVZFXYXYWPEONCRMNIWBJFEJUZUBVUMDSQHOOFDZKTLQQMGICWFYQMZYQOUCLAYRKS");

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
    msg.setTimeStamp(0.35735484192);
    msg.setSource(10639U);
    msg.setSourceEntity(22U);
    msg.setDestination(40457U);
    msg.setDestinationEntity(83U);
    msg.group_name.assign("CNFKSQXGPFHLBCNULYYKPRUMLKRNEDKTBFJMAPWRGDTJYCZOFDKDSR");
    msg.formation_name.assign("SNHRJLUVSDTOGCBDWLVIAXWYHUPFFEHETHKRQETDEINJZBCXUNHOSRTWEZNZREVOQUAKKOWXMSYWAQXEWRGNGYCGJAJBAOMSYMCLKMBFXHOKTPTVCMCDRVPQIXDFJTBKSWEHVUBLUFLBLBLGIYSICUDQYVTMDAPZIZDIZCAVFR");
    msg.plan_id.assign("DQYAZURAINJVOXVLAYETMRDLKHDANAQSOVFZE");
    msg.description.assign("UMNKOBHSSEBSWUKWFEDMWLWHWRUTTJXOUGVDLTJTPQAVRQRSBEXXDSGMYNYWNIEOKNXWAOGFLLODOMBZDDNYLJWARNPCMSQXJZGK");
    msg.leader_speed = 0.285394433466;
    msg.leader_bank_lim = 0.340474680369;
    msg.pos_sim_err_lim = 0.294035698189;
    msg.pos_sim_err_wrn = 0.689901920634;
    msg.pos_sim_err_timeout = 54147U;
    msg.converg_max = 0.442035984304;
    msg.converg_timeout = 8490U;
    msg.comms_timeout = 43225U;
    msg.turb_lim = 0.847485858121;
    msg.custom.assign("WGUVKWXDAYVTWGLEUXDBBVOLKSHXMRFNPBORZYEAPSPRBJZOIIIVMZTNLXQNOXFVGCAFUKFUITNTBIKFJDTDAQQDDJNXYYRSMUXMPHWDKYYJPPLVXOZSMRSFAYBPMXGLBLGLIOJPTTCE");

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
    msg.setTimeStamp(0.964132503404);
    msg.setSource(62953U);
    msg.setSourceEntity(69U);
    msg.setDestination(38744U);
    msg.setDestinationEntity(172U);
    msg.group_name.assign("VIWATZJPBLNYKVEXKLNMPHDQCRXPQFBFHZGVDVQEDUFBEERPLCT");
    msg.formation_name.assign("OONVPUXOVKPKYFQCHSQLY");
    msg.plan_id.assign("BGGQEBXTAKTUKHAEAFAGFMSPQSMYHVPR");
    msg.description.assign("RKPMWYBBDAVICDTRSDGOGHCHPUMPIEHXATIKAVKMWLLOGSQNUWCJWDDKYLXTVPXUQJDBFMXRZWRSNNVILZNDNJXJJUGCZBRAPGRJEJPMUFMTQVOXLHKBWHYDEQYAXFIQKNTIBAZFOKZKLSSVKUHSUIDACRMZHSFRWWEGDM");
    msg.leader_speed = 0.631563689109;
    msg.leader_bank_lim = 0.616656969806;
    msg.pos_sim_err_lim = 0.814450447293;
    msg.pos_sim_err_wrn = 0.13288741242;
    msg.pos_sim_err_timeout = 25096U;
    msg.converg_max = 0.814448321343;
    msg.converg_timeout = 61631U;
    msg.comms_timeout = 13325U;
    msg.turb_lim = 0.189987541095;
    msg.custom.assign("LAMYKZBEAZGCASAXOJDGJSJLRELTQRWFUUDDKCTIVMJODRRXVYPPKJZQRPMFQTPZQWQGOASXYWCMRJFEWPBLLEWDXYTKXBHCZLLMXHEVUVOSEHTSNMKKCSMI");

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
    msg.setTimeStamp(0.10714356659);
    msg.setSource(24203U);
    msg.setSourceEntity(187U);
    msg.setDestination(29066U);
    msg.setDestinationEntity(189U);
    msg.group_name.assign("HCOCVJBPJXJBXLKHMVBGGFZGHNCRVOOEFKWEDVUSVKVQIQXJL");
    msg.formation_name.assign("DCQZIJKMKGJDWJTSNSVXRWDFFFQPSJTCBXBXZWWVQZRH");
    msg.plan_id.assign("AGLBTDRYMSKALINNXOJZQBOTTESOFMTXNEWLWVGPVOUETRMUFENINITBYKKKTFAHFWGPQBPLFCHKWYUGHQWASUSJVORZGSBHQGPVRXVSDHVXLMJEKOPRLXDATVPUUJQUJDUQZHMBPWZYGZHPOAVSNLQSWUNEIXXWSEARPORKLRIOIQZHCIWYBAMCCAOGCUZDJGCBBDRJXBWIKXYDCXQNZLLCGMYCJN");
    msg.description.assign("EDSLLEAUHNODXRZZLSZPLXIWTBVZUXDTLYYTEWLVEXKYGWJOXAQXAOLPVYGWDQMVFDPHRUQPMQCZNMCFKJDSUTAJYRFNTILBBZFGPHQZBCMOAKPNCWPJSJAGQWYVUNFIVFYTEFBHJWMIHPQTXXJUBLBRK");
    msg.leader_speed = 0.949097081014;
    msg.leader_bank_lim = 0.118258753309;
    msg.pos_sim_err_lim = 0.686420978507;
    msg.pos_sim_err_wrn = 0.173287102133;
    msg.pos_sim_err_timeout = 28366U;
    msg.converg_max = 0.710846429728;
    msg.converg_timeout = 7298U;
    msg.comms_timeout = 25802U;
    msg.turb_lim = 0.655147138517;
    msg.custom.assign("MZOPMZOYQJFJMVXWYJXMNBIJPJYWJBISKYNUMGGCHLBYUIMAUYYJFEJIJLSNWVK");

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
    msg.setTimeStamp(0.18495276788);
    msg.setSource(32759U);
    msg.setSourceEntity(36U);
    msg.setDestination(23400U);
    msg.setDestinationEntity(189U);
    msg.control_src = 31975U;
    msg.control_ent = 28U;
    msg.timeout = 0.442881430062;
    msg.loiter_radius = 0.624718361754;
    msg.altitude_interval = 0.0486204694072;

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
    msg.setTimeStamp(0.654506663499);
    msg.setSource(51243U);
    msg.setSourceEntity(45U);
    msg.setDestination(52201U);
    msg.setDestinationEntity(132U);
    msg.control_src = 27878U;
    msg.control_ent = 171U;
    msg.timeout = 0.626847145139;
    msg.loiter_radius = 0.315774106604;
    msg.altitude_interval = 0.171492060152;

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
    msg.setTimeStamp(0.354122570661);
    msg.setSource(9938U);
    msg.setSourceEntity(31U);
    msg.setDestination(37046U);
    msg.setDestinationEntity(153U);
    msg.control_src = 12629U;
    msg.control_ent = 196U;
    msg.timeout = 0.722147617843;
    msg.loiter_radius = 0.979456037731;
    msg.altitude_interval = 0.145300612368;

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
    msg.setTimeStamp(0.306646439108);
    msg.setSource(10499U);
    msg.setSourceEntity(123U);
    msg.setDestination(3594U);
    msg.setDestinationEntity(177U);
    msg.flags = 109U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.928019457318;
    tmp_msg_0.speed_units = 130U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.395606832828;
    tmp_msg_1.z_units = 216U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.702696225165;
    msg.lon = 0.705821194458;

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
    msg.setTimeStamp(0.915650716137);
    msg.setSource(32689U);
    msg.setSourceEntity(105U);
    msg.setDestination(23801U);
    msg.setDestinationEntity(171U);
    msg.flags = 62U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.319682712977;
    tmp_msg_0.speed_units = 67U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.877642346924;
    tmp_msg_1.z_units = 206U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.478793934007;
    msg.lon = 0.530321757668;

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
    msg.setTimeStamp(0.511092715347);
    msg.setSource(13049U);
    msg.setSourceEntity(150U);
    msg.setDestination(47344U);
    msg.setDestinationEntity(59U);
    msg.flags = 77U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.721227673312;
    tmp_msg_0.speed_units = 11U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.855740978228;
    tmp_msg_1.z_units = 179U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.528990719737;
    msg.lon = 0.294433169022;

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
    msg.setTimeStamp(0.167783975371);
    msg.setSource(34532U);
    msg.setSourceEntity(98U);
    msg.setDestination(12101U);
    msg.setDestinationEntity(208U);
    msg.control_src = 38100U;
    msg.control_ent = 52U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 208U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.868656846068;
    tmp_tmp_msg_0_0.speed_units = 206U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.532897101225;
    tmp_tmp_msg_0_1.z_units = 19U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.442923156273;
    tmp_msg_0.lon = 0.815126556047;
    msg.reference.set(tmp_msg_0);
    msg.state = 103U;
    msg.proximity = 55U;

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
    msg.setTimeStamp(0.95622047235);
    msg.setSource(55708U);
    msg.setSourceEntity(53U);
    msg.setDestination(25899U);
    msg.setDestinationEntity(245U);
    msg.control_src = 31870U;
    msg.control_ent = 77U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 183U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.827551146763;
    tmp_tmp_msg_0_0.speed_units = 155U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.647764988759;
    tmp_tmp_msg_0_1.z_units = 240U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.690794271544;
    tmp_msg_0.lon = 0.888142245754;
    msg.reference.set(tmp_msg_0);
    msg.state = 230U;
    msg.proximity = 52U;

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
    msg.setTimeStamp(0.721671759118);
    msg.setSource(42573U);
    msg.setSourceEntity(99U);
    msg.setDestination(29291U);
    msg.setDestinationEntity(86U);
    msg.control_src = 3857U;
    msg.control_ent = 151U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 82U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.151654900308;
    tmp_tmp_msg_0_0.speed_units = 21U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.65503054047;
    tmp_tmp_msg_0_1.z_units = 126U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.189888480675;
    tmp_msg_0.lon = 0.646795485753;
    msg.reference.set(tmp_msg_0);
    msg.state = 149U;
    msg.proximity = 98U;

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
    msg.setTimeStamp(0.604616519815);
    msg.setSource(21069U);
    msg.setSourceEntity(20U);
    msg.setDestination(64013U);
    msg.setDestinationEntity(11U);
    msg.op_mode = 158U;
    msg.error_count = 253U;
    msg.error_ents.assign("EFJNNZFJILGFJNWCFGLVAKNWPORLVTDQTCOAXRFULDWI");
    msg.maneuver_type = 14687U;
    msg.maneuver_stime = 0.984302093878;
    msg.maneuver_eta = 31418U;
    msg.control_loops = 488371039U;
    msg.flags = 93U;
    msg.last_error.assign("QXGOWSWIWSWKFQIUZVCWKMVPDIIJBTGRJAKMQUDBQEUKOFHYQRNVBAXLKOXNPSSPEWYMZNRCZTCLJUNEHMRDYHXRSGLAEAXDLOJCGTK");
    msg.last_error_time = 0.0282423562919;

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
    msg.setTimeStamp(0.248979578627);
    msg.setSource(62382U);
    msg.setSourceEntity(99U);
    msg.setDestination(27278U);
    msg.setDestinationEntity(181U);
    msg.op_mode = 58U;
    msg.error_count = 26U;
    msg.error_ents.assign("BIXNYWTAASNOAGMFOLQNKRXCASGBPOKXVMIHYHBBCADYAOUXVPPTQOJJEEYMMUYZTVCTGRRDITXHTSSWZPUBHZERRFDRZQOFFPBZUFHENCWXKBILPFJSLQABKSJUSKILJMKHJXTJQJYVQYTNWAWEDCRXGHUVZKGFZYFXJCNGDNWHAOMLYZIKODVRGUHQFCEELZNGLMPY");
    msg.maneuver_type = 26680U;
    msg.maneuver_stime = 0.709211138687;
    msg.maneuver_eta = 5450U;
    msg.control_loops = 2365310185U;
    msg.flags = 138U;
    msg.last_error.assign("VGKVHSOPEZJKYD");
    msg.last_error_time = 0.946603450167;

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
    msg.setTimeStamp(0.547072300693);
    msg.setSource(6746U);
    msg.setSourceEntity(61U);
    msg.setDestination(61542U);
    msg.setDestinationEntity(67U);
    msg.op_mode = 112U;
    msg.error_count = 62U;
    msg.error_ents.assign("RHUWWAQVOIKMWKJRWUCFDTDGLRCHVWBLUBGVQZDSPZNJCMJPXAEXQAOFVICYFABOUHRVJMKBTSEBNKZSRXCNTG");
    msg.maneuver_type = 21103U;
    msg.maneuver_stime = 0.842026686998;
    msg.maneuver_eta = 33475U;
    msg.control_loops = 2676907670U;
    msg.flags = 154U;
    msg.last_error.assign("QAJGVYLPMOZMEXHIXRFRWZJQGCSUQTDTZJZXCLFCBBIRCOSFANPHAHOKQWFHUKAUGLVEWQYAXOFEMPERSLUDDFZGUIOMAHHEMOUKBTQHFLFNNGNA");
    msg.last_error_time = 0.0434782403987;

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
    msg.setTimeStamp(0.373969172488);
    msg.setSource(64461U);
    msg.setSourceEntity(224U);
    msg.setDestination(46630U);
    msg.setDestinationEntity(128U);
    msg.type = 122U;
    msg.request_id = 20477U;
    msg.command = 128U;
    IMC::VehicleFormation tmp_msg_0;
    tmp_msg_0.lat = 0.547883330786;
    tmp_msg_0.lon = 0.304720686339;
    tmp_msg_0.z = 0.326607175213;
    tmp_msg_0.z_units = 209U;
    tmp_msg_0.speed = 0.597060793121;
    tmp_msg_0.speed_units = 64U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.868966772685;
    tmp_tmp_msg_0_0.y = 0.0641128777703;
    tmp_tmp_msg_0_0.z = 0.797253870449;
    tmp_tmp_msg_0_0.t = 0.61302608924;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_time = 0.757440862649;
    tmp_msg_0.custom.assign("VFMZRYIWMKODFRNGKQKWMLELGAQFMDYRHUFSPTTIWRBYBCTRLNZCLCVPX");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 37755U;
    msg.info.assign("QWCQKHRBKIMNLXRBSXJIPEMXPU");

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
    msg.setTimeStamp(0.216474570312);
    msg.setSource(63168U);
    msg.setSourceEntity(22U);
    msg.setDestination(29813U);
    msg.setDestinationEntity(150U);
    msg.type = 234U;
    msg.request_id = 7566U;
    msg.command = 44U;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("UTXDWSXHFHRGUWNUADZTXIOVJQMUICTDEAEJGIUCJWVYUHFMECAFTKPKXNRJFMIECPHOBDOQGRJRZTMPRNWQEFWMTIKNSUIRJGQFSUNKYPVNLAWZGFOVGUSQYXZVMAH");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 21067U;
    msg.info.assign("RAFPPZSECUPMWDBLMQSJLVSLWLTBHSFZOZUDAUYJNDNOKUXWKQFVBUQSRGGXEHNYCJHWFSZSXMXSNMQYIBIGFAZEHIVACAFVIBAFEPRNTOAKESGCSMQBQUBTHHMYLBZUNYUDTAJWKKGUFOOXZOBEYTCIRODURKBNWJRTDMYFNXRHJEICG");

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
    msg.setTimeStamp(0.0927007673714);
    msg.setSource(50214U);
    msg.setSourceEntity(95U);
    msg.setDestination(4100U);
    msg.setDestinationEntity(147U);
    msg.type = 66U;
    msg.request_id = 46735U;
    msg.command = 56U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.692732914044;
    tmp_msg_0.lon = 0.829707804916;
    tmp_msg_0.z = 0.5194486124;
    tmp_msg_0.z_units = 23U;
    tmp_msg_0.radius = 0.00748059831939;
    tmp_msg_0.duration = 42105U;
    tmp_msg_0.speed = 0.278046099952;
    tmp_msg_0.speed_units = 22U;
    tmp_msg_0.custom.assign("QOTVVMUHMXSWDQBKPEDLYANKEVRIHHFLUPEKJZBUIZMLJOGZLMORURDVETLARFJFPNIEOAKFXJXNBHAVLMIQIMROSTSLGEPXJYVCGCEGLXVNSUFEWSDHIPQBACSWYDEBNLKGZQUIJSKIQFHVSFX");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 24670U;
    msg.info.assign("HBCXGDHXSNNNQVRDRNKOTZTKDETMGEQTEXGDBEITIGZPHXYDIFEQUORBOAPRS");

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
    msg.setTimeStamp(0.61193384613);
    msg.setSource(9759U);
    msg.setSourceEntity(246U);
    msg.setDestination(20536U);
    msg.setDestinationEntity(239U);
    msg.command = 96U;
    msg.entities.assign("HSIPBUDFUZMKNQRTCWYHLRJSRGPIVCXMDUFTYVMWVAKXMNMHXLPLGNUDAEBKXFENSSKOI");

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
    msg.setTimeStamp(0.342967920479);
    msg.setSource(17814U);
    msg.setSourceEntity(36U);
    msg.setDestination(14251U);
    msg.setDestinationEntity(143U);
    msg.command = 21U;
    msg.entities.assign("QNYEILUEFTMKBFRJQCOBDUDRZSJIVQTOGPNUFRANPLCGJIJFVPKUFAEZPXUTOYDC");

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
    msg.setTimeStamp(0.990733213593);
    msg.setSource(54063U);
    msg.setSourceEntity(222U);
    msg.setDestination(14695U);
    msg.setDestinationEntity(204U);
    msg.command = 243U;
    msg.entities.assign("VVSCQDHFTFRLTAKPANBJPOAQCBMPHOSASFVLCYMWQMUBLOYJCUOYNNBHBBAALGRGOZNNGIAKTITKGRAEJXOMZNWQOSZDQDCWEAYGIKMXPTZBRGDXYZTKXXSIZFXGSZUQJQIPPDTDLZGIRTXPFJSEFLCHLEREDJVNUUGEPQQHXSRKBA");

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
    msg.setTimeStamp(0.697462424955);
    msg.setSource(23351U);
    msg.setSourceEntity(15U);
    msg.setDestination(58861U);
    msg.setDestinationEntity(119U);
    msg.mcount = 192U;
    msg.mnames.assign("VCMKTVHUGFTDRGAYJDTQLHKXUKWRBIHDYCYHXCITXAZNMGZSKEUXWRZNJPWSMBRBXOHZPPYTPANVWSXMJSMQAZNAWOQRQLCLBBEEECKIOLPQIZROTCTDZIJOMWIXYIBFQXLVFRPQUNSVCLJGLCUJHFBA");
    msg.ecount = 65U;
    msg.enames.assign("ZLDUEDNXAKWTDJMEQNSWYZZOLFQHCUYZBUFERTRXIOVPGCXDNEVKWF");
    msg.ccount = 52U;
    msg.cnames.assign("BQKSAOGFGKHFHSVTVOVCJRPXIINBWJCNWQWOWAEFXBTQRGQCKDHYXKNFIFXPUVFJDGIMSE");
    msg.last_error.assign("TKZNSJJIRLLUZSMRLNYMQMRPHNHYRXORBRBXXAKAMVOYPYNSWSARHJJXHUXZGEKATYLUJKWZULKTZOEATDVERLLXNFTVQLMUHNTH");
    msg.last_error_time = 0.795165427025;

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
    msg.setTimeStamp(0.199753773984);
    msg.setSource(29971U);
    msg.setSourceEntity(20U);
    msg.setDestination(55496U);
    msg.setDestinationEntity(41U);
    msg.mcount = 234U;
    msg.mnames.assign("FVKJILKTDNROJJBBXSUVSKGZCSLSYURHLUAJPZUEMAZZWFTBPPQUQVXYPWRRFBHPRKCAEBEPMWNNCFBANURUVLYGTUSZYCDTMKLICUOMIXHVOTEHQ");
    msg.ecount = 136U;
    msg.enames.assign("USQLCENWBKXPFAKTEFCIGCZBNXLQOUPXORVVPJABILXIJKAWPHLJSTEONHMUPYCCHDQSFQECVROEGKOJQJVPINADDIHXOASVHHMZPXOUIFMJQSQZFGAQTSHIXVWUCLZZEHFVZDNTCGMVDJSCFIGKWGXSTTZWVYOUSLMIWBULUNNKTKDYGWZBRCQGHJBDYVBJBWRHPLADGEFUYNKEJ");
    msg.ccount = 88U;
    msg.cnames.assign("IVHOGNYMLCYLMYQFBWQZDWVJCITGGFCSKFSKSLMTXLTQVGWXECLUWEECWRTRJYOQNJISBMOWFAKKBBULAAPDXQPUSUVYJFXDBONXGXCMTJNFVYBYAHBRFMLAEEEPKFUHZBZIPTOIHSRPADRHET");
    msg.last_error.assign("YRLOYTVRIFXRGRUSNQBNUSESSNNDFKQUFKEIUSGDLGAEJEZMFVZMUILYUEWBZFORDSQCVJHWPJJBQSKHSJJDNVJYQHUXAXHNU");
    msg.last_error_time = 0.111418049793;

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
    msg.setTimeStamp(0.863102199295);
    msg.setSource(26366U);
    msg.setSourceEntity(123U);
    msg.setDestination(14832U);
    msg.setDestinationEntity(157U);
    msg.mcount = 18U;
    msg.mnames.assign("JQHBSLAMRFUVZCITPROVJQRABXJBVWRXMHXFXYMTUPUIXKUCDDZLIBQWRSCJOFGASYDMPRESEALUWJEWYRYYWZJSYCVDCKHFGQWAMYUEYGDAHNQFJGMKVNUJXMPRPEQFKVYTENUDJNPZMFBOTIMHILBKZXZOGFVINGZQGOMOWTUSKSOKPETIXBHNALSGCCNJLVENAIGS");
    msg.ecount = 240U;
    msg.enames.assign("MESYSPXFMBWPTXXYFNGTHOCPDRGGPHRYFNCVPLHNVGXGTTSEUHIHAUCZZSBVKOZKFVMHNROALTZIQMVKBYOGABDMNZTFITQDMUJTVEZEIZLZIRUCQHPGKDQIDXKIEJXUCJHYRDKEWWALUYDOJFOSZBPQKPSAMNKYXF");
    msg.ccount = 187U;
    msg.cnames.assign("ERSHIFDQFFOFUWGIABMSMRGJBNMZVNRMWXCKMQWYDNDYRKENRJDOLIQUXBSUKBPDCMTSGDLEAHYOUKXJSZOGUOWOZZPVACXCVPJJIPUHMTXCFQARVHHDZRFAPWAPYCSTZA");
    msg.last_error.assign("IPEDNZVLDJVBBLRYEJDFKHZHVPWLJRWGLQOUQXMDNLUVEYIEGCG");
    msg.last_error_time = 0.181308239745;

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
    msg.setTimeStamp(0.442200393178);
    msg.setSource(26804U);
    msg.setSourceEntity(124U);
    msg.setDestination(21728U);
    msg.setDestinationEntity(134U);
    msg.mask = 234U;
    msg.max_depth = 0.948021894069;
    msg.min_altitude = 0.182495524411;
    msg.max_altitude = 0.618011853297;
    msg.min_speed = 0.772016191188;
    msg.max_speed = 0.940179274538;
    msg.max_vrate = 0.0338631290348;
    msg.lat = 0.111513390235;
    msg.lon = 0.162346079504;
    msg.orientation = 0.440736473908;
    msg.width = 0.916332167165;
    msg.length = 0.602351809909;

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
    msg.setTimeStamp(0.319715702284);
    msg.setSource(31023U);
    msg.setSourceEntity(37U);
    msg.setDestination(61484U);
    msg.setDestinationEntity(236U);
    msg.mask = 142U;
    msg.max_depth = 0.156394113719;
    msg.min_altitude = 0.922878473384;
    msg.max_altitude = 0.599437128413;
    msg.min_speed = 0.691468359633;
    msg.max_speed = 0.336447427693;
    msg.max_vrate = 0.280263629885;
    msg.lat = 0.45052711459;
    msg.lon = 0.269490597033;
    msg.orientation = 0.441025681951;
    msg.width = 0.782878559119;
    msg.length = 0.517487777566;

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
    msg.setTimeStamp(0.790030665593);
    msg.setSource(61383U);
    msg.setSourceEntity(20U);
    msg.setDestination(32267U);
    msg.setDestinationEntity(179U);
    msg.mask = 5U;
    msg.max_depth = 0.729114425309;
    msg.min_altitude = 0.312897331715;
    msg.max_altitude = 0.992530298784;
    msg.min_speed = 0.429107745464;
    msg.max_speed = 0.83441161225;
    msg.max_vrate = 0.182609224117;
    msg.lat = 0.753962525002;
    msg.lon = 0.564911024054;
    msg.orientation = 0.97479767641;
    msg.width = 0.773983665441;
    msg.length = 0.797334170666;

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
    msg.setTimeStamp(0.577768071565);
    msg.setSource(7527U);
    msg.setSourceEntity(86U);
    msg.setDestination(53052U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.3234123071);
    msg.setSource(36348U);
    msg.setSourceEntity(139U);
    msg.setDestination(35193U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.30447423121);
    msg.setSource(65348U);
    msg.setSourceEntity(16U);
    msg.setDestination(36685U);
    msg.setDestinationEntity(145U);

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
    msg.setTimeStamp(0.457633813159);
    msg.setSource(15309U);
    msg.setSourceEntity(74U);
    msg.setDestination(11351U);
    msg.setDestinationEntity(120U);
    msg.duration = 50448U;

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
    msg.setTimeStamp(0.926619944759);
    msg.setSource(14844U);
    msg.setSourceEntity(115U);
    msg.setDestination(54349U);
    msg.setDestinationEntity(214U);
    msg.duration = 11750U;

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
    msg.setTimeStamp(0.858264820878);
    msg.setSource(37242U);
    msg.setSourceEntity(5U);
    msg.setDestination(4207U);
    msg.setDestinationEntity(49U);
    msg.duration = 33993U;

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
    msg.setTimeStamp(0.125191582126);
    msg.setSource(26638U);
    msg.setSourceEntity(23U);
    msg.setDestination(16250U);
    msg.setDestinationEntity(229U);
    msg.enable = 219U;
    msg.mask = 71965188U;
    msg.scope_ref = 0.0635156410906;

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
    msg.setTimeStamp(0.877212481798);
    msg.setSource(20099U);
    msg.setSourceEntity(213U);
    msg.setDestination(18615U);
    msg.setDestinationEntity(34U);
    msg.enable = 169U;
    msg.mask = 1797545359U;
    msg.scope_ref = 0.134406678178;

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
    msg.setTimeStamp(0.612417577017);
    msg.setSource(20827U);
    msg.setSourceEntity(61U);
    msg.setDestination(47952U);
    msg.setDestinationEntity(100U);
    msg.enable = 233U;
    msg.mask = 3175378338U;
    msg.scope_ref = 0.372744073356;

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
    msg.setTimeStamp(0.744840700913);
    msg.setSource(55708U);
    msg.setSourceEntity(121U);
    msg.setDestination(3307U);
    msg.setDestinationEntity(55U);
    msg.medium = 67U;

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
    msg.setTimeStamp(0.417117826183);
    msg.setSource(233U);
    msg.setSourceEntity(59U);
    msg.setDestination(58462U);
    msg.setDestinationEntity(29U);
    msg.medium = 204U;

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
    msg.setTimeStamp(0.183845085509);
    msg.setSource(30313U);
    msg.setSourceEntity(124U);
    msg.setDestination(33367U);
    msg.setDestinationEntity(14U);
    msg.medium = 49U;

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
    msg.setTimeStamp(0.339860651492);
    msg.setSource(43046U);
    msg.setSourceEntity(60U);
    msg.setDestination(34542U);
    msg.setDestinationEntity(165U);
    msg.value = 0.0162531734749;
    msg.type = 199U;

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
    msg.setTimeStamp(0.928360848997);
    msg.setSource(20615U);
    msg.setSourceEntity(237U);
    msg.setDestination(25305U);
    msg.setDestinationEntity(197U);
    msg.value = 0.656324994031;
    msg.type = 216U;

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
    msg.setTimeStamp(0.0522065976853);
    msg.setSource(36161U);
    msg.setSourceEntity(161U);
    msg.setDestination(53347U);
    msg.setDestinationEntity(207U);
    msg.value = 0.179323007044;
    msg.type = 119U;

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
    msg.setTimeStamp(0.221201413128);
    msg.setSource(34947U);
    msg.setSourceEntity(163U);
    msg.setDestination(2650U);
    msg.setDestinationEntity(115U);
    msg.possimerr = 0.349593160837;
    msg.converg = 0.726011193627;
    msg.turbulence = 0.875739852707;
    msg.possimmon = 111U;
    msg.commmon = 40U;
    msg.convergmon = 192U;

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
    msg.setTimeStamp(0.63877330191);
    msg.setSource(20337U);
    msg.setSourceEntity(54U);
    msg.setDestination(38523U);
    msg.setDestinationEntity(71U);
    msg.possimerr = 0.462458589692;
    msg.converg = 0.405614649776;
    msg.turbulence = 0.638886864969;
    msg.possimmon = 34U;
    msg.commmon = 159U;
    msg.convergmon = 184U;

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
    msg.setTimeStamp(0.383392498021);
    msg.setSource(1872U);
    msg.setSourceEntity(101U);
    msg.setDestination(7150U);
    msg.setDestinationEntity(221U);
    msg.possimerr = 0.87942855568;
    msg.converg = 0.194833175257;
    msg.turbulence = 0.426195943638;
    msg.possimmon = 162U;
    msg.commmon = 145U;
    msg.convergmon = 114U;

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
    msg.setTimeStamp(0.936411545365);
    msg.setSource(9931U);
    msg.setSourceEntity(108U);
    msg.setDestination(12702U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.887182875855);
    msg.setSource(16692U);
    msg.setSourceEntity(204U);
    msg.setDestination(6659U);
    msg.setDestinationEntity(137U);

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
    msg.setTimeStamp(0.707407004244);
    msg.setSource(5836U);
    msg.setSourceEntity(210U);
    msg.setDestination(41814U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.411796137451);
    msg.setSource(29110U);
    msg.setSourceEntity(216U);
    msg.setDestination(58530U);
    msg.setDestinationEntity(19U);
    msg.plan_id.assign("PINGWBZUFCQMVHBEYKDSYSDITMTIUIBVKOWEBGENRGKCCMYVDKYWVSUVEVTJLQXPPRPSOZBOGYJFJLTSMWUINMSABEFSNPQNXQZGIZAICLRTABDZXQANYZVMEKOJXRCTQLKVGWSBNLJMPKKZWOCHTQVLUTEXFEOVLHFPNAUHWFGJFLLBHFNRHWB");
    msg.description.assign("WLNLOMVDIIZMBQCPZBFDJVLBGDTUJYKHTUDJXKSTJRTALZJMAUTOBMMJCCEDRRHOCSZONVRTTFWWWKESZFGBEYIJASAXWLNMFEWOLQYYMPHKQNPFVEEOKUARQXRJENOWYRQGUKNZSRXDXEGZRGQQDVGCGIVHILNDINCDPK");
    msg.vnamespace.assign("JJCTTGWPZHIBORCPNUUEVEFCMZNIAQXKWPVXDSWDRRTCAFVYEPPTQHUIGKSEJHKLIVXHZC");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("SSJVZZTYFIUDLKFGMNJELQZMXBWEAEIOLTZYBHOSKWWHXENVVPOHAKVVZJCJBQDNRRUYMXSVUGGKEQPGLSPEQUSGSKTVPRFSQFIVGZMSQVKROACEDPTJNTHBCBYCBU");
    tmp_msg_0.value.assign("PCADQKQCHURCMMFAVMWGXHDNXVETQJYZAAFHLEDLOBKBIANXUNCVQFJEMILMFBQIMXUSCEPNWOOBHQZQKEWGPYZYCVWGISERTTZVJXJOKBWJSTGPGYTVRTEHRCVWIKYJAWARLFKEZXUBGKSVFNSAKZLFOHFPUDRRQPXPGXZLOOXPCXVUDYHBBBEN");
    tmp_msg_0.type = 193U;
    tmp_msg_0.access = 146U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("SFKKMXOOUBAVDDRHTNSVBGICXABKQPTBHHKILBCLIKVYPYOZZAQIRJRCLWPHXODZSVNMTUMESLQPZCWIDQSHRTEZRNALJXVCHPGSAFADJNGBDDZJHOYRWSQXLODIQMYLRCTGREXPIFOKUPUTVLYQNDFVOXXGHWSPBJEWFYCNZLPFJJPTYAYZRGYSKAXO");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("KXWZPTBQNTMNCLUKRTWYHHIEVBGZWQXGIGNDEEPZJUNACFSKGZONJPOURGVOMGRSVNBWHXMIDEPOQULGZQFSBUH");
    IMC::YoYo tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 36396U;
    tmp_tmp_msg_1_0.lat = 0.205511267357;
    tmp_tmp_msg_1_0.lon = 0.634669127733;
    tmp_tmp_msg_1_0.z = 0.496741664027;
    tmp_tmp_msg_1_0.z_units = 170U;
    tmp_tmp_msg_1_0.amplitude = 0.0497148761323;
    tmp_tmp_msg_1_0.pitch = 0.518094015568;
    tmp_tmp_msg_1_0.speed = 0.643200122595;
    tmp_tmp_msg_1_0.speed_units = 208U;
    tmp_tmp_msg_1_0.custom.assign("BMUYMYTMPZUWENWAXDCVFOUWKIJALFOCKMQLFNDTHZRRZNAPYFXKGKJQCLKKYQYGZJPFDDONSHGQEMHTPBDWEIUSJJAYMCOGCEKIMOYJQRQSQOHXGHRPXQAUZOPDPWVLRALMZVSNIOLESKFLXULXWXZZIHBGTKCEBEGVBDVJRNJFVCPJVVKFSSHCTRAWGTIGLOFWJIUTUDREIQPHENAWDTXT");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::MonitorEntityState tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.command = 102U;
    tmp_tmp_msg_1_1.entities.assign("YJRMRCDOSQPLFTCKBIXYULTA");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("JMMXPWLKMETGDOBYGKDIFIYABOBEZCNBZCUBAKCSZEOXCFRZAWFJBQNXJEPRRDMQHMVNOGGTPPUYKODWUNOCDQIWQCEFMNIAHUYVRPGDHJIUGWGPYHADWMIXLZMWBCJVJZIKHETQSVCDWQLXFBHXPEWAZWROJUVRQKJANIKCTUAFQFUSZXLRMDOVNIERBTRSIPHPVFYVYSNFDLVFLGBETCHXTLTAUYNNELMSQTJLXKUKASSQOYXPRKGSL");
    tmp_msg_2.dest_man.assign("OQXHTJORYZDCMDHSFIIXPBUBUNDRGEOWJZKYMCPMYXIKLQONCLHQTCTIFWNTWFYRAZRDSVALPEKRMJIUBNHCWUDXUYXFFFUFZIWDQXBAODMXPKFVZHSUGGEOYEAJBNWGBZICQVMTYKQMLTMVWXARTTEEYQEHTOKEFPIIALWAJVZLJNPLZSEUJSRVGSQVDVCSHOTCMGKBMHAUEBDKPGXSKRUHSYFJPASRNYGOOVNWPPDCNHNJ");
    tmp_msg_2.conditions.assign("FZQPVNCELTEQEZKNSUWVUITCHQOLBQXEZJHIQKROMMABAOVZXMYVLXVFUINILGTIAFPNTRWNOWHJHRCOQIXMPKJVDEHCFXEXFSGQXLJUCMHNLGDDDRUYEKVKATAKMQKRXMJZJSREYXTAHJWSJYZDY");
    IMC::EntityActivationState tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.state = 200U;
    tmp_tmp_msg_2_0.error.assign("IEBIWTBWJNPBOVDJGIDNLHWHHHFCRTYLWQQPTVGLSYUSEPLBSCRIZRRIQSVFXAMSZC");
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::MapFeature tmp_msg_3;
    tmp_msg_3.id.assign("QMHHINGTWHLFJAILFZAKXPBFCCPJDOVVFISSBEYFIQEPKWITIHQRKPOYYRMNEDSSODFAKMNWRYKDXNJQQFPWLUROAQYMZYCLXGBDXYGRBPVVXGVJDQOUWLTSSX");
    tmp_msg_3.feature_type = 184U;
    tmp_msg_3.rgb_red = 98U;
    tmp_msg_3.rgb_green = 32U;
    tmp_msg_3.rgb_blue = 174U;
    IMC::MapPoint tmp_tmp_msg_3_0;
    tmp_tmp_msg_3_0.lat = 0.165318440689;
    tmp_tmp_msg_3_0.lon = 0.196072709158;
    tmp_tmp_msg_3_0.alt = 0.845383428235;
    tmp_msg_3.feature.push_back(tmp_tmp_msg_3_0);
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
    msg.setTimeStamp(0.811035654458);
    msg.setSource(43787U);
    msg.setSourceEntity(193U);
    msg.setDestination(42689U);
    msg.setDestinationEntity(122U);
    msg.plan_id.assign("ORCNBSJELOLATJYOOMNXFNOPURCWJNRXKRZNLNCABHHUYEETDGWQYLQFTERKGAWVIASBBTXSJNJXPXBSCVKMHMWKWAYPQKWTLYBGHXAEITHDAMYJZFVZRRRONIZTCJVGMQOZWDXUHAPHIQMXYLUVLIFTWJDFVFLIFCHSUCPQVQDCPIRDTEVBPZLDBHQSUOHARYSZBYVASWKZITCEKQGMKPGNUSJZMODOLGEMKEXGJWSQKIPFDGNXIB");
    msg.description.assign("NMKWMYQOIHQBQMQPHGVGJJHCHY");
    msg.vnamespace.assign("TLGIWJNJMVMNZGDTUOCZJDREBBSQLQBENMBYWEVEPQXUDZHOUMUEGOAFSARCZPDEWLOPMBRXKWFWTISAOJKMUYHQQYLITIFJLRJDEYXTZVLWEEMNHVNXKWFCNQDKWNDBZUQHDSZICIFPUAGCTHJKPRRVWBONMNNGOUIGPKBOCYHHPYIYISPQRUHXTCXTHKUVWOCM");
    msg.start_man_id.assign("JCWNRDABSFIVVQKWFOARKQZEGVTADDEOCMJEPYRCGJLFMREXZLRGQNKNICYRPKTYPWPTSNBXLFNKIQGLXKDVLDJVQTBPEGWWJLVUXHMXAPHYHETQIDUTDZXYOTJFMBGRAMHCKANTYFCTZHXCLUBIWDEPRAHNHOPBGZFMONMZSGBISAXOJCJHURBPCKUFFUEQZIVBRGYQYWXFASDHSMIHYQDESOONWKIU");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("BYERCKSIZXCLRFODLMLEDSBDOLEGUCQMUKHVVGYJTWCXINFLWNWEFTTFVFKPYDSVZASTAQBYRRLBVLAHNFUONYHIZYXLURLURQKUCTPAIWWFFZPQYTKBPYCCMGSCKDWJIMJGVJPXPMQQLKAFXJGVGEIDUJCANWHOOUNURSBZMIOAHDDKGOETJYYJPXEVCATZTVBOIDXJNNWMOMENEQNAZOQDSSHJSBWTKHBZMZEXXVKQ");
    IMC::Goto tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 7187U;
    tmp_tmp_msg_0_0.lat = 0.535791351351;
    tmp_tmp_msg_0_0.lon = 0.108590553199;
    tmp_tmp_msg_0_0.z = 0.246800562876;
    tmp_tmp_msg_0_0.z_units = 243U;
    tmp_tmp_msg_0_0.speed = 0.196982046285;
    tmp_tmp_msg_0_0.speed_units = 232U;
    tmp_tmp_msg_0_0.roll = 0.296314114747;
    tmp_tmp_msg_0_0.pitch = 0.510770526701;
    tmp_tmp_msg_0_0.yaw = 0.228681809589;
    tmp_tmp_msg_0_0.custom.assign("UNKHLLGETMZRYSINQSZLTPBYVIACACPNOCDNXBUNMBXJNXLGMESQQTBGSZIZVZRZRPGYYOSGEFDKWBDORYSXWJGWWPYOXTIIKRUFVAICQTIZCUVOCVXKFDWTVBXDOVOHNXAHLKYWJJKUJCIKIFNNPQAQBGERRQMYHBLHDJVJDIMTBWFONMCQKPWMPSDSPHLLEJHAECEUJMKOAFOGRUKTHUYRPFFURLWAYFMZVEDXGGBTFEUMVQJPXSZSEWHZD");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::LblRange tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.id = 13U;
    tmp_tmp_msg_0_1.range = 0.797783482275;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("WTDUSTRTPCRSTKBKNWJLSAJNQUCHYHNTGQMBPHWUWSDCTROPQMQLYZTOXDUCIHLIFYAKUMJCKGOIXBXCERZIQYYJBAHEGZDFWWRDMPXXFIGGOZVNBNXZTXLNHJAUYSQ");
    tmp_msg_1.dest_man.assign("CKMGCVAKPQOFGRALGMBCSIANECMFESSRFBZBFVMDPJTNYLVSEVH");
    tmp_msg_1.conditions.assign("SDAHQSLMYQKVCBWVWTHMNCQECLHSTGSTLJUAAFVFWWGRNUXFTBUYGMTZIIKMYLZJYJXNYJAESGOXURCUMBEAAGNUVIDYZDPCOBXQOBNDFQZDBXRLCMYKZRRREJIYLXKPTTHQDVNGDMPELASQWOPIDRAQXPCVKCOKEOZMUVKXUWEFHWIRQCGTHKORVZXUOOPVSZWOPFTTQAIFRGKJYSZPMBHDNAHJDYZBIJVENFXGBPCWMSJIEINULBS");
    IMC::Loiter tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 49503U;
    tmp_tmp_msg_1_0.lat = 0.820615587659;
    tmp_tmp_msg_1_0.lon = 0.711592185152;
    tmp_tmp_msg_1_0.z = 0.713209872853;
    tmp_tmp_msg_1_0.z_units = 111U;
    tmp_tmp_msg_1_0.duration = 43410U;
    tmp_tmp_msg_1_0.speed = 0.773958604823;
    tmp_tmp_msg_1_0.speed_units = 250U;
    tmp_tmp_msg_1_0.type = 52U;
    tmp_tmp_msg_1_0.radius = 0.6735089856;
    tmp_tmp_msg_1_0.length = 0.701282840592;
    tmp_tmp_msg_1_0.bearing = 0.23906662842;
    tmp_tmp_msg_1_0.direction = 241U;
    tmp_tmp_msg_1_0.custom.assign("SWJAFQJMWIQERHFVGMCXGYXESRDGWPBSZBRTNPCGPL");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::AllocatedControlTorques tmp_msg_2;
    tmp_msg_2.k = 0.429467046761;
    tmp_msg_2.m = 0.627093897396;
    tmp_msg_2.n = 0.928675064615;
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
    msg.setTimeStamp(0.0692670063397);
    msg.setSource(65363U);
    msg.setSourceEntity(190U);
    msg.setDestination(29593U);
    msg.setDestinationEntity(236U);
    msg.plan_id.assign("KANEKWTKGZMZCQYWAURDHZENXORXNLQBLKLQVJBXYJSXSPIGFZHLWUVZFTHXSKWTNQVU");
    msg.description.assign("ZUSZXVMBHNNKJDWDPINQKISICRFKZIGEOHMYANUQCDHKORLGQJBRKRMWQXTBASFTRUSVUFXOLZKEWSBAPCMPACDLODSDXZEKJIIXVQPLYSFZTGTLIYCTWGTZPRPJLHPKJLRQADRXNUYACSYHQOFITCHNOFHXOMYCSVXIWNWPBAUVGUBJHFZEVONZBOCBPGFQWMMWDKBGGQJGXUSU");
    msg.vnamespace.assign("PBPXBFIJMNKOOEGELNENPJZGGGFBHQH");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("SWYEVOSXVDBQGJPFQBGXWHUPXKYNTYDMZNLTTDFMGXFLJOISNABIPHTZVRFFSHAYXBEREXUH");
    tmp_msg_0.value.assign("DHHVCMIABRALHPURIXDBXRQGWABILEZOLRWFUOCGGJVSPDGCIDJQNKACRUBPSNMTFQWIHJLNQJXHFLN");
    tmp_msg_0.type = 200U;
    tmp_msg_0.access = 21U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("IMHEKCJCLJMUWKNXRVVCTBHWTBXEWOGXWTCPWEYMWQYBMYZXBLZNHBTCWKMDFAADQWUINUNHVPDKFRGUTKPJEEYIZHUNUOYPCDDLHLPZVRXRJBQJNKVJBVGYTRCNGEFDQDVRKGIUPLLFISEEUSYSCIDFODJQUTIYBMOMREPQOGWGAQMMAYAQBFLQJVOSISHGOTPTNCHUXOXXZXXLSRBCKVTHLSOSOSDKQAAAZFZPNHGARZSLIFN");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("LFEKFUUYMQNLRTNJZGOHCDXUXCNGUGNESVAVPGVAZOWNEQLDXSJIDSLIVBIRQCHCODLSPHFRLPFNM");
    IMC::StationKeeping tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.966181213081;
    tmp_tmp_msg_1_0.lon = 0.967397089155;
    tmp_tmp_msg_1_0.z = 0.315642614492;
    tmp_tmp_msg_1_0.z_units = 64U;
    tmp_tmp_msg_1_0.radius = 0.934320592399;
    tmp_tmp_msg_1_0.duration = 32136U;
    tmp_tmp_msg_1_0.speed = 0.272881072338;
    tmp_tmp_msg_1_0.speed_units = 119U;
    tmp_tmp_msg_1_0.custom.assign("UJYEVLQTSFJXZFOWGSKHRTIDFHKMDSTLYOKQIACUADYSPUUVBVVJSXBNXRIMIJZOIIFYTMHHRNGZQCKTMWPWQFNNYPRQZQMFOLPBFZYUBWYAEULCMEESODBUPYTESCNZHGMOFWPZKVTPOQYUKQHOWDLNASSEGDGSBJLTNZOWEXMXAKJGLIEMFZTRALGAPNCCZWJHWVRKIJQNWXHDJGFVVXRIVCARAUCEYPXRBNEKIDKABL");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::RegisterManeuver tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.mid = 38942U;
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("NVOYUGBGVSGLWZPDEICCHNEFDPMBSDOIYWFRFNVIUNBLYWOIPAYUTTHXWHBYWVPBAZWYJBHSDUSSSKLLMWQKKKPZTOTSOUCTVZARDYHPTQYCGEIJEXSQENJXMEUGONPEZMNJHIFFCMUORMJIRTUNCXLTWGAFQBKPYRLFZALFITRLCXEAYMVKDCQ");
    tmp_msg_2.dest_man.assign("PYUIJKRNIOBXTGNHBMSCNXUUPEMMHYFAZSXWDUOFDUEBSTJYZITBBNPNLFVOBVAKUEASOGWJRMWTTFYVVOQEFMSZRZXNXNROCPODLBWWQGAPKFYTVRHJVQAQTYIKLQSWCVZRPHXICFRHNWHOZEXMZEFJWXTAYIQYSHYEJQEQ");
    tmp_msg_2.conditions.assign("CCNNUTIANBKKYMTDTXGTJPPJPSVYQXZDBSJLHXSJCFCGZCGSHNTWUPLLVUKAQKXWABSFPEFGJDYLEOKIIEIBQGQVAOCMEVFGWXDYIGWUFCLQDPDXYYNGFMUVJOJODKHERDAWHLZSQHBRHASIEOLPZKMBHRHOJQYACYDUMEVNCSPBOXJTIXROMFVNRURWBMUIWJXDRWLEVTTYZFAZMRSZSKUQOTHVZKRNERGUFILWVQXPEMIYTWABKO");
    IMC::EstimatedStreamVelocity tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.x = 0.442020138847;
    tmp_tmp_msg_2_0.y = 0.750246227257;
    tmp_tmp_msg_2_0.z = 0.951181911804;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::NavigationReset tmp_msg_3;
    msg.start_actions.push_back(tmp_msg_3);
    IMC::EntityParameters tmp_msg_4;
    tmp_msg_4.name.assign("JPHENQZEXDLWHGCKEKLHXPXLULQSGCFMUJZMHJIBCHFWITWSXTVDLEZMSHAVBCYKPIZWFUKHLOWAUPCOZOJFIADONWNNSUGONYRTCKER");
    msg.end_actions.push_back(tmp_msg_4);

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
    msg.setTimeStamp(0.0299264409431);
    msg.setSource(34220U);
    msg.setSourceEntity(25U);
    msg.setDestination(48391U);
    msg.setDestinationEntity(108U);
    msg.maneuver_id.assign("ZLFAQWAHKNYZJKSAMGAIIZCWLGKOZYBRCPBHOFCYLERGBBDWYCFQOXZYGADBPEXXNVPJEYWVBWKUGXCOPPVIDWZNGWRJUMWUXIRYJGTHDRKSMXHYKERJIDMW");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 44116U;
    tmp_msg_0.lat = 0.477612606722;
    tmp_msg_0.lon = 0.181072961119;
    tmp_msg_0.z = 0.67309229403;
    tmp_msg_0.z_units = 89U;
    tmp_msg_0.speed = 0.30685890177;
    tmp_msg_0.speed_units = 197U;
    tmp_msg_0.custom.assign("UGOXFGDVUVEATXOPIPAQYHDNJSZHAMDZFZZOZCNLDGCBNPFNDANHDTJWPIVHLJFWZUAQZFJKYBPJQTIOEAPDWPZGLRHYLCKTUGNMKQJSYWPIJDXRXTVUQMQWCWBJDIAFYJRUNEHPIERIQYXKNRXMMUMSEAYLFZTEWSMEECSUQWRLVGRZFWSOBXKXYEYCSGSRVITOQDCCOUMARKLVTUCOIRBBLPFOEBYBKGQKSBHLXIHMGMHANCH");
    msg.data.set(tmp_msg_0);
    IMC::AcousticNoise tmp_msg_1;
    tmp_msg_1.summary = 178U;
    tmp_msg_1.level = 237U;
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
    msg.setTimeStamp(0.413832059943);
    msg.setSource(13100U);
    msg.setSourceEntity(7U);
    msg.setDestination(16157U);
    msg.setDestinationEntity(147U);
    msg.maneuver_id.assign("NFVOKQPVNUGAGMJFXKSFUHEXRQJPBYKOOQXTZLLUOEKANGCVJSHCQXKHIMTFGNPYPVBYAOEHUAFGEQJSGISQTMLPFXWSCUMNAVENWUBCIQ");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.435102772855;
    tmp_msg_0.lon = 0.334351646191;
    tmp_msg_0.z = 0.187696693525;
    tmp_msg_0.z_units = 127U;
    tmp_msg_0.speed = 0.0958928665501;
    tmp_msg_0.speed_units = 130U;
    tmp_msg_0.custom.assign("SQFICHNMKBAKKJEVWVCFETJRIHQBPHQDAXYEHEIQKKNQHYYZMZGFILWNYZUVWDRPFBHZZLXBBHARCMOXWNOEDFVSJRSFODIGKQJUYLEDVSLROGQAWUFCCEZCZRIOBFVBQYTOMWDOVZNXJGSMPTSZGALAWITPPJRWLAOPNJCTTTFQUNSLXJXMBEWSCMXIPLR");
    msg.data.set(tmp_msg_0);
    IMC::Conductivity tmp_msg_1;
    tmp_msg_1.value = 0.461502502011;
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
    msg.setTimeStamp(0.612975325695);
    msg.setSource(65274U);
    msg.setSourceEntity(42U);
    msg.setDestination(5367U);
    msg.setDestinationEntity(7U);
    msg.maneuver_id.assign("VVNYJBFPLFCKKCFMZFCYHXLYMERFXJUKTTHPBSISIDHUXQAFLCQFTTMBPPKEKVYJGWLMWQQQBXWNJVPWNPVTMXSTURSGSRWRMXOUMFZGDHIBWKCCHBHDJQIAQCRTBADPNAXLIYDUCRTPKLVLZOSJQMGOYOZFRRYTAGNUEIIXCBVLOGEASSYEZEVMCIEQGODZVBZ");
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("BRQUKVYNDALALUWBYQCDRTPCXOAMNWFQVXFWPBXACTJQHGZIKGEGLRJEOEDMPNFGSMSEOXIYUVZMEVFFAZWPTIPIIOZNWCOAZDWGCLQOQOWVFUYRNGKDJBZXKTVXQIKOLRMRSBFPBYOFYFHBHVJCYESTDAHGNCLR");
    tmp_msg_0.reference_frame = 60U;
    IMC::VehicleFormationParticipant tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vid = 15818U;
    tmp_tmp_msg_0_0.off_x = 0.564642119433;
    tmp_tmp_msg_0_0.off_y = 0.147038693487;
    tmp_tmp_msg_0_0.off_z = 0.454118979615;
    tmp_msg_0.participants.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("OKULTJYVRMIIFQUWWLVFNETOHEDXVTADQHLJLLKCAIVJGXVHKUFATCYSBOKBMVMPWPJZROBYSHTMSUYGMF");
    msg.data.set(tmp_msg_0);
    IMC::StopManeuver tmp_msg_1;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Pressure tmp_msg_2;
    tmp_msg_2.value = 0.0270558276548;
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
    msg.setTimeStamp(0.586891218379);
    msg.setSource(21485U);
    msg.setSourceEntity(143U);
    msg.setDestination(16719U);
    msg.setDestinationEntity(88U);
    msg.source_man.assign("GYTXGIRCVXLKHFZOWPRHXDPKXHNWPKNTAXYJOWMVTONEKJZIAVMHQBWBLJGMCZDSSGRBDKFJIGUSE");
    msg.dest_man.assign("EEKPUYAKPQNWNJCDAXIWQONPMG");
    msg.conditions.assign("OVTTBFKOXROCAKBWAQIGOBPABDZUQNRIBCVWVRUHVOQELBNDJDJMRHJGHQEUIZAXZZMLYSQBEETOMKKXPLLICCMDAPCMFKPZELNLEFZQHCLUKXOHUYGMSYYKSHIPKWUCPOTJSELRAIGFQAXPNBDDWZGJMZRXJFVACXIHG");

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
    msg.setTimeStamp(0.62402103794);
    msg.setSource(22113U);
    msg.setSourceEntity(71U);
    msg.setDestination(3957U);
    msg.setDestinationEntity(112U);
    msg.source_man.assign("HYKZPNBURFUVQQUSDNPLUSTVYIGMRQYIENHOVIWPFWGZYXONMKWKENLYQOCKGGRRCBBDDAHEUDJPXRDE");
    msg.dest_man.assign("XLMMFFVJJHGEQUABEKTSNWZRXXLETONZXQNMKEPHUBJNEBXTHYQSFUMUZVZDBVOIIYBICJQCSHFWSGJWVNCPOVMMGBWJFTSHCJCDRBGPAKURMOZGERVRBIRONTYRGTREHTKZUKWJQDNDXLXXULMVWKOIIZFPYDGYDZTSZSAPNXBICIDYWYLNYHHUOLHMALQEILAHIPCX");
    msg.conditions.assign("FGZHXDKGROBIGLXGMLFJPRUPSWFYAJDOYWJBWNZHENREOVICUGICWSNHUOMQBROYQHJSFMDAPJWXBMJOLTBTDZLZSXEYQPUXYAZNBNCKUTSELYXGNZPAFFHQKRVZGIIY");
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 30866U;
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
    msg.setTimeStamp(0.101440680727);
    msg.setSource(49964U);
    msg.setSourceEntity(159U);
    msg.setDestination(20702U);
    msg.setDestinationEntity(6U);
    msg.source_man.assign("RKKEXORWZZDLMMQNYERGSFVCJFWXJRBXPHIGJHKHVXPZNCCDTNRYYFVCLQPNLUICHUDBECASCGGDMUHBZANAKLERBTOZYPIFPVIXETNTBEYLSMTPJVQPXOIGEQBBQVGQFFCUTUWMUYJDKANHGWWKRKKAYNVIJOQJONSCJWLUFRGISJMAUKBWMZZASJASD");
    msg.dest_man.assign("NQYSDAVZVTMTNLMUCAUSFVFNZRNJGHGQIXNOKBBAKGBLUAWQJZLKZHVQFOGDWFOVHRMDEXXIIGEPCXHUTJFVRGHJEQNOBCRCNUPVDNSNXALWFRRUBGACJHADIQIIWYTYEXOWEQGMMY");
    msg.conditions.assign("NRMTBQUNQNCAWCISGUNKSSBFTJHEOLVYEAUOIBSXBJZBUOCTMVJZPJKADPXYOQRZLPUTFQVIQYYNWCVGUUYZOXXSCLLRSHDFEVPNDZJCFKLVELYNPIUHPVALXGFOWOHHXFQPZDQURSQKYRRHYTVBDTCLRPKKBAIJCZBEZFMNIGJDLWVISGMOXUJTXIZWMIWMVPYKEFMKTRNEHF");

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
    msg.setTimeStamp(0.326425339454);
    msg.setSource(13249U);
    msg.setSourceEntity(228U);
    msg.setDestination(41877U);
    msg.setDestinationEntity(226U);
    msg.command = 69U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("KVDOWZYEJKFGCHLBGFNCZOBJISVHNNRKKTJVAAZMGXUDCLSRSRLOKTITXOPUZDWCHQPFETQUEHBLOSAVXXDUINMARDPHHINIXQVPJQDNLNYPSMXJFSJULPEFULKNVTXRBDPW");
    tmp_msg_0.description.assign("ZIGKVKEQRPODJGFMERGHCWCIJZHFNLLTXRYQPWBWIPWTXDMNYBSJSRGYDVEOZLZFFFSPRYCHMHFXERAKMFFFJDCEIJLUZPINPTEZGLIANCBZCPBMCUWKQJUCQNVYWXOSOVLLAOHSOTANBUXJVCOBX");
    tmp_msg_0.vnamespace.assign("NMSVOCDNXKMHODWOPSBECSWJRWMNHEZASMXGXFQRETVNPQDIGJJZITCMLSMIUAUFKYDDTVWSEWWGKNIPYYBJBZZFKAMHVFRPWALBBOPGTTJYFKFBUEEGRMOHRXKXXDABIREOTYAFKVTSFHHXGQYZEQTRNJIQGNDSLYHVZCAQAXFNIMLDOYVIYBSBOXYZCHMLCHHRIZXUOPNCNVKUCAVAEG");
    tmp_msg_0.start_man_id.assign("CHDOTZDEJYILTXYQFCHMQUZVGYHKPXGSDDNFWLQXNZNAQPAQYVSOLMFUANOZVEEXXVJJRKIEAAICSGMTGOWJSOWNDHPRC");
    IMC::VehicleLinks tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.localname.assign("ZFGBJBMXYDPUQUELYXCCMMGXIIPFGITYPVMPOSVQENCL");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.638269185146);
    msg.setSource(29769U);
    msg.setSourceEntity(28U);
    msg.setDestination(29258U);
    msg.setDestinationEntity(22U);
    msg.command = 165U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("TQWPUBYAOKTCXTDYRGCCULHNNZORALWSFEAVMZKWGLXDBAEEDIHPIQFJHXDCQTRSELAIKOTKHOMXRNPYBNBIQIVGNENVIFCXBNKLIMQCJWHVQZDIZUHBKXHJFYDAPGYUFLGDKMOFSBERTDWYBKSZUJPOUFJQDWRALFYSCVSAGXQRTQPGMMEWTOXTPHZCMPHUGEGOJWAXCGVVJUSEYWVNZAVKNQLMPZSMRSUUPNJJCYLBK");
    tmp_msg_0.description.assign("BGEMCXXLSHFZPLKWOBTFGHCEIDSPGMLIUPKZDTPYWFOXCNSMQ");
    tmp_msg_0.vnamespace.assign("XNMKNDIVOWUCDVPUCMBGNXLBEAJBQZLOINPHXMBW");
    tmp_msg_0.start_man_id.assign("OGVVBUWJDILLGGOPRLUDEMGVXYPDUFQXOAGRHEKNTQCTSSCNSJNLXJTAWCVPITWTYZSXGAACXAVGXKEBVIONQJKRAIRITKQURFICHDKSCWEBVOSYBZINRNAVFHBZHLWWWITUNEYQKBQZDL");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("MDHZHHAWQPGXTREWNWAOXKRJYZQIVBTKRTYJKPSUHKNBJCKWXIOVHQPTVEPAADTYBIOFAEISNJXCGGZWRZYSXVDZTROFNYYEIGVQSUUCBJAPUMIVYNMXQDVYXFUDPGUSUMQXDUSRLSBQPYJBXUQLLFRJHMIEEWZZNJPDMO");
    IMC::Elevator tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 8966U;
    tmp_tmp_tmp_msg_0_0_0.flags = 198U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.871740257673;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.0806415187982;
    tmp_tmp_tmp_msg_0_0_0.start_z = 0.552952680798;
    tmp_tmp_tmp_msg_0_0_0.start_z_units = 103U;
    tmp_tmp_tmp_msg_0_0_0.end_z = 0.449251959548;
    tmp_tmp_tmp_msg_0_0_0.end_z_units = 174U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.335441721792;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.697642385546;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 100U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("XYJDLVBPEUFIWVXOXKDSMSRTEIAAYEPYPWXCGBWOOCKXSUCZGQOFNUYOBOYWTRLNQAAZUWHIIJNHKBZBALOSZBBNRJHQYEDTSYZKLCJKGDAUZNNDAWIELGMXKUVSETHOBAVXPYQZCRTJLHNDIVGOEPKVPKSQIJICUHCAQMVLPSWJRVJCM");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::RelativeHumidity tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.966092641973;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::EstimatedStreamVelocity tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.x = 0.673893364262;
    tmp_tmp_tmp_msg_0_0_2.y = 0.820966520972;
    tmp_tmp_tmp_msg_0_0_2.z = 0.113211546211;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("DDXANUAZNBOIHACEFTPIKCXFGJAGQEHXXQZUZLRYMBOTABZLACVHXRWWHKTPEBCHZVMEUJUWEQIKLUGMQFSYQSNWRLKGVUUHMREDLFPFIOVNPOTGWRWEUVCFKKMKJVELJNPVGYCQIMYPITJBTGIPSNRBSAZQ");
    tmp_tmp_msg_0_1.dest_man.assign("OQDSQSFPBNKSUKOLCGMASYWIUUSAMYZCKKNFLWGRXLDAMKDBTXHNOIBGNFJQEMOBQXUZNUNVLIUFSANXGCVEBIWY");
    tmp_tmp_msg_0_1.conditions.assign("HZLUUYJBHKVSSSWQORTANJAQFWCMMOLLQKFPNXJZEXUAPRFELTIYZJSSPRAKTXTVMVPDWSHJCDCAKCMOWNTUMITVJLGKKGRPGQQEOLIRXXUOIJWIMGINKLXZQPMBNDYEXZXZOBJPZWQHFDTENFGKRGWOVZVOO");
    IMC::DevDataBinary tmp_tmp_tmp_msg_0_1_0;
    const char tmp_tmp_tmp_tmp_msg_0_1_0_0[] = {-45, 24, -85, 89, 72, 61, -101, 120, -80, 7, 45, -100, -35, -18, 115, -100, 14, -56, -5, 83, -106, 39, -113, 18, -17, 45, 79, -25, -44, 60, -88, 103, 65, 35, 71, -95, -20, 16, 18, 96, 78, 14, -2, 75, -44, -78, 36, 124, 61, -102, -50, 20, -118, 4, 71, -108, 108, -12};
    tmp_tmp_tmp_msg_0_1_0.value.assign(tmp_tmp_tmp_tmp_msg_0_1_0_0, tmp_tmp_tmp_tmp_msg_0_1_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_1_0_0));
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::MapPoint tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.lat = 0.884644639668;
    tmp_tmp_msg_0_2.lon = 0.358938393708;
    tmp_tmp_msg_0_2.alt = 0.547426808597;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::SetServoPosition tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.id = 161U;
    tmp_tmp_msg_0_3.value = 0.207604877805;
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
    msg.setTimeStamp(0.157925131474);
    msg.setSource(32130U);
    msg.setSourceEntity(253U);
    msg.setDestination(14078U);
    msg.setDestinationEntity(128U);
    msg.command = 79U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RWERWIMGRQUDRFRUOIYFQMTHJEUEGVDQECSMNSOTXMHCJWLXSXXSUFMBGMZTINCKXBKTOOQOMFZQYFYTATJUCHVGIQYFLJIRWWODABDMYPOEDNYZKJIFLKPTYXPGWPYSSNMQQKIRFORLLJHBAYSRDQGSHOOBPBMN");
    tmp_msg_0.description.assign("YXRKYVRTMJMBPMBHUBGMNZSAPPMVWAZSJUUFCEMFHIRYXOPNXIJARDPCEZRUPILEHVCBECMMGHXGJGHSWIGGOKDXVEKPRCAVVMFAHLJOIQOIOTSDGBWRKZ");
    tmp_msg_0.vnamespace.assign("SLGYVBWONBHMGCOJSXHKRMMQTXFTNAQXYABHQVVUZZZKPPYLSCBSWCIO");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("CVNNCEUGGRUAGMZU");
    tmp_tmp_msg_0_0.value.assign("JJPPIRZPLLVLBATBKVFXRFLUESLHBJEODNXRRTAZVTIUHITYYYWVMQSNFFGGMUVYCVHADDQFJQHIPGMNFSAXQSWRRDPZLDUUCNZNEFMRIVOXOLHQQGHBDONQIHQUMRKCKEATBCONTKQONKPPDVXJTSJEDVBUKBZIWBPEHGGVHFWESZCDALRSLWUGCWQJNNJDCYYX");
    tmp_tmp_msg_0_0.type = 224U;
    tmp_tmp_msg_0_0.access = 136U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("OEWSTCOFDBLXMBIRIWUQEUEUQPYDZDOTLYVNNNCXQFFVCYTPKRKXVZOSSCYNVOGVZOPYWSMSKMYBMJXPNXQBCVGGVLXIWNZSHLLMGBRBGIEWJWNVTG");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("DOKLBMJQKRSFSJUFWCOGDGDDAWFMVCMDUCNNIORJCTEBOLUPZJXEWYCGOHQSZAQXIPTTFXAWBTFUYRYNEOMAAHLYYMGTUQYVYWCZMCKWRYMFVKHBAKFXGHYLZOCWKRNXGVHOXTZBSRKJUQEHMDXPJNUSMEEAQZSGFDUXWLQRIO");
    IMC::FollowReference tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.control_src = 6231U;
    tmp_tmp_tmp_msg_0_1_0.control_ent = 129U;
    tmp_tmp_tmp_msg_0_1_0.timeout = 0.0446394142462;
    tmp_tmp_tmp_msg_0_1_0.loiter_radius = 0.0311664092983;
    tmp_tmp_tmp_msg_0_1_0.altitude_interval = 0.0919572406742;
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::SessionStatus tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.sessid = 4131472205U;
    tmp_tmp_tmp_msg_0_1_1.status = 33U;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::TransportBindings tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.consumer.assign("IHDQXWIUIWSOIPEJZOOCABUDMKMJTJVQLPPVKDRGNNKXDYOPZPGJGAXTUMMT");
    tmp_tmp_msg_0_2.message_id = 56775U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::WindSpeed tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.direction = 0.366067679444;
    tmp_tmp_msg_0_3.speed = 0.328048503485;
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
    msg.setTimeStamp(0.22776995556);
    msg.setSource(63536U);
    msg.setSourceEntity(25U);
    msg.setDestination(48875U);
    msg.setDestinationEntity(168U);
    msg.state = 175U;
    msg.plan_id.assign("GNBORYDBAGTCAFFWOUYTQPKWLMTI");
    msg.comm_level = 188U;

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
    msg.setTimeStamp(0.709210751911);
    msg.setSource(59289U);
    msg.setSourceEntity(209U);
    msg.setDestination(51035U);
    msg.setDestinationEntity(198U);
    msg.state = 159U;
    msg.plan_id.assign("UBNWVDSHJIGCYDQAFHSATUTKYISPXQGDSREFWIDOXDLWBVMXFNCVPHBPZTGJCFYOEYOKOINRPEKNVKUMEBNLNMMQBIJLLRGHRZLAEEZYLMPOXTADRADZQFHFYBDJUOLVCVRCGIVMOHQGLYNMIZJESROKOZSHJSCZQAVETEXYKRXIJOWRMH");
    msg.comm_level = 131U;

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
    msg.setTimeStamp(0.515910356767);
    msg.setSource(9787U);
    msg.setSourceEntity(42U);
    msg.setDestination(21033U);
    msg.setDestinationEntity(177U);
    msg.state = 13U;
    msg.plan_id.assign("NFETBBWSVOATKADLUIJCXRSVVJXDNTJOLTFXVJVOSVUZWITORBPLNKUAKORTZWGEFJ");
    msg.comm_level = 69U;

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
    msg.setTimeStamp(0.203600614654);
    msg.setSource(16886U);
    msg.setSourceEntity(204U);
    msg.setDestination(29672U);
    msg.setDestinationEntity(56U);
    msg.type = 32U;
    msg.op = 85U;
    msg.request_id = 52015U;
    msg.plan_id.assign("KXFSOTVMUOVYVUQBSWQTROVSXXSKNCLWLHZSDUXEJGNAWZDTOGNRXKIHOYSGOYEIFIGYOPWJZCVMJPAFBKINWRGDUPTZMVYVZPA");
    IMC::Map tmp_msg_0;
    tmp_msg_0.id.assign("TUFQMADZLILRIPUPOSWVEWV");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DUIWFBQRTIAHEDNXMLCKPEPYEOAEMTTALHFSGVCTXFJUYRZWHBOOQTLWAJNXHTPCIJJKYSRPZWUZFBJZNFRRHGSIVUIXNWSZQXYJZGTXZF");

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
    msg.setTimeStamp(0.1171607186);
    msg.setSource(30122U);
    msg.setSourceEntity(33U);
    msg.setDestination(33556U);
    msg.setDestinationEntity(247U);
    msg.type = 130U;
    msg.op = 200U;
    msg.request_id = 44611U;
    msg.plan_id.assign("STRCZUIVTVCYLOZJLHNEYJQKYGCIRIHDSHA");
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.876712064928;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KOXYJERNPNSAEUIOYCLFTMYEKMJNGLUGLURFNUDPSHCDMYGFVIDXCZVDOZWAEBXWTMOYWSLPVDZGHOKBEUFOCCKNAXMSDTRAVANDHRIAOQHPUPT");

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
    msg.setTimeStamp(0.136195067541);
    msg.setSource(33441U);
    msg.setSourceEntity(105U);
    msg.setDestination(36337U);
    msg.setDestinationEntity(194U);
    msg.type = 86U;
    msg.op = 104U;
    msg.request_id = 52781U;
    msg.plan_id.assign("YMGRCLCDYTFWINDRNTVZMOIKDGDJJXKNNGCDPWGGWHTMHTJBTHSJAWHVCOHOBVICZULPYTBEJAYUKOFVSCEWDJNEERRDKWSMWTUBULDGKLCHJQMEVEUGKPAEGIYFZUHVWPORZFXPYIOLXBQS");
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.456040810608;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VAVVGHBNMNOTWDUIBCSMYMLLIMHGL");

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
    msg.setTimeStamp(0.705486053034);
    msg.setSource(16615U);
    msg.setSourceEntity(29U);
    msg.setDestination(41702U);
    msg.setDestinationEntity(152U);
    msg.plan_count = 8377U;
    msg.plan_size = 463174899U;
    msg.change_time = 0.977187354046;
    msg.change_sid = 30900U;
    msg.change_sname.assign("BPIDWIHHIEGYGAGDKQQSANYSUDIJDHZHVHTWMNLYDWFFMIEFOVJTREGGBXSUYZRXLKCDXOQZXTFQTPNLQDXBLBLRXMDLZPMMWVJFCYBIPWKRYXESFGKQOMWECJWCRTAWUYNNMJMGEIRSQ");
    const char tmp_msg_0[] = {-13, 1, -58, 121, -30, 125, 83, -15, 26, -31, 107, -3, 9, 81, 9, -41, -69, 3, 106, 94, -43, 73, 76, -57, -68, -70, 27, -61, -2, -70, 31, 98, -22, -85, 53, -77, -115, 90, -35, 41, 124, 103, 97, -16, -23, -88, -28, 55, 111, 110, -113, -110, 109, -71, -33, -68, 1, -13, 79, 83, -82, 115, -33, -97, 60, 126, -22, -125, -36, 121, 96, 108, -38, 24, 89, 77, 46, 96, -88, -121, 118, -78, 34, 119, 63, 83, -54, 16, 100, 48, 18, -71};
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
    msg.setTimeStamp(0.55398411583);
    msg.setSource(35262U);
    msg.setSourceEntity(72U);
    msg.setDestination(54037U);
    msg.setDestinationEntity(197U);
    msg.plan_count = 185U;
    msg.plan_size = 3586686186U;
    msg.change_time = 0.058808806879;
    msg.change_sid = 48811U;
    msg.change_sname.assign("QIXMVTLMRZETVTJCGAQZSVIRLALMUWTOZNGGYXOVFQDQCMAK");
    const char tmp_msg_0[] = {73, 61, -91, 25, -27, -26, -28, -42, 124, -5, 58, 100, -32, -14, 2, 42, 76};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("CEPHWGORFWVGIKJLYIBEHSGQETBTAKLXFDIICJABABDXSWFJVCIZUCSRSIJZGXBWKDANGFNXRTVOQUONSRMKWABNJZQSLXJOLCPUOB");
    tmp_msg_1.plan_size = 6880U;
    tmp_msg_1.change_time = 0.580771379759;
    tmp_msg_1.change_sid = 28037U;
    tmp_msg_1.change_sname.assign("RWGBHYJHHCZPFEGYFYKLNRTCIBRCUSPDMUXAPIXICBMDEYNCPVMSMIXEQBZIDIOYKFGVLLIVXNZUKPWHXNVJSTULKYMWZTMUGAWQVNAFGAWTKRDAJLMVRPSYMSTUZJEJNNCNLHSIYCZOTKOXXECNPGGFKFDJQARFSYQSDONTQH");
    const char tmp_tmp_msg_1_0[] = {-10, 31, -86, 61, 94, -79, 115, -40, -18, -108, -93, -103, -52, 114, 103, -69, -102, -14, 46, 99, 7, -60, -75, -96, -46, 117, -97, -44, 74, -123, -34, -73, -59, -50, 51, -57, -55, -36, -43, 21, 58, -46, 106, 41, -7, 75, -97, -17, 76, 93, -96, -51, -102, 34, 11, 55, 106, -22, -36, -81, -3, 37, -97, 79, 33, -55, 35, 19, -52, -102, 30, -116, -9, -46, -3, 31, 2, 45, 50, 47, -94, 114, -92, 124, 20, 60, -56, -125, 72, 18, -1, 113, -98, -22, -107, 29, 101, 94, -80, 18, 67, -12, -48, 108, -77, -84, 48, -65, 7, 76, 98, -73, -49, -114, -128, 92, -69, -52, 4, -27, -1, 125, 85, -58, 101, 115, 80, 39, 112, -26, 84, 32, 120, 85, 42, -17, -17, -114, -110, -40, -103, -43, 10, 79, 38, -43, 13, -94, -123, 17, 72, -22, 76, 11, 85, -123, 7, 2, -117, -83, 77, 90, -94, 95, 19, 46, 77, 36, -46, 103, 15, -16, 62, 118, -78, 8, -65, -37, 14, -3, -7, 16, 40, -122, 95, 60, -93, 69, -85, 13, 123, 99, 22, -123, -121, -91, -47, -77, -19, 121, 117, -7, -61, 44, -50, 81, 112, 55, 87, -29, -122};
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
    msg.setTimeStamp(0.630369631312);
    msg.setSource(10453U);
    msg.setSourceEntity(248U);
    msg.setDestination(50989U);
    msg.setDestinationEntity(187U);
    msg.plan_count = 51281U;
    msg.plan_size = 476224246U;
    msg.change_time = 0.991628147498;
    msg.change_sid = 9913U;
    msg.change_sname.assign("WBRRBHKIHKEOOYDKQZRAAOETOGMMOIJKWGFRSAQLMFWSSWIPILGLNH");
    const char tmp_msg_0[] = {-62, 121, 65, -42, -120, 72, -120, -100, -28, 29, 85, 78, 35, -75, -57, 68, -16, -16, 32, -54, -62, 30, -89, 17, 58, -37, 52, -43, 41, -45, -103, 37, -46, -81, 20, -68, -24, -31, 54, 8, -45, -1, 55, -47, 110, -68, 103, 66, -15, 98, -64, -104, 12, 17, 117, -120, 101, 0, 119, -105, -87, 38, 108, 89, -78, -26, -58, -52, -25, 58, -100, 67, 46, 35, -29, -25, 41, -40, -95, 60, -67, -11, 97, 86, -10, -12, 41, -98, -42, -101, -44, 6, -128, 119, -120, -24, 42, 89, 63, -71, -15, -92, -86, -70, 70, -124, 16, -60, -108, -41, 25, -33, -28, -128, -113, 110, -90, -2, -81, -50, -114, -25, -46, -59, -6, -63, 87, -47};
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
    msg.setTimeStamp(0.00176672332377);
    msg.setSource(13259U);
    msg.setSourceEntity(194U);
    msg.setDestination(26502U);
    msg.setDestinationEntity(222U);
    msg.plan_id.assign("SBSWJJNMIZSUBLZYBPAAPFVMYILBIXGKNJMVLQNEIDEEPBHQPYCMXDLOKQHFJ");
    msg.plan_size = 16018U;
    msg.change_time = 0.0558386486306;
    msg.change_sid = 15756U;
    msg.change_sname.assign("DFBNUVVETBCWRDBUXRMBWAZJENJGUWNEQIOGPFKNVVPXWLXIGPKIUMUSOYRXLSJEACDWOMZMBKTLESFYZCJJGPOILWKHXTQLHOTIHCACKQDIXVBRXBSVFRYHCBPLXTKNZUDGHOJGFSZBVYNAC");
    const char tmp_msg_0[] = {-71, -4, -73, -61, 120, -93, 66, 92, -54, -125, -33, -22, 52, 32, -85, 29, 26, 65, 66, 121, -2, 9, 62, -17, -60, -52, -38, -118, -30, 20, -107, 73, 80, -25, 28, -107, -67, 105, 54, 2, 17, -109, 109, 27, -76, 112, -75, -73, -92, -10, -66, -11, 106, -16, -5};
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
    msg.setTimeStamp(0.323952867204);
    msg.setSource(40189U);
    msg.setSourceEntity(243U);
    msg.setDestination(22594U);
    msg.setDestinationEntity(103U);
    msg.plan_id.assign("SRFFMPLZXHXYTHJVRKNQDXXWBYURQAKPSSLFWNJXNHUORFBVGPYXFZCEQYMREWMBJQHSTWADDRWNEDCWIUNOTQMA");
    msg.plan_size = 53354U;
    msg.change_time = 0.594288022346;
    msg.change_sid = 2849U;
    msg.change_sname.assign("UARGZIMXJSVDNHDJECGYBJWJLLZDCXVHIDBFLGEALTMTLBRQQGQYSIXPNBBDYZQEJPRDKJZHHWNIHRIKLIFSQRBNVXYORTMVSOKLSHXWTKTXMOGGYPVQRTUJYGQAPROZQFOALOJNFENVKZEHUMQDCFWDUTKXCMF");
    const char tmp_msg_0[] = {-114, 75, 100, -2, -53, -33, 21, 47, 24, -57, 74, 34, -64, -90, -37, -126, -69, 109, -124, -5, 71, -65, 125, 112, -94, 13, -44, 22, 31, -77, -47, -5, -73, -54, -22, -59, 17, -93, 26, 2, -20, 31, 36, 27, -90, -78, 105, -114, 40, 3, 82, -84, 123, -115, -62, -111, -113, 6, -92, 57, -95, 22, 83, 37, -122, 6, -84, -116, 67, -96, 103, 56, 65, -10, -113, 71, -92, 0, -61, -85, -1, -119, -107, -79, -9, -6, 108, -47, -36, 81, -75, -125, 44, 56, -19, -54, -39, -29, 64, 84, -12, -78, 11, 32, -114, 112, -26, 84, 55};
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
    msg.setTimeStamp(0.569473520766);
    msg.setSource(55034U);
    msg.setSourceEntity(159U);
    msg.setDestination(57053U);
    msg.setDestinationEntity(94U);
    msg.plan_id.assign("GMQOVPCWDQFWAVEPUIXJDKZRITZJFEPFHBCGBPZBTNICTMRRBUONNGGFISOVFSOPRUOLXRQYMEZZXYSOEHPNPSQBDGYGPENTQDKUAMTHLCMMJAPTLWFQYCXUIQMOWTBRHAUL");
    msg.plan_size = 64207U;
    msg.change_time = 0.971064155599;
    msg.change_sid = 43804U;
    msg.change_sname.assign("FSBRWKPBIRGTAKYDGOEMNWJELVGXTVYWSZAELOMLZGZJPZFQDCUCARBLWNASXTDFQYAGPRPPSDJAOWVYYMJOUBQVCQIWGGWIXDFMEOORHGFLDAYWF");
    const char tmp_msg_0[] = {94, -23, 11, 63, 120, 114, -53, 22, -80, -72, -34, -76, -127, -40, -62, 25, -44, -31, -120, 14, 75, -53, 116, 113, -39, -49, 104, -97, 61, -105, -70, -126, 44, -51, -43, 60, 10, -66, 26, 44, -55, -54, -80, 64, -57, 63, 100, -119, -73, -82, 9, -48, 1, 42, -4, -33, -56, -115, 75, -1, -35, 6, 52, -110, 8, 86, -110, -18, -39, 53, 125, 97, -56, 98, -25, -108, 104, 71, 46, 122, -60, -24, 5, 37, 93, 9, -41, 69, 34, -118, -125, 76, -55, 65, -112, -6, -104, 41, -77, -84, 98, -106, 74, 65, 13, -82, 0, 47, 125, -34, -64, -15, -77, 103, 7, -84, -26, -11, -111, -26, 3, 19, 24, -56, 85, 71, -124, 59, 52, 61, -10, 86, -120, -124, 120, -119};
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
    msg.setTimeStamp(0.246041437811);
    msg.setSource(63184U);
    msg.setSourceEntity(36U);
    msg.setDestination(14187U);
    msg.setDestinationEntity(14U);
    msg.type = 157U;
    msg.op = 213U;
    msg.request_id = 51756U;
    msg.plan_id.assign("CSRGACNNHYQQBCMKEIIFMACMLXVMGANEJMRHRHSFYLRASOVU");
    msg.flags = 20022U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.792860190931;
    tmp_msg_0.y = 0.445980621867;
    tmp_msg_0.z = 0.662769149186;
    tmp_msg_0.phi = 0.207741743296;
    tmp_msg_0.theta = 0.528326825555;
    tmp_msg_0.psi = 0.343929159353;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WGBHTIZVMTLVJSNABKJJFTBIEVDVNQXEESIYYJBULUGIDFXQRSVDEQHWBLMZCAFKWUFGWRBCOTGNIRLOWOREQPHPGFJPDUYOXFXFXEQOYQPGYMLTRQTPZZAXDNKSXORCBKVWIUALTROSDNIHMWWBFIKBJSGHWHVKYFJYSVTURPFQBLPTSNOSNCMUMCXZNYQPAUYAUKAOULVAHWCGRHAIEJNEMKKXJDGGZVELDCMZLCZHKXZRCPOIHSMDZJYEA");

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
    msg.setTimeStamp(0.332456211381);
    msg.setSource(22284U);
    msg.setSourceEntity(13U);
    msg.setDestination(35486U);
    msg.setDestinationEntity(248U);
    msg.type = 37U;
    msg.op = 50U;
    msg.request_id = 47667U;
    msg.plan_id.assign("TFTQQCXLWIRYCMAMZSETXKFAIXWOYRICHLJEKAEXCQEIRNVASTOJTCWOVSOTBIUYJPOTFLXEKDWYGAWMGYDBBIKALRHIDUVZFKRQSRMKUZIDDPMLO");
    msg.flags = 61039U;
    IMC::CreateSession tmp_msg_0;
    tmp_msg_0.timeout = 3013729416U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DTFBDNPAFEBSICXXNCYPNUZFLOQHYEDFRLYPKBGPKSKKKAYVTNUFCEWLAXCTHSPSUJQLRMDLEKXIRGWRIEXVYPEQBJUOWXCQFLPKBGIOIQOKEJXZLTPDNPXYGAQGFADANGWVNDZBRHBWMQGZNVOHLDZHCJBUMNEHUE");

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
    msg.setTimeStamp(0.639727124912);
    msg.setSource(64814U);
    msg.setSourceEntity(216U);
    msg.setDestination(58511U);
    msg.setDestinationEntity(235U);
    msg.type = 97U;
    msg.op = 34U;
    msg.request_id = 60591U;
    msg.plan_id.assign("YXLEODICUQMLRSMRAYPTWBIZEKPJDLMUPGDOUBAWNNUOOVCWRXAELTJUKDLVEPECVHPIEJVOHKZRYPHAVUHHENQLQAVDXIIISUSORHUGZTYZOTWPXNMSKJZHQWWMGNFKJSDFGFXOHRJMMZFTMSIBYXAMBKITPYCMYARBXCLWTKFVEXFGIABVQRTHDQJZWNCLCCRSLTNNJZJGCKDYEADQQQOPZNFWBN");
    msg.flags = 30590U;
    IMC::TransportBindings tmp_msg_0;
    tmp_msg_0.consumer.assign("QXLDWMHNQNNDJAPFYIKSENJURTITCQXVLTCPFNYSCMBSFLRGAZBTYQVHKDMWJWOOPTIEBPYJJBLZIANVBPEFYJQQHDURVEAXKXDXCLTUVYNMOMKUHVYZIIGCQWQWUKDFDNZZJTVCATLEOREJKGOOMLWEZMHWRTAPUCJWHIDTP");
    tmp_msg_0.message_id = 22528U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SJHYRKZEDOMXYRQRGTFKNYFXKQZAUAPCIVGSZEMBFNVRURJUFPWWQMCKXILCHKIRXXLCKMVREAWAYKGHPSOWHUPCQLRGQDXOYJQJWDWFYOYABVIIENUCOFGOJIYBUJZJIXUODNHOEMGQLLTLTXHPBBLWOGADDSSZMUYNZFDHARETZGZTUVKPEZDHPNHTANYFODHETSLXBQFVCTMQB");

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
    msg.setTimeStamp(0.314243830067);
    msg.setSource(13032U);
    msg.setSourceEntity(181U);
    msg.setDestination(23585U);
    msg.setDestinationEntity(38U);
    msg.state = 21U;
    msg.plan_id.assign("WETRYIJEJKWGPMNKMAOMBLUNQPGWOURBPSRDOCKOAHFVJLWMVIJXNAIYPSVDNTFHPLDUFRZUOPBDEGNCBZWLVBTEFCSYQXCIVQDNBBRJQOPMUJFESQQBEEVRDZKQLIZZNCGDCHIXWOMJSNICXSAHXYJGECFQXNKTXNLSIHOPHRKSDACVVPAVTZGZJCFHGULAFMVWDEWXBUY");
    msg.plan_eta = -740560301;
    msg.plan_progress = 0.48433229102;
    msg.man_id.assign("DZFWBEOQXSAJCFBAJZPRLVXWADRQHBVIJCMCXSQTLSJZKUQRATNQIYXANWTYMHY");
    msg.man_type = 2631U;
    msg.man_eta = -1350618118;
    msg.last_outcome = 111U;

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
    msg.setTimeStamp(0.17054742868);
    msg.setSource(55654U);
    msg.setSourceEntity(195U);
    msg.setDestination(48006U);
    msg.setDestinationEntity(168U);
    msg.state = 240U;
    msg.plan_id.assign("EQJVXGUQCLHQOKF");
    msg.plan_eta = 761202867;
    msg.plan_progress = 0.644318277426;
    msg.man_id.assign("CTIFOHSOXAZSOJGUMHTJDHDTKCYQPJHFQQUROOLGMUSOCAQOHNSMCKOYSBPWZLSXMJKRIIWUWLNJEUXRWKHDOWKTRNCUVEQBVHKZDVIFVJCPXFEZBRXDQSYNGKXLQBNLDMGYIEYPKETRYNXPGZCVDFVIAFIJ");
    msg.man_type = 31217U;
    msg.man_eta = 449288715;
    msg.last_outcome = 227U;

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
    msg.setTimeStamp(0.154103624283);
    msg.setSource(15037U);
    msg.setSourceEntity(210U);
    msg.setDestination(43506U);
    msg.setDestinationEntity(177U);
    msg.state = 188U;
    msg.plan_id.assign("FZVIGCZZKCJNMQNHRXSMRFOJDEVWODZDNWYVQINDVQGFMMAEBVRQJPFHYZCIJSFLQUSDWSRSXLDTPSSTJKGVVQGPAAUOGFUUPCJ");
    msg.plan_eta = 561326867;
    msg.plan_progress = 0.481220456206;
    msg.man_id.assign("LGEWTUHCIAVTGDVYUDWCDNRVOQBWAFBCSQGTFKSKPREVUBHJPDVVSNEWRPPHFANXBQDGMGAGLRDLNSUXFIRIEAJCSRMQPDZEUNIFZCFPQGQBTIIOLVAYXQXLTLYFCKRFJEAZ");
    msg.man_type = 37110U;
    msg.man_eta = 460109756;
    msg.last_outcome = 25U;

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
    msg.setTimeStamp(0.781290226325);
    msg.setSource(40849U);
    msg.setSourceEntity(236U);
    msg.setDestination(9616U);
    msg.setDestinationEntity(171U);
    msg.name.assign("ZHUKQWKVJQZIPMULSRCEIDOKOCPGFLXNYRYDWOGNNIXDUHOUXETXRDBJLPWVIMDTYZYCOCFHGBBTJXKYCQAVLQPGEGNJHDRKSSLZYZT");
    msg.value.assign("OXEPOAIUDDNJDERAXQUFBLCKBUUGWRALFHVJPUJEEXBVYNUQQIIZDMGDTEBVNSRYVAFGTMTLTTKKHQNOAYMROQMZVHFSHQGXPLQIKESOARHWRPEEJEKGAOABYMZYVMARXDBBAFQPPCYRKLKTVGYSNKGSYHBHIFROWZHLPSIUXDCZNSWCRDNJDSFXNWPPHZBGYLFSGEXSMXYNMQDJNZJVOLJWUGCCZJICWMKXLVPICJZUWUT");
    msg.type = 46U;
    msg.access = 76U;

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
    msg.setTimeStamp(0.917251205796);
    msg.setSource(62979U);
    msg.setSourceEntity(122U);
    msg.setDestination(38522U);
    msg.setDestinationEntity(138U);
    msg.name.assign("UJKUSBSTBVAZTAGJDBDMNIEROXIKNNXFWEVGRZPLOKWBOPTSAZVIHFHVWRTMYVOANLGOGQYKVAAGGUVHXUWTFNOSYSXWJJITPQIXZLLKICPQLDFRAOLNYHWXXSZUEFZNKZPYNCVQCMBLSRJOMKXECNDKGJDGEWPDMEZPFDJREYBUUTUAWICBRTJUVFOZYCXCGEDFPHLMHQJZFDXYQCDFCUIGOBWSTHTAENIPSBBLMMHSRRCLYPYRJ");
    msg.value.assign("SLDIWOYBAHBRMPVKYECIPJGCKJHNXVZRJOBOEIDJZ");
    msg.type = 31U;
    msg.access = 4U;

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
    msg.setTimeStamp(0.512528848818);
    msg.setSource(48106U);
    msg.setSourceEntity(128U);
    msg.setDestination(63826U);
    msg.setDestinationEntity(105U);
    msg.name.assign("CURMQDYFTSHFXDESJLFDCXMSMWNBBVFNLKYTBRPSIOAPCSWJPBGHOSQXRNBSUKECRDJRZHVPTLEOKCJVVZNIHRTOJASGEWISRTCWLWLNKEKAHROLPQZJGXHUFPMZBOQTNZRTJBAZGHDRNVUGALCYIAYFDDKKCETUVGYTWMQJYYMMXXPIQLPLDCIUINZEQDBKPBFDGX");
    msg.value.assign("XCAZKUGPLPMOVUBPQILIVABLMWSAUEFECJOZURIFICJGFKMHGUTVOUFSYBSDYXHRSYEDPQGRDITYIDKRYJJJQJXXNAJMPNGSUKCBCRGFUMYQRYHYHFHNHVQCNGPTMESMIQTMDNORHBLWPZNHKMKXKJOBSDVBQVJVBFWCTQEULWPZYVODFKEMAZHEOPJRXTXLYCTCNZZHWPVGRLCOIQKTSXGODGXALTWRASELDKZS");
    msg.type = 252U;
    msg.access = 29U;

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
    msg.setTimeStamp(0.582542727342);
    msg.setSource(56225U);
    msg.setSourceEntity(149U);
    msg.setDestination(35519U);
    msg.setDestinationEntity(12U);
    msg.cmd = 59U;
    msg.op = 22U;
    msg.plan_id.assign("WQKPJOKMOHCHBZBYECFTUSGPQHEMYSTBQBXYPBFGMNJWLGVNWCSESNADRGLDLORHZHFKMKNDTGCAIPBQROPAGFHONFKUBUVLZQJDEDJMYAWSBLLOTYXXLTFQAVVAKGOLHVIUSKIDFILKEQXJARHIDMZIWRRBHYUNKZGOTUJWZVYORTM");
    msg.params.assign("FPVHHTAUFWCYJGUYOQJWCKSSWRYOSBZNXBLLZBRFCLUAQMGBYWRDOADRYZPFTLIRJDNMPBNPWAISFNRL");

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
    msg.setTimeStamp(0.735929231322);
    msg.setSource(58582U);
    msg.setSourceEntity(98U);
    msg.setDestination(62232U);
    msg.setDestinationEntity(167U);
    msg.cmd = 4U;
    msg.op = 113U;
    msg.plan_id.assign("BNQBASPSVGYC");
    msg.params.assign("NMQBIWKKJFKGRGGLJVKZXTBASNYBBPZLZPWQMJSLWLRFMRXPJDDNSBQSYFTPDVIKGXCKUGUMUCTSNWBLJBQUROFVLODDUHVAORRQIHXAIQYUXIYSFVMCEAZEDLNGFTEPEOUUSYBMYKWCOGITNDCHFJEKRWGYSFZRWAVYLNQTJVIWATZUAEIBPHDQOMWXLUXEOPCXOJTMXETPVOAHZF");

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
    msg.setTimeStamp(0.627316438617);
    msg.setSource(16571U);
    msg.setSourceEntity(192U);
    msg.setDestination(52668U);
    msg.setDestinationEntity(92U);
    msg.cmd = 82U;
    msg.op = 106U;
    msg.plan_id.assign("LZSAOBLSJO");
    msg.params.assign("KHEPTRWFKXEVIGUDRBCOMJBZNUMWLVGIAHSAYTHSVMSHEYZKCCAKZDCNBGMWTDGMRDXZLCOXOUXFBWPSVFTYCZPUYOYQOJHRBYYKWBFQGMUOTTXFNLUTJAJIJFZRQBLIEEJNHUANSTQETHFQEEDQVCXIGDHBRZLDPARWOGPQIYCLL");

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
    msg.setTimeStamp(0.708944109812);
    msg.setSource(44472U);
    msg.setSourceEntity(218U);
    msg.setDestination(29481U);
    msg.setDestinationEntity(177U);
    msg.group_name.assign("VQVXMGNRGQCKGBHOWBALEDXWRRZOQPDSQEHKIRMLTIYGNWNKCUZPBOFDRRMBMBBQXVXDVMTSUICOAVZADPFTSPQKOHMZFGRO");
    msg.op = 164U;
    msg.lat = 0.400188699534;
    msg.lon = 0.548458166114;
    msg.height = 0.90769407288;
    msg.x = 0.946042915314;
    msg.y = 0.606390379723;
    msg.z = 0.704526281602;
    msg.phi = 0.540279635152;
    msg.theta = 0.311345860021;
    msg.psi = 0.459804049738;
    msg.vx = 0.88009552814;
    msg.vy = 0.966276028302;
    msg.vz = 0.0702399748917;
    msg.p = 0.259168135155;
    msg.q = 0.367648644462;
    msg.r = 0.388123609456;
    msg.svx = 0.305198351091;
    msg.svy = 0.593327105464;
    msg.svz = 0.861413678892;

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
    msg.setTimeStamp(0.192155933321);
    msg.setSource(48274U);
    msg.setSourceEntity(115U);
    msg.setDestination(61189U);
    msg.setDestinationEntity(160U);
    msg.group_name.assign("LISFYRUZIDVLPEUHTTWDX");
    msg.op = 69U;
    msg.lat = 0.9315880921;
    msg.lon = 0.963623029068;
    msg.height = 0.124230930395;
    msg.x = 0.932271181244;
    msg.y = 0.395365696156;
    msg.z = 0.540830794314;
    msg.phi = 0.892882941555;
    msg.theta = 0.378083926131;
    msg.psi = 0.0836404966214;
    msg.vx = 0.659785953547;
    msg.vy = 0.80855428135;
    msg.vz = 0.647959403169;
    msg.p = 0.969337610252;
    msg.q = 0.929026196669;
    msg.r = 0.152619941322;
    msg.svx = 0.0652664958156;
    msg.svy = 0.753452832404;
    msg.svz = 0.97133359641;

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
    msg.setTimeStamp(0.550221729652);
    msg.setSource(46052U);
    msg.setSourceEntity(49U);
    msg.setDestination(46558U);
    msg.setDestinationEntity(13U);
    msg.group_name.assign("GQPYQCZJMCATFGXHLWXPNUVUKDAODRVJMSVNVQABLQRMEWPCKZOLWIUMGKHSETRVGRQBBIBOGXAPOIGADJOYZYWSKRITRHLEWFCHLLZIMTSPRSPAZDJXKUFCSNRXBAYBO");
    msg.op = 91U;
    msg.lat = 0.217745057267;
    msg.lon = 0.933991833259;
    msg.height = 0.889676652705;
    msg.x = 0.603980838832;
    msg.y = 0.620687764566;
    msg.z = 0.530498720634;
    msg.phi = 0.128715787763;
    msg.theta = 0.787500318723;
    msg.psi = 0.869888967788;
    msg.vx = 0.799957680255;
    msg.vy = 0.7950987144;
    msg.vz = 0.298489966099;
    msg.p = 0.892259436505;
    msg.q = 0.311990536539;
    msg.r = 0.505697305186;
    msg.svx = 0.1766326768;
    msg.svy = 0.978963483189;
    msg.svz = 0.0016026379059;

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
    msg.setTimeStamp(0.242743172351);
    msg.setSource(59878U);
    msg.setSourceEntity(254U);
    msg.setDestination(3869U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.992915744188;
    msg.lon = 0.156133771606;
    msg.depth = 0.152189430198;
    msg.roll = 0.818611475844;
    msg.pitch = 0.618963862552;
    msg.yaw = 0.472701376628;
    msg.rcp_time = 0.055334540666;
    msg.sid.assign("SCUKFBDTMWWDEAAZWSNKNFIASYEKJQWDXKLRUNGBJSHXYFVJEGQHTEUWYOSZRLPQHTZOVOJFPTMZYONPJFTUTBADZNVXFODGMQPRDUSMJLBLOXXDPBBIDVIMLQUQQRCORLXTWQHBRAYAWHQKTPHCQGJJHOEBNAEHRURNVEHBXLMOMNFVPCSOBHIZGWJVFYUPPGXYSIXKDGFUAYIKVJKCRXWCIYCVSKLTAMDVM");
    msg.s_type = 91U;

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
    msg.setTimeStamp(0.944107220789);
    msg.setSource(63884U);
    msg.setSourceEntity(228U);
    msg.setDestination(31360U);
    msg.setDestinationEntity(146U);
    msg.lat = 0.600746586614;
    msg.lon = 0.402254599795;
    msg.depth = 0.960405003107;
    msg.roll = 0.229113790273;
    msg.pitch = 0.593573440673;
    msg.yaw = 0.537562471385;
    msg.rcp_time = 0.0194461693313;
    msg.sid.assign("XYIZRTHJASFMFCIEJPDKTVLJGLGZDRCCNZWVTWUDUCHUZKHARCLLTQFPDMDHRAZGJVQEOQKMPAZUUNPFYSVOBDFUUIWFWNZDWTGQWGRXRZYKLMITEXSPXJERWGWAPCQOLTYYIROMELBGOTKTIAISSBFSKXBACQQTOHADCIDPNFXZQNIPQZJNYHEBVNGOWFSVIUJCBAHXVBGDJFHHBNXSNLQMSCYXBBKMYEPMXKYHPGLKMVKEEUJRR");
    msg.s_type = 167U;

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
    msg.setTimeStamp(0.358624340753);
    msg.setSource(38647U);
    msg.setSourceEntity(208U);
    msg.setDestination(40859U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.766113274201;
    msg.lon = 0.498069595047;
    msg.depth = 0.0409707910063;
    msg.roll = 0.0867172637173;
    msg.pitch = 0.668685019132;
    msg.yaw = 0.358422569468;
    msg.rcp_time = 0.464330684021;
    msg.sid.assign("IGDMWMJAQVFCPLKYXETKLPHOREDVWEYINSQSMOQGFWGBZYCTOYZJHHJQBVKNWHUFZNJGQIRQZHOMYMYSLXUHHCRMCJAXCFYNSCAOVAZSXGKGOSKALTSKFNTLDMTZCIJEDUEYBM");
    msg.s_type = 19U;

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
    msg.setTimeStamp(0.21640711871);
    msg.setSource(26610U);
    msg.setSourceEntity(143U);
    msg.setDestination(11956U);
    msg.setDestinationEntity(218U);
    msg.id.assign("CBFHCJAGIYXYPLEJZOOVUFPTVGKHLZAQPPFZHTYCJLNQCPQGHWDYVFUMJTWKDKTSNOVYEQOSXVEGWBIRNLDOLVUANWLXNBMAKZPBGMRVZFXPIHOSJMBLJOJYNFXRABUWZGTLBICIPSOTQKUECRXEMFNVSZGWNBJWORQECXWOQUARQIDSVZKSPRIAGKRMDZJIPTUMEEDUXTTGMFBIGSZQJRQYBEDAAVM");
    msg.sensor_class.assign("CFXQNDPFLYORBFVARUKILXMXLXPVRJHQSEIJEDTJCDCEAROWSMYWFUZDTFPMNFAGLFFHCNXKTBNMGBVZWMKKVRTJRVHLQXLGSCVUGOIHGBCTAKHLIIGCORWJTXNEDPZYXZNPUVQQOAEUBKOFYWMQIXEUZZRABSVSWSWNDUEGBSXJWYVASHEOAMGSECUYNIRQTPPGKOLKYSJUDMUHBJFTYBPWOIAYAZJRGC");
    msg.lat = 0.0978214381882;
    msg.lon = 0.084847040712;
    msg.alt = 0.533238927694;
    msg.heading = 0.0719106422355;
    msg.data.assign("VJHJPOEYLSEUHUEHXYEDFJWIUBXYBMABACADSFTOVHBZOPLPQROGVTDEECGMIRFFMNLGRQBYAPB");

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
    msg.setTimeStamp(0.747316256236);
    msg.setSource(27175U);
    msg.setSourceEntity(35U);
    msg.setDestination(56022U);
    msg.setDestinationEntity(201U);
    msg.id.assign("OZFHMVYKCXLFESQKHBMWBMEIWLUSDTBYTONOZYQVMRLCPBELQNTUONLJFGG");
    msg.sensor_class.assign("FRQKARTJMQJZFQNXTLETVUFEYTFCSYVGEXOYZHUPAUCMUZLVLSTQJXYCXGKFNFAWILNJAUOMZAFAEPRQLLVKJIACRDSRXUUDKHFDSUMFSICVKZOWBWOQGTWCZHOMNUBBVPQPRDHDXKKTDGTAFRAPNUHOBKWBWBBCIWJWQYRZPLGNJHTMYBEPVE");
    msg.lat = 0.28163641668;
    msg.lon = 0.0508415812672;
    msg.alt = 0.14802729548;
    msg.heading = 0.260694784856;
    msg.data.assign("ZYBSNEZFUPU");

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
    msg.setTimeStamp(0.204473357296);
    msg.setSource(8399U);
    msg.setSourceEntity(241U);
    msg.setDestination(32237U);
    msg.setDestinationEntity(57U);
    msg.id.assign("CZEBXSPYJZVQUQYDPQSO");
    msg.sensor_class.assign("FGDMLXNCUUMCLNTAKWUJGALDTTABIMDMIULSVUTNBOXSSPYEICTFHOJARPOAWEPDMBEUNRYPVATUYSQRUVXCYZVUTJFIBHRVGEROXGZXKEJTFJFRENKRXPHOZABDHSJHOEIVACQQGQUWQBSZSL");
    msg.lat = 0.779200998712;
    msg.lon = 0.845704907041;
    msg.alt = 0.616737425965;
    msg.heading = 0.272808299149;
    msg.data.assign("AOLSOLPIEWBBJXKHL");

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
    msg.setTimeStamp(0.0754021876655);
    msg.setSource(27093U);
    msg.setSourceEntity(71U);
    msg.setDestination(27918U);
    msg.setDestinationEntity(181U);
    msg.id.assign("HUDPYDGFZRKFFSEDAJQFBKZUTSJZDQOVVQAQMAWWGCZBNIBZJMKMLDJBMXEDNWCUYXTBPQNRZBVGALNFJXWLG");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("FCIAYZPZMHSIRAECZIVFXAJEBYFFKBLGRLLWVPOCQGEDJWTYVYUDEYFTNFDOASKIZTMOJNFSUIJALTQUGVLQRZTBSAXREPROEQLZXGZXMHQDJQABBEWQKNSXIUMHLNGDVUXPPMOFGMCBKEGSXDVXWNKSOUYEJHUGTPYKWZXJNGVHJRSNYCVWEUSPBXPSKOZOWLRADMDWQAQYNOUTMCBRFMPTHFYHGVNIBRLBHCJOLKCQMIWDHPJVCKTURD");
    tmp_msg_0.feature_type = 24U;
    tmp_msg_0.rgb_red = 143U;
    tmp_msg_0.rgb_green = 219U;
    tmp_msg_0.rgb_blue = 236U;
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
    msg.setTimeStamp(0.0634684197311);
    msg.setSource(56716U);
    msg.setSourceEntity(29U);
    msg.setDestination(26499U);
    msg.setDestinationEntity(245U);
    msg.id.assign("AMTACOGOVRQLUBKODIXWJNHNYYMFJGUUMCNABKIWOYLIPXGGSPUBYPSYZUZONDEEXSRERPWUGKSTIPQQIRWYLEFXWLCVLZMDISGVSOMFNELCLABPSBQQZXPUJYRKUKUZHTWKXHADDGALKCMTOEHLMCEMPQTGSWFWMABNNBADFQPJXRIXSVTDIXHAOJBVINCSMAWRHVBDYETHPZCJN");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("HNDTNFSDVFZWGGIXBEAXOLGBHQWIOOQJFPCQVRVMLWIJSBXUIKPAOROLARQGWKIGAJCPGDMWMPAXDTUJDENPMHFHRCXZKCGRMSRUVWPRNNJNHTJKRYHUQJPTZB");
    tmp_msg_0.feature_type = 192U;
    tmp_msg_0.rgb_red = 103U;
    tmp_msg_0.rgb_green = 227U;
    tmp_msg_0.rgb_blue = 141U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.257675343495;
    tmp_tmp_msg_0_0.lon = 0.801802054995;
    tmp_tmp_msg_0_0.alt = 0.889417362943;
    tmp_msg_0.feature.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.230903639419);
    msg.setSource(34299U);
    msg.setSourceEntity(26U);
    msg.setDestination(24378U);
    msg.setDestinationEntity(104U);
    msg.id.assign("FPZQVTDBYDBFOIRKEETDIPWAXTRNCEIYGBWQTUWDFSPYQWCEXAHPPLATNZXVKKAYXDUSATHQHNCKZBLLSHMICCKSYCRPFFXBOQFQFOPVJDZLOIUVEHMEFQSAFSXGRCGGQKMOUADRSPVLVBNUVAZMUJILUKWGAOWMMYXZXJGBMYGJRXKVHJJDZGETPCWYNWJEBDNLMNQUTKGIZHKEIPVSZVJIULJCRNUJMTOTXSEGWDLSAMHOBOCQOYRRWHI");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("MEFGTVIRFLZOFIPNDUBVCMXBWMOZAOFDTBLHNLAAQJDXONHESNCGCVIBPJCIUXMQERDFDLUMWVTLAPRRKHTGJERKSUSIXNMKOULBHTWKWAVTDYGKBLSHTEOONFQPVKMEJWWHYBUIQYSZAQGZOQPSYIGGJJRQJLXGISHDUWHWGSUHUQCVBPXYIKRKFDCEPNMDGEEKXCTYKMECLJZVPRBAHUNXY");
    tmp_msg_0.feature_type = 146U;
    tmp_msg_0.rgb_red = 145U;
    tmp_msg_0.rgb_green = 190U;
    tmp_msg_0.rgb_blue = 20U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.0115495264912;
    tmp_tmp_msg_0_0.lon = 0.66474656556;
    tmp_tmp_msg_0_0.alt = 0.918381774309;
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
    msg.setTimeStamp(0.972116820354);
    msg.setSource(42108U);
    msg.setSourceEntity(213U);
    msg.setDestination(4005U);
    msg.setDestinationEntity(149U);
    msg.id.assign("COAKQWCGBWROSLDTRCBKEOWDTUOZQACHKTAUROTSMDRQDJQYEYGJZNGIIOTUNVSXLXDJHZPEZBVNMHVMLSHLWBUJCJLDPWIKUKQDOJYPEXAUHLGWADVEVTCFTNSHFCYCPQWYNNDWGNXAZPIFMQTAMQHVYWZKUFGJKFWXLRASZXYVKBNDCJFPZEIIEPVUMAYMXXZJMLMXTKLSHSOORPHQGSGTQUKRAUICBHMIJXBLEPBNGNIFRVRPYVBFEOSI");
    msg.feature_type = 233U;
    msg.rgb_red = 91U;
    msg.rgb_green = 141U;
    msg.rgb_blue = 101U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.272927474064;
    tmp_msg_0.lon = 0.0800596160306;
    tmp_msg_0.alt = 0.0906659845254;
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
    msg.setTimeStamp(0.653949542206);
    msg.setSource(10774U);
    msg.setSourceEntity(215U);
    msg.setDestination(172U);
    msg.setDestinationEntity(233U);
    msg.id.assign("URIHVWZJPEAHOJLWKJWVCBQFRLMMAPGFSKPMXGDCUUCKDBNXNDBEVKLQGYAHYQNXIYOLCTRPQVQUPXSFGSTEOPQTNVUHYILHSWEJI");
    msg.feature_type = 158U;
    msg.rgb_red = 110U;
    msg.rgb_green = 237U;
    msg.rgb_blue = 111U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.399148025896;
    tmp_msg_0.lon = 0.447780182984;
    tmp_msg_0.alt = 0.287861506756;
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
    msg.setTimeStamp(0.368456122958);
    msg.setSource(17770U);
    msg.setSourceEntity(26U);
    msg.setDestination(49507U);
    msg.setDestinationEntity(12U);
    msg.id.assign("TPTFHXJIIHOVJJNZGHACQFPSJMOYRIVWEZLICWKSGOXZOYYJGWTHMWKPZUCEXAWNEONMQRGCXSNGTOVLTTYWMYHIRMOZBEKJLKIARSDFERUSUUCWSDQQF");
    msg.feature_type = 43U;
    msg.rgb_red = 4U;
    msg.rgb_green = 111U;
    msg.rgb_blue = 102U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.370089590981;
    tmp_msg_0.lon = 0.961653978651;
    tmp_msg_0.alt = 0.598889156689;
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
    msg.setTimeStamp(0.569387288571);
    msg.setSource(44535U);
    msg.setSourceEntity(165U);
    msg.setDestination(52513U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.817588778959;
    msg.lon = 0.161004016286;
    msg.alt = 0.59514349734;

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
    msg.setTimeStamp(0.719835952614);
    msg.setSource(18146U);
    msg.setSourceEntity(253U);
    msg.setDestination(9614U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.888372416233;
    msg.lon = 0.15280998233;
    msg.alt = 0.182592284834;

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
    msg.setTimeStamp(0.329257379009);
    msg.setSource(2085U);
    msg.setSourceEntity(26U);
    msg.setDestination(23796U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.379315027509;
    msg.lon = 0.647500224899;
    msg.alt = 0.497318664937;

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
    msg.setTimeStamp(0.131423372572);
    msg.setSource(43287U);
    msg.setSourceEntity(193U);
    msg.setDestination(9413U);
    msg.setDestinationEntity(99U);
    msg.type = 138U;
    msg.id.assign("PMOHAUIZAUQICFVEVGGMSICQALQSDIKXPGIEMDGEWAGTVXTARTETFDKPAJKCAHUACSBBGNFRZPKUAQXORNVMSXPKTJVHRQISCLKMZINBTGIJSNJKHWHZWHZFBSSKZQEMXBFWNWTOXCDWRLYJFYCMTRHOPVWWDOIKOQLNNYELBIYZDDONZJHWLKDTMBBX");
    IMC::ReplayControl tmp_msg_0;
    tmp_msg_0.op = 50U;
    tmp_msg_0.file.assign("JQMRWTUJAKTQUARXWPTRJUGAMMDXOXCIYHSDFWVTYLOFKVGAWZRIABQOLDOMWQJZGBYVSSTILQVDGCQDFIZCISCZMZEVPTBUPMRCEFLLHBNNRJJOXASLZDVPDDOEJFOLYSVQKABNFWCIEAGKPIZILNMRILPZDQKXJSNKACCHYWUHEMXHKFXKG");
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
    msg.setTimeStamp(0.195480987242);
    msg.setSource(1889U);
    msg.setSourceEntity(6U);
    msg.setDestination(56688U);
    msg.setDestinationEntity(198U);
    msg.type = 196U;
    msg.id.assign("EEKCOXAWIJWCVLTCCEFZSHTAYNHSPGCUNWTXKPAFCCWIMVPNPXOASCABONHRJDJDKKGYNPGHMMUCMJKZVHD");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("GJJABNRBIKDZRBXNWSJJWHFCTRZPUZGTHKYASXOGVFFOFXNGUJDTWPKVILCDKFCCVYEWJGJYTCMDPPULTSMHRSNWQCHKEBOTXIKOPORUYFYEDWOXAYFQEJQAXWKSODEVFLUHARDHZN");
    tmp_msg_0.value.assign("UXDFMVIHDJMCLYMDHYBECPTZWUOUCEECRAWWYIAASQHSFMREVBWAPVRNTWPVSFKQKTLRHYKCNKCAPDTULVJBBROLRCUYOVYXVELREWJVGONUAIOSKJEIF");
    tmp_msg_0.type = 250U;
    tmp_msg_0.access = 177U;
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
    msg.setTimeStamp(0.570985447545);
    msg.setSource(7997U);
    msg.setSourceEntity(235U);
    msg.setDestination(43531U);
    msg.setDestinationEntity(130U);
    msg.type = 17U;
    msg.id.assign("YKRKJQFSPEZYDOVYALKQVHMCHWCQIEMOKLGJREPERHUBVFAZMQYXWTZMGMSWIUILOIOHPEKZWBDINVZMJJFPGSALAZXBHREAREAWOY");
    IMC::FollowPath tmp_msg_0;
    tmp_msg_0.timeout = 37371U;
    tmp_msg_0.lat = 0.567425965222;
    tmp_msg_0.lon = 0.853511300428;
    tmp_msg_0.z = 0.563046894148;
    tmp_msg_0.z_units = 99U;
    tmp_msg_0.speed = 0.705876588752;
    tmp_msg_0.speed_units = 199U;
    tmp_msg_0.custom.assign("IDUSVKWYBXCPRJQANKCWDLITMDECSHHIINZBJHP");
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
    msg.setTimeStamp(0.550886559104);
    msg.setSource(37075U);
    msg.setSourceEntity(232U);
    msg.setDestination(57066U);
    msg.setDestinationEntity(95U);
    msg.localname.assign("URKKPLSZZFTVRBGRTLLAUCQOYOKMVDMPXKUNHQGOWOLDABPCRQVNGEFLEAVFMXHZJZOUJEZGBVBJAZYNWUBTSBNIRWQBHAHHNCVNSHPMGXNCDTBAGXMOJDSZFIGJKNQDDYSA");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("EWEVVRGGBRDYVKFOOEDSHOQZCRQEJNQCBPVNSHMWPNISRJLVXNDJKTXCDLTMNBJFKNISFAYWNPOQZMWZYFAZZNHTTUUVWKUDPIRSPEHGQAIJWPBTTDGTKNUXETIJBODDALQKBXUWKRAZXHFZPWOFYCGHYXZGBLHXJESLMAUYIMQGFEECMCFBVYLRKONAIAWGCQMASKAYYCVORUQLKFLJP");
    tmp_msg_0.sys_type = 71U;
    tmp_msg_0.owner = 50143U;
    tmp_msg_0.lat = 0.23887658684;
    tmp_msg_0.lon = 0.865173083833;
    tmp_msg_0.height = 0.252656398794;
    tmp_msg_0.services.assign("BBQRTTWSDOVUBOFMLANXFGBEWSTCVLHGKVXWMH");
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
    msg.setTimeStamp(0.0780195072062);
    msg.setSource(57846U);
    msg.setSourceEntity(193U);
    msg.setDestination(63496U);
    msg.setDestinationEntity(140U);
    msg.localname.assign("NCQYROLEADUEXGIREHNJHBCZLTPPSJDQDHNKXVLPQWOIWUTZIYZEGXQOAVRHAULLIYCSIZBAAWNGJPYLMUKQYCPRCEJISBOMJSNTBEWZSGFTFCXXKLVTVDUZIJCSEMDFHSTXUFEGNGLOVW");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("WAOWDIZOBCOVBYGNRBVWPVNVOVUXGEDYWTELDCZJPTXKEYHESZKJUJHU");
    tmp_msg_0.sys_type = 91U;
    tmp_msg_0.owner = 52790U;
    tmp_msg_0.lat = 0.643696335156;
    tmp_msg_0.lon = 0.720323380261;
    tmp_msg_0.height = 0.848089570473;
    tmp_msg_0.services.assign("KZNLHTBKACYHNUGKSAHKNMSPAYFIAPTKERZQMVGGDBRSJYOHBLKHEMRQXUOFVVIRUYWYVNCEWDDUQNEXUEUJTXJWJDLQ");
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
    msg.setTimeStamp(0.959687368273);
    msg.setSource(13946U);
    msg.setSourceEntity(192U);
    msg.setDestination(46617U);
    msg.setDestinationEntity(226U);
    msg.localname.assign("SAZHRSKCEELUQBHZYIQNXSCANQQPUFKUDGIBVZZRXHAMKRKVBPTVJITLOGXX");

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
    msg.setTimeStamp(0.626247160514);
    msg.setSource(63692U);
    msg.setSourceEntity(54U);
    msg.setDestination(23947U);
    msg.setDestinationEntity(177U);
    msg.timeline.assign("WHOOMEELDCXFTWRIDNECYXWEKPDPEALASIHQOCIIFDBQPHKDOUXVJXVCUJGFFQMSUZQLWGLJTFZMEPNCGTUXEDMOWBZBSITVRQFWXUZNYXCMUUXPKVMKTJVZISOONJZNHRERGEDBAAIHCSGLIPABWRDVVONJMKRRYURSUUMSZTLXYNAGNFYSWGZYQPAFHWOSBQTKBITVGK");
    msg.predicate.assign("OLLTUAYHLOQGAQXTBDCRZAPFRCYYWZCAJKAAIGSUTZPTFIOFRYBKQLDPEONQHXDNPZGNSICEBOBNZAHVXME");
    msg.attributes.assign("BSKDLDNTWLEYNAUIQTXMFUVWOELXPVNDSUGCQZNSQPTWBMIGHOIYDTGXZFBLMOPQXZDWWKRTUVOMFCSKNFFHSYWVFMLJPKBBFYGLJOOYDOSGPAWJUCJQZNEJEYHXXJPEQPRJISCILYGUMBPUXODMLPFHHOLCDKQRGBJDRR");

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
    msg.setTimeStamp(0.0718311040117);
    msg.setSource(64721U);
    msg.setSourceEntity(183U);
    msg.setDestination(51202U);
    msg.setDestinationEntity(4U);
    msg.timeline.assign("NMNIBJJQGBVRTKEXSVUSMPFLGHDFLIYNXFRGXQRJLRWQEAZHOCNHNHWBJFXPXLIIRKDMYWATGSWZNPKIYGVYCTWTDIDJYCKPQZKOAXCELMNIPOZPSATUVXIMWRFWANJASRDSDHJEURQQ");
    msg.predicate.assign("YQSLXPGZZHOPQNSWLMQLITRJDNAHKUBMYFFVFFOPPFAHCWPCJFUODRUESEBCCOXWJMLWXMCSJPBNQICMEHIJB");
    msg.attributes.assign("HRBUABMJIXEKNEYNRXDNHHVAYTUAUIACL");

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
    msg.setTimeStamp(0.903690029949);
    msg.setSource(30254U);
    msg.setSourceEntity(160U);
    msg.setDestination(62946U);
    msg.setDestinationEntity(69U);
    msg.timeline.assign("OYZBYNKBXCHNVDBRRPVNMJMUIQLQYJYXHKTKEALVGAVWXSFNIKFUACHBZTMYXOKNQHMIQXGORCSGFZELCKHZULCDXLGKIAFBTTRSLAOQXAHWDESOUTECOOMFQAFBIJRJDQEPVAWVEPUPTGPKXCZTIRPNJ");
    msg.predicate.assign("EHZIGNXVKESVVWJVUXDKXUHPLLIFCYKURISCBJCZHKRSGFAGWBEIEOXAODWRNDQTOSZYQMZIXQEUCTULRIEHPZFKDLLPYWKZJSEQUFICYAFYRXFBHPVQFHQYCUMNMQMALNLKDOQRUKHAPBFEOGQDCBJCTRAYXXJXJJTEWNCGYTBBIRNVEMZGWTRVNTDXGPWFOYWYMRUMZGOPMHDTKCNJSHDUASOLVPI");
    msg.attributes.assign("HYEQGNTPLUUBCNEAXHBGVGRKNOXJJWSKVLGAVIKPTDIPFQMOARMRBBSXF");

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
    msg.setTimeStamp(0.169143383667);
    msg.setSource(48835U);
    msg.setSourceEntity(162U);
    msg.setDestination(24865U);
    msg.setDestinationEntity(49U);
    msg.command = 21U;
    msg.goal_id.assign("OZDCAEOCWGDVMSHDNJYPTAIBZCXNUBBEPF");
    msg.goal_xml.assign("DGCEUFOTYHOAZJIJBYQWRHSNYMTNGJINKPZOOLHENWNLOTGCKFANCVMEJWNAXUIIMBTBUSMOJURJWEWOKQLRLQAFDCTTZYAKXDRBIYEUOHZHBL");

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
    msg.setTimeStamp(0.65616566246);
    msg.setSource(11378U);
    msg.setSourceEntity(234U);
    msg.setDestination(52060U);
    msg.setDestinationEntity(206U);
    msg.command = 121U;
    msg.goal_id.assign("ZDVWOGVUQDMHMNQFVYIGLQAAFURFDKKLELUCMSCDCQMKXBTYMOQVIXECUXAJHPMXWFVNKCZOPARBX");
    msg.goal_xml.assign("DXLYCOUCTAOZTVSMEOJBCGZFRHBASSGVPWZPLYASDKLKSLXJHDDYJBYCIAQRQWVXACKJWSHRBUWSAQVUOMXZNSZFKAPLWEQYPPNHLBRGACAJTLPQBNRYOZUOOGFEIDDDPXSVEJESBGMTUKHVFJR");

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
    msg.setTimeStamp(0.98651467174);
    msg.setSource(33135U);
    msg.setSourceEntity(201U);
    msg.setDestination(50038U);
    msg.setDestinationEntity(85U);
    msg.command = 215U;
    msg.goal_id.assign("JROJLFFKCTTPBDMXTLVNUWOUGTKQKHLPHDAFCSUSIPSXSQYNOIOFPBUZKPVOVAHBBWEIYDPJSJMBMSGQBRWVMBYOAKULPEQLAUNIMCQJVFLSATKZRGXJINBGIVDPFUCLERYDXHIRWZJEAGXKURMUXDWDTPORGMJESUJHEXMYLYBYCRCR");
    msg.goal_xml.assign("VVMIDSNOLAKZQDTYUVDBGBGQIKFCTIYNHXHZZVIMR");

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
    IMC::VideoData msg;
    msg.setTimeStamp(0.630543372155);
    msg.setSource(58481U);
    msg.setSourceEntity(165U);
    msg.setDestination(36653U);
    msg.setDestinationEntity(103U);
    msg.id = 147U;
    msg.width = 56919U;
    msg.height = 3122U;
    msg.widthstep = 17006U;
    msg.channels = 70U;
    msg.depth = 170U;
    msg.finaldata = 73U;
    const char tmp_msg_0[] = {108, 97, -80, 67, -1, 123, -26, -40, -56, 0, -99, -119, -41, 20, -62, -82, 101, -24, 120, -78, 34, 80, -51, 85, 50, -43, -6, -27, -101, -106, -87, -93, 49, -73, -73, 35, -123, -113, -19, 7, -77, 26, -7, 74, -63, 104, -6, -93, -54, 101, -105, 75, -83, -11, 100, -20, -10, -51, 68, 6, 119, -81, 51, 117, 47, 57, 15, 6, 35, 41, 76, 106, -73, -10, 74, 45, -112, -51, -28, 87, 61, 121, -97, 97, 82, -1, -108, 7, 119, 39, 23, -81, 77, 117, 111, -49, -9, -24, -77, 65, 67, -63, 101, 24, 73, 78, -83, -69, -61, 10, -112, 118, -84, 83, -2, 58, 33, -47, 58, -51, -6, 19, 120, -75, 72, 50, -31, -9, 63, 29, 45, 5, 7, -42, -49, 42, 74, -23, 86, 34, -43, -76, 8, -119, -36, 3, 78, 88, 18, -55, 14, -56, 82, -69, 96, 88, -71, 81, 60, 122, -115, 67, -20, -59, 16, 33, 62, -59, -74, -3, 19, -117, -26, -38, 19, 64, -70, -16, -14, -96, 74, -61, -123, -10, -125, -86, 15, 15, 83, 79, 45, 92, 118, -93, -101, -7, 36, 59, -76, 20, 96, 106, 125, -2, 105, 39, -2, 8, 70, 24, 11, -127, 36};
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
    msg.setTimeStamp(0.355145864932);
    msg.setSource(58003U);
    msg.setSourceEntity(167U);
    msg.setDestination(22353U);
    msg.setDestinationEntity(251U);
    msg.id = 176U;
    msg.width = 48134U;
    msg.height = 41137U;
    msg.widthstep = 6616U;
    msg.channels = 53U;
    msg.depth = 46U;
    msg.finaldata = 38U;
    const char tmp_msg_0[] = {55, 27, -31, -128, -77, -67, -13, -101, -86, 111, 40, 46, -86, 10, -19, -80, -94, 105, -91, 81, 30, 119, 14, 8, -113, 73, -122, -37, 125, -90, 73, -46, 31, 50, -47, -123, -55, -100, 91, -3, 22, 106, -63, -43, 70, -83, 116, 15, -67, -70, -117, 21, 46, 16, 31, 78, -32, -71, 90, 45, 33, 95, -44, 30, 45, 124, -28, -65, 114, 6, -16, -38, 36, -14, 7, 69, 17, -107, 88, 36, 50, -20, -31, -90, -11, -122, 107, 3, 92, -123, -61, 111, 125, 119, -10, -8, 126, -85, -81, 72, 121, -54, 59, -105, -33, 66, 37, 96, -61, -119, -31, -116, -43, -84, -106, 26, -78, -54, 121, 11, 65, -111, -16, -61, -33, -34, -25, 124, 20, -49, -67, -116, 71, 12};
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
    msg.setTimeStamp(0.260746560048);
    msg.setSource(93U);
    msg.setSourceEntity(81U);
    msg.setDestination(27700U);
    msg.setDestinationEntity(65U);
    msg.id = 151U;
    msg.width = 15185U;
    msg.height = 36872U;
    msg.widthstep = 24981U;
    msg.channels = 100U;
    msg.depth = 39U;
    msg.finaldata = 242U;
    const char tmp_msg_0[] = {44, -48, -77, -4, 112, -95, 57, -1, 14, 20, 90, 120, -34, -69, 43, -119, 14, -119, -102, -124, -89, 99, -16, 120, 102, 21, 39, 10, -52, -8, 52, -91, -76, -118, -101, 46, -69, -12, 64, -51, 111, -37, -110, 99, -58, -123, 104, 0, 25, -90, -24, -48, -71, -83, -103, 112, -35, -46, -76, -87, -95, -79, 43, 106, -121, -43, 16, -84, 104, 49, 19, 24, 76, 93, -34, -47, -56, 50, -64, 89, -73, 78, -17, -122, 20, -75, -9, -119, -22, -82, -62, -58, -35, -88, -114, 63, 48, -70, 47, 67, -90, -15, -73, 4, -34, 55, -62, 50, 12, -19, 34, -127, -106, -125, -43, -106, 38, 69, 125, -17, 78, 49, 79, 58, 122, 122, 25, -92, 26, -57, -62, 58, 83, 65, 94, -55, -36, -14, -102, -98, -11, 7, 18, -65, 110, 107, 63};
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
    msg.setTimeStamp(0.0350867334857);
    msg.setSource(5908U);
    msg.setSourceEntity(77U);
    msg.setDestination(35540U);
    msg.setDestinationEntity(193U);
    msg.width = 59057U;
    msg.height = 31812U;
    msg.channels = 228U;
    msg.depth = 159U;
    const char tmp_msg_0[] = {-42, -22, 51, 91, 99, -99, 117, 14, -91, 125, -95, 119, 25, 43, -10, 97, 100, 10, 72, -81, -39, -110, -74, -26, 57, 28, 10, 77, 49, -11, 65, 34, 118, 74, 43, 69, 89, 91, 125, 105, -48, -18, 55, -5, -41, -91, 80, -13, -32, 55, 101, -40, 72, -115, -112, -127, -25, -12, 49, -109, -103, -96, -93, 30, 107, 7, 22, 43, 13, -70, -39, 77, 116, -127, -60, 71, 1, 56, -112, 60, 125, -72, -6, 14, 123, 8, 83, -12, -11, -105, -93, -79, -52, 11, 51, 3, 45, -33, 80, 84, 42, -2, -76, 108, 3, 4, 87, -6, -25, -122, 66, 99, 109, -99, 111, -41, -38, -100, -40, -16, -107, 58, 20, -108, 34, 54, -93, 76, 72, -15, 34, 98, -104, 8, 49, -51, -70, 98, 51, 44, -51, -23, 14};
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
    msg.setTimeStamp(0.0475704342884);
    msg.setSource(44555U);
    msg.setSourceEntity(235U);
    msg.setDestination(25594U);
    msg.setDestinationEntity(181U);
    msg.width = 32553U;
    msg.height = 51490U;
    msg.channels = 150U;
    msg.depth = 167U;
    const char tmp_msg_0[] = {-58, 104, -73, 96, 114, 74, -24, -65, -78, -84, 50, 73, 124, -54, 46, 81, -42, 33, -122, -123, 0, 44, -6, 123, -28, -19, -23, 74, -19, -55, -13, -87, -54, 87, -61, -58, -110, 46, 55, 108, 116, -121, -49, 9, 102, 35, -92, -31, -1, -70, 10, -96, -33, -125, -83, -50, 21, -113, -76, -5, -108, 2, -120, 49, -82, -75, -92, -65, -62, 41, -116, 38, -102, -81, -116, 58, 56, -99, -19, 113, -76, 11, -54, -128, -44, -121, 97, -24, -64, 12, 50, 31, 105, 43, 117, -110, 84, 7, -69, 113, 121, -51, 106, 44, -47, -41, -58, 63, 113, 2, -10, -83, -113, 78, -77, -122, 97, 61, -114, -122, -71, 114, 2, -79, 30, 112, 10, -87, 97, 41, 19, -36};
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
    msg.setTimeStamp(0.294553468477);
    msg.setSource(41639U);
    msg.setSourceEntity(229U);
    msg.setDestination(40922U);
    msg.setDestinationEntity(26U);
    msg.width = 56237U;
    msg.height = 3795U;
    msg.channels = 86U;
    msg.depth = 171U;
    const char tmp_msg_0[] = {83, -68, -110, -113, 79, -122, 54, -119, -36, -40, -13, 65, -1, -5, -123, 23, 57, 7, -116, -101, -14, -56, -88, 59, 90, 92, -96, -56, -49, -32, -64, -109, 108, 7, -101, -118, 123, 59, -51, 117, -65, 42, 45, -91, -19, 39, -47, 35, -60, -14, -87, -97};
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
    msg.setTimeStamp(0.0861512153388);
    msg.setSource(63206U);
    msg.setSourceEntity(75U);
    msg.setDestination(60559U);
    msg.setDestinationEntity(104U);
    msg.frameid = 253U;
    const char tmp_msg_0[] = {112, 101, -126, 8, 111, 77, -78, -26, 2, -2, -65, 4, -37, -32, 25, 4, 44, 0, 92, -1, 80, 31, 113, 18, 122, 100, 10, 118, -17, -43, 104, 83, -20, -11, -25, -111, -4, -26, -128, 43, -111, 123, 56, -107, -7, 115, -93, 68, 79, 94, 55, -85, -114, 126, -8, -70, 109, -19, 42, 42, 39, 39, -25, 61, 6, -45, -87, -89, 39, 19, 27, 98, -17, 68, 66, -109};
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
    msg.setTimeStamp(0.905740322586);
    msg.setSource(64172U);
    msg.setSourceEntity(48U);
    msg.setDestination(21292U);
    msg.setDestinationEntity(151U);
    msg.frameid = 185U;
    const char tmp_msg_0[] = {117, 83, -117, 85, 56, 46, -82, 73, -125, -108, -41, 0, -25, -24, 48, 39, 35, 98, 8, 93, -96, 94, -74, -23, -98, -86, -53, 54, 112, 63, 78, -73, -50, -73, 57, 2, 113, -64, 53, -25, -33, 4, 23, -92, 101, 116, -30, -60, 107, -107, -49, -62, 28, -58, 111, -69, 119, 65, -65, -27, -45, 120, 23, -101, 122, 78, 4, -85, -96, -60, 20, -107, 13, -91, 8, -81, -70, 102, -98, -101, 84, -101, -108, -118, 112, 23, -31, -31, -118, -121};
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
    msg.setTimeStamp(0.208818442036);
    msg.setSource(2180U);
    msg.setSourceEntity(210U);
    msg.setDestination(18024U);
    msg.setDestinationEntity(30U);
    msg.frameid = 15U;
    const char tmp_msg_0[] = {-67, -84, 69, 43, -36, -73, -27, 105, 3, 33, 40, 42, 44, -103, 40, -28, -16, -110, -74, -40, 108, 9, 20, 110, -32, -73, 6, 5, -17, -34, -84, -66, -6, 44, -88, 81, -65, 77, 72, -34, 1, -76, 77, 84, 28, 104, 19, 70, 45, -84, 4, -59, -95, -30, -61, -87, 37, 37, -13, -23, 70, -55, 25, 105, 80, 5, 19, 14, 91, 117, -66, 97, 90, -1, -41, -18, 108, 98, -128, -87, -6, 1, -84, -40, -4, 126, 101, 22, -58, -35};
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
    msg.setTimeStamp(0.897956725092);
    msg.setSource(9489U);
    msg.setSourceEntity(241U);
    msg.setDestination(45063U);
    msg.setDestinationEntity(205U);
    msg.fps = 145U;
    msg.quality = 10U;
    msg.reps = 183U;
    msg.tsize = 52U;

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
    msg.setTimeStamp(0.0848421726605);
    msg.setSource(610U);
    msg.setSourceEntity(227U);
    msg.setDestination(24214U);
    msg.setDestinationEntity(212U);
    msg.fps = 135U;
    msg.quality = 254U;
    msg.reps = 127U;
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
    msg.setTimeStamp(0.530841075525);
    msg.setSource(42025U);
    msg.setSourceEntity(42U);
    msg.setDestination(59172U);
    msg.setDestinationEntity(58U);
    msg.fps = 209U;
    msg.quality = 111U;
    msg.reps = 19U;
    msg.tsize = 144U;

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
    msg.setTimeStamp(0.0565593821783);
    msg.setSource(24824U);
    msg.setSourceEntity(216U);
    msg.setDestination(57532U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.431053078242;
    msg.lon = 0.0151478818466;
    msg.depth = 166U;
    msg.speed = 0.149426987799;
    msg.psi = 0.0128875056053;

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
    msg.setTimeStamp(0.512376409711);
    msg.setSource(8774U);
    msg.setSourceEntity(159U);
    msg.setDestination(53533U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.602310096629;
    msg.lon = 0.437626162962;
    msg.depth = 223U;
    msg.speed = 0.700698483941;
    msg.psi = 0.521145625188;

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
    msg.setTimeStamp(0.704423126003);
    msg.setSource(55733U);
    msg.setSourceEntity(108U);
    msg.setDestination(59587U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.66002478564;
    msg.lon = 0.409569201707;
    msg.depth = 0U;
    msg.speed = 0.56323563476;
    msg.psi = 0.721147846073;

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
    msg.setTimeStamp(0.663388091469);
    msg.setSource(4555U);
    msg.setSourceEntity(231U);
    msg.setDestination(47643U);
    msg.setDestinationEntity(221U);
    msg.label.assign("LHFDTEACAVMRUAZFUGKREXQR");
    msg.lat = 0.886826697365;
    msg.lon = 0.139177119601;
    msg.z = 0.357182411969;
    msg.z_units = 203U;
    msg.cog = 0.038971323079;
    msg.sog = 0.658125913568;

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
    msg.setTimeStamp(0.634999234284);
    msg.setSource(44440U);
    msg.setSourceEntity(244U);
    msg.setDestination(45565U);
    msg.setDestinationEntity(17U);
    msg.label.assign("DKXUYNZOTLFJBCWYLFDMRGLOJRNSANVIZSUULOIBQIVJGTYTCVIPHOPSZWAWMAWWLNIKSPQOORJTYFNNCQICALBBPHJVFBMSBDKCVYVHSQGGNEGWRGGMJYHBQXKPXWMRTETVVUEMDPXHTSDWUXEATIEMZAXLS");
    msg.lat = 0.0481244721639;
    msg.lon = 0.327469408719;
    msg.z = 0.916305019648;
    msg.z_units = 22U;
    msg.cog = 0.757104552571;
    msg.sog = 0.0415610677229;

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
    msg.setTimeStamp(0.823580968442);
    msg.setSource(40005U);
    msg.setSourceEntity(254U);
    msg.setDestination(50475U);
    msg.setDestinationEntity(53U);
    msg.label.assign("CFOEQZFCBCUKAOZAWYIDYLMDXGXGLAEBKSPLCJH");
    msg.lat = 0.663218398743;
    msg.lon = 0.0899955282013;
    msg.z = 0.983675244621;
    msg.z_units = 47U;
    msg.cog = 0.311670969866;
    msg.sog = 0.681484040445;

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
    msg.setTimeStamp(0.724837022851);
    msg.setSource(19204U);
    msg.setSourceEntity(51U);
    msg.setDestination(6540U);
    msg.setDestinationEntity(209U);
    msg.name.assign("VLGELFSKBDOLHDVGZTWWTCPLVIGBRHURQQHEBIETWKNVEXGNORMSGCYCLOOMTJUDMGVRTLFQWDBKSPUJOBMNKRVWPSNLLZMNKIJHLDIYHPSZFCHLYIAPYQYWAXUTXEGOMFFWZUJGQCJSYUEXJUFTCVXAXWKOGSHZJBVUHNETCBMFRQBID");
    msg.value.assign("JMQKRMTYHTNQOKSWCGZOVPAYHAVFPFXCGDKJIBCRYLJXPJZHVMFXZMXLJGOJNYBNDZMOUXIHBAOHFRCAPSMQDGCZDKNRZNSZLWFQDQRLNHIBDDXGW");

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
    msg.setTimeStamp(0.502194027155);
    msg.setSource(35595U);
    msg.setSourceEntity(56U);
    msg.setDestination(17993U);
    msg.setDestinationEntity(132U);
    msg.name.assign("UWAVYAJZTQMIIYNIPSDYUNSEOXSVFTLNZLOCNKKNDXUYBRCLBVEWUOLFJJLXTBPNXZHSWDHGMXQSBEFMUCWZAMAPGPBDKFVHAWIYNRKXJHMXOJWNZPZFREGLJHSIWLJJDVYCPIGEPQKODHQPHBUXASIUDTRVAVSGDULDGRCMXRARKWOVBJPIKCGW");
    msg.value.assign("UDIEFLGKMBUQPFHXKIZAKCHOOLLQJBZVLWBGYZXZLMYBDTDTZXHRQFEUKUAIQAPWKWORFTDNPDEWYNACYISFDRPXDHMXMHSJVTFSXSKXVEGXPGYRGWRUZAFJJVCIE");

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
    msg.setTimeStamp(0.33547189742);
    msg.setSource(23757U);
    msg.setSourceEntity(54U);
    msg.setDestination(22836U);
    msg.setDestinationEntity(156U);
    msg.name.assign("KDBSKXVNSGJNTGUBQRUFCJTTNTRBKOUOZMZNXHDXZWDJGLLKIBVFWPALVXSADHFJRZMHTHWAZWWJOBXJCWXXRUWVKGYGNIGFSQEEKTRNSEXYEMUQVGFCKHRNIYTEMIUMFGRPUWGPAUMNRVRIAEPYOCWBTXDGALNSMOCIYOTZYJALLLMPLYPLOBYBQSDLMZCIP");
    msg.value.assign("KXDWVIZHHFYWIUEFMDJEYGMWMJFONLWHAOKASUTZSD");

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
    msg.setTimeStamp(0.352427323643);
    msg.setSource(56726U);
    msg.setSourceEntity(206U);
    msg.setDestination(5241U);
    msg.setDestinationEntity(28U);
    msg.name.assign("GUWRRRDFYWOFDDZONGWZUXGLEAOGHOSFXNOLFQGQVFSRQVOPCHNCTIYPQSRNMKZWHHCBSAIVHZKHMVRKXKSUKMBJDJEZIZXEONVGAXTIJZYFTSU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LEODIEKBKSFOJLUBLASNPIALDGJENKBHBFQXVLJQXFXOCVYMELCPPXYDHKPADQOFEOXCTRVGYFJAPKYFTHMKTNSZBNHTZFDPAMMWIIAQSGHQNCRNFECPJNRSTEQTGQVWPA");
    tmp_msg_0.value.assign("JNPQVPARQWZVYHUSICHCCCGJDPKWTYLOFZXVHNTOBBNECPUSUFJLWIIKTBGUNYQEHIFQYPUADYJQQIFBWPWTXVTFXPQBDFCXDQIURRTCGSEXSTEBZCKDRRRDZYZWEMXJWREXVAPXSHLXNRVJKXOCASESGUAVDQOSF");
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
    msg.setTimeStamp(0.719245278184);
    msg.setSource(34709U);
    msg.setSourceEntity(125U);
    msg.setDestination(5730U);
    msg.setDestinationEntity(216U);
    msg.name.assign("LUVRYSFFNRUXUOUCXSHNZJZJYIWAICPKJGXIQBQPYFNVSISLBOEQEUZMDUTEKZPYBPJLOBVYCORKSJCHLBMCHLVIAYXMWDCFESCNZZZEFWAPMWCVJKGTTAWGOCQDGFMXDADTOFZUAWNRSGBHVSAXQQHIBNVFEMBPSVBGVTMLIWKCWKRJAJLOIJXPYHKQARTPEHKJOINQLTFQGFVTDMYXUNWGTRHPXSZUUDHEYKOMT");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("MPYJNETKITKPRTKGYVSMZPVVTJOQJLDCRIGNXZEBK");
    tmp_msg_0.value.assign("NXMBMLOVKALNSMFMGDLVTVBYDJERQLDYQXWQOJSPCQOPODWBEFQWYEKCTBLEKUAU");
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
    msg.setTimeStamp(0.854076101106);
    msg.setSource(34870U);
    msg.setSourceEntity(252U);
    msg.setDestination(32806U);
    msg.setDestinationEntity(201U);
    msg.name.assign("CRQBYPSWAXHSCOHYVPZOWHGKUNXWGUSLBAVUQAJFWMYLBSAPJTCUHEHJDNBPXM");

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
    msg.setTimeStamp(0.861879076159);
    msg.setSource(17693U);
    msg.setSourceEntity(53U);
    msg.setDestination(56305U);
    msg.setDestinationEntity(99U);
    msg.name.assign("IWYJTCKRQHOEVMU");
    msg.visibility.assign("JMUTYJSUKZXVNHWQVLQFVNAPNYZKODRGPVQEQKEWMHNROFHAIUYTWNCZHNGMFCAMHFHQBVKCSISNBWKBHAILXPMBJESBHGNUCXJLOSICJZTRWVGYG");
    msg.scope.assign("WMHXBHKRACDIPSYFWFRROTDOXSVJLAVIPBCLDDXQGWVGLIQUOFUHSJNUEGGDMUNHUYLGILUIE");

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
    msg.setTimeStamp(0.86283601374);
    msg.setSource(55458U);
    msg.setSourceEntity(205U);
    msg.setDestination(28176U);
    msg.setDestinationEntity(242U);
    msg.name.assign("GCTGBFUMERIVMZEFMHFRROWQDSMOGIYVJZIUTHNSJITOXGQVEKHOIHZHXYATFZPANXMYLOSATQCNKCDBKQUEYEDDLVMQUIUEDHBCWCEBPDZWBRBDGQYUBIIKWNXRSFZWAVJLJKAEQAFNXSCNKGFFVPAYTOZ");
    msg.visibility.assign("UNKQZAJYLRADCYTAOCFTJROAFAIPVUDQBLTGVMFDAXBPKQKXGYGKCKZPAMRHWLNBTXJGMFYZLSGUPYZSWLOCQNTREPNNZPHYYZTCCEWKBYNFGEWEXMKBHHMGIJFRVGIQXSNOEVFOSXSQFCBWWJGFIDHS");
    msg.scope.assign("KMCYPISDYHOXSXQXGWXDXYOBKDBKMWDLFLUPYZDFZTSXOAOCAPMMPWRHGUYTJLTIDPOKQHCM");

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
    msg.setTimeStamp(0.312195169423);
    msg.setSource(1019U);
    msg.setSourceEntity(192U);
    msg.setDestination(39901U);
    msg.setDestinationEntity(22U);
    msg.name.assign("MHBUPLRWDSYPARFSGBOWYOCXDZIOU");
    msg.visibility.assign("ZFIPBNNKUBTPDOULNSMQAMUPFIKRJVKHRECLQXWRMVVRZTTQXGDRSZSJNMJUJHLVSVMUDCUENFTKECFLABMEOQYKTDO");
    msg.scope.assign("SEHKMJNNOBUNUPCAEIPSRPJMTWWOYVRIWHYUDGUGGPXNDOSAVYOXAPTULGZFLXMSFICNFNBOMEEZSSHQUXEAFPBIAVIQXWVDKRRQYNCQZDLZGMQHWHZVOEASQIHFTYKAYBYTEFWLTOOKJLRARHGHMKIPDAMYZVOFBJGMSRMBEPKGFPFJJ");

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
    msg.setTimeStamp(0.482517404719);
    msg.setSource(39982U);
    msg.setSourceEntity(21U);
    msg.setDestination(45493U);
    msg.setDestinationEntity(166U);
    msg.name.assign("BRRLVBKSMCCCJHYMBUKUNPJOETSUWIOTOVYNESLLKELJZOLCHUVWMGVPNXGUBSRTBURFIPDRMDFJOKGAAMBQNZQDCPTRTJXAYZIREVMWWIOLKWHZQXZXTGDPVOYJICHNHSPUKLAFCSC");

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
    msg.setTimeStamp(0.0647296845914);
    msg.setSource(17556U);
    msg.setSourceEntity(198U);
    msg.setDestination(58296U);
    msg.setDestinationEntity(107U);
    msg.name.assign("TQBTFQKDELWXCUASDAKKMHSQCOPXMBURPVZVFSUICLGOCGJWJJYENRPVBZHDAMDTJPGNTKBWCHNLGBHKZSVPBQGEQXMFBGWGSXNVXITSZSYCQX");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DTZGWWQYDCEMBYPYDTFKKBEBTENKUNLUXXYKSOSRPQNATFYKEXHEUPWUMWZLFHHYSLGQXYDIZXFMZHCYVZCWGAXMBZDMKFOJZCWIIHGRRAXTHVRQIBTOPIQLAAFZUAJOAKPLLNCORUGAVJQWITPUNMNJJGUPSVWRFXSEUILC");
    tmp_msg_0.value.assign("FJCMMTJVBLYKGKCPMXQAXRARPINCBUNPSQVNEKEFOESUHMKXBDVUZPCIKBMGUAWUDDTEEHDHRRJBOZNOJYTKHKNMGIDQGSENRNARZDPRVFPXTODAHWZQIVDYLZRZGYGXHIQOVLQHUDYVLJVTCCGOUXCQUCQBEPOWFIWRMYKLZADYLOPFYHSFXAJRCBVIOIKMJXXNSNHWEFHAEQFZ");
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
    msg.setTimeStamp(0.200726999502);
    msg.setSource(5541U);
    msg.setSourceEntity(95U);
    msg.setDestination(44066U);
    msg.setDestinationEntity(13U);
    msg.name.assign("UUQACKNJYTPBDDXHUBMNQZCVQWAPFRMRIEMVIDRZGJOQCGGGOHBYFJXRNHGWWVESTPDNBMXAEZJXPTAAOJUVUFFOKIASLPWXFDYNBDZVMNLDAWGKXIIUKCBFWZWGLUVLZXFSOHNSHPHPSQAZSI");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("WZPATDRLNFUXDXZLJGRQWCYTMOZIDORUJMNPRXSGTSPIOQRLALVVBFWYNTWBQIRAQRJDSNVOTYNUARXKOATHSMFEFGBSMWAIBSDGEKISERCVNUNGZGPIOPOSPXBWVODAQYHYLVUFHJFENBK");
    tmp_msg_0.value.assign("SFRHBMCZVZDUQZROEDLYQIXMBWTQTZEAQHBYYZHVXWLZSYWOS");
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
    msg.setTimeStamp(0.329439129178);
    msg.setSource(63546U);
    msg.setSourceEntity(99U);
    msg.setDestination(23332U);
    msg.setDestinationEntity(26U);
    msg.name.assign("TBSUHKOTMZACXYNXPPYBKNJWUHMTIAFTQVPWUIZXFWKRGILFRGTSZRHQHFJKWHXGNVTZDMVCELWOZYSGEVJFAUKCNSTJRDMBYDAGURWPGQIEOMQLEFSHZLVATHCYFOADZCCXPBEJIRBEISKQOMOULOGCIODVVKCGMEDPF");

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
    msg.setTimeStamp(0.425609819281);
    msg.setSource(57194U);
    msg.setSourceEntity(57U);
    msg.setDestination(40129U);
    msg.setDestinationEntity(8U);
    msg.name.assign("SFTPKBUUUYXYTCOGIZGJHPEYOJHNHMQNIGQWCFVOPJISNYDLXKEXJROSVOSAVWPHUXDQUFRBGISMQREOAKRXSOEGHEOKSNXKAPATYKPJYTAGZARLQNOYIAPNGJBDGXZCUDNDM");

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
    msg.setTimeStamp(0.979682030284);
    msg.setSource(26330U);
    msg.setSourceEntity(156U);
    msg.setDestination(50724U);
    msg.setDestinationEntity(80U);
    msg.name.assign("RUCHYAKTVUCVUMMQRSENVPHDJPPFPRMGROYPXMHEZALAQYWDOOAKXMNZNPUHNXHQDIWYCPJIKWRFDHWFTLZXTJWLFSMHQIUEAKWMCDROVMBCXLYCFSEJTBXGBKFSLFOWYLYNEMOJBFLZSAZFGVDJANIJVXHVCGOOKCHLKELJAYKUITATTQZIGCLHGFNBXVXRXYJKTBDSOEQUUBSDWMINAGCDWBZSJIUTIRPS");

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
    msg.setTimeStamp(0.602011912274);
    msg.setSource(5965U);
    msg.setSourceEntity(143U);
    msg.setDestination(52320U);
    msg.setDestinationEntity(33U);
    msg.timeout = 49402594U;

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
    msg.setTimeStamp(0.00598948320166);
    msg.setSource(33777U);
    msg.setSourceEntity(176U);
    msg.setDestination(28853U);
    msg.setDestinationEntity(165U);
    msg.timeout = 2291152602U;

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
    msg.setTimeStamp(0.591614105646);
    msg.setSource(57977U);
    msg.setSourceEntity(204U);
    msg.setDestination(32549U);
    msg.setDestinationEntity(232U);
    msg.timeout = 3028543964U;

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
    msg.setTimeStamp(0.0725199108829);
    msg.setSource(19819U);
    msg.setSourceEntity(76U);
    msg.setDestination(3373U);
    msg.setDestinationEntity(191U);
    msg.sessid = 2480742360U;

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
    msg.setTimeStamp(0.780276914209);
    msg.setSource(32354U);
    msg.setSourceEntity(236U);
    msg.setDestination(34629U);
    msg.setDestinationEntity(16U);
    msg.sessid = 4287004327U;

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
    msg.setTimeStamp(0.96480498366);
    msg.setSource(10778U);
    msg.setSourceEntity(50U);
    msg.setDestination(24365U);
    msg.setDestinationEntity(57U);
    msg.sessid = 4083834397U;

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
    msg.setTimeStamp(0.257952455594);
    msg.setSource(35990U);
    msg.setSourceEntity(54U);
    msg.setDestination(55052U);
    msg.setDestinationEntity(229U);
    msg.sessid = 1426773115U;
    msg.messages.assign("AJTCKZCISCKTMMPKMLEVNFISJKAOYIKAJNGZQBXRRNBWHUDYMDMEWULDDGRUTBYEAONJHCQKWCINVQQOLGAKVWPEXVRRPSLBHTYMSBMXODUOFPSWAKHDVRFCXZIPYLULENIWLMHQOQKJGUZUVPGNCJFXPFSJPOLZPZYYFEOVLBERFURNVQQIJGWXTRFVDJFAGUWTLMSIBRDHXJTIXDPHNTYYZ");

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
    msg.setTimeStamp(0.382571959067);
    msg.setSource(17300U);
    msg.setSourceEntity(250U);
    msg.setDestination(4803U);
    msg.setDestinationEntity(232U);
    msg.sessid = 3323974423U;
    msg.messages.assign("TGPPDXAAMHOEAIZDZSDBJYFPYQHBGJORLUSJITVRCFVJZKNUSUKJSNIYTEXTBFVINEJCWHVTSXSMHYFX");

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
    msg.setTimeStamp(0.99218541654);
    msg.setSource(585U);
    msg.setSourceEntity(67U);
    msg.setDestination(21822U);
    msg.setDestinationEntity(189U);
    msg.sessid = 654465637U;
    msg.messages.assign("DEZYIRPJUMCQHQTKLXMVLWTNIUDNVORQRJNWELMGPTKMHNNBTEKXDBFOXLXZHVGRJVOXAYKSITJAIFISWHMIQRPRPOVMDZTKXVGDYHEBIDAQSLEDDQMCVSYGQLESKDCALZUYCPETNGCGHZXOGRJAZVGYPSEOFDKXBFANXTRVYAEFSNFPWZBGNFFICJVIPYNEWHUSRCOROWWUKBMJPOSLAFZTJWYUXOZQUMQWBZGPBUYSKBHTUHLA");

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
    msg.setTimeStamp(0.511176063622);
    msg.setSource(54664U);
    msg.setSourceEntity(14U);
    msg.setDestination(34314U);
    msg.setDestinationEntity(57U);
    msg.sessid = 3475923216U;

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
    msg.setTimeStamp(0.0709535527367);
    msg.setSource(24281U);
    msg.setSourceEntity(220U);
    msg.setDestination(23441U);
    msg.setDestinationEntity(104U);
    msg.sessid = 2222180207U;

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
    msg.setTimeStamp(0.226683815618);
    msg.setSource(37990U);
    msg.setSourceEntity(199U);
    msg.setDestination(53324U);
    msg.setDestinationEntity(64U);
    msg.sessid = 4099800197U;

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
    msg.setTimeStamp(0.187288574602);
    msg.setSource(45980U);
    msg.setSourceEntity(160U);
    msg.setDestination(50402U);
    msg.setDestinationEntity(114U);
    msg.sessid = 1837112050U;
    msg.status = 45U;

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
    msg.setTimeStamp(0.969312571134);
    msg.setSource(57625U);
    msg.setSourceEntity(3U);
    msg.setDestination(32526U);
    msg.setDestinationEntity(209U);
    msg.sessid = 226494178U;
    msg.status = 32U;

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
    msg.setTimeStamp(0.299070293984);
    msg.setSource(28124U);
    msg.setSourceEntity(127U);
    msg.setDestination(62192U);
    msg.setDestinationEntity(100U);
    msg.sessid = 1654452531U;
    msg.status = 146U;

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
    msg.setTimeStamp(0.703379901249);
    msg.setSource(10593U);
    msg.setSourceEntity(178U);
    msg.setDestination(55889U);
    msg.setDestinationEntity(3U);
    msg.name.assign("JWMPWESASYYMQXSIPNFJMQHVGQTIUYSCMLOGGVGOZQRJRXBIEETGGSGXNHUPUTYVJBMWHAPUKFIYQHAFYZTFKXKWLVXBIB");

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
    msg.setTimeStamp(0.9898216205);
    msg.setSource(51469U);
    msg.setSourceEntity(210U);
    msg.setDestination(6759U);
    msg.setDestinationEntity(117U);
    msg.name.assign("LIUCLVPCTTFNKCWYNOVCOVYPBYEQZUPDDHBLZQIIEALKFCPTNZCSQVPUCPXJNBYYJHNHUBFORDEIQRTZBSYWKJNUQQOLFDRFWKRITFKUCHDLESYMZMGMNHQAENIRZTWODTIMSMMRJWGJXFAUFPBSMVSXCVBXJPSYJXOZXVARKTXMGTUFOAXGAWEBAYHZLNPHK");

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
    msg.setTimeStamp(0.547802179939);
    msg.setSource(20077U);
    msg.setSourceEntity(101U);
    msg.setDestination(2599U);
    msg.setDestinationEntity(199U);
    msg.name.assign("MMBQHTZMZBTQQZWFRQFFLFCPNNOUTVAEKBQAJMEAMVDCMRAPFJVCVWXIDIPENRXTYZPNUSUKNNAJWELCOAITFIKSXSKWTDIKDJFPJCXEYMFDHSQKSKYIOHLWQTCUYLRRCSGGXDSCKLHXWCAREGMABLBUPONJRXRJVZWKGVWUJLJRLOSBDONIJVVYYHLTQBXFVX");

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
    msg.setTimeStamp(0.497575534628);
    msg.setSource(47489U);
    msg.setSourceEntity(108U);
    msg.setDestination(9581U);
    msg.setDestinationEntity(231U);
    msg.name.assign("SURWOCDOBGTPRYCXHVTZPJRKONXLDZXYKJERZSQYDQLTQAWJSILTYWIXALMEJQECZBOAFFLAUKIOHPFUZUCUBVBRGVSEXPYMIJYUZFDYMIHRVBTSEOMQAQLCLCZKHDXLZZGYHDVDWIKJPGAPKNVBONTHWFPXWXIJGDRWROVHOSVFPKNEMUUTFKJUIWAMENVTGHSPQYBMJBMNNGMAKWHOFNCDAFXRWCGMSCEI");

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
    msg.setTimeStamp(0.636949878731);
    msg.setSource(31307U);
    msg.setSourceEntity(182U);
    msg.setDestination(61393U);
    msg.setDestinationEntity(160U);
    msg.name.assign("SJPBDDUOWVOTKYDKIJDXHSJDVKVUPWKSHFBSYBZUEBMKEDEPGDZXYIUIWCLHQZJEPQJVHYQONFCPXYRZXWHO");

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
    msg.setTimeStamp(0.604221599416);
    msg.setSource(48679U);
    msg.setSourceEntity(184U);
    msg.setDestination(46324U);
    msg.setDestinationEntity(14U);
    msg.name.assign("KHSRJWUEPFTHKBYZXMMMQX");

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
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.271330623052);
    msg.setSource(9180U);
    msg.setSourceEntity(137U);
    msg.setDestination(57742U);
    msg.setDestinationEntity(162U);
    msg.action = 58U;
    msg.longain = 2622457379U;
    msg.latgain = 1840472474U;
    msg.bondthick = 3995965313U;
    msg.leadgain = 1859914863U;
    msg.deconflgain = 3583209314U;

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
    msg.setTimeStamp(0.0563214368248);
    msg.setSource(61601U);
    msg.setSourceEntity(98U);
    msg.setDestination(32025U);
    msg.setDestinationEntity(231U);
    msg.action = 48U;
    msg.longain = 2271358184U;
    msg.latgain = 3045926899U;
    msg.bondthick = 4252119820U;
    msg.leadgain = 841765081U;
    msg.deconflgain = 2683344681U;

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
    msg.setTimeStamp(0.624998987835);
    msg.setSource(5750U);
    msg.setSourceEntity(245U);
    msg.setDestination(8572U);
    msg.setDestinationEntity(248U);
    msg.action = 110U;
    msg.longain = 1940864131U;
    msg.latgain = 3084427488U;
    msg.bondthick = 389216791U;
    msg.leadgain = 573726579U;
    msg.deconflgain = 2247633123U;

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
