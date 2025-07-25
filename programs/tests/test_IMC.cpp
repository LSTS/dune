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
// IMC XML MD5: d1be0cfac9c5cd84878f9f1587a1f713                            *
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
    msg.setTimeStamp(0.5811180878283826);
    msg.setSource(58687U);
    msg.setSourceEntity(110U);
    msg.setDestination(18007U);
    msg.setDestinationEntity(62U);
    msg.state = 176U;
    msg.flags = 149U;
    msg.description.assign("NXVNBAMWJRQMKYOMSGBHHIJINCCUOTDOREGPWBZFLRHDGKTVEPKQIZKZWVKXEATVPXDGGYYAVBBUJNJUESNDZBPPDYHMFKKWQJEOXQQLRHSSVGQVHOTWADBTANHLMLKJFAFYHJCMYSXOMVXPWUGVCRQHOUSRALIBOAEXQXL");

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
    msg.setTimeStamp(0.8405893293364464);
    msg.setSource(15745U);
    msg.setSourceEntity(58U);
    msg.setDestination(57265U);
    msg.setDestinationEntity(180U);
    msg.state = 40U;
    msg.flags = 119U;
    msg.description.assign("GWKNWAFGHFGEXVHVKXGGLGNUQBTXSEMFTNPIDMQLOCYIJDERFUFKJVJAZSSYUNNQANRWWEYRDVHIZQAVXPXAXAOGQICQSONQBSKUQFBC");

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
    msg.setTimeStamp(0.1678247446221247);
    msg.setSource(51795U);
    msg.setSourceEntity(126U);
    msg.setDestination(59561U);
    msg.setDestinationEntity(47U);
    msg.state = 205U;
    msg.flags = 166U;
    msg.description.assign("URRUOYAPWGOGEKKBNAAIJTCBTMDVHUMTRBJOKAEZEOEZVUFAKWLYJYFSWSAUWOOBXKFAFGXXIBIEXOOTLYRVDPSLJDVGRINWJZLUQFXDIYSJOQGELWIHVBYEBMZSSPYBKPNTSKPGMAMTMTQCAHIJRUWVZHLZXPAHPQNRTZ");

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
    msg.setTimeStamp(0.09111370898702631);
    msg.setSource(57322U);
    msg.setSourceEntity(225U);
    msg.setDestination(54889U);
    msg.setDestinationEntity(36U);

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
    msg.setTimeStamp(0.4546533166747331);
    msg.setSource(60122U);
    msg.setSourceEntity(135U);
    msg.setDestination(27302U);
    msg.setDestinationEntity(169U);

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
    msg.setTimeStamp(0.049982154380991184);
    msg.setSource(48832U);
    msg.setSourceEntity(205U);
    msg.setDestination(61025U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.0935775676888555);
    msg.setSource(60409U);
    msg.setSourceEntity(108U);
    msg.setDestination(31678U);
    msg.setDestinationEntity(41U);
    msg.id = 100U;
    msg.label.assign("IDFCVJXKZREZCGBKFGOPVWEHAMYBILETZSMUQFJOWRWHLKMIKFAIARKOPDFDAEOWICZUHQFWBNZYLRANYPRYNQDSXAGBMTQCUIJDUZBKBCPZTHFNLXSLDZEQNSKMESAJSQDHUGYHVUFZEJAXHQRHMLBEVYHMJXPK");
    msg.component.assign("ODUIOEDNXMWOYCKTGMAKFJQUILTJSYKXVRKGEZTYUEEBGMYHDHGYASTPHRWJYRMIDJVPSDAXOLVGHBDOICRQIWALVBXMPFPLPFGARPSGUQUHKCBZIEMKGDSHAFNQFSBETMBFWWULRQFOULRUJJERZNE");
    msg.act_time = 39706U;
    msg.deact_time = 10892U;

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
    msg.setTimeStamp(0.6339366022293873);
    msg.setSource(27717U);
    msg.setSourceEntity(208U);
    msg.setDestination(5067U);
    msg.setDestinationEntity(26U);
    msg.id = 232U;
    msg.label.assign("DZYVOIPBLDBCAWBQEKVOY");
    msg.component.assign("HROVEIOEJGPDMKRWYOIKFDMCLBMGXMATJPCKFKZLHPFKZUTBCAKNESJFCMFKLHUNQXYJUYFYSZPAHONADIRQYOTJEJUAPF");
    msg.act_time = 27882U;
    msg.deact_time = 60263U;

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
    msg.setTimeStamp(0.9986815666571895);
    msg.setSource(21608U);
    msg.setSourceEntity(127U);
    msg.setDestination(17968U);
    msg.setDestinationEntity(133U);
    msg.id = 9U;
    msg.label.assign("IIHJJCUQUQTGOKGGVEQSRKHQZYJUPOEIIZDHLRNJSNQMOVKAMDHZBHEEMXURVYEAGCSBLNUBLOIZAUFUMDAYWEGJDBBRNULQOCIPSTRTCQHDJPFDREGWYIFFDWJYBYORABOMTQGVYSRWKWIGLSSXVSBNDKKIAPHSFTTVAKQXAJOIPWC");
    msg.component.assign("XYYPUEJQIMWWALHRNLROYRNIIGIZLGYNDYHFIAGEOFCWZNHXGODMCXXDGJKZRIISVYJUBMBTBAUSJXZOEIVVZYXJBKVZQOCODAXZCDQAFFXBTYKKSDVVWHWEQXFAJRULPSUKQGEZCHHVJSGBDPRVCHTQMHDPFPNUFWGBTNBHLTPJGPSTBZGPLTMOFHKSRMFMMKEAVUORALRPD");
    msg.act_time = 10779U;
    msg.deact_time = 1205U;

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
    msg.setTimeStamp(0.6012321513101908);
    msg.setSource(14709U);
    msg.setSourceEntity(94U);
    msg.setDestination(19597U);
    msg.setDestinationEntity(198U);
    msg.id = 215U;

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
    msg.setTimeStamp(0.9216880105060651);
    msg.setSource(65088U);
    msg.setSourceEntity(26U);
    msg.setDestination(16910U);
    msg.setDestinationEntity(60U);
    msg.id = 248U;

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
    msg.setTimeStamp(0.2625861341037812);
    msg.setSource(62071U);
    msg.setSourceEntity(247U);
    msg.setDestination(45223U);
    msg.setDestinationEntity(67U);
    msg.id = 214U;

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
    msg.setTimeStamp(0.38158374457977584);
    msg.setSource(18748U);
    msg.setSourceEntity(205U);
    msg.setDestination(2273U);
    msg.setDestinationEntity(111U);
    msg.op = 1U;
    msg.list.assign("TOAHDXGRPLAKHKKCOYAZFHWNDECHUJHSCBNMFHCAUMTMFIIRQYGLHQPMVCYIXRISZGEKXQXKQRUDPQAHFNNVJCIMNTBERWGGMPLHNRYPGTLPVNM");

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
    msg.setTimeStamp(0.023296668438798185);
    msg.setSource(12709U);
    msg.setSourceEntity(46U);
    msg.setDestination(29077U);
    msg.setDestinationEntity(113U);
    msg.op = 151U;
    msg.list.assign("VGJSGOXSXPHCZTHZAMXBJSMMICGJQFQXMEXTHNEZUQZWNQBWBMDJJTCBVKPGOXHPVEFMEUAIQDXLQOZLYTSVHRTGCAYSOQMIDZMTWURNETBKNRPJRTQDFFAFERWKVATOXMBWOUYPFIRILBGAELNETEFCAAYKYLOVUSSKKPOUQSQFUZLAH");

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
    msg.setTimeStamp(0.7791060182124085);
    msg.setSource(17628U);
    msg.setSourceEntity(37U);
    msg.setDestination(41106U);
    msg.setDestinationEntity(236U);
    msg.op = 86U;
    msg.list.assign("QXXWOKETCATGFLONMGFSWSMSDZAYDQUTKHLMPBUIJZPNXRNIJLNYVNQOQDJEXCYVCSDAJKMGEYIQULATHRRPKBCVUWKGOD");

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
    msg.setTimeStamp(0.024663085074832947);
    msg.setSource(30435U);
    msg.setSourceEntity(197U);
    msg.setDestination(65044U);
    msg.setDestinationEntity(36U);
    msg.value = 24U;

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
    msg.setTimeStamp(0.9200132554853238);
    msg.setSource(16270U);
    msg.setSourceEntity(42U);
    msg.setDestination(24655U);
    msg.setDestinationEntity(158U);
    msg.value = 118U;

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
    msg.setTimeStamp(0.469013168221571);
    msg.setSource(26920U);
    msg.setSourceEntity(80U);
    msg.setDestination(3466U);
    msg.setDestinationEntity(237U);
    msg.value = 25U;

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
    msg.setTimeStamp(0.44752996244933274);
    msg.setSource(63067U);
    msg.setSourceEntity(92U);
    msg.setDestination(22253U);
    msg.setDestinationEntity(99U);
    msg.consumer.assign("JPIXUCOAOPKJCILXTNPWGUZKDXZDITMYJLEDURHKEVVPDJBNDRSMCVTOEACYTEBCFXCHHTVMNZQYGSSSGYNPXEBPVYIGQYRMRPOZFRFVSBWKKKCMTWRHVTWOOAOKVDJINLIAIOUNYRWDQLVHSZYIRBUIAN");
    msg.message_id = 39961U;

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
    msg.setTimeStamp(0.9425788097655566);
    msg.setSource(57900U);
    msg.setSourceEntity(138U);
    msg.setDestination(24684U);
    msg.setDestinationEntity(4U);
    msg.consumer.assign("SFQMJERHUZBGWCOTNNXNBMZZCUYUKXCSMTVHYZQYZTAFQCDHYWTFKEDHNGJLKVHIRXXIBQGQBWWAPDNFUFGKKPUIMANSEBIDQZK");
    msg.message_id = 14777U;

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
    msg.setTimeStamp(0.62648092347074);
    msg.setSource(56617U);
    msg.setSourceEntity(242U);
    msg.setDestination(63646U);
    msg.setDestinationEntity(52U);
    msg.consumer.assign("YVIWZDTXWMRXEHUXDZHSEBXQDLCCQIWCTJTDVKSERJUDKHEKRHKXCDRMZWAOGWORPFVJGFKONRANTASVNGPEUBOANKHBHUPUQBFZCVBSXIUYSLVJYPNQUERLMWXTLIQGFAHJICZLGINOZOIYNZFFV");
    msg.message_id = 39265U;

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
    msg.setTimeStamp(0.0840578546337829);
    msg.setSource(3874U);
    msg.setSourceEntity(234U);
    msg.setDestination(47317U);
    msg.setDestinationEntity(154U);
    msg.type = 176U;

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
    msg.setTimeStamp(0.9336698020086511);
    msg.setSource(47398U);
    msg.setSourceEntity(59U);
    msg.setDestination(30604U);
    msg.setDestinationEntity(183U);
    msg.type = 142U;

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
    msg.setTimeStamp(0.023653595973841313);
    msg.setSource(23U);
    msg.setSourceEntity(192U);
    msg.setDestination(26259U);
    msg.setDestinationEntity(217U);
    msg.type = 72U;

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
    msg.setTimeStamp(0.878248113194149);
    msg.setSource(64346U);
    msg.setSourceEntity(182U);
    msg.setDestination(34441U);
    msg.setDestinationEntity(42U);
    msg.op = 21U;

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
    msg.setTimeStamp(0.4136419887507198);
    msg.setSource(46326U);
    msg.setSourceEntity(125U);
    msg.setDestination(20944U);
    msg.setDestinationEntity(159U);
    msg.op = 58U;

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
    msg.setTimeStamp(0.43899042007219924);
    msg.setSource(44379U);
    msg.setSourceEntity(41U);
    msg.setDestination(54979U);
    msg.setDestinationEntity(31U);
    msg.op = 216U;

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
    msg.setTimeStamp(0.32977800613293273);
    msg.setSource(15985U);
    msg.setSourceEntity(61U);
    msg.setDestination(2386U);
    msg.setDestinationEntity(30U);
    msg.total_steps = 36U;
    msg.step_number = 5U;
    msg.step.assign("JIIKPGHSRFQNDPYNCRUDXOTQ");
    msg.flags = 85U;

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
    msg.setTimeStamp(0.08136558334398547);
    msg.setSource(45010U);
    msg.setSourceEntity(164U);
    msg.setDestination(20371U);
    msg.setDestinationEntity(199U);
    msg.total_steps = 23U;
    msg.step_number = 229U;
    msg.step.assign("ELKJJNHDIPEGETVUILMJK");
    msg.flags = 38U;

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
    msg.setTimeStamp(0.4689645555201689);
    msg.setSource(12282U);
    msg.setSourceEntity(217U);
    msg.setDestination(25058U);
    msg.setDestinationEntity(138U);
    msg.total_steps = 38U;
    msg.step_number = 212U;
    msg.step.assign("VRLOBKGTJWCNOFIYDTSDVUTZNMBNGRFAKZEPQBXTACGRJYQDLEUWGAFUYVQWZYNXRGFUXACOCEHKLUOSHWGUKXPUWPKGFQYDEHVNADSMLFNXJICCLHZQHJIZITMXRBKTFGBEGESMKLCPUILIAEHDZKBFENYBOHOCZSAMPBMTVZYXOPXDWYWRNPIKHWCRRAQV");
    msg.flags = 116U;

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
    msg.setTimeStamp(0.8022146425341802);
    msg.setSource(39453U);
    msg.setSourceEntity(231U);
    msg.setDestination(20784U);
    msg.setDestinationEntity(120U);
    msg.state = 146U;
    msg.error.assign("EBQKRWSQGUPLLQCQYBHUVJUPOAWDOZDTXNFGIKFIHEDIXTMHPUYLTOFMUESHCVFLRMGJMPIRPNLWHKRMJJRWTKXZNBNTRYICZAQZEBLFKBAWONDVGGSPZJVGNTEJDFVUMXXWDDRFUZVNYBVLKTHWBP");

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
    msg.setTimeStamp(0.18947205462033234);
    msg.setSource(65019U);
    msg.setSourceEntity(93U);
    msg.setDestination(36374U);
    msg.setDestinationEntity(17U);
    msg.state = 103U;
    msg.error.assign("VDFEWQSBJCASFVOYGICYUNINTNGPCGHYLUXCAWKLLRTGRMDHUQKELIAJDGNWOWESPXMUNDBTPNLNWUXBHETOZTXERJMBWVVMJRBRHXZKIJDRWYGPOHOOBFYKRBZKSJQQIYIMFEQWSSKRYHWBVSEFGLAZKDLDHAMPZQYWFLUXYMCFGOERJMOEMZSHTYIFNPRQNJUQJJXTFAAOTTCZXALXUXVIQZUDTHPGVP");

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
    msg.setTimeStamp(0.44884214788138743);
    msg.setSource(3171U);
    msg.setSourceEntity(237U);
    msg.setDestination(58821U);
    msg.setDestinationEntity(223U);
    msg.state = 23U;
    msg.error.assign("HXVKNFHMTFPNPGEBAC");

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
    msg.setTimeStamp(0.421439606448171);
    msg.setSource(63749U);
    msg.setSourceEntity(16U);
    msg.setDestination(3079U);
    msg.setDestinationEntity(243U);

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
    msg.setTimeStamp(0.5480045709137963);
    msg.setSource(49504U);
    msg.setSourceEntity(52U);
    msg.setDestination(34850U);
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
    msg.setTimeStamp(0.11415381442586081);
    msg.setSource(58000U);
    msg.setSourceEntity(61U);
    msg.setDestination(6872U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.04117123193610628);
    msg.setSource(27606U);
    msg.setSourceEntity(24U);
    msg.setDestination(38257U);
    msg.setDestinationEntity(42U);
    msg.op = 164U;
    msg.speed_min = 0.15392048014355886;
    msg.speed_max = 0.474371116682179;
    msg.long_accel = 0.11023336739322342;
    msg.alt_max_msl = 0.9397745699026246;
    msg.dive_fraction_max = 0.43531269944053486;
    msg.climb_fraction_max = 0.8523882102339562;
    msg.bank_max = 0.54221085028917;
    msg.p_max = 0.6905182231017696;
    msg.pitch_min = 0.13658096952369048;
    msg.pitch_max = 0.8936037687001398;
    msg.q_max = 0.41030503078358815;
    msg.g_min = 0.8740995602356717;
    msg.g_max = 0.7292077105921736;
    msg.g_lat_max = 0.7732888087152952;
    msg.rpm_min = 0.47578219596396487;
    msg.rpm_max = 0.3370657240670566;
    msg.rpm_rate_max = 0.4929784454390116;

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
    msg.setTimeStamp(0.6586652621091575);
    msg.setSource(49295U);
    msg.setSourceEntity(78U);
    msg.setDestination(38115U);
    msg.setDestinationEntity(132U);
    msg.op = 153U;
    msg.speed_min = 0.2508883590799468;
    msg.speed_max = 0.6325053260970491;
    msg.long_accel = 0.9249357142643975;
    msg.alt_max_msl = 0.4559998918111259;
    msg.dive_fraction_max = 0.8451635977804065;
    msg.climb_fraction_max = 0.6945615367696003;
    msg.bank_max = 0.2560174556194458;
    msg.p_max = 0.5681024249794352;
    msg.pitch_min = 0.19297422271471387;
    msg.pitch_max = 0.6686438954750409;
    msg.q_max = 0.11226887606233882;
    msg.g_min = 0.17548924049161108;
    msg.g_max = 0.6136543929603366;
    msg.g_lat_max = 0.19175856994882423;
    msg.rpm_min = 0.3798802927275817;
    msg.rpm_max = 0.9692501596991158;
    msg.rpm_rate_max = 0.2943964149481454;

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
    msg.setTimeStamp(0.8419648453710407);
    msg.setSource(40841U);
    msg.setSourceEntity(99U);
    msg.setDestination(57580U);
    msg.setDestinationEntity(81U);
    msg.op = 93U;
    msg.speed_min = 0.9102991750913434;
    msg.speed_max = 0.2603412387999581;
    msg.long_accel = 0.36021687399763325;
    msg.alt_max_msl = 0.08576757528675072;
    msg.dive_fraction_max = 0.5682502333075025;
    msg.climb_fraction_max = 0.24072027312147348;
    msg.bank_max = 0.9092033765713412;
    msg.p_max = 0.7066054528113779;
    msg.pitch_min = 0.8772154552124192;
    msg.pitch_max = 0.15459230963052817;
    msg.q_max = 0.7641495316050025;
    msg.g_min = 0.6065603914380242;
    msg.g_max = 0.10330731488756584;
    msg.g_lat_max = 0.8233444779214735;
    msg.rpm_min = 0.5127015947695617;
    msg.rpm_max = 0.27375896141116374;
    msg.rpm_rate_max = 0.40295818909592773;

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
    msg.setTimeStamp(0.05451959974048248);
    msg.setSource(11620U);
    msg.setSourceEntity(36U);
    msg.setDestination(18441U);
    msg.setDestinationEntity(199U);
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CVYKEXVFPDJEVYIABKYDPXTDJXSSTUHVFZUUDQHZZSNBPYIARJBOPAKOFGNXOYKRAJRSXAIEMVTFACHCSQYKGDPJNAQIFULHNLDEOENBDQTD");
    tmp_msg_0.predicate.assign("OIBKPWUQWDCEICPO");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UDBCTDAGHYWPBXRCOTJKLHZQIFXTEALUQYTDKZPNSPMJEKOPSGWRXEVBKINMYJWFIQHWDPEUXYXAVACKJDHLITVCOG");
    tmp_tmp_msg_0_0.attr_type = 208U;
    tmp_tmp_msg_0_0.min.assign("PEKORMCLGZBQVTLVFWLOWWRVAHXFWPDMMPWULAOTMSHZQPK");
    tmp_tmp_msg_0_0.max.assign("GZHKCFVSQCBWCDZZAPVBGPLCNGMCDZXDOAYFKVKAUIIRBACFJSRETSUNUGOEUQUFEMWHPUOEOBKVMFRLNCENRULRQWHZJDWOSHTF");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.5953087475690515);
    msg.setSource(4080U);
    msg.setSourceEntity(235U);
    msg.setDestination(61317U);
    msg.setDestinationEntity(225U);

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
    msg.setTimeStamp(0.41539909879026526);
    msg.setSource(41471U);
    msg.setSourceEntity(199U);
    msg.setDestination(18002U);
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
    IMC::RamUsage msg;
    msg.setTimeStamp(0.7757636144981579);
    msg.setSource(65033U);
    msg.setSourceEntity(217U);
    msg.setDestination(60995U);
    msg.setDestinationEntity(95U);
    msg.value = 0.8687428478576272;

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
    msg.setTimeStamp(0.8301031829877152);
    msg.setSource(29470U);
    msg.setSourceEntity(172U);
    msg.setDestination(27612U);
    msg.setDestinationEntity(227U);
    msg.value = 0.28142045285351924;

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
    msg.setTimeStamp(0.7676312424180528);
    msg.setSource(13702U);
    msg.setSourceEntity(157U);
    msg.setDestination(6819U);
    msg.setDestinationEntity(54U);
    msg.value = 0.37815239060582395;

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
    msg.setTimeStamp(0.9395045964464624);
    msg.setSource(40136U);
    msg.setSourceEntity(142U);
    msg.setDestination(1601U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.16229325315091403;
    msg.lon = 0.31119154360980683;
    msg.height = 0.0669348646643595;
    msg.x = 0.21890586897004427;
    msg.y = 0.49633401160024393;
    msg.z = 0.3949945886456738;
    msg.phi = 0.29930709309752757;
    msg.theta = 0.8001220026840633;
    msg.psi = 0.9074005769179797;
    msg.u = 0.23936029781931467;
    msg.v = 0.15881727304917137;
    msg.w = 0.5155283557213597;
    msg.p = 0.9633039897773787;
    msg.q = 0.15843610143463427;
    msg.r = 0.4828211431359609;
    msg.svx = 0.9601202305845071;
    msg.svy = 0.5551873102714722;
    msg.svz = 0.8976134659017517;

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
    msg.setTimeStamp(0.02043419833622595);
    msg.setSource(5563U);
    msg.setSourceEntity(171U);
    msg.setDestination(37567U);
    msg.setDestinationEntity(88U);
    msg.lat = 0.917052003448573;
    msg.lon = 0.8233528136037346;
    msg.height = 0.010667451422689322;
    msg.x = 0.3946000785975551;
    msg.y = 0.1859069628478881;
    msg.z = 0.15600643604766962;
    msg.phi = 0.5158019869958667;
    msg.theta = 0.35998495485714;
    msg.psi = 0.33624057320093614;
    msg.u = 0.9854829924947924;
    msg.v = 0.029041238280108295;
    msg.w = 0.9454788829805144;
    msg.p = 0.6345502029139851;
    msg.q = 0.46300629119848835;
    msg.r = 0.48676364768130986;
    msg.svx = 0.9954991024845752;
    msg.svy = 0.626250514498273;
    msg.svz = 0.39627991031861354;

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
    msg.setTimeStamp(0.3170416396352823);
    msg.setSource(52988U);
    msg.setSourceEntity(0U);
    msg.setDestination(27339U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.01016927101905074;
    msg.lon = 0.45902394038157024;
    msg.height = 0.5598409826877023;
    msg.x = 0.28070042056399924;
    msg.y = 0.07492256847679168;
    msg.z = 0.6233779251837015;
    msg.phi = 0.5429538011780783;
    msg.theta = 0.4271116942372464;
    msg.psi = 0.7020041285007735;
    msg.u = 0.2736023926237786;
    msg.v = 0.16526463535219182;
    msg.w = 0.25807531155104024;
    msg.p = 0.5890608509073976;
    msg.q = 0.7582513412195379;
    msg.r = 0.966085627151085;
    msg.svx = 0.6365637341027203;
    msg.svy = 0.7862826537652898;
    msg.svz = 0.8966577496653495;

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
    msg.setTimeStamp(0.9707379308115377);
    msg.setSource(33707U);
    msg.setSourceEntity(0U);
    msg.setDestination(2312U);
    msg.setDestinationEntity(95U);
    msg.op = 25U;
    msg.entities.assign("UCIJNWMETHYPFJNIK");

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
    msg.setTimeStamp(0.3576804722752367);
    msg.setSource(16784U);
    msg.setSourceEntity(118U);
    msg.setDestination(1545U);
    msg.setDestinationEntity(100U);
    msg.op = 69U;
    msg.entities.assign("GZCIFEOVWRZVLOGMEPGXXC");

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
    msg.setTimeStamp(0.11706827367245443);
    msg.setSource(1046U);
    msg.setSourceEntity(108U);
    msg.setDestination(22653U);
    msg.setDestinationEntity(9U);
    msg.op = 169U;
    msg.entities.assign("WQAUCRMYDOZSHOJUYGGOTCCZDHQGTKWK");

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
    msg.setTimeStamp(0.47956977676905976);
    msg.setSource(28387U);
    msg.setSourceEntity(181U);
    msg.setDestination(11133U);
    msg.setDestinationEntity(156U);
    msg.type = 36U;
    msg.speed = 21247U;
    const signed char tmp_msg_0[] = {12, -120, -3, 13, 1, -30, -119, -25, -23, 66, 31, -14, -121, -30, -81, -1, -120, 82, 108, -88, -70, 114, 5, 100, 80, -65, -98, 93, 24, 125, -50, 28, 102, -30, 75, 122, -14, 35, 41, -61, -39, -111, 115, -47, 18, -111, -41, 53, -71, 33, -60, -113, 13, 67, 62, 8, -78, -25, 3, -42, -121, -22, -41, 5, -119, 2, 29, 48, -66, -86, -110, 13, 33, 51, -65, -23, 38, 65, -83, 76, -4, 106, -58, 76, 31, -41, 10, -53, -123, -76, -12, 26, -67, 44, 68, 88, 89, 86, -23, 84, -54, -66, 73, -20, -88, 62, -70, 17, -55, -110, -53, -117, -114, -27, 100, -101, 78, 93, -62, 120, -78, -118, -103, 120, -64, 95, -75, -110, 1, -5, 9, -15, 124, 82, -68, 65, -90, 9, 39, 123, -123, 21, 28, -56, -90, 40, 115, 42, 67, -13, -79, -98, -106, -65, 125, 0, 22, 33, 108, 101, -58, 37, -26, -21, 40, 3, -92, -57, -8, -124, -52, 24, -117, -23, 112, -82, -91, -22, -46, -65, 81, 37, 63, 115, -40, 109, -65, -36, -68, -55, 102, -83, -122, 37, -41, -70, -125, -43, 102, -68, 90, 8, 40, 108, -75, 0, 126, -119, 20, -32, -113, 17, 28, 28, 78, 26, -36, -20, 45, -88, 46, 49, -118, -120, -33, 58, -98, -14, 68, -104, 1};
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
    msg.setTimeStamp(0.473490920755697);
    msg.setSource(15981U);
    msg.setSourceEntity(114U);
    msg.setDestination(44714U);
    msg.setDestinationEntity(83U);
    msg.type = 46U;
    msg.speed = 17336U;
    const signed char tmp_msg_0[] = {-125, -45, -71, 32, -62, -35, 32, 115, 126, -99, 55, -71, -15, 110, -35, 52, -4, 73, 60, 44, 108, -20, 32, 11, 95, -125, -53, -28, -119, 37, -118, -88, 11, -99, 12, 22, 108, -44, -32, -66, -124, 118, -71, -22, -88, -69, 109, 79, 74, 41, -84, -107, 86, -23, -121, 83, -108, -18, -45, 67, -47, -128, 66, -97, 86, 93, 43, -106, 72, -69, 107, -78, -79, 10, -126, 100, 80, -1, -22, -3, -38, 42, -27, -13, 12, -98, 73, 8, -119, 98, -84};
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
    msg.setTimeStamp(0.054466860563861186);
    msg.setSource(6706U);
    msg.setSourceEntity(116U);
    msg.setDestination(45802U);
    msg.setDestinationEntity(99U);
    msg.type = 181U;
    msg.speed = 31540U;
    const signed char tmp_msg_0[] = {-22, 61, -48, 5, -14, -6, -85, -19, 120, -51, -94, 65, 21, 40, -95, -79, -69, -19, 82, -79, -31, 10, -42, -55, 120, -53, -102, -112, -55, -6, -81, -86, 74, -80, -70, -100, -29, 84, 51, -26, 8, -82, 7, -106, -44, 55, 79, 0, 111, -71, 21, 45, -117, -80, -26, 38, 19, 16, 66, -95, 32, 10, -50, 121, -44, -42, 10, 81, 55, 68, -97, -84, 90, -71, 18, -23, 69};
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
    msg.setTimeStamp(0.4595568210365367);
    msg.setSource(21347U);
    msg.setSourceEntity(153U);
    msg.setDestination(4396U);
    msg.setDestinationEntity(118U);
    msg.op = 124U;
    msg.tas2acc_pgain = 0.8075864748603283;
    msg.bank2p_pgain = 0.5361080960102731;

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
    msg.setTimeStamp(0.12931565636881193);
    msg.setSource(63956U);
    msg.setSourceEntity(84U);
    msg.setDestination(26338U);
    msg.setDestinationEntity(24U);
    msg.op = 128U;
    msg.tas2acc_pgain = 0.9081434387661318;
    msg.bank2p_pgain = 0.1106785723160878;

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
    msg.setTimeStamp(0.3926359371752517);
    msg.setSource(54543U);
    msg.setSourceEntity(140U);
    msg.setDestination(56556U);
    msg.setDestinationEntity(219U);
    msg.op = 83U;
    msg.tas2acc_pgain = 0.10387697077484215;
    msg.bank2p_pgain = 0.9097590635273572;

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
    msg.setTimeStamp(0.8964638191792131);
    msg.setSource(32998U);
    msg.setSourceEntity(100U);
    msg.setDestination(57774U);
    msg.setDestinationEntity(20U);
    msg.available = 624858920U;
    msg.value = 200U;

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
    msg.setTimeStamp(0.8005509150630652);
    msg.setSource(4187U);
    msg.setSourceEntity(194U);
    msg.setDestination(21381U);
    msg.setDestinationEntity(247U);
    msg.available = 3721917056U;
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
    msg.setTimeStamp(0.24025218330717835);
    msg.setSource(46084U);
    msg.setSourceEntity(144U);
    msg.setDestination(30163U);
    msg.setDestinationEntity(36U);
    msg.available = 1204380190U;
    msg.value = 48U;

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
    msg.setTimeStamp(0.7060458942234193);
    msg.setSource(41072U);
    msg.setSourceEntity(67U);
    msg.setDestination(45354U);
    msg.setDestinationEntity(17U);
    msg.op = 108U;
    msg.snapshot.assign("IXSLULXEBCYUKSJMAVRPNLRHHGZWOTHWJHMCQIPOFQVXOJJUHIXLMWHTBSZHNQWRMNVBRKUJQJBCTGOTDZEASXYWAELKELNDZKPYFQGUETBNTNIVDDUFXGLIAEAQKVZKXDSHECOPBMVFRDITQBZXPPEPUUMZFAGRKRGVFWEQRWOYICJFGPONAW");
    IMC::PlanDBState tmp_msg_0;
    tmp_msg_0.plan_count = 42488U;
    tmp_msg_0.plan_size = 821133189U;
    tmp_msg_0.change_time = 0.3701037218234934;
    tmp_msg_0.change_sid = 44582U;
    tmp_msg_0.change_sname.assign("MOMPNDHSKUCEAQJRTKFXFINCJIZRFCAOJMNVTCNNMTWGCNWRDVEJRWBHSXQWOYTMLDSOEPZARVPICMYJFIBPZHDNKAQRVWXPL");
    const signed char tmp_tmp_msg_0_0[] = {42, -70, -111, -59, 54, -114, -14, 37, -9, -128, 18, -52, 97, -17, -11, 75, -55, -103, -72, -119, 7, 1, 84, -4, 102, -45, 28, -85, -106, -31, 85, -18, 7, 46, -55, -6, -75, -94, -10, 66, -59, 62, -12, -109, 29, 71, -6, 63, 123, 125, 17, 36, -107, -112, 30, 41, -51, -117, -116, -122, 20, 26, 80, 2, -118, -71, 49, -68, -87, 4, -128, -127, -31, -34, -119, -86, 86, -5, -16, -55, 48, -94, 69, 124, -40, -115, 14, 124, 60, 82, 22, -61, -76, 47, 18, -18, -36, -41, -100, -13, -67, -109, 23, -101, 110, 126, 71, -61, 19, 9, 92, -76, -89, 82, -49, 86, -124, 48, 49, 111, 91, -128, -128, -73, 108, 54, -69, 34, -34, -100, -17, -98, -27, -128, -30, -72, 51, -92, -127, -66, 68, -9, 112, 7, -123, 42, 120, 87, -36, 33, 92, -8, -75, -52, -79, 75, 17, -68, 30, -63, -109, 30, 54, 46, 120, -14, -124, 49, -106, 123, -9, 119, 118, -39, -1, -58, 86, -51, -3, -55, -63, 2, 94, 45, -112, 103, -93, 4, -55, -102, 119, -68, 28, 55, 23, 112, 111, 8, -15, 87, -49, -8, -92, -105, 58, -23, -7, -3, -113, -46, 97, -97, 63, 14, 41, 1, 86, -38, 48, 45, -96, -18};
    tmp_msg_0.md5.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.688750950034911);
    msg.setSource(34242U);
    msg.setSourceEntity(181U);
    msg.setDestination(24609U);
    msg.setDestinationEntity(21U);
    msg.op = 220U;
    msg.snapshot.assign("QHLRATHBQOANPNWSVXZDYBOATROEUWUGDXYJLJOU");
    IMC::ApmStatus tmp_msg_0;
    tmp_msg_0.severity = 179U;
    tmp_msg_0.text.assign("VAOWNBRDPFKYXYJQJICSDZEIAQNKYWMUANYMBTUBACFUIWAHCJACXOHLDHDZOLRMLSXWGFDJXLSZTRFLSVPXKVWDDKBSIUNSJCTQWXGNNTHLLLUCPXNGEDAVGYPLYICQUJ");
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
    msg.setTimeStamp(0.8949772595559309);
    msg.setSource(26144U);
    msg.setSourceEntity(84U);
    msg.setDestination(22732U);
    msg.setDestinationEntity(94U);
    msg.op = 165U;
    msg.snapshot.assign("MOFXWSRWEKQRZJRHSJCNKRMAOBWDKPJKUD");
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 7657U;
    tmp_msg_0.lat = 0.8875274095603846;
    tmp_msg_0.lon = 0.882659343864775;
    tmp_msg_0.z = 0.9955627401149586;
    tmp_msg_0.z_units = 192U;
    tmp_msg_0.speed = 0.46648145861170487;
    tmp_msg_0.speed_units = 148U;
    tmp_msg_0.custom.assign("HLUJBYMCZHRPFYBGESROWLNPXILHUNFJOVYANZPQWOZZAHOGCPWEEFMBAZZQAHEAEXTSGIIXTOSXZRBNRCRRCXCHBELFTERHMUIGJMOWNVYFHLSDWKILJPMZDMNMRKPPBJKJJKEAGVMQUBCTLSHSOKTKOUZCYSDWEWSBUYTYYQFFFQPVDIKVAJGDPCDLVDVABYTQVDNIGMXIUDXQBHQAQJLTVCOWQF");
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
    msg.setTimeStamp(0.286728786936006);
    msg.setSource(44011U);
    msg.setSourceEntity(44U);
    msg.setDestination(650U);
    msg.setDestinationEntity(239U);
    msg.op = 148U;
    msg.name.assign("VNQGKLIMWYEUOGRCRJXRFKDAQBYGZCBEBEYNLUBKTPVNYUQOLXGCXORS");

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
    msg.setTimeStamp(0.32164835692083715);
    msg.setSource(59242U);
    msg.setSourceEntity(6U);
    msg.setDestination(49281U);
    msg.setDestinationEntity(149U);
    msg.op = 9U;
    msg.name.assign("FSBDWLWDYBSMKKJFWFEOOLEJEVDPZQRMUD");

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
    msg.setTimeStamp(0.4534287919599489);
    msg.setSource(37213U);
    msg.setSourceEntity(176U);
    msg.setDestination(2275U);
    msg.setDestinationEntity(81U);
    msg.op = 38U;
    msg.name.assign("VUCGXYBMZOXVXIXMLCGQSRRGRJUHGNEHUGPQIYVABAFZABMWMEAYODCREKEQWNASMUPYNCOUOEJPWLT");

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
    msg.setTimeStamp(0.1988264704721847);
    msg.setSource(57606U);
    msg.setSourceEntity(105U);
    msg.setDestination(60634U);
    msg.setDestinationEntity(46U);
    msg.type = 118U;
    msg.htime = 0.1273225472223346;
    msg.context.assign("YYQAQOYTPIUOWMNNZERMLXKKIREYVJVQSMPSLOMZRWDPGOADGXJRYATMNKESXFHLMLIVWKIEPBGIAVCSWUCYDIATMBNEGWVPXJLFGWSHDQTQOWFATGKMBKDZRKYCSQVSUZKNJOERVBUGUXRIATQGGKWBUIVRDS");
    msg.text.assign("UHAXMWFHKUTTLDNBOBCLUGMKSFQDULJSGBOOWHAKYYBEGPTZDLTZBTPMQELDINZCMYGDOZOESKUWJNJZIGILNMWFEDYILSBJCSATCTGJVWREFHIPZYRNUFWGEGPUMXDHXBWAFYLVTPKSPKXSRVXEJNRLNOWCIQHLQJR");

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
    msg.setTimeStamp(0.944631375723779);
    msg.setSource(43029U);
    msg.setSourceEntity(16U);
    msg.setDestination(14656U);
    msg.setDestinationEntity(253U);
    msg.type = 106U;
    msg.htime = 0.5820019927231928;
    msg.context.assign("IJGKXVCTULYAJUNKEQTVKNCTSFHJKMKSDMISWXXDUVOONIF");
    msg.text.assign("NZBXSCICHNDJPCJNEAMUEDOGTJPOWEHWCRIWFHKEHCKTBGVSUQGNGRJROZLLLXYRSWZHSCDKSKRYURENTEBZDVDRAGFVOMTJCYNWKECGKXVMFIWIGFMQLUPFPSXSHAPSZVIBLKJTZ");

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
    msg.setTimeStamp(0.8186011853359448);
    msg.setSource(50932U);
    msg.setSourceEntity(139U);
    msg.setDestination(3341U);
    msg.setDestinationEntity(42U);
    msg.type = 248U;
    msg.htime = 0.9421423092379545;
    msg.context.assign("BLENCNWZGQDZMTDRQOZRRLKCTOOBIMXUHPRXXRJENSIYVICJVKLEPDANXNPLSZSJUXEHPNCUFYPEDVOAXDBRZQDPZJFYIYWTREWNIAQGGQSZIKWPPHLXXMGHHVGKVWMFFGEKYAWCMFHFPZDHJOQQGRGNRSXKETCLXEVGOIROUUMEBYUJOUWSZBLCMJBYFGDTKVLDNHPWCLBMFSQSBZCKOUOVKTYDIKWQSAQVAJTJASU");
    msg.text.assign("HCPIPMSADTJLJVVYTKHXTBOKTQSLRJNHAFOWYZTLWSEUNUCLOYIXYYPWVNDOJXOBAOWEJRBXJQJLQZTESAENQKMG");

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
    msg.setTimeStamp(0.07098013369863088);
    msg.setSource(40337U);
    msg.setSourceEntity(217U);
    msg.setDestination(58137U);
    msg.setDestinationEntity(97U);
    msg.command = 101U;
    msg.htime = 0.5622017795005222;

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
    msg.setTimeStamp(0.08326470630047333);
    msg.setSource(54757U);
    msg.setSourceEntity(230U);
    msg.setDestination(20463U);
    msg.setDestinationEntity(20U);
    msg.command = 91U;
    msg.htime = 0.33059095629199053;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 214U;
    tmp_msg_0.htime = 0.43747762524259104;
    tmp_msg_0.context.assign("UCTCYKUATUNYWJSFRRBKYGQGBZCUPYBHMZQ");
    tmp_msg_0.text.assign("FTACVLWKEPWNKJCEWUDPFCVDBFNLFDBSLVICQCJOANFTNJEXRSDIVFAPJRLYPMQWGCXQWEXPSSZCGOMHLTOQYTZYMOXHKUUGIRZB");
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
    msg.setTimeStamp(0.8458721201521636);
    msg.setSource(21027U);
    msg.setSourceEntity(80U);
    msg.setDestination(54632U);
    msg.setDestinationEntity(188U);
    msg.command = 70U;
    msg.htime = 0.2851275021612061;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 250U;
    tmp_msg_0.htime = 0.6541266637935506;
    tmp_msg_0.context.assign("DWVMCGLYODSOLJVPUERLTET");
    tmp_msg_0.text.assign("BALFCUJVIBCDKQMTJLCRAYQRJIRFYXFTCWWBLPLBQGHYCDMOZREUUDEDDCRMZOMPFNUNYDUNNGJSFAJHZ");
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
    msg.setTimeStamp(0.20326616384587215);
    msg.setSource(38031U);
    msg.setSourceEntity(98U);
    msg.setDestination(39810U);
    msg.setDestinationEntity(155U);
    msg.op = 160U;
    msg.file.assign("ODTDZJRDAYIVVTZCXPODPZNBXIEMHLZKUSSTLWUVGIAMOBQPLUQSBGFPMCKXVPWPZWUYRGIXUCQMOPNCBFNBHYDGMOLNJERAUMKWPURJGRPZCNLNJHCGNATOIZAZHJ");

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
    msg.setTimeStamp(0.06800950056826027);
    msg.setSource(47603U);
    msg.setSourceEntity(222U);
    msg.setDestination(30737U);
    msg.setDestinationEntity(122U);
    msg.op = 205U;
    msg.file.assign("EXUTBWAONPFNYLNZBCRADYHIXCIOSMWLGIUZJWSOLAFZXEJDZPKVF");

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
    msg.setTimeStamp(0.49623668970948787);
    msg.setSource(44938U);
    msg.setSourceEntity(12U);
    msg.setDestination(16708U);
    msg.setDestinationEntity(215U);
    msg.op = 83U;
    msg.file.assign("VMHNQPZWVIGFVQUUJBWLEVJOPRVQADCIOTKBPYISEXRWNFWLMAHKTBDDPUYRUIMXLWQ");

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
    msg.setTimeStamp(0.026428152152135787);
    msg.setSource(10840U);
    msg.setSourceEntity(4U);
    msg.setDestination(46660U);
    msg.setDestinationEntity(83U);
    msg.op = 73U;
    msg.clock = 0.9382413879984082;
    msg.tz = 82;

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
    msg.setTimeStamp(0.06445018347411302);
    msg.setSource(38419U);
    msg.setSourceEntity(118U);
    msg.setDestination(49251U);
    msg.setDestinationEntity(234U);
    msg.op = 146U;
    msg.clock = 0.6140204189205305;
    msg.tz = -70;

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
    msg.setTimeStamp(0.26989641367837347);
    msg.setSource(17464U);
    msg.setSourceEntity(155U);
    msg.setDestination(10150U);
    msg.setDestinationEntity(207U);
    msg.op = 13U;
    msg.clock = 0.3653258695872723;
    msg.tz = -85;

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
    msg.setTimeStamp(0.3808678109630079);
    msg.setSource(61671U);
    msg.setSourceEntity(27U);
    msg.setDestination(43175U);
    msg.setDestinationEntity(51U);
    msg.conductivity = 0.2418805640631444;
    msg.temperature = 0.4353361019304256;
    msg.depth = 0.08838018673013748;

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
    msg.setTimeStamp(0.8926514273170906);
    msg.setSource(20551U);
    msg.setSourceEntity(200U);
    msg.setDestination(55991U);
    msg.setDestinationEntity(13U);
    msg.conductivity = 0.5887584543290237;
    msg.temperature = 0.9245026183117748;
    msg.depth = 0.5543906222964421;

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
    msg.setTimeStamp(0.47463151155519256);
    msg.setSource(42708U);
    msg.setSourceEntity(102U);
    msg.setDestination(28778U);
    msg.setDestinationEntity(252U);
    msg.conductivity = 0.5533021586806962;
    msg.temperature = 0.7694488451738387;
    msg.depth = 0.8156905523905826;

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
    msg.setTimeStamp(0.3014129131598007);
    msg.setSource(40770U);
    msg.setSourceEntity(91U);
    msg.setDestination(61761U);
    msg.setDestinationEntity(125U);
    msg.altitude = 0.7372695437812529;
    msg.roll = 29210U;
    msg.pitch = 46382U;
    msg.yaw = 23933U;
    msg.speed = -1537;

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
    msg.setTimeStamp(0.6821007150729284);
    msg.setSource(9791U);
    msg.setSourceEntity(87U);
    msg.setDestination(52038U);
    msg.setDestinationEntity(140U);
    msg.altitude = 0.3164382378559111;
    msg.roll = 60087U;
    msg.pitch = 16978U;
    msg.yaw = 34134U;
    msg.speed = 11349;

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
    msg.setTimeStamp(0.14595027166909424);
    msg.setSource(61429U);
    msg.setSourceEntity(142U);
    msg.setDestination(26152U);
    msg.setDestinationEntity(113U);
    msg.altitude = 0.49659873572147173;
    msg.roll = 39856U;
    msg.pitch = 22935U;
    msg.yaw = 57549U;
    msg.speed = -12919;

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
    msg.setTimeStamp(0.5011630960047978);
    msg.setSource(8828U);
    msg.setSourceEntity(241U);
    msg.setDestination(38685U);
    msg.setDestinationEntity(161U);
    msg.altitude = 0.7655563149005895;
    msg.width = 0.3920070392137289;
    msg.length = 0.688889726441536;
    msg.bearing = 0.8481496812974292;
    msg.pxl = -7628;
    msg.encoding = 74U;
    const signed char tmp_msg_0[] = {30, 16, -93, 8, 8, 28, 36, 115, -15, -3, -39, -21, 58, -126, -94, -4, 101, -6, -126, -11, -39, 72, -15, 75, 108, -43, 106, -102, 59, 20, 112, 27, 107, -64, -3, -80, -120, -113, -47, -102, -60, 93, -80, -56, 125, -105, 126, -17, -47, 49, 22, -57, -91, 100, -59, -101, 69, -113, 27, 16, 16, -103, -43, 103, -98, -97, -46, -75, -73, -48, -92, -87, -57, -40, 52, -16, -61, 42, -4, 43, 122, 14, -10, -50, 121, -87, 82, 80, 17, 85, 117, -89, 95, 28, -24, 58, -28, -59, 12, -87, 93, 124, -91, -78, 107, 6, -27, -53, 57, 10, 31, 82, -116, -121, 61, -26, 20, 22, -10, -93, 88, -82};
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
    msg.setTimeStamp(0.6750870590908248);
    msg.setSource(52351U);
    msg.setSourceEntity(169U);
    msg.setDestination(3184U);
    msg.setDestinationEntity(250U);
    msg.altitude = 0.620949754729502;
    msg.width = 0.9048484221837142;
    msg.length = 0.8055754270855799;
    msg.bearing = 0.29236178460393414;
    msg.pxl = -13411;
    msg.encoding = 13U;
    const signed char tmp_msg_0[] = {-13, -22, 85, -31, 95, 106, -43, -53, 6, 78, 35, -20, 46, 36, 13, 9, 75, -43, 12, -10, 36, 55, 98, 15, 6, -79, -80, -20, -119, -111, 18, 91, 86, -126, -81, -5, -9, -7, -62, 44, -48, -124, 41, 92, -123, -51, -43, 43, 6, 110, -79, -13, -91, -47, 82, -93, 48, 46, 68, 48, -42, 70, -116, 121, -103, 7, 67, -17, -5, 19, 48, 37, 23, -7, 65, -95, 96, -51, 59, -57, 117, -82, -13, -42, -104, 108, 39, -8, 95, 99, 10, -116, 45, 43, 59, 103, 76, -85, 1, 97, -90, 50, 113, 122, 69, 65, 51, 5, -108, 30, 90, 7, -53, 78, -48, -126, 3, -45, 111, -91, 18, -123, 54, 4, -12, -120, -123, 104, -76, 79, -105, -15, 79, 107, -13};
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
    msg.setTimeStamp(0.05219700389007664);
    msg.setSource(1899U);
    msg.setSourceEntity(207U);
    msg.setDestination(54946U);
    msg.setDestinationEntity(253U);
    msg.altitude = 0.8293437833667794;
    msg.width = 0.8895319597710547;
    msg.length = 0.4376063204775894;
    msg.bearing = 0.0230964608111498;
    msg.pxl = 15623;
    msg.encoding = 230U;
    const signed char tmp_msg_0[] = {-36, -36, 85, 26, -67, -71, 44, 24, 103, 46, 38, 60, -28, 40, -10, 95, 69, 97, -81, -127, -7, 102, -1, 50, 111, -64, -111, -41, 3, 106, 5, 54, -46, -69, -96, 13, 6, 110, -123, -5, -61, 36, -92, 114, -18, 66, -44, -32, -63, -42, -123, -109, -70, -26, 72, -49, 30, 12, 77, 99, 110, -7, 90, -126, 29, 23, 73, 15, 10, 54, 4, 97, -101, -127, -68, -53, -115, -97, 107, -73, -99, 83, -81, -19, 1, 90, 107, -104, -42, 77, -59, 107, 27, 60, -85, -35, 40, -58, 95, -65, -27, 120, -124, -100, -19, -92, 88, -79, -91, -98, -64, 12, 100, 84, 45, -38, -11, -113, 71, 78, 83, 57, -102, 71, 85, -108, -71, -96, 100, 41, -109, -101, -95, -107, -112, 23, -92, 88, -97, -49, 2, -57, -38, -116};
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
    msg.setTimeStamp(0.5549629006958676);
    msg.setSource(57269U);
    msg.setSourceEntity(245U);
    msg.setDestination(7214U);
    msg.setDestinationEntity(193U);
    msg.text.assign("JBLIPWNLQBUPKAXVZDXRFCGGDUGKMYVTMKQNRZBMRSPUXNJYYVBOYHOYCDFAHAWOJGKVYRIAJBEGZEMWTJYZXDFG");
    msg.type = 249U;

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
    msg.setTimeStamp(0.240928231138113);
    msg.setSource(43665U);
    msg.setSourceEntity(88U);
    msg.setDestination(23260U);
    msg.setDestinationEntity(227U);
    msg.text.assign("BDGMUSHKKZUFSANBCOHJJSCJXTKQGNILHCWGMTXUFNWHAAYYMGAYXAIAYGQNAWMGFZEVKDZUVIRAIKDOPZMISXBZDHFLCMWTHTKBXILBMEETQBVKPOXHTAQJUNZDMHPOYITDPQTVURLLSHVGREXSRFVFCLPWGQURBYRYUJZABOOSPVQGJXEJGOCPJDINVWTQCDKJPIRV");
    msg.type = 1U;

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
    msg.setTimeStamp(0.11899584823135234);
    msg.setSource(22457U);
    msg.setSourceEntity(3U);
    msg.setDestination(14564U);
    msg.setDestinationEntity(62U);
    msg.text.assign("TNQKBXAASMHTDPPZYSUOTMCTVEHPHJTYLBBLIYPOEQUANICAKYCZNJMSVQMJGKOCRWRUUWSFEGHHZ");
    msg.type = 112U;

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
    msg.setTimeStamp(0.13836548251823366);
    msg.setSource(44908U);
    msg.setSourceEntity(130U);
    msg.setDestination(49983U);
    msg.setDestinationEntity(164U);
    msg.parameter = 248U;
    msg.numsamples = 78U;
    msg.lat = 0.7844629916222302;
    msg.lon = 0.0968492451732178;

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
    msg.setTimeStamp(0.5029877294765025);
    msg.setSource(35869U);
    msg.setSourceEntity(187U);
    msg.setDestination(8198U);
    msg.setDestinationEntity(59U);
    msg.parameter = 27U;
    msg.numsamples = 9U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 45101U;
    tmp_msg_0.avg = 0.4032136138072213;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.7390276554601098;
    msg.lon = 0.48919624389366456;

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
    msg.setTimeStamp(0.3883079348036781);
    msg.setSource(55303U);
    msg.setSourceEntity(65U);
    msg.setDestination(51836U);
    msg.setDestinationEntity(72U);
    msg.parameter = 56U;
    msg.numsamples = 191U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 8833U;
    tmp_msg_0.avg = 0.5442474587315713;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.7251709507239145;
    msg.lon = 0.7590004208806277;

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
    msg.setTimeStamp(0.7069509738285001);
    msg.setSource(7835U);
    msg.setSourceEntity(246U);
    msg.setDestination(58619U);
    msg.setDestinationEntity(248U);
    msg.depth = 2912U;
    msg.avg = 0.6484322881013539;

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
    msg.setTimeStamp(0.7670308442082254);
    msg.setSource(39925U);
    msg.setSourceEntity(111U);
    msg.setDestination(10716U);
    msg.setDestinationEntity(167U);
    msg.depth = 2723U;
    msg.avg = 0.29459039898775774;

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
    msg.setTimeStamp(0.8053095808562624);
    msg.setSource(777U);
    msg.setSourceEntity(201U);
    msg.setDestination(22084U);
    msg.setDestinationEntity(95U);
    msg.depth = 19206U;
    msg.avg = 0.4187337258745756;

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
    msg.setTimeStamp(0.7790971359198596);
    msg.setSource(6476U);
    msg.setSourceEntity(246U);
    msg.setDestination(36992U);
    msg.setDestinationEntity(202U);

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
    msg.setTimeStamp(0.1284934092093566);
    msg.setSource(62106U);
    msg.setSourceEntity(124U);
    msg.setDestination(47119U);
    msg.setDestinationEntity(195U);

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
    msg.setTimeStamp(0.5260795871372421);
    msg.setSource(24776U);
    msg.setSourceEntity(169U);
    msg.setDestination(59492U);
    msg.setDestinationEntity(110U);

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
    msg.setTimeStamp(0.3241449664217204);
    msg.setSource(7098U);
    msg.setSourceEntity(215U);
    msg.setDestination(41329U);
    msg.setDestinationEntity(18U);
    msg.sys_name.assign("XWZLSYNFBMFVTKBZTEWYDJRBKBVLUBCAWLERVOYNUDSYVBVOWIIKKFHCYJHUOPSQXVATATRTKQZQCXLSYKZYAOFPELHPRLDUNAOOJXMDTCSYAWFPFNMXUDGFQGJZGGCPJJHNJCCQCIAIERVDRXXUMEGIPHSDOIISPES");
    msg.sys_type = 240U;
    msg.owner = 24664U;
    msg.lat = 0.7164914467381306;
    msg.lon = 0.39492351710374507;
    msg.height = 0.33035901319119376;
    msg.services.assign("CIYUXXLETOKTIIAAVIMWQSDTCKMUWJVHHMKREXYUUREYEZWKAZYIREVRWZLNTAZAFAJQGPDDOTMUBBETSPFDCWQVUAOGOJGYMFGBYECZULRTEXJHVQTPQPCDWSAQIPPNNHSHRXKGPYXPCZCMHNNDIILJOALASJOMLLSXZVBXWUKYFBUFEGFVXBFJOJWQSQRJSSNNCLFCNSWPHNTRGZKMROZIHHBYQVWJCONKQGGHPLDZYMB");

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
    msg.setTimeStamp(0.6786578456687125);
    msg.setSource(44631U);
    msg.setSourceEntity(192U);
    msg.setDestination(20358U);
    msg.setDestinationEntity(130U);
    msg.sys_name.assign("XKHLCSBJORVNMQSWIEBTFZYPBQGNPIZOMKRFMMHBXHIBORYCAIGZBTFHNUCQRGEJCAHGDCVTURSLULHNLEUIOWQDFQI");
    msg.sys_type = 21U;
    msg.owner = 30700U;
    msg.lat = 0.16447351927493503;
    msg.lon = 0.5834072844872825;
    msg.height = 0.288103281162138;
    msg.services.assign("NBUIRTUTEJGEWSBJAYQALNUFAYNHAYHUPEYSHXPNGCMDBTLHQNPGXVCZLOZYCNKKHRDQFKIXGWDXLHBGNUBRPGCMWVSHIRTMVLJAEFYFQKZZVDCOIXUKRHJQIDDMYXWUSAYPCZTTSPIMUIFMFOVBITNLWAXGYUFJZLQFCGR");

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
    msg.setTimeStamp(0.3433853479005272);
    msg.setSource(2367U);
    msg.setSourceEntity(14U);
    msg.setDestination(17956U);
    msg.setDestinationEntity(27U);
    msg.sys_name.assign("IJYXUGVQNSPUNGQLXYEASF");
    msg.sys_type = 126U;
    msg.owner = 31590U;
    msg.lat = 0.4756272842822946;
    msg.lon = 0.9462451187908792;
    msg.height = 0.7140782726678058;
    msg.services.assign("KVJHWTGGMIEBSAENQMDCGYNPTPMAKUHTGRSVLNYHEKDOCZRPXSZUMY");

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
    msg.setTimeStamp(0.4032788959910608);
    msg.setSource(56912U);
    msg.setSourceEntity(45U);
    msg.setDestination(17549U);
    msg.setDestinationEntity(246U);
    msg.service.assign("CCGHMXAURUUVESHJBCTIURBIAHQDZYSZJNBRZQELCKLK");
    msg.service_type = 217U;

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
    msg.setTimeStamp(0.5402703376410054);
    msg.setSource(64952U);
    msg.setSourceEntity(236U);
    msg.setDestination(31822U);
    msg.setDestinationEntity(173U);
    msg.service.assign("NYVHCXYGVMYQGTVMPBDZMJQWPWOWGWVSJXCJOBBQNMNIEWOBYZGHYRLUAXDUYMHAZTADXKCZLNCWXOINKXUFZCBUQRUSMDOHPLHKQSXFVRFKPLDGEXSDTGPWBAOPBULMKLYIQFUFLCEMXOTLKAFGIKYWFADRSITYASADFHTTHWNKFIHLE");
    msg.service_type = 200U;

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
    msg.setTimeStamp(0.7789095209915066);
    msg.setSource(58361U);
    msg.setSourceEntity(249U);
    msg.setDestination(3876U);
    msg.setDestinationEntity(99U);
    msg.service.assign("HRJWRKOSUZHTCZIWDNJLBSGDKFSNLVVPQIBAIHKWGLJJTZXEFEXTSXRLLYMOSYVZBUWNREGMRABCNUSEXMRDQVQD");
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
    msg.setTimeStamp(0.5951264069103184);
    msg.setSource(63464U);
    msg.setSourceEntity(204U);
    msg.setDestination(290U);
    msg.setDestinationEntity(224U);
    msg.value = 0.44573454217971786;

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
    msg.setTimeStamp(0.9243492482050669);
    msg.setSource(10816U);
    msg.setSourceEntity(14U);
    msg.setDestination(22836U);
    msg.setDestinationEntity(226U);
    msg.value = 0.8375326280932923;

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
    msg.setTimeStamp(0.647579907505103);
    msg.setSource(11009U);
    msg.setSourceEntity(106U);
    msg.setDestination(13887U);
    msg.setDestinationEntity(106U);
    msg.value = 0.7019798040938643;

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
    msg.setTimeStamp(0.45177727604894447);
    msg.setSource(59335U);
    msg.setSourceEntity(233U);
    msg.setDestination(623U);
    msg.setDestinationEntity(87U);
    msg.value = 0.46457106655073244;

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
    msg.setTimeStamp(0.6229766824670125);
    msg.setSource(40083U);
    msg.setSourceEntity(173U);
    msg.setDestination(17205U);
    msg.setDestinationEntity(165U);
    msg.value = 0.7506543575113769;

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
    msg.setTimeStamp(0.9096647096977419);
    msg.setSource(48916U);
    msg.setSourceEntity(85U);
    msg.setDestination(16094U);
    msg.setDestinationEntity(82U);
    msg.value = 0.6529183215075868;

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
    msg.setTimeStamp(0.6871294481076803);
    msg.setSource(32263U);
    msg.setSourceEntity(171U);
    msg.setDestination(39869U);
    msg.setDestinationEntity(243U);
    msg.value = 0.049152551011644285;

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
    msg.setTimeStamp(0.5090807845332493);
    msg.setSource(61358U);
    msg.setSourceEntity(1U);
    msg.setDestination(43245U);
    msg.setDestinationEntity(182U);
    msg.value = 0.48675525421545374;

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
    msg.setTimeStamp(0.6711350843890584);
    msg.setSource(9030U);
    msg.setSourceEntity(107U);
    msg.setDestination(13825U);
    msg.setDestinationEntity(199U);
    msg.value = 0.12281608475919592;

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
    msg.setTimeStamp(0.1776033542463521);
    msg.setSource(1501U);
    msg.setSourceEntity(217U);
    msg.setDestination(22474U);
    msg.setDestinationEntity(222U);
    msg.number.assign("UWPGZRBQMPLPEYZVKQESHIUNWBJOVFPDCUHLPOZQYLVQJOSVOUYYMEVXKKHYBOLNHUZJMTIIMZLMKFUJZKAVWFKJTCLIQNLXTRCWSOHAWDGNXFLUSBPPHJTWPOIDKSGKFJAASSSIIGAAUNCBHDCOISISDARMCGMQJWCTHVWEXZDYRYEENFITZQHRYVNCEUYNXNOQENATMBBHXBCWVUELVEQRZ");
    msg.timeout = 21537U;
    msg.contents.assign("WSALQTPUVNCMWGK");

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
    msg.setTimeStamp(0.9647705166553675);
    msg.setSource(60754U);
    msg.setSourceEntity(248U);
    msg.setDestination(60175U);
    msg.setDestinationEntity(16U);
    msg.number.assign("XDJXXMYMVPTYXKJRONXIOFZZYXSXEMCWCYCZQIUFYHVRMFCAMOKMCNUBOLMUFJBDSEKJZIWLSUOFF");
    msg.timeout = 14173U;
    msg.contents.assign("INXECZXICXQTJJWHORAVKFRCPRCAYPWDWWHRUMWIZWEWSCFBXNCBVKDLHDYFLKWHYY");

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
    msg.setTimeStamp(0.17385885655746725);
    msg.setSource(60238U);
    msg.setSourceEntity(198U);
    msg.setDestination(34710U);
    msg.setDestinationEntity(160U);
    msg.number.assign("DXTUBUMRLLWHRTHBOSAMZGFZXKCSRFJGBEZYLPFRLOAOVIXOPAEWHDQGFEOJBQCNFZRQTMVARYTQGIYLEPCWQVKDUMQZDOPOAVIXPTEFBZWKOGVHHYBSDZEPFNJDFCCRCNANEPIGXISKMJITGGPITCWKXSLHVTBDYKSXLUQSUQRYUDNWJHUXCPXOAGFYLBV");
    msg.timeout = 14012U;
    msg.contents.assign("KCZLPXLBWYNOILERYYFVOTJBXVBBKLBZIWZXTJVLSMYNSRCGQUFKMOHMXLSJTOEKRQDLFZGMFEUXHTJRBJPCCAPPOYHQMXRGMVSTVLFRGECXINAQHTJSNDAIDKFZWANWLOUSCEIGVMEUCJTGIKHNGQCEAWQ");

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
    msg.setTimeStamp(0.3862741029721435);
    msg.setSource(32318U);
    msg.setSourceEntity(207U);
    msg.setDestination(12197U);
    msg.setDestinationEntity(183U);
    msg.seq = 3851929262U;
    msg.destination.assign("HJFSHHWACPPXIRICDFFCITEOGVQCWVCUUYJPCNBDQXJHZOEGWXBSNRPLSQPWGUSGOVJPCDEXSMBCHBNDKSUIMUIIHWDWHHVAZXVPXFBKFAMQJAYIEUFXBDBNXYIXMFYERUQNRRAYONLZOKQPZDTJMLORWLXANMAGIWUZHMUVUSBYLQDBOTLSITNKRYMJLBTRPQFQHRGYYDMZSZF");
    msg.timeout = 13472U;
    const signed char tmp_msg_0[] = {92, 125, 10, -94, -8, -80, -2, -81, 16, -29, 69, 42, -126, -43, 10, 126, -39, 104, 93, 102, 124, 118, -102, -34, -67, -127, 51, -120, -9, -78, 91, -97, 7, 33, -69};
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
    msg.setTimeStamp(0.7542793267631531);
    msg.setSource(56503U);
    msg.setSourceEntity(150U);
    msg.setDestination(60333U);
    msg.setDestinationEntity(84U);
    msg.seq = 3703969012U;
    msg.destination.assign("NZMZSUHPBNQRAIUWKXCTYUXBOXNIIRMGHMEQTGBUQFDHVUQYIMLGKQAPPHVZZFCZCJBRJRIHVVSHOEEXMIOYDVIRUYFLIATQBXQJADKBSXPXVFTWESSLWOOLFPZ");
    msg.timeout = 29825U;
    const signed char tmp_msg_0[] = {81, -80, 39, 51, 75, -86, 32, 100, 34, -92, 56, -40, 41, -9, 52, 4, -120, 33, 101, -20, -117, 56, 47, 31, -46, -21, -4, 90, 2, 40, 125, 17, -76, 26, -103, 91, 95, 15, -76, 44, -9, 57, -42, -42, 34, 90, -57, -53, -65, -96, -53, -34, 41, 31, 52, -81, -90, 0, 68, -22, -28, 52, 122, -33, 114, 43, -102, -90, -93, -10, -9, 4, 12, 71, 11, -44, -67, 78, -100, -120, 67, -59, -35, 63, 28, -62, -128, 44, 102, 121, -30, 116, -11, 113, -62, 43, -58, 25, 65, -72, 112, -49, 61, -103, -119, -60, -36, 85, -2, -99, 18, -27, -27, -84, 8, -76, -46, -66, -69, 64, -121, 34, 3, 77, -51, -96, 74, 96, -45, 105, -51, 8, -92, 118, -10, 33, -103, 126, -108, 80, 41, 19, 34, 31, -110, -86, -38, -78, 36, 121, 52, 85, -43, -93, -126, 110, 98, -99, 120, 36, 29, -4, -44, 14, 61, -81, 86, -88, 72, -45, 10, -108, -90, 102, -84, -101, 37, -62, -107};
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
    msg.setTimeStamp(0.6342557218546405);
    msg.setSource(17570U);
    msg.setSourceEntity(189U);
    msg.setDestination(18231U);
    msg.setDestinationEntity(53U);
    msg.seq = 3553920430U;
    msg.destination.assign("QCWBWTLNGYSNLCPQTWDJWUOYULLGDBZKABGVVGJENBRURPVXZFXGMINZCDYIQIXBWRNUVFJZECGQELFANPEGOKPFTLKEPZYYERKMVOAJMIXBVIIWOKOJLGJFRULUVPSMKXNBYFFSYVWAYTFXIZHNHQOQKEZWASIUTJSMDRSEZOXLXBXJKKPQDTUWDSSOJDDUHHOCTVNTGPCIDHAAZTNBHACHHKJPHWRFCTXYIMCYMEABPFMZQSRESRMRLQOMAD");
    msg.timeout = 31771U;
    const signed char tmp_msg_0[] = {11, -20, -96, -111, -123, 1, -115, 114, -5, 66, -35, 87, -58, -14, 121};
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
    msg.setTimeStamp(0.6817658328796384);
    msg.setSource(22619U);
    msg.setSourceEntity(55U);
    msg.setDestination(48337U);
    msg.setDestinationEntity(118U);
    msg.source.assign("KTHNIDOZFDAHXDDXIMGGEIYNCYAWIUSVUHSADPMXVFTROOIHKHTJMCJHILUDFFNJKKPKUWYBQLWLRXRKPAKQVVUUEG");
    const signed char tmp_msg_0[] = {49, 68, -120, -94, 63, -20, 66, -100, 78, 106, 18, 43, 73, 9, -112, -78, -83, 63, -108, 52, -89, 68, 37, -54, -38, -92, -62, 106, 116, -15, -68, 60, 113, -84, 25, 18, 75, -90, -65, -33, -121, -19, 23, -37, 67, -8, -8, 107, -86, -24, 37, 124, -76, -22, -70, -119, -69, -26, 117, -116, 69, -125, -23, -116, -29, -10, 31, -102, 87, -21, 20, -81, 40, 20, 107, 113, 105, -59, -57, 33, 7, 50, 114, -14, 93, 38, -54, -48, 72, -64, 68, -7, 6, -20, 53, 10, 15, 98, 97, 12, -120, 0, 4, -52, 53, -115, -97, -60, -99, -27, 92, -30, 74, -60, 43, -28, -88, 122, -86, -61, -125, -1, -24, -29, 122, 62};
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
    msg.setTimeStamp(0.10985225307475077);
    msg.setSource(58328U);
    msg.setSourceEntity(26U);
    msg.setDestination(48395U);
    msg.setDestinationEntity(142U);
    msg.source.assign("FXCABYZPBYTMWFOGZRKDTAHLCMYLAJAXFPGQQOXEACIGXFKBOWIBHINJJTVLONAXHHUKRYLXUFXMFTDQSKWVMECOEZASFRZKROOJVUIHYGIVYIBO");
    const signed char tmp_msg_0[] = {71, 21, 80, -123, -74, 16, 72, -84, 67, -121, -43, -88, -116, 108, -64, 12, 91, 43, -82, 70, -19, -18, -84, 71, 117, 90, -10, 74, -118, -88, -66, 62, -79, 13, 100, -81, -58, -17, 72, 55, -125, 41, -22, -108, 56, 61, -108, -29, 115, 20, -57, 126, -96, 48, -87, 4, -20, -85, -110, -60, -58, -49, -70, 35, -94, 60, -122, -52, 9, -88, -127, 26, 119, -126, -88, 33, 110, -6, 34, -18, -110, 110, -17, 111, -6, 5, 1, 30, -26, 122, 0, -66, 55, -88, 86, -30, 91, 65, 4, 49, -97, -14, -120, -56, -21, -118, -52, -22, -29, -128, -25, 58, 61, -86, -1, 113, 77, 24, 0, -27, -59, -98, 37, 73};
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
    msg.setTimeStamp(0.7438756388374999);
    msg.setSource(2679U);
    msg.setSourceEntity(158U);
    msg.setDestination(60151U);
    msg.setDestinationEntity(37U);
    msg.source.assign("LEIZNUAJIPBHALUHRMWQPGWEQQWZHOBDJGXCCMABRMANVBBKHEQVFYG");
    const signed char tmp_msg_0[] = {-17, -120, 106, 27, 1, -118, -27, -9, 37, -10, -72, 16, 21, -54, -88, 79, -34, -86, 17, 119, 114, 105, 11, -91, 32, 61, 22, -20, 24, -118, -65, -97, 67, 8, 110, -11, 5, -66, 97, -35, 17, 92, -3, -21, -124, -55, 46, 115, 35, -119, -119, 102, -74, 102, 57, 17, -22, -7, 63, 125, 56, -43, 10, 121, -121, -121, -64, 104, 64, -62, -119, 119, 75, -7, -69, 9, 80, 36, 93, 7, 83, 65, 121, 62, 123, 104, -119, -125, 71, -82, 19, -1, 76, -80, -31, -62, 92, -121, 57, 47, 20, 93, 75, -19, -30, 45, -110, -5, 120, 6, 99, -101, 126, 70, -79, 122, 39, 11, -18, 73, 40, -52, 122, -22, 96, 114, -30, -96, -23, 38, 47, 103, -116, -97, -21, 22, 55, -35, 107, 40, -32, 60, -98, -20, -68, -122, -88, 31, -112, 22, -5, -5, 29, 5, 26, 103, 15, 50, -56, 93, 54, -62, -77, -48, -14, -27, -67, -62, -17, -50, 106, 38, 111, -102, -107, 28, 113, 62, 84, -74, -87, -65, 116, -104, -101, 71, 124, -12, -69, 28, 74, 21, -128, -97, -44};
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
    msg.setTimeStamp(0.8587195083628066);
    msg.setSource(28728U);
    msg.setSourceEntity(7U);
    msg.setDestination(61112U);
    msg.setDestinationEntity(33U);
    msg.seq = 457838805U;
    msg.state = 176U;
    msg.error.assign("LCLLBSQEXNKUSHCYYQKQBMAALAPJDXJQWCCGWUFXPFENQDOKVPAWULMKXWMTNRXINTUGZOKFLTRYVDJEATUKJWSPJORLSZNGCPOSIDPXNTWIJKEXPAFJSVIOQVTCHERRZFGTIONRFROZUKZWBLZJCVEJJHHIDHPAMPKVTTIRLFNZYVBWCDSWHZEMOXHBCEUBYMYILIVISFQMYARADBDTQPSOBOHQCGMDMQZGFHYNKGNBWFH");

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
    msg.setTimeStamp(0.1586523767349487);
    msg.setSource(40332U);
    msg.setSourceEntity(88U);
    msg.setDestination(8904U);
    msg.setDestinationEntity(134U);
    msg.seq = 3469977563U;
    msg.state = 25U;
    msg.error.assign("WZSXAXPDEXNEIQVJDMPEZGPQEMJFKLQYMDHZ");

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
    msg.setTimeStamp(0.6904114123058668);
    msg.setSource(9594U);
    msg.setSourceEntity(98U);
    msg.setDestination(64475U);
    msg.setDestinationEntity(170U);
    msg.seq = 3135637592U;
    msg.state = 39U;
    msg.error.assign("LFDYFBOCMLFNQQZNILTYJNXTUWQAIAHOKTERJNHVNANCEXIEWVAWZTZAVBZDBXBPWWHJURAKOZAOLIVPGQWDMJCVMFUTKGDYLGULLASMFJVUQ");

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
    msg.setTimeStamp(0.774616742509899);
    msg.setSource(13796U);
    msg.setSourceEntity(88U);
    msg.setDestination(38730U);
    msg.setDestinationEntity(129U);
    msg.origin.assign("HQLYVXZLCTPFWQCZSUREGLELAJMTGFQAUXPDVRWKAHCA");
    msg.text.assign("OLUWDTKTWRBGEIWJOEAYTTJKQDGZLGEAWYONAUFOFRLUPOKHCJNSASIAIKPXAVIQNHJHIPJMBLWIEMPSGOMRTNSRVSSODCIYRFIKHCDMHYGULQDKZDDLNSNNPJPYDAVGPGDCLYFXTUZKTQYRSNNWBWOYMXUKMVRFQFBWXSXTLNGZBEVQXVXJZVCCJPZKBEZLROPU");

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
    msg.setTimeStamp(0.4790908205473575);
    msg.setSource(26702U);
    msg.setSourceEntity(18U);
    msg.setDestination(3765U);
    msg.setDestinationEntity(197U);
    msg.origin.assign("AALBGXGDLPGVPRLQIQOITUNMPQKHLBDDRQRWCBIYBCJSTOLDSEZPJOFABMERTTWETYVUOWFARFORZAOZCTYXKXZGSIJUJFAFLIZMNCPMXJFSVUMJFJVUYSLSRCLBUQQZBHEFWGZNIRUTAPKHGKEHCSXHJIOPMVNSYSXWAWKFNDVHUVAENKSZXYGTXQNRWMWOLKYWNGBNEXEJYZWPVMDTPIKCLERDUDJGACKMCQOMTFCBVP");
    msg.text.assign("CJOIQFAJCGCCIYBBFUXKGBKOLPRJVGQTBQEUFAGXFLHYTOWXYFSDTRFTNQAWDZBVAHWKPMAMRWMRGLRIHKYKXDPFVUVVNRZNGOFLSNCEZSZONLNGVCGXEPKOQSUUPEQTIKOZOBSSZXLLHMAJDYNCIEHMXSJTPUVIZUUQYBWYTQOQNQCOHERLPJKFAHBSXGMZDKUVXMSFZDEWZTDBDIKGTJR");

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
    msg.setTimeStamp(0.20877575743524368);
    msg.setSource(38438U);
    msg.setSourceEntity(112U);
    msg.setDestination(14598U);
    msg.setDestinationEntity(175U);
    msg.origin.assign("FAOUZUHXBJRSYKMZHHUAHQRYELXTYSOSCKZTTUZGUWMNVNVGFMDHZXNNDOSTANLYGDPWBHIBSFECRKHPVFG");
    msg.text.assign("HJVLIBAFUEKBMVPGWAKWACGJPWKSYOCY");

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
    msg.setTimeStamp(0.03273518874867176);
    msg.setSource(12127U);
    msg.setSourceEntity(167U);
    msg.setDestination(2798U);
    msg.setDestinationEntity(110U);
    msg.origin.assign("JXZBXNAEIDRYLAKJASZDXFJQYAFAPJRNFBMTJQYJNBTASYDNVAIBXERDILUYPGBCAKCXXKECUOGOTVHDCZESGHFLMUQRYWVHGIMLVFHBGWGXAQRUREMKRMQ");
    msg.htime = 0.1167083683076644;
    msg.lat = 0.5449213518082459;
    msg.lon = 0.3957852715870219;
    const signed char tmp_msg_0[] = {-26, -28, 27, -82, -64, -44, -91, 0, 99, 10, 74, 85, -30, -99, 100, 5, -82, -87, 17, 96, 50, 52, -125, 124, 7, -30, 121, -35, -44, -81, -101, 126, 26, -21, -6, -72, 91, -80, 72, -93, 40, 0, -23, -63, -8, 41, -120, 16, -44, -65, 54, 8, -47, 115, -24, 53, -87, 103, 113, 88, -80, -111, -119, -37, 13, 126, -96, -16, -4, -10, 124, -36, -48, 45, 100, -33, 85, 125, -6, -92, 19, 12, 114, 20, -18, 33, 36, -125, 47, -32, -69, 112, 61, -86, -111, 18, -78, 8, 10, -65, -71, -31, 78, 79, -113, -88, -30, 31, 14, -18, -88, 62, -42, -90, 21, 6, 50, 118, -50, -123, -101, 7, 80, -118, -51, -119, -3, 11, -112, 105, -77, -116, 8, 78, 112, 13, 14, -101, -110, 119, -122, -123, 73, 67, -123, -32, 111, 14, 22, 56, 81, 126, -31, -97, -20, -13, 121, 94, -31, 31, 6, 119, 73, 98, 58, 20};
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
    msg.setTimeStamp(0.43896116492433435);
    msg.setSource(47444U);
    msg.setSourceEntity(123U);
    msg.setDestination(52195U);
    msg.setDestinationEntity(95U);
    msg.origin.assign("FDCCUXOUXXEZJZSZAIYOGNWGSJEHZAAFUDEDMZHKVGWKMBGPVNCVRGCNGINIXSPJLBDUSOKVVQYIOHOBECITOJYANAUFMRSRQSCXXKTBZRQLHLMMUWQZKHILTFDJDCPYFEWEWNYJKZQNRJZCWEONHBEDLWIFPUUNLFIXTVXOWWOQTJAYPMDGMXJMGABOBQKUTQLRYLBGQTRAQRDFKSYMSJVCPTHUGHLKRAYPHIMPALB");
    msg.htime = 0.35485853687407454;
    msg.lat = 0.778227000545702;
    msg.lon = 0.9909047147141857;
    const signed char tmp_msg_0[] = {96, 124, -102, 85, 45, -65, -19, -121, -53, 45, -47, -108, -96, -128, 15, 25, -12, 75};
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
    msg.setTimeStamp(0.5157701087170097);
    msg.setSource(52322U);
    msg.setSourceEntity(84U);
    msg.setDestination(22923U);
    msg.setDestinationEntity(132U);
    msg.origin.assign("GRKWGJEIQLALPDVWZNXOTKCD");
    msg.htime = 0.854808208554029;
    msg.lat = 0.7562117224187849;
    msg.lon = 0.3918278327173035;
    const signed char tmp_msg_0[] = {-85, -55, -118, -60, 90, -21, -107, 119, 40, 89, -62, 75, -121, -100, 68, -91, 36, -75, 67, 27, -49, 96, 45, 72, -67, -1, 114, 4, -103, 38, -16, -5, -56, 28, -69, -5, 118, 98, 67, 10, -85, -49, 36, -74, -74, -45, -120, -65, -45, -12, -31, -88, 88, 2, 57, 123, -95, 103, -103, -40, 16, -38, 104, -29, -51, 5, 117, -128, -17, 28, 30, 37, 82, 53, -78, 83, 122, -59, -108, 47, -26, -44, 41, 93, 121, -121, 29, 96, -70, -90, 8, 8, 107, -78, -66, 95, -55, 65, 93, -119, 123, 104, 73, -60, 122, -68, 54, 37, 14, -15, -35, 110, -114, -25, 75, 45, -17, -102};
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
    msg.setTimeStamp(0.02229809566507246);
    msg.setSource(29637U);
    msg.setSourceEntity(56U);
    msg.setDestination(11513U);
    msg.setDestinationEntity(147U);
    msg.req_id = 57667U;
    msg.ttl = 29196U;
    msg.destination.assign("QOKGDZKPNUNOOWWMSLUEJHDTSPIPKYHUFMXMNEOLZBMVUDAVTPCYZRIUQZFVSBCVLLUZATKYBGYDHTBABJRJQLGAGTNWGYJSMRCOY");
    const signed char tmp_msg_0[] = {72, -4, -4, 51, 60, -88, 74, -68, 59, 43, -42, -3, -80, -90, -59, -28, 38, 0, 12, 42, 122, 97, -56, -24, 10, 94, -30, -47, -12, -7, -92, -98, -76, -88, -46, -9, 114, 108, -106, -103, -16, 89, 0, -22, 97, 75, 113, -2, 90, 64, -109, -32, 51, -39, 81, 114, -7, -87, -108, -114, 33, -51, 58, -117, -33, -93, -43, -82, -114, -110, -92, 68, -77, 106, -121, -77, -94, -26, 117, -14, -99, -119, 82, -26, -28, 113, -21, -123, 124, -18, -106, -84, 61, -24, -103, 82, 46, -1, -95, 65, -5, -59, 103, 73, -5, 108, 94, 4, -55, 3, 21, 69, 107, 53, -36, 28, 15, -6, -14, 123, -76, 1, 43, -18, 75, 109, 28, 52, 92, 125, 98, 19, -3, 4, 8, -7, -63, -122, -20, 54, 38, 103, 30, -43, -108, 62, 28, -108, -39, -31, -21, -79, -105, 88, 92, 14, 120, -73, 68, 108, 45, -20, -40, -52, 62, -30, -99, 29, 42, 52, 104, 12, -43, 52, -88, 9, -100, -78, 84, 19, -14, 90, -93, -35, 27, -121, -110, 67, 109, -66, 92, -24, -101};
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
    msg.setTimeStamp(0.9600319067727398);
    msg.setSource(14493U);
    msg.setSourceEntity(170U);
    msg.setDestination(61642U);
    msg.setDestinationEntity(153U);
    msg.req_id = 42299U;
    msg.ttl = 52428U;
    msg.destination.assign("ARSPPHOWNECUWVAWSQQJSNTEKXIXHPDCIPDKDSCAMZOZQYMEYXWGGXIHHWOQQB");
    const signed char tmp_msg_0[] = {-108, -95, 55, 75, -49, 54, 14, 48, 77, 20, 68, -3, 106, 84, -7, -19, -71, 11, 60, -39, 120, -99, 109, -52, -26, 61, -75, -111, 15, 13, 51, 71, -108, 90, -113, -82, -83, 84, 57, 90, -76, 51, -89, 102, 123, -92, -106, -30, 50, -14, 37, -37, -33, 53, -21, 49, -11, 81, -127, 117, 88, 100, -33, 56, 10, -94, -97, -75, 105, -32, 98, -30, 66, 18, 121, 65, -60, -106, 107, -33, -85, -63, 29, -59, 20, -45, -19, -63, 84, 52, -93, -39, -42, 61, -1, 101, -74, -5, 78, -28, 15, 9, 49, 51, 21, -6, 123, 75, -14, 79, 5, -106, -103, -25, 60, 21, -15, -44, -121, 48, 7, -58, -127, 36, -110, 55, 38, -80, 79, -80, -112, 102, -50, 41, 113, -84, 104, 32, 65, 103, -71, -86, -79, 109};
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
    msg.setTimeStamp(0.26463247975718474);
    msg.setSource(54087U);
    msg.setSourceEntity(163U);
    msg.setDestination(22617U);
    msg.setDestinationEntity(242U);
    msg.req_id = 35288U;
    msg.ttl = 1947U;
    msg.destination.assign("HYDIEHKRPWWSRAEDFYNOFCJEDATMTPJBXLJUQVGLHZCQRCBZSUFQNIUVHRRXXTWIIAMXTSYFBVKSIZNMGQQPWVKOVKFKXSPGMQDELNSGCTQUEWWULBRWVNERWUMFZJFALADYADHKTZJAMBEONZBUJEBGHGLFHTHWXMYLOKRTXMMPPAILBFUIWIGCNQJKMYNHOD");
    const signed char tmp_msg_0[] = {-73, -80, 78, 1, -119, -80, -31, -6, 6, 57, -33, 8, -118, 75, -73, 1, -12, 68, 26, -67, -89, 120, -101, -30, -20, 17, -94, -70, -72, 44, 20, 98, -101, 0, 98, 90, -42, 124, -32, -60, 99, -54, 46, -106, -94, -70, 39, -14, -46, -3, -52, 78, 18, -37, 109, -54, 46, -97, -127, 10, -44, -31, 106, 13, -113, 98, 73};
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
    msg.setTimeStamp(0.9524385554649802);
    msg.setSource(15833U);
    msg.setSourceEntity(105U);
    msg.setDestination(30965U);
    msg.setDestinationEntity(193U);
    msg.req_id = 24807U;
    msg.status = 34U;
    msg.text.assign("ZZWGVLNVYHQHYXMIEBXFCKODUIMIUTUOLBTFREDCVJKUVQZNULIPAHTLCXTRBWASLYMVRXQWJDHKNUBVKSEFXCSKCOOVRDMXHDOZEYPI");

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
    msg.setTimeStamp(0.8552523420417191);
    msg.setSource(55578U);
    msg.setSourceEntity(43U);
    msg.setDestination(62278U);
    msg.setDestinationEntity(198U);
    msg.req_id = 10937U;
    msg.status = 101U;
    msg.text.assign("ZUIDSVNFGTTTTSOPUVVMLYQVHKBCVEPDKQBTICKBDNYLCQISLFQDIXJFOZOMCQRYHATHKSBCSZPNSMCXYHQLEXZEDTSMQUNAWGVZAUMEJACNPARYANEXLPORMWLFFPGIHPTOEWNWWPDSPWDOXSXFRVBZHEGYRVJXHHRRXEJKQZMAOUXHOOHCEFBIJQVLZWXZJRGBUKGCLR");

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
    msg.setTimeStamp(0.9390555859958544);
    msg.setSource(64509U);
    msg.setSourceEntity(149U);
    msg.setDestination(14051U);
    msg.setDestinationEntity(32U);
    msg.req_id = 26525U;
    msg.status = 196U;
    msg.text.assign("YWTOOZODGXTALBSIQUPHHVHQFWAEDECZKCRENMQFRVSPRCF");

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
    msg.setTimeStamp(0.27905415697530156);
    msg.setSource(27928U);
    msg.setSourceEntity(74U);
    msg.setDestination(27343U);
    msg.setDestinationEntity(59U);
    msg.group_name.assign("GGGMZOTIEWEMFLFFLZKYRPBVLMHWGUBJGSUXWYVALGNHECJGXEQZNPKQUORMZLEIQICUSLSUOAFIAYXESIUC");
    msg.links = 1075300925U;

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
    msg.setTimeStamp(0.8608953116832178);
    msg.setSource(18506U);
    msg.setSourceEntity(31U);
    msg.setDestination(56369U);
    msg.setDestinationEntity(34U);
    msg.group_name.assign("WNTSEIMSBOFARHCBIDCVDJPPRL");
    msg.links = 2514355574U;

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
    msg.setTimeStamp(0.2325115175048822);
    msg.setSource(32581U);
    msg.setSourceEntity(81U);
    msg.setDestination(32484U);
    msg.setDestinationEntity(145U);
    msg.group_name.assign("EIPNPGVMDTMQXFLLQJZNKPZSZUTRWHDXMKMDCOBIMMCEZTLTEXOIAXKANVTWTCFRQWEZMGWPHJFSOYYNIKEBYLJSIPVTDORDNBEPSUGUOMOHWBYZLUVWZMCYSCUJDXXUTHXCUYORBFDKSCNIXFVODNKNJYALCVLUGITYAUFXHVRBEKHSAQPIQXAVFJACJWB");
    msg.links = 2423179089U;

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
    msg.setTimeStamp(0.19522039270259717);
    msg.setSource(36770U);
    msg.setSourceEntity(201U);
    msg.setDestination(25622U);
    msg.setDestinationEntity(226U);
    msg.groupname.assign("HNXZASGLIEHCAWUVELWBVAQKWJYAMNAPNCHUTJODEVWMHCRDCTMGCZOHLZXQVBWNIPARQFQDAFYTNIFQDXTBHUESXLLRIKUGVBEUEOULARRPJKISYJYWFFKGDWKPIQRZBRPPLTTXA");
    msg.action = 101U;
    msg.grouplist.assign("PPCFFZDMTSOIEEAIWCCAIOZZASGIMULFRRMUYBANZFZBWHSYLMJXLRUBAVLNLJYHEBQNVPEJOKRKUPBEXDIYHRHQGBKGGHSOOJIGPXDAHWGNLWQWRFGILCLMNSXEKTDJQTPDAIJMKWYSEOPKTFDSOBQUTJBAZBENVYENZGCFCCOWIWMUFZZXFAVTXUIDRJKHDNFLTUAHKKYHOVGSRXTWTNVXMHBNQXZSDCEUUQQGLPDWQCMK");

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
    msg.setTimeStamp(0.41368610963454366);
    msg.setSource(61987U);
    msg.setSourceEntity(86U);
    msg.setDestination(3263U);
    msg.setDestinationEntity(49U);
    msg.groupname.assign("LIDDVTIAWUJKGRMLGSTVPAFNFMMBWYKYKYFHDCDZPHYRBKEJYJKKSJZARTONRPFMAIEUZOATZMHBQSJNQKTCLBPDATZQGXWYDYEMLELELNFDUOIEROSCGXSKFKVHANQOGSWBBBUJHTVTQBRRHYBCVRVIJWLGENVPBZQPRNTXQOXDMVSQMGRCQUXMYJCGODPQWZCPWUSXYVOJHLGXEEHSIWUZOFINVDFHHTOPLACWWZ");
    msg.action = 207U;
    msg.grouplist.assign("WCLQRPHUNLBKBQZZLQBYXVILDHCFBHCZPKORUHHJLZTXKUCQMDUMFS");

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
    msg.setTimeStamp(0.4034979180305952);
    msg.setSource(49711U);
    msg.setSourceEntity(123U);
    msg.setDestination(24577U);
    msg.setDestinationEntity(1U);
    msg.groupname.assign("RZKQBJIRJZHSWHBDAPDMAFERXIGOLDKOYEZNPQS");
    msg.action = 247U;
    msg.grouplist.assign("DQNFRVTXZWJNZDFBEKUMEWXSVJSMYKHDIMHHHMOXAFCWQSOVGEPACBUISLJRUPAHAEPENGEZJEKAPLVGUCJFMKCWYKNBIYBJBVMZQDBKGSLDAZCJZ");

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
    msg.setTimeStamp(0.1056101669519327);
    msg.setSource(26679U);
    msg.setSourceEntity(178U);
    msg.setDestination(3597U);
    msg.setDestinationEntity(0U);
    msg.value = 0.8032301535836766;
    msg.sys_src = 64332U;

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
    msg.setTimeStamp(0.6821359060172678);
    msg.setSource(27119U);
    msg.setSourceEntity(120U);
    msg.setDestination(53413U);
    msg.setDestinationEntity(63U);
    msg.value = 0.5842518338409192;
    msg.sys_src = 42880U;

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
    msg.setTimeStamp(0.3804895832606573);
    msg.setSource(59449U);
    msg.setSourceEntity(113U);
    msg.setDestination(44878U);
    msg.setDestinationEntity(129U);
    msg.value = 0.743352017841951;
    msg.sys_src = 44293U;

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
    msg.setTimeStamp(0.4957703122098144);
    msg.setSource(42098U);
    msg.setSourceEntity(98U);
    msg.setDestination(62606U);
    msg.setDestinationEntity(95U);
    msg.value = 0.6700019693235416;
    msg.units = 14U;

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
    msg.setTimeStamp(0.6029960267183873);
    msg.setSource(56609U);
    msg.setSourceEntity(165U);
    msg.setDestination(28922U);
    msg.setDestinationEntity(24U);
    msg.value = 0.3101270649786868;
    msg.units = 37U;

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
    msg.setTimeStamp(0.8864825702965194);
    msg.setSource(63425U);
    msg.setSourceEntity(213U);
    msg.setDestination(62579U);
    msg.setDestinationEntity(249U);
    msg.value = 0.23185317883975853;
    msg.units = 81U;

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
    msg.setTimeStamp(0.9358826266733196);
    msg.setSource(53699U);
    msg.setSourceEntity(41U);
    msg.setDestination(5279U);
    msg.setDestinationEntity(191U);
    msg.base_lat = 0.9124412417934404;
    msg.base_lon = 0.45638149203903344;
    msg.base_time = 0.9311497786704196;

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
    msg.setTimeStamp(0.542951979187509);
    msg.setSource(65319U);
    msg.setSourceEntity(181U);
    msg.setDestination(12784U);
    msg.setDestinationEntity(72U);
    msg.base_lat = 0.5701654380882145;
    msg.base_lon = 0.07788949277418733;
    msg.base_time = 0.6092286199639179;

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
    msg.setTimeStamp(0.5095522179515348);
    msg.setSource(34732U);
    msg.setSourceEntity(112U);
    msg.setDestination(33804U);
    msg.setDestinationEntity(161U);
    msg.base_lat = 0.8217702211536871;
    msg.base_lon = 0.24320904496192564;
    msg.base_time = 0.5348655578310787;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 7007U;
    tmp_msg_0.priority = -120;
    tmp_msg_0.x = 1332;
    tmp_msg_0.y = 5864;
    tmp_msg_0.z = -8480;
    tmp_msg_0.t = -14856;
    IMC::UsblAngles tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.target = 19564U;
    tmp_tmp_msg_0_0.bearing = 0.15259280738244718;
    tmp_tmp_msg_0_0.elevation = 0.5505630874532658;
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
    msg.setTimeStamp(0.8688296470846224);
    msg.setSource(30217U);
    msg.setSourceEntity(221U);
    msg.setDestination(22817U);
    msg.setDestinationEntity(182U);
    msg.base_lat = 0.5264690267942038;
    msg.base_lon = 0.05278062149890994;
    msg.base_time = 0.31706216699885803;
    const signed char tmp_msg_0[] = {80, 55, 16, 98, -12, 90, -102, -49, 37, -70, 74, -59, -124, 14, 53, 86, 93, -91, 89, 13, 112, 121, -43, -75, 69, -81, -37, -24, -38, 106, 55, -104, 17, -46, 126, -40, 60, 13, 49, -99, 29, -60, -10, 39, 62, -111, -118, -82, 31, 71, 20, 63, -115, 84, 41, -46, -47, -60, 80, -29, -106, 97, -11, 112, 58, -80, 5, 108, 68, 44, -100, 60, -126, 110, -62, 110, 83, 104, 13, -123, 117, -63, 51, -88, 41, 54, -81, 91, 85, 91, -78, -115, 15, -88, -25, 110, -70, -73, 103, -58};
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
    msg.setTimeStamp(0.47238427945535644);
    msg.setSource(268U);
    msg.setSourceEntity(94U);
    msg.setDestination(8345U);
    msg.setDestinationEntity(99U);
    msg.base_lat = 0.8576098917147961;
    msg.base_lon = 0.9173374759767611;
    msg.base_time = 0.5047667355580796;
    const signed char tmp_msg_0[] = {-43, -82, 67, 103, 16, 4, 62, -6, -4, -1, 110, 48, -35, 43, -54, 107, -56, -70, -47, -62, -10, 86, 24, 124, -97, 37, 101, -36, -87, 19, -94, 31, 21, 40, -76, -36, 69, 19, 20, 62, 59, -106, -5, -79, 66, 47, -106, -86, -80, -44, -37, -24, -15, -43, -66, -51, -45, -28, -46, -15, 103, 80, 47, 31, 107, -82, -18, -115, 7, 59, -41, -104, 90, 50, 94, -71, -93, -6, -20, -4, 9, 2, -17, 23, -101, -118, -69, 50, -31, 47, 76, -80, 87, 53, -20, 15, 22, -92};
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
    msg.setTimeStamp(0.9340104416334754);
    msg.setSource(50689U);
    msg.setSourceEntity(10U);
    msg.setDestination(55120U);
    msg.setDestinationEntity(248U);
    msg.base_lat = 0.2862587689552273;
    msg.base_lon = 0.2815452706100904;
    msg.base_time = 0.8269140800833571;
    const signed char tmp_msg_0[] = {-13, -40, 106, 69, 96, -54, 9, -20, 15, 71, -100, -88, -9, 87, 22, 52, -24, 5, 70, -80, 50, -16, -3, 114, 0, -52, -43, -104, 117, 23, -111, 26, -27, -126, -102, -8, -117, 3, -45, -14, 32, 17, -82, -8, -34, -82, 121, 3, 89, 93, 8, -112, 66, 8, -88, -94, 46, 110, -78, -3, -32, 124, 10, 125, -66, 74, 25, 112, -66, 10, -17, 115, 12, -60, -103, 88, 78, 116, -106, 117, 86, 113, 65, 99, -108, -106, -32, -127, 16, -35, 55, 20, -61, 116, -115, 22, -52, -29, -95, 110, -78, 122, 76, -69, 82, 109, 96, -109, -26, 88, 8, -68, -25, 20, -106, -85, 91, -87, -25, 29, -82, 21, -115, 25, 66, 35, -76, 30, 8, -74, 114, -98, 46, 47, -4, 30, -108, 88, -110, 65, -80, 123, 6, 126, 69, 54, -8, 42, -24, 62, -61, 123, -32};
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
    msg.setTimeStamp(0.6972416824411213);
    msg.setSource(62529U);
    msg.setSourceEntity(161U);
    msg.setDestination(40727U);
    msg.setDestinationEntity(101U);
    msg.sys_id = 62302U;
    msg.priority = 61;
    msg.x = 1025;
    msg.y = -17103;
    msg.z = 27146;
    msg.t = -24300;
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.8443175525445085;
    tmp_msg_0.speed = 0.8102150396645436;
    tmp_msg_0.turbulence = 0.017466719676114684;
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
    msg.setTimeStamp(0.7102495464412644);
    msg.setSource(30706U);
    msg.setSourceEntity(104U);
    msg.setDestination(35112U);
    msg.setDestinationEntity(166U);
    msg.sys_id = 56302U;
    msg.priority = -115;
    msg.x = -21062;
    msg.y = 6850;
    msg.z = 18028;
    msg.t = -12587;
    IMC::DvlRejection tmp_msg_0;
    tmp_msg_0.type = 64U;
    tmp_msg_0.reason = 47U;
    tmp_msg_0.value = 0.3985745677518042;
    tmp_msg_0.timestep = 0.4815477582622123;
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
    msg.setTimeStamp(0.29538600229410306);
    msg.setSource(17959U);
    msg.setSourceEntity(122U);
    msg.setDestination(1722U);
    msg.setDestinationEntity(236U);
    msg.sys_id = 19842U;
    msg.priority = -13;
    msg.x = 659;
    msg.y = -13902;
    msg.z = 16440;
    msg.t = -3755;
    IMC::PWM tmp_msg_0;
    tmp_msg_0.id = 172U;
    tmp_msg_0.period = 3377920974U;
    tmp_msg_0.duty_cycle = 3058482704U;
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
    msg.setTimeStamp(0.04816680611071411);
    msg.setSource(44022U);
    msg.setSourceEntity(220U);
    msg.setDestination(51359U);
    msg.setDestinationEntity(227U);
    msg.req_id = 43793U;
    msg.type = 219U;
    msg.max_size = 30580U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.21243066391099574;
    tmp_msg_0.base_lon = 0.5872353729465655;
    tmp_msg_0.base_time = 0.8911795207253573;
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
    msg.setTimeStamp(0.7596444163561528);
    msg.setSource(10686U);
    msg.setSourceEntity(94U);
    msg.setDestination(39972U);
    msg.setDestinationEntity(61U);
    msg.req_id = 31463U;
    msg.type = 13U;
    msg.max_size = 40276U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.6149786094962654;
    tmp_msg_0.base_lon = 0.3946354028027287;
    tmp_msg_0.base_time = 0.770549330551517;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 57694U;
    tmp_tmp_msg_0_0.priority = -119;
    tmp_tmp_msg_0_0.x = -28469;
    tmp_tmp_msg_0_0.y = -11423;
    tmp_tmp_msg_0_0.z = -11209;
    tmp_tmp_msg_0_0.t = 12183;
    IMC::Redox tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.1695421275919904;
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
    msg.setTimeStamp(0.9917637687163463);
    msg.setSource(65098U);
    msg.setSourceEntity(18U);
    msg.setDestination(41610U);
    msg.setDestinationEntity(118U);
    msg.req_id = 3626U;
    msg.type = 145U;
    msg.max_size = 60209U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.4954413494669696;
    tmp_msg_0.base_lon = 0.47341176921122274;
    tmp_msg_0.base_time = 0.5127851724832672;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 39747U;
    tmp_tmp_msg_0_0.destination = 49471U;
    tmp_tmp_msg_0_0.timeout = 0.030209504961382083;
    IMC::NeptusBlob tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.content_type.assign("RINRHWMGWHSLOAEFTFCMPKZLBRPQCWUWQHVEPKZUHUESVXXZGPLCEEJQSDL");
    const signed char tmp_tmp_tmp_tmp_msg_0_0_0_0[] = {-79, 99, 58, 26, 99, 104, -4, -92, -54, -39, -112, 121, 10, 72, 36, 89, -71, 1, 9, -83, -63, 72, -98, 105, 67, 2, 63, 85, 61, 6, 105, 27, -98, -85, 95, 79, 119, -125, 101, 30, -79, 107, -126, 53, -38, -74, 73, 109, 13, -53, 114, -111, 60, 116, 69, -112};
    tmp_tmp_tmp_msg_0_0_0.content.assign(tmp_tmp_tmp_tmp_msg_0_0_0_0, tmp_tmp_tmp_tmp_msg_0_0_0_0 + sizeof(tmp_tmp_tmp_tmp_msg_0_0_0_0));
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.11293336953015187);
    msg.setSource(2986U);
    msg.setSourceEntity(44U);
    msg.setDestination(39148U);
    msg.setDestinationEntity(226U);
    msg.original_source = 44918U;
    msg.destination = 11547U;
    msg.timeout = 0.6158966743983341;
    IMC::UamRxFrame tmp_msg_0;
    tmp_msg_0.sys_src.assign("SFMWWXZQRQILSULLFWJDJIFEKKXPQUVMFHJGHDSCYIAOTJTFJVZSARRNOLACMAHJMKONZXBGRSVHKVCXNVPAQQQBMIAITZHDYKRWPRYYLDTGWVNGMYCMWRWJGBURZXQSLDBPAGVXFOACKHFPIKNBVKDCPUACOIXEIMEEMDOLHWQEVSVJCPOECBZNTDUOIUNMUGBPUTJZEYHSREKJYLTTORFBYWUZGUANG");
    tmp_msg_0.sys_dst.assign("OFQZPTHNNXXCQJWKAMRRPAHCWJUQTKXNUKCIWMSFMZDZAURURFOIZZZXAGOILBDXTADFEFBJVOGQMWJTZJSOAHGUCEYQTXJRYZEOBVKECCEZAHWARDTVMBMSHEVHLGPPHIPGJNZTUTAYSFOCLGKIEPFYFDUSMGILYNTBKLRVYWSLGFYPXHKJYWLOKQPEGCFBWBSMEJEIRXNHLQMBN");
    tmp_msg_0.flags = 31U;
    const signed char tmp_tmp_msg_0_0[] = {63, -64, -17, 92, 97, 75, 108, 0, -82, 1, -126, 66, 94, 67, -94, 63, -68, -66, -1, -87, -13, -127, 119, 81, 29, -33, -65, 80, -32, 112, -19, 35, -52, 76, 33, -97, -56, -19, -125, 36, 31, 36, 59, 42, 74, 76, 26, -40, -75, 69, 86, 72, -75, 55, 117, -10, 21, -128, -79, -17, 122, 113, -55, -54, -42, -104, -70, -39, -40, 91, 66, -59, -70, 14, -16, -47, -66, 120, -110, 51, -47, 126, 16, -68, 88, -40, 15, -12, -90, 90, -2, 91, -124, 25, -108, -6, 68, 69, -113, 82, 55, -98, 85, -122, -83, 42, 24, 26, 15, -15, -89, -6, -95, 28, 12, 62, 7, -66, 67, -127, 64, -87, -46, 84, 10, 59, -17, 66, 13, 13, 119, -89, 101, 124, 70, -5, -60, -38, -58, -107, -50, -42, 115, 112, -39, -109, 45, 59, 47, 86, 60, -96, -44, -27, -63, -41};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.3614025521505242);
    msg.setSource(39243U);
    msg.setSourceEntity(133U);
    msg.setDestination(54998U);
    msg.setDestinationEntity(134U);
    msg.original_source = 30212U;
    msg.destination = 34489U;
    msg.timeout = 0.5425175535088246;
    IMC::LoggingControl tmp_msg_0;
    tmp_msg_0.op = 210U;
    tmp_msg_0.name.assign("IPOMSRBOFFHNTRSLZNWXKQRWVMYGZWPVVTIVCSKRYRIPUALYSFF");
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
    msg.setTimeStamp(0.13291586555075507);
    msg.setSource(13052U);
    msg.setSourceEntity(176U);
    msg.setDestination(42738U);
    msg.setDestinationEntity(241U);
    msg.original_source = 26837U;
    msg.destination = 6751U;
    msg.timeout = 0.9368270585780257;
    IMC::GpioState tmp_msg_0;
    tmp_msg_0.name.assign("PIMHHJCGXKBOCTLDCLOFWBTTQLAWUNFMZJHKMIQNEIFGHRDILIZSIWIRLZQGPXSTWXUPICYQVUGOHTBAZAHTJGQJQOVEBCOQOAUURZREAPZJEMQXXWYLPFCNYIDPMKZMPCHKYWIYOMMA");
    tmp_msg_0.value = 200U;
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
    msg.setTimeStamp(0.20819266927808755);
    msg.setSource(60883U);
    msg.setSourceEntity(166U);
    msg.setDestination(21433U);
    msg.setDestinationEntity(25U);
    msg.type = 48U;
    msg.comm_interface = 3233U;
    msg.model = 26731U;
    msg.list.assign("PYWLHYYBRKLWZKMMPCAMVAFYEVRAOSSYYZZKGABBQBUQALFYMFQUHONEFJAGQIEGUJZCVZAQTIDTRQKRYXNFSBDSVRFCCGCSWLJHQMKUGTUKHOIBLMPZBHUOUTKXPPCOORXDRWVRJFXBJSVCTVAXMBNGNYSKIDTXNWECNCJLVJWSV");

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
    msg.setTimeStamp(0.1377590591858292);
    msg.setSource(3472U);
    msg.setSourceEntity(179U);
    msg.setDestination(59478U);
    msg.setDestinationEntity(241U);
    msg.type = 40U;
    msg.comm_interface = 63297U;
    msg.model = 32240U;
    msg.list.assign("BXFJGESDFQXWNWLHNKWBOVHXMYUWKMATCCRUQKLHMCOZHDPNFXTNQKIUYLGTNWBIHIRBAMTEULGKSHYQWPUQAPVUUBRJGAPCOHEVKSTFNVCPRVAZJBBLEHAICOGGSZSJANDIXYMEUOLBYMQIKUVOTRIEHVPGKWSFRWYYVD");

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
    msg.setTimeStamp(0.6205444086615439);
    msg.setSource(2843U);
    msg.setSourceEntity(113U);
    msg.setDestination(2752U);
    msg.setDestinationEntity(27U);
    msg.type = 81U;
    msg.comm_interface = 53982U;
    msg.model = 59852U;
    msg.list.assign("ZLTSXFPYLPTYCYXWRKPTDFDJBAYCODFHTOAEQJZBUFPRGXPNRKDJQERVNAVXFKVNGJXPOTLMVXASQIVKWSTQKWUWVUYQLFAZBWQHLJSIYYWZGDJIDJWMMOZMYCOBTBGJUEGIPQMQVRCGTTIYDPQUKAAUWAMRAZRYFLLICMBZSVUKUEDKEOVINNCXJEQCERBUSFKBGOVNTAFGEHOZ");

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
    msg.setTimeStamp(0.5725685426312634);
    msg.setSource(58707U);
    msg.setSourceEntity(34U);
    msg.setDestination(65121U);
    msg.setDestinationEntity(6U);
    msg.type = 63U;
    msg.req_id = 924103344U;
    msg.ttl = 4555U;
    msg.code = 187U;
    msg.destination.assign("KNKHICBJPYLSPOCNVFNTBLMUEXDDMJTQYXRLZAKIILQGWZGGHYCZBITFWRVLMQFJHZGCBEHRMGHNKZYQJSSYIXBWRIDVRYHRSCVYZKTVPDKMYWXUINJRATUZZSOCIFYMWVBHKMJYNCXKLWTDVQOUAQQBFZTFPKPGIACUWDAGOXLESQTIOSJSPFPETMUOKFPEFOJCTFEXOQANNNUWRRQVNEADZAMVEARLDDXP");
    msg.source.assign("DQAEHQOTSSHWNQKOTWPZJDTMNJXIERCBPCGALKEKMRRPDWVZGGKZSTJRWEHXCQOJXVMFUCUNXSOVSKNUIBZKOBAGLAYPYPIJIAVZDGXUMYLXSNJVKCVNYJYFQYBCAQHFCMMRCMNEODREQDSWUVPZSFUTUPQNHOZZUJBDNHEDNLKQLYOTMTGYMVEIOFOFBXMRBITHLERSRCGKAGPVIQXITHIGUZW");
    msg.acknowledge = 97U;
    msg.status = 230U;
    const signed char tmp_msg_0[] = {49, 126, 34, 64, -103, -16, -95, -94, -98, -91, 118, 94, -32, 35, 97, -126, -99, 116, -37, 52, -101, 59, 98, 73, 99, 115, -50, -79, -67, -113, -38, 26, 98, -14, 96, 75, 51, -27, 72, -19, 109, -30, 29, -43, 40, -44, -115, 34, -24, 123, -39, 91, -32, 37, -60, -79, -85, 88};
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
    msg.setTimeStamp(0.9305662308957097);
    msg.setSource(13201U);
    msg.setSourceEntity(114U);
    msg.setDestination(7270U);
    msg.setDestinationEntity(17U);
    msg.type = 104U;
    msg.req_id = 370733709U;
    msg.ttl = 7421U;
    msg.code = 48U;
    msg.destination.assign("GLEDGTEXYBUDDLRDBUMEIOOBVQDAHYXHGLEQAFFOASEZPGFQNTSXJJUCUXXIWMLGIQOUZPCK");
    msg.source.assign("VOYSLOSDKWRDUIGQQNTPICTIXSWMJAHVLYIBDUGQKKIFECSYFWXGTBLREKPXYUAETJSCBLSUMUPBBYBKYJHODBMFFEQEAZFSADRVNQTJCDEHFDNJORXRXLMYVDALEUTIGIXHTIELMFJLQZMZANTOBNRQVGANZHTHVOWZHNDGZWPGUCYJRUDXIHMQKLNPMJPSXOBZJJBZZWWSRMYTOUUAOCLWOPKVVC");
    msg.acknowledge = 211U;
    msg.status = 147U;
    const signed char tmp_msg_0[] = {-28, 11, -30, 7, -26, 72, -38, 60, 83, -89, 47, 21, 65, 49, 98, 103, 13, 104, -53, -105, 99, -13, -68, 8, 26, 45, -58, 125, 94, 76, 32, 0, -43, -44, -82, -28, 36, -117, -39, 4, -30, -85, 85, 33, -105, 68, 22, 48, -64, -99, 108, 56, 121, -76, 91, 21, -14, 121, 14, -15, 28, 90, -22, -110, -21, -24, -30, -2, 31, 27, 122, -111, 43, 66, 122, -71, 66, 71, 82, 125, 52, 58, 14, -44, -45, 81, -108, 72, 31, -81, -119, 81, -39, 112, 43, 41, 118, -115, 24, 99, -70, -90, -60, 111, -72, -99, 70, 65, 68, -68};
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
    msg.setTimeStamp(0.5540173033907128);
    msg.setSource(32913U);
    msg.setSourceEntity(16U);
    msg.setDestination(63753U);
    msg.setDestinationEntity(115U);
    msg.type = 182U;
    msg.req_id = 182997968U;
    msg.ttl = 62287U;
    msg.code = 195U;
    msg.destination.assign("YQAUEOBVPEGVIANUPPXORFMDESESVLTWMGNWAQPZNBFKDCXQMQBVUDKPDBSYOENWXSBGLJCOQZCKYGMNOVKGFPSZHEXCXYUHXVETURJDLYEZFAQTKYYSHMQCSMTMZGWAUYBJKIZOIVMDHMNLIBOKOOPJLXRIKKQNRIPSOFRAIJJGVPKLQCITIVHZZTCWTMRFXDRLJRYTSDGGSVHQUDXCRFUJAPZHLHAFWERD");
    msg.source.assign("BSJBMZVKHPFFTEABMJWCOEHDF");
    msg.acknowledge = 53U;
    msg.status = 88U;
    const signed char tmp_msg_0[] = {-35, -77, 63, -62, 23, -75, 96, -39, 114, -60, -101, 126, 84, -49, 83, 108, -97, -90, 119, -44, -26, -6, -72, 7, 105, 67, -24, -51, -95, 86, 52, 122, -82, 21, -46, 22, 28, -90, 38, -35, -41, -115, -122, -36, -72, 112, -6, 56, 125, -95, -28, -94, -28, -56, 70, -65, -71, -81, 105, -33, -114, 126, 80, 8, 63, 49, 93, 97, -53, 24, -114, -43, 2, -47, 28, 26, -125, -109, -5, -123, -64, -18, 120, 1, -78, 103, 43, 55, 48, 51, 80, -29, -29, 45, -17, 40, -52, -80, -33, 45, 118, -17, -7, 65, 89, -24, 0, -49, 54, -62, -128, -128, -77, 85, 34, 92, 68, 106, -64, 103, -74, -98, -10};
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
    msg.setTimeStamp(0.4638321742546877);
    msg.setSource(55227U);
    msg.setSourceEntity(168U);
    msg.setDestination(41118U);
    msg.setDestinationEntity(64U);
    msg.id = 27U;
    msg.range = 0.828803971348816;

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
    msg.setTimeStamp(0.5707663826225904);
    msg.setSource(37468U);
    msg.setSourceEntity(68U);
    msg.setDestination(54469U);
    msg.setDestinationEntity(229U);
    msg.id = 127U;
    msg.range = 0.43786866809882385;

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
    msg.setTimeStamp(0.637983184957424);
    msg.setSource(35835U);
    msg.setSourceEntity(87U);
    msg.setDestination(41817U);
    msg.setDestinationEntity(33U);
    msg.id = 192U;
    msg.range = 0.5643558722672412;

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
    msg.setTimeStamp(0.551421204484052);
    msg.setSource(4562U);
    msg.setSourceEntity(38U);
    msg.setDestination(41908U);
    msg.setDestinationEntity(3U);
    msg.beacon.assign("HMWNWCXGQDUETOFASRPVSLOMDECXQOLBWPXNLRZYIGVMBZPJLAWRDFXUAHYINOMUDCBVYTJKBKYHQSPGRPOTRJXFCKEKMKDPFOQEWICKANZHGDZIATHNVEBWCSQLBLGFIOEJQWAULHBSMVVSUEPURJLJTM");
    msg.lat = 0.2307612699765924;
    msg.lon = 0.2818264161391876;
    msg.depth = 0.8718345657266048;
    msg.query_channel = 226U;
    msg.reply_channel = 193U;
    msg.transponder_delay = 222U;

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
    msg.setTimeStamp(0.741713092083844);
    msg.setSource(1970U);
    msg.setSourceEntity(21U);
    msg.setDestination(6062U);
    msg.setDestinationEntity(138U);
    msg.beacon.assign("COKESGWRYTHLVEUHWDXXLMDYSBGIOEODFZIOUMUTLOTKVZKFPIFFBNYPTJJQALPWVUKHFKCQOGLMQQDSEWWEKAPUMRLJVXGAIFUCQNTXCZICZRXSLORENCZNMTXQVNWSBGAKVJNDUYEYMJFHZVBJXPRDHISXMDHMXOHAIDUWUCSVBIMYFTGZOARGRYNLJ");
    msg.lat = 0.4798026577931287;
    msg.lon = 0.27979248063287543;
    msg.depth = 0.3948193500601581;
    msg.query_channel = 145U;
    msg.reply_channel = 140U;
    msg.transponder_delay = 134U;

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
    msg.setTimeStamp(0.8567752458899595);
    msg.setSource(64590U);
    msg.setSourceEntity(215U);
    msg.setDestination(40093U);
    msg.setDestinationEntity(127U);
    msg.beacon.assign("JQLQMYACFZCOIKSCQUWXNHZAERBABPQAOASKVVCCLRIDPOJZEYVTOBBNDVDYJYXUTVXVEWPGUNKZEZZHQGRUDGUWWRPRSRCKBZXTTPSOQISIPFD");
    msg.lat = 0.42477825304677364;
    msg.lon = 0.3151391752940369;
    msg.depth = 0.7891231613119116;
    msg.query_channel = 64U;
    msg.reply_channel = 145U;
    msg.transponder_delay = 95U;

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
    msg.setTimeStamp(0.21932475012358477);
    msg.setSource(22154U);
    msg.setSourceEntity(242U);
    msg.setDestination(5036U);
    msg.setDestinationEntity(247U);
    msg.op = 12U;

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
    msg.setTimeStamp(0.6865258336154225);
    msg.setSource(25299U);
    msg.setSourceEntity(220U);
    msg.setDestination(57278U);
    msg.setDestinationEntity(70U);
    msg.op = 184U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("KLKPWBCLFVBMACCGXIQQGSAOJSLDHNGPJZTEDOBYVYZKODSPFQJEJIXPUSTDHYPZIBAZJFOJFROFWYTTEVYVZRMFGSASZKMXBTK");
    tmp_msg_0.lat = 0.15640181299237454;
    tmp_msg_0.lon = 0.8790835951976805;
    tmp_msg_0.depth = 0.12991933633245867;
    tmp_msg_0.query_channel = 122U;
    tmp_msg_0.reply_channel = 203U;
    tmp_msg_0.transponder_delay = 140U;
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
    msg.setTimeStamp(0.15451160205421843);
    msg.setSource(25562U);
    msg.setSourceEntity(71U);
    msg.setDestination(48947U);
    msg.setDestinationEntity(70U);
    msg.op = 4U;

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
    msg.setTimeStamp(0.1358702863722926);
    msg.setSource(14734U);
    msg.setSourceEntity(215U);
    msg.setDestination(43593U);
    msg.setDestinationEntity(41U);
    IMC::MessagePart tmp_msg_0;
    tmp_msg_0.uid = 9U;
    tmp_msg_0.frag_number = 93U;
    tmp_msg_0.num_frags = 90U;
    const signed char tmp_tmp_msg_0_0[] = {50, 97, 43, 31, 58, -115, 81, -10, -28, 70, 55, 30, -95, -8, 72, -98, -89, 110, -117, -31, -105, 109, 65, -99, 106, 31, -38, -10, -103, 24, 38, -93, -105, -78, -107, -17, 97, 42, -15, 5, 72, 122, -38, -20, -15, 116, -72, 6, 91, -27, 61, -45, 125, 47, 124, 106, 97, -57, -127, 26, -119, 49, -72, -91, -75, -13, 97, 15, 21, 40, -73, -56, -98, -73, -58, 100, 24, 14, -94, -52, 72, 5, 21, 101, -126, -28, -125, 52, -78, -63, 50, -28, 33, -82, -128, -2, 61, -13, -105, -99, -28, 111, -37, 30, -11, 19, -111, 109, 56, 73, -62, -38, -15, 2, -119, -84, 0, -33, 28, 44, 15, -27, 107, -116, -69, 102, 13, 74, -61, -47, 117, -79, -116, -3, 69, 42, -14, 119, -116, 49, 1, 74, 115, 85, 124, -23, 88, -63, -125, -55, -61, -53, -121, 18, 86, -74, 77, 108, 8, -3, -49, 30, 45, 103, 31, 5, -97, -98, 31, -43, -114, 46, 56, 101, 2, 63, -99, -92, 21, -25, -32, -61, 103, 43, -42, -99, -20, 77, -81, -90, 125, 114, 117, -22, 121, 1, -119, -45, -1, -127, -109, -123, -33, -107, -77, 77, 86, 27, -26, -20, 65, -20, -84, 92, 81, -85, -10, 50, 58, -2, 2, 16, -124, -83, 62, 50, -100};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.5120514558405523);
    msg.setSource(56591U);
    msg.setSourceEntity(26U);
    msg.setDestination(55499U);
    msg.setDestinationEntity(25U);
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("QSFTZQXJCGMMLSYYLYBGWCJDZUVKAZHLOQWNJVNGMBCRXZRRDIEAAQCKKUUCXNXEKYPZVJWTRHWBVYSWDBIS");
    tmp_msg_0.description.assign("LHLWWZTWUEPUSGPZEUPSITRUMSFJNKNJKBHZMVAOLZBFVSYNFJFHXHABPKGOYLJOCRNJZKTEMQYDTGREIXJVXRMJIQKKECDPVVMSVFFBHQHIINZYFUPYAIWEKGONRXFKHVSPUAEDADCKYUDOQWPFTRTUNGMQTGCOSBIOAHDYHDQHJWQRSJKXYWYEETTNVDCAXC");
    tmp_msg_0.vnamespace.assign("HWOPELNZTUWNFNPOIFZKDZQDWMXNXGXRQVKKCACRVRUNRCJEFTYFTLGVCJJRHAMVNPIOMPYHCECFTEWBGBNWRXMSNUWPSBUUKUZHRLEYVMDQIKYTYYIDKVHYSGSQHOUGWUXLFASCXZWTOZKVOQOYDWGDGMYTELFQRVAAOFMEJPHTOUYXLCQVTBKJSARQAIZ");
    tmp_msg_0.start_man_id.assign("WEYNZLTWSLILRVMUFGIZVPVLCAENOVFU");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("SCBWQLYAAUSBJ");
    IMC::FollowTrajectory tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 26141U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.3597703709727039;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.9197770519097811;
    tmp_tmp_tmp_msg_0_0_0.z = 0.7724712361396299;
    tmp_tmp_tmp_msg_0_0_0.z_units = 4U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.33285272225654194;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 203U;
    IMC::TrajectoryPoint tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.x = 0.5369453686653136;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.y = 0.7306232938120383;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z = 0.4290689757987155;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.t = 0.8708785029371309;
    tmp_tmp_tmp_msg_0_0_0.points.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    tmp_tmp_tmp_msg_0_0_0.custom.assign("OVELSVTFBFNTINNLDKFVWHHGSPUEQPODNHYQZCJBNAWAHPZDRIBYJNJKMYDIHUVLEZAITCKQ");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::FollowReference tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.control_src = 21551U;
    tmp_tmp_tmp_msg_0_0_1.control_ent = 77U;
    tmp_tmp_tmp_msg_0_0_1.timeout = 0.7940600067368974;
    tmp_tmp_tmp_msg_0_0_1.loiter_radius = 0.013844612141131085;
    tmp_tmp_tmp_msg_0_0_1.altitude_interval = 0.9709658874585496;
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::SoiCommand tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.type = 254U;
    tmp_tmp_tmp_msg_0_0_2.command = 254U;
    tmp_tmp_tmp_msg_0_0_2.settings.assign("YRDHBVABJWLLAFHBFOCZM");
    IMC::SoiPlan tmp_tmp_tmp_tmp_msg_0_0_2_0;
    tmp_tmp_tmp_tmp_msg_0_0_2_0.plan_id = 62741U;
    tmp_tmp_tmp_msg_0_0_2.plan.set(tmp_tmp_tmp_tmp_msg_0_0_2_0);
    tmp_tmp_tmp_msg_0_0_2.info.assign("JDNRIWVITYKUGACMZZY");
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("POBBZIWKIKOWPZMRYCPOGUYPNFNGFX");
    tmp_tmp_msg_0_1.dest_man.assign("JTXGXOSASPWDNAZCJYISHEMGOQUCKDNPIIHUJLATJXDBFZMRQZAVRQCNTWQMSIISRNGIMHJEXYWFKFGOKEWHLTBZJTLVFMXZUVEEVXHVKYFNNIPZMVPLULEQPBARWBROEAEGSUEYTDOKPULMDMBBWBYVPYHZUFUVZKBPRWCS");
    tmp_tmp_msg_0_1.conditions.assign("HWTJSMVVQUYKKXWTGRELIIALYN");
    IMC::TCPRequest tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.req_id = 36477U;
    tmp_tmp_tmp_msg_0_1_0.destination.assign("IINJJBMMKKGGVSNGZIEPXFVQMBLQLXPJWVCHFZNUXBAIEAACTTXDKYAPCKZAOVKTOSOPZYFSWFXOGHUMNQHPWCKRAPIPWNCXAGAZSKCRRQORDTWAUTUKSUHVYODCBQHFEGLZEIPRLTXENMGQLDUMVFWMSJXQDGYGBNVMREMVZFFQRDUBJPZHTJWJYOJPNRKYSLWRHYIBXHLECGRSBYDS");
    tmp_tmp_tmp_msg_0_1_0.timeout = 0.8864824099655582;
    IMC::PlanControlState tmp_tmp_tmp_tmp_msg_0_1_0_0;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.state = 96U;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.plan_id.assign("CZOOMFZKQYMAAIGGNM");
    tmp_tmp_tmp_tmp_msg_0_1_0_0.plan_eta = -57810738;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.plan_progress = 0.9350561173747344;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.man_id.assign("AATTIBBPLHVCKZXFNYUXIQLXVXGWNCJONHUNS");
    tmp_tmp_tmp_tmp_msg_0_1_0_0.man_type = 33588U;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.man_eta = 2124948859;
    tmp_tmp_tmp_tmp_msg_0_1_0_0.last_outcome = 124U;
    tmp_tmp_tmp_msg_0_1_0.msg_data.set(tmp_tmp_tmp_tmp_msg_0_1_0_0);
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::ExternalNavData tmp_tmp_msg_0_2;
    IMC::EstimatedState tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.lat = 0.46237492129297664;
    tmp_tmp_tmp_msg_0_2_0.lon = 0.7401702972149743;
    tmp_tmp_tmp_msg_0_2_0.height = 0.7053906373118356;
    tmp_tmp_tmp_msg_0_2_0.x = 0.24045226454706403;
    tmp_tmp_tmp_msg_0_2_0.y = 0.7063435974422055;
    tmp_tmp_tmp_msg_0_2_0.z = 0.011096769426742648;
    tmp_tmp_tmp_msg_0_2_0.phi = 0.17661423202646898;
    tmp_tmp_tmp_msg_0_2_0.theta = 0.537786493941035;
    tmp_tmp_tmp_msg_0_2_0.psi = 0.1378203387489657;
    tmp_tmp_tmp_msg_0_2_0.u = 0.32542391079711475;
    tmp_tmp_tmp_msg_0_2_0.v = 0.8055542515322484;
    tmp_tmp_tmp_msg_0_2_0.w = 0.6635059634212398;
    tmp_tmp_tmp_msg_0_2_0.vx = 0.6180372171023022;
    tmp_tmp_tmp_msg_0_2_0.vy = 0.19755078893229971;
    tmp_tmp_tmp_msg_0_2_0.vz = 0.6776320359913426;
    tmp_tmp_tmp_msg_0_2_0.p = 0.4936949093443489;
    tmp_tmp_tmp_msg_0_2_0.q = 0.6019611287143324;
    tmp_tmp_tmp_msg_0_2_0.r = 0.5931830261635197;
    tmp_tmp_tmp_msg_0_2_0.depth = 0.997164739640926;
    tmp_tmp_tmp_msg_0_2_0.alt = 0.6011643022624663;
    tmp_tmp_msg_0_2.state.set(tmp_tmp_tmp_msg_0_2_0);
    tmp_tmp_msg_0_2.type = 33U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.6224931071132772);
    msg.setSource(47155U);
    msg.setSourceEntity(36U);
    msg.setDestination(5187U);
    msg.setDestinationEntity(40U);
    IMC::MsgList tmp_msg_0;
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
    msg.setTimeStamp(0.829954478426648);
    msg.setSource(29434U);
    msg.setSourceEntity(85U);
    msg.setDestination(8153U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.20334992035099753;
    msg.lon = 0.4722410619687508;
    msg.depth = 0.34466852254505853;
    msg.sentence.assign("NBAUXLTIBELILXLAQIASRDVEPREMHZCTQSETCKTPUBVMGUWRGLYOINXNJMTLMJHMFSNZVKFEPYNHHPIBELVCJUTBOGYBGBHJOIOCQUWFHVLVJDCMZMYPGYQOVDWHCFDNBDGCTPFAXRFRIRQDZDTRAZHWOQKJMERRWSDVZAMSOBKDKPZHZPKUSONW");
    msg.txtime = 0.6357782101730898;
    msg.modem_type.assign("AEOTHFGCJKWKQBKQVYU");
    msg.sys_src.assign("JEPBOZQUQCKIGGUTXTVTLKPVSDWDANLYXSIKZLWYSCWXJXCMZKAFJMAVMCKJXHKZJFAWXTUECNFGQMPHANZBTFOZSJISODVNEGWDZUYOEZIGIQWPDCFTISFOLRCYYQFEOXMTMQOVVHVLEZUDTHUELQDBUBMVQIMKDEBHVSPLKSGGPOCIFHXRYHTJNRCXAAKPMDZJD");
    msg.seq = 34013U;
    msg.sys_dst.assign("BQRWGUUPLFZIASIJUPPTLEYJRATZTLY");
    msg.flags = 58U;
    const signed char tmp_msg_0[] = {-10, -50, 35, 16, -1, -5, 71, -53, 99, -61, -89, 121, -75, 64, 50, -20, -10, -72, 104, 106, 57, 53, -44, 48, -57, 75, -49, -34, 43, -114, -58, 66, -100, -112, 70, -6, -27, 114, -47, -57, 39, 110, 98, -98, -97, -64, -12, 113, 91, -37, -96, 29, 67, 40, 62, -58, -75, 102, 117, 24, -49, 122, 108, 70, 21, 8, 46, 22, -102, 61, 104, 35, 49, -70, 104, 101, 38, 91, 39, 67, 25, -74, 36, -33, -86, -124, -60, -116, -14, -114, -22, 22, -100, 32, -56, -103, -98, 1, -80, 103, -66, 40, -84, -41, -83, -94, -125, 97, 110, 3, -10, -119, -12, -104, 101, -116, -25, 38, -22, 48, -126, -104, 52, 10, 124, 68, -12, 46, 80, -103, -72, 124, 82, 65, -21, -28, -128, 99, 6, -61, 61, -125, -8, -99, 9, -42, 22, -45, -114, 11, 102, -2, 92, 119, -116, 52, 124, 69, -16, 61, -80, 56, -31, -39, 41, 121, 98, -107, -95, -27, -76, 113, -98, -58, 54, -81, -124, -33, 94, 4, 36, 118, -70, -19, 1};
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
    msg.setTimeStamp(0.9842298378869755);
    msg.setSource(14705U);
    msg.setSourceEntity(137U);
    msg.setDestination(24259U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.3699202429003048;
    msg.lon = 0.5382253664382878;
    msg.depth = 0.8630816113500649;
    msg.sentence.assign("XCOHFOTHRYAOWGUFUY");
    msg.txtime = 0.5585012672902756;
    msg.modem_type.assign("NOVTJBITNTPJYYQEVMRSQIGCOPTOZDWVEZBHUDWLEJNUWLVICYUWWWPLB");
    msg.sys_src.assign("HTUJLHVEQMAHVDKRWPKDJGNAHXJMUPAHRBSWXWAENNKLWFYKMBZFLPMHBXRHXXNIEEQHOEALYKIVKTQPKYJMWIHTWGIVSLRQHJDSOXXJMQMSXLPAQTASFAGCTRYXLRMFJGDSJGCCVGGNEZIOUQOEDFYOPRGXZGTUBEDFBEOASSTIAJEQNOWLSWFIUTYWVTVJRYCCKSDCZBIILCKGON");
    msg.seq = 45377U;
    msg.sys_dst.assign("USSGVTNUWYVJGCOLUDYUEUQRHPACKAKOAVRXEFRDMQOABWHSWBXGLIXMNAWJNOYGKDVTGMKTPXQCQHPALQCPZSIFROEBVVCITOQIHCDWMCPKSPXKNFGZZJFZOFXBDJCARVXSHJSPALZFLNVXSRL");
    msg.flags = 171U;
    const signed char tmp_msg_0[] = {28, 92, -4, -87, 27, 70, -80, 25, -26, -98, 15, 125, -87, 2, -88, -94, -53, -92, 74, -54, -40, 73, -49, -43, -94, 30, 80, -22, 96, -22, -71, -88, -93, -57, 92, 31, 16, -67, 14, 5, 99, 84, -74, 28, -7, -44, -85, -95, -102, -83, -23, -122, 21, -85, 3, 113, -69, -8, 77, -84, -36, -47, 76, -67, 25, -124, -124, -82, 49, -117, -96, 89, -121, -95, -54, 108, 114, -120, -54, 89, -49, -51, -60, 114};
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
    msg.setTimeStamp(0.5854148547028235);
    msg.setSource(56285U);
    msg.setSourceEntity(40U);
    msg.setDestination(62265U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.8390694603439272;
    msg.lon = 0.9306105906860193;
    msg.depth = 0.95729579655774;
    msg.sentence.assign("KZWEMDDUNCMQSIRJVIKJXALTGYHWXYHMTDLPCITGHZEZCLMODGJOTFCBHNQUMZDMRUWXGCNNMUOSUAORNPHDKJWCPVJQQSKSIBXRXICHNKVSAINSOWUHZWYODRBFAUNHRRYGPLUTJYBGFQYBHZTVUEGXTXSFWNZSFRASOWQJFPRVMAHEYUJGRKAEYDCOMVOPYIQZTTJDESOVKDVNLAJCLKXCQWVFBMBGBVKBXEGZBFEEPTALFL");
    msg.txtime = 0.318714437979717;
    msg.modem_type.assign("YFUTDQEIJTHHKZ");
    msg.sys_src.assign("ZJBHBLESCBDLCXTULYESMPYGCRTMRFWTXGIFIKYATTBBVEOMIFVKBCKDWRGCDOVIBNSXFJOOUSOSRUMCUGOLDAHOIQJSHLVWAQY");
    msg.seq = 36873U;
    msg.sys_dst.assign("DENPOMYUWWQMPYCYFHWUHNYMJAOIIXNUMUACVOGMNVYJIWHGBVQPGGMMHKJWXFHSXXXSRWSVWVFKNLUCGZFVTQJYXAIKXVKDLRVEIVYKJJOSDOKNEARQRKRGPZFDFTULENBLZH");
    msg.flags = 229U;
    const signed char tmp_msg_0[] = {-23, -33, -43, 22, 23, -118, 122, 67, 97, 49, 108, -97, 68, -103, 54, 93, 82, 10, 16, 63, 22, 45, -34, -38, 43, 123, 116, -64, 10, -124, -50, -40, -104, -26, 45, -123, 44, -32, 6, 100, -128, -57, -86, 118, 29, -74, -8, -66, -27, -35, -21, 14, -59, 31, -64, 41, 55, -14, 76, -6, -6, -33, -91, -92, 19, -29, -42, 3, -78, -2, 65, -11, 45, 23, -89, -25, -42, -71, -36, 106, 58, 47, 116, -39, -3, -66, 81, 6, -21, 94, -15, -100, 85, 51, -38, -49, 63, -108, -10, 112, -89, -35, -112, -58, -94, 106, 49, 122, -76, 44, -31, -121, 60, 97, -36, 79, -43, 109, -37, -22, -18, 17, -63, -21, 68, 83, -75, 16, 80, -33, -60, -32, -51, -4, -20, -25, 76, -20, -66, 116, -124, -125, 95, -9, 90, -44, -122, 13};
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
    msg.setTimeStamp(0.8280271218934807);
    msg.setSource(64324U);
    msg.setSourceEntity(199U);
    msg.setDestination(17544U);
    msg.setDestinationEntity(80U);
    msg.op = 181U;
    msg.system.assign("KXDTXKBWILMYYRYTEGRPNDWFVMIRZFUUETKCFQNMIJBNCBWOZZEZTRBGOEBVLTMATDC");
    msg.range = 0.23719160804239192;
    IMC::QueryEntityActivationState tmp_msg_0;
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
    msg.setTimeStamp(0.7157542526326911);
    msg.setSource(34588U);
    msg.setSourceEntity(135U);
    msg.setDestination(36011U);
    msg.setDestinationEntity(26U);
    msg.op = 87U;
    msg.system.assign("CAIOCDNOLBNGWRSTQSVSSOXQXJRCOXAWTKLTNRBFTJETPESLAILAFENBCPEVXHPZAGCLUAJOJUPCAXYMZODWTWWMFDKMHIMVPGUIJCIQBJLYBBLRIRKWZXMLTSKCGYIBHGRZOJMGUQFENIYGSVQUFZPEXJFYMAEZIUFDYRVHEPAHDGDOTNXIXUZKKHYVVDHHSPBHONJSKNDYETRLMCUNDFEXMB");
    msg.range = 0.9031713309128795;
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 136U;
    tmp_msg_0.error_count = 152U;
    tmp_msg_0.error_ents.assign("QNFKBJPKTPEOYJVVMQQQETEOCUVFWMIXRUJBHCGYMZISNALWERFNUKPRHSWBVWHFCGAQTCGUWKXXDSDZULTFORTFOVXDKGOMZVYIRHWQDHMLWIOQNNZGKJSNUSMLZFCOHTIBKERMXBCAGUYMINTDKLBIXASQNYZLDRTPWYJHVOYOFRXAHEPIAYQOTBBNPPMEFJNAXSDBFRETYSHKLSJXXGIYGGECZLVCRDZJWCZUPBGKQVPDAUESPUHILZ");
    tmp_msg_0.maneuver_type = 7476U;
    tmp_msg_0.maneuver_stime = 0.6046993928411929;
    tmp_msg_0.maneuver_eta = 46952U;
    tmp_msg_0.control_loops = 2313938212U;
    tmp_msg_0.flags = 199U;
    tmp_msg_0.last_error.assign("ILGAJQCZJINEBVGGGNSTRYEZXYHRWUHZBPBBIPRXDUKCAAMJKTOOBOFTVSAVHQHMQTIUCFDQUYIJZSJPMLFQHXORZSSCNPLTJPCYXTFTOKQVDWXSKYRKQEGRENPYNJSIOVVWRXDLI");
    tmp_msg_0.last_error_time = 0.07652848152440506;
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
    msg.setTimeStamp(0.44800044344123235);
    msg.setSource(16532U);
    msg.setSourceEntity(114U);
    msg.setDestination(58571U);
    msg.setDestinationEntity(1U);
    msg.op = 44U;
    msg.system.assign("IRTTRYFDDIRVAYQFBYHDXJKFABIFY");
    msg.range = 0.7968040174578849;
    IMC::LinkLevel tmp_msg_0;
    tmp_msg_0.value = 0.40851073804993565;
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
    msg.setTimeStamp(0.34270450027876564);
    msg.setSource(41134U);
    msg.setSourceEntity(212U);
    msg.setDestination(43970U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.3749143428260133);
    msg.setSource(17157U);
    msg.setSourceEntity(184U);
    msg.setDestination(10751U);
    msg.setDestinationEntity(92U);

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
    msg.setTimeStamp(0.6987157384988123);
    msg.setSource(32174U);
    msg.setSourceEntity(156U);
    msg.setDestination(32678U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.8027844535733707);
    msg.setSource(50133U);
    msg.setSourceEntity(19U);
    msg.setDestination(13144U);
    msg.setDestinationEntity(162U);
    msg.list.assign("REBZHHUDSMDYHOQSVZQHSYFGCUONMRALTGGVBDCVMADLLPFZCBCOGIMGSKLJZVKPSNXBXTWNTXEFZPRJWVFUSFDALOUXLPCKRDZTYIKVWPOBPXQESEIDNJALHTQZXQEUGNXRQVFMIYMBMAZOHAQBKIAYQRJWEOPITMOOLJQIYVWCAUGKBRZKEFGWDNIBBUAMIJKWE");

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
    msg.setTimeStamp(0.6437252285459465);
    msg.setSource(10927U);
    msg.setSourceEntity(195U);
    msg.setDestination(47032U);
    msg.setDestinationEntity(212U);
    msg.list.assign("LUYHOKLVRGQIHRREVIPJKRLTSGNDGMYBFFMIQRGDVFCYBMHHUZDWPCHVWJWGKORIHQZFPFGVQ");

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
    msg.setTimeStamp(0.5359866390203456);
    msg.setSource(5788U);
    msg.setSourceEntity(241U);
    msg.setDestination(19474U);
    msg.setDestinationEntity(58U);
    msg.list.assign("YOFMCPZBEXPNGNSWDVKCCBJXHGDERQPYRSFXWQWGNMYVSCZJPHJFSFAUDBWWIFXROEULERMZJIJVOHQHDGMADZKMECEQBNHUDONRCQTCJGOTZYWGQUKIHQTUVKTXVGBJSKASHTPFHDZXLFZSOAARLMLXEIEPTZUBULAVIULAVJNTLGOLLRIMVYUJDTGFKZTXPWWZFRNYKQISKJOPYFYQRQCASDPWXWHIOKBVBN");

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
    msg.setTimeStamp(0.12844713631991056);
    msg.setSource(27573U);
    msg.setSourceEntity(87U);
    msg.setDestination(35893U);
    msg.setDestinationEntity(71U);
    msg.peer.assign("EOXDNPKJMSGGAWCFZLDSBBUPWPOQQYXFIKODTNLNRKSCLMIHVNUYCSSPIRBEVKKQZXTJZJRHSGMJHGIIAOPNONWLGJCLQHQJEPLDMFKXCDTGUEZFMWHAGUWRB");
    msg.rssi = 0.11595978031835519;
    msg.integrity = 33146U;

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
    msg.setTimeStamp(0.3990646915260173);
    msg.setSource(50308U);
    msg.setSourceEntity(227U);
    msg.setDestination(5956U);
    msg.setDestinationEntity(103U);
    msg.peer.assign("ZVVLOZKMWMGFHCTASHJWBIWRKPHAWATKNBKOIYZEOMLOGCFMYQIQPTRZGXYLQLWGSQTANTODMXEOUGEHUDPYNDWAJMRVSFYLEQDFJFTBKLFRZHETRAODRRPWHTFBXGNULKZISXFJDUJSLOGSDVCQNAXWNVVOSENIGPLDJYKHBSRPEKIWCHSYRYVX");
    msg.rssi = 0.853770594893271;
    msg.integrity = 42288U;

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
    msg.setTimeStamp(0.7613592992898609);
    msg.setSource(16375U);
    msg.setSourceEntity(95U);
    msg.setDestination(10880U);
    msg.setDestinationEntity(106U);
    msg.peer.assign("RTUUUGTVQBARFAHCMGMSEOSMQAIOTSRJRPIRHBSCNNFINVZWYYLHWLNKNXITEZKUIWJVOXHHFULJMRQFSSLCORKTDVZQFCLMLYAHIOZXNNPKNMXTPKENTZWJJZXYPEKPAOVUKDUIGAECDEWCMSLSIOFBJVYALTVBTEGMHIRJPUE");
    msg.rssi = 0.7798597326661545;
    msg.integrity = 63499U;

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
    msg.setTimeStamp(0.9027703338519382);
    msg.setSource(49537U);
    msg.setSourceEntity(98U);
    msg.setDestination(13340U);
    msg.setDestinationEntity(149U);
    msg.req_id = 40248U;
    msg.destination.assign("DAIBYPKECVKIDJVAKIRFXZSNTSCONWQCQWAWHDJTRFPYUNNLMSYAGBYZHHKFXKCZHWEUIALGPOFVHFSTHNWDHVSQTEUDWXPOBNOTOPJQNNFHCGILUIRUEMXOUDIVMJSJJGQYNOQTPIQIEXVBLMDWTMBQJMRYLVWBBEMEDKUCMHPZGZTRJTSALUXCFSBNVRLWTOGBPZYKEZZWCX");
    msg.timeout = 0.9314744685720667;
    msg.range = 0.980689670332825;
    msg.type = 5U;
    IMC::Event tmp_msg_0;
    tmp_msg_0.topic.assign("KRVZRQOLANYAKFXOMATTZNVZXAUXENKLWJMXAEJFRQQUSEUXUDIBDKMVWWUWTLMQPSPANDCBDASSOULIDCOYZEFCJHZXMQHRBJRZYSXYGWWFWTMNANVB");
    tmp_msg_0.data.assign("OOQONYMQIRTJSAGCWXKBXZUSBPZWYRQUFQVXTEOVDQCULKSRXPQZSFGAIIIRHNXWPHRAILTIZKRYLEOSEPAPBLJMNODFBAENMATGFSFFDGYKRRTHTYMAOGYPVQBSIAZLIWGELOLIWDBXXJKHMJEWHKDUCKYHVTUJCTDNPJUCNGJCTLNYHMEVQGVOWWAQNFCSNBKFGIBPFHXRUEXMPHWUECFEPVYGLMVLUKMZSZJKWBDHZOC");
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
    msg.setTimeStamp(0.7912214269629674);
    msg.setSource(48935U);
    msg.setSourceEntity(28U);
    msg.setDestination(56024U);
    msg.setDestinationEntity(94U);
    msg.req_id = 64026U;
    msg.destination.assign("TIYMMXNUPYHZDHWQPZLZXPBYGRXUJKZTLEUKKXZEIRSDFRKZGTGRSFBOAEYLBICTPTMRYRQNGHCVJVEKJLTBBOHESXFQNKSVTQELBAVKAOLUFLDPAGFMPTUOGZOIHMVGNXIWHJPOJADEHBAQZTGWJMMWIPGUDFAXWNODYKYVCYVGZBJMCCLK");
    msg.timeout = 0.3956890840902423;
    msg.range = 0.7068633356005442;
    msg.type = 217U;
    IMC::FollowSystem tmp_msg_0;
    tmp_msg_0.system = 18916U;
    tmp_msg_0.duration = 58224U;
    tmp_msg_0.speed = 0.2180633276499646;
    tmp_msg_0.speed_units = 4U;
    tmp_msg_0.x = 0.7279828490513196;
    tmp_msg_0.y = 0.9994990808533736;
    tmp_msg_0.z = 0.5917824785599862;
    tmp_msg_0.z_units = 123U;
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
    msg.setTimeStamp(0.04897173367012031);
    msg.setSource(32815U);
    msg.setSourceEntity(93U);
    msg.setDestination(53623U);
    msg.setDestinationEntity(63U);
    msg.req_id = 61488U;
    msg.destination.assign("FIUCJSWGDEXWMMPNNWGZLTXVQVZOTDLBRQSXSXMSDAHORJZUBKLPUAEMKBUFTAVFFJHIDCTOJUKZKFEQJW");
    msg.timeout = 0.4327512286214982;
    msg.range = 0.8368907655221067;
    msg.type = 251U;
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.8639082842229476;
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
    msg.setTimeStamp(0.5735364104934352);
    msg.setSource(5565U);
    msg.setSourceEntity(96U);
    msg.setDestination(47911U);
    msg.setDestinationEntity(29U);
    msg.req_id = 42479U;
    msg.type = 195U;
    msg.status = 32U;
    msg.info.assign("USBOOUWGAEOXGDPXIZDHKTPZEHYNSIANHWZZYYJZBACZRIETUNWPAWHYJCLFCVBHSBMBSGXFEQQJQTYOQGJOXFAGZMGSOSAQNFAQGNVECECNTMHINLCZAITJNBERMSRYFRDGCP");
    msg.range = 0.1637846857902746;

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
    msg.setTimeStamp(0.516144340851368);
    msg.setSource(19270U);
    msg.setSourceEntity(197U);
    msg.setDestination(36491U);
    msg.setDestinationEntity(227U);
    msg.req_id = 2472U;
    msg.type = 164U;
    msg.status = 220U;
    msg.info.assign("PPAFHBBKXHYBAKTDFHZOYOKIBOQIIEBQVGJBZFKMGUXMXKEDMNCTWCTUREWDJUCSOEALJDLBTSDLVNGITCZXLWINZCSPFWWOZQHEXSKTHMARJNFGDQYLMOGRU");
    msg.range = 0.35732759462962194;

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
    msg.setTimeStamp(0.11223736227334669);
    msg.setSource(38903U);
    msg.setSourceEntity(102U);
    msg.setDestination(10963U);
    msg.setDestinationEntity(119U);
    msg.req_id = 38694U;
    msg.type = 19U;
    msg.status = 123U;
    msg.info.assign("KKAUBHJDNSYJEZJVYXHDRDMXMLEZURJENFGAVXQXSHTQZFACLSGFUCYIDCYXINPNMRQVUXURTKOJYIICQGGOVUWSIKIVDLVFMFSJCBBSRFWMOTVEKBNGWTZAWZPZPXKAKPPFUYC");
    msg.range = 0.9722749075321511;

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
    msg.setTimeStamp(0.8454375153145177);
    msg.setSource(5633U);
    msg.setSourceEntity(15U);
    msg.setDestination(60951U);
    msg.setDestinationEntity(163U);
    msg.system.assign("CJPFKIGKKYMQPBYLFUSYGIXFKXVCLTNADNAASFEWFERJTZXNCVPLILPNDTMUJWUSRPHWUMBOIGFBQEDUQIKMDXICFEXBCYNWSVVFQMMEVLUBRYHEJOZAONJGSAOLWRWUDVMUQBZTRRUKBBZSOAHYLWJKZDZJYXHEBYZPGWXXMHIKWQXDGAOJTVHTIQCQDGPUSRPJHZKEIYDBQPPAETRTYODTCVGHZCAXHLVNFMNCNGGHKCZ");
    msg.op = 180U;

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
    msg.setTimeStamp(0.5808105796061597);
    msg.setSource(17303U);
    msg.setSourceEntity(49U);
    msg.setDestination(53871U);
    msg.setDestinationEntity(116U);
    msg.system.assign("LALDHWLSXOIBKQJWTFNXRSUBPAQKEFZXPHDVVQCIQTBMRQWITGHVLCJKHHKWDLBSLPNQDCWMLYFNZRKVOEXGOUGOLRBNCDMFVOSOMZPZMLJTMJBZCFWGYXYUUEGRDMTZECQXLTYEJAQIXYVIBKCWUIPGWDHFVKCDRPZNNHSSAOGYOZMGAVBZHHEJUPHFUIAPYNJSTEDAPRTBARNYERJKOQGFBJGVYXNIQWTEPRS");
    msg.op = 22U;

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
    msg.setTimeStamp(0.426279979431472);
    msg.setSource(28260U);
    msg.setSourceEntity(236U);
    msg.setDestination(35354U);
    msg.setDestinationEntity(215U);
    msg.system.assign("KMHGHMKAXACSDTAPRNCOHDVLLDXIXIRUYXYTM");
    msg.op = 246U;

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
    msg.setTimeStamp(0.6545504411514673);
    msg.setSource(59872U);
    msg.setSourceEntity(160U);
    msg.setDestination(31412U);
    msg.setDestinationEntity(179U);
    msg.value = -5527;

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
    msg.setTimeStamp(0.35584279841531263);
    msg.setSource(65413U);
    msg.setSourceEntity(185U);
    msg.setDestination(58620U);
    msg.setDestinationEntity(231U);
    msg.value = 23993;

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
    msg.setTimeStamp(0.8036132788782551);
    msg.setSource(56852U);
    msg.setSourceEntity(184U);
    msg.setDestination(44101U);
    msg.setDestinationEntity(5U);
    msg.value = 22403;

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
    msg.setTimeStamp(0.5188309528190548);
    msg.setSource(63977U);
    msg.setSourceEntity(88U);
    msg.setDestination(35674U);
    msg.setDestinationEntity(150U);
    msg.value = 0.32098163153695536;

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
    msg.setTimeStamp(0.17048149838065407);
    msg.setSource(2016U);
    msg.setSourceEntity(51U);
    msg.setDestination(35926U);
    msg.setDestinationEntity(45U);
    msg.value = 0.3883080883504241;

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
    msg.setTimeStamp(0.7460870495513806);
    msg.setSource(63356U);
    msg.setSourceEntity(145U);
    msg.setDestination(6722U);
    msg.setDestinationEntity(208U);
    msg.value = 0.5264545532230133;

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
    msg.setTimeStamp(0.8365543027933942);
    msg.setSource(55924U);
    msg.setSourceEntity(86U);
    msg.setDestination(50576U);
    msg.setDestinationEntity(176U);
    msg.value = 0.7874368929119276;

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
    msg.setTimeStamp(0.22940997293103438);
    msg.setSource(40630U);
    msg.setSourceEntity(79U);
    msg.setDestination(23947U);
    msg.setDestinationEntity(74U);
    msg.value = 0.7620902846957298;

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
    msg.setTimeStamp(0.21749876267181656);
    msg.setSource(244U);
    msg.setSourceEntity(213U);
    msg.setDestination(25183U);
    msg.setDestinationEntity(55U);
    msg.value = 0.1372257963804161;

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
    msg.setTimeStamp(0.5874712870594729);
    msg.setSource(57714U);
    msg.setSourceEntity(120U);
    msg.setDestination(26609U);
    msg.setDestinationEntity(219U);
    msg.validity = 10189U;
    msg.type = 22U;
    msg.utc_year = 45163U;
    msg.utc_month = 134U;
    msg.utc_day = 232U;
    msg.utc_time = 0.6914252733162279;
    msg.lat = 0.16881728402034124;
    msg.lon = 0.880314293517102;
    msg.height = 0.8079935495441188;
    msg.satellites = 196U;
    msg.cog = 0.8375567488808019;
    msg.sog = 0.5424966375260308;
    msg.hdop = 0.9456260412484789;
    msg.vdop = 0.09577451257856007;
    msg.hacc = 0.7822630704776522;
    msg.vacc = 0.17184947702286435;

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
    msg.setTimeStamp(0.8237117790238544);
    msg.setSource(4198U);
    msg.setSourceEntity(185U);
    msg.setDestination(50289U);
    msg.setDestinationEntity(9U);
    msg.validity = 17448U;
    msg.type = 215U;
    msg.utc_year = 25948U;
    msg.utc_month = 91U;
    msg.utc_day = 250U;
    msg.utc_time = 0.4200335007902113;
    msg.lat = 0.039858202094515516;
    msg.lon = 0.9029044580621239;
    msg.height = 0.23564908455205424;
    msg.satellites = 1U;
    msg.cog = 0.6716080600607823;
    msg.sog = 0.14962269526668015;
    msg.hdop = 0.4262707836782915;
    msg.vdop = 0.913575656639756;
    msg.hacc = 0.30394934750718605;
    msg.vacc = 0.5574508367563387;

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
    msg.setTimeStamp(0.7255166158315408);
    msg.setSource(48343U);
    msg.setSourceEntity(199U);
    msg.setDestination(5953U);
    msg.setDestinationEntity(150U);
    msg.validity = 65516U;
    msg.type = 165U;
    msg.utc_year = 19998U;
    msg.utc_month = 224U;
    msg.utc_day = 174U;
    msg.utc_time = 0.02255216850910835;
    msg.lat = 0.24348318488009246;
    msg.lon = 0.5951061432328287;
    msg.height = 0.8667027073991092;
    msg.satellites = 135U;
    msg.cog = 0.8372640347837815;
    msg.sog = 0.8322009598367167;
    msg.hdop = 0.619786998971976;
    msg.vdop = 0.29424816099227613;
    msg.hacc = 0.5426736918498418;
    msg.vacc = 0.795754415242178;

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
    msg.setTimeStamp(0.9762644271649964);
    msg.setSource(47299U);
    msg.setSourceEntity(76U);
    msg.setDestination(22521U);
    msg.setDestinationEntity(61U);
    msg.time = 0.26654491309808626;
    msg.phi = 0.3463298912307756;
    msg.theta = 0.45698167142969015;
    msg.psi = 0.1589237977614819;
    msg.psi_magnetic = 0.056814459610430634;

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
    msg.setTimeStamp(0.1176853168483577);
    msg.setSource(64044U);
    msg.setSourceEntity(40U);
    msg.setDestination(45459U);
    msg.setDestinationEntity(144U);
    msg.time = 0.0006152533986109043;
    msg.phi = 0.35134359782632907;
    msg.theta = 0.8228199354290199;
    msg.psi = 0.3516804698453668;
    msg.psi_magnetic = 0.26937564530431357;

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
    msg.setTimeStamp(0.09560190569051863);
    msg.setSource(63214U);
    msg.setSourceEntity(205U);
    msg.setDestination(53793U);
    msg.setDestinationEntity(17U);
    msg.time = 0.1924075755354978;
    msg.phi = 0.11255398662249738;
    msg.theta = 0.26245352677004596;
    msg.psi = 0.8962223803070181;
    msg.psi_magnetic = 0.8977197627225898;

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
    msg.setTimeStamp(0.18384311413530718);
    msg.setSource(10896U);
    msg.setSourceEntity(69U);
    msg.setDestination(21586U);
    msg.setDestinationEntity(166U);
    msg.time = 0.679598802266236;
    msg.x = 0.1889795142633207;
    msg.y = 0.7951540619848438;
    msg.z = 0.2172458154172665;
    msg.timestep = 0.889642000950357;

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
    msg.setTimeStamp(0.674205489794288);
    msg.setSource(47989U);
    msg.setSourceEntity(89U);
    msg.setDestination(47520U);
    msg.setDestinationEntity(252U);
    msg.time = 0.8706914396192995;
    msg.x = 0.949206991082178;
    msg.y = 0.7856086990764105;
    msg.z = 0.565032271476081;
    msg.timestep = 0.5230957745159008;

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
    msg.setTimeStamp(0.4407650944196553);
    msg.setSource(51336U);
    msg.setSourceEntity(210U);
    msg.setDestination(8866U);
    msg.setDestinationEntity(178U);
    msg.time = 0.13188207909158667;
    msg.x = 0.44749367388580485;
    msg.y = 0.03471891750155198;
    msg.z = 0.9627021807236242;
    msg.timestep = 0.567900765261198;

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
    msg.setTimeStamp(0.011051453794497235);
    msg.setSource(32364U);
    msg.setSourceEntity(130U);
    msg.setDestination(19881U);
    msg.setDestinationEntity(6U);
    msg.time = 0.5526707384591106;
    msg.x = 0.9255908801927494;
    msg.y = 0.9577040707432385;
    msg.z = 0.2654087797601533;

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
    msg.setTimeStamp(0.5231181809143975);
    msg.setSource(46184U);
    msg.setSourceEntity(164U);
    msg.setDestination(41710U);
    msg.setDestinationEntity(92U);
    msg.time = 0.4140265706521008;
    msg.x = 0.16471239094457524;
    msg.y = 0.3859821870157141;
    msg.z = 0.11163699824441864;

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
    msg.setTimeStamp(0.13921786807267766);
    msg.setSource(44854U);
    msg.setSourceEntity(178U);
    msg.setDestination(55764U);
    msg.setDestinationEntity(207U);
    msg.time = 0.6927683387436554;
    msg.x = 0.9517165808964266;
    msg.y = 0.706472692387826;
    msg.z = 0.3496370766960478;

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
    msg.setTimeStamp(0.6856588990566724);
    msg.setSource(5681U);
    msg.setSourceEntity(5U);
    msg.setDestination(52880U);
    msg.setDestinationEntity(89U);
    msg.time = 0.1749670533951474;
    msg.x = 0.6097895531465609;
    msg.y = 0.34583747758229877;
    msg.z = 0.45920255944811605;

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
    msg.setTimeStamp(0.8927791324153335);
    msg.setSource(14623U);
    msg.setSourceEntity(249U);
    msg.setDestination(50838U);
    msg.setDestinationEntity(233U);
    msg.time = 0.7554724287310164;
    msg.x = 0.8629728123816852;
    msg.y = 0.853222825802513;
    msg.z = 0.3613046624881787;

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
    msg.setTimeStamp(0.9789897096688231);
    msg.setSource(60424U);
    msg.setSourceEntity(58U);
    msg.setDestination(20242U);
    msg.setDestinationEntity(207U);
    msg.time = 0.24906235092774964;
    msg.x = 0.3986875583393352;
    msg.y = 0.0009823606394324669;
    msg.z = 0.938401749531739;

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
    msg.setTimeStamp(0.300517043963176);
    msg.setSource(41998U);
    msg.setSourceEntity(79U);
    msg.setDestination(36805U);
    msg.setDestinationEntity(145U);
    msg.time = 0.14524594860208107;
    msg.x = 0.6869403889448322;
    msg.y = 0.997594603458777;
    msg.z = 0.47726803107010385;

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
    msg.setTimeStamp(0.3342788679126236);
    msg.setSource(27193U);
    msg.setSourceEntity(130U);
    msg.setDestination(11747U);
    msg.setDestinationEntity(62U);
    msg.time = 0.8838106352654682;
    msg.x = 0.09945561337422182;
    msg.y = 0.5689895710242088;
    msg.z = 0.4475923062818187;

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
    msg.setTimeStamp(0.5485354317342014);
    msg.setSource(3235U);
    msg.setSourceEntity(236U);
    msg.setDestination(20753U);
    msg.setDestinationEntity(76U);
    msg.time = 0.5619809464638711;
    msg.x = 0.0843550466653542;
    msg.y = 0.1081547838216792;
    msg.z = 0.6237478566796532;

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
    msg.setTimeStamp(0.9144448822521661);
    msg.setSource(28585U);
    msg.setSourceEntity(145U);
    msg.setDestination(63679U);
    msg.setDestinationEntity(236U);
    msg.validity = 15U;
    msg.x = 0.7459848665793263;
    msg.y = 0.20394121325489478;
    msg.z = 0.18094049975898818;

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
    msg.setTimeStamp(0.17362711252562102);
    msg.setSource(17317U);
    msg.setSourceEntity(220U);
    msg.setDestination(59025U);
    msg.setDestinationEntity(203U);
    msg.validity = 228U;
    msg.x = 0.3396298257938897;
    msg.y = 0.2413896109002518;
    msg.z = 0.6691294296572098;

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
    msg.setTimeStamp(0.9355482904990131);
    msg.setSource(48441U);
    msg.setSourceEntity(30U);
    msg.setDestination(54545U);
    msg.setDestinationEntity(124U);
    msg.validity = 195U;
    msg.x = 0.6885982333917292;
    msg.y = 0.9561172101605981;
    msg.z = 0.7727929581079258;

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
    msg.setTimeStamp(0.5546737894816659);
    msg.setSource(23988U);
    msg.setSourceEntity(47U);
    msg.setDestination(55211U);
    msg.setDestinationEntity(64U);
    msg.validity = 146U;
    msg.x = 0.40956293766423635;
    msg.y = 0.6904682372268593;
    msg.z = 0.2600445792261913;

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
    msg.setTimeStamp(0.04193475634134569);
    msg.setSource(48277U);
    msg.setSourceEntity(167U);
    msg.setDestination(3423U);
    msg.setDestinationEntity(97U);
    msg.validity = 68U;
    msg.x = 0.7740420397508417;
    msg.y = 0.23119515140815194;
    msg.z = 0.5347984356211294;

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
    msg.setTimeStamp(0.42143210088772687);
    msg.setSource(20326U);
    msg.setSourceEntity(144U);
    msg.setDestination(28296U);
    msg.setDestinationEntity(64U);
    msg.validity = 195U;
    msg.x = 0.19050809355510434;
    msg.y = 0.23775625742995465;
    msg.z = 0.2219827726306931;

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
    msg.setTimeStamp(0.9202839878448172);
    msg.setSource(43490U);
    msg.setSourceEntity(234U);
    msg.setDestination(64952U);
    msg.setDestinationEntity(87U);
    msg.time = 0.257761326410485;
    msg.x = 0.9267931160856538;
    msg.y = 0.7177340475206349;
    msg.z = 0.41863288139357435;

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
    msg.setTimeStamp(0.059613666265951326);
    msg.setSource(25307U);
    msg.setSourceEntity(97U);
    msg.setDestination(14632U);
    msg.setDestinationEntity(137U);
    msg.time = 0.42833414267147885;
    msg.x = 0.9688079486831321;
    msg.y = 0.28378128037965655;
    msg.z = 0.7443939702476807;

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
    msg.setTimeStamp(0.7035158052879943);
    msg.setSource(31702U);
    msg.setSourceEntity(37U);
    msg.setDestination(35416U);
    msg.setDestinationEntity(239U);
    msg.time = 0.5929169430640471;
    msg.x = 0.1395181533180383;
    msg.y = 0.3220972933426497;
    msg.z = 0.7820153542229374;

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
    msg.setTimeStamp(0.9292683876960531);
    msg.setSource(43270U);
    msg.setSourceEntity(197U);
    msg.setDestination(19785U);
    msg.setDestinationEntity(129U);
    msg.validity = 196U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.23280881933792597;
    tmp_msg_0.beam_height = 0.0069545163404841626;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.9919173641396684;

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
    msg.setTimeStamp(0.006236446635008219);
    msg.setSource(45372U);
    msg.setSourceEntity(181U);
    msg.setDestination(20807U);
    msg.setDestinationEntity(216U);
    msg.validity = 95U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.38063319394688366;
    tmp_msg_0.beam_height = 0.6489055836429916;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.4249449164091129;

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
    msg.setTimeStamp(0.5333138910136355);
    msg.setSource(4709U);
    msg.setSourceEntity(41U);
    msg.setDestination(9075U);
    msg.setDestinationEntity(103U);
    msg.validity = 219U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.7831722013420198;
    tmp_msg_0.y = 0.4306772275729792;
    tmp_msg_0.z = 0.9820217561031035;
    tmp_msg_0.phi = 0.7507487039101097;
    tmp_msg_0.theta = 0.6056779795086371;
    tmp_msg_0.psi = 0.17713273234660998;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.5784104383473311;

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
    msg.setTimeStamp(0.10743406836480629);
    msg.setSource(52655U);
    msg.setSourceEntity(209U);
    msg.setDestination(15690U);
    msg.setDestinationEntity(98U);
    msg.value = 0.3945830685405084;

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
    msg.setTimeStamp(0.12059321010067481);
    msg.setSource(14734U);
    msg.setSourceEntity(159U);
    msg.setDestination(36599U);
    msg.setDestinationEntity(15U);
    msg.value = 0.43097448010785055;

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
    msg.setTimeStamp(0.9963405238354899);
    msg.setSource(5318U);
    msg.setSourceEntity(46U);
    msg.setDestination(27365U);
    msg.setDestinationEntity(123U);
    msg.value = 0.29309387508792917;

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
    msg.setTimeStamp(0.011502240710268952);
    msg.setSource(22718U);
    msg.setSourceEntity(75U);
    msg.setDestination(49027U);
    msg.setDestinationEntity(123U);
    msg.value = 0.6042907941425232;

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
    msg.setTimeStamp(0.9343946970882409);
    msg.setSource(52937U);
    msg.setSourceEntity(38U);
    msg.setDestination(6614U);
    msg.setDestinationEntity(228U);
    msg.value = 0.46577180980427546;

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
    msg.setTimeStamp(0.10710450103955671);
    msg.setSource(62370U);
    msg.setSourceEntity(155U);
    msg.setDestination(6458U);
    msg.setDestinationEntity(108U);
    msg.value = 0.9886536755612719;

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
    msg.setTimeStamp(0.398785843104135);
    msg.setSource(54808U);
    msg.setSourceEntity(151U);
    msg.setDestination(8704U);
    msg.setDestinationEntity(226U);
    msg.value = 0.6592949331157532;

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
    msg.setTimeStamp(0.4158261955935323);
    msg.setSource(59608U);
    msg.setSourceEntity(243U);
    msg.setDestination(32070U);
    msg.setDestinationEntity(118U);
    msg.value = 0.4459116664848247;

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
    msg.setTimeStamp(0.1100320065236291);
    msg.setSource(54345U);
    msg.setSourceEntity(18U);
    msg.setDestination(31209U);
    msg.setDestinationEntity(3U);
    msg.value = 0.31957655834791654;

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
    msg.setTimeStamp(0.6547427747311632);
    msg.setSource(16655U);
    msg.setSourceEntity(32U);
    msg.setDestination(13597U);
    msg.setDestinationEntity(112U);
    msg.value = 0.5708280143771021;

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
    msg.setTimeStamp(0.9018760184881136);
    msg.setSource(9612U);
    msg.setSourceEntity(177U);
    msg.setDestination(50961U);
    msg.setDestinationEntity(238U);
    msg.value = 0.5001096565215252;

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
    msg.setTimeStamp(0.647216302126456);
    msg.setSource(27276U);
    msg.setSourceEntity(100U);
    msg.setDestination(449U);
    msg.setDestinationEntity(208U);
    msg.value = 0.3250256740600649;

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
    msg.setTimeStamp(0.845402191539102);
    msg.setSource(47703U);
    msg.setSourceEntity(233U);
    msg.setDestination(27426U);
    msg.setDestinationEntity(76U);
    msg.value = 0.2705183961518688;

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
    msg.setTimeStamp(0.7554372849711812);
    msg.setSource(47573U);
    msg.setSourceEntity(80U);
    msg.setDestination(54715U);
    msg.setDestinationEntity(104U);
    msg.value = 0.5721894157733433;

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
    msg.setTimeStamp(0.3518291508587146);
    msg.setSource(2117U);
    msg.setSourceEntity(98U);
    msg.setDestination(10234U);
    msg.setDestinationEntity(52U);
    msg.value = 0.585548138298604;

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
    msg.setTimeStamp(0.34339811944566334);
    msg.setSource(14554U);
    msg.setSourceEntity(217U);
    msg.setDestination(47724U);
    msg.setDestinationEntity(28U);
    msg.value = 0.2909733208167863;

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
    msg.setTimeStamp(0.2062776317579953);
    msg.setSource(18345U);
    msg.setSourceEntity(60U);
    msg.setDestination(36008U);
    msg.setDestinationEntity(210U);
    msg.value = 0.2622814109836905;

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
    msg.setTimeStamp(0.0989001661244171);
    msg.setSource(32510U);
    msg.setSourceEntity(236U);
    msg.setDestination(29556U);
    msg.setDestinationEntity(230U);
    msg.value = 0.06848089296031457;

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
    msg.setTimeStamp(0.4119105274503525);
    msg.setSource(10521U);
    msg.setSourceEntity(153U);
    msg.setDestination(27046U);
    msg.setDestinationEntity(229U);
    msg.value = 0.2735716703984411;

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
    msg.setTimeStamp(0.1727446002069586);
    msg.setSource(38524U);
    msg.setSourceEntity(13U);
    msg.setDestination(38172U);
    msg.setDestinationEntity(205U);
    msg.value = 0.6494124752253637;

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
    msg.setTimeStamp(0.34658481316916145);
    msg.setSource(21755U);
    msg.setSourceEntity(150U);
    msg.setDestination(25734U);
    msg.setDestinationEntity(180U);
    msg.value = 0.43641528773556204;

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
    msg.setTimeStamp(0.07774519196836449);
    msg.setSource(55199U);
    msg.setSourceEntity(103U);
    msg.setDestination(10289U);
    msg.setDestinationEntity(55U);
    msg.value = 0.5457940893205034;

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
    msg.setTimeStamp(0.7680715829523539);
    msg.setSource(8270U);
    msg.setSourceEntity(244U);
    msg.setDestination(53886U);
    msg.setDestinationEntity(5U);
    msg.value = 0.006637477448024565;

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
    msg.setTimeStamp(0.7203618595660207);
    msg.setSource(20089U);
    msg.setSourceEntity(144U);
    msg.setDestination(45163U);
    msg.setDestinationEntity(13U);
    msg.value = 0.8693510674307489;

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
    msg.setTimeStamp(0.7543654854996836);
    msg.setSource(5377U);
    msg.setSourceEntity(67U);
    msg.setDestination(10022U);
    msg.setDestinationEntity(87U);
    msg.direction = 0.9347109007406073;
    msg.speed = 0.9877867289547945;
    msg.turbulence = 0.1355915683501977;

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
    msg.setTimeStamp(0.17073518959033018);
    msg.setSource(24013U);
    msg.setSourceEntity(20U);
    msg.setDestination(39340U);
    msg.setDestinationEntity(44U);
    msg.direction = 0.933098144347156;
    msg.speed = 0.8126805110076358;
    msg.turbulence = 0.7410461018068789;

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
    msg.setTimeStamp(0.3226467256064597);
    msg.setSource(8040U);
    msg.setSourceEntity(92U);
    msg.setDestination(8183U);
    msg.setDestinationEntity(58U);
    msg.direction = 0.19883970047033972;
    msg.speed = 0.9671483114508471;
    msg.turbulence = 0.28521835611785595;

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
    msg.setTimeStamp(0.11678356889740493);
    msg.setSource(16330U);
    msg.setSourceEntity(89U);
    msg.setDestination(17596U);
    msg.setDestinationEntity(160U);
    msg.value = 0.932492027042354;

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
    msg.setTimeStamp(0.3993355518520306);
    msg.setSource(42205U);
    msg.setSourceEntity(210U);
    msg.setDestination(59429U);
    msg.setDestinationEntity(254U);
    msg.value = 0.4453313803128097;

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
    msg.setTimeStamp(0.22281212346727186);
    msg.setSource(41872U);
    msg.setSourceEntity(49U);
    msg.setDestination(18702U);
    msg.setDestinationEntity(100U);
    msg.value = 0.21595739886745002;

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
    msg.setTimeStamp(0.3461589093275267);
    msg.setSource(35063U);
    msg.setSourceEntity(134U);
    msg.setDestination(25928U);
    msg.setDestinationEntity(50U);
    msg.value.assign("SJBCJWMADSEABPGYDGWZKVVGGOXQFRLFXDEKWGAYHATLIUFIBQTCJYAZVSRBFYVJDGKCIYFEAVQDPEZRZJJYOQRRFSCQVSJBPHUHMBYEEWNVPIMNKUBIVULRRBAZUWUGZNWSNQYSBPVICAHTWFWCYNKIOLFKOCFLIUXMUGHPXZHMMVNWTZILXLTSUZPROKCLHXNZLBPXOSMEXQTTJDPPNEDKAEKGRJAQGINNHOUDOXQXMEKFLHTHWOQYC");

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
    msg.setTimeStamp(0.9034924133519675);
    msg.setSource(46499U);
    msg.setSourceEntity(40U);
    msg.setDestination(4288U);
    msg.setDestinationEntity(104U);
    msg.value.assign("CSESNUPCYGUBEMNKGGEXEGULUACSWVIKWLRBMHJZAAQBXFNVGSQAIVTWYFCVHOUOFIMSHWIMRWEZYBOAXPDWLTQXHBPRXITJYPCFUHTZLCCKTKVDQYGTBPHWJNXMAKZTQEMNOJLLNXXPQMGZBHOSHDJMKTVQAAJKOHVPKZWDVYNF");

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
    msg.setTimeStamp(0.9992881549088407);
    msg.setSource(35078U);
    msg.setSourceEntity(128U);
    msg.setDestination(35209U);
    msg.setDestinationEntity(193U);
    msg.value.assign("UFEKXBVSCOMFTITTMYLMBOWGFUOHXJZSCDAWHBJLNIVVNSZMZQXCOTHYCRWUALOIDPAZZHFQJMLWTYKLUAMHNCZBS");

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
    msg.setTimeStamp(0.23141781430742792);
    msg.setSource(53338U);
    msg.setSourceEntity(105U);
    msg.setDestination(20098U);
    msg.setDestinationEntity(81U);
    const signed char tmp_msg_0[] = {-79, -13, 99, -126, 24, -16, 29, -72, -31, 91, 88, -73, 49, 92, 34, 9, 10, -17, -55, -119, 123, 97, 29, 85, -13, 51, 103, -63, -118, -38, -82, -49, -57, -71, -92, -85, -26, 101, 111, 15, 26, 98, 88, -69, 13, -90, 51, -116, -43, -69, -56, 21, 9, -62, 3, 76, -28, 7, -17, -122, -106, 92, 25, -20, -67, 102, 93, -64, 5, 22, -80, 62, -90, -70, 33, 9, -19, -128, 20, -80, 49, -105, 25, 72, 109, -65, 47, -40, -13, 1, -10, -94, 71, 76, -59, 16, 42, -20, -41, -114, 28, 37, -2};
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
    msg.setTimeStamp(0.47326413015628543);
    msg.setSource(43510U);
    msg.setSourceEntity(151U);
    msg.setDestination(48949U);
    msg.setDestinationEntity(219U);
    const signed char tmp_msg_0[] = {-127, -66, 105, 56, 115, 47, 59, -113, 9, -30, 54, 52, -87, -61, -77, -115, -2, 68, -77, 19, -17, 41, -122, 89, -34, -119, 75, 75, 101, -69, 113, -124, -28, -40, -40, 21, -106, 77, -41, -82, -33, 123, 10, -128, 7, 70, -116, -89, -52, 86, -13, -68, -2, 26, 36, 6, -26, 103, -97, 9, 112, 24, 105, -100, -121, -52, -47, 45, 96, -28, 100, 19, 32, -97, -121, -71, -74, 112, -54, -85, -103, 109, 71, 117, 103, -71, 76, 119, -94, -55, 86, 90, -60, -37, 5, -3, -78, -123, -93, 23, -36, 13, -111, 107, -30, 15, 122, 82, 55, 12, 38, -115, 64, -25, 69, -95, 117, -40, -19, -26, -112, 49, -43, -56, 29, 28, -51, 36, -63, 65, 74, -67, -125, 67, -26, -67, 102, -111, -101, 73, 31, 61, -24, 30, 42, -21, 96, 120, -115, 87, -114, 116, -87, -31, 60, -60, -88, 98, 108, 48, 3, -80, 105, -46, 88, 4, 76, 80, -69, -69, 5, -38, 85, -79, 57, -2, -29, 64, 60, 39, 123, -111, 20, -102, 74, 110, -78, -108, 37, 114, -75, 46, -48, -49, 87, -34, -109, -114, 47, -86, 33, 67, 27, 74, 71, 17, -37, -58, -87, 118, -58, 6, 40, 120, -109};
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
    msg.setTimeStamp(0.11353791431728943);
    msg.setSource(22455U);
    msg.setSourceEntity(87U);
    msg.setDestination(16460U);
    msg.setDestinationEntity(165U);
    const signed char tmp_msg_0[] = {-49, 102, -56, -66, -40, 6, -64, -91, -40, -27, 36, -51, -50, 100, 84, -8, 9, 112, -62, -6, 13, -122, 7, -8, 20, 61, 6, 4, -22, -111, 67, 60, 75, -28, 4, 106, 113, -128, -87, 52, -101, 5, -56, 62, -125, 15, 1, 21, 78, 79, -66, 83, 110, -83, -1, -117, 110, 35, 90, 107, 105, 118, -88, -27, -87, 73, -19, -47, 39, 77, -36, 123, 58, 88, -70, -84, -50, 37, -125, -118, 81, -39, 117, -19, 32, 52, 120, 3, 100, 107, -19, -92, -87, 113, 66, -61, -104, 88, -13, 31, -104, -5, -78, 63, -35, -88, -72, 18, 38, -80, 15, -107, -101, -87, 21, 118, 12, 61, 81, -128, 50, -30, -84, -82, 51, 22, 23, -96, -107, -38, 80, -22, 111, -71, -48, 39, 23, -104, 68, -21, -61, 30, -53, -1, -23, -72, 111, 124, 78, -47, 77, 13, -42, -126, 42, 91, -54, -64, 75, -51, 124, 125, 105, -95, 23, -31, 16, -36, -98, -68, -36};
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
    msg.setTimeStamp(0.5180674287984554);
    msg.setSource(30199U);
    msg.setSourceEntity(239U);
    msg.setDestination(55706U);
    msg.setDestinationEntity(131U);
    msg.value = 0.6784042430295792;

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
    msg.setTimeStamp(0.9705609679838074);
    msg.setSource(7198U);
    msg.setSourceEntity(196U);
    msg.setDestination(46038U);
    msg.setDestinationEntity(147U);
    msg.value = 0.23483330665085278;

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
    msg.setTimeStamp(0.8118314352908332);
    msg.setSource(61392U);
    msg.setSourceEntity(183U);
    msg.setDestination(17113U);
    msg.setDestinationEntity(130U);
    msg.value = 0.4823446135250302;

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
    msg.setTimeStamp(0.47403886858671695);
    msg.setSource(49144U);
    msg.setSourceEntity(85U);
    msg.setDestination(41450U);
    msg.setDestinationEntity(163U);
    msg.type = 180U;
    msg.frequency = 3016823749U;
    msg.min_range = 669U;
    msg.max_range = 54766U;
    msg.bits_per_point = 217U;
    msg.scale_factor = 0.8935572604219736;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.25265749960167305;
    tmp_msg_0.beam_height = 0.6561277094763479;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-112, -76, 126, 95, -19, -32, -115, 97, 33, -60, -39, -35, 116, 17, -43, 44, 72, -16, -46, 3, -35, 98, 90, 12, 46, -73, -121, -126, -100, 115, 48, 80, 11, 102, -97, 12, 11, 30, 35, 36, 42, -27, -72, 7, 34, -87, -126, -72, -55, 73, -93, -89, -79, -63, -32, -12, -102, -108};
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
    msg.setTimeStamp(0.4678069205582126);
    msg.setSource(985U);
    msg.setSourceEntity(176U);
    msg.setDestination(21331U);
    msg.setDestinationEntity(31U);
    msg.type = 71U;
    msg.frequency = 1265843495U;
    msg.min_range = 6793U;
    msg.max_range = 47808U;
    msg.bits_per_point = 122U;
    msg.scale_factor = 0.5135833237178992;
    const signed char tmp_msg_0[] = {-34, 14, -60, 45, 8, 34, 10, 67, -108, -63, -117, 41, 4, 38, 76, 89, 37, -22, 44, 103, -23, -64, -87, 21, -46, -104, -106, 71, -14, 100, 67, 94, 54, 40, 91, 51, -3, 49, -69, 18, 18, 111, -16, 126, 39, -80, 11, -37, 126, -28, 36, 24, -1, -82, 26, 41, -78, 79, -95, 39, 46, -94, 20, 92, -34, -28, 77, 22, 65, 72, -25, -71, -63, -70, 50, 28, -32, 32, -22, 43, -114, 93, -52, 123, -105, -85, 122, 110, -42, 89, -93, -49, 122, -108, -11, -81, 42, 102, 116, -50, 23, 20, 106, -1, 9, 21, 107, 123, 120, -52, -68, -102, 45, -30, -55, -106, 121, 45, 126, -21, 16, 13, -9, 81, 106, 60, 75, -35, -47, -2, -71, -109, 106, -34, 52, -99, 87, 79, -29, 87, -120, 107, -65, -75, -75, -7, 47, 82, -14, 92, -97, 123, 104, -73, 28, 116, 70, 51, 25, 8, 56, -73, 13, -110, 94, -18, 82, -115, 56, 8, -81, 34, -122, 4, 26, -23, 17, -88, -79, -11, 61, -84, 3, -106, -105, 41, 57, -10, 88, 93, 62, -63, -56, -24, 103, -22, -21, 85, 118, 68, 111, 80, 40, -108, 36, 83, -75, -2, -32, 102, 13, -32, -42, 104, 49, 84, -55, -13, -40, -35, 80, 16, 101, -33, -62, -74, 79, 51, -40, 121, 118, -89, -25, -95, -36};
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
    msg.setTimeStamp(0.5754515515559366);
    msg.setSource(7746U);
    msg.setSourceEntity(41U);
    msg.setDestination(33001U);
    msg.setDestinationEntity(48U);
    msg.type = 18U;
    msg.frequency = 702731506U;
    msg.min_range = 57769U;
    msg.max_range = 42594U;
    msg.bits_per_point = 225U;
    msg.scale_factor = 0.22636940547685236;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.607958094659148;
    tmp_msg_0.beam_height = 0.18920146009453842;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {33, 41, 105, -84, 92, -19, -128, -119, 95, 52, 17, 82, 36, 123, 29, 62, -27, 28, 53, -33, 85, -127, -86, 38, 75, -111, 30, -67, 13, -115, 115, 101, 21, 71, 62, -18, 27, -39, 80, 109, -70, -59, 9, 24, 82, -2, -2, -44, -62, 80, 1, -20, 36, 51, 62, -93, 62, 121, 49, -3, 8, 57, 109, 78, 8, 118, 107, -78, 118, -7, -57, 31, -84, -80, 90, 31, 124, 67, 72, 121, -113, -122, -89, -66, -73, -40, -95, 20, -39, 83, 62, -94, 4, 124, -8, -47, 99, -34, 36, 125, -123, 3, 4, -89, -51, -9, 73, 125, -25, 7, 63, 97, 29, -27, 3, -79, 108, 13, 59, 115, 87, -53, 100, -6, 10, -3, -119, 34, -82, -90, -75, 48, 65, -13, -113, 17, 102, 24, -58, 89, -34, 16, 102, -84, 80, -64, 45, -59, -24, -8, 95, -17, -42, -120, 120, -117, 70, 88, 113, -102, -109, 9, 31, 87, 55, -20, 121, 68, -79, 67, -110, -41, 105, -87, 24, 91};
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
    msg.setTimeStamp(0.12396103013023418);
    msg.setSource(18180U);
    msg.setSourceEntity(64U);
    msg.setDestination(53618U);
    msg.setDestinationEntity(13U);

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
    msg.setTimeStamp(0.7636376700339031);
    msg.setSource(18768U);
    msg.setSourceEntity(199U);
    msg.setDestination(18819U);
    msg.setDestinationEntity(61U);

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
    msg.setTimeStamp(0.9928313087532595);
    msg.setSource(38455U);
    msg.setSourceEntity(101U);
    msg.setDestination(12025U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.24103608750817906);
    msg.setSource(42272U);
    msg.setSourceEntity(28U);
    msg.setDestination(62380U);
    msg.setDestinationEntity(136U);
    msg.op = 110U;

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
    msg.setTimeStamp(0.8377993591552253);
    msg.setSource(24203U);
    msg.setSourceEntity(19U);
    msg.setDestination(43080U);
    msg.setDestinationEntity(14U);
    msg.op = 218U;

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
    msg.setTimeStamp(0.27126381973178715);
    msg.setSource(19283U);
    msg.setSourceEntity(65U);
    msg.setDestination(44004U);
    msg.setDestinationEntity(188U);
    msg.op = 35U;

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
    msg.setTimeStamp(0.9342651081699749);
    msg.setSource(48927U);
    msg.setSourceEntity(207U);
    msg.setDestination(65494U);
    msg.setDestinationEntity(68U);
    msg.value = 0.9718514339329888;
    msg.confidence = 0.448076578944438;
    msg.opmodes.assign("JOROFLVNVGYPMYDJYWPYTE");

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
    msg.setTimeStamp(0.11886817082090528);
    msg.setSource(49511U);
    msg.setSourceEntity(185U);
    msg.setDestination(26793U);
    msg.setDestinationEntity(127U);
    msg.value = 0.029518239391796874;
    msg.confidence = 0.8049442121555407;
    msg.opmodes.assign("DTUTGIBOAKPRPVUBSEPPUHUGFYYCVGAZYHKQPUEXTDBXSUDQOJTOJVRFRKSMVZWHFPNILLWBARXFREXCBXKJLBZYXBYZFMCDMKNMMQMXACCSNKJCVQDWWHR");

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
    msg.setTimeStamp(0.3499740181910359);
    msg.setSource(16839U);
    msg.setSourceEntity(230U);
    msg.setDestination(16149U);
    msg.setDestinationEntity(112U);
    msg.value = 0.735031210949885;
    msg.confidence = 0.26052060502109464;
    msg.opmodes.assign("MKLILPPNCZLNWNDTWYJCSGSFNTMJFQRLIYNJVIXEOAAXRMYCRQOHUDBBFKPZUQBUJZVXGKLYFUVQYAFPUHWPBKZOGBTHIAYBAZIIMGNFSSLKVUQKRKQSQPRAEVOXBKATYIYTOPJHPDTINSNMGPTHMFCZVOCICJOUJRRZEDVOMQDGRXVCXNFEDMUPDJEKXCSTGZBTNUHHSWWEGLGWLIXEXDMWCWEWSARDS");

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
    msg.setTimeStamp(0.056660240007927576);
    msg.setSource(8904U);
    msg.setSourceEntity(190U);
    msg.setDestination(530U);
    msg.setDestinationEntity(201U);
    msg.itow = 1891881713U;
    msg.lat = 0.5596827568728484;
    msg.lon = 0.954015993618019;
    msg.height_ell = 0.5708159586560284;
    msg.height_sea = 0.06775681240219167;
    msg.hacc = 0.666171982052851;
    msg.vacc = 0.7565783757814311;
    msg.vel_n = 0.7704805886531773;
    msg.vel_e = 0.04576266136403495;
    msg.vel_d = 0.15099305155347909;
    msg.speed = 0.1813635730638844;
    msg.gspeed = 0.43176774754046066;
    msg.heading = 0.46116335572676814;
    msg.sacc = 0.8077306131339541;
    msg.cacc = 0.8590125702997315;

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
    msg.setTimeStamp(0.6838894823568813);
    msg.setSource(42509U);
    msg.setSourceEntity(208U);
    msg.setDestination(49251U);
    msg.setDestinationEntity(242U);
    msg.itow = 2113814463U;
    msg.lat = 0.018359615784548367;
    msg.lon = 0.6715209351968878;
    msg.height_ell = 0.599793279170459;
    msg.height_sea = 0.28324224844104706;
    msg.hacc = 0.7486888021559295;
    msg.vacc = 0.5025863693481111;
    msg.vel_n = 0.18176488376589495;
    msg.vel_e = 0.32030192196407603;
    msg.vel_d = 0.38347125458926523;
    msg.speed = 0.6441568965111905;
    msg.gspeed = 0.8236150688349408;
    msg.heading = 0.34545409886976786;
    msg.sacc = 0.7705546519637777;
    msg.cacc = 0.7611282868847088;

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
    msg.setTimeStamp(0.35267582737658043);
    msg.setSource(41814U);
    msg.setSourceEntity(118U);
    msg.setDestination(52610U);
    msg.setDestinationEntity(214U);
    msg.itow = 3238095680U;
    msg.lat = 0.11345495355855695;
    msg.lon = 0.4854062775425235;
    msg.height_ell = 0.1285977761542163;
    msg.height_sea = 0.30081072682818855;
    msg.hacc = 0.5367197736696874;
    msg.vacc = 0.025225584679685276;
    msg.vel_n = 0.47663337702269715;
    msg.vel_e = 0.4483112312085461;
    msg.vel_d = 0.6629726694178006;
    msg.speed = 0.6955258341418052;
    msg.gspeed = 0.8214780270449571;
    msg.heading = 0.04881181024736814;
    msg.sacc = 0.7097936091191253;
    msg.cacc = 0.6123255533717076;

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
    msg.setTimeStamp(0.7045581166192226);
    msg.setSource(35246U);
    msg.setSourceEntity(20U);
    msg.setDestination(60642U);
    msg.setDestinationEntity(182U);
    msg.id = 114U;
    msg.value = 0.6657210374588056;

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
    msg.setTimeStamp(0.604687184924242);
    msg.setSource(36738U);
    msg.setSourceEntity(6U);
    msg.setDestination(1549U);
    msg.setDestinationEntity(35U);
    msg.id = 216U;
    msg.value = 0.3101033499178619;

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
    msg.setTimeStamp(0.6654881634794256);
    msg.setSource(23816U);
    msg.setSourceEntity(51U);
    msg.setDestination(32491U);
    msg.setDestinationEntity(233U);
    msg.id = 238U;
    msg.value = 0.268168906704507;

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
    msg.setTimeStamp(0.5573491898356957);
    msg.setSource(59500U);
    msg.setSourceEntity(228U);
    msg.setDestination(47233U);
    msg.setDestinationEntity(65U);
    msg.x = 0.6925027059599838;
    msg.y = 0.5479209433177753;
    msg.z = 0.12223126782666738;
    msg.phi = 0.5302701158494186;
    msg.theta = 0.6908817019131159;
    msg.psi = 0.7889130534260632;

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
    msg.setTimeStamp(0.5917188059410319);
    msg.setSource(33720U);
    msg.setSourceEntity(161U);
    msg.setDestination(30484U);
    msg.setDestinationEntity(202U);
    msg.x = 0.6737554298054108;
    msg.y = 0.9312732167799534;
    msg.z = 0.5446483125885481;
    msg.phi = 0.2763906976079661;
    msg.theta = 0.7368705590680611;
    msg.psi = 0.9186126842618402;

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
    msg.setTimeStamp(0.5430836618349018);
    msg.setSource(2148U);
    msg.setSourceEntity(129U);
    msg.setDestination(25982U);
    msg.setDestinationEntity(192U);
    msg.x = 0.7460633052648421;
    msg.y = 0.1168074673150874;
    msg.z = 0.1434243096969856;
    msg.phi = 0.80450656191068;
    msg.theta = 0.5691023082078498;
    msg.psi = 0.648106142038699;

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
    msg.setTimeStamp(0.4607386758416907);
    msg.setSource(23912U);
    msg.setSourceEntity(103U);
    msg.setDestination(2245U);
    msg.setDestinationEntity(136U);
    msg.beam_width = 0.5577514066153851;
    msg.beam_height = 0.900241429287263;

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
    msg.setTimeStamp(0.7384330414975147);
    msg.setSource(6456U);
    msg.setSourceEntity(95U);
    msg.setDestination(31387U);
    msg.setDestinationEntity(69U);
    msg.beam_width = 0.6138815200203235;
    msg.beam_height = 0.9203661951646982;

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
    msg.setTimeStamp(0.16940773561626765);
    msg.setSource(27016U);
    msg.setSourceEntity(71U);
    msg.setDestination(13158U);
    msg.setDestinationEntity(133U);
    msg.beam_width = 0.5465165250198697;
    msg.beam_height = 0.9480462444208441;

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
    msg.setTimeStamp(0.5606453484071984);
    msg.setSource(49687U);
    msg.setSourceEntity(3U);
    msg.setDestination(50642U);
    msg.setDestinationEntity(253U);
    msg.sane = 109U;

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
    msg.setTimeStamp(0.9589091284630086);
    msg.setSource(16695U);
    msg.setSourceEntity(20U);
    msg.setDestination(27789U);
    msg.setDestinationEntity(110U);
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
    msg.setTimeStamp(0.39545442471593617);
    msg.setSource(46994U);
    msg.setSourceEntity(105U);
    msg.setDestination(56411U);
    msg.setDestinationEntity(215U);
    msg.sane = 152U;

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
    msg.setTimeStamp(0.06847865690231414);
    msg.setSource(38735U);
    msg.setSourceEntity(88U);
    msg.setDestination(45058U);
    msg.setDestinationEntity(191U);
    msg.value = 0.010135892956274817;

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
    msg.setTimeStamp(0.9514680653772515);
    msg.setSource(41121U);
    msg.setSourceEntity(19U);
    msg.setDestination(64031U);
    msg.setDestinationEntity(131U);
    msg.value = 0.1751475506018889;

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
    msg.setTimeStamp(0.8958875527480266);
    msg.setSource(31667U);
    msg.setSourceEntity(84U);
    msg.setDestination(48929U);
    msg.setDestinationEntity(132U);
    msg.value = 0.6746267355414263;

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
    msg.setTimeStamp(0.7791393877681208);
    msg.setSource(1861U);
    msg.setSourceEntity(118U);
    msg.setDestination(21269U);
    msg.setDestinationEntity(202U);
    msg.value = 0.6528238288522765;

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
    msg.setTimeStamp(0.08338015620119354);
    msg.setSource(53979U);
    msg.setSourceEntity(2U);
    msg.setDestination(7819U);
    msg.setDestinationEntity(187U);
    msg.value = 0.34180202924891545;

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
    msg.setTimeStamp(0.7345251251280511);
    msg.setSource(4314U);
    msg.setSourceEntity(234U);
    msg.setDestination(61550U);
    msg.setDestinationEntity(112U);
    msg.value = 0.9182087356656351;

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
    msg.setTimeStamp(0.0037071317938246473);
    msg.setSource(6857U);
    msg.setSourceEntity(115U);
    msg.setDestination(36292U);
    msg.setDestinationEntity(218U);
    msg.value = 0.5587129358923445;

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
    msg.setTimeStamp(0.7478457698584151);
    msg.setSource(16875U);
    msg.setSourceEntity(77U);
    msg.setDestination(59017U);
    msg.setDestinationEntity(75U);
    msg.value = 0.16134061148500944;

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
    msg.setTimeStamp(0.5201646357987646);
    msg.setSource(20628U);
    msg.setSourceEntity(142U);
    msg.setDestination(63955U);
    msg.setDestinationEntity(196U);
    msg.value = 0.6005292163734157;

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
    msg.setTimeStamp(0.10342810009329095);
    msg.setSource(64545U);
    msg.setSourceEntity(204U);
    msg.setDestination(57223U);
    msg.setDestinationEntity(228U);
    msg.value = 0.2270801035975446;

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
    msg.setTimeStamp(0.7807184651545048);
    msg.setSource(10336U);
    msg.setSourceEntity(236U);
    msg.setDestination(1743U);
    msg.setDestinationEntity(187U);
    msg.value = 0.6259642576908766;

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
    msg.setTimeStamp(0.46101782910341993);
    msg.setSource(64848U);
    msg.setSourceEntity(179U);
    msg.setDestination(20337U);
    msg.setDestinationEntity(183U);
    msg.value = 0.08938535845667983;

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
    msg.setTimeStamp(0.5788123539347467);
    msg.setSource(11396U);
    msg.setSourceEntity(121U);
    msg.setDestination(3675U);
    msg.setDestinationEntity(239U);
    msg.value = 0.9494853574931774;

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
    msg.setTimeStamp(0.37817621838637616);
    msg.setSource(20277U);
    msg.setSourceEntity(15U);
    msg.setDestination(32492U);
    msg.setDestinationEntity(196U);
    msg.value = 0.35450487257097485;

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
    msg.setTimeStamp(0.5404357136277721);
    msg.setSource(8589U);
    msg.setSourceEntity(246U);
    msg.setDestination(12687U);
    msg.setDestinationEntity(173U);
    msg.value = 0.12699485031498026;

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
    msg.setTimeStamp(0.17392069559201007);
    msg.setSource(270U);
    msg.setSourceEntity(88U);
    msg.setDestination(31571U);
    msg.setDestinationEntity(178U);
    msg.value = 0.6673642473784209;

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
    msg.setTimeStamp(0.2591186646760607);
    msg.setSource(18950U);
    msg.setSourceEntity(65U);
    msg.setDestination(26197U);
    msg.setDestinationEntity(175U);
    msg.value = 0.059385843001841465;

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
    msg.setTimeStamp(0.05416071011873813);
    msg.setSource(7062U);
    msg.setSourceEntity(32U);
    msg.setDestination(33654U);
    msg.setDestinationEntity(108U);
    msg.value = 0.0884186250249509;

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
    msg.setTimeStamp(0.869421603080791);
    msg.setSource(65476U);
    msg.setSourceEntity(120U);
    msg.setDestination(49534U);
    msg.setDestinationEntity(164U);
    msg.value = 0.5169903294622282;

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
    msg.setTimeStamp(0.6819931853480288);
    msg.setSource(6668U);
    msg.setSourceEntity(250U);
    msg.setDestination(62040U);
    msg.setDestinationEntity(20U);
    msg.value = 0.0010328133593198174;

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
    msg.setTimeStamp(0.6899451300332772);
    msg.setSource(6689U);
    msg.setSourceEntity(234U);
    msg.setDestination(44200U);
    msg.setDestinationEntity(140U);
    msg.value = 0.9541195090124915;

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
    msg.setTimeStamp(0.41845044868336145);
    msg.setSource(51512U);
    msg.setSourceEntity(48U);
    msg.setDestination(38687U);
    msg.setDestinationEntity(3U);
    msg.value = 0.9399215862057638;

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
    msg.setTimeStamp(0.9676046132244176);
    msg.setSource(25763U);
    msg.setSourceEntity(93U);
    msg.setDestination(45610U);
    msg.setDestinationEntity(164U);
    msg.value = 0.9863863729595932;

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
    msg.setTimeStamp(0.38484256038584286);
    msg.setSource(46495U);
    msg.setSourceEntity(26U);
    msg.setDestination(2823U);
    msg.setDestinationEntity(7U);
    msg.value = 0.053361359215184034;

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
    msg.setTimeStamp(0.27991758209697104);
    msg.setSource(37996U);
    msg.setSourceEntity(140U);
    msg.setDestination(45914U);
    msg.setDestinationEntity(21U);
    msg.validity = 60627U;
    msg.type = 91U;
    msg.tow = 1855008465U;
    msg.base_lat = 0.16647563510401675;
    msg.base_lon = 0.9445912750165432;
    msg.base_height = 0.7025961650339146;
    msg.n = 0.22541474961286856;
    msg.e = 0.5956493903306568;
    msg.d = 0.8831276353042008;
    msg.v_n = 0.34358011360988383;
    msg.v_e = 0.6451699536886439;
    msg.v_d = 0.43926425031322625;
    msg.satellites = 71U;
    msg.iar_hyp = 64721U;
    msg.iar_ratio = 0.7465999683833522;

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
    msg.setTimeStamp(0.9299414165090603);
    msg.setSource(50620U);
    msg.setSourceEntity(11U);
    msg.setDestination(11441U);
    msg.setDestinationEntity(226U);
    msg.validity = 1382U;
    msg.type = 160U;
    msg.tow = 2787901060U;
    msg.base_lat = 0.5940699684414109;
    msg.base_lon = 0.5368088888823093;
    msg.base_height = 0.15082052468810192;
    msg.n = 0.04282676716323497;
    msg.e = 0.6306891409126204;
    msg.d = 0.9949557925549584;
    msg.v_n = 0.5070344967362806;
    msg.v_e = 0.1837722870940468;
    msg.v_d = 0.3583263010233033;
    msg.satellites = 28U;
    msg.iar_hyp = 45357U;
    msg.iar_ratio = 0.25400804612797934;

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
    msg.setTimeStamp(0.8077487208781775);
    msg.setSource(44697U);
    msg.setSourceEntity(192U);
    msg.setDestination(17976U);
    msg.setDestinationEntity(125U);
    msg.validity = 64860U;
    msg.type = 154U;
    msg.tow = 2496398874U;
    msg.base_lat = 0.7721993801515737;
    msg.base_lon = 0.7398361452004752;
    msg.base_height = 0.0900448950581737;
    msg.n = 0.9929401961834388;
    msg.e = 0.003104623439084242;
    msg.d = 0.09416084157088811;
    msg.v_n = 0.8931706557439393;
    msg.v_e = 0.20964515911189563;
    msg.v_d = 0.45696185198639405;
    msg.satellites = 148U;
    msg.iar_hyp = 13245U;
    msg.iar_ratio = 0.18250317706807462;

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
    msg.setTimeStamp(0.33398623716628983);
    msg.setSource(32033U);
    msg.setSourceEntity(223U);
    msg.setDestination(19794U);
    msg.setDestinationEntity(60U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.8647274017346752;
    tmp_msg_0.lon = 0.7360450757132485;
    tmp_msg_0.height = 0.397281376231306;
    tmp_msg_0.x = 0.44362131438220354;
    tmp_msg_0.y = 0.4055787260579192;
    tmp_msg_0.z = 0.7009995799908252;
    tmp_msg_0.phi = 0.1638502813446775;
    tmp_msg_0.theta = 0.7338926484705699;
    tmp_msg_0.psi = 0.4454739704910352;
    tmp_msg_0.u = 0.5658770395410856;
    tmp_msg_0.v = 0.4836098961679486;
    tmp_msg_0.w = 0.5341800638758051;
    tmp_msg_0.vx = 0.9460732470418917;
    tmp_msg_0.vy = 0.7334279557815379;
    tmp_msg_0.vz = 0.43500126624853486;
    tmp_msg_0.p = 0.18426052200521303;
    tmp_msg_0.q = 0.8671383974992768;
    tmp_msg_0.r = 0.9812138173138866;
    tmp_msg_0.depth = 0.06433672616542851;
    tmp_msg_0.alt = 0.48748218192570014;
    msg.state.set(tmp_msg_0);
    msg.type = 44U;

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
    msg.setTimeStamp(0.7756526054588558);
    msg.setSource(8547U);
    msg.setSourceEntity(119U);
    msg.setDestination(38789U);
    msg.setDestinationEntity(129U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.7839011016554356;
    tmp_msg_0.lon = 0.10934356625104846;
    tmp_msg_0.height = 0.09226121586143843;
    tmp_msg_0.x = 0.5138271950269816;
    tmp_msg_0.y = 0.18760779407066364;
    tmp_msg_0.z = 0.02262314133585097;
    tmp_msg_0.phi = 0.1246620565151283;
    tmp_msg_0.theta = 0.674095816739435;
    tmp_msg_0.psi = 0.08009997261821555;
    tmp_msg_0.u = 0.1231951897804564;
    tmp_msg_0.v = 0.9921063336248656;
    tmp_msg_0.w = 0.4950576737869641;
    tmp_msg_0.vx = 0.6798920251634649;
    tmp_msg_0.vy = 0.09488863809717984;
    tmp_msg_0.vz = 0.8709538474988984;
    tmp_msg_0.p = 0.6097114401551289;
    tmp_msg_0.q = 0.28144107412754005;
    tmp_msg_0.r = 0.9995262218811765;
    tmp_msg_0.depth = 0.35498042392302065;
    tmp_msg_0.alt = 0.8956649822889183;
    msg.state.set(tmp_msg_0);
    msg.type = 188U;

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
    msg.setTimeStamp(0.7298830108832114);
    msg.setSource(26095U);
    msg.setSourceEntity(199U);
    msg.setDestination(8495U);
    msg.setDestinationEntity(175U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.6778012723800424;
    tmp_msg_0.lon = 0.878223727713447;
    tmp_msg_0.height = 0.3624805794392507;
    tmp_msg_0.x = 0.06671017162171411;
    tmp_msg_0.y = 0.3514357624948027;
    tmp_msg_0.z = 0.0354923230297165;
    tmp_msg_0.phi = 0.38787160271707544;
    tmp_msg_0.theta = 0.3031939982253421;
    tmp_msg_0.psi = 0.6984400946931218;
    tmp_msg_0.u = 0.042509125364845746;
    tmp_msg_0.v = 0.9685932248938477;
    tmp_msg_0.w = 0.05528860580977335;
    tmp_msg_0.vx = 0.47332342335301036;
    tmp_msg_0.vy = 0.1304816619082224;
    tmp_msg_0.vz = 0.7354744252268771;
    tmp_msg_0.p = 0.6971176130153748;
    tmp_msg_0.q = 0.11291771947570495;
    tmp_msg_0.r = 0.7359148233624854;
    tmp_msg_0.depth = 0.6074888335457157;
    tmp_msg_0.alt = 0.19345683230315458;
    msg.state.set(tmp_msg_0);
    msg.type = 81U;

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
    msg.setTimeStamp(0.28340092992940813);
    msg.setSource(3149U);
    msg.setSourceEntity(10U);
    msg.setDestination(42807U);
    msg.setDestinationEntity(174U);
    msg.value = 0.6168101069323134;

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
    msg.setTimeStamp(0.9106171032658037);
    msg.setSource(44953U);
    msg.setSourceEntity(153U);
    msg.setDestination(19449U);
    msg.setDestinationEntity(90U);
    msg.value = 0.17415023027882148;

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
    msg.setTimeStamp(0.3732858720184825);
    msg.setSource(49038U);
    msg.setSourceEntity(87U);
    msg.setDestination(13167U);
    msg.setDestinationEntity(164U);
    msg.value = 0.9322196628895418;

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
    msg.setTimeStamp(0.9222255643618723);
    msg.setSource(11984U);
    msg.setSourceEntity(150U);
    msg.setDestination(28259U);
    msg.setDestinationEntity(134U);
    msg.value = 0.8184341696101098;

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
    msg.setTimeStamp(0.2396299934385362);
    msg.setSource(58508U);
    msg.setSourceEntity(89U);
    msg.setDestination(15231U);
    msg.setDestinationEntity(20U);
    msg.value = 0.5276589739209911;

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
    msg.setTimeStamp(0.119474183420468);
    msg.setSource(40099U);
    msg.setSourceEntity(144U);
    msg.setDestination(54880U);
    msg.setDestinationEntity(21U);
    msg.value = 0.11050990183115816;

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
    msg.setTimeStamp(0.460312997281736);
    msg.setSource(40927U);
    msg.setSourceEntity(222U);
    msg.setDestination(57784U);
    msg.setDestinationEntity(190U);
    msg.value = 0.6617705067387802;

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
    msg.setTimeStamp(0.20977591229975057);
    msg.setSource(11805U);
    msg.setSourceEntity(149U);
    msg.setDestination(29581U);
    msg.setDestinationEntity(226U);
    msg.value = 0.06794297079318024;

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
    msg.setTimeStamp(0.25612875711768845);
    msg.setSource(43643U);
    msg.setSourceEntity(59U);
    msg.setDestination(23291U);
    msg.setDestinationEntity(199U);
    msg.value = 0.21577751401346612;

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
    msg.setTimeStamp(0.8778124255073683);
    msg.setSource(1639U);
    msg.setSourceEntity(191U);
    msg.setDestination(23829U);
    msg.setDestinationEntity(11U);
    msg.value = 0.19798508989572927;

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
    msg.setTimeStamp(0.8089515833728377);
    msg.setSource(27372U);
    msg.setSourceEntity(207U);
    msg.setDestination(23138U);
    msg.setDestinationEntity(231U);
    msg.value = 0.2370186935592451;

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
    msg.setTimeStamp(0.9735378636656171);
    msg.setSource(5453U);
    msg.setSourceEntity(0U);
    msg.setDestination(63949U);
    msg.setDestinationEntity(45U);
    msg.value = 0.13087760614403732;

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
    msg.setTimeStamp(0.32740073173098916);
    msg.setSource(38690U);
    msg.setSourceEntity(51U);
    msg.setDestination(32814U);
    msg.setDestinationEntity(75U);
    msg.value = 0.33971476758409636;

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
    msg.setTimeStamp(0.9120052827291074);
    msg.setSource(42084U);
    msg.setSourceEntity(62U);
    msg.setDestination(64222U);
    msg.setDestinationEntity(151U);
    msg.value = 0.40677339046672056;

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
    msg.setTimeStamp(0.4754039341402694);
    msg.setSource(12595U);
    msg.setSourceEntity(107U);
    msg.setDestination(44005U);
    msg.setDestinationEntity(6U);
    msg.value = 0.30285922932689424;

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
    msg.setTimeStamp(0.4961656653574966);
    msg.setSource(24490U);
    msg.setSourceEntity(111U);
    msg.setDestination(21273U);
    msg.setDestinationEntity(60U);
    msg.id = 58U;
    msg.zoom = 87U;
    msg.action = 94U;

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
    msg.setTimeStamp(0.8334862278704096);
    msg.setSource(44156U);
    msg.setSourceEntity(197U);
    msg.setDestination(7757U);
    msg.setDestinationEntity(130U);
    msg.id = 254U;
    msg.zoom = 22U;
    msg.action = 248U;

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
    msg.setTimeStamp(0.7052909153291628);
    msg.setSource(9010U);
    msg.setSourceEntity(97U);
    msg.setDestination(37649U);
    msg.setDestinationEntity(114U);
    msg.id = 81U;
    msg.zoom = 127U;
    msg.action = 141U;

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
    msg.setTimeStamp(0.07132921575281459);
    msg.setSource(25821U);
    msg.setSourceEntity(198U);
    msg.setDestination(33562U);
    msg.setDestinationEntity(30U);
    msg.id = 150U;
    msg.value = 0.9712381504676441;

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
    msg.setTimeStamp(0.7655171560427899);
    msg.setSource(59366U);
    msg.setSourceEntity(163U);
    msg.setDestination(46394U);
    msg.setDestinationEntity(194U);
    msg.id = 50U;
    msg.value = 0.904252928891508;

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
    msg.setTimeStamp(0.13900936531335706);
    msg.setSource(46041U);
    msg.setSourceEntity(8U);
    msg.setDestination(43280U);
    msg.setDestinationEntity(4U);
    msg.id = 15U;
    msg.value = 0.6234919271769772;

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
    msg.setTimeStamp(0.0751038691989081);
    msg.setSource(911U);
    msg.setSourceEntity(196U);
    msg.setDestination(50007U);
    msg.setDestinationEntity(11U);
    msg.id = 232U;
    msg.value = 0.0472113159866312;

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
    msg.setTimeStamp(0.7955202562849666);
    msg.setSource(43607U);
    msg.setSourceEntity(50U);
    msg.setDestination(18802U);
    msg.setDestinationEntity(236U);
    msg.id = 143U;
    msg.value = 0.1706562972080028;

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
    msg.setTimeStamp(0.5111499704968657);
    msg.setSource(58196U);
    msg.setSourceEntity(121U);
    msg.setDestination(52331U);
    msg.setDestinationEntity(88U);
    msg.id = 202U;
    msg.value = 0.5773986031109415;

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
    msg.setTimeStamp(0.03874660196937252);
    msg.setSource(39888U);
    msg.setSourceEntity(192U);
    msg.setDestination(9168U);
    msg.setDestinationEntity(202U);
    msg.id = 101U;
    msg.angle = 0.8622151993505056;

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
    msg.setTimeStamp(0.08756865982044915);
    msg.setSource(16766U);
    msg.setSourceEntity(57U);
    msg.setDestination(2521U);
    msg.setDestinationEntity(246U);
    msg.id = 22U;
    msg.angle = 0.4924879341323042;

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
    msg.setTimeStamp(0.8828888980150155);
    msg.setSource(6234U);
    msg.setSourceEntity(110U);
    msg.setDestination(39838U);
    msg.setDestinationEntity(167U);
    msg.id = 14U;
    msg.angle = 0.9382387607585947;

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
    msg.setTimeStamp(0.35024901364448213);
    msg.setSource(15921U);
    msg.setSourceEntity(49U);
    msg.setDestination(34747U);
    msg.setDestinationEntity(109U);
    msg.op = 245U;
    msg.actions.assign("QIEDQEMVRQXAZAHJCXZFXYLAHICGAEYWNHXHHRPKVTCWUWMRJGKPBULWBDOTLZ");

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
    msg.setTimeStamp(0.1397374897949889);
    msg.setSource(34909U);
    msg.setSourceEntity(37U);
    msg.setDestination(17662U);
    msg.setDestinationEntity(174U);
    msg.op = 78U;
    msg.actions.assign("FPVUMDNJPWMSNBVQLGFQHKFUZNIDXAJNCDQKYYTCLSUGHHHVRENSIAQOCZJISAYQMXSFZLIQKJKDDNALRNLYUXSMVPCQPOQUBTEGZPEWNTGYBGBOWESOTKKRPRORHUIFTXJZUJTEOFEKIHDXWQWCASWXGFXBETJDHBZOXLWJJCYSGZGLL");

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
    msg.setTimeStamp(0.6984876221181765);
    msg.setSource(15407U);
    msg.setSourceEntity(85U);
    msg.setDestination(29976U);
    msg.setDestinationEntity(186U);
    msg.op = 91U;
    msg.actions.assign("TKQTICXIXBOSOVCJSGUIZUIOCSYOGRHDLUZQMNEQWJCRAALLDUARFNYJKWLNEQOYMSBAMBBWNDWXHKSPGGTIVFOYEPCVQTKBTMB");

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
    msg.setTimeStamp(0.5311503132270631);
    msg.setSource(19270U);
    msg.setSourceEntity(114U);
    msg.setDestination(22583U);
    msg.setDestinationEntity(225U);
    msg.actions.assign("PLZAJQULVEGLORFXKHEWIRWUWAYNYWWZRJFZHPPCZYWGPBTRHCLMFGPPTQSLHXMUCAVAAEONKUEHYSYTGRXXJCLOGCMZKJATBRVNQKUBTOTGURDEMQIELRKSDCOFDFNZZABPYDZMIHIYXDMVKCJXTTPL");

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
    msg.setTimeStamp(0.428411238071815);
    msg.setSource(30335U);
    msg.setSourceEntity(93U);
    msg.setDestination(22730U);
    msg.setDestinationEntity(40U);
    msg.actions.assign("GEHLPBGRGWAFDYHRTXJJTPVFSXKNWVPMGTDEBFKQTUUPGFRHVMYTKSQLLKDGJAUYGVNPLBRIGLOQEIOWPJMXWHFZ");

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
    msg.setTimeStamp(0.46317391560369414);
    msg.setSource(34990U);
    msg.setSourceEntity(141U);
    msg.setDestination(26334U);
    msg.setDestinationEntity(17U);
    msg.actions.assign("NYSRDRLAEVMWAWWZWMDMBTMFUERQAHZFOFYVWLBKIIUBQLPQEAETRPOAOBJGGCRIDOGDBFMZVCYYVNTHXKWJRWISGIIMOTSDPBGKFDXHSYZBCLJKEQVNXDVKYRUACHNNNNRVHUCOUYINZSXLJSSZBDXYJPKDQZPMPFZJHUVHKAZMCSUQFKIGZHCMQIEMJJTFABUINUJPSXEELVTCQXDXQJFALWORSKTQOYYNTPEFLELGCGOKTXHG");

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
    msg.setTimeStamp(0.25801667211388146);
    msg.setSource(49615U);
    msg.setSourceEntity(153U);
    msg.setDestination(2130U);
    msg.setDestinationEntity(1U);
    msg.button = 201U;
    msg.value = 132U;

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
    msg.setTimeStamp(0.23412339867534737);
    msg.setSource(37741U);
    msg.setSourceEntity(42U);
    msg.setDestination(1070U);
    msg.setDestinationEntity(160U);
    msg.button = 93U;
    msg.value = 112U;

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
    msg.setTimeStamp(0.6650340350799584);
    msg.setSource(47443U);
    msg.setSourceEntity(55U);
    msg.setDestination(20597U);
    msg.setDestinationEntity(210U);
    msg.button = 53U;
    msg.value = 7U;

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
    msg.setTimeStamp(0.7134464473806365);
    msg.setSource(40898U);
    msg.setSourceEntity(62U);
    msg.setDestination(34867U);
    msg.setDestinationEntity(111U);
    msg.op = 227U;
    msg.text.assign("LHJOQSKIFNSTUMAYVJNCBTHQCLVTCZQGIYKGMSAIAPB");

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
    msg.setTimeStamp(0.6528651540726144);
    msg.setSource(23202U);
    msg.setSourceEntity(244U);
    msg.setDestination(12837U);
    msg.setDestinationEntity(212U);
    msg.op = 91U;
    msg.text.assign("BGMIZBXQWDEQJFCFUSGUHXJACFMMASVUBNANBYLTOGPUVGEKLMVFRYKFLMIPOHJSYLKTNSVUAAYMMDDLUY");

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
    msg.setTimeStamp(0.24734654883654628);
    msg.setSource(53189U);
    msg.setSourceEntity(159U);
    msg.setDestination(5072U);
    msg.setDestinationEntity(213U);
    msg.op = 181U;
    msg.text.assign("HACIGLOYGTPUVZXRTUEOTTIAVDXARMLOPIBHKCBZDHXNSKTSONCRMROSYZWPHNQQEJHXLRYFOXARBJVJAQIODTEQYCNWLKMTVZGEALSMEUDGDBQZDEMFJTPHAJJPNKZYRJUHAGFUPVXRBGFMQKXJUSBSRWU");

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
    msg.setTimeStamp(0.12303288004646074);
    msg.setSource(65419U);
    msg.setSourceEntity(103U);
    msg.setDestination(48069U);
    msg.setDestinationEntity(101U);
    msg.op = 142U;
    msg.time_remain = 0.15115435908205488;
    msg.sched_time = 0.5001761847937959;

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
    msg.setTimeStamp(0.08573357811899018);
    msg.setSource(12605U);
    msg.setSourceEntity(116U);
    msg.setDestination(23346U);
    msg.setDestinationEntity(6U);
    msg.op = 177U;
    msg.time_remain = 0.2662054457665164;
    msg.sched_time = 0.7647418843449376;

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
    msg.setTimeStamp(0.1877795153544467);
    msg.setSource(23309U);
    msg.setSourceEntity(3U);
    msg.setDestination(64114U);
    msg.setDestinationEntity(151U);
    msg.op = 56U;
    msg.time_remain = 0.8315200183950673;
    msg.sched_time = 0.6724645507317117;

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
    msg.setTimeStamp(0.78705356287869);
    msg.setSource(15849U);
    msg.setSourceEntity(113U);
    msg.setDestination(13196U);
    msg.setDestinationEntity(151U);
    msg.name.assign("WZDMHAINCXHXKTFETXYGAOOXBBEJDYYBCBUFIJWCOZETLPHHEVNFHJQTAMPOWMFCONPAXIXAZJLHZUKPMKWQLUVURS");
    msg.op = 181U;
    msg.sched_time = 0.5664699096649454;

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
    msg.setTimeStamp(0.8593501658602573);
    msg.setSource(52808U);
    msg.setSourceEntity(96U);
    msg.setDestination(46746U);
    msg.setDestinationEntity(243U);
    msg.name.assign("KGXVNAWTHSYLZHKONYTUPHIHPIKZZHIQFUBEZNVFUTWYRACUJIKCZHXBUYUBEWMXJSXKYTSCAURWHPPOJARRMPOZGMDEZRXDGNATOTLWQNMCXQNWSUDSGSMIKHVEFVGBOJCFCUEVQMLEBXLBDREJIHESCKFELMVGULGLWTKABRJTCBJXLEYQPWDAQZXFIOACODQVPIDY");
    msg.op = 44U;
    msg.sched_time = 0.286025905145073;

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
    msg.setTimeStamp(0.1700257125226169);
    msg.setSource(45703U);
    msg.setSourceEntity(235U);
    msg.setDestination(11233U);
    msg.setDestinationEntity(209U);
    msg.name.assign("QZWJHZLFTTWGGPZYHTDGENBZXABLBUOPRMNEKSYROYBWOTQXIEGHYGKCSFFMBLCXTWURTRHIDNUVJTYEGRWWONDVBALFLJIDQBSSDNIPMJQPZPAASENLSJTFXOPURQGIBZNARWDOKUJPPFEERSVICXEEKHVALACUQCSWYKNNQMZVZKDXWMHIFPHIMKCMIGVKYHJDEHJXA");
    msg.op = 80U;
    msg.sched_time = 0.8637785363275311;

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
    msg.setTimeStamp(0.3214200416618288);
    msg.setSource(14126U);
    msg.setSourceEntity(114U);
    msg.setDestination(53980U);
    msg.setDestinationEntity(234U);

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
    msg.setTimeStamp(0.8202068752512656);
    msg.setSource(49669U);
    msg.setSourceEntity(47U);
    msg.setDestination(27362U);
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
    msg.setTimeStamp(0.08409791396953781);
    msg.setSource(39246U);
    msg.setSourceEntity(96U);
    msg.setDestination(44528U);
    msg.setDestinationEntity(171U);

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
    msg.setTimeStamp(0.8957047638721296);
    msg.setSource(25151U);
    msg.setSourceEntity(147U);
    msg.setDestination(53669U);
    msg.setDestinationEntity(75U);
    msg.name.assign("HDQSEEFABVDHUOSLVNTZIPQJUZLSWZBBNREEZBXKHWFNYBZPCXZNIZHVJIODNWDBUHLPFWOVMVBXUXCRGAMJTEXRSLIAKDNAWYY");
    msg.state = 26U;

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
    msg.setTimeStamp(0.7782544689257475);
    msg.setSource(40991U);
    msg.setSourceEntity(24U);
    msg.setDestination(31831U);
    msg.setDestinationEntity(95U);
    msg.name.assign("NOOEYJYGWCHSFZZDELDMBVOOETTYXXACXDKWIVGCUNLGYBYRKVFHSVCIBLFATCVQUPBUMKJLDXWMCULFEVPBRWRIYJZAVIJACDKDSDFUXBDMSEPTQYZEDHGMGMQIAMKNHGHYLZOALWFDNINEXKSPGZRHRXNSZAGTBPQEUHKQZTRAHKFMQPFNJBXPVTRFIJMGPZHTTGHNOYSEVRJFEXBAO");
    msg.state = 52U;

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
    msg.setTimeStamp(0.3100467453402156);
    msg.setSource(60394U);
    msg.setSourceEntity(59U);
    msg.setDestination(10239U);
    msg.setDestinationEntity(91U);
    msg.name.assign("DHTGSXUMZASGYBIRLRYWSNAEVYRXYSHMRWQNXCTIDLVNNUGTRLHAUYNLJEFNKZRMYIOIFLPPFATXISWWPKLVZVNMNMDDCLQXBVMEOPSKPJGHUJBQQSKESZOICCHZGAJFOHEOCWTACCFLVDYTMUUWDPZFJZQRUVFDINAFJBMOCKRGKUKWWZBEIOTGDQAJDTXYEBRFZYXJXQGRDPTPKOUCUKSB");
    msg.state = 60U;

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
    msg.setTimeStamp(0.194341747308179);
    msg.setSource(30544U);
    msg.setSourceEntity(202U);
    msg.setDestination(13820U);
    msg.setDestinationEntity(100U);
    msg.name.assign("EHPJKFBTXRJUACLTHGKDYVMIACZRKCSGCAFVYUGHVNIEWFZYHWWVOMOIXUVGBFPTYHXMJGTGDJVQANZTFVFXAKNPTLIXUXRUDFCWFXMRUMTEODEBPKWWSJUIQWZLOIKKJIPSABVAZPOLSQBKQFJQPWCRPYLNBMQDEUPELS");
    msg.value = 200U;

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
    msg.setTimeStamp(0.32250137376717625);
    msg.setSource(42966U);
    msg.setSourceEntity(32U);
    msg.setDestination(4041U);
    msg.setDestinationEntity(76U);
    msg.name.assign("HPBZGQWJDNUNSHIGUAAWEZJAZKVPJQFIUSWETMRRXNEEBFDXAKSKKFFVAFFLYMMPEDYMFCNOCOHCTHHIDAUODZ");
    msg.value = 214U;

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
    msg.setTimeStamp(0.14246784870731188);
    msg.setSource(14415U);
    msg.setSourceEntity(227U);
    msg.setDestination(8236U);
    msg.setDestinationEntity(217U);
    msg.name.assign("YHZDRKMCNXVZSKVBFDVAKFHYHKDTUSSLMNGKNSPNMHGDCHADEOKFRJZRILQJMAWPGYRISUTPEWPXGOSKMBCJIACPPXLMRGQSO");
    msg.value = 202U;

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
    msg.setTimeStamp(0.4169690497922002);
    msg.setSource(46378U);
    msg.setSourceEntity(80U);
    msg.setDestination(50130U);
    msg.setDestinationEntity(10U);
    msg.name.assign("LJIMMZBRKRPCU");

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
    msg.setTimeStamp(0.4691333441989761);
    msg.setSource(13445U);
    msg.setSourceEntity(137U);
    msg.setDestination(33458U);
    msg.setDestinationEntity(6U);
    msg.name.assign("CGMSIQZPJBZWAITUEMHDUNOUVBXAAWSMTIDNMCUJBDOOWAWQODRVKMFCUJDWEQIIXMGGNXBLSKQRXHCYXYORSZTVNYEFGPVUSSDACMWZMMKYQTUROVZTTKPHWJNYFYPQVLRVBEQIOQPUIFLJSPAJLBLTYCLDRKBLJIZORNEDTZTRSKGHNFFVVHCHDXPRHXKQEZKEUGCAWHPSFVBIRJZKDEXQKNAGGAAFPBIJXYNFNHOLGXGWMLSZCOTLWPHFYE");

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
    msg.setTimeStamp(0.8137966547312051);
    msg.setSource(41613U);
    msg.setSourceEntity(17U);
    msg.setDestination(27120U);
    msg.setDestinationEntity(192U);
    msg.name.assign("JAUYJNDOZMBAUEPKXYZCFZUIRRGNPKLCFQJZPMAJDDLUCGLEKRLYCCWGBVWHQQLVEYHSATVKHRMNFYSIAAAOTLTUXKNDYDIREXQLBQYBWDBKBLTVPEBJQXMIVXRYFZPCCWJVRNWVCJQBQQSYOEIOKXNFTTUOAMGXEKRQXNZHZDPIISFPG");

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
    msg.setTimeStamp(0.590417396198756);
    msg.setSource(56102U);
    msg.setSourceEntity(98U);
    msg.setDestination(62996U);
    msg.setDestinationEntity(110U);
    msg.name.assign("WMIAXGVKLIBFDPONDDDKBJVVQRYRZIZDNMPNJBMOENPZQJJNXLWVLVXLREMYPORPLREROYTFXTWMWOKCZAHOQNGQADZKJHWTBHKPIOKLWRGTMZEOHSXJFUIENHHAECHDULIHTVCMBVFMQSFBFTCUKUAJLDYQGIRGSFUGSLOWRAEYCTCWSKJXP");
    msg.value = 228U;

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
    msg.setTimeStamp(0.5338087742271111);
    msg.setSource(58595U);
    msg.setSourceEntity(75U);
    msg.setDestination(29276U);
    msg.setDestinationEntity(33U);
    msg.name.assign("BPZFSVJFOSJCSENYGTZSTEPTCSXEDQVHLUPYHGRSFKJDFOJNWNJYTUPQROTAEFVEYHWZBLQRVKLQEJNZASXXUDBNWTAAARGHZGDGFHWHVHKBNEDBSKZNKNZIIYWMJHMKKCOMCTIWIYVIFYKULIYNCGCGWWPBCOV");
    msg.value = 163U;

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
    msg.setTimeStamp(0.6974283557377988);
    msg.setSource(44690U);
    msg.setSourceEntity(63U);
    msg.setDestination(41326U);
    msg.setDestinationEntity(158U);
    msg.name.assign("HHQPURPEINNDUSFGYNWJVJQHCNYSLTPCDLXVVMMKYUIPHXGYATZEMJQROHGGBDAZDVAEWKBUCBYCOZTNLNTIFJOMOFKAZFSWDRMWOMICYHZNQXFTUPXJBMBCVCMALVFHIKRGRGEZRFDURBTVSAXLQWQLPLSKSEYTVQEIXWPEKAEEKXGXTGOOMBKPNRUVSHFLHBSJJOODJQDIKACBDRSGWIYJVIZXLZMFGXJAW");
    msg.value = 49U;

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
    msg.setTimeStamp(0.46194009983913087);
    msg.setSource(34448U);
    msg.setSourceEntity(70U);
    msg.setDestination(35170U);
    msg.setDestinationEntity(128U);
    msg.id = 251U;
    msg.period = 328249147U;
    msg.duty_cycle = 2627836580U;

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
    msg.setTimeStamp(0.1420405586205553);
    msg.setSource(24527U);
    msg.setSourceEntity(238U);
    msg.setDestination(54858U);
    msg.setDestinationEntity(194U);
    msg.id = 128U;
    msg.period = 3436745602U;
    msg.duty_cycle = 2491886289U;

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
    msg.setTimeStamp(0.6876822285759044);
    msg.setSource(52627U);
    msg.setSourceEntity(156U);
    msg.setDestination(63335U);
    msg.setDestinationEntity(52U);
    msg.id = 136U;
    msg.period = 1782566413U;
    msg.duty_cycle = 1681183403U;

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
    msg.setTimeStamp(0.5635242782932095);
    msg.setSource(33405U);
    msg.setSourceEntity(96U);
    msg.setDestination(40672U);
    msg.setDestinationEntity(210U);
    msg.id = 98U;
    msg.period = 3948135161U;
    msg.duty_cycle = 1173038154U;

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
    msg.setTimeStamp(0.05982310752213138);
    msg.setSource(52779U);
    msg.setSourceEntity(147U);
    msg.setDestination(1062U);
    msg.setDestinationEntity(220U);
    msg.id = 79U;
    msg.period = 1417415657U;
    msg.duty_cycle = 3508699377U;

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
    msg.setTimeStamp(0.5606170664696658);
    msg.setSource(21979U);
    msg.setSourceEntity(118U);
    msg.setDestination(37858U);
    msg.setDestinationEntity(228U);
    msg.id = 252U;
    msg.period = 730183703U;
    msg.duty_cycle = 456770108U;

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
    msg.setTimeStamp(0.8219135361883058);
    msg.setSource(13504U);
    msg.setSourceEntity(235U);
    msg.setDestination(41230U);
    msg.setDestinationEntity(130U);
    msg.lat = 0.7611568245864253;
    msg.lon = 0.06287993101975076;
    msg.height = 0.431777170541642;
    msg.x = 0.576426289883333;
    msg.y = 0.12686979650514985;
    msg.z = 0.782805177852368;
    msg.phi = 0.18232740975677475;
    msg.theta = 0.3449060196721987;
    msg.psi = 0.2360500131970682;
    msg.u = 0.452682864326887;
    msg.v = 0.53406206009316;
    msg.w = 0.9162107984103522;
    msg.vx = 0.562295156283751;
    msg.vy = 0.696569503093845;
    msg.vz = 0.350741611422972;
    msg.p = 0.7111057035093012;
    msg.q = 0.42350041223416246;
    msg.r = 0.5486205262918123;
    msg.depth = 0.06444418756553483;
    msg.alt = 0.43792890639109927;

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
    msg.setTimeStamp(0.5416516239030118);
    msg.setSource(63871U);
    msg.setSourceEntity(212U);
    msg.setDestination(13663U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.9916704137388649;
    msg.lon = 0.44770170294946054;
    msg.height = 0.397091488155743;
    msg.x = 0.5273627024108485;
    msg.y = 0.7501549799432204;
    msg.z = 0.42429987528964186;
    msg.phi = 0.9899011411555491;
    msg.theta = 0.040304664587162975;
    msg.psi = 0.21399278781297837;
    msg.u = 0.5435737581382812;
    msg.v = 0.507751320248579;
    msg.w = 0.030083504849971354;
    msg.vx = 0.8061694782794587;
    msg.vy = 0.2199582501173859;
    msg.vz = 0.4499631195482944;
    msg.p = 0.7839318223856624;
    msg.q = 0.991662839665409;
    msg.r = 0.5779638862220002;
    msg.depth = 0.16927456235914318;
    msg.alt = 0.4173902364162111;

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
    msg.setTimeStamp(0.8292658262289055);
    msg.setSource(26713U);
    msg.setSourceEntity(82U);
    msg.setDestination(25844U);
    msg.setDestinationEntity(132U);
    msg.lat = 0.18538765989163786;
    msg.lon = 0.8570267410779357;
    msg.height = 0.19183519301880558;
    msg.x = 0.0992769890053915;
    msg.y = 0.06706294285295511;
    msg.z = 0.06245102639266564;
    msg.phi = 0.8225646082873341;
    msg.theta = 0.8934861027436926;
    msg.psi = 0.27871573065603206;
    msg.u = 0.8387598999888818;
    msg.v = 0.16209881274571059;
    msg.w = 0.25821858807685905;
    msg.vx = 0.549896659320211;
    msg.vy = 0.9338083891143544;
    msg.vz = 0.2045059587556416;
    msg.p = 0.34978049777301645;
    msg.q = 0.3021059934950503;
    msg.r = 0.49246822818551816;
    msg.depth = 0.007695747126154173;
    msg.alt = 0.03182013376121162;

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
    msg.setTimeStamp(0.6612245604943268);
    msg.setSource(20586U);
    msg.setSourceEntity(17U);
    msg.setDestination(28060U);
    msg.setDestinationEntity(239U);
    msg.x = 0.25440971843679583;
    msg.y = 0.1628808946528112;
    msg.z = 0.8042026776019465;

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
    msg.setTimeStamp(0.9430632333230571);
    msg.setSource(13369U);
    msg.setSourceEntity(149U);
    msg.setDestination(26799U);
    msg.setDestinationEntity(183U);
    msg.x = 0.10150442046560681;
    msg.y = 0.5738577947885569;
    msg.z = 0.6886214360170382;

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
    msg.setTimeStamp(0.48612787517760725);
    msg.setSource(30707U);
    msg.setSourceEntity(74U);
    msg.setDestination(4597U);
    msg.setDestinationEntity(45U);
    msg.x = 0.07853921533586083;
    msg.y = 0.4467154686797217;
    msg.z = 0.5897727442431048;

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
    msg.setTimeStamp(0.18493593059468993);
    msg.setSource(44107U);
    msg.setSourceEntity(67U);
    msg.setDestination(6006U);
    msg.setDestinationEntity(58U);
    msg.value = 0.15597971150475043;

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
    msg.setTimeStamp(0.409781534106617);
    msg.setSource(17896U);
    msg.setSourceEntity(142U);
    msg.setDestination(54703U);
    msg.setDestinationEntity(99U);
    msg.value = 0.2271092271194327;

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
    msg.setTimeStamp(0.8627281197737248);
    msg.setSource(31734U);
    msg.setSourceEntity(126U);
    msg.setDestination(26570U);
    msg.setDestinationEntity(92U);
    msg.value = 0.5352871935841471;

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
    msg.setTimeStamp(0.16132301076315514);
    msg.setSource(31189U);
    msg.setSourceEntity(26U);
    msg.setDestination(16916U);
    msg.setDestinationEntity(37U);
    msg.value = 0.42248432765066335;

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
    msg.setTimeStamp(0.10808540185756677);
    msg.setSource(24793U);
    msg.setSourceEntity(59U);
    msg.setDestination(56971U);
    msg.setDestinationEntity(250U);
    msg.value = 0.9726953054355297;

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
    msg.setTimeStamp(0.9039852767560219);
    msg.setSource(27136U);
    msg.setSourceEntity(137U);
    msg.setDestination(25053U);
    msg.setDestinationEntity(37U);
    msg.value = 0.4053453443440411;

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
    msg.setTimeStamp(0.9801754359411197);
    msg.setSource(43381U);
    msg.setSourceEntity(50U);
    msg.setDestination(44506U);
    msg.setDestinationEntity(172U);
    msg.x = 0.5486907008573987;
    msg.y = 0.18457901936341092;
    msg.z = 0.9373765351967132;
    msg.phi = 0.626273944914114;
    msg.theta = 0.2937290456051964;
    msg.psi = 0.14003945953939256;
    msg.p = 0.11769930678956131;
    msg.q = 0.1512403829650908;
    msg.r = 0.7554395974168663;
    msg.u = 0.5404100087862191;
    msg.v = 0.8447618845774405;
    msg.w = 0.89759594683374;
    msg.bias_psi = 0.4905213588138124;
    msg.bias_r = 0.15681444730525795;

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
    msg.setTimeStamp(0.474180164701524);
    msg.setSource(41217U);
    msg.setSourceEntity(211U);
    msg.setDestination(21203U);
    msg.setDestinationEntity(245U);
    msg.x = 0.355450412416365;
    msg.y = 0.33052547580001146;
    msg.z = 0.6309569254247891;
    msg.phi = 0.021656912116293392;
    msg.theta = 0.6374579941282487;
    msg.psi = 0.5474426787444482;
    msg.p = 0.33808657994801383;
    msg.q = 0.31474603779855537;
    msg.r = 0.7764536289697209;
    msg.u = 0.39498452935850115;
    msg.v = 0.1095171772323903;
    msg.w = 0.3703660529858165;
    msg.bias_psi = 0.428435101546741;
    msg.bias_r = 0.4388951443460303;

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
    msg.setTimeStamp(0.986290518010766);
    msg.setSource(10732U);
    msg.setSourceEntity(117U);
    msg.setDestination(33797U);
    msg.setDestinationEntity(43U);
    msg.x = 0.03338499099219683;
    msg.y = 0.6866316299108042;
    msg.z = 0.7947760877287184;
    msg.phi = 0.001673541987242122;
    msg.theta = 0.3644619720720449;
    msg.psi = 0.7086762222558713;
    msg.p = 0.9879363435798907;
    msg.q = 0.16319993629957008;
    msg.r = 0.26842654858039794;
    msg.u = 0.7999609451531479;
    msg.v = 0.6251962595106367;
    msg.w = 0.9643226613702589;
    msg.bias_psi = 0.14138599354480508;
    msg.bias_r = 0.7354268225227455;

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
    msg.setTimeStamp(0.8523728363523977);
    msg.setSource(6024U);
    msg.setSourceEntity(97U);
    msg.setDestination(63680U);
    msg.setDestinationEntity(187U);
    msg.bias_psi = 0.9348973180707852;
    msg.bias_r = 0.7746516815276919;
    msg.cog = 0.7544234036919057;
    msg.cyaw = 0.21398018219883275;
    msg.lbl_rej_level = 0.813226822237841;
    msg.gps_rej_level = 0.8695212856149799;
    msg.custom_x = 0.7321844921321816;
    msg.custom_y = 0.9141390234929365;
    msg.custom_z = 0.45610990019960274;

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
    msg.setTimeStamp(0.20553890660041674);
    msg.setSource(23134U);
    msg.setSourceEntity(90U);
    msg.setDestination(35535U);
    msg.setDestinationEntity(92U);
    msg.bias_psi = 0.837492746782967;
    msg.bias_r = 0.7323437670605868;
    msg.cog = 0.5377899985769609;
    msg.cyaw = 0.14644647282205636;
    msg.lbl_rej_level = 0.8059037269251389;
    msg.gps_rej_level = 0.4336696452942179;
    msg.custom_x = 0.9024352175276685;
    msg.custom_y = 0.5877881140581733;
    msg.custom_z = 0.9020614803398632;

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
    msg.setTimeStamp(0.359022555462542);
    msg.setSource(30514U);
    msg.setSourceEntity(234U);
    msg.setDestination(8696U);
    msg.setDestinationEntity(209U);
    msg.bias_psi = 0.5279777085011664;
    msg.bias_r = 0.6978114300758189;
    msg.cog = 0.8431867509948259;
    msg.cyaw = 0.7135520771238268;
    msg.lbl_rej_level = 0.8411335618995653;
    msg.gps_rej_level = 0.9608387370021547;
    msg.custom_x = 0.7664991575772238;
    msg.custom_y = 0.009285501351450898;
    msg.custom_z = 0.4410946512046351;

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
    msg.setTimeStamp(0.831358373874807);
    msg.setSource(53807U);
    msg.setSourceEntity(252U);
    msg.setDestination(61972U);
    msg.setDestinationEntity(203U);
    msg.utc_time = 0.4063466985080816;
    msg.reason = 246U;

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
    msg.setTimeStamp(0.297022093031311);
    msg.setSource(37305U);
    msg.setSourceEntity(217U);
    msg.setDestination(15437U);
    msg.setDestinationEntity(51U);
    msg.utc_time = 0.6388648389078042;
    msg.reason = 34U;

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
    msg.setTimeStamp(0.20904134715424982);
    msg.setSource(55963U);
    msg.setSourceEntity(44U);
    msg.setDestination(36643U);
    msg.setDestinationEntity(68U);
    msg.utc_time = 0.9513005686530549;
    msg.reason = 66U;

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
    msg.setTimeStamp(0.8544644158687315);
    msg.setSource(8909U);
    msg.setSourceEntity(6U);
    msg.setDestination(45669U);
    msg.setDestinationEntity(238U);
    msg.id = 177U;
    msg.range = 0.20516794825581974;
    msg.acceptance = 146U;

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
    msg.setTimeStamp(0.5657109785827917);
    msg.setSource(24629U);
    msg.setSourceEntity(216U);
    msg.setDestination(13747U);
    msg.setDestinationEntity(19U);
    msg.id = 252U;
    msg.range = 0.8965227397429576;
    msg.acceptance = 188U;

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
    msg.setTimeStamp(0.6030776287117573);
    msg.setSource(32844U);
    msg.setSourceEntity(42U);
    msg.setDestination(17414U);
    msg.setDestinationEntity(253U);
    msg.id = 201U;
    msg.range = 0.26669161606067826;
    msg.acceptance = 83U;

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
    msg.setTimeStamp(0.7794126716419488);
    msg.setSource(39318U);
    msg.setSourceEntity(232U);
    msg.setDestination(32264U);
    msg.setDestinationEntity(87U);
    msg.type = 251U;
    msg.reason = 194U;
    msg.value = 0.5010159353202052;
    msg.timestep = 0.8151902031395315;

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
    msg.setTimeStamp(0.007216470254780227);
    msg.setSource(11077U);
    msg.setSourceEntity(86U);
    msg.setDestination(50523U);
    msg.setDestinationEntity(55U);
    msg.type = 3U;
    msg.reason = 51U;
    msg.value = 0.7552097229774447;
    msg.timestep = 0.7731672658884436;

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
    msg.setTimeStamp(0.4692211269949583);
    msg.setSource(59439U);
    msg.setSourceEntity(155U);
    msg.setDestination(1537U);
    msg.setDestinationEntity(247U);
    msg.type = 158U;
    msg.reason = 176U;
    msg.value = 0.11009764698766078;
    msg.timestep = 0.30201721121512026;

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
    msg.setTimeStamp(0.7855300232326483);
    msg.setSource(31100U);
    msg.setSourceEntity(35U);
    msg.setDestination(16182U);
    msg.setDestinationEntity(121U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QWNLTMURPKVBTKJAHEVPFOCVPECAGQOAVPNCCDERSXXCTZOZGXJBDLQKYQVIBVHOYJZKHVPKTNALLNJHQQENBIKUIQGDDMUZLRYZGCSFURXCYALGIBSORMRIAQWNPXINTNBBFOTOSHQYZXXUGWMVZEUXCONWB");
    tmp_msg_0.lat = 0.9363554202700369;
    tmp_msg_0.lon = 0.16442158999850054;
    tmp_msg_0.depth = 0.08480855455002478;
    tmp_msg_0.query_channel = 225U;
    tmp_msg_0.reply_channel = 38U;
    tmp_msg_0.transponder_delay = 169U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.9167248213465148;
    msg.y = 0.9425968576879943;
    msg.var_x = 0.14145852640599332;
    msg.var_y = 0.08359621796499694;
    msg.distance = 0.5994080592692149;

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
    msg.setTimeStamp(0.010228953568568455);
    msg.setSource(40630U);
    msg.setSourceEntity(64U);
    msg.setDestination(18805U);
    msg.setDestinationEntity(30U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("JBKLFNXZZBDYFYZOIBSGSTRCFUHYBXJTZOOPPELKSRMFHPDUOOECSUMUHBUYZLJUPAXPGPJAFVXALSPXYFKGOVDCSGFYITBVQGZHQNVEKJWDPQBWHYXEIQQSEOIMCYFVEKTJNLNFLNTGWUTCRMMRDJNQECIDQZVHVRUNUMDHQGGAROYTKJXEMNWIRHKWRATIALJSUMHWMPKVIWBZTYZRSWQEJ");
    tmp_msg_0.lat = 0.5802823918533054;
    tmp_msg_0.lon = 0.4592988933101503;
    tmp_msg_0.depth = 0.5994414661061582;
    tmp_msg_0.query_channel = 22U;
    tmp_msg_0.reply_channel = 13U;
    tmp_msg_0.transponder_delay = 193U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.96613355380386;
    msg.y = 0.32211712199314757;
    msg.var_x = 0.8699242854043123;
    msg.var_y = 0.5533799599276877;
    msg.distance = 0.4802588742720736;

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
    msg.setTimeStamp(0.7918873545268894);
    msg.setSource(2778U);
    msg.setSourceEntity(192U);
    msg.setDestination(46931U);
    msg.setDestinationEntity(48U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ESTXPIUCMWLTKOOTWQZUQNGSHXBLXOEWYVLVWRTDASADMBWUYHOCDWVRUREIQVERGZQHFIORZNEWNAAPWUCZJGGKZDKFFJETUBSMCJPWNTVHXVQMBIJIEYSQLCPTJIYPYQDDOFYPKACIGKZPHOAZSDNRFKBVATMPBDDHNGYFELUCFLFOUICARLPJRMNSVBZMNOLNGEYINKXMSAJRYSHBPLBJIYWFQQHMUHJVKXVT");
    tmp_msg_0.lat = 0.9492909464884591;
    tmp_msg_0.lon = 0.7369126340442487;
    tmp_msg_0.depth = 0.38468971150393827;
    tmp_msg_0.query_channel = 8U;
    tmp_msg_0.reply_channel = 64U;
    tmp_msg_0.transponder_delay = 244U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6169299832974353;
    msg.y = 0.5257341627575377;
    msg.var_x = 0.5722584377843273;
    msg.var_y = 0.4022683391771972;
    msg.distance = 0.11149911852018157;

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
    msg.setTimeStamp(0.43122972793114556);
    msg.setSource(51342U);
    msg.setSourceEntity(209U);
    msg.setDestination(15807U);
    msg.setDestinationEntity(221U);
    msg.state = 133U;

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
    msg.setTimeStamp(0.1085163052252961);
    msg.setSource(15589U);
    msg.setSourceEntity(194U);
    msg.setDestination(13449U);
    msg.setDestinationEntity(1U);
    msg.state = 185U;

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
    msg.setTimeStamp(0.5317294903900228);
    msg.setSource(43711U);
    msg.setSourceEntity(4U);
    msg.setDestination(7234U);
    msg.setDestinationEntity(220U);
    msg.state = 91U;

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
    msg.setTimeStamp(0.46924622172490116);
    msg.setSource(41535U);
    msg.setSourceEntity(112U);
    msg.setDestination(57536U);
    msg.setDestinationEntity(202U);
    msg.x = 0.5440812648425001;
    msg.y = 0.09297068325213498;
    msg.z = 0.72519867142465;

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
    msg.setTimeStamp(0.5327860911446352);
    msg.setSource(17425U);
    msg.setSourceEntity(29U);
    msg.setDestination(57338U);
    msg.setDestinationEntity(1U);
    msg.x = 0.8485851298720397;
    msg.y = 0.9882575898100233;
    msg.z = 0.9092728976417794;

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
    msg.setTimeStamp(0.07594004537752008);
    msg.setSource(40343U);
    msg.setSourceEntity(195U);
    msg.setDestination(16081U);
    msg.setDestinationEntity(139U);
    msg.x = 0.9998185220887631;
    msg.y = 0.1619414772285569;
    msg.z = 0.3481377198152318;

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
    msg.setTimeStamp(0.9512383496571085);
    msg.setSource(64041U);
    msg.setSourceEntity(253U);
    msg.setDestination(2666U);
    msg.setDestinationEntity(145U);
    msg.va = 0.31511805403721116;
    msg.aoa = 0.9895119239104869;
    msg.ssa = 0.2889209894625929;

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
    msg.setTimeStamp(0.48945691947803427);
    msg.setSource(4055U);
    msg.setSourceEntity(227U);
    msg.setDestination(36356U);
    msg.setDestinationEntity(236U);
    msg.va = 0.6566802253267813;
    msg.aoa = 0.5915619541600635;
    msg.ssa = 0.32242024952818915;

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
    msg.setTimeStamp(0.26010951753850653);
    msg.setSource(54765U);
    msg.setSourceEntity(214U);
    msg.setDestination(62558U);
    msg.setDestinationEntity(251U);
    msg.va = 0.019491169774869754;
    msg.aoa = 0.6736366444778671;
    msg.ssa = 0.7807130787581844;

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
    msg.setTimeStamp(0.6308089274660006);
    msg.setSource(59604U);
    msg.setSourceEntity(84U);
    msg.setDestination(20660U);
    msg.setDestinationEntity(228U);
    msg.value = 0.9431679310198625;

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
    msg.setTimeStamp(0.7666686882959556);
    msg.setSource(304U);
    msg.setSourceEntity(29U);
    msg.setDestination(54091U);
    msg.setDestinationEntity(173U);
    msg.value = 0.2271024885851911;

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
    msg.setTimeStamp(0.16388933727959798);
    msg.setSource(21638U);
    msg.setSourceEntity(155U);
    msg.setDestination(29529U);
    msg.setDestinationEntity(76U);
    msg.value = 0.46543735667547814;

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
    msg.setTimeStamp(0.18954091334678447);
    msg.setSource(28115U);
    msg.setSourceEntity(5U);
    msg.setDestination(60614U);
    msg.setDestinationEntity(143U);
    msg.value = 0.9441884302165221;
    msg.z_units = 209U;

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
    msg.setTimeStamp(0.7508833910488703);
    msg.setSource(45931U);
    msg.setSourceEntity(245U);
    msg.setDestination(14016U);
    msg.setDestinationEntity(71U);
    msg.value = 0.5677913867705479;
    msg.z_units = 76U;

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
    msg.setTimeStamp(0.1379004711593973);
    msg.setSource(31044U);
    msg.setSourceEntity(35U);
    msg.setDestination(12529U);
    msg.setDestinationEntity(39U);
    msg.value = 0.1388161365022641;
    msg.z_units = 237U;

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
    msg.setTimeStamp(0.2162899228888735);
    msg.setSource(43703U);
    msg.setSourceEntity(118U);
    msg.setDestination(17097U);
    msg.setDestinationEntity(204U);
    msg.value = 0.6907563565204167;
    msg.speed_units = 107U;

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
    msg.setTimeStamp(0.1352151325571559);
    msg.setSource(49882U);
    msg.setSourceEntity(29U);
    msg.setDestination(29678U);
    msg.setDestinationEntity(39U);
    msg.value = 0.9734690435085043;
    msg.speed_units = 207U;

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
    msg.setTimeStamp(0.2637111362358725);
    msg.setSource(61281U);
    msg.setSourceEntity(72U);
    msg.setDestination(6645U);
    msg.setDestinationEntity(160U);
    msg.value = 0.46073490347253676;
    msg.speed_units = 149U;

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
    msg.setTimeStamp(0.1375154930377429);
    msg.setSource(28638U);
    msg.setSourceEntity(83U);
    msg.setDestination(1841U);
    msg.setDestinationEntity(74U);
    msg.value = 0.11419749457723694;

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
    msg.setTimeStamp(0.4219977855153292);
    msg.setSource(46070U);
    msg.setSourceEntity(126U);
    msg.setDestination(42105U);
    msg.setDestinationEntity(144U);
    msg.value = 0.2126817021750913;

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
    msg.setTimeStamp(0.6735650619681891);
    msg.setSource(3726U);
    msg.setSourceEntity(64U);
    msg.setDestination(42230U);
    msg.setDestinationEntity(163U);
    msg.value = 0.9258659247907397;

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
    msg.setTimeStamp(0.46705201501868);
    msg.setSource(42572U);
    msg.setSourceEntity(93U);
    msg.setDestination(14904U);
    msg.setDestinationEntity(128U);
    msg.value = 0.36322074401717097;

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
    msg.setTimeStamp(0.5490500012519789);
    msg.setSource(64082U);
    msg.setSourceEntity(49U);
    msg.setDestination(40390U);
    msg.setDestinationEntity(167U);
    msg.value = 0.6347495112785105;

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
    msg.setTimeStamp(0.40491878561750994);
    msg.setSource(1311U);
    msg.setSourceEntity(124U);
    msg.setDestination(60937U);
    msg.setDestinationEntity(240U);
    msg.value = 0.6206079409253772;

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
    msg.setTimeStamp(0.9537908758919892);
    msg.setSource(6444U);
    msg.setSourceEntity(88U);
    msg.setDestination(55494U);
    msg.setDestinationEntity(208U);
    msg.value = 0.11365740712591021;

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
    msg.setTimeStamp(0.09244998692623863);
    msg.setSource(49466U);
    msg.setSourceEntity(19U);
    msg.setDestination(27401U);
    msg.setDestinationEntity(115U);
    msg.value = 0.04747985090767748;

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
    msg.setTimeStamp(0.4679139762486898);
    msg.setSource(50757U);
    msg.setSourceEntity(241U);
    msg.setDestination(37431U);
    msg.setDestinationEntity(188U);
    msg.value = 0.48523419067005624;

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
    msg.setTimeStamp(0.24904333422542613);
    msg.setSource(60133U);
    msg.setSourceEntity(14U);
    msg.setDestination(1159U);
    msg.setDestinationEntity(34U);
    msg.path_ref = 2189923154U;
    msg.start_lat = 0.4247534011672225;
    msg.start_lon = 0.5826564912431742;
    msg.start_z = 0.9171978633669985;
    msg.start_z_units = 241U;
    msg.end_lat = 0.33370023561947015;
    msg.end_lon = 0.9638891506394612;
    msg.end_z = 0.15103566874032626;
    msg.end_z_units = 160U;
    msg.speed = 0.7639426995310211;
    msg.speed_units = 185U;
    msg.lradius = 0.23224264456513044;
    msg.flags = 109U;

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
    msg.setTimeStamp(0.7247761425123269);
    msg.setSource(21134U);
    msg.setSourceEntity(60U);
    msg.setDestination(28362U);
    msg.setDestinationEntity(233U);
    msg.path_ref = 3529063630U;
    msg.start_lat = 0.2631807867887648;
    msg.start_lon = 0.5482288597679754;
    msg.start_z = 0.8787248671281537;
    msg.start_z_units = 51U;
    msg.end_lat = 0.7716856825942753;
    msg.end_lon = 0.958317929075992;
    msg.end_z = 0.06533752818590277;
    msg.end_z_units = 172U;
    msg.speed = 0.2577908650417905;
    msg.speed_units = 209U;
    msg.lradius = 0.15494075972221077;
    msg.flags = 118U;

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
    msg.setTimeStamp(0.7974194165915605);
    msg.setSource(23420U);
    msg.setSourceEntity(195U);
    msg.setDestination(7393U);
    msg.setDestinationEntity(11U);
    msg.path_ref = 513057668U;
    msg.start_lat = 0.33819560372645086;
    msg.start_lon = 0.09841695951972351;
    msg.start_z = 0.20140807433197605;
    msg.start_z_units = 45U;
    msg.end_lat = 0.06882654992544424;
    msg.end_lon = 0.27263560215336313;
    msg.end_z = 0.9271065721138655;
    msg.end_z_units = 74U;
    msg.speed = 0.1462087862909407;
    msg.speed_units = 40U;
    msg.lradius = 0.18073340391573123;
    msg.flags = 125U;

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
    msg.setTimeStamp(0.7128781454470622);
    msg.setSource(13380U);
    msg.setSourceEntity(53U);
    msg.setDestination(55182U);
    msg.setDestinationEntity(3U);
    msg.x = 0.843943493286182;
    msg.y = 0.657286498513367;
    msg.z = 0.5595887990726428;
    msg.k = 0.2857464362888982;
    msg.m = 0.48669677413685297;
    msg.n = 0.5270460941243105;
    msg.flags = 4U;

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
    msg.setTimeStamp(0.24285990704328964);
    msg.setSource(19084U);
    msg.setSourceEntity(164U);
    msg.setDestination(39957U);
    msg.setDestinationEntity(229U);
    msg.x = 0.37565062593671716;
    msg.y = 0.2623486147101822;
    msg.z = 0.570923147670247;
    msg.k = 0.0016800311487636943;
    msg.m = 0.06622339193023663;
    msg.n = 0.0695224350527236;
    msg.flags = 31U;

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
    msg.setTimeStamp(0.3969437721657705);
    msg.setSource(56316U);
    msg.setSourceEntity(221U);
    msg.setDestination(51286U);
    msg.setDestinationEntity(69U);
    msg.x = 0.004377949828250016;
    msg.y = 0.9086123312273465;
    msg.z = 0.6993347806402788;
    msg.k = 0.6169242276335558;
    msg.m = 0.03225513248603595;
    msg.n = 0.3077744324636168;
    msg.flags = 63U;

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
    msg.setTimeStamp(0.5741379686544318);
    msg.setSource(30474U);
    msg.setSourceEntity(24U);
    msg.setDestination(64702U);
    msg.setDestinationEntity(245U);
    msg.value = 0.980545487094847;

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
    msg.setTimeStamp(0.2633196202123209);
    msg.setSource(24883U);
    msg.setSourceEntity(216U);
    msg.setDestination(63886U);
    msg.setDestinationEntity(71U);
    msg.value = 0.9304229412625064;

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
    msg.setTimeStamp(0.6249172241934478);
    msg.setSource(63456U);
    msg.setSourceEntity(31U);
    msg.setDestination(38084U);
    msg.setDestinationEntity(151U);
    msg.value = 0.3244302376722267;

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
    msg.setTimeStamp(0.6491315114420427);
    msg.setSource(53923U);
    msg.setSourceEntity(192U);
    msg.setDestination(61574U);
    msg.setDestinationEntity(249U);
    msg.u = 0.17617498214330474;
    msg.v = 0.7989599703069973;
    msg.w = 0.9655670729436853;
    msg.p = 0.5638230655685247;
    msg.q = 0.9170718542555736;
    msg.r = 0.5066439774365531;
    msg.flags = 196U;

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
    msg.setTimeStamp(0.6543951266476333);
    msg.setSource(11379U);
    msg.setSourceEntity(230U);
    msg.setDestination(8602U);
    msg.setDestinationEntity(230U);
    msg.u = 0.2280266363725738;
    msg.v = 0.8430149457365952;
    msg.w = 0.8482609053803911;
    msg.p = 0.8183637452104159;
    msg.q = 0.8387153897226788;
    msg.r = 0.16016462280333021;
    msg.flags = 172U;

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
    msg.setTimeStamp(0.6659782712320352);
    msg.setSource(47170U);
    msg.setSourceEntity(109U);
    msg.setDestination(32044U);
    msg.setDestinationEntity(253U);
    msg.u = 0.42650687803548093;
    msg.v = 0.4823574636653978;
    msg.w = 0.7424018556028107;
    msg.p = 0.8821509861394325;
    msg.q = 0.45693044063134025;
    msg.r = 0.5012161903115578;
    msg.flags = 51U;

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
    msg.setTimeStamp(0.590488753144977);
    msg.setSource(20045U);
    msg.setSourceEntity(169U);
    msg.setDestination(12615U);
    msg.setDestinationEntity(127U);
    msg.path_ref = 2781834582U;
    msg.start_lat = 0.5779076688618874;
    msg.start_lon = 0.38579704590728003;
    msg.start_z = 0.11457201859296295;
    msg.start_z_units = 4U;
    msg.end_lat = 0.09405412050538198;
    msg.end_lon = 0.8184380095826176;
    msg.end_z = 0.4985341770688687;
    msg.end_z_units = 91U;
    msg.lradius = 0.2693245724686224;
    msg.flags = 50U;
    msg.x = 0.2779708899879102;
    msg.y = 0.750115663504703;
    msg.z = 0.31284271286672505;
    msg.vx = 0.1146626337467801;
    msg.vy = 0.5288218611535644;
    msg.vz = 0.5674764794060209;
    msg.course_error = 0.8060175011923866;
    msg.eta = 32858U;

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
    msg.setTimeStamp(0.9364321789590853);
    msg.setSource(34300U);
    msg.setSourceEntity(223U);
    msg.setDestination(24380U);
    msg.setDestinationEntity(82U);
    msg.path_ref = 2747512451U;
    msg.start_lat = 0.3989613026821368;
    msg.start_lon = 0.7575688022493662;
    msg.start_z = 0.6886234000225492;
    msg.start_z_units = 216U;
    msg.end_lat = 0.8235646283507162;
    msg.end_lon = 0.2469945595847255;
    msg.end_z = 0.377813474098909;
    msg.end_z_units = 130U;
    msg.lradius = 0.6992034451139896;
    msg.flags = 100U;
    msg.x = 0.2778270480620232;
    msg.y = 0.8652977041797171;
    msg.z = 0.08437287057536147;
    msg.vx = 0.43587686339807974;
    msg.vy = 0.7394072087198633;
    msg.vz = 0.4126968958794167;
    msg.course_error = 0.16579281498166376;
    msg.eta = 63663U;

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
    msg.setTimeStamp(0.7206224860117108);
    msg.setSource(22347U);
    msg.setSourceEntity(65U);
    msg.setDestination(42174U);
    msg.setDestinationEntity(113U);
    msg.path_ref = 3025943226U;
    msg.start_lat = 0.788824448518212;
    msg.start_lon = 0.27626538306713655;
    msg.start_z = 0.06268983473672929;
    msg.start_z_units = 94U;
    msg.end_lat = 0.4949297885199174;
    msg.end_lon = 0.4399421833609002;
    msg.end_z = 0.6093731919585704;
    msg.end_z_units = 67U;
    msg.lradius = 0.26558698671750036;
    msg.flags = 227U;
    msg.x = 0.9337998600234233;
    msg.y = 0.9174244524150127;
    msg.z = 0.5360910838300132;
    msg.vx = 0.501811434830824;
    msg.vy = 0.3103523908530158;
    msg.vz = 0.25859406340265867;
    msg.course_error = 0.1077797993271411;
    msg.eta = 63798U;

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
    msg.setTimeStamp(0.08141579794874898);
    msg.setSource(30025U);
    msg.setSourceEntity(152U);
    msg.setDestination(36939U);
    msg.setDestinationEntity(180U);
    msg.k = 0.35816318500145206;
    msg.m = 0.6598783340281419;
    msg.n = 0.7461704642642364;

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
    msg.setTimeStamp(0.7014283659662053);
    msg.setSource(41387U);
    msg.setSourceEntity(240U);
    msg.setDestination(50307U);
    msg.setDestinationEntity(111U);
    msg.k = 0.8971959521057777;
    msg.m = 0.2416707505502359;
    msg.n = 0.4281502712944648;

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
    msg.setTimeStamp(0.9528691008006642);
    msg.setSource(16827U);
    msg.setSourceEntity(76U);
    msg.setDestination(46240U);
    msg.setDestinationEntity(146U);
    msg.k = 0.6259902869023671;
    msg.m = 0.585524732901881;
    msg.n = 0.9850931847454718;

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
    msg.setTimeStamp(0.5641184828774264);
    msg.setSource(42309U);
    msg.setSourceEntity(208U);
    msg.setDestination(25193U);
    msg.setDestinationEntity(113U);
    msg.p = 0.09640882869031164;
    msg.i = 0.3542227893856552;
    msg.d = 0.15290682440019265;
    msg.a = 0.15204682614948084;

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
    msg.setTimeStamp(0.058074646223018056);
    msg.setSource(668U);
    msg.setSourceEntity(20U);
    msg.setDestination(14051U);
    msg.setDestinationEntity(78U);
    msg.p = 0.24027472168561126;
    msg.i = 0.8113106897142756;
    msg.d = 0.30948984990643436;
    msg.a = 0.09906257622802239;

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
    msg.setTimeStamp(0.13735381977855843);
    msg.setSource(59876U);
    msg.setSourceEntity(95U);
    msg.setDestination(23123U);
    msg.setDestinationEntity(126U);
    msg.p = 0.24708626507282594;
    msg.i = 0.4563756335553113;
    msg.d = 0.4043636833357833;
    msg.a = 0.31570080737451356;

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
    msg.setTimeStamp(0.3088511672618105);
    msg.setSource(19956U);
    msg.setSourceEntity(90U);
    msg.setDestination(29748U);
    msg.setDestinationEntity(67U);
    msg.op = 108U;

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
    msg.setTimeStamp(0.8616202708841985);
    msg.setSource(13335U);
    msg.setSourceEntity(11U);
    msg.setDestination(32791U);
    msg.setDestinationEntity(42U);
    msg.op = 147U;

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
    msg.setTimeStamp(0.5009821295406087);
    msg.setSource(58982U);
    msg.setSourceEntity(11U);
    msg.setDestination(46520U);
    msg.setDestinationEntity(66U);
    msg.op = 108U;

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
    msg.setTimeStamp(0.9238371987277522);
    msg.setSource(16087U);
    msg.setSourceEntity(84U);
    msg.setDestination(5862U);
    msg.setDestinationEntity(39U);
    msg.x = 0.9156151427866641;
    msg.y = 0.8283556620483423;
    msg.z = 0.23010283915738994;
    msg.vx = 0.065384099178187;
    msg.vy = 0.7780094491347044;
    msg.vz = 0.4442557197589567;
    msg.ax = 0.7588398679288774;
    msg.ay = 0.13213343392264987;
    msg.az = 0.4374478870385162;
    msg.flags = 16963U;

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
    msg.setTimeStamp(0.38746422569319594);
    msg.setSource(49973U);
    msg.setSourceEntity(1U);
    msg.setDestination(46886U);
    msg.setDestinationEntity(177U);
    msg.x = 0.03187077316429621;
    msg.y = 0.9208965487381813;
    msg.z = 0.5799352785985923;
    msg.vx = 0.5290738007608745;
    msg.vy = 0.5810670220278819;
    msg.vz = 0.05989023503252122;
    msg.ax = 0.7082273477523465;
    msg.ay = 0.6744934524553968;
    msg.az = 0.12174539072524937;
    msg.flags = 44153U;

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
    msg.setTimeStamp(0.3605826208294902);
    msg.setSource(29989U);
    msg.setSourceEntity(57U);
    msg.setDestination(46512U);
    msg.setDestinationEntity(31U);
    msg.x = 0.7979593194321287;
    msg.y = 0.48073884902810726;
    msg.z = 0.213191506692474;
    msg.vx = 0.8851251632601216;
    msg.vy = 0.2667700620851985;
    msg.vz = 0.17926617333756123;
    msg.ax = 0.18219284607361974;
    msg.ay = 0.10284656740112219;
    msg.az = 0.021951394314215;
    msg.flags = 22703U;

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
    msg.setTimeStamp(0.8357156282304543);
    msg.setSource(49569U);
    msg.setSourceEntity(163U);
    msg.setDestination(59042U);
    msg.setDestinationEntity(108U);
    msg.value = 0.7754470888815195;

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
    msg.setTimeStamp(0.3215538374434165);
    msg.setSource(713U);
    msg.setSourceEntity(206U);
    msg.setDestination(60248U);
    msg.setDestinationEntity(175U);
    msg.value = 0.23785797533258812;

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
    msg.setTimeStamp(0.5963883741959469);
    msg.setSource(38492U);
    msg.setSourceEntity(119U);
    msg.setDestination(15642U);
    msg.setDestinationEntity(48U);
    msg.value = 0.6290426140073562;

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
    msg.setTimeStamp(0.7575295992089864);
    msg.setSource(43013U);
    msg.setSourceEntity(109U);
    msg.setDestination(41830U);
    msg.setDestinationEntity(222U);
    msg.timeout = 1881U;
    msg.lat = 0.928977990786898;
    msg.lon = 0.6494654830634978;
    msg.z = 0.6597729411588988;
    msg.z_units = 170U;
    msg.speed = 0.7202858301912982;
    msg.speed_units = 206U;
    msg.roll = 0.7207469041869407;
    msg.pitch = 0.9303268022518416;
    msg.yaw = 0.9713878646992277;
    msg.custom.assign("PWRBZAHUUVMFDUQTETWFNLMQOZJCXSKICPPRLNPGPJXXSLNAHQICOACDIXTEVSBIHBDZAMTYJYJNUBAOEYGQDBZKRZXOVJQIIMYCYSQSGIKFLUWT");

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
    msg.setTimeStamp(0.12967941448240927);
    msg.setSource(7077U);
    msg.setSourceEntity(69U);
    msg.setDestination(64427U);
    msg.setDestinationEntity(144U);
    msg.timeout = 6329U;
    msg.lat = 0.0751873116742634;
    msg.lon = 0.3153735718055257;
    msg.z = 0.4056008926442942;
    msg.z_units = 27U;
    msg.speed = 0.9132784483975582;
    msg.speed_units = 9U;
    msg.roll = 0.58809214765244;
    msg.pitch = 0.938060695489772;
    msg.yaw = 0.9515286338844247;
    msg.custom.assign("IPAUZGUYGZWDRPKKXHQGHUNGSNOMCUERQBNIMDIQUTVXACRFJDBZDZLLAMENRXKQZSKFXJVPVUDRMRCSEMYYAXVAPVAETGWEBBULCNWYYNEFUJKPOTDEHOLQSMZELHKWOHBKRLSYKGTXLFNZGXVIZABBWVBUCPIEHJYCCFQHQGTYIF");

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
    msg.setTimeStamp(0.09623715066536043);
    msg.setSource(8132U);
    msg.setSourceEntity(135U);
    msg.setDestination(15050U);
    msg.setDestinationEntity(208U);
    msg.timeout = 48636U;
    msg.lat = 0.89505543905506;
    msg.lon = 0.34106097112833034;
    msg.z = 0.46720590546995233;
    msg.z_units = 58U;
    msg.speed = 0.8393186130455143;
    msg.speed_units = 28U;
    msg.roll = 0.2565298413669287;
    msg.pitch = 0.9966318089329103;
    msg.yaw = 0.33786909006041055;
    msg.custom.assign("UAUOTIVFVKOLJUJMBTFEIGOCUQIASHXNXCOMDFGNVCNPQYOYXBLFNCOEDIWBFPLYCHORLDNMYGUAXITKHYRNVTXGQPZCTRKTNSZJBUXSGQGRSNLHHTAJSXKBZPKQHIXZUSMQGQYQDPRDPDKZWPRFSWJRLSGTJFOJ");

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
    msg.setTimeStamp(0.8188706931776003);
    msg.setSource(58382U);
    msg.setSourceEntity(66U);
    msg.setDestination(2552U);
    msg.setDestinationEntity(161U);
    msg.timeout = 45148U;
    msg.lat = 0.698284622864247;
    msg.lon = 0.6532524834440369;
    msg.z = 0.2919944966413506;
    msg.z_units = 81U;
    msg.speed = 0.3031947738756976;
    msg.speed_units = 146U;
    msg.duration = 35736U;
    msg.radius = 0.49732263562222245;
    msg.flags = 90U;
    msg.custom.assign("ECBWQDRDNEEZOUEXVK");

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
    msg.setTimeStamp(0.16438695667725367);
    msg.setSource(42709U);
    msg.setSourceEntity(164U);
    msg.setDestination(24554U);
    msg.setDestinationEntity(166U);
    msg.timeout = 10603U;
    msg.lat = 0.9659847775299566;
    msg.lon = 0.7694318562357012;
    msg.z = 0.6652084210864612;
    msg.z_units = 48U;
    msg.speed = 0.6468860002172776;
    msg.speed_units = 8U;
    msg.duration = 59562U;
    msg.radius = 0.965475094116754;
    msg.flags = 83U;
    msg.custom.assign("PPQYSKHWWUXDCJPYWWKJYEDJHITRCASQPMLGCBQEWNVSRZHGNABNQUSTLDRZXJAZPGQBWQDRKNESEDNZCDWJGRIUMCHKHSAH");

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
    msg.setTimeStamp(0.38576054070358445);
    msg.setSource(58732U);
    msg.setSourceEntity(118U);
    msg.setDestination(5203U);
    msg.setDestinationEntity(13U);
    msg.timeout = 13482U;
    msg.lat = 0.954530325103808;
    msg.lon = 0.6510399779176681;
    msg.z = 0.005410569579980984;
    msg.z_units = 39U;
    msg.speed = 0.4465997032232971;
    msg.speed_units = 241U;
    msg.duration = 18168U;
    msg.radius = 0.7291288746301843;
    msg.flags = 50U;
    msg.custom.assign("DOIMYEQFZCSPHMQMJVJEMGKAABHPRRWFXQDFRVLDZBHCSCTPNTZQIXCARRGEKOHRTBIOZPGBNTJFBWOOUHHXIGYWXDIYRNHUVOFPUDAVNEQRDMMPXAZLKFQSYJTYQPSIVIREWUULEFTOQYPKJQSJNMGKVEJGGSAKN");

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
    msg.setTimeStamp(0.723903368637973);
    msg.setSource(50741U);
    msg.setSourceEntity(238U);
    msg.setDestination(63028U);
    msg.setDestinationEntity(158U);
    msg.custom.assign("IAQHQDZICZRZHUQEFMJCXWJIPIRYZBDDBMBZZJSNWSOVCNBMUJKWIOSALTFYARFEYWBSMGHFNGGSNKMPGGDFMJKDROHOPCXIXRBKVTWWUEUUWVGZGEXZQNDTHBGGF");

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
    msg.setTimeStamp(0.6257768127751291);
    msg.setSource(3673U);
    msg.setSourceEntity(70U);
    msg.setDestination(3684U);
    msg.setDestinationEntity(215U);
    msg.custom.assign("WZPGAWFLTJTNGQFONKFKYJCMLHWDPSZOMUMHOMKHYPUSCABHXLARNE");

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
    msg.setTimeStamp(0.7044687880142073);
    msg.setSource(12646U);
    msg.setSourceEntity(74U);
    msg.setDestination(17909U);
    msg.setDestinationEntity(116U);
    msg.custom.assign("JZQQVGWQUIRDFEVKHRSSKQUAVIWUOTLGLKZRXSFOMEVAXEMHVZEMCIPRNGSTDSPNZWQAXEONXNUYGIFKPZKXJZRAKHPHVLWPBPMNYDZLYCSVQBAQVRLBBBUCFDGZCTSNEDITHFUKQGJXXFSLGIMDYXGSFAUIVMECGYTMJMSKNJPJDFIXDACBQINCW");

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
    msg.setTimeStamp(0.07142709622122301);
    msg.setSource(28081U);
    msg.setSourceEntity(43U);
    msg.setDestination(26051U);
    msg.setDestinationEntity(30U);
    msg.timeout = 47728U;
    msg.lat = 0.18482857391324736;
    msg.lon = 0.29913905505663274;
    msg.z = 0.24893563900034277;
    msg.z_units = 45U;
    msg.duration = 19702U;
    msg.speed = 0.7397100678726324;
    msg.speed_units = 62U;
    msg.type = 22U;
    msg.radius = 0.4712729684337438;
    msg.length = 0.5365214385965457;
    msg.bearing = 0.7332139090764273;
    msg.direction = 47U;
    msg.custom.assign("OFDEFXHAZHKJXRGFVIFOCAUPSVLISOLEGHXVQKIUEAGFPTDSMYTVKXWDLCCVFKKFRFSCNARGUPEVHROBTZV");

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
    msg.setTimeStamp(0.6413097496846905);
    msg.setSource(15510U);
    msg.setSourceEntity(163U);
    msg.setDestination(15774U);
    msg.setDestinationEntity(109U);
    msg.timeout = 10813U;
    msg.lat = 0.3882053710526896;
    msg.lon = 0.9094381731959537;
    msg.z = 0.36126650390400783;
    msg.z_units = 209U;
    msg.duration = 32295U;
    msg.speed = 0.21051227613166168;
    msg.speed_units = 224U;
    msg.type = 17U;
    msg.radius = 0.5836546781859555;
    msg.length = 0.6773960050866547;
    msg.bearing = 0.6231462659967842;
    msg.direction = 137U;
    msg.custom.assign("CULNVQONKTGAAXCPXMACOOJOISSIQPIEIUCSGIHQZEYDWEFENPXPEXDPFYYSLDAQRWJQXMVFFBMTYMDVWUJMWLRCESJFVBYQTZJKRXBRYBXCKJWDFWSPACBVTVDHDHMZLOVNGPXXLCKRJKQFLQNPOMNEKVZIFVGAPUSCTFZEJNOBTQSMUENWATHKZIRRLLNYLHZDWYSYTWDBGQZRYEH");

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
    msg.setTimeStamp(0.6737717008569121);
    msg.setSource(25165U);
    msg.setSourceEntity(219U);
    msg.setDestination(48394U);
    msg.setDestinationEntity(24U);
    msg.timeout = 11844U;
    msg.lat = 0.6136694230886337;
    msg.lon = 0.5851370502757235;
    msg.z = 0.6307356121811397;
    msg.z_units = 59U;
    msg.duration = 43392U;
    msg.speed = 0.3989278596189718;
    msg.speed_units = 68U;
    msg.type = 54U;
    msg.radius = 0.40276672437950223;
    msg.length = 0.7824631749027107;
    msg.bearing = 0.02771404683299883;
    msg.direction = 91U;
    msg.custom.assign("BZLBPJQJFJOJVEPEWSQLRTUUYPHNSFRONVZNCSLYIXVZQEPCJOGMPECTIQUEIUTBDEAGZUMYQYMLHGTAFCOUVAIAEXDHYXLQOVUJKNBRKEOFLJLFNBYKZHZSMWNLSORTGSAKPRBFGOVAEYTPFHWWJRBMHXDYZUGCUVYZKIARFGMDNMKKVSHOCGBMDTFOAQXKTQNQDSXLWKXQTMBRCXIIGPEKTZAXL");

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
    msg.setTimeStamp(0.9336824422698066);
    msg.setSource(46008U);
    msg.setSourceEntity(254U);
    msg.setDestination(21366U);
    msg.setDestinationEntity(187U);
    msg.duration = 6281U;
    msg.custom.assign("HDBFAHGMIRZFROTTQOWOGBPWGAQBFONVYXBNQEVZPHUTZEHKEAYMGDCGMPEFDYGLL");

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
    msg.setTimeStamp(0.2986353137318617);
    msg.setSource(18004U);
    msg.setSourceEntity(246U);
    msg.setDestination(37417U);
    msg.setDestinationEntity(158U);
    msg.duration = 4770U;
    msg.custom.assign("ZEXVDCBSSHDIGHDYRAGXQUGEXSCAQKHLECCQJVMXOJXYSJNRKFD");

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
    msg.setTimeStamp(0.6683076416116619);
    msg.setSource(44250U);
    msg.setSourceEntity(64U);
    msg.setDestination(44589U);
    msg.setDestinationEntity(241U);
    msg.duration = 6308U;
    msg.custom.assign("DMWTSZKFTSBGEYDOLUSGQGFOOWJLVXBQIOEWPCUQIOVBKDSJTWCYGCEYOHOBTJFIMFYJDNGLPMCRDMBHMSZJHYAIXLRNQPZVUDVEAGUQIKLZVHUFMUXNRPPLEYAKHDZH");

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
    msg.setTimeStamp(0.8998187676080593);
    msg.setSource(20887U);
    msg.setSourceEntity(109U);
    msg.setDestination(22736U);
    msg.setDestinationEntity(119U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3813486165U;
    tmp_msg_0.start_lat = 0.732027706184972;
    tmp_msg_0.start_lon = 0.6023861107021146;
    tmp_msg_0.start_z = 0.09962086945598858;
    tmp_msg_0.start_z_units = 67U;
    tmp_msg_0.end_lat = 0.9411243701450879;
    tmp_msg_0.end_lon = 0.3722321756235696;
    tmp_msg_0.end_z = 0.951103084395739;
    tmp_msg_0.end_z_units = 135U;
    tmp_msg_0.speed = 0.05736497426629761;
    tmp_msg_0.speed_units = 64U;
    tmp_msg_0.lradius = 0.9074106858195243;
    tmp_msg_0.flags = 233U;
    msg.control.set(tmp_msg_0);
    msg.duration = 30954U;
    msg.custom.assign("ZUDCBSSVLRFTUUYEMPEVIOGQFYYVCATHQYXBITEIOCQNHFUMHQODHSDMAVPXRJGQXZXUKAKZPAGIYMLJDNSSPVNCPLWGTWAWJFUKGNFOIXEVADSBTKTACYIOSJEUWADZYKWYB");

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
    msg.setTimeStamp(0.8961767281953351);
    msg.setSource(15767U);
    msg.setSourceEntity(52U);
    msg.setDestination(61837U);
    msg.setDestinationEntity(93U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.26433924333443404;
    tmp_msg_0.z_units = 119U;
    msg.control.set(tmp_msg_0);
    msg.duration = 13146U;
    msg.custom.assign("ADOBOTPSGEIUUHYMPVDECCINZXKBSRUGTXVKVAFFDTMIXYOJHFPPVQBGOJWPTRUJLAJQLNZUYCXLRZITXCGSBMCKIHZLAGWFKCBLNFWJSIAQPUZFZEZGNEWPQBDQUARIGVYOXDUJTMERWCJCYNLMGKOPHCOJOEKFHELMWRBYYOTIDSQNGKLMLRUKPDYNFNXHVITANJSSVAHVJQBEGDSXVUYYWZCDMHAHSBVAEQLIKRQDMNSTBHFXWFWRXZTWE");

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
    msg.setTimeStamp(0.0013945914672782722);
    msg.setSource(10210U);
    msg.setSourceEntity(52U);
    msg.setDestination(3668U);
    msg.setDestinationEntity(176U);
    IMC::DesiredPitch tmp_msg_0;
    tmp_msg_0.value = 0.3184982530590279;
    msg.control.set(tmp_msg_0);
    msg.duration = 25037U;
    msg.custom.assign("XMHULTOWFAQCWAMXSVQIHPUPDFRYECJTDAJSEOLJUKPBDHXUYEFFSEDVMRRENANRQSUGSHJTOBPY");

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
    msg.setTimeStamp(0.8256048944584744);
    msg.setSource(59003U);
    msg.setSourceEntity(90U);
    msg.setDestination(1241U);
    msg.setDestinationEntity(243U);
    msg.timeout = 30109U;
    msg.lat = 0.4781553560038986;
    msg.lon = 0.35287583777157505;
    msg.z = 0.1523961030571761;
    msg.z_units = 127U;
    msg.speed = 0.8631765809616643;
    msg.speed_units = 103U;
    msg.bearing = 0.4639404139555212;
    msg.cross_angle = 0.3050445033297631;
    msg.width = 0.8285873200003737;
    msg.length = 0.6132577743697584;
    msg.hstep = 0.2630459540900856;
    msg.coff = 6U;
    msg.alternation = 16U;
    msg.flags = 40U;
    msg.custom.assign("ERUROEQKMYAOHNLPPZWFBR");

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
    msg.setTimeStamp(0.4078657970187911);
    msg.setSource(25719U);
    msg.setSourceEntity(40U);
    msg.setDestination(28933U);
    msg.setDestinationEntity(50U);
    msg.timeout = 19272U;
    msg.lat = 0.9814767672648204;
    msg.lon = 0.6058259990259965;
    msg.z = 0.5329390880827762;
    msg.z_units = 120U;
    msg.speed = 0.3316883591267136;
    msg.speed_units = 67U;
    msg.bearing = 0.9703693592206875;
    msg.cross_angle = 0.1362081452210514;
    msg.width = 0.22643399093559513;
    msg.length = 0.3240095723288766;
    msg.hstep = 0.00020766038830455358;
    msg.coff = 9U;
    msg.alternation = 196U;
    msg.flags = 203U;
    msg.custom.assign("YCMUHCMYQYLIDXCNIVSPDTSDYFJXAKKESUAXGOIKTRLBVBEOJWSOMLJ");

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
    msg.setTimeStamp(0.6505294770096302);
    msg.setSource(50340U);
    msg.setSourceEntity(105U);
    msg.setDestination(54412U);
    msg.setDestinationEntity(250U);
    msg.timeout = 54324U;
    msg.lat = 0.5121254923676664;
    msg.lon = 0.6326233591931585;
    msg.z = 0.2557384735337359;
    msg.z_units = 242U;
    msg.speed = 0.4925731207582329;
    msg.speed_units = 165U;
    msg.bearing = 0.8374484369864031;
    msg.cross_angle = 0.9081025508091475;
    msg.width = 0.3709788877532282;
    msg.length = 0.3741270834751821;
    msg.hstep = 0.9100191409427334;
    msg.coff = 241U;
    msg.alternation = 155U;
    msg.flags = 187U;
    msg.custom.assign("BIIJXGEVYSHSRJMRMEFNJLOYJHWZNMVPRMTIUVTBZKTKTBHJFPLXGIRAOLPGQHUGRGSOAAZPNAEZVLXFVJONWDQBTEGFWLFPSKMKKSSVDNWOUVNEHPZHTIRTWNNEKBKGHHWTAMBKYDRSPQXFWSRJUCQPCAIJLWZUFDLDVDEE");

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
    msg.setTimeStamp(0.847915349160953);
    msg.setSource(61201U);
    msg.setSourceEntity(39U);
    msg.setDestination(60414U);
    msg.setDestinationEntity(148U);
    msg.timeout = 24123U;
    msg.lat = 0.9049407900164741;
    msg.lon = 0.38627446062656057;
    msg.z = 0.1990895433444515;
    msg.z_units = 212U;
    msg.speed = 0.5581666096174724;
    msg.speed_units = 102U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.49144581737093707;
    tmp_msg_0.y = 0.7942456364097364;
    tmp_msg_0.z = 0.7038266779924849;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("UXIKJPDAVPXRNTTFWUHHLOYVILWNWCWIFGALMZKLZUEATHJQQFYTIHKSSWTMITOXUDPZRAJBRJVZDZJDMHPFMAIBASLCYHQPMAXOQ");

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
    msg.setTimeStamp(0.6922344885164992);
    msg.setSource(32722U);
    msg.setSourceEntity(62U);
    msg.setDestination(20369U);
    msg.setDestinationEntity(32U);
    msg.timeout = 24353U;
    msg.lat = 0.40770732041658864;
    msg.lon = 0.42909604722416805;
    msg.z = 0.1604921993138565;
    msg.z_units = 99U;
    msg.speed = 0.29055165040641706;
    msg.speed_units = 77U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.7179783755432475;
    tmp_msg_0.y = 0.3420601784928716;
    tmp_msg_0.z = 0.9790966382163658;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("SMOWLEIAJFJTWZBQBCELVRTZSGSNPWAQLWPJTRMCWBIENAVEHEDHQNFDDUGAJWPCHZVIOBUPFFBSYCPQSDZBLRUNQZTZMXEVIBBEFONVLAIKIGZMYROIXDXSNMJHTYKGPUJJXXKPMOWJNKAXYTDJFXLHYUHGRGKUC");

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
    msg.setTimeStamp(0.6477685235089569);
    msg.setSource(64658U);
    msg.setSourceEntity(86U);
    msg.setDestination(49100U);
    msg.setDestinationEntity(38U);
    msg.timeout = 64913U;
    msg.lat = 0.07524455497256377;
    msg.lon = 0.021791452175005555;
    msg.z = 0.5503913130026687;
    msg.z_units = 52U;
    msg.speed = 0.4268435259288441;
    msg.speed_units = 119U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.04729502809378794;
    tmp_msg_0.y = 0.17379534021454113;
    tmp_msg_0.z = 0.3006092311448296;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("DDTMEJVGMHTTLNYHQLGNPZWTBALXPVVWRYACJFHULLMBWHFHKL");

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
    msg.setTimeStamp(0.9639728136851875);
    msg.setSource(43586U);
    msg.setSourceEntity(15U);
    msg.setDestination(8360U);
    msg.setDestinationEntity(201U);
    msg.x = 0.667620093557137;
    msg.y = 0.3383797187869859;
    msg.z = 0.17865178963465156;

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
    msg.setTimeStamp(0.017473502734666746);
    msg.setSource(57488U);
    msg.setSourceEntity(98U);
    msg.setDestination(56518U);
    msg.setDestinationEntity(236U);
    msg.x = 0.8385147040882296;
    msg.y = 0.21655289836064795;
    msg.z = 0.5840944466590019;

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
    msg.setTimeStamp(0.3289310742262104);
    msg.setSource(31399U);
    msg.setSourceEntity(177U);
    msg.setDestination(53837U);
    msg.setDestinationEntity(200U);
    msg.x = 0.5448800186332857;
    msg.y = 0.09984781708634527;
    msg.z = 0.894491305285497;

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
    msg.setTimeStamp(0.55886838290121);
    msg.setSource(35668U);
    msg.setSourceEntity(240U);
    msg.setDestination(31505U);
    msg.setDestinationEntity(164U);
    msg.timeout = 19177U;
    msg.lat = 0.4416795106283392;
    msg.lon = 0.4906919335325207;
    msg.z = 0.8827983491918406;
    msg.z_units = 184U;
    msg.amplitude = 0.07364901941780666;
    msg.pitch = 0.4775866388713794;
    msg.speed = 0.2645700775532285;
    msg.speed_units = 233U;
    msg.custom.assign("GDPRNSFMMCAQEZUJEGOKNGFCNQNRYCLEUBNBPSFNTMCQDISYWUDKKDXZAWQVCCHLZSFYESJJGMEMCAAKUVIOEWZWUDIAXVFCWBRVYZDUVYLYTPLRINUCLZYXINPMOKKXWPJZOKXEMSJSPVTLBLQPXGAAXHFZIVWMYOEMHBIVZXYSDOQHFDGTXTOKEPBHRPOHLHHTBTKERGRVJATAWFHDGGSHIJDTBBJYAFROQGPCWILSBKNOWVTRFLXIQN");

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
    msg.setTimeStamp(0.09902967892476822);
    msg.setSource(26041U);
    msg.setSourceEntity(45U);
    msg.setDestination(10717U);
    msg.setDestinationEntity(185U);
    msg.timeout = 33523U;
    msg.lat = 0.2229802437031977;
    msg.lon = 0.18027825535104247;
    msg.z = 0.12232540692191818;
    msg.z_units = 32U;
    msg.amplitude = 0.2997341477857982;
    msg.pitch = 0.16607891828760823;
    msg.speed = 0.8869336835989898;
    msg.speed_units = 206U;
    msg.custom.assign("DWPBQNVZSWOZDGBKICNWLCHVBBFEHGCMZXMUJKKOQVDHUUSXOZNRRRIAWNTEQMDLPZERNATXKEYTLYADIVQEJRWFJYYSVAABCGFNYZKEUUFPPTHSVCAMHIMFDOKDNJDPFVGJNROOPVXUMSBWKZPSPOLPUMBPWDGNHCOHJINLXJSGCTAALAEQEJRELFIQKTZCGLIYXXMXOXYSEQMYQRTGLJW");

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
    msg.setTimeStamp(0.5212857992756856);
    msg.setSource(33715U);
    msg.setSourceEntity(169U);
    msg.setDestination(48761U);
    msg.setDestinationEntity(69U);
    msg.timeout = 53433U;
    msg.lat = 0.0471358005029745;
    msg.lon = 0.9352999876984106;
    msg.z = 0.8677771085391045;
    msg.z_units = 2U;
    msg.amplitude = 0.1122000237183487;
    msg.pitch = 0.37758136219698823;
    msg.speed = 0.8585777117920537;
    msg.speed_units = 116U;
    msg.custom.assign("AXEQRXFDRBDAYCFGADZUOBDJAKSYNLZNHGYWVFMANWEHPBGBKVNQTWIOZHBRUCIAZWMLPCUJPKDURISXGKQJGWRQHEJCLGKPIMZJTPWXDFMWRCUOWDQKJCIAMWBVBYYXMDTGOQULZSHPLSDLHBXUSULVAZTBVPXCVKZDOKEJESBRGTZRIZNPGUOEFAHN");

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
    msg.setTimeStamp(0.8254134235531224);
    msg.setSource(43387U);
    msg.setSourceEntity(147U);
    msg.setDestination(31007U);
    msg.setDestinationEntity(57U);

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
    msg.setTimeStamp(0.717587464486538);
    msg.setSource(9902U);
    msg.setSourceEntity(19U);
    msg.setDestination(16187U);
    msg.setDestinationEntity(55U);

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
    msg.setTimeStamp(0.5522900399077346);
    msg.setSource(40247U);
    msg.setSourceEntity(192U);
    msg.setDestination(19526U);
    msg.setDestinationEntity(189U);

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
    msg.setTimeStamp(0.31775948433345746);
    msg.setSource(15397U);
    msg.setSourceEntity(73U);
    msg.setDestination(45066U);
    msg.setDestinationEntity(57U);
    msg.lat = 0.8792389104097912;
    msg.lon = 0.7694125274926844;
    msg.z = 0.8870705172683038;
    msg.z_units = 207U;
    msg.radius = 0.0749864690924461;
    msg.duration = 63666U;
    msg.speed = 0.28293697886054303;
    msg.speed_units = 127U;
    msg.custom.assign("WAOJGGDROSQJKFPXDJAOPUVUHZIWYNCHWGHBHZVIBQTKMSHNRQMAKSMP");

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
    msg.setTimeStamp(0.4098023154412792);
    msg.setSource(62882U);
    msg.setSourceEntity(15U);
    msg.setDestination(11659U);
    msg.setDestinationEntity(173U);
    msg.lat = 0.8741802572882913;
    msg.lon = 0.665873790184354;
    msg.z = 0.30121657590184236;
    msg.z_units = 172U;
    msg.radius = 0.7261481141735004;
    msg.duration = 54702U;
    msg.speed = 0.0985538206570229;
    msg.speed_units = 204U;
    msg.custom.assign("QHJVNDDBTZRBVAPZWIRPKREFYTQLSNRZJJMKIBLVDEXHAPYNDMLJGWPOACHQZXNZKEVZCUMODUHJTQCQVTGLXTXLNOBWPOMOIEFEKWYWDVLCGRUAHCPMQHOCSE");

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
    msg.setTimeStamp(0.9270331541852929);
    msg.setSource(64027U);
    msg.setSourceEntity(22U);
    msg.setDestination(39678U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.14161520420361573;
    msg.lon = 0.44995641889867566;
    msg.z = 0.6002372377822052;
    msg.z_units = 162U;
    msg.radius = 0.44758676552665777;
    msg.duration = 34790U;
    msg.speed = 0.5006506184938763;
    msg.speed_units = 217U;
    msg.custom.assign("HANTKEYIHTWTJOGAYGVIUSFOSGDJZFNOYHCWCCTGXSCPXCDBCELZLFWETSFZEZEZSNIFGKXLLSBCHPUYBDFUZWMUDROBJMYLMJHXVTJNEWDIFOWHPOEARAAWBVQKRRYMUBGLFRDKVVDKTBLEUKQQYVSPIUNAQNHKVPTIWXMRANVBXJUNTEFZED");

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
    msg.setTimeStamp(0.14243609348518482);
    msg.setSource(47751U);
    msg.setSourceEntity(191U);
    msg.setDestination(25802U);
    msg.setDestinationEntity(219U);
    msg.timeout = 51518U;
    msg.flags = 208U;
    msg.lat = 0.8603048134551547;
    msg.lon = 0.871762873897342;
    msg.start_z = 0.34255584571534436;
    msg.start_z_units = 32U;
    msg.end_z = 0.32419879522123507;
    msg.end_z_units = 208U;
    msg.radius = 0.854467581932939;
    msg.speed = 0.09117803871328456;
    msg.speed_units = 65U;
    msg.custom.assign("FEPNGLBVTEYHRBTSWIRRJMSSWGPHXTDKGDCOIBTONIZCTNXZTLAVKXDSRTIUUCQHMKZMLQJDGJFDAAYAWZLEIIYEORUXUBEPFXVAFJJRNWYOFOLLSJHFRPOJBXOUVJGUSZKDQVKBV");

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
    msg.setTimeStamp(0.7889261144486935);
    msg.setSource(28468U);
    msg.setSourceEntity(203U);
    msg.setDestination(29957U);
    msg.setDestinationEntity(229U);
    msg.timeout = 14652U;
    msg.flags = 133U;
    msg.lat = 0.6630711909638951;
    msg.lon = 0.2175487422809006;
    msg.start_z = 0.6987184979678255;
    msg.start_z_units = 95U;
    msg.end_z = 0.8627247662046059;
    msg.end_z_units = 149U;
    msg.radius = 0.039847908947767796;
    msg.speed = 0.8840130252492291;
    msg.speed_units = 48U;
    msg.custom.assign("OXLFWWDPNCDCFQMBZJZPZJHGGCDIDIBJZ");

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
    msg.setTimeStamp(0.11426532899737307);
    msg.setSource(48064U);
    msg.setSourceEntity(167U);
    msg.setDestination(35765U);
    msg.setDestinationEntity(201U);
    msg.timeout = 40765U;
    msg.flags = 248U;
    msg.lat = 0.10629419835950582;
    msg.lon = 0.9036737568891354;
    msg.start_z = 0.7644772925224562;
    msg.start_z_units = 179U;
    msg.end_z = 0.22107743578222805;
    msg.end_z_units = 189U;
    msg.radius = 0.9279190871262782;
    msg.speed = 0.40884154013949625;
    msg.speed_units = 4U;
    msg.custom.assign("ADZJXPMGFETIDOAZRPEQTQJFNKCLJEYWAFBBEDQRGTYQHFMMZMTNLOGEWPVKAWTHYHSCFXTLDCXKPWWECWXNBOJSATDOIRB");

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
    msg.setTimeStamp(0.9220423117707368);
    msg.setSource(11428U);
    msg.setSourceEntity(206U);
    msg.setDestination(10181U);
    msg.setDestinationEntity(157U);
    msg.timeout = 47053U;
    msg.lat = 0.8084936649925742;
    msg.lon = 0.40341062406719863;
    msg.z = 0.00803758147416489;
    msg.z_units = 54U;
    msg.speed = 0.6550304438196142;
    msg.speed_units = 198U;
    msg.custom.assign("QQVFHUDTWSUEAXMLTWVYBBGCZGVFHCLZIVTDAAMBETKXUJFRELZDPHXFBJNTGKKPGWKRJTQUJIQUSMOEXZPPNAWYSRSNNBJPOLHFPRVIUJNOTLVJTUGHLWVYBCDQDMCEFDFNGNLKIET");

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
    msg.setTimeStamp(0.035217423837726636);
    msg.setSource(18231U);
    msg.setSourceEntity(229U);
    msg.setDestination(16900U);
    msg.setDestinationEntity(152U);
    msg.timeout = 15958U;
    msg.lat = 0.5773255385796601;
    msg.lon = 0.04101044947239252;
    msg.z = 0.901768543420008;
    msg.z_units = 24U;
    msg.speed = 0.2929614332721723;
    msg.speed_units = 108U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8836883424011728;
    tmp_msg_0.y = 0.6372959584468285;
    tmp_msg_0.z = 0.1941912086607398;
    tmp_msg_0.t = 0.8130461989891321;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("IWDKWQUECQVDRMNRVLVNWHIOGZLBFPTNFXKFXTCLPJBIPVXNUTXAJZDXIYYLZZWHPEMCNCWMHGYUJZCJUEDYSGFYLSSZNIKQEOKLCDDUNSXTGETLHZHFQDXHEJIWOEBZICVJKKTVYQPAOROMAFVWVKVPRETYIBKRPNJOXBOERUBIWPBDHF");

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
    msg.setTimeStamp(0.3798855436226244);
    msg.setSource(57023U);
    msg.setSourceEntity(232U);
    msg.setDestination(4557U);
    msg.setDestinationEntity(190U);
    msg.timeout = 12898U;
    msg.lat = 0.23924770655757188;
    msg.lon = 0.09361429293130441;
    msg.z = 0.5923986857389724;
    msg.z_units = 186U;
    msg.speed = 0.40303899489480155;
    msg.speed_units = 43U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.15494796325884352;
    tmp_msg_0.y = 0.7321418899308203;
    tmp_msg_0.z = 0.18930118478348734;
    tmp_msg_0.t = 0.24653508892611142;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PCBMRSZCKTOGVBTIORMEBZEQHMJDQNOALDCHAZMGYCQAGNSYOBJFTFRUUYRUEBWWZINZPEEQHIYBVPRYITAGDJGSSXIKUYU");

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
    msg.setTimeStamp(0.6538286901552097);
    msg.setSource(31129U);
    msg.setSourceEntity(251U);
    msg.setDestination(27585U);
    msg.setDestinationEntity(157U);
    msg.x = 0.2875222945357452;
    msg.y = 0.20317102437228451;
    msg.z = 0.16884736312332227;
    msg.t = 0.6899035141392804;

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
    msg.setTimeStamp(0.5183289145046248);
    msg.setSource(52430U);
    msg.setSourceEntity(27U);
    msg.setDestination(18522U);
    msg.setDestinationEntity(81U);
    msg.x = 0.44408025722729183;
    msg.y = 0.587345486689316;
    msg.z = 0.35300802867228365;
    msg.t = 0.13157427610668837;

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
    msg.setTimeStamp(0.38513230162429457);
    msg.setSource(41954U);
    msg.setSourceEntity(238U);
    msg.setDestination(64956U);
    msg.setDestinationEntity(129U);
    msg.x = 0.8814298801317333;
    msg.y = 0.3528064591880451;
    msg.z = 0.932611811626893;
    msg.t = 0.7516854179930896;

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
    msg.setTimeStamp(0.7175211466851492);
    msg.setSource(15286U);
    msg.setSourceEntity(80U);
    msg.setDestination(1827U);
    msg.setDestinationEntity(6U);
    msg.timeout = 36482U;
    msg.name.assign("BLHZLPYGNGMKIMVGVMDJOIFPKHKNXFKKPJBFNNGSBWVRQYZHLZLUSJPMTHEBPFUACDWRBXQZLWNMBPBOSRKVCTSQUKIXVROEQXSAUGJATOADQTEAUGDEWXYMDZSJ");
    msg.custom.assign("SFXUMCOKPLZUGDMIEWSCOPPCZHWNCCAWEBLGSDNRIYQMTXOKPLZOQ");

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
    msg.setTimeStamp(0.7046181404639054);
    msg.setSource(45153U);
    msg.setSourceEntity(235U);
    msg.setDestination(791U);
    msg.setDestinationEntity(100U);
    msg.timeout = 2580U;
    msg.name.assign("GVMZKQAUUPXDMZHIVEFDBRJJTN");
    msg.custom.assign("YECYYDQNXRWIUMEQAIGSOXT");

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
    msg.setTimeStamp(0.5827227101518471);
    msg.setSource(14250U);
    msg.setSourceEntity(155U);
    msg.setDestination(49079U);
    msg.setDestinationEntity(175U);
    msg.timeout = 39989U;
    msg.name.assign("JHFMRNNCAZGAPYBQYKDXFMHJZRSMYZLHXLUUHVRTKQDENOZUGXTJSWJSXRIUFPGIAKNGWBQABZOFDIMNFFTXOSHZPGIIQCKEOLUECFMCTZGVBDJXXYDIYVLPINGQSTDBDDKAFJLZCWVLPOHWGLYJKPHMCWEOMTQHFXMLN");
    msg.custom.assign("JJUVKTALWQINMBEMMIHCMAMWLARWMDCJPIWPDGTMUPQFZKCJTPBZTPYSCLNTXFZBBOICFVOYYORQBFHYUEUKDGLNPTVQHHQPWLTMPGWDEDLDTZLYKEAYJUWSQIYZEXJRGRJNVHRFIGBREMSUBVZKDJUXSIASHFRGJOLCEORVODEYIOKAXIAWSA");

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
    msg.setTimeStamp(0.41215155860693786);
    msg.setSource(42972U);
    msg.setSourceEntity(6U);
    msg.setDestination(5838U);
    msg.setDestinationEntity(70U);
    msg.lat = 0.40366680414196543;
    msg.lon = 0.7710289611823501;
    msg.z = 0.9730713468201178;
    msg.z_units = 63U;
    msg.speed = 0.24300425302421613;
    msg.speed_units = 222U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 54491U;
    tmp_msg_0.off_x = 0.5678081431687263;
    tmp_msg_0.off_y = 0.4438034846859745;
    tmp_msg_0.off_z = 0.8720353608953311;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.34443041431617627;
    msg.custom.assign("TWFVVMIKXZJXHDBVSXALYBGGWFTJDWIURUTKNKSXIAZCNVEDFMYUHELVWGOROUKEFZBSMPPYNXZMOBWPLDSMOVNASMRASGQCECOBHZIITVMDKHJGETIIBGUNLASGLCVSTYFMQDNHQREHQACNRQRJIKJFKYQOJEMRPSAHWFPWWXXBHCJEXNWBYTZJTZTLRBWPYVXPNPZLJUZRSKNGYVDGFROZYQYOGCAKODPQLUQCHAKEDIUFJIFQDLP");

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
    msg.setTimeStamp(0.2713378022665388);
    msg.setSource(64483U);
    msg.setSourceEntity(12U);
    msg.setDestination(18448U);
    msg.setDestinationEntity(7U);
    msg.lat = 0.4297183402782456;
    msg.lon = 0.5446366641748309;
    msg.z = 0.5622646859259968;
    msg.z_units = 32U;
    msg.speed = 0.2177035550449492;
    msg.speed_units = 35U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.7687343557770051;
    tmp_msg_0.y = 0.25538968470305823;
    tmp_msg_0.z = 0.9471852432836316;
    tmp_msg_0.t = 0.4788432318132241;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.18045762026321377;
    msg.custom.assign("QFIIZFHSFTKDTBIFNNNOBTZINXACYDEFWJUJKPYDPGFXJPZKHTVTKMDLVQZOLZPGGKZBAHDKPOFRASOQATRYOHAWPXZRLOWRQKVGLSMAXRERQWXHNCBNPMXJHUGTSEAICBNGYMJWLIYJQJHMIBTEGWCEAJUGZESHLPDQAVEXECBOSFRGODQCDUHS");

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
    msg.setTimeStamp(0.7605082981905983);
    msg.setSource(11625U);
    msg.setSourceEntity(14U);
    msg.setDestination(63100U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.02102134767698649;
    msg.lon = 0.352080364298894;
    msg.z = 0.964104813072591;
    msg.z_units = 153U;
    msg.speed = 0.80083877370413;
    msg.speed_units = 185U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 64177U;
    tmp_msg_0.off_x = 0.9290434215024661;
    tmp_msg_0.off_y = 0.6912211077672846;
    tmp_msg_0.off_z = 0.09359156143736369;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.6426833783289577;
    msg.custom.assign("LGCMRYBHOBVTAJMNRJXFIJSDXHIUFUEHGYJNPOAAGXCZYKURQHOMTBSVQBPFXFTWGYWKBQJNEOPKHIKNAYSTSMIGBLICRFNADLQFJTLEIMSVXOKYOJJKVWPZXNPZDRLQZKMQZSQTRAXESUKUPQARWCGSUXLHMOVEGOEUZFDWOUVLSTFSEADWMYFDZKDPXMVCAMNWCFL");

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
    msg.setTimeStamp(0.6984656228022106);
    msg.setSource(290U);
    msg.setSourceEntity(215U);
    msg.setDestination(35167U);
    msg.setDestinationEntity(50U);
    msg.vid = 25326U;
    msg.off_x = 0.7097487744220784;
    msg.off_y = 0.7623434724299587;
    msg.off_z = 0.1405864655804978;

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
    msg.setTimeStamp(0.996788770666063);
    msg.setSource(8082U);
    msg.setSourceEntity(32U);
    msg.setDestination(18045U);
    msg.setDestinationEntity(111U);
    msg.vid = 27429U;
    msg.off_x = 0.4271537797763091;
    msg.off_y = 0.6115296818297842;
    msg.off_z = 0.01844418135942094;

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
    msg.setTimeStamp(0.5099440974332592);
    msg.setSource(8681U);
    msg.setSourceEntity(23U);
    msg.setDestination(49755U);
    msg.setDestinationEntity(242U);
    msg.vid = 17270U;
    msg.off_x = 0.197398856498332;
    msg.off_y = 0.2897457798415587;
    msg.off_z = 0.31562791374327637;

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
    msg.setTimeStamp(0.7025403469479848);
    msg.setSource(6045U);
    msg.setSourceEntity(13U);
    msg.setDestination(7057U);
    msg.setDestinationEntity(250U);

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
    msg.setTimeStamp(0.413075220671289);
    msg.setSource(34674U);
    msg.setSourceEntity(248U);
    msg.setDestination(29509U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.2684414103589039);
    msg.setSource(42119U);
    msg.setSourceEntity(115U);
    msg.setDestination(64628U);
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
    msg.setTimeStamp(0.15125069375790778);
    msg.setSource(50902U);
    msg.setSourceEntity(19U);
    msg.setDestination(36259U);
    msg.setDestinationEntity(234U);
    msg.mid = 43540U;

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
    msg.setTimeStamp(0.6320049059485029);
    msg.setSource(7174U);
    msg.setSourceEntity(110U);
    msg.setDestination(56957U);
    msg.setDestinationEntity(211U);
    msg.mid = 17749U;

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
    msg.setTimeStamp(0.9193072549683192);
    msg.setSource(27637U);
    msg.setSourceEntity(33U);
    msg.setDestination(9740U);
    msg.setDestinationEntity(93U);
    msg.mid = 9661U;

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
    msg.setTimeStamp(0.665164907327079);
    msg.setSource(19578U);
    msg.setSourceEntity(217U);
    msg.setDestination(7540U);
    msg.setDestinationEntity(181U);
    msg.state = 9U;
    msg.eta = 64644U;
    msg.info.assign("NJJEKHNPCCLIJFKMVEFGLKSOBPGBOOKSBRNBRTKADRFYTJVKQYDHS");

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
    msg.setTimeStamp(0.027916748139603653);
    msg.setSource(53291U);
    msg.setSourceEntity(126U);
    msg.setDestination(61911U);
    msg.setDestinationEntity(41U);
    msg.state = 166U;
    msg.eta = 40924U;
    msg.info.assign("IEMLQGGCYLBYNHIUDKSEUDWBGNFXBGLAGVXVQNCEGZWBHHFOWUHLIKQBKTJMNRVZPPMKDYRVKMXFWNWAMIFFJDOXFWSBIHCTJBQQMTSXUEPZJLVQLKAXSETOUPHUWDIGLMYRMDGASEJVUZOTNCEPYXARZQKYZITCCNMODFBTJSLZHOTYAHPASEJBVKQFESPZWCRFRAYIFCUSDRNIOUBUOTIPNDOMZVQCPEDZXRXWAGRHLWXNARJCPLYGT");

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
    msg.setTimeStamp(0.3911411489561494);
    msg.setSource(61297U);
    msg.setSourceEntity(142U);
    msg.setDestination(45813U);
    msg.setDestinationEntity(31U);
    msg.state = 212U;
    msg.eta = 56846U;
    msg.info.assign("GHYPHQRVAEMZMPKCUQBKSFNFEEBWXBULYPOVIJGLJIOBSILHMKHMLTVXACYAPNSMPEXGGGLZUSMFBAUVSDNFZVZPOFLCLVTJYGOUJKMASHAPUTRHKLQZIZIXOOWNVDTIRRDEWKDGWBDCYZWOJRSFOBKFNTGWTJCQEVJZWFFYJSCURIEEJTYBSKXMGAKVYPLVTHQZOXJIHYDHMA");

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
    msg.setTimeStamp(0.03130313691250042);
    msg.setSource(20663U);
    msg.setSourceEntity(96U);
    msg.setDestination(36658U);
    msg.setDestinationEntity(0U);
    msg.system = 34875U;
    msg.duration = 23173U;
    msg.speed = 0.565466516736508;
    msg.speed_units = 23U;
    msg.x = 0.41363701795625607;
    msg.y = 0.8350299986434746;
    msg.z = 0.5465713265039754;
    msg.z_units = 113U;

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
    msg.setTimeStamp(0.20088402911773462);
    msg.setSource(395U);
    msg.setSourceEntity(131U);
    msg.setDestination(51816U);
    msg.setDestinationEntity(50U);
    msg.system = 28752U;
    msg.duration = 22442U;
    msg.speed = 0.9223277150705742;
    msg.speed_units = 34U;
    msg.x = 0.6285233153294604;
    msg.y = 0.3564105696580915;
    msg.z = 0.24212149556557683;
    msg.z_units = 14U;

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
    msg.setTimeStamp(0.06713599374179424);
    msg.setSource(53947U);
    msg.setSourceEntity(36U);
    msg.setDestination(49301U);
    msg.setDestinationEntity(171U);
    msg.system = 57574U;
    msg.duration = 14571U;
    msg.speed = 0.5317627157092262;
    msg.speed_units = 223U;
    msg.x = 0.48526152967207326;
    msg.y = 0.5271742066102304;
    msg.z = 0.2528136309669401;
    msg.z_units = 58U;

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
    msg.setTimeStamp(0.798893873706757);
    msg.setSource(31422U);
    msg.setSourceEntity(43U);
    msg.setDestination(43398U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.9967804383810384;
    msg.lon = 0.5773869726146211;
    msg.speed = 0.5982998977735903;
    msg.speed_units = 145U;
    msg.duration = 60184U;
    msg.sys_a = 22122U;
    msg.sys_b = 4301U;
    msg.move_threshold = 0.9463044586845814;

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
    msg.setTimeStamp(0.37768619657768454);
    msg.setSource(45475U);
    msg.setSourceEntity(116U);
    msg.setDestination(61450U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.663938297639059;
    msg.lon = 0.32538384496044914;
    msg.speed = 0.15720921830928225;
    msg.speed_units = 83U;
    msg.duration = 61325U;
    msg.sys_a = 3230U;
    msg.sys_b = 26671U;
    msg.move_threshold = 0.04463863862103801;

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
    msg.setTimeStamp(0.09645536133831711);
    msg.setSource(57649U);
    msg.setSourceEntity(249U);
    msg.setDestination(54490U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.8982266853890264;
    msg.lon = 0.5066377214620259;
    msg.speed = 0.6404125498439203;
    msg.speed_units = 82U;
    msg.duration = 63696U;
    msg.sys_a = 39677U;
    msg.sys_b = 17110U;
    msg.move_threshold = 0.6301222608995146;

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
    msg.setTimeStamp(0.47926572017906655);
    msg.setSource(63560U);
    msg.setSourceEntity(87U);
    msg.setDestination(6233U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.6509649713577793;
    msg.lon = 0.6407077320892676;
    msg.z = 0.8816522913017141;
    msg.z_units = 8U;
    msg.speed = 0.41297916361570153;
    msg.speed_units = 115U;
    msg.custom.assign("UGNEXUMYNDSUIBIAJOZOFGCAHV");

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
    msg.setTimeStamp(0.6201151824462651);
    msg.setSource(15799U);
    msg.setSourceEntity(66U);
    msg.setDestination(50574U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.39526553308753143;
    msg.lon = 0.35302696780268483;
    msg.z = 0.919774569311854;
    msg.z_units = 114U;
    msg.speed = 0.01969155505314535;
    msg.speed_units = 41U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.9561187389547858;
    tmp_msg_0.lon = 0.5797382659357203;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("NEFBNTWSDOWBTYFARMXMEKXSZEBYJGMOBHRUPKSBQTCKWVWLIJOYQBCMEERISZDRXGIAFDSVQKHPZDYKDHFUPJTMPFPXJSJVHAGXMHPITKABHDBJACGYUJXTOUWDLMWPKDZFILIRTQVFORIYITZHEEDZKNQJOWYXRULLAYHOFCMSUVCPZACVSUHBRPKMXOEUNHWYJESAGRTZXFGMQLKBNNXSQUGZIFNNZVYCACOLEGDJNCCQNVLVUGQLQTW");

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
    msg.setTimeStamp(0.43394480011337844);
    msg.setSource(54010U);
    msg.setSourceEntity(205U);
    msg.setDestination(13373U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.687798231807792;
    msg.lon = 0.6952007815976539;
    msg.z = 0.14269972434484723;
    msg.z_units = 186U;
    msg.speed = 0.42725761095389514;
    msg.speed_units = 159U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.44373852306994976;
    tmp_msg_0.lon = 0.13988880883291166;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("IQNQULMEGMZXLVUWQSOGYREOTFKQKRDWZPKNMWTVOFANBDNPYSBYWCZEJQTDSWCDAPJGBFZQDRGZELPKWRKKX");

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
    msg.setTimeStamp(0.6126280883698293);
    msg.setSource(4210U);
    msg.setSourceEntity(17U);
    msg.setDestination(33247U);
    msg.setDestinationEntity(177U);
    msg.lat = 0.31401707820816704;
    msg.lon = 0.47381995364947294;

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
    msg.setTimeStamp(0.4549528383543272);
    msg.setSource(46465U);
    msg.setSourceEntity(0U);
    msg.setDestination(5548U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.8302442921191704;
    msg.lon = 0.42269663093793597;

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
    msg.setTimeStamp(0.9426142516834104);
    msg.setSource(7656U);
    msg.setSourceEntity(251U);
    msg.setDestination(33251U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.1993522169589198;
    msg.lon = 0.9516089327626389;

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
    msg.setTimeStamp(0.7260073821321811);
    msg.setSource(35335U);
    msg.setSourceEntity(187U);
    msg.setDestination(3340U);
    msg.setDestinationEntity(231U);
    msg.timeout = 21540U;
    msg.lat = 0.19850702159657874;
    msg.lon = 0.42410410050054714;
    msg.z = 0.6521937932702593;
    msg.z_units = 67U;
    msg.pitch = 0.9393047104142318;
    msg.amplitude = 0.44203333277236845;
    msg.duration = 34378U;
    msg.speed = 0.8334607830542716;
    msg.speed_units = 237U;
    msg.radius = 0.39150698858830835;
    msg.direction = 74U;
    msg.custom.assign("QEGOJSIFJHJSOZENMXXIULJOKFMMOKKIXLOHGOOJBCTQJYQGHTTBFKIAMLEV");

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
    msg.setTimeStamp(0.08516396543130067);
    msg.setSource(20346U);
    msg.setSourceEntity(172U);
    msg.setDestination(30974U);
    msg.setDestinationEntity(5U);
    msg.timeout = 51079U;
    msg.lat = 0.4662524281820588;
    msg.lon = 0.8898447860534102;
    msg.z = 0.12421905977183145;
    msg.z_units = 212U;
    msg.pitch = 0.5182249855814091;
    msg.amplitude = 0.6131274195952875;
    msg.duration = 34760U;
    msg.speed = 0.8194994179176517;
    msg.speed_units = 32U;
    msg.radius = 0.7367187699740915;
    msg.direction = 105U;
    msg.custom.assign("YLDSMHEMRGFKWUPSVVNMWH");

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
    msg.setTimeStamp(0.6566471536778169);
    msg.setSource(8180U);
    msg.setSourceEntity(186U);
    msg.setDestination(16963U);
    msg.setDestinationEntity(16U);
    msg.timeout = 24246U;
    msg.lat = 0.40736084636703185;
    msg.lon = 0.15924109764347238;
    msg.z = 0.16897382337510714;
    msg.z_units = 50U;
    msg.pitch = 0.17785377853619655;
    msg.amplitude = 0.06088656391191005;
    msg.duration = 3745U;
    msg.speed = 0.9991699424617786;
    msg.speed_units = 253U;
    msg.radius = 0.5067829029113542;
    msg.direction = 242U;
    msg.custom.assign("NTPHAUAVKLOTRCCELABFVYIOZUDAIYPERAJVLRANZSQLGSHFQZOHGINPKBRZNHUCHELTQQOOOYTGDNVKLUDCBIMOMMGOXKNJYKQDJGBQSSJTLKTURFZLWQPUJRZMWYUWBXWTHISWDRCSEXMMYGOUCGEDCQLFKXMOAJSNBNJYYVXYSWQETFVW");

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
    msg.setTimeStamp(0.025032134142294438);
    msg.setSource(43188U);
    msg.setSourceEntity(252U);
    msg.setDestination(48898U);
    msg.setDestinationEntity(86U);
    msg.formation_name.assign("NZLORJORXTUJRSZITVIWVJDPDXMZHYYMRDVZCBCTQLICERTAPKPYQFVPDQKEXNUKYTDXMPCZLOIBOOIQQJXFWTWF");
    msg.reference_frame = 34U;
    msg.custom.assign("VVTIYDPYZAEYWTYGIWQJAOQZRUQGKEHHCDUCRUEHVKFHBEWKVLCUOBIRSOZNLBHRMRAAVUXFTKTDSWHMXBVYQUPNXKJXZJIWYCFMPAJLXWJHOSAGKSNGRCRGVIWGBDFSQKWELJZNQDTZCGGCQSVPMNUODZRNCEDTDKVPGMBOTILMXLZORYOPFQHJSGNQFFTBLBWKJUPPEPWPOHFLMSXRMCMEXTQXAYHFBA");

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
    msg.setTimeStamp(0.9837249062187743);
    msg.setSource(33067U);
    msg.setSourceEntity(93U);
    msg.setDestination(56700U);
    msg.setDestinationEntity(90U);
    msg.formation_name.assign("GWECVUZSRGWHFRQFAHEMAOMFKIZCLYZRYLBHHXYYS");
    msg.reference_frame = 236U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 36448U;
    tmp_msg_0.off_x = 0.07498090068310281;
    tmp_msg_0.off_y = 0.7565464006680768;
    tmp_msg_0.off_z = 0.9891141297239459;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("PVTBQZSEXRIJLOKTUIBOYDFRHDKZCKXDTMQGGDEELCWSXRIERPFRDXBFLYWPKQUMULRZLGFIJGWOTVKQBUYFLXNOHONAFHAMGWASRXJHVGTLIISEWMYHWWBUXTBGJYDLDSEUFVQEWMOYCCRNSRIZOCZYEQJUSOKFAFMSPBPZ");

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
    msg.setTimeStamp(0.052616488214451085);
    msg.setSource(24553U);
    msg.setSourceEntity(125U);
    msg.setDestination(37741U);
    msg.setDestinationEntity(245U);
    msg.formation_name.assign("KCUGRQQCWVRVXXXGJAFMLSSDILSZVKKKBEYONBTJINWTVCWMNKPUZPTNCWFOTVYKNOHJMIWXDXLGUYICPMXQPUGYEHHJERXOSVQLNGDDJHMEBRLBYWJLEHZTFLKFPIEGGGKQRXYOJMZVZAMOSWEBMTFIUVZHZTFYMHMGKUPXBOWINAWQOLJAHVCRBQHBTGAJZQASLEBUNSFNDDFXTTVDD");
    msg.reference_frame = 239U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 51833U;
    tmp_msg_0.off_x = 0.009661435723817058;
    tmp_msg_0.off_y = 0.8102791981262905;
    tmp_msg_0.off_z = 0.42584733210943126;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("CLEQNJDQAZUWOHQYSWKTFXZKIFJDWYFVXBJPJRBWWFLASXVGXSFETNEVYDAYETPGSIMRYATVSLQLRVXUCPLAEHWEADUALOSJAREUMBJIXCCXCOBAUYQSPFZCSGSGLGMHFILCKNAHIVRHGVJDVBTXFQBOTQQGLEYNHK");

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
    msg.setTimeStamp(0.8124826598644302);
    msg.setSource(31355U);
    msg.setSourceEntity(131U);
    msg.setDestination(35653U);
    msg.setDestinationEntity(240U);
    msg.group_name.assign("OKHCCMDZCZVIVTZPZVUJEFXLBNTEGZUWSGMLDUDPDHHAVULYXWBNNGDOAQKYEODYIAVRXQOJSRBCCEGZMQSMJTPWYRGMUYOJVLBAFSKVDROPIBJQADNCLYWHVZRQXL");
    msg.formation_name.assign("UZKVLIHNSGRZOIUCPOGOGXCMWTFLNAQURRSCHQSOADIJQUDZPVCTXBFFGETDCRXGQPKAXMLYRKYVPBIXYEAXSFUKFCDKBVSGMPYNZETRUXNYGNDWGPYTQWFLWVZMLYSEUHONJCVLHDRQKLBSYJWUCYHTLCZOJBONLEFJKEA");
    msg.plan_id.assign("HUZJKENDNNDBIPHVEDSSOVNXWSLMAJXAJAXZJHQVUCLJEQUHNYUZULNXDSEVQEBJSILAMXTCKOKYVWMREZAMZQOTPZWPGWJQRWCNHBHRBTRKXFJWTITJFWSEAICEQKXYIGHKNHOSVAYMMFOLVKBYIAYRMKERQRMTDUUONLFTZSSZCVYCGFPSBCRU");
    msg.description.assign("PJYUIPXBQRTOTLDGVZVINDJJYWCRCCHMQNTZFMJGPHVRLOFRAZPLTUCITNKULMXVHWIBUEJLWSQIGEYGLWMIVTKGYGSVXSBDNEVWKADUEBTDDQMHZKLDJOGSRUFTGQKDYKXBXARNQHOMMRKALMSFRAXYCUHJURIPFWHEVZJFWAXOOBHKHVASIKKEYYXPSTDNUANFGSPXBIAZFZQFCCNJBCWONYEOEXFCOSZLEPQZTZHWJEIQCBYBVQMRLA");
    msg.leader_speed = 0.2785242773916946;
    msg.leader_bank_lim = 0.29426269185655074;
    msg.pos_sim_err_lim = 0.9111958337847502;
    msg.pos_sim_err_wrn = 0.949419979702766;
    msg.pos_sim_err_timeout = 1857U;
    msg.converg_max = 0.21364519298675932;
    msg.converg_timeout = 40306U;
    msg.comms_timeout = 64862U;
    msg.turb_lim = 0.7264215975835977;
    msg.custom.assign("OOLFXDEBVALMFBVGSPDPWXFYBRBYZQKBRBSZUTVGCFXNSOLKONQGXRNMVCWRGJXQZJQHDXIGPMEZGPUGPZORUWVJDSTMTCUDFHWMXZQAURATTQXNTBICZZWUSMJWO");

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
    msg.setTimeStamp(0.16180466828839601);
    msg.setSource(15437U);
    msg.setSourceEntity(201U);
    msg.setDestination(49217U);
    msg.setDestinationEntity(197U);
    msg.group_name.assign("YKNVZRWNPFXRWRMCWBNKPNLWNHZHYEHSPAWEWRFBGJWBUAUGCFVSSIDEFRRAXADZSZZUQYMEOJUHVEBLCI");
    msg.formation_name.assign("CQWHFUQXDDGINCQPVLPRUMQBGNILVPTNJLKFRCYLJKGPPIRKRMQFAGMRAYLBQXDCJVOEHAFUNEJHWCZDOAVWPONLXONRUYOTUQHLEBOOHZYBBYEYQYJMACBDDNDJNRFUNZZSDSGJKHWBVZYRUNIVRSIIXTSWAGVOZIFXVXZTPYPDAMYIJCKMTSJASBX");
    msg.plan_id.assign("DAHOKOGWVJVZHSLEXTEQIODWBDFJLVXCFXYHANSCFFCRFLUQQXWEGFMXQWAOAAGTNWDGRIQWYQSSBYPJHKKQTDRBZNMUJRHUTCLEDIMDJTJWLILBYZMWIEROHTTFCKZZLJSZGZDQKHJCJMISKGBABPOPLBYXSEVVNYIRLQAHSRUYZCTWOFWJGMINDTMXANIVPGKO");
    msg.description.assign("LGTROPARMXASNTQFAKPDWHVSKCEORLUISXKJNXCWTNVJFXEVUPLOONNALQOONGIXDOFMABSUDBTJEZFPBXEUVBKIMRWXYVTZWQMFQUFVLDYHBCXGVZLZWPBZDRZDNEBYGHHPRNYJRTEGKFYHEMHAWIIJHYUYQWGCMBCLDJKFFSETKCTPZFSUMCANUZOHPPQCSKXVIONUESQDIJPLLMMGJJAWGTHKCOIBDAYMVJZHSAWQYQRLSRR");
    msg.leader_speed = 0.7894876766020327;
    msg.leader_bank_lim = 0.2769187985275474;
    msg.pos_sim_err_lim = 0.7876416888284331;
    msg.pos_sim_err_wrn = 0.24983785842691053;
    msg.pos_sim_err_timeout = 18690U;
    msg.converg_max = 0.4698444708337499;
    msg.converg_timeout = 56057U;
    msg.comms_timeout = 6111U;
    msg.turb_lim = 0.8252228639865565;
    msg.custom.assign("IFLTPCPMFXLTZWJCQVQAUDTSNSICNGZUUSUNRZFVDWBCOTYFDNTLRZOSKYQWWIQXWCABDDDIJWQBZVYEZUIGVEPOXEOLNUBGSRIKALZWVHBYFUSPSAUGRSMUJSORNXMOKFYYGKHEBGNWJDYVJIAMBJGCZGPFKXRJAVUEOLHVDNBHHFTRLTFJDCMOXKKZQVJCXRTIMYHPQLPXKEDAEIILXYQAR");

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
    msg.setTimeStamp(0.8780021105703909);
    msg.setSource(19323U);
    msg.setSourceEntity(206U);
    msg.setDestination(13560U);
    msg.setDestinationEntity(150U);
    msg.group_name.assign("TFJGTWWOQFZWKJUGUEZWRNLLYLLXNKGTOMSAJHQRDPTYBYHOKNBTPSUDLKEPQDWERWEADYQXVZIPIQOXIVFPKWHCUZXTYRASJQFQVHPCAYGJJHNIFQUBKMTZSCJMHGFSZBSSPHYYFKSRDBKWDLBVXIKN");
    msg.formation_name.assign("EIBKDYSKMOHXOAAEFLNSEPFJVYYZTFMJXHGWLHFZWFTUKMTYJWMFVYJDOEVHRPPZZAESJJSVZKGUJPYQBWRDMEIXNLLMXOSJHUNQVBKIWOARZBBFUQTGUJVONXHQKFKUDMPNQHKIIWLSRYKIVBNXTRAVOBRGAHGIXCCOTCJDGXNDVGAKFULAEWQWTSMLMRSIPYNGNGQMGTCSOUCCHLPZCDVCWPTRYUQRTNFZDBZQIZHLRE");
    msg.plan_id.assign("ONJIZPAOSHPDWCGFLJWVGOWFTNMEUGNPEDIFNXCLXIDLXZCZIRKEHQPJVYKAXGBYVOYYXQVVSBKHLZBPWAVSICBOKJROAECYCMZXITQGUKKQQRSYFTHEZGQBTPPEQOUHJNHUNDHLRHISDKAKSLPOWXDCREMFFBLNVMGZDGYJKDNUCIW");
    msg.description.assign("QGIVKYFGWUL");
    msg.leader_speed = 0.014607547823891065;
    msg.leader_bank_lim = 0.5985771322955294;
    msg.pos_sim_err_lim = 0.48532716896329386;
    msg.pos_sim_err_wrn = 0.4804913718633985;
    msg.pos_sim_err_timeout = 6210U;
    msg.converg_max = 0.0003851441217916918;
    msg.converg_timeout = 17910U;
    msg.comms_timeout = 16975U;
    msg.turb_lim = 0.31347141555584424;
    msg.custom.assign("JCFEUPEPPSYHFDBHIRIYARPBDGN");

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
    msg.setTimeStamp(0.22483070627348778);
    msg.setSource(49051U);
    msg.setSourceEntity(206U);
    msg.setDestination(10675U);
    msg.setDestinationEntity(53U);
    msg.control_src = 8419U;
    msg.control_ent = 83U;
    msg.timeout = 0.6796588602583534;
    msg.loiter_radius = 0.27121005880244586;
    msg.altitude_interval = 0.6847872010545984;

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
    msg.setTimeStamp(0.19465239351544017);
    msg.setSource(25485U);
    msg.setSourceEntity(184U);
    msg.setDestination(18598U);
    msg.setDestinationEntity(26U);
    msg.control_src = 24338U;
    msg.control_ent = 55U;
    msg.timeout = 0.4481966581204625;
    msg.loiter_radius = 0.03420187139258235;
    msg.altitude_interval = 0.10587921113318122;

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
    msg.setTimeStamp(0.3096511787426408);
    msg.setSource(50541U);
    msg.setSourceEntity(238U);
    msg.setDestination(39894U);
    msg.setDestinationEntity(141U);
    msg.control_src = 57203U;
    msg.control_ent = 4U;
    msg.timeout = 0.8560554642573798;
    msg.loiter_radius = 0.13937095376008635;
    msg.altitude_interval = 0.7071228240316648;

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
    msg.setTimeStamp(0.04410352490139535);
    msg.setSource(62233U);
    msg.setSourceEntity(111U);
    msg.setDestination(62376U);
    msg.setDestinationEntity(95U);
    msg.flags = 14U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8201596145414495;
    tmp_msg_0.speed_units = 41U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.5946243866772476;
    tmp_msg_1.z_units = 117U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.3979472026925289;
    msg.lon = 0.987381109252966;
    msg.radius = 0.9306965894681519;

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
    msg.setTimeStamp(0.3252345947627291);
    msg.setSource(49748U);
    msg.setSourceEntity(55U);
    msg.setDestination(49387U);
    msg.setDestinationEntity(191U);
    msg.flags = 147U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6977722808637933;
    tmp_msg_0.speed_units = 195U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.8936524686429973;
    tmp_msg_1.z_units = 89U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.704915578699274;
    msg.lon = 0.7602320659843649;
    msg.radius = 0.148891583193264;

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
    msg.setTimeStamp(0.9735213613606617);
    msg.setSource(969U);
    msg.setSourceEntity(185U);
    msg.setDestination(63522U);
    msg.setDestinationEntity(221U);
    msg.flags = 21U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8666698110381694;
    tmp_msg_0.speed_units = 228U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.21706501159345593;
    tmp_msg_1.z_units = 222U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.9524461367543351;
    msg.lon = 0.7275051867649573;
    msg.radius = 0.6122355968430162;

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
    msg.setTimeStamp(0.626134077500024);
    msg.setSource(11163U);
    msg.setSourceEntity(72U);
    msg.setDestination(45108U);
    msg.setDestinationEntity(99U);
    msg.control_src = 6983U;
    msg.control_ent = 164U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 243U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.19871767108437488;
    tmp_tmp_msg_0_0.speed_units = 198U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9103819840296268;
    tmp_tmp_msg_0_1.z_units = 18U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.39633824628220704;
    tmp_msg_0.lon = 0.4783251361762555;
    tmp_msg_0.radius = 0.41984681984502825;
    msg.reference.set(tmp_msg_0);
    msg.state = 194U;
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
    msg.setTimeStamp(0.6924934776140484);
    msg.setSource(3099U);
    msg.setSourceEntity(251U);
    msg.setDestination(12477U);
    msg.setDestinationEntity(111U);
    msg.control_src = 25381U;
    msg.control_ent = 181U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 197U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.24758906162365368;
    tmp_tmp_msg_0_0.speed_units = 235U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.3589556620784262;
    tmp_tmp_msg_0_1.z_units = 127U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.49710415462095703;
    tmp_msg_0.lon = 0.969656456418707;
    tmp_msg_0.radius = 0.2623530167505682;
    msg.reference.set(tmp_msg_0);
    msg.state = 246U;
    msg.proximity = 122U;

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
    msg.setTimeStamp(0.8243571028890752);
    msg.setSource(23827U);
    msg.setSourceEntity(14U);
    msg.setDestination(51694U);
    msg.setDestinationEntity(65U);
    msg.control_src = 3897U;
    msg.control_ent = 151U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 143U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.008869887976202584;
    tmp_tmp_msg_0_0.speed_units = 164U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.3190840420962596;
    tmp_tmp_msg_0_1.z_units = 92U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.3813559503698559;
    tmp_msg_0.lon = 0.6785479508224453;
    tmp_msg_0.radius = 0.043354964814481645;
    msg.reference.set(tmp_msg_0);
    msg.state = 149U;
    msg.proximity = 115U;

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
    msg.setTimeStamp(0.12190666933491556);
    msg.setSource(9536U);
    msg.setSourceEntity(178U);
    msg.setDestination(769U);
    msg.setDestinationEntity(23U);
    msg.ax_cmd = 0.9385230650073308;
    msg.ay_cmd = 0.33697510106942774;
    msg.az_cmd = 0.15324936901904307;
    msg.ax_des = 0.9713987152270214;
    msg.ay_des = 0.7498078282045011;
    msg.az_des = 0.9241832748008569;
    msg.virt_err_x = 0.37295040453052763;
    msg.virt_err_y = 0.4734828731311399;
    msg.virt_err_z = 0.4427844287352545;
    msg.surf_fdbk_x = 0.6417198582258955;
    msg.surf_fdbk_y = 0.22192589373056415;
    msg.surf_fdbk_z = 0.4719780229357585;
    msg.surf_unkn_x = 0.5976303009019887;
    msg.surf_unkn_y = 0.5348088492820323;
    msg.surf_unkn_z = 0.21678147938940995;
    msg.ss_x = 0.2057890905710702;
    msg.ss_y = 0.7541772735608115;
    msg.ss_z = 0.3638557406015249;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ZQNKLRITAXQCSYPQBPAMCMJUHGBBYAFDDFROZQLQJBTDSUBFTYJIVQWBHIOHENYLFVSGLMWXFQYHRDLPHXOFQSW");
    tmp_msg_0.dist = 0.5543844683450602;
    tmp_msg_0.err = 0.6324513497971549;
    tmp_msg_0.ctrl_imp = 0.3568737795882164;
    tmp_msg_0.rel_dir_x = 0.9034295274290364;
    tmp_msg_0.rel_dir_y = 0.7354921944265842;
    tmp_msg_0.rel_dir_z = 0.8676450189566636;
    tmp_msg_0.err_x = 0.04253134846095796;
    tmp_msg_0.err_y = 0.26302506141347626;
    tmp_msg_0.err_z = 0.4993862058113252;
    tmp_msg_0.rf_err_x = 0.6281774608623696;
    tmp_msg_0.rf_err_y = 0.4967618795714096;
    tmp_msg_0.rf_err_z = 0.9534525594513872;
    tmp_msg_0.rf_err_vx = 0.7529184088436472;
    tmp_msg_0.rf_err_vy = 0.7380420860332302;
    tmp_msg_0.rf_err_vz = 0.49921076183072344;
    tmp_msg_0.ss_x = 0.8287982512470704;
    tmp_msg_0.ss_y = 0.004332223598497942;
    tmp_msg_0.ss_z = 0.5691551569391731;
    tmp_msg_0.virt_err_x = 0.3356925320316001;
    tmp_msg_0.virt_err_y = 0.20286737983962455;
    tmp_msg_0.virt_err_z = 0.05570830023820139;
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
    msg.setTimeStamp(0.7756123809448958);
    msg.setSource(33735U);
    msg.setSourceEntity(20U);
    msg.setDestination(49674U);
    msg.setDestinationEntity(72U);
    msg.ax_cmd = 0.0009434319282414227;
    msg.ay_cmd = 0.7195132492393801;
    msg.az_cmd = 0.10345890250936307;
    msg.ax_des = 0.11637452435425344;
    msg.ay_des = 0.770522595863776;
    msg.az_des = 0.8204996833829253;
    msg.virt_err_x = 0.11766484948975053;
    msg.virt_err_y = 0.10488039459809628;
    msg.virt_err_z = 0.9255718015631691;
    msg.surf_fdbk_x = 0.35364658688237716;
    msg.surf_fdbk_y = 0.243492975322952;
    msg.surf_fdbk_z = 0.9599292820960842;
    msg.surf_unkn_x = 0.2071917667554637;
    msg.surf_unkn_y = 0.5429097769992641;
    msg.surf_unkn_z = 0.8841483593048843;
    msg.ss_x = 0.2194743768605416;
    msg.ss_y = 0.06849372802520326;
    msg.ss_z = 0.5238976992775789;

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
    msg.setTimeStamp(0.8862823276510321);
    msg.setSource(49028U);
    msg.setSourceEntity(204U);
    msg.setDestination(63241U);
    msg.setDestinationEntity(37U);
    msg.ax_cmd = 0.21165405077361998;
    msg.ay_cmd = 0.22033593804288187;
    msg.az_cmd = 0.1734840936998926;
    msg.ax_des = 0.10064372000501232;
    msg.ay_des = 0.48784756085481296;
    msg.az_des = 0.2280654753224669;
    msg.virt_err_x = 0.46218941364886357;
    msg.virt_err_y = 0.4279834086959504;
    msg.virt_err_z = 0.834997322374221;
    msg.surf_fdbk_x = 0.6580831540107402;
    msg.surf_fdbk_y = 0.25156152873025883;
    msg.surf_fdbk_z = 0.8803216289290796;
    msg.surf_unkn_x = 0.6243271234382994;
    msg.surf_unkn_y = 0.7574794339418913;
    msg.surf_unkn_z = 0.5775461940485788;
    msg.ss_x = 0.6267937056999949;
    msg.ss_y = 0.1123060447931502;
    msg.ss_z = 0.7695979170985698;

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
    msg.setTimeStamp(0.5668908873033826);
    msg.setSource(28740U);
    msg.setSourceEntity(207U);
    msg.setDestination(9541U);
    msg.setDestinationEntity(133U);
    msg.s_id.assign("JVWJRSVZOCBGCHDIGKWJITMSQSPMHPOLKWLNBYLUETWKXIWAODTPQVGKZNPXTLHPGKEIVZYSIYQMEMSCIRAEXCGYOPRYDZYSMDAKMXHTUDYPHQRUSHMXXWQKCLUDLFUFFOERCCHGKSULDBTHDXIZAHONEIZRVGDVQEMJRCA");
    msg.dist = 0.8883441140206784;
    msg.err = 0.12763258046603387;
    msg.ctrl_imp = 0.3039480389563821;
    msg.rel_dir_x = 0.6685443233542485;
    msg.rel_dir_y = 0.7781332988108458;
    msg.rel_dir_z = 0.05082204847331928;
    msg.err_x = 0.4782086792709995;
    msg.err_y = 0.9408708269156946;
    msg.err_z = 0.18264092340260618;
    msg.rf_err_x = 0.5540320290050111;
    msg.rf_err_y = 0.16325830315950907;
    msg.rf_err_z = 0.30262924862914253;
    msg.rf_err_vx = 0.24938653751094675;
    msg.rf_err_vy = 0.3967339330217293;
    msg.rf_err_vz = 0.8838525466235513;
    msg.ss_x = 0.8357607130339055;
    msg.ss_y = 0.6919021941981996;
    msg.ss_z = 0.28242102154860005;
    msg.virt_err_x = 0.10988102928458487;
    msg.virt_err_y = 0.3229543309303148;
    msg.virt_err_z = 0.40244091447721864;

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
    msg.setTimeStamp(0.5391671741053097);
    msg.setSource(12259U);
    msg.setSourceEntity(10U);
    msg.setDestination(63355U);
    msg.setDestinationEntity(117U);
    msg.s_id.assign("ZXEOGRUFBHDMNJAAJXFLNMDCQVLIQBXCGFMAUFZAHBVGYXYEJIWDMTIHYIRHNZYSOSWOJXWEPWRZBLRVIKMOYVUOOBWFLYMKIKNNJNEAQPJLJEQTWBGPVGEBJPDDKALRWKSAMLSHEFTHLTCMQRXXHY");
    msg.dist = 0.21262488496395504;
    msg.err = 0.513768268219436;
    msg.ctrl_imp = 0.4780268550028275;
    msg.rel_dir_x = 0.56672004334594;
    msg.rel_dir_y = 0.811011893859477;
    msg.rel_dir_z = 0.017360427866433104;
    msg.err_x = 0.6265726719163998;
    msg.err_y = 0.3213400358591738;
    msg.err_z = 0.7167256645555677;
    msg.rf_err_x = 0.9866673564283885;
    msg.rf_err_y = 0.03315272213067921;
    msg.rf_err_z = 0.6820277074852689;
    msg.rf_err_vx = 0.9329241343318021;
    msg.rf_err_vy = 0.6296811343465202;
    msg.rf_err_vz = 0.8988134713290341;
    msg.ss_x = 0.5203623738999659;
    msg.ss_y = 0.16830138652207471;
    msg.ss_z = 0.18783748606509154;
    msg.virt_err_x = 0.11630217184478941;
    msg.virt_err_y = 0.3541922259097203;
    msg.virt_err_z = 0.20304977904276345;

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
    msg.setTimeStamp(0.6625834569247098);
    msg.setSource(34489U);
    msg.setSourceEntity(195U);
    msg.setDestination(61153U);
    msg.setDestinationEntity(60U);
    msg.s_id.assign("SDOWEQBDAUDBKHDCQKEIXXEGCUHPDFJMDLKATQAJVWLHYTMVBITHOSHXVZMOPRNBXIYGFJXBTCJVBUPDYXKVEMUZDWJRQSRCCVCASDZEBLFCIGAZLULHHPYCYIYPFMYEFMAJTAEGKTRYBXNAHODIJNAIGYONLKNEUWJGEVSONXLNUGSLGOWCJZZUVQRTUEQKQPKPZBRTW");
    msg.dist = 0.8443850485606791;
    msg.err = 0.34151988157974167;
    msg.ctrl_imp = 0.6050990931137348;
    msg.rel_dir_x = 0.8565623980949715;
    msg.rel_dir_y = 0.9855211286220403;
    msg.rel_dir_z = 0.3379813486609129;
    msg.err_x = 0.18007175063219172;
    msg.err_y = 0.23946617353578104;
    msg.err_z = 0.9827411279870464;
    msg.rf_err_x = 0.6873887136687313;
    msg.rf_err_y = 0.6439805495096321;
    msg.rf_err_z = 0.6253424957807782;
    msg.rf_err_vx = 0.04824658056263431;
    msg.rf_err_vy = 0.19427374940982478;
    msg.rf_err_vz = 0.12444578548593443;
    msg.ss_x = 0.8629696536628909;
    msg.ss_y = 0.18916392380584546;
    msg.ss_z = 0.847022553814357;
    msg.virt_err_x = 0.6497961157574752;
    msg.virt_err_y = 0.5171784693616419;
    msg.virt_err_z = 0.16088222943199748;

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
    msg.setTimeStamp(0.13058670196939182);
    msg.setSource(16701U);
    msg.setSourceEntity(45U);
    msg.setDestination(41840U);
    msg.setDestinationEntity(201U);
    msg.timeout = 52005U;
    msg.rpm = 0.5636794189120709;
    msg.direction = 108U;
    msg.custom.assign("EUFXDFKFTKOCMGSQKWDZHALVEIMQYSVOWRSMRFGIMCXJDCEEZUXLEWTJRRBXPKMBVEBFHQNDFYQVLUQPTDWCBMNRWFUQCYPUVMKBWLEXNKGMTBPBXCLZHSJEPZGSYXBIFOHZCHPKYOGLZQLQKINZAJWAGXXXONUCKAAQSOAAYDJTTUQKJUSGNBUHLVOPYDRSHGWZCGTPRTILYHOMIEIZGVWFTOOMIRCYJVSRVADFRWVUNAPNPJIIYHJJTNDLE");

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
    msg.setTimeStamp(0.9772254066194943);
    msg.setSource(55664U);
    msg.setSourceEntity(111U);
    msg.setDestination(21194U);
    msg.setDestinationEntity(20U);
    msg.timeout = 48074U;
    msg.rpm = 0.6365111715985354;
    msg.direction = 89U;
    msg.custom.assign("FRPUIECKCIVKXRPSODLUYADNKKVCYUDDMNDAVGFZTIGPSQEHVOKNTSBAXQVYTNZEKMFCEWIPYFVN");

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
    msg.setTimeStamp(0.10698424001153162);
    msg.setSource(62077U);
    msg.setSourceEntity(117U);
    msg.setDestination(26197U);
    msg.setDestinationEntity(85U);
    msg.timeout = 33333U;
    msg.rpm = 0.9131093110822873;
    msg.direction = 136U;
    msg.custom.assign("EFVCJEBFHYFWLPFODOWERRUCVQLTKQDCPTYXJLOKBRFNVZBDJWSDANJLYAVCLVUWCXSMKNMJUNFQXZYTMNNGJJPEEASQTLDPKWSGLAVIAAIYOSPMQISMSPXGXIUWZYUJFGXPLJANXFHWDWGHBEBUNCTMVAKYUKKCTRILSBKMMBRIBPRGGVVHZGHFEGZIZSUPOCYTDCURHTFYWHECXHGOXRYMXZISPMOQEZNKI");

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
    msg.setTimeStamp(0.8952367451657004);
    msg.setSource(60661U);
    msg.setSourceEntity(90U);
    msg.setDestination(19496U);
    msg.setDestinationEntity(207U);
    msg.formation_name.assign("NAJPTJISCJWNQTKHVPGJOYQYCNBGPYWWIVGPTBFKVTQDAFWIHMRVAZKTKDORSMJYEHRWQBQMDLWNBVYCOEZUOAFGLBJGPXDUZXKUWQDMUWSQLCGXNLFQZFREOPARHXVLFBHUZFLRYIXMTYPCIVNPBYRXMLFAMAJEXCOOOKCOUSIVD");
    msg.type = 241U;
    msg.op = 33U;
    msg.group_name.assign("UANEAMPLCMPPQEJYKMXMAGZLVYTTBVEMFBMTQTFFYUVJWXOYRUODOYZNBXGDBRKJZVZHHSIBHIEUTYNVSWZNODEIZSZIIS");
    msg.plan_id.assign("STWUAJWOQZBPOOSCSKWEAWNOARWMXFAIXBMLDTTSYXVKXYQDZLIXMPMGRQYPUTRPQZHEVOXBMYLLPORISGDAN");
    msg.description.assign("AYTWODPZCA");
    msg.reference_frame = 98U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 11884U;
    tmp_msg_0.off_x = 0.8697178399620454;
    tmp_msg_0.off_y = 0.9909380881919736;
    tmp_msg_0.off_z = 0.52082395173809;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.052745023941863756;
    msg.leader_speed_min = 0.8163564006366838;
    msg.leader_speed_max = 0.5304891845702502;
    msg.leader_alt_min = 0.38083420434762916;
    msg.leader_alt_max = 0.5194720073821731;
    msg.pos_sim_err_lim = 0.05517879879974075;
    msg.pos_sim_err_wrn = 0.47400838423266933;
    msg.pos_sim_err_timeout = 19066U;
    msg.converg_max = 0.4769665681346599;
    msg.converg_timeout = 59966U;
    msg.comms_timeout = 14630U;
    msg.turb_lim = 0.5219827176513508;
    msg.custom.assign("HLZMESOCORQ");

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
    msg.setTimeStamp(0.6279433302353274);
    msg.setSource(40270U);
    msg.setSourceEntity(94U);
    msg.setDestination(62546U);
    msg.setDestinationEntity(220U);
    msg.formation_name.assign("REYSQFZHFCRKNOHHPMSGRDUUQLRHGEHTLXUAEYSCYEOXFTBJTJYELFOBMMVATUMTZDOOORHLHBQIXBWPPLL");
    msg.type = 171U;
    msg.op = 239U;
    msg.group_name.assign("JCLCEBZFXODTPMMDQJZZGFUCPMV");
    msg.plan_id.assign("XEBORWCLUXSNANYRNUBJLKVMTZNEPCXCBOGUOBHDJEEJSSSIHXHYQZNKFPMFSOUTIRASAQDTUPYNKGQELFQCCIPBSUDWIWWDQQDUQKAERDJXTJQHTMYZYWNLZCBFPYMZRKODSWVVFLTPBYMHOPPKOWNIMXRHJRXCAHAEBFBZRGOMAIGQCJOTLSVFGCM");
    msg.description.assign("IXSDMGHYKTJURWRJEEHXHITPMQABYIGUMFBUODWHFSDXKXULLXZHUZBJGSXNVALPQZWRTNGYKTFQKYTFUJMRKQRVLLVHSJXTVWOCSOMVRJEANDRIFCNQEYGEMUNKEAVMUBSQRTIOBWKIPOPAOEGFYULAHZNICRBJCOWJDFUPMNESTFHOBBWVIIZYXYGJDXQABCGDZHMQQSLOLSEIKDCWZAYNPLPAQCEVXJLMCNYGDTK");
    msg.reference_frame = 70U;
    msg.leader_bank_lim = 0.23871074695496697;
    msg.leader_speed_min = 0.33149053611621604;
    msg.leader_speed_max = 0.42141743472939064;
    msg.leader_alt_min = 0.5682615563733315;
    msg.leader_alt_max = 0.1309885714962925;
    msg.pos_sim_err_lim = 0.4649933199961277;
    msg.pos_sim_err_wrn = 0.8765732313166144;
    msg.pos_sim_err_timeout = 59358U;
    msg.converg_max = 0.7077314060300895;
    msg.converg_timeout = 42588U;
    msg.comms_timeout = 34615U;
    msg.turb_lim = 0.10512341641608969;
    msg.custom.assign("RGXUVNPSGEDAPECJJXQWLTGDZEWWCLMMAFHQEOUFMNYIMO");

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
    msg.setTimeStamp(0.2497480696397565);
    msg.setSource(12308U);
    msg.setSourceEntity(227U);
    msg.setDestination(15048U);
    msg.setDestinationEntity(67U);
    msg.formation_name.assign("RBGRLVUTBXSNJOVIQXJQTEDYUCLJKNSCDSSREDRTTPRODBZQQPOVRDMPJYQNFPCXUPLDCFWUXLYULBVFJUBIRZGBZJESNHZM");
    msg.type = 166U;
    msg.op = 30U;
    msg.group_name.assign("RZAGFRDUQSWJNXAKHTDBPKBWTYFZIRRXGKRQAJJXWFTGOCNJBOFYCLFVLKDVHQUHWFKAGIIGXIEALXNLXS");
    msg.plan_id.assign("IRUULFGQUNATQPVWRRNPIJZITVDKKSTWEYZUCOIBYOSCNBXBBIWVCBAWIOZSVSACXNPHHHMRGTZDYJZLEXSHABVQHPDIRBNUYMTEKGVYSUWFJFMXGNSLHXILTTKMEECVLXEUXOYBTAWDOQRRGLFJZGMTQVYPOUOAR");
    msg.description.assign("RMWBRQNQNFAEWQRSLVKUYXKNZKSHHWKRLUTWWXPFDFOZUPTARXYDQRHKLECLBVPGNQEGUOTSOTNSWFGBJKCNLJMDUKNMIOBINBGVYSAYBSTHPETBGVJQZPQIWHEFROHWRXLHBDCVMXATGFOSTQI");
    msg.reference_frame = 250U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 15917U;
    tmp_msg_0.off_x = 0.05629059429114058;
    tmp_msg_0.off_y = 0.21789210606426934;
    tmp_msg_0.off_z = 0.6372489759452133;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.7015514694404785;
    msg.leader_speed_min = 0.52906477765147;
    msg.leader_speed_max = 0.19901251094830108;
    msg.leader_alt_min = 0.700676612538702;
    msg.leader_alt_max = 0.01256211000977614;
    msg.pos_sim_err_lim = 0.935516309077832;
    msg.pos_sim_err_wrn = 0.7455693709544975;
    msg.pos_sim_err_timeout = 19522U;
    msg.converg_max = 0.49984337059580586;
    msg.converg_timeout = 26201U;
    msg.comms_timeout = 23651U;
    msg.turb_lim = 0.9418557320460273;
    msg.custom.assign("ZAUFQTBCZJPPOVZOOSTZLCGREJYEFIMSBOUQZKIZWXCYNGVLJFAAMGPCDNNHNWCRB");

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
    msg.setTimeStamp(0.6436960222861539);
    msg.setSource(54373U);
    msg.setSourceEntity(47U);
    msg.setDestination(36631U);
    msg.setDestinationEntity(181U);
    msg.timeout = 18961U;
    msg.lat = 0.16281221719495131;
    msg.lon = 0.319041749590799;
    msg.z = 0.2239778436279185;
    msg.z_units = 26U;
    msg.speed = 0.4969216845631774;
    msg.speed_units = 77U;
    msg.custom.assign("SKWLLPIEUNZLMEIZXDHMOKQFQGSMTTXBUQTXDTOIDQKPCZECLAJLECONSFCFRSPKNKYVUVBQBSWIYGNRDEHEGFVWXKYXNPSTDHUZBVG");

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
    msg.setTimeStamp(0.7324557813123912);
    msg.setSource(26343U);
    msg.setSourceEntity(27U);
    msg.setDestination(11548U);
    msg.setDestinationEntity(227U);
    msg.timeout = 63134U;
    msg.lat = 0.6526774040480554;
    msg.lon = 0.439781844932155;
    msg.z = 0.32729640441500096;
    msg.z_units = 157U;
    msg.speed = 0.5884732889955621;
    msg.speed_units = 51U;
    msg.custom.assign("NLFQYAIDLGOLRHMEIEUNSRBFUPARASTIVLGMYYEUNJYKBAJNXWMKIDBDJXDVTCHFIJXBOPNAIYRVCKBHQEMNBYHLCPLTZDTGEGWCMMCWDQTXKZMSEIBXRJPWZQJXLSOUPBXPKXZWHVFBWFUSMSZLWCQQFIJGFUZGROHTUYDKD");

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
    msg.setTimeStamp(0.47118210319420095);
    msg.setSource(14528U);
    msg.setSourceEntity(192U);
    msg.setDestination(2711U);
    msg.setDestinationEntity(195U);
    msg.timeout = 37716U;
    msg.lat = 0.006983432309805582;
    msg.lon = 0.737820025260933;
    msg.z = 0.3400368895318209;
    msg.z_units = 146U;
    msg.speed = 0.17440357893073588;
    msg.speed_units = 187U;
    msg.custom.assign("ZBFMRKTMOXPXUPICNDRSGYINKWSFSMUDLEKUCIEZOEITHFPJFAHYGIRYAMWREQJPVGAEAVQVQGNBDLYYPBACTNJYAXWWXHFDTUSVTOZYAMEILVBFLDXGVXSDOFHSQBTZZBMMCPMRPTBUXSGJFQLCPTEXUEZNRHREKZ");

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
    msg.setTimeStamp(0.24956677409446126);
    msg.setSource(49070U);
    msg.setSourceEntity(187U);
    msg.setDestination(40587U);
    msg.setDestinationEntity(230U);
    msg.timeout = 31379U;
    msg.lat = 0.7131411694308576;
    msg.lon = 0.43202454617966857;
    msg.z = 0.22028890685584424;
    msg.z_units = 6U;
    msg.speed = 0.9145559574698732;
    msg.speed_units = 154U;
    msg.custom.assign("UVXSCFNBEFFGZCLYERPVPGPMIDAUEMCWCOQJMBACCONBKDHBVPINGMUTYJQKFHYSPTNQKAKACNCFKJZXMFESXT");

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
    msg.setTimeStamp(0.5829345511446916);
    msg.setSource(32490U);
    msg.setSourceEntity(80U);
    msg.setDestination(24972U);
    msg.setDestinationEntity(100U);
    msg.timeout = 9604U;
    msg.lat = 0.9198496279262367;
    msg.lon = 0.9241531443568913;
    msg.z = 0.19354295849254688;
    msg.z_units = 127U;
    msg.speed = 0.7425286925180334;
    msg.speed_units = 79U;
    msg.custom.assign("MTUXTEIKIOVF");

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
    msg.setTimeStamp(0.9789953746936971);
    msg.setSource(35552U);
    msg.setSourceEntity(253U);
    msg.setDestination(44067U);
    msg.setDestinationEntity(224U);
    msg.timeout = 62624U;
    msg.lat = 0.9915207977374247;
    msg.lon = 0.30738461987224364;
    msg.z = 0.12362358277696639;
    msg.z_units = 223U;
    msg.speed = 0.8327296913881054;
    msg.speed_units = 217U;
    msg.custom.assign("YGAHUKGIQWFQKIVJBWTXYODZXZSZJLCJXAEPLKCOEXKNAEZOEQKVLDIAETNWSV");

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
    msg.setTimeStamp(0.847989181685456);
    msg.setSource(20806U);
    msg.setSourceEntity(22U);
    msg.setDestination(43592U);
    msg.setDestinationEntity(221U);
    msg.arrival_time = 0.5391977855698291;
    msg.lat = 0.3267265268362972;
    msg.lon = 0.914904047171371;
    msg.z = 0.047561585873819645;
    msg.z_units = 42U;
    msg.travel_z = 0.13271420071016526;
    msg.travel_z_units = 65U;
    msg.delayed = 179U;

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
    msg.setTimeStamp(0.9227926543816053);
    msg.setSource(28992U);
    msg.setSourceEntity(133U);
    msg.setDestination(28611U);
    msg.setDestinationEntity(110U);
    msg.arrival_time = 0.21006031795249303;
    msg.lat = 0.7915336922430392;
    msg.lon = 0.9735849132763935;
    msg.z = 0.02047463388873083;
    msg.z_units = 10U;
    msg.travel_z = 0.6279490145366591;
    msg.travel_z_units = 10U;
    msg.delayed = 64U;

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
    msg.setTimeStamp(0.3582566747962628);
    msg.setSource(19461U);
    msg.setSourceEntity(146U);
    msg.setDestination(6057U);
    msg.setDestinationEntity(14U);
    msg.arrival_time = 0.3890486458598734;
    msg.lat = 0.5840055675238897;
    msg.lon = 0.9747956778936974;
    msg.z = 0.804956302939509;
    msg.z_units = 194U;
    msg.travel_z = 0.7375328687172222;
    msg.travel_z_units = 127U;
    msg.delayed = 55U;

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
    msg.setTimeStamp(0.7559322801143);
    msg.setSource(58149U);
    msg.setSourceEntity(39U);
    msg.setDestination(8162U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.052181511219039245;
    msg.lon = 0.3082411276358413;
    msg.z = 0.33174233877673354;
    msg.z_units = 178U;
    msg.speed = 0.3165540716702425;
    msg.speed_units = 7U;
    msg.bearing = 0.4045160654375968;
    msg.cross_angle = 0.18986182697438903;
    msg.width = 0.7371779917603086;
    msg.length = 0.8134742126302937;
    msg.coff = 162U;
    msg.angaperture = 0.0040897861503880195;
    msg.range = 49857U;
    msg.overlap = 185U;
    msg.flags = 177U;
    msg.custom.assign("BVLQWDOPSVLIBKPVSNUCHJGAWOJBYPEDUKIWWQPGCGMRGIEPANQXDOEUVJMTXFDGANQSHDYUCZEJKNBSTZTYPXKCXPLEXFVTJDUPBLGBBGFIPHSQFUKZJRXNVJMXIMIFSORVDYCEXOSMWCOQTLWVYGDFDWOZQEWZGWFCCEAJURBURCKYHZZHAEHOWNZYSTKKCRGQYLYOJTSMASXRRJFMLMNXKFDTNYBAZALAIH");

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
    msg.setTimeStamp(0.8987480462818951);
    msg.setSource(2503U);
    msg.setSourceEntity(159U);
    msg.setDestination(22206U);
    msg.setDestinationEntity(46U);
    msg.lat = 0.6687684519833249;
    msg.lon = 0.3877880923473803;
    msg.z = 0.2761568040186113;
    msg.z_units = 34U;
    msg.speed = 0.3410107586788308;
    msg.speed_units = 224U;
    msg.bearing = 0.31365509824631477;
    msg.cross_angle = 0.9322391713445266;
    msg.width = 0.7462114245665448;
    msg.length = 0.7473170270987403;
    msg.coff = 235U;
    msg.angaperture = 0.5152604692877106;
    msg.range = 5350U;
    msg.overlap = 16U;
    msg.flags = 209U;
    msg.custom.assign("MYDKFSNIVJJOKEUMKKOZJNHZXPCBMODUJMTKCPZLYFDKEHDNPJVZQRJPIXFHLLFQILNDLEPKTPELAFDGBXNHDZNBZUTTJMAQFXWBWXFBWCRGLAYXVBDBYIPVSDITMJUJUSGYMHICGAIOHNZEVWWYXRVIZKRLQYAYBQSZOMMVXOQEAGEWJGONESOROYQGBFTUWLXYSNVGEQZWRFHARTBQTSIOTKHCHVGCGCNUKSVWLRMCR");

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
    msg.setTimeStamp(0.2656080733042254);
    msg.setSource(56534U);
    msg.setSourceEntity(201U);
    msg.setDestination(6579U);
    msg.setDestinationEntity(178U);
    msg.lat = 0.5542090361501776;
    msg.lon = 0.06825686671978903;
    msg.z = 0.8524009675317775;
    msg.z_units = 51U;
    msg.speed = 0.7670516888707735;
    msg.speed_units = 212U;
    msg.bearing = 0.28592598847287876;
    msg.cross_angle = 0.25911077670261595;
    msg.width = 0.5467534513523564;
    msg.length = 0.5991334169492034;
    msg.coff = 156U;
    msg.angaperture = 0.8635425246900982;
    msg.range = 43395U;
    msg.overlap = 1U;
    msg.flags = 16U;
    msg.custom.assign("GBWAITBUTAKOCPF");

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
    msg.setTimeStamp(0.0583810469157513);
    msg.setSource(21967U);
    msg.setSourceEntity(28U);
    msg.setDestination(13042U);
    msg.setDestinationEntity(79U);
    msg.timeout = 49283U;
    msg.lat = 0.728105571307509;
    msg.lon = 0.9075942979617994;
    msg.z = 0.08602949591469444;
    msg.z_units = 137U;
    msg.speed = 0.8708172963252625;
    msg.speed_units = 27U;
    msg.syringe0 = 155U;
    msg.syringe1 = 233U;
    msg.syringe2 = 54U;
    msg.custom.assign("FVDLTLOKMNKVXZXYXSSXTSJNXOQRAELSTMOGGKFFNBJNYWSXBDIMLVBOKBBIRFJYNIZOKKBQJUMJLQQVFUYNHTUHQEELKVISXWDOSVVPGGWOGEAAYDDASWRYCPKOIOHXRGSEEAATWMMCZUESIPVYYQGMARPFMJ");

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
    msg.setTimeStamp(0.3421609504868909);
    msg.setSource(21453U);
    msg.setSourceEntity(92U);
    msg.setDestination(40294U);
    msg.setDestinationEntity(249U);
    msg.timeout = 27130U;
    msg.lat = 0.2881715899694284;
    msg.lon = 0.2899044708164431;
    msg.z = 0.5516333071336502;
    msg.z_units = 168U;
    msg.speed = 0.9078299937295315;
    msg.speed_units = 84U;
    msg.syringe0 = 137U;
    msg.syringe1 = 31U;
    msg.syringe2 = 215U;
    msg.custom.assign("HCDFZKAPMSNQAUEOYRUXYABZNAYQNVLGXUCFSEXSJBIPTOHOHKRBFSLBBKGWXCVZMWKUDSLAHFWMVEEOMUJWDZPQHNRUEHMOQXOLLIGWVJKCZYIESHKPWCUSONJPRDFVRVSTEDCXNHRZIWGZQGAGWZJQPDTYFSBUJTLBMRYLJQXAZIDXKTHUVGETKLVBFZEANTPTNSRVMIDGFXWAYYCMQYTKDNJVCIFOKORBL");

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
    msg.setTimeStamp(0.9980006910237518);
    msg.setSource(21362U);
    msg.setSourceEntity(135U);
    msg.setDestination(30980U);
    msg.setDestinationEntity(83U);
    msg.timeout = 36858U;
    msg.lat = 0.8967655270545819;
    msg.lon = 0.19437298345475706;
    msg.z = 0.3228202329837475;
    msg.z_units = 70U;
    msg.speed = 0.8515038714862195;
    msg.speed_units = 213U;
    msg.syringe0 = 110U;
    msg.syringe1 = 142U;
    msg.syringe2 = 94U;
    msg.custom.assign("MKSTECWDUAR");

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
    msg.setTimeStamp(0.5584362075346776);
    msg.setSource(41901U);
    msg.setSourceEntity(61U);
    msg.setDestination(49183U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.03101910267370689);
    msg.setSource(3131U);
    msg.setSourceEntity(99U);
    msg.setDestination(30180U);
    msg.setDestinationEntity(228U);

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
    msg.setTimeStamp(0.7612265917362667);
    msg.setSource(38838U);
    msg.setSourceEntity(154U);
    msg.setDestination(43251U);
    msg.setDestinationEntity(233U);

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
    msg.setTimeStamp(0.9192588905167142);
    msg.setSource(14016U);
    msg.setSourceEntity(175U);
    msg.setDestination(12337U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.1848583244199914;
    msg.lon = 0.22403901135518134;
    msg.z = 0.2273687904165712;
    msg.z_units = 151U;
    msg.speed = 0.35901262001265677;
    msg.speed_units = 238U;
    msg.takeoff_pitch = 0.5220885071891466;
    msg.custom.assign("CCZNLWCCQWKABSHVBZDASQGTXAZCOMCOZYXNHMOVSUIBDBHZVFXFYFSLYEXYIAIAOGMUFSJEPLTNUXMQKWGJTNROPFZQPRDHFAVKLITTOPUSRBGSRPCSEBMRLTRPYTYGFWONMEQUBUEVGWXJSAUBWVSIEMHRKHQEPINYDJLKHFWVNVOKJQQEZYJUCDDZVYTAAKEDG");

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
    msg.setTimeStamp(0.41233594661527107);
    msg.setSource(45885U);
    msg.setSourceEntity(132U);
    msg.setDestination(28154U);
    msg.setDestinationEntity(19U);
    msg.lat = 0.7505433985369744;
    msg.lon = 0.5140791673931603;
    msg.z = 0.8135775707660221;
    msg.z_units = 235U;
    msg.speed = 0.436656297043039;
    msg.speed_units = 44U;
    msg.takeoff_pitch = 0.48491147082150665;
    msg.custom.assign("ACVGHPUQKAYGUCRGJQTWQJW");

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
    msg.setTimeStamp(0.5987093625397688);
    msg.setSource(54945U);
    msg.setSourceEntity(56U);
    msg.setDestination(21468U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.04990536749633756;
    msg.lon = 0.2775611613981067;
    msg.z = 0.9206429619438821;
    msg.z_units = 88U;
    msg.speed = 0.2707437867202681;
    msg.speed_units = 222U;
    msg.takeoff_pitch = 0.6890253167683494;
    msg.custom.assign("FVUFHGDWIMPUOXJSPXDWWBLQCEEWSKOKEXDPOWAQYJRTXRHJOOZGMNESTZVILYCWDQVWNGGARJKUCQDHBYLAYBGASJZNOKMLORRKBKFHEXQAYCTOYRFFBVUPOCPYNSHSIXNTXYFNQMQSNYEPVUZLOLUVZTQIKCUUPPRCDLZAGPFCRWLTFEADVEZIKGZHGIWIAHUJHMETDXLSJJVNSBR");

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
    msg.setTimeStamp(0.949809160588291);
    msg.setSource(5298U);
    msg.setSourceEntity(1U);
    msg.setDestination(56327U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.4821945865444168;
    msg.lon = 0.49660000552716976;
    msg.z = 0.9534928933284762;
    msg.z_units = 91U;
    msg.speed = 0.415198412738642;
    msg.speed_units = 125U;
    msg.abort_z = 0.30135918995651023;
    msg.bearing = 0.8494123505843139;
    msg.glide_slope = 97U;
    msg.glide_slope_alt = 0.611350827889623;
    msg.custom.assign("EDXLKLCXQPCKTLHZDNQVCPZYPJAHQFNAHHIDMLZHAMRORFHJIIGWSHSFUHEWHXWZQIWVIYVGNETZWYGXMFWSZEOMKNTYEMSVNPNOCMTBPCVGUJJEXASVJCQYLOHZBFTRJOEVIDMPTIIROLZPZQKBNPGSBOBUYERKRGUDTQNSNWDALDNTRAFXGXYKKLYAJUYFXREMOBQSUBIPDWDGPTBKJSLMSGUJTYWFBCQCUOJKFVXC");

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
    msg.setTimeStamp(0.2337326580273087);
    msg.setSource(37322U);
    msg.setSourceEntity(140U);
    msg.setDestination(25159U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.1428193932960159;
    msg.lon = 0.08524631649751013;
    msg.z = 0.7478140424033926;
    msg.z_units = 240U;
    msg.speed = 0.5825133912898193;
    msg.speed_units = 87U;
    msg.abort_z = 0.15748346549120829;
    msg.bearing = 0.8207035613980581;
    msg.glide_slope = 1U;
    msg.glide_slope_alt = 0.35941754411263127;
    msg.custom.assign("DGZNZHXGIBVDIXQQLLIAAWXSQJJTOMKYKSTDZQEPSHTIAJUCNNRGTYXURTIBFRDMWYBKGWNWQUXRELMDCLHBAFMLNF");

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
    msg.setTimeStamp(0.3292151605987611);
    msg.setSource(60253U);
    msg.setSourceEntity(91U);
    msg.setDestination(17466U);
    msg.setDestinationEntity(207U);
    msg.lat = 0.21644045005917434;
    msg.lon = 0.5403922907467644;
    msg.z = 0.890155718819832;
    msg.z_units = 234U;
    msg.speed = 0.6209822439873502;
    msg.speed_units = 103U;
    msg.abort_z = 0.4905556566444823;
    msg.bearing = 0.13451506913741118;
    msg.glide_slope = 187U;
    msg.glide_slope_alt = 0.38248553669641194;
    msg.custom.assign("DEOCLHUXRANJNIXJJBIGZJAQCQLVGTXZYPVIGDZSAXQVMZYMVPQMADQOKZLRXLTUTBZFHFOHBWSIPKKSJGMBUWNXGWXRCAMKJUARJLGOTOAZNFEYCSKZERUXFYQTANDTGJCBYBRTSFWNWACSRYGFBZWJDQFMVYIQMZRRIEKCOLONNOIXPKPCRCJDYEYPUMUWI");

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
    msg.setTimeStamp(0.08251708443245476);
    msg.setSource(64209U);
    msg.setSourceEntity(187U);
    msg.setDestination(3713U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.4295186086002467;
    msg.lon = 0.17900594980590134;
    msg.speed = 0.7747361921914396;
    msg.speed_units = 159U;
    msg.limits = 48U;
    msg.max_depth = 0.3955125108750721;
    msg.min_alt = 0.5252285935477718;
    msg.time_limit = 0.10404185431963364;
    msg.controller.assign("JAWYVHSQSTASPYHQTFRULZLGGEJFKYCEWIOMPXODDGNEPNWOBRUFICDKUROJZDVQQZHXLHZKTNYGTAUCQUYWGSARLFOMAKBT");
    msg.custom.assign("CMEOWYYQLKEZNRWJBGGFYJMPPDGLKMHV");

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
    msg.setTimeStamp(0.2859765892474311);
    msg.setSource(42910U);
    msg.setSourceEntity(236U);
    msg.setDestination(34715U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.36861502945155666;
    msg.lon = 0.1274885474162396;
    msg.speed = 0.09681088965487772;
    msg.speed_units = 146U;
    msg.limits = 2U;
    msg.max_depth = 0.7208214935659537;
    msg.min_alt = 0.46814622128649663;
    msg.time_limit = 0.09168397494440905;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.6457657759555655;
    tmp_msg_0.lon = 0.883311628505279;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("DRBIPGLXNDOWDIYIOZKEZRUIOHAFLMRVGENLSJNWGGPLVBWJCTDLNENMXRHXTVCXKVLFOSYNHFFHWTKTVEGLBOJJEXRYFQQUIWWNQZTZMQTCRRDXFMXHUYITMPULJACZWFKOXAYOMULZGJWZHEDOTNOAAQYDKG");
    msg.custom.assign("KIPWZPZFXFWQFCJALHXSPKDMSWBYPEGZSBSMUHUFEONCHWMXARVYRVZXONGXRMWIJYSNWEPHYMDCGGXALZRMKSFIIYCIEGHHGUQVDPKZVNQJSTFQDJUOTUREKDFHKUDXPDGBLVJJTTAMTKRSRGICWAWSIJCEYDEAYLPPZVQVWGRCQLIEQKKQXJSFVVOOJZQOLYCLJYBTRHOPUNQTOOKXIFUDURLFVUNMAXWZEBBNMLAECNTNYZTA");

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
    msg.setTimeStamp(0.4808582405627627);
    msg.setSource(1907U);
    msg.setSourceEntity(79U);
    msg.setDestination(3874U);
    msg.setDestinationEntity(123U);
    msg.lat = 0.00372846174913799;
    msg.lon = 0.35997353265239884;
    msg.speed = 0.5950930207127456;
    msg.speed_units = 219U;
    msg.limits = 131U;
    msg.max_depth = 0.018118797213553473;
    msg.min_alt = 0.08831199269439893;
    msg.time_limit = 0.7687109963791962;
    msg.controller.assign("HWPNUTWQPOYMYIJFDLUAYPCOFLZVHHVPWSXRTUGABLZWCRBYKFCCKFZSLSZHVJREMMNEDQCDAOJIRYOGLGVXCQCWBARJRGHPWENQXPMCANGUCPJUNFKXMAVNNMHFQNZTQAETLXBQNAKZVD");
    msg.custom.assign("YMKNZTIBEEHRJCUNUGEDDSFMB");

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
    msg.setTimeStamp(0.4535377145666073);
    msg.setSource(16055U);
    msg.setSourceEntity(158U);
    msg.setDestination(43266U);
    msg.setDestinationEntity(155U);
    msg.target.assign("URUTZIMPGKFWEENMBPWFUWGVC");
    msg.max_speed = 0.23302360657386367;
    msg.speed_units = 228U;
    msg.lat = 0.24365216514168808;
    msg.lon = 0.9712057885319638;
    msg.z = 0.840299335076148;
    msg.z_units = 109U;
    msg.custom.assign("CZZNQSPVJRDLHVSZXYEJWUUVPHTWXUKRFYPHDNFWWDPQFBEIVXDTBRLPCJMNSNLXYBODB");

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
    msg.setTimeStamp(0.2987450114141281);
    msg.setSource(45976U);
    msg.setSourceEntity(229U);
    msg.setDestination(37296U);
    msg.setDestinationEntity(35U);
    msg.target.assign("AQLPKLJSXUJGDIGSTWRRLZBIAKLZVNOPCYOMIPPPBEDDBACMEETXZABYGRWLHZYTGSQULBHWHTFATDVQIQDMHIYGWSVYJNAQXQNDBUXKFVFLLCEVRRWMRKRVLUWWJJHXNYTRCECKQKTMGUHCMOVFEVUWFOAAPZK");
    msg.max_speed = 0.07753119729905;
    msg.speed_units = 196U;
    msg.lat = 0.9809225203250673;
    msg.lon = 0.8153095763472817;
    msg.z = 0.0949956729923005;
    msg.z_units = 143U;
    msg.custom.assign("PKDNWBCAGBCQNICPOSTFNWOFKGBQTGDUPLXYHQLWEGUENXYHABTWKSYJFFZHPCQKDGJFUISMGEQNUWFKBPRRKLILXFECVCNTKHYVZFTRMGVALYXRJYEPDHXQSORUQVXIRGOQBCNWINXJYJJTAADKOLEOIDLCABNSZUZSAWFVXANMUZFWUZBIMVWOUHIVDOAKMVGMPDSLDMHOTSQJEEYMYZV");

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
    msg.setTimeStamp(0.5976959764944832);
    msg.setSource(45588U);
    msg.setSourceEntity(145U);
    msg.setDestination(7494U);
    msg.setDestinationEntity(37U);
    msg.target.assign("TCCKXLIGQPZFJRGQGFXJBALID");
    msg.max_speed = 0.5904477912435565;
    msg.speed_units = 2U;
    msg.lat = 0.8714379952827245;
    msg.lon = 0.1921945019039627;
    msg.z = 0.10431310390715398;
    msg.z_units = 53U;
    msg.custom.assign("NRFGRFZXNRQJBIXOZEBKGBYZDEAOHMAKLCWTVNRQTDWMIGEDOBAXUIPXURPYEXVLDFAKVNYASFHCMILXYIUZBSOFWWYHTQSBQK");

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
    msg.setTimeStamp(0.1287571230782414);
    msg.setSource(53677U);
    msg.setSourceEntity(127U);
    msg.setDestination(12911U);
    msg.setDestinationEntity(35U);
    msg.timeout = 38303U;
    msg.lat = 0.6655085758860448;
    msg.lon = 0.24218504047960698;
    msg.speed = 0.8951379839818068;
    msg.speed_units = 112U;
    msg.custom.assign("VMPJMAVZVQYGLRIOBWWFKCGEXEAGJPNFZPBMSEKARBKTDHOBUHCPURHQXXKASDDCXJALFFFTCMTYGNOZHHRSLZN");

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
    msg.setTimeStamp(0.31095086205504496);
    msg.setSource(64084U);
    msg.setSourceEntity(100U);
    msg.setDestination(62949U);
    msg.setDestinationEntity(64U);
    msg.timeout = 61019U;
    msg.lat = 0.609268156998588;
    msg.lon = 0.22756523504386583;
    msg.speed = 0.9292289561506116;
    msg.speed_units = 121U;
    msg.custom.assign("MVHJXFYAYDFVPAGOKFOIAMLMFRLVVPVJMJWTZTZHTVIZKRJZSWNQGQNBNCYTAIEGHBFUJUSQVYSHXFAKEYMCBUWPLMQCOUOFEHAGCSJRKBOEGVMHXXE");

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
    msg.setTimeStamp(0.9850086619566595);
    msg.setSource(12118U);
    msg.setSourceEntity(19U);
    msg.setDestination(12759U);
    msg.setDestinationEntity(235U);
    msg.timeout = 64208U;
    msg.lat = 0.5904919078418761;
    msg.lon = 0.6801568522689497;
    msg.speed = 0.5117984841144508;
    msg.speed_units = 52U;
    msg.custom.assign("MSKBNWSXXCABYRAONOFIWFSPYZXTIBLWLMRVSOVRJHVI");

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
    msg.setTimeStamp(0.7104194469101571);
    msg.setSource(39523U);
    msg.setSourceEntity(183U);
    msg.setDestination(205U);
    msg.setDestinationEntity(85U);
    msg.lat = 0.956542181447844;
    msg.lon = 0.07125573485816394;
    msg.z = 0.3403039828963771;
    msg.z_units = 206U;
    msg.radius = 0.4913125379436212;
    msg.duration = 52254U;
    msg.speed = 0.7561888964579223;
    msg.speed_units = 151U;
    msg.popup_period = 61630U;
    msg.popup_duration = 6153U;
    msg.flags = 219U;
    msg.custom.assign("OCQTVCWTLTLUSAJOUYXEBZGMDIWWSINIDAKCPTHKAQJZNFBVSVHTFZSEJFUCRKMPHIULKIHJGQFROPZTKNUPFEVYJPGJLRZNJWACSHEVGKRAAKWCBTXYDVYLLHZGYFOEIQJZBOVAASDYVBXVMGIXWFPMUFZGXJQCOEXUDGDYVUJQXYR");

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
    msg.setTimeStamp(0.03715496008443242);
    msg.setSource(14758U);
    msg.setSourceEntity(231U);
    msg.setDestination(1225U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.8005956391753897;
    msg.lon = 0.8945161033610275;
    msg.z = 0.8241670596821427;
    msg.z_units = 254U;
    msg.radius = 0.6731318493546001;
    msg.duration = 9457U;
    msg.speed = 0.5902322147685433;
    msg.speed_units = 106U;
    msg.popup_period = 59402U;
    msg.popup_duration = 50298U;
    msg.flags = 204U;
    msg.custom.assign("JYLPEDXBYYJPCVWGCCBFYGPKAXNZWMFAXJUSRWFLNEUZTRXQZXXTAWIHIKXZQSDLZOOHNGVBUPQSLJGE");

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
    msg.setTimeStamp(0.33165589368155635);
    msg.setSource(50883U);
    msg.setSourceEntity(128U);
    msg.setDestination(51086U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.8931964176285889;
    msg.lon = 0.6047992358927969;
    msg.z = 0.7166246632655787;
    msg.z_units = 132U;
    msg.radius = 0.4653680505174992;
    msg.duration = 49448U;
    msg.speed = 0.7852447783360454;
    msg.speed_units = 243U;
    msg.popup_period = 7351U;
    msg.popup_duration = 34868U;
    msg.flags = 247U;
    msg.custom.assign("HLTCLXZLYQDKUCKWRTXTGPTVJSNPDGRVBMHTZIMZMZOQHCAMBLZZWXTOVBYGZVJJEVGDBOCKQFYFROVRHISRZEUIPLOOIDHAAKIXNLHPLSRLWSDIIRUGGICSIGKYHKWMMUNUJJTPNFNSUSBGBYYFALADX");

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
    msg.setTimeStamp(0.11461867153366645);
    msg.setSource(49852U);
    msg.setSourceEntity(60U);
    msg.setDestination(17688U);
    msg.setDestinationEntity(117U);

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
    msg.setTimeStamp(0.4239317582333193);
    msg.setSource(41752U);
    msg.setSourceEntity(10U);
    msg.setDestination(12646U);
    msg.setDestinationEntity(29U);

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
    msg.setTimeStamp(0.5387013726379267);
    msg.setSource(63059U);
    msg.setSourceEntity(3U);
    msg.setDestination(52925U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.16900231194522497);
    msg.setSource(20317U);
    msg.setSourceEntity(83U);
    msg.setDestination(7824U);
    msg.setDestinationEntity(4U);
    msg.timeout = 13489U;
    msg.lat = 0.8394378594115904;
    msg.lon = 0.2882798171898613;
    msg.z = 0.8776898408752217;
    msg.z_units = 89U;
    msg.speed = 0.863133162357941;
    msg.speed_units = 207U;
    msg.bearing = 0.5315065259494138;
    msg.width = 0.8712218107529702;
    msg.direction = 170U;
    msg.custom.assign("HKUMMRQACVMVNGZYGXNJQUDNRQUJGNVUBSITDMJWHIFFZWCECJIRWMNROOHAWSYIBFJOZLKEIAOWV");

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
    msg.setTimeStamp(0.28276503090306837);
    msg.setSource(43535U);
    msg.setSourceEntity(181U);
    msg.setDestination(52196U);
    msg.setDestinationEntity(198U);
    msg.timeout = 51222U;
    msg.lat = 0.8701918427321499;
    msg.lon = 0.9354883552519067;
    msg.z = 0.8913908234638227;
    msg.z_units = 51U;
    msg.speed = 0.9499529423163123;
    msg.speed_units = 83U;
    msg.bearing = 0.45732560227394137;
    msg.width = 0.6217358285308567;
    msg.direction = 191U;
    msg.custom.assign("MDAQYKQUILRSRTWVXHWDLUECBJJAGUCDYCKODQSTEEHBHPXCAKGWAQZWZKMEQNGKSFIQIELTYIZOEWTXRINJZSQFGIPNIXNHCAQMXOSYXFBBNDSYIDCECBLRUOPOTPHMJQKFJJBHQIBLZZHNDLCVJFVOGWRRPHEVRXFAKXEFFCYTV");

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
    msg.setTimeStamp(0.5334125717500762);
    msg.setSource(48864U);
    msg.setSourceEntity(152U);
    msg.setDestination(22041U);
    msg.setDestinationEntity(41U);
    msg.timeout = 63596U;
    msg.lat = 0.6267477512477733;
    msg.lon = 0.7659172443072114;
    msg.z = 0.013454375599519008;
    msg.z_units = 11U;
    msg.speed = 0.6495484892398868;
    msg.speed_units = 56U;
    msg.bearing = 0.6761102172061079;
    msg.width = 0.08593608859575608;
    msg.direction = 54U;
    msg.custom.assign("RYKLLTJFKNBFFDAJMMDSLFHZJHEVIYTSLJJOMTGGVEVCAUXURJAWWOZHYXYJZUMQIDNLMYVMAXLZQFGIXVFWRMORLLZHTGNQFUETLCJQFPIKNFCNSKVWURSDEEOMNGTDXORCSKCPQAQRZRWIFWKAEOSXUTDDAWCZWKLMRABWNNPGOQBSPGBKXOMBQRGESTNPBYHBKPSVAQHUA");

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
    msg.setTimeStamp(0.7509826250626483);
    msg.setSource(25793U);
    msg.setSourceEntity(35U);
    msg.setDestination(20755U);
    msg.setDestinationEntity(142U);
    msg.op_mode = 236U;
    msg.error_count = 192U;
    msg.error_ents.assign("NQEFINKMBNATGEHUBPCKJSRJWGAIUDMPBWWIMIYBLQAHJKPVPKLGNCTLWXXDITCWPQXBAYICULRDZXYFFUTCWIYUCPHJXPIQMJTOONG");
    msg.maneuver_type = 36072U;
    msg.maneuver_stime = 0.2966016948634299;
    msg.maneuver_eta = 3419U;
    msg.control_loops = 52994867U;
    msg.flags = 247U;
    msg.last_error.assign("UVSDKCFUBYMKBNOZWQMRETAUOVBBHZJIDXEZQNEMZVLLTSGIYCHXXMTWFYMLOSHEJKBBWQEQUXXMIBKQMNCOLP");
    msg.last_error_time = 0.39046442767692835;

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
    msg.setTimeStamp(0.2848825699761879);
    msg.setSource(26531U);
    msg.setSourceEntity(241U);
    msg.setDestination(64965U);
    msg.setDestinationEntity(65U);
    msg.op_mode = 32U;
    msg.error_count = 106U;
    msg.error_ents.assign("YCZHQTMAPFHXHSPYUCORLAACUQZLKOGNYOQLHBPDARXTJEOBVXNCZUZSKLBKJKFPDEYSJDSQDEENTSOQNEXCHTETHPIJMFZQGUNZFTYZTNGIDUAXBMQYUPCSMGHCQETMOIKWKSRBPWOYPKVJFLHRKIYRVWDAXJTQDVSKZWGYWVVFSXIJUIGAXYVFDCUMMNMBROWAEQ");
    msg.maneuver_type = 3317U;
    msg.maneuver_stime = 0.49529118825362073;
    msg.maneuver_eta = 34961U;
    msg.control_loops = 3322036936U;
    msg.flags = 118U;
    msg.last_error.assign("IZXVSIGMROVBIYTKOHFNKJWCMCAOXDZHXSQCISVKZCTCPBFVEUHQZRUYMLNYMYKDBAURMYQFAGGSWOFRNXXLKPBBCCEEPXJNAPYGWQDQEUXUIELKGLRJTGEUNCDTSVPOTROZBCMPGARSMHRTIZVYGKDLVERFFDJYNLQBFRSAJDEWOUVBKELSJBPLXQHVTNZSIAJUJZWHMOWTWONKYFNQMHTYBXWHQVGFKHTPAIJDHWXALZINZLQPEWGOFSUA");
    msg.last_error_time = 0.9235229945642174;

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
    msg.setTimeStamp(0.10917463973648167);
    msg.setSource(29028U);
    msg.setSourceEntity(0U);
    msg.setDestination(17294U);
    msg.setDestinationEntity(193U);
    msg.op_mode = 224U;
    msg.error_count = 95U;
    msg.error_ents.assign("PDTOKBZAZQQSFWMTCVRFLECJKDJMJGWFCDPRQXYKKHYDTFUVMIWOIHBURNTQQEXEZXFCGFZRMJTYDSJYPLLAUDKCTSOONUKUWIEIFPBGNXBOVQYXXPGVJLURMIIMMVVONNSABPEAFPSTAHAPHGJFZZACXHYRHXQWOMHWRBRIYGUNARYSFATLICNEGPVYSDZLWDUEHDVQEXDKNKEHZUBSQHARQTLYCWKOSMBWOSIJLGTCWXGLNOVLIEKMZJVUCB");
    msg.maneuver_type = 37423U;
    msg.maneuver_stime = 0.8805605681432436;
    msg.maneuver_eta = 13910U;
    msg.control_loops = 2191527984U;
    msg.flags = 87U;
    msg.last_error.assign("KDUIXDUSLOWDRSOEREZAZOCZWJTUAHCTCYPKVWJORFBMFPIBVJGYKXEZHLFINGTRAKGVVIQKJBOASDCQSQPYQQUNJZAVPTFYCBRGXEXAOETQZZHJOCLMMJOYIVRW");
    msg.last_error_time = 0.8442586678493954;

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
    msg.setTimeStamp(0.41752159744873885);
    msg.setSource(38036U);
    msg.setSourceEntity(30U);
    msg.setDestination(5684U);
    msg.setDestinationEntity(52U);
    msg.type = 77U;
    msg.request_id = 6180U;
    msg.command = 132U;
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.27706645866043866;
    tmp_msg_0.lon = 0.8456919833466086;
    tmp_msg_0.z = 0.0809970617987481;
    tmp_msg_0.z_units = 18U;
    tmp_msg_0.speed = 0.6287069201727168;
    tmp_msg_0.speed_units = 121U;
    tmp_msg_0.bearing = 0.5485418776615049;
    tmp_msg_0.cross_angle = 0.5020574687653641;
    tmp_msg_0.width = 0.4661460401013662;
    tmp_msg_0.length = 0.3541374271929315;
    tmp_msg_0.coff = 163U;
    tmp_msg_0.angaperture = 0.8253848948664583;
    tmp_msg_0.range = 25147U;
    tmp_msg_0.overlap = 223U;
    tmp_msg_0.flags = 73U;
    tmp_msg_0.custom.assign("CWTRCZJPRBEXGDCQIZPHUJAUOKWDIAKEEQJAPOEPIFGKNBOXRHKVSJBDLYRTHLPKRORYZNCJKVPUSIZOSMZNWEFHAELNSZRQCVMBBMLGGYTDWGCDHMPRWBCIQJVJZYSFLQ");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 31497U;
    msg.info.assign("TYTWCFIQGONDQNYDCQPHPXYWAQJFLRFQRPQGZGLCVMRWAVHIZTSUTKVNUSRPOIXDNAXBXRCUKMOCECMOUBFDGYIPOYFTRJJHDAVIDMIJHXQLHYMWK");

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
    msg.setTimeStamp(0.19898180721896797);
    msg.setSource(45164U);
    msg.setSourceEntity(66U);
    msg.setDestination(16045U);
    msg.setDestinationEntity(254U);
    msg.type = 172U;
    msg.request_id = 45655U;
    msg.command = 46U;
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.34630220452842164;
    tmp_msg_0.lon = 0.6980968897129161;
    tmp_msg_0.z = 0.07552000413766169;
    tmp_msg_0.z_units = 176U;
    tmp_msg_0.radius = 0.3550784841842044;
    tmp_msg_0.duration = 53700U;
    tmp_msg_0.speed = 0.25238185967201476;
    tmp_msg_0.speed_units = 189U;
    tmp_msg_0.popup_period = 39949U;
    tmp_msg_0.popup_duration = 5982U;
    tmp_msg_0.flags = 184U;
    tmp_msg_0.custom.assign("JIPGRNFSUBEEWFWLBWJPCLAILGZBCVXIBXHJKGNCVUHEQCTYGCKOMAOELHQIYVGYXKILZCOSEGDQWNUVUAWWDHHZTYRJQFQZNSL");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 57997U;
    msg.info.assign("SLWRNEYZMUEPAAWHBKUZGLRFKZCFLZGHIXWDYEIEDRQYIYMJCHQCHUXCJKOHJOIEIOLDLVMBDGTUEQWGPONABXVQXHNYWNSFMLCDDORWFJRTNUDHRXEUQQWBMSNATPSNEFDVTACJFXNHUYUJABAPDTKAYZJSIVEMVZHKKSDBXTIPVVPASKBZTTORVICOXYZRWGSZOYFTRSJOIQC");

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
    msg.setTimeStamp(0.3792208335615219);
    msg.setSource(50631U);
    msg.setSourceEntity(162U);
    msg.setDestination(48447U);
    msg.setDestinationEntity(202U);
    msg.type = 5U;
    msg.request_id = 12233U;
    msg.command = 9U;
    IMC::Takeoff tmp_msg_0;
    tmp_msg_0.lat = 0.12482939801632065;
    tmp_msg_0.lon = 0.9625746684511471;
    tmp_msg_0.z = 0.21233038671411153;
    tmp_msg_0.z_units = 48U;
    tmp_msg_0.speed = 0.1064580087337833;
    tmp_msg_0.speed_units = 48U;
    tmp_msg_0.takeoff_pitch = 0.4871025637950923;
    tmp_msg_0.custom.assign("IOYNAZDVIMYCRLRJBTYKFZVKDQMXBAQJRKNRWZAEVNSWTOQKLYDNULTPNPYDLSSPGSROVXUKUZRNRJQBBZXOLPFEXUIFKSPFFQRLADFUJKHNLKCCAYJQVFWCGYZEIXCYJYICEFWNBSOPUCFGTAGITGULOWXHMQHUEWSSZATYPJIOJVECAHQDGLM");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 59994U;
    msg.info.assign("DVXLTYLDKRQSCSMOPOYSZGKXNZIJUYNMZQSEXCZEAVFEMXKUCTOHSTBPRGCNTJUYHPDMVNRUPLFFWRJJDUXBOSPCQDOIGJOBUCPKAETQMAGMLHHXLTICQRKRKWGPUQAAWLJRBLHWSEWODPGEEVDOUYFCIFQEVNXJVBGXWUCHAVFLNKAMZYVJXYKBMGDNKIDHAHFPTMYKRN");

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
    msg.setTimeStamp(0.6318589668154033);
    msg.setSource(5410U);
    msg.setSourceEntity(168U);
    msg.setDestination(48995U);
    msg.setDestinationEntity(19U);
    msg.command = 120U;
    msg.entities.assign("BCQWVPGLFGWXHNEFJVFDQONUSEUWOXLAFIZPFTHUMSUJUIUJXIHEZEVGTUYEJHARANGCWGMWXEMHFVPTLMAXPCAMHCBK");

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
    msg.setTimeStamp(0.5785458104089813);
    msg.setSource(53024U);
    msg.setSourceEntity(97U);
    msg.setDestination(29459U);
    msg.setDestinationEntity(42U);
    msg.command = 121U;
    msg.entities.assign("RWWNDNZVVOHXWWROOSTTYYCXAGURLQMQDOGGUQAZEATLXFMZGIHBEDXHJTTHGFWUKCNFUHRGHVHADNYJAPYYKOSZMMTESQNAJBJX");

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
    msg.setTimeStamp(0.12175890778691201);
    msg.setSource(37211U);
    msg.setSourceEntity(84U);
    msg.setDestination(35222U);
    msg.setDestinationEntity(56U);
    msg.command = 195U;
    msg.entities.assign("GPMTHGIQAZUVTSGLMLSXTQQEDXQINVHCJGXFMPSOAECUKBKCKZKYMCFHFWBHMYINLQYITWSHQOALTFRUEQTSVVZAOHGYVRFMNFYXIQFNTNLMCFDVUUBJDDLIGABJGRZKMFOJSAPYEPZWER");

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
    msg.setTimeStamp(0.6162509857422995);
    msg.setSource(41284U);
    msg.setSourceEntity(51U);
    msg.setDestination(1692U);
    msg.setDestinationEntity(220U);
    msg.mcount = 127U;
    msg.mnames.assign("KZOQFJXGDBIQYMXVGLDALNECOTUXMQOVNWHOEFWINBVZDJVEUSNIXAQXWYHFRNGGXSAIXBWLZKFEOLTBUKJAMLJYSBZCCOKXPCSADNVQRGDPSFMMPAXFNWFWWUEKPGMPUOAJWSADZYHTPCEFLKS");
    msg.ecount = 9U;
    msg.enames.assign("HRBZMHNVDBUEXQBUQAOR");
    msg.ccount = 79U;
    msg.cnames.assign("NHKHUDBRXMXWVTNEDSVIBJSYEPMDCTNADRFFVHMVSOFMWHYKKGDYDVINMDHLGWPBOQBFUQEVQRNPRYGKKNPNJGO");
    msg.last_error.assign("PFXESIGWHRIKZKNQNFYGNTADSVLCPGGJVBCZNJUBBSALFDAPTBRXNXUWHZIJMTSPKKKQYIPDRNVOGQLDDRQBJOCLTGCOYIESXEANEPORGAJKYJEPMFXVZMZBKGBITJTYUYQUUTEOWMVEFHQKLWRNMMHECWFXXTOLXBMTQMHHFXOUWAZDZBVGVUWIAWFNPKWRQQXLHHYYCHTSSDZCFUDVPMEPCOMSIRACBRNCESJSZVLDARDOJHLU");
    msg.last_error_time = 0.00702203036920912;

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
    msg.setTimeStamp(0.8235739595875293);
    msg.setSource(12954U);
    msg.setSourceEntity(114U);
    msg.setDestination(38846U);
    msg.setDestinationEntity(17U);
    msg.mcount = 126U;
    msg.mnames.assign("HLTTBSTJVGBJCLKIANWAFIMEENAQWZBUDCMPMJZBCHHFIDHBIRMVGFDXUJLRDGIPSNJYFECFPXXLTLQFNMELYVROAOLEODRIZGIBWTLJJVAQHNDFYGMUCMOPPRRNGCXKOYSHOYSUCIKXPNDAUVB");
    msg.ecount = 213U;
    msg.enames.assign("BBVGUEUWQWPRSZGLCANAUSKSMEUDPAITTLCEWZOEDZRYBBEYGNKRIVPIBPPGZ");
    msg.ccount = 40U;
    msg.cnames.assign("SXGYGIMVHYXCAVERNTDMXESPPPIUMDNHQXLHMUQZEEBMXZONXZ");
    msg.last_error.assign("MWMSFUGMLYIWNWIKVADMWKIQGYMNZITTCELXHDTETZAKYCJFDPVLTJUPMBELWCYOVQKOKBFKQQAAUJRNEHRFDOPTQXOZYVQSAUHWOJCECJUIZSHSUGGXRUATLSTCOGPBVDMXULWXREPMA");
    msg.last_error_time = 0.5247465642044056;

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
    msg.setTimeStamp(0.13920401009418037);
    msg.setSource(17369U);
    msg.setSourceEntity(35U);
    msg.setDestination(22644U);
    msg.setDestinationEntity(113U);
    msg.mcount = 171U;
    msg.mnames.assign("PCENJTLDIVSKHEEWPHDUFBOGRQVWKX");
    msg.ecount = 57U;
    msg.enames.assign("NIRTIPIQQGMIEWLNWVSEPGCUGNOUDYDEWMOUBSOYLWXXKACOJUJNYBAWFGAKFMWCUFYJLOGCFVTEMLBRZEQAQNIQXZSBPZMDERVOUKXJRXRYFGHCSVHYPSKHVQZVGTFPCDTVLWATEZJNJRNFZCWITXXYJOHWCMTOZSSVPLSRHSZC");
    msg.ccount = 139U;
    msg.cnames.assign("CMIWIXJAJGIXCUCONDDC");
    msg.last_error.assign("XSOZZVJJDSRSEDCFIRBXDMHFIZEUPVNOSQYSUHTEOLULRQUUWBVSKHWJQRYLENCLYQDYAMWDWBRHNFJLJZGFHWBPNMWVMCCLVMRQYAIYOWUBGTBXYGFKZQGHTWPRBAALQTCPAHNAFYKELUYXZDIUTNPEZFNOTXJPXBNXVPCJQPOHKODTQXXSWMFPLIOMMAKVCUDC");
    msg.last_error_time = 0.26931417582772865;

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
    msg.setTimeStamp(0.516783423158584);
    msg.setSource(53293U);
    msg.setSourceEntity(181U);
    msg.setDestination(2474U);
    msg.setDestinationEntity(230U);
    msg.mask = 10U;
    msg.max_depth = 0.04104328346578334;
    msg.min_altitude = 0.7580605137404354;
    msg.max_altitude = 0.12600270935482716;
    msg.min_speed = 0.4639803546091632;
    msg.max_speed = 0.3529420621120969;
    msg.max_vrate = 0.9647246738860923;
    msg.lat = 0.5869245635748174;
    msg.lon = 0.06033545165407739;
    msg.orientation = 0.9396030547222012;
    msg.width = 0.6378089901409232;
    msg.length = 0.03495485420644562;

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
    msg.setTimeStamp(0.305449557422944);
    msg.setSource(65200U);
    msg.setSourceEntity(19U);
    msg.setDestination(56449U);
    msg.setDestinationEntity(46U);
    msg.mask = 195U;
    msg.max_depth = 0.41577461160783447;
    msg.min_altitude = 0.3920516667069107;
    msg.max_altitude = 0.23153119574355685;
    msg.min_speed = 0.3837508245101551;
    msg.max_speed = 0.09479509738261094;
    msg.max_vrate = 0.9523440934084916;
    msg.lat = 0.4097505241069902;
    msg.lon = 0.24874852381869905;
    msg.orientation = 0.6276009690860548;
    msg.width = 0.8239204076982363;
    msg.length = 0.6878440682806768;

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
    msg.setTimeStamp(0.35915311681054396);
    msg.setSource(46571U);
    msg.setSourceEntity(220U);
    msg.setDestination(4230U);
    msg.setDestinationEntity(42U);
    msg.mask = 142U;
    msg.max_depth = 0.19081080745545764;
    msg.min_altitude = 0.47659677914003995;
    msg.max_altitude = 0.7948369385393715;
    msg.min_speed = 0.7648569524185227;
    msg.max_speed = 0.5136549624021528;
    msg.max_vrate = 0.09453739650302773;
    msg.lat = 0.9127251870783727;
    msg.lon = 0.4655511374609348;
    msg.orientation = 0.6245659173425848;
    msg.width = 0.7669480451922818;
    msg.length = 0.317850330833243;

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
    msg.setTimeStamp(0.16506722665483842);
    msg.setSource(28939U);
    msg.setSourceEntity(63U);
    msg.setDestination(59738U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.5782407133509747);
    msg.setSource(29625U);
    msg.setSourceEntity(69U);
    msg.setDestination(30183U);
    msg.setDestinationEntity(176U);

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
    msg.setTimeStamp(0.0988121458133675);
    msg.setSource(6847U);
    msg.setSourceEntity(74U);
    msg.setDestination(50529U);
    msg.setDestinationEntity(159U);

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
    msg.setTimeStamp(0.29278991972469093);
    msg.setSource(3468U);
    msg.setSourceEntity(107U);
    msg.setDestination(1049U);
    msg.setDestinationEntity(217U);
    msg.duration = 3700U;

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
    msg.setTimeStamp(0.25759685579797076);
    msg.setSource(45742U);
    msg.setSourceEntity(23U);
    msg.setDestination(26763U);
    msg.setDestinationEntity(53U);
    msg.duration = 25768U;

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
    msg.setTimeStamp(0.9172945269153981);
    msg.setSource(56533U);
    msg.setSourceEntity(214U);
    msg.setDestination(65363U);
    msg.setDestinationEntity(215U);
    msg.duration = 49602U;

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
    msg.setTimeStamp(0.7419942180656891);
    msg.setSource(52797U);
    msg.setSourceEntity(177U);
    msg.setDestination(35407U);
    msg.setDestinationEntity(35U);
    msg.enable = 59U;
    msg.mask = 2783238745U;
    msg.scope_ref = 1090931611U;

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
    msg.setTimeStamp(0.10516018773318558);
    msg.setSource(20120U);
    msg.setSourceEntity(186U);
    msg.setDestination(26040U);
    msg.setDestinationEntity(206U);
    msg.enable = 220U;
    msg.mask = 533885037U;
    msg.scope_ref = 1502831985U;

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
    msg.setTimeStamp(0.9325954738809057);
    msg.setSource(57252U);
    msg.setSourceEntity(42U);
    msg.setDestination(17560U);
    msg.setDestinationEntity(130U);
    msg.enable = 236U;
    msg.mask = 624737433U;
    msg.scope_ref = 3158300078U;

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
    msg.setTimeStamp(0.6388201848317108);
    msg.setSource(44424U);
    msg.setSourceEntity(153U);
    msg.setDestination(18800U);
    msg.setDestinationEntity(157U);
    msg.medium = 165U;

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
    msg.setTimeStamp(0.49089968703625564);
    msg.setSource(6591U);
    msg.setSourceEntity(25U);
    msg.setDestination(64165U);
    msg.setDestinationEntity(119U);
    msg.medium = 198U;

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
    msg.setTimeStamp(0.07395251876265885);
    msg.setSource(15608U);
    msg.setSourceEntity(63U);
    msg.setDestination(62539U);
    msg.setDestinationEntity(63U);
    msg.medium = 240U;

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
    msg.setTimeStamp(0.4960672408920863);
    msg.setSource(32724U);
    msg.setSourceEntity(155U);
    msg.setDestination(29376U);
    msg.setDestinationEntity(240U);
    msg.value = 0.5521022951477058;
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
    msg.setTimeStamp(0.43086535208615984);
    msg.setSource(7058U);
    msg.setSourceEntity(130U);
    msg.setDestination(27748U);
    msg.setDestinationEntity(186U);
    msg.value = 0.3989688733860308;
    msg.type = 91U;

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
    msg.setTimeStamp(0.07251860403918275);
    msg.setSource(11565U);
    msg.setSourceEntity(148U);
    msg.setDestination(4569U);
    msg.setDestinationEntity(104U);
    msg.value = 0.4514919088071371;
    msg.type = 56U;

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
    msg.setTimeStamp(0.8020949806160536);
    msg.setSource(28673U);
    msg.setSourceEntity(175U);
    msg.setDestination(40008U);
    msg.setDestinationEntity(90U);
    msg.possimerr = 0.7761973908932683;
    msg.converg = 0.7168086225970612;
    msg.turbulence = 0.03349998716277358;
    msg.possimmon = 180U;
    msg.commmon = 228U;
    msg.convergmon = 4U;

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
    msg.setTimeStamp(0.23282026336075967);
    msg.setSource(905U);
    msg.setSourceEntity(206U);
    msg.setDestination(42660U);
    msg.setDestinationEntity(186U);
    msg.possimerr = 0.7534882650494564;
    msg.converg = 0.14845264091486787;
    msg.turbulence = 0.8444433067179307;
    msg.possimmon = 184U;
    msg.commmon = 157U;
    msg.convergmon = 33U;

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
    msg.setTimeStamp(0.18851036439361368);
    msg.setSource(30509U);
    msg.setSourceEntity(73U);
    msg.setDestination(61889U);
    msg.setDestinationEntity(81U);
    msg.possimerr = 0.7271151146648085;
    msg.converg = 0.7291633346150839;
    msg.turbulence = 0.40971533258825954;
    msg.possimmon = 152U;
    msg.commmon = 176U;
    msg.convergmon = 248U;

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
    msg.setTimeStamp(0.28853878604134775);
    msg.setSource(45799U);
    msg.setSourceEntity(98U);
    msg.setDestination(14233U);
    msg.setDestinationEntity(247U);
    msg.autonomy = 47U;
    msg.mode.assign("FKTWDWCPZWEBYBKJBEXIAZPTPSQDRNBKCIFYOCNKFHGIFTUNVCEBMTIRGGCWSLTZJOQBXGUSKXLICFULWFMUDEQKQOLGGAEPPVVCFJMFEJHHTQPUWZXSUWZRJHYVRQKMYAUOGOEWNRIKEAZITGRBATYSDMAAHRTNJLWPFQB");

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
    msg.setTimeStamp(0.2568804725849505);
    msg.setSource(63466U);
    msg.setSourceEntity(194U);
    msg.setDestination(44576U);
    msg.setDestinationEntity(63U);
    msg.autonomy = 154U;
    msg.mode.assign("BHLURZVKIHMEZATWYDKDIYBFZDMWLDNZYYJIGDHEIPFZJGIECJIQBSSBWRGSNOFCAKZKXBSCBELJKSLGQIVKUOCAMBKOZYXAAFRRCNJLEFSURAQQFHXFPXLFJTGOOJXSWTOOLTJYXDGDUMSZZNXQPPUEDGNNYPMQCHVLNFVKWPEBULKERMVUXTQTXPPUWYADNLVBJCPGTWVOUTSXCVCMSEWTFQHCOARWUIHJHRIQNHVRPBMEGNOYGIVZTQM");

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
    msg.setTimeStamp(0.26204565549106407);
    msg.setSource(45829U);
    msg.setSourceEntity(219U);
    msg.setDestination(36401U);
    msg.setDestinationEntity(25U);
    msg.autonomy = 139U;
    msg.mode.assign("LVXFYWDUESNYITLEJEWPRWXGMLCXGYMLVBENOAPAOGHOIWPMQJNBBLQMFQWNIGRTWFVZBSZOHUUZSPGBADDUETJNZPXLHZPATROFKKKFVXEVSNGWCYLRDMNRGVUUOETIOXCYWYZNHYYKBIYBOQCMVABKXLDRZTIRHXSFODQKSKIAGPMZRMETHUJMUKEQDXAEILWNFAMHPHDHNIJWQVKSBAISCZUTSHCCX");

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
    msg.setTimeStamp(0.06020129555695608);
    msg.setSource(63585U);
    msg.setSourceEntity(87U);
    msg.setDestination(63620U);
    msg.setDestinationEntity(32U);
    msg.type = 176U;
    msg.op = 43U;
    msg.possimerr = 0.3882010646248911;
    msg.converg = 0.7692032456629567;
    msg.turbulence = 0.5227386949298616;
    msg.possimmon = 216U;
    msg.commmon = 223U;
    msg.convergmon = 207U;

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
    msg.setTimeStamp(0.5367724999374172);
    msg.setSource(33334U);
    msg.setSourceEntity(225U);
    msg.setDestination(17602U);
    msg.setDestinationEntity(22U);
    msg.type = 179U;
    msg.op = 33U;
    msg.possimerr = 0.24594997075865976;
    msg.converg = 0.20205711961953055;
    msg.turbulence = 0.5774369924809005;
    msg.possimmon = 163U;
    msg.commmon = 27U;
    msg.convergmon = 4U;

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
    msg.setTimeStamp(0.8365321887912549);
    msg.setSource(43345U);
    msg.setSourceEntity(62U);
    msg.setDestination(41517U);
    msg.setDestinationEntity(38U);
    msg.type = 4U;
    msg.op = 187U;
    msg.possimerr = 0.3880424786941039;
    msg.converg = 0.5730041897048388;
    msg.turbulence = 0.031107994214342405;
    msg.possimmon = 182U;
    msg.commmon = 32U;
    msg.convergmon = 229U;

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
    msg.setTimeStamp(0.12418378520250684);
    msg.setSource(56427U);
    msg.setSourceEntity(109U);
    msg.setDestination(35328U);
    msg.setDestinationEntity(227U);
    msg.op = 151U;
    msg.comm_interface = 108U;
    msg.period = 15860U;
    msg.sys_dst.assign("ZBQGDVZYOGJAMOJPIKZLBSOADNDQMIIXUTKXCDOVTYIWBULLAVOPNBRPFVGBCXZVOIFEZKAUYQETAHKKUGSXJIHEKGKQAVLHQQLZCSUNTHDRPAXUUEEXKZZIWPPYFBVARHRWWLULMPHNFSFFDITEHRTIHOGFQOVIYJSTDSZQCQNNXHTCSMDJOFNVCGABWLEBMQCNMJFXMGUXSJDBWWANPGZLCKFERYCSEDMWRMBYKJXNWMR");

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
    msg.setTimeStamp(0.2465753083245933);
    msg.setSource(6503U);
    msg.setSourceEntity(235U);
    msg.setDestination(52663U);
    msg.setDestinationEntity(251U);
    msg.op = 28U;
    msg.comm_interface = 191U;
    msg.period = 20731U;
    msg.sys_dst.assign("HLAOJIZFBOAPABBAIMYRQPRUDOVPDFCDEYLUNCKQFFXRVADSTDHSRGJLRZKNXTWZMSEKDFHSQZK");

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
    msg.setTimeStamp(0.2795273428305648);
    msg.setSource(42274U);
    msg.setSourceEntity(81U);
    msg.setDestination(10164U);
    msg.setDestinationEntity(127U);
    msg.op = 45U;
    msg.comm_interface = 220U;
    msg.period = 22870U;
    msg.sys_dst.assign("VWUSZTLNOWEOJKIJMCBOCTMVBCLYQLDSJDPUTJTKFTJRCYGWHQCAMXTIKLKEIXNAORHGDPYCYJSDGZDQCEMTWNJRNYCBTUAQTVYIZFQUOPVMOLSENXNIRXQXMKGPQVZFHAJWLUBWYFUXRJGFXSIPB");

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
    msg.setTimeStamp(0.5829369351877085);
    msg.setSource(1704U);
    msg.setSourceEntity(76U);
    msg.setDestination(44480U);
    msg.setDestinationEntity(231U);
    msg.stime = 4273350218U;
    msg.latitude = 0.7723020228056371;
    msg.longitude = 0.5272042897724435;
    msg.altitude = 63774U;
    msg.depth = 37521U;
    msg.heading = 2759U;
    msg.speed = 24477;
    msg.fuel = -91;
    msg.exec_state = -19;
    msg.plan_checksum = 11364U;

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
    msg.setTimeStamp(0.17181967646504814);
    msg.setSource(26121U);
    msg.setSourceEntity(77U);
    msg.setDestination(54755U);
    msg.setDestinationEntity(247U);
    msg.stime = 248371616U;
    msg.latitude = 0.9347968175929849;
    msg.longitude = 0.01784047530597055;
    msg.altitude = 2323U;
    msg.depth = 50615U;
    msg.heading = 39420U;
    msg.speed = -21711;
    msg.fuel = 94;
    msg.exec_state = 84;
    msg.plan_checksum = 65008U;

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
    msg.setTimeStamp(0.014871829687883142);
    msg.setSource(9383U);
    msg.setSourceEntity(1U);
    msg.setDestination(63044U);
    msg.setDestinationEntity(140U);
    msg.stime = 1677855628U;
    msg.latitude = 0.4289391669985585;
    msg.longitude = 0.6325676280367882;
    msg.altitude = 22499U;
    msg.depth = 63372U;
    msg.heading = 2949U;
    msg.speed = -14407;
    msg.fuel = 38;
    msg.exec_state = -34;
    msg.plan_checksum = 80U;

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
    msg.setTimeStamp(0.216760320928307);
    msg.setSource(35450U);
    msg.setSourceEntity(42U);
    msg.setDestination(45613U);
    msg.setDestinationEntity(64U);
    msg.req_id = 36778U;
    msg.comm_mean = 56U;
    msg.destination.assign("DPQXKOLPJBODSEQCSSPLMMJQVHUGDCQDBQDYPYIRDAHYIKQAEXFUNSJYCZWVWRSDLTTHKNYUXAYEVKOPXZOHZYITJMGNPGKASWPMWVEVWFUEUWNBSIRFPLFLHFKLCOHSYDXRPVGLGZKZKCGNYOBLXZCNBVDIIFJBMLFMZVEMTJTFUKSTZEEWWTUGZXLUROBBXQAFTONPIURMXSGABHQMRNCHD");
    msg.deadline = 0.5941051202252201;
    msg.range = 0.09163189977474717;
    msg.data_mode = 198U;
    IMC::FormationParameters tmp_msg_0;
    tmp_msg_0.formation_name.assign("DTJYWISWQVPCVLPXNEZVZZDBUBBIVBEPTUMRHQQLNGSANVJRGCFUQDKKYTAFFOQTHIYITJD");
    tmp_msg_0.reference_frame = 211U;
    tmp_msg_0.custom.assign("VAKQFRUIQPTKALRNNDOGFGOQDYFXZRDIBTMUQXLGJMUEEPCTHBIXAXJATIEAXWUFPEFJVYOLTZWJKJPWTKYOVXVEEHQKTFDRPRRSHOYLQBBUSZXMUBLO");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("KJKZVBXFMRXLADDLMLYWTDSANPELXWHOBCJZMDUNOTXPKRUPXHOHOEYENBHMIIVJSTRYCFBMJXOZNEDJF");
    const signed char tmp_msg_1[] = {-18, 43, 110, 106, -112, -111, 96, -10, -44, 39, 45, -113, -86, 69, 123, -37, 45, 75, -21, -77, -27, -63, 38, 44, 32, 37, -17, -87, -120, 12, 1, 92, -68, -37, -50, 67, 118, 100, 119, 7, -126, -97, 60, -74, 73, -3, 116, 15, -6, -43, -126, -66, 113, -112, -64, -30, 88, 23, 113, -58, -25, 38, 53, 14, -99, -95, -115, -124, -112, 21, -89, 51, 61, 9, 93, -50, 107, 10, 69, -96, -59, -27, -121, 28, -60, 8, 83, 100, 70, 86, -87, 24, 6, -63, -12, -109, -65, -20, 105, 45, 43};
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
    msg.setTimeStamp(0.22404290075441236);
    msg.setSource(54271U);
    msg.setSourceEntity(232U);
    msg.setDestination(50795U);
    msg.setDestinationEntity(180U);
    msg.req_id = 49713U;
    msg.comm_mean = 152U;
    msg.destination.assign("AGISHJPEGMOMMXSJZVWSZWDIRMEVYOBBZBZNSIQXUIXWNDDWDEPKKTPGTJRMCMCFGZTUMYABTQYOCVOXYHDPOSVSESEUUVVQJFFTBLTAWLKMOYYUKICHGAYSHKPCVVIXREGGEUCNLLYR");
    msg.deadline = 0.6724449684176257;
    msg.range = 0.09897167279135377;
    msg.data_mode = 5U;
    IMC::RegisterManeuver tmp_msg_0;
    tmp_msg_0.mid = 36973U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("MIKPHBBOQMYQSVLZNGWKFCGMTCZTWZJUBPYLVPXLWOJPXETGJHCZIMDPQJFYURDUBBZFGUJQSHIQVNAHAAGDHEXHSBMLOXLMLINDSMKPKSKOTOAZEKENSEDAIGIYLEJBJXWGK");
    const signed char tmp_msg_1[] = {-57, -125, -69, -33, -121, -87, -43, 123, 83, -49, 69, 79, -62, 120, -65, 109, -75, -39, -115, 94, -114, 19, 19, 84, -111, 110, 125, 108, -125, -32, -45, -78, 19, 51, -128, -104, 46, 64, -112, 81, 92, -84, -45, -63, 90, 63, 3, -25, -93, 84, -80, 67, -108, -38, 83, 21, 69, 98, -64, 58, -68, -37, -115, -35, 65, 46, 101, 91, -83, -16, -8, 99, -69, 41, 74, -115, -83, 93, 83, -123, -77, -91, -11, -119, 116, 2, -113, -54, -92, 115, -42, 43, 90, 65, -122, 110, -72, 43, 100, 38, -105, 62, -96, 9, -59, -110, 51, -81, -80, -5, 0, 118, 108, 22, 87, 54, 78, -92, -8, 106, 114, -117, -57, 112, -111, 23, 56, -104, 115, 53, 22, 67, 112, 24, 122, 21, -22, 113, 118, 90, -42, 0, 68, 85, -76, 22, 119, 69, 68, -58, 105, -98, 117, -16, 11, 68, 79, 91, 70, -87, 50, 42, -83, 101, -92, -118, -73, 7, -58, 81, 111, 12, -65, -95, -120};
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
    msg.setTimeStamp(0.6643552561588699);
    msg.setSource(21341U);
    msg.setSourceEntity(245U);
    msg.setDestination(17277U);
    msg.setDestinationEntity(40U);
    msg.req_id = 40094U;
    msg.comm_mean = 128U;
    msg.destination.assign("QILONNMYKQWYHBNIGZFRZFWTASLDLNIVUGMMNGGELOWVJPDEJSXJESZNRECCFKEKFLXTYSVWDQEPXOZMKKULBOWBZQJLFFWEBSFRXPTOIAKPAMETOVMAXHZQZTBGXQPZGYOTKWANXULAAMVUJFPPRRVUYYJAYBKBIPPRDDJBQCJSBUEVHHDQCCXRIIRSHHOCVWQGDVUBLPKNOK");
    msg.deadline = 0.2060561014235417;
    msg.range = 0.8957752929840365;
    msg.data_mode = 135U;
    IMC::FormationEvaluation tmp_msg_0;
    tmp_msg_0.type = 242U;
    tmp_msg_0.op = 66U;
    tmp_msg_0.err_mean = 0.7139729586009682;
    tmp_msg_0.dist_min_abs = 0.04379547704070552;
    tmp_msg_0.dist_min_mean = 0.1784345135063341;
    tmp_msg_0.roll_rate_mean = 0.3415689906381788;
    tmp_msg_0.time = 0.9938277707369009;
    IMC::FormationControlParams tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.action = 174U;
    tmp_tmp_msg_0_0.lon_gain = 0.5863467786548909;
    tmp_tmp_msg_0_0.lat_gain = 0.663550263918756;
    tmp_tmp_msg_0_0.bond_thick = 0.015564573524154968;
    tmp_tmp_msg_0_0.lead_gain = 0.06771071362740522;
    tmp_tmp_msg_0_0.deconfl_gain = 0.10564354740967608;
    tmp_tmp_msg_0_0.accel_switch_gain = 0.5856363474431181;
    tmp_tmp_msg_0_0.safe_dist = 0.8824396845189342;
    tmp_tmp_msg_0_0.deconflict_offset = 0.9778454850818076;
    tmp_tmp_msg_0_0.accel_safe_margin = 0.13281669278699137;
    tmp_tmp_msg_0_0.accel_lim_x = 0.5599733300737079;
    tmp_msg_0.controlparams.set(tmp_tmp_msg_0_0);
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("OCJUFSMLPQBEJPYZYXBLHMCOCCDAVPRLAHFTXHNURGIIPWQRAIXFQPNCGSOHJKSUNGHIHMKWG");
    const signed char tmp_msg_1[] = {15, -34, 46, 118, 85, 23, 7, -29, 108, -121, 16, 114, -37, -52, 59, -38, -92, -115, 90, -71, 58, -89, 109, 35, -28, -113, 72, 11, 123, -60, -4, 62, 22, 78, -107, 111, 116, 29, 66, -68, -121, 62, -127, -65, 25, -111, -113, -104, 114, -59, -34, -85, 86, -57, 52, -113, -52, -56, 82, -108, -32, 2, -26, 21, -120, 103, 100, 12, -103, -101, -59, -111, 70, 3, -47, 112, 42, 67, -128, 62, 46, -118, -103, 32, 108, 7, -123, -90, -64, 70, 26, -110, -15, 45, -116, -124, -63, 27, 83, -8, -57, -36, 60, -98, -44, -24, 102, -9, -39, 6, 28, -52, -36, 62, 96, 104, 112, -105, -66, -94, -47, -116, 13, 26, 103, 95, -2, 113, 83, 105, -25, -86, -56, -23, -101, -19, 13, -81, -103, 103, -102, 34, -126, 41, 33, -102, 119, -32, 74, -61, -38, 107, 49, -36, 8, -22, 60, 123, -58, -35, 80, -94, -126, 47, -85, -83, -79, -15, 42, -100, 5, -23, 32, -71, 86, 101, -123, -46, -105, 110, 97, -103, -93, 76, 108, -101, 64, -87, 52, -117, -80, -18, -47, 82, 101, 104, 27, 28, -98, 108, -43, -87, -65, -8, -90, 41, -17, 59, -128, -51, -126, 124, -8, -127, -125, 70, -124, 124, 20, 46, -71, -56, 44, -104, -95, 41, -124, 29, 110, -54};
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
    msg.setTimeStamp(0.6082934569689407);
    msg.setSource(29771U);
    msg.setSourceEntity(90U);
    msg.setDestination(10825U);
    msg.setDestinationEntity(139U);
    msg.req_id = 65365U;
    msg.status = 250U;
    msg.range = 0.3650602961295941;
    msg.info.assign("UJOSAGKLSZWXYURWNJSMJYBUQJMNCIZUNDOTFPMFEQAPHOCFRYLGOTKIICLMSXLSNITOFIYCKPUHBDBQMNDYXIIVARELQSZXFRJHVAWFJTGZISTSWZHZLEHLCWGGVIJPZMUMKCLZEOZOXPRWDOTGBEGNJNVXPOHJLKAAYEFAFH");

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
    msg.setTimeStamp(0.046782863199578584);
    msg.setSource(17967U);
    msg.setSourceEntity(26U);
    msg.setDestination(47612U);
    msg.setDestinationEntity(108U);
    msg.req_id = 35179U;
    msg.status = 181U;
    msg.range = 0.08480375322709621;
    msg.info.assign("VHSNTAFMRCWAGZXKHGYYCJJIYKZWYDEBZWTNNGIHKBFFKLZQYUGWGIFZOTLRSJKSRDOLAMNHJMQREEQSAIOQACVYBEGKGHAUCUUXLCJQFCMVUNWZKHZLWODFDULMJTRSNEQPHXSTDPPIGNQGFEBTYOMTREWATMSCUNBWRKPRINTKUZIBGBSDL");

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
    msg.setTimeStamp(0.5950151180686811);
    msg.setSource(39654U);
    msg.setSourceEntity(98U);
    msg.setDestination(19851U);
    msg.setDestinationEntity(209U);
    msg.req_id = 50354U;
    msg.status = 165U;
    msg.range = 0.35275451699224036;
    msg.info.assign("YTSQTYLUFCFITBEMXOVFAWHOMKYJJMFSHBBVIMFCPQDYUFAKEHJPZGQSLFCQFUNETKALSISKNLTGWXQPEDKOBPYCXDAZTQEXCVURSPWKGWJREDENGSWPRZODKVBJUZYJQXRFVANOAQNZYUDXACJJGUOVGWHRFBXGRHHPHOVCVXAKRMZRVQSXRDLTIAAUIBYQPWBLJMESG");

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
    msg.setTimeStamp(0.08316949971628851);
    msg.setSource(10867U);
    msg.setSourceEntity(163U);
    msg.setDestination(41038U);
    msg.setDestinationEntity(209U);
    msg.req_id = 50238U;
    msg.destination.assign("APMZZJCRMSEHXYSDXHUYDLUBAMQOCRWFVYRVIAEYACZUGZSQTGWQBCIQLXDXNGGKVOUBSLZIPBFUEVKSDGTABYYQFNAJEPIFLINBJQXWXXCXHTMKYLVOUOPJAKNPHPRLBWZVHUKXRFPJ");
    msg.timeout = 0.5420889916618259;
    msg.sms_text.assign("RXEOPDZXACBIOCKQYSWKONVVOCCXWYBTIJENMMQOQOWPFPEQQASKQEXLKUPUVSDVPMPVERIKVPSNXADG");

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
    msg.setTimeStamp(0.2856772618709681);
    msg.setSource(22434U);
    msg.setSourceEntity(81U);
    msg.setDestination(22579U);
    msg.setDestinationEntity(54U);
    msg.req_id = 45952U;
    msg.destination.assign("BHJGNZPHIBXAOZANMKOASXDVHQPGDPUANFBRIADXJVTOEVSBKAHGBFDZGMIJJDNYEFMVFKIQKKFDIEHJKDXZWYLTTMXOZYUAHOBBQVGLHLXXXCDQMSWNDGRZRJRDM");
    msg.timeout = 0.47147667266174675;
    msg.sms_text.assign("RYPAZMNRWNSNHLJZMGRJQPEHYUNKCMVKMQBEOTFRPJVVUHMYDYBTKMLRGJKZDZPZA");

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
    msg.setTimeStamp(0.9543092844305611);
    msg.setSource(8700U);
    msg.setSourceEntity(125U);
    msg.setDestination(22414U);
    msg.setDestinationEntity(71U);
    msg.req_id = 7186U;
    msg.destination.assign("UISAYGCJWILLMDVLDBVIKHWKAJGBCXR");
    msg.timeout = 0.8702431013238439;
    msg.sms_text.assign("VGRKLJPNEEDYCTWGIHXEIKMQCXTLQEMPRRQTZWFAHJUVDCDHAPFRCBAGBDMASZJTYJAGCFTBKDXOBUDGNYDKCUQAHIOFQRJRWVXXFQXUPOUXBLGBTWRPUHAIHMBYTPNYNENJAIXPMO");

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
    msg.setTimeStamp(0.8992283315940293);
    msg.setSource(37764U);
    msg.setSourceEntity(15U);
    msg.setDestination(65157U);
    msg.setDestinationEntity(238U);
    msg.req_id = 62666U;
    msg.status = 155U;
    msg.info.assign("AAWYTMIJWRZJGOQTUYNPAGEUJATIOLPOUZVXMEOBBZASIUDKSQSGUNXFHCDXHQPDEZGAXRZOIDOCPKIKPFKGWUZTPNULDVGLESZGHRAJETDK");

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
    msg.setTimeStamp(0.7284367440534143);
    msg.setSource(6612U);
    msg.setSourceEntity(128U);
    msg.setDestination(19073U);
    msg.setDestinationEntity(9U);
    msg.req_id = 27497U;
    msg.status = 150U;
    msg.info.assign("LFVXRYEDYZUBHNENGIKKJFAWXJVAKKTENHPJPTSUMNJEMCACMHNSGIFRSVDBQOSGGXQNPMIZVQTLDWKBHJOEAASFBZFPDUOEMBWKZ");

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
    msg.setTimeStamp(0.06883992000478167);
    msg.setSource(28171U);
    msg.setSourceEntity(245U);
    msg.setDestination(12048U);
    msg.setDestinationEntity(234U);
    msg.req_id = 837U;
    msg.status = 49U;
    msg.info.assign("AICIAIEKGOGJVFBUCFRLPKYSHYHMQBVVEDUPMIYZOZEFDWXMIJ");

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
    msg.setTimeStamp(0.692407248388771);
    msg.setSource(58796U);
    msg.setSourceEntity(212U);
    msg.setDestination(17791U);
    msg.setDestinationEntity(217U);
    msg.state = 213U;

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
    msg.setTimeStamp(0.5337235633046936);
    msg.setSource(57822U);
    msg.setSourceEntity(42U);
    msg.setDestination(3929U);
    msg.setDestinationEntity(41U);
    msg.state = 197U;

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
    msg.setTimeStamp(0.05864225010520452);
    msg.setSource(38915U);
    msg.setSourceEntity(160U);
    msg.setDestination(41165U);
    msg.setDestinationEntity(11U);
    msg.state = 135U;

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
    msg.setTimeStamp(0.8612610638465081);
    msg.setSource(10952U);
    msg.setSourceEntity(157U);
    msg.setDestination(19920U);
    msg.setDestinationEntity(67U);
    msg.state = 176U;

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
    msg.setTimeStamp(0.8561020136927691);
    msg.setSource(11890U);
    msg.setSourceEntity(22U);
    msg.setDestination(40674U);
    msg.setDestinationEntity(189U);
    msg.state = 170U;

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
    msg.setTimeStamp(0.618779594132414);
    msg.setSource(1722U);
    msg.setSourceEntity(63U);
    msg.setDestination(56487U);
    msg.setDestinationEntity(129U);
    msg.state = 57U;

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
    msg.setTimeStamp(0.9740680222148081);
    msg.setSource(3323U);
    msg.setSourceEntity(182U);
    msg.setDestination(12574U);
    msg.setDestinationEntity(176U);
    msg.req_id = 13531U;
    msg.destination.assign("BBYIFHBDFLFVCVYJTXZHGUDAUKRPQNGABPKDNBWDDWYTDSZNYHZY");
    msg.timeout = 0.4141426282922521;
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("OVRAQWGATCVIPQMLTREFLGNYDLYFQXJUHEVSGOFYTNYUVJTTAOJRZXASLDNGMTMQQNKYUTGSXKYOZPUGSYEICCAUMGURLBARDMIWMJHAPWNXBZKOZFXOBHOECQWGIHNPBNJBMRRXLIIYYOIBMAKPBGPZIVZTXDEXQCTFAPKUOWDCHPDEIHLRDWLOCHSLDNXJ");
    tmp_msg_0.value.assign("KHEFXVBUCRDDIWMC");
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
    msg.setTimeStamp(0.8707450417610975);
    msg.setSource(46980U);
    msg.setSourceEntity(182U);
    msg.setDestination(31754U);
    msg.setDestinationEntity(74U);
    msg.req_id = 45364U;
    msg.destination.assign("JFDVZUHXDWUJGXQEKQSHUIT");
    msg.timeout = 0.21198166166522436;
    IMC::FormCtrlParam tmp_msg_0;
    tmp_msg_0.action = 190U;
    tmp_msg_0.longain = 0.5041707516443481;
    tmp_msg_0.latgain = 0.6216266905473296;
    tmp_msg_0.bondthick = 194712577U;
    tmp_msg_0.leadgain = 0.6898514480001062;
    tmp_msg_0.deconflgain = 0.0059116871061748455;
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
    msg.setTimeStamp(0.6884736260649221);
    msg.setSource(317U);
    msg.setSourceEntity(72U);
    msg.setDestination(28318U);
    msg.setDestinationEntity(81U);
    msg.req_id = 56547U;
    msg.destination.assign("XXRIFDWOTDENPDSTBRPQMIYEXGXOVQCUGPMJAJQZDFZUITECXKCKAPEQZHWNFNLOMAEIZJBDAAQLU");
    msg.timeout = 0.9480159699748804;
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("OQKJDWYVFSQACZLQVJPNKVNWQUGFLUOOEPGWKHKBGNNTMRIKXGTITXNDFIIBNHTVORQEECOMKXJQAOWGBNWUNFHFVJAXPV");
    tmp_msg_0.dest_man.assign("TDQGJUBOISRRQKZKNTVADQYCLUGUPLVOKXZNBDZVZEPOCUTPGGSHODYULRHFTDKZLIIVTGIQBAYXPLMEMKAJOAQYYPOFSTJFCEITXZZHYFQHBJKXNHJERCEXHVRPNOHMNISFQISQWBDNRAVRAVEJGJBJKWNSWFYGSUYUCGZLEGMPSMXPWOVLBCGAWKMFTJEHVSCITNUXHYRVKFNAEOAMBRXDAZZHNWIUCYWRWLXDDOFTBBJCIL");
    tmp_msg_0.conditions.assign("WJQGFXFQPHOBTKGOBHGHZXWNLOHYOJITLVYIXJBPMUHFNLNMQQFUJBVDKVBAEAXOPRDPUDNLEWFBSKZRLKRDJICYSEYRGBTTZZNAOPAWLKUCMVLSCJVAKHFVECZHHGMNRFZRUAVCTQILASNSRGTDRISXBKNCLJFYQTWOQOJXVZBXECINDGSQVIKXDXIJGMDUTPUZDVWTMQRUHWAEFUMXTNROPMWSEOBISMPHCYDFZGPPEACMKYQWWIYSLCKG");
    IMC::QueryPowerChannelState tmp_tmp_msg_0_0;
    tmp_msg_0.actions.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.11383207422490971);
    msg.setSource(48783U);
    msg.setSourceEntity(2U);
    msg.setDestination(55155U);
    msg.setDestinationEntity(169U);
    msg.req_id = 16000U;
    msg.status = 113U;
    msg.info.assign("ADVBCWPUXXOQWQMDAEELKYIPNTESJRKZARCOFKIJXMCDXTVIYSZHCMGWRHTJVVNHKRURZTHKNFOHSHPFGGOLIBOCJMIUFXWDU");

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
    msg.setTimeStamp(0.3039726253216062);
    msg.setSource(6072U);
    msg.setSourceEntity(82U);
    msg.setDestination(39148U);
    msg.setDestinationEntity(146U);
    msg.req_id = 51014U;
    msg.status = 246U;
    msg.info.assign("YONCOWTGOWCCBVSIEQZGTUMAFDKHZARIQTTWPSRHBEFRIDVUYLWDEGMCKFAUSLMAGZPPXLKXMVRGGYFJTCNRWKNDKNXMCQKQHMOBMNEXPDJVYJWJYNLLBWQQYEQHJPSVXBJFMAPLVYPEOKUFWIOHNQJZ");

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
    msg.setTimeStamp(0.287088309107426);
    msg.setSource(19985U);
    msg.setSourceEntity(170U);
    msg.setDestination(18000U);
    msg.setDestinationEntity(214U);
    msg.req_id = 8793U;
    msg.status = 30U;
    msg.info.assign("GLHBZCCXEOEFKXDEBOVTSYWQYRIIPMSWCHSZRGKXHUSOEFAKJDACCFQBVMGATXNDQLUXVZMIMMHRHWMJTKLNRPMCJRVFOOOIPEDSWIIOYSCZQXJPTSFGHVRGFDHYQJWADSCUJMDBVONMCKACOZAJGBQAGK");

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
    msg.setTimeStamp(0.12170550120205226);
    msg.setSource(47848U);
    msg.setSourceEntity(16U);
    msg.setDestination(24625U);
    msg.setDestinationEntity(42U);
    msg.name.assign("UCZHBVDAHHMZAYJOONPUPUCHJYCHESUFYTIQPNVIMULTABEMRPKQKXAVRDKKQFBONFIVIDWPBZJASLGLVJVTYCAQMXWBFQCYCXDVPJNJOIMEKCVNAVABORPYDGBPJUHSKSJZTFWNYRXZAEHSDFLWETCXIFQQGTXWZNMTGGUSHYMTJWRSFMWOAGLQMIIOXBGUWOZZBPUWQKRNPQHCJZFIXYESSX");
    msg.report_time = 0.7517539298269279;
    msg.medium = 200U;
    msg.lat = 0.5719246059881263;
    msg.lon = 0.5608177205183137;
    msg.depth = 0.1574771547561855;
    msg.alt = 0.7784038800524326;
    msg.sog = 0.20952286756589666;
    msg.cog = 0.5739730646927336;
    IMC::CommRestriction tmp_msg_0;
    tmp_msg_0.restriction = 2U;
    tmp_msg_0.reason.assign("KGDIDXCNHTBWCPFMILXTBSGUTZOIZWNQASCBTUWXTEANUFIKOKTHWUMN");
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.8828752439831569);
    msg.setSource(55402U);
    msg.setSourceEntity(62U);
    msg.setDestination(33613U);
    msg.setDestinationEntity(111U);
    msg.name.assign("WJFMWFBPRKWBOIPRCKOTZYUAZQLEUCNWMHXUKTFWSPUYVACTOOVBDIJHGHDPMJBBAMPQXZIUHTREABWKDYNDMSPQPFFUMYXMNSBTKJJXGQWROVVSDYOXCBFAYHVVURHIVJNFSAJGAKCJIOEZNLNXTCCBLMARIDXDZJYRTOEENEKOGSSIPDGRFHLGJGB");
    msg.report_time = 0.719600017330018;
    msg.medium = 228U;
    msg.lat = 0.46852567709162096;
    msg.lon = 0.30941808966794804;
    msg.depth = 0.8250937451107196;
    msg.alt = 0.21349710444477832;
    msg.sog = 0.4637460255060507;
    msg.cog = 0.9586871568997009;

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
    msg.setTimeStamp(0.3493092189507091);
    msg.setSource(18429U);
    msg.setSourceEntity(163U);
    msg.setDestination(30811U);
    msg.setDestinationEntity(172U);
    msg.name.assign("LZAOINXXFMFSREPYGMSODBQISIRAVAPWCVBWCWUTLKJNBMEUGSINMPAPSBEDLOMLNVFZWXQHDJVMNEVET");
    msg.report_time = 0.5733400730946135;
    msg.medium = 6U;
    msg.lat = 0.8049381353911599;
    msg.lon = 0.8616650269743984;
    msg.depth = 0.7851180281547595;
    msg.alt = 0.09222383161962144;
    msg.sog = 0.10959292970806278;
    msg.cog = 0.15411100900683583;

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
    msg.setTimeStamp(0.31277899558047617);
    msg.setSource(13088U);
    msg.setSourceEntity(181U);
    msg.setDestination(37074U);
    msg.setDestinationEntity(118U);

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
    msg.setTimeStamp(0.7164052999371975);
    msg.setSource(60011U);
    msg.setSourceEntity(173U);
    msg.setDestination(27365U);
    msg.setDestinationEntity(65U);

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
    msg.setTimeStamp(0.18032679965064613);
    msg.setSource(51768U);
    msg.setSourceEntity(15U);
    msg.setDestination(7977U);
    msg.setDestinationEntity(74U);

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
    msg.setTimeStamp(0.12209865752904214);
    msg.setSource(50940U);
    msg.setSourceEntity(27U);
    msg.setDestination(40826U);
    msg.setDestinationEntity(213U);
    msg.plan_id.assign("WGRYSAKJLJAWGYKILMXDSJJJALEIABAGPQUFWOUABNDVVLDUOVPTZRLOSIQCBMURGHMXNTCHKJGEYXTZDZOGTFWSPKDBDRCTCYTZQRRIEFOVNXKAZOCQOPHKISVCWAKELYVIIKBWHWEUP");
    msg.description.assign("YFVNBNHWYCDBKOHUAETNZQEJTTXGRFXYVNDAFZYUYBATNLOQASRMKGNIALVIEEWSCGYETALBRGVTMLADFLJJNCDPNQTH");
    msg.vnamespace.assign("GQMOUWOBPUSYDZSCLGLPAHTFNEGEHMBZRSWRXHQTBFSGTYUTWGETJHLBMFHDVWFWJOKOPLMVFXSLSHEYKXYVCQOJWKVDBCQROALVQGARWAPTAQLNANMDHNPENGXZLZFXBRJQTAWFUXXAVDGCPKGCZAJCFJNZSZCETBUKDZIKANZOKPRPJMTIMRYHPNOUNQOHUZKSMGIXVKJUNREDCEDBBHIWQECYKDRXSOMVIYXLSREPUBFQFMJVILVYJII");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("CYVAXBSBABLTJKUYLDIMEEMMNSTPIFDTESNZKJNCTQUVDCXRMPEZILEWNOKKHQEGAVGWUTQGBFKVRTGDTHZWVYWALMFJAYCQATGJXFSQKOWFOCJUOFTZXHDVRHXXJCSVUKBQOAZPCEYIMMLOUASJNNAPOYPLWIUEWJJDIBNOLTXUEHBVUPKQIRHQGMRZCZDORWHHDPGXSBHZRGEMCFOD");
    tmp_msg_0.value.assign("NIEIGVTPYALTYPACQMZWKPWCQZCNWUYIOZTFGHDDXJHGRNXHCGBVSFOQSKENEZRKCUMIXRZDAGXAJOJFBOVSQMSSNZCTERJRNJJVMSVVTQJDYQKFLIPLYGVLMRWXKIGUUMOAHBEGLIOKXBHHSFMTMUOLBHXUZZYTAKHATFFMBVWDYBQOQCWRDVNCWMIBWNDJEPHDXNKPTAJYUCPEEGWQUJEFPBNULZGWRVSDUABFXXPSCEPHIILLARRLK");
    tmp_msg_0.type = 188U;
    tmp_msg_0.access = 72U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("DWUTFWAKIJNLDGLQQNHLTXRPDMPSQHRNJVHZFABFM");
    IMC::Launch tmp_msg_1;
    tmp_msg_1.timeout = 40468U;
    tmp_msg_1.lat = 0.07979290019191543;
    tmp_msg_1.lon = 0.9610890636593922;
    tmp_msg_1.z = 0.9224240147526749;
    tmp_msg_1.z_units = 114U;
    tmp_msg_1.speed = 0.21842551876143934;
    tmp_msg_1.speed_units = 79U;
    tmp_msg_1.custom.assign("QPCVPYRZRRGBGHFTXGGJWIVGXPYXMDMUSVCMENPJTEKOHKVBEJLUKBDHJMTWFLQNOWIFRQHWBCMZAMF");
    msg.start_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.3804094643859681);
    msg.setSource(1796U);
    msg.setSourceEntity(60U);
    msg.setDestination(52909U);
    msg.setDestinationEntity(231U);
    msg.plan_id.assign("JGXWHFCLQEJCHGYVSCJAPZMKPUAWIAUZNIUTOYMGIMUZBRDBALJBLQKFRPEOJIZPAILHTWNTWSNNMNXMHFVTBSYGVOGZJKAZQTKSLCGUSBTVCOTMSQACDCSJGNXLVKWRPGWUYWFFERDMNHBDTRECRMOIOYAAIERZPPDXZLKVXWAONEDVDPXVBUIYSJZBWYGXECN");
    msg.description.assign("LABUYPIZIOELZKJRKWFQCVJMPUMQAEAZRWSEMGFTUCNLNDMBHGHHHDJKRFCOAOGUWFGQPRSYUSDPAXXSHVREQHBDIIYSCBHCLRDEYMBRMDWZSTKKDKXOIXJJPWQOQDKVJYTQHWGWNMSEVAUAGLYWQNFCFTTZLYETGWAVBNV");
    msg.vnamespace.assign("SFEWLZJPJFOUHOILQZSWRJHJKCPDKVKZATIBKLPFGVRRCYSYECNBWQMCTPRZYAITHGXDAXBSTNRDXAARFEGXCGMQNXZUSZPVZKRDDBJXYMOOWAPINSTYHJANNXQVUGQKWQCDMOHTJHLKHQVLWYR");
    msg.start_man_id.assign("VNNOKEGHBWWCXTYEATPXCPPDFFVABOZXGQWGQLVHHZAQUPKWQZNFURFYVCWDNPQCPAOMKVUUUYYTXUFTHCAFMXBPNSTKTIISJOZIWFWANGICTHLERMPFJGNDYNNEXYZMRJAIQLLSDJQCVVHKDCBEGWDIEMXBESOLBUNHZKVMWSLZCSEIDFVTKQRIJABIZGRJKBDLRXROHRZJHSOPMZGLEXREDVYOAF");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("EKRLOVQTGDYJEOSHQEHMRDALMDMLSHHRGUBUPJPNS");
    IMC::ImageTracking tmp_tmp_msg_0_0;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::PulseDetectionControl tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.op = 195U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("YYZDESJBUAPBQZZXRFYHXKLEDJBFDVJIPCWLXXCOLWSNIRKLHPMNXJOKARIWMSNBTKYEFATLPYSVBHAFOUHAMNCURFPQUWON");
    tmp_msg_1.dest_man.assign("MTDRPVMLHKJNAWDOBXPYDJGEEAKKBWTCOPCQRWZOQVQXYKHCDHNWMJVINCFIRBFEHZAEYUTRJUBMNTKTSDKIVCSPUBBVXUN");
    tmp_msg_1.conditions.assign("NFMBALKTSTHIMVLQADREQFMELKVBDPFPFJUAYKDLGNEWUIKRABUYPRFXDTIQBKGVODGGGSJWFVPKQCKHPEBMWEXHRHSTPLPBUEJYTZTNYSNIVNNDXAIIJXRNZHHWVLYWBEGZZFYDEDAROLCBGMMXQRZASNTOUQKJLVCJFYUU");
    IMC::DissolvedOrganicMatter tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 0.21123383079235436;
    tmp_tmp_msg_1_0.type = 75U;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::StorageUsage tmp_msg_2;
    tmp_msg_2.available = 1329450373U;
    tmp_msg_2.value = 224U;
    msg.start_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.2218873679872454);
    msg.setSource(43599U);
    msg.setSourceEntity(0U);
    msg.setDestination(34959U);
    msg.setDestinationEntity(188U);
    msg.plan_id.assign("AFQHZJQOSLAJQTGHGEAZWSOTDCWHFSLPULKLPRZGZPXZWRMIRMMBCXMGJBQGYHVTHMUHNCBEYYINXLGHUIBXOWKQRXNWMITTFZBDDSIQBDARKTYSYDMB");
    msg.description.assign("ISETXTGTQCHLEJPXOUXPEWGMDQXRRDPZYTHIWHIHEGEINCPCVAWDJYWFMHJJOAFRAUYWMWDVGGVBNFCZKJNMNQRVUVGRJMYVNSOOJURDSBXBZCWLOEQTAEKJABTOXJUZDKBXSHKGNZWILLBDUVCSLFALUHKEOMIPESUFFLXRQSDGIMBWBIKYZKPXRBKKFPQAJTLUGLMSAYCVQYROOFWDFTY");
    msg.vnamespace.assign("PQCCFRGMKALJIGXCOBUGXZNTQEOIVEMLUMSDAEKTFMHBCEPYQNKTNVMXPWJFFZWJYXITSLVDZDIOPUWZEYPOWFTCOHZHWGRFBRBPHQCBILXANYDEIOHKQQBUWCYRGMSWFFLDKYALIJDNFAETAMGNZASGQUUMPBOWJPJUTRGRONZYTDSRRHRLSENTFHLQVBHIBCUVVTUEJNXKGVOMSZUEZD");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("UCRCFSOUSRDTDOOFIYJZGUAAKRPMTLHACJPQPHHMVJQKVBNXBDKMENJULEIXSTVZOFYYLBYJZHMESPPJEUCGLVRWIKALRNHWUGGKVDBDJHZIWXQIIRSUXQIDWOWWYBCDQXAUMJGFKZXJNBNCDPNCYICQTMLINHABLNXSZEXADTPNYMMBVVTTOEATSPBRSCLEOLZHSAWGIXFKYZORHFWRZEGQFFWKYQVNFHEMDBWGRKFPGKOEQOVUGAVPUL");
    tmp_msg_0.value.assign("IOPRMYGPFJEDKGLKRCRAKRHDSZSVERQRWHASLTRLUIBITMVBEHXNVFZQKANLKDQCNVNFKAXNFOSPHGILJBDXNOTHBEHWWBONIJARKUWNHIRJFXCQSBIXPEYAMJJVJDDEYYPIXPNYCWOBGEPWBUGHUPMKYFWLTGOQGOZAUMBGSDQIGSOYEWJUZEPLFVBYZQMLSRCATAAWVJMVMZUSTVCCLNJSIDZQ");
    tmp_msg_0.type = 139U;
    tmp_msg_0.access = 218U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("DNZSZBDTEWJBLJLEPHBHZCEGJAKPMHYRNVXEDYZLEGQBIEFLGTJDMFYNIDMSPUVGCZUIUTUCODNB");

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
    msg.setTimeStamp(0.18250579938057443);
    msg.setSource(30434U);
    msg.setSourceEntity(103U);
    msg.setDestination(28714U);
    msg.setDestinationEntity(70U);
    msg.maneuver_id.assign("LFQPBQSVEQOWKDSYSKDMXGAUFFNMLUDXTCMDJNKCMEYPHBIWOSDSEQIBKZSXQCNAYSAPCHCGXNXWIXHCAZZQBSUTMWYRRPUIJEQVMPFLU");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 26160U;
    tmp_msg_0.rpm = 0.39532141882110017;
    tmp_msg_0.direction = 10U;
    tmp_msg_0.custom.assign("IUUHTQFKYOWUTUOCQIGGHAJGLXFYDZSMQVQGPIJCDZEVBZJWXSQTQZLLJFQRSTICTLOQEGVBUIZYBOKYTVPKAAEPHRDKFNNWCAFVJMFORHKKUOJGTKVWJLDGQAIJKIXCXMGMUB");
    msg.data.set(tmp_msg_0);
    IMC::StopManeuver tmp_msg_1;
    msg.end_actions.push_back(tmp_msg_1);

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
    msg.setTimeStamp(0.9244833073123879);
    msg.setSource(38794U);
    msg.setSourceEntity(25U);
    msg.setDestination(17286U);
    msg.setDestinationEntity(231U);
    msg.maneuver_id.assign("IPDHBTGKOIHXEKZEPRUSKNONKRMGRWZZVJBBWQOMDMSNIUYNQUJSARXIGEIWWYCYSYCMTGNXGFNBPRNTOETBPPZXJOPWLKAAWMWDAMUJUCCLFPBVVVUEDXBGNTDVAMQCEHPJDRAJOTEAEQGDTAKSDZRYLQPGYOZTHASAYLFFFKNHXWSOZVOCXIMUQKFSFOQQVLBVBMVFHCLZDHKUVLESTHRYWXDISLJKLULQGX");
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.7640336239569233;
    tmp_msg_0.lon = 0.45358687573687684;
    tmp_msg_0.z = 0.595963766611184;
    tmp_msg_0.z_units = 153U;
    tmp_msg_0.radius = 0.7632814364752913;
    tmp_msg_0.duration = 20552U;
    tmp_msg_0.speed = 0.10094718284125914;
    tmp_msg_0.speed_units = 250U;
    tmp_msg_0.popup_period = 38910U;
    tmp_msg_0.popup_duration = 11119U;
    tmp_msg_0.flags = 75U;
    tmp_msg_0.custom.assign("SPTSAXHIENKDNNFCZKHIWXBXRGNXECEYCDCOZSOFSRJJQVLOSQXVXAYOANUUWQMAROHBDXRSGXMEVZPWWTMMLIURDWP");
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
    msg.setTimeStamp(0.2582177847260113);
    msg.setSource(45057U);
    msg.setSourceEntity(220U);
    msg.setDestination(6184U);
    msg.setDestinationEntity(125U);
    msg.maneuver_id.assign("NXGYRTFRYBSDOVPOTM");
    IMC::StationKeepingExtended tmp_msg_0;
    tmp_msg_0.lat = 0.9076659155516341;
    tmp_msg_0.lon = 0.10406710800151553;
    tmp_msg_0.z = 0.47340098354352245;
    tmp_msg_0.z_units = 72U;
    tmp_msg_0.radius = 0.03773391946958593;
    tmp_msg_0.duration = 7822U;
    tmp_msg_0.speed = 0.40478278877568696;
    tmp_msg_0.speed_units = 171U;
    tmp_msg_0.popup_period = 5919U;
    tmp_msg_0.popup_duration = 56199U;
    tmp_msg_0.flags = 204U;
    tmp_msg_0.custom.assign("DKHDBSFYRXBOUQOT");
    msg.data.set(tmp_msg_0);
    IMC::TextMessage tmp_msg_1;
    tmp_msg_1.origin.assign("FQORZYPAHJCZLDXXGJULINUDXVKJKRYFEUXVSKABGLKYMEDWDVQCIHEXGVPNVXBOZMVAZSWBELTHMHRMTINMZSQRIYDBBFKIBZCYRTTBMCGUKZFOCUKIHZIHYBJUQSRGGQNPUSSCEHMOJN");
    tmp_msg_1.text.assign("RPCYRWKEYTSZTSQVBZZOUSWFGTGIMSPZBBLUIOWBOVKJEJUEAUZGFEUAKGZPHVXIHEONDTBQGWKXQDYIFAHDJTFIKMMDLQJLDYNLNXNH");
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
    msg.setTimeStamp(0.2569903061064869);
    msg.setSource(62912U);
    msg.setSourceEntity(225U);
    msg.setDestination(34872U);
    msg.setDestinationEntity(128U);
    msg.source_man.assign("NFUGPYHWEDQZVICRCFRQGHPVDWRAXPNEKRFKUBDQALOBTPGCVNGPJHWLAULLEGFLYWZXITOSZWDOVDC");
    msg.dest_man.assign("PWRDCFQRGIWYDIVXJMXYQOMLVGCCSZHUVQXVUAEASMGOBHXUIFFUYFUQIATQJHIADPTEREYALOOXFOUFVYAWZZKCSEAVDIKTVHPFDSZNPINMRQKGPONOGDFSHHTBLFOKRYSSJYZGWPKMLJYJEIDUDTLDYMEHLIQPAMZVXHLJTVCTKLSWQXSEXGKERRJNC");
    msg.conditions.assign("TRNXMSOGZQTLBSUTCEPDOIW");

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
    msg.setTimeStamp(0.4425246204894686);
    msg.setSource(59141U);
    msg.setSourceEntity(59U);
    msg.setDestination(16770U);
    msg.setDestinationEntity(160U);
    msg.source_man.assign("AZJBAXLMFBVWYSUDPSDVMHTSUKRRLNNAEKCJZDGICEWSIBYNGAKXLUKORJAWDXLGZYDOQATFFJLIXWJAUYEBFFUQIYIHKULBRPPXEXUHRZZYBRJVDVBNAKSDVAMQPGVCXKZMROGXPSJMMGWLFHQMECWVNNFHDGECBWHTWRZMVEITFZPKDEOBQLLXYXOHHOCNKNHCGUUSMWCDPUTOTOOE");
    msg.dest_man.assign("IEWFYETOZLNQQPHZTOWHFPYZBSZIKKNIYYCWJBCKTWAREVVJFMROOCILSZVAEJHUNCKRYGYWNSGQDNPLAUDKMIWYWAIJEGIAQPSNXRFITKHGSWRMLXCTBSXBGBRHADMCPJPAXOBLCKLLRBVXGIKODFLJOZRVT");
    msg.conditions.assign("REXSKKCTLXHGENWQCAGWOWTXPJVLDAXQQIREFMMWVFQXJNULYCKNSDSRVYHPNBJAIRGBLKNMMUIWINPAOTJGHYBWEZREUARZDQYHKTAFVDQFJZECXQRWLKQMKLEEVOWKUJMITTDBVKNGDSZJPQIHIRZOVSSKWXJUFYLYSACEPGBDAUC");

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
    msg.setTimeStamp(0.43177339702629014);
    msg.setSource(19248U);
    msg.setSourceEntity(56U);
    msg.setDestination(17218U);
    msg.setDestinationEntity(178U);
    msg.source_man.assign("MOXQGDNBYBFORWZJMMIKHJOESVOPWDXZFKPSQHGNCRWHWZLHWBAQBGEUGSNCNTUSMLBTHY");
    msg.dest_man.assign("UNJZQEQYYKKOMZCVOVHJAZRMIHSIWMGIGGJJIGCGOGIOQFUUEIEGFVUGSYRTHVWPCKFYMCTTJHDRPESOXYSTDWQBUBYLGZCLDOPLMDIMAUZYWYO");
    msg.conditions.assign("YOVECNETTVAZIAEDJKSDNDZNMDQBMVRGWSHNLLGXPAIEBPYNKJUYUSKMTWTVQLMJBPURSXBRELWWSIJITCYJWMLRGZQFCAHVZCDLBOAWKRTWAZXAYCHTKKGVSUNSNCGOSQWBOMWMPQFQHYJNXNXFKFHPEIDCOJAPZTMDUBBFZMKOKZZGXQLJJXEEYPOERGGSLWXGVHTIFCSLXYFMRRIFIDQAPTFQVOAPRKJVUYO");
    IMC::ExternalNavData tmp_msg_0;
    IMC::EstimatedState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.8099383143650641;
    tmp_tmp_msg_0_0.lon = 0.21077468283923928;
    tmp_tmp_msg_0_0.height = 0.9968455171776077;
    tmp_tmp_msg_0_0.x = 0.18846220273474068;
    tmp_tmp_msg_0_0.y = 0.8310157960172451;
    tmp_tmp_msg_0_0.z = 0.2722085733520476;
    tmp_tmp_msg_0_0.phi = 0.68252670675137;
    tmp_tmp_msg_0_0.theta = 0.8217617627323068;
    tmp_tmp_msg_0_0.psi = 0.15012061095705798;
    tmp_tmp_msg_0_0.u = 0.20967105386963603;
    tmp_tmp_msg_0_0.v = 0.09068212716232038;
    tmp_tmp_msg_0_0.w = 0.5884134114052475;
    tmp_tmp_msg_0_0.vx = 0.3838333388775964;
    tmp_tmp_msg_0_0.vy = 0.7866833694153359;
    tmp_tmp_msg_0_0.vz = 0.7858589304987045;
    tmp_tmp_msg_0_0.p = 0.409611811256159;
    tmp_tmp_msg_0_0.q = 0.8266739045175517;
    tmp_tmp_msg_0_0.r = 0.9287573943955418;
    tmp_tmp_msg_0_0.depth = 0.5141397035657556;
    tmp_tmp_msg_0_0.alt = 0.29863227050631;
    tmp_msg_0.state.set(tmp_tmp_msg_0_0);
    tmp_msg_0.type = 128U;
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
    msg.setTimeStamp(0.5651282719413757);
    msg.setSource(8444U);
    msg.setSourceEntity(3U);
    msg.setDestination(20101U);
    msg.setDestinationEntity(127U);
    msg.command = 50U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("RWNSMRLEKSUDHSZYNEIZHCXMYGNKFMEBJAWSOMDGIJJUAVQNPYABQODNFQHZCFQSLTSCBVOTSJHTNHGSUPOHNRLYIECKPBYQBFCENAKEBRXVBDMFJBAJYWOZZZBKWWSXFPDRDRMTKMYFFZDGVAGLOVEVXUVWPPGKLMJFZHZEX");
    tmp_msg_0.description.assign("FCNBRFFJSLCHEIDWSADAOJLKUQDDIGUFRHBYMDVETQTXMSHCLWTETMOQOIWWEUKPZSTXJTAJUAZEHXYEBHSRUZHVDRXCMIBXOMGRNKGPRXIZRDZYGVKCMLIMFGSCVSZGGLIHYEQPSBVPXPIAXUAOTNQOYCMEOPRYFAFBUPJTBWWDXWDKKSEVHLJLGNDRQLTAQZQOWNUGYVELNNWYBBMHFQSUOCKWYVGHOPJZPVRUMVNKA");
    tmp_msg_0.vnamespace.assign("VGWZXOSQCQWTKUNQANDFNJJNBQKOGYMJDKHAISJBYZRINEJOZWIDWWSVADWBMFYJGYOMOCAXFLUMPMUIVYIRHPCSGUVEBEJXUTFCHFSAKPIJPIHLBVEPZYDHLULJRUTFAPTCSWRLLVTNVHELTVRQHKKNBMOHIPRQLEXGUYJQAUGWFZZOVXGKNTZWEETXECRMSDYQGDGXNOZFIPTBKDLCWBHHQKSBQK");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OHGTFQPLLCS");
    tmp_tmp_msg_0_0.value.assign("LNMKDJOXNPZQJTVLVHYSFXHDSORUKIJQFPZEVMUOKUUASSSCWDQFCJGOHHYLGMHZQVXBGOHZAPWNRQXGVNFIGWIEKPLFWMKDCSBOTBLYDRBLUXQAKKFSSURTYKFQHWPURKVBRCJBUMCNBXEMTEDTIDTPYAREITARCMQQAHZABEKCOBEPPZJVYPDDWFNLZVFHJLZWVOCRGXNMIIWCUMDGABMSEXRSVAQ");
    tmp_tmp_msg_0_0.type = 33U;
    tmp_tmp_msg_0_0.access = 38U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("LKHDBBETMIGPJSNVWGOAMAIPGJZZUQJCMKTFGQEEQTDGBMPAOPSEKQLRFXPYAIAZWTILCGHATEEEQCWTLVLXAMPWDMMJBRNDBVOEHRUKVKHB");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("EZOFWGOAWKXJWMCXAMKFSUZWVDIATQDXDCKCIPTSAXQOTRSJACFLYVDOPHMTDZKPZJBVFLZWYTINHWOZBPKIMUUWQMDNYBPMBLRGMWSWRKPA");
    tmp_tmp_msg_0_1.dest_man.assign("ORUTFCNJZFSRIRPFKYIDCDNURQMCUDNAJFHMYCBMNKHPQHECMWVYEWGCDKNRIQSHDJGUWWMPLXLOZLYQXZLGVSPEATRGTZPASUPWTOSMUOBJBPYLIGIAFWRASBNVSPRKIJZXART");
    tmp_tmp_msg_0_1.conditions.assign("GXJBDYQZYLYBMPTTZREQCWGXWXCBCXJJJLXANGOHJVNTRFSSFIRIAZIKVYPKAUNQMLOCEGLMHMARWLMFPIBDEMQPTBEFBRQOJUKDQPPKNATYFGKOTSWYULDFHVKEPTWKFCBG");
    IMC::FormationState tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.type = 159U;
    tmp_tmp_tmp_msg_0_1_0.op = 160U;
    tmp_tmp_tmp_msg_0_1_0.possimerr = 0.7730249630168906;
    tmp_tmp_tmp_msg_0_1_0.converg = 0.9870530002078681;
    tmp_tmp_tmp_msg_0_1_0.turbulence = 0.23444245538684028;
    tmp_tmp_tmp_msg_0_1_0.possimmon = 19U;
    tmp_tmp_tmp_msg_0_1_0.commmon = 18U;
    tmp_tmp_tmp_msg_0_1_0.convergmon = 143U;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::PWM tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.id = 20U;
    tmp_tmp_msg_0_2.period = 2764140453U;
    tmp_tmp_msg_0_2.duty_cycle = 2471145207U;
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
    msg.setTimeStamp(0.9737556318388279);
    msg.setSource(50894U);
    msg.setSourceEntity(204U);
    msg.setDestination(23529U);
    msg.setDestinationEntity(83U);
    msg.command = 238U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WZOXDRGLEFCKKTRMCOMTIFNWQUYCXLXINHRQPPODTDHUWVAZXPOLUJIFSSAVMIZCCIGLJKZKPSWOCABOHHKLTVKOQGJVTNMYMZYNTHZCRRYWNSIQBUJLBPFXYWHQKZHNFGFBYLZRAKEEYRDJEE");
    tmp_msg_0.description.assign("EDZEHQLWDSZVJEXUPGECAQODFJDXYCPMAINYAOAZKOGTJMBHFUJZPNMGCMAONLQRFMLYLPQBIZFNBIREVXSNGGWSOXESQYTERPAYKURLSEKGDXKZHLKPTFBYMBFJHDUTIFTHOBGULRJWJMADQZKYGBHWPTZOTDGVWOAWLALCIVRHYEWBQQSKIYHHQVFKXUZNRMVZTJRXSDFOIIUO");
    tmp_msg_0.vnamespace.assign("PJPYXGGSXCDTBAVJVTZKCEEVSQRLXJCUKVRGMWQHJWCKUETORMSIHIQXOQRKHLTJZQGIKPRXHLUKABFKRMVYCBIZZCDGPTFHUOIZVUGFWEPNXAWVQCXZN");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("DQILCODQDAIJWOCCMVVGPQIOUBPBRSOFVUYLKTVZPCBRCZIMSMUNJAFOEZYMXOMFEEVNEYGVYTGQUMWOEWKXKLMKFIWTALONCWZXRPKMRJUKIRJG");
    tmp_tmp_msg_0_0.value.assign("YAGHWCGTCUPMBMGCOJJFZFJUIQTQFNVPDGKPQNKHLSOOWQTLOMYCAAAORRSJYTW");
    tmp_tmp_msg_0_0.type = 249U;
    tmp_tmp_msg_0_0.access = 146U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("MJHKYKKIPTNCEMWXXGRPBWWNJJFXNPULSYCYZJAVKHJILDCBWBGFZZDKMKNXVIFUKDLHOQRMPGVINNGGEMBLSWSKBROEXRWCBPOODCZGADHHWZQFQQKUAKEAFYLHUDGGYFPMQGPMTFSCDRTSISHAUOLPCUOTUVQEYW");
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("VNAENDZVIROUZMDFZIVNXTHCMBCXCDGUYPIGENVIQKTMLGZWQERCOSZAUSBTWKHICNOPPSOZRYKDMGZQAWMJZFNKWOUMBLFEYWOEBRHIALIBGGOHIJXSQJAZAQFPJGVYDAPXEKFLIFRSMTFWIKDGMLYWTWLHUXOEYYCNQLSVJHTOSLETREMMGOWDJUSKNXYPKTABTXVBRQUPJHJFLJJARTQQKFSNCVWFQCDPPHHUXNXAHZESUBYL");
    tmp_tmp_msg_0_1.dest_man.assign("RZABFSOFROKTBTMIZPYGBEMTNDHCZCVJFURVJZFLUDYRHASAYSARMKXTMKNHPRUNDISFSTKKQGVOFYNOYVNWKMQCIMFEKOPPHUFOEPLHXDBPDCEAATEWSHNYAIGJCVMUDPHIVSBZV");
    tmp_tmp_msg_0_1.conditions.assign("OBZGUPPTVPYHUMZBFFAVOFXPWKMMCOUROLRUCKHMCYODVNKAQDEMLLRJJAZFLBJXZMWOHQIMVVHXQLKENGTKNNKLIBPKOQA");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::ArmingState tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.state = 90U;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::Alignment tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.timeout = 41758U;
    tmp_tmp_msg_0_3.lat = 0.33684295606150305;
    tmp_tmp_msg_0_3.lon = 0.05435869265475346;
    tmp_tmp_msg_0_3.speed = 0.9500456322943406;
    tmp_tmp_msg_0_3.speed_units = 204U;
    tmp_tmp_msg_0_3.custom.assign("UAHAGBNRWDREGJOKNMTLFGKQNSMUWDBJTFALTEICIRFHPNVZJ");
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
    msg.setTimeStamp(0.39431247647646595);
    msg.setSource(19628U);
    msg.setSourceEntity(163U);
    msg.setDestination(41253U);
    msg.setDestinationEntity(124U);
    msg.command = 246U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("SBZJMUEAFLUAKQWFFGNSLCIQBTEBMCAKVCQGVUZIHECDPHFNXFDOPZGOWIHSTAMKZYOUGRWNWNTAGWUPITYFRXSFHFOXRDPRXWYUUNLYYPKGIYGRBKTSAVZVKHJOVGCNBLFRITTDIJZOSSRNGJBMKBAZRDPMDARZEQSRABCLEUKJXXJECJHWUOXXNQHQHVLYWQEBKSJVWLLLOBTOE");
    tmp_msg_0.description.assign("CBAHBELIGDDHUXYLSQ");
    tmp_msg_0.vnamespace.assign("VMTBINWFQKSFTUBNWEWDGZJZOSJVSIKJDVIGGCORHUSSPXAWJRHOVVQFGLAAINEEYWJWWYQCFLLDJAMRRLNPHHXFRDYGCPKKTJFNHUXZSKBNAGQADFFXSPOQZDJHJIQOIHMKATYNTYOKDZZIUIBRVEPBZJCQEWOUUBYVZOPKQITMRFLL");
    tmp_msg_0.start_man_id.assign("QVXGUSAHRAHSOKQXKDOYZCFAKRGBBTQGXZPFLVTH");
    IMC::SimAcousticMessage tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.18522714998602308;
    tmp_tmp_msg_0_0.lon = 0.5558023605697076;
    tmp_tmp_msg_0_0.depth = 0.5255168450068844;
    tmp_tmp_msg_0_0.sentence.assign("HOXXRODKMLOYZABSZAUNIUC");
    tmp_tmp_msg_0_0.txtime = 0.23433590752358746;
    tmp_tmp_msg_0_0.modem_type.assign("GNRJWNHKKMOULKAQXCHBYKFLRTPSZNVIADHOCGFLSSJWHYYRLJPQRSOUVWFYNCVUPACXCBVBKILHESRGMSJXXQMMIPBWDSWHQTQBZODXHCBPLNZEWAORPTSPZMAFDMFDJCWNYVEFFQYTCHIEGQROVIMLOSQGMKLIZTDOAMSBGJZXLGPHPHQVVGEBXEYWXYAIWJDONFIECCW");
    tmp_tmp_msg_0_0.sys_src.assign("SHDCIVGNCSMWXPAIGNUYZGDGKXFBHOCVOWXQSBJEIUBWWZKSSZJYMFEBXZKTICWCDTQSQJKGARGICORAOCMPKSLLTDWJOYNUQPOVUYYFEKEISJKHTMPWULRUOLBOWEBFJZGIEROVMHXHQFBRYPJVTNIRKQUBHGHVKXLACARTEJADTZQLHZFZHSWZPURDAMXHQAVNYEFXBGMJDUNWYBYDQMTRFMINXVPQLINFVFDLTPCRAOM");
    tmp_tmp_msg_0_0.seq = 11774U;
    tmp_tmp_msg_0_0.sys_dst.assign("DQXAUQGXLQTDSBEKCRRLWCFVLWAVKXGBIYHWSILBDJRSEREXGBZWVCRUSYOCNDRVMBOYJKDCNTZLTKNOZTUWVYVDNTMPHRMGYBNLDVATOLAIUBGFQSTOQCPMAGNRXMKJEAOXUQEWOCSHRXKKUQYWXMIPLZUYFWO");
    tmp_tmp_msg_0_0.flags = 79U;
    const signed char tmp_tmp_tmp_msg_0_0_0[] = {-114, 69, -50, 113, 8, 15, 59, 40, 63, -106, -20, 71, 78, -16, -7, -7, -70, -11, 83, 81, -97, 110, -92, -79, -102, 113, -21, 29, 124, -88, -78, 6, 49, -54, -21, 93, 30, 29, 91, 83, 72, -59, 55, 18, 25, -49, -36, 111, -93, -14, 73, 16, -7, 109, 31, 118, -19, 44, 15, -68, -15, -125, -99, -92, -87, -113, -124, 48, -31, 116, 46, -71, 116, 114, -11, 79, -67, 5, -65, 20, -5, 86, -89, 75, 123, -76, -33, 67, -36};
    tmp_tmp_msg_0_0.data.assign(tmp_tmp_tmp_msg_0_0_0, tmp_tmp_tmp_msg_0_0_0 + sizeof(tmp_tmp_tmp_msg_0_0_0));
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
    msg.setTimeStamp(0.34675234593816284);
    msg.setSource(46692U);
    msg.setSourceEntity(253U);
    msg.setDestination(25705U);
    msg.setDestinationEntity(159U);
    msg.state = 160U;
    msg.plan_id.assign("UJXCXVTRWJTEKCXAKFQGWIMUGZJNVEYUFLYGBEONBUMXTHPCQQMDHJAKQWTPAOKVKNZCMIFVJQRIIEDZCAWUJZYDLDHHMOGDLYDEFXZVOIYPRQPAGEHXUUJNBIKSIEYNJVTYHZPBSHCXLYLERTMBCZNMOYQPKDTRSCNTFEVQGHLQFWBAWPBGVRA");
    msg.comm_level = 199U;

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
    msg.setTimeStamp(0.6335917008999811);
    msg.setSource(41290U);
    msg.setSourceEntity(209U);
    msg.setDestination(9167U);
    msg.setDestinationEntity(128U);
    msg.state = 199U;
    msg.plan_id.assign("OEQXLCZOENGKAMULJCIHGAIRPXJKQVQABNBXSQVXOYDEVMMMLFZGHZCQFBRWLRSSIAOKKWDJVFMPZYAIWQIHWNPJUTEHGKEIZMFIDVVBGGTALGCRFYMNWDTCYZYXLEOEMRISDSYTCTDYGMPXSCSIDQJSWPBVULRLGOCSPRRZNXNAPVZJVBFBENQHQYYWFRNTEHUBTPIJUUHWOAMXTBROWXJBNFTHWLNCDOPKDAUUQXOZLUKZV");
    msg.comm_level = 212U;

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
    msg.setTimeStamp(0.3361229712741234);
    msg.setSource(49182U);
    msg.setSourceEntity(106U);
    msg.setDestination(30526U);
    msg.setDestinationEntity(215U);
    msg.state = 185U;
    msg.plan_id.assign("CFYEQXQOGNLPMBYMRXPANEXBLTQTEAJPLNQBVMHAYCUBXONGQEPVQQVWCDKMGZSKAKNZZEBVKABSIAFWUOZJHKGYLXKJJFIGLIWMSYRAZMJTVCYQCSXJKPGXGUBHBWNROJNTFWRLRXACDDFNYWSPQOMZJILEWTIDWNGOQMIVNDOEIHEERBURSHSUOIHCSHZRTZEPTGFAPDVHKRPMCZORXMPBVJUDSGIYTOCYVUUK");
    msg.comm_level = 142U;

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
    msg.setTimeStamp(0.5284765227627505);
    msg.setSource(30845U);
    msg.setSourceEntity(167U);
    msg.setDestination(31380U);
    msg.setDestinationEntity(206U);
    msg.type = 190U;
    msg.op = 47U;
    msg.request_id = 40860U;
    msg.plan_id.assign("QTZMBTPLPHMYWXSRRUTOCGIVNMVRSSHWZXDDFTUELBXFWZXWDWHUDRUTFPZOIGFONCWBAWLAVUXBRCQUQCNEHYWN");
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 17856U;
    tmp_msg_0.destination = 31731U;
    tmp_msg_0.timeout = 0.8426236175842488;
    IMC::PowerOperation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 201U;
    tmp_tmp_msg_0_0.time_remain = 0.9904507938389102;
    tmp_tmp_msg_0_0.sched_time = 0.6475428081353296;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DSXITJCTWCACHBAWITZCKECZBLBOWMLVJXLTWOLPSRATXPGVYUZZEVTZUKKNHQOYBLUSPVWVMESQRUNUZTUIDQGLDAPUPKXXNDKCMKPFDDAXZHGBGJKGULGORJPAFOVYESJD");

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
    msg.setTimeStamp(0.27399456791443555);
    msg.setSource(63770U);
    msg.setSourceEntity(84U);
    msg.setDestination(48592U);
    msg.setDestinationEntity(57U);
    msg.type = 118U;
    msg.op = 249U;
    msg.request_id = 37970U;
    msg.plan_id.assign("FYMKOWNGAJFMDCBSZWTHMLTWRLRSFLAUOWECBEUNXOYPTIRXDEUPABKTNJRZPCXMBTNSBBYALVYYOHCEVQRUZPSWXVDNVZRPKNRSQFIQMWROR");
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 55U;
    tmp_msg_0.quality = 15U;
    tmp_msg_0.reps = 251U;
    tmp_msg_0.tsize = 50U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("VWDLMERRYDSDT");

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
    msg.setTimeStamp(0.38216365298261823);
    msg.setSource(26570U);
    msg.setSourceEntity(182U);
    msg.setDestination(36435U);
    msg.setDestinationEntity(249U);
    msg.type = 168U;
    msg.op = 54U;
    msg.request_id = 12121U;
    msg.plan_id.assign("VIKEKJTVSLBVGRDPUCSFTAKSGYKRMYCXUZTRAJSWDNPPLUUWHTOAJQUNVQQKUMKMTEGQRTHCYVKOEBNBFQMJZYARGMXDJGJSMTJAVFRWPFEPDLTRHKJZG");
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 20918U;
    tmp_msg_0.off_x = 0.9225335412230014;
    tmp_msg_0.off_y = 0.8503096537746102;
    tmp_msg_0.off_z = 0.101147583082705;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NZLRLFHSYGUMFMYTXYCZYWQKQXZDORZITLYEUVLBMDMFWSNGVEPCKNMEVPERIBXEXLKTZTFKLSBEZAJHLLRXOLTZFEOOCAYRUUXIWERWOGBRMYTWUAEOVQMQOQCBKVLSGAKKFV");

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
    msg.setTimeStamp(0.4986054082531839);
    msg.setSource(46936U);
    msg.setSourceEntity(86U);
    msg.setDestination(9243U);
    msg.setDestinationEntity(19U);
    msg.plan_count = 48953U;
    msg.plan_size = 3975043255U;
    msg.change_time = 0.06648789632302299;
    msg.change_sid = 17377U;
    msg.change_sname.assign("NYFNKGNZZRZZXQOGVPGIDTCAISVNRYEPXMIXQVMPPSNLTBPEVVDRKCLERGGWYPAODTTJJQQDXOVYPBERWCXLIHUPFUVGOCIFDCYDEQWJHUZJBBTFGUORSHAKKWUKOJVTQERUVNJZCSFAUBYABDXITXYLISMZNJEFOAIBQQHYZMOMQWRRXEILXCKEBWZBPHJAKJFSLMAGPFQSXLMMWFHKHKMGUSOYADUSLAN");
    const signed char tmp_msg_0[] = {120, 93, -18, -98, -122, -53, 73, 126, -39, -107, -4, 71, -49, -128, -49, 75, 13, -94, 115, 31, -57, -48, 116, -66, 100, 87, 106, -91, 72, 18, 22, -89, 3, 98, 12, 52, 78, 116, -68, 31, -59, -105, 52, 105, -4, -108, 75, -72, -57, 9, -8, 79, -43, 41, -17, -14, 23, 43, 70, -119, 111, -120, 74, 102, 70, 65, 54, 80, -7, 36, 125, 118, -86, -112, -124, 119, 88, -125, -23, -9, 67, -21, 6, -118, -75, 11, 108, 73, 72, -127, -66, -123, -74, -57, 96, -40, -114, -94, -78, 28, 120, -47, 120, -67, -38, -119, 48, 65, 42, 2, 58, 109, 96, 37, 10, -39, 57, 39, 114, 87, 39, -94, -105, -15, -1, -83, 25, -128, -52, 35, 43, -128, 74, 76, -29, -64, -112, 57, -13, -115, 82, -99, 45, -128, 113, 71, -125, 103, 80, -80, 8, -34, 83, 111, -104, -127, -56, 60, -59, -116, 81, -10, -84, 91, 87, 102, 15, -17, 7, -67, 46, -91, 90};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("EJNMMCFJIBQXGVYOSASIDIAPFQEDLEOVAXCUJACTSNEKXMLNCHUZJLTNGCJHERBTRSKVARDTMSEWYAYXSKMOCJRSYDNBQWCDJQJNPHOWKBFGXHVKIMFBHTHGPXAQIGRXGNEXLLOGACQLTXHDRCDGLIKDZLZIBTNYQVVSZUTZYKYYVVTOUOAYPDHXUVEUTFFRLOEPLFJQHGRPKBIKFZWZSUBOPWCMUPFDRW");
    tmp_msg_1.plan_size = 18852U;
    tmp_msg_1.change_time = 0.898998940968829;
    tmp_msg_1.change_sid = 34425U;
    tmp_msg_1.change_sname.assign("IUFGEOQXCIQVPPKCITNACBTMSHAOEYMNQIJGMUINBBOIAOUTVLSWEZJWKUTGRUMYXWISXDVPPZHZCHFVEJLXRRGJBMNRMACEVRIQLZMLVEKHSITYMUZKWIXWJHLNFONGDYVDAQABBJNLAKDZTR");
    const signed char tmp_tmp_msg_1_0[] = {-23, -97, -33, 14, 8, 56, 64, -24, 114, -97, 95, 42, -26, -15, 28, 99, -77, -48, 24, 48, -29, 48, 5, -60, 53, -71, -27, 111, -77, 39, -2, -97, 51, -126, 74, -125, 52, 111, 57, -112, -74, 94, 82, 74, 24, 72, 99, -37, -33, -75, -74, 117, -102, 14, -26, 53, 9, -117, 49, -56, 14, 91, -66, 95, 76, 67, -32, -52, 88, 64, 11, -57, 65, 3, 88, 6, -87, -110, 8, 58, -51, -49, 80, -65, -90, -36, -110, -16, -46, -80, 49, 21, 41, 58, -76, 1, 23, 5, 32, -105, -78, 33, -12, -27, -95, 102, 61, 60, -59, 126, -9, -47, 5, 15, 102, 48, 122, -24, 124, -13, 68, -23, 51, 113, 118, 95, 104, -63, -19, 23, 12, -2, -11, 70, 37, 6, -115, 50, -35, -86, -17, -16, -21, -88, -109, 30, 120, 111, 15, -45, 3, 72, -103, -15, 114, 47, -88, -72, -124, 22, -103, -57, -28, 44, -60, -59, -124, -49, 29, 76, 39, -101, -30, -48, -82, -123, 102, -120, -91, 28, 11, -65, 2, -82, -56, 48, -109, -77, 85, 93, -29, -63, -104, 93, -42, -48, -119, 32, -35, 87, 66, -65, 27, -119, -2, 54, 26, -127, 96, 125, -97, -62, -9, -8, -127, 50, 80, -72, -64, 98, 72, -9, -25, 100, 122, -106, 21, 15, -56, 10, 19, 80, -54, -106, 7, 72, 116, -51, -117, 62, 51, 62, 61, 44, -95, 68, 32, -102, -68, -82, -95};
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
    msg.setTimeStamp(0.5783791311433537);
    msg.setSource(58118U);
    msg.setSourceEntity(65U);
    msg.setDestination(62886U);
    msg.setDestinationEntity(120U);
    msg.plan_count = 40753U;
    msg.plan_size = 3580837175U;
    msg.change_time = 0.5197947849865994;
    msg.change_sid = 46160U;
    msg.change_sname.assign("DYSRTFHZYUBIAWLFPHKHMSXDSMVYOBXWDOOQMJIMWCKACTAQZNSHXNGCZHWVGCAJPORJEHLRBEQMCAFMFZYWINOPCSTJHEGNXTUKZDKQBGQ");
    const signed char tmp_msg_0[] = {9, -40, 24, -101, -20, -83, -116, -51, 2, 116, 64, -110, -55, -47, -38, -16, -20, 85, 50, 25, 79, 110, 74, -23, -105, 77, -97, -61, 87, 57, 44, 4, 27, 101, 96, 24, -97, 100, -31, 100, -37, 31, -95, 2, -86, -61, -72, -17, -57, -87, -33, 41, -34, 99, 71, -51, 76, 125, 95, -18, -105, 96, 55, 70, 85, 54, -114, -91, -47, 77, -38, -125, -17, 57, 73, 13, 47, -79, 28, -104, -108, -86, 109, 42, -69, -105, -65, 34, -43, -73, 124, 63, 17, 24, -75, 9, 36, 18, -16, 59, -21, 5, 65, 41, -86, -55, -127, 125, -34, 13, -120, 17, 117, 49, 71, 10, -108, 52, -34, 20, 16, 89, 117, 34, -37, -76, -122, 61, 61, -4, -58, -64, -98, 33, 32, 28, -73, 52, -38, -97, 66, 125, -49, -99, 105, 88, -38, -116, -108, -119, -34, 62, -117, -113, -53, 57, 83, -41, -93, 53, 107, -65};
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
    msg.setTimeStamp(0.3223548472595952);
    msg.setSource(55515U);
    msg.setSourceEntity(10U);
    msg.setDestination(38842U);
    msg.setDestinationEntity(65U);
    msg.plan_count = 1084U;
    msg.plan_size = 1938501730U;
    msg.change_time = 0.3591692953739065;
    msg.change_sid = 51527U;
    msg.change_sname.assign("AUWPLBICYAFKXSETYIDJYEFRQXFLMVPVMMCRLTFJNAKZFNDIELSCBMBHPLSAIGHU");
    const signed char tmp_msg_0[] = {-112, -51, -33, 5, 87, 39, 32, 40, 93, -77, -118, -102, 59, 51, -121, 90, 69, 84, -88, -66, -57, -28, -107, -99, -72, 112, -113, 29, -84, 79, -24, -11, 80, -12, 88, -54, -123, 95, 122, -90, 90, -60, 89, 50, -69, -125, 92, -50, -94, 39, -94, -109};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("IRYKWILVKECGAHCOMEODQVSHXWODDQBJZGHMKWXKVCEGNRAFLZQWARDZDOBHRLPVIQSKXYDZUGMPHFPMZCBEVAUJBIBLTCUQATRHAVSYTGPKSNXQHVMXFYWEZDHNXNSRFYJPUFJRNXCTJMJUGPQODYAEZTLINWWVSPEUIBYTPLYXGLKSOSKYBRJOAGKWFWHDBBIRBVIJNGUEUYNMQTGNNAEUQJXZLTRCTDHQZMIOMO");
    tmp_msg_1.plan_size = 61387U;
    tmp_msg_1.change_time = 0.7929964435971063;
    tmp_msg_1.change_sid = 59879U;
    tmp_msg_1.change_sname.assign("PMBDMJJNUIYYYFATRHWZYQVSALNCFGBPKOSNFZJLDMHWQSYAGGNHCDBKVNXZJDRYJKAGJDAUCDYEZBVGKDOLEJUKEMFNWOLSWWTHVJEVXSBXJQZGHQWXLKTNLUORFMGUPDFISPAIQQPCTHMWTXRRKDBTGKOLHFQTSSUFCZEQSHSZEXIYLKFLVWZCONMMCUVBHVBQJZHMEOEOCWATIRUOCFTIRAMZYWRXCTUKDBEAXPGRXPQ");
    const signed char tmp_tmp_msg_1_0[] = {-34, 88, -99, 116, 30, 97, 77, 88, -86, 78, 16, -33, 13, -127, 67, -35, 9, -4, 106, -19, -93, -46, -86, 59, 95, -13, 79, 13, 40, 28, 70, 117, 37, 43, -28, 30, 118, 96, -95, 121, 118, 76, -45, 107, 28, -24, 99, 124, -27, 98, 59, 23, 53, -14, 73, -37, 120, 126, -66, -4, -2, -4, -32, 97, 87, 54, -84, 111, 79, 81, -106, -23, 70, 39, 110, 105, 31, 49, -20, -128, 100, 103, -119, -108, -79, -70, -93, 5, 56, 109, 43, -67, 99, 115, 13, -39, 81, -118, -66, -52, 64, 40, -128, 18, 51, -39, -1, 17, -70, 112, -54, 25, -33, -19, -126, -23, -5, -20, 92, -73, -56, 116, 83, 67, -31, 30, -101, 87, 26, 81, -91, -19, -84, -123, 123, 35, -73, -127, -38, -50, 99, -16, 74, -16, 96, -31, 126, 5, 117, -20, 22};
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
    msg.setTimeStamp(0.016127670912192693);
    msg.setSource(14286U);
    msg.setSourceEntity(70U);
    msg.setDestination(27937U);
    msg.setDestinationEntity(162U);
    msg.plan_id.assign("VMVUSUJOEIRWGSXPZJWNOOFVRZUZTJQDXXZSFTGHDPRHJGDXXKLXGNEVNEPHUWUXTKCTLCJAHFAAYDCSDEOIXXILQBANKTFEZGVKBLBWSDMQB");
    msg.plan_size = 49496U;
    msg.change_time = 0.8158408035211716;
    msg.change_sid = 11210U;
    msg.change_sname.assign("LDGQMXAGEIJJRKLSYCKFHPIFQLNSULCTPDUEOQSVOVBDTGWLMNMVPVMAEDSNHZFRXCMNYRBQDPYSRJTXBGNQTKDZHPIZPNQSCLONHUACJDMMFAGHIJETTJVYOCZSYMEXRAURFWLIOTFVUZAFWGJCYAKNHZRWFPNXJNKTOBKOVBVEELOWIMBVUHXPCQBEGWBUTVIWXJUKWAUOMXWELIKXZUQAPLSPQGIQCYYZGWCSYDEHZBKRHRDJIYHZRK");
    const signed char tmp_msg_0[] = {99, 114, 26, -6, 102, 120, 12, 12, -81, -57, 115, -50, -58, -83, 13, 10, 0, -15, -101, -34, 111, -43, -88, -15, 124, -31, 37, 104, 85, -7, -94, 95, 50, 106, -20, 37, 83, -101, -91, -120, -126, -7, -73, 66, -21, 79, -10, 16, -31, 43, 119, 15, 109, -68, -54, -112, -116, 126, -92, -98, -35, -84, 83, 11, 22, -101, 9, 52, -3, 91, 43, 87, -39, -115, -95, -2, -100, 31, -11, 5, 42, -45, -64, -33, -51, -12, -71, 76, 14, 112, 38, 117, -43, 73, -25, 64, 71, -100, -117, 86, -102, 30, 45, -91, -60, -116, 97, -68, -65, -102, 38, -11, 11, 56, -29, -103, -24, -35, 109, -47, -91, 56, -48, 16, 89, -100, -59, 82, -13, 120, -70, 31, -17, 107, -115, -98, 88, -9, -2, 117, 88, -9, 95, -20, 21, -2, -38, -104, -93, -70, 117, -83, 33, 22, 63, 125, -25, 74, -124, 123, -21, -51, 52, 46, 44, -28, 80, -88, -5, 11, -111, 41, -96, 6, 118, 79, 103, 60, 67, -61, 58, 72, -84, 38, 8, -34, 53, -51, -105, 119, 66, 36, 95, -48, -35, -98, 33, -127, 39, -43, 94, 53, 22, 17, 29, 94, 7, -94, 121, 113, 23, -55, 14, 56, 112, -37, -117, -103, -68, -5, -80, 33, 44, -6, 23, 35, 110, 99, -46, -28, 5, 60, 104};
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
    msg.setTimeStamp(0.7649189388539908);
    msg.setSource(26636U);
    msg.setSourceEntity(117U);
    msg.setDestination(23404U);
    msg.setDestinationEntity(161U);
    msg.plan_id.assign("FHXSJLBFZTJZUTUMZJZOITIRARIHTGVSEVWWDIYCQWUOLXAAXEWHGUPBLOTTILNUPYCJTEDXDDJRYZQIJFKKENAJHSSDDQMPVIBUEDYPRQJINGWMMWMYOJCFFKGSFZVSVRPOLEGPLUHWGLPYRHYFLSBRABQFLPQEECKPQCMZXKOXWQZRANCQNGHCMLFHVTNDBUCGRABNBRBASMIFVOQVUJYEU");
    msg.plan_size = 50145U;
    msg.change_time = 0.848756745214086;
    msg.change_sid = 53573U;
    msg.change_sname.assign("OQYPGQIKFTJLKFBIAVBROGPFAWFOYQSJNREYYPRGVZCZSCXYQYJPUMULMZJVNGUPUZLPHNRKQSITMEKIQFLTPRNHZOEBHGWHTAXGWQAIYEWTEIUOHBMTJAWEKCLKFFTDNZDRJUAFYTDUAMRKSBMWAXOZJDNSGVOFGPVQMNJVRWIOSTRXXXWAKXCLPOBCUZBDLVDIUBHVMJSXZHSECEVMC");
    const signed char tmp_msg_0[] = {-58, 47, 46, -117, 109, 12, -12, 2, 19, 104, -113, 100, 44, -79, -12, -17, 27, 104, -40, -104, -78, -122, -107, 40, -128, 109, -55, -33, -50, -126, -55, -88, 6, 95, 17, 45, -112, -116, 16, 17, 5, -98, 80, -25, -40, -124, 124, 60, 67, 74, -120, 100, -17, 104, 19, -93, 40, 8, 21, 18, -126, -36, 72, 56, 30, 85, -82, 113, -74, -92, 46, -35, -23, 85, -78, 116, 112, -9, 52, 34, -70, 95, 41, 24, -68, -52, -32, -114, -49, -36, -87, -50, -105, -87, 37, 68, 28, -111, 89, -118, 73, -95, 42, -13, 47, -72, 126, 120, 56, 28, 114, 81, 95, -115, -33, -41, -51, -38, -93, 100, 25, -65, -76, -13, 116, -29, -26, 103, -26, -3, -20, 106, -113, -33, -100, 102, -106, 110, -127, 61, 1, -9, 119, -31, 90, 50, 4, 47, 109, 79, 56, 53, -4, -102, 30, 15, -39, -82, -4, 121, -24, 9, 21, 65, -64, 111, 69, 106, 119, -108, -111, 55, 121, 36, 21, 5, -27, 28, 22, -94};
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
    msg.setTimeStamp(0.3049859513910307);
    msg.setSource(28429U);
    msg.setSourceEntity(38U);
    msg.setDestination(24751U);
    msg.setDestinationEntity(130U);
    msg.plan_id.assign("NSPUWNHMXPEPLKZOQJSGPBSNWZWTFSBMOESQYABWMFNZWKTJLYPPDUUVPQHCTDVROVDHXFHUEFSBXCIONWMKKNIITZFNPEIXRUVKOTYGNJUBHJLCYKSCTUQYFYTBXKUVAEKZXBSEHFQYDFZKECMRGCAQAMHAIXDABRLTDVCVJNDOOILGORDYPFISWTUJOGQLXRRCGWRFCGJKBZVMEQMLRYLLWPESHQDARYV");
    msg.plan_size = 39777U;
    msg.change_time = 0.8151847436805673;
    msg.change_sid = 2132U;
    msg.change_sname.assign("ANQGEFTDOCURYPXPYZSNKLTYVJUIUTDCQIMJWMHGYPBVELUPRBFGCPWZFNDHKMRQTWFEVZMHMJKJNJWNCROPVTIVELCYFLSTQSXHMSUAICJOFWSQPBMJUXSXBKIUSDXTCODEHNERBYFRRMGWDVNDGIKDCUBOMYLW");
    const signed char tmp_msg_0[] = {-30, 66, -26, 69, -26, -103, 2, 63, 33, 26, 52, -11, 105, -116, -121, 93, 5, 26, -29, -101, 21, -106, -40, 66, 10, -91, 7, -9, 120, -56, -93, 120, 47, 23, 2, -58, 51, -86, -3, 69, 14, -40, -67, -51, -33, -109, -37, 3, 125, -114, -34, 97, 51, 106, 36, 57, 94, -62, -98, -78, 26, -41, -89, -101, 84, 79, -114, 53, 25, 101, 119, -77, 40, 58, 35, -125, -82, -4, -45, 74, 53, 32, 2, 35, 91, 3, -53, 109, 121};
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
    msg.setTimeStamp(0.9559211789033623);
    msg.setSource(7402U);
    msg.setSourceEntity(206U);
    msg.setDestination(13192U);
    msg.setDestinationEntity(112U);
    msg.type = 132U;
    msg.op = 0U;
    msg.request_id = 34796U;
    msg.plan_id.assign("UIIGOFTADZIKUPXUEABOZEDTSSKUSREDNMDDIBJDIJNMEBXOHOERPJLHVKICWRYNSOIRXIZRMVFJGSYGHFHJETKZELVXTAQCMQJTQIVKFMGACXXDELLSKSYJBPJYPUFZRLIUXPCYNOMVNGPCHZOOLGFWVPMBQAGLSZTMWQQWKCBZOYFPKHAHFUVXEUAWCHRTKVXTASZYGYPRELBU");
    msg.flags = 17300U;
    IMC::EstimatedStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.09469653859006133;
    tmp_msg_0.y = 0.8982727270312054;
    tmp_msg_0.z = 0.46518036093635307;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XKGHOZAQWGLTJJMUKYKVWIPBNGIHPFMJWWHRQLOWFNDJNBQZSTCEVPIWBDYMJXGPQPYOGVKUZTFXHCIXYYEVOLVAEAZRILZTFEKDQVHBJIOKMQCQPMRIZCFHDNCNYNXHAVSGLZOALATCRSHDMSUTKLJGYNOAPBGFMQHJETREPTFQAGVCOXFEU");

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
    msg.setTimeStamp(0.9375198102861735);
    msg.setSource(37756U);
    msg.setSourceEntity(20U);
    msg.setDestination(56721U);
    msg.setDestinationEntity(165U);
    msg.type = 42U;
    msg.op = 73U;
    msg.request_id = 32978U;
    msg.plan_id.assign("QSUPRCDDKYPVPQEIILFFLVXZQUGJYQBQRGMSQCOVUFGTLAMDWCPYEHEHQOIAWIOOSXHHPKQOVDCHSWZMMNWDZYGVBJXXIWCDJPBUJUDNFZIXEASRNMIXOUXYVAYDJZKKDGLBMFF");
    msg.flags = 5705U;
    IMC::OpticalBackscatter tmp_msg_0;
    tmp_msg_0.value = 0.2699110837754666;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UDFVNETOAVGTTKTJXPMTDIIBUKOSXBYRGVENMPVKELTLODBWYVFGRJAAJGFOEZYAGKWPOQLAUCHEZLCVCBDNMCRNAHVJWQBUYYIFNZKSGCSYKMXPMQAEQBQRRTYVNDIONLRGRAVJTSPBEUTRSSSBXSLVAHGCWFMXHILBUPGZKIQIUQNHZCMFDKDPHXFYGHJ");

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
    msg.setTimeStamp(0.2925547553979724);
    msg.setSource(17296U);
    msg.setSourceEntity(28U);
    msg.setDestination(32630U);
    msg.setDestinationEntity(99U);
    msg.type = 88U;
    msg.op = 124U;
    msg.request_id = 59838U;
    msg.plan_id.assign("NHZUYCEBDLLGBMFDUWHQCCVRPFPTLPWSWYTMJOKAATTIQLNCEYJTRTWPVEKJYQGXIIALXEWFCZXQMHNVGRLZKVDDZPZNZGUHQMSVSOKLHZTMOBVSYVCKRCUXFMLWYXWOXKDOKCJXMHNLRJABWWPAAXTUINHEQUIGSUBGHZSBHDEQTIDKGZSULXC");
    msg.flags = 46957U;
    IMC::NavigationData tmp_msg_0;
    tmp_msg_0.bias_psi = 0.5627398734479058;
    tmp_msg_0.bias_r = 0.1551114060460923;
    tmp_msg_0.cog = 0.1672499599455588;
    tmp_msg_0.cyaw = 0.8129711095237049;
    tmp_msg_0.lbl_rej_level = 0.9458648044685165;
    tmp_msg_0.gps_rej_level = 0.5093512470842578;
    tmp_msg_0.custom_x = 0.33705715615453713;
    tmp_msg_0.custom_y = 0.377413171000079;
    tmp_msg_0.custom_z = 0.26366908804698497;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("GCHDQPKUNFQUZOBVLVLBRROVWKCVHRYJUTGEPTILYXKNQBHDDVAEDQROZIYNHDGGAEJYLZEPNMODJCRSOMQHUXCUUBXLISUFLUEIMKJJEZSJIQUGQIZEZNWETXPOFMFTXBOARMBTROOSWVSGDDQECCPWKDJVMFFWYVPYJIZLPYBHCUMBNSSAAIHTPRWYPNXSDYZRSVKBFMFIF");

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
    msg.setTimeStamp(0.8251262407833807);
    msg.setSource(24778U);
    msg.setSourceEntity(128U);
    msg.setDestination(31961U);
    msg.setDestinationEntity(130U);
    msg.state = 135U;
    msg.plan_id.assign("MEIHJFIVYWHRUKBNISGGXZURPXNUGTVZTNJEQNYZATHFMOGQNQDYETJGHUKDZROTBJXGJSDXCMIZINCOUDUQAURGDVYBLCJAPFAEAZLWWT");
    msg.plan_eta = -1360191901;
    msg.plan_progress = 0.985819632292459;
    msg.man_id.assign("TSWYZZHECRQGCQCMNEYHKWJTFUAEJSJIRZXIRBUDFOZMSHNWAPWNSDLWOTVUBGINBJIGKPMQBCYJDLSARNNIPMOILFWFYVKKSEEXKUIDUMLBGJKGGSZXLFEXTVQHQOLVYVYUALBOVOZPUWCVRNHDTFNI");
    msg.man_type = 48787U;
    msg.man_eta = -1738120271;
    msg.last_outcome = 184U;

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
    msg.setTimeStamp(0.2743312635180112);
    msg.setSource(46893U);
    msg.setSourceEntity(75U);
    msg.setDestination(17188U);
    msg.setDestinationEntity(95U);
    msg.state = 94U;
    msg.plan_id.assign("MEQVAQZXXMKFNFAMFJVVBLYMEMWSXGTJJMCVYCRXRRQMUHYTKKHLFEYVCCFOPGPDKPJLCSJTFLEEKWLDAOXVGXGSUBSJESIAZWKUVMRKYAWTHBZYXDUYIPPZBSZDGTSSGQNIBSMKQC");
    msg.plan_eta = 1836806008;
    msg.plan_progress = 0.4216286096290901;
    msg.man_id.assign("IBHCLLVEBOSSFALTTWSNXGCYAZSPSIFYMACTHEVOEFQUKEREIDKGGPQRWJRRKDTMVOYBBMLWGIAOEAMKNQHZKUOQPMXWVLBPQZHEHZEWKYDHRWPAHXKNCKLZYIJPRXNWSJAGTTDFSGVHRXQNZVEFMPFJLIICNPWRYOMGPCRRZUYLSYCBO");
    msg.man_type = 61553U;
    msg.man_eta = 632023941;
    msg.last_outcome = 145U;

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
    msg.setTimeStamp(0.7822525337401244);
    msg.setSource(42528U);
    msg.setSourceEntity(183U);
    msg.setDestination(60028U);
    msg.setDestinationEntity(185U);
    msg.state = 90U;
    msg.plan_id.assign("UWZLGKMRDODJLDFKVPLGWTVHYCHUSIMSABASUJEFORXEDYWUIOHXRXCITVYQIYGCQQFALTAOFIGPZKEPRKKSXBIGNBLTCRQQXHTVFZQBAZZD");
    msg.plan_eta = -111829293;
    msg.plan_progress = 0.44234862571510414;
    msg.man_id.assign("BNXHIEZONIGSRVNYDOFVKKVQWKNCXQCUHHWPXVUEXVWMCIKKVTKUAWCYYAWHGQCSSIOSTZMPCDKZTLMFWNPHVMSLQTMIRQCBYOAXPDKGFRPCNSKNLFYSWXJORHFLRFBGLQFEUYPWGJQJSLYEEJPUBBGQNEUDAPHISJVUZBBGARMTFDHZVXYTHRORUKAROZCZBMGEEAXZIQZRH");
    msg.man_type = 51630U;
    msg.man_eta = 174391716;
    msg.last_outcome = 178U;

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
    msg.setTimeStamp(0.5913279925201942);
    msg.setSource(4296U);
    msg.setSourceEntity(93U);
    msg.setDestination(33543U);
    msg.setDestinationEntity(245U);
    msg.name.assign("DANZJRPTVDOVGBAXRFISDGIWAMUDNCTDZWVMVAHGNDGXTEUKNAFKDHYIBFRPMBIXXPGZGYPUDCBYJQHHNERUISLLVWMCSAHOKWMUKDQBNXJOIXFGNWQJEETQLSBRZBUEARTZHOGPXKERCEZSATTIVSMJQJGANJLKMSPXQCWYKMSXFCAOPWVNLKQFHK");
    msg.value.assign("ACDPLPGLTBRDVREMPUGXDMTKAWWEIINMYGUOBNTVEIDZYJHJB");
    msg.type = 41U;
    msg.access = 64U;

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
    msg.setTimeStamp(0.11332844534891451);
    msg.setSource(46478U);
    msg.setSourceEntity(173U);
    msg.setDestination(60153U);
    msg.setDestinationEntity(241U);
    msg.name.assign("HXVBZQVBOJBWBIGLTMFQUNKYPCSHNQLFBYAPOVIGLFLPSGDUIKRESVCSDXGXTNBHABMHEXAXAYWOAMXEJBUOKTPJCNJATIYUKVNSYKZKVUFPNVFSGHWBSPMWDHROCDTDFRGPYRSZQCEQJOPJCVE");
    msg.value.assign("ENDAALMFTNOKNRBCNLYBPDTXQVCWDOJTXCYWORPWDMFYFPUGTSLURSQHJQWIZVYKDFBMLTMUTUQTXJSYISYAZDKVGISTDOSYCYDJIVLCOWJYAMIJPHCUQWJAWOBCFRXALVNNEQSGPHRBGUURBPMZNOWXVFZCZMHTDHBXBPJETRIKOASBIOAEPZQGZ");
    msg.type = 144U;
    msg.access = 133U;

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
    msg.setTimeStamp(0.007214657289103754);
    msg.setSource(21641U);
    msg.setSourceEntity(185U);
    msg.setDestination(63000U);
    msg.setDestinationEntity(41U);
    msg.name.assign("FLFNBXNJYWIUMGVCDEOVLTJDGAUVWQZKIZUJFLNVPHIBZRMHPAUWGQXCYBYYAOFNMEWYORRUKRWTCUPSXTMSCGODVSRIHNAVEJGTZAZSQLEZTIDNNBROYBASLMLKIMSBZWJBCHYJDXHVEQIEPQGVKZPYEATUQSAEKMXOWYGENGHMHKLMDJATTRLDZCQJWELNFQ");
    msg.value.assign("EHZZYOJKNLCIMZUABYWQMAFLJXQUVOGFLGRVVDDLECOPNXUQWJSMSTBPCVCDBZPODQCTTBWZTXPFTMLRTLBHLEXQUMWVCVDKUOEMAAANHHSTTDEEDWQJFWYJNH");
    msg.type = 176U;
    msg.access = 189U;

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
    msg.setTimeStamp(0.955705259742526);
    msg.setSource(36748U);
    msg.setSourceEntity(93U);
    msg.setDestination(27603U);
    msg.setDestinationEntity(84U);
    msg.cmd = 91U;
    msg.op = 105U;
    msg.plan_id.assign("WSEXYIJJSFMHHSTFUCXSTWTPQLQIHQLJGDUMCBNKWVEXXNPGGDZAEIIJGFWRVDYZPIFBVZUSNRCHOLWVLMDCWTEOXKHJWHOCMSPPZWGDMQSAFRGRPPJLEJFRIYYABVR");
    msg.params.assign("DCXVZOSLLVUXIOQPVFXJJEJPQMLJFGXANBRTWCEUXMCUWGKNDRYGKHRMLEWKNRQOYABJZEXEBHTNEDWOPXWIKQRMILFEHUASATAPDMRMBQOJOJFSKVIGSOVZLPBQYEZHXWBMZHGHBXULIPSWWUOFVLSHNDYAIATDKNGQEDCLHUFAJVDYSITYANKENRYYPCRGMBWPTUGBSTCPZTKQVCIQUMCZLANFHFJTYMOSFIRZWDSPVDBZYXGCKUJNH");

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
    msg.setTimeStamp(0.4827933349435034);
    msg.setSource(13603U);
    msg.setSourceEntity(114U);
    msg.setDestination(50880U);
    msg.setDestinationEntity(205U);
    msg.cmd = 68U;
    msg.op = 110U;
    msg.plan_id.assign("UEFGTXKYOHKZYIOHVLNHCKCOGMWPEMRXWUGADCADMNXEZVNHRTVLTVJZWWUQSRPETDDTJMXPAULEZDWFBNYVGPNFRMBMQNVFNPUIXVRUFDSCPZJKKEJIBYEBJOWEUWROBAQIJLWEGMORLRQQYGHDRQLGSZQKACHTYKSHJTOZECAUMIYTTQBPNHDUSLQVFVJAILSIBOFOASVHGPNWMYIBIDFAAXBKKCSOHZ");
    msg.params.assign("DGFJNSWIHTNAAYTMBKTWSHQAUVPWZYIUPRFYLWFLACWCEDZROJKUVRFPRIQVLEYOGBAKCNFDQGHIUEZCQTIZYLSDUEUCODFNMXNGLDTNSLVJKKGVKHAPIDAEKJWJQNOGFDMZHZHPFDKLZJBZPOYNFOGT");

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
    msg.setTimeStamp(0.10018504529819872);
    msg.setSource(37515U);
    msg.setSourceEntity(59U);
    msg.setDestination(51121U);
    msg.setDestinationEntity(199U);
    msg.cmd = 27U;
    msg.op = 193U;
    msg.plan_id.assign("CCFDQUKEHPEXNAEZRXNOAQDDBGSBWOFJWRZZQBJJKPCGTLAYIQWBHLWQOVSNSHQWBADQJUMSCACKWQXBBDLLDODRETVMYUTPKKSIEVGSGNWKXVXTLXPVVENNYANKHZLGGGCZMJRDSRHWOMYAOIANTQCRJLLIIETZDJHWFYHXTJMLCVFYUPRYQIMXBNEMVMJULXUFHATBPOPZZRCA");
    msg.params.assign("XWNXPBNVVFBZLOMOPOMEKOQOWGHRPJVPTNDSMDSEWYLRURPIQZEHIKAAMHRHWRKTQXFMFTQTFSNXFKDOBIBSNGBXGOBWMYBYYNWACLXVZJZNIUCQLFHKCVIHKRJGIAZRKYZLZQRURYCXSKUSDLFHYDWOTPIGBVNZVTZSIUNAXUBVLACDJWCSJMGUXPTUEDLGSAEVKEDHTFITEQIQHUFLJPASXAFEMGMVGCOELPWKJPTQGYEHOBRNWZ");

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
    msg.setTimeStamp(0.8842641078202278);
    msg.setSource(2074U);
    msg.setSourceEntity(246U);
    msg.setDestination(8287U);
    msg.setDestinationEntity(56U);
    msg.group_name.assign("RHQWMRXMAUBQQGOHHQYXOIHKSZCJDTZTOCGHSKLPXJHQYHNPJMVPRYFAMAYGDNVNQZDRCCXDUPJNTVTDLVBHFINEMOXSFSWJMCEYIKKNVUOBNRZSERCEGUKTCTKWAEGBLUYEFEVASSFFQAIU");
    msg.op = 196U;
    msg.lat = 0.3929819432729229;
    msg.lon = 0.7106018579493312;
    msg.height = 0.6442635275356793;
    msg.x = 0.17526865532542946;
    msg.y = 0.03960801109675505;
    msg.z = 0.9210182340169996;
    msg.phi = 0.9964134709969689;
    msg.theta = 0.21734564030544334;
    msg.psi = 0.7327166352017122;
    msg.vx = 0.44621852433649223;
    msg.vy = 0.6718049688095993;
    msg.vz = 0.24676596452621669;
    msg.p = 0.8861516284301783;
    msg.q = 0.3450498941920427;
    msg.r = 0.9702219502449398;
    msg.svx = 0.2648285141865935;
    msg.svy = 0.6395844439005344;
    msg.svz = 0.8978072395583075;

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
    msg.setTimeStamp(0.05680554545846017);
    msg.setSource(53743U);
    msg.setSourceEntity(69U);
    msg.setDestination(19045U);
    msg.setDestinationEntity(107U);
    msg.group_name.assign("QMAUZWOSOIMNUUZYCTAQDVHEWDVSPPKHMIJTRRPRQSUADNIXYZKEMGURXKIQKSUZBLGTLOQBTCJPGEFWSNQCVXZOGACMQLSMADLNEBRHJQAOIJ");
    msg.op = 139U;
    msg.lat = 0.7334674969230351;
    msg.lon = 0.3392615847544541;
    msg.height = 0.020702000148234423;
    msg.x = 0.7338838300752466;
    msg.y = 0.07472246290619422;
    msg.z = 0.281737280911899;
    msg.phi = 0.3233689890509419;
    msg.theta = 0.3715962819044132;
    msg.psi = 0.0017354076100970506;
    msg.vx = 0.6169058018862632;
    msg.vy = 0.9112655894128655;
    msg.vz = 0.7171132102431946;
    msg.p = 0.14668543870584827;
    msg.q = 0.7725078853310462;
    msg.r = 0.6475457014302527;
    msg.svx = 0.6789087749247369;
    msg.svy = 0.8346319286178401;
    msg.svz = 0.7836990887707074;

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
    msg.setTimeStamp(0.2557342927927331);
    msg.setSource(47570U);
    msg.setSourceEntity(185U);
    msg.setDestination(32615U);
    msg.setDestinationEntity(122U);
    msg.group_name.assign("JUXMGPGZALJIOSNGKNAZJTQLWCILPMWGBYNHYZPUXXFCSBDRQKTRXMFQAYQOBAQPFEFACQEDRGMDWFBFUTYNIHIXTLNLMVSYVGPOVCGJHLKLQUDOCADHOJOPTRXHJESBVKNZKCDNQTBSVUAPAJNAKSFZFMEEBRKOUXVBTGBEWZRJZMWLVCQBRANXPZTXFRCTCEEOUQINUMWJKLHIOIGDUWVCYLSKVD");
    msg.op = 37U;
    msg.lat = 0.9727222506009298;
    msg.lon = 0.9412838195565638;
    msg.height = 0.8119090488556809;
    msg.x = 0.9212912616157742;
    msg.y = 0.6570549865743821;
    msg.z = 0.5610286783664509;
    msg.phi = 0.17470641873487958;
    msg.theta = 0.1897201541062118;
    msg.psi = 0.571253952561134;
    msg.vx = 0.9812768190602721;
    msg.vy = 0.5787575789263877;
    msg.vz = 0.5180599586244176;
    msg.p = 0.9988273573925156;
    msg.q = 0.756409725923707;
    msg.r = 0.4149741034694938;
    msg.svx = 0.41811302407068573;
    msg.svy = 0.06058060003167831;
    msg.svz = 0.6892880526420645;

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
    msg.setTimeStamp(0.8592272304741947);
    msg.setSource(26307U);
    msg.setSourceEntity(28U);
    msg.setDestination(48484U);
    msg.setDestinationEntity(213U);
    msg.plan_id.assign("CPYRSPHZCDLFYZSQUNVPBAZSFPSKGLCPCNXJRYSIMVAHUVXWKQDEOFGGZOWSZWJZCUFTMKGIIIXSHNECFQPXHRPUCRNGDTZHBCZGMQNXKUWHYGLHGDGEAITVNOOBVMIOYKLURDBIFQFNLBDOJEVLJRAGKFHXRIQTHSUWBNYMPRQSDDAEPJOMXBQDHYAQEJTEZKLSKAUJWAMRLLNMJBIFVANTXEJT");
    msg.type = 234U;
    msg.properties = 19U;
    msg.durations.assign("IWWVEFBRQQSTRKPYJWONVZHEHRLKJYYCNSIAFMGOZKQSRPCYGVDROMMBTVWIVXZFSFJKZERCGSOLQGJQBVBYIYKMODQDTRGIDPCYUTHPTOUXNUMUEBDCLULJSFAHPXVLPLHBYM");
    msg.distances.assign("HAJSGBMDJGRXLUTCVIWQOJFZGBCWBPFDRGBRJDAWNGUQGRZEHYDDFOWDDZIPSCKHLINNUYAVJMLKYMCKNIKNYIGZILRSBEGBMZFXDXHOPNETXBPFJFHUEHQDCKOAEEFGQPXNSVBXDCLSBTVSHRLCASPUPVOTLWRNRWUOMFKCNXVKTWVTWESMHEZCCAFKUVWJXFVSAOYJMXIMQLUMQJWAHOAPVIRQSQKIRJTBEYZKLQ");
    msg.actions.assign("RHNNHEHWSIXVVJFSQLVLLENSRDBQXDWYCOQXOZAZDYMFHPNMMQBOCIIFPVJGRQPZ");
    msg.fuel.assign("WXMBNYKFUAGDXNMJYZDEPOHHDFKGGYKCVWPVVZVSUJUOVMWHPITGYZLLJDECMJZHQQLUFIQBRXPSKZBODIATQBTRRQMZBEPSJCWWUMHNHJLFGSZYPYEPGLORETNMIKJNKAUFXKIOBGCFRRKWRNXHPQDQUTTOIEAFBVCQFBGBWOYPZGANCLNLASUOQLCZFNENHKIMRYVYTOSFXSGBHXTJEWWDEUVMIVMZACSURSYXJJTEXCSLDDWAKRLPVAIH");

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
    msg.setTimeStamp(0.281241715418745);
    msg.setSource(42739U);
    msg.setSourceEntity(188U);
    msg.setDestination(55106U);
    msg.setDestinationEntity(162U);
    msg.plan_id.assign("AYFWXJOHRUSTWWZHCSUAEYTKUGWTSZEBCMMYDWJSBIXIRZDGYLBVRDSFVSEKNVLUHSJSQZKJCDQIVRXGLNYIQYRZMUTKPPHHGNQMQGOZUVMTRAWNXCPHIJWSVJLDMQXEBSJXZMTLNTFFQYCOCVCHJMBTJZDAFVOOUIQHOY");
    msg.type = 242U;
    msg.properties = 121U;
    msg.durations.assign("UFMDBNRMZJCCIAECOJGUXSPGLDSAOSRRTCVPWXBDKCOFBZRIZXLSZMRQPNUZQFLAJKTAAVMPGCLWPFQELKAPIDFJNJJQHMKEHBUOJMBUMCXVITXIIFYMLHEEFTJTIUBZVGOYWKKOQSQTGCHZGWHTFNDRKRWPBRAUXSSTOUWYDDYJVVANLYAKYFKSHGI");
    msg.distances.assign("KYQSWFICLQWPVBBMLCNHEGCRREXWRGQNJUMXTVZGROBGCTFNFLKMZEVBLKOKTDXCZWEKYDLVRJNBCWSDXCVIWFLOFHELPXKWJUHCQLKZWUJQNUBVFAMNROQNKRMEQGPDUPIYWEYPAFYSYRMJVDAXTITAKHSFLZORISOTYMHVGASGJTGJNFBQZTPDAAHCGHYEXZBCBUIDXAIVFQZBDSUQUOHDXUEZIIEKLGTP");
    msg.actions.assign("LVMAWOQFIRVHFRKUOBOOUJBZFWJFM");
    msg.fuel.assign("HAPXSBCKHQCWDNKVXHIMRGZ");

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
    msg.setTimeStamp(0.8223924038567156);
    msg.setSource(52620U);
    msg.setSourceEntity(216U);
    msg.setDestination(35237U);
    msg.setDestinationEntity(124U);
    msg.plan_id.assign("KGBANLFMRGILGVFRXBHIDTXJKTNPRSBERTPEQMNWYQAOEXWBDDZTFYAQQCEVQZSZOTAMULDBFVMQKJEFKBFCYHYPJJSIXKUYZQZUZUCOVSPMLSZDUJTIUHZKUCUEZJQNDAWRCCOBHNROGMQIOWIAXYCPDGGHYPRIWSXOHZFHRIUMXRKMTWYTBOYHNAHILLDRWJKLSSIQCXMNDGAUBSNEWVCFGLYVMAVOSVBPELEKNJDWXAGFGH");
    msg.type = 218U;
    msg.properties = 252U;
    msg.durations.assign("NGSOYOEUVYSIQVJNPGFYWAXDVLKLOTTWCIEEFYINDTPTIWHAZMMFUHFZJKEDKQDYKGBAIWJMZFCOXKFQQMPHPUKVNJHUGZOMLWHAOXRDXCWXZRPVZNFTGXIJQGJITYKWWBXCCMRCKSJQNJUUVLDCBTREHZQMBEEGHARVAZNLPRONBONSNCSLZHLDBTBSYEGRSGSIPQFRMUPCYEOILB");
    msg.distances.assign("YWSFVHFSGMGSNXQVWZWFGLJSAUVZPVMARMHCCBFMQEBFZJZUMAIOATUVOUZIWZXARYJUJRRWNFJEFNXQDDNQVTQXBXOIETGNIIIMCCYQRGOEZKPKBTABKKBRYXCTQSPHDDRTRDTIZTVOHLOWEELGDIPBJJNWCBQJHUYUKWINDWJSILGXQMPWYSVYGHAAXTLNLZHZUFPOCDPKYPFOLEOGXS");
    msg.actions.assign("TLAIUNAMJOIZPDUENPJPWXIVKAZMWAEZOCLTFHQJZYEUYSBILEQWXETTJGDIGLTPFNFRTRFTXF");
    msg.fuel.assign("CMAOFMLOTQVHOICFURYVDFYPXEWQZHMUOILFKTYGSFBDMNJEULUKEPCZPTPUHJNTZZSOTCGRMWMXVDORBFDFDBAQIDWSWTZSYDHJPJXAJCXNMVRSVHGSCPNKVIGWYLVVEOKTYCTNQWFZMKFXGELSZNGVXSGQAWKAAIPNDBLJLUYMM");

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
    msg.setTimeStamp(0.48674818423738386);
    msg.setSource(43797U);
    msg.setSourceEntity(12U);
    msg.setDestination(9671U);
    msg.setDestinationEntity(74U);
    msg.lat = 0.47556876882805654;
    msg.lon = 0.6515536328191527;
    msg.depth = 0.21398691895731248;
    msg.roll = 0.8485068963120558;
    msg.pitch = 0.45583584027401836;
    msg.yaw = 0.8411146324835413;
    msg.rcp_time = 0.18516846100589657;
    msg.sid.assign("KTRFOBXSCMXXSMQAXVRWTQUBMTNFYVPWDHXLJIACYMIZQEOAMJKYLNRRUDJCOEZGQOAMQBYEPFBFUBEVNYNUZCXZEVWGGYQDJOKMIDDRNHSLEURNZSNYABJKRKCHFFBIDHTUWVPTFQUEWJODOGDNTPLRKBQLLMHESRSIGVIGNFWQTXRNJKXAPEWYLXVJUDZHDFLZUGIOPTJG");
    msg.s_type = 119U;

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
    msg.setTimeStamp(0.9589113856286295);
    msg.setSource(56309U);
    msg.setSourceEntity(0U);
    msg.setDestination(45149U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.39293092420669185;
    msg.lon = 0.16673427297701804;
    msg.depth = 0.2612026589824409;
    msg.roll = 0.40025137811739653;
    msg.pitch = 0.42833972850176205;
    msg.yaw = 0.9353869873028696;
    msg.rcp_time = 0.6373106283494779;
    msg.sid.assign("CCWDAQUIFJKGCHGFXJKTSOSYLPMRT");
    msg.s_type = 3U;

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
    msg.setTimeStamp(0.16600217939064044);
    msg.setSource(14124U);
    msg.setSourceEntity(244U);
    msg.setDestination(47259U);
    msg.setDestinationEntity(210U);
    msg.lat = 0.6131565968730663;
    msg.lon = 0.19122358670587425;
    msg.depth = 0.7169708917097917;
    msg.roll = 0.565371583929512;
    msg.pitch = 0.2651036567805989;
    msg.yaw = 0.07292541253345808;
    msg.rcp_time = 0.6242958534613828;
    msg.sid.assign("DLZIWFUZCJBJETULKESXNBXHKSRAKLSNCJHRTLNJYXYVRETVNGNWZMLTMVOXECWRVYTUWYSKKZBGNJEJGIMYRADDCJTPZSCTXMFIHHNVDKCYATDFMGRHMCQEOFGPM");
    msg.s_type = 59U;

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
    msg.setTimeStamp(0.9246343272416236);
    msg.setSource(20973U);
    msg.setSourceEntity(241U);
    msg.setDestination(47946U);
    msg.setDestinationEntity(252U);
    msg.id.assign("GNDOLOHCQMKDZLRNSDTRTSIIBBLVKOQRGZMGOKEIXGTXXUXCJJAVTYCLJFSPSUJVNGOHXRCAMWRBFFWEYAARNWEKPWCVBBUKETZQDIXEPXTXOUVLTIWBTOXFFAIMEEXHKGYUVZZQNNBKDFAFZSYBMPQGMEIWZASKCLDGWPKGGJPTQHQUVOUHWAHMQPFNDYVWNMISIYMJJPBRCKZHLLNCQLHHHDSSFNUJDAVMERUCJPF");
    msg.sensor_class.assign("WUHLAOSDTXOUSMGAV");
    msg.lat = 0.8976025631975696;
    msg.lon = 0.5711879669511835;
    msg.alt = 0.4516440984712624;
    msg.heading = 0.34858386459117263;
    msg.data.assign("WSQUXPRZPPPRBSSJIHQWBLRLMPOGYTCTKPQVFYEZKOJMDQXJDIIWEDDDUAGWZASUGHAGCXCOYMNCUOZFMDPXUMBTISHYMVMZSDA");

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
    msg.setTimeStamp(0.22721508372286892);
    msg.setSource(6042U);
    msg.setSourceEntity(143U);
    msg.setDestination(37682U);
    msg.setDestinationEntity(6U);
    msg.id.assign("EHBJPBFBMKDEMQYVINXCRZILSAUSMSKAZGQKGEHUDTQGRIMRVWEIDVGNTXQTHGUARNHOWYLMKBXHYBJCAFXFMNDCTOZKCVOUAOXE");
    msg.sensor_class.assign("RNCTENFKJSWLQZVEBKKUORUFZUJXIMOIQMWWVBFHGJYCVHCILDAAPCOXIDRYVYTKRXLIKPQGZXNJQTNFOWNHHHJMFYDITUKJBEDJBVQKPWSRXBWRSFTMTUTQOOCSGDCBHPCBNNFSDOXZSEUG");
    msg.lat = 0.6336862970015963;
    msg.lon = 0.8158219844385727;
    msg.alt = 0.7207172532199309;
    msg.heading = 0.9992516074191975;
    msg.data.assign("AYFRZVIXSLIUHVSYMYTPUUGGZXJKCFYENKQSQLIEXCCTHJBDMBONVDUMWKEXITXIASRECBYHAPUVJVKRUYSGJRMUSMHPBQZHIPJLETCNKOGAPPFCCDVDKHXLIGQQCSOMPVCLYNKWQOBZSKOOMTNWXSHAHLFAEWWQVBWLNBVLETTNAPOSQTJMAGRFXJZWXVUODDTUBZN");

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
    msg.setTimeStamp(0.33777696775365584);
    msg.setSource(11216U);
    msg.setSourceEntity(2U);
    msg.setDestination(53110U);
    msg.setDestinationEntity(141U);
    msg.id.assign("ECYQBLKSWBULLELISTTQUGTFXXOBAYL");
    msg.sensor_class.assign("QPTQXVEBNBBDGTL");
    msg.lat = 0.9621771899013823;
    msg.lon = 0.4317278726070518;
    msg.alt = 0.5824947729376797;
    msg.heading = 0.7938764293749843;
    msg.data.assign("SXZPWHWZGUFOH");

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
    msg.setTimeStamp(0.9239789266192285);
    msg.setSource(19818U);
    msg.setSourceEntity(113U);
    msg.setDestination(15252U);
    msg.setDestinationEntity(207U);
    msg.id.assign("QNITHXMOFFPAUZPZOIJYJUGALPIQRXJMVOIUFFCVJTTTUBEUTKIBRMBFTQLGLNRMDGZMRYCWVADDXPCBMK");

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
    msg.setTimeStamp(0.30083969579175485);
    msg.setSource(46133U);
    msg.setSourceEntity(123U);
    msg.setDestination(34669U);
    msg.setDestinationEntity(150U);
    msg.id.assign("DIICETTRLVDC");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("MASXVTBBULEYZCIQRJBIWPLKVNXQTQQZPKYGCVJIHLBTVSCOTMYRZUTWOJUMZNYBMJVLUMWRIOKGDBDJKFROBMAYTAOHHYSYQKEYJVOLNSIZMEPKVWBQLIECRECCDXEODXSBCLSUWOJIDWGNNTWWIRPMGPAMAEDRYTSXFHQDANEWBSQRMVYEUGFFNNASKQFAXGHGLGUFPPZEJFULCNSHDZFJZDITLUHKNPKKPCVDRQUZFHRJAGVHOXPAXXOTZ");
    tmp_msg_0.feature_type = 219U;
    tmp_msg_0.rgb_red = 58U;
    tmp_msg_0.rgb_green = 72U;
    tmp_msg_0.rgb_blue = 61U;
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
    msg.setTimeStamp(0.3314919262527266);
    msg.setSource(10269U);
    msg.setSourceEntity(47U);
    msg.setDestination(61606U);
    msg.setDestinationEntity(61U);
    msg.id.assign("BDFYVKJCQFRD");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("FERGKIHQJQSISEJHIIMRUTTYRPGDKDNOAJVZKSYTXJLXTCLJBLMVVUOOYEFW");
    tmp_msg_0.feature_type = 225U;
    tmp_msg_0.rgb_red = 48U;
    tmp_msg_0.rgb_green = 171U;
    tmp_msg_0.rgb_blue = 173U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.3893133660417667;
    tmp_tmp_msg_0_0.lon = 0.7166579756601826;
    tmp_tmp_msg_0_0.alt = 0.18031616951299767;
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
    msg.setTimeStamp(0.9477887160891192);
    msg.setSource(7629U);
    msg.setSourceEntity(78U);
    msg.setDestination(39724U);
    msg.setDestinationEntity(189U);
    msg.id.assign("PVBHCZKMHVSGCLLRVIOZBCSPKMMZXTCHEIDYRUJWNQYLEVGEORZNQRHJFDAZLTSLHDMYJQTJCXZCIUFAMBUWWKIKLANSLWFPQQAUFTQXNPUWPPSZDMANMSSYUVAKJUDBEZUEYDIXNNIGERUYOHGOBIOCOVOYXDWQGVTZYRVGOBRLTPJJGPVSHWXZXDNWFCBOYQCSJPBNFFLVFQKFXIDTYBMKMSAKLRHTGCODQAWREFMKXPHWGJEBXI");
    msg.feature_type = 19U;
    msg.rgb_red = 190U;
    msg.rgb_green = 41U;
    msg.rgb_blue = 113U;

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
    msg.setTimeStamp(0.13587823083179673);
    msg.setSource(60131U);
    msg.setSourceEntity(151U);
    msg.setDestination(56509U);
    msg.setDestinationEntity(174U);
    msg.id.assign("OELSXWREEFCISTJGFNGIIPAWKONVMJPCQIACTBOIRRMHMIHFYDFXGVLYNZJDRXWYSHCSHYNMYBOSWWFLQSBOBSOCRPRUYRWTKKNGVRPIXGFEFZWXALUAQVJJJYPHTAMQXMYSQBLKCDWEHZABLXAKUDPSDWDPEXLETUWNVTGZZTYIOM");
    msg.feature_type = 197U;
    msg.rgb_red = 169U;
    msg.rgb_green = 31U;
    msg.rgb_blue = 192U;

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
    msg.setTimeStamp(0.7836658359308395);
    msg.setSource(43966U);
    msg.setSourceEntity(195U);
    msg.setDestination(14535U);
    msg.setDestinationEntity(114U);
    msg.id.assign("BPTVEISLZFWZAHBDSQPUIUBTLYDHAIZRLSRKQRFDHXEONHMDPLGMKSGJEKFWRJGCYONHGDJWOQMBVTSBFKNVNTEJEAVIVOMAOXCBWTAQXDMMNRUJHKNJHCCAQYTRKQYPAXCRIERAYGUUNWPHEVHCCSBXPFYFZSNFLQGOICLZVMLGMFQOEELYSJZVPGJSZCVTGTIKFBYBDOEDJXRZUWXLKIMOWQXBNLHUIWFQGDKDCPYZPUSWATUP");
    msg.feature_type = 10U;
    msg.rgb_red = 210U;
    msg.rgb_green = 218U;
    msg.rgb_blue = 154U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.16708319426663043;
    tmp_msg_0.lon = 0.46645119804376445;
    tmp_msg_0.alt = 0.867024688322279;
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
    msg.setTimeStamp(0.3943162348549133);
    msg.setSource(59455U);
    msg.setSourceEntity(83U);
    msg.setDestination(1006U);
    msg.setDestinationEntity(75U);
    msg.lat = 0.39478886058755935;
    msg.lon = 0.7938901641962004;
    msg.alt = 0.3909518712085902;

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
    msg.setTimeStamp(0.13390602894361747);
    msg.setSource(29467U);
    msg.setSourceEntity(228U);
    msg.setDestination(7068U);
    msg.setDestinationEntity(14U);
    msg.lat = 0.8505162420304792;
    msg.lon = 0.6213766794792194;
    msg.alt = 0.5036928329510454;

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
    msg.setTimeStamp(0.19253289373983717);
    msg.setSource(41881U);
    msg.setSourceEntity(143U);
    msg.setDestination(52146U);
    msg.setDestinationEntity(155U);
    msg.lat = 0.6260840009262997;
    msg.lon = 0.6615223695711139;
    msg.alt = 0.22932499307988308;

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
    msg.setTimeStamp(0.3949180839053623);
    msg.setSource(46683U);
    msg.setSourceEntity(193U);
    msg.setDestination(2098U);
    msg.setDestinationEntity(48U);
    msg.type = 27U;
    msg.id.assign("CRKUXZOCYTFTSARBMKNTWAIUMHHWWEXMXCMLQTHAFUYPRWOLAPNLFUKOQPAOYARYCAKBZIJUODSR");
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.09177938992091206;
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
    msg.setTimeStamp(0.7981295875382419);
    msg.setSource(30492U);
    msg.setSourceEntity(169U);
    msg.setDestination(21985U);
    msg.setDestinationEntity(44U);
    msg.type = 123U;
    msg.id.assign("UEFVORVWYTQZGLCYARXZTJWXXDYWIPS");
    IMC::Launch tmp_msg_0;
    tmp_msg_0.timeout = 20299U;
    tmp_msg_0.lat = 0.7750975458303692;
    tmp_msg_0.lon = 0.1047797273472405;
    tmp_msg_0.z = 0.6257124021415488;
    tmp_msg_0.z_units = 202U;
    tmp_msg_0.speed = 0.1265860883181189;
    tmp_msg_0.speed_units = 238U;
    tmp_msg_0.custom.assign("IYGEWVIDLZUIQOJCTOQQUZFIVBAHRCHBFCPPKAH");
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
    msg.setTimeStamp(0.2350361756106315);
    msg.setSource(23542U);
    msg.setSourceEntity(194U);
    msg.setDestination(61255U);
    msg.setDestinationEntity(156U);
    msg.type = 177U;
    msg.id.assign("GNDWKFUEIOSYULFZNQIQMIAYTGTOSDEWFMGWXGNVYPOXHDRJRXUCQTMOXBNKBKNWAOB");
    IMC::ENCAwareness tmp_msg_0;
    tmp_msg_0.depth_at_loc.assign("OHMFQWGEYGFCRSDFLIQPOLBRZTPBBSARNGUILJYRVONRXCCEAHUEPWEXYYLDNFJHHGPMEGJQSPWENWVOHZNADYIXOYZXKBUQKMVMEFTUAUJPISTWIUOMVVGAYDWIIV");
    tmp_msg_0.danger.assign("TRCKPPYTBEXIRNQFATANOMQXWLSJRROIEZIUODDKLSEPFOWUCZGDHWDWNZULPDZAGZIHSMTF");
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
    msg.setTimeStamp(0.11518015619968736);
    msg.setSource(23058U);
    msg.setSourceEntity(26U);
    msg.setDestination(62887U);
    msg.setDestinationEntity(4U);
    msg.localname.assign("LOWGWDGCYWTOPLIFOXJPRMHSNGLUYMRQECXCDMCBESIJPVKWBOJJKZNZVLPJULIUBIVUVGNAZPTHYLXNVYUKAHDZEPZTJUXFVSCYIIHNOBCETGRAYBMRAETUGYTQQ");

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
    msg.setTimeStamp(0.02785527255328024);
    msg.setSource(18655U);
    msg.setSourceEntity(64U);
    msg.setDestination(13419U);
    msg.setDestinationEntity(133U);
    msg.localname.assign("TMJEXULZLMQGOBKPVYBEZWZNHVZPRCWFORVVSRDGQBJWPKGUAFYTFBYXZKISQSWIUJHRNIKGEBWIISKVHTXCLADQBALTMRVYKIDFNEEUQCDBESQPMUOASJOUGXLVICXMIIDFHJPMXVPOQWJSKTAYFMPXYTHNBJJNNRCZZMELLNRCHRDSYOYPNQWHFOWRPDCZOGZMXADSBCQTAFWZKGXOTPFDYHRUULHKXDFKUSMNVOGEA");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("BRGAAQIUIBNFZEQBJXFUJBXHYVCUTGCXGDJTUKPP");
    tmp_msg_0.sys_type = 220U;
    tmp_msg_0.owner = 47678U;
    tmp_msg_0.lat = 0.06832275949119515;
    tmp_msg_0.lon = 0.45111393563272195;
    tmp_msg_0.height = 0.00010284061907828157;
    tmp_msg_0.services.assign("ALTRJHDMXWIBGOZXKMQFXULJSAJFVGSDEVBGSENPDOUVMOLPQTHJYUNOHZXMYRCPPQIJBAIEKWTEOEHCCTLFSVVEIBRKQAFIOPPQCSBRZXNTEBUOFNPXQAISFVZDMGVWYKDSUMKCZVLSAMHLQWCGYZNBJTVBFDYPZAGWYNRWUAXOZDKKYDLQHNMCKFGHIJBJLSBAHCRLYNWEZOUSEEDNLPQUURIKRFTPCDRUFXM");
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
    msg.setTimeStamp(0.7033053819285443);
    msg.setSource(53724U);
    msg.setSourceEntity(195U);
    msg.setDestination(38926U);
    msg.setDestinationEntity(154U);
    msg.localname.assign("JDAVPMZEHTFMWVCSEDONRLTYARCAQPXGEFODCRKYYHEBFZDWOZLATGVYSJIYHBQICNOPBUXSIPGVUAQLEMCBDAAWKXDCVPQSWWUHRDSNRMUUQZDMVESJHUPTVSOPUKIWHKJWLTNMFWEEGZKYGKVIBUNSHPWXQSJYBORRFJKUGCKLWTBNXNSZVQNQHGGHLILBFIYJTJMFCBINXHXDKMCAQMKOIZZXXNJACVEOYLRLRTAOPTRGETFMOFZPGDU");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("MJEKPNCDZHGBNTWKUGQFPAYEXTAORRIYJNVYOSGZZRZTQCIXMQYSVHEHLSSBWSPKEZKYPDNJDJKGVUBQCMRHXAMHYTFTQIFGOAPVLBSKBHPEZMUZNUUJMWCVVISWCZEWLNKXULBDXDDATCROPQWADMLYTLROLUEHGGLFCZHOYUGWIRGXRTFFNLLVJRVFFJBSN");
    tmp_msg_0.sys_type = 90U;
    tmp_msg_0.owner = 52362U;
    tmp_msg_0.lat = 0.40474026605752567;
    tmp_msg_0.lon = 0.9423876913858416;
    tmp_msg_0.height = 0.9686587662743895;
    tmp_msg_0.services.assign("JYQZVNBNTNNVSBLTZQHCAFLTFBZRIGFQFKKUVGSWGRQOJMOCPBLSEHECILXMGDYNXKXJTCTKQOQECPBUJXJWMMCAUCDZZHJDYEMWNRFIAKWRURZWFHRFWIUFDAPUEAVBWKAHWSMAYOHPPHIMZZOADMUVSVNYOZZVGNOFGXRJMPWOQDSQIGIIJGLPOGROQHTLADSWYDSYDXNGHTFCBXLTT");
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
    msg.setTimeStamp(0.7489156481906566);
    msg.setSource(42830U);
    msg.setSourceEntity(71U);
    msg.setDestination(5850U);
    msg.setDestinationEntity(55U);
    msg.timeline.assign("HXGPKMCABSBJUUAUZWOBCZOVEKTLYAKO");
    msg.predicate.assign("CSBBSEXQNDQITBTIWQTCVVNGEOYJEZXROIEXJVLFCMVPMDSZMWPPQPPQOVPAOKWDCSRMHRRWBEWOCMKTFELQVJLAWTGWBYAJYHCGNIRRNUDLXIBGFQUHVJDASGVYYWCUAEM");
    msg.attributes.assign("NAPPEMXCHXBHMKXXJQFIXXSZFOBKGUDBBGFDQ");

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
    msg.setTimeStamp(0.7617022165238468);
    msg.setSource(52612U);
    msg.setSourceEntity(33U);
    msg.setDestination(14743U);
    msg.setDestinationEntity(93U);
    msg.timeline.assign("RPGYKAPCDZDZOYSQBUQXLGKVFNTFNLAESKZUMQOIJWHUBNDHLRWKRBEMZLLSCZDJSHPQIYAFJHXOAFRRKQBCRPTYUVGFOVTUJNXKVLPTOGQTOMBRBDUQZQUVNAYJFCGPHCSGEYWQYOLDTSEGZHMJWTWHICNQSFDKNWRYCAOUHVPSTXJDIAGFUZJMGICM");
    msg.predicate.assign("ENNCVHZQUFNU");
    msg.attributes.assign("EJYXYDOOIJBVWPUSHNKIIYPWARJLPQXEKDHBKRHGMKMTSLUOOCZAQFBCOMTXYTWUPLXRVFFWLOPAYZEZDXFLSIYJUNFWNOPMMCOWMQTSSLYXXK");

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
    msg.setTimeStamp(0.5988211313553696);
    msg.setSource(34662U);
    msg.setSourceEntity(176U);
    msg.setDestination(47104U);
    msg.setDestinationEntity(123U);
    msg.timeline.assign("HBXGJNCDMNXKBQTEDUNTXZSWKGJULPFRYOHORKLPVDMQAXJZVLAJBQYBTEEFDHLXNTGAROLJOZIGRCIPLOQLFSDVOMBCYMZTCMIVSIHNSKPICLKWDFAPMEVKFNWBGYDFSWDXHQGUTGXQAQRJG");
    msg.predicate.assign("KKOCIHBVNCMMEDABCSIOZQKYYGDQAXURVEMSBJNVIFARLEGMANECSZGKVCTZIZEWTGCIFWNLAHISFBDNSZZPEENLNPKQSLPAOVPBXDYHTRPBRUDYFPTDHCACJU");
    msg.attributes.assign("DXNZLULSAYPDCFDDLQDBJXCTHZLEPPGBTUSUJEMDRXKXFHTQTSKBXWURRRWWOWIJWPJBECQSGOPFPTAIPHOKVNNLGXVJVQMTJFKQQRSNKHCZYTROVPANUKXZHGNECIEDNPXMEWZEKZEJMLMIWRJZDTVYNLGWDRCHVFSFMSACYKUOGSNIWRCLVZBTCALHGHOXUTI");

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
    msg.setTimeStamp(0.5214220424304207);
    msg.setSource(41641U);
    msg.setSourceEntity(176U);
    msg.setDestination(19602U);
    msg.setDestinationEntity(163U);
    msg.command = 168U;
    msg.goal_id.assign("VDLSDXOXMKKFTJNMWRVKCT");
    msg.goal_xml.assign("XFTTIQRCYZLWCXOVPMZPXCKRMEPBTGGNJHFZMBKWVNNJZHDFQVDAYNUHDCGUAZYHZPICDOYKTNKWRWPVZPQHNNZNUMSKYH");

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
    msg.setTimeStamp(0.16840801138748063);
    msg.setSource(39858U);
    msg.setSourceEntity(0U);
    msg.setDestination(30070U);
    msg.setDestinationEntity(149U);
    msg.command = 185U;
    msg.goal_id.assign("SWCEDGNCPZNWZBQHPDOETNNEHJJHOLQBVMWBVESOGXAIZXWTSZIUDJFOYYVIHUFKCZSOGDOBCSQ");
    msg.goal_xml.assign("LNODJJWPYDIAPPCNQCLNWQTMVNALYVFDSXRDJCHAIBNOUYRAPLKSBJDSZZNRZSDJMMQGWWCEDJEGSORKXXUKGXIIEBMSSJTGVMYIORZIKUVEAIOBPVCM");

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
    msg.setTimeStamp(0.760925395563422);
    msg.setSource(15797U);
    msg.setSourceEntity(183U);
    msg.setDestination(50881U);
    msg.setDestinationEntity(65U);
    msg.command = 123U;
    msg.goal_id.assign("CDOKDAQXLYTRLQQMBGIKLTVNEFPULDEBGEKISYPCZBOYDINYRHEWNCITBUHWIDFFHDOBZEIHQIZACSBJHOHULJGELIJNOXYVJCMXXQYVRTUGCNIREOK");
    msg.goal_xml.assign("DPSGEKKCIZRFVQLAOVNOGTWINXKADKHOIEAPTXQDQPABZVGXWJMULISKBL");

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
    msg.setTimeStamp(0.021044608613575266);
    msg.setSource(52205U);
    msg.setSourceEntity(55U);
    msg.setDestination(18293U);
    msg.setDestinationEntity(1U);
    msg.op = 124U;
    msg.goal_id.assign("FCSRHPHQJZUBIHVHIAXQGBGYUAQABBDXKMSTGVJOMLSUHKWSLAELVPIEOJUUOSBPYTTXGJXXKZCBBOZECLAFGKDEEDVWFHH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("VSQSNSHCWUUCVNDCVCHRMMFQMVSXWMVYOTXCFBKFQVJZLZBWQBLEXIBGWTURJZCZHWLYXYQCYFROHKYUFFHNRLJHDIJOQIEXOURKHSKJJKTBA");
    tmp_msg_0.predicate.assign("PTEKTZNYQANSPOVENNGPONTHAMGSVFBJPBGQKDYKLWBFGRDMBYXXWRAUQCL");
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
    msg.setTimeStamp(0.493912386903822);
    msg.setSource(54026U);
    msg.setSourceEntity(230U);
    msg.setDestination(46932U);
    msg.setDestinationEntity(155U);
    msg.op = 21U;
    msg.goal_id.assign("ULMNVBDCMKYLZAFXEIUMIEQVFWRMSPPWUDYWBTQXBKISHUHXHDUYCZRXVXQTSJRTEBCYPJFFXGJVCDRVAUSTJLDWUCRXKWBYFDLZHCMPIALEIAOLLQOTTEXKXGZTGWKJNWSNHRBHSGPUQODKHRCDYHMJOJSSZSVLZBDNAIMEUGWVHOULKANYZCEJJODYOVAQCOVFKJKBMNTLNRZMIIOFFQYQGWAAPZTZTIEPVGNPBFNQGQWEMRAHGCFPX");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("KFWNGHLUJHPZGRSNSOGAXVBDHIQJITTYHFCBHMKWWPPGLHXTRRCEFVRNEEJAXDYWSDKNAVDWTCBJRJDYKMMWXXGIFPPERUHMJLNUPGFFPUVAJPYAVMQKHXQZAQZNEQXOGTQMXBXIVBROKSIOZ");
    tmp_msg_0.predicate.assign("LLUXUYDPPANFQJROYSLLVPCMDWFFTRDYLYWRBTCJJXZRAWSEGUIOZCYDNACMWTJUAEBPYIMWQBIJEPLHDFXGRHCMSNAVZTPVWINLAVONBFEOKCQAZISGFTMHVHDEBQHVBFXZVCBSSGVJAOTRNFNUQRMKRVMVIZGKOBXKGLZNABQGYOTWWPO");
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
    msg.setTimeStamp(0.17189204053479712);
    msg.setSource(21110U);
    msg.setSourceEntity(144U);
    msg.setDestination(34187U);
    msg.setDestinationEntity(214U);
    msg.op = 236U;
    msg.goal_id.assign("FSEZXRSOUCOBYMZVFUJUABXNVWUGJJKZORNCNHUFKPBURERBCNKNYDWAWTQGRDHIDIOXJQWYHDOFLDOVPDYIFTYREGBQLL");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("STBJCIFZKZNTKKYMLPHQYCVORTEWGZDFOMXSZRLFJBLUIFBJUAOWWNLZGEPRKZECCKAAFWGQNARRIVNOIHSBTHBDFGQNVBAIEHOYPSAHJUODQEEUQXBSCAGMFLHUVIDDAXJOVZMLYVPCKEHTDETMKHKQNGIQHNSIFVQBJYCAGYLVYOKITUXRFJEGMFUUNSXACBCCTRRZSXGPXQBDRWTMMWODGWNDPLPTLJHVROZJUMMPKPXWWYXDQPNJU");
    tmp_msg_0.predicate.assign("MOMUZLYSXVGKTOTEABGCODLORBLLNMZCVISQTGOTJHSJWLOTXBWBGGUUZOUADZJSCMATAXD");
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
    msg.setTimeStamp(0.02883623751465869);
    msg.setSource(38250U);
    msg.setSourceEntity(68U);
    msg.setDestination(30826U);
    msg.setDestinationEntity(206U);
    msg.name.assign("JSCUBPWGIOREHZUUVSOKFDTFMWYVMPVHFDVQMAWYTBBJCKAWXUNVZYLSQNHEOXGSSDQITPYLROAUHGYIFORKHCBNWKPGKOHXDWCJDSPCZDAUYBRMTURMGARMPIBFJONJITRMAYRLFDKLPTLNOEGEXVNQALUWHCKXDEWJIECZTJQILEFIPRTHZMCJPTDAVJGNXBLBGVNTUIZFBHQVECVESQLWJBIXXDSXC");
    msg.attr_type = 15U;
    msg.min.assign("JPTMVASRVTJGYKDHMJACTBOODWSGYCUHPXPHQZGHVIKHZFVJMIDGKDHNISCOZLAJEXVODFPYISFABFFCAUPNSQOWZCKDLQMJHZRUZENRKNWMEDYRUAKPKGJJEMCZLUSIUIEDVRIUZXGHKITQETBRMNCWOOQMFQAQSGNYBWLYVRBYAXHYANZXWFFNRTGQTLMIBBQFZJNXLOX");
    msg.max.assign("NESHECTCYIUWFXKRICGTAADONPNMOFPNSXAQEUMKABJCJRTZMVQQUIYZPUGDQOWWZSYHGXGAIDFQUHVXLLSAZJBHBAQMGQELLGPUKYBHWVODZVWPRYSGLONKUNRMFSCFYIZHMNRREMNAMFEDXTGZLTOZQDNPWLHYKXPXIIVOIXVWFWTBVDWORVBMIBLATHAKEXBGPGCFUTVYJUJSJSRROP");

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
    msg.setTimeStamp(0.5704865431807762);
    msg.setSource(23330U);
    msg.setSourceEntity(127U);
    msg.setDestination(17158U);
    msg.setDestinationEntity(168U);
    msg.name.assign("KPLXBLKJSVLZAEGZJGPVTICYWZDNCTTFBIOXMWXDCHNWODDAUESAELRFHKKINWQCDTEGFUYYQYVHBMDWMJDBZQFBDOSEFWUWBNQOJCAMHRPIXUGCFRGSDFJMVBKVNIJFJYQRLHXPJHXZBIUPGTXAQPIRLZEHPMSZSRLQTAEXERCVYCFRTNVIRVOUQDMGKTSSXLYMPONVPAJIFYZNHNOQALGAMKWIEBO");
    msg.attr_type = 22U;
    msg.min.assign("ZIZQDHLWVCUSNFPEITLXLVBATMBIGYBRPJAEHPDHOBJISIEPSTSFKMBQLJTCREHXAGEVMBELPCJJHWWLNVXCGXWAULZUAATNJUOKQPHDTJQZMCKRKNWRZNQNHUOMXKODZDZGPSEKYKNSPOJLYWGVZJUEJTUWOZNLUEDIIFPVFUVSNASAC");
    msg.max.assign("ITHTIGIRVENDVEACERFMJAEGHCSLHOQGMUFSDNVVFPPBUYEDBJFOPZBBUUQKSXEYMIKKGXQMZQSFYSFMCXGPRBSRDSWDXQXFNQKQHPVANMSZ");

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
    msg.setTimeStamp(0.6165274473947318);
    msg.setSource(54692U);
    msg.setSourceEntity(165U);
    msg.setDestination(5683U);
    msg.setDestinationEntity(135U);
    msg.name.assign("MPLGRGSPHEQEEJOJWOKVXAGYUFCSMPLTBVWEJHXAUVVTQTDRXGPANBHIHDDKMHZVMHLBCKGKXSWORJWAHRISIPFNBATJDICSSSIYCAVBDOEMQXINYSXEXHJUJIMNAQLZRTNWANFBPTODJWOWKZBMMQKFCCNYJGNZSZYQMKHZDRVQPEUEQPHYVAEKPYRXZVUFUNTOBLPWLLSITVYIBTFLLDXCMJRQWYFWBFLCGUDGFZUK");
    msg.attr_type = 49U;
    msg.min.assign("EYFXNZNTCSQCUTNBNDLTVDJWJMVDQMZHPAJGLIUERXFUZAQGDMPHXWENSCDWAKEBPGZJLRHQTLOOURNCVZEKSLKIJONOYRARNATXRVCIQWHWWFIEFPHFJAZFMWBDQUVTVTBEWKJOYBDLINOFUESXXZRGCAVSAFKYPEJTYOBJYEXUPYLLZDOIUPSBMODZXISIRHYHVRBATHMKQMLGJUQUIKYKMSMOC");
    msg.max.assign("JUVVNKNJVNPAWWERCZFXPVZYNBIUFLFPQCCERUWANQXDEYFHQXXVIJOMMCXJAOMSHQUUIXKYWLWGGDRFRNLKGFIZTHWKLWSL");

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
    msg.setTimeStamp(0.3211995513548028);
    msg.setSource(22671U);
    msg.setSourceEntity(100U);
    msg.setDestination(26362U);
    msg.setDestinationEntity(60U);
    msg.timeline.assign("AJSKACYVFPZPMAWXNRMTIALGMCAETZVQFEFTYXXIUDXVARWMXYKGYIYFSODCNVKHREOEIDXSTNYNGBZHOJFZLNQDDEMIIKYVHKTASHQOYDPDWNJTRGBUDPDPRVLGIUBLKJFPQJJLWMQCFOEMQGSWTLQUFWBYUCMELMVOIZEPQSGUCABSIBFVKEBOJNLSFGBRNZCWHRIY");
    msg.predicate.assign("TSZJXXNIDMTDOZBHHLCQFKUGZQXPRECJYWRYRSIEEMONN");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("UZJGOPYTNSPAETEFNJKZSWIARMUDNKRDAHGMCNBCOTKXTDQJWMXXSEECRFITCWBYQXXJGLFPSVTDMMZYGDSFIEIBBFPPHUIOSUOLUVFZJHVTWENFRXWKQCWOROSANQGLCRXSDJVWYFOQKYLBNCWHNAFLYDQLGGKDRTKLUFNEQCIDYBPMLBMOPXVXUVYVVSZJKKEJCSMOUMVJLHBIWIALA");
    tmp_msg_0.attr_type = 136U;
    tmp_msg_0.min.assign("VMIMKVNYQGVQMQEWZDKAMQLCVSVKQKWEKWBOILBTFZHXFNZRUSOCBNXZPFTTXEZCBVNAMIHRRQBHULSHUVKUHSASGKVPSMILQXRDAZILNBWKIUDGNRFFPLUHOGVTCCHTBRXRXFPPNIMXJSETZRGLOJJABGYPWSEUYARQLIBGMQWUPZILNTFJSYFXJGUAEHCEGDTIPCDGJWOKTMHKOZTVDJPEXDWAJ");
    tmp_msg_0.max.assign("CKWOGBNZGUEWKZFVBJUTCXNVDDLZTJJVAQZLGHEAORURKAQPTBOPPWHIYQYESTWFRXVKXANPJMRVWEDMYHYELYIESTAZXWHNXBLGTFUEGYSACFMJFYXHCFIDCUKIZWMKGHNUEBNMJJQIQMOHSBUE");
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
    msg.setTimeStamp(0.741070953256743);
    msg.setSource(23269U);
    msg.setSourceEntity(100U);
    msg.setDestination(53604U);
    msg.setDestinationEntity(196U);
    msg.timeline.assign("PSGERQAJCCZSCEJCVMQFIXETHGINFOSATRYKWXLOZGNKUBTXXHVRCOXHOVVQKRCPPMJQDKTBEBEWBGMNLEYPVZOYFIFKUINORLWODZGMWUSKNJHNQXWHVMDMFALZFIERWHATEYGLTVLEDQYRIQTUIWAQUPYFCXSHSDNDPAJBYFBKGXZFAPKKUMHBZBZHWARUNATVYZUZLKLLIDFVSOCMGBJYNQBROCXCSIGDGQJJTHDTIAPPYOJRJUPVWMSMN");
    msg.predicate.assign("NMNWXDIKMSDSWEJTKOWUPDZMQOBAGHLKLRTDZQPKLUPJESYOXKTKYHEQFYUNMTWCBFBHYVPZCKVCFIMIZGAVIQAAJAXGPIUHELWJLYSOAKGBBXFXCNFVHTADZG");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("VQBNDWACWDGIFUM");
    tmp_msg_0.attr_type = 86U;
    tmp_msg_0.min.assign("YMKMVBKJMGKGCGJHDWICOKHRJAVBVNGYXSEEEBEYOWUJJLLIQTRZWMHXWCXPQBAQCITIYGZVSDXTMFYCBIRAGGYWHJZEIOYQRWQWNFYFKOSYMEONTIPNKEEJOXOTBPBZRNVDTVTAUFNJQODXKWJASFRALZTGERZVLDSRRFICCJQFGXRHAGKHZUQLOXSVLDLQOUNTMXSKPVCPLMHLPAHFBHBMLPYNCNKTVXSFBUWSDICADUUDZPU");
    tmp_msg_0.max.assign("HCVZWSRRGAPTVLGJGKNWUYCQLTCHOAZEHTXUCMVZRJEIMUYKVQXJIGDDWGYISNBZQTXLFYDUMFRZWJHNBFDRG");
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
    msg.setTimeStamp(0.44862818582219544);
    msg.setSource(18006U);
    msg.setSourceEntity(162U);
    msg.setDestination(44901U);
    msg.setDestinationEntity(155U);
    msg.timeline.assign("STLGNQQCYRTKCBOAHTXAMZKOSWIXUEXRCDLFNHAIMBUMPZSVZIXGNEYOPZZLTJSNCYDAWVLRPUYVKOQVARKFYDXBGYQSRTVJLNLJPOWNOJFHJOFOMWLQKCRPGUDHSLUKQFUNUGDTLJQHMCKDQIPIJPGUMEGCBVHMVKYCYZECMHBYFJIJWTZEIVXRTHFPAFRTAEVWZIJWGAADBBHXGNZPXXQESS");
    msg.predicate.assign("MKOEGAWFUIQEWIGVZBGWDRHKGYZMOGXWBQSAQZMAPKCUIQDAVXHFCJYSCLCJYTPYBTNSVVIHLNZ");

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
    msg.setTimeStamp(0.046981891143133114);
    msg.setSource(57849U);
    msg.setSourceEntity(92U);
    msg.setDestination(10717U);
    msg.setDestinationEntity(15U);
    msg.reactor.assign("OFZXHFLXXARTDTPOOYPWHJQCKFXCEMUKXBRTMVWZPSHJQTDEEPCMDGBMMBQRBFYUDIUNJEMWVJIBAKQIXEAYRUYNHFNVQWIOHLHZAAZPQUWSFCNTHJVVSXHDTYOSJSKFCLGTGLMKNKGLIGIRCPDZUTCLWGYVLCVIJPOLGBCZULIFS");

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
    msg.setTimeStamp(0.637530955038991);
    msg.setSource(60036U);
    msg.setSourceEntity(253U);
    msg.setDestination(45551U);
    msg.setDestinationEntity(253U);
    msg.reactor.assign("UIWSOGIFVEJUDKWYJHUIEDAVVOOXRFANZIRHZHDQAKAMCIZIFSCXZCKUMRSGBOPMGXSTLTGQVFUJQZTYJGJNKKUYQALRHQBHTPCSCTLNMQVOJPPSQEFYWMGTPBWRWOEIAXJWIVVDDYCLKYHXOENSXPKEL");

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
    msg.setTimeStamp(0.5936194389886029);
    msg.setSource(44473U);
    msg.setSourceEntity(125U);
    msg.setDestination(38166U);
    msg.setDestinationEntity(239U);
    msg.reactor.assign("RPOKDVFLHNFSIYLLUZBCDIECBIENVQXRDGABDBTNXNFKXBU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("BEXLTLEAOYNLRZTAMMDJJCOBCZNILDSLEIQOULZYNTBXCFXNDZFUWAGIDURSOGXWBHFEWMIQCYEWJOI");
    tmp_msg_0.predicate.assign("JYXVQTYONMIMBKIUYDAJUWPVKEHSHFHDVUQUALTMEHLQQEOCIKRRTZPLRRPSRZZLPEGJBIDDVNAKVITAVBGBFUZZENWJNSICWTTPBMISFCVOXGPUKTSGGTZMXGILCOVQXFCCPKWLESKSFDEBHLYWKTBVNHRZJGCHYFAQSJXQOWUCFGJASMDRQXXON");
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
    msg.setTimeStamp(0.15156728077442227);
    msg.setSource(3032U);
    msg.setSourceEntity(251U);
    msg.setDestination(38340U);
    msg.setDestinationEntity(160U);
    msg.topic.assign("AVFTAVQGPJTLMKOULKTIMEHUWRRCRLVEMJYXXHFIJEQPIJUBGXWXVBIWXYPHFQXOEDZJWNZSRWLDWRKSVCNDEZHWKMTYGZNYBWYINKPQSHSCHTHLGFAQMZNZALTFUFOBEBKWYDCACMXHRPKUUZBRW");
    msg.data.assign("SUJNHSTGFUSIKWHEACKXWUMVNCSENYDITBGHODCXNJPPZLOBCWBKMDJDXBPKASVHHPZVBPXYVUYSKRITOAEMPFOVDYWMGBOYMQYZNPZENDKJRFAIZIRXTAUXKSNCKTOQFTZFNQWQOXOTBLWDVACKLSPOMLULFAGYGRUAGQVVZLUQTIFFVCJBIECDEEZJJXCGEKEXPFLXEJBRLUINMZDSHQRIVNHTWRHFGGYRYWQQPYCALRMRJWZMDHGOWLQIM");

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
    msg.setTimeStamp(0.4704920801986504);
    msg.setSource(38712U);
    msg.setSourceEntity(135U);
    msg.setDestination(55653U);
    msg.setDestinationEntity(208U);
    msg.topic.assign("EUMVFQYFMRCLOXCBPVMOJCPVYGTCIZQVDNHLAHWSAAWGZKGLWXWMKXDKSNYRFJJGDQGTEATBFIFBBWOSOKTALHXH");
    msg.data.assign("JOUDIWUFYBPSFDZAWXBLDHZLNYSFNSVIAOLAPBPOUHYQAMMRYXKHWIFKSEOQELLOJJMXHBWSTVSYAVSICZVQLDUGJATERZPIKCLWJUGNOLUBBHQQSMQVKOEYBZQNPZJGKJEQOTMNMF");

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
    msg.setTimeStamp(0.5695958170854168);
    msg.setSource(7001U);
    msg.setSourceEntity(92U);
    msg.setDestination(59977U);
    msg.setDestinationEntity(45U);
    msg.topic.assign("HJDYSTCNWPZIGEFNRZYMRHLPOSUPBVKITOYACSDPTVFDWSEGRIYEPKADZJYMULDUFSURJTMEJBCGONBWBSRVKRQIRWXDLWYLCXEURUJMMWKJWPKFLSPGTHQKEGVHIIIZXQNXJVXYKOSOERQAFHNHVZCDEWBFVWKTFRMNBKEJAPXUXNZANPHTABAI");
    msg.data.assign("KDJIIHYVRDSDCTFXGVMJGFZPKQUNSFONYPMNOWYHCSJFWEIIUPQBIWKZKXXCPSQNSCJLDEBZNKEJZZLHMLWJYDDYNHQJEVDIAOTTHLKCLOBJGYBZRY");

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
    msg.setTimeStamp(0.7953527343118812);
    msg.setSource(33135U);
    msg.setSourceEntity(198U);
    msg.setDestination(23259U);
    msg.setDestinationEntity(91U);
    msg.frameid = 216U;
    const signed char tmp_msg_0[] = {-127, -123, 31, -75, 47, -52, 110, 45, 29, -18, -37, -115, -56, -104, -39, 84, -98, -45, 111, -20, 3, 86, 126, 57, 12, -108, 71, 51, -103, 72, 46, -77, -40, -113, 20, -117, -91, 72, 89, -96, -13, -48, -87, 17, 103, -1, 77, -74, -116, 19, 34, 25, -124, 103, -27, -60, -36, -36, -40, -116, 21, -14, -112, 108, 87, -46, -42, 22, -112, 81, 73, 3, -90, -41, 59, 74, 66, 2, -83, 101, 83, -108, -60, 84, 18, -26, -115, 125, 107, 113, 32, -117, 99, -81, -31, -76, 51, 45, -60, 67, -79, 88, 38, 71, -51, 43, -42, -1, 48, -89, 113, 32, 7, 17, -124, -76, -11, 26, 60, -11, 17, -39, 116};
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
    msg.setTimeStamp(0.4719101047510069);
    msg.setSource(40864U);
    msg.setSourceEntity(181U);
    msg.setDestination(50204U);
    msg.setDestinationEntity(230U);
    msg.frameid = 105U;
    const signed char tmp_msg_0[] = {59, 2, 126, -28, -100, -18, -23, -43, 107, -91, 17, 99, -101, 64, 36, 28, 80, -81, -28, 39, -88, 22, -3, -3, 39, 42, 54, 19, 97, 20, 121, -118, 81, 109, 65, -31, -7, -53, -69, -39, -2, -51, 88, 2, 42, -4, -53, 126, -25, 103, 26, -65, -48, -124, 103, 28, -69};
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
    msg.setTimeStamp(0.5062249892753061);
    msg.setSource(46464U);
    msg.setSourceEntity(153U);
    msg.setDestination(29673U);
    msg.setDestinationEntity(18U);
    msg.frameid = 146U;
    const signed char tmp_msg_0[] = {71, 116, 33, -20, -34, 24, -108, 57, -70, -96, -74, 93, 124, -58, -95, 103, 112, -116, 89, -112, -41, -51, 46, -24, -107, 84, -94, 104, -94, 112, 58, 54, -20, -52, -60, 70, 92, -121, 58, -13, -10, -78, 48, -3, -102, 3, 69, -38, 101, -72, 59, -91, 75, 4, -46, 111, 53, -11, -30, 36, -124, -104, -4, 14, 88, -60, 102, 75, -47, 24, 41, 43, 26, 118, 106, 124, 99, 111, 27, -128, -81, -25, -30, -61, -90, 56, 107, 71, 60, -50, -88, -32, 11, 11, 18, 105, -83, -29, 97, 16, -91, -104, -93, 15, -96, 86, 84, 67, -66, 23, 97, 56, -69, 8, -116, 33, 10, 41, 61, -30, -128, 74, 88, 6, -114, 27, 100, 100, -27, -18, 86, -124, 125, -7, 54, 73, 79, 116, 84, 42, -38, -104, -86, -61, 125, 33, -24, -91, -46, 90, 41, -41, -81, -29, 86, 83, -70, 53, 23, -121, -77, -76, 103, -15, 19, 44, -124, 98, 42, 77, -56, 120, 19, -8, 30, 121, 77, 20};
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
    msg.setTimeStamp(0.503426477820493);
    msg.setSource(5413U);
    msg.setSourceEntity(40U);
    msg.setDestination(62909U);
    msg.setDestinationEntity(239U);
    msg.fps = 109U;
    msg.quality = 32U;
    msg.reps = 138U;
    msg.tsize = 89U;

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
    msg.setTimeStamp(0.5840691801118748);
    msg.setSource(2356U);
    msg.setSourceEntity(75U);
    msg.setDestination(64033U);
    msg.setDestinationEntity(121U);
    msg.fps = 127U;
    msg.quality = 11U;
    msg.reps = 3U;
    msg.tsize = 180U;

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
    msg.setTimeStamp(0.35605357330028453);
    msg.setSource(45615U);
    msg.setSourceEntity(77U);
    msg.setDestination(24246U);
    msg.setDestinationEntity(80U);
    msg.fps = 104U;
    msg.quality = 77U;
    msg.reps = 7U;
    msg.tsize = 152U;

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
    msg.setTimeStamp(0.3010977345353507);
    msg.setSource(26978U);
    msg.setSourceEntity(38U);
    msg.setDestination(22553U);
    msg.setDestinationEntity(221U);
    msg.lat = 0.5436052789740753;
    msg.lon = 0.06598645013887916;
    msg.depth = 76U;
    msg.speed = 0.7242558489708464;
    msg.psi = 0.05964116630599137;

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
    msg.setTimeStamp(0.6983421928485177);
    msg.setSource(31323U);
    msg.setSourceEntity(177U);
    msg.setDestination(55850U);
    msg.setDestinationEntity(121U);
    msg.lat = 0.6953268688837836;
    msg.lon = 0.9887893438905231;
    msg.depth = 5U;
    msg.speed = 0.5588417063004956;
    msg.psi = 0.8565577251629729;

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
    msg.setTimeStamp(0.6681830308995371);
    msg.setSource(22611U);
    msg.setSourceEntity(249U);
    msg.setDestination(42936U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.7961466911198243;
    msg.lon = 0.19325473284502992;
    msg.depth = 2U;
    msg.speed = 0.11782702875975892;
    msg.psi = 0.17874001597328915;

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
    msg.setTimeStamp(0.6088380761986811);
    msg.setSource(30691U);
    msg.setSourceEntity(179U);
    msg.setDestination(58012U);
    msg.setDestinationEntity(126U);
    msg.label.assign("IJJYQCBMUVYOATJQTIDVNDGTJWIMDYAVBJWJKXDKRVRZZBCLAFESKFSXCEYPMNXRXXFURFYXMWDDSFJAQTZHSLNSNR");
    msg.lat = 0.4626116455785184;
    msg.lon = 0.39675061449228777;
    msg.z = 0.2993992574660348;
    msg.z_units = 224U;
    msg.cog = 0.13393167316988308;
    msg.sog = 0.5613079435338423;

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
    msg.setTimeStamp(0.3953107373281398);
    msg.setSource(48932U);
    msg.setSourceEntity(181U);
    msg.setDestination(38611U);
    msg.setDestinationEntity(2U);
    msg.label.assign("JCVZQKIMEUZMAPZFTTBKEQHBBKWSFSXRGDKUQQVCIIQJCBFORDNAIDLOORGCKCNBZUSAJGEVWPTPJRNZWUMSYSRBMUWLFLAZNLOYMEBKIPZAORTJHEUTXCOXJBNXIYVFNSHPIMMNVMQXYDACCSUAVHCZEMYTHWVDORLKEIEGNLTSQITFMBHXJJUYPZPHNJGEGGVATYDQWGDEHOPWWPSR");
    msg.lat = 0.8498618408962992;
    msg.lon = 0.10341293332931556;
    msg.z = 0.2987193619077908;
    msg.z_units = 128U;
    msg.cog = 0.07684290510402758;
    msg.sog = 0.2595488192990064;

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
    msg.setTimeStamp(0.7057885591133004);
    msg.setSource(62960U);
    msg.setSourceEntity(49U);
    msg.setDestination(57789U);
    msg.setDestinationEntity(200U);
    msg.label.assign("BVIFNZAMDTQWIYWRTVFMKLZHZENXKARVAUHKOLWSNLJYJPKTMRYLWGYJFPDHSKPQMANIQOZIOCCJZIXUQUHTCXPRRQGUYDTQXGSVTBMBSOZDRVMSNVFBEETGJJJPORNGVKKSUBFDUBSZZGEDONPSUJFLYARXXLOKTQRCOWXHFPMMXGKLCISYWGZRXHETABBWWBDKWWNZAAOVSCFUCCDAPVIUMGFPHHVYIGHNHMEYLQF");
    msg.lat = 0.7406308164935077;
    msg.lon = 0.48064891822614075;
    msg.z = 0.6357548041321912;
    msg.z_units = 120U;
    msg.cog = 0.5228411321316373;
    msg.sog = 0.18974041471312064;

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
    msg.setTimeStamp(0.7893834784705991);
    msg.setSource(46569U);
    msg.setSourceEntity(57U);
    msg.setDestination(13573U);
    msg.setDestinationEntity(245U);
    msg.name.assign("MIPCQSSWJBJTQRYZJJWCMWPJPEYVLZKIPGOMITQHVQIDRNTFQWVYLKUXTGHJDUGEWEUPSXFOFVHSHDPDCGOBCBMCXIMXKLEVULSYZESFHDDH");
    msg.value.assign("YJPIHRZKNQXVNWLFRBPFMHWVQUDUZWXDHSMCPLAYSTQPUXVLSOGBINDVJLYESLVNGTBTMKIRRQNCWZSOBASHPCPIGAGJVBGPXFIKHCICZLUBNOUCKCTNUMYJPRISAUJKDRD");

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
    msg.setTimeStamp(0.1973519124992863);
    msg.setSource(17479U);
    msg.setSourceEntity(36U);
    msg.setDestination(46587U);
    msg.setDestinationEntity(54U);
    msg.name.assign("ADWJJZRBZHHILFEZVFHURRAELVTVKPWAGGVNVLVQUZVDAINZCHIBMNUFWTTKTOYMHMJWHGLFTYUELQCJGRRVMCBCBXSAGYDNJLUFHDJZCAQKBQIKVUUEXYPLIS");
    msg.value.assign("DYOFSUFVWFUIWJTWNGVHQYNMNADWOC");

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
    msg.setTimeStamp(0.8120192975281882);
    msg.setSource(39838U);
    msg.setSourceEntity(135U);
    msg.setDestination(42212U);
    msg.setDestinationEntity(130U);
    msg.name.assign("EWQHNHSQVDIQUJVDRXGFKTNPVHVGGSLQPXQTRZJOXMPOPAOBWTQAPRKMYJWALSTFDGTZXXNCLJVZNEMQ");
    msg.value.assign("TQLHTHFOTOZUBNIOSNAFHGWBXHVDVXKAOPWYBMBGLMUMNXZYOMKBKGRXHQZNRVHVXZXRQVXMIWSEJGCUXJJFEGNDPPLATDSAHFQUCIMSAPEQTLIGKUHDTPKJWBNPYLNQMCSDRUGCRDNCGXIIUYRFPANVPJVBOQOTJEEBYSLJAMUDABDWZKHD");

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
    msg.setTimeStamp(0.08195029103534113);
    msg.setSource(61247U);
    msg.setSourceEntity(207U);
    msg.setDestination(62594U);
    msg.setDestinationEntity(211U);
    msg.name.assign("CYATOSACWIUMPIEFCRBYOKMFHNHQTQQLMEDHIWIGKMIWLEFNTZKMLQORQBYWMQHJRVSRDIXXGOGGPAKBAFFSUAWFVVXCGTOXHIZHZRJXBUKPELGAQVJZZLENHZOUCUDVTYBCLMYKZWWFUUGAZOKCPATBUEYNRRASNUWVFSGCDYHTSYODDHPFVSSNNCNS");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UYBTENHEUODJZACZLDLXEFGPOIENFPMCHLFBGEAJVSVVNVBTRYFXSVCKTRCXDWESHHHAGGYILOTWNJFGWOKJUWYRZOZSBUDSIMRMAZYNKCOXDHDWLQSPGVIPQLPFCTYCGAXUIXWTIGPKBCENIJXLDYMRAQIMBPNDZURDEMAPXPFKQHJKNRQUWWVCEQTQUZLVPFIJMEADKJMXNSFCKBGWRHJLVIZHFMORWBSS");
    tmp_msg_0.value.assign("RDBWIWCOMAEQXMUYVAWKMZCEQKYSQHXGBPCULLTNHRVNOGSKDZMOFXZRCAAJZUBVXXNRIDYFQIMGSWPAFUORZJHJJMGRHBDPNSVCWFUAMSQTZIEZOLSHBBAEYFCNFWHSXP");
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
    msg.setTimeStamp(0.5737904867106877);
    msg.setSource(51401U);
    msg.setSourceEntity(31U);
    msg.setDestination(15427U);
    msg.setDestinationEntity(135U);
    msg.name.assign("FNTXWKOERNXNBZNLF");

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
    msg.setTimeStamp(0.34630818015972076);
    msg.setSource(58685U);
    msg.setSourceEntity(80U);
    msg.setDestination(28753U);
    msg.setDestinationEntity(171U);
    msg.name.assign("WJGUKYMWCORPBSZGMXAXOKZEXIFCPHYZGJSLYFVHOOCYBBCZZDTDEMUAZHVIMKEVTCHHIQEJGIYXFULGFIBBBMFNVWGIOKAQVSGTQAROAKQDFJKSCQPYURXRNRXMGQDFKJKNIALAJZXPQASDVQZWMWYUCUUXEVJHSAVSYUZZNFOTMPDPETJPLPULIWVRLHW");

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
    msg.setTimeStamp(0.07089004493185502);
    msg.setSource(12220U);
    msg.setSourceEntity(64U);
    msg.setDestination(4338U);
    msg.setDestinationEntity(87U);
    msg.name.assign("ESWDHSOBLJNJMWHDIAQXRQMDTMAKIRPAIMNUJURQYNBAZDOUZFKDEWUEFBHWJHPOZWKLCTMULFDEBQGXLYBPCRDPRTCYSCTCVJ");
    msg.visibility.assign("KKZVPBOLNDUENQQKSCOBVNRXNJEDYOLGWLCSFZLSYJLVAILFPNPDYPKQYOYATOBSKGQUFTDBZHFVVHGBSWQRGXGPGQJWCLEWFMUVFBFCIZXWQGKMRHGE");
    msg.scope.assign("AKMIQWMELIGLWCKLSTQOTNFZLLDGPOHGDFVMWVAMTZEGLFNCPDCVXKKZHPRVSOEHALOXIUDPROSHWPKRAPAFRXYIUVFRAQUXRENIIMHCNQBNTNASOXEICY");

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
    msg.setTimeStamp(0.7157325499240438);
    msg.setSource(27047U);
    msg.setSourceEntity(37U);
    msg.setDestination(12474U);
    msg.setDestinationEntity(121U);
    msg.name.assign("EVOZJSENTNVBQNRFFPDQVKIVSMFKTBSYZNODW");
    msg.visibility.assign("SHDBKWDKWICXTTLNMMCUZGZNNSFSCCTYLRNBTAKHUDMHOPOYMFSJOTVNLXDCAHRHHITTRGZMAOBHNEFSLEUYMOULABVOWJYYZAEHPCIJTDHCJVBVOWJHVMZPYWSRBSQJQEPXFCPQGQWXVABZOWOZERWWDINGSGFERUQGUQCXIJKVFLPLIZPN");
    msg.scope.assign("BIOMAWWGYNVYTIYOIZVKHLRZGSKMXWZDRQDJZRHOKMOCLODTPQNBRPHDNUTDGMEDOQCUVFAYLJTTNVCSHSFLARXTIRQYPVNTEARDSOJXLWFSHZGYWEHPNSIPUZZNXCGHEBJLKADBTK");

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
    msg.setTimeStamp(0.12649620127021688);
    msg.setSource(13707U);
    msg.setSourceEntity(155U);
    msg.setDestination(32053U);
    msg.setDestinationEntity(108U);
    msg.name.assign("ACTMRNAKWKCDFLTROJRNGQDBRGSHLNMDGUOMDYMEESMSAHSLBRAQUMLWKVIYLIFVOOBNZTXTUWYFPXEOZDBPD");
    msg.visibility.assign("QAJYYYPRRIQFLABSPAPSEVCJPUKLMTDHDJDNDYOKGWITWRBNFWKOJXYEOLTSFKTGRNUINOBTDGUPWFEZBHMFZYGGDUAWMFXVKAXPPQWTBNGVIMFXJJORMKCOTVHLMHOJIBVUFYDIXKCQCNJASYLZDWBCSGZSPOOQZIMRHVXRHUEZQDHECEMAHXAYWK");
    msg.scope.assign("CIUCJOKFJJQTKOCHXKOGHBSEUUHWAVURDODEIBUHVMMSDGLXBZZKWQPQOFHEFVVGUONRLINMPUDSEIFWGI");

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
    msg.setTimeStamp(0.42377476597008923);
    msg.setSource(47425U);
    msg.setSourceEntity(191U);
    msg.setDestination(59998U);
    msg.setDestinationEntity(184U);
    msg.name.assign("MVIQPOLCKJHSGUTRGCBRTCBYRIAMFADBWUQBMDUTKZXTBJLNYJVGOTLSOWLBIESDBRKFKNQWAYWYZKNXTCJVGQOFMHZXGYOILVYJMLHXUYAECHCEICVNWGFLQQCZKSTPEPHOMSAIMHVCNYUDOAEETWUD");

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
    msg.setTimeStamp(0.31185052996331997);
    msg.setSource(58759U);
    msg.setSourceEntity(159U);
    msg.setDestination(47219U);
    msg.setDestinationEntity(138U);
    msg.name.assign("BVCNYLJJPMMWVEIGNBDRJTFXLSZVPORIDHTQWFDRUQUSPDJCWWDLGJERRUPFKXCRMLYMJQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LFEVELXMGXKVCYTFGQMAXRRIEGRPUECWOAAIIYJXBCKBLLAYNEPYKSOEKJWUUMJWKHDGTZAIMBQFTNGSYZFDXDRCHUSQMWEANXVQDLBHQGGCNYOYBWCOWHLZYPQFGGJJOBIETHXBORFARTZIOBRHPPMUVKZZQNPOJJVDSWSKFZWLDEPJLWQUQIZXKXTGIAJMCURDTARCYSPHTBIEFHLXHUUVFMLFPBOSWMNZVTIKKNDYJUCZVHNVMRTDNSC");
    tmp_msg_0.value.assign("BDCVLCIOOVMBTIPIKVEVJKMEPSJYBEWVSBSYZGKXNZAIPHKPHDCCCEMXNNJMLGTVKPUDNGTBIWEWYRJUTMZPVUTOUWATYBZBOFRUDLIMPYZROQNDTJRDSJNEXYNYQLXLFJHKEVHUWUGFLMSHMAGZQHRWTLSNTCIFKLFVQCNCZAFXGLIT");
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
    msg.setTimeStamp(0.9415267933404442);
    msg.setSource(63547U);
    msg.setSourceEntity(135U);
    msg.setDestination(47446U);
    msg.setDestinationEntity(45U);
    msg.name.assign("UPBKCVXTXBCLDEQTJQNYHHLQJGZEPGAETWGZBKGPXPNTJNWQYPTHWPLIHQOBVZFBERQKRPYIULYHNLEZMFMDROTTSYSWSGRWYMDSMWDZSCZTMCIWIFNJQZUJZUNK");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IEOCXDZIRQTHHCOUZXMCBPNHORSKTUIGYOVPXLVDUNNZMSBAQCZOBKJFCXYFVMNECELWW");
    tmp_msg_0.value.assign("HQMHBQEWSNVNGNDWNTDEZLNJVSPNTOKYFQJJNMRVAHEYCOVXOADVYHIMVKOUKQFJDMFYZSYTYPOJBUAQRLGBGZOCLYSUQLMZXZZXATKXLFGMLJLKBHPHJGSLAIWWQZVMXDDNWCIWXKASOPEADVFRTHDRYPXERCRPRGIJUWGLMHYCRFIFJJKSUQUZVATUPXPGZHQCCRVSODBFKPCDFTBZIMENWHIYLCNIIGPQKXTBWGAESOWXOUIFMABBSUE");
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
    msg.setTimeStamp(0.7764281803703347);
    msg.setSource(57320U);
    msg.setSourceEntity(55U);
    msg.setDestination(15270U);
    msg.setDestinationEntity(227U);
    msg.name.assign("TNJHMXQYMVBZKMUSRYBRENJOLWTCRRVDIAJZWMDAZGWTNTNWOIIISXEXLBJFQRMNQUGKEPQFPZKYPIWCMKZLVFDLFIEOTMHXZDIFVH");

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
    msg.setTimeStamp(0.609158582088073);
    msg.setSource(30364U);
    msg.setSourceEntity(132U);
    msg.setDestination(3387U);
    msg.setDestinationEntity(29U);
    msg.name.assign("WJSNNGPOUZHJIOREXZIJMEEMNDUNOABILSUM");

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
    msg.setTimeStamp(0.8874191535384469);
    msg.setSource(17422U);
    msg.setSourceEntity(191U);
    msg.setDestination(64981U);
    msg.setDestinationEntity(91U);
    msg.name.assign("ILVRWBMCCUDDQGRAEGHGOZDYSJWUUCFSLTQWIPVOUUSSEXHCIPHGTBDEPOLSZBILQVPAYAAABQXGKJGKWEXKZBBRZAYWRJYQRQXSCBHLHOSKVDDCLRGJXIRLGMDMMPYZVUMXUOLWBXNRPSMTYNXFMHNWOOZMHJTMTJPDBVTNRIWXVKNK");

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
    msg.setTimeStamp(0.2029487999698708);
    msg.setSource(31027U);
    msg.setSourceEntity(1U);
    msg.setDestination(41344U);
    msg.setDestinationEntity(86U);
    msg.timeout = 3996683736U;

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
    msg.setTimeStamp(0.6972922382255916);
    msg.setSource(60229U);
    msg.setSourceEntity(45U);
    msg.setDestination(7467U);
    msg.setDestinationEntity(123U);
    msg.timeout = 4247392827U;

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
    msg.setTimeStamp(0.1296347512278334);
    msg.setSource(18196U);
    msg.setSourceEntity(143U);
    msg.setDestination(38489U);
    msg.setDestinationEntity(130U);
    msg.timeout = 2119834281U;

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
    msg.setTimeStamp(0.15342724069561542);
    msg.setSource(3673U);
    msg.setSourceEntity(63U);
    msg.setDestination(61575U);
    msg.setDestinationEntity(117U);
    msg.sessid = 2997913086U;

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
    msg.setTimeStamp(0.23368254745904893);
    msg.setSource(61231U);
    msg.setSourceEntity(39U);
    msg.setDestination(42524U);
    msg.setDestinationEntity(153U);
    msg.sessid = 1399575718U;

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
    msg.setTimeStamp(0.674767628296204);
    msg.setSource(37376U);
    msg.setSourceEntity(163U);
    msg.setDestination(55797U);
    msg.setDestinationEntity(78U);
    msg.sessid = 4200424149U;

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
    msg.setTimeStamp(0.6879590285513313);
    msg.setSource(39809U);
    msg.setSourceEntity(75U);
    msg.setDestination(19832U);
    msg.setDestinationEntity(216U);
    msg.sessid = 2175211251U;
    msg.messages.assign("RHDTPNUISKLCSNOZJKXYQBHAAXPDWGVLUEQTQXQDDGZTDBKFUEQAYGYBNGTJGXJSOBXPDQISOOCVJ");

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
    msg.setTimeStamp(0.7074432204259478);
    msg.setSource(60641U);
    msg.setSourceEntity(188U);
    msg.setDestination(40553U);
    msg.setDestinationEntity(50U);
    msg.sessid = 840045643U;
    msg.messages.assign("BRQKAIRNMBDCVDZMBWHFWFEAEHOTNEVFRGCFOIXXLMAYUOIBEYDWEPFYKDXPGZRAIKBSJRLVSQBYBXARNTFDRLEAUWZXVIMZTGWTALBPJQFOMNVCIUIKRQMOUYDUK");

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
    msg.setTimeStamp(0.8223749687391176);
    msg.setSource(3828U);
    msg.setSourceEntity(227U);
    msg.setDestination(38605U);
    msg.setDestinationEntity(114U);
    msg.sessid = 1160818949U;
    msg.messages.assign("QFHGKYTWSRRKUHHJTDOPECILVKKVEQOSDQCJUFRJNIEUPPAXBFEPNRUBXUMLKQNFIVGKGMXQRXWWNESBNZVMQHHJBSOJDTYZYYEVFQTRBDVNNZJTLBCHLXSPUMJMDYUFWHDZATDZVNZJSHMAKGFWMHGYBAXIOWMCKXBDYPCZGQYOJVIOFPSALGIRCPIBQNEEEUWTQADDCPM");

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
    msg.setTimeStamp(0.5464978200268202);
    msg.setSource(62851U);
    msg.setSourceEntity(63U);
    msg.setDestination(39776U);
    msg.setDestinationEntity(41U);
    msg.sessid = 634652182U;

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
    msg.setTimeStamp(0.40649506932850077);
    msg.setSource(48921U);
    msg.setSourceEntity(107U);
    msg.setDestination(21862U);
    msg.setDestinationEntity(145U);
    msg.sessid = 687293356U;

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
    msg.setTimeStamp(0.3267537129808379);
    msg.setSource(37604U);
    msg.setSourceEntity(78U);
    msg.setDestination(7469U);
    msg.setDestinationEntity(138U);
    msg.sessid = 3658896720U;

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
    msg.setTimeStamp(0.001082971061940774);
    msg.setSource(21120U);
    msg.setSourceEntity(129U);
    msg.setDestination(43888U);
    msg.setDestinationEntity(48U);
    msg.sessid = 1319012875U;
    msg.status = 180U;

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
    msg.setTimeStamp(0.018084702224925975);
    msg.setSource(24190U);
    msg.setSourceEntity(231U);
    msg.setDestination(8302U);
    msg.setDestinationEntity(188U);
    msg.sessid = 3385646U;
    msg.status = 96U;

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
    msg.setTimeStamp(0.15665801541403068);
    msg.setSource(33942U);
    msg.setSourceEntity(160U);
    msg.setDestination(27841U);
    msg.setDestinationEntity(247U);
    msg.sessid = 2039867212U;
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
    msg.setTimeStamp(0.47486809485847303);
    msg.setSource(57451U);
    msg.setSourceEntity(146U);
    msg.setDestination(60675U);
    msg.setDestinationEntity(181U);
    msg.name.assign("KJQNQDRXVSQ");

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
    msg.setTimeStamp(0.2782112605477898);
    msg.setSource(30539U);
    msg.setSourceEntity(186U);
    msg.setDestination(10433U);
    msg.setDestinationEntity(148U);
    msg.name.assign("HMVQIZFWVOCRWBBGDKHPNVBJXGNOHEFLCSMTLNRUFSZZTUFLNMRNBRIQTWAWEOTHVSREBKTTXORPZQBLAZJSVCAODEJYPEJUUINVYHYLYADVTYNEOJXLKKQOPISDOXNZDFXODQMAXFARYQGCHSVGAPXWYQHFYSOUSSEHKBRUP");

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
    msg.setTimeStamp(0.0005007498288261969);
    msg.setSource(12598U);
    msg.setSourceEntity(153U);
    msg.setDestination(22173U);
    msg.setDestinationEntity(54U);
    msg.name.assign("RFQEMMLYESJEDEGHDKYAQQFNHWETXGZXSRCDJMALKZFFOOUJFBMZZXWPWICUVXRXHNPKQQOYHDYGVMSXCNSNANTPRAXWJIEEZVMSZJMDWAUOGMVFLHODENSCTBTN");

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
    msg.setTimeStamp(0.12235284283403725);
    msg.setSource(46878U);
    msg.setSourceEntity(200U);
    msg.setDestination(2597U);
    msg.setDestinationEntity(15U);
    msg.name.assign("ZWKTDMRWBJRSPAKUIEDCDMVQAHCCHOBTCKTEJFXFRPGIRKKGYCPSTNEOODVZZKBMYBQZUIIKCTHTOWXUTVHOSULEDWISYPVFTXGUFYMPGYVPGHDQREDQSWJDFZDXJOQSTAVKEALHYYUVXBQRKXJDMGXFLGCOSPQZWHFWEVJEJLLZJNZNGBM");

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
    msg.setTimeStamp(0.0796547211872285);
    msg.setSource(34085U);
    msg.setSourceEntity(63U);
    msg.setDestination(24120U);
    msg.setDestinationEntity(125U);
    msg.name.assign("TSKALJMRSMHSENKCOPW");

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
    msg.setTimeStamp(0.3390821585496815);
    msg.setSource(26672U);
    msg.setSourceEntity(211U);
    msg.setDestination(47182U);
    msg.setDestinationEntity(101U);
    msg.name.assign("QXFVZUDTXUKCZRUMPWWHWRYYQNJQQNCRLGBDFVNILTZJAKDACJQIBS");

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
    msg.setTimeStamp(0.036035891759630845);
    msg.setSource(32239U);
    msg.setSourceEntity(115U);
    msg.setDestination(9695U);
    msg.setDestinationEntity(212U);
    msg.type = 92U;
    msg.error.assign("BUEMWUKYGTSOVMBECJZPYZJCDODIVGZYXVDXOEU");

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
    msg.setTimeStamp(0.1140017257604744);
    msg.setSource(7337U);
    msg.setSourceEntity(69U);
    msg.setDestination(98U);
    msg.setDestinationEntity(169U);
    msg.type = 14U;
    msg.error.assign("JETATZFKXLGTMDRSOUVYDBESE");

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
    msg.setTimeStamp(0.35895994299188727);
    msg.setSource(20777U);
    msg.setSourceEntity(19U);
    msg.setDestination(42332U);
    msg.setDestinationEntity(114U);
    msg.type = 138U;
    msg.error.assign("CRDYFXKZOZIMHXHKTTST");

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
    msg.setTimeStamp(0.6535578115797164);
    msg.setSource(61737U);
    msg.setSourceEntity(22U);
    msg.setDestination(26327U);
    msg.setDestinationEntity(65U);
    msg.seq = 49085U;
    msg.sys_dst.assign("KNAMKGCMXNACWEILDFUAZZDYJAPCNDNLDBMSCLDCZASUPYNTKUVFWGTAUKGYLIIVSBKAWLYIFVIQEEKFWXMHHOPROMTEZZLAIKBSIOXIJBTPJHGOO");
    msg.flags = 246U;
    const signed char tmp_msg_0[] = {104, -77, -88, 18, 115, 90, -52, 5, 27, 14, -77, -29, 29, -22, -12, -47, -90, -55, 35, -95, -66, -126, 109, -86, -128, 59, 92, 34, 68, -66, -119, -63, 114, 18, -107, 19, 56, 75, 119, 109, -48, 41, -102, 24, -125, 32, -64, 114, -98, -25, -11, 35, 26, 108, 0, -73, -120, 24, -117, -105, 12, 21, -110, 87, 126, 37, 121, -125, 91, 19, -108, -125, -40, 84, -127, -68, -59, 18, -70, -79, -2, -26, -42, -4, 111, 44, -84, -36, -89, -18, -65, 126, 41, 118, 26, 124, -39, 85, -35, -27, -125, 55, 12, 84, 66, -98, 74, 3, -42, -16, 47, 48, 117, -68, 47, 7, 102, -117, -25, 59, 46, 62, 97, 53, -97, -41, -69, 67, 98, -55, 87, 123, 50, -32, -35, 115, -25, 64, 92, -37, -66, 70, 113, 34, -111, 15, -125, -71, -84, -67, 80, 22, 32, -116, -67, -80, -9};
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
    msg.setTimeStamp(0.7639250609111626);
    msg.setSource(27195U);
    msg.setSourceEntity(81U);
    msg.setDestination(5484U);
    msg.setDestinationEntity(46U);
    msg.seq = 29160U;
    msg.sys_dst.assign("VKYIGLOJMZCXTAUIJSJVUKGBTCZAYEAOHZBQJNHKRERFZM");
    msg.flags = 124U;
    const signed char tmp_msg_0[] = {70, -28, -42, 65, -83, 18, -89, 82, -40, -45, -99, 55, -71, -72, -68, 69, 106, 5, 87, -103, -24, 1, -50, -56, -126, -123, -122, 55, 15, -100, 38, -37, -93, -54, 124, -35, 0, -113, 78, -77, -81, -1, 2, -37, -128, 9, 40, 120, 17, 42, -6, 32, 20, 113, 91, -46, 40, 103, -106, 75, -103, -75, 62, 65, -75, -2, -113, -8, 24, 35, 83, 115, -15, -61, 23, 79, 61, 23, -81, 96, 0, -96, 94, -109, 19, -5, -100, 58, -42, -106, -23, 126, -100, -115, -34, -24, -98, -112, -45, 83, -116, 13, 123, 0, -125, -6, 52, 78, 114, 44, 115, 107, -37, 74, 12, 90, -3, 85, -80, 81, 7, -50, 118, 64, -35, 95, -123, 44, -107, 23, -67, 35, 58, 8, -22, -86, 70, 122, 76, 53, -77, -50, -118, -110, -117, 116, 75, -49, -71, 77, -116, 0, 25, -30, -90, -43, 13, -27, -15, -39, 85, 99, 22, 50, 104, -79, -61, -5, -32, 110, -123, 101, -100, -25, -26, 74, -2, -93, -20, -81, 61, 91, 52, -121, -93, 74, -125, 13, 80, 63, 16, -27, 94, 27, 53, -110, -5, -63, -67, 70, -113, -28, 56, -56, 99, 1, 15, 8, 14, -59, -40, -70, -128, 111, 111, 105, -101, 20, -23, 41, -8, -103, -51, -76, 15, -92, -115, 114, 44};
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
    msg.setTimeStamp(0.4305822551763936);
    msg.setSource(57597U);
    msg.setSourceEntity(66U);
    msg.setDestination(59577U);
    msg.setDestinationEntity(76U);
    msg.seq = 64624U;
    msg.sys_dst.assign("EQJRHSMVZIKPAZXRCTVVGAOMDIWLQKCMWJMBSONKDNWABSYMUPKYUJABGEEDVEUGODWQVXLPJXG");
    msg.flags = 223U;
    const signed char tmp_msg_0[] = {15, 2, 19, -5, 11, 10, -82, -38, -82, 49, 59, -105, 3, 82, -74, 71, -87, -38, 111, 58, -59, -44, 20, -91, 36, 103, -121, 91, 115, 27, 8, -111, -22, -109, -73, 90, -40, -93, 95, 36, 72, -90, 24, -108, -24, 78, -84, 32, -94, 34, 75, -128, 68, -65, -77, -3, -92, 3, -97, 102, 10, -54, 91, 39, 23, 82, -65, -28, -126, -93, -18};
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
    msg.setTimeStamp(0.6412778052058944);
    msg.setSource(64081U);
    msg.setSourceEntity(185U);
    msg.setDestination(45951U);
    msg.setDestinationEntity(141U);
    msg.sys_src.assign("CRKBYGPZEVHEJEUFLNBQXGVDJSJBWFWAQXFZCASXGFCRZUSWUPZOPYHTQINJSVLEERHCVDCMPHFXDNGCNOLFXOCFQXOTAORMESGHWGBVLUIDDSMAADPPQDSHWPYRIENZGKXNJEKUFNLLRKTJVKJEBIWCHXSYJQZAUTKWUNPQTAYBRGZJRHHPXDMYIMIWRYRIQLMSMCOOCNZKIUGODTKKBNHALIOWGMMQOSVZZFKYLYQUBXATBVPIV");
    msg.sys_dst.assign("ZWZSLAESTTIXZROECOKBFJSBAKCUZAOKPRWQNAJMTPABDZPNGVGZCXZWLWQOKJUXAEIYVBPYURNHTFWYIINRTYVEMCATCQYGPWKK");
    msg.flags = 170U;
    const signed char tmp_msg_0[] = {-45, 104, -113, -98, 82, -45, 117, 76, 94, -34, 31, -38, 7, -114, 6, 73, 30, 36, 3, 19, -4, -82, 71, -48, -116, -4, 86, 51, 124, -85, 47, 61, 117, 96, -84, -75, -32, 114, -17, 104, -61, 14, -13, -2, -64, 81, 34, -111, 120, -32, 97, -30, -38, -42, 27, 122, 111, 70, -122, 43, 43, 119, -26, 118, 32, 27, -26, 87, -58, 4, -71, 109, -79, -92, 9, 3, -77, -120, 28, -64, 89, 97, 52, -21, 27, 35, -42, -45, 25, 119, -36, 64, -20, -91, 70, -103, 34, 21, -90, 20, 44, -52, 118, 43, -98, 73, 101, -123};
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
    msg.setTimeStamp(0.3563234353825099);
    msg.setSource(15109U);
    msg.setSourceEntity(103U);
    msg.setDestination(56950U);
    msg.setDestinationEntity(222U);
    msg.sys_src.assign("KIDNVHNWSGGMXXLYYTEZUFDJZZAZHJTERVMDFXSDBVZWUVCOPFGQFQCDCFMQKQLAZOWFGOENVYBCLCJDKMSIKLTXWRNTJMMTH");
    msg.sys_dst.assign("CBKOXNTWFKUYOLFQCWPGXAHKNRFIEMRKRIWFHLISBARIUZJVQVJYVYGAIVZZFDNIUNEBBCDRDPGWTOZWXGNSTBLQPLTWDLTAWHJYQJEKGBYEFOJOMKNEOCVKBTRAVLHQDHPEMHHQMCPFILYTSJZUAXKQVHXBTSKRTZLRJPVDAYUQEGMDZGSWPNXGFLJGXUYUIAOMDXUSMOEEVNRUACCGMJMBUDYWZSCSHWMTPOLEQFZJBSOXV");
    msg.flags = 165U;
    const signed char tmp_msg_0[] = {84, -57, -6, -11, -44, 126, -4, -112, 28, -52, -46, -115, 86, 122, -38, -104, -72, -83, -80, 9, -102, -30, -39, -3, 39, -93, 6, 0, 96, 11, 37, -93, -128, 55, 19, -12, -107, -99, 27, 47, -126, -41, -108, 110, 7, 13, 63, -48, -72, 92, -85, 122, -56, -60, -95, 76, 67, 63, -65, 8, -12, 42, -95, 77, 30, -11, 73, -8, -112, -80, -53, 46, -15, 71, 113, -42, -119, 117, -15, -62, -120, -24, 43, -25, -74, 61, 37, -20, -104, 28, -109, -66, -29, -27, -81, 40, 41, 112, 67, 63, 44, 62, 52, -47, -13, -102, 56, 99, 0, 121, 30, 21, -55, -2, -89, -120, 11, 79, -119, 32, 51, 2, 13, -25, -73, -121, -9, -108, 51, -54, 11, 79, -76, -111, -29, 11, 71, 117, -112, -109};
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
    msg.setTimeStamp(0.7391216652285272);
    msg.setSource(34388U);
    msg.setSourceEntity(233U);
    msg.setDestination(58159U);
    msg.setDestinationEntity(139U);
    msg.sys_src.assign("MAOUWDIJMWWVIFEUTKUYLBQGSFCRTTTDSPRMOSOZVKOZMAUJYOGLGPJWBJUAHXTHQBHSTBEKNZQHKJPSFODLNWVDVFAROYRNNHHWLICSTEXKWMKXMPDIXVUCKSHQVSPHEIDCFMRVRDQKNZEWUANWSJTXCCBCPXJTRQLMCKRHGOUMARGORHNVNEDAMIXFIAZSUWQGTYCYLAXCZJIADFULQNOVIBYYXBYBY");
    msg.sys_dst.assign("RHFDJMKISPJVHXELULQJCIXQDFCYMVUCLFZZPRRSJTAGRMNHCSKPQOHNPUWWYSIFHINLWYCTJGFEEERTVINVBHLHBKFUJBGYMAODPQPEMYNQXUCMKWODWGISYCIKVDBLOTYXMWQWOGELAZREKBOIFVXZXOEZWURVSTTCUHOEWDSDAQHGBIOINXFHKXEMMSYJUQBADAKGGTPPPBOYGKBUNGZNBDCXWVTVPFDKFARTJLRYS");
    msg.flags = 108U;
    const signed char tmp_msg_0[] = {-12, -90, -75, 48, 87, -106, -18, 31, 85, -81, 17, 94, -64, 14, -54, -62, -111, 0, -54, 55, 15, -4, 73, -24, 116, -46, -76, -84, -124, 10, 108, 90, -116, -11, -113, -89, 16, -91, -72, -103, -28, -116, 24, 2, -94, -83, -102, -46, 20, -103, 9, 15, -28, 30, -74, -32, 16, 113, 20, -109, -51, 22, -55, -24, 77, 13, 121, -79, 27, -9, -36, -17, -59, -116, -111, -104, 114, 110, -75, 118, -13, -112, 51, 22, 68, -75, -59, -70, -2, 37, -37, -3, 6, -96, 115, -96, 44, 34, -33, 45, 14, 1, -58, 69, -3, -18, -63, -2, 45, -120, 54, -29, -102, -52, 36, 54, 51, 31, -94, 78, -5, 71, -26, 78, 20, -75, -45, -46, -112, -25, -92, 123, -24, 104, -35, -64, 100, 99, 17, -93, -1, -49, -3, 115, 110, -4, -45, -105, 14, 1, -99, -21, 28, 71, -36, 112, 123, -122, -110, -84, 86, 52, 15, -23, 101, -87, -117, 44, 89, -110, -31, 26, 96, -35, -17, -111, 102, 37, -3, -118, 14, -116, -82, 20, -21, -92, 33, -24, 94, -57, -42, -107, 77, -76, -81, -103, -116, 47, 107};
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
    msg.setTimeStamp(0.8119243560289253);
    msg.setSource(11718U);
    msg.setSourceEntity(5U);
    msg.setDestination(14907U);
    msg.setDestinationEntity(158U);
    msg.seq = 28804U;
    msg.value = 7U;
    msg.error.assign("FSAGLILIKALVXWXQZOLAHYVRZAEIKFBMCTSWHTRBDDCNXQEIPQSELRDFYXJUKNCKZBSJIGPINUAXXQYBDCQFLSYAKFOMNAEWWWVPEUDPCSBERDVWTHJIOQTQOKLCGYKFWVDJPPFOPAOVJYPLMSREYDO");

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
    msg.setTimeStamp(0.17365573039147397);
    msg.setSource(17875U);
    msg.setSourceEntity(147U);
    msg.setDestination(7091U);
    msg.setDestinationEntity(253U);
    msg.seq = 54774U;
    msg.value = 74U;
    msg.error.assign("WVJWZZAAHULMIBTOJWFRGLTVXVROCYWDNZYOVIQVOYXIQRLHUWSKWVRPNSXBHPDBGFYULBARAIFJMBCRDUDTDPBEAGGSCLTDCYLJDQAMGNFZMNSXSNJRHVVWKKQEPOTHQEFHWUNPBZDENJEBEXSKGQVEOYDFCGIMXELYRJTXM");

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
    msg.setTimeStamp(0.7706237438363273);
    msg.setSource(2614U);
    msg.setSourceEntity(7U);
    msg.setDestination(6057U);
    msg.setDestinationEntity(95U);
    msg.seq = 24043U;
    msg.value = 22U;
    msg.error.assign("SDPTOYIYDBVZZBLXDVVJFXGDVZJOUJFRMHVQUWSAIPCQLSALYNPLQSSKZAGIDYKBHVAHGTENMHKGZXRGLUVBQBPOASZZUHNCTKEIJLMQEMUNXNUFNJZXTVRSHDPDSWFOPDFBRKGCIOJERJFXTAPALOKLTEYCHIAGTTZLUHCEYBWCTKSFTYQFOEFHPEWMWMBHJUJ");

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
    msg.setTimeStamp(0.4168005779624132);
    msg.setSource(40375U);
    msg.setSourceEntity(91U);
    msg.setDestination(18582U);
    msg.setDestinationEntity(201U);
    msg.seq = 12169U;
    msg.sys.assign("XMDROQYOSBTEONSLAAEOKLFZWGDZGMLIMJCTCVXEHUQZWEQHPJEVIMVXRZDEIQGGPMKQPWHUWSQUBFZJVYMQCLKHIDHRLIOEVTDFBTRIUZRIETHGGXSFKASBWULKURFTAYOLJDGJQDCJIWHGJOEQNWAYQYCNKPXFWBFUYIPNPAYCLPBGICSH");
    msg.value = 0.07645948457132934;

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
    msg.setTimeStamp(0.5174285423147263);
    msg.setSource(12267U);
    msg.setSourceEntity(62U);
    msg.setDestination(18660U);
    msg.setDestinationEntity(58U);
    msg.seq = 48049U;
    msg.sys.assign("OVVMQYWNIHZXNKJFCQSFIPVFZUPWBAYDELBSRLYJVEXUKUMNNJMGJCGGTFFAOQBOGJRTSDLKAWYONWNKMKFVWHJJTIUMCZQUWYIZDZLRLLGSPZTJEOXIROEUGFHYQGBQNPXCZCGZLUKLPPYHPTVGC");
    msg.value = 0.22674264011036527;

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
    msg.setTimeStamp(0.8157530885920313);
    msg.setSource(22665U);
    msg.setSourceEntity(248U);
    msg.setDestination(63542U);
    msg.setDestinationEntity(131U);
    msg.seq = 17402U;
    msg.sys.assign("GCICKQXPUGTHNSLBDUCVFHCIOQMWMAYZURJRJDGNTGTBAIZASMVRWOWDPHJMNVNNBMKFIFKUCGRKANMLRXVFOOVPSFNGXZXKQJKLUGJWTVSBAMNJUIJOXHTEGIRCTURWHIXERQUXRHTBTUYAPJZXAKFPFDHMFHTYFEOQBCXEYJLEEKPTVYYSEDSUPLODWKWBHOVDMDLF");
    msg.value = 0.4257311237597091;

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
    msg.setTimeStamp(0.01998583842126067);
    msg.setSource(19361U);
    msg.setSourceEntity(192U);
    msg.setDestination(63625U);
    msg.setDestinationEntity(82U);
    msg.seq = 18560U;
    msg.sys_dst.assign("GTDDQXKWXNSGCILNYWAJQIOPVGTXAEMDFKLBCQSCZMYAZIFAOJUDSCRQPPJTJBAUGAYWBLPTHEKWSKTOZNUVYZEDVRDFXBZFKHMMCRAJXBLERJMCJKBXNOGPGWKHQHROODHVSIYSFWWNSWFNCLDLVHBVOQUIGMQFPJFTXCBLBVVPHKVQIEZPYUXGUNNWNMXWRTUACZVDPEOGTMUEZLXTFYTROUGLKM");
    msg.timeout = 0.7296589847717614;

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
    msg.setTimeStamp(0.7239262233573338);
    msg.setSource(24506U);
    msg.setSourceEntity(20U);
    msg.setDestination(16984U);
    msg.setDestinationEntity(50U);
    msg.seq = 597U;
    msg.sys_dst.assign("XNWKINMAZRTWEIFWELPYNHBUOVHVRIOACGXSYQCCOHYJDPRRWZYWDVCMXELJRAQBVPTXZMPFZZGZMFNBEJIJAKSUYDHODAIYBDLXMMSIOZRANLBXVTAFGZOKJKEXVUISEVZMQNORKGQDHNLNLFITRBYWASIJVUEPASUXTGPEUTQUSKHINQEJVPSQPJGDVTGUDOGCHRGYGZEYMJ");
    msg.timeout = 0.4545379762975118;

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
    msg.setTimeStamp(0.9178407689025894);
    msg.setSource(59555U);
    msg.setSourceEntity(133U);
    msg.setDestination(44966U);
    msg.setDestinationEntity(198U);
    msg.seq = 20521U;
    msg.sys_dst.assign("MWQUMYBAJDQINXXKDLKAIBRSWFSTQMJCYXEXIAOLZTLZOIIYGFSPYVSYOMHEAVQNQHTDTJ");
    msg.timeout = 0.4041545143190616;

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
    msg.setTimeStamp(0.11547762252853122);
    msg.setSource(39272U);
    msg.setSourceEntity(21U);
    msg.setDestination(29720U);
    msg.setDestinationEntity(17U);
    msg.action = 195U;
    msg.longain = 0.6480444801197333;
    msg.latgain = 0.09122609973287843;
    msg.bondthick = 2389687964U;
    msg.leadgain = 0.8109862763476495;
    msg.deconflgain = 0.36822720868259706;

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
    msg.setTimeStamp(0.048573636340440984);
    msg.setSource(57067U);
    msg.setSourceEntity(138U);
    msg.setDestination(44963U);
    msg.setDestinationEntity(16U);
    msg.action = 88U;
    msg.longain = 0.23968401942788176;
    msg.latgain = 0.3241567393125022;
    msg.bondthick = 925218122U;
    msg.leadgain = 0.4259662864161796;
    msg.deconflgain = 0.8610061904236029;

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
    msg.setTimeStamp(0.27998126122518185);
    msg.setSource(41596U);
    msg.setSourceEntity(8U);
    msg.setDestination(22123U);
    msg.setDestinationEntity(15U);
    msg.action = 229U;
    msg.longain = 0.1336358859397222;
    msg.latgain = 0.5447174859380414;
    msg.bondthick = 1683169556U;
    msg.leadgain = 0.980344891554366;
    msg.deconflgain = 0.7381723824770466;

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
    msg.setTimeStamp(0.6266005007935593);
    msg.setSource(13933U);
    msg.setSourceEntity(221U);
    msg.setDestination(64181U);
    msg.setDestinationEntity(172U);
    msg.err_mean = 0.8172115508171116;
    msg.dist_min_abs = 0.980017837776396;
    msg.dist_min_mean = 0.12205375735209523;

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
    msg.setTimeStamp(0.5148487067788313);
    msg.setSource(54432U);
    msg.setSourceEntity(127U);
    msg.setDestination(55131U);
    msg.setDestinationEntity(161U);
    msg.err_mean = 0.5307168042103686;
    msg.dist_min_abs = 0.8653193886447121;
    msg.dist_min_mean = 0.9245975833349517;

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
    msg.setTimeStamp(0.7704167650867391);
    msg.setSource(64874U);
    msg.setSourceEntity(23U);
    msg.setDestination(25142U);
    msg.setDestinationEntity(92U);
    msg.err_mean = 0.8343622382021622;
    msg.dist_min_abs = 0.027670897558551344;
    msg.dist_min_mean = 0.5573598169783037;

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
    msg.setTimeStamp(0.17255626464056018);
    msg.setSource(9690U);
    msg.setSourceEntity(191U);
    msg.setDestination(4464U);
    msg.setDestinationEntity(58U);
    msg.action = 47U;
    msg.lon_gain = 0.31063909868706285;
    msg.lat_gain = 0.8857275773538184;
    msg.bond_thick = 0.6336338810660023;
    msg.lead_gain = 0.635974981704476;
    msg.deconfl_gain = 0.23698346721359154;
    msg.accel_switch_gain = 0.46307563160612275;
    msg.safe_dist = 0.9103856630046153;
    msg.deconflict_offset = 0.32811028702590794;
    msg.accel_safe_margin = 0.22305193943775847;
    msg.accel_lim_x = 0.00946175023052287;

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
    msg.setTimeStamp(0.3880455095394436);
    msg.setSource(18704U);
    msg.setSourceEntity(50U);
    msg.setDestination(42625U);
    msg.setDestinationEntity(57U);
    msg.action = 200U;
    msg.lon_gain = 0.21655604816025975;
    msg.lat_gain = 0.448918409331052;
    msg.bond_thick = 0.98140364231351;
    msg.lead_gain = 0.8722647881427734;
    msg.deconfl_gain = 0.12991246259229283;
    msg.accel_switch_gain = 0.8903440682232655;
    msg.safe_dist = 0.6401151543285543;
    msg.deconflict_offset = 0.730668797382723;
    msg.accel_safe_margin = 0.11293952869581647;
    msg.accel_lim_x = 0.29913867236376646;

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
    msg.setTimeStamp(0.9896825154726766);
    msg.setSource(60964U);
    msg.setSourceEntity(115U);
    msg.setDestination(44087U);
    msg.setDestinationEntity(237U);
    msg.action = 40U;
    msg.lon_gain = 0.5967240305857345;
    msg.lat_gain = 0.0997881204568285;
    msg.bond_thick = 0.3880626766361961;
    msg.lead_gain = 0.6257561550832187;
    msg.deconfl_gain = 0.47180303585995564;
    msg.accel_switch_gain = 0.3382176469348229;
    msg.safe_dist = 0.31778162031730284;
    msg.deconflict_offset = 0.4496025415078234;
    msg.accel_safe_margin = 0.7912311864285506;
    msg.accel_lim_x = 0.42209318512983707;

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
    msg.setTimeStamp(0.4076311982223725);
    msg.setSource(2240U);
    msg.setSourceEntity(202U);
    msg.setDestination(15247U);
    msg.setDestinationEntity(72U);
    msg.type = 177U;
    msg.op = 194U;
    msg.err_mean = 0.06967911956272577;
    msg.dist_min_abs = 0.6547727699808328;
    msg.dist_min_mean = 0.713674077618814;
    msg.roll_rate_mean = 0.5497453820242858;
    msg.time = 0.5722026268627954;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 184U;
    tmp_msg_0.lon_gain = 0.6411161628037013;
    tmp_msg_0.lat_gain = 0.5619555249572725;
    tmp_msg_0.bond_thick = 0.6258965679746902;
    tmp_msg_0.lead_gain = 0.7210031869052796;
    tmp_msg_0.deconfl_gain = 0.5324719603688989;
    tmp_msg_0.accel_switch_gain = 0.963731755329454;
    tmp_msg_0.safe_dist = 0.5098657630288266;
    tmp_msg_0.deconflict_offset = 0.5615735258320745;
    tmp_msg_0.accel_safe_margin = 0.4723652973704471;
    tmp_msg_0.accel_lim_x = 0.5606314235421144;
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
    msg.setTimeStamp(0.25204788576279236);
    msg.setSource(55519U);
    msg.setSourceEntity(254U);
    msg.setDestination(58166U);
    msg.setDestinationEntity(223U);
    msg.type = 41U;
    msg.op = 137U;
    msg.err_mean = 0.22703941600005895;
    msg.dist_min_abs = 0.5805937459889648;
    msg.dist_min_mean = 0.5048480399879471;
    msg.roll_rate_mean = 0.6412932128598956;
    msg.time = 0.16823439951040242;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 157U;
    tmp_msg_0.lon_gain = 0.1054150413995073;
    tmp_msg_0.lat_gain = 0.021334044040767663;
    tmp_msg_0.bond_thick = 0.3899842132307314;
    tmp_msg_0.lead_gain = 0.011198195031289826;
    tmp_msg_0.deconfl_gain = 0.5299634745554659;
    tmp_msg_0.accel_switch_gain = 0.6268052594831249;
    tmp_msg_0.safe_dist = 0.45363595042015004;
    tmp_msg_0.deconflict_offset = 0.4518775536119348;
    tmp_msg_0.accel_safe_margin = 0.461348471313472;
    tmp_msg_0.accel_lim_x = 0.2501767512746108;
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
    msg.setTimeStamp(0.5026356264169984);
    msg.setSource(51712U);
    msg.setSourceEntity(128U);
    msg.setDestination(3766U);
    msg.setDestinationEntity(37U);
    msg.type = 74U;
    msg.op = 90U;
    msg.err_mean = 0.24302422179118244;
    msg.dist_min_abs = 0.6734385081938977;
    msg.dist_min_mean = 0.130575651493386;
    msg.roll_rate_mean = 0.6099825692363751;
    msg.time = 0.8554742214561328;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 174U;
    tmp_msg_0.lon_gain = 0.5498684462015104;
    tmp_msg_0.lat_gain = 0.9139649178922296;
    tmp_msg_0.bond_thick = 0.3806715899710271;
    tmp_msg_0.lead_gain = 0.8857679076393431;
    tmp_msg_0.deconfl_gain = 0.7092637373104927;
    tmp_msg_0.accel_switch_gain = 0.051281417187604705;
    tmp_msg_0.safe_dist = 0.6616966831269716;
    tmp_msg_0.deconflict_offset = 0.9476555909580808;
    tmp_msg_0.accel_safe_margin = 0.8891623470645256;
    tmp_msg_0.accel_lim_x = 0.6268681412404602;
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
    msg.setTimeStamp(0.22829610188154958);
    msg.setSource(28944U);
    msg.setSourceEntity(113U);
    msg.setDestination(46735U);
    msg.setDestinationEntity(65U);
    msg.lat = 0.9839862925355518;
    msg.lon = 0.1408784837692808;
    msg.eta = 3782743023U;
    msg.duration = 7282U;

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
    msg.setTimeStamp(0.7974963189945803);
    msg.setSource(15435U);
    msg.setSourceEntity(214U);
    msg.setDestination(21438U);
    msg.setDestinationEntity(194U);
    msg.lat = 0.9323348226521525;
    msg.lon = 0.7620625337404252;
    msg.eta = 1039373198U;
    msg.duration = 6641U;

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
    msg.setTimeStamp(0.3609644107777734);
    msg.setSource(2706U);
    msg.setSourceEntity(141U);
    msg.setDestination(5070U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.029354584036817677;
    msg.lon = 0.19273349017852548;
    msg.eta = 1233125128U;
    msg.duration = 48537U;

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
    msg.setTimeStamp(0.20014277895057941);
    msg.setSource(29718U);
    msg.setSourceEntity(55U);
    msg.setDestination(13009U);
    msg.setDestinationEntity(183U);
    msg.plan_id = 19625U;

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
    msg.setTimeStamp(0.0878947479044434);
    msg.setSource(31499U);
    msg.setSourceEntity(189U);
    msg.setDestination(8397U);
    msg.setDestinationEntity(7U);
    msg.plan_id = 11102U;

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
    msg.setTimeStamp(0.8436773762218855);
    msg.setSource(29552U);
    msg.setSourceEntity(76U);
    msg.setDestination(61313U);
    msg.setDestinationEntity(69U);
    msg.plan_id = 56428U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.6122793009802964;
    tmp_msg_0.lon = 0.811831284248688;
    tmp_msg_0.eta = 3064555368U;
    tmp_msg_0.duration = 14874U;
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
    msg.setTimeStamp(0.22907408087000647);
    msg.setSource(44102U);
    msg.setSourceEntity(2U);
    msg.setDestination(29217U);
    msg.setDestinationEntity(181U);
    msg.type = 136U;
    msg.command = 4U;
    msg.settings.assign("FXPHFTRIKTGNDEETAVDIBFOJRCJBNFLPMSVCOCKKUOFCWOAKVTSISUYAFZXHCCDLNZVMEUXWQMXVGPOAUZBNKJYFUBGXQYKJNBYYLYQGHCQXISYLPPMHBQGUBIVLOIQGJCGPRRMUWHNCDJZXVFLROIPWATNYXGPZEAOBROSCTMLYVSWPHQR");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 43456U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.9701872429010998;
    tmp_tmp_msg_0_0.lon = 0.5062264906138779;
    tmp_tmp_msg_0_0.eta = 11827698U;
    tmp_tmp_msg_0_0.duration = 25647U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("BDPIRQKESMLMDNEUJXYHDTTMVBPPIFJFYDLROZZSNLEOZXQSHEJQIHOVZKZJVFNOKEGNWCZJLOQEADWALZFCOHKUMWOIXAIKLTQMSEARUMUCZYSAQHNJIYYHQSABUGFRHLIBOFHFBEU");

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
    msg.setTimeStamp(0.468814037592139);
    msg.setSource(6104U);
    msg.setSourceEntity(16U);
    msg.setDestination(14343U);
    msg.setDestinationEntity(205U);
    msg.type = 5U;
    msg.command = 78U;
    msg.settings.assign("ASWRYVCUBXVYPMWWOPRIVZRBPOQUOSIXORZJKTYGXYNCKBUQXKDTZUMUGGTGOAYTVNFVINQUQPRMIRSGYAFGULCKKTXNDIGWM");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 11048U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("LYTGOGXHCNHVDCTRWWSHXGNXUFHMQOJXQZSBPYQIIVYYQZZEIKEQBRHBVDLGBDJYICKKEFKNNUSVAUJQYXKTZIVKFISVOCRKRMS");

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
    msg.setTimeStamp(0.3506801828718956);
    msg.setSource(7048U);
    msg.setSourceEntity(236U);
    msg.setDestination(4384U);
    msg.setDestinationEntity(92U);
    msg.type = 251U;
    msg.command = 114U;
    msg.settings.assign("EYNZRTXDLAAMWKCLAYGQNQHOFSGBZSULIZKPXHPXPVWWILWVXEQRJACAATNPWIKCXKFIMPENUXRUYSRWCJONLDXGKGJZYSGUCPPECVSFASSVCZWWIADAUMYUOTIROMJDBPGYROVWHHIJIBVLDGIEDBGQOMTMMYBDYSUFXSFXUCJTBGNOQEKLLVHFHBFJBDONZRKVN");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 31401U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("GGTRCLQTCKGQGWNYQBACQYQHWPLEACSEJVTHVEJMWPAQCURXZECXVZGIELBROTGOUBMYKXHHXGRTXWKSMKIJNDDQRHKYIKBFPBEHOMYBFHNQEACHRMFPJDOXRQDUWLIMMBAIOSCJ");

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
    msg.setTimeStamp(0.2577998191970129);
    msg.setSource(51520U);
    msg.setSourceEntity(150U);
    msg.setDestination(2653U);
    msg.setDestinationEntity(68U);
    msg.state = 197U;
    msg.plan_id = 33235U;
    msg.wpt_id = 194U;
    msg.settings_chk = 43602U;

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
    msg.setTimeStamp(0.5202348167659818);
    msg.setSource(27180U);
    msg.setSourceEntity(240U);
    msg.setDestination(54871U);
    msg.setDestinationEntity(48U);
    msg.state = 23U;
    msg.plan_id = 51879U;
    msg.wpt_id = 23U;
    msg.settings_chk = 32119U;

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
    msg.setTimeStamp(0.6712297025351828);
    msg.setSource(29584U);
    msg.setSourceEntity(186U);
    msg.setDestination(60611U);
    msg.setDestinationEntity(18U);
    msg.state = 104U;
    msg.plan_id = 55797U;
    msg.wpt_id = 141U;
    msg.settings_chk = 50786U;

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
    msg.setTimeStamp(0.4745065389736379);
    msg.setSource(63591U);
    msg.setSourceEntity(205U);
    msg.setDestination(16791U);
    msg.setDestinationEntity(114U);
    msg.uid = 62U;
    msg.frag_number = 199U;
    msg.num_frags = 79U;
    const signed char tmp_msg_0[] = {118, -42, 82, 30, -83, -125, -38, 33, -72, -10, 38, -5, -50, 16, -43, -40, 4, -3, -100, -57, 75, 101, 3, -17, 85, 120, 51, 108, 104, -9, -82, 47, 96, 28, -66, -81, 106, -81, -31, 91, -61};
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
    msg.setTimeStamp(0.8227182381378971);
    msg.setSource(60152U);
    msg.setSourceEntity(237U);
    msg.setDestination(46148U);
    msg.setDestinationEntity(161U);
    msg.uid = 126U;
    msg.frag_number = 218U;
    msg.num_frags = 45U;
    const signed char tmp_msg_0[] = {23, -56, 83, -123, -102, 40, 115, -6, -85, 33, 84, -72, 124, -112, -61, -13, 16, -66, 62, -68, 47, -13, 42, -24, 103, 94, -101, -73, -110, -52, 101, 90, -79, 45, -47, 84, -77, 17, 57, 87, -39, 57, -49, -82, -26, -43, -48, -52, -36, -85, -118, 83, -116, 12, -33, 20, -2, 112, 105, -69, -35, -35, -95, 114, 98, -31, 70, -118, 6, 49, 69, -8, -116, 48, 95, 123, 1, -26, 79, 10, -32, -102, -60, 106, -58, 102, -56, 45, 12, 91, -65, -84, 31, 116, 116, -1, 105, -99, -110, -85, -22, -125, -102, -27, 72, -80, -123, -92, -90, 38, -123, 123, 108, -111, -74, -73, 107, -89, 88, -18, -59, -69, -128, 75, -2, 97, -59, -103, 126, -118, -21, -36, 40, -120, -23, 88, -77, 96, 2, 57, -10, 70, -95, 32, 63, -112, 76, 37, 71, -21, -100, 69, 76, 103, -80, 112, -73, -61, -68, -126, 115, 106, -98, -111, 79, -127, -32, 5, -20, -94, 93, 92, 122, 33, 18, 33, -7, -112, -114, -117, -77, -4, -45, 98, -77, 8, -95, 68, 7, -125, 34, 85, -110, 42, 101, 14, 126, -18, -59, -75, -93, 67, 4, -26, 113, -59, 107, 114, 120, -23, 15, 69, 4, 109, -81, 2, -71, -33, 101, 59, 60, -124, -77, 126, 8, 52};
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
    msg.setTimeStamp(0.6300091013772536);
    msg.setSource(14510U);
    msg.setSourceEntity(178U);
    msg.setDestination(61103U);
    msg.setDestinationEntity(85U);
    msg.uid = 81U;
    msg.frag_number = 176U;
    msg.num_frags = 11U;
    const signed char tmp_msg_0[] = {-7, 34, -25, -112, 4, 32, 83, 117, -95, -21, -25, -28, -6, -56, -39, 72, 90, 41, -126, -103, 104, 52, -78, -62, -83, 73, 42, -71, 35, -60, -24, 37, 2, -88, -24, -48, -13, -105, 12, 64, 61, 40, 29, -51, 3, -95, -84, 122, -125, -9, -52, -66, -18, 100, 86, -22, 107, -123, -94, 10, 66, 31, -54, 65, -63, -36, -28, -46, 47, 75, 35, -15, -74, -55, -114, -17, -1, 42, -74, 112, -77, 95, -62, 24, -6, -125, 12, -61, 76, 59, -17, 116, 47, 95, 81, 23, 76, 46, 5, -121, 13, -40, 107, -41, -70, -124, -99, -112, -6, -80, 2, 115, 104};
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
    msg.setTimeStamp(0.019871305501172776);
    msg.setSource(22317U);
    msg.setSourceEntity(120U);
    msg.setDestination(60758U);
    msg.setDestinationEntity(106U);
    msg.uid = 231U;
    msg.op = 233U;
    msg.frag_ids.assign("ISPOEYMECUAVOJZJUZTUYZVLNGAMKLFJFIHRNLQRNTJUHVYDAZPETMXOTRMZQOKPIQKQPOBOTNVTIDPVYMQGTKSCVTHDGXRSFBEOEHEKERALWMUKZANWJFPZDZQRDWVCRWWBVWGLALKJOMYEWVSDCIIEFPBKIUXZJQQSLBPLALGAA");

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
    msg.setTimeStamp(0.9606110773738143);
    msg.setSource(14760U);
    msg.setSourceEntity(120U);
    msg.setDestination(33213U);
    msg.setDestinationEntity(35U);
    msg.uid = 117U;
    msg.op = 71U;
    msg.frag_ids.assign("PZTUAQBSIBALPCFGXQYTRHZRUSHDWAIYRDUHWDQHGEDSITOMCWHORZFBFCKNEPXEDMVMXJKBCKMGOFUNGKEKPDOYXZTNXJRCYTJLYAIFBIYWBEGQUXTNHSADZDGLAWSKENBXLSAHGOURVLUM");

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
    msg.setTimeStamp(0.9574109987450394);
    msg.setSource(31473U);
    msg.setSourceEntity(32U);
    msg.setDestination(64997U);
    msg.setDestinationEntity(75U);
    msg.uid = 119U;
    msg.op = 29U;
    msg.frag_ids.assign("YASZWASPICTNMNMCKCDFGSSYLSQHJQQGYBBP");

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
    msg.setTimeStamp(0.5368044898554095);
    msg.setSource(46614U);
    msg.setSourceEntity(127U);
    msg.setDestination(60947U);
    msg.setDestinationEntity(33U);
    msg.content_type.assign("KTXRVBSSVDDKOMQMWPJUEWSZDQENBEUXYVNOMQTYXFKTUKJDVHZQYNFSIFNTKLMQXMWWCMFCYEAUPIYICWJSGVFOHABQXEJLMCAKGUELWRLHXLBGZNYIKDGBOSHWZSOPJMY");
    const signed char tmp_msg_0[] = {-125, -37, 119, -26, 93, 90, -11, 118, 20, -28, 25, -121, 98, -19, 16, -121, 109, 63, -11, -76, 70, 97, 8, 5, -127, 115, -71, -14, 41, -30, 28, 122, 119, -32, -17, 111, 111, -20, -62, -115, -78, 99, -27, -45, 98, -60, -50, -77, -27, -37, -114, -67, -1, -63, 46, -33, 40, 21, 35, -100, -14, -23, 85, 42, 64, 26, 12, 112, 52, -30, -101, -1, -26, 91, 70, -6, -128, 83, 109, -51, 47, -128, -91, 69, 112, 79, -39, -126, -66, -66, 109, -116, -89, -22, 57, -112, -62, 59, 104, -39, -91, 44, -12, 44, 8, 74, -72, 33, -66, -81, 108, -22, -29, 40, -5, 59, -5, 120, 74, -44};
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
    msg.setTimeStamp(0.5171979158211304);
    msg.setSource(5161U);
    msg.setSourceEntity(93U);
    msg.setDestination(13424U);
    msg.setDestinationEntity(139U);
    msg.content_type.assign("YTZLHLADHVJYBNPBWZKWPAXVMGDBQVTSIMRGHKSEIZVRGEYNZCDGIUMHNSMVZJOLXHLSTTSVUKWJGWIMOHCXGOQMQQLUKYCSWJYCJCTUQKJKIOEX");
    const signed char tmp_msg_0[] = {-1, -28, 87, 49, -126, -45, -86, 65, -21, -5, 45, -36, 79, -88, -119, 73, 72, -107, -113, -87, -71, 0, -115, 114, -54, -99, 63, -3, 119, -34, 76, 10, -37, -82, -87, -33, 51, -23, 57, 8, 72, -57, 5, -112, 28, -62, -120, 47, 53, -6, 11, -26, 18, -117, 44, -124, -3, 95, 9, -63, 90, -77, 85, 124, -114, 69, -52, 53, 110, 94, -61, 27, 16, -40, -93, 117, 6, -124, 25, -121, -127, 119, 74, 29, -122, -72, 16, -73, 110, 119, -12, 12, -17, -40, -72, 102, -79, 3, -107, 76, 52, 10, 77, 60, 35, 8, -100, -112, 59, -43, -123, -51, -23, -113, 43, 17, -117, 98, 9, 29, -93, -109, 105, 58, 44, -16, -111, -102, 24, 47, 97, 44, 118, 87, 99, -57, 88, 114, -63, 90, -24, 58, -92, -79, 17, -101, 113, -35};
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
    msg.setTimeStamp(0.8361667751463958);
    msg.setSource(2421U);
    msg.setSourceEntity(254U);
    msg.setDestination(29381U);
    msg.setDestinationEntity(89U);
    msg.content_type.assign("VWHTQSWHCPQADIMUTUNWINLZZKXBGKSKQHTVMINCDJCCSOKZHVNOWZMXWAPREJANSGLZACTZABSFHUJNXVJHMPJEXYOYTSBYDBOGMOMKGTXJORRLRQENBEVYCPUIQCGKDTDFATHLBZDLRH");
    const signed char tmp_msg_0[] = {-90, -38, -46, 110, -102, -19, -37, -108, 100, 22, -46, -9, -110, -27, 44, -119, -122, -99, -43, -67, -1, -100, -45, 28, 124, 39, -39, 84, 105, 114, -6, -82, 122, 21, -85, 38, -32, -17, -44, 56, -9, -57, 68, -103, -32, 22, 31, 17, 64, 122, -97, -18, 38, 39, -12, -45, -43, 93, -107, -109, -117, 17, -11, -95, -36, -49, -98, 75, 68, -49, -90, 53, -96, -40, -106, -63, -15, -101, -104, -1, 29, 76, 19, -69, -24, 76, 33, -37, -67, -12, 75, -93, -93, -118, 83, 73, 121, -41, 83, 83, 14, 4, -73, -91, -43, -86, 21, -108, 53, 114, -128, -12, -81, 31, 56, -96, 1, 53, 19, 41, 89, -13, -28, -47, 24, -8, -108, 94, -53, -121, -3, 107, -98, -2, -82, 114, -57, -25, -30, 7, -48, -123, -11, 39, -5, -34, -124, 123, 42, 100, -116, 31, 96, 32, 95, -15, -9, -124, -36, -29, 104, -67, -120, -17, -85, -15, -61, 76, -49, -116, 55, -93, 107, 86, -34, -21, 27, 104, 16, 50, 64, 65, -79, -28, 56, -79, 46, -33, -120, 42, -48, -99, -52, -117, 31, -2, 73, 126, -39, 18, 79, 65, 122, -19, 98, -38, -81, 92, -105, 11, -13, 63, 48, 112, -24, -46, -127, -62, 86, 67, -34, -36, 0, -83, -93, 77, 123, 125, -105, -14, 106, -96, -113, -61, 17, 38, -64, -60, -53, -55};
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
    msg.setTimeStamp(0.4729808101208046);
    msg.setSource(55282U);
    msg.setSourceEntity(98U);
    msg.setDestination(16431U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.43881552408387714);
    msg.setSource(32831U);
    msg.setSourceEntity(216U);
    msg.setDestination(27911U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.17573441379437205);
    msg.setSource(30611U);
    msg.setSourceEntity(93U);
    msg.setDestination(28468U);
    msg.setDestinationEntity(140U);

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
    msg.setTimeStamp(0.2010330304059489);
    msg.setSource(3720U);
    msg.setSourceEntity(13U);
    msg.setDestination(63025U);
    msg.setDestinationEntity(244U);
    msg.target = 5381U;
    msg.bearing = 0.6439107702125357;
    msg.elevation = 0.6003310668782345;

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
    msg.setTimeStamp(0.2605611855877874);
    msg.setSource(31202U);
    msg.setSourceEntity(249U);
    msg.setDestination(53593U);
    msg.setDestinationEntity(151U);
    msg.target = 50132U;
    msg.bearing = 0.6465114234777073;
    msg.elevation = 0.9094215694135973;

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
    msg.setTimeStamp(0.36513548881601876);
    msg.setSource(16241U);
    msg.setSourceEntity(70U);
    msg.setDestination(55415U);
    msg.setDestinationEntity(252U);
    msg.target = 62877U;
    msg.bearing = 0.3298382461961986;
    msg.elevation = 0.1089932976402802;

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
    msg.setTimeStamp(0.2879548981244062);
    msg.setSource(64395U);
    msg.setSourceEntity(35U);
    msg.setDestination(55222U);
    msg.setDestinationEntity(20U);
    msg.target = 38031U;
    msg.x = 0.6269747018339559;
    msg.y = 0.13190242944938102;
    msg.z = 0.4877986490295181;

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
    msg.setTimeStamp(0.313360345299027);
    msg.setSource(20343U);
    msg.setSourceEntity(73U);
    msg.setDestination(53391U);
    msg.setDestinationEntity(45U);
    msg.target = 34600U;
    msg.x = 0.2882462582147335;
    msg.y = 0.5294253055253817;
    msg.z = 0.6152074836232978;

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
    msg.setTimeStamp(0.7755790815908274);
    msg.setSource(41427U);
    msg.setSourceEntity(20U);
    msg.setDestination(28704U);
    msg.setDestinationEntity(142U);
    msg.target = 60700U;
    msg.x = 0.04999795546288599;
    msg.y = 0.22645707878643184;
    msg.z = 0.03449662053001523;

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
    msg.setTimeStamp(0.5868806913515537);
    msg.setSource(30108U);
    msg.setSourceEntity(25U);
    msg.setDestination(6115U);
    msg.setDestinationEntity(103U);
    msg.target = 51176U;
    msg.lat = 0.678874263772767;
    msg.lon = 0.25487357041095693;
    msg.z_units = 227U;
    msg.z = 0.6614856879808819;

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
    msg.setTimeStamp(0.6907923908100736);
    msg.setSource(280U);
    msg.setSourceEntity(159U);
    msg.setDestination(46552U);
    msg.setDestinationEntity(38U);
    msg.target = 20176U;
    msg.lat = 0.5784722202637245;
    msg.lon = 0.422514875756018;
    msg.z_units = 198U;
    msg.z = 0.5849391739177057;

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
    msg.setTimeStamp(0.2569440033352386);
    msg.setSource(43210U);
    msg.setSourceEntity(5U);
    msg.setDestination(59706U);
    msg.setDestinationEntity(216U);
    msg.target = 40695U;
    msg.lat = 0.9835912571807033;
    msg.lon = 0.7609798134695905;
    msg.z_units = 236U;
    msg.z = 0.9160081876193614;

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
    msg.setTimeStamp(0.3814205744050586);
    msg.setSource(6939U);
    msg.setSourceEntity(149U);
    msg.setDestination(55614U);
    msg.setDestinationEntity(48U);
    msg.locale.assign("LIFWLSVENSGOOVTAUTNVDRPASMYZEBQRWCNAXRSLLOQXBEMJUAXJKIWZUFTWSUBOMZHBDHYQQGXKAUJTGQUSWCUWYPVOMKWFBHFBEQTTCFNVYRYYUWSVKEJCAVOVBCZTRNRZGKQPGFHIGDORLFXQQITENNOILMZUPXHLHECYFJLBMDGDFAPMEAXLVWBDIWCYPRGREMQBCHISPSHCZJZNASJFNKJRGIYJDDZZM");
    const signed char tmp_msg_0[] = {20, 20, -90, -102, 97, -12, 98, -50, -9, -115, -38, -91, 60, -116, -103, 71, -106, 52, 8, 41, 122, -115, 39, 1, -102, 73, -57, 27, 57, 107, 122, 126, 57, 51, 8, 57, -81, 22, 94, 10, -94, -54, 94, 26, -52, -32, -79, 104, -63, -57, -117, 115, -39, -32, 42, -80, -77, -48, -96, 95, 37, 48, -119, 44, -82, -41, 20, 9, -127, 42, -24, 63, 13, -26, -25, 117, -17, 111, 34, 92, 81, -17, -101, 45, -5, -18, -43, -42, 65, -57, -97, -127, 71, -106, -114, -114, 124, 56, -101, 43, 8, -125, -78, -18, -49, 119, -49, 85, 20, 31, 95, 116, -24, 41, -58, 10, 24, -66, 50, 36, 73, 125, 101, 48, -115, -77, -73, -66, -48, 30, 95, 35, 104, -21};
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
    msg.setTimeStamp(0.4488330629813455);
    msg.setSource(43279U);
    msg.setSourceEntity(227U);
    msg.setDestination(40412U);
    msg.setDestinationEntity(12U);
    msg.locale.assign("TJKCPHPACQJXTGVRSKESFDHJWLBJRMBVCWUUVJXCNKYMBDMJEPFDEVYSIZVSOUDBGZZYRNQPJGBMFZQHNBZNHVHZMERHDKCKDMKGUPVKIHOXETGWDRWUK");
    const signed char tmp_msg_0[] = {44, 117, 37, -8, 100, -22, -1, 60, -60, 124, -14, 10, 81, -98, -33, -70, -64, -125, -45, -33, -70, 24, -88, 90, 45, 62, 95, -49, 120, -42, 1, -124, 76, 32, -78, 56, 125, 16, 73, 76, 39, 98, 79, 88, -11, 0, 27, 107, -28, 77, -4, -59, -28, -16, 110, 45, 30, 117, 31, -18, 110, 103, 46, -98, 9, 4, 122, 93, -29, -95, -58, -103, 121, 6, 30, 73, -125, -48, 7, -3, -69, 27, 19, 54, 17, 19, -113, 66, -128, -93, -75, 84};
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
    msg.setTimeStamp(0.45855972291878266);
    msg.setSource(6440U);
    msg.setSourceEntity(218U);
    msg.setDestination(60002U);
    msg.setDestinationEntity(88U);
    msg.locale.assign("HZJBSVBLMWDSVZCTHQL");
    const signed char tmp_msg_0[] = {-84, 24, 111, -55, 62, 31, -89, -29, 85, 60, 55, 106, -41, 41, -57, 96, 32, -32, -55, 17, -107, 116, 43, -42, -116, 94, 80, 53, -100, -17, -70, 112, 92, -70, -12, 105, -97, 27, 72, -3, -80, -76, 120, -27, -33, 98, -110, -18, 59, 126, -98, -27, 8, 117, 104, -42, -67, 113, 63, 27, -26, 48, -38, -91, -63, 53, -102, -111, 97, -66, 45, -46, 113, 97, 118, -79, 113, 2, -4, -9, 50, -67, -28, -41, 99, 82, -72, -42, 41, 33, -111, 102, -47, -60, 115, -63, -17, -25, 79, -103, 103, -93, -32, -108, 114, -93, 49, -28, 61, -14, -28, 58, -44, 65, 96, -128, 44, -79, 97, -103, 18};
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
    msg.setTimeStamp(0.131007895218488);
    msg.setSource(28980U);
    msg.setSourceEntity(253U);
    msg.setDestination(16177U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.3736563747631485);
    msg.setSource(56053U);
    msg.setSourceEntity(77U);
    msg.setDestination(64241U);
    msg.setDestinationEntity(245U);

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
    msg.setTimeStamp(0.1560832874270064);
    msg.setSource(3735U);
    msg.setSourceEntity(15U);
    msg.setDestination(19933U);
    msg.setDestinationEntity(149U);

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
    msg.setTimeStamp(0.19933889759933643);
    msg.setSource(9350U);
    msg.setSourceEntity(254U);
    msg.setDestination(50932U);
    msg.setDestinationEntity(145U);
    msg.camid = 232U;
    msg.x = 24782U;
    msg.y = 14149U;

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
    msg.setTimeStamp(0.8623324652338241);
    msg.setSource(10385U);
    msg.setSourceEntity(13U);
    msg.setDestination(53478U);
    msg.setDestinationEntity(63U);
    msg.camid = 115U;
    msg.x = 43187U;
    msg.y = 33545U;

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
    msg.setTimeStamp(0.5255886369540956);
    msg.setSource(35424U);
    msg.setSourceEntity(207U);
    msg.setDestination(58621U);
    msg.setDestinationEntity(16U);
    msg.camid = 82U;
    msg.x = 15341U;
    msg.y = 20583U;

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
    msg.setTimeStamp(0.3112251619989135);
    msg.setSource(30143U);
    msg.setSourceEntity(121U);
    msg.setDestination(38123U);
    msg.setDestinationEntity(124U);
    msg.camid = 3U;
    msg.x = 7583U;
    msg.y = 18153U;

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
    msg.setTimeStamp(0.8827105042647082);
    msg.setSource(10618U);
    msg.setSourceEntity(153U);
    msg.setDestination(37059U);
    msg.setDestinationEntity(86U);
    msg.camid = 159U;
    msg.x = 20231U;
    msg.y = 9109U;

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
    msg.setTimeStamp(0.007394821857118816);
    msg.setSource(29234U);
    msg.setSourceEntity(120U);
    msg.setDestination(56117U);
    msg.setDestinationEntity(87U);
    msg.camid = 73U;
    msg.x = 14905U;
    msg.y = 59194U;

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
    msg.setTimeStamp(0.4689834609647413);
    msg.setSource(38086U);
    msg.setSourceEntity(110U);
    msg.setDestination(48158U);
    msg.setDestinationEntity(217U);
    msg.tracking = 93U;
    msg.lat = 0.03575649640783629;
    msg.lon = 0.9632213719871157;
    msg.x = 0.9707242521442176;
    msg.y = 0.32255253719185517;
    msg.z = 0.9954908303591409;

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
    msg.setTimeStamp(0.043864055962234194);
    msg.setSource(65479U);
    msg.setSourceEntity(1U);
    msg.setDestination(49133U);
    msg.setDestinationEntity(17U);
    msg.tracking = 176U;
    msg.lat = 0.3792841068542331;
    msg.lon = 0.21864989471471163;
    msg.x = 0.7323985723429193;
    msg.y = 0.13743293806984314;
    msg.z = 0.18123096363339486;

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
    msg.setTimeStamp(0.6456901000027535);
    msg.setSource(61308U);
    msg.setSourceEntity(31U);
    msg.setDestination(10218U);
    msg.setDestinationEntity(37U);
    msg.tracking = 29U;
    msg.lat = 0.49252502148541244;
    msg.lon = 0.3907486825029074;
    msg.x = 0.8010735167838196;
    msg.y = 0.4305233050291546;
    msg.z = 0.25080486254931667;

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
    msg.setTimeStamp(0.24541790033178867);
    msg.setSource(11754U);
    msg.setSourceEntity(55U);
    msg.setDestination(58786U);
    msg.setDestinationEntity(206U);
    msg.target.assign("NBLELTNNPUQWZUGAVYPGFPWDMFIKBEFBMQHHMYZCQEASOLPNBSKXXPJOJXMAPFTTFKEDTCHFOHARBXDNQLLQZJRGMZJDBZVJIKRZSSXCCWGNKQRZJZRTHFSMDOXJETDHLURQ");
    msg.lbearing = 0.1730721576184886;
    msg.lelevation = 0.3719375081404479;
    msg.bearing = 0.28958068799138137;
    msg.elevation = 0.914908228885566;
    msg.phi = 0.37396081439711115;
    msg.theta = 0.16848244660137113;
    msg.psi = 0.03224304853989357;
    msg.accuracy = 0.8572432186173058;

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
    msg.setTimeStamp(0.7865649194655667);
    msg.setSource(61899U);
    msg.setSourceEntity(225U);
    msg.setDestination(33885U);
    msg.setDestinationEntity(42U);
    msg.target.assign("YRAAPQUPIJEDFCKCCXUQFAAYGRCZLKRFRLOGXTMMPVDENYGXIDKGVEYZJIQLFQVKRZOWTUUTXXUXSEQTYHSETLPIQTTZYYHUONWMMANXBRKJZPATHNWSSSRFGOMCAOJVFDJBQEGSHYPZJEZDPGHKBXVVKZBBIIVTSNHWCOOSSXCMLEFULBMB");
    msg.lbearing = 0.09968033942937349;
    msg.lelevation = 0.5881314069214763;
    msg.bearing = 0.24868538486541236;
    msg.elevation = 0.968725853293772;
    msg.phi = 0.07441267384290362;
    msg.theta = 0.18338202389788982;
    msg.psi = 0.9110067475935686;
    msg.accuracy = 0.7114054510259892;

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
    msg.setTimeStamp(0.30849729883316956);
    msg.setSource(549U);
    msg.setSourceEntity(33U);
    msg.setDestination(56800U);
    msg.setDestinationEntity(198U);
    msg.target.assign("VBFJXFZLQPJMIGZRRSFOPRBHTVZPLRQSGTSAWWPMOIALXLGQVMUSVKYNHIULQJLAXZOKNWEYJROUGOFFYIGPDDHCWGTYTERMGNBZEFJPBVHJLMHSAQBAK");
    msg.lbearing = 0.30176729207162056;
    msg.lelevation = 0.13025792790041701;
    msg.bearing = 0.043957537709846894;
    msg.elevation = 0.5598651513311648;
    msg.phi = 0.34659492398496716;
    msg.theta = 0.04584023113299862;
    msg.psi = 0.8715087959936807;
    msg.accuracy = 0.6295340435388113;

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
    msg.setTimeStamp(0.18490699400076072);
    msg.setSource(65486U);
    msg.setSourceEntity(29U);
    msg.setDestination(25196U);
    msg.setDestinationEntity(32U);
    msg.target.assign("QNMLGJNGGICKKDAWPVEMPMIUCVKLJXLTJ");
    msg.x = 0.20608785978128974;
    msg.y = 0.5689309213092438;
    msg.z = 0.5674516337405127;
    msg.n = 0.08963580033736229;
    msg.e = 0.21494148523718404;
    msg.d = 0.8291324139639935;
    msg.phi = 0.8712057068351421;
    msg.theta = 0.9319388661936043;
    msg.psi = 0.6101067159012635;
    msg.accuracy = 0.22063768420939378;

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
    msg.setTimeStamp(0.7903468951061962);
    msg.setSource(55281U);
    msg.setSourceEntity(0U);
    msg.setDestination(41182U);
    msg.setDestinationEntity(9U);
    msg.target.assign("HACGCFCVQICPAHMQNFQDEOKTJTKAUVELMSIZXJMQGBIXURBNOPJMQTWIPGINHIMPHRTUALRXKBXZAJHVHXPCNKVZYUQMBDJKTZGSWVGD");
    msg.x = 0.821939129164236;
    msg.y = 0.7818382296593228;
    msg.z = 0.6250639321061783;
    msg.n = 0.5682188587846655;
    msg.e = 0.40582417550237293;
    msg.d = 0.6287574176236314;
    msg.phi = 0.3701043130198687;
    msg.theta = 0.19223814109691684;
    msg.psi = 0.9605056900144502;
    msg.accuracy = 0.10119658571747203;

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
    msg.setTimeStamp(0.7219546538114336);
    msg.setSource(25210U);
    msg.setSourceEntity(98U);
    msg.setDestination(42792U);
    msg.setDestinationEntity(98U);
    msg.target.assign("RXNZOGFYGFPHCQRZQARDIQWEITSPMLPZSTQHTGOIBEUYMLIXOBVKLTEDFKIIUNMKPRSPUGHJPGKAVFMPESEGBEYSRAWOVNHVMIYEFBJJWDFKLLJADHJNPBZXOZYTNSOQQZUBWXQVHHYMGNAMXDDXJHDOMWJSCICKMRRCQFYBAOAFNGHFTUCKVLZCJLKJTTWIGUPTKUEWMBCACKRJSVFDWAYWPVXECDNQVHBVZXCLNY");
    msg.x = 0.47673128405035314;
    msg.y = 0.617574941178598;
    msg.z = 0.18930428743622152;
    msg.n = 0.05864392316693223;
    msg.e = 0.7199457769493569;
    msg.d = 0.4435839550499028;
    msg.phi = 0.23797311461598136;
    msg.theta = 0.35208794069340743;
    msg.psi = 0.17832875527936098;
    msg.accuracy = 0.18131980861157582;

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
    msg.setTimeStamp(0.19951624534116963);
    msg.setSource(16361U);
    msg.setSourceEntity(102U);
    msg.setDestination(21874U);
    msg.setDestinationEntity(149U);
    msg.target.assign("SPVSTFIVCBXCVAKOZXDCLRFGIULPVYFRQIFEMHEHYSFOQGNWQIITVPOZMMNAOEPWRDEAVTRFRKCNNZHPIEZQOXDKGYQWUPVKHABQTHKNTMOPTZMSHUJHYWJBMISKULUKRZBCGXGQJROLGHSBXHFZNBNUYELVNU");
    msg.lat = 0.17161785913862193;
    msg.lon = 0.7882932679421216;
    msg.z_units = 166U;
    msg.z = 0.15412621647887093;
    msg.accuracy = 0.6824373069734451;

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
    msg.setTimeStamp(0.23815304757517541);
    msg.setSource(30103U);
    msg.setSourceEntity(89U);
    msg.setDestination(475U);
    msg.setDestinationEntity(42U);
    msg.target.assign("CNHGYDQLIKSERCYZIJWVWFUVSAMMCAAOCNSAFYPMLGZONWTLHPNRULQJXEPVDKNHMLMZFVRONWROFHTYBMPIXYYFSWZRXRWWYTXCHACZZISXCOIASEUGOSJVZXOSUGYIOTQDTBUXBKQETEKHGQKSEKVQXTUNCFHICSPP");
    msg.lat = 0.7171254371711919;
    msg.lon = 0.42324663666655016;
    msg.z_units = 153U;
    msg.z = 0.19614356033151514;
    msg.accuracy = 0.27818363822996384;

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
    msg.setTimeStamp(0.8236525255788418);
    msg.setSource(28814U);
    msg.setSourceEntity(109U);
    msg.setDestination(50126U);
    msg.setDestinationEntity(73U);
    msg.target.assign("LSTFHSYABGLVQTWYFRZAURPWXCDNINILGDRXCFOLPWPNAZPGOFHUEPGAKXVYRKUMJCYNVVQILZQKABJZHRCWBDBSYDDUMMVGMHAKHXTLHPWOSTGQIIGXMRMW");
    msg.lat = 0.08333485194706258;
    msg.lon = 0.5508467261601558;
    msg.z_units = 194U;
    msg.z = 0.4442233961123133;
    msg.accuracy = 0.9680781641480701;

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
    msg.setTimeStamp(0.04446562628166362);
    msg.setSource(34867U);
    msg.setSourceEntity(70U);
    msg.setDestination(60449U);
    msg.setDestinationEntity(98U);
    msg.name.assign("WSKXNCZQMMZPQOLHGLPAM");
    msg.lat = 0.2884687899917395;
    msg.lon = 0.7426837225820184;
    msg.z = 0.675363889249289;
    msg.z_units = 56U;

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
    msg.setTimeStamp(0.14747410463786137);
    msg.setSource(51463U);
    msg.setSourceEntity(219U);
    msg.setDestination(15610U);
    msg.setDestinationEntity(63U);
    msg.name.assign("BQYGEZWCLOTVGACFAUPZAWVRAAVGHZONSKYRWMKBBQHNXPGTREXJQGWGJOWCHPVTBFMNNPEQGDGPSBPHKSNXKYMUDFLEOZRNMKFERKFSTXCVCUOFIFIVLZACCYMI");
    msg.lat = 0.6394395705474645;
    msg.lon = 0.8111418783693138;
    msg.z = 0.6509459694411709;
    msg.z_units = 179U;

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
    msg.setTimeStamp(0.9811790364809354);
    msg.setSource(14514U);
    msg.setSourceEntity(216U);
    msg.setDestination(2011U);
    msg.setDestinationEntity(139U);
    msg.name.assign("QEVOPJRADUTMHSERWWCZRTWPLQTSHKICMXQVGHUDRHESIWBZCTVOVOBNXZSVVZLJFUPRSXYKTUIVFLYHEJGBBAGHHABRLITTLIMDGHCDESULNXSYCYMOQUBBJGWDZIPUTTAFMEQZAPNQHOTKJGWOMRUJBPMXYXGXOICXJFIFYCLONASFNLKVHZRRCN");
    msg.lat = 0.3154880200450364;
    msg.lon = 0.32920578251658195;
    msg.z = 0.561988047736977;
    msg.z_units = 198U;

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
    msg.setTimeStamp(0.6623343711710932);
    msg.setSource(22850U);
    msg.setSourceEntity(137U);
    msg.setDestination(4914U);
    msg.setDestinationEntity(9U);
    msg.op = 157U;

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
    msg.setTimeStamp(0.639494457021092);
    msg.setSource(6855U);
    msg.setSourceEntity(122U);
    msg.setDestination(56897U);
    msg.setDestinationEntity(24U);
    msg.op = 63U;

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
    msg.setTimeStamp(0.5954847600216089);
    msg.setSource(27211U);
    msg.setSourceEntity(142U);
    msg.setDestination(55169U);
    msg.setDestinationEntity(178U);
    msg.op = 174U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("CVBOYSMRZXLELHGKPNFWFZSIHRPKOPSDNTEOTVBJIDJUPEHRVINGDLBJDVKRFXCQALGNWLDUNYFBVEVCDPGGDWQZNRWYAMHUYFAOXPLQSSCNPDCEGPUMMKUNFIJSAHBVDJVRYZAICXZSFTZUQRMMNMLELYHWUSOAAWOWCMR");
    tmp_msg_0.lat = 0.9409371362784408;
    tmp_msg_0.lon = 0.006578826567430918;
    tmp_msg_0.z = 0.7054140628217852;
    tmp_msg_0.z_units = 250U;
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
    msg.setTimeStamp(0.19810705445173726);
    msg.setSource(65266U);
    msg.setSourceEntity(70U);
    msg.setDestination(15892U);
    msg.setDestinationEntity(16U);
    msg.value = 0.30165870655812144;
    msg.type = 85U;

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
    msg.setTimeStamp(0.10192104029048898);
    msg.setSource(5872U);
    msg.setSourceEntity(218U);
    msg.setDestination(25519U);
    msg.setDestinationEntity(168U);
    msg.value = 0.33457174992517746;
    msg.type = 132U;

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
    msg.setTimeStamp(0.6371346070454931);
    msg.setSource(44074U);
    msg.setSourceEntity(37U);
    msg.setDestination(47139U);
    msg.setDestinationEntity(146U);
    msg.value = 0.07444779228044451;
    msg.type = 178U;

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
    msg.setTimeStamp(0.17519372026103297);
    msg.setSource(64350U);
    msg.setSourceEntity(235U);
    msg.setDestination(63051U);
    msg.setDestinationEntity(74U);
    msg.value = 0.30893099100496024;

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
    msg.setTimeStamp(0.6069697364822887);
    msg.setSource(1482U);
    msg.setSourceEntity(32U);
    msg.setDestination(19969U);
    msg.setDestinationEntity(213U);
    msg.value = 0.9607296058850663;

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
    msg.setTimeStamp(0.6338721031566825);
    msg.setSource(59605U);
    msg.setSourceEntity(205U);
    msg.setDestination(2498U);
    msg.setDestinationEntity(70U);
    msg.value = 0.28706831412263445;

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
    msg.setTimeStamp(0.6704540672134702);
    msg.setSource(26386U);
    msg.setSourceEntity(190U);
    msg.setDestination(1129U);
    msg.setDestinationEntity(63U);
    msg.timestamp_last_service = 0.2939762419797296;
    msg.time_next_service = 0.6969953777269114;
    msg.time_motor_next_service = 0.7759781157521105;
    msg.time_idle_ground = 0.2739975742417242;
    msg.time_idle_air = 0.6497393098026278;
    msg.time_idle_water = 0.9203872761100808;
    msg.time_idle_underwater = 0.6003578288544137;
    msg.time_idle_unknown = 0.014530673867836241;
    msg.time_motor_ground = 0.9865796308319456;
    msg.time_motor_air = 0.5159946745655258;
    msg.time_motor_water = 0.6541376187152297;
    msg.time_motor_underwater = 0.5776000138573174;
    msg.time_motor_unknown = 0.025234262783830674;
    msg.rpm_min = 15092;
    msg.rpm_max = -25663;
    msg.depth_max = 0.39959122683143844;

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
    msg.setTimeStamp(0.03183936446064517);
    msg.setSource(8162U);
    msg.setSourceEntity(18U);
    msg.setDestination(10014U);
    msg.setDestinationEntity(48U);
    msg.timestamp_last_service = 0.3589583151983361;
    msg.time_next_service = 0.48238936248771747;
    msg.time_motor_next_service = 0.8534702115163957;
    msg.time_idle_ground = 0.8493952013425407;
    msg.time_idle_air = 0.45443284639676274;
    msg.time_idle_water = 0.8615406111653114;
    msg.time_idle_underwater = 0.7697179781356736;
    msg.time_idle_unknown = 0.4238411374462615;
    msg.time_motor_ground = 0.7117358167674658;
    msg.time_motor_air = 0.25267960068522144;
    msg.time_motor_water = 0.7625268851518588;
    msg.time_motor_underwater = 0.7115441837362093;
    msg.time_motor_unknown = 0.9112016571451742;
    msg.rpm_min = -9992;
    msg.rpm_max = 18433;
    msg.depth_max = 0.855549980552936;

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
    msg.setTimeStamp(0.566020330293848);
    msg.setSource(2202U);
    msg.setSourceEntity(24U);
    msg.setDestination(21906U);
    msg.setDestinationEntity(46U);
    msg.timestamp_last_service = 0.33160478825049444;
    msg.time_next_service = 0.5654316570528166;
    msg.time_motor_next_service = 0.7955725142121202;
    msg.time_idle_ground = 0.5763968426075629;
    msg.time_idle_air = 0.2984017904985493;
    msg.time_idle_water = 0.21571692493649575;
    msg.time_idle_underwater = 0.1335239302709751;
    msg.time_idle_unknown = 0.4489060790754156;
    msg.time_motor_ground = 0.6248403265358671;
    msg.time_motor_air = 0.041188445551186614;
    msg.time_motor_water = 0.5476702520902736;
    msg.time_motor_underwater = 0.44902559696593447;
    msg.time_motor_unknown = 0.6172759039733879;
    msg.rpm_min = -8414;
    msg.rpm_max = 22336;
    msg.depth_max = 0.8872189524575317;

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
    msg.setTimeStamp(0.4382713671730465);
    msg.setSource(14125U);
    msg.setSourceEntity(27U);
    msg.setDestination(59405U);
    msg.setDestinationEntity(35U);
    msg.severity = 112U;
    msg.text.assign("SYVPITJDLCJMGMSRWNCMTSJEXUKFCRYSFHHOEZXQNZCKDHGTRLIFARDTHGSGADLNEBNYJEXQQFTKZZBWYRMIGNKVWLVTKAGZLUOSHWBHFUPAJOWIMYZFQPKBAMVEMSQXXBTUVNTLJPUPQOPLOCORLICOOAJNGTMWLGEWQRFFNBBKDUPYESSYVJKMRYKAXXOPGDUZWFGJPCPIXLJKCVAHHEHVTAUI");

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
    msg.setTimeStamp(0.9971792013466716);
    msg.setSource(15431U);
    msg.setSourceEntity(222U);
    msg.setDestination(44030U);
    msg.setDestinationEntity(1U);
    msg.severity = 235U;
    msg.text.assign("QVCHPWYXTMJFXYTSHYJIJREPWOHVCPNAPUSGVYICYOBKRIDKGCMGEIWNDQDURTAFIXWWKIDMIBJXUKOZNFSKYBIBOQHMGNACSW");

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
    msg.setTimeStamp(0.07838118548026773);
    msg.setSource(64878U);
    msg.setSourceEntity(162U);
    msg.setDestination(60344U);
    msg.setDestinationEntity(86U);
    msg.severity = 173U;
    msg.text.assign("YINLGCABHKAIWOQUBIRFEIOQQJNVUAGBFXHLBMXGPEKVFDMXUKWZEUDHVQMZDHWRMPHVJSNTJNTEJDIILQMXLPDRVCBTM");

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
    msg.setTimeStamp(0.006743147367231916);
    msg.setSource(1266U);
    msg.setSourceEntity(30U);
    msg.setDestination(14844U);
    msg.setDestinationEntity(91U);
    msg.channel = 123;
    msg.value = 1852980232;
    msg.gain = 61U;

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
    msg.setTimeStamp(0.657410735377933);
    msg.setSource(1137U);
    msg.setSourceEntity(228U);
    msg.setDestination(47792U);
    msg.setDestinationEntity(240U);
    msg.channel = -97;
    msg.value = 549105693;
    msg.gain = 219U;

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
    msg.setTimeStamp(0.1941368592365461);
    msg.setSource(33720U);
    msg.setSourceEntity(155U);
    msg.setDestination(51276U);
    msg.setDestinationEntity(68U);
    msg.channel = -78;
    msg.value = 972954339;
    msg.gain = 224U;

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
    msg.setTimeStamp(0.28467304386493086);
    msg.setSource(21961U);
    msg.setSourceEntity(216U);
    msg.setDestination(7836U);
    msg.setDestinationEntity(146U);
    msg.ch01 = 0.21483943950257256;
    msg.ch02 = 0.38606129263877786;
    msg.ch03 = 0.5614193504204515;
    msg.ch04 = 0.14961898690221953;
    msg.ch05 = 0.30023016939079894;
    msg.ch06 = 0.8034929082538198;
    msg.ch07 = 0.3218296511888157;
    msg.ch08 = 0.9078877335851168;
    msg.ch09 = 0.13423507281763825;
    msg.ch10 = 0.20744198923031965;
    msg.ch11 = 0.5697013291745215;
    msg.ch12 = 0.9899781378079772;
    msg.ch13 = 0.9632696857321447;
    msg.ch14 = 0.7810844018401267;
    msg.ch15 = 0.004234304114643539;
    msg.ch16 = 0.7394211900989642;

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
    msg.setTimeStamp(0.04663674856714495);
    msg.setSource(17496U);
    msg.setSourceEntity(40U);
    msg.setDestination(20512U);
    msg.setDestinationEntity(94U);
    msg.ch01 = 0.1974926329579194;
    msg.ch02 = 0.9524951013425677;
    msg.ch03 = 0.5360087065961698;
    msg.ch04 = 0.6008253251543179;
    msg.ch05 = 0.22661484283433697;
    msg.ch06 = 0.4588452188125298;
    msg.ch07 = 0.5032935252621705;
    msg.ch08 = 0.8402256217822762;
    msg.ch09 = 0.772357090563645;
    msg.ch10 = 0.18893950143352722;
    msg.ch11 = 0.31109862298583724;
    msg.ch12 = 0.4980774138993189;
    msg.ch13 = 0.00524742443436832;
    msg.ch14 = 0.4296056680354675;
    msg.ch15 = 0.2544523807358642;
    msg.ch16 = 0.5591635565808089;

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
    msg.setTimeStamp(0.16904160183704187);
    msg.setSource(29829U);
    msg.setSourceEntity(28U);
    msg.setDestination(60081U);
    msg.setDestinationEntity(64U);
    msg.ch01 = 0.12230508843163546;
    msg.ch02 = 0.45511657699224783;
    msg.ch03 = 0.45551459336134137;
    msg.ch04 = 0.02605973635803116;
    msg.ch05 = 0.6292122800384651;
    msg.ch06 = 0.2667009428812732;
    msg.ch07 = 0.33197562560004845;
    msg.ch08 = 0.8681484629661596;
    msg.ch09 = 0.21704684609767966;
    msg.ch10 = 0.6025999974854694;
    msg.ch11 = 0.01978329009476132;
    msg.ch12 = 0.609592657166284;
    msg.ch13 = 0.7831783150670555;
    msg.ch14 = 0.2160525341106979;
    msg.ch15 = 0.1355575189692403;
    msg.ch16 = 0.625126284665764;

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
    msg.setTimeStamp(0.42949883337191974);
    msg.setSource(44662U);
    msg.setSourceEntity(18U);
    msg.setDestination(28320U);
    msg.setDestinationEntity(67U);
    msg.op = 30U;
    msg.lat = 0.6704272649214184;
    msg.lon = 0.14495290753896872;
    msg.height = 0.4530589630375339;
    msg.depth = 0.11132203524747153;
    msg.alt = 0.6037849364586997;

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
    msg.setTimeStamp(0.5572079583835079);
    msg.setSource(47011U);
    msg.setSourceEntity(108U);
    msg.setDestination(8414U);
    msg.setDestinationEntity(180U);
    msg.op = 245U;
    msg.lat = 0.639658531413438;
    msg.lon = 0.22563892887618364;
    msg.height = 0.4597965609035214;
    msg.depth = 0.7524748330714233;
    msg.alt = 0.10152944909057726;

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
    msg.setTimeStamp(0.09866657823478886);
    msg.setSource(50059U);
    msg.setSourceEntity(130U);
    msg.setDestination(57879U);
    msg.setDestinationEntity(7U);
    msg.op = 11U;
    msg.lat = 0.019945727085107445;
    msg.lon = 0.1081519955237411;
    msg.height = 0.6813047578023007;
    msg.depth = 0.5729731289163456;
    msg.alt = 0.2236755207070763;

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
    msg.setTimeStamp(0.6481749535069432);
    msg.setSource(25735U);
    msg.setSourceEntity(148U);
    msg.setDestination(2007U);
    msg.setDestinationEntity(67U);
    msg.direction = 0.6321776373629681;
    msg.speed = 0.4491539385926867;
    msg.turbulence = 0.6633810839303418;

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
    msg.setTimeStamp(0.30375500378182263);
    msg.setSource(4260U);
    msg.setSourceEntity(27U);
    msg.setDestination(41375U);
    msg.setDestinationEntity(52U);
    msg.direction = 0.4399130765786259;
    msg.speed = 0.7309679773486728;
    msg.turbulence = 0.9981693712699602;

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
    msg.setTimeStamp(0.2933327788144675);
    msg.setSource(9218U);
    msg.setSourceEntity(24U);
    msg.setDestination(9485U);
    msg.setDestinationEntity(209U);
    msg.direction = 0.0027478441773354234;
    msg.speed = 0.2932988645683626;
    msg.turbulence = 0.629921751934076;

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
    msg.setTimeStamp(0.9086839991339449);
    msg.setSource(33749U);
    msg.setSourceEntity(162U);
    msg.setDestination(48374U);
    msg.setDestinationEntity(108U);
    msg.msg_type.assign("JEBVRIYXVFSDNKXZTAIAOVQWOOFSXJZXPMHUHO");
    msg.sensor_class.assign("VPVJPIFNDPJIGTGYGDNUPQHIJAWCORXWIVYJFEZCQXADBLCOHYZYTULKYSFOBTGCVFXREMJOKN");
    msg.mmsi.assign("IIIEQKDZNBBJMNHJSJSBLXZLYCROAVVEWXARYLPNAPANLXXUQILIROSUTUWFSGENVAVJOYJEMYPQFHQDYHKKOYWGOAGHQPDUTQMWDUDYKMQJOXPDFZKPXFIVTXEYOKGPMO");
    msg.callsign.assign("BOWVADNMMUZGILXDNOYGFCBAEXGFBCGOUYCHWQHOVIIIEGXWSZLSJVWMRTBPOXFLOFNLHKPULNBKXTXYCQDJOMVZIBNWKFFCGWBZRMMNPHAACQHLFYWVNPKLQBSRTQVZQNSAMIUYRAIQUFISLMSQ");
    msg.name.assign("SFMSVINLIGCHAEDUNXQQHGOLKGAIQTHICJOYZKGIBBYNRBZYRJQKDDEKEXIVRQPHBJBVMHXGYLKNOGWCXYCVUOYWCAPABNHFVZIQEZXYFISAZWZWKSWRLAWIPAMMNVSQZMYOEREXDVVFTTEVOXSSPD");
    msg.nav_status = 186U;
    msg.type_and_cargo = 150U;
    msg.lat = 0.7677190491232251;
    msg.lon = 0.6340382661914165;
    msg.course = 0.5649103757628116;
    msg.speed = 0.9356751965459847;
    msg.dist = 0.46809995153872996;
    msg.a = 0.9640535992945409;
    msg.b = 0.24232442341780136;
    msg.c = 0.6389131062464365;
    msg.d = 0.42690363544189003;
    msg.draught = 0.22698317217623531;

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
    msg.setTimeStamp(0.9594101369622642);
    msg.setSource(5346U);
    msg.setSourceEntity(71U);
    msg.setDestination(33065U);
    msg.setDestinationEntity(244U);
    msg.msg_type.assign("LEDFWQHVYVGVIWNWFPMODRXHNMDXZBESHRHEOGIOTMLPBUIYUHYEJSFOCBZAROSXDXPQZDXTOTJPUQRTFQXAAZDVIZSSYQASPDMKUNTPVYEVNBHZPVUCXBNHXLANZTCYKBUJANYQLQUNKIBHWBGUGWGTKFQJOAACCIKVVVEISKDOCPMRPLYFLKOTFEJGXRSN");
    msg.sensor_class.assign("TVLLZAEBROTMBXLNKPGKHFVBUCBAVKVYMANJFRPNQXDMASZZOCTXGPYIGBHITCSSTMIEYVEVUHUIYKXSHYMEWTEPGLWJU");
    msg.mmsi.assign("UVQOXPTZOEEARHOWRKBHLNDKADEBAZCQSBCWDMKINKZQRVVATXEXMKJPROHLPJEGVNRKJTFSFJQWJAWVVBHZUYGAJZFPRPMUTMISGICGGRFBFNXSQBRLWDZDSQOYEPZHXMPIAEDGAXOBLIEDPLIXXBUGJLMVUYPRWDLDKTKSBCWCFZUXFSZYWHCGTNJVBONRSQAYUCFKZIJMQHYTNOIQVUQYCCETFNOYUFGXWNMIVUJLHGMNP");
    msg.callsign.assign("HVLMJBMLZKJMBUNURLAWNZDQMIEGMONXXAYDHKRBNXTJXKMXKJOHTZYZLKPBWNVVTQELIWSREYFSSHBQRIBTACUEDJGRZQPRZZMCXVUCJCEOPEXGLEIYVSPAWOCTPUDVJGFDFIJAHFYQUVMULXQKKGQGYTZGKZJRAXNNIKDAHORLNSTQDHVUHCPFCHIPNYRWWWUHWSRWOGIKIDFDGVEFOUZACSLFMJP");
    msg.name.assign("YEBWLKXFVZMHFWBAGILQGVXWMYCMPLQPMACVJPFEO");
    msg.nav_status = 39U;
    msg.type_and_cargo = 241U;
    msg.lat = 0.671918138529806;
    msg.lon = 0.8904949075005111;
    msg.course = 0.4988769530088688;
    msg.speed = 0.4700718654559346;
    msg.dist = 0.8507412575072199;
    msg.a = 0.6779692359457917;
    msg.b = 0.13712166772943224;
    msg.c = 0.21430469988719714;
    msg.d = 0.37054653321676356;
    msg.draught = 0.24514874593431324;

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
    msg.setTimeStamp(0.5084146811082287);
    msg.setSource(23869U);
    msg.setSourceEntity(215U);
    msg.setDestination(17649U);
    msg.setDestinationEntity(103U);
    msg.msg_type.assign("RPKHAAZNIIERCFJBVEHTBFUDOKWJGNEIXYUDQCQAFZHBGDLCRTCLBFGFPBNOQPQFWYTBHUQHDMSLEJBRZJMREOVQXGUTPXTGQZTVKBMXCMOVMPUSFARSODWRHJOOKVAEDLCDKXTWDVUFCGUUPTKESAFIJWNXWIVMBIZPYTVANYMASXXSQJGYYCWSAPHARIDKNNYPMUZLUHSPNWVZRHJNZEHVQOBIMWYXMCOFKEJWLRGYLIIJOKCLEKNQT");
    msg.sensor_class.assign("NDUOBWWKCTQZLTFBLKWBXYOUWTUORYSXFLTVEXFEGZXMGSQQJWLRXDOLPFPYXXTUJFPLHPZHJMMEUI");
    msg.mmsi.assign("ZEJJLCEEHUYBOUJVBYFAKRFLTTTCQXCLKVNXYNDQUZPIXIYGSFVPFXHSSOGWABCKHRCSGNUZDZNIBXBLRVUYAOSRMHZJAGWIDGZACWGOPVDCFQKAQVWMRNYCLNHMREMWMTIPWAVZDEKWEDIMEKSUUUFKHTRLACGOLQTFDFWOPZKJGOYLITQVFNQJIAAPOBLTGDEQRJUEHDRGIIQHNSYJDBQR");
    msg.callsign.assign("UHCXBBAGTJGNZTPRIWBMNRFGTOGYHEKYLYJXJQEENBHAQRONKZFCIDMOXZSEDMULQZNVELXNYQLZSKUDYALICORDRLBARFMGMQKJPDXQBDNMNKIWJPFYBGVSRPSZPUVOPREEIAAJSGFOXMOHRZTLFD");
    msg.name.assign("WAZPXHPERQXTNKGYREXFNYEBZYZLUYGFTFWSJEDSEVKPCWIDPTQGXZAIBJYIQKZXSQWOHZNUKVBKMAUNM");
    msg.nav_status = 102U;
    msg.type_and_cargo = 209U;
    msg.lat = 0.5251473367024116;
    msg.lon = 0.3957610861521982;
    msg.course = 0.32260805034512763;
    msg.speed = 0.2782203147020168;
    msg.dist = 0.4748870853530809;
    msg.a = 0.7192065483611423;
    msg.b = 0.09285067012585058;
    msg.c = 0.3961098895697097;
    msg.d = 0.34049556937042336;
    msg.draught = 0.9068249022725033;

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
    msg.setTimeStamp(0.85331232943977);
    msg.setSource(58764U);
    msg.setSourceEntity(226U);
    msg.setDestination(57429U);
    msg.setDestinationEntity(206U);
    msg.depth_at_loc.assign("UXQGBFNWYRBYTOKHTALGAHUZGOBHHJQSYWKPDVTGKQSQLJYVDPWZPACCLNJQVVNBNCNBPVTXYEXBHHPZOMFSFMQDOZZNIGWBCHSVQRLTNXQAXCYJBBCKTIRJGURIYUFUITFLOSUPAKIEWUCOMHDEOIMRZKIMYMLFPAZAWOEJBZYEXWVGF");
    msg.danger.assign("KIOHRESMSLLXYXXYRKTIQETAPAEOQOQUVXWKQISPVJXYNFZJSTTUANMMHRNCVDBAUWLWUFKBOFJCSKEGZJHAGLNPWDCUAUBUNDNZIDMPUYWMHZHFDOWIIIQFFBRCOXLTORNTRAGXWBXVFNPSUXGBCDWWMVQYORWNKGZAFGFTSTHGQZPLTVMLBKACGZUZJEZRESN");

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
    msg.setTimeStamp(0.550462852930204);
    msg.setSource(11864U);
    msg.setSourceEntity(77U);
    msg.setDestination(31167U);
    msg.setDestinationEntity(104U);
    msg.depth_at_loc.assign("PTXYUZMHGAOVOTZHNAPVZEMGSYRBNVOIQXDGXZIBMZEMATWANQOBIYRXQWMQONKTZSGVGAXSFIBKANCSWOPZTMCWOYUQJOLGHSDUECUPDPKRLCKBXOFRPHAEIMMBRETKQVWGEIVTLGFLFHCFJJBMAZWRYYDQCJCDDAVWITHSYHJEJRPCXTTSBQQRZSFIWKONEIQBUYSKCNXKPNKYGUHXWJVHHRDNXDDYLFFUVDI");
    msg.danger.assign("XXLUPJSWCAMYHSDJWXPUZDJAHRPGQOHVFBSOXKGNVTYYZEFEDJPZWZU");

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
    msg.setTimeStamp(0.22207160298413775);
    msg.setSource(35215U);
    msg.setSourceEntity(159U);
    msg.setDestination(29573U);
    msg.setDestinationEntity(149U);
    msg.depth_at_loc.assign("BMINQTDTQPIXATJKLPLBKCPZBHOVZXUUCGNHVMJPOQREBJELVGCIMNXYOFEKGFUPJYWLSIPVACBACAEKZEMYBOARRLSNSYYLUILQASSXNCQRNAH");
    msg.danger.assign("ZIMUBTLKLVKIDSOKXUUYAPUTUOYWNVCQNHJVFZMMJQJJXBOGLHSRTQETJSYOIMVVYUCXLSECIHZBMNBKKCYRDSNCZDKKPLJVBDBWFLF");

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
    msg.setTimeStamp(0.7698459651903385);
    msg.setSource(23013U);
    msg.setSourceEntity(235U);
    msg.setDestination(20390U);
    msg.setDestinationEntity(254U);
    msg.time = 0.11426055865431539;
    msg.x = 0.858120608336309;
    msg.y = 0.7074089343620745;
    msg.z = 0.17983077160700778;

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
    msg.setTimeStamp(0.9776597657143694);
    msg.setSource(20730U);
    msg.setSourceEntity(219U);
    msg.setDestination(35558U);
    msg.setDestinationEntity(211U);
    msg.time = 0.9074341883205534;
    msg.x = 0.6969468322871702;
    msg.y = 0.1541555649955625;
    msg.z = 0.9170775746626684;

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
    msg.setTimeStamp(0.4126074063910965);
    msg.setSource(17511U);
    msg.setSourceEntity(208U);
    msg.setDestination(24213U);
    msg.setDestinationEntity(46U);
    msg.time = 0.71884495067335;
    msg.x = 0.8979259812237342;
    msg.y = 0.7123254023650208;
    msg.z = 0.630018467139986;

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
    msg.setTimeStamp(0.4369032512318116);
    msg.setSource(62222U);
    msg.setSourceEntity(116U);
    msg.setDestination(1430U);
    msg.setDestinationEntity(231U);
    msg.nbeams = 120U;
    msg.ncells = 174U;
    msg.coord_sys = 38U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.25702947119589015;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.5952334073607183;
    tmp_tmp_msg_0_0.amp = 0.7053618048976762;
    tmp_tmp_msg_0_0.cor = 63U;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
    msg.profile.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.8476451545998682);
    msg.setSource(51837U);
    msg.setSourceEntity(32U);
    msg.setDestination(65088U);
    msg.setDestinationEntity(219U);
    msg.nbeams = 6U;
    msg.ncells = 94U;
    msg.coord_sys = 20U;

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
    msg.setTimeStamp(0.5176825233373156);
    msg.setSource(63252U);
    msg.setSourceEntity(178U);
    msg.setDestination(61088U);
    msg.setDestinationEntity(180U);
    msg.nbeams = 44U;
    msg.ncells = 189U;
    msg.coord_sys = 202U;

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
    msg.setTimeStamp(0.6063400776016855);
    msg.setSource(3897U);
    msg.setSourceEntity(148U);
    msg.setDestination(40083U);
    msg.setDestinationEntity(210U);
    msg.cell_position = 0.5998441740986393;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.6120320602089714;
    tmp_msg_0.amp = 0.855285245093175;
    tmp_msg_0.cor = 106U;
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
    msg.setTimeStamp(0.4253752124530028);
    msg.setSource(39030U);
    msg.setSourceEntity(129U);
    msg.setDestination(58464U);
    msg.setDestinationEntity(36U);
    msg.cell_position = 0.8755941117506364;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.5796313471502049;
    tmp_msg_0.amp = 0.9677006724550758;
    tmp_msg_0.cor = 98U;
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
    msg.setTimeStamp(0.18153687828631493);
    msg.setSource(54284U);
    msg.setSourceEntity(148U);
    msg.setDestination(36535U);
    msg.setDestinationEntity(63U);
    msg.cell_position = 0.594682920168302;

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
    msg.setTimeStamp(0.5597987330834399);
    msg.setSource(23845U);
    msg.setSourceEntity(182U);
    msg.setDestination(53218U);
    msg.setDestinationEntity(226U);
    msg.vel = 0.20341262663805837;
    msg.amp = 0.7764654371006562;
    msg.cor = 187U;

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
    msg.setTimeStamp(0.4979712155117365);
    msg.setSource(24256U);
    msg.setSourceEntity(224U);
    msg.setDestination(60181U);
    msg.setDestinationEntity(26U);
    msg.vel = 0.7697156540211705;
    msg.amp = 0.7245805451551691;
    msg.cor = 240U;

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
    msg.setTimeStamp(0.9299616413225461);
    msg.setSource(42021U);
    msg.setSourceEntity(5U);
    msg.setDestination(34399U);
    msg.setDestinationEntity(46U);
    msg.vel = 0.6344017782469856;
    msg.amp = 0.23063916219272684;
    msg.cor = 254U;

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
    msg.setTimeStamp(0.6055769194181468);
    msg.setSource(42040U);
    msg.setSourceEntity(159U);
    msg.setDestination(52185U);
    msg.setDestinationEntity(66U);
    msg.value = 0.7442208497680342;

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
    msg.setTimeStamp(0.6365483900597194);
    msg.setSource(52401U);
    msg.setSourceEntity(168U);
    msg.setDestination(54846U);
    msg.setDestinationEntity(243U);
    msg.value = 0.2479144924038873;

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
    msg.setTimeStamp(0.9941965643366254);
    msg.setSource(17997U);
    msg.setSourceEntity(63U);
    msg.setDestination(38358U);
    msg.setDestinationEntity(241U);
    msg.value = 0.4682852619953456;

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
    msg.setTimeStamp(0.27034005617660906);
    msg.setSource(52308U);
    msg.setSourceEntity(137U);
    msg.setDestination(55392U);
    msg.setDestinationEntity(154U);
    msg.sig_wave_height_hm0 = 0.647402467104659;
    msg.wave_peak_direction = 0.8477414739766163;
    msg.wave_peak_period = 0.8716813476125725;
    msg.wave_height_wind_hm0 = 0.680090546045597;
    msg.wave_height_swell_hm0 = 0.9996631560330886;
    msg.wave_peak_period_wind = 0.9174962615823212;
    msg.wave_peak_period_swell = 0.44294206790118196;
    msg.wave_peak_direction_wind = 0.5304199533636071;
    msg.wave_peak_direction_swell = 0.1816458435125382;
    msg.wave_mean_direction = 0.00333859934937375;
    msg.wave_mean_period_tm02 = 0.003431440952947673;
    msg.wave_height_hmax = 0.613578442468138;
    msg.wave_height_crest = 0.9492935608699851;
    msg.wave_height_trough = 0.20534630729195014;
    msg.wave_period_tmax = 0.8894924524081133;
    msg.wave_period_tz = 0.25641687549024905;
    msg.significant_wave_height_h1_3 = 0.03751979280585449;
    msg.mean_spreading_angle = 0.8978502617907541;
    msg.first_order_spread = 0.5777967098731038;
    msg.long_crestedness_parameters = 0.6658273256384496;
    msg.heading = 0.9866915176050609;
    msg.pitch = 0.9114618442191631;
    msg.roll = 0.4257131368790664;
    msg.external_heading = 0.6341959899606294;
    msg.stdev_heading = 0.6343940775724198;
    msg.stdev_pitch = 0.28314024958419726;
    msg.stdev_roll = 0.9744823496069275;

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
    msg.setTimeStamp(0.2073727974947196);
    msg.setSource(46870U);
    msg.setSourceEntity(64U);
    msg.setDestination(40065U);
    msg.setDestinationEntity(33U);
    msg.sig_wave_height_hm0 = 0.6231138631560486;
    msg.wave_peak_direction = 0.16820946475874465;
    msg.wave_peak_period = 0.5372816745289989;
    msg.wave_height_wind_hm0 = 0.44909976472729807;
    msg.wave_height_swell_hm0 = 0.2217552021806275;
    msg.wave_peak_period_wind = 0.01172152357738565;
    msg.wave_peak_period_swell = 0.5439964556509572;
    msg.wave_peak_direction_wind = 0.38559767190588046;
    msg.wave_peak_direction_swell = 0.7209650269233475;
    msg.wave_mean_direction = 0.8391482623112569;
    msg.wave_mean_period_tm02 = 0.20776235799117226;
    msg.wave_height_hmax = 0.7081685293934672;
    msg.wave_height_crest = 0.017971623042643103;
    msg.wave_height_trough = 0.9914300320844254;
    msg.wave_period_tmax = 0.22373140850151108;
    msg.wave_period_tz = 0.4416273630790116;
    msg.significant_wave_height_h1_3 = 0.20312873625391492;
    msg.mean_spreading_angle = 0.8028911163913016;
    msg.first_order_spread = 0.0717767871170456;
    msg.long_crestedness_parameters = 0.9189059298389539;
    msg.heading = 0.016678249703358294;
    msg.pitch = 0.2510058461587249;
    msg.roll = 0.8608225793042431;
    msg.external_heading = 0.3251079273794911;
    msg.stdev_heading = 0.4091442009991382;
    msg.stdev_pitch = 0.2219685994058359;
    msg.stdev_roll = 0.9202209781856437;

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
    msg.setTimeStamp(0.3770413392533436);
    msg.setSource(24231U);
    msg.setSourceEntity(114U);
    msg.setDestination(34225U);
    msg.setDestinationEntity(148U);
    msg.sig_wave_height_hm0 = 0.31502179196396396;
    msg.wave_peak_direction = 0.10403106222921665;
    msg.wave_peak_period = 0.6714994101672881;
    msg.wave_height_wind_hm0 = 0.30237181913549627;
    msg.wave_height_swell_hm0 = 0.3537891341769438;
    msg.wave_peak_period_wind = 0.06724853984205859;
    msg.wave_peak_period_swell = 0.19892789152277635;
    msg.wave_peak_direction_wind = 0.7878489234196312;
    msg.wave_peak_direction_swell = 0.2540554433982529;
    msg.wave_mean_direction = 0.604976890718036;
    msg.wave_mean_period_tm02 = 0.163689974807248;
    msg.wave_height_hmax = 0.495036110454971;
    msg.wave_height_crest = 0.35574378519763894;
    msg.wave_height_trough = 0.9994509674145909;
    msg.wave_period_tmax = 0.1074729638021018;
    msg.wave_period_tz = 0.37003447508492215;
    msg.significant_wave_height_h1_3 = 0.3800449538564802;
    msg.mean_spreading_angle = 0.05400561069972343;
    msg.first_order_spread = 0.7631095426327158;
    msg.long_crestedness_parameters = 0.7564052387721024;
    msg.heading = 0.10584406979412453;
    msg.pitch = 0.6531237402641501;
    msg.roll = 0.7594704777233975;
    msg.external_heading = 0.9922251889562056;
    msg.stdev_heading = 0.98176519018939;
    msg.stdev_pitch = 0.709580221457357;
    msg.stdev_roll = 0.6034377884348384;

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
    msg.setTimeStamp(0.1730682263963773);
    msg.setSource(43262U);
    msg.setSourceEntity(113U);
    msg.setDestination(9785U);
    msg.setDestinationEntity(100U);
    msg.name.assign("ZKKWYAEFARIFEXJOUPXEKVCJPHLILWGFEKXUCOYRPLBJITFDLDOHPXCGRSQPKLQQPAFBCWAVQPYJXRIJUXHDDVTSVMSHTCTYNEJBAOKUXYLGRWVPSUNLDWDBBGCHZNSWPSUQDVGBQBRWDIQNJEIGRUBOIMUZEKMZMMHAWMNSNLFOBBHVSQZNHKOFIZFFMMUONKVJWRYFGIWYAVMYQNJZCOTCALAZCASXGZJYSUKEOTPXVHCHDZTY");
    msg.value = 55U;

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
    msg.setTimeStamp(0.7535809085015324);
    msg.setSource(18166U);
    msg.setSourceEntity(208U);
    msg.setDestination(19847U);
    msg.setDestinationEntity(183U);
    msg.name.assign("UBDXAGRJAINJPDB");
    msg.value = 231U;

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
    msg.setTimeStamp(0.7963099249191619);
    msg.setSource(4427U);
    msg.setSourceEntity(2U);
    msg.setDestination(26162U);
    msg.setDestinationEntity(192U);
    msg.name.assign("ASAPMIWMAEKXNBUPTNVXYRVOGDZZWXKOCETFCTLCPHDVHBFZMCURVXSSLIQTLHNEARSQSFOHZABOEZWYIKPBSLNKKBGMIOKLJKCI");
    msg.value = 181U;

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
    msg.setTimeStamp(0.7949323142466103);
    msg.setSource(60861U);
    msg.setSourceEntity(75U);
    msg.setDestination(7319U);
    msg.setDestinationEntity(227U);
    msg.name.assign("WYJAJMXUQFAJXQHWBKFEDINMPKEZURITECSWRDWOEJMBFWEOULDHZXLCDCLHGKALNELYLHGGJQNUPFDNBFTBUPPCFMVGGXKCDYXSQHBAJRIBBLATYKHEOMJXTQBVTYKJMRSRNLIWZZOXTIHCHCVVMCANVPXBOWSTLPAEKFTZB");

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
    msg.setTimeStamp(0.4215659497271764);
    msg.setSource(25484U);
    msg.setSourceEntity(152U);
    msg.setDestination(951U);
    msg.setDestinationEntity(128U);
    msg.name.assign("PGXKLMUTLVETMXJUIIJDERLBAJMUQMFSFYQCORMCJNNHHHHPRSASVPPNGXWUALYHECGTWSICVYOJTKRISUIZOKVDNIXKFYNUYYSFFWCNZAAKAKYWXNTMWVLRVSLKJUHOQZGUZMLOQDBUEGEDGWRJWWFZYISERWXFTOQ");

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
    msg.setTimeStamp(0.6606375086429083);
    msg.setSource(7477U);
    msg.setSourceEntity(85U);
    msg.setDestination(60645U);
    msg.setDestinationEntity(147U);
    msg.name.assign("PASTGFKZSZPOQUZMIQVXAOIVNWJDQCROHDGURCNHQTBYOJKAAJSTMLMGZYWFGNTEXZBULHKK");

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
    msg.setTimeStamp(0.818858440779681);
    msg.setSource(61994U);
    msg.setSourceEntity(89U);
    msg.setDestination(7639U);
    msg.setDestinationEntity(232U);
    msg.name.assign("RWRXCSFCZTHYFNAOEIPRBWRQBIIZEZNGIHNGZLHZVVEUCTDBBPXPOGMVHLJZMYIWITFSXMXLSDEMANKOUQHWMBARJTQRHFPQVDCGPJBHUXSXRKVNEGPCPNQOKYDMOJRQUGEMZKESFAPCYWFSUXCSQOQNKDLIBFWIXDHBQGADEDUYOTAOLOXVAVTLCLNYKATOJWBFZJJJKWGNJHUUIYNSYFDKKSMFZTMYSRUVLTYLCB");
    msg.value = 46U;

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
    msg.setTimeStamp(0.44220814235075423);
    msg.setSource(57590U);
    msg.setSourceEntity(205U);
    msg.setDestination(62480U);
    msg.setDestinationEntity(122U);
    msg.name.assign("CQSGTIHUGOAWFGWISHBNJTEDSLOEZAGBUMDXLRXMHQCQDSKJIIPKRPCDROMPLZENQMOKQEYLVOYRMVVMJTOKTBISUOPUNXDNCROTNZAUJKTXCUAPAQQCEIXDRGFYUMTL");
    msg.value = 146U;

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
    msg.setTimeStamp(0.9586909083808997);
    msg.setSource(48688U);
    msg.setSourceEntity(123U);
    msg.setDestination(30485U);
    msg.setDestinationEntity(15U);
    msg.name.assign("MCXPFWEEIZXHZYAUVIOOPEYPLGSGVRLNREVRADYFQANRKSICPMAHCHLAJUCZMTYEFVJVJERFNOKTBXKXNLWZSLZPTOWCFHUJXMJMHMBPBTYIUKHFETUGAQHUDYQPANOPBETJGBMGNATZNKMTVXDXQRTUSSGQYOOWWVQVBOZSSNCGCDOZQQQKZYZIFDRGWWYKCFEUBAIRCICBJHLNJFMKXJSSLXQKGBSTBOHXRKPEWW");
    msg.value = 231U;

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
    msg.setTimeStamp(0.6926418215506435);
    msg.setSource(30866U);
    msg.setSourceEntity(42U);
    msg.setDestination(48811U);
    msg.setDestinationEntity(132U);
    msg.value = 0.23090846349781724;

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
    msg.setTimeStamp(0.7932584479421747);
    msg.setSource(26367U);
    msg.setSourceEntity(199U);
    msg.setDestination(14366U);
    msg.setDestinationEntity(198U);
    msg.value = 0.618251360978664;

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
    msg.setTimeStamp(0.8786903166308307);
    msg.setSource(55066U);
    msg.setSourceEntity(145U);
    msg.setDestination(55097U);
    msg.setDestinationEntity(238U);
    msg.value = 0.8100208204531485;

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
    msg.setTimeStamp(0.973533634479656);
    msg.setSource(7633U);
    msg.setSourceEntity(117U);
    msg.setDestination(52403U);
    msg.setDestinationEntity(78U);
    msg.value = 0.7381822663386414;

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
    msg.setTimeStamp(0.7355834171274553);
    msg.setSource(32291U);
    msg.setSourceEntity(116U);
    msg.setDestination(56751U);
    msg.setDestinationEntity(187U);
    msg.value = 0.328780830992604;

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
    msg.setTimeStamp(0.7254676086843739);
    msg.setSource(28033U);
    msg.setSourceEntity(89U);
    msg.setDestination(25526U);
    msg.setDestinationEntity(131U);
    msg.value = 0.3047731895300487;

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
    msg.setTimeStamp(0.13820021347718148);
    msg.setSource(45302U);
    msg.setSourceEntity(161U);
    msg.setDestination(45930U);
    msg.setDestinationEntity(254U);
    msg.value = 0.8036380308725748;

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
    msg.setTimeStamp(0.22958181622893525);
    msg.setSource(33590U);
    msg.setSourceEntity(34U);
    msg.setDestination(32688U);
    msg.setDestinationEntity(189U);
    msg.value = 0.7217304056369694;

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
    msg.setTimeStamp(0.29416795604901125);
    msg.setSource(25776U);
    msg.setSourceEntity(127U);
    msg.setDestination(19818U);
    msg.setDestinationEntity(81U);
    msg.value = 0.7935829669846017;

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
    msg.setTimeStamp(0.8877976696020174);
    msg.setSource(31084U);
    msg.setSourceEntity(254U);
    msg.setDestination(11515U);
    msg.setDestinationEntity(156U);
    msg.restriction = 17U;
    msg.reason.assign("AYAAHWVDKLAFKFKUEIEVPUEWJOGXQROTMNUUUUECBADNFCLPLTNQLSIJBCXIPBOMMVJZFSAYNTBDJGCLHEAZCPWUQCTZPXZLOSZAFHXNJHUKVKGCUJBPPSZHKHIOGSRIXZREDFAMDPGDOFHXMZNMPHICWZWTYISZXFWIEGQDRJVJOGQKVOWDHGLK");

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
    msg.setTimeStamp(0.7796424706897683);
    msg.setSource(37906U);
    msg.setSourceEntity(30U);
    msg.setDestination(24265U);
    msg.setDestinationEntity(181U);
    msg.restriction = 63U;
    msg.reason.assign("JSIFMAFHJCYOFMNTRHWKU");

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
    msg.setTimeStamp(0.16496235106070212);
    msg.setSource(46561U);
    msg.setSourceEntity(205U);
    msg.setDestination(65481U);
    msg.setDestinationEntity(178U);
    msg.restriction = 117U;
    msg.reason.assign("ZFMSZVYQYUBKVMKVPOKNOUSQRURNMSYOQAPUIGXGLLOHJCFQHBEMAJGRNNEBUVXBSUHHAAOLOKTNJOFKYMV");

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
    msg.setTimeStamp(0.19458353154078245);
    msg.setSource(28173U);
    msg.setSourceEntity(129U);
    msg.setDestination(61117U);
    msg.setDestinationEntity(10U);
    msg.op = 31U;
    msg.request_id = 1749655753U;
    msg.entity_name.assign("PTNZYFANEREUPWAFIVCKCCQGBUGWATFOZZTJAVSPJQFZZQBXMQYGAMJBRAKQBJZDKUOBXHMXHEQIMEEUWRGLIYNSXNRUTIHDUWJFCRNWKSLIHKDVYCZBOVLUTMXAFRIXEGRGWJLYELYRHSCKHFKYNJTSXTDNOSQQAMUPTOLLOXCIXPXSDHONMBNVSBDWGHZRSAMTGVYVHQINJGWJMEBWVRDVKDCOPKMGIWPUBLSUPQFFPYOLPODETCL");

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
    msg.setTimeStamp(0.009828678619860809);
    msg.setSource(1844U);
    msg.setSourceEntity(19U);
    msg.setDestination(58265U);
    msg.setDestinationEntity(55U);
    msg.op = 30U;
    msg.request_id = 271791942U;
    msg.entity_name.assign("TGZEDVNIEMLFOURXHMOPWQRHEZNLFCAQFVITHKLYSHWGOAUAMWHCPKZLTXXMGILZVEQPUOIWKJQNAKTRJGJGKEFBTSCUYCFJPTBGIMXNHSBWSLPMLXNKAECRFRDRYOHWEMGZNVGFHPQVYDTCUYVUCSKL");
    IMC::TypedEntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("AXPATDMDMRUHOMRHUJQLFSNTVZLOZDAGXKBKGUTDSBBPQMRJNOKXCYDCWBMVRVRCOMKZEEZQBOEOPTYHVRRSPSVELLJXUZGXHNMHGWPFIUZKRHCQALTLNXVJBLYJEIAICBFSSGFKHIPWJYTPNCISEWPWFZZYUIXVYQCNDUUIWZPDCJVRPTLMQDJAEFCNQESRZYIYJKATUMXAKJKIGUWOVYVGHFQLFOEGEXIBFWNLHAOMSNTTAYNBDQKB");
    tmp_msg_0.type = 32U;
    tmp_msg_0.default_value.assign("KDBBJPAGAVEPHUZPOIDYZOLULFVOOBDYJKIQOXNZIXNCFVPIXRUQKDZANCTOVFQWZHZYWWNBGQTLPMXHMXHOLLKW");
    tmp_msg_0.units.assign("XJMBFXRWRINNOXILUPURUUOUJYXYSGASWHQPAANMUVDMESYXLRMXMDZBKCSGDZOKPLOYZAZPDC");
    tmp_msg_0.description.assign("CNTZSCBQNINJFSCLVWZCBSYKQZKHLFFMFWSJVZBRITQXLDMGXWRIXEPDUNPNNDOOHPVTTBMUDIMAJCWSBFCIRUNHSGESNVXMVPPWDQZYQXEAJGMCEIBKHGGHEIPATPPZFDFMTKBJUMMRGZYZAVPKRUUIVUFMLAQTBTYLDLHHADWOHWVAEQBLIRCWWHTSKGFUNNYVDTGOFOCJOQLRKKYRODSZURPYEOLHVGEGJXOAEXZIJCOXXQWYJYYXB");
    tmp_msg_0.values_list.assign("VTMJDJBGEJHRIAFAUCCZPGAGLEIWQSDIYFBJQSUMCYCFUOKYSUZJQHYQNNOMIKIWSIWIXXESZKBCTWUGBOWKLJCZLPFFETDCDRSRZVTFNIOLKOZIHLOYKMAQRDHAVXVZCHXMPTPPVDBVKNGQFSWZLFTZWNNYWCXTREXTDPRBPRKREYVDDGXELSMNTAEOJBQPAYGYJXHBROGQMHPUUNCVSNDBFYHFMVBULEXEGJKRUOWAASQMJLHPQLOGKWZ");
    tmp_msg_0.min_value = 0.9635837388482671;
    tmp_msg_0.max_value = 0.8959400799232446;
    tmp_msg_0.list_min_size = 0U;
    tmp_msg_0.list_max_size = 103U;
    IMC::ValuesIf tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.param.assign("IWRQOFGWCYKIDOXWTXARWCJYWNVVJTTQGBUFGOVG");
    tmp_tmp_msg_0_0.value.assign("COOTMTLSDHKDYRLUXNRUSANAQSLWXHEOAGTPQDAURDIYXAKM");
    tmp_tmp_msg_0_0.values_list.assign("VHZCKRJCSAGLKBZJWNSVDGOVGDMAOOMTIDTPPJUUICUBFKNTDOCOGZMWVTERPFQNMFBNHYXIPIKOTGXALNRXLEAAJLSRSVXQXFPILPRKHJEQHAZUWKBHSQPIGOKWJVYKELFNRSEYCOYMPSWUGXMWQBOLZPNTFRD");
    tmp_msg_0.values_if_list.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.visibility = 49U;
    tmp_msg_0.scope = 146U;
    msg.parameters.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.24322570723338788);
    msg.setSource(157U);
    msg.setSourceEntity(253U);
    msg.setDestination(5140U);
    msg.setDestinationEntity(125U);
    msg.op = 31U;
    msg.request_id = 2553318257U;
    msg.entity_name.assign("FLRKHNXEMHORSKACURMHURBLEZRGTZBVPITCYJFIMENPKVVBWOXENUSYNMJSXXDIAHSQBMNMKPGWLNAXMGMUPRDZELALFQXFHJUAPMHOCEJIDODCJTSBLEGCXOYOBFALYUFGOQGJGKDGCYOLWIAWTYBPQHYKAZWQFFXJVAU");
    IMC::TypedEntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NSDEVTLHGNBMADYZEWHUCGXYKDFNAOMIQOBBDFPFKSDZKJRBJQIKHTPKUEUDSIFMNGJDGBJYPKXBZPVVIQOXWLJATMLGWSVNZBHCCVKERSDMUXZLCHFWOIGGZAXONMRTOLZESHNYESLCXNNSTJHRWXPFGYLMWOPZGDOXWJHYBQAUJVUQUMGAFELMEUOXCCTPTRCAIRASUEY");
    tmp_msg_0.type = 228U;
    tmp_msg_0.default_value.assign("KELJYWWVKPNUEOHABJFAQDVRXRNLXFGIGMWISHJXPXYGPXHUYANZMCVUZUNIANHRWWVDHTKPUIOVUIXSFQEVARKZUCMBSZAKLMDBZCKFYRCZFSITFHLMSOWRGAZECYYHDUUTIQOLMPIGDCTILGTLMBFOTWSSLXJGQXQQYMDAOGDACDZJYOYFMYHOKFVJQSAEEVTREVNJNBJCKKQBPWHLXSXGQBWNCTFNZPPCEQPBNBEZDHDKOWGPRR");
    tmp_msg_0.units.assign("TBFRYNVDIERKYSMVQKJIHONTOBLYZCAZLLMLLIBCTFSKTGLAMRZEFAJQIMPRYZVEJHSXPJSSCZRNFPBSRYRHDONEINKDQQKP");
    tmp_msg_0.description.assign("JLZQBQJEZETIXMKNHXYFMXQPHEMSQFTOMOFFAZLDDJYPDUCNHLLUOSVNLSO");
    tmp_msg_0.values_list.assign("PJKAPQLFWKZNCQMSEMTTSFGZVBAFPWULEXACCNSBRFIXOKNXTLJGKCZNRBSCEKEOELTLGQXGNJXIKJCCRXHVERTKHQOEILYLHJOYLHSWQNCWDEMJOUQHRYHHKXIVVMABIDDZAABOXJAMCZSVHWYOYBMWNVESURZ");
    tmp_msg_0.min_value = 0.9889881798956518;
    tmp_msg_0.max_value = 0.822548399775362;
    tmp_msg_0.list_min_size = 54U;
    tmp_msg_0.list_max_size = 165U;
    tmp_msg_0.visibility = 156U;
    tmp_msg_0.scope = 167U;
    msg.parameters.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.11332353697413955);
    msg.setSource(14108U);
    msg.setSourceEntity(4U);
    msg.setDestination(33195U);
    msg.setDestinationEntity(6U);
    msg.name.assign("EIRFFWBDIQFYZJICIIBUCZLMWFGPQNRWDAXPVOJVYXJTZSGDMFCLZDMQMIXPKQCHWBNWEZKDJBDOEUTYPHBTJUTUYSZNTYSORSAPKLGMXAWKNVNRQIUOLLEHLEVNR");
    msg.type = 39U;
    msg.default_value.assign("MYWPIMBJQLAJZZBYOXARDUDCCWQIGASNHUOYGIJHMDQOYBPSPHIWVGJFLCBTYGEHJZYNUADNOBDIEZLKKGKHXNRUTANBVQFDQFUPGDJLSCETRAASOSCKTNPNCVXHSFIOPVBIFYIORFETMPVGMECHHKDWRZLUBSPUGLGVKQXWAWKFEXVSWSKZWRZWTKXYBSMQJTBJCQYNRWCFPHFEOERLQXMDHJTVVMOEUINGQZIJETCLNKPVXZLYMDAXARTUZX");
    msg.units.assign("CBKKAGFOMQDUTPXXHZROUWWKCHHRMGPFIZPAPDJMIRNNXNOLAEDPDJLDJGKBUJMSFPXXSECETBAGHEOMKGTVNDQSVWXTRLMZZYCYVHHYIKNVPHURFAHEFSSOLXZVEQLQDTCBFRUBJRPFBMYD");
    msg.description.assign("KJURNVIOLAHMKBPPRUTIFOKYXHBIAUKWFOHNJPAZGEFPODJCCWOSRFTYKCSRKHHMCFINWBOZDTMNQARAQPXQXIWPUQJIOSJTQHECGYQVRVFMDCLJPFZNRWYSWXWTQXLH");
    msg.values_list.assign("CCKMJPVLIMBUMLUJCEPCDQMQGXTOJ");
    msg.min_value = 0.4259237242043401;
    msg.max_value = 0.9680620466212903;
    msg.list_min_size = 82U;
    msg.list_max_size = 205U;
    msg.visibility = 1U;
    msg.scope = 2U;

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
    msg.setTimeStamp(0.9858977809242935);
    msg.setSource(13684U);
    msg.setSourceEntity(93U);
    msg.setDestination(56253U);
    msg.setDestinationEntity(196U);
    msg.name.assign("QBKEAVYHYWNGFRPZUPDCGLVUWRTLVCOEDPDKIHDWCI");
    msg.type = 166U;
    msg.default_value.assign("JYBUTECJMDORYBBVWBVOVFCENDPFLCWGAQHHOSSRWAJAICDVVVZIOAJWOARSRKUAHNXEZUGACNKKYOXIMKTTQRQGDMSBYRQVIPJYLPSHHPLFDJSUETTKBJWVBQZKXQNVGOFZUJGTNCFKTNPDNQLMLWZIWGMVISTUWQRJCXELFIDPNTMSBXMUNICZYBHEDRACHHIPMPYROMFQY");
    msg.units.assign("ACCHFDEMNBLISTIVCZGJUNDZWAYJFHFREJDWFEYLVJTNIVJFWRYWVEURJHDDXDYKEDYZSHBQVUMIOJTAUGFCJKPZKOQMGPYKAPBCFGOZVRNWYHXYSIMPTSGCIAUKOPPQHSXOPIW");
    msg.description.assign("SFSDBEWAIJQCXFYOCBKEKYQWJSHLRRGIVEFMHAHGAUVJLMDWJKGOPQWHZIYQISETGZNYOPJGXCLXWEFKCYIQTBZOUHEVABTTLQMMOSLEYSNDOJVCTHTGXIWQBZFAPPRSPZXNTKCCMC");
    msg.values_list.assign("BLMAEHFQQBWESIWPZBCZSERTTCWIAPEZCEANRRPOWWJJNYROZLHTFE");
    msg.min_value = 0.11836687487001585;
    msg.max_value = 0.8785148672625762;
    msg.list_min_size = 245U;
    msg.list_max_size = 172U;
    IMC::ValuesIf tmp_msg_0;
    tmp_msg_0.param.assign("OBWSJCJLJDLAMIYQVOGAYYUQBHIUTJXISNUZDCPPHTWKKZMLCYCTDFRGFIPIXVNYBWDCBIJCFETABHXPYEBOIRCLBDSQHSQUIJKRWHGEDPUKWMGMVVRFJHVZAQSELZGOHXDMZGMXZQMGFYETKYWPJFHDEFKCWUZKJATLEEQASLXFN");
    tmp_msg_0.value.assign("ANPMYXMJQGRYMQBDOLUNUCFPOFRTQUHTCSQGKMCATLOWXYKKSDCUZNWLVBORWIGZCRCTBUHYMZVGRBPPZ");
    tmp_msg_0.values_list.assign("ZOBRLXPZCEBLGWCGLRLPPGOABKNPYUJEWZAFGSVMMMZYKTGZOKINACXYEQVNNUWUSIRASUXQPBEVFDIMVEPYBGFLYDLBNWOCECVKATDDOTJRZLATHQASIHSRICLFDQCJHOVMKQHHAKHQXTFHQRFYKSOYWMXFPJFHURVZHEJNRONGITKEQJWPDITMKDXJRSWVJNYIZEXAMTYPAEWGOPBXXTLZQRNWTWCSYUUHIDSDBCNUGUOSXLKUBQBZFIMJ");
    msg.values_if_list.push_back(tmp_msg_0);
    msg.visibility = 165U;
    msg.scope = 75U;

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
    msg.setTimeStamp(0.15471906823132164);
    msg.setSource(62043U);
    msg.setSourceEntity(6U);
    msg.setDestination(9078U);
    msg.setDestinationEntity(172U);
    msg.name.assign("XPBZGVCHICGJOVVTOFUTJOBNIGKJIOMRGLQDYFOCHHPCRNLVMHSBPITWBHPKIPPEXZJXMSPSSHLQMDEOYYVETRYRCFBWRMYOKKYXNCBIUJZVSKVIXHBXRMTPZWDYEGWOFMWAKXXQVZVGNDWJJZENTNKODFVLOCTAFTILNUYANLREKJDADTJZRSMUMQHCAQSFIQLRCLDWMEGQQNBWPUZFUPAHUEJAGFZ");
    msg.type = 143U;
    msg.default_value.assign("DCALUQYNLRHMWVRUZGGDCFISRYPXBFEVXBXDARWUKJAWWXMTQFCSGKDWMRBVWRNOKAHYFETLJOYATBJPOJDKYFVPAMVYUQDBKVJLILHSABZLGMJPEFSRIGQSDOYGEIXKOHNOJNUFXGIOLVJPIXLYVITDOENOTCXMRMTNRCEJJHBFXQUBWZTZAMLKKQBDQKTEFUOLAPIMNVAGSCHHNHSTQCHEYPB");
    msg.units.assign("IIDZAFZWXQREUFXCQALKIQZTSURYDALURSKFYHTKIZJEUOHYNBSJZAVUHPWVWUNCYPDMVCRBIMIKWJLWVSORLZMTFEDMRCOBRAMWTDCDPZLSSOAQPRNMONHTGBJPXMGHKIUNBBEGKJPMFLWTGAWDPMMNLKJPFEWNYLRWQAJHYQGFCXVFXGTEIUEBHNGNAISECKUVAJVDFKSYHQXVSYDTOZLCNRBBGUQOBFPIOXZEGCSJTJGCZEHH");
    msg.description.assign("OPRCGFSLSFDBAJWICGAWDFBRQSHMPMJMRJDGZFCGFCIVBZDLBZNFDZHOWSZNLHJKQVTUWJJARSOUBOXGCAMXFEUWRPOLQQPEUGWTBTEXOINHRZTTXDQAWDAPJVFZIGEYCPRQZOVOEVQJYQHWLNKMPSBEDHNIYKEIRAGLUVMLCIQXVBEIWLOXFMUNAXNBHSKUPNZPEXJMTTZNOKKUSYJR");
    msg.values_list.assign("HDMNTGKNZALBJLOPWNXVFBDGQGZXWBRVRJKDOCULYHSYYOSLNCQUAXZESVQEKPUEOZUJKWJXYWNXBAHKAOQZTPRMRGPFWGAIERXFVKXUE");
    msg.min_value = 0.9293097228464698;
    msg.max_value = 0.7097667597317993;
    msg.list_min_size = 145U;
    msg.list_max_size = 136U;
    msg.visibility = 198U;
    msg.scope = 245U;

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
    msg.setTimeStamp(0.9135785672599537);
    msg.setSource(14322U);
    msg.setSourceEntity(163U);
    msg.setDestination(2274U);
    msg.setDestinationEntity(203U);
    msg.param.assign("ZOVLDKFYIEMDVUHBCQQKNZERQGKPJOVXNJXDHWKHZAHHUQSDZSKQCYYJQHGFOLUIOEMFKVAUAEAXLGBTMKITGPSBDLZWLCXJQQSNCACQDISNPUBCKPEPYABEFEMFTZNFOZHCFXTLBVRNBRBC");
    msg.value.assign("TBQUVHPLAJUHTNQRXBFZZJTAQODRCSYTZRWIQQOHMAFZBORXAPHSLONLFTEDNWGMHYLEJSXJCYVGN");
    msg.values_list.assign("CNHYSQEFJYEKTXUORAJKAIQLTDWYWRHMDTAZBTURUXTOSHBLAYFWVRPPCVLJALORIZSJCNMVYSKGTBHODMOAEMAAVRUPTZIIICZBFEGKVNMUBUZZCBJNTHECDLQLFWBVEDTLLXPIQMQJOIJZDMYXEOBQCOQSKVYSCRBHXPPGEUJHJFJRYCGHNWFNPRI");

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
    msg.setTimeStamp(0.22685977908478971);
    msg.setSource(39869U);
    msg.setSourceEntity(35U);
    msg.setDestination(44880U);
    msg.setDestinationEntity(176U);
    msg.param.assign("IZHGBTSRMBIMNXFDASRVMRIRNTEWXZ");
    msg.value.assign("DDEUJLDQLXWYGOIOJYKJGTCCTUTVF");
    msg.values_list.assign("CUPZTHEWRYVLOLOXEZGDUCIDPJZHXRMTQDFKVGBVCHOSDUPEXYHSJDMWUIMKKPAILDJVMTNNGHBZALWRIAYHBTGZISUUQNRQFNMAYDZNTSJQVLWXUAFYVXTLLSPAEPCUIFNEGOHAIVLKSHXCVQNXMOYIBTEMQZQPKAQPEDBLJYGCRWCWNJBTGFIZEJXEO");

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
    msg.setTimeStamp(0.28051730279225573);
    msg.setSource(2190U);
    msg.setSourceEntity(26U);
    msg.setDestination(1209U);
    msg.setDestinationEntity(65U);
    msg.param.assign("TRGPTBEIINFOZURPIOEFKNLIXRNPFVZIGOSJAYHECHPQBWSVLTOKPTJPEIFZKPHPCIUDXWVMYS");
    msg.value.assign("XVGXFQXPWVJKXEMNNVIJWXZZUNAPKDHYBZRLTUXFHYNUMEGIOVRICVSBZCHSYNXGDOKBAAOICMRLLZMNGMEQWWBLTFJYHWKAELSIKPAJNBFEMFQYTRAVPOUYPRQUSFCKINKOYRNBSIJNOJOEATMKJSZGYIGKDJPSSGVYULFPPLXTQDUEGDDDCTQAPDC");
    msg.values_list.assign("OZDGQBPLJTQCBCSWUUASIIYBTCWYLHLRARROFEETLRURVFXCQEKANHKVHAJZQJYOSYBFKEDVEHQYWYKHEGOMAAWULBJRGTCGLWVHWLYTWDXMUQEPFIYOMDFCNNMDPJN");

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
    msg.setTimeStamp(0.8324409115580041);
    msg.setSource(49741U);
    msg.setSourceEntity(12U);
    msg.setDestination(53527U);
    msg.setDestinationEntity(70U);
    msg.op = 109U;
    msg.version.assign("FYYDGKZINBBUXFCMZUNKLIQWGFSSIBDGETVTNHIXDXAMSBZEEMMTHSWOOQEEUHNBKFOBMFYXTJYLJZGZWYPZUKRWJNFKKPNXPJCPIRVTJLCAPZHQSXRGMAWDBDOSQVTPOKNKPVMJUNWOIAYAKREHMDLCCJDXOUBHXPONCDQHWUPHLGRLPYTHTRXYSXCOITIFRJDWWQJMOSVRGFZAEMVSDCLYRCEAGCSEFULWTVLUUQIVAABGQFKAJQ");
    msg.description.assign("DWBROILCMXBZEMHCIHXEWLXBRHCHFUVDROPDFUGGSLGEQKGFTPZHRVIKMWFNAJTOPXHWKAQUOJHAOFAXDOTSVSNKZAUTULBLMGYONPJLWGOKSIEZDFIJCLQVPEUUYSIURMDJIZSYPXHSNAYVSYQZQFDLYMDWUXEXXZKAFJABNJCCZGTFJ");

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
    msg.setTimeStamp(0.35760769760813405);
    msg.setSource(8895U);
    msg.setSourceEntity(184U);
    msg.setDestination(18601U);
    msg.setDestinationEntity(131U);
    msg.op = 201U;
    msg.version.assign("GUTHCLHILCHSPFHJ");
    msg.description.assign("KUVYXSWHGFVCOPKAUZSBYMQLFMJOBKPVWYXGEOCGPBEBLLLXHCVYMZEAXEWOWWKRLEKPTAYXMXQGFERVRWTDJSSULZAHXOOOFRAINLDQGVIG");

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
    msg.setTimeStamp(0.43013067398950144);
    msg.setSource(51830U);
    msg.setSourceEntity(61U);
    msg.setDestination(32997U);
    msg.setDestinationEntity(95U);
    msg.op = 191U;
    msg.version.assign("EWRDSGRXZBWZJLAHUXQZUDYFXHBIWPVFMHIJBCDANVOKXOXVLCGIYNZPIATYLJVYLPMZEWFYCKCIF");
    msg.description.assign("LGYLRMDMAYCUSNDTJAFNTOQRJWILXXRTBDOMIPEKMMDPMHPHNLGPUXQTAAOKNFHZDJBVFQHYEXAOSHRBUQJATCYWOEVRKSXHNDEPWZWYFKNVDWPVBFEWLWSABJSZBGIBEPKLIMYCEYXKXJMHGZVZXCESKOJLQUCMZRHGTWBRQCLFJPQCURURFIBUUGBXOOLYFODUEUQZNDCIOFNGCDKGINAA");

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
    msg.setTimeStamp(0.179029646932936);
    msg.setSource(17859U);
    msg.setSourceEntity(176U);
    msg.setDestination(61821U);
    msg.setDestinationEntity(139U);
    msg.value = 0.017204052079829113;

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
    msg.setTimeStamp(0.1519148252248662);
    msg.setSource(51240U);
    msg.setSourceEntity(51U);
    msg.setDestination(11060U);
    msg.setDestinationEntity(25U);
    msg.value = 0.6473361853324464;

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
    msg.setTimeStamp(0.8468754955006491);
    msg.setSource(3958U);
    msg.setSourceEntity(63U);
    msg.setDestination(14246U);
    msg.setDestinationEntity(110U);
    msg.value = 0.12082673377904285;

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
