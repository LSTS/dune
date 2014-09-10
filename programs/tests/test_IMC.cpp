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
// IMC XML MD5: b756b37277f77273f0da757e06bff4be                            *
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
    msg.setTimeStamp(0.7294351836231314);
    msg.setSource(1394U);
    msg.setSourceEntity(26U);
    msg.setDestination(48232U);
    msg.setDestinationEntity(140U);
    msg.state = 16U;
    msg.flags = 236U;
    msg.description.assign("BVBDAIAFVNYIERELJTMIRXHBYAQAQFXOPDBAXNNDEMDZUJWFPLYESWQLYRLJPTGGJVCVCKJHWLZHTKETXRWOFVCUVQDKCKFCCTDUZAPIGEDRZNJWUSZQNPFWXSMVVCWTFSUHJYLNBYZTBGCYXWEOHSCVYEFIZIMZGPHXSGQSKKUMUWGGXOAMXASOOQQLQQKMRHIIUEGMIBNTHVYMMKJFGPRTUNLHSRNPJBRFBBHNAYAPCROD");

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
    msg.setTimeStamp(0.45019593671846214);
    msg.setSource(34569U);
    msg.setSourceEntity(238U);
    msg.setDestination(23231U);
    msg.setDestinationEntity(77U);
    msg.state = 142U;
    msg.flags = 190U;
    msg.description.assign("JNZSOOXEQAZSEDZYGDFISYMAJWVMFTBTDPFPNFKGGVYYXZXP");

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
    msg.setTimeStamp(0.9968484902543339);
    msg.setSource(35167U);
    msg.setSourceEntity(70U);
    msg.setDestination(38999U);
    msg.setDestinationEntity(126U);
    msg.state = 248U;
    msg.flags = 198U;
    msg.description.assign("RTJLSYBEYBVVWHFYVNGNVKZZJPYZYRWRMRASCSIFXMTSTVNEDCHLRMQBAYZTJGPINKLLUFECSWDWDFNHOSNEJOEKEHGQYIAICJIWVSPVNHHAJWTLDQSWSKIMWFUTXXQUDNGQTMIZDIGFRZUFBLATYGLULRKKNKXUVGOMVAABOXIXPZCAQAQIDSOGUXRPLOGOGREFBCKDZXUJLKBNPPYBZHHCJTFUVEMOXPCT");

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
    msg.setTimeStamp(0.3695388426176546);
    msg.setSource(65014U);
    msg.setSourceEntity(78U);
    msg.setDestination(43938U);
    msg.setDestinationEntity(6U);

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
    msg.setTimeStamp(0.5083052135245488);
    msg.setSource(1438U);
    msg.setSourceEntity(53U);
    msg.setDestination(51916U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.8906112033091481);
    msg.setSource(54927U);
    msg.setSourceEntity(228U);
    msg.setDestination(13682U);
    msg.setDestinationEntity(82U);

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
    msg.setTimeStamp(0.3777498622481934);
    msg.setSource(45557U);
    msg.setSourceEntity(46U);
    msg.setDestination(41818U);
    msg.setDestinationEntity(238U);
    msg.id = 206U;
    msg.label.assign("EXMQKVVICMZFEGDEWMNGIECWDRZWPACGHHZKFDALNARHUMNMPKBFACDXAZLJYAPYFJKOZIURKCCUVQAPMQEODXYSMZLIJGXRTOCUEWLPEGEBPHYBSAJYKZXJHRDVQKDQBVBSQVQOOSYSLNSIJKFFOSUXGXIYGPFRUWDLTTWXQJYIHKLBBETCNTHOAVUZJVIWPSLTWGGVRTWAMHCNLFTIYDBRFPTPOBUJNSLWYOBMNVHKS");
    msg.component.assign("LQNZZKUHDNXURQOVBMEGOHJFTXAVPQBASLQCZCMVYRVAVAJTCTBMVNSHNAABLWLIUZXYDRUKQELBPKNDWIQJCFHFHYFMONRDNPDAHLGVWKGWOETCW");
    msg.act_time = 52140U;
    msg.deact_time = 36815U;

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
    msg.setTimeStamp(0.4609368770940626);
    msg.setSource(10935U);
    msg.setSourceEntity(170U);
    msg.setDestination(44393U);
    msg.setDestinationEntity(245U);
    msg.id = 212U;
    msg.label.assign("RYXSDHXIQBNZBMPCCJFBBOFTPKFFWPVHIGAOTWZSAWPBYLMWQYXEKNMYVLWJLHRHVADQJBBWCFRXAHVNDXMHYQFWIMQRMUNALEIPGKHOCQYKSXEBFNENKFHXKZCCPTU");
    msg.component.assign("URTXSYAXTDUYWWMVHOICQMFILASVFATTMZBBYRVPBEEGBWWNZLJOMVUZEJLOXPXYZFIXUDSTGQDYSAZFWQWILDUTAKIOKKSGMPNQYXOJQLZJZXNHSA");
    msg.act_time = 18570U;
    msg.deact_time = 12364U;

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
    msg.setTimeStamp(0.1652292227114296);
    msg.setSource(65238U);
    msg.setSourceEntity(90U);
    msg.setDestination(52199U);
    msg.setDestinationEntity(14U);
    msg.id = 88U;
    msg.label.assign("ARVICTHRCAIKCJTKEQQKQLXARTMLFRBNXSDJWWPYOWUNAJZNTKJKIXTZLUQHQDLSWJAFOAHHDPMMLPWSYQSKOGFNDOKERAFZIJVBXFPMUBFBPBCREXNMLGBOIYGOMUFXOBWLSVPZUCPROFWQXJTOUMNCYJIVBYKSSEAYGDULHRRSHVVS");
    msg.component.assign("IPFEVKHJKBSC");
    msg.act_time = 15737U;
    msg.deact_time = 12906U;

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
    msg.setTimeStamp(0.9903039465850548);
    msg.setSource(7560U);
    msg.setSourceEntity(97U);
    msg.setDestination(64328U);
    msg.setDestinationEntity(185U);
    msg.id = 175U;

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
    msg.setTimeStamp(0.8727286187972001);
    msg.setSource(1261U);
    msg.setSourceEntity(159U);
    msg.setDestination(46075U);
    msg.setDestinationEntity(232U);
    msg.id = 239U;

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
    msg.setTimeStamp(0.9743637395181913);
    msg.setSource(23772U);
    msg.setSourceEntity(198U);
    msg.setDestination(7175U);
    msg.setDestinationEntity(137U);
    msg.id = 51U;

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
    msg.setTimeStamp(0.6714891765202241);
    msg.setSource(2841U);
    msg.setSourceEntity(121U);
    msg.setDestination(14358U);
    msg.setDestinationEntity(6U);
    msg.op = 117U;
    msg.list.assign("VUWIQSJCSUSTHFOZDRJEBYXIRHQXEFRSJIKWJTHTUINENPJLFMVZVLVNAUWTCXNYKRDZKMFBDLAQAWCFTEVXUYSCDMTPYEBSNZXWHEZTGGEQIPFJLGQESLYDNXGERULBWYLLKHQKZYJFTUMTUMWMZPAVQAFGPIIYHHRWPDYQOVOOAWZVHSKFCPYL");

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
    msg.setTimeStamp(0.46861886093110017);
    msg.setSource(13371U);
    msg.setSourceEntity(240U);
    msg.setDestination(14712U);
    msg.setDestinationEntity(215U);
    msg.op = 39U;
    msg.list.assign("MSIDTXJMLPOYOTSKQAEUNWDRFYTBBXXKPTVCPKAHPDQBZITPVZUGECEQSOLASLVKDGRNWWDCGCFBORCYANJSHETXBCHAUVICCIHLKAFRDGOZHPDVMEOUMVMXRKNIINHAJFELPJKUVZGFKOZJWAFGNHYTSRBNXYQ");

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
    msg.setTimeStamp(0.5444025125991566);
    msg.setSource(19605U);
    msg.setSourceEntity(253U);
    msg.setDestination(28034U);
    msg.setDestinationEntity(25U);
    msg.op = 9U;
    msg.list.assign("MUCGNCJSMHMNTEMRSQVNYKPYFUXRKYQGNELDDRJWZCXXUFJEOQBJMYYFZISJVMBRTLTHXTTMFAOEBCIOGIMWKWRYOVDQEGRPCXDQGHHELOPABEOOHPKBZGLWZQHNTWFCYZZUAILBDMDXOZDYCKKLXCRFIJAIQCOLWXMUUTSPHVXZXUCKYTIBHUQWDJJGSAKNHSEKZQJAGRVVSBALENQSVPPNESFAASIPNVHBFFFJWBUTGZIVU");

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
    msg.setTimeStamp(0.7584252042985361);
    msg.setSource(57414U);
    msg.setSourceEntity(14U);
    msg.setDestination(14823U);
    msg.setDestinationEntity(197U);
    msg.value = 156U;

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
    msg.setTimeStamp(0.6199437620255549);
    msg.setSource(24104U);
    msg.setSourceEntity(84U);
    msg.setDestination(52979U);
    msg.setDestinationEntity(84U);
    msg.value = 243U;

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
    msg.setTimeStamp(0.4935778464140319);
    msg.setSource(29100U);
    msg.setSourceEntity(116U);
    msg.setDestination(54477U);
    msg.setDestinationEntity(122U);
    msg.value = 182U;

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
    msg.setTimeStamp(0.5170227151251862);
    msg.setSource(57490U);
    msg.setSourceEntity(185U);
    msg.setDestination(44329U);
    msg.setDestinationEntity(252U);
    msg.consumer.assign("TWXBXFGYDPHMAIPMNXGHDICCZTMRFQJYYOLGHBVWRPCZJWTFOONZZKDXMGQXIYAKJLSPWUTVGXOWBKRHGOJLNXADQNBESKYXNFNVTPKGAMICNGFUFPZQGFPOSABUUEMULRHMEKEIO");
    msg.message_id = 12542U;

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
    msg.setTimeStamp(0.26291824866960845);
    msg.setSource(2236U);
    msg.setSourceEntity(167U);
    msg.setDestination(56624U);
    msg.setDestinationEntity(203U);
    msg.consumer.assign("TTECVMRRUYMTMYKFINIWELEUVJFDAOPHJNIRLOAIQLPYUPVALTDXUFHJSEVXQLKJNVWZSBDMOZTWBAYPXNOCVQXKVPCUCTZWAHPBOSGZPXRBWZMSKGONEBCFKQQOMINNYSUELGNWTMPZXAXFFGHYQODDDWOTWNRFSDJIUBHVCADVCSZDRNBTQIFRIHJCEJZPMCYXSKKKKTHRSGHIGWCJGEQOLLDHUZA");
    msg.message_id = 22269U;

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
    msg.setTimeStamp(0.09568386770789516);
    msg.setSource(29671U);
    msg.setSourceEntity(91U);
    msg.setDestination(53997U);
    msg.setDestinationEntity(137U);
    msg.consumer.assign("PITLPHVRWETTXJBNYPLUGLHUGNEILLMCVTYZYXIJQFPGVQPQKFIGYLSHMQZSKRKFLMTKJUWKUKSQZXNFKBYBQDOCCTJQOOE");
    msg.message_id = 24325U;

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
    msg.setTimeStamp(0.18046790107272115);
    msg.setSource(33260U);
    msg.setSourceEntity(128U);
    msg.setDestination(11467U);
    msg.setDestinationEntity(201U);

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
    msg.setTimeStamp(0.29295020356897006);
    msg.setSource(18529U);
    msg.setSourceEntity(231U);
    msg.setDestination(20722U);
    msg.setDestinationEntity(90U);

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
    msg.setTimeStamp(0.7424574760356532);
    msg.setSource(14483U);
    msg.setSourceEntity(75U);
    msg.setDestination(6371U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.3700475651626526);
    msg.setSource(18115U);
    msg.setSourceEntity(234U);
    msg.setDestination(10164U);
    msg.setDestinationEntity(245U);
    msg.op = 12U;

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
    msg.setTimeStamp(0.0031243908229066086);
    msg.setSource(54820U);
    msg.setSourceEntity(153U);
    msg.setDestination(36301U);
    msg.setDestinationEntity(23U);
    msg.op = 125U;

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
    msg.setTimeStamp(0.6816734531451331);
    msg.setSource(2023U);
    msg.setSourceEntity(211U);
    msg.setDestination(23074U);
    msg.setDestinationEntity(189U);
    msg.op = 145U;

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
    msg.setTimeStamp(0.7186208831642396);
    msg.setSource(13132U);
    msg.setSourceEntity(187U);
    msg.setDestination(61924U);
    msg.setDestinationEntity(99U);
    msg.total_steps = 143U;
    msg.step_number = 169U;
    msg.step.assign("GBIUXANKTRKVJZFJGCSERSHZFFTVTBYIBQWTBFTMCHWCPKCPNTYWHKXDEGRUIUXJGYXXQPLFBDPVMYFQRZKRLOJZF");
    msg.flags = 249U;

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
    msg.setTimeStamp(0.9250736086705789);
    msg.setSource(15589U);
    msg.setSourceEntity(10U);
    msg.setDestination(43758U);
    msg.setDestinationEntity(169U);
    msg.total_steps = 60U;
    msg.step_number = 105U;
    msg.step.assign("UUBXGWIWOPSHFPEGOCCENPNTORZFCEUKACZFIFLKDZQSLAVAUQKJGMYVMHFXIMONGTTIJGYXNINC");
    msg.flags = 196U;

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
    msg.setTimeStamp(0.386676582375138);
    msg.setSource(58766U);
    msg.setSourceEntity(125U);
    msg.setDestination(23411U);
    msg.setDestinationEntity(197U);
    msg.total_steps = 45U;
    msg.step_number = 117U;
    msg.step.assign("CPZYVTMWPSZ");
    msg.flags = 67U;

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
    msg.setTimeStamp(0.8829948425344957);
    msg.setSource(44424U);
    msg.setSourceEntity(80U);
    msg.setDestination(23069U);
    msg.setDestinationEntity(90U);
    msg.state = 234U;
    msg.error.assign("JVKLWOOXSGIPPYTXGIAQOEDDFOMLECHWDCWHXNNQQZASKUJASDALGSCL");

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
    msg.setTimeStamp(0.20260159938815414);
    msg.setSource(32654U);
    msg.setSourceEntity(202U);
    msg.setDestination(28311U);
    msg.setDestinationEntity(36U);
    msg.state = 244U;
    msg.error.assign("WNQRWOGOCJDGLXTUUMHNBZVEDJAAMLLXFFLSDZCMWEKPXQCYMNTKTJSCYXXSHHIQEDLNPQCULHKKTDRNBAZOPQYVKWNGMUIMQSDOZCFPIVNQSEIVDNRYXBRBVXBVAZJQHOEUYTPKDPSJEEFSBAQASAZCT");

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
    msg.setTimeStamp(0.8232533418017962);
    msg.setSource(64223U);
    msg.setSourceEntity(66U);
    msg.setDestination(38044U);
    msg.setDestinationEntity(215U);
    msg.state = 225U;
    msg.error.assign("MQZOHIMZRPDJBELVNOFPIHSIPTLCLSPFMOYGUX");

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
    msg.setTimeStamp(0.01278290323674136);
    msg.setSource(49537U);
    msg.setSourceEntity(119U);
    msg.setDestination(32741U);
    msg.setDestinationEntity(127U);

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
    msg.setTimeStamp(0.12204805033865596);
    msg.setSource(61203U);
    msg.setSourceEntity(30U);
    msg.setDestination(43296U);
    msg.setDestinationEntity(80U);

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
    msg.setTimeStamp(0.7483094000382989);
    msg.setSource(46037U);
    msg.setSourceEntity(46U);
    msg.setDestination(1359U);
    msg.setDestinationEntity(49U);

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
    msg.setTimeStamp(0.8902034187663469);
    msg.setSource(41762U);
    msg.setSourceEntity(29U);
    msg.setDestination(35144U);
    msg.setDestinationEntity(127U);
    msg.op = 171U;
    msg.speed_min = 0.15229244933164465;
    msg.speed_max = 0.5033614509312179;
    msg.long_accel = 0.21249134785515378;
    msg.alt_max_msl = 0.5689754493232076;
    msg.dive_fraction_max = 0.342206631067713;
    msg.climb_fraction_max = 0.20925188266916372;
    msg.bank_max = 0.7271297741026322;
    msg.p_max = 0.32567069483809363;
    msg.pitch_min = 0.24546977370428813;
    msg.pitch_max = 0.6064770849617079;
    msg.q_max = 0.32011565286154064;
    msg.g_min = 0.11163632079079577;
    msg.g_max = 0.30926270434466663;
    msg.g_lat_max = 0.6731345422844485;
    msg.rpm_min = 0.2583936099301597;
    msg.rpm_max = 0.05867268971674211;
    msg.rpm_rate_max = 0.23508647917739633;

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
    msg.setTimeStamp(0.2435016321325948);
    msg.setSource(60584U);
    msg.setSourceEntity(70U);
    msg.setDestination(59132U);
    msg.setDestinationEntity(228U);
    msg.op = 87U;
    msg.speed_min = 0.09576247893347678;
    msg.speed_max = 0.7340712614776553;
    msg.long_accel = 0.851069714828713;
    msg.alt_max_msl = 0.5513720126092183;
    msg.dive_fraction_max = 0.8117677942292045;
    msg.climb_fraction_max = 0.35338512706143543;
    msg.bank_max = 0.2858645049472318;
    msg.p_max = 0.45936300201565905;
    msg.pitch_min = 0.35744089078320496;
    msg.pitch_max = 0.9817994496425277;
    msg.q_max = 0.7002718501869577;
    msg.g_min = 0.9038112713549126;
    msg.g_max = 0.7864951556308911;
    msg.g_lat_max = 0.6733626590747127;
    msg.rpm_min = 0.41126199489991777;
    msg.rpm_max = 0.9101510458500569;
    msg.rpm_rate_max = 0.5197945986405393;

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
    msg.setTimeStamp(0.7549396833830537);
    msg.setSource(2573U);
    msg.setSourceEntity(106U);
    msg.setDestination(35041U);
    msg.setDestinationEntity(210U);
    msg.op = 251U;
    msg.speed_min = 0.6493019091610729;
    msg.speed_max = 0.9699683111070242;
    msg.long_accel = 0.49861378761127095;
    msg.alt_max_msl = 0.6621965434950302;
    msg.dive_fraction_max = 0.8082909807160291;
    msg.climb_fraction_max = 0.6959396740933306;
    msg.bank_max = 0.5715977440869084;
    msg.p_max = 0.31490593894228047;
    msg.pitch_min = 0.6883393709548825;
    msg.pitch_max = 0.3664428596821975;
    msg.q_max = 0.8684592353234996;
    msg.g_min = 0.061910999294587654;
    msg.g_max = 0.15151837537642932;
    msg.g_lat_max = 0.07055258785542706;
    msg.rpm_min = 0.7213792728439502;
    msg.rpm_max = 0.9539160400989039;
    msg.rpm_rate_max = 0.14368153781906412;

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
    msg.setTimeStamp(0.516657779801696);
    msg.setSource(46118U);
    msg.setSourceEntity(61U);
    msg.setDestination(64761U);
    msg.setDestinationEntity(218U);
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.66447097878923;
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
    msg.setTimeStamp(0.9246897732320583);
    msg.setSource(64766U);
    msg.setSourceEntity(146U);
    msg.setDestination(3212U);
    msg.setDestinationEntity(153U);
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 519477488U;
    tmp_msg_0.value = 220U;
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
    msg.setTimeStamp(0.1578264980964127);
    msg.setSource(13702U);
    msg.setSourceEntity(77U);
    msg.setDestination(41109U);
    msg.setDestinationEntity(222U);
    IMC::DesiredHeadingRate tmp_msg_0;
    tmp_msg_0.value = 0.9962904769761177;
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
    msg.setTimeStamp(0.8708360630254514);
    msg.setSource(18450U);
    msg.setSourceEntity(229U);
    msg.setDestination(31350U);
    msg.setDestinationEntity(162U);
    msg.lat = 0.9883607668254826;
    msg.lon = 0.6449379530758127;
    msg.height = 0.5067161293134137;
    msg.x = 0.9209766317389906;
    msg.y = 0.9015662183597044;
    msg.z = 0.2512816169787563;
    msg.phi = 0.9264795260440427;
    msg.theta = 0.4741889774118506;
    msg.psi = 0.9909937211056689;
    msg.u = 0.0013585412144900832;
    msg.v = 0.5657645770685711;
    msg.w = 0.0764681928631874;
    msg.p = 0.31292739618937027;
    msg.q = 0.6272106753341902;
    msg.r = 0.5639816952639296;
    msg.svx = 0.16357155329112916;
    msg.svy = 0.16377556188780829;
    msg.svz = 0.5810694359116261;

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
    msg.setTimeStamp(0.28599051552269283);
    msg.setSource(48613U);
    msg.setSourceEntity(100U);
    msg.setDestination(58280U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.9364664710127758;
    msg.lon = 0.9658156501745427;
    msg.height = 0.9912889896932789;
    msg.x = 0.6426842673236856;
    msg.y = 0.6415466355573102;
    msg.z = 0.04723752991816754;
    msg.phi = 0.425790692735158;
    msg.theta = 0.687965981006799;
    msg.psi = 0.864078909263663;
    msg.u = 0.4545892944836234;
    msg.v = 0.5919635221445713;
    msg.w = 0.6466399464826401;
    msg.p = 0.7556412709544003;
    msg.q = 0.26508662446969067;
    msg.r = 0.49129855111346243;
    msg.svx = 0.8212176733776122;
    msg.svy = 0.4238804855540247;
    msg.svz = 0.5574923513719457;

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
    msg.setTimeStamp(0.48615300286707386);
    msg.setSource(64605U);
    msg.setSourceEntity(59U);
    msg.setDestination(45217U);
    msg.setDestinationEntity(129U);
    msg.lat = 0.6401769771635377;
    msg.lon = 0.5360429517674574;
    msg.height = 0.4833559004954441;
    msg.x = 0.7236865061551307;
    msg.y = 0.6161554574185261;
    msg.z = 0.22040237421517428;
    msg.phi = 0.57035781550528;
    msg.theta = 0.40390097748991893;
    msg.psi = 0.24591987130679127;
    msg.u = 0.8096089061496211;
    msg.v = 0.23680032478549762;
    msg.w = 0.4137044131997667;
    msg.p = 0.5822045173841307;
    msg.q = 0.2899063764897859;
    msg.r = 0.6110649689103507;
    msg.svx = 0.21743611538500685;
    msg.svy = 0.0586710625843575;
    msg.svz = 0.7881617244332209;

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
    msg.setTimeStamp(0.8618299804125876);
    msg.setSource(16710U);
    msg.setSourceEntity(163U);
    msg.setDestination(44578U);
    msg.setDestinationEntity(50U);
    msg.op = 53U;
    msg.entities.assign("EPAXCZFTOEVSYLNVURJZKLIFTMGPHCIZVXQIEULCUDSCRDXDIONERWBQGHMKSBIZXHIUFOVHUBZXDXGLRMJFW");

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
    msg.setTimeStamp(0.06381365419601415);
    msg.setSource(52525U);
    msg.setSourceEntity(126U);
    msg.setDestination(5189U);
    msg.setDestinationEntity(204U);
    msg.op = 189U;
    msg.entities.assign("LAUTQPVKSYPUTGYPKZSVSKGJNSYTWMZAJNCMOWUVIKMJMFRRGICJZSCINMADCABYMWNEHQIYGTHKXVFIVFYXNWWJACNMZHAEJJFZQSCOUWXDLYBJVPUCAQZEUDILSDUIEITMODTLEENKREFYHOTWQXJQLRRLWWTAUVEOOHQYXGHPXRTBCSDHPBBRZRBF");

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
    msg.setTimeStamp(0.619377473981325);
    msg.setSource(9850U);
    msg.setSourceEntity(23U);
    msg.setDestination(48879U);
    msg.setDestinationEntity(31U);
    msg.op = 38U;
    msg.entities.assign("ZEPILFACDXDNGOKOYSVXOXTCDZMCUVPJVXDYIWUUWHPAKHXTRUUWSIVTELJVNXMMXPOCFUURLDHVLDLAMPXENKOPQBXNOABTZRQJIIIKBYNMLSGTZBTRKOPDGZHYAPOPDENSPFAKJMSYYJWLSYCVOLQVGQRQFRCEZJGUDRNRBTNJSVJFEBMIHXZNGIHZNYGOWMQHWWCKEWKTJCBUBRFFGWAQTQUKHBMZRBMYWCSZLAHQYE");

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
    msg.setTimeStamp(0.4627113052940929);
    msg.setSource(55997U);
    msg.setSourceEntity(224U);
    msg.setDestination(63541U);
    msg.setDestinationEntity(228U);
    msg.type = 71U;
    msg.speed = 43502U;
    const char tmp_msg_0[] = {-94, -65, -124, 97, 100, 102, 122, 82, -102, -93, 62, 119, 51, -64, 106, 10, 126, 52, 41, 69, -100, 59, 72, 65, 66, -10, -128, -21, 15, -108, -107, -104, -53, 79, 111, -128, -72, 121, -45, 18, 55, -23, -51, 49, 61, -43, -37, -82, 8, 3, 18, -61, 62, -95, 49, -81, 126, 91, 99, 95, 57, -101, 16, 71, -25, 114, -34, -45, 125, 16, 117, 117, 111, -8, -93, 86, -30, -34, -82, 51, -9, -37, -116, -15, 90, -112, 106, -125, 14, -5, -120, 94, 51, -91, 65, 115, 99, -91, -105, -34, -107, -33, -47, 26, -127, 70, 68, -79, 20, 2, -28, 17, 33, 1, 53, 105, -48, -75, 80, 62, 21, -95, 28, -48, -42, -7, 96, -13, 111, -26, -76, -40, -34, 97, 101, -66, 73, 60, -33, -68, 99, -110, -103, -91, 38, 74, 90, 62, -52, 18, -20, -127, -86, -36, 10, -122, -33, -92, 39, -102, 67, -20, 107, 120, -77, 9, -25, 40, 70, 61, 18, -60, 59, -81, -127, 14, 71, -74, -70, -42, 74, -19, -62, -120, 60, 112, -91, -19, 113, 37, 103, -110, 101, -126, 124, 113, 37, -21, 9, -121, 105, -32, 79, 22, 107, 35, -51, -96, -4, -99, -1, 44, 38, -89, -84, 91, 67, 21, 36, -76, 29, -95, 47, 120, -46, 117, -118, 18, -69, -114, 110, 21, -124, 11, 19};
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
    msg.setTimeStamp(0.4952204805925897);
    msg.setSource(45489U);
    msg.setSourceEntity(2U);
    msg.setDestination(62730U);
    msg.setDestinationEntity(106U);
    msg.type = 64U;
    msg.speed = 43106U;
    const char tmp_msg_0[] = {78, -94, -87, 90, 4, -89, -104, 45, -17, 35, 101, -98, 105, 12, -128, 40, 102, -32, -20, 70, 63, 67, 91, -4, 92, -25, -113, 82, -38, 88, 67, 91, -85, 15, -50, 9, -120, 113, 28, 69, 92, 92, 57, 110, 61, -14, -20, -126, 118, 37, -75, 97, 6, -92, -6, 96, -42, -103, 11, -79, 63, -51, 124, 1, -113, 71, 75, 125, -54, -126, 27, -1, -96, 48, -44, 111, 20, 75, 46, 71, 34, -104, 102, 8, -38, 17, 78, -88, -114, -106, 126, 48, -60, 14, -125, -20, 113, -104, -56, 115, -4, 1, -101, 122, -92, 50, 47};
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
    msg.setTimeStamp(0.8236837800500239);
    msg.setSource(47336U);
    msg.setSourceEntity(227U);
    msg.setDestination(55927U);
    msg.setDestinationEntity(1U);
    msg.type = 65U;
    msg.speed = 20951U;
    const char tmp_msg_0[] = {-108, -32, 81, 38, 105, 112, -1, 33, -67, 24, -97, 77, -25, 122, -93, -38, 63, 21, -117, -24, 9, -122, -104, -110, -104, 4, 108, 13, 86, 57, 53, 27, -85, 109, -40, -106, 123, 32, -76, 109, 111, -71, -36, -87, -122, 66, 29, -19, -124, 37, 61, -88, -72, -39, 24, -14, 60, 78, 95, 24, 71, 94, -77, 53, 116, -90, 31, 79, -44, 124, 83, -31, -125, 38, 57, -20, -64, -36, -121, -9, 0, -35, 4, 77, 16, -62, 32, -36, -56, 28, -10, -70, 12, 27, 109, -38, 34, -38, -84, -4, -90, -112, 22, 32, 84, -72, -16, -23, -11, 81, -107, -50, -101, -43, 39, -108, -55, -53, -83, 49, 48, -63, -104, 98, 97, 21, -59, 20, 69, -49, -67, 59, 108, -127, -10, 114, 60, 112, -83, -14, -61, 102, -95, 82, -25, 84, 65, -20, 48, -67, -53, 63, 99, -110, 2, 51, -41, -108, 125, 99, -82, -1, 72, -66, 60, 112, -33, 17, 22, 72, 89, 83, -85, -28, -80, 21, 122, 122, 117, 32, 25, 73, 42, -105, -74, 89, 93, 1, 87, 109, -57, -13, 103, 23, 110, -67, -102, -48, 93, -63, -79, -63, -107, 4, 4, 19, -70, -127, -106, -73, -103, -15, -58, 88, 37, -67, -93, 12, -43, -24, -20, 24, 26, 13, 64, -47, -87, 40, -117, 38, 21, -68, 66, -7, 28, -91, -22, -51, 75, 45, -113, -55, -93, 120, -22, -105, -32};
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
    msg.setTimeStamp(0.5334241687728194);
    msg.setSource(47058U);
    msg.setSourceEntity(153U);
    msg.setDestination(12783U);
    msg.setDestinationEntity(226U);
    msg.op = 116U;
    msg.tas2acc_pgain = 0.7578960960466578;
    msg.bank2p_pgain = 0.2959804820980847;

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
    msg.setTimeStamp(0.9450186634873787);
    msg.setSource(62154U);
    msg.setSourceEntity(117U);
    msg.setDestination(27997U);
    msg.setDestinationEntity(22U);
    msg.op = 143U;
    msg.tas2acc_pgain = 0.81522316301603;
    msg.bank2p_pgain = 0.036773175203709374;

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
    msg.setTimeStamp(0.48078391229414563);
    msg.setSource(63673U);
    msg.setSourceEntity(167U);
    msg.setDestination(49008U);
    msg.setDestinationEntity(145U);
    msg.op = 21U;
    msg.tas2acc_pgain = 0.4116305493478064;
    msg.bank2p_pgain = 0.4893473345418269;

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
    msg.setTimeStamp(0.8356475938751666);
    msg.setSource(18938U);
    msg.setSourceEntity(116U);
    msg.setDestination(5938U);
    msg.setDestinationEntity(9U);
    msg.available = 227242581U;
    msg.value = 38U;

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
    msg.setTimeStamp(0.34101060246120796);
    msg.setSource(26818U);
    msg.setSourceEntity(98U);
    msg.setDestination(27894U);
    msg.setDestinationEntity(227U);
    msg.available = 2690151401U;
    msg.value = 109U;

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
    msg.setTimeStamp(0.6859710290319778);
    msg.setSource(47602U);
    msg.setSourceEntity(7U);
    msg.setDestination(22568U);
    msg.setDestinationEntity(14U);
    msg.available = 2044280741U;
    msg.value = 249U;

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
    msg.setTimeStamp(0.8010770286090383);
    msg.setSource(44916U);
    msg.setSourceEntity(234U);
    msg.setDestination(5185U);
    msg.setDestinationEntity(161U);
    msg.op = 79U;
    msg.snapshot.assign("RGPEWKXDLTVNYQEJOFFYHGRUVOQXQSPPTJQXQTGMKVVZSFTTYFFUEDQRYVAKVJJRPZ");
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 1284428205U;
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
    msg.setTimeStamp(0.9041932584330984);
    msg.setSource(51859U);
    msg.setSourceEntity(29U);
    msg.setDestination(35719U);
    msg.setDestinationEntity(75U);
    msg.op = 124U;
    msg.snapshot.assign("KJTLVYDQMILLEZFNLHYSVUCOGTMPQLCVFDYXVTAENECJKUPFYVSDRNHTPRXJGZTGOQBZOCERILXCPBNKDFWDDVZSWYHALRYOEGZRXTZHXHEXJEDANOKUTBJHVJXHBKGUFEXMWSTAMGIPAMQCQWNMBZPZWKYOAFZZQUCJAVTWOWSIPFIKKBPSVCUIOXEUIIAMDTCIWSNVEAP");
    IMC::Rpm tmp_msg_0;
    tmp_msg_0.value = -29728;
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
    msg.setTimeStamp(0.7800400726863735);
    msg.setSource(10446U);
    msg.setSourceEntity(70U);
    msg.setDestination(53384U);
    msg.setDestinationEntity(217U);
    msg.op = 133U;
    msg.snapshot.assign("AIBZPQJUXZYAMNHGPKCAZBKRQBOSQLNHJHOMMYHCBSRPVFNBEGLFJGTOVTUUTZWGVNISBXELMKRSTVCSURUVCSXCLFMIGSHYUKIQIDDIEEFVEAMGZEXPENDDXYHXMKFBFWYGTOBYVEQVHXEZYRTAJAUDFVFPAPHDNKWDDUYIWRTDWJQGZFCJZLPOIKKLLQXNMGJMPIWOROLPNWGR");
    IMC::Brake tmp_msg_0;
    tmp_msg_0.op = 107U;
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
    msg.setTimeStamp(0.7010118667029902);
    msg.setSource(21115U);
    msg.setSourceEntity(91U);
    msg.setDestination(16547U);
    msg.setDestinationEntity(107U);
    msg.op = 228U;
    msg.name.assign("HLCBMYNTJDGBQHRSNYGEXZVRRBTYGGOKLMMIXMHASYVBFWCWSSENCAXCYWZSIQOSJUOEOIPKLOFHZXDQSPDPANRQYWUIXENVFWTGPKJPNBCZLUZQRYUWUIJOZXQUBLIXJVWTPBIJRZTNQXPIPEFJYHJDBPFKRDLOCFFACATUMZEKBGNCIYKHLJMALCGTMKPXVYKHHMSGEMZKVHDWOWDBNGAVFAODVDIVZSFTGENUOETLXAVKRAFM");

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
    msg.setTimeStamp(0.5547490369960715);
    msg.setSource(38648U);
    msg.setSourceEntity(114U);
    msg.setDestination(52475U);
    msg.setDestinationEntity(220U);
    msg.op = 21U;
    msg.name.assign("DRZRHXWKGULHJJFLRVWDBKWDYMEIIALIAHXUKNDWZDOONBLCQAIYHWLANARMNZOSPUR");

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
    msg.setTimeStamp(0.2673108516518856);
    msg.setSource(49269U);
    msg.setSourceEntity(166U);
    msg.setDestination(26936U);
    msg.setDestinationEntity(218U);
    msg.op = 208U;
    msg.name.assign("DTUOVKMWQZKKYBHVPAZQQSLNXWBYZTCMJOHWAZRLHLOEXGCRNJUGFFVFZKRQFJOWOIGPUEVJBHAGLCAFBQATGBTGZDOPPCIDQUICRUUDITPTPERNKYCKSXSHYMXLSRFBAWOGACWYEMNHWEZMRKPUWDIMXYFVTUVQJGLSNMCBYSBVXENXLTEUHZRVVDAMUIZEIOYRNSNRCHICFOJEPXQATMLQIYNBHNJHXDKBJITFDW");

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
    msg.setTimeStamp(0.8176045573929125);
    msg.setSource(15880U);
    msg.setSourceEntity(141U);
    msg.setDestination(22477U);
    msg.setDestinationEntity(66U);
    msg.type = 214U;
    msg.htime = 0.997400831118291;
    msg.context.assign("NGBNDSLPXFVYNUZDNGYDJDAHIUQWLBJIRYKJHCWQWUWDZIXSIXZLGJQJCOVWZONUGOHKKTEZUAKEMCRMZJLOPSEXQOBRLRZSOOWQMFYWBGSSBMPVBNXLJFGQZMAYQJWYDNIYCCGYPTHZYCJH");
    msg.text.assign("OSLLAGARPTQYEQXLXSYLIAEHZKWFCXNRJORBBPDIWFMZIEPSZZOOASMMVUGVTYKFMDWRYFUGTVWWURWWU");

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
    msg.setTimeStamp(0.5453200703839389);
    msg.setSource(43162U);
    msg.setSourceEntity(184U);
    msg.setDestination(25024U);
    msg.setDestinationEntity(221U);
    msg.type = 14U;
    msg.htime = 0.5768457224790742;
    msg.context.assign("AXHAOAXFMQFQXZEQTTQZKACR");
    msg.text.assign("ZPKOQKVCPFFYXRWKSQXRLKIUOHDGBNOZEWDOSWKJKSBTLYOZNLWMVVNOFNRMBCYTIRURAUGPJTBQEPAUL");

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
    msg.setTimeStamp(0.7279718597909837);
    msg.setSource(504U);
    msg.setSourceEntity(179U);
    msg.setDestination(44244U);
    msg.setDestinationEntity(232U);
    msg.type = 112U;
    msg.htime = 0.48552754816734467;
    msg.context.assign("CEGTQQJHEWOARXFFMYUTPKWTVBURTEBMZHPVYRFLXHDFLCGNXMIMMAFSBZFYGJKZEJJQXQERMWVNSISVAPVYRCGIWIWAZAEBRKJUCOOGJNPTSAIEYUAQXOWJQGLXVFKKP");
    msg.text.assign("QBGQFULQYOKTWWVXMEIQPJUSAUYIYMXNZUXAJJOORZXBZKVFHXEWKIFCLCANMJCZRMYILZJXOTUTNULJZCEBDARVGHRGQLOSYDGMNORUDTHRKSVMBUHHKWACWAQSQRLVKDXHRVTPIEELYHGFONPHTEBIWMHKNPPLHCGCZJMFGLPCSAGWXPEWKBQNVYGBYKXMJEROWIOYWNFFDNGJMSDAARQTEQZSUSFIIBXOCDSLTCDPU");

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
    msg.setTimeStamp(0.5252705728370197);
    msg.setSource(11418U);
    msg.setSourceEntity(248U);
    msg.setDestination(23223U);
    msg.setDestinationEntity(2U);
    msg.command = 196U;
    msg.htime = 0.11300862851738125;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 56U;
    tmp_msg_0.htime = 0.8002609361111401;
    tmp_msg_0.context.assign("FIJZYFNSHAUVLTRNWNBLBNQSOLTKEGTZUHAQAKLIDBPXTLHHXRFBYQPOJKSRRKEVGWTAZEADGOLTHXKUPHMRGZANYDELSAJPDWGSAFFBCWOKZNSXJKRCYZOIHVDRMVIMHOYKMIENJUICDWOCWYUEPKDGXFSPUG");
    tmp_msg_0.text.assign("BULSAWWMVPMVTDGCVOUCOHTWCQRFIFCSFHIWCUOPXYRPNKLNBDAPAZLMJWENEOOXXATTPBDVEOMKQXAEGRVJISTOQCXAAUCEMQNHYHYSZLZUSXDBGGNVRWNQCCQAIJUUGMFZVEMGHPPRBJUSJNMKEALYRYCZIUYZZPZLLJNGTKEBDFYSITBXYIJSDDVHNYHJOBKZFWTWODWHZRVIAFQKGOQBRXUSDIFYRQHDXQLWSTVIRKMMPPFLLBGNKGJHEK");
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
    msg.setTimeStamp(0.8721001126106508);
    msg.setSource(58813U);
    msg.setSourceEntity(121U);
    msg.setDestination(37478U);
    msg.setDestinationEntity(196U);
    msg.command = 50U;
    msg.htime = 0.722783443158936;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 199U;
    tmp_msg_0.htime = 0.0774379509315073;
    tmp_msg_0.context.assign("WUOAZFXDSRJBVFJAYSGDCAKFEQPQHTOJLHKHOXUMWICVOJCZLMHYENCALYKTUBTMLGEODOYJEHTIELXKUDQJFPVWSWQPAKUCIWCFDUIVPQAFMTLBHFYZNPZUJZCBBKNISGEUGXBHWYIAVJINEIZSAOXIMCLSQCVNRTXKGMRYGCYDZTFODMGXGAXGFHBHXEADNBVMPKWONQQPRTWN");
    tmp_msg_0.text.assign("CMCUKOPUARWCISVCPZQMPHNUWZSTQLMJJXOVOHDQUGUYPOSIDXEYRRCMXHOLADEFINVXRINEDMPALOWTFJHTJAIBZLWSTWZ");
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
    msg.setTimeStamp(0.8468394826992163);
    msg.setSource(14806U);
    msg.setSourceEntity(136U);
    msg.setDestination(38527U);
    msg.setDestinationEntity(203U);
    msg.command = 250U;
    msg.htime = 0.5078817235354063;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 49U;
    tmp_msg_0.htime = 0.654129072075364;
    tmp_msg_0.context.assign("WRUZYDOOLPKFUGYMLJUNRJPNHFSIAVNOEHUWQGMF");
    tmp_msg_0.text.assign("MFFQIPPPPNGWKETBINSMKFUBSQMNXADIZXOODVMPWLTAXDQAMFWCUCZNQVICQWATLCTLFURBQZRTYUXBBDKWYCZTHOOVCIXRBGSGZLXUNFJXMAD");
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
    msg.setTimeStamp(0.774910898574975);
    msg.setSource(11124U);
    msg.setSourceEntity(13U);
    msg.setDestination(58776U);
    msg.setDestinationEntity(76U);
    msg.op = 18U;
    msg.file.assign("FQXCHJUKTPWALQORSUNTAJUAYIIRGU");

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
    msg.setTimeStamp(0.3838317674739872);
    msg.setSource(65364U);
    msg.setSourceEntity(239U);
    msg.setDestination(13392U);
    msg.setDestinationEntity(213U);
    msg.op = 136U;
    msg.file.assign("HQMZOFTUBPOMYXMCQVTALVRXLKSMXEHITWGNKQVKXXYHXEXPWWEKDZISPPSJSQWVZMTONETKMDHRQAJUBCDNWMDVQTQBUEFYMZYPZFISQVMDOIBYULTOJUOEKYKPGGKSAHVCYBLIDMUXUUIRLASHFPTRSIZAHKWWJCYJIYPZBHGBCSCAJFDCTFGKBRFU");

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
    msg.setTimeStamp(0.7652276901906886);
    msg.setSource(26338U);
    msg.setSourceEntity(127U);
    msg.setDestination(20350U);
    msg.setDestinationEntity(36U);
    msg.op = 62U;
    msg.file.assign("PHCYCNFUEKAUKPCQDHBWMOKIOTMDXIIFDFBCGARPTRRFMRCHM");

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
    msg.setTimeStamp(0.8695959021768519);
    msg.setSource(5415U);
    msg.setSourceEntity(29U);
    msg.setDestination(30813U);
    msg.setDestinationEntity(37U);
    msg.op = 110U;
    msg.clock = 0.6809570328612664;
    msg.tz = -57;

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
    msg.setTimeStamp(0.29612300989500284);
    msg.setSource(51484U);
    msg.setSourceEntity(240U);
    msg.setDestination(58402U);
    msg.setDestinationEntity(107U);
    msg.op = 174U;
    msg.clock = 0.5763597072615723;
    msg.tz = 105;

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
    msg.setTimeStamp(0.9860200709937084);
    msg.setSource(1158U);
    msg.setSourceEntity(229U);
    msg.setDestination(20226U);
    msg.setDestinationEntity(154U);
    msg.op = 180U;
    msg.clock = 0.6407466010300868;
    msg.tz = 87;

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
    msg.setTimeStamp(0.9712042046791151);
    msg.setSource(18417U);
    msg.setSourceEntity(85U);
    msg.setDestination(25001U);
    msg.setDestinationEntity(119U);

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
    msg.setTimeStamp(0.75889659976941);
    msg.setSource(42151U);
    msg.setSourceEntity(36U);
    msg.setDestination(7462U);
    msg.setDestinationEntity(147U);

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
    msg.setTimeStamp(0.16840144552003666);
    msg.setSource(65502U);
    msg.setSourceEntity(46U);
    msg.setDestination(35491U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.30511033247374464);
    msg.setSource(21499U);
    msg.setSourceEntity(28U);
    msg.setDestination(29601U);
    msg.setDestinationEntity(127U);
    msg.sys_name.assign("LOWYTZNPVESVXPJKUJBFGWIZBBTBJKSJDAOMTQBRXGQPLYYAMLXWLWIHGMGOFVGIACTQUPHUSSJMUJNQMZKSANTTNUIAOCHCHQYNAKCOXYUXDFMLEAI");
    msg.sys_type = 226U;
    msg.owner = 57617U;
    msg.lat = 0.9572721481976008;
    msg.lon = 0.9884404951715601;
    msg.height = 0.10227969793899228;
    msg.services.assign("ISJEBJWXBQUFKYESQTGQRQINFGIUUUNZAMHWUTJUSPDSDEBHNPIUVDIMJNWGMZGXKOMKJLVWLATPWGB");

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
    msg.setTimeStamp(0.5748749198741399);
    msg.setSource(431U);
    msg.setSourceEntity(152U);
    msg.setDestination(47815U);
    msg.setDestinationEntity(151U);
    msg.sys_name.assign("MCHJAJHJQEFOUBXBIIVLAARCBXCDULDKCBIRZYNZDURMXOMZWTKNWHFCNKRSTBJIMVGJLZHMFLNGNAPUXVYUYCKVOLHQUEWWYSDEQHGSRXDBFTMHGSAWCZZVYGEUYZFOTJTQMNGUQAQWZSZBHHEPBTRINYKPXDBJKPMAGOXWLCPWAQOSEWSFHMZJXKPDDRYVOBMIUCRVIGKEIJQLPPOVKLGWVNKPFTCRNXOVUJRPNQFSIELQTYTG");
    msg.sys_type = 172U;
    msg.owner = 12724U;
    msg.lat = 0.3499417154628127;
    msg.lon = 0.9774246561936083;
    msg.height = 0.7511428595725985;
    msg.services.assign("TEJNKPZSVVYKPTOXRDYFXWEHRYACZMTXOWLAONLTHOGMKRQYNCICPUUCKEJNQPNNADHPRXCILHGWSNHKRAUDENLFBIA");

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
    msg.setTimeStamp(0.5599923965571431);
    msg.setSource(30881U);
    msg.setSourceEntity(52U);
    msg.setDestination(7284U);
    msg.setDestinationEntity(119U);
    msg.sys_name.assign("BUECZRMDYVUMZDXPFKTSJRQCAZBYIPTWVOIDAKGEHWMZNUHIWGYHXQFQGBUJWGLXAZBQHYQOOWXEKXHAQWGCBHCHYNEICUNBLADNXSCVOWRRVDAJEHKRZMJBSPYLVPTSWMNMANPMFDTJSS");
    msg.sys_type = 94U;
    msg.owner = 21656U;
    msg.lat = 0.19568815351500957;
    msg.lon = 0.9689382953723078;
    msg.height = 0.6936948772135584;
    msg.services.assign("OJXKTHKXQLUBZNMNCXKPPZFCSFDSAWFAOGXIXFQGONPKYKXFYBFGRSSZCVUUOAT");

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
    msg.setTimeStamp(0.5123286043492242);
    msg.setSource(3537U);
    msg.setSourceEntity(66U);
    msg.setDestination(31219U);
    msg.setDestinationEntity(26U);
    msg.service.assign("FVFPSVKYEBGAMTMCQNGZRLFXGEONWQYWXLHZMJHAFAIPSJQTTIPWZBRPVLRCYCASQIKVWURXPZKNWBHBFUAOCLRCZHGAOZVTNCPBKDFIJMLGLLWGSYOJSOUTZHWYTYMPJRADFUCMWEXWVNRLQAPBFQOKXDPUSKLDKMBESNOVUEYYGHXEHBDORHPNDHXIIGOJJMXEIYIKKEKRUGYASCSFMCWQTXCUIEZOIBVUGQDHZAQNUSLD");
    msg.service_type = 45U;

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
    msg.setTimeStamp(0.41643088492776603);
    msg.setSource(1065U);
    msg.setSourceEntity(37U);
    msg.setDestination(31109U);
    msg.setDestinationEntity(15U);
    msg.service.assign("NIEHVSGJRPTQVSIVEDIDOOEHROAPIVNNLGWIXLBJSTTRPORZZKTMMCWUXGHAGWBQXJECDWBPXYFBDJVOOMNXTCCLYBALJSBAAEJHNPYBDYNDKYLUUANEZIFLOQLNSAMYIIGWZQQHVMUFKCUKKWQFPXSPOTUDUPMMZCHSTURGCPXMBEADMCJFGRYSKCQDULSFWZRODUIBPKKBJK");
    msg.service_type = 6U;

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
    msg.setTimeStamp(0.44205134730719564);
    msg.setSource(46403U);
    msg.setSourceEntity(158U);
    msg.setDestination(59315U);
    msg.setDestinationEntity(112U);
    msg.service.assign("NDZTMBWVJVFYLMCLODTSAVBVWII");
    msg.service_type = 85U;

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
    msg.setTimeStamp(0.23760765521288818);
    msg.setSource(58U);
    msg.setSourceEntity(96U);
    msg.setDestination(45810U);
    msg.setDestinationEntity(223U);
    msg.value = 0.7367232138703848;

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
    msg.setTimeStamp(0.40090636305997274);
    msg.setSource(4843U);
    msg.setSourceEntity(153U);
    msg.setDestination(33956U);
    msg.setDestinationEntity(219U);
    msg.value = 0.6172041111229826;

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
    msg.setTimeStamp(0.8897610233124751);
    msg.setSource(20884U);
    msg.setSourceEntity(74U);
    msg.setDestination(28935U);
    msg.setDestinationEntity(192U);
    msg.value = 0.9149251533372045;

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
    msg.setTimeStamp(0.7567463807045222);
    msg.setSource(45267U);
    msg.setSourceEntity(34U);
    msg.setDestination(53133U);
    msg.setDestinationEntity(26U);
    msg.value = 0.2772709029293503;

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
    msg.setTimeStamp(0.6029449876574412);
    msg.setSource(53239U);
    msg.setSourceEntity(95U);
    msg.setDestination(6532U);
    msg.setDestinationEntity(82U);
    msg.value = 0.9148603452946279;

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
    msg.setTimeStamp(0.20919170650145058);
    msg.setSource(24509U);
    msg.setSourceEntity(77U);
    msg.setDestination(20668U);
    msg.setDestinationEntity(32U);
    msg.value = 0.3246234631676458;

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
    msg.setTimeStamp(0.6792659171180769);
    msg.setSource(24421U);
    msg.setSourceEntity(249U);
    msg.setDestination(4920U);
    msg.setDestinationEntity(185U);
    msg.value = 0.7714796034312946;

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
    msg.setTimeStamp(0.8561255492454548);
    msg.setSource(45539U);
    msg.setSourceEntity(139U);
    msg.setDestination(49982U);
    msg.setDestinationEntity(149U);
    msg.value = 0.04832665715480544;

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
    msg.setTimeStamp(0.27985743896180404);
    msg.setSource(62068U);
    msg.setSourceEntity(75U);
    msg.setDestination(23718U);
    msg.setDestinationEntity(221U);
    msg.value = 0.43150892629768534;

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
    msg.setTimeStamp(0.30592318140833086);
    msg.setSource(1611U);
    msg.setSourceEntity(235U);
    msg.setDestination(30130U);
    msg.setDestinationEntity(135U);
    msg.number.assign("QOAEIFCEFVTHFZANBLCFEMJDDCRNUBDHKXNJEYBFAYWNAZUTHGUZKZJHKWJXGFHVZOTRKZVCDIQYLWWWTTIACAEOTNGXZNYIXKKCOBHAMEPYFMGPSLGSBPGPOJUNYERTPLIWVVAJKMRDEXVPJGQBSMFPXRQWZRIQJSVNBYSQBDPLIURGKFRCHPDEIEQJBTXMVHLUVCZGDWKJDXUANOUCSOPRMHQKQMXHOOGLCIBTLNO");
    msg.timeout = 44271U;
    msg.contents.assign("OSYXVLSCHKLNOSGKXWDZXSZGUZYSQZISRBWQZGUDXMTERJBKPRCQZBKLQIFZINLPATIRHNNYDHRUACXYGKXUTTVMOBUSOJROCEFFNNMFQCUYTJPMJHROJLGPWQEYLWVTECZVWXBAPFTKKNIDLDVBJPMNYPMVVTGJBWGBGHEHYQAYCNIIBECMJUCAOTPWAUXOOLENFXBLFKPQIDFHFKMRMADPWVDSIHQRRZGXMKIDUTCWAJEQ");

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
    msg.setTimeStamp(0.9705666119342751);
    msg.setSource(40626U);
    msg.setSourceEntity(56U);
    msg.setDestination(10903U);
    msg.setDestinationEntity(139U);
    msg.number.assign("TYIXOGSVIXCQRTCIRBHULWAHQXJNMWUPFJBAKNHHJQPPGFODHFIDECAUTZUGRRSORHVHTYCLBGQTVLZXZMVBGGYLRFPSTUOFEFSMYCJEEFNPKKYZTMPSIIKEDDAYML");
    msg.timeout = 36505U;
    msg.contents.assign("EXLYMDTQRMOZVIQKPRTYLIQRLUIQCTFMSZDKUDMCAFBRKJPFKVJHBI");

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
    msg.setTimeStamp(0.5941245848766211);
    msg.setSource(55322U);
    msg.setSourceEntity(78U);
    msg.setDestination(52388U);
    msg.setDestinationEntity(147U);
    msg.number.assign("OSEEHFEULNTEFGVKMXYFRNCGVHYCMYRDMPKOZLLKAPPAKHJAIOSJOOWUYCDTQSSKIBRRMAQTB");
    msg.timeout = 41586U;
    msg.contents.assign("EZFDJODVEGUMVASOFJIUIPKWJPEAHJMITTJYOAXCBRSFAISNZPSTADKYBKRHNQQXNJMEYPCKMNXFEBTNAYKPF");

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
    msg.setTimeStamp(0.088107729979088);
    msg.setSource(1819U);
    msg.setSourceEntity(181U);
    msg.setDestination(52693U);
    msg.setDestinationEntity(80U);
    msg.seq = 516329849U;
    msg.destination.assign("FGOWFJFBUHNMTEUJOSQJALAZZQVHISDYIPFIUJTGGZPDOMHSDCPXLBTLTYZNTEQAZGMSLQXHCYVJCBAKKEPXHQSNQJUZWQWBIVFTHSYMGOBXEPYANYNICBVFARPNLRPXEONMDKRRLXKCDNWPEUWQGHTMZKJFUVRBVGJWHWCTZRQXFZELDJLDYLIBEMKGCGXSEVVRPUDWBOZDVFRKMHDSSBVX");
    msg.timeout = 55989U;
    const char tmp_msg_0[] = {-95, 95, 53, 124, 108, -71, -98, -25, 7, -9};
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
    msg.setTimeStamp(0.036418168358697045);
    msg.setSource(22127U);
    msg.setSourceEntity(174U);
    msg.setDestination(47246U);
    msg.setDestinationEntity(248U);
    msg.seq = 4149490915U;
    msg.destination.assign("JRZLZEDNZXNZXCLKNEHTZIDQFLVLFSQMYBVXZUUACPDWIKSQLQHFSYAXWWJCSIJDSG");
    msg.timeout = 25664U;
    const char tmp_msg_0[] = {-80, 49, -55, -47, 100, 104, 82, -110, 65, 124, 10, 109, -89, -18, 6, -20, -104, -66, -59, -78, 111, -113, 19, 108, 87, 68, 22, -103, -30, 80, 117, 33, -67, -56, 78, -15, 95, 95, 18, -11, -109, 83, 102, -4, -92, 28, -101, 103, 108, -13, 79, 84, -89, -107, -110, -39, -16, -65, -81, -81, 106, -103, 108, -113, -92, 108, 8, 99, 55, 25, -106, 89, 89, -96, 124, 88, 57, 16, -10, -44, -11, -47, 40, -91, -117, 29, 16, -82, 80, 41, 113, 50, -46, -96, -121, -88, -41, 14, -105, 75, -16, -82, -96, -77, 53, -91, -86, 9, 38, -97, 16, -98, 32, 1, 110, 79, -74, 116, 57, -77, 92, 13, -108, 123, 82, -23, 6, 26, -30, 27, 37, 46, -26, -19, 48, 123, -109, 51, -40, 50, 61, 9, -124, 69, -58, -64, 64, 59, -119, -37, 42, 11, -41, 126, 21, -19, 113, 49, -44};
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
    msg.setTimeStamp(0.9458141879752126);
    msg.setSource(35141U);
    msg.setSourceEntity(213U);
    msg.setDestination(60031U);
    msg.setDestinationEntity(136U);
    msg.seq = 3718182859U;
    msg.destination.assign("NPGRYYWIAZXSHNVVPZTPOENMSKKMVSLZRZXKPDOKHCZQLVFWYTAPQIAXJEURVWQWAGFQTSUWCWJTQGEIBNTBKGWZELMBDZBOKLFBRJGHOCTZTPLVFOBLLMXCFKJNSBAMCMHAWHINVMYQSIHSDLLRDIOCIUPBXGXYHAHRFV");
    msg.timeout = 61475U;
    const char tmp_msg_0[] = {-112, -121, -14, 19, 67, -120, 62, -124, 11, -63, 58, -35, -42, 7, -18, -2, -34, -48, 31, 105, 115, -78, 37, 123, -98, -111, 58, -72, 32, -91, 64, 21, 101, 13, 54, -42, -60, 7, -59, 15, -115, -53, 40, -120, 83, 98, -71, 93, -105, -26, 109, 82, 41, 95, -46, 68, 2, 102, 49, -56, 126, 64, -74, 0, 110, 107, 17, 106, -40, 24, -128, -121, 3, -115, -90, 90, 85, 100, -72, -71, -57, -58, -102, -50, 71, -20, 7, -64, -57, 90, -64, -89, 56, -83, 6, -11, -87, 107, 107, -69, -25, 12, -74, -2, -123, 86, 45, -114, 24, 93, -88, 7, 0, -8, 72, -124, 126, -107, 122, 38, -4, -46, -82, -60, 90, -98, -107, -111, -90, -2, 88, -82, 90, 120, -72, -63, 32, 116, 1, 89, 83, -51, 120, -92, 117, -105, 55, 61};
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
    msg.setTimeStamp(0.863488285771556);
    msg.setSource(38260U);
    msg.setSourceEntity(178U);
    msg.setDestination(3421U);
    msg.setDestinationEntity(170U);
    msg.source.assign("BWIVJGKDVAWCPSYJXQEBBVCAKOSKULSYTQITICYKQLZHDPHUWBRJMFNTMLADYRJISXXDIGBOEUFMFMTVKZKLTHVRYIREHDHKSOBOECAPUXBUQZEXEVWDUMHIMTOGJLZOZKFTDJKSPFYCWZQOHNPGVAFRQEHWNNCAVTOGGWMVCMWLMJNGZNMNEBIROQCFOBCLAFGHLDUQSGW");
    const char tmp_msg_0[] = {-5, 1, 120, -59, 78, 82, 43, 29, 31, 123, -86, 9, 108, 7, -7, -55, -72, -119};
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
    msg.setTimeStamp(0.6924881082090864);
    msg.setSource(37160U);
    msg.setSourceEntity(16U);
    msg.setDestination(35256U);
    msg.setDestinationEntity(200U);
    msg.source.assign("WAUNYSHVOFQPZLRFKQRCIBGZAGHOOPMCAIPDIBTNKDJNLCEXQFDWDBZIJGNSQPDYJQVCCAVRFWRGJPIDPMEOGSOSQNBXQA");
    const char tmp_msg_0[] = {19, 98, 83, -100, 36, -33, 110, -41, -18, -27, 16, 50, 50, -117, 62, 98, -70, 116, -114, 120, 108, 120, -51, 90, 58, 47, 95, 56, 5, 68, 58, -28, 117, -30, -96, 14, 78, 13, 30, 24, 107, -21, 45, 44, 98, 102, 22, -113, 92, 65, -121, 119, 98, 31, 9, -118, -91, 27, -42, 75, -24, -113, -70, -58, -12, 45, -123, -33, -74, -27, -119, -18, 34, -22, 49, -8, 125, -63, -65, -64, 13, 58, 18, 115, 56, 126, 14, -56, 71, 39, -95, 59, 21};
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
    msg.setTimeStamp(0.1839656604179758);
    msg.setSource(305U);
    msg.setSourceEntity(62U);
    msg.setDestination(53962U);
    msg.setDestinationEntity(64U);
    msg.source.assign("RDRRECGKZUDZZVJSPYOOGCQRTELHOXPLVJPXQZZTKKRJPLTMUYYSSKYFJUHIWFUDHHQJNUGMCWNQXEDSHXROUVHICLTNNMSGONWTGERWJOYXEPWMATONFGNYIQUGVWMZMTEJIMIDAZVMHZIXFPNMFCYBWLNCAVBAOWR");
    const char tmp_msg_0[] = {57, -12, -62, 115, -81, 85, 49, 8, 69, -42, 38, -85, -125, 79, 115, -79, 31, -3, 111, -4, -73, 77, -119, 23, -21, -109, 33, -1, -20, 112, 26, -23, -53, -69, 72, 92, -73, 0, 24, -79, -11, 9, -84, 24, -91, 11, -110, -119, 93, 29, -121, -122, 59, 82, -127, -68, -97, -46, -76, -89, 17, -38, 34, 80, -51, 9, 39, -49, -89, 16, 81, -80, -59, -77, -10, -32, 28, -35, -68, 11, 16, 96, 25, -56, 39, 88, -10, -125, 22, 18, 95, 107, -93, 101, -60, 98, -2, 76, 79, -92, -113, 52, -122, -95, 92, -110, -46, 50, -36, -104, 68, 113, -115, -85, -24, 125, 108, -76, 97, 110};
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
    msg.setTimeStamp(0.923999448096083);
    msg.setSource(55089U);
    msg.setSourceEntity(170U);
    msg.setDestination(12865U);
    msg.setDestinationEntity(158U);
    msg.seq = 4138668223U;
    msg.state = 203U;
    msg.error.assign("TTTVXQPOIAAGCRNQATJSMKLAYDTJPNYLFMDEHKBERZWBHYOZABCIPGZWWOCNCJIUTGUETHWZEXOFECJLVZCZPXSGSEJWSMRLFVFDH");

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
    msg.setTimeStamp(0.032370416210551145);
    msg.setSource(36936U);
    msg.setSourceEntity(249U);
    msg.setDestination(51852U);
    msg.setDestinationEntity(191U);
    msg.seq = 3860692384U;
    msg.state = 121U;
    msg.error.assign("TBUIFHBFMYASRIOPHKNFNLRVJLRFCBCJVPOGKFTSLCHJOILKICAXRVAMAFSQJMUTAUDXZZULBXHLPHQXTFTZDBEWAHZOGVCTLTSSQYCNTLYNMNMZPOOPQCUJUBXOWKYDNHUERHKGJWKPXWMAAWBOTGQXMEVZWDNCUHWVSIFSEEDIEYNN");

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
    msg.setTimeStamp(0.849105333976325);
    msg.setSource(10362U);
    msg.setSourceEntity(207U);
    msg.setDestination(18701U);
    msg.setDestinationEntity(39U);
    msg.seq = 196932537U;
    msg.state = 115U;
    msg.error.assign("AFXWPSCKYIIFJMEQOERALKDPEJBFRTBLDLGOTILPOZZYOZSZNGJCYYATKKSDACLUMQNBZ");

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
    msg.setTimeStamp(0.01143620559829861);
    msg.setSource(61843U);
    msg.setSourceEntity(33U);
    msg.setDestination(44701U);
    msg.setDestinationEntity(250U);
    msg.origin.assign("LBXSSAREADUBJBDQXUNSKBNNZFKVFIAMTADUPOKCGFDTGJZSXUOATOUGJIARCUSZQLTYKPBMOLVVGCHVYKWIRWFGFZVOULWRJQPMKGSXCSROFPQYIMSCFJPHEVJAAPCTMAGUDBOLXDOVTIHWYIFQWZWWLZYCLPOERKSTDNCDPNCQMONAIHNSEZKURMMYLZWJDYJXVYJIZVD");
    msg.text.assign("OTWTXNNQYSZLCOZLDFXMQVMEKGANYWKSTAZSJLFDQRYNMZPGGFQTWHOTOIUFHJPSJHYBBSOAOERUVWCYBCKRWGYJISDKVAIRCOXREXKRIVUWQYBIGZTUHWDYTKIEUIEMLHCZDHIMVJNZGFXFBFBHCNLCTUDWQRMPGPMAMDWUL");

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
    msg.setTimeStamp(0.9849379524624503);
    msg.setSource(34730U);
    msg.setSourceEntity(75U);
    msg.setDestination(42061U);
    msg.setDestinationEntity(193U);
    msg.origin.assign("JTCJVJSYJPNRYECPRTTHLCSDFFMPEZYMZAHIGRJHJHMPPBNDIWWKTDGUMAOYXZQEGJPOLUVOLNMQVCVSYPLIATQBTVVSULWGKEUXCIQIEHUZYLOFIWXKKOAKQZFFHQUCGMVXIXYXPAOFRMVZUJLL");
    msg.text.assign("ZXXEFXLLNGBHMXVMWUEJBBBSOSIZIMHJTESLWCRQMXTWJUPLWEWQGNAWHCNULCKMUFRFJHTDIBVKTFFKNCJAUTABPTELQSCFZEADGEKEVPOMIDZIKRNUPZLPCTZOHWURYEPFGGPDWRMOVDYRIHFPSGCFYKOCQTKQKUOAYGAMWLDNBKFQHUHKVJIAHLODIY");

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
    msg.setTimeStamp(0.40471343196155474);
    msg.setSource(221U);
    msg.setSourceEntity(143U);
    msg.setDestination(8465U);
    msg.setDestinationEntity(220U);
    msg.origin.assign("HPAZQYNJJBFSMNMFZRBNXFZUDCZDMLACMRWJUAHDALIQJUAFFWXOWEVIEPTWTMGKDSVOAMWVIUKFEKDCWOLYRJMPEYJHVJDONKQQRGDSVHTFUL");
    msg.text.assign("GMPUEDZYMKJKCHZVRAEVCKPSQYRHHCXTSQYDG");

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
    msg.setTimeStamp(0.06250100185770702);
    msg.setSource(54386U);
    msg.setSourceEntity(55U);
    msg.setDestination(16365U);
    msg.setDestinationEntity(159U);
    msg.origin.assign("ZFSQJMFOMSVCMWZFKOQMDARWDDSDCMQRTBPOPZWESMJTAKFJWDUUEMVKRRTGQIUNADUACWBKILVKSU");
    msg.htime = 0.8162238291629909;
    msg.lat = 0.9420726987046184;
    msg.lon = 0.3068122478686207;
    const char tmp_msg_0[] = {-27, 64, 71, -104, 95, -45, -127, -46, -29, -103, -10, -12, 35, -37, -116, -43, -49, 96, -75, 83, -126, -57, -100, -84, -80, -36, 37, 21, 83, -77, -118, -5, -14, 45, 32, -43, -118, -54, -49, 53, -101, -123, 79, -2, 118, -30, 47, -13, 90, -71, -122, 63, -67, -62, -95, 2, -55, -107, -28, -19, 7, -31, -23, -112, -86, 94, -111, -8, -47, -111, 79, 17, -3, -43, -71, 104, 91, 59, -87, 121, -50, -113, 75, -67, 91, 68, -11, -99, -119, -106, 111, -43, -78, 7, -35, 40, -50, 5, -44, 124, 69, 16, 32, -123, 79, 118, 79, 38, 48, 17, 76, -18, 108, 102, -91, 36, -1, -123, 56, 60, -29, 110, 111, -45, -27, -36, -57, 47, 60, 57, -92, -114, 101, -119, -75, 49, -73, -15, -65, -57, 123, -8, 103, 13, -18, -75, 63, 29, 108, 18, -118, 3, -32, 41, 93, 118, 69, -81, 103, -44, -39, -117, 71, 96, -9, 17, 126, -10, -13, 97, 74, -85, -62, -34, -68, 41, 26, -71, 25, 43, -122, 17, 85};
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
    msg.setTimeStamp(0.9903916974014098);
    msg.setSource(12074U);
    msg.setSourceEntity(239U);
    msg.setDestination(40704U);
    msg.setDestinationEntity(161U);
    msg.origin.assign("DBLNFZYJBXLECNANTWSIVAEQHUCDBLKCBKQYMPQMZELOKVOWLGSNDCRVMUAFYXZHPRTWZSOAAEWWEQHLPOGTGHVHSTYGQZXNNKPOCRHDTTIBCRFZVDGIONYYMXJXXGWQZRFJJDPXRHWYEUMJUVNEUKWOLPLKTGMFHRBFILPAAIUDIJIMCXDCTOQPEYDPROK");
    msg.htime = 0.6872408291788266;
    msg.lat = 0.40738165597969067;
    msg.lon = 0.49791271865186437;
    const char tmp_msg_0[] = {-10, -125, 71, -71, -31, 72, -54, 11, 54, -123, 73, -48, -105, 118, 49, 17, 6, 74, -61, 48, -90, 37, 12, -77, 111, -105, -59, -36, 70, 65, 2, -76, 109, 10, -31, -82, 16, -37, -54, -102, -45, 118, -83, 126, -5, 38, 95, 54, -16, 32, 19, -31, 2, -70, 122, -120, 23, 58, -30, 115, 63, -32, -62, -4, -61, -73, -26, -67, -2, -20, 69, 78, -118, 93, -128, -5, 89, -100, 29, -105, 102, -53, 12, 41, 86, 60, -80, -34, -63, 112, -85, -25, 52, -87, -17, 20, 48, 98, 41, -109, 17, -19, -101, 115, -49, -73, 122, -104, 121, -60, -42, -110, -66, -46, -19, 74, -75, -127, 118, -27, -30, -10, 117, -98, 109, 101, -41, -55, -53, -118, -10, 39, 0, 61, -114, -18, -101, -1, -44, -103, -53, 71, -89, -117, 84, 83, -90, -31, -122, -24, 90, 110, -90, -71, -79, 9, -109, 111, 14, -49, -47, -108, -32, -108, 25, 1, 54, 108, -75, -106, 31, 16, 78, -21, -57, 14, 4, -37, -43, 16, -80, 78, -19, 71, -71, 15, -44, 92, 103, 62, -35, -42};
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
    msg.setTimeStamp(0.9876579687521975);
    msg.setSource(23031U);
    msg.setSourceEntity(210U);
    msg.setDestination(40616U);
    msg.setDestinationEntity(19U);
    msg.origin.assign("FCAIUCXPPXGATAGSQPGJVIBENDNIYGANNRQJWFVGLVKAQJCZGJMUKNRVSRHOZRGEDLSCLVZRCHUCFSLRNBNAYQKOMOGMUHLOZBPTCFEERWYXSUJ");
    msg.htime = 0.7668992594538973;
    msg.lat = 0.1322692589411738;
    msg.lon = 0.4557858107232431;
    const char tmp_msg_0[] = {3, -44, 46, 47, 61, 11, -121, 19, 80, -15, 96, -92, 4, -63, -89, -74, 89, 77, 119, 81, -43, -51, 2, 31, -37, -46, 123, -126, 53, 29, -62, 71, -78, -60, 82, -1, -37, -36, -51, -84, 61, -63, -27, 52, -94, 105, 25, -52, 98, -108, 43, 121, -125, 105, -102, 67, -63, 121, -23, 88, 48, 78, -13, 32, -36, 114, 86, -47, 24, 34, -119, -123, 78, 17, -25, -117, 42, 7, -27, -64, -1, -84, 42, 24, -19};
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
    msg.setTimeStamp(0.6268183921971894);
    msg.setSource(63720U);
    msg.setSourceEntity(236U);
    msg.setDestination(51581U);
    msg.setDestinationEntity(32U);
    msg.req_id = 29356U;
    msg.ttl = 23713U;
    msg.destination.assign("IEAKFLPWFQQXIIQCAPOSDYNOUBTLXUYJONSGLTJXJOTKTZQYIUASJHZVBVQOLVPBLCDXKMWKGMMOAQJXLCVCCYGDELFBZOIJFANVJZCFPWAKCJVRSEYTMSDJBFNNKWAWWRHHPYCZGPHPHDTUNFNURGQZMYLWRLOTDBLQAIEMHUUMRCSGPXEDIKMWEEXBYGIDBYBZVKHTGBGWVESUUQCOMNDHZHDJXRZNPRIHUPWTXFXIRZRQSSRFYGAAS");
    const char tmp_msg_0[] = {-96, -37, -34, -82, 3, -108, 48, -111, 98, -89, 121, 70, -8, -108, 39, -96, 23, 68, 100, -12, 119, 13, 69, -103, 118, -33, -26, -115, -25, 55, 83, -116, -123, -34, 113, 18, -122, 18, -13, 91, -36, -7, -22, -84, 7, 120, 10, -95, 84, 123, -102, 13, 61, 12, 4, -94, 92, -42, -100, -7, -31, -94, -49, -100, -103, -46, 60, -40, -45, -127, 54, -78, -105, -64, -116, -18, 23, -107, 84};
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
    msg.setTimeStamp(0.9614210655955441);
    msg.setSource(58467U);
    msg.setSourceEntity(206U);
    msg.setDestination(63863U);
    msg.setDestinationEntity(237U);
    msg.req_id = 9354U;
    msg.ttl = 37230U;
    msg.destination.assign("IHYBHIUQWTYIRCQVAVBURPUCJDMYGNTNKVZGPJXDVNEYTTGRQOFSPUXHUMBIGESKKBBQVDKNYLHBFDWJFIIXWXCYBNJOTZUEPGRDNDZKEVPCHWJHANSOFGCZDWGMHAZAIHHVWMLCXCTPTFRYCVXYJLGLXOIWOKWANKNMPURPROVTEAJPFYPAOEJMAGULUTMTZWEQZKGXJLSHIBEEQFQWSQL");
    const char tmp_msg_0[] = {-125, 22, 106, 84, -16, -19, -106, -4, -7, 118, 97, 43, 29, -8, 46, 117, 45, 3, -4, 66, 70, 19, 52, 18, -68, -30, 37, 102, 78, 121, -25, 53, -11, 117, 26, 122, 61, -12, 71, -33, 0, -34, 109, -94, 51, -111, 54, -10, -44, 123, -4, 123, 108, -50, 44, 10, -98, 86, -64, 97, -62, 12, 19, -74, 120, -51, -117, -33, 61, -3, -114, 46, 10, -61, -32, 117, -109, 101, 40, 93, 13, 82, 55, -102, -102, -107, -73, -65, 41, 33, -2, 22, -112, -83, 95, -82, -25, -40, -40, 1, 94, 13, 11, -30, 19, 116, -127, -29, 102, 13, -9, 122, -96, 60};
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
    msg.setTimeStamp(0.5059494206911621);
    msg.setSource(10099U);
    msg.setSourceEntity(166U);
    msg.setDestination(64861U);
    msg.setDestinationEntity(27U);
    msg.req_id = 50517U;
    msg.ttl = 12234U;
    msg.destination.assign("KLJCVMLXGARQYRZJDNCDTKLTYSMWRCUSWHMNVFDAVTIRAUJSUZJGODQOAXQN");
    const char tmp_msg_0[] = {-72, 36, -2, -114, -73, -15, -32, -127, -112, 37, -19, 83, -109, -122, 61, 111, -31, -29, -64, 101, 71, 90, 35, 118, -100, -48, 69, -71, -71, 75, 28, -32, -44, -105, -12, 54, 112, -10, -3, -128, 77, -125, 24, 70, 120, -59, 70, 37, -114, -51};
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
    msg.setTimeStamp(0.19073819032565864);
    msg.setSource(61022U);
    msg.setSourceEntity(27U);
    msg.setDestination(5597U);
    msg.setDestinationEntity(52U);
    msg.req_id = 32638U;
    msg.status = 128U;
    msg.text.assign("HARILOHDEBFTPLSYGGRYQGOXUEGHPCQNSLQACRNFFIVMMCWEPBKDMQMXVXYRPIOTEGQGKXKKRIIOKKHSNNZEFIAATWVAOBEBRJSBJYBIYLRAEXHPJBAYDXVQDUUQCKGZOBTVJVSUMNCZUYZHLFDTUNZWDFQ");

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
    msg.setTimeStamp(0.6732700811327037);
    msg.setSource(15273U);
    msg.setSourceEntity(79U);
    msg.setDestination(664U);
    msg.setDestinationEntity(243U);
    msg.req_id = 44500U;
    msg.status = 167U;
    msg.text.assign("ASWHPFTKODXRPKPNXLJQDQAHLQDPPSWQRSYSHPBUUHBXTQXCEUCJYCWJXATBMZKINYLISQOTGDWUOFKVSEVHLCXEJCJBKRVHPHNDYYWOKOGRQOWUAXIYJAVOOBLRZSAQFAMGGTJBDSLNLZIUZWNNTGI");

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
    msg.setTimeStamp(0.5718059715707714);
    msg.setSource(28277U);
    msg.setSourceEntity(112U);
    msg.setDestination(28329U);
    msg.setDestinationEntity(147U);
    msg.req_id = 33379U;
    msg.status = 105U;
    msg.text.assign("XCDAVUCANK");

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
    msg.setTimeStamp(0.28803406504339);
    msg.setSource(25588U);
    msg.setSourceEntity(245U);
    msg.setDestination(17286U);
    msg.setDestinationEntity(7U);
    msg.group_name.assign("NYMIWUJRKSFNBLMUBVSBZQXSLHGJLMKXWIMHVYRAQPITNSDBFSZXEWIZTDKKPBPATIXGBFQYHHLKGFEOANHDQRTSSOWBXVGVMNGAPYVQUCZZBNCPXMIYMPLXYJGWRHDKDEDBPAUDTXOGLGCQCPWREEWFZFQKECUXRUJPV");
    msg.links = 86747072U;

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
    msg.setTimeStamp(0.39692768625025376);
    msg.setSource(49463U);
    msg.setSourceEntity(21U);
    msg.setDestination(55277U);
    msg.setDestinationEntity(250U);
    msg.group_name.assign("SLDODJIJQHCQHEEGTRMRBUVONKFAUAPIAVXGVCVACURDWEGFIIOHBYINYWSWJBIYEXZMRGFLCRERPWOVYKHBXZBYVFJZSCHXQYSXTTLQXEFNTORKGQMPNOHCWOXJUSJZVSZPDVTYJUJNAGHDUVNZEJTCINUJEAZGFRK");
    msg.links = 3664515486U;

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
    msg.setTimeStamp(0.8952551644253948);
    msg.setSource(30348U);
    msg.setSourceEntity(5U);
    msg.setDestination(22400U);
    msg.setDestinationEntity(185U);
    msg.group_name.assign("AQVXGIZJHDWRHQPJCWODSWJVRYKSPSYPRVDWCVSZQPDVWKKNICUHLOZUFHTVRCAQBSFNAKWUXASEBMRJHDIVBFZZRCTLRQXREAKHYUUJGLPVKGAO");
    msg.links = 3374828616U;

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
    msg.setTimeStamp(0.18405140571181544);
    msg.setSource(18384U);
    msg.setSourceEntity(251U);
    msg.setDestination(47928U);
    msg.setDestinationEntity(197U);
    msg.groupname.assign("GRBBMHKLFWMTOHXCXOACGFOCMNTDREFWIOUKCRQXXTYHJQNFFDVZVMSOTSPVWKHSTVUJZZVFAKAESBHZDQKJMHBDYPUJISMLULUDIRG");
    msg.action = 147U;
    msg.grouplist.assign("LPFUNMCYLIBQZRSZLSYRCDLNBFQDKCTGCRAVOOVDOMOJIEHNLQSPXFRLDBDKVRLHIGGWBWJGXNEHTTOREUZKQSHQYFAATXSABUYRIYDTYWPFTWAFXRIBKJOUCWWANRIFDTNSWFTOJPCPVQUG");

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
    msg.setTimeStamp(0.48642728175945327);
    msg.setSource(4144U);
    msg.setSourceEntity(242U);
    msg.setDestination(23534U);
    msg.setDestinationEntity(14U);
    msg.groupname.assign("IDZDOLUFWLKVRWRKGWUXYUFJXBKTYNYLUSMMPCLOAJFBWKAGWVZZHODCKMJFOIYQQ");
    msg.action = 125U;
    msg.grouplist.assign("DZSCVUCDQAZDMHCJIPWMXJBYBLMSKQKZTLQVKSJLOSODNPXJTFXIUKDERHUBCJHZGWMEFRIIZKEOETGWHVGNHUUGONAUBRLISLBBXVWV");

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
    msg.setTimeStamp(0.9722461345139211);
    msg.setSource(29098U);
    msg.setSourceEntity(35U);
    msg.setDestination(21024U);
    msg.setDestinationEntity(153U);
    msg.groupname.assign("EYFDSOVETIGXZYTERGKVXCTXBJCFKRZQZFMISSBBCJQDOPOKLJSDHWABIAZFHIDFBIUMVINWHHECLRUHDYGQMGPKOBCCVUJQWYWQLPLUULSQXGLKTLDWNPSBNCBFOVNRTXPDVHVRPIYCNDFJMMRSQBVZEZPYAYHFZTQUAJOTIWXXRXTVWC");
    msg.action = 67U;
    msg.grouplist.assign("JMDTJXYVMTYEHXYNOCTAYGGLHOFWTSADIUVAIHVQQUZVVEGRASGZZXBEJJMDYECHXRZSSSBLQNFAPTFLCWZKNIFREOARGQQYUVHCJEBMBGIY");

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
    msg.setTimeStamp(0.2577538346187973);
    msg.setSource(36282U);
    msg.setSourceEntity(217U);
    msg.setDestination(22506U);
    msg.setDestinationEntity(127U);
    msg.id = 202U;
    msg.range = 0.00697171509778971;

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
    msg.setTimeStamp(0.9427657200660038);
    msg.setSource(20744U);
    msg.setSourceEntity(132U);
    msg.setDestination(53347U);
    msg.setDestinationEntity(198U);
    msg.id = 197U;
    msg.range = 0.11569319855702187;

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
    msg.setTimeStamp(0.15156726082244731);
    msg.setSource(33744U);
    msg.setSourceEntity(41U);
    msg.setDestination(40536U);
    msg.setDestinationEntity(241U);
    msg.id = 100U;
    msg.range = 0.8342676026847013;

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
    msg.setTimeStamp(0.9319319142329815);
    msg.setSource(28860U);
    msg.setSourceEntity(2U);
    msg.setDestination(59450U);
    msg.setDestinationEntity(231U);
    msg.beacon.assign("PJAFYUUULLEBXVTWAWPDMZFNYDQSUGZEJPSEPTWYOJHGRHXDGWCYMQNBNRUPYVZU");
    msg.lat = 0.050225970139293086;
    msg.lon = 0.3663802266583035;
    msg.depth = 0.7293664161083623;
    msg.query_channel = 180U;
    msg.reply_channel = 63U;
    msg.transponder_delay = 49U;

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
    msg.setTimeStamp(0.7759272317116356);
    msg.setSource(8829U);
    msg.setSourceEntity(154U);
    msg.setDestination(6453U);
    msg.setDestinationEntity(18U);
    msg.beacon.assign("RKOTMHFFUOYJVJLKBFDMKGOHKPWTYDSKHYAKJSMSNQIVRFQ");
    msg.lat = 0.2981505630774094;
    msg.lon = 0.7678466281304699;
    msg.depth = 0.7242661484090365;
    msg.query_channel = 205U;
    msg.reply_channel = 70U;
    msg.transponder_delay = 74U;

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
    msg.setTimeStamp(0.9103177186125285);
    msg.setSource(1493U);
    msg.setSourceEntity(103U);
    msg.setDestination(6584U);
    msg.setDestinationEntity(239U);
    msg.beacon.assign("DZJTZFBNSUNJBFOBEXWQAPMVOKRCMKO");
    msg.lat = 0.7299715799168108;
    msg.lon = 0.5078227104365178;
    msg.depth = 0.5549319093421122;
    msg.query_channel = 162U;
    msg.reply_channel = 127U;
    msg.transponder_delay = 30U;

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
    msg.setTimeStamp(0.06528544953150062);
    msg.setSource(23562U);
    msg.setSourceEntity(126U);
    msg.setDestination(3261U);
    msg.setDestinationEntity(156U);
    msg.op = 64U;

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
    msg.setTimeStamp(0.958781500910178);
    msg.setSource(33630U);
    msg.setSourceEntity(10U);
    msg.setDestination(65206U);
    msg.setDestinationEntity(77U);
    msg.op = 0U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("OCSJDYABPQIEDLBQVLWYKOPWBNQKFTNMVUVJLESLFYIONIAMCUIAUFZLFJKIOPQXTKREMNQWHEAQVXLUVTWLTGJHXTYGBZXHRKMAGNBMXKJRHMCOWRLBPHSZCIUBIQTLSCZEJXRCDHRKGHJKFNZWPMJYJUIGTUQAXZWUSDOOSYDYXFSZBGGMAUFQKKOCEEVVNXDYBZWDGTPPWZYPVNMSZECULRPETSHQMDFITVNHVAOAOREGFJBAIRC");
    tmp_msg_0.lat = 0.06070307213910997;
    tmp_msg_0.lon = 0.3043441750808149;
    tmp_msg_0.depth = 0.5526217317868938;
    tmp_msg_0.query_channel = 125U;
    tmp_msg_0.reply_channel = 11U;
    tmp_msg_0.transponder_delay = 88U;
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
    msg.setTimeStamp(0.1725121336087767);
    msg.setSource(26892U);
    msg.setSourceEntity(209U);
    msg.setDestination(8628U);
    msg.setDestinationEntity(98U);
    msg.op = 5U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("LFBCYZQRJYPGZDTFPNMNUVYYAVZRGXIJMBETUXGNOZANGPQD");
    tmp_msg_0.lat = 0.7915481426763958;
    tmp_msg_0.lon = 0.7774708040348682;
    tmp_msg_0.depth = 0.4200990379209063;
    tmp_msg_0.query_channel = 242U;
    tmp_msg_0.reply_channel = 188U;
    tmp_msg_0.transponder_delay = 152U;
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
    msg.setTimeStamp(0.2538642190306052);
    msg.setSource(56905U);
    msg.setSourceEntity(246U);
    msg.setDestination(51847U);
    msg.setDestinationEntity(169U);
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 111U;
    tmp_msg_0.quality = 165U;
    tmp_msg_0.reps = 113U;
    tmp_msg_0.tsize = 211U;
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
    msg.setTimeStamp(0.6494665502640211);
    msg.setSource(23046U);
    msg.setSourceEntity(114U);
    msg.setDestination(36373U);
    msg.setDestinationEntity(92U);
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 28496U;
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
    msg.setTimeStamp(0.5836410786335912);
    msg.setSource(46387U);
    msg.setSourceEntity(208U);
    msg.setDestination(16248U);
    msg.setDestinationEntity(240U);
    IMC::QueryEntityInfo tmp_msg_0;
    tmp_msg_0.id = 130U;
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
    msg.setTimeStamp(0.5017189298375272);
    msg.setSource(5418U);
    msg.setSourceEntity(189U);
    msg.setDestination(48656U);
    msg.setDestinationEntity(74U);
    msg.op = 144U;
    msg.system.assign("MEXWIZOGLDKVUCIIHXKUARVNBALVUSZ");
    msg.range = 0.25253085490358795;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 53046U;
    tmp_msg_0.lat = 0.7357004351546016;
    tmp_msg_0.lon = 0.9526120043698848;
    tmp_msg_0.z = 0.01589508064226719;
    tmp_msg_0.z_units = 208U;
    tmp_msg_0.speed = 0.8013915146599647;
    tmp_msg_0.speed_units = 210U;
    tmp_msg_0.roll = 0.173395208816851;
    tmp_msg_0.pitch = 0.2869650765983214;
    tmp_msg_0.yaw = 0.76354040171927;
    tmp_msg_0.custom.assign("EOMIIGVNSIBJOLYGIVGEAIKZQPSZRGNPOGJRLVMBLUABVBMMBYPLYSMWSXTDHQLOLMZACQPHNKIUNKQVSHHJCZTFEOLSOACGNARJZROBPNPHWUUZCTJUVZK");
    tmp_msg_0.plan_ref = 3080549085U;
    tmp_msg_0.id.assign("JVKBDPYGIETLNUFSDJCFQVROOGAZSQSOZPXOBJHQIZUXKKXIBOPVYJNDDRWKZCHXLVBPLXZXPDYH");
    tmp_msg_0.memento.assign("XIUGXWVBGUBMFZKJHDMJEKRJIQBYXAYUCVMKRLAPAVKUIOJYKDWVTOZEXCBQWHNMOWDNOCMUPEKPSFRIYREQDUCNTHWIEZLSAUKNHOPPGVFKOLEMYFTJXAQARMLJHOULZQIDQLYRCMBSGBFINBHDGWAIFBLQTCOCJTSVCFHACANGHVARY");
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
    msg.setTimeStamp(0.9490740525131723);
    msg.setSource(34883U);
    msg.setSourceEntity(155U);
    msg.setDestination(59851U);
    msg.setDestinationEntity(46U);
    msg.op = 169U;
    msg.system.assign("BTHEBPKOLXRONJLGUIOATQBKUPQZIXRVTXVMAKLWYZPYZHEPDIIFJHIHHLNYLSVFWOIPFXEBDZFKDHMHKGEISPWPBNTDIQFXHAUWUFVSLNEVKJNUGWCOQRBJMQBMCLPSEJXSRRSEBCYDCZAZUKMFGMEIGJRCBRXOVSAEHXRCTGAWVNVXNOYGTYZHZPQN");
    msg.range = 0.1199881156420286;
    IMC::ControlLoops tmp_msg_0;
    tmp_msg_0.enable = 120U;
    tmp_msg_0.mask = 3377515629U;
    tmp_msg_0.scope_ref = 3545428474U;
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
    msg.setTimeStamp(0.9880836014031891);
    msg.setSource(50889U);
    msg.setSourceEntity(74U);
    msg.setDestination(43055U);
    msg.setDestinationEntity(240U);
    msg.op = 121U;
    msg.system.assign("XWEDFHUSLHYBUVQORQKVUOITRUTZEABQPZZJQXPKAMMUDSXHRPRREFKNBTFRILEYNHJHBGPXMQKJIMSQIRDXKUYFSIHA");
    msg.range = 0.97933679540814;
    IMC::FollowRefState tmp_msg_0;
    tmp_msg_0.control_src = 34894U;
    tmp_msg_0.control_ent = 202U;
    IMC::Reference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.flags = 173U;
    IMC::DesiredSpeed tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.7577080937130866;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 139U;
    tmp_tmp_msg_0_0.speed.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.9609587198668412;
    tmp_tmp_tmp_msg_0_0_1.z_units = 206U;
    tmp_tmp_msg_0_0.z.set(tmp_tmp_tmp_msg_0_0_1);
    tmp_tmp_msg_0_0.lat = 0.454699857702901;
    tmp_tmp_msg_0_0.lon = 0.9894090491816274;
    tmp_tmp_msg_0_0.radius = 0.44406074451048316;
    tmp_msg_0.reference.set(tmp_tmp_msg_0_0);
    tmp_msg_0.state = 230U;
    tmp_msg_0.proximity = 103U;
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
    msg.setTimeStamp(0.5273585509763065);
    msg.setSource(30045U);
    msg.setSourceEntity(25U);
    msg.setDestination(7115U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.6007706130923177);
    msg.setSource(21015U);
    msg.setSourceEntity(219U);
    msg.setDestination(31190U);
    msg.setDestinationEntity(153U);

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
    msg.setTimeStamp(0.965975619853347);
    msg.setSource(16564U);
    msg.setSourceEntity(169U);
    msg.setDestination(64050U);
    msg.setDestinationEntity(40U);

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
    msg.setTimeStamp(0.3519064687055463);
    msg.setSource(32696U);
    msg.setSourceEntity(196U);
    msg.setDestination(44403U);
    msg.setDestinationEntity(189U);
    msg.list.assign("MEVXTCTHZYUNSXMEUVCPVHWDPBFOSRTGYFRALBRYQPGAWXYYJIRIRJRDYBIJX");

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
    msg.setTimeStamp(0.3046443657333069);
    msg.setSource(60336U);
    msg.setSourceEntity(227U);
    msg.setDestination(52005U);
    msg.setDestinationEntity(58U);
    msg.list.assign("OCPWRZAJQRKPAFFOSUNNOETSBAUKFVRXAJMKYVHVDUEYAKOTMLWFZZTLSVWAOOAMCUCYSFYXDKIHHJJFUXHETXIIJREBVNBPJZHKEDWHCTHTQECBZWJNGPEVBRDQSOXDGRJHUXSXDRYGQH");

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
    msg.setTimeStamp(0.06827216392657731);
    msg.setSource(14604U);
    msg.setSourceEntity(65U);
    msg.setDestination(31661U);
    msg.setDestinationEntity(81U);
    msg.list.assign("TLHGDUFDATZMSIZZLGAPMJHMFKCGUQZBJERRKUOWNTFVWKPTTFQLJMEQISJLDAVRYKIGUWSGYOBGWGAHXWBUKBA");

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
    msg.setTimeStamp(0.24447085894062204);
    msg.setSource(33103U);
    msg.setSourceEntity(171U);
    msg.setDestination(29820U);
    msg.setDestinationEntity(98U);
    msg.value = -29937;

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
    msg.setTimeStamp(0.27169930551867916);
    msg.setSource(64858U);
    msg.setSourceEntity(14U);
    msg.setDestination(25628U);
    msg.setDestinationEntity(188U);
    msg.value = -28313;

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
    msg.setTimeStamp(0.8116562156347922);
    msg.setSource(51199U);
    msg.setSourceEntity(6U);
    msg.setDestination(1551U);
    msg.setDestinationEntity(164U);
    msg.value = 32613;

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
    msg.setTimeStamp(0.23897691809038546);
    msg.setSource(41245U);
    msg.setSourceEntity(211U);
    msg.setDestination(3239U);
    msg.setDestinationEntity(161U);
    msg.value = 0.815774590510846;

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
    msg.setTimeStamp(0.027748222719871762);
    msg.setSource(28849U);
    msg.setSourceEntity(33U);
    msg.setDestination(10378U);
    msg.setDestinationEntity(252U);
    msg.value = 0.9174615751521882;

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
    msg.setTimeStamp(0.006280193470718287);
    msg.setSource(60647U);
    msg.setSourceEntity(168U);
    msg.setDestination(34949U);
    msg.setDestinationEntity(65U);
    msg.value = 0.5058675180748143;

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
    msg.setTimeStamp(0.075614199026514);
    msg.setSource(41662U);
    msg.setSourceEntity(52U);
    msg.setDestination(55249U);
    msg.setDestinationEntity(191U);
    msg.value = 0.3110198959640842;

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
    msg.setTimeStamp(0.2780782208325563);
    msg.setSource(33066U);
    msg.setSourceEntity(135U);
    msg.setDestination(46102U);
    msg.setDestinationEntity(13U);
    msg.value = 0.9297345087923253;

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
    msg.setTimeStamp(0.3706591149376681);
    msg.setSource(18210U);
    msg.setSourceEntity(77U);
    msg.setDestination(21610U);
    msg.setDestinationEntity(125U);
    msg.value = 0.996760810644902;

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
    msg.setTimeStamp(0.2439014912729166);
    msg.setSource(10332U);
    msg.setSourceEntity(73U);
    msg.setDestination(47955U);
    msg.setDestinationEntity(107U);
    msg.validity = 22954U;
    msg.type = 75U;
    msg.utc_year = 45051U;
    msg.utc_month = 187U;
    msg.utc_day = 10U;
    msg.utc_time = 0.31162541372304886;
    msg.lat = 0.3103702692645721;
    msg.lon = 0.021064016375508032;
    msg.height = 0.042490963111803004;
    msg.satellites = 136U;
    msg.cog = 0.8677117165379666;
    msg.sog = 0.6908269530144122;
    msg.hdop = 0.4348125409282615;
    msg.vdop = 0.150986703618475;
    msg.hacc = 0.8627154381297117;
    msg.vacc = 0.23096302915653666;

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
    msg.setTimeStamp(0.781947951172197);
    msg.setSource(26403U);
    msg.setSourceEntity(238U);
    msg.setDestination(37675U);
    msg.setDestinationEntity(93U);
    msg.validity = 31074U;
    msg.type = 203U;
    msg.utc_year = 52478U;
    msg.utc_month = 0U;
    msg.utc_day = 72U;
    msg.utc_time = 0.30843106410868715;
    msg.lat = 0.25454995320108376;
    msg.lon = 0.8031619822003009;
    msg.height = 0.22292407245862245;
    msg.satellites = 138U;
    msg.cog = 0.7732548079166439;
    msg.sog = 0.6999697143578095;
    msg.hdop = 0.5470470374832181;
    msg.vdop = 0.9507949818792406;
    msg.hacc = 0.41280082390271033;
    msg.vacc = 0.7295167986118843;

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
    msg.setTimeStamp(0.7064004104957794);
    msg.setSource(1486U);
    msg.setSourceEntity(237U);
    msg.setDestination(41421U);
    msg.setDestinationEntity(38U);
    msg.validity = 46833U;
    msg.type = 166U;
    msg.utc_year = 15976U;
    msg.utc_month = 49U;
    msg.utc_day = 87U;
    msg.utc_time = 0.06003521672347256;
    msg.lat = 0.37180000188392326;
    msg.lon = 0.9200282227175849;
    msg.height = 0.44599814631655776;
    msg.satellites = 231U;
    msg.cog = 0.23578177137360246;
    msg.sog = 0.16230454169205522;
    msg.hdop = 0.2933979417636149;
    msg.vdop = 0.6741670240400938;
    msg.hacc = 0.0898733780798715;
    msg.vacc = 0.49605083840753594;

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
    msg.setTimeStamp(0.021552871524948114);
    msg.setSource(2346U);
    msg.setSourceEntity(20U);
    msg.setDestination(38947U);
    msg.setDestinationEntity(63U);
    msg.time = 0.2615234568449869;
    msg.phi = 0.8823557645053806;
    msg.theta = 0.8983928038261727;
    msg.psi = 0.4181142161975885;
    msg.psi_magnetic = 0.5476952041909396;

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
    msg.setTimeStamp(0.032885208380198705);
    msg.setSource(57414U);
    msg.setSourceEntity(144U);
    msg.setDestination(32260U);
    msg.setDestinationEntity(238U);
    msg.time = 0.46751564881179153;
    msg.phi = 0.7905655261962797;
    msg.theta = 0.5616621998934878;
    msg.psi = 0.04098536271713937;
    msg.psi_magnetic = 0.8554723719062068;

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
    msg.setTimeStamp(0.932751609364999);
    msg.setSource(6643U);
    msg.setSourceEntity(12U);
    msg.setDestination(55752U);
    msg.setDestinationEntity(129U);
    msg.time = 0.8246047561333958;
    msg.phi = 0.8882175124564005;
    msg.theta = 0.2639067174117319;
    msg.psi = 0.6987557171349569;
    msg.psi_magnetic = 0.850904358176342;

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
    msg.setTimeStamp(0.25265112804931067);
    msg.setSource(64841U);
    msg.setSourceEntity(217U);
    msg.setDestination(43799U);
    msg.setDestinationEntity(147U);
    msg.time = 0.18241656490772318;
    msg.x = 0.24038997732054845;
    msg.y = 0.95217425379051;
    msg.z = 0.5963853777839261;
    msg.timestep = 0.5954182949932885;

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
    msg.setTimeStamp(0.2294156696032914);
    msg.setSource(55129U);
    msg.setSourceEntity(149U);
    msg.setDestination(1745U);
    msg.setDestinationEntity(205U);
    msg.time = 0.7697928799659268;
    msg.x = 0.3895544262035012;
    msg.y = 0.24858477297005244;
    msg.z = 0.9839543894143958;
    msg.timestep = 0.9357074298413207;

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
    msg.setTimeStamp(0.12176693281381445);
    msg.setSource(49171U);
    msg.setSourceEntity(113U);
    msg.setDestination(16143U);
    msg.setDestinationEntity(238U);
    msg.time = 0.3501682120031502;
    msg.x = 0.5422077800271946;
    msg.y = 0.018526850003155237;
    msg.z = 0.8440661091611127;
    msg.timestep = 0.48473570040277547;

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
    msg.setTimeStamp(0.2739243750019099);
    msg.setSource(27734U);
    msg.setSourceEntity(43U);
    msg.setDestination(37418U);
    msg.setDestinationEntity(115U);
    msg.time = 0.040666644986526834;
    msg.x = 0.9105103292026572;
    msg.y = 0.6142355485232707;
    msg.z = 0.22667264774310103;

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
    msg.setTimeStamp(0.9962552578839624);
    msg.setSource(11337U);
    msg.setSourceEntity(234U);
    msg.setDestination(56535U);
    msg.setDestinationEntity(168U);
    msg.time = 0.041064906471693474;
    msg.x = 0.863254710948119;
    msg.y = 0.8343449652931856;
    msg.z = 0.04800391173406082;

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
    msg.setTimeStamp(0.3455125601247395);
    msg.setSource(59314U);
    msg.setSourceEntity(33U);
    msg.setDestination(15639U);
    msg.setDestinationEntity(86U);
    msg.time = 0.3582329188917859;
    msg.x = 0.7678038391991003;
    msg.y = 0.34099189959354115;
    msg.z = 0.8346413571005378;

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
    msg.setTimeStamp(0.32139647603178534);
    msg.setSource(27855U);
    msg.setSourceEntity(65U);
    msg.setDestination(40097U);
    msg.setDestinationEntity(30U);
    msg.time = 0.050222591525443394;
    msg.x = 0.14943213189455906;
    msg.y = 0.5724709174767332;
    msg.z = 0.8844874438124473;

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
    msg.setTimeStamp(0.8197179674950443);
    msg.setSource(46417U);
    msg.setSourceEntity(185U);
    msg.setDestination(36180U);
    msg.setDestinationEntity(247U);
    msg.time = 0.3377151629902977;
    msg.x = 0.4576978822670331;
    msg.y = 0.5237377222463746;
    msg.z = 0.7337697918067284;

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
    msg.setTimeStamp(0.2173804120924444);
    msg.setSource(55597U);
    msg.setSourceEntity(120U);
    msg.setDestination(38921U);
    msg.setDestinationEntity(88U);
    msg.time = 0.6836281401316757;
    msg.x = 0.79256689967595;
    msg.y = 0.55928423292178;
    msg.z = 0.033191984003709374;

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
    msg.setTimeStamp(0.7934061942909518);
    msg.setSource(2761U);
    msg.setSourceEntity(82U);
    msg.setDestination(11377U);
    msg.setDestinationEntity(58U);
    msg.time = 0.4610096842389152;
    msg.x = 0.2545831607120862;
    msg.y = 0.07727072389038869;
    msg.z = 0.2877539475421824;

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
    msg.setTimeStamp(0.5342271539155378);
    msg.setSource(35321U);
    msg.setSourceEntity(199U);
    msg.setDestination(44060U);
    msg.setDestinationEntity(224U);
    msg.time = 0.8131427004444614;
    msg.x = 0.6174523510403571;
    msg.y = 0.704542292117625;
    msg.z = 0.7599705337063065;

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
    msg.setTimeStamp(0.5641373490464899);
    msg.setSource(63991U);
    msg.setSourceEntity(41U);
    msg.setDestination(47511U);
    msg.setDestinationEntity(180U);
    msg.time = 0.6920618233967116;
    msg.x = 0.858195038600144;
    msg.y = 0.7182646163641748;
    msg.z = 0.3475366452532215;

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
    msg.setTimeStamp(0.177885962362484);
    msg.setSource(32691U);
    msg.setSourceEntity(133U);
    msg.setDestination(29602U);
    msg.setDestinationEntity(49U);
    msg.validity = 84U;
    msg.x = 0.3466887570019569;
    msg.y = 0.5635848860920887;
    msg.z = 0.043249131036587896;

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
    msg.setTimeStamp(0.17460339877317477);
    msg.setSource(8993U);
    msg.setSourceEntity(17U);
    msg.setDestination(35291U);
    msg.setDestinationEntity(188U);
    msg.validity = 13U;
    msg.x = 0.353664281235081;
    msg.y = 0.9070897350894883;
    msg.z = 0.20294302236652173;

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
    msg.setTimeStamp(0.8305781452222275);
    msg.setSource(34483U);
    msg.setSourceEntity(50U);
    msg.setDestination(54233U);
    msg.setDestinationEntity(26U);
    msg.validity = 79U;
    msg.x = 0.5163153502908981;
    msg.y = 0.13095451843910533;
    msg.z = 0.13138320354912691;

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
    msg.setTimeStamp(0.9418654499170673);
    msg.setSource(26305U);
    msg.setSourceEntity(156U);
    msg.setDestination(42933U);
    msg.setDestinationEntity(112U);
    msg.validity = 15U;
    msg.x = 0.9296634688969887;
    msg.y = 0.560609881710902;
    msg.z = 0.2979208120949266;

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
    msg.setTimeStamp(0.4928255827042215);
    msg.setSource(56146U);
    msg.setSourceEntity(68U);
    msg.setDestination(17331U);
    msg.setDestinationEntity(227U);
    msg.validity = 91U;
    msg.x = 0.9452141137292809;
    msg.y = 0.18399820347238405;
    msg.z = 0.9673833416846089;

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
    msg.setTimeStamp(0.26636603202554654);
    msg.setSource(16156U);
    msg.setSourceEntity(25U);
    msg.setDestination(614U);
    msg.setDestinationEntity(126U);
    msg.validity = 136U;
    msg.x = 0.3268990987794179;
    msg.y = 0.4357914887605131;
    msg.z = 0.2775814150152224;

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
    msg.setTimeStamp(0.9802815752490046);
    msg.setSource(17093U);
    msg.setSourceEntity(79U);
    msg.setDestination(37620U);
    msg.setDestinationEntity(56U);
    msg.time = 0.6994425189949256;
    msg.x = 0.4372160034524919;
    msg.y = 0.8007969950524666;
    msg.z = 0.3520627624786964;

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
    msg.setTimeStamp(0.007538540320777387);
    msg.setSource(23176U);
    msg.setSourceEntity(175U);
    msg.setDestination(12099U);
    msg.setDestinationEntity(176U);
    msg.time = 0.03909226173409652;
    msg.x = 0.22962051409132345;
    msg.y = 0.17352082359974974;
    msg.z = 0.2639547099251055;

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
    msg.setTimeStamp(0.36608979184816937);
    msg.setSource(62278U);
    msg.setSourceEntity(45U);
    msg.setDestination(29110U);
    msg.setDestinationEntity(128U);
    msg.time = 0.23896936884678432;
    msg.x = 0.8343927736520588;
    msg.y = 0.005341525265954328;
    msg.z = 0.2679950217197057;

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
    msg.setTimeStamp(0.26633138087729114);
    msg.setSource(43764U);
    msg.setSourceEntity(67U);
    msg.setDestination(9923U);
    msg.setDestinationEntity(101U);
    msg.validity = 57U;
    msg.value = 0.08862994569591731;

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
    msg.setTimeStamp(0.7064125368306485);
    msg.setSource(42737U);
    msg.setSourceEntity(57U);
    msg.setDestination(14892U);
    msg.setDestinationEntity(115U);
    msg.validity = 134U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.4829015863572488;
    tmp_msg_0.beam_height = 0.8189232611339544;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.821464663454497;

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
    msg.setTimeStamp(0.19556923800350745);
    msg.setSource(63330U);
    msg.setSourceEntity(233U);
    msg.setDestination(13990U);
    msg.setDestinationEntity(237U);
    msg.validity = 147U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.003008649615202974;
    tmp_msg_0.beam_height = 0.1580547016671039;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.42339635902656647;

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
    msg.setTimeStamp(0.16120412512622162);
    msg.setSource(44555U);
    msg.setSourceEntity(118U);
    msg.setDestination(7485U);
    msg.setDestinationEntity(6U);
    msg.value = 0.3152835027429385;

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
    msg.setTimeStamp(0.34083035972580555);
    msg.setSource(15520U);
    msg.setSourceEntity(44U);
    msg.setDestination(34691U);
    msg.setDestinationEntity(223U);
    msg.value = 0.8718430282698794;

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
    msg.setTimeStamp(0.7811126787856625);
    msg.setSource(31238U);
    msg.setSourceEntity(72U);
    msg.setDestination(63113U);
    msg.setDestinationEntity(249U);
    msg.value = 0.3236508933944041;

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
    msg.setTimeStamp(0.43674709106722975);
    msg.setSource(22447U);
    msg.setSourceEntity(121U);
    msg.setDestination(1807U);
    msg.setDestinationEntity(170U);
    msg.value = 0.7862882263964512;

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
    msg.setTimeStamp(0.6507632464088176);
    msg.setSource(43925U);
    msg.setSourceEntity(181U);
    msg.setDestination(6833U);
    msg.setDestinationEntity(85U);
    msg.value = 0.21043676119753063;

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
    msg.setTimeStamp(0.5002606963243573);
    msg.setSource(55111U);
    msg.setSourceEntity(74U);
    msg.setDestination(13514U);
    msg.setDestinationEntity(232U);
    msg.value = 0.13125130265864648;

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
    msg.setTimeStamp(0.3898595269530083);
    msg.setSource(8762U);
    msg.setSourceEntity(87U);
    msg.setDestination(55679U);
    msg.setDestinationEntity(181U);
    msg.value = 0.5388574438075693;

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
    msg.setTimeStamp(0.8329587516591478);
    msg.setSource(34388U);
    msg.setSourceEntity(167U);
    msg.setDestination(55243U);
    msg.setDestinationEntity(90U);
    msg.value = 0.7317073091095089;

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
    msg.setTimeStamp(0.2649760712934175);
    msg.setSource(55782U);
    msg.setSourceEntity(154U);
    msg.setDestination(49874U);
    msg.setDestinationEntity(230U);
    msg.value = 0.020816745993367025;

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
    msg.setTimeStamp(0.8744778212398465);
    msg.setSource(23110U);
    msg.setSourceEntity(72U);
    msg.setDestination(59738U);
    msg.setDestinationEntity(100U);
    msg.value = 0.3150429061240895;

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
    msg.setTimeStamp(0.05359987729910687);
    msg.setSource(40469U);
    msg.setSourceEntity(109U);
    msg.setDestination(36327U);
    msg.setDestinationEntity(10U);
    msg.value = 0.1168703357399461;

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
    msg.setTimeStamp(0.6478488708681638);
    msg.setSource(33829U);
    msg.setSourceEntity(240U);
    msg.setDestination(62410U);
    msg.setDestinationEntity(111U);
    msg.value = 0.05968257913453634;

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
    msg.setTimeStamp(0.3834187457442523);
    msg.setSource(61012U);
    msg.setSourceEntity(123U);
    msg.setDestination(39813U);
    msg.setDestinationEntity(26U);
    msg.value = 0.6045203105174076;

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
    msg.setTimeStamp(0.9157085438282996);
    msg.setSource(61122U);
    msg.setSourceEntity(46U);
    msg.setDestination(43809U);
    msg.setDestinationEntity(115U);
    msg.value = 0.4403428748846703;

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
    msg.setTimeStamp(0.29744931129177365);
    msg.setSource(3459U);
    msg.setSourceEntity(144U);
    msg.setDestination(39403U);
    msg.setDestinationEntity(202U);
    msg.value = 0.15532445764965708;

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
    msg.setTimeStamp(0.10096720647847846);
    msg.setSource(63607U);
    msg.setSourceEntity(122U);
    msg.setDestination(7535U);
    msg.setDestinationEntity(182U);
    msg.value = 0.6398606944415921;

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
    msg.setTimeStamp(0.7727067498196465);
    msg.setSource(2718U);
    msg.setSourceEntity(211U);
    msg.setDestination(63525U);
    msg.setDestinationEntity(174U);
    msg.value = 0.10694416518731553;

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
    msg.setTimeStamp(0.15634028535286926);
    msg.setSource(15122U);
    msg.setSourceEntity(203U);
    msg.setDestination(32325U);
    msg.setDestinationEntity(166U);
    msg.value = 0.6782578917512976;

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
    msg.setTimeStamp(0.346286753501452);
    msg.setSource(8994U);
    msg.setSourceEntity(24U);
    msg.setDestination(54215U);
    msg.setDestinationEntity(228U);
    msg.value = 0.8693437449147415;

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
    msg.setTimeStamp(0.26983268235547064);
    msg.setSource(4516U);
    msg.setSourceEntity(30U);
    msg.setDestination(43746U);
    msg.setDestinationEntity(99U);
    msg.value = 0.9207415603702434;

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
    msg.setTimeStamp(0.19493108971554796);
    msg.setSource(41720U);
    msg.setSourceEntity(253U);
    msg.setDestination(9023U);
    msg.setDestinationEntity(152U);
    msg.value = 0.49835033406070717;

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
    msg.setTimeStamp(0.6730695233268625);
    msg.setSource(36793U);
    msg.setSourceEntity(174U);
    msg.setDestination(56080U);
    msg.setDestinationEntity(89U);
    msg.value = 0.6768111111342907;

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
    msg.setTimeStamp(0.16254828187463533);
    msg.setSource(60688U);
    msg.setSourceEntity(219U);
    msg.setDestination(24108U);
    msg.setDestinationEntity(82U);
    msg.value = 0.6717409166061462;

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
    msg.setTimeStamp(0.9837269521077922);
    msg.setSource(7513U);
    msg.setSourceEntity(71U);
    msg.setDestination(19377U);
    msg.setDestinationEntity(129U);
    msg.value = 0.29300181792029223;

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
    msg.setTimeStamp(0.2893383895511764);
    msg.setSource(29374U);
    msg.setSourceEntity(194U);
    msg.setDestination(52192U);
    msg.setDestinationEntity(162U);
    msg.direction = 0.1781624625299073;
    msg.speed = 0.3154682973986561;
    msg.turbulence = 0.609903756276748;

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
    msg.setTimeStamp(0.7787130417621848);
    msg.setSource(54562U);
    msg.setSourceEntity(251U);
    msg.setDestination(14718U);
    msg.setDestinationEntity(234U);
    msg.direction = 0.41894434975394546;
    msg.speed = 0.7011518412854439;
    msg.turbulence = 0.5193443776320269;

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
    msg.setTimeStamp(0.35459773116608617);
    msg.setSource(38045U);
    msg.setSourceEntity(83U);
    msg.setDestination(36361U);
    msg.setDestinationEntity(160U);
    msg.direction = 0.247190768802923;
    msg.speed = 0.16172278565460652;
    msg.turbulence = 0.11921823954167665;

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
    msg.setTimeStamp(0.48084500602406577);
    msg.setSource(23640U);
    msg.setSourceEntity(137U);
    msg.setDestination(1033U);
    msg.setDestinationEntity(76U);
    msg.value = 0.8602854568857379;

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
    msg.setTimeStamp(0.45053541459026447);
    msg.setSource(36298U);
    msg.setSourceEntity(132U);
    msg.setDestination(3532U);
    msg.setDestinationEntity(97U);
    msg.value = 0.6202154295596414;

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
    msg.setTimeStamp(0.06620479653002442);
    msg.setSource(18217U);
    msg.setSourceEntity(127U);
    msg.setDestination(13503U);
    msg.setDestinationEntity(206U);
    msg.value = 0.34221455056817274;

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
    msg.setTimeStamp(0.7803674093278936);
    msg.setSource(40465U);
    msg.setSourceEntity(39U);
    msg.setDestination(13339U);
    msg.setDestinationEntity(1U);
    msg.value.assign("FNNZTQRTVLGYHSGAJZLHHTXUSDEKREWYWRRKJLNNFVPQSMENPKWMLVYZJKCXCRAXBQCLQIYBFRGPAOSIZITHGJZXAMUUECFHYNDXJRYMVJPCUMHTDUXIIPBWUWVEVWMMBUQWXTXNBKTOFZOSJTDAKIOUNMGLVLWSRROSHLXOAPDFEKULWIJUCNCXQZPDDCOPBPEMBSFYEGMBOKZVJDCQHFVZDHEWAOGYNTLQGKGTFOSIAZYKA");

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
    msg.setTimeStamp(0.9069748555510577);
    msg.setSource(56080U);
    msg.setSourceEntity(72U);
    msg.setDestination(50854U);
    msg.setDestinationEntity(11U);
    msg.value.assign("XZMOZAAVYVXXOSQNUKFAVJSPVJTGPTJEJEPHRINPDJDVBPXTRAQLCEAUGLJKTMIYZZAKCMVH");

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
    msg.setTimeStamp(0.9581522474334888);
    msg.setSource(53083U);
    msg.setSourceEntity(23U);
    msg.setDestination(31696U);
    msg.setDestinationEntity(192U);
    msg.value.assign("YEPBROLWHLVNJEOLUOVOXAIYBRDIZOLURNENGSGHBPFGMWNGECFNZTJXAFYYPIVDFYKPXDIHILVSWAXHUWTZQUUETOJEQIKNKAZTDEOVLODDZQQQVFJVFJUDSIPJZCGMRVUCALKSSWBSAIWBGKWBBWVMWSOOVTLJPEQMTUGARXFRXSQSKUYYPITHBCFMRNDYKGCZQPAJHTMMXXCDNHRTUCXWIHCZZELKTKDZBFQFHEKPRAXGCNAJCG");

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
    msg.setTimeStamp(0.7283162095000945);
    msg.setSource(12185U);
    msg.setSourceEntity(143U);
    msg.setDestination(3139U);
    msg.setDestinationEntity(113U);
    const char tmp_msg_0[] = {23, 42, -14, 8, 120, 40, -114, 21, 17, -56, -113, 40, -49, -104, 102, 121, -92, 15, -52, 4, 25, 69, -95, 33, 102, 45, -113, 47, 11, -108, 111, -106, 32, -127, 38, 120, 32, 62, -69, -15, -49, -113, -20, -71, 19, 117, 99, 83, -120, -26, 15, -62, -41, -40, -65, 51, 117, -74, 13, -123, -72, 42, 97, 9};
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
    msg.setTimeStamp(0.8119782907229192);
    msg.setSource(25244U);
    msg.setSourceEntity(52U);
    msg.setDestination(59470U);
    msg.setDestinationEntity(173U);
    const char tmp_msg_0[] = {23, -8, -70, 72, 9, 37, 34, 14, -109, -16, -89, 52, 43, 125, -103, 53};
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
    msg.setTimeStamp(0.7743661551925495);
    msg.setSource(38440U);
    msg.setSourceEntity(20U);
    msg.setDestination(48343U);
    msg.setDestinationEntity(5U);
    const char tmp_msg_0[] = {-39, 29, 97, -66, 42, 15, -43, -87, 5, -43, -43, 90, -69, 23, 122, 26, 120, -100, 77, 54, 16, 116, -53, 69, 89, 94, 67, 30, -67, 102, 104, 18, 38, 44, -3, 95, 61, -70, 62, -87, -17, -60, -118, -17, 17, -89, 125, 67, 27, 29, 120, -113, 50, -83, 74, 36, -31, -108, 34, 60, -77, 41, 9, -87, -101, 44, -58, -75, 102, 69, -126, 57, -43, 107, -51, -27, -54, -82, 26, 117, -72, 30, 34, 46, 0, 54, 29, 24, -124, -123, -48, 38, 29, 124, 74, -91, 116, 104, 92, 32, 103, -46, 46, -3, -96, -109, 2, -47, -118, -59, 8, -20, 30, 9, 43, 115, -71, 43, 123, -18, -78, 58, -123, -16, 96, -102, -61, -64, -9, -89, -42, -80, 96, 38, 100, -106, -58, 16, 27, 106, 25, 107, 32, 79, 5, -117, -109, 66, 70, 38, -110, 77, 100, -67, -128, 25, 101};
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
    msg.setTimeStamp(0.1895863958385442);
    msg.setSource(32423U);
    msg.setSourceEntity(136U);
    msg.setDestination(63751U);
    msg.setDestinationEntity(30U);
    msg.type = 173U;
    msg.frequency = 2729956510U;
    msg.min_range = 27833U;
    msg.max_range = 8231U;
    msg.bits_per_point = 170U;
    msg.scale_factor = 0.020360418427612825;
    const char tmp_msg_0[] = {7, -12, -56, 93, -67, -121, 117, -7, -9, 87, -38, 111, 41, -125, -108, -38, -116, 4, 11, 26, 72, -108, 121, -77, -32, 80, -115, -86, -111, 84, -60, -75, -99, 54, -94, -28, 8, 64, -62, -62, -60, -46, 80, -118, 0, 14, 118, 0, -52, -82, -78, -81, -6, -61, 8, -116, -45, 95, -7, 58, -75, -109, -24, 71, -45, -78, -13, -110, 32, 48, -40, -76, -124, -116, -24, -40, -107, -89, 13, 125, -122, -18, -63, 39, -30, 42, 19, -5, 77, 27, 111, 14, 120, -81, -122, 61, -21, 75, -116, 21, -122, -96, -110, -71, 48, -85, 51, -100, 104, -93, 95, 21, 0, -89, 49, -91, 93, 19, 20, 124, -93, 28, 81, -47, -116, 20, 115, -99, 120, -111, 72, -120, 125, 9, 36, -102, -50, 116, -126, 37, 59, -45, -126, -41, 118, -68, 5, 11, -23, -23, 39, -105, -76, 58, 108, -68, 118, -93, -53, -106, 92, -122, 76, -102, 113, -126, 115, 9, 30, 93, 8, -2, -2, 32, -50, -30, 42, 27, -59, -14, 20, -6, -60, 12, -106, -11, -12, -15, 1, -12, 12, -79, 5, -54, -11, 14, 41, 5, 41, 104, 17, -59, 18, -67, 106, 34, -83, 13, -109, 88, 110, -92};
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
    msg.setTimeStamp(0.5956605880836224);
    msg.setSource(1141U);
    msg.setSourceEntity(179U);
    msg.setDestination(33273U);
    msg.setDestinationEntity(200U);
    msg.type = 52U;
    msg.frequency = 3159391021U;
    msg.min_range = 43927U;
    msg.max_range = 44978U;
    msg.bits_per_point = 22U;
    msg.scale_factor = 0.7926126738751581;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.08019076906126954;
    tmp_msg_0.beam_height = 0.2773133956975671;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {-82, -39, 13, 102, 113, 3, 20, -49, -97, 33, -124, 19, -110, -42, 117, -127, -74, -123, 16, -54, -64, -93, 86, -53, -86, 49, -110, 63, -66, -51, -87, 5, -73, 43, -103, -51, 106, 17, 97, 58, 4, -9, 8, 10, 124, -38, 123, -102, -93, -16, 87, 94, 100, 12, 89, -116, -55, -47, -26, -65, -27, -38, 64, 49, 99, 107, -58, -1, -14, -16, -25, 123, -117, -48, -23, -89, 25, 100, 6, 104, -45, -109, 46, 124, -120, 106, -99, -87, 82, -89, -10, -41, 47, 63, 8, -79, 51, -75, -31, -89, 51, 7, 102, -68, -11, 37, -32, -55, 98, -111, -100, -124, 82, -87, -45, 45, 90, -46, -110, -22, -12, -70, 122, -79, -82, 110, 81, -7, 58, 18, 94, -108, -36, -36, 81, -95, -88, -10, 76, 45, -54, 52, -127};
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
    msg.setTimeStamp(0.7020268141560596);
    msg.setSource(1379U);
    msg.setSourceEntity(101U);
    msg.setDestination(61882U);
    msg.setDestinationEntity(162U);
    msg.type = 54U;
    msg.frequency = 882243495U;
    msg.min_range = 3133U;
    msg.max_range = 44660U;
    msg.bits_per_point = 231U;
    msg.scale_factor = 0.359339938536298;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.3244489437842405;
    tmp_msg_0.beam_height = 0.5656436821987313;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {64, 115, 2, -114, -100, -107, -28, -25, 97, 42, -4, -107, 100, 32, -78, -22, 81, -76, -66, -114, 121, -60, -30, 54, 57, 39, -28, -7, 76, -117, 9, -105, 44, -16, -99, -60, -65, -74, 116, 29, 102, -67, 25, -106, -101, 43, 56, 97, 5, -77, 71, -23, 76, -102, 61, -74, -37, 119, 46, -107, -98, 41, 77, 99, 106, 89, -16, -20, 123, 4, 14, -83, 21, -108, -5, 64, 43, 47, -47, -32, -113, -120, 21, -123, 52, 9, -10, -56, -61, 77, -79, 42, -91, 5, 0, -34, -50, -27, 58, 87, -101, -46, -120, -82, 39, -21, 56, -69, 44, -33, 100, 52, -16, -34, 4, -116, -6, -119, -33, -53, -13, 48, 72, 104, 97, -111, 0, -33, 108, 21, -54, 125, -60, 62, -76, -64, -22, 42, -57, -13, 56, 13, 104, 102, 15, -102, -106, 61, 4, -114, 27, 119, 105, 98, -50, -90, 111, -112, -41, 86, 56, 70, 103, 57, 6, 106, -84, 2, -9, 49, 105, 63, 21, -76, 114, 65, 6, 109, 67, -115, -76, -100, -111, -80, -35, 2, 19, -7, 26, 68, 4, -110, 101, 55, -114, 66, -10, 43, -77, -83, -38, -57, 76, -37, -20, -6, -8, -46, -91, 40, -76, 68, -4, 111, 118, 68, -40, -71, 6, -41, 91, 29, -39, -16, 66, 26, 74, 84, 9, -84, -69, -127, 53, 65, 34, 78, 77, 46, 37, -65, -82, 101, 16, -71, 65, 121};
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
    msg.setTimeStamp(0.7797974233480375);
    msg.setSource(44098U);
    msg.setSourceEntity(126U);
    msg.setDestination(57005U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.6531962758701418);
    msg.setSource(9857U);
    msg.setSourceEntity(159U);
    msg.setDestination(42177U);
    msg.setDestinationEntity(186U);

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
    msg.setTimeStamp(0.3641381548621919);
    msg.setSource(34462U);
    msg.setSourceEntity(239U);
    msg.setDestination(15955U);
    msg.setDestinationEntity(221U);

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
    msg.setTimeStamp(0.7032802029159896);
    msg.setSource(42088U);
    msg.setSourceEntity(213U);
    msg.setDestination(12546U);
    msg.setDestinationEntity(135U);
    msg.op = 143U;

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
    msg.setTimeStamp(0.8895163333395024);
    msg.setSource(9850U);
    msg.setSourceEntity(85U);
    msg.setDestination(6683U);
    msg.setDestinationEntity(15U);
    msg.op = 93U;

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
    msg.setTimeStamp(0.5829480436112374);
    msg.setSource(14551U);
    msg.setSourceEntity(112U);
    msg.setDestination(5450U);
    msg.setDestinationEntity(156U);
    msg.op = 214U;

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
    msg.setTimeStamp(0.8424513847909654);
    msg.setSource(46742U);
    msg.setSourceEntity(187U);
    msg.setDestination(16412U);
    msg.setDestinationEntity(71U);
    msg.value = 0.8697556620881828;
    msg.confidence = 0.04018192703212775;
    msg.opmodes.assign("FSNBRVAOJIYUIDUOUANZJWJLWECLBGXIRQUQNAWFEBSIVOHCCOBOZNVYHUKITFPGASXFHEFHRSEQZUARCLMYRXJBKLEKJSOHPSHKSKWPVMPVWWDNFWUAFEZYGMUQTVTGHAYDDNPLZHPLHASRLCXDFFQCEOMKJBOZOGUGPJYJETUMGGLRJBDTRMQWOPQTNZWBZACVDMBIYVRNCYGIIHQQLXFSDKDNXVPLJQWYTTBSAXKXMCGZPXETKYVIZDNM");

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
    msg.setTimeStamp(0.23457957149079522);
    msg.setSource(60828U);
    msg.setSourceEntity(245U);
    msg.setDestination(18113U);
    msg.setDestinationEntity(55U);
    msg.value = 0.8332849110485875;
    msg.confidence = 0.29344491566866593;
    msg.opmodes.assign("POLBCIEGQRWKFQQYXGBNPDMJPTZRDIJOLRDGCDNABVJNJGCMYJSVVAQRGDHWETHIIPKABSXZANJIKNUPKMWLVXDFSYOHZWZATCJNSSHPASNBSYFUXYEUWZRSARULUUFBVCXOOGBEWHWQQJMFATZTBWFHKUXVTBCPLGUTXRJQ");

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
    msg.setTimeStamp(0.8243950698180231);
    msg.setSource(36272U);
    msg.setSourceEntity(178U);
    msg.setDestination(12748U);
    msg.setDestinationEntity(254U);
    msg.value = 0.015344729946128344;
    msg.confidence = 0.8258621122680301;
    msg.opmodes.assign("ODTLNCZSNWKVJSTBVXJOIAAHDKGCTDULXGQPYFPHESLUUPZI");

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
    msg.setTimeStamp(0.3432802857841313);
    msg.setSource(64616U);
    msg.setSourceEntity(2U);
    msg.setDestination(35626U);
    msg.setDestinationEntity(54U);
    msg.itow = 231593606U;
    msg.lat = 0.2185225003401895;
    msg.lon = 0.12200659842738537;
    msg.height_ell = 0.8425750856218978;
    msg.height_sea = 0.24727936176481513;
    msg.hacc = 0.6111979258728663;
    msg.vacc = 0.0919093609800099;
    msg.vel_n = 0.5871116684534257;
    msg.vel_e = 0.5035928950943943;
    msg.vel_d = 0.12450320817654681;
    msg.speed = 0.1355739199484124;
    msg.gspeed = 0.21479012386815777;
    msg.heading = 0.6949720198636423;
    msg.sacc = 0.13927752940950477;
    msg.cacc = 0.12848904234943226;

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
    msg.setTimeStamp(0.8929837091714703);
    msg.setSource(48162U);
    msg.setSourceEntity(109U);
    msg.setDestination(35231U);
    msg.setDestinationEntity(235U);
    msg.itow = 207386322U;
    msg.lat = 0.9263303086116965;
    msg.lon = 0.6326388043514601;
    msg.height_ell = 0.7874480606201294;
    msg.height_sea = 0.6778208202683541;
    msg.hacc = 0.8517034941717245;
    msg.vacc = 0.1712294816521932;
    msg.vel_n = 0.2071986055911026;
    msg.vel_e = 0.7747056299155305;
    msg.vel_d = 0.7352843927139725;
    msg.speed = 0.37233455613174216;
    msg.gspeed = 0.06992917855171443;
    msg.heading = 0.6413475184329526;
    msg.sacc = 0.7644712215033742;
    msg.cacc = 0.6351523912325423;

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
    msg.setTimeStamp(0.2299429844144517);
    msg.setSource(22618U);
    msg.setSourceEntity(172U);
    msg.setDestination(60078U);
    msg.setDestinationEntity(159U);
    msg.itow = 795756794U;
    msg.lat = 0.25463839218800244;
    msg.lon = 0.16817811584975906;
    msg.height_ell = 0.3208453449381127;
    msg.height_sea = 0.2380960228272666;
    msg.hacc = 0.6479301954123629;
    msg.vacc = 0.027852061566055908;
    msg.vel_n = 0.5683174884250135;
    msg.vel_e = 0.0806691547884163;
    msg.vel_d = 0.4225909855756683;
    msg.speed = 0.13697516989816183;
    msg.gspeed = 0.8141979645938546;
    msg.heading = 0.21624699567390238;
    msg.sacc = 0.029342982842033294;
    msg.cacc = 0.07133619536983615;

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
    msg.setTimeStamp(0.9582190885520101);
    msg.setSource(1479U);
    msg.setSourceEntity(64U);
    msg.setDestination(24838U);
    msg.setDestinationEntity(41U);
    msg.id = 118U;
    msg.value = 0.49175400201088393;

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
    msg.setTimeStamp(0.5488276632361299);
    msg.setSource(14856U);
    msg.setSourceEntity(213U);
    msg.setDestination(49060U);
    msg.setDestinationEntity(245U);
    msg.id = 73U;
    msg.value = 0.3124824531449778;

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
    msg.setTimeStamp(0.284668867122681);
    msg.setSource(13003U);
    msg.setSourceEntity(221U);
    msg.setDestination(40271U);
    msg.setDestinationEntity(117U);
    msg.id = 126U;
    msg.value = 0.9592591423238142;

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
    msg.setTimeStamp(0.7434626560226559);
    msg.setSource(17067U);
    msg.setSourceEntity(192U);
    msg.setDestination(41490U);
    msg.setDestinationEntity(200U);
    msg.x = 0.3878843776845736;
    msg.y = 0.6892495918944843;
    msg.z = 0.8378013832843271;
    msg.phi = 0.11397683289238969;
    msg.theta = 0.3797571469746518;
    msg.psi = 0.4158789056442501;

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
    msg.setTimeStamp(0.6023019178808324);
    msg.setSource(57170U);
    msg.setSourceEntity(123U);
    msg.setDestination(60377U);
    msg.setDestinationEntity(238U);
    msg.x = 0.057007634347074565;
    msg.y = 0.7631743941556534;
    msg.z = 0.05677420684257273;
    msg.phi = 0.738985940629072;
    msg.theta = 0.029856037887606046;
    msg.psi = 0.4024987800736882;

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
    msg.setTimeStamp(0.32435863935206743);
    msg.setSource(9888U);
    msg.setSourceEntity(17U);
    msg.setDestination(50716U);
    msg.setDestinationEntity(198U);
    msg.x = 0.030984576377591888;
    msg.y = 0.22708493281287;
    msg.z = 0.569047248769714;
    msg.phi = 0.5656565988509752;
    msg.theta = 0.14930792299221818;
    msg.psi = 0.34631110114750585;

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
    msg.setTimeStamp(0.698109895973711);
    msg.setSource(55601U);
    msg.setSourceEntity(11U);
    msg.setDestination(51829U);
    msg.setDestinationEntity(84U);
    msg.beam_width = 0.2841664060200071;
    msg.beam_height = 0.7136966937115478;

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
    msg.setTimeStamp(0.5612465829854313);
    msg.setSource(15603U);
    msg.setSourceEntity(163U);
    msg.setDestination(14304U);
    msg.setDestinationEntity(152U);
    msg.beam_width = 0.21468878392614743;
    msg.beam_height = 0.8458644263994497;

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
    msg.setTimeStamp(0.08419490440722766);
    msg.setSource(29776U);
    msg.setSourceEntity(93U);
    msg.setDestination(60961U);
    msg.setDestinationEntity(66U);
    msg.beam_width = 0.18887850441511567;
    msg.beam_height = 0.6863055902181169;

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
    msg.setTimeStamp(0.832911400660943);
    msg.setSource(46997U);
    msg.setSourceEntity(123U);
    msg.setDestination(32757U);
    msg.setDestinationEntity(140U);
    msg.sane = 234U;

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
    msg.setTimeStamp(0.007344139891916068);
    msg.setSource(29389U);
    msg.setSourceEntity(210U);
    msg.setDestination(5718U);
    msg.setDestinationEntity(190U);
    msg.sane = 54U;

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
    msg.setTimeStamp(0.12962173655048292);
    msg.setSource(39934U);
    msg.setSourceEntity(211U);
    msg.setDestination(46922U);
    msg.setDestinationEntity(242U);
    msg.sane = 104U;

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
    msg.setTimeStamp(0.7313232377704822);
    msg.setSource(15671U);
    msg.setSourceEntity(1U);
    msg.setDestination(52598U);
    msg.setDestinationEntity(222U);
    msg.id = 140U;
    msg.zoom = 50U;
    msg.action = 223U;

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
    msg.setTimeStamp(0.24734946517739276);
    msg.setSource(22397U);
    msg.setSourceEntity(41U);
    msg.setDestination(44037U);
    msg.setDestinationEntity(212U);
    msg.id = 32U;
    msg.zoom = 72U;
    msg.action = 213U;

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
    msg.setTimeStamp(0.8010038047852548);
    msg.setSource(35906U);
    msg.setSourceEntity(165U);
    msg.setDestination(31682U);
    msg.setDestinationEntity(2U);
    msg.id = 111U;
    msg.zoom = 36U;
    msg.action = 145U;

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
    msg.setTimeStamp(0.7776253874846525);
    msg.setSource(27870U);
    msg.setSourceEntity(100U);
    msg.setDestination(39434U);
    msg.setDestinationEntity(168U);
    msg.id = 59U;
    msg.value = 0.6777665197060228;

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
    msg.setTimeStamp(0.3532572492928795);
    msg.setSource(32732U);
    msg.setSourceEntity(12U);
    msg.setDestination(31712U);
    msg.setDestinationEntity(158U);
    msg.id = 60U;
    msg.value = 0.36169639686465815;

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
    msg.setTimeStamp(0.9987584464805253);
    msg.setSource(1894U);
    msg.setSourceEntity(66U);
    msg.setDestination(49098U);
    msg.setDestinationEntity(44U);
    msg.id = 63U;
    msg.value = 0.41301343101868815;

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
    msg.setTimeStamp(0.948593433779644);
    msg.setSource(26525U);
    msg.setSourceEntity(158U);
    msg.setDestination(8331U);
    msg.setDestinationEntity(61U);
    msg.id = 162U;
    msg.value = 0.323284734870366;

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
    msg.setTimeStamp(0.4094690941862633);
    msg.setSource(43035U);
    msg.setSourceEntity(37U);
    msg.setDestination(40170U);
    msg.setDestinationEntity(83U);
    msg.id = 83U;
    msg.value = 0.7981414309108139;

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
    msg.setTimeStamp(0.4207951949382088);
    msg.setSource(2983U);
    msg.setSourceEntity(139U);
    msg.setDestination(51042U);
    msg.setDestinationEntity(160U);
    msg.id = 134U;
    msg.value = 0.6327095604499041;

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
    msg.setTimeStamp(0.8906361560018391);
    msg.setSource(51805U);
    msg.setSourceEntity(95U);
    msg.setDestination(46878U);
    msg.setDestinationEntity(13U);
    msg.id = 59U;
    msg.angle = 0.22715704121958635;

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
    msg.setTimeStamp(0.8810110343276302);
    msg.setSource(28229U);
    msg.setSourceEntity(74U);
    msg.setDestination(52519U);
    msg.setDestinationEntity(27U);
    msg.id = 97U;
    msg.angle = 0.42496735587789913;

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
    msg.setTimeStamp(0.5522021173785981);
    msg.setSource(58324U);
    msg.setSourceEntity(184U);
    msg.setDestination(9309U);
    msg.setDestinationEntity(232U);
    msg.id = 23U;
    msg.angle = 0.5781227876640356;

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
    msg.setTimeStamp(0.1683140602526194);
    msg.setSource(11677U);
    msg.setSourceEntity(157U);
    msg.setDestination(10330U);
    msg.setDestinationEntity(240U);
    msg.op = 167U;
    msg.actions.assign("DLAGZAMUZCSIREQHOGRPGHFYPUDYSKRAXRZWBKTBKKWUNDCZYWCADJHLVACPIGAMNBJNFPEZTAPUTFTBBKUXJLESBVJWHIINMLXNDPFVQIFTDEXQLSPHWNOQYSMWBZPOFYJVUMVXHYCVITKXEEWEMBFWZVJZWRGKXSGTYHXEIEYKRDPLCTYCCMKAOTZZRWQSRQYHFODNIOGSXXCSRKODTGEVQGJUMSGQNVLNVLUURMBO");

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
    msg.setTimeStamp(0.6069689031340142);
    msg.setSource(55208U);
    msg.setSourceEntity(239U);
    msg.setDestination(43812U);
    msg.setDestinationEntity(183U);
    msg.op = 174U;
    msg.actions.assign("NNKIMLDFJZCQOKHXAYXIXFXCFELXEELVGAEFPKCJXHIDHDWDHLWZKZQYDRUVOTACIZWFNSDTKZXKOZEEOUAPJCVGVQTZVSFPBGTMKPQWNBBGHYULJTZBRKSACVPGCHGTUSSJPQCSMBXNQBVNF");

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
    msg.setTimeStamp(0.8340196700891965);
    msg.setSource(15174U);
    msg.setSourceEntity(138U);
    msg.setDestination(32710U);
    msg.setDestinationEntity(18U);
    msg.op = 163U;
    msg.actions.assign("AHYFZZGBEQGMRMOCDWFCVNSTMTGZNPFHUBXGNYIFSMQXOEFTYHJWMPTDSGBKGMOJBNBGJIDLTWHWQKYJTRLZKDKCDXIVVSREXSICRBU");

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
    msg.setTimeStamp(0.7929123009167904);
    msg.setSource(2258U);
    msg.setSourceEntity(64U);
    msg.setDestination(50077U);
    msg.setDestinationEntity(95U);
    msg.actions.assign("KJYMVRWUQLQYIKRZTCRUTUIKNNADKDTODZFHIROTQSMFCLEDRBKNYTCHAOASCGNTBWHSUNQYHPJZZFGEPFAZVKXNLZSRBGWGXMXLTQJFPPMEMQWXNXAPHHQOCOFXIYJIXHXQGLSQPHALVBEUCKUXAGVRGWBDKUTLERVMUCQMDWVU");

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
    msg.setTimeStamp(0.947166367076834);
    msg.setSource(42766U);
    msg.setSourceEntity(100U);
    msg.setDestination(9186U);
    msg.setDestinationEntity(71U);
    msg.actions.assign("ZOBBSTXDJBPOCUAUCJIGLHJFEPPTEXWFNQDSRQLNTXJSLIQLALMGIIMUKRGHNNVFXDRLSG");

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
    msg.setTimeStamp(0.9367448819439093);
    msg.setSource(24257U);
    msg.setSourceEntity(199U);
    msg.setDestination(46866U);
    msg.setDestinationEntity(217U);
    msg.actions.assign("BVFWYGSGJUGIUTJMDWQVLSPZALCMCFKTHNYWQVJPJWGNLNXNMCXWVKQNZSEGWXBMFQTUZKJJXMAZUTLVOXELIESHXPHLRFPIODIEEHRTWAKOSEAAXPINFZVIPNUZZMIOFJKPCKRCGYRGYHBYGPRJVYRFRAMAUOMREUQQDTOPXOITBU");

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
    msg.setTimeStamp(0.2768579567515548);
    msg.setSource(23421U);
    msg.setSourceEntity(64U);
    msg.setDestination(21780U);
    msg.setDestinationEntity(80U);
    msg.button = 187U;
    msg.value = 112U;

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
    msg.setTimeStamp(0.16837310099823988);
    msg.setSource(22665U);
    msg.setSourceEntity(233U);
    msg.setDestination(57346U);
    msg.setDestinationEntity(16U);
    msg.button = 216U;
    msg.value = 6U;

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
    msg.setTimeStamp(0.4784254391277145);
    msg.setSource(24595U);
    msg.setSourceEntity(173U);
    msg.setDestination(31597U);
    msg.setDestinationEntity(49U);
    msg.button = 6U;
    msg.value = 170U;

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
    msg.setTimeStamp(0.7512102122234867);
    msg.setSource(37578U);
    msg.setSourceEntity(154U);
    msg.setDestination(34125U);
    msg.setDestinationEntity(253U);
    msg.op = 112U;
    msg.text.assign("EFNNOVGVYWWXMOGQGFYPIGLKWIFSBWVDXJAKXLKUTYBHECNAJZMPZOIBHDDWLDHTQIEHRZNNSNFQYCXFXKXQYLAIHBLUPJTHAPLGNGILRFBPHVJGBIZKQIFEAXOCXYOEBRFVSCUSTDNBPYBOYBUUHKLRQIOKDCCPEZDYMEDNWSVTRJQCNCHZDEPWMVDFJMGSTKZGJRRTVWXCZWJOYSQULTPUTOMSLSVZAHXUQTJKEURMRVKSUQC");

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
    msg.setTimeStamp(0.8742583947016199);
    msg.setSource(19491U);
    msg.setSourceEntity(80U);
    msg.setDestination(19046U);
    msg.setDestinationEntity(151U);
    msg.op = 113U;
    msg.text.assign("PNZLJKWPTRJYAEHRIDJJJHUMQFVKTBYOMXDFHQZAHLAAAQTMRRWGPXHSWFKCLETUFSITSODCMEXMNAKALLKGBFRJTLTNGSVDFXQIVHWXXB");

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
    msg.setTimeStamp(0.4621892789132359);
    msg.setSource(3289U);
    msg.setSourceEntity(63U);
    msg.setDestination(47538U);
    msg.setDestinationEntity(66U);
    msg.op = 153U;
    msg.text.assign("PKIAWXKCXRKAPUHAEZKGLNZTVEBHLDYADNXTCGMCBQQNFMRQORVHJQBBINDOPFQCLWRTVQDDZMSGYBQTWPFMSFRVVPFEZHHOHUGZOTNNYJFIWYWYXJSJUIVZLRIVJENBMYSRBCHMRLQLBKUPAOGTADODEJLHVM");

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
    msg.setTimeStamp(0.08061240695759764);
    msg.setSource(3922U);
    msg.setSourceEntity(213U);
    msg.setDestination(23394U);
    msg.setDestinationEntity(35U);
    msg.op = 81U;
    msg.time_remain = 0.40570678589006415;
    msg.sched_time = 0.889374929179708;

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
    msg.setTimeStamp(0.47744169706713924);
    msg.setSource(43052U);
    msg.setSourceEntity(63U);
    msg.setDestination(21792U);
    msg.setDestinationEntity(118U);
    msg.op = 58U;
    msg.time_remain = 0.41235025138829406;
    msg.sched_time = 0.866051006080533;

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
    msg.setTimeStamp(0.16064464378243792);
    msg.setSource(13813U);
    msg.setSourceEntity(244U);
    msg.setDestination(32585U);
    msg.setDestinationEntity(144U);
    msg.op = 221U;
    msg.time_remain = 0.4149804419542389;
    msg.sched_time = 0.05726841998603127;

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
    msg.setTimeStamp(0.3459277534503916);
    msg.setSource(49136U);
    msg.setSourceEntity(186U);
    msg.setDestination(21941U);
    msg.setDestinationEntity(109U);
    msg.name.assign("JGSCOVZERUMGTEHMABPXBFPQPGPNIWHBNHOEIQOLTNCXCXKUCYVDDLLEOKNRGILMSSJJTIYIHXDABBUYJAAOOYFEEFKVJONYAHOVNXBHIYLGVLUCXNYRFOMQHSEWI");
    msg.op = 73U;
    msg.sched_time = 0.7283262768536908;

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
    msg.setTimeStamp(0.3188220718378727);
    msg.setSource(64881U);
    msg.setSourceEntity(72U);
    msg.setDestination(22041U);
    msg.setDestinationEntity(177U);
    msg.name.assign("CBXQAPHFMOLMTRZXWOPQRFPFOCDLDUTVNGRMJZPWNNYBZGRLVAYQAIIMGHXMVBEOLHPLCVAHUKTUPPBC");
    msg.op = 188U;
    msg.sched_time = 0.4863136811751987;

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
    msg.setTimeStamp(0.4255584329662071);
    msg.setSource(11564U);
    msg.setSourceEntity(37U);
    msg.setDestination(42361U);
    msg.setDestinationEntity(191U);
    msg.name.assign("QYFBUNHNCHLPIYKAYLCFXGATAFVCTDSOCMYWXRZRBRIHWJGNMKUXHEVPESBDUARUSSDFTVTOGHJAUFDYBWSSZVZZRHXOOXZGMQCJKAUOQWRUMUTRFJPWJNHPTLJYINQXRBCPIIZACEEKQLSLYGHDXQVMTAOGAPGEIOXFKSRLWJCKYNJEQMQJHQRIUZBPTLIKG");
    msg.op = 106U;
    msg.sched_time = 0.2464077783541735;

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
    msg.setTimeStamp(0.4424434577472114);
    msg.setSource(60886U);
    msg.setSourceEntity(192U);
    msg.setDestination(16223U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.4563550372788522);
    msg.setSource(17306U);
    msg.setSourceEntity(10U);
    msg.setDestination(1534U);
    msg.setDestinationEntity(77U);

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
    msg.setTimeStamp(0.5870979913560234);
    msg.setSource(56264U);
    msg.setSourceEntity(235U);
    msg.setDestination(61106U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.19272896562006125);
    msg.setSource(920U);
    msg.setSourceEntity(28U);
    msg.setDestination(45311U);
    msg.setDestinationEntity(96U);
    msg.name.assign("JXAQZRGYMFNJLLNECQDNHDHZMHBAUXSRFOFZDBKTOBKIJUTIHCEVTGWJVOPYBJESFXQNFVDIMNJRHONOVLNCJHWWGSKUVAIPFAMULKCSKYXLQESYXTWNRYFVAILSKPPIMOZBWQTGTPEQAPDUGSVKGBHTRQACSXOCDUIBREZXYAWHZQLYBVFZIRBDGCPTJXENMXVOPGDBYFZNPAZWTLYKJ");
    msg.state = 239U;

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
    msg.setTimeStamp(0.5852748526396312);
    msg.setSource(17579U);
    msg.setSourceEntity(92U);
    msg.setDestination(65520U);
    msg.setDestinationEntity(90U);
    msg.name.assign("MYCVODBXBXLUHLRHOCTKRMGLAHSKVKZBZPCQGCXYOFXTBJWJTLBQIIZXVZXNRSRWAUMCCUKASLIWARNEYUGUWXEQCTQNOYITZRQOZUZUKOQODSDEPHFSQYEMGABDNUIBVSRLIEHJGPFKBCVPHWLZGTPNEWAWMMLSDTPLQOYPGSHFXLJTQWHUJWJFJKJMIFTHFAMTBH");
    msg.state = 182U;

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
    msg.setTimeStamp(0.8981857480370833);
    msg.setSource(31014U);
    msg.setSourceEntity(179U);
    msg.setDestination(51744U);
    msg.setDestinationEntity(204U);
    msg.name.assign("HPKESYDNWPEATIGVVYDWQKRKBYPCEXATTDDQYJGPSHFPGSNFJCTHXIXHUHSQGMVKNEKANUFDIXQCCJXZEOWRRGPMFQHQIHKOEFLAPDXHXHAHEALMPLFWWWBSRJDCKVVZWBLJBIWGTQGTPCQOEYUBMGVBJBRKUJICOTQAGMDMDNPNFFRZAMVSXRZLS");
    msg.state = 87U;

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
    msg.setTimeStamp(0.3279196682149994);
    msg.setSource(54237U);
    msg.setSourceEntity(204U);
    msg.setDestination(36863U);
    msg.setDestinationEntity(69U);
    msg.name.assign("OHAGKCISCRCWZQPWVGTWSCJKPHZTLAEAPGWYTBXDQMVGYMNUXSNXNMVFPCUDTKKXKMQOBPDGAPIWTNUVMIULLOTJI");
    msg.value = 167U;

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
    msg.setTimeStamp(0.3151198374989269);
    msg.setSource(51362U);
    msg.setSourceEntity(81U);
    msg.setDestination(36847U);
    msg.setDestinationEntity(65U);
    msg.name.assign("KAJMVRGHWJWYFIBXFPATXDFTEBIAZQQDHLDKXFAYEMVGGIWLNAGFNRKRYZOUNBWRHKSOVLBIWWURSLUTPCJLRALHTQSBVCEAXUYLYASCWZTHKZZSRLDFTDKEUMVJUHQCJHCHYBW");
    msg.value = 40U;

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
    msg.setTimeStamp(0.6007979714822305);
    msg.setSource(15727U);
    msg.setSourceEntity(85U);
    msg.setDestination(56850U);
    msg.setDestinationEntity(21U);
    msg.name.assign("TWOGHLIOBFJLXEFYUDJXDFRIGHXHCLZJAPEJYEHGKJFAUXNSEKPLASXHKVVUNZRONPVIBSUTPYTVRJGMRU");
    msg.value = 19U;

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
    msg.setTimeStamp(0.19657994976558502);
    msg.setSource(14959U);
    msg.setSourceEntity(150U);
    msg.setDestination(1542U);
    msg.setDestinationEntity(152U);
    msg.name.assign("YDLOHGCJVNXOZELQDWUVXLUJOZBSBYXBLADHCELFYSXXPUKYOSJMP");

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
    msg.setTimeStamp(0.8944894773204773);
    msg.setSource(25401U);
    msg.setSourceEntity(24U);
    msg.setDestination(39623U);
    msg.setDestinationEntity(66U);
    msg.name.assign("VVCHJTEZAVUBVXVGIOWJMZUPTABRTXSWVFSIRCBDAMNNCTKMQWHJBKVMCBFBSBDEYKCCAPFKXPZOJYHDOORNFSWZZXYYGJLDLVSKKVZIUNNRLYUUJLGZEXAFGXWKHCRITLGCPKHJMDHTXPOQEPIOMNRLDMQUGPETWWPEEWONFXTWDCSYQSBBUYBIDPHMJIFHLUWLQIAEPMGFHQLZONCAKNYZYFTDQ");

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
    msg.setTimeStamp(0.9529084687466864);
    msg.setSource(48625U);
    msg.setSourceEntity(66U);
    msg.setDestination(53219U);
    msg.setDestinationEntity(65U);
    msg.name.assign("KPYBUULNWBKIZHXBUTVXKPIZOQELFSANFWTC");

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
    msg.setTimeStamp(0.08714313141371088);
    msg.setSource(64038U);
    msg.setSourceEntity(8U);
    msg.setDestination(48207U);
    msg.setDestinationEntity(14U);
    msg.name.assign("TOYHXPVLZSGGZGFXURKGZNKIDTUUCKGOMLBJWXFKEGWWCQKEXLHFXZNAPQNEKLWNBQRCNGCDWCSVQKCHZTSUIVHQFHADSPQHYZFBGFTNCRJBWXOICLIFDMNMZVIIJJROMSEUSILEGDPJFEJYURPZBXVVSDJWRQRVZOTQCBAILJCDTUVXAWEAHBUSYWOLOJGRLY");
    msg.value = 18U;

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
    msg.setTimeStamp(0.6648683172555616);
    msg.setSource(27333U);
    msg.setSourceEntity(157U);
    msg.setDestination(54045U);
    msg.setDestinationEntity(252U);
    msg.name.assign("CVIAPLKUZNUDQTHMFDQWBL");
    msg.value = 33U;

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
    msg.setTimeStamp(0.7643266087395034);
    msg.setSource(16812U);
    msg.setSourceEntity(244U);
    msg.setDestination(16449U);
    msg.setDestinationEntity(247U);
    msg.name.assign("DPLMFYKHSHEXBATNNWJUTPCQPURFNZX");
    msg.value = 225U;

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
    msg.setTimeStamp(0.5239106653426475);
    msg.setSource(21241U);
    msg.setSourceEntity(72U);
    msg.setDestination(63331U);
    msg.setDestinationEntity(5U);
    msg.id = 45U;
    msg.period = 396526111U;
    msg.duty_cycle = 164067999U;

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
    msg.setTimeStamp(0.41029124142254536);
    msg.setSource(31870U);
    msg.setSourceEntity(104U);
    msg.setDestination(29393U);
    msg.setDestinationEntity(35U);
    msg.id = 214U;
    msg.period = 3667319029U;
    msg.duty_cycle = 1645970416U;

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
    msg.setTimeStamp(0.8393919439953359);
    msg.setSource(31971U);
    msg.setSourceEntity(207U);
    msg.setDestination(37732U);
    msg.setDestinationEntity(48U);
    msg.id = 174U;
    msg.period = 2171375027U;
    msg.duty_cycle = 558987673U;

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
    msg.setTimeStamp(0.1712869957851757);
    msg.setSource(16655U);
    msg.setSourceEntity(3U);
    msg.setDestination(27245U);
    msg.setDestinationEntity(74U);
    msg.id = 132U;
    msg.period = 2758880146U;
    msg.duty_cycle = 3456570804U;

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
    msg.setTimeStamp(0.9650679105219518);
    msg.setSource(34538U);
    msg.setSourceEntity(127U);
    msg.setDestination(58946U);
    msg.setDestinationEntity(206U);
    msg.id = 12U;
    msg.period = 2204497827U;
    msg.duty_cycle = 1428288908U;

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
    msg.setTimeStamp(0.14609584597852876);
    msg.setSource(40101U);
    msg.setSourceEntity(164U);
    msg.setDestination(51019U);
    msg.setDestinationEntity(66U);
    msg.id = 19U;
    msg.period = 4069240951U;
    msg.duty_cycle = 1257365087U;

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
    msg.setTimeStamp(0.502769820966531);
    msg.setSource(21152U);
    msg.setSourceEntity(81U);
    msg.setDestination(4768U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.03491818493571097;
    msg.lon = 0.9466836080165739;
    msg.height = 0.2081010971018139;
    msg.x = 0.2009096785296829;
    msg.y = 0.43254314608722466;
    msg.z = 0.235072739118233;
    msg.phi = 0.49766119044528256;
    msg.theta = 0.7170746955015631;
    msg.psi = 0.9981580110721143;
    msg.u = 0.30337278351833064;
    msg.v = 0.8703047055043278;
    msg.w = 0.4234250015030466;
    msg.vx = 0.4923775317876977;
    msg.vy = 0.9161057018476514;
    msg.vz = 0.24967353653755298;
    msg.p = 0.04204679807301037;
    msg.q = 0.4530390229854131;
    msg.r = 0.13947406547803576;
    msg.depth = 0.04626833842315681;
    msg.alt = 0.4347364991272701;

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
    msg.setTimeStamp(0.45404869196700526);
    msg.setSource(832U);
    msg.setSourceEntity(73U);
    msg.setDestination(59471U);
    msg.setDestinationEntity(228U);
    msg.lat = 0.18203824188909634;
    msg.lon = 0.8827754036391837;
    msg.height = 0.7860334741615459;
    msg.x = 0.8652105707591974;
    msg.y = 0.7727857823536723;
    msg.z = 0.9033015781540855;
    msg.phi = 0.3959074817302889;
    msg.theta = 0.6887291099838282;
    msg.psi = 0.8255507782068973;
    msg.u = 0.80529289257619;
    msg.v = 0.6005898331203862;
    msg.w = 0.21837951285071722;
    msg.vx = 0.12424457229687924;
    msg.vy = 0.924694698884155;
    msg.vz = 0.8989273366209257;
    msg.p = 0.6319425667672117;
    msg.q = 0.2762720545613645;
    msg.r = 0.7007515501397119;
    msg.depth = 0.3353340075436215;
    msg.alt = 0.6730733196939495;

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
    msg.setTimeStamp(0.09146195589499317);
    msg.setSource(53189U);
    msg.setSourceEntity(137U);
    msg.setDestination(24044U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.31853656337608405;
    msg.lon = 0.6842459319457447;
    msg.height = 0.3310357731200476;
    msg.x = 0.033539911554174795;
    msg.y = 0.35133434715476797;
    msg.z = 0.010878407922851552;
    msg.phi = 0.9491579222694099;
    msg.theta = 0.1116367529905935;
    msg.psi = 0.8826362180381983;
    msg.u = 0.8483743752559745;
    msg.v = 0.46818842307833974;
    msg.w = 0.7654542218523914;
    msg.vx = 0.5108805751602838;
    msg.vy = 0.9608501259479888;
    msg.vz = 0.9171204626894514;
    msg.p = 0.6487197072230868;
    msg.q = 0.43177596445707944;
    msg.r = 0.9163715946942874;
    msg.depth = 0.07558522310050442;
    msg.alt = 0.7085440699519336;

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
    msg.setTimeStamp(0.9267908003380425);
    msg.setSource(48896U);
    msg.setSourceEntity(61U);
    msg.setDestination(40878U);
    msg.setDestinationEntity(138U);
    msg.x = 0.09807033995861669;
    msg.y = 0.9578136579117466;
    msg.z = 0.05628939567190938;

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
    msg.setTimeStamp(0.5568432006963382);
    msg.setSource(53162U);
    msg.setSourceEntity(40U);
    msg.setDestination(46555U);
    msg.setDestinationEntity(132U);
    msg.x = 0.3548901887604087;
    msg.y = 0.8941553269815095;
    msg.z = 0.35193835181611677;

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
    msg.setTimeStamp(0.09350765468590205);
    msg.setSource(15549U);
    msg.setSourceEntity(240U);
    msg.setDestination(138U);
    msg.setDestinationEntity(26U);
    msg.x = 0.24328461761177478;
    msg.y = 0.5819582218301581;
    msg.z = 0.5012099456309729;

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
    msg.setTimeStamp(0.029003369329013817);
    msg.setSource(10623U);
    msg.setSourceEntity(51U);
    msg.setDestination(60184U);
    msg.setDestinationEntity(162U);
    msg.value = 0.5485055695647982;

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
    msg.setTimeStamp(0.6990083504518292);
    msg.setSource(10935U);
    msg.setSourceEntity(70U);
    msg.setDestination(24387U);
    msg.setDestinationEntity(221U);
    msg.value = 0.8034638305882928;

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
    msg.setTimeStamp(0.3786589154430715);
    msg.setSource(28518U);
    msg.setSourceEntity(212U);
    msg.setDestination(24354U);
    msg.setDestinationEntity(177U);
    msg.value = 0.20498248191494062;

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
    msg.setTimeStamp(0.9053439512250402);
    msg.setSource(11623U);
    msg.setSourceEntity(231U);
    msg.setDestination(5850U);
    msg.setDestinationEntity(56U);
    msg.value = 0.12414380856975238;

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
    msg.setTimeStamp(0.34104853423069137);
    msg.setSource(1697U);
    msg.setSourceEntity(100U);
    msg.setDestination(46497U);
    msg.setDestinationEntity(136U);
    msg.value = 0.1346881560933164;

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
    msg.setTimeStamp(0.5621728743700124);
    msg.setSource(22029U);
    msg.setSourceEntity(192U);
    msg.setDestination(21191U);
    msg.setDestinationEntity(143U);
    msg.value = 0.38793410170121767;

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
    msg.setTimeStamp(0.1322387853776592);
    msg.setSource(62564U);
    msg.setSourceEntity(26U);
    msg.setDestination(1127U);
    msg.setDestinationEntity(113U);
    msg.x = 0.74349145197631;
    msg.y = 0.7661982407179784;
    msg.z = 0.2554501807411471;
    msg.phi = 0.8955476071559204;
    msg.theta = 0.3894821032537016;
    msg.psi = 0.014502677337951853;
    msg.p = 0.8079849380710032;
    msg.q = 0.5421049379017819;
    msg.r = 0.8678825945641745;
    msg.u = 0.5032152346926914;
    msg.v = 0.36747420104173134;
    msg.w = 0.8327770564825734;
    msg.bias_psi = 0.6018478190428092;
    msg.bias_r = 0.9024410269997162;

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
    msg.setTimeStamp(0.16831839753224498);
    msg.setSource(35985U);
    msg.setSourceEntity(235U);
    msg.setDestination(22569U);
    msg.setDestinationEntity(165U);
    msg.x = 0.45928911207497647;
    msg.y = 0.6822494615591623;
    msg.z = 0.7797113722576388;
    msg.phi = 0.6003893173266335;
    msg.theta = 0.3191890229769133;
    msg.psi = 0.26545649207298383;
    msg.p = 0.1597118597946413;
    msg.q = 0.4919913436880188;
    msg.r = 0.11340919538563743;
    msg.u = 0.41726552085690904;
    msg.v = 0.2032908794440833;
    msg.w = 0.08021176252511375;
    msg.bias_psi = 0.008583620432863426;
    msg.bias_r = 0.9176642517835601;

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
    msg.setTimeStamp(0.6870418901850556);
    msg.setSource(11252U);
    msg.setSourceEntity(181U);
    msg.setDestination(15534U);
    msg.setDestinationEntity(181U);
    msg.x = 0.8936075334646375;
    msg.y = 0.8232020247529355;
    msg.z = 0.5763578331282572;
    msg.phi = 0.9298900083846422;
    msg.theta = 0.1599067483353095;
    msg.psi = 0.03715385228557966;
    msg.p = 0.6586434611223737;
    msg.q = 0.5068275283369658;
    msg.r = 0.07970108796870023;
    msg.u = 0.6781737120437279;
    msg.v = 0.9815688537042969;
    msg.w = 0.02307802480394261;
    msg.bias_psi = 0.8733099914556962;
    msg.bias_r = 0.9368645251567325;

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
    msg.setTimeStamp(0.6722000146019436);
    msg.setSource(39189U);
    msg.setSourceEntity(213U);
    msg.setDestination(31401U);
    msg.setDestinationEntity(105U);
    msg.bias_psi = 0.42454612306199024;
    msg.bias_r = 0.08253584251840773;
    msg.cog = 0.1518954807807169;
    msg.cyaw = 0.9724278515891921;
    msg.lbl_rej_level = 0.5349122684204355;
    msg.gps_rej_level = 0.6598528139389582;
    msg.custom_x = 0.2342548871531801;
    msg.custom_y = 0.5419855926540401;
    msg.custom_z = 0.7881850405820044;

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
    msg.setTimeStamp(0.810677376847623);
    msg.setSource(24726U);
    msg.setSourceEntity(163U);
    msg.setDestination(64773U);
    msg.setDestinationEntity(148U);
    msg.bias_psi = 0.978675669045932;
    msg.bias_r = 0.3941082536059263;
    msg.cog = 0.9496475999004218;
    msg.cyaw = 0.15056942217119118;
    msg.lbl_rej_level = 0.5267392391180397;
    msg.gps_rej_level = 0.34049422737436397;
    msg.custom_x = 0.41796227884547155;
    msg.custom_y = 0.5126809644925281;
    msg.custom_z = 0.1979502228149821;

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
    msg.setTimeStamp(0.9879413190488164);
    msg.setSource(15953U);
    msg.setSourceEntity(127U);
    msg.setDestination(50838U);
    msg.setDestinationEntity(129U);
    msg.bias_psi = 0.5736965557348747;
    msg.bias_r = 0.2605178467477147;
    msg.cog = 0.41715178076584436;
    msg.cyaw = 0.826403161422499;
    msg.lbl_rej_level = 0.9599081598500235;
    msg.gps_rej_level = 0.20352043588469215;
    msg.custom_x = 0.51058584647006;
    msg.custom_y = 0.13701459246060244;
    msg.custom_z = 0.07796800721776853;

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
    msg.setTimeStamp(0.9026620484444411);
    msg.setSource(49595U);
    msg.setSourceEntity(11U);
    msg.setDestination(65428U);
    msg.setDestinationEntity(211U);
    msg.utc_time = 0.19039666011247103;
    msg.reason = 140U;

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
    msg.setTimeStamp(0.08536666132805426);
    msg.setSource(21131U);
    msg.setSourceEntity(58U);
    msg.setDestination(38131U);
    msg.setDestinationEntity(23U);
    msg.utc_time = 0.8783180657051886;
    msg.reason = 154U;

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
    msg.setTimeStamp(0.14655815867084032);
    msg.setSource(42178U);
    msg.setSourceEntity(79U);
    msg.setDestination(48570U);
    msg.setDestinationEntity(16U);
    msg.utc_time = 0.12378311216612592;
    msg.reason = 194U;

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
    msg.setTimeStamp(0.1295828068430358);
    msg.setSource(3356U);
    msg.setSourceEntity(79U);
    msg.setDestination(28241U);
    msg.setDestinationEntity(46U);
    msg.id = 254U;
    msg.range = 0.019683382907851432;
    msg.acceptance = 56U;

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
    msg.setTimeStamp(0.8850148020306534);
    msg.setSource(42307U);
    msg.setSourceEntity(92U);
    msg.setDestination(15742U);
    msg.setDestinationEntity(235U);
    msg.id = 201U;
    msg.range = 0.583357693409652;
    msg.acceptance = 92U;

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
    msg.setTimeStamp(0.949031510598748);
    msg.setSource(58097U);
    msg.setSourceEntity(190U);
    msg.setDestination(6811U);
    msg.setDestinationEntity(128U);
    msg.id = 117U;
    msg.range = 0.47430767402615537;
    msg.acceptance = 46U;

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
    msg.setTimeStamp(0.5930631035251046);
    msg.setSource(925U);
    msg.setSourceEntity(121U);
    msg.setDestination(40272U);
    msg.setDestinationEntity(171U);
    msg.type = 74U;
    msg.reason = 176U;
    msg.value = 0.5466167734181493;
    msg.timestep = 0.6669134776079633;

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
    msg.setTimeStamp(0.46629632272398525);
    msg.setSource(1956U);
    msg.setSourceEntity(39U);
    msg.setDestination(2379U);
    msg.setDestinationEntity(111U);
    msg.type = 111U;
    msg.reason = 102U;
    msg.value = 0.0668340487104565;
    msg.timestep = 0.6309149285557897;

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
    msg.setTimeStamp(0.4575625394488666);
    msg.setSource(42598U);
    msg.setSourceEntity(58U);
    msg.setDestination(33088U);
    msg.setDestinationEntity(121U);
    msg.type = 21U;
    msg.reason = 188U;
    msg.value = 0.23893572695079301;
    msg.timestep = 0.48584680991504137;

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
    msg.setTimeStamp(0.7649680417928213);
    msg.setSource(62076U);
    msg.setSourceEntity(124U);
    msg.setDestination(7932U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.5690848709814431);
    msg.setSource(33648U);
    msg.setSourceEntity(47U);
    msg.setDestination(8968U);
    msg.setDestinationEntity(178U);

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
    msg.setTimeStamp(0.5288667240146485);
    msg.setSource(33541U);
    msg.setSourceEntity(135U);
    msg.setDestination(45193U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.7144863392220051);
    msg.setSource(13401U);
    msg.setSourceEntity(157U);
    msg.setDestination(62422U);
    msg.setDestinationEntity(58U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RKYIKTNUSXKZTDXOCRXV");
    tmp_msg_0.lat = 0.03166188472393383;
    tmp_msg_0.lon = 0.7196600371122057;
    tmp_msg_0.depth = 0.7769350240930645;
    tmp_msg_0.query_channel = 201U;
    tmp_msg_0.reply_channel = 184U;
    tmp_msg_0.transponder_delay = 236U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.39934982692223175;
    msg.y = 0.3723248930451657;
    msg.var_x = 0.8917242155877426;
    msg.var_y = 0.551719419966981;
    msg.distance = 0.4486245608278763;

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
    msg.setTimeStamp(0.08795866041360956);
    msg.setSource(7501U);
    msg.setSourceEntity(197U);
    msg.setDestination(64801U);
    msg.setDestinationEntity(158U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RUGSUZUKVYLEQKFNOVRXLQINQBVUJBRGNMTBOPNKNPXZPYDHQZRSOGMIAGHSJFGXLLQKXCVCHXVDQRXSCUEKIUREEOSYJLIMTGWWYAPWTNPXDJLPFBPIRDMATSGTXVCPOTESQVFXYGHHZBMQOEVVZMTAMOZYBCBSZYNEFOWZZSJEHFLNGIFLIYYKJLWJORAWRCCQSMJDWATEDBLKIBKAWVBODWFUUH");
    tmp_msg_0.lat = 0.4626156729120007;
    tmp_msg_0.lon = 0.523755324929042;
    tmp_msg_0.depth = 0.5728818297497174;
    tmp_msg_0.query_channel = 40U;
    tmp_msg_0.reply_channel = 170U;
    tmp_msg_0.transponder_delay = 184U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.2735658309088571;
    msg.y = 0.19750945934605435;
    msg.var_x = 0.3557694772699008;
    msg.var_y = 0.3279480620355044;
    msg.distance = 0.9156502547931389;

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
    msg.setTimeStamp(0.1579715423920084);
    msg.setSource(54583U);
    msg.setSourceEntity(72U);
    msg.setDestination(9374U);
    msg.setDestinationEntity(225U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KDRPDRYKCXKCSNWQJUQDOWTWCPRANCHYQOXYCSJCAOPBLBDLEUHMZOTSXEDZGI");
    tmp_msg_0.lat = 0.5534226262549915;
    tmp_msg_0.lon = 0.08551696391238461;
    tmp_msg_0.depth = 0.3185569836781279;
    tmp_msg_0.query_channel = 241U;
    tmp_msg_0.reply_channel = 202U;
    tmp_msg_0.transponder_delay = 236U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.5349845134786165;
    msg.y = 0.47670083219412474;
    msg.var_x = 0.9590028578576645;
    msg.var_y = 0.12104586327190925;
    msg.distance = 0.7148167350643694;

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
    msg.setTimeStamp(0.6352582840954378);
    msg.setSource(63543U);
    msg.setSourceEntity(246U);
    msg.setDestination(23574U);
    msg.setDestinationEntity(136U);
    msg.state = 44U;

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
    msg.setTimeStamp(0.4790987327663212);
    msg.setSource(57427U);
    msg.setSourceEntity(236U);
    msg.setDestination(8047U);
    msg.setDestinationEntity(167U);
    msg.state = 109U;

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
    msg.setTimeStamp(0.9149267912289399);
    msg.setSource(61989U);
    msg.setSourceEntity(26U);
    msg.setDestination(65330U);
    msg.setDestinationEntity(226U);
    msg.state = 233U;

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
    msg.setTimeStamp(0.19238622913000325);
    msg.setSource(38222U);
    msg.setSourceEntity(45U);
    msg.setDestination(54325U);
    msg.setDestinationEntity(120U);
    msg.x = 0.32104153484820075;
    msg.y = 0.41526876340695884;
    msg.z = 0.7708716498901115;

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
    msg.setTimeStamp(0.7023874786183603);
    msg.setSource(10651U);
    msg.setSourceEntity(9U);
    msg.setDestination(32374U);
    msg.setDestinationEntity(15U);
    msg.x = 0.13665179463511767;
    msg.y = 0.7003972862186617;
    msg.z = 0.13607445796219164;

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
    msg.setTimeStamp(0.1656007200087133);
    msg.setSource(62807U);
    msg.setSourceEntity(96U);
    msg.setDestination(46960U);
    msg.setDestinationEntity(93U);
    msg.x = 0.48606332877620684;
    msg.y = 0.7225158873534973;
    msg.z = 0.21263557889436635;

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
    msg.setTimeStamp(0.15052264108619795);
    msg.setSource(61003U);
    msg.setSourceEntity(176U);
    msg.setDestination(595U);
    msg.setDestinationEntity(38U);
    msg.value = 0.08460329667303301;

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
    msg.setTimeStamp(0.6027562948190722);
    msg.setSource(47259U);
    msg.setSourceEntity(68U);
    msg.setDestination(59995U);
    msg.setDestinationEntity(66U);
    msg.value = 0.318859018927254;

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
    msg.setTimeStamp(0.8562983589719225);
    msg.setSource(43438U);
    msg.setSourceEntity(20U);
    msg.setDestination(54232U);
    msg.setDestinationEntity(87U);
    msg.value = 0.9536464150939764;

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
    msg.setTimeStamp(0.14745136144468973);
    msg.setSource(32028U);
    msg.setSourceEntity(111U);
    msg.setDestination(64873U);
    msg.setDestinationEntity(210U);
    msg.value = 0.5333129863253259;
    msg.z_units = 20U;

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
    msg.setTimeStamp(0.824966926760551);
    msg.setSource(49060U);
    msg.setSourceEntity(220U);
    msg.setDestination(35596U);
    msg.setDestinationEntity(98U);
    msg.value = 0.41062136022309315;
    msg.z_units = 254U;

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
    msg.setTimeStamp(0.04790651416625935);
    msg.setSource(58974U);
    msg.setSourceEntity(180U);
    msg.setDestination(39038U);
    msg.setDestinationEntity(167U);
    msg.value = 0.5341921628738164;
    msg.z_units = 182U;

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
    msg.setTimeStamp(0.16294955483258744);
    msg.setSource(3037U);
    msg.setSourceEntity(164U);
    msg.setDestination(20206U);
    msg.setDestinationEntity(91U);
    msg.value = 0.6302871846344962;
    msg.speed_units = 94U;

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
    msg.setTimeStamp(0.6997795859522423);
    msg.setSource(37938U);
    msg.setSourceEntity(82U);
    msg.setDestination(22115U);
    msg.setDestinationEntity(124U);
    msg.value = 0.18262154786461515;
    msg.speed_units = 200U;

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
    msg.setTimeStamp(0.8675769599284927);
    msg.setSource(40980U);
    msg.setSourceEntity(237U);
    msg.setDestination(24426U);
    msg.setDestinationEntity(103U);
    msg.value = 0.21292578987204858;
    msg.speed_units = 120U;

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
    msg.setTimeStamp(0.8358354259991159);
    msg.setSource(31952U);
    msg.setSourceEntity(174U);
    msg.setDestination(21320U);
    msg.setDestinationEntity(156U);
    msg.value = 0.7562128417313558;

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
    msg.setTimeStamp(0.7854342100610786);
    msg.setSource(4557U);
    msg.setSourceEntity(232U);
    msg.setDestination(30951U);
    msg.setDestinationEntity(235U);
    msg.value = 0.052367946821197386;

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
    msg.setTimeStamp(0.3343262043278219);
    msg.setSource(18040U);
    msg.setSourceEntity(107U);
    msg.setDestination(55751U);
    msg.setDestinationEntity(53U);
    msg.value = 0.7017609439872026;

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
    msg.setTimeStamp(0.25351785302167673);
    msg.setSource(22278U);
    msg.setSourceEntity(14U);
    msg.setDestination(48796U);
    msg.setDestinationEntity(212U);
    msg.value = 0.13431403108980855;

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
    msg.setTimeStamp(0.4761320327518125);
    msg.setSource(9116U);
    msg.setSourceEntity(61U);
    msg.setDestination(49184U);
    msg.setDestinationEntity(227U);
    msg.value = 0.840359639143748;

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
    msg.setTimeStamp(0.8033588910982913);
    msg.setSource(32933U);
    msg.setSourceEntity(89U);
    msg.setDestination(59011U);
    msg.setDestinationEntity(67U);
    msg.value = 0.6586161437125382;

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
    msg.setTimeStamp(0.23564619374833484);
    msg.setSource(49799U);
    msg.setSourceEntity(17U);
    msg.setDestination(61319U);
    msg.setDestinationEntity(198U);
    msg.value = 0.2504506758946997;

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
    msg.setTimeStamp(0.9631564534191893);
    msg.setSource(40742U);
    msg.setSourceEntity(243U);
    msg.setDestination(24364U);
    msg.setDestinationEntity(222U);
    msg.value = 0.7041500516793902;

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
    msg.setTimeStamp(0.8194310279590172);
    msg.setSource(7874U);
    msg.setSourceEntity(181U);
    msg.setDestination(22013U);
    msg.setDestinationEntity(146U);
    msg.value = 0.6166382853277833;

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
    msg.setTimeStamp(0.23303154541835636);
    msg.setSource(8826U);
    msg.setSourceEntity(45U);
    msg.setDestination(44938U);
    msg.setDestinationEntity(109U);
    msg.path_ref = 4071608683U;
    msg.start_lat = 0.4990648279746337;
    msg.start_lon = 0.31531846876362324;
    msg.start_z = 0.5163934130055468;
    msg.start_z_units = 27U;
    msg.end_lat = 0.3197446432929467;
    msg.end_lon = 0.21259852007821212;
    msg.end_z = 0.7613647998908991;
    msg.end_z_units = 90U;
    msg.speed = 0.740167679287576;
    msg.speed_units = 94U;
    msg.lradius = 0.7553995258612547;
    msg.flags = 147U;

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
    msg.setTimeStamp(0.09599791987569406);
    msg.setSource(44957U);
    msg.setSourceEntity(126U);
    msg.setDestination(54605U);
    msg.setDestinationEntity(119U);
    msg.path_ref = 1036352897U;
    msg.start_lat = 0.3354619499997137;
    msg.start_lon = 0.10632526231635198;
    msg.start_z = 0.5923008568123201;
    msg.start_z_units = 252U;
    msg.end_lat = 0.6915331688680089;
    msg.end_lon = 0.16089643867192527;
    msg.end_z = 0.9499369375088007;
    msg.end_z_units = 191U;
    msg.speed = 0.29121271334236387;
    msg.speed_units = 200U;
    msg.lradius = 0.9555554075202233;
    msg.flags = 230U;

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
    msg.setTimeStamp(0.43107137015062846);
    msg.setSource(55390U);
    msg.setSourceEntity(144U);
    msg.setDestination(36743U);
    msg.setDestinationEntity(126U);
    msg.path_ref = 3394738078U;
    msg.start_lat = 0.761581717603229;
    msg.start_lon = 0.05610407946505991;
    msg.start_z = 0.5924655043050028;
    msg.start_z_units = 200U;
    msg.end_lat = 0.39612721287925556;
    msg.end_lon = 0.4633145757543402;
    msg.end_z = 0.7433879838139138;
    msg.end_z_units = 31U;
    msg.speed = 0.5994592124106134;
    msg.speed_units = 216U;
    msg.lradius = 0.7992904574517827;
    msg.flags = 72U;

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
    msg.setTimeStamp(0.8041927784919779);
    msg.setSource(17176U);
    msg.setSourceEntity(128U);
    msg.setDestination(36531U);
    msg.setDestinationEntity(213U);
    msg.x = 0.05635236643656827;
    msg.y = 0.19541541799274487;
    msg.z = 0.5711343051210196;
    msg.k = 0.41578816632581816;
    msg.m = 0.9276068445015788;
    msg.n = 0.39033042210288915;
    msg.flags = 207U;

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
    msg.setTimeStamp(0.8635374569554836);
    msg.setSource(37788U);
    msg.setSourceEntity(130U);
    msg.setDestination(55561U);
    msg.setDestinationEntity(36U);
    msg.x = 0.25864504516014997;
    msg.y = 0.6718755470236716;
    msg.z = 0.8866626263852398;
    msg.k = 0.6897592367265413;
    msg.m = 0.44987062688844603;
    msg.n = 0.2683598048483937;
    msg.flags = 169U;

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
    msg.setTimeStamp(0.16846289157277905);
    msg.setSource(50215U);
    msg.setSourceEntity(157U);
    msg.setDestination(47339U);
    msg.setDestinationEntity(97U);
    msg.x = 0.6989266842031626;
    msg.y = 0.12395440802776225;
    msg.z = 0.3424720762698922;
    msg.k = 0.7021668361995295;
    msg.m = 0.6109017324154279;
    msg.n = 0.6732438154343073;
    msg.flags = 100U;

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
    msg.setTimeStamp(0.07173417080991118);
    msg.setSource(1733U);
    msg.setSourceEntity(108U);
    msg.setDestination(45813U);
    msg.setDestinationEntity(89U);
    msg.value = 0.7656321707292246;

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
    msg.setTimeStamp(0.5371461819555571);
    msg.setSource(21600U);
    msg.setSourceEntity(24U);
    msg.setDestination(8309U);
    msg.setDestinationEntity(15U);
    msg.value = 0.35184627471496865;

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
    msg.setTimeStamp(0.1237260916022993);
    msg.setSource(7880U);
    msg.setSourceEntity(249U);
    msg.setDestination(17075U);
    msg.setDestinationEntity(161U);
    msg.value = 0.42370083855850826;

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
    msg.setTimeStamp(0.7117534866268631);
    msg.setSource(5504U);
    msg.setSourceEntity(246U);
    msg.setDestination(51686U);
    msg.setDestinationEntity(162U);
    msg.u = 0.6352144673315171;
    msg.v = 0.4271755171798073;
    msg.w = 0.5258387795454647;
    msg.p = 0.4646621503144711;
    msg.q = 0.6146156566259481;
    msg.r = 0.8465980905689102;
    msg.flags = 134U;

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
    msg.setTimeStamp(0.31339735492512955);
    msg.setSource(62598U);
    msg.setSourceEntity(245U);
    msg.setDestination(1881U);
    msg.setDestinationEntity(250U);
    msg.u = 0.468348709675117;
    msg.v = 0.02529667582117756;
    msg.w = 0.9501811500673795;
    msg.p = 0.6581346262123859;
    msg.q = 0.11602895814823388;
    msg.r = 0.3152016365390441;
    msg.flags = 107U;

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
    msg.setTimeStamp(0.4833347733101836);
    msg.setSource(31474U);
    msg.setSourceEntity(54U);
    msg.setDestination(54089U);
    msg.setDestinationEntity(71U);
    msg.u = 0.8613732029287132;
    msg.v = 0.33004999559262094;
    msg.w = 0.8526969114794376;
    msg.p = 0.04839520934507113;
    msg.q = 0.501116262481985;
    msg.r = 0.1389212062448627;
    msg.flags = 105U;

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
    msg.setTimeStamp(0.8136442923039933);
    msg.setSource(10645U);
    msg.setSourceEntity(77U);
    msg.setDestination(22191U);
    msg.setDestinationEntity(152U);
    msg.path_ref = 4007714308U;
    msg.start_lat = 0.48537665384031614;
    msg.start_lon = 0.2943293811672588;
    msg.start_z = 0.45081566185082833;
    msg.start_z_units = 249U;
    msg.end_lat = 0.6031360938984409;
    msg.end_lon = 0.07898077533694003;
    msg.end_z = 0.21942426932920966;
    msg.end_z_units = 183U;
    msg.lradius = 0.6337016293052806;
    msg.flags = 162U;
    msg.x = 0.5711593648348566;
    msg.y = 0.01873949429765409;
    msg.z = 0.09505255768129295;
    msg.vx = 0.07286766367289932;
    msg.vy = 0.5465267764725108;
    msg.vz = 0.2108655086198491;
    msg.course_error = 0.5340102793435235;
    msg.eta = 49195U;

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
    msg.setTimeStamp(0.24550902775528294);
    msg.setSource(20359U);
    msg.setSourceEntity(118U);
    msg.setDestination(4362U);
    msg.setDestinationEntity(241U);
    msg.path_ref = 1358487036U;
    msg.start_lat = 0.032755420359652954;
    msg.start_lon = 0.2786370115574678;
    msg.start_z = 0.831042064425069;
    msg.start_z_units = 165U;
    msg.end_lat = 0.8892222536463603;
    msg.end_lon = 0.8704860678363221;
    msg.end_z = 0.13853957654595017;
    msg.end_z_units = 176U;
    msg.lradius = 0.6592260465456992;
    msg.flags = 96U;
    msg.x = 0.8193964065067932;
    msg.y = 0.6535047359565889;
    msg.z = 0.8647469746361082;
    msg.vx = 0.13479232534483854;
    msg.vy = 0.13526272076771528;
    msg.vz = 0.12138179203369193;
    msg.course_error = 0.22182928285853554;
    msg.eta = 13302U;

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
    msg.setTimeStamp(0.370803106458768);
    msg.setSource(7285U);
    msg.setSourceEntity(135U);
    msg.setDestination(29598U);
    msg.setDestinationEntity(86U);
    msg.path_ref = 1301698583U;
    msg.start_lat = 0.5124207941532563;
    msg.start_lon = 0.6507086505856664;
    msg.start_z = 0.8856280995031954;
    msg.start_z_units = 136U;
    msg.end_lat = 0.7519066678354329;
    msg.end_lon = 0.7192944128100257;
    msg.end_z = 0.7845988445418023;
    msg.end_z_units = 71U;
    msg.lradius = 0.8284250562536275;
    msg.flags = 17U;
    msg.x = 0.2588279236846809;
    msg.y = 0.0026852677510306178;
    msg.z = 0.9790341002186057;
    msg.vx = 0.0769326742320301;
    msg.vy = 0.309106300452028;
    msg.vz = 0.9106331718741949;
    msg.course_error = 0.9698249094132531;
    msg.eta = 46844U;

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
    msg.setTimeStamp(0.06874228415617145);
    msg.setSource(36724U);
    msg.setSourceEntity(28U);
    msg.setDestination(32414U);
    msg.setDestinationEntity(61U);
    msg.k = 0.6478337306206666;
    msg.m = 0.405744306694919;
    msg.n = 0.21725085425917434;

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
    msg.setTimeStamp(0.2577691107510287);
    msg.setSource(29374U);
    msg.setSourceEntity(253U);
    msg.setDestination(50464U);
    msg.setDestinationEntity(137U);
    msg.k = 0.9536802721905351;
    msg.m = 0.6026720190819075;
    msg.n = 0.7945000547524361;

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
    msg.setTimeStamp(0.5582804336820483);
    msg.setSource(28607U);
    msg.setSourceEntity(80U);
    msg.setDestination(60579U);
    msg.setDestinationEntity(136U);
    msg.k = 0.45467966788631575;
    msg.m = 0.8789881412015064;
    msg.n = 0.15590571346612037;

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
    msg.setTimeStamp(0.321673874184657);
    msg.setSource(51172U);
    msg.setSourceEntity(78U);
    msg.setDestination(28500U);
    msg.setDestinationEntity(140U);
    msg.p = 0.5349831634504754;
    msg.i = 0.24075307428052017;
    msg.d = 0.44903078482380665;
    msg.a = 0.15110638753065408;

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
    msg.setTimeStamp(0.889114595169094);
    msg.setSource(61640U);
    msg.setSourceEntity(98U);
    msg.setDestination(39564U);
    msg.setDestinationEntity(172U);
    msg.p = 0.3115457311987524;
    msg.i = 0.7617910710189796;
    msg.d = 0.36848519120363343;
    msg.a = 0.819657877197845;

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
    msg.setTimeStamp(0.915730330315357);
    msg.setSource(19446U);
    msg.setSourceEntity(164U);
    msg.setDestination(63266U);
    msg.setDestinationEntity(101U);
    msg.p = 0.5097252981001413;
    msg.i = 0.6157797627430415;
    msg.d = 0.1527291738775518;
    msg.a = 0.41150237777409315;

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
    msg.setTimeStamp(0.4317812804954827);
    msg.setSource(63249U);
    msg.setSourceEntity(170U);
    msg.setDestination(14162U);
    msg.setDestinationEntity(45U);
    msg.op = 37U;

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
    msg.setTimeStamp(0.7149871955662778);
    msg.setSource(42015U);
    msg.setSourceEntity(235U);
    msg.setDestination(62150U);
    msg.setDestinationEntity(216U);
    msg.op = 196U;

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
    msg.setTimeStamp(0.8968095597941355);
    msg.setSource(23317U);
    msg.setSourceEntity(114U);
    msg.setDestination(28494U);
    msg.setDestinationEntity(85U);
    msg.op = 49U;

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
    msg.setTimeStamp(0.43572724491420456);
    msg.setSource(32889U);
    msg.setSourceEntity(186U);
    msg.setDestination(46878U);
    msg.setDestinationEntity(238U);
    msg.plan_ref = 2756697024U;
    msg.id.assign("TSPGVHMUAGIIRAEUDFBOLKXGBUPDYZSHSRRSHDTYOZGSDHCW");
    msg.memento.assign("JDDTDSAYYZIUNUIRZERCNWIPSGKZXOBIYLTPLNCFNQQPYQXFSGXWGRHZUKETACKYYLUIEQUWHRDIRDMVNZFZOGXMOCGHKRJBZTDTWQHSSZQPTCOPMBGYL");
    msg.timeout = 36677U;
    msg.lat = 0.7542001957013226;
    msg.lon = 0.06900038019840327;
    msg.z = 0.06431773981672484;
    msg.z_units = 137U;
    msg.speed = 0.8660284032203089;
    msg.speed_units = 224U;
    msg.roll = 0.2044116231026012;
    msg.pitch = 0.12082664996829773;
    msg.yaw = 0.24733530430926542;
    msg.custom.assign("AUPHIEURWKKXGPGCRJUAGVZOKYTTM");

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
    msg.setTimeStamp(0.5218085127516607);
    msg.setSource(36889U);
    msg.setSourceEntity(129U);
    msg.setDestination(43868U);
    msg.setDestinationEntity(238U);
    msg.plan_ref = 1744715942U;
    msg.id.assign("RVRVCUTXMLPNCVMOOZIEPQDPNYFQYJMTEGANGDIQKSPUAFCYVMDAMPHJNTPSTAIHEHOJTEDEDLDZCQFWIGDWLCGNFMQUIYJVOTBNGAKPUEVJAGUFDUBYRMKRPMJXWOBRASIXQJQHYLXIGLBKSNPAWRBSHZSNYBWKOCENBHRQYLAKNOJZCTFKOAHCEQGGWVSMWFYKEOZCXBSVXLXQYWJZLWDRUOBTBHEMKJHKIWRIHGZVXLSXXTSUFIZRCD");
    msg.memento.assign("JAVNOMGPLCDDKCXDEXTNFEVNGZOHUXUZZTXRJBOLVEOLKCR");
    msg.timeout = 50154U;
    msg.lat = 0.7848552789126301;
    msg.lon = 0.7494068439035917;
    msg.z = 0.27475579881359546;
    msg.z_units = 224U;
    msg.speed = 0.3375187209953766;
    msg.speed_units = 2U;
    msg.roll = 0.3590018355515805;
    msg.pitch = 0.7668790051829708;
    msg.yaw = 0.899764692035595;
    msg.custom.assign("EGZNISMNGRQIXOCRCANBSCJCHKSDJGHUDPEHAQGNINGQCDRQAG");

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
    msg.setTimeStamp(0.2937385236154152);
    msg.setSource(43625U);
    msg.setSourceEntity(43U);
    msg.setDestination(25377U);
    msg.setDestinationEntity(44U);
    msg.plan_ref = 2452525634U;
    msg.id.assign("EMBBTKFLUP");
    msg.memento.assign("AWEDGAPFGUFHBTOOGXTCQWLZKCLJQPKVVNNWEJNKRUELIKSSKIDGYNCNLQXHVLVFIGGTTAFTVBMKIZZQECLQWTHPIHFDNZRMJSNYMNUEMYOUKUQGXUTRPKSIBWZDPZSDORQJTTGOHAALBJPVJFUHZYYMXXJQRDUPIYPIYSBDWMWDEQCHOVRKLZDOCCOHKYPSFRICXJBSVHBXESOMMWMNLWXDWFGAVFAZRXEHJEBA");
    msg.timeout = 8845U;
    msg.lat = 0.5464179269915349;
    msg.lon = 0.9416062833904816;
    msg.z = 0.7175023875125289;
    msg.z_units = 118U;
    msg.speed = 0.5193508231596382;
    msg.speed_units = 236U;
    msg.roll = 0.954860541912266;
    msg.pitch = 0.7647838221934345;
    msg.yaw = 0.33987268637406265;
    msg.custom.assign("VQMCAIAEFTXDZNUVERIHNPFCIBSPEQMEOMELMJVVRSYYGPGPGCLIUKHSPCCPVFBAJYTARX");

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
    msg.setTimeStamp(0.11140312174227984);
    msg.setSource(20076U);
    msg.setSourceEntity(33U);
    msg.setDestination(47298U);
    msg.setDestinationEntity(182U);
    msg.plan_ref = 4214896984U;
    msg.id.assign("XPTUVBXGACNKMOADLFOGQLPFUUKMCPTQPVFQNSAUIBYTIYDRYHJBUXJDBTGEJZHRIMWDHLNZNVSHQVGWDDOMWRAPXQHTEGGFZHONGFJIYBLSVIXRRLJVUXOSAYCCMULCJWKOS");
    msg.memento.assign("VBJBVFBYEMUXQQURMXGIWLNFSNVLJY");
    msg.timeout = 42195U;
    msg.lat = 0.6515754287762255;
    msg.lon = 0.9505140071167284;
    msg.z = 0.9032731861942158;
    msg.z_units = 232U;
    msg.speed = 0.19354049463390455;
    msg.speed_units = 190U;
    msg.duration = 47545U;
    msg.radius = 0.3833694825391908;
    msg.flags = 194U;
    msg.custom.assign("WPCVOWBISZAIGDTUYMQZGTTMMSMIVYSKHXCNMSZPXQZFNNPRRSAKGGVHRIWHSIIUCQVROCCUBILTEAGKYXEYQMVBFKBUUXPVEKZLLPVLM");

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
    msg.setTimeStamp(0.2215982170623817);
    msg.setSource(1920U);
    msg.setSourceEntity(5U);
    msg.setDestination(21310U);
    msg.setDestinationEntity(204U);
    msg.plan_ref = 1231398215U;
    msg.id.assign("BQCZTUVCQIGVWHYNUENZSXURSQQRZVKK");
    msg.memento.assign("SKDTXZPGCZHTLUDWLT");
    msg.timeout = 61824U;
    msg.lat = 0.14848656776263336;
    msg.lon = 0.7783776187481114;
    msg.z = 0.9328736949231217;
    msg.z_units = 95U;
    msg.speed = 0.9773523796538909;
    msg.speed_units = 138U;
    msg.duration = 58714U;
    msg.radius = 0.6829023773407182;
    msg.flags = 24U;
    msg.custom.assign("SBQCLXSYHODDPUNTKRQYJQQMNIDXDLYVQJXCNHTWZXYNBKVNZBHFSPZASDYUENLTEWDWMUAMPBZFDOZVVIQIZUGRMTNWRGLWPRSIRNEBSEGKUSTJKDQYCRHAVMIYVGEUEPUTFDSLOYXVKXTMLHPAXAAZXGGHJWROKMGOKAFEJZNHIOOCVEFSFPZLJ");

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
    msg.setTimeStamp(0.23118076900959061);
    msg.setSource(28411U);
    msg.setSourceEntity(83U);
    msg.setDestination(44047U);
    msg.setDestinationEntity(153U);
    msg.plan_ref = 420941420U;
    msg.id.assign("WJWMYVNXNJVEOVIWNJPKTLAAYPZFKTJACXMCRFFAGKEAGBOIUGVQHPMEHJQBRCSUPROFUXOTZNNDLWQRJDLZOXSPRYYSNYCJNWGIMKSXBWVOUODLUQLLXNQEHUKAVSUYE");
    msg.memento.assign("GBIPCWCAUNOEFFNYRSJSFVITYGBNUVDJLOZCXHLPCQQMXFDBAOBMWBKBIMARGQZPOFJMVXAMLWHSZPMESOFHIYHHOSGFISUZZJBIQSJQYDUOMXOERNLWLYLDTKLNUGAMZAQTUZTOQNJYNETARRREGRNLDKYHDPFXWLIODITCVXHQAHGPVKEWGCUTJUZBDUSBLVKEGRTTVNVSKRAZCFTVWXXIWK");
    msg.timeout = 59741U;
    msg.lat = 0.2449901145051918;
    msg.lon = 0.01361165761896399;
    msg.z = 0.41514437984569796;
    msg.z_units = 121U;
    msg.speed = 0.3045928559201476;
    msg.speed_units = 102U;
    msg.duration = 15501U;
    msg.radius = 0.6293347434874872;
    msg.flags = 222U;
    msg.custom.assign("OXABAJDSQEFTORWLYHJYMTQOLGGVVDPNTJNNBZ");

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
    msg.setTimeStamp(0.653776851933099);
    msg.setSource(52960U);
    msg.setSourceEntity(36U);
    msg.setDestination(4075U);
    msg.setDestinationEntity(95U);
    msg.plan_ref = 2425439021U;
    msg.id.assign("DFACSMHITMMMBXEEYNOGFOWVTWVCTYBXJOUWLFGZQLIQFENPDF");
    msg.memento.assign("REJGRQEABURZFMZHTMHTEGAYYXQQQATNOHQURIJHRLWVBJAZDGLKBAOXHKHKQYIOLVCFNWSXFWJTKKMEPUYISQUJOCTCEPMZOFGIKVRVOAPIIXPXRCWINNLDYPRHJDMUXXWBAZPSGZYXZEJDFQVIGWOCMBNGICBHKJLESNJLOCDYPKVUSUBATPRMFCYSFLWFDEEGVNSOZGZKPHANWSLD");
    msg.custom.assign("RAATTGRLOOEICJRPR");

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
    msg.setTimeStamp(0.6472742717228017);
    msg.setSource(58983U);
    msg.setSourceEntity(117U);
    msg.setDestination(48915U);
    msg.setDestinationEntity(83U);
    msg.plan_ref = 1194927698U;
    msg.id.assign("AYWNVSEECKEQRYIGKIFJUHYXSDCILGTXGSPPMQQJIREGJWGPAABFMFAPSRLHZTZYDDFYDUOJZGWVIUPTOLTYNNKTKAVPVHNISDGQWQIZNKKNJMRMMZOOKPBAKWADSTFRCNXEHJEBVSVUOJRR");
    msg.memento.assign("AUJOPCBUVWPFMNKJZFROJYBYXLAYNZARIDOESXSSRPTLMOMXLZQYSFXHNMQKKTAEMGAGFHVXLDTYUMKWBLWWENXOVWJVALGECSCOEIDKVRTCJGAYNUDEGFZBZQIQWHFTURNWHHXXZUPMTIOSCVHDXLFOQKVVLNCPVRDRGLNOJCBICSKDWDFYZITJZHRCDSQVHUSXBTNUSGBYZPWBGEHYTKMUNJEPKDKMRIGBU");
    msg.custom.assign("IHNPCOQVAKFIBYQJCZLMRDOZECRRSS");

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
    msg.setTimeStamp(0.5645215766331795);
    msg.setSource(61698U);
    msg.setSourceEntity(225U);
    msg.setDestination(35823U);
    msg.setDestinationEntity(167U);
    msg.plan_ref = 1987986681U;
    msg.id.assign("SUKKYCOQVLDAHFWLVMFZCPYZKUYAWEUBVQFXLYBEBRUXHSVKIFKRQNYNLQPSGINEZTFVVREGRUHZHFFKBOXJPHPNGTQZMABCTUYADTXCGNSFCDMKRWWPPIMEV");
    msg.memento.assign("MRHXOTNRGYZIFAFHESSUAFQQUSPSKFZYSMDHFXKZOJXIRAVLDLCDWAHRAMHUBXJFGZQFIDUKCQVTEDKTKMKBXBIAMULMQARCYUZAGDWIBELNYCJKFPITDTTPNQWGPXIBYPMZOYRBJACKUOZRQPVDOSZLGSCUUQDRFI");
    msg.custom.assign("GNMNCBQPOKNRTMYPRRVHUKRSHDNQSKGLRBZJQETFVSGPBEXICXLXJMUZDADBOUVOMCTTTIJAEGTJYAUAQTVQCYDKFLUMSIRPWGXCDHCNIPWKHOIFKDOXTOFBMTZANBNANEJRARLXPZKAGKYHQDFVUPUIUQQSWWLUWGUCLQWVGTEOMBMRSWYJZYJLNGEDSEPEFEHXSFVGLACZSXOJJZ");

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
    msg.setTimeStamp(0.13234916691344611);
    msg.setSource(65229U);
    msg.setSourceEntity(84U);
    msg.setDestination(5380U);
    msg.setDestinationEntity(76U);
    msg.plan_ref = 878143881U;
    msg.id.assign("JVIHNSYOLXPOQQIWKZFSBTRVMAGWNHPVGMCLVKWAQZJFGXDLRWNPIWKPHUVSYXQUIPIGXAQHDMZACRTYCVJWXQTSZXHUULHTCJXGWGBOMJAUDIGVECJZBRWDTEQZOYPKIDLHFROHZCBFTESJSSBBELDTAZUSJXEQBPAAFYIPMBIWVKSDYAMKPNYHGZMGOGLEQXEDTUNWBVRRRY");
    msg.memento.assign("ODBOERAOTTOOPYCPQSPAVKCVHBNESQGLEMMQTBGVWKGXQLPFCYUEPGZYCXZAXJJTKAKVNHDINTWIZKMPNDRCSFHYGIKAALJMBQDIFKWFJCUMYXLMKKRRBMQTDMGFBBWCTNHCZUSQOIJBLOITUPGFNJZRNYWJAUVXIDSEOEFZNYHDFVSRJAIYPQKCNQDLHIFRWZSLEVNEJXXSDTBHGRXVXRMWUGPULZZXBOAVMFO");
    msg.timeout = 5134U;
    msg.lat = 0.9061468434762613;
    msg.lon = 0.630882988697064;
    msg.z = 0.7472391459923441;
    msg.z_units = 128U;
    msg.duration = 38152U;
    msg.speed = 0.44281791692910444;
    msg.speed_units = 55U;
    msg.type = 143U;
    msg.radius = 0.79082203490189;
    msg.length = 0.00018952806201721906;
    msg.bearing = 0.9166456936666747;
    msg.direction = 243U;
    msg.custom.assign("NQTQRZNPGTDNJUPKDJLPFZJKFZLIYAECUYSWTAYOHTCUKSHOBNXFQYPPMAQBDLZFXGRZXKXIGJIOGGAFVVHFRRTDLNZXUQWSKKBITROMIDCXWRJMITHQBFRBOYMTCCFAWVBKOQHJOJLMRVWPEUAYSCGUNKNZCNXYVECHIUDLXDZVWQSDEJHIGSABUMIMFVHLZVOVCJBMYDATEYPGS");

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
    msg.setTimeStamp(0.41707947808677415);
    msg.setSource(45058U);
    msg.setSourceEntity(25U);
    msg.setDestination(49367U);
    msg.setDestinationEntity(90U);
    msg.plan_ref = 475744804U;
    msg.id.assign("JBRITYGDFNXVXAMWBRGUCSLGMKXEIDGSDNXOELAJCZRDZLAMPACNHDFIGUQAUCNYIORJTLVFFYCTMQMEVDQWCQRXERCEFNKFIZBIJVSIXJQZVO");
    msg.memento.assign("XFYZZJEJFVAKUDGYTGHWWXJFFLVLDYKTWMPXROHKGNGSYNRZVSYTRGXLGTHLQTOZQYADJIWPCURBVVUFBPATHYUMIPLRXXFWWBBZMIPKXCFBETVUEMQLPATXHGGKKNOBQQHIZE");
    msg.timeout = 50655U;
    msg.lat = 0.5833478482486254;
    msg.lon = 0.4048178067862537;
    msg.z = 0.7799775282237331;
    msg.z_units = 44U;
    msg.duration = 60590U;
    msg.speed = 0.2803579381812543;
    msg.speed_units = 61U;
    msg.type = 68U;
    msg.radius = 0.545966916643714;
    msg.length = 0.22884180934975507;
    msg.bearing = 0.23319692882201892;
    msg.direction = 3U;
    msg.custom.assign("CRMWRHQBXEPJMEQXQIWONWZDBYHWIBXN");

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
    msg.setTimeStamp(0.20881728626126927);
    msg.setSource(5799U);
    msg.setSourceEntity(176U);
    msg.setDestination(17044U);
    msg.setDestinationEntity(114U);
    msg.plan_ref = 3398378929U;
    msg.id.assign("HUCLLZJYJFOTCCYPQPKTEGLITBLRSBJWGOVSOLOSTQDPNICASBU");
    msg.memento.assign("BRQYGFPRQASCUNQKXVDBF");
    msg.timeout = 44177U;
    msg.lat = 0.14651187797773713;
    msg.lon = 0.3615615281598408;
    msg.z = 0.30146764566975615;
    msg.z_units = 103U;
    msg.duration = 33673U;
    msg.speed = 0.4003543108697277;
    msg.speed_units = 221U;
    msg.type = 51U;
    msg.radius = 0.8764859756749789;
    msg.length = 0.9973254953582842;
    msg.bearing = 0.735943193594668;
    msg.direction = 234U;
    msg.custom.assign("PDKAQDNHDNCHFLGUPDDRYMP");

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
    msg.setTimeStamp(0.2862987439694662);
    msg.setSource(12389U);
    msg.setSourceEntity(196U);
    msg.setDestination(30062U);
    msg.setDestinationEntity(185U);
    msg.plan_ref = 2592936604U;
    msg.id.assign("QERJDDPWQYHFUALOKYDMXBQYSIVWOEOZGCKLFIIUHYMXPUHOAJGFFRDWKSBLUDCLYSTUCJGMCWPMRHGLKEKNHGECBLFZWSHXXRBWNIGJMNRGZAYVMNHTOVUJSDQCKPLBBNYEYTYZWRAHSPTADJGFKSLTEUIVXZRPPDOXMAIXJNBAZMXODQV");
    msg.memento.assign("UTKNXGBPUJUZCWCFEOWGANJWPUFSMNUWVGVMTOEADYRBULZTXPKQEQMVNKUHCGJEPMFILXRIBLNIIYNDYYQYMOAEIVREXDXMPSGSXKROQCJRFAQQSBYMCZSKOOKCSZTHLEHMYMBQPFTKODB");
    msg.duration = 14524U;
    msg.custom.assign("USMJVPYTJATMEPAZDIERFDOHJSPBANRBAVKDXQAYHGFJBBKVCEBRECRAXQWLSLTFHCHNBKUHOGYHQYWKZOKPWNVPVJZBLRDCQADQJOXXLYWTKWNNVZHLMHZMBFBRL");

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
    msg.setTimeStamp(0.2247763564884684);
    msg.setSource(2508U);
    msg.setSourceEntity(83U);
    msg.setDestination(15510U);
    msg.setDestinationEntity(62U);
    msg.plan_ref = 4260988750U;
    msg.id.assign("SEYXEWFMLCAAXNUKGIDPLIRBQWHYHNCVTBGDIQFLRJOFXJJFYLVHPAPCSBGNBPGGWCFYLMPPUTTXROZBSPDIEVXCAGEADPFWZDVEKFODYJNZUTXZKBNWUWAYNRKHBCDVVQAWORKJLRNHNLESMSTSOTGQUVRYQMDZAQWAZDHKJJOZHKGBCTLJCSYRIPSHFWIBMXOZEYPKDH");
    msg.memento.assign("TDEFICBIOEDRJVJKNLLUXAFIPFGIFWZHDAYKGIPSXNBGJOLNZUPWWKVQDNAOHMIQOEOOUSECNNIKCGBJYLKMTZHTBOLQADWKNJGMPLSOPMRXWERQCZFCKWRZUCFXIREYHJQXDYMKSBPUSSCVXGYUQWZBAEWIBJXHCVOJ");
    msg.duration = 63229U;
    msg.custom.assign("HKMNDDSMODPVJIEFXVTRNVHCKLQXYLTWOBJAPIFVUJIHWUDUZXTAFKEIQDRGKFEVEESLLNUAPWWPZXRHUUZMWUJYMYHLFMQBRNTIYSVQTAHIJOCCKFMMBYBGSJQZEZCNSYTSBAGZVMVFHDAFWRCZOMKZQRPGKWJARKYDINXUPQRIRUNLMXAZBIGXLVOXCIGEOCHJEAOUCSQODFBWTKXRPLGFCQPWASYDQJXPVLCGBKOWBHOTTSNTLSPJBHDYG");

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
    msg.setTimeStamp(0.20576427023980748);
    msg.setSource(2801U);
    msg.setSourceEntity(241U);
    msg.setDestination(34143U);
    msg.setDestinationEntity(184U);
    msg.plan_ref = 46953178U;
    msg.id.assign("ZZKGGWKWNCXGYQNYBIEMQDWPMEWPJRIIMVLXYOBFXUTBGPYGXVRZOCIENIEKARPEMQRHJSYDFSQARLUGTOZCGIVKIAWFDRXKRBMUPXKBSNWLTDKALVHDCERHGUSYTNHJOONDFELABUQVWHPKLBSSIOJIPMUQLOTFCNTFSEVVAHMGXDZPHUEMATQFGLXRFURMHQWCXUVYYTJSMFZOVAJZJTANZFBDWLIWSUCBDXNPJQHCVKOCHATJYQZ");
    msg.memento.assign("OTQJHBSIVAIAGPMVDXVHLUPYJYFTLIFNLXZGUQSYOBZDUHNCMWGDEHBIXTIUSPYGNFRMDKZWBLBZLFQCADZXZKAWTCTWHEIESRJFYRPGCUPGNLFKLQKWUUKDADGOJITXTJJMKKANCJPMWBAMCESWVTTHHSOJFREGBKURNRHXNNQOQSFRQLPOVRGEACDRTWEGHCFQONPXZKDOVOYVUIBWMVCIOKMXMYWSNQLFZAYHIDEZRMQXLSZBCJ");
    msg.duration = 5167U;
    msg.custom.assign("TMTSKFHZJNBLXFOVKROAUAMEIDDYLVOZDQHYJITQCDVMURYTNZLEWJPZOSFXXHWTBFLNZXJRSUFAKYGLUKGUVVQAWRBTUDKGCQGBCMERTFPMPAXJQEEJRDSNJUVPJGGBHPIVXEAQWKNUXTMSFJOSGCGLYDSELBMFIWCONSZIWYBKDZWQYNASPZMPHRMRJLKGTBEIXBLLXFTWNVHSNYPHOOYXQUVFGDRQAHHEWNWRHBZZPCIVAOKIICYU");

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
    msg.setTimeStamp(0.9168235525853347);
    msg.setSource(44075U);
    msg.setSourceEntity(162U);
    msg.setDestination(47278U);
    msg.setDestinationEntity(127U);
    msg.plan_ref = 1204843725U;
    msg.id.assign("VVXSTBIJAVPUTZNDAWTIESBELJTYCYXDHQZENCSVCAUMWYBFKKVXCEQLHXJTWGPIFLWDWOSTJKRLDJLPZBUQLRAYOHYXMLSGLKBFASIWHDJKAOSUPKNDMTZEPGFTWIQYKONHZGDHORZPGUVGBZIFRUCMBJUDCGLMQXCQERNATRRUIIQBZMFRCLGHEFXJAZVJDRXAOHCZWFKMVNTINNOWYUXOKNQUP");
    msg.memento.assign("UVVIQYBIAMEPXNSJCTRKNHVRJEGAKILOOUXUHKHVJXHTPCIBYAHLUXRWZTIGMPFKFOCUIBZCLGWKBBKMLEDNHVQRNYXMRLGZGWJFDLUSMATQNMMBROBSCVHXSNGOGDGBTVYCWADJAOKVWRTHAKRJNGVPLCEF");
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 377410818U;
    tmp_msg_0.start_lat = 0.17819360741705415;
    tmp_msg_0.start_lon = 0.8238446644679631;
    tmp_msg_0.start_z = 0.8607452068682298;
    tmp_msg_0.start_z_units = 57U;
    tmp_msg_0.end_lat = 0.597487526982701;
    tmp_msg_0.end_lon = 0.19963837302665632;
    tmp_msg_0.end_z = 0.012937247928937579;
    tmp_msg_0.end_z_units = 211U;
    tmp_msg_0.speed = 0.2528810303242739;
    tmp_msg_0.speed_units = 251U;
    tmp_msg_0.lradius = 0.26310121420898624;
    tmp_msg_0.flags = 204U;
    msg.control.set(tmp_msg_0);
    msg.duration = 23653U;
    msg.custom.assign("RYLASJQQUXBMHGAJMFSNLTKWVLXWWXQHXYLJOEPOGFLZTTYKDOKZJZYOYGAMVRDSUIHGSVMTBLRHKBGYIFJZJZKJREPUPMZFSKXIMFVEQACTXMRDSATWQUPYEHQOIVENUNAFQJPDNFSVXEICFTARRAECDSCWGGNBHBPGYWOSDBUJCQYCTOVININAGOPOCPYHCZFZXFGNMDKLXLBHZXBIQISMOEKKQWUERPTUTINLHCVRMRU");

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
    msg.setTimeStamp(0.28428205589669553);
    msg.setSource(35147U);
    msg.setSourceEntity(22U);
    msg.setDestination(40651U);
    msg.setDestinationEntity(83U);
    msg.plan_ref = 1578977805U;
    msg.id.assign("OAUSUHCXYNDYRDVVFFHVFRANVCGJWKRPBPAGDXMFTGZXVTJUQQSUSIUZMLLLOJMGOVPMZSNWBBRTZTKTFJCHDQOEOKYGAOIETZERNUUZWVIJPSKBOGSGVFLYXCHPXRJJTGKLNKDEIQHLNCQQSEYOZKESGAQTLYCHNBOQPDBFEMKLRLUBSIHWMJVAIIHHTXQ");
    msg.memento.assign("TKOWVSPLKXWDVPQHIYVORBNSCQGFYOZKRXHGPWYQULBTSYKFQLCADNEFJJNGSVPULCXCMVIBWMEQXWQRDGYBCMPCQUEJNORBTZCNNEKOAWDGINOAVOMOZEFVGJTTHSUTKSLHABHNHGQZSZXPBIFZYIJJDFJPTSAWJPGJUKHEUMSLBLIFEYMFOKVPEIADHUNRTXTYIBZELAZCRXBJYAKDFLFTUV");
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.5246412867932588;
    msg.control.set(tmp_msg_0);
    msg.duration = 56733U;
    msg.custom.assign("CJQPXJDRQHUIRFVEBDIYDNPOEAFUVOZFAQGUJNNNFFMBYZSBZRXJQSJIFCUTDSKAAXLPRLIPOIKVPAEWGNMSVKQXGUYUKSBODYKTHUFSHPWWEOQGHNWVMHAQRCDNSORPYKPLHGXTEARUBMG");

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
    msg.setTimeStamp(0.9250621023259852);
    msg.setSource(37683U);
    msg.setSourceEntity(107U);
    msg.setDestination(3558U);
    msg.setDestinationEntity(231U);
    msg.plan_ref = 3378168820U;
    msg.id.assign("QQIFSJVCYYOOVEMFUWKSZBNHIAJIGRTJRVYTDLVPCKUDUTXPXKRQMDHQPRSDZTGAMXVJHAHNDQVWTRYSSXGQBGYFCMQZFUDIIMNHJIDOXULWJLIROYROWL");
    msg.memento.assign("FTSZOXDNTTASYTFRIZZHCIXLUXUCBDDNFFSXBAGELULJVTICWKWXKIKPUIDQKHVPQLRVAIDWSAVGDNMNPRQHVBBQQQLQZGWODIWWGONGSRGZVFWCLUUBLTYOCJNKRAMMPUUFEXYFBOJMHCYNMPWEKCPN");
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.1805446069720037;
    tmp_msg_0.speed_units = 251U;
    msg.control.set(tmp_msg_0);
    msg.duration = 3160U;
    msg.custom.assign("YCPLDTSINKADQWSDIZAFTKAPRVQPLSLLTEMAQWBZFJTFBJSGBZOKSISHVWGAPLKJCDJOZZHMISRYEQBYFMIYXAAXHNLQRWRXKBVKMCZNOONUZOXCWEXWMUECGUIJBFUNSFNADJNO");

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
    msg.setTimeStamp(0.2608383965324994);
    msg.setSource(23261U);
    msg.setSourceEntity(109U);
    msg.setDestination(11292U);
    msg.setDestinationEntity(169U);
    msg.plan_ref = 1137089725U;
    msg.id.assign("ZDMWCTJLZMOGBPZOCJPSKLWOTIKHXZUAORQMXREFLKZYWGNSIKQZDVJJHFKTEVUJWECFHPPYBSXQVDEMWIQDVOXRRVNSSFJOFXVUECMWRFDJUXGBPMDTLPNGYVNFDJSAKGBAWTYKLJNWLHOBHITCPEEUZQYAG");
    msg.memento.assign("AUZVCCEUPYAMEEGXSFZHOPTCOPTSRZPLWGGAGKHFZGTUXKWPXODRRXNSUIMQYNVLPTRSPDJLZSNZHXKQAGIILOBRDDEWSMCYJPRYQMGQOXGOUILSORJAQMSBHYTTBHWKBLFUEJVDXZTYZVFVNBMFDTWLOEWXPNXFWEOKFITIHNSCIIUBCJIOKCKQMJATEHIBNCVBJLJLMG");
    msg.timeout = 34804U;
    msg.lat = 0.060874392438081126;
    msg.lon = 0.8853486436963264;
    msg.z = 0.1005198367579726;
    msg.z_units = 229U;
    msg.speed = 0.001429038551032602;
    msg.speed_units = 54U;
    msg.bearing = 0.010243086319583483;
    msg.cross_angle = 0.14955452207625453;
    msg.width = 0.23840131247668694;
    msg.length = 0.8765700925046914;
    msg.hstep = 0.9631780430611644;
    msg.coff = 71U;
    msg.alternation = 48U;
    msg.flags = 234U;
    msg.custom.assign("VFTANINLPDDARNVZHNARGDTTSNSFEILXFYHFZJZEIPWVYRMJBPMSQVAYQQDUBBEDKXDPCOJFMEZXCKOFNLOGMTTPKCUXRLIKNTNVWMGGWOIKAJAYORSAUFRYBRSYEWJPPEVMXTEARISBXXULK");

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
    msg.setTimeStamp(0.1320979371213411);
    msg.setSource(21774U);
    msg.setSourceEntity(115U);
    msg.setDestination(27643U);
    msg.setDestinationEntity(90U);
    msg.plan_ref = 872363930U;
    msg.id.assign("PDZFHPMHTQKINBZQGGGWOLIEIJQRDGWADANSXXHGOCOGUNOLPZKXZCENPGHFAJIKABSHMHYXPKKVG");
    msg.memento.assign("HGRUTCCHQQRIZXIALADNXJATKLAMOUUJSGVQSWDFPFGIFGLILBTEFKUORCGHHYZAJJQXOYBWWEMJSQCPQOIZZXQKIWPYMEOHDAKHVYKUWVGBOIVERMZRFXXWYUUSSSLWCVTJJBLDPAUWMTQEDBKNZMXLS");
    msg.timeout = 31726U;
    msg.lat = 0.05875600422138649;
    msg.lon = 0.7494661103557885;
    msg.z = 0.5419598573126398;
    msg.z_units = 0U;
    msg.speed = 0.7658559250569748;
    msg.speed_units = 184U;
    msg.bearing = 0.6550158643139806;
    msg.cross_angle = 0.6995052726448546;
    msg.width = 0.17816010144819483;
    msg.length = 0.3781546012749003;
    msg.hstep = 0.7256787248442516;
    msg.coff = 159U;
    msg.alternation = 71U;
    msg.flags = 146U;
    msg.custom.assign("NBVTQXGPIRVXPVYXWNPFOVHMRTBHLHHBRYMMDETEMFNBABWFDZNCSTMYKQAIYVMWXRIJYUMXOFEFAGKJGSQZXCKSBMSGUHJDALQVSUOIZHAFZOWPOLKYCRKOAPDEOCJXRYZGNP");

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
    msg.setTimeStamp(0.10580536590694911);
    msg.setSource(2066U);
    msg.setSourceEntity(115U);
    msg.setDestination(48591U);
    msg.setDestinationEntity(245U);
    msg.plan_ref = 555136354U;
    msg.id.assign("ZCHOXGFBAXGNXELDR");
    msg.memento.assign("QLYOQFUCIDPLPBKJWXDLVKNZINEHYUZCOWZGCHNUDVFSVLSFTG");
    msg.timeout = 26225U;
    msg.lat = 0.5230255840866731;
    msg.lon = 0.9508728214443852;
    msg.z = 0.8670830503238747;
    msg.z_units = 145U;
    msg.speed = 0.0929064698661004;
    msg.speed_units = 17U;
    msg.bearing = 0.03777599695392464;
    msg.cross_angle = 0.5807066412354818;
    msg.width = 0.5511883345858477;
    msg.length = 0.5162188592783765;
    msg.hstep = 0.35231079056727377;
    msg.coff = 129U;
    msg.alternation = 237U;
    msg.flags = 72U;
    msg.custom.assign("EBKCSDJRAARSAHBVQRHDFIZUOPWDG");

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
    msg.setTimeStamp(0.40930148116887044);
    msg.setSource(24357U);
    msg.setSourceEntity(27U);
    msg.setDestination(15580U);
    msg.setDestinationEntity(92U);
    msg.plan_ref = 415917007U;
    msg.id.assign("JAZFHTCDUSRHRTXFLOSCLWTNPPRTRMOZHUZCSNIFNLLGYPQGFMJPWKYMEMYTZBWHFWJFNDEXLZQWTWCIHRNKXEXWIGCAKVUESLHYSOIPHQPQALIBNVZUSHZEUCCSGMYFNMSSJQY");
    msg.memento.assign("NAIGMIKVXDFBCDDYQBTFGZAYRPKWLVVDYNQBDBMZOMDRTFUEGENRASLJJUOOXGZZZMVYQOSMNEAHPHXPWTZZJRLRSWQIJNIURQKHSEMJYAQAXUMFCZWAHKEWGYCOIUPXZVEDWWRTNBDXSAFICVPUOJYQVVSHRWXGFJUBZCRWXEBKPSELFPEUJFSCVNKSHDQNITCMOHGYIABJPBTMFFKHUUTJCILSPMCGLTNLKTQXWQKYO");
    msg.timeout = 61295U;
    msg.lat = 0.6449091213339324;
    msg.lon = 0.5727867218419831;
    msg.z = 0.27191342192073686;
    msg.z_units = 208U;
    msg.speed = 0.17711712241425503;
    msg.speed_units = 129U;
    msg.custom.assign("WGDVBOLAAYKQUFFRLHXHHUHEEBMXMMYWVCUZZVGOYMCZRVXCXQGZQWAZJMXWTUMOCORHXJRDFXCGBJWEDJBBAJOZFISFNYULNSJDTVFESWJFJLGYZIWPSUPWIYOENETBLXNQAIYTPARVQPKITZPDSZORNRKBEQNNVMPRFCSCKIOKNPOVOCLTEUPQDTKHJIILAPBAWGDVRL");

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
    msg.setTimeStamp(0.5165467738499012);
    msg.setSource(2730U);
    msg.setSourceEntity(172U);
    msg.setDestination(24011U);
    msg.setDestinationEntity(57U);
    msg.plan_ref = 2823390170U;
    msg.id.assign("CSQXHBVIYQQFWRBBKSWJBNYALTDRYELEKRCHCHYJRVKFXLWDFDUONTTZZDWLQFGOEUQFXCMSUIYZESMMPNSIOAGVXFNMTHTHAJYSJCDMIMKVWQNOZVHRYFMEWEGFETRISPJ");
    msg.memento.assign("SYIOGHDUGBTTXCGMMCWOYJANEZOPBYQBCZKDJQUIWXLKRSIQRH");
    msg.timeout = 14590U;
    msg.lat = 0.7865393029893472;
    msg.lon = 0.4843541446226246;
    msg.z = 0.8863698015627641;
    msg.z_units = 24U;
    msg.speed = 0.5509787901011894;
    msg.speed_units = 160U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.040549376040992735;
    tmp_msg_0.y = 0.6147047627690995;
    tmp_msg_0.z = 0.7020250350131892;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("OMUQFGCEXGKFLEIWEASOYUZFULRYIVJXCGJXEIGMCVCFNESSHSGUDGDKLUBNEVUZQKVFKEPRDVCJBCYLAVRAMSANPWSSIOUMWRZAUJOSBDQINDHITBNVRCJQTRHENZLQOAODMYCPDWRDCKPBPCULGWTMITVVTHNTKPWTWGSVPGDGZLPRZOOYXAWWYBKQMUOXJLEHFIBZZQWBFXYHPMXZJNJRQHBRMA");

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
    msg.setTimeStamp(0.7478553865236541);
    msg.setSource(46326U);
    msg.setSourceEntity(94U);
    msg.setDestination(43180U);
    msg.setDestinationEntity(215U);
    msg.plan_ref = 371290000U;
    msg.id.assign("JUELGNPENOGECRORSTZQUMLMVDGVKFDXQIABJCPCOOFWIULFMIEBRTVMGYYFYZLQPVOAEXUKQZZRCXYOGJHMKYJCBMQGDSWFXGCMTRASVGVZSLMSOJWOHSSRBEVFQADTSNWKLPWBCAAKUUANDDTHUGJWHLQZSJUXOKTDIHLGEZWKZHEVPIBKKNFCVJAIVFOENMFYKHEUAIJPYRMXT");
    msg.memento.assign("FBPVPSIBVJYCURENVINOSKMGVMJXWWMOLJBPAQVEPZDFDOVELHCBRLDDICUMXYNNNLRHWYBQSTXAEIOGNFIASAATIGORRQQHDHDLKLEEHDJVCPNGYJSTIPPSOMXMVE");
    msg.timeout = 15524U;
    msg.lat = 0.07677534186894619;
    msg.lon = 0.5253401878424044;
    msg.z = 0.8166385261304578;
    msg.z_units = 180U;
    msg.speed = 0.7670260664233542;
    msg.speed_units = 163U;
    msg.custom.assign("UUWIBENWXCVYGGHNUEOKJBZLUWYTYGAWHTVHFZNVTUVNPTFFTBSSELDBPTRMMEXPEMSRYOSCJEFHOIGHECBUNFQPKFFMMOZTINCBZBNIZCXUCCWKGD");

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
    msg.setTimeStamp(0.8206671204340661);
    msg.setSource(16213U);
    msg.setSourceEntity(235U);
    msg.setDestination(25631U);
    msg.setDestinationEntity(18U);
    msg.x = 0.23172839496962527;
    msg.y = 0.20114082510283593;
    msg.z = 0.945324803307434;

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
    msg.setTimeStamp(0.5794016721273186);
    msg.setSource(11294U);
    msg.setSourceEntity(117U);
    msg.setDestination(12856U);
    msg.setDestinationEntity(244U);
    msg.x = 0.5125919707978134;
    msg.y = 0.6330540490892369;
    msg.z = 0.12033777129553269;

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
    msg.setTimeStamp(0.2792724729563134);
    msg.setSource(27931U);
    msg.setSourceEntity(70U);
    msg.setDestination(54454U);
    msg.setDestinationEntity(61U);
    msg.x = 0.23658733316851688;
    msg.y = 0.6748969195141663;
    msg.z = 0.24667820090949277;

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
    msg.setTimeStamp(0.10688700829196685);
    msg.setSource(1868U);
    msg.setSourceEntity(134U);
    msg.setDestination(47713U);
    msg.setDestinationEntity(208U);
    msg.plan_ref = 3311239626U;
    msg.id.assign("WMOGOELWYSG");
    msg.memento.assign("RVKSEUBWPNQUGIZLLVZNJPMUBHUDIOMCTLIRPTYFLGQCDIAMQWKNQMTWARAGSEXZDLDUGPKSJTZHVXWMJWALBIVOZAIWUFPASINMEF");
    msg.timeout = 51450U;
    msg.lat = 0.4183902963052779;
    msg.lon = 0.32643590173242065;
    msg.z = 0.8617789529630135;
    msg.z_units = 212U;
    msg.amplitude = 0.2811922237599378;
    msg.pitch = 0.917331712459719;
    msg.speed = 0.8791061749660005;
    msg.speed_units = 153U;
    msg.custom.assign("MBKEMDUHQEOLWSZVPXHCFADZTARJSUJWKRLCIYQIZSFYGQJIFNEZKHLZTMGORAZVEHLRXANOWNSGBAVBAIBEOHDMFYKOIFJQWPAGWYKVCUBUGVMTGDPSKWBLTQVRZLRSVGYYNFTSGTOIQJYXRJAMXYINKXXEDQCAPZBCJCINMNNCWDUUCDHSOAWWXCGTGPXDELQTEZCPFUDRHMNQENWTBFFBKKJJUPXJPHXHUVZLIYSOFHVQR");

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
    msg.setTimeStamp(0.8364814432677287);
    msg.setSource(50425U);
    msg.setSourceEntity(186U);
    msg.setDestination(12295U);
    msg.setDestinationEntity(41U);
    msg.plan_ref = 133669846U;
    msg.id.assign("PZXWEQSRNNNRHXCYBQPUCBSRYCZQCIDYLAGDFIPUDGYWUVFDRUUESPCJVNXKULEQSBMWKHWPTOWZLVVBUMHKZGOJJGHVYRGMIIWLEXOSPPBSRXGDLADRNFCLMAVLTHFCAT");
    msg.memento.assign("BREGLUDHJNBZNBZAMLQVVMYDAMZSILBOVHKGGUXSWXSYJEVZBBKCJSJYVKVINTDCESCTWPLEYLJGKLAWHSDZXSTBRPTOJAEQEXOWWUHANIQMLEMVDGFGQKZZCIIDQJWKNKMFVTFICAHTGYQRTHRGFXCPNOASPKVARPURCXXDQOYPQTEDAYIFSAUJYXPMGUZJ");
    msg.timeout = 8411U;
    msg.lat = 0.5964704786616847;
    msg.lon = 0.9927979916205456;
    msg.z = 0.9860727304671616;
    msg.z_units = 39U;
    msg.amplitude = 0.7804599638193733;
    msg.pitch = 0.06703542038713872;
    msg.speed = 0.8308628468328404;
    msg.speed_units = 35U;
    msg.custom.assign("KXWKPPIKAYOXJIDHEMFCZWKNWDBVZFACHZJGFZHBJHLEKVNTLWRYPNDUBLNUVIKYBEJRMMEQ");

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
    msg.setTimeStamp(0.6194884723978422);
    msg.setSource(992U);
    msg.setSourceEntity(36U);
    msg.setDestination(21516U);
    msg.setDestinationEntity(5U);
    msg.plan_ref = 2295362916U;
    msg.id.assign("FASRCRVUEZKTFM");
    msg.memento.assign("VIEPLZQTRRXQOZBJKLYPSYTZRZGHTQMZNWOVHQVPIZNDNZDYNTWPZTCVFHGEYBTWOAIJYGRQXLAKTIHCOFWJMPBUCEJSWRINPSTMECH");
    msg.timeout = 39311U;
    msg.lat = 0.12156216927972652;
    msg.lon = 0.38472049683222265;
    msg.z = 0.7452996615887463;
    msg.z_units = 225U;
    msg.amplitude = 0.3862958898243902;
    msg.pitch = 0.14060296509674752;
    msg.speed = 0.6414043335156677;
    msg.speed_units = 16U;
    msg.custom.assign("WSTXOLGBHSPCTPFBDYSZVCNPMIEDQILXUJURBORRTMWVPCHKWQIGFVEBPJZNZINIZPXWUPPJFGHKXYQOVZDZS");

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
    msg.setTimeStamp(0.25850711957731465);
    msg.setSource(25965U);
    msg.setSourceEntity(178U);
    msg.setDestination(17979U);
    msg.setDestinationEntity(248U);

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
    msg.setTimeStamp(0.5203880495651213);
    msg.setSource(48379U);
    msg.setSourceEntity(128U);
    msg.setDestination(2006U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.9050537441420453);
    msg.setSource(46241U);
    msg.setSourceEntity(179U);
    msg.setDestination(33833U);
    msg.setDestinationEntity(79U);

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
    msg.setTimeStamp(0.7258750930472565);
    msg.setSource(63182U);
    msg.setSourceEntity(13U);
    msg.setDestination(34611U);
    msg.setDestinationEntity(41U);
    msg.plan_ref = 2728627139U;
    msg.id.assign("ITQGOZXHVDMGNPSXKAWOJEMVKLVIJDTCBKZVALTRJFYTDCQCFRWHHOLNOETXMBOWDQWTFFCCDDYMLMIQYBDSRITUHDKUSENDOZNNBVVQFUUQSNJKJCAPJVUQAKFAIARBLBUZAPFYPFAUTEIJBLHPGHZRWRHHIVNEPZNMCWGIRELTKHWJXLIFYSESWPGOBPRWMZLEOGCFGBDKXEXSXSNZQRQTXGEJUV");
    msg.memento.assign("AXDWMCWIXMDWEVPATOFPOSHKGCRRZOFWEFZSVBMSASIRIKLXSSEFNRLYVQLQXEFBBMLXSHALWEYFQZHKBMGOIVBHPRTNOWTPKACYDWQCZMNYMSUYWARDCRZZVJEOUJDJHUZTMKJFGQPORLHENINUYJNKZVZCTTGPUPCGNPVZLHQHWGLSBHLPCEFQCCOBHQTXIAJDYNDBFUASOQFDIADPVYUGKGYRWTRQMTGIVNTMLIU");
    msg.lat = 0.9637990832596262;
    msg.lon = 0.4850129998111635;
    msg.z = 0.5906918805007706;
    msg.z_units = 123U;
    msg.radius = 0.6068330677372515;
    msg.duration = 24408U;
    msg.speed = 0.8746364531362297;
    msg.speed_units = 70U;
    msg.custom.assign("KOSOFXTIYQKTRCDXLKEZEBXSJWDMJINUXCASKLZLFPRQLBYBYFVKATSBAVKEMXAVSHAUHUIEHXHGOPPUAMROVANPSHJBWEJZUCAOONQLMGVUOBUIEOPCTCGWTPMPNFJQXQJSXDLMHRBCFROVZBGNEYDQWHXCVRTEWGIFTCPMDBIWKKRQIUCSNRLZWPTFUNYUIWPSYGWLAZQFGVZYQSHYJFV");

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
    msg.setTimeStamp(0.3337637292974437);
    msg.setSource(7037U);
    msg.setSourceEntity(54U);
    msg.setDestination(6517U);
    msg.setDestinationEntity(233U);
    msg.plan_ref = 701816146U;
    msg.id.assign("CISIRAFPESOEWUONCLIYYGALGTYRUKRSWOLNHTXTDTGUCAKAQGDWHGYLNJCJPHSBBXUGZDSEVPRZCNDVMGBRCKEIDBIFIOCVHBZYPADFOXUKEMIXRPRGBNPIBZVZNMQDDZKHLJNPPOZMWWTTHQVEKHTHYXXSN");
    msg.memento.assign("QSVAPZRQKPZSKWJGNQVEJUEXEUMXRQLIJIRTHWDDDDHAFYPFQSCBLGKCMMJICISZKNFLPCTFYBFZ");
    msg.lat = 0.9131790748091787;
    msg.lon = 0.4929468491890012;
    msg.z = 0.5679615185819696;
    msg.z_units = 241U;
    msg.radius = 0.07453438986778094;
    msg.duration = 59824U;
    msg.speed = 0.7913353723783417;
    msg.speed_units = 216U;
    msg.custom.assign("PSIADEICDWQBUKRMCNGKGNNFUTTXGAJUIEXIVLFOGRJSZUJTVBDPYKLPGKUXOFYBBGCGQXUWCTXWDRLSFTHRJMBPSQQH");

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
    msg.setTimeStamp(0.1890167891835708);
    msg.setSource(47287U);
    msg.setSourceEntity(98U);
    msg.setDestination(9588U);
    msg.setDestinationEntity(100U);
    msg.plan_ref = 547996645U;
    msg.id.assign("FRSWBDKNCOSPRNWULTFHWPYJYTWLOTRQFBKIMVIVRXLGCCTPKZVXOLNMUFDBRBBSFKUCZZVTLCHJQABQTYFQOWXSHXWIKWOEAAMXMEKFBDQYKVUGYRSVZPPJONJARYSGEZQHTDHAUASGUEHKAYXOZKLXHCDZUVDSGBNJSFQXMVIVGRGYJLXQPWMRUOJOEDGFHMHECIAZJONILYGENPWSXATQMCDMIPPYJWJITTBBEEHRUPI");
    msg.memento.assign("PBWPKGNOPFZUVMXEZDZLJMPVTKVBSFHXEOKSUNMRQHJQDJQDHIEXPIPIAQNWFDXWLFNIBAUTSSWVYRMER");
    msg.lat = 0.21419428705255705;
    msg.lon = 0.6024047050519874;
    msg.z = 0.6610388500316493;
    msg.z_units = 177U;
    msg.radius = 0.5867202418888832;
    msg.duration = 39631U;
    msg.speed = 0.9543120475656026;
    msg.speed_units = 190U;
    msg.custom.assign("CSKUFCEAPRNSFXWPJJGKBGXRAZVJHYLVCNFGQQTZTXJAIZVKJKFIHUHLDDYDKHXBPRDYFIPUEJNHZGUUSXUOPDKRWHQAXIHCYNAOYYREGPRTOG");

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
    msg.setTimeStamp(0.5404937286880802);
    msg.setSource(30514U);
    msg.setSourceEntity(237U);
    msg.setDestination(20368U);
    msg.setDestinationEntity(210U);
    msg.plan_ref = 1684273768U;
    msg.id.assign("LIMMRLQQAACYJLCCBCOXYBEMNIFEYRKPESLDNDWVLVNFVFTOWJBWJPSPZCYGNXCARKGWPOSUCQRHEOPMTBXZXOEQYZVHJQTXPDUCPZFUYNXOITMGQZESBRHSDHNZUWTG");
    msg.memento.assign("OVCZEWDLZGMIODFWUTFUDNJRJVQEYZMUNMEIMYNGXZGYNXBAWIXVCIKEWQARBNMRILQFJPLKNSZVLFDQEYJIGCGXUCLHTKYMWMBXPMTZWHSAYBWXTFTQIXQVRQTSTCMXXPAIDBIOJKSCGRUVJTZGPBKDOCAAJPBHNRGS");
    msg.timeout = 14632U;
    msg.flags = 73U;
    msg.lat = 0.7686524134165466;
    msg.lon = 0.7100923130463725;
    msg.start_z = 0.9203893080044152;
    msg.start_z_units = 195U;
    msg.end_z = 0.19264489562855058;
    msg.end_z_units = 145U;
    msg.radius = 0.6590860620560187;
    msg.speed = 0.24689672458870882;
    msg.speed_units = 166U;
    msg.custom.assign("VZABRGSIWGHEIDJJCLKWMCZPBYSMCLTFYEEGUWUNNOIVBCHBGITPOMVKESAOIRPIEIPXHYNOJVZQATVWSWCAZNXTXAQMBZQVKTJDPHBGSEZWDYZCFVLTOCGDDMOYWUSHFRFMYMIEYODHVFNKFFNJYAPRHMWLTMKULUZCAVBWZQKIJXPXDUXQUUFLRNXPYXFZ");

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
    msg.setTimeStamp(0.8340846109324723);
    msg.setSource(61035U);
    msg.setSourceEntity(11U);
    msg.setDestination(33850U);
    msg.setDestinationEntity(120U);
    msg.plan_ref = 2949029722U;
    msg.id.assign("ZYPEQPWLUHVZZLJVYXKQLYARJPLGPNUQGNGTGVEIIRJJLLNDOTGXMAKDXNCREUEWMRMVRHIKRACDRFASHMQWHWNTUDBOTXOHFZAVIVBQPFSQJZGZXYYJDMJVUHYPAOMWBCUHIKJWECPJCFNBFYUALPVDTTEXLZPMZXTIBMXSHCSSFQWCECSFOTKNYQIRYUMNGZELKCJQCXUFDPOSZYXSQKNUWGWGAMFNVSOABRDOLEOTBDSKIGBVHBIKRIA");
    msg.memento.assign("YYUFHNDGMREVEPQGKIYODCUOFBBIPBHKPZHUVXSFSDZVSRTYPTRESDGFEJSOYUGARLCELSECYYAFTAZOMSKPGHLFFJJMLUOMMNXJHGARJFSDICQNWCQWGGQNFVWUWZPPARVJTRBKHTOLJESTUAUIRWKVDZGBJXVXQEAPXWZCMIRWDHIPLOUXTTPQKVLYZBFALHTHXQXNNZDECIS");
    msg.timeout = 26492U;
    msg.flags = 62U;
    msg.lat = 0.8421646711028061;
    msg.lon = 0.9237711308001127;
    msg.start_z = 0.3128011044090163;
    msg.start_z_units = 181U;
    msg.end_z = 0.3909580548078877;
    msg.end_z_units = 5U;
    msg.radius = 0.4829504650137194;
    msg.speed = 0.49008096499303877;
    msg.speed_units = 163U;
    msg.custom.assign("FTQRNAWRRCMRMFFQGVGOGWGEPIGNICOJMWDYN");

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
    msg.setTimeStamp(0.7351948240552422);
    msg.setSource(12824U);
    msg.setSourceEntity(35U);
    msg.setDestination(1360U);
    msg.setDestinationEntity(70U);
    msg.plan_ref = 1790800465U;
    msg.id.assign("LRLTDRFWLANSXPJVXXQNCGREQYTWBASHOWPGHMZPJOGNWYSTJJRVRXADWGGEOYMBNISLYNDRBIKDQEZTZAUMXMYFGHYXBHZPFUSCFCVJAITJBQKIVDQXSEPMTSAQVRPJXDPBVBTWZ");
    msg.memento.assign("PNQASXWVOTHIMMTNUQFLNBDFPMWWZKURBBAMHGAUSOTNWYPHTXILVZWDQRZIPIIH");
    msg.timeout = 33851U;
    msg.flags = 100U;
    msg.lat = 0.6978271740620101;
    msg.lon = 0.8939540063863045;
    msg.start_z = 0.5244310044862874;
    msg.start_z_units = 192U;
    msg.end_z = 0.45316575717737817;
    msg.end_z_units = 241U;
    msg.radius = 0.6606396040066693;
    msg.speed = 0.1110916295512433;
    msg.speed_units = 229U;
    msg.custom.assign("TZUGWCQUCCMXABCXHKZFSRIXGVLIXREOMJDWHADBPELNAIJBKGTPJGHDL");

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
    msg.setTimeStamp(0.593539366815483);
    msg.setSource(52645U);
    msg.setSourceEntity(220U);
    msg.setDestination(52272U);
    msg.setDestinationEntity(137U);
    msg.plan_ref = 1483201621U;
    msg.id.assign("AJFOTJYKLOLADZNFCZQKPDTGMJJSGLUBXEHBMXNNXQUUEIEHHGBCEPIBFMHQFTZCVLLLBSCUYRRJCOSEWTIPSDDABHYCRRVGNHDRBUVKLXQZJPTDSOGSFOMNYMEGMPQZSTKEXOATMZGNHIVSUNKDWZVOHQIENNBJPSQOYDPXWCBQZ");
    msg.memento.assign("XETOXSJNCFEWVXMVKZIVGBPYMTKTGOABGNCKMWXPDFNMFZBPYXUAHCWLHPUTMCCSXMHSTJYKESUUQQABBLLO");
    msg.timeout = 1358U;
    msg.lat = 0.11362134191890794;
    msg.lon = 0.8185764646466132;
    msg.z = 0.38725539208468107;
    msg.z_units = 174U;
    msg.speed = 0.21000157736593217;
    msg.speed_units = 127U;
    msg.custom.assign("INQWSKBEFZELUATHJQKHPKDGVJXALHDKXVRSPHJIVRCPZSCKJNCSMEMVNAPHFLWNBMIBITZCGOWBTJJFNSUX");

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
    msg.setTimeStamp(0.1425505626136072);
    msg.setSource(20629U);
    msg.setSourceEntity(53U);
    msg.setDestination(53873U);
    msg.setDestinationEntity(208U);
    msg.plan_ref = 959189142U;
    msg.id.assign("NGTFJCXNUCIXSYMAJJABTIXRYYPMHDQOTPHQFGFHKWPFXUWKDNUAUUWQRWKQDEJWQRZPIZYCVLHMTVVJOVUOSBUFBPSYNKQVLTZEIERGYFRXCBOAPKLOCSVADJZFMKWKGLXESMNJNOA");
    msg.memento.assign("OMROOVGRUKVXGJYEVSQHJMSPWOSJQJACHFLYQIGTAWTEABWNLOLAEGZNKFEREGMXPUWZUNNGUIRKPSHRBLOTJZRIILXCDQWLSKUGWVTWMBXRDJVXRCOCEBBGEMHT");
    msg.timeout = 48476U;
    msg.lat = 0.4148486848863233;
    msg.lon = 0.002340683475147598;
    msg.z = 0.9288547848427363;
    msg.z_units = 89U;
    msg.speed = 0.7280940463833776;
    msg.speed_units = 205U;
    msg.custom.assign("ZTHFGXUZOLZPFAKAWDXYOHPQKBNRXVWQHPPBUNFZTMLLWNWOMCGJWNWWLZTLEJISANGDJJPNJQHJQUYPRFEMTMQIUKKUGSQECEQAOOBLSYAHYUDVPYOT");

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
    msg.setTimeStamp(0.24891891407489808);
    msg.setSource(36838U);
    msg.setSourceEntity(36U);
    msg.setDestination(46101U);
    msg.setDestinationEntity(114U);
    msg.plan_ref = 2625409458U;
    msg.id.assign("IMXYRZAHRZMJIBADIDKINSHRRSWYAYPGWSCKH");
    msg.memento.assign("ZMWFQGJUVGFEUOMXEZOEVGUUUDUWFEKKJIOP");
    msg.timeout = 19660U;
    msg.lat = 0.24926672919634074;
    msg.lon = 0.04283966882366985;
    msg.z = 0.599663492741395;
    msg.z_units = 77U;
    msg.speed = 0.8715677971788028;
    msg.speed_units = 213U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.13334578719180223;
    tmp_msg_0.y = 0.6444750618067143;
    tmp_msg_0.z = 0.5598761484325953;
    tmp_msg_0.t = 0.1658562045012978;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("WGCCWRRTXUBJNQILYMWQWVESELWNDKVYOXJZCJVRNGLHHAKTEBBBMDKCGEJPESHSQLEVFFPKWDGKHKCXXMCFLNSKFAJHZIPAMJVFZMCMSRAIJSRTYDMUOHPNODZGWGALGRSERYZNFN");

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
    msg.setTimeStamp(0.1341933874210155);
    msg.setSource(54227U);
    msg.setSourceEntity(174U);
    msg.setDestination(60288U);
    msg.setDestinationEntity(124U);
    msg.x = 0.39733915502139106;
    msg.y = 0.9211397723406182;
    msg.z = 0.20573807269565914;
    msg.t = 0.856773838413524;

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
    msg.setTimeStamp(0.5477133759504744);
    msg.setSource(55424U);
    msg.setSourceEntity(52U);
    msg.setDestination(6477U);
    msg.setDestinationEntity(228U);
    msg.x = 0.0062308941086385294;
    msg.y = 0.3452715701481447;
    msg.z = 0.30028623577583813;
    msg.t = 0.19251579576837152;

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
    msg.setTimeStamp(0.8322817595679852);
    msg.setSource(35088U);
    msg.setSourceEntity(163U);
    msg.setDestination(17817U);
    msg.setDestinationEntity(52U);
    msg.x = 0.5452154381366071;
    msg.y = 0.30912626781849495;
    msg.z = 0.7155105758019965;
    msg.t = 0.99782891954003;

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
    msg.setTimeStamp(0.19254074117822095);
    msg.setSource(28286U);
    msg.setSourceEntity(123U);
    msg.setDestination(60420U);
    msg.setDestinationEntity(225U);
    msg.plan_ref = 3117249997U;
    msg.id.assign("JSPVHIYLFKKPBYKGTLDDQWQGIHVEFYKUGZGGCXCEKEUFTHMIRONYCBLRIMELMCBWWDKPQJGPVYDDOUUNAMFEYCCUEHFFXKMFDEKPMXZJSACVJRIRTSBNJHWWGSXALIGCWYIJXJVKVHIVSOXRNFHXPYCAWMD");
    msg.memento.assign("VCMGGHLFMWOGRZCOTDRUXDALLLVAODCBTYEWNXZLPIINSUXRLFOHNKBAJQNSSGVVCRLFTTIUJEMWCDWZOUFJWJKUSQU");
    msg.timeout = 58269U;
    msg.name.assign("KOVTNTDZMHVTWYUGVLDBLAHJQMRWEHOOJRSEQKARJAVGSHYRAZPCIXYPZKJEBMMNJUEAYLFZSFKCOIXYFILUBTRDDATGXZZOYCQIWKRAMGRFIJQNSGNCABCRTOLVSJWZNKUCPMVFRFQQLH");
    msg.custom.assign("MGLWRANAAPFDOHBJFYUMLMMTNYXUZNGXIPQNTPGWFAZTJGNSAVDKZGELLVPRSTRTBAOEAYSWCVOOSPSMMKMIQOPLOZLQTDBEJGIEKHVYVKKTWGJYFEXSORHNQCWVUMKCYTDDYQWTXQBKBISBJRJIGRDYFMHYSI");

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
    msg.setTimeStamp(0.6492367299150962);
    msg.setSource(57530U);
    msg.setSourceEntity(11U);
    msg.setDestination(63485U);
    msg.setDestinationEntity(49U);
    msg.plan_ref = 4025820435U;
    msg.id.assign("CAMRFBJOOUIQQXLQFAFTLCLCUMENEGMZRURNXWJAFKVCIXWEWKGINSBBTNKLDJGUZSGEPDZXQYOUNHMQHFSAJMEOFZQFDEPGETCDJBRG");
    msg.memento.assign("UGKLMKXPPNOCMWFDFXQCJXGAVDDTRTSREHSHNHQMEOHHYJFBJYBEQPEYZDTLYRXMGUSQBZTJAKXQLAUIGEDNBVLKWTHMKIIIPXAORV");
    msg.timeout = 35157U;
    msg.name.assign("GDNPDFYCHMQBJVVKPKSOXNSGEQLRPKIULJDUQSGWPLFLOTRCNFKFMCXMGYNUTIKDOLOMLMWOZMUYEOIVLXAKHGVXWSEZNBJZWAWJGHYIGUDATRTBJSWXSQILPABEBBVJALWZAB");
    msg.custom.assign("UMAQDBDRUBCGLLKMUXVLONCLTLSUSOKBJFISTEPZTQZITPWVEJHYYFHOEFVQRHMMXAMHEKGXXWBRPFKTYEDZEQUVRZKYSGILKNTITUPJLWIWBDRBGWA");

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
    msg.setTimeStamp(0.9792010265561023);
    msg.setSource(50409U);
    msg.setSourceEntity(233U);
    msg.setDestination(14961U);
    msg.setDestinationEntity(217U);
    msg.plan_ref = 510597516U;
    msg.id.assign("KWMOTDCSKSXKODFMYLKOJIKHCLYPCTLHTGOSYAHBZDHPVFOFFZZRMTWFCKQIOFQJCVBUUIXQCJLNXDZTPWMJGKRVGABGSZWMFRFKVTYXXVDWDSZHGPLHUZVZISEPEGEZOUHQADVSLSGIYNOUCYPINERGXKKXCFQYBCSNBGMJDERMQIOPQHWWUBATNJHUBETANEJVLEVYINUGNLEPNRUAAWRLO");
    msg.memento.assign("OIDJTUUBCUEMVCWREQLMNKKVCEZQAMMQSYNSWLZWUHITEJFXTVCOXSIOTDVQOOBCXDPWXHHHDITYMBCBZTFAPEFQAQMVPOZCFR");
    msg.timeout = 58136U;
    msg.name.assign("HZYRGFDTLAUDAONAPSPOARVEMCLIQYEGTFFSBPQAIFJEFEJLLAYUBPTKGLBPBXKQMTDWJBXICVGHYDORNPWWYYIGEORNOXAJWHZDTXZEJYGIEWSKJKXTCCBXOIAUSQKUNEGKXMCWIUCSZQCLMIHPLORRNPVFWULMZHTSYVVUXCGHGVKJYVMRNMZFKESFHQJMRCDAJYMDQQHBFHLZVODGODJNKPQPMZIBOTVKZLCSNDWUFZQWBTXETSRNHUBAV");
    msg.custom.assign("NLSIBNMKRUF");

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
    msg.setTimeStamp(0.21657788630098795);
    msg.setSource(42215U);
    msg.setSourceEntity(111U);
    msg.setDestination(56596U);
    msg.setDestinationEntity(174U);
    msg.plan_ref = 2339886164U;
    msg.id.assign("OXIJALIFEZKTLMDRNSCPUBEZFVCCPCHEVUXIJSQLMCYAHOEEHBNMKIEPOHJTJQOVKJYTKVYJLNVLQYWLQMTABXRQWRZVHLNJRGDVWUYOUSFTQXMQUSWBRVKKKTZACGEDIIKXEDUJIZHIFDGWYGFYACROHTEXDCZXYNYSBJHTPZBFBEXMZWBUGSUZNMQIPCHFVWGSGNTPWLMHUDSAFSIAORPUOQXZNRGPGDXSWKWTALALNYFBRKGDAQPPJD");
    msg.memento.assign("AYSDNMSSPMJKOBZDAWBOTAPIVHMBSXUOFNPXADGIZDHFGLXCWWQIKFNEILOLOXVQMKCOUWXCGHYPPKXFVHECKQPLIUHFMCCZZRVILEAJGRTPUPBGUAWEWJTOVCSKZURWVKJXGSOTBUWZRKPIKNELRLQVETBIAVQVQBRZADYYRMGTWYSPRJNQOGNLQXFT");
    msg.lat = 0.5875313723538864;
    msg.lon = 0.3522579424306612;
    msg.z = 0.646740153802711;
    msg.z_units = 118U;
    msg.speed = 0.14288349341891005;
    msg.speed_units = 202U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 25253U;
    tmp_msg_0.off_x = 0.7131488171889112;
    tmp_msg_0.off_y = 0.49976392388285074;
    tmp_msg_0.off_z = 0.2814045043274087;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.520140465184502;
    msg.custom.assign("RLQWDXTCWIOGYICIVKQUHVLERCKXKQOOPJBCEF");

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
    msg.setTimeStamp(0.03301909228982558);
    msg.setSource(35761U);
    msg.setSourceEntity(1U);
    msg.setDestination(28868U);
    msg.setDestinationEntity(113U);
    msg.plan_ref = 1953212340U;
    msg.id.assign("JSPMMPXVCQULVGCDAHBZQWAYCEZCDMPNFMDBOEERWBAIRYXFDHJLCIOSWRFETGUHWXZEJZCOSTOTQROLOBOGVSDGIGPSZLQYNBIMTOFYHUUZBKYVYLVHKPPZTEJLZU");
    msg.memento.assign("GUGMYBUPFMNVLTRASHKOBJKYXYXJVPDDNKEEOWJEWZLPVNOZONYWKDXQIWVIKXRIDJERNSPHUHRZDQJWNRCIKSECTHBQRMLSBTOLZMHQQBGFFUZJHQKYIUUAIMUSADUGXYJXMNAVPPUSVEZHEYLIHQSKNVCBGDAXFSEVMLZTXFFFSZWAWLLQRITPWXOFPTCTNAPELVYBCDDRCUQHOGTKFCTBWCMJGVKXRMIQACOWOBGTGE");
    msg.lat = 0.8408576761082908;
    msg.lon = 0.6145514065658344;
    msg.z = 0.3952965739899418;
    msg.z_units = 145U;
    msg.speed = 0.1387002488902156;
    msg.speed_units = 2U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8527552367252035;
    tmp_msg_0.y = 0.5957309451163184;
    tmp_msg_0.z = 0.8300622984073182;
    tmp_msg_0.t = 0.4390453248889349;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 15283U;
    tmp_msg_1.off_x = 0.3620052348846087;
    tmp_msg_1.off_y = 0.6249633969827902;
    tmp_msg_1.off_z = 0.6693275843529504;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.2861556021932844;
    msg.custom.assign("ISROEOBOZUYKIQMIIGZCTYKNERPNGTBUQCFAIQDTUFLVDCIBSAMBOJXSCBVXIJGZNAKKY");

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
    msg.setTimeStamp(0.45072994239573716);
    msg.setSource(36208U);
    msg.setSourceEntity(95U);
    msg.setDestination(46416U);
    msg.setDestinationEntity(175U);
    msg.plan_ref = 2366997005U;
    msg.id.assign("MQAUXRJGNKGJKGKQOJCHCHVIOBIPBWZ");
    msg.memento.assign("VKUEBERFBFORBAXGOGPFKJABTGFHXMTOKIWN");
    msg.lat = 0.4479565262771745;
    msg.lon = 0.8075579861898133;
    msg.z = 0.07142161961953475;
    msg.z_units = 28U;
    msg.speed = 0.711009158255028;
    msg.speed_units = 37U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.4887844287381866;
    tmp_msg_0.y = 0.20514745781655885;
    tmp_msg_0.z = 0.7492005107709434;
    tmp_msg_0.t = 0.65515876974532;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.584354457631602;
    msg.custom.assign("UVAWOTVHMIFVKQTIFKWJRNUIFYZHQSYQEPYRNPSQCQAJSDUJMOBZCVUJUEXQVEISAZLXGUPNXHLVPGXABU");

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
    msg.setTimeStamp(0.6017409739156705);
    msg.setSource(38128U);
    msg.setSourceEntity(52U);
    msg.setDestination(41715U);
    msg.setDestinationEntity(13U);
    msg.vid = 44751U;
    msg.off_x = 0.760729690509159;
    msg.off_y = 0.7050418422500055;
    msg.off_z = 0.12561997006330428;

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
    msg.setTimeStamp(0.729049470740605);
    msg.setSource(21449U);
    msg.setSourceEntity(57U);
    msg.setDestination(2101U);
    msg.setDestinationEntity(58U);
    msg.vid = 57337U;
    msg.off_x = 0.7659335114254532;
    msg.off_y = 0.9065966106478716;
    msg.off_z = 0.7161446927334161;

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
    msg.setTimeStamp(0.1776525788521237);
    msg.setSource(27677U);
    msg.setSourceEntity(99U);
    msg.setDestination(64632U);
    msg.setDestinationEntity(147U);
    msg.vid = 27615U;
    msg.off_x = 0.8152993032641712;
    msg.off_y = 0.6643021688564743;
    msg.off_z = 0.7715956013469446;

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
    msg.setTimeStamp(0.6941456514468642);
    msg.setSource(50196U);
    msg.setSourceEntity(170U);
    msg.setDestination(61676U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.4687622370366541);
    msg.setSource(43095U);
    msg.setSourceEntity(169U);
    msg.setDestination(42371U);
    msg.setDestinationEntity(89U);

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
    msg.setTimeStamp(0.9271136620476919);
    msg.setSource(47629U);
    msg.setSourceEntity(181U);
    msg.setDestination(5226U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.04750968037467218);
    msg.setSource(6672U);
    msg.setSourceEntity(229U);
    msg.setDestination(40334U);
    msg.setDestinationEntity(69U);
    msg.mid = 18940U;

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
    msg.setTimeStamp(0.3256732923417457);
    msg.setSource(46441U);
    msg.setSourceEntity(77U);
    msg.setDestination(41709U);
    msg.setDestinationEntity(117U);
    msg.mid = 4241U;

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
    msg.setTimeStamp(0.2959720322952274);
    msg.setSource(18962U);
    msg.setSourceEntity(71U);
    msg.setDestination(18446U);
    msg.setDestinationEntity(118U);
    msg.mid = 4455U;

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
    msg.setTimeStamp(0.08967749233788447);
    msg.setSource(60245U);
    msg.setSourceEntity(48U);
    msg.setDestination(38938U);
    msg.setDestinationEntity(194U);
    msg.state = 78U;
    msg.eta = 17665U;
    msg.info.assign("JKTCLCURNAAXJFPHXIAXBJYJTYGFWFGTZJRRYDPIOQYYUWZFBFSVLUFMIWDXLUJQAZGEESNROQSLKVUETDRECMKCZODVTEQZDBSOOYSGIAZMKIOGLFUDEOGL");

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
    msg.setTimeStamp(0.25977285661112604);
    msg.setSource(58848U);
    msg.setSourceEntity(18U);
    msg.setDestination(29104U);
    msg.setDestinationEntity(204U);
    msg.state = 203U;
    msg.eta = 5932U;
    msg.info.assign("YSVLFRULCPYVOOQBEOZLKVHSNQXKWMSPIQGJJWFUBDQNODJGVQONTXXSFQEUZFHOCADCSUKRRYHOUPSUGTLBOTGMHERBYNCGGARUIKIEXQZTFDJCIPHMXLLDDMDMSWAYBSXHELTPGAFRZYHXYEUAXQEJNTTBFFLPNAYJMARVJWMZVZDQFVIRETJDPMKCOMHVKSJBDCERATLILNASBNIBWZGVYCW");

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
    msg.setTimeStamp(0.4663150554261305);
    msg.setSource(39727U);
    msg.setSourceEntity(99U);
    msg.setDestination(60587U);
    msg.setDestinationEntity(164U);
    msg.state = 32U;
    msg.eta = 2685U;
    msg.info.assign("HLSUEEVMTGZORQVSWMLSSFLWYGJJFRLTZJZGLBQVANCQHURJLUHMYNPUTDFOKMNRZFPWCXLYPWKYISIHBJPEPCZDAPTMMIDSNRMGWBTXTHMJTPADTIEYKRUYZCRULBYBRIOQKAOHONVANIZBNYWVWHCFNHXOA");

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
    msg.setTimeStamp(0.09665676669954837);
    msg.setSource(63153U);
    msg.setSourceEntity(19U);
    msg.setDestination(60822U);
    msg.setDestinationEntity(113U);
    msg.system = 1647U;
    msg.duration = 36944U;
    msg.speed = 0.2603864514237664;
    msg.speed_units = 144U;
    msg.x = 0.12659325487232231;
    msg.y = 0.8254551860931224;
    msg.z = 0.6544330314926239;
    msg.z_units = 161U;

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
    msg.setTimeStamp(0.8200381492825006);
    msg.setSource(44404U);
    msg.setSourceEntity(144U);
    msg.setDestination(25664U);
    msg.setDestinationEntity(60U);
    msg.system = 39186U;
    msg.duration = 12134U;
    msg.speed = 0.858723903144998;
    msg.speed_units = 80U;
    msg.x = 0.47496966155584774;
    msg.y = 0.5192483751432612;
    msg.z = 0.3532800211851532;
    msg.z_units = 220U;

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
    msg.setTimeStamp(0.6515063026910481);
    msg.setSource(393U);
    msg.setSourceEntity(194U);
    msg.setDestination(8190U);
    msg.setDestinationEntity(66U);
    msg.system = 26107U;
    msg.duration = 17246U;
    msg.speed = 0.32448807982887706;
    msg.speed_units = 191U;
    msg.x = 0.7950816789307313;
    msg.y = 0.7325061642943145;
    msg.z = 0.9652286492142065;
    msg.z_units = 56U;

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
    msg.setTimeStamp(0.3564850926274523);
    msg.setSource(23052U);
    msg.setSourceEntity(221U);
    msg.setDestination(48247U);
    msg.setDestinationEntity(156U);
    msg.plan_ref = 1693209638U;
    msg.id.assign("IHOGNQBENVJTUVDCMWTIWCZRVTKYGXIIXBNOYFVKCVZCRKTLWALPIQDAWLMOKIZLUZKJYVMJVRMKWYJZALEXQHE");
    msg.memento.assign("ZOMHBHXXFHEMKEKXTHVEFWQFCTOSEMCRSOYYCDLCMUQBWVKDOIXMEFILYNTHRPHXGUYWTVGVRQLPUHJKHALXELDWCCWYZFIIUAJQIBINGZDIVAWAROGSPJAJNKOESKPCSNVWQOEZFPAUOJGDSRXYAZKJDTHXIBETYJDPGBNZKDFVPYNFMMZWTAIKTDZUFQLCUXXATVCGR");
    msg.lat = 0.2979487286455774;
    msg.lon = 0.4240644977432456;
    msg.speed = 0.8528120225321816;
    msg.speed_units = 83U;
    msg.duration = 47724U;
    msg.sys_a = 27451U;
    msg.sys_b = 57080U;
    msg.move_threshold = 0.4565570792904792;

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
    msg.setTimeStamp(0.4841588833571159);
    msg.setSource(43556U);
    msg.setSourceEntity(134U);
    msg.setDestination(47104U);
    msg.setDestinationEntity(111U);
    msg.plan_ref = 3441274357U;
    msg.id.assign("URWGCFYPDAJQMZSLMNOGHOICIKAYRFMQLBSBIXCCSHJIVGZQWXBTVTAZQRVULEHQCUNAVUKUFJOQKDKMFGYUPZRVYTDYOCKYYWBJEQA");
    msg.memento.assign("LQPEIKDSCOJVQBUBFWWJTWRCWXABNEQTKEAMHESAHACJAIMINFMFQBFGLYQLGHGRNBMTJPIDDKZXCXBF");
    msg.lat = 0.8578764903146084;
    msg.lon = 0.3383130819661867;
    msg.speed = 0.274037230226427;
    msg.speed_units = 124U;
    msg.duration = 60419U;
    msg.sys_a = 6952U;
    msg.sys_b = 10904U;
    msg.move_threshold = 0.6832591249009484;

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
    msg.setTimeStamp(0.08550290541191075);
    msg.setSource(11590U);
    msg.setSourceEntity(155U);
    msg.setDestination(26856U);
    msg.setDestinationEntity(118U);
    msg.plan_ref = 2682431541U;
    msg.id.assign("QVLXTBWXUXQEVHQOBWACPGT");
    msg.memento.assign("RGSGKSYBUXMMAFSUCMTQLTOSSUFYNQNWQEIPRYCXOSITWLAYKQGYEVLKHRIIPQRXNAZNZZEJBSFBHAEEJGLJQCMCITKUDYUDPK");
    msg.lat = 0.8365628796325021;
    msg.lon = 0.23573397927976636;
    msg.speed = 0.5020772947757833;
    msg.speed_units = 131U;
    msg.duration = 58881U;
    msg.sys_a = 26156U;
    msg.sys_b = 56262U;
    msg.move_threshold = 0.5611216002030394;

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
    msg.setTimeStamp(0.5558188299030435);
    msg.setSource(21695U);
    msg.setSourceEntity(11U);
    msg.setDestination(21705U);
    msg.setDestinationEntity(106U);
    msg.plan_ref = 2041594946U;
    msg.id.assign("SYFZUJZIGPH");
    msg.memento.assign("PCXBCSTRKVDYFHQDPTVYGWVLNOAOXEMVYJPOFASVPXEIQGBJILPRXEFTFLRMBUZUZYZAJHVDJQCAGWLWUUALUNUHNGRBGDTGEPXFMWSGFHLTTAZKZEOJZRWTQORMSQRXFFCMCSZNIZJSYDDRPKLOJYCXWAEPAWGAIPXJDYTDCYOLMYWTKKCULVMVQSOGNHMBULKQBEDJNIHWIHXOSJKHARCPHIQRFHEBNTGBDFMNKEXEN");
    msg.lat = 0.4500605747371311;
    msg.lon = 0.11936535886730226;
    msg.z = 0.5694516848837415;
    msg.z_units = 209U;
    msg.speed = 0.5357704403244203;
    msg.speed_units = 198U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.7470592262374346;
    tmp_msg_0.lon = 0.7901307239928865;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("PVMVXEBFTBXXTRMMCWMCZKPKLMUWSENKKYFNTNIKRISOMAFHHRTQGVVCVAJZQMAQUXZLXNZJOXYOCKEEIODVYGWPRTSOZWAGLSNVHCSSUQMKBXJAELOKLJFYRCOULHDOUOAYGIWZYMMGBPDTVRUIGPFQUIFIDHQBKCNQAQEXWZCATLGUWJJHPDYYTLTDRJDHSWNHJXPRZGFRDQIEUSP");

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
    msg.setTimeStamp(0.6353604173766185);
    msg.setSource(49435U);
    msg.setSourceEntity(64U);
    msg.setDestination(57915U);
    msg.setDestinationEntity(72U);
    msg.plan_ref = 260863300U;
    msg.id.assign("SWKJELFYMNK");
    msg.memento.assign("XNFEIEQDJNOJKNQKWYOHQZXDNITZFZSZGNWBUAWXMWLBVKLXNFAVOKFMIRKGVCBODIVOBJATEMUACSKMUISRRXHGUSUQBCFZLNUQHYDGWCKSDJEVBYLFFNQVTOOKTTOMPAMB");
    msg.lat = 0.3359600911139594;
    msg.lon = 0.9018377313286967;
    msg.z = 0.20267467968771147;
    msg.z_units = 88U;
    msg.speed = 0.2565561524521309;
    msg.speed_units = 55U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5413376602952648;
    tmp_msg_0.lon = 0.032770001149754924;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("LCDUBJKEWDDZQTPYHSGZBKPPNTVWMQLUGBDIRKNGEZFAOCSQKGRNXTKXIZUWZLTYDABXJQCXFPRLNOQWXICFMCCGKHEZGXPQZEIHSSEURFPLCFYEVAUVDNNURMNPWRHSNMSQTXGUDDIYAFWVVRDSNBRUTWJZJTWHIEKJLMXBTIBOOQENXAJZMGHCCITUSLYIFXIVOUJHFHVBABYOKQFWVYEPEVOLPMSZPVBKJKSJDYALTFOWGQALRMYOHM");

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
    msg.setTimeStamp(0.668005625361618);
    msg.setSource(63312U);
    msg.setSourceEntity(130U);
    msg.setDestination(20809U);
    msg.setDestinationEntity(247U);
    msg.plan_ref = 3197073875U;
    msg.id.assign("QDYDKPRQSOGODSCPPEFIRMENWFNFOJYKKWEPZNGBMFRKI");
    msg.memento.assign("CIDCGHFGUUCQJDMRYITLVLAZYODSGNRUKWDJUPPDNFGSRJTJWEIWBKQSRJIAZQQFBEOKCGHVZG");
    msg.lat = 0.9685467221972281;
    msg.lon = 0.9038003682317227;
    msg.z = 0.44530826812671154;
    msg.z_units = 239U;
    msg.speed = 0.15832154653878472;
    msg.speed_units = 127U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.4284052169044831;
    tmp_msg_0.lon = 0.8315633944960623;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("YGVGKFIMEATSJETWYSBATYDCFFIVYHCJZYIPPVZIXZIYFCUOPB");

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
    msg.setTimeStamp(0.6839037405687736);
    msg.setSource(27911U);
    msg.setSourceEntity(48U);
    msg.setDestination(28097U);
    msg.setDestinationEntity(240U);
    msg.lat = 0.49126725106140234;
    msg.lon = 0.2800367061167006;

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
    msg.setTimeStamp(0.9201361517081849);
    msg.setSource(11534U);
    msg.setSourceEntity(165U);
    msg.setDestination(2090U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.0809658575143114;
    msg.lon = 0.5332230994441691;

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
    msg.setTimeStamp(0.8752714330603846);
    msg.setSource(32195U);
    msg.setSourceEntity(254U);
    msg.setDestination(40793U);
    msg.setDestinationEntity(139U);
    msg.lat = 0.733179125326862;
    msg.lon = 0.14358439946561696;

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
    msg.setTimeStamp(0.6840352870391306);
    msg.setSource(13737U);
    msg.setSourceEntity(89U);
    msg.setDestination(29513U);
    msg.setDestinationEntity(147U);
    msg.plan_ref = 3285767959U;
    msg.id.assign("LHMFOUDQHIVTWUCSHXGWQAKWXOBRRDKVJPJGLBYSRSQABRBFEFEUHYUWVETSLBDBFOGCOJGQBKKVMVTUCDNKPUTRJPXINLMIGEZXLPNLXDPZPYPHVZWVYDEBHEITHRGYUOFFOQAMNCJLZCCWMACZAENRYASGSWHICENOTSUZQDYRIIMNKEBOUZPAXWGVQHAJ");
    msg.memento.assign("YPRLFIGPVXVWNERQVQSUGLIIYTOBUNAQPDMLWTUOIFOXTRUHREHOSMMKLNWZUUENXMPFEMQRHBYLTUESPWPCLQBOVEIBSTAHAZZALKBNTJIZJOWISJASLGMGZIMPKZWDOBGJABFDCZDUQKVSXFXYQVJGQTRECPTHRXYYGCVCXTSVJOCKPHDUEZBIHFJWTZYGFVNENGKAU");
    msg.timeout = 48382U;
    msg.lat = 0.2455442971462879;
    msg.lon = 0.5425559296717688;
    msg.z = 0.5440056831204401;
    msg.z_units = 44U;
    msg.pitch = 0.5816796798835289;
    msg.amplitude = 0.13697873138283545;
    msg.duration = 46738U;
    msg.speed = 0.11300328279179428;
    msg.speed_units = 218U;
    msg.radius = 0.9005622804095481;
    msg.direction = 33U;
    msg.custom.assign("ZLFJMJNZAVFMRVCEJEREGOIUIVPICJNMKKMADDSYKRSVTYRZELI");

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
    msg.setTimeStamp(0.7528270275148576);
    msg.setSource(52044U);
    msg.setSourceEntity(59U);
    msg.setDestination(16301U);
    msg.setDestinationEntity(180U);
    msg.plan_ref = 3005070672U;
    msg.id.assign("PJLOSMYZCKRYZKHCZWDXKXYIXNHGMHMPLWUXEVWPRKAQVXSORNITKAPLBVFDAAJBUNETLHLMAEPEZXFTGTGTYYOOBCDWLBLWSKEBKCYQJJYDFSERLHCJMUJOTJFEHPLPSMGEFDDPDZGVUFBGZSBUIVIMGKARVLRKDQQQSRQAFHMXEQANTPNDAOVSHMIBUXYWCONCICSTHYKSIYNPUUJFCIJEN");
    msg.memento.assign("WIDSSWETIAQBTDJVXAMEOSYZDYDSXDUXMHWOOBKPLHRSEZHXI");
    msg.timeout = 62637U;
    msg.lat = 0.111989426857379;
    msg.lon = 0.5501324690306946;
    msg.z = 0.6267884830553971;
    msg.z_units = 33U;
    msg.pitch = 0.23781744848603215;
    msg.amplitude = 0.7482908092493294;
    msg.duration = 15319U;
    msg.speed = 0.059369776726946655;
    msg.speed_units = 181U;
    msg.radius = 0.3668447876276283;
    msg.direction = 242U;
    msg.custom.assign("MUQJXEFTHAOVBINTIWBOZQONAWUMWRMRATLPCSNUU");

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
    msg.setTimeStamp(0.7194072488713977);
    msg.setSource(17129U);
    msg.setSourceEntity(182U);
    msg.setDestination(3185U);
    msg.setDestinationEntity(154U);
    msg.plan_ref = 1616365183U;
    msg.id.assign("DBWOYNNSKPEQDNXGFMYFKGCLLSPRSAXZCFZBAKAWIVFEIQIYKJDYKYZBTQHPTEHVYPFJCBYRBONTWTRCPSHXHMALQOIHDQDPVDRHMUVKUEOHRWZKGNNSXBLGQCHAWXOOVLIIIJMCMRXCIHDMEVURPXGTUQCMTLXDEIFFPSANKREABFNZNWYKHNIUOCZMGTFMWLDJWJSAGZOBTA");
    msg.memento.assign("NBTELOUZOVWWGFRLCFVYEWRKMOYYHPPMTVBZNGUNVJSGSQCEAHTQWQKUXHDSOXXZEVOOQWNDRHHNFR");
    msg.timeout = 16950U;
    msg.lat = 0.6472886020066788;
    msg.lon = 0.4096721297232181;
    msg.z = 0.5717568825952493;
    msg.z_units = 190U;
    msg.pitch = 0.8031078290202982;
    msg.amplitude = 0.18428727911851595;
    msg.duration = 40352U;
    msg.speed = 0.3358464587907013;
    msg.speed_units = 17U;
    msg.radius = 0.2290943475422168;
    msg.direction = 10U;
    msg.custom.assign("PLQYVKFPLKIWCTOXJNYLBIHZKDARHQNWAIJTHMPFOOUCGDTOBJSDEZEIDTN");

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
    msg.setTimeStamp(0.6757085320234778);
    msg.setSource(17298U);
    msg.setSourceEntity(165U);
    msg.setDestination(3777U);
    msg.setDestinationEntity(74U);
    msg.formation_name.assign("BBGHURKOEICYQOWVYQNFTSMUCNUUJGBFCFMFZLEPDHUJOSEDTVOVHKMSP");
    msg.reference_frame = 3U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 21319U;
    tmp_msg_0.off_x = 0.07909637173685391;
    tmp_msg_0.off_y = 0.8807277526228352;
    tmp_msg_0.off_z = 0.8962631327190297;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("MTBPCESWZJGUJKUEHSISJYTFQOOGXATRUDVVFYXVXCKUJXMHZONYAQCGVONLIJTZDJXFOHNPWHPIBJVLLWXQPFRPEUDODQKELRZSWJMERNEGIBHWCOOMNQDGJQNMNRFMRTPTKWSTDBSTZWCPGACBLSBUOEYANIZ");

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
    msg.setTimeStamp(0.07705609322092277);
    msg.setSource(34625U);
    msg.setSourceEntity(229U);
    msg.setDestination(64649U);
    msg.setDestinationEntity(246U);
    msg.formation_name.assign("MDAPYWEHXMKMALIGGBOLAMSDMGPIHDJQJXSQBODTKYAUODKJYCQHFSTIXIFVMVQRJHBKDXKTLQVUHSOLZPIAWPLZKSGWKLWOPVIAPPQNMYUDQHYBFSGUSSTNRWZCVRZNFUFPPFSTHJUFIVLTJBSZQJR");
    msg.reference_frame = 98U;
    msg.custom.assign("JLECHTBWYRCJVVFICSNHKBOMWDBQVHFAOFQJUMEOQIHEYUHLPENOKASAUOYXTQQXCQARFHRABXDRWGUQUGKGMDZMDPEHSJZKBHPALKPTGCDINGORTXETJGKYINZTTMLYJBPXVBZBZMIFMZFUSDWHJVXDSOFIIWOZIYPBIUNJRPYCMTSQDVXNSLVOYZAADPMBCZDNWGECRSRRVULUFWAGXNHCEVJTA");

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
    msg.setTimeStamp(0.6989294720786821);
    msg.setSource(22461U);
    msg.setSourceEntity(172U);
    msg.setDestination(11241U);
    msg.setDestinationEntity(99U);
    msg.formation_name.assign("TFNWVGZLMEXZPAHYXVMBRHFCHXF");
    msg.reference_frame = 116U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 46497U;
    tmp_msg_0.off_x = 0.8798312083628516;
    tmp_msg_0.off_y = 0.4666952745352304;
    tmp_msg_0.off_z = 0.06608266457615308;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("XZCBBBFHUQJYOMZIHBCCZQRKOOXEGJGVAHTUOQUAQHBRRSMHIVOJDIKZZATGSTWLEEVNW");

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
    msg.setTimeStamp(0.909373303331861);
    msg.setSource(36470U);
    msg.setSourceEntity(208U);
    msg.setDestination(17366U);
    msg.setDestinationEntity(3U);
    msg.plan_ref = 1715340333U;
    msg.id.assign("BUQWTGLQXRHSDCHPKFDJLUVITFGBMTLRYUPPQSRHEVNDCRCMIKLI");
    msg.memento.assign("HFBNSABICCYTYXVVDHEGQMELOHWBZEEGMEJJQTXCGQBTQGCIMVRFRVNOHDLWDTNNNMMJKLIGYVUCPKTOXBAHIYKERBISLTLSGPNJWESCPXAMSOGVLSQPKDIDZYUUALUMUXPLFRCFXJZWFKBJYRKIVMHEDYQHOOZPBJOFFGWFRQDPHMRZZSUERTDGAVOJXTYPIXCKMSUB");
    msg.group_name.assign("EKBHZJYKJMSADROVAXDDINXFRETPUCQKEOOLDUOCL");
    msg.formation_name.assign("UWDVCZEUZNTCKEKFEMOAZEJPIIUQJYIYCDMYFGYULEDMPOGVRHOFYQGCJCRRSSAXDKCGQYOVLPHRXBN");
    msg.plan_id.assign("XWRDZRAHTAJOQRFIPZNUBDAIGHHGACBLZNKLXORVIQHVEKMHOBQWKHIOXMVGTBYSMIVYRFIWBVAPSLQCGHESQZVULECRPYGYZTDXTCLFRFNYLJPQUUJEKCBHPMZSHFFSJDISNDJQFYTEUGPWQNNWXWAXC");
    msg.description.assign("VJSQXBRERKTCEMPDJBKCC");
    msg.leader_speed = 0.8212955745615209;
    msg.leader_bank_lim = 0.3811934293334964;
    msg.pos_sim_err_lim = 0.15889412839370098;
    msg.pos_sim_err_wrn = 0.024769455809946828;
    msg.pos_sim_err_timeout = 974U;
    msg.converg_max = 0.9749628690404195;
    msg.converg_timeout = 25487U;
    msg.comms_timeout = 12574U;
    msg.turb_lim = 0.48538596790956223;
    msg.custom.assign("FFWNNLSJUGZRPJMKMTPMXMYLCBKAOUZAMBIRWANNEAFZPVCUPVAWCGZCQBUJIYORPGWSXLFCROGTDQKTCILTOXOMYNHGYIUPSZYRZ");

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
    msg.setTimeStamp(0.39656192654894673);
    msg.setSource(65398U);
    msg.setSourceEntity(54U);
    msg.setDestination(29156U);
    msg.setDestinationEntity(93U);
    msg.plan_ref = 18354944U;
    msg.id.assign("IAIKAYGFHAVGSSGLEKMJNLJQIWCBDMQEIQJIOTDVMDFIUASCLFMCACSMBGAQYDNUREWOLTXJRXZHZNKLJVNEGFFWBXLNPIYXZLQKXHPGDBZSRHDOHEIPVHXDJWYLWOMQOEWYBPFKBKOUUOUSWSMVWZGIPTZYGFOMONZUJPTVREKTADAURWAVQQCZUGJEXCPRRHUZCTPKPTMTXRHSDBYNMRTVTYNJCCVLFZSOQDPIEBSBHNXRYGLCQJHKVWEYKF");
    msg.memento.assign("YSDOIEJJDXQCNOQLQNBHDDNAFVTKOVEEYFCWUWZCTRAVVAAQSWHIRBOZOJUCKZSOKFMPEKUWLXKQUUUJGXRGYSTKRR");
    msg.group_name.assign("ADFMKURXGSATOVRQTJZAMYUKUCOANSENDXYOCKQTBZZMWXXVENPQENOP");
    msg.formation_name.assign("WPMGJJRNATOJTGRWOQBAJKZXKMLIIQBXCMNPSYTJVEUSLJTOSXYMDDHYNCTTYIEUMXGWPDPFOHRKIBMCAZRNCOBQRQXEFFZHLDTUAHVFBSEEBXIWIJSDSXFRFOSZWBGBVPDZGWCGPNTIKJCHKLKBAVQPQHHRMVTGIEQYUINJLNAERUYYQYFAMRTFPJDMQO");
    msg.plan_id.assign("PPUCHRWPVDEFQFZJYBFVQLVEVMIWNKYIKIFLXJJZZZTDBVOYKDDSOPACWOVBJLNQZFJSEYFSCLOMEWJSOMHRXCQUXMPIRWGROLIAQRHJXSJMICTYQIXUAUHMOHFWWCKZUUSHTAGWGDLVABWENSTEPSHLXAQAUFQMWSCRYSOTAJIXQHBHNXAGRKBNUXGZRIDDPEQOTKNDYPPNADBFZGYTHF");
    msg.description.assign("SAKFTWTHTQRQINGJSBNIMEMADVEEPCMBIBKANOYNYONHHXRHEDLXDGLRRMEZALTRHWHOJRUFUKJUGPZQYFKNDCTBZET");
    msg.leader_speed = 0.05846853375768113;
    msg.leader_bank_lim = 0.7480188341103944;
    msg.pos_sim_err_lim = 0.7782893405724842;
    msg.pos_sim_err_wrn = 0.2618307208080455;
    msg.pos_sim_err_timeout = 14415U;
    msg.converg_max = 0.8412973088027031;
    msg.converg_timeout = 35237U;
    msg.comms_timeout = 3093U;
    msg.turb_lim = 0.3153109085697704;
    msg.custom.assign("AWJTOIXKDVOAJCPXYUHALOCARSTWHOXFDNTTKLQMBDNFIPQJKQHTYPFMZPWJITNBXKQVVYOIDXUWLNRBTVATZDVKKZYACBWKFAUYBOWPCEGDIZXMVBEKROFDUEKCLCOSVNJMUFVPBTEQBEGUQEDYMWLCHUXHSRJWNRGDGZLH");

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
    msg.setTimeStamp(0.9635495612257068);
    msg.setSource(18730U);
    msg.setSourceEntity(177U);
    msg.setDestination(21907U);
    msg.setDestinationEntity(219U);
    msg.plan_ref = 2396896258U;
    msg.id.assign("XOVFMNCMEGBZVOIUPYWDWEYFHAAKNFUHFNZPBZGOREBPRTXFQIWWIXNCPXTKHVEUEJQDIBFBITPVBFSANVKGKKOGDMNHAKZGOWZRLFNVELSDSUDBTHIUQLDJBWXPGYURSRLJODYNCSMGOOHDVANJMACHCIOJZWJWTXTYKQMCABBLSQRPZTPUQHAILMCHSMTNIYYVRLXQJXYPTRZUUEIGKC");
    msg.memento.assign("HUITYFJOJLNOGTMIBJJBYOEBDSXQYDFVAZAONRTRWFTJFUTDZPVLZMQDAFMTIGSJIFEHONZHCDAWCRMNBEYCBUAAECJKEORUAUAQMDKIXWPONXVLFGPCUQYVUMVRPLDJRVVOQXBGITOUEMAPRTZMWVRCNXPEKKKWPZMWNNSSSBWBEYHHBGLGJSLQKBXG");
    msg.group_name.assign("SFIKBYNIVYVJHHQCQRKJWQECGESMRIMXSAFTONJSZGLKOQPAKLHUIGBPDVRCFMJCMRAQZJZSOXGJZGHTNYKMVBWLGVIMJLRJIYOBX");
    msg.formation_name.assign("CLIUTFBMCMYSBQPUEZHBJWIRKSFLQPTAMPSEINFRPYDJKRITZRMQJNHSLKATEFHHTJXURYMFZZBCRVGPBVXOVLCMVBCSJUMEOWZUZEIWVWVGIWHDGEVXUAJZWXTUHGWEGNJOZRUIYAANXCJTSMQHKSTFFWNKJAHVBEQKDXYPLRNFNTGPHQNBZDSPDPOINQQEKGALLYUYQXDFOVTWRCYXKV");
    msg.plan_id.assign("LWKYLHDCMBXKGZWJORHHFKMTTKUEFVIIAUYTCSYPDPAKRFDXSFGKMGSPUVNCVIRYYLZCUXDCTTXJMPFVYJJHYUDEUBPNRWXAONUIHLOJNCF");
    msg.description.assign("UXICXKACQIZFKRQVYVCIILBJDU");
    msg.leader_speed = 0.5740047081275802;
    msg.leader_bank_lim = 0.8560036081995148;
    msg.pos_sim_err_lim = 0.4604414810501757;
    msg.pos_sim_err_wrn = 0.1390938008543644;
    msg.pos_sim_err_timeout = 20446U;
    msg.converg_max = 0.40462635126031277;
    msg.converg_timeout = 12794U;
    msg.comms_timeout = 52840U;
    msg.turb_lim = 0.7714537839503248;
    msg.custom.assign("ITGFCQBLWVOZYOZHVKHFEQHGKGBSLEPFODYTZGEQCPCZYWYXWJSNTAXSHTHJYRNKQEDTSGXSHBEKKAAHRJOQIYUSWQNABDFBWOQSXWBVIUYMUZKVOMLCEEWTPUPPIMJLFRECQMERLMDCBZJNNMHVHPTMLVTUJXANHQSABVKJRIZALKBNRUOBOGXWRWFPCDYJVIKXCLFZTCNVVXUYDAMGIOL");

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
    msg.setTimeStamp(0.12033378192713584);
    msg.setSource(29789U);
    msg.setSourceEntity(36U);
    msg.setDestination(2625U);
    msg.setDestinationEntity(11U);
    msg.plan_ref = 43212001U;
    msg.id.assign("BEKARAAEMRPLDYCTHZUVIFIDDBQQOKGFFJYWOPEFIDRXHKQKWJPNCQAUVMXWFUUYGJMURBXSFPBTWPGIENNWJARPKASVBLLIHZKYJTCIXXNFKBZQQSNVSZHJOBDGZZJGCLVVUHTOSZVQULOYGXADNOWAWXMRXDLHSHKYWMQSAYIOEIOALTQEOPUREZRTCFCDIMNRTTSEFBCCMFWGKECZKHNPGXMTRUBHNTCQGPOBLM");
    msg.memento.assign("EEJPQWMKHBHUNRQJTTLCOWPXFAAILQQJTYWGBVYTWMLUREYZRMSTVKUXLEYGYWHVGONMNFKEUHFSUFZNOPQSJBSFFMZLQAKMLRTTAJWXIGRWHKEH");
    msg.control_src = 5807U;
    msg.control_ent = 174U;
    msg.timeout = 0.7384016666699017;
    msg.loiter_radius = 0.2763540588049592;
    msg.altitude_interval = 0.9759483124310875;

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
    msg.setTimeStamp(0.4168222303138769);
    msg.setSource(60686U);
    msg.setSourceEntity(6U);
    msg.setDestination(14306U);
    msg.setDestinationEntity(211U);
    msg.plan_ref = 454006481U;
    msg.id.assign("WZQFIHSCIZVYDKGPNKNMYCGVBJMSLDSVWXXIAPNRQGDENIBUJXKBPWBWKROFXTQYHVWOUZBJTGHJZANHLMCLWTTLWOEFHTTMIVAAMENSHQUTZUFRAQSIZBOXBKDVISZEVFLGYAKRFDCAORCUHWBPEUPYPLYJGDRADMXTCJISMLRBCBKOOJXUJGATKFDWGH");
    msg.memento.assign("NSSHDLRNBRKPOJTPRMQZUKF");
    msg.control_src = 21189U;
    msg.control_ent = 139U;
    msg.timeout = 0.8439591213997799;
    msg.loiter_radius = 0.694521379846767;
    msg.altitude_interval = 0.747853729158098;

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
    msg.setTimeStamp(0.8581805137856439);
    msg.setSource(45377U);
    msg.setSourceEntity(33U);
    msg.setDestination(42853U);
    msg.setDestinationEntity(234U);
    msg.plan_ref = 1786913326U;
    msg.id.assign("NJOHSFVDLVCSCQTCAQGJQGNKPEXBGQRERVXWYKKXRIRRCIZUZKLPFIEGOBNWAOYTYYXGYWVUSGCVYKBTSRSMTPPGEMXMNSTAAIAORVAMDUOH");
    msg.memento.assign("MZOEUQPBTOLMLVBADERZUSIDBLPFUVREYZKHTJQWJTAFXQYNAZMADRCJZVUVJAFIPYMFCEBPLBWGGHAUMLHHNMNQTDSYWFCUUXKIKSRYDZVXOQDWIYPUVGC");
    msg.control_src = 36313U;
    msg.control_ent = 201U;
    msg.timeout = 0.1654406485230867;
    msg.loiter_radius = 0.16697087343416472;
    msg.altitude_interval = 0.03877990992051372;

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
    msg.setTimeStamp(0.45866647651899284);
    msg.setSource(55976U);
    msg.setSourceEntity(32U);
    msg.setDestination(18211U);
    msg.setDestinationEntity(139U);
    msg.flags = 53U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.015802436428195565;
    tmp_msg_0.speed_units = 193U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.15180583675407178;
    tmp_msg_1.z_units = 116U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.7170022697059045;
    msg.lon = 0.57239816979073;
    msg.radius = 0.22932681928118293;

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
    msg.setTimeStamp(0.8698252751083948);
    msg.setSource(52802U);
    msg.setSourceEntity(205U);
    msg.setDestination(12445U);
    msg.setDestinationEntity(8U);
    msg.flags = 78U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5448516373081206;
    tmp_msg_0.speed_units = 184U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.2908556313398146;
    tmp_msg_1.z_units = 192U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8692094356604034;
    msg.lon = 0.6014569771741797;
    msg.radius = 0.3721466901883017;

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
    msg.setTimeStamp(0.06441977800987231);
    msg.setSource(12634U);
    msg.setSourceEntity(146U);
    msg.setDestination(59681U);
    msg.setDestinationEntity(174U);
    msg.flags = 192U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7012786315556945;
    tmp_msg_0.speed_units = 2U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.3849779280799296;
    tmp_msg_1.z_units = 61U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.860173335919493;
    msg.lon = 0.7975056284384667;
    msg.radius = 0.315182283815719;

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
    msg.setTimeStamp(0.31906109090159496);
    msg.setSource(41415U);
    msg.setSourceEntity(93U);
    msg.setDestination(34680U);
    msg.setDestinationEntity(84U);
    msg.control_src = 26457U;
    msg.control_ent = 142U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 49U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.9103098541521143;
    tmp_tmp_msg_0_0.speed_units = 74U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.7579586957790273;
    tmp_tmp_msg_0_1.z_units = 50U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.6938444413766145;
    tmp_msg_0.lon = 0.9891213559679332;
    tmp_msg_0.radius = 0.6189366313983472;
    msg.reference.set(tmp_msg_0);
    msg.state = 158U;
    msg.proximity = 247U;

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
    msg.setTimeStamp(0.20358459466576684);
    msg.setSource(64880U);
    msg.setSourceEntity(62U);
    msg.setDestination(54446U);
    msg.setDestinationEntity(16U);
    msg.control_src = 16899U;
    msg.control_ent = 212U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 172U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7866917492473313;
    tmp_tmp_msg_0_0.speed_units = 110U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6807877166429743;
    tmp_tmp_msg_0_1.z_units = 216U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.06990843823152815;
    tmp_msg_0.lon = 0.34215478775115926;
    tmp_msg_0.radius = 0.18345216313042567;
    msg.reference.set(tmp_msg_0);
    msg.state = 242U;
    msg.proximity = 230U;

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
    msg.setTimeStamp(0.6776307357344309);
    msg.setSource(65268U);
    msg.setSourceEntity(239U);
    msg.setDestination(6631U);
    msg.setDestinationEntity(53U);
    msg.control_src = 44380U;
    msg.control_ent = 244U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 114U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.617996831792785;
    tmp_tmp_msg_0_0.speed_units = 191U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.11802420613395881;
    tmp_tmp_msg_0_1.z_units = 126U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.9575503218625077;
    tmp_msg_0.lon = 0.8779120907880854;
    tmp_msg_0.radius = 0.5316311263985171;
    msg.reference.set(tmp_msg_0);
    msg.state = 184U;
    msg.proximity = 9U;

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
    msg.setTimeStamp(0.8212168896069719);
    msg.setSource(5030U);
    msg.setSourceEntity(143U);
    msg.setDestination(3492U);
    msg.setDestinationEntity(237U);
    msg.ax_cmd = 0.728268696703349;
    msg.ay_cmd = 0.8597327580959563;
    msg.az_cmd = 0.28013841533196204;
    msg.ax_des = 0.5025233725999294;
    msg.ay_des = 0.9004696736500744;
    msg.az_des = 0.03182278408440231;
    msg.virt_err_x = 0.22638412635180116;
    msg.virt_err_y = 0.2322645446853886;
    msg.virt_err_z = 0.992599879442316;
    msg.surf_fdbk_x = 0.4396099107895781;
    msg.surf_fdbk_y = 0.13727651379197026;
    msg.surf_fdbk_z = 0.26747777360412595;
    msg.surf_unkn_x = 0.874955464502649;
    msg.surf_unkn_y = 0.8425734980460426;
    msg.surf_unkn_z = 0.8604499131422779;
    msg.ss_x = 0.3976609959228866;
    msg.ss_y = 0.32975049551548086;
    msg.ss_z = 0.730719681277372;

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
    msg.setTimeStamp(0.42491914846755097);
    msg.setSource(4383U);
    msg.setSourceEntity(165U);
    msg.setDestination(48539U);
    msg.setDestinationEntity(141U);
    msg.ax_cmd = 0.6990152348597308;
    msg.ay_cmd = 0.46642986153806;
    msg.az_cmd = 0.23421566519098158;
    msg.ax_des = 0.2668765324712252;
    msg.ay_des = 0.012507687942532097;
    msg.az_des = 0.09522035995659883;
    msg.virt_err_x = 0.8362142091363496;
    msg.virt_err_y = 0.28505031189479213;
    msg.virt_err_z = 0.19721147346811818;
    msg.surf_fdbk_x = 0.843883411686844;
    msg.surf_fdbk_y = 0.9691275768343293;
    msg.surf_fdbk_z = 0.583304244157281;
    msg.surf_unkn_x = 0.3476917300224944;
    msg.surf_unkn_y = 0.9309598033285603;
    msg.surf_unkn_z = 0.10012050366236025;
    msg.ss_x = 0.5443236615823485;
    msg.ss_y = 0.9454755939916876;
    msg.ss_z = 0.5975832841351737;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ZHBFVZYZTLBDMXCDLCXXWTIHBY");
    tmp_msg_0.dist = 0.2748734697052303;
    tmp_msg_0.err = 0.723266107373464;
    tmp_msg_0.ctrl_imp = 0.6221594496795791;
    tmp_msg_0.rel_dir_x = 0.5256362828040199;
    tmp_msg_0.rel_dir_y = 0.6655975387202382;
    tmp_msg_0.rel_dir_z = 0.04557659347607923;
    tmp_msg_0.err_x = 0.05758372620556795;
    tmp_msg_0.err_y = 0.6003041576345961;
    tmp_msg_0.err_z = 0.9691401020297816;
    tmp_msg_0.rf_err_x = 0.9457583545567171;
    tmp_msg_0.rf_err_y = 0.3090723732903905;
    tmp_msg_0.rf_err_z = 0.6221210979027937;
    tmp_msg_0.rf_err_vx = 0.5565199274745557;
    tmp_msg_0.rf_err_vy = 0.32630740906946576;
    tmp_msg_0.rf_err_vz = 0.8558083125709633;
    tmp_msg_0.ss_x = 0.5860445221969743;
    tmp_msg_0.ss_y = 0.6379419464430476;
    tmp_msg_0.ss_z = 0.7704001581291385;
    tmp_msg_0.virt_err_x = 0.33680280520089567;
    tmp_msg_0.virt_err_y = 0.4109365578197164;
    tmp_msg_0.virt_err_z = 0.758829897740588;
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
    msg.setTimeStamp(0.48623077593307773);
    msg.setSource(60622U);
    msg.setSourceEntity(57U);
    msg.setDestination(27803U);
    msg.setDestinationEntity(96U);
    msg.ax_cmd = 0.6821759336209576;
    msg.ay_cmd = 0.500933410573547;
    msg.az_cmd = 0.9404789833597378;
    msg.ax_des = 0.43806702454903945;
    msg.ay_des = 0.9042681930060545;
    msg.az_des = 0.9544823040925301;
    msg.virt_err_x = 0.6356401589052166;
    msg.virt_err_y = 0.4924354072358996;
    msg.virt_err_z = 0.7070173981306201;
    msg.surf_fdbk_x = 0.9410465910286577;
    msg.surf_fdbk_y = 0.7072433062455654;
    msg.surf_fdbk_z = 0.5375159598044704;
    msg.surf_unkn_x = 0.9830787601573174;
    msg.surf_unkn_y = 0.621349662439581;
    msg.surf_unkn_z = 0.17261094167757596;
    msg.ss_x = 0.6705285485521345;
    msg.ss_y = 0.3198364314716805;
    msg.ss_z = 0.721627810250077;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("LBAMSQWXLHKUKOUMRNYQEMYYWFATQHRKBHKLXQHQUYBIFZPZGSNPRYJPXDSGCSIPMOGAUWNZUAGFDKBADUZTADATOLRITCLFAZPNBNVVHQFOGPIEJWSRVOWMIAKEDVOSBJXTTGCDRHVDCIPJNUOLJOCBJRESFKMZURWGXHIETEKKBGLDECHWJVGBXEDZHSMACXESYFXUQLV");
    tmp_msg_0.dist = 0.9490889837900347;
    tmp_msg_0.err = 0.7975964938300609;
    tmp_msg_0.ctrl_imp = 0.7847318271808089;
    tmp_msg_0.rel_dir_x = 0.09517288311046923;
    tmp_msg_0.rel_dir_y = 0.44451600049073603;
    tmp_msg_0.rel_dir_z = 0.7967617892992851;
    tmp_msg_0.err_x = 0.14446954708448767;
    tmp_msg_0.err_y = 0.10961066521026386;
    tmp_msg_0.err_z = 0.1430291960959632;
    tmp_msg_0.rf_err_x = 0.09930851903382232;
    tmp_msg_0.rf_err_y = 0.712797018510277;
    tmp_msg_0.rf_err_z = 0.35448724949216315;
    tmp_msg_0.rf_err_vx = 0.702098445459688;
    tmp_msg_0.rf_err_vy = 0.267142542234465;
    tmp_msg_0.rf_err_vz = 0.10066999459916737;
    tmp_msg_0.ss_x = 0.08844035976306341;
    tmp_msg_0.ss_y = 0.3259332893297229;
    tmp_msg_0.ss_z = 0.22549440364406792;
    tmp_msg_0.virt_err_x = 0.10912734437818095;
    tmp_msg_0.virt_err_y = 0.23174812086286434;
    tmp_msg_0.virt_err_z = 0.5274070795704451;
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
    msg.setTimeStamp(0.5458795330506305);
    msg.setSource(53911U);
    msg.setSourceEntity(96U);
    msg.setDestination(17194U);
    msg.setDestinationEntity(36U);
    msg.s_id.assign("TIKXLDSSWCNFJAYVHFUMHXZVKUGISWRGTNIPV");
    msg.dist = 0.5818748678956265;
    msg.err = 0.6935112212964458;
    msg.ctrl_imp = 0.4856125039175453;
    msg.rel_dir_x = 0.6000007854055894;
    msg.rel_dir_y = 0.7847262499568326;
    msg.rel_dir_z = 0.8203468024340193;
    msg.err_x = 0.9446610352062618;
    msg.err_y = 0.4578436292491439;
    msg.err_z = 0.9805672020892727;
    msg.rf_err_x = 0.8767962803883085;
    msg.rf_err_y = 0.9670224052550914;
    msg.rf_err_z = 0.041928913264442036;
    msg.rf_err_vx = 0.8029433680584617;
    msg.rf_err_vy = 0.9256764278057255;
    msg.rf_err_vz = 0.7303652969512715;
    msg.ss_x = 0.8853767228263812;
    msg.ss_y = 0.1754993050064353;
    msg.ss_z = 0.661807861080772;
    msg.virt_err_x = 0.3716723349556976;
    msg.virt_err_y = 0.22516082310692664;
    msg.virt_err_z = 0.6098966094868639;

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
    msg.setTimeStamp(0.5189457567175209);
    msg.setSource(43912U);
    msg.setSourceEntity(82U);
    msg.setDestination(63909U);
    msg.setDestinationEntity(132U);
    msg.s_id.assign("JYGEOUHWDUUZPHOTWKPEVJQWBAWGBVRQLKSAUYBVMVKMTYCKFOYILVBSMHCSPGKZGHPNRPNEICLELFTTNZKLCVMDBOXYELGDIPRRZMATDWWFFXWXGPBCSITHUIUZIRZNXUCVHWOFEHOERHCUBPQNMYSZPXHRMJMTDIN");
    msg.dist = 0.9702232497816407;
    msg.err = 0.6362203206144252;
    msg.ctrl_imp = 0.9102910623335667;
    msg.rel_dir_x = 0.427768215517186;
    msg.rel_dir_y = 0.46571092218530274;
    msg.rel_dir_z = 0.4027165792140366;
    msg.err_x = 0.9372692798079909;
    msg.err_y = 0.9494143395345607;
    msg.err_z = 0.015141270941845364;
    msg.rf_err_x = 0.5115442659055811;
    msg.rf_err_y = 0.13886842888435547;
    msg.rf_err_z = 0.3327737989497159;
    msg.rf_err_vx = 0.5666332770892617;
    msg.rf_err_vy = 0.09939457354306303;
    msg.rf_err_vz = 0.2740578049421962;
    msg.ss_x = 0.4524583859337479;
    msg.ss_y = 0.23487721369945413;
    msg.ss_z = 0.7055172692539691;
    msg.virt_err_x = 0.0388139556480126;
    msg.virt_err_y = 0.23693320175988297;
    msg.virt_err_z = 0.9704080394947356;

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
    msg.setTimeStamp(0.3005267094112978);
    msg.setSource(61145U);
    msg.setSourceEntity(169U);
    msg.setDestination(54476U);
    msg.setDestinationEntity(4U);
    msg.s_id.assign("YTIBEMPNERSUZLCGLZFKJSIVOMBOVBMDMXMIWWRANCQU");
    msg.dist = 0.07432073933433847;
    msg.err = 0.5056790757634169;
    msg.ctrl_imp = 0.6303614250965488;
    msg.rel_dir_x = 0.6631752759503355;
    msg.rel_dir_y = 0.5400500304823814;
    msg.rel_dir_z = 0.7967803294011812;
    msg.err_x = 0.5637598672608799;
    msg.err_y = 0.412677465677468;
    msg.err_z = 0.5099354714298602;
    msg.rf_err_x = 0.3857128774149874;
    msg.rf_err_y = 0.7653020749362033;
    msg.rf_err_z = 0.768667754937652;
    msg.rf_err_vx = 0.6504511865538128;
    msg.rf_err_vy = 0.8657566526060351;
    msg.rf_err_vz = 0.4438028235131256;
    msg.ss_x = 0.623284222439843;
    msg.ss_y = 0.4127410311465045;
    msg.ss_z = 0.964588025595815;
    msg.virt_err_x = 0.8449702366430296;
    msg.virt_err_y = 0.41479114340235745;
    msg.virt_err_z = 0.05472628755214681;

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
    msg.setTimeStamp(0.981999184772384);
    msg.setSource(3858U);
    msg.setSourceEntity(174U);
    msg.setDestination(7437U);
    msg.setDestinationEntity(138U);
    msg.plan_ref = 2192234319U;
    msg.id.assign("IDZFGMTJYFPGAHNUWLPCPYIGUFWPZMRZCULCTIBOYFIQVBQRBNGKASMJQWVQUXQASXOOPDTDWBKFIUMQERXLMSSZHHXXYEXLOVXHJRSRUDSZMIUYJMINILDVZKARAKUPNTNHBZCKSVONQL");
    msg.memento.assign("EDVEDQFRUGMPPGBTXKYUMOVKAQRKSFBCNRLMWCSUSVSEWRHXMOBQDOWHWFYEEWUNXNXLXKTOZQDFGLBPUXOQNAPITWLECZUMABTJUNFERALLZJBJPFZFMJVYJHODDGFATFIHZRVIQSQAPHLWNWNUKCEZBMIMATLCYDBGLFOVCKIPTYZDASYGMKJYJZJCIQIXV");
    msg.timeout = 53943U;
    msg.rpm = 0.5265866561768071;
    msg.direction = 206U;
    msg.custom.assign("KRZCRGINOQCFTTBWALIIHNGRZBKVSYXPUEKVOBUJONYGEOTLYMUPPUWTMAPEBSSXAFKNHWYAWGXMBYJPRDEZTOIFHQMHUGYZNLQQVOXKTEBLUKZAUKHLUJSXFTRZADXPAVDCQNCOVYQQEBZOYJQMPFNFTFRSPNCXYSZXNGRCYRISSV");

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
    msg.setTimeStamp(0.252639404142014);
    msg.setSource(7045U);
    msg.setSourceEntity(26U);
    msg.setDestination(55857U);
    msg.setDestinationEntity(0U);
    msg.plan_ref = 1142412451U;
    msg.id.assign("NJWYVZPQLQXXKOCULTCWOHXJIPMUGEARKKAZRTABSCCUKUBT");
    msg.memento.assign("FLLPZKUGSSJLUQKIQIWPDUWLEVYPAXOFWPEKVLNCVRXAPLIGSYBITMUVNEQ");
    msg.timeout = 35216U;
    msg.rpm = 0.8180652725879541;
    msg.direction = 72U;
    msg.custom.assign("MSELPNJPULORGHHYKFMCMVODQQIYCHSSKNALKDSZJYKNMGVTDKPFHFCNTVLFXOUHYMXLRJWPWICLQBMORBIEOVXYPJURXBWWCZAXZGVAGBDEMJESJUZYWSUEKBEZIRWVNIDGODUAFEEZSNGNHSFEHMQZAKTJQIOUAQUAZBAPTFGKITTQPOWLVVSGHBXPDCNOHAIQLOKXRMYEMFLTYRJVBPWCC");

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
    msg.setTimeStamp(0.45971168646891525);
    msg.setSource(42640U);
    msg.setSourceEntity(134U);
    msg.setDestination(43818U);
    msg.setDestinationEntity(46U);
    msg.plan_ref = 1371176824U;
    msg.id.assign("AGULAVTZBUKGYKXQKASPEVOMPQBHMKFRXQPYLZIRCFTDFYGTVTNCMOADGRSUXONPXESJAEWJORLCELEPNRJEZMJWRSMVXCGZKGLZARBAULJQPIMBQPBMZXDGRMPLUVFZDYUONRETIVTQRTFLYKDCKBOYOUQHEHKYHNEFDCSPIXOOSDEHIJHXMGHNSAYCFWGTDWFHWAJJIIGBACKZSXCBLPZHHFWICVUBWSQZ");
    msg.memento.assign("SHZUZUOXMXZGBJCTJCCIJCYEPARQGGTE");
    msg.timeout = 9706U;
    msg.rpm = 0.384408613193405;
    msg.direction = 66U;
    msg.custom.assign("JIQUCOHMFUBVKQYZPNQPQWUMFKAANWYQDAUAMLQDPZNVIKEBCNJPTZIOXQDKKDMLWTTMASCVXYOJUFZQCGHFTGDWPWTCYEDNOPJLQZVETBOHNGRUHQYUGAABSRWBPZUOCIYCTMXIHCSYROIHBHWMAVDFORHEVXLOVUHKXEYKYWDEYFNJILLBRMGAADBNLVL");

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
    msg.setTimeStamp(0.29509398481160065);
    msg.setSource(61566U);
    msg.setSourceEntity(170U);
    msg.setDestination(36918U);
    msg.setDestinationEntity(87U);
    msg.op_mode = 224U;
    msg.error_count = 210U;
    msg.error_ents.assign("EMNCNTHAQADQGOCYSIVYPSPZYLTUCJUHLSIQQCHPRXMGXDXCAEVVGDBZMRTFPPSVLFFAQRKYZKVFMJBVWPJIUYLAPRTWEAXTWMVYTUKKKHLQZHDVJOJGCIWFMEDPFFIPAHQNKUKAWIDDKGMJUJHAXBTMCUKYUBRLDBOMGWLQYNJESZOEDHHZNLDNXGWTRONVOXRBWMZSRBWBRFWQARSPHGCITKNLNGEEOFUUNIBZSYIXGTBOXXJQZ");
    msg.maneuver_type = 28793U;
    msg.maneuver_stime = 0.16659647464748795;
    msg.maneuver_eta = 28191U;
    msg.control_loops = 3795903932U;
    msg.flags = 226U;
    msg.last_error.assign("JREGJNECXAHVDWOLIBPPJPR");
    msg.last_error_time = 0.6328064845429636;

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
    msg.setTimeStamp(0.18724742400820504);
    msg.setSource(48533U);
    msg.setSourceEntity(166U);
    msg.setDestination(24816U);
    msg.setDestinationEntity(174U);
    msg.op_mode = 124U;
    msg.error_count = 164U;
    msg.error_ents.assign("OXPYFNVANEPURUXJGRVNAOGTGPVCZZXVLOOISWJVDVRFXGIQLRWYUMYASMTFJASJIHEPHNYEVRFLDIUKAXKCPITSDWXHBPVBEFCHUCQPWWPHGKWGPZZYXBQNBEHFCXBUYZDAGXNDBYZWDDODEYTFLFOZKVTKMHFQZICQYRGUBKOKMQNJSTCCRJGT");
    msg.maneuver_type = 37864U;
    msg.maneuver_stime = 0.9216765357826008;
    msg.maneuver_eta = 2789U;
    msg.control_loops = 2174527912U;
    msg.flags = 70U;
    msg.last_error.assign("WBNUCGQFPQVIQJOWLGGWCIEVSZFYRHHYUSARKRPTBKQQ");
    msg.last_error_time = 0.19980452395961368;

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
    msg.setTimeStamp(0.6840834649295997);
    msg.setSource(48812U);
    msg.setSourceEntity(128U);
    msg.setDestination(2779U);
    msg.setDestinationEntity(73U);
    msg.op_mode = 239U;
    msg.error_count = 207U;
    msg.error_ents.assign("KJXMLNMCWLEGBQPCDPDALXXBUHWNKNKLFUDLYTDVQZTQYEEFIZZXXCKIINQPFSHJMKFYOIVNRTXKOYBPAHSUJMYLAKMWMYZOYUSWCPXRSFTKEIQMGBJRHEHGPOIVZJHPIDUBOXROVGQWHNPDTGKAHIVGEWBEEVUNNFPEOSCTTBLDOHCUNWVTEBO");
    msg.maneuver_type = 38834U;
    msg.maneuver_stime = 0.0980723704473857;
    msg.maneuver_eta = 17266U;
    msg.control_loops = 3421559967U;
    msg.flags = 115U;
    msg.last_error.assign("QHFKEZZJRNIFEMMENMEUKXTSPHHUTULRRMFGYPQRBKOVCGBHINLWNLQKXAUQMQSNCXJUDMNNZZKDIFDYBTCZGVYBXWPLHCTNTPEBDUADIVVGKTLVVXWISJPSFOACJAJXCMQGRUGNLJLXBFRLIQYYTWRECQYJKWPVLOQZVYHOTPOAJODQMHPFKEREZZWDAKUMBGITIWASNZCCYAP");
    msg.last_error_time = 0.7135063249293168;

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
    msg.setTimeStamp(0.10418184713524736);
    msg.setSource(32012U);
    msg.setSourceEntity(201U);
    msg.setDestination(35641U);
    msg.setDestinationEntity(225U);
    msg.type = 67U;
    msg.request_id = 47252U;
    msg.command = 165U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 29661U;
    tmp_msg_0.lat = 0.23418166270340546;
    tmp_msg_0.lon = 0.9205946568857658;
    tmp_msg_0.z = 0.8577998229228705;
    tmp_msg_0.z_units = 63U;
    tmp_msg_0.amplitude = 0.7808401500552073;
    tmp_msg_0.pitch = 0.5390164796482927;
    tmp_msg_0.speed = 0.5123591452678438;
    tmp_msg_0.speed_units = 106U;
    tmp_msg_0.custom.assign("TIXBVGWHKTGNREJPLBBFWZVKNHZFRYGHBLLJCSGKADTXCMOQFEWUWSDTAJKRWFRRYOLPKSSEOCUUPBQABGXZPKQUZFCYYMGFOITZFEOUXFDCNRLUZMDOXZTHPMRDYQJHRYZZRAQZPBNVYKNVCAGJBBLWYIGAITQVMNLDEJPTHCFMWNAWCIAMXOOWJEIEOSSXJJUNUHVSTBDEHHCVNPPKDIEUA");
    tmp_msg_0.plan_ref = 232083369U;
    tmp_msg_0.id.assign("CQFQVMLRTJBEGGXXMSKFYHQDBUXDVBNPMVIRLCAVAUQYEQTTGZRHZCAUNBIODJHIEZKOPPQUKQDNUDEHGNDFHHGTFSBUKUVSDTTWJPXSFZXYSZALFPSTWSFOQEETALBCWAZRACQXGCW");
    tmp_msg_0.memento.assign("ZTCCAVAQLPKVRPXBMIHLIBVLVKDKZLUFTJGHUGDOGWQKFEOSXNIPFCXEMWSMVMAOUAYSZSVXZWPLECPEJPCXJBHLSIKQIMJDMACJCGIPGBWFHNVTITHNPNZFXZFIG");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 60834U;
    msg.info.assign("ILNDUXAAKDKWQNWFYQUTXJATKIFWETUJKVBUMHPRXCWGDTRPZXZXD");

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
    msg.setTimeStamp(0.02301380982629153);
    msg.setSource(29662U);
    msg.setSourceEntity(0U);
    msg.setDestination(32732U);
    msg.setDestinationEntity(208U);
    msg.type = 135U;
    msg.request_id = 14910U;
    msg.command = 229U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 20571U;
    tmp_msg_0.lat = 0.3070675043103216;
    tmp_msg_0.lon = 0.5163272837818729;
    tmp_msg_0.z = 0.009325581595933441;
    tmp_msg_0.z_units = 247U;
    tmp_msg_0.speed = 0.3042832229201776;
    tmp_msg_0.speed_units = 128U;
    tmp_msg_0.roll = 0.7191234597403815;
    tmp_msg_0.pitch = 0.7367434979302531;
    tmp_msg_0.yaw = 0.09605976981421926;
    tmp_msg_0.custom.assign("UTGHRFOKIMHLGFCILWMGUXXFSVTTOGSZBUJRCNBLMMOXLAAKBISSJBZWGHDUEKUQBFRXZHOCRBEHXSJAERMVFIVIVYEQOTRDQYYZFIHLBEERPNACTZGIJPKMRHYGYPDJLPYHDQFKMKZCHFJYJTRTILPGADLNNKSOJRPXVADWVDEUUOZAOXWAMPNVYQZWPUSXTXENLUFQCEWFQJQBAMKIIQSWPUZOKDMTCYGDZHLYCXV");
    tmp_msg_0.plan_ref = 1748991177U;
    tmp_msg_0.id.assign("BKYVMFBWIDYMYYAYQUQWXOWBGJAXQVDPSJFHJNLDQSZAXOIYJSHQVOHB");
    tmp_msg_0.memento.assign("XGFPTINKBYXFFAYSUCQDJXYGZQNXXUTARYECIGOMHEZQWGAPEDFKWQFNOLGCXTOUXVQLMSNZPQPRAXTIJMCOJMAVWAEWHZVYBSMGLSCSL");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 55918U;
    msg.info.assign("ZQOUXKGWUSMSGVBWMFIDJBNOVVYKTZFTIGTFFXXMNNTUYIGWDOPMBRDKPATMQOQQRLCDCPSETLAPZSXATJBUUNCFAXL");

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
    msg.setTimeStamp(0.4865093949713405);
    msg.setSource(10272U);
    msg.setSourceEntity(41U);
    msg.setDestination(43215U);
    msg.setDestinationEntity(116U);
    msg.type = 109U;
    msg.request_id = 23217U;
    msg.command = 137U;
    IMC::StationKeeping tmp_msg_0;
    tmp_msg_0.lat = 0.9062453336305674;
    tmp_msg_0.lon = 0.07616199047943928;
    tmp_msg_0.z = 0.2414661836245251;
    tmp_msg_0.z_units = 63U;
    tmp_msg_0.radius = 0.11288491838237336;
    tmp_msg_0.duration = 31295U;
    tmp_msg_0.speed = 0.3482450250361535;
    tmp_msg_0.speed_units = 117U;
    tmp_msg_0.custom.assign("DLWOYLOKENHLGBQEQBHYNEIRCUVRDGRJPHRLYKYEMRPHYOEEFCAWTXXFOSKQOHMI");
    tmp_msg_0.plan_ref = 590232027U;
    tmp_msg_0.id.assign("JPNEXXQDVPZAULUMYGWLDCMVECSIGTAYPPGRNIFEAYSBMCTMURQTHZMRHNLQIKTHRWSHQNCMYVLQIDFMOROXGXUEWPYHZLCSXMGVAWVKWVHJQMPJTEZKOGFPXGVNPBBFTADBEUJAKBODZKS");
    tmp_msg_0.memento.assign("OGZNDHTXOURQAPPPIDDJFURGFQGCXKFRTMHCMNTHDXDLOCMXLJUBMFOXZNNFYSRJQYSQVWTLJRASKZJEJBSPBHOSBECQZOAQVAJBGDPFIWEQUGYTXNKSGMUCWKLEWPJCPZIDKPFYSSNYDIMGWCUFYUVZECNHONVVBYYSUQXLBWRRXDRZBFMJEIJGEOHVHZKMTSKTPKLCQBILTNMBQZAKVVLWGO");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 58713U;
    msg.info.assign("XDRFHHNGERKCFBIENCSHTBOBJKUQHYJUKKFVSWVXXMQTTDMWGZXOSVJJHVWUJGIYYEDLYVISUTERHKITIMQGJRQPBTEJRLUZUPMCBLYAPVMSFBTNMCBKOWKJWPMAMWXYWYPUZIPAGOQPLNAODSPSNZBBRZOQVDNFLWUGEMKHJBNCFLLIXQSOSTADLYPHCNARAXGVGEJCGQFT");

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
    msg.setTimeStamp(0.2359142422906092);
    msg.setSource(44226U);
    msg.setSourceEntity(5U);
    msg.setDestination(2274U);
    msg.setDestinationEntity(86U);
    msg.command = 232U;
    msg.entities.assign("GOEMFQVDQPJQFEYURDPEJIWINNUDPDDPLMZBTCTFIFNVEKKRIVTRLZNPAAVIZAKTVS");

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
    msg.setTimeStamp(0.5027698096484071);
    msg.setSource(43865U);
    msg.setSourceEntity(66U);
    msg.setDestination(59371U);
    msg.setDestinationEntity(59U);
    msg.command = 8U;
    msg.entities.assign("BXELAMJPKYQVWKNQHSLLXGFTEJBWMGYOXBMIRIVQOHUIZVGFDZYDHLHDJFJMNZCHQSCIZAGJYTPBKRIRNPZOSTGGDLXXKVWVBULISWYPHLYWRKBKASXOSGHRARXDQFDPTZRUIFLWHXRNGDCCMAPWECQBUVFLNMFTGFNIVSKNRKPUUDPYDCAJUANTWRJOTOJSMHNLNMBCEQCJSHQSMKQVYUOWPTCYXEVBEOFKGXOYQJEZZTUAFEAMZEUPIV");

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
    msg.setTimeStamp(0.4585098644174125);
    msg.setSource(25260U);
    msg.setSourceEntity(18U);
    msg.setDestination(13126U);
    msg.setDestinationEntity(29U);
    msg.command = 29U;
    msg.entities.assign("CGANRQCUJSPRLAMBHGHETGJQVZXNVBYNVXYWFOFQLARMRPKBEVISBLSCCOBZTWDXKOMJJJOPTSZVSYZIYTPGGNVCCCWKQITGUYFALZOZMETVYGDJUDJPPSFKJUGSEDVHLFZWRXGHNZRHOKAMEQWDJANKUHTWUJOAEAFXWHFLTLZBTDICDOFL");

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
    msg.setTimeStamp(0.002931221136553086);
    msg.setSource(25896U);
    msg.setSourceEntity(2U);
    msg.setDestination(36637U);
    msg.setDestinationEntity(76U);
    msg.mcount = 64U;
    msg.mnames.assign("RBJFMOLBFHUUCEBZSOZQYWNKBGJJZOKDLGIXTVARTKMPGXZZWWLOPUMANKVUZRDVAYCKQVXRPYWVGCCBEMAEMICBHDEBXRQSPHDFBPQGLRXFOWYWVHEXJYITZAKLSCNMUIFPNDULWZJFTAUFLRNGIHOCTMAKFVGSXZD");
    msg.ecount = 106U;
    msg.enames.assign("TLUNGNXOKFCOJJUXDIVXZXLVTDEGAPKMKVCUXTBHTRBAZWIVJXEXEZQGZFKFFILJIOAFHYLDWGFYXWLUUSJOCPRHN");
    msg.ccount = 1U;
    msg.cnames.assign("WNATBWXXKYMVGKYEUZHIHJCQGSABQDTCWZUVYCNXRSVYOHSNEPTDHRDGDRIKSOOAPPFNCAGMDSDWKOIKWBTBHJZCAZXPRTZFHPEUNIJNGDDMOZLZSMIEPFHSIGW");
    msg.last_error.assign("VRXYFIXUDPUPKGGVWTTBOZBKOIDONYZFZFHICSQDQECECLTQYPHMDHTOCRXQMANQYFXJTQTBFRZJKSMWXSUYCHPUFMRXHXYENQREEYMQDMWCRNEIYJWCTARJVLTPWZXJLHQOGGACLHHJAURSOLVUUGOGCVFGWAGINDPAGVNBARBUIBZEHSUDNRQLJVMZSONLZKDKPLKBWZSMBXTXESFSJKWZKELFDWYVOBKIJMBIGPMVDAWALICYH");
    msg.last_error_time = 0.48111638279630753;

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
    msg.setTimeStamp(0.5247408554672119);
    msg.setSource(27158U);
    msg.setSourceEntity(210U);
    msg.setDestination(53767U);
    msg.setDestinationEntity(112U);
    msg.mcount = 34U;
    msg.mnames.assign("VIJMCWFBRMUMSXFMUWEFUQQGIPKUMNHRTGALBLDZAPCGBZNPUQRCAEOSCCXTTYAJKQYKYOLVMZNPLAKHIIPKZLNJBICZFEXYKBWPTPOTHXNMVWZURFOYSHFJKSGCGVNTYRZTRODYUQRLOZUHYVQYXVSBMGFSXGQJJKDLPBDVLOKQNPDOEHXEUVSHIADNHWDFGS");
    msg.ecount = 239U;
    msg.enames.assign("EBXPDLKPEEXOJWZWDWPZSUDNWPSZIRGPUNTIZSMKCXJHYMDJFONATSHDLMBYJHBKSWADCPJRTFLPSTYVKMNQVMEONAPHTUWSQHGIFIHLEIQBHYUPXJTTBMXX");
    msg.ccount = 161U;
    msg.cnames.assign("CHTWSJVKONNVSJCDXOIYPEPNKDBYIURKPRHIGZLDKKBEQMTYLDIXFIWJNGLRGYDHSNMMOIRZNAQGARZITVTLFPXCOPCGDWTVWAWXMZZWOZKOVLYLLOXAQENBYFIQCTZJMHULHACUBJFRBBHLIRBSXUBEJJSVXEAOWYONSNVYPDHNRUAHDTBZJUVZCJEOTKUQZPQYTADARTSSWWGRPGUMQ");
    msg.last_error.assign("WBSGTGFWFYSLFKCFKIOUCQOHCALIEIOYZSDSFWCTPQPUKMQJZVQRSGNLXYPBIVTDRVJFCXHHXYBYZRAVUMAAVCWISZIERDSWJFBLYDHNBCFRVLRXRZANQBGFBXEOYLPPINMPOVAHOZMKUJPTTTWPDXVRZXWHEKJ");
    msg.last_error_time = 0.9221184427129155;

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
    msg.setTimeStamp(0.03033020725736746);
    msg.setSource(1125U);
    msg.setSourceEntity(20U);
    msg.setDestination(18422U);
    msg.setDestinationEntity(61U);
    msg.mcount = 102U;
    msg.mnames.assign("WLXSMPSGMOBIVXVAEGEUZHNRQIVJTFJJXBEVZCXBBSCHIRWMUDFADMFJVFEXVJNEYZIGZSEBKZFGQIVSBLNUIBGARYLXKADJDIQLLJONQPLREOKNAATOPPZHQKQWDPVQGWBRGSCRPNGNOERWXLTPZYTNBYVYHAQKHMUHARDCHTPXPULTUHHTIUIHMDCFATKCOS");
    msg.ecount = 250U;
    msg.enames.assign("ADHWLESNTSMVWZPYIMXYREZGMQOGFKYEEPQLTDNQJDAAKJBJIQSYNEKIUKIRJRLCVPGIQAXEAOCMBCBHUFKTVZHMVOBYNMVCFDUQPQXGRUUGRDHZZTIXDPYIXWBJHFPKAAYRKLFNRONSZFVEFXOVXEQOPSYSZKWDUEMCJ");
    msg.ccount = 154U;
    msg.cnames.assign("CPUZTWWGVALOXAUOAMFQEBHAIPHIFVKTYVDDIREJBTQNXPGWMSZHWIYSKRWBDPVILPYEQQBSLWIIOQOZPNJVEFZETBHVJFPGGWLFDCDBXGDWJNRCJTOJELKJHLDHGBLYAKBOHSNQZTWRZOCESICYLMZVKCYXMQPQRNMIXR");
    msg.last_error.assign("ROVTFNUPOAXIOHBNVTDZRVYZPDBVYRUGHXFBOGOQGLTLQEOGFYWSUCJVOAWTLAKECPRPZKCJKCQNIYEILIDNMYEXLJJZHVJNAJMLYSPIKGHMHWSSAEQJHZYFMSQCCMOIIEDBWVWKLBEDBAZCHRFEYZGZSNRAPBUHBMKJXMJDEKHZLHXVCOFSCIAWKJNPMXXGUFVUTGRDWXQTNVEDRSPQMUMSAFIYTLKQWBRUSIDGTYNXRNAWTOZPDFUW");
    msg.last_error_time = 0.03393903489897676;

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
    msg.setTimeStamp(0.1907892825274038);
    msg.setSource(19925U);
    msg.setSourceEntity(32U);
    msg.setDestination(47419U);
    msg.setDestinationEntity(81U);
    msg.mask = 183U;
    msg.max_depth = 0.6641270279105527;
    msg.min_altitude = 0.198956965167418;
    msg.max_altitude = 0.927131131535214;
    msg.min_speed = 0.8410272751647742;
    msg.max_speed = 0.37159143969657726;
    msg.max_vrate = 0.716592121299478;
    msg.lat = 0.16394605636403492;
    msg.lon = 0.36588474219408806;
    msg.orientation = 0.11816683781147075;
    msg.width = 0.03460928363947391;
    msg.length = 0.56045474265941;

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
    msg.setTimeStamp(0.9867523233811007);
    msg.setSource(7085U);
    msg.setSourceEntity(172U);
    msg.setDestination(30952U);
    msg.setDestinationEntity(196U);
    msg.mask = 185U;
    msg.max_depth = 0.7009601722169321;
    msg.min_altitude = 0.03404659885085304;
    msg.max_altitude = 0.519892052589034;
    msg.min_speed = 0.40507897978865604;
    msg.max_speed = 0.06787229898368263;
    msg.max_vrate = 0.7187883797459844;
    msg.lat = 0.037377751012823035;
    msg.lon = 0.17042203950189683;
    msg.orientation = 0.20724470998962174;
    msg.width = 0.3901097810694232;
    msg.length = 0.05260720009406339;

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
    msg.setTimeStamp(0.19484312034439444);
    msg.setSource(29960U);
    msg.setSourceEntity(4U);
    msg.setDestination(258U);
    msg.setDestinationEntity(29U);
    msg.mask = 79U;
    msg.max_depth = 0.8930798383673098;
    msg.min_altitude = 0.1228342061764186;
    msg.max_altitude = 0.23740050980437089;
    msg.min_speed = 0.6860734063791453;
    msg.max_speed = 0.42667813480785544;
    msg.max_vrate = 0.13250731091912693;
    msg.lat = 0.25525900714549454;
    msg.lon = 0.4549983380232334;
    msg.orientation = 0.20204601176864867;
    msg.width = 0.15133771343602798;
    msg.length = 0.5248665734723201;

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
    msg.setTimeStamp(0.06701498882445345);
    msg.setSource(64998U);
    msg.setSourceEntity(40U);
    msg.setDestination(12296U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.5451294575304589);
    msg.setSource(32945U);
    msg.setSourceEntity(40U);
    msg.setDestination(27223U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.5789589649106536);
    msg.setSource(50867U);
    msg.setSourceEntity(188U);
    msg.setDestination(33090U);
    msg.setDestinationEntity(164U);

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
    msg.setTimeStamp(0.1430951336998667);
    msg.setSource(51021U);
    msg.setSourceEntity(31U);
    msg.setDestination(42671U);
    msg.setDestinationEntity(118U);
    msg.duration = 23693U;

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
    msg.setTimeStamp(0.48880277978878695);
    msg.setSource(57297U);
    msg.setSourceEntity(164U);
    msg.setDestination(56049U);
    msg.setDestinationEntity(100U);
    msg.duration = 15843U;

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
    msg.setTimeStamp(0.9774529811466202);
    msg.setSource(54080U);
    msg.setSourceEntity(219U);
    msg.setDestination(45928U);
    msg.setDestinationEntity(163U);
    msg.duration = 11063U;

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
    msg.setTimeStamp(0.4140066728311602);
    msg.setSource(58480U);
    msg.setSourceEntity(164U);
    msg.setDestination(62990U);
    msg.setDestinationEntity(204U);
    msg.enable = 182U;
    msg.mask = 1559602402U;
    msg.scope_ref = 871529627U;

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
    msg.setTimeStamp(0.24787735552250334);
    msg.setSource(49735U);
    msg.setSourceEntity(36U);
    msg.setDestination(11824U);
    msg.setDestinationEntity(167U);
    msg.enable = 116U;
    msg.mask = 2056661294U;
    msg.scope_ref = 317679897U;

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
    msg.setTimeStamp(0.6239808941652984);
    msg.setSource(37925U);
    msg.setSourceEntity(195U);
    msg.setDestination(17826U);
    msg.setDestinationEntity(250U);
    msg.enable = 167U;
    msg.mask = 3644983897U;
    msg.scope_ref = 2285581156U;

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
    msg.setTimeStamp(0.967890213041561);
    msg.setSource(1928U);
    msg.setSourceEntity(238U);
    msg.setDestination(50635U);
    msg.setDestinationEntity(149U);
    msg.medium = 155U;

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
    msg.setTimeStamp(0.21788273528624424);
    msg.setSource(47865U);
    msg.setSourceEntity(217U);
    msg.setDestination(35472U);
    msg.setDestinationEntity(148U);
    msg.medium = 44U;

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
    msg.setTimeStamp(0.340408289632561);
    msg.setSource(14669U);
    msg.setSourceEntity(245U);
    msg.setDestination(8996U);
    msg.setDestinationEntity(225U);
    msg.medium = 33U;

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
    msg.setTimeStamp(0.4510202899525385);
    msg.setSource(22943U);
    msg.setSourceEntity(41U);
    msg.setDestination(43654U);
    msg.setDestinationEntity(137U);
    msg.value = 0.5712371961779592;
    msg.type = 120U;

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
    msg.setTimeStamp(0.8483722486819273);
    msg.setSource(52898U);
    msg.setSourceEntity(188U);
    msg.setDestination(40693U);
    msg.setDestinationEntity(61U);
    msg.value = 0.4594266249770862;
    msg.type = 103U;

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
    msg.setTimeStamp(0.6412594018460621);
    msg.setSource(3818U);
    msg.setSourceEntity(71U);
    msg.setDestination(29303U);
    msg.setDestinationEntity(42U);
    msg.value = 0.06915163460920837;
    msg.type = 199U;

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
    msg.setTimeStamp(0.6936380750433884);
    msg.setSource(38731U);
    msg.setSourceEntity(150U);
    msg.setDestination(58214U);
    msg.setDestinationEntity(110U);
    msg.possimerr = 0.6158061874586487;
    msg.converg = 0.8569210348716889;
    msg.turbulence = 0.7154724094749166;
    msg.possimmon = 223U;
    msg.commmon = 6U;
    msg.convergmon = 252U;

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
    msg.setTimeStamp(0.9639392083583389);
    msg.setSource(52972U);
    msg.setSourceEntity(63U);
    msg.setDestination(12397U);
    msg.setDestinationEntity(236U);
    msg.possimerr = 0.4330268063447882;
    msg.converg = 0.9476724945599562;
    msg.turbulence = 0.6190123346630493;
    msg.possimmon = 204U;
    msg.commmon = 201U;
    msg.convergmon = 35U;

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
    msg.setTimeStamp(0.5658274720315041);
    msg.setSource(7492U);
    msg.setSourceEntity(103U);
    msg.setDestination(64598U);
    msg.setDestinationEntity(44U);
    msg.possimerr = 0.7646773632522403;
    msg.converg = 0.7938392407902425;
    msg.turbulence = 0.6651952346348547;
    msg.possimmon = 226U;
    msg.commmon = 190U;
    msg.convergmon = 1U;

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
    msg.setTimeStamp(0.06743756737463524);
    msg.setSource(8964U);
    msg.setSourceEntity(91U);
    msg.setDestination(33757U);
    msg.setDestinationEntity(76U);
    msg.autonomy = 28U;
    msg.mode.assign("OBASZHAMDFZEKXUZDIMTXDEQDWSVWFRJCDFRWDBPQVHKIJOIALRNGKKKHULHAYEHTNSOXVFLOJHTMRPBQRNMLQVOLCXFYLZKGQXBXJEBPEJRZEYYXQUFYVMAJGPRIPADHWCPWGTUTCBIMLUZOZIPNSOXSKCAKIJNGZEYWMYBPFIYLMCMKPTXQSSMQEJBVFTVSGYENUXRJZCAVVVBNPHOIEC");

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
    msg.setTimeStamp(0.5102251813512518);
    msg.setSource(6235U);
    msg.setSourceEntity(150U);
    msg.setDestination(61314U);
    msg.setDestinationEntity(78U);
    msg.autonomy = 205U;
    msg.mode.assign("TOLWTCGYKLRCSGBFVEFXCKQIOFRMXBUCGYZXQEWBFEHEWIOAPDFMHXZLRHNAXMUBVFGQDQGLJMERZOHTONUJUKFEADKMVQRBBPNIKFDVOBUZXIDNYIJVJASKRXQCUYYKJTRDQDMYHPASWGKKKUZWDGYNPLBYGPRXSLCQTDVSIWEUPVTWVDLMPUWSZMSOEZCIZNBGMHAZJQYHAHTWOAONJVRNCIMNWGCJAILCBJPELNPFXFTLYTHUSZR");

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
    msg.setTimeStamp(0.2645903467733427);
    msg.setSource(43452U);
    msg.setSourceEntity(23U);
    msg.setDestination(10916U);
    msg.setDestinationEntity(208U);
    msg.autonomy = 114U;
    msg.mode.assign("LCTKHQWTIDFFTLZDUNBIJSPUJWXKMMHBUXFSLXYRNIGSQTCKHOMCDBWSDSXCAYZVFUSZJGJAJQERPTMYHOAFZFXWETHIWJMEHPAJAXWWVKHRIOXUYRENFBNSKQNNSWAD");

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
    msg.setTimeStamp(0.7318499613515849);
    msg.setSource(41242U);
    msg.setSourceEntity(244U);
    msg.setDestination(24428U);
    msg.setDestinationEntity(56U);

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
    msg.setTimeStamp(0.19940142886220757);
    msg.setSource(65101U);
    msg.setSourceEntity(101U);
    msg.setDestination(26665U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.24806028946905778);
    msg.setSource(54324U);
    msg.setSourceEntity(44U);
    msg.setDestination(36414U);
    msg.setDestinationEntity(66U);

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
    msg.setTimeStamp(0.5073462999582246);
    msg.setSource(36126U);
    msg.setSourceEntity(252U);
    msg.setDestination(8042U);
    msg.setDestinationEntity(134U);
    msg.plan_id.assign("ITRKJCGVHIQTYHLNUMJDASTPOPKAAPZBACQLPVEDWRXBHBNLOFQPSQVJDZXTCXKHZTSRCZWAYSYJZXORCFBOUINCBUFKDJTITERWSWGVZBQW");
    msg.description.assign("UBXAEVNFTNGZHILHUVVXCSGNHSIMDUQSEGBJNYNNZKAPMYQAKPLRRIXXECFDRWGUZTKDGHMECMHYWLYOZXLDAOKTQSAHNHNEKVIBITEUCIVWSORWTSYUHRS");
    msg.vnamespace.assign("YWXVHOVPKMBKYUDEEBDKASSGKIBCDIULCHFFSJNYZFMFXTUKLOJDUJIYYKCCPXIXYEVBBHGEMTGGLVWVAXCPZTTUZENWZGFWCJQUYDRHAFLZCNGASCZZRKBALUQNMJGSMVGQTRBTHHJEHRJVWWAQRPKVMJPSNDSAUAYFOTPOCOUM");
    msg.start_man_id.assign("YQCYIAPODXXWNMEJITZFNNRDPJGMLEJTSHZZXTGXMDXWRCERPXFMSTCTWJIUCJVKORAKIGDNUAPFVZEZBWXZMHMOXYYQKOOKHIQFPORLPAQTNOGQQHRMDMAHHLGZOWSKVQHIVWABMIBYLEYSBZUGBBNGEKYIBEUASPIUOKFCSHLSWGCQJYEJRILFCVFVVATUEZKXZPRRDCDJYVSXUCTBGFFVUDUKSNNLSDNTPJLBDT");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("JPBWEOIRPCOEGQLGLPLUWOHZZTXTWDSIWRUYSYQTVJSFAAAEONYZXVHTAWDFOUBKJQONXZDBIBXXKNXRRSQVGZCDRVXMHMV");
    IMC::FollowReference tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.control_src = 3698U;
    tmp_tmp_msg_0_0.control_ent = 186U;
    tmp_tmp_msg_0_0.timeout = 0.4914226315121969;
    tmp_tmp_msg_0_0.loiter_radius = 0.050539176584023404;
    tmp_tmp_msg_0_0.altitude_interval = 0.17050796163088888;
    tmp_tmp_msg_0_0.plan_ref = 3459954753U;
    tmp_tmp_msg_0_0.id.assign("NLYYFXGVEFKNEQSPYMPGTBCXHIPBQMAFRFWJFXZETDINRSHVTNGADVNMLOHMVFEGTWPURXNJLGOCUNNTBMCTDAKVAUHBCWNJQGFPJEHUIJZMWCAUQJGIEVWFMZLOKREPK");
    tmp_tmp_msg_0_0.memento.assign("CQDRRDRSGTOLXVTGZLPUTQQCKHRCSOVBYUEVZKIULRBHWXUINPPUBXFNFHISAKIMDNEYEVRPGOSKOWJMSJXQWIQCPZJMQACSWEPERQJBCHGHYYUEFJMPXXKDGCTVOYAAZYAXUYGWQAIMNZARJSVZVMKWEUDOVNYHPTNDMOEBVFHQCFPTSDRWEIXIDLTEXIWAYNL");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("EJPYPAWUVGKIHGXQOOKPIADGXJRUTTTTMSKGWZULLBUYSNVTOKWGMZVSOHNHNJLFNGOBKRWTLYCDHYEFDZCEWMJOCIIYMSQPMDAPBCQORJLQVJWWHNAHUMSUTUXFTIWQRPEEKBIRQZUCFOZDXBIBVVGNHEMCXBZRASAPAKANYZZQNBHKSMYVRVBMILXYEDQPYKACHSQDLEELRXWSBF");
    tmp_msg_1.dest_man.assign("TDEKGMQMIOMSENGJLQUFZAGOLKDJMSKPXJTJHHRPUTVUFAZGBVUFMFWVXQRNOJFNCBFEXRWPRIWDLAZLQCTPJFYERNHJYEKHBGVDPBCPD");
    tmp_msg_1.conditions.assign("XCHHNTRSQQRNPBPFKJANFCXFZRWBBMAYVZGOEBSIZVAZU");
    msg.transitions.push_back(tmp_msg_1);
    IMC::Rows tmp_msg_2;
    tmp_msg_2.timeout = 64606U;
    tmp_msg_2.lat = 0.20826119046743097;
    tmp_msg_2.lon = 0.9936247700471521;
    tmp_msg_2.z = 0.13771680983348156;
    tmp_msg_2.z_units = 176U;
    tmp_msg_2.speed = 0.8912031792436284;
    tmp_msg_2.speed_units = 151U;
    tmp_msg_2.bearing = 0.3964747025593546;
    tmp_msg_2.cross_angle = 0.5303743489535492;
    tmp_msg_2.width = 0.6089046512157487;
    tmp_msg_2.length = 0.5240218879810785;
    tmp_msg_2.hstep = 0.572761957383914;
    tmp_msg_2.coff = 35U;
    tmp_msg_2.alternation = 225U;
    tmp_msg_2.flags = 60U;
    tmp_msg_2.custom.assign("DAEEOMXHRPBCL");
    tmp_msg_2.plan_ref = 1292106100U;
    tmp_msg_2.id.assign("PGUNXFMOWAPQMITSBGFASAGFOXZZPDRKODNVHRDECGYHWIFZZQDJHZLKOBVEYPNRUSUNCJLQFOUKXZQXAQQETGEJZBXRVHLFWHQCXMYALMNAFSGKDRZQJLBPRPYEFJIGRYNKWGFGMCQVIFYYJSAEBLKDWHWZHLVVWGMPPTUMYXIETMABYCLDKOJUIETWOXSBC");
    tmp_msg_2.memento.assign("BLZZCEXRJIIJBKLBQMDSTHCKLSHUAVROBGIEJMSOIQXSACJEQIZMPQXGQATINGQDYMKNAMTUJ");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::QueryEntityActivationState tmp_msg_3;
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
    msg.setTimeStamp(0.6833069530540166);
    msg.setSource(5730U);
    msg.setSourceEntity(155U);
    msg.setDestination(23804U);
    msg.setDestinationEntity(54U);
    msg.plan_id.assign("MBRSGZWPFEOQJSATCYYGOIIGHQVUTRRBTTEDBCMUTLHMNLJWFMAROGZAVPKEOFCUDTTPZDBWGBLXKVOOQVGXMHIJPA");
    msg.description.assign("KWVYKRFKDIBLWIAGGGBUNWCCGUGDKJEAIVZCXCFFIXTBPMZRSKXFSABEHBLDMSJEOPSFZRQZBVVKDAKKRHYBETVAALRJLXSRHUPL");
    msg.vnamespace.assign("HVHZTMPVIAQTHBQYHBKJOGRSUVQGVFBHGMROONOAFBNIIKAWFNMRYKNBLSHGWEWFAZCUNLVQYSDDSWWMQTNMEBATYUPOZKCOGPFLXUKYOTWAXKJQHGLBRPFCZQSIYJRXPSKKAZCXVDESKIHWXSVFBZFPUFMTCLQDROMMVXDRIAUQICYNJGIYBJOMJFEQRRYNPILTLDNWCWGJSEESUXZNUXHUDCK");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("VEUIKGYTAWQRXEWGIFEYWENRHFTUQBFVPUXLWGCKKZZSTQBCCDTQSSQHNYBVHBYRNOZMYSXSYGCWVNAGXPMDPNNOORBMZHDUBXTMAMOJKDBVQZIPHOXCUIWANTWVZZIUTDHECLLVLKAALAMKNPBOZDJTWPRKQCHMGDZJXKASYPIIYGEGSOAPRLETSHBQX");
    tmp_msg_0.value.assign("JLCLYXZEXUVITROQGFYQJDVHOGCPTVXKAJSSPOBGAPSRBLJBSDIFGEUUFVDZZPVVMTRYRTWDDQGIYEWAEYKRFBFUDXFFTDOLBTEEXGQUAZZGDTLIDLMOABVGYOMFMXEIWCHH");
    tmp_msg_0.type = 170U;
    tmp_msg_0.access = 31U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("IZCNNQCRCEEZWVJFOGZACOIBUIFZLYGGJTCALNNUFFUMXVJNHGIPHKEBSDGFUBMGKULXXMVLADSWNEZOMJFCVXHYCDGLNQFVYWREAZBPCRHPWLSMIPSOPBVKSHHFDHZHDETORRKIEAIKJTTJYOSCPTWMARMQYXTOXKVJGORAWGTTGUQPPYQXJKEOADSZAYWKRRIMYAQPZXTBDMUXLKKBXNROZEBVBDQLNSJIDVQTUVYWFMLSCDIQJLNWPEU");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("ZUHXQBTYXAETZG");
    IMC::VehicleFormation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.lat = 0.5237572322937248;
    tmp_tmp_msg_1_0.lon = 0.5969119055448479;
    tmp_tmp_msg_1_0.z = 0.987021866514784;
    tmp_tmp_msg_1_0.z_units = 21U;
    tmp_tmp_msg_1_0.speed = 0.6045955936730414;
    tmp_tmp_msg_1_0.speed_units = 127U;
    tmp_tmp_msg_1_0.start_time = 0.4421916346214735;
    tmp_tmp_msg_1_0.custom.assign("WKMMSDBSYIJZAFHXIEZLELAQ");
    tmp_tmp_msg_1_0.plan_ref = 3476564518U;
    tmp_tmp_msg_1_0.id.assign("FZNYWIIGOURLMLTLCPTQSKHYEDJEBYRHIVWQGRLMRGIXPPEKWHAHKFAEMJKHOSUZUFQQZARBT");
    tmp_tmp_msg_1_0.memento.assign("VQETKTLCWBOKGVSVZYWJRXRGGFDOFBEZDSIDDIEQIBBVHYDJKKAUHVNBRHWARPQYUBWWEEYIZNUGBGBSFXORBJDJCINOFAOIPCAMQJELCZAJQCHNOJIUNIESPMZTNFZVQVTHLUFOCLEKUHIXEWYLFZKHWOYXPLQRZTLDSOSWDYBUXXTGQMCAKNRHHHFVCSGZVZOXDGPRKTPNYUMJJTFGWPLLAUKYNEMLPTMQWYPRSDNKSATXMF");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("TSULKACAARAKTMLDAVUWTGGOTRZYFYBIJOPFFREWXLBIDMLYVEDYCDSFRCMDCOCMKHPPHPEBBJBSQ");
    tmp_msg_2.dest_man.assign("JYVQAZXJUWSHJOZVCQYUTDARLFRPEMIBWPIXMXLJGTQPBXTJFSPFWAOQKIVWCMITMVGDFKWSRKJLPQMZXNXOHHKQSXCXRHASPQPNHEGQKZNRSBZYBLTOMEHYNW");
    tmp_msg_2.conditions.assign("IFRJHPTUHKCCYYCXHNAZGDGKNKNQXCXSHVGCBHFDUNIUWHTAFIPPDQANEJFXCJVYJEIYSLEIPGROAATXKPOZBIOZMUVMMECSBTDZQMUYKRPTBENTVPGIBOWBAJBCYWJMYALJPHSFXOZSQKEHNXPRXLOVRTSGLLZDZXMAJXFDAOREVRBMLHLYQEYRWQNURQDBNOKMZIVMJVODWWNHFZKUFWETUSSDPUTDGILUGQLSTVLK");
    msg.transitions.push_back(tmp_msg_2);
    IMC::QueryPowerChannelState tmp_msg_3;
    msg.start_actions.push_back(tmp_msg_3);
    IMC::PlanVariable tmp_msg_4;
    tmp_msg_4.name.assign("ESVDONRNZJVSFCORCJUWHPZVBHROZPQHLZWIQCCGRIXNMFCWUXMLZCTOIFOMASTPSDOLRFUXREKPANMLOHFYVZUGYWIASEYJTW");
    tmp_msg_4.value.assign("IVBOXOBWVVCMFNMKYARHGFQZWFEQQGXQKTJTSBNZBCXRODGCHXFDZGKBKUKQCHFUCDGGUFJTPELXBPKDVYHFWBJNQIELOIHF");
    tmp_msg_4.type = 16U;
    tmp_msg_4.access = 15U;
    msg.end_actions.push_back(tmp_msg_4);

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
    msg.setTimeStamp(0.6628858804776085);
    msg.setSource(26353U);
    msg.setSourceEntity(37U);
    msg.setDestination(7659U);
    msg.setDestinationEntity(193U);
    msg.plan_id.assign("NWKZZHBVMYVMJLYBSJSBUQULMLTBGIDXLKDFOFZOFQRBXLWZOMPCSUYKXYDCKRVAJSDUSJXKZRBRACEATSZTNAQIYPDFZEKEWGCHJJHGZZLUVAVDTQLKMUIRGRWNRLHORFKETHYFGHAQNCJGXUNOXEYBTINPDZQQXKVNHH");
    msg.description.assign("EWBJFNQRLVZXSUNPEFHDRUWUBXFUKVGGJTDJZIMFNQWZJVXGMIZLBOVMKITRCEDTTAKUFYKUGZBPWEUOOFFNBSXGBGRJTGNXVACNLGSNDKTDWYBXHMEIKQTMELEAXILZHYCSCYKYWVQVHGOTACNATOSAN");
    msg.vnamespace.assign("SOZXXAXABNZNOBGJMTPDZAOJRIZHEQLPPKAQMEYFNPSAQBPDTFNNRIVPWQPJWRJDGKVXPSHHVBYUKAJBAGPYZOKMNGHCZYFLSKVDDCNRWILSUKCGLFKJHRSDZUWAQUEXMZY");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("MYEMBVDPJYPQISHMWEVDYTBNPXLZOCENLPWHGSTOCTGIQMPNZYUJXTFOCRIZKMGDGIZWTCCFPJNHTUHSNJWPQDFCXDXFYDKDOAHXKSPJYMJUSZTCSXUAQSSGEIIMQVEJMWLPAJBYGLEZBUFLUKQVRFQFBXHIPBMVVROQQZEHRSXKKTZVDZUALXFWJILJVOKFCDRETFKYAUMRHBCWNLONYZXENH");
    tmp_msg_0.value.assign("CNMMJZMYBBGJKHHRARUHD");
    tmp_msg_0.type = 35U;
    tmp_msg_0.access = 214U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("GZCTXWVLHPOWPSSRDFJXAKSLUBMOPPWKMVOZIMXGRZPAYEVSXWZOHIDFYTCGYSDLQIAELOCUXOPKNTHNEMRIIFKWWZENMEEQMYBHYSUXCNHDKRXPGRNXIBZ");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("QAFSPPRNWWBCBRXWAOCCTEZRMQOFPHIGNYCGZZDXVWAOQIOYNXITKKXCGNYDTPDJTQAQTSJBQLTIUWXGRWVJXUNMIXFAZBOZDWRTHTRVLGFLZJSWTKPKDLEYFKVHVGXMWHQHVNEVEPEEAXBWQMYBSOHVKYIOZQLAULMDAAMUXJOJKMBZFCCFJJFJPBUPUNGCYSCTMHLRIRQ");
    IMC::IdleManeuver tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.duration = 42942U;
    tmp_tmp_msg_1_0.custom.assign("RBFFWBKNLKLXVRJLAWLIMOYWLTNVUKINOJSFWZEOURHYSXDXINFCBRGFZIOOLAPVGGDXOEXHTVAUIZLRGPJHWMRVWDJYQGILMFSHGUJGBBXAQAWCKZEZFHUMNXSHMHMQPYSXVB");
    tmp_tmp_msg_1_0.plan_ref = 3036484094U;
    tmp_tmp_msg_1_0.id.assign("PLVFZNEZJWGJTFWBNLSUSXHCUUDSCLURABMDDARYVURUKVQOXBLVXKDVHGHVCOPQMGONMWDQBZFWQHEKQOSWUSAFXURLSPSJFIBDMIMDCACNGAOWLTDMEMJFNCHUKKIY");
    tmp_tmp_msg_1_0.memento.assign("PUOJVHTCYGBFJRWDLZKRFDYVJMOQWHOQMCIXPAZDADXIHUQYLLZGHTIMUOIRGBOGUORVVQKGDZSSSQMLHYUDXQCCBKJKRTIZXKMBSAWMNZLZCFNROFXGWANVHJOBEYIJRSKZDEBMTCCQPAQRAGGLVWCFMAEHEYKUVFEPFIJGIYMLWMDDFTHUFHVJNREQKZVPRQOPKTKXXTVNBEBYJHDXLSNTWIABWZNPYUGUCAIOBNP");
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::Pressure tmp_tmp_msg_1_1;
    tmp_tmp_msg_1_1.value = 0.37350444335835253;
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);
    IMC::PlanTransition tmp_msg_2;
    tmp_msg_2.source_man.assign("TFKNPOSQIWFAHWBINYJQPYLFVTGUFHILXULHHDNXZHZFEORDMCKOQAZPRTRSQUMWGASFCLXARTDQAPZWUWUCJHTFDVMXCYWRWQCJNNDKEXVABJRBZJKYVIIRMYPMJLDAGDFPWBLINUECVOSOHRENGJPPSTZBLINGSYVACIAUZGMHUBMNQOVODECKZEOTG");
    tmp_msg_2.dest_man.assign("NQNKIWHZHGMCSOMZBJRSIYAVGXKRGGACPXWEZNKSLIQAGTIX");
    tmp_msg_2.conditions.assign("KGSPSKTDOOGPTJRGESNVTWDTPMSPSXTLQBUADRWWJGEBWFBLKPMHMHXNVXHVLMUKUZGFPBRBYLAWHPLEAFEIUIYIUFTMYNQXPCMFKLHXTUJBNWIJBSLWOCQVHAAJUVJZOVCSCCXQN");
    msg.transitions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.6195845158901239);
    msg.setSource(25818U);
    msg.setSourceEntity(151U);
    msg.setDestination(62181U);
    msg.setDestinationEntity(248U);
    msg.maneuver_id.assign("AGCWLMLRGRQQZNXQCPHUQELYRSLUSWALKIUSJJXHTFO");
    IMC::IdleManeuver tmp_msg_0;
    tmp_msg_0.duration = 53759U;
    tmp_msg_0.custom.assign("SIRUSHRHHSJJOQZBTCYTYNFCKFCOQLIVCCNK");
    tmp_msg_0.plan_ref = 3422291426U;
    tmp_msg_0.id.assign("SCPCRTINYVMWEWU");
    tmp_msg_0.memento.assign("FMDNIPOKLHBDDPQDYUBOGQITQMCGUYBKBRPGRCPZUAIPNASOWPCWJMMGYURIUNUGNAKDJQBIBKATICLZFBVVZCVCHXUVFNZVXHXZYGJEDDFLFISMVZQJSPATVXBAEOTYSFVRDFLKOXIKAXKBVXHJKCNQSTWWTEFRVAYCPCNHPYHXJRQGMYSIGWZODJQGLKJTOCZMWAEEQETHUTBYLHOTLPWILKELHWRRMXFSNFZOYWLSSWGNXUZUEAHJDEOJ");
    msg.data.set(tmp_msg_0);
    IMC::AnnounceService tmp_msg_1;
    tmp_msg_1.service.assign("HJVHYRGAJSNVQXCSMBUMTIUFAIPRGAKVKCBZLJMPSRODDMKUEUEFQHOQZHYXVNSZHFEOTMPWBQEZNIIKJUYUPKSYNHILGIZPJMHXVPTNMGVKYTSEWVNNHCDHLAQUXBXXTYRTDACDXNJZRILSXDWZYJBQUGWETWPEBVLLTDVKOGIFNRALCMCTDXDQBOFGFLCTQFMGRGFKNXWYUWIZWCHUFLCAIJPCOEVEBWQKDASMBQSPKZRYOGPJOOA");
    tmp_msg_1.service_type = 127U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::MagneticField tmp_msg_2;
    tmp_msg_2.time = 0.1307438234994277;
    tmp_msg_2.x = 0.20232018344526914;
    tmp_msg_2.y = 0.3142977175702626;
    tmp_msg_2.z = 0.7950899739055557;
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
    msg.setTimeStamp(0.7805536943627864);
    msg.setSource(29248U);
    msg.setSourceEntity(37U);
    msg.setDestination(14604U);
    msg.setDestinationEntity(121U);
    msg.maneuver_id.assign("NZEWYJKFSIWQORVLUAXCIAUXMKKTXBMOOYESHAGBKGZWTPCDOMYLISCJVRWBJZCAGWTJRVPPFEDVQBFNCOGXABIJXKSUBICQWZIOEXYRRRPEIUVAMWHWXNPQNE");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 48105U;
    tmp_msg_0.lat = 0.18126290996752592;
    tmp_msg_0.lon = 0.1446907321773403;
    tmp_msg_0.z = 0.826042165606219;
    tmp_msg_0.z_units = 217U;
    tmp_msg_0.amplitude = 0.448530857922284;
    tmp_msg_0.pitch = 0.17590426740286746;
    tmp_msg_0.speed = 0.8636872417933881;
    tmp_msg_0.speed_units = 233U;
    tmp_msg_0.custom.assign("UPVERDLUZOIFNCQQCBJEEXYBBDKFEZLYUQGKRLMXKMPNGXFCPUGWKGFZNMSWDJAHQZIZASGAFHEYYPVGMKRXXTRWVGFEOPZEJRPUBVVAIJBISILGYQSTAIJSTKWOZEDVQWMHKPAHTIWLOSLJUGVTADRYNKNDMLFNDERHHNWEIYUKXQBMQOGTQVNBDQSPMXK");
    tmp_msg_0.plan_ref = 3025063572U;
    tmp_msg_0.id.assign("ZXYFNWIUDBIHSZKPJWLQPNVPLJBSUXLKWIANVOVKTSRRVFUNFZLWTGUISGUYNXBRQKFRJJOATBHLQNFRFGGCQEXTXAIYSITOXUDUMXQOCWGSEKDCAGNHHIIMMNRLNOGYDFSURJMJJMTVBXEZXEOFQ");
    tmp_msg_0.memento.assign("SQSWIVWTSLZJKCHOPUGB");
    msg.data.set(tmp_msg_0);
    IMC::TrexToken tmp_msg_1;
    tmp_msg_1.timeline.assign("RKMYNWXAYEVSMVTNOPGBQIZPJNEPO");
    tmp_msg_1.predicate.assign("MYSMIKFFVJVUVYXKLNSQXJOWOEEAGDOCTCFHZKMXUTHSIZLPRHEGCPKIJHCAAMCNZFUFORZNNAXHOQMAOHDVQGFAJSQTKYVUIWIIXJTZHVPLGQUBPCK");
    IMC::TrexAttribute tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.name.assign("GURJQGKCEAZVMFNRZFYVSZYNMCUAPBAQFQYGDWTLHDEPIUMQOCKTHNKSHUVMTFLSELJROYERINHBEEDYJWPTGJUXCVHCDBSLIKODMRIAJXOJVPNZUGACBKIVMXOPDPHFQZBNGEWWNMKSJRGJYZAIVLSCZEXCSTGRXVCLIKYRMFHLPYAIIHSUNP");
    tmp_tmp_msg_1_0.attr_type = 78U;
    tmp_tmp_msg_1_0.min.assign("UDTULWPZIUPDNGSJERJMHQZPLRRYEQGXRIDYRVTPWTEFNZAQRACUEUDNMWHTK");
    tmp_tmp_msg_1_0.max.assign("OJPATXQEESQRPCSQZQMLMIKLPHHFGYKYZXNQLEQGRCTMOMBEKEPUFCOTBWSSVJZOBGCFEZIKYOUZXUNDCNKWOFNZVDUGTYOVMNRIGKBRNYUUXNDQNIQAJKGHHVGOUTIBNAZKFIFLDBLWPBVVXWRIDCFFHLYWCTHTWYITUSNZXWJXLPJALIEJREVCZWXSRSRMLMBPBDOUJHJCAEAWPVTHGHDVRRAIDASKSYMPDQDEKWVO");
    tmp_msg_1.attributes.push_back(tmp_tmp_msg_1_0);
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Temperature tmp_msg_2;
    tmp_msg_2.value = 0.2468844154414439;
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
    msg.setTimeStamp(0.783469542265017);
    msg.setSource(32753U);
    msg.setSourceEntity(3U);
    msg.setDestination(35870U);
    msg.setDestinationEntity(171U);
    msg.maneuver_id.assign("AXPKLMZPJGKPRNCBAEQIUOVGLTNTARFPLXIPBDSXCLSYBSLNCNNESYFVBWMMDYJOZMOOZAVAPVXGURJDMSDDAGGXECJEGZISIBFVJNLHFOUFDVOYGOQNASZOQZQWQKNUBWVMWGMIRAQSZYZDJISYWTERIZHTEHUXSJBXRTVKRKZMPRYWFQOKWHUCYAMVWTUHNDCYJNIMBPFLHTEK");
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 5713U;
    tmp_msg_0.flags = 133U;
    tmp_msg_0.lat = 0.0906022435498024;
    tmp_msg_0.lon = 0.9006252934557835;
    tmp_msg_0.start_z = 0.6142846185783344;
    tmp_msg_0.start_z_units = 112U;
    tmp_msg_0.end_z = 0.28532895589338825;
    tmp_msg_0.end_z_units = 4U;
    tmp_msg_0.radius = 0.9407558321529038;
    tmp_msg_0.speed = 0.4392538065359157;
    tmp_msg_0.speed_units = 27U;
    tmp_msg_0.custom.assign("SSFBVQADXXFNQRABBPAPVBJEXKTCDPVGGWNLPPKYJEAHUDPUDCXFRVCQSTBFYZJTBNQOZRUKYCTVOQQRIQOIEVOWUIWEDZRWBCELGNAPSFANMINKEYYNLOL");
    tmp_msg_0.plan_ref = 4154850683U;
    tmp_msg_0.id.assign("BFKXGFIGFMTQJZEVBPBKCMZBVLHJMTHMUIYYWLELYMAFTVGOUTSZRVISTJJETLOSZAXCFWIEFTXPRQNDIVFKRXXZLCSOIRDJHBXQDEKOIPPNRWEIMJFOTCGDCWDLYABEXPAKDKFYWH");
    tmp_msg_0.memento.assign("SJHITIUHXLRMQTKVGXWBHYPSHDTCUZCXPJRGHGPPWGQOHESVOOZDKXDTHVMDIEEKWVLLLESTUTXXQHFDWLJJAYJJRALBGMESOAZBVVPBOBCZURUZLUTYQPNCIFNYMLINDCYNRBFYPBNERAXHNMCDXEJMWUPEUQQNWCXRKBEOIYWEGVMBZUGIMYAMNLKISPVFSOAJXCTRKURVPDTIFVNZWFYKHDWCQAZSFTBGROOAWGCNSFFAD");
    msg.data.set(tmp_msg_0);
    IMC::DesiredSpeed tmp_msg_1;
    tmp_msg_1.value = 0.40448612333537526;
    tmp_msg_1.speed_units = 247U;
    msg.start_actions.push_back(tmp_msg_1);
    IMC::TrexAttribute tmp_msg_2;
    tmp_msg_2.name.assign("WPAIIMEFHNRDBOBVOGAYZEZHVHZKCTMGPBQLBKZRKMAWYMUUGRJSJSOXHUHWDSEKNTYAZOSFFCUCPBTCIJRIKMQNCYSCRNLNHMVWKOFQDTWAQJKGQFRXRFVLDGYGSPJYYQWPIKUCXFLXIUGPAHBTVHXSJANCIUNGOFCVAMTGYWDPQLBMXJNWBOXSWVTEZ");
    tmp_msg_2.attr_type = 254U;
    tmp_msg_2.min.assign("LTOCZSZZPNMGEDDSKWJHQEGUUEKDFXWIQAFRIYXKQIFKLQVOWQRBTPOWZWZQGHHXCJYDEUUYIMOLXPQHPQNWHUXRYRATTAABDCNDTUIKEEVNDZCVJJGSGKXUBLBFSNBCSMYDQANPTIJJNIBKDGWONJTABPFBOTHRORCAYKNHXLXMMFSAJK");
    tmp_msg_2.max.assign("XZCFYFIHFUBZIDNVKLCGSZYWHVPMHSJHLNQTSEVWFUMSDGOJPCVDRZHMVMJRCNUWOEJYHBXZQBVXKKCMXGDDQJTILWBKQSXAASVEFAGTIXDHI");
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
    msg.setTimeStamp(0.35738723639088354);
    msg.setSource(1351U);
    msg.setSourceEntity(134U);
    msg.setDestination(32255U);
    msg.setDestinationEntity(156U);
    msg.source_man.assign("TOVPVFXTONZGPRSGCDDQMBVWSOVNFAFGEERWVLEYIBFUUBEWTKQSUPJBAVJHGMXYGWKYAZHNDPLUSTCLXRLTDYWJCYBQWADZKCXMMEAIZZZBIVKMOMAVQUHGQIGPHYREZJUDDARDIGZJCEVFUBCKOUIJLXNPHM");
    msg.dest_man.assign("KZLBWWOPONWHQDNBQHIVEGVDWOS");
    msg.conditions.assign("CJSQTOUWCHWPHNRVRMDTLKWREIUIQYYQRGZMSWCSCFFYZDKLJTWVIOMIACEJMJSL");

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
    msg.setTimeStamp(0.5043300682763695);
    msg.setSource(23299U);
    msg.setSourceEntity(71U);
    msg.setDestination(5636U);
    msg.setDestinationEntity(110U);
    msg.source_man.assign("DEDZZIUIFHLLYVKUZWGWSSQALIPSYPCCYXBFBCJYGWMEFRQTSTALVCCKWGTJJDRGDNFNGOYXQJOUARUCVXFXKNIQNLUXSBVOAEVORNHIPWXIBBUEKHVAVFHAFBKJPTXNHRKVZKLTWPMAFMLNQTMOYMEBAMGSAPMCRMKOLERHLQSDSBPEIROTPJTDVRIJZKTWLFGMDVEOJRUIGUJXQPZZPOYNSQJUFWDGESZQWOQHENCBXZAUYHHHZWCYNXICG");
    msg.dest_man.assign("EJEIIMSTNISEJFFEEQDAJUMNKBINVGSFBZAPXCYFABHWBKDXDUVUXAZERLOTZNVTLXPJCKOJJYHEIHNUPYVUOWLQDDDZORZZTBLLPYNLTXWHEBFIXWHSFGICZTSRCJYQTAOBLRQCWK");
    msg.conditions.assign("ZZAZZJPBVASBIYRMVZDHMABCDCTVNIEEGFYPFDSHLUYTFSISFURFJOYODMESJUTXBSLAHJQKSCNXFWCKJWTVKWCAPPLDHZHKAYHFTUVNQWNNKBPZORWAMPEYONUVQQZGWDEJGFVIPJWXXDRQEKUZPXFLMTNOWAVIUIGENMJEYK");

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
    msg.setTimeStamp(0.26867022684347597);
    msg.setSource(49436U);
    msg.setSourceEntity(92U);
    msg.setDestination(33149U);
    msg.setDestinationEntity(164U);
    msg.source_man.assign("HASERMLDVDBKPSWXMBCNNPJWXDWUEFJNBZWTMQVGKNIPIJXZVJOOOVXDRLPPMHBUTHMHBPJLGICYKKIGYTDTAIRESLLDCHARIJYQKIWOOMJDBVYREVWKTTMYSESZUCAZZEUCHXRGCCXYEGWUMZAKAKRQNZICLUFHWYAJFCRXOOQGJVUVSTDFPKWYBZTYJQGITFSFRAHESDPQAOOGQSCKQVNLIFVDBUL");
    msg.dest_man.assign("YRAFULJCOVCLQINOAPVFNCWUFVUPSTYLJJOAVDQKIGXHJDSESGCHBFKHJGAAYOOIXTNKVIRQCXQXBXHOWBEUWOYPRYBZIIGLWYEZESPHFCYJZQFUEIQQFKBRRNNSOBPCUZGKWDZIDGTESLUTTCTXKEPWWGKGCUGMVWQXNUXRJRTXINRAFHPNMGOLRVDSIYJJHAQ");
    msg.conditions.assign("GPDVDPSIIAPUUJASUISWJEYLJLRFISPRPQBXNFWPRVBZPZQMAREOBXKOYJGBFNEMQMUHSPYASYKOOMXABOKDRCHZJAAHTNXQKFNUOGUNWLTFKOMZRPEXXJRCXOXTIVIUMVVGCOTKPEFAXMAHWDESLBTDQVTQYQCHQCEWVYDFCBHEYNDKSHZEEGYNWLWBDTDGLVKIKTVFWCCCZZSFFTXUWUQWCGZYJTRONSI");
    IMC::EntityState tmp_msg_0;
    tmp_msg_0.state = 153U;
    tmp_msg_0.flags = 205U;
    tmp_msg_0.description.assign("LHWAORGMEMNWHLAVCQZGLEMTCMAQCZXSLJUCUQMEXJLFDOYTXIXKIPXPNFVGWIZMWXGIBTJOIBKUSFTWOBKUUMMYABVFVHGGLAWYFSPBPPVDRARRRVONSEZVHQTSTPJXERDDITOMTUHSOAAATCBJPDZJICZFKRFKCFDOCPXESNUXEEWSYBKVZIHQVGDZEBLNRIKFAQOH");
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
    msg.setTimeStamp(0.6850925043071872);
    msg.setSource(32759U);
    msg.setSourceEntity(149U);
    msg.setDestination(17112U);
    msg.setDestinationEntity(166U);
    msg.command = 243U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SMFPXPFBYTCXHMREVYPTRLWJZRSHVHMGYLIZGBZCLNKGMAEPUIVFPNYXHTEQXJEIQKJWDOAAZV");
    tmp_msg_0.description.assign("FRFRNUBHBGKYFZEPYINHWNVOWWQGLBIMLHMDUXAXAIMJIADLETMQNPWTXZGXRJVATYQSJVEYDFKWXHIAFWYFKHTAMCFJMIZUTNECRV");
    tmp_msg_0.vnamespace.assign("BRQMSAMLOEDARQXBQXPKEYBZLJAICUHHDZDLZXVDCCNUTICZYHHRHCVCXFVVIFSGSNWBZ");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HPITYBNAKHNMCWRQBDETNGDLODTBORNJWWTGXVCSAIAHUXFKFMUVTOPIGYDKENUEFUMPAQJIWRLORECMKHHZRJOTDTIFQBLVSVBBDKNNLHVGPDVUDMCXOZXWPFZWHWASRDTDYGJXEZOALMGRSVSIKPZXLQRYNLCMCVBPCVSYIWSANWYOTWFBQSJZSUCUYHFVLMOLFGKAFUPUHQQQBLZEJCYGXIARSOJQJPGYBNHUIKZJ");
    tmp_tmp_msg_0_0.value.assign("FIUPVHXBPBPDYAFUJLTGVEXWDKRTHISLCMNFWKJBWQVAJLNIFDFPUGMHVSGHWFHZYBEXXGRWSQYBQZKMBQJSMHNOO");
    tmp_tmp_msg_0_0.type = 246U;
    tmp_tmp_msg_0_0.access = 223U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("OTQOQPLRWUSHBLVZJARBKUXNSMQWIUPFXDZYTWYQUQDMPFGIFIMHMIITEPCCZWALJVORFBGDSLUTJOKWWEPXNVMYHKCZDLJZQPNBBYDUXDIHLNLJGZTTSVWOTXXRKAKCGIGHERQFPONGFVBWFPMMFONJSTODQATHOPYXJKECHAAQBODEUYVVWITKSRMZYJBLFKXAVDUCURHLRMSIVELRYMEEZNVHCHJDGG");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("UZBUAMWEBSCDERNDLZVIHBJWCAGHRGVQTDFL");
    IMC::Goto tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 61488U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.9850444454338432;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.9402252187534821;
    tmp_tmp_tmp_msg_0_1_0.z = 0.17223452987419785;
    tmp_tmp_tmp_msg_0_1_0.z_units = 221U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.774797989791274;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 196U;
    tmp_tmp_tmp_msg_0_1_0.roll = 0.8801600568155359;
    tmp_tmp_tmp_msg_0_1_0.pitch = 0.6425173163102184;
    tmp_tmp_tmp_msg_0_1_0.yaw = 0.5211844100290471;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("VCQZBDRCVKMXNEBWZQRROPHWNDYHMCTCWDKWTWEHUXFJDQVVICPRYGZXUUKCQBFSZKMIHXRSPATUUHWE");
    tmp_tmp_tmp_msg_0_1_0.plan_ref = 3439581556U;
    tmp_tmp_tmp_msg_0_1_0.id.assign("UNXMZLNYNTRUXKFIRVVVWFQDNZJPSAIBAOKAAQEPBTOWHIOGKFPHBMGLEJMKFGRRUZRSLSJ");
    tmp_tmp_tmp_msg_0_1_0.memento.assign("NRPHFUSTJBGSYQCXTMAKMBTEJPROKASBOPVCVXXZBOYQOXNBNDYQDLGLCFATOVEWYERBRGHXVYPOTVJFLFKJKYCQUAHCCPNSTMEZTLRUTRYNCIASCNOELKFK");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::CcuEvent tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.type = 34U;
    tmp_tmp_tmp_msg_0_1_1.id.assign("UBIRGGUQLTJSQJZMCQKVLFYYRXKJCWQTNIOAFSAWOACBJWBLMNYKPIJNTYOTQTELNEWYZDADZRLHMWGEAZSHHYCJHFXPCOLHKSBLBOAEPFMAZBMHISCNFAMVWYUFMPTKKIJLHBDLOVSQGCWBIPRHRYVXFG");
    IMC::PlanDBState tmp_tmp_tmp_tmp_msg_0_1_1_0;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.plan_count = 38548U;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.plan_size = 217896947U;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.change_time = 0.4890662542121519;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.change_sid = 23650U;
    tmp_tmp_tmp_tmp_msg_0_1_1_0.change_sname.assign("VYNRGSOZMR");
    const char tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0[] = {-105, 24, -105, 34, -104, -84, 68, -50, -69, 22, 32, 85, -36, -12, -106, -90, 1, 120, -105, -53, 25, 60, 96, 90, 114, -17, -3, -30, 43, 110, -1, 90, 13, 70, -85, 75, -27, 125, -68, -104, -9, -45, 71, 108, 85, 56, -75, -79, -35, 103, 9, -123, 122, -96, -19, -39, 90, -37, -97, 103, 82, 86, -42, 40, 121, -11, -87, -98, 109, 40, 67, -15, 35, 54, -12, -106, -126, 2, 111, -124, -69, -40, -86, -16, 101, -55, -69, 4, 54, -61, 78, 97, 118, 83, 112, 25, 96, -108, 52, -25, -31, 5, 60, 32, 98, -24, -110, 60, 114, 114, -46, 38, 84, -36, -52, 59, -12, -100, -101, -70, -127, 87, 100, 93, -83, 38, 44, -24, -100, -29, 11, 83, -97, 1, 12, 52, -68, -42, -41, 69, -45, -42, 1, -50, -120, 57, 63, 43, 19, 89, -50, 38, 26, 74, 87, -18, 85, -106, -81, 44, 119};
    tmp_tmp_tmp_tmp_msg_0_1_1_0.md5.assign(tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0, tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0 + sizeof(tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_0));
    IMC::PlanDBInformation tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_1;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_1.plan_id.assign("RDXHWGORTCFYIYNSBKNEPPKAFUIEGBKJGCQAUTZRMXWERBRXBKMBCHMCUVAMADUHOWGTXMTPIWLLCOTAVSYYO");
    tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_1.plan_size = 24807U;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_1.change_time = 0.4508075367912596;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_1.change_sid = 24227U;
    tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_1.change_sname.assign("FYUNTGAGJLCUUDOTEBSLHRXEDJXIWLCZQOBHBRUQWEXWLSTHAPNJLSPMOBXRSIFAQFLVVKTTTZMZTMWDSWKLWZGZHNPOPRAKXPUEELJISDNAUSZOWCFQVJAFDKBYBRWIDV");
    const char tmp_tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_1_0[] = {-44, 122, 24, -3, -94, -92, 26, -47, -84, -53, 66, 25, 117, -19, -120, -78, -99, -104, 48, -80, 26, 67, -112, 122, -66, -30, 2, 21, -13, 34, -99, -9, 9, 28, -57, 77, -85, -124, -3, 79, -44, -101, 61, 114, -46, 9, -92, 113, -40, 126, 77, 75, 83, 62, -86, -95, -3, 28, -20, 99, 65, 76, 84, -102, 80, -46, -94, 54, 102, 123, -109, 76, 117, -38, 120, -97, 66, -100, -35, -124, 95, -70, -27, -54, -56, 116, 105, -1, 27, 48, -68, 25, 33, 26, -102, 47, -109, -43, -33, 49, -13, -51, 115, 99, 35, 62, 91, 120, -61, 25, 47, -65, 110, -32, 113};
    tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_1.md5.assign(tmp_tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_1_0, tmp_tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_1_0 + sizeof(tmp_tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_1_0));
    tmp_tmp_tmp_tmp_msg_0_1_1_0.plans_info.push_back(tmp_tmp_tmp_tmp_tmp_msg_0_1_1_0_1);
    tmp_tmp_tmp_msg_0_1_1.arg.set(tmp_tmp_tmp_tmp_msg_0_1_1_0);
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::SoundSpeed tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.value = 0.6878101769115873;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("GOMFNKMNUSUHVFBYYPUFIMUHQMYAHQXNMJNFZOCSNSBATAIHYWVPBBRWFPDDWZXRGDHOOPSJQDXKALKUCTQTXKGHEJODZFQKPCZORFIZJNVBRWIMPRMPIBLMXSFASTJIGLWHRSLUHA");
    tmp_tmp_msg_0_2.dest_man.assign("FDQYGXMJCXXLQACNTXRXLDGRJOFSHQDPBATZEODMOWXRRUAUSMHUFNOQYDICWJQKHCVPBTJCBQRJKKEBUGNJZKOISPVDBTKQ");
    tmp_tmp_msg_0_2.conditions.assign("ZTLZJPMSTDXODYVNALR");
    IMC::Announce tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.sys_name.assign("TZMMSBRGFAWCCBRJDHTZGJAHCGPYLJRVOHNBVDSSKTMYKQRLVUSAMXYQOVLLFFCNMDFHUJOKGJTFJBETARJBZSDHHCDGDUKZLWRLMEJTIPSFTOZDHVNTVQXAIMRIQNMOBULFNXSKLPWFBNUVIEYRYNWWSEQYAYXNPJKIIWYUWGEMFOBCPJCIOKBHIHZWHPCOZYUKCSXGS");
    tmp_tmp_tmp_msg_0_2_0.sys_type = 219U;
    tmp_tmp_tmp_msg_0_2_0.owner = 10141U;
    tmp_tmp_tmp_msg_0_2_0.lat = 0.9661395914830364;
    tmp_tmp_tmp_msg_0_2_0.lon = 0.3219336965863915;
    tmp_tmp_tmp_msg_0_2_0.height = 0.2174423693779608;
    tmp_tmp_tmp_msg_0_2_0.services.assign("NWPKSLVBRDENYRIDIILGTTDQDI");
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    IMC::PlanControlState tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.state = 205U;
    tmp_tmp_msg_0_3.plan_id.assign("OVOOYXVHRIIHIAQGXXLXMPMVNMHTSUJGFCWVINUGPRADKCWPOSZSDKQSYBHCEPLOPTPHUTRZLGPYBTEVQDCADQQYCWJUAXSBZRKOCAWLLEJDSEXXUNUAPRJTHE");
    tmp_tmp_msg_0_3.plan_eta = 2021740378;
    tmp_tmp_msg_0_3.plan_progress = 0.761221269834689;
    tmp_tmp_msg_0_3.man_id.assign("OLZSAAWGNIBLKMXBEQLQXCOL");
    tmp_tmp_msg_0_3.man_type = 47756U;
    tmp_tmp_msg_0_3.man_eta = -695218733;
    tmp_tmp_msg_0_3.last_outcome = 186U;
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
    msg.setTimeStamp(0.8462784162129711);
    msg.setSource(883U);
    msg.setSourceEntity(198U);
    msg.setDestination(27597U);
    msg.setDestinationEntity(23U);
    msg.command = 197U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("UFKMHREFWOVVTCZYXEC");
    tmp_msg_0.description.assign("YGWTTOLEQNECOWZFNPIGFQSKUTHBBLVCTENRKZMNNXHIITWMZWBWXFXGIXKJYHRSHHFVS");
    tmp_msg_0.vnamespace.assign("OZJZDQGRWDQNTILCVZRAMUAHIJQBLQKPXESTVBO");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YLFOUGIQAYWDVKIXANAGIOGFQJKPVPRTGEUUGJDKQGCZKHVAOFXKEMYIZOIFFSIOOWGUZBPOZJWHLWSSECXRMLHXGJARNJZKUFUQSIPYYTLFYXCKLDXCISZDQBHPWWXYVAZNHJBRDCNEUVTLUCKFWAPTFASOXNELJYKCVPQWDNPMBCLBTMQ");
    tmp_tmp_msg_0_0.value.assign("XFFFVXMFYUWYGUSAZAIZDMCOPKAJTJUBJLHYLQSNICSTFFKHHQVNJNERGJVRPJTBTWCYERLCNCNKOBOEXRATZDPKFMGRHUZMWPRLW");
    tmp_tmp_msg_0_0.type = 165U;
    tmp_tmp_msg_0_0.access = 7U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("FYMWOVEPBDBFIOAMPNQXUGNIITXSDSXAU");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("JGYLUEJFMLJMXBIBMHGJTIUDIGYTUCMQBEBSUVDLGIWSWHHACTVPIWOILSQKQFDHQY");
    IMC::CustomManeuver tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 1677U;
    tmp_tmp_tmp_msg_0_1_0.name.assign("GMIXZORWYNVQBBPZFMUTWZRORRRVOTHJHCMCXIFMZDEXIIKEHSCXRWZILAMYNELAOIQNBCKNZUEUSLAZLHOVMKKEOBHZJPTZKDWYLIKALFQTGBCGLGVEDQFAJVDWUMNALCWHYDCWNFPCHSJOGKFPGMVVIXHJ");
    tmp_tmp_tmp_msg_0_1_0.custom.assign("MDDCMPKOGZXBRKYNTHFJFGZVQGVDWFQUBQWMSHRECJPUTFHSQAITLIPDTZPNVRUXBYJAWBCLPNAIVZGIZAMXKCWCGWFBQFYORFVQRJIPVKZIHAHESWSFJLPEZLANEQKDQIDCAAUOFHBJDC");
    tmp_tmp_tmp_msg_0_1_0.plan_ref = 1066806398U;
    tmp_tmp_tmp_msg_0_1_0.id.assign("WBYHYSOACHPTQDIOYRIZMLCEBQVZIZNIYRQGZTIKOWEVBJETNVOGKRCPWGNZMZDJXUDERTCASIZXVCMLLTZBERTJOMYNCSEHVSGWKCWNTXLDYPPAUYRUAOVQHFODOLPFZBGQAKPZQKHBACPHBXANTDLESIQSJXUAHJ");
    tmp_tmp_tmp_msg_0_1_0.memento.assign("ZKYYFHRVYMWGDMFBINBFTFGIRYAQZKFMPLEKBNHUWTAVLSRR");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::EntityActivationState tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.state = 103U;
    tmp_tmp_tmp_msg_0_1_1.error.assign("QOCUZPJARIKMLCZMJTEBRFDFXGHDVOGLMHOVSNAAGOWUCTBBCADPXPHUHEICKMZEINBGVKNUSEKUDHWQRZYEDWUNTMAYKDANLENCMHTLKGPOXINYMWLWIJKAHXDKKQAXZZBCTPGBYVXSOSBOD");
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::AnnounceService tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.service.assign("LIQDYEZMYJRNIRDJTEGBVFGEDFNJXDIYYUYSWPX");
    tmp_tmp_msg_0_2.service_type = 123U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.1654688693580635);
    msg.setSource(14163U);
    msg.setSourceEntity(37U);
    msg.setDestination(52170U);
    msg.setDestinationEntity(101U);
    msg.command = 249U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("VINODGTYFQEFPVYKUGQNHBKKZASSTQJGLORAHXHCANJLEVTCPJXKPHBLUVPDQXSQBGHQRXOKDFCZEDYULUSYLWJSLJWTIWRMAMXDEVEFJBEBZMCZQPSSBRLJBYWNIUWDTTCOWUQONLGNIHEZDYGVIZAUEPXYHVAYIWXEDPCFKCXTRABKZFYMMTZAUYJPSGAQNDMFXMIIGZQVSNMBWZVOUNIORHFNLP");
    tmp_msg_0.description.assign("FUWKIIQKKXXPJEHTUDRJHBLPQLQJBJMUMXJPBZAUQHTYQZHYJYEFNZCVLDINRIFQXEBRANFHJDVMWOYMKXKLWYLCWSBOTDZVZIW");
    tmp_msg_0.vnamespace.assign("IVTXMQAGSZSFYOOWPREFFRLUKDZNWVYJVUPXVVSX");
    tmp_msg_0.start_man_id.assign("GDCSLTUKCMEDCPGELGULGRJHFUUSEGPKULZQHBIWEGFVOCVZRXRGWKZJAILOBPVVBHLOVPSKSKTRZFFRXPNSXWYNQSPNSXMSNIBIMEJYIFPJ");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("OHAOICSMGSIPPWIELIHJNVKAVNFPAOMBDDKBSZFNBENJOILXTVIJRJPUPPAYJBZKHJEWQUEIUSKSLTYLXZYNPMXKCHGGQRCSDADYFGRANEGJDVYRTHRISMEOTLRSCZVLTVUATXQBFYXGDGLCURMNONQFRGALOYTMXPVCZKBUKHCKXDOVREQHZWEQJFWXQEEQMHZGCWDBYQDK");
    IMC::YoYo tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 64018U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.4825500778599663;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.46613502357881254;
    tmp_tmp_tmp_msg_0_0_0.z = 0.7121431214356395;
    tmp_tmp_tmp_msg_0_0_0.z_units = 163U;
    tmp_tmp_tmp_msg_0_0_0.amplitude = 0.9289624149100277;
    tmp_tmp_tmp_msg_0_0_0.pitch = 0.08934803372077427;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.18524789281696752;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 78U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("CTAZNOWHCIKRYKBUVLJMDBLXTUDQQGDUIIETJAEQNTDGZWHVECTJZRVUNZEJJSZSEMXBLSSXKDOFLTICUVRDGVFOWVOUVGJJQUXMCRLOKSYUMFCEWQORCBTDTZBDEYNPVTIABMQHKHMZXQEXDBFPPNWGXJHSIMRLTAOVBWNSKCGFSDHCWMLUWYOBEPNNPFUHXNQYRYFXPWJAPOAILZJQPKIYAGNXRKYGSKMLHWFLRAHYBIPAZO");
    tmp_tmp_tmp_msg_0_0_0.plan_ref = 2139662531U;
    tmp_tmp_tmp_msg_0_0_0.id.assign("UFLKJLGQYRRXTXKMFOBYNJEWAECZADSNVDWNUXPUVJHTLNIMHKJLLSKTEYKEIJCRYZRWOCVXQJWHMYHUNAEBIHDZITHUHZBISVDEIPVONEFVFYAGXMDM");
    tmp_tmp_tmp_msg_0_0_0.memento.assign("BRWSOZNLAUZWKCPKDAKLKZPNQVKPYUWALIWVRNJYJYLFAZVIQAMGEJAHBXQYXVHYSFMGCDSOMFECYJNRMRDWEIRFQFZOZECEYIGJXDOKOOBMGIGEUWHHALRFJT");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::DesiredHeading tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.value = 0.4414801223335556;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("VSXNUNFEDAZCDPZRFQIIXTZXVRBEHBLJSIQMJXWRXZVTGHKRHVYDWYMJCYLUERLUSOFGFNCYJYKNGVOXWKAMTONRQOEBPSQXRUCYWTGDIKPJMJOJVDWHDFKXCLOZUEFYMCBEHUQTQKOZGZWJWNBOTTDGEMQPFPHPVCCBRBFDBLHCFIZHBIZIUYIHPSBNYWLTW");
    tmp_tmp_msg_0_1.dest_man.assign("ISAZZXQWLJLSPXJFQHULCXFNEYJQMPEHQVVKPTBNAZATTKNZSHMISYBKHNUPGZRADDLRWPRMOIEAWCYUZEQNQUNDEKFCCIIMYNPFXXSJBCZQSDHILKNOCFGPTDHQMAVRDXFRVTVYSNROXAOEVGRLDBDPZGQTOFJWVJMFGGEMMIFORBEBXOMWVA");
    tmp_tmp_msg_0_1.conditions.assign("CMVRCWYGTFIXPNSUHQBZKJNZWRXBEGKZPXLCDDUZEQWDALXSUOMEUWTTCFGUQMYWEHAZPLVUVIRHUTNRAPDJMGJTHDPIJBTHBHQXBLRRZXDXLIFGVVYZWBNLOYAWGEJJLDOIRBYAAHTFUXTSOKBCYBRDAOOLEVLHCMRVFOJIINNMCSMKZCKKIYGS");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::FormationPlanExecution tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.group_name.assign("WPYTTAXMRKMXVZPFQSAWUQXAJFZHWQVOGXF");
    tmp_tmp_msg_0_2.formation_name.assign("PQPYIBONLZEZWNEXWTRTSXGOWQBFFAAIRQOWATBTJLQNBTHMNKXVQEHSWWGNGFDAEVBOJNSZUOGNCYJFRMDSBRROPZCDUYUVCTKDEPGRFUYLKCQPXJMHCJUHYIYPTGTWLZUUFPZHLZUDBARPIXDMVVFYOTSFIAHENHXZEIBSLYLMZXKQCHGAYEPMVCZJWAE");
    tmp_tmp_msg_0_2.plan_id.assign("LVOHNZUBGQFWKMOHIGSJFLIVFHVKGFRKFJAUXAKSSIPURZMZXBLGHZPGRCMTAXVGQBOZLQQJVADHHXPTBYKWRPCDARYWZSKECJTBHOPVCXDYFWCQNQQTCMTNGNAXVS");
    tmp_tmp_msg_0_2.description.assign("NZYKTXDRLYGQSUJMFLONYEYCPHCLWJIQOATEVZUFRMBWDBACEZIXQITNCGRRQRTCGMMVMOSDQQGNLUGJSGWLHIKVQRJBVQUVIPVBTMBWVLZNBATTIFNFGZDHFHMWQLLXSOESDIROHCJGICPRAYPDSIUYAWEUHXFXMZNMEEPUOXXNBPKBKZFNOGDAOHTFXDSTZJAEPDXYLNFKYVFEOKJLVKHWYRSKZXVPZGCBJWMROPUTJASWEPDHWUIKHCYQ");
    tmp_tmp_msg_0_2.leader_speed = 0.09799981575942018;
    tmp_tmp_msg_0_2.leader_bank_lim = 0.5981076612091222;
    tmp_tmp_msg_0_2.pos_sim_err_lim = 0.5097930439840411;
    tmp_tmp_msg_0_2.pos_sim_err_wrn = 0.4657153514843806;
    tmp_tmp_msg_0_2.pos_sim_err_timeout = 35992U;
    tmp_tmp_msg_0_2.converg_max = 0.9354021531567336;
    tmp_tmp_msg_0_2.converg_timeout = 61450U;
    tmp_tmp_msg_0_2.comms_timeout = 52338U;
    tmp_tmp_msg_0_2.turb_lim = 0.35381947319358764;
    tmp_tmp_msg_0_2.custom.assign("CPJRJEFZWUSWVGDFWTBTGHWZIOMWVEGESLYXQMBKUETBNFPQWUZGIBRPHUGSHSGQNWPBETPXXCYJTAELXLACYKVRDYIGBOKVOFDVYNQPLBYQSCKLEMYPYXKHXUOKDWUUZFIREDNRWYIQNAILLHILDCQHEJMFTHBOIBKOCCJGSTVRKLMVNKPHSRQNPBAZZMNSSCONCSAFVJDYXRTRMZ");
    tmp_tmp_msg_0_2.plan_ref = 2389074638U;
    tmp_tmp_msg_0_2.id.assign("DIYQWBZZFVMZCKQPQSQEYIOMTUNFTXFQYFZSYNQKHXKUCINCAUXPPEDKORHBSPWDUAW");
    tmp_tmp_msg_0_2.memento.assign("WKNHOOEVVWFLJTNYLBLWIYCGHTAJYGPINOREEGAMHADISHFNBPDULALLVVOVCTCXNCTAVIWGRKTPSKGHOFIZXSBSEMCJNPQOJJENDABQLYQESXUFBVPXGXYMQM");
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
    msg.setTimeStamp(0.7447585601936169);
    msg.setSource(8122U);
    msg.setSourceEntity(182U);
    msg.setDestination(9663U);
    msg.setDestinationEntity(46U);
    msg.state = 28U;
    msg.plan_id.assign("EWOVVUXRUWTAQWYGWXKASMLJRICRTDSMVFLJDWKCBMOKMVJGDNSXWBDUYKQOVUJHOBNYZPQLFFEOXEFZZAKAQEBCJBSGYQPFQAKIIGHHFZATDSDBLZOKMLNNHEAPYQGGCRSGUJCNATUCLTPKVEFHNRDPHSVLQPEZWJZATINY");
    msg.comm_level = 145U;

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
    msg.setTimeStamp(0.23961852001544737);
    msg.setSource(25863U);
    msg.setSourceEntity(0U);
    msg.setDestination(16091U);
    msg.setDestinationEntity(201U);
    msg.state = 198U;
    msg.plan_id.assign("FSZLXUQPNZTJBIGJQLEHCNUNSQTTZZCOGWVPWFZPVXJYVOYDXJBHLGDYPIIYBCEHHYUMNP");
    msg.comm_level = 96U;

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
    msg.setTimeStamp(0.09783708946128733);
    msg.setSource(61050U);
    msg.setSourceEntity(48U);
    msg.setDestination(54614U);
    msg.setDestinationEntity(123U);
    msg.state = 228U;
    msg.plan_id.assign("BPNPNZKVMCBSWOZJMCSXSMOUWYKCDOZYIGACGCJBYVDGYHIQKC");
    msg.comm_level = 152U;

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
    msg.setTimeStamp(0.5501102775051746);
    msg.setSource(60222U);
    msg.setSourceEntity(34U);
    msg.setDestination(49202U);
    msg.setDestinationEntity(15U);
    msg.type = 97U;
    msg.op = 92U;
    msg.request_id = 17781U;
    msg.plan_id.assign("PMGCIHMVUDTQZVTETRJTLHYSFDEKHUVJEVEIFPBNWXKFJCRYBOQWZLDGJMAAJBBKFOUAURGDJZQXZUMZYAPNLYMQRBYGATGFSXYIMHAPQGXJMPIEVKVEKOWKZIPZFTIBGSLHSURBNQFUKPXCHYDOUUGNSNWCHNQDJCKAQSDRWMXJLCRZINXFKZWNH");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("DYMUUFGIBRJTOOYRHZRCKATTKSWLUWE");
    tmp_msg_0.value.assign("BQZJXYHFKVXN");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZPLNZMVBJTDYUGQPSECODCENMKZFEMRGMEKQQWWZOUDWOZVLNECLKOGASDBKUTRFDGUVUWSBQJTCFMYCFQMGSIQJTRHABYOVDVHXXXEHJCSYVEAFQHACLUSXHBYTOADIYCVSTIUEGNAJBESIHCGWFWGJRRVPAZMOAFNNYV");

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
    msg.setTimeStamp(0.9867430910592023);
    msg.setSource(27539U);
    msg.setSourceEntity(110U);
    msg.setDestination(26058U);
    msg.setDestinationEntity(139U);
    msg.type = 74U;
    msg.op = 88U;
    msg.request_id = 37109U;
    msg.plan_id.assign("JSRTUZXETLUNIYFCCUHRJLMODBAAYIKVSOZGSZGCRDJXDXHWXUOTAJRHEZUFLMSUMBSQWFFLTAHSERYWJFTIXQZHLLAGEIHNAPEQVPKCIPUDPAKETFARIBOLLSCYRQMJSJPNMCGYBKNQOVRQVCXSEFOTLJYJGYQIPVNKHPODICNCKRBNBWDOCFEBYBWMKSRWQHOYOKBHPAQTEZDFDVXEGNWGPXGYGGNJDWFUZZDMXVPWXWMVBIZTVNMIM");
    IMC::Sms tmp_msg_0;
    tmp_msg_0.number.assign("MYNZWQJEGODZFUMSJSSMHOOZHSILPBKCYPAREXXETEIATVFVNRTURBIPHRBTHGATVDURXGGZJYMFSGEAARBLXJYRWMYVTNBECLDOKVIGPZQVRULUDEXOKZPCAWAIGXHJLDNSSEDUUWUHKDOQHTIPDXQVNNCFKWSCFLWFJFRPBCJOGSKDLPOOGXKWKFMNQMHCQMXXBTIQCNCBZZQAUMFYL");
    tmp_msg_0.timeout = 13824U;
    tmp_msg_0.contents.assign("ZNDMOKBXUZWQISQMRJVJMCFFBQBIYKPYUYEVKOIHVKVOAFBWCHYAFGMNBSTUFWAQKUIPCSBYDQKZEVJDGFQGILWJXEJLGXDSPSJSRFCXUJLDXABRZCLKVZANMGAPNTNMHMNCFKCPDUWRONKHSCXQI");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HFNFNAWXUOSELDNCZZUESOPGELHBKDQOSIJXVULGJSHHRROKYXEQZYSYQWAUVNYWUYVZBXTLROJGNM");

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
    msg.setTimeStamp(0.2704702541088426);
    msg.setSource(44582U);
    msg.setSourceEntity(84U);
    msg.setDestination(47231U);
    msg.setDestinationEntity(66U);
    msg.type = 251U;
    msg.op = 82U;
    msg.request_id = 54583U;
    msg.plan_id.assign("CONISDHEDOYTXCQCPBFXJWJKOURRIKQDBDAIKOCQJMYWPGIQLZLPVTODWNFAXXFPYENWJMEBQJZXSBAUGWESCIKVHPQTKABVBXTZIETPLWHCRFGRBRTFNQRCDFETHKBRVSUSUWYJABFUPU");
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 13861U;
    tmp_msg_0.lat = 0.04423698232499551;
    tmp_msg_0.lon = 0.5612891379881126;
    tmp_msg_0.z = 0.680167781887987;
    tmp_msg_0.z_units = 40U;
    tmp_msg_0.speed = 0.5445125931747355;
    tmp_msg_0.speed_units = 21U;
    tmp_msg_0.roll = 0.296783207125894;
    tmp_msg_0.pitch = 0.25402003237342297;
    tmp_msg_0.yaw = 0.7758521576424596;
    tmp_msg_0.custom.assign("GDYEHUJRBGBCXSFVEVOXKVIDZAODYZTIDWFALCPHJZFEGQGEHWSVYSMHUCIGJJMMKKFWBNSAH");
    tmp_msg_0.plan_ref = 3126956538U;
    tmp_msg_0.id.assign("IEBJXGTMDSTJBAEIRUIMOBOWVKSACSGLDUOMPYWNJKJEQQSRPUYRD");
    tmp_msg_0.memento.assign("AOMLTMQLZDIFWYHSKSRUZOXXGFVLW");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("INMJWQVYSNIFDPGWUZFOQCIRCPGZILARVNLTENRBNSVLHWGTNTAXTGZBANESMKRTJCLGYOOVYZOOBSQRWGETPEGFWDHHAZPHEZMLJZXMJDBMJDXUIHDYDQJFKSLVORUFOQMNSERLBFBRTQPHFBHYMOGYNSXVXWKPAYVQDIKPEWNDXPTTUQJYBLCIECCATJUHWPZCEUOCVJUDZLAGQUMMRPUISYVVGWMCYSJSKDRFKBKFBOEKULA");

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
    msg.setTimeStamp(0.11869215741799644);
    msg.setSource(35152U);
    msg.setSourceEntity(232U);
    msg.setDestination(13508U);
    msg.setDestinationEntity(202U);
    msg.plan_count = 37960U;
    msg.plan_size = 3022325052U;
    msg.change_time = 0.04224685887572688;
    msg.change_sid = 2875U;
    msg.change_sname.assign("EDAJUEZTYRIWNZPDXIKFNBDRCGHXYAOXJUSGLHFUJZLS");
    const char tmp_msg_0[] = {117, -116, -122, -97, 116, 89, -114, -125, -110, -55, 73, -44, -5, -3, 76, 71, 76, -32, -5, 125, -61, -60, 6, 123, -102, 103, 86, 29, -69, 56, 54, 125, 80, -82, -74, 20, 103, 99, 32, -122, -102, -65, 96, 117, 12, -14, 97, 0, 23, 93, 35, -81, -87, -98, -57, 101, 120, 94, -3, 49, 25, 104, -24, -83, 6, -88, 109, 112, 84, 106, 20, 114, 86, 60, 116, 123, 5, -64, 30, 112, -59, -20, 57, 32, 103, -120, -51, -38, -53, 64, -92, 61, -120, 90, 27, 25, -36, -114, 65, -90, -101, -112, -35, 33, -46, -123, 91, 33, 93, -107, -10, 47, 17, -92, 95, -67, -101, 44, -29, -94, -10};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("TOACPGJAGMQSDXEIZJLZPGMKDWZKATVUOXBGZLBYIWITNIYLYSSPPBWJPJGVKLCHCEFWPUDFFDTJWCWFQHBIUFGIFGXLENPWVCTNKGFUNRDSGPHVFUKDAMNHJMLIXOMHMQDCAEBZLHRZHTDAX");
    tmp_msg_1.plan_size = 20138U;
    tmp_msg_1.change_time = 0.4862984670172924;
    tmp_msg_1.change_sid = 65049U;
    tmp_msg_1.change_sname.assign("BXSVROPGLUDSPKLPQVOFOENKNHBNHSENODQQMUNAEZQOKSGSHLVAZMLFFRBWXVJZTPRWHTMFJDGXHRTEOMEAZJFRGZTXXWIMJDIEIIMTCYXZATNKFAXUYFDBSZEUZKGCQWFUPIBFGOKJHPZLDLDLTQKDHJ");
    const char tmp_tmp_msg_1_0[] = {45, -78, -12, 124, -78, -42, -43, -53, -61, 82, 5, -34, 54, 36, -41, -59, -64, -93, -73, -81, 75, -92, -23, 123, -9, -85, -124, -95, -85, -35, 65, 51, 28, -93, -128, 125, 19, -3, -92, -47, -64, -85, 7, 70, 63, -118, 79, -32, 94, -71, -83, -74, 70, 25, 107, 84, 7, -21, 91, -128, -93, 16, -95, 111, -39, -6, 102, -59, 63, -11, 92, -41, -111, -31, -67, 64, 63, 105, -4, -128, 80, 57, 48, 37, 0, -2, -105, -86, -29, -51, 60, -86, 39, 59, 97, 27, -22, -5, 115, -126, -13, 20, -16, -43, 97};
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
    msg.setTimeStamp(0.600433651653499);
    msg.setSource(39929U);
    msg.setSourceEntity(111U);
    msg.setDestination(42527U);
    msg.setDestinationEntity(113U);
    msg.plan_count = 47276U;
    msg.plan_size = 220261288U;
    msg.change_time = 0.11940971982745874;
    msg.change_sid = 55062U;
    msg.change_sname.assign("YNXIJSQCOSYUZJKEHUKAMPADEDYEBJLMFHYNOKFPXFQRHGFIIDYTALROHFLMTXEPWGQRLHYAPEWWVOLOFVGXRESMAIZCFKMDFOOQCXQZLWBCSWWZSDRGOUSNKCJMSAEVZZHVPKAZPJEFNUUXTKJJDTQCDBIWYGTBGRVBMIVRKGBYIQFYTQASBNVUGPLTNZB");
    const char tmp_msg_0[] = {-1, -32, -102, -92, 21, -14, 40, 78, -52, -58, -35, -84, -42, -89, -1, 64, -40, 79, -89, 2, -36, -45, 22, 105, 23, -56, 110, -33, -128, 110, -74, -110, -9, 123, 94, -110, -42, 90, 53, 102, -63, -7, 77, 67, 36, -58, 46, -96, 55, -115, -75, -82, -110, 51, 38, -86, 42, 62, 107, 4, -127, -56, -9, -22, 18, -73, -46, 1, 9, -118, -59, -102, -124, -84, 19, 62, -51, -36, -14, -87, 80, 99, -42, -80, -54, 54, -100, -108, -70, -113, -1, 77, 15, 62, -90, -24, -76, -91, 79, -34, -25, -2, -58, 53, -49};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("GZOHXWGSJDURFHABQSHQPAVVCDIZPLLMQRXIQNCWXKFYWBTUDBHCQTURRFFTSKFDAIYIPZKVBRLLYHBCLNZHYMFENIPFKVCUSHWSAVONKXKLEKCRPTHGOWWQEQNBAJPATWJPBYKEQYZPSJUZWPUYOOMRMKNULAGHMOMQCIOYDXWOJTND");
    tmp_msg_1.plan_size = 37269U;
    tmp_msg_1.change_time = 0.94790002439572;
    tmp_msg_1.change_sid = 49959U;
    tmp_msg_1.change_sname.assign("FPTUNUOGFMYNKUUJVUANGNYJOAUHUQCEHOAYEDXQKXOSXGRIOSSVMLXLUKZEXDTYVYFFZWLBWNEVFIDQWDHRLOKVLYUPHKZDGJYPZMMRTIFN");
    const char tmp_tmp_msg_1_0[] = {-46, -89, -96, 103, -122, -110, -113, -78, -67, -54, -54, 2, -111, -51, -108, 119, 44, 72, 0, -6, 82, 116, 57, 81};
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
    msg.setTimeStamp(0.5840111309505132);
    msg.setSource(60142U);
    msg.setSourceEntity(167U);
    msg.setDestination(21275U);
    msg.setDestinationEntity(37U);
    msg.plan_count = 43523U;
    msg.plan_size = 2387129326U;
    msg.change_time = 0.30009542458462957;
    msg.change_sid = 13903U;
    msg.change_sname.assign("SETQHMBRSIRKKMXEGQMPWQGMMYNOHDAAISROGEKZSLAJMOOZQVANUYEYHTFZUDLPHWPRUYZBUPDBO");
    const char tmp_msg_0[] = {-44, -73, 15, -4, -9, 15, 105, -74, -12, -93, -125, -115, 107, -48, -9};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("QVVFWNXUCMGPWZUIMGPEGLCCXDWEYJZSLYFGUNHFZDSTDPEIDITYNPJUMRGUOSMLBPASWTBGFLARJTJQWZRYHLFBRNRCREDHPCUXNJQTKNRXQDFUVYOQJIDJKJWTXDVGQEGMAVOEZVLGARXTGIWZNBAOQAVLUQLMOQJWSHNAEHZCVCHYXWBYIEBABOEPBSIBCHKSZ");
    tmp_msg_1.plan_size = 28207U;
    tmp_msg_1.change_time = 0.005140103788451866;
    tmp_msg_1.change_sid = 32849U;
    tmp_msg_1.change_sname.assign("QSJVEAFNIDYRPWOCMCJFLTNTQOKIHRTXQXOORMZAWDZQGXRCVVUKKKYPOGGY");
    const char tmp_tmp_msg_1_0[] = {-43, -50, -14, -61, -18, 116, -50, 14, 88, 33, -85, 94, -100, -124, 39, 126, 21, 98, 69, -81, 78, 56, -30, -58, -27, -56, 91, 72, 109, 68, -45, -44, 123, 94, 19, -34, 71, -58, -74, 62, 126, -5, -83, 112, -106, 37, 106, 102, 51, -52, -104, 25, 111, -112, -115, -32, -86, -112, -26, -55, 85, -82, -71, 53, -2, 0, -73, -100, -70, 7, 124, 91, 19, 117, -10, 109, -66, -111, 22, 122, -22, -115, 19, 92, 123, 43, -86, 51, 119, 85, 123, 48, -99, 34, 103, -3, 51, -5, -23, -63, -64, -1, 2, -1, 65, 44, 120, 13, 1, -74, 65, 6, 114, -79, -110, -54, 78, -108, -82, -107, 98, 24, -55, -69, -64, -83, -41, 12, 52, 4, 63, 27, -95, 32, 83, 36, 11, 9, -13, -47, 123, 17, -2, 9, 46, -21, -60, -46, -65, 32, -72, 102, 16, 3, -96, -34, -116, 76, 28, 83, -52, 47, 61, 125, -4, -48, -105, -33, -64, -96, -18, -62, -127, 83, 63, -11, -64, -78, 74, 81, -82, 24};
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
    msg.setTimeStamp(0.8356802707104991);
    msg.setSource(28855U);
    msg.setSourceEntity(123U);
    msg.setDestination(64517U);
    msg.setDestinationEntity(225U);
    msg.plan_id.assign("GFPMBVEUVTFEIKOXPCODNACIMQNRTYILZSQAVNQGJHMHXUCAPNXNKXCRLHTGLESZJIWBGWFKDQRFIXNTOESMSSHRSONAWVPUCQLAKEJTWKM");
    msg.plan_size = 49228U;
    msg.change_time = 0.418964686982075;
    msg.change_sid = 12465U;
    msg.change_sname.assign("HRANPJYQBYVPPYTXZTMFFYOCQDVSTDICXEGDMJIHIQALBZFIPBHGVIAWZHGNBKVRSGRHSBQKLWKUTCNHQJGJPRLBRMFVONOEIPCOAQTCNTWDWIHMSFKLATZNEUPCNMEKZHQCJKWXJKNGQIXPYRLBSBOAKDQUUHMIGXOKGHWFVLONATFVLERSGAEXWZY");
    const char tmp_msg_0[] = {-9, -95, 27, 25, -14, -7, 105, -110, -106, 69, -127, 99, -119, 62, 86};
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
    msg.setTimeStamp(0.4438034513041823);
    msg.setSource(54800U);
    msg.setSourceEntity(98U);
    msg.setDestination(44164U);
    msg.setDestinationEntity(123U);
    msg.plan_id.assign("UJKOCICAKAORSSIXHMBMDGKWNPLVFXGTKGZDUZCHCLRFQHTJAUPZHYRVUHFVCYOEMRUGNFOEKISUHEFWHOJPSDLEYKARSJIZAGVDOGQCFNQBCTEFEJTCFLVDYBKBUXPXJNZQWPNWLRSASGGXTJQTQZXTZBJKVUVIUMZNHYHWOLXERMNPQCEF");
    msg.plan_size = 36369U;
    msg.change_time = 0.27671054966088393;
    msg.change_sid = 11281U;
    msg.change_sname.assign("MPKYZVQYWRTKHGQCUCATXPUDQTNIEUVIULCVHTNEAYZTGVOMRXBOHYRHXZANLPIBYASAMKCGFZRJBDHTWFDOBIBUWEGMKHEHJXJDUMBFXYMAONZRILONJNOEUDQSHVCTBZVFFGQWJLIMMAMGXBNDGRMRTAVLKILLCYQDTJIZXLOCCFRQPSWNHLVFHREOSNGKJSFKFPPEWJUVYSZBJWXJZVQXGSLSP");
    const char tmp_msg_0[] = {-73, 119, 22, 13, 100, -88, -123, 8, 103, -69, 66, 69, -67, 114, -90, -25, -47, -91, -44, 92, 70, -53, -112, -48, -58, 24, 26, -93, -120, -78, 77, -26, -26, -58, -123, -98, 18, 7, -59, 49, 106, -81, 13, 56, 97, -124, 82, -103, -44, 2, -127, 41, -33, -34, -65, 62, -72, -92, -37, -120, 121, 124, 123, -51, 72, 47, 25, -125, 40, 79, -64, 79, -40, -34, 120, -83, 34, 36, 38, 42, 43, 96, -14, 111, 87, 80, 72, -47, 100, -33, -37, 112, -33, -64, 68, 68, 97, 41, -95, 44, -78, 17, 78, -25, 123, -74, -46, 33, 90, -120, 68, -88, 101, -87, -55, -2, -36, 66, -17, -95, 109, 124, -90, 122, 2, 50, -6, 91, 78, -101, 126, 30, -18, -15, -109, 45, 38, 33, -8, 86, -68, -29, 57, -48, 125, 25, -30, 26, -15, 30, 94, -122, -54, -75, -11, -73, -17, 82, 66, -72, -36, 110, -117, -12, 23, 81, -43, 89, -85, -85, 65, -56, 73, -120, 31, 56, 29, -117, -63, 0, -104, 88, 4, 60, -31};
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
    msg.setTimeStamp(0.06411843874894563);
    msg.setSource(23094U);
    msg.setSourceEntity(212U);
    msg.setDestination(33389U);
    msg.setDestinationEntity(167U);
    msg.plan_id.assign("CELEFZCKUBWROZWCLVPVRNAITKQTJMWMBCTMNBDL");
    msg.plan_size = 16213U;
    msg.change_time = 0.7459657325606635;
    msg.change_sid = 10496U;
    msg.change_sname.assign("JVUOHWTPPBZYKWDZMEUYNIHTYKBFOFWLBDUZQGPMXGBNPBHXFYDVROOGRXVVDIQUULJBKWGIKUFLANZEJYEXARYLCIKQIPABVJHSONRGNDTRTFRDFQRENHNAMUESKSRBWNJOXAWSJTOODSLCXPHMTVWUHXOGJRPGPAFVMFDMHMYJ");
    const char tmp_msg_0[] = {-69, 91, -88, 60, -120, 113, 66, 109, -96, 125, -108, -6, 81, -1, -88, 62, 46, 116, 106, -1, 106, 85, -77, -82, -93, -26, -73, -54, 67, 102, -89, 77, -122, -33, 107, 111, -17, -103, 92, -32, -97, 46, -98, -110, -91, -88, -4, -25, -28, -114, -86, -76, -80, -1, -19, 118, 24, 48, 112, 77, 61, -83};
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
    msg.setTimeStamp(0.5381424618451615);
    msg.setSource(16424U);
    msg.setSourceEntity(125U);
    msg.setDestination(62279U);
    msg.setDestinationEntity(68U);
    msg.type = 15U;
    msg.op = 221U;
    msg.request_id = 53495U;
    msg.plan_id.assign("QFTBBIXZSILXHEGGYFODJERPHZYNTFJJJEYWLWQLOQHUQCNJTCUFSDPRLVVWLDQGXIMQVVYWSBWKAODHDVACQUPKIOINMNAYRJBTUXCHZMVBRZLMENOGUMBEQVHEIWDITHTJBBOXRQWHYNJGEZXMLWGFNCBASPUCSGAASNFDLYAICWTJXASTVLOPMEDKPHKYSOUZKTLG");
    msg.flags = 51679U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 32751U;
    tmp_msg_0.lat = 0.3376262927472239;
    tmp_msg_0.lon = 0.35379861678283686;
    tmp_msg_0.z = 0.2558779367543046;
    tmp_msg_0.z_units = 108U;
    tmp_msg_0.amplitude = 0.44539728839913806;
    tmp_msg_0.pitch = 0.37585286691722664;
    tmp_msg_0.speed = 0.9870448888062984;
    tmp_msg_0.speed_units = 154U;
    tmp_msg_0.custom.assign("FTFEEIMMYDGRGWQFRDDKJAADVOPYWQTXRJVTUULVCSBLJZMEGNMPDCVUWHCLPCYSTZXVRHFSSCWKGSEIGFDZNPNASYOVBIMFZDXZJYIUVUEFWCNFXKMNLTGPMTRKJGSHTMCTRAXVBZZCKJXRQQGBZJTOACPQOZPWZYEONWAUEWBVHELMNQNXYKYUHHOKPUKKUQNXRSHQPADDGJFBBXQJSLPAF");
    tmp_msg_0.plan_ref = 3333526072U;
    tmp_msg_0.id.assign("JGGAPLQQNTCLEWSFHLMRVXMUSIBCNRPDZKUIEKZAHHXKDXZLTPVCPLMYBJMISTWMGHSWJRDQJAJZCARXMNXAAFYLJGETMAGXHFQKPRIZEPIWPUJEZUSYVVVWMIXLREEYNQDFGDHFCOGQDYOXYDGLNSBYLKIRZIKUKE");
    tmp_msg_0.memento.assign("JAGATHQFAKYIMHWYHPNSMHLTZFWMNYNHSNZTLTZILQKJDXEVLZAGWVASCKPKOLHRWTRDTYVRBJKWYTPSMJSGRSZQDEGUSXOWZTACLVFWPCAPBVUEWNKBORONBLGXHCCPAQLDNZBVCCIEEPIEREZBXOXKITESDO");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XQCIXPLYKWQPAZDGNFYCEHFBGMQXDIVOJDKIWMAWYDBOKWCEGCKXRKWHILGRUQMOTEPLHWDYZTISXXKTOAFPRRMXYZDXTPYSHFVATOPREC");

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
    msg.setTimeStamp(0.5310400541084956);
    msg.setSource(58813U);
    msg.setSourceEntity(199U);
    msg.setDestination(28552U);
    msg.setDestinationEntity(189U);
    msg.type = 49U;
    msg.op = 214U;
    msg.request_id = 14871U;
    msg.plan_id.assign("ULFEYVKPDWSIWMQWYHURWMEIYQQSKTPALQYSNHOJONEVRITKDWITEVFFFIFXUPOVZXHMCJCBQSLZUZRBLNGDRDPHOXQXBIUOZEBJGMTENMAHYZMHXYMRPMVSYVITOETAXIZOCGCUDKJIFCSJAPHASGZBWYRCUQGNHKOKATLVGNPFQUTOBPBBFLJLYUCBKNCRRAQAZSYVXSDEKFFWHWGSXCCTJLEAZGTMDDMHUKJWZXRDAJVBQGLDWPNGNVLPI");
    msg.flags = 26619U;
    IMC::WaterVelocity tmp_msg_0;
    tmp_msg_0.validity = 66U;
    tmp_msg_0.x = 0.7496743673275382;
    tmp_msg_0.y = 0.5688563586089265;
    tmp_msg_0.z = 0.07510307440617803;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SIJAFECLMQOUZRHABCVMAUJCRMNXRBBWBYNWI");

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
    msg.setTimeStamp(0.5678545618818198);
    msg.setSource(64422U);
    msg.setSourceEntity(72U);
    msg.setDestination(9858U);
    msg.setDestinationEntity(179U);
    msg.type = 186U;
    msg.op = 49U;
    msg.request_id = 34468U;
    msg.plan_id.assign("LZDWZZIQCNIYNAYLJRPQBBDVZDRAJUWKIIUFQZTGPFMAFSANSSKKDDVMSLEHTBIPVRXKEMPUWTDTM");
    msg.flags = 6014U;
    IMC::SetEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("GHYFPVTWBPYNYAQKFOLIQMHJQSCNI");
    IMC::EntityParameter tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KQHLEALVPRRIQWMZGMRWSEWE");
    tmp_tmp_msg_0_0.value.assign("QWRUJCWPEISLSQQSVTUNMXZOYVNYYSACWIHSENTXQKVQTQTPJLMFQWIVARNEVUYHEFDKJGXUKFXHFIGEMGKGHLVHDPVEAPPWQFDGYIFHKKOSUFDPJVLCGORHSQZADWTEOKIAIVSFOQYLHRJ");
    tmp_msg_0.params.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HEAARPSULMMDOSJOIBNLSTEXOCJYSFORLXDNHGAKTOEXRAAJMJWZSFTQLCPYISFJMKIEQPMWVKQZBSIGJETDT");

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
    msg.setTimeStamp(0.37865623019683436);
    msg.setSource(27373U);
    msg.setSourceEntity(142U);
    msg.setDestination(5022U);
    msg.setDestinationEntity(131U);
    msg.state = 139U;
    msg.plan_id.assign("ZKVJKQHLWBUBJDBCAZXVWXQNGRYSGPE");
    msg.plan_eta = -868756235;
    msg.plan_progress = 0.12223561491988755;
    msg.man_id.assign("BLOPTSHDSYUBDSHRKROGEDXBWZJLHXHVDAQXPONVWKYOMJDDQXIIGVTLOQIWNNLALZWHKKWWUCAGGMFBQQZJMXMXPLZNTPKUMAECSHWMIZYLKMSVCMLRPUXDYJWRPVPNCDMUOYRWKQVIDCXYJELFXZTUNRRPOKEICTAKFFCFNM");
    msg.man_type = 11531U;
    msg.man_eta = -525580597;
    msg.last_outcome = 97U;

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
    msg.setTimeStamp(0.014974785288803583);
    msg.setSource(1625U);
    msg.setSourceEntity(92U);
    msg.setDestination(34322U);
    msg.setDestinationEntity(156U);
    msg.state = 251U;
    msg.plan_id.assign("JRDQHOYWUVSMYLDNZYUMMQDAXESOTSKXNPPIJHKZUNKJWWIJHFFYLXAKIBGWYRQKFMLYBGHTARWKGFNRJIKAVAVHXSJLCRCOMRDXVBLBMTDCUVVEZYIQENHBGEPIDUCLGSPWJQCPXINDTXBYTZGPCQKCOYCOEVFLMBPGXUAOJOBPPZDEESETZRXUTANVBRJWSONKFNG");
    msg.plan_eta = -167235937;
    msg.plan_progress = 0.03128123620042944;
    msg.man_id.assign("ODPUCBNEJXEEZNUOPHIKPSAMIYVRNMOPFTNAKUULKXVORINLCQXKFFRLMZMGGJBLWSGDHFHFSEBXSJQNIVUKBNQOGVHTBWCBAAUTRXISYKAFJJFDLDCDPGVWLTBECQUZKAMTSOXOJGSXRKZDXRDPSLZTHHSMWKGHZEZMWBUQFGPVYWZDWFIAGCZUCTYBHPTACVVPTVNRJIKOLA");
    msg.man_type = 61401U;
    msg.man_eta = -435151274;
    msg.last_outcome = 160U;

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
    msg.setTimeStamp(0.4607848456943513);
    msg.setSource(5384U);
    msg.setSourceEntity(199U);
    msg.setDestination(36980U);
    msg.setDestinationEntity(120U);
    msg.state = 215U;
    msg.plan_id.assign("WZTHOJZEXFPXFMYQSEWCVZHFRWDYSAOFJYFCLMCRZVBSEHXSUHYZDOOKMIPJVKVTQIUCIIQGIREJNUJGOGBC");
    msg.plan_eta = 1948368235;
    msg.plan_progress = 0.7444929271117033;
    msg.man_id.assign("NGRLQZVZENHUIQLAVWGXONXMACDTATVCVJJRPUNYYWLTUTJAKKIRPZDBSCFSMOET");
    msg.man_type = 31422U;
    msg.man_eta = -547246015;
    msg.last_outcome = 173U;

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
    msg.setTimeStamp(0.13204839059706575);
    msg.setSource(17918U);
    msg.setSourceEntity(131U);
    msg.setDestination(24499U);
    msg.setDestinationEntity(17U);
    msg.name.assign("FABNCNRDGLZIBIRPILNDMAOWOXLBZIFSQTJUUAXXGSALWDZGLUWPXOMAJHZQKXEPCM");
    msg.value.assign("TLXLGMSFIGICWEULQEAARUPKDOBIBGOVZYUOIHMABRXCDOJLXKZFFHHJOTBYJLDFORDUCDMYYQBAZCUNADFFNSWFJWVPLVXXBHISKSCWXGCENQZJZMIJUIHLCCBWHBGWVEAYMWKARAMLCRDPTNMXSGNSESQARSPZDBREOGKWZVYTDKTIVETOTNVVXVJJMYHOGNR");
    msg.type = 209U;
    msg.access = 152U;

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
    msg.setTimeStamp(0.9936564632998078);
    msg.setSource(40850U);
    msg.setSourceEntity(58U);
    msg.setDestination(47949U);
    msg.setDestinationEntity(21U);
    msg.name.assign("UYSQDWFUUTJOHZIDQUVYKNEYCG");
    msg.value.assign("DTSAAQIBUURNRCLWDFWLYXXISMXNRHEDDQPMJYPOGHHJGKTBVOQBGQBWDYNQJLMVXVMZFIVRAETPEZYFLBEGAOZEOICQKOBZDQHSXGHMHLMTONMPTHRXEUOSKMWPQKVNFSBKILJEWJFBHTHIILLYRZTJDDOCSKCGMXJVFCGWDSKNZPLSDFZROBOJWZGMYFETANAYFPKRCNVASCJQICWRVBGCNUNWWUGJSITZHEFYKIZELQXARTUV");
    msg.type = 226U;
    msg.access = 61U;

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
    msg.setTimeStamp(0.33244287393117644);
    msg.setSource(36005U);
    msg.setSourceEntity(81U);
    msg.setDestination(15156U);
    msg.setDestinationEntity(88U);
    msg.name.assign("WKDSHFTNZXHWCDIDNRUQBLGZTYEUHRDJSYPSGBTIACYKRBILCWXQJXGEAZXHMNINCTDMZJQIHLVMCVLZLPLVOUBUJHPSFYWWGJG");
    msg.value.assign("PUUDGYXPXOEDA");
    msg.type = 95U;
    msg.access = 85U;

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
    msg.setTimeStamp(0.16198734871367793);
    msg.setSource(53760U);
    msg.setSourceEntity(159U);
    msg.setDestination(45552U);
    msg.setDestinationEntity(152U);
    msg.cmd = 72U;
    msg.op = 86U;
    msg.plan_id.assign("WQTCVFCVJKXGUQCLJRREMROGWQLXFZKLICNNZHTANCPJBAXVVGEIVUVBZTKBYGBEPMSYIRFOMQRCPYBEMTXAHEOORPGCMHMCPBWBKDOYYOJDHKYVQDPTCBXRSRPBNLA");
    msg.params.assign("HVHPTUDPIVFI");

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
    msg.setTimeStamp(0.6351153633731564);
    msg.setSource(47934U);
    msg.setSourceEntity(190U);
    msg.setDestination(25983U);
    msg.setDestinationEntity(3U);
    msg.cmd = 8U;
    msg.op = 182U;
    msg.plan_id.assign("RIKDDXFZBOKDJKFLFKGEXZFEBIMTJDQUN");
    msg.params.assign("PWRBFFLBEVSQJGWZMYPHKAJSXBUASZVYDFJHOCEQECNHULBSZRTD");

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
    msg.setTimeStamp(0.316403463457135);
    msg.setSource(62677U);
    msg.setSourceEntity(68U);
    msg.setDestination(57633U);
    msg.setDestinationEntity(236U);
    msg.cmd = 8U;
    msg.op = 145U;
    msg.plan_id.assign("ZRFOEDQWNVGGRTUONQHUQTYGCTWQAA");
    msg.params.assign("HVXBRFOCRDQDURRUYSIDXHEIMUYMPRWPJTBKGQCIGRCELEZSDHPTWYSLXVQKJNHFWZREJDDPZRDLCWSSCYXNMCBUJJNMBQZLEBTMBMMZUPHSWIWTKUEOKRYYQXKDFIOJTCAFUVBCPWPYZAPIXQBSJAFOHFZNFJUEKEOEFVNQZAXVATBVTGGXFKVMN");

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
    msg.setTimeStamp(0.09632241977601352);
    msg.setSource(52064U);
    msg.setSourceEntity(49U);
    msg.setDestination(42132U);
    msg.setDestinationEntity(43U);
    msg.group_name.assign("HVLUWZBLLAWSHGEPMSIZRVZPQYQTAVIUKVBNFYYCVEVBQNDURZCGLJMKAXHNEJDGLAQXOYEHJIPVARHEVTICPIDVKHYALMFNOKNCDBOZMFKZBTDUUXWXHXJYYQQGVHSFHIFFEFGNRERTCUSWLQJIIUUPQPZALZETSJSIKKMCDGJQPGNWCBMORSMTSZDMOXNRTBGMPFJLLGHYBOADSAWWYOFKEWMJPKIDTCXE");
    msg.op = 184U;
    msg.lat = 0.39092980964868385;
    msg.lon = 0.8007171176499515;
    msg.height = 0.5012685175557419;
    msg.x = 0.7458477343389847;
    msg.y = 0.4318740935920403;
    msg.z = 0.13293076854382035;
    msg.phi = 0.6257138213109429;
    msg.theta = 0.8308643736551466;
    msg.psi = 0.9269808823730901;
    msg.vx = 0.5393056770938952;
    msg.vy = 0.14313881941709572;
    msg.vz = 0.4207583334326712;
    msg.p = 0.3535968048614321;
    msg.q = 0.3882876966490634;
    msg.r = 0.4545764203523366;
    msg.svx = 0.6656023128514105;
    msg.svy = 0.0895471875914825;
    msg.svz = 0.34953965631057604;

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
    msg.setTimeStamp(0.04017931632094307);
    msg.setSource(26573U);
    msg.setSourceEntity(124U);
    msg.setDestination(61882U);
    msg.setDestinationEntity(47U);
    msg.group_name.assign("PYYNVUJOIAIHTLLOCCPZXSMQLREXDZKXWGSEPJFPETUBDVGDPUBDANQBIFCHHBTTVNCRWYTGEPKIZIVFATZWASWNKBVZSERGQDDLRNFOLHTZJFMEMPXYQASCNNPVXKEOIKAJRIMUWMVHURICPKRMKGIOJIVUCELXQYOOGXHBYZVONSZWOTHYKSESAKL");
    msg.op = 192U;
    msg.lat = 0.6193411610296092;
    msg.lon = 0.6316747744188483;
    msg.height = 0.35733272179424225;
    msg.x = 0.25226444201950005;
    msg.y = 0.5848561058045528;
    msg.z = 0.8134386048594402;
    msg.phi = 0.9087524564909518;
    msg.theta = 0.2316007231124767;
    msg.psi = 0.27640740473203207;
    msg.vx = 0.7095176788505255;
    msg.vy = 0.1418748616410923;
    msg.vz = 0.6176334751403657;
    msg.p = 0.353088492632578;
    msg.q = 0.7516309875367126;
    msg.r = 0.2739187368687741;
    msg.svx = 0.9498497321550992;
    msg.svy = 0.7198406506623038;
    msg.svz = 0.9537757924278557;

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
    msg.setTimeStamp(0.7361996287314453);
    msg.setSource(367U);
    msg.setSourceEntity(175U);
    msg.setDestination(11045U);
    msg.setDestinationEntity(223U);
    msg.group_name.assign("NMJHBHXFPGCPOWQKEZTZNIEKTKIFROOTUQIAAUKPECMGPJTKCMDPQLEYHGJIOBILBQJUNMKFLVXOXKMFMLBZCDWHDELYBNYMSTJICDXMYWJBVGXTCVLQXYUSVLXVEIRIYMJZUKBNHXABPASSPRDWVZCIAKPUFVD");
    msg.op = 224U;
    msg.lat = 0.04531761333537754;
    msg.lon = 0.020234901075069422;
    msg.height = 0.05473243788257931;
    msg.x = 0.6283179858195932;
    msg.y = 0.6575014391879698;
    msg.z = 0.4719515415905714;
    msg.phi = 0.5704983333437005;
    msg.theta = 0.41741275700289493;
    msg.psi = 0.4477550004864057;
    msg.vx = 0.754933259059468;
    msg.vy = 0.16394297130399083;
    msg.vz = 0.7911302575347854;
    msg.p = 0.2761368513727692;
    msg.q = 0.6010235428238982;
    msg.r = 0.4208750753404542;
    msg.svx = 0.13911929896966013;
    msg.svy = 0.8977073756730694;
    msg.svz = 0.726147452934392;

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
    msg.setTimeStamp(0.11154565987636522);
    msg.setSource(9710U);
    msg.setSourceEntity(16U);
    msg.setDestination(56274U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.9537074680883606;
    msg.lon = 0.9122277871788068;
    msg.depth = 0.47810654603911207;
    msg.roll = 0.24546682953735188;
    msg.pitch = 0.31611092392120566;
    msg.yaw = 0.8226362558702993;
    msg.rcp_time = 0.027365430780606492;
    msg.sid.assign("FARYIEWXQLCNABLGSOSJHJTLGPVCGVWEFEYLPADUQYKXPOJPUSRNYDLXMOJCWFIYGQWSJMRTFYMERCPEBVHOANFXWKNQSTUGRPAZGIJIKHRNEWTKWTBNLZVEGBPFZNQCFDLBSCAGIKLZBOPOXUDSUWIZTXDWOGJHITRB");
    msg.s_type = 220U;

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
    msg.setTimeStamp(0.585635481331029);
    msg.setSource(31059U);
    msg.setSourceEntity(159U);
    msg.setDestination(62637U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.9871819223575452;
    msg.lon = 0.19820877184465324;
    msg.depth = 0.9739885613590801;
    msg.roll = 0.7356556394033967;
    msg.pitch = 0.8222220760259591;
    msg.yaw = 0.9001418798862857;
    msg.rcp_time = 0.025056768940359797;
    msg.sid.assign("CRTXEZBQTQDHJRYKGUOQSSIZRUZZHSQEICEKCRPAWBHKOCAVYORDMIGTEJCLASCOMKLQWZSVTNPNIQPVJQSFPFFBCNFZAFLPNZXDLPIZNTGMZSVDJRDULLBGJZNXJEGQKOHPNFMXCFPMRXATHWMHHBXVTVOGWRBEWPPYIMLJDSQLXBYOXLGEFTUVVW");
    msg.s_type = 123U;

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
    msg.setTimeStamp(0.37192189476218207);
    msg.setSource(45612U);
    msg.setSourceEntity(2U);
    msg.setDestination(19023U);
    msg.setDestinationEntity(60U);
    msg.lat = 0.4846462520237538;
    msg.lon = 0.5924695132767945;
    msg.depth = 0.821873084424518;
    msg.roll = 0.022417591310875618;
    msg.pitch = 0.34796385814933806;
    msg.yaw = 0.5247596218718631;
    msg.rcp_time = 0.5162885695179096;
    msg.sid.assign("YAJGDXREYKWMSYJRTAOWZBTOZNHDCNJXVYZNHLVHQJFZOUUIOWQHVJIALXGSMPXHXINTFTGDDCDQWAGJBPAPIHSXDQFLIVYGFSKTIBOHUMFPIMLSIRPLNKELGQLIYAHRLVBDOXQCMHQTMUZJ");
    msg.s_type = 228U;

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
    msg.setTimeStamp(0.9582583034824684);
    msg.setSource(47784U);
    msg.setSourceEntity(227U);
    msg.setDestination(35243U);
    msg.setDestinationEntity(192U);
    msg.id.assign("IVSQLZSDUXCDIRXNOAFOMENNCNIHTYBCTSYBXJTMBYJTPYRKEHWOJKOBKWAPFFKQIWFAVWWNRWMJFPEXHYRMILERADYEBHVVVGTUKPBLLDQHFJPSXNHOHGRLUIGIFKDZFWSGAMZNRTZCNLSS");
    msg.sensor_class.assign("VARXKJGZASVJSJMLPCQAIIPYLDOGCOBVCRVMJWQXTHHZISAKVGWUWHWACGPSPBNMKZQNILNYBXTBDCCTDVZTQRURDHNPZWADFYVEQUAWNFNGHBOHSIYJUEEEANJFOSHPXMIKYVRIRFLDVLQSRQLGGRSZQCOUNWZELFVDCPEKXTJSBUKZWKXTYTOWDBHTDKKYIXYJHUOCLPUPQMGEMXABSFBUJLXOIHOZYNADQKC");
    msg.lat = 0.9644478818686144;
    msg.lon = 0.09360705140452963;
    msg.alt = 0.48296280612695464;
    msg.heading = 0.07955376300023209;
    msg.data.assign("HQVKPIERAJXZSLASTOAHJGXZYMKOPQZXHWSOVRCZNAJIDCONZZHGEAMFKVCPRLDBTJLVIVZCCFPKJRXTXUOOVIKDQPVPEJLQDEYJBSGYHB");

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
    msg.setTimeStamp(0.026235774308501547);
    msg.setSource(51996U);
    msg.setSourceEntity(140U);
    msg.setDestination(40358U);
    msg.setDestinationEntity(136U);
    msg.id.assign("GLYVUHUNXFWQDKANJPZLJZHVWIIFQZWEOPYDOEOHDKBDSXOLZVXNCRSHTJXQNPOBKHQHLJCESRZCUHABPWUTZNFJMRPABRLAWTBKYEHSAQGCYFXVSUSEHOOIPCCVVYMRJFQEKTNJBQSQBNINQRDLWFUFMKQETCZYLSYAEPXGZYKRDBMMKCGCBOIRTTMJVIJGTLWDPRFVLMSIIEDXGHAAIMASWTG");
    msg.sensor_class.assign("DMEMWLUXNDEATLXAHJEUOIWFEXSKMCHFUWWRDQSVQHFCVBFNTHRQRTITKVTWBPNWTTZQMSGVCNEYKIMZJLDZCOAEDYRRWIGCKZQZIBDPONFFLJLGAYVMKGJFUJPMFBGZBAAPXRFPQBJWKQEYGALEMXTKLUILXMIFYXNASSKYJGHIQPVOSRQLVYWYBUMQNAHECTDS");
    msg.lat = 0.062092524254831916;
    msg.lon = 0.8636035657360875;
    msg.alt = 0.020632476432977942;
    msg.heading = 0.9465264738091325;
    msg.data.assign("AXKNHRGKLMEZEKVWLAKMDBTGQWGNQAXCFALHRWQDCTVUQKXYWXFJOBZDDSCHLDIP");

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
    msg.setTimeStamp(0.24536283642921075);
    msg.setSource(13225U);
    msg.setSourceEntity(244U);
    msg.setDestination(1155U);
    msg.setDestinationEntity(216U);
    msg.id.assign("ANHOBEETITVQBQTIUSWUGWULXSHJRCYIPWROSPXSBXMHRYXLDEPCYGGMRFGKGRNLGIAOKRCBYTJDKOZIARUFXBQLFXFOLTVSQXSFNRFNWABJVVKZNJFIJOTOKGYOKFVZTBWNU");
    msg.sensor_class.assign("GCFILFXPAEYOGTBBHRKSVGFMTQHJVEWMNTUAJFDWDZLKUHXCKJIZLEUYDMEONKWOJXIULDFUNBDTAWPFCJFHPBEBIY");
    msg.lat = 0.3486652243942089;
    msg.lon = 0.012983980906276171;
    msg.alt = 0.3459007886151405;
    msg.heading = 0.7632462031203053;
    msg.data.assign("OHRNZUHTCIIJMBIYXWXDJEWIDPYMXBQKNKZGGTWRTAULBOFRCAUELUMDOEORDSOSPBKEMHTAXMGVQFQSLNUHT");

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
    msg.setTimeStamp(0.08678941972348575);
    msg.setSource(25871U);
    msg.setSourceEntity(253U);
    msg.setDestination(48997U);
    msg.setDestinationEntity(182U);
    msg.id.assign("MWOPRVNEXKHEGIFKNAKPHXDSXPYCIJGAUKCXQCSJLLMCPIJVDACABNWESQDGRARDZAUURXVMSDWOCPJOBETUWTWYSQQSNSOYWMHCOLVJFPHIDNTRRGMKYQACYSURMVMZGLXHFDPSLJWKZZOQHHQKOBWBIEEMVBZERIUSJPJHIQMGWZKYXYTKLORUDZVEZJOIPCVBQDVTBNXUOELWNNPGFLYFFZABTBTHMZGFTFFNGGAKFUACYBHEDJXUQXLNVL");

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
    msg.setTimeStamp(0.6220469758752512);
    msg.setSource(13795U);
    msg.setSourceEntity(59U);
    msg.setDestination(33427U);
    msg.setDestinationEntity(88U);
    msg.id.assign("NHIEYBUUMOKGQLBMJAVJAFZWFTOBRSQGRIZQKOIHUPLUXPRUGCZPSSKEFEIZYFOFDJNDJVTCXYJREBSNLJZAPEWCBYMFMQUGYBIWLJHNDGBXWMKFRIWMOFREHCUVJHWPYKWXSPVXVPJYAGDXQIDAINCGEXVWAEOMAHDHUQTZRBQWMXBPGHMSOVJTVAKXGINKGRYLNLZCOZSMYWTFKQTHHNXRCLYEDSACELBROUOTKZSD");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("HOIKNBBZJQHSCMWWOZLNOWFWXAUTXRMVCYPVAYRMQCMWCUYLVEKNVSLPNBLBIMFBMZZZGOGIPYR");
    tmp_msg_0.feature_type = 29U;
    tmp_msg_0.rgb_red = 219U;
    tmp_msg_0.rgb_green = 189U;
    tmp_msg_0.rgb_blue = 137U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.13535528984572331;
    tmp_tmp_msg_0_0.lon = 0.3282212917013544;
    tmp_tmp_msg_0_0.alt = 0.3890211252174618;
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
    msg.setTimeStamp(0.5873271761097939);
    msg.setSource(35342U);
    msg.setSourceEntity(219U);
    msg.setDestination(53173U);
    msg.setDestinationEntity(181U);
    msg.id.assign("NEASTARUWVZICFHKRCWYEDYGGUFLAEQLUDSVYRVN");

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
    msg.setTimeStamp(0.7801258251685845);
    msg.setSource(7802U);
    msg.setSourceEntity(135U);
    msg.setDestination(27031U);
    msg.setDestinationEntity(247U);
    msg.id.assign("GFRBJSRXJFIGMSLQEMM");
    msg.feature_type = 212U;
    msg.rgb_red = 164U;
    msg.rgb_green = 244U;
    msg.rgb_blue = 4U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.3247365991597191;
    tmp_msg_0.lon = 0.2421600900522003;
    tmp_msg_0.alt = 0.3791913835718448;
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
    msg.setTimeStamp(0.08533941891706787);
    msg.setSource(8159U);
    msg.setSourceEntity(177U);
    msg.setDestination(40419U);
    msg.setDestinationEntity(119U);
    msg.id.assign("FAJNDSIVFYMWOJWEKAYKOEVPNTZZEWYFJMKCJTCEFLMVUFIZJXQQDSFMCYSRGJWLUGNQZBSCIRCJSONQEASPLIOMFHNMLBQJRRZJOAOXLDHXNPRHNBKNPDCUWTDERWXVGOYIURVASQWLKHBUYTH");
    msg.feature_type = 31U;
    msg.rgb_red = 138U;
    msg.rgb_green = 196U;
    msg.rgb_blue = 130U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.27972724414914374;
    tmp_msg_0.lon = 0.5654599491606809;
    tmp_msg_0.alt = 0.1640172873849316;
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
    msg.setTimeStamp(0.9588224308244349);
    msg.setSource(42677U);
    msg.setSourceEntity(246U);
    msg.setDestination(62901U);
    msg.setDestinationEntity(67U);
    msg.id.assign("IPQKYETAVKHEJJYRAULCZJTPOJGMZGDJAXBEXSOTQALXALTFMWDIVNCGDYSGWTRJMDQFNUFPCORBFIESGGAHNHNDZNBEKGJHOPNUYAUMUZAXZYITSEKXDQWGWCMGBLCQKVYAXNMHPBZFVKDIDAFVTVFVWNIZHCHWOUQFQMDTTRYEEUVBKCOQJMRBPQVCSLISXNWHWJBFYGDKXLIBI");
    msg.feature_type = 212U;
    msg.rgb_red = 113U;
    msg.rgb_green = 161U;
    msg.rgb_blue = 93U;

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
    msg.setTimeStamp(0.05300687698643658);
    msg.setSource(61858U);
    msg.setSourceEntity(121U);
    msg.setDestination(46837U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.10623482996420819;
    msg.lon = 0.004077757165328544;
    msg.alt = 0.9399643736807572;

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
    msg.setTimeStamp(0.44650076469424116);
    msg.setSource(60240U);
    msg.setSourceEntity(180U);
    msg.setDestination(56885U);
    msg.setDestinationEntity(152U);
    msg.lat = 0.10001215429918975;
    msg.lon = 0.24580308300156273;
    msg.alt = 0.9376135313001966;

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
    msg.setTimeStamp(0.18547545453482284);
    msg.setSource(21140U);
    msg.setSourceEntity(233U);
    msg.setDestination(20504U);
    msg.setDestinationEntity(29U);
    msg.lat = 0.3324133401392807;
    msg.lon = 0.0008538996087475992;
    msg.alt = 0.07853447186740414;

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
    msg.setTimeStamp(0.38448882042682153);
    msg.setSource(4428U);
    msg.setSourceEntity(229U);
    msg.setDestination(47169U);
    msg.setDestinationEntity(195U);
    msg.type = 188U;
    msg.id.assign("PBTQIIJQIRLVUMMMCEACLVKRWJSVSFULJNYPYQORFXZETMFNOUECGVAUKFBZCWJXUPBDWUSXAZVOSCRHFXJBMVTVYKXJTPKIFKZ");
    IMC::Heartbeat tmp_msg_0;
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
    msg.setTimeStamp(0.2544613715392243);
    msg.setSource(41066U);
    msg.setSourceEntity(153U);
    msg.setDestination(6309U);
    msg.setDestinationEntity(50U);
    msg.type = 143U;
    msg.id.assign("VEVGXKWWCFQSGJVQPUZOQFFRTPVLA");
    IMC::IoEvent tmp_msg_0;
    tmp_msg_0.type = 61U;
    tmp_msg_0.error.assign("SXPOMIZYBJMKKPNRMXCOPSAQLWLRKYJTOIGUYEWDMGJSHFUZOUHKXUVZNHHAIIHXZVXBRPCYASBLVAOFXICEZWNNSXDYNCBWFMRVTJQDQTXWBSGBHLFUKHNKQPZEGEGTYMRVZCCMBTSXDXLRNQEVCJLHIZDBPYTGJFIZYNIGHPTQDRARNOBRRCELUKSLQUKDCUYJJIMOWOAVGMCSMESQPWJTWFQAGOPFYBI");
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
    msg.setTimeStamp(0.2572531282252667);
    msg.setSource(48031U);
    msg.setSourceEntity(137U);
    msg.setDestination(49635U);
    msg.setDestinationEntity(63U);
    msg.type = 106U;
    msg.id.assign("NKVIGEOJLPDCHCPXAVMRYWZQMEUGENVJEBQGCDYOEQZPVLCHXWTIIRBZHEEUHFEACAFKJLCFLKTNJUYYBHNNSUYLSSNMBQISPXNMLPKGAGWWVROABU");
    IMC::PushEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("QVRHRROZDBFSDPXLZIIQCADJNKJKYWXVITNZICSGJXVKHFKNHIUSUZPJHOGABNQEOJZGTPLBYRQQYIXEXEWKNPPMOESVXWQZYMUTUCKSUOMQATDCGKBPKPVLDTOVRYOGFLSIEMJAHGEWGCJGNETMBEDTIBFLBLLGCQDUVSNWWAPHYZPVBELBCDKOMOLWVCFZXYRAFPSMENTYFWMHSSQLHAINZQADRRCCHRJJUJ");
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
    msg.setTimeStamp(0.10115440172977053);
    msg.setSource(7101U);
    msg.setSourceEntity(236U);
    msg.setDestination(49101U);
    msg.setDestinationEntity(120U);
    msg.localname.assign("UHIKBRHSVOQIOQOFPCQPFJNYTKVLIDTGJXSYUQBYCQRMWHLDEDHRKNNBUSPLYPRMALCXATVAENLIFM");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("XKQATGVKVUNDFQEDIMSLBIAOWNCFTKTWKNVIINWQMHWWCENMZKCMZXDOCRHUHYJSOUMBNRCCJBQPDZYJAGXYCFTLAPXQBJJRREAOXZLMYTADVSGBXBEVTGUFPERCZGKIRTEKOUOEJHMPSKDFUPPBVTYSYSLGNIPUQDSALAIEDSXJIXFEZZKVWUWHFLOBYPYJUQRZ");
    tmp_msg_0.sys_type = 96U;
    tmp_msg_0.owner = 14598U;
    tmp_msg_0.lat = 0.3693327011690225;
    tmp_msg_0.lon = 0.22088651081537436;
    tmp_msg_0.height = 0.7556269477020969;
    tmp_msg_0.services.assign("HHTKBEGUJFEGFCSSMGMXLDLWYMYWRMQMTTDSGDLBIW");
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
    msg.setTimeStamp(0.5156630857698292);
    msg.setSource(14050U);
    msg.setSourceEntity(38U);
    msg.setDestination(63164U);
    msg.setDestinationEntity(105U);
    msg.localname.assign("YIYMHWLEWEDQHVRRTAWMWXBDCATXKUKCWZWMYDNBFPBKJEVEBMYENKCXAPGSVMXOTSNNLFYQHJRBHHGVGNGUKDFCOACUJEZZQLGYPOCKRFXHGOVMCQTEBDLKQMDCPICZYMTTIVTBINJD");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("TBWVZQPSKWNVVKNKQUTTFVHECOXBIXFYNXBFQEEIBVAOUJROHJIKDRDOUCQIYKMXPYQXNJCJGDZMHPGWODZCVOFDSQJFAINFXXCAPMEVFDUSAIUECBAPFENNTDQGKDGYBVJKTWQPXTRJTIDNAPHHWWCRFYBGMTYZGUWXAYMGLWSRALZHNELBYAJLLHASZCRCBRYOJZ");
    tmp_msg_0.sys_type = 65U;
    tmp_msg_0.owner = 37554U;
    tmp_msg_0.lat = 0.7477809272925574;
    tmp_msg_0.lon = 0.43529461753757115;
    tmp_msg_0.height = 0.6088787067041681;
    tmp_msg_0.services.assign("LDNMJNNMUCXCNOJLLOIIKHWNEYVQPVDRGHGLEOGYJAVZDEAACGWJNBDWSJVHYDKVATHTZHJQFXHFIUOZGCCMSOMFNZUL");
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
    msg.setTimeStamp(0.9294166333349204);
    msg.setSource(14592U);
    msg.setSourceEntity(31U);
    msg.setDestination(13919U);
    msg.setDestinationEntity(184U);
    msg.localname.assign("JNVOZHHPZCSGHTUPYHFMMMFCIXWOLNCLJBTIJGDQPEYWAYUFAIVDRPYRVOEWIOQGZHVFUBXDLRYQFCAPWWZSCLKQGAVPRKLCTXTZHBCUBFSEIHUDVBIOOVSEXUKBOTDAB");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("ZKFECVVCJNUASNABURSYHDHMSGQEPWFBNJVEBIAPIHZAUAOUMKSFBWZBWBLYVWQAPXNPKXBEXLWKDLOMPXJXQHPOOJDTMRQBJZDZFAHFYW");
    tmp_msg_0.sys_type = 118U;
    tmp_msg_0.owner = 46934U;
    tmp_msg_0.lat = 0.09014763682897953;
    tmp_msg_0.lon = 0.05531712898189112;
    tmp_msg_0.height = 0.49879693534452574;
    tmp_msg_0.services.assign("IKRTNSBWHUXLOVTEPXKVCJJMCPNQVTUMAPJHXORRLFVQDMIQVZXJOTXWASTHCZDUTWANVBWTSEGNDOZRHJWEBSESYXAIFVMDEMKNLGGKZDDBOCMZIRHGRTSZYCANLHOHSLPXKESFORPDDRNYJQYJUXIOQAWKSEWP");
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
    msg.setTimeStamp(0.7972833430025409);
    msg.setSource(1250U);
    msg.setSourceEntity(178U);
    msg.setDestination(39241U);
    msg.setDestinationEntity(176U);
    msg.timeline.assign("ZWEPSRISIYGMILEDPOXYVOXJBAXYZLFCUNDLQRBJR");
    msg.predicate.assign("YIGCLKXIJCDEMHPREBIBUJQSGVJLIWXWVDUBRZTMDUHZHAVFGMFIORPTVXPADPWTB");
    msg.attributes.assign("WHBQDDUNVZSXODOPIHKUSYWUOIZVYJCWOHWPAYIJRTFHCRSCCUVZBXHAFVUFVDKCXYJQZZFXKTHHMVSEEVIFYABTIDINGBXCEDILWPPENKPSALQMZVPWQYTYBTB");

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
    msg.setTimeStamp(0.29564629466403636);
    msg.setSource(62390U);
    msg.setSourceEntity(236U);
    msg.setDestination(61139U);
    msg.setDestinationEntity(84U);
    msg.timeline.assign("JXQWXACLIWHIPBFCBUUYISQVWRBCPYMTWQOYQIUOBGACOASIGEEKFXFWGRTBGCHQJYGMVUVTKNXCCLHVGPPPODSZOMZJXEEVWWKOTKJULNUZRYWDZLNWRSNDZDRTKNMQOGMGGZPINHBESYBIAYSDZMXHTQBXLSMHKAZRTNJADSETPNPRYK");
    msg.predicate.assign("UXVZMJKIASEJYDVKMAOQ");
    msg.attributes.assign("RLDKZZFWDMFCNBXNDNJVJRUNQCBESFZNBWIYSVOBGMKRVBDMGVKAFMAGHDZEAUTXVZFESMQCLQPPEPIOUQZXXAUOWLFGGVPIMNRYKHCGVHMMQHQXSJEYUAJUCVOXVVRYRDHJAFCTJAUITPXEJTQIYKAOWGSSYHLSBKQHEDFEWBWCHWBSANJZTEMLGTLYYTDSGDDECQUJWPZPARLTPZUUWXIXCFZKKLBJIOIOR");

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
    msg.setTimeStamp(0.35420326021376813);
    msg.setSource(53524U);
    msg.setSourceEntity(90U);
    msg.setDestination(54954U);
    msg.setDestinationEntity(253U);
    msg.timeline.assign("ZZMQUGDEDPAUGFDALRZUKQZBJTDWBMYOFEOKSQLCIEYSPNBGZJSUMMUFDWWCOKQNKYRGIRJMZJYYJVRHWXITQNTGWLAFKAQRBNEPJVOPVFTHRRBWYKTBYGBEIVOHJPCEUKPHWCDWVYGOTNCSDVHDTYASWLIHOQJI");
    msg.predicate.assign("YDDKWATAXFIPUZOUXDDHPPBFGVDWAOCQLZYGXCNHUVGQCCEPPJBGBWTKSUSYMEPG");
    msg.attributes.assign("RWGCULXEGXYDNYGWHNCWGEXGSGQDXWDKKUIQMQBHVLYMGELIJUMFBZOIEINBXQQUZOXOWCXKAQTZZPJEGRSAWJUTRDLXHGPNZLKHBARUDSUSSWKFZFPBILJIBFJIBCLYMFPMAUMVDRWP");

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
    msg.setTimeStamp(0.08935632888891631);
    msg.setSource(29666U);
    msg.setSourceEntity(219U);
    msg.setDestination(15653U);
    msg.setDestinationEntity(167U);
    msg.command = 128U;
    msg.goal_id.assign("MYPQYJJXUARVPGIAUJFHPCFHTXJHKWKJIIOQSFZTXEISBZGKEEBFIYLJHROURRMRHFIRCOJWGWXAZLKBLCNGAWKOTZMODNTCIDAPNWXSNEFPATJKPRRGSBYBNMPCSDYHWSSVKXUETHLLMDERZMQDVAKMENQUBGOAEQGHLSBFEQYZJONNZHZLMJWVZLGFFDWBPUOFOQCCQCIKNGUTUYIYHKDCGXWB");
    msg.goal_xml.assign("USUFVAPPKXTOWXJOVWWLPBYUYCZVNNCQJMJRYRYUQCFENDLIDXJTEBKRJZYAAIKOIPBUMSQOJMAGSQQENMLEXTLUTVHYIOAVTF");

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
    msg.setTimeStamp(0.7127145350244379);
    msg.setSource(8163U);
    msg.setSourceEntity(29U);
    msg.setDestination(4543U);
    msg.setDestinationEntity(104U);
    msg.command = 193U;
    msg.goal_id.assign("UMGUQOPTRHYDGWWPXTFKISQPNZVQUWQANBXYMPEIGLVMAQIHUSAJOWKRRCYVSZPKEPTZVPYNVIKSEBKULKCWBSIBBEHNHHLDWVGZDFJDUKCKOOWMDUCTFDDLPRRZMANPVZTAWINHQSSRGRTFIXMCDJJGJSJCEBWQNFRZZGRXJIEKHMNQYNZYLDBUBHVFBFECALFWXTJGGHOIKEEOGILAEXTOCVHLXLOVOTPYARJFXMCFQUCJBAXSYMZ");
    msg.goal_xml.assign("WAXHPKGLQMNEISDYFUJHVCJTGEVATZSSFFZNUUFQDOULWFIAOKEHOJWDGTBZATSHMWPGTXLGDSIMTXXARLYBHMTNIRUPNKQWQSSKHVAUVDZISYCFZYQNBQEELCYGUJPSBKRNIXHYRKLEHMSGGMDOKLJPOPICFPRQAQZMXXKZVVILIQNZNPTOTCEXODFBVYCV");

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
    msg.setTimeStamp(0.21288809339160797);
    msg.setSource(4767U);
    msg.setSourceEntity(218U);
    msg.setDestination(30310U);
    msg.setDestinationEntity(211U);
    msg.command = 151U;
    msg.goal_id.assign("DKBBPTMDPRYBCWWIGHPZKTTHAOMEGQYIWVVBSJCJBOWZKPGGSQRHHLEHIAXDNBCZDURATLJQWNAUXVGWWEJSOXLJHEINURQNFYLEAJGPERMDOKDDVYSWLXMTCZGUBIFDRSGBRCFLFGFSKXXADFVFEZVVJUYSQUSOBLQBPFMZHKQKRNHRVIAMTOCCNAOZYIZQWAHLXSURODEMUAVYXINCLYMJSUUFPTQJZKGNEYCIOTMKTELVTPYFXMINWHPQPO");
    msg.goal_xml.assign("XXXGYOODUDAOHEXIZICYLEJSARQJKSQYBDCLXEORCRKAVDPWFZSEGWINGFZSLRHKBAVOTMZUQKKVGIDYNTEPBSIVXNFMPHTEZKZYWQBKHSQGMJDPCHPLITNUZJYDSQFOYZUVJHDXHTFIIOQBEMLWXABCDPPEMNTDSZECCHTGQVRWRULFKRJGUUCJFMGJAYIMFKLBSJOUVUJOSVWGAPQGNLFLBMIHWMPWABPXNYNNUCHVOA");

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
    msg.setTimeStamp(0.5119756855383701);
    msg.setSource(52389U);
    msg.setSourceEntity(206U);
    msg.setDestination(61385U);
    msg.setDestinationEntity(1U);
    msg.op = 122U;
    msg.goal_id.assign("ZAOZEEROXPAAJCVIDNGJEYQOXKNRVJFCFWYAWYY");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JAGYEEZIPCHVDNMHTANQSIXCLDJODOHCNSYPTNQRQSDQEBUUCPXZNJMREJWSDRETIVMGQYLWOFOFRNJCYDPZEADOMUWIZLTCFUAZTSZEMUJIUQGIADLLMNMRKOJXJCBXGYKDGGBFYIALHAVICGXWKKQYYQUWONBFCAJLHWWDGVGYKOFNHPX");
    tmp_msg_0.predicate.assign("WIEEXXDZRRFEDZODDHGNZRVACWDGEYXPIPLWOWVFRESQLOEBORDZKAWPUHLNNQMKGJXAMHWELQTSIUCVCTREVEAKCUFNXPCLHSBXJHKATMHKNZMASPBZMKFJGMIGSLVOJRZGSBXOQUFJZTAIXJJLTBFBDFVEMGPJNBSIJAUYYTNHSYHDIDQFAGPOUGKXQNHINITVSWVSYWBYDFTOBCCZKVCPZ");
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
    msg.setTimeStamp(0.21919573382096225);
    msg.setSource(13921U);
    msg.setSourceEntity(75U);
    msg.setDestination(9817U);
    msg.setDestinationEntity(61U);
    msg.op = 128U;
    msg.goal_id.assign("GDIKYZSJEEWYRULKICCDAKVAQSRFRNTBNKMHXOTQDAHHNAHSCNTHPEVCUBFVPDFVVJUCZOIHXZMMXDOOYCHTPRBZUXHWPEQLBFBLJSWVXJYQTVDGMZJFFGTIWLOLAPIIUQKHSMRJEROSPUEPYXNXCJYGJDCRRTLAGQWEUJYMWTEIZLMNGAFKIDWROHZZPCOBZESBKSLSFQ");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XUSINYOUMYYRDFIPFNUYXWITLVJFRBUIVFHGNPECZJVAIXCRPMLKEBUPTLYPEIEMZJGSASVKWBDMAWFGMTKUYCAXWFFLNZDXKTBNRPLPIICPQTTBSRWQZJKAWKVZSZMQFUUVDANLHGHUHBWVOCWJQEJWHCPGZLJTRNMHARGXJNNHMQOXTCOIHFJSCQKOSHDBCPLODZCXVSZLOFDEQVOYGRBYXK");
    tmp_msg_0.predicate.assign("CSAEPDXLECSBASFBZCFZHZTCGBQQYXJSRDWQTXMLVRCUATMOVSEHEDPUXRZKGCSPLWGJTDNBXEJROWPMULKGNRLMRNYNJOGABPLOAQKBASDDMFPELDVNNOFZQQHHRHGDFVRGSKAQVYIMBOCJMJOBKZLOBTHFZKFPVUCXPFRYZDIGOLEQEQNTYOZXGECLIGQMKKVMUUIBTHFHHEWSXVPJNXPUKCUVJWWXIWUAJAY");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QNHYETBOXXGLMRXKARMRRJGXTUGPZEPXSYSRMENEJSVJNFVOXUEXYYTA");
    tmp_tmp_msg_0_0.attr_type = 191U;
    tmp_tmp_msg_0_0.min.assign("PSHPYAIHGAOZPLBZIYVJJKFLPXOSKCDINSBDKTIVXUTRZFUWJRIUYXPGIXUHVGUEQDXOONXVCLTAGIZQCAADLTOORHUUMWVEEJLSHPAXVCUBDZTBKSGMDSFFMYOVPMVFGFWRCECJYKQNIWWMRGUNLYNLWJACEPLTTISQEQWKTTKJUBREMMIFZZONQFZHFMHADHLWXGDBZOBSSOGNWRMQTAYZERQRYPFDBCXKGHNJCDMNNJYCXEKPBSQHVKR");
    tmp_tmp_msg_0_0.max.assign("YNCXMRAIOFSFSDIBAUTLUSIWQZQIZULJSMPOWPRYSPJZXQJMNKOXKXYXJKXBYPVAADWCOTPZKBCVZUYTTQXHLUGJRSQIAHVQMOEWKJHITO");
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
    msg.setTimeStamp(0.35834564346487063);
    msg.setSource(39413U);
    msg.setSourceEntity(127U);
    msg.setDestination(6153U);
    msg.setDestinationEntity(242U);
    msg.op = 122U;
    msg.goal_id.assign("NXWJWUTCEKXGJZMNFGDPZLUYZO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CCWEBFKMUYBUHVLETOUYPEJETBRXHBXMDVDAPBUTQVNCAFQLHVKLAGKMDGDISKJILTDFW");
    tmp_msg_0.predicate.assign("IJTQBYVWFARYQEWPAFYVQVSLCGEDXEQEO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UIPXUIKULJPCQTECMRYJQBCEOGDGRXTWSRRSVYZEDODHHAKLTIIUJOTJDOFSXPPVZAVHGCGHMAYRLQDLMOFLQNLBZVKJAIZRKDQTLCBAJOYPTQUOXEGXACKBSLFEKWFZHVHCXGKIMXFWUSQUTVQENACTPDQYBJJMIWZJZBNAQZRWFSNNDRAFEHKPWYWMKNYOBIZPWWHISVB");
    tmp_tmp_msg_0_0.attr_type = 57U;
    tmp_tmp_msg_0_0.min.assign("GIQBSFBWGRHUXZXPFITHUJNOEKKRSRJMLZKMGUXLHHWCECYDFUOOLJMNYGIEBHAIVZSMFDRODOEKPAIKHTDSYPHXBFCRNUJSYUMRHQRBLYYRQTGOMPXECTDCBDIXZWQIPIDEEJZST");
    tmp_tmp_msg_0_0.max.assign("MKHPPVXFHDIXYPXDZCRGLDLKCEOHWMMALCUXOEKEZHJWKIZWRFQGLHGLYIFORWUBNMELSVNPGZRETFRZCXYWQHFTSRSSFSCBKQZNDSAAAYQUABANWTJCWRAISOPPFUSAQQMVYZDMJDBKUIJYTGKQELXKBTIEUXCYWSIBMAVJVYUINFTBGSPXKVNFJRVDBKXNRUYJHGFOJRMHVILEZPQNECDPHWQXMZMODVTOUCHBNCIJYDWL");
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
    msg.setTimeStamp(0.03428973998817941);
    msg.setSource(48231U);
    msg.setSourceEntity(88U);
    msg.setDestination(50022U);
    msg.setDestinationEntity(157U);
    msg.name.assign("KCPXPZBLHCZVLSTESZZCDNWOORJAATULYSXQINSVHLTQWVWHMYASTVHNWDDSREJABDAKSEPNZNFJDRUZAOWIXWEVVBOQOXESYJQWJLHIBDDFGVCGNTQLLAUYNCXDAHCMJSMPYFUKFLIIGWRVFRTOIYBPEMQXGCE");
    msg.attr_type = 62U;
    msg.min.assign("SUTUCDXYERJAHVMASECBXNKMLEGYQJKGGVPCTRDIVWLMTFNIPSEHATMAMDDZEKDCCPYHIDQAEPQZABTCBIWZPOEPWORGXOLVVURKIXENTNZNRXLMCHASQDNALEDHFQVFXXYDBPRGUSPQJPONZKLUNWVLAPHXUTJEDZCOJFLTKBMKAONMWLZXHWGYYIKIIIYZRTFHCBFSJYHJFGSHQFIBUUQWKKQGZJQBXWFSWY");
    msg.max.assign("WJECJYLXRBPXDAQNVLKEHEMTKUIPZQOFEAFNQZIRJMVQEIPHSOSPYGWFIDDCMHLKJZOXKWCCQODTIVFDECFGLTELYOHXVKSWVXHLDQWQCIGNAGJEZPYCLTNPVFNSKBJGZXSEMRPMHQRJLKLTWRULVR");

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
    msg.setTimeStamp(0.023047984248659392);
    msg.setSource(24935U);
    msg.setSourceEntity(87U);
    msg.setDestination(7178U);
    msg.setDestinationEntity(63U);
    msg.name.assign("KQGDOPQORMMNPRHCF");
    msg.attr_type = 78U;
    msg.min.assign("HYYJBSSMQCWGWFKTDICGWKALBREGNBTYRFMVTSHPFWENOJWFRMZSRLSZMQIGNHDMVUEJUIWZZMJIYTXNYQDYGEHLURDUXHOVVPKODYYORBTQSZFJMIEXXHBCLPSUOMNCHAZIDPXRKEAOLCKANRJQPMJBMGVPJCNOFDVBXQVQFTVQCUBKPPQQCOKZRSKDWDEDLJTVUJLXUEKZNSZGFZFUWPGXOIWHWHTBTNIAEXXIRNEFGKVLTAAABAASLOYGCC");
    msg.max.assign("NNKGIWQRMERZIPAJ");

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
    msg.setTimeStamp(0.6878359521418996);
    msg.setSource(18613U);
    msg.setSourceEntity(204U);
    msg.setDestination(2995U);
    msg.setDestinationEntity(155U);
    msg.name.assign("RHYIEZOMRRGLVXOVFYRJEJODDUQOXHPBJJSAGOGIXAATZWPVDWSDGSOACIBIVRKKEIKXFAVFSABQMTBWETIXPCAKFFGYNSPTSWRJYLCUTWXNRBXNYCODFLZAZUZKCNXCZRJFKOGMGVWVNMYBDYUUQSPSVWIRVHTCHHITSNNJQONYHWLQPMEH");
    msg.attr_type = 195U;
    msg.min.assign("MCTIOZVTDTLVQVMYYODZZTZJSHNSDBMLHJQOVRIXTDUVQFZSYGSFNIPNIBRYUBAABHWVPNUWGJZGEFCFVHVLSMVKNOQCGGUQSKFYCNKBUJRVSAJLPMTWTCDRRBPEZUXMKSIDWYXOTEABMXJDYWXKJFGAKZHCLTYLXDDBMWUMRINJACEAYUJEMENTUGCONGHAQPXCSRPILDFIKFOKWHYQAGWOZHROFPHBILXWREPZAQUHQXBFKLEPEPQ");
    msg.max.assign("QMRTGRQSUTVEJMROTDNNSDQOUOQJBGUYIFLCIMLKAVDFPCTPTVBNXQXDXMXKLFWLWAMHACJQXMVZCLJNZEFQKMCSNYEL");

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
    msg.setTimeStamp(0.85629055184932);
    msg.setSource(18620U);
    msg.setSourceEntity(64U);
    msg.setDestination(15707U);
    msg.setDestinationEntity(240U);
    msg.timeline.assign("ZUQFCJKECVWBEJCGUYFDHJEHZEOYCLGCSVDVSFFFSMMTEGBHKZANNHGXGWVBQKJSOLFINKHHBOZNQPGXUYASUYQDQPNILIATMFZPCETMZRRXNVWABUWRKMWAUDXICYLHTI");
    msg.predicate.assign("XJQZFLRBIXFBAPKDLXHFWISXKLNGKLRKCWKDMGSQUZHRMV");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("POUMMPKIOYNFANNDUELMINBEHERGAEZCTPPCBAQTDXFKSICALCGXRSIIMNFQGXWACRTBJTUDLMHDIGUDVYSJCWVERQWVXTRXJOAWZVHJZAPAGXTYYVMUMISNZJZTRVWFYATVSZOFLAVCHBCYLUWBSTFSGPKQKEZMCJQBGKHBDQSLWLYUJNROUPXNTJXFGPUEILYINMHHKFXOEFNQPZFDWVMDKBIYRQGE");
    tmp_msg_0.attr_type = 194U;
    tmp_msg_0.min.assign("KDMGGOGWFUVBZWFXQNJOJQAYOWLJSUQKWUMMOBZDBHBLAOXJQWLYVEEPIKAFCVETEGYVUHCMPMOQTYWLDRINZZNMZKPXPYKFMMAHSTNNTZWKLSDIBHCFKNGSGSRJINPNAHVKBCCCLCAEFXGSOQMOYLE");
    tmp_msg_0.max.assign("GJJPUQKKZBILSWJBMFCVNBOJFDYRVFPTHCPIFACKAYXIYRPJIDQCLMHZEOQRYQBEFMWTHUSQEHPONUDDKTDSRG");
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
    msg.setTimeStamp(0.13635789813778743);
    msg.setSource(41921U);
    msg.setSourceEntity(26U);
    msg.setDestination(21873U);
    msg.setDestinationEntity(72U);
    msg.timeline.assign("FHHZWYFKYGBTUUXEZSJTRCPJGAWXYFLYMUGLMRDZYVKJSRFQPZQLXTIYQPHJDQGUIBZPCOOAMIHEYPNVCGRNRKRNTXLAWLNABCHLXDGUGSRMKNDFNNECJDGTIVIEHGAWJZ");
    msg.predicate.assign("TUYDSFIWNGNUHJJXMNUDP");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("JCOJOZNVWUQLNLKYWQFAVDVXQ");
    tmp_msg_0.attr_type = 184U;
    tmp_msg_0.min.assign("HCSGIAFYNZANWNIJVFRKXVNRGNGQSYLMVFUTCOGDVYMESTULDUSITZZJBJVQBMHREIBBJFNDCZJNKVWHTOIEKSRUEDDCURFTIOYPIUHRVNAPYQOYHQPGAVRZPSKBPELLETKCQAZWCRKKTWDWUPQZVEJAEOQISGIYEJQKTCVBOLIEMDYXALSOWXHLHMFMTWPZNJPMCHJFPMWQYDAZXQJOFBLHBXKWCSDNPGYKXWFUUAGAMRLGHDSZUXOLX");
    tmp_msg_0.max.assign("GGXQXNKKRUIJKRREUPIQCWPHOFOMLEDONIJZYDMOBCAF");
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
    msg.setTimeStamp(0.9104564818600498);
    msg.setSource(20465U);
    msg.setSourceEntity(98U);
    msg.setDestination(10441U);
    msg.setDestinationEntity(138U);
    msg.timeline.assign("XTSHVOUFYPGKOOIEFIDWDGDTCMXBDFPEHBLVHYXVCSZDUFJTHFHMUBWHFVZNYABRXWKMINXWBKLXPIGQQYQJDIGUYZXQQKFCLPOWANSQWLUCCGJSNRHVZAZQBMISDSEMVNCHUOWAEKYWJSJGVRRYTCJMVTNEVYNPLWIUTMPPXGPNPMSZTLAPAOFYBXHROZAKKLKQUMKNEXJREJRAGTTRZIZSGBQYVLTAENDMHOIJUR");
    msg.predicate.assign("CVOGKZBBWNBVKMSYZJSWXUAIIHFSCYKWYUZEWPPLAWAZFMJUWITXTKFQJYBOLGIY");

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
    msg.setTimeStamp(0.16663605614420263);
    msg.setSource(51315U);
    msg.setSourceEntity(168U);
    msg.setDestination(39030U);
    msg.setDestinationEntity(19U);
    msg.reactor.assign("OLRPEELYCYNVFIRIVPGWOPIZMBQGUENBPTMQLAXISUYLUWRFEHMZJCJYYRSWPNFRJWTJZULYQDUQDTTCPGEEVSORQFZAGWHKQANUCJXBMNUFXGAQAFHESXBSKDSTLIHOGAIJKUEEHCZYLGTVMROPSFEVKCWKITHHMWSQNXMXANPDZNDVPMGHCX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XKGRYVBQAFFGGYODEQRYKJLBKMGPSSFFZNAPLMUCSDDTZYCHOEDJKCWAPMXCVNHEGYMCDJCLTUFLQOVXZSEU");
    tmp_msg_0.predicate.assign("FXGIQYAJWJMWBMQGUVNVCHAKKJDPUZDPLXDPFEXKZJLAWWNRQSPPFGAAHPHVLTFVHRZMTEHOYYSDZTJBUABEKCJYIDISML");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("KZWIXLBVDZRPINJAQZBMWONHRTIZAHKYLRYSFUQENYYSVBQXYRMMNPFDLQIDMRBTFZFJGSTFAORTMPYLSOPKTCUEDAXHCBCFARXHNIVKXTGLJRDEMOXONWVAOJZLQQYJOKIPXNCYEUKXGMQZPTBEYQDUFDWGBTNHPVH");
    tmp_tmp_msg_0_0.attr_type = 116U;
    tmp_tmp_msg_0_0.min.assign("BLZUDFAMJLVDNZOBCQUIDTJCSNPTRZVIONHRYBLBYAWKDMFQRWCZWWYIUFNKEBCAVLRUAGAEOXPHUSQUEQRFWCPSGAXYEKWOUXAQUORGETQILJSLPLBBXUZPFSZQNJOJTMRTITYFXDHPVGDEVJYJMPITKCGYVYXSZKCALDKBMFTANTKDKM");
    tmp_tmp_msg_0_0.max.assign("ZQCSOFFWTCXEDGETPGAZKPCSBVDMDIUNXIWISQLGOVBHREQGVLBRHFNIDNLEPHGHLKOQLAWHDXODBFAXPYFDWTZSIIBYBXOXZQAEHVIDSUVJFCMLOMXTCDYRVFBQPUGKCWKTLJUDIEAAPAHNMRJQRK");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.1258910102111931);
    msg.setSource(11763U);
    msg.setSourceEntity(51U);
    msg.setDestination(7931U);
    msg.setDestinationEntity(23U);
    msg.reactor.assign("GSFJVQLHICXVELYIVAKOGXNJYIBRYHLRFUJXMBIAZXEKPKTUJDXVPHGRRWALATADNKZFWPPWXENNKCOXPHDVPZQEHCFBCJHVZDRQSKCYRHFPFTEMZACXBYHZQAQWALNVIMGJ");

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
    msg.setTimeStamp(0.9854224117264572);
    msg.setSource(52371U);
    msg.setSourceEntity(219U);
    msg.setDestination(30509U);
    msg.setDestinationEntity(147U);
    msg.reactor.assign("HISIHSPYPGTEFDIGDJAMKEJEWBVTLCRLRGFDMUKDAKWUNNRSLIZOOVBOMGMYSIHTQXTEUYOEQEALKOMPYKZXPJDGXODNEBBYYXNCTAOGTYWMNOMWINBVQF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("PQAWUSDNZWEJCPZODLFUQDPKXDLHUHECUFXKLBJIVVQRBQDATTKNJFBKTVFWDJEGSIPIOHQWYCREHRGZUKIPZAORQINLXHHEUFNMAYOYZKXZJXHTGBLGCYOEGMPJLYCAYIBYIBETWGOGYNHSVJDXRFYSVCNPSNCPAXSKDZQCVQPREIZBTIUKGSKTRXWMZBPGTSFNARQWIHE");
    tmp_msg_0.predicate.assign("XQTUTYWAOGJJHLPKJWZMFOOVXBMRMWZTVIWPAMECXTBLBZGDJCIDDHUX");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JODLOWNXKDPFHTDBCXFOCTHQCZNPSOAYGHIIOGSYISEVGZAEAWUKDCTDNZKTIFDRWGYPGBJVVFTRGKFJBPBBUELFUYYNOTLVYSRILYRMEDSKCHKJMIROCNYJRMLEPAICDADXTORX");
    tmp_tmp_msg_0_0.attr_type = 144U;
    tmp_tmp_msg_0_0.min.assign("NIEDQQKQTDADNUFUTELVHJJCDFOCRGXWIXYPWNVPRTIGKXOSXYFYBFEMTUVEHPPGEBXPBOROWWXDIYWAZLOQBSHHBIPFZDZSMWZKSQMDZRPYUAELMCYJQLCHSNXMCTBNSKJMXNFRQOXLGSIAODKISGJAINMJZJLMZYADBIGAHJQBBKEACFHVCHFLRRPUHULFOKVKOCQZYVNVDZGJOUWTCGVWAGJMURIRUSTETPYMZPBQFV");
    tmp_tmp_msg_0_0.max.assign("ASAYEEHUJODDKKAPIGHUOLRZAXKKMTNNABMOGOJYRVRDVWGSLWJZJDICZNSQQGPIGUYERJZYFBOVSSPPGFDIOFUPUHMPDBMQGXQFEWYXPYTWFHCBJNN");
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
    IMC::Event msg;
    msg.setTimeStamp(0.30107086160629204);
    msg.setSource(53886U);
    msg.setSourceEntity(108U);
    msg.setDestination(18154U);
    msg.setDestinationEntity(85U);
    msg.topic.assign("GVRFUKLYBTWBPMMHVBDITAQLSDTCTHTVMJUCEPKKARHBXFNASHCJYISSILYLOKWDIJTFRIAGWKIDRDWUGXEBWMYDUQZRUWVLMUQOYMFQVBWRHZNKOZPJICGCZYMYSYOFNUTJGNSGREMOANDCOEKGDHNXTIAFVTHNBLIPVLGBCXEHGZRXVYCFZQSKJLOJXCFAOPKQLUHGAUXFRSBNRZQVPXJZWKPEOILUMNQSOFDQQNVZE");
    msg.data.assign("IITAVZWIMATNVOH");

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
    msg.setTimeStamp(0.8061612092336375);
    msg.setSource(2581U);
    msg.setSourceEntity(103U);
    msg.setDestination(18945U);
    msg.setDestinationEntity(4U);
    msg.topic.assign("QAKFJLZELZIENOHZNASIBXHZPCZUDTDSXMUORHYHVQBJXMIOMQGFGHICAWYVWOEZWKGPOWNJSSJMBXAIULPVFIJFMQQZZHIAOLXPTGLZOOGFPEQSHCNKDEMUXBQNSSDMLPAUYYBTKRAGJSCWMWVWXJKDUCCOEVRFKXBUUBQRKTCBR");
    msg.data.assign("KKWQGMLYAPIVBBOFKUUAIBEVDRECJPINMXKXVBNBICEEBCHLPGPQMQUZWYFICZTCTHAWJRPHTVFEKNGEKGWCVRYGRNEALJWSKJHOTNPMZFOSEDAHMXPOVLJHTQYGSFNDFYQOILSWHOXUQJDKUIZZJHTGAOBWIXMJTPWZYQZMBXFVESDIVSWXYBNSIQOOQCYGQDSMHVRAUPRWZ");

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
    msg.setTimeStamp(0.18046478479940709);
    msg.setSource(48705U);
    msg.setSourceEntity(147U);
    msg.setDestination(15375U);
    msg.setDestinationEntity(235U);
    msg.topic.assign("BMZLPLPQVYAQPOZSCXPIWMOTUWQQHNISOCHCFZPCNWQBMSTJAEBQSVNBGYMTSFKHBRAUNCHTTDELSKHGXWZDRZXEIPLERLEXNPIIVAJIHGCPZXEXJULSJZOQOZSFORJVVGTEAIWMUYJRGADKNZQVJSNJWDPFCUBPJESBYRAKCDGVEIFJYUVRRNLBDZXKKXDYWYMYTKIFKKQOAVBCLTMWGL");
    msg.data.assign("KFWFKABGNWLJPWFUMASENJHEARBKBGGGJZIKLTCLFQIDFLSZDUUYIRYSQOYPGRCGVNHXVCQKYOLUWLAEHWWGBJWDTJOUXFJBALEWXCNPHDCUMNZCIUVBUPARNHKQKXH");

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
    msg.setTimeStamp(0.0982218730361738);
    msg.setSource(10411U);
    msg.setSourceEntity(2U);
    msg.setDestination(24367U);
    msg.setDestinationEntity(5U);
    msg.frameid = 52U;
    const char tmp_msg_0[] = {77, 37, 44, -55, 74, -30, -120, -37, 59, 104, -78, -91, -25, 1, -4, 15, -116, -32, 107, 123, 103, -48, -116, -118, -104, 122, -117, -102, -34, -86, -45, -56, -116, 117, -61, 23, 61, -50, 8, -48, 18, -69, 104, -126, 59, -114, -17, -123, -100, 29, 97, 78, -59, -123, 82, -81, -110, -73, -50, 118, -8, -55, -60, 43, -7, -77, -60, 81, 110, -22, 44, 64, 110, 78, -40, -5, 62, 22, 113, 97, 5, -57, -4, -47, -95, 89, 99, 111, 35, -93, 31, 100, 23, -36, -113, -116, -96, -74, -17, -9, -63, 27, 86, 88, 112, 118, -7, 53, -88, -16, 52, 50, -64, 99, 10, -113, -117, 74, -40, 83, -68, 11, 80, 78, 64, -53, -103, -65, 1, 69, 25, -108, 78, 53, -128, 103, 103, -100, 119, -19, 3, -5, 80, -34, 54, 41, -52, -91, 7, 115, -63, -102, -89, -5, 29, 81};
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
    msg.setTimeStamp(0.4921175124097493);
    msg.setSource(37436U);
    msg.setSourceEntity(57U);
    msg.setDestination(38598U);
    msg.setDestinationEntity(48U);
    msg.frameid = 4U;
    const char tmp_msg_0[] = {-34, -1, 55, -109, 46, -16, -79, -121, 37, 66, -82, -54, -103, -116, -58, 96, -82, 102, -46, -45, 95, -20, -17, 78, -45, -103, -118, 98, 80, 90, 2, -16, 110, -37, 27, 115, -59, -123, -10, 61, 46, -50, 22, -115, 92, 105, -57, -36, 37, 88, 55, 117, 18, -63, 44, -108, 1, -89, -122, 99, 57, -67, -45, 63, -94, 23, -27, -109, 72};
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
    msg.setTimeStamp(0.5975769225420338);
    msg.setSource(11317U);
    msg.setSourceEntity(249U);
    msg.setDestination(27738U);
    msg.setDestinationEntity(91U);
    msg.frameid = 201U;
    const char tmp_msg_0[] = {-121, 40, 78, -116, -12, -103, -109, -109, 20, 113, -44, 106, -59, -76, -99, 1, 106, 23, -125, 57, -21, 51, 79, -64, -31, 61, -123, 115, 31, 2, 16, 36, 4, 35, 45, -66, -75, 101, 69, -2, 81, -73, -35, 93, 84, -36, 30, 73, -93, 92, 118, -73, -19, 72, 4, -100, 91, -20, -34, 59, 15, 59, -117, -124, -105, -116, -51, 115, -21, -54, -62, 26, 3, 113, -104, -39, -125, 87, 99, -128, -69, 48, 70, -10, 30, 74, -45, -73, 102, 17, 93, 46, 91, -48, 43, -74, 47, -70, -63, -66, 105, 20, 126, 33, -127, -123, -104, 68, -93, -37, -34, -77, 105, -71, 113, -100, -27, -99, 64, 1, 16, -105, -103, 106, 3, 0, 26, 114, -5, -42, 4, -98, 32, -124, 4, 123, -87, -75, -45, 9, 23, -124, -74, 0, -4, -70, 123, -48, -38, 15, -105, 23, -55, 100, 97, 22, -49, -36, -11, -75, 7, 60, 116, -28, 119, -34, 49, -82, 46, -47, -91, 84, 106, -70, -19, -2, -27, -22, 80, -101, 88, -66, -39, 66, -38, -63, 35, 125, -46, -99, -101, -54, 12, 24, -51, -57, -80, 19, 20, 24, 24, -15, -85, 55, 102, 64, -42, 15, 119, 52, -38, 11};
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
    msg.setTimeStamp(0.8609221925568984);
    msg.setSource(58941U);
    msg.setSourceEntity(75U);
    msg.setDestination(43489U);
    msg.setDestinationEntity(246U);
    msg.fps = 111U;
    msg.quality = 153U;
    msg.reps = 47U;
    msg.tsize = 203U;

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
    msg.setTimeStamp(0.47114840618075104);
    msg.setSource(55613U);
    msg.setSourceEntity(2U);
    msg.setDestination(1021U);
    msg.setDestinationEntity(100U);
    msg.fps = 132U;
    msg.quality = 103U;
    msg.reps = 105U;
    msg.tsize = 84U;

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
    msg.setTimeStamp(0.9066196936401006);
    msg.setSource(46062U);
    msg.setSourceEntity(198U);
    msg.setDestination(52970U);
    msg.setDestinationEntity(197U);
    msg.fps = 102U;
    msg.quality = 214U;
    msg.reps = 252U;
    msg.tsize = 1U;

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
    msg.setTimeStamp(0.8415519896157371);
    msg.setSource(48588U);
    msg.setSourceEntity(108U);
    msg.setDestination(4022U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.5820922933909758;
    msg.lon = 0.9853769083517584;
    msg.depth = 164U;
    msg.speed = 0.21229919541788467;
    msg.psi = 0.26184156348228793;

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
    msg.setTimeStamp(0.7064285217903238);
    msg.setSource(8305U);
    msg.setSourceEntity(38U);
    msg.setDestination(33052U);
    msg.setDestinationEntity(114U);
    msg.lat = 0.6126847169520865;
    msg.lon = 0.9254816004446536;
    msg.depth = 196U;
    msg.speed = 0.35608599287283593;
    msg.psi = 0.8426957598004907;

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
    msg.setTimeStamp(0.3434960080613496);
    msg.setSource(53057U);
    msg.setSourceEntity(241U);
    msg.setDestination(57731U);
    msg.setDestinationEntity(12U);
    msg.lat = 0.3996410282194115;
    msg.lon = 0.2987046920532812;
    msg.depth = 164U;
    msg.speed = 0.2503876111240888;
    msg.psi = 0.5102913441942429;

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
    msg.setTimeStamp(0.6822509623253094);
    msg.setSource(22406U);
    msg.setSourceEntity(143U);
    msg.setDestination(45631U);
    msg.setDestinationEntity(77U);
    msg.label.assign("ZJPKGNXKIRTEXCLPIBSYQP");
    msg.lat = 0.6274856474338166;
    msg.lon = 0.5143060744795155;
    msg.z = 0.4412247243921239;
    msg.z_units = 241U;
    msg.cog = 0.251822567449962;
    msg.sog = 0.24924252863451501;

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
    msg.setTimeStamp(0.21724904026647007);
    msg.setSource(45242U);
    msg.setSourceEntity(20U);
    msg.setDestination(21211U);
    msg.setDestinationEntity(200U);
    msg.label.assign("PRUJGCAZJHFGHNZBBYWPNODINKUXWYLCOTPAJOSHRUZMEWIBEMJIDGZNSBZVGERNCAFMFLXIUYBPQPJQDVYVGTCPVYTDZFLYSWOLQAUKVXYNRHUGPQOOHKPMYUEZMXPXXUKAIKGLKLKBKOHIFNDWLMHLOEJHAXXQUJZSYTNKSTCYGVVQ");
    msg.lat = 0.2384461120009136;
    msg.lon = 0.6721738684230429;
    msg.z = 0.5275536157557343;
    msg.z_units = 12U;
    msg.cog = 0.5807075021715479;
    msg.sog = 0.4778757164908618;

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
    msg.setTimeStamp(0.7752208476947751);
    msg.setSource(27478U);
    msg.setSourceEntity(197U);
    msg.setDestination(20527U);
    msg.setDestinationEntity(31U);
    msg.label.assign("FCTFVZSYYTKIETKZPOTHIJSPYVWEOCEDUAAEMVCJNQORRWLURHJPJEUWRXXMYZEPMUDGRLAXMWDFVKYLGKZIFAFBVPGLLFIUDKHFBYFQGTDZLYXRDCLXVSKAQKTOTQBHEKDMURWQ");
    msg.lat = 0.30442544826346407;
    msg.lon = 0.32804456049901476;
    msg.z = 0.19506804975920566;
    msg.z_units = 145U;
    msg.cog = 0.8950023783302622;
    msg.sog = 0.03941308592651549;

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
    msg.setTimeStamp(0.2848038079031182);
    msg.setSource(6704U);
    msg.setSourceEntity(54U);
    msg.setDestination(6589U);
    msg.setDestinationEntity(115U);
    msg.name.assign("UXTZAVBBKVLZUMREAJJQSFOJWCCYPHXGAZPLQXUDKQJHMJRVCTARNHLFJEPZEJJKFKNNKEXFWDNXNBOCXBYAEVWZWWCNQFVOPTWTIDAUW");
    msg.value.assign("MDWAOXZNSEOHDKJDSVHLUNBWWBGGLELNCQWRLBLLYCVVKFKXIPIZIWVO");

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
    msg.setTimeStamp(0.5875455656380375);
    msg.setSource(11061U);
    msg.setSourceEntity(205U);
    msg.setDestination(22821U);
    msg.setDestinationEntity(7U);
    msg.name.assign("QSEONXBALXMCVRDGDZWKOZJULTGUPOSNZZNXKZNDTPIWLFVXQQWWBXVOLIDZIYPTWQYKHXAKTKMBIFVHMTGAPKAOQGRYDJVGJDOBWKSJMGIZXRCCBFBMEFTRNWEWYVZNEVRNBAKZFPOQPVHMRPEZMSHELGCFFKHECTCIJHCQQDUEDJJASLASEHIYJHUHTJGSMUNIOFNXMSLVAAFIPOUIRHYWGYOT");
    msg.value.assign("VYCCQAOLRVXBDPZVOEUBMFLZOOOXDBGFCTZUYSHPIJLLXGNETGPBHHFOTKMAGJAVFNSZCZRUWWYRNQQBKQTNAYVPBGCNSHBDICEQAWNYSLXSPQNXAHGOJOJKJVEJRIPWELRHOOMXUPUFWCVHYKTGJBZWGFLETHAHZTQUQSULBIEEDQKZATICVKWJFXRUTWHACDIPVIUXMDDRPFZIMQNF");

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
    msg.setTimeStamp(0.7298239025329452);
    msg.setSource(34389U);
    msg.setSourceEntity(219U);
    msg.setDestination(48135U);
    msg.setDestinationEntity(29U);
    msg.name.assign("CLSRLQXIOBDJGVRRMYCILCVKBGWHKJWLFCXWLECFBEYPGQSUNMBAAKEFLHPEJOEUUTFIIOSZXWBMYIRGABVPJZYNTNCJDOOOLXTSTVNOQIXWNHSJXUHPDQAKHNCFTSVRYIULDPGQDQSRFMWPRAMYCGYOAUVUJVXHWRZVDMAQLFTYXWELYCBOHFKFHDMNRZKPDWTJK");
    msg.value.assign("RVSPXHWASPYGMABHYKRRACXECXPKVQHJWNNWTLGPLSQAWXFJPIBLBDQDTGMGGYOQEAIPTGIMRKDVSKVEBLMCUJONJSZYRBSJQUQNZKQUKOOTDJWGCLZTGKDOAYVXBNUIQDAKOKYZRJRSHINPOTCERWQEESIVZFLYWXSNWR");

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
    msg.setTimeStamp(0.6193027262790846);
    msg.setSource(22757U);
    msg.setSourceEntity(42U);
    msg.setDestination(14663U);
    msg.setDestinationEntity(218U);
    msg.name.assign("IVBJDTHQHQGHBEINXKTNFGAJMTMNSTHOQEKUANKVUQDMJGOPJORQMYYFRHELYCWTYAACJWW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("RIRAMPAJVWYIZUCTBMLODFASDYKSQHYUWETCUFKIPFKEXKSMELNPMEJDQYOPOXBMQUNCOELRKGNIVTYGEELCECYIAHZXKBWJOGDFKTPWVSNLWAJSEKEJMGTBBZHZUHWGZSDHPABLPVZGXXHIMIPYTJS");
    tmp_msg_0.value.assign("IGHZHZNEMPLOJWVKJWHTXZRSFGCSFIHNSHCSGORATFXOSAOLPADDELIQMUNNEVTIYTHZAFYYRGYFHYZXGKNSPOUCUPARNIPRGJLDNVDTMUNQBVDYCAQKGCZGWSQJQIFWM");
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
    msg.setTimeStamp(0.7923696450033769);
    msg.setSource(12391U);
    msg.setSourceEntity(25U);
    msg.setDestination(12118U);
    msg.setDestinationEntity(140U);
    msg.name.assign("BMJXDCCGXMAKRSOBSJCUQGFUOTZPHFDLSP");

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
    msg.setTimeStamp(0.08804203635836094);
    msg.setSource(11408U);
    msg.setSourceEntity(49U);
    msg.setDestination(29707U);
    msg.setDestinationEntity(155U);
    msg.name.assign("SEUXNIURNEAUJNTRLYMYOEVUEYCYJATVGWMESQXTWJOBTPBVGMFQOFJBIWTW");

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
    msg.setTimeStamp(0.35966350366310906);
    msg.setSource(725U);
    msg.setSourceEntity(140U);
    msg.setDestination(60951U);
    msg.setDestinationEntity(62U);
    msg.name.assign("YPKHDCMXJUROGRFLMUQNAFEIRNFOERDTJCJGXUWVZDOZIWQBFKHMSIHYBBHWYEBHSGQYAKLAEIZEEBAYDQOVTQDS");
    msg.visibility.assign("BCFFUZTULTXFKNAMMOFQCNROESGRYWTWOANWVJKPMVDTSOZGKV");
    msg.scope.assign("KFOFMHKZJXCGJLXEIYWNXVTKSPZOBUNVMHIHWIMESQXNNMAQQYZQUBSOZSXGQDIGFLCTJJPOQREKOTMVDBDPSNKULCGVMYYLBYWTRJJSBATSFESIPGRQACBHKKQPGZGAEDPTYCZVGUDRNAEWOZLUBC");

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
    msg.setTimeStamp(0.6747492702785903);
    msg.setSource(60383U);
    msg.setSourceEntity(120U);
    msg.setDestination(1014U);
    msg.setDestinationEntity(253U);
    msg.name.assign("VLZYCRQNCTOWUOEWBNLJPYPNXXRMLCSNBGUMCKLFHOZSTZDGOLDWSSNMIYJQNMYVBJZVTJEXSUWVBJAEPPWWPTARVLDMUXZKZREZHTOIVFQIKGKGHZQKOPHZEMICCBFFXYFGXJSDAFAOJVFZCVXJIEDBRAKSRSVSLSIOGHIPBTGDCWPHFLEEOWFPBMA");
    msg.visibility.assign("LAXCYPCUMGFZZKBOJRKBWDUXHJQFANNWBJCRBBBIZEJGMEITANUQSYKOGJEPISNFCYQEVSLSDXAWUUZVSBBWAUNVDPGHAIHRPOELHOMGZBWTVZKGEWGRUNYRKHNCWKYIMRJIFVRHVMDDQKPKPQSQHTKRXYASIXJQFAYLWOTVGSXXBC");
    msg.scope.assign("ZTJZHTQPGUFDQRJFBHDINLKDMKMESRGZTLZCCGYVLAMEIPHJQXSIHSQYBXJCTDWBONXHPWFZONKFVMVITLZUDHZUQFJCQGQOXYMPAABJLBLOFWENOGAACULECIYVKCKDYESQYETBRVNAZUPYAHCIRWMGSOWAXUTH");

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
    msg.setTimeStamp(0.7209674498468132);
    msg.setSource(25724U);
    msg.setSourceEntity(163U);
    msg.setDestination(5147U);
    msg.setDestinationEntity(82U);
    msg.name.assign("EEADLWZHJRQRXGUCQDLXBKQABQRGUBSVFGFURRXEJQZIOFCSFCHRPHVTEXEVWPGJUVTLPYAUKMMCOVDCTNCBWAMLTYTPDXZUDZFEREMNOQAKDNYXISIEVSGZFAGIXICBTYJNZIXUIZRYJNSCDZVUOZVMWGLGJVEEKHGSOCOQSAFJLRLTLAKKTZBDPSWKTBWHISIU");
    msg.visibility.assign("TWPFUEDWQWUTFOQMMILYKODWLREVFVMXGCKKSRRSOP");
    msg.scope.assign("OHJJYHGAXWIIJFYSNCIMYACUGOTXKMBCUPMHYLQDOEJYWFPLQJEMSFHIPYLWWUZZEDJPQKFVSGMGAIANKLGVEBXIA");

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
    msg.setTimeStamp(0.25905878424874373);
    msg.setSource(17416U);
    msg.setSourceEntity(59U);
    msg.setDestination(35616U);
    msg.setDestinationEntity(163U);
    msg.name.assign("SRZXMBEWMMVPGDVZFVEIXQFHOMPVKTNUTTBFDBGUIUUIRVQPTYOEWYKVSBQHFKEAZDDIZOSXPSOREZKLCARCHAAICAXLYJYYDELFMNEASRTIOMXYSMUKTSSCDJBKUTPRCWJBQFMHDMRVBGHXNCJJPHLZZWGVCRLQNOWHNAKFDKODWPXFJQQLNIAXOPRGPUBISCHEJLDWCTSTRNKOWQNEHZZYUGVAPJYJVAYZQIWLBG");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NGMAJBLWAJJECPZVVZWUDWMTYERNLQOUWCDMJOFQJRYWEHFYDEGRDWZBCPNDKWICCQIXNYZUUTMDPPRTVLPQKFEBAGFVGTKTZLXSFRWURTJZIQHDKCVYO");
    tmp_msg_0.value.assign("SJJCOMFOGZKLUTRATNMPXVDGTTMYIPJLLKTLZDPWZQAVUJCRCIFHMWSVXDMALAELZNIDKGROSLNQEYBSAAWEEWXJKDXVXULGAFZOQWV");
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
    msg.setTimeStamp(0.8349265508755551);
    msg.setSource(13229U);
    msg.setSourceEntity(76U);
    msg.setDestination(44463U);
    msg.setDestinationEntity(20U);
    msg.name.assign("DKNSPQDINEVDVURFLGTYTNYTBMCWTOYJCMVCENMXREUIQDRRDZBAUANICYEAQGPVFGGSXJEAEUMBVSYDWMLKPQIJGTXC");

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
    msg.setTimeStamp(0.07624665587545298);
    msg.setSource(5421U);
    msg.setSourceEntity(218U);
    msg.setDestination(55649U);
    msg.setDestinationEntity(161U);
    msg.name.assign("XEYGKIGTCZFAMXEJWXULTLCTJIDNHFFAHWIKRBOADBNROJCDISFFUAL");

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
    msg.setTimeStamp(0.2879267837636752);
    msg.setSource(11948U);
    msg.setSourceEntity(112U);
    msg.setDestination(8691U);
    msg.setDestinationEntity(201U);
    msg.name.assign("RUZCXPCIBEXTAFLDWCOTXJWOYNZJBMCRXUHQDICSITIYHKBHJIHARQBCZBZPSEDWFEEJVXYGPCVZDXFUUPQNMDXYSKFEJNPMKJFOMSRXRTEDOGPSRHYKZNQOGCWPLSVTUWCHGAVSRMNUZTOVHBUKPBQYQWWIFKLWJMLUDLGOBKTJOHG");

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
    msg.setTimeStamp(0.42051684215687024);
    msg.setSource(8974U);
    msg.setSourceEntity(141U);
    msg.setDestination(1317U);
    msg.setDestinationEntity(152U);
    msg.name.assign("JYJBBHPRCDCOZZKDHQQTMKNTDUYAXRXKSRNGXVJZSLSWLQMEWOGUCEMERIFJQUYJUHFNRDWTFZELOVHWRVLIBLBNQKNMKYCUMFTCVNPRNETOVBVLHHYRKSMSJOTBQYFCGPPUQEZXVPUASMZSSDAZBELIIEIBGHYIFWJJOXYGLAAHGLAZUDYXBRWIARFLQDAANQIOMTGEAXTWPWHZVUXZJMFCPFPKNNOXPCVKKSIQGPGTIE");

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
    msg.setTimeStamp(0.5628607991224033);
    msg.setSource(14125U);
    msg.setSourceEntity(9U);
    msg.setDestination(42703U);
    msg.setDestinationEntity(141U);
    msg.name.assign("JVVBUSXQSNECNDHEPCUEASIOBCSMM");

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
    msg.setTimeStamp(0.7293281607027337);
    msg.setSource(12184U);
    msg.setSourceEntity(11U);
    msg.setDestination(2163U);
    msg.setDestinationEntity(176U);
    msg.timeout = 2048520514U;

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
    msg.setTimeStamp(0.8163304825418508);
    msg.setSource(44701U);
    msg.setSourceEntity(93U);
    msg.setDestination(55434U);
    msg.setDestinationEntity(183U);
    msg.timeout = 253443906U;

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
    msg.setTimeStamp(0.23624060937080893);
    msg.setSource(6250U);
    msg.setSourceEntity(41U);
    msg.setDestination(64764U);
    msg.setDestinationEntity(15U);
    msg.timeout = 583766457U;

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
    msg.setTimeStamp(0.9520608986893491);
    msg.setSource(33720U);
    msg.setSourceEntity(228U);
    msg.setDestination(57194U);
    msg.setDestinationEntity(248U);
    msg.sessid = 3373494793U;

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
    msg.setTimeStamp(0.041901108955739175);
    msg.setSource(63846U);
    msg.setSourceEntity(23U);
    msg.setDestination(41259U);
    msg.setDestinationEntity(15U);
    msg.sessid = 1599901974U;

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
    msg.setTimeStamp(0.5874751294982342);
    msg.setSource(55272U);
    msg.setSourceEntity(63U);
    msg.setDestination(24158U);
    msg.setDestinationEntity(165U);
    msg.sessid = 326327328U;

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
    msg.setTimeStamp(0.3846608384172726);
    msg.setSource(61896U);
    msg.setSourceEntity(201U);
    msg.setDestination(20736U);
    msg.setDestinationEntity(35U);
    msg.sessid = 3530033765U;
    msg.messages.assign("CJJEMDBUJHUCFQERSAIILOUNZALSGAVHTWFYEGIVDLOBTANEXKYAOKPOLQEMVMSJKLXPTKVIHEJIIOKOMRXUAWXXNUDMLBMYGOSYJIVJRGHRLLFRZN");

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
    msg.setTimeStamp(0.0818077336669123);
    msg.setSource(25531U);
    msg.setSourceEntity(43U);
    msg.setDestination(8823U);
    msg.setDestinationEntity(30U);
    msg.sessid = 1184137597U;
    msg.messages.assign("ODEJBXCVTYLIEPSWTKCUEGYTDLIJMABDHLYRACWJNYIJBOMFLFEUDVGLTSISFLEIDEXBUEMSJKVRARZQLZFAVHPODNBXWZTATFNCSUHXNDQQQHJCRSABQYYOAVQZLJCYPNVWNMPFTNGGSHKKWVGFDGHZWRMYRRIXCMKPPAMYOIORHGNYJQHFXIQSDGMTQCFXNIEOPUUXLEKMTHKSDXWUUPOEUKSWBBOXZZBKTVMR");

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
    msg.setTimeStamp(0.5993033087943092);
    msg.setSource(43061U);
    msg.setSourceEntity(251U);
    msg.setDestination(6350U);
    msg.setDestinationEntity(251U);
    msg.sessid = 871092031U;
    msg.messages.assign("FSFVJTGVDYEUIKWHONGKBZCJGYTVWQJGGHDGZUJTHIDZCDBORPEKBMVWYRSCRIFPZBWROCUMUDSIJFNQWUBHMWXBJKZSEEXFMQBROXSHMQHQCAKDRAMRLAPUPYLHSNHLDPWTIFOZTJALVXONBUXPOIUQLEXYPZKRAIGYZWUCAGCMKQDBLQMFZNIXNIHCYGCLBJKLYXPOAJAEVRJPSND");

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
    msg.setTimeStamp(0.22687573729174149);
    msg.setSource(62373U);
    msg.setSourceEntity(121U);
    msg.setDestination(1440U);
    msg.setDestinationEntity(47U);
    msg.sessid = 2694732820U;

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
    msg.setTimeStamp(0.11741459199413151);
    msg.setSource(7532U);
    msg.setSourceEntity(25U);
    msg.setDestination(64184U);
    msg.setDestinationEntity(4U);
    msg.sessid = 810072244U;

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
    msg.setTimeStamp(0.6078972243371029);
    msg.setSource(13510U);
    msg.setSourceEntity(96U);
    msg.setDestination(18797U);
    msg.setDestinationEntity(124U);
    msg.sessid = 3452918084U;

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
    msg.setTimeStamp(0.9252485428194598);
    msg.setSource(50811U);
    msg.setSourceEntity(42U);
    msg.setDestination(31211U);
    msg.setDestinationEntity(142U);
    msg.sessid = 1540450260U;
    msg.status = 50U;

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
    msg.setTimeStamp(0.3304565962372287);
    msg.setSource(22379U);
    msg.setSourceEntity(63U);
    msg.setDestination(14477U);
    msg.setDestinationEntity(86U);
    msg.sessid = 2769989304U;
    msg.status = 242U;

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
    msg.setTimeStamp(0.07390550606637547);
    msg.setSource(29528U);
    msg.setSourceEntity(8U);
    msg.setDestination(14085U);
    msg.setDestinationEntity(121U);
    msg.sessid = 1795996466U;
    msg.status = 214U;

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
    msg.setTimeStamp(0.056380739127518065);
    msg.setSource(44021U);
    msg.setSourceEntity(195U);
    msg.setDestination(12869U);
    msg.setDestinationEntity(68U);
    msg.name.assign("PCLMOPEJDG");

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
    msg.setTimeStamp(0.35020161297722896);
    msg.setSource(60470U);
    msg.setSourceEntity(116U);
    msg.setDestination(38776U);
    msg.setDestinationEntity(220U);
    msg.name.assign("GBXCSQHUIZUNALRNSGHZVOQJBXYOGWUPFSSBCNXVYPPLTEJZLNHRFECTMLMTDAARKWKDFTVZZVBTEUEUSJYHMZAAWOTHMDDXXONEUEGMFDPWRELUFMVURGDLVKPBQEXFQABTTIDYAPXKGYRMQOBJWDGHVKYGCOFTHZQCKCMSYWAXBNPKKFEZGQISVCIJZWYSSLYULIHCIFB");

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
    msg.setTimeStamp(0.7049107526690024);
    msg.setSource(3772U);
    msg.setSourceEntity(41U);
    msg.setDestination(32410U);
    msg.setDestinationEntity(137U);
    msg.name.assign("MROQCMYBXLDGAQJIFBSXPFKEWNIXGHCGUEQHLAPNNJOTQWBJCZKZTZJKRXFZVYJDWHPUNL");

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
    msg.setTimeStamp(0.9469942398168345);
    msg.setSource(4756U);
    msg.setSourceEntity(107U);
    msg.setDestination(58160U);
    msg.setDestinationEntity(253U);
    msg.name.assign("ZEGFYBNABJUDFVNDIGMHHLXULKGOACJUXFFULQWGVOKXVQMSOZZHGVCZTSHCJKBJKYIOPDMLAVURAUKNBQHXZNEB");

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
    msg.setTimeStamp(0.2771109417056995);
    msg.setSource(41158U);
    msg.setSourceEntity(36U);
    msg.setDestination(30169U);
    msg.setDestinationEntity(122U);
    msg.name.assign("EQTTKLAPZCQPSXOQHTWRUGBJBSVDLUGNUERYTNUWPVKKCTKBRMHXVNINBEITMAJWMQXNNIWAXUPZKAECNQTHOYCLFNMZWKLYFAOOJGFEIRPNDTHRXDYCQPAVPGCZWH");

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
    msg.setTimeStamp(0.40108180967313145);
    msg.setSource(36417U);
    msg.setSourceEntity(39U);
    msg.setDestination(58015U);
    msg.setDestinationEntity(224U);
    msg.name.assign("PASVZMVEBPZHCCJUXDGTDKNMCQLLBTUKUYRBXTOWRKPWDETAFBRQPMIPYEXBQUBSGSLOHIJTNARABJHMICUOTVQRESTAXZDRNZXQYYRGBOKTKLSGHZXXINKFGMYNJURYPFJZRZVONAWQGLRW");

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
    msg.setTimeStamp(0.3527900746147319);
    msg.setSource(45270U);
    msg.setSourceEntity(130U);
    msg.setDestination(7184U);
    msg.setDestinationEntity(89U);
    msg.type = 46U;
    msg.error.assign("KCWPJRIRQWFWTZSYPLFILIYXFPHJNFBDBWGTYDNLMHWMXVVWSERUNHDGCQXXCUJYEVOJFATINDPIHULTNMUYAFSQQNMBXQZKRAXKXBHJVOPKDYSGZIKBOHUXAIYAJPIYCNHKOTJULYFKJVHGCAREARCGECRKDMFHJPBNFVSZBRENQYVGQAWUDDGSIXTPXZZDUWOSTFLQTCLOQOMTOVSSMTHPLCAEMSUIRANZULKM");

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
    msg.setTimeStamp(0.581386846147588);
    msg.setSource(55792U);
    msg.setSourceEntity(217U);
    msg.setDestination(64706U);
    msg.setDestinationEntity(71U);
    msg.type = 176U;
    msg.error.assign("QEVDQJOIBBAYDXENDZRVSACNXZCIGXYLHBMZITY");

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
    msg.setTimeStamp(0.22186176764786092);
    msg.setSource(2200U);
    msg.setSourceEntity(89U);
    msg.setDestination(45469U);
    msg.setDestinationEntity(244U);
    msg.type = 96U;
    msg.error.assign("SXISUPQFDYKAMRGEMKEDAUYNYFQJSLTTTIJYKHXBAEFHLTWWWECBLYHUCTQGPAKOOWBRFQRXHHOQASGCGPIAOWLJIBJZWVKNFVBZQCJZSIVYUDXNWLJFMRJMFTDLCNICABDDDOMCXQGSDNQOLUWSXXNCFVZRXUGABI");

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
    msg.setTimeStamp(0.9536848553760635);
    msg.setSource(46520U);
    msg.setSourceEntity(70U);
    msg.setDestination(11360U);
    msg.setDestinationEntity(191U);
    msg.seq = 38006U;
    msg.sys_dst.assign("UHDAQFVXMWSPWMTKLKFPNOXOAIIEFPTUJLKDQZUXDYBVBJCERNPRNVDXHWISXKZEGARGLHBGZBHTZWLYJKTENAMJMHAACXSTEVISCKMLTOWQPRTVUJCGAMHCBOKELQBMCISQLPRAVNNXQVZRGFCAWSQZPQZQNLBMRMFKZOCGWUSYBDRDNWHFJWFUGHOSFFYJGJJYOWIIUICNUPQGZTSDIIY");
    msg.flags = 224U;
    const char tmp_msg_0[] = {-92, -49, 76, 33, -88, 124, -94, 118, -33, -98, -4, -24, 54, 2, -118, 28, -117, 46, 59, 86, -120, 10, 76, 94, -122, 61, 124, 106, 90, -59, 83, 20, 49, 32, -9, -32, -115, -111, -74, 51, -86, 16};
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
    msg.setTimeStamp(0.8853115052272809);
    msg.setSource(48288U);
    msg.setSourceEntity(150U);
    msg.setDestination(58171U);
    msg.setDestinationEntity(239U);
    msg.seq = 8894U;
    msg.sys_dst.assign("GQAARJQEQYRKTWVMKYPDKXECLQKMNLLCVLSEXBAOHGXNAPOBRWXKVJAGVZAJOZVQRROFCIFLEWCBETYTICKHQHUVREYDAGMTNLESZIMIHBKTIQUZXPZQWGSCPYWHHYTQZFEXMXAJIFFONKJFMWDJOEUILZXWSZFOVPWTBXSBCZIBSDNCMHFMYHRBUPPTURMUADYWJRGHTFABS");
    msg.flags = 77U;
    const char tmp_msg_0[] = {-103, 98, -53, 103, 107, 80, 32, -59, -34, -100, 44, -126, -30, -92, 16, -35, 64, -44, 4, -66, 33, -127, 86, -82, 69, 16, 88, -123, -106, 1, 16, 105, 8, 114, 117, -30, 35, 119, -106, 119, 57, -83, 57, 3, 13, 98, -112, 100, -65, 18, 41, 95, 60, -91};
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
    msg.setTimeStamp(0.4095480855111333);
    msg.setSource(42083U);
    msg.setSourceEntity(248U);
    msg.setDestination(57007U);
    msg.setDestinationEntity(174U);
    msg.seq = 7650U;
    msg.sys_dst.assign("VQHTHYCXIPLORXZSHUZFVYUMGGAXDFWFORJWWZRHHQAEKNNOGHNSIDEMMPMYXMAEWUCNFQYXRBQUIKZRBLSDHSVTCNJXBGOQZEDBQNOHDMJRPXYELDQIAZLBFOATKLDCLEV");
    msg.flags = 179U;
    const char tmp_msg_0[] = {-44, -57, -110, 45, -108, 116, 22, -40, 33, 42, -101, -107, -84, 76, 69, -73, 77, 6, -122, 122, -83, -7, -101, 88, 42, -39, -4, -119, -120, -102, 104, -54, 59, 44, -70, 46, 65, 81, -97, -63, 17, 36, -54, -54, -92, 0, 62, 116, 22, -41, -107, 0, 97, 95, -22, -21, -107, 16, -75, -88, 108, 19, -27, 47, -82, 15, -21, -122, -110, -58, -38, 2, -68, 18, 58, -102, -123, 80, -69, -117, -49, 76, 100, 38, 118, -103, 28, 23, 3, 103, -87, 44, 47, 59, -78, -63, -78, -49, -10, -26, -14, 118, 49, -34, 35, 20, 81, 57, 28, 62, -93, 76, 122, -65, -123, 90, 80, -60, -49, -90, -99, 85, 96, -98, -11, 76, 43, 112, 21, 55, -64, 55, 24, -50, -107, -113, -9, 105, -6, 64, -117, -81, 51, 54, 43, 47, -46, 54, -25, 6, 105, -119, 35, 18, -71, -32, 59, -113, -23, 72, -27, -93, -60, 124, 124, 73, -28, -62, 30, -108, 85, -24, -50, -128, 20, 66, -125, -54, -69, -122, 0, -30, -12, -32, -75, -85, -115, -29, 21, -92, 33, -121, 103, 0, -40, 8, 102, -79, 25, 100, 79, -37, 89, 32, -15, -78, 109, 48, -102, 27, 31, 38, -73, -67, 11, 21, -13, -26, 57, -23, -110, 5, -68, -66, -110, 51, 103, 98, -93, -59, 78, 36, 12, -27, -3, 126, -95, -19, -104, 56, 92, -87, -27, -51, -51, -127, 78, -84};
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
    msg.setTimeStamp(0.7330558874951771);
    msg.setSource(38639U);
    msg.setSourceEntity(44U);
    msg.setDestination(29798U);
    msg.setDestinationEntity(139U);
    msg.sys_src.assign("ZKRDTBLLMMOYWSJPI");
    msg.sys_dst.assign("DXNKKFFFDUYVQQEAITZXRKSFTAOVKVZLUCHBBDJVUQNGOYUGZZHZKNMFTJBWLPMRNTRYXQQVCFQEHQQAJGBPHPVEBPPYGRJTRCKAOMCSLIMKAMJZYZWXUUEISCPVXAOTDOGWVWLHCBIGDFTORNLAXEJMNUYRXJJKIGIJHULUWPAEHRDNFBDFWMGDOSYTSZWXSVYEOF");
    msg.flags = 34U;
    const char tmp_msg_0[] = {-64, -69, 126, 69, 0, 111, -31, 62, 32, 55, 32, 111, -15, -15, -99, -17, 110, 92, -21, 118, 105, -120, -43, 76, -48, -100, -124, -33, 26, 53, 109, -55, 65, 107, 105, -81, -76, -62, -62, -40, 65, -6, -90, -82, -66, -53};
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
    msg.setTimeStamp(0.6769964617176003);
    msg.setSource(11954U);
    msg.setSourceEntity(222U);
    msg.setDestination(62489U);
    msg.setDestinationEntity(44U);
    msg.sys_src.assign("JTICRYTGVPXFEHCDWVHQUYUPOJBDEFHCIFAIIEINIMWGBFBJJDNYVUACWDGXLNXPVMSTWSQHRATROJYWBZXBLENKDINMMOGVBJONXIVXGDEFCFLRSZOBXPMVAYGJAPLOMSAKZRDVGHDQUZHAUWRLPQSKKTMUY");
    msg.sys_dst.assign("TSJURNMGPDCZGFIXHTCHAQNZBLCSHVTQQUVKXHRKYYJHLHJTURWZIOPRTWMHMVXFWGXXPVQCWGEBPNCESGAUOXWOMKFVHBJFJSTSNQAMUYQBOJUKQLFCNKUSZEDMLKJOFGEWDQIECFLVRIADFGPZYBZRWLSP");
    msg.flags = 249U;
    const char tmp_msg_0[] = {-80, -98, 45, 19, 95, -55, -90, 86, -5, 34, -122, 115, 70, 71, -27, 97, -85, -92, -21, 35, 10, -23, 94, 60, 48, 121, -14, 125, -23, 44, 49, -34, -94, -116, 45, -40, -116, -88, -32, -4, -11, 105, 114, 63, -4, -86, 11, -77, -82, -58, -117, -6, -108, -54, 54, 56, 70, -117, -22, 17, 60, 69, -126, -31, 40, -52, 89, 85, 111, 50, 56, 122, -68, -11, 42, -51, 18, -40, 33, -14, -75, 47, 111, 54, 70, -50, 38, 79, -78, -5, -79, 48, 19, 121, 42, -79, -79, 9, 116, 52, 77, 111, -57, -50, 85, -16, -99, 76, 108, -74, -116, 117, -29, -128, 53, -5, -120, -109, -103, 55, 111, -4, 15, 32, -32, 37, 37, -23, 83, -93, -7, -80, -106, 76, 56, -53, 110, -103, 7, -60, 93, -60, 119, -4, 25, 120, -28, -107, -37, 31, -58, -63, 17, 126, -123, 73, 121, -65, -88, -32, -42, -45, 0, 97, 103, 61, -62, 59, -128, 124, -37, 19, 38, 48, 83, 62, 81, 101, -66, -9, 30, 54, 109, 124, 86, -7, -103, -109, -4, 10, -79, 102, 119, 112, -107, -83, -121, 54, 3, -97, 7, -94, 41, 35, -124};
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
    msg.setTimeStamp(0.3770805960837873);
    msg.setSource(17236U);
    msg.setSourceEntity(17U);
    msg.setDestination(2872U);
    msg.setDestinationEntity(43U);
    msg.sys_src.assign("CMZLXUABMTNOZHRACXWOTTXROBAXGXRFQYIZFJPHQMMQEOKZIVFCYHNBTVCRZDLRYGEPBPESFTYBT");
    msg.sys_dst.assign("JOCMBOEGDAFBHMXAWDEKSIVAUSRWHLNKEMKZPZNKCCNVUQDIFMPIGXTCKLONAOSYPOOWUBFGAFLPPFJRYGYBVGWEQAYQYOBKWRVFFKI");
    msg.flags = 150U;
    const char tmp_msg_0[] = {56, 35, 80, -109, -39, 67, -104, -109, 102, -43, 10, 13, 90, -120, -98, -35, 38, 111, -32, -41, -115, 84, -39, 10, -10, -123, 24, 82, -57, -20, 101, -27, -110, 31, -128, 95, -52, -93, 6, -61, -108, -67, 56, -98, 3, -63, 102, 93, -80, -2, 80, -69, -68, -55, -40, 11, 89, -76, -68, 3, -117, 48, -14, 72, 116, 42, -101, 119, -44, -58, 84, 56, -12, 57, -22, -17, -36, -68, -55, -39, 22, 120, -91, 78, 57, -89, -125, -25, -4, 83, 10, -98, -52, 82, 7, -64, 117, 21, -10, -16, -37, -70, -41, 53, 67, -77, -47, -83, -101, -67, -78, -126, -101, 53, 79, 40, -94, 19, -89, -101, 73, 42, 116, -92, -2, -106, -119, -95, -3, 7, -121, -104, 101, 72, 16, -45, 28, 49, -50, 46, -87, -81, 74, 59, -35, 114, 40, -12, -54, 6, 5, -32, -48, 84, -46, 42, 34, -91, 42, 65, 67, 29, 21, 41, -115, 107, -123, -31, -33, 68, -21, -70, 50, 117, 113, 0, -89, -30, 111, -27};
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
    msg.setTimeStamp(0.0904142325343904);
    msg.setSource(33300U);
    msg.setSourceEntity(137U);
    msg.setDestination(12857U);
    msg.setDestinationEntity(110U);
    msg.seq = 38640U;
    msg.value = 102U;
    msg.error.assign("QKFHEIYKXASPDZWGFBYDMGEKXMJQTWZCRAVMYQHNULCJIYPOMUSFGNAUBZJWYULGSIQBARVCGHICLZSFFVKVOIXBFNZAQTOKOZMBTWAXDRUDITSVSEHZWRQWDOJNMCRJJENSLYTLMPEFWOKUZKREELJX");

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
    msg.setTimeStamp(0.3730081572464967);
    msg.setSource(10366U);
    msg.setSourceEntity(29U);
    msg.setDestination(8803U);
    msg.setDestinationEntity(136U);
    msg.seq = 23891U;
    msg.value = 193U;
    msg.error.assign("JFQHBDPYMLGRIZASXJSTVXHMKLMXKNMBKJVZYCIKZKUTONUHXNUGEPQDGDREWPHAVSVSPCLHNWNDLARPYWVSBZGQUFNDBUQSJZIYGJVORHWURJFMOMZCDAQNTTEPEHTQPRIJJLCVKRZQYFKIDAXHGWLKCGFMTWWIIXBRGVCOXHIYVEOOUHOA");

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
    msg.setTimeStamp(0.4255776050712827);
    msg.setSource(48489U);
    msg.setSourceEntity(170U);
    msg.setDestination(49665U);
    msg.setDestinationEntity(71U);
    msg.seq = 26325U;
    msg.value = 79U;
    msg.error.assign("CVADMJIQDINYSZRFKPFDHMNEJGDYXDGUINRMOMANLEGSTFEYENOGBYUBCJCLVXXKPTINLOJHBAQAPZMDKRWJLAHNTVVTKYZACDROGUBMWPGHTUVXPVCPXCESARIVZILOJJFXROBYNOKLGETSXRVOLGFEJUQQYLISSTGPHUHYABKI");

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
    msg.setTimeStamp(0.9783158123695725);
    msg.setSource(17894U);
    msg.setSourceEntity(3U);
    msg.setDestination(3209U);
    msg.setDestinationEntity(165U);
    msg.seq = 36586U;
    msg.sys.assign("XQLGBHMFVEWEPTGFCWOETKIUIMBITBZPYWRMCFKOLZINEUFBFBAPVFETZSVQPWYNHKRBLQJAVMSQLXWUEDEDYDZNZMHYGMTYKCLAJSJSOBADYHORCWWRSUSZCQPNVLKUVWXTLNNQJRXSEPBKOOGCXWOKQPSFVUYDTMGKLVAGSRQYUHILQMRUEH");
    msg.value = 0.09915784174501108;

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
    msg.setTimeStamp(0.32899898570536745);
    msg.setSource(1372U);
    msg.setSourceEntity(134U);
    msg.setDestination(62665U);
    msg.setDestinationEntity(216U);
    msg.seq = 55324U;
    msg.sys.assign("YSRDCMFTKVPESJRVARBYUZZQGXMVRCGAIOWWEEOMNLIKAOIORLSWEQPPGNMLKLPGOJVUAVWCCKXQSRMTDSGWFSOPWEMXZCXDUGVHHHQLJZKIHNDWFLEXHHQJREJMIBAZHTDXDNNNNHFUDTYQHTDO");
    msg.value = 0.10627936203887967;

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
    msg.setTimeStamp(0.3783095923533878);
    msg.setSource(61129U);
    msg.setSourceEntity(129U);
    msg.setDestination(13243U);
    msg.setDestinationEntity(189U);
    msg.seq = 28965U;
    msg.sys.assign("HUWLRRNUUNHCYNAWRHEUEJGAHXKATQORZYFXJBNLGRTSECSHWTVFVVDIUDMQXETTTVZXMCPCNIYIJPRVOIWWLLDAIBRYPFCMQOPOUWWDOBJVASYGKWCKGSVLFVZJBMPSMGGHDTADSQAFPEZZQXZMNKXXQHXEKGFBIOSGUKJQXOSZGYFKOBWBFNNEDIHZLUNKMMJICAOLVEIYQQRTYKECSHLDQVPPW");
    msg.value = 0.3679114501349908;

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
    msg.setTimeStamp(0.559637259000688);
    msg.setSource(7210U);
    msg.setSourceEntity(47U);
    msg.setDestination(39345U);
    msg.setDestinationEntity(108U);
    msg.action = 224U;
    msg.longain = 0.917257891181764;
    msg.latgain = 0.2849535666700239;
    msg.bondthick = 1648941535U;
    msg.leadgain = 0.6677117908467581;
    msg.deconflgain = 0.6515074553702436;

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
    msg.setTimeStamp(0.014990729537967429);
    msg.setSource(44338U);
    msg.setSourceEntity(149U);
    msg.setDestination(28375U);
    msg.setDestinationEntity(223U);
    msg.action = 229U;
    msg.longain = 0.9965678901170425;
    msg.latgain = 0.19992393365791528;
    msg.bondthick = 1936317283U;
    msg.leadgain = 0.408955314909347;
    msg.deconflgain = 0.1321208168385014;

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
    msg.setTimeStamp(0.839250352348042);
    msg.setSource(4874U);
    msg.setSourceEntity(66U);
    msg.setDestination(40776U);
    msg.setDestinationEntity(142U);
    msg.action = 99U;
    msg.longain = 0.615974913552567;
    msg.latgain = 0.681763618256724;
    msg.bondthick = 1744318718U;
    msg.leadgain = 0.3065070157235309;
    msg.deconflgain = 0.28707812865441296;

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
    msg.setTimeStamp(0.3532865854691707);
    msg.setSource(29325U);
    msg.setSourceEntity(8U);
    msg.setDestination(30171U);
    msg.setDestinationEntity(205U);
    msg.err_mean = 0.9683306904039456;
    msg.dist_min_abs = 0.6408241696855439;
    msg.dist_min_mean = 0.057304236138313036;

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
    msg.setTimeStamp(0.703658560934555);
    msg.setSource(32141U);
    msg.setSourceEntity(131U);
    msg.setDestination(45465U);
    msg.setDestinationEntity(91U);
    msg.err_mean = 0.44341442860379776;
    msg.dist_min_abs = 0.14520160883788757;
    msg.dist_min_mean = 0.0024185752825882645;

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
    msg.setTimeStamp(0.6966573476594302);
    msg.setSource(20527U);
    msg.setSourceEntity(82U);
    msg.setDestination(13477U);
    msg.setDestinationEntity(189U);
    msg.err_mean = 0.21857516381908504;
    msg.dist_min_abs = 0.4525827473017715;
    msg.dist_min_mean = 0.7684818437884214;

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
    msg.setTimeStamp(0.25151262241814776);
    msg.setSource(26515U);
    msg.setSourceEntity(176U);
    msg.setDestination(23982U);
    msg.setDestinationEntity(0U);
    msg.uid = 44U;
    msg.frag_number = 125U;
    msg.num_frags = 35U;
    const char tmp_msg_0[] = {55, 15, 87, 15, 101, 88, -107, 15, 82, -28, 88, -14, 89, -111, 17, -126, -113, 66, -102, -57, 4, -30, -16, 77, 124, 76, -81, 17, 27, 61, -46, 122, 49, -12, -18, -30, -31, -116, 9, 123, -126, 79, -103, 43, -107, 25, 109, -104, -106, 106, 51, 66, 10, -41, -9, 112, -109, 21, -119, -99, 6, -48, -124, -4, 96, -102, 126, -79, -69, -38, -91, -68, -97, 111, -2, 47, 54, 76, -124, 126, 108, 77, 99, 40, -61, -56, -119, -2, -116, 88, 30, 72, -112, -69, 107, -109, 13, -87, -62, -87, 110, -22, -77, 103, 125, -49};
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
    msg.setTimeStamp(0.010321896639532424);
    msg.setSource(5755U);
    msg.setSourceEntity(24U);
    msg.setDestination(1719U);
    msg.setDestinationEntity(213U);
    msg.uid = 159U;
    msg.frag_number = 149U;
    msg.num_frags = 12U;
    const char tmp_msg_0[] = {115, -9, 71, -121, -105, 100, 114, -70, -101, -98, -40, -109, -94, 81, -20, 8, -89, 102, 83, 36, 83, -17, 118, -87, 4, 50, -51, -61, -63, -71, -43, -11, 47, 82, 102, -76, 43, 7, 95, 92, -88, 1, -12, -91, 72, 103, -6, 52, 29, -81, -126, 117, 1, 0, -9, 112, 75, 91, -34, 23, 86, 65, -38, 12, -60, -76, 2, -123, -67, 74, -42, -87, 61, 41, -87, -3, -18, 74, 91, 75, -20, -47, -71, 44, -36, -20, -30, -21, -21, -52, 62, -116, -30, 47, -79, -105, -104, 108, 58, 75, 95, -51, -40, -78, 73, -114, -45, 66, 83, -41, -117, -108, -91, -27, 124, 123, 91, 65, 61, -78, -46, -118, 72, -16, 113};
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
    msg.setTimeStamp(0.17167610074612416);
    msg.setSource(53650U);
    msg.setSourceEntity(9U);
    msg.setDestination(4712U);
    msg.setDestinationEntity(103U);
    msg.uid = 135U;
    msg.frag_number = 145U;
    msg.num_frags = 22U;
    const char tmp_msg_0[] = {12, 18, 40, 59, -72, 120, 72, 58, 36, -94, -78, -95, -28, 70, -85, -39, 53, -123, 52, 115, 36, 22, 89, 52, -10, -76, -55, 58, 73, -91, -75, 83, -74, 86, -71, -80, 20, -65, -18, -95, 72, 88, 110, -4, -107, -90, -28, 2, 3, 56, -69, 9, -120, 49, -44, 73, -33, 11, 34, -82, 77, -126, -16, 123, -1, -86, 70, 57, 100, 84, 50, -25, 92, 72, 123, -106, 7, 78, -22, 97, 97, 67, 126, 104, 111, -50, 25, 52, -96, 50, -23, 89, -63, 106, 103, 50, 63, 74, 125, -108, 83, -79, 57, 55, 61, -104, 119, -5, 60, 49, 90, 69, -96, 12, 121, -81, 11, 44, 71, 87, 65, -83, 54, 3, -56, -91, -113, -82, -102, 10, -45, -40, -106, -88, 9, 75, 71, -10, 3};
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
    msg.setTimeStamp(0.24966850934279927);
    msg.setSource(10103U);
    msg.setSourceEntity(38U);
    msg.setDestination(36842U);
    msg.setDestinationEntity(35U);
    msg.content_type.assign("NCWXMDMDODJSPEUHJYOZAPMDCX");
    const char tmp_msg_0[] = {54, 0, 36, -87, -121, -110, -72, 62, 2, 106, -21, 75, 118, -86, 48, 55, -6, 47, -20, 12, -100, -6, 121, -19, 45, 95, 3, -53, 60, 87, -37, 50, -119, -25, -4, -96, 64, 25, -100, 118, 21, 89, -76, 11, 5, 53, 91, -15, -87, 48, 32, -80, -6, -80, 38, -123, 25, 107, 100, 11, -55, 63, 91, -85, 102, -87, 14, -116, 23, -114, -89, 84, 47, 63, -115, -70, 44, 18, -36, -75, 119, -44, 81, -21, -61, -90, -14, 76, -5, -18, 60, 93, -70, 47, 39, -37, 124, -18, 25, 77, -21, 124, -76, -37, 77, 2, 102, -106, 79, 83, 14, -105, 31, -6, -108, 93, 24, -106, 69, 52, 117, -50, 45, -47, -29, -9, 34, -74, 75, 18, -16, 115, -62, 19, 51, 5, 31, -10, -94, -81, 82, 77, 104, -108, -110, -54, 47, -9, 41, 80, 11, -120, 78, 69, 20, 123, -26, -47, -45, 9, -120, -69, -113, -128, 87, -12, 17, 29, 9, 114, 81, 17, -16, -115, -6, -98, 114, 122, -76, 52, 97, 49, 24, 124, 76, -105, 63, -35, 104, -114, -119, 54, 111, 7, -115, -12, 77, 27, -26, 55, 116, -67, -52, 88, -6, -65, -41, -109, -90, -97, 123, -61, 44, -122, -53, 73, -86, -38, 12, 70, -122, -103, -99, 81};
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
    msg.setTimeStamp(0.39457340552025044);
    msg.setSource(29703U);
    msg.setSourceEntity(232U);
    msg.setDestination(25396U);
    msg.setDestinationEntity(70U);
    msg.content_type.assign("AGXTCHEKFDPGMQZZKVXVSPSAAASXZYGGKIFNMUWWODVRENOOBRXCXUNXUBOHCOLMTYBBCCIJSYYDUTSEMIQSQBJBJKEQTXKRNLTIRKRKVNUZZHRSGIUPXFWEPJCLJYUVGICVBWHIZRISWESMFZKQWBMUZEAHQUILMLFPARGGYHCXYDZFWQOTSNLDJVEVELJWRFOVT");
    const char tmp_msg_0[] = {-106, -107, 103, 65, -97, 87, 96, -107, 51, -76, 59, 61, -110, 8, 62, -113, -20, 51, -32, 48, -17, -101, 14, -7, 8, -24, -109, 49, 102, -66, 106, 5, -120, 9, -94, -95, 24, -106, -63, -104, -38, -111, 105, 115, 71, 74, 40, -15, 53, 4, 35, -8, -66, 97, -123, 30, 13, 11, 16, -111, -55, -2, -105, 90, -33, 23, -101, 95, 118, -75, -65, -40, 44, 38, 92, -19, -119, 90, 100, -84, 16, 3, 1, 102, 126, 40, -102, 107, -100, 19, 22, -63, -116, 102, 9, 79, -31, 48, 95, -31, -75, 32, -85, -67, -5, 34, 29, 113, -12, -29, 1, 62, -125, 89, 84, -81, -39, -78, -121, -79, 2, 108, 22, -91, -91, -18, 14, -66, 45, 2, -64, -127, -39, 28, -39, -5, -2, -81, 18, 112, 110, 85, -28, -94, 106, 56, -104, 43, 32, 12, -117, -57, 50, 34, -81};
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
    msg.setTimeStamp(0.9919699117383999);
    msg.setSource(4068U);
    msg.setSourceEntity(131U);
    msg.setDestination(17835U);
    msg.setDestinationEntity(175U);
    msg.content_type.assign("UVNREZDHOPYDQCCAEVCWWVUJHXYLKNKXTBTDBZIYBUPWDDYNAESZOTODGZHTPYEGBWJZQXTLXCWKILBBKCBBXNSKMUAQSSIOQWRNLRDRVYRQURRKZQKFJGJJUFPCFFVVOAYIOMWLIMQRXLJPSAVMVSNAPJTISCUCGVTGRWGEIUGUGMBTIQHDWBYFMNYDZEFZEFNPMJSEOHQCCAFNKJSEHTPFRLIEAMKMOIT");
    const char tmp_msg_0[] = {-61, -80, 1, 84, -2, -72, 114, -79, 115, -97, 35, 9, -60, 31, -73, -25, -50, 41, 90, -3, -28, 92, -15, -86, -53, -109, 126, -20, -2, 62, 46, -127, 14, 16, -84, -90, -15, -117, 40, 41, -118, -110, -118, 121, 108, -53, 1, 125, -40, -99, -32, -18, -123, -21, -17, -38, -53, -46, -16, 4, -12, -85, -105, -72, -44, -18, -98, -115, 31, -59, -22, -18, 124, 52, 13, 14, 43, -53, -100, 39, 8, -123, -118, -4, 108, 97, -34, 99, 72, 114, 53, -92, -66, -73, -103, -30, -25, -83, 65, -75, 107, -125, 52, 126, 101, 38, 58, 28, 111, -71, -18, 28, 38, 18, 54, 67, 106, 79, -71, -26, -67, -67, -127, 62, -24, 11, -29, -106, -104, -104, 91, -42, 122, -127, -127, 124, -122, -60, -119, -98, -76, -32, -65, 95, -121, -88, 23, 44, -60, -24, 54, -3, -127, 118, 8, 23, -28, 88, 106, -8, -56, -41};
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
    msg.setTimeStamp(0.7834427536380141);
    msg.setSource(43604U);
    msg.setSourceEntity(54U);
    msg.setDestination(14422U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.5385463710503134);
    msg.setSource(38048U);
    msg.setSourceEntity(176U);
    msg.setDestination(26001U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.014915470468416903);
    msg.setSource(47098U);
    msg.setSourceEntity(137U);
    msg.setDestination(60409U);
    msg.setDestinationEntity(1U);

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
