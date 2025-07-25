//***************************************************************************
// Copyright 2007-2025 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: 5132f68dffb4939a49bbaba996b367c5                            *
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
    msg.setTimeStamp(0.4753944578533499);
    msg.setSource(51439U);
    msg.setSourceEntity(164U);
    msg.setDestination(17169U);
    msg.setDestinationEntity(83U);
    msg.state = 118U;
    msg.flags = 203U;
    msg.description.assign("MFDHEMFAYCFNZIWLDZGQIPVWEUDAQVOSOYCAKVURGZQVGGWOJIPLMZFQEMUBVOSGUKDVYSAHOQNCWWBLYITFCZEZUAEMFTJEYDRFWNVLQHKBBCFWMTDAJTLIBWIQVPSQYILFEJJDGCEOGXUXDXSVZCROKXCDSIPHXPFNCRTJULSMYNURI");

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
    msg.setTimeStamp(0.8959296938327919);
    msg.setSource(53815U);
    msg.setSourceEntity(85U);
    msg.setDestination(38677U);
    msg.setDestinationEntity(98U);
    msg.state = 63U;
    msg.flags = 214U;
    msg.description.assign("RPFABSZBUSCGJMMVWBPDKLENOVSRFEHXKWMXPELLZSCXQLHMACTGJOCYYJJUVZZALDMUJNPUZGQTNXRSRXJEMVIOGKDQA");

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
    msg.setTimeStamp(0.10956343717618611);
    msg.setSource(35173U);
    msg.setSourceEntity(126U);
    msg.setDestination(26285U);
    msg.setDestinationEntity(173U);
    msg.state = 31U;
    msg.flags = 51U;
    msg.description.assign("YAMWESJFKCWVTDJYOLKXEFQHSQFXZTCVOAWLNKBIZRZXHXUTTOSREDFQRIPBVBOUBAGIFUYAUMPAIQHLLGDOAYAEQIJELRVVUWQOFAZHKPRHXYEYHISMSZZCKVCTGCPIHPBDJDEHNMJLRLEONPRZGCRWSUCFYLPNLTNJSKIFTGPDIYWZKXWOIWRDKUMBGXBFNTQAMKRADSNYUVWXNTQLYJMMPQEGVSQNSJHEJGDMJUVBOVFOXCUHKWZGC");

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
    msg.setTimeStamp(0.37454836269651315);
    msg.setSource(45401U);
    msg.setSourceEntity(167U);
    msg.setDestination(1031U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.7893074140681395);
    msg.setSource(63146U);
    msg.setSourceEntity(58U);
    msg.setDestination(61152U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.2263850484031784);
    msg.setSource(26738U);
    msg.setSourceEntity(160U);
    msg.setDestination(11327U);
    msg.setDestinationEntity(131U);

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
    msg.setTimeStamp(0.08802064540269527);
    msg.setSource(58200U);
    msg.setSourceEntity(221U);
    msg.setDestination(6341U);
    msg.setDestinationEntity(20U);
    msg.id = 64U;
    msg.label.assign("SETYEFIUMYXILDQWKQQCVQTHCKLMZPEJEPUNTUPYENRFWQWECFSSBNUDIQPVDDISYKVRPTCGHCDCREGXUTKSVGXAKRFGLUBOWHKDOLNPERNMCWJFAQJUZXNKYKTRNHZMMMKKCONVTVDNIUWOZVHBPFSMXWQFAHBSGZLLPTZMBTBCGGHBPJEXXJORJILFVAZFBGSIYOPOJJQTMEAIQDYLHAWGZLBOIHDAABJZOGMXXWUSFYIHDNXRSVCALWAJ");
    msg.component.assign("GSCYHVYFVPOTOLDSCMUOUYWKWTOFEFBBCAUXFNWLHNGXCKONTAJPNHQVXPTESAOKIWHWPUOBREYZGXVPJJBBJPPTDSLXUUDUXNLIABGVOBJBNQKDHWXZSDEUPQMSATYRRRRAPWVRGTLZYAMFJMMDDGNGYKHOQELUCMSMFXWNQKMDGCZRASIBRIYMVVZCOEIZRKQNTXJQVFCJPABTJHLAZQLLVSDEIDYHNRCMKUFYIESHQHWGTFWZQEKXIGKJL");
    msg.act_time = 59121U;
    msg.deact_time = 16471U;

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
    msg.setTimeStamp(0.3974539750619718);
    msg.setSource(50873U);
    msg.setSourceEntity(113U);
    msg.setDestination(36183U);
    msg.setDestinationEntity(61U);
    msg.id = 6U;
    msg.label.assign("DKIOXBASRVPCWACQCSBKYZCWIREVUTWOGVVDFXZJOWDDSTHKFYBVSJQJEXGCMEOHULZYVBKQRPHCJWSTIZTBWDIARVPLUAAIGKQPBNNGRZSENTFJTHEXJXNVQCYO");
    msg.component.assign("FIWVAQGBDIPBXWNQFIDLISZUPTKYKHTPZWMKYAHXBCANBZTKNAOAMPSIFCENHLDQQYMPKHSCYJAZICGEKMKEESWUQOGYWR");
    msg.act_time = 44976U;
    msg.deact_time = 16284U;

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
    msg.setTimeStamp(0.35375318660307875);
    msg.setSource(45210U);
    msg.setSourceEntity(43U);
    msg.setDestination(23719U);
    msg.setDestinationEntity(36U);
    msg.id = 184U;
    msg.label.assign("VCEQJYCAMTMBDGXQUSQQFDGMYGGINZSBDHILPLZKICJZKTBFUOXTKRHSHNCYORXTCCALEMVZHVUOJGFLFWKBQJOMPVENEBUUQPLZFHMRYFWHRVNVA");
    msg.component.assign("ZSOQWECKDXJQNZVDBXJVHJFAJLVQKUXLCDXEDFMWLAJPKCZAQRWBIQHSEYF");
    msg.act_time = 60793U;
    msg.deact_time = 60118U;

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
    msg.setTimeStamp(0.13631429217611601);
    msg.setSource(8554U);
    msg.setSourceEntity(97U);
    msg.setDestination(5372U);
    msg.setDestinationEntity(123U);
    msg.id = 88U;

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
    msg.setTimeStamp(0.17425345881406018);
    msg.setSource(30516U);
    msg.setSourceEntity(3U);
    msg.setDestination(30695U);
    msg.setDestinationEntity(202U);
    msg.id = 143U;

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
    msg.setTimeStamp(0.37819382446042304);
    msg.setSource(47780U);
    msg.setSourceEntity(171U);
    msg.setDestination(17306U);
    msg.setDestinationEntity(117U);
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
    msg.setTimeStamp(0.16711337617067523);
    msg.setSource(47400U);
    msg.setSourceEntity(22U);
    msg.setDestination(49783U);
    msg.setDestinationEntity(142U);
    msg.op = 144U;
    msg.list.assign("TGQIQHYVCSUMSKRAIPFITMKZNZQWJFGCUJRKGSNRXMPHYEVOWTIHUYRVEMAVNQJWZUDEQXAIIWYHEXLFOXEDXALVCEZJSJXPWSRMLOUWYGOBLEV");

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
    msg.setTimeStamp(0.1680476066845925);
    msg.setSource(17292U);
    msg.setSourceEntity(86U);
    msg.setDestination(24043U);
    msg.setDestinationEntity(86U);
    msg.op = 85U;
    msg.list.assign("MQKZOOQJATKHMXHFEXVIGMHUABXBYMDOHZZYTXLXIYMCVWWSWPYLGYKGLBTKEJFKEVGDABCVGIKRACPFNCSIWALOUNNNSAUCJSQWWQFFBRKBCPIYUSDPDFMK");

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
    msg.setTimeStamp(0.24825684908516088);
    msg.setSource(9733U);
    msg.setSourceEntity(139U);
    msg.setDestination(12597U);
    msg.setDestinationEntity(109U);
    msg.op = 104U;
    msg.list.assign("DOYKGBEDYEUCCJFVSBQYTRWHXGQKKWWQTIYALHYQVCFMAJHJPGMDFQTTTHJUSMZDUZPKTFNUYKKSFXMMGPAXPNIIOSOYEZMZHOMPWANJTCKZDAXUNCLNEEKBGHXORANGACIIDJVXLSOJGYVFZSREHBNZQQMFCUBTRIJBJDT");

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
    msg.setTimeStamp(0.1479969397603067);
    msg.setSource(49861U);
    msg.setSourceEntity(233U);
    msg.setDestination(2936U);
    msg.setDestinationEntity(79U);
    msg.value = 229U;

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
    msg.setTimeStamp(0.5803726062144622);
    msg.setSource(27338U);
    msg.setSourceEntity(40U);
    msg.setDestination(32370U);
    msg.setDestinationEntity(16U);
    msg.value = 54U;

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
    msg.setTimeStamp(0.009177213939480455);
    msg.setSource(28638U);
    msg.setSourceEntity(116U);
    msg.setDestination(24029U);
    msg.setDestinationEntity(4U);
    msg.value = 169U;

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
    msg.setTimeStamp(0.09686994420423523);
    msg.setSource(47754U);
    msg.setSourceEntity(66U);
    msg.setDestination(16587U);
    msg.setDestinationEntity(200U);
    msg.consumer.assign("FZLFGJNUPOZYQBAGDAMKTZRXZDHUKEWGTVBMSLLMYSEUOTIORILJJNTSVAKXSVCTDJVPKVQCPULF");
    msg.message_id = 43231U;

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
    msg.setTimeStamp(0.2604483026916722);
    msg.setSource(30383U);
    msg.setSourceEntity(171U);
    msg.setDestination(38576U);
    msg.setDestinationEntity(83U);
    msg.consumer.assign("LRUKMGIAGWTSNPBHQREUYTOLDEWUTANLMGZHWRAHONQUGTSITRFDDRKCMBPJEFHDIZKQIATAJBIWZDGOUMVQFJZRVVODPCKJMWXENRWQOEHLXQONZAFEZQVYBLUXFVIXMSLASNGPCPRIL");
    msg.message_id = 23818U;

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
    msg.setTimeStamp(0.7016225185636347);
    msg.setSource(57162U);
    msg.setSourceEntity(26U);
    msg.setDestination(17635U);
    msg.setDestinationEntity(42U);
    msg.consumer.assign("VIQQWZKHIFRFNHPQRPPVDPGBPGXKYTIHEABNJURSNONBYGZWDQNICTMIXGLPAMPYDDMVDTMQRMPXFAGKOUVXBIUBYKAAQNFVJIELYLCVFKWDEEAUKSFKDWSSLMAMLSXQSYLHGWBCCGYRTNZYRRTCUUNBSX");
    msg.message_id = 49497U;

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
    msg.setTimeStamp(0.9258341891722076);
    msg.setSource(42663U);
    msg.setSourceEntity(12U);
    msg.setDestination(5655U);
    msg.setDestinationEntity(189U);
    msg.type = 145U;

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
    msg.setTimeStamp(0.8441654765154799);
    msg.setSource(23427U);
    msg.setSourceEntity(171U);
    msg.setDestination(12971U);
    msg.setDestinationEntity(204U);
    msg.type = 91U;

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
    msg.setTimeStamp(0.15493620361716198);
    msg.setSource(1459U);
    msg.setSourceEntity(203U);
    msg.setDestination(54468U);
    msg.setDestinationEntity(115U);
    msg.type = 121U;

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
    msg.setTimeStamp(0.13026357599205918);
    msg.setSource(24530U);
    msg.setSourceEntity(202U);
    msg.setDestination(58651U);
    msg.setDestinationEntity(24U);
    msg.op = 45U;

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
    msg.setTimeStamp(0.8702358013506504);
    msg.setSource(45737U);
    msg.setSourceEntity(163U);
    msg.setDestination(29332U);
    msg.setDestinationEntity(12U);
    msg.op = 100U;

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
    msg.setTimeStamp(0.8237310943623587);
    msg.setSource(28487U);
    msg.setSourceEntity(234U);
    msg.setDestination(49393U);
    msg.setDestinationEntity(61U);
    msg.op = 180U;

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
    msg.setTimeStamp(0.27758142306299816);
    msg.setSource(51584U);
    msg.setSourceEntity(188U);
    msg.setDestination(28409U);
    msg.setDestinationEntity(62U);
    msg.total_steps = 245U;
    msg.step_number = 153U;
    msg.step.assign("IPKDGLVXBWTFZOCASHJMDVELMHEXNHVLBPCJUAITRWDKRICQZGHPWYAFQHSWFCAYHWTVIQCUDVNGJVCGTKQDEUHYSMOBGNNYUUSBQZPOKCVYMIAAZQPETLAOBTFPSHOGRYPENFLZJXESUTESPBYHXDXYKOXKXNRAIGTUUEMZRLHFJDKWESXLOWPBIAZJSMDVGBWOFLFKRNYDEVZYVBTACXKNWZIRXJJOGFUZUMMFM");
    msg.flags = 108U;

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
    msg.setTimeStamp(0.9274042925160456);
    msg.setSource(55652U);
    msg.setSourceEntity(100U);
    msg.setDestination(19414U);
    msg.setDestinationEntity(6U);
    msg.total_steps = 0U;
    msg.step_number = 140U;
    msg.step.assign("UAKLCDPHTNWVPXOYDCTCFJJTAXBZZAXOOQVOUPPRDQRITQFUPDRWIYUIPWHENSYMFCUKOBFMVQKGNKPCDKZWLHRSLFYYDDBICLSZUOSHJNLUPACGFSZJZHWWJSKDIYLBWQTFVZBDHVVJJMUVZAQBEKNQBGBTEHOMJRCGMFEPAMNXXGB");
    msg.flags = 54U;

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
    msg.setTimeStamp(0.486268023600266);
    msg.setSource(53911U);
    msg.setSourceEntity(27U);
    msg.setDestination(26629U);
    msg.setDestinationEntity(158U);
    msg.total_steps = 50U;
    msg.step_number = 1U;
    msg.step.assign("QNQEINXXDETLADCFSESMSNWEGODMQGZRFEQCBXBTIQZVIDIEDIAHVKARHCWEQOANTJBSYRIWUMKGPHARYVPZPLPEZXZOJBLVGBA");
    msg.flags = 106U;

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
    msg.setTimeStamp(0.30166028392948463);
    msg.setSource(62467U);
    msg.setSourceEntity(13U);
    msg.setDestination(64985U);
    msg.setDestinationEntity(229U);
    msg.state = 45U;
    msg.error.assign("NVOPGFWHIJAQRBVEZWTVCDJBSKHZVARGKQMJLJMDAWEINRODHRYKADFTUTSCXZSCTUTKYBGFEAIOVJQCUQIYWAXUMFCMZSFUAENRLKSYWBHDYJTBWPBBPYLLADPYYQKLMLZMOMIUMSIRXOFDHJXGCPVNPJDQHOESLBIGPADWWCHUSQZGVXCRHUGGVXQNTGLCNITK");

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
    msg.setTimeStamp(0.09610083710878525);
    msg.setSource(5924U);
    msg.setSourceEntity(181U);
    msg.setDestination(23535U);
    msg.setDestinationEntity(200U);
    msg.state = 57U;
    msg.error.assign("UJCRWKKVANVCTUOZPLOJRJQNDDMCBIJIBQRKSEIYRRDPRYQCUSZJLWVECGLCFVAUWNOGPUBGSQAVUDNGDBKUBJMVIQTUYAMTXQHHBXSOKYRHAIQBXKYHTBFDHRAZLNLFTMHXQKKFYODFNERSTLEWEWOEAOFLM");

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
    msg.setTimeStamp(0.5753516522748117);
    msg.setSource(62329U);
    msg.setSourceEntity(222U);
    msg.setDestination(1215U);
    msg.setDestinationEntity(108U);
    msg.state = 67U;
    msg.error.assign("JNQMJHZBTHIGBNL");

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
    msg.setTimeStamp(0.8507436025878256);
    msg.setSource(37617U);
    msg.setSourceEntity(4U);
    msg.setDestination(37199U);
    msg.setDestinationEntity(229U);

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
    msg.setTimeStamp(0.7524667249878662);
    msg.setSource(5936U);
    msg.setSourceEntity(206U);
    msg.setDestination(48734U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.46045589313664403);
    msg.setSource(65299U);
    msg.setSourceEntity(177U);
    msg.setDestination(31941U);
    msg.setDestinationEntity(59U);

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
    msg.setTimeStamp(0.3624137458299902);
    msg.setSource(44200U);
    msg.setSourceEntity(175U);
    msg.setDestination(57766U);
    msg.setDestinationEntity(125U);
    msg.op = 49U;
    msg.speed_min = 0.300167758870575;
    msg.speed_max = 0.3842413949625305;
    msg.long_accel = 0.382226142097673;
    msg.alt_max_msl = 0.14296197349089168;
    msg.dive_fraction_max = 0.550841538521259;
    msg.climb_fraction_max = 0.8270580414866056;
    msg.bank_max = 0.02600622266278918;
    msg.p_max = 0.5808003931521094;
    msg.pitch_min = 0.09915316520187745;
    msg.pitch_max = 0.8436524483577532;
    msg.q_max = 0.021474920791938357;
    msg.g_min = 0.6391857278488143;
    msg.g_max = 0.06800500928214703;
    msg.g_lat_max = 0.4205581516712167;
    msg.rpm_min = 0.6478950925843133;
    msg.rpm_max = 0.3835781812000921;
    msg.rpm_rate_max = 0.33395885128016756;

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
    msg.setTimeStamp(0.5175989129471484);
    msg.setSource(55991U);
    msg.setSourceEntity(178U);
    msg.setDestination(4014U);
    msg.setDestinationEntity(106U);
    msg.op = 59U;
    msg.speed_min = 0.09627427385890175;
    msg.speed_max = 0.7155700982128307;
    msg.long_accel = 0.14654980317777522;
    msg.alt_max_msl = 0.9857818541269356;
    msg.dive_fraction_max = 0.9164581422402218;
    msg.climb_fraction_max = 0.7048353665825083;
    msg.bank_max = 0.21450710573723264;
    msg.p_max = 0.6868840954088173;
    msg.pitch_min = 0.11672012520675079;
    msg.pitch_max = 0.19265819736490952;
    msg.q_max = 0.6806563845247467;
    msg.g_min = 0.6599346654733446;
    msg.g_max = 0.9704134944107776;
    msg.g_lat_max = 0.9394282751295473;
    msg.rpm_min = 0.16344534319831616;
    msg.rpm_max = 0.3964179899638065;
    msg.rpm_rate_max = 0.024234549078916423;

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
    msg.setTimeStamp(0.5060454028809417);
    msg.setSource(36031U);
    msg.setSourceEntity(10U);
    msg.setDestination(45913U);
    msg.setDestinationEntity(105U);
    msg.op = 212U;
    msg.speed_min = 0.9003901623298913;
    msg.speed_max = 0.9774320200289726;
    msg.long_accel = 0.26076663424161417;
    msg.alt_max_msl = 0.3572958375009987;
    msg.dive_fraction_max = 0.301248440537788;
    msg.climb_fraction_max = 0.8049614510918937;
    msg.bank_max = 0.5808652834867604;
    msg.p_max = 0.8274016378910792;
    msg.pitch_min = 0.09036551514308;
    msg.pitch_max = 0.46680444944003585;
    msg.q_max = 0.6172234366058106;
    msg.g_min = 0.3904792178886589;
    msg.g_max = 0.6619509019815444;
    msg.g_lat_max = 0.9993146814060223;
    msg.rpm_min = 0.9254502548744399;
    msg.rpm_max = 0.7791814444388008;
    msg.rpm_rate_max = 0.5015901114435548;

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
    msg.setTimeStamp(0.44864246944495445);
    msg.setSource(42300U);
    msg.setSourceEntity(231U);
    msg.setDestination(13251U);
    msg.setDestinationEntity(29U);
    IMC::StopManeuver tmp_msg_0;
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
    msg.setTimeStamp(0.7961104175374834);
    msg.setSource(23459U);
    msg.setSourceEntity(196U);
    msg.setDestination(29672U);
    msg.setDestinationEntity(73U);

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
    msg.setTimeStamp(0.32146705943360454);
    msg.setSource(62983U);
    msg.setSourceEntity(86U);
    msg.setDestination(37718U);
    msg.setDestinationEntity(180U);

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
    IMC::RamUsage msg;
    msg.setTimeStamp(0.35645050788362465);
    msg.setSource(9954U);
    msg.setSourceEntity(227U);
    msg.setDestination(33214U);
    msg.setDestinationEntity(228U);
    msg.value = 0.46652038678722274;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RamUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RamUsage msg;
    msg.setTimeStamp(0.19692305353128503);
    msg.setSource(11965U);
    msg.setSourceEntity(65U);
    msg.setDestination(24977U);
    msg.setDestinationEntity(229U);
    msg.value = 0.17879630396182666;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RamUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RamUsage msg;
    msg.setTimeStamp(0.8946228027075809);
    msg.setSource(39796U);
    msg.setSourceEntity(63U);
    msg.setDestination(55414U);
    msg.setDestinationEntity(178U);
    msg.value = 0.7117193631173563;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RamUsage #2", msg == *msg_d);
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
    msg.setTimeStamp(0.19523455447165594);
    msg.setSource(17410U);
    msg.setSourceEntity(224U);
    msg.setDestination(49716U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.27730297373984303;
    msg.lon = 0.9776795568323017;
    msg.height = 0.14127606673402782;
    msg.x = 0.8928148663271069;
    msg.y = 0.182897725574804;
    msg.z = 0.4737557500175147;
    msg.phi = 0.635119194609567;
    msg.theta = 0.7846668824540044;
    msg.psi = 0.752313513410172;
    msg.u = 0.9087988892704091;
    msg.v = 0.005102413577963594;
    msg.w = 0.8027177925676764;
    msg.p = 0.9418754293314489;
    msg.q = 0.19598784942524028;
    msg.r = 0.7724762616242312;
    msg.svx = 0.7901319317721338;
    msg.svy = 0.5686617801576457;
    msg.svz = 0.36905386356791314;

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
    msg.setTimeStamp(0.806999001561442);
    msg.setSource(31579U);
    msg.setSourceEntity(199U);
    msg.setDestination(18047U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.6242161933797744;
    msg.lon = 0.9110446391092484;
    msg.height = 0.7937804312788459;
    msg.x = 0.7392463919675233;
    msg.y = 0.8085000619602973;
    msg.z = 0.004149640291097434;
    msg.phi = 0.26915272789707023;
    msg.theta = 0.3424420444722276;
    msg.psi = 0.5457798500794522;
    msg.u = 0.310866008064525;
    msg.v = 0.5362369608249554;
    msg.w = 0.024561492191827017;
    msg.p = 0.04150667485431647;
    msg.q = 0.5783880102365888;
    msg.r = 0.8452031646007201;
    msg.svx = 0.18879489074087796;
    msg.svy = 0.49447586907979135;
    msg.svz = 0.506993857175797;

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
    msg.setTimeStamp(0.3011819633023831);
    msg.setSource(55439U);
    msg.setSourceEntity(95U);
    msg.setDestination(30991U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.2981567504782644;
    msg.lon = 0.44512169317377426;
    msg.height = 0.8166351445060382;
    msg.x = 0.1848642898145315;
    msg.y = 0.07654576369684107;
    msg.z = 0.23785416528356762;
    msg.phi = 0.8424836929276023;
    msg.theta = 0.23507931572061702;
    msg.psi = 0.950427185956527;
    msg.u = 0.6680054228432036;
    msg.v = 0.5396055229984076;
    msg.w = 0.4973440973004464;
    msg.p = 0.8804421643994661;
    msg.q = 0.4053358035851997;
    msg.r = 0.6949984499403675;
    msg.svx = 0.02121941753158807;
    msg.svy = 0.3940499916080594;
    msg.svz = 0.37290931933514837;

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
    msg.setTimeStamp(0.7261030637936511);
    msg.setSource(22805U);
    msg.setSourceEntity(138U);
    msg.setDestination(52688U);
    msg.setDestinationEntity(113U);
    msg.op = 125U;
    msg.entities.assign("PFCDNMUKDGPZLPVHWSLSFWEPHMEDBFMGJXDJMQZWTRVLBZICWVYDXSZRWKBYSQJCGDBENNGHVQEXY");

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
    msg.setTimeStamp(0.8298474056786939);
    msg.setSource(29866U);
    msg.setSourceEntity(206U);
    msg.setDestination(27745U);
    msg.setDestinationEntity(6U);
    msg.op = 30U;
    msg.entities.assign("UTBMJBQAQLBZDKMRHVZIXOXEUYYFELRWGPHTWKOGSSGLPVWBCRGIGUDIYQJCVQRKIAHFZPHHMXYUNJKPTMGQHKOZCXSNXKDNNKOZBUVHGDKZMQTZVFLTDUDHKJWEALCYWXEFSAQREJIMSCBFOWXNESFUZRPTMJZLUXENNKDPAVMEYCQPHRSBCYITDTWCSJBTPDMRWEXOAZLQVJIRUXN");

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
    msg.setTimeStamp(0.28876766565699585);
    msg.setSource(3199U);
    msg.setSourceEntity(201U);
    msg.setDestination(18272U);
    msg.setDestinationEntity(119U);
    msg.op = 29U;
    msg.entities.assign("WXVBESBMYBUIDSLCZWQEWDNONCNLDOPPPHQUHIOSBJAYIKKNWPIUQICONMAUKTLPEURWYPOZFTTCGTQTKAHHGKYWMKSDNGRCHJXQWABKULIBHGDFSVMHAMXYEYOTGFFL");

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
    msg.setTimeStamp(0.21658566995793227);
    msg.setSource(13603U);
    msg.setSourceEntity(20U);
    msg.setDestination(9188U);
    msg.setDestinationEntity(105U);
    msg.type = 113U;
    msg.speed = 19012U;
    const signed char tmp_msg_0[] = {18, -100, 110, 64, 27, -22, -25, 95, 79, -53, -29, -51, -120, -73, 77, -80, 83, -41, -19, 22, -29, 0, -35, 78, 116, 48, 50, 65, 50, 116, 107, 79, 112, -31, 44, 12, 28, -48, 34, 46, 43, 82, 96, 10, 65, -12, 40, -120, 122, -41, -43, 44, 96, -100, 11, 50, -39, -3, 102, -23, -41, 50, -67, -33, 121, -13, -28, -71, -82, 86, 65, 85, -89, -112, 96, 102, -30, -3, -1, -53, -58, -18, -77, -86, -65, -57, -75, 121, -52, -13, 105, -125, -14, -56, 0, -82, -28, 123, -123, -52, -51, 5, 106, 62, -91, -97, 107, -67, 56, 36, -109, -19, 46, -92, 41, -100, 62, -67, -113, -93, -10, 122, -15, 14, -74, 53, 83, 34, -123, -48, 83, 10, -65, -29, -81, -117, -111, 18, -9, 4, 40, 57, -67, 62, 26, 13, -25, 10, 117, 41, 51, -97, 39, 107, 38, -18, 111, 96, -84, 0, -121, 5, 75, 40, 1, 36, -61, 46, -115, -32, 12, -86, -78, -115, -114, -62, -88, -71, 124, -96, 99, 32, -45, 20, -75, 105, -8, 124, -103, 53, 93, -61, -57, 49, -57, 67, 78, -36, -85, -80};
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
    msg.setTimeStamp(0.5174751352328394);
    msg.setSource(58157U);
    msg.setSourceEntity(89U);
    msg.setDestination(62682U);
    msg.setDestinationEntity(73U);
    msg.type = 24U;
    msg.speed = 12838U;
    const signed char tmp_msg_0[] = {23, 38, 118, -84, -112, -120, -34, 89, 94, 108, -86, 100, 55, 52, 32, 63, 54, -73, 67, -43, 107, -101, 123, -99, -103, 38, 82, 15, 58, 7, -112, 30, -7, -57, 44, 69, 2, -73, 24, -19, 103, -49, -96, 89, -72, -14, -123, 62, 8, 11, 102, 40, -26, -47, -80, -35, -13, -15, -73, -54, -121, 55, 68, -112, 118, -45, -108, -30, 110, -6, 67, -128, 33, 73, 81, 90, -6, 70, -97, 103, 125, 13, -66, 108, 107, -107, 92, -39, -18, 4, 117, 18, -38, 0, 57, -39, -14, -47, -127, -20, -60, 73, 57, 80, -28, -113, 65, -54, 74, 23, -83, 89, -91, 4, -126, 103, 90, -43, -84, -13, -48, -118, -79, 22, -94, 122, -28, -88, 69, 19, 29, -29, -34, 103, -128, -74, 0, -111, -24, -37, -77, 45, 73, -121, 103, -71, -25, 4, -7, -22, 99, -127, -108, -17, -83, -110, -23, 16, -62, 19, -47, -88, -30, -23, -57, -106, -1, -80, -2, 122, 65, 88, -105, -73, 14, 120, 68, 91, 111, -104, 27, 104, -55, 24, -2, 110, 15, -56, 27, 69, 43, 55, -125, -109, -85, 72, -30, -20, 59, 30, -128, -76, 61, 24, -3, 47, 114, 34, -21, 65, 18, 0, -123, 17, 1, 81, -109, 73, 21, -32, 80, -37, 51, -45, 81, 71, -57, -50, -72, 92, 66, -128, -77, 80, -54, -41, 2, 17, -51, -47};
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
    msg.setTimeStamp(0.9912238594533055);
    msg.setSource(12194U);
    msg.setSourceEntity(215U);
    msg.setDestination(16642U);
    msg.setDestinationEntity(49U);
    msg.type = 225U;
    msg.speed = 51073U;
    const signed char tmp_msg_0[] = {20, -85, -23, 12, 117, -61, 103, 125, 124, 21, -17, -32, -12, -74, 63, 61, 106, -50, 10, -33, 40, -71, -56, -118, 15, -20, -92, -45, 40, -48, 104, -119, 47, 35, 70, 46, 88, 69, 54, -91, 54, -97, -91, 92, 42, -85, 76, 106, 125, -67, -77, 83, -46, 40, -58, 48, 124, 84, -22, -89, 39, 30, -121, -27, -43, -43, 83, -80, -60, 105, -41, -9, 33, -86, 42, 82};
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
    msg.setTimeStamp(0.896098917524844);
    msg.setSource(46638U);
    msg.setSourceEntity(180U);
    msg.setDestination(39665U);
    msg.setDestinationEntity(42U);
    msg.op = 213U;
    msg.tas2acc_pgain = 0.9567057195227431;
    msg.bank2p_pgain = 0.9013487138429862;

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
    msg.setTimeStamp(0.6657198789446733);
    msg.setSource(38352U);
    msg.setSourceEntity(232U);
    msg.setDestination(38178U);
    msg.setDestinationEntity(143U);
    msg.op = 181U;
    msg.tas2acc_pgain = 0.904631703000815;
    msg.bank2p_pgain = 0.14668454869907988;

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
    msg.setTimeStamp(0.2649949077054462);
    msg.setSource(30030U);
    msg.setSourceEntity(18U);
    msg.setDestination(12315U);
    msg.setDestinationEntity(246U);
    msg.op = 208U;
    msg.tas2acc_pgain = 0.38322156079244374;
    msg.bank2p_pgain = 0.5469599557998456;

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
    msg.setTimeStamp(0.3225788527761074);
    msg.setSource(10851U);
    msg.setSourceEntity(74U);
    msg.setDestination(49450U);
    msg.setDestinationEntity(163U);
    msg.available = 805165487U;
    msg.value = 161U;

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
    msg.setTimeStamp(0.7477181304062411);
    msg.setSource(65206U);
    msg.setSourceEntity(145U);
    msg.setDestination(65089U);
    msg.setDestinationEntity(243U);
    msg.available = 2284146006U;
    msg.value = 119U;

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
    msg.setTimeStamp(0.3167380750974219);
    msg.setSource(34275U);
    msg.setSourceEntity(115U);
    msg.setDestination(55285U);
    msg.setDestinationEntity(8U);
    msg.available = 1201761264U;
    msg.value = 116U;

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
    msg.setTimeStamp(0.15079135524343013);
    msg.setSource(55459U);
    msg.setSourceEntity(23U);
    msg.setDestination(7520U);
    msg.setDestinationEntity(111U);
    msg.op = 89U;
    msg.snapshot.assign("WMRTVGMYRRFEPXKDWEKZOZTPZGWLIGDOLCFAABVBQVYAFZZCVUYUHMEILHNUJLMXKPUUBKDPFOTWBBFQHIDSPOQPEKEGYRZWYXGWIEEQRCNKOLKJSYCFUYXSABHLKQFAOYCLNLTQTPWIGAO");
    IMC::SonarData tmp_msg_0;
    tmp_msg_0.type = 113U;
    tmp_msg_0.frequency = 167400525U;
    tmp_msg_0.min_range = 21608U;
    tmp_msg_0.max_range = 54272U;
    tmp_msg_0.bits_per_point = 181U;
    tmp_msg_0.scale_factor = 0.25314189006636345;
    IMC::BeamConfig tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.beam_width = 0.28715750203619184;
    tmp_tmp_msg_0_0.beam_height = 0.9466819368814774;
    tmp_msg_0.beam_config.push_back(tmp_tmp_msg_0_0);
    const signed char tmp_tmp_msg_0_1[] = {-88, -66, -101, 1, 55, 2, -49, 23, 60, 85, 97, -43, -53, -8, 92, 85, -93, 99, -52, -37, 92, 24, -94, 38, 76, -23, 59, -32, -128, -103, -47, 76, -91, 1, 94, -46, 110, -58, -127, -68, -94, -110, -13, -124, 61, 100, 71, 24, -71, 14, 57, -121, -19, 18, 98, -58, -108, 126, -86, 29, -104, -94, -12, -92, 43, -46, -2, -58, 23, 0, -67, 83, -16, 60, -7, 85, 33, 18, 126, -118, 106, 121, -47, 19, -18, -77, -118, 45, -5, -120, 38, -113, -67, 24, -86, 85, 93, -6, 6, -4, 28, 94, -23, 88, 0, 72, 36, 103, -23, 75, -120, -18, 95, -43, 32, -56, 19, 31, -108, -79, 79, -121, 80, 41, 9, 45, 45, 56, 120, 14, -64, -41, -110, -63, 100, 111, -122, -45, 123, 16, 117};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_1, tmp_tmp_msg_0_1 + sizeof(tmp_tmp_msg_0_1));
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
    msg.setTimeStamp(0.6640766729967115);
    msg.setSource(10560U);
    msg.setSourceEntity(196U);
    msg.setDestination(11464U);
    msg.setDestinationEntity(163U);
    msg.op = 43U;
    msg.snapshot.assign("GKMKDRFNOYGRCDLSJBJXJGAKYFAKYFMAEVPQMBLCIGKVQCHBQBDSEKLDEADBAHUFQLSUQSTPAJLCZ");
    IMC::UsblAnglesExtended tmp_msg_0;
    tmp_msg_0.target.assign("HEBKZOGMYTKHEZJJTFRHNBQCIGAFFIDMIJIDGPEXGXPHVNQYZYJAHMDYBQQJGTWTEUDEIRLCHFUTWVXXXMLYXQDSFBNMLIOGCFZPDGUOWKLKLQDLOIWQNVHXKSWSENOUMPBEKJBYROCZPIVPCCTGNQAXAHYUFMGDBWSQFUZVUETDAZPCURMKRAPSPBVK");
    tmp_msg_0.lbearing = 0.5310034136819124;
    tmp_msg_0.lelevation = 0.5153983275325045;
    tmp_msg_0.bearing = 0.9427989687504701;
    tmp_msg_0.elevation = 0.9068016522883863;
    tmp_msg_0.phi = 0.4425651098691573;
    tmp_msg_0.theta = 0.8853455977121338;
    tmp_msg_0.psi = 0.5317634367190044;
    tmp_msg_0.accuracy = 0.28874204205791787;
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
    msg.setTimeStamp(0.46986458237339634);
    msg.setSource(3813U);
    msg.setSourceEntity(222U);
    msg.setDestination(43146U);
    msg.setDestinationEntity(119U);
    msg.op = 173U;
    msg.snapshot.assign("GURJGWSOOXSHMYPRLBUPYWVFYPVYIRPFUEIJBEKZGLKRMCQHKVYKYEUMSMAEOTCDVOKDSAJQWJMLHZTAXIZDBJWOXHDINRVSYXQWKNINUOADWNHFTAZTGOWDBFTALZCBZXSGJXMXNHPNSQBJVJULODIARGTPSIBQGEUBRBMFXPSKQRDJUUCFFLZBVEALHKIRJGVTQCMHKIYNETLXTIRMOWANWQDOCQUHPWTMQLE");
    IMC::UsblAnglesExtended tmp_msg_0;
    tmp_msg_0.target.assign("UUTBBWOBVPGHOHR");
    tmp_msg_0.lbearing = 0.5665504889786882;
    tmp_msg_0.lelevation = 0.8462231953917029;
    tmp_msg_0.bearing = 0.8868981356089253;
    tmp_msg_0.elevation = 0.4002952255706045;
    tmp_msg_0.phi = 0.04008643512886889;
    tmp_msg_0.theta = 0.6595932760933311;
    tmp_msg_0.psi = 0.8429284998205946;
    tmp_msg_0.accuracy = 0.05618393682617351;
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
    msg.setTimeStamp(0.9389196329623647);
    msg.setSource(5577U);
    msg.setSourceEntity(168U);
    msg.setDestination(22004U);
    msg.setDestinationEntity(110U);
    msg.op = 33U;
    msg.name.assign("GLPTOLNDMZNYRBGMETKSAAQXQUFWJMRDSXBWQALFYKNKTOYHSQKGZRXEXXMJFQGFRDTBIDVLOHZOLMBCVVIMKHCWCUZBCTDFTIYEWUOIDIXXBHSICRFWMOINPZLBSWQYJVKEDLGUXZPGIWJTQPNLEAVPPTJDNEOAVUVJJRGWMMKREZLBDVUECINXTRYTPZHFVJPPJSCUQBASCMHUFFWYHYVOOYDKENUQKGKHZZAJYSNALFRCQRHEGSUCBSGN");

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
    msg.setTimeStamp(0.20771763153419665);
    msg.setSource(4698U);
    msg.setSourceEntity(246U);
    msg.setDestination(21452U);
    msg.setDestinationEntity(152U);
    msg.op = 18U;
    msg.name.assign("EQWCOZLTJRFQZXWIMPFBGGNEKSODWRYUBCNSLBAWEITNHNHMLPMKVTCMPRMEIODLPGHLSOVEGFOUPSFTIIOHUDXMWJNCEJHRWQTFJYNXROCXNUCNQONVJHDTBIDCAEGSXSIQJVKYWAMYOAFTXDPWULKZQGBJXLGQELDDLPKIZKYHJE");

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
    msg.setTimeStamp(0.4937978761118561);
    msg.setSource(30952U);
    msg.setSourceEntity(201U);
    msg.setDestination(24727U);
    msg.setDestinationEntity(142U);
    msg.op = 79U;
    msg.name.assign("SMARHVPFUFKGJBMNDVPFCYUZXMXLEKBHWTBEGEYYPQLZPJPZZSCAKHCQSFYKXWTOOYQCSLTSLEEOIWGIBUXTJDEPXSIGNNTVODRVBRFTCWVCEFAULXSGCYWXNJILTZGEVUHQUAQWUOXPJDQMV");

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
    msg.setTimeStamp(0.7668296559075318);
    msg.setSource(434U);
    msg.setSourceEntity(190U);
    msg.setDestination(51647U);
    msg.setDestinationEntity(122U);
    msg.type = 147U;
    msg.htime = 0.7173289907298886;
    msg.context.assign("FIDLYXJUBTZPJNRFQEPM");
    msg.text.assign("EZBHNEZCLPCSLNQTYXUQYDKITXNCZNMHTLWXFVJQKDWKXYAFACCFJGKJZSORVUMBKDAUBSRLDCOPVMQIFNBXWDTLEAUEDJRVUXRPRFFSLSSCSPIMTMHNGDTMMSAINJYOBJUZPOIHIQLVIHZQCDGIHHLFOHEVHKENJBVMSUYTQBVWYYUO");

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
    msg.setTimeStamp(0.27720880797337044);
    msg.setSource(11871U);
    msg.setSourceEntity(249U);
    msg.setDestination(33234U);
    msg.setDestinationEntity(40U);
    msg.type = 216U;
    msg.htime = 0.36972284930123245;
    msg.context.assign("FCTYSBGBQIJPULAMHVKDNTLWNGGUOTWDIKRNYZBHMCITZCOGVFJSSOCYNRUFCBLRWDZOEEEQXSDXRCYTLPLXOJFLZIPDCPKBHVATDONFVRPYVEXMDVJYWAEGPNIWZQKWAQALKVRWEXQAGCEYUFUFJHKRIPUYMKZIJKDDXAEHJTMQIAYVEURXQFTXOKLLBRHXEGKVI");
    msg.text.assign("UJTKOQQLQMDLGXHSUAMVTKJXCGYJWLXMUNJZREVNZRSWJYHAIDWLKAKVNXOLSMEVWNVDAKCQNSXFXFFHUEZWZDJDPPGCCUHSTBEMCRHKJBCXPFRNRHWKWVNQILAOBUPPBDZPHYIN");

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
    msg.setTimeStamp(0.8106269165452559);
    msg.setSource(62720U);
    msg.setSourceEntity(2U);
    msg.setDestination(8269U);
    msg.setDestinationEntity(176U);
    msg.type = 36U;
    msg.htime = 0.39663603161180594;
    msg.context.assign("NZHWZIXFHWJOSDLVEKETZZWYSAQJSBQCQTABHUXKRADNZJYHIFDFPMOHGQBGMWCXCTYDCIVVGZRSNJPTKZFMUDTLJHCERGDWOAIBCVUXJNLUUGDKRWOFRBEQPUFMMEBWPAVA");
    msg.text.assign("REMGWUTITUBNLJUKXZHZKVPZHBJVVJFHUWGPRLCKGNZWXB");

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
    msg.setTimeStamp(0.8069323041671449);
    msg.setSource(49502U);
    msg.setSourceEntity(104U);
    msg.setDestination(10570U);
    msg.setDestinationEntity(253U);
    msg.command = 219U;
    msg.htime = 0.9486451385724257;

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
    msg.setTimeStamp(0.018838412126533588);
    msg.setSource(7089U);
    msg.setSourceEntity(0U);
    msg.setDestination(16570U);
    msg.setDestinationEntity(136U);
    msg.command = 31U;
    msg.htime = 0.0136140350849554;

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
    msg.setTimeStamp(0.9776117055287382);
    msg.setSource(9718U);
    msg.setSourceEntity(26U);
    msg.setDestination(1644U);
    msg.setDestinationEntity(12U);
    msg.command = 45U;
    msg.htime = 0.727246309705715;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 86U;
    tmp_msg_0.htime = 0.5417050759686791;
    tmp_msg_0.context.assign("KFICXNHTRLQMJMMCKVMAYHJVFSSBUMANNFVYKGXHLJRAQSFRCOGEVWWKYVCDTSRYXMQLZCZLUAYCZXOZRQUGMQGB");
    tmp_msg_0.text.assign("JXPUIKLLRNXTRBSJPNOXZVHCMZBAMKAQSNBYJHTYDDVZFJZODJGHYRQFCHSZYQINFGRBPNVEGKHVQUQRULXECDERUWNHSFZGACMVAKETLPCJVOGIFSRJGLABKWESKELDZFEUETPJOQYWFPBNFQWRIOUFWLWVMSWZGHMNITODFIDVJADHCUBHNYKYDBRVYRPLHBTMQZ");
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
    msg.setTimeStamp(0.661855674552037);
    msg.setSource(36094U);
    msg.setSourceEntity(181U);
    msg.setDestination(49572U);
    msg.setDestinationEntity(203U);
    msg.op = 76U;
    msg.file.assign("NUNTGYENISJKCJFUHYQIEEHYYWHVGSZGLQABTLOMVNBAPBQAMDJBURRBYXVHCORYJGVRGFWDFKOHDXJHHDEQSXBFLVXCSYPGLDJUKXOTQXSAFKMMOZGTTVDKEWCJDFHIPUAMKHPRKBOWOTHTMDCSUBRLEWWZLOTQSXZZCINRIOPJRLVKQFVDNEIICEKQGTARIJNZZESYXNYXGQIRMZAUTCLCAVZMVWCFMQDSBWL");

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
    msg.setTimeStamp(0.6110284212355379);
    msg.setSource(44107U);
    msg.setSourceEntity(150U);
    msg.setDestination(34460U);
    msg.setDestinationEntity(22U);
    msg.op = 113U;
    msg.file.assign("SFMVXOTNVECGJIXHMUDPUWPLSFRSOABUJUXPYLPOKQZVLSWKDVIFAONTEAXXDQQPLXTYDTHHYEUSLUOKIMSQQHCPWBHGHRZZDNIJLBKYCCQFFIRJELCFYBJSWGBGBORRZIWJXTKFPIEKLOAXMRNJJDONHMYYU");

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
    msg.setTimeStamp(0.07415048925920342);
    msg.setSource(45166U);
    msg.setSourceEntity(230U);
    msg.setDestination(58710U);
    msg.setDestinationEntity(172U);
    msg.op = 46U;
    msg.file.assign("NWYFBJTAKZEBGMEJQYPACIZKKTNWLQDOFIJMADKQLSXVVQPFWNMFNJMRDQUZSZACQLDIPQHPYAOSTUHURFTMVHZWTXVVXZBNJWXKSEDOBZVUIFIGUGCRIVQPGICEVOGRXTUERJHNMRXFTHPBHECJOGVCKXNTMLOFMOLELSIATAXPPATCWKDNXBUBOIUGBUWWRFYPZDMSNCXAJOALWRSGYOLCKLSHEYEPBYJQZIU");

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
    msg.setTimeStamp(0.30724031174067123);
    msg.setSource(19906U);
    msg.setSourceEntity(83U);
    msg.setDestination(23917U);
    msg.setDestinationEntity(9U);
    msg.op = 23U;
    msg.clock = 0.6872008539614594;
    msg.tz = 84;

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
    msg.setTimeStamp(0.9698884538186338);
    msg.setSource(11231U);
    msg.setSourceEntity(93U);
    msg.setDestination(403U);
    msg.setDestinationEntity(210U);
    msg.op = 22U;
    msg.clock = 0.8278232209153826;
    msg.tz = 87;

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
    msg.setTimeStamp(0.19207717787625878);
    msg.setSource(13689U);
    msg.setSourceEntity(213U);
    msg.setDestination(37776U);
    msg.setDestinationEntity(30U);
    msg.op = 56U;
    msg.clock = 0.585306543490155;
    msg.tz = -40;

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
    msg.setTimeStamp(0.31453591307541906);
    msg.setSource(14914U);
    msg.setSourceEntity(215U);
    msg.setDestination(40487U);
    msg.setDestinationEntity(164U);
    msg.conductivity = 0.5154922038077622;
    msg.temperature = 0.7517423649387275;
    msg.depth = 0.13703574106708893;

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
    msg.setTimeStamp(0.036363966885721855);
    msg.setSource(16731U);
    msg.setSourceEntity(150U);
    msg.setDestination(14889U);
    msg.setDestinationEntity(7U);
    msg.conductivity = 0.5649792744030981;
    msg.temperature = 0.3295042250550023;
    msg.depth = 0.1277370812194466;

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
    msg.setTimeStamp(0.6212980979703189);
    msg.setSource(52422U);
    msg.setSourceEntity(78U);
    msg.setDestination(55844U);
    msg.setDestinationEntity(197U);
    msg.conductivity = 0.5037134498582199;
    msg.temperature = 0.3316679766783931;
    msg.depth = 0.6800658424313254;

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
    msg.setTimeStamp(0.791355411594985);
    msg.setSource(13179U);
    msg.setSourceEntity(61U);
    msg.setDestination(21718U);
    msg.setDestinationEntity(84U);
    msg.altitude = 0.6396454024287043;
    msg.roll = 51816U;
    msg.pitch = 63774U;
    msg.yaw = 8491U;
    msg.speed = -30930;

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
    msg.setTimeStamp(0.39675293778391196);
    msg.setSource(38797U);
    msg.setSourceEntity(117U);
    msg.setDestination(64281U);
    msg.setDestinationEntity(70U);
    msg.altitude = 0.6733678261343755;
    msg.roll = 62827U;
    msg.pitch = 61933U;
    msg.yaw = 34491U;
    msg.speed = -20501;

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
    msg.setTimeStamp(0.22134045020119353);
    msg.setSource(56329U);
    msg.setSourceEntity(143U);
    msg.setDestination(51251U);
    msg.setDestinationEntity(225U);
    msg.altitude = 0.5513134660101978;
    msg.roll = 20710U;
    msg.pitch = 1006U;
    msg.yaw = 14539U;
    msg.speed = 3037;

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
    msg.setTimeStamp(0.15082892519251812);
    msg.setSource(61547U);
    msg.setSourceEntity(54U);
    msg.setDestination(38821U);
    msg.setDestinationEntity(204U);
    msg.altitude = 0.11095209779787829;
    msg.width = 0.21042560000716626;
    msg.length = 0.3651988893901005;
    msg.bearing = 0.16066046570295722;
    msg.pxl = -1352;
    msg.encoding = 83U;
    const signed char tmp_msg_0[] = {20, 16, -86, -16, 35, 94, -27, 41, 62, 103, 89, -77, -55, 32, 96, -96, -78, 101, -96, -97, 5, 112, -80, 16, 54, -23, -29, -126, 120, 19, -112, -42, 21, -21, -14, -7, 103, -2, 76, -98, -105, 5, 95, 61, 110, 100, -46, -14, 14, 65, -88, 121, -90, -42, -45, 26, -77, 116, 121, 64, 58, 57, 31, -53, -114, 57, 73, -120, -102, 117, -50, 23, -40, 43, -83, -84, -64, -84, 125, 31, -16, -12, -107, 27, -1, 27, -99, -107, 98, -112, 2, -14, 120, 116, -94, 47, -91, -124, -63, -60, -4, -114};
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
    msg.setTimeStamp(0.9398148775749073);
    msg.setSource(39870U);
    msg.setSourceEntity(234U);
    msg.setDestination(20409U);
    msg.setDestinationEntity(220U);
    msg.altitude = 0.36287022957930526;
    msg.width = 0.6847209689462411;
    msg.length = 0.020918064418230076;
    msg.bearing = 0.18817323805585628;
    msg.pxl = 23190;
    msg.encoding = 24U;
    const signed char tmp_msg_0[] = {87, 86, -115, 10, 35, -20, 19, 106, 76, -23, -63, 58, -123, 59, -33, 21, -39, -110, -70, -113, -72, -105, -67, -68, -42, 102, 100, -96, 46, -10, -33, 11, -10, 73, 7, 38, 93, 22, -5, -107, 120, -86, 124, 7, 104, 113, -6, -113, 116, 109, 81, -60, 74, 62, 100, -85, 76, -29, 124, -123, 121, -42, -104, -17, -97, -36, 59, 120, 100, -22, 110, -104, -43, -3, -3, -63, 117, -54};
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
    msg.setTimeStamp(0.877058476979036);
    msg.setSource(42868U);
    msg.setSourceEntity(113U);
    msg.setDestination(32111U);
    msg.setDestinationEntity(248U);
    msg.altitude = 0.9530056944186978;
    msg.width = 0.027116180235122966;
    msg.length = 0.1281478283552705;
    msg.bearing = 0.09340119525150059;
    msg.pxl = 14887;
    msg.encoding = 116U;
    const signed char tmp_msg_0[] = {-125, 80, -93, 86, -31, 75, -63, -60, -33, -53, -91, 117, -97, 79, 62, -88, 77, 116, 53, 24, 126, 34, 80, 70, 114, -112, -101, -90, 13, -45, -84, -122, -15, -89, 60, -100, -64, -108, -36, -84, 108, 110, 26, -36, -39, 118, -75, -109, 80, 63, -61, 89, 48, 73, 99, -126, -123, 41, 34, -126, -41, -49, -33, -49, 93, -50, -93, -122, -128, 22, -115, -117, -120, 42, -98, -66, -89, 98, 32, -3, 116, 125, -71, 105, 107, 83, 86, -22, -18, 114, -67, -102, -92, -8, -81, 2, 58, 20, -89, -48, -48, -125, 86, 81, 61, 77, -49, -51, 22, 44, 39, 22, 92, 113, -29, -110, -71, 7, 36, -117, 45, -69, -70, -112, 98, -17, -87, 84, 123, 6, -80, -52, -16, -57, 104, 48, -78, -87, -98, -21, -49, 16, -38, 76};
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
    msg.setTimeStamp(0.808388492651314);
    msg.setSource(26606U);
    msg.setSourceEntity(222U);
    msg.setDestination(3423U);
    msg.setDestinationEntity(133U);
    msg.text.assign("VGNSGNUTFBATHYQAGEDHJZCTJBXIWDEFYNOYUWTJTGSPTLOPOKQZUBQSMSJCVXRSZQGLUWGDWFNCDDFZKPYNUMIROKHLGBIRWVJALYEXHLOUIMDUCMMWRZORVTSCKZPDEJINHFAIOTYXQQPGBVOASNBICUKFSEPQOMARWCXCCZFYTCLEKXEVFNZWAVVZXUSMIWJMBHHDRAJB");
    msg.type = 164U;

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
    msg.setTimeStamp(0.32196790858495683);
    msg.setSource(58308U);
    msg.setSourceEntity(181U);
    msg.setDestination(27615U);
    msg.setDestinationEntity(163U);
    msg.text.assign("LPVNXFLFSFHEYIRJWBBZVBZNIOSHXPRUKHDZBDSWDJP");
    msg.type = 88U;

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
    msg.setTimeStamp(0.1557868770587736);
    msg.setSource(32931U);
    msg.setSourceEntity(191U);
    msg.setDestination(2091U);
    msg.setDestinationEntity(171U);
    msg.text.assign("XLGLLIXRFQTJQRSWMKMGBKWBZJYNVXUPJPCBKDWTMDHHVZHGPAMJIJIJUBQFFVWIHLSILZTHXEFETCXIXHPWLUFUEDGZYLVCFEBEBRKSONCYZBQODSFKCSWGWYTCWMRTUOKFPMIOSBRJVDWHGXIAMUD");
    msg.type = 32U;

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
    msg.setTimeStamp(0.028724052365162733);
    msg.setSource(39488U);
    msg.setSourceEntity(146U);
    msg.setDestination(18411U);
    msg.setDestinationEntity(32U);
    msg.parameter = 47U;
    msg.numsamples = 222U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 36750U;
    tmp_msg_0.avg = 0.6401087026061336;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.6284118459673816;
    msg.lon = 0.7139990273428937;

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
    msg.setTimeStamp(0.9710780741337196);
    msg.setSource(12917U);
    msg.setSourceEntity(172U);
    msg.setDestination(58714U);
    msg.setDestinationEntity(195U);
    msg.parameter = 97U;
    msg.numsamples = 67U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 55452U;
    tmp_msg_0.avg = 0.4160665501164462;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.6096405056303895;
    msg.lon = 0.9312295318267478;

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
    msg.setTimeStamp(0.4803170139693571);
    msg.setSource(13527U);
    msg.setSourceEntity(65U);
    msg.setDestination(43631U);
    msg.setDestinationEntity(96U);
    msg.parameter = 94U;
    msg.numsamples = 85U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 55458U;
    tmp_msg_0.avg = 0.1355679606390343;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.3017428260037973;
    msg.lon = 0.7430784353416;

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
    msg.setTimeStamp(0.541989818575456);
    msg.setSource(32494U);
    msg.setSourceEntity(84U);
    msg.setDestination(10914U);
    msg.setDestinationEntity(47U);
    msg.depth = 52166U;
    msg.avg = 0.9395966127437053;

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
    msg.setTimeStamp(0.8922295520482032);
    msg.setSource(61953U);
    msg.setSourceEntity(184U);
    msg.setDestination(63689U);
    msg.setDestinationEntity(240U);
    msg.depth = 62513U;
    msg.avg = 0.1826111085580293;

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
    msg.setTimeStamp(0.5073615140779427);
    msg.setSource(40967U);
    msg.setSourceEntity(76U);
    msg.setDestination(2162U);
    msg.setDestinationEntity(32U);
    msg.depth = 59654U;
    msg.avg = 0.33061324902096156;

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
    msg.setTimeStamp(0.725756932836869);
    msg.setSource(22317U);
    msg.setSourceEntity(114U);
    msg.setDestination(551U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.09998723463744097);
    msg.setSource(2064U);
    msg.setSourceEntity(228U);
    msg.setDestination(16140U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.5907641804454844);
    msg.setSource(43867U);
    msg.setSourceEntity(172U);
    msg.setDestination(56201U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.8062618669915934);
    msg.setSource(18106U);
    msg.setSourceEntity(126U);
    msg.setDestination(17596U);
    msg.setDestinationEntity(212U);
    msg.sys_name.assign("KWZGMQAHSWDNQIXRCDVZRBGHJUJLVCHEKYRJIYYQCGSOYBXDSIEOUGFTSUJMYWGXOATILKPQAXDSOKCMTPOVWMGYSIVEXPZBQVHDJHYLCKFQEOETLCBNHOKTNRJZMIRDFRBEZHCJIWUPAPEUNPBSGLBLADRDLHPYCHKNTL");
    msg.sys_type = 68U;
    msg.owner = 12220U;
    msg.lat = 0.023203622341321783;
    msg.lon = 0.32149646864765336;
    msg.height = 0.15704508016245788;
    msg.services.assign("LAWQLJMOMVXAZINGJFLTDSKGFDZJFWOGBFOMGFCLTVWZRXCGZJVFALCUQOATIAXJYIURXEOMKQPIYVMZUGKOWTYAXBYSIZZEYDCQWJXVYBXEBHKOJUABGMIPQGDEERDNR");

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
    msg.setTimeStamp(0.808772462915861);
    msg.setSource(26500U);
    msg.setSourceEntity(230U);
    msg.setDestination(64865U);
    msg.setDestinationEntity(28U);
    msg.sys_name.assign("HLTBXJTGZSPBYEGDDSESMBTVTCOBOHVILDSRULKDKIGXMBQPIDUFKUTEPIEEQEZMJBDLYSNALIKZFFPQRAMXKSLHNQHTPMNFVJMWCOATQSPIWOWCZDXKFXKYACSUENYFCADYBSIFAGMUEFRJGNFAWWWJNZYSVXWQCHXGHMKJECRWATDUJZ");
    msg.sys_type = 216U;
    msg.owner = 20213U;
    msg.lat = 0.7011221904851778;
    msg.lon = 0.7844445793205672;
    msg.height = 0.9763915695336751;
    msg.services.assign("NXQMJAEOWGZFBEAXUCPLLILBAMZFMNKOYBRWEKGUTMGPDJUHDTGCYXZQXRNDCUVWHJVYLCHCUNRZYWFAFUEODODOXBJXOUQVTKEHYBMYLAPIAPJLNGIENDZYZNJKTZMYTBVVRRMRRIWTHNSIXHQKOVPCWNFKOS");

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
    msg.setTimeStamp(0.46614459667851904);
    msg.setSource(59547U);
    msg.setSourceEntity(143U);
    msg.setDestination(59784U);
    msg.setDestinationEntity(253U);
    msg.sys_name.assign("AVLMSWGPYUPBLNLJRKMMAJVJCNXIQQBUCFNEFYCFOFZYTSKQNPEDGLOCOVLDTFDWGHFAPUSJQPIGIBSXRQXTALUDJATWDZAQYPEREOINLJUTDWMZVFEBLKCCSRXRFTRKWDPTVCKOLEZRCUSWXUVEMOWKYJVNOEYMXOHBMUCJWRZVKSGXKWPIQJGRFHAGZQYSHIDCHQHDMFXMBJUYQHBOZPYNHSZOVKYKPB");
    msg.sys_type = 7U;
    msg.owner = 43415U;
    msg.lat = 0.9604446155690052;
    msg.lon = 0.13620572697597177;
    msg.height = 0.7111542897453531;
    msg.services.assign("JWAOUZAJROSCCXAXZYAYMIWXSMUROTSNZVZDHIJROQUQMLWEEXPMTOH");

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
    msg.setTimeStamp(0.06332972274980597);
    msg.setSource(28662U);
    msg.setSourceEntity(80U);
    msg.setDestination(15185U);
    msg.setDestinationEntity(40U);
    msg.service.assign("LJIVXYOYTHVBFAUGJMXWMTCMFVCQZIDPWNXYPUWDBDKFVZEBPSMWWBOGCAHHDVUZJQWEOLNXALDVZXHMIFWOKCPTTJRYNHGBDSKMWBLZGDRJIBNACXLNVFHHKRIVMNHTCPCFQQB");
    msg.service_type = 164U;

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
    msg.setTimeStamp(0.6687133952436872);
    msg.setSource(9492U);
    msg.setSourceEntity(92U);
    msg.setDestination(16487U);
    msg.setDestinationEntity(127U);
    msg.service.assign("XITRXQRYZZLSXGTHKDVJLZCQGLBBBKGEKKMJBYZYINUKPXHNOUDMUJCNQWOOAZXVDAYWFWYVIWKNWSSMPAFAQVFUOHMCOETRFUGGRMARLRPDGCDHCSVVAWIJPESZLNGHDBOHXFCXUDXLELACQVQXZTFHBKDTZIJMDFIUHWSAPNWMBBIRMKBLSPQCEIIZGBYISJSYLPPEKHFTM");
    msg.service_type = 188U;

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
    msg.setTimeStamp(0.9739732274076724);
    msg.setSource(60522U);
    msg.setSourceEntity(116U);
    msg.setDestination(12222U);
    msg.setDestinationEntity(156U);
    msg.service.assign("SANAVRHIYDNBCEYWCPGKENNUHPSDDYDXGCEFWXTONZXIBQRMMBAI");
    msg.service_type = 5U;

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
    msg.setTimeStamp(0.42774700173154134);
    msg.setSource(44249U);
    msg.setSourceEntity(2U);
    msg.setDestination(46226U);
    msg.setDestinationEntity(36U);
    msg.value = 0.05539028946785973;

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
    msg.setTimeStamp(0.3239527620228764);
    msg.setSource(37306U);
    msg.setSourceEntity(240U);
    msg.setDestination(12897U);
    msg.setDestinationEntity(78U);
    msg.value = 0.27769243398596355;

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
    msg.setTimeStamp(0.8852453729426388);
    msg.setSource(4515U);
    msg.setSourceEntity(253U);
    msg.setDestination(45860U);
    msg.setDestinationEntity(8U);
    msg.value = 0.8400827949857976;

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
    msg.setTimeStamp(0.9607126706385919);
    msg.setSource(29833U);
    msg.setSourceEntity(101U);
    msg.setDestination(48798U);
    msg.setDestinationEntity(192U);
    msg.value = 0.7447794030698658;

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
    msg.setTimeStamp(0.7169054679520457);
    msg.setSource(22425U);
    msg.setSourceEntity(29U);
    msg.setDestination(13572U);
    msg.setDestinationEntity(42U);
    msg.value = 0.10331411170658211;

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
    msg.setTimeStamp(0.2802982219933161);
    msg.setSource(7705U);
    msg.setSourceEntity(80U);
    msg.setDestination(52623U);
    msg.setDestinationEntity(39U);
    msg.value = 0.9787802240340929;

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
    msg.setTimeStamp(0.6722132901494066);
    msg.setSource(3202U);
    msg.setSourceEntity(152U);
    msg.setDestination(26531U);
    msg.setDestinationEntity(240U);
    msg.value = 0.6120177623209889;

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
    msg.setTimeStamp(0.12309905123921228);
    msg.setSource(35169U);
    msg.setSourceEntity(237U);
    msg.setDestination(8517U);
    msg.setDestinationEntity(10U);
    msg.value = 0.19041051064700154;

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
    msg.setTimeStamp(0.4177140464550383);
    msg.setSource(63948U);
    msg.setSourceEntity(166U);
    msg.setDestination(18591U);
    msg.setDestinationEntity(175U);
    msg.value = 0.6505388733477531;

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
    msg.setTimeStamp(0.8874067070486554);
    msg.setSource(14067U);
    msg.setSourceEntity(248U);
    msg.setDestination(38241U);
    msg.setDestinationEntity(88U);
    msg.number.assign("CKDTWMFVUQQUCCBCOGRYUNXQWFZPYLFROLCTPZHMKPSVSSBAMAMIGIJSVFLXZAQEPFZQTTUZGNJJHDNENENBVYCKHJXXPRPQOXUAKRWZBGYVKRPOGAGGKOWKWJQRSABDTGHD");
    msg.timeout = 22739U;
    msg.contents.assign("YJMOAAVTMFWJZKQLCWPTQZPUEDIALVTASUMRDNZYLHGCCCUIRLWQHGJEIVJPBCMCBUGWCMNYSFXDANFUKDMFUYOFQLHUYCXKAGDXGNPQYRPRQFIMDXBOPIYVMFLJXSGSRWKOZAEPXQKCSWJTABHEDQYNZWQGGGFZ");

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
    msg.setTimeStamp(0.32225776795851524);
    msg.setSource(37501U);
    msg.setSourceEntity(141U);
    msg.setDestination(63653U);
    msg.setDestinationEntity(246U);
    msg.number.assign("ZGJUFYXEWUHVHXZGMROCOKYZU");
    msg.timeout = 60990U;
    msg.contents.assign("LJESGZGQDIQXJASNEUZGATALOPYLGVONKNATZAHUMPCUOQDGCBCOGCMXRZMERLXFIQTVCUJIMGTSBDVWHZIFFRZCYOOKEZOORNTBMSHYDPWFIUWBFQ");

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
    msg.setTimeStamp(0.10839153586804495);
    msg.setSource(32979U);
    msg.setSourceEntity(142U);
    msg.setDestination(61981U);
    msg.setDestinationEntity(90U);
    msg.number.assign("FQYHPLWMKZOGLJGMQRRZUEHSWIWJJKWCTNBDCDPJAQHJSOUSOTRKMIPTEZNFBUDAFLHNTVYOBMUIUXVSMEFCNDDWHXRDARZSVFTZAAOTCQDSLGVAAVYFHDIHVTNJIIZJUFQQCKSGLTSOLBCNRPLXPNGJQTCBUYHREIGKMIMVBEYLRVFXOCBUHZCOCGIOMWYYWNZXSGXGERWRPSYPEQMLYFZMBPHLEXXDNKXAF");
    msg.timeout = 39589U;
    msg.contents.assign("TCSBYFPLVBYODKOPCQSPSWPDD");

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
    msg.setTimeStamp(0.997686340923988);
    msg.setSource(30653U);
    msg.setSourceEntity(23U);
    msg.setDestination(2559U);
    msg.setDestinationEntity(116U);
    msg.seq = 4002356071U;
    msg.destination.assign("VGGSOMRYJLPVCONYQTSVPOMJYZIKFJZNRXWDMCAGMZRBTZQKRGPARSMFJQBAFWEMIJCJDEPXWWLLDZPDJCAGACSQTSQBOYYUUKUTCBYZVQADHSHEPRANRBGEFBYKWXCCVDHLUF");
    msg.timeout = 41460U;
    const signed char tmp_msg_0[] = {-97, -108, -120, -40, -74, -83, 71, -84, 6, 77, 98, 58, 27, -97, 15, 6, 92, 40, -63, -61, -122, 79, 110, -6, 46, 37, -59, -13, 57, -77, 72, -83, 38, 97, -120, -24, -48, -16, 24, -82, -25, 19, -75, -79, 9, -8, 98, -54, 22, -21, -14, -74, 103, -45, -22, 87, -124, -127, -117, 102, 40, 16, -51, 22, -1, -45, 6, -50, 19, -97, 49, 99, 74, -86, 119, 83, -16, 98, 69, 108, 63, 21, -29, -81, -54, -10, 113, 111, -30, 73, -74};
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
    msg.setTimeStamp(0.16170362892650447);
    msg.setSource(5899U);
    msg.setSourceEntity(115U);
    msg.setDestination(53696U);
    msg.setDestinationEntity(12U);
    msg.seq = 990280601U;
    msg.destination.assign("LEWBUCQIVMFYHTBUVWNUIGPLROBAIVLDHSJPICOFGAWDXXRLDUERVUYXKWJMYUIFWXEBICUZCAFTSANNLNUCWWLKGJPBSQLLKNNRJJFSBFHFENPGTYAWMZVD");
    msg.timeout = 62399U;
    const signed char tmp_msg_0[] = {-37, 48, -78, 106, 3, -4, 3, -60, -9, 75, 32, -75, -18, 106, -87, -128, 40, 58, -101, -105, 4, -8, 114, 89, -58, 80, 46, 99, 125, 28, -33, -114, 48, 73, 29, -53, 29, -102, -113, -64, 69, -80, 19, 1, -112, 25, 59};
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
    msg.setTimeStamp(0.33717203106238647);
    msg.setSource(54004U);
    msg.setSourceEntity(150U);
    msg.setDestination(22716U);
    msg.setDestinationEntity(244U);
    msg.seq = 2056738100U;
    msg.destination.assign("LPMUNRGSTANEQUNHCFFKZLBERPWZMJIQUKFEBCBVCOCX");
    msg.timeout = 46495U;
    const signed char tmp_msg_0[] = {30, 18, 34, 48, 113, 80, 108, 64, 13, 54, -17, 26, 77, 103, -109, 16, 9, 108, 40, -69, -127, 92, 59, -97, -27, 82, -63, -89, 41, -108, -11, -122, 94, -2, -1, -30, 24, -75, -64, 77, -54, 97, 76, 22, -61, 3, -1, 77, 90, -69, 46, 33, -78, -82, 60, 97, -88, -30, -74, 57, 122, -77, -15, 73, -109, -94, 38, -83, -120, 60, 23, -123, 113, -91, 46, 64, -127, 97, -20, -94, -84, -48, 78, 126, -56, -37, -102, 90, -128, -48, -97, -127, 18, -91, -63, -124, 97, -123, 47, -86, 15, -81, -123, 17, -117, -128, -101, 104, 50, 88, 113, -97, -77, 42, -70, -117, 124, -80, -61, 64, 42, 62, 112, 55, 77, -60, -111, -111, 103, 10, 1, -114, 40, -8, 30, -55, 91, 120, 66, 49, 114, -9, 29, -111, -35, -10, 25, -61, 42, -19, 13, 24, -102, 28, 37, -126, 95, 27, -22, -99, -77, 57, 46, 61, 121, -48, 56, 18, 63, 23, -125, 15, -33, 58, -110, 80, 36, 24, 125, -98, 46, -88, 54, 12, -16, 103, 114, 71, -39, 5, 77, 60, 56, -83, 41, 76, 69, -108, -56, 120, -2, -18, 115, 77, -94, 61, 4, 43, 20, 42, 106, 121, -94, 28, -67, -42, -77, -37, -74, -60, -6, 92, -60, 25, -27, -54, 106, -48, -117, -76, 119, 69, -85};
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
    msg.setTimeStamp(0.5641930472060196);
    msg.setSource(1282U);
    msg.setSourceEntity(223U);
    msg.setDestination(6391U);
    msg.setDestinationEntity(184U);
    msg.source.assign("DUDRXKMVEXEJDXZEYCUADIMPOJZFUMQQOJVORGDTWXMNYLPLWMDQKWNZTBQKBQPPYERZFACPHUQPXFALEHMUJKOJIYBPVIRXCNTWBTENMDSSRGZGYWIOTUPADGSSHNHOWHIDACZOOFZVGNHFLMQEQOHAATEVXIEYJNUOVGBGLKWYUCFRFHTILYLRUSCSRZLPBXKVJHBMVBIHVJINAKKZSACFFRICSWVG");
    const signed char tmp_msg_0[] = {29, 96, -2, 24, -75, 34, -10, -109, 89, 33, 116, -79, 24, 98, -99, -34, 104, 67, 26, -54, 45, 36, -41, -77, 53, 50, -19, -36, 29, 116, -48, 38, 58, 43, -6, 77, -112, 19, -115, 50, -27, 60, 81, -35, 49, -33, -21, -8, 104, -60, 50, -2, 62, -81, -34, 111, -50, 21, -27, -58, -8, 119, -123, -31, -17, 107, -15, -123, -125, 91, 29, -49, -16, -61, 114, 107, -61, -18, 70, 60, -25, 31, -31, -20, -86, 29, 120, 75, -36, -41, 94, -65, 91, 17, 81, 65, -9, 32, 47, 76, -1, -27, -25, 7, 84, -20, 34, -60, -86, -27, -50, 72, -9, -116, -43, -46, 94, 76, 117, -119, 62, -83, 3, -51, 7, 121, -44, 112, -16, 90, -75, 88, 8, 96, 81, 26, 43, -75, 6, 89, -17, 125, 42, 91, -73, 2, 2, 18, -58, -101, -59, 101, 13, -32, -96, -120, -32, 27, 83, -29, -67, -117, -63, -24, -123, 104, -25, -115, -53, -40, 96, 82, -107, -71, 76, 12, 44, 103, 11, 103, 72, 15, -85, 13, -29, -99, 118, 1, 63, -112, 64, -52, 5, -48, 125, -111, -5, 5, -58, 84, -31, 25, -103, -3, 78, 28, -12, -82, -5, -12, -76, 103, -44, -20, -23, -35, 78};
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
    msg.setTimeStamp(0.13038027265663577);
    msg.setSource(43588U);
    msg.setSourceEntity(130U);
    msg.setDestination(29964U);
    msg.setDestinationEntity(241U);
    msg.source.assign("KNFWCLTLKRCUGKNTZXSIQQGLZHJENDUSMTFBCZFHTAHDNPOWOKXMRZTVQHRHFLYLULJXLRCYSYWFVZICGRGLVMKWSZAYGJOMNVLEVJJGAVOZBPIBBVCPGHUBBT");
    const signed char tmp_msg_0[] = {-90, 26, 114, -111, -26, 26, -121, -94, 58, -83, -46, 26, -54, -58, 76, 14, -125, 88, 25, -84, -1, -53, 10, -127, -91, -106, -15, -55, 116, -15, 112, 113, -41, 49, 114, 58, 1, 59, -103, -67, -117, 27, 51, 50, -109, 80, -7, 40, -96, -73, 8, -11};
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
    msg.setTimeStamp(0.804778489812606);
    msg.setSource(31409U);
    msg.setSourceEntity(107U);
    msg.setDestination(1422U);
    msg.setDestinationEntity(180U);
    msg.source.assign("WKECGPFQCJQTVIIRHMFPBOWWUDYVBRYJXGYZJCOJEMBERGGBXNOQNXYFRBEFCQSVWGWFDYHELEIIAPRNAVSHINRFSXJXVHVGMCLRZOCRSQSZYDXIAQWODMQIDFTKKRCCPDUWHJL");
    const signed char tmp_msg_0[] = {-73, 97, -102, -80, 75, -28, -97, 61, -71, 112, 36, 118, -93, -65, 62, 120, 30, -68, -89, 75, 53, -74, -61, 121, -85, 122, 34, -120, 33, 99, -95, 69, 31, -70, -25, 12, -39, -69, 112, 76, -36, 22, -37, -62, -69, -113, -124, 47, -62, 67, -11, 1, -42, 114, 50, -123, -127, -37, 31, 58, -51, -14, -17, 18, -102, 103, 34, -70, 80, -99, -76, 25, 61, -128, -39, -18, 41, 41, -47, -9, -112, 121, 55, -27, -99, 85, -117, -9, -125, 16, -13, 119, -51, 7, 93, 47, -111, -119, -80, 4, 14, -73, -56, -84, 96, -62, 104, -88, 110, 35, 85, 110, -19, -20, -65, -128, -34, 74, -54, -87, -107, -36, -123, -12, -44, 115, -108};
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
    msg.setTimeStamp(0.5316184594583708);
    msg.setSource(19666U);
    msg.setSourceEntity(121U);
    msg.setDestination(48932U);
    msg.setDestinationEntity(160U);
    msg.seq = 2794766438U;
    msg.state = 204U;
    msg.error.assign("WLGHUETTFBVGPXQFTOJXBAPCFNGMEZEKMFKQLINQEIRSGFRRYTRPMLYHTWDFTNSZMJSVKFWDOUBADQUPHIHYBBKLODKRNCLXVPSCWTEBF");

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
    msg.setTimeStamp(0.2535446347063519);
    msg.setSource(6800U);
    msg.setSourceEntity(211U);
    msg.setDestination(581U);
    msg.setDestinationEntity(228U);
    msg.seq = 2006334438U;
    msg.state = 55U;
    msg.error.assign("PXEKQFOEKNWGXBLCNEUNBFHVNEBNCPUIACYCIBURRZISSXQLCZYFBITJUSBYFWRKKRPHHGJPAKLCTDGWVOASHTARRSXVXHIBPPSKBEPPGEDTJMUY");

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
    msg.setTimeStamp(0.0009236777735862622);
    msg.setSource(27626U);
    msg.setSourceEntity(2U);
    msg.setDestination(52548U);
    msg.setDestinationEntity(59U);
    msg.seq = 2849284083U;
    msg.state = 14U;
    msg.error.assign("BJSDFSVWCGOVXLTGCUVPXXWGDYEJMLDGNZLRSXOSWMVNPOLKYSQDUQTOHEPKDXOKMXBLMSUHOOIJNPADUYORIHCBHVSRALZHEYIUJZDWFJZBGAETWGPVAZIQFLOAHTWFHNHMWTZBBTZQCCIJNQR");

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
    msg.setTimeStamp(0.4708724831586709);
    msg.setSource(19733U);
    msg.setSourceEntity(250U);
    msg.setDestination(46697U);
    msg.setDestinationEntity(56U);
    msg.origin.assign("QADCYKNCJKTJRDYMWWTYTANYGLFTCHRALNXHXOUQGCMLXMVOBJGCUEZTVONQAFNOXEWTIUPWSIEGDIGEORNQDJRYSPSBPUXIMJKVCAODQDSDUVSJUFCPSSHAIXEWCQRMPZLSJKYZMPLRFLKVYFDTVNZBHHWXRBQOSZPHZUHIMZEGEG");
    msg.text.assign("EVMRORQWMBPTOFQXFCBXEHFLIUQHYCTNCGGYEKPSQVWOPWEQDXOOSNGIDQFMRXUZFSCVLYWWHQEOKUDRANAPCXIBRKMGGESMZKKHBHBWIIMSDTSGHJVTGSRLHUHPQYPPZXNSFOKMKJNVPDTBCZGILAEBDVMDTIQYSJRKYJY");

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
    msg.setTimeStamp(0.22311032261609332);
    msg.setSource(42961U);
    msg.setSourceEntity(186U);
    msg.setDestination(16260U);
    msg.setDestinationEntity(133U);
    msg.origin.assign("IYASGXTVLTOIEEKPZPEWRZQTRVQUKOMLODEJICGFFSVRUVYNEUWBVJKJABVRDUBOEIPHHCPWBNDITKMARGXUGMCAIZDIVOMIHLKPSCSMHERXYRXFHFCQAVGLWNJFKJJMHLQBUSNAYGDZF");
    msg.text.assign("OCUKUJGXHSSRLVLYPQYZKVYWTCPXWRIHNQDIKPVEKLMDSCITSXVQQYEIFNHQXXXYG");

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
    msg.setTimeStamp(0.16268084102256875);
    msg.setSource(48524U);
    msg.setSourceEntity(191U);
    msg.setDestination(44491U);
    msg.setDestinationEntity(232U);
    msg.origin.assign("QETWOTAHHHPDZGNUGAXEUIDKTRZRVLSPXVTKHHQJJRXPENBYIBIXJNBDJELCPAVTSLMFJZXKQNPYSTDIYQKVWFOQBLZNJZUSKUREOLUBLAEGLXYDIMI");
    msg.text.assign("HVMKFBTSAUAYDYDVWJWUJNBHMIJFDCDUP");

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
    msg.setTimeStamp(0.1368443199018955);
    msg.setSource(10627U);
    msg.setSourceEntity(154U);
    msg.setDestination(16609U);
    msg.setDestinationEntity(127U);
    msg.origin.assign("VXRAPGTVWSAJJRTPOKHCVOCLIGAAWIKUQLKEYBDXISQBBDLKCXYTIFUXEVNRCDCBABGMWGGNMTIEUZEOFVTWFOVLJGSNUKJSKZPJSEUFJAPYMFTVIMDDNVCWHHQYRYZHMSAFOJSOXLMXWQOCXYOINDOUCMYCLINXRQLTLYHKQTXDQRNGJVHCRRFZAABSG");
    msg.htime = 0.420911189454204;
    msg.lat = 0.1596150600886691;
    msg.lon = 0.9907939026832687;
    const signed char tmp_msg_0[] = {32, -29, -54, 89, -6, -16, -38, 81, 85, 42, -119, -34, 13, 122, -44, 6, -59, 17, 122, 86, -97, 111, 86, 94, 5, -28, 91, 40, 10, -68, 1, -39, 44, -50, -69, 105, -20, 99, 81, -21, 111, 86, -10, 57, 65, -58, -80, -99, 125, 99, 100, 78, 6, 75, 63, 35, -122, 91, -25, 117, 42, 3, -22, 4, 13, -29, 102, -73, 23, 81, 10, 0, 79, -82, 126, 106, 2, 16};
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
    msg.setTimeStamp(0.7529006506537332);
    msg.setSource(44265U);
    msg.setSourceEntity(247U);
    msg.setDestination(37078U);
    msg.setDestinationEntity(56U);
    msg.origin.assign("CRNDEKNPCMNYWUTCRBCZACEEZHFLPGJTJMVHPVIKRKVNJDJFRFAAHCFTBINDMUKAGKGUPEAXMEBXYTRCXJHPAUDQFQSTHEUGLLVHSZCFHLYBYOQF");
    msg.htime = 0.013230620805067539;
    msg.lat = 0.1747725749060215;
    msg.lon = 0.5041353867197605;
    const signed char tmp_msg_0[] = {-122, -100, 80, 49, 51, 71, -31, 78, -56, 59, 52, 115, 82, -34, -116, 99, -23, 30, -50, 118, -19, 20, -6, -31, -74, 71, 36, 11, 104, 89, -65, -1, 46, 120, 53, -103, 34, 7, -115, -118, -93, 33, 96, 83, -57, -92, 109, -121, -82, -17, 121, 85, 56, 44, 117, -51};
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
    msg.setTimeStamp(0.7721525093189334);
    msg.setSource(47271U);
    msg.setSourceEntity(109U);
    msg.setDestination(58218U);
    msg.setDestinationEntity(193U);
    msg.origin.assign("ZNLDZWDKTHWQDSTJYQUISHGEQRMORRKCYKKKIIGXUSIRNVCGNBDERTMTPYCQAXVOAKZLFEQCLPAMFMGONICWCVOJVXAYHCVFOUZOIBFUMZBKPRAPAETJHQSVZVLUJMPTEBOPHXRSFHBWHKDMUSENBNMXEJDFZSFYNGYPZWCIKWOXIDQFSNLOHSTDIPSAYQOENMXVBJJWCAJGBAVYHGXURWDZWTULJAUNWJIUBGFEXTDL");
    msg.htime = 0.42208885188771295;
    msg.lat = 0.8829581344629319;
    msg.lon = 0.7184425831563868;
    const signed char tmp_msg_0[] = {81, 32, -3, -31, 80, 122, -30, 95, -109, 95, 112, -12, 61, -92, -48, -119, -104, -63, -86, 107, 66, 74, 34, -13, 116, 54, -111, 124, -5, 93, 117, 108, 103, 25, -126, 40, 122, 115, 96, -15, 118, 123, -93, 118, -60, -111, 22, -93, -26, -25, 88, 55, -108, 31, -29, 56, -63, 3, 16, 32, -68, -60, 108, -6, -49, 19, -110, -29, 126, 21, -83, -45, -71, -108, 74, 76, 44, -36, -107, 81, -96, -68, -89};
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
    msg.setTimeStamp(0.8486492634471949);
    msg.setSource(65502U);
    msg.setSourceEntity(103U);
    msg.setDestination(595U);
    msg.setDestinationEntity(116U);
    msg.req_id = 33481U;
    msg.ttl = 51147U;
    msg.destination.assign("MMCRUHVOJQNEUPXMFLAGUELHQSITKYYIULHYRRAKWWBX");
    const signed char tmp_msg_0[] = {9, -52, -61, 109, 21, -100, -54, 124, -48, -58, 26, -67, 37, 70, 113, -28, 106, -45, 125, -38, 43, -122, 53, -115, -51, 18, -108, 16, 37, 99, -77, -40, 119, 7, -71, 66, 25, -2, -18, 77, -39, -73, -72, 44, 25, -89, -114, -9, -69, -113, 106, 13, 49, 108, 34, -105, -123, 91, -118, -16, 60, 98, 60, 115, -20, 118, -32, -79, -49, -52, -44, -94, -26, -76, -26, 66, -46, -126, -41, -88, -83, -69, 66, -67, -114, -122, -110, 121, 95, -17, -117, -43, 75, 63, -125, -60, -9, -7, -60, 79, 107, -60, 106, -97, -39, -75, -37, 95, -85, -87, -49, 111, -109, 56, 52, -84, -99, -32, 100, 41, -68, -83, -45, -73, -88, -45, -45, -35, -38, -127, -84, 34, -41, -67, -49, -80, -97, 33, -74, 90, 100, -93, 18, -4, -123, 74, 81, 79, -89, 44, -33, -11, 113, 41, -5, 42, -109, -120, -33, 46, -4, -52, 95, 121, -97, -33, -37, -89, -128, -36, 62};
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
    msg.setTimeStamp(0.05531540379668176);
    msg.setSource(35802U);
    msg.setSourceEntity(78U);
    msg.setDestination(56074U);
    msg.setDestinationEntity(136U);
    msg.req_id = 63216U;
    msg.ttl = 53488U;
    msg.destination.assign("CYSPJFAHBIOTGOFXAXYEJGCFCDQRJFVCQIKHATIASQSMGYBOSSOBBRTIMQTCZKHIKLDRGKTKNVEUQBMLSDJJJWIVWCEPLLVBUJAENAVZWJJEZRXXNNUXADTCHPWGLHPKWCHULFHYPQATYOHOUZRDBYVF");
    const signed char tmp_msg_0[] = {124, 123, 103, -100, 75, -116, -124, 106, -14, 9, 81, 47, -80, -72, 62, 45, 20, -54, -126, 103, 4, 119, 36, 49, 54, -86, -56, 75, 117, -84, 37, 116, -124, -18, -26, 63, 100, -23, 75, 94, 68, 115, -70, 96, -98, -47, -44, 31};
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
    msg.setTimeStamp(0.39590427419716656);
    msg.setSource(19345U);
    msg.setSourceEntity(194U);
    msg.setDestination(45218U);
    msg.setDestinationEntity(219U);
    msg.req_id = 20749U;
    msg.ttl = 45072U;
    msg.destination.assign("UPDCXXVYXSYWRHUATFMBRXEQMBLMVILDPLQODOBDZLYFKUUAOULVHCJRKROMIPARALEPBKESIULVVCQMYAIAPJGCAVKHWEOJLNKPGIJMGDTPODZQNAPEY");
    const signed char tmp_msg_0[] = {12, 112, -98, -93, -48, -10, 26, 20, 6, 54, -2, -84, -124, 83, 122, 15, 81, -86, -91, -15, 38, 8, 53, 19, 7, -114, 125, -83, -127, -48, -93, 85, 54, 87, 87, 35, 119, -104, -81, 18, 110, -66, 9, 28, 1, 92, -47, 38, 103, 53, -58, -93, -119, 66, -64, -4, 20, -93, 50, 112, 28, 72, -84, 112, -123, -27, 71, 109, -20, 33, 124, 95, -84, 52, -122, -111, 80, -125, -18, -26, 35, -101, 38, 83, 16, -108, -71, -66, -101, 79, 18, -69, -1, -96, -58, 66, -94, -124, -49, 65, 13, 96, -100, -73, 126, -96, 100, -72, -53, -13, -53, 52, -122, -51, 125, -15, -12, 64, 18, 99, 105, 2, 13, -91, 113, -62, 123, 66, 49, -10, -112, -64, -91, 8, 34, 14, -41, 14, -39, -89, -42, -97, 39, -35, 2, 57, -104, 124, -21, 47, -65, -85, -82, -64, 97};
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
    msg.setTimeStamp(0.7942494338631383);
    msg.setSource(38897U);
    msg.setSourceEntity(6U);
    msg.setDestination(10144U);
    msg.setDestinationEntity(40U);
    msg.req_id = 9143U;
    msg.status = 251U;
    msg.text.assign("ZHELXPFAVJGVYQRSEHEZQTXDFHMWRBPIOUIHBTFKEDUWSAJMNECYXZHMLFDVJOOPKBWQHKJTQOCTSVLDVJUMLXAGPRUURNX");

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
    msg.setTimeStamp(0.5528841447125872);
    msg.setSource(41367U);
    msg.setSourceEntity(195U);
    msg.setDestination(32029U);
    msg.setDestinationEntity(58U);
    msg.req_id = 31487U;
    msg.status = 163U;
    msg.text.assign("IJIYBCCDOWPEBSQPZNWVGXWQGXDZJTSDPIWFWFVTMTNUJXMHEMANOBYWOQEMRCBRTWXGOPDDKQMREKCOBDEYSNBNVONTCJHCAKNRYPMHGVVRLUANVBNXEYXUAZQJRKVUXVFMGSYCGYXAHMKZHNYOALQMFZUCKKJFEQ");

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
    msg.setTimeStamp(0.6714186678386782);
    msg.setSource(46405U);
    msg.setSourceEntity(48U);
    msg.setDestination(61751U);
    msg.setDestinationEntity(231U);
    msg.req_id = 3224U;
    msg.status = 183U;
    msg.text.assign("XDNGUTHZHBMNUXLYZOKTEGVWGLAHIVAUIJJBPQNZXEE");

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
    msg.setTimeStamp(0.780728526781577);
    msg.setSource(52692U);
    msg.setSourceEntity(208U);
    msg.setDestination(19712U);
    msg.setDestinationEntity(54U);
    msg.group_name.assign("YYAFKUONATXYXREADHGKZMIUBVMRKAEAZQWVUOJZFGGVBQWEQESWCFOKTMZHZGFHBKDLCCWZEKLJFBTCXICHKVDXDLUYDTWJHEIBLWIUXRDFHYVENVSYIMPEFQRGLTOWGFIJBZWXVSXYMUNROSLANTYZTMPQJRGPUSNHKLABVGOTDPSWXNQOQTFRLPDWJOCRRCSMNABIXUQZJNPUDHUJYHTAPCBQASCEDVPBGCYG");
    msg.links = 933610936U;

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
    msg.setTimeStamp(0.24211382515165847);
    msg.setSource(52754U);
    msg.setSourceEntity(74U);
    msg.setDestination(4115U);
    msg.setDestinationEntity(56U);
    msg.group_name.assign("OPBOFLWOVQKDQCAFIMYIAPRLRZQDYRKHVADPLEXVCMGEAOMYTKKFKZOUVSTUDVIJHGZWJIGHSVETBFPCYATECLLQULZTITYJAXNNHDXFEJNEMAJKBXGQFEYMEJLGQFLCMGMTRUSTBZFSXONWIDCAOJBCAJAGITZQYLKDUSTK");
    msg.links = 2445268153U;

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
    msg.setTimeStamp(0.02604832603092999);
    msg.setSource(55731U);
    msg.setSourceEntity(225U);
    msg.setDestination(32542U);
    msg.setDestinationEntity(8U);
    msg.group_name.assign("UAFSLOSINUC");
    msg.links = 3762396286U;

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
    msg.setTimeStamp(0.3734979996014559);
    msg.setSource(2560U);
    msg.setSourceEntity(132U);
    msg.setDestination(13404U);
    msg.setDestinationEntity(204U);
    msg.groupname.assign("RBFDOTZHSSTDPGLUOZA");
    msg.action = 246U;
    msg.grouplist.assign("GHNGASEICXZKZTZSLVCKQBGAGALKRRFUHBRZEPUXIHEMHQZOVNBTLPJXYWLGEPQIDPYPYTOFAFMOIYYUNEBDPHZIF");

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
    msg.setTimeStamp(0.9778734152247283);
    msg.setSource(46574U);
    msg.setSourceEntity(254U);
    msg.setDestination(4917U);
    msg.setDestinationEntity(165U);
    msg.groupname.assign("FVXBTXHKTNPQCHJMYEXYEIUSRHRNRFNZNOKKDOBNBSAMBYXUPXVIWRLOGWGYLLLNZJWFEEYXEVYFGCWQOVQSPMTJRFRPUBZLWTPIIJJCCDDEBLZDJCIYWIVKMZMVHPVUCPGJBQOOGTAMNPVIDOKDZSIABYZMMSQCNKTUFAAVNYRYVOLHOCHRSXHZIGJSUEHBHNQCPQTARHURFWAKUDKGLTSLDQMEQZKF");
    msg.action = 83U;
    msg.grouplist.assign("NDXYMGGWNAZJUZCGWHIQWBMJSBFWWAHTNBDQKPXEMCPPXLFBZUSAIHNBOXYHYMGJCDBKMYKMQKJTYSEXJVZTLMNOJTLCKGQJVIHOVYCPROKBWLIUVRAAQXUEQVSUJXSVSHOXAEDRU");

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
    msg.setTimeStamp(0.33004960920939275);
    msg.setSource(29154U);
    msg.setSourceEntity(189U);
    msg.setDestination(42407U);
    msg.setDestinationEntity(14U);
    msg.groupname.assign("MUISKJVYLOXPHMFKGJGCYMOTBIWGTSKRHMMETYKZCYDEGMDYNDFTJTRLLPIAEDLJRIHEGUCJBBZWFPCWIQQKBXWVSVSMWWUKXWZGCJNHUJOENTCOYFGOGLNDINSADBKCXHQMBKLFNFTFQSXSPAQNEGZWDAYMZITIKUROXSSRELCJXOIFQIXENVYAVVEPLBRRACRHPSWUOPVHPVJHHMAZXCZKJ");
    msg.action = 101U;
    msg.grouplist.assign("ICXAWNBTWLHMMSXQUFIISDLTYEENTZGBWHQWCMYFLVXQWBFSKNOOAWEJYKGCZBJRDEFKNSOIORKUPQHLYAPIHXSRROUBURVNZ");

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
    msg.setTimeStamp(0.08929840874685302);
    msg.setSource(21790U);
    msg.setSourceEntity(175U);
    msg.setDestination(42057U);
    msg.setDestinationEntity(92U);
    msg.value = 0.6699884469679231;
    msg.sys_src = 28962U;

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
    msg.setTimeStamp(0.10783375996294298);
    msg.setSource(16813U);
    msg.setSourceEntity(224U);
    msg.setDestination(33073U);
    msg.setDestinationEntity(28U);
    msg.value = 0.14795758733993603;
    msg.sys_src = 35664U;

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
    msg.setTimeStamp(0.7528613457203193);
    msg.setSource(15689U);
    msg.setSourceEntity(100U);
    msg.setDestination(37211U);
    msg.setDestinationEntity(128U);
    msg.value = 0.9614611599698757;
    msg.sys_src = 16763U;

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
    msg.setTimeStamp(0.9960550641937204);
    msg.setSource(14978U);
    msg.setSourceEntity(242U);
    msg.setDestination(16259U);
    msg.setDestinationEntity(149U);
    msg.value = 0.4686401581628298;
    msg.units = 201U;

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
    msg.setTimeStamp(0.4734784951207822);
    msg.setSource(47972U);
    msg.setSourceEntity(52U);
    msg.setDestination(44821U);
    msg.setDestinationEntity(151U);
    msg.value = 0.23731893996192877;
    msg.units = 203U;

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
    msg.setTimeStamp(0.2570474118165823);
    msg.setSource(25586U);
    msg.setSourceEntity(250U);
    msg.setDestination(47906U);
    msg.setDestinationEntity(107U);
    msg.value = 0.789623456261345;
    msg.units = 68U;

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
    msg.setTimeStamp(0.31196185403832033);
    msg.setSource(15697U);
    msg.setSourceEntity(17U);
    msg.setDestination(651U);
    msg.setDestinationEntity(253U);
    msg.base_lat = 0.39914217018505693;
    msg.base_lon = 0.9493039263899193;
    msg.base_time = 0.5554599239338444;

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
    msg.setTimeStamp(0.697154698798441);
    msg.setSource(35444U);
    msg.setSourceEntity(7U);
    msg.setDestination(540U);
    msg.setDestinationEntity(142U);
    msg.base_lat = 0.13855542139149113;
    msg.base_lon = 0.19153657465543594;
    msg.base_time = 0.36962252993716305;

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
    msg.setTimeStamp(0.8265128734184061);
    msg.setSource(21019U);
    msg.setSourceEntity(174U);
    msg.setDestination(7457U);
    msg.setDestinationEntity(146U);
    msg.base_lat = 0.4601326176319509;
    msg.base_lon = 0.3648050136634774;
    msg.base_time = 0.35147758828254017;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 44458U;
    tmp_msg_0.priority = 29;
    tmp_msg_0.x = 15661;
    tmp_msg_0.y = -18370;
    tmp_msg_0.z = 26171;
    tmp_msg_0.t = 2921;
    IMC::IoEvent tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.type = 5U;
    tmp_tmp_msg_0_0.error.assign("URMOXFRPOYGJACQXSMZSTKADEANGLEVWSTSMFQHXRTGCVKGRLSKOHTYXEZEUCFLXPRNGQPWOEUYLWCKSILNZQVJJWDFPIJNFBHNIYDJ");
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.6670598907068876);
    msg.setSource(7834U);
    msg.setSourceEntity(225U);
    msg.setDestination(63434U);
    msg.setDestinationEntity(155U);
    msg.base_lat = 0.9196562510811934;
    msg.base_lon = 0.4508194726055573;
    msg.base_time = 0.24874280066175647;
    const signed char tmp_msg_0[] = {76, -86, 117, 0, 111, 23, -125, 68, -80, -49, -1, 79, -112, 91, -66, -57, -83, 69, -53, -15, -22};
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
    msg.setTimeStamp(0.32351486325467216);
    msg.setSource(61205U);
    msg.setSourceEntity(183U);
    msg.setDestination(22838U);
    msg.setDestinationEntity(84U);
    msg.base_lat = 0.21388709594083377;
    msg.base_lon = 0.6519458961027065;
    msg.base_time = 0.2486112712028059;
    const signed char tmp_msg_0[] = {126, -74, -97, 57, 8, 120, 44, -66, -88, -51, -23, -5, 99, -125, 30, -42, 10, -90, -117};
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
    msg.setTimeStamp(0.17989512957108678);
    msg.setSource(38810U);
    msg.setSourceEntity(193U);
    msg.setDestination(38044U);
    msg.setDestinationEntity(83U);
    msg.base_lat = 0.49287396650419146;
    msg.base_lon = 0.9597862577094223;
    msg.base_time = 0.04592527566951976;
    const signed char tmp_msg_0[] = {67, 51, -97, -125, 61, -43, 31, -41, -75, -20, -9, 122, -81, -35, 105, 54, -15, 83, -12, -33, -125, 25, 121, -22, -53, -123, 82, 121, -116, -106, 126, -20, -23, -4, -87, -59, -22, 103, -113, 103, 34, 41, -71, -2, -55, -2, 119, 100, -96, -22, -101, -60, 41, -77, 106, 0, -55, -38, 61, -114, -33, -91, 23, -13, 81, -113, 24, -14, 63, 102, 77, -22, 45, 19, -4, -48, 73, 23, 42, 30, 96, -64, 4, -101, -3, -38, -67, -84, 32, 14, -69, -103, 85, 30, -41, 10, -116, 115, 22, 24, -14, -25, 103, -125, -52, 15, -104, 46, -101, -125, 59, 80, -61, 15, 81, -102, 93, -65, -5, -3, 18, -112, -123, -95, 76, 7, 65, 113, 44, 29, -53, 18, 26, 38, -35, -65, -34, -71, 88, -39, 18, 98, 119, -117, 62, -64, 93, -44, 94, 97, 35, 66, 8, 49, -70, -108, 15, 14, 120, 0, -23, -46, -87, 17, 63, 87, 8, 36, -39, -54, -115, -67, 4, 119, 9, -25, -73, 33, 65, -58, 89, -17, 43, 53, -102, 13, 106, -85, 72, 56, -16, 49};
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
    msg.setTimeStamp(0.7241243697883987);
    msg.setSource(1891U);
    msg.setSourceEntity(118U);
    msg.setDestination(61076U);
    msg.setDestinationEntity(119U);
    msg.sys_id = 24533U;
    msg.priority = 113;
    msg.x = 20130;
    msg.y = -6813;
    msg.z = -10602;
    msg.t = -9043;
    IMC::TCPStatus tmp_msg_0;
    tmp_msg_0.req_id = 61558U;
    tmp_msg_0.status = 192U;
    tmp_msg_0.info.assign("QZZDNWWCZPKIJKPHDXMWEBYADZKTPULAJUDIFLRNDQIODZMKRVQMWHWZCPVCLIECCYSEEWJMFZQUOMYHUSLJJBSXPOWTSHISLGQFGMRA");
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
    msg.setTimeStamp(0.5402337083224044);
    msg.setSource(60898U);
    msg.setSourceEntity(129U);
    msg.setDestination(62907U);
    msg.setDestinationEntity(102U);
    msg.sys_id = 1630U;
    msg.priority = 121;
    msg.x = 17700;
    msg.y = -30659;
    msg.z = 16600;
    msg.t = 18104;
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.system = 54872U;
    tmp_msg_0.duration = 53782U;
    tmp_msg_0.speed = 0.1269178188049115;
    tmp_msg_0.speed_units = 69U;
    tmp_msg_0.x = 0.1623767380162886;
    tmp_msg_0.y = 0.8008940832126641;
    tmp_msg_0.z = 0.5854878732089386;
    tmp_msg_0.z_units = 119U;
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
    msg.setTimeStamp(0.004122208068116029);
    msg.setSource(43218U);
    msg.setSourceEntity(143U);
    msg.setDestination(55667U);
    msg.setDestinationEntity(0U);
    msg.sys_id = 12189U;
    msg.priority = -1;
    msg.x = -16966;
    msg.y = 8939;
    msg.z = 23471;
    msg.t = 20143;
    IMC::ReportedState tmp_msg_0;
    tmp_msg_0.lat = 0.3727199804311856;
    tmp_msg_0.lon = 0.1103275715690093;
    tmp_msg_0.depth = 0.27601394927049083;
    tmp_msg_0.roll = 0.5105759453023162;
    tmp_msg_0.pitch = 0.3423095588286241;
    tmp_msg_0.yaw = 0.6259419180438704;
    tmp_msg_0.rcp_time = 0.2266778778534696;
    tmp_msg_0.sid.assign("UREEGLEZIIMHRIFBTJYCGPCFSYEPMOCVNKTBSBNKAWBJPYDUOEJUFMSSFWWESVYGSNLTKEOVAQQXFZHTKASXEZYYBBQWFHORZZWNYIMZYIMDAGKCFDHUJHOGNFDVGUMNMRKZZPBWODJJLXWNGXKUGCLXXAMQAGRJVLRPUTQVUTHMDNCXLYPIXDHSRIBZRQLHKQLOCPBMJJOLHHVSNVVNERVIAWTSQUGF");
    tmp_msg_0.s_type = 52U;
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
    msg.setTimeStamp(0.4698817181601993);
    msg.setSource(56362U);
    msg.setSourceEntity(153U);
    msg.setDestination(48708U);
    msg.setDestinationEntity(113U);
    msg.req_id = 32880U;
    msg.type = 92U;
    msg.max_size = 5169U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.35739578645616976;
    tmp_msg_0.base_lon = 0.5022466681465753;
    tmp_msg_0.base_time = 0.46202585717633915;
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
    msg.setTimeStamp(0.5027430617775203);
    msg.setSource(59672U);
    msg.setSourceEntity(145U);
    msg.setDestination(50993U);
    msg.setDestinationEntity(66U);
    msg.req_id = 25924U;
    msg.type = 143U;
    msg.max_size = 12492U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.18415135794554915;
    tmp_msg_0.base_lon = 0.6115493100514552;
    tmp_msg_0.base_time = 0.8624230952841551;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 35332U;
    tmp_tmp_msg_0_0.destination = 31356U;
    tmp_tmp_msg_0_0.timeout = 0.3090885332858323;
    IMC::IridiumTxStatus tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.req_id = 14254U;
    tmp_tmp_tmp_msg_0_0_0.status = 247U;
    tmp_tmp_tmp_msg_0_0_0.text.assign("AFMKJUFXABDDEYQUCNOLPEOXMAQPOMEWBGHTQAROWKXDFKJINLSTMYBRGJPLFIWLDCHOTCHVGEGRMENQNPPNOCDCQTMKZZWVYYBEYUHCCDAAXIPGVQNLZUGZAFBEWZDNTQQKAKSHKGHUXGUPXSTDJKZZJFLYRYSBTLTFGHRVMDPK");
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.06759102447620746);
    msg.setSource(49866U);
    msg.setSourceEntity(245U);
    msg.setDestination(47493U);
    msg.setDestinationEntity(16U);
    msg.req_id = 7164U;
    msg.type = 182U;
    msg.max_size = 8810U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.811836368982998;
    tmp_msg_0.base_lon = 0.8760505156438977;
    tmp_msg_0.base_time = 0.4286141444878413;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 38382U;
    tmp_tmp_msg_0_0.priority = -70;
    tmp_tmp_msg_0_0.x = 32169;
    tmp_tmp_msg_0_0.y = -27618;
    tmp_tmp_msg_0_0.z = -14510;
    tmp_tmp_msg_0_0.t = -8586;
    IMC::CpuUsage tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 246U;
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
    msg.setTimeStamp(0.9009752149728946);
    msg.setSource(41884U);
    msg.setSourceEntity(53U);
    msg.setDestination(1762U);
    msg.setDestinationEntity(130U);
    msg.original_source = 2717U;
    msg.destination = 55367U;
    msg.timeout = 0.8011478592318539;
    IMC::QueryLedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("IHCZXIOJRHXODFXKXSNPCRTWKEZBENCLWBEGJJUEDTLRLOEVWRSQFZJEKUGMAVVJNIBYIWQQXAWDFKPYRLGOHTHAFTZUSGAKNDEMTYSLRMGUVPWVDNLFFSJHMVLBJVYTCCFBGG");
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
    msg.setTimeStamp(0.33231797334302204);
    msg.setSource(1846U);
    msg.setSourceEntity(8U);
    msg.setDestination(47023U);
    msg.setDestinationEntity(153U);
    msg.original_source = 35635U;
    msg.destination = 61990U;
    msg.timeout = 0.2281170322956121;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.4173372749848858;
    tmp_msg_0.y = 0.874355287998411;
    tmp_msg_0.z = 0.23429181926824127;
    tmp_msg_0.t = 0.4025922726390333;
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
    msg.setTimeStamp(0.8713451480572963);
    msg.setSource(55346U);
    msg.setSourceEntity(253U);
    msg.setDestination(53123U);
    msg.setDestinationEntity(6U);
    msg.original_source = 63550U;
    msg.destination = 44146U;
    msg.timeout = 0.021358834677692173;
    IMC::PowerChannelControl tmp_msg_0;
    tmp_msg_0.name.assign("UKCZCXVYRVZZPWNBJPPQOLWTWAFXMXUVTBGLEPBTONNYFHBKTRXZLTWJSZGSGRVYEEGLLYWSSITCYXFIUMWZOFUYNSEHMDRQUXXKEEJIQPOWOICHUTDWJARHHUBAGPWDYKCCAIPJRVGOYQOJAAF");
    tmp_msg_0.op = 203U;
    tmp_msg_0.sched_time = 0.32862605385361876;
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
    msg.setTimeStamp(0.7828707196456285);
    msg.setSource(7782U);
    msg.setSourceEntity(48U);
    msg.setDestination(57188U);
    msg.setDestinationEntity(46U);
    msg.type = 250U;
    msg.comm_interface = 63416U;
    msg.model = 42032U;
    msg.list.assign("SQMXHKZKMHICQYQBPIOXIJCBFRWGOZUTHLKMJGAWRZISOXYLOYEZIKWURJRVDEVZGVJOSUFBMOPEJDZMQBNDSUADASDUGQTQFVSVBFYPONGSPNWCAYXTKVCKGCNRXINBVPZHTORTGCRFXMUXYEMQJEUUTFRNLALGDJMZHWQTLCJPEOILPLTCKANCBWZWRBECSXTJZKBPJPQYHF");

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
    msg.setTimeStamp(0.15539755266273592);
    msg.setSource(47484U);
    msg.setSourceEntity(121U);
    msg.setDestination(18516U);
    msg.setDestinationEntity(126U);
    msg.type = 205U;
    msg.comm_interface = 4085U;
    msg.model = 36883U;
    msg.list.assign("AUISUCGALQMCBXFEXZNLTNSI");

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
    msg.setTimeStamp(0.5351523551192153);
    msg.setSource(1907U);
    msg.setSourceEntity(186U);
    msg.setDestination(29686U);
    msg.setDestinationEntity(11U);
    msg.type = 57U;
    msg.comm_interface = 10194U;
    msg.model = 59485U;
    msg.list.assign("CBRBQYVJQKFJHEPMRVGUGLULDAZMNGQFGLWTJFKOVBXYAHPKMDYPAHHTXVWSLIVMIPXOZTCWPZWTRCIFSOUUGYBJZIBHKYTFIWSILCQBWEEEPEURXPTWSOONOMDHJYFMODIHJROBXCSITEVGDEBSALQATCCZGOGMOADPRPKUSUMVEFQNWNDXLLIBLXDHNJNKAXSZVYANRCVCFXVCKKJWHZNRYRDFJQXLPDUGUMYHZUKQYKEATS");

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
    msg.setTimeStamp(0.2340091671842669);
    msg.setSource(41284U);
    msg.setSourceEntity(101U);
    msg.setDestination(58100U);
    msg.setDestinationEntity(222U);
    msg.type = 54U;
    msg.req_id = 2597734881U;
    msg.ttl = 63805U;
    msg.code = 82U;
    msg.destination.assign("LDBWMAFRMJFDJFIYTIMBVNBIYTEOKFAFRUVGUGKPWIRHDFWTGRDGBKIJPYDLSSHMXVJAVUXJEQCTWXPHZUPLZD");
    msg.source.assign("VGUSDNXMPEUKZQJMSIQYPCIVCJARZPXO");
    msg.acknowledge = 20U;
    msg.status = 13U;
    const signed char tmp_msg_0[] = {57, -13, -4, 28, -91, 11, 39, -79, -62, 57, -112, -86, -90, 44, -128, 125, 115, 109, 47, -114, 16, -105, 82, 11, -118, -22, -95, -124, -54, -89, -50, -102, -41, -127, 45, 89, -18, 114, -54, 124, 40, -121, -98, 94, -110, -57, -63, -9, 74, 30, 92, -98, 6, 82, -35, -122, -65, -101, 72, -67, 90, 7, 114, 21, 111, 82, -94, -89, 19, 53, 55, -100, 62, 90, -48, -68, 19, 111, 109, 16, -95, 28, -70};
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
    msg.setTimeStamp(0.08129012091531851);
    msg.setSource(50906U);
    msg.setSourceEntity(10U);
    msg.setDestination(28670U);
    msg.setDestinationEntity(66U);
    msg.type = 117U;
    msg.req_id = 3746821478U;
    msg.ttl = 63140U;
    msg.code = 249U;
    msg.destination.assign("LEPNQSXSAQKSRRORMHJVICFEDAJLMQGCXSKFGALFTVVOSLPQJYSPKJADKBTMTIDXVVYCGCYQETOOAEDUAYQXJNG");
    msg.source.assign("XOYIHTENFGNYTCVFUEVUPEIQLKACXDKHEWTQVZMJMZAPJLSTJRJKBQABOTZLZQKYAESCDOGXDINUFAPQQEBSUQXEA");
    msg.acknowledge = 208U;
    msg.status = 29U;
    const signed char tmp_msg_0[] = {50, -48, -62, 64, -26, 98, 63, -121, 84, 102, -108, -71, 63, -68, -44, -89, 78, -67, 32, 2, -18, -45, -26, -73, -77, -14, -54, -98, -38, -6, 100, -128, -92, 7, 89, 56, -106, -1, -9, 96, -16, 74, 47, -68, 48, -91, 107, 91, 86, 110, 94, -69, 26, 102, -57, -67, -96, 115, 47, 48, -27, -61, -35, 24, 28, -82, -89, 82, -111, 17, 116, 51, 10, 13, 50, 6, -101, 22, 99, 44, 87, -65, 57, 77, -83, 109, 105, -89, -93, -37, 120, -100, 81, -56, -49, -117, -60, 37, 49, -47, 39, 5, -47, -53, -64, 86, -117, 99, 77, -78, 55, -105, -95, -50, -121, 39, -115, -61, -103, -68, -59, 108, -19, 84, -94, 4, -49, -26, -64, -46, 93, -107, 91, -21, 45, -48, -56, -67, 0, 82, -51, 108, -19, 43, -102, -68, 39, -23, -97, 40, 89, -67, -61, -26, -89, -119, -2, 110, -63, 107, 8, 89, 63, -37, -52, -77, -41, 33, -41, 8, -100, -86, -57, 24, -17, 79, 29, -74, 125, -71, -94, -27, 37, 35, -97, 75, -96, 63, 62, 62, -1, -90, -24, 72, -107, 4, 36, -105, -53, 80, -22, 114, -92, 20, -106, 94, -43, 43, 53, 52, -25, -2, 105, 25, 113, -25, 87, -114, -104, 122, -51, -50, -6, 123, -108};
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
    msg.setTimeStamp(0.67947578744326);
    msg.setSource(9775U);
    msg.setSourceEntity(52U);
    msg.setDestination(34674U);
    msg.setDestinationEntity(76U);
    msg.type = 229U;
    msg.req_id = 1067208820U;
    msg.ttl = 62916U;
    msg.code = 5U;
    msg.destination.assign("KUFGETXNFHMWCTUGQDRXREISGWFVEFKNRIUOSBWCPLBBKBJLYRMBGUBCPOEVQQMZVAYSPJPDOJKUUIZNVRXNVOGECCYRTMCNJYXUTZGLQAAYXWCMJPKMFDOBZJVLQKAPAOAYMIHQBDQL");
    msg.source.assign("ZGXANVDYRZTOMKCQHCOYBEFDUAOPWFXUEZGVZUGTIOCSFGZRZUUDTMXMSWDKSRBFFXYWDYFNIZYPQJLIYLOZQMF");
    msg.acknowledge = 101U;
    msg.status = 89U;
    const signed char tmp_msg_0[] = {-65, 81, 93, 2, 8, 83, 115, -98, -83, -104, 91, 71, -127, 54, -58, 124, 41, -104, -109, 126, 58, 18, 1, 3, -90, 55, -82, -3, -119, -102, 125, -43, -36, -127, -9, 125, -119, -114, -23, 42, 82, -69, -64, 22, 0, -32, -93, -128, -77, 104, -123, 109, 117, -69, -11, -22, 8, 11, -125, 58, 0, -90, -52, 83, -27, 76, 36, 7, 66, -62, 116, -6, 0, -82, 69, -74, -124, -44, -128, 106, 46, 112, 114, 102, 105, 37, 109, -127, 9, -120, 119, 4, -51, -52, -35, 22, -21};
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
    msg.setTimeStamp(0.9669529656291032);
    msg.setSource(17023U);
    msg.setSourceEntity(179U);
    msg.setDestination(32069U);
    msg.setDestinationEntity(107U);
    msg.id = 203U;
    msg.range = 0.5853827128349224;

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
    msg.setTimeStamp(0.4205695258774107);
    msg.setSource(19620U);
    msg.setSourceEntity(158U);
    msg.setDestination(29254U);
    msg.setDestinationEntity(71U);
    msg.id = 40U;
    msg.range = 0.5685027289325532;

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
    msg.setTimeStamp(0.8838563041085485);
    msg.setSource(41970U);
    msg.setSourceEntity(63U);
    msg.setDestination(62271U);
    msg.setDestinationEntity(14U);
    msg.id = 129U;
    msg.range = 0.8647021115681338;

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
    msg.setTimeStamp(0.8583890759532453);
    msg.setSource(13323U);
    msg.setSourceEntity(76U);
    msg.setDestination(14723U);
    msg.setDestinationEntity(21U);
    msg.beacon.assign("ZJVTCWWGDRICJHSLOHVICHKPXPSNGEFQCVKRXJBSINIVMLIEQCGMLTYNSUWSHFMOAEJELVUNIGVUPWMOTYY");
    msg.lat = 0.6465924992322897;
    msg.lon = 0.03323617441644;
    msg.depth = 0.42568113573393307;
    msg.query_channel = 121U;
    msg.reply_channel = 99U;
    msg.transponder_delay = 96U;

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
    msg.setTimeStamp(0.0061459272632010675);
    msg.setSource(7549U);
    msg.setSourceEntity(104U);
    msg.setDestination(63013U);
    msg.setDestinationEntity(48U);
    msg.beacon.assign("EMGDZOVDSXPJRBFYOHWOARIYTEYUGXPKOBAKWEPXOGAFYFQGCQLIOTTCZSPVCEMAXGIQLNKGEEXBKQHMCNRIVVPAJTSSPHTUBZHFNOSOHXBKZUXJVNIVLPBZFEUMVSMNNQLXRWDKNECKBJRMASMEYIHVZYIYQFBMICGLLDTVNWJZPJXVKDWTGWGTNZMJYAFWLCLZPRQWHTIQRKF");
    msg.lat = 0.11877143147496994;
    msg.lon = 0.09485942380699297;
    msg.depth = 0.999308660449019;
    msg.query_channel = 166U;
    msg.reply_channel = 107U;
    msg.transponder_delay = 99U;

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
    msg.setTimeStamp(0.35105236642792625);
    msg.setSource(59894U);
    msg.setSourceEntity(108U);
    msg.setDestination(54800U);
    msg.setDestinationEntity(125U);
    msg.beacon.assign("PNOXPONNWGWYDZEQGXSLDNDTBWKSPOJUBKFQZNUCRKCYUXQHMLDAYIZHCQZVHMRQHNEWSHJLFJOXXBJVCGALDVTFGTKGEOBSMMJCMPAVUYEIFILZCRFGDFJACDGKYIIIQJDDBSTQYATRURNBRMEVBOZVRMAFKHFWOIGZAYSWCL");
    msg.lat = 0.8078029869206226;
    msg.lon = 0.32629208761684936;
    msg.depth = 0.06644487009215327;
    msg.query_channel = 140U;
    msg.reply_channel = 237U;
    msg.transponder_delay = 13U;

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
    msg.setTimeStamp(0.7441812342932937);
    msg.setSource(42083U);
    msg.setSourceEntity(126U);
    msg.setDestination(40314U);
    msg.setDestinationEntity(104U);
    msg.op = 205U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("YSZCUADOQUJWXVSPKYSFZCIJPSGKPHJMRAVWDGOYSNCYPUATDEKASLYQLHTJBCBLIXKEWFTUNYADJWFXGZMZWMPOBLEGKQKRCZBYOTMXHFIJGEOXYWRCQSOQCUKNBIBXRBWJIQHTTDRFMNVZNH");
    tmp_msg_0.lat = 0.059902342702545464;
    tmp_msg_0.lon = 0.035697011013126945;
    tmp_msg_0.depth = 0.9121737223639048;
    tmp_msg_0.query_channel = 90U;
    tmp_msg_0.reply_channel = 99U;
    tmp_msg_0.transponder_delay = 51U;
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
    msg.setTimeStamp(0.2253990625129757);
    msg.setSource(57420U);
    msg.setSourceEntity(194U);
    msg.setDestination(42579U);
    msg.setDestinationEntity(33U);
    msg.op = 148U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RQNBAEKGQULAHYTCSCQQMXJIGUCTUZDOXZNMBRFNERZDTCAEVYLPARSAJUWWCYISVRPRLFKEXOHEXYGFGKJKOISLYYWBLCFWJPRIPEKLQRMUNDILBIVXBTHNVPMIDNBQT");
    tmp_msg_0.lat = 0.95218605880707;
    tmp_msg_0.lon = 0.06636832910154189;
    tmp_msg_0.depth = 0.7400357830179867;
    tmp_msg_0.query_channel = 151U;
    tmp_msg_0.reply_channel = 192U;
    tmp_msg_0.transponder_delay = 4U;
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
    msg.setTimeStamp(0.6068951645347884);
    msg.setSource(5939U);
    msg.setSourceEntity(94U);
    msg.setDestination(57190U);
    msg.setDestinationEntity(58U);
    msg.op = 250U;

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
    msg.setTimeStamp(0.6260467285103427);
    msg.setSource(65230U);
    msg.setSourceEntity(80U);
    msg.setDestination(31733U);
    msg.setDestinationEntity(217U);
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("SROJBYZHFFKLHQSQOYDIVDKOFSULQHCPGYLMMMOKAEEBQAFTOVECWMDVVXZARXZCYQHUPOHHDLUMZBVJFQUJIFJGXUBIONEOQAHYVTFJAIJXIACGDRVKNRJWICWSNJAUDDKSNWPLEGNKAPYBRGYKXMRQIRTPMRUHIPFPZEBQGTSDEWLTWXLZNGTFSMTYVOUKSGXZZPTDXIMMRAAWRBBXJBNP");
    tmp_msg_0.predicate.assign("SMBFDZERHKFMEAKWCQQBQVGFDQVFBRQHGMESOOCNIKBTESPFELPCTPGJWNZCPXXTIWHBKVVKUUZKBDPSHKMEYIXLJAKJWSXCVZZWFYTURIPGDNRHZDXZLQJJLNDUNIURCILMMAUHQZUSCRECKRDAWOVRYNFLAJGVTQHDGSFAATYWPJCCTOPAFYUMWNUGPZXVOMVPJWJLSUSYYWSMDKLBYELBRQODG");
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
    msg.setTimeStamp(0.889777414763134);
    msg.setSource(18517U);
    msg.setSourceEntity(85U);
    msg.setDestination(24303U);
    msg.setDestinationEntity(56U);
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 54822U;
    tmp_msg_0.lat = 0.14051052906032868;
    tmp_msg_0.lon = 0.2258150195169788;
    tmp_msg_0.z = 0.9909302584145067;
    tmp_msg_0.z_units = 14U;
    tmp_msg_0.amplitude = 0.46321595216097566;
    tmp_msg_0.pitch = 0.08827418947894383;
    tmp_msg_0.speed = 0.8753404929108491;
    tmp_msg_0.speed_units = 47U;
    tmp_msg_0.custom.assign("AIVEUJLUMZTBJIWWKQBUOHVVYZHEPHJUKCGCAPYOSBASLDGYZRCUQNDEMABOPYKTSJGOZOFZFRFQLKDLJRUZIHGLISGTLPMWTYPUSHOGJXYKWQLIMFDQQFAVRETMHAMQNFONZJPBRRHCJAQRKMWZDBCFXEX");
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
    msg.setTimeStamp(0.924095093321719);
    msg.setSource(52720U);
    msg.setSourceEntity(88U);
    msg.setDestination(16986U);
    msg.setDestinationEntity(124U);
    IMC::PowerOperation tmp_msg_0;
    tmp_msg_0.op = 231U;
    tmp_msg_0.time_remain = 0.14236214642582845;
    tmp_msg_0.sched_time = 0.13352523259422377;
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
    msg.setTimeStamp(0.2014550066025892);
    msg.setSource(38480U);
    msg.setSourceEntity(213U);
    msg.setDestination(21690U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.39302764047363603;
    msg.lon = 0.012031812048640567;
    msg.depth = 0.5615705078970531;
    msg.sentence.assign("FXMMVENWBSYGLWSYOAKPRINJFOBYMGDALHGENAHRTZSNGPUPVMGAQMCHLKUOPLCWKTTBZIRGPHPIXQZUQBWHXNXSQVUYKQCRVBRIDVCQCNROWETUQXWEMLYZXGHBNSRHDCIMBZJVMJIKLCLKEJLDXCTVYGYXAO");
    msg.txtime = 0.3532988319759913;
    msg.modem_type.assign("HKAHQUIVAKTDXEQUBIWLWGINXZGQZXMPXZNPDLQEDKPFSEIVZMVVRYOANWXWCLWKBKCYIDLDANMGMOXBUTMENJCWROOVFAGBCLJGQOEZTABRGRUVHOHYIEZCLSHUZTUTYXOFCQYCNIATBJRVEDJQDFHBUMJGJYJWIOTXSKONTXLSRNAPUPDAZMDESTMBBPFNQEHGGWPYHRSPFCSJZILQKGJCWRJSYZPKWXTKFUP");
    msg.sys_src.assign("HRJIODNSVRGZXPNAQJRNFNSQOADPTTSGIPBVQMAEZVUGQOYMAPFVRAAMWKWDHDGMAGXVPBKAJCGZWMVNLWFFJLKEBHOZTUHETKXLVYLXCSWIRQFEDTTEWAZXRIKHYRTZBLE");
    msg.seq = 51569U;
    msg.sys_dst.assign("ETOVUJBCCAGYOCQEIBXULOHFETESDE");
    msg.flags = 32U;
    const signed char tmp_msg_0[] = {-27, -53, 112, 96, 16, -39, 19, -106, 74, -15, 58, -17, 13, 86, 8, 7, -93, -85, -107, -35, 68, -126, -96, -35, -24, -24, 112, 36, 50, 108, 69, -53, -117, -34, 102, -92, -107, 14, -70, 120, -124, 77, 120, -69, 8, -64, 38, -10, -88, 36, -126, -124, 60, 59, -5, 55, -25, -13, -7, 7, 89, -107, -5, -70, -53, -104, 26, 119, -33, -128, 98, -85, -116, -117, -124, -103, -107, -16, 121, 85, -3, 94, -2, -44, -88, 3, 30, 95, -85, -45, -56, 60, -99, 119, 83, 9, 17, 83, 88, 95, -110, 8, -100, -18, 59, -73, -65, 62, 49, 95, 27, 84, -109, -117, -58, -112, 87, -46, 40, 62, -11, 4, -93, 21, -14, 70, -35, -68, -61, 0, -62, -115, -33, 16, 78, 32, 85, -60, 126, 84, 32, -120, 122, -20, 7, 87, 86, 24, 39, -22, -31, -93, 6, 114, 34, 90, 13, 92, 70, -125, -62, -68, 70, -6, -25, -27, 98, 44, 89, 30, -54, 86, -78, 90, 42, -49, -106};
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
    msg.setTimeStamp(0.40303751891369444);
    msg.setSource(2874U);
    msg.setSourceEntity(167U);
    msg.setDestination(35738U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.8222612993983608;
    msg.lon = 0.4277574326226852;
    msg.depth = 0.8817953486807538;
    msg.sentence.assign("OCAQKAQGYLWJWTCJDETTEDZASXSOSNMOAHFDTDRCVXFOQSRKIVHZRMWYYGLUWJWYBOOEDCQFHLUHCMHNVIJEJKBSIGNQTPGGVRC");
    msg.txtime = 0.3715312636548963;
    msg.modem_type.assign("JTTJIRWPBZDIQRPRNVDZFGAGKLAJSJBBJVQOSXDUWSYSCUHEDELZLUJMPAPTUHQMLBSZHSRIMNDHGUYYEQLHPEYFOIEFPBTSWZVZKPDRMYNLTYUVRHGDZXCFISKBKAYCTGIKZKDQNWCJCNPXWTOOCBGBLJRFBMQKPSFYTXPXSGAGHDNIVZQXXMHOOYCHRTVCNCCINXEVQVWKTEQUKMGANDIOOVQXFLBXWYUMJAZUIWGOUWFLLKWMEFAEREVAO");
    msg.sys_src.assign("YVAJOEAFIZIKQ");
    msg.seq = 24374U;
    msg.sys_dst.assign("PYWPTGAYFXRUJLMUEZSEOAOQKQHRQGENMRYCEZZCOLJDBAEFKWLDWSEYLSHASOTLBGMENSAGKSGUXUDWUUGXKTAJVGVIFLDYDTVIGSBIPNVOPWEVXCFZ");
    msg.flags = 139U;
    const signed char tmp_msg_0[] = {11, 126, 52, 97, -50, 46, -101, -13, -92, -119, 126, -65, -114, 99, -22, -112, 2, -79, -40, -31, 16, 114, -64, 37, -43, -54, -29, 73, -45, 75, 34, 126, 64, 63, 46, 15, 95, -88, 10, -33, 49, 51, 114, -77, -59, -103, -59, 99, 67, -84, 59, 10, 85, 44, 109, -14, 103, 31, -93, 119, 2, 100, 50, -17, -103, -56, 28, -88, -106, -7, 83, -118, -85, 21, 79, -10, 53, -83, -13, 113, 102, 88, -76, 29, -101, -68, 81, -80, -53, -97, 77, -55, 88, 10, 28, 68, -4, -80, 90, -106, -91, 54, -58, 108, 111, 117, -43, 119, 116, -41, -90, -94, 124, -89, 39, -35, -73, -99, -126, -7, -76, -23, -79, 13, 116, 116, -2, -98, 36, -128, -17, 114, 116, -23, 52, 92, -24, -25, 0, 70, -123, 8, -98, 56, -39, -17, 72, -78, -96, 38, -102, -44, -127, -50, 51, 60, -54};
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
    msg.setTimeStamp(0.6826453509370334);
    msg.setSource(30595U);
    msg.setSourceEntity(176U);
    msg.setDestination(19672U);
    msg.setDestinationEntity(113U);
    msg.lat = 0.31552236633049224;
    msg.lon = 0.04616889349822273;
    msg.depth = 0.4365753333638477;
    msg.sentence.assign("MJXJODNWWVJYNXUBMHQAWMFDTBXLIKDIHAFQHUUXTGPCKUJDYSCGAVJNKVJYYDMXCZZZCNKJDGLUIQICPKRGWJNTYKIBLOLINBZIMSKQAKDWKUGYVIRHVLIAYBOEZXJDROAFPYPRMCECTBTUWOSJLHVWZBPSOFLRSPRLVGSPVZWOFVSNROTEUOBZEAKEDFBTAXTVMNQNFWARPLCU");
    msg.txtime = 0.7771523987107348;
    msg.modem_type.assign("CIIJACMKVYDBKAOZBSSOVYQRKEVVMWCKVUGETFGLZJOVTESYYMPUJDJYSOSMPCXYDKXNLCFNSINNXOFGZGQTKAUHJNYVTRNEKEPCGVHELQFNRADMUILRXMDP");
    msg.sys_src.assign("AXJOLDHCZWNZUYXRZDWJIFIBFSKOJGMNMHSVJYKBPQROQLLDXJNUZTJYPEAACZMFLKEMCQDSGCOEBAWOTWPIHHDRSJTPGXJEZMWOMECEQAPHIRVCYMBAYGKVSREMZIUOJXWBADURTUUINGNUCHFUOXSOWQFSDYXHGAKPLVWYTVBVVIFSPRSQHBNTMHAIUOCGZNNBMVZBCKXNTJQCGIFLVRZLLFNYRTTIQTQPEPYXVEKLXFKWGKYLQFBSH");
    msg.seq = 29652U;
    msg.sys_dst.assign("WYUPKHZEIQKZWJEUHSVTZHITDOBEUR");
    msg.flags = 98U;
    const signed char tmp_msg_0[] = {-15, -127, 0, -6, -8, 60, 31, -89, -93, -10, 74, 72, -106, 108, 24, -76, -42, -63, -16, -77, -27, -22, 24, -45, 41, -72, -39, 32, -76, 105, -95, -102, 117, -96, 65, -79, -63, -81, -38, 62, -26, 66, -111, -30, -103, -6, 69, 108, -46, -78, 29, -12, -102, 103, 33, -62, -36, -35, -91, -80, -112, 32, 27, -121, -94, -31, -93, 90, 46, -111, -25, 113, 122, -89, -60, -52, -89, -128, 72, -87, -78, -104, -76, -51, 61, 79, -49, -76, 22, 93, 58, -102, 83, 126, -45, -30, 36, 7, 98, 26, 89, -125, 53, 81, 68, -40, -109, 23, 7, -37, -109, -102, 32, 124, 17, -102, -63, -24, 50, -26, 92, -85, 6, 101, -30, 25, 98, 59, 126, -62, 13, 53, -50, -1, -26, -52, 26, -8, -23, 17, 82, 118, -25, -26, 24, -91, 8, -28, 6, 9, -112, 126, -7, 100, 59, -99, -76, 76, -86, -125, 22, 28, -34, 116, 121, -50, -109, -102, 25, -77, -97, 32, -101, -8, -78, -11, -46, 33};
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
    msg.setTimeStamp(0.26144376588400586);
    msg.setSource(38683U);
    msg.setSourceEntity(246U);
    msg.setDestination(18988U);
    msg.setDestinationEntity(52U);
    msg.op = 223U;
    msg.system.assign("IQJZUKFZCPDCGTCFZMNVMVGNVMGBIHKDZJTEBJCFISTIEUSALJROJMRPXEYVQUXABXELDMNPPVFNUHXJQWRGBNLGXKCEBDARIDYAOQJJBTXGSMAKNTFDEXE");
    msg.range = 0.4399716779082824;
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.446652123144905;
    tmp_msg_0.lon = 0.29332180021683407;
    tmp_msg_0.z = 0.9249672259532786;
    tmp_msg_0.z_units = 1U;
    tmp_msg_0.speed = 0.7265613345063595;
    tmp_msg_0.speed_units = 139U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.9517739878023934;
    tmp_tmp_msg_0_0.lon = 0.9706993734965793;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("BEWTJPEMGGGJQMRAHCLISKLWRBMCWKIYIRLBOZJBXXSTHAEFBCHPPFVMDSAYISPDZYMPTPCIYTRNEAMCQFKCANGZJKSMWXLLARGHJEKZYOJYJSRUHMZFLOFPGXQVAPQWXHLBVKOFVQJMWQZUYBNOGCDCIYQNDGXGUWIDEKUSNDNTHWJRDSBCOVEUVMLDVQWOK");
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
    msg.setTimeStamp(0.35866368689135275);
    msg.setSource(49170U);
    msg.setSourceEntity(0U);
    msg.setDestination(41738U);
    msg.setDestinationEntity(94U);
    msg.op = 58U;
    msg.system.assign("ETCRPVWAVNVDFHZGGOKZALZKGHGDEIXYIRBOVPOSYUPJGNFBMXWPWWJHUJRCHKCLRQWWPDMRXGDQPPEUUTMSFOGJTNVAGABFCDXBEQNRF");
    msg.range = 0.5670693863258804;
    IMC::CcuEvent tmp_msg_0;
    tmp_msg_0.type = 52U;
    tmp_msg_0.id.assign("XHQZBGVEDBJTZFMDSGLIWFXXRMVJHKEEENYHXNXNFPRVEHKIDFVQUNGOZWJTDSCOGMLUKACMQSMKFYAPECMHPVNVEDSYJLISCSAMKZAIJTPYRALGBLUXKJTORLUACHUFRUZHVFPAQYWNLFLHGKIOPUWBLWBFABOPQQFQQTITCVYCBRTNSYCXAKUOKBEXDYHSGTHGKIYWZBWSMOPEP");
    IMC::UamRxRange tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.seq = 49590U;
    tmp_tmp_msg_0_0.sys.assign("DOPLCREVAERPGNUBVETSIOFHYCSNJDZWFCIXTDYWRQSUMIDEAXBWFRMSLNRZFITHOYJVQG");
    tmp_tmp_msg_0_0.value = 0.3002987200621259;
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.3563780766915525);
    msg.setSource(63902U);
    msg.setSourceEntity(82U);
    msg.setDestination(50864U);
    msg.setDestinationEntity(181U);
    msg.op = 7U;
    msg.system.assign("QRHJGEOPIGBNCHOQYTXTXVSNQMKRPNUKPHISKCWKILUMXSBOKALGGVIHCJCNVLZHZLNLACWRMMPPIZSZWZYGIMMFPDSOYKBNNRWGEMEJOUTXKYRYGUSBSEIWOFLIZPIAFOCSPQJZEUXDFBUTJHFUDQMDEFDYVDLDCVFXDEYTWRAVBKNTUDAQY");
    msg.range = 0.9978960274028807;
    IMC::GetWorldCoordinates tmp_msg_0;
    tmp_msg_0.tracking = 223U;
    tmp_msg_0.lat = 0.7603633500356834;
    tmp_msg_0.lon = 0.5777634858007608;
    tmp_msg_0.x = 0.6997064430322124;
    tmp_msg_0.y = 0.5960262810319695;
    tmp_msg_0.z = 0.46579543676539625;
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
    msg.setTimeStamp(0.8942780556658866);
    msg.setSource(56295U);
    msg.setSourceEntity(240U);
    msg.setDestination(52994U);
    msg.setDestinationEntity(125U);

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
    msg.setTimeStamp(0.5258772047933881);
    msg.setSource(23746U);
    msg.setSourceEntity(108U);
    msg.setDestination(60207U);
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
    msg.setTimeStamp(0.8363573997963255);
    msg.setSource(20260U);
    msg.setSourceEntity(131U);
    msg.setDestination(49979U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.19690796831763968);
    msg.setSource(25895U);
    msg.setSourceEntity(85U);
    msg.setDestination(59305U);
    msg.setDestinationEntity(201U);
    msg.list.assign("POQJURLQQFIEKOEGMQMIYKQRRUAYHAOYJBRREFAVMVDUBHOOZWDNPEEHGMLUJCINUHTLYZJSIXMCXPVZ");

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
    msg.setTimeStamp(0.20157417982114445);
    msg.setSource(13598U);
    msg.setSourceEntity(28U);
    msg.setDestination(11646U);
    msg.setDestinationEntity(46U);
    msg.list.assign("PJKPTLCXGLCNVWXRHPCWUZOAYUMIIYGMXSSASGYYNSQAVUZZDCDVGFHKHKNRGJCITRITNHFSPRZRSDJVLJIXFUGWISQOQUWPGDDEECEFFWKMJIJZEROPKMMTLDIQEQUFQBFWACLYUVXVCMJICRWRLNDMFKJGHKBSNBYXQAOBOEBDTLFBDTKUPHPIEWOEXNROJBLYJVPEVTSHTYBMLVBKTOSRZZWH");

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
    msg.setTimeStamp(0.3424216613776323);
    msg.setSource(37382U);
    msg.setSourceEntity(51U);
    msg.setDestination(24928U);
    msg.setDestinationEntity(77U);
    msg.list.assign("SZYFZDXSYGQRZOMSQAUMLIGIALWPWHPBKBEWLSYKFKUWCBDSMAURPFEANQTRHVEYLDIGDCXYPAXOKQNHBBKMTJYUAGRTTXSNESRNODDGMGLBCXVVGNKXOEOAQOVYOJSDFEUGZACAEZQHGYPBTYETFTOIBDUJHHJQQPISIKRWMVZMXNPJPAVCCXLMUJRTBVWNLZBPZIKKVUKVFHF");

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
    msg.setTimeStamp(0.960821778383918);
    msg.setSource(55271U);
    msg.setSourceEntity(92U);
    msg.setDestination(53878U);
    msg.setDestinationEntity(162U);
    msg.peer.assign("LKLRSRZYAZDBQXKCDFFZTWMIAKXWAXHMDGRXMTWOXZOBDPTOHAIJLTEEJRGGJFJUXGXFNYMCNQPXIGZJECQAADUVVCDFSEWPEMHDFQNKETKQSNTPGNSJARBMYVWLEFDSMRKOYHUKCCUJMUQKNRETQCMPSSPPWFYOCUBAGJOIWEUHWPFXASGFMLZVVLHNTHQOYWDOAXHUWTBLYJSI");
    msg.rssi = 0.6947903302842826;
    msg.integrity = 44849U;

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
    msg.setTimeStamp(0.23652792471679251);
    msg.setSource(59687U);
    msg.setSourceEntity(97U);
    msg.setDestination(37363U);
    msg.setDestinationEntity(139U);
    msg.peer.assign("SFOQZRAXIUGBMUIJIYWQSODDYBYLBGBQNLJAWRHGRWGSPLFDXGPZCCIHOTWHUBTHMNXBMHURLDQTJKWVJKXRQQGJZROACVQKFQFFDLTRENDCSJEPWNXJRQTUIJOHXCFXPNFDEVFJKOHUSXKSZKIJWDBGPUMVTVWQYNOTYMEHWDVLAKCKYAZSRXSPYPEMALGLZHDACAIEGPYAEPZTYB");
    msg.rssi = 0.635742784217847;
    msg.integrity = 55697U;

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
    msg.setTimeStamp(0.4703228424187763);
    msg.setSource(21539U);
    msg.setSourceEntity(19U);
    msg.setDestination(40227U);
    msg.setDestinationEntity(143U);
    msg.peer.assign("IVAIZNLMXIXXHKVNHPBOWTTVFDRLHYLEPWHRTJFUONKEGOLXABNDTJMISGZNEUFUVQMYQGIYXPINLESUYQFSBAJPGMAQLUDOZVBMLWFUOWTY");
    msg.rssi = 0.66773104123942;
    msg.integrity = 33405U;

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
    msg.setTimeStamp(0.9591403545880003);
    msg.setSource(22854U);
    msg.setSourceEntity(101U);
    msg.setDestination(59784U);
    msg.setDestinationEntity(95U);
    msg.req_id = 45004U;
    msg.destination.assign("GYAEXIBIJGZHWJOIONLIOIUHRFSKRWMCGUZFSDEOHCCUYEXIPFPETSQVOSHYZNCFLDBWBIZJJKGMMYSPFOVBBXVNTPEDTDYRQOPGRRAFEGQULQWEMGJLNKOVASRJHVMWMDRLCXZKATUWHEGCXFFVPURCOQ");
    msg.timeout = 0.6331676761897391;
    msg.range = 0.2739064125639945;
    msg.type = 74U;
    IMC::VehicleOperationalLimits tmp_msg_0;
    tmp_msg_0.op = 66U;
    tmp_msg_0.speed_min = 0.891015572743557;
    tmp_msg_0.speed_max = 0.052154211776207826;
    tmp_msg_0.long_accel = 0.3273768875148185;
    tmp_msg_0.alt_max_msl = 0.24111213499174133;
    tmp_msg_0.dive_fraction_max = 0.08358875252704201;
    tmp_msg_0.climb_fraction_max = 0.005464039196918957;
    tmp_msg_0.bank_max = 0.9243861306248816;
    tmp_msg_0.p_max = 0.67008894158103;
    tmp_msg_0.pitch_min = 0.9314076526312954;
    tmp_msg_0.pitch_max = 0.9725098407265499;
    tmp_msg_0.q_max = 0.440015568868387;
    tmp_msg_0.g_min = 0.8871300287037883;
    tmp_msg_0.g_max = 0.8014773273125197;
    tmp_msg_0.g_lat_max = 0.21239804280757202;
    tmp_msg_0.rpm_min = 0.7779258119977313;
    tmp_msg_0.rpm_max = 0.13748130193029573;
    tmp_msg_0.rpm_rate_max = 0.93921309103728;
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
    msg.setTimeStamp(0.5840240183414191);
    msg.setSource(7231U);
    msg.setSourceEntity(185U);
    msg.setDestination(5787U);
    msg.setDestinationEntity(40U);
    msg.req_id = 45806U;
    msg.destination.assign("JFPRXVJQDCNJTGMCAYDVEBDREJOHVQWPMFIORJZBZLJBBFCMZTXTBXVDOECYZNITLCYWGAGUKHUCQGATLRUVGUMYPXMQLHWSFOUKPJXRRHLSICRHIJBDIECSSOOLV");
    msg.timeout = 0.8598327553920238;
    msg.range = 0.344745142558739;
    msg.type = 83U;
    IMC::CurrentProfile tmp_msg_0;
    tmp_msg_0.nbeams = 93U;
    tmp_msg_0.ncells = 146U;
    tmp_msg_0.coord_sys = 252U;
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
    msg.setTimeStamp(0.5702605194384279);
    msg.setSource(17187U);
    msg.setSourceEntity(60U);
    msg.setDestination(4053U);
    msg.setDestinationEntity(74U);
    msg.req_id = 59000U;
    msg.destination.assign("RVJKDTESYNZUWEBHBJLPULFACZFRKYGTMYFZGFGKJSBOXMAQPREONIWAVPDFLNYJHXJDNTPTWYXDLMSQHGKMWHONCMXICRDRZWBKKOMVDUILEXQWFUBPQFAFLXFRVQBDUKYKSRVXNZQCOMZLTYJJHCOMCXSGEUECVAPRQAGYTOBBTEAVDDTSXQEGRIIJKCAAHJYZTPIJTWPLUCOFWUNVSIGGEQZSUNSWIQDIZHMMONORBSBK");
    msg.timeout = 0.09933610051112207;
    msg.range = 0.9731072678080807;
    msg.type = 253U;
    IMC::EmergencyControlState tmp_msg_0;
    tmp_msg_0.state = 206U;
    tmp_msg_0.plan_id.assign("CWXVTBOMKYXDJBOARRCJDUOUYLSFMWQYFUYPOKEIHXAPVZIEVXBNARVMMANLJLRZIGMDGLOSYAFXQDAJPWRCEXNQJCNWFWHOTEXFCJELGMDJPZXBYFHOYYSLVCGPCRDLAIQDWQPSYKSGASBAPWGUVZDTNRMFSURTNHECTXPBBNQIWIHSXTUEARLCSQUEPVVKLCTDWQIO");
    tmp_msg_0.comm_level = 176U;
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
    msg.setTimeStamp(0.478971117803185);
    msg.setSource(3248U);
    msg.setSourceEntity(15U);
    msg.setDestination(33734U);
    msg.setDestinationEntity(136U);
    msg.req_id = 29370U;
    msg.type = 12U;
    msg.status = 92U;
    msg.info.assign("VYXLOKLNMTVQEUXCJRAPTTFMFPHODJMIRQRLF");
    msg.range = 0.24892270597626887;

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
    msg.setTimeStamp(0.6762249660795376);
    msg.setSource(23431U);
    msg.setSourceEntity(86U);
    msg.setDestination(46508U);
    msg.setDestinationEntity(188U);
    msg.req_id = 32835U;
    msg.type = 115U;
    msg.status = 47U;
    msg.info.assign("PYJHGPGSVDFQDFEQORDWZFVFMZSILNKUUBXF");
    msg.range = 0.3348955420680706;

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
    msg.setTimeStamp(0.6811918214949475);
    msg.setSource(63513U);
    msg.setSourceEntity(56U);
    msg.setDestination(58869U);
    msg.setDestinationEntity(242U);
    msg.req_id = 21509U;
    msg.type = 180U;
    msg.status = 236U;
    msg.info.assign("VRIETEZGPWYDQTNYUZFUICKPLNXSIMUVKAGDSOYUCSPKVGQYYEBJFKOAJMUVCHSNNNJQWFMWQVVSSVYAERTHJUQGROXIWFBCULRWZEPFXHAJMOSOJOEZHADDHRCLUWLVPTZLTRRYSWACKTBNL");
    msg.range = 0.6605710291998926;

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
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.781258412068879);
    msg.setSource(1888U);
    msg.setSourceEntity(146U);
    msg.setDestination(7867U);
    msg.setDestinationEntity(236U);
    msg.system.assign("WHNLGZYIVZPGIANWFLWAEERJKBUCKIORCORQLTTMCYCMEIDTVISCNMPNVXFQZIIVCTJHOSBPVJVXYPYUOMLHRBZGGPFUWVQUNDRRMMTYLQHHXALDDCUB");
    msg.op = 238U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.6066107608199516);
    msg.setSource(34317U);
    msg.setSourceEntity(179U);
    msg.setDestination(22641U);
    msg.setDestinationEntity(61U);
    msg.system.assign("VPTLZPSANPBFJPEDMOOBCULWPTHMBNQYSGXXXDTZTXZKBQIYNKWRNJQQDHMK");
    msg.op = 160U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRelease msg;
    msg.setTimeStamp(0.6105501767180423);
    msg.setSource(37744U);
    msg.setSourceEntity(118U);
    msg.setDestination(65151U);
    msg.setDestinationEntity(209U);
    msg.system.assign("QHTOCJKLQVBJBYHXNEURSDWQWGYCZQDVXNIOYXPNKJRMWHLFVRHRMCKNIGECQDGMFUSEHMEUJDIIKPJUFSTEYEBMGWASHUDZCXZYEBPOOCKNZGXCW");
    msg.op = 137U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRelease #2", msg == *msg_d);
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
    msg.setTimeStamp(0.6010400370213733);
    msg.setSource(55557U);
    msg.setSourceEntity(160U);
    msg.setDestination(56538U);
    msg.setDestinationEntity(129U);
    msg.value = -31784;

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
    msg.setTimeStamp(0.037925822548229404);
    msg.setSource(14988U);
    msg.setSourceEntity(238U);
    msg.setDestination(21450U);
    msg.setDestinationEntity(222U);
    msg.value = 27597;

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
    msg.setTimeStamp(0.36866730408984416);
    msg.setSource(3487U);
    msg.setSourceEntity(46U);
    msg.setDestination(18679U);
    msg.setDestinationEntity(182U);
    msg.value = -32585;

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
    msg.setTimeStamp(0.5692692140945168);
    msg.setSource(13477U);
    msg.setSourceEntity(39U);
    msg.setDestination(22116U);
    msg.setDestinationEntity(96U);
    msg.value = 0.8300770121006921;

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
    msg.setTimeStamp(0.26361252463770957);
    msg.setSource(21156U);
    msg.setSourceEntity(196U);
    msg.setDestination(46726U);
    msg.setDestinationEntity(134U);
    msg.value = 0.9584168258635999;

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
    msg.setTimeStamp(0.9842923719541885);
    msg.setSource(36810U);
    msg.setSourceEntity(222U);
    msg.setDestination(45844U);
    msg.setDestinationEntity(54U);
    msg.value = 0.6319778720511646;

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
    msg.setTimeStamp(0.9620430601421873);
    msg.setSource(62308U);
    msg.setSourceEntity(180U);
    msg.setDestination(34700U);
    msg.setDestinationEntity(27U);
    msg.value = 0.8869703792533669;

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
    msg.setTimeStamp(0.09559224071648831);
    msg.setSource(50404U);
    msg.setSourceEntity(169U);
    msg.setDestination(36385U);
    msg.setDestinationEntity(121U);
    msg.value = 0.3420342281927623;

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
    msg.setTimeStamp(0.044522524965640575);
    msg.setSource(6608U);
    msg.setSourceEntity(163U);
    msg.setDestination(3797U);
    msg.setDestinationEntity(225U);
    msg.value = 0.45186876147689425;

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
    msg.setTimeStamp(0.6791413234899496);
    msg.setSource(40678U);
    msg.setSourceEntity(245U);
    msg.setDestination(15385U);
    msg.setDestinationEntity(24U);
    msg.validity = 37343U;
    msg.type = 191U;
    msg.utc_year = 37395U;
    msg.utc_month = 175U;
    msg.utc_day = 221U;
    msg.utc_time = 0.591489000443561;
    msg.lat = 0.4550544286822379;
    msg.lon = 0.978191645980683;
    msg.height = 0.20303685658830295;
    msg.satellites = 153U;
    msg.cog = 0.8142016032128158;
    msg.sog = 0.3287662524607212;
    msg.hdop = 0.2896685461745375;
    msg.vdop = 0.16916681374060616;
    msg.hacc = 0.4732967217584121;
    msg.vacc = 0.16567362362927351;

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
    msg.setTimeStamp(0.42585101637446443);
    msg.setSource(45259U);
    msg.setSourceEntity(167U);
    msg.setDestination(21922U);
    msg.setDestinationEntity(236U);
    msg.validity = 26251U;
    msg.type = 28U;
    msg.utc_year = 57236U;
    msg.utc_month = 65U;
    msg.utc_day = 197U;
    msg.utc_time = 0.048301672913356186;
    msg.lat = 0.69294189023213;
    msg.lon = 0.09454626699549395;
    msg.height = 0.14861184809027872;
    msg.satellites = 137U;
    msg.cog = 0.9279994955446912;
    msg.sog = 0.6154565076534827;
    msg.hdop = 0.34003877997370424;
    msg.vdop = 0.40491649546256836;
    msg.hacc = 0.7874144650422481;
    msg.vacc = 0.012264628120405074;

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
    msg.setTimeStamp(0.7128242628003948);
    msg.setSource(28756U);
    msg.setSourceEntity(48U);
    msg.setDestination(12424U);
    msg.setDestinationEntity(133U);
    msg.validity = 45107U;
    msg.type = 90U;
    msg.utc_year = 912U;
    msg.utc_month = 167U;
    msg.utc_day = 75U;
    msg.utc_time = 0.4657080438876954;
    msg.lat = 0.358919173069975;
    msg.lon = 0.26242972907838247;
    msg.height = 0.2687109245366628;
    msg.satellites = 165U;
    msg.cog = 0.17143025849099924;
    msg.sog = 0.5161476347384962;
    msg.hdop = 0.9244572385205901;
    msg.vdop = 0.032367532661440546;
    msg.hacc = 0.8029917315249827;
    msg.vacc = 0.11379498160381496;

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
    msg.setTimeStamp(0.5928020332756719);
    msg.setSource(8946U);
    msg.setSourceEntity(155U);
    msg.setDestination(60179U);
    msg.setDestinationEntity(219U);
    msg.time = 0.5945722017600931;
    msg.phi = 0.06746067370843367;
    msg.theta = 0.6155141244180149;
    msg.psi = 0.7992285299709893;
    msg.psi_magnetic = 0.9195772035431977;

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
    msg.setTimeStamp(0.8505382621575508);
    msg.setSource(30901U);
    msg.setSourceEntity(237U);
    msg.setDestination(40354U);
    msg.setDestinationEntity(220U);
    msg.time = 0.05372181490783989;
    msg.phi = 0.23982722219976038;
    msg.theta = 0.11982061996084448;
    msg.psi = 0.3713737037609318;
    msg.psi_magnetic = 0.8267937322133931;

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
    msg.setTimeStamp(0.8174002612216036);
    msg.setSource(2082U);
    msg.setSourceEntity(34U);
    msg.setDestination(31333U);
    msg.setDestinationEntity(34U);
    msg.time = 0.25351375009649857;
    msg.phi = 0.10585722466803205;
    msg.theta = 0.7136694313436064;
    msg.psi = 0.4636589665481742;
    msg.psi_magnetic = 0.5664020974785077;

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
    msg.setTimeStamp(0.9062512302843451);
    msg.setSource(15315U);
    msg.setSourceEntity(69U);
    msg.setDestination(2198U);
    msg.setDestinationEntity(88U);
    msg.time = 0.13369960710209006;
    msg.x = 0.039841211047761615;
    msg.y = 0.691062664058234;
    msg.z = 0.1749450801947351;
    msg.timestep = 0.26993299131024195;

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
    msg.setTimeStamp(0.2917126670758744);
    msg.setSource(56653U);
    msg.setSourceEntity(72U);
    msg.setDestination(64249U);
    msg.setDestinationEntity(83U);
    msg.time = 0.17264413053235295;
    msg.x = 0.9858364969925727;
    msg.y = 0.6512922769769494;
    msg.z = 0.5170251385617188;
    msg.timestep = 0.9605652948859802;

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
    msg.setTimeStamp(0.142970841407132);
    msg.setSource(21252U);
    msg.setSourceEntity(49U);
    msg.setDestination(39273U);
    msg.setDestinationEntity(121U);
    msg.time = 0.3015712856276074;
    msg.x = 0.6720167463712539;
    msg.y = 0.4119994258785111;
    msg.z = 0.10802614796259846;
    msg.timestep = 0.06874833865447882;

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
    msg.setTimeStamp(0.5979401872091871);
    msg.setSource(59166U);
    msg.setSourceEntity(211U);
    msg.setDestination(15571U);
    msg.setDestinationEntity(128U);
    msg.time = 0.8258700236808004;
    msg.x = 0.22646066482782723;
    msg.y = 0.6728788174702822;
    msg.z = 0.08591014715144585;

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
    msg.setTimeStamp(0.31540456290990526);
    msg.setSource(38259U);
    msg.setSourceEntity(95U);
    msg.setDestination(10175U);
    msg.setDestinationEntity(235U);
    msg.time = 0.2681135283966123;
    msg.x = 0.24069396894222017;
    msg.y = 0.14117999675043513;
    msg.z = 0.7754369612554025;

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
    msg.setTimeStamp(0.27385805708495303);
    msg.setSource(20726U);
    msg.setSourceEntity(124U);
    msg.setDestination(35233U);
    msg.setDestinationEntity(135U);
    msg.time = 0.9382894808154493;
    msg.x = 0.1480764875154571;
    msg.y = 0.5497534556604855;
    msg.z = 0.7018265064642757;

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
    msg.setTimeStamp(0.3325610331880354);
    msg.setSource(56890U);
    msg.setSourceEntity(127U);
    msg.setDestination(46631U);
    msg.setDestinationEntity(146U);
    msg.time = 0.4859746176288562;
    msg.x = 0.7392667875486215;
    msg.y = 0.033699069617473154;
    msg.z = 0.9518707907825138;

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
    msg.setTimeStamp(0.6229741032072859);
    msg.setSource(37517U);
    msg.setSourceEntity(68U);
    msg.setDestination(894U);
    msg.setDestinationEntity(52U);
    msg.time = 0.8735531225272204;
    msg.x = 0.16723137991880088;
    msg.y = 0.7194103508920142;
    msg.z = 0.8817136897977373;

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
    msg.setTimeStamp(0.8352440945334748);
    msg.setSource(5635U);
    msg.setSourceEntity(48U);
    msg.setDestination(59745U);
    msg.setDestinationEntity(2U);
    msg.time = 0.6804527121247176;
    msg.x = 0.14071085879698342;
    msg.y = 0.5269388601964741;
    msg.z = 0.46114947661320016;

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
    msg.setTimeStamp(0.8905256029570762);
    msg.setSource(22932U);
    msg.setSourceEntity(188U);
    msg.setDestination(61993U);
    msg.setDestinationEntity(89U);
    msg.time = 0.058415997183806745;
    msg.x = 0.3831877265839081;
    msg.y = 0.3061678534946263;
    msg.z = 0.015172160820649094;

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
    msg.setTimeStamp(0.4638176491839562);
    msg.setSource(21365U);
    msg.setSourceEntity(149U);
    msg.setDestination(47229U);
    msg.setDestinationEntity(69U);
    msg.time = 0.34943447405406836;
    msg.x = 0.4749545351875524;
    msg.y = 0.3334097474744271;
    msg.z = 0.8188097939077601;

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
    msg.setTimeStamp(0.23799697277678922);
    msg.setSource(6040U);
    msg.setSourceEntity(99U);
    msg.setDestination(27219U);
    msg.setDestinationEntity(241U);
    msg.time = 0.7893805590152715;
    msg.x = 0.9088382189495691;
    msg.y = 0.15746169316557435;
    msg.z = 0.0489760458000329;

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
    msg.setTimeStamp(0.7182307817986997);
    msg.setSource(25708U);
    msg.setSourceEntity(50U);
    msg.setDestination(1079U);
    msg.setDestinationEntity(98U);
    msg.validity = 208U;
    msg.x = 0.12668992927706413;
    msg.y = 0.1889427887274696;
    msg.z = 0.5832337166420347;

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
    msg.setTimeStamp(0.2365258016518068);
    msg.setSource(4536U);
    msg.setSourceEntity(24U);
    msg.setDestination(11545U);
    msg.setDestinationEntity(4U);
    msg.validity = 89U;
    msg.x = 0.9191655837630218;
    msg.y = 0.9122224561305461;
    msg.z = 0.9785398695742271;

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
    msg.setTimeStamp(0.04888876514378171);
    msg.setSource(28452U);
    msg.setSourceEntity(65U);
    msg.setDestination(26758U);
    msg.setDestinationEntity(121U);
    msg.validity = 211U;
    msg.x = 0.007756111118196296;
    msg.y = 0.4823258224499195;
    msg.z = 0.9216898440745069;

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
    msg.setTimeStamp(0.9904351959731241);
    msg.setSource(61943U);
    msg.setSourceEntity(26U);
    msg.setDestination(4257U);
    msg.setDestinationEntity(84U);
    msg.validity = 48U;
    msg.x = 0.5229617029117758;
    msg.y = 0.42185333354727594;
    msg.z = 0.015746585359552423;

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
    msg.setTimeStamp(0.9348328303557614);
    msg.setSource(14906U);
    msg.setSourceEntity(85U);
    msg.setDestination(24003U);
    msg.setDestinationEntity(4U);
    msg.validity = 33U;
    msg.x = 0.07904056766206402;
    msg.y = 0.6958669704481377;
    msg.z = 0.1343916244666672;

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
    msg.setTimeStamp(0.2958849965802265);
    msg.setSource(15328U);
    msg.setSourceEntity(143U);
    msg.setDestination(41500U);
    msg.setDestinationEntity(70U);
    msg.validity = 17U;
    msg.x = 0.9914466464972488;
    msg.y = 0.0073940197862699675;
    msg.z = 0.5958247167768674;

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
    msg.setTimeStamp(0.49187578496617357);
    msg.setSource(56627U);
    msg.setSourceEntity(53U);
    msg.setDestination(34936U);
    msg.setDestinationEntity(128U);
    msg.time = 0.4560278882321118;
    msg.x = 0.3152865853752699;
    msg.y = 0.35690182892310396;
    msg.z = 0.5011225889597042;

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
    msg.setTimeStamp(0.9679812827656066);
    msg.setSource(20227U);
    msg.setSourceEntity(241U);
    msg.setDestination(10162U);
    msg.setDestinationEntity(130U);
    msg.time = 0.9111806712754683;
    msg.x = 0.8409332436539317;
    msg.y = 0.6951128290783081;
    msg.z = 0.053749130497948605;

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
    msg.setTimeStamp(0.7971086060744914);
    msg.setSource(28101U);
    msg.setSourceEntity(18U);
    msg.setDestination(56913U);
    msg.setDestinationEntity(224U);
    msg.time = 0.16929801424502755;
    msg.x = 0.07384396639974466;
    msg.y = 0.8933458915599863;
    msg.z = 0.7576087766138615;

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
    msg.setTimeStamp(0.6004549773275089);
    msg.setSource(237U);
    msg.setSourceEntity(94U);
    msg.setDestination(26051U);
    msg.setDestinationEntity(95U);
    msg.validity = 188U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.5454718476747278;
    tmp_msg_0.y = 0.3994006544580042;
    tmp_msg_0.z = 0.018121777115042592;
    tmp_msg_0.phi = 0.07685355889884182;
    tmp_msg_0.theta = 0.6148015227512263;
    tmp_msg_0.psi = 0.8424055467095017;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.7414883036668334;

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
    msg.setTimeStamp(0.06750956828090282);
    msg.setSource(13210U);
    msg.setSourceEntity(244U);
    msg.setDestination(32968U);
    msg.setDestinationEntity(19U);
    msg.validity = 155U;
    msg.value = 0.5020790685224674;

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
    msg.setTimeStamp(0.16665924443046598);
    msg.setSource(59353U);
    msg.setSourceEntity(228U);
    msg.setDestination(24101U);
    msg.setDestinationEntity(180U);
    msg.validity = 86U;
    msg.value = 0.7950886885394255;

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
    msg.setTimeStamp(0.4086650255433568);
    msg.setSource(23607U);
    msg.setSourceEntity(63U);
    msg.setDestination(17569U);
    msg.setDestinationEntity(28U);
    msg.value = 0.24192541581643356;

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
    msg.setTimeStamp(0.7989671850583169);
    msg.setSource(34851U);
    msg.setSourceEntity(179U);
    msg.setDestination(58392U);
    msg.setDestinationEntity(35U);
    msg.value = 0.9661192849619894;

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
    msg.setTimeStamp(0.7467004324128514);
    msg.setSource(57880U);
    msg.setSourceEntity(218U);
    msg.setDestination(34236U);
    msg.setDestinationEntity(59U);
    msg.value = 0.7493653187816147;

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
    msg.setTimeStamp(0.7124425223199777);
    msg.setSource(10205U);
    msg.setSourceEntity(167U);
    msg.setDestination(51495U);
    msg.setDestinationEntity(61U);
    msg.value = 0.616747328467465;

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
    msg.setTimeStamp(0.9511421594904209);
    msg.setSource(43331U);
    msg.setSourceEntity(56U);
    msg.setDestination(62365U);
    msg.setDestinationEntity(141U);
    msg.value = 0.5108469846914598;

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
    msg.setTimeStamp(0.05564561792388922);
    msg.setSource(9277U);
    msg.setSourceEntity(111U);
    msg.setDestination(47788U);
    msg.setDestinationEntity(239U);
    msg.value = 0.5380583261868064;

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
    msg.setTimeStamp(0.9620656987824344);
    msg.setSource(31259U);
    msg.setSourceEntity(39U);
    msg.setDestination(5677U);
    msg.setDestinationEntity(74U);
    msg.value = 0.8009049606606026;

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
    msg.setTimeStamp(0.8381388985018804);
    msg.setSource(53750U);
    msg.setSourceEntity(174U);
    msg.setDestination(63797U);
    msg.setDestinationEntity(109U);
    msg.value = 0.10890121254201057;

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
    msg.setTimeStamp(0.5607035865087526);
    msg.setSource(38526U);
    msg.setSourceEntity(100U);
    msg.setDestination(28078U);
    msg.setDestinationEntity(253U);
    msg.value = 0.9000169826961416;

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
    msg.setTimeStamp(0.6285904713074876);
    msg.setSource(56415U);
    msg.setSourceEntity(239U);
    msg.setDestination(33954U);
    msg.setDestinationEntity(126U);
    msg.value = 0.7708650863146888;

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
    msg.setTimeStamp(0.2881393977419585);
    msg.setSource(61627U);
    msg.setSourceEntity(188U);
    msg.setDestination(8395U);
    msg.setDestinationEntity(140U);
    msg.value = 0.873382627872442;

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
    msg.setTimeStamp(0.6673195703612693);
    msg.setSource(53351U);
    msg.setSourceEntity(22U);
    msg.setDestination(747U);
    msg.setDestinationEntity(19U);
    msg.value = 0.533501402118875;

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
    msg.setTimeStamp(0.29992507025325676);
    msg.setSource(65054U);
    msg.setSourceEntity(192U);
    msg.setDestination(24075U);
    msg.setDestinationEntity(205U);
    msg.value = 0.45575472182677956;

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
    msg.setTimeStamp(0.8932532854122964);
    msg.setSource(14455U);
    msg.setSourceEntity(98U);
    msg.setDestination(7391U);
    msg.setDestinationEntity(40U);
    msg.value = 0.7910133641169553;

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
    msg.setTimeStamp(0.4222787588724837);
    msg.setSource(58850U);
    msg.setSourceEntity(245U);
    msg.setDestination(1687U);
    msg.setDestinationEntity(224U);
    msg.value = 0.5783198746195156;

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
    msg.setTimeStamp(0.3813982117079464);
    msg.setSource(2602U);
    msg.setSourceEntity(234U);
    msg.setDestination(11100U);
    msg.setDestinationEntity(34U);
    msg.value = 0.8823094599948652;

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
    msg.setTimeStamp(0.14804057596263853);
    msg.setSource(30135U);
    msg.setSourceEntity(36U);
    msg.setDestination(50663U);
    msg.setDestinationEntity(78U);
    msg.value = 0.3871460967757171;

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
    msg.setTimeStamp(0.9701495139697858);
    msg.setSource(16339U);
    msg.setSourceEntity(23U);
    msg.setDestination(63851U);
    msg.setDestinationEntity(34U);
    msg.value = 0.01882789422319875;

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
    msg.setTimeStamp(0.569632393772642);
    msg.setSource(51777U);
    msg.setSourceEntity(220U);
    msg.setDestination(35159U);
    msg.setDestinationEntity(65U);
    msg.value = 0.7997913310170193;

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
    msg.setTimeStamp(0.05376492038182201);
    msg.setSource(39816U);
    msg.setSourceEntity(94U);
    msg.setDestination(27023U);
    msg.setDestinationEntity(233U);
    msg.value = 0.5165520940878837;

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
    msg.setTimeStamp(0.42052343994612484);
    msg.setSource(42825U);
    msg.setSourceEntity(205U);
    msg.setDestination(64940U);
    msg.setDestinationEntity(248U);
    msg.value = 0.9168926852777133;

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
    msg.setTimeStamp(0.9553663866935302);
    msg.setSource(27386U);
    msg.setSourceEntity(203U);
    msg.setDestination(10057U);
    msg.setDestinationEntity(229U);
    msg.value = 0.5320263779727609;

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
    msg.setTimeStamp(0.8418147915981559);
    msg.setSource(3044U);
    msg.setSourceEntity(238U);
    msg.setDestination(7316U);
    msg.setDestinationEntity(142U);
    msg.value = 0.7382900568066433;

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
    msg.setTimeStamp(0.559212237240552);
    msg.setSource(37949U);
    msg.setSourceEntity(201U);
    msg.setDestination(6726U);
    msg.setDestinationEntity(17U);
    msg.value = 0.4278782550151451;

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
    msg.setTimeStamp(0.40183934632875895);
    msg.setSource(19080U);
    msg.setSourceEntity(246U);
    msg.setDestination(39068U);
    msg.setDestinationEntity(23U);
    msg.direction = 0.7869444688908432;
    msg.speed = 0.5689364065928002;
    msg.turbulence = 0.5506261290608101;

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
    msg.setTimeStamp(0.16853702507225843);
    msg.setSource(31959U);
    msg.setSourceEntity(11U);
    msg.setDestination(61184U);
    msg.setDestinationEntity(43U);
    msg.direction = 0.42460111202250284;
    msg.speed = 0.13282753585971618;
    msg.turbulence = 0.8544411638126553;

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
    msg.setTimeStamp(0.11179129996634929);
    msg.setSource(62012U);
    msg.setSourceEntity(226U);
    msg.setDestination(30106U);
    msg.setDestinationEntity(38U);
    msg.direction = 0.027444867086357405;
    msg.speed = 0.5084891172631342;
    msg.turbulence = 0.6120011660483564;

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
    msg.setTimeStamp(0.4211878576678162);
    msg.setSource(54373U);
    msg.setSourceEntity(250U);
    msg.setDestination(4398U);
    msg.setDestinationEntity(80U);
    msg.value = 0.25958463907648666;

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
    msg.setTimeStamp(0.18640479176410374);
    msg.setSource(18434U);
    msg.setSourceEntity(126U);
    msg.setDestination(46184U);
    msg.setDestinationEntity(228U);
    msg.value = 0.5232534833214786;

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
    msg.setTimeStamp(0.9388578168666964);
    msg.setSource(30845U);
    msg.setSourceEntity(201U);
    msg.setDestination(25975U);
    msg.setDestinationEntity(155U);
    msg.value = 0.5878033663723262;

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
    msg.setTimeStamp(0.05291730278335893);
    msg.setSource(56201U);
    msg.setSourceEntity(38U);
    msg.setDestination(24346U);
    msg.setDestinationEntity(83U);
    msg.value.assign("LFKWHUJODSODDLGCNBBDRTWNGUEJOQUYXFIHRERESMKAJRBEXYGMRGOWBCALFNSZFHHMAVPFZMNILPUKCDPVQGDFTSWWQAQHYOTAVJBFYSSNTZWZEHJECCXNLHDXYTWRJBYAFKKVZVTYNZHAXXXMVYRSEWOCMVVYJIKBPPGUMRQBHCOXWGABPQ");

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
    msg.setTimeStamp(0.2812618875012347);
    msg.setSource(16989U);
    msg.setSourceEntity(228U);
    msg.setDestination(2464U);
    msg.setDestinationEntity(171U);
    msg.value.assign("XJLLZXXZPHVBUGHJPJYAKCSOVHLIFDKYGEUJCPUSGLXYNGDZRVJMIJVVH");

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
    msg.setTimeStamp(0.1902163681879946);
    msg.setSource(12160U);
    msg.setSourceEntity(239U);
    msg.setDestination(27361U);
    msg.setDestinationEntity(202U);
    msg.value.assign("ZWMDHSJRAECZTLFILLOUPCMTBGBXECEKNQGJTSQNWFZJBAGFPHKLHZTIPDUETFLTAFANZAZKYIWMNWSLXSNBH");

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
    msg.setTimeStamp(0.25459812709542273);
    msg.setSource(44251U);
    msg.setSourceEntity(197U);
    msg.setDestination(52406U);
    msg.setDestinationEntity(200U);
    const signed char tmp_msg_0[] = {-30, 87, -85, -15, 111, -120, 100, 124, 112, 101, -71, 24, 79, -13, 66, 92, -99, -94, -46, 39, -94, 92, -23, -44, 25, 80, -67, -53, 43, -1, 74, 36, -45, 116, -60, 112, 125, 51, 53, -11, 117, 96, 123, -68, 62, -116, 4};
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
    msg.setTimeStamp(0.9926069734588513);
    msg.setSource(37040U);
    msg.setSourceEntity(176U);
    msg.setDestination(19485U);
    msg.setDestinationEntity(129U);
    const signed char tmp_msg_0[] = {-90, 43, -112, -99, -61, 124, -65, 17, -19, -57, -1, 18, -48, -41, 14, -124, -89, -51, -96, 122, 96, -41, -35, 14, -52, -71, -15, 64, 84, -73, 1, -121, 106, -78, 79, -3, -20, -88, 40, 117, 83, 94, -66, 90, 73, -119, -14, 86, 69, 122, 123, -37, 48, 83, -106, -114, 36, 70, 126, 125, 52, -98, -94, -118, 24, -34, 43, -124, 21, -87, -68, -126, 50, -39, -96, -124, 27, -3, -37};
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
    msg.setTimeStamp(0.31690738143955255);
    msg.setSource(53954U);
    msg.setSourceEntity(158U);
    msg.setDestination(35607U);
    msg.setDestinationEntity(24U);
    const signed char tmp_msg_0[] = {117, -5, 66, -102, 49, 30, 71, -57, 122, -128, 45, -17, -88, 102, 41, 91, 63, -44, -10, 73, -121, 2, -87, -78, 120, 3, -35, 65, -85, -111, -64, -78, -102, 57, -82, 115, 87, 50, -59, -64, 54, -120, -111, -46, -118};
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
    msg.setTimeStamp(0.5670202365454184);
    msg.setSource(57434U);
    msg.setSourceEntity(95U);
    msg.setDestination(16792U);
    msg.setDestinationEntity(8U);
    msg.value = 0.6311204632223903;

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
    msg.setTimeStamp(0.7952128652000977);
    msg.setSource(30325U);
    msg.setSourceEntity(143U);
    msg.setDestination(14252U);
    msg.setDestinationEntity(52U);
    msg.value = 0.533878432277856;

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
    msg.setTimeStamp(0.045447870226952736);
    msg.setSource(21629U);
    msg.setSourceEntity(196U);
    msg.setDestination(7288U);
    msg.setDestinationEntity(242U);
    msg.value = 0.8510785829574081;

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
    msg.setTimeStamp(0.9665673053559585);
    msg.setSource(46251U);
    msg.setSourceEntity(7U);
    msg.setDestination(35463U);
    msg.setDestinationEntity(212U);
    msg.type = 40U;
    msg.frequency = 3851596264U;
    msg.min_range = 62955U;
    msg.max_range = 50906U;
    msg.bits_per_point = 110U;
    msg.scale_factor = 0.19142433787766988;
    const signed char tmp_msg_0[] = {-99, -124, 28, -39, 13, 55, 124, -8, -114, 4, -116, -105, 73, -111, -84, -94, 57, 50, -86, -46, 95, 11, -85, 109, -26, -33, -48, 77, -83, -109, 51, 28, 56, -39, 63, -88, 94, 2, -110, 23, 115, -59, 9, 43, -38, -31, -13, -28, 56, -32, -128, -30, -28, 10, -121, -40, -91, 20, 40, -21, 63, 76, -66, 72, -31, 113, -70, 100, 88, 105, 70, 118, 126, -84, -63, -77, -2, 3, -112, 21, 48, -109, 4, -75, 1, -55, 116, -68, 4, -42, -30, -93, -27, 121, 90, -97, -114, -40, 71, 54, -70, 89, 23, -124, -121, -1, 66, -16, 107, -119, 43, -93, -61, -52, -58, -55, -59, -83, 41};
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
    msg.setTimeStamp(0.3762452250066264);
    msg.setSource(61793U);
    msg.setSourceEntity(182U);
    msg.setDestination(41968U);
    msg.setDestinationEntity(205U);
    msg.type = 52U;
    msg.frequency = 289474456U;
    msg.min_range = 33650U;
    msg.max_range = 16760U;
    msg.bits_per_point = 91U;
    msg.scale_factor = 0.651944956873938;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.518760069812701;
    tmp_msg_0.beam_height = 0.7119240811752471;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-121, 51, -65, 115, 105, -79, -32, -60, 9, -114, -27, 20, 22, 109, -108, 93, 35, 116, -105, -103, 91, -29, 117, -73, -75, -13, 46, 38, -107, -86, 121, 64, -86, 78, -102, 71, -111, -14, -24, 88, 37, 106, 56, -3, -67, 57, 88, 27, 115, -84, -125, 13, -86, 108, -79, 68, -59, -95, 63};
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
    msg.setTimeStamp(0.8353329899689026);
    msg.setSource(52111U);
    msg.setSourceEntity(185U);
    msg.setDestination(16278U);
    msg.setDestinationEntity(245U);
    msg.type = 135U;
    msg.frequency = 3162516030U;
    msg.min_range = 609U;
    msg.max_range = 11568U;
    msg.bits_per_point = 179U;
    msg.scale_factor = 0.49074394707588764;
    const signed char tmp_msg_0[] = {-63, 20, 34, 3, 22, 26, 35, 117, -1, -33, -95, -44, -59, -66, -56, 103, -97, 75, -52, 4, 22, -7, -52, -7, -21, 14, -38, 17, 112, 76, -117, -6, -128, 5, -118, 31, 87, -66, 110, -79, 41, 93, 14, -85, 87, 66, 55, -6, -33, -94, -36, 30, 4, 99, 29, -121, 76, 102, 22, -15, 87, 25, -116, -92, 122, -77, -44, 7, -73, -5, -16, -113, 85, 62, -42, -73, 7, 8, -64, 70, 113, -101, -110, 100, 126, -66, 41, -56, 67, -11, -52, 6, 36, 90, -37, -54, 64, -71, -93, 62, 41, -57, 40, -84, 95, -93, -24, -84, -108, 99, 42, 83, 71, -15, -119, -125, -57, 65, 99, -123, -102, 37, -54, -69, 0, 116, 0, -93, -83, 52, 90, 78, -41, 109, -3, 101, 89, 116, -3, 64, -32, -62, 86, 98, -80, -118, -120, -72, -125, -127, 113, -4, -44, -108, -67, 108, 11, -102, -31, -112, 32, -18, 59, 107, 12, -97, -92, -78, 22, 61, 54, 95, -62, 122};
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
    msg.setTimeStamp(0.2966244246306232);
    msg.setSource(8473U);
    msg.setSourceEntity(110U);
    msg.setDestination(16333U);
    msg.setDestinationEntity(34U);

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
    msg.setTimeStamp(0.8842820691386466);
    msg.setSource(44528U);
    msg.setSourceEntity(0U);
    msg.setDestination(54955U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.9682221682335795);
    msg.setSource(24287U);
    msg.setSourceEntity(108U);
    msg.setDestination(65114U);
    msg.setDestinationEntity(104U);

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
    msg.setTimeStamp(0.26626011391601756);
    msg.setSource(57336U);
    msg.setSourceEntity(123U);
    msg.setDestination(13864U);
    msg.setDestinationEntity(125U);
    msg.op = 40U;

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
    msg.setTimeStamp(0.8559557816686425);
    msg.setSource(31606U);
    msg.setSourceEntity(109U);
    msg.setDestination(2168U);
    msg.setDestinationEntity(210U);
    msg.op = 57U;

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
    msg.setTimeStamp(0.02515917898732012);
    msg.setSource(51421U);
    msg.setSourceEntity(241U);
    msg.setDestination(28450U);
    msg.setDestinationEntity(43U);
    msg.op = 96U;

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
    msg.setTimeStamp(0.19795545251915525);
    msg.setSource(40686U);
    msg.setSourceEntity(123U);
    msg.setDestination(12798U);
    msg.setDestinationEntity(158U);
    msg.value = 0.060738646819905595;
    msg.confidence = 0.06481022813103154;
    msg.opmodes.assign("AGRQCEIXLKUXNBRQEKYBVJVJCIDIJWBEZFJZFDAUPGOOOPCIUENWHAUUSKKTHLBKPCENJACYPGMLYPQPEGDTJUNSYDDHRIOPJSBYWCMKRGSDIPGWFQMWBLUEZYLUHALKCOSIBMTVLJQYBSRHRXNMUGDTTSERRNHXYAFFZTIWTNVXJZYVOVCYMFNIEDZNVOXFOQMMRSTVHLFPWJHWWVODABVZXXACXNFG");

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
    msg.setTimeStamp(0.7178758929365978);
    msg.setSource(10930U);
    msg.setSourceEntity(26U);
    msg.setDestination(53537U);
    msg.setDestinationEntity(165U);
    msg.value = 0.7387910706894069;
    msg.confidence = 0.5080622917745837;
    msg.opmodes.assign("RYJBXRBRQJYYDIMHQAJGCGGOOBMPAQDICDGHZCHNPOOKXUBEZTKXIIOOHKMRJVPZKFQFQDEXGLSXTTKXTPXBCTHJ");

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
    msg.setTimeStamp(0.23140490362724597);
    msg.setSource(50648U);
    msg.setSourceEntity(57U);
    msg.setDestination(57578U);
    msg.setDestinationEntity(232U);
    msg.value = 0.757431220658149;
    msg.confidence = 0.597795284755326;
    msg.opmodes.assign("RXCSWVLKYSGCDOMZNYRUCMCEZDAGIOTQZPJTRAYSKKGLTJIUYKBAKZDHKDMCRBQDFCBNYJIOVQGBGELFYGCMSGLITLAOJJRYZIXWBYIFASRHPEHLNDTTDMOAUBXUQDJELOPZMHLMFLVHTBXWVJXCUURIIQBENWBKATDASEAFYGJHZPO");

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
    msg.setTimeStamp(0.7003946145588524);
    msg.setSource(55622U);
    msg.setSourceEntity(180U);
    msg.setDestination(24423U);
    msg.setDestinationEntity(162U);
    msg.itow = 1330029041U;
    msg.lat = 0.19561912014726646;
    msg.lon = 0.7971491750447214;
    msg.height_ell = 0.2530065366207237;
    msg.height_sea = 0.48190738709832626;
    msg.hacc = 0.4858949223429855;
    msg.vacc = 0.9246398322349979;
    msg.vel_n = 0.09828426230771459;
    msg.vel_e = 0.9916511273485984;
    msg.vel_d = 0.8628796451178474;
    msg.speed = 0.29235369472551587;
    msg.gspeed = 0.36194500109000016;
    msg.heading = 0.5932849164755097;
    msg.sacc = 0.9436895680488008;
    msg.cacc = 0.9106076678008607;

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
    msg.setTimeStamp(0.7484026195482536);
    msg.setSource(36170U);
    msg.setSourceEntity(233U);
    msg.setDestination(37814U);
    msg.setDestinationEntity(158U);
    msg.itow = 1359149408U;
    msg.lat = 0.7618234747997606;
    msg.lon = 0.6749332178895969;
    msg.height_ell = 0.7715723960466881;
    msg.height_sea = 0.6482182952173254;
    msg.hacc = 0.8596366389461346;
    msg.vacc = 0.6598727901082597;
    msg.vel_n = 0.5366315683458339;
    msg.vel_e = 0.9452106242327671;
    msg.vel_d = 0.5298775429416532;
    msg.speed = 0.1950318265107046;
    msg.gspeed = 0.5181387346532443;
    msg.heading = 0.19492726467333432;
    msg.sacc = 0.4107245752360196;
    msg.cacc = 0.9222067757862947;

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
    msg.setTimeStamp(0.6313159198567855);
    msg.setSource(45439U);
    msg.setSourceEntity(59U);
    msg.setDestination(60784U);
    msg.setDestinationEntity(10U);
    msg.itow = 1990576977U;
    msg.lat = 0.5199503476276199;
    msg.lon = 0.7280144971148839;
    msg.height_ell = 0.7302946905728362;
    msg.height_sea = 0.7531675574796857;
    msg.hacc = 0.0220724144207205;
    msg.vacc = 0.5633449749067526;
    msg.vel_n = 0.000431047658686845;
    msg.vel_e = 0.14967733761417668;
    msg.vel_d = 0.34679331661678037;
    msg.speed = 0.6545214591281064;
    msg.gspeed = 0.673891591392587;
    msg.heading = 0.2151898120327974;
    msg.sacc = 0.5378285757386622;
    msg.cacc = 0.5670989376823846;

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
    msg.setTimeStamp(0.2994537856542432);
    msg.setSource(41443U);
    msg.setSourceEntity(220U);
    msg.setDestination(8981U);
    msg.setDestinationEntity(93U);
    msg.id = 107U;
    msg.value = 0.8173685508778201;

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
    msg.setTimeStamp(0.41693244583357203);
    msg.setSource(50159U);
    msg.setSourceEntity(50U);
    msg.setDestination(30093U);
    msg.setDestinationEntity(25U);
    msg.id = 118U;
    msg.value = 0.5989802218297753;

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
    msg.setTimeStamp(0.31235883874919224);
    msg.setSource(17767U);
    msg.setSourceEntity(114U);
    msg.setDestination(3925U);
    msg.setDestinationEntity(167U);
    msg.id = 213U;
    msg.value = 0.09062571662468488;

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
    msg.setTimeStamp(0.9290225643571964);
    msg.setSource(57124U);
    msg.setSourceEntity(43U);
    msg.setDestination(49948U);
    msg.setDestinationEntity(103U);
    msg.x = 0.5084995018017803;
    msg.y = 0.8124271692380473;
    msg.z = 0.5928835815026529;
    msg.phi = 0.972378180004676;
    msg.theta = 0.5133680110299097;
    msg.psi = 0.48737080978523906;

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
    msg.setTimeStamp(0.779905175600223);
    msg.setSource(13549U);
    msg.setSourceEntity(229U);
    msg.setDestination(56352U);
    msg.setDestinationEntity(189U);
    msg.x = 0.37830913408992484;
    msg.y = 0.7301740903888434;
    msg.z = 0.2294422157199032;
    msg.phi = 0.7204032257440895;
    msg.theta = 0.6544956327471414;
    msg.psi = 0.6427159629109503;

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
    msg.setTimeStamp(0.9789139535439088);
    msg.setSource(59229U);
    msg.setSourceEntity(227U);
    msg.setDestination(49743U);
    msg.setDestinationEntity(90U);
    msg.x = 0.303096189845251;
    msg.y = 0.5580421449969617;
    msg.z = 0.6008198052845413;
    msg.phi = 0.7432483970192534;
    msg.theta = 0.5764545768944216;
    msg.psi = 0.09533465545789721;

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
    msg.setTimeStamp(0.8298023447442195);
    msg.setSource(2858U);
    msg.setSourceEntity(161U);
    msg.setDestination(13707U);
    msg.setDestinationEntity(82U);
    msg.beam_width = 0.6776797202610741;
    msg.beam_height = 0.806003711854891;

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
    msg.setTimeStamp(0.9032163667669254);
    msg.setSource(10107U);
    msg.setSourceEntity(79U);
    msg.setDestination(42350U);
    msg.setDestinationEntity(198U);
    msg.beam_width = 0.5079445330777541;
    msg.beam_height = 0.47994502219243584;

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
    msg.setTimeStamp(0.09259412398679945);
    msg.setSource(21080U);
    msg.setSourceEntity(36U);
    msg.setDestination(57461U);
    msg.setDestinationEntity(58U);
    msg.beam_width = 0.8487138291805384;
    msg.beam_height = 0.42238814182519924;

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
    msg.setTimeStamp(0.5167155885448788);
    msg.setSource(16703U);
    msg.setSourceEntity(121U);
    msg.setDestination(5906U);
    msg.setDestinationEntity(62U);
    msg.sane = 211U;

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
    msg.setTimeStamp(0.5773116131288673);
    msg.setSource(21259U);
    msg.setSourceEntity(155U);
    msg.setDestination(55847U);
    msg.setDestinationEntity(214U);
    msg.sane = 69U;

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
    msg.setTimeStamp(0.6642787856015393);
    msg.setSource(3741U);
    msg.setSourceEntity(6U);
    msg.setDestination(2064U);
    msg.setDestinationEntity(79U);
    msg.sane = 78U;

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
    msg.setTimeStamp(0.5486660379188749);
    msg.setSource(41861U);
    msg.setSourceEntity(148U);
    msg.setDestination(58673U);
    msg.setDestinationEntity(60U);
    msg.value = 0.701175423875743;

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
    msg.setTimeStamp(0.8898441615852245);
    msg.setSource(48449U);
    msg.setSourceEntity(120U);
    msg.setDestination(7001U);
    msg.setDestinationEntity(69U);
    msg.value = 0.842073461141672;

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
    msg.setTimeStamp(0.6331743938248684);
    msg.setSource(45760U);
    msg.setSourceEntity(214U);
    msg.setDestination(58308U);
    msg.setDestinationEntity(135U);
    msg.value = 0.2065618221818859;

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
    msg.setTimeStamp(0.21273678479193303);
    msg.setSource(24296U);
    msg.setSourceEntity(248U);
    msg.setDestination(22217U);
    msg.setDestinationEntity(73U);
    msg.value = 0.40223298188154555;

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
    msg.setTimeStamp(0.8389217555973117);
    msg.setSource(12422U);
    msg.setSourceEntity(218U);
    msg.setDestination(13798U);
    msg.setDestinationEntity(90U);
    msg.value = 0.254568779955782;

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
    msg.setTimeStamp(0.283357349274294);
    msg.setSource(14090U);
    msg.setSourceEntity(206U);
    msg.setDestination(23485U);
    msg.setDestinationEntity(77U);
    msg.value = 0.9593813534262833;

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
    msg.setTimeStamp(0.38789165410044646);
    msg.setSource(35009U);
    msg.setSourceEntity(59U);
    msg.setDestination(1982U);
    msg.setDestinationEntity(223U);
    msg.value = 0.8522048018221327;

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
    msg.setTimeStamp(0.7528976969450819);
    msg.setSource(58823U);
    msg.setSourceEntity(216U);
    msg.setDestination(60338U);
    msg.setDestinationEntity(199U);
    msg.value = 0.9913939779200994;

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
    msg.setTimeStamp(0.005028838984961204);
    msg.setSource(36755U);
    msg.setSourceEntity(180U);
    msg.setDestination(49894U);
    msg.setDestinationEntity(155U);
    msg.value = 0.9775344444797438;

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
    msg.setTimeStamp(0.7470082782055196);
    msg.setSource(15533U);
    msg.setSourceEntity(98U);
    msg.setDestination(51404U);
    msg.setDestinationEntity(238U);
    msg.value = 0.17525580190673873;

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
    msg.setTimeStamp(0.600202070927655);
    msg.setSource(2840U);
    msg.setSourceEntity(139U);
    msg.setDestination(17688U);
    msg.setDestinationEntity(73U);
    msg.value = 0.6451907315363227;

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
    msg.setTimeStamp(0.9857489433566226);
    msg.setSource(56397U);
    msg.setSourceEntity(180U);
    msg.setDestination(33147U);
    msg.setDestinationEntity(156U);
    msg.value = 0.6077822225308713;

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
    msg.setTimeStamp(0.6629939210646197);
    msg.setSource(30463U);
    msg.setSourceEntity(103U);
    msg.setDestination(11298U);
    msg.setDestinationEntity(101U);
    msg.value = 0.16913941782264597;

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
    msg.setTimeStamp(0.016295357603728355);
    msg.setSource(26027U);
    msg.setSourceEntity(98U);
    msg.setDestination(17435U);
    msg.setDestinationEntity(207U);
    msg.value = 0.27341387505645987;

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
    msg.setTimeStamp(0.26298762009412346);
    msg.setSource(50885U);
    msg.setSourceEntity(108U);
    msg.setDestination(37277U);
    msg.setDestinationEntity(49U);
    msg.value = 0.7980933024315282;

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
    msg.setTimeStamp(0.021751740596356095);
    msg.setSource(31737U);
    msg.setSourceEntity(3U);
    msg.setDestination(56895U);
    msg.setDestinationEntity(78U);
    msg.value = 0.3172602974556211;

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
    msg.setTimeStamp(0.11264864534152619);
    msg.setSource(25552U);
    msg.setSourceEntity(223U);
    msg.setDestination(28895U);
    msg.setDestinationEntity(160U);
    msg.value = 0.5095564747305428;

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
    msg.setTimeStamp(0.3675264503528255);
    msg.setSource(14626U);
    msg.setSourceEntity(157U);
    msg.setDestination(4433U);
    msg.setDestinationEntity(179U);
    msg.value = 0.9839144393405137;

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
    msg.setTimeStamp(0.2890673011689373);
    msg.setSource(61329U);
    msg.setSourceEntity(13U);
    msg.setDestination(65492U);
    msg.setDestinationEntity(66U);
    msg.value = 0.15272539209323355;

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
    msg.setTimeStamp(0.6421523009791448);
    msg.setSource(13092U);
    msg.setSourceEntity(168U);
    msg.setDestination(62838U);
    msg.setDestinationEntity(219U);
    msg.value = 0.5609739909322472;

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
    msg.setTimeStamp(0.8516041727114741);
    msg.setSource(22258U);
    msg.setSourceEntity(230U);
    msg.setDestination(29629U);
    msg.setDestinationEntity(179U);
    msg.value = 0.7982463519882694;

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
    msg.setTimeStamp(0.19938083771534332);
    msg.setSource(21574U);
    msg.setSourceEntity(52U);
    msg.setDestination(38364U);
    msg.setDestinationEntity(63U);
    msg.value = 0.003736010208779339;

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
    msg.setTimeStamp(0.1686897460111425);
    msg.setSource(33324U);
    msg.setSourceEntity(139U);
    msg.setDestination(64291U);
    msg.setDestinationEntity(55U);
    msg.value = 0.07440233451445366;

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
    msg.setTimeStamp(0.7876210691916807);
    msg.setSource(50238U);
    msg.setSourceEntity(196U);
    msg.setDestination(33243U);
    msg.setDestinationEntity(234U);
    msg.value = 0.2905541747593874;

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
    msg.setTimeStamp(0.4156652611181788);
    msg.setSource(52130U);
    msg.setSourceEntity(147U);
    msg.setDestination(60198U);
    msg.setDestinationEntity(231U);
    msg.validity = 11747U;
    msg.type = 135U;
    msg.tow = 845725578U;
    msg.base_lat = 0.6678972496007466;
    msg.base_lon = 0.6287719710041049;
    msg.base_height = 0.3378619449259961;
    msg.n = 0.19216983362718687;
    msg.e = 0.5928156185970495;
    msg.d = 0.42461355833042935;
    msg.v_n = 0.2833403791614987;
    msg.v_e = 0.4351974057908722;
    msg.v_d = 0.521266394465887;
    msg.satellites = 241U;
    msg.iar_hyp = 19637U;
    msg.iar_ratio = 0.009580139018576794;

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
    msg.setTimeStamp(0.29409508508262217);
    msg.setSource(880U);
    msg.setSourceEntity(201U);
    msg.setDestination(41205U);
    msg.setDestinationEntity(7U);
    msg.validity = 44887U;
    msg.type = 173U;
    msg.tow = 1327919703U;
    msg.base_lat = 0.39941718331873555;
    msg.base_lon = 0.48396774708366286;
    msg.base_height = 0.10234880072921537;
    msg.n = 0.5009941906798893;
    msg.e = 0.7059806926731915;
    msg.d = 0.7202392684176935;
    msg.v_n = 0.9878440405877362;
    msg.v_e = 0.15783465021368925;
    msg.v_d = 0.4040891658545497;
    msg.satellites = 213U;
    msg.iar_hyp = 60090U;
    msg.iar_ratio = 0.86415979221744;

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
    msg.setTimeStamp(0.9572474113309577);
    msg.setSource(37048U);
    msg.setSourceEntity(94U);
    msg.setDestination(18718U);
    msg.setDestinationEntity(113U);
    msg.validity = 56101U;
    msg.type = 92U;
    msg.tow = 2447549406U;
    msg.base_lat = 0.4895829953836721;
    msg.base_lon = 0.3897872299862917;
    msg.base_height = 0.008055096213269053;
    msg.n = 0.0575834027229114;
    msg.e = 0.910874809486959;
    msg.d = 0.3603567788033526;
    msg.v_n = 0.2461610280548322;
    msg.v_e = 0.5553418303558479;
    msg.v_d = 0.5770175308532973;
    msg.satellites = 224U;
    msg.iar_hyp = 38587U;
    msg.iar_ratio = 0.1201969395484429;

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
    msg.setTimeStamp(0.44658794930863754);
    msg.setSource(52139U);
    msg.setSourceEntity(64U);
    msg.setDestination(25641U);
    msg.setDestinationEntity(113U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.6229756951971674;
    tmp_msg_0.lon = 0.7939321037350898;
    tmp_msg_0.height = 0.7359777727005251;
    tmp_msg_0.x = 0.9916686984501731;
    tmp_msg_0.y = 0.13312259370328305;
    tmp_msg_0.z = 0.5608219255973937;
    tmp_msg_0.phi = 0.5918334698579385;
    tmp_msg_0.theta = 0.8628607849953794;
    tmp_msg_0.psi = 0.6881719475129287;
    tmp_msg_0.u = 0.9999478697454484;
    tmp_msg_0.v = 0.7806316176574702;
    tmp_msg_0.w = 0.8754390771186681;
    tmp_msg_0.vx = 0.9600339054361345;
    tmp_msg_0.vy = 0.14058249537601353;
    tmp_msg_0.vz = 0.966875386006826;
    tmp_msg_0.p = 0.5412474971596622;
    tmp_msg_0.q = 0.4283016203587726;
    tmp_msg_0.r = 0.42001159025772494;
    tmp_msg_0.depth = 0.0542401442971403;
    tmp_msg_0.alt = 0.09481432824429448;
    msg.state.set(tmp_msg_0);
    msg.type = 4U;

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
    msg.setTimeStamp(0.38265428669696344);
    msg.setSource(18256U);
    msg.setSourceEntity(239U);
    msg.setDestination(49336U);
    msg.setDestinationEntity(205U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.04216197404634281;
    tmp_msg_0.lon = 0.2532266424777292;
    tmp_msg_0.height = 0.650553633543711;
    tmp_msg_0.x = 0.9550062953550776;
    tmp_msg_0.y = 0.9660430557254812;
    tmp_msg_0.z = 0.4846880616254807;
    tmp_msg_0.phi = 0.9268880001411042;
    tmp_msg_0.theta = 0.7079625081442812;
    tmp_msg_0.psi = 0.4032301119066677;
    tmp_msg_0.u = 0.9286897632106973;
    tmp_msg_0.v = 0.5324667316841838;
    tmp_msg_0.w = 0.3760841099495206;
    tmp_msg_0.vx = 0.6466201867833977;
    tmp_msg_0.vy = 0.06122169670886801;
    tmp_msg_0.vz = 0.024256024240608243;
    tmp_msg_0.p = 0.7791063294403122;
    tmp_msg_0.q = 0.9310002232350035;
    tmp_msg_0.r = 0.21770475607363715;
    tmp_msg_0.depth = 0.5378267316086874;
    tmp_msg_0.alt = 0.7842543337911937;
    msg.state.set(tmp_msg_0);
    msg.type = 216U;

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
    msg.setTimeStamp(0.024470110102083664);
    msg.setSource(63941U);
    msg.setSourceEntity(73U);
    msg.setDestination(60952U);
    msg.setDestinationEntity(227U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.23103393465129196;
    tmp_msg_0.lon = 0.6871846408762865;
    tmp_msg_0.height = 0.009627101523126402;
    tmp_msg_0.x = 0.6273911991713303;
    tmp_msg_0.y = 0.5357598879513268;
    tmp_msg_0.z = 0.4719719832135034;
    tmp_msg_0.phi = 0.5564778860166834;
    tmp_msg_0.theta = 0.9743433649601654;
    tmp_msg_0.psi = 0.23199526868766596;
    tmp_msg_0.u = 0.25356014904057433;
    tmp_msg_0.v = 0.9632461295825703;
    tmp_msg_0.w = 0.23666344853261767;
    tmp_msg_0.vx = 0.010423712514382788;
    tmp_msg_0.vy = 0.2978363564800134;
    tmp_msg_0.vz = 0.9392645238685173;
    tmp_msg_0.p = 0.675744983374289;
    tmp_msg_0.q = 0.7403410738113941;
    tmp_msg_0.r = 0.9089487554592839;
    tmp_msg_0.depth = 0.701362806038207;
    tmp_msg_0.alt = 0.8584660371959832;
    msg.state.set(tmp_msg_0);
    msg.type = 245U;

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
    msg.setTimeStamp(0.873389843989284);
    msg.setSource(59490U);
    msg.setSourceEntity(42U);
    msg.setDestination(38121U);
    msg.setDestinationEntity(89U);
    msg.value = 0.591441785015253;

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
    msg.setTimeStamp(0.959072401174682);
    msg.setSource(39664U);
    msg.setSourceEntity(156U);
    msg.setDestination(35243U);
    msg.setDestinationEntity(144U);
    msg.value = 0.5555650869815553;

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
    msg.setTimeStamp(0.6644025703453493);
    msg.setSource(51987U);
    msg.setSourceEntity(230U);
    msg.setDestination(65511U);
    msg.setDestinationEntity(226U);
    msg.value = 0.5713524449013072;

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
    msg.setTimeStamp(0.9748882165189656);
    msg.setSource(38785U);
    msg.setSourceEntity(210U);
    msg.setDestination(29791U);
    msg.setDestinationEntity(8U);
    msg.value = 0.358906623080532;

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
    msg.setTimeStamp(0.7483122773594404);
    msg.setSource(60000U);
    msg.setSourceEntity(144U);
    msg.setDestination(16457U);
    msg.setDestinationEntity(94U);
    msg.value = 0.09420082070183133;

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
    msg.setTimeStamp(0.487878277015532);
    msg.setSource(63358U);
    msg.setSourceEntity(249U);
    msg.setDestination(49909U);
    msg.setDestinationEntity(171U);
    msg.value = 0.5796015723173361;

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
    msg.setTimeStamp(0.8597331024232109);
    msg.setSource(33691U);
    msg.setSourceEntity(152U);
    msg.setDestination(41981U);
    msg.setDestinationEntity(184U);
    msg.value = 0.04412652094422831;

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
    msg.setTimeStamp(0.48378747583681436);
    msg.setSource(11391U);
    msg.setSourceEntity(170U);
    msg.setDestination(12896U);
    msg.setDestinationEntity(20U);
    msg.value = 0.261661248942307;

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
    msg.setTimeStamp(0.27703513791748535);
    msg.setSource(43781U);
    msg.setSourceEntity(217U);
    msg.setDestination(27295U);
    msg.setDestinationEntity(142U);
    msg.value = 0.9552602411695329;

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
    msg.setTimeStamp(0.43589950611784867);
    msg.setSource(15726U);
    msg.setSourceEntity(102U);
    msg.setDestination(52271U);
    msg.setDestinationEntity(25U);
    msg.value = 0.9807247922188561;

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
    msg.setTimeStamp(0.303496109148058);
    msg.setSource(11311U);
    msg.setSourceEntity(24U);
    msg.setDestination(11595U);
    msg.setDestinationEntity(48U);
    msg.value = 0.48936041104717753;

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
    msg.setTimeStamp(0.9407544986698297);
    msg.setSource(23232U);
    msg.setSourceEntity(123U);
    msg.setDestination(52774U);
    msg.setDestinationEntity(140U);
    msg.value = 0.15613771314664693;

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
    msg.setTimeStamp(0.1577963774274247);
    msg.setSource(45691U);
    msg.setSourceEntity(144U);
    msg.setDestination(47666U);
    msg.setDestinationEntity(222U);
    msg.value = 0.6649876399944111;

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
    msg.setTimeStamp(0.924945412931413);
    msg.setSource(29633U);
    msg.setSourceEntity(111U);
    msg.setDestination(59497U);
    msg.setDestinationEntity(143U);
    msg.value = 0.24250326893362473;

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
    msg.setTimeStamp(0.8920902083752162);
    msg.setSource(48515U);
    msg.setSourceEntity(171U);
    msg.setDestination(10373U);
    msg.setDestinationEntity(198U);
    msg.value = 0.5700734729415899;

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
    msg.setTimeStamp(0.17628985312703327);
    msg.setSource(46329U);
    msg.setSourceEntity(51U);
    msg.setDestination(56073U);
    msg.setDestinationEntity(179U);
    msg.id = 75U;
    msg.zoom = 44U;
    msg.action = 206U;

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
    msg.setTimeStamp(0.05563427025718559);
    msg.setSource(13143U);
    msg.setSourceEntity(74U);
    msg.setDestination(47818U);
    msg.setDestinationEntity(188U);
    msg.id = 183U;
    msg.zoom = 179U;
    msg.action = 18U;

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
    msg.setTimeStamp(0.30039051192640265);
    msg.setSource(46809U);
    msg.setSourceEntity(155U);
    msg.setDestination(13837U);
    msg.setDestinationEntity(138U);
    msg.id = 54U;
    msg.zoom = 226U;
    msg.action = 76U;

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
    msg.setTimeStamp(0.23987042042805307);
    msg.setSource(10635U);
    msg.setSourceEntity(65U);
    msg.setDestination(44431U);
    msg.setDestinationEntity(253U);
    msg.id = 153U;
    msg.value = 0.7392099624980616;

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
    msg.setTimeStamp(0.3381429274183587);
    msg.setSource(51141U);
    msg.setSourceEntity(16U);
    msg.setDestination(34803U);
    msg.setDestinationEntity(118U);
    msg.id = 43U;
    msg.value = 0.956818168940463;

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
    msg.setTimeStamp(0.9814113654340164);
    msg.setSource(6747U);
    msg.setSourceEntity(74U);
    msg.setDestination(46028U);
    msg.setDestinationEntity(147U);
    msg.id = 111U;
    msg.value = 0.9415115137530309;

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
    msg.setTimeStamp(0.7956386481649217);
    msg.setSource(5073U);
    msg.setSourceEntity(169U);
    msg.setDestination(12024U);
    msg.setDestinationEntity(10U);
    msg.id = 180U;
    msg.value = 0.7662243281337792;

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
    msg.setTimeStamp(0.5798128937689621);
    msg.setSource(21831U);
    msg.setSourceEntity(234U);
    msg.setDestination(24199U);
    msg.setDestinationEntity(152U);
    msg.id = 134U;
    msg.value = 0.7023988198733744;

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
    msg.setTimeStamp(0.19455128275870526);
    msg.setSource(65378U);
    msg.setSourceEntity(218U);
    msg.setDestination(51616U);
    msg.setDestinationEntity(169U);
    msg.id = 121U;
    msg.value = 0.24849077870616942;

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
    msg.setTimeStamp(0.08871803832485914);
    msg.setSource(37024U);
    msg.setSourceEntity(37U);
    msg.setDestination(56043U);
    msg.setDestinationEntity(6U);
    msg.id = 93U;
    msg.angle = 0.6757352345281289;

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
    msg.setTimeStamp(0.3230575240345407);
    msg.setSource(46133U);
    msg.setSourceEntity(44U);
    msg.setDestination(54068U);
    msg.setDestinationEntity(141U);
    msg.id = 63U;
    msg.angle = 0.6549059260298947;

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
    msg.setTimeStamp(0.5472108994215794);
    msg.setSource(63947U);
    msg.setSourceEntity(107U);
    msg.setDestination(64653U);
    msg.setDestinationEntity(18U);
    msg.id = 92U;
    msg.angle = 0.10622104925675346;

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
    msg.setTimeStamp(0.5094986527983901);
    msg.setSource(41066U);
    msg.setSourceEntity(74U);
    msg.setDestination(10570U);
    msg.setDestinationEntity(166U);
    msg.op = 180U;
    msg.actions.assign("OMHFIWTHUMJOYTVYLJTNRSACTUNKASKUXPJGNUQHLBSJYIFZQRZXFQGREXCKGAUURVFVCJLIFVGHVGBFVYZEXIKSNXCMPTKSSAQWEPKMKGPWPRPQTNEHJTDOZVYEWQIUZDGWHYLQOWDGOIMRWFSCJKBVXMMO");

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
    msg.setTimeStamp(0.7833560359832678);
    msg.setSource(23600U);
    msg.setSourceEntity(138U);
    msg.setDestination(37955U);
    msg.setDestinationEntity(84U);
    msg.op = 46U;
    msg.actions.assign("ZOFJNHEJDKIAHBGUFUMJLRVUPGBARQKHYBZAYCGLQPQUPLCPQQBSXMGUPAVJZAWMKDFIZXESAPIXOJIUKVIWJVXLDQONNZDLNBNBNOCCNDPHRKDPOLKMEIWBTLHYEXHFTMRCEYLHWBVOVTLSOTIRRRGAXKWTGG");

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
    msg.setTimeStamp(0.46119451494813424);
    msg.setSource(52645U);
    msg.setSourceEntity(150U);
    msg.setDestination(53279U);
    msg.setDestinationEntity(245U);
    msg.op = 24U;
    msg.actions.assign("HMQBLUJABXOUUWWEPJIPLKHNCYSLTNHCYIRKZHUGPDVMZDADCKDEVQJLKOPEEXXBZPGCMIKO");

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
    msg.setTimeStamp(0.4531183831143818);
    msg.setSource(62659U);
    msg.setSourceEntity(197U);
    msg.setDestination(34220U);
    msg.setDestinationEntity(139U);
    msg.actions.assign("OHSCUAKXOCHWZFMFQUNHGALDYUKYLJOIGSOPLUXXRCPGLHWBZQUUBVLHAFFTMVLBYBRAAKXUGZECSJWFYFFWCFRLBVBSKZTGENSKRWVJXNHQIHPDODBIVIZOESQPWWU");

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
    msg.setTimeStamp(0.2950171326480753);
    msg.setSource(34451U);
    msg.setSourceEntity(253U);
    msg.setDestination(58777U);
    msg.setDestinationEntity(56U);
    msg.actions.assign("NDIMXIOSPSUBGMVQNHHSAXTZYKABQYBIOYCTJGOBQEWUQFCMKEXFFIUKPDJWVWUSGGVIJPNWMXGTNORTPWWPBGQOHREHI");

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
    msg.setTimeStamp(0.4534361470077204);
    msg.setSource(47168U);
    msg.setSourceEntity(43U);
    msg.setDestination(19614U);
    msg.setDestinationEntity(122U);
    msg.actions.assign("NTBQOCRYNNVZQDDFO");

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
    msg.setTimeStamp(0.37319378455648833);
    msg.setSource(59954U);
    msg.setSourceEntity(130U);
    msg.setDestination(26657U);
    msg.setDestinationEntity(136U);
    msg.button = 222U;
    msg.value = 156U;

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
    msg.setTimeStamp(0.9052183399167684);
    msg.setSource(46363U);
    msg.setSourceEntity(235U);
    msg.setDestination(2416U);
    msg.setDestinationEntity(134U);
    msg.button = 222U;
    msg.value = 249U;

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
    msg.setTimeStamp(0.01212005541797645);
    msg.setSource(34397U);
    msg.setSourceEntity(142U);
    msg.setDestination(14243U);
    msg.setDestinationEntity(48U);
    msg.button = 126U;
    msg.value = 173U;

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
    msg.setTimeStamp(0.04894987664211159);
    msg.setSource(50504U);
    msg.setSourceEntity(127U);
    msg.setDestination(17010U);
    msg.setDestinationEntity(56U);
    msg.op = 121U;
    msg.text.assign("FCIFBRKOEOQTPIKHVDUAGBLBRDOTNUFVNSTAPMXWPRLYM");

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
    msg.setTimeStamp(0.06378196294921534);
    msg.setSource(20254U);
    msg.setSourceEntity(188U);
    msg.setDestination(6650U);
    msg.setDestinationEntity(78U);
    msg.op = 48U;
    msg.text.assign("GLTZSIPWMURLIGLBWZWBAZYVAGMTSITXLXJVMMNMGFKPDGPVKWJJIHDSODHAQECTXXQWWYBAEFIAGKUGBAYSKWOLNEYNSFPBADHEJYTVFXPMKWVOQFZVCDFLTPOTZVEKOOPBQYCKUXODEVCTUWYNZRNCLXRREPMSYHLORSCNXQUIUMFDLYRZQKMH");

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
    msg.setTimeStamp(0.6495268456519473);
    msg.setSource(58915U);
    msg.setSourceEntity(99U);
    msg.setDestination(7173U);
    msg.setDestinationEntity(123U);
    msg.op = 124U;
    msg.text.assign("MNCUZOZGLKFHNNHSHHJHJQUKHATDKADEWPYECQJFRRGJZKXV");

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
    msg.setTimeStamp(0.8500512025610898);
    msg.setSource(57386U);
    msg.setSourceEntity(128U);
    msg.setDestination(39017U);
    msg.setDestinationEntity(236U);
    msg.op = 191U;
    msg.time_remain = 0.42212300517150025;
    msg.sched_time = 0.20607782189551038;

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
    msg.setTimeStamp(0.267814320044671);
    msg.setSource(31874U);
    msg.setSourceEntity(226U);
    msg.setDestination(35766U);
    msg.setDestinationEntity(5U);
    msg.op = 16U;
    msg.time_remain = 0.7111077934306673;
    msg.sched_time = 0.8085023028535264;

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
    msg.setTimeStamp(0.22871687994340806);
    msg.setSource(12194U);
    msg.setSourceEntity(123U);
    msg.setDestination(63312U);
    msg.setDestinationEntity(237U);
    msg.op = 182U;
    msg.time_remain = 0.9470366097254332;
    msg.sched_time = 0.6238811068072678;

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
    msg.setTimeStamp(0.663428114351787);
    msg.setSource(18082U);
    msg.setSourceEntity(94U);
    msg.setDestination(63880U);
    msg.setDestinationEntity(243U);
    msg.name.assign("AMTANOCWHRGSUHKTISMISXMCWYFNDBKCNJRKZLRILDPSSWPLFTARAFLGNLRSVIXO");
    msg.op = 240U;
    msg.sched_time = 0.794915933028867;

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
    msg.setTimeStamp(0.21018758655096692);
    msg.setSource(52526U);
    msg.setSourceEntity(117U);
    msg.setDestination(25573U);
    msg.setDestinationEntity(220U);
    msg.name.assign("OLUGDWKIOBPPLVSPNKMZOSRXLGDXXUFAEFFFTHJBEFJYWYLPIBALTDYGUCIFHECMGYTQMUWJHSBAWXDNOMHDOWMFCZBTEXASWIBVQZTXWLSGLZERMEIYAIOESASNACKXLGCPAZDCOIWZWCNKKRYECBUPDPVZBRXMGLQ");
    msg.op = 241U;
    msg.sched_time = 0.6994752092276373;

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
    msg.setTimeStamp(0.3160756071037625);
    msg.setSource(25950U);
    msg.setSourceEntity(84U);
    msg.setDestination(42907U);
    msg.setDestinationEntity(36U);
    msg.name.assign("TADXQLUQKGHOGHRSAEIUAWEXNOCKIECFXCRWFBSMFYANKKQZVSMTZTWNNNZLJFLNOWJRSTFUXVQMVVDCSMQSTOIPDIDXBJFRXGCYTTUIBMPUALVPQFGAEJYGUYTABOMLBEIQPWQSMIRHZADYXDJIHVVYJKOWZGRLICKTUPNFLYTGOBAMQACFKIHDUZCWMBNRGERCJLOKWPJX");
    msg.op = 164U;
    msg.sched_time = 0.29101130650052187;

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
    msg.setTimeStamp(0.8930794946246063);
    msg.setSource(55597U);
    msg.setSourceEntity(170U);
    msg.setDestination(46198U);
    msg.setDestinationEntity(216U);

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
    msg.setTimeStamp(0.3681764498244835);
    msg.setSource(27292U);
    msg.setSourceEntity(19U);
    msg.setDestination(36888U);
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
    msg.setTimeStamp(0.7088645913796242);
    msg.setSource(2233U);
    msg.setSourceEntity(233U);
    msg.setDestination(50133U);
    msg.setDestinationEntity(67U);

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
    msg.setTimeStamp(0.2526593529396609);
    msg.setSource(58334U);
    msg.setSourceEntity(158U);
    msg.setDestination(49939U);
    msg.setDestinationEntity(149U);
    msg.name.assign("ERFAKAEWUIPDUERLBAVHTKWGDGJBENOQNUSCMCMBGOTLTXJPPVGOSWZHVVFUYESUHJLZBGKULZIACKYXRZDNOHTQQMJGQZASJLLQIZEBNDLHPFCMRPSHKQRHCJJTOUBYYECNXAGZZGJVGEWCLOMITDREVFINWDQT");
    msg.state = 107U;

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
    msg.setTimeStamp(0.4163049285482353);
    msg.setSource(23198U);
    msg.setSourceEntity(165U);
    msg.setDestination(64268U);
    msg.setDestinationEntity(216U);
    msg.name.assign("MGMTZGKAVJYLHKEKINHODWFLQNZWIDPXMZBBXODIUEMX");
    msg.state = 216U;

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
    msg.setTimeStamp(0.46815941329867305);
    msg.setSource(13681U);
    msg.setSourceEntity(231U);
    msg.setDestination(56753U);
    msg.setDestinationEntity(222U);
    msg.name.assign("NQWXQOEUWBAFPGSJOSJKRWECKMUOTDKPDSSXIZAQVIDGFFRXLVBZPMHANFXBETMOQUQTTWUKFVXTAICWRKLT");
    msg.state = 77U;

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
    msg.setTimeStamp(0.4924054029826621);
    msg.setSource(2121U);
    msg.setSourceEntity(24U);
    msg.setDestination(63976U);
    msg.setDestinationEntity(159U);
    msg.name.assign("TNMYVFBBDJXITIXELHVRGRRIFTYCOIJBRMIKQULDBSWHAFGKLJNVHBSKMXBEVAHGACAQKLZHURDEXPYYNGBPVIXPSRJMFFYQGJFMTAVFZDYDWWOQYXNOWUKNKTUCGHTFJNRWTEAPKDKZXMPOBPDTNYEUMSVQEJHCQQLVTSFNJEOGXXRDWSHWZLKZJIIDULQRCVLMPPUOOABCHEROGGLWVWZZDOZNCAYKLJCSSAZPBFGCQMUTUEXMWAI");
    msg.value = 184U;

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
    msg.setTimeStamp(0.8020366199727563);
    msg.setSource(11802U);
    msg.setSourceEntity(15U);
    msg.setDestination(35502U);
    msg.setDestinationEntity(223U);
    msg.name.assign("EWONLDOHOKGAVJLSBQHIWJSPFLFMUTBOARHTBPMXAINJULZNQAEEWGGXCIMRCUQYODDYPZZIBSGLKWOVCCCNISXQUJKPXDKMXHDUSXBXJVILKCTYZRSRUUVSRHQEYCREJHKJQUAVSGATFWKSOJWFLHNWGMONWJKNCVBBPLZAAGYUZBMQDETPXWTEGEHVZFTDIHPMFDORKBVNXYFIKEXTRSVHCRYRIBQQATWNMZLMPZUAMGDOJD");
    msg.value = 225U;

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
    msg.setTimeStamp(0.7462192935648655);
    msg.setSource(24104U);
    msg.setSourceEntity(190U);
    msg.setDestination(61538U);
    msg.setDestinationEntity(197U);
    msg.name.assign("LZPPMJDCKODTBTOZOYGWPD");
    msg.value = 143U;

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
    msg.setTimeStamp(0.8835249285019595);
    msg.setSource(19541U);
    msg.setSourceEntity(64U);
    msg.setDestination(7694U);
    msg.setDestinationEntity(75U);
    msg.name.assign("DJZCPYYYCYPOIUKLQMVPRIPZXMOTLMNSDQADDEYZXVQHSFIEGJNFAOMEELPUUBCGJVOINBFDTLTRJEJALCSOERVDYQRWCOWWTTOHMJRZTHGLXRTIIAQSDHNXKBBSWFUXVYEBPKBZYKXMFAUEVCHAALMSZIEKKAVKGJJHLQHZVUBJWTMZIZRDCJLGNGPSWXPVSFANMURUETHWHNBTUOGGQVY");

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
    msg.setTimeStamp(0.7062773684087168);
    msg.setSource(59465U);
    msg.setSourceEntity(149U);
    msg.setDestination(44321U);
    msg.setDestinationEntity(170U);
    msg.name.assign("IAKYEBTCCHJURTIUECVLRSRHVOXSHOSHNWXDQTONKBHUWMNTUYIWFGDMELOFQNPZWXMCUCORQAVPGQSXEMSVKHPDBSXDCTKMYVFDPZJGSJEVHYWFQKSNJAVVVOQGXJMYZIATCLDDUFMREHFYRZFLMJANPNFU");

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
    msg.setTimeStamp(0.09124502757031627);
    msg.setSource(38071U);
    msg.setSourceEntity(23U);
    msg.setDestination(40905U);
    msg.setDestinationEntity(129U);
    msg.name.assign("MOGFWCTRPXTHNFBAWYHOLQALESCCIITOVVZPAUFZMUKNURZVPYJCVNSBGRMDASOKEKJPBKOHLSGXKLTBHPAJYDYWJAQHMKSTRMPBGWTSBMUKEICSQNPFLIXOFSHSZRFYDALGCL");

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
    msg.setTimeStamp(0.2814890447246412);
    msg.setSource(16429U);
    msg.setSourceEntity(248U);
    msg.setDestination(21531U);
    msg.setDestinationEntity(228U);
    msg.name.assign("SFRVCIEDZPPJRYAGIBTXIBSBYHSHXLPCDTNMVCOBUUQLZRDCTLKMTIEBPZQWTVEYLIWCBVVNGRSZQCTZSGOGNYTBMXGNWEVDSOPZAAWCVSRJKND");
    msg.value = 214U;

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
    msg.setTimeStamp(0.9569305292557522);
    msg.setSource(36541U);
    msg.setSourceEntity(147U);
    msg.setDestination(47241U);
    msg.setDestinationEntity(5U);
    msg.name.assign("GMGKURCONALETDTWPPRBTLTSXDUCQRDPXLXJWOLAUIBUQTKHHGZZJRLVJVBFXUGUNNPVPWISAHDFZESU");
    msg.value = 155U;

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
    msg.setTimeStamp(0.5166759957709757);
    msg.setSource(18880U);
    msg.setSourceEntity(179U);
    msg.setDestination(24050U);
    msg.setDestinationEntity(14U);
    msg.name.assign("KVQCHEGMOOOPAPBCJLMKTRUQNEYJRKVXNJSICFIAAMILGXNDZOSCVBYGTSY");
    msg.value = 59U;

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
    msg.setTimeStamp(0.32010063627343666);
    msg.setSource(42357U);
    msg.setSourceEntity(161U);
    msg.setDestination(16626U);
    msg.setDestinationEntity(240U);
    msg.id = 32U;
    msg.period = 2814979433U;
    msg.duty_cycle = 1775282720U;

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
    msg.setTimeStamp(0.5388668671649834);
    msg.setSource(10615U);
    msg.setSourceEntity(206U);
    msg.setDestination(7535U);
    msg.setDestinationEntity(39U);
    msg.id = 148U;
    msg.period = 3904155798U;
    msg.duty_cycle = 777773206U;

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
    msg.setTimeStamp(0.04422080084877822);
    msg.setSource(51457U);
    msg.setSourceEntity(213U);
    msg.setDestination(64164U);
    msg.setDestinationEntity(79U);
    msg.id = 71U;
    msg.period = 978030121U;
    msg.duty_cycle = 2263811301U;

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
    msg.setTimeStamp(0.17019230626013404);
    msg.setSource(57456U);
    msg.setSourceEntity(148U);
    msg.setDestination(3280U);
    msg.setDestinationEntity(96U);
    msg.id = 147U;
    msg.period = 1568302884U;
    msg.duty_cycle = 2831963201U;

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
    msg.setTimeStamp(0.37367762776804303);
    msg.setSource(31229U);
    msg.setSourceEntity(77U);
    msg.setDestination(17372U);
    msg.setDestinationEntity(128U);
    msg.id = 30U;
    msg.period = 963705237U;
    msg.duty_cycle = 1062064888U;

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
    msg.setTimeStamp(0.6308157276228656);
    msg.setSource(17480U);
    msg.setSourceEntity(107U);
    msg.setDestination(41396U);
    msg.setDestinationEntity(10U);
    msg.id = 30U;
    msg.period = 1394348207U;
    msg.duty_cycle = 1220474327U;

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
    msg.setTimeStamp(0.27607081662273103);
    msg.setSource(10155U);
    msg.setSourceEntity(191U);
    msg.setDestination(7482U);
    msg.setDestinationEntity(111U);
    msg.lat = 0.6983260000401185;
    msg.lon = 0.6328993103488717;
    msg.height = 0.045813189940260735;
    msg.x = 0.3674425703796852;
    msg.y = 0.7467398606107636;
    msg.z = 0.1938809814442931;
    msg.phi = 0.6358881287632474;
    msg.theta = 0.860382541830894;
    msg.psi = 0.5153194674274563;
    msg.u = 0.5776308156039082;
    msg.v = 0.3622239550368539;
    msg.w = 0.6415151999112532;
    msg.vx = 0.4790413320698319;
    msg.vy = 0.2634154260807239;
    msg.vz = 0.19660198584191435;
    msg.p = 0.42065004332175093;
    msg.q = 0.9788156021676371;
    msg.r = 0.5807815324274401;
    msg.depth = 0.5473398518885483;
    msg.alt = 0.6027002374740563;

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
    msg.setTimeStamp(0.41460079388051496);
    msg.setSource(3411U);
    msg.setSourceEntity(251U);
    msg.setDestination(43050U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.29286608292443916;
    msg.lon = 0.18603274869625697;
    msg.height = 0.8332350334141745;
    msg.x = 0.3430502925976592;
    msg.y = 0.6934417039440803;
    msg.z = 0.24599371758530209;
    msg.phi = 0.9539571711055457;
    msg.theta = 0.8902032813302235;
    msg.psi = 0.008207710551953462;
    msg.u = 0.2522764962627917;
    msg.v = 0.07858787513178267;
    msg.w = 0.8090813700255103;
    msg.vx = 0.2889702540027407;
    msg.vy = 0.07860063436490317;
    msg.vz = 0.3020357478263881;
    msg.p = 0.9783309644998697;
    msg.q = 0.3167546453655581;
    msg.r = 0.5708101651875619;
    msg.depth = 0.05739500512638496;
    msg.alt = 0.8571691192697348;

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
    msg.setTimeStamp(0.9409266560921328);
    msg.setSource(7811U);
    msg.setSourceEntity(2U);
    msg.setDestination(28595U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.8087118439162153;
    msg.lon = 0.45242665299845064;
    msg.height = 0.8381498786814248;
    msg.x = 0.4576936148764008;
    msg.y = 0.2212687439611294;
    msg.z = 0.6319576888645716;
    msg.phi = 0.865311231208728;
    msg.theta = 0.12648284331972492;
    msg.psi = 0.8907856312537977;
    msg.u = 0.6492505917994361;
    msg.v = 0.4610406656340561;
    msg.w = 0.7185787800099398;
    msg.vx = 0.811612097088993;
    msg.vy = 0.08819081157879305;
    msg.vz = 0.3108558947938683;
    msg.p = 0.18130364226245022;
    msg.q = 0.127300582369826;
    msg.r = 0.5714385033579167;
    msg.depth = 0.7579820586484489;
    msg.alt = 0.010422355506227832;

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
    msg.setTimeStamp(0.45248930003249044);
    msg.setSource(41324U);
    msg.setSourceEntity(150U);
    msg.setDestination(61331U);
    msg.setDestinationEntity(116U);
    msg.x = 0.8571072037194246;
    msg.y = 0.853603976952752;
    msg.z = 0.30999000664235155;

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
    msg.setTimeStamp(0.2547099691384007);
    msg.setSource(26464U);
    msg.setSourceEntity(152U);
    msg.setDestination(27815U);
    msg.setDestinationEntity(105U);
    msg.x = 0.24504966192087563;
    msg.y = 0.06704969070433164;
    msg.z = 0.6143621124034307;

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
    msg.setTimeStamp(0.1927258523980091);
    msg.setSource(49145U);
    msg.setSourceEntity(79U);
    msg.setDestination(16108U);
    msg.setDestinationEntity(101U);
    msg.x = 0.3104862885868329;
    msg.y = 0.12811063878966;
    msg.z = 0.1397331660239669;

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
    msg.setTimeStamp(0.7123976831217571);
    msg.setSource(47740U);
    msg.setSourceEntity(71U);
    msg.setDestination(25289U);
    msg.setDestinationEntity(193U);
    msg.value = 0.44620120496087756;

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
    msg.setTimeStamp(0.6134502712981899);
    msg.setSource(28415U);
    msg.setSourceEntity(98U);
    msg.setDestination(52712U);
    msg.setDestinationEntity(21U);
    msg.value = 0.2823710718154743;

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
    msg.setTimeStamp(0.13782293954007818);
    msg.setSource(55946U);
    msg.setSourceEntity(119U);
    msg.setDestination(14727U);
    msg.setDestinationEntity(222U);
    msg.value = 0.39892649163606064;

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
    msg.setTimeStamp(0.33953801623657154);
    msg.setSource(8791U);
    msg.setSourceEntity(28U);
    msg.setDestination(18733U);
    msg.setDestinationEntity(207U);
    msg.value = 0.8015346565568668;

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
    msg.setTimeStamp(0.23476078311060122);
    msg.setSource(45922U);
    msg.setSourceEntity(239U);
    msg.setDestination(65403U);
    msg.setDestinationEntity(148U);
    msg.value = 0.7058938014655369;

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
    msg.setTimeStamp(0.1917005657264388);
    msg.setSource(17822U);
    msg.setSourceEntity(201U);
    msg.setDestination(24032U);
    msg.setDestinationEntity(252U);
    msg.value = 0.010620329304799725;

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
    msg.setTimeStamp(0.9091783629981182);
    msg.setSource(63511U);
    msg.setSourceEntity(223U);
    msg.setDestination(24550U);
    msg.setDestinationEntity(158U);
    msg.x = 0.46883759827087823;
    msg.y = 0.7318732479596386;
    msg.z = 0.7680302773877876;
    msg.phi = 0.33191503510679055;
    msg.theta = 0.36770710744594703;
    msg.psi = 0.8320715724569403;
    msg.p = 0.8388878436635668;
    msg.q = 0.9740634370023458;
    msg.r = 0.4574076708794397;
    msg.u = 0.959750658667852;
    msg.v = 0.12970666691443689;
    msg.w = 0.4193229613187982;
    msg.bias_psi = 0.8635215166605456;
    msg.bias_r = 0.04522176279572132;

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
    msg.setTimeStamp(0.22426329184414961);
    msg.setSource(37143U);
    msg.setSourceEntity(87U);
    msg.setDestination(63242U);
    msg.setDestinationEntity(26U);
    msg.x = 0.20791348727147851;
    msg.y = 0.21773342936360907;
    msg.z = 0.16229364435459936;
    msg.phi = 0.7084968579364096;
    msg.theta = 0.4017460253540033;
    msg.psi = 0.8313877439171864;
    msg.p = 0.08106655089675663;
    msg.q = 0.017680356131388852;
    msg.r = 0.8056860080617789;
    msg.u = 0.5650902857810433;
    msg.v = 0.35398541801870465;
    msg.w = 0.6476170409577098;
    msg.bias_psi = 0.9772541243646713;
    msg.bias_r = 0.9839255597252037;

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
    msg.setTimeStamp(0.4524011889667753);
    msg.setSource(20384U);
    msg.setSourceEntity(131U);
    msg.setDestination(25910U);
    msg.setDestinationEntity(251U);
    msg.x = 0.7496646694013296;
    msg.y = 0.5536768033161755;
    msg.z = 0.3770436979478323;
    msg.phi = 0.0711305751637682;
    msg.theta = 0.47099306899426563;
    msg.psi = 0.24627496445087704;
    msg.p = 0.13948106588070142;
    msg.q = 0.007618721473718337;
    msg.r = 0.08496440355777046;
    msg.u = 0.3825488464883451;
    msg.v = 0.3165265615037479;
    msg.w = 0.09871718204236579;
    msg.bias_psi = 0.6398491064197639;
    msg.bias_r = 0.2519293731988773;

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
    msg.setTimeStamp(0.6897121191898337);
    msg.setSource(9264U);
    msg.setSourceEntity(103U);
    msg.setDestination(47377U);
    msg.setDestinationEntity(138U);
    msg.bias_psi = 0.06684015774682595;
    msg.bias_r = 0.16506332478026253;
    msg.cog = 0.8458611460620407;
    msg.cyaw = 0.6219328319314056;
    msg.lbl_rej_level = 0.48469237936387377;
    msg.gps_rej_level = 0.6856751543442399;
    msg.custom_x = 0.12094037747939324;
    msg.custom_y = 0.5390703042175595;
    msg.custom_z = 0.8043854882312299;

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
    msg.setTimeStamp(0.41150713726689503);
    msg.setSource(45476U);
    msg.setSourceEntity(167U);
    msg.setDestination(29749U);
    msg.setDestinationEntity(191U);
    msg.bias_psi = 0.9449345304666243;
    msg.bias_r = 0.8414203242314133;
    msg.cog = 0.8182398671048152;
    msg.cyaw = 0.04145969640565805;
    msg.lbl_rej_level = 0.12375858957737806;
    msg.gps_rej_level = 0.6905822156628691;
    msg.custom_x = 0.7405287599557618;
    msg.custom_y = 0.45067919314408467;
    msg.custom_z = 0.07189363976432261;

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
    msg.setTimeStamp(0.28654623561616166);
    msg.setSource(49204U);
    msg.setSourceEntity(151U);
    msg.setDestination(45470U);
    msg.setDestinationEntity(83U);
    msg.bias_psi = 0.8181818849825151;
    msg.bias_r = 0.1800244289495453;
    msg.cog = 0.750442245340157;
    msg.cyaw = 0.9624675340250074;
    msg.lbl_rej_level = 0.5561841711876684;
    msg.gps_rej_level = 0.8334592517483812;
    msg.custom_x = 0.22912185702421117;
    msg.custom_y = 0.7259968845606681;
    msg.custom_z = 0.6225203359935382;

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
    msg.setTimeStamp(0.7188735929259679);
    msg.setSource(21975U);
    msg.setSourceEntity(245U);
    msg.setDestination(63142U);
    msg.setDestinationEntity(192U);
    msg.utc_time = 0.36404249099288455;
    msg.reason = 250U;

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
    msg.setTimeStamp(0.5140654373091987);
    msg.setSource(40004U);
    msg.setSourceEntity(57U);
    msg.setDestination(36385U);
    msg.setDestinationEntity(3U);
    msg.utc_time = 0.21529288009649195;
    msg.reason = 77U;

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
    msg.setTimeStamp(0.3783714290452218);
    msg.setSource(33575U);
    msg.setSourceEntity(142U);
    msg.setDestination(10288U);
    msg.setDestinationEntity(33U);
    msg.utc_time = 0.6287278362310526;
    msg.reason = 15U;

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
    msg.setTimeStamp(0.6952880954276339);
    msg.setSource(60919U);
    msg.setSourceEntity(244U);
    msg.setDestination(38654U);
    msg.setDestinationEntity(102U);
    msg.id = 16U;
    msg.range = 0.5937116019698322;
    msg.acceptance = 16U;

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
    msg.setTimeStamp(0.0009957813857279785);
    msg.setSource(60279U);
    msg.setSourceEntity(186U);
    msg.setDestination(21416U);
    msg.setDestinationEntity(214U);
    msg.id = 63U;
    msg.range = 0.9077893395160985;
    msg.acceptance = 147U;

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
    msg.setTimeStamp(0.8519875677458985);
    msg.setSource(64987U);
    msg.setSourceEntity(68U);
    msg.setDestination(16550U);
    msg.setDestinationEntity(146U);
    msg.id = 191U;
    msg.range = 0.35378144323458516;
    msg.acceptance = 76U;

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
    msg.setTimeStamp(0.5940781881990332);
    msg.setSource(40184U);
    msg.setSourceEntity(52U);
    msg.setDestination(58047U);
    msg.setDestinationEntity(133U);
    msg.type = 236U;
    msg.reason = 216U;
    msg.value = 0.13369586457168814;
    msg.timestep = 0.440265340612636;

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
    msg.setTimeStamp(0.06725208493690749);
    msg.setSource(40803U);
    msg.setSourceEntity(199U);
    msg.setDestination(21918U);
    msg.setDestinationEntity(235U);
    msg.type = 43U;
    msg.reason = 236U;
    msg.value = 0.4545655081684231;
    msg.timestep = 0.21032171259828703;

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
    msg.setTimeStamp(0.1341825056284881);
    msg.setSource(31349U);
    msg.setSourceEntity(228U);
    msg.setDestination(27946U);
    msg.setDestinationEntity(210U);
    msg.type = 165U;
    msg.reason = 17U;
    msg.value = 0.9881163290479532;
    msg.timestep = 0.9831563703847878;

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
    msg.setTimeStamp(0.39858570508562297);
    msg.setSource(22472U);
    msg.setSourceEntity(110U);
    msg.setDestination(63202U);
    msg.setDestinationEntity(40U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("XVIERLCITTBZNIBVBQNKOWMVVHIUSYDBQXSFFPASSJWAFAQIVRNOAVQMSJZWAMCRTAXNEORYKZGFKGSXRZECZKLTBJICEDSYOGXZKCTLXCPGYUYBHZNJJDZTTENYCWGQYOVOAHWRCQDPKNDUPEYFLHVVBHKUZCKRBDHPLTUNEYXAOOREXPBR");
    tmp_msg_0.lat = 0.833088234300168;
    tmp_msg_0.lon = 0.7506611558729531;
    tmp_msg_0.depth = 0.11532258722939637;
    tmp_msg_0.query_channel = 133U;
    tmp_msg_0.reply_channel = 148U;
    tmp_msg_0.transponder_delay = 206U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.9346440537368463;
    msg.y = 0.6418847155370172;
    msg.var_x = 0.7086477419297588;
    msg.var_y = 0.3477796098253775;
    msg.distance = 0.9788724962661589;

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
    msg.setTimeStamp(0.9265258821834897);
    msg.setSource(58233U);
    msg.setSourceEntity(42U);
    msg.setDestination(55936U);
    msg.setDestinationEntity(10U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("DTTGEUHFXJGGQVAHWHRGPYTOFHLCMSLAVYORIHJWGEMRWBIFPFMZQNIAVVSYPIWGPUDCBYKXELYJQNAVIHFBPMVTYMENEISRCVJRAGYARXXYZHJAPKSQCVREQBRO");
    tmp_msg_0.lat = 0.13656748124775886;
    tmp_msg_0.lon = 0.15663051854692578;
    tmp_msg_0.depth = 0.35172773972841687;
    tmp_msg_0.query_channel = 230U;
    tmp_msg_0.reply_channel = 140U;
    tmp_msg_0.transponder_delay = 47U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.24515771115554041;
    msg.y = 0.32908150415749704;
    msg.var_x = 0.6903010702788535;
    msg.var_y = 0.997017103600894;
    msg.distance = 0.5390217477725857;

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
    msg.setTimeStamp(0.1794679446889761);
    msg.setSource(18781U);
    msg.setSourceEntity(84U);
    msg.setDestination(29672U);
    msg.setDestinationEntity(162U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("UNQWGEUXZKHEUBFZESEQHYC");
    tmp_msg_0.lat = 0.37739771711967407;
    tmp_msg_0.lon = 0.6343906487450154;
    tmp_msg_0.depth = 0.008841366634869452;
    tmp_msg_0.query_channel = 3U;
    tmp_msg_0.reply_channel = 222U;
    tmp_msg_0.transponder_delay = 232U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.49423950512043524;
    msg.y = 0.13922376346857224;
    msg.var_x = 0.3533470261718834;
    msg.var_y = 0.08882324137020925;
    msg.distance = 0.3148439260409137;

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
    msg.setTimeStamp(0.6059654220864497);
    msg.setSource(40131U);
    msg.setSourceEntity(3U);
    msg.setDestination(30614U);
    msg.setDestinationEntity(124U);
    msg.state = 115U;

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
    msg.setTimeStamp(0.6319206144979064);
    msg.setSource(25008U);
    msg.setSourceEntity(113U);
    msg.setDestination(4625U);
    msg.setDestinationEntity(151U);
    msg.state = 250U;

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
    msg.setTimeStamp(0.8856001520665279);
    msg.setSource(23045U);
    msg.setSourceEntity(246U);
    msg.setDestination(5493U);
    msg.setDestinationEntity(225U);
    msg.state = 216U;

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
    msg.setTimeStamp(0.37779633700751813);
    msg.setSource(30940U);
    msg.setSourceEntity(135U);
    msg.setDestination(44593U);
    msg.setDestinationEntity(101U);
    msg.x = 0.16142642618017777;
    msg.y = 0.7785787332235744;
    msg.z = 0.6139182129701789;

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
    msg.setTimeStamp(0.5799919641982803);
    msg.setSource(7839U);
    msg.setSourceEntity(21U);
    msg.setDestination(11640U);
    msg.setDestinationEntity(133U);
    msg.x = 0.26675121565506676;
    msg.y = 0.002279579405416232;
    msg.z = 0.5103871344969335;

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
    msg.setTimeStamp(0.9795970368403899);
    msg.setSource(56452U);
    msg.setSourceEntity(142U);
    msg.setDestination(133U);
    msg.setDestinationEntity(233U);
    msg.x = 0.6627145846278334;
    msg.y = 0.4852423044310047;
    msg.z = 0.9806637797499482;

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
    msg.setTimeStamp(0.9959612030352049);
    msg.setSource(18286U);
    msg.setSourceEntity(205U);
    msg.setDestination(63344U);
    msg.setDestinationEntity(29U);
    msg.va = 0.18009340125219941;
    msg.aoa = 0.5968656814712512;
    msg.ssa = 0.8516062646420073;

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
    msg.setTimeStamp(0.3231246775342186);
    msg.setSource(34848U);
    msg.setSourceEntity(160U);
    msg.setDestination(57123U);
    msg.setDestinationEntity(221U);
    msg.va = 0.48069333209484855;
    msg.aoa = 0.13957709611597835;
    msg.ssa = 0.1617951692867391;

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
    msg.setTimeStamp(0.7729046799992055);
    msg.setSource(32308U);
    msg.setSourceEntity(88U);
    msg.setDestination(1735U);
    msg.setDestinationEntity(29U);
    msg.va = 0.21191802300999707;
    msg.aoa = 0.7043208364462435;
    msg.ssa = 0.28741999360642756;

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
    msg.setTimeStamp(0.880901741243209);
    msg.setSource(4323U);
    msg.setSourceEntity(141U);
    msg.setDestination(29521U);
    msg.setDestinationEntity(104U);
    msg.value = 0.8621968777025659;

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
    msg.setTimeStamp(0.8570022646025386);
    msg.setSource(45308U);
    msg.setSourceEntity(220U);
    msg.setDestination(5273U);
    msg.setDestinationEntity(243U);
    msg.value = 0.8358763663426901;

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
    msg.setTimeStamp(0.7551963575406899);
    msg.setSource(16080U);
    msg.setSourceEntity(145U);
    msg.setDestination(19511U);
    msg.setDestinationEntity(76U);
    msg.value = 0.7928247967621911;

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
    msg.setTimeStamp(0.6352132624598407);
    msg.setSource(45912U);
    msg.setSourceEntity(107U);
    msg.setDestination(28621U);
    msg.setDestinationEntity(188U);
    msg.value = 0.2222172109108368;
    msg.z_units = 127U;

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
    msg.setTimeStamp(0.6330718682389999);
    msg.setSource(17029U);
    msg.setSourceEntity(186U);
    msg.setDestination(25789U);
    msg.setDestinationEntity(157U);
    msg.value = 0.7740982202417507;
    msg.z_units = 140U;

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
    msg.setTimeStamp(0.5643629036544932);
    msg.setSource(2861U);
    msg.setSourceEntity(39U);
    msg.setDestination(10283U);
    msg.setDestinationEntity(100U);
    msg.value = 0.7771776574763032;
    msg.z_units = 21U;

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
    msg.setTimeStamp(0.07691679956876274);
    msg.setSource(41170U);
    msg.setSourceEntity(182U);
    msg.setDestination(8854U);
    msg.setDestinationEntity(133U);
    msg.value = 0.3379907306134624;
    msg.speed_units = 1U;

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
    msg.setTimeStamp(0.7450338061481059);
    msg.setSource(2161U);
    msg.setSourceEntity(196U);
    msg.setDestination(47284U);
    msg.setDestinationEntity(157U);
    msg.value = 0.9649356261590063;
    msg.speed_units = 115U;

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
    msg.setTimeStamp(0.09383152306970688);
    msg.setSource(45169U);
    msg.setSourceEntity(41U);
    msg.setDestination(56164U);
    msg.setDestinationEntity(80U);
    msg.value = 0.09711235501638693;
    msg.speed_units = 253U;

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
    msg.setTimeStamp(0.9189455082109557);
    msg.setSource(25665U);
    msg.setSourceEntity(161U);
    msg.setDestination(1110U);
    msg.setDestinationEntity(197U);
    msg.value = 0.05750069308753847;

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
    msg.setTimeStamp(0.18643316861278492);
    msg.setSource(12717U);
    msg.setSourceEntity(238U);
    msg.setDestination(36929U);
    msg.setDestinationEntity(11U);
    msg.value = 0.97536537280414;

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
    msg.setTimeStamp(0.5629356786439149);
    msg.setSource(65185U);
    msg.setSourceEntity(156U);
    msg.setDestination(57174U);
    msg.setDestinationEntity(127U);
    msg.value = 0.1421709730456927;

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
    msg.setTimeStamp(0.5167193321944147);
    msg.setSource(12281U);
    msg.setSourceEntity(231U);
    msg.setDestination(44220U);
    msg.setDestinationEntity(29U);
    msg.value = 0.7403808479239794;

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
    msg.setTimeStamp(0.2865668457127547);
    msg.setSource(51875U);
    msg.setSourceEntity(202U);
    msg.setDestination(14563U);
    msg.setDestinationEntity(13U);
    msg.value = 0.052911154741787425;

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
    msg.setTimeStamp(0.5250052641805238);
    msg.setSource(59123U);
    msg.setSourceEntity(111U);
    msg.setDestination(23813U);
    msg.setDestinationEntity(99U);
    msg.value = 0.8943694853964661;

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
    msg.setTimeStamp(0.7689388144205006);
    msg.setSource(24680U);
    msg.setSourceEntity(139U);
    msg.setDestination(63771U);
    msg.setDestinationEntity(76U);
    msg.value = 0.4296634424115292;

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
    msg.setTimeStamp(0.364652985501547);
    msg.setSource(16412U);
    msg.setSourceEntity(94U);
    msg.setDestination(32201U);
    msg.setDestinationEntity(252U);
    msg.value = 0.5096230286764063;

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
    msg.setTimeStamp(0.3547673827920619);
    msg.setSource(3443U);
    msg.setSourceEntity(243U);
    msg.setDestination(4325U);
    msg.setDestinationEntity(35U);
    msg.value = 0.5884068926024041;

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
    msg.setTimeStamp(0.5407621787493955);
    msg.setSource(61300U);
    msg.setSourceEntity(6U);
    msg.setDestination(30331U);
    msg.setDestinationEntity(19U);
    msg.path_ref = 3355136770U;
    msg.start_lat = 0.22548186578513885;
    msg.start_lon = 0.1382748852756942;
    msg.start_z = 0.0020553066015648325;
    msg.start_z_units = 135U;
    msg.end_lat = 0.8587487327665301;
    msg.end_lon = 0.13449936387087214;
    msg.end_z = 0.43812076343313155;
    msg.end_z_units = 108U;
    msg.speed = 0.29353304182259066;
    msg.speed_units = 59U;
    msg.lradius = 0.6397705739660174;
    msg.flags = 247U;

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
    msg.setTimeStamp(0.3560345696628232);
    msg.setSource(52224U);
    msg.setSourceEntity(51U);
    msg.setDestination(44138U);
    msg.setDestinationEntity(60U);
    msg.path_ref = 75778321U;
    msg.start_lat = 0.7219658432667049;
    msg.start_lon = 0.0012468143684970512;
    msg.start_z = 0.44431407665594813;
    msg.start_z_units = 213U;
    msg.end_lat = 0.8156975545176353;
    msg.end_lon = 0.7002158011995135;
    msg.end_z = 0.5471353699218239;
    msg.end_z_units = 191U;
    msg.speed = 0.9234812377586298;
    msg.speed_units = 146U;
    msg.lradius = 0.03144529425646192;
    msg.flags = 64U;

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
    msg.setTimeStamp(0.7753247218823457);
    msg.setSource(13757U);
    msg.setSourceEntity(91U);
    msg.setDestination(58904U);
    msg.setDestinationEntity(246U);
    msg.path_ref = 4172744976U;
    msg.start_lat = 0.34386896311879467;
    msg.start_lon = 0.4468857013987061;
    msg.start_z = 0.4117537625421065;
    msg.start_z_units = 187U;
    msg.end_lat = 0.18808965044671944;
    msg.end_lon = 0.30108071926735214;
    msg.end_z = 0.23288673044642538;
    msg.end_z_units = 171U;
    msg.speed = 0.80935582363282;
    msg.speed_units = 27U;
    msg.lradius = 0.5311598863412135;
    msg.flags = 149U;

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
    msg.setTimeStamp(0.3955758814307828);
    msg.setSource(35272U);
    msg.setSourceEntity(196U);
    msg.setDestination(31670U);
    msg.setDestinationEntity(20U);
    msg.x = 0.6229409689119219;
    msg.y = 0.8339575195889684;
    msg.z = 0.98129440986289;
    msg.k = 0.5954750330825829;
    msg.m = 0.28630078905904544;
    msg.n = 0.33693026622638345;
    msg.flags = 140U;

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
    msg.setTimeStamp(0.08385671352413182);
    msg.setSource(54167U);
    msg.setSourceEntity(24U);
    msg.setDestination(61865U);
    msg.setDestinationEntity(194U);
    msg.x = 0.013187524867493305;
    msg.y = 0.17249300289221214;
    msg.z = 0.8198988871795507;
    msg.k = 0.17460317857398666;
    msg.m = 0.8430755612659496;
    msg.n = 0.16252889030852857;
    msg.flags = 25U;

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
    msg.setTimeStamp(0.6765982230233664);
    msg.setSource(55559U);
    msg.setSourceEntity(207U);
    msg.setDestination(60400U);
    msg.setDestinationEntity(85U);
    msg.x = 0.36675348127259755;
    msg.y = 0.10293653049560947;
    msg.z = 0.03800493800158167;
    msg.k = 0.3251642133585083;
    msg.m = 0.3654992861596773;
    msg.n = 0.3481624874029656;
    msg.flags = 29U;

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
    msg.setTimeStamp(0.6575921338171007);
    msg.setSource(49312U);
    msg.setSourceEntity(103U);
    msg.setDestination(53973U);
    msg.setDestinationEntity(192U);
    msg.value = 0.8591863993867103;

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
    msg.setTimeStamp(0.05778662138908086);
    msg.setSource(42453U);
    msg.setSourceEntity(253U);
    msg.setDestination(6393U);
    msg.setDestinationEntity(5U);
    msg.value = 0.9233150655024931;

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
    msg.setTimeStamp(0.745142732032844);
    msg.setSource(10952U);
    msg.setSourceEntity(65U);
    msg.setDestination(17579U);
    msg.setDestinationEntity(28U);
    msg.value = 0.5370354566497327;

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
    msg.setTimeStamp(0.08087267500468365);
    msg.setSource(22979U);
    msg.setSourceEntity(92U);
    msg.setDestination(22260U);
    msg.setDestinationEntity(52U);
    msg.u = 0.298785614140186;
    msg.v = 0.04586167220343873;
    msg.w = 0.6674102753674441;
    msg.p = 0.9918743003465825;
    msg.q = 0.19510816000930897;
    msg.r = 0.7794702279287177;
    msg.flags = 62U;

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
    msg.setTimeStamp(0.6662555568360583);
    msg.setSource(46275U);
    msg.setSourceEntity(238U);
    msg.setDestination(64195U);
    msg.setDestinationEntity(143U);
    msg.u = 0.3524371266418156;
    msg.v = 0.2468812425509923;
    msg.w = 0.023572004028097893;
    msg.p = 0.390756328445248;
    msg.q = 0.9964223830940284;
    msg.r = 0.0856658728579307;
    msg.flags = 152U;

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
    msg.setTimeStamp(0.9972268019279293);
    msg.setSource(33162U);
    msg.setSourceEntity(104U);
    msg.setDestination(19671U);
    msg.setDestinationEntity(218U);
    msg.u = 0.9008673398357965;
    msg.v = 0.28298066746031636;
    msg.w = 0.4109525608180744;
    msg.p = 0.3584805020943924;
    msg.q = 0.2658197269067728;
    msg.r = 0.30297633149131975;
    msg.flags = 212U;

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
    msg.setTimeStamp(0.4673181877023146);
    msg.setSource(4487U);
    msg.setSourceEntity(220U);
    msg.setDestination(47596U);
    msg.setDestinationEntity(130U);
    msg.path_ref = 4271308269U;
    msg.start_lat = 0.5406164535628407;
    msg.start_lon = 0.19834309734622024;
    msg.start_z = 0.6358057636529844;
    msg.start_z_units = 204U;
    msg.end_lat = 0.5545263938559643;
    msg.end_lon = 0.8595315761243982;
    msg.end_z = 0.8467650303854837;
    msg.end_z_units = 139U;
    msg.lradius = 0.02823439039091391;
    msg.flags = 254U;
    msg.x = 0.28996377951588737;
    msg.y = 0.11768383707624153;
    msg.z = 0.7995758235519588;
    msg.vx = 0.02282574307884766;
    msg.vy = 0.6177663060296528;
    msg.vz = 0.6644460193870433;
    msg.course_error = 0.9907224567541312;
    msg.eta = 615U;

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
    msg.setTimeStamp(0.35069179203170364);
    msg.setSource(31751U);
    msg.setSourceEntity(189U);
    msg.setDestination(40971U);
    msg.setDestinationEntity(113U);
    msg.path_ref = 498196892U;
    msg.start_lat = 0.11510721764984189;
    msg.start_lon = 0.012603268584427507;
    msg.start_z = 0.18441701823697432;
    msg.start_z_units = 192U;
    msg.end_lat = 0.11081684664337854;
    msg.end_lon = 0.3388924218552326;
    msg.end_z = 0.954132854801356;
    msg.end_z_units = 136U;
    msg.lradius = 0.07720343132137064;
    msg.flags = 242U;
    msg.x = 0.14583697634454906;
    msg.y = 0.37593057970778354;
    msg.z = 0.5826828294108256;
    msg.vx = 0.19964441571608194;
    msg.vy = 0.74482516816682;
    msg.vz = 0.18539629565419957;
    msg.course_error = 0.45936498422036554;
    msg.eta = 34453U;

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
    msg.setTimeStamp(0.6967799573772896);
    msg.setSource(52158U);
    msg.setSourceEntity(133U);
    msg.setDestination(53612U);
    msg.setDestinationEntity(235U);
    msg.path_ref = 2853529242U;
    msg.start_lat = 0.027135782120871532;
    msg.start_lon = 0.20444086232862602;
    msg.start_z = 0.7379699044305245;
    msg.start_z_units = 227U;
    msg.end_lat = 0.7179280554160631;
    msg.end_lon = 0.8059125758577448;
    msg.end_z = 0.43565597071225226;
    msg.end_z_units = 101U;
    msg.lradius = 0.7820382250119206;
    msg.flags = 115U;
    msg.x = 0.6470463229019252;
    msg.y = 0.9019139804372018;
    msg.z = 0.7843347192751873;
    msg.vx = 0.6496102528065462;
    msg.vy = 0.738110007168192;
    msg.vz = 0.6764131124989031;
    msg.course_error = 0.19382737644118575;
    msg.eta = 57990U;

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
    msg.setTimeStamp(0.8681522708403698);
    msg.setSource(2451U);
    msg.setSourceEntity(64U);
    msg.setDestination(18837U);
    msg.setDestinationEntity(186U);
    msg.k = 0.653150496618002;
    msg.m = 0.5340107528345901;
    msg.n = 0.18894797252570206;

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
    msg.setTimeStamp(0.18863239208171556);
    msg.setSource(25311U);
    msg.setSourceEntity(77U);
    msg.setDestination(44630U);
    msg.setDestinationEntity(100U);
    msg.k = 0.47644025362933495;
    msg.m = 0.25490020185185935;
    msg.n = 0.8926703673794183;

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
    msg.setTimeStamp(0.0906126563927302);
    msg.setSource(48928U);
    msg.setSourceEntity(44U);
    msg.setDestination(39164U);
    msg.setDestinationEntity(130U);
    msg.k = 0.07815340985221286;
    msg.m = 0.25345744054046837;
    msg.n = 0.19281713053590643;

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
    msg.setTimeStamp(0.164929769016541);
    msg.setSource(26789U);
    msg.setSourceEntity(127U);
    msg.setDestination(44735U);
    msg.setDestinationEntity(157U);
    msg.p = 0.4883768914353318;
    msg.i = 0.6633107588609776;
    msg.d = 0.8113373351008811;
    msg.a = 0.22875612770052733;

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
    msg.setTimeStamp(0.768995410573645);
    msg.setSource(42819U);
    msg.setSourceEntity(248U);
    msg.setDestination(36437U);
    msg.setDestinationEntity(231U);
    msg.p = 0.1333317043492509;
    msg.i = 0.5410252505201252;
    msg.d = 0.2763893704014465;
    msg.a = 0.5864731133080255;

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
    msg.setTimeStamp(0.0006352908993516593);
    msg.setSource(34691U);
    msg.setSourceEntity(175U);
    msg.setDestination(52169U);
    msg.setDestinationEntity(105U);
    msg.p = 0.024980315813313392;
    msg.i = 0.4352037344222667;
    msg.d = 0.1619775706090888;
    msg.a = 0.17405032633841144;

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
    msg.setTimeStamp(0.7116396395966903);
    msg.setSource(30877U);
    msg.setSourceEntity(80U);
    msg.setDestination(4875U);
    msg.setDestinationEntity(142U);
    msg.op = 5U;

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
    msg.setTimeStamp(0.36813825196422845);
    msg.setSource(43177U);
    msg.setSourceEntity(178U);
    msg.setDestination(53912U);
    msg.setDestinationEntity(116U);
    msg.op = 241U;

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
    msg.setTimeStamp(0.9829262882767222);
    msg.setSource(52095U);
    msg.setSourceEntity(167U);
    msg.setDestination(56142U);
    msg.setDestinationEntity(176U);
    msg.op = 60U;

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
    msg.setTimeStamp(0.21843117648018484);
    msg.setSource(20530U);
    msg.setSourceEntity(38U);
    msg.setDestination(12726U);
    msg.setDestinationEntity(208U);
    msg.x = 0.5682528693201627;
    msg.y = 0.5914264500329429;
    msg.z = 0.49983367826695213;
    msg.vx = 0.2910825648241896;
    msg.vy = 0.6300272211342554;
    msg.vz = 0.14179658917794347;
    msg.ax = 0.4237128327122758;
    msg.ay = 0.1064047080028947;
    msg.az = 0.8768481838858972;
    msg.flags = 62653U;

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
    msg.setTimeStamp(0.22969220782609756);
    msg.setSource(15544U);
    msg.setSourceEntity(26U);
    msg.setDestination(4519U);
    msg.setDestinationEntity(212U);
    msg.x = 0.49286298913465865;
    msg.y = 0.6895368856611727;
    msg.z = 0.6758555612637565;
    msg.vx = 0.4737486729016519;
    msg.vy = 0.5039127794449396;
    msg.vz = 0.24682793101708633;
    msg.ax = 0.026090326028462618;
    msg.ay = 0.6018419169453204;
    msg.az = 0.21480370414229022;
    msg.flags = 50310U;

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
    msg.setTimeStamp(0.033297032306590646);
    msg.setSource(13065U);
    msg.setSourceEntity(44U);
    msg.setDestination(42564U);
    msg.setDestinationEntity(200U);
    msg.x = 0.13823588305769596;
    msg.y = 0.39503520903452305;
    msg.z = 0.6186637965796643;
    msg.vx = 0.9301609337610788;
    msg.vy = 0.49130735852854035;
    msg.vz = 0.42916797399577666;
    msg.ax = 0.790546992407678;
    msg.ay = 0.4009970440196923;
    msg.az = 0.6077184234471192;
    msg.flags = 59171U;

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
    msg.setTimeStamp(0.016925891841355067);
    msg.setSource(57203U);
    msg.setSourceEntity(251U);
    msg.setDestination(55725U);
    msg.setDestinationEntity(214U);
    msg.value = 0.6458225901962114;

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
    msg.setTimeStamp(0.7648918461254112);
    msg.setSource(9387U);
    msg.setSourceEntity(145U);
    msg.setDestination(24640U);
    msg.setDestinationEntity(112U);
    msg.value = 0.5342409265898967;

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
    msg.setTimeStamp(0.19160562949452553);
    msg.setSource(53109U);
    msg.setSourceEntity(110U);
    msg.setDestination(8267U);
    msg.setDestinationEntity(104U);
    msg.value = 0.8830584663447326;

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
    msg.setTimeStamp(0.9585471544877718);
    msg.setSource(31025U);
    msg.setSourceEntity(167U);
    msg.setDestination(36991U);
    msg.setDestinationEntity(237U);
    msg.timeout = 34961U;
    msg.lat = 0.6849575301224848;
    msg.lon = 0.745163184111111;
    msg.z = 0.9039343456760114;
    msg.z_units = 19U;
    msg.speed = 0.948211523611601;
    msg.speed_units = 121U;
    msg.roll = 0.41116570074143477;
    msg.pitch = 0.517030471204871;
    msg.yaw = 0.014749911475023691;
    msg.custom.assign("UMNYMYKYXQALTCFRUNHFDWPKZPDQCLNYNLVBQBOHXYISDMIYMGJPFWPEQPHJTVTZDRFCZQRDALVCLKQABBSSXRWDXDZFWBWIHXWIUCFYWZARNYWOIVNDCHMFUSCKIVLBCJZGSXNUNXQMRQPOUGXJIKIBQAUANYXTJUOSGIOGTOCZEGKIMMJBTRPVTCGAFEATOQRDVL");

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
    msg.setTimeStamp(0.018854920023160027);
    msg.setSource(34565U);
    msg.setSourceEntity(87U);
    msg.setDestination(58805U);
    msg.setDestinationEntity(85U);
    msg.timeout = 12214U;
    msg.lat = 0.40895701332408096;
    msg.lon = 0.13793257790792168;
    msg.z = 0.4904600620194881;
    msg.z_units = 201U;
    msg.speed = 0.30455509861414776;
    msg.speed_units = 113U;
    msg.roll = 0.0741045626254403;
    msg.pitch = 0.6183961875198372;
    msg.yaw = 0.7964272495562614;
    msg.custom.assign("GVXAMIHMGTXLRJMHCKEIGNVQJAJJZZMDNXYXKODFCSUOBHRBWIOINHPNKVJFFLGQOWLEWQFGRDDXKTKXQLNVVRRWXNPBPLGYUAASTQIPBPXFUQRPKDENSCUHWTRPRITAYCNVYUTOMXOAEFUBYDVPIHSNWJYDTZYKNULQOULPQWMMATVXOCUBEZIZIHZRECLEWTEJGUWYKGDEFVHGJCSQAMDBHMVSKTJFHOP");

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
    msg.setTimeStamp(0.8942279657976434);
    msg.setSource(38222U);
    msg.setSourceEntity(233U);
    msg.setDestination(658U);
    msg.setDestinationEntity(198U);
    msg.timeout = 28331U;
    msg.lat = 0.10734916936663741;
    msg.lon = 0.7986617831176999;
    msg.z = 0.43431504505448926;
    msg.z_units = 34U;
    msg.speed = 0.746792515894848;
    msg.speed_units = 16U;
    msg.roll = 0.3723117433667382;
    msg.pitch = 0.7290104230890387;
    msg.yaw = 0.3028092257395216;
    msg.custom.assign("UDZWIPZLSBYPLPGTFHXUNTLMSWDQFWCRTWBWVWYXUZGYHMKAXTLQARBAIXLPKVBMEUYRWQDOBEXBDHSFCNYFPDVJJHVCBEZC");

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
    msg.setTimeStamp(0.8784409767409487);
    msg.setSource(12815U);
    msg.setSourceEntity(227U);
    msg.setDestination(7938U);
    msg.setDestinationEntity(151U);
    msg.timeout = 21942U;
    msg.lat = 0.83811153251279;
    msg.lon = 0.25924683540602667;
    msg.z = 0.5452266567830795;
    msg.z_units = 197U;
    msg.speed = 0.05981763118932393;
    msg.speed_units = 40U;
    msg.duration = 17039U;
    msg.radius = 0.6704657382907814;
    msg.flags = 101U;
    msg.custom.assign("XYZPGJLUERJAMMJWLNKUEITCTJGACOISGFPADVBZQWYGQYDFARZVVDIBQFHEMXWHOYIJBSQVDCCHDMYDWZCXWENZPSKSNKAXRKWPJOHRIBCYWYHCRHUQTAELMYQPFELXRIVZOJFEFMNAFBLQXQZMATLPITBXYWTEBLQZZNRSSHGABFOUGKHCGLFBWVPIZPLDPMGJIUXFNSOODKNOTDHIVPNDUUWKNUVSQBERLNCJSTHUROYVMX");

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
    msg.setTimeStamp(0.42104203721116773);
    msg.setSource(18460U);
    msg.setSourceEntity(21U);
    msg.setDestination(49854U);
    msg.setDestinationEntity(98U);
    msg.timeout = 53470U;
    msg.lat = 0.9761013498511384;
    msg.lon = 0.5156713961045203;
    msg.z = 0.718233057529044;
    msg.z_units = 58U;
    msg.speed = 0.603552237735586;
    msg.speed_units = 157U;
    msg.duration = 43053U;
    msg.radius = 0.5166785377091354;
    msg.flags = 169U;
    msg.custom.assign("WABXMPLCRFDQCCNSNNMLMIEBYGWZADAJDSFGZCTVJLUQZAAYEEVQEUEBYGTLGERDGNHSOHSEQPKTHFJTGZOSPXNYHSUFUHOWVI");

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
    msg.setTimeStamp(0.6660246919807179);
    msg.setSource(25368U);
    msg.setSourceEntity(17U);
    msg.setDestination(15288U);
    msg.setDestinationEntity(189U);
    msg.timeout = 2737U;
    msg.lat = 0.23307446230700857;
    msg.lon = 0.6799631618505348;
    msg.z = 0.8444078131359438;
    msg.z_units = 146U;
    msg.speed = 0.47090840048218796;
    msg.speed_units = 250U;
    msg.duration = 23884U;
    msg.radius = 0.7288328669942911;
    msg.flags = 22U;
    msg.custom.assign("MBAEEKRENLCFSZVLFFJHBNGCSXWWXMMXGAPHRVTSIYURPCJZAOHZIFUHPYXUBWBOFRGCZLNXSKIVLOYHEFVMKSXJWSUEWKKWYMVMVVIGLFMLPIRBXYXTHQXJQPIRZZQFGMNJHOOBVBPGHYKTPCNKD");

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
    msg.setTimeStamp(0.4536184343304491);
    msg.setSource(15762U);
    msg.setSourceEntity(218U);
    msg.setDestination(43584U);
    msg.setDestinationEntity(121U);
    msg.custom.assign("OJFBBMTCQDUWWYTPKCQCNGNWQSIDQZAPJUIAIUDFHVPYVSRACAEMBFKYLEWKUJPWZEAIGXTOGOECTNGJZIMWUPPQISAUHKFWERLJZFPQDVSDCSXSAHGRDHEZZPAKGVJXYVNTRNRFLZBYTLHNVZFOQUMVNMEHSQACSZRHYGSAXEXQBLVRCYPOJELTLDIXOKUNBZSNBIYHHICMLLVXKXTOXFGOVYWTMRMUWUMKB");

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
    msg.setTimeStamp(0.38698799217057867);
    msg.setSource(33661U);
    msg.setSourceEntity(117U);
    msg.setDestination(15923U);
    msg.setDestinationEntity(216U);
    msg.custom.assign("XTBZMOYVIYDSWTQETUHJKAFAXFSXWNYQWYWUILTNGNHAPVQHLDRKWRXHDEDBBICLDFKBCQWHYULLZQOMECJGAZGVVULXNIOVLDECISUIPZYTGAFBD");

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
    msg.setTimeStamp(0.7123164153572146);
    msg.setSource(28209U);
    msg.setSourceEntity(203U);
    msg.setDestination(25732U);
    msg.setDestinationEntity(124U);
    msg.custom.assign("QTBQXEZZRIUZBPTYXUAGZGZIUWXEQGHJHPNNSCJLQDERLFNCYYGADNCBMZHDBKYVROSHLMAVEUTOITVGKJRESJUKKIBUIDWFMCKFXGGQWPUAMNFMGCDJXVHLVOZEGFLHFUVMNOCYNJFEAFR");

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
    msg.setTimeStamp(0.8457071523635376);
    msg.setSource(50484U);
    msg.setSourceEntity(30U);
    msg.setDestination(52443U);
    msg.setDestinationEntity(213U);
    msg.timeout = 62942U;
    msg.lat = 0.4922683554004835;
    msg.lon = 0.21613593247676;
    msg.z = 0.355155455953709;
    msg.z_units = 97U;
    msg.duration = 65476U;
    msg.speed = 0.958884215858883;
    msg.speed_units = 137U;
    msg.type = 180U;
    msg.radius = 0.16750824861607916;
    msg.length = 0.8659413656115322;
    msg.bearing = 0.9137467266918805;
    msg.direction = 3U;
    msg.custom.assign("DPUMHIEPIXZVQQTXVPPQYQZEFRVVNTBXDLNRUVTFHTOIFFCTMBGZKZAB");

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
    msg.setTimeStamp(0.8748309314027984);
    msg.setSource(22130U);
    msg.setSourceEntity(127U);
    msg.setDestination(47150U);
    msg.setDestinationEntity(4U);
    msg.timeout = 45522U;
    msg.lat = 0.7596786475831422;
    msg.lon = 0.3108468852715177;
    msg.z = 0.3621746929043794;
    msg.z_units = 214U;
    msg.duration = 45156U;
    msg.speed = 0.6953338613954267;
    msg.speed_units = 145U;
    msg.type = 49U;
    msg.radius = 0.012213845322220918;
    msg.length = 0.6448225938460923;
    msg.bearing = 0.6638747262544183;
    msg.direction = 102U;
    msg.custom.assign("VWMXJFZMXENBTXRVMBRCHLHBXFLRPDDKZHRUWUZNTQJTCRPSQNCOJAPFLGIMOQWPQCOVETJBBOZCWJINSLEBADHLEKMAFFJXLUILNEFRYADQYSIZVIPIKYPEQPTZJDHVUUICBXKUGWGSMGXATFMQZLVOWYFRVXYKLYEQFTFANGPITNETRKDEOJIMHDNHSWQBDZUPSCZBKCOVTSJSQ");

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
    msg.setTimeStamp(0.0015874594107075923);
    msg.setSource(618U);
    msg.setSourceEntity(231U);
    msg.setDestination(14403U);
    msg.setDestinationEntity(244U);
    msg.timeout = 59466U;
    msg.lat = 0.37373352489270584;
    msg.lon = 0.2425223094242568;
    msg.z = 0.0038370610942550787;
    msg.z_units = 152U;
    msg.duration = 16262U;
    msg.speed = 0.027280117412413873;
    msg.speed_units = 192U;
    msg.type = 61U;
    msg.radius = 0.074456200641005;
    msg.length = 0.4290363186874314;
    msg.bearing = 0.17522833082773692;
    msg.direction = 103U;
    msg.custom.assign("ABOVYMAHOCQWAMUFNDEXLIZPWTIZZOBYUVJJBNGOFFBDMEZHUCHPZMJCQYBQTQVEHFRAOODUREUDMENXTSGUKQHSWKMAHQWBGGHXZUTPADSJVONAIGNKXLJUFFRAYLPEARDPSUIJWLYCFLIXCEXOZWGVTZVYYZYTLBPSNGGLROJQVHRSTPITGXLMSBSVDKEQZJNKWCJWRHOIXLCMNPBCNXIKKRCDMUEW");

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
    msg.setTimeStamp(0.7149523864637397);
    msg.setSource(30083U);
    msg.setSourceEntity(107U);
    msg.setDestination(49942U);
    msg.setDestinationEntity(103U);
    msg.duration = 10029U;
    msg.custom.assign("YRPEFDJLBHKHPUMNONZC");

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
    msg.setTimeStamp(0.650574367472051);
    msg.setSource(5978U);
    msg.setSourceEntity(165U);
    msg.setDestination(57505U);
    msg.setDestinationEntity(179U);
    msg.duration = 46995U;
    msg.custom.assign("JKYTICRXVXOHMEOMOQFTAMQEZHQQKWAJPKGFFJOIUWROVSTPIIYZWCKLZKNUIDDMLHZQEUJRINSGPWZSEEYSYOMWEBRRATNWTKWCZUGM");

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
    msg.setTimeStamp(0.7956708810002026);
    msg.setSource(29004U);
    msg.setSourceEntity(41U);
    msg.setDestination(19952U);
    msg.setDestinationEntity(206U);
    msg.duration = 24488U;
    msg.custom.assign("JJMKEWHDCLBTCVVTXSYFIPZQCJXQENEPYDZAVLCIYWUWYSUZZIIQGNVGBKQWICUMNXEB");

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
    msg.setTimeStamp(0.14141873933415416);
    msg.setSource(49493U);
    msg.setSourceEntity(48U);
    msg.setDestination(30106U);
    msg.setDestinationEntity(117U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.12469749720500178;
    tmp_msg_0.speed_units = 93U;
    msg.control.set(tmp_msg_0);
    msg.duration = 47817U;
    msg.custom.assign("QAYYGZHVWDXTGDQAOBCZPVCFGOMYOPUGBKLLAHPAZBJDHCDYKFANTCICDTKRLSWMKZMGWZBXCFBNNXOFFPLLWVTNHUYTYNSLHAWUXBMTWGLRPQEUXQSQMSJEIEQUINEXOZEXYSYHJEUROKFQBHCSTWUZBCVLPQHIMGIRWRPSVTOJCSIRZQWDJVOENWFJLAPYAFEJOJMTLIOEBVVJKHAKXIGFKV");

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
    msg.setTimeStamp(0.2601832625121858);
    msg.setSource(7748U);
    msg.setSourceEntity(232U);
    msg.setDestination(6908U);
    msg.setDestinationEntity(29U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.44422182690619905;
    tmp_msg_0.z_units = 5U;
    msg.control.set(tmp_msg_0);
    msg.duration = 16389U;
    msg.custom.assign("HEYKNTLFWVUQYTGRNPQXUSBJXSWRYCFFRXWTQPUHOAAWGXVFMXHETQEGQRNASHICJOPGBGEQUVENNKCZ");

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
    msg.setTimeStamp(0.7946103716030067);
    msg.setSource(24293U);
    msg.setSourceEntity(190U);
    msg.setDestination(10589U);
    msg.setDestinationEntity(159U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.9043841581298592;
    msg.control.set(tmp_msg_0);
    msg.duration = 62740U;
    msg.custom.assign("QVOJZWXJCPYXLPZYATAJFZPQBYWKNCNVWUHRVDAY");

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
    msg.setTimeStamp(0.22746481914055972);
    msg.setSource(32859U);
    msg.setSourceEntity(189U);
    msg.setDestination(32047U);
    msg.setDestinationEntity(243U);
    msg.timeout = 12088U;
    msg.lat = 0.25966995161994666;
    msg.lon = 0.465377735812074;
    msg.z = 0.7933827802399115;
    msg.z_units = 230U;
    msg.speed = 0.7174274781928421;
    msg.speed_units = 148U;
    msg.bearing = 0.6696145224811357;
    msg.cross_angle = 0.9190450518210856;
    msg.width = 0.5879279621884007;
    msg.length = 0.027375070328394258;
    msg.hstep = 0.1961994695353928;
    msg.coff = 11U;
    msg.alternation = 165U;
    msg.flags = 238U;
    msg.custom.assign("GUORSLLJPDXZTTKGJMHODGIZJLPUXKXJI");

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
    msg.setTimeStamp(0.5992085635251883);
    msg.setSource(55801U);
    msg.setSourceEntity(180U);
    msg.setDestination(47080U);
    msg.setDestinationEntity(148U);
    msg.timeout = 60784U;
    msg.lat = 0.45634053921940276;
    msg.lon = 0.669045538321357;
    msg.z = 0.10235042738945044;
    msg.z_units = 28U;
    msg.speed = 0.9068244495172985;
    msg.speed_units = 189U;
    msg.bearing = 0.38273427729757303;
    msg.cross_angle = 0.37678755238481454;
    msg.width = 0.5546428014520406;
    msg.length = 0.7844836123458833;
    msg.hstep = 0.01417810166430844;
    msg.coff = 148U;
    msg.alternation = 248U;
    msg.flags = 117U;
    msg.custom.assign("RNQBGIAJTJQCHZKFBUUNOCANYGCRHQXIRBVLKWLGTYLWSFSMXGKYZHITLSJPDAYTDVYHXOEQXWNNSWHDBKVGLSCUYCHPNLAEYMJRKKXEMMRVFOUAGPQYHKRQEUEPDHODUNEKSBFEIUVIOZEXEIRZUWPPZWFDDHWVLPBDPRJVTXTQBPBZRQJRGOG");

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
    msg.setTimeStamp(0.6936021875211656);
    msg.setSource(13798U);
    msg.setSourceEntity(252U);
    msg.setDestination(4062U);
    msg.setDestinationEntity(153U);
    msg.timeout = 53453U;
    msg.lat = 0.6522918454965719;
    msg.lon = 0.25934143276228083;
    msg.z = 0.6403465208101963;
    msg.z_units = 251U;
    msg.speed = 0.04031706409494551;
    msg.speed_units = 188U;
    msg.bearing = 0.7912781194088796;
    msg.cross_angle = 0.2988592825589079;
    msg.width = 0.5913497469932826;
    msg.length = 0.01740682438327701;
    msg.hstep = 0.36710026626844705;
    msg.coff = 34U;
    msg.alternation = 168U;
    msg.flags = 53U;
    msg.custom.assign("XTLYTETUJMAAFKDOVJLSKISUMKVMPIQNWQWOLHRKREKRCBUJZBSCITFPNHYCGMRPYOVHBGFFARDFNXHITXVHUFNBDJOCQBFBOSQRNHXVPDEFEKRAGZSUVQHJYIESMHMCCYDGURGHKLXKWJNTWEQSXPFZGZYDPBJAPNCDUHOOMYAZMGEUXD");

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
    msg.setTimeStamp(0.5026558659136303);
    msg.setSource(28806U);
    msg.setSourceEntity(46U);
    msg.setDestination(18116U);
    msg.setDestinationEntity(28U);
    msg.timeout = 55480U;
    msg.lat = 0.010975591321716327;
    msg.lon = 0.9403920491699047;
    msg.z = 0.4572503141145352;
    msg.z_units = 211U;
    msg.speed = 0.03958212365281222;
    msg.speed_units = 228U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.21510593603166428;
    tmp_msg_0.y = 0.4494297169691778;
    tmp_msg_0.z = 0.3237130051462437;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("IJOPZSIQVBMZMUPLBRBNVGOYKPCGZGGSMEHRJAGKMXDXZYRFXXWAWOAEWONNSLTLWSVMLPLMGUZFKOPIDYSQVNYTESFUVURTCEMCCEWJBQRUDVUOSXQKEHWGYAVRTZTISSHSIXJDUZOAADPZIRJIYNBNTTJQNBEEBLMFRQFCDIXEULCOAAHYQJOFKXUFGOHQRHYXZBLCHQIGKNMCFEJTWYKKTKAFUIPDFXG");

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
    msg.setTimeStamp(0.7406498991600207);
    msg.setSource(36678U);
    msg.setSourceEntity(125U);
    msg.setDestination(9254U);
    msg.setDestinationEntity(165U);
    msg.timeout = 57865U;
    msg.lat = 0.793700492534599;
    msg.lon = 0.5321788993079963;
    msg.z = 0.9494418962893973;
    msg.z_units = 250U;
    msg.speed = 0.19339230749265013;
    msg.speed_units = 120U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.2617780749547137;
    tmp_msg_0.y = 0.5142958894812928;
    tmp_msg_0.z = 0.5648854484832925;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NYGVOUOZQOCQPBTEVHLPHPZOJYMCYKUWAURELMVHTCYDQCNONFYVHABZVQMBQLXYXKKLGLMRPFBCLWOTNXKRPWEJZWIUIIBZKNSNYDQSJTBKCNVGXDHSMACAOLHGSRJGIEACCSMAEBYFNWXSTUI");

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
    msg.setTimeStamp(0.5230767459148323);
    msg.setSource(16000U);
    msg.setSourceEntity(130U);
    msg.setDestination(54838U);
    msg.setDestinationEntity(26U);
    msg.timeout = 57042U;
    msg.lat = 0.10975176276754983;
    msg.lon = 0.09986941514403658;
    msg.z = 0.26936594699077;
    msg.z_units = 187U;
    msg.speed = 0.541660121247156;
    msg.speed_units = 40U;
    msg.custom.assign("OFPRRNTSKUAADUEXTYIPTDMJIPEJFPFBLDJBIXNOTULONULLZPGGEHYZXNIFBMMEPDLRUHMIMDIESZRTALZIJWLJEKSCSCSDXCHGGTOQUWNODAZOCMLOAXRQXXTH");

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
    msg.setTimeStamp(0.13002697850705813);
    msg.setSource(40123U);
    msg.setSourceEntity(211U);
    msg.setDestination(12839U);
    msg.setDestinationEntity(216U);
    msg.x = 0.7145663827873121;
    msg.y = 0.1099221311370091;
    msg.z = 0.6959922051210699;

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
    msg.setTimeStamp(0.686397671367183);
    msg.setSource(50963U);
    msg.setSourceEntity(174U);
    msg.setDestination(2581U);
    msg.setDestinationEntity(191U);
    msg.x = 0.5144012966405932;
    msg.y = 0.13433856206969352;
    msg.z = 0.8098235734726615;

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
    msg.setTimeStamp(0.988962657075351);
    msg.setSource(27340U);
    msg.setSourceEntity(249U);
    msg.setDestination(40971U);
    msg.setDestinationEntity(182U);
    msg.x = 0.44671036329333014;
    msg.y = 0.8753839775390316;
    msg.z = 0.6678112977691532;

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
    msg.setTimeStamp(0.6591746961756528);
    msg.setSource(42243U);
    msg.setSourceEntity(150U);
    msg.setDestination(29687U);
    msg.setDestinationEntity(113U);
    msg.timeout = 29269U;
    msg.lat = 0.8834871830190235;
    msg.lon = 0.16448284838631;
    msg.z = 0.21749324531099157;
    msg.z_units = 215U;
    msg.amplitude = 0.11258678107618314;
    msg.pitch = 0.9658505817593173;
    msg.speed = 0.5324108427754487;
    msg.speed_units = 232U;
    msg.custom.assign("FIAXAJQYDSUHSXRLWDJXQPCISXKEEMEZKLHJPXLJIAGJMOOSRST");

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
    msg.setTimeStamp(0.05130689660064924);
    msg.setSource(48574U);
    msg.setSourceEntity(179U);
    msg.setDestination(20939U);
    msg.setDestinationEntity(191U);
    msg.timeout = 16487U;
    msg.lat = 0.8960438320677573;
    msg.lon = 0.6600140343980356;
    msg.z = 0.8221488775825564;
    msg.z_units = 157U;
    msg.amplitude = 0.9448495214699612;
    msg.pitch = 0.9232827098723897;
    msg.speed = 0.9643930004350018;
    msg.speed_units = 160U;
    msg.custom.assign("ECBHPQLZZZDNXMSUWDVGRGHDZTOAZVKIEFLTDCDTOEHYFMAIWFEUQUNJYCKTOXFONGYQOPYSXWFVBITLITTIHEMLFZAVMJSBHRLINBJYMNQWALXJZBHQCKNWZKYIOFSIQSAPUCOPNLKNGVEGGUHPBEWUSXGKOOSQWOPUPZMHJCRVZAPDWGJUKMFYVDRMCQNXNYRBIREXJKDJRJTXSUVALJVABABPKATXVREFL");

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
    msg.setTimeStamp(0.09517739857018925);
    msg.setSource(46109U);
    msg.setSourceEntity(106U);
    msg.setDestination(16403U);
    msg.setDestinationEntity(72U);
    msg.timeout = 13397U;
    msg.lat = 0.12262086429676877;
    msg.lon = 0.6630490413075267;
    msg.z = 0.8107846480354239;
    msg.z_units = 210U;
    msg.amplitude = 0.9743935173402335;
    msg.pitch = 0.7216067114069196;
    msg.speed = 0.3508870959326731;
    msg.speed_units = 96U;
    msg.custom.assign("XSATJMSBAPHIBPIRSOLCOVLDVLECYLKWFKETXNEFTGUCEGAEWFYBRHXNZOUNVYFZUHIADRCSFYHJTYKAFUQQORPWBERXMWDSDJWTHULRWUFWOJXPPXEPHMDTJJQJAORFPZEVKLGUAZVTSHGGJIKCAQCQPDQKZGQIVCVYSYSRFTNUCMNKCDPPHMOCMQOTNKHYDLEEGSVQ");

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
    msg.setTimeStamp(0.17854810875687088);
    msg.setSource(60681U);
    msg.setSourceEntity(198U);
    msg.setDestination(14097U);
    msg.setDestinationEntity(237U);

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
    msg.setTimeStamp(0.4594270638662711);
    msg.setSource(51486U);
    msg.setSourceEntity(91U);
    msg.setDestination(64879U);
    msg.setDestinationEntity(207U);

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
    msg.setTimeStamp(0.4378909518590647);
    msg.setSource(5679U);
    msg.setSourceEntity(109U);
    msg.setDestination(262U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.38939050382890183);
    msg.setSource(50738U);
    msg.setSourceEntity(175U);
    msg.setDestination(10324U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.2058580984199252;
    msg.lon = 0.01285613881168568;
    msg.z = 0.8337717864260988;
    msg.z_units = 17U;
    msg.radius = 0.3001563015221196;
    msg.duration = 12829U;
    msg.speed = 0.436673134608083;
    msg.speed_units = 147U;
    msg.custom.assign("PPZWKUJSBJDHHTNTNGNXWMLNTDRVUQYXSFPMDKRCQYURNZVQELOJFFHBLYOSYBIGXRASGEZABPIWMWOCIKEIQJMUDFPJCINUNYGGJLHGZAKMPDIMEFGLS");

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
    msg.setTimeStamp(0.6156278653624166);
    msg.setSource(8277U);
    msg.setSourceEntity(252U);
    msg.setDestination(59772U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.08849231303736349;
    msg.lon = 0.2253568028476055;
    msg.z = 0.409929425282753;
    msg.z_units = 118U;
    msg.radius = 0.1273502449109183;
    msg.duration = 41474U;
    msg.speed = 0.9602197986664459;
    msg.speed_units = 214U;
    msg.custom.assign("HTNOCJIVBUWQZYUENOJMTLMQFDNTFZPGBIRTBWVSKZRVMPIIONKYJTKJHBESOPHAYEEWXWNIXLWSGLVSVURRIFXNIDAPASTIQJFDFWQXQMKISSWOLXLZRPJESBZYKQDULATDXVKJZFGFHQYNAOCBFVUYMZOAGKXQOMVSUIMLMRUHQVUXAYNGKNVEXYOWTDPAHODBNFGWHGJBACABEKECBHHRPCCGLDPDFJRZLRZRZJSMGEWCPYKCQU");

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
    msg.setTimeStamp(0.9518563276533917);
    msg.setSource(63421U);
    msg.setSourceEntity(49U);
    msg.setDestination(62372U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.030256225728855224;
    msg.lon = 0.14046545687690637;
    msg.z = 0.895219602445934;
    msg.z_units = 230U;
    msg.radius = 0.6319609750335368;
    msg.duration = 10166U;
    msg.speed = 0.5886934993217376;
    msg.speed_units = 36U;
    msg.custom.assign("GIZMBFIJENEYRJDVNLQKMXQMT");

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
    msg.setTimeStamp(0.7435586444174981);
    msg.setSource(61992U);
    msg.setSourceEntity(14U);
    msg.setDestination(20122U);
    msg.setDestinationEntity(240U);
    msg.timeout = 20808U;
    msg.flags = 126U;
    msg.lat = 0.30351811633131487;
    msg.lon = 0.4796326185783303;
    msg.start_z = 0.49938740239214885;
    msg.start_z_units = 115U;
    msg.end_z = 0.7358711667008052;
    msg.end_z_units = 172U;
    msg.radius = 0.8915550273342087;
    msg.speed = 0.9326605354050104;
    msg.speed_units = 60U;
    msg.custom.assign("YYGBNPOHTJPWFNRHGBXQCTCWJSFEKFMNSHZSGWEXUBXNWXVBCHAKIUPTQOBZLSHZHIGRXTKYUMUTMFCSRWLODIYUODZQAEARUCQCVUNAJXNRYLVGNYIIEAKPGEVTWZXWUEPDZKOFNCQOBJJJSMQZXFPMDDLJIWVEDKVZRM");

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
    msg.setTimeStamp(0.6833082091891505);
    msg.setSource(9772U);
    msg.setSourceEntity(59U);
    msg.setDestination(62661U);
    msg.setDestinationEntity(30U);
    msg.timeout = 19995U;
    msg.flags = 62U;
    msg.lat = 0.3233073137729132;
    msg.lon = 0.24720783891951226;
    msg.start_z = 0.7373845703013874;
    msg.start_z_units = 6U;
    msg.end_z = 0.3741960364197424;
    msg.end_z_units = 8U;
    msg.radius = 0.7714547743524551;
    msg.speed = 0.8451849618132113;
    msg.speed_units = 83U;
    msg.custom.assign("OAETQHLPCBJXBORLPGMYFZLDUYOBUUQAENMQSWQEOEJDKBLJKBTNBGTGIYDMVZSXNUISYXQSWVXDWWYDIZNCZDDFKJCT");

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
    msg.setTimeStamp(0.42111631336031985);
    msg.setSource(58187U);
    msg.setSourceEntity(155U);
    msg.setDestination(62724U);
    msg.setDestinationEntity(224U);
    msg.timeout = 46482U;
    msg.flags = 70U;
    msg.lat = 0.9828165433437516;
    msg.lon = 0.08183977640516249;
    msg.start_z = 0.17560938626390366;
    msg.start_z_units = 71U;
    msg.end_z = 0.05647712963342699;
    msg.end_z_units = 226U;
    msg.radius = 0.2466388375496874;
    msg.speed = 0.8594833819276977;
    msg.speed_units = 147U;
    msg.custom.assign("HEWVUSQYUGZWSBWMMJBPPYQLMNBNBNXDTMOXFETUVTSRIINXAKNQSJICAHOCKNHECVXECOQQVPZEXPBIKRGLAZXSF");

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
    msg.setTimeStamp(0.5855072010332584);
    msg.setSource(6342U);
    msg.setSourceEntity(221U);
    msg.setDestination(54403U);
    msg.setDestinationEntity(39U);
    msg.timeout = 30992U;
    msg.lat = 0.4479710753245061;
    msg.lon = 0.5922481197972981;
    msg.z = 0.7800873975442216;
    msg.z_units = 53U;
    msg.speed = 0.5428900515006624;
    msg.speed_units = 192U;
    msg.custom.assign("HXJNTQCRJFUKUIXSWIGGDSTZPPQHKJCIAAKDZHOAJSZADXNVUGUFHMAWPOELGMUDNCRQIRBYAUOVFVGQBXVOIVLSFAEKMQLQGDWOCBYMXVQJVKRSRRLNATXYFXSUURNEZPZSULLWNJADZSDEETEBDHRPFWPLZ");

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
    msg.setTimeStamp(0.10342365295052502);
    msg.setSource(26405U);
    msg.setSourceEntity(6U);
    msg.setDestination(287U);
    msg.setDestinationEntity(159U);
    msg.timeout = 45532U;
    msg.lat = 0.5930729589009779;
    msg.lon = 0.2789422340853648;
    msg.z = 0.33090115262375563;
    msg.z_units = 72U;
    msg.speed = 0.32937680621271614;
    msg.speed_units = 137U;
    msg.custom.assign("CASFNERKXPCDEIVEXFSGPBKAGBIGYJQKPODAJBEQYBVDMHRPSDNZTGIOHXKSVLCGGRXQZRHOEQHTPZHJMEIKJANJYVFHJKBLQUPKCKSHQIXIDNWCHOLGTHCYNFUEBCKIWTUTWDMQVSXVXKQRNVAOCXOWPWUSOWSITLMNSFMYDCVZAMJUIRRFGLMMQTHWFQAJZBXSLFRRNMGXCORBPYJBDUMEUDLWZUIOEYAPYVTUJFW");

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
    msg.setTimeStamp(0.9101305076388275);
    msg.setSource(31744U);
    msg.setSourceEntity(243U);
    msg.setDestination(25622U);
    msg.setDestinationEntity(4U);
    msg.timeout = 48220U;
    msg.lat = 0.9283093990434609;
    msg.lon = 0.7773919824120787;
    msg.z = 0.6767116815027133;
    msg.z_units = 130U;
    msg.speed = 0.007031867329286623;
    msg.speed_units = 60U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9415117111645043;
    tmp_msg_0.y = 0.09128299289119202;
    tmp_msg_0.z = 0.07497180414923676;
    tmp_msg_0.t = 0.02110468569446744;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZXBSNOKVENJIPPUMNBOVMOZWSMAPNIEJJNSXIRGJYMAXLQFNZRQHKVFIGUPZZNHDSEMQALMQIQVVGHLWKWKFDSZOWYABWFDTFRZKXUXFOZVOXAYQVDIAUIOCRTSNXKEIPJGYCLOLJRCGBBRGUHKDLKLIEFPHWCVWUDJUSMM");

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
    msg.setTimeStamp(0.8331195094826951);
    msg.setSource(42680U);
    msg.setSourceEntity(112U);
    msg.setDestination(63796U);
    msg.setDestinationEntity(10U);
    msg.x = 0.3848413776893842;
    msg.y = 0.587326895912911;
    msg.z = 0.504012992208255;
    msg.t = 0.016242423510014037;

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
    msg.setTimeStamp(0.6067777095886636);
    msg.setSource(64383U);
    msg.setSourceEntity(193U);
    msg.setDestination(40805U);
    msg.setDestinationEntity(197U);
    msg.x = 0.9319330953186634;
    msg.y = 0.20328625573613468;
    msg.z = 0.6677653380964985;
    msg.t = 0.7789913313136455;

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
    msg.setTimeStamp(0.23036123934290775);
    msg.setSource(35944U);
    msg.setSourceEntity(46U);
    msg.setDestination(37632U);
    msg.setDestinationEntity(68U);
    msg.x = 0.9872755288498054;
    msg.y = 0.23233549774116058;
    msg.z = 0.3123654800682708;
    msg.t = 0.6762188309295112;

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
    msg.setTimeStamp(0.7691813241629203);
    msg.setSource(29428U);
    msg.setSourceEntity(189U);
    msg.setDestination(19767U);
    msg.setDestinationEntity(67U);
    msg.timeout = 19159U;
    msg.name.assign("DUVOFWQPWTOGMMCMYYRSJBDMGXKBFLVEQZDZINVLAHNLEKDANQSSUKMOVYRCVZPRAABCDFDNDEYWTTBFSPKXBBEULPQKKRHHHHYAQZY");
    msg.custom.assign("CUUSRUIZFKJYBKIIZLNVPSCGPLFRZXPPOYCJXVNMNJDDHXGSDQGIRQDFTTFGZJMZOHASVWLWFOMSAUEFCENONRNEHEHMHDLAYTUELQUBWBVYOEAUAJVZIIPQSJESFKYDMOMHPSCQXIBCBGLXRTGYYARBPRPZFF");

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
    msg.setTimeStamp(0.1256997845555735);
    msg.setSource(42277U);
    msg.setSourceEntity(184U);
    msg.setDestination(46001U);
    msg.setDestinationEntity(175U);
    msg.timeout = 7896U;
    msg.name.assign("UPFVWFWOBDQXIWAEQDWUMAXNWXIEELHUTBJGLGSSZKLKFXPVCGMRYMHVLJPVJCKESCKIQEUXARYQGKLXECHAZFDICQHKMQHBOUDKZGNNEUBISAFROHPCIIDBFRQCZDANIYQVVLJMBFRHSYDRZZYPRANPJVCJZOMGATWBRVBATCTTESSWMZVUHXOSPTUKYFYHWNXZRD");
    msg.custom.assign("YGVCOTMJONSMGXQIJIRCWBIMETCPXDLPWVKMEJBARTIBHGSWBOXMNWIFRWASALNMZZHCZZJEGOXJLUBEKNQAUHFHEFLISYGBAQPOGRYOWWKRFEACKWQLKKLROQSREVJYIPUHCFUTQWPM");

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
    msg.setTimeStamp(0.5817215879755454);
    msg.setSource(24827U);
    msg.setSourceEntity(244U);
    msg.setDestination(14118U);
    msg.setDestinationEntity(245U);
    msg.timeout = 57788U;
    msg.name.assign("ENQEGIZINGOHQSJLKLGFVTALTRKDCAEYTODRIEYSGFXZMKJZTJLKNMWRBUAYRBQEDMGAEDJRBENVGZDNGSTZNJPATDWQWRXMFUVJCKHVOKFKIAYOZSOZFLVWSGRQTOWIRMRVHALNUHSIDAIGTQCYHCDURPOJY");
    msg.custom.assign("EAYYEGJSLTPAQUHDXTRLPOOFXYBDWDXXWIIUIBPYAREDWPNVQYWGGWSWUKYJRPUQTVLGVPIREZVVVLKQKNBGNEMRMCF");

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
    msg.setTimeStamp(0.5225127648933183);
    msg.setSource(17990U);
    msg.setSourceEntity(151U);
    msg.setDestination(50280U);
    msg.setDestinationEntity(232U);
    msg.lat = 0.582620884850902;
    msg.lon = 0.26468313933777887;
    msg.z = 0.6260558201696896;
    msg.z_units = 213U;
    msg.speed = 0.9274245617950558;
    msg.speed_units = 26U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 28674U;
    tmp_msg_0.off_x = 0.3355281162831305;
    tmp_msg_0.off_y = 0.5671402630567295;
    tmp_msg_0.off_z = 0.5612760617953142;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.0897703963407197;
    msg.custom.assign("RZJFHHXRDRGHBANXFHISDWXVZDYOEWGXYSYATNXULDYMMCFLDGPIPSRWWYNJDUIUCAPEDBOIMOQOBMBVRIEBJIRFOXKVMUHZGPVVTCWWPDWNUWATBFRUEEN");

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
    msg.setTimeStamp(0.9828496120811658);
    msg.setSource(13558U);
    msg.setSourceEntity(10U);
    msg.setDestination(12559U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.16848149373768007;
    msg.lon = 0.1655115724321352;
    msg.z = 0.4586503665598781;
    msg.z_units = 205U;
    msg.speed = 0.9105526919576282;
    msg.speed_units = 197U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.4867627173661657;
    tmp_msg_0.y = 0.26271542090539146;
    tmp_msg_0.z = 0.6162039026573587;
    tmp_msg_0.t = 0.3446430829404703;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.8726346402785679;
    msg.custom.assign("KSCCSYUDVPJDKCQLJWCBTQGEJOPMOXHOXNGUWMWOQCEXFXYJTQNRBNPOLWANQWJTAVRAVJSHWKYETIJZRDFBUBI");

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
    msg.setTimeStamp(0.2414668235642925);
    msg.setSource(44259U);
    msg.setSourceEntity(129U);
    msg.setDestination(25359U);
    msg.setDestinationEntity(47U);
    msg.lat = 0.33187325681001434;
    msg.lon = 0.06559346498170104;
    msg.z = 0.20267404238539066;
    msg.z_units = 19U;
    msg.speed = 0.8542166663733569;
    msg.speed_units = 155U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9219147232990033;
    tmp_msg_0.y = 0.18425363661415706;
    tmp_msg_0.z = 0.43892043229867816;
    tmp_msg_0.t = 0.5909271551584265;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 22893U;
    tmp_msg_1.off_x = 0.6662082650581638;
    tmp_msg_1.off_y = 0.6280819260482229;
    tmp_msg_1.off_z = 0.650909175102811;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.5918210516656893;
    msg.custom.assign("EWIZHDGCVRIOVGBQPLAWKPPLDYKNQSRAGDMABNTSLKUUEQWAQDOOUTGDJGQAQNGSMJCQWPREXGMKDFIYBJKZKRPSJVUMXCDLFKTFCYNIFHNVFGMNOYEXXXDTOBAWAHADFZTVQLHJCFLQWSHFZABXEOJOMYCCUPWZDUMOWBAYZLTTEIIYPTSHNWPEKZIOXVSBFJFLUKLWIVQ");

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
    msg.setTimeStamp(0.6789198885494033);
    msg.setSource(13936U);
    msg.setSourceEntity(51U);
    msg.setDestination(39086U);
    msg.setDestinationEntity(105U);
    msg.vid = 33225U;
    msg.off_x = 0.9617945286871183;
    msg.off_y = 0.26598534100928917;
    msg.off_z = 0.662555115907165;

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
    msg.setTimeStamp(0.40651622789403696);
    msg.setSource(50944U);
    msg.setSourceEntity(96U);
    msg.setDestination(31745U);
    msg.setDestinationEntity(170U);
    msg.vid = 55056U;
    msg.off_x = 0.14263596688091218;
    msg.off_y = 0.20869149481438765;
    msg.off_z = 0.6536858502855378;

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
    msg.setTimeStamp(0.04451433122017068);
    msg.setSource(50996U);
    msg.setSourceEntity(227U);
    msg.setDestination(15658U);
    msg.setDestinationEntity(143U);
    msg.vid = 41643U;
    msg.off_x = 0.2171490245387181;
    msg.off_y = 0.995029921154741;
    msg.off_z = 0.6082810645029955;

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
    msg.setTimeStamp(0.24737826989523626);
    msg.setSource(43213U);
    msg.setSourceEntity(227U);
    msg.setDestination(10919U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.20745787419223327);
    msg.setSource(6643U);
    msg.setSourceEntity(232U);
    msg.setDestination(34311U);
    msg.setDestinationEntity(47U);

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
    msg.setTimeStamp(0.5546925404384452);
    msg.setSource(25681U);
    msg.setSourceEntity(109U);
    msg.setDestination(32212U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.36505393336018943);
    msg.setSource(905U);
    msg.setSourceEntity(218U);
    msg.setDestination(14769U);
    msg.setDestinationEntity(108U);
    msg.mid = 32141U;

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
    msg.setTimeStamp(0.3173825738060685);
    msg.setSource(41495U);
    msg.setSourceEntity(244U);
    msg.setDestination(8582U);
    msg.setDestinationEntity(232U);
    msg.mid = 46652U;

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
    msg.setTimeStamp(0.1993426164734069);
    msg.setSource(55661U);
    msg.setSourceEntity(36U);
    msg.setDestination(20505U);
    msg.setDestinationEntity(231U);
    msg.mid = 24707U;

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
    msg.setTimeStamp(0.7772964035675992);
    msg.setSource(45622U);
    msg.setSourceEntity(207U);
    msg.setDestination(35101U);
    msg.setDestinationEntity(151U);
    msg.state = 74U;
    msg.eta = 43400U;
    msg.info.assign("PUXOXXRICNSNYVUGPKDZIXJKEWPDSSKKDBKLQDEAXFPHGUDNFRWOIHJXASZUTJNDGUKZJSWEQIWZPQQJTAQFORTLVLKWEJWYCQBTCXMXGMTCNGGAURCDYMVFFJMERWFDHFSPLTAIZLFEKZUMAETQJHV");

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
    msg.setTimeStamp(0.5748824098741795);
    msg.setSource(14724U);
    msg.setSourceEntity(201U);
    msg.setDestination(10028U);
    msg.setDestinationEntity(225U);
    msg.state = 119U;
    msg.eta = 3444U;
    msg.info.assign("PFUJQUEIKHOHFJHFMLCVMSVCNGONXMPZGNPRCVIKOOZEBYWYSXQUGOOYWJRSDELDMUDZLCWONDANAJCBKBESKIPBHAYSLFKKPRMIGVFZCUBIYWRZAHJZRIAHHFYENPBTHKGVFYUADWSNTJEJJMETKQUPGMWNOGEZQPXZXVNRXVTSDHLZUEUJEFLBYWQDRMIQ");

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
    msg.setTimeStamp(0.44735313905262464);
    msg.setSource(49505U);
    msg.setSourceEntity(33U);
    msg.setDestination(60632U);
    msg.setDestinationEntity(146U);
    msg.state = 209U;
    msg.eta = 62789U;
    msg.info.assign("THVMPAMIHIBLLASHQLRVMINWBPEUUKJHOHKVQYUFONUMZFSWZFKRCYRFSWLTXADWXUHDUEMIJNSXVQDCGEYZJFCMCXSQHBKLEGVIXQPRDRYXRQHYMTGVTDKGBYCMIRPNZOSAGOSOEQPXTZTLCWNGSBZGZABZWEPEINQIAFOJYBGNDBXJTOMGYBZF");

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
    msg.setTimeStamp(0.19210134699599313);
    msg.setSource(47355U);
    msg.setSourceEntity(187U);
    msg.setDestination(35787U);
    msg.setDestinationEntity(35U);
    msg.system = 32040U;
    msg.duration = 32608U;
    msg.speed = 0.0834531374715386;
    msg.speed_units = 71U;
    msg.x = 0.03293487076656876;
    msg.y = 0.556873123091214;
    msg.z = 0.4170620977890256;
    msg.z_units = 193U;

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
    msg.setTimeStamp(0.5569004959072629);
    msg.setSource(12223U);
    msg.setSourceEntity(194U);
    msg.setDestination(1748U);
    msg.setDestinationEntity(9U);
    msg.system = 36101U;
    msg.duration = 35736U;
    msg.speed = 0.7849230481393645;
    msg.speed_units = 12U;
    msg.x = 0.8155110675309349;
    msg.y = 0.5459435565204273;
    msg.z = 0.17238297324530616;
    msg.z_units = 200U;

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
    msg.setTimeStamp(0.42927251651666043);
    msg.setSource(35227U);
    msg.setSourceEntity(156U);
    msg.setDestination(28878U);
    msg.setDestinationEntity(105U);
    msg.system = 31365U;
    msg.duration = 34904U;
    msg.speed = 0.3620074193809607;
    msg.speed_units = 142U;
    msg.x = 0.1439039641233183;
    msg.y = 0.8592718309003958;
    msg.z = 0.1421390655347775;
    msg.z_units = 24U;

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
    msg.setTimeStamp(0.783048498981606);
    msg.setSource(36990U);
    msg.setSourceEntity(22U);
    msg.setDestination(48011U);
    msg.setDestinationEntity(189U);
    msg.lat = 0.23341536562179055;
    msg.lon = 0.9734078490998938;
    msg.speed = 0.26233709410150075;
    msg.speed_units = 65U;
    msg.duration = 48697U;
    msg.sys_a = 56414U;
    msg.sys_b = 4440U;
    msg.move_threshold = 0.6388405775040852;

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
    msg.setTimeStamp(0.3971850100004686);
    msg.setSource(20092U);
    msg.setSourceEntity(160U);
    msg.setDestination(56660U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.5179252185461152;
    msg.lon = 0.16227133494781576;
    msg.speed = 0.32659165597464457;
    msg.speed_units = 76U;
    msg.duration = 18685U;
    msg.sys_a = 61152U;
    msg.sys_b = 6739U;
    msg.move_threshold = 0.7420694103152653;

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
    msg.setTimeStamp(0.27654968613223974);
    msg.setSource(58387U);
    msg.setSourceEntity(53U);
    msg.setDestination(18516U);
    msg.setDestinationEntity(54U);
    msg.lat = 0.9383869352142145;
    msg.lon = 0.4306078484120428;
    msg.speed = 0.20523639232563484;
    msg.speed_units = 140U;
    msg.duration = 27212U;
    msg.sys_a = 50300U;
    msg.sys_b = 26596U;
    msg.move_threshold = 0.2631461115880125;

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
    msg.setTimeStamp(0.9022448676965781);
    msg.setSource(48571U);
    msg.setSourceEntity(113U);
    msg.setDestination(54430U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.49166518079295873;
    msg.lon = 0.0028491344128492857;
    msg.z = 0.6989664102350777;
    msg.z_units = 245U;
    msg.speed = 0.6518551507057764;
    msg.speed_units = 104U;
    msg.custom.assign("OLTHJGZTEFPRIXARNZFLEBGAJCDTEYGZVTWJBNLVXKPSFKULPOMGRCGCSWXY");

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
    msg.setTimeStamp(0.5205712258356964);
    msg.setSource(51466U);
    msg.setSourceEntity(138U);
    msg.setDestination(47712U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.2123553300577049;
    msg.lon = 0.1970578675498983;
    msg.z = 0.19808998913242315;
    msg.z_units = 46U;
    msg.speed = 0.0011711145832158376;
    msg.speed_units = 133U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.11804864509265212;
    tmp_msg_0.lon = 0.965339401074067;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("VXGWRQFTRRLGGNFFSSUJVLBAQGCHYXEVXFSDWUJPZLCNYYBBZLBMJIHEARYTWRKQVMLYANRBSCEWSTFOVGOQZQGKCNNLOPYVNGXPAPTHWLIUCPIGIFJQY");

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
    msg.setTimeStamp(0.9591503685559255);
    msg.setSource(19707U);
    msg.setSourceEntity(213U);
    msg.setDestination(33758U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.2655703354095833;
    msg.lon = 0.9415575566051386;
    msg.z = 0.6406921257776537;
    msg.z_units = 207U;
    msg.speed = 0.5908691007986523;
    msg.speed_units = 62U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.2227364167382433;
    tmp_msg_0.lon = 0.3613106103117304;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("UELAHJHMOZALOJMVTGGBWVUQCQBJTRHNRCWENYSHUROIPFXMPZYNQDXSPEF");

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
    msg.setTimeStamp(0.3489916860293021);
    msg.setSource(24698U);
    msg.setSourceEntity(61U);
    msg.setDestination(8424U);
    msg.setDestinationEntity(167U);
    msg.lat = 0.02072249337433929;
    msg.lon = 0.14517576642284924;

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
    msg.setTimeStamp(0.9872631939358818);
    msg.setSource(54234U);
    msg.setSourceEntity(229U);
    msg.setDestination(15451U);
    msg.setDestinationEntity(4U);
    msg.lat = 0.31582592859916014;
    msg.lon = 0.230441124985443;

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
    msg.setTimeStamp(0.22359274396112128);
    msg.setSource(12742U);
    msg.setSourceEntity(26U);
    msg.setDestination(5399U);
    msg.setDestinationEntity(250U);
    msg.lat = 0.5584393567080899;
    msg.lon = 0.9112588871936985;

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
    msg.setTimeStamp(0.5189473724197461);
    msg.setSource(1678U);
    msg.setSourceEntity(50U);
    msg.setDestination(58193U);
    msg.setDestinationEntity(38U);
    msg.timeout = 46011U;
    msg.lat = 0.235697287477575;
    msg.lon = 0.661475923861662;
    msg.z = 0.19496017169447277;
    msg.z_units = 89U;
    msg.pitch = 0.1153170679829163;
    msg.amplitude = 0.45292139482388494;
    msg.duration = 36295U;
    msg.speed = 0.16274318081267958;
    msg.speed_units = 49U;
    msg.radius = 0.5706771013788371;
    msg.direction = 212U;
    msg.custom.assign("SSNYYQYTGAKUWILKPXXRMJRFSUBRYDEOANSUQRUVPPHHVWSXMNXPXF");

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
    msg.setTimeStamp(0.8383628355264001);
    msg.setSource(49440U);
    msg.setSourceEntity(149U);
    msg.setDestination(534U);
    msg.setDestinationEntity(74U);
    msg.timeout = 1998U;
    msg.lat = 0.05143804495023063;
    msg.lon = 0.6442501927599085;
    msg.z = 0.8540280437075115;
    msg.z_units = 176U;
    msg.pitch = 0.13730335761828616;
    msg.amplitude = 0.8410454472083929;
    msg.duration = 65120U;
    msg.speed = 0.6835833000110629;
    msg.speed_units = 59U;
    msg.radius = 0.298823074295252;
    msg.direction = 156U;
    msg.custom.assign("OWOTEOSFZYKTDMRRNOXURZUELNYGEWLOHHSKXBGNKGKJUHACUINKI");

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
    msg.setTimeStamp(0.4762588691060605);
    msg.setSource(13707U);
    msg.setSourceEntity(57U);
    msg.setDestination(24531U);
    msg.setDestinationEntity(9U);
    msg.timeout = 41794U;
    msg.lat = 0.9010730830840971;
    msg.lon = 0.9271959925820158;
    msg.z = 0.6655655368942015;
    msg.z_units = 152U;
    msg.pitch = 0.33517507531068014;
    msg.amplitude = 0.8198259254445898;
    msg.duration = 3448U;
    msg.speed = 0.938035444752332;
    msg.speed_units = 233U;
    msg.radius = 0.945416545883949;
    msg.direction = 159U;
    msg.custom.assign("CWBHQZYUOFZECAXXUQFAXIPVTLYFKGMUWQKRVNKXAMUVEDTOFHWRNGOZMJJJVWGBMHZDYGYZGRREWRRUEHZOYDCEJPSJLVVLFASPNVOTXQKILDQVTELPWODYOFOHDBPCTTLNSCESNNAZKPYUIXYMHRMLXIBWKCZVPTGIISQQGGBZMWASNROYQUPOKB");

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
    msg.setTimeStamp(0.5179907231493668);
    msg.setSource(35524U);
    msg.setSourceEntity(250U);
    msg.setDestination(28759U);
    msg.setDestinationEntity(201U);
    msg.formation_name.assign("UCOWYOHNHGEAAXJUJMLTXKBGBWRUQIQSHHRPNDQUPGRLDJPPJNCZDNXONUEISIPPLAXATGITDRKVQDFNLEVVATBROWNYFNOMBGVHOVLFTMNBNGIRJIKGXMEGYSOMQXCKSLIXAAWBFJRQSFD");
    msg.reference_frame = 192U;
    msg.custom.assign("FSXXLOMIJEJBOZY");

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
    msg.setTimeStamp(0.8177760980164195);
    msg.setSource(17789U);
    msg.setSourceEntity(27U);
    msg.setDestination(48047U);
    msg.setDestinationEntity(75U);
    msg.formation_name.assign("XVGWFRBJRVNC");
    msg.reference_frame = 113U;
    msg.custom.assign("HZYXXSVHIKNDDUDZDGSITTTBLZENBRCMTUPVZHQPCWSZRDASMXOAPPVTEJBAXOXWUFNBOMVMLYKWYWOWVHZFATQWWPGKFFYLQRQXPKAFOLIJRJZISJYMHUNGMYBVNCDOJUELJAJLQLRTRKHKFEKIGMSUBYCJOCVKSFARAFIHOGUFTNATUY");

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
    msg.setTimeStamp(0.13643784735515718);
    msg.setSource(15819U);
    msg.setSourceEntity(144U);
    msg.setDestination(37039U);
    msg.setDestinationEntity(105U);
    msg.formation_name.assign("GDXHFKJEXQUDLPZIGJAEJYNXIDAYSHODRMAHHPFNNRUPIWFTMCKPNFRYPXFTIZMBLUWEBHWLSVUGYTZQOSGYBQYNXRKQGCBQVPJCBTSKDNXOICAHEQYOAWIUCZEXKFPVQVFINAYBABHEKTLOAMJTCOVSWDNKOXPEZJNQMGGUSIGCXZJLUCFRIYAOVDHUWLYREELDBFQTGXKNPPWLCMMRSTWCZJJSL");
    msg.reference_frame = 241U;
    msg.custom.assign("UEFIAKPCHTWXTCZPZDJASMREDLBLUKLFYEATQZTXKTDLHJONNWMPOAMEGTPFZQIYQXUJSSCSAWBCGRXOJMXQTMKVKOIVGNVKRVHTKOZYZEJYEHXXBSHPMAXSLTBIJXLSPNCPMURBLWYCQHWFUPNDAIVRPVUWHDRDNQYXRJKVYBGENUJLIZKCRQMYOCCWRGZNFYOQBVRFDYGSGWJGGHAAGUUMVE");

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
    msg.setTimeStamp(0.46528011665043134);
    msg.setSource(2008U);
    msg.setSourceEntity(68U);
    msg.setDestination(47259U);
    msg.setDestinationEntity(198U);
    msg.group_name.assign("XPLHHONNBDBYHOVMPBTISKHIYTGMJZVUNERFGPDZKQGVUTNQCFZJTRBVUYMDUGWFBAAXXNIRKCKWEWHEMLDSOSYQFJCTRQIERAUZVWDCWMFJ");
    msg.formation_name.assign("YIPDYUPZDMGLQKVYQPZPESVVWSQUANIAZCJBMLRCCSDAFABCTKUFQQFJKXLQSZNXOYICYBWOTIOXJUGUAGUIDLTMHDROESLPNGMRHJSNJTOOWCPKNRHOAIEZRDCESVRFXJBJOTFLZFXDDVGXHVFWUZBEVEKNA");
    msg.plan_id.assign("FZYQSHAGISRLELJMKPRJTTNMYCWIQFDQYVDHEXREVBQHNAJHBVNNPYTSWBFOFAKZTOPAZUFXEXGGABTIDECWQOKONLAKRHCDLVNGRUROKBKUYJPCLZVRAVWYEQWLDPSUXLCOZCIUTJHUDXJUKSQZHWABFJIMZFMXOXKQIOENJGTUKWGYNXUMCEORTSPBZPUCILBKVMMZDHQVGNFWWDACPSBRCMAILVXGNWSTJEPOXDVSRYLIH");
    msg.description.assign("OOLAETNFFFRCVXVHSSDFBXJQXHQQDHRLYFGKINMZBGUTUYPKQZJZRSANZTPBLBLYVDHWGQGUMRYL");
    msg.leader_speed = 0.28477137037661326;
    msg.leader_bank_lim = 0.4121195069669741;
    msg.pos_sim_err_lim = 0.45765740008943;
    msg.pos_sim_err_wrn = 0.7425692651615339;
    msg.pos_sim_err_timeout = 14029U;
    msg.converg_max = 0.8795151205687601;
    msg.converg_timeout = 54869U;
    msg.comms_timeout = 53357U;
    msg.turb_lim = 0.4773128377089946;
    msg.custom.assign("MGBOXGPSFGGJRACREBUHCSUYWAULBANKTTMDUVVKSTFLUVVPVDZAEYBQXLUHJYZVYDVHYRHNWHQOKBNLCNGDZWXNNBPWXNRBMFISDTOPZBWRQCNVJHFOCSASWWFTCKMTLJIUPTKZYAAECOEDVWERBPFRREGLAFJLKEWDZMXQXGFNOFQEQISM");

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
    msg.setTimeStamp(0.98806709254866);
    msg.setSource(8948U);
    msg.setSourceEntity(47U);
    msg.setDestination(5868U);
    msg.setDestinationEntity(212U);
    msg.group_name.assign("RYOGBNRPRBUYEGPKVRMLMOSNXKFWGBCDGXYTAJYWUTGSEDXHOUALSQFLJVRHTKSITFUJPFQQTDLUAOUBEZJPEWWDDLNHCYWGGVQDWLSIDYBIRPXRMEVGMVJKFALNRJZIKYITCEBUTMZMXIPPNOHUALAYRKJGPNAZWCRHUCIEIZJQWNOLFVSAKBUXOVIXCFQSKKHZNPTHHHGHCXPJISYNWCDOZZNFKMSWXMEFXDVBLQMDOSTQA");
    msg.formation_name.assign("IYGZNIYIUXLMWHVKRSFCJIQCPOWGEEUSMLPOHZJBERPCDVNALNALKOTUXIZWNHJHWILIBMMTAAVHHXKUTRDFQUBSGFBPVRUVRTGWPK");
    msg.plan_id.assign("HEWDNSHEQCBMCWVTEWGSEHRGKDCVLXRWICWZWQEOFDTCIILFMMUBNHQXRUCZRAMURRZNEODSSGLJMZVUVBOQSVZNEHTPHIUVZGYJDOQFXQUMFFYLKRNHXNATNLKLDBJJRXIZFDXVOQBJSQASHXKKTWPBJW");
    msg.description.assign("NJCIXRIJYWJGUFSVCBBBQKJRFLVGBXRRPZGRJSMKUPCEBBWCCOGPYTXFFZEZXFVHNWKZXMAVRXQHESEHILHJFTUVUOI");
    msg.leader_speed = 0.7111656357594822;
    msg.leader_bank_lim = 0.3010458290571779;
    msg.pos_sim_err_lim = 0.40225175408049185;
    msg.pos_sim_err_wrn = 0.6485540146841471;
    msg.pos_sim_err_timeout = 45876U;
    msg.converg_max = 0.6760248914252803;
    msg.converg_timeout = 1839U;
    msg.comms_timeout = 47027U;
    msg.turb_lim = 0.9645715114190477;
    msg.custom.assign("LXDHTCRPBFDMXQKBLJKPYKFTYGACTSHBAEGJEXWOOAMYRQAFOEIYJLGDNWDTZHVGNHDLHAIEMVNVCNUUUCLIXRJEQOUPZKDBXZKXBRSIWNTPJZGTYRECPILFFZBQDPVTBGCTQZVYUJVPWCLGNXYJRAICUNXOLDWRABQCORSOMFPIUWZSSMXNBLDQUETVFJMROZYAHAFSKFWGPNKZUUXIIKZQVFJJGMHVEBWGEWHRLSVTYAIK");

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
    msg.setTimeStamp(0.16712988077949464);
    msg.setSource(14092U);
    msg.setSourceEntity(25U);
    msg.setDestination(21093U);
    msg.setDestinationEntity(224U);
    msg.group_name.assign("NFYKAIVTQKZVSQFAEWRWLLFENAPYNUDTYPLSPFNRSDIQOHWNNILWGZEOPLMRFOFIHJGBNOMPVAASJLMPUMFDOOGTDESLBTZMCBRNDCEKJUZUMLHXVQCESUZIDTXKDU");
    msg.formation_name.assign("QXPQFOXWMCBZPIFAHNGRZNHBLYGFFVTXOOCBEHEMGMZVNUXKGSTYXLLEERHDVRGSD");
    msg.plan_id.assign("KRMEBTSUEAOTPJYCZBAHUPRIHCOVGDPLZBVBCFWBNYJSDYKYXMDCATIRLLVPHEXRUSIZXRKLJMUICVJWWFCMFQBHJEQGRLPHEGMJZWGMYINAWBXNSVIFAZFGQDBHPDBNZHTAKHFOWYOITGLMSUQNEVAWYVKKTSYCMTRVOGFESSFDUEJLZPLRJANTDDZBZWKDKXXOGJQXNQGHTYPQRKPEIV");
    msg.description.assign("VPPMJDGYPNZUHBTTSHSBSCKTFOAOPWPXXLABGCVFZIDLGRGFCBYMXOSYJLXVCUGODKHBEMNAIRVWWCHJFREWJFZHIEEGQME");
    msg.leader_speed = 0.9016838670146896;
    msg.leader_bank_lim = 0.7576830589711563;
    msg.pos_sim_err_lim = 0.6947372908489285;
    msg.pos_sim_err_wrn = 0.08222104279023379;
    msg.pos_sim_err_timeout = 42775U;
    msg.converg_max = 0.7241868863715736;
    msg.converg_timeout = 27242U;
    msg.comms_timeout = 37111U;
    msg.turb_lim = 0.9339269334705602;
    msg.custom.assign("PEYPCMHUZBDPDVXNUWXAOAFSQERQJVRZKGBMSLKGIARQXLCGGZTTHRCJVKUIKWIYKWFYCOUQDMBONDZUYTXJHVAVQKKEFJQEGQJFDCTMAZNRKSWFTMWPTYLSLPUYXBXFLEXRMLCSDJBYRGCHZZONTZUSCADADODRPBHUPNWIIIUOGIOVPXTGBKFCVWWSN");

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
    msg.setTimeStamp(0.22525148475034673);
    msg.setSource(58232U);
    msg.setSourceEntity(238U);
    msg.setDestination(36422U);
    msg.setDestinationEntity(178U);
    msg.control_src = 25516U;
    msg.control_ent = 61U;
    msg.timeout = 0.830526470673792;
    msg.loiter_radius = 0.2308487336814039;
    msg.altitude_interval = 0.545956085781067;

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
    msg.setTimeStamp(0.7303160947126635);
    msg.setSource(7313U);
    msg.setSourceEntity(172U);
    msg.setDestination(42246U);
    msg.setDestinationEntity(214U);
    msg.control_src = 58859U;
    msg.control_ent = 48U;
    msg.timeout = 0.8761018194595527;
    msg.loiter_radius = 0.3283419692369368;
    msg.altitude_interval = 0.2067460108763195;

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
    msg.setTimeStamp(0.3083037724821054);
    msg.setSource(43519U);
    msg.setSourceEntity(61U);
    msg.setDestination(19942U);
    msg.setDestinationEntity(74U);
    msg.control_src = 10977U;
    msg.control_ent = 196U;
    msg.timeout = 0.17676180761501314;
    msg.loiter_radius = 0.05683461805303436;
    msg.altitude_interval = 0.9203098947650854;

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
    msg.setTimeStamp(0.5065624583462323);
    msg.setSource(25487U);
    msg.setSourceEntity(39U);
    msg.setDestination(22295U);
    msg.setDestinationEntity(56U);
    msg.flags = 17U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6737426563461719;
    tmp_msg_0.speed_units = 75U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8195392173499747;
    tmp_msg_1.z_units = 58U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.6622310047831682;
    msg.lon = 0.9372687143706397;
    msg.radius = 0.4527031326596601;

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
    msg.setTimeStamp(0.07870324528514694);
    msg.setSource(25894U);
    msg.setSourceEntity(238U);
    msg.setDestination(7097U);
    msg.setDestinationEntity(42U);
    msg.flags = 45U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.09570688835959917;
    tmp_msg_0.speed_units = 246U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.33952860968107923;
    tmp_msg_1.z_units = 232U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.45840343675181594;
    msg.lon = 0.8785001212549517;
    msg.radius = 0.3523226658432167;

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
    msg.setTimeStamp(0.18331138145544668);
    msg.setSource(6018U);
    msg.setSourceEntity(158U);
    msg.setDestination(62690U);
    msg.setDestinationEntity(64U);
    msg.flags = 39U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.04238516950403959;
    tmp_msg_0.speed_units = 19U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.37650197469711066;
    tmp_msg_1.z_units = 69U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7039827079605122;
    msg.lon = 0.8035329329709844;
    msg.radius = 0.7157908982458582;

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
    msg.setTimeStamp(0.45403226107919126);
    msg.setSource(11327U);
    msg.setSourceEntity(24U);
    msg.setDestination(17903U);
    msg.setDestinationEntity(138U);
    msg.control_src = 25148U;
    msg.control_ent = 57U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 47U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7009749526574323;
    tmp_tmp_msg_0_0.speed_units = 40U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8063558698473202;
    tmp_tmp_msg_0_1.z_units = 129U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5988352632436706;
    tmp_msg_0.lon = 0.967474008448932;
    tmp_msg_0.radius = 0.9404874942275164;
    msg.reference.set(tmp_msg_0);
    msg.state = 103U;
    msg.proximity = 120U;

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
    msg.setTimeStamp(0.6298060281081937);
    msg.setSource(24170U);
    msg.setSourceEntity(207U);
    msg.setDestination(57779U);
    msg.setDestinationEntity(43U);
    msg.control_src = 9116U;
    msg.control_ent = 81U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 98U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.6300478673255624;
    tmp_tmp_msg_0_0.speed_units = 190U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7824631713866868;
    tmp_tmp_msg_0_1.z_units = 218U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.10471787644123931;
    tmp_msg_0.lon = 0.9770867414790617;
    tmp_msg_0.radius = 0.9840852680335603;
    msg.reference.set(tmp_msg_0);
    msg.state = 103U;
    msg.proximity = 123U;

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
    msg.setTimeStamp(0.9852755863222818);
    msg.setSource(35090U);
    msg.setSourceEntity(96U);
    msg.setDestination(44176U);
    msg.setDestinationEntity(95U);
    msg.control_src = 32217U;
    msg.control_ent = 142U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 233U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9302806361538108;
    tmp_tmp_msg_0_0.speed_units = 202U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.48137277580183124;
    tmp_tmp_msg_0_1.z_units = 89U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5944875983310123;
    tmp_msg_0.lon = 0.9012258214542217;
    tmp_msg_0.radius = 0.9627479116059279;
    msg.reference.set(tmp_msg_0);
    msg.state = 238U;
    msg.proximity = 13U;

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
    msg.setTimeStamp(0.05273048480294662);
    msg.setSource(64786U);
    msg.setSourceEntity(103U);
    msg.setDestination(22686U);
    msg.setDestinationEntity(148U);
    msg.ax_cmd = 0.46339568375402185;
    msg.ay_cmd = 0.5011273936846641;
    msg.az_cmd = 0.536655928388996;
    msg.ax_des = 0.8196326754899939;
    msg.ay_des = 0.4230374736688528;
    msg.az_des = 0.7232202479933812;
    msg.virt_err_x = 0.2817278076189481;
    msg.virt_err_y = 0.376997913068403;
    msg.virt_err_z = 0.5922478480396551;
    msg.surf_fdbk_x = 0.6960913268583829;
    msg.surf_fdbk_y = 0.9835226865972508;
    msg.surf_fdbk_z = 0.7657444595868043;
    msg.surf_unkn_x = 0.8665113666217982;
    msg.surf_unkn_y = 0.5564307921164834;
    msg.surf_unkn_z = 0.3632901252113907;
    msg.ss_x = 0.3072437955745235;
    msg.ss_y = 0.46753402607690453;
    msg.ss_z = 0.4896945148707399;

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
    msg.setTimeStamp(0.5151938834735577);
    msg.setSource(32371U);
    msg.setSourceEntity(150U);
    msg.setDestination(54713U);
    msg.setDestinationEntity(70U);
    msg.ax_cmd = 0.5470922177409815;
    msg.ay_cmd = 0.6323719411070403;
    msg.az_cmd = 0.6186130447641637;
    msg.ax_des = 0.8697836154087991;
    msg.ay_des = 0.46578363615651464;
    msg.az_des = 0.8637886615132202;
    msg.virt_err_x = 0.2815419300920483;
    msg.virt_err_y = 0.8082006464111603;
    msg.virt_err_z = 0.024465326242323004;
    msg.surf_fdbk_x = 0.3166734830635357;
    msg.surf_fdbk_y = 0.15772442125765473;
    msg.surf_fdbk_z = 0.8107806473627345;
    msg.surf_unkn_x = 0.35481134867592423;
    msg.surf_unkn_y = 0.4451312321329878;
    msg.surf_unkn_z = 0.9427634236683878;
    msg.ss_x = 0.4150865076438012;
    msg.ss_y = 0.01197400076664279;
    msg.ss_z = 0.8873164253703008;

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
    msg.setTimeStamp(0.7669293116752005);
    msg.setSource(797U);
    msg.setSourceEntity(188U);
    msg.setDestination(15126U);
    msg.setDestinationEntity(221U);
    msg.ax_cmd = 0.20256918604018004;
    msg.ay_cmd = 0.8571723059519295;
    msg.az_cmd = 0.8075184105732;
    msg.ax_des = 0.31160745277739166;
    msg.ay_des = 0.765221456122584;
    msg.az_des = 0.07934424096147608;
    msg.virt_err_x = 0.3451316181171724;
    msg.virt_err_y = 0.8695269541279127;
    msg.virt_err_z = 0.7100798999168976;
    msg.surf_fdbk_x = 0.5573828191276833;
    msg.surf_fdbk_y = 0.5240240625516489;
    msg.surf_fdbk_z = 0.05882354718047922;
    msg.surf_unkn_x = 0.3739179988553837;
    msg.surf_unkn_y = 0.6610113515865789;
    msg.surf_unkn_z = 0.0041873220883932305;
    msg.ss_x = 0.08969875473256606;
    msg.ss_y = 0.8732620943071486;
    msg.ss_z = 0.2310103257633328;

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
    msg.setTimeStamp(0.7755063517047155);
    msg.setSource(22857U);
    msg.setSourceEntity(134U);
    msg.setDestination(52186U);
    msg.setDestinationEntity(203U);
    msg.s_id.assign("COLRDGFIADORIUMDBAOFPBXTSTFUKCQKSDCKCJUQWEWOGOBIATTYPNZMHCFJLWUYTQFDGWDLEXZSCKQRPFPWLZIKCXSHAPTGMSLKMUABGNSDTRQQTBEGJCNILTIVPNKHKDGKORVPEJWZADEB");
    msg.dist = 0.3908024001677838;
    msg.err = 0.4907378036067417;
    msg.ctrl_imp = 0.5690458525123144;
    msg.rel_dir_x = 0.2878223326330439;
    msg.rel_dir_y = 0.9089543088143561;
    msg.rel_dir_z = 0.09745787890143631;
    msg.err_x = 0.5947700464744835;
    msg.err_y = 0.8937376875438581;
    msg.err_z = 0.8910878337501523;
    msg.rf_err_x = 0.2394252191626769;
    msg.rf_err_y = 0.9406247948691159;
    msg.rf_err_z = 0.6418053035759869;
    msg.rf_err_vx = 0.07734033730489298;
    msg.rf_err_vy = 0.8032692879777844;
    msg.rf_err_vz = 0.13724564201417588;
    msg.ss_x = 0.6686145855276816;
    msg.ss_y = 0.6418817445793007;
    msg.ss_z = 0.4715174078479808;
    msg.virt_err_x = 0.4948103003621478;
    msg.virt_err_y = 0.10841549396210781;
    msg.virt_err_z = 0.8239395336445627;

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
    msg.setTimeStamp(0.3324749912668331);
    msg.setSource(12654U);
    msg.setSourceEntity(79U);
    msg.setDestination(11432U);
    msg.setDestinationEntity(200U);
    msg.s_id.assign("PNTNCLAWOPLVPOZZPGVCRXCKDJUCQZOTXCSUFVASXBKWAAFPQXHKMHRGUGBTWLBGMYVHRNYQFMAECTZRNJKOWHVJANESAUJXEYDNOSNCYSXFHZZERQLPVRBDGIYLOCS");
    msg.dist = 0.005643283339366145;
    msg.err = 0.1545992437076109;
    msg.ctrl_imp = 0.8372013560799565;
    msg.rel_dir_x = 0.46795788603630517;
    msg.rel_dir_y = 0.12238181638040291;
    msg.rel_dir_z = 0.2685882594791492;
    msg.err_x = 0.8884340946848658;
    msg.err_y = 0.9128163573191094;
    msg.err_z = 0.5972329663802735;
    msg.rf_err_x = 0.2790571298999026;
    msg.rf_err_y = 0.9692973066662768;
    msg.rf_err_z = 0.7048289535655418;
    msg.rf_err_vx = 0.4748815957280218;
    msg.rf_err_vy = 0.5690209754443194;
    msg.rf_err_vz = 0.6697958276439149;
    msg.ss_x = 0.5955850964852287;
    msg.ss_y = 0.5495414987211468;
    msg.ss_z = 0.07190011599471424;
    msg.virt_err_x = 0.7741155753945387;
    msg.virt_err_y = 0.8205945461560973;
    msg.virt_err_z = 0.25969179990947056;

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
    msg.setTimeStamp(0.6105384894946868);
    msg.setSource(26838U);
    msg.setSourceEntity(210U);
    msg.setDestination(57680U);
    msg.setDestinationEntity(139U);
    msg.s_id.assign("RCQPISGADWBRGNRTFYTFWUSLKZIUEBSLEIVGBHGSMFRWELQGICYBKNLXOJWTUCQXRHLYWOMURXJYXMPZMMTQRKETHOKXEECPGSZWIEFSGBSOQUTDKVKNBPMHMFAAAAAVUQUYICDHNSDJOONQDWJZKLL");
    msg.dist = 0.9797289680159397;
    msg.err = 0.7928409671448078;
    msg.ctrl_imp = 0.5533455655826791;
    msg.rel_dir_x = 0.6896059296769208;
    msg.rel_dir_y = 0.5063423001866892;
    msg.rel_dir_z = 0.5823544527743881;
    msg.err_x = 0.9715581298137725;
    msg.err_y = 0.014701594426064224;
    msg.err_z = 0.7062359968481338;
    msg.rf_err_x = 0.7924302726737744;
    msg.rf_err_y = 0.3521666704223455;
    msg.rf_err_z = 0.04832606667628181;
    msg.rf_err_vx = 0.04081165236528328;
    msg.rf_err_vy = 0.977720410786683;
    msg.rf_err_vz = 0.012672819588610551;
    msg.ss_x = 0.955523763915194;
    msg.ss_y = 0.6895182807169588;
    msg.ss_z = 0.20094990612895358;
    msg.virt_err_x = 0.4109950043582975;
    msg.virt_err_y = 0.7313997010715265;
    msg.virt_err_z = 0.3376567442664562;

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
    msg.setTimeStamp(0.93319817212703);
    msg.setSource(35259U);
    msg.setSourceEntity(221U);
    msg.setDestination(49259U);
    msg.setDestinationEntity(182U);
    msg.timeout = 14937U;
    msg.rpm = 0.8337145132786349;
    msg.direction = 29U;
    msg.custom.assign("UYVVXIHFVKQRGLONINRJDPBDJHYILOGRPZBFNALHOKEJCALFWYRNEGGUZNSNXALIYZRCYXBWWYCESFFZWAFNUZOUKHDOKTJDSRXXCSMQXVOJALUSKEYRKSLLCFLTKDABMNWNDUVFDMJGARJPTUEZBGKNSIAZVQHDUOTFJEDQQSYWGQBPPXIMRHBJRMVTYM");

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
    msg.setTimeStamp(0.14950165037285523);
    msg.setSource(11023U);
    msg.setSourceEntity(106U);
    msg.setDestination(53055U);
    msg.setDestinationEntity(214U);
    msg.timeout = 64963U;
    msg.rpm = 0.07552844565873751;
    msg.direction = 230U;
    msg.custom.assign("IFTDXJPUUNQID");

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
    msg.setTimeStamp(0.023074006228728683);
    msg.setSource(55818U);
    msg.setSourceEntity(28U);
    msg.setDestination(20625U);
    msg.setDestinationEntity(41U);
    msg.timeout = 28313U;
    msg.rpm = 0.7752086890524138;
    msg.direction = 232U;
    msg.custom.assign("ZSKCMXQUJBDJVHNRTAXSDRAICPWTEVBFVXCWFLZQKLCXGZXSHRRVFRYPHNFFOZPOGZTHCSRYLAXBKUJIMJIRFDHQFUDDDQNSHPWHGBLZPIJVGWYAEMIUOMUQNEMDATWUTLACVGRXFUVEQZGAPCQKBKTKTLWHZUWOMDPNHDTCKPNOJBVESWQWZTJOFSMIEQCOFEKLKAUB");

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
    msg.setTimeStamp(0.4997316958116882);
    msg.setSource(35538U);
    msg.setSourceEntity(128U);
    msg.setDestination(57605U);
    msg.setDestinationEntity(91U);
    msg.formation_name.assign("ZOCDWIFDEJTTYLKWGBZOQWWUMVWFYQMBXRBXTBSJHWDLXABIGXLLDTGSIVSMGPLVZURELOHQYIQVYLFKYMUBKQQONINFFOBRRCJLITCSBJJQKPMLRMVXYOPYNQGAFTDRBNLAQKZHBUURXCIPWMAZDSKEMFZKUKAXIYECVDKO");
    msg.type = 46U;
    msg.op = 39U;
    msg.group_name.assign("YPBXUMVGNEBOZIQYACKAPJWXTYPOXLWDZKPQYPBWRWDLJHWLVRFRQWENJGLUOUBAHTIJEYVKHOBFNTZ");
    msg.plan_id.assign("YZBRHJUVKAXWVZLCJCJLJIWAAKPOJOSQPHZWBHDDWPUEOPPRXYYVWEFFTQLHNKTMNJDMGXQXEAZATJCGTHSBYADHXTXWGUFR");
    msg.description.assign("LWUKMEGFOQTCWEBFSBTMNLIIZHFAYMRHQKEELKADXPZRYOUSUXRQAWUINVGMMKQWLBSJJIMHZGBDBXUHCIZUNANSJVQKNKPNQZVYPVMTLRGDWIEFZCTLCZJXNODASGNVYUOPGKYIESLCR");
    msg.reference_frame = 188U;
    msg.leader_bank_lim = 0.47615449340548655;
    msg.leader_speed_min = 0.27281423095759816;
    msg.leader_speed_max = 0.9980218779530516;
    msg.leader_alt_min = 0.854052753426439;
    msg.leader_alt_max = 0.214339785426784;
    msg.pos_sim_err_lim = 0.6667999729895794;
    msg.pos_sim_err_wrn = 0.21118318228217292;
    msg.pos_sim_err_timeout = 6290U;
    msg.converg_max = 0.39036035689703863;
    msg.converg_timeout = 1125U;
    msg.comms_timeout = 53356U;
    msg.turb_lim = 0.027973958543906607;
    msg.custom.assign("SFCLHXHSPNSYPFHFLOPJABOKZHGXVWVSVXDMNJTAIOXSSKNZDPYUCITLQZMBGLHHAIMDGVKTJPWR");

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
    msg.setTimeStamp(0.03648765042331503);
    msg.setSource(20178U);
    msg.setSourceEntity(172U);
    msg.setDestination(37265U);
    msg.setDestinationEntity(130U);
    msg.formation_name.assign("MKARZDRKOPSMEJEGLLCZOZVQCENWPXNKTTYDCKSHDLHTYAUUXTPSFZHVHVFIWVDPWGGOMRKQRDKRRFEYRWCTNAUIXOMFAHURBLBFXSWIUSYCSSGJCXTVEVPXNCFOMLJYPTDLBNLDFNOKZAFQZOOEXQQIAHQMMXNSGTWUZZTUXPGAEKZJJBMKEWLOIZSQYUGJAOQIWFYVGHBBNCDJWHTRABVDEGHYUNEQIBPIBYBGACMIQ");
    msg.type = 208U;
    msg.op = 252U;
    msg.group_name.assign("CMCWIKWXGYVEOETENMNEQXRHQFGXHKPLCUXIHEVRECVGGPZUDBYVMHMRKRLSITCHRYDSIROPVYLQPPBXFUKNJJZDNFHTLDUEAQYWJCAUFCNXTWW");
    msg.plan_id.assign("YNGZWUUIYMXBVKHIHXCVYZOYRXDAHYSYVVSGAZDTNXZJGFKHGISPSQFRCMJWBJZQEBSMFHNALETOWUNTKOHFOQFRQJALALVCVSDNUXOHNBTALUPRFWJLCBTXLREDZKOXCGZCPOGMAQ");
    msg.description.assign("YGTINJIWNRSYKVECQAUWIURJMPVRNXBEFGABDAEJZCIZRUMEHFWAVTYOAFQFOFXQZOWPXLGKZXBAVKFUBQRRGIVAMAMKQYSJPXHYVKTWKZBSEWCVDFDXUVHUIXGUDYHPMNMYWKLYDNJYETAYBQWMXFDJLJ");
    msg.reference_frame = 0U;
    msg.leader_bank_lim = 0.7710592419453324;
    msg.leader_speed_min = 0.5644375370519759;
    msg.leader_speed_max = 0.5608885898357594;
    msg.leader_alt_min = 0.021709884845105942;
    msg.leader_alt_max = 0.010565479535097566;
    msg.pos_sim_err_lim = 0.36763927973014754;
    msg.pos_sim_err_wrn = 0.5483499505772996;
    msg.pos_sim_err_timeout = 17237U;
    msg.converg_max = 0.23964063114236478;
    msg.converg_timeout = 44760U;
    msg.comms_timeout = 27924U;
    msg.turb_lim = 0.6406288560603116;
    msg.custom.assign("RGQKJULQBGIYMPOCBXEWJUCCPESHWPBOVHVGTEAMMIMKAWYXJGBOOBVRHCGSZUCJALPTLDQQHCOSQRGJZSWCHLFSNDMFTNXOEZZCPQUKAOPJIFSEIYNTDOVYRUIWFBZFPSWKLYUZTDZR");

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
    msg.setTimeStamp(0.6098176119571307);
    msg.setSource(3503U);
    msg.setSourceEntity(153U);
    msg.setDestination(61724U);
    msg.setDestinationEntity(57U);
    msg.formation_name.assign("YVOZPFFFPTOJLFERSZQFSEOGJZKOWBCXQUPRLXMINSDFGWNUEGQHWTWWEBWLRHXOBCWVDQAQZMISLWASVUMLEIDOREHXACUIRZAPJNJTISVTYUYIKBBKEEMYYUGTARK");
    msg.type = 85U;
    msg.op = 250U;
    msg.group_name.assign("XRBPSOGMJZALYDVISCOOGPJHXFMRELWYEZMJTKNUPDHWTWSAPKTWMOFQBCBHFVBHEWXTKZNDXDVZEFHONVRFJQTPBYYYXKZEMQPPJAAXGIOUFRPYCMSKMQBEESJQCWBAZUVNLQGCNVGCGJRPZVXCDRNLIQHOFHRXRDOSJLQMYLTRGOJCZUABETUNVUWSMZXUJIDEWKEYAKKUIHTIKLWHCPLL");
    msg.plan_id.assign("KPPFDPSKENQVAKY");
    msg.description.assign("FMPLDVRVMUUEDCQAFUIHMZPGCUNYBAQSSTYKSXXTBTBZKMQMZMZRLOJCIXAIYWNOTZYOEJOOQLXRNEWCBBJIALKKQQPXTGADGPUPNWWHPJLBVUYDPILKXXOZBAJVZSPMWFTEUOACKEDBOVWJSTKFYDMAHFYSNKLPGRBVWFNNAGQESTD");
    msg.reference_frame = 215U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 24757U;
    tmp_msg_0.off_x = 0.5349178498628977;
    tmp_msg_0.off_y = 0.7530468505997309;
    tmp_msg_0.off_z = 0.6381000045850559;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.45321803672696936;
    msg.leader_speed_min = 0.6405386657824814;
    msg.leader_speed_max = 0.5957070812541108;
    msg.leader_alt_min = 0.422855913582899;
    msg.leader_alt_max = 0.7537550755725471;
    msg.pos_sim_err_lim = 0.8887448058639295;
    msg.pos_sim_err_wrn = 0.3809198603392413;
    msg.pos_sim_err_timeout = 19437U;
    msg.converg_max = 0.23261862709753822;
    msg.converg_timeout = 18411U;
    msg.comms_timeout = 20603U;
    msg.turb_lim = 0.3251312491985694;
    msg.custom.assign("MKUZLRUQRRPZHZUQKBZQAVFFTVVYEUGFWEEGWSCUSOTDK");

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
    msg.setTimeStamp(0.27083451421518334);
    msg.setSource(2641U);
    msg.setSourceEntity(252U);
    msg.setDestination(65074U);
    msg.setDestinationEntity(82U);
    msg.timeout = 43383U;
    msg.lat = 0.5945341638339467;
    msg.lon = 0.7664178850547194;
    msg.z = 0.8779438469336872;
    msg.z_units = 180U;
    msg.speed = 0.8599623559236338;
    msg.speed_units = 189U;
    msg.custom.assign("RKFEZCUZOVRZMFYAYUYODXAIFULRREWWGKFAPFCLQVQPRSHVYWRIKUBTPGMNORSGYPQAQLJMSGWJVZXXAFOXTWIWTKQDKPDGCNDTBMVJDTEFBLLLQGSUPJYHPSRARUGVGVBCKPJWVCCSLJZCEFLPINWBHSIJWXLNOMAUFTURVDNNTBLIVYIQHKHIO");

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
    msg.setTimeStamp(0.20685596272747053);
    msg.setSource(46944U);
    msg.setSourceEntity(177U);
    msg.setDestination(21986U);
    msg.setDestinationEntity(245U);
    msg.timeout = 61939U;
    msg.lat = 0.896987781361896;
    msg.lon = 0.2172874185137874;
    msg.z = 0.8478873863562296;
    msg.z_units = 129U;
    msg.speed = 0.10397401802147088;
    msg.speed_units = 228U;
    msg.custom.assign("QKAKVZMNRBLLZPVQSEJYWMYCGAEVZHGRTDHIMRNZLJTPURZSPZSCJWDHTAFJUIHYBNJTVZVCWOFOMCYPIQBUGGQQIONITYSKQUTEVHXLUXURPKTEKUTODCFJXBIGQ");

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
    msg.setTimeStamp(0.23719865698015907);
    msg.setSource(17520U);
    msg.setSourceEntity(149U);
    msg.setDestination(64085U);
    msg.setDestinationEntity(39U);
    msg.timeout = 8152U;
    msg.lat = 0.8496162922110713;
    msg.lon = 0.11267000247639336;
    msg.z = 0.7196590589612725;
    msg.z_units = 35U;
    msg.speed = 0.6358978450188841;
    msg.speed_units = 246U;
    msg.custom.assign("CAXRHJUQGZNHVQAFGILEUQAFKYBLVOJTPHBNASWLGMOMZPNZQECBXUOEVITTUERWXHPCFEHGMZAPLTXSZSLPKRISWLOPQVKYFBYUZNWULJQKFDAHXSWVSVEDVXYBKUDMVYSBHZAQIHILYGMMLWHNCFACPRAOKZKOE");

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
    msg.setTimeStamp(0.7378079515090883);
    msg.setSource(51436U);
    msg.setSourceEntity(78U);
    msg.setDestination(4969U);
    msg.setDestinationEntity(232U);
    msg.timeout = 11819U;
    msg.lat = 0.6607134877067455;
    msg.lon = 0.9988729227101565;
    msg.z = 0.7939733644546838;
    msg.z_units = 248U;
    msg.speed = 0.002945976592222843;
    msg.speed_units = 100U;
    msg.custom.assign("DWQEDAUSHKMNRQOCGOEWYTHDQBIUZJAYKFSNDCOSHCCHRZSDVHLRYPOXVONGFTLZYRJYSSEVHTETXIXFDJMCMUWYXKMFAYUFBEWDAQMHPCLUKSRJAVNFQIRUKBIXOJJGUNZGQJAULKHIUWGNRZENPVLLIJCKIGSHJBLOETONQMZBGJRGKAMVPBTI");

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
    msg.setTimeStamp(0.9673729237746094);
    msg.setSource(9105U);
    msg.setSourceEntity(39U);
    msg.setDestination(42151U);
    msg.setDestinationEntity(38U);
    msg.timeout = 5550U;
    msg.lat = 0.5001292050271707;
    msg.lon = 0.2020036573073284;
    msg.z = 0.9593068935730968;
    msg.z_units = 187U;
    msg.speed = 0.921745817567189;
    msg.speed_units = 12U;
    msg.custom.assign("NSWKMOLHEMGLIZBXORINLNJVVRFENYWLWHJTRQIKMUGUVDXMSWKMFSJAGTTZAQDGRVPNJEDDYZMYHBMFTPAXVFCPPBVLIBCPPZFCWLKGFRUYD");

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
    msg.setTimeStamp(0.20046796204421724);
    msg.setSource(31215U);
    msg.setSourceEntity(72U);
    msg.setDestination(43155U);
    msg.setDestinationEntity(125U);
    msg.timeout = 57251U;
    msg.lat = 0.38287591346269545;
    msg.lon = 0.23210088959727782;
    msg.z = 0.29098157726356544;
    msg.z_units = 91U;
    msg.speed = 0.3132676444472352;
    msg.speed_units = 122U;
    msg.custom.assign("GPUYAQIRNYJRNMDKCVTAXHHUPTVAWKEYXCQSMOHLMLEZDQXHKDBBZEODTETLCJYGIWXK");

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
    msg.setTimeStamp(0.8546544674735189);
    msg.setSource(46143U);
    msg.setSourceEntity(33U);
    msg.setDestination(55198U);
    msg.setDestinationEntity(165U);
    msg.arrival_time = 0.30072551615328214;
    msg.lat = 0.4608162977503153;
    msg.lon = 0.8688023976759071;
    msg.z = 0.6613293136016916;
    msg.z_units = 18U;
    msg.travel_z = 0.22733249004235034;
    msg.travel_z_units = 152U;
    msg.delayed = 137U;

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
    msg.setTimeStamp(0.2806811432924121);
    msg.setSource(9155U);
    msg.setSourceEntity(77U);
    msg.setDestination(41992U);
    msg.setDestinationEntity(179U);
    msg.arrival_time = 0.5619882099867962;
    msg.lat = 0.2715618464272893;
    msg.lon = 0.2597929345175579;
    msg.z = 0.10162494851421555;
    msg.z_units = 75U;
    msg.travel_z = 0.1010281446338761;
    msg.travel_z_units = 16U;
    msg.delayed = 118U;

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
    msg.setTimeStamp(0.9639374327114313);
    msg.setSource(40021U);
    msg.setSourceEntity(175U);
    msg.setDestination(47118U);
    msg.setDestinationEntity(143U);
    msg.arrival_time = 0.2299441754522904;
    msg.lat = 0.038058315034561585;
    msg.lon = 0.8951848470832072;
    msg.z = 0.2992404396375564;
    msg.z_units = 46U;
    msg.travel_z = 0.9060960278205508;
    msg.travel_z_units = 163U;
    msg.delayed = 83U;

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
    msg.setTimeStamp(0.1372320648344082);
    msg.setSource(12382U);
    msg.setSourceEntity(69U);
    msg.setDestination(14322U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.26267158215930875;
    msg.lon = 0.9046623621895177;
    msg.z = 0.21636469685819726;
    msg.z_units = 114U;
    msg.speed = 0.08842504904618498;
    msg.speed_units = 137U;
    msg.bearing = 0.7096344551747161;
    msg.cross_angle = 0.8487970508346636;
    msg.width = 0.6462577509919445;
    msg.length = 0.2514781340674921;
    msg.coff = 233U;
    msg.angaperture = 0.3171073448556987;
    msg.range = 30210U;
    msg.overlap = 234U;
    msg.flags = 51U;
    msg.custom.assign("NFMKULLHHTRFANCBBILBQVPHXZGCXXVDYKRHXWWAKGFNAORGLIKQGCUEUPFJTWAJQENMJFSTYRHZIRTEQOLCPXOFWSXOUKWDDUCYMHVEXKIQDEVHMWCIZOPSDGVMTYRCDMJQPISAJDPFPKFKNJZM");

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
    msg.setTimeStamp(0.501684645599306);
    msg.setSource(4983U);
    msg.setSourceEntity(122U);
    msg.setDestination(47747U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.4440654820928055;
    msg.lon = 0.22617659940302326;
    msg.z = 0.04746491980982637;
    msg.z_units = 118U;
    msg.speed = 0.1314422062489109;
    msg.speed_units = 90U;
    msg.bearing = 0.14173929067321656;
    msg.cross_angle = 0.8686394595005981;
    msg.width = 0.08365622468050127;
    msg.length = 0.12616866221857348;
    msg.coff = 78U;
    msg.angaperture = 0.29317889478328085;
    msg.range = 30975U;
    msg.overlap = 125U;
    msg.flags = 63U;
    msg.custom.assign("WALXPZQGGGVMEFUMNDEHWASYVSJABSUKPESOLNAGEYWLRJ");

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
    msg.setTimeStamp(0.3923918125836424);
    msg.setSource(2380U);
    msg.setSourceEntity(176U);
    msg.setDestination(37957U);
    msg.setDestinationEntity(68U);
    msg.lat = 0.966671144849045;
    msg.lon = 0.5615543615468206;
    msg.z = 0.6939697765294182;
    msg.z_units = 90U;
    msg.speed = 0.11950027360401771;
    msg.speed_units = 198U;
    msg.bearing = 0.8355531095473623;
    msg.cross_angle = 0.33958468898339667;
    msg.width = 0.6497407500953282;
    msg.length = 0.4241284469233745;
    msg.coff = 135U;
    msg.angaperture = 0.8931559490686177;
    msg.range = 39845U;
    msg.overlap = 78U;
    msg.flags = 24U;
    msg.custom.assign("QRUUQYSKXBGOENNGQPTPHCVYHMIQUBUVGMIKTVOFWYAAOXVSPCZLJAROHYFZXTFUE");

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
    msg.setTimeStamp(0.6381765580920218);
    msg.setSource(42000U);
    msg.setSourceEntity(250U);
    msg.setDestination(11205U);
    msg.setDestinationEntity(138U);
    msg.timeout = 28406U;
    msg.lat = 0.6625062564505613;
    msg.lon = 0.5000572132355161;
    msg.z = 0.16173162141406427;
    msg.z_units = 56U;
    msg.speed = 0.7978804061101056;
    msg.speed_units = 108U;
    msg.syringe0 = 76U;
    msg.syringe1 = 242U;
    msg.syringe2 = 185U;
    msg.custom.assign("IZGUFDMFWITPRZJBRLCGZCQDMQOXCFUILHJJQEGIIRNTUHVYYPNAFBTNGUJGNDOKMCCLXKEBXGWRQXUCZWXOBMMHYSEAEAHQZVZDAGPLZDNWNMRJMHLPIWMSFSHMRCFVJNKKLIPEXSHOUQZAOFLSWFWUEST");

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
    msg.setTimeStamp(0.0343093348793273);
    msg.setSource(24420U);
    msg.setSourceEntity(235U);
    msg.setDestination(37821U);
    msg.setDestinationEntity(91U);
    msg.timeout = 29102U;
    msg.lat = 0.9185636224750436;
    msg.lon = 0.7179145456619679;
    msg.z = 0.6576831594723208;
    msg.z_units = 166U;
    msg.speed = 0.6500111187164569;
    msg.speed_units = 226U;
    msg.syringe0 = 212U;
    msg.syringe1 = 46U;
    msg.syringe2 = 133U;
    msg.custom.assign("HWSMQUEMHAOOZKDCYALUKGMAZGNWCLHNTSTMPJSDXSHGDIQBSOLKEADYJDYF");

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
    msg.setTimeStamp(0.36474267520226655);
    msg.setSource(35940U);
    msg.setSourceEntity(79U);
    msg.setDestination(23359U);
    msg.setDestinationEntity(50U);
    msg.timeout = 27655U;
    msg.lat = 0.12196640029700156;
    msg.lon = 0.14405971103928894;
    msg.z = 0.6300305065506544;
    msg.z_units = 38U;
    msg.speed = 0.2938409393681265;
    msg.speed_units = 246U;
    msg.syringe0 = 1U;
    msg.syringe1 = 104U;
    msg.syringe2 = 124U;
    msg.custom.assign("HXJYLBALUVEPKITGSEFOCVSSUNBDMUKFBYBGSPOHLQCDRBDZNQDXEAPSMUMNDYR");

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
    msg.setTimeStamp(0.23286141036080343);
    msg.setSource(4003U);
    msg.setSourceEntity(191U);
    msg.setDestination(19021U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.467464421031068);
    msg.setSource(45502U);
    msg.setSourceEntity(201U);
    msg.setDestination(53589U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.5572720497274606);
    msg.setSource(28050U);
    msg.setSourceEntity(71U);
    msg.setDestination(44658U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.68323495368628);
    msg.setSource(51667U);
    msg.setSourceEntity(198U);
    msg.setDestination(44077U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.7792309857288714;
    msg.lon = 0.8769263623526706;
    msg.z = 0.18532347054925769;
    msg.z_units = 120U;
    msg.speed = 0.30167005356998455;
    msg.speed_units = 141U;
    msg.takeoff_pitch = 0.8822709567207843;
    msg.custom.assign("MXCOWGBUKAMUZDIETLSXVLUFRVDKHVGBAHSCFUGZFGJXPFNRTMASQAQUCSNIHVDVYBQQUIVIEORMWEXJPFZQYKSHLBAOTLSMGODKZNIXLZCOGXCGEQWNCHAGNIBYCQUEXSFMKZERBVMBWJJQSPOPWYLNAUKXDTHTDYTCPPOBKVTPEXEYTYKLJIJMWGIWRJEWRPTDMDSZZEWWFCUSJYQVT");

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
    msg.setTimeStamp(0.18382383687129433);
    msg.setSource(56511U);
    msg.setSourceEntity(122U);
    msg.setDestination(59500U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.0021242150983479258;
    msg.lon = 0.08461251682052562;
    msg.z = 0.39055060455518775;
    msg.z_units = 69U;
    msg.speed = 0.7691321904316261;
    msg.speed_units = 78U;
    msg.takeoff_pitch = 0.44790937604651504;
    msg.custom.assign("GKVXSQIQDCOKVSYHOBSWYFKNSVIXIXSWXVGFJXTHEBOUOLTCIIAPLZUEIGERCJRHKVDFNZGPMPJAWYYHRFRBFEIUINPGVQTBRQEZLYNUSAWNXMJZSBKYDKCLJFZRMVSFAWDHWTGSMGVBLIKLTONFCJUJVRBLABDPICPYQKREMFODUZALJCUQPENKPYRWUBTAHNQZKEPDOOXDOCJJG");

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
    msg.setTimeStamp(0.3407775043804093);
    msg.setSource(61620U);
    msg.setSourceEntity(94U);
    msg.setDestination(57322U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.09114836755086708;
    msg.lon = 0.5964162541670277;
    msg.z = 0.8363866338782687;
    msg.z_units = 147U;
    msg.speed = 0.5681334359889142;
    msg.speed_units = 228U;
    msg.takeoff_pitch = 0.07863165098304081;
    msg.custom.assign("ZPRYJHPTSHZDOIJUBUEOOVKIWCERIJQZVALLCCZJJPDZASLZIZASMPMOQFHAITDMVTNJCWBHSFVTYSUUQHNEGDYCUXFKSYAXPRTRERSNJBPVFLQXEMTJTBPOWIUKIFCXTSDLQUBBMMVVGWGLCMAGNBCPACTKYALZZDWNLRVMFGHBXDFYRSXVNGTFYGWKUKQLOWMJOYFISROGJZUWGADDXEHXWHNNEMAREKPYQXBEGQLQKNKXUFEW");

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
    msg.setTimeStamp(0.3443967826477008);
    msg.setSource(14533U);
    msg.setSourceEntity(252U);
    msg.setDestination(20097U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.6729487151920881;
    msg.lon = 0.7987096600405311;
    msg.z = 0.7968514067024843;
    msg.z_units = 114U;
    msg.speed = 0.672195721494076;
    msg.speed_units = 148U;
    msg.abort_z = 0.4018454353020817;
    msg.bearing = 0.3193691358232853;
    msg.glide_slope = 234U;
    msg.glide_slope_alt = 0.17036043400761425;
    msg.custom.assign("STHXUKDTQYFRAWJHUGQIKBKVSUKNNYKICSWKNEDILENFNGCMZZAAUMKCSCMYVROMLYQTTDIZP");

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
    msg.setTimeStamp(0.2624906004750117);
    msg.setSource(46634U);
    msg.setSourceEntity(184U);
    msg.setDestination(35766U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.7773077010659927;
    msg.lon = 0.07426549369866053;
    msg.z = 0.8816851177224834;
    msg.z_units = 138U;
    msg.speed = 0.9490875188016036;
    msg.speed_units = 94U;
    msg.abort_z = 0.9885755952031455;
    msg.bearing = 0.7835485157451534;
    msg.glide_slope = 193U;
    msg.glide_slope_alt = 0.7363085743475839;
    msg.custom.assign("DSSUJBPYFTRKHRYSWIUSJRVOAEVELLKMLIEXNCFWHMQHEEATOJNDPWHFFDAHIRUOPXKGNCLYZGWVZFBNTPFGXGIONWIKUVBNRVQZHZUOMYZARURPXGJYITZKLYOLIMCGLRZQCBHMLVNUIZQSHFTJSM");

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
    msg.setTimeStamp(0.26335984262145307);
    msg.setSource(35778U);
    msg.setSourceEntity(110U);
    msg.setDestination(52735U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.43981999236604663;
    msg.lon = 0.9563759750336375;
    msg.z = 0.5718965301661778;
    msg.z_units = 197U;
    msg.speed = 0.06280524505579854;
    msg.speed_units = 5U;
    msg.abort_z = 0.1794060618744514;
    msg.bearing = 0.3167295561066391;
    msg.glide_slope = 50U;
    msg.glide_slope_alt = 0.2903651762401701;
    msg.custom.assign("TRYTFHNGWWLBMWYJUNXSVMFWGWDSAKIFLJXBCDOKOALZRGGPPLXHFDBCBJQBLZAADXEWRESRURGOYIVNUTEUANACLXAROSYFLEQTNNJPTJTMIQQGHPRPPJBQYSJZYMKZCDKTUTKOMNCMENDEJQCIGYSKFEFHIZZWZHCJRUWZYNVMUSVZOVPPHGSIGXQBDIFRVEOKIUPXKAMHL");

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
    msg.setTimeStamp(0.03442097440647485);
    msg.setSource(25543U);
    msg.setSourceEntity(219U);
    msg.setDestination(64098U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.7364789970155319;
    msg.lon = 0.13677727979659104;
    msg.speed = 0.33390779873917764;
    msg.speed_units = 32U;
    msg.limits = 90U;
    msg.max_depth = 0.9903849485876496;
    msg.min_alt = 0.03378401969634415;
    msg.time_limit = 0.851068707714592;
    msg.controller.assign("WRDGHZFFQZUKFOAYPEYMUYFYSMHEWQRISQXZRDAOSVYLOWOZBYVCESUJAJDRJCMIUXOBIPZCPOTJYCOTMHGPJXBJPWNKWAXFOFGCQZTJVKIMPLQYHLIXKRBAXML");
    msg.custom.assign("PYURDRBJVIQJIOXLYWSBYWTXKUCNTZNEAVKVCUSJ");

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
    msg.setTimeStamp(0.8652756892115975);
    msg.setSource(13488U);
    msg.setSourceEntity(237U);
    msg.setDestination(405U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.008384327767491428;
    msg.lon = 0.15547659657810586;
    msg.speed = 0.08039741426385971;
    msg.speed_units = 145U;
    msg.limits = 14U;
    msg.max_depth = 0.3108103630269704;
    msg.min_alt = 0.3661839327515066;
    msg.time_limit = 0.8974212471902829;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.8717076356436174;
    tmp_msg_0.lon = 0.5455248525648875;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("YZDKSFFNUBEVOSSAQSJUKMMHQVPTXZWWBOVQJIECONYUUGLNKFSRUTHCCQOJLEPWYKOCZODADJGLXGCQEASNAYDPREHDJYSJMKJYXVLLERNKRXDOHAJJGWRVANRZBZXDBAFKIEHZEBNJGUPSG");
    msg.custom.assign("JPNHZYQIDWETTMLJROA");

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
    msg.setTimeStamp(0.14595198301788037);
    msg.setSource(12960U);
    msg.setSourceEntity(96U);
    msg.setDestination(27548U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.6836625277523688;
    msg.lon = 0.9053720813810087;
    msg.speed = 0.7469990655249417;
    msg.speed_units = 115U;
    msg.limits = 90U;
    msg.max_depth = 0.42599539809754394;
    msg.min_alt = 0.9565830108072512;
    msg.time_limit = 0.4152803985512268;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.3841479902896643;
    tmp_msg_0.lon = 0.8442366385090736;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("HDWSCOEWRXTOKGGBVNTPCFZLXABCLUGNEXYYYZHGNNMWQAAQQEITKRRRXSONLUKWJDMPDLNOQZCRORWVWZYHUBMHRAHEFBTEPKWFCSHMCPOXBVHTFVJYDHCNUUKIYGMLUFDGQHPEAIIADWPYXXULTDLPKJRRYJWGXZAVISZDPFJNHCOQZIPUBGFNEIVISVDTJA");
    msg.custom.assign("GTAHNFJPQJLNAARZZLTVTUSKAVRMYLZFTNNSVYOGEAHFVCDYSJYCTSGZFPQSESENUQXIPHVQUYWZXBXKRIKWKVPFLULWEBZKKYFKLBJFHQGMAZIKOWJQKMBQIMFFEOGQOIDSPNHOBWDPUODKRXEUMGBZXHPAINWGOACOCMDZHJJBPBUVLSUBJWCXINWWCYXNMPDTMTLSIJBSYXEXCMLXOJRECVGETAQZAGRWRVDNRGIHD");

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
    msg.setTimeStamp(0.6887818848749375);
    msg.setSource(35690U);
    msg.setSourceEntity(233U);
    msg.setDestination(824U);
    msg.setDestinationEntity(215U);
    msg.target.assign("FNELDNYUOIQGCMTZSHIMOJDLTYDFMWLZAFJRWMIHJCTVXKCUSRHALXXFNCQXWCBZVLZUXKEMKIUFNXSGMQKGTZKBUPCLIMJMPUDEFN");
    msg.max_speed = 0.19620359211797245;
    msg.speed_units = 107U;
    msg.lat = 0.007739772199953809;
    msg.lon = 0.6618709686181142;
    msg.z = 0.38940161388726147;
    msg.z_units = 181U;
    msg.custom.assign("YBOSXCHBLBVUGRPDPKKLHPNTEBGRTSQXBUYMMZESQLBGTSESWZCSNOXEPERPFIMMXJUYQKZJVNBVXDHVMDRAAWECPOKBXYIDLIYNVQFDMFFUSBGTKYWPQJVPAZSAWT");

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
    msg.setTimeStamp(0.326339039449945);
    msg.setSource(55433U);
    msg.setSourceEntity(47U);
    msg.setDestination(50248U);
    msg.setDestinationEntity(232U);
    msg.target.assign("CAYGKFRIGFKLLKYPQSZLBMILWVXUY");
    msg.max_speed = 0.9019130773238045;
    msg.speed_units = 92U;
    msg.lat = 0.646846421744312;
    msg.lon = 0.26756442350034637;
    msg.z = 0.8864995318126035;
    msg.z_units = 225U;
    msg.custom.assign("FOMECFSUKEYTUGOXZJMODIEWQIKYTWWVELZPQHUBXBPSIUXIYTXRUJBJVSYDXNRMULLTEOTHGYQMDREMRAVPZZLKJLVUCQNEHRTELCHFZWIHRDSANJVCDWLLKACPNOPGXIXNOAWVKBRHKIWTBTOSHZPTYIFQQVYHUFJNXVCKZSFYSIN");

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
    msg.setTimeStamp(0.12089943261053493);
    msg.setSource(3942U);
    msg.setSourceEntity(15U);
    msg.setDestination(59661U);
    msg.setDestinationEntity(20U);
    msg.target.assign("JYKRBOSWKSTAFRWVMBQAYYGHSTVESYUAWPVUIDNADFPLZCGOVIPJKCZXMLGQHPMGXXUXFAVZOPDKLHNCNSVOOBSDPIHWXIRRAGZFRYINYJBKZHQYRTJJFEBCMBYTOQDNZTSKALHAEPBBBLYSHXRQJGQEXZLFCEUHTEYIFBUXRUTMZWWNKAWVGEXVLFUKUCOCIPZKMAJQFIICUTMCPENXNDJOEDLUJVWQGLOGHGNOREDQKTQDWDMILJ");
    msg.max_speed = 0.4442513034241017;
    msg.speed_units = 78U;
    msg.lat = 0.4724473845218966;
    msg.lon = 0.9381379865926778;
    msg.z = 0.8633137668614209;
    msg.z_units = 8U;
    msg.custom.assign("ZDGGJYULJDPATCMYUYLBWSEVHNDLBABVWCEESNIPFQNKFTWBAVXJBIKOIDWSFGJHDFLZCPCWHGFRUFJUMRTQHQOQXPBZGGQGRYBDVGJVFODEHXSURJBUNJXCDIOSZTQSMMWYTHRKMXZLYELHUCCWSODKPGKPXIHPNWAEXZQUXRANTLVQRTRGJPKIUFMENAECSILOAOMRMQOEUCJDZIYZHIBQSNKAXFYAWLXKTMEYCOVPVILYPTVSHZVKRMNWBT");

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
    msg.setTimeStamp(0.6023352112770377);
    msg.setSource(58943U);
    msg.setSourceEntity(182U);
    msg.setDestination(33371U);
    msg.setDestinationEntity(199U);
    msg.timeout = 20013U;
    msg.lat = 0.32707036152446545;
    msg.lon = 0.06977681859737483;
    msg.speed = 0.5299759183873871;
    msg.speed_units = 220U;
    msg.custom.assign("SHXOICRULJSGUSPTZLDNHQPBFYXDSWECPYHDXSNQCVPUMTBSLEOSIKIWGDRYZTSCAPAVEBIDCWIEEYGKTVWTKYOHPMUUQFXQOTQAXKMGOMLGRMINMHPVRJVFZTTFADBKRJGGYIETUXOWOJZPZKXXRLCFEQHJULYPUDCCAVWXJERYHKGBHKMAJDVAWITYFCZJV");

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
    msg.setTimeStamp(0.9410420332181963);
    msg.setSource(26014U);
    msg.setSourceEntity(132U);
    msg.setDestination(41688U);
    msg.setDestinationEntity(179U);
    msg.timeout = 9369U;
    msg.lat = 0.9921039386786386;
    msg.lon = 0.34391658169981476;
    msg.speed = 0.876568613724469;
    msg.speed_units = 230U;
    msg.custom.assign("OUTXHHVBDNSDZPDMVSTHXBCOAEEIQMRCQKWFKLOOLRIMFOCKQAPGSHTALTNIUTWICWQCWFKKQZMODDFAFPOIBSJRZLACNGYXEVXQNEEPBQQABNGSWOVWSRJRKMTPYGAPUDDFJBRKNUJHHWWNMFEBZQRCFJUXSEIGEDSNKETJLBOFNJZ");

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
    msg.setTimeStamp(0.3718970253670921);
    msg.setSource(21282U);
    msg.setSourceEntity(164U);
    msg.setDestination(20411U);
    msg.setDestinationEntity(249U);
    msg.timeout = 30258U;
    msg.lat = 0.20303331382638223;
    msg.lon = 0.3553659826443538;
    msg.speed = 0.4216195453229148;
    msg.speed_units = 247U;
    msg.custom.assign("GEIVWPDFGKOQMYPIRGENLXPSHMAIODTLWURABTXONEGSCSPACVLZEJZCJIO");

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
    msg.setTimeStamp(0.6034415494756618);
    msg.setSource(5057U);
    msg.setSourceEntity(53U);
    msg.setDestination(11214U);
    msg.setDestinationEntity(201U);
    msg.lat = 0.31485109135197176;
    msg.lon = 0.2565880293889925;
    msg.z = 0.7013536173981878;
    msg.z_units = 173U;
    msg.radius = 0.3729815578951078;
    msg.duration = 54860U;
    msg.speed = 0.9622049929512425;
    msg.speed_units = 104U;
    msg.popup_period = 11983U;
    msg.popup_duration = 1345U;
    msg.flags = 245U;
    msg.custom.assign("OTZVPIVISJLCGCPSJTDWYVFTPJDOGCVHDDYLYPUKNAUPSUFWWFVMZHGZKHMLHMUDQQRNYGIHQPAOLEKNWEJSQPCRVVBYXWKTSZBLVFPUKXZRFURUMDZSWZBSZJXIBVQXIUAMDGQFAYJEOJEKBIY");

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
    msg.setTimeStamp(0.06783339823432699);
    msg.setSource(21306U);
    msg.setSourceEntity(170U);
    msg.setDestination(43491U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.9144022463604792;
    msg.lon = 0.6676415892400496;
    msg.z = 0.9841312033503861;
    msg.z_units = 111U;
    msg.radius = 0.7621636045262612;
    msg.duration = 44389U;
    msg.speed = 0.06552417187033255;
    msg.speed_units = 184U;
    msg.popup_period = 56864U;
    msg.popup_duration = 25453U;
    msg.flags = 228U;
    msg.custom.assign("TEMUJSRRBRKMBIDNELXDNKKOGVODHMITQZMIUPMABSPMVKUBOTGFWAHGIOEZEHAQNUAFQVRGWZFLLIOXRAYOKUDCSMYJUXLFJHRFDSDIIGHUZKCFFTCQPDXAFTDPJVWZPQBWXPRPYBQSGZYKHAXRIXOJYVDLJDTJI");

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
    msg.setTimeStamp(0.8128537049420247);
    msg.setSource(22408U);
    msg.setSourceEntity(182U);
    msg.setDestination(5293U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.32056453210672353;
    msg.lon = 0.38983155994135343;
    msg.z = 0.9069684028492572;
    msg.z_units = 227U;
    msg.radius = 0.3653599376356321;
    msg.duration = 29932U;
    msg.speed = 0.18159694972189955;
    msg.speed_units = 245U;
    msg.popup_period = 18511U;
    msg.popup_duration = 62040U;
    msg.flags = 107U;
    msg.custom.assign("YLNHGETMIFOKGROMNVLFBRKXCDQPMPBFYSISOLYMRHJWWSZIVKVTFIZUFKCADSWGITFHDMLXJJDJOAXCPEHLLTP");

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
    msg.setTimeStamp(0.4642641271982909);
    msg.setSource(25977U);
    msg.setSourceEntity(126U);
    msg.setDestination(49954U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.7816868064127865);
    msg.setSource(60942U);
    msg.setSourceEntity(0U);
    msg.setDestination(3652U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.9503350617445135);
    msg.setSource(6827U);
    msg.setSourceEntity(187U);
    msg.setDestination(8874U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.5301681363888319);
    msg.setSource(35888U);
    msg.setSourceEntity(214U);
    msg.setDestination(41818U);
    msg.setDestinationEntity(247U);
    msg.timeout = 22357U;
    msg.lat = 0.42880588706665057;
    msg.lon = 0.7287722375499099;
    msg.z = 0.4613150192795845;
    msg.z_units = 71U;
    msg.speed = 0.4869166672998323;
    msg.speed_units = 159U;
    msg.bearing = 0.7707405708962756;
    msg.width = 0.29991229083165627;
    msg.direction = 220U;
    msg.custom.assign("QDRBTVXPIBRCJWQDZZGYNLCWQFVLARDJTNLNBLOHEUKXUSXYCLAGBDOCIV");

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
    msg.setTimeStamp(0.3726852847066502);
    msg.setSource(64668U);
    msg.setSourceEntity(111U);
    msg.setDestination(729U);
    msg.setDestinationEntity(175U);
    msg.timeout = 6226U;
    msg.lat = 0.8278504946030282;
    msg.lon = 0.2934310225579332;
    msg.z = 0.37787542961745246;
    msg.z_units = 225U;
    msg.speed = 0.7115113830308676;
    msg.speed_units = 6U;
    msg.bearing = 0.01596874251146141;
    msg.width = 0.12896303044291302;
    msg.direction = 137U;
    msg.custom.assign("GMKZXCTRSIDWAJWBOASLSZKVRZHSWQTDCYPNAYNWBGXUIXWYMGJAMOBIUSLKITOHSDPRLLKTSMJESDQVAEDBJRPHLWHYAYCCFJONZFSQTFDVVZVRHGUPUQNKLAYZQYAZFQEUHPBADQRVKCJGNXIGXQJVINMLRUXKTITIRWBGFMFYIOBKBEDRMLBXG");

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
    msg.setTimeStamp(0.4625101312050378);
    msg.setSource(20049U);
    msg.setSourceEntity(162U);
    msg.setDestination(28863U);
    msg.setDestinationEntity(125U);
    msg.timeout = 28045U;
    msg.lat = 0.866648001393788;
    msg.lon = 0.01000790735810586;
    msg.z = 0.13916395130304793;
    msg.z_units = 106U;
    msg.speed = 0.9124423970999412;
    msg.speed_units = 185U;
    msg.bearing = 0.36716185750565167;
    msg.width = 0.4656944843853017;
    msg.direction = 53U;
    msg.custom.assign("QOXGKDWXIBRPJKRZJFAIJAHELWIWKYEYVGERRKPSIKXDTGCWNHJUWUEXSTYUXEUDPPFXBYSGUULDDQWFPNZMAJMLB");

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
    msg.setTimeStamp(0.08483378684537701);
    msg.setSource(12207U);
    msg.setSourceEntity(133U);
    msg.setDestination(51320U);
    msg.setDestinationEntity(43U);
    msg.op_mode = 136U;
    msg.error_count = 179U;
    msg.error_ents.assign("NMGOKOGMTVQOKWEHIPWATDTFGPIARHDAJSEFFLVVLKFZSPKMONLAOOZHNKIDDVIZFQADIWJRIBUUPSDHDOHTQODLSETVLUZNRCCFJGSYCCNZGJRBLEVSYJAGQNAFHKXVCSQLGKXUVGFNIRTMEQ");
    msg.maneuver_type = 62521U;
    msg.maneuver_stime = 0.36013714710873723;
    msg.maneuver_eta = 48683U;
    msg.control_loops = 1777829381U;
    msg.flags = 18U;
    msg.last_error.assign("HMQICQPDYQYYUFPUO");
    msg.last_error_time = 0.7595286724472382;

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
    msg.setTimeStamp(0.8809320078741889);
    msg.setSource(58160U);
    msg.setSourceEntity(179U);
    msg.setDestination(54511U);
    msg.setDestinationEntity(48U);
    msg.op_mode = 87U;
    msg.error_count = 126U;
    msg.error_ents.assign("VYCOORBXNRXTPLJWJKDMBYYLLSKBPGUMIRBHIPKHODTZFGVRWNIAMPUTDWBABPORSDQQAORTTIYJULLZRGNGNUYQLVYRUGQZHFAUHCLSXIQLNIGMCSZNSEVXGBKQWBNADZSEQZVVGSCMLFUHTEJVUFKJQEKDJAAFOZ");
    msg.maneuver_type = 20515U;
    msg.maneuver_stime = 0.39592526846670273;
    msg.maneuver_eta = 64006U;
    msg.control_loops = 1244333258U;
    msg.flags = 225U;
    msg.last_error.assign("PEVKJDPZYJNWZIGCNXWHKPOPPZLXQRYLCXSFUBZBBWRVUVUVWHKUGYJWZWJFGSKROZRTVUATLUJNCNAZYNNMISKQMJGBHOZRJCCEOLECUUKPXXC");
    msg.last_error_time = 0.8817876109550251;

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
    msg.setTimeStamp(0.05834022062031019);
    msg.setSource(19425U);
    msg.setSourceEntity(204U);
    msg.setDestination(31017U);
    msg.setDestinationEntity(189U);
    msg.op_mode = 229U;
    msg.error_count = 116U;
    msg.error_ents.assign("RFYWREXHHLHJROULELHWUPROMFFBGPNUKUGCILZLZDNKOSXOJUSGSXITJMEIWEMG");
    msg.maneuver_type = 61533U;
    msg.maneuver_stime = 0.7457178411409582;
    msg.maneuver_eta = 27356U;
    msg.control_loops = 509030019U;
    msg.flags = 51U;
    msg.last_error.assign("KLKRSNMQAMQLNWHIRPPEBZPZNHRTSCTIGUZFQQFJSGAMAVHOBPFZOKYGZXZQYRJLPCXVYTMXJDCYEOGPCNIFVNVTEDEXCCIMFSJFBOXDNUEVT");
    msg.last_error_time = 0.7552771417945602;

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
    msg.setTimeStamp(0.6985687970198201);
    msg.setSource(19997U);
    msg.setSourceEntity(34U);
    msg.setDestination(42004U);
    msg.setDestinationEntity(66U);
    msg.type = 109U;
    msg.request_id = 26080U;
    msg.command = 206U;
    IMC::CommsRelay tmp_msg_0;
    tmp_msg_0.lat = 0.6388731992893376;
    tmp_msg_0.lon = 0.6082696012781227;
    tmp_msg_0.speed = 0.9710681231015591;
    tmp_msg_0.speed_units = 245U;
    tmp_msg_0.duration = 5861U;
    tmp_msg_0.sys_a = 30551U;
    tmp_msg_0.sys_b = 45780U;
    tmp_msg_0.move_threshold = 0.15013548775298458;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 1711U;
    msg.info.assign("BPAIFGMLTRZJBMVFPSEWCYNPUALRRHXOHYGBNIBNCHIVPEMTTNSDDBMMEYXHPRHAWZYRCQQWTZZEEDZTLWJFGEGUNMUKEQBWZLSYKATULXHRLGLU");

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
    msg.setTimeStamp(0.03308139185399561);
    msg.setSource(47565U);
    msg.setSourceEntity(253U);
    msg.setDestination(5332U);
    msg.setDestinationEntity(231U);
    msg.type = 31U;
    msg.request_id = 5874U;
    msg.command = 138U;
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 38944U;
    tmp_msg_0.lat = 0.16912424941315052;
    tmp_msg_0.lon = 0.5685936834787058;
    tmp_msg_0.z = 0.5751602277999779;
    tmp_msg_0.z_units = 153U;
    tmp_msg_0.speed = 0.39298631229273984;
    tmp_msg_0.speed_units = 128U;
    tmp_msg_0.duration = 54613U;
    tmp_msg_0.radius = 0.15200505034056655;
    tmp_msg_0.flags = 114U;
    tmp_msg_0.custom.assign("RJXBFOJGLVKJEVNISMAWLNBUKMKUWXYNGMFBRICAWVJCXVCNGOHRGBTYELARRNROIXUJZPLEJZPCFSPFTVFSF");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 35306U;
    msg.info.assign("QEJHNUDNEGMOMDQBMUHTOPRPVJJUWAISCOXQRDCKZOVV");

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
    msg.setTimeStamp(0.33571696535118334);
    msg.setSource(36468U);
    msg.setSourceEntity(228U);
    msg.setDestination(41035U);
    msg.setDestinationEntity(174U);
    msg.type = 80U;
    msg.request_id = 10656U;
    msg.command = 5U;
    IMC::ImageTracking tmp_msg_0;
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 53172U;
    msg.info.assign("DAMPSJBFFNVBHIRBVTZMTLRMCHUOFQGPAIHNTWTTUNYYJZADEEAHNWOHCBYWXQEUEDKJYCENGVILUVTRULFCPVSWOCQNZPSKXRQJZPPNOTBBATMLQDDRWJEZJRAFURYKGOKFTEKDRSCISIEWXMOAGHUKGCLDPFZFIGVEKGXDQYQXXGYQXPIWIHKALUPJALJYFEORCYAZUMWIWVSKVDBLSJVMOHXQLCCSNXBSSHBBYKMMOUMPZOHTGQVWJRXNLI");

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
    msg.setTimeStamp(0.25763269305041037);
    msg.setSource(53904U);
    msg.setSourceEntity(27U);
    msg.setDestination(790U);
    msg.setDestinationEntity(32U);
    msg.command = 9U;
    msg.entities.assign("ILEKTVXYXSOVQTWOCQRJHLECDFIRPDXMFSIAWIFBXBXALSAMTUNDNBESUPOCKJMWMPKUPCHZIAAGROISZWKFGMUYRGEUNCLZWGFGLHRGUFTTCDHFDMIOKZBXEAZQYGOLQZBYZKNMTPLNIKAQCJKVYLCSGNSQBNDOVVUYOYRPUVXQDWZCWXNMWZVFSOHJKFCJVEA");

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
    msg.setTimeStamp(0.08023687555797443);
    msg.setSource(27488U);
    msg.setSourceEntity(175U);
    msg.setDestination(55643U);
    msg.setDestinationEntity(110U);
    msg.command = 144U;
    msg.entities.assign("OHYLAAEBPYBXVNSFAVEJUPMTEQMSTFYFRLEPKHGKAJHUQTGXKNSEZKMFWKOAWCMKMUDJJPVSEZIUDPMVHVUFRODDVZBDMLHHXIWSXIKIEYFPSKUCYBVRRPWOIGJXTZYGPCSZCQAOFGXQWYDJGCZLAHJQQTLSNNMZYXTQCJLOFEJTLBNNTFONMLVBSZTWGIBWRXBGFVJ");

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
    msg.setTimeStamp(0.8533592876686735);
    msg.setSource(21687U);
    msg.setSourceEntity(220U);
    msg.setDestination(7059U);
    msg.setDestinationEntity(135U);
    msg.command = 210U;
    msg.entities.assign("QTHRXYGGLZNVMEDNJVFIXVTICSZZHLACOIMRTONWQAXXQWCVXINKOQDPIKFRFSPWVOIKBVEPQJQLFVMBOOCSBKWUTFMTKGDN");

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
    msg.setTimeStamp(0.021875145784608474);
    msg.setSource(12528U);
    msg.setSourceEntity(232U);
    msg.setDestination(2373U);
    msg.setDestinationEntity(122U);
    msg.mcount = 29U;
    msg.mnames.assign("NSUYSHDKHAGCAVRGLTFBPCUIBWVRYXYLAATOZRQQWQGOHESMFIQUMHEOLKBXMGOIZGSOBIQSEAJVWFEMNWMXDOJERZGQKYXPKVPPYFPNZDHUDLOZGABNUSXDMAXCOTQNZVDEDLLBNHNYAUKYVCFWJWQWAMKRBQYXPYBOPIEHBFLGSEZEVCICSRUJ");
    msg.ecount = 227U;
    msg.enames.assign("YXPIQZUCNVUZALMSRMQNDSZUHVMCOBFZONFITFJRDTEPXBCDUMLKXUVRSFSPXWPMWEFLZPTAWQVXKJBLKWFENGOCNDOBLVPXOYAUPIJIJMCBBOWW");
    msg.ccount = 169U;
    msg.cnames.assign("LNMNVNLMJWLOLIUCYKQVUNSSKGIOLJBVGMBIYASGYIGQXOTRDVBYNPLHXUBRMVYUNMTNFUDWZVO");
    msg.last_error.assign("IFSHKPNXYDTQBNHKQOVXYMEKSOLYONIPRHZGLQNHBRNVMIRRFSEGWSGLKFPKACCZYPZDPXAUGXGMDXCWIOJYONRCXZWFEJACDUDRJLBFILEWTZKVFRTUPKTNAVQEHOVBWJATQVDMLOZGAYTAVXUNULAWJIMTOJMCVBTGIPIVZHSSKDWNQJPGKVZPSYUWEXUGLFDTQJRWBJBEBXACYISCFWFQPJTLUUHNIMZOZABDRBHHRQEKMSQCYLXMHOECYU");
    msg.last_error_time = 0.80419732652973;

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
    msg.setTimeStamp(0.6682604332740931);
    msg.setSource(53295U);
    msg.setSourceEntity(228U);
    msg.setDestination(8601U);
    msg.setDestinationEntity(193U);
    msg.mcount = 128U;
    msg.mnames.assign("AJKUKMRJIFFTHTSCTDRMUBSIMEGRQXIHCNBOCATUJQWPOAQOFZDIUYGEVPTMUZGOWAEPRQBQGRFYNAHYDMGZUZHVOYTFVBYHQHYZOCIWLXHELQSAIXCLBJKZF");
    msg.ecount = 65U;
    msg.enames.assign("KNMVPZGPXOWLHTJUERFSPZCJFUVAHRYOKUSGDCSVJJAILSVWGTCUAUIMVDUIISEPBOTLAOMFFZAJONYCIETQYBXBCHYPRHDGRBWOEROVMTIDLKNWXMDRSXROPANUNEGKQZQ");
    msg.ccount = 140U;
    msg.cnames.assign("QOMVGBAUCFQNAEXAZZCDCCHUMMPXKPEUPKRDDLMGTSXTNWWVPYOGJADOZVHLSOKKRTLNSQTLSCTOXJONIYPFJFUSBYWQKINBQVALOKTWXJZML");
    msg.last_error.assign("YCIDOGCPMAOHZVVDTLVMQEBMFTJACQWPHLHPXYDNPEHJLMAGEBHKHYNYDRBAVGZJAMSLBYTHVSXQWPUZNBNUCBFUNXIZVZXRCFQDHAVNONWQTCSQHGMGYLPITZSMXBSBUXCRFFFKEJAZCEREOPKOUOKRIBEDUIPSWYTJFSXKSDJKITOIQJXUUVLTWOJDKVMSRQYXGRGFIAGLJLTNWJUZAWRERIKCMHQWWSZGULYE");
    msg.last_error_time = 0.774569746777841;

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
    msg.setTimeStamp(0.8289915861956776);
    msg.setSource(37403U);
    msg.setSourceEntity(27U);
    msg.setDestination(40658U);
    msg.setDestinationEntity(166U);
    msg.mcount = 12U;
    msg.mnames.assign("RUGNMGJXTHEIXVXRSDBJKHDWKSOLBCUZDOFHCLIJULIAUOXCDQAYQJYPODNLMOZYMWTEXQAQPRITJKULMKRFTLSDCMBLJUSIMCVQRSNWUZROLDFUMNZDKANFGUCSSTFOHKBWVZGKDQMOWVILPHCEAGZNGRGAOJHWQBPCNXIX");
    msg.ecount = 228U;
    msg.enames.assign("YSVMSVNTVOFTJBFQDSMANKFBBUQAJAHYLTCINNILHPRPWHMIKRKZVZWGFWTUNKDWMHZRLXDUAXQSHZDNCSPKVRJJESPKRTMSOLKAVWTOJNUDZTBYDGREPMPXUYLVZYCSO");
    msg.ccount = 183U;
    msg.cnames.assign("IVXNCQZGJZKPFGCONORQCPUZFYBTJMSDMPPRJFYFTYGQVSXXJGCNDRAQWK");
    msg.last_error.assign("ZDXETFRQSOPQMCAOMGWBXALZMKOAVWZBLWBBSDTLMJMDKULWUNDFUKTHTFXYROYHVELCGRAIZIWFLZGGIEDIITGQJCLNOFWSVHEYJZPERBRRVUTRBEVMFDRPGBNCDXA");
    msg.last_error_time = 0.2724921495221023;

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
    msg.setTimeStamp(0.5631005335023338);
    msg.setSource(19007U);
    msg.setSourceEntity(168U);
    msg.setDestination(16832U);
    msg.setDestinationEntity(158U);
    msg.mask = 131U;
    msg.max_depth = 0.020399647755834915;
    msg.min_altitude = 0.9857702803994296;
    msg.max_altitude = 0.6487168183087481;
    msg.min_speed = 0.21368504291322743;
    msg.max_speed = 0.28315866998522543;
    msg.max_vrate = 0.14911722041279296;
    msg.lat = 0.011638550826822192;
    msg.lon = 0.74951488509592;
    msg.orientation = 0.18742025666431805;
    msg.width = 0.6253153972267752;
    msg.length = 0.9252057836223642;

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
    msg.setTimeStamp(0.9182265836799539);
    msg.setSource(54537U);
    msg.setSourceEntity(159U);
    msg.setDestination(63760U);
    msg.setDestinationEntity(30U);
    msg.mask = 65U;
    msg.max_depth = 0.530871198357653;
    msg.min_altitude = 0.7579429986067971;
    msg.max_altitude = 0.1725724172547387;
    msg.min_speed = 0.0219117798314743;
    msg.max_speed = 0.1562399347840887;
    msg.max_vrate = 0.9242672749660985;
    msg.lat = 0.8473504813976616;
    msg.lon = 0.9045954522442999;
    msg.orientation = 0.2143723379680038;
    msg.width = 0.17348396702877256;
    msg.length = 0.5455012896152394;

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
    msg.setTimeStamp(0.6836917464643028);
    msg.setSource(23638U);
    msg.setSourceEntity(251U);
    msg.setDestination(31113U);
    msg.setDestinationEntity(218U);
    msg.mask = 64U;
    msg.max_depth = 0.376942966217076;
    msg.min_altitude = 0.20914781633833268;
    msg.max_altitude = 0.36493509086154585;
    msg.min_speed = 0.37302622716482914;
    msg.max_speed = 0.9788749465183955;
    msg.max_vrate = 0.685568550099011;
    msg.lat = 0.8967047449510305;
    msg.lon = 0.03395212485580357;
    msg.orientation = 0.94890010622065;
    msg.width = 0.3753372716034422;
    msg.length = 0.7654016819654729;

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
    msg.setTimeStamp(0.3930894886336377);
    msg.setSource(24920U);
    msg.setSourceEntity(65U);
    msg.setDestination(43932U);
    msg.setDestinationEntity(138U);

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
    msg.setTimeStamp(0.9474125986586288);
    msg.setSource(29207U);
    msg.setSourceEntity(111U);
    msg.setDestination(32889U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.5633501250249435);
    msg.setSource(18746U);
    msg.setSourceEntity(169U);
    msg.setDestination(59140U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.7732314875106788);
    msg.setSource(56648U);
    msg.setSourceEntity(163U);
    msg.setDestination(20140U);
    msg.setDestinationEntity(109U);
    msg.duration = 56097U;

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
    msg.setTimeStamp(0.7220071605145617);
    msg.setSource(50468U);
    msg.setSourceEntity(166U);
    msg.setDestination(9557U);
    msg.setDestinationEntity(80U);
    msg.duration = 32499U;

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
    msg.setTimeStamp(0.2253633589499101);
    msg.setSource(8465U);
    msg.setSourceEntity(14U);
    msg.setDestination(24347U);
    msg.setDestinationEntity(59U);
    msg.duration = 7869U;

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
    msg.setTimeStamp(0.269998507507067);
    msg.setSource(44407U);
    msg.setSourceEntity(235U);
    msg.setDestination(49320U);
    msg.setDestinationEntity(99U);
    msg.enable = 239U;
    msg.mask = 568734481U;
    msg.scope_ref = 313250801U;

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
    msg.setTimeStamp(0.5737439974931939);
    msg.setSource(1501U);
    msg.setSourceEntity(74U);
    msg.setDestination(28227U);
    msg.setDestinationEntity(203U);
    msg.enable = 167U;
    msg.mask = 3185855039U;
    msg.scope_ref = 1396806098U;

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
    msg.setTimeStamp(0.23430981559666586);
    msg.setSource(5286U);
    msg.setSourceEntity(188U);
    msg.setDestination(47885U);
    msg.setDestinationEntity(235U);
    msg.enable = 94U;
    msg.mask = 1327175778U;
    msg.scope_ref = 3583922293U;

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
    msg.setTimeStamp(0.11955924109310212);
    msg.setSource(39020U);
    msg.setSourceEntity(118U);
    msg.setDestination(64557U);
    msg.setDestinationEntity(218U);
    msg.medium = 185U;

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
    msg.setTimeStamp(0.7650802860227471);
    msg.setSource(12257U);
    msg.setSourceEntity(85U);
    msg.setDestination(30732U);
    msg.setDestinationEntity(84U);
    msg.medium = 87U;

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
    msg.setTimeStamp(0.9040954543881428);
    msg.setSource(34801U);
    msg.setSourceEntity(32U);
    msg.setDestination(11751U);
    msg.setDestinationEntity(215U);
    msg.medium = 32U;

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
    msg.setTimeStamp(0.6755477044907715);
    msg.setSource(31509U);
    msg.setSourceEntity(147U);
    msg.setDestination(53087U);
    msg.setDestinationEntity(137U);
    msg.value = 0.19206080926239977;
    msg.type = 188U;

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
    msg.setTimeStamp(0.06510374811251651);
    msg.setSource(26525U);
    msg.setSourceEntity(13U);
    msg.setDestination(5492U);
    msg.setDestinationEntity(104U);
    msg.value = 0.88041559762782;
    msg.type = 89U;

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
    msg.setTimeStamp(0.49526208270517647);
    msg.setSource(22112U);
    msg.setSourceEntity(36U);
    msg.setDestination(47528U);
    msg.setDestinationEntity(132U);
    msg.value = 0.1899056720811022;
    msg.type = 15U;

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
    msg.setTimeStamp(0.14632518618602175);
    msg.setSource(11846U);
    msg.setSourceEntity(113U);
    msg.setDestination(42781U);
    msg.setDestinationEntity(18U);
    msg.possimerr = 0.8425335950311932;
    msg.converg = 0.6946612952885856;
    msg.turbulence = 0.5801774264440412;
    msg.possimmon = 151U;
    msg.commmon = 191U;
    msg.convergmon = 195U;

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
    msg.setTimeStamp(0.2727592051770973);
    msg.setSource(13779U);
    msg.setSourceEntity(88U);
    msg.setDestination(7120U);
    msg.setDestinationEntity(37U);
    msg.possimerr = 0.7416261200942653;
    msg.converg = 0.48137525495045985;
    msg.turbulence = 0.22769340901552826;
    msg.possimmon = 125U;
    msg.commmon = 137U;
    msg.convergmon = 106U;

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
    msg.setTimeStamp(0.6354282963177852);
    msg.setSource(56438U);
    msg.setSourceEntity(116U);
    msg.setDestination(64040U);
    msg.setDestinationEntity(119U);
    msg.possimerr = 0.5955871070089973;
    msg.converg = 0.2853297702107167;
    msg.turbulence = 0.12547806369336634;
    msg.possimmon = 144U;
    msg.commmon = 24U;
    msg.convergmon = 149U;

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
    msg.setTimeStamp(0.043132764901506526);
    msg.setSource(29484U);
    msg.setSourceEntity(162U);
    msg.setDestination(4372U);
    msg.setDestinationEntity(168U);
    msg.autonomy = 40U;
    msg.mode.assign("BDCDDQMESGOIRYLAMLKWYKGDCJZFDOQRCLVLAPFLTGPHSIUBITZOVKPCERNTTCZJDFSJWWXZIJCKBPZABDEEVNNTFTVPFGSQAYBLMXETSYHVKQNNOMHQHJWWBUELVNIJYIRQVRSABMUWZIRAEDCRKBCXQXGGZOPHYMXAUXWYPVAOTGFJHOTHYXZHQSNJLICGESHDWKUUALYUVXXCWLKMZUIFORXMFFHPMEDFGKYTGOWNIN");

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
    msg.setTimeStamp(0.8829240185624392);
    msg.setSource(9673U);
    msg.setSourceEntity(161U);
    msg.setDestination(7449U);
    msg.setDestinationEntity(206U);
    msg.autonomy = 218U;
    msg.mode.assign("VOOYPAOFCJURLUMXAPYQNLUCPDFPZXHHDZAFJ");

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
    msg.setTimeStamp(0.18782207808425289);
    msg.setSource(55768U);
    msg.setSourceEntity(53U);
    msg.setDestination(8188U);
    msg.setDestinationEntity(47U);
    msg.autonomy = 65U;
    msg.mode.assign("EGYITQOZPXQYFMZOZQGIFAKMOIMXFOKQORKRPEUOKHMTUXKXNRYLKUEYGMJFBCDJP");

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
    msg.setTimeStamp(0.2598594977637939);
    msg.setSource(19389U);
    msg.setSourceEntity(103U);
    msg.setDestination(39590U);
    msg.setDestinationEntity(128U);
    msg.type = 233U;
    msg.op = 111U;
    msg.possimerr = 0.5156915776213878;
    msg.converg = 0.6657288390717444;
    msg.turbulence = 0.52582179075711;
    msg.possimmon = 43U;
    msg.commmon = 247U;
    msg.convergmon = 66U;

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
    msg.setTimeStamp(0.8373512455809117);
    msg.setSource(44656U);
    msg.setSourceEntity(85U);
    msg.setDestination(44525U);
    msg.setDestinationEntity(226U);
    msg.type = 145U;
    msg.op = 18U;
    msg.possimerr = 0.22621653121624685;
    msg.converg = 0.3633499256538666;
    msg.turbulence = 0.5097902591947518;
    msg.possimmon = 48U;
    msg.commmon = 26U;
    msg.convergmon = 56U;

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
    msg.setTimeStamp(0.7472473040881318);
    msg.setSource(7996U);
    msg.setSourceEntity(236U);
    msg.setDestination(17971U);
    msg.setDestinationEntity(218U);
    msg.type = 144U;
    msg.op = 39U;
    msg.possimerr = 0.05329289244535085;
    msg.converg = 0.018533564352501197;
    msg.turbulence = 0.15529864922236336;
    msg.possimmon = 208U;
    msg.commmon = 133U;
    msg.convergmon = 159U;

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
    msg.setTimeStamp(0.35640005685354637);
    msg.setSource(6122U);
    msg.setSourceEntity(216U);
    msg.setDestination(22154U);
    msg.setDestinationEntity(198U);
    msg.op = 155U;
    msg.comm_interface = 191U;
    msg.period = 1235U;
    msg.sys_dst.assign("LWCCBEJXKKQYZDSLPEQFODRVSPVUDCNQFOXHPNFHXMDEDWGGYUMGSNOAMWMXJMIR");

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
    msg.setTimeStamp(0.7005296701467559);
    msg.setSource(14173U);
    msg.setSourceEntity(180U);
    msg.setDestination(4545U);
    msg.setDestinationEntity(250U);
    msg.op = 171U;
    msg.comm_interface = 234U;
    msg.period = 35734U;
    msg.sys_dst.assign("AWRFLDTTAAXJPHKWNKUDFTLQKDXNJWUMYBODIKEXENRKZSZYJYUOHYQWFWHELOUOIBCSIQFPDTLNRBDIRUIPAUQDOGTLTGQCMNVNOSGUGYHQETUDMVMTAXVZEJCQXJDPTFNCXKBSLCYRFSL");

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
    msg.setTimeStamp(0.5003611674502315);
    msg.setSource(18187U);
    msg.setSourceEntity(149U);
    msg.setDestination(64427U);
    msg.setDestinationEntity(74U);
    msg.op = 80U;
    msg.comm_interface = 105U;
    msg.period = 11898U;
    msg.sys_dst.assign("OKCXJMESIFMPULKDZGZZRSRYQHRDLEOCYRKXMPWBQSYFBBSXPUVLEIFVZMRFNMUDGNLFUEQKHJE");

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
    msg.setTimeStamp(0.7720921391001778);
    msg.setSource(49236U);
    msg.setSourceEntity(141U);
    msg.setDestination(6986U);
    msg.setDestinationEntity(122U);
    msg.stime = 3350189521U;
    msg.latitude = 0.42326674403256814;
    msg.longitude = 0.502804594071284;
    msg.altitude = 25370U;
    msg.depth = 57707U;
    msg.heading = 9558U;
    msg.speed = 2168;
    msg.fuel = 40;
    msg.exec_state = -42;
    msg.plan_checksum = 9344U;

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
    msg.setTimeStamp(0.6504490008858973);
    msg.setSource(16517U);
    msg.setSourceEntity(54U);
    msg.setDestination(19617U);
    msg.setDestinationEntity(227U);
    msg.stime = 689341900U;
    msg.latitude = 0.8148459658357211;
    msg.longitude = 0.015271812332789958;
    msg.altitude = 41474U;
    msg.depth = 64110U;
    msg.heading = 60478U;
    msg.speed = 20769;
    msg.fuel = 17;
    msg.exec_state = 83;
    msg.plan_checksum = 43634U;

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
    msg.setTimeStamp(0.8096019243589215);
    msg.setSource(41655U);
    msg.setSourceEntity(183U);
    msg.setDestination(13326U);
    msg.setDestinationEntity(184U);
    msg.stime = 3186335045U;
    msg.latitude = 0.5314397141874281;
    msg.longitude = 0.010022963201302693;
    msg.altitude = 54114U;
    msg.depth = 57426U;
    msg.heading = 54837U;
    msg.speed = 22026;
    msg.fuel = 112;
    msg.exec_state = -74;
    msg.plan_checksum = 47461U;

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
    msg.setTimeStamp(0.6258396780665537);
    msg.setSource(44022U);
    msg.setSourceEntity(75U);
    msg.setDestination(25459U);
    msg.setDestinationEntity(174U);
    msg.req_id = 14971U;
    msg.comm_mean = 42U;
    msg.destination.assign("ILBXVWNRROIQQNVIYGMV");
    msg.deadline = 0.5116126358733266;
    msg.range = 0.73053736687668;
    msg.data_mode = 56U;
    IMC::TransportBindings tmp_msg_0;
    tmp_msg_0.consumer.assign("WTQUGBIPIXZIRCVENORPZWSRQDHPELRXHJUDNLAJATPAYIUDYHTIYVFYBVKLAHSFMSCFMCBIYKFYEZOKJJXWBHDIMZTREKPJMRWSOVCNSUCONNDLFOMGSVAXVLPVRSCBSGXZBDEQORLGZMWLKGONGVXJPFUSQDEFFLBZJFYAYPQEWLQXZDRBINGJVHOPCQIUQNGUMZEFDLHBKRGKXOKCAMDMWTPHUTAXAGVJESJH");
    tmp_msg_0.message_id = 16800U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("XXVXBEVLOWZUWWUWOYUJSGAITZTUAONZZAVXVPBLNRJPJGQXLRIGLEWHBPMUQEHAIBKTSCNAXKCCWCHUTWMHNDGHBZMKHYFHOAGKBNLLOSZTRJBSPHJDKUVMSPIIOQTYYPPEMKRWTSYVHNEMLYAVGHQTZKODDYZXSKBPIIJLWUFKFUQCCORNENSOCJFAYFRQFZMAFVTRXZMVIDPDKCXQTDEFSLAJFJR");
    const signed char tmp_msg_1[] = {35, -36, -11, -4, -48, 87, -46, 64, -100, -72, 95, -56, -111, 125, 109, -72, -32, 60, 60, 107, -89, -58, -12, 19, -41, -66, 4, -16, 66, 48, 46, 55, -116, -101, 15, -67, -57, -59, -58, 83, -69, 57, 19, 75, 122, 9, 103, 28, 83, -41, 123, -107, -99, -88, -70, 101, -25, -123, 113, 47, -82, -35, -19, 86, -1, -125, 27, 19, -1, -88, -67, -38, -76, 104, -109, -95, 8, 18, -17, -109, 66, -106, -127, -21, -32, 66, -17, 120, 102, -12, 108, -9, -89, -100, 71, 34, 59, -90, 118, -98, 9, 103, -7, -118, -37, 89, -107, -15, -49, 1, 87, -39, -80, 110, -28, -127, 65, -82, -49, 105, 96, 124, 62, -80, 45, -86, -59, -76, -105, 78, -20, -62, -71, 84, 81, 101, -114, -23, -60, -106, 57, -8, -5, 10, 108, 111, -66, -62, -47, -46, -27, -58, 40, 107, -115, 109, 86, -96, -111, -46, 36, -31, -43, 68, -109, 112, -62, 33, -120, -98, 19, 47, -81, 0};
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
    msg.setTimeStamp(0.6553224588825112);
    msg.setSource(33926U);
    msg.setSourceEntity(252U);
    msg.setDestination(42572U);
    msg.setDestinationEntity(158U);
    msg.req_id = 59768U;
    msg.comm_mean = 181U;
    msg.destination.assign("RNXOGWFLSRBOHRQRMNEEJIWUDPAZEPWFHTUDJLGFZBBHTNPZRVOUHCYAWCPMCWJKLKZAUOCBQALOXEHODVKYSDQCDGGXSMMSZYAVW");
    msg.deadline = 0.9848248000215728;
    msg.range = 0.640430175228986;
    msg.data_mode = 56U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.9196663962602512;
    tmp_msg_0.lon = 0.6196530495045812;
    tmp_msg_0.alt = 0.12111238446238404;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("WZEIDKXERZLQRTOXTEUFFEAEKBKVBWFKMMTOYHMVQSIPLWLODZUTHMBYBAWHIXITRJOPNLOBGQFSUUZVOTCZQLKDXJYDZEWRXBWALFDKGWUPVHMCPUJVMVQRXOYAFXHBDOCCSWJKYVWIVPTZSVNYPEQQANNIFASJNNMDKJQXRULGAGWEBIKICGLPUMQXSCGLOJRFEMGTYRSZEHDCSYDYVZCIHGNPLNN");
    const signed char tmp_msg_1[] = {-98, 55, -118, 31, 74, 98, 55, 23, 73, -32, 34, -110, -91, -7, -46, -58, -117, 97, -71, 88, 51, 41, -6, 60, 83, -72, 59, 70, 61, 21, 56, -87, -13, 102, 22, -30, 123, -23, 126, -29, 124, -26, -45, 37, 11, -117, 56, 83, -74, 6, -26, 62, -117, 112, 121, -125, -86, 107, -107, -28, 48, -92, -51, 88, 7, -51, -81, 123, -57, 38, 9, 48, -34};
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
    msg.setTimeStamp(0.8749029272323864);
    msg.setSource(59897U);
    msg.setSourceEntity(141U);
    msg.setDestination(22725U);
    msg.setDestinationEntity(133U);
    msg.req_id = 45929U;
    msg.comm_mean = 244U;
    msg.destination.assign("EWDNYKLCEKNTHFMPKLHITLJRCBPPNJXC");
    msg.deadline = 0.6024962126655461;
    msg.range = 0.5462969118621875;
    msg.data_mode = 77U;
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.08128311124278254;
    tmp_msg_0.z_units = 58U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("EURMGECANIYVTTPVUZJKECMHRBMSDQJLSENYCOQUWXPKIWGDALRNCVSAQEVGLROPSAFUDHXOLGIKKSUQXZPZMDTDKDFXJJATWWNMLSFHSJEHANWHBLRMLNSVPTFRGRVODKGIEOGZZZKBIFTAUQHQZUCQCUAPICPPFKAMFIUYNQEYLQJKGCXRYYFBDOFOPDTWHOX");
    const signed char tmp_msg_1[] = {-79, -110, -78, -87, 89, -19, 45, 27, -81, -13, 42, 43, 47, 37, 91, -98, -50, 14, -48, -59, 87, 94, 5, 72, -110, 29, 117, -49, 6, 68, 32, -15, 36, -64, 120, 112, -109, -50, 97, -54, 123, 13, 36, -44, -101, -20, 66, -23, 113, -118, -3, -3, -93, 34, -60, -43, 123, 124, 76, -5, 18, -106, -38, 30, 0, 32, 11, 118, -114, 68, -50, -43, 25, 109, 20, -56, 52, -70, 84, -82, -91, 101, -91, -66, 101, 53, 92, 21, -127, -71, 19, -2, -99, 31, -6, -117, 64, -3, -26, -126, -111, 58, 85, -116, -74, 59, 43, -46, 26, -103};
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
    msg.setTimeStamp(0.39366231194108847);
    msg.setSource(6163U);
    msg.setSourceEntity(187U);
    msg.setDestination(27261U);
    msg.setDestinationEntity(215U);
    msg.req_id = 42653U;
    msg.status = 13U;
    msg.range = 0.6169451086970169;
    msg.info.assign("UUUOTULMGYAZTBEVSBEJDUHHPGVRGVXABIDWSBAATRTVIMPFSUADXBNHLRRMWOWWCNRJLJTEKRIPQRVEEPZYRKOXUYNQDOWNSNKGZCKMBYMJOFAMPKKQHIIFBEXNXT");

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
    msg.setTimeStamp(0.5967295654776652);
    msg.setSource(24125U);
    msg.setSourceEntity(164U);
    msg.setDestination(21375U);
    msg.setDestinationEntity(108U);
    msg.req_id = 50207U;
    msg.status = 199U;
    msg.range = 0.9836434398078872;
    msg.info.assign("MQGKFJSVABMCSTMXUZTNZLZRDWCSQLVIEWBDMR");

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
    msg.setTimeStamp(0.8033153489019863);
    msg.setSource(2938U);
    msg.setSourceEntity(249U);
    msg.setDestination(42078U);
    msg.setDestinationEntity(191U);
    msg.req_id = 39877U;
    msg.status = 210U;
    msg.range = 0.5296812476297049;
    msg.info.assign("SYHNOWBVLPYIDOBZTAXIUTMKCPHVVRZWJVDXZVQHHBQLESEPNSCGTQQPRXSOUYLMRKBPPYZTSRUNVDYUZUKFLCABFCHDXWODKZXOBEHMBFNCYQYIEGPNFAIVHBJIADCPNJJMRX");

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
    msg.setTimeStamp(0.16776147367503202);
    msg.setSource(26U);
    msg.setSourceEntity(223U);
    msg.setDestination(28719U);
    msg.setDestinationEntity(155U);
    msg.req_id = 8506U;
    msg.destination.assign("PYSAUYLUBGLPDZBGDXFEFGOFC");
    msg.timeout = 0.793130052140418;
    msg.sms_text.assign("WGGWWMVQDHUCNVWNOIULNAHEZBEGPPEQOAECSUJQCIGYAGJGRDODHMZEZCFYUYXODXPVNZFTUKTLQQYAPLFCYQATPWCJOLPWFVLBFTSRMQJBRMLJYHZMJBHNHYQSUWKEXVDXXIGFGBARXJUVLXFKPN");

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
    msg.setTimeStamp(0.6781334597352524);
    msg.setSource(10110U);
    msg.setSourceEntity(68U);
    msg.setDestination(63282U);
    msg.setDestinationEntity(202U);
    msg.req_id = 45867U;
    msg.destination.assign("EOPEVOZBFZMGEAVIASGRDDMCUOVQUYGMNNYCNVJWQXOEKWNCKALLJVNTXPTFHVPITBMYACGFJKALPYUMOKZYGZRMICXXZ");
    msg.timeout = 0.7364475842824497;
    msg.sms_text.assign("MEQZUKZJCEORXLMXIJOXSELMKKGKCGEHMJHTNBUIWIQQKKDGUPBSBEOGNFKOSWRNSLNRTSDRNTICERNTLYJFSLGVYHRTOWYJVUVMSBAZFHQAFAGFEVFDKKVOAMDIQPDAWXWIUSMFLLYHUAAUXHBGNRYZWTSAJIPZOYWAMGVLDVLBQRQZQPPSIGPTDDNVDJUCXTPNEMQCPIJUOTYIYCWNHXDQECYCFZYFWMPFZUZZHJKHEOOXJBHGXRVP");

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
    msg.setTimeStamp(0.9426462187155943);
    msg.setSource(30064U);
    msg.setSourceEntity(88U);
    msg.setDestination(18408U);
    msg.setDestinationEntity(150U);
    msg.req_id = 52024U;
    msg.destination.assign("ZAXCKBCXPXHIMZNKHNGSSWXRZAISSRCMEBOMTXJZFGIYQOPYRXUTTZYSTYMONATPFWMDAVWQVGTNHIVIOIFFPSZYPUTHZEYVKFCDFFRBEOGAGDLVVEUQGNA");
    msg.timeout = 0.40497425746685034;
    msg.sms_text.assign("ZHDBUTDUXJVOJCBXERGYHCYCREIWVBTCKKDONPEDJVBOGTSPXMJVCGTACA");

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
    msg.setTimeStamp(0.6292299274813378);
    msg.setSource(32145U);
    msg.setSourceEntity(179U);
    msg.setDestination(62776U);
    msg.setDestinationEntity(127U);
    msg.req_id = 55945U;
    msg.status = 174U;
    msg.info.assign("LHFAYDWFEMKSYEBNJQYIBRTTOGRHAXTPVTSDWUEREDZIKABLPWISZRVBYXIVVMJEDUEQDDOLMRKEZZZOXNXRPGCZZSQGXUSJRKYKFVFAIGWGGXTKJCFM");

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
    msg.setTimeStamp(0.5299540949129458);
    msg.setSource(44324U);
    msg.setSourceEntity(228U);
    msg.setDestination(3750U);
    msg.setDestinationEntity(95U);
    msg.req_id = 24232U;
    msg.status = 22U;
    msg.info.assign("QOZZTMCMUHEGYEXCXPRUEPQZEBYQWNSOIJBKDTIOJDMWNCRVYKXSWJADOSKTJYYIJFUUKWXQTTHZUNCSADUMYOBMSAALEJCQWEBSHQLHEGRCBRJKINVRBEGTELYSWTZDGKIZIGLLFMQBGNCSMWVXWQBBGEGYDV");

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
    msg.setTimeStamp(0.32081208760997926);
    msg.setSource(24674U);
    msg.setSourceEntity(211U);
    msg.setDestination(4098U);
    msg.setDestinationEntity(122U);
    msg.req_id = 51698U;
    msg.status = 27U;
    msg.info.assign("TVDGOSXRZXMKFWCWOYEB");

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
    msg.setTimeStamp(0.2337689496482812);
    msg.setSource(34449U);
    msg.setSourceEntity(237U);
    msg.setDestination(24041U);
    msg.setDestinationEntity(101U);
    msg.state = 172U;

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
    msg.setTimeStamp(0.7060298405502003);
    msg.setSource(43220U);
    msg.setSourceEntity(201U);
    msg.setDestination(48697U);
    msg.setDestinationEntity(85U);
    msg.state = 136U;

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
    msg.setTimeStamp(0.7479479666750176);
    msg.setSource(27716U);
    msg.setSourceEntity(112U);
    msg.setDestination(22384U);
    msg.setDestinationEntity(61U);
    msg.state = 140U;

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
    msg.setTimeStamp(0.5777833412124275);
    msg.setSource(7595U);
    msg.setSourceEntity(186U);
    msg.setDestination(15293U);
    msg.setDestinationEntity(196U);
    msg.state = 88U;

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
    msg.setTimeStamp(0.8490733993887362);
    msg.setSource(39785U);
    msg.setSourceEntity(8U);
    msg.setDestination(18620U);
    msg.setDestinationEntity(239U);
    msg.state = 88U;

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
    msg.setTimeStamp(0.48090080395995627);
    msg.setSource(4067U);
    msg.setSourceEntity(180U);
    msg.setDestination(31934U);
    msg.setDestinationEntity(238U);
    msg.state = 39U;

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
    msg.setTimeStamp(0.9792164670149777);
    msg.setSource(37603U);
    msg.setSourceEntity(104U);
    msg.setDestination(8068U);
    msg.setDestinationEntity(188U);
    msg.req_id = 61303U;
    msg.destination.assign("USNJGKUYIWYNWVWSCDGOYFJ");
    msg.timeout = 0.2505546964970329;
    IMC::AcousticSystemsQuery tmp_msg_0;
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
    msg.setTimeStamp(0.9178205227648917);
    msg.setSource(56409U);
    msg.setSourceEntity(71U);
    msg.setDestination(32631U);
    msg.setDestinationEntity(123U);
    msg.req_id = 23712U;
    msg.destination.assign("NJBJMQVBMTLUFXUPAWOYDGHTRITGGNRXJHNIIWMBPSPEMEWTAEELEBGTOZBXJRSHWNUUYOECZTBKSKNXAMJLSCTZDFVZOQZ");
    msg.timeout = 0.5847842888673893;
    IMC::PH tmp_msg_0;
    tmp_msg_0.value = 0.7342600243740227;
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
    msg.setTimeStamp(0.4224773688289085);
    msg.setSource(39798U);
    msg.setSourceEntity(83U);
    msg.setDestination(52306U);
    msg.setDestinationEntity(143U);
    msg.req_id = 59626U;
    msg.destination.assign("TCMMFSVNLHATPWWAATQQKZRQYSDPRTSJUNQUHRQDJCFRQNUUIMEDOFBRYOVMHZLAEIKULGEOBJCKKGDGZSWUVPXWGXUIZQDSJTYFOHNSWZUKPPAYXLTZJSADMXCKKHCEBSOVOAVGLIDLCGQBHFMXNBIIIYWESXQVCXRZWFLWVBPXGYLFNRMBANHDISQOHWXTBYFAF");
    msg.timeout = 0.9333787285979279;
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 23395U;
    tmp_msg_0.custom.assign("GVHRJKBESEINZUGEWRODAZELHDKARJJCYMPIQKYWYYZCSXFNSEQIOPLVAAUMDVCFJDLHAMSCTTIFCOOBXDNURBGTGKNCFUUBCOFIRQKRTRSEYAHQBWVJQMIVILQBJWSARMPFYNLZNDPTYIRQBXZUIZLFMAXCLTKVTGHWZFPHNZHSBDUYXMUVGPPCXQSCHWJEHKKNXOR");
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
    msg.setTimeStamp(0.33706412725071644);
    msg.setSource(35177U);
    msg.setSourceEntity(124U);
    msg.setDestination(24149U);
    msg.setDestinationEntity(26U);
    msg.req_id = 49640U;
    msg.status = 59U;
    msg.info.assign("ACTXKBGEUPMLIWXOXYDFWTVAOCUBURJVDIQFBUMXHJOPYUPYDAHLMGJSYGIPHFZIRZZGHNGJSNTPQVSINFCQUYPKNECGVGFLZORYSSUZMKRXOSZACWBFMUBOATOTSAX");

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
    msg.setTimeStamp(0.7266569502172777);
    msg.setSource(23134U);
    msg.setSourceEntity(15U);
    msg.setDestination(1545U);
    msg.setDestinationEntity(34U);
    msg.req_id = 20292U;
    msg.status = 239U;
    msg.info.assign("YMYRHMHNDHONPSBDUTZGVECKYZPTKIYOXGGIXOWCCGIJKGLTDFAXFUBTBJJLGVXCMRRJNETKZKV");

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
    msg.setTimeStamp(0.2560326044827198);
    msg.setSource(31523U);
    msg.setSourceEntity(58U);
    msg.setDestination(65516U);
    msg.setDestinationEntity(0U);
    msg.req_id = 37231U;
    msg.status = 87U;
    msg.info.assign("AXDZKJQPRAKSXDCEUIGODABIAVYUPSTVWJMFDUEPZEYTRZYPMRCGYJLXWPVWNXUCUJAKZHGBLTLILDDPCQNBTXHOLIKFWNAV");

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
    msg.setTimeStamp(0.18119769814362074);
    msg.setSource(64913U);
    msg.setSourceEntity(28U);
    msg.setDestination(37981U);
    msg.setDestinationEntity(248U);
    msg.name.assign("GGUTHAFBUUYDHRDXPOWSBGLTIVIPUGJNVHDELNFWGGUKUCWXCCH");
    msg.report_time = 0.42114604618985263;
    msg.medium = 86U;
    msg.lat = 0.16027946492490708;
    msg.lon = 0.603930254931499;
    msg.depth = 0.8356603635046361;
    msg.alt = 0.09868392386956559;
    msg.sog = 0.11091319617497819;
    msg.cog = 0.7341010771918617;

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
    msg.setTimeStamp(0.9911617809200457);
    msg.setSource(45274U);
    msg.setSourceEntity(48U);
    msg.setDestination(27207U);
    msg.setDestinationEntity(247U);
    msg.name.assign("YDANBTGGZDGXROLRQHBLQKPPUESUBYWZHTIBCBLSVPPNFMRDJOMFHLNSKEWCHFRZAOLGAQMEGVYMHKSCOIEJAIAARZWSVJDSHILFEGJPGVPDMDKNTYQWYVZWKLIJIHIPRQXLNRNMVOXTVLUTQOWOMAPTYPRXBKCBTUTNYDKCABEARMIKVECJYSXNSZQYUWOIXNEZFTFHNRUXFJMDWUSEOYCQZUODFGUSQDBWGTQFKJJCJHXAHUXIXV");
    msg.report_time = 0.9055079776186241;
    msg.medium = 170U;
    msg.lat = 0.7070355473638943;
    msg.lon = 0.32850010671664076;
    msg.depth = 0.6664384303326916;
    msg.alt = 0.3072917911354677;
    msg.sog = 0.4296082925596323;
    msg.cog = 0.5986854328701439;
    IMC::GpsNavData tmp_msg_0;
    tmp_msg_0.itow = 851475976U;
    tmp_msg_0.lat = 0.2175457080638633;
    tmp_msg_0.lon = 0.5262318587707863;
    tmp_msg_0.height_ell = 0.679731611847011;
    tmp_msg_0.height_sea = 0.004993237315129906;
    tmp_msg_0.hacc = 0.10829450969262688;
    tmp_msg_0.vacc = 0.7651206187691431;
    tmp_msg_0.vel_n = 0.5236363771013748;
    tmp_msg_0.vel_e = 0.4536049778752981;
    tmp_msg_0.vel_d = 0.0982429877406138;
    tmp_msg_0.speed = 0.4118549774533268;
    tmp_msg_0.gspeed = 0.20696850140279122;
    tmp_msg_0.heading = 0.4690764586719317;
    tmp_msg_0.sacc = 0.05967339007657746;
    tmp_msg_0.cacc = 0.9476465020105086;
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.5665257882830135);
    msg.setSource(61075U);
    msg.setSourceEntity(171U);
    msg.setDestination(20792U);
    msg.setDestinationEntity(246U);
    msg.name.assign("ZOAWETBPLENXMUFPYWSMGTNJIYZJCNBSRVCHBDBEUVDHHNHNLVGMDRLSIBUAESZIUFLQKLWDQTUJSAQNZILRXYMDIWRVDPKUYTCCVLOEHJRFIYYUAIOZHETCBKWGTJNPPTUXPQSQRKACLWPSYRKMOAXKACJPMKPPNSREIFAMKGIQJXJXXEFWJHVVHGKATOVUXGFRGDEKVYNBDZHDXQYEFCWTUFLCOMIQZDWZXSOBFMYBGBRFWOTQ");
    msg.report_time = 0.7252338586665708;
    msg.medium = 218U;
    msg.lat = 0.8772336994480905;
    msg.lon = 0.4517360961172213;
    msg.depth = 0.7226370434792654;
    msg.alt = 0.8600779050699947;
    msg.sog = 0.8577780366184633;
    msg.cog = 0.9435665455688838;

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
    msg.setTimeStamp(0.27617632663547587);
    msg.setSource(9534U);
    msg.setSourceEntity(5U);
    msg.setDestination(38712U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.9852157948433083);
    msg.setSource(63430U);
    msg.setSourceEntity(39U);
    msg.setDestination(26323U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.7119899193810871);
    msg.setSource(16328U);
    msg.setSourceEntity(209U);
    msg.setDestination(28031U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.0887173277704969);
    msg.setSource(20100U);
    msg.setSourceEntity(114U);
    msg.setDestination(13538U);
    msg.setDestinationEntity(161U);
    msg.plan_id.assign("CAHKZBVKDUPZUEWYWWHFDNFLFMTVHLUTZGQKIPALSRUUNTZYVQHARPQMVTNZVPQVGFXNBTQSMLCECDSLXHDYEFAILNDWRKPCXRRJLGKDZOJPRMWEKQUSOJDWBLCZXVNXTEOIEMJGWWIDLSYBHAKSVQEQBROJTICABQFPMPJFUNJNBDGIJHNHXIOLXFUCGXOBGMGZBYPORRZKRNATAOIOMQGXCYPCJYAFXKHSTIOSCHV");
    msg.description.assign("UEPRBNDZJKPKAENRMEZAKCJOACWLZGZWGWAAWVMULHVKUCQIPPBYNDQZBDXJJLVKNXBJSHNUFPWAFWYPIJXVWOHMIQVQHCKZYGFCWSSCMQIRCMBUWRDMZCITESOLRNGSJBFTSTDVLRDHXHPOYGUO");
    msg.vnamespace.assign("URGZABEIOYKIUHUCBONSZJZJQIPHPHYOQDANSYNGPWLOVUMXIWLQOKHDSMUVBPUTADWBFIFPQVEVJJNDLAGCXUFYPKWLNCTDILQCEMGFWITWSXEYAAAPMBXZIRSEBRDXSLBOKGLPHRLTLKGCVQFJSRJPUNXKXYCQDGXEZYMBJR");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("POHQMMPTVQFNXSIXUIYYACZEFLCFOSIVXKJQNCFEMCWELZVSDHGWQWRKKIAQAWIFTBVFRPZEXOYFFATEAIROABQATQVYYHXPMDKBGNGLD");
    tmp_msg_0.value.assign("FAONVVLVFZWMKJJGXWUTKRYSGSHESDLXQFQDTHFTNCXAOMPSXZRSJNTBURHISKRWMOEHMJKGUJBIDJPFBMVZGXCGNPRDNIAFUBLVWRSLDVIZVZYQEXUDWVZLYUTMBELPNCJXCKYOJQHKHMBCOCMFALGQXKBNGIPDETTQOONAMQGRYLQIPAZBXHUSDWIJCFCGECGQSEVYWWQPYOUWYAFPSAEPOKV");
    tmp_msg_0.type = 230U;
    tmp_msg_0.access = 48U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("VGTULZEZRQCNBZYBWVZOFDCGOKDYWSTUXPXXXSBZVCYIPFINXITWKKIMNCOVQSMBAUQDFBSJWAQZKMVDYLNTEKRYXZOOVHHOCYLGYBEXLVYQHSBUUSJUQCSCAPWRUDTRYCGDGRVAXFNRRFDZGHNDHRFWVMQONSFTKIUOVWEAIKBIPUPJSKTDJWFCKJAAQNFGNHLJMPAXJIHGTRIYDA");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("LGUZWDGMTLFRPOEHCHPPELCJERIFNDVVNKUINJSSIQMZVHWPXKBRHTECRBSYDCHKJBDYZYZMLVJQMHVBFQAUQGAELZDXVOGLUYNFYSWYIGMTSKJOIAFTIKAJSVNZZEQRFLZBGAQQFPNZBJOIDKIMPCPUMRLGXNLGWEPQMPHAJHUDGLEHRTWAUKCMXCXXXBGNOBNWOJTKA");
    IMC::IdleManeuver tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.duration = 19619U;
    tmp_tmp_msg_1_0.custom.assign("WPTHFJREPQNNQSHEOR");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("ESMNTNQYYIUMQIYGMNGRPSHVAQBSKZOCPMIESVVYGLFOLUVDVQHWBBNCRAIYMJUOOCJWYEJHRMTUWAYBXBCROMHKZZLDAHEOIABPQXDJSMEENMKTEAAHTTLVRLJDZGKQICZGSQAQVNGJB");
    tmp_msg_2.dest_man.assign("FEHVELNALNUNYXRTUJUHBGWLWFNZRSIZYXGAFIYVKZRJNOMAAIUSBTXUOMJTGXWXBEKXDFFWVMVCQTQJKDAURRRXCWFIJSCKUWMISVQQIBPYFJDQNOXHMQEGBTTJMZGHHNIQPYEYPBDWNEDOXELZKESCVYOYSCDWPEQAWBGPGAMOKCKTUHXCOZYVRJJSVPFPZAACBADLPKGIFYMCUQPRONZSFROZTLLRDGLMTDBSEOWCHQVLJSNIKZUVHHDH");
    tmp_msg_2.conditions.assign("APUITKJFSOJRFLQMPAVXZHUAUMYYJUWBSVGTYCRVVRNLXDOPQLZETXCGWLIEXGIHSPYJVVWEJDZODMZNMTZIJSSOFPTGBFXCUOJVHCBZUMDLOJIFBNDQVZLQWKFUKEBBPPQLMEQRBULISNNXAFWECGMPQFCVNWYX");
    IMC::ColoredDissolvedOrganicMatter tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.value = 0.827591265076766;
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
    msg.transitions.push_back(tmp_msg_2);
    IMC::EntityParameter tmp_msg_3;
    tmp_msg_3.name.assign("JCEFOXCIVEEOQKTHZGYVFWSOWIMRPKNBVNTELJJTGCTHVOXUUICDVAVPKRWVUFZDCTYIIWUKSEFWPDZSDJMAMZJQDJBDIUOIBISLMVWVUFRMZDUEUBGG");
    tmp_msg_3.value.assign("JGAHROVFKIGXSXUPIVKGHCCMEWGNJXQSTMOFTBBFGPJZPORCMVNHLTKDEXDKBBQELHUECYUYAJOAUWQBVELWSIOZMFLDSDGFKLAOHCYUXUDTCOATPQDRKZINQTAAWPAIXZDYZWTRMGUYTEUGJY");
    msg.start_actions.push_back(tmp_msg_3);
    IMC::HistoricData tmp_msg_4;
    tmp_msg_4.base_lat = 0.07636275659756542;
    tmp_msg_4.base_lon = 0.17010454844278677;
    tmp_msg_4.base_time = 0.5584612135406078;
    msg.end_actions.push_back(tmp_msg_4);

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
    msg.setTimeStamp(0.3850759520298569);
    msg.setSource(55485U);
    msg.setSourceEntity(78U);
    msg.setDestination(48197U);
    msg.setDestinationEntity(23U);
    msg.plan_id.assign("KNURXGGVNUOWHOWVWVDNQCZQQAOBVMWPJKDSHIWTJIVDYKQJNJGIWIHVXAALUGZGOUPHVFYPBWXUJTYRF");
    msg.description.assign("KEVBESRKJGHJULMIPBUOFIFEYDXCRUOZLYJJHSYJQGIWCUZITVMTXQPXSZNMYGGTQVYIASRDLJFHTXHNKNFOWSZTAIZICDBPPOATHXDLKOPWRCWERCQNCEDYLOVWIGFQSDZSJKQYZMLKRVUKZKCKDBWABJZWLGMVMABPLOPXHIVVULDHANGQEPNUBQYTREQECSYDCMZRFWFBJGXUPUAHRFQHGBPYNUAECHNRWVBOMKNMEIAWLSFFADXJSVOTN");
    msg.vnamespace.assign("XNOMJRDVOWUOKCYHYJSTXTNBSIZYSGQDXRVIFRKVJVDMHLCVNNXLZWPUKWQBARJMUGOOBYQHGRVDNM");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("QOJNGWIAYDGJYGVNXHDMUCQOYF");
    tmp_msg_0.value.assign("KDVHCCNDUTTEQKGYCSRDRMXBTFHMOJZTCIRB");
    tmp_msg_0.type = 67U;
    tmp_msg_0.access = 226U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("CMCKFMAJVFZQAYBMOLKHXEOQUMHVRKRWSCZWWDVFERTTYACGGEZWESBEBVKRSJDFSDUBTJIZDJVHPCTJWEOHRHIIXAUAYMA");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("DEJNJSGCHKGRCIHCQHICTGWQMFEZZLYBKDCYYEMQKZQUOMLIQTLVFDLBTYZXOQUXKTCAXKWWEASXXEYOGWJRILXJOFYDRRWWRAZUHKMIWPEVNGTGKXOJRMMNSDBVUDXTSCLAFVJHELAFLGONWAJDOQUPVOJFDBPTPQNVJBSUSOJDZIPVRGMYFWHSBCVTUHXYZAMZPORLEPLTFYQVRBKHPIUMGHHN");
    IMC::FollowTrajectory tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.timeout = 56676U;
    tmp_tmp_msg_1_0.lat = 0.09994074908933204;
    tmp_tmp_msg_1_0.lon = 0.6325215581739565;
    tmp_tmp_msg_1_0.z = 0.21897426335537784;
    tmp_tmp_msg_1_0.z_units = 167U;
    tmp_tmp_msg_1_0.speed = 0.4720048251833372;
    tmp_tmp_msg_1_0.speed_units = 251U;
    IMC::TrajectoryPoint tmp_tmp_tmp_msg_1_0_0;
    tmp_tmp_tmp_msg_1_0_0.x = 0.02378281458093856;
    tmp_tmp_tmp_msg_1_0_0.y = 0.11449685938305998;
    tmp_tmp_tmp_msg_1_0_0.z = 0.15961198503408003;
    tmp_tmp_tmp_msg_1_0_0.t = 0.8624645602066723;
    tmp_tmp_msg_1_0.points.push_back(tmp_tmp_tmp_msg_1_0_0);
    tmp_tmp_msg_1_0.custom.assign("YTFTZHUTDTCOLJQFQWMVRBONGGEFSIPRFLNFBIJGXYZUTWTXQOYHABOPLIWCCNPPGVKUJCTCPBGWUKZDPCIDHMAXXSVYNLRJZYBUOQXLIDESRFKNZHEXMLWBCJQPMKNSDRQZSEJPYSLOHJGSQVTEKWRQJYUFJOFMUWFVXXZBICPGYVLTAZLVRDAIGBVWFEMUAQBDEAIUENKKPHNOCOQIZX");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::EntityState tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.state = 89U;
    tmp_tmp_msg_1_1.flags = 242U;
    tmp_tmp_msg_1_1.description.assign("MSRJXHNMMMICJMTTEGTBYERNEBQWXLSBXNVQOIJXULGQHDRWOGSHDSHKXEJRCUIZJHPALZYPOVPRUAKWTFDWURFNPIQOFKCQGPLGUCMLAPEBDVHHDYPCVWRJPPZODANYNYRMUIJWESIEBSAMTZULDCLQYJTFFVCDVNBXGMJBYKUNBOWHIVEKRXTBAAFTWZKGGFSCKQWXJSFTEQLW");
    tmp_msg_1.end_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("IWTYXWHJAGUEQYAXZUZEDINGSUBJ");
    tmp_msg_2.dest_man.assign("CANTONRLFFPWKVWGGYXSQHTZZSLKDOHHMACIHEKFLZENSERYDILFWFATAOMQHCXQUCBZZPSXMYARMAQOUFXBMDGDIFHBBJMZBUNNZEOSUPERWTESBXVSUKMHVEYCJWLGFZJUFWACWQGXQSKVKJPEKUJRRWVEDHDNPWTESXIWLYCKRJTFBXNOILTKCAQBKDIOMNLVQVHPSYIQUJAPGYDINTTPIXBGCYTXJVPODRHVYPJVCODYLGRGZOG");
    tmp_msg_2.conditions.assign("DXCMVEFAVNCVOFMUVOAAOBYQXICHSSIPPAZBMSVEYYEFOHCBOVNSBSKVWLJEPLTAKLHKNXKWSPPJZRXOQQHPTYDCZNPJWZULWHZGBCBMLMBXOGFGDELFKVAKIHUITRBQDLGIZRKMSUJJLQZNYBFGTPUQARYKOZAJGXIJUCODRJSRTRDHKXVHQRXUWZLOYMGPJGYSIEFZLIRMBUNEIUYIHTHNDEYEAGDSDXMWPRJTQNNWNK");
    IMC::MessagePartControl tmp_tmp_msg_2_0;
    tmp_tmp_msg_2_0.uid = 200U;
    tmp_tmp_msg_2_0.op = 154U;
    tmp_tmp_msg_2_0.frag_ids.assign("BVJSNYDROFAWAJQLAJERIOKVLFUWANMZLZMAKIAWWYRMXGB");
    tmp_msg_2.actions.push_back(tmp_tmp_msg_2_0);
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
    msg.setTimeStamp(0.6538526581463402);
    msg.setSource(7387U);
    msg.setSourceEntity(27U);
    msg.setDestination(53552U);
    msg.setDestinationEntity(0U);
    msg.plan_id.assign("WDUYFUFOJZTSATEIAZLBZNNDVSVXEVWQGSEVKOKMTSZLBPCRKTSYEEYHVQOIRSMBVQJMCFAMWYJZPRGVTXMC");
    msg.description.assign("RVLGJIQEATSPDCIMNVFEHJDJYHK");
    msg.vnamespace.assign("CKPBTIVSXQKFBQAAMHFTXMRRLL");
    msg.start_man_id.assign("QXWNWUQEIONQKLSPRSSSJXULMPVOVSSUVJHYXPJRORETQPKKQPQLNEDNJKIZDJRLAWWPIXNBQGHACUOLFSSDNDXWGC");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("SDAITXNOJYGMFRYQTIRKUUEVYBSXEGGYHVPPMFLPWABXLHMAHOZBVTEQCXXNSFMUGNOVHKYNKHUXTAPPIVJTWIOJBWYVRDZWNVWLPDAMUIGIVECMZPBEGGRKFJZCAULRCCQDQEIXAWDWELHXPFGWTVPZJEMOKZKFNRPMLNQUBSQQFEHBCWAHFMOKDUYQZIAIOSIKN");
    tmp_msg_0.dest_man.assign("ZFCZZYMXLTKBLPTKRXLGZDGNAFXNHHHRUBXBQJQJDVVQIRFECBJXVJPIPNWMVEUWPJMBUHGUIAAQVNWJWOFCJUKIGYQJNKKBSZUTTTWFHMYRAEGPQRLWCORPERAXMIVYHHOKMOIYKMQDEA");
    tmp_msg_0.conditions.assign("XRSGODBKBKLEVVYMERLIHTDYFYWLJRFXMXEVTSQWZZFMGPDHNPFFPHXSUFWJYRXDFKDECNWDWACBQSEMINRKILIJSLKYFCGKLSNSGOAIBNAGTCABAOHRXAHOIXVUDOQCDTWWXJVOIMHACPNPUGHPBWJQ");
    IMC::VehicleMedium tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.medium = 252U;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
    msg.transitions.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.009311472367060647);
    msg.setSource(25660U);
    msg.setSourceEntity(134U);
    msg.setDestination(48300U);
    msg.setDestinationEntity(23U);
    msg.maneuver_id.assign("EWEHBNFQYARIUEIRHMBCUABUUASQPMANARQWZOCOPJUXQUCJPTLAFDDHRWGKTHJXSDLSHMRXNKUEYOKJEDIDJZNQNYXMVOBGENHEWQSTUDZIBZOALGVPIDFTTNKHQATYNKPJITVQMROLOUGZOTBDVLBQIYSHGBXWLSCYHFRWCGVLGBOKFYXYLAXCVSFYNGJPQZHIBPFLJXRPZPGKOPVMMENLJZWZDWVMXKTFVSEMCXITWEZAGDCRJFSMCSF");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 16402U;
    tmp_msg_0.flags = 177U;
    tmp_msg_0.lat = 0.583939322231438;
    tmp_msg_0.lon = 0.4113250833667659;
    tmp_msg_0.start_z = 0.7586952389166646;
    tmp_msg_0.start_z_units = 195U;
    tmp_msg_0.end_z = 0.2988944253995518;
    tmp_msg_0.end_z_units = 235U;
    tmp_msg_0.radius = 0.6778978179321741;
    tmp_msg_0.speed = 0.05460792539451553;
    tmp_msg_0.speed_units = 215U;
    tmp_msg_0.custom.assign("ZEXUGGJGLNTVWYCOEHGXYC");
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
    msg.setTimeStamp(0.033244630061748714);
    msg.setSource(3128U);
    msg.setSourceEntity(138U);
    msg.setDestination(14733U);
    msg.setDestinationEntity(40U);
    msg.maneuver_id.assign("UKYNYZJFGNVDKWGWWGFBI");
    IMC::Sample tmp_msg_0;
    tmp_msg_0.timeout = 47699U;
    tmp_msg_0.lat = 0.04015638331763016;
    tmp_msg_0.lon = 0.5090042943613918;
    tmp_msg_0.z = 0.33053183478336134;
    tmp_msg_0.z_units = 193U;
    tmp_msg_0.speed = 0.7875953296662812;
    tmp_msg_0.speed_units = 53U;
    tmp_msg_0.syringe0 = 110U;
    tmp_msg_0.syringe1 = 115U;
    tmp_msg_0.syringe2 = 27U;
    tmp_msg_0.custom.assign("RAUGQFWCCMNPZWKLDJSDCICHUQOYBAVKSCOKBHTCXMTLJTWHTTMEPXRTYIEMUGFZHFXKJMREALYZAIMSOESJWXUXMDGOEGCIROGVFDSEUWWYRDKLABQWLYZFTKFPXYQBVOMKWAPGBGVUIQUXKHNSZBHHYSLKOAXJXSRMQFNPQUNJUDECNDLAZCFZLOSEDJYARPQNBNPVTR");
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
    msg.setTimeStamp(0.7783947790948692);
    msg.setSource(57039U);
    msg.setSourceEntity(88U);
    msg.setDestination(33497U);
    msg.setDestinationEntity(186U);
    msg.maneuver_id.assign("FSLDNOVIDKSXLDSHBRLZZGYIOWUCBWITGJAWQONZOUQGEACPMPWHNUMIACYUWNLBEZWPTPCEFUGSXKRRFBDV");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 18308U;
    tmp_msg_0.flags = 44U;
    tmp_msg_0.lat = 0.1988756819629377;
    tmp_msg_0.lon = 0.3858487448839818;
    tmp_msg_0.start_z = 0.6359712783271642;
    tmp_msg_0.start_z_units = 47U;
    tmp_msg_0.end_z = 0.3218862968727718;
    tmp_msg_0.end_z_units = 114U;
    tmp_msg_0.radius = 0.07839390465766627;
    tmp_msg_0.speed = 0.7771789512983083;
    tmp_msg_0.speed_units = 111U;
    tmp_msg_0.custom.assign("MEPNRQNFWYAYSYZKEAXUAYXXXCJDDETEHROKEFHUFEULIIAVRAYGEBZAYNOQCDLHSMXKRHKXLTXMMZRKOPRGTVSOSJU");
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
    msg.setTimeStamp(0.32848025444001605);
    msg.setSource(25786U);
    msg.setSourceEntity(155U);
    msg.setDestination(33113U);
    msg.setDestinationEntity(83U);
    msg.source_man.assign("HJVBVUJQZXUREHIOUYWDIIKVAUJAOFKEEPIPHHTON");
    msg.dest_man.assign("VNRGIRLYZMPGJQPCONTKHJZRDVKRPTUAPXAELEMPYBQMTKVRSDMFNSIAOCWKVJBIHLJUAJSQFURKXGAVUIFWDLQUFCOSAQCXCKXWXKSXMCTWPFKENLZLVFZOATWDYLGGEFGWECFURPERNJZBCEHHNZZOJGTXZIHAYDVYVTNDJQLGHJELYKMZIFFPHBQQTBZWTJVINOIUKWESOMCHEQQXA");
    msg.conditions.assign("VWCVABMKXJSLYKDLHTBLUBLFRRASCBWAUPYXODXMSVTARGWCFPMXVXYUDWINXAHYDLQUDNXDWQK");

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
    msg.setTimeStamp(0.03790131140643194);
    msg.setSource(11475U);
    msg.setSourceEntity(109U);
    msg.setDestination(12673U);
    msg.setDestinationEntity(16U);
    msg.source_man.assign("RXFYUFKXQRKCSXZBBGCUYPAMMARJEWBYKNQULBYOLUQAEWQEXJEUDGFHWCLNWQCKPVLTOEQONDFRHVOGGVATGJVBOIWDTZCCVBSZJXDURBNSIWSIKSIKNONDZGZIRSOYVKYUHWASWHFDNHJQCZJEPGTPDMG");
    msg.dest_man.assign("PGKYBIZENITTLAZDUKKIRGQSVPXONRLDXFBDAVHJUJFCXIBUIAISNNPSJFOJUCPZRHSPNWXTXUKGXELECYGJHNMQXUENGFBHUTXBCBYGWZZREPXWSWCDZWHHILHFCKRFHQNSSRGWRVZOAJAMDQOBMFLICMVMETYTSDVPKQHEYOYSVJZWCVDWOLOKQKMW");
    msg.conditions.assign("VEPZNRVTZTPMOVJPWMHRMASTAGESWWBAFWCBOBZYMVYFQCZXVUMTRNQTQBIHAJKTLSUK");
    IMC::TelemetryMsg tmp_msg_0;
    tmp_msg_0.type = 39U;
    tmp_msg_0.req_id = 1980654778U;
    tmp_msg_0.ttl = 23554U;
    tmp_msg_0.code = 201U;
    tmp_msg_0.destination.assign("VWINJWXHOAIFSYIVTFXPZCTDCFTQLAKSTFLBLRAADIHMCLJJRKTXBBEDPVZKANBXYDXIJJBQHIOQGUQEAZ");
    tmp_msg_0.source.assign("TLDRIPSOEBPGDYFSXAAGMHICPWVZWNQOXXLJYUVKPJBVUBAAAGBVFRTKZFOQDIWNHCCSYYNWLUXQYHZXVFNALZDWQKWSGITHTRKCLXFGIWCZDNHEGECUSMQSVDLRJIMVZVMO");
    tmp_msg_0.acknowledge = 24U;
    tmp_msg_0.status = 94U;
    const signed char tmp_tmp_msg_0_0[] = {-43, 25, 24, -92, -86, -122, -107, 20, 101, -13, -50, 25, 100, -54, 2, -88, -30, -17, 27, -52, 67, 79, -116, -102, 81, 16, 53, 77, 107, 34, 51, -51, -11, -40, 6, 126, 20, -79, 23, -43, 109, -113, -54, -128, -63, -90, 11, -123, -125, -2, 70, -25, -114, 31, 79, 1, -15, 58, -76, -123, -115, -91, 108, -70, 101, -19, 66, -64, -123, 86, -37, 31, -73, -3, -57, -73, 55, 125, -79, -36, -113, 66, -26, 117, -117, 52, 101, -1, 84, -106, -93, -105, 118, -87, 15, -86, -94, 120, -97, -44, -31, -34, 42, -41, 0, -107, -14, -120, -89, 24, 69, 72, -95, -95, -73, -31, 80, 10, 92, 37, -85, -89, -119, -27, 39, 65, -61, -121, -75, 22};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.9677081578747327);
    msg.setSource(44313U);
    msg.setSourceEntity(166U);
    msg.setDestination(57514U);
    msg.setDestinationEntity(180U);
    msg.source_man.assign("UXGZEADLMAFXSRXQOKWRSCMIKQNLNKGCITFKMZMISJUKBRGHHBCCYCWOWLJLXQVMRDZWHEOUBYSEGKIHJUMG");
    msg.dest_man.assign("IJQBKSWDZJWLOAYLFVVGWVLGQBYCTWCZLTSQPCLXETPXMPJYUIDYWWYIIFFNPHWFBUOMELUMJUYASESKIKWHXJZCAABXKVGHDOFQHOEPJRANUKZPHDYFFNOLWJGIPKTQERNVHNZKEOGIMUDCERXXABZROVGDOV");
    msg.conditions.assign("WUDHLHQDEZBJIHRFLYCPYXABSBZVTVRPRIZVOFQAWCHLVMKRGIQVNBLCUUFCBKFDVLXYXTNHFSMBTIYECGFEOHMECSMJJKPZSKMAPWYUXWOETEKODJVUNKJPMXQTHUGXCDPRDZIUOFWSRBWOQCALLRNMYFJSE");

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
    msg.setTimeStamp(0.2543641829765254);
    msg.setSource(31413U);
    msg.setSourceEntity(64U);
    msg.setDestination(56759U);
    msg.setDestinationEntity(155U);
    msg.command = 121U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("OCFGADVSADTQDOSELPNMKFPIFWMTWYLFUTQGRXZCQKRSWJQERZAXHYPPAPLLVTWLUZZEGFIRTHYSIZTIILBMICWDAOKLOLUUNBHCNLDIHJWBZGAVNYXGODSUKWXEDFYVROWTBKWFGQUVYQPUDBZMKHGSOAMMVFBPMN");
    tmp_msg_0.description.assign("RNPUTZZYSAKWYGGSHMBEGGLLSBRQVMGSAPDOJADUBIIDJZVHCYNBYWJWPYNTRHWGDMOOVIILQJGPZIYAICGBXPRJZCEQDUWIAXVSWVSTCCAKOUBTYXPUQKRCRKUPJL");
    tmp_msg_0.vnamespace.assign("SWDPGEAOFDDOPUBSOZQAOBBWYIUTMQEAWJUCLUDWWUCQOMXHGMVBHKYHPXRODYIKSOBXRPJPZCSJBQPEKNAGWXVLIGJGLCTXPXCIRGMNUOUAAHSUHRCXCHGADSNWFGYHJWYVVPSNZEZLIEMQRJCNUZLXYFRVLFTTZICAJKLBLTDFRSEZIDZVXBYQVFFYKANTN");
    tmp_msg_0.start_man_id.assign("SSHAQKDYGJPHQTESGNFGWPAHXLZXFVDWONDQSMCNTYUFTONCJCOCVIBDJJMFMYYSITFRPRRSZLAPYQSKIHEGURWFIUKEZMZZTWMXVNZZETNPACKGFYIUPVLHKFFKONBIABKLBJVLOCWGLMOVPNDEGAMXTKTEBMXOBLRWRHSCGRUXJEAMRYZBEHNXUEPRNLWUQYOQEODDTXIZGSGYAJCTWXHUDJDSDIQVPRKLVVWCQ");
    IMC::QueryTypedEntityParameters tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 48U;
    tmp_tmp_msg_0_0.request_id = 1688669858U;
    tmp_tmp_msg_0_0.entity_name.assign("HABTORZYLVYVYRIQPFIZIGOSWGWRBSKFVDOEPFAWGEJOJLLVCZBOOAJKCVJSNFGOQQXETJCAPJDUHMKXFOXTDCNZIKIXPXGJBBHWNNMAJPRTSIZUPNZIHREUCQLWNUUHWUSCOJFOSZFYATS");
    IMC::TypedEntityParameter tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.name.assign("JZYOHDNXCGBKSUYENFPLVJDWWKYGQEMPGSTMVBUBDQGQQJKSZDIQHIXCWCQLHJMBRNNHCUEYIZDIRTATFOKBKUMGJISNORIBAWGO");
    tmp_tmp_tmp_msg_0_0_0.type = 228U;
    tmp_tmp_tmp_msg_0_0_0.default_value.assign("XMKYMFZMXXNIJDTVMRVGISBSMGHVGHTQBWMXEZUIHRGZYJPARKASLAO");
    tmp_tmp_tmp_msg_0_0_0.units.assign("ETBYACBLUTINCXTANPWYUTUXGAYHAUXKZWTYXFGVVAIDDPJWBMRVSKPCXFYQVDRYQYVIAORCYCMKQIXZXGQGBUIMHNRBOSBSVZGLKUPVTHJRQORNAOLOTDEWMQXCZDKEIPEZLFFPUVLGDYDFUSHWRCIZYBNK");
    tmp_tmp_tmp_msg_0_0_0.description.assign("AMCIKHXEZWGGWBNKRYRTFDFYWGOWTDUVABBCKXKHSBMTBGKDZMVSXXTTZNOXJPPFNBNFLSAIEDUEAOCFNICZIMNUVHPQNULVFHBQLMMYJDVRVXPJTFJLJJBWHXDVVXMQWPHZGCZPQESSGJXVYOLOWERAOHHKUCEQQGTZBJEEEDALEQGR");
    tmp_tmp_tmp_msg_0_0_0.values_list.assign("NHIPYIENGOOZVFTAWMVUFUYPMDZRLBCCQACYNOEUVXRPNRSAU");
    tmp_tmp_tmp_msg_0_0_0.min_value = 0.37151619340221453;
    tmp_tmp_tmp_msg_0_0_0.max_value = 0.6505121330269863;
    tmp_tmp_tmp_msg_0_0_0.list_min_size = 58U;
    tmp_tmp_tmp_msg_0_0_0.list_max_size = 205U;
    tmp_tmp_tmp_msg_0_0_0.visibility = 250U;
    tmp_tmp_tmp_msg_0_0_0.scope = 154U;
    tmp_tmp_msg_0_0.parameters.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_0);
    IMC::HistoricEvent tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.text.assign("LFRQTKOOLKBUHNGIMOTRUQUXCJLBLIKEVDPIZCRXCSDEHYODEBUVOZFEBNYOBOKYJWRTRETAJMRTCWNWCUVMNRMFQALVHVJWWSZGIVAQNSGSWOGDMAPXCMYNKPKIPCSXLAIMHWVXJYDFTRPWZNHVRJUICQUFTBQJCZQIOGGVBXFBAQTAPAHCZYGZUSFDXHYEZBDWSTLPSYGZXLONLSXEPFYEWRDVBDXIKGQHKFNAAKTZUKDUSIPJMHGJNYME");
    tmp_tmp_msg_0_1.type = 44U;
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
    msg.setTimeStamp(0.09861418125495569);
    msg.setSource(17989U);
    msg.setSourceEntity(45U);
    msg.setDestination(50814U);
    msg.setDestinationEntity(76U);
    msg.command = 243U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RMVKXPDMZYXSHLOEMESFKNHQQQLGESUYAJRNUGBVNNJVIVYXMXWXXORATQNN");
    tmp_msg_0.description.assign("AKVJVRZPMZZRJAUPRHWGEJQBSITZMIZEBNZPQPESHQFWNXLFQOBUL");
    tmp_msg_0.vnamespace.assign("ENKVZJDZAERMEQLWDZNQYZLXKSDMHENUCMDRDHFPVYGSTUYIVUKIIKIFOAGTTLUPPCJWJXHECLRIJFRUFPLWMXXCTUDMNNYQZBTTK");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("FDTLGEAXBPKUHJJICRLHFEKSBDCNDRMTNYKIELNOISZZDOLJIGWTMOCFGQHXYKMRHNYCBPYVOKBPDXHZESYPXOBCRNHTHERJSAJEUVVCLISWRWHLTAPWYQNLARIUJQGXXRQQUSPEAFVUFGYKUFPZLSALWVADJTFMKMTWNUKJUXCYQSPMZXIGBQVDIQWDOFWMBKOYDEGUEHNTXBAPZODLOXTZ");
    tmp_tmp_msg_0_0.value.assign("WCSOJWFSDGUSHKVXBZURAADYLQOYZMUTALJENXIBROSIVURESDLXUYZMCZQJNA");
    tmp_tmp_msg_0_0.type = 82U;
    tmp_tmp_msg_0_0.access = 82U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("WZIOIGPYJCGDXRZENKNLCOVCRVTLBQBCRFPWAQHRXGLLBLGUNDCVARGMAJRWU");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("OQMSWXJFIGFEHUHRRQWOJCEQIHZCMWGIKTZISBAXSMOSFLTDRAXPG");
    IMC::PopUp tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 56329U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.6788406144951595;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.11235696890627023;
    tmp_tmp_tmp_msg_0_1_0.z = 0.8299603520674974;
    tmp_tmp_tmp_msg_0_1_0.z_units = 142U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.3679496584072318;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 191U;
    tmp_tmp_tmp_msg_0_1_0.duration = 51065U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.3392670448400743;
    tmp_tmp_tmp_msg_0_1_0.flags = 85U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("USDTQMFRWSOIIWVOBHWRDDCOHMYALKZLBPFZQYDXYLMBMXWZUBSAZPPWOHVZQGVVLSDCKFQTYUWVQQFNFJAGHMMOIUDUYUWBDYFTVUFONYLUJZDVTISEDNEOTKFGPEYNKKJKCPMTSJJPUHAREKITKJGQEFRXCINLUECCLSNTJECLMOXARKGXOEHIBAJREBRXZGJMQACTFZXSXQXHWHNVK");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::QueryEntityParameters tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.name.assign("DDWLMTTOTTONLAFPCSOQKPOEREUZJIVCEUDDUULXXHMSVSPCVSWRYESQGGCIEEBIWBFRYDXQPMJNTWQUIJBMNSNIBLUYUWVZXATEOTLCEZLHIRTZNQGCPYVKSKZLGXGJYJGHVWHRHEA");
    tmp_tmp_tmp_msg_0_1_1.visibility.assign("COVZSDZPEJXHDSVANQLFGHMBVYNAFBTQLPCMKHFZCODJWQHEOTVEUZJROGQBTJGBMRJAEVUOPZIFQCGPLKKRZDTKUHKEAQYDBVEENHGWXDUGSSDYYMLXWTXUJC");
    tmp_tmp_tmp_msg_0_1_1.scope.assign("EDXDAYONWWNBRYYOORHLRKGPMGBQWJYSVBOCQPCKYGKVIPGJGU");
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::GpioState tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.name.assign("ZAXOOLSBGVBPFXSMTYNPGVOCUPKKTZSDAAPKRVYXFIGUHUCNIIFKDBTGJIPNGIOQCFCUWQNCZSMFDAZHEYVPSSAQMGFMOMAGDZGMKJTLFZVVHDFHXEROVRHTPQOKTKDXENUSIPZMCWLWUKLHBXYJVBUUZMAWCPOEHWLYICQJBZWEMRXTJRTHYJNSBNGHQXBMNCREDIDSJKABXRYXVQOW");
    tmp_tmp_tmp_msg_0_1_2.value = 132U;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("VWAWLEBTENUWNUQIDGIXTOLVBTWMKSHZVWFYHZP");
    tmp_tmp_msg_0_2.dest_man.assign("RIFFLQNHKDJFXCKNWSZSIYMLERHWSZSGGHGAGUCEALAECZNDOZJU");
    tmp_tmp_msg_0_2.conditions.assign("QUPEBEIFOYCXXNHDGTGWHZCZPUZEHPXJGOUOOAMSNVNJAADMPRSDHNFNBXMACBVITZRCWPYWZGTFWLATCLKFCUOSJYWDOHYHCSVF");
    IMC::UamTxFrame tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.seq = 62632U;
    tmp_tmp_tmp_msg_0_2_0.sys_dst.assign("YAWULMCXNEXVEOKTKTKRLGHQAICYNTVGZHCHQMUEDGVFXIUTIEXDQFGWUUERIREAKZZOHCMSEIIPGWRBOURHSTHSXJJZGTAZVVJQXSWBFPYMSEVODWBQFBRHPVUMTTDEZAXWJBNAQQCUKGOFDNQNCNIYCRPLADGNZBNOHLMLCPSFYJQNPSXZLYFP");
    tmp_tmp_tmp_msg_0_2_0.flags = 111U;
    const signed char tmp_tmp_tmp_tmp_msg_0_2_0_0[] = {14, 126, -108, 58, -66, 39, -125, 37, 8, -18, 54, -35, 34, 4, 6, 73, -13, 109, 66, -33, -59, -128, 90, 10, -7, 19, -42, -46, -92, -27, 28, 11, 101, -107, -21, -79, -50, 40, 61, 1, -33, -55, -61, -75, -125, 28, 103, -6, 119, -54, 42, -55, 2, -38, -42, -3, 113, -65, -48, 62, -39, 90, -117, 16, -53, 70, 2, -24, 95, -46, 76, -8, -99, -88, -96, 4, 18, 29, 77, 93, -58, -67, -107, -60, 101, -109, 1, -31, -101, 76, 33, -69, 88, 112, 126, 94, 32, -23, 118, -120, 57, -8, -70, 17, -26, 96, 115, -69, 121, -48, -18, -106, -33, 26, 37, -20, 49, -17, 26, -49, 26, -22, -19, 109, 69, -52, 49, -49, -107, 8, 118, 35};
    tmp_tmp_tmp_msg_0_2_0.data.assign(tmp_tmp_tmp_tmp_msg_0_2_0_0, tmp_tmp_tmp_tmp_msg_0_2_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_2_0_0));
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::ExtendedRSSI tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.value = 0.9617798292759917;
    tmp_tmp_msg_0_3.units = 78U;
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
    msg.setTimeStamp(0.5075483128538579);
    msg.setSource(55642U);
    msg.setSourceEntity(227U);
    msg.setDestination(43176U);
    msg.setDestinationEntity(131U);
    msg.command = 252U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LLRNEPKVXNQKRVQOUQDBGLSZWVTDXOMOLAJJAGSJDATMOUGSKHAEJIFBZYRVPCRRZFDTUGWNQCN");
    tmp_msg_0.description.assign("SNJQGMTXLPIHKRGTKVLCEYORDD");
    tmp_msg_0.vnamespace.assign("ZECHKTULVUWQXRPNIDDFWLTINYRHLEKJZAGQYMWFWETPKSIXZVZMABPCTRECQGFGAHNWYLWQUSGFABDNGOCBMMKHOIATJLESBIICMOHZOBJPOUEUPDEOUZLBVHHNUBPYOANLXTCSRFUBEFVOSVGKBCQOQFKVMYDFYYVSWNXRRVSQQFJTADXUJCNMZDZXWHFUG");
    tmp_msg_0.start_man_id.assign("ENXHMOEDFAAJSNOIXKHYUQIRFGIPDBJKGVEYCWTULBBJPKKTKLUJ");
    IMC::UsblModem tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("EXXIUQLUMMEHNDOWYJASIWHRSGNEOPTNMQQSBZAWYVJCOEAUMBKYJBYVPFDHIVSYJOMBWBWCSATGMUGLQHCXLHCZRUSNXOITLHOLIZRQIYAVEVPCGWRYTUZWFHLDZZSVCLRBZFCDYXUQIQEHEORROB");
    tmp_tmp_msg_0_0.lat = 0.19806224689104435;
    tmp_tmp_msg_0_0.lon = 0.18335712937707316;
    tmp_tmp_msg_0_0.z = 0.0836221903258324;
    tmp_tmp_msg_0_0.z_units = 156U;
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
    msg.setTimeStamp(0.02006120908312703);
    msg.setSource(47254U);
    msg.setSourceEntity(54U);
    msg.setDestination(41489U);
    msg.setDestinationEntity(164U);
    msg.state = 12U;
    msg.plan_id.assign("DEMZOYAZUALHEFRLENRYBCJZPIKQDBCFWVWPHBGCBDVZFHFBUCESAKFOEFGUISQUQMCRXJUXKETMHRURQSJYMUYAZIOAAZTXIJKZOVSNWCRHGUXHSKSKLPWJTIWOEXLENQWDLAXTZMNGEEPQNXDGNAD");
    msg.comm_level = 173U;

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
    msg.setTimeStamp(0.8782718779113562);
    msg.setSource(31881U);
    msg.setSourceEntity(179U);
    msg.setDestination(31139U);
    msg.setDestinationEntity(177U);
    msg.state = 145U;
    msg.plan_id.assign("BCOQEVZVMLCPDCZHRKEJNRTEMQLVLAYYWDKQKMYJADUSOXBTBKHUCKOOTSSPHVQOIYLWJXPIKLUBFAVQAYXXNZNKIKZQFHCODNXNNEMWMHIUDGJWSZBFCCAVMRWUTTJPFRGNGXDJYHMFZTMQKAZGWJSVOYSRLORUWEBDLIIFNXAIMEFBQRTYNTGYFC");
    msg.comm_level = 250U;

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
    msg.setTimeStamp(0.7274273602405616);
    msg.setSource(11197U);
    msg.setSourceEntity(112U);
    msg.setDestination(11508U);
    msg.setDestinationEntity(173U);
    msg.state = 179U;
    msg.plan_id.assign("YPJAJUNXKMTXVMGEEXIFRAAIRZUSSZGZHUGQJQYEDKFRDBMHURLFWLNCFUDCNIKQBWBASTRFCKDXPPXPGZBPHSBBVWITWVSQOLMLZBUFYFNNPDSXMIEWIEOKCOISOKKAHAIDDOKVPNEQYQLMVYFZGHQZYJRSOJRGTGNHQBJCCASRHTCYJFJQWFKTWTOLMELPDZNCVGXBDY");
    msg.comm_level = 73U;

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
    msg.setTimeStamp(0.6092968595180063);
    msg.setSource(12480U);
    msg.setSourceEntity(196U);
    msg.setDestination(39003U);
    msg.setDestinationEntity(150U);
    msg.type = 139U;
    msg.op = 225U;
    msg.request_id = 31160U;
    msg.plan_id.assign("RPKOFBRUFAXSBXAVHNGSKWRXAGNMZYOQUIDQSVEESZJJMNPAJFVXMDYHOFRWFOIFJZIMDDOGUZPSLYNJMGWORNRPQDKQRZYLHTJWITHXECHZKHIJRVZLESLWYXLVKLONQDJHTPX");
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 103U;
    tmp_msg_0.error_count = 41U;
    tmp_msg_0.error_ents.assign("ZROLQQRVYHBZYSDQUFNPABHHCTDHTTPDXWRWDUXTWGISZGEOQDBQINFABHNVPTZTUUEKKWMTADFEYGUGHRWASQOOSAFYLIUQUTBSIVPZZIFBHRGXGRYNLLCUVIMMJPJCAGLIPZFPHETCNBJNXSKIGDEEUSJZTCMJBDLFQKMNPJYMKNXNWQGMLJFVZAPCRSYIVVHYBWKLEJONMUXFSYKEGKCMOVEQVY");
    tmp_msg_0.maneuver_type = 19034U;
    tmp_msg_0.maneuver_stime = 0.10702292280248282;
    tmp_msg_0.maneuver_eta = 1108U;
    tmp_msg_0.control_loops = 4158634166U;
    tmp_msg_0.flags = 187U;
    tmp_msg_0.last_error.assign("OAENSCNALMXDTKXBBYFGROZJSAQTWVSWOALTICDMASMOKRHJ");
    tmp_msg_0.last_error_time = 0.37613533334131855;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XYKGOEIUQFUYOULYZMBZPMMRFSKVMJILBLGRZBNSKBJQKVXVBPOMDNWYLFGQFFSNVBRERXDTKWWQCZALTGHGUSZFOQGTCLRWJFUAIWLACXGCBXHMLIWOMCZYJOIQAXPV");

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
    msg.setTimeStamp(0.2088732345651051);
    msg.setSource(25345U);
    msg.setSourceEntity(119U);
    msg.setDestination(16216U);
    msg.setDestinationEntity(94U);
    msg.type = 91U;
    msg.op = 9U;
    msg.request_id = 954U;
    msg.plan_id.assign("YCDOHZAHXRBGYAGOBFVFHPYVIBARUWCWZQYDKMMEPEXNRDFHEAQSYPTOYAIMYNKFYDTXFDBULLUPOUGLSYZSDXPUSIIKTTZTQJVWWQTUNDCVJKMEPFCMRAEDZAWKLVGIORCWRGIEOLBMKWPVAZDJQIUFBTZLEXBGAVJCPVKOBEEMCTRHVSNKRJBGFJJSLGXIKNQFOOZUXIHRKTCRWFPNNGXLND");
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 32822U;
    tmp_msg_0.sys.assign("ZLFIBYBJMKGWJNMYYELTODWMHWFFNIMDYZRHAYCMCJNKVLUTXQDZSGCPJLEIJMOAXKXIYKQRUORZERHZLBUPOZVODIJCDNHJFILNBAFABFKOJESRBNEAZMVOHABLPRJNMYCFTQDQYXGPPEDXUDDTQXUIIVGUHSSAFWWWJGTEMPKTAUBALSCTHVBCIKWXOXTHQKHPEUNSEVWKRSSRCGVFUZLLVMXTBVPKZQOGGPDOX");
    tmp_msg_0.value = 0.5998356425267993;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TTFZQQFFIQTEEFCAOWEDBQXUYXFTUVIQOSYGEMNFVOZBODPURCXXZGWBAGNPMZAGJWSMAEPGHRZKLTTXJBCBVUNKIAGPRHYFNPRMDQ");

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
    msg.setTimeStamp(0.2469908891327478);
    msg.setSource(26245U);
    msg.setSourceEntity(47U);
    msg.setDestination(36644U);
    msg.setDestinationEntity(210U);
    msg.type = 77U;
    msg.op = 47U;
    msg.request_id = 13492U;
    msg.plan_id.assign("ZTMKVTGEOVQAKPAGGJUDSQEQBUTMAEFKZGYCBDLFIYBPODJKGVBFMNCXAVNMMTDTCNFZKFLAEFUJLANETQK");
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 22609U;
    tmp_msg_0.off_x = 0.9647389307454276;
    tmp_msg_0.off_y = 0.07164269729610706;
    tmp_msg_0.off_z = 0.9222080409701728;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VVLVLNABESOWWQJQKGTIASZEPDDSWDXNZHBITTIQYAQUSPCDHIRJAMFYEUOXQSXFGYGVFOWFKCRQHBVMXTHHLQJSSCAHRFUSLBCYGYKUZROKUFBMINHHCMEIVDNQLPIBYWPSTANFYBWWQUGWPXKUFRZCFYPUEVCXCXONJGJMRRJBDLDBG");

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
    msg.setTimeStamp(0.9601558337275151);
    msg.setSource(51370U);
    msg.setSourceEntity(157U);
    msg.setDestination(25797U);
    msg.setDestinationEntity(72U);
    msg.plan_count = 25516U;
    msg.plan_size = 4174754729U;
    msg.change_time = 0.9791499277978477;
    msg.change_sid = 26151U;
    msg.change_sname.assign("ETUOYDNXJTEBSYMIAFYNWMAXULBBWINYFPBSBMHKDDCSKNPRHYVXNKIZWLVTDDGZYGTAUQBLRBEHWNVRXELRPQJOKJZDKKFYBXYNEUVWIAXNQSNZYCWPKMARLRMZCLVRXW");
    const signed char tmp_msg_0[] = {-58, 2, -20, 23, -103, 85, 120, -106, -71, -72, 114, 32, 80};
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
    msg.setTimeStamp(0.7537246317326155);
    msg.setSource(32189U);
    msg.setSourceEntity(214U);
    msg.setDestination(27585U);
    msg.setDestinationEntity(92U);
    msg.plan_count = 43703U;
    msg.plan_size = 2936442740U;
    msg.change_time = 0.1851729504678825;
    msg.change_sid = 42306U;
    msg.change_sname.assign("QTIQEEFVDCOUBGLXRMHQMAYUTJCUOVWQZPVNNRLKKEJJOUDJTZSLSSMULRNRQOTIYLTJMULBBYGRKPTBVNXMXEWYIZNVDBEWKCPHHOJZZULDQYSOFYZRVHFXG");
    const signed char tmp_msg_0[] = {17, -94, -62, 8, 30, 0, -40, 16, 126, 86, -54, 72, -108, -23, -15, -89, -115, -21, 71, 126, 21, 29, 96, -68, 68, -66, 67, -80, -103, 112, 4, -24, -8, 26, 62, -110, 13, -127, -30, -66, -61, -81, -23, -10, -115, 93, 34, -115, -24, 10, 29, -63, -104, -97, 117, -107, 14, 61, -28, -80, 103, 105, -114, 37, 37, -54, -85, -51, 28, -19, -14, -91, 23, -56, -75, 111, 43, 74, -56, 7, 117, -6, 97, -98, 44, -84, 63, 90, -41, -93, -24, 27, 7, -17, -70, -30, -54, -9, 90, 70, 111, 12, 3, 3, 103, 70, 103, -30, -71, 123, 9, 105, 47, -121, -115, 99, -33, 35, 96, -8, 62, 1, -101, -8, 41, 98, 29, 103, 101, -22, -128, 63, -101, -1, -125, -22, 63, -118, 2, 41, 65, 124, 86, 62, 37, -8, 92, -106, -41, -70, -57, 84, 26, 66, 98, 81, 107, 77, 105, 74, 121, -5, 24, -65, 75, 60, -100, 60, 49, -57, -65, -11, -111, 96, -94, -121, -35, -98, 62, -55, -45, -47, -82, -69, -116, 19, -23, 104, 78, -37, 126, 70, -91, 124, 39, 10, 122, -88, 63, -121, -99, -41, 92, -75, 122, -121, -111, 24, -110, -86, 43, 35, 100, -10, -39, -3};
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
    msg.setTimeStamp(0.3402027100171847);
    msg.setSource(62763U);
    msg.setSourceEntity(248U);
    msg.setDestination(43036U);
    msg.setDestinationEntity(130U);
    msg.plan_count = 40945U;
    msg.plan_size = 4268194014U;
    msg.change_time = 0.7435446054304516;
    msg.change_sid = 20076U;
    msg.change_sname.assign("TTBNKJYJZTBRWAUSVNCOXFNXHKLEZEPTXTHJKXAAXNBLYAFLZGFESWRTRCVGRUSPBBILMUEBNGFWLZGIFYDCEXYSUIIRAPWLRKHRCYDJNVQGZSFYMVBIVGAQMXNFCDCFLZUIWMOXFKPQJVZOHOOKMTBORXCDHTKODJWYIQIMGYFRHOLDSQMAQYPEJZVHGAYDXLCNVSGSUSLDKCEOPHMMJANUCNDEMETUVQBPKRAUJZ");
    const signed char tmp_msg_0[] = {-68, 63, -35, 40, 113, 44, -50, 123, 89, 71, 117, 34, -122, 95, 76, 3, -75, 119, 32, -11, -6, -110, 56, -125, -100, -98, 93, -43, -31, -92, 98, -11, -58, -22, -11, 69, 126, -82, -103, 102, 53, -120, -65, -124, -128, -78, -83, 80, -108, 90, -93, -100, -7, 57, -117, -76, 49, -20, 72, -114, -48, 41, -29, 9, -113, -84, 95, -55, -119, 95, 108, -12, 109, -4, -100, -24, -124, -21, 71, 72, -49, 40, 23, -118, -121, 93, 122, -73, -119, -58, 17, -99, -105, 22, 70, 92, 78, 87, 74, 83, 83, -12, 90, -59, 0, -40, -8, 2, 97, -10, -22, -87, 102, -48, 69, 47, -33, 126, 83, -10, -61, -61, 121, -69, -44, -101, -7, -75, -7, -99, 13, -124, -1, -85, -118, -96, 17, -19, -99, -115, 110, 112, 123, -46, 75, 24, 17, 39, -60, 26, -13, 102, -54, -8, 17, 17, -94, -128, 89, 44, -96, 125, 25, 6, 1, 12, 73, -61, 13, -13, 111, 79, 47, 103, 22, -64, 88, -95, -17, -105, -106, 53, 119, -1, 88, 117, 33, -8, -91, -59, -8, -22, -91, 94, -78, -32, 102, -49, -73, 55, 28, 15, 58, -120, 57, 85, -110, 34, -110, -70, 101, -94, -19, 85, -74, -104};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("WIJGGUCGBYOWLCVQTIAYRSOEVNEEGNLTRURLCABBMKXKGMUPVOBMDGROUDKLOXBSJDXKQJJDQTYDTIATNJFICLZRPKDGSQJSNBDHVZDWTZEIMHZVVQUNIAPHXJEUUKEMKKXLVPFMLAMFFWNQENRPWZOUOMYQYPSMWFI");
    tmp_msg_1.plan_size = 55670U;
    tmp_msg_1.change_time = 0.29590638169859895;
    tmp_msg_1.change_sid = 859U;
    tmp_msg_1.change_sname.assign("YEEBOHSJJPURTIPLPOJKWEMUR");
    const signed char tmp_tmp_msg_1_0[] = {-100, 71, 110, -46, -101, 42, 113, -28, 50, -96, 69, -98, -1, -8, -4, 0, -94, 5, 32, 77, -127, -58, -124, 72, -101, -105, 90, 26, 123, -49, 121, -43, 28, 64, 61, 110, -29, 79, 65, -106, -89, -25, 34, 2, -90, -55, -10, 51, 82, 107, 105, 19, -64, -100, -9, 4, 109, 84, -36, -6, -96, 21, -119};
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
    msg.setTimeStamp(0.82684080398165);
    msg.setSource(39582U);
    msg.setSourceEntity(237U);
    msg.setDestination(50708U);
    msg.setDestinationEntity(188U);
    msg.plan_id.assign("YNFOUHYLGTXOKESDADHZDSRTYIWQWSSFNYCCBUNBILZTGRXKVXRKJUUGZYQUDHZEYAIZTJOXDKNJETJAUFNLZCENDOWSIHTUANMOASRKRGVFZDIRBUDZCPAIMKILQKDZQSGKSJJ");
    msg.plan_size = 28110U;
    msg.change_time = 0.8102323840653022;
    msg.change_sid = 58531U;
    msg.change_sname.assign("AHHCLOYBNUKSICGBKUEHROBNVNKDQAVVVWPPXFHVUQMMCYGOTPLZJXONEUUXWFJKQKQPYUHDSIFLFJXKSIUGTZOWIEQYTWSZLONCPNXRFUAGCWGAILQJHNOCVWNVEOTMJCZDDXMGLRLJSLFBMBIYZBIRQJHSEXSJHNSEJLAKGXFKAMLAUWMWOPTRTYVR");
    const signed char tmp_msg_0[] = {-44, -48, 102, 105, -92, 115, -86, -54, 122, -83, -37, 107, 21, 105, -13, 28, 51, -122, 31, -88, 73, 99, -99, -21, -79, -72, -88, -48, -49, -60, -120, 126, -55, 96, 94, 67, -31, 117, 63, 91, -105, -26, -52, 41, -28, -37, -111, -59, -99, 2, 36, 28, 120, 79, -59, 121, 70, -11, -58, -24, 93, 83, -48, -94, -23, 111, -84, -34, 77, 117, -127, -67, 94, 14, -30, -9, 58, 112, 106, -122, 93, -107, -37, -108, -36, 50, -114, 86, 85, 6, 37, 7, 58, -124, 65, 13, -38, 116, -77, -75, -11, 31, 53, 123, -34, 64, -90, 103, -81, 71, 69, 84, -44, -67, 114, 115, -10, -70, -117, -39, 19, -59, -127, 11, -35, -90, 45, 79, -118, -40, -82, -83, 50, 126, 50, -125, -49, -97, 126, -112, -24, -127, 42, 119, -34, 25, 21, -80, -91, 34, 46, 58, -10, 2, 46, 35, 48, -103, -106, -5, 41, -4};
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
    msg.setTimeStamp(0.2769892628621703);
    msg.setSource(62472U);
    msg.setSourceEntity(135U);
    msg.setDestination(46424U);
    msg.setDestinationEntity(171U);
    msg.plan_id.assign("YZKARFAEURAFHETMBATSVYQQGMZSPUFTWONYGAJMVFAOEESGVZGEYWVKCBJKBDCOLVVUOXKRTPBZIIFXSOSKLHIEJPCKWSXCIFGDQNOYWFDBIMHDPZBHHGMBNRSNIHTASUGQCQTNXORWLREPCUBUXZNKBMWYIUOFRMQKIJPIDVDSRNMZCHIVVAPLGPWXLDJPCXPZUJ");
    msg.plan_size = 30253U;
    msg.change_time = 0.585414744410742;
    msg.change_sid = 27515U;
    msg.change_sname.assign("HFFVDYFSTYXWQOLGCYFPNUZGJMJNRCVWJICSHZRXRUXSPUKLXGVPEYZOJHHQKRKBREMFJDHPAYAAGHMWVUOYUBGDGUZWLMREJXHKTRZZTNCZPPIQBNFTSPITEAEXCVZXDQUDLBCBDDULWOPOHNQEKFOSKVNFGYHTQCJACWYSEGRLXJBIDTXKSDVTOVYMOSAMQUALRNIQKEBNMVVSNISXELWMLORAJQLKGOKGUNCAIFEHPBBWZYF");
    const signed char tmp_msg_0[] = {-90, -43, 13, -3, 31, -77, 86, -111, -25, 109, -88, 22, 1, 103, 7, 117, 46, 6, 2, 118, -25, -48, 66, -4, 32, -29, 101, -10, 31, -125, -75, -25, -80, -104, -17, -24, 8, 87, -83, 79, -3, 24, -39, 41, -98, 23, 42, 97, -69, -67, 57, 9, -90, -37, 92, 67, 58, 28, 50, -110, -118, 114, -24, -19, 70, 44, -36, -54, 25, -63, 98, -97, -4, 79, -113, -56, 77, -57, -2, 80, -23, 49, -41, -119, -61, 77, -24, -28, 112, -4, -27, 35, 71, -122, 0, 106, 54, -32, -4, 46, -1, -111, 107, -88, 25, 9, 26, -3, 61, 65, -52, 106, 15, -110, -39, 12, 35, -65, 35, -60, -86, -121, -83, -103, 41, -14, 110, 77, 22, 69, 106, -49, 72, 9, -43, -58, 101, -46, 36, 7, -124, -71};
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
    msg.setTimeStamp(0.16929550735547227);
    msg.setSource(49064U);
    msg.setSourceEntity(42U);
    msg.setDestination(37549U);
    msg.setDestinationEntity(94U);
    msg.plan_id.assign("VFBGWPUHUMRFPABNNVMPYDWLSAKHPRSEMPDMEKCQVFAPOGTTUEITSRHIOFSLZS");
    msg.plan_size = 21943U;
    msg.change_time = 0.9091634219254279;
    msg.change_sid = 34866U;
    msg.change_sname.assign("JNGUSPLAVTXTOQIHGKLVLKOGXOAOHMEBZBUSBYMXRVJFDJRGLQPMWKWAONPFMMZCNPJJETHCGYDCSCSQNIJFIEFFODBQITURYUZCLNTQZDYOZHINDQZYHVPSNPXSGEQKHWPTJTIRBDUJAEFXVMWADIGORUHMHTYZECUKQCWCWZYRBIANLAOJHMYWTXXBLTSDYGKKIVKGNZXRXGKL");
    const signed char tmp_msg_0[] = {-55, 4, 60, -54, -67, -84, -110, -14, -104, 101, -112, -59, -75, -105, -6, -51, -117, -15, -32, -14, 64, -1, -102, 5, -17, -71, 42, -120, -116, 60, -95, -103, 22, -91, 80, -39, 7, -86, -118, -128, -99, 42, -41, -89, -5, -89, -9, 96, -87, -69, -76, -103, 83, 54, -17, 107, 53, 52, 44, 72, 126, 102, 74, -43, -6, -74, 108, -27, -100, -79, -74, -67, -5, 36, -109, -56, 30, -20, -97, -99, -48, -118, 32, -28, 105, 58, -47, -72, -111, 38, -9, 12, 23, 95, 49, 4, 11, -65, -10, -75, 95, -52, -122, -48, 51, -69, 86, 76, -84, 62, -33, -90, -87, 49, -63, -13, 33, -95, 63, 7, -77, -81, 114, 121, 19, 96, 98, 92, 34, 109, -27, 113, -58, -85, -69, -44, 89, -68, 53, 112, 70, -14, -52, 19, 83, 43, 30, 24, 98, -37, 66, 9, -124, 27, -34, -103, -124, 21, 21, -86, 43, -103, -30, 62, -94, 123, -40, -27, 116, 111, 15, 92, -90, 114, 22, -103, 21, 36, 2, -69, -76, 115, -42, -8, 98, 86, -128, 93, 91, -57, -106, -115, -68, 62, -94, -21, -121, -34, -65, -44, -113, -13, -11, -51, 2, -54, 106, -26, 54, 119, -12, 69, -86, -59, 122, -81, 102, 8, 102, 1, -102, 83};
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
    msg.setTimeStamp(0.6793506878571265);
    msg.setSource(47743U);
    msg.setSourceEntity(7U);
    msg.setDestination(18878U);
    msg.setDestinationEntity(197U);
    msg.type = 12U;
    msg.op = 193U;
    msg.request_id = 56229U;
    msg.plan_id.assign("EXLWVQHHJZMFIYNSUOAIEHRGXRGSPIEKCUZNISKFBUQLZXNCHVGZIVIMLSXDABSKQCRYORFAVYVDHSTTKZGBNISYTAIUBFMUOEXKAHAMDMZZWFEJEWGKLJBLENBRXCGJPMYWURPWKROTNQRXVDYDTGWWPQMRTOUJCHQPNCHBMGEYLAJPKNZPIWUCQJWMTUVXXDOFLOGATFROIESTEBCLPFQJKSLJMDHYDWVPAVBDVFCZATQCSJZ");
    msg.flags = 49954U;
    IMC::ReportControl tmp_msg_0;
    tmp_msg_0.op = 115U;
    tmp_msg_0.comm_interface = 44U;
    tmp_msg_0.period = 1407U;
    tmp_msg_0.sys_dst.assign("ZFNVJYLRNKEAFRBVLWCKJTNWKIDAUCGNLUMSCBIHAKRYZAKVPSCIAPDXVMCFSUBTFRNSJVJQEEKMOXIGTQOXIHBPOYQJVOLWSWHETPWCQTMHXQJVIBORMGXMDZLWXIJREHHOUURDOLHPKQOLKKGFCQTLXNAZANDWDHYSCCHUTAWYEXUZBINGSRTFGWMQMSJZQGGSIYVFZUNKEPNEX");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SHKQEIJPNDPILXCQI");

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
    msg.setTimeStamp(0.10850858879666392);
    msg.setSource(64660U);
    msg.setSourceEntity(194U);
    msg.setDestination(39720U);
    msg.setDestinationEntity(14U);
    msg.type = 251U;
    msg.op = 249U;
    msg.request_id = 65292U;
    msg.plan_id.assign("ZBVDGVLYZLSKGUXPAQGFYAWWOCPLHVOOBMWNIFMPWRTTQWCUJOIMICZIQUYFGZRTWQVNXMBKTMNHCHXJJXRZZPOJDONOGLVVVIHLFLNJDZRXFVHRUAUDAZBFRZFAIJPISCKILDMDXBTEEUOEIKWYNNJKBEBUXECPCJKIMMTSXWHKFVRYTHTKSGHEXOJSAYUNDERYEL");
    msg.flags = 61673U;
    IMC::AcousticMessage tmp_msg_0;
    IMC::TCPRequest tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.req_id = 37044U;
    tmp_tmp_msg_0_0.destination.assign("IMRHNOBLVSLZDVWRWTAUJHKEAIRXGQBKBFWOELPSQIKFYXDHVIPTHUYSXWNAIXLRRATHGDCDKZBPUYGLFUSZJNKVMZKPMFWUMTCGFPZPJEEXXNTIMHYZOTRX");
    tmp_tmp_msg_0_0.timeout = 0.5232819951005909;
    IMC::QueryTypedEntityParameters tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.op = 159U;
    tmp_tmp_tmp_msg_0_0_0.request_id = 240589640U;
    tmp_tmp_tmp_msg_0_0_0.entity_name.assign("PHDOFANIKWCKBVRHORWJWLOYMQSBSXWUOZJMMVCSNAGWFVNMJEAPNCPVHEGJW");
    IMC::TypedEntityParameter tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.name.assign("EKWIOCUPNKMEBIQCLXWTZAS");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.type = 72U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.default_value.assign("GJBTWZMLMXVCEIMYXXAFATOXZQDNXUKCOEPRYYNAWSMXCTHJFTLDONDEKGYPVPBVJFNMHKXUBRESTCITQSBNPDGQHBZOGSIZYWIKJESUKMDZTL");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.units.assign("GWVILRULEICYEQXHEKBRRJJVBNLRKFOMHBQJUQKESYHDV");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.description.assign("MGALRTCFXWCEPFELWPZXUJZADBUZBFTTWDVHFCBKCMMPLDZUJRJXAOODPOWFOKJSRIVTSGRQHZLZAXIJWIIDYHIFIBESHAXZNVMWFUDYXZEGOA");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.values_list.assign("IJOTMMRANXVTSKLTQXVJWNPAJWHRKWFTXXLUPGUWHTLGAF");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.min_value = 0.9924736841202921;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.max_value = 0.318964539021654;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.list_min_size = 166U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.list_max_size = 107U;
    IMC::ValuesIf tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.param.assign("TVKOHZIXPHMWRCXNUHVKFZSOADEDNZOLGKQMRCLHOPDMGWYPRTPSNXYTVDMMLOXUZFMFIHHHCRNCBJRGEYYBWQIXXWOEQGCAWYDCDXBIEEPIPZUPXNEVSBAKNVSDSUZVIFGUQWFJOUBBWTUYTHYLHFNFELZS");
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.value.assign("BZGMZYKIINYOTQTEWLUJRSVAKGHOBXUNIRDNFMHFWVCQPDUIBKUYLECWTKDRAPJQSQLCCLSIXXEOJKJKWWSYIXOTRSRQAYJFGHXALHMQLVLTTGPJNQAMXBSTCOATLGZSNOUEFVNMGDZFMWRZJYSGSJPYPLUBCTQWVYLMEERCDEKGHZAEWXFNYAMQVRIEBSHVFDVMZJIXHCXP");
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0.values_list.assign("TFQQBPTPGCGVDFRBDVLSJLZZVSZJRRYUXKLWCOHQEVSDFSNERURQAFVVBYCJNPICBHZZLPKUTKIGWPJQTEASBHPJHTWNKFHJVJBDWHVRCYIONUKEHRXLQYFVYHYXSZIGUBYXEQMRCDOXTADKWBFRYAMWUUZZKPONQKBPKZANOLGBO");
    tmp_tmp_tmp_tmp_msg_0_0_0_0.values_if_list.push_back(tmp_tmp_tmp_tmp_tmp_msg_0_0_0_0_0);
    tmp_tmp_tmp_tmp_msg_0_0_0_0.visibility = 18U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.scope = 234U;
    tmp_tmp_tmp_msg_0_0_0.parameters.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_msg_0_0.msg_data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GCYPYQXIIDLSJMWABUFZSPTTGIDORFZZAUDFUFGVPELQAUSBRCLVYHEHCQEDCNBOFFJRSIXMCGBDKSZ");

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
    msg.setTimeStamp(0.7750549455241471);
    msg.setSource(45132U);
    msg.setSourceEntity(92U);
    msg.setDestination(63956U);
    msg.setDestinationEntity(123U);
    msg.type = 73U;
    msg.op = 1U;
    msg.request_id = 32676U;
    msg.plan_id.assign("UNBCDDURJVPPZOHMOKKJOOOAWRKAOGBWNTLTIOYEBSPRNXYGLRTALMHERQCQWMZJIBIMTZQASIMWRDKAPLZEUWUNLSTBBHPLDAQMZJXGLGCE");
    msg.flags = 6025U;
    IMC::AirSaturation tmp_msg_0;
    tmp_msg_0.value = 0.6458167117238622;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VATCJLJRIBQWZEYVLTOHRN");

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
    msg.setTimeStamp(0.49212457371013485);
    msg.setSource(31485U);
    msg.setSourceEntity(156U);
    msg.setDestination(22793U);
    msg.setDestinationEntity(53U);
    msg.state = 240U;
    msg.plan_id.assign("HZDQKRZVVIBGTVHYXPUCGXRPWKDUENUXPARYIHNTQHMZDIRVWWSKAZCGOIFYCQRCBAKAEZTFGDAMTSMIUJGDFOMIWUYRNLQPEADJSFVWKOQEKTEJCYXIRJXEQ");
    msg.plan_eta = 739974911;
    msg.plan_progress = 0.34480482259885625;
    msg.man_id.assign("CTPRCQJDIKJTLROBNWKUEFMEDKLHFKYFPHIFCUJQRRXLAMBLNSSXPCVMWIRBUGUOSNJRQFAXYLSWOYYXTGYZPSWDAMIKSZDUJFVXNRLHVLINEVOWOHQGVOGKECABPFITCSIPDLBXZEAJHULSCYICJPJZGVQZMPGTKZDVAFQQOIEMEYXJVYDBSWGENTTHWPEZGRKNYRMABQJHHNDEWKQRMTUYOXUCWQZ");
    msg.man_type = 49693U;
    msg.man_eta = -291906252;
    msg.last_outcome = 83U;

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
    msg.setTimeStamp(0.3408635713553857);
    msg.setSource(18360U);
    msg.setSourceEntity(2U);
    msg.setDestination(39380U);
    msg.setDestinationEntity(216U);
    msg.state = 199U;
    msg.plan_id.assign("RTRIDHQKNWXJVRUMSPBBWQMFWDPWIEDZBYVAVKDAJDIAUVLLKVNOPSPLTCFYNRQAZCKHBASSHGJRDYDXJCPJSEZUQPAEBUPFYLICWGKUEDOEGGIOAYBZAAOTNCRGEBBNILZHWTPIPXFZCVGHUKFTKLGJZGOYHHVLVFGNDMJLCZFXECXEIZTEDKTWIRFRQJOOYYXRSQMJKGNNKMJQQXYMB");
    msg.plan_eta = 338032770;
    msg.plan_progress = 0.9752831491408981;
    msg.man_id.assign("OAARMZBDQSCQQEMZDGBZKFGZVCMCMEMTOXKNGSCLVBPZRGDRIKLAIYLSMBZMIESJTNTOCDWVOJNQZIXLCANIFHUR");
    msg.man_type = 12189U;
    msg.man_eta = 849274228;
    msg.last_outcome = 13U;

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
    msg.setTimeStamp(0.8928855697562132);
    msg.setSource(47599U);
    msg.setSourceEntity(220U);
    msg.setDestination(43709U);
    msg.setDestinationEntity(91U);
    msg.state = 128U;
    msg.plan_id.assign("YIJCWELHXCVEJYHGJBBJTFUURZXKXMPZPDGFEWCCHLMSNLOANTITAGKXIXYGU");
    msg.plan_eta = -200918963;
    msg.plan_progress = 0.2188059649600228;
    msg.man_id.assign("NGCQHIWGXVEYWHNKRZOXFLNNEUTZLXWHRANIAQQKJKHEMGNUBUWLAZSHBYFPWUZOD");
    msg.man_type = 46624U;
    msg.man_eta = 2125675162;
    msg.last_outcome = 84U;

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
    msg.setTimeStamp(0.9415067293338845);
    msg.setSource(44447U);
    msg.setSourceEntity(111U);
    msg.setDestination(58305U);
    msg.setDestinationEntity(228U);
    msg.name.assign("TTZMVXWLLSAVKWQLCJBORXSPCXGPKBGYNZNPVCOUBSARHDMENHAUQWMLOWSMLUTMKUDLBPAGZWODJPZTKFRFLGMHCUGGEJJMCBKHENQIPCSJOAZRHURTYJPA");
    msg.value.assign("ZKJUTFMCVZERLLUKLFCCLQSFVWPTXUUIMWOAYPRJIEEOMJDMYOAYYKDDEPSXTLRVCOOHOABTKQSHIAEJXSMPNHGGIRXZXHGNYAKIXSDOCQKSTNWJITGPIBWOBKBZWFZPRSRQMNJIRGWDEDDDCNJYWXLTZA");
    msg.type = 18U;
    msg.access = 173U;

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
    msg.setTimeStamp(0.4738069789754644);
    msg.setSource(19259U);
    msg.setSourceEntity(131U);
    msg.setDestination(46240U);
    msg.setDestinationEntity(208U);
    msg.name.assign("TJTUWDPSRERNUBWEPZZFZQIXXFWYJYJKGGUFQBGEJDJFGWURZIRZQFNTOYPIOIYXPQUDYSLUBHVFJNPMMCWNERPKNATMYHCQHCBGIKAYVOXNSCSHLNOEPURRXAWEPXEUVIKMGWVCVERBDBAIROKDZMBHLVWNFGBSTJTILDTSVMFLZSUXNFEKHVIHXLMIOFAZJCOMDMLOGZQGADKXCEUKTJMQNCYVQACDWTY");
    msg.value.assign("XJHVMKTQFHTMLBZABDPLRKXHUEJSVIIFAHMCRFANYVKCQEQSORFFXGNRZTRQKXHPBIKJDMQJDPHBPVWIBTQGIUCTLNACDNWLEQYZIOFMARCIRZVYPTTSYDBILJSMOWCGXTEWXPVLCGAXNCRDBHFHYOOGUOEKPOUMCXUDTFSOJGZZP");
    msg.type = 186U;
    msg.access = 25U;

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
    msg.setTimeStamp(0.1418943115216682);
    msg.setSource(24824U);
    msg.setSourceEntity(170U);
    msg.setDestination(38492U);
    msg.setDestinationEntity(67U);
    msg.name.assign("UYTUDUAISMXQQHNJTWBROKTMFQMJJBZNIBCGYUSRFLUVZZWAMXRDVYKEBEQUIVCUAHAJMEJDWGKCDOGJQWRPCNDZUNVOOKFILTWXAXZVEYKOTPEVHFRLXFNNJKEFISBPGLOCYWBSOUPXXZVLYWVADGZJLYBYTHOPFSVEPISWXQDILFSCQMZRBQGERJNFHPYQ");
    msg.value.assign("KTVTZIYIBIVCUUIDBAOWKPKDLCZGDMAPNAXTBZRKZLCFOXPANPAVNQTWCOUKGUZPEFOGUQMAJBWSCNDVJIYJKEERMUWGDZXOFDDRLRRTTQSMXRTPFSCBWPBZWLBRGEWQCYCYGQILVHFKVFZVJHTKHSAUWQFKQKLUWHIPHTGLJOXTECJSHEUBSPSCADAXEE");
    msg.type = 199U;
    msg.access = 93U;

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
    msg.setTimeStamp(0.4078213148331632);
    msg.setSource(50143U);
    msg.setSourceEntity(146U);
    msg.setDestination(2925U);
    msg.setDestinationEntity(124U);
    msg.cmd = 182U;
    msg.op = 222U;
    msg.plan_id.assign("TTGWCJKCIXYJMDRDDYEKORMHGINANAVJXGZCHMZVEPONQCBLSHWKUEXNINOHKBDTZWKSTZTZVRELZURZVRNRDEHFRRVSFTYEAAJXXKKLNBUWFIRKWXTGWZSAVFBHJOTYBIPPWMYPOTTOLMYUGDHXNSMYSMLXGFADVCYLPBGPVENJXDJFBAIURBQSBQQSCUJVQOIEIHAWQJAXDLKFQBELCQOYFJUMHHUQZCZFAMYUGVISMG");
    msg.params.assign("SAMUZLASWBDWABYDXOHTJDPSFZYTJXFJVQPEMXLXIRETIMSUBOUDWSWWYRMSSLMTLKUQVINOCDKMNBQIKPUTGRDPRFBAYYDCTEQEGPLZZGFFUHQLLDCNJGAVZZOLBHHXERNVYAHNNTUAWNKVOWXBRYJJQPZC");

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
    msg.setTimeStamp(0.345955504458091);
    msg.setSource(24222U);
    msg.setSourceEntity(78U);
    msg.setDestination(1567U);
    msg.setDestinationEntity(10U);
    msg.cmd = 82U;
    msg.op = 209U;
    msg.plan_id.assign("CUXHHUFUYANEFDAEZJIGLZUSLSZLMAWUMQCNSTCVXZRQHPHYGVICFEMPVJJCKVOOYDEELVONKUQZEKMUNCDRBBLPIAAZMIFQJEI");
    msg.params.assign("MJCDUHDLGYBIXLDUXAPGEJSSJFOSZEXEDYCEHWAUPZEYQYQTVJYLAUNTDFEBXQNOXMVCIOLATHWFEFTFGOXMROIABZKRWPGBPFDCVPGAMPYNRQKBLSKIWFTFLIQYGCMODSPDKKPJNZMNURDIATZXQAHPTRCSNEIHHZQTRMRWHSKAWBBZLBDY");

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
    msg.setTimeStamp(0.8843376974123077);
    msg.setSource(18878U);
    msg.setSourceEntity(64U);
    msg.setDestination(1246U);
    msg.setDestinationEntity(185U);
    msg.cmd = 123U;
    msg.op = 16U;
    msg.plan_id.assign("PWVXCWRAISVXQMFYOLGFKUSLHARQXFNZBFUMZDPHDSWHBHGMNOGQNTOGQCVKSNDLTAAUJEYVNVBVXZPXGEQPBIUYXPGHFDNJRWHYPZRGDOYSJIARLVRYBBLTCZJHKPDCNURTKDPDVCKQKTSJYDNJDWESAIZBKRNOWEW");
    msg.params.assign("CFPVBSCAZIIBQYIFBMQQBSTGHPPTQUWOCJVBHAEGSDVKARGOWHMUASMWXVKXDKCNTJNFFKFSCEZLNGJPWUSYALFZXTHEZGKDMTHZOTQOFWYRIMNLVKQPMOWEMGNAXYIYKTJEBARRDXIEDGOCBNGLVYVNPOXLFBDYWXOMSEHIUHUZJIDYDJOKBLDJRMYJQXPSQQMBZR");

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
    msg.setTimeStamp(0.7096084914879098);
    msg.setSource(14886U);
    msg.setSourceEntity(92U);
    msg.setDestination(9928U);
    msg.setDestinationEntity(44U);
    msg.group_name.assign("FBDCXQNZCDJOYIJS");
    msg.op = 38U;
    msg.lat = 0.06417524553925458;
    msg.lon = 0.5686327685363074;
    msg.height = 0.21489786251580756;
    msg.x = 0.6573301851827017;
    msg.y = 0.7442170977736098;
    msg.z = 0.17818750526510696;
    msg.phi = 0.7954975418697344;
    msg.theta = 0.0744123087173626;
    msg.psi = 0.9275088141744254;
    msg.vx = 0.7550482369913096;
    msg.vy = 0.4676561292401541;
    msg.vz = 0.6418920113400077;
    msg.p = 0.17763293737573882;
    msg.q = 0.34493159724078715;
    msg.r = 0.7762488839472553;
    msg.svx = 0.8455121435801528;
    msg.svy = 0.1284592103976453;
    msg.svz = 0.38675484514590075;

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
    msg.setTimeStamp(0.41512809509387727);
    msg.setSource(57931U);
    msg.setSourceEntity(169U);
    msg.setDestination(22497U);
    msg.setDestinationEntity(157U);
    msg.group_name.assign("PIBQNMEWJTDRKOTCGUVQHBNYZKPUNXRDQSUGQIRRZROUKMTACYZNVOYCMUDHXLHADJDYWWSICGKUQGWSWJIIBCNVCOAYFNXJZOGTFMVDEINPCSSGBFLLPEOJQWUDPESTPFZZMKFVHDRFUFRAYEJ");
    msg.op = 52U;
    msg.lat = 0.7160555059605561;
    msg.lon = 0.9653851599569123;
    msg.height = 0.8380434143714741;
    msg.x = 0.5691023097181498;
    msg.y = 0.4448856212571799;
    msg.z = 0.08184945296982282;
    msg.phi = 0.17834286184496395;
    msg.theta = 0.11274799099192567;
    msg.psi = 0.2454236567098642;
    msg.vx = 0.8115832010897269;
    msg.vy = 0.26176681995379136;
    msg.vz = 0.00951358305363792;
    msg.p = 0.5095913267705805;
    msg.q = 0.2621003601140919;
    msg.r = 0.18492413708004962;
    msg.svx = 0.7220804815942491;
    msg.svy = 0.9026486516347924;
    msg.svz = 0.654763362242181;

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
    msg.setTimeStamp(0.0965982071857151);
    msg.setSource(53551U);
    msg.setSourceEntity(248U);
    msg.setDestination(49280U);
    msg.setDestinationEntity(217U);
    msg.group_name.assign("MVZDKNZHWZTDFGXIXUPKJOLMEOVRIVJKPUXECUJUAMWPIJHZARCGDAKECEICMLXLVPBMLYQSFPBJQTXWOVFCMPYAMOYVUTNXHNDQLYQSWFBRBBJQYGYQRECVZTEGHQTNGEJPIWBBDZCMNWZIIKTOQFUCYRBJGXUFEASBJASUTQIRENOPMSVOXBFSVNLKKCFAGNSYSHDWWTDZODNZXHOKLOUCAEULRTFRKKVLHGHIHRYMGWWNLYSGP");
    msg.op = 206U;
    msg.lat = 0.3857670870540334;
    msg.lon = 0.6398731784418108;
    msg.height = 0.37235081838335893;
    msg.x = 0.17443851239943498;
    msg.y = 0.9578383013280043;
    msg.z = 0.16911251732510413;
    msg.phi = 0.6673529343493796;
    msg.theta = 0.8418109734758676;
    msg.psi = 0.47867600748674743;
    msg.vx = 0.02789336495794803;
    msg.vy = 0.7758424195208319;
    msg.vz = 0.9862087310877689;
    msg.p = 0.6733917429933174;
    msg.q = 0.9825543647866283;
    msg.r = 0.06826538725665665;
    msg.svx = 0.7936437487442622;
    msg.svy = 0.657230694904986;
    msg.svz = 0.26219951381862083;

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
    msg.setTimeStamp(0.26866335090713533);
    msg.setSource(17998U);
    msg.setSourceEntity(91U);
    msg.setDestination(815U);
    msg.setDestinationEntity(60U);
    msg.plan_id.assign("AGDYXVYMACSLRMCZYEKUXRREFDOOBBTPSETJHMVLLWFSXMVUYISMKVURRTOHDAQUJNLHFWRHUNTDEVTMJSULSODGHCRFGQZPJOZJPSXQWZQGVGWKMLNDSCBPNNKBOGSIWWEXTOQYACCYAZHGIHNCPFHIBWIDMXAECORUKLNYGIMHKWUAUZTTFDAPNPILQAXFGESXIRJNYRZMIBTKJZEVGJOQKB");
    msg.type = 57U;
    msg.properties = 157U;
    msg.durations.assign("OWTQYUJAJDEEKKAGOOZYIIMSVICRUZMNSVODXVAWZXGQUEJBXBLJECRVCNPAAFYBOIFUBXFKKKWACHJJNFLENHTIMPWHOZDBRFTSYIJV");
    msg.distances.assign("GYWTYYVQPFNOSZJYJOSQMELOVYRPFKEJLHMAASHLSVVNPYXRQVZEGYVSHMFXXRJITDNHVOUQBFDU");
    msg.actions.assign("JUQMLJUTKBFYKCBNSKUQIITPUGPENRZMAGBWJBQALSLRJCXEBNHYHGJELKHHAKXWQWOZDDSLSRYTDFINMTVYCRCVGCFXQWF");
    msg.fuel.assign("ANYMMGGNCTLUPJQKKNKHODBGKUUMVIWHJXXYSKAOCWAPENAYCARQWCZYCRVSEXNSFFAZZPEZQSLNTPFXFGBHQXRBDNJUBRZJKUGUOLILLTWCTUHWISFIEJVCGZFSAKLXMFRSGNKTIEODHAPBRLJVXIWPHDPDJOYPAMBVKYHMDSDEYEXCNGQFETQGJJAKDTTNYEDVYZHOFLECHIPQWBBR");

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
    msg.setTimeStamp(0.49373135395895484);
    msg.setSource(18218U);
    msg.setSourceEntity(206U);
    msg.setDestination(30980U);
    msg.setDestinationEntity(21U);
    msg.plan_id.assign("LYIGANBFGDFWNRHJITT");
    msg.type = 173U;
    msg.properties = 221U;
    msg.durations.assign("WMWHCDRYWPHCDPZOPIKKWUQQVPXHAQHYVWFUMDQTSVNFAZSUSAKTHOBXIMTJTVXMGRRHJQABZJHMDLCFUNIBGTXVYAXZAEVWSNJHHPRBOIBYEYCFJHUJXKGCIPQE");
    msg.distances.assign("SERGLVJFGTIGBREZPXAJHKKQLXRSECLKZAXICMLKRKPDBAKLSRWINHHFTNWGMHQPLDJXUAGHVNDYTWG");
    msg.actions.assign("XYPOEYHVMDZAUIGIBVUXGFMLSSRZDWTSMTKHEEHHJMCOYTJEBNWVRTDXRELLTEISTWUWKFGSKKCNQFXYBQHFALGMOYAAVMMVCOJOPAJFIQUIDORWPXVFEHPNXNUPVDFPFGPWXCCQJIKCZFMKE");
    msg.fuel.assign("SBIPDZRDNVPITGNABHOJTQE");

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
    msg.setTimeStamp(0.9673790638685594);
    msg.setSource(49892U);
    msg.setSourceEntity(103U);
    msg.setDestination(1635U);
    msg.setDestinationEntity(234U);
    msg.plan_id.assign("QLOYYBQLRLBYTDWUGM");
    msg.type = 102U;
    msg.properties = 206U;
    msg.durations.assign("UZPREIUSTDJYOIYPTJECYFYGAQAJNXUYBFQOWZMPBWXPOLXIHMFIDABHDVDWDPEQFKOPEMNOZTQNEUHRUTLOTSSLLQHKIBGBKQEGVMGWJVCHQFMIYTPSLOPPLKFWFZCJTH");
    msg.distances.assign("LQWASAPTCZYODCHPASDKVGLYRXJXXRAASZBMOEEMZMFQQWCMTTNFQRVITGYUXCPTLEUZKVQDNKSPJNIPLJYGFDADPKZXHYBPWLURXXHVUFCJUZOWMISMREKBGRUJTFHVDSIJGDPIXRSRUSSERYDJSVFMPVBKWOLMTHNFLUWECFELABDNBGBOXWZNPWEWOVVGNQQITYZMKUCGR");
    msg.actions.assign("WGJCAQXHGGPWYOTBDZFVMVVVCKSRMTJNIDZIHBHMZIJEKGUWJWTITANMQBBKPRWGC");
    msg.fuel.assign("AGQSJYLNNFYLCRZTFOCKMUYEBUJSNKPFFKEFOSSEPKTDGDISBOHZTMRYKNSIYPWDWNNQFZRDIPVEFQXENGJUPEAMXQDMNQNBLXXIBHLJTPAPMTJYGMOHRMHBDLTOVBZVYAVUSWAIDJXMUVCRDFHJCTHOCPCCKWIJTZKAZWBKFBKCMHGELGKCQOHOGJAXVMNRZZSEUQ");

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
    msg.setTimeStamp(0.7496922198644265);
    msg.setSource(37282U);
    msg.setSourceEntity(171U);
    msg.setDestination(29459U);
    msg.setDestinationEntity(138U);
    msg.lat = 0.7405835434504874;
    msg.lon = 0.5062582997395955;
    msg.depth = 0.30727063847012026;
    msg.roll = 0.6706130201308975;
    msg.pitch = 0.2841024047744791;
    msg.yaw = 0.5388388930516995;
    msg.rcp_time = 0.5302226246713571;
    msg.sid.assign("ELROSUECXRJAGTMUMSGFANCLHRUMPGYHCAXKQPUVQDFWFRFVHHKHEMIBWDWIGDTVRELOVNQYJTTNPZMBPKQANSLUFKILQCANCOIXRACXANBGZEYVFLXIDB");
    msg.s_type = 6U;

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
    msg.setTimeStamp(0.7707231218258488);
    msg.setSource(14340U);
    msg.setSourceEntity(42U);
    msg.setDestination(51604U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.39798092277334507;
    msg.lon = 0.06038892209917246;
    msg.depth = 0.4087702757965931;
    msg.roll = 0.7026736140823205;
    msg.pitch = 0.028938987125523452;
    msg.yaw = 0.4381102837984847;
    msg.rcp_time = 0.27868241817033446;
    msg.sid.assign("SPYDQDXKCHXHPORXASSYTPHNMKKKXFURCKMSMULFGITEDANQJYAIWZYVVLKCTUXLVZNGOQKYERJIBPZSAXKFHDJWBHJGGMGUTXDFLIECBURZBZZJREYDENRZVVNGOIWTHOQTPJCWDMWJPWQUEFGEVHJOXRQMQLOAVYTIE");
    msg.s_type = 61U;

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
    msg.setTimeStamp(0.17483800709188024);
    msg.setSource(1415U);
    msg.setSourceEntity(181U);
    msg.setDestination(61412U);
    msg.setDestinationEntity(38U);
    msg.lat = 0.1863162953669132;
    msg.lon = 0.106890981672907;
    msg.depth = 0.9666556269298291;
    msg.roll = 0.12388635119794267;
    msg.pitch = 0.2791595314787544;
    msg.yaw = 0.6927565996337991;
    msg.rcp_time = 0.2924377014827231;
    msg.sid.assign("RHLXNKJRSLSSUCZTYHLBZLIINGOGROMCPHAUNXWJXQZIHLQBHGHXYGEKACDDPVAMDPOPOGRVHXWVYKOUIOWSALPAHLYAVEDWEGVMSMWABJFTBPRJKAOGSKFXJFJCCNYEWVYCQDFCZDPNPCQMTUFFWWQGTRFMINXBVEUXLDMTKEKEENIFZBGUCKUKMBJRICPWVFSQZLUYOBRWGQNTBQYDTTM");
    msg.s_type = 48U;

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
    msg.setTimeStamp(0.7600858227570482);
    msg.setSource(18415U);
    msg.setSourceEntity(91U);
    msg.setDestination(14450U);
    msg.setDestinationEntity(7U);
    msg.id.assign("WVAZHYQTKMLRQACSHPGJHLVBLEWINGYDSPCMTSGUMQUJJFVJQ");
    msg.sensor_class.assign("ADWYNDVESBVLCYDAPXAJXFJRDIZGBNHOAGMJECXIMSGHWBKRLOYBCEUBTJLRHFNVSNXKCSZAXLYNEKLWIQPXBRIHWBWCPSGNNIHIUYZAMFZPNMXKUSTRDWMYAASDEKVUJTFPWPROQPTKCZEQPELDJQVVNMFCIORLYVAKIGMHHERUQZXOQTDOWMZWYFQHLCCFJ");
    msg.lat = 0.9937425830485638;
    msg.lon = 0.9523802823127235;
    msg.alt = 0.5546180139223362;
    msg.heading = 0.08222553192823756;
    msg.data.assign("UCDRWBRAQEPYRGSWBAXYJQFCVNUCYZBQXPISWAFLEOCKKKP");

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
    msg.setTimeStamp(0.17505459236550636);
    msg.setSource(59424U);
    msg.setSourceEntity(34U);
    msg.setDestination(24837U);
    msg.setDestinationEntity(173U);
    msg.id.assign("LIILGVUDXDXMTKKCLQWFHPGIQHPXCMEEYRZUGXQITBSBNCTXIVERCAZIMWZJUBNHRTRCOPKCWFLTRKKHGJLFUYVCVASVJOFQSAERSZBWUWVOLZWDAFHWDKTOIWWIZKIKBYSGJPFNXUBGXBRCPUMHVVBWZHOSJDJJSYBFLEEDONMZRYFYBAATTUEXHYEFRMMQLYPSGUNOJKHNEPVQQOYXMGKTEQMNNI");
    msg.sensor_class.assign("SKYXRFMCBQELKKZUWDULPHYEXXAKHENOLNZUNLVWUXJRTGXPIRQGBMLHAXEYBSROCLBQBDST");
    msg.lat = 0.71772412269528;
    msg.lon = 0.18904601148932476;
    msg.alt = 0.984213003431601;
    msg.heading = 0.13621295434582092;
    msg.data.assign("BBZACAHMUSDLLNPCEQZRXYLYJSTWQF");

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
    msg.setTimeStamp(0.13014372672107977);
    msg.setSource(4539U);
    msg.setSourceEntity(134U);
    msg.setDestination(44943U);
    msg.setDestinationEntity(235U);
    msg.id.assign("VJBDEYYLPWREOGGEYLYTBJFBNXKPHWVOCDLNSERFMIPRRNGVYQWCGLBZIOYPTXFAQUODMPBSJKJSDINQUHTFXTXFLCUXIEHAPNWXUDARPSXTJNBVJMNHCQRCBZWZZHUVMOSJKMUGPOXXEHHSIMWSOMZVJDBKVGJWTBTUDOSGHEAVFLSVORCZYCKMZTKCMLCLQWQTWBSHLAKYOFGIAQZDPVUIQFQGFUIIXEZRQEJHTLZNFAYAYMURIKC");
    msg.sensor_class.assign("RXUVSDMAFNAQXOTJDGZCXBBIAUOQCWQKYRJSXWRNLEHJSBLTPVZTOFTEY");
    msg.lat = 0.18028309702223744;
    msg.lon = 0.18183847970713773;
    msg.alt = 0.9268084579699865;
    msg.heading = 0.1096321877585189;
    msg.data.assign("MEFRULBJOTCVMEMDQNWKEJMXWPUQAOIDRXEZAQTOSRNZJVSXRNWSVIPLVEHLSGCRKSOVZZKREYGTXJAZNFGLOHOALJKDXQUOLCPSYIXT");

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
    msg.setTimeStamp(0.8060304394748319);
    msg.setSource(34987U);
    msg.setSourceEntity(110U);
    msg.setDestination(39634U);
    msg.setDestinationEntity(241U);
    msg.id.assign("FXQUDGOQAMJVNBALYCQFAIVHMHNPJNZRWOXJSDEWJWPUJDOBRPNZHTZCXBTNJEIGEMLRDARSKIBIHGBWEVKOJFETYQKXDQHPSSKIUCUQMBDQNFTIHAVHILYIZJGSWFYSWDEULEWAGNTYZSFRSLAQZALCUQLLKWUOTNKZVPYFOKHCJRZVMVPXKFEDTUADCOPVBTTYGCXBXF");

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
    msg.setTimeStamp(0.557908333469285);
    msg.setSource(28233U);
    msg.setSourceEntity(179U);
    msg.setDestination(41999U);
    msg.setDestinationEntity(129U);
    msg.id.assign("NQFVWGYKZMHVYDMTWAHIAGHXPUPORPNJQCEJZKYPNNPAGFUZOMELEAPCXOQCKIJXEJONKNSRNQSBBWRMQIIIHJXUUYOKKWAWUMIZGTFRPMDLYQLXBKJHSKODTSLFEFWEYHKOTNDHLVEZHNLOCOFLFAT");

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
    msg.setTimeStamp(0.7028908765813145);
    msg.setSource(53790U);
    msg.setSourceEntity(224U);
    msg.setDestination(6078U);
    msg.setDestinationEntity(238U);
    msg.id.assign("HYRXECJEDRQLCOPMKQDKCXJVOOFPUMUFADMZFIYLHKNUHKLUBM");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("UURXWZVFTQZFDUDBKNEKAEEOWOLRKSWTJMIQLGVUKTIHAYFILQORSLIRXGWGGXHKPSNUFQFAPZJOLSWMJMNXYZBQTMGRCSGWUGUMCOOMFYKOBOJZTISYAVPWORHCPJCVJRXVXJQNEHLVPEADJVN");
    tmp_msg_0.feature_type = 228U;
    tmp_msg_0.rgb_red = 130U;
    tmp_msg_0.rgb_green = 120U;
    tmp_msg_0.rgb_blue = 219U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.9568825745778938;
    tmp_tmp_msg_0_0.lon = 0.8188002817843593;
    tmp_tmp_msg_0_0.alt = 0.7832841802313273;
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
    msg.setTimeStamp(0.07646714537117705);
    msg.setSource(21660U);
    msg.setSourceEntity(110U);
    msg.setDestination(6563U);
    msg.setDestinationEntity(0U);
    msg.id.assign("ZELXYLWTNFUGCUXUQOPSNBGARWFFAGYUKPMNSBVIJHYMSSJVHWLKEZVVIFVJRPVRRMPNINTCODZSUCMSL");
    msg.feature_type = 62U;
    msg.rgb_red = 36U;
    msg.rgb_green = 234U;
    msg.rgb_blue = 196U;

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
    msg.setTimeStamp(0.4596484943782695);
    msg.setSource(55638U);
    msg.setSourceEntity(190U);
    msg.setDestination(30434U);
    msg.setDestinationEntity(84U);
    msg.id.assign("UPLTKJQTFPAHAFRQICWHREEYXSTQDEAYIYQJNZKAGRCXSLTDHYIBRZEUNFNVYDJGONYYFJMWOWPVHMVBDHSJWTDLAFODPSRTXKZPBPQTNXWQQLBXOGDFMYLEFCSUEJSTGDEJCNIVCKPDAHHHBUSZLMNPLMXCXZQIVHUZKEJCSKNVXWCGRCBLSVARKMQTVRNYGDZU");
    msg.feature_type = 87U;
    msg.rgb_red = 172U;
    msg.rgb_green = 192U;
    msg.rgb_blue = 167U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.01857338770396666;
    tmp_msg_0.lon = 0.2602549648266146;
    tmp_msg_0.alt = 0.31956887982133797;
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
    msg.setTimeStamp(0.8226395618980722);
    msg.setSource(54565U);
    msg.setSourceEntity(198U);
    msg.setDestination(62533U);
    msg.setDestinationEntity(180U);
    msg.id.assign("CKMSZSWGOPEWDFUIUUIWFGJPELLVGMM");
    msg.feature_type = 91U;
    msg.rgb_red = 36U;
    msg.rgb_green = 19U;
    msg.rgb_blue = 79U;

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
    msg.setTimeStamp(0.21461139838641852);
    msg.setSource(12735U);
    msg.setSourceEntity(111U);
    msg.setDestination(7060U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.6549690822893142;
    msg.lon = 0.46837945369910416;
    msg.alt = 0.6481671508541198;

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
    msg.setTimeStamp(0.4874369162617439);
    msg.setSource(32130U);
    msg.setSourceEntity(68U);
    msg.setDestination(57018U);
    msg.setDestinationEntity(21U);
    msg.lat = 0.7581731955717139;
    msg.lon = 0.10293201960533882;
    msg.alt = 0.7830362022818815;

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
    msg.setTimeStamp(0.7297244845579081);
    msg.setSource(445U);
    msg.setSourceEntity(172U);
    msg.setDestination(14701U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.5430175347383561;
    msg.lon = 0.05914731021070141;
    msg.alt = 0.7321047731804744;

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
    msg.setTimeStamp(0.27431324129759893);
    msg.setSource(5647U);
    msg.setSourceEntity(46U);
    msg.setDestination(3346U);
    msg.setDestinationEntity(167U);
    msg.type = 57U;
    msg.id.assign("WSTAZCBOVTMRYFEDSJSTBY");
    IMC::RemoteSensorInfo tmp_msg_0;
    tmp_msg_0.id.assign("AUSTANMRLFDEVWBOXSINNHHNUKOAORYUGBUYGYQFVSINAZKARHBVMEKTUOHDFHSZVROQGGWANENOZJAXLLJMUXULJDRPQDCWKLRYGZIWJWICITSNFECSCMBYGBPVXOMBPFMLTADCULTKVDXQFYQIXSNZTJNGRKBOC");
    tmp_msg_0.sensor_class.assign("UKQHZQXEXPWBMVSMDYEDUGYPUNBULVQIDMKJUOKZHFANARODRYOUGMNONIBSFEWHHJOZRLWYQCAZGHUVDBLRTYDXKAJPECSAFBVWWHSJASPKMICKLDHFXTWOOPCEMPCLZHJRMVQQYQIITASUUBYRLCVGLGRPIPERVYGSLYPBEQNCFXGGQNTTGTOFHFNIEVXJAENJKIZBEZRTKIFTCKFWJXSTVZGUWDPXXMASCQNDWLJNA");
    tmp_msg_0.lat = 0.09369280688015302;
    tmp_msg_0.lon = 0.8728910351183544;
    tmp_msg_0.alt = 0.3645117540986542;
    tmp_msg_0.heading = 0.5577604672898887;
    tmp_msg_0.data.assign("DWNWUODVJGEFROKPGIJDPWYSVMSNWRMAZJFLTABEVQBGIWY");
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
    msg.setTimeStamp(0.7174215393678259);
    msg.setSource(10729U);
    msg.setSourceEntity(35U);
    msg.setDestination(36061U);
    msg.setDestinationEntity(227U);
    msg.type = 199U;
    msg.id.assign("IOHQKFKXGEFEWSQUWVRTZBPKRXJIFGLITDMKECPWHLKGJRKVHNBYFALGZAJIDRJDEAGDSBFKRGYQMLWDZQLNEWYAOZPTAJVYTVDOAGDHPOSHBBNIUELLFTDNASUZ");
    IMC::Pulse tmp_msg_0;
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
    msg.setTimeStamp(0.6715799838032398);
    msg.setSource(48571U);
    msg.setSourceEntity(44U);
    msg.setDestination(30040U);
    msg.setDestinationEntity(103U);
    msg.type = 125U;
    msg.id.assign("QXODUIULZHTMMAAADMFUCLFYXKPX");
    IMC::ColoredDissolvedOrganicMatter tmp_msg_0;
    tmp_msg_0.value = 0.3507412705261046;
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
    msg.setTimeStamp(0.1952786068181911);
    msg.setSource(4415U);
    msg.setSourceEntity(11U);
    msg.setDestination(25182U);
    msg.setDestinationEntity(159U);
    msg.localname.assign("ZWTGGKWLMRNETDFCILZWFKIJ");

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
    msg.setTimeStamp(0.10500696672365661);
    msg.setSource(4767U);
    msg.setSourceEntity(18U);
    msg.setDestination(14961U);
    msg.setDestinationEntity(101U);
    msg.localname.assign("WHDHITAPRQEFDRPNWRLXCKFPDAEXEFQGNOEXQGNXXCESIBRPNHBGVMCPUVWLPFSVCGZWISAIQHBYZZYMOTLNMMGGEANRFUFKYJZTVNKKQAILBQOVFZYNMUHJU");

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
    msg.setTimeStamp(0.6786621067250422);
    msg.setSource(10546U);
    msg.setSourceEntity(236U);
    msg.setDestination(47748U);
    msg.setDestinationEntity(167U);
    msg.localname.assign("KXVXWXRJWNXEUMNCCVWKFQBSAFXBOFJMBIGPOPIHGULDCOMRTNXUJOHZSCYPOVIOSASJSZNMETLALYCAJDXWTNYGLQAMBNXWQNGIVRJQPZSLBPMLSZTCFYUVQZLTHVMAEQSGEI");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("WICSUQKZNGPSHTIKDMWVPNUKNLABSUMIXHFGLPAJUU");
    tmp_msg_0.sys_type = 79U;
    tmp_msg_0.owner = 44659U;
    tmp_msg_0.lat = 0.4138459786957007;
    tmp_msg_0.lon = 0.34275286446237074;
    tmp_msg_0.height = 0.40098145961366793;
    tmp_msg_0.services.assign("FJTBQKERCAJHXYCNFAIYEXPBLAQGTRILSMWVGCDOUOBJOWNUDUJCFXKSWGIRPHVAEIKYBHPMERJKNZZTSRSNMDLTLYXYBMVSOQHTYWVPVDVOSFDKHDIUMDZUGQAAQEVGUVEYPNZCUJSFJCCKZFZYADLYRWRYDIGPEJGUFNXTQXGBOBWESCOKMQGLIIIMCLLHWWAFOEXXJZ");
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
    msg.setTimeStamp(0.9590585218290867);
    msg.setSource(51614U);
    msg.setSourceEntity(88U);
    msg.setDestination(30097U);
    msg.setDestinationEntity(120U);
    msg.timeline.assign("AEHEOVVUCUIRCBLLMWDLCELDYKL");
    msg.predicate.assign("VZPQRMCOBEDEJHEVOZEUYYZKSPPVBUHNSKFCVMWXJMVQRPVETQFIPILZWZWZSYMMTHXJCSNNEOKRYLGLHNDFGTJBOLAOSWHHLQWAUDSYFQRJRCVFYISPZXBGLFBEJTGAGQQOGSYOJKRAIQNMIYDGDFBKABKVCNCNRZITRTTOTRWLFUXKPODXMTALZAKUCXFADITWYUXDBASWJCLCNMELIMRPDUUHWXXCJJQGBOIPPDNEGFKAYN");
    msg.attributes.assign("NJPGONPNRVHWZEWCHOOIYQUTVRXCKBHVDVQNSZPCRWYYVWSAJPFAGOEDBVDSANZLLPMSJYXFKUOMKPCVQNQBZJGSYZLJZPXSMXEUOIWNZOLJCXHMBTXRDOMJDWILAFCANHBWPBRUISQFUGOAJKAELFKFQWNAFQUPKKLBTJHMTOZGKHL");

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
    msg.setTimeStamp(0.16562286220728117);
    msg.setSource(37222U);
    msg.setSourceEntity(73U);
    msg.setDestination(63763U);
    msg.setDestinationEntity(87U);
    msg.timeline.assign("FOUACENTAPDGIMBQBNIZKGHLQNTCUINBNIXRYEKVEQTMDIDCITVCOSUHGCOOAORMXPYDDQWHYUZLAYIMGYAFZPUYKSDFEYTLPZGTHKCDWWHFNAGCLSQAXLSSRIJOQBROHMJBJVVVLEVBEFMXOSWMW");
    msg.predicate.assign("WRAQMFFAOLAPYXUAAJBQTCT");
    msg.attributes.assign("MIMOJWQRSTDQHZAZBJTENRNPTAIY");

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
    msg.setTimeStamp(0.14066551984503295);
    msg.setSource(20959U);
    msg.setSourceEntity(53U);
    msg.setDestination(4687U);
    msg.setDestinationEntity(75U);
    msg.timeline.assign("HCNVESTZFSLTWPKNRDINQALSULFJEZLWBKUVLASWRAPVXHQDVUYWJPWUTTXYKMISOJFJXCKNFXGIMUSTBBGPEFDDWQERAHTGYSMHMBHZISYFLEWLDZDX");
    msg.predicate.assign("SNDVOFGKQGGFEQTMJCNAQKXABJECPXFLDTRESZWOGCAHHKIPRPIVEBILYSQVARHBIWPRSPQRBUUGYZZZQGNSLJCVDUFOTMYMQMCBTMTINKJKWULSTKOZSHYMBFSDLTMVHAYZWUEHFXPYNOONPTWZDKEJXNULDWARUZYOBVHKOGSWFHIWXINFOGOLRKCQULTTRRWADAYYVDNICKXBICBQDFBCNEWGMEC");
    msg.attributes.assign("NBEYJZZVIWBWITNLRDLTTLHKTIOJFWOMJGJZADEYCGVKPOSCYJOLVXJAOWAGUZPRSJYEFLIYHDUFBFQMUSMPCAAIYAVMVRLSXWKIKTQGROAKRC");

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
    msg.setTimeStamp(0.9872315282603726);
    msg.setSource(56119U);
    msg.setSourceEntity(230U);
    msg.setDestination(12964U);
    msg.setDestinationEntity(37U);
    msg.command = 223U;
    msg.goal_id.assign("MZTWBLKJVISTQOPTDPFRGLWRVHRPAMJLRMEUIPNYFXEGQDKVUJUNYNSYCGHLNKOBELNXQYVEROZBSHYYSNMCNXCWPDSCSTPNNIBXIAKQOMXXPENVTBFKHLJBUJZGWMJKAKXRSCWWVCKCDSLAZFTYLHIEUKBZGSQJRTIHDUHAOERJMQCZJZAMF");
    msg.goal_xml.assign("DVSAFFDMFKLHDNLRRMZBWNMYUJDURGJLTEUXEKVXVCTMCZWGEXVQXKEIEMZHTINYNHPWYQIBHOCJOAYZJAUQOUMLDMZLOHOLHAYRGBWOXQPBNBGPQMXEDTTSITALBJRKSFHPDTVZSYKVZHBABFOIPXFQBTDNORGWVHJQLBIEGCFSRFCSTMJWXSZCGASMYCIKOEUEQTQD");

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
    msg.setTimeStamp(0.42567961372636476);
    msg.setSource(12715U);
    msg.setSourceEntity(41U);
    msg.setDestination(48503U);
    msg.setDestinationEntity(14U);
    msg.command = 174U;
    msg.goal_id.assign("GMKVONSASXYTUJFAIKERJUUKRSKALQGWPGLBBKNGZIILFPHJFRPYMPQLUMRKSXXHYVWHEYNQSWBSYMCHZPULCQQFGKHLVXR");
    msg.goal_xml.assign("FBNCGFXHFKEMRVYCKERTFVPQIDDLGEOXZNQDXFXCKYRTHBMCBXIZKBVHVUQOJRQHHFSTTANERPTLBVXZN");

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
    msg.setTimeStamp(0.8360315412523457);
    msg.setSource(38054U);
    msg.setSourceEntity(103U);
    msg.setDestination(39797U);
    msg.setDestinationEntity(104U);
    msg.command = 99U;
    msg.goal_id.assign("IJOXMRBWMRQXOKUVUTILRQUEEYAFNUZDSXZKKZOVXMQTGFHIYYDRXTCLFASJBCKJXZVOTMSVBFZTLYWHX");
    msg.goal_xml.assign("AJQEQBHGMAHEDSWNLBZVFLMZENPFFTVREAEKOIVOKTAPCSWFUOANWIUUBICCDKBXSOVLGGHVBDJCGQTIINNEEYTUILX");

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
    msg.setTimeStamp(0.8569205485348771);
    msg.setSource(13897U);
    msg.setSourceEntity(92U);
    msg.setDestination(827U);
    msg.setDestinationEntity(74U);
    msg.op = 21U;
    msg.goal_id.assign("ZGMKCGJZIXHTCYXFVZSCWAMRRUMSBIOVKLWJJTDOBWESPCNTMDIBUEKWWPFKRPYRNJEJXVJNQCDQJAWUUKOQZCQMUDRSKNXXDAGTEUQPZLVHRGHACYUMXKHIUXHDFCFDSPLVKTFZCNEFXBLLPIQPBQGJYLGGIHFAPOOESPZRWBHLQLONMOSACHFYYEAD");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("MGSVBLNCMWXSMELOWBDPZOAVHGXDOHLJQRRXHUAJXPWRVXLCRKFIPVBSCQJOSSMQYGRVTHROCMXEFQWAEXNYLTVQFAUJNFZVJNSKOUCEUPBDPAEHVYIPCIFRIMGGZDLFDEJRWGMCDKNDPTAFUMMTQNYYKHIYKJIFGTWDWKZBTCFZULLDZKHT");
    tmp_msg_0.predicate.assign("OFOIBCWNPXYDSRYBOIICFDUUBJWHRVAEPDNSTLKSWACYLZVLCVDRLUXRYXKQWZFYEPLFEYVHRMYRHGVGMODHUURZEGNINQBBCWJIEWZWKTXFEUBNPTNJSITDHYCNBBDVXCUPOHAGRJBJEJIMGAMNQZ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UFPFRRHIFLYLGNZOZHDREOJATINSZCKHPKWYIWTTOLSEJBQMWQTMXWHFGHKJEYVSDLMDWBXBIGEPJSDFKKGVEVWCHQZKKPAFNANUYVXLUNU");
    tmp_tmp_msg_0_0.attr_type = 213U;
    tmp_tmp_msg_0_0.min.assign("GCXMWPSCQAQBNKNDYSTWBGLTPHMSSKKSOEWRHXPTWNLVUXSBQIMLQHNLDZEMVAALTNCYTOOSNZMOTZIXQMRRXAPQXTVEFCXAODAOMECWGIQUMJAFDBPULTKHCSHRWOGPBYHZJZDKUKZCPLHRQDZJGGWTAZDHBFJTXQUCSEWEVLHIJEJGNYJDYBHCNBPSJMYAFGRRDIIUFRFJVBZFVBOEUKVENWYROIYIKPQVXEFUALDZVXNMKLFJI");
    tmp_tmp_msg_0_0.max.assign("BUAOONZZNSACQKYIXLQSNZDZOPXENBNCTUVGYEJFAMSRHGUPFVJSYHKETDJWHOWUUSWWOBCYLHNPEDCDTZXVMIGCEJMDTAAGQQCNIRRYHDTNECLBNPRCRFIVBPEDSGLMATWIRXDMTXKIVOPUHFWWUMXZVPBFODRMLVHLILXIJLGHVQROJAREULIIDZLPVKOTACMKUYRSMYTEUHXBYFPJQKHJCZBKTSWZQEVPYKXGOAJFAKXQQJG");
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
    msg.setTimeStamp(0.5755878064181933);
    msg.setSource(21970U);
    msg.setSourceEntity(159U);
    msg.setDestination(24070U);
    msg.setDestinationEntity(74U);
    msg.op = 29U;
    msg.goal_id.assign("BPLJGENIJKUKQBJWHTENSMAOTKXWRIGYHHRWUZQZWDHNVCSLDQTGBPMXTLWCQOTZUAVOCNPAAQFFTJIFADZBYZXZSFOIBGVHTKSFBKXSDSHAMVCEZJHOCPICHYQTYGMIXGGJZUWTRFESEVOPYNUKJRNXXEFXEDDPBQMJUNKXAMIDRAVRMFKBYDFKQXDVSKLOPYOILLQWUOWGIFEUWPUCBRCLZGWYVABUPRVYEJ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JARPVYHTIMTCCIGAZHLCVRTIPIYVXWTVNOBPHNOSERDESXKRGEXWYGSBOMWQANXXATPIUMACYBRGGQUYVIYXJELNQRHLOOPJUEQMODLNQKPTKDJIUBLYDWFGG");
    tmp_msg_0.predicate.assign("DCWDGACVCLUHFCUXAOZYAURYAPHFYLJFMKJPJPSGPIIIMDHZWVQQYCOSEQWIJYSEESNVVONWKLNPQTBFTYJLXUPNEDUBSZQIEZRALAFGFRACAKCXHJKMRXRAZUKQMUPBLKBITVKRMSMGRJTWREXDIOMYTETAUBJQILOGMBOSUZVPFEZDLOIJMZGFLDEZHTSPCMTKCOTXSUVHOBKXXVKNQESWRNOIPHNXHWXDFLYWNFTVQGNBWYJGB");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ECSGGHRIAZYJJITQTPDOGFMZCADJAXZSIHIDAZNSWJBTYUFLNFOVODXJCHTHWPXWSKMAZNVNFQAKFWBSSEBJMZMKEMRETRLZUHELYGYIBNUPTCWJRDPZIIQWGCXPDSBCGOPKAUBZOHTBNEQVUFWWLMVUQZEUTMDRLYKVLWPOCTICUYQGAWXRSEHKISQVAENSBFKYOPGHEMHGCXTXXRUGDFLMKVVQROJDRMLJF");
    tmp_tmp_msg_0_0.attr_type = 194U;
    tmp_tmp_msg_0_0.min.assign("IEMGTDMPCELNIFBAYVKIKWUXDVWRHZYXKJLKXDUJTEWTRPLYSDDWDICITXDQKOJBRFBXQQNYERWQZHYFHGLBQLNMADXNHMWVISFOLZAMZAKSYNOJYPTMJAZCTRZQBGUZBIWJCUVWLHSUWAOJMLJGVOLPPOYTHIRUBEHQCFVEFEOVUFSYZKVGASPIMKW");
    tmp_tmp_msg_0_0.max.assign("EQDPJVOZYICGCWVXZWULKTGEIQFFXIDLXFCTBCQJDYYPVLMODSYGWMGORXDGQTSRCUZLGEPGEYYYHWLAHURTSKEULGMQNWJVSEJIFWIRZHNTFFQHFLXTJSOPOPSVXTCQJ");
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
    msg.setTimeStamp(0.4792159279515763);
    msg.setSource(25510U);
    msg.setSourceEntity(202U);
    msg.setDestination(26003U);
    msg.setDestinationEntity(84U);
    msg.op = 29U;
    msg.goal_id.assign("PSCULVYBQPCOCMKZDVGJSGORPRELLIEUXEIBPBCFOKZXWYHLAXSNMQAKCLZFAKHWOEJRWEILVNUHUIQASDGOYFCZHGAXTQIRCIPEKDXYDBKATVRNEHFWBEPBUXEDTFZCDUBDNSVMSAWMQWLSMGDYOHSJJGVMQXNXRMAPAXMWKVYJHNJFTKNAQXLFPGYIHUKOJKTNZJDPFIYILUTWVGZPJWMZUTWGYYBJOHNCID");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RRMQKPKHGKOSMXNHLZQWKGAFIFBDLHNDJXTMEJPNLWBYAKUFHINOFCXNKPQMJ");
    tmp_msg_0.predicate.assign("HZGLXWLRQTDCZEJUTLBVE");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OGKNXFQNHXTRVWOLJUBXVMAAPBLZUCXYFIAFALVAQKSUEDJTKVAMPTJUHDIWNEJQOKSDJNAXNHGCHIHMKYSSIZACOMYRKPUGUNFMTBHELQQEDFCKRKSXYQOVP");
    tmp_tmp_msg_0_0.attr_type = 150U;
    tmp_tmp_msg_0_0.min.assign("LRBWXPHSZMTZIQDNCQUBAKAEZRMMVSHIKYBNRTXOHXMLDYPLPFTIVUBDRWGOEAMNEFBUTPJMTNORDOHNWSYEEEANKIWJVGNHGOJUQXXITODJNCMBLLNLWROGRYLTRYPDYSXOOGCSQEKFHZDWUBGQRXAFEXNJDGGAEGIVCYCUKWLHEFPKVPPGPUZYFZTSKUFWUBFRQUCSJHDJQSIZKYCLTAMQSCVZ");
    tmp_tmp_msg_0_0.max.assign("CVTZZPSMZQTEMVOEWGOPUSRXAQNGRSGUFIUBLIA");
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
    msg.setTimeStamp(0.4255254197641404);
    msg.setSource(26104U);
    msg.setSourceEntity(117U);
    msg.setDestination(23550U);
    msg.setDestinationEntity(96U);
    msg.name.assign("UEABBFERKRNVASPODYRLUUQMSNTUXOTGRPGRUHHVOIFAEHCCSBQFCOIWTXQPSVLTYNQHKUBTZEKJVRXKAOWOCBFCZOYCEGAKTXYDAIBPRYJLTDOMQXZTXYHUG");
    msg.attr_type = 249U;
    msg.min.assign("RJACEHBWEQGJVMAYBOKZWIUNFRTUYEARGPATOWEPNOBLXOBMLYMVRPBHOYXKJBHQUXNYXOEDWEQPPHGILIGDNDANSHLBQWGCWRUUAICPLMJFZJKILZCIAZACYYWAXUETYZEZUVZVNFDIFXVRIOTSMQTRQDDLZNWIONCGB");
    msg.max.assign("MDGQRGAWJAUQTLJMUZHGCFWPTBCEWSSSBDRCNALXTTYHVJHNLJDFJZWOXK");

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
    msg.setTimeStamp(0.43105825407694776);
    msg.setSource(31444U);
    msg.setSourceEntity(144U);
    msg.setDestination(42921U);
    msg.setDestinationEntity(52U);
    msg.name.assign("HRGSCVYHWWDUVJMSUKVNJIWLQKGQXODXIHNYTPQMSREIKBVFTQBSQEXRATHLNMIWUFLNOKEABZAIHONFXHFCWPIAMPQKMUXXPZAVYGBBRPZXFMFTQWMCZECBFGGHUVHVULASEZWNPINTZCYEDVCTPWALLEDNSLOLMQWJZOFUURODEPZRXAGVHT");
    msg.attr_type = 234U;
    msg.min.assign("NWPEVCMJAQMRCJPBXIPMPTTNOEREMAIOHMAVHORJWOXNSFLDXLUBCYNEZXUBBNZMDUYZVRYFHIUEPXOELCQTPANSWUSZYERLBHFNADESAHVNKQISMKHTALCJFRLGXKIHFKOOITPGGDSGWCJCDWGQSJGQPLZBMQYHKFORSXTUFBUICBLWBUJDOLKGDQDDQESHGYPZFKWVVGQEINXKCZURVQLVFHJFDMVMIWZTGUOVJAAYICXZYTAJ");
    msg.max.assign("ODYVQYQRXQIAVERUISZMKUIDXNBNLVDNWQHBPTRGQFCGGOKVAQWHRXGEUDXZNKKISOWSBEMEJPAUKQEYTFKCCHMILBJYIBPFOFZGZRFMCWOWAHKTYNRMHAVQTZEYXUHTOSNSXOSGDJZCPTRAZJJELLSBFMURITCQHDIKJDUDZPXTODLJTILXPOBGKSXNYUWDBSWPZFHKJLVFZSC");

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
    msg.setTimeStamp(0.6276483139823231);
    msg.setSource(59322U);
    msg.setSourceEntity(29U);
    msg.setDestination(6508U);
    msg.setDestinationEntity(49U);
    msg.name.assign("IDWHPDXODEFJSHIYRUTPNFIWKIHDEKVQLNYOXFRBAFBWRKKAZMSMKFQFVTPUWVOABHTLELXCKIEICQXCWUXQVBGOUPMWFSRPYZREBCHXZJEHG");
    msg.attr_type = 161U;
    msg.min.assign("GIJMDGKTWYWLBSZDNWCGIOAOTATNFUZHGSHJSQQESJULYKIGSEDUKAOHYVHROBQMSYYELTQXJXWBPMRWOLOLMQCSJFLHQAIJLXZIKCPVXEZPXVSLDNBBFNCNZIIKTAZVROABWNPPSPYUMZRIEKBETNQFBQVHTRXYEUJBUXDWMJTYILCKYLEMDBGHFWKZJQ");
    msg.max.assign("DICIUJRBDUDTWEELOFNGLIAVGZUNZAYLMJSVGAMESTCZMODFSXMSMDAUOLHYXEHYJSVOOJEOJXKIPDUBZFWHJUBY");

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
    msg.setTimeStamp(0.447187563340557);
    msg.setSource(33885U);
    msg.setSourceEntity(130U);
    msg.setDestination(25798U);
    msg.setDestinationEntity(55U);
    msg.timeline.assign("BGGJKCNPICEVNEQTKULWNEZHLDSAAAXIGJUVODZDLYSWAGLBKCTUWIJHJSOPBSBYRAHCVBCQTNXUMFFNWINJEZIYXKCQSDYPGGKJHOHCFUFEPTQLLSHDFPKBAZYOROZVQQWHYASEQPKINURRVJROWAZKWMPLTONMRDYMBRDVMMBHFQGGXFJJSTVXEITBDVIKFZMTAGXFHUZYMLYDZWBERIIERCSTENQVR");
    msg.predicate.assign("ZDMAZQLFEQNBUYPRZVPSPKZTYXSAGQOAOPONWABMMHVAFADBJERJKWRVSI");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("PGATJVNDUDZVUCXESOASZYFTPFOMDOWLKGBEYJTZIUMKMXGEIUQMIRRZWRNWOQSAHRWFBEDXPTNZFDKCXYPLQSCJPXNFEIRMGPTDDIVRLCMSBYVEQJJZYCZVUAUCLXVHEHMQBKPTQCIHOBAWKMMSBBUTHOKZVCRJKLOX");
    tmp_msg_0.attr_type = 175U;
    tmp_msg_0.min.assign("IDICYSRFBCZZVKVVUSQHCBINEPMRHVKCORKTEMVFYPGACESDAKYCKZFXWWMSUNQJHOWSQEQGGORXXHSGEJZYBNWXNEOAXVJQNNBIAGOOJGTTDKPJAUJPDXJWUCPLDRQXAQIMEHCVBRHGYSBGLJWKTZLVGLRNSUDDILLVCBSPELZBWLYOKXFIGYZWZFVOWFPACUYQOQMHMTHATFRFWMDFAKXJHUSLBNEIIYATEDLHJMT");
    tmp_msg_0.max.assign("RAOVVFKVDXFQXPSTSWSEBXWMWLJHCMY");
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
    msg.setTimeStamp(0.5078148436018687);
    msg.setSource(56951U);
    msg.setSourceEntity(140U);
    msg.setDestination(40625U);
    msg.setDestinationEntity(101U);
    msg.timeline.assign("JHGNHFXGUXWPELAVOONFGJCKUMSLGZVVENOFRJHMGVHFPDTLPRNQKTDJILDUUCPFQRVJFWZYYLRJAEFXTUHBTDANEGYPERPYXHGHDSTZSIOIZMCRQOAVABUZTXAQYJTQTKISJWOMYPCEDGPCMWGQDWXULXSSIHKIEMSOKIPLFKDNAWYKRXQ");
    msg.predicate.assign("AXXBFEKBZCKHLFTBYMZSUNGNTWJJFJBCTORSRMUTCYZBDGDZGOZGTLMVGGRNADJXEEXOIPHIGJSKYUVTKRNBXRBHVXDQWZRTAULLBJGJYHISLUECWSZNEDAPMUNQIQPKQRNZFFWAQFTWAVAQCFPOMXCUINCKLOPVSPVMFPUYELTKHBKMYMXIQEADUEVKXYVONHJFQRIZOIYWVGCEDQIUMBHWRV");

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
    msg.setTimeStamp(0.1296401581106853);
    msg.setSource(16071U);
    msg.setSourceEntity(227U);
    msg.setDestination(1974U);
    msg.setDestinationEntity(119U);
    msg.timeline.assign("OQWVLSDBLCKJTYWTFQBXHNXLGJVMRLIHFUSLWFEYZRUXMWBDSQLCSKBCXVBAMHRZGOXTMXACGCOQBRNSINIHLOQIBIUGWWUAKXFRFPGXJSPGTGLKZROHXTRIMJZUCRKOZZHFRATFEKCOHDGURKVQ");
    msg.predicate.assign("XJKVKVSZSZABYDLJSHEYWBNXLPPKTHZWDSRKLLANXVFVRQDGMGXVCYQDCLVMHOAYMUYMCTSCIXBW");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("UJEXTLGMYKGHTSWXLDGLCOFWIINVCOUPQHOFLCREI");
    tmp_msg_0.attr_type = 20U;
    tmp_msg_0.min.assign("SNFLBDCSFSQWVDGGJOZXRLQWGOCUDNYPJOHFJBVXBLPELLYGXFDUWXVFMATOYTUAKKIPUCXANRIBHREERABSCZDQLUTRYMUGWDOORFOEBSAYKEVWQKBJXPEANTIQNIJKMIAKYNUHRIRIMAV");
    tmp_msg_0.max.assign("BTXXLGTTDIMPVXENOMCIGESDCVYZSOLRQGJWLAUBRZJFFPHEJSKJFVOFUKCJYJQJMKNARTMIYUYKTSTONBVDHOCMUESYJHRIIUHAQJLYZEICIIRXKLKFSLWAMFOTBOCRXVEQQDFQGPBCGZYLPUQXBKNUNCZWAKBTUDHWQZCPYQDOMRCMOVZBDFRSAIWBXHOPHZESHWPWWGNHNSKEUTEDGZXIAAWDMVXLNRDMGLJZYRLXTFHY");
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
    msg.setTimeStamp(0.4637224584837064);
    msg.setSource(54974U);
    msg.setSourceEntity(10U);
    msg.setDestination(4750U);
    msg.setDestinationEntity(238U);
    msg.reactor.assign("UJAPIBPSVTHVMLLNSNESMTIQTVFYKXWZZRBAXQBYXJSIRSDMYJDSOXCFDQMQUECGJCTHTCAZBFQJQWOIFEKHVDRBVYMDTAFOUETGLXVRQMAHZGHMOWUHPGNORJOJAETQPYIGXURUYDZBKJAQNVOLPMPFDTKBONSTKCWDUPZFZYEAPCYOHXPLZNEWYVYIILQBADKIWFJFNGZGZXWLHJGHUSXVIDVGRUKSOPWLEGMW");

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
    msg.setTimeStamp(0.32231165196795164);
    msg.setSource(49448U);
    msg.setSourceEntity(239U);
    msg.setDestination(42005U);
    msg.setDestinationEntity(97U);
    msg.reactor.assign("NFQTLJPBUSBYTGLNMAOEBXSMZFDZECUJVKAZUHTRRVCZLOVKINPDKGRUYCSCXWIMDRFJHJYJPPOITPHESHZ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RLALVMCBYYIUSVMQUAFKGIOIOAHZPZRJTXSTEIJLOUIEGWSRKYBRXQNICQMTINJTWLNUEVXYJGDHYAKNZBJNOPJHRVCAGEWHDXZSQLSRBEFTOACHOKWBOUUISCKWUWYFZXR");
    tmp_msg_0.predicate.assign("QHAQUEZAZITDNWJQCEPWKBWGNQZQETOXWYAQXVUIJEURRUOXHXPLHBBKYVSTLILGBXRIVINQKZJOAPCKTIFCRKXJSMVESMV");
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
    msg.setTimeStamp(0.5169858905157884);
    msg.setSource(11444U);
    msg.setSourceEntity(32U);
    msg.setDestination(11449U);
    msg.setDestinationEntity(229U);
    msg.reactor.assign("GMTKMCCUQIZFTIKUDWEKVKYCFZXBRSLYEKSWBKAMGZIDPXHEAKLFNRCQFG");

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
    msg.setTimeStamp(0.17724645885326207);
    msg.setSource(62443U);
    msg.setSourceEntity(150U);
    msg.setDestination(3915U);
    msg.setDestinationEntity(203U);
    msg.topic.assign("BMEHQWVQQTNBPTHWJXLGCEDOYCOTGLHCRAEQEXSRZMKUKCQUZ");
    msg.data.assign("YCHEFBHALQDWIZYMYUUHADDWPXRQLEJVXMNUPLKJUOYCTGSVOQIVSMETPZ");

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
    msg.setTimeStamp(0.6735327099146745);
    msg.setSource(34236U);
    msg.setSourceEntity(200U);
    msg.setDestination(55549U);
    msg.setDestinationEntity(137U);
    msg.topic.assign("JZDRMKJXCMDRALYVORPU");
    msg.data.assign("TGUVWBUWGVHETDPXMMKANBHHYBDEDKRQAJEYAHGLZPWOBUAHEFPMQKZGBVZBIEECUNKZOBAPLXINKNVIFFVCX");

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
    msg.setTimeStamp(0.8949308259569577);
    msg.setSource(30369U);
    msg.setSourceEntity(120U);
    msg.setDestination(50094U);
    msg.setDestinationEntity(11U);
    msg.topic.assign("QGUSSMPQDRHVBAJGUIOOLKJOLBIBII");
    msg.data.assign("YFFWHTXDRBWDVJIAGRTMKKRCKSKRLDSUHHXRXVXSQHUBUWJTPEHDGMSLLEBPAZCQJUDOAYRQQRUHGVOFVMNAUAUZQQVTNLPEMPUSYWXFEHQTXARWTOIVJUMOICIGDEHFKCFGECKZMEMBPFKQYYFINJKLULXV");

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
    msg.setTimeStamp(0.9133303131754668);
    msg.setSource(16633U);
    msg.setSourceEntity(52U);
    msg.setDestination(23228U);
    msg.setDestinationEntity(69U);
    msg.frameid = 87U;
    const signed char tmp_msg_0[] = {69, -10, 7, -5, -115, -32, 88, 66, 46, -16, -61, -26, -89, -98, 21, 116, -10, 4, 24, 79, 85, 53, 48, -109, 57, -34, -2, -98, 94, 17, 79, 38, 27, 69, -90, 79, -56, -57, -85, -43, -96, 4, -104, -69, -64, 53, 60, -16, 112, 23, -66, 99, 80, 2, -93, -79, -94, -25, -41, -53, -67, 46, -116, 82, 112, -56, -110, 66, 53, 113, -97, -6, -114, 48, 78, 119, -38, -71, -36, -8, 23, -61, 120, 87, -119, -50, -109, 27, -6, -116, -52, 45, 116, -22, 68, 2, -85, -81, 31, -7, 27, 2, -18, 104, 32, 78, 104, -95, -53, -7, 89, 57, 48, 56, -119, 40, -120, 7, 89, -83, 8, 126, 36, 18, 89, -41, -88, 49, 2, 122, 3, -58, -110, -23, 4, 16, -84, 119, -15, -77, -4, 52, 126, -65, -123, 92, 78, -60, 24, 10, 49, 126, -84, 28, 26, -2, -56, 98, -20, -25, -32, -70, -119, 61, -77, 26, 95, -73, 97, -96, 29, -78, 94, -57, -51, 71, -123, -127, 84, 61, -11, 80, 37, -128, -69, 70, -55, 3, -109, 40, -12, -94, -49, 3, 73, 17, 9, -111, 117, -19, 59, -65, -90, -21, 86, -26, 75, -20, -87, -30, 28, 124, -48, -16, 100, 111, 97, 42, 124, -85, -77, 11, -10, -120, -95, 110, -15, -13, -104, -40, 16, -8, -126, 112, 59, -50, -4, 14, 15, 82, -101, -51, 65, -95, 4};
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
    msg.setTimeStamp(0.8498919248481868);
    msg.setSource(33783U);
    msg.setSourceEntity(135U);
    msg.setDestination(64580U);
    msg.setDestinationEntity(112U);
    msg.frameid = 252U;
    const signed char tmp_msg_0[] = {108, -5, 106, 10, 47, 93, 20, 28, -78, -83, 28, 108, 95, -40, 43, -108, 76, -120, -53, -25, -110, -4, -114, 63, -27, 88, -119, 59, -98, 4, 62, 38, 66, -115, -28, -67, 94, 96, 15, -47, 87, 23, 74, -115, 51, 12, 126, 88, 4, -116, -112, 120, -79, -31, 19, -73, -50, -103, 55, -14, 106, 16, -20, -96, -18, -77, 57, -56, -106, 45, 73, -83, 67, 7, 41, -92, 4, 18, 104, 61, -18, 11, 6, -118, -6, 104, -4, 46, -96, -42, 30, 7, -76, 27, -12, 56, -29, -101, 110, 8, 68, 2, 118, -26, 90, -10, -1, 77, 79, -7, -34, 61, 84, -31, 50, -120, 49, 108, -101, 53, -19, -55, 70, 88, 64, -2, -111, 114, 68, -117, 37, 22, -106, -118, -2, 76, -88, 24, -84, -128, -11, 27, -125, 85, 21, 78, -72, 103, -58, -112, -80, -121, -39, 29, 114, -37, 67, -118, 88, 3, -10, -120, 96, -90, -86, 42, 7, 69, -42, -79, 75, 34, -42, -35, 57, -64, -37, -64, 26, 73};
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
    msg.setTimeStamp(0.104108208867016);
    msg.setSource(27053U);
    msg.setSourceEntity(186U);
    msg.setDestination(20973U);
    msg.setDestinationEntity(227U);
    msg.frameid = 87U;
    const signed char tmp_msg_0[] = {-96, -68, -45, 22, -83, 78, -68, -55, 100, -28, 67, 36, -91, 0, 7, -52, -108, -10, -128, -13, -54, 19, 10, -18, -23, 101, 8, 117, -50, 56, -80, -114, 86, 93, 25, 33, -29, 55, -110, -52, -114, 94, 48, 92, 0, 27, 34, -32, 43, 6, 68, -107, 23, 61, 63, -56, 38, -107, 35, -19, 27, -31, -57, 96, -109, -88, 117, 56, -33, -76, -78, -40, 61, 76, 25, -78, 103, -88, 24, -40, 105, 11, 85, 35, 72, -78, -85, 43, 108, -67, -25, 10, -66, 58, 101, 105, 90, 106, -33, -59, -59, 111, -36, -18, 96, -19, -41, 58, 90, 78, -9, -102, 41, -91, -42, 63, 78, 46, -64, 72, -76, 22, 31, -40, -56, -79, 80, -64, 110, -90, 54, -95, -18, 118, -9, -83, -75, 119, -121, -110, 25, 92, -122, 36, -68, 91, -17, -83, 66, 55, -35, 12, 73, 96};
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
    msg.setTimeStamp(0.02153355323428885);
    msg.setSource(52669U);
    msg.setSourceEntity(198U);
    msg.setDestination(62047U);
    msg.setDestinationEntity(36U);
    msg.fps = 155U;
    msg.quality = 221U;
    msg.reps = 98U;
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
    msg.setTimeStamp(0.9073615853029947);
    msg.setSource(19478U);
    msg.setSourceEntity(222U);
    msg.setDestination(51310U);
    msg.setDestinationEntity(247U);
    msg.fps = 61U;
    msg.quality = 67U;
    msg.reps = 23U;
    msg.tsize = 188U;

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
    msg.setTimeStamp(0.449413506627515);
    msg.setSource(22565U);
    msg.setSourceEntity(79U);
    msg.setDestination(60720U);
    msg.setDestinationEntity(71U);
    msg.fps = 72U;
    msg.quality = 107U;
    msg.reps = 76U;
    msg.tsize = 77U;

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
    msg.setTimeStamp(0.0005317453555006013);
    msg.setSource(12111U);
    msg.setSourceEntity(89U);
    msg.setDestination(2603U);
    msg.setDestinationEntity(148U);
    msg.lat = 0.8817164473151896;
    msg.lon = 0.022039124806174648;
    msg.depth = 30U;
    msg.speed = 0.6285211719074947;
    msg.psi = 0.5415805439284027;

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
    msg.setTimeStamp(0.09806473396316118);
    msg.setSource(7797U);
    msg.setSourceEntity(179U);
    msg.setDestination(55402U);
    msg.setDestinationEntity(236U);
    msg.lat = 0.32508057271689694;
    msg.lon = 0.714221099506275;
    msg.depth = 19U;
    msg.speed = 0.2746435240811237;
    msg.psi = 0.6951669548196834;

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
    msg.setTimeStamp(0.662650018071958);
    msg.setSource(34923U);
    msg.setSourceEntity(221U);
    msg.setDestination(30087U);
    msg.setDestinationEntity(144U);
    msg.lat = 0.9391966879276535;
    msg.lon = 0.1917114269173663;
    msg.depth = 89U;
    msg.speed = 0.7915675054779108;
    msg.psi = 0.9088044351421466;

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
    msg.setTimeStamp(0.5111972048324124);
    msg.setSource(33060U);
    msg.setSourceEntity(203U);
    msg.setDestination(22712U);
    msg.setDestinationEntity(167U);
    msg.label.assign("WDVTNVJXVVJUHGMJJHHIETSXEDYCGPFIFOBVPXGARDWCQACLRVEGPXFCNAQAFSJNORMKVXINKSBUPEGNYMLOXEDONZMOWYKHIMSYQPBQORNBDZEJWKZTFOZGTIFIHHLTKXGDSCILWPZZLEKMCLOPUMXAOUSQZRSPURPQTRIZGBFDLW");
    msg.lat = 0.5506274540580108;
    msg.lon = 0.7683179945746967;
    msg.z = 0.8446610675149948;
    msg.z_units = 177U;
    msg.cog = 0.31863645419145725;
    msg.sog = 0.43991955394568116;

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
    msg.setTimeStamp(0.8863334429534219);
    msg.setSource(51690U);
    msg.setSourceEntity(117U);
    msg.setDestination(652U);
    msg.setDestinationEntity(183U);
    msg.label.assign("NQPGSTXIJUEZYRXVDSQM");
    msg.lat = 0.8863732535889872;
    msg.lon = 0.04572131691124437;
    msg.z = 0.8259723196324936;
    msg.z_units = 84U;
    msg.cog = 0.17845457909911155;
    msg.sog = 0.8044025925348418;

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
    msg.setTimeStamp(0.7125348498263591);
    msg.setSource(3152U);
    msg.setSourceEntity(162U);
    msg.setDestination(51294U);
    msg.setDestinationEntity(104U);
    msg.label.assign("BCVBWJCMOSHECGTKDWCDCHAOQWDRRRLUYGNQPZZSNUYSSFANEFPQXYJRUXQGIPQVNOWERHRSFTRIPRCDDVDKVEDMOZPAUWCNQJUMAZVWGHECWWZZJMILGFUVAXNGHYTSEEJKJEXNQALPWTQMIATPLISQNPLMEBFZZIXYLOPBNAHGRGMJTUGAZHFNZDBVQHAFFTMLXKBDIBGUBOPOHHFWUKYCFTVYLUXRESYBYYVOCKJKMKIBSXLKTKXI");
    msg.lat = 0.4096204865125198;
    msg.lon = 0.18893630483517465;
    msg.z = 0.06876352257583118;
    msg.z_units = 110U;
    msg.cog = 0.9044545389081657;
    msg.sog = 0.021260664926322392;

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
    msg.setTimeStamp(0.7451498867740404);
    msg.setSource(9859U);
    msg.setSourceEntity(47U);
    msg.setDestination(59882U);
    msg.setDestinationEntity(19U);
    msg.name.assign("LXAVXEHOTFGXVNSZEVJFYHWBEPRLRCJRVLPKOGMUKBERZDLSBXOUJKCYGUYAFJNGETWITMMZQURITBANWPDYIBSCYFNDLMVRKYARZWSSDUMVTBNLAQIRQLTHQHQFCCIAMWSZRLEKPUNQEFEGBDHJODVMZGYOIQHWSUKKLPYNXOXHTWGIPPSWQNOUEALUDSVGXKJYCOKMBETOMCFXQDRVVFNJZNJWHIWCKGIAPC");
    msg.value.assign("IAMIMQNLYKIXFZVBDDAPNSKWZCXHYNHCCHKVOSAKZKQDOMSTTHREHVTIWRZELXENOBGJZWRAWTMRYJLXGDATVLPPANYUTCOVIBKJUSPJYSBONIEJRSWCQDPEOJCKOCYFALRYFHADNMYSGBHCYBLIPEZPULVLGZJUUVXMDRKETVJXQ");

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
    msg.setTimeStamp(0.822883082482572);
    msg.setSource(62737U);
    msg.setSourceEntity(236U);
    msg.setDestination(44315U);
    msg.setDestinationEntity(212U);
    msg.name.assign("WCVHDORKPWLIVXRFGNKFTEDUNEYYHHRPFHKBMMCQWARMTMJLRUAIPBEAWPDZPKTEFYOXOJVPHSYJTTAGINFVBWYEQVHQJONJQJDGIYTCGMMVHTWZIJVMULJXXKDXLZGLOSFFGVLDYLAHOZSCYXAYLCCYDLFDPUTOEBQARANRPVWUSAPSMBTZFBEQEXIDSQJNCGLKUGNSISUNNDBGCAPMRUKFRBKWZGBNQZQUZSIUK");
    msg.value.assign("HGLCEIXEKXOQOYSZAHUCJDSAHHXWAAIUEQTKOZMHARMJMHVJUYZAVOPBAPYZERPXNNGEMUOYJVVFSLUXWLYJCQIEXPCZKNBDDMRTGURKIFTIWPQVJPEZRNFUWVTHKLYEQGWFIBEB");

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
    msg.setTimeStamp(0.6510247484026511);
    msg.setSource(41326U);
    msg.setSourceEntity(77U);
    msg.setDestination(17250U);
    msg.setDestinationEntity(129U);
    msg.name.assign("CTOMOLYJFGUSNVBGICXUPTJPQEJTUDABZSQUXEMPVBDKGJWCNOXWYOQADIRZYBAROVLHBBPZDXESHIKEREIJYKNENXBEOTVGMLPNZHKP");
    msg.value.assign("KXZZBCHYKKOUVXRSVRNWCEZTSSBL");

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
    msg.setTimeStamp(0.9615203216417906);
    msg.setSource(53916U);
    msg.setSourceEntity(235U);
    msg.setDestination(61464U);
    msg.setDestinationEntity(204U);
    msg.name.assign("CDQKWQNJOAGJJYXQCYOCVBJSCFDLKAXLGRNLMQJDLKIMRYKBTENXYIAVEBYNKSTRIBLUXZHYKUCCWDZIRTLBEAPUWFVPZDGYQXWVJBCLTISGJLNHMHHF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZEJIQYDXIDWBRYECISYMQPYYGCGVTVQJJMSGNLCPGRABNOGNRDKDFIEGXEBIXLMFBUHFVNX");
    tmp_msg_0.value.assign("NCTGQIDGJCDAWMIEZIVDJJGSJVFSMLSMTSWXZALOSLSLUNIETBCCSOWYRJATWOBVADHNDBYRJFFVDLOFAYBQNSYVTGQUPICQSEVGHRHZTRTLMZPGVFAZPIKKXR");
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
    msg.setTimeStamp(0.9779258296721691);
    msg.setSource(37909U);
    msg.setSourceEntity(55U);
    msg.setDestination(10066U);
    msg.setDestinationEntity(68U);
    msg.name.assign("GWLRHXRMRBCVOATWTLAEKKJSWRIEWAFUPPQGYCUWSLIFANCXXKVYAIZACCDTQXBZYBMCPFOKAETMAYXSFETPKHSUBRFSZVNRWPXACIHDLKZSYUUMEKJUJFPZSIVN");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ZZYDSODDPMXKAYTCUVBXENUXJKW");
    tmp_msg_0.value.assign("PFXEAOGEGUPDIYMOSDFCIKBRLGAZWFDKJUHHJLRABGUGSSSXMEMRVOEYOQBWZUTYWZPLCMCWCAKTIHSJTRCOYBCMEFDUZITAZEQTSLUCLXWHNVORDBMEDYWBQDUOHXZNYVQLFRSEPTZPAQQTMUFJHAKNIQIV");
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
    msg.setTimeStamp(0.06388449210930669);
    msg.setSource(11318U);
    msg.setSourceEntity(32U);
    msg.setDestination(36620U);
    msg.setDestinationEntity(202U);
    msg.name.assign("WADUIWLGBHMBDFWKZRCTVOMNGDSMKOPMUVPRKDWAMSEFUHQJMRESSMBQPLGVPGIHWEAIMJAXOXCCBYFAINYYSDSMZWATJDAIRTKUVOLTQOUJOBJGURVNJIATDRVCMQNFFHILQINYZYXTQRJVOKZFCXESBLZZXNCKPLHTWKTQX");

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
    msg.setTimeStamp(0.32834363264373456);
    msg.setSource(32181U);
    msg.setSourceEntity(242U);
    msg.setDestination(5626U);
    msg.setDestinationEntity(19U);
    msg.name.assign("CUZNYTWHPZRAVFBAYVKREREKIILVRFVMOEVUKCCHENVDWBKSKJIKXPGRPYIALEBMWISCGZWMOLNYNDPQTXKICUXBCHRQZOOUSONNJTWUDBTFXIPAWPOHHVUDJEOHSGIVUFOTXWQZQCUCPCZHGULNLWMPBYRWIZBJPTSVFMMUJAVMLBSJLYSLFDDMWGJXFLYJRYETDQHAGGNICQBDSOXYBKQQKHLGAEAXPSZXTJFDSOKNTFEGQAMX");
    msg.visibility.assign("DDJJEQVDDUYGTVIVYAUXOOMSGNUAILWKXYCVJQJUQHUOTWFVJYAUBTPRYKBFQFQDMWWZBKXNZCHPDAMJIBFYMLAFGILNIGHKDORSHHDWXOXCEIRNGQPRSQYJXGCPICBGTVHSYFLFHEMKZPVROKZGLUYLDMPDNRJCTZZXHBSTRKXMWLIAQTMNBNVPBSJZFKSVLEGILXRGESBCRRM");
    msg.scope.assign("ZDLCJIHNUTJRKTXITSUUGHZTEADOAHADSGDYVZXI");

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
    msg.setTimeStamp(0.02192474534723854);
    msg.setSource(39150U);
    msg.setSourceEntity(222U);
    msg.setDestination(18055U);
    msg.setDestinationEntity(205U);
    msg.name.assign("ACJEDJMDUFOAQYHWVLXTPLQGPSCZZGLSGFIKFTRVIOPDVQKHMXEQKRMUKZBLLWPMDCSTNHEVHBMOOCCMTOQJJAXCJUCGHVLNZNEVZAZXRIEAFPWOSVPPQRIFQKRWMDUWBINSNHJIZXFARTJZUAQDTFPHUKVIJCKKY");
    msg.visibility.assign("IOKPPVHQOJGBJZQSDITWLVMMJWZXNXYEVKZLNGNGODRDKXDBNCISFYLGUYTABNKMCAEQQALTXPZEYACHOAZJKPDDJWVPXZURFVGHYCPXRBBHSVUWLBORBFETDJMZMQO");
    msg.scope.assign("BWNAVJXEGQYSRXMUEVMKMMAOGNCZUNORYIVQISVKRFYELNINKOPCJWSTFPLKSUHFEJHUUAGUDYVBHGFADUMCWUOQNTJ");

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
    msg.setTimeStamp(0.8686168284712371);
    msg.setSource(33831U);
    msg.setSourceEntity(27U);
    msg.setDestination(8557U);
    msg.setDestinationEntity(81U);
    msg.name.assign("FCTZTGYLLXBFRVQHVGEUOGHUDQRWDKKTCGSQKOUTXNAENLJXQMXNDRVPODUPZUIOXWXYBYJFOPHWVHIBQCKMRCPBYRYKYEZQSJZAEPUSJZQAXIJDESCGETKYNFPVNNZHUDGPMMHFOTRCPJQSIZTNNLBTSSUMLOABIVUHBDGISIPXLOWMHWZEJFWYXMAAGNAMMABHCFAHVMKZOFJKJZLVAJDPVNCDGTLSESGFOIUKRWWRWERRFXLWYCYC");
    msg.visibility.assign("BRMPZUIPQJPRQPHWIDSHDFTAUXGEZ");
    msg.scope.assign("EOGHSQYEPYFURIEAOCRAIVKVHBFGJQGLKTFPVNBZPEMXFTCKPNVJENHIOAJJZWOTJVWFMHJIUYAGTLTDDZAVUSLVSVFIWSXWNRGEYDCGPNYWZHKQFQBXOHLEUVIKCRQNXMSKMODNXUWPUBQZBLAXTZCWGABBFUYZMSBRGRAYMJGJDHMJLFXKHUZOBCIOXROTMWHSCEQPLLKTPSPWDREUFBQCMOINECKAQ");

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
    msg.setTimeStamp(0.8694825802724291);
    msg.setSource(13648U);
    msg.setSourceEntity(177U);
    msg.setDestination(46336U);
    msg.setDestinationEntity(116U);
    msg.name.assign("XAKHWBPWNSBHUNMESPDRCPILSFQBZOOQZLDPFEKQCNPTRHGYGAYIGTSTDUHWVOOMVUQBFMAMVHHKIXEBIYCNJHUUTOYLMLRFDELFZFZENQZCNJAJPLKPBSIMJYSR");

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
    msg.setTimeStamp(0.23047135237742233);
    msg.setSource(42289U);
    msg.setSourceEntity(43U);
    msg.setDestination(21266U);
    msg.setDestinationEntity(102U);
    msg.name.assign("ZHAAQTUQMYCUMEKNAWDZDCISVFGPVIMOOFESETXRROVZTKCCAPBJKISMPRRYSWQJLNZOYFYSEDUXEJEPOLXNMHNFQIWDQDGZFWCLBQOCSGUJWPBPQXLEYDRDJUODXUHLLNOJRMTBRYNIBSLWRXACIHDZUBGIYKUTHYEVOKGGYINXZQAJFPUCZKMMPGANTGUEFZXPHJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SALYKCFUHXBFUHPNGQNELXNMRYGJWVKLWCILWBRRDDWTKVWZQXPZVQBWAQNHAHAHVQQRABMYFSMRBEEDECNDYONOTJWKUPUFYPZYQCOBJXXPYBSOCBMWHQOAJDAFITLAHVSVWDYJKBIRZPUMEVUTLDAJYZYATGUMVOGIUPGTMDEKTXNDIZTCNKGCPQTGNESVLOXCXKZLIMEGOCMJSBFNOSIPZKFJEPCGTUKDFSXHJRVEHRXRQ");
    tmp_msg_0.value.assign("XGCRPCHIRTPEVWGKOYMSQXWMEKMECMEOYXYAEIDYRQIBOAKFWHYCPTGOFFVQGQHPRLNXPBZXWNSNGJURQTAVTIXEHYFVPYSLNDSZRBSUJHWKZJNEWWXCIQPVJQGBMNUWBFVOBZIDGZNDMNFGHWCKJQCNUTALIHDKLXOYSYHBHAKTQUKUDWLYVMMUXREIAEMMJVKCBXSDRSFKELTAJLGSUOJZLFTDNZHJSPVAOVRAF");
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
    msg.setTimeStamp(0.7205958481588638);
    msg.setSource(22504U);
    msg.setSourceEntity(100U);
    msg.setDestination(5046U);
    msg.setDestinationEntity(109U);
    msg.name.assign("EWHLSRNKDMYFIMXOMOPGWCXTLVYIAUCIQYRWDELKOUBZTETVNHJJZVMPZIHOYSFMQPWPOFUNQAFDGXRRSMDWISLGRVUPLBKRAXACYLIBQKVQLEUBGHJFIEFXCPBJYTNHOSHVHTJAJJXIBAHJSUDQJSNGLDCYTTUSVPXKGDAKSNAYKRWVAWRGAXMHIVNEBUWIFQNTMMGNQYZGCTCZVUZWHQUZFF");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("KYVUYDQTNKUOZGJVDUAWVHFKIAQQTBDWQZTCLEGRLDFXZHLOSVVFNQMEWTFROYYNXPZXHBXPTLLFKNQKRUJZTXEEXVTXHDRYZIZBKMUPRZOLSYKGKFEGCWOHULBFNXSRAMEJPFNHOUZCDSJBIIMEOBM");
    tmp_msg_0.value.assign("HKTHEWELTXHODGAKXBWJOADDUCFRNRKMASTNAQJTZKBWKKZUFEJGIVXUSHZETUJIHYIQFHLVYCPECANPDVWQJYPMIZOYRCHNWUFFIZBCQWXNPWARILQMVUWQBPPDIXDDGRFRYWHBGNDNCGNTNZULNSHLSSYVGEACQCSQTOIRLMUZCGIFPROEJPM");
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
    msg.setTimeStamp(0.23243165257937837);
    msg.setSource(31473U);
    msg.setSourceEntity(9U);
    msg.setDestination(59922U);
    msg.setDestinationEntity(7U);
    msg.name.assign("SPERZTHRJQGUQAYBVJGTRFQHCNBQNTYVOHNTBYSXQYIJNERTJAWBQFZMJSYWPDKORPKXCFLUXRIDRVEIFFSZVKA");

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
    msg.setTimeStamp(0.7249124281513882);
    msg.setSource(36650U);
    msg.setSourceEntity(105U);
    msg.setDestination(55958U);
    msg.setDestinationEntity(3U);
    msg.name.assign("YHCQRHVERURLALIEZYNTMPLMVBYFUHKFQRDNNJKTKBGUDWBDGEDTCACKPHXBQCOZKNFEMYNPSWWLSIUCBEMYPVPECGKUWPWWOMNWVQVSJSMSGOXICRJADLTGWFOXGQBUENAXRAAHHCMLCOZPFYDXIJDOJIVUTTZWRQQXZNXCFVU");

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
    msg.setTimeStamp(0.78451571071529);
    msg.setSource(18418U);
    msg.setSourceEntity(196U);
    msg.setDestination(64557U);
    msg.setDestinationEntity(190U);
    msg.name.assign("ZWOZICMLNVLXXWPGRXXSX");

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
    msg.setTimeStamp(0.6080569114776476);
    msg.setSource(57476U);
    msg.setSourceEntity(186U);
    msg.setDestination(51212U);
    msg.setDestinationEntity(77U);
    msg.timeout = 276256504U;

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
    msg.setTimeStamp(0.4919593430554443);
    msg.setSource(57467U);
    msg.setSourceEntity(203U);
    msg.setDestination(5511U);
    msg.setDestinationEntity(136U);
    msg.timeout = 931535162U;

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
    msg.setTimeStamp(0.2484863870890448);
    msg.setSource(41078U);
    msg.setSourceEntity(165U);
    msg.setDestination(19839U);
    msg.setDestinationEntity(117U);
    msg.timeout = 1833857436U;

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
    msg.setTimeStamp(0.6780040782847786);
    msg.setSource(45865U);
    msg.setSourceEntity(136U);
    msg.setDestination(16537U);
    msg.setDestinationEntity(185U);
    msg.sessid = 472782901U;

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
    msg.setTimeStamp(0.9070471424820954);
    msg.setSource(2256U);
    msg.setSourceEntity(22U);
    msg.setDestination(257U);
    msg.setDestinationEntity(3U);
    msg.sessid = 465680054U;

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
    msg.setTimeStamp(0.3739395554739161);
    msg.setSource(21641U);
    msg.setSourceEntity(37U);
    msg.setDestination(16604U);
    msg.setDestinationEntity(154U);
    msg.sessid = 266213340U;

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
    msg.setTimeStamp(0.48412538907368696);
    msg.setSource(20468U);
    msg.setSourceEntity(29U);
    msg.setDestination(43699U);
    msg.setDestinationEntity(123U);
    msg.sessid = 2197505736U;
    msg.messages.assign("BOANCBBPXRIXDYCGKSAGXSZQIOCWZJDWMFUWSXCVIKNOWPJKCKLLJFQUSAZYGBTIDWBLUCTVHSOPJKEWWDREUMZMZSPEFFNUAY");

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
    msg.setTimeStamp(0.29615793409315627);
    msg.setSource(4165U);
    msg.setSourceEntity(67U);
    msg.setDestination(38540U);
    msg.setDestinationEntity(147U);
    msg.sessid = 69672915U;
    msg.messages.assign("GKONTXGMORZKUTHUFWFZHMPGAVRYMQBGRETYEWHKVTAHKTBLJCJCZDJEDLPCLLQVFVLYBPWZQSODPQXUGPFDMQAAYIBJNAWTBPMJHLLIYVUCKKQDOMHSCXOYEXSUTRBM");

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
    msg.setTimeStamp(0.9784407324903623);
    msg.setSource(16417U);
    msg.setSourceEntity(58U);
    msg.setDestination(31933U);
    msg.setDestinationEntity(127U);
    msg.sessid = 569655112U;
    msg.messages.assign("QHLXBTSOESJWKWRNNWWKFFSBCOPDODLQMGHZMWXPLCPSAXKHAQJHKPCUJJKRCIVRZQAIKMQAYGOKBTQERZCZRTODZSFNUVQNIXXS");

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
    msg.setTimeStamp(0.10534624391817216);
    msg.setSource(49929U);
    msg.setSourceEntity(205U);
    msg.setDestination(62026U);
    msg.setDestinationEntity(214U);
    msg.sessid = 2153520385U;

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
    msg.setTimeStamp(0.9063739691063131);
    msg.setSource(64632U);
    msg.setSourceEntity(67U);
    msg.setDestination(389U);
    msg.setDestinationEntity(109U);
    msg.sessid = 1926337869U;

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
    msg.setTimeStamp(0.06222914681373193);
    msg.setSource(3008U);
    msg.setSourceEntity(22U);
    msg.setDestination(8266U);
    msg.setDestinationEntity(65U);
    msg.sessid = 3398706764U;

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
    msg.setTimeStamp(0.9187792050666066);
    msg.setSource(17979U);
    msg.setSourceEntity(221U);
    msg.setDestination(1081U);
    msg.setDestinationEntity(233U);
    msg.sessid = 1215467305U;
    msg.status = 28U;

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
    msg.setTimeStamp(0.061587363524537087);
    msg.setSource(39452U);
    msg.setSourceEntity(68U);
    msg.setDestination(6998U);
    msg.setDestinationEntity(181U);
    msg.sessid = 2014870744U;
    msg.status = 198U;

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
    msg.setTimeStamp(0.7387818454276521);
    msg.setSource(18033U);
    msg.setSourceEntity(24U);
    msg.setDestination(20863U);
    msg.setDestinationEntity(53U);
    msg.sessid = 1914105531U;
    msg.status = 2U;

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
    msg.setTimeStamp(0.7023694083301764);
    msg.setSource(9820U);
    msg.setSourceEntity(55U);
    msg.setDestination(30576U);
    msg.setDestinationEntity(13U);
    msg.name.assign("QFZDVTCIRNESYRZDASEODTEUWJBJNLLYTIMHYXUMSGPGCLTLHWMYMIJTYLFIFFOXKPVTDONXPLCUVJXSRHQKEDFMSYWOBABCMYJMZDKLZUXXDTUHINZQEHGIVNAAGPIEPJGALQYBZQNTOJVWSNQJACBFGGDMBKIARDHUSAMUITUWFKHBKXNCELVCSKRY");

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
    msg.setTimeStamp(0.5110427703900483);
    msg.setSource(30653U);
    msg.setSourceEntity(98U);
    msg.setDestination(3U);
    msg.setDestinationEntity(82U);
    msg.name.assign("DPGOYVSFVNUNTTJ");

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
    msg.setTimeStamp(0.08591616717717232);
    msg.setSource(45184U);
    msg.setSourceEntity(229U);
    msg.setDestination(16374U);
    msg.setDestinationEntity(52U);
    msg.name.assign("PKQLTWNXWREPMSQDIPAUDHQWSWGSTMSXNOKRCQBHDHIJGZCCONLEZCOWRTAMYXJAYMMHRHNVEDYSFDQYVUZSVAJOUGXLZIZKLZNTRBGLLHAAYXMGYEBBIQOBIEUOKOEBNZKIHFQJVGWZRYYQJUGUFUA");

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
    msg.setTimeStamp(0.426868831820464);
    msg.setSource(47070U);
    msg.setSourceEntity(44U);
    msg.setDestination(35176U);
    msg.setDestinationEntity(180U);
    msg.name.assign("HOGFDLEDLSAFWSANDFQUZUDZGLWOTKCJNTRPJFZTNOHPYXTKBSCIYVCZHYEXHBEKJRUENCRBKLMHXZNOEZE");

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
    msg.setTimeStamp(0.3021650461301121);
    msg.setSource(39126U);
    msg.setSourceEntity(163U);
    msg.setDestination(7617U);
    msg.setDestinationEntity(227U);
    msg.name.assign("QFSDHPFXBNIQUFKTIQOJCWDVLCFCUUPXKZWUDMIKRWINSLDASQMRKFBJQXHHYSXEBCOSHHCJUNAGRUTEJYFPFLVSJKEDMVRGDSBWCEMTQPWYXXXYRMNFCBNTYREALFVLAPMHIYBAIVNEBTGEUSVXAHUOZETAJOQMLBZDZUJGPDNLOOXACVZWAQJGALIHSRNQTZUJYDDVTGTMYIMRJWPWMIKEPHXVO");

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
    msg.setTimeStamp(0.6981781002947104);
    msg.setSource(19922U);
    msg.setSourceEntity(166U);
    msg.setDestination(42368U);
    msg.setDestinationEntity(50U);
    msg.name.assign("IRHQFZVNOMKTGDVDYWECADZCKYLZZLBARNWSQQULJITINVGJZXAXVTKCUKMYHUHGAKENXJIJMUFSBOZVVORNETJFM");

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
    msg.setTimeStamp(0.10352607400526337);
    msg.setSource(43149U);
    msg.setSourceEntity(2U);
    msg.setDestination(23987U);
    msg.setDestinationEntity(114U);
    msg.type = 56U;
    msg.error.assign("MBDGSGYMVMBQLFFLKGFJZCORGNPKPUHGYATMEHAYNBRFKGXOACMITJBUQFMRYTHCRBMGIEODQSTBYLENKRFLDNLVPHSYJCCIXGDDJPXKWSRLUONRQBYKSXUEAODWHSQEOXXDUCURKBVAZWWEUWHLTXITOQCDQMGPKKSZAJZHSCKMOTNSUJHHECPWYPLVYTEPVATXWF");

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
    msg.setTimeStamp(0.9858498201482401);
    msg.setSource(37369U);
    msg.setSourceEntity(195U);
    msg.setDestination(18623U);
    msg.setDestinationEntity(99U);
    msg.type = 73U;
    msg.error.assign("AWJYKHEZEYYUQEPESYFAGLJGEJZQEWMNFMLRVTEPEZOZKWJGRXUUFDJZIDRXUQIVHQISGZLMDWYBGNNBVZLUHTCYAAHDCOIHCYFCTAKFASZSPGNDMJYGOFCYSUILVVASXWKLTCKAPKENTVRTIRTCUKWDWPGCINVQBVBKZHQCGABMHISLUPBSHPRWRCXLTLJXAVUPNNSMBXEOLYWMBRXDKBVGJXMIQQPDOHOQRXOTJJO");

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
    msg.setTimeStamp(0.8110408629764441);
    msg.setSource(28784U);
    msg.setSourceEntity(134U);
    msg.setDestination(30942U);
    msg.setDestinationEntity(182U);
    msg.type = 68U;
    msg.error.assign("XOZYBZRZJQEZBYMNFWSEIMDDSKRYMATEIGIPKSBUIDYDQLKETQRWJOSMHPGHWUMEJRNFDYBKGCVJBVIAUYDMRFPXDXSYGZPXHIAEUKUBDUGFMARPWHXSLFLAWGETTOKIUOJTQVQIFVSVUNKJDAFSGWZER");

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
    msg.setTimeStamp(0.7965262733665558);
    msg.setSource(32760U);
    msg.setSourceEntity(164U);
    msg.setDestination(27019U);
    msg.setDestinationEntity(121U);
    msg.seq = 9486U;
    msg.sys_dst.assign("PGECOBQYOTFDFTHQSABHXDLQJKGUXVPEPKNKRYVKJSYGFIEZHACNQFQBNVOVCSZXAEZSIBHBSWPBZCULLVBIYJCFKTGPAPAQHLIVTWEYYFRUBJVOZIYPEMMDDLXGJXLGKZQMDUWMIMTUXIPNWIRKZACMKRXLCGKZLEXRRRAJ");
    msg.flags = 68U;
    const signed char tmp_msg_0[] = {105, 108, 14, 61, 23, -89, 79, -115, -86, -92, -36, 105, 46, -90, -121, -50, 35, 49, 58, 74, 40, -8, -69, 56, -76, -30, 116, -119, 64, -118, 33, 78, -101, -74, 100, -119, 63, 33, -52, 19, -61, -5, 71, 96, 125, 44, 85, 93, -31, -115, 87, 70, 81, 37, 120, 89, 2, -37, -114, 92, 39, -47, 84, 81, 86, -64, 119, 79, 95, 78, -34, -5, -127, 75, -36, -24, -3, 8, 54, -67, -86, -125, -108, -124, 65, -16, -75, -35, -101, -69, -112, -126, 38, 37, 38, -6, -93, 54, -107, -8, -59, 1, 96, -20, -34, -94, -71, 106, -75, 6, 124, 124, 9, 91, 57, 124, 123, 78, 73, -111, -11, -97, 119, 21, 66, -14, 52, -16, -45, -81, 76, -72, -71, 47, 90, 51, 76, 111, -70, 38, -97};
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
    msg.setTimeStamp(0.9430423238629022);
    msg.setSource(21781U);
    msg.setSourceEntity(142U);
    msg.setDestination(48369U);
    msg.setDestinationEntity(33U);
    msg.seq = 21386U;
    msg.sys_dst.assign("AXUNEUGJWSNMGFNGDILOULMKI");
    msg.flags = 224U;
    const signed char tmp_msg_0[] = {64, -78, -3, 59, -96, -21, 32, -34, 110, 7, 95, 30, 12, 72, -126, -29, 102, 65, -27, 15, -81, -90, -104, 120, 10, -56, -23, 51, -96, 102, 56, -13, -16, 31, 50, -55, -88, -86, -46, 84, 13, -123, -121, 120, -105, -9, -100, -18, -5, -49, -12, 56, 119, 106, 2, 104, -80, -21, 55, 1, 60, -12, 39, 87, 76, 20, -99, 22, -87, 62, -88, -51, -124, -14, -7, 98, 93, 80, 89, -85, -37, 81, -6, -16, 66, 31, -41, 32, -20, 63, 114, -64, -24, -19, -83, 0, 39, -2, 82, 110, -45, 92, 26, 79, 9, -76, -25, 122, -48, -38, -9, -80, 55, 34, -29, -37, -108, -33, 58, -127, -14, -37, -87, -57, -18, 83, 49, 85, -20, 40, -6, -37, -87, -40, -85, 90, -50, -118, -51, -117, 44, 76, -49, 107, -17, 31, -57, -67, 51, 116, -34, -101, -93, -100, 41, -42, -44, -107, -110, 118, 120, -50, -31, 100, 5, 9, 85, -88, 29, 34, -16, 84, -65, -96, -79, 89, -111, 92, 103, 54, -90, -61, 104, 121, 5, -102, 16, -116, -60, -86, -121, 123, -56, 16, 11, -11, -60, 34, 115, -126, -6, -90, -12, 72, -24, 46, -108, 39, 94, -90, 44, -81, 79, -5, -71, -80, 115, -6, -61, -20, -119, 125};
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
    msg.setTimeStamp(0.956037762475624);
    msg.setSource(44593U);
    msg.setSourceEntity(0U);
    msg.setDestination(65129U);
    msg.setDestinationEntity(173U);
    msg.seq = 30870U;
    msg.sys_dst.assign("ITEEUGJVQBSIRRMQKYVCJKKZFEWWYMCNZKYUZXSQQVFXJONLUHJJRERBRRNINDYASDHQNWCWWXQUUFFSPZBDJDPLHZEUUBGLDLPLKNGMEPUYMVJIWZYYIMKAIVNZCGPFRRSFALUMHJOKQGHXWHMBBVQSOCVTFVCOPISSGFAPVNASDLOXOKQXCBZLTTMXTMGAGKHAWXTOKCJBZPDIHAQMBYWLAHTOTNEP");
    msg.flags = 170U;
    const signed char tmp_msg_0[] = {-85, 90, -50, 105, 33, -123, -49, 68, -5, 110, 98, 53, 51, 16, 58, -12, 50, -64, -66, 58, -6, 69, -32, 32, -10, -93, -16, -62, 73, -8, 103};
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
    msg.setTimeStamp(0.15967608739004124);
    msg.setSource(952U);
    msg.setSourceEntity(35U);
    msg.setDestination(25842U);
    msg.setDestinationEntity(13U);
    msg.sys_src.assign("KAPNKFIXAEDAVYRYAGRPIXHJYQKXZSSVIZXCFSIGATWYTRWLTWXITWSIPUYHUAMDJOBGQBHMTGC");
    msg.sys_dst.assign("AETCSFMJUVHUPORNLOWZOSSEIHTAOXPQLIBJVJTUVXBQNNXDMTDMKKWVRRMIBQGWVTPMEVDUWYZJGFDZJIXYHERCLZUDZGYPVDPBKCNKMPHTLMEBHBWQKRLIFCBSRRFZQAWVLJCDNXOOVQAEGXXSGCXKHTWIBNEPAMOTIZDPQTYLZJ");
    msg.flags = 172U;
    const signed char tmp_msg_0[] = {45, 62, -85, 45, -40, 67, -5, -55, -115, 48, 63, 85, 23, -2, 32, 48, -58, 111, -59, -77, 13, 103, 111, -109, -88, 103, 74, -82, -30, 29, 57, 95, 109, -49, 43, -35, -83, 121, 41, 96, 43, 55, 32, 106, 53, -8, -118, -26, -105, -57, -50, 106, -3, 118, -31, -116, -81, 111, -104, -91, -115, -58, 46, -62, -21, 29, -106, 45, -127, 70, 7, 94, 116, -118, 60, -109, -63, -80, -111, 18, -56, -76, 89, 89, -44, 94, 53, 124, -118, -50, 86, -24, -114, 88};
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
    msg.setTimeStamp(0.12777617983322187);
    msg.setSource(1899U);
    msg.setSourceEntity(152U);
    msg.setDestination(17466U);
    msg.setDestinationEntity(111U);
    msg.sys_src.assign("AWJPNCZWOQTOSFEYKJKZUKXUVJYUPDRMNYEUARCZEDFIFZRXDWIXMVUGTTTOJLRCCBLNVGHJVFQATFGKMHVSNAYXEQVYEWYNLZYSJDSD");
    msg.sys_dst.assign("UXJUOMQPXOZAHTUDZRJAQDCIPWRLIJMFRUENQEPXPGSGTDSDHYIMWOODQHEHRYOWUILLJVGBZEQLSATNUHCKKWYGRRWIIPAVVFUXODCKDWTZEKQKCFPBJJTKBPKLDENMOEHLYSZENZMYMAQRJB");
    msg.flags = 150U;
    const signed char tmp_msg_0[] = {99, 41, -60, 4, -122, -19, -11, -12, 38, -13, 88, -47, -28, -10, 108, 36, 45, 99, 118, -72, -101, -16, -16, 24, -111, -104, 20, -23, -80, 20, 7, 6, 109, -95, -23, 31, 72, -6, -29, -128, 23, -5, -107, -53, 52, 90, 118, -69, 88, -19, -128, -113, 17, -12, -26, 101, 38, 60, 22, -100, -51, 73, -38, 85, 74, -15, -113, -37, -73, 113, -85, -44, -70, -5, 11, 0, 83, 123, -48, 97, 105, 14, -14};
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
    msg.setTimeStamp(0.08467340344199714);
    msg.setSource(17826U);
    msg.setSourceEntity(187U);
    msg.setDestination(58258U);
    msg.setDestinationEntity(171U);
    msg.sys_src.assign("SGAXGAYGEVUWECILQVOXYYFCFSKUXWWYPCSLPCGVEOVBQIPTIZAZXMAOHGWSTFQJMIXTGMGMEHZTRQDJDIRUQIKZKKOCHJTHPAPBMIWUUCXZH");
    msg.sys_dst.assign("EKSNGDQLKECXFFEBOADBHQLUFUPXCWRMQRRBBFXABQJKXJSLWPGURIOHKRZHYTJNTIWOWJTYYSSVPIDNSKBJCNMANBKTXPDAGMDIXRCVYELSZXUSTGICEIJADZZIUHYUPYCNHLYOOFKVXDCSJWQNLLGSRKTUCTKGJE");
    msg.flags = 205U;
    const signed char tmp_msg_0[] = {-20, 65, 53, -112, 2, 45, 118, 39, 38, -73, 11, 3, -85, -12, 16, 110, -51, 0, -58, 0, 39, -40, -127, -1, -125, -66, 67, -26, -58, -8, -29, -101, -55, 120, -68, -18, -103, 56, 7, -15, -55, -23, -76, -44, -112, -36, -52, -61, 25, -33, 105, 80, -22, 42, 7, -72, 44, -65, -128, 54, -64, -109, -125, -16, 41, -94, -26, 98, 43, 32, -47, 77, 33, 54, -23, -115, -81, -17, 17, -78, 88, -34, 17, -57, -112, -85, -16, -36, 7, -108, -87, -29, -75, -90, 93, 120, -55, -72, 33, -78, -118, 96, -36, -81, 91, 10, 44, -26, -10, -32, -51, 97, 52, -123, 56, -1, 116, -75, 95, -101, 13, -74, 92, 45, 43, -94, -68, -54, 113, 80, 123, 90, 100, -38, -14, -22, 45, 43, -26, 4, 35, -115, 91, 55, 89, -59, 15, 2, 62, 63, -95, -32, -14, -18, 76, -59, -87, 81, -57, 23, -41, 118, -5, -100, 126, -82, -56, -33, 14, 113, 124, -64, 124, 88, 2, 11, 30, -123, 70, -40, 114, -44, 122, 76, 30, -90, 31, 56, 59, 74, 115, 18, -77, -2, 9, 120, 40, 85, 11, 29, -72, -85, -8, 109, -104, 56, -42, -107, -84, -29, 124, 20, -87, -14, 119, 16, -11, 67, 12, 126, -98, 39, 88, 65, -71, 115, -111, 26, 27, -53, -20, -10, -124, 66, 19, -49, -7, -8, -78, -18, -9, 122, -54, 53, -34, -85};
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
    msg.setTimeStamp(0.9158453897334611);
    msg.setSource(34987U);
    msg.setSourceEntity(41U);
    msg.setDestination(13059U);
    msg.setDestinationEntity(248U);
    msg.seq = 16375U;
    msg.value = 76U;
    msg.error.assign("WBLRHJPAESEWQPNONFPBKCEHRVKINYZMFJGEGFKZQUJKCZDYMREBDKZCZQLSTCESTASZOGHCNDAXGSFIINEJWLAYXBAHNYXYWIRPOTYVRWNAXM");

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
    msg.setTimeStamp(0.7101979129682275);
    msg.setSource(4807U);
    msg.setSourceEntity(161U);
    msg.setDestination(53904U);
    msg.setDestinationEntity(194U);
    msg.seq = 8909U;
    msg.value = 231U;
    msg.error.assign("CWXIVSDFDPTTXJRMJMOHPUHADCQZSVVKOQENYIXFGNRAVTOQEXWMIGMLHRFNSKGPJYBSKSSBUVQUSEOXICSCWZTDDIBYNNEVUGTEBOHRSPAVFZMZHFRZHBOFWLGAMXIMWTZUZONKSAJAXZHEHEPKXIYVWAHBQFGKUJXKCOYDLOQLYZFLCYNBAGOC");

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
    msg.setTimeStamp(0.38194746734937246);
    msg.setSource(58523U);
    msg.setSourceEntity(230U);
    msg.setDestination(60463U);
    msg.setDestinationEntity(177U);
    msg.seq = 55444U;
    msg.value = 189U;
    msg.error.assign("EIAUXSJGEUIFUZKTUUMEESXRWZTLCOUSJQTWFJSXKTZHIFMGJXNNMNRCCWTTVWGNKLNOQETRYAVQXIJXBHHKEXNMBYCDRJASBXEGHVHYZBWTLSBMGSIDLFRLMLAJXYYHOOWFOZQKQAOWLIXSHRORSAPQGPPDKNNPJQFYDWMKUNQUMBDCFFFVEOVGLLEJCYOZTRDMZDDZZWVIKIVADPNCVCHHSGTYUQVRRPHIBKMOYPWYPCIZLPUVABPBJ");

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
    msg.setTimeStamp(0.1409770523866266);
    msg.setSource(41021U);
    msg.setSourceEntity(67U);
    msg.setDestination(2660U);
    msg.setDestinationEntity(111U);
    msg.seq = 60132U;
    msg.sys.assign("HASDORAEWPRA");
    msg.value = 0.4344612506885531;

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
    msg.setTimeStamp(0.07523261686601224);
    msg.setSource(59256U);
    msg.setSourceEntity(150U);
    msg.setDestination(4836U);
    msg.setDestinationEntity(137U);
    msg.seq = 24156U;
    msg.sys.assign("YMHMBFQZDEKHUKBUHNALWLXCQGDKNTRESOZVTGWHPBGLXIKBTPZOKOOPULSLZQPJFKPYIIRYZNXHOAPQWSRBAXQFGSUUZIZYJITTWLAXPFRBSANONJCRRNXOLFGNUQKVHROACIMBIGLV");
    msg.value = 0.5867698555147552;

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
    msg.setTimeStamp(0.9454626900921851);
    msg.setSource(14409U);
    msg.setSourceEntity(146U);
    msg.setDestination(2692U);
    msg.setDestinationEntity(195U);
    msg.seq = 29278U;
    msg.sys.assign("NCRQMPUORZUIGNHXJIUUMJCWELWBZRQXHHDTNFQJLHHIYEJWJRBMLICZPFAMSIKAWAZCWVPBTQBTXPTECJYFYMEVKENQXRODNOPDPSKLBDDJYZSIKBGNMYZRDYPCXOUFCNAWKBCOLFLVSKVDENQFQAEXHPAVOXTIHVDLNAIVHGGOYWRRZUCOGPJZBOXKSBDPQIZZYMGGAGEMTSTUAFSXGITKTLRHKDWLSHUESORYVQFLJTKCUVMVJSYMWNXF");
    msg.value = 0.5547919788471907;

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
    msg.setTimeStamp(0.303355148613221);
    msg.setSource(22755U);
    msg.setSourceEntity(243U);
    msg.setDestination(13594U);
    msg.setDestinationEntity(83U);
    msg.seq = 39358U;
    msg.sys_dst.assign("FHWCJJLBCISQVAHBMUNBVQPLATIWMTUGKGRYQEIPFMPYKKFMKCATZRUKMASRZGLNDBXGFPGFJUVELQVRQXDQHGHJOPJRYDWXJFNCAIKNHEYLLYIJIDAEGKTY");
    msg.timeout = 0.08402183094890847;

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
    msg.setTimeStamp(0.3124063836623855);
    msg.setSource(31888U);
    msg.setSourceEntity(64U);
    msg.setDestination(38572U);
    msg.setDestinationEntity(94U);
    msg.seq = 24650U;
    msg.sys_dst.assign("JLTQYKNPFCFMLKVPQPJJJLGRQIPOYGTYEXCHEBUMAWYKQSHFIQARNBGRUMRAVOBTEUTSEMYJAHIFWAWSYRMA");
    msg.timeout = 0.19296749612238173;

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
    msg.setTimeStamp(0.48794420432581354);
    msg.setSource(42327U);
    msg.setSourceEntity(95U);
    msg.setDestination(59168U);
    msg.setDestinationEntity(64U);
    msg.seq = 15576U;
    msg.sys_dst.assign("JJJUSNMNQUNRLGYFCLEQVUXUJRKTHXVDBXAORGORFCWWFFDEKIZDVGTQDMQEAUZIWLZWIUSCFBSBDDHLODQGGLHLQKTJTOWGEAEITVFTVJKCK");
    msg.timeout = 0.5710469094926885;

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
    IMC::UamJanusPacket msg;
    msg.setTimeStamp(0.5968602471543186);
    msg.setSource(31705U);
    msg.setSourceEntity(34U);
    msg.setDestination(47965U);
    msg.setDestinationEntity(91U);
    msg.seq = 64855U;
    msg.op = 221U;
    msg.baseline_flags = 96U;
    msg.time = 0.08429053785178708;
    msg.class_user_id = 196U;
    msg.application_type = 146U;
    const signed char tmp_msg_0[] = {0, -33, 17, -123, 79, 92, 84, 35, -104, 33, -11, 108, -63, 31, -64, -12, 74, 120, -118, -5, -109, 73, -123, -74, 126, -6, 103, -4, -2, -35, 72, 33, -105, -77, -3};
    msg.adb.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.error.assign("QLCHUZLTKDYGVMZKQCRLWCDHBRHUJMTYHAALKWPYKEYWLTTFVNPYGKDOSFEQBIPQRIMEFJGXZBZKGJUTQOMWXSZLAYSHUJMIOKEZUCMSJLGMKOYDPNUCAABIPTJEQJFSNPOWQDNXVJWHORYTBAKMEVDAFMOXUORVKFXPWHNVXPJVSUGNVWLGPXFWBDQOLYMXEBIIRQHZBCVSFXXHGCRBCNICOIENN");
    msg.length = 130U;
    const signed char tmp_msg_1[] = {87, 37, -112, 4, 76, 42, 24, 4, 86, 3, -46, -25, -62, 107, -94, 81, 39, -80, 94, -87, -63, -35, 40, -25, -79, -34, -61, -125, 99, -113, 15, -16, 99, -114, 47, -9, -5, 76, 14, -5, 124, 7, 6, -118, 79, 1, 109, 23, -7, -56, -93, -52, -55, 68, -14, -14, -13, -61, -13, -90, -118, -19, 38, 109, -111, 114, 92, -95, 120, -97, 108, 74, 90, 113, -20, 30, -128, -21, 101, 85, -42, -57, -76, 125, -83, 115};
    msg.cargo.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamJanusPacket #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamJanusPacket msg;
    msg.setTimeStamp(0.2280398678426936);
    msg.setSource(60094U);
    msg.setSourceEntity(253U);
    msg.setDestination(39921U);
    msg.setDestinationEntity(94U);
    msg.seq = 63904U;
    msg.op = 51U;
    msg.baseline_flags = 108U;
    msg.time = 0.021219002964285805;
    msg.class_user_id = 0U;
    msg.application_type = 69U;
    const signed char tmp_msg_0[] = {113, -5, 100, -72, -70, 90, 31, 99, 31, -108, -50, -108, -48, 72, -107, 16, -116, -35, -62, 75, -100, -54, -33, -45, -120, 1, -26, 87, 111, -98, 42, -125, -42, 84, 123, -110, -91, 32, 55, 103, -50, -66, 68, 66, -10, 85, 114, 116, 121, 98, 53, 4, 116, -73, 78, 44, -70, 8, 94, 16, 123, -42, -12, 1, -16, -2, -36, -61, -68, 38, -127, 118, -60, -84, -59, 35, 112, -27, -71, -63};
    msg.adb.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.error.assign("KNRDARIYPOLVGNRHQZBAGMRZUXQSQHJDPERTBEMFVYYHGAOYQPQNPSLKFTCZKCXWRICVFGPLTAUUVZIFUFHQFCGRTUADCRVPIVIZNYNFOCUBPXTHY");
    msg.length = 136U;
    const signed char tmp_msg_1[] = {-56, -73, 58, 123, -105, 7, 69, -29, 21, 102, -61, 52, 43, -84, 19, -123, 47, -70, -48, 53, -46, 2, 93, -112, 60, -74, -25, 19, 30, 58, -5, -77, -102, -75, 23, -111, -15, 18, -60, 70, 74, 62, 10, -57, -78, 102, -70, 124, 5, -101, -123, 19, 77, -107, 99, -93, 26, -14, -94, -100, 123, -80, 102, -59, -58, 62, -121, 14, 24, -126, 102, -26, 51, -50, -113, 11, -1, 108, 0, 76, -63, -87, -1, 80, -69, 51, 77, 45, 68, 89, -75, -114, 17, -55, -43, -33, -110, 124, 101, 38, -63, -71, 37, -15, 87, 82, 90, -15, 114, 4, 77, -122, 69, 12, -110, -102, 97, -35, 12, 25, -115, 42, 10, 113, -28, 118, 57, 44, 51, -8, 12, -61, 15, 43, 44, 55, -41, -64, -79, 99, -59, -74, 45, -86, 84, 95, -77, 111, -56, -68, 125, -87, 119, 121, -104, -49, -61, 0, 90, 94, 118, 5, 19, 42, 14, -93, 75, -37, 43, -67, 107, 80, -76, 118, -103, 96, -46, 116, -112, -26, -52, -35, 108, -53, -32, 122, 11, 91, -111, 95, -12, 117, 120, -83, -30, -49, -109, 49, -19, 30, -53, 124, 113, -33, -122, -79, -122, 38, -27, -60, 122, 94, -4, -110, 65, 123, -10, 41, -86, 108, 48, 122, -85, -23, 117, -19, 111, -37, 63, -89, 70, 120, 11, 108, -114, 13, -1, 65, 14, 65, -24, -120, -113, 109, 109};
    msg.cargo.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamJanusPacket #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamJanusPacket msg;
    msg.setTimeStamp(0.9706744639415669);
    msg.setSource(56369U);
    msg.setSourceEntity(37U);
    msg.setDestination(42309U);
    msg.setDestinationEntity(90U);
    msg.seq = 21249U;
    msg.op = 155U;
    msg.baseline_flags = 209U;
    msg.time = 0.4334152348146253;
    msg.class_user_id = 64U;
    msg.application_type = 221U;
    const signed char tmp_msg_0[] = {116, -33, -107, -115, -61, 69, -34, 31, -2, 106, -66, 73, -26, 36, 109, 62, 3, 70, -93, -74, -2, -81, 3, -25, 1, -97, -50, 50, -94, -1, -88, 72, 112, 67, 11, 100, -58, -107, -81, 65, -46, -52, -10, 81, -68, 74, 40, 40, -122, 124, -65, -57, -37, 38, -76, -35, 84, -17, 53, -51, 58, -86, -34, 14, -73, -59, -3, -14, -7, 68, -31, -15, -31, -10, 46, -33, 40, 102, 5, -64, -74, 13, 89, 80, -23, 9, 72, -91, -82, 57, -51, -70, 37, 51, -73, 32, -102, 64, 123, 33, -90, -41, 65, -106, 52, 61, 19, -96, -56, 75, -105, 86, 73, 41, -99, -49, 1, 93, -77, -89, -11, 116, -1, 60, 43, 123, -19, 46, -66, 103, -101, 66, -23, -73, -108, 83, -113, 77, -85, -52, 54, -115, -48, 123, -97, -52, -118, -1, 114, -24, -56, -56, -27, 80, 94, 80, -84, 39, 91, 114, 9, 108, -44, 79, -47, 125, -116, -98, 0, 87, 6, 23, -89, 103, 124, -105, -87, 117, -14, -118, 116, 86, 63, 7, 105, 81, -90, 50, 9, 121, 64, 44, -8, -71, 20, 23, 37, 111, 72, -98, -90, -10, 113, 53, -115, -39, -31, 86, -2, -38, -51, -113, -62, 108, 114, -78, 114, 23, -15};
    msg.adb.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.error.assign("RDQYJXRHBGPBVPMTNLKSYCYTLJZJUYTOPIKHCGHLYMSARXPTJQSSFHHQCWKPSRXWYZIBFQOCPCOCSQWWDHF");
    msg.length = 109U;
    const signed char tmp_msg_1[] = {-93, -21, 21, -80, 107, 37, 50, 75, 122, 100, -117, 114, -91, 101};
    msg.cargo.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamJanusPacket #2", msg == *msg_d);
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
    msg.setTimeStamp(0.7896829768717684);
    msg.setSource(30604U);
    msg.setSourceEntity(37U);
    msg.setDestination(36987U);
    msg.setDestinationEntity(48U);
    msg.action = 132U;
    msg.longain = 0.6758831985981305;
    msg.latgain = 0.2948262838917024;
    msg.bondthick = 45993681U;
    msg.leadgain = 0.6630378761939913;
    msg.deconflgain = 0.6197525760945899;

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
    msg.setTimeStamp(0.3715886879667877);
    msg.setSource(37212U);
    msg.setSourceEntity(141U);
    msg.setDestination(59932U);
    msg.setDestinationEntity(140U);
    msg.action = 94U;
    msg.longain = 0.8686208334392211;
    msg.latgain = 0.39413429674347056;
    msg.bondthick = 1328095361U;
    msg.leadgain = 0.1414224138650777;
    msg.deconflgain = 0.3559975396557995;

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
    msg.setTimeStamp(0.8888947774132117);
    msg.setSource(61638U);
    msg.setSourceEntity(221U);
    msg.setDestination(55861U);
    msg.setDestinationEntity(208U);
    msg.action = 126U;
    msg.longain = 0.29673488807081005;
    msg.latgain = 0.8222400817143556;
    msg.bondthick = 1378219020U;
    msg.leadgain = 0.2770292750746284;
    msg.deconflgain = 0.0590270303539383;

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
    msg.setTimeStamp(0.7400895561380457);
    msg.setSource(5341U);
    msg.setSourceEntity(219U);
    msg.setDestination(54048U);
    msg.setDestinationEntity(7U);
    msg.err_mean = 0.6356012367262632;
    msg.dist_min_abs = 0.4798926115302037;
    msg.dist_min_mean = 0.12227394685540804;

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
    msg.setTimeStamp(0.2729031853087165);
    msg.setSource(36349U);
    msg.setSourceEntity(153U);
    msg.setDestination(11005U);
    msg.setDestinationEntity(25U);
    msg.err_mean = 0.9246270886646555;
    msg.dist_min_abs = 0.9313279867805536;
    msg.dist_min_mean = 0.5966727081371933;

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
    msg.setTimeStamp(0.09889689983879935);
    msg.setSource(4003U);
    msg.setSourceEntity(165U);
    msg.setDestination(32477U);
    msg.setDestinationEntity(178U);
    msg.err_mean = 0.9480003219270532;
    msg.dist_min_abs = 0.9027287392534035;
    msg.dist_min_mean = 0.4138260557665314;

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
    msg.setTimeStamp(0.9357843758541414);
    msg.setSource(33969U);
    msg.setSourceEntity(3U);
    msg.setDestination(47234U);
    msg.setDestinationEntity(171U);
    msg.action = 135U;
    msg.lon_gain = 0.07701172688835867;
    msg.lat_gain = 0.14509677582781955;
    msg.bond_thick = 0.49836462566092254;
    msg.lead_gain = 0.462559086418752;
    msg.deconfl_gain = 0.3968533063739176;
    msg.accel_switch_gain = 0.21661381452720274;
    msg.safe_dist = 0.3420609646527676;
    msg.deconflict_offset = 0.6736408960976422;
    msg.accel_safe_margin = 0.4394096583026986;
    msg.accel_lim_x = 0.7452741488397309;

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
    msg.setTimeStamp(0.002553705855390609);
    msg.setSource(14285U);
    msg.setSourceEntity(18U);
    msg.setDestination(3257U);
    msg.setDestinationEntity(6U);
    msg.action = 82U;
    msg.lon_gain = 0.036260836248955264;
    msg.lat_gain = 0.9764738988660029;
    msg.bond_thick = 0.6304095312253171;
    msg.lead_gain = 0.9277188999584414;
    msg.deconfl_gain = 0.9686774436105042;
    msg.accel_switch_gain = 0.8648234590405307;
    msg.safe_dist = 0.6813529906743336;
    msg.deconflict_offset = 0.9713224888433989;
    msg.accel_safe_margin = 0.8401524128459084;
    msg.accel_lim_x = 0.30440852858863865;

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
    msg.setTimeStamp(0.9768616861846257);
    msg.setSource(26680U);
    msg.setSourceEntity(151U);
    msg.setDestination(46361U);
    msg.setDestinationEntity(105U);
    msg.action = 251U;
    msg.lon_gain = 0.19225456348716574;
    msg.lat_gain = 0.919810778020306;
    msg.bond_thick = 0.27057807975382453;
    msg.lead_gain = 0.07181918497555972;
    msg.deconfl_gain = 0.46148166957323067;
    msg.accel_switch_gain = 0.7203412993387921;
    msg.safe_dist = 0.7952688353180072;
    msg.deconflict_offset = 0.27018289917881133;
    msg.accel_safe_margin = 0.35641273505744353;
    msg.accel_lim_x = 0.855784447228679;

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
    msg.setTimeStamp(0.2000379899454846);
    msg.setSource(22295U);
    msg.setSourceEntity(80U);
    msg.setDestination(52400U);
    msg.setDestinationEntity(186U);
    msg.type = 38U;
    msg.op = 151U;
    msg.err_mean = 0.8598913791089583;
    msg.dist_min_abs = 0.2994518578901334;
    msg.dist_min_mean = 0.7758733949100636;
    msg.roll_rate_mean = 0.2739425127984537;
    msg.time = 0.019517009517891815;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 5U;
    tmp_msg_0.lon_gain = 0.8958631754613086;
    tmp_msg_0.lat_gain = 0.44055958892756986;
    tmp_msg_0.bond_thick = 0.06398071541184758;
    tmp_msg_0.lead_gain = 0.32972540822184904;
    tmp_msg_0.deconfl_gain = 0.7932476130590836;
    tmp_msg_0.accel_switch_gain = 0.7072077243223676;
    tmp_msg_0.safe_dist = 0.9593364475004348;
    tmp_msg_0.deconflict_offset = 0.5808973117055863;
    tmp_msg_0.accel_safe_margin = 0.3461317228702112;
    tmp_msg_0.accel_lim_x = 0.3835431986807587;
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
    msg.setTimeStamp(0.41007610595851196);
    msg.setSource(4730U);
    msg.setSourceEntity(221U);
    msg.setDestination(59272U);
    msg.setDestinationEntity(150U);
    msg.type = 23U;
    msg.op = 48U;
    msg.err_mean = 0.5125835739825773;
    msg.dist_min_abs = 0.6804193872674849;
    msg.dist_min_mean = 0.03658630734923651;
    msg.roll_rate_mean = 0.8663324561867777;
    msg.time = 0.38184474275097247;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 17U;
    tmp_msg_0.lon_gain = 0.9810002593865866;
    tmp_msg_0.lat_gain = 0.446307697052009;
    tmp_msg_0.bond_thick = 0.21092445668138227;
    tmp_msg_0.lead_gain = 0.3042745039860134;
    tmp_msg_0.deconfl_gain = 0.38956563631536123;
    tmp_msg_0.accel_switch_gain = 0.3141850730759058;
    tmp_msg_0.safe_dist = 0.8641094669261322;
    tmp_msg_0.deconflict_offset = 0.3954024476493855;
    tmp_msg_0.accel_safe_margin = 0.5531176320645832;
    tmp_msg_0.accel_lim_x = 0.16113886925931542;
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
    msg.setTimeStamp(0.9289261811735215);
    msg.setSource(42550U);
    msg.setSourceEntity(234U);
    msg.setDestination(65116U);
    msg.setDestinationEntity(127U);
    msg.type = 230U;
    msg.op = 57U;
    msg.err_mean = 0.8363917558246211;
    msg.dist_min_abs = 0.8062481450495149;
    msg.dist_min_mean = 0.8914579313153326;
    msg.roll_rate_mean = 0.40534293857577763;
    msg.time = 0.025785598010400035;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 9U;
    tmp_msg_0.lon_gain = 0.130828791508372;
    tmp_msg_0.lat_gain = 0.07317291582323737;
    tmp_msg_0.bond_thick = 0.9002183710897779;
    tmp_msg_0.lead_gain = 0.9213904984490238;
    tmp_msg_0.deconfl_gain = 0.6676563852745604;
    tmp_msg_0.accel_switch_gain = 0.1937578742209346;
    tmp_msg_0.safe_dist = 0.03972782811817355;
    tmp_msg_0.deconflict_offset = 0.6042525950134474;
    tmp_msg_0.accel_safe_margin = 0.5748538583136202;
    tmp_msg_0.accel_lim_x = 0.8123840844444141;
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
    msg.setTimeStamp(0.03790734549881691);
    msg.setSource(46427U);
    msg.setSourceEntity(39U);
    msg.setDestination(23055U);
    msg.setDestinationEntity(117U);
    msg.lat = 0.19453660695729913;
    msg.lon = 0.7435217315072454;
    msg.eta = 57261339U;
    msg.duration = 20626U;

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
    msg.setTimeStamp(0.35595924324131056);
    msg.setSource(10930U);
    msg.setSourceEntity(22U);
    msg.setDestination(45347U);
    msg.setDestinationEntity(91U);
    msg.lat = 0.3461288635230828;
    msg.lon = 0.1438892485820894;
    msg.eta = 3246912976U;
    msg.duration = 26186U;

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
    msg.setTimeStamp(0.8248726251447251);
    msg.setSource(18225U);
    msg.setSourceEntity(79U);
    msg.setDestination(34087U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.27615451626322074;
    msg.lon = 0.432116887342734;
    msg.eta = 3609906378U;
    msg.duration = 15177U;

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
    msg.setTimeStamp(0.14751548312026586);
    msg.setSource(16423U);
    msg.setSourceEntity(101U);
    msg.setDestination(58453U);
    msg.setDestinationEntity(43U);
    msg.plan_id = 19453U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.9671341811606812;
    tmp_msg_0.lon = 0.7950559219227882;
    tmp_msg_0.eta = 593392781U;
    tmp_msg_0.duration = 13163U;
    msg.waypoints.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.7568239390425072);
    msg.setSource(17658U);
    msg.setSourceEntity(80U);
    msg.setDestination(9321U);
    msg.setDestinationEntity(198U);
    msg.plan_id = 27433U;

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
    msg.setTimeStamp(0.2892904199726305);
    msg.setSource(28051U);
    msg.setSourceEntity(151U);
    msg.setDestination(17929U);
    msg.setDestinationEntity(244U);
    msg.plan_id = 35688U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.43787365552013313;
    tmp_msg_0.lon = 0.6657977749325199;
    tmp_msg_0.eta = 2399451604U;
    tmp_msg_0.duration = 2739U;
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
    msg.setTimeStamp(0.6106460826308403);
    msg.setSource(42362U);
    msg.setSourceEntity(126U);
    msg.setDestination(20363U);
    msg.setDestinationEntity(119U);
    msg.type = 130U;
    msg.command = 26U;
    msg.settings.assign("XRNSAJMUHBJPMQMRTOVEBUWITVZORQYWLGOYDJCCREDFHRWUAVVIKKDQXQPPPPWULKXLVMSVXLKHFIDUEEQHBESZDRYTMEMZFIQLINJLTNZAMAGHBRXJIFVZXBYNGMXUZONEDCXOWWOGBDTPYNFPSLHVGHQUIZJEPTQCUFKAQHUOSKHKTLVANMJIBNTYYPCZAXECLFDJKMYSSGGFCUOSXDRNGWTHICAFICAWQRRWTVKBS");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 14947U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.2357849565552873;
    tmp_tmp_msg_0_0.lon = 0.010089344811729406;
    tmp_tmp_msg_0_0.eta = 3762043967U;
    tmp_tmp_msg_0_0.duration = 40704U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("DOWIYQPEMSWADWXGOVVHVSBTCOCXDVCSBZDVEFISWZQSMXQGDIKQVGZEMEBEOQALHBXJQJYOPDMAPOPYUNHPYITTXTJAJNLRGDDJVCEGSILUWFCMUUXQLRLVFAXIAKPWRLSXFBABKYEPFARZFJ");

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
    msg.setTimeStamp(0.4748882713381102);
    msg.setSource(53829U);
    msg.setSourceEntity(128U);
    msg.setDestination(20081U);
    msg.setDestinationEntity(118U);
    msg.type = 102U;
    msg.command = 170U;
    msg.settings.assign("ZGEXTDZGTSKKUNMROEJMDLXSCOFSXFLEQVLIQXHDXZUCADHURKDWVCJCUANLHADTYOXBLSFYYFIUNKCTMMODIKBMWBSVKDSDGAZKTNCZBAPEHGCQWZUDBQNAJRNTZGTWH");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 19573U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("ZZPQTHSUDUUFBCIMOFJPVGCZLORLHSYDPKMTQKCLJBFEVIDKJUJNSNMTYDAQDMPFOMKQHJNKUTGIKGWZRESBVIFIZXZWZCCYDMRSUTIOXELIHSANNASZEWBMYURZCXWDURVFXBYEGKYYQXYFLPRCDULLTHXJJMVNJAAONNQPSZJIQVW");

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
    msg.setTimeStamp(0.17420983582323346);
    msg.setSource(22551U);
    msg.setSourceEntity(40U);
    msg.setDestination(33891U);
    msg.setDestinationEntity(142U);
    msg.type = 163U;
    msg.command = 192U;
    msg.settings.assign("EFDJKNBMAURMIUBENQJZZDXNKILRSNJTHMVKPGZAMVLOECTBSYBELRTYRJDLCYCYTYIZRSBZWVFFXVETDONVOWFYXBLPWYDDHVZGNUCEHCCQHRFHHNQRDOUBQPIVFWUUNGMTPAXJAOJDWJAUFXHCWEPTSARLVYSMAWGDJMLBXHCTKGUGOWVNHMKFKSDFCMAAYIEOIPUKJMIZGWGHZSPBSXSSRTJYK");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 30172U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("UBDMHLBQKZKXQAYPMXMSIBQUKOASOUKITZFFQHUUTOVSKYSIXOJEJUQMCEWWGYSHFRWJAFKXGNATYBGVIMZCTVLCPBGYLWXSURCHKOAFLFEIZ");

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
    msg.setTimeStamp(0.4577845351019725);
    msg.setSource(15568U);
    msg.setSourceEntity(86U);
    msg.setDestination(61684U);
    msg.setDestinationEntity(205U);
    msg.state = 205U;
    msg.plan_id = 65132U;
    msg.wpt_id = 99U;
    msg.settings_chk = 20707U;

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
    msg.setTimeStamp(0.07683643461555245);
    msg.setSource(15511U);
    msg.setSourceEntity(207U);
    msg.setDestination(53129U);
    msg.setDestinationEntity(227U);
    msg.state = 172U;
    msg.plan_id = 20346U;
    msg.wpt_id = 153U;
    msg.settings_chk = 23946U;

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
    msg.setTimeStamp(0.9499678750600982);
    msg.setSource(41604U);
    msg.setSourceEntity(222U);
    msg.setDestination(45512U);
    msg.setDestinationEntity(165U);
    msg.state = 181U;
    msg.plan_id = 3970U;
    msg.wpt_id = 38U;
    msg.settings_chk = 36237U;

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
    msg.setTimeStamp(0.4191659394801117);
    msg.setSource(43535U);
    msg.setSourceEntity(77U);
    msg.setDestination(14278U);
    msg.setDestinationEntity(197U);
    msg.uid = 120U;
    msg.frag_number = 141U;
    msg.num_frags = 216U;
    const signed char tmp_msg_0[] = {123, -62, -68, 83, 25, -128, 10, 91, -49, 106, -123, 87, -23, -127, -66, 94, -22, -34, -19, -19, -122, -124, -94, -72, 3, -13, -26, 5, -118, -94, 96, 116, 68, 50, 35, 43, 106, -119, -21, 72, -3, -80, -14, 77, 97, 36, -127, 36, 63, -63, -28, -104, 112, -49, 74, 114, -85, 43, 88, -100, 34, 100, 6, 62, 43, 3, -39, 118, 87, 21, -35, 114, -105, -103, -58, 71, 83, -22, 110, 86, 16, -25, 96, -37, 4, -87, -56, -83, -14, -57, -128, 59, -102, -64, 122, -76, -26, -104, -49, -36, 3, 68, 58, -29, -81, 11, 104, 80, 121, 124, -6, -23, 8, -16, 21, -87, 56, -10, 2, 124, -55, -28, 58, 17, -11, -85, 73, 88, 121, 3, 99, 74, -89, -63, -79, -17, 50, -48, -111, -95, -37, -4, -80, -66, -9, -85, 69, 98, 88, 41, -77, 97, -26, 57, 49, -64, 44, 1, 73, -13, 9, 92, -47, 23, 78};
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
    msg.setTimeStamp(0.39070076048369595);
    msg.setSource(52394U);
    msg.setSourceEntity(32U);
    msg.setDestination(35811U);
    msg.setDestinationEntity(103U);
    msg.uid = 81U;
    msg.frag_number = 150U;
    msg.num_frags = 238U;
    const signed char tmp_msg_0[] = {85, 98, -24, 80, -93, 1, -21, -77, 71, -128, -70, 125, -43, -73, -45, 86, 25, 108, -75, -116, -119, 62, -6, 3, -54, 90, -70, -1, 125, -122, -5, 85, -92, 84, -30, 105, -19, -121, -55, -112, 4, -110, 6, -63, -55, -127, -45, 102, 91, -1, -3, 15, -13, -49, -47, -31};
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
    msg.setTimeStamp(0.286466567928096);
    msg.setSource(61465U);
    msg.setSourceEntity(5U);
    msg.setDestination(12977U);
    msg.setDestinationEntity(220U);
    msg.uid = 153U;
    msg.frag_number = 111U;
    msg.num_frags = 0U;
    const signed char tmp_msg_0[] = {53, -51, 94, 18, 95, -73, 114, 52, -117, -70, -31, 37, 36, 98, 83, -104, 98, 28, -101, 43, 61, -13, -127, 102, 15, -127, -32, -54, -43, 70, -55, -114, -124, 30, 79, 71, -1, 68, 111, 106, -106, -59, 88, -5, 86, -17, 87, 126, -19, 113, 78, -43, 61, -74, 95, 105, -92, 95, -47, 86, -11, 62, 0, -105, -18, 8, 21, 58, 93, 1, 120, 67, 94, 3, 14, -31, 96, 9, 80, 5, 46, 121, -111, 37, 115, -8, 28, -110, 34, 0, 22, 43, -47, 9, 12, -83, 45, -122, 88, 85, -65, 117, 82, -61, 33, -124, -33, -15, 19, 13, -110, -8, -17, 84, -2, 100, 71, -112, -114, 77, -123, 103, -68, -35, 90, 80, -14, 95, -33, -26, 90, -13, 105, -28, -122, 73, -23, 76, 68, 36, -9, -98, -43, -86, 73, -35, 79, 96, -106, 20, 122, -12, -65, 24, 48, -99, 120, 102, -101, -38, 61, 93, -101, 120, -11, 111, -14, 46, 113, -115, 45, 59, 66, 72, -110, -8, 126, -119, 76, -65, -6, -83, 109, 42, -42, -23, 84, 81, -107, -26, 43, 43, -99, -56, -84, 11, -120, -53, 59, -113, 27, -40, -29, -49, -59, -60, -18, 123, -57, -112, 22, 94, -97, -2, -33, 76, -109, 82, 5, -39, -29, 106, -30, -75, 40, -124};
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
    IMC::MessagePartControl msg;
    msg.setTimeStamp(0.8264048164261704);
    msg.setSource(41495U);
    msg.setSourceEntity(222U);
    msg.setDestination(1253U);
    msg.setDestinationEntity(68U);
    msg.uid = 242U;
    msg.op = 109U;
    msg.frag_ids.assign("KMLHGRNPZIDQFALFLTYVAOXQJLCNZGUZFWSQYKZDYHEUGEFNUQASWSTGHEFYECPBPRRHFFRSJMOFVAMMHJNNUQXGBTJCBROTYHJQLKIQAEIAYRGGNVJKBZKADUESSXYQRCKORIXUVISODDBVKLECHKZSVPVWBCLNMDCPCUJLNJFGZVTPIEZEIWHZTEQRCDHKXBOSRVJWYGD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePartControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePartControl msg;
    msg.setTimeStamp(0.0010848197738931864);
    msg.setSource(44025U);
    msg.setSourceEntity(241U);
    msg.setDestination(24255U);
    msg.setDestinationEntity(172U);
    msg.uid = 145U;
    msg.op = 140U;
    msg.frag_ids.assign("ZMAFHIGORFQLRBAXPVIXJBIWLGBVGQOWEUJLWCRIYZLJGGHHNRIOQYAYEFTCYDIZQRGTPSAEROUWZNPSJWCMSXFGTUSYOYLQQUOJADLXIFJOCKCTBJFTFHTDWNRYQJFUVLVQDRRSIGMGVYXVVOMJDAANVXHNPMIWTNJXMOKCKPVBHDCNFNPOFMSUQWBSVBZKZZBPAGYDEKPEBQETNEDZKTZICNREKKDPPXUCHBYSAU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePartControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePartControl msg;
    msg.setTimeStamp(0.34043105489560876);
    msg.setSource(24750U);
    msg.setSourceEntity(237U);
    msg.setDestination(34029U);
    msg.setDestinationEntity(56U);
    msg.uid = 182U;
    msg.op = 114U;
    msg.frag_ids.assign("CKNJDJWBMMQXPIVXOGGZAWOUQXEYLBWIJFXEHPGDBAVHIGILQYMIMFPXYMFRQISLUYCYFZZPZUISKODURNGHAHLXJXKFAFJREPHFUVJTZSOPDQVYJVANDRGFVYLYYODQNTBEQDVZBRLSSRHQXZPURWISWOJNEDMDZIVOCWC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePartControl #2", msg == *msg_d);
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
    msg.setTimeStamp(0.02404009568933685);
    msg.setSource(52641U);
    msg.setSourceEntity(70U);
    msg.setDestination(40701U);
    msg.setDestinationEntity(219U);
    msg.content_type.assign("USLNKMCAIRKQHFPEDNJUBHRXLUBUVYXRZFOFQEMMAUCGYKQJFXKAGWBDBJAIRBWRIQYCRS");
    const signed char tmp_msg_0[] = {-73, -25, 73, 114, -28, -117, -82, -56, -79, -68, 10, -107, 38, 116, -106, -120, 102, 10, 84, 0, -83, 62, 8, 93, 24, 48, 21, 38, -37, 114, 35, -80, 1, 15, -53, 3, -16, -38, -44, -46, 106, 117, -53, 122, 116, 83, 18, 121, 28, 98, 48, 34};
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
    msg.setTimeStamp(0.8624287161939848);
    msg.setSource(3314U);
    msg.setSourceEntity(240U);
    msg.setDestination(33294U);
    msg.setDestinationEntity(155U);
    msg.content_type.assign("DACOILIYEMUVD");
    const signed char tmp_msg_0[] = {45, 94, -43, -125, 119, 39, 10, 59, -62, 118, -126, 92, 28, 77, 39, -31, 40, -95, -16, 22, 3, 22, -19, -12, 109, 54, -43, 65, -29, 26, -80, -22, -17, -102, 35, -64, 48, 45, -2, -37, -55, -117, 50, -102, -112, -104, 67, 2, -58, -108, 119, -76, 94, -124, -115, -25, -70, 105, 28, 29, 14, 24, -114, 27, -23, 125, -112, -35, -62, 33, 78, -22, 78, 107, 125, 110, -31, -10, 122, 91, -1, 2, 109, 115, -51, 85, 55, 46, -38, -17, -10, -92, 33, -109, -98, 21, -111, 44, 115, 109, 48, 105, -53, 86, -33, -128, 122, -24, 75, 43, 29, 26, 104, 107, -39, -94, -11, -66, -6, 34, -45, 40, -7, 56, 28, -25, -69, 43, -58, -120, -59, 31, -54, 113, -11, -51, 116, -30, -88, 115, -39, 110, 85, 44, -108, -68, 116, 11, -73, -70, -125, 55, -97, 6, -25, -57, 13, -38, 98, -52, -96, -95, -35, -40, 89, -36, -55, 31, -42, -1, -83, 42, 120, -83, -111, -13, -28, 1, 1, -97, -54, -124, 89, 31, -104, -68, -50, -6, 113, 107, 52, -65, 48, -80, -20, 10, -59, 71, -6, 9, -48, 126, -98, 33, 109, 16, 89};
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
    msg.setTimeStamp(0.7255731824092867);
    msg.setSource(10825U);
    msg.setSourceEntity(12U);
    msg.setDestination(33375U);
    msg.setDestinationEntity(209U);
    msg.content_type.assign("WJYYLXQINQNUHKHHYGKAHOADTDSVGCMWVEZSRPUPZLNTCUTSGBETOYIJMEKZHAXAPBRFUDTCSDOEZXDIAHVRAJXZXOHWRY");
    const signed char tmp_msg_0[] = {124, 101, 3, -65, -79, -111, 53, 11, 31, 77, -102, -74, 81, 116, 42, -109, -108, 25, -51, -92, 69, 23, -95, 48, 93, -33, -5, 0, 102, -7, -71, 23, 37, 22, -116, -74, -28, 63, 39, -47, 75, 88, -20, 41, -114, -29, 106, -59, -27, -97, -79, -4, -101, -78, -89, -62, -74, 5, 54, -44, 0, -21, -62, 83, 46, 12, -49, -14, -108, -100, -118, -39, -79, 63, 104, 97, 48, 58, -31, 22, -112, 39, 16, -106, -22, 52, -96, 34, 117, 73, -1, -10, 28, 9, 95, 99, -52, -57, 9, 101, 85, -19, -91, -69, -33, 12, -96, -83, -42, 117, 10, -39, -17, -106, 97, -30, 9, -61, 35, 121, -7, -112, 88, -3, -35, 34, 27, 71, -44, -92, -21, 53, 33, 72, -105, -118, 33, 56, 72, -43, -22, 24, 61, 29, 112, 1, 23, -83, 14, 94, -102, -109, -29, -71, -13, -103, -71, 90, 1, -22, -105, 15, -83, -120, 28, -115, 114, -88, -96, 40, -2, -104, -4, -45, -115, -3, 49, -4, 111, -17, 83, -34, 89};
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
    msg.setTimeStamp(0.4292857210816703);
    msg.setSource(49122U);
    msg.setSourceEntity(0U);
    msg.setDestination(24287U);
    msg.setDestinationEntity(12U);

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
    msg.setTimeStamp(0.9235149344325099);
    msg.setSource(43375U);
    msg.setSourceEntity(58U);
    msg.setDestination(21610U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.276587722220624);
    msg.setSource(52001U);
    msg.setSourceEntity(42U);
    msg.setDestination(60537U);
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
    msg.setTimeStamp(0.03722351151257386);
    msg.setSource(38228U);
    msg.setSourceEntity(150U);
    msg.setDestination(59624U);
    msg.setDestinationEntity(197U);
    msg.target = 56971U;
    msg.bearing = 0.3715423673856867;
    msg.elevation = 0.7046542048621668;

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
    msg.setTimeStamp(0.8914820774867429);
    msg.setSource(26280U);
    msg.setSourceEntity(33U);
    msg.setDestination(41724U);
    msg.setDestinationEntity(164U);
    msg.target = 33108U;
    msg.bearing = 0.38704954260718205;
    msg.elevation = 0.37068749244566446;

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
    msg.setTimeStamp(0.6672435707778669);
    msg.setSource(9846U);
    msg.setSourceEntity(6U);
    msg.setDestination(57595U);
    msg.setDestinationEntity(137U);
    msg.target = 24680U;
    msg.bearing = 0.31862609401019915;
    msg.elevation = 0.2153940260359256;

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
    msg.setTimeStamp(0.8731546245112185);
    msg.setSource(41304U);
    msg.setSourceEntity(3U);
    msg.setDestination(46481U);
    msg.setDestinationEntity(91U);
    msg.target = 48741U;
    msg.x = 0.19095022469638356;
    msg.y = 0.3888608654315787;
    msg.z = 0.2514439481441809;

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
    msg.setTimeStamp(0.10229199873551975);
    msg.setSource(31472U);
    msg.setSourceEntity(136U);
    msg.setDestination(30971U);
    msg.setDestinationEntity(152U);
    msg.target = 60060U;
    msg.x = 0.712925247664423;
    msg.y = 0.3752416921622237;
    msg.z = 0.3708384567899681;

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
    msg.setTimeStamp(0.5830563975929397);
    msg.setSource(48636U);
    msg.setSourceEntity(236U);
    msg.setDestination(31452U);
    msg.setDestinationEntity(212U);
    msg.target = 36010U;
    msg.x = 0.3934748929863372;
    msg.y = 0.5751767154746897;
    msg.z = 0.34565738850040395;

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
    msg.setTimeStamp(0.03504140521488386);
    msg.setSource(17918U);
    msg.setSourceEntity(211U);
    msg.setDestination(35301U);
    msg.setDestinationEntity(94U);
    msg.target = 4301U;
    msg.lat = 0.09703188594743395;
    msg.lon = 0.319332661830833;
    msg.z_units = 200U;
    msg.z = 0.01887264375692277;

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
    msg.setTimeStamp(0.5297070229624208);
    msg.setSource(35547U);
    msg.setSourceEntity(7U);
    msg.setDestination(59750U);
    msg.setDestinationEntity(207U);
    msg.target = 5948U;
    msg.lat = 0.4119695880172817;
    msg.lon = 0.9256360848727158;
    msg.z_units = 61U;
    msg.z = 0.06726184571910188;

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
    msg.setTimeStamp(0.21384792804929376);
    msg.setSource(62350U);
    msg.setSourceEntity(147U);
    msg.setDestination(61378U);
    msg.setDestinationEntity(140U);
    msg.target = 25126U;
    msg.lat = 0.7109016675263983;
    msg.lon = 0.48246807554380866;
    msg.z_units = 122U;
    msg.z = 0.44467664005550456;

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
    msg.setTimeStamp(0.2179236676234615);
    msg.setSource(53389U);
    msg.setSourceEntity(240U);
    msg.setDestination(20992U);
    msg.setDestinationEntity(105U);
    msg.locale.assign("SOKWZXQCPOYPWUGEEHZBMUXTMWPTRKQAJNJCPDKGYEZVLLYLFUVVUVBCSJMROAUDYEFWJENGFVMDGDYQZSZQLWYTBULEWQMKPTFRMJLMDFBBFFKILRXVFVXLQXCGKWRBCKYIGJAPFOZBRZYDSHEKM");
    const signed char tmp_msg_0[] = {-51, 110, -69, -24, -119, -60, -102, 105, -112, -26, 58, 28, 14, -75, -111, 30, 15, -38, -75, 16, 22, -127, -42, -96, -20, -24, -93, -112, 68, 39, 85, -72, -123, 96, -37, 111, 77, -43, -6, -114, -92, 111, 107, -75, 48, 91, -128, 95, -88, -80, -123, -25, -66, 78, -88, 21, 112, -22, 99, 126, -25, -101, -88, 50, -83, 28, -103, -108, -67, 24, -3, 53, -38, 96, 87, 46, 94, -68, 85, -95, -41, -86, -118, 115, -96, -74, 15, -7, 115, 5, 66, -107, -16, 95, 73, 3, -106, 91};
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
    msg.setTimeStamp(0.9584552566501789);
    msg.setSource(62711U);
    msg.setSourceEntity(107U);
    msg.setDestination(32724U);
    msg.setDestinationEntity(16U);
    msg.locale.assign("MNIXFABWAYAIYNDBPGAEXPUYTMNOHTNWSZUXUKVBTLQWAYJEMKZVAQUJJSJBLFQPXCGERYNRLZKWJNMMUFPKFQUFRVHEFDXNPSFDVTLQPIQSZIRVOGZCJGHHOENJBCK");
    const signed char tmp_msg_0[] = {-109, 48, -62, -45, 56, -98, -51, 81, -112, -106, -77, -15, -20, -33, 95, 86, 65, 108, -124, -124, 18, -110, -8, 126, -78, 11, 28, -42, -83, 37, 111, 52, 7, -16, -2, -16, -117, 10, -39, -116, -111, -73, 73, -3, 33, -128, -107, 110, -108, -42, 80, 97, -79, -75, -72, 67, -41, 39, 70, 105, -48, -2, -109, 115, 51, -100, 102, 65, -11, 31, -62, 9, -101, 21, -114, -53, 80, -70, -79, -63, -103, 109, 89, 63, 79, -103, -3, 122, -44, -105, 81, -27, -119, -10, 99, 92, -77, 125, 18, -122, 27, 36, 31, 104, -47, -97};
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
    msg.setTimeStamp(0.21238114134570918);
    msg.setSource(41055U);
    msg.setSourceEntity(170U);
    msg.setDestination(62107U);
    msg.setDestinationEntity(31U);
    msg.locale.assign("VYLCSZRUHWTCFESCHLNJIVOBMZOETDMBHSLMGXIFPZRKEFAMPDQYLUIHDZJUBHHDIAIKDIWCYCDTHFAORWGRAJEYRBZESTBSEYANXPQAVFKZAYORMPFRBKPOPUMWBHSTEKMXZBYKXINKA");
    const signed char tmp_msg_0[] = {94, 116, -15, -109, -80, -22, 125, 77, 5, -71, 79, 116, -120, 96, 50, 93, 94, -78, -24, -85, -75, 105, 111, -60, -87, 116, 42, -45, -66, -34, -8, -88, -6, -1, -17, 74, -100, 107, -33, 17, -48, 81, -112, 72, 113, -115, -1, 4, -45, -84, -10, -48, 56, 70, -54, -51, 72, -6, -1, -68, 97, -11, 61, -113, -17, 26, 124, 35, -5, 59, -45, 3, -64, -121, 123, -22, -51, -17, 121, -127, 44, -49, -25, -64, 121, -62, -11, 39, -86, -108, -98, 57, -72, -116, 3, 99, 11, -58, 50, 96, -19, 68, -122, -67, -8, -96, 112, -89, -4, 21, 0, 32, -62, -75, 89, 37, -81, 90, 22, 40, -80, -18, 67, -74, 120, 43, -62, -79, -9, 115, 33, -22, -74, -81, 82, -127, 108, 36, 46, 10, 89, 104, -36, 79, 124, 4, 26, -59, -40, 39, -73, 48, 103, -125, -116, -35, -63, -73, 58, -58, -63, 19, -30, 32, 64, -48, -16, -103, -5, 18, -97, -121, -30, -43, 5, -35, 53, -82, -59, -21, -5};
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
    msg.setTimeStamp(0.9844478022950033);
    msg.setSource(60904U);
    msg.setSourceEntity(248U);
    msg.setDestination(2408U);
    msg.setDestinationEntity(18U);

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
    msg.setTimeStamp(0.41228606631501474);
    msg.setSource(58788U);
    msg.setSourceEntity(208U);
    msg.setDestination(51099U);
    msg.setDestinationEntity(62U);

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
    msg.setTimeStamp(0.21576088719505226);
    msg.setSource(50461U);
    msg.setSourceEntity(161U);
    msg.setDestination(8899U);
    msg.setDestinationEntity(185U);

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
    msg.setTimeStamp(0.5008891192659042);
    msg.setSource(22180U);
    msg.setSourceEntity(99U);
    msg.setDestination(63821U);
    msg.setDestinationEntity(129U);
    msg.camid = 236U;
    msg.x = 32841U;
    msg.y = 26737U;

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
    msg.setTimeStamp(0.26665744289465987);
    msg.setSource(26520U);
    msg.setSourceEntity(66U);
    msg.setDestination(45491U);
    msg.setDestinationEntity(52U);
    msg.camid = 211U;
    msg.x = 42563U;
    msg.y = 24119U;

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
    msg.setTimeStamp(0.616198700924215);
    msg.setSource(13067U);
    msg.setSourceEntity(0U);
    msg.setDestination(46290U);
    msg.setDestinationEntity(24U);
    msg.camid = 74U;
    msg.x = 19565U;
    msg.y = 34068U;

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
    msg.setTimeStamp(0.6646678591388514);
    msg.setSource(24376U);
    msg.setSourceEntity(212U);
    msg.setDestination(64878U);
    msg.setDestinationEntity(70U);
    msg.camid = 2U;
    msg.x = 62133U;
    msg.y = 13928U;

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
    msg.setTimeStamp(0.8774609341104858);
    msg.setSource(33032U);
    msg.setSourceEntity(119U);
    msg.setDestination(41436U);
    msg.setDestinationEntity(176U);
    msg.camid = 16U;
    msg.x = 27871U;
    msg.y = 51058U;

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
    msg.setTimeStamp(0.663495285372795);
    msg.setSource(1909U);
    msg.setSourceEntity(117U);
    msg.setDestination(43571U);
    msg.setDestinationEntity(81U);
    msg.camid = 57U;
    msg.x = 32818U;
    msg.y = 2390U;

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
    msg.setTimeStamp(0.7282372731377107);
    msg.setSource(14724U);
    msg.setSourceEntity(20U);
    msg.setDestination(35655U);
    msg.setDestinationEntity(26U);
    msg.tracking = 14U;
    msg.lat = 0.14040453493846783;
    msg.lon = 0.147749250175921;
    msg.x = 0.03431845530649935;
    msg.y = 0.29933854209345456;
    msg.z = 0.09425399916000055;

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
    msg.setTimeStamp(0.44096019288760424);
    msg.setSource(14200U);
    msg.setSourceEntity(25U);
    msg.setDestination(47903U);
    msg.setDestinationEntity(224U);
    msg.tracking = 115U;
    msg.lat = 0.22177575489887247;
    msg.lon = 0.42418199573301374;
    msg.x = 0.8173068543771961;
    msg.y = 0.6574880318941616;
    msg.z = 0.13274557192697067;

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
    msg.setTimeStamp(0.16475244767985486);
    msg.setSource(24987U);
    msg.setSourceEntity(14U);
    msg.setDestination(22039U);
    msg.setDestinationEntity(143U);
    msg.tracking = 241U;
    msg.lat = 0.20858459383186145;
    msg.lon = 0.4524081332583558;
    msg.x = 0.2303248196947696;
    msg.y = 0.785011647764901;
    msg.z = 0.43186584941495954;

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
    msg.setTimeStamp(0.7892422751289985);
    msg.setSource(56499U);
    msg.setSourceEntity(113U);
    msg.setDestination(43762U);
    msg.setDestinationEntity(94U);
    msg.target.assign("WECHEFMZSDLAVUJYXWPF");
    msg.lbearing = 0.85328597258486;
    msg.lelevation = 0.7512700170146054;
    msg.bearing = 0.7823732812514747;
    msg.elevation = 0.008689146390875369;
    msg.phi = 0.2843823295107397;
    msg.theta = 0.8940372528546328;
    msg.psi = 0.27158567487256735;
    msg.accuracy = 0.5513368445603042;

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
    msg.setTimeStamp(0.6534616439521036);
    msg.setSource(57608U);
    msg.setSourceEntity(172U);
    msg.setDestination(65479U);
    msg.setDestinationEntity(229U);
    msg.target.assign("HCZAUSOROIKGWEJNIMCPJMADCIBPSFQXWTXINJVLTOJNEKQLVKEKRXSUDROVYWYZSCMDQZHDGCONSDMLMVPPTTHTWRDLDYWBHYIJKUGUGUZCGOJAFPJWRLSDVHBZSTEPESJBKNMRFHZJXUFMAEWQHPMCFQWYBBUDWOIBHSXEBAO");
    msg.lbearing = 0.9429228027266037;
    msg.lelevation = 0.18446902243440289;
    msg.bearing = 0.8956536713983276;
    msg.elevation = 0.26877097573138453;
    msg.phi = 0.9984583535597683;
    msg.theta = 0.34627580551627;
    msg.psi = 0.5022136193933301;
    msg.accuracy = 0.2562456452518179;

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
    msg.setTimeStamp(0.8300546934289329);
    msg.setSource(16464U);
    msg.setSourceEntity(196U);
    msg.setDestination(44877U);
    msg.setDestinationEntity(246U);
    msg.target.assign("HJFTQPCEEVVNWXSLTTHGHSHKMXRXXUZDZUTLWSNMIXCCLW");
    msg.lbearing = 0.8526497996278052;
    msg.lelevation = 0.8073189519215839;
    msg.bearing = 0.28908806544650023;
    msg.elevation = 0.3474509378583003;
    msg.phi = 0.3780170086405139;
    msg.theta = 0.1934877242268399;
    msg.psi = 0.6524179082043122;
    msg.accuracy = 0.21111831414636795;

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
    msg.setTimeStamp(0.7239919236415524);
    msg.setSource(25749U);
    msg.setSourceEntity(111U);
    msg.setDestination(59363U);
    msg.setDestinationEntity(25U);
    msg.target.assign("WETXRMQWQWCQEELMQECJIYVNUXLNPJHABEDCVHEGQBXVIGFSDBOLTFOVPSRYPSZDRGZKZAOOSZSDYGXKTZEKKDHRDCAZRAWFLAOKKCNTAJJZXIPSPYPSUXO");
    msg.x = 0.17004248664147315;
    msg.y = 0.3435033803676588;
    msg.z = 0.9944764865581124;
    msg.n = 0.2852890148138123;
    msg.e = 0.49370496289227506;
    msg.d = 0.07498596658174872;
    msg.phi = 0.9970758205119161;
    msg.theta = 0.21705233090776077;
    msg.psi = 0.36243180545083886;
    msg.accuracy = 0.2228892675043177;

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
    msg.setTimeStamp(0.6749271787495624);
    msg.setSource(6488U);
    msg.setSourceEntity(2U);
    msg.setDestination(57309U);
    msg.setDestinationEntity(104U);
    msg.target.assign("JLOLECVPOZQHDZQCJHYPEHPBOFWOERYORJNDMBJCMXELWRVPXFRKVHATKNBQREZVLWSBGMGFISVUMXXAQNXRYUKCXNTEJUSVSKDJWTBHIFGMQYHMWHLCZDQUYIAXGEIGWQMEOFSFKKGFLSCXKXTVMZWGEAGZICQAFCJOTZNSNHOIPAPYDBBAUYCJVDRMTPHLMWOLBCBNLKJRPUFAOFDZESQLUGUBIAUYUYQJPXANSNWKRDIKITZDZV");
    msg.x = 0.024435380720739475;
    msg.y = 0.2598549811565194;
    msg.z = 0.8410624104752508;
    msg.n = 0.10688989927727943;
    msg.e = 0.23134869015046788;
    msg.d = 0.06460031018209345;
    msg.phi = 0.5038126516731188;
    msg.theta = 0.015235494529744487;
    msg.psi = 0.4811642862550788;
    msg.accuracy = 0.7633289426775793;

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
    msg.setTimeStamp(0.7879288411430212);
    msg.setSource(9636U);
    msg.setSourceEntity(172U);
    msg.setDestination(6183U);
    msg.setDestinationEntity(227U);
    msg.target.assign("HKBYLFXJUQLT");
    msg.x = 0.24517106396937782;
    msg.y = 0.3729459849550393;
    msg.z = 0.9625324055916143;
    msg.n = 0.06949610234379944;
    msg.e = 0.14305101522852448;
    msg.d = 0.729471280634219;
    msg.phi = 0.4828290489224707;
    msg.theta = 0.4014129801678996;
    msg.psi = 0.07972703751165067;
    msg.accuracy = 0.434372311550546;

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
    msg.setTimeStamp(0.3373438122631065);
    msg.setSource(53891U);
    msg.setSourceEntity(47U);
    msg.setDestination(3362U);
    msg.setDestinationEntity(82U);
    msg.target.assign("NRGHCBWFIBCFMCKOGLRYAKWVSOTTVIDKNDZFTWVAFVCMJMULBPXXESCAPYJKUBKDGPXVJVTAIFWMVWIPQZQULCDWBXJHYQFLTCIAOQMTMKROROEXQQCOSWYZMMEZRSPNNDXTNXAKOUWRXBSLVABANEGEP");
    msg.lat = 0.9902957791411665;
    msg.lon = 0.3088369536990666;
    msg.z_units = 143U;
    msg.z = 0.8735815145013843;
    msg.accuracy = 0.7223100320001117;

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
    msg.setTimeStamp(0.5493186652672678);
    msg.setSource(8079U);
    msg.setSourceEntity(82U);
    msg.setDestination(18644U);
    msg.setDestinationEntity(29U);
    msg.target.assign("FSTCBLDUPHJPHNAXILWYRPGXRONTAZQ");
    msg.lat = 0.2976063763925788;
    msg.lon = 0.08379192813760972;
    msg.z_units = 145U;
    msg.z = 0.0337194093838552;
    msg.accuracy = 0.8235057196833074;

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
    msg.setTimeStamp(0.7941681005547222);
    msg.setSource(47706U);
    msg.setSourceEntity(81U);
    msg.setDestination(65478U);
    msg.setDestinationEntity(57U);
    msg.target.assign("PSJUOODZZAVFTVQPAMBCNMRIKJUTTFLWUJPQWRSGZPQPWKZINDVJBIREPXSKGMTAOZIQODXBJHRFXCFLDOINGTVDUYLESIELUIYIKKBAMRFVWVLYMVNGZEGBEZGYXNKULQHQHHLOQEIFPHPLYAGPEHDS");
    msg.lat = 0.8208014037263821;
    msg.lon = 0.9791109393901201;
    msg.z_units = 209U;
    msg.z = 0.6850404938009769;
    msg.accuracy = 0.6234772913941385;

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
    msg.setTimeStamp(0.5892756900670304);
    msg.setSource(43580U);
    msg.setSourceEntity(222U);
    msg.setDestination(50627U);
    msg.setDestinationEntity(124U);
    msg.name.assign("CXXDTBYDWPGCKEOUNJVEAGSXBFHYFHGWTZDIQCXURKRNQMNRIISEPVQLOTGIYKIUZJTMMQFWBRWZBLQETYGMSVAHHBFNMXARVYSD");
    msg.lat = 0.90909387534104;
    msg.lon = 0.04258694310619038;
    msg.z = 0.942067157771302;
    msg.z_units = 228U;

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
    msg.setTimeStamp(0.5240720945659075);
    msg.setSource(15364U);
    msg.setSourceEntity(104U);
    msg.setDestination(45033U);
    msg.setDestinationEntity(192U);
    msg.name.assign("GNDYRFHYFLAUFPKZYERSRKVUXVEJVFPYLTXOKJKJRRVNVBKHADNCRBLDEATNQVWEGOXSOBJXVEEOUAMIOMCJCRPCIZFXSHWRQUDHMWJPHIUMJJSAPFAQIDXYELXZGUQQBRDIBFUGWEZXGIQFWFAEKKZMOQLSTNIHCKQAMBUVLNPTGSNYBHFLGPTYCSXDKONBRHTOYWPGZZVTDUEZAUWMBNWITIKSYGLPHAILCWGONJOTXMYCBDTQJVMSQP");
    msg.lat = 0.5949632726910529;
    msg.lon = 0.5593991668702895;
    msg.z = 0.13913506976887335;
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
    msg.setTimeStamp(0.1398551736739424);
    msg.setSource(63543U);
    msg.setSourceEntity(143U);
    msg.setDestination(23345U);
    msg.setDestinationEntity(244U);
    msg.name.assign("VQESLNRPMPLETFAOIRVNXDMGLKXXLQCBNUXBQDUHTWQOPEPOMUADNNHZSEHTQBKSYJCARHEACVHMRTZYLKRLBWSTKONLWXLFINAXIRXWGCTHDCPMMNYJKOVCQOVZLXJGUUSTFKGARIDAISCVIZZBFUGHBR");
    msg.lat = 0.691210220970604;
    msg.lon = 0.7901818613744992;
    msg.z = 0.1957649372604967;
    msg.z_units = 151U;

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
    msg.setTimeStamp(0.4897168350673081);
    msg.setSource(35544U);
    msg.setSourceEntity(192U);
    msg.setDestination(35754U);
    msg.setDestinationEntity(161U);
    msg.op = 209U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("GPLBDVYLCHTAUCNZTQBBSWHONZBUREMWXKRIWTAIAGSOWZOWFEMFRFLCAOBFEEZIHQDCVFAQPIMEVKIPKNBXOXZHAEUATSCKEJHBXKMSSLEUUQOLJYJXVRQUYTQKHVCXFNLCMSPBIVOGHYFXGQEZNJDZEIVTMUIWVODLVSGHWUXDYMRNGLJNWUKPWBAOXTRRRUSMJVNDYIXTHDSGFPKNJRDJYZGQFTYQDZJMCPJCTAGRA");
    tmp_msg_0.lat = 0.47003412899849584;
    tmp_msg_0.lon = 0.9258688272584831;
    tmp_msg_0.z = 0.10637533184224557;
    tmp_msg_0.z_units = 50U;
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
    msg.setTimeStamp(0.3188289809694036);
    msg.setSource(11844U);
    msg.setSourceEntity(196U);
    msg.setDestination(36225U);
    msg.setDestinationEntity(235U);
    msg.op = 180U;

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
    msg.setTimeStamp(0.9168841277265303);
    msg.setSource(40386U);
    msg.setSourceEntity(243U);
    msg.setDestination(62115U);
    msg.setDestinationEntity(16U);
    msg.op = 32U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("XVQITTLOJJIQXCTXQVFDDYCHNNBKOAZOGPPBGJZHLIFRICNSMQPJNXSOLUPMMURSJWDJJQRTZOXLDFNZOQTJKCYOKSUYWCEKIELSBUYPHZFMKBBEKCWTDKQAXUEHVVSKSMYPULAKMRVDDRGGXWGWMXQTHQLREGRJSFVOZUWVEAGCAYNGWNRPTXCAYXLEBNQLYZJEAFHFCWIIYUFGDKHVYOSNDFGVAEPIDBSIRNLVUZAWZFMCZHWMARU");
    tmp_msg_0.lat = 0.4903923253762149;
    tmp_msg_0.lon = 0.06613605196504113;
    tmp_msg_0.z = 0.6001968426237432;
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
    msg.setTimeStamp(0.605836755635574);
    msg.setSource(47599U);
    msg.setSourceEntity(201U);
    msg.setDestination(42931U);
    msg.setDestinationEntity(143U);
    msg.value = 0.4676151131868913;
    msg.type = 61U;

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
    msg.setTimeStamp(0.45316211549114993);
    msg.setSource(41921U);
    msg.setSourceEntity(109U);
    msg.setDestination(1534U);
    msg.setDestinationEntity(102U);
    msg.value = 0.5092883165677837;
    msg.type = 199U;

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
    msg.setTimeStamp(0.9157593428074579);
    msg.setSource(47689U);
    msg.setSourceEntity(234U);
    msg.setDestination(31917U);
    msg.setDestinationEntity(85U);
    msg.value = 0.29325742837409763;
    msg.type = 110U;

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
    msg.setTimeStamp(0.18466961505259083);
    msg.setSource(40700U);
    msg.setSourceEntity(217U);
    msg.setDestination(27324U);
    msg.setDestinationEntity(101U);
    msg.value = 0.12001472460495477;

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
    msg.setTimeStamp(0.9735219993810744);
    msg.setSource(12758U);
    msg.setSourceEntity(219U);
    msg.setDestination(29768U);
    msg.setDestinationEntity(65U);
    msg.value = 0.8279986787159567;

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
    msg.setTimeStamp(0.17063028572883132);
    msg.setSource(50946U);
    msg.setSourceEntity(121U);
    msg.setDestination(56832U);
    msg.setDestinationEntity(10U);
    msg.value = 0.07314977237023379;

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
    msg.setTimeStamp(0.09582505984560419);
    msg.setSource(26634U);
    msg.setSourceEntity(20U);
    msg.setDestination(32194U);
    msg.setDestinationEntity(40U);
    msg.timestamp_last_service = 0.6486839104629732;
    msg.time_next_service = 0.1259801175414107;
    msg.time_motor_next_service = 0.7863695321653434;
    msg.time_idle_ground = 0.5489861994732876;
    msg.time_idle_air = 0.37046314385669465;
    msg.time_idle_water = 0.7476563575157708;
    msg.time_idle_underwater = 0.847852435631144;
    msg.time_idle_unknown = 0.48460495167474693;
    msg.time_motor_ground = 0.4282838932302965;
    msg.time_motor_air = 0.2968570488852287;
    msg.time_motor_water = 0.022047423032840463;
    msg.time_motor_underwater = 0.3627869079120829;
    msg.time_motor_unknown = 0.8401156503347974;
    msg.rpm_min = -17866;
    msg.rpm_max = 22387;
    msg.depth_max = 0.470778790554489;

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
    msg.setTimeStamp(0.6537770672244942);
    msg.setSource(17106U);
    msg.setSourceEntity(53U);
    msg.setDestination(33116U);
    msg.setDestinationEntity(161U);
    msg.timestamp_last_service = 0.8503109581991084;
    msg.time_next_service = 0.5416569193313313;
    msg.time_motor_next_service = 0.39962692077533624;
    msg.time_idle_ground = 0.191674415052011;
    msg.time_idle_air = 0.10578596022635134;
    msg.time_idle_water = 0.1919208888253109;
    msg.time_idle_underwater = 0.09700732368806109;
    msg.time_idle_unknown = 0.7283395981286718;
    msg.time_motor_ground = 0.7538017119081755;
    msg.time_motor_air = 0.5973079329234947;
    msg.time_motor_water = 0.5787831910420576;
    msg.time_motor_underwater = 0.8524397063490851;
    msg.time_motor_unknown = 0.35278400658111553;
    msg.rpm_min = 29105;
    msg.rpm_max = 19628;
    msg.depth_max = 0.4670258853372071;

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
    msg.setTimeStamp(0.4390153867694463);
    msg.setSource(42246U);
    msg.setSourceEntity(71U);
    msg.setDestination(31289U);
    msg.setDestinationEntity(203U);
    msg.timestamp_last_service = 0.467901752199134;
    msg.time_next_service = 0.8260100876570876;
    msg.time_motor_next_service = 0.6713876008615501;
    msg.time_idle_ground = 0.4230597455225277;
    msg.time_idle_air = 0.2442692802020171;
    msg.time_idle_water = 0.20282542013211846;
    msg.time_idle_underwater = 0.9168754015034276;
    msg.time_idle_unknown = 0.7277284949853938;
    msg.time_motor_ground = 0.807400431892315;
    msg.time_motor_air = 0.31875944199042017;
    msg.time_motor_water = 0.6537653216051285;
    msg.time_motor_underwater = 0.5855279311032592;
    msg.time_motor_unknown = 0.7931635672505067;
    msg.rpm_min = -11876;
    msg.rpm_max = 31841;
    msg.depth_max = 0.5502464236348431;

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
    msg.setTimeStamp(0.13442487813849613);
    msg.setSource(4046U);
    msg.setSourceEntity(13U);
    msg.setDestination(28690U);
    msg.setDestinationEntity(16U);
    msg.severity = 11U;
    msg.text.assign("RMCRDIONRYYVWUFQKAOOWAMVPWKUUUXGZSIOMYCPDJPKGPYMFCHLLBDCLURWTXHHIGNSYVYUJNCVZFAWGDSFZXKXRTTGOZIRWXHYNOIUKGIXOVTLUASFNMPLWURMDFLIZQ");

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
    msg.setTimeStamp(0.33140189471620096);
    msg.setSource(22203U);
    msg.setSourceEntity(74U);
    msg.setDestination(54374U);
    msg.setDestinationEntity(81U);
    msg.severity = 239U;
    msg.text.assign("UBBMKQHUQBRAYYTKROIHNXMCNXH");

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
    msg.setTimeStamp(0.32574990705021545);
    msg.setSource(24546U);
    msg.setSourceEntity(25U);
    msg.setDestination(35089U);
    msg.setDestinationEntity(63U);
    msg.severity = 134U;
    msg.text.assign("KMPHHXKZGGWTBOENOBQIRYVAYBRKWVMQNGBSRFJPJFPXTRZOZSCUVOBDHHPAQJDYEQATDQIOEARAQRZEUVTFZXULQCBKTXWVDJXMWVEIRYCBPDZDJIXGGLYHWITAFHWDWITRNNDPJIAKLOCCMSSXSLNWOCFLHWMCOLAGUZYZUCNUZPONBVFMZFAJEIPQYDMCKPMMSLHQNTFKJSXBYMEBUEHYYSSNTIGGJLJ");

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
    msg.setTimeStamp(0.023749953899721676);
    msg.setSource(40373U);
    msg.setSourceEntity(61U);
    msg.setDestination(35809U);
    msg.setDestinationEntity(193U);
    msg.channel = 25;
    msg.value = 1024035379;
    msg.gain = 82U;

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
    msg.setTimeStamp(0.5696811416363662);
    msg.setSource(62516U);
    msg.setSourceEntity(70U);
    msg.setDestination(9182U);
    msg.setDestinationEntity(233U);
    msg.channel = -75;
    msg.value = 688737012;
    msg.gain = 95U;

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
    msg.setTimeStamp(0.2970326338483339);
    msg.setSource(55918U);
    msg.setSourceEntity(236U);
    msg.setDestination(25211U);
    msg.setDestinationEntity(144U);
    msg.channel = 103;
    msg.value = 858285324;
    msg.gain = 154U;

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
    msg.setTimeStamp(0.8051795367339581);
    msg.setSource(4899U);
    msg.setSourceEntity(112U);
    msg.setDestination(44431U);
    msg.setDestinationEntity(81U);
    msg.ch01 = 0.6821605090641203;
    msg.ch02 = 0.7856595519068083;
    msg.ch03 = 0.9154361132461563;
    msg.ch04 = 0.03336232864054389;
    msg.ch05 = 0.5809553878881856;
    msg.ch06 = 0.2524225615527217;
    msg.ch07 = 0.36344920164284344;
    msg.ch08 = 0.17942655725006362;
    msg.ch09 = 0.76706857265804;
    msg.ch10 = 0.4929738681023764;
    msg.ch11 = 0.24518778027999089;
    msg.ch12 = 0.6742616567902133;
    msg.ch13 = 0.9382077387952842;
    msg.ch14 = 0.2388163844998069;
    msg.ch15 = 0.6596060139247705;
    msg.ch16 = 0.7711780304924232;

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
    msg.setTimeStamp(0.4455934686690668);
    msg.setSource(48380U);
    msg.setSourceEntity(234U);
    msg.setDestination(64781U);
    msg.setDestinationEntity(135U);
    msg.ch01 = 0.33283910402188954;
    msg.ch02 = 0.4250833652619441;
    msg.ch03 = 0.2885719963909469;
    msg.ch04 = 0.8916525021437356;
    msg.ch05 = 0.6799041892202966;
    msg.ch06 = 0.34845749459010844;
    msg.ch07 = 0.35360329517566824;
    msg.ch08 = 0.001168114332908976;
    msg.ch09 = 0.1776455561046344;
    msg.ch10 = 0.43442300389389077;
    msg.ch11 = 0.45552251202519367;
    msg.ch12 = 0.8230278961805995;
    msg.ch13 = 0.1237771520287636;
    msg.ch14 = 0.20854303672343344;
    msg.ch15 = 0.7210492780051806;
    msg.ch16 = 0.7624798246604056;

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
    msg.setTimeStamp(0.9997361719230179);
    msg.setSource(34728U);
    msg.setSourceEntity(207U);
    msg.setDestination(11077U);
    msg.setDestinationEntity(73U);
    msg.ch01 = 0.9914175888066028;
    msg.ch02 = 0.5281457677628163;
    msg.ch03 = 0.9715515979215049;
    msg.ch04 = 0.6553787812835619;
    msg.ch05 = 0.7281023857750769;
    msg.ch06 = 0.5674552525744959;
    msg.ch07 = 0.9589561592759528;
    msg.ch08 = 0.3715353244878251;
    msg.ch09 = 0.29890503264870183;
    msg.ch10 = 0.08623198732966297;
    msg.ch11 = 0.17469895238617617;
    msg.ch12 = 0.13084983997503807;
    msg.ch13 = 0.17483384551742498;
    msg.ch14 = 0.2138338022485089;
    msg.ch15 = 0.3545091482576933;
    msg.ch16 = 0.8610774342168795;

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
    msg.setTimeStamp(0.7692182391300922);
    msg.setSource(29543U);
    msg.setSourceEntity(43U);
    msg.setDestination(29521U);
    msg.setDestinationEntity(113U);
    msg.op = 197U;
    msg.lat = 0.758855608133533;
    msg.lon = 0.49634365469884745;
    msg.height = 0.40816605454694044;
    msg.depth = 0.7754333545092457;
    msg.alt = 0.2637856737502078;

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
    msg.setTimeStamp(0.8406350183233064);
    msg.setSource(44279U);
    msg.setSourceEntity(35U);
    msg.setDestination(17578U);
    msg.setDestinationEntity(37U);
    msg.op = 43U;
    msg.lat = 0.1958265514935299;
    msg.lon = 0.7281490515631984;
    msg.height = 0.01824350152886023;
    msg.depth = 0.3847994823985902;
    msg.alt = 0.06901018947678639;

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
    msg.setTimeStamp(0.23063852271644802);
    msg.setSource(31927U);
    msg.setSourceEntity(169U);
    msg.setDestination(28301U);
    msg.setDestinationEntity(187U);
    msg.op = 5U;
    msg.lat = 0.36145114057972616;
    msg.lon = 0.4437158199455531;
    msg.height = 0.9002578092037988;
    msg.depth = 0.16323662026384012;
    msg.alt = 0.25514880009748664;

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
    IMC::AbsoluteWind msg;
    msg.setTimeStamp(0.6257026071889631);
    msg.setSource(42900U);
    msg.setSourceEntity(28U);
    msg.setDestination(64508U);
    msg.setDestinationEntity(35U);
    msg.direction = 0.7448872698845644;
    msg.speed = 0.14142821245881887;
    msg.turbulence = 0.561219613849577;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbsoluteWind #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbsoluteWind msg;
    msg.setTimeStamp(0.4778096353579788);
    msg.setSource(64638U);
    msg.setSourceEntity(100U);
    msg.setDestination(45710U);
    msg.setDestinationEntity(205U);
    msg.direction = 0.06906532934852772;
    msg.speed = 0.0073770236452962434;
    msg.turbulence = 0.7601228153550872;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbsoluteWind #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AbsoluteWind msg;
    msg.setTimeStamp(0.7252708896882243);
    msg.setSource(50394U);
    msg.setSourceEntity(168U);
    msg.setDestination(34134U);
    msg.setDestinationEntity(108U);
    msg.direction = 0.6869317411251541;
    msg.speed = 0.5077077567236177;
    msg.turbulence = 0.31303202459748347;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AbsoluteWind #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisInfo msg;
    msg.setTimeStamp(0.7645908120724387);
    msg.setSource(22088U);
    msg.setSourceEntity(186U);
    msg.setDestination(35935U);
    msg.setDestinationEntity(80U);
    msg.msg_type.assign("HCEOGFJMKNHGTUWKTQHSACFDBIKNDWLZCRK");
    msg.sensor_class.assign("EHMIAITXDHRAETPRNRYMIAMYFLTHHCLIVCSRNQOXFCGHNOOWMIFFFCSUTBZLDJMCWXUYMSPNIXQWWLJWXBQLGSQKEDZZVGJZDNAYIWTDKBBRDSVHSLQJBRKRNLDZURXYBCWQWDKZZMHPKKPVHYPVEMFPG");
    msg.mmsi.assign("JBKOGKIOGUCDNQGZGGJHCDKVITWKDMSVXUFZHWCPWISJQTEFXNZYJFUYKELMITTLWSQAFJHV");
    msg.callsign.assign("DQXNWKAMZDZUUEXWSKMYUGEGZRZUBMGXFKLNFDETVHLYYHWUTLAMSNLVSDPZVGOVTQHOJOSMDJSIWKDOQFXQEDBACYMLNUQQINZSBRJFECRXLNZCBHDJHLKQIWVBWWKJMBYIWKBATFRAAJGKIFQZJOOD");
    msg.name.assign("XNHYDFZLNJHTXWMHTZPYXZNCOJVFRAGEKWRMKTNBEUDKBQCSOZCPIPHXEPUAADAOGMPFVDHQLTVNEQRACKEVNLBPJJKMUHJSDRHWEEEWJVIXCHKQAIHYVFOYZEWVZFVIUNBX");
    msg.nav_status = 51U;
    msg.type_and_cargo = 111U;
    msg.lat = 0.2582088725600459;
    msg.lon = 0.4486887946594369;
    msg.course = 0.04880890676626359;
    msg.speed = 0.7793637513026752;
    msg.dist = 0.007730158012739796;
    msg.a = 0.9648898656578717;
    msg.b = 0.018696971131582862;
    msg.c = 0.19044555232961013;
    msg.d = 0.047974324394777446;
    msg.draught = 0.21018016412906249;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisInfo msg;
    msg.setTimeStamp(0.8264847605039087);
    msg.setSource(60359U);
    msg.setSourceEntity(188U);
    msg.setDestination(15511U);
    msg.setDestinationEntity(213U);
    msg.msg_type.assign("FDQVJWHFEFGSGEKDNWVHLGHWTORXLBCLPROKWDLNDOKVYIQMNHXABAHXTMRMKVUIUJDOZADYWTOQCWYNXCKTJCJWMUUEUYBYMFXDPSJQHPBNEGCAONTUTUNZIZZLFQGYSIQALBBVDPYCXKRRYVOPCGSOQZQSRXPHLWUSYLBNFXHARNHXKEGMI");
    msg.sensor_class.assign("OEVZZIYAZWZHMYULDCLBCIQOBRZQUWZTXPLJSTSQMUBKKPQBFJNPSHTUHEACALSRGJMAXBCXJSSMIILOTKJOYZXDJAWWNLCGIXDUDHXTEORTORRVFNWAQAEVDLHFPKKBHVEYBMYVI");
    msg.mmsi.assign("SRMZWOZRFQWAVCKFCXFYFDQNWWICEZEGHWOGDOVX");
    msg.callsign.assign("LVQNUMIGJPDFBTBMKFFLROQAKGUSYLYBSLRGSHUQMBEMOSWCZNHKCDGOFTWBEPIXLNEBOEZPFVIOYIFMVOMUCMKWTXBRDWUJZUDJJQPPGWPXOCVXJNRYTSNZYVPCIHURPKXQUNUJZAZZJKNRXMGBHQCSZHQLYLVCVKKJAEJDAKTAQHWRWJTDRGAGSHYXDLHCQIYAOCAXZEBDFIZTEQREMMWLYPVIWDBKVSTUYHAWASGCIDSONEFIXVOXRHPG");
    msg.name.assign("XDHZCKFZOXBOBJSWEYLJGTXBNAHNVUIACTMWBBTVGDKRQJJNWEVQUJS");
    msg.nav_status = 117U;
    msg.type_and_cargo = 130U;
    msg.lat = 0.21793303143597942;
    msg.lon = 0.21091178143102673;
    msg.course = 0.8365731575543509;
    msg.speed = 0.3350503261927992;
    msg.dist = 0.7412630869163204;
    msg.a = 0.24893286475240184;
    msg.b = 0.32680712731840034;
    msg.c = 0.16835677882918287;
    msg.d = 0.6649270947075565;
    msg.draught = 0.8042881801464266;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AisInfo msg;
    msg.setTimeStamp(0.9100508543626314);
    msg.setSource(54125U);
    msg.setSourceEntity(102U);
    msg.setDestination(48580U);
    msg.setDestinationEntity(72U);
    msg.msg_type.assign("CCOGZWGBVGOHRREMAALCGFLOXEHVRYTSBVRDH");
    msg.sensor_class.assign("CLZHUEDZVVKYXEBUHLFPNGKPAJAVSNJRIGUFKIRCTESIFLANBZ");
    msg.mmsi.assign("EZRAKRFQWATUPHNVVXFZXKZIJSOVFDBYIRHFYCETDQIOXNBBXEWLUVAOJGWPBZLIILPEUA");
    msg.callsign.assign("WYHJAEXVRRTBSBMWTFNXPIXCJGNFZZZSCCLTVMSKJSNCCJUOOTHNLDZEKHRRPHQJGYWMROMVFUKARBEWIGVUUDXSHJCGIMKBZPLNPTQEPDENBKRPLPQVJEWYVDVMAFNVFWXZYSKH");
    msg.name.assign("VMQOKKQJFJVHUTJKFCBHMMEWUPFORSBXPVWRMLPAQGSSXSLLMAZNTNZGRDTLLHZUMJVE");
    msg.nav_status = 163U;
    msg.type_and_cargo = 22U;
    msg.lat = 0.4474635053427791;
    msg.lon = 0.6067458695891479;
    msg.course = 0.015612120740516766;
    msg.speed = 0.8047552613069638;
    msg.dist = 0.2437327122077736;
    msg.a = 0.5738292896840346;
    msg.b = 0.14946295838383294;
    msg.c = 0.41645802947953237;
    msg.d = 0.6271691402797941;
    msg.draught = 0.8249581645451877;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AisInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ENCAwareness msg;
    msg.setTimeStamp(0.5895751114418543);
    msg.setSource(13673U);
    msg.setSourceEntity(117U);
    msg.setDestination(36453U);
    msg.setDestinationEntity(196U);
    msg.depth_at_loc.assign("GVEKMAXGKKMGDWXFFZLFHDCQPXKSQJQDZZRPHUEQUONVMMXOPWCPURACCCLTPLBNIVIZNDKRQTBHDQSBJOIBHOIDPLLQARJAKIUGRJFHGGFJFCMGTNBTLV");
    msg.danger.assign("VSMZPHRBTYOHHKXMPEORHRUAXLOPRAJNFJSADNNQGGCPSGBXJBZXYREHGQWDHSFWVIZOFTJQCNTYAWYWOYELPCKGVLAUTPMOHZRHDSLDINKPJIFFILMDMOLMBAIFGTWRQBOWQWUCUKSOSOTBEPACPXSZKAPLVXGBEWHKKEWKTXDKHBZXEMEZNVTYALLRJIGYIBFWEUNFYJXQCVGYNNNUFRMLDVUZCKCIQRIUCSMEJGVJMSXUVFQDCUBYAJZQTQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ENCAwareness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ENCAwareness msg;
    msg.setTimeStamp(0.025223961989326082);
    msg.setSource(46493U);
    msg.setSourceEntity(218U);
    msg.setDestination(46670U);
    msg.setDestinationEntity(247U);
    msg.depth_at_loc.assign("BXHUZPGGUBXMYYWIPVIZKUXFBBZKLGEXDUSFFHMLMIBRCMSBOINJPJMQKYZCAHAGTQDNJMAFNFIAZPQIHTCWMRDSNTNZYXFWJESOTEJCCLIVFGHTWTJZKTDWDPQMQGSVLADCOQVXSOOOKUWKDYBNLGZKRREOHUYYERZVINLNCNQJEAL");
    msg.danger.assign("PAWEWQHNGIWGDLDWGFOBJTLIBNCHKVUIKXBHAXSSZPOBZBTDBDLEVYPFUYDIKAQSCHMZVUJGYWFVQQJIRGQUMHOFRAHUTNNFIVZSAXHZRQNMVTSOQPTMAGOCOFLQNRDEQLDYBUMWYPOXWYFUURRFMMXZSRECAAOHPOPCPT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ENCAwareness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ENCAwareness msg;
    msg.setTimeStamp(0.28818852004908113);
    msg.setSource(34728U);
    msg.setSourceEntity(4U);
    msg.setDestination(32821U);
    msg.setDestinationEntity(159U);
    msg.depth_at_loc.assign("VCQWTTKAVQIMEKBUFRUJBXCMXWYIDCFVRASKEUNVH");
    msg.danger.assign("DPMBYTLHWVROTDUFMDHXGCNFSJSHQLV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ENCAwareness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Displacement msg;
    msg.setTimeStamp(0.8856305161941244);
    msg.setSource(60074U);
    msg.setSourceEntity(252U);
    msg.setDestination(21354U);
    msg.setDestinationEntity(209U);
    msg.time = 0.21561385210371742;
    msg.x = 0.28964209593602697;
    msg.y = 0.35793588776996654;
    msg.z = 0.3765857580931359;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Displacement #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Displacement msg;
    msg.setTimeStamp(0.5077899718022839);
    msg.setSource(21536U);
    msg.setSourceEntity(180U);
    msg.setDestination(39779U);
    msg.setDestinationEntity(244U);
    msg.time = 0.3536947266201531;
    msg.x = 0.09715110031803509;
    msg.y = 0.45469723554959507;
    msg.z = 0.227427068237799;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Displacement #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Displacement msg;
    msg.setTimeStamp(0.2844543981230132);
    msg.setSource(13007U);
    msg.setSourceEntity(115U);
    msg.setDestination(27455U);
    msg.setDestinationEntity(151U);
    msg.time = 0.3234448008694032;
    msg.x = 0.1961823536479843;
    msg.y = 0.7020435484527646;
    msg.z = 0.09063753052379653;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Displacement #2", msg == *msg_d);
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
    msg.setTimeStamp(0.08743756024418214);
    msg.setSource(59930U);
    msg.setSourceEntity(217U);
    msg.setDestination(14266U);
    msg.setDestinationEntity(164U);
    msg.nbeams = 95U;
    msg.ncells = 185U;
    msg.coord_sys = 99U;

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
    msg.setTimeStamp(0.6249414537269158);
    msg.setSource(65210U);
    msg.setSourceEntity(231U);
    msg.setDestination(25907U);
    msg.setDestinationEntity(73U);
    msg.nbeams = 92U;
    msg.ncells = 196U;
    msg.coord_sys = 180U;

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
    msg.setTimeStamp(0.8674103271093289);
    msg.setSource(16585U);
    msg.setSourceEntity(208U);
    msg.setDestination(693U);
    msg.setDestinationEntity(76U);
    msg.nbeams = 44U;
    msg.ncells = 168U;
    msg.coord_sys = 117U;

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
    msg.setTimeStamp(0.008195454566045646);
    msg.setSource(39270U);
    msg.setSourceEntity(234U);
    msg.setDestination(19100U);
    msg.setDestinationEntity(82U);
    msg.cell_position = 0.7930636785694557;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.5180087852085875;
    tmp_msg_0.amp = 0.7161264298098939;
    tmp_msg_0.cor = 142U;
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
    msg.setTimeStamp(0.03705137172954043);
    msg.setSource(4399U);
    msg.setSourceEntity(245U);
    msg.setDestination(4808U);
    msg.setDestinationEntity(209U);
    msg.cell_position = 0.4621100879719834;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.9736046352387209;
    tmp_msg_0.amp = 0.4680747485814605;
    tmp_msg_0.cor = 72U;
    msg.beams.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.5253766100135708);
    msg.setSource(36260U);
    msg.setSourceEntity(88U);
    msg.setDestination(50692U);
    msg.setDestinationEntity(188U);
    msg.cell_position = 0.3683029324702324;

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
    msg.setTimeStamp(0.32603739936139686);
    msg.setSource(48496U);
    msg.setSourceEntity(215U);
    msg.setDestination(29861U);
    msg.setDestinationEntity(204U);
    msg.vel = 0.7025639254049061;
    msg.amp = 0.2440924231045135;
    msg.cor = 6U;

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
    msg.setTimeStamp(0.18255397122856964);
    msg.setSource(14285U);
    msg.setSourceEntity(134U);
    msg.setDestination(37656U);
    msg.setDestinationEntity(208U);
    msg.vel = 0.6691528088818781;
    msg.amp = 0.0064082078427671885;
    msg.cor = 233U;

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
    msg.setTimeStamp(0.15787454457556083);
    msg.setSource(56566U);
    msg.setSourceEntity(218U);
    msg.setDestination(25756U);
    msg.setDestinationEntity(66U);
    msg.vel = 0.5420128495743592;
    msg.amp = 0.59925538577928;
    msg.cor = 135U;

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
    IMC::Frequency msg;
    msg.setTimeStamp(0.9113816900864009);
    msg.setSource(6277U);
    msg.setSourceEntity(231U);
    msg.setDestination(55941U);
    msg.setDestinationEntity(91U);
    msg.value = 0.08103393481618826;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Frequency #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Frequency msg;
    msg.setTimeStamp(0.7425121538022258);
    msg.setSource(27227U);
    msg.setSourceEntity(253U);
    msg.setDestination(56669U);
    msg.setDestinationEntity(226U);
    msg.value = 0.35681823633092324;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Frequency #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Frequency msg;
    msg.setTimeStamp(0.09851842189015103);
    msg.setSource(56098U);
    msg.setSourceEntity(15U);
    msg.setDestination(17294U);
    msg.setDestinationEntity(88U);
    msg.value = 0.12321509193291758;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Frequency #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaveSpectrumParameters msg;
    msg.setTimeStamp(0.9702165759688707);
    msg.setSource(33598U);
    msg.setSourceEntity(212U);
    msg.setDestination(44778U);
    msg.setDestinationEntity(43U);
    msg.sig_wave_height_hm0 = 0.004294604991202267;
    msg.wave_peak_direction = 0.5048542971023389;
    msg.wave_peak_period = 0.6501153771490025;
    msg.wave_height_wind_hm0 = 0.06679880177069308;
    msg.wave_height_swell_hm0 = 0.15236507632909457;
    msg.wave_peak_period_wind = 0.031873534971236905;
    msg.wave_peak_period_swell = 0.427095422093684;
    msg.wave_peak_direction_wind = 0.5140978087450135;
    msg.wave_peak_direction_swell = 0.8036866704395955;
    msg.wave_mean_direction = 0.6995213583096203;
    msg.wave_mean_period_tm02 = 0.21634259470006112;
    msg.wave_height_hmax = 0.6405761891274131;
    msg.wave_height_crest = 0.588777206071108;
    msg.wave_height_trough = 0.6060130298054358;
    msg.wave_period_tmax = 0.30983450628863374;
    msg.wave_period_tz = 0.23141031093281583;
    msg.significant_wave_height_h1_3 = 0.6548497982455355;
    msg.mean_spreading_angle = 0.7675577175177967;
    msg.first_order_spread = 0.8548155324207307;
    msg.long_crestedness_parameters = 0.33647621843599884;
    msg.heading = 0.9269640855392919;
    msg.pitch = 0.28069334662087264;
    msg.roll = 0.5457574413850899;
    msg.external_heading = 0.5946990656059211;
    msg.stdev_heading = 0.608376810309676;
    msg.stdev_pitch = 0.20320491950288988;
    msg.stdev_roll = 0.7201314854370289;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaveSpectrumParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaveSpectrumParameters msg;
    msg.setTimeStamp(0.02739962689763109);
    msg.setSource(1013U);
    msg.setSourceEntity(61U);
    msg.setDestination(19379U);
    msg.setDestinationEntity(178U);
    msg.sig_wave_height_hm0 = 0.47207768592308386;
    msg.wave_peak_direction = 0.6036665511333992;
    msg.wave_peak_period = 0.16266906285446214;
    msg.wave_height_wind_hm0 = 0.9072596063779916;
    msg.wave_height_swell_hm0 = 0.14786198929149652;
    msg.wave_peak_period_wind = 0.7302967630631305;
    msg.wave_peak_period_swell = 0.5412890171922803;
    msg.wave_peak_direction_wind = 0.7617688920947979;
    msg.wave_peak_direction_swell = 0.5863759552136232;
    msg.wave_mean_direction = 0.4410755736483376;
    msg.wave_mean_period_tm02 = 0.6378695773418299;
    msg.wave_height_hmax = 0.20773148184062562;
    msg.wave_height_crest = 0.03174969338023981;
    msg.wave_height_trough = 0.4137666170209241;
    msg.wave_period_tmax = 0.5641650182957073;
    msg.wave_period_tz = 0.932668074094725;
    msg.significant_wave_height_h1_3 = 0.07851595200713124;
    msg.mean_spreading_angle = 0.46966225553873486;
    msg.first_order_spread = 0.4450493794006042;
    msg.long_crestedness_parameters = 0.43043590297937817;
    msg.heading = 0.6298896368531264;
    msg.pitch = 0.13477181387143844;
    msg.roll = 0.18072879157095945;
    msg.external_heading = 0.8965537221207784;
    msg.stdev_heading = 0.4534576308756446;
    msg.stdev_pitch = 0.4987928891506974;
    msg.stdev_roll = 0.3438312666065836;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaveSpectrumParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaveSpectrumParameters msg;
    msg.setTimeStamp(0.8030794800705501);
    msg.setSource(20170U);
    msg.setSourceEntity(180U);
    msg.setDestination(44322U);
    msg.setDestinationEntity(219U);
    msg.sig_wave_height_hm0 = 0.8371767614218328;
    msg.wave_peak_direction = 0.03269412600077792;
    msg.wave_peak_period = 0.9419794794973709;
    msg.wave_height_wind_hm0 = 0.907240324404799;
    msg.wave_height_swell_hm0 = 0.3584668942908156;
    msg.wave_peak_period_wind = 0.38449760153287404;
    msg.wave_peak_period_swell = 0.5686068008196249;
    msg.wave_peak_direction_wind = 0.6382663969145542;
    msg.wave_peak_direction_swell = 0.9408930841947188;
    msg.wave_mean_direction = 0.116556403437036;
    msg.wave_mean_period_tm02 = 0.8275624222264816;
    msg.wave_height_hmax = 0.2692255684224475;
    msg.wave_height_crest = 0.7788325607669093;
    msg.wave_height_trough = 0.6097989218150219;
    msg.wave_period_tmax = 0.5028470474486242;
    msg.wave_period_tz = 0.5987958715224552;
    msg.significant_wave_height_h1_3 = 0.7978776807652186;
    msg.mean_spreading_angle = 0.4779433508888191;
    msg.first_order_spread = 0.07658740434969524;
    msg.long_crestedness_parameters = 0.8581399480607111;
    msg.heading = 0.18100931569316137;
    msg.pitch = 0.7340719895439282;
    msg.roll = 0.26837828749945114;
    msg.external_heading = 0.051492222408297206;
    msg.stdev_heading = 0.2418372750099429;
    msg.stdev_pitch = 0.41527938996302804;
    msg.stdev_roll = 0.5984799953777837;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaveSpectrumParameters #2", msg == *msg_d);
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
    msg.setTimeStamp(0.07388621086388558);
    msg.setSource(49098U);
    msg.setSourceEntity(100U);
    msg.setDestination(33086U);
    msg.setDestinationEntity(71U);
    msg.name.assign("AAPNKTIKQIUDSBEPAAMXXTQFSYFGVPDNVRTPFWCLBEXUXSLIINLHBVBDDOEDIZISSGPGWQJWKYDMEZWQMPHRFBZJZNVYCRWOW");
    msg.value = 253U;

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
    msg.setTimeStamp(0.6936087204752005);
    msg.setSource(41239U);
    msg.setSourceEntity(68U);
    msg.setDestination(22900U);
    msg.setDestinationEntity(252U);
    msg.name.assign("EMMSRRINKMZVNTLIDPBWJQPDIXNEADIIUYFOKBMLLJLJUYBVSXTYBWAPEABRBDBZUTFLMUNDYWUXRHPHUQGKLFWMOXJTHPZQKOAQPMZBFENKDKODWSGFVTYVAJCGUCOEAGCQKQSLWMROIIGUPSLHVFJEJWTRNJWDYUHIRSBDXWGNZXTYXZGNVQSRKOVOHSEGSZZVMYBASPHKGACMPPIOVQJZVXE");
    msg.value = 49U;

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
    msg.setTimeStamp(0.5876515449063355);
    msg.setSource(3853U);
    msg.setSourceEntity(160U);
    msg.setDestination(3777U);
    msg.setDestinationEntity(137U);
    msg.name.assign("WPPHTUUIRRMRNWTXIAFZPAELGGFTVCSAVJYFHKDJMBNWZHJIBWROMUFHYDGBLWBQPHPDDROWSWZOWMIVGEOEEQPJNOAONJGEYQIHJITAIYFYFNKLOJVNVZJYZCFBYOQPNKXCZXUDOUTNLTQMXGFJSBSGLJKCFSFOTDMQSKGDHRPSBTQVZSMLNHXZWYPCALLVEXUCQVUKGHXCUCGEAXCIPERYVMKTNKRDCIHQSWLKAZLQSIDEUARRZTYAVUKB");
    msg.value = 85U;

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
    msg.setTimeStamp(0.6613617139269804);
    msg.setSource(34283U);
    msg.setSourceEntity(97U);
    msg.setDestination(58923U);
    msg.setDestinationEntity(158U);
    msg.name.assign("EYJSKGEWQZWMEJQTDFNKRDFSTDOOBGHAPFBNGCNRYUBJZDERXSVGBTICQGULZJGQTYJINLSIVCTFMAYPSAVGMEQWJIJAEICFXLRKOTBCXHLPHEUZRFSAMXKBRULEYIRMAHZXSVCQHWDYPWWQNLYXAKKMIWANDPEITNVGYRUSHNZBJAKTLPYSZCPOTOXQZNAFZDCRDJLHBMHUZXXNMPSHCUFQBKOHXPOKV");

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
    msg.setTimeStamp(0.41845788594327216);
    msg.setSource(16540U);
    msg.setSourceEntity(9U);
    msg.setDestination(35899U);
    msg.setDestinationEntity(187U);
    msg.name.assign("MSVDFUQUDEBGICPUWIBVYSOJBZHRCIHWYYSGKTIXQWGKXRYLEJOMRUFZBZSCEEUXDSOHWHOLYGUFTXQAQJOTHAJRRZPBKTURRRKZWOEJIMKFFZVTBTQZDKAH");

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
    msg.setTimeStamp(0.740868525079098);
    msg.setSource(56364U);
    msg.setSourceEntity(195U);
    msg.setDestination(48646U);
    msg.setDestinationEntity(43U);
    msg.name.assign("NVQDEOSHDSKDGJLZVY");

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
    msg.setTimeStamp(0.0057844956745669585);
    msg.setSource(61668U);
    msg.setSourceEntity(64U);
    msg.setDestination(53935U);
    msg.setDestinationEntity(117U);
    msg.name.assign("JBUMEQCWPPQHFIYHAMLBWTAIDGHLDWGFTNMVKAYTJZSIJZBFFCZPYJLZYUTRBMFZHHOPHIPFLRNXOYCRZNQENRJUEPDNOGCGBJAUINPDHTYKOAVDWDLEAQSXTJYAQQYGEDILCRBYLUKDKMVOORLAUKNPSLVIIC");
    msg.value = 188U;

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
    msg.setTimeStamp(0.7656134494402188);
    msg.setSource(63202U);
    msg.setSourceEntity(128U);
    msg.setDestination(4286U);
    msg.setDestinationEntity(59U);
    msg.name.assign("JHKWDCABYZCWPERVKMZKNOLZIFATBPYAMOVDNFOGWNOKXFIJNQECUGLLSHVEBSJXCSIPDKMFGQIHVILBTFTGNGMYWEAGAORZNPLMXOPDZCCESGUQJYRMVWIBHZJLMRITIBOUXDTILXLPXOFUYOCNMMLKHVLFKEQQVHJKYDCEHSYBFQNPXFRGRHZJAHRCZMCPUYQPTGQWRVBETJRDTAW");
    msg.value = 89U;

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
    msg.setTimeStamp(0.8536734946188149);
    msg.setSource(35389U);
    msg.setSourceEntity(240U);
    msg.setDestination(20180U);
    msg.setDestinationEntity(169U);
    msg.name.assign("PEYSMTANQIQSPTRBHQHYETBEZUSLKILYHTVBQDHXK");
    msg.value = 122U;

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
    msg.setTimeStamp(0.4394819484902487);
    msg.setSource(62716U);
    msg.setSourceEntity(193U);
    msg.setDestination(9994U);
    msg.setDestinationEntity(50U);
    msg.value = 0.8692327705505677;

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
    msg.setTimeStamp(0.3554507384964545);
    msg.setSource(6513U);
    msg.setSourceEntity(245U);
    msg.setDestination(13753U);
    msg.setDestinationEntity(241U);
    msg.value = 0.2571402360290599;

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
    msg.setTimeStamp(0.11526327995293262);
    msg.setSource(57675U);
    msg.setSourceEntity(152U);
    msg.setDestination(58850U);
    msg.setDestinationEntity(187U);
    msg.value = 0.4069739049811265;

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
    msg.setTimeStamp(0.32673107926456546);
    msg.setSource(35046U);
    msg.setSourceEntity(32U);
    msg.setDestination(30535U);
    msg.setDestinationEntity(156U);
    msg.value = 0.6730767191279277;

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
    msg.setTimeStamp(0.3832751404631173);
    msg.setSource(61041U);
    msg.setSourceEntity(114U);
    msg.setDestination(19097U);
    msg.setDestinationEntity(211U);
    msg.value = 0.22771203619596758;

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
    msg.setTimeStamp(0.8257427971839115);
    msg.setSource(18493U);
    msg.setSourceEntity(214U);
    msg.setDestination(40374U);
    msg.setDestinationEntity(214U);
    msg.value = 0.028733776173734404;

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
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.31550463164733167);
    msg.setSource(31423U);
    msg.setSourceEntity(198U);
    msg.setDestination(29639U);
    msg.setDestinationEntity(155U);
    msg.value = 0.7167450331309402;

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
    msg.setTimeStamp(0.6717573688232347);
    msg.setSource(8172U);
    msg.setSourceEntity(19U);
    msg.setDestination(7419U);
    msg.setDestinationEntity(3U);
    msg.value = 0.5873455306227776;

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
    msg.setTimeStamp(0.5735686563367781);
    msg.setSource(29153U);
    msg.setSourceEntity(39U);
    msg.setDestination(25698U);
    msg.setDestinationEntity(130U);
    msg.value = 0.7974478352092298;

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
    IMC::CommRestriction msg;
    msg.setTimeStamp(0.3730557639271539);
    msg.setSource(6405U);
    msg.setSourceEntity(161U);
    msg.setDestination(8627U);
    msg.setDestinationEntity(52U);
    msg.restriction = 53U;
    msg.reason.assign("QLHJVXJNGMCTTOFEXODDPFVTSYOOBQRJUOQGMIYEUJUHRSBBMWKKJBWXLSRKPTAIZQNLEZGEMUCQVLYKVQU");

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
    msg.setTimeStamp(0.9815918299469685);
    msg.setSource(11920U);
    msg.setSourceEntity(197U);
    msg.setDestination(16573U);
    msg.setDestinationEntity(171U);
    msg.restriction = 91U;
    msg.reason.assign("FPYXEDKAHMQLUZVAIBHROVIHTEHGHSECLXYWPQKNVQUZHLJJWCYSOKOZOLFZWYVGRIQREOGGFKHUTUEFXJNPJSJVMXMNUEBOCJDUIKPPPDATYQNNBCIPAMKHXFRXJSRGEOCMKMULYZBTRFNTFPZAHQXQCIWOLYQEINKOLNRAQSDGHZKZMZWWGCOTFSBDBMYVGANRUWASLDNIWED");

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
    msg.setTimeStamp(0.7761713068314807);
    msg.setSource(46111U);
    msg.setSourceEntity(254U);
    msg.setDestination(48507U);
    msg.setDestinationEntity(116U);
    msg.restriction = 214U;
    msg.reason.assign("LCDIPEVMMHICGGIXXXOAAZZHBWMGAMHQQSOLVKCYTELSTVBTEOSGTNHAWDNHHRYUZENPOXRUAWVFDRFJEIRRDMDTYAOLB");

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
    IMC::QueryTypedEntityParameters msg;
    msg.setTimeStamp(0.3496270934329393);
    msg.setSource(18324U);
    msg.setSourceEntity(121U);
    msg.setDestination(12067U);
    msg.setDestinationEntity(180U);
    msg.op = 87U;
    msg.request_id = 2116962168U;
    msg.entity_name.assign("NYLIKCHKLSDGORVEYWBFSMRFYGPQMWMRTESCUYQXVPGYMLRAJLVFFULJDHJWGCNNGBPKCKFETMWZ");

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
    msg.setTimeStamp(0.8921857641233812);
    msg.setSource(23626U);
    msg.setSourceEntity(214U);
    msg.setDestination(14357U);
    msg.setDestinationEntity(245U);
    msg.op = 243U;
    msg.request_id = 2633452483U;
    msg.entity_name.assign("GKVQACRUOZQJWMWRZFLJSDSMBAWTCGRFPLCOZGLQNDJEXYZVNVWDTFIFAAXKMANZDMULSGESTBQJSCOQDYMWWIYTRBFDXHENZLNNNEGJMPCXHPYWJYULXYGBBVDGSXWSOUPEQFYKOIUHRILIVHTCPOLVMVKTJAVLQ");

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
    msg.setTimeStamp(0.21455837774853947);
    msg.setSource(52514U);
    msg.setSourceEntity(96U);
    msg.setDestination(43623U);
    msg.setDestinationEntity(172U);
    msg.op = 20U;
    msg.request_id = 2774067892U;
    msg.entity_name.assign("BSGOUCUGSVQBMIKMLQQMFWNPIYWPMWVYOUOPQKTVTTIETTQFRIPUVYDJEDJVOKEOGJNBYMDWNNSXBZGXFUEOMIFBCVSEDBCYDNRPLF");

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
    msg.setTimeStamp(0.17616000866559922);
    msg.setSource(54705U);
    msg.setSourceEntity(78U);
    msg.setDestination(43912U);
    msg.setDestinationEntity(222U);
    msg.name.assign("TXECFKUKJESUOUOZLZWZHFAQDENMMIKAJRNUZIOQJWZJMGLNSUCXXJOWVLXXMAQVRFBKTWAURDJMOSRGKHQQOZNGIYFIWYFGMVFEJZBBYSSLPRRVKKVXLLCTYHHPDLUDQBCTPPINSGGTLGAPNTCIARWVGTDJGHGTPFOCEEBNNCWNVLCEMQHHRUHQVDVBZXOKRPUWMMEDAAMSFBQKEFHXYDVXCSIYJQOIYOYTPFBTHXKYUDSBZAWWDCPBRALN");
    msg.type = 232U;
    msg.default_value.assign("ZEUNCZQZGCXDQQGEDJAZLHRMDHBCTLMOMVVQDAWORTIPEQXKTXIFPVVWHWAHLDTSLPPRQUNJTQBSCLVOBFLGMRXNSNUMJBARDCRSHKMXNSELHTMXPGHYLHESJXUYXWATIPVFRYGWKCHTQARQBFJYGFLACKVEVUJMZUFNGBIIASVRSAMI");
    msg.units.assign("LTOOXHKNLPKLMDLFTMYCGJJUXCLTYWFAWCVADMJHYHSSIYFLKTRULQDQCHFOBJNPIITSXZRKOBSRFXJKPCRZWPGAMGRZK");
    msg.description.assign("GBYBSBYDSOLXHITINHVKZLZICUFYZLQENYDLFCZZCWVBWKWMSWFXVOMPHQANCWXNLAVZGOBXYNIJUKOCSPXJXDCQJSTFNVHHYLKMYHDMOKKNIEBCBNMOXKXMQVVCPPZZEWLKQFJGPNGVJDHHDGRPFQEAHFRWXOPETZUGTWHXIGRUFLRAQMOGZUDDUSTUMP");
    msg.values_list.assign("ZEZWCVBDONPBCLUXNSRKROOQIPHGAICZYWQWTYPVVEBTQHDOOCNDAYBBEDQMEFFGWFJXIQERJTSQIYBKGIJHMSGUJVXNLAAGFKVMNBZTUTOYHJCLHPTFSTRBYNCZUTSOWWYMHDCFUJFHPFQOBRLYXUKEPRRRIBYLQZAOWGDJMSMURWAGINP");
    msg.min_value = 0.938426260316319;
    msg.max_value = 0.944920928865953;
    msg.list_min_size = 93U;
    msg.list_max_size = 19U;
    msg.visibility = 115U;
    msg.scope = 56U;

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
    msg.setTimeStamp(0.26927584631193635);
    msg.setSource(58016U);
    msg.setSourceEntity(191U);
    msg.setDestination(56570U);
    msg.setDestinationEntity(2U);
    msg.name.assign("YXRVCZAJOEQLMFTJIUJLBVTHGIMISUC");
    msg.type = 186U;
    msg.default_value.assign("VHNZRYZCNOIOJQOPGWSBSJNTIFPDPBAEINKVCQABPBOHRYUONITITUYEXWIXCVMLRJYZNXLJWZMHNVHUTZJTVNLJKXUDQYDZAWOFMDUGSLFUJPQGZIFWEWKXOCKRHXSROKEWHEHBCQANVEWZIYBGHMFRSXCAQCQOEMEJXGCASIXYVQPSTVWLDJGEZADIRWVEQQARPPGLZMCDGSMYDSBBFLKUBHLNKDGPXVFJMCKHDFBTPAFKUSRLKM");
    msg.units.assign("LJSLFDMRIRK");
    msg.description.assign("SJTMRTRXOIUUWBZJPUPLSQAKXZDUKXXHHULEEIKLKAHYYYAQEFIAQIOHRZPBHJFDEMFMAWTLZBJDXSFCJSIXIVZYDYIXJVNFEVMOKVM");
    msg.values_list.assign("WTSNBCHDLVIOULEQCUELJQATSXBVSKHPDDCXXBXKPRXBMPCMXYOIEPEZVZC");
    msg.min_value = 0.45090250829400347;
    msg.max_value = 0.2884993929514912;
    msg.list_min_size = 71U;
    msg.list_max_size = 97U;
    IMC::ValuesIf tmp_msg_0;
    tmp_msg_0.param.assign("NVTWUOSRPNDGDSEUMYGBPXDZMCIZAECIKRAZBYNMGGXVVJTIFNWGFLYARKOYCLQBFAJJELAPADARQJHOFOYPOVTDUSEKGEMBXZXCOUGHHWIYXDTFUAIEJKHJSTZHVUNBXGPOZRVWGMDBSXWQEPIAELJPRNWNRCFVJHRHNTUBBLYXDMJYWKWKTMBXFNUSHASHLIFFDLYQCFDZTRQKIQQOZEVCUCZTLWCQLOVCPLBQORSKKWSHIGVPZ");
    tmp_msg_0.value.assign("SAEUDMPRCNEGGLBIPLVSNYDYMFSGAOFDFZHQTJXOEZTVMOLEXIZRFDQUFQKTZPTKAPYIPDEQIRCVJNGVUQYTMSKTWOSTAZOIVADBBFJAJNLOGOWWHHCCVXXQNGNNRHEXDGFFCOFWXDPMKQWWHHBUPKKNDUVBLATIGZYCJEJXYARCXGEOVQEUFDMGVPKYKEBJZURSLWPMRUYBMJQRJNQYVSBWLXZBWOKHCCAUIZAKM");
    tmp_msg_0.values_list.assign("IWXIFBLRFFDKMKZHVCZRJQVNEUAQBXJNDBMREZSJOTPGGTXZGA");
    msg.values_if_list.push_back(tmp_msg_0);
    msg.visibility = 129U;
    msg.scope = 86U;

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
    msg.setTimeStamp(0.4097290347999548);
    msg.setSource(28221U);
    msg.setSourceEntity(166U);
    msg.setDestination(51791U);
    msg.setDestinationEntity(206U);
    msg.name.assign("BARHKBEVALXWHTCOKQKLRZYBMUVJZIVFNJQTZXQBRICYUOIAPOOJUAGFLSHURMJSNZQTRJROREGWCDXEQZDRVYGVDGSFHMJBIMGYVBOKSFPTBIZDSZSRQIYPHWNTAWGPKNECXKHMHCTFMSCVAOAJMUTXYTTMRQCHXEPQGCULXAXFNEWOIPAUYUYFZCKSUEFJPNWZEDVDMLWJDHGMOKVLISOADFBTXNVEUYNKLWPEXSPLQLFWNIIZLG");
    msg.type = 8U;
    msg.default_value.assign("SWTCMZHATFXMRDPEKFJCBUEKQEQQTRIJQOAHJPQTINVPBICCXBAWFEOXQKZRWRNNNXKLMHZNEBYGOTYCGTDEPRHQYLWVDNGYIBPUMMRBOSDEUFHPXTSLFSDAOCOLPYVOYXTNXOBMPFXYAHKDKISSWQVUMJWMWUCICXCXGNAZQQASVYYZOWHYGTZARUPJVLBACUGDROWIZULLANDFFRLJHSVFJKLHMHZMGNUIJIBDDGZIZE");
    msg.units.assign("JBSHNFKNXLWQVXXWQPZTFVUUHFNOSKIIIOUABPPKGDVWQIORAYFCOFMHBNMMBZEQYSIYEGIXTXLOJVGNELLHFBVYLWO");
    msg.description.assign("EAYKYEZYUXTPWPZUEWGUQVMQDPVWKFBTNMLDSMQNWZVOGWAAJYCDCQDWGICAXNHEFFYIRBULRENKRMWUOOCHKOBCOEVOPBQBSHLXJYRJORJUFJHYHIASTFNXJSOQFTDDNRVSHHXYAJJTXQDPSPHYVSMMGLMPFFUDFRQZSPZLBCFUTCZTKVLYRAMKEBZIGBGCSEGNLIIMKBDRLGKKIGERLCTBEJZJNPWZOWHAUAQLVTKZHXAGSCIXXW");
    msg.values_list.assign("XPIDFFWWVZYWFKNHGVQAMGEABMBETWSKVOXAMEMUFUHYMJSGBNOPXLJLSHQJRJYNRTQVCYUPQQJBXILLUHVRAIAKXLBV");
    msg.min_value = 0.0789082121587159;
    msg.max_value = 0.9864646978638082;
    msg.list_min_size = 119U;
    msg.list_max_size = 21U;
    msg.visibility = 253U;
    msg.scope = 207U;

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
    msg.setTimeStamp(0.6677516800661343);
    msg.setSource(40575U);
    msg.setSourceEntity(222U);
    msg.setDestination(27965U);
    msg.setDestinationEntity(209U);
    msg.param.assign("LUZQWXPOEURQGKLPRVZRYTRULDZEQQYIJGBSURHVYCFEIPKCGTLJOU");
    msg.value.assign("JUEPASASKPETGMYPOPXCWDTQYVFRRKYFSQIDANHUFTMXBBZCGTOQHOGDIBMDMFECIDTERCFMBIWZBUWYVKJWGCSCALNITOWPFVEGZCQYTVDPNIULOWUCUYQCGAJLPRQFDKRKBFIKJAUSDJJNRHHLYVPQH");
    msg.values_list.assign("VOHTGEUDFREZXUEFRJNOJUGTKWCOCLQPLCUCKKDSZMLNPAOABWXKTIAZQOWWITBRDNFHRRRGWEYONYTZHYCLMHRDHFDRQAVGWFZFPJIXNXPPZGMYFNIGOXERLEDUUEONVTVUDEHKJQOLBESAQMHHFICRSMKFISYMBSQGKGGGVYSATMVJSJIVLNDUXOIWMXVZZSEHLNTVXYBSWXTADZDBPPQPAJAMBXPJVMAYKWJKYPBIUTIBCLHQJQFCYLKUSB");

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
    msg.setTimeStamp(0.15458691799324042);
    msg.setSource(10796U);
    msg.setSourceEntity(108U);
    msg.setDestination(61881U);
    msg.setDestinationEntity(242U);
    msg.param.assign("QSMQTLQGDXYNKXBLDRJXAGNROWOSQZOUUKIXOMWNHMNHIANWFHCEQZQAKVLWVIDEBLFJOKBZFVYJCLRBMIDKIBGKGLTHWQJMZRZFDIUQECZVKSWPPXGXLBAATIBUCGOFYWWPKHORVYUUTUMGWMCYLVOXUFJPDDJRPZCTYDEVZDEPJHLXUAPFCBFVGDSFSTZTKHYMECNJEMVCOEOEAXTFRSQJAKSBPTCQPRMG");
    msg.value.assign("QZQNSYXZMGIIDZDCFMPYAHFAYOMASJGEEZLERRNKLFCXDZUIBPGFIMQMFTJAZKRKPEEVSLJWHHHASJGBUFAEFCAINHKOVKCPTRXBGGZKKKVIGXUUVDNSQNYLYVQRUFOERITMWOWHIXZDWDPKPEXLIPNJMW");
    msg.values_list.assign("VASQKLPRXFVETTJZQIFAHRALXMSKWPULIZQXXEGDDIDKCNDEVLEJKNRVOQIFPGRVBGSXIOYZCPWRBCTNJOKJOEVGLHBDTMEUIWCIPFSWCJNGFGOYCKFQMYDZLXYBWLQUOTLPMHOWBANCZRM");

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
    msg.setTimeStamp(0.0451365343431861);
    msg.setSource(46494U);
    msg.setSourceEntity(170U);
    msg.setDestination(3982U);
    msg.setDestinationEntity(233U);
    msg.param.assign("NQYZJHHFQXAKCXIOKTUCPGHNDEGZVMVYKWGODOQTPECCOXAWUEMUALYZGIGKEIICUQNPZRJESTBDBYQJJIYVNMGZDLKTSSWDBJDLOTJPBOCNONAXVLMLDJWQLKHRUXQSWWTCFOLAYJIHYOGAEJNUFFAPSUBESXBRPRSGZXMVNLKHBDQWZZRSUTRFMVRT");
    msg.value.assign("TZZXCKCFORUFERVGMAZXNCIBCPCDAXMDMUNNSJRVJUFNLSYTQXFEKWHIURQOAYSEDPRXRTAQWUTVAYPEVBOKPSZEHHJLKHQQNOCGBSLAITBIMQBKFAXCWXMWKHIWGOSLIYENINWGIRAVYBEZAPNLDRJBPQBWHLSGXIOQZGVJUVLZDZHSYWDYDMMEDOFHKZHOTBKRLUKEGR");
    msg.values_list.assign("PLWTDNQUZSPOKACPTHKRIZBWTCPAUNDJJZMMLCSHEOUMJJNZTAKYVURRXGTEIGELKDJQXCKIAPHMWSCJWUXSTSNFDJBDWPOSDXHKBGDQNGQAYGANFBBZCGLFYEPORHPRMWTEVJBSLXZHRRFQVISHEOQKAXVQMISVQKCPIMPZLNFTRGYFQKCBFRFNFNGMVXCVQBWYYAYWYUWUOWYNLHHEXGIADLTVDVADSCIEUBVXIREYUEZOUMTIJKFZJ");

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
    IMC::VersionInfo msg;
    msg.setTimeStamp(0.2464707325802472);
    msg.setSource(51897U);
    msg.setSourceEntity(115U);
    msg.setDestination(13641U);
    msg.setDestinationEntity(94U);
    msg.op = 209U;
    msg.version.assign("XZPVKIIWVYPTDBTQTRJLXUZKWGQUMJPHJTHLNTCDZSMYCBRJHYPBAYZPVCNDGOBQTCEXKWWJUWKHOOEKLZSPYVGEFBWSIWFYZURCJADDONRSVNHEDNBCZUAHMOGJHYAQUBMIYCGQBKWJ");
    msg.description.assign("WATJKSXWCRWMYIFICUEJUGMUMCNR");

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
    msg.setTimeStamp(0.7341963403643816);
    msg.setSource(11372U);
    msg.setSourceEntity(9U);
    msg.setDestination(22819U);
    msg.setDestinationEntity(155U);
    msg.op = 33U;
    msg.version.assign("ZPPMVTDFOYEGRCXQHCZFPKOSTASGHQABXRRPABLINXZCQBPSIXWQMISOHYLMXQWFEHRYMGNOLXXITIQYXNNWRBBKGDUOWSOTNVMWVSUAZCGEKRCBIDHVUOXYHAYNJDSLMUHJEWZDGFODZQECQJMGIYEZNRQASBNZPJLWIECLADCTBAPLTJTRFFJULVHEMNUKFPWVVBJZYSECKDRAFIUTBWHEJDCKGAZOPTKIQVVYHGYUSGFKKNWTVKLJXODM");
    msg.description.assign("LRJIWAGWKTPMYWVAHMIVATRUOXMPIVRCQEDTARGYIQPQKLEXYATPJOCSNEIWVIQQVGCZHYWGFKQHNZQHISDYQZKLVEZEPVPKUZUJENPDDHMYUUFTIBTNXJLHGBOZHIUESSNUMZCHOAJRRKNOXFOKVTPCGLRVQELZCWBTFUESVCFADSSAKGDMODGNBHXLBUOSFCDCWXUYRYLBZZYDBJJXLNKFKBJYJFNMARMXTSHMXQERGBDOFNWO");

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
    msg.setTimeStamp(0.5105584692800325);
    msg.setSource(30926U);
    msg.setSourceEntity(95U);
    msg.setDestination(6164U);
    msg.setDestinationEntity(87U);
    msg.op = 212U;
    msg.version.assign("NBPHLSJDOOGTRTZMLMDCTXREZQVKEEDXMPCBEJMRPFKNSZQHOACFKVYTRRKMSUZCXQUWDHVBJXCERWNPHUYGBEABLAPUPKYWFMTSGLJGNGO");
    msg.description.assign("BNBYTWAQFDQGLAXSOCKIBTMCQIVFTPLWALVWGSCXMGHMSPLSXUXSEVHZFZKOXNCZQCVLPAMPYNJAGQBEEUVITMNRXNROGWMDDVMBYAHJJJZKKBTBZRWNFTGCEKKRYPHAQQSYPDUFHKFLUZXTKOOWWIKMRUVUAZFPLEIEYNOWRFSVJUVHL");

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

  {
    IMC::TotalHeading msg;
    msg.setTimeStamp(0.8074337523130775);
    msg.setSource(53047U);
    msg.setSourceEntity(2U);
    msg.setDestination(50552U);
    msg.setDestinationEntity(130U);
    msg.value = 0.3063618875761731;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalHeading msg;
    msg.setTimeStamp(0.7101686586257233);
    msg.setSource(34405U);
    msg.setSourceEntity(54U);
    msg.setDestination(1060U);
    msg.setDestinationEntity(173U);
    msg.value = 0.2777011376358788;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalHeading msg;
    msg.setTimeStamp(0.4703653714519729);
    msg.setSource(47297U);
    msg.setSourceEntity(49U);
    msg.setDestination(23630U);
    msg.setDestinationEntity(124U);
    msg.value = 0.37518684430708793;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalHeading #2", msg == *msg_d);
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
