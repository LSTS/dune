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
// IMC XML MD5: 6d65434664d8dc5d446df90c7d06832d                            *
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
    msg.setTimeStamp(0.18044780243888936);
    msg.setSource(28841U);
    msg.setSourceEntity(221U);
    msg.setDestination(36992U);
    msg.setDestinationEntity(50U);
    msg.state = 182U;
    msg.flags = 113U;
    msg.description.assign("DNJNDVJMARXRLNIPFYULAAICGDEGEFGWNTPWMAVQBNTLHMIBYBZEZBKXTCTTVICRCRSEVEILNJSSXFIPHEMLUBJFOPG");

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
    msg.setTimeStamp(0.4911202685761532);
    msg.setSource(38802U);
    msg.setSourceEntity(14U);
    msg.setDestination(54188U);
    msg.setDestinationEntity(221U);
    msg.state = 4U;
    msg.flags = 98U;
    msg.description.assign("MKSTYCRPVEMUJEQSAFWFMVFGKXXHOLWQWQSKIYDXYNXFWZTPYFRJGMBTOJRQTOCLXZBNUOVDLZORCINPMHJEAKTWHZXINNNWIIZYPHESKEMIBHDAYILPIDGYLKJBTGDQJPZJCRRAKSQDZSWLU");

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
    msg.setTimeStamp(0.9953003374878913);
    msg.setSource(232U);
    msg.setSourceEntity(39U);
    msg.setDestination(31182U);
    msg.setDestinationEntity(158U);
    msg.state = 25U;
    msg.flags = 172U;
    msg.description.assign("GDEEMTTCUEDRYOKUGSGRQPMGED");

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
    msg.setTimeStamp(0.3762541202414914);
    msg.setSource(37779U);
    msg.setSourceEntity(94U);
    msg.setDestination(54838U);
    msg.setDestinationEntity(156U);

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
    msg.setTimeStamp(0.4557024016292641);
    msg.setSource(46026U);
    msg.setSourceEntity(46U);
    msg.setDestination(48757U);
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
    msg.setTimeStamp(0.1838280906047145);
    msg.setSource(39597U);
    msg.setSourceEntity(205U);
    msg.setDestination(44583U);
    msg.setDestinationEntity(91U);

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
    msg.setTimeStamp(0.5135270835379984);
    msg.setSource(5334U);
    msg.setSourceEntity(222U);
    msg.setDestination(3660U);
    msg.setDestinationEntity(153U);
    msg.id = 205U;
    msg.label.assign("QYKJXLANVSPJFFIVUZADOWHIZOMXLGAWFNGOLLDOZNBCDKRQXYVFNDMRJZDRXEUFFUJEKOCQHKKTJSVBIRGPNJGLYGMBEKHGWBOOVMRHBXWQZTKZUNOVSZMGBHCZJDUMNYXYMXBSIYRJTJOHCCKDITUGMARTANSMQXBYUPPTAVIWDISHEFPTJLZEKPGXBWHUYQGSZEWRWVASMQAYS");
    msg.component.assign("EWULSOOLBMVJBMFJVMCDYUPPUHSUEPHKXZCXIIDBSGNNVJHBUTIRMYNHPMYALZFUCHFHQAQXUHJVEKRJSSQSTJRFFTDNKCYBWAFEQEYBSMDZVYJOGZBEYIRGIFEDTWPBXCDVKYCOZILXJRNGJERTBWQQKQOZGSZGOFCCYVNNCDGHCKKAWEPKJVULZWRGNSMWYMDDTHUAXXQZGQTONOF");
    msg.act_time = 13657U;
    msg.deact_time = 3126U;

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
    msg.setTimeStamp(0.9583240777679916);
    msg.setSource(24564U);
    msg.setSourceEntity(190U);
    msg.setDestination(34904U);
    msg.setDestinationEntity(110U);
    msg.id = 21U;
    msg.label.assign("GDSMFYYTFZHPBUMUAXMQVFONQEOKTLYUACM");
    msg.component.assign("BFGKWAZSHTQAPXMFWPBDNXAWCKIBOJMDVXDCARFECNBEWFRHLHMETVHHGMIANSBXVJJMJEQULPYTWDHECYQJZIEZILVOPRTSGLBITKJGRMAUOCRPLRANYJFQFBAQITJZZPVDGDCKZNUYPMIGWDCGGYWTIVXIDYQHCNXKKRBTOBO");
    msg.act_time = 8968U;
    msg.deact_time = 50420U;

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
    msg.setTimeStamp(0.02805494568106026);
    msg.setSource(56180U);
    msg.setSourceEntity(234U);
    msg.setDestination(3165U);
    msg.setDestinationEntity(162U);
    msg.id = 74U;
    msg.label.assign("FUMXQNEOYTNUUVZFIXBUFHOWRFHLOIUVMJMYXKMVGGLIUYHSVVFXZAONHANPJBMBPZOPEAZ");
    msg.component.assign("NOTGYHKKHCVNNRFWVEXRPTPFIZONCQGAOFFAJFIQZCDCXDUVGJXUAVPLFLIERAIAMQOKUSNBRZMYWYISZLHHIJLYQZZVXXTLTEPPNOYMWUAUBGAJEQIUERBZMNLZETKTTJCONMSIBHQBUANVDXHTS");
    msg.act_time = 41848U;
    msg.deact_time = 58530U;

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
    msg.setTimeStamp(0.07738120203074828);
    msg.setSource(9138U);
    msg.setSourceEntity(210U);
    msg.setDestination(20259U);
    msg.setDestinationEntity(12U);
    msg.id = 61U;

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
    msg.setTimeStamp(0.3963640089385315);
    msg.setSource(11402U);
    msg.setSourceEntity(30U);
    msg.setDestination(10410U);
    msg.setDestinationEntity(178U);
    msg.id = 3U;

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
    msg.setTimeStamp(0.32973912479839795);
    msg.setSource(13299U);
    msg.setSourceEntity(171U);
    msg.setDestination(62935U);
    msg.setDestinationEntity(141U);
    msg.id = 187U;

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
    msg.setTimeStamp(0.26973768616608096);
    msg.setSource(46063U);
    msg.setSourceEntity(146U);
    msg.setDestination(33029U);
    msg.setDestinationEntity(60U);
    msg.op = 36U;
    msg.list.assign("VBCUZXXOUCLOKFZBVFKRDJTMEADPYXHQEHUGDHWTVJJVZJKHJUXZZHPAETPYLUSLDEZMKUMDWZNDAMNFBLIDWYFQQSARTBGMVULYWWKTZPEWBIAHKANPFUQZYSISNXGHPJJOGLAHRUKJFACSTSYXVMFOOWCVGSDHRCJVWSGIEMIOGSWZPWVXERLYYOLQQUBDACNOTVYNRXOXMQKYFKIJNLQCXRSPCNPFRBICLKBQNEIATMN");

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
    msg.setTimeStamp(0.03435800666540667);
    msg.setSource(13581U);
    msg.setSourceEntity(81U);
    msg.setDestination(37519U);
    msg.setDestinationEntity(21U);
    msg.op = 216U;
    msg.list.assign("VHWRMVSOZFMIASYUDEMAYPBAVBOIKPCVFTXZYKMFQZXWCLUWBCWHEJKUDRLNSHEQOXJVQILKXEJLLSTECKNUFZTUELQQWHIRPKOHVQSRDRAEIKVSNNQXYACBPUQFHYIBVVYRZDAJBOPTPVZNJGXGMAGFZL");

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
    msg.setTimeStamp(0.15761697457719637);
    msg.setSource(39958U);
    msg.setSourceEntity(152U);
    msg.setDestination(55233U);
    msg.setDestinationEntity(211U);
    msg.op = 39U;
    msg.list.assign("BVXKLAQQJEFMGYZJCOSQHLUPDJPZMWKGJCICRPFRRSKOFVNVOHZDJMNTXDXOQXSMGSADFPFIBNGYGTFTAMPTPWUYZTTAFNZIQTUQERBQYAUILUEERDAKOWEGWXBMFTPHDVSKNVE");

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
    msg.setTimeStamp(0.9358328173059058);
    msg.setSource(6019U);
    msg.setSourceEntity(184U);
    msg.setDestination(38592U);
    msg.setDestinationEntity(79U);
    msg.value = 45U;

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
    msg.setTimeStamp(0.2986430698801448);
    msg.setSource(442U);
    msg.setSourceEntity(6U);
    msg.setDestination(35059U);
    msg.setDestinationEntity(102U);
    msg.value = 252U;

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
    msg.setTimeStamp(0.9473868666009417);
    msg.setSource(5869U);
    msg.setSourceEntity(9U);
    msg.setDestination(3911U);
    msg.setDestinationEntity(42U);
    msg.value = 35U;

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
    msg.setTimeStamp(0.5551259970980092);
    msg.setSource(25718U);
    msg.setSourceEntity(192U);
    msg.setDestination(52044U);
    msg.setDestinationEntity(149U);
    msg.consumer.assign("GGESCQTPBYHIUXOFBLDEAMPRENNXFAPSHLZXXWMHWSULLLECDRYZQMVOEPTZTVEFVVLKTJTZSMDMYXPQHYRIXAVDIPAAOZIOCDRUJGVJIKSUNQFFRGDFMNSAWLAWZXCCHYKIHEFMBRKNQBKXLTDZRHTWGAIUYDLOWVSZGTKB");
    msg.message_id = 31381U;

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
    msg.setTimeStamp(0.7072618053735529);
    msg.setSource(46647U);
    msg.setSourceEntity(245U);
    msg.setDestination(63160U);
    msg.setDestinationEntity(67U);
    msg.consumer.assign("SMQCIKRMBEZBRKHQTGOVDRKQQYHEOIALSGHHQSXLMQZGTMLWRFXOOLXJLSDQPOZDZEAAYPWDCCPPVCQWKMMMIANGNAYDILZSJPSYXGHPXHBXEBTGYWSDROMYBZWIIVZNCHGBRJFASGLTJNKRAIAFEJICRFEUFUFOGQPYZPNDHUYRUVCJPPVEWDWUKNHTZYTTNTVFULVWWAYLFIMXNFIXBCKFEKKBOKDNVE");
    msg.message_id = 42511U;

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
    msg.setTimeStamp(0.15693591600152645);
    msg.setSource(5095U);
    msg.setSourceEntity(221U);
    msg.setDestination(60950U);
    msg.setDestinationEntity(121U);
    msg.consumer.assign("FKDVJRGXDXYZLESVJVFCSOUAYMGLDDMCEXTZNYNDQTOCFROGIGTBPVEQDEWGTVQKNJEFDBZSGHDJZORQATVJORSWBKBHIQYCBVSXLGPXWMIJPDIMUUIGAJILASEU");
    msg.message_id = 35415U;

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
    msg.setTimeStamp(0.5852044307576494);
    msg.setSource(7194U);
    msg.setSourceEntity(131U);
    msg.setDestination(45909U);
    msg.setDestinationEntity(186U);
    msg.type = 139U;

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
    msg.setTimeStamp(0.1529858253471852);
    msg.setSource(40510U);
    msg.setSourceEntity(111U);
    msg.setDestination(30524U);
    msg.setDestinationEntity(61U);
    msg.type = 148U;

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
    msg.setTimeStamp(0.4196096519638959);
    msg.setSource(27922U);
    msg.setSourceEntity(115U);
    msg.setDestination(59189U);
    msg.setDestinationEntity(213U);
    msg.type = 188U;

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
    msg.setTimeStamp(0.28962447441319195);
    msg.setSource(36128U);
    msg.setSourceEntity(75U);
    msg.setDestination(39951U);
    msg.setDestinationEntity(249U);
    msg.op = 167U;

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
    msg.setTimeStamp(0.6464952625278718);
    msg.setSource(1637U);
    msg.setSourceEntity(8U);
    msg.setDestination(50707U);
    msg.setDestinationEntity(67U);
    msg.op = 190U;

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
    msg.setTimeStamp(0.2994669202244251);
    msg.setSource(7647U);
    msg.setSourceEntity(144U);
    msg.setDestination(12907U);
    msg.setDestinationEntity(209U);
    msg.op = 215U;

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
    msg.setTimeStamp(0.9078782970803116);
    msg.setSource(24779U);
    msg.setSourceEntity(125U);
    msg.setDestination(6544U);
    msg.setDestinationEntity(17U);
    msg.total_steps = 138U;
    msg.step_number = 152U;
    msg.step.assign("PCAALRLKIVZZBAEUZMVQFDASYQZPNFUXJGTUMUTWCGJRENBEIVDVCCBMQGNMJKCRFAYSZKYYCJBFDRYOGOYDVTXXD");
    msg.flags = 107U;

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
    msg.setTimeStamp(0.4978494454234986);
    msg.setSource(31378U);
    msg.setSourceEntity(50U);
    msg.setDestination(10147U);
    msg.setDestinationEntity(110U);
    msg.total_steps = 197U;
    msg.step_number = 15U;
    msg.step.assign("GIJELZEKOMLTCKLAUDZPARMDWJKMJKUPWFWVKCIHCSPBEQIXSMVBUGHEXQYAPIJTIRAITNIXUFAOYRLAYPYTTTTNX");
    msg.flags = 180U;

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
    msg.setTimeStamp(0.806426461636371);
    msg.setSource(46385U);
    msg.setSourceEntity(229U);
    msg.setDestination(60725U);
    msg.setDestinationEntity(18U);
    msg.total_steps = 181U;
    msg.step_number = 247U;
    msg.step.assign("PTZECOCMUXWNWREZPFUVUBXUABPMQFRDPJBTZULQTSQSCEMPVKY");
    msg.flags = 170U;

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
    msg.setTimeStamp(0.7022461031212615);
    msg.setSource(9751U);
    msg.setSourceEntity(215U);
    msg.setDestination(15995U);
    msg.setDestinationEntity(101U);
    msg.state = 199U;
    msg.error.assign("GRDPRQSLVBDJXAAQEXRBHDEUNYYZZONYUEGBOBJDVWMMGONCVRNAHGQXLUPFTKJFXQMAHOLLTAWKEKXUAWFCUEEYDHCMKQXCYJUCPJIHVMWJDMXOSRONHGEXSQFGTKTVIZTYOWICLVLZTGUADFVZSZBLLEQCIPIAZWIWPDUHILOZVGRAYWREJKTCEFFNFTMBSSBNTPSKNPRGVICKSJQBX");

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
    msg.setTimeStamp(0.7342349460180159);
    msg.setSource(30920U);
    msg.setSourceEntity(140U);
    msg.setDestination(47835U);
    msg.setDestinationEntity(12U);
    msg.state = 97U;
    msg.error.assign("UAJLWQDHFJDMAVRJJNGBCPATMOIOFUYQIWBQCDOHEXPGRQERNPLUKXIOMSZVWDDONTAKVGMLOCTLKANXRHBJOFRTZXHVIZCFLLA");

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
    msg.setTimeStamp(0.0797515465668781);
    msg.setSource(49060U);
    msg.setSourceEntity(55U);
    msg.setDestination(61852U);
    msg.setDestinationEntity(160U);
    msg.state = 107U;
    msg.error.assign("LKIPYJBDMFYRKAGTNTWCUOOCZJZTSFAWUDBIOZSEITEHYRKADKGVMSSAQDLFNVKYMEOAIFRENWDSUQHAFEBPXQVQXOUECBSNAFZRNPQRDBWPOUVEWTWXHOCMZFYMYXOHLOWRHIKMLRUPVGFIHCOEQGXGLVHAZZVQDDPTXVBYBPWJJFYKTRGJMQTNDICJKICVJYSLJSQBZJLQBWXSXPRUTLILKPAEGFBHUPXIH");

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
    msg.setTimeStamp(0.23963843834553955);
    msg.setSource(3830U);
    msg.setSourceEntity(130U);
    msg.setDestination(64997U);
    msg.setDestinationEntity(72U);

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
    msg.setTimeStamp(0.5558025365812699);
    msg.setSource(56681U);
    msg.setSourceEntity(75U);
    msg.setDestination(10511U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.1948723205797327);
    msg.setSource(62317U);
    msg.setSourceEntity(85U);
    msg.setDestination(46164U);
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
    msg.setTimeStamp(0.3192561677731629);
    msg.setSource(17569U);
    msg.setSourceEntity(10U);
    msg.setDestination(440U);
    msg.setDestinationEntity(97U);
    msg.op = 189U;
    msg.speed_min = 0.06201351771357422;
    msg.speed_max = 0.991085402887874;
    msg.long_accel = 0.04200833638527024;
    msg.alt_max_msl = 0.463628266708469;
    msg.dive_fraction_max = 0.06005807858614709;
    msg.climb_fraction_max = 0.9882888873662873;
    msg.bank_max = 0.48142657789416776;
    msg.p_max = 0.7734297400953729;
    msg.pitch_min = 0.9576915402107707;
    msg.pitch_max = 0.46204135489153386;
    msg.q_max = 0.3900452388191823;
    msg.g_min = 0.4006211516876578;
    msg.g_max = 0.7897839528096264;
    msg.g_lat_max = 0.3801635777502941;
    msg.rpm_min = 0.8785430225146796;
    msg.rpm_max = 0.9720351586500572;
    msg.rpm_rate_max = 0.4155758273855833;

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
    msg.setTimeStamp(0.3678292962706464);
    msg.setSource(19497U);
    msg.setSourceEntity(199U);
    msg.setDestination(22067U);
    msg.setDestinationEntity(195U);
    msg.op = 195U;
    msg.speed_min = 0.6097094064151366;
    msg.speed_max = 0.3724264986956507;
    msg.long_accel = 0.1555699575094347;
    msg.alt_max_msl = 0.7301474736444455;
    msg.dive_fraction_max = 0.8682677769124777;
    msg.climb_fraction_max = 0.884178547568981;
    msg.bank_max = 0.588483032028679;
    msg.p_max = 0.3408386768848556;
    msg.pitch_min = 0.30461599752480883;
    msg.pitch_max = 0.645428628953138;
    msg.q_max = 0.0457122296115372;
    msg.g_min = 0.03210791590448925;
    msg.g_max = 0.5325391494302162;
    msg.g_lat_max = 0.19114066847364286;
    msg.rpm_min = 0.09742489690239031;
    msg.rpm_max = 0.3165823943954098;
    msg.rpm_rate_max = 0.5953438299412167;

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
    msg.setTimeStamp(0.1554014320755447);
    msg.setSource(43885U);
    msg.setSourceEntity(4U);
    msg.setDestination(11194U);
    msg.setDestinationEntity(200U);
    msg.op = 60U;
    msg.speed_min = 0.9192108359532435;
    msg.speed_max = 0.729605727494429;
    msg.long_accel = 0.982192817726596;
    msg.alt_max_msl = 0.9565020002035266;
    msg.dive_fraction_max = 0.862761761083845;
    msg.climb_fraction_max = 0.4253728837657843;
    msg.bank_max = 0.4973600638429796;
    msg.p_max = 0.05351095179281218;
    msg.pitch_min = 0.674062063608777;
    msg.pitch_max = 0.5245745758265496;
    msg.q_max = 0.1647402277300598;
    msg.g_min = 0.22513772634911977;
    msg.g_max = 0.7130721285348885;
    msg.g_lat_max = 0.2705016115512482;
    msg.rpm_min = 0.897331771658194;
    msg.rpm_max = 0.9515956265325103;
    msg.rpm_rate_max = 0.2102855021957286;

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
    msg.setTimeStamp(0.6732610518602297);
    msg.setSource(56391U);
    msg.setSourceEntity(223U);
    msg.setDestination(29767U);
    msg.setDestinationEntity(71U);

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
    msg.setTimeStamp(0.21379276429118466);
    msg.setSource(21287U);
    msg.setSourceEntity(55U);
    msg.setDestination(57229U);
    msg.setDestinationEntity(85U);
    IMC::DevDataBinary tmp_msg_0;
    const signed char tmp_tmp_msg_0_0[] = {91, -61, -28, -23, -3, -80, 68, -8, -106, -91, 59, -51, 57, -72, -80, -110, -80, -38, -101, -64, 58, 125, 81, -110, 122, -41, 122, -123, -1, 58, 115, 36, -14, -9, -127, 78, -98, -25, 91, 63, -58, 64, 3, -32, 89, 31, 54, 59, -85, 7, 4, 48, -86, 91, 97, 32, 122, -122, 10, -55, -63, 82, -116, 88, -58, -64, -14, -84, -84, -123, 35, 110, -49, -67, -122, 34, -108, 41, -24, 27, 116, 123, -110, -22, -117, 80, -28, 39, -39, -99, -38, 71, 51, 47, -54, -119, 83, -119, -39, -41, 65, -12, -62, -103, 14, 48, 29, -71, -73, 37, 14, 25, 41, 121, 110, -55, 40, -5, -126, 47, 96, 81, -65, -103, 67, -80, 66, 45, 114, -34, -89, -57, -92, 8, -74, 82, 91, 86, -22, -77, -86, -118, -74, -20, 44, -46, -116, -22, 109, 11, -59, 6, 19, 17, -86, -69, 99, -45, 96, -63, -44, 90, -102, 38};
    tmp_msg_0.value.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.32765104705149106);
    msg.setSource(41377U);
    msg.setSourceEntity(9U);
    msg.setDestination(15168U);
    msg.setDestinationEntity(152U);
    IMC::AisInfo tmp_msg_0;
    tmp_msg_0.msg_type.assign("EJTVBWOQAHSEGJSDKUQXQIHVRFUFEVYTRXCBTMBEAXNGKMUXROLKNNTLLMTNMZLEMKMRSSFXQYNHGOHEPEPZYMXWCDPFNKABHTOAJDNUGMIZKXLYZPUZUNIFCPRUGYVFDGBT");
    tmp_msg_0.sensor_class.assign("AGNPFEMKTKDE");
    tmp_msg_0.mmsi.assign("TZIWZBTQNOVBRHWAFCPCCXPYGSPBQJRGUDUFNSSJLKATCEHGRNZBONZZKEVOMOXUYJLXDVDQFJIGUZPFFRDLCLJOHABHKLRDQONEBRNRHFZYVUNWSVDHUDZLRMATKYPFXMXKUKXYUCYDXJIYOIYEEJPGGWAUJZRFZWTPHQHLKI");
    tmp_msg_0.callsign.assign("GXKCGQFJYZBRBRECLTYRNFGCBHQMATCBSCLWWUTNOWEIMAAFOMITDMXQNLAPKSHFWLEVUEJFAIXSKEPPFGVBFHPTZITUKWSIVEQAXIHOUDNRJVSOKBGGAJMYPP");
    tmp_msg_0.name.assign("BASSHKBVCYOTPCDJCAORGRBCKNFZWTQEUZMTJPVGOGMZPLWXYCRIZAJ");
    tmp_msg_0.nav_status = 211U;
    tmp_msg_0.type_and_cargo = 57U;
    tmp_msg_0.lat = 0.11385417862271963;
    tmp_msg_0.lon = 0.5633047356306431;
    tmp_msg_0.course = 0.5295875273469214;
    tmp_msg_0.speed = 0.6090517174902756;
    tmp_msg_0.dist = 0.9801037051940433;
    tmp_msg_0.a = 0.7711117027711839;
    tmp_msg_0.b = 0.4504734465400534;
    tmp_msg_0.c = 0.1568143538500848;
    tmp_msg_0.d = 0.29499401507115697;
    tmp_msg_0.draught = 0.06077911040139217;
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
    IMC::RamUsage msg;
    msg.setTimeStamp(0.8267653152743605);
    msg.setSource(48506U);
    msg.setSourceEntity(65U);
    msg.setDestination(22972U);
    msg.setDestinationEntity(23U);
    msg.value = 0.0926700651751341;

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
    msg.setTimeStamp(0.3272522726098058);
    msg.setSource(41764U);
    msg.setSourceEntity(203U);
    msg.setDestination(30723U);
    msg.setDestinationEntity(254U);
    msg.value = 0.10141954138222153;

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
    msg.setTimeStamp(0.18127005159862009);
    msg.setSource(4034U);
    msg.setSourceEntity(149U);
    msg.setDestination(7413U);
    msg.setDestinationEntity(193U);
    msg.value = 0.008081994063416587;

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
    msg.setTimeStamp(0.12390076601462852);
    msg.setSource(58429U);
    msg.setSourceEntity(210U);
    msg.setDestination(19098U);
    msg.setDestinationEntity(96U);
    msg.lat = 0.7982319242165589;
    msg.lon = 0.2740553026720707;
    msg.height = 0.6033779351569869;
    msg.x = 0.6468478983530713;
    msg.y = 0.9332949608559081;
    msg.z = 0.5795013666632755;
    msg.phi = 0.0953408166100036;
    msg.theta = 0.504915611920188;
    msg.psi = 0.19495153843691693;
    msg.u = 0.5479231813979533;
    msg.v = 0.5166968847628551;
    msg.w = 0.28266092376960716;
    msg.p = 0.3356305143901198;
    msg.q = 0.4623636905804559;
    msg.r = 0.7938632521771696;
    msg.svx = 0.7197059594753642;
    msg.svy = 0.8509843958716303;
    msg.svz = 0.40635331889273696;

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
    msg.setTimeStamp(0.044181244629114325);
    msg.setSource(5188U);
    msg.setSourceEntity(148U);
    msg.setDestination(56017U);
    msg.setDestinationEntity(179U);
    msg.lat = 2.9682275322295837e-05;
    msg.lon = 0.23115635220625919;
    msg.height = 0.9206846454656165;
    msg.x = 0.04677052598703235;
    msg.y = 0.6196854393051726;
    msg.z = 0.27505646771081504;
    msg.phi = 0.6357660947190161;
    msg.theta = 0.3957667035458492;
    msg.psi = 0.42939563996574304;
    msg.u = 0.816072185711118;
    msg.v = 0.3843623868571292;
    msg.w = 0.2156366713636444;
    msg.p = 0.4062759270195978;
    msg.q = 0.3006170398829826;
    msg.r = 0.7794570262220862;
    msg.svx = 0.8871702524108466;
    msg.svy = 0.5382020895585415;
    msg.svz = 0.07716155253735979;

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
    msg.setTimeStamp(0.38600250063021646);
    msg.setSource(59591U);
    msg.setSourceEntity(168U);
    msg.setDestination(16445U);
    msg.setDestinationEntity(108U);
    msg.lat = 0.7773182774942208;
    msg.lon = 0.29019220898052756;
    msg.height = 0.5883061434587261;
    msg.x = 0.8741222298211071;
    msg.y = 0.3495642256614272;
    msg.z = 0.3130103899084876;
    msg.phi = 0.11943289550633163;
    msg.theta = 0.5132714437046024;
    msg.psi = 0.6621622192359622;
    msg.u = 0.4328514381662315;
    msg.v = 0.39885750004397635;
    msg.w = 0.4568286909436423;
    msg.p = 0.7267137583004412;
    msg.q = 0.6469610789400755;
    msg.r = 0.41469928868554906;
    msg.svx = 0.02789911535810674;
    msg.svy = 0.31439075808245065;
    msg.svz = 0.18112166266005658;

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
    msg.setTimeStamp(0.568381405378454);
    msg.setSource(43311U);
    msg.setSourceEntity(240U);
    msg.setDestination(36730U);
    msg.setDestinationEntity(214U);
    msg.op = 17U;
    msg.entities.assign("QCSBVWHBDQSFNYOFRDEYTNKJCHTPJTUTOCTEJJVZRIZQLSEOYAGMXFYEPVRJJNHBYHXKJVNLBHOUQSMKWWACYWDUGNPUCLQRLTOMISCXVMQGASX");

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
    msg.setTimeStamp(0.13417018859527485);
    msg.setSource(21624U);
    msg.setSourceEntity(83U);
    msg.setDestination(49831U);
    msg.setDestinationEntity(49U);
    msg.op = 21U;
    msg.entities.assign("ADKEXBDYPICYMUCCSHCIRZTEZKRVMOVQADXVBSUBVKSDGKTHJWOWOKXARWQCJIYLRHAUFSIAM");

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
    msg.setTimeStamp(0.5878332860576879);
    msg.setSource(54077U);
    msg.setSourceEntity(87U);
    msg.setDestination(57051U);
    msg.setDestinationEntity(68U);
    msg.op = 143U;
    msg.entities.assign("FFPLBFBFHAUTCHKNMJNBZAJLGOZHSIXMDKKXZASWVEUEDDCXSXISDLWZCZMFNERJAUQIHGRHLPDHYDWOGINYRYPOKHPMEFSVHVRCMBUPNUSTTJKVTMENVKHCREQTEUYMOKWUBDNJGKLGZQMJYPCZAVXLGFMUPTZRFZUGODIUWXTAOGPOJPLYQZASGRLFVWIASW");

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
    msg.setTimeStamp(0.8717627562725663);
    msg.setSource(56930U);
    msg.setSourceEntity(140U);
    msg.setDestination(53250U);
    msg.setDestinationEntity(13U);
    msg.type = 181U;
    msg.speed = 51983U;
    const signed char tmp_msg_0[] = {63, 124, 119, 111, -4, -113, 120, -62, -112, -107, 29, 94, -41, -58, -95, -14, -10, 123, 116, 71, 88, 84, -53, -47, -46, 104, 26, 7, 47, 116, -59, -29, 3, 113, 75, 119, 48, -78, 51, 84, 43, -9, 24, -113, -114, 116, 76, 33, -20, -4, -55, 116, -111, -108, -83, -22, -14, 63, -12, -111, -104, -22, -6, 41, 28, -34, 68, -27, 92, -58, 80, -115, -88, -7, 67, 100, -118, 122, -117, -15, -120, 55, -71, -54, 84, 93, 46, -25, -78, 40, 79, -39, 97, -96, 13, -113, 66, -65, -72, 25, 107, 46, -126, -123, 36, 119, 5, -59, -120, 12, -96, 65, -42, -24, -69, -40, 95, -27, 8, -106, -101, 35, -108, -71, 95, -13, 22, 7, 14, 38, -13};
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
    msg.setTimeStamp(0.8101239312758568);
    msg.setSource(4601U);
    msg.setSourceEntity(179U);
    msg.setDestination(33782U);
    msg.setDestinationEntity(126U);
    msg.type = 63U;
    msg.speed = 53033U;
    const signed char tmp_msg_0[] = {-64, -67, -82, 23, -68, 70, -11, 15, 119, -128, 81, -7, 32, -110, -33, -58, 55, 14, -67, 85, 83, -120, 117, -13, -93, 32, 77, 57, -57, 12, 72, -98, 98, 26, -25, -24, 51, 109, 37, -36, -5, 107, -52, 7, 42, -7, -52, 82, -3, 119, 68, 41, 40, -70, 39, -104, -4, -4, 30, -39, 76, -19, -11, -14, -107, 30, 38, -80, 122, -69, -125, 77, 83, -77, -22, -51, 120, -127, 92, -30, 45, 116, 61, -99, -53, -51, -45, 114, -41, 1, -14, 88, 16, 27, 73, 61, 74, 19, -126, -6, 112, -115, 7, 81, 38, -70, 5, -2, -71, -49, -8, 108, -31, -41, -103, -71, 32, 104, 45, -73, -67, -117, -98, 35, -83, 103, -47, -25, 66, 65, -50, 4, 56, 88, -53, -116, -125, -9, 121, -31, -102, -9, -2, -60, 122, 63, 5, -47, 41, -45, -53, 77, -90, -81, 44, -81, -125, -6, -106, 88, 111, -113, -38, -35, 110, -96, 63, 39, -90, -98, 13, 47, 82, 32, -107, 79, -41, 40, -52, 1, -56, 112, 126, 19, -77, 115, 120, -11, 34, -56, -7, -32, 38, 17, -16, 110, 68, -98, -2, 47, 0, 111};
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
    msg.setTimeStamp(0.968718020250622);
    msg.setSource(51677U);
    msg.setSourceEntity(115U);
    msg.setDestination(34476U);
    msg.setDestinationEntity(194U);
    msg.type = 31U;
    msg.speed = 52198U;
    const signed char tmp_msg_0[] = {107, -71, -115, -70, 101, -41, 101, 3, -52, 9, 10, 60, 91, -4, 72, 47, 75, 77, -70, 114, 123, 105, 2, 31, 71, -80, -38, -7, 24, -92, 123, 12, 24, 110, 21, -12, -19, 42, 99, -104, -124, -84, 28, 58, 113, 108, 50, 84, -94, -35};
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
    msg.setTimeStamp(0.6876549351208106);
    msg.setSource(55079U);
    msg.setSourceEntity(0U);
    msg.setDestination(3623U);
    msg.setDestinationEntity(86U);
    msg.op = 63U;
    msg.tas2acc_pgain = 0.7001637385349228;
    msg.bank2p_pgain = 0.1407274826084215;

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
    msg.setTimeStamp(0.3306181801273621);
    msg.setSource(63884U);
    msg.setSourceEntity(121U);
    msg.setDestination(31674U);
    msg.setDestinationEntity(33U);
    msg.op = 244U;
    msg.tas2acc_pgain = 0.6012959344156451;
    msg.bank2p_pgain = 0.2513501324129269;

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
    msg.setTimeStamp(0.517255089323508);
    msg.setSource(51189U);
    msg.setSourceEntity(78U);
    msg.setDestination(57219U);
    msg.setDestinationEntity(106U);
    msg.op = 237U;
    msg.tas2acc_pgain = 0.14414022124930181;
    msg.bank2p_pgain = 0.9865857877622408;

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
    msg.setTimeStamp(0.4486508841025);
    msg.setSource(7038U);
    msg.setSourceEntity(52U);
    msg.setDestination(22344U);
    msg.setDestinationEntity(13U);
    msg.available = 1012016095U;
    msg.value = 231U;

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
    msg.setTimeStamp(0.2219795799978208);
    msg.setSource(28248U);
    msg.setSourceEntity(241U);
    msg.setDestination(53583U);
    msg.setDestinationEntity(129U);
    msg.available = 3259478071U;
    msg.value = 51U;

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
    msg.setTimeStamp(0.20591143278538515);
    msg.setSource(60833U);
    msg.setSourceEntity(75U);
    msg.setDestination(29381U);
    msg.setDestinationEntity(104U);
    msg.available = 1555095669U;
    msg.value = 1U;

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
    msg.setTimeStamp(0.5273309074728516);
    msg.setSource(42826U);
    msg.setSourceEntity(134U);
    msg.setDestination(52629U);
    msg.setDestinationEntity(37U);
    msg.op = 4U;
    msg.snapshot.assign("KQVKSEWUXIEBTBLAZTQXOOZRVHGBTNZUULHMPNCVOGESTPVLUMZYARYUMJNFDOJCGAVSEKNMTLNMYOHQSUVVHRIBHEQAYLDCFTFIVMRHRFTPDNKZQOSACDXJWVXIMJM");
    IMC::CloseSession tmp_msg_0;
    tmp_msg_0.sessid = 2554736428U;
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
    msg.setTimeStamp(0.3139473654731335);
    msg.setSource(56205U);
    msg.setSourceEntity(32U);
    msg.setDestination(5554U);
    msg.setDestinationEntity(186U);
    msg.op = 82U;
    msg.snapshot.assign("GJYFUYBPFDPFWJZHRYULBLCWETGVJBQKNVTAMHUYQRUJWZXQLMMMAIJIMNWW");
    IMC::AcousticMessage tmp_msg_0;
    IMC::LeakSimulation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 16U;
    tmp_tmp_msg_0_0.entities.assign("EYLYARPXEQKPPSGKBUBRTWVHNFCKHIIXHSVVTCGWRUJFVCNPDXAXUWGBZMYLAYGKKOYQMAHJYOAGARDOZFYTQELIOTYOUSHZJWZLUQKADKOYXHCQQXKRVRMIGMNOSDRUGEFOKNSJTDILWJEPF");
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.8368839259947296);
    msg.setSource(14058U);
    msg.setSourceEntity(122U);
    msg.setDestination(19161U);
    msg.setDestinationEntity(154U);
    msg.op = 43U;
    msg.snapshot.assign("UGDSHASSIJUTXGRAWWGJNPDJRAKWDTLVMRCELIVVUQXDSWDLVGVFPGCPCWBMGVOZWSGHZWYUXAFDSHTPULMZDWEEBCYEMXFZCTKYJMDSDGKRBCKPJPSPSHOQIFPNEQJINMDAVGIHIBFKWBJOUZLXYFZLUQHTOCMXQNMBLLZOCLIBVPBJQYYEOKRQNKIHXARXSYETYKMEAVFRBONZKCUNATMVZFROXQRUNHFCEKFTNHJIXTQUZRJA");
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 1U;
    tmp_msg_0.htime = 0.8501231746286603;
    tmp_msg_0.context.assign("KMGYGIMDKPRPMGZIYYIZVINVSEWPQBJOCDUFOQKLOMJUVVZLZWGJHOVSSBYJIAHJBCXUSMRUMGHEFESEYEHUGFYDIKATKFWORPMTXTLQTIAKRYEWZXLNYEZOBIRFMQDSIPEEBCYWHNBPRATXZHQGTNXKFUGCHAQAAWLNBLTAJMCULQWCQFFQRZDWNVSUSCBDMLQXYFBPHRCA");
    tmp_msg_0.text.assign("WTUMAHCURXGFWYBCQFZSQKARUGJLRUXHLLNSPEJTWMZVAPKWUCJQJQDXPLCRKPXAJCDEVHGMTANRGZGIEOWJSLSTWCQLANVNBRYMTDQLIIKSDGQQWKPTLTMTOSNVJWXHWMFZBYDNUNLIBHO");
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
    msg.setTimeStamp(0.35686444746173185);
    msg.setSource(63385U);
    msg.setSourceEntity(119U);
    msg.setDestination(44898U);
    msg.setDestinationEntity(239U);
    msg.op = 18U;
    msg.name.assign("ZAZINVFHUASCSMNGBIADGSWPMHVGENQJREURDOETZWABJWSKTDTPGHSLEOWGJOBPL");

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
    msg.setTimeStamp(0.7674190869162592);
    msg.setSource(45567U);
    msg.setSourceEntity(218U);
    msg.setDestination(46287U);
    msg.setDestinationEntity(12U);
    msg.op = 122U;
    msg.name.assign("HLKWLMICWOACHUBQXEWVABIZLDYGYDITDWEOTPNAIHYJRRVVNKUEVYDSAOMRYWVZSJQOAFRCGQJHKFRCMNSSICWA");

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
    msg.setTimeStamp(0.07004192925252106);
    msg.setSource(56284U);
    msg.setSourceEntity(240U);
    msg.setDestination(45273U);
    msg.setDestinationEntity(137U);
    msg.op = 83U;
    msg.name.assign("THZRYQLIBACWUPWSTCEAOKALTVYMYCPCWPNCKFVUDLTRGHOONCVWGBYPRNSIHBGFLJUZKUJDEQHOITEHZOWGFDMBQMSKJXHEUUZVRXXBKVVFQRZAUAYWPLJIGYQUEJMXPCLTZQEP");

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
    msg.setTimeStamp(0.4464242746279926);
    msg.setSource(19590U);
    msg.setSourceEntity(187U);
    msg.setDestination(31141U);
    msg.setDestinationEntity(94U);
    msg.type = 126U;
    msg.htime = 0.3696777304008608;
    msg.context.assign("OKXWMPQNGHFJBMAVMVNYELEPEQCDIPFKGLWWKTARNGGKPERXXBDCIIRHBUNGRNJOCSLYZRDBWUINTPLHYLAMHSVVRVMUQCTRMAQVWKXXZDFGOJHRWUVSOGYICEULDGMKSSQPZCKTHNSQGLARTJIUNHSTEBUMEDJBXXPJUTPBDFONPKFZLIQYJMIWLKFDUQMHALZJJJBBVZYEYHWFFNVDOCPGEASXYOUADHQOSWIOZYRZOXVWZAETTQKFCYCI");
    msg.text.assign("QIFRAUJWOUQMZIRFZPIUXKHTOHXLESDPKMCMZQQHRKRXMVZFHALGVPOBNSLMHNVUBBKDBXDACJBYKXIDLGBIEMSVDZNODBASXLTAFCOZDORYPQJNSGNXOKYDWVNYACDGTRGKEYSNWUIVCHIFMUJILSUEGGOFPYKWHQMTFBLXHCFVJMAVEHEUJWWTJEIYBQTWCOYTLACZUUWEKQFTKSJPAMCBJRZQPFWRLQSWTXNTZAZGRXILJEHESPDPNGY");

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
    msg.setTimeStamp(0.015623894441395447);
    msg.setSource(359U);
    msg.setSourceEntity(174U);
    msg.setDestination(38161U);
    msg.setDestinationEntity(180U);
    msg.type = 200U;
    msg.htime = 0.40808010479790346;
    msg.context.assign("YIFRHTOCVOZBXLHVWJMOSVSSWDWSLSMCOHGDWMEQJIVGEMWUPAEZQFPUTXPHJJYLNVWDQOHFUPKKQJHTKHIDDREUHIUDYOIXYCERGRMLGFWHKCABKLSVBGBGTSPVXRRLEBBFFAZYUZRLKNXWXKIQCUOYKNGDNWTZGVJWNCLYINCZUZZSNFTPBQCTYEFTVRJCBIJMATPDJDSQKXFNZMNLTQZYIRCOUMXOPAMGEPBHQAABPFYELUAOVQNKXMAE");
    msg.text.assign("LAWHVCUZFOZKBXGHAYBWFYEIHBVZPRXZITLQLSTTVGCMLCQQXFRAVYRPAJMHTLJZJKOXNJLUSUTRWCSIOTBQYSFOBEBSDOQDRCHEIEKKQZGVJZKABSSIKPITKWSBQJCEANGAJANFPTCPRHNFPNIIOVYGUGWDDONLWECWYPZGBFPELUUVRHRMXYNAMHVRYKHGOUDQM");

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
    msg.setTimeStamp(0.10732064436327027);
    msg.setSource(52730U);
    msg.setSourceEntity(89U);
    msg.setDestination(17058U);
    msg.setDestinationEntity(90U);
    msg.type = 28U;
    msg.htime = 0.03178331967459702;
    msg.context.assign("EBLCYNMIFWDSSVAPJUETXNPYFLCUENXGXGXGPRXGYTZKQLQQJFBMDUOCUJGANPPVSOMIJOLDTILTOYOEKRMSXRTUVMWLWHBFIMFTMNGOOOWVJFETBFNVRKYBZJUNEIBGZDRZDDEMHKHXUYHVQCLOYAUKLMHJWGXKQCDHPWZCASIEHHQACWSIPKAGKCKFRSNVUREDJGIXVBZZJSZRPLPZMQXAJSABOAWBWTISPUYYLWF");
    msg.text.assign("EDWTTBFUFOQWENBRGHEAIXVYJSEALLURJNSFJRHYMESDSNWZQLLTOQFKBCISSIRLBPMTDTOUQEXNDZJHHADMDMNRILDOPCGHRYODYZLXGAJDQMGAGGUWWKFTCRTOJGETAXIFZVWZEYHKHIYICKSLNWQZJNBBSRXAYVUGZIWPFXTMJWPKIIPHKLVCDJVYXAQOMBFERWVPOQJZ");

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
    msg.setTimeStamp(0.06929190575550248);
    msg.setSource(18598U);
    msg.setSourceEntity(99U);
    msg.setDestination(40269U);
    msg.setDestinationEntity(211U);
    msg.command = 194U;
    msg.htime = 0.38732801853349497;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 56U;
    tmp_msg_0.htime = 0.5212136803488866;
    tmp_msg_0.context.assign("DPWSANRYPRULXFQPLMZTSVVDRFJITFJXESTZHLKUGXCFVEJSWSLFAONMKTUEYIQAXJQPOOEUOJHSOGHAXDEEYLQRTMFEPLPIKRBMATRWQMWTGPOYGOHDXQEUGMIVWKWRZHFSWQDNNZJZC");
    tmp_msg_0.text.assign("IWNMDHNAPNBIEXKQECRFWHVVTNPALBCLJPMVBOTGWCEFXJLXSYBJWIUZHJLDEKBTOPZNRLPRDBGNAVCWRSQKMYFTGKCSSYAGQTLDWGTMEBKKNFEVAUSRKZZAIQXVBHHOCFIZEFASPPOIJIICRMNZEOXQELXGGUDWZTTWAQUQMMFAAHKPJHYOMIDMXNBQW");
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
    msg.setTimeStamp(0.7749518429170739);
    msg.setSource(29026U);
    msg.setSourceEntity(92U);
    msg.setDestination(39117U);
    msg.setDestinationEntity(189U);
    msg.command = 45U;
    msg.htime = 0.7883980599769502;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 22U;
    tmp_msg_0.htime = 0.5031997305057337;
    tmp_msg_0.context.assign("ORXQJSUKKFPAIMMHFBFGYKKHKEWQKEY");
    tmp_msg_0.text.assign("XLMJPEGMRMHSGBBNHPYYVCOUGEKLKFLOUZREYDVJMTACJFZYYLQKEDKTPNOKTSHRZUJFEEVCTSGQBMYFISANBHRWWUEPFWZFRHVFOGPOITPXOICSSBQKGMCBWQULCWFIXGZUJVNQZWMBRSR");
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
    msg.setTimeStamp(0.5963075223912352);
    msg.setSource(19049U);
    msg.setSourceEntity(5U);
    msg.setDestination(34551U);
    msg.setDestinationEntity(55U);
    msg.command = 0U;
    msg.htime = 0.025470947974288838;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 222U;
    tmp_msg_0.htime = 0.16751077743022091;
    tmp_msg_0.context.assign("ASROMQTYFUHDTTQWJUGSPYYEDJVPIDELZKEEKTJQBMU");
    tmp_msg_0.text.assign("OWIHJOKFPEFAIZHNTFJUNEMWDTUGYQJQSTQLZIRCYSCBDQAIPKSZVLXXHUQVTHHFGAYTLVACDYBIZYSGQDJANUMGYLNNGAEAMBRL");
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
    msg.setTimeStamp(0.9622941760935232);
    msg.setSource(57966U);
    msg.setSourceEntity(119U);
    msg.setDestination(20844U);
    msg.setDestinationEntity(160U);
    msg.op = 124U;
    msg.file.assign("JAFLQFTDZLPMZJSGMWDSNCGG");

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
    msg.setTimeStamp(0.2542514102130613);
    msg.setSource(2980U);
    msg.setSourceEntity(84U);
    msg.setDestination(28882U);
    msg.setDestinationEntity(57U);
    msg.op = 200U;
    msg.file.assign("QIVVAJAYUPIOEVGBUQCZIEUWHHBZXNBNDZVOSCSXZWLFXSTJSLUMOKKHHFHSHPODVPCPWJJWQGPWIYFBCIJTQNHMICZGQUYWMRTAEMCEQPMFHYPYTLGXDLNPTKSGXVEFACEALJJIRTJBYUPGTVNDZRPFYUOKFVKMWVMFFAAESOSODNEGIGWKRNUZWXMYZXRYDHXLKLQDUIYXKRCRMEANENMBODDQWBADUKLGOSSIBRTOQTCQXZRHGZBJBAKR");

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
    msg.setTimeStamp(0.9241711157998598);
    msg.setSource(22448U);
    msg.setSourceEntity(247U);
    msg.setDestination(4901U);
    msg.setDestinationEntity(196U);
    msg.op = 163U;
    msg.file.assign("DOLSGCCBLHTQXIYKDJVTVGKQFFEVJHBXKCJSNHDSTERHEUYQKVWLDBQXSTAGLUFPXVDRJSKQPWIATYKOXUOULEMBMISDJJUVEIRWMTRVYNAQH");

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
    msg.setTimeStamp(0.6400949969112992);
    msg.setSource(21276U);
    msg.setSourceEntity(38U);
    msg.setDestination(49358U);
    msg.setDestinationEntity(183U);
    msg.op = 199U;
    msg.clock = 0.15643672304184952;
    msg.tz = 3;

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
    msg.setTimeStamp(0.730380009654087);
    msg.setSource(3959U);
    msg.setSourceEntity(207U);
    msg.setDestination(64680U);
    msg.setDestinationEntity(94U);
    msg.op = 87U;
    msg.clock = 0.3584782090543962;
    msg.tz = 64;

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
    msg.setTimeStamp(0.930649527115056);
    msg.setSource(53526U);
    msg.setSourceEntity(152U);
    msg.setDestination(62912U);
    msg.setDestinationEntity(232U);
    msg.op = 169U;
    msg.clock = 0.9722231720348552;
    msg.tz = -26;

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
    msg.setTimeStamp(0.6425382084511675);
    msg.setSource(16910U);
    msg.setSourceEntity(177U);
    msg.setDestination(34836U);
    msg.setDestinationEntity(214U);
    msg.conductivity = 0.22839807594654582;
    msg.temperature = 0.603524287263976;
    msg.depth = 0.039795384349701535;

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
    msg.setTimeStamp(0.29783917510021796);
    msg.setSource(38304U);
    msg.setSourceEntity(26U);
    msg.setDestination(51161U);
    msg.setDestinationEntity(105U);
    msg.conductivity = 0.6457651825359079;
    msg.temperature = 0.178484784274776;
    msg.depth = 0.9880651550074756;

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
    msg.setTimeStamp(0.01737463769620118);
    msg.setSource(43778U);
    msg.setSourceEntity(93U);
    msg.setDestination(42092U);
    msg.setDestinationEntity(150U);
    msg.conductivity = 0.07863418733669503;
    msg.temperature = 0.6229914675454211;
    msg.depth = 0.14103162940564362;

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
    msg.setTimeStamp(0.9265937096438476);
    msg.setSource(24255U);
    msg.setSourceEntity(117U);
    msg.setDestination(30779U);
    msg.setDestinationEntity(236U);
    msg.altitude = 0.5661165373037648;
    msg.roll = 18768U;
    msg.pitch = 3361U;
    msg.yaw = 27258U;
    msg.speed = 8680;

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
    msg.setTimeStamp(0.22436073304628834);
    msg.setSource(38027U);
    msg.setSourceEntity(146U);
    msg.setDestination(10459U);
    msg.setDestinationEntity(17U);
    msg.altitude = 0.5498912468540582;
    msg.roll = 61841U;
    msg.pitch = 55262U;
    msg.yaw = 5324U;
    msg.speed = -631;

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
    msg.setTimeStamp(0.11594858376517025);
    msg.setSource(9775U);
    msg.setSourceEntity(99U);
    msg.setDestination(48897U);
    msg.setDestinationEntity(133U);
    msg.altitude = 0.43420340753382625;
    msg.roll = 53286U;
    msg.pitch = 25326U;
    msg.yaw = 7825U;
    msg.speed = -4682;

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
    msg.setTimeStamp(0.17061356927049076);
    msg.setSource(32292U);
    msg.setSourceEntity(71U);
    msg.setDestination(63153U);
    msg.setDestinationEntity(79U);
    msg.altitude = 0.3729400056310803;
    msg.width = 0.601151059428476;
    msg.length = 0.561497532657621;
    msg.bearing = 0.003934882673668483;
    msg.pxl = -25524;
    msg.encoding = 65U;
    const signed char tmp_msg_0[] = {-88, -86, 69, 11, -34, 51, 20, 29, -54, -28, 11, 31, 67, 122, 15, 20, -48, -19, 39, 39, 78, 40, 103, 94, -25, -61, 18, 63, 30, 49, -80, -21, -105, -65, -100, -41, -1, 22, -49, -85, -102, 21, -60, -60, 48, -90, 104, -97, -56, -8, 55, -6, 38, 8, -79, -84, -114, -115, 77, 93, 14, -28, -70, -71, 36, 102, -34};
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
    msg.setTimeStamp(0.04351764309049477);
    msg.setSource(50202U);
    msg.setSourceEntity(213U);
    msg.setDestination(34077U);
    msg.setDestinationEntity(246U);
    msg.altitude = 0.5136856115753854;
    msg.width = 0.2727468410445325;
    msg.length = 0.290508334631675;
    msg.bearing = 0.16934127461947124;
    msg.pxl = 12456;
    msg.encoding = 63U;
    const signed char tmp_msg_0[] = {114, -22, -69, 92, 84, 66, -106, -93, 45, -15, -13, -16, -34, 42, 123, -97, -60, 81, -33, 98, 64, 80, 12, -116, -8, 68, -43, -50, 92, 52, -6, -72, 38, -2, 97, -117, -15, 99, -127, -69, -99, -112, 17, -20, 95, 73, 7, -36, 43, -18, -101, -47, 18, 73, -100, 121, -11, 11, -23, 13, -101, -86, 73, 89, -17, 70, 86, 38, -22, 32, 39, -99, -32, -103, -53, -76, 105, -75, -45, 122, 126, -53, 75, -103, 99, 92, -108, 68, -37, -27, 120, -51, 109, 106, -92, 55, -119, -36, -120, -115, -15, 57, 45, 35, 18, -25, -95, 63, -6, -120, -34, -51, -72, 114, 102, -50, -13, -111, -92, 13, 106, -106, 119, 118, -54, 85, -128, 25, 86, -107, -74, -127, -87, -101, 99, 69, 36, 19, 30, -32, 53};
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
    msg.setTimeStamp(0.9731362846961921);
    msg.setSource(55629U);
    msg.setSourceEntity(173U);
    msg.setDestination(22669U);
    msg.setDestinationEntity(187U);
    msg.altitude = 0.9384486750216473;
    msg.width = 0.9993814073556239;
    msg.length = 0.13530278712342947;
    msg.bearing = 0.97601983595337;
    msg.pxl = 32743;
    msg.encoding = 89U;
    const signed char tmp_msg_0[] = {-21, 108, 123, -12, 45, -117, 38, -85, -73, 33, 99, -60, 123, -10, 91, 35, -41, 39, 15, 18, -96, 123, -17, 1, 35, 23, 30, -35, 22, 120, 8, -63, 53, -79, -30, -76, 68, -54, -30, -69, 104, -93, 54, 44, 19, 16, 125, 111, -82, 36, -128, 3, -77, 13, -24, -117, 37, 126, 85, -49, -70, 39};
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
    msg.setTimeStamp(0.20598120734863345);
    msg.setSource(54417U);
    msg.setSourceEntity(139U);
    msg.setDestination(35652U);
    msg.setDestinationEntity(6U);
    msg.text.assign("BJIIJASGCEBYRWHTPTQLTPEMNJJIGGMSZIDVOBHOYTZLAMSVLYAL");
    msg.type = 88U;

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
    msg.setTimeStamp(0.8349474018784478);
    msg.setSource(55895U);
    msg.setSourceEntity(155U);
    msg.setDestination(47303U);
    msg.setDestinationEntity(170U);
    msg.text.assign("NPRZUXXSBOUZCQYOARVNLFJRDXCWXGDMRRYFIHYGLCLEDXUVKEINUJSZJSNQJDKIZZFHOIHCAIHIFHFUIVTMWAAQARGEAAASORZZWELYWQTQN");
    msg.type = 176U;

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
    msg.setTimeStamp(0.10453317674501994);
    msg.setSource(59201U);
    msg.setSourceEntity(207U);
    msg.setDestination(41543U);
    msg.setDestinationEntity(82U);
    msg.text.assign("DFIYABTQXEQL");
    msg.type = 117U;

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
    msg.setTimeStamp(0.21251451191269033);
    msg.setSource(13351U);
    msg.setSourceEntity(183U);
    msg.setDestination(40982U);
    msg.setDestinationEntity(1U);
    msg.parameter = 138U;
    msg.numsamples = 153U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 60084U;
    tmp_msg_0.avg = 0.8328965333537007;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.8772470415877738;
    msg.lon = 0.6828815821984452;

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
    msg.setTimeStamp(0.936294302291737);
    msg.setSource(6109U);
    msg.setSourceEntity(121U);
    msg.setDestination(30140U);
    msg.setDestinationEntity(38U);
    msg.parameter = 100U;
    msg.numsamples = 82U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 34773U;
    tmp_msg_0.avg = 0.6200071367513584;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.3401676642421705;
    msg.lon = 0.25240699852262005;

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
    msg.setTimeStamp(0.41452672032399784);
    msg.setSource(35377U);
    msg.setSourceEntity(100U);
    msg.setDestination(54488U);
    msg.setDestinationEntity(246U);
    msg.parameter = 191U;
    msg.numsamples = 129U;
    msg.lat = 0.18451994452107978;
    msg.lon = 0.0855760708024631;

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
    msg.setTimeStamp(0.2207464205819628);
    msg.setSource(23788U);
    msg.setSourceEntity(236U);
    msg.setDestination(50758U);
    msg.setDestinationEntity(188U);
    msg.depth = 61058U;
    msg.avg = 0.449487854125206;

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
    msg.setTimeStamp(0.995757333032562);
    msg.setSource(21489U);
    msg.setSourceEntity(47U);
    msg.setDestination(20716U);
    msg.setDestinationEntity(81U);
    msg.depth = 38704U;
    msg.avg = 0.0975792418703112;

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
    msg.setTimeStamp(0.7484704613822479);
    msg.setSource(15781U);
    msg.setSourceEntity(78U);
    msg.setDestination(36574U);
    msg.setDestinationEntity(116U);
    msg.depth = 14544U;
    msg.avg = 0.23378832752621126;

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
    msg.setTimeStamp(0.22688249326311016);
    msg.setSource(24661U);
    msg.setSourceEntity(229U);
    msg.setDestination(19840U);
    msg.setDestinationEntity(194U);

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
    msg.setTimeStamp(0.11041097748680218);
    msg.setSource(56398U);
    msg.setSourceEntity(53U);
    msg.setDestination(48951U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.45859980759696595);
    msg.setSource(9192U);
    msg.setSourceEntity(174U);
    msg.setDestination(32132U);
    msg.setDestinationEntity(8U);

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
    msg.setTimeStamp(0.22266281532512555);
    msg.setSource(43210U);
    msg.setSourceEntity(141U);
    msg.setDestination(17378U);
    msg.setDestinationEntity(23U);
    msg.sys_name.assign("YFCNHWQMVAKBTJUDKJRGEITLTZBUACKSUIRXYMPLKJZGHVRITDYFNJQGYFHMEABZBWNWFKCDPBPTSSDCNPHEWEAAMVWERBKGFMYOQPSCCECNSQTVZLUQEOONAKBRMDSPULCJOTGAMDDXOGUPBJXKGUXOYHRLM");
    msg.sys_type = 50U;
    msg.owner = 7785U;
    msg.lat = 0.002645933269751044;
    msg.lon = 0.7035985275459143;
    msg.height = 0.20052967388623655;
    msg.services.assign("VABMQXPEVDAVRTRFSDZWCFYMBYUETEMJQEDHWXMOUSOHHLCGFPG");

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
    msg.setTimeStamp(0.9167729002530982);
    msg.setSource(35798U);
    msg.setSourceEntity(112U);
    msg.setDestination(55384U);
    msg.setDestinationEntity(244U);
    msg.sys_name.assign("HXZURFWVLQAZCXGOVPXODETUTKCVGUKIVXUUCNHTWEQZYKWSCVREISCOATWJAUGEODILSHOFZNRGGSFBJHPSPYJKNWQJTSIZYUWSMLCC");
    msg.sys_type = 136U;
    msg.owner = 7283U;
    msg.lat = 0.606192146220893;
    msg.lon = 0.9824400738402861;
    msg.height = 0.4590055084687982;
    msg.services.assign("LMGVVRCKDGJBESRCBWIYIHENYENXORXVMCESTWXLMKWTYMVWZPYAZDULLIDLFUUHKRKMFPHTVAXFDZUCZGJGHXPFTOAKMCYLSSHBGWFETUYBGNSMZJWOXRANCRGUSIQPXFFRYRNVLOLXJAZKSOBKQYQGTI");

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
    msg.setTimeStamp(0.306911158260456);
    msg.setSource(37078U);
    msg.setSourceEntity(179U);
    msg.setDestination(49844U);
    msg.setDestinationEntity(164U);
    msg.sys_name.assign("OVGUQUDBLQRMQCCAYVWHSYHUDUBWSNHAQDSEPUNMEIXUAMVLDIGBZXUIVZDTJLWNQCSVCDVEZWPZOYSJKHINMSDXUWMHVNTFKTYOKYNGOUZLJFCTPAENWRZHCXPLJKNAYAMOHEYQJRGYGBFWAICMRBPIFYHILRPBWDRPGXW");
    msg.sys_type = 211U;
    msg.owner = 46415U;
    msg.lat = 0.18041567069156605;
    msg.lon = 0.7510826995605591;
    msg.height = 0.01166496406349704;
    msg.services.assign("UEPNWXWATEYURSGUHPWOISMZTNXHADBOFHVCKNWDNCVZTNFFPASMVCZLCIWXKDIPUMCBCQXITOMHKGXQSDKZCZJUHNZSUCBXHLREQAEBJOJJFKEJYLRYERKLELMNNFDIVZTGDAJTOVYATZIOPWKYPNXDSDPIMXLQQSTRGEBJBFALFRBUOZXPTUOCEWBRCVZSBFWMKJYGJGSMVHQRQLRGLFYIQHBQAPYYG");

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
    msg.setTimeStamp(0.6261593947249554);
    msg.setSource(8699U);
    msg.setSourceEntity(110U);
    msg.setDestination(11315U);
    msg.setDestinationEntity(228U);
    msg.service.assign("LBEBWRKUQSEZTAAHRCATXPHHKEUMNSZFUIDNMVOGYQYBOVVWZGAGJPAWAQDMLRTNKRBKKHQHPXYVDGWYALQRJFIBJLDDIGRUPXFSEXLJFNXXMHVJSCLZZYGGQKCPNVUSFFDBEPLXLCQFYBZRNGGOMTWIXLASXTIJNKCMIDCUOHCBYUNOZWPDIKCCUOJQMFGFTVSMATSMEOEKZQTWOZVUCSJDXEAHJPTIYHZ");
    msg.service_type = 40U;

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
    msg.setTimeStamp(0.7353399967512089);
    msg.setSource(3852U);
    msg.setSourceEntity(8U);
    msg.setDestination(5335U);
    msg.setDestinationEntity(124U);
    msg.service.assign("GPODYFXVXRIWGAJBGFYMEFVUQVNIQKVKAOUHYSGWDDGYEWYTFTQPSUIEWHWPDXRWSYMBVCIYXLJZYQRSRVITRCA");
    msg.service_type = 253U;

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
    msg.setTimeStamp(0.36570208587866226);
    msg.setSource(44350U);
    msg.setSourceEntity(206U);
    msg.setDestination(49523U);
    msg.setDestinationEntity(60U);
    msg.service.assign("ZHEUMJBUPPWCRPWFSTGHRZBNSEDHNXNWNMHDBIVWDTBCDYDZNURQASQYXXJIMXPDEAYOSTORIAGOPMTPPTJWYKCUNZATWZBTVYPKZHPMIBNOVHSMOZURJGVOQALKKAKLGLPMMJEUUKWDLFFU");
    msg.service_type = 232U;

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
    msg.setTimeStamp(0.6357610899565573);
    msg.setSource(55892U);
    msg.setSourceEntity(95U);
    msg.setDestination(16700U);
    msg.setDestinationEntity(51U);
    msg.value = 0.341706994519264;

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
    msg.setTimeStamp(0.756007826947118);
    msg.setSource(10452U);
    msg.setSourceEntity(11U);
    msg.setDestination(54967U);
    msg.setDestinationEntity(126U);
    msg.value = 0.41143778214138094;

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
    msg.setTimeStamp(0.0032907098401193657);
    msg.setSource(19598U);
    msg.setSourceEntity(224U);
    msg.setDestination(60966U);
    msg.setDestinationEntity(240U);
    msg.value = 0.2753367147535123;

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
    msg.setTimeStamp(0.5161648254305066);
    msg.setSource(57182U);
    msg.setSourceEntity(253U);
    msg.setDestination(5200U);
    msg.setDestinationEntity(96U);
    msg.value = 0.19893608913218253;

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
    msg.setTimeStamp(0.5096732429071786);
    msg.setSource(49686U);
    msg.setSourceEntity(121U);
    msg.setDestination(54252U);
    msg.setDestinationEntity(202U);
    msg.value = 0.3681220846377229;

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
    msg.setTimeStamp(0.6882659324801914);
    msg.setSource(35080U);
    msg.setSourceEntity(77U);
    msg.setDestination(25130U);
    msg.setDestinationEntity(76U);
    msg.value = 0.393240069717958;

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
    msg.setTimeStamp(0.5887806846592226);
    msg.setSource(24666U);
    msg.setSourceEntity(222U);
    msg.setDestination(53952U);
    msg.setDestinationEntity(253U);
    msg.value = 0.315830491275799;

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
    msg.setTimeStamp(0.7084660660153663);
    msg.setSource(51908U);
    msg.setSourceEntity(188U);
    msg.setDestination(23762U);
    msg.setDestinationEntity(80U);
    msg.value = 0.6662402303492014;

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
    msg.setTimeStamp(0.3502255310910545);
    msg.setSource(42771U);
    msg.setSourceEntity(156U);
    msg.setDestination(8202U);
    msg.setDestinationEntity(28U);
    msg.value = 0.06318897642518817;

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
    msg.setTimeStamp(0.6682793482144558);
    msg.setSource(55319U);
    msg.setSourceEntity(78U);
    msg.setDestination(20946U);
    msg.setDestinationEntity(128U);
    msg.number.assign("NBINFLDXXBSGPTAFTG");
    msg.timeout = 36674U;
    msg.contents.assign("ELIYIKSWQUVSTBSQRIMTCABDWEFCEZCIPTVMZXNBCJKCCQKAHWDAQGTIBSAHPRQKZXZCLDOBYEPXRSWINQGWTHUZAZXHMRRONLUWYPLMTYDFFFKKTHHOIUOVJIOLMUOAMHJNJDHKNDOVGETRWFPMQOJJGTYMUBBLDKIPALGNXGMSMREOQJEIPWYNCXLFVUFRWAKBSZUDNXGBSPGUFPRXEJHKCGDCF");

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
    msg.setTimeStamp(0.18889503866459523);
    msg.setSource(4703U);
    msg.setSourceEntity(53U);
    msg.setDestination(58785U);
    msg.setDestinationEntity(246U);
    msg.number.assign("ZHMNTVEVOUVACZMIOCMXAKODFJQYUPZWBMUVWWTYROWVEVJLBNAURRYMDSNGNTJKFAPIBHLQBBCSSFSUHRXDMGLLXEFHNXICYSGDDFSZDXGLQTBRGIRZEAJGNIBPUJXYPKSWFFXPIAJIQHFWALZKORIDTXCVBYGVNNTOOOIQEJMARWDEAXLKZQYTULSAWVKQGDHYBQ");
    msg.timeout = 59272U;
    msg.contents.assign("KONTQTPXAGSWQDYJTCCIZXKYQNYFMPPAUFOTZZGITR");

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
    msg.setTimeStamp(0.8039793165546735);
    msg.setSource(36302U);
    msg.setSourceEntity(40U);
    msg.setDestination(10064U);
    msg.setDestinationEntity(88U);
    msg.number.assign("NGFQQQUUXPTSGIQCTBWVDSWAJSFMD");
    msg.timeout = 41786U;
    msg.contents.assign("FSBNVWAGVXXHOIJSFKHOQBLCFYVKTLIZUKYBSIMTPBNINPADXREFFSCRCGPOYFIBIWEVGADLPYOUKIDZPDMNYCXEUZFMHVHLZPHQQWFJRGJKMSWUJCOAQTFAYJMJHLOHHPIPQQQXNWCSJCAYYSPNZLWSTTVMJZKIOBUUWEEMZ");

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
    msg.setTimeStamp(0.052035956582437315);
    msg.setSource(29145U);
    msg.setSourceEntity(146U);
    msg.setDestination(57272U);
    msg.setDestinationEntity(0U);
    msg.seq = 2965966062U;
    msg.destination.assign("SPJUAKPHDRCVFSRWZRKB");
    msg.timeout = 7848U;
    const signed char tmp_msg_0[] = {73, -85, -97, 0, 53, 4, 113, 94, 104, 110, 46, -100, 94, 94, -106, -31, -104, -83, 44, 5, -8, 32, 105, -28, -55, -79, 101, -124, -95, 34, 22, -37, 120, -7, 64, -54, -118, 75, -24, -7, -87, -38, -19, 35, 66, -5, -98, -90, -40, 21, 106, -121, 65, -105, -4, -72, -127, -55, -106, 118, 104, -97, -96, -115, 74, 102, 113, 10, 98, -15, 111, 30, -20, -72, 5, -75, -23, 97, 35, -111, -56, 101, 7, 76, 56, -61, 8, -4, 5, 74, -96, 102, 121, 28, -14, -32, 100, 105, 59, 119, -62, -39, -76, 119, -94, -75, -8, 55, 47, 32, 114, 71, -55, -42, -1, -103, -26, 68, 56, 79, -50, 54, 17, -40, 87, -55, -96, 37, 65, 65, -57, 27, 105, 18, -119, 9, -110, 85, 96, -38, -63, -73, 113, 72, 112, 19, -29, -103, 26, 34, 113, -50, -14, -31, -25, 79, -84, -64, 110, -11, 36, -7, -55, 123, 0, 107, 55, -60, 107, -92, 18, 47, -81, -34, 4, 15, 2, -68, -101, -91, 113, 101, 118, -30, -69, 30, 72, -100, -55, -26, 108, 14, -99, -18, 28, 18, 104, -113, -105, 105, -98, 111, 51, 117, -4, -54, 109, 80, 22, -72, 70, 24, 121, -3, -71, -88, 39, -36, -42, -56, 64, -64, 63};
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
    msg.setTimeStamp(0.558154940695269);
    msg.setSource(1239U);
    msg.setSourceEntity(122U);
    msg.setDestination(39721U);
    msg.setDestinationEntity(223U);
    msg.seq = 3147759653U;
    msg.destination.assign("PZDHJRCFJVEANYNJZFKYYOAIUNXVOJWTPUQVFOSDSADBCJNZMUMIFEEFUGAKLNJEGQAL");
    msg.timeout = 17523U;
    const signed char tmp_msg_0[] = {69, -92, -79, -27, -109, -25, 88, 114, -49, -88, -29, -103, 89, -30, -49, -7, -21, -8, -19, -87, 102, 92, 14, 74, 10, -45, 121, -58, -116, 17, 29, 106, -59, -45, 60, -98, 117, 37, -123, -59, -82, 124, 75, -54, 61, 94, -73, 59, 32, 74, -1, -7, -124, 111, -22, -125, 91, -101, -62, 91, -71, 59, -21, 76, -12, -99, -96, -118, -89, 11, 60, -110, 51, 41, -105, -59, -101, -53, -115, -38, 60, 95, 89, -84, 69, 82, 104, 5, 102, 89, -5, -20, 79, 40, 25, 47, -55, -85, 77, -102, -40, 85, 4, 5, 120, 48, 44, 21, 46, 66, 63, -23, -7, -63, 67, 107, 17, -66};
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
    msg.setTimeStamp(0.26358386387556043);
    msg.setSource(8039U);
    msg.setSourceEntity(246U);
    msg.setDestination(12895U);
    msg.setDestinationEntity(70U);
    msg.seq = 1806460105U;
    msg.destination.assign("FZGWWQIFYCKNPCJQMTSJZEHDCPAMXUUQNBPFWMOFDYKNCLBYIBXBXPSFNACQPWNLOERAJYHSIERCFABBTRWVERBNAWJUTVZLUOFGHLIIZTQKKLZUSOYGHHRFBDEGJXTVTVUPNHUMOSOMFLZYOKKDGAUXISKQXLEDUTSRDORRSKYQPBRFSVJMMTVZZHDEYZYIPMCWAORNPCHVOMHWGLJW");
    msg.timeout = 13011U;
    const signed char tmp_msg_0[] = {51, 48, 93, 75, -102, 124, -59, -17, -90, -94, 26, -15, -110, 120, -94, 114, 71, 9, 57, -88, 115, -31, -60, 20, 115, 50, 114, 107, 126, 73, -43, -101, 47, -43, 108, 95, 28, -92, -122, 79, -54, -41, 57, -17, -3, 38, -100, -96, -92, -115, 109, 100, -105, 39, -128, 2, -64, -11, 91, -41, 125, 17, 16, 119, 107, 75, 74, 95, -87, -56, -114, 69, 110, 50, 47, -59, -65, 15, 54, -100, 50, -65, -7, 18, 118};
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
    msg.setTimeStamp(0.592372242089452);
    msg.setSource(25205U);
    msg.setSourceEntity(253U);
    msg.setDestination(19123U);
    msg.setDestinationEntity(92U);
    msg.source.assign("VKJNDUFVODBXGPJWJRYJDFBHZEODKBCOLJZBFIDPFDEHGYCHUQWTEOKSRUHBGAAFJYGYXXYZLLTPMCYOQERXUTJQQLQCHAJZWINEWSXLQUALZCBCGDPNQPBCKRBFJMTI");
    const signed char tmp_msg_0[] = {-101, 31, -71, 0, 88, -78, 87, -69, -2, -81, 101, -37, 24, 106, -4, 37, 19, -106, -43, -120, 113, 108, 126, -26, -107, 65};
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
    msg.setTimeStamp(0.3368036855368226);
    msg.setSource(64545U);
    msg.setSourceEntity(103U);
    msg.setDestination(18996U);
    msg.setDestinationEntity(143U);
    msg.source.assign("DFONCITQORKWAFYJUZWKDJQWPBZUZZFMOQRXLPRCIPXXPKMEMTWRLOBTGMFYRUKWOVEVKGTCMUGNCUYSHYYOVNWXIQYALITNIQKDTYSIHHLWLEEMJYOIMNVXBEJGUHZUXZDCQHPSQJJFMNHSLCIPJQBXCDEZINADTFGUAGORLMPDEVUNBJUVVNBCAAKANIXSJEBVSLD");
    const signed char tmp_msg_0[] = {47, -118, -120, 63, -43, 6, -94, 73, 35, 121, 34, -83, -88, 124, 122, -13, -125, 61, 1, 100, 33, -42, -13, -126, 100, 70, -122, -111, -103, 55, -53, -14, 83, -48, -39, -115, 110, 44, -22, -66, -93, -67, 47, 49, -123, 97, -16, -126, -76, 30, 33, -26, 87, -47, -16, 52, -71, -22, -59, 84, 50, 50, -40, -26, -16, -81, -101, -55, 17, -17, -37, 89, -7, -108, -11, -83, 68, -19, 90, 38, -23, 6, 125, 63, 112, 48, -19, -29, 65, 57, 110, 43};
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
    msg.setTimeStamp(0.20433789304693484);
    msg.setSource(28877U);
    msg.setSourceEntity(96U);
    msg.setDestination(29070U);
    msg.setDestinationEntity(127U);
    msg.source.assign("DQOZIZPNXTHDNODWTLUWNUDMAVTQVWMJHHGTKIYQPBSRPRKALBQOQBKZIGMMTVIYLTFUYKMFITPJ");
    const signed char tmp_msg_0[] = {97, 120, -114, 75, -96, 9, -77, 60, -128, 116, -14, -11, 113, 124, 0, 94, -70, -63, 118, 90, -117, 98, -57, -54, -117, 32, -39, 53, -86, 51, -119, -55, -105, 21, -79, -36, 14, 90, 108, 45, -109, 27, -42, 80, -78, -6, -50, -96, 113, -10, -1, 33, -46, -59, 2, -80, 83, -17, -103, -40, 76, 68, 20, -114, -110, -13, -32, -110, -26, 103, -46, 19, -27, -70, 34, 79, -10, 95, 61, 49, -39, 93, 55, -74, -30, -4, -47, -22, -78, -21, -79, 29, 60, 31, 126, 111, 38, 105, 58, 10, -62, 81, -40, 76, 105, 16, -37, -12, 60, 10, 31, 20, 49, 78, -13, -5, 35, 97, 114, 92, 110, -95, 121, 11, -41, -42, 32, -2, 41, -39, -124, 73, -23, -13, 45, 7, 56, -66, -34, 97, -63, 19, -107, 69, 64, 31, 17, -11, 66, 121, 42, -78, 37, -100, -107, -86, 96, 123, 93, 124, -86, 92, -41, -59, 82, 72, 44, -112, 2, 72, 62, 65, 27, -74, 39, 104, 36, -1, 13, -1, -18, 15, -78, 7, -42, 86, -28, 54, 13, -125, -39, -73, 89, 105, 90, 95, -66, -100, -37, -23, 13, -98, -22, 119, -114, 91, 90, -125, 113, 41, -100, 94, 11, -8, 119, -60, -107, 124, 21, -110, -105, -27, 48, -50, 54, -20, -78, 58, -49, -91, -90, 76, 57};
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
    msg.setTimeStamp(0.8165628574912798);
    msg.setSource(20508U);
    msg.setSourceEntity(131U);
    msg.setDestination(50277U);
    msg.setDestinationEntity(42U);
    msg.seq = 3244736410U;
    msg.state = 1U;
    msg.error.assign("KJLYXVAPCKMLIQHFGQWORSAGMHDCPOBSLIIEKPZNGSAAQMGIXJZLWQPSFPVRNUUQFXPBARWVOUEYVGNHIANGHVHOWBEEIFFXEJCQDC");

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
    msg.setTimeStamp(0.9023188310747648);
    msg.setSource(43457U);
    msg.setSourceEntity(16U);
    msg.setDestination(26686U);
    msg.setDestinationEntity(221U);
    msg.seq = 703247925U;
    msg.state = 83U;
    msg.error.assign("VSPQNEUTYUNNAPGLGUKOBZYMSP");

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
    msg.setTimeStamp(0.8546379010667143);
    msg.setSource(36228U);
    msg.setSourceEntity(90U);
    msg.setDestination(37828U);
    msg.setDestinationEntity(50U);
    msg.seq = 3976359963U;
    msg.state = 208U;
    msg.error.assign("WMINHVBHHWZOVNNTKLTJVOUTQYXCAYTLLWIGFDIAZGRVKNECOWUFQGNESNVSQPJRCXRKAMZQGTLVDJOWDJYCWBIDEOMZJYATPFSKNWYYMSALCDVURVFJDLPETWSSFNIWEZ");

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
    msg.setTimeStamp(0.6540653369738632);
    msg.setSource(34616U);
    msg.setSourceEntity(170U);
    msg.setDestination(44853U);
    msg.setDestinationEntity(167U);
    msg.origin.assign("NXNTUHGJANZGOOTJKMCYHBGQJUFPHPLFAPINXUNBSJRGQKODXKKZCLVQXDENBAZOAMFWOXCQIRQZXHIGYZMLVFXKMTREZISVIKR");
    msg.text.assign("SPLOQRKTGNRZQSFZTUWOHMOXIPOHQTPBBRWMEHNQOTACUMVHNTLFSTDEVJDKXFNWJMCIKWBJSBRBGOJYAEZUIATVWRFKKHTLCDSEWDPGDXPBNSRNBGQZSGSKHWAUZEVVXIOSFDSVFPNCLYJIOAXVUOKGCXWLZLEJXEPFKLHFHMCDAIDAPGAWHUMBCGYRCIBQXZIICREUUPDUMWTVZXENKJHYQKLNJQBEYGAQRGNRDAFLYXYM");

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
    msg.setTimeStamp(0.38661938957489617);
    msg.setSource(15540U);
    msg.setSourceEntity(187U);
    msg.setDestination(3122U);
    msg.setDestinationEntity(167U);
    msg.origin.assign("SEQDYBUKRQZOE");
    msg.text.assign("KRNVSDQDVEGHWEXVWSHHUNXTEDKTWDJVZYVROEWTPSJKFIQ");

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
    msg.setTimeStamp(0.8131342290265949);
    msg.setSource(20311U);
    msg.setSourceEntity(104U);
    msg.setDestination(14919U);
    msg.setDestinationEntity(77U);
    msg.origin.assign("GJJFDVNVRMALXILMMQKJCUAJYZMOLDWXKSTUVEGKJFOYNCTVKEXSDGTPJEXECRZRCOBVIDZIBWHVBAZCOVSRZ");
    msg.text.assign("EEHAPYAZNNWQLTRBPSBUHXHHKYXLUCRZQGPQFAVQPABVZTIDRKKDCZLLRQLITPCCBMADWTEFCPMNYMVEKEJEXAAPBQYXOKXUYZDWKUJZZWS");

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
    msg.setTimeStamp(0.6764791241210527);
    msg.setSource(36360U);
    msg.setSourceEntity(87U);
    msg.setDestination(16168U);
    msg.setDestinationEntity(241U);
    msg.origin.assign("JXYAOCMCSXPCBHQDPPJKMZNNACLYVLJUXZQSZYCZUUXFEHBFLKCOCXGWOFKUJEEPTQDWLQDEKEHWJZPESNCSFMTVLIBDWXMQWNOEKPUKRNHBJBOCFJQBOSRMYIWUPUTAHV");
    msg.htime = 0.9372150344569463;
    msg.lat = 0.012542913098283814;
    msg.lon = 0.9043966587114393;
    const signed char tmp_msg_0[] = {-103, -85, -66, 11, 115, -65, -23, 87, -70, 60, 0, -79, -64, -85, -81, 60, 68, 107, 46, 47, -13, 2, -19, -43, 64, -65, -28, 59, -123, 46, -111, 57, -30, 38, -126, 51, -39, -105, 94, -60, 90, 27, -124, -3, 70, 114, -12, -4, 14, 41, 45, -5, -38, 26, -90, 9, 114, -104, -37, -111, -81, -61, 63, 103, 40, 55, -58, 89, 82, -80, -82, -123, 91, -59, -43, 25, 5};
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
    msg.setTimeStamp(0.6178320473717882);
    msg.setSource(12924U);
    msg.setSourceEntity(204U);
    msg.setDestination(24738U);
    msg.setDestinationEntity(46U);
    msg.origin.assign("OPNYTBADOJSAGMBZQDSBHDEJHZBBPGFGRKISMMURVMINMHNMKXTTELLKUYWAGCVEFGJTRXKBJYFSRFPWEUUWGVTNOCRWDOSITZVQDXDUSWUAPZZESHPJRLKBVIZTPHGIOCEHHJWCIHQANSFKNHLUIWCMQIZPFCOVXINLEXYVGUXDRBJKANFANEDYPADPUSZXYOQYJCKXIGTLLGWSXQAYLBQQNOWBCVJQZZARXFRMFLYR");
    msg.htime = 0.3235481499037097;
    msg.lat = 0.42079387849289396;
    msg.lon = 0.8428190171611261;
    const signed char tmp_msg_0[] = {105, 99, -74, 122, 25, 38, 31, -81, -66, 25, -128, 62, -122, -52, 15, 105, -72, -78, -86, -55, -61, 81, 34, -106, 33, -121, 82, 36, 45, -96, 26, 124, 104, -100, -49, 99, -90, -3, 109, 56, -85, 0, 108, -66, -40, 107, -66, -7, -113, 15, -74, -90, -26, 116, 106, -80, 40, -108, -93, -100, 111, 35, -78, -36, -76, -50, -1, -1, 121, -8, 71, -47, 90, 23, 48, 94, -12, -121, -126, 4, -37, 87, 23, 34, -72, 37, -87, 3, 104, -44, -25, 7, 111, 103, 122, -71, -36, 37, 5, -53, -58, 101, 13, -96, 84, -83, 125, 78, -30, 85, -15, -44};
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
    msg.setTimeStamp(0.3060694251142615);
    msg.setSource(25120U);
    msg.setSourceEntity(236U);
    msg.setDestination(54852U);
    msg.setDestinationEntity(64U);
    msg.origin.assign("KVXGJDQGIULYGEP");
    msg.htime = 0.6696186021806965;
    msg.lat = 0.49723465998979255;
    msg.lon = 0.2742913536129341;
    const signed char tmp_msg_0[] = {87, -86, -47, 81, -33, 86, -56, 95, 44, 67, 65, 117, -34, 12, -74, -8, 57, -96, 14, 6, 42, 88, -10, -55, 98, 117, -96, -55, 95, 58, -83, -64, -77, -16, -48, 34, -66, 26, 79, 83, 43, 73, 92, 64, 81, 54, 70, -58, 33, 119, -37, -40, -61, -112, -14, 61, 26, -23, 91, 49, -46, 85, -86, 66, -42, 113, 35, 24, 5, -34, -114, -55, 85, -110, -46, 10, -14, -102, 106, 49, 97, 46, -98, 48, 39, -11, 116, 96, 9, 94, -108, 82, -66, -106, 32, 44, 106, 12, 81, -76, -57, 39, 74, -1, -110, 10, 100, -33, -30, 47, -117, -114, -8, -25, 12, -22, 110, -63, -80, 39, 95, -16, -23, -88, 97, 38, -46, 126, -45, -3, 65, -73, 80, 8, -126, 71, 95, -65, -104, -76, 97, -103, -3, 56, -123, 85, 28, 62, -54, 102, 43, 3, 64, -123, -28, -91, 41, -20, 74, 16, -110, 39, 64, 105, -21, -40, 114, 76, 69, 112, -52, -11, -75, 41, -121, -106, -11, -37, -112, -14, 31, 99, -92, -119, 121, -69, 107, -33, 83, 80, 18, 15, 125, -74, -40, 41, -22, -122, -79, -68, -36, 23, 94, 102, 49, -49, -119, 110, 89, -126, -82, -50, 11, -50, -73, -100, -79, -87, 45, -90, 94, -116, -99, -22, -89, 56, -65, 88, 106, -75, 72, -16, 123, -88, 23, 52};
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
    msg.setTimeStamp(0.4282467206284054);
    msg.setSource(42372U);
    msg.setSourceEntity(221U);
    msg.setDestination(760U);
    msg.setDestinationEntity(163U);
    msg.req_id = 56711U;
    msg.ttl = 5503U;
    msg.destination.assign("AENNSDKHKUWMRVNWKCKUPHYWSSXJOROPGLJQAXMZBBHXSEWMNDPRFBXIRRLTSYLPRSTUOOIZUHAKTXIICEXYNSVVJNZJADFTGUCJHLIKEEGDDQQIZKSUFUJJQIBLMEUZQZFPGHWPCJBNXNWQYHEHDOXWGBIRWKBYCTDIFQGZPSPWUOUMGEGYCFMBTNMCZGTRVEACBTXYZLVLRXVFRAQVYJOF");
    const signed char tmp_msg_0[] = {-128, 18, -55, 69, -38, 114, -40, -52, 70, -83, -19, 111, 123, 120, -13, -114, -56, 30, 17, 92, 113, 8, 11, -128, -60, -117, -14, -121, -57, 14, 10, -126, -106, -77, 119, 97, 93, -61, 95, -127, 29, 52, 22, -42, -64, -57, 80, -58, -81, -115, 108, 75, -52, 73, -64, -116, -90, 81, 4, 41, -18, 24, 9, -116, -65, 18, -15, -125, 38, 126, 3, 34, 68, -21, -55, -48, -77, -67, 63, -60, 99, -54, 71, -75, -105, -102, -115, 17, 63, 92, 3, 15, 26, 88, -70, 49, 36, -62, -17, 30, -79};
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
    msg.setTimeStamp(0.7449198487217246);
    msg.setSource(30814U);
    msg.setSourceEntity(46U);
    msg.setDestination(14625U);
    msg.setDestinationEntity(43U);
    msg.req_id = 8760U;
    msg.ttl = 50779U;
    msg.destination.assign("EYXMFDXVMCEIQHXJSCKUJPSUQNAGDMHXBICUTYFLDTOXEKVDWQHOAHGYJDHEQKJBZQAWNNJGHKWOOJSXEOVSQINXIVZDYFTFUUJWUWMRPZBCLPAQFQDPVNGNVNGSROLPTFMLMGEDEBZRMWLYTY");
    const signed char tmp_msg_0[] = {12, 48, 123, -14, -44, -33, 68, 74, -23, 86, 110, 72, 57, -110, -48, -104, -20, -62, -49, -46, 113, 26, 105, 43, 16, -38, 5, -12, 19, 101, 84, 55, 41, 39, 18, -15, 38, 112, -65, 112, -108, -127, 79, 9, 58, -25, 5, -48, -125, -99, 113, 113, -125, -32, 109, -78, 56, -116, -94, 113, -8, 84, -104, 41, 94, 37, 64, 93, 96, 91, 28, 29, -35, -60, -92, 15, -68, -104, -44, 30, -41, 8, -115, -54, 90, 121, 60, 88, 120, -55, -100, -51, 9, -52, 123, 80, 30, -72, -119, 60, -126, 49, 117, 20, 38, 47, 83, 5, 85, -93, 25, -26, -65, -96, 109, -27, -98, -83, 62, -40, 97, -46, -106, 94, 83, -34, -77, -53, 29, -52, -116, 12, 55, -121, 96, -110, 125, 7, 50, 92, -115, -24, -104, 3, 77, 23, -128, -99, 34, 98, -107, -98, -73, 85, 12, 119, 52, -113, 121, -88, 74, -28, 71, -124, -123, -26, -10, -21, 28, -56, 45, -80, 110, -71, 118, -100, 54, 21, 1, -50, -91, 41, 83, -89, -10};
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
    msg.setTimeStamp(0.8048292640081882);
    msg.setSource(34717U);
    msg.setSourceEntity(245U);
    msg.setDestination(28323U);
    msg.setDestinationEntity(246U);
    msg.req_id = 22636U;
    msg.ttl = 52798U;
    msg.destination.assign("KOYNHIIDZLXQADGJZQXTZTEZNWWCIJAURIZTAYNQKUJFUOERBPMAFIWNRVGQDHHMWXCHRXCLHOSLPGQMTLJFYTNCLOTJHXHRIJWMNEEXTQDABDKVAQJUOGKLDEKGSJGBZXZBRTWFVISUBDOBYEBSYPEWPZMWKXYOXUDESLXVLSBAFVTGMPDGCIYFYCPUFSJVFONRA");
    const signed char tmp_msg_0[] = {27, -41, 14, 46, -41, 36, 115, -26, -39, 35, -45, -116, -96, 81, -26, -14, -99, -112, -69, -22, -45, 32, -44, -105, -8, 19, 7, -50, 115, 56, 23, -64, 13, 6, 40, -18, -81, 87, 110, -79, -103, 45, 101, -122, 77, 88, 4, -64, 80, -74, 6, -49, -60, 60, 80, -32, -42, -96, 16, 20, -58, 63, 105, 79, -76, 72, 62, -119, -67, -56, 76, -76, -9, 21, -118, 104, -108, -40, -27, -80, 83, 34, -95, -94, -120, 108, 84, -95, -28, -5, 101, -67, -77, 119, -97, 105, 59, -85, 100, 26, 49, 64, -73, 45, 102, -69, -22, 6, -20, -88, 124, 75, -17, 68, 31, -107, 21, -71, 97, -103, 40, -86, 10, -70, -111, -84, 108, 93, 54, 45, 18, 65, -47, 53, 95, -126, 117, -25, -19, 83, 55, -100, 9, -109, -47, 94, -25, -120, 105, 88, 88, 59, -127, -118, -127, -28, -66, 21, -39, 115, -77, 11, 10, 11, 40, -5, -88, 25, -72, -85, -125, 0, -103, 54, -71, 28, -19, -76, 101, -55, -127, 33, -29, 69, -64, -11, -66, -6, 11, -5, 122, 50, -26, -106, -88, 2, 75, 82, 78, -7, -114, -95, -109, 113, 29, -114, -118, -43, 71, -64, -34, -106, -15, -34, 5, -17, 82, 43, -112, -6, 83, 13, 55, 93, -51};
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
    msg.setTimeStamp(0.6331949804435029);
    msg.setSource(31569U);
    msg.setSourceEntity(74U);
    msg.setDestination(14376U);
    msg.setDestinationEntity(5U);
    msg.req_id = 42420U;
    msg.status = 196U;
    msg.text.assign("EJOBYYTXEDJECFRJQOHZUNPCJXREFPHRIKOIJBSSGGOMOACFJWMBAWYLVDSFGUKTPNMMKBAXCDPFVUICTZXKYSDRAXIJQIYRHUJBOSGVMYBPQGWLTAQQZKRGZHVOOOESPLELLUQJAKNICGPZWFGCPVBOKJEQUYBMNWFXCZIATEEHXSBLTIUIGYNCHNQSUKWDDRHZNNFLWIDGSMPTSXZQTWAWHQLKVDDNRVLTRPF");

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
    msg.setTimeStamp(0.30524476845328363);
    msg.setSource(46234U);
    msg.setSourceEntity(129U);
    msg.setDestination(30847U);
    msg.setDestinationEntity(116U);
    msg.req_id = 49390U;
    msg.status = 55U;
    msg.text.assign("UXNRQJYVUFYMGEAPCPBVSSEZFFHNFAXCCHXBGSTCHKQMVPOBINIKIFMBHOGXRJYVNAOTXZAMLYYCGORBAWZKOFEPLJ");

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
    msg.setTimeStamp(0.044537093439064646);
    msg.setSource(58919U);
    msg.setSourceEntity(101U);
    msg.setDestination(1060U);
    msg.setDestinationEntity(206U);
    msg.req_id = 17382U;
    msg.status = 145U;
    msg.text.assign("HHOECDJBLVUDZAIWSMTBWFTEUKYQBXMSNUOSHNPMTJTPQFEJJCOAAHTRCDCTMZISGMXROYIOKHKBJHETFBJGOBD");

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
    msg.setTimeStamp(0.8428423388849243);
    msg.setSource(9837U);
    msg.setSourceEntity(138U);
    msg.setDestination(45397U);
    msg.setDestinationEntity(142U);
    msg.group_name.assign("FJPQGUTVDQLFTEASRUTAFZAWYRIABEGNAILANAZIBQJVHOLHGQIPMHSHFNEDWXSYIZQGKRMNBWOBYZUZXYKPSJYWXMLEKWSCTMVIBNMHUEJYDGOOARVZSDWFSSJQGGNKHRZFMHTDULQJCCNQIGXCEDGBTHJFZXFOVRVKYMPOGJZCRSPPUTLOBTV");
    msg.links = 1036385066U;

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
    msg.setTimeStamp(0.9330232112187402);
    msg.setSource(27010U);
    msg.setSourceEntity(218U);
    msg.setDestination(24531U);
    msg.setDestinationEntity(68U);
    msg.group_name.assign("GJYGJDRJLYHOHECPSLVUQOBKGAIEBXFTHQHINICZPKPCPONNMBVJURQIWCFHXRWZKVZQKJBVNCJKIBEUEFBILPCGXUWGGSRXTUETZMUIUDLEAAZWLUFUDRNRBXKJCGVLVHFARMHPESTYDFDGOUEQAWHZAAMKKBCXYKFDSWMVOHWVXJNTGZXMQOVQCRTDOQYMWGVYYIORXSZYMQPEWBQKOBSTAILPFZYHNP");
    msg.links = 1819197796U;

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
    msg.setTimeStamp(0.467396303179056);
    msg.setSource(51329U);
    msg.setSourceEntity(77U);
    msg.setDestination(37110U);
    msg.setDestinationEntity(225U);
    msg.group_name.assign("KSPFKRWOCTBLGVBEVHTGVRAZJDSQWIHKTXZUJSMCMGXERFEGBJFEMRAVYWYCSIZBUBLVGXEQZRKRLYQJIGYASUVWVAJQHHVOKABOWTXQQDFDYPPCWJLINFFDQATCCHTDABSNHKMSPIAOENSYMVTZUD");
    msg.links = 2038092606U;

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
    msg.setTimeStamp(0.14684096033214833);
    msg.setSource(38060U);
    msg.setSourceEntity(57U);
    msg.setDestination(28279U);
    msg.setDestinationEntity(111U);
    msg.groupname.assign("FUCVGXLUAOOJVMYPWGAXROZLJNRKDYAMOHYDQSPDHWXLPCZEZBIVPPZBUOOBIHIWPRBJRQLADZNNKETYFUNGBNMEBJWLMDENFTZHZNQJOZMEVVOIMQRVNCYDJMEWSCSLRTMB");
    msg.action = 181U;
    msg.grouplist.assign("KYLKNHXPXOKM");

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
    msg.setTimeStamp(0.0897369941327073);
    msg.setSource(45229U);
    msg.setSourceEntity(132U);
    msg.setDestination(29321U);
    msg.setDestinationEntity(189U);
    msg.groupname.assign("PKJASHJZWUJICEWIGTCSHQSOZKLXORVKLMBOEANUDNARXYLBODTPFQRZPOJTNMYFXEOWKBGKVNTXTRCBUMNHCJVXFFPVLQFFASDYGRPCQBQXCYDBUFWLQBVFIKQJZSHWUMQIZIEHYSOKGBUVAYLMDPYCMHVLLFIZAELNAWNUTTZDOJJDVQXGURKXSLRYQGJOFGEEZUGBSDRPICKPHMRWHUAXZEVTCHRADNWGJOPZXANNCKYT");
    msg.action = 96U;
    msg.grouplist.assign("EZAALWGLAMVSJWQYNHTQIHPALCERNIBVLFICJAAPVRLMIQUJHNDLXUHMJVGLNWPSBKTO");

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
    msg.setTimeStamp(0.5739466098234178);
    msg.setSource(49777U);
    msg.setSourceEntity(209U);
    msg.setDestination(22204U);
    msg.setDestinationEntity(251U);
    msg.groupname.assign("SBSCCHIQWZOVHYZAZQYFDRWDWLCEWGPYMRYKOXAQEKPUJDGNEZXFAJOVUESRDUUOKQLOIYGDLPHLIYUHGXNHYNXGIRFVAALKIAFSKVKIJJSBRMTGSUHJTPZMMNCZHJRQYHIFDBVTLPDISDTCACGVWNJFTVQVVPXSMZQBULUJXTRKNLWHKGRCCNEAKLDFPQBFSBNX");
    msg.action = 182U;
    msg.grouplist.assign("LAEVXFWFRRYQJIZYADQZPKCUYQJAGGMSNXXYSRRCZEXTUIRCKDDQRYRTHUIGNIONDWOVWIEDKTZQDUCVGHYTXQBOJZMBKPOXCE");

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
    msg.setTimeStamp(0.9517814388413871);
    msg.setSource(32490U);
    msg.setSourceEntity(120U);
    msg.setDestination(60424U);
    msg.setDestinationEntity(36U);
    msg.value = 0.3662218403269807;
    msg.sys_src = 38254U;

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
    msg.setTimeStamp(0.7396954619379984);
    msg.setSource(20553U);
    msg.setSourceEntity(246U);
    msg.setDestination(8219U);
    msg.setDestinationEntity(80U);
    msg.value = 0.8978720271470676;
    msg.sys_src = 36900U;

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
    msg.setTimeStamp(0.4298941983806642);
    msg.setSource(62797U);
    msg.setSourceEntity(112U);
    msg.setDestination(50595U);
    msg.setDestinationEntity(174U);
    msg.value = 0.6101884027924612;
    msg.sys_src = 42035U;

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
    msg.setTimeStamp(0.9603281221774982);
    msg.setSource(26984U);
    msg.setSourceEntity(1U);
    msg.setDestination(43924U);
    msg.setDestinationEntity(254U);
    msg.value = 0.5174367764385825;
    msg.units = 148U;

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
    msg.setTimeStamp(0.5398047636696544);
    msg.setSource(41204U);
    msg.setSourceEntity(156U);
    msg.setDestination(52049U);
    msg.setDestinationEntity(22U);
    msg.value = 0.5808525875607865;
    msg.units = 149U;

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
    msg.setTimeStamp(0.2789925769846602);
    msg.setSource(4160U);
    msg.setSourceEntity(64U);
    msg.setDestination(274U);
    msg.setDestinationEntity(164U);
    msg.value = 0.13426544109233318;
    msg.units = 8U;

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
    msg.setTimeStamp(0.2028563955735031);
    msg.setSource(13363U);
    msg.setSourceEntity(105U);
    msg.setDestination(16470U);
    msg.setDestinationEntity(109U);
    msg.base_lat = 0.44465246375353873;
    msg.base_lon = 0.02613865905885393;
    msg.base_time = 0.8141348750385697;

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
    msg.setTimeStamp(0.7139894844271779);
    msg.setSource(16927U);
    msg.setSourceEntity(7U);
    msg.setDestination(12934U);
    msg.setDestinationEntity(137U);
    msg.base_lat = 0.13821439872463237;
    msg.base_lon = 0.3041424257123616;
    msg.base_time = 0.7110816899582394;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 43869U;
    tmp_msg_0.destination = 14013U;
    tmp_msg_0.timeout = 0.7439510402129405;
    IMC::CpuUsage tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 105U;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.2805181837048788);
    msg.setSource(40053U);
    msg.setSourceEntity(97U);
    msg.setDestination(16853U);
    msg.setDestinationEntity(172U);
    msg.base_lat = 0.34907509622630684;
    msg.base_lon = 0.049769050593911235;
    msg.base_time = 0.9279605728440805;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 40830U;
    tmp_msg_0.destination = 3787U;
    tmp_msg_0.timeout = 0.6377342696929111;
    IMC::WaterVelocity tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.validity = 165U;
    tmp_tmp_msg_0_0.x = 0.36499383663772655;
    tmp_tmp_msg_0_0.y = 0.010913345618632553;
    tmp_tmp_msg_0_0.z = 0.5940466052099292;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.985121617339905);
    msg.setSource(53895U);
    msg.setSourceEntity(68U);
    msg.setDestination(35609U);
    msg.setDestinationEntity(220U);
    msg.base_lat = 0.9378046290341131;
    msg.base_lon = 0.7126699122811252;
    msg.base_time = 0.636492956839723;
    const signed char tmp_msg_0[] = {121, -117, 79, -37, 25, -97, 6, 37, 121, -99, -11, 58, 66, -78, 22, -53, 111, 36, -30, -54, -41, -17, 57, 123, 109, -6, 71, -45, 44, -90, -44, -103, 3, 31, 43, 91, -95, -86, 26, 49, -25, 124, -59, 92, 114, 96, -21, -63, -10, 97, 114, 57, -92, -51, 73, 95, -78, -51, 102, 70, -78, 110, 60, -61, 126, -6, 59, -78, 68};
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
    msg.setTimeStamp(0.2735123943684835);
    msg.setSource(34423U);
    msg.setSourceEntity(31U);
    msg.setDestination(21378U);
    msg.setDestinationEntity(41U);
    msg.base_lat = 0.964829613235419;
    msg.base_lon = 0.9306974579889576;
    msg.base_time = 0.1548506503258279;
    const signed char tmp_msg_0[] = {114, 93, -79, 81, 124, -68, 84, 94, 27, 70, 114, -22, 96, -55, -13, -40, 99, 18, -82, -43, 36, -98, -74, 126, -16, -12, -45, 17, 31, -13, -90, 102, 95, 92, 59, 27, -126, 32, 39, -37, 7, -38, -106, 111, -99, -99, 59, 40, -20, -37, 41, -40, -25, -112, -25, -42, 34, -40, 123, -57, -43, -110, -93, 95, 112, -18, 78, 58, 26};
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
    msg.setTimeStamp(0.37434584533493764);
    msg.setSource(38819U);
    msg.setSourceEntity(212U);
    msg.setDestination(64679U);
    msg.setDestinationEntity(18U);
    msg.base_lat = 0.4534547596363374;
    msg.base_lon = 0.37209958186814296;
    msg.base_time = 0.117232073047561;
    const signed char tmp_msg_0[] = {-94, 116, 100, 121, 63, -28, 88, 112, -71, -107, -55, -119};
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
    msg.setTimeStamp(0.7517019583932425);
    msg.setSource(10201U);
    msg.setSourceEntity(142U);
    msg.setDestination(56703U);
    msg.setDestinationEntity(78U);
    msg.sys_id = 52649U;
    msg.priority = -117;
    msg.x = 27827;
    msg.y = -19905;
    msg.z = -28468;
    msg.t = 21121;
    IMC::ImageTxSettings tmp_msg_0;
    tmp_msg_0.fps = 61U;
    tmp_msg_0.quality = 41U;
    tmp_msg_0.reps = 137U;
    tmp_msg_0.tsize = 78U;
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
    msg.setTimeStamp(0.17875079734019939);
    msg.setSource(17678U);
    msg.setSourceEntity(132U);
    msg.setDestination(21886U);
    msg.setDestinationEntity(162U);
    msg.sys_id = 26480U;
    msg.priority = 63;
    msg.x = -5822;
    msg.y = -18031;
    msg.z = 14398;
    msg.t = -25748;
    IMC::RowsCoverage tmp_msg_0;
    tmp_msg_0.lat = 0.7067538076942397;
    tmp_msg_0.lon = 0.2584697350897527;
    tmp_msg_0.z = 0.5503867013734077;
    tmp_msg_0.z_units = 233U;
    tmp_msg_0.speed = 0.21630254309116048;
    tmp_msg_0.speed_units = 21U;
    tmp_msg_0.bearing = 0.1390766494341692;
    tmp_msg_0.cross_angle = 0.7089074586571072;
    tmp_msg_0.width = 0.2486420626608694;
    tmp_msg_0.length = 0.37760187584976745;
    tmp_msg_0.coff = 11U;
    tmp_msg_0.angaperture = 0.48479807863629176;
    tmp_msg_0.range = 24352U;
    tmp_msg_0.overlap = 162U;
    tmp_msg_0.flags = 81U;
    tmp_msg_0.custom.assign("UWEKANTLYKVNQMUNAFWUSMAGNJLUYAYXJXTXVDOFNIGHDISGCPJJUXNRTHIHEPUDHHAPDOTWSOCVIXRZGUYSQLWZGXFDDMLTIUSFJPMABJYSGEMWDZJVLCQDXWRRZIPEZBMUKVFVDBWREZHBCYGXCPWFQUBXMEEBNAOHRAQQZRAZGCOQMYIILCZINKEGTODRBTHVHQOZFNSBQJKVROOETCS");
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
    msg.setTimeStamp(0.5926138920996641);
    msg.setSource(33274U);
    msg.setSourceEntity(194U);
    msg.setDestination(24519U);
    msg.setDestinationEntity(9U);
    msg.sys_id = 25381U;
    msg.priority = 114;
    msg.x = -9314;
    msg.y = -8175;
    msg.z = -30598;
    msg.t = 8389;
    IMC::VehicleOperationalLimits tmp_msg_0;
    tmp_msg_0.op = 153U;
    tmp_msg_0.speed_min = 0.6507892140079735;
    tmp_msg_0.speed_max = 0.16381625210570883;
    tmp_msg_0.long_accel = 0.8395319301672687;
    tmp_msg_0.alt_max_msl = 0.9379199130196672;
    tmp_msg_0.dive_fraction_max = 0.6907209709653426;
    tmp_msg_0.climb_fraction_max = 0.20363096711597495;
    tmp_msg_0.bank_max = 0.7975507875432384;
    tmp_msg_0.p_max = 0.6370338503860321;
    tmp_msg_0.pitch_min = 0.4219975848515356;
    tmp_msg_0.pitch_max = 0.28739565404653133;
    tmp_msg_0.q_max = 0.5888183639978558;
    tmp_msg_0.g_min = 0.9557992430762307;
    tmp_msg_0.g_max = 0.11119006362715989;
    tmp_msg_0.g_lat_max = 0.31303718181526374;
    tmp_msg_0.rpm_min = 0.5550141648406897;
    tmp_msg_0.rpm_max = 0.20762478744515567;
    tmp_msg_0.rpm_rate_max = 0.29258698681151274;
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
    msg.setTimeStamp(0.3297370103132786);
    msg.setSource(15438U);
    msg.setSourceEntity(95U);
    msg.setDestination(30348U);
    msg.setDestinationEntity(212U);
    msg.req_id = 28961U;
    msg.type = 65U;
    msg.max_size = 53626U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.48258527401710294;
    tmp_msg_0.base_lon = 0.5266560801338418;
    tmp_msg_0.base_time = 0.3647723436848318;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 49470U;
    tmp_tmp_msg_0_0.destination = 60052U;
    tmp_tmp_msg_0_0.timeout = 0.8464987935012778;
    IMC::DevDataText tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value.assign("ZBUVAYDHMLRHWFKZEABDTSZWPWGXEIGEHKUNSURZMNYAGYHACZIKPKXJUFFROOPVOLMJHOVVXHWUCFVOISZYWLJBNIGEVWPQHFIMNUDBLDXZGMBTEJJBVDBRQLFYEEKISCVQPRMRIURNTSTRTXVYCWWRXYCIUBHPQGTUGLX");
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.19235108910892706);
    msg.setSource(13889U);
    msg.setSourceEntity(100U);
    msg.setDestination(38690U);
    msg.setDestinationEntity(169U);
    msg.req_id = 2850U;
    msg.type = 172U;
    msg.max_size = 13912U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.8352665584296233;
    tmp_msg_0.base_lon = 0.7306571303128224;
    tmp_msg_0.base_time = 0.002647632373971587;
    IMC::HistoricSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.sys_id = 29540U;
    tmp_tmp_msg_0_0.priority = 83;
    tmp_tmp_msg_0_0.x = -30251;
    tmp_tmp_msg_0_0.y = -23875;
    tmp_tmp_msg_0_0.z = 21633;
    tmp_tmp_msg_0_0.t = -3247;
    IMC::Redox tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.6387383909422782;
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
    msg.setTimeStamp(0.2946676375996875);
    msg.setSource(43344U);
    msg.setSourceEntity(195U);
    msg.setDestination(27337U);
    msg.setDestinationEntity(174U);
    msg.req_id = 46558U;
    msg.type = 234U;
    msg.max_size = 11507U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.11662825952481226;
    tmp_msg_0.base_lon = 0.05526719488169418;
    tmp_msg_0.base_time = 0.6619750293560862;
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
    msg.setTimeStamp(0.16452537753039853);
    msg.setSource(36590U);
    msg.setSourceEntity(49U);
    msg.setDestination(26859U);
    msg.setDestinationEntity(170U);
    msg.original_source = 45511U;
    msg.destination = 29369U;
    msg.timeout = 0.48992287116102373;
    IMC::SaveEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("OLWJQMNWPNQTMJYCFNHWWDFWXTEPKAUAJCLHAFKHZQFRWCQUZRZGNDMEVYOPWYVVCUYNSOHISSTVYZGLYA");
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
    msg.setTimeStamp(0.035963835420441126);
    msg.setSource(25975U);
    msg.setSourceEntity(241U);
    msg.setDestination(34136U);
    msg.setDestinationEntity(53U);
    msg.original_source = 2991U;
    msg.destination = 41152U;
    msg.timeout = 0.08904843495504866;
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 126U;
    tmp_msg_0.error_count = 164U;
    tmp_msg_0.error_ents.assign("DBIYVIFAGSNESWOSIQOOTAXHBEPLQSKBABMETIZVZCMEYQUGRFDZCPLSUWHTDZNJIMMNZCBOKUITQVEVLGKZXDQOXVGQNHLWQUFBOTCDGWVVPEWURURUTGCJFABYOPNIMAEWNJMARFSDWGTJRTPFVCRBVMSRQPTHDHSDRDMHFZ");
    tmp_msg_0.maneuver_type = 34585U;
    tmp_msg_0.maneuver_stime = 0.7760143766788786;
    tmp_msg_0.maneuver_eta = 5879U;
    tmp_msg_0.control_loops = 2248308359U;
    tmp_msg_0.flags = 168U;
    tmp_msg_0.last_error.assign("WSPGDXVPYJCTXKIQJPHWPQZHOIGVHKRUNYGZJQLSQYSCWCDB");
    tmp_msg_0.last_error_time = 0.897640826139126;
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
    msg.setTimeStamp(0.30902891329584403);
    msg.setSource(48016U);
    msg.setSourceEntity(58U);
    msg.setDestination(366U);
    msg.setDestinationEntity(170U);
    msg.original_source = 21958U;
    msg.destination = 39178U;
    msg.timeout = 0.02758341798907682;
    IMC::PushEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("IPFETHESJWDKSGFJZGWCUZZXEASLNMDRFZUJOYAXKWIBNZIPGDYGOFYBUAOIJKBBQLDQFVYUQCYWSLNMUHCBZMENKKEWGVRFIHHQVOHVSQDFRXXGKIMCCQJBOZXXIEKCFGCBUYFGTUXZYDWVMMUIXTJLWGKVKPMLUWLTLAAOOLNVNHZQWRPKXCPDADYHN");
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
    msg.setTimeStamp(0.2882812592103432);
    msg.setSource(50534U);
    msg.setSourceEntity(68U);
    msg.setDestination(34796U);
    msg.setDestinationEntity(128U);
    msg.type = 168U;
    msg.comm_interface = 753U;
    msg.model = 49265U;
    msg.list.assign("FPXSILEMCJGKZULVMBNRWVSFCNBKSCDQKDRJECKTADJPUINNNZVMZYF");

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
    msg.setTimeStamp(0.42054162048246224);
    msg.setSource(9431U);
    msg.setSourceEntity(179U);
    msg.setDestination(40348U);
    msg.setDestinationEntity(137U);
    msg.type = 10U;
    msg.comm_interface = 35315U;
    msg.model = 39277U;
    msg.list.assign("KGFCHYWMQLZOZRFTPTGFOWLIGRTHNPTRRSSANZVYJDUWBSKTMWXOQMU");

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
    msg.setTimeStamp(0.25160327780348457);
    msg.setSource(26716U);
    msg.setSourceEntity(200U);
    msg.setDestination(12338U);
    msg.setDestinationEntity(57U);
    msg.type = 183U;
    msg.comm_interface = 52612U;
    msg.model = 64022U;
    msg.list.assign("AZYNDCTWRWEVIJNWKCRENMMEEPQFZQMNHUVXSGWDOBOFWQLKCQGLFPLZZEJXYYPMSDCNPUQGVECUZBVIQSNQVHDKRMTPYLIWXSVXBBOAAVKJBZHELQMIKETDEOAROKWBGONJGHTRUXBYJQTAHMSJLCIHDHOVTWOPZPRJFIZAGFTDJLAVGXUIFISARJFHFUUYBYKYFSGBLSKUTRLDSLXPGBIKMAIGVKRPXXN");

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
    msg.setTimeStamp(0.7012533968165633);
    msg.setSource(22972U);
    msg.setSourceEntity(122U);
    msg.setDestination(50933U);
    msg.setDestinationEntity(112U);
    msg.type = 159U;
    msg.req_id = 4278458485U;
    msg.ttl = 45290U;
    msg.code = 160U;
    msg.destination.assign("BXPJUBRPIXIFYJFKKEJGFSFCLQSEBHQJQLGZRHKYFNIIXBLJECWONKZZQVDFOGIDTOICAKDRODNCVGAJLKSHELYROITMATHBDXDWVXCXXOHRSEENUDIABUKGPPNUNPMHOALYQZWMQPLEZVMIEHUYQEVRZLC");
    msg.source.assign("IGKSSEMXULIOTQCLPGKLLIFYBZZDCMFWZAEHWSZWNKUVQLYNHPDTXNVARYWGFKOJVUCUNOIAJWBURHLTGDKEJRALOHAYIMWMTRORJCIDDPRIWGGFRVOHCMEXOQTSEQSFQVVGXHVJFFPUFPRMISBBKBOHWYWPVBTXKRRBJYDZZHNUOLTJYCGLXAKEVIWPJDHTUTTPBCQSKZCQMQZMNESOLXADYUDMZMPYABUEYDXZQPFASNXSCXFAHEVGB");
    msg.acknowledge = 87U;
    msg.status = 24U;
    const signed char tmp_msg_0[] = {-123, -29, -71, -108, 64, -20, -117, -22, -99, 19, -92, -111, -62, -96, -8, 87, 46, 83, -74, -35, -38, 53, 51, 124, 53, 103, -14, -40, 100, -122, 44, 108, -114, -10, -86, 106, 11, -48, -32, 8, -62, 78, -17, 90, 123, -32, 34, -108, -26, 64, -61, -101, -23, 86, 33, -109, -77, 112, 73, -40, 0, 18, 68, 2, 22, 111, 110, -77, -96, 77, -102, 84, 45, 48, 104, 59, -22, -22, 80, -98, -24, -111, -61, -47, -78, 80, 20, 104};
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
    msg.setTimeStamp(0.791139972437117);
    msg.setSource(45296U);
    msg.setSourceEntity(53U);
    msg.setDestination(1411U);
    msg.setDestinationEntity(231U);
    msg.type = 226U;
    msg.req_id = 2063083880U;
    msg.ttl = 24427U;
    msg.code = 57U;
    msg.destination.assign("IVITIWVCZGSAEGTRMMICHLNPFHMVJSCHGUKDFSLRVPPZELOTOXCXKBUKFJJSQYHABVUFQVNZBRKQVUOHDYBZQXJUVXKWYBQQFBTWDSAGYYDCRWENDADFCHNOSTHFHXFTCQPMJJRHQGJCXFMRKKPUXNINTZIYMOAZPTAZOBFEWIWUDEZSERUJUAIHNREAUAPJMIKVMYBYGILNKJBSOMOCGSQXZNOLWWDLWSYYKBLODRZPREGGELNXAGWM");
    msg.source.assign("JGDQVTWJJOCSQQDHUFZYWQCAZICSILSIVUDPTRDSOMDLZHQGQMFYRYPCAXQZLSPXBRYKKYVLAWWJGPZEZCKCFQANDSASVUURHMBGJLBMKKHMCKLNBLJHMEGNOOFTQIBJXOFEZMZEYRFIOVTRAGF");
    msg.acknowledge = 90U;
    msg.status = 219U;
    const signed char tmp_msg_0[] = {-111, -4, -98, 92, 102, -126, -109, 51, -124, 60, -44, 119, -41, 13, 64, -32, 86, -92, 27, 94};
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
    msg.setTimeStamp(0.3197407028350997);
    msg.setSource(47433U);
    msg.setSourceEntity(251U);
    msg.setDestination(33687U);
    msg.setDestinationEntity(215U);
    msg.type = 253U;
    msg.req_id = 536251850U;
    msg.ttl = 15432U;
    msg.code = 129U;
    msg.destination.assign("BEQRKNZUMORCWFXDSZSTSOHBBPZIATTLPZUDHXZAKRVXAWZQWBPHVJIQILKKSIWMTORFIAREAFFNDCEGMRRVBQYQLJYLDIRSJOCOYISGMFJPGUOSHDMVDYUMVFSK");
    msg.source.assign("ZCEYSOBMYQJQPPEXCTBPFAFCLEYUIWTGJBVYRIWESNQDPXROGQCIOMCEWUKHYSZWTSXUKONGIYZNBVPVMKTWHXNDGPBDXGFVVBJBIMUFKLXVAUSRQZJTEDZHWJOCYALKPSQLJIKQXKTTFSUDCLCWGBOXIAHURSYAMYNHPOBHMEFDJCLXJIK");
    msg.acknowledge = 13U;
    msg.status = 156U;
    const signed char tmp_msg_0[] = {13, 77, 91, -97, 125, -126, -14, 91, -33, -57, -105, 67, -53, -39, -17, -79, -123, 34, -9, 34, -49, -106, 45, -59, 19, 80, 94, 105, -121, -57, -85, 51, -22, -94, -82, 71, -82, -77, 100, 59, 38, 33, -60, 51, -126, -94, 83, 26, -92, -97, 54, 50, -92, 78, -81, 28, 46, -55, 3, 112, -62, 110, -37, -40, -85, -128, 6, 38, 45, -69, -2, 120, 5, -104, -24, 40, -58, 48, -2, -85, 111, 63, -38, -5, 54, 15, 65, 7, 58, -99, -97, -9, 39, -99, 106, 38, -121, 34, -35, 34, -53, 50, 26, 61, 93, 4, 81, -4, 7, 57, 44, -18, 47, 102, -101, 108, 96, 55, -126, 50, 12, 39, 91, -101, 56, 24, 40, 42, -16, 32, -14, 4, -67, 59, -18, 15, 28, -39, -107, -30, -34, 66, 56, -9, -102, -93, -90, -118, -103, 17, 111, 66, 38, 120, 116, -121, -14, -11, 106, 19, -31, 107, 113, 21, 2, 79, 122, -3, -7, 126, -112, -9, -68, 40, -36, 45, 126, -30, -118, 4, 34, -87, 88, 122, 61, -41, 41, 35, -78, -69, 13, -91, -61, -119, -127, -25, 20, 120, -20, -98, -110, 53, 46, 114, 35};
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
    msg.setTimeStamp(0.10556238966630493);
    msg.setSource(55031U);
    msg.setSourceEntity(236U);
    msg.setDestination(23668U);
    msg.setDestinationEntity(142U);
    msg.id = 101U;
    msg.range = 0.8421401751755864;

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
    msg.setTimeStamp(0.7557988369239594);
    msg.setSource(30814U);
    msg.setSourceEntity(126U);
    msg.setDestination(8921U);
    msg.setDestinationEntity(240U);
    msg.id = 162U;
    msg.range = 0.2942266494714887;

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
    msg.setTimeStamp(0.6688798087630385);
    msg.setSource(49401U);
    msg.setSourceEntity(175U);
    msg.setDestination(27218U);
    msg.setDestinationEntity(8U);
    msg.id = 61U;
    msg.range = 0.27539540745548263;

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
    msg.setTimeStamp(0.0996392872541998);
    msg.setSource(51087U);
    msg.setSourceEntity(136U);
    msg.setDestination(35534U);
    msg.setDestinationEntity(71U);
    msg.beacon.assign("ASRWEKBMIKJPDBHUFGSAHFTYBVILSHTNMUCDWYOZJFRFHXVSSFXWGHNWDDIYCCWZKYMCCQOJEOHOBAKQNUBPZEDZWBSLXAAMYRQZMBVZNONOIPCIZHVNRULTRJTARTQQVOOZJYHAIGWLYXXSDVLPFEEQKLUJCIYNYUSFNETMXWMUCJVALQVAGIRPXBGEWMENPWNRZEUVHXJFXSTPOTBGXKOKSURDYKTGADDDRGLKIPUIJGZFEMCCJTQLMHQQFP");
    msg.lat = 0.3468795296662909;
    msg.lon = 0.20231054641140656;
    msg.depth = 0.7129087634660831;
    msg.query_channel = 40U;
    msg.reply_channel = 163U;
    msg.transponder_delay = 67U;

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
    msg.setTimeStamp(0.6684961179979091);
    msg.setSource(47942U);
    msg.setSourceEntity(173U);
    msg.setDestination(43851U);
    msg.setDestinationEntity(53U);
    msg.beacon.assign("ESYUMDMTJLJIBKRFJZRJJZISQMPVRDQPCSVOGNCMYNPDXENUTNETBYJAXZWFBSWYGXMHGAHSKZBWJXNOHGWNIUPMOJUXSXKWFUCKHKTGBEGDAWRSTSHIYFHLPRRJVFDXOEREEHYEWPOQFSELMRZXLQBQSCI");
    msg.lat = 0.7769056004079282;
    msg.lon = 0.6486272512505524;
    msg.depth = 0.9987085546637678;
    msg.query_channel = 101U;
    msg.reply_channel = 78U;
    msg.transponder_delay = 215U;

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
    msg.setTimeStamp(0.2698569352008644);
    msg.setSource(47769U);
    msg.setSourceEntity(192U);
    msg.setDestination(20752U);
    msg.setDestinationEntity(216U);
    msg.beacon.assign("YVKVRNIZQXDULRHMDBSJWTJCRQPIXYNKTPQAAUMCQCRLEFUGQANYKLRKGQTL");
    msg.lat = 0.0020845971051305368;
    msg.lon = 0.0375689982260351;
    msg.depth = 0.017100231147756162;
    msg.query_channel = 102U;
    msg.reply_channel = 16U;
    msg.transponder_delay = 168U;

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
    msg.setTimeStamp(0.006044018419263608);
    msg.setSource(7573U);
    msg.setSourceEntity(171U);
    msg.setDestination(47072U);
    msg.setDestinationEntity(97U);
    msg.op = 219U;

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
    msg.setTimeStamp(0.7546040338376325);
    msg.setSource(45201U);
    msg.setSourceEntity(194U);
    msg.setDestination(6974U);
    msg.setDestinationEntity(177U);
    msg.op = 37U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("VEHPAUSNFASOUKKLIAPPGZUIIBJSOURQLFDOKNZBNZYKXFIQ");
    tmp_msg_0.lat = 0.2217170602413855;
    tmp_msg_0.lon = 0.23876818394418187;
    tmp_msg_0.depth = 0.40051634927301794;
    tmp_msg_0.query_channel = 154U;
    tmp_msg_0.reply_channel = 179U;
    tmp_msg_0.transponder_delay = 145U;
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
    msg.setTimeStamp(0.7828313709433492);
    msg.setSource(11891U);
    msg.setSourceEntity(200U);
    msg.setDestination(58604U);
    msg.setDestinationEntity(191U);
    msg.op = 129U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("ZBXARGMHKLIBENNPJSPKEHZWZPHZKTMVUIYLBBDVWAKOCDIFYUV");
    tmp_msg_0.lat = 0.7155192848444593;
    tmp_msg_0.lon = 0.7142448949417283;
    tmp_msg_0.depth = 0.02694942947258616;
    tmp_msg_0.query_channel = 46U;
    tmp_msg_0.reply_channel = 27U;
    tmp_msg_0.transponder_delay = 179U;
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
    msg.setTimeStamp(0.3171948193215407);
    msg.setSource(5581U);
    msg.setSourceEntity(166U);
    msg.setDestination(56490U);
    msg.setDestinationEntity(97U);
    IMC::GetOperationalLimits tmp_msg_0;
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
    msg.setTimeStamp(0.15498252857304218);
    msg.setSource(18215U);
    msg.setSourceEntity(37U);
    msg.setDestination(6161U);
    msg.setDestinationEntity(36U);
    IMC::StopManeuver tmp_msg_0;
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
    msg.setTimeStamp(0.5766374456586428);
    msg.setSource(8239U);
    msg.setSourceEntity(77U);
    msg.setDestination(54650U);
    msg.setDestinationEntity(249U);
    IMC::AcousticLink tmp_msg_0;
    tmp_msg_0.peer.assign("KVUYDTABZEVEBSVXLZYRPPWILLCPRTELTGKUMGKSNRNKYOFHECMWRIBWJHIPZBQKAFAPNMZBCGAVXJUJHNEGPTSQWIANZXRYUDEEJDSFVUOKQRAGHBQHGGIMZSLFDHBLQMLRWCTWICXKMOTZYZKGMVSAWOUDTVFFXXXSDIJIXHPPFYFLCDUZAOGQPNVOVJJFHNOTWIOPGQOBRQQCXNJNLDKWCBCEHYHTETYRMMJUWASAMQKSRCDJVOZFESB");
    tmp_msg_0.rssi = 0.026435553155771174;
    tmp_msg_0.integrity = 55810U;
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
    msg.setTimeStamp(0.775890849319691);
    msg.setSource(17523U);
    msg.setSourceEntity(211U);
    msg.setDestination(40785U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.34890856352763;
    msg.lon = 0.28414513290274335;
    msg.depth = 0.026940797711957343;
    msg.sentence.assign("BCOWZDCTTOGSUNWKSASIBIXXYVDFRWFHUREBIYZJVPKNWAAGMTQRXJFHZRRNDUAQVLXOBXVPPNVPNEGIRPZJHNLOOZZCATPHEBZMHBTIYGLNJKMUDKCMHKGTKUFACLQQULXPNATSUEUOQWIGKTXDRUEEZVIQIHOMSJFEUAGWFYRAEXDLVIKYCRVSOWGWWLKQPVFMCKVLZGBWBSEHDBTPDNFZQYPDQYJOOGASXHFLYDMEHJQNS");
    msg.txtime = 0.21492200223773605;
    msg.modem_type.assign("IBUHTSOIJMBNWZUJGLGVNDKYHFRGHWQCXD");
    msg.sys_src.assign("BIINIJMTADKXAHUIAGTTVSEPLYBJQOIRJJMRHWTJQZAUZILAHDRDSZYASZPGNHHKJGZVSGUZAFSEQGDRWOMZTVEMIPXXSKHWYGVVNGYLCYUFCHCBRNWTWOBKBOAWPEKXZULPQHFDPNW");
    msg.seq = 25054U;
    msg.sys_dst.assign("USTTWHXNJMIJTNLFNNWWRJYEBBKXMAIFRRDHQFUQZDUEZYYILXKDDGM");
    msg.flags = 87U;
    const signed char tmp_msg_0[] = {-124, -107, 115, 26, -79, -56, 5, -16, 64, 126, 15, -63, 42, -70, 85, 116, -12, 1, 38, 106, 107, -1, -87, 121, -23, -14, 6, 114, -42, 77, -102, -9, -88, -21, -110, -13, 46, 106, -25, -26, -33, 47, 63, -15, -79, 99, 23, 82, 67, -98, -102, -72, -119, -105, 83, 112, 62, 14, -28, -78, 106, -17, 9, 105, 36, -73, 108, 37, 78, -128, -6, -111, -84, -35, 3, -9, 38, 14, -63, -23, 71, 1, -4, 17, 98, 118, -61, -70, -99, -113, 6, 39, -6, -55, -113, -59, 46, -111, 20, 58, 15, -61, 36, 15, 54, 118, 13, 106, 91, -37, 105, -125, 63, -115, -71, 89, -64, 93, -104, -16, -73, -115, 26, -23, 118, -68, 113, -37, -106, -15, -45, -46, 57, 107, -50, 65, -119, 82, 51, -32, 116, 40, 61, -58, 121, 120, 44, -61, 79, -38, -69, 82, -101, 50, -126, 78, -49, -66, -127, -117, -56, -14, 48, -11, -101, 15, -28, -34, -16, 38, 44, -61, 112, 92, -60, -32, -8, -70, 55, -75};
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
    msg.setTimeStamp(0.25925520255872225);
    msg.setSource(34818U);
    msg.setSourceEntity(0U);
    msg.setDestination(37893U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.4438603141029116;
    msg.lon = 0.7195676256053606;
    msg.depth = 0.0074677940853202784;
    msg.sentence.assign("KOIVZMZIZVTWHXLRZEHOIVDXKXJDQGRAGMQVTMMRYHCYATYITPASWFBJYXQMBDGFCPOAWUOHOKIUOYPBIYSFCJDXXENVRGJLSHLIWXMOSRFIJZPVZLJRZVBWYLNMJDNCFJEFYTDJWEGQENIETFUTNKPQFQOLHBACEERUBLSDQVTUATUBKPXNPSRQBQACYKLEICYLKLCOPMKNPXNTD");
    msg.txtime = 0.5885330573702083;
    msg.modem_type.assign("TCYGLNCXGKPGVBPIXRLDNBCMOJSRPHYAQ");
    msg.sys_src.assign("WORSMLDSQXQPAJSNORISARTWVJZCULILSTXEIYHXOECZGEFJEAMOMIXLIFRYXHSVVLOZKQZNYNDDIAUQCSTNRPWLKBWBVXBTVJJPEMNTPTRTZDJYYAIODWBZGJQEPYFWVECFPRKHRNHKLBNSPSRWGKCEZMXKJTDMUOIOVCUAUBCBDKXQFFGHWNMOUFNJYYGQXZIN");
    msg.seq = 60907U;
    msg.sys_dst.assign("AOIVCFVSQCDZKNGWDCXNBSJVMXPIHPLYUHODIWTMFCANTEQWJGCMEDXOUTDBNAWXMZWQYUHIRDSUBATTVNWHEWRSFMEWQBJFPLOQBHQEP");
    msg.flags = 54U;
    const signed char tmp_msg_0[] = {10, 57, 91, -7, -18, -2, -93, -20, 122, -113, -48, 113, -20, 26, 122, -35, -80, 114, -2, -30, 84, 91, 63, -46, -111, -31, 24, 46, -104, 57, -100, -27, -106, 82, 125, 48, 30, -41, -77, -14, -53, 0, 119, 68, 3, 122, 125, 92, -125, 90, 20, -126, 102, 17, 23, 69, 113, -93, 66, 57, -11, 66, -34, -109, 58, -98, 94, -10, -4, -109, 30, 16, 78, -59, -54, 91, 62, -75, 32, -10, -103, -28, -96, -102, -67, -30, -36, 17, 60, 77, 56, 22, -44, 117, 10, -125, 29, 91, -60, 111, -98, 74, 72, 42, -5, 1, 2, -1, -29, -109, -59, -84, 62, -17};
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
    msg.setTimeStamp(0.9748660833784277);
    msg.setSource(54504U);
    msg.setSourceEntity(78U);
    msg.setDestination(48675U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.4701770732429533;
    msg.lon = 0.4778750922787032;
    msg.depth = 0.6275562289214738;
    msg.sentence.assign("YDBSXTVQQYDIFMTJQHEVLXSZFGARXPEEGSLSVSXOJWWEEUQNM");
    msg.txtime = 0.5573681718367838;
    msg.modem_type.assign("VALOEHWMXKSWBNHKNTXDYQXJRVZOPVVWRWDLXTTLRWXFCJFXIVCIGPGQEBSBHAIYTIVKLMIONAKFGJUZKPOZUHFFHFRTGKDQCIHQDTDBDQURU");
    msg.sys_src.assign("CWDUYNJBQZZAGPUNDVQRMURXJCUIVINWFDAVKVXHRDBVLRUKPJYCKNPPXRUQIGLXTCJAITBDMMHITGYENPFYHODWCQHPSZZAWPXKFRGAXSWLAPYYCOVKSXMWDOMQOHKMFTLBELZOCIIZHBXGLKEOSFOKZCYBLMJUEBRSRVEIHFWQSJGNWOAJODUBGVQEINMQTLAHCWXPLAVNSFEVMTKKJHEYTNQDS");
    msg.seq = 37659U;
    msg.sys_dst.assign("DODLVQOIAHJXUOIACFKYEMNNDOJZUYFBYKQWOPMPWRTQRCHBDGDLSVWSXFKUVQAOWLSGLXLECEGNZNZWAHSSJYYKBKDSXQZOTQSJJXASRWOEBFYNUVFCGKJVTWNERAAZEHJLWTHNYOFXLMCHZVCURDAPRTUYGZWLVIZAEJMMMCTXMVICPRJQSDBTSIPFE");
    msg.flags = 10U;
    const signed char tmp_msg_0[] = {34, -40, -43, -114, 16, 84, 69, -13, -123, -71, 38, -36, -49, 87, -69, 2, -94, 14, -86, 104, 47, -110, 0, -103, 28, -116, 48, -37, -100, 7, -56, -127, -51, 62, 31, 113, -98, 115, -44, 101, 116, 29, 97, -89, -10, 23, -21, -43, 75, 123, 17, 118, -54, 14, 39, 18, -106, 96, -71, -69, 15, -45, 44, 56, 12, -77, -85, 49, -107, 102, -26, -85, 1, 2, -93, -116, 26, 103, 11, 45, -3};
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
    msg.setTimeStamp(0.7871794917502262);
    msg.setSource(35670U);
    msg.setSourceEntity(101U);
    msg.setDestination(53616U);
    msg.setDestinationEntity(19U);
    msg.op = 206U;
    msg.system.assign("NWIQVLHCJWLGCFWTNURKUDXSMPBHYWR");
    msg.range = 0.5396263333982629;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 22724U;
    tmp_msg_0.off_x = 0.4299894268908683;
    tmp_msg_0.off_y = 0.5169868966348241;
    tmp_msg_0.off_z = 0.005328233032082297;
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
    msg.setTimeStamp(0.4283859613886769);
    msg.setSource(48751U);
    msg.setSourceEntity(22U);
    msg.setDestination(52020U);
    msg.setDestinationEntity(145U);
    msg.op = 167U;
    msg.system.assign("AWLIQIHTFFOTTOAHVDZWCJTDPNTXIVKOUBINSSGSFO");
    msg.range = 0.12136463163971811;
    IMC::Frequency tmp_msg_0;
    tmp_msg_0.value = 0.5117574349918671;
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
    msg.setTimeStamp(0.7851725903916534);
    msg.setSource(55957U);
    msg.setSourceEntity(31U);
    msg.setDestination(8817U);
    msg.setDestinationEntity(15U);
    msg.op = 167U;
    msg.system.assign("TAJOJOJSOAMJIXPZBBIFUXSZAOXUPMASMNEBLHQRWYFGOHRHBPUEHVDXDJWNAIKJEDBCYYVKFHERJXKVRMUCDDIMKBGWFCMLZFWUYOGYTTZEQWPLXPHJIYYUTRXGQSGBWDBTJFCKETNLGLQWTLNQVTNGTSFGRV");
    msg.range = 0.8046886636783113;
    IMC::QueryTypedEntityParameters tmp_msg_0;
    tmp_msg_0.op = 61U;
    tmp_msg_0.request_id = 3694437067U;
    tmp_msg_0.entity_name.assign("GHTBXFTIOVEGGXMBRUHWMSLCWDWIYOWXFXJPUSTQARTBNHDKBSIFOQFPCHGUAQXYWKBAQSYIFYBPRUNLWVKCNDTFVECDDJSTEJVZHZJJFGAYJCUCGSAIMHKVVUCDHKNMYKKSPZXIZWAOESBBIXFQUHVMO");
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
    msg.setTimeStamp(0.04363738189065347);
    msg.setSource(16001U);
    msg.setSourceEntity(211U);
    msg.setDestination(35451U);
    msg.setDestinationEntity(198U);

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
    msg.setTimeStamp(0.2272288752887729);
    msg.setSource(49880U);
    msg.setSourceEntity(241U);
    msg.setDestination(10615U);
    msg.setDestinationEntity(106U);

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
    msg.setTimeStamp(0.691734359351985);
    msg.setSource(6412U);
    msg.setSourceEntity(95U);
    msg.setDestination(19403U);
    msg.setDestinationEntity(180U);

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
    msg.setTimeStamp(0.7178806436180263);
    msg.setSource(64161U);
    msg.setSourceEntity(233U);
    msg.setDestination(7746U);
    msg.setDestinationEntity(88U);
    msg.list.assign("QASJYBKWZXWGEYDRWQNLVJVNULGZYOFMGJWPKMUBXPKWQIJNMCFONYFLFHQKRLCEINJTIIAZCSFYDGQPURYGXPEVADJMQXLCDLWLOJIHWUENUSFZVYUYRTSBOMBAEQDXZBGPOMKXMXOYTZNFNRHKUMMTNMLBHEHBABSTOSFCDUWCHJJCXRURDPVSLOVPQWKNCSSGBPAACHEQGOTEZPYIIIRZDLDIKAVREVBTWTTVODVFQXXZAGHRAKJZHFSKI");

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
    msg.setTimeStamp(0.21182208749004872);
    msg.setSource(60626U);
    msg.setSourceEntity(112U);
    msg.setDestination(49287U);
    msg.setDestinationEntity(202U);
    msg.list.assign("ZAFSHAWXPZIXSYKQLNOFDQYTBLLLQFMYNNIDOTGQQDHLNGZWITHKGIUCBFULTVZJTJVKIUWWGVQASFBDDKPOFUQNVCELNRAVOFKNEOZGVTRSO");

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
    msg.setTimeStamp(0.336219306027573);
    msg.setSource(7695U);
    msg.setSourceEntity(42U);
    msg.setDestination(14573U);
    msg.setDestinationEntity(33U);
    msg.list.assign("WJCJIMXKCPMUTZPHTSRMTLRQHFWYHLZYRYGGKIQVLLZIDNHUWFADZVSJXTZGLAAINJENJSWXTFNUVPVICYGIQXRAXKXZCAFHDFBGIUHBLOEOZERRULQKDJPOFSPBWGUXMETRFCPMNCVQSPNBGTHTBGAMUIUWRKYZMZPVMXYSBLOOENLRDTBQDFDVBONLEAQOZMGEVHJEJHSVTFDVPWSYKWWIXHKNJSNPRKGQDBEAIKYCCOSCA");

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
    msg.setTimeStamp(0.15977763358542096);
    msg.setSource(47151U);
    msg.setSourceEntity(72U);
    msg.setDestination(7557U);
    msg.setDestinationEntity(2U);
    msg.peer.assign("SVTVHLYRJRNGFXRHJNJSQWDBOJDRPPYSOEBURLHMMLHCCNKXIEIFKHTRWDMKTYCBTDTIWIFUZONPAYAQBAUSZVFPIAZBUAYMOAUCXRBCFDRXMXJQYKFMPXZUNXPFPVMOSBNQCVGMZZWYOIHFUKGKCWEOLBSABEJGDULIHZQEVOYNKSPMDKHTYRQWCGEQGQUILJJVAGAXXZVFVTKENCLDYIDZWPMWLV");
    msg.rssi = 0.9174527099464838;
    msg.integrity = 35941U;

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
    msg.setTimeStamp(0.8706073263410763);
    msg.setSource(64422U);
    msg.setSourceEntity(65U);
    msg.setDestination(49954U);
    msg.setDestinationEntity(241U);
    msg.peer.assign("RXGBEOAUGAETDERPEZGSCVWUYPWJGQMKXPWDKGTHAYHDFSPOBKZEWRVRKCFNZCMICTEMLZNBUAJMROJJGIIVEBFYUOFWHHRORSCDTWIALLMGPOSGQMPTHFLQLJSPATJPR");
    msg.rssi = 0.04220957308232298;
    msg.integrity = 42662U;

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
    msg.setTimeStamp(0.08537547200178663);
    msg.setSource(8289U);
    msg.setSourceEntity(93U);
    msg.setDestination(24357U);
    msg.setDestinationEntity(16U);
    msg.peer.assign("LFNASACTDRTBLYEILMXIZVKBNRAEOMXOWFAZNFMVGUZGCEPZO");
    msg.rssi = 0.16157037942369712;
    msg.integrity = 13672U;

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
    msg.setTimeStamp(0.6130526625018416);
    msg.setSource(13576U);
    msg.setSourceEntity(132U);
    msg.setDestination(64915U);
    msg.setDestinationEntity(132U);
    msg.req_id = 19510U;
    msg.destination.assign("HZRJBFQODYBPQCYGYIVONFPDZYKIELLKYAEQTCOHSD");
    msg.timeout = 0.8556200668250951;
    msg.range = 0.019125313296032842;
    msg.type = 64U;
    IMC::CompressedImage tmp_msg_0;
    tmp_msg_0.frameid = 247U;
    const signed char tmp_tmp_msg_0_0[] = {-121, 124, 97, -34, 116, -12, 20, 38, -8, 21, 23, -23, -38, -26, 31, 59, -4, 76, 66, -52, 27, -112, -61, -67, 106, -10, -110, 4, -30, 45, -126, -123, 68, -8, -97, 37, 70, 109, 59, 88, 26, -19, 84, -101, 98, -114, 1, 5, 80, -23, -85, 54, -37, -26, 125, -109, -103, 39, 22, -104, -29, -4, 106, 15, 74, 100, -22, -12, -62, 57, 75, 113, -120, -49, 94, -27, 44, -112, -102, 41, 10, 85, 71, -116, -4, 2, 27, -65, -100, -68, 118, 82, 126, 26, -87, 3, -5, -39, 45, 50, -9, -43, -73, 88, 119, -21, 17, -18, -31, -69, 126, 4, 112, -57, -116, -47, -22, -19, 100, -13, -55, -103, 57, 118, 119, 32, -66, 87, -109, -7, 3, 14, -33, -19, 53, -126, -11, 17, -61, 125, 5, -3, -79, -39, -89, -80, 43, -7, 114, 55, 113, 13, 102, 59, 85, -116, 62, 71, -78, 63, -90, -47, -122, 4, -51, 101, -113, -115, 43, 62, -30, 6, -21, 19, -61, -56, 106, 13, -35, 70, 88, -35, 98, 22, 85, -128, 121, 85, -122, -36, -4, -36, 115, 100, 108, -69, 9, -124, 65, -120, 122, -1, 86, 59, -69, -106, 47, -124, -88, 94, 71, 58, -53, 101, 0, 126, -6, 64, 112, 121, -46, -26, 22, -3, 7, -122, 120, 50, -109, 118, 109, -60, 88, 62, 57, 83, 95, -6, -58, -109, 119, 115, -100, 121, 17, -110, -23};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
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
    msg.setTimeStamp(0.6811639532909034);
    msg.setSource(14136U);
    msg.setSourceEntity(43U);
    msg.setDestination(60318U);
    msg.setDestinationEntity(178U);
    msg.req_id = 21271U;
    msg.destination.assign("ARLQKXPUEQDQBNPGNCXYGCHWQXZDV");
    msg.timeout = 0.9144149860263746;
    msg.range = 0.17791537257216217;
    msg.type = 168U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 42200U;
    tmp_msg_0.flags = 2U;
    tmp_msg_0.lat = 0.6319690958587253;
    tmp_msg_0.lon = 0.11624260456173019;
    tmp_msg_0.start_z = 0.19456486268767392;
    tmp_msg_0.start_z_units = 164U;
    tmp_msg_0.end_z = 0.2753653017542429;
    tmp_msg_0.end_z_units = 167U;
    tmp_msg_0.radius = 0.8722148282886472;
    tmp_msg_0.speed = 0.4575860668649008;
    tmp_msg_0.speed_units = 53U;
    tmp_msg_0.custom.assign("GOYLSAWGPKOVYECJSFLXXIYDRFSEHHFKIQBDNFNMGJCJFSCBHMIPKNHKLOORVERSPTUCVMYENMGQUNXHZOEOLYDQFIRCIXJIQEUMGSTKUULAAFONWSCGQHCZKSDOXEWBPYRFXVZNLVWIKRJWVXXROYRJLWXWHTBMLUPBCIDHCHMZUYTTZUUJALKBPNRAYKGMGIAJYCQIWPSBTTTQJATTEA");
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
    msg.setTimeStamp(0.47592480910287627);
    msg.setSource(241U);
    msg.setSourceEntity(169U);
    msg.setDestination(44971U);
    msg.setDestinationEntity(10U);
    msg.req_id = 9830U;
    msg.destination.assign("AQPKRWLJAHPYVCWEFRZSJAKKYSDICQBKTEIRTGJUDHGJUMMZSNUAOJJBWOTZOTVPZMANWKKQPMVDEXFJCKUPBEGILFODWKXPWOCCDCGTSJJBMFEZXNXZFYHZSWNNVHEMTFGBT");
    msg.timeout = 0.169904437173807;
    msg.range = 0.6765614408188941;
    msg.type = 63U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8145012881492537;
    tmp_msg_0.y = 0.24513490053130482;
    tmp_msg_0.z = 0.7927831840994327;
    tmp_msg_0.t = 0.23497349793759947;
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
    msg.setTimeStamp(0.4137201220311004);
    msg.setSource(52559U);
    msg.setSourceEntity(227U);
    msg.setDestination(12117U);
    msg.setDestinationEntity(218U);
    msg.req_id = 14925U;
    msg.type = 119U;
    msg.status = 182U;
    msg.info.assign("CJDRDGWRPSQTSFFIRWJ");
    msg.range = 0.7630829136329697;

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
    msg.setTimeStamp(0.6756569767052246);
    msg.setSource(63298U);
    msg.setSourceEntity(219U);
    msg.setDestination(7212U);
    msg.setDestinationEntity(67U);
    msg.req_id = 62816U;
    msg.type = 127U;
    msg.status = 21U;
    msg.info.assign("GERTDLQACLRMHPNVGOHFWDIAUSGSPSXPNKWVWPDJTZGTBNWDABBPHZNVSQICGVTJVCYHYEHQMWCGRJEQILPYJXQIGWOCXZMDIBFIKTBGZEAEWNPZSJOZLRHKBJKROCLUAEKDBFFYXEOFYGWDLCKSZOHTCJXYLVOAVFMHYMRRNML");
    msg.range = 0.9032618305105516;

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
    msg.setTimeStamp(0.3932453622558879);
    msg.setSource(50375U);
    msg.setSourceEntity(186U);
    msg.setDestination(4653U);
    msg.setDestinationEntity(79U);
    msg.req_id = 36101U;
    msg.type = 13U;
    msg.status = 42U;
    msg.info.assign("CNFQPHIGCZASMGYLBBRVWXAJBBRNHGIYHDLWTFEMKYVCKUZRANKPBLYDVBHAWCQYOIPFRZWIDOMFGEPCBLJVCPKZKYJGQOCLVJYFYMXSETNTQDJTQFNIRBOCETUDHQGDHZNDNDSLKVIMAEUFSIMSAAWUWERQXVWLVTZRMAXHFWUPSTKGEOELIZDONBMPRSODKZVNRESZPOWVTKFCJACXLSJQUFPAYMJUNXOGPRXQMLGQX");
    msg.range = 0.023322820455730198;

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
    msg.setTimeStamp(0.48419401170148946);
    msg.setSource(61108U);
    msg.setSourceEntity(10U);
    msg.setDestination(63539U);
    msg.setDestinationEntity(101U);
    msg.system.assign("YBIMYEBRJGDTSMGRUSUCBUPOWAIOXED");
    msg.op = 112U;

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
    msg.setTimeStamp(0.6552168899102477);
    msg.setSource(14513U);
    msg.setSourceEntity(168U);
    msg.setDestination(14384U);
    msg.setDestinationEntity(87U);
    msg.system.assign("AJQTFBUFTVTBXVROCAVXWWFRQNHROYGLPEVPWYIEEHNFRZDNTUSNZGFMHAMTXIEMIDVFHCMNMWDCOJJPEBIVFREULTGFKYKKHQJKYGKBMAVMASIQDCOCWWMXXAWSKYEQETXKPBNBXKWVSLLLXMZKSDNQLGZACINTICYNLSFVJZLUFROSDUWZGBRYOADHLUEQQBUDPYZXQJZHHWCVULHIJPPTGRIOYSMOUJBGORDUGJCP");
    msg.op = 157U;

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
    msg.setTimeStamp(0.28198811661847034);
    msg.setSource(59862U);
    msg.setSourceEntity(22U);
    msg.setDestination(7940U);
    msg.setDestinationEntity(119U);
    msg.system.assign("GVWJIMYXVZYHBUSDHZNMPCVXAMUSUAGDVCEJKCJYDRQUWPKYRQGKXXAOKLJGYHDDLQFHEHCKHENVLTJJHUBMZFLQQHVDOUFTQPSOCAZXTOOEPKWOVXUYATQMAFLYNALYZEBSBMLOIBPITZRGCDTOJPIXTFMVTUAIXNZGEEPCWZNWFYQVQIKNBGENZBBZLWLPROBFGCWCJFASXPRRWYVGSWSIAUIDTORNMELSFMWCKPTFKMGEQHKR");
    msg.op = 59U;

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
    msg.setTimeStamp(0.15959823619043245);
    msg.setSource(52614U);
    msg.setSourceEntity(212U);
    msg.setDestination(62667U);
    msg.setDestinationEntity(0U);
    msg.value = 31786;

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
    msg.setTimeStamp(0.6910562099072146);
    msg.setSource(62928U);
    msg.setSourceEntity(138U);
    msg.setDestination(51257U);
    msg.setDestinationEntity(118U);
    msg.value = -19320;

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
    msg.setTimeStamp(0.7493934384247215);
    msg.setSource(3537U);
    msg.setSourceEntity(55U);
    msg.setDestination(9460U);
    msg.setDestinationEntity(231U);
    msg.value = -8523;

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
    msg.setTimeStamp(0.7540106820154059);
    msg.setSource(11766U);
    msg.setSourceEntity(235U);
    msg.setDestination(64926U);
    msg.setDestinationEntity(242U);
    msg.value = 0.44783377468281194;

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
    msg.setTimeStamp(0.25796214854564103);
    msg.setSource(40475U);
    msg.setSourceEntity(198U);
    msg.setDestination(37315U);
    msg.setDestinationEntity(19U);
    msg.value = 0.041520024580604886;

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
    msg.setTimeStamp(0.7330949159661545);
    msg.setSource(38123U);
    msg.setSourceEntity(245U);
    msg.setDestination(35174U);
    msg.setDestinationEntity(91U);
    msg.value = 0.9349814604862343;

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
    msg.setTimeStamp(0.9752945374373804);
    msg.setSource(31609U);
    msg.setSourceEntity(143U);
    msg.setDestination(2342U);
    msg.setDestinationEntity(79U);
    msg.value = 0.5183589427461205;

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
    msg.setTimeStamp(0.06146312879017668);
    msg.setSource(12795U);
    msg.setSourceEntity(96U);
    msg.setDestination(53920U);
    msg.setDestinationEntity(254U);
    msg.value = 0.6191550504752149;

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
    msg.setTimeStamp(0.8599942891277588);
    msg.setSource(64629U);
    msg.setSourceEntity(117U);
    msg.setDestination(24194U);
    msg.setDestinationEntity(201U);
    msg.value = 0.08312370405362735;

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
    msg.setTimeStamp(0.8590231963305679);
    msg.setSource(1953U);
    msg.setSourceEntity(4U);
    msg.setDestination(59075U);
    msg.setDestinationEntity(227U);
    msg.validity = 11708U;
    msg.type = 201U;
    msg.utc_year = 54646U;
    msg.utc_month = 20U;
    msg.utc_day = 112U;
    msg.utc_time = 0.8638306746808256;
    msg.lat = 0.17566868354092047;
    msg.lon = 0.7403138821850553;
    msg.height = 0.9758453437888052;
    msg.satellites = 172U;
    msg.cog = 0.024899429531221373;
    msg.sog = 0.8356785596370964;
    msg.hdop = 0.46139195030970914;
    msg.vdop = 0.7744819053118486;
    msg.hacc = 0.28158227453278617;
    msg.vacc = 0.7367046818924038;

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
    msg.setTimeStamp(0.818452344496587);
    msg.setSource(64657U);
    msg.setSourceEntity(197U);
    msg.setDestination(47117U);
    msg.setDestinationEntity(191U);
    msg.validity = 4813U;
    msg.type = 146U;
    msg.utc_year = 18274U;
    msg.utc_month = 4U;
    msg.utc_day = 116U;
    msg.utc_time = 0.4644164725922273;
    msg.lat = 0.8816647963472388;
    msg.lon = 0.38791285587750035;
    msg.height = 0.7677719668468522;
    msg.satellites = 247U;
    msg.cog = 0.33013445571493394;
    msg.sog = 0.05452108696388602;
    msg.hdop = 0.45073047274011635;
    msg.vdop = 0.699259288805864;
    msg.hacc = 0.6695933756922834;
    msg.vacc = 0.24222689829411448;

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
    msg.setTimeStamp(0.23339364804246554);
    msg.setSource(57597U);
    msg.setSourceEntity(160U);
    msg.setDestination(23072U);
    msg.setDestinationEntity(118U);
    msg.validity = 58462U;
    msg.type = 36U;
    msg.utc_year = 62492U;
    msg.utc_month = 133U;
    msg.utc_day = 222U;
    msg.utc_time = 0.3573565138683681;
    msg.lat = 0.5571990260375583;
    msg.lon = 0.2674278286817985;
    msg.height = 0.7188868273997879;
    msg.satellites = 55U;
    msg.cog = 0.38603775435645815;
    msg.sog = 0.24397233020724873;
    msg.hdop = 0.5243673795538611;
    msg.vdop = 0.9842835786317626;
    msg.hacc = 0.6959204408115296;
    msg.vacc = 0.22617015432193288;

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
    msg.setTimeStamp(0.5299300887237789);
    msg.setSource(59858U);
    msg.setSourceEntity(7U);
    msg.setDestination(30213U);
    msg.setDestinationEntity(106U);
    msg.time = 0.20126484546540302;
    msg.phi = 0.17457300958790067;
    msg.theta = 0.9042587672732026;
    msg.psi = 0.9555663568643572;
    msg.psi_magnetic = 0.565388774984323;

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
    msg.setTimeStamp(0.5933417469688824);
    msg.setSource(18677U);
    msg.setSourceEntity(229U);
    msg.setDestination(16018U);
    msg.setDestinationEntity(110U);
    msg.time = 0.19528156828738474;
    msg.phi = 0.3173687086860696;
    msg.theta = 0.4714771860172805;
    msg.psi = 0.40515150202255523;
    msg.psi_magnetic = 0.06897447642179755;

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
    msg.setTimeStamp(0.3254783078049023);
    msg.setSource(28680U);
    msg.setSourceEntity(53U);
    msg.setDestination(37551U);
    msg.setDestinationEntity(68U);
    msg.time = 0.14480750996617875;
    msg.phi = 0.8439705106116466;
    msg.theta = 0.13020236745640912;
    msg.psi = 0.05333332441045491;
    msg.psi_magnetic = 0.908952396653061;

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
    msg.setTimeStamp(0.553312264676977);
    msg.setSource(24803U);
    msg.setSourceEntity(13U);
    msg.setDestination(27713U);
    msg.setDestinationEntity(220U);
    msg.time = 0.1639284751962462;
    msg.x = 0.7103396147597815;
    msg.y = 0.26256430129310415;
    msg.z = 0.8067804448460792;
    msg.timestep = 0.7431281406696069;

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
    msg.setTimeStamp(0.4976028918863129);
    msg.setSource(62863U);
    msg.setSourceEntity(60U);
    msg.setDestination(50513U);
    msg.setDestinationEntity(85U);
    msg.time = 0.9646610114467653;
    msg.x = 0.005288151834024757;
    msg.y = 0.3408249403357678;
    msg.z = 0.6280668207674737;
    msg.timestep = 0.5226229364084496;

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
    msg.setTimeStamp(0.6127858635210406);
    msg.setSource(21132U);
    msg.setSourceEntity(60U);
    msg.setDestination(20883U);
    msg.setDestinationEntity(160U);
    msg.time = 0.11961255146128491;
    msg.x = 0.21911737079629112;
    msg.y = 0.1796444198873225;
    msg.z = 0.48491990973866705;
    msg.timestep = 0.08823714336111677;

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
    msg.setTimeStamp(0.9046693493177894);
    msg.setSource(28207U);
    msg.setSourceEntity(234U);
    msg.setDestination(9855U);
    msg.setDestinationEntity(243U);
    msg.time = 0.6105458232739982;
    msg.x = 0.5225086964442447;
    msg.y = 0.175747633162327;
    msg.z = 0.5744786649720405;

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
    msg.setTimeStamp(0.5997739756337578);
    msg.setSource(24013U);
    msg.setSourceEntity(27U);
    msg.setDestination(2201U);
    msg.setDestinationEntity(197U);
    msg.time = 0.1448841420993785;
    msg.x = 0.8623692996212171;
    msg.y = 0.8707728325645381;
    msg.z = 0.9929262991678995;

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
    msg.setTimeStamp(0.8198588389812657);
    msg.setSource(41765U);
    msg.setSourceEntity(58U);
    msg.setDestination(10062U);
    msg.setDestinationEntity(87U);
    msg.time = 0.16150467093039345;
    msg.x = 0.19158403446903538;
    msg.y = 0.668180449231121;
    msg.z = 0.924279029766836;

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
    msg.setTimeStamp(0.5858347485100245);
    msg.setSource(25562U);
    msg.setSourceEntity(49U);
    msg.setDestination(16870U);
    msg.setDestinationEntity(43U);
    msg.time = 0.0720459893011326;
    msg.x = 0.48407096839462815;
    msg.y = 0.41983101968670866;
    msg.z = 0.8170879208360476;

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
    msg.setTimeStamp(0.3632619609541088);
    msg.setSource(62406U);
    msg.setSourceEntity(103U);
    msg.setDestination(19470U);
    msg.setDestinationEntity(92U);
    msg.time = 0.7662166128753589;
    msg.x = 0.1674607575911643;
    msg.y = 0.43935955528920356;
    msg.z = 0.7502439890456988;

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
    msg.setTimeStamp(0.5460760428881686);
    msg.setSource(29023U);
    msg.setSourceEntity(227U);
    msg.setDestination(9565U);
    msg.setDestinationEntity(197U);
    msg.time = 0.5048432580626153;
    msg.x = 0.7867722494734938;
    msg.y = 0.9218613148412557;
    msg.z = 0.3408426698249384;

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
    msg.setTimeStamp(0.1035466766869525);
    msg.setSource(55118U);
    msg.setSourceEntity(122U);
    msg.setDestination(64024U);
    msg.setDestinationEntity(0U);
    msg.time = 0.9682203456855526;
    msg.x = 0.5472535439062312;
    msg.y = 0.9666927942567906;
    msg.z = 0.7147975042536951;

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
    msg.setTimeStamp(0.6615969710002264);
    msg.setSource(16600U);
    msg.setSourceEntity(51U);
    msg.setDestination(47746U);
    msg.setDestinationEntity(214U);
    msg.time = 0.4732439220730623;
    msg.x = 0.7392498306034867;
    msg.y = 0.7863163385954274;
    msg.z = 0.5544323493386133;

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
    msg.setTimeStamp(0.8679470547088544);
    msg.setSource(2977U);
    msg.setSourceEntity(150U);
    msg.setDestination(13394U);
    msg.setDestinationEntity(78U);
    msg.time = 0.917294485608724;
    msg.x = 0.5754934105389646;
    msg.y = 0.7441763063246213;
    msg.z = 0.07067383365834734;

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
    msg.setTimeStamp(0.012982869490032911);
    msg.setSource(2037U);
    msg.setSourceEntity(87U);
    msg.setDestination(62493U);
    msg.setDestinationEntity(173U);
    msg.validity = 96U;
    msg.x = 0.2159005698054568;
    msg.y = 0.5445721655633718;
    msg.z = 0.7765460538974359;

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
    msg.setTimeStamp(0.9539400602769257);
    msg.setSource(6014U);
    msg.setSourceEntity(221U);
    msg.setDestination(39440U);
    msg.setDestinationEntity(84U);
    msg.validity = 122U;
    msg.x = 0.5411250861200261;
    msg.y = 0.223779004505249;
    msg.z = 0.2768558845006389;

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
    msg.setTimeStamp(0.2667886300109683);
    msg.setSource(12538U);
    msg.setSourceEntity(74U);
    msg.setDestination(18568U);
    msg.setDestinationEntity(24U);
    msg.validity = 48U;
    msg.x = 0.24157989529940338;
    msg.y = 0.4424999047481939;
    msg.z = 0.7375023148897432;

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
    msg.setTimeStamp(0.7931504061089854);
    msg.setSource(14954U);
    msg.setSourceEntity(176U);
    msg.setDestination(26599U);
    msg.setDestinationEntity(64U);
    msg.validity = 114U;
    msg.x = 0.4385720496480239;
    msg.y = 0.5520599453816458;
    msg.z = 0.9655865422969162;

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
    msg.setTimeStamp(0.3134882388499578);
    msg.setSource(12547U);
    msg.setSourceEntity(136U);
    msg.setDestination(40729U);
    msg.setDestinationEntity(7U);
    msg.validity = 134U;
    msg.x = 0.5170546542962254;
    msg.y = 0.7985268167599142;
    msg.z = 0.29651051725278077;

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
    msg.setTimeStamp(0.7259279213324943);
    msg.setSource(24846U);
    msg.setSourceEntity(202U);
    msg.setDestination(63997U);
    msg.setDestinationEntity(115U);
    msg.validity = 51U;
    msg.x = 0.46734591697697125;
    msg.y = 0.22853662804925234;
    msg.z = 0.10316892070545236;

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
    msg.setTimeStamp(0.12772942228415385);
    msg.setSource(41560U);
    msg.setSourceEntity(126U);
    msg.setDestination(18061U);
    msg.setDestinationEntity(136U);
    msg.time = 0.8017656693730343;
    msg.x = 0.32364564512752614;
    msg.y = 0.5417354278590493;
    msg.z = 0.06254000872693821;

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
    msg.setTimeStamp(0.8149229181214496);
    msg.setSource(37099U);
    msg.setSourceEntity(167U);
    msg.setDestination(57407U);
    msg.setDestinationEntity(12U);
    msg.time = 0.06191885479086334;
    msg.x = 0.020480748969522344;
    msg.y = 0.14025937886974904;
    msg.z = 0.09451997814870072;

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
    msg.setTimeStamp(0.8761067141353065);
    msg.setSource(15173U);
    msg.setSourceEntity(210U);
    msg.setDestination(23502U);
    msg.setDestinationEntity(50U);
    msg.time = 0.6073298848831179;
    msg.x = 0.03274397377113347;
    msg.y = 0.33081416278407005;
    msg.z = 0.6153323728041078;

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
    msg.setTimeStamp(0.6603588770173645);
    msg.setSource(3800U);
    msg.setSourceEntity(246U);
    msg.setDestination(20753U);
    msg.setDestinationEntity(83U);
    msg.validity = 82U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.252747167742583;
    tmp_msg_0.y = 0.5339807489878077;
    tmp_msg_0.z = 0.4215656561297363;
    tmp_msg_0.phi = 0.744252875270039;
    tmp_msg_0.theta = 0.6211585143381873;
    tmp_msg_0.psi = 0.5943343336178378;
    msg.location.push_back(tmp_msg_0);
    msg.value = 0.47300155888810513;

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
    msg.setTimeStamp(0.3795600299008539);
    msg.setSource(44415U);
    msg.setSourceEntity(15U);
    msg.setDestination(42951U);
    msg.setDestinationEntity(46U);
    msg.validity = 76U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.13830850594298938;
    tmp_msg_0.beam_height = 0.11592782135028767;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.8440192553357453;

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
    msg.setTimeStamp(0.22031207240929096);
    msg.setSource(56641U);
    msg.setSourceEntity(178U);
    msg.setDestination(17845U);
    msg.setDestinationEntity(48U);
    msg.validity = 127U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.4913484840941401;
    tmp_msg_0.y = 0.5124934495910859;
    tmp_msg_0.z = 0.5145252079535394;
    tmp_msg_0.phi = 0.989669646760651;
    tmp_msg_0.theta = 0.8773384187566844;
    tmp_msg_0.psi = 0.07102319445553973;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.4523974456152804;
    tmp_msg_1.beam_height = 0.4633858768847551;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.6914084860091608;

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
    msg.setTimeStamp(0.21979086039901952);
    msg.setSource(63294U);
    msg.setSourceEntity(53U);
    msg.setDestination(29818U);
    msg.setDestinationEntity(240U);
    msg.value = 0.5401449948027393;

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
    msg.setTimeStamp(0.7064680355689048);
    msg.setSource(4453U);
    msg.setSourceEntity(49U);
    msg.setDestination(56545U);
    msg.setDestinationEntity(23U);
    msg.value = 0.08055486862297578;

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
    msg.setTimeStamp(0.1773824260395085);
    msg.setSource(27138U);
    msg.setSourceEntity(212U);
    msg.setDestination(31683U);
    msg.setDestinationEntity(1U);
    msg.value = 0.34052564985187883;

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
    msg.setTimeStamp(0.8238182755429434);
    msg.setSource(23931U);
    msg.setSourceEntity(129U);
    msg.setDestination(57983U);
    msg.setDestinationEntity(200U);
    msg.value = 0.40461321427639174;

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
    msg.setTimeStamp(0.40758227614191);
    msg.setSource(16754U);
    msg.setSourceEntity(122U);
    msg.setDestination(32025U);
    msg.setDestinationEntity(29U);
    msg.value = 0.2952595478491571;

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
    msg.setTimeStamp(0.8883156223828119);
    msg.setSource(28002U);
    msg.setSourceEntity(201U);
    msg.setDestination(53316U);
    msg.setDestinationEntity(12U);
    msg.value = 0.12592992052726681;

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
    msg.setTimeStamp(0.22634293513371384);
    msg.setSource(53837U);
    msg.setSourceEntity(236U);
    msg.setDestination(16108U);
    msg.setDestinationEntity(59U);
    msg.value = 0.9182710440026784;

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
    msg.setTimeStamp(0.2856094350149191);
    msg.setSource(64467U);
    msg.setSourceEntity(5U);
    msg.setDestination(44800U);
    msg.setDestinationEntity(29U);
    msg.value = 0.8588737338290741;

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
    msg.setTimeStamp(0.7533343444691974);
    msg.setSource(56303U);
    msg.setSourceEntity(127U);
    msg.setDestination(17048U);
    msg.setDestinationEntity(123U);
    msg.value = 0.2770913836615887;

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
    msg.setTimeStamp(0.31339924892153925);
    msg.setSource(25119U);
    msg.setSourceEntity(208U);
    msg.setDestination(3121U);
    msg.setDestinationEntity(184U);
    msg.value = 0.848191583200227;

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
    msg.setTimeStamp(0.6039416916795312);
    msg.setSource(28468U);
    msg.setSourceEntity(237U);
    msg.setDestination(11039U);
    msg.setDestinationEntity(94U);
    msg.value = 0.6707200278336121;

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
    msg.setTimeStamp(0.6228730571611588);
    msg.setSource(24191U);
    msg.setSourceEntity(153U);
    msg.setDestination(53095U);
    msg.setDestinationEntity(243U);
    msg.value = 0.3235990782679241;

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
    msg.setTimeStamp(0.7242631923814821);
    msg.setSource(22950U);
    msg.setSourceEntity(246U);
    msg.setDestination(23460U);
    msg.setDestinationEntity(170U);
    msg.value = 0.913578739509708;

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
    msg.setTimeStamp(0.9630886289906411);
    msg.setSource(557U);
    msg.setSourceEntity(172U);
    msg.setDestination(40170U);
    msg.setDestinationEntity(156U);
    msg.value = 0.09437912691236439;

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
    msg.setTimeStamp(0.6577206873527622);
    msg.setSource(29280U);
    msg.setSourceEntity(155U);
    msg.setDestination(15866U);
    msg.setDestinationEntity(179U);
    msg.value = 0.07812648259016142;

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
    msg.setTimeStamp(0.3863510680693849);
    msg.setSource(55227U);
    msg.setSourceEntity(92U);
    msg.setDestination(29438U);
    msg.setDestinationEntity(197U);
    msg.value = 0.04097359573216275;

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
    msg.setTimeStamp(0.2289528625870273);
    msg.setSource(62284U);
    msg.setSourceEntity(15U);
    msg.setDestination(29998U);
    msg.setDestinationEntity(50U);
    msg.value = 0.44361733029793493;

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
    msg.setTimeStamp(0.5583738453650046);
    msg.setSource(30077U);
    msg.setSourceEntity(118U);
    msg.setDestination(36041U);
    msg.setDestinationEntity(132U);
    msg.value = 0.8960202724977923;

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
    msg.setTimeStamp(0.18472876977299424);
    msg.setSource(31795U);
    msg.setSourceEntity(197U);
    msg.setDestination(64652U);
    msg.setDestinationEntity(248U);
    msg.value = 0.0748925363525802;

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
    msg.setTimeStamp(0.7716123372306055);
    msg.setSource(60095U);
    msg.setSourceEntity(138U);
    msg.setDestination(28382U);
    msg.setDestinationEntity(88U);
    msg.value = 0.9919027102631027;

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
    msg.setTimeStamp(0.6328257950893182);
    msg.setSource(57293U);
    msg.setSourceEntity(141U);
    msg.setDestination(10874U);
    msg.setDestinationEntity(68U);
    msg.value = 0.47916194573533466;

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
    msg.setTimeStamp(0.10515265429920018);
    msg.setSource(17032U);
    msg.setSourceEntity(69U);
    msg.setDestination(1642U);
    msg.setDestinationEntity(139U);
    msg.value = 0.5286558239031149;

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
    msg.setTimeStamp(0.9156826345426518);
    msg.setSource(6528U);
    msg.setSourceEntity(122U);
    msg.setDestination(49035U);
    msg.setDestinationEntity(232U);
    msg.value = 0.023336899406825706;

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
    msg.setTimeStamp(0.0001262566093751527);
    msg.setSource(32505U);
    msg.setSourceEntity(126U);
    msg.setDestination(53186U);
    msg.setDestinationEntity(27U);
    msg.value = 0.3261441461533986;

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
    msg.setTimeStamp(0.682465392081535);
    msg.setSource(38389U);
    msg.setSourceEntity(202U);
    msg.setDestination(59535U);
    msg.setDestinationEntity(240U);
    msg.direction = 0.7567271511927431;
    msg.speed = 0.39186287654354135;
    msg.turbulence = 0.49204816931465356;

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
    msg.setTimeStamp(0.7342905399931544);
    msg.setSource(33711U);
    msg.setSourceEntity(76U);
    msg.setDestination(5058U);
    msg.setDestinationEntity(246U);
    msg.direction = 0.8485262368616554;
    msg.speed = 0.5913775799860714;
    msg.turbulence = 0.07995743702096514;

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
    msg.setTimeStamp(0.8536180556580598);
    msg.setSource(18933U);
    msg.setSourceEntity(224U);
    msg.setDestination(12099U);
    msg.setDestinationEntity(49U);
    msg.direction = 0.18505907685025158;
    msg.speed = 0.5919929868264017;
    msg.turbulence = 0.4806956900310486;

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
    msg.setTimeStamp(0.5321663706456544);
    msg.setSource(30114U);
    msg.setSourceEntity(82U);
    msg.setDestination(38814U);
    msg.setDestinationEntity(74U);
    msg.value = 0.5979103394028932;

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
    msg.setTimeStamp(0.3191535596590901);
    msg.setSource(65007U);
    msg.setSourceEntity(183U);
    msg.setDestination(1311U);
    msg.setDestinationEntity(117U);
    msg.value = 0.40083438996821963;

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
    msg.setTimeStamp(0.8202880218694313);
    msg.setSource(3998U);
    msg.setSourceEntity(65U);
    msg.setDestination(57228U);
    msg.setDestinationEntity(20U);
    msg.value = 0.12874063799495428;

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
    msg.setTimeStamp(0.36027818077667084);
    msg.setSource(41139U);
    msg.setSourceEntity(59U);
    msg.setDestination(9956U);
    msg.setDestinationEntity(196U);
    msg.value.assign("PFCAGBNQIPONMPKMBKUAWWGZLYEWQIUGHVNUINILJXFSTCUWATCGILWDAECHTZYJOZNIJYQMTXXBPRHEWYKUCIQFEQVFTROPFROXNVYAQIEDZMYMGTFHTCWOATRVULQKAFXJBSEYSPBVKDJODLZOCNPRSZTPHXXVB");

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
    msg.setTimeStamp(0.8936610953097296);
    msg.setSource(20001U);
    msg.setSourceEntity(226U);
    msg.setDestination(22276U);
    msg.setDestinationEntity(124U);
    msg.value.assign("FJVGNITAHEGORPKQXOFNQLBJISDUSUVRMKZMBCDXANBKEZNGZVHQZBSWAJPUASTEZPQBLXDPMQUNWGOYYCSKTDGOMMFIHJEWEYPDVXSIVGRVTCXWRTFJOFCQDYVMASD");

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
    msg.setTimeStamp(0.25038260617450003);
    msg.setSource(19003U);
    msg.setSourceEntity(246U);
    msg.setDestination(7963U);
    msg.setDestinationEntity(142U);
    msg.value.assign("THPOUMJZIXXXUCJNLLCXWQPSARIZODFEEJVKNSBXFJXRRPGGRLWJYQFPIQBALHUFXTDCGNNAEEBCRWQAFDMCHBTZBLOVIVLWPNVFVTUYAYNORQINWBDUHHJDTENGCMCZAHKZGDAIKOJRMNZFPZEMWKICKPANBGETELTOTBWRDZLJFCSTHTUSSWCLEWXBIOAYSOZMQYDUXSVVQKIRSXQMPVSDMKWKY");

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
    msg.setTimeStamp(0.007997790183381426);
    msg.setSource(40749U);
    msg.setSourceEntity(13U);
    msg.setDestination(56399U);
    msg.setDestinationEntity(70U);
    const signed char tmp_msg_0[] = {-59, 28, 7, 95, 35, 33, -23, 5, -111, -119, 100, 43, -125, -19, -72, -91, 5, 39, -94, 64, 21, 85, 47, 91, -124, -43, 14, 93, 91, 82, 110, -4, 118, 49, -113, -57, 121, 3, 94, 116, -74, 74, 5, -50, -10, -67, 125, -44, 85, 69, 62, -28, -21, -46};
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
    msg.setTimeStamp(0.21951597530644662);
    msg.setSource(52524U);
    msg.setSourceEntity(129U);
    msg.setDestination(9153U);
    msg.setDestinationEntity(174U);
    const signed char tmp_msg_0[] = {20, -87, 15, 102, 83, 94, -16, -48, -47, 109, 98, 102, -103, 106, -97, -99, -82, 123, 48, -15};
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
    msg.setTimeStamp(0.3096269932149349);
    msg.setSource(52780U);
    msg.setSourceEntity(131U);
    msg.setDestination(3270U);
    msg.setDestinationEntity(151U);
    const signed char tmp_msg_0[] = {33, 107, -25, 1, -67, 6, -1, -50, 66, 81, 28, 2, -64, 112, -85, -6, 58, -45, -12, 122, 63, 106, -127, 105, -94, -29, -70, -35, 31, 59, -49, 87, -49, -3, 125, -107, -86, 91, -49, -38, -42, 55, 32, 62, 42, -118, -79, 85, 94, -1, 112, 69, 17, -63, 70, 112, -75, 106, -74, 58, -33, 71, -48, 120, 53, -63, -30, -35, -98, 44, -114, -74, -22, -35, 60, -83, 104, -60, -115, 30, -20, -18, -93, -68, -70, 7, -105, 40, -103, -96, 38, 84, -31, -27, -28, 36, -86, -16, -115, 91, 1, -109, -114, -100, 96, -11, -117, -103, -42, -53, -124, -2, -89, 75, -123, -74, -17, 29, 0, -105, -48, 116, -128, -4, -76, 12, -51, -49, 32, -76, -10, 35, -68, 29, 117, 97, -34, -100, -90, -107, -36, -122, 87, 59, -16, -94, 125, 22, 43, -36, -70, -127, -111, 25, -108, -22, 18, -26, -41, 41, 81, 8, -15, 12, 99, 96, -7, -63, 32, -98, -86, -15, -50, 116, 42, -121, 37, -113, 50, 81, -83, 123, 26, 42, -91, 23, -14, 66, -95, -38, -107, 8, 8, -87, 29, -72, -127, 90, 109, 87, 92, -85, 91, -13, -36, 26, 18, -116, 21, -44, -123, 57, -73, -84, 98, -113, -79, -46, -114, 54, 82, -23, -78, 58, 75, -113, 6, -84, 97, 117, 30, 21, 34};
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
    msg.setTimeStamp(0.7720522699264428);
    msg.setSource(57664U);
    msg.setSourceEntity(251U);
    msg.setDestination(6385U);
    msg.setDestinationEntity(198U);
    msg.value = 0.9985972791323137;

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
    msg.setTimeStamp(0.05454283300905516);
    msg.setSource(54617U);
    msg.setSourceEntity(32U);
    msg.setDestination(26553U);
    msg.setDestinationEntity(158U);
    msg.value = 0.25700042757026287;

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
    msg.setTimeStamp(0.4755640167274584);
    msg.setSource(59584U);
    msg.setSourceEntity(141U);
    msg.setDestination(63555U);
    msg.setDestinationEntity(161U);
    msg.value = 0.03869992023779634;

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
    msg.setTimeStamp(0.8665141755953314);
    msg.setSource(29508U);
    msg.setSourceEntity(178U);
    msg.setDestination(24585U);
    msg.setDestinationEntity(107U);
    msg.type = 119U;
    msg.frequency = 3241933732U;
    msg.min_range = 15688U;
    msg.max_range = 31168U;
    msg.bits_per_point = 7U;
    msg.scale_factor = 0.9466077706019236;
    const signed char tmp_msg_0[] = {-1, -103, 20, 75, 110, -11, 72, 61, 61, -76, -33, -30, 71, 78, 61, -51, -128, -58, -27, -18, 54, 104, 48, 124, -93, -44, -27, -24, 58, 7, -28, -51, -86, 34, 67, 104, 44, -55, -8, -21, -15, -18, -58, 30, -38, 40, 43, 98, 78, -40, -13, -66, -98, 103, -103, -101, 112, 76, 54, -117, -9, 58, 28, 87, -61, -126, -15, 82, 109, -81, -128, -15, 77, -96, -17, -117, -24, -28, 46, 11, -96, 43, -62, -82, 14, 8, 56, -118, 88, 12, -68, -59, -121, 118, 78, -118, 120, 75, 38, 51, 86, 24, 114, -115, 0, 24, -14, -80, -19, -37, 39, 123, 85, 47, -27, 9, 95, -50, 44, -51, 123, -107, -38, -22, 75, 111, -81, 30, -7, -7, 57, -65, 25, -43, 22, 111, -68, 17, 112, 93, 110, 41, 48, -4, 102, -34, -16, -6, 85, 69, 26, 102, -124, 50, -35, -72, 62, 92, 11, -114, 17, 52, -46, 52, 114, 55, 115, 110, 69, 79, 8, -69, -12, -123, -88, -41, -16, -72, 99, -91, -28, -101, 9, 8, 28, -45, 89, 82, -35, 46, -19, 97, 2, -123, -73, 120, 86, -126, -23, 82, -109, 86, -70, -93, -74, 32, -28, 110, -61, 91, 125, -40, 67, 45, 10, 97, 23, 15, 44, -18, 99, -58, -67, -76, -49};
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
    msg.setTimeStamp(0.5604157846636418);
    msg.setSource(52173U);
    msg.setSourceEntity(244U);
    msg.setDestination(34757U);
    msg.setDestinationEntity(242U);
    msg.type = 28U;
    msg.frequency = 2695830952U;
    msg.min_range = 62600U;
    msg.max_range = 8265U;
    msg.bits_per_point = 61U;
    msg.scale_factor = 0.3274539294218817;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.9772067600920289;
    tmp_msg_0.beam_height = 0.4358546086550532;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {-80, -115, 110, -42, -52, -84, 75, -12, 14, -114, 103, -53, 60, 93, 53, 66, 103, 48, -65, 48, -61, 123, 36, 123, 74, -70, 51, -24, -80, -127, -37, -6, 17, 34, 26, 43, -67, 56, -56, -36, 18, -72, -45, 124, 125, -6, 124, 39, 20, 62, -114, -32, 64, -66, 97, -37, 87, -43, -12, -117, 23, 102, 40, 111, -22, 80, -85, 78, 13, -118, 9, -12, 90, -16, -126, 11, 21, 102, -52, 126, 99, 80, -103, 56, 49, -78, 55, -95, -112, 6, -94, -110, 106, -64, -119, -28, 86, -102, -98, -119, -16, 122, 123, 77, 119, -53, 77, 70, -38, -2, 39, 16, 92, -7, 97, 107, -88, -124, 22, 36, -111, 10, -53, -91, -56, 125, 88, 53, -2, -45, 3, 85, 5, -60, 53, 27, 19, -87, -97, 35, 52, -81, 124, 42, 11, -64, -105, 112, -107, -71, -97, 37, -110, 22, -70, -58, 62, -5, -12, -121, 74, 55, -51, 16, -36, -74, -118, -30, 36, -66, -7, -58, -59, -29, 30, 98, -49};
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
    msg.setTimeStamp(0.8080407255675262);
    msg.setSource(28706U);
    msg.setSourceEntity(231U);
    msg.setDestination(4437U);
    msg.setDestinationEntity(70U);
    msg.type = 174U;
    msg.frequency = 2508753284U;
    msg.min_range = 23961U;
    msg.max_range = 52639U;
    msg.bits_per_point = 125U;
    msg.scale_factor = 0.6124121439667816;
    const signed char tmp_msg_0[] = {-48, -36, 111, 99, 102, 71, 78, 53, -125, 55, -93, -88, -69, 34, 36, 21, 49, 97, 126, -47, 76, -68, -104, 102, -80, -120, 63, -35, 77, -119, -59, 80, 46, 80, 54, -107, 17, -4, 108, -88, -17, 20, 21, 95, 16, 37, 28, 8, -60, -70, 13, 41, 15, -7, 68, -124, -101, -77, 10, 122, 39, 14, -62, -41, 68, 93, -88, -20, 104, -124, 120, -125, 73, -16, -6, -15, 10, -74, 104, -43, 18, -3, 111, 89, 37, 57, -107, -81, -15, 21, 17, -74, -113, 4, 10, -47, -67, -22, -120, -123, -97, 25, 39, -5, -18, 82, 97, 113, 25, -27, -90, -122, -57, 42, 21, 43, -100, -53, 1, -118, 38, 38, 13, -105, -19, -12, 55, -18, 59, -5, 26, 63, 9, 77, 9, 22, -74, 87, -12, 90, 124, -95, 115, -57, -118, 6, 100, 90, 28, -94, -56, 24, -105, -65, -61, -119, 55, -53, 75, 67, -93, -16, 26, 86, -104, 113, -83, -8, -102, 57, -40, -81, -79, -83, 68, -89, -39, 123, 125, 116, 12, 92, 120, -32, -56, -63, 70, -92, -126, 3, -114, 44, 45, 101, -63, -49, 7, 122, 9, 123, -65, -43, 1, -39, -117, -61, -74, 103, -67, 99, 64, -109, -107, 70, -10};
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
    msg.setTimeStamp(0.7870173138190197);
    msg.setSource(40652U);
    msg.setSourceEntity(78U);
    msg.setDestination(42960U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.4172083212465342);
    msg.setSource(30899U);
    msg.setSourceEntity(96U);
    msg.setDestination(63197U);
    msg.setDestinationEntity(49U);

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
    msg.setTimeStamp(0.5112372487585033);
    msg.setSource(7088U);
    msg.setSourceEntity(159U);
    msg.setDestination(45510U);
    msg.setDestinationEntity(76U);

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
    msg.setTimeStamp(0.5496743766149993);
    msg.setSource(64663U);
    msg.setSourceEntity(181U);
    msg.setDestination(62540U);
    msg.setDestinationEntity(69U);
    msg.op = 87U;

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
    msg.setTimeStamp(0.8779115533960198);
    msg.setSource(29110U);
    msg.setSourceEntity(144U);
    msg.setDestination(47545U);
    msg.setDestinationEntity(163U);
    msg.op = 25U;

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
    msg.setTimeStamp(0.5154270960378557);
    msg.setSource(44929U);
    msg.setSourceEntity(22U);
    msg.setDestination(57967U);
    msg.setDestinationEntity(200U);
    msg.op = 57U;

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
    msg.setTimeStamp(0.38882939349804024);
    msg.setSource(47851U);
    msg.setSourceEntity(23U);
    msg.setDestination(8275U);
    msg.setDestinationEntity(22U);
    msg.value = 0.6474594162073627;
    msg.confidence = 0.9157171353928374;
    msg.opmodes.assign("KLWYMROSQCXNKP");

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
    msg.setTimeStamp(0.04831087465004891);
    msg.setSource(19542U);
    msg.setSourceEntity(72U);
    msg.setDestination(22287U);
    msg.setDestinationEntity(129U);
    msg.value = 0.027075270183540945;
    msg.confidence = 0.6976133855630281;
    msg.opmodes.assign("FZCURKEITKIZUPIPXZMUBRDHCMSKJYBTVGVQXGDGCPWQQRHUQZTJXYYJNREGQQLHFHHXTURIPVDHFPMSNVDKJNLNEOROFICKSXBUDIWZVGMGECEJMKVSFYJERWZBVBASDWZCWTIOPHABFQWLSVAAPJBMOPGWPEBAMAJQFSOOEWAKSIEOQLHDKNVRDFBNXSATNJIAMCXDHDFZLOTMULAYPTURNGWVKTGZSGUCRBJNECXCLHYXMWNIYLQZL");

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
    msg.setTimeStamp(0.8736765025290762);
    msg.setSource(49632U);
    msg.setSourceEntity(230U);
    msg.setDestination(2062U);
    msg.setDestinationEntity(47U);
    msg.value = 0.23729297578075148;
    msg.confidence = 0.5872192859334787;
    msg.opmodes.assign("RYHODPGJEREODTAVBLVWNFMXREJJWYQGCFYUELDQHXUIDTCPZNRVJODSMCBGBSEVHIQGYFBILLYYKFKIUIZWNVGMANDCXTYKNOUIEKGPCAJZCMGOBAJWCSRZXHYQTMTPDLMW");

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
    msg.setTimeStamp(0.5553554545982766);
    msg.setSource(33998U);
    msg.setSourceEntity(88U);
    msg.setDestination(20163U);
    msg.setDestinationEntity(195U);
    msg.itow = 382711651U;
    msg.lat = 0.4282037607295437;
    msg.lon = 0.6321729165777094;
    msg.height_ell = 0.6473698127559427;
    msg.height_sea = 0.40537538470195045;
    msg.hacc = 0.7709815770380333;
    msg.vacc = 0.42754346572915014;
    msg.vel_n = 0.42527717191522596;
    msg.vel_e = 0.2428119158582701;
    msg.vel_d = 0.3861281950537174;
    msg.speed = 0.5991807519722813;
    msg.gspeed = 0.6068126581045277;
    msg.heading = 0.5062085347901711;
    msg.sacc = 0.29790115956194396;
    msg.cacc = 0.8624299781622985;

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
    msg.setTimeStamp(0.2937856369729014);
    msg.setSource(17119U);
    msg.setSourceEntity(118U);
    msg.setDestination(35429U);
    msg.setDestinationEntity(245U);
    msg.itow = 884134014U;
    msg.lat = 0.846326379565923;
    msg.lon = 0.8365852391098593;
    msg.height_ell = 0.4105792747127205;
    msg.height_sea = 0.5668504747944423;
    msg.hacc = 0.9835579132851265;
    msg.vacc = 0.17164208747946896;
    msg.vel_n = 0.22919590333453654;
    msg.vel_e = 0.36304320268281975;
    msg.vel_d = 0.7952507948053168;
    msg.speed = 0.08154039894175069;
    msg.gspeed = 0.8884590778835112;
    msg.heading = 0.5441012112265677;
    msg.sacc = 0.4288666812013733;
    msg.cacc = 0.7459821891862699;

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
    msg.setTimeStamp(0.6057807691231671);
    msg.setSource(57752U);
    msg.setSourceEntity(19U);
    msg.setDestination(53259U);
    msg.setDestinationEntity(102U);
    msg.itow = 4176317950U;
    msg.lat = 0.7205317201451967;
    msg.lon = 0.41196424098670115;
    msg.height_ell = 0.39807673988009185;
    msg.height_sea = 0.8412032178603724;
    msg.hacc = 0.9995668237173352;
    msg.vacc = 0.08026712303421268;
    msg.vel_n = 0.04752456885704193;
    msg.vel_e = 0.15275407234127114;
    msg.vel_d = 0.3590930959636719;
    msg.speed = 0.02726077961340123;
    msg.gspeed = 0.18990390117851708;
    msg.heading = 0.2552048044153652;
    msg.sacc = 0.6765663312796066;
    msg.cacc = 0.1800088496608726;

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
    msg.setTimeStamp(0.7165923590137622);
    msg.setSource(57828U);
    msg.setSourceEntity(76U);
    msg.setDestination(22980U);
    msg.setDestinationEntity(186U);
    msg.id = 12U;
    msg.value = 0.5955134025285871;

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
    msg.setTimeStamp(0.27835999215680973);
    msg.setSource(35833U);
    msg.setSourceEntity(156U);
    msg.setDestination(23368U);
    msg.setDestinationEntity(36U);
    msg.id = 205U;
    msg.value = 0.11206451856647015;

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
    msg.setTimeStamp(0.9108949621765042);
    msg.setSource(62303U);
    msg.setSourceEntity(25U);
    msg.setDestination(13673U);
    msg.setDestinationEntity(252U);
    msg.id = 250U;
    msg.value = 0.044935441592784064;

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
    msg.setTimeStamp(0.26178742495472607);
    msg.setSource(19476U);
    msg.setSourceEntity(52U);
    msg.setDestination(29197U);
    msg.setDestinationEntity(224U);
    msg.x = 0.3014582195666162;
    msg.y = 0.12420048827462271;
    msg.z = 0.5067788463647346;
    msg.phi = 0.5972360924801331;
    msg.theta = 0.7031385518769765;
    msg.psi = 0.9239709917055627;

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
    msg.setTimeStamp(0.20806001047160005);
    msg.setSource(42307U);
    msg.setSourceEntity(183U);
    msg.setDestination(44732U);
    msg.setDestinationEntity(161U);
    msg.x = 0.2913076456733702;
    msg.y = 0.18196193403637484;
    msg.z = 0.9115520590824747;
    msg.phi = 0.6324492890427245;
    msg.theta = 0.31831282178951026;
    msg.psi = 0.3381490372299023;

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
    msg.setTimeStamp(0.1832092740768051);
    msg.setSource(18193U);
    msg.setSourceEntity(5U);
    msg.setDestination(22356U);
    msg.setDestinationEntity(44U);
    msg.x = 0.5335259723181685;
    msg.y = 0.6729938055840395;
    msg.z = 0.8783502395140401;
    msg.phi = 0.06766583971138829;
    msg.theta = 0.4127984862032592;
    msg.psi = 0.2524215033315411;

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
    msg.setTimeStamp(0.23347883159579552);
    msg.setSource(23634U);
    msg.setSourceEntity(81U);
    msg.setDestination(15044U);
    msg.setDestinationEntity(121U);
    msg.beam_width = 0.3097077526222016;
    msg.beam_height = 0.12469283146846533;

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
    msg.setTimeStamp(0.3046999401286762);
    msg.setSource(49267U);
    msg.setSourceEntity(234U);
    msg.setDestination(43868U);
    msg.setDestinationEntity(50U);
    msg.beam_width = 0.09760560687406339;
    msg.beam_height = 0.23172154976296888;

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
    msg.setTimeStamp(0.8958215426925015);
    msg.setSource(30648U);
    msg.setSourceEntity(230U);
    msg.setDestination(53701U);
    msg.setDestinationEntity(60U);
    msg.beam_width = 0.9843049440542123;
    msg.beam_height = 0.5284086427061833;

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
    msg.setTimeStamp(0.7698615768354573);
    msg.setSource(51380U);
    msg.setSourceEntity(253U);
    msg.setDestination(56093U);
    msg.setDestinationEntity(243U);
    msg.sane = 224U;

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
    msg.setTimeStamp(0.8391257704477175);
    msg.setSource(62922U);
    msg.setSourceEntity(200U);
    msg.setDestination(11115U);
    msg.setDestinationEntity(166U);
    msg.sane = 192U;

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
    msg.setTimeStamp(0.15157624443743967);
    msg.setSource(45248U);
    msg.setSourceEntity(223U);
    msg.setDestination(64884U);
    msg.setDestinationEntity(19U);
    msg.sane = 227U;

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
    msg.setTimeStamp(0.28745962060967034);
    msg.setSource(34104U);
    msg.setSourceEntity(0U);
    msg.setDestination(22692U);
    msg.setDestinationEntity(105U);
    msg.value = 0.10263500730071551;

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
    msg.setTimeStamp(0.11286733518188696);
    msg.setSource(38819U);
    msg.setSourceEntity(13U);
    msg.setDestination(33406U);
    msg.setDestinationEntity(89U);
    msg.value = 0.9832239036760492;

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
    msg.setTimeStamp(0.2976366862926737);
    msg.setSource(65131U);
    msg.setSourceEntity(64U);
    msg.setDestination(29990U);
    msg.setDestinationEntity(247U);
    msg.value = 0.8536783669814881;

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
    msg.setTimeStamp(0.056082075416074906);
    msg.setSource(54343U);
    msg.setSourceEntity(193U);
    msg.setDestination(7331U);
    msg.setDestinationEntity(79U);
    msg.value = 0.5757962809689232;

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
    msg.setTimeStamp(0.903981943940811);
    msg.setSource(45219U);
    msg.setSourceEntity(118U);
    msg.setDestination(10804U);
    msg.setDestinationEntity(17U);
    msg.value = 0.6957078774790179;

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
    msg.setTimeStamp(0.2972622079677454);
    msg.setSource(54884U);
    msg.setSourceEntity(231U);
    msg.setDestination(6396U);
    msg.setDestinationEntity(223U);
    msg.value = 0.8475236289669421;

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
    msg.setTimeStamp(0.022681547871093888);
    msg.setSource(54492U);
    msg.setSourceEntity(54U);
    msg.setDestination(21586U);
    msg.setDestinationEntity(182U);
    msg.value = 0.13069399526192338;

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
    msg.setTimeStamp(0.261037313283351);
    msg.setSource(56941U);
    msg.setSourceEntity(134U);
    msg.setDestination(55279U);
    msg.setDestinationEntity(214U);
    msg.value = 0.563205923698976;

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
    msg.setTimeStamp(0.6594850977960663);
    msg.setSource(43096U);
    msg.setSourceEntity(80U);
    msg.setDestination(49375U);
    msg.setDestinationEntity(102U);
    msg.value = 0.19986038909495818;

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
    msg.setTimeStamp(0.8758871150706234);
    msg.setSource(45567U);
    msg.setSourceEntity(241U);
    msg.setDestination(23345U);
    msg.setDestinationEntity(32U);
    msg.value = 0.15971622580814127;

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
    msg.setTimeStamp(0.6774232883041373);
    msg.setSource(9952U);
    msg.setSourceEntity(36U);
    msg.setDestination(57157U);
    msg.setDestinationEntity(101U);
    msg.value = 0.6204524396741316;

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
    msg.setTimeStamp(0.8617500462751663);
    msg.setSource(39539U);
    msg.setSourceEntity(232U);
    msg.setDestination(33958U);
    msg.setDestinationEntity(245U);
    msg.value = 0.45460290515699564;

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
    msg.setTimeStamp(0.6852102290566379);
    msg.setSource(56011U);
    msg.setSourceEntity(137U);
    msg.setDestination(53316U);
    msg.setDestinationEntity(173U);
    msg.value = 0.3185516806234454;

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
    msg.setTimeStamp(0.4573755689561554);
    msg.setSource(32715U);
    msg.setSourceEntity(37U);
    msg.setDestination(59642U);
    msg.setDestinationEntity(28U);
    msg.value = 0.8881875733280299;

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
    msg.setTimeStamp(0.017504896323680352);
    msg.setSource(52741U);
    msg.setSourceEntity(158U);
    msg.setDestination(6180U);
    msg.setDestinationEntity(224U);
    msg.value = 0.7685031799084365;

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
    msg.setTimeStamp(0.9381515444176666);
    msg.setSource(54017U);
    msg.setSourceEntity(185U);
    msg.setDestination(14791U);
    msg.setDestinationEntity(162U);
    msg.value = 0.07621739763267676;

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
    msg.setTimeStamp(0.45457924100097113);
    msg.setSource(50601U);
    msg.setSourceEntity(173U);
    msg.setDestination(23047U);
    msg.setDestinationEntity(60U);
    msg.value = 0.9853260982313061;

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
    msg.setTimeStamp(0.6485100749530046);
    msg.setSource(53339U);
    msg.setSourceEntity(233U);
    msg.setDestination(7716U);
    msg.setDestinationEntity(26U);
    msg.value = 0.5376739207318508;

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
    msg.setTimeStamp(0.08739512939310135);
    msg.setSource(18038U);
    msg.setSourceEntity(57U);
    msg.setDestination(13422U);
    msg.setDestinationEntity(42U);
    msg.value = 0.013694345235992667;

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
    msg.setTimeStamp(0.5482253373986603);
    msg.setSource(56422U);
    msg.setSourceEntity(3U);
    msg.setDestination(23314U);
    msg.setDestinationEntity(197U);
    msg.value = 0.10142739015847291;

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
    msg.setTimeStamp(0.0684966604466476);
    msg.setSource(31711U);
    msg.setSourceEntity(6U);
    msg.setDestination(55637U);
    msg.setDestinationEntity(147U);
    msg.value = 0.5416396410659267;

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
    msg.setTimeStamp(0.08157081838686764);
    msg.setSource(47895U);
    msg.setSourceEntity(204U);
    msg.setDestination(13750U);
    msg.setDestinationEntity(80U);
    msg.value = 0.21502558768780955;

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
    msg.setTimeStamp(0.1194054724774829);
    msg.setSource(87U);
    msg.setSourceEntity(195U);
    msg.setDestination(55469U);
    msg.setDestinationEntity(133U);
    msg.value = 0.44928724699942535;

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
    msg.setTimeStamp(0.8793582203253009);
    msg.setSource(58931U);
    msg.setSourceEntity(26U);
    msg.setDestination(24340U);
    msg.setDestinationEntity(116U);
    msg.value = 0.988873818947018;

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
    msg.setTimeStamp(0.36627928875349425);
    msg.setSource(65000U);
    msg.setSourceEntity(132U);
    msg.setDestination(24423U);
    msg.setDestinationEntity(53U);
    msg.validity = 29306U;
    msg.type = 38U;
    msg.tow = 556588881U;
    msg.base_lat = 0.48170702397046616;
    msg.base_lon = 0.24950648154051014;
    msg.base_height = 0.9401013185658267;
    msg.n = 0.27621786256793934;
    msg.e = 0.9307136164839915;
    msg.d = 0.4049963287449978;
    msg.v_n = 0.677239482588182;
    msg.v_e = 0.7774279742020391;
    msg.v_d = 0.8563071879501942;
    msg.satellites = 206U;
    msg.iar_hyp = 26539U;
    msg.iar_ratio = 0.7135111129699644;

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
    msg.setTimeStamp(0.2618098927082321);
    msg.setSource(12757U);
    msg.setSourceEntity(198U);
    msg.setDestination(22372U);
    msg.setDestinationEntity(19U);
    msg.validity = 40217U;
    msg.type = 63U;
    msg.tow = 3846031803U;
    msg.base_lat = 0.9951583699376954;
    msg.base_lon = 0.7606129132485272;
    msg.base_height = 0.4745298034118154;
    msg.n = 0.8313244467475777;
    msg.e = 0.5595066461753637;
    msg.d = 0.5092922033643779;
    msg.v_n = 0.5906356907338546;
    msg.v_e = 0.5451612985514902;
    msg.v_d = 0.3198523045145375;
    msg.satellites = 16U;
    msg.iar_hyp = 57211U;
    msg.iar_ratio = 0.3082499276545706;

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
    msg.setTimeStamp(0.8549241743331323);
    msg.setSource(5205U);
    msg.setSourceEntity(181U);
    msg.setDestination(26529U);
    msg.setDestinationEntity(60U);
    msg.validity = 23377U;
    msg.type = 67U;
    msg.tow = 2320242265U;
    msg.base_lat = 0.9383777399399581;
    msg.base_lon = 0.664783485898064;
    msg.base_height = 0.8841136210715057;
    msg.n = 0.7582597406875538;
    msg.e = 0.9222211541497163;
    msg.d = 0.7935574533826956;
    msg.v_n = 0.8122602710520449;
    msg.v_e = 0.8877035255153891;
    msg.v_d = 0.6321805844221074;
    msg.satellites = 196U;
    msg.iar_hyp = 17880U;
    msg.iar_ratio = 0.36346901499523365;

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
    msg.setTimeStamp(0.2908560106564586);
    msg.setSource(35844U);
    msg.setSourceEntity(37U);
    msg.setDestination(11912U);
    msg.setDestinationEntity(25U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.9120493610570357;
    tmp_msg_0.lon = 0.5965997226971419;
    tmp_msg_0.height = 0.8941963272448848;
    tmp_msg_0.x = 0.45356709754820823;
    tmp_msg_0.y = 0.8365042165763091;
    tmp_msg_0.z = 0.08150216801827925;
    tmp_msg_0.phi = 0.2088918615721348;
    tmp_msg_0.theta = 0.5942922520024778;
    tmp_msg_0.psi = 0.44441464819034815;
    tmp_msg_0.u = 0.5517382315321818;
    tmp_msg_0.v = 0.007778815917245052;
    tmp_msg_0.w = 0.2983211014760465;
    tmp_msg_0.vx = 0.45771776012167653;
    tmp_msg_0.vy = 0.8058174041578027;
    tmp_msg_0.vz = 0.0190187267699643;
    tmp_msg_0.p = 0.5887859941917032;
    tmp_msg_0.q = 0.1472162851745199;
    tmp_msg_0.r = 0.3515840163091537;
    tmp_msg_0.depth = 0.5110493733551096;
    tmp_msg_0.alt = 0.6629319518914388;
    msg.state.set(tmp_msg_0);
    msg.type = 188U;

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
    msg.setTimeStamp(0.3321601384995636);
    msg.setSource(7935U);
    msg.setSourceEntity(1U);
    msg.setDestination(62895U);
    msg.setDestinationEntity(194U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.830287167557641;
    tmp_msg_0.lon = 0.8084206413139153;
    tmp_msg_0.height = 0.039435270691144164;
    tmp_msg_0.x = 0.6975010775970365;
    tmp_msg_0.y = 0.6949933604935576;
    tmp_msg_0.z = 0.6473147445517508;
    tmp_msg_0.phi = 0.5468561091188093;
    tmp_msg_0.theta = 0.636778409358685;
    tmp_msg_0.psi = 0.11247435574534415;
    tmp_msg_0.u = 0.6750512993599932;
    tmp_msg_0.v = 0.1072798883011371;
    tmp_msg_0.w = 0.4100619696960911;
    tmp_msg_0.vx = 0.754580058186933;
    tmp_msg_0.vy = 0.6967497610873961;
    tmp_msg_0.vz = 0.744976702753992;
    tmp_msg_0.p = 0.32341982451378104;
    tmp_msg_0.q = 0.17165043318212425;
    tmp_msg_0.r = 0.11775127983702371;
    tmp_msg_0.depth = 0.06288670740300462;
    tmp_msg_0.alt = 0.4201839662081456;
    msg.state.set(tmp_msg_0);
    msg.type = 138U;

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
    msg.setTimeStamp(0.7974902741113011);
    msg.setSource(42715U);
    msg.setSourceEntity(103U);
    msg.setDestination(50547U);
    msg.setDestinationEntity(129U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.27962771133410025;
    tmp_msg_0.lon = 0.8746599901762798;
    tmp_msg_0.height = 0.464897890681384;
    tmp_msg_0.x = 0.2536740706438354;
    tmp_msg_0.y = 0.959538379175684;
    tmp_msg_0.z = 0.07659698220630384;
    tmp_msg_0.phi = 0.8328757479147341;
    tmp_msg_0.theta = 0.21114731371575812;
    tmp_msg_0.psi = 0.788604210430333;
    tmp_msg_0.u = 0.46148142159690064;
    tmp_msg_0.v = 0.3688330688442647;
    tmp_msg_0.w = 0.677771654377845;
    tmp_msg_0.vx = 0.509233279379876;
    tmp_msg_0.vy = 0.901854835488601;
    tmp_msg_0.vz = 0.8525311575708656;
    tmp_msg_0.p = 0.2653063673333226;
    tmp_msg_0.q = 0.6487730545879244;
    tmp_msg_0.r = 0.458211236694695;
    tmp_msg_0.depth = 0.8182053769728658;
    tmp_msg_0.alt = 0.02024073494710843;
    msg.state.set(tmp_msg_0);
    msg.type = 33U;

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
    msg.setTimeStamp(0.49198076968784543);
    msg.setSource(558U);
    msg.setSourceEntity(18U);
    msg.setDestination(4943U);
    msg.setDestinationEntity(62U);
    msg.value = 0.7346977591296942;

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
    msg.setTimeStamp(0.26882229174468975);
    msg.setSource(59245U);
    msg.setSourceEntity(69U);
    msg.setDestination(31227U);
    msg.setDestinationEntity(32U);
    msg.value = 0.8758043667091913;

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
    msg.setTimeStamp(0.015230411481974349);
    msg.setSource(8730U);
    msg.setSourceEntity(248U);
    msg.setDestination(3451U);
    msg.setDestinationEntity(233U);
    msg.value = 0.08450196238422569;

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
    msg.setTimeStamp(0.29455512397589034);
    msg.setSource(10375U);
    msg.setSourceEntity(58U);
    msg.setDestination(10063U);
    msg.setDestinationEntity(42U);
    msg.value = 0.22416677620579661;

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
    msg.setTimeStamp(0.7912720424550248);
    msg.setSource(34142U);
    msg.setSourceEntity(130U);
    msg.setDestination(55712U);
    msg.setDestinationEntity(242U);
    msg.value = 0.7673713668402246;

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
    msg.setTimeStamp(0.7412325003091447);
    msg.setSource(17118U);
    msg.setSourceEntity(112U);
    msg.setDestination(9172U);
    msg.setDestinationEntity(160U);
    msg.value = 0.4605103216818519;

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
    msg.setTimeStamp(0.23740451586547273);
    msg.setSource(9223U);
    msg.setSourceEntity(19U);
    msg.setDestination(54846U);
    msg.setDestinationEntity(224U);
    msg.value = 0.66630816015978;

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
    msg.setTimeStamp(0.6887811979869756);
    msg.setSource(14560U);
    msg.setSourceEntity(231U);
    msg.setDestination(39129U);
    msg.setDestinationEntity(90U);
    msg.value = 0.0623805095316311;

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
    msg.setTimeStamp(0.24945590476273338);
    msg.setSource(8702U);
    msg.setSourceEntity(217U);
    msg.setDestination(2466U);
    msg.setDestinationEntity(248U);
    msg.value = 0.46116213809395146;

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
    msg.setTimeStamp(0.44149950832556695);
    msg.setSource(46854U);
    msg.setSourceEntity(108U);
    msg.setDestination(43407U);
    msg.setDestinationEntity(162U);
    msg.value = 0.9592561892509821;

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
    msg.setTimeStamp(0.4466883855208884);
    msg.setSource(59463U);
    msg.setSourceEntity(139U);
    msg.setDestination(7473U);
    msg.setDestinationEntity(233U);
    msg.value = 0.9877039399434606;

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
    msg.setTimeStamp(0.6372564171546523);
    msg.setSource(11036U);
    msg.setSourceEntity(203U);
    msg.setDestination(28824U);
    msg.setDestinationEntity(97U);
    msg.value = 0.6326555515870887;

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
    msg.setTimeStamp(0.2769491630810097);
    msg.setSource(32009U);
    msg.setSourceEntity(16U);
    msg.setDestination(35229U);
    msg.setDestinationEntity(51U);
    msg.value = 0.7180264137407414;

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
    msg.setTimeStamp(0.27444995132597894);
    msg.setSource(22528U);
    msg.setSourceEntity(76U);
    msg.setDestination(2426U);
    msg.setDestinationEntity(121U);
    msg.value = 0.6081880254927352;

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
    msg.setTimeStamp(0.22132640127791314);
    msg.setSource(12493U);
    msg.setSourceEntity(151U);
    msg.setDestination(14502U);
    msg.setDestinationEntity(182U);
    msg.value = 0.136914961529628;

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
    msg.setTimeStamp(0.7995224487784555);
    msg.setSource(29273U);
    msg.setSourceEntity(31U);
    msg.setDestination(44599U);
    msg.setDestinationEntity(10U);
    msg.id = 86U;
    msg.zoom = 146U;
    msg.action = 202U;

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
    msg.setTimeStamp(0.3452201106534267);
    msg.setSource(57315U);
    msg.setSourceEntity(220U);
    msg.setDestination(43074U);
    msg.setDestinationEntity(162U);
    msg.id = 26U;
    msg.zoom = 137U;
    msg.action = 12U;

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
    msg.setTimeStamp(0.38024626919510884);
    msg.setSource(28463U);
    msg.setSourceEntity(0U);
    msg.setDestination(27616U);
    msg.setDestinationEntity(165U);
    msg.id = 20U;
    msg.zoom = 241U;
    msg.action = 168U;

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
    msg.setTimeStamp(0.3570052509814443);
    msg.setSource(63695U);
    msg.setSourceEntity(142U);
    msg.setDestination(41374U);
    msg.setDestinationEntity(229U);
    msg.id = 15U;
    msg.value = 0.7267921025927326;

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
    msg.setTimeStamp(0.9985536195113247);
    msg.setSource(52514U);
    msg.setSourceEntity(65U);
    msg.setDestination(3672U);
    msg.setDestinationEntity(242U);
    msg.id = 218U;
    msg.value = 0.8746875397723869;

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
    msg.setTimeStamp(0.19582042367185126);
    msg.setSource(12278U);
    msg.setSourceEntity(220U);
    msg.setDestination(32766U);
    msg.setDestinationEntity(169U);
    msg.id = 207U;
    msg.value = 0.3149230533419296;

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
    msg.setTimeStamp(0.5567176879316065);
    msg.setSource(54140U);
    msg.setSourceEntity(99U);
    msg.setDestination(59979U);
    msg.setDestinationEntity(237U);
    msg.id = 40U;
    msg.value = 0.9183823196704068;

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
    msg.setTimeStamp(0.4838219390578853);
    msg.setSource(17125U);
    msg.setSourceEntity(105U);
    msg.setDestination(28742U);
    msg.setDestinationEntity(25U);
    msg.id = 26U;
    msg.value = 0.036236628584734976;

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
    msg.setTimeStamp(0.5600378851940359);
    msg.setSource(26869U);
    msg.setSourceEntity(180U);
    msg.setDestination(18658U);
    msg.setDestinationEntity(57U);
    msg.id = 162U;
    msg.value = 0.9117526302946916;

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
    msg.setTimeStamp(0.6186822451120972);
    msg.setSource(42465U);
    msg.setSourceEntity(229U);
    msg.setDestination(61791U);
    msg.setDestinationEntity(215U);
    msg.id = 80U;
    msg.angle = 0.620691078267396;

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
    msg.setTimeStamp(0.6088475957444585);
    msg.setSource(57612U);
    msg.setSourceEntity(168U);
    msg.setDestination(1456U);
    msg.setDestinationEntity(227U);
    msg.id = 73U;
    msg.angle = 0.10490921021674415;

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
    msg.setTimeStamp(0.8524034668591256);
    msg.setSource(10444U);
    msg.setSourceEntity(108U);
    msg.setDestination(30396U);
    msg.setDestinationEntity(181U);
    msg.id = 231U;
    msg.angle = 0.3920794156078581;

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
    msg.setTimeStamp(0.4776150984563161);
    msg.setSource(29778U);
    msg.setSourceEntity(104U);
    msg.setDestination(47893U);
    msg.setDestinationEntity(35U);
    msg.op = 131U;
    msg.actions.assign("EHQEDUXYYSBXRECRZCSACDVYAINLPTZVXJWJXSGSOWYQAKNRZCOHDIFVFTPANGJGBTLTPKWZPMXCOBUHOUJIOWRDSLWSYTUVQWLGLZVCDMHQKNMYNSMPIQPYOHMRFWAFXVQVKVDKTUKMGFUZZBGTYQGAGPEFYUJVQBVKAGJREIBLJUMNTFXEAHOZMACBWRFNSJIOMRRUMBOKTQQWXGSDIZAF");

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
    msg.setTimeStamp(0.3797041910202068);
    msg.setSource(42383U);
    msg.setSourceEntity(209U);
    msg.setDestination(55144U);
    msg.setDestinationEntity(227U);
    msg.op = 28U;
    msg.actions.assign("NOSBJFTRVVACXULZWGSZTNEOBGHRZTKEVVIFBMOTKPJVPLEHXASTYZIZTWMIDBWLSOVK");

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
    msg.setTimeStamp(0.7494205165837428);
    msg.setSource(64080U);
    msg.setSourceEntity(172U);
    msg.setDestination(30534U);
    msg.setDestinationEntity(163U);
    msg.op = 35U;
    msg.actions.assign("ZVDWNSDBKTWLKSFSNRPXAYRXEBZCGBYTPKYMWGPEYZOTSOXDMFAFAOVZOMNKUJCYCKDSHROXL");

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
    msg.setTimeStamp(0.7253480948116485);
    msg.setSource(12498U);
    msg.setSourceEntity(138U);
    msg.setDestination(13077U);
    msg.setDestinationEntity(93U);
    msg.actions.assign("AQMFLKQHZGZDVIVUMREBCBREFGMTTOLKZWYJIKXFSQITZEYYFEUQKJTXMEWSDEJILVFNPWWGORHDNNQXCGSNVUFBRBLFRNQMYQEYOXBXXDKXSRFGPBSHOUWZAPOCAPLHYAKKSLSZPHOKUZUDNYBHTCAVNQEVWABOBCGIRMYOZKIJVXAEJCIRDWUETLHVWRDMCVSAPVDMAWPMJCJLWQFHURQGYTNPGJZJALDXGIOUTSTZ");

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
    msg.setTimeStamp(0.0825021111239933);
    msg.setSource(26178U);
    msg.setSourceEntity(1U);
    msg.setDestination(38337U);
    msg.setDestinationEntity(61U);
    msg.actions.assign("VQCFUXTAJLCBMANURHMIHPJELACMVPBSPMHLXYLGKKPBTAWJJLEEGKBUIPERX");

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
    msg.setTimeStamp(0.6584473483000761);
    msg.setSource(31256U);
    msg.setSourceEntity(5U);
    msg.setDestination(35180U);
    msg.setDestinationEntity(239U);
    msg.actions.assign("QTQVUKLRAYOMVCLJLDVELJTJCHUBWXUTLHFBSBHHULIMWKIIZEGYRVGXJYAVFNGPPYQWZQQBDOINBRSWXPGPZTWLEQSTTPIHXSHDDKNNPJXSYEGVWTVCSYMDONRVUMYOQNXFNIHHBUROCZLWGEYVDFSNZYZHKIEZVWMFOCBAQKTBOLMAIDKRKGZFFMCRJFNUWPOXTPIKQOJAXZDNATFKRYREA");

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
    msg.setTimeStamp(0.8987472326721017);
    msg.setSource(26385U);
    msg.setSourceEntity(5U);
    msg.setDestination(39410U);
    msg.setDestinationEntity(76U);
    msg.button = 43U;
    msg.value = 170U;

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
    msg.setTimeStamp(0.7539898659970069);
    msg.setSource(26852U);
    msg.setSourceEntity(70U);
    msg.setDestination(30856U);
    msg.setDestinationEntity(220U);
    msg.button = 7U;
    msg.value = 134U;

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
    msg.setTimeStamp(0.6086959624125035);
    msg.setSource(62904U);
    msg.setSourceEntity(234U);
    msg.setDestination(51659U);
    msg.setDestinationEntity(90U);
    msg.button = 235U;
    msg.value = 243U;

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
    msg.setTimeStamp(0.5162853034032732);
    msg.setSource(12267U);
    msg.setSourceEntity(92U);
    msg.setDestination(33871U);
    msg.setDestinationEntity(168U);
    msg.op = 194U;
    msg.text.assign("ROHFOHYEMJULVQECBFZQTJDHIXNJWUUABDZSKYMLPSHOZGXGXUSRKTUTOAIXBAIKFWDCUBMODZVYHCLXYQLIGAKVTXTCLEZYIWWCVUFLIBJIRRWFJTGBPSQKAABQSMNDEKLSYVRTPVAMSFZHCEGQMVPSJTLTLXYINKLZCREMXWJQIPOKODUWQHVBUPQIMQYJREPNEOFDNNMEFZHNGKDPWPJBZKRWSGVCACUGPZJENGGSDONWADXHYAVMF");

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
    msg.setTimeStamp(0.5794919502323725);
    msg.setSource(44876U);
    msg.setSourceEntity(230U);
    msg.setDestination(5474U);
    msg.setDestinationEntity(202U);
    msg.op = 138U;
    msg.text.assign("USZOVKIKOLZIRCUHBWCEPPVYNEAWGYQFUNPTIWXKYGXLPXVGKDMKQTTHOKLRSIICTYVVFWKGMNOSVFMELHBIHRXPPZNJQGEAEYXUKRZWTHZAHRETRNPXQULGFDJADZEMORUJRDCUWBZZDJWXZYVGFBOCTJDSJOESCFVASFQIVFEHGQHLNBHNYPU");

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
    msg.setTimeStamp(0.44359388534679345);
    msg.setSource(22536U);
    msg.setSourceEntity(95U);
    msg.setDestination(64166U);
    msg.setDestinationEntity(55U);
    msg.op = 214U;
    msg.text.assign("CNOYFKSJIIJWXAVYUTPORLIMXWXHZNWOHDJRJCAEXUPPDFZBNEELAHZIYUSVEVRHUEFTGBNCBLOBGOVVTHQGMNIPEGFBRDDDUZYVKGKUWLFJAJYCMYPUNYMHAWYWQBFPFNSIVDORNVWMTIOSGAXQDSEMKLGJZKCKEOZCCBZPPXKXLOMVBKFGQDYNPBSTZXONVQUQATHHLLTSZTIEFHMUAARTAJSRQMQQCYRXBXIRJWSDWTEDCCI");

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
    msg.setTimeStamp(0.19852662895422124);
    msg.setSource(19216U);
    msg.setSourceEntity(32U);
    msg.setDestination(13397U);
    msg.setDestinationEntity(13U);
    msg.op = 208U;
    msg.time_remain = 0.6504367864455556;
    msg.sched_time = 0.3355782876673248;

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
    msg.setTimeStamp(0.03571000747739561);
    msg.setSource(20245U);
    msg.setSourceEntity(43U);
    msg.setDestination(50878U);
    msg.setDestinationEntity(30U);
    msg.op = 47U;
    msg.time_remain = 0.16252342947057574;
    msg.sched_time = 0.6215105369412288;

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
    msg.setTimeStamp(0.4060844788081257);
    msg.setSource(1151U);
    msg.setSourceEntity(143U);
    msg.setDestination(16159U);
    msg.setDestinationEntity(93U);
    msg.op = 202U;
    msg.time_remain = 0.8904928263942916;
    msg.sched_time = 0.9108987985912941;

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
    msg.setTimeStamp(0.38720961061017534);
    msg.setSource(36548U);
    msg.setSourceEntity(76U);
    msg.setDestination(28317U);
    msg.setDestinationEntity(182U);
    msg.name.assign("NMLVPMGFYQLXHVIJCEOHZCYDWFSJNLSHIQTXZIZWKMMNXSETEQKZADQZHOQDXAUHCCEDXVKGVLIYANWOCLUKOFEQIVDSWPLWDKG");
    msg.op = 195U;
    msg.sched_time = 0.9538318469208393;

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
    msg.setTimeStamp(0.38666327515326004);
    msg.setSource(62949U);
    msg.setSourceEntity(125U);
    msg.setDestination(32228U);
    msg.setDestinationEntity(184U);
    msg.name.assign("YEVGZDHEGHVKJGTAJDMVYTSQRKRRPQVOJL");
    msg.op = 48U;
    msg.sched_time = 0.17333266172120476;

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
    msg.setTimeStamp(0.13199827183060764);
    msg.setSource(24857U);
    msg.setSourceEntity(225U);
    msg.setDestination(4936U);
    msg.setDestinationEntity(46U);
    msg.name.assign("PNBHXNTZMAVRSOXBJULVIMEAPCPVWKTMDZPKNKJPOJIGMCRPOFGICVLPITDBOFYQCRYHNEUFBKXAXIYEHFAZZVKSIUACJUTKHTIVBGVGCCRAYZHMXQEYYZXRTWIXAKZCPZNQPXJTTVMTWALWFGVPBFR");
    msg.op = 151U;
    msg.sched_time = 0.7567284471188648;

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
    msg.setTimeStamp(0.5162639775117606);
    msg.setSource(41256U);
    msg.setSourceEntity(48U);
    msg.setDestination(47109U);
    msg.setDestinationEntity(75U);

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
    msg.setTimeStamp(0.17162640321003864);
    msg.setSource(7834U);
    msg.setSourceEntity(165U);
    msg.setDestination(14805U);
    msg.setDestinationEntity(247U);

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
    msg.setTimeStamp(0.2035615431489215);
    msg.setSource(32917U);
    msg.setSourceEntity(20U);
    msg.setDestination(53431U);
    msg.setDestinationEntity(27U);

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
    msg.setTimeStamp(0.834517669489915);
    msg.setSource(40046U);
    msg.setSourceEntity(160U);
    msg.setDestination(42461U);
    msg.setDestinationEntity(231U);
    msg.name.assign("QNAHSGACDCTDQLRFGJDLXSIMLNNWMKEOPZXKWZRYADJQYJXXBUZWRSSAHRNVQJOLIBTJQJKCUORIRFPMHOVKBUCHEUUPXTQADNZZFHETEYCTBCDTVUEMBWPVEXADPKVIHFSZEAUYYIBDBQILYBN");
    msg.state = 4U;

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
    msg.setTimeStamp(0.2650747589303233);
    msg.setSource(7802U);
    msg.setSourceEntity(206U);
    msg.setDestination(24805U);
    msg.setDestinationEntity(116U);
    msg.name.assign("UYOPTNHFAALVREBMAUZIRBTWSWPGUZTVXYVWISSIBEWVFSGFCDYLXMDATGGFQNHQPLBSESQLRIFMRTKXHGEJIWHOYEDHZQCLZBUUXVQMQLZPIXQYYOZJBKFKGCEVCIESJXWMRXAANPKCDYXVZXAJ");
    msg.state = 45U;

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
    msg.setTimeStamp(0.38898657914052537);
    msg.setSource(63899U);
    msg.setSourceEntity(122U);
    msg.setDestination(34466U);
    msg.setDestinationEntity(129U);
    msg.name.assign("KOGVUNLFLDAITNAENTVMQAQVTXKVOFFBNZYSDJNDQWCNUAPQNSPVMLUCAQGIDKYOAXSXXJWLCBQDDCJNRFRZSCSIKZVRTFADPFFQLEUIDXLEAHCHBOWIPENWHAMRUSVBES");
    msg.state = 135U;

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
    msg.setTimeStamp(0.8343300786698667);
    msg.setSource(6357U);
    msg.setSourceEntity(230U);
    msg.setDestination(13635U);
    msg.setDestinationEntity(16U);
    msg.name.assign("EPGOUZLJHHSONEHJQBKUNWBDGMMOFMGVUGKVZHJPDINQFFWIALJMCLUVQXHYPAMHFZEXUCPOKZSSTDBSQYWKDKNXOXAEFIBEPPMEXBNXSZPICTKWVGMLYUFWYTOZ");
    msg.value = 56U;

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
    msg.setTimeStamp(0.41107115073286327);
    msg.setSource(36756U);
    msg.setSourceEntity(218U);
    msg.setDestination(21614U);
    msg.setDestinationEntity(209U);
    msg.name.assign("UBAAREBYTWANEBVYISUPJRGYXOCSDJCGOYI");
    msg.value = 120U;

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
    msg.setTimeStamp(0.8368689702670797);
    msg.setSource(55249U);
    msg.setSourceEntity(245U);
    msg.setDestination(2235U);
    msg.setDestinationEntity(223U);
    msg.name.assign("APGPBTPIFSMOILHFYZMXJLHIBZOWTBJCVYVSMRMOSFVFNAQDCZDFQXOWNPRDFYWCOKYGHLZBHFCDXGMCKEKAHSSYWUYTUNNPGNRUEUIITWBMPPLLNTNANTKDVJVXFHYCVMECPUFFKHOZXEEXBVMBROCSLMCBEESNQTVDWDNKGRECZAIQTQQADWJHHOPWUUSZSSGEXYOXQ");
    msg.value = 16U;

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
    msg.setTimeStamp(0.7056777563087858);
    msg.setSource(52612U);
    msg.setSourceEntity(123U);
    msg.setDestination(10301U);
    msg.setDestinationEntity(167U);
    msg.name.assign("YSUOODHDRCWLHFEGYAEUYFKSYKVINYSXQDVC");

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
    msg.setTimeStamp(0.70422925307281);
    msg.setSource(36176U);
    msg.setSourceEntity(195U);
    msg.setDestination(18287U);
    msg.setDestinationEntity(225U);
    msg.name.assign("WUJUYBRLWVFNXNXSNXJCRMLIKFUCQCUAQVFSJFARVDNHSXAONMBZHKSJKPYVVOIFMHSAGQFPQSRGGMYAPDCLEATCJKCESKTYEBJZLVCVTUEYMENPGANIHDFXKERMTWDIRZOSOHOIQBLIPLJLZBXLWAGCUJDPZHXESTJYRWKUMAIIATNFEPFGXVOMPBXO");

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
    msg.setTimeStamp(0.7584751721314581);
    msg.setSource(56591U);
    msg.setSourceEntity(11U);
    msg.setDestination(64264U);
    msg.setDestinationEntity(208U);
    msg.name.assign("SHFMMQQJQQWENONGUZKKOATOYXCJMQKVXCZTCFXVFXEFEMRUBZZNJPFDLAFVIBJWKSEUUTNCWVOVHXYXGMYWHDNPDDBNMWAW");

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
    msg.setTimeStamp(0.5651784403043402);
    msg.setSource(1908U);
    msg.setSourceEntity(38U);
    msg.setDestination(60611U);
    msg.setDestinationEntity(178U);
    msg.name.assign("LVUBGXQPDFPUOAZZRTCTIJAISBMSPRHYZNGEQZKCCNWYBOVGWRSTRYUGIGMJFXIBSVEHJCSVAFKCWMQFLMAQXNMOCXDOZVWKCDOHYINBGMDWBTRJOMNFHVHRPSLTVTOZAPPYUEIXOPLDBKACLBAWCDABYNBHHKAENITFCMNKWDKPQGFUTE");
    msg.value = 168U;

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
    msg.setTimeStamp(0.20934301397552213);
    msg.setSource(47241U);
    msg.setSourceEntity(40U);
    msg.setDestination(1240U);
    msg.setDestinationEntity(40U);
    msg.name.assign("HMLZKTYQXPKPGLCDFWOMHDWDRNDIUFQZODXWDNAZJOSVIUEMSQVSAPTHVZGUXLAZVYPUNKPCXIGERILMWLNRPETSSIJHRHQSXNGEUNYKEHLONFTSGCHMGYDRQPZTOVBEWKEUCARVPFYVKMYHBBJWOZKAUZIEBAYWAVWSWKSJTXHICZCPLEMVDNUJTJKWUBXBBCYFXRTKGGAVFQPQXOTIMHJYROJCIFGCMRBNOZFQBQAX");
    msg.value = 58U;

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
    msg.setTimeStamp(0.7511254811742395);
    msg.setSource(52055U);
    msg.setSourceEntity(172U);
    msg.setDestination(48711U);
    msg.setDestinationEntity(121U);
    msg.name.assign("RQYPOSJERZXVEVZLLQOCBBDDCNEGEAXIPKTYAWVQMUVGODXIMATBZMTFGAYDFDBRLFUNEALCTZTJESBWOLXJRQBJ");
    msg.value = 213U;

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
    msg.setTimeStamp(0.7642304662880758);
    msg.setSource(52673U);
    msg.setSourceEntity(84U);
    msg.setDestination(22404U);
    msg.setDestinationEntity(31U);
    msg.id = 13U;
    msg.period = 3674263820U;
    msg.duty_cycle = 3163889530U;

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
    msg.setTimeStamp(0.2021875083859771);
    msg.setSource(9819U);
    msg.setSourceEntity(202U);
    msg.setDestination(2986U);
    msg.setDestinationEntity(173U);
    msg.id = 223U;
    msg.period = 4007737178U;
    msg.duty_cycle = 1086486759U;

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
    msg.setTimeStamp(0.3094466838613179);
    msg.setSource(63595U);
    msg.setSourceEntity(14U);
    msg.setDestination(42804U);
    msg.setDestinationEntity(5U);
    msg.id = 202U;
    msg.period = 2709591724U;
    msg.duty_cycle = 1450978614U;

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
    msg.setTimeStamp(0.03812119503621392);
    msg.setSource(51995U);
    msg.setSourceEntity(61U);
    msg.setDestination(42324U);
    msg.setDestinationEntity(229U);
    msg.id = 138U;
    msg.period = 2851530125U;
    msg.duty_cycle = 796667057U;

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
    msg.setTimeStamp(0.17936833548740194);
    msg.setSource(55755U);
    msg.setSourceEntity(58U);
    msg.setDestination(14735U);
    msg.setDestinationEntity(91U);
    msg.id = 82U;
    msg.period = 3263613117U;
    msg.duty_cycle = 4065263642U;

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
    msg.setTimeStamp(0.1048441244673789);
    msg.setSource(40674U);
    msg.setSourceEntity(183U);
    msg.setDestination(34805U);
    msg.setDestinationEntity(54U);
    msg.id = 13U;
    msg.period = 4276295281U;
    msg.duty_cycle = 2673784150U;

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
    msg.setTimeStamp(0.9629380287497342);
    msg.setSource(9037U);
    msg.setSourceEntity(219U);
    msg.setDestination(50151U);
    msg.setDestinationEntity(175U);
    msg.lat = 0.07884330517512483;
    msg.lon = 0.9058610911956564;
    msg.height = 0.6206199495347314;
    msg.x = 0.2630109389935862;
    msg.y = 0.48488473740623184;
    msg.z = 0.5057120783798891;
    msg.phi = 0.4800420078898193;
    msg.theta = 0.6814543757442904;
    msg.psi = 0.7701607768076664;
    msg.u = 0.5514084507008363;
    msg.v = 0.17907981377995152;
    msg.w = 0.27816177435890077;
    msg.vx = 0.281263393881074;
    msg.vy = 0.34727140517372956;
    msg.vz = 0.8882438124712304;
    msg.p = 0.07027103423918934;
    msg.q = 0.84297373075474;
    msg.r = 0.05770310770482345;
    msg.depth = 0.2175982404220459;
    msg.alt = 0.3888881509880475;

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
    msg.setTimeStamp(0.5257302937991094);
    msg.setSource(6087U);
    msg.setSourceEntity(130U);
    msg.setDestination(2049U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.5866479910459091;
    msg.lon = 0.22539882774188236;
    msg.height = 0.9204188597565996;
    msg.x = 0.2575255756263053;
    msg.y = 0.6954488027846101;
    msg.z = 0.5242299799597459;
    msg.phi = 0.25211658447251506;
    msg.theta = 0.5059170212865023;
    msg.psi = 0.8023412056210152;
    msg.u = 0.3592240795053985;
    msg.v = 0.3669967950977385;
    msg.w = 0.5082996027177423;
    msg.vx = 0.9307861117677242;
    msg.vy = 0.5388949952088986;
    msg.vz = 0.005501785191589836;
    msg.p = 0.5603463881388062;
    msg.q = 0.43048508958720166;
    msg.r = 0.014048796476837766;
    msg.depth = 0.8160703287040775;
    msg.alt = 0.3911118924778906;

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
    msg.setTimeStamp(0.6759168709507399);
    msg.setSource(21088U);
    msg.setSourceEntity(107U);
    msg.setDestination(34530U);
    msg.setDestinationEntity(98U);
    msg.lat = 0.744835613794327;
    msg.lon = 0.5734713620010042;
    msg.height = 0.6697472843745172;
    msg.x = 0.8027018991705291;
    msg.y = 0.6031885397397251;
    msg.z = 0.6558443604968516;
    msg.phi = 0.6774892830613831;
    msg.theta = 0.6881325656768319;
    msg.psi = 0.3837411538126262;
    msg.u = 0.5344066763399513;
    msg.v = 0.7078087131442057;
    msg.w = 0.6424623306499813;
    msg.vx = 0.17246923048523022;
    msg.vy = 0.9034911589370213;
    msg.vz = 0.9356790770387146;
    msg.p = 0.25093743694410764;
    msg.q = 0.6519219037325887;
    msg.r = 0.8650224695151133;
    msg.depth = 0.16069392876934208;
    msg.alt = 0.39815457535628385;

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
    msg.setTimeStamp(0.48808634762815184);
    msg.setSource(62159U);
    msg.setSourceEntity(232U);
    msg.setDestination(8264U);
    msg.setDestinationEntity(165U);
    msg.x = 0.3459700957175019;
    msg.y = 0.18697820892524475;
    msg.z = 0.06602005090881558;

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
    msg.setTimeStamp(0.040682078000836674);
    msg.setSource(42622U);
    msg.setSourceEntity(54U);
    msg.setDestination(47169U);
    msg.setDestinationEntity(239U);
    msg.x = 0.28637043549492414;
    msg.y = 0.5116987428188317;
    msg.z = 0.8306484839914493;

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
    msg.setTimeStamp(0.8268039241847418);
    msg.setSource(12928U);
    msg.setSourceEntity(163U);
    msg.setDestination(39199U);
    msg.setDestinationEntity(117U);
    msg.x = 0.9193506531199137;
    msg.y = 0.3874047866456771;
    msg.z = 0.9118141501109313;

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
    msg.setTimeStamp(0.6022500446533493);
    msg.setSource(63244U);
    msg.setSourceEntity(240U);
    msg.setDestination(4895U);
    msg.setDestinationEntity(122U);
    msg.value = 0.3345325021621045;

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
    msg.setTimeStamp(0.8300359875140614);
    msg.setSource(6744U);
    msg.setSourceEntity(45U);
    msg.setDestination(24502U);
    msg.setDestinationEntity(32U);
    msg.value = 0.31057081312813584;

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
    msg.setTimeStamp(0.7020794156973064);
    msg.setSource(18832U);
    msg.setSourceEntity(9U);
    msg.setDestination(50110U);
    msg.setDestinationEntity(166U);
    msg.value = 0.3703449763987864;

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
    msg.setTimeStamp(0.3235109593500264);
    msg.setSource(47732U);
    msg.setSourceEntity(40U);
    msg.setDestination(53233U);
    msg.setDestinationEntity(73U);
    msg.value = 0.7758285629222925;

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
    msg.setTimeStamp(0.9776684422168453);
    msg.setSource(45756U);
    msg.setSourceEntity(137U);
    msg.setDestination(40697U);
    msg.setDestinationEntity(237U);
    msg.value = 0.7412536964872358;

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
    msg.setTimeStamp(0.6140193147415951);
    msg.setSource(6081U);
    msg.setSourceEntity(237U);
    msg.setDestination(4356U);
    msg.setDestinationEntity(162U);
    msg.value = 0.21961500712797022;

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
    msg.setTimeStamp(0.6299908345886368);
    msg.setSource(36815U);
    msg.setSourceEntity(23U);
    msg.setDestination(12125U);
    msg.setDestinationEntity(73U);
    msg.x = 0.16056999058362986;
    msg.y = 0.4565496403692435;
    msg.z = 0.07267103482539461;
    msg.phi = 0.6201300320045202;
    msg.theta = 0.17205913065841938;
    msg.psi = 0.8963692586516879;
    msg.p = 0.5811098652251073;
    msg.q = 0.9812309144817268;
    msg.r = 0.5607681185696579;
    msg.u = 0.10860159209069997;
    msg.v = 0.3517531069405493;
    msg.w = 0.21993534524933145;
    msg.bias_psi = 0.9960094253617365;
    msg.bias_r = 0.37612259895995415;

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
    msg.setTimeStamp(0.3003222194359778);
    msg.setSource(1076U);
    msg.setSourceEntity(27U);
    msg.setDestination(54034U);
    msg.setDestinationEntity(253U);
    msg.x = 0.4643757099467096;
    msg.y = 0.3556309615014992;
    msg.z = 0.47607645154604983;
    msg.phi = 0.691644345799735;
    msg.theta = 0.04590818733207935;
    msg.psi = 0.33951942422713677;
    msg.p = 0.5357176937869373;
    msg.q = 0.9949390923289787;
    msg.r = 0.6235833266131265;
    msg.u = 0.44620610776113623;
    msg.v = 0.4595892729082066;
    msg.w = 0.484298168056727;
    msg.bias_psi = 0.4799531495220065;
    msg.bias_r = 0.6183228862671218;

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
    msg.setTimeStamp(0.19462190981144134);
    msg.setSource(9735U);
    msg.setSourceEntity(103U);
    msg.setDestination(36004U);
    msg.setDestinationEntity(103U);
    msg.x = 0.42175224806619804;
    msg.y = 0.5904501690390509;
    msg.z = 0.04855942295941629;
    msg.phi = 0.9516917870582206;
    msg.theta = 0.1417905124093507;
    msg.psi = 0.32954749677117645;
    msg.p = 0.3580448313053529;
    msg.q = 0.5691089174140175;
    msg.r = 0.5729963148454704;
    msg.u = 0.6188986716301986;
    msg.v = 0.08208277111440065;
    msg.w = 0.5829966071383079;
    msg.bias_psi = 0.6085725152297704;
    msg.bias_r = 0.42875160121556766;

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
    msg.setTimeStamp(0.17563434861624339);
    msg.setSource(42269U);
    msg.setSourceEntity(177U);
    msg.setDestination(55096U);
    msg.setDestinationEntity(162U);
    msg.bias_psi = 0.31520167919599007;
    msg.bias_r = 0.06343147751323608;
    msg.cog = 0.26669458972708715;
    msg.cyaw = 0.35010760136174757;
    msg.lbl_rej_level = 0.6666348760169332;
    msg.gps_rej_level = 0.5302511626911466;
    msg.custom_x = 0.01706467580211768;
    msg.custom_y = 0.8988767931467576;
    msg.custom_z = 0.9743273530383176;

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
    msg.setTimeStamp(0.4059429014475472);
    msg.setSource(23338U);
    msg.setSourceEntity(240U);
    msg.setDestination(49390U);
    msg.setDestinationEntity(45U);
    msg.bias_psi = 0.6822868415876393;
    msg.bias_r = 0.8182562789803295;
    msg.cog = 0.3265197075541737;
    msg.cyaw = 0.17381577209822063;
    msg.lbl_rej_level = 0.5630831154835882;
    msg.gps_rej_level = 0.7394335663146667;
    msg.custom_x = 0.6736664262637593;
    msg.custom_y = 0.8313352752921022;
    msg.custom_z = 0.2573721000078032;

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
    msg.setTimeStamp(0.167883835096181);
    msg.setSource(47502U);
    msg.setSourceEntity(67U);
    msg.setDestination(45951U);
    msg.setDestinationEntity(239U);
    msg.bias_psi = 0.2950676673860885;
    msg.bias_r = 0.7422621161156382;
    msg.cog = 0.1517700048744215;
    msg.cyaw = 0.9138143952531075;
    msg.lbl_rej_level = 0.48893892409273343;
    msg.gps_rej_level = 0.39370895180520693;
    msg.custom_x = 0.6392023019276211;
    msg.custom_y = 0.12325769108834905;
    msg.custom_z = 0.6325183211880178;

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
    msg.setTimeStamp(0.5831048574686994);
    msg.setSource(13218U);
    msg.setSourceEntity(92U);
    msg.setDestination(36081U);
    msg.setDestinationEntity(65U);
    msg.utc_time = 0.6765099590712685;
    msg.reason = 87U;

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
    msg.setTimeStamp(0.27898922008479377);
    msg.setSource(56562U);
    msg.setSourceEntity(192U);
    msg.setDestination(20623U);
    msg.setDestinationEntity(51U);
    msg.utc_time = 0.016296235794663327;
    msg.reason = 105U;

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
    msg.setTimeStamp(0.6190513055978245);
    msg.setSource(52350U);
    msg.setSourceEntity(33U);
    msg.setDestination(461U);
    msg.setDestinationEntity(32U);
    msg.utc_time = 0.18643678707311084;
    msg.reason = 10U;

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
    msg.setTimeStamp(0.23500512341392532);
    msg.setSource(38714U);
    msg.setSourceEntity(38U);
    msg.setDestination(58185U);
    msg.setDestinationEntity(38U);
    msg.id = 230U;
    msg.range = 0.05918711054784209;
    msg.acceptance = 48U;

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
    msg.setTimeStamp(0.7300789985381079);
    msg.setSource(3557U);
    msg.setSourceEntity(126U);
    msg.setDestination(39989U);
    msg.setDestinationEntity(137U);
    msg.id = 163U;
    msg.range = 0.05566127032917312;
    msg.acceptance = 191U;

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
    msg.setTimeStamp(0.4481090063035946);
    msg.setSource(40474U);
    msg.setSourceEntity(134U);
    msg.setDestination(36576U);
    msg.setDestinationEntity(87U);
    msg.id = 94U;
    msg.range = 0.7059980143640555;
    msg.acceptance = 130U;

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
    msg.setTimeStamp(0.7058104445838195);
    msg.setSource(61079U);
    msg.setSourceEntity(33U);
    msg.setDestination(19545U);
    msg.setDestinationEntity(55U);
    msg.type = 155U;
    msg.reason = 53U;
    msg.value = 0.049004776313482656;
    msg.timestep = 0.4218808860228146;

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
    msg.setTimeStamp(0.3917997352913579);
    msg.setSource(14088U);
    msg.setSourceEntity(242U);
    msg.setDestination(6696U);
    msg.setDestinationEntity(147U);
    msg.type = 98U;
    msg.reason = 164U;
    msg.value = 0.04422996685524194;
    msg.timestep = 0.604209707641345;

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
    msg.setTimeStamp(0.7690027946033626);
    msg.setSource(20703U);
    msg.setSourceEntity(103U);
    msg.setDestination(24665U);
    msg.setDestinationEntity(139U);
    msg.type = 22U;
    msg.reason = 45U;
    msg.value = 0.7796093263349075;
    msg.timestep = 0.9659775640741928;

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
    msg.setTimeStamp(0.5628153862423201);
    msg.setSource(27104U);
    msg.setSourceEntity(47U);
    msg.setDestination(51863U);
    msg.setDestinationEntity(246U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("CPDMZNOUQJLRZMPEMKRMSUAYQPXMEWMSALIVUFCILVBRXYUGDFOLTPCYBDHHDJVXRNFWTLQGZGVOTHAXXAOXDEBIMVDKCDKURYMUJOKHAVANJWCFNZARGZPVPRAFSOLGLPYYHLPWHT");
    tmp_msg_0.lat = 0.9377840164117314;
    tmp_msg_0.lon = 0.5155267424387222;
    tmp_msg_0.depth = 0.6114928568123187;
    tmp_msg_0.query_channel = 241U;
    tmp_msg_0.reply_channel = 113U;
    tmp_msg_0.transponder_delay = 39U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.5736252474081435;
    msg.y = 0.5758344464485008;
    msg.var_x = 0.03468567150528867;
    msg.var_y = 0.2318446730612238;
    msg.distance = 0.3162544990331023;

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
    msg.setTimeStamp(0.616272352182808);
    msg.setSource(5944U);
    msg.setSourceEntity(16U);
    msg.setDestination(47461U);
    msg.setDestinationEntity(245U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("EJYQXVVRDTXWHSWMJAOZCLLVAYFKUDBLYRQPBPKWBOHYRGCFHGKMXTIGDIETRESSPAKKILRXSFCBWOHHVYDXMTQYVMOFFMUZFPEPDRLGXYWIXDOUPLSHUXLOAPPEKQZBKKWUINPWISJYVCVUZNSOGZVZPLJNEOFJCTHANKGVNDJSQTANWTHCMIXMRSRMQZQCYEGUJLOJGITUDTREGDFWJAMYNCUNKFUFIBJNBOWARGIACTMEQHQLBSEVB");
    tmp_msg_0.lat = 0.5049460624035351;
    tmp_msg_0.lon = 0.11043353611298179;
    tmp_msg_0.depth = 0.34802585727375634;
    tmp_msg_0.query_channel = 159U;
    tmp_msg_0.reply_channel = 135U;
    tmp_msg_0.transponder_delay = 139U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.939001207605863;
    msg.y = 0.46462191668628106;
    msg.var_x = 0.5191469536265593;
    msg.var_y = 0.17309797929102566;
    msg.distance = 0.4423661996903935;

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
    msg.setTimeStamp(0.07301041351325765);
    msg.setSource(14632U);
    msg.setSourceEntity(239U);
    msg.setDestination(23173U);
    msg.setDestinationEntity(125U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("RWZEKFDZZVMBMZTUDTEADLJQZMDMVPDKRYPRYKWILMSQHBJEVUOLLZNATUAURIKYKVDFRVNHXOFKESQLQYVCJHFJBPNGIEGIMOWYVCVRRCOODNSSSINETERPXIMPFPXYQBHBGTGGCWDNCHYFPPIFWNWWUEIAQHAXCRTFCLDMXBMAZKONWSJBQUAHBOUOLTCYSIKDVYAOJHIXXQZECNBXGXFBSZHYUGQLJEZSJPPFQGXHAUTUTWTSKLWRLVGOAJ");
    tmp_msg_0.lat = 0.24556320403659504;
    tmp_msg_0.lon = 0.6128899331709828;
    tmp_msg_0.depth = 0.18399456008432025;
    tmp_msg_0.query_channel = 182U;
    tmp_msg_0.reply_channel = 227U;
    tmp_msg_0.transponder_delay = 7U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.4247804658282408;
    msg.y = 0.7391562474078843;
    msg.var_x = 0.4788909832592325;
    msg.var_y = 0.9052108973673998;
    msg.distance = 0.9511172857948285;

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
    msg.setTimeStamp(0.6127982503970603);
    msg.setSource(19754U);
    msg.setSourceEntity(242U);
    msg.setDestination(9954U);
    msg.setDestinationEntity(87U);
    msg.state = 165U;

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
    msg.setTimeStamp(0.88995604322762);
    msg.setSource(37548U);
    msg.setSourceEntity(91U);
    msg.setDestination(64849U);
    msg.setDestinationEntity(51U);
    msg.state = 81U;

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
    msg.setTimeStamp(0.21030694074370893);
    msg.setSource(44548U);
    msg.setSourceEntity(77U);
    msg.setDestination(3547U);
    msg.setDestinationEntity(150U);
    msg.state = 161U;

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
    msg.setTimeStamp(0.6848664943725874);
    msg.setSource(51248U);
    msg.setSourceEntity(30U);
    msg.setDestination(42267U);
    msg.setDestinationEntity(194U);
    msg.x = 0.5897971959316692;
    msg.y = 0.022382960116408057;
    msg.z = 0.6010537839495919;

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
    msg.setTimeStamp(0.590776441491963);
    msg.setSource(60598U);
    msg.setSourceEntity(4U);
    msg.setDestination(51882U);
    msg.setDestinationEntity(151U);
    msg.x = 0.28285113793379346;
    msg.y = 0.1655809032716905;
    msg.z = 0.9278578618493215;

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
    msg.setTimeStamp(0.23664490714772057);
    msg.setSource(36263U);
    msg.setSourceEntity(98U);
    msg.setDestination(61088U);
    msg.setDestinationEntity(162U);
    msg.x = 0.48771759389845604;
    msg.y = 0.24563026689659884;
    msg.z = 0.4630593781186918;

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
    msg.setTimeStamp(0.45182412874484623);
    msg.setSource(39835U);
    msg.setSourceEntity(113U);
    msg.setDestination(18415U);
    msg.setDestinationEntity(192U);
    msg.va = 0.2830244549892057;
    msg.aoa = 0.04782838181848448;
    msg.ssa = 0.2752173690790769;

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
    msg.setTimeStamp(0.9443088057009843);
    msg.setSource(9811U);
    msg.setSourceEntity(63U);
    msg.setDestination(64632U);
    msg.setDestinationEntity(184U);
    msg.va = 0.11482830088023632;
    msg.aoa = 0.6422487316804172;
    msg.ssa = 0.25116862756054437;

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
    msg.setTimeStamp(0.6684894746501474);
    msg.setSource(291U);
    msg.setSourceEntity(25U);
    msg.setDestination(29143U);
    msg.setDestinationEntity(156U);
    msg.va = 0.16015611561167975;
    msg.aoa = 0.007951098420792557;
    msg.ssa = 0.5115175914725791;

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
    msg.setTimeStamp(0.6753309918191125);
    msg.setSource(23770U);
    msg.setSourceEntity(114U);
    msg.setDestination(38334U);
    msg.setDestinationEntity(136U);
    msg.value = 0.7903215569688049;

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
    msg.setTimeStamp(0.2867188515952477);
    msg.setSource(20770U);
    msg.setSourceEntity(165U);
    msg.setDestination(8760U);
    msg.setDestinationEntity(188U);
    msg.value = 0.6792727076866913;

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
    msg.setTimeStamp(0.8217940253041063);
    msg.setSource(51122U);
    msg.setSourceEntity(104U);
    msg.setDestination(44508U);
    msg.setDestinationEntity(44U);
    msg.value = 0.7402511183221628;

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
    msg.setTimeStamp(0.2297571292442251);
    msg.setSource(8400U);
    msg.setSourceEntity(114U);
    msg.setDestination(58229U);
    msg.setDestinationEntity(247U);
    msg.value = 0.3038955887464224;
    msg.z_units = 67U;

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
    msg.setTimeStamp(0.6488260004183938);
    msg.setSource(14401U);
    msg.setSourceEntity(14U);
    msg.setDestination(14567U);
    msg.setDestinationEntity(214U);
    msg.value = 0.7497640198135452;
    msg.z_units = 51U;

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
    msg.setTimeStamp(0.2566599913092654);
    msg.setSource(10067U);
    msg.setSourceEntity(140U);
    msg.setDestination(12968U);
    msg.setDestinationEntity(18U);
    msg.value = 0.9571221447877806;
    msg.z_units = 12U;

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
    msg.setTimeStamp(0.976560604123005);
    msg.setSource(30427U);
    msg.setSourceEntity(184U);
    msg.setDestination(41227U);
    msg.setDestinationEntity(13U);
    msg.value = 0.31469663212074106;
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
    msg.setTimeStamp(0.6340663400843228);
    msg.setSource(38881U);
    msg.setSourceEntity(220U);
    msg.setDestination(45838U);
    msg.setDestinationEntity(175U);
    msg.value = 0.5226876280516091;
    msg.speed_units = 73U;

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
    msg.setTimeStamp(0.23514992788039202);
    msg.setSource(45731U);
    msg.setSourceEntity(177U);
    msg.setDestination(34051U);
    msg.setDestinationEntity(50U);
    msg.value = 0.6117709600365434;
    msg.speed_units = 33U;

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
    msg.setTimeStamp(0.8742344211473408);
    msg.setSource(34340U);
    msg.setSourceEntity(120U);
    msg.setDestination(24001U);
    msg.setDestinationEntity(248U);
    msg.value = 0.2315498398034398;

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
    msg.setTimeStamp(0.3781415143213406);
    msg.setSource(50175U);
    msg.setSourceEntity(81U);
    msg.setDestination(27212U);
    msg.setDestinationEntity(79U);
    msg.value = 0.44967589374556793;

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
    msg.setTimeStamp(0.10752098278661115);
    msg.setSource(10418U);
    msg.setSourceEntity(23U);
    msg.setDestination(59177U);
    msg.setDestinationEntity(19U);
    msg.value = 0.33213339737725245;

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
    msg.setTimeStamp(0.7468547186826904);
    msg.setSource(43520U);
    msg.setSourceEntity(117U);
    msg.setDestination(29724U);
    msg.setDestinationEntity(198U);
    msg.value = 0.6714548388318594;

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
    msg.setTimeStamp(0.9906673904861446);
    msg.setSource(50964U);
    msg.setSourceEntity(67U);
    msg.setDestination(11249U);
    msg.setDestinationEntity(59U);
    msg.value = 0.40941067372441975;

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
    msg.setTimeStamp(0.5428420374285494);
    msg.setSource(55584U);
    msg.setSourceEntity(243U);
    msg.setDestination(53903U);
    msg.setDestinationEntity(110U);
    msg.value = 0.17832189100798101;

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
    msg.setTimeStamp(0.29672462944072);
    msg.setSource(46699U);
    msg.setSourceEntity(208U);
    msg.setDestination(13646U);
    msg.setDestinationEntity(181U);
    msg.value = 0.8299335485409769;

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
    msg.setTimeStamp(0.17703849505392422);
    msg.setSource(49456U);
    msg.setSourceEntity(201U);
    msg.setDestination(39767U);
    msg.setDestinationEntity(234U);
    msg.value = 0.9268497086134365;

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
    msg.setTimeStamp(0.41666901012120916);
    msg.setSource(41355U);
    msg.setSourceEntity(179U);
    msg.setDestination(13116U);
    msg.setDestinationEntity(46U);
    msg.value = 0.22493381940704993;

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
    msg.setTimeStamp(0.581890474426105);
    msg.setSource(26620U);
    msg.setSourceEntity(35U);
    msg.setDestination(58964U);
    msg.setDestinationEntity(81U);
    msg.path_ref = 2096168316U;
    msg.start_lat = 0.8500881276665935;
    msg.start_lon = 0.8752355627783346;
    msg.start_z = 0.015436407252545026;
    msg.start_z_units = 209U;
    msg.end_lat = 0.8182830746540808;
    msg.end_lon = 0.9813040886721857;
    msg.end_z = 0.20138319405078176;
    msg.end_z_units = 243U;
    msg.speed = 0.35378146293243573;
    msg.speed_units = 180U;
    msg.lradius = 0.4478165975192976;
    msg.flags = 91U;

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
    msg.setTimeStamp(0.08476483157661308);
    msg.setSource(64762U);
    msg.setSourceEntity(239U);
    msg.setDestination(26790U);
    msg.setDestinationEntity(5U);
    msg.path_ref = 1263159518U;
    msg.start_lat = 0.9841977952829676;
    msg.start_lon = 0.4161757385307555;
    msg.start_z = 0.7863501896915331;
    msg.start_z_units = 10U;
    msg.end_lat = 0.1581983106727337;
    msg.end_lon = 0.03780559759884072;
    msg.end_z = 0.7907713811125753;
    msg.end_z_units = 137U;
    msg.speed = 0.4577883610033521;
    msg.speed_units = 134U;
    msg.lradius = 0.2900673948340057;
    msg.flags = 238U;

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
    msg.setTimeStamp(0.028238887763337384);
    msg.setSource(44175U);
    msg.setSourceEntity(167U);
    msg.setDestination(4823U);
    msg.setDestinationEntity(86U);
    msg.path_ref = 866554178U;
    msg.start_lat = 0.14335670511474663;
    msg.start_lon = 0.7568202259573021;
    msg.start_z = 0.6534234283394558;
    msg.start_z_units = 146U;
    msg.end_lat = 0.04952429655699664;
    msg.end_lon = 0.12792230959633055;
    msg.end_z = 0.3863864954423706;
    msg.end_z_units = 208U;
    msg.speed = 0.7110928125349486;
    msg.speed_units = 248U;
    msg.lradius = 0.04261755969761871;
    msg.flags = 40U;

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
    msg.setTimeStamp(0.7946068526415134);
    msg.setSource(51084U);
    msg.setSourceEntity(91U);
    msg.setDestination(30414U);
    msg.setDestinationEntity(236U);
    msg.x = 0.10941491696977912;
    msg.y = 0.8561731733448922;
    msg.z = 0.8458903428682448;
    msg.k = 0.7272150752138399;
    msg.m = 0.7853676121950169;
    msg.n = 0.8339803888694394;
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
    msg.setTimeStamp(0.3110010905738857);
    msg.setSource(1324U);
    msg.setSourceEntity(81U);
    msg.setDestination(32253U);
    msg.setDestinationEntity(4U);
    msg.x = 0.4864124554233282;
    msg.y = 0.24469592534496187;
    msg.z = 0.3716213072053469;
    msg.k = 0.44655679532981263;
    msg.m = 0.5327057493841189;
    msg.n = 0.3443326549065967;
    msg.flags = 28U;

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
    msg.setTimeStamp(0.28836090802303493);
    msg.setSource(65110U);
    msg.setSourceEntity(237U);
    msg.setDestination(19137U);
    msg.setDestinationEntity(195U);
    msg.x = 0.38498490171334787;
    msg.y = 0.2770497747009324;
    msg.z = 0.8696295575430707;
    msg.k = 0.42540854847282017;
    msg.m = 0.47644676680702136;
    msg.n = 0.006962899670308387;
    msg.flags = 95U;

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
    msg.setTimeStamp(0.029149721787781635);
    msg.setSource(55078U);
    msg.setSourceEntity(205U);
    msg.setDestination(27322U);
    msg.setDestinationEntity(60U);
    msg.value = 0.054396300821197396;

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
    msg.setTimeStamp(0.29498249086165107);
    msg.setSource(64849U);
    msg.setSourceEntity(209U);
    msg.setDestination(4793U);
    msg.setDestinationEntity(245U);
    msg.value = 0.8300126451236627;

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
    msg.setTimeStamp(0.08508280810238733);
    msg.setSource(44833U);
    msg.setSourceEntity(237U);
    msg.setDestination(27249U);
    msg.setDestinationEntity(169U);
    msg.value = 0.3667370083718542;

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
    msg.setTimeStamp(0.5468155655848882);
    msg.setSource(4700U);
    msg.setSourceEntity(205U);
    msg.setDestination(22644U);
    msg.setDestinationEntity(169U);
    msg.u = 0.6730481437546725;
    msg.v = 0.4997759365515998;
    msg.w = 0.36214245776520915;
    msg.p = 0.8887699646267931;
    msg.q = 0.022131153425836936;
    msg.r = 0.6471355361096831;
    msg.flags = 195U;

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
    msg.setTimeStamp(0.641910105326607);
    msg.setSource(12482U);
    msg.setSourceEntity(91U);
    msg.setDestination(42033U);
    msg.setDestinationEntity(167U);
    msg.u = 0.40961624626905;
    msg.v = 0.658254903905165;
    msg.w = 0.3309487716364903;
    msg.p = 0.3269526900679408;
    msg.q = 0.3862647124717108;
    msg.r = 0.6014350547612456;
    msg.flags = 138U;

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
    msg.setTimeStamp(0.15280555488407577);
    msg.setSource(43207U);
    msg.setSourceEntity(45U);
    msg.setDestination(16507U);
    msg.setDestinationEntity(217U);
    msg.u = 0.9886486150267141;
    msg.v = 0.6236457540931847;
    msg.w = 0.8422125657287214;
    msg.p = 0.6830816848386535;
    msg.q = 0.9195625353039865;
    msg.r = 0.27113827729804607;
    msg.flags = 188U;

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
    msg.setTimeStamp(0.49045572431763185);
    msg.setSource(9324U);
    msg.setSourceEntity(188U);
    msg.setDestination(16629U);
    msg.setDestinationEntity(220U);
    msg.path_ref = 1797716897U;
    msg.start_lat = 0.32763559700287126;
    msg.start_lon = 0.14788958249183004;
    msg.start_z = 0.755377865008726;
    msg.start_z_units = 209U;
    msg.end_lat = 0.9205791314135333;
    msg.end_lon = 0.5893956053737336;
    msg.end_z = 0.4684169774910564;
    msg.end_z_units = 34U;
    msg.lradius = 0.9374558053765749;
    msg.flags = 126U;
    msg.x = 0.9440216302493314;
    msg.y = 0.8127483735883803;
    msg.z = 0.922518267505586;
    msg.vx = 0.3615582651348065;
    msg.vy = 0.786475722784313;
    msg.vz = 0.47356587609709366;
    msg.course_error = 0.5402616408026322;
    msg.eta = 44087U;

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
    msg.setTimeStamp(0.4867390034782547);
    msg.setSource(2100U);
    msg.setSourceEntity(97U);
    msg.setDestination(20142U);
    msg.setDestinationEntity(206U);
    msg.path_ref = 753699643U;
    msg.start_lat = 0.21121627649430474;
    msg.start_lon = 0.22433200837380263;
    msg.start_z = 0.9218573008176993;
    msg.start_z_units = 57U;
    msg.end_lat = 0.9255120927766016;
    msg.end_lon = 0.9788877341815845;
    msg.end_z = 0.8193949539207475;
    msg.end_z_units = 115U;
    msg.lradius = 0.40946121639211264;
    msg.flags = 174U;
    msg.x = 0.48091323860389;
    msg.y = 0.65037229301798;
    msg.z = 0.18342927361043215;
    msg.vx = 0.701220374416636;
    msg.vy = 0.9734085059171826;
    msg.vz = 0.6180670228493091;
    msg.course_error = 0.7491809124134101;
    msg.eta = 31384U;

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
    msg.setTimeStamp(0.7232731659650136);
    msg.setSource(62200U);
    msg.setSourceEntity(227U);
    msg.setDestination(53565U);
    msg.setDestinationEntity(99U);
    msg.path_ref = 4290667358U;
    msg.start_lat = 0.27583573266131933;
    msg.start_lon = 0.6761903461441108;
    msg.start_z = 0.8474935834223418;
    msg.start_z_units = 226U;
    msg.end_lat = 0.22999934683377465;
    msg.end_lon = 0.12487937630255008;
    msg.end_z = 0.30887206900914277;
    msg.end_z_units = 31U;
    msg.lradius = 0.47860566327330667;
    msg.flags = 137U;
    msg.x = 0.9270519193228074;
    msg.y = 0.2860663054326751;
    msg.z = 0.5146845210464647;
    msg.vx = 0.30119932745100786;
    msg.vy = 0.8064734370554394;
    msg.vz = 0.4790283030012341;
    msg.course_error = 0.465214730772314;
    msg.eta = 40180U;

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
    msg.setTimeStamp(0.7140986442637656);
    msg.setSource(55870U);
    msg.setSourceEntity(7U);
    msg.setDestination(1871U);
    msg.setDestinationEntity(72U);
    msg.k = 0.23028465280315258;
    msg.m = 0.13521415460999697;
    msg.n = 0.7692989644160821;

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
    msg.setTimeStamp(0.8018106472710436);
    msg.setSource(49773U);
    msg.setSourceEntity(196U);
    msg.setDestination(45696U);
    msg.setDestinationEntity(245U);
    msg.k = 0.3496195532989572;
    msg.m = 0.753860137484454;
    msg.n = 0.49324779387409134;

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
    msg.setTimeStamp(0.9319771929211923);
    msg.setSource(47090U);
    msg.setSourceEntity(19U);
    msg.setDestination(14230U);
    msg.setDestinationEntity(11U);
    msg.k = 0.06734765948945076;
    msg.m = 0.6675856314617172;
    msg.n = 0.259775818587642;

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
    msg.setTimeStamp(0.7730507184467688);
    msg.setSource(15468U);
    msg.setSourceEntity(67U);
    msg.setDestination(12098U);
    msg.setDestinationEntity(84U);
    msg.p = 0.8425952377028114;
    msg.i = 0.4817678895836902;
    msg.d = 0.43106535100470733;
    msg.a = 0.4293323721420301;

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
    msg.setTimeStamp(0.7246774713953981);
    msg.setSource(37921U);
    msg.setSourceEntity(191U);
    msg.setDestination(11514U);
    msg.setDestinationEntity(59U);
    msg.p = 0.20061252050231182;
    msg.i = 0.3659386302099007;
    msg.d = 0.37659982933053293;
    msg.a = 0.02969698566038692;

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
    msg.setTimeStamp(0.43667705489665487);
    msg.setSource(9772U);
    msg.setSourceEntity(74U);
    msg.setDestination(47966U);
    msg.setDestinationEntity(109U);
    msg.p = 0.5428053315517285;
    msg.i = 0.4555773802435773;
    msg.d = 0.04311037684967811;
    msg.a = 0.540156424753639;

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
    msg.setTimeStamp(0.29161696638701495);
    msg.setSource(37275U);
    msg.setSourceEntity(166U);
    msg.setDestination(62850U);
    msg.setDestinationEntity(10U);
    msg.op = 89U;

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
    msg.setTimeStamp(0.2515195335926995);
    msg.setSource(62183U);
    msg.setSourceEntity(105U);
    msg.setDestination(10744U);
    msg.setDestinationEntity(46U);
    msg.op = 51U;

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
    msg.setTimeStamp(0.044652766423239565);
    msg.setSource(12817U);
    msg.setSourceEntity(226U);
    msg.setDestination(62647U);
    msg.setDestinationEntity(112U);
    msg.op = 96U;

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
    msg.setTimeStamp(0.19652706248690888);
    msg.setSource(56714U);
    msg.setSourceEntity(86U);
    msg.setDestination(44866U);
    msg.setDestinationEntity(180U);
    msg.x = 0.7554401940580245;
    msg.y = 0.683660167775264;
    msg.z = 0.3798125524818373;
    msg.vx = 0.07429195965812263;
    msg.vy = 0.06324103271988513;
    msg.vz = 0.1559385310710597;
    msg.ax = 0.8621010600741584;
    msg.ay = 0.9311931114519916;
    msg.az = 0.9980244246633686;
    msg.flags = 5263U;

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
    msg.setTimeStamp(0.8148810830471169);
    msg.setSource(23786U);
    msg.setSourceEntity(192U);
    msg.setDestination(5898U);
    msg.setDestinationEntity(242U);
    msg.x = 0.31429998399227543;
    msg.y = 0.5119240189415306;
    msg.z = 0.12461021836980313;
    msg.vx = 0.39859918928657356;
    msg.vy = 0.028877187228713574;
    msg.vz = 0.37595360487765017;
    msg.ax = 0.5380753624001743;
    msg.ay = 0.36961339840687246;
    msg.az = 0.6834336513713453;
    msg.flags = 60518U;

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
    msg.setTimeStamp(0.7450097647613872);
    msg.setSource(56343U);
    msg.setSourceEntity(12U);
    msg.setDestination(27657U);
    msg.setDestinationEntity(167U);
    msg.x = 0.27915023955094553;
    msg.y = 0.5782313648063213;
    msg.z = 0.6158189988877371;
    msg.vx = 0.3723365966381791;
    msg.vy = 0.9618346341450538;
    msg.vz = 0.6777316609263762;
    msg.ax = 0.7881649555193125;
    msg.ay = 0.658982139934683;
    msg.az = 0.48437132054662924;
    msg.flags = 56333U;

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
    msg.setTimeStamp(0.37888636221744276);
    msg.setSource(7331U);
    msg.setSourceEntity(65U);
    msg.setDestination(31339U);
    msg.setDestinationEntity(130U);
    msg.value = 0.16504020878923664;

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
    msg.setTimeStamp(0.7663420023684893);
    msg.setSource(29623U);
    msg.setSourceEntity(156U);
    msg.setDestination(41697U);
    msg.setDestinationEntity(102U);
    msg.value = 0.4477895727073724;

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
    msg.setTimeStamp(0.9318338176272459);
    msg.setSource(2590U);
    msg.setSourceEntity(242U);
    msg.setDestination(26185U);
    msg.setDestinationEntity(155U);
    msg.value = 0.37882456936161024;

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
    msg.setTimeStamp(0.18938282745969393);
    msg.setSource(17168U);
    msg.setSourceEntity(166U);
    msg.setDestination(26172U);
    msg.setDestinationEntity(3U);
    msg.timeout = 64266U;
    msg.lat = 0.12684245796826665;
    msg.lon = 0.9673726717198534;
    msg.z = 0.089161923890136;
    msg.z_units = 207U;
    msg.speed = 0.7284818939004563;
    msg.speed_units = 198U;
    msg.roll = 0.503313050631283;
    msg.pitch = 0.6851826843590647;
    msg.yaw = 0.6126188262756005;
    msg.custom.assign("ZQBNCPCUDOBRPIYBNUJUOFQVXEYEJJRVYLRNPRLWXTZHYTMMCAUMHNXUQJPLHTYXVJJVPRBIACQGVHTEGGNUEOENDGGZDKPWOSHBASFVLADSTVUSBWESTIDMODWJCQIUOMTUXGYLGPCCAXSHOXKQLTAVHBYMKWGMFRSQFHBAUSNWAFKCXXBIYEIYFDKXOKIMNWHGOPGNCCZATZRBMLKWWQDNFESPQELFIFJILZSOHJER");

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
    msg.setTimeStamp(0.885615905328416);
    msg.setSource(49730U);
    msg.setSourceEntity(134U);
    msg.setDestination(40727U);
    msg.setDestinationEntity(190U);
    msg.timeout = 879U;
    msg.lat = 0.9354737135199562;
    msg.lon = 0.40294929905011323;
    msg.z = 0.8614406104793378;
    msg.z_units = 69U;
    msg.speed = 0.6227957367114513;
    msg.speed_units = 50U;
    msg.roll = 0.7534913795666056;
    msg.pitch = 0.6701655847443023;
    msg.yaw = 0.4776527794809806;
    msg.custom.assign("NHFKWQOGKZULETEBJUOQLUYXFMRJNUBDVDGPYZEKLJZISQXXAVFHKBBMDDFA");

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
    msg.setTimeStamp(0.3919170051145935);
    msg.setSource(58993U);
    msg.setSourceEntity(216U);
    msg.setDestination(63930U);
    msg.setDestinationEntity(6U);
    msg.timeout = 44596U;
    msg.lat = 0.604352135079663;
    msg.lon = 0.6456921818275542;
    msg.z = 0.0813515716056804;
    msg.z_units = 33U;
    msg.speed = 0.23821107380640727;
    msg.speed_units = 118U;
    msg.roll = 0.4370278651559143;
    msg.pitch = 0.8977582830465682;
    msg.yaw = 0.45781315901758335;
    msg.custom.assign("ENZRDHUNDCMQKRWRMMDYLNSQNOYUQIQBCYQYPHBVBTYDPZAZVSRXTPQZGKKUIVGXQUPZOZASIKEFXJDFJNZNOBBKZSPEJLMOPMCIXBBHECIIGYCAAKLXGFNFIEBKHIHCTAPELVZJGHYJSH");

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
    msg.setTimeStamp(0.04610191936430641);
    msg.setSource(11699U);
    msg.setSourceEntity(46U);
    msg.setDestination(47262U);
    msg.setDestinationEntity(21U);
    msg.timeout = 40205U;
    msg.lat = 0.021370131113203406;
    msg.lon = 0.026560643603975587;
    msg.z = 0.6549675347947054;
    msg.z_units = 247U;
    msg.speed = 0.8179686057360549;
    msg.speed_units = 203U;
    msg.duration = 65480U;
    msg.radius = 0.036158112687353694;
    msg.flags = 27U;
    msg.custom.assign("LDOWFTQLEIMCWHVXEQYOSSHIXOBXWAKAJDWKUOHVDGXCFVXQTTAUCASNWJZJVUBIBGSXGGLLSMPIHKBNAKHMENEUFVZKVBHIMICLRFLPYXZRTZRTMCRNWQJBU");

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
    msg.setTimeStamp(0.798790036466225);
    msg.setSource(17672U);
    msg.setSourceEntity(242U);
    msg.setDestination(56748U);
    msg.setDestinationEntity(1U);
    msg.timeout = 58397U;
    msg.lat = 0.908513394717167;
    msg.lon = 0.41130228542650216;
    msg.z = 0.27837553824263384;
    msg.z_units = 232U;
    msg.speed = 0.9837070836411973;
    msg.speed_units = 250U;
    msg.duration = 56927U;
    msg.radius = 0.43568015526790327;
    msg.flags = 242U;
    msg.custom.assign("SYLCKXANFCGPFQUKXCAJVYIOZWPUEISHMWDONVALXPDDQKMBJWUEVQFDXQVMPUGITYJBWQNNTGCLODGBIAPPJIXWWSHELI");

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
    msg.setTimeStamp(0.5014758652756695);
    msg.setSource(21337U);
    msg.setSourceEntity(165U);
    msg.setDestination(14328U);
    msg.setDestinationEntity(166U);
    msg.timeout = 41160U;
    msg.lat = 0.9703621603583454;
    msg.lon = 0.1423760393544914;
    msg.z = 0.8614870478989102;
    msg.z_units = 192U;
    msg.speed = 0.3396951971988651;
    msg.speed_units = 92U;
    msg.duration = 979U;
    msg.radius = 0.9611333495846486;
    msg.flags = 159U;
    msg.custom.assign("YBAIKJPZKHWSSRDEJXSUKQGILUOOHCNMADLCATXVZGANICMBFDZSUDBQWTEUHNWUJQWWYSFUGZPTUFGNTRINUXGLVYBKIRTGLZVAYPQLFTJYSOWZPHBWBVXKRSCCDAFXATCDPRQHADBNQSIQMNYETLGGMVDUIY");

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
    msg.setTimeStamp(0.8326470986419586);
    msg.setSource(15976U);
    msg.setSourceEntity(201U);
    msg.setDestination(20895U);
    msg.setDestinationEntity(122U);
    msg.custom.assign("ABWGZZHLBCFHEGAPGQTZURHYPLDVCCTDKOIYEIFRZORYNGKNDWSJJYDKHVGNHNMFTICUNLDUOAVXIPWIPNMCSUUBARVBLFLCSWJWAVEYORBGFKXZSTLIEIURYQOLJFMXDJJSDUKQARWJEXBPQVXCMFEJDFRCMWJOGXZVHKPEYWBWMTBKYIZUZGLZBXIMATKKWCLNVSXPMV");

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
    msg.setTimeStamp(0.04077523513152248);
    msg.setSource(22057U);
    msg.setSourceEntity(217U);
    msg.setDestination(64319U);
    msg.setDestinationEntity(244U);
    msg.custom.assign("NCSNWKWQMYQZQHWSTRHXZKKOSZRBLNVPFMMYMHEQNQFOWUOVJUCURQXYNAGSOTPQJJSXFLVAKCNTDTKYCRDMUYDQPIJRAXBAARTJJQEDGEHXHCWYCIHFEVUTBILDKZGRCERRKZSVOMTSEAOEPFYLGIVPFUNVDRHZZBMKITSBWXDBUOIDUYKVEJHXJBBHSAXXVDILNATGAPPGHFAOFCGGLFPWEWLDSGOOZWJQMFIJMVMZNNBPZCUEI");

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
    msg.setTimeStamp(0.5573503511466024);
    msg.setSource(22732U);
    msg.setSourceEntity(115U);
    msg.setDestination(54927U);
    msg.setDestinationEntity(189U);
    msg.custom.assign("DOQYZLLSPDXOUSVRTSCNEPMLRAFVCPIILPPJNOOQANAFEMEZHGOYYEWWDFZHBMYWJUVKDRTTAXVNXQEVWSBDYKBFSYILNTEGRSUCDXRWOIC");

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
    msg.setTimeStamp(0.0735071412189574);
    msg.setSource(10976U);
    msg.setSourceEntity(56U);
    msg.setDestination(32735U);
    msg.setDestinationEntity(206U);
    msg.timeout = 16871U;
    msg.lat = 0.9308644505223964;
    msg.lon = 0.23153187842759793;
    msg.z = 0.08172887836842246;
    msg.z_units = 6U;
    msg.duration = 270U;
    msg.speed = 0.3963451598630572;
    msg.speed_units = 23U;
    msg.type = 74U;
    msg.radius = 0.7741184098880048;
    msg.length = 0.7628562466386746;
    msg.bearing = 0.25958586935654426;
    msg.direction = 112U;
    msg.custom.assign("MALJSQHOGYBMWKRYZOFIXVNSYIVDGKVBFBKYZVOUCADBSHWGDVQFCXJBKUQLPHXRJBDHIAKZTNFJBDCHUFYQMSDFDTATGECGMIHIPSFPDCQYHOEGCBBKPJWSTNGYCWRJUHTVCQWPON");

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
    msg.setTimeStamp(0.7749347678016245);
    msg.setSource(25918U);
    msg.setSourceEntity(37U);
    msg.setDestination(23538U);
    msg.setDestinationEntity(134U);
    msg.timeout = 48976U;
    msg.lat = 0.26970047279861165;
    msg.lon = 0.5535057846129702;
    msg.z = 0.440497491881773;
    msg.z_units = 248U;
    msg.duration = 52141U;
    msg.speed = 0.011601452648686061;
    msg.speed_units = 151U;
    msg.type = 207U;
    msg.radius = 0.43195217639519057;
    msg.length = 0.561043420753548;
    msg.bearing = 0.7840389124585917;
    msg.direction = 212U;
    msg.custom.assign("FMYEWNIHLLINBBGEREMJKLCIGVBPSRXPKBYGPGEVJJMVYOXMPENWQFPRLBFLUNQSUQMXHABPGDUCNSAHHZNYIDIHZRVFWSCOIWRGACMYSAAFHXGLSBGWZDDIJTETAPPUTXSEVYKZXUHJZEROCWEDOXUARDCRNRKQWVGBBWKUS");

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
    msg.setTimeStamp(0.8734991461528246);
    msg.setSource(40794U);
    msg.setSourceEntity(234U);
    msg.setDestination(16659U);
    msg.setDestinationEntity(112U);
    msg.timeout = 2024U;
    msg.lat = 0.11910716710384162;
    msg.lon = 0.6379284764718951;
    msg.z = 0.13858362153061465;
    msg.z_units = 183U;
    msg.duration = 13247U;
    msg.speed = 0.4904569467467418;
    msg.speed_units = 97U;
    msg.type = 82U;
    msg.radius = 0.3635308325779424;
    msg.length = 0.6231044591738792;
    msg.bearing = 0.9998772416942944;
    msg.direction = 173U;
    msg.custom.assign("NMTLQBWFIDYJSDCSGPBSIEXWCNYAGWVDQKVLHPVRDYRURZCCHZHNWMIXNDQVBMFXRBVVPQEMEMWGBXMTTJLTZGFBSGMRBVLGRORZPHZZKKKYTBEPIEQWOZQ");

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
    msg.setTimeStamp(0.2588955316176287);
    msg.setSource(65330U);
    msg.setSourceEntity(244U);
    msg.setDestination(17673U);
    msg.setDestinationEntity(82U);
    msg.duration = 2841U;
    msg.custom.assign("XTQZVGMIVAPVBLPJVRQIZRGONLLBABQYWYSUKHZTBPFOMLPLAOXFSGAEHYYGYGTCNSIWKSKCGPPRESZUXEUPWMKLFOHWNIULNPQAEXWIAYDTTBNCVNUJNIVCOQSXDUF");

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
    msg.setTimeStamp(0.2500658706236776);
    msg.setSource(62060U);
    msg.setSourceEntity(182U);
    msg.setDestination(58274U);
    msg.setDestinationEntity(107U);
    msg.duration = 61048U;
    msg.custom.assign("LKWNMBAJOTXBYJNPCARULBEANYWDVGKVUJSCYUFHVAEEEDIXKDOXTUWNHSNIRKFDPIHMBFTWXCQUZSWLTVRICEQFGJLJDTMYHJKTRNCMVMCMGOHEVPJSJBWWKAPYFTONLFRYOEEJCTXGXHGIDUCULXBJQDROLCYFZIQOBEVTHWOIWGARZLPSWAFQCHNUMPZRDPRNQPKD");

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
    msg.setTimeStamp(0.2588857425383445);
    msg.setSource(45153U);
    msg.setSourceEntity(12U);
    msg.setDestination(41118U);
    msg.setDestinationEntity(84U);
    msg.duration = 50276U;
    msg.custom.assign("XTLRFEUEYCJNFKNPYQQBFPILUZYYJTETZFVJYMJLBLYBBEXKQBUXNRVGSKPHHKYHGJBIIOAZDCYQWOZOFSEFUBVPJTNDTDNWGZVUFMSCJOEAIAOOCZWDIGEVWXLHZJQWRVNIFAVBZGHKRQNHUNPVHXDMGALYJLPYMTDSOMCKRAGEGQAWUQTWRVDMHIFPJMCTSSXRSXARPCNUBKMWI");

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
    msg.setTimeStamp(0.9840816061929037);
    msg.setSource(61125U);
    msg.setSourceEntity(174U);
    msg.setDestination(39061U);
    msg.setDestinationEntity(251U);
    IMC::DesiredZ tmp_msg_0;
    tmp_msg_0.value = 0.029334563657226198;
    tmp_msg_0.z_units = 192U;
    msg.control.set(tmp_msg_0);
    msg.duration = 12373U;
    msg.custom.assign("RDLXPAEVZKGTAIXZUCBCORGIKIPYXTGHSFILRVMIIVQSWUVJYBQJQRBBIUWYNFBVDGBFVKUBSAVULXEKNDZKDJBNEPAGVDZNMSOMAGNOUTDPMJWYCLKAJMLTQSMXNNHRELQCEGLJAJ");

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
    msg.setTimeStamp(0.6832853245435904);
    msg.setSource(4215U);
    msg.setSourceEntity(139U);
    msg.setDestination(12706U);
    msg.setDestinationEntity(69U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.6834874927578236;
    msg.control.set(tmp_msg_0);
    msg.duration = 60311U;
    msg.custom.assign("UCIKCUMUAPTCQQXDIURKWZOBHEJTWLOPGQSPMRPWGXETSYDDFSGQWZRMPEJTVVZNBSIQAJE");

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
    msg.setTimeStamp(0.3816797857183408);
    msg.setSource(25605U);
    msg.setSourceEntity(236U);
    msg.setDestination(15793U);
    msg.setDestinationEntity(241U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.5669470539709803;
    msg.control.set(tmp_msg_0);
    msg.duration = 4973U;
    msg.custom.assign("UODWJKSXYPKDRMZKMWTZIKRXIBXMMPWGTJSTWRULIDVAZKSLLQGOFPKUPIQUSHKGGVYMPQOEVNELFNPIENZJSYHAPKWCXFSFHAWAZYNFDLTD");

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
    msg.setTimeStamp(0.38215291639875326);
    msg.setSource(45035U);
    msg.setSourceEntity(203U);
    msg.setDestination(4874U);
    msg.setDestinationEntity(116U);
    msg.timeout = 65415U;
    msg.lat = 0.3421114036020081;
    msg.lon = 0.6867644510667108;
    msg.z = 0.5854654329656624;
    msg.z_units = 4U;
    msg.speed = 0.8986427426737834;
    msg.speed_units = 192U;
    msg.bearing = 0.8545497221888425;
    msg.cross_angle = 0.5182844308837461;
    msg.width = 0.5700897626635028;
    msg.length = 0.9899312059754386;
    msg.hstep = 0.2205805984676712;
    msg.coff = 220U;
    msg.alternation = 15U;
    msg.flags = 68U;
    msg.custom.assign("TTHIHLXVLYAJAGQTQ");

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
    msg.setTimeStamp(0.05221419263767002);
    msg.setSource(14093U);
    msg.setSourceEntity(213U);
    msg.setDestination(39142U);
    msg.setDestinationEntity(127U);
    msg.timeout = 33082U;
    msg.lat = 0.6382818253573425;
    msg.lon = 0.14305871386792934;
    msg.z = 0.9131641271404516;
    msg.z_units = 91U;
    msg.speed = 0.21771440393624186;
    msg.speed_units = 14U;
    msg.bearing = 0.5711481074589613;
    msg.cross_angle = 0.8212759442705014;
    msg.width = 0.8961209381335377;
    msg.length = 0.14192143810492042;
    msg.hstep = 0.5784463266583987;
    msg.coff = 172U;
    msg.alternation = 125U;
    msg.flags = 120U;
    msg.custom.assign("AXYEVDOGRGNREBJJXGCPSZURVMTFEJMKPODMPYSQGWXJIOVFBQVCTHVILUZBLWPGANTUMLHFZQUYKSDNWPJKSYFBEAPFEJAUWKIGPOZBUWNZJFRVYUXLXSORCYBNMIANLNNQYIUQGATQATS");

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
    msg.setTimeStamp(0.835019418309783);
    msg.setSource(1011U);
    msg.setSourceEntity(36U);
    msg.setDestination(32328U);
    msg.setDestinationEntity(220U);
    msg.timeout = 9273U;
    msg.lat = 0.30125025299267216;
    msg.lon = 0.5599473623361914;
    msg.z = 0.46595787086597007;
    msg.z_units = 159U;
    msg.speed = 0.14312887223033488;
    msg.speed_units = 40U;
    msg.bearing = 0.3757886146973647;
    msg.cross_angle = 0.5639329459152723;
    msg.width = 0.6800295476787;
    msg.length = 0.008288785080492689;
    msg.hstep = 0.23873897977722225;
    msg.coff = 79U;
    msg.alternation = 96U;
    msg.flags = 144U;
    msg.custom.assign("EUOECKRYZGYPJCDWKOLLLLAYCAPLMKHAZJONSFXUKHYUENGEPDXHXUPRMIWNXAOJTCOZGQFQZYVKLREBCRNQDGAJMJOPBOYCIWYGHMQZTANMWKDJKVSSDFNYBYIRFMSRTRGGBQWTNZEZQLVVSQFTZAIMFQVDBWVFKHRAMXVJHUPDOBTXWSFESHQCUKVXLMTWDKSTFEIFAIUMUCPWPIJRGHOSCQAYGDUULXXTBJRBSGNIXNJHTZEZWIL");

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
    msg.setTimeStamp(0.18797639263525612);
    msg.setSource(36419U);
    msg.setSourceEntity(209U);
    msg.setDestination(53261U);
    msg.setDestinationEntity(147U);
    msg.timeout = 53079U;
    msg.lat = 0.564591705766804;
    msg.lon = 0.9203098883446876;
    msg.z = 0.10298368393946289;
    msg.z_units = 32U;
    msg.speed = 0.6064787071493162;
    msg.speed_units = 247U;
    msg.custom.assign("NEFHWMKZFDMNGJRLBSGKUPHCXZNRWTEPBGEKXHIISWGYPWMFMFDQRZKYFSNCYLDYSLOHUYGPSHNJTRJQUMBFSOVIBLKLLLOAJQQQVTUWNJMOXZWWZMTVOEFAWSVPCRVGPCWCBDTVCLVIVQKXTOJDDDXAUKRHROIVEJKKYOTZIHMCYJFBGSVCIRKTSZTPJEDLMPYUYBJPUURZGFGCNQIAEHIQFNQAOGBWXTSAMIDZCZAHNNPQHBX");

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
    msg.setTimeStamp(0.02720371119998244);
    msg.setSource(58816U);
    msg.setSourceEntity(102U);
    msg.setDestination(22206U);
    msg.setDestinationEntity(95U);
    msg.timeout = 64869U;
    msg.lat = 0.07483174295200112;
    msg.lon = 0.44410074979039726;
    msg.z = 0.7427536281924826;
    msg.z_units = 189U;
    msg.speed = 0.4500421557014993;
    msg.speed_units = 103U;
    msg.custom.assign("ABDDOXCGDVRTANINBJSVPZCSJFEAQGMB");

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
    msg.setTimeStamp(0.8175959842657086);
    msg.setSource(20341U);
    msg.setSourceEntity(39U);
    msg.setDestination(55659U);
    msg.setDestinationEntity(81U);
    msg.timeout = 15125U;
    msg.lat = 0.7306416999921961;
    msg.lon = 0.7819156864283299;
    msg.z = 0.7097773694481575;
    msg.z_units = 121U;
    msg.speed = 0.20186639313991595;
    msg.speed_units = 7U;
    msg.custom.assign("NBNMVBDDDRLYLWVEBFWLSSTPQNPHUVUWXSNLIQLERCQCNQDASCGZRRBHXZAYZIKOOXXMQHMIPFTOWIQATBQUEEWDRJQHIGHLTDITBXFYOWPVERKHDYFBNVZOIPHOYAJJZIEJIWAYRUMLPGUFCEFONTGDBSUVZBKRCXPGRXLYDJAEUCSQFYCVXUGAFFPECXKQGSHSMKMUJZVKIKGZWLLCJGJVRHTNZMMYSDNXTUFTJGOZYANWVKMTE");

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
    msg.setTimeStamp(0.30583385389796747);
    msg.setSource(13410U);
    msg.setSourceEntity(228U);
    msg.setDestination(51965U);
    msg.setDestinationEntity(38U);
    msg.x = 0.32926480811532943;
    msg.y = 0.25760019899600983;
    msg.z = 0.21520192283647355;

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
    msg.setTimeStamp(0.5606695547077115);
    msg.setSource(37802U);
    msg.setSourceEntity(27U);
    msg.setDestination(3407U);
    msg.setDestinationEntity(7U);
    msg.x = 0.47219960691034324;
    msg.y = 0.7892025560121338;
    msg.z = 0.6499917957327247;

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
    msg.setTimeStamp(0.9942039194383848);
    msg.setSource(32912U);
    msg.setSourceEntity(74U);
    msg.setDestination(14975U);
    msg.setDestinationEntity(186U);
    msg.x = 0.6766137771402654;
    msg.y = 0.6492271361390604;
    msg.z = 0.09252773514978596;

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
    msg.setTimeStamp(0.566058439597115);
    msg.setSource(33793U);
    msg.setSourceEntity(152U);
    msg.setDestination(29471U);
    msg.setDestinationEntity(229U);
    msg.timeout = 64326U;
    msg.lat = 0.18817367398712648;
    msg.lon = 0.6183830187988033;
    msg.z = 0.43330282208948245;
    msg.z_units = 111U;
    msg.amplitude = 0.3705472960117365;
    msg.pitch = 0.5608057493561234;
    msg.speed = 0.2541656082278665;
    msg.speed_units = 214U;
    msg.custom.assign("IJLGTKFOOMXFSSYHYWNKPPGTICNYDAVEBNLRUUGMZZMPQEHTVKXXTRUBJPZEKOBJTNGFLOQMDJTECQDIGNVQNWYUURCBOGUWKJCHIINQHDPOBPPAVFNMHYCXLVYBTMKRRZSA");

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
    msg.setTimeStamp(0.7005886500383913);
    msg.setSource(5082U);
    msg.setSourceEntity(134U);
    msg.setDestination(28740U);
    msg.setDestinationEntity(79U);
    msg.timeout = 60149U;
    msg.lat = 0.3410434917637504;
    msg.lon = 0.5396223101036044;
    msg.z = 0.8589527538756059;
    msg.z_units = 125U;
    msg.amplitude = 0.7559901098491728;
    msg.pitch = 0.3223592216223473;
    msg.speed = 0.408610740366938;
    msg.speed_units = 150U;
    msg.custom.assign("MCCXJUQBNTPCLCQUVBUPGKRHPXNQLDVFWNFNNOPESPKQEHLDNOYLSAMVZVIMIUADEFAMOG");

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
    msg.setTimeStamp(0.1299770327941);
    msg.setSource(38364U);
    msg.setSourceEntity(55U);
    msg.setDestination(1190U);
    msg.setDestinationEntity(85U);
    msg.timeout = 32728U;
    msg.lat = 0.010899405042149812;
    msg.lon = 0.7321654205979503;
    msg.z = 0.804670997325237;
    msg.z_units = 231U;
    msg.amplitude = 0.863222187828833;
    msg.pitch = 0.5366544438227272;
    msg.speed = 0.466897589688134;
    msg.speed_units = 79U;
    msg.custom.assign("KDGIKUZINDRQJTHTMBIWYJBMDXZAHDESYYFYWAGUHAMBZNQLQQSRRPLEXKTRFEKDFEYASWCSJQEQJFV");

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
    msg.setTimeStamp(0.5134192462390225);
    msg.setSource(3533U);
    msg.setSourceEntity(176U);
    msg.setDestination(19505U);
    msg.setDestinationEntity(15U);

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
    msg.setTimeStamp(0.16605328421335452);
    msg.setSource(24228U);
    msg.setSourceEntity(49U);
    msg.setDestination(30597U);
    msg.setDestinationEntity(224U);

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
    msg.setTimeStamp(0.1422939552555359);
    msg.setSource(52671U);
    msg.setSourceEntity(196U);
    msg.setDestination(38665U);
    msg.setDestinationEntity(25U);

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
    msg.setTimeStamp(0.8244435255332715);
    msg.setSource(62672U);
    msg.setSourceEntity(220U);
    msg.setDestination(41406U);
    msg.setDestinationEntity(160U);
    msg.lat = 0.9462661923823015;
    msg.lon = 0.24337661764431995;
    msg.z = 0.2624310942653373;
    msg.z_units = 177U;
    msg.radius = 0.9201754098806075;
    msg.duration = 5696U;
    msg.speed = 0.2152020745696107;
    msg.speed_units = 92U;
    msg.custom.assign("OTLODGXXIQQFROHECFZIVFAOUBHVSZWNIQAPXAFLJKJXPNHCPEDMBRMLGTJYMVHKJPZFZDTTEUEABBIYSVUVLGLJXSFQCMEUMHWZYMKUOB");

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
    msg.setTimeStamp(0.9321997493460236);
    msg.setSource(26878U);
    msg.setSourceEntity(210U);
    msg.setDestination(6559U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.8919994302490573;
    msg.lon = 0.4591172256071947;
    msg.z = 0.9014116225166794;
    msg.z_units = 11U;
    msg.radius = 0.6354378697274627;
    msg.duration = 13783U;
    msg.speed = 0.1116454521269512;
    msg.speed_units = 36U;
    msg.custom.assign("VBQWGOCWFJBXDRPCUFMWJGUZTMGHVGMAKANNQJBBALLNTGOZIXVYHHDSQNGQHETTQEURSSWVGSAVTDFYJOSDDHIMUAKHZZRMWRMMKJBZUEOPOVRVFPWCDXBXKSGYLDUXLLBPYTXMIEFNQYOHTQZJARHUIJUYGMFCEMNKDDJKRTFK");

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
    msg.setTimeStamp(0.30387340155406595);
    msg.setSource(13407U);
    msg.setSourceEntity(190U);
    msg.setDestination(16782U);
    msg.setDestinationEntity(61U);
    msg.lat = 0.3787396971627074;
    msg.lon = 0.6637370620434749;
    msg.z = 0.03369542326918484;
    msg.z_units = 237U;
    msg.radius = 0.4633979578827724;
    msg.duration = 59054U;
    msg.speed = 0.8166004316833029;
    msg.speed_units = 59U;
    msg.custom.assign("PRZBZNUZSFLQIZTZCVGXIFMFRVQIBZUMCNCZOSBHHKXHLCHSPHEOFDIBQDMHHECABGJKSMOUYXWDQEOBTTHOMSRKCTITRFZDM");

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
    msg.setTimeStamp(0.09342801448551885);
    msg.setSource(20395U);
    msg.setSourceEntity(37U);
    msg.setDestination(26543U);
    msg.setDestinationEntity(138U);
    msg.timeout = 10822U;
    msg.flags = 64U;
    msg.lat = 0.7244301014324228;
    msg.lon = 0.7228715194939497;
    msg.start_z = 0.5736866945370135;
    msg.start_z_units = 31U;
    msg.end_z = 0.5814383962568395;
    msg.end_z_units = 198U;
    msg.radius = 0.8617664996546853;
    msg.speed = 0.313840418727774;
    msg.speed_units = 86U;
    msg.custom.assign("JWLOGONUXQVTJGKLIEHBJJDPDLKMFHCWWNDAAQKSFGFOYQXHMBALSMMSBNCJIGLXGJDPZLPVBXLRRQXSEFOYIGIQWKJKSARZPRCPWHONVRLRVCYAPHAZVOTEGIVDVDQSAHDWSWUCLKUUAGUKDTGUFZHJYCZPMQOMIBPFPHLRUNERHXEKTIVTYNTYZZ");

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
    msg.setTimeStamp(0.6410210487994203);
    msg.setSource(5297U);
    msg.setSourceEntity(57U);
    msg.setDestination(64796U);
    msg.setDestinationEntity(90U);
    msg.timeout = 19307U;
    msg.flags = 203U;
    msg.lat = 0.8893477897436897;
    msg.lon = 0.03504565882812538;
    msg.start_z = 0.8893933171823519;
    msg.start_z_units = 114U;
    msg.end_z = 0.3670732433360171;
    msg.end_z_units = 94U;
    msg.radius = 0.4690168427334527;
    msg.speed = 0.5731458479268061;
    msg.speed_units = 142U;
    msg.custom.assign("TMYVAAXVSWGUOTLMBJTYKEIHYEGKHNVRELXOVJLXLGUGRZZFRMGVZKTPHQYBQNYEHGCPEEOHIGFLYHRICKUMFCARWSOWHPDYBAFNWPAIQTDQJNYYRDZKBUIIYWNILBUSOFEVKTPMSNKWCURJFKUZGOJDPXUZETIXQICXCQMLWQHONDKVPOWRDWUPSHJMHSABJILJBARVECTOTSMOAXZPFBGZVKMTBFZLNGDLUMDPCDBDWXVSQCXZEAJQ");

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
    msg.setTimeStamp(0.5624563701667586);
    msg.setSource(14043U);
    msg.setSourceEntity(52U);
    msg.setDestination(51012U);
    msg.setDestinationEntity(243U);
    msg.timeout = 59940U;
    msg.flags = 235U;
    msg.lat = 0.008474662867517746;
    msg.lon = 0.15409402335440536;
    msg.start_z = 0.011857057270958093;
    msg.start_z_units = 165U;
    msg.end_z = 0.29155388281288364;
    msg.end_z_units = 96U;
    msg.radius = 0.05239333606716878;
    msg.speed = 0.5341413824965742;
    msg.speed_units = 247U;
    msg.custom.assign("RVWPJITAGPERVOBDJMGVIQAJOLZKVEUEEGJWKGXXJUZPFCSQYPVOZFWCXYVQCHFFLDFUZQILDTKIYROJUAMOYDNNWYDODHRWBIOGVAEHFKSBJQVDKKBUICXAMQXBWUEPMTZKMPQMEGHXAUCBWYSOLJBKARPTTILZ");

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
    msg.setTimeStamp(0.8202700541309139);
    msg.setSource(22462U);
    msg.setSourceEntity(90U);
    msg.setDestination(59513U);
    msg.setDestinationEntity(224U);
    msg.timeout = 27311U;
    msg.lat = 0.5197337560760612;
    msg.lon = 0.7984574109046972;
    msg.z = 0.6110130608083564;
    msg.z_units = 109U;
    msg.speed = 0.16791503958113396;
    msg.speed_units = 51U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.22880545229901417;
    tmp_msg_0.y = 0.9382974058389937;
    tmp_msg_0.z = 0.8913275357602983;
    tmp_msg_0.t = 0.007928449906206558;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("TAGLPSYVQQDQOHWCMVHEQVNHVGVRDCOOUWTKZZUJDOXKIDMRDWUSMIQUGNINFACOEJBIAARYCSXTMTWYWKYJHLCAOUR");

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
    msg.setTimeStamp(0.4140112658923488);
    msg.setSource(21174U);
    msg.setSourceEntity(31U);
    msg.setDestination(52442U);
    msg.setDestinationEntity(46U);
    msg.timeout = 19497U;
    msg.lat = 0.5644922481772686;
    msg.lon = 0.15261465757830417;
    msg.z = 0.08111447314045317;
    msg.z_units = 40U;
    msg.speed = 0.8022113689868646;
    msg.speed_units = 134U;
    msg.custom.assign("XNIFMUSPJRTUJQXRJRGZXOGTBPETQXGOFEILZMYSJPDHXQFPUJDGYHTBUZDNLRXONGZSNRNQFDUZJVMZIDQLAFCQKOKSOTHBSOENKVKWMKTGXDRUZRCWJUYTASFHWYBAEDMUMRBZNGNWYXVIKHJERAUALLQDIIQEAHIOCKKLWXMOPLBNQEWHCVVSDMGJCAPYZWCLBLCVTYHB");

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
    msg.setTimeStamp(0.5156419906548537);
    msg.setSource(43355U);
    msg.setSourceEntity(135U);
    msg.setDestination(14014U);
    msg.setDestinationEntity(26U);
    msg.timeout = 17311U;
    msg.lat = 0.6287972039607636;
    msg.lon = 0.9949169322991686;
    msg.z = 0.8133806553132111;
    msg.z_units = 235U;
    msg.speed = 0.13088609368562676;
    msg.speed_units = 149U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.8744892477833635;
    tmp_msg_0.y = 0.6492903250468087;
    tmp_msg_0.z = 0.1195855564376237;
    tmp_msg_0.t = 0.5717270399946549;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("ZVCPLNLYVYRZZCLXSIPTEBAPVTRQOTQGQSTMRWDG");

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
    msg.setTimeStamp(0.5848290587831053);
    msg.setSource(24713U);
    msg.setSourceEntity(130U);
    msg.setDestination(16791U);
    msg.setDestinationEntity(209U);
    msg.x = 0.7653948275300214;
    msg.y = 0.5008340742634938;
    msg.z = 0.9270230877191938;
    msg.t = 0.8771650233971563;

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
    msg.setTimeStamp(0.32354040218303703);
    msg.setSource(36102U);
    msg.setSourceEntity(208U);
    msg.setDestination(61900U);
    msg.setDestinationEntity(173U);
    msg.x = 0.5248595854952025;
    msg.y = 0.17091273641624338;
    msg.z = 0.5279072983831155;
    msg.t = 0.7704574332284246;

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
    msg.setTimeStamp(0.5851032537841415);
    msg.setSource(35442U);
    msg.setSourceEntity(236U);
    msg.setDestination(58425U);
    msg.setDestinationEntity(144U);
    msg.x = 0.32517430948089765;
    msg.y = 0.8889292318817011;
    msg.z = 0.257787912674045;
    msg.t = 0.13469947753549494;

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
    msg.setTimeStamp(0.7620445714413222);
    msg.setSource(1003U);
    msg.setSourceEntity(201U);
    msg.setDestination(49905U);
    msg.setDestinationEntity(235U);
    msg.timeout = 46692U;
    msg.name.assign("NMDEWEXTDCGQPMYYKOFXVGZFEZGMNYULRYZIXMGPTPCUIGOMCWLULWCZUIANOCPNAOTYQHQWSGKTXRUCRGXXRLVXFQIAKCUXAIZBUSTJWSDMHQHVRAQJIRPVJRDTEUKWQXLAFJOAPHYIJHKIBIBLMZTUOJWSMCTDRZTBFBFA");
    msg.custom.assign("QFTJEQSKKADNRNBTBOSCBLUIBSTPFVMYLMSKEZEOTWATXUHKXNEFMVMKPWDPANUFWAFAQHYGDGRRAVUPKRIYC");

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
    msg.setTimeStamp(0.9545042367972639);
    msg.setSource(45763U);
    msg.setSourceEntity(124U);
    msg.setDestination(50986U);
    msg.setDestinationEntity(207U);
    msg.timeout = 45099U;
    msg.name.assign("TJOXHCUINNERMHKLCFISTPVNEEHERRTHSDJMFQIYLXLAKDFSPPVLAGKZAPBSFGQXCTMNLFYPMGAQJGBEWIVIRXDRPFORMSRIZOUUDKZAZWZNUKLSLTYSTSVQXUPYIBCIDQGOOBJMXOCFLMRREEFOWJUJLIBNTHGKDZERWDDYWKMSNZQVHGQKUBVCMOHBKKTXPXGUQWZWIBWAHNCYALECVPGSTFHXQJCAZVQ");
    msg.custom.assign("ZFEHYWIOBCFHPALEHSFULJCFDKMCINEDGHIWMKSLQCPGQVQAYMYLZOOJJHJWTDKTKRLIXXFDQKVHUAJVWVNYASFPOBNVCZGILSUPTDIKSPVYISCGCSABWKDAPZWPAICJYA");

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
    msg.setTimeStamp(0.3142440559881654);
    msg.setSource(6002U);
    msg.setSourceEntity(93U);
    msg.setDestination(49040U);
    msg.setDestinationEntity(177U);
    msg.timeout = 4818U;
    msg.name.assign("BROEAGGRNTKITKFRYCOVHYQGRZCCSSCDVFPIDGMEYKQVUOFLUMWPEHUHLIMPBMLCYIHRTAVUZGUZJWHXKUFASSJAWAJTBSSUNZHTADLMQGXFFWRLQBIFUCQNJCNXKXDDJERECNTNYYQTJMWXUERXBZLVLFOVP");
    msg.custom.assign("CFBGLWRXBWAGUQREESTXXCAYTSLLXYFLURSCPHUAMLBNBRNDPUOEUFHIRKHWDFYIZCECOHPOIXZAIECNTMHOFKUSHIVUJUVMPDYDEGTPJSISZKTRCCARQWJNQTKXAFGMBDCTZJQPJFAQNWKJDWVMKHWSZZBTJJOGWDLOUKUWMDXVWBRAFLYLNNYXEMVVQJVN");

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
    msg.setTimeStamp(0.0808894170665797);
    msg.setSource(38544U);
    msg.setSourceEntity(204U);
    msg.setDestination(54382U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.7916804898838259;
    msg.lon = 0.26613085454207985;
    msg.z = 0.15173244068926184;
    msg.z_units = 31U;
    msg.speed = 0.9657337713081289;
    msg.speed_units = 24U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.07168358892169868;
    tmp_msg_0.y = 0.49650936650807853;
    tmp_msg_0.z = 0.8187590314978134;
    tmp_msg_0.t = 0.03239596381687726;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 2796U;
    tmp_msg_1.off_x = 0.4983817339072334;
    tmp_msg_1.off_y = 0.7226951888668953;
    tmp_msg_1.off_z = 0.5392384867995105;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.5973384451420776;
    msg.custom.assign("YQHZEQLUZDCKMPPVRLXGGEQHYULACSNGVSLLKSWPHOEAMRNMEQUFVWWRVTAIOJDXIJSMMAJSSPFYIZYTHPVJNWXCBGZZXVOJWZNEPQYUYDCXILHB");

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
    msg.setTimeStamp(0.9348010500457392);
    msg.setSource(15369U);
    msg.setSourceEntity(1U);
    msg.setDestination(7483U);
    msg.setDestinationEntity(214U);
    msg.lat = 0.40214663540769646;
    msg.lon = 0.11829266438019281;
    msg.z = 0.09649381936085244;
    msg.z_units = 59U;
    msg.speed = 0.650549728764848;
    msg.speed_units = 116U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9196844049550783;
    tmp_msg_0.y = 0.4559867847568402;
    tmp_msg_0.z = 0.5630750790687084;
    tmp_msg_0.t = 0.6456415304677673;
    msg.points.push_back(tmp_msg_0);
    msg.start_time = 0.300076595181734;
    msg.custom.assign("VNJNUHBWXXHSJGTAVYSORNRTVJBAZEFGKHMKCBAOBHHOCZLIQVGPWFIJVXZTRCBWWWGXCEPSBOKRSNQUMZIQXUPDRDRPUUKLPDPGAHFYVXQINKKZMFDLSCEAYLDTDCJQLQZLYIMCWEHFJHUKOVIULRLWTAGTHQEDMDWREPOOMMMXRCYGNKAYVITFOSTFZFWSYSPIIYJNXDBANXQLUYBOGJFEGNUUGMBBISQXWLKCAZYNSOTZDJAPEJKMVPTEFR");

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
    msg.setTimeStamp(0.09519552211530713);
    msg.setSource(46094U);
    msg.setSourceEntity(15U);
    msg.setDestination(16141U);
    msg.setDestinationEntity(253U);
    msg.lat = 0.9634993687379183;
    msg.lon = 0.6742613821078915;
    msg.z = 0.7915724588464084;
    msg.z_units = 39U;
    msg.speed = 0.7027226401089203;
    msg.speed_units = 162U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 59306U;
    tmp_msg_0.off_x = 0.49816211351330164;
    tmp_msg_0.off_y = 0.8165720301886942;
    tmp_msg_0.off_z = 0.6681873643424162;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.5348217255832698;
    msg.custom.assign("EGNBCJWRFBQNSODHHMLAZDASNDDIIXNXCDNZKSAQHITRFKYWCFRKTUTONQTKHTQYK");

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
    msg.setTimeStamp(0.4420919505524944);
    msg.setSource(63890U);
    msg.setSourceEntity(241U);
    msg.setDestination(46921U);
    msg.setDestinationEntity(135U);
    msg.vid = 38926U;
    msg.off_x = 0.9070132162327931;
    msg.off_y = 0.3375967568608169;
    msg.off_z = 0.4979035525705299;

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
    msg.setTimeStamp(0.9124049400039356);
    msg.setSource(55352U);
    msg.setSourceEntity(94U);
    msg.setDestination(47572U);
    msg.setDestinationEntity(116U);
    msg.vid = 64544U;
    msg.off_x = 0.8917915851072807;
    msg.off_y = 0.39981908710952585;
    msg.off_z = 0.5297271297309317;

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
    msg.setTimeStamp(0.6298049489482386);
    msg.setSource(39349U);
    msg.setSourceEntity(99U);
    msg.setDestination(15004U);
    msg.setDestinationEntity(150U);
    msg.vid = 17918U;
    msg.off_x = 0.04704138707789263;
    msg.off_y = 0.6666582258996578;
    msg.off_z = 0.9453954605042569;

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
    msg.setTimeStamp(0.6930868039723125);
    msg.setSource(9145U);
    msg.setSourceEntity(0U);
    msg.setDestination(17909U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.6968520363485426);
    msg.setSource(61727U);
    msg.setSourceEntity(216U);
    msg.setDestination(4376U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.9484355918864666);
    msg.setSource(58026U);
    msg.setSourceEntity(14U);
    msg.setDestination(40227U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.7737981403341185);
    msg.setSource(3992U);
    msg.setSourceEntity(66U);
    msg.setDestination(27394U);
    msg.setDestinationEntity(139U);
    msg.mid = 63226U;

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
    msg.setTimeStamp(0.8368939622043435);
    msg.setSource(41453U);
    msg.setSourceEntity(24U);
    msg.setDestination(22230U);
    msg.setDestinationEntity(173U);
    msg.mid = 26106U;

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
    msg.setTimeStamp(0.35009228933989056);
    msg.setSource(22433U);
    msg.setSourceEntity(97U);
    msg.setDestination(11151U);
    msg.setDestinationEntity(103U);
    msg.mid = 20190U;

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
    msg.setTimeStamp(0.43457460526444525);
    msg.setSource(15338U);
    msg.setSourceEntity(117U);
    msg.setDestination(65522U);
    msg.setDestinationEntity(10U);
    msg.state = 123U;
    msg.eta = 62672U;
    msg.info.assign("STKBCZRDUFOPSFADYLJQUYTORCRKPTZYHNCICXSNUYNPZCFMXXVGFXJEHARHHGKNRYLXHIDQMYVEVZIKODBWKNGAAMWQSEQPDNHZPMXMWJYBEYXAJDKDBGJREEOJUWVRISRXGIFESECSCLGITYIWTYWXBUBOAQEMOPSCPTRBJZTEJOHMUKLGIUFTZNBCOAFDLJANNKGQKVFTKAOIMZLWFXBCLVDZPUVUS");

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
    msg.setTimeStamp(0.8437868013228862);
    msg.setSource(21860U);
    msg.setSourceEntity(90U);
    msg.setDestination(14951U);
    msg.setDestinationEntity(212U);
    msg.state = 80U;
    msg.eta = 57940U;
    msg.info.assign("SOBVXOXVLQTRKXLLMAPYHXQBUBOFONTKRDKYGQTUHUZGWGXSUVCKIMBZDNRCMPPLIXLBHILBCJQWSVVANFTJLACNKKRNUGIARHCZYDEHJEIBZWMEFPCZAYZUHCFEPZOTHIPIGGGDAOWKNPFJWCEKEEEASVBNDYUISAKCVUHDJDXWAFTHOLXDYQQWMZYKYNHCJNRRJTOEBMQZFWJPRDMPSQVTAFIOWYVYVFWIRUJESLGZJSBO");

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
    msg.setTimeStamp(0.49047485772348487);
    msg.setSource(54048U);
    msg.setSourceEntity(45U);
    msg.setDestination(11596U);
    msg.setDestinationEntity(156U);
    msg.state = 203U;
    msg.eta = 52514U;
    msg.info.assign("OFDEPAVCKRSASDUERWADWBBRJYQGFSCMTGFMSXIJHJYEXGCXQTLLNMUGLOQEWEKSHKPAFDEQRFBKYRDGRI");

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
    msg.setTimeStamp(0.5466500892253942);
    msg.setSource(60201U);
    msg.setSourceEntity(242U);
    msg.setDestination(36650U);
    msg.setDestinationEntity(52U);
    msg.system = 52282U;
    msg.duration = 61576U;
    msg.speed = 0.12238018116388172;
    msg.speed_units = 92U;
    msg.x = 0.34188948211419623;
    msg.y = 0.8590581809856768;
    msg.z = 0.9254392009979776;
    msg.z_units = 3U;

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
    msg.setTimeStamp(0.5795730817580912);
    msg.setSource(61729U);
    msg.setSourceEntity(241U);
    msg.setDestination(9608U);
    msg.setDestinationEntity(192U);
    msg.system = 12059U;
    msg.duration = 55805U;
    msg.speed = 0.7059579429880393;
    msg.speed_units = 201U;
    msg.x = 0.2921792657847049;
    msg.y = 0.0929405482284571;
    msg.z = 0.22431418352486177;
    msg.z_units = 76U;

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
    msg.setTimeStamp(0.043915479809490066);
    msg.setSource(50568U);
    msg.setSourceEntity(233U);
    msg.setDestination(60162U);
    msg.setDestinationEntity(160U);
    msg.system = 60382U;
    msg.duration = 51457U;
    msg.speed = 0.625244274974382;
    msg.speed_units = 202U;
    msg.x = 0.42287078388295263;
    msg.y = 0.3173227179735978;
    msg.z = 0.16706967120635474;
    msg.z_units = 38U;

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
    msg.setTimeStamp(0.19315815132267622);
    msg.setSource(16107U);
    msg.setSourceEntity(253U);
    msg.setDestination(31046U);
    msg.setDestinationEntity(3U);
    msg.lat = 0.7014761751888174;
    msg.lon = 0.3161159260327573;
    msg.speed = 0.10430169956587731;
    msg.speed_units = 143U;
    msg.duration = 57153U;
    msg.sys_a = 6576U;
    msg.sys_b = 3016U;
    msg.move_threshold = 0.058923232160974504;

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
    msg.setTimeStamp(0.7271196406375484);
    msg.setSource(39526U);
    msg.setSourceEntity(137U);
    msg.setDestination(9327U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.5540204941140912;
    msg.lon = 0.6402155926691457;
    msg.speed = 0.19731110545759656;
    msg.speed_units = 15U;
    msg.duration = 44442U;
    msg.sys_a = 4363U;
    msg.sys_b = 57076U;
    msg.move_threshold = 0.8359785672133888;

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
    msg.setTimeStamp(0.8879315487125308);
    msg.setSource(12317U);
    msg.setSourceEntity(147U);
    msg.setDestination(10666U);
    msg.setDestinationEntity(40U);
    msg.lat = 0.014976837465564774;
    msg.lon = 0.7569827572540132;
    msg.speed = 0.009524144346788055;
    msg.speed_units = 154U;
    msg.duration = 19833U;
    msg.sys_a = 50064U;
    msg.sys_b = 38368U;
    msg.move_threshold = 0.7223845718682625;

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
    msg.setTimeStamp(0.906035979235123);
    msg.setSource(2695U);
    msg.setSourceEntity(169U);
    msg.setDestination(49675U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.6326411805297093;
    msg.lon = 0.29304838133878697;
    msg.z = 0.3405752926972456;
    msg.z_units = 207U;
    msg.speed = 0.6171987488534305;
    msg.speed_units = 94U;
    msg.custom.assign("QVAZOWZNCJUCQFEPXCZYOQBNYWZUTECKBKYLRZGULGHWNQNEBFBNVZHMKOWKOOLYBAXUUNDLGIQOIFRESBCVSMZMCYGPIJSQAMMXCJAVAFVMS");

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
    msg.setTimeStamp(0.7415017828803058);
    msg.setSource(14521U);
    msg.setSourceEntity(129U);
    msg.setDestination(23709U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.8887178233341682;
    msg.lon = 0.7729824428453621;
    msg.z = 0.14682076648890585;
    msg.z_units = 161U;
    msg.speed = 0.5707775720772269;
    msg.speed_units = 227U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.06741666807186764;
    tmp_msg_0.lon = 0.5025594932604087;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("LPUIVLDCPHMUXHHTBRQQIYSCMTTUKYOZKJTBNEQFAVZJXCRDUBKEKADZEPTVHTWCJGMITURAYEWVZELQOCMFYARNYDFSPISYOROPFCLBIAJUDZKYQEWRONABEFWDNIGFLPKXJK");

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
    msg.setTimeStamp(0.07881697010001065);
    msg.setSource(34832U);
    msg.setSourceEntity(224U);
    msg.setDestination(35123U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.7519443758021489;
    msg.lon = 0.9417328933823322;
    msg.z = 0.5580874748644921;
    msg.z_units = 174U;
    msg.speed = 0.39327208384884915;
    msg.speed_units = 56U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.05501994316644987;
    tmp_msg_0.lon = 0.31402629393495496;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("QWWZJBPCEVNZYOVPHUNLPPBFUCCLWRXBMZIHMAHVKMDFQOXARLDYTTRASAMTQFTFKMUMXQQCKZMHLLXOOSDRCSDXZTJEFESCATEQHYMUCBBGTOKYNNJWEJLLSDWVZYRXSCNISINFNBXGKWPPLOVEDKGFVBLTRWZCHHHKIPRXGGAAGNYUUYKGHDTYHJVZJLSEYXIODVQWUIFUXPEWRFETDJVDGAKSPBEJRFMPZIQSWMNAIYUZIQIG");

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
    msg.setTimeStamp(0.10920269877607514);
    msg.setSource(50443U);
    msg.setSourceEntity(185U);
    msg.setDestination(45260U);
    msg.setDestinationEntity(84U);
    msg.lat = 0.34422274841915834;
    msg.lon = 0.6503065691093404;

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
    msg.setTimeStamp(0.17042418636984857);
    msg.setSource(18123U);
    msg.setSourceEntity(215U);
    msg.setDestination(25278U);
    msg.setDestinationEntity(59U);
    msg.lat = 0.48998973485530284;
    msg.lon = 0.4174373785698984;

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
    msg.setTimeStamp(0.6192830018642299);
    msg.setSource(57696U);
    msg.setSourceEntity(132U);
    msg.setDestination(15375U);
    msg.setDestinationEntity(82U);
    msg.lat = 0.024347794714871474;
    msg.lon = 0.9267272278019918;

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
    msg.setTimeStamp(0.16330535399499346);
    msg.setSource(14868U);
    msg.setSourceEntity(115U);
    msg.setDestination(12398U);
    msg.setDestinationEntity(120U);
    msg.timeout = 20733U;
    msg.lat = 0.787072800483566;
    msg.lon = 0.16987801582148954;
    msg.z = 0.017595465965654422;
    msg.z_units = 16U;
    msg.pitch = 0.9082159093456182;
    msg.amplitude = 0.8213303401404063;
    msg.duration = 59690U;
    msg.speed = 0.7523383506186447;
    msg.speed_units = 30U;
    msg.radius = 0.6683779283450899;
    msg.direction = 93U;
    msg.custom.assign("XLLBPZJHLJVLNMNWCAYXGBEUZACIAALPSFTOSUCLGFDJZBGDWVGMPAZQAMPNPWFZNXCWSRDSPIBFWDHSPU");

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
    msg.setTimeStamp(0.023863504743879327);
    msg.setSource(24505U);
    msg.setSourceEntity(110U);
    msg.setDestination(3369U);
    msg.setDestinationEntity(21U);
    msg.timeout = 56377U;
    msg.lat = 0.1343427406300891;
    msg.lon = 0.22401878187784097;
    msg.z = 0.2557319195640121;
    msg.z_units = 246U;
    msg.pitch = 0.3654577023399532;
    msg.amplitude = 0.38506500713870895;
    msg.duration = 54933U;
    msg.speed = 0.9478131078654543;
    msg.speed_units = 74U;
    msg.radius = 0.5517496686972104;
    msg.direction = 246U;
    msg.custom.assign("JHHMBPGVJUSUMFDRNWRQOPZQCTAICOAWZIWBFBGITHRJBQBMZXMXOSHAGAZDPEXTNONVQEKASTVJMNESUURPHLEQFZEYAIGHMDDPIOXVGMERJQJQYKSSBYBKRSDVGZJQLRGYKBHZYCAEKH");

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
    msg.setTimeStamp(0.11187748576009815);
    msg.setSource(12833U);
    msg.setSourceEntity(23U);
    msg.setDestination(56612U);
    msg.setDestinationEntity(237U);
    msg.timeout = 48301U;
    msg.lat = 0.23091058488775296;
    msg.lon = 0.027045361510670163;
    msg.z = 0.5298927704317835;
    msg.z_units = 148U;
    msg.pitch = 0.6129793135076559;
    msg.amplitude = 0.35935632303778275;
    msg.duration = 15708U;
    msg.speed = 0.6991127202751903;
    msg.speed_units = 57U;
    msg.radius = 0.7432530762897113;
    msg.direction = 10U;
    msg.custom.assign("OQUAFTXAWZRUNMOBBJDCFTNWKOAGSYABCXNHWVMCYWBVARRSRXACFD");

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
    msg.setTimeStamp(0.667118204724271);
    msg.setSource(46771U);
    msg.setSourceEntity(120U);
    msg.setDestination(3202U);
    msg.setDestinationEntity(144U);
    msg.formation_name.assign("VNOJFQZOYZXAILTAWDDKYWHEGXEJXFIZISUHDZPKABMNAUNPZVUEQUERNGMTIOLKSWIPLFZAVVGBWKGEIXYEDKCBPMZPDNTFRCNVLRWYPLQVCYA");
    msg.reference_frame = 182U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 35799U;
    tmp_msg_0.off_x = 0.5467228129114765;
    tmp_msg_0.off_y = 0.9691963533464042;
    tmp_msg_0.off_z = 0.9899381598413209;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("OJSADYKZHGLDKVXVQHASQJRXWLWMAOTMAYEIUH");

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
    msg.setTimeStamp(0.9915888121196232);
    msg.setSource(9531U);
    msg.setSourceEntity(139U);
    msg.setDestination(28051U);
    msg.setDestinationEntity(148U);
    msg.formation_name.assign("LNYEHKUZDVZWTTVEHDPEHIUQWMDQPIAUQRWAZGTLXGENVFCJKSZSTHPVPMQMOCDPNORMOXSNWTBJJZWJYAGOH");
    msg.reference_frame = 78U;
    msg.custom.assign("EZNGLXXFFVHCLCJCDPPNPAWBVKQWYNURWHBFFPTBEHBVIQIJWWTSJVURDDQZMSTUEJKVZQKBTRARVYI");

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
    msg.setTimeStamp(0.9297138300358131);
    msg.setSource(9284U);
    msg.setSourceEntity(62U);
    msg.setDestination(57096U);
    msg.setDestinationEntity(150U);
    msg.formation_name.assign("PKQQPMPSIJZIPDCCWDQXNNYLGBGNHRANFWGNWAMVCNMAPIKBPMKLZGIOGFMUVBKOAZKWFWARXODTCWBWYTVEKZLMWTJTTFKVCSVAHZXUJQDBUNRPHZGLBOOXHYLUYPRUIKWYOZJE");
    msg.reference_frame = 218U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 48784U;
    tmp_msg_0.off_x = 0.679760195158422;
    tmp_msg_0.off_y = 0.8242781742533717;
    tmp_msg_0.off_z = 0.7370416756327439;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("BFKOQZZVCWKWBZQAZGIKPRKYBLBJLUIVANWEQPAZJXVNLIOATTCKHFMNSLMEDBMCZKGUUEWVPUUIYJODISAMRRKALXEGSIOHFXLRZUWJRWYFCUZAJDTYCEQTOXKVMOIJUTTPWYGQQOUGQDDGLYNVIYZHRLYBCOJDEBPGULJFMKEHTHMNGFRPJAGJBFEIMRHIVCPYQXOWTZSHSVXOBTHTCANPDKFHNNRXDQWGPMSXBSFRECCYMFPLWQS");

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
    msg.setTimeStamp(0.8964211112145831);
    msg.setSource(25521U);
    msg.setSourceEntity(147U);
    msg.setDestination(1056U);
    msg.setDestinationEntity(116U);
    msg.group_name.assign("HBWSWDYUEPHNHPGUBCOWOYCVJKXUCJHBSCXYVZFFJTTCOTDAHDZCIPRMYMKWOVEEIBEZYFPSVJXGMJWELMTHAWQBVKPOZPDVBRRAWQASMATJDLLRKXSOADRZPTLFGUCQZGPJTWQTLZMWOQNVGQVJZGFQARHBSDKNMRYUR");
    msg.formation_name.assign("SLMPPSAAKZDBZRFQVVBHGUUOVTWNGQARXHWBUUXEZFTXEKNCJHWFEGYONFUWFJSDXIKRLFJEHUXIIOOVCJHGTNEPAEUPRRJZZFMQQBCANTDVTJWAZLBKKLGYAQBLDQYYDZRDOMIDFRMPPQMYXEZXJRTMYWGCMMGKACNWLFOANVBTIVJYRBPWGIBYXIMQJIFSNMOCQLGIVVHBZULOCCPKTOHWZNQSDGCXISKEKYNKCPWSO");
    msg.plan_id.assign("XZNMKPYUAMANSOECWDHNXKNRSRMACXMHGGJBFWDDNCHUCMYNEPXEAQXIXAKAVRMSTHNODNBWWREOVMXSCZZIIZOBNQWUKIJZZKEOUDBJZKGTTFDDGILUBWGZYLITSHUYVHTCYJZPFUPQUBWGKLDELOCIDKLTXYQQRKCMIZQWAGVVKRNBVFMUYXPACHESLSQRSHTWJBPVYFFDPELPHLHVSOPMFFVYULPJAETGIAOBSCVBOJRTFQTOGRLIEJXG");
    msg.description.assign("VYEDKGUYKZJTKZRARJLOHIZCDMHYMCHHFPLHTKWHRLOKNAELFZOMSRTHBNBXNLLAGYVOCNJNVQUZUBDPSDQITPRGOXXUVRZCGPWDQYAFITKEGOLJSDXVSJXWNRASGRYICOBMMOFTVWOQFSRDTQMCAITUPDMUEPIYBSTMBUICJBHKZVDOUUKLBRSMGWSYJJQJZPGXENBUHAIXQZQQIWNLYLVPEEGE");
    msg.leader_speed = 0.28992827722239434;
    msg.leader_bank_lim = 0.9641086718544996;
    msg.pos_sim_err_lim = 0.8276707562033404;
    msg.pos_sim_err_wrn = 0.3687879197715387;
    msg.pos_sim_err_timeout = 48516U;
    msg.converg_max = 0.13879573097720976;
    msg.converg_timeout = 29215U;
    msg.comms_timeout = 61706U;
    msg.turb_lim = 0.5545535493204297;
    msg.custom.assign("GPMLMTIEGOWABXOSFABFMXSGHBETJRFCZJSPLIZPECUYLSEXLREBNHWQIELRJQVSHUOQPMRNFNYVUOVGKZDXWOVCDXLIGYRCQDXHDBUUOGRJLQBNCZTZCETNBKFJUHVVXKCFNYDEMPFIWYBUHPWPKKADDYSKSSRAIMGQQAVMTJYMATAKWTHANVROWKWABGOUQGHGJUJALNJQRVZTTWFDBWLZPCIVCEFHZYY");

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
    msg.setTimeStamp(0.7988162434852015);
    msg.setSource(8069U);
    msg.setSourceEntity(200U);
    msg.setDestination(24248U);
    msg.setDestinationEntity(100U);
    msg.group_name.assign("IRMGMHPYNEEXTRPLDYJAPPDEASVIKDJBMAJNSS");
    msg.formation_name.assign("YCORCIZQSBBQOIIBGGMQDAFHHBFWCFKIZDDTKPNJMDNPPWELCOEGCSOJRLFAPVXJDYLQUWVHEEJQGEYGPSDGKGWMKPMBUXTZDHQLPGJWZXTWIUZURTNYUWRJCEXVUAWXNNXNSYNFYZCKFREMVVTHSX");
    msg.plan_id.assign("TCZHXKPOEFHRQBXGBMYUTRXRNYDWHIOZYUUOFTWVKVPXJIDADTNCRREAWHOLTQCFQYAORW");
    msg.description.assign("MZFWUWQYVSSTK");
    msg.leader_speed = 0.9840696676558134;
    msg.leader_bank_lim = 0.9991034872061597;
    msg.pos_sim_err_lim = 0.38308310922319866;
    msg.pos_sim_err_wrn = 0.02495659921719129;
    msg.pos_sim_err_timeout = 16351U;
    msg.converg_max = 0.6200908965821972;
    msg.converg_timeout = 19167U;
    msg.comms_timeout = 8621U;
    msg.turb_lim = 0.42258756746907467;
    msg.custom.assign("VVJCGQOMSSIIGZLBKAENOXBCKOURDMKVQLTMVTFDDRLPGIANUWTLRXZEWCXYSBVUSZTTIJZPZCGXFOWAH");

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
    msg.setTimeStamp(0.40205401177532485);
    msg.setSource(23004U);
    msg.setSourceEntity(80U);
    msg.setDestination(28865U);
    msg.setDestinationEntity(114U);
    msg.group_name.assign("BTAKTWCITKOUUZJCFLUBZHQKVBLORRWLSFXONKTYCHBEPZEXMLOBXBANMCPROGIENQSDJMEVAOFNQEVQTXUGPAXMRCERJZSFLCXQBPUZKYCGSYPGISTNKKYEGBBXINQDHWZNRPWKRGHTLQDLKFBMGLTPYTZUMDGQFDSDWRWRWXCHCYHHVNFPITXYAFZVUYAYJLSVVHVDPODEMHJMNOIVOUJRGJCOAPWDMEKAIVLDSHQAIZU");
    msg.formation_name.assign("PAPGQXPCXPJDAIHLLWERJVGYTTPBMGLZJUOCHQFCQQTEVODEBTMPBJFSJKCKEWSKKRMVKDURSTNAIBRDPVYYCLNGOXHBBNZZDYXRHULGUXWFSTGHPWW");
    msg.plan_id.assign("HKCBTAOTYRKAZRIZMDAANEXBXLWISOGNOTGFDHZVSPMTQFMUDIOMDDLWXOHBLVFCQWROATQUCYBBAGREPBWGTXZLIZHWTFVKRJGVVHKSLQZE");
    msg.description.assign("JTSZKTZJQEQDTAEQLUQBXMPWRGKAVJGXAFGCGMXFICKPLTQONEDUIRTVXDVCWTUBFNIGLTLWMABKXJLOIYGUBHHFDWLWMHSRRWRKPEJBCGNCXEPSHEUHOKNCZMOBYDXBMFTOFKTAQAVQUYIYZVBVCGCDXIFJJWXJGKRYOZMOTPKMHLYVSKJQMBNEFIBPNCRSUHZDV");
    msg.leader_speed = 0.9458961465475644;
    msg.leader_bank_lim = 0.671029567653125;
    msg.pos_sim_err_lim = 0.4321699614518645;
    msg.pos_sim_err_wrn = 0.5372092428339795;
    msg.pos_sim_err_timeout = 56984U;
    msg.converg_max = 0.9926347657264881;
    msg.converg_timeout = 15421U;
    msg.comms_timeout = 53310U;
    msg.turb_lim = 0.6509288204878669;
    msg.custom.assign("BQFQRZYBLUXXJXIKITGRSGESHEFNABQJUACTQUKIANIMAPHVUNPRRTVSIIPLILWKMFERVEPQNPOTTBSUZKRWVLTUVDDWPHFKRXYPNBYOWXWJSRGVUDNEQDCLGZKXBOECWQATRJGMMNI");

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
    msg.setTimeStamp(0.2779518203114997);
    msg.setSource(12898U);
    msg.setSourceEntity(104U);
    msg.setDestination(16513U);
    msg.setDestinationEntity(78U);
    msg.control_src = 61923U;
    msg.control_ent = 224U;
    msg.timeout = 0.6960513188702465;
    msg.loiter_radius = 0.39756450236016216;
    msg.altitude_interval = 0.030576160986618195;

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
    msg.setTimeStamp(0.345473408825932);
    msg.setSource(25603U);
    msg.setSourceEntity(128U);
    msg.setDestination(61332U);
    msg.setDestinationEntity(210U);
    msg.control_src = 25393U;
    msg.control_ent = 95U;
    msg.timeout = 0.8059650623497686;
    msg.loiter_radius = 0.24479622082730446;
    msg.altitude_interval = 0.12848097968656436;

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
    msg.setTimeStamp(0.6496355824554058);
    msg.setSource(17042U);
    msg.setSourceEntity(143U);
    msg.setDestination(5471U);
    msg.setDestinationEntity(33U);
    msg.control_src = 64871U;
    msg.control_ent = 5U;
    msg.timeout = 0.16062944294984038;
    msg.loiter_radius = 0.7457301786620146;
    msg.altitude_interval = 0.8220875683708038;

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
    msg.setTimeStamp(0.8838550444524857);
    msg.setSource(18837U);
    msg.setSourceEntity(201U);
    msg.setDestination(9803U);
    msg.setDestinationEntity(3U);
    msg.flags = 104U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.1128752883661519;
    tmp_msg_0.speed_units = 243U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.17349089086287972;
    tmp_msg_1.z_units = 236U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.16531028703829742;
    msg.lon = 0.07235172921516231;
    msg.radius = 0.2432384929103225;

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
    msg.setTimeStamp(0.9616828087119271);
    msg.setSource(29873U);
    msg.setSourceEntity(157U);
    msg.setDestination(52800U);
    msg.setDestinationEntity(182U);
    msg.flags = 2U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.5507540530135625;
    tmp_msg_0.speed_units = 151U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.09326527073511903;
    tmp_msg_1.z_units = 11U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8444015204011901;
    msg.lon = 0.31827333457200324;
    msg.radius = 0.6540193737166042;

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
    msg.setTimeStamp(0.25481763788835576);
    msg.setSource(60798U);
    msg.setSourceEntity(68U);
    msg.setDestination(28521U);
    msg.setDestinationEntity(154U);
    msg.flags = 208U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.9017779672605654;
    tmp_msg_0.speed_units = 167U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.4351663962848289;
    tmp_msg_1.z_units = 201U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.5283345598136382;
    msg.lon = 0.62556664539474;
    msg.radius = 0.012427009974337655;

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
    msg.setTimeStamp(0.2725948751620989);
    msg.setSource(33773U);
    msg.setSourceEntity(83U);
    msg.setDestination(65253U);
    msg.setDestinationEntity(23U);
    msg.control_src = 27592U;
    msg.control_ent = 143U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 18U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7245304084529932;
    tmp_tmp_msg_0_0.speed_units = 15U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.21666993284935776;
    tmp_tmp_msg_0_1.z_units = 60U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.46710445783450727;
    tmp_msg_0.lon = 0.41004216834308016;
    tmp_msg_0.radius = 0.501789957883481;
    msg.reference.set(tmp_msg_0);
    msg.state = 212U;
    msg.proximity = 14U;

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
    msg.setTimeStamp(0.7914700953925724);
    msg.setSource(22634U);
    msg.setSourceEntity(220U);
    msg.setDestination(59341U);
    msg.setDestinationEntity(20U);
    msg.control_src = 39085U;
    msg.control_ent = 186U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 154U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.22441726376633886;
    tmp_tmp_msg_0_0.speed_units = 167U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6081803059501741;
    tmp_tmp_msg_0_1.z_units = 45U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.15297384920809642;
    tmp_msg_0.lon = 0.8851805596152255;
    tmp_msg_0.radius = 0.6420243948601249;
    msg.reference.set(tmp_msg_0);
    msg.state = 130U;
    msg.proximity = 239U;

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
    msg.setTimeStamp(0.9757689536080774);
    msg.setSource(48959U);
    msg.setSourceEntity(209U);
    msg.setDestination(60700U);
    msg.setDestinationEntity(9U);
    msg.control_src = 32231U;
    msg.control_ent = 47U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 33U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.05218921607753435;
    tmp_tmp_msg_0_0.speed_units = 164U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.9308946986266063;
    tmp_tmp_msg_0_1.z_units = 226U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.5117061447556867;
    tmp_msg_0.lon = 0.9176881324113011;
    tmp_msg_0.radius = 0.6885973027635616;
    msg.reference.set(tmp_msg_0);
    msg.state = 142U;
    msg.proximity = 146U;

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
    msg.setTimeStamp(0.7903315744103674);
    msg.setSource(54513U);
    msg.setSourceEntity(254U);
    msg.setDestination(18669U);
    msg.setDestinationEntity(7U);
    msg.ax_cmd = 0.47612775540598573;
    msg.ay_cmd = 0.42761519248380486;
    msg.az_cmd = 0.5919228161269438;
    msg.ax_des = 0.07205174858605623;
    msg.ay_des = 0.5381391350360267;
    msg.az_des = 0.08804916897765835;
    msg.virt_err_x = 0.5507212780542698;
    msg.virt_err_y = 0.42403193138940976;
    msg.virt_err_z = 0.170017817600581;
    msg.surf_fdbk_x = 0.34160696013482883;
    msg.surf_fdbk_y = 0.7595531650613618;
    msg.surf_fdbk_z = 0.22472174808202794;
    msg.surf_unkn_x = 0.8727449456852062;
    msg.surf_unkn_y = 0.2820667090339005;
    msg.surf_unkn_z = 0.6584506408099364;
    msg.ss_x = 0.3833035135362146;
    msg.ss_y = 0.7564597881470232;
    msg.ss_z = 0.23857750113054432;

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
    msg.setTimeStamp(0.052059274159895086);
    msg.setSource(30541U);
    msg.setSourceEntity(99U);
    msg.setDestination(16715U);
    msg.setDestinationEntity(15U);
    msg.ax_cmd = 0.9047284041592175;
    msg.ay_cmd = 0.018964807981529663;
    msg.az_cmd = 0.15074345472504558;
    msg.ax_des = 0.9891285626737011;
    msg.ay_des = 0.37877932469716247;
    msg.az_des = 0.2522947857532739;
    msg.virt_err_x = 0.4403113406794429;
    msg.virt_err_y = 0.700464862821404;
    msg.virt_err_z = 0.2023051695130218;
    msg.surf_fdbk_x = 0.5792746424052899;
    msg.surf_fdbk_y = 0.8889393303094105;
    msg.surf_fdbk_z = 0.6864090475610863;
    msg.surf_unkn_x = 0.6848930567385666;
    msg.surf_unkn_y = 0.1456982444103212;
    msg.surf_unkn_z = 0.16916931201875607;
    msg.ss_x = 0.9880873517429442;
    msg.ss_y = 0.7944643673295539;
    msg.ss_z = 0.5997008504556439;

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
    msg.setTimeStamp(0.17066457503261212);
    msg.setSource(35110U);
    msg.setSourceEntity(173U);
    msg.setDestination(13278U);
    msg.setDestinationEntity(123U);
    msg.ax_cmd = 0.988283440799904;
    msg.ay_cmd = 0.9528196754861786;
    msg.az_cmd = 0.7952601145265766;
    msg.ax_des = 0.3580260633983102;
    msg.ay_des = 0.5247306937863399;
    msg.az_des = 0.25851156673179865;
    msg.virt_err_x = 0.6257729513800985;
    msg.virt_err_y = 0.16454416712058717;
    msg.virt_err_z = 0.08664304899729525;
    msg.surf_fdbk_x = 0.4490288229367554;
    msg.surf_fdbk_y = 0.10342572745679757;
    msg.surf_fdbk_z = 0.42533480759528175;
    msg.surf_unkn_x = 0.22620332577159452;
    msg.surf_unkn_y = 0.007371642492267627;
    msg.surf_unkn_z = 0.9490010539908417;
    msg.ss_x = 0.07973585585767284;
    msg.ss_y = 0.7807274410794651;
    msg.ss_z = 0.021479597950130214;

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
    msg.setTimeStamp(0.7753547935352607);
    msg.setSource(452U);
    msg.setSourceEntity(229U);
    msg.setDestination(58412U);
    msg.setDestinationEntity(34U);
    msg.s_id.assign("PSSPLKJGWLNKZRBHYDQHHNQYAFBVIDHFRIWNIWKFLRCBEWKRSRVAJIUZGVBKYCJNENLGEEUUTLSWNOFXNZIZHCHFCWAACLCPWIXJKTEFTKZSTGIOAWVMJDLQMRAUXHTZCJXVTINPXGONKYVEXSUSMMORYONDQPMEXPJUJMYDBGFDUSZHODTBKQAJCTGVEVABAMVEGXCQRYTQRRQBJWFOFIZGMPHYYSDBDXOTZLWUUGCDZIPBMOLAHPLQXV");
    msg.dist = 0.9411763787430961;
    msg.err = 0.8436941035497743;
    msg.ctrl_imp = 0.48382814911903993;
    msg.rel_dir_x = 0.4998359123696563;
    msg.rel_dir_y = 0.49424772906759784;
    msg.rel_dir_z = 0.9065461434476579;
    msg.err_x = 0.2272588690722087;
    msg.err_y = 0.0300452597476093;
    msg.err_z = 0.5972540699334499;
    msg.rf_err_x = 0.9525270615263489;
    msg.rf_err_y = 0.4908662517033755;
    msg.rf_err_z = 0.23082547258838304;
    msg.rf_err_vx = 0.7480980479016865;
    msg.rf_err_vy = 0.5500469894547917;
    msg.rf_err_vz = 0.12548434533819774;
    msg.ss_x = 0.025011532357020694;
    msg.ss_y = 0.4096479466727022;
    msg.ss_z = 0.09172884794333203;
    msg.virt_err_x = 0.30836987169939345;
    msg.virt_err_y = 0.39667273318824803;
    msg.virt_err_z = 0.466547873332974;

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
    msg.setTimeStamp(0.8326714366162727);
    msg.setSource(58439U);
    msg.setSourceEntity(221U);
    msg.setDestination(52171U);
    msg.setDestinationEntity(161U);
    msg.s_id.assign("YVUDQKBECGWWAPUINKUKTCWHFVTOKCIX");
    msg.dist = 0.4484659811376125;
    msg.err = 0.4647155810760516;
    msg.ctrl_imp = 0.06314483082362565;
    msg.rel_dir_x = 0.9058824057091551;
    msg.rel_dir_y = 0.6492352029116536;
    msg.rel_dir_z = 0.8918572876188446;
    msg.err_x = 0.9600775778801351;
    msg.err_y = 0.30064585933186383;
    msg.err_z = 0.11170454080397174;
    msg.rf_err_x = 0.9008510952095372;
    msg.rf_err_y = 0.5330862807039763;
    msg.rf_err_z = 0.7750755560492205;
    msg.rf_err_vx = 0.07311552860867554;
    msg.rf_err_vy = 0.4918084510091828;
    msg.rf_err_vz = 0.9360816770893867;
    msg.ss_x = 0.19087748311632446;
    msg.ss_y = 0.9034682157323465;
    msg.ss_z = 0.8561559265143657;
    msg.virt_err_x = 0.38379111716527325;
    msg.virt_err_y = 0.6813832846328512;
    msg.virt_err_z = 0.8105319471174554;

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
    msg.setTimeStamp(0.9132642087927507);
    msg.setSource(5833U);
    msg.setSourceEntity(1U);
    msg.setDestination(12676U);
    msg.setDestinationEntity(83U);
    msg.s_id.assign("MMQKYVVSHUXITCNYFNKZXPDAYZZRVVQXRLGPPLFXNUHIIKWJBHZPBAIKOYFBOCEMUAUJRFSPJSIMWEJIAEFGODNHCHRWTOEREZDJJSCQQTBVYJFOVCGLEZGTIEZBUUNNXXRIPJVBVMMXKPYQSBLSYDDXTLJTVACCHRHLOTOWLKDRUGZYXKGSRFMQTTWKSRBCEQOSDPWCUHMPFHQUADSHJLKQIBALWFMNMDUBZLTFKGCWWDGVEQIEYGONXWNPZ");
    msg.dist = 0.5707752263095446;
    msg.err = 0.0329984667045079;
    msg.ctrl_imp = 0.7706250900284745;
    msg.rel_dir_x = 0.10228086970917794;
    msg.rel_dir_y = 0.2155045680782789;
    msg.rel_dir_z = 0.7519641066622644;
    msg.err_x = 0.7323185314616092;
    msg.err_y = 0.8258350878757268;
    msg.err_z = 0.01565879078100596;
    msg.rf_err_x = 0.07237153642390881;
    msg.rf_err_y = 0.3839886522918684;
    msg.rf_err_z = 0.6739210177587949;
    msg.rf_err_vx = 0.4391061431331068;
    msg.rf_err_vy = 0.03937650114939206;
    msg.rf_err_vz = 0.4919464581363657;
    msg.ss_x = 0.35719992652443466;
    msg.ss_y = 0.5392536312819709;
    msg.ss_z = 0.7326939048506013;
    msg.virt_err_x = 0.9639704083086839;
    msg.virt_err_y = 0.2960181873847888;
    msg.virt_err_z = 0.47709873019974947;

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
    msg.setTimeStamp(0.8565630928922994);
    msg.setSource(7123U);
    msg.setSourceEntity(107U);
    msg.setDestination(54161U);
    msg.setDestinationEntity(80U);
    msg.timeout = 24848U;
    msg.rpm = 0.8198621012051833;
    msg.direction = 106U;
    msg.custom.assign("ADYUMNQUROGFHYKTFAGKGDOUWKLXWLYZRSOFDESEUEGBIKDMMTIEDTRVORAXRCSUZLHVXKMZXSIFBDMVVPVHGYSSEKUSVGBDRGACJNTROSNNGHQEUQFDFYEZTEGBTCPKIXNAPTIBOGIJLPJIKBAVQCLHFXHMYNSWUZKCONSEEJPPAXLQHALJ");

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
    msg.setTimeStamp(0.715010109855642);
    msg.setSource(4326U);
    msg.setSourceEntity(84U);
    msg.setDestination(22473U);
    msg.setDestinationEntity(143U);
    msg.timeout = 9198U;
    msg.rpm = 0.661614150844196;
    msg.direction = 35U;
    msg.custom.assign("FGTGNDLEJZQXHUZCQEYHCNLBPTFEEGPOROMOAQAXQTLWGBDCZMCHDMCUMGUPMRDGJUWSVEXCNAJDIYVVWRQHRBOSBVKQCWOBXQKIRAZMVOYFYASUWGEWNJLIBQEHLVGUGWJQALDLZRWXATJBKPSFFBXOZJBNSIHQGBRYMPNIHSXTEPDRIKIFPAYHZVKEMTNWRKKZODWSFOFYYCCYHXFDTTNZSIKJJ");

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
    msg.setTimeStamp(0.968676703553179);
    msg.setSource(6328U);
    msg.setSourceEntity(56U);
    msg.setDestination(35225U);
    msg.setDestinationEntity(34U);
    msg.timeout = 63367U;
    msg.rpm = 0.6095512250522435;
    msg.direction = 178U;
    msg.custom.assign("IPDVZZECAZRGETBRRJUGHAEUGWQZRNCSRYBWETNLRUTKHMWDJBQUEPOKTMFNJOWYTGNFWVV");

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
    msg.setTimeStamp(0.8799179372898268);
    msg.setSource(53903U);
    msg.setSourceEntity(141U);
    msg.setDestination(38823U);
    msg.setDestinationEntity(30U);
    msg.formation_name.assign("KEXZXOADIGCCLCOOEXRIWJSWXKGONTWKQPNEZUGLJPBJUDGQORBCAFVLYFPLTQSHLVNZGNBTPVNVXODMRJZJFQVGBBYIYZHPRMXCTZPTLRHX");
    msg.type = 108U;
    msg.op = 190U;
    msg.group_name.assign("EKOZBKLRIMSWIIHKUUHPBRRKAYBTKAVWPIMFZIWPEHYDZQPXRAKUADGIYGCMRCGSQINXNQPSOWDKVXUJGJXDVDBRFYAXPVSBNOVRFZCIMELSVGSIKPJPIGXWTLBRETFHPVQJWXLEGMWVAZNXPJG");
    msg.plan_id.assign("TFCAIJFIWOJFAHFLSIFLOJCAVLIGHTAMQUNKLHGIEVMSDQQPRGTYBJCUENKGTYPVZUNQBIOTJETSDEYNCUBMWYFHYCPSXMGSPRTXEPHGZUDGNPPOEPRBHODPBNINZQND");
    msg.description.assign("AUPZXDAKJGQGNPMKAXKLYCVZZKDOCUYMILEUFNRBAS");
    msg.reference_frame = 199U;
    msg.leader_bank_lim = 0.41787684242936685;
    msg.leader_speed_min = 0.7456415962739584;
    msg.leader_speed_max = 0.6615217076608384;
    msg.leader_alt_min = 0.2015906824976459;
    msg.leader_alt_max = 0.46761791716311485;
    msg.pos_sim_err_lim = 0.739934205112768;
    msg.pos_sim_err_wrn = 0.14777186090068262;
    msg.pos_sim_err_timeout = 23590U;
    msg.converg_max = 0.5505952121035037;
    msg.converg_timeout = 35409U;
    msg.comms_timeout = 4706U;
    msg.turb_lim = 0.7284975576212419;
    msg.custom.assign("RIVWHWCSYFZNIMKQDPSXAJGSBLXCOYBVEKTZNDHZMBPSJFQVHEALFBWDRJFYNUGMMLAEZOYTATKGDTEZAFSOCTRWOLAKBINTZXOSGQYJOKXWMDFJUHEPZGVAPGAKSIMFPSUDXXLTXOVDVRTCHB");

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
    msg.setTimeStamp(0.9460998359570373);
    msg.setSource(54864U);
    msg.setSourceEntity(183U);
    msg.setDestination(9578U);
    msg.setDestinationEntity(133U);
    msg.formation_name.assign("YNPLVRDIHOTVLSPVTAHOKRRXCPSNVQYEVJCNFJELZDZWNJQZYSIXSUTIGZAZSEPXWPWGRQFGLATCAZIAJIIPUKFQTOXTKERBEXLMHLBDCMZUGVSQRRKDPXJCTWIDYHDFVPQAWBMOUOVFDECROMKJGXBL");
    msg.type = 177U;
    msg.op = 228U;
    msg.group_name.assign("WVDOGYAZHQAGQDTFTDCOTMXNSFFXDWZY");
    msg.plan_id.assign("TBGQSXGXPIZQSRQRLOOALXPCUCOBUAIXTMYGQBIHYIOFCSDNMBPKKEXXPYVMYVOWBJBLLGZGIEESJWNZWVOBEQTGJXUFGDBZKJRHHFXWKFZNGIEXHEUQMCRDFYJWLAYIEIEWRCYANFUCMOAHRB");
    msg.description.assign("PQFBHZRFVNCCKZDBSKRWQCJDXWVJOJIHAIPJFNNKAPBPWYGYICNVGUXMTAUHHPUVDKFSUQSHVBMNSUBEBNYIMXUZI");
    msg.reference_frame = 24U;
    msg.leader_bank_lim = 0.6007141023691799;
    msg.leader_speed_min = 0.8051462549263587;
    msg.leader_speed_max = 0.5601149450697286;
    msg.leader_alt_min = 0.3236819212705868;
    msg.leader_alt_max = 0.1973018698016935;
    msg.pos_sim_err_lim = 0.2952723143823738;
    msg.pos_sim_err_wrn = 0.7995534786925702;
    msg.pos_sim_err_timeout = 39994U;
    msg.converg_max = 0.12785734607378063;
    msg.converg_timeout = 4628U;
    msg.comms_timeout = 13235U;
    msg.turb_lim = 0.41659532187432435;
    msg.custom.assign("FSAYSZWKCWPYHFTMKTYOBMWPCAXXVXAVSWIAPFINYLHKYBWNCKXAUIUWZRUUPCDVDTRSINSZLUEDOGNZKBFJPVHXROWWGXBBHILNIKVPRQOVDGYSTCMMBZEXMQWHGTQIUJCIQZFEHLQDEVPVAERXTHSOQJPUJMGSHLPATMDQLRBDRGGOBZSYNWLHURIHONCSJQLYKUXATBOZKFZGFBGM");

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
    msg.setTimeStamp(0.8480015723030528);
    msg.setSource(61170U);
    msg.setSourceEntity(104U);
    msg.setDestination(36660U);
    msg.setDestinationEntity(68U);
    msg.formation_name.assign("IBLEQMAFULLMJSFFDTPMNUJXVUCGGUWOFAPXQTNIXQOONLCCIZYWTU");
    msg.type = 186U;
    msg.op = 134U;
    msg.group_name.assign("YNPZWOGCQSGWFOFJVZWFFSDAQTCHRWIKUZZDNTDBLTPXKLPLBPIAYRKFJSTXGSPRLQMSOFDKEVGOCEBXKSXIRXHQUOWMVCQZLNVYUZNTEEAJDWCRGVZIAPHTEYCBMIVLEQXWTIFYRUIUQPWCOQSZULVGHKAJYOPJKLQEDKXBJOGPTNRADKEFJWVMMHEAHSMFOFRTLYMIVGAHBNCEBOCADWZUYLBGYGMNXKHYMSU");
    msg.plan_id.assign("MMWZKRHNSTTXXOGZPPUWPNIDLOLHAWJBFUQXEIJJJFQOCACKEWCUFCKQDYAVNKQWUAYJNDPZEBD");
    msg.description.assign("SHZYALEKFPPXDUIRMHRJNJBBKGOWBWDJLYACFAEQSMGDPBEOVUQYOXGMMEEIOQBYPARSCEUT");
    msg.reference_frame = 42U;
    msg.leader_bank_lim = 0.993046934127614;
    msg.leader_speed_min = 0.5060946728585366;
    msg.leader_speed_max = 0.08498928370354808;
    msg.leader_alt_min = 0.32542310272466024;
    msg.leader_alt_max = 0.936073447126609;
    msg.pos_sim_err_lim = 0.7956472523731515;
    msg.pos_sim_err_wrn = 0.28567651567608987;
    msg.pos_sim_err_timeout = 38726U;
    msg.converg_max = 0.19075861483273682;
    msg.converg_timeout = 11871U;
    msg.comms_timeout = 44507U;
    msg.turb_lim = 0.018287598856043696;
    msg.custom.assign("UTLRXNCZZVUJYJWIVGFJWGSLCOHYIBZOTEUMSFSBTQUPGGVNDQDTAQREOUXFGYNDNOEZBJZNSRVFOWAFHUKSGZGHEBKOXXDTKTEYWVXSMDFILDYQDZHJRWKXMLPLPVCEIRILWBLUFEXOFIARYGGWBPVHIQEYXPBVNLHOPMHW");

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
    msg.setTimeStamp(0.765177450951975);
    msg.setSource(38554U);
    msg.setSourceEntity(74U);
    msg.setDestination(20085U);
    msg.setDestinationEntity(90U);
    msg.timeout = 57806U;
    msg.lat = 0.3340434170639053;
    msg.lon = 0.36192373689894375;
    msg.z = 0.16689227349598657;
    msg.z_units = 28U;
    msg.speed = 0.8906674961759072;
    msg.speed_units = 253U;
    msg.custom.assign("LDWGCRCKHYXHJAARTVKVTKGIYKGSUVBALUNICXXGSQU");

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
    msg.setTimeStamp(0.23750116311291125);
    msg.setSource(28805U);
    msg.setSourceEntity(73U);
    msg.setDestination(55238U);
    msg.setDestinationEntity(253U);
    msg.timeout = 48000U;
    msg.lat = 0.5868436210784376;
    msg.lon = 0.23943322139817724;
    msg.z = 0.26352943746114155;
    msg.z_units = 220U;
    msg.speed = 0.9413723606316999;
    msg.speed_units = 140U;
    msg.custom.assign("DGJGSJGAOKFIDCUDPMAWSBTUXYTTESMPZIXRHVCNQLYIJUADCRFBUVVCRHGZSFEDVXUPQKRVSZIFPBOONLGTRKIBYWIAABLGQLYMCTWQXLEYWUBBQGJFMUEBKAHGLMJCJNCKRDPPGSVMLXOAUOOPRKZKEHYJKR");

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
    msg.setTimeStamp(0.41555650722227633);
    msg.setSource(40837U);
    msg.setSourceEntity(136U);
    msg.setDestination(27444U);
    msg.setDestinationEntity(42U);
    msg.timeout = 63118U;
    msg.lat = 0.3513599793483334;
    msg.lon = 0.5074161350275216;
    msg.z = 0.47963740539966004;
    msg.z_units = 214U;
    msg.speed = 0.5513727181406279;
    msg.speed_units = 202U;
    msg.custom.assign("LHRGBRMMYNUQYYJFZQCAUETXPKBOQGARUZA");

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
    msg.setTimeStamp(0.7893161001250483);
    msg.setSource(42623U);
    msg.setSourceEntity(193U);
    msg.setDestination(50314U);
    msg.setDestinationEntity(134U);
    msg.timeout = 31887U;
    msg.lat = 0.8084228988010417;
    msg.lon = 0.5562386756198682;
    msg.z = 0.5078246649798619;
    msg.z_units = 167U;
    msg.speed = 0.6054126235133854;
    msg.speed_units = 152U;
    msg.custom.assign("ZQQXVHCVMHCRWFTJWHPPJBETMCWGIJZVOHIUOSRQKTZRLSLASYFBZAYMLSUVDFLJWIRXGMDKMWAQBGWGVDJPXGNNKVAFITAIGRXNREZKVRTUDGFHOWLSZYSPDZCTTCEBQWEIKIPNQCUUQYECJHXMHHOKNPTQXVDP");

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
    msg.setTimeStamp(0.24342226262549915);
    msg.setSource(16360U);
    msg.setSourceEntity(91U);
    msg.setDestination(13441U);
    msg.setDestinationEntity(64U);
    msg.timeout = 63175U;
    msg.lat = 0.17103224682569096;
    msg.lon = 0.5007322427350214;
    msg.z = 0.07352979181753538;
    msg.z_units = 244U;
    msg.speed = 0.838975194332896;
    msg.speed_units = 21U;
    msg.custom.assign("TRERNTKHATUOXEYSKBNAPJVWFAECBNTLQVEMGIDJPUSQTRKCZXABKZNWIVKFDMKHUJCSKDRHJXBTUSKDMPCZFFUREQPZFEWBJMXUDLJTEAMMCFNOZWCJQYLSEOGWBFUTVIOMBVZHGFLLACYXUICIMEYUHGYNEPWDCJDBOQV");

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
    msg.setTimeStamp(0.4817725572961463);
    msg.setSource(15027U);
    msg.setSourceEntity(156U);
    msg.setDestination(20496U);
    msg.setDestinationEntity(143U);
    msg.timeout = 21590U;
    msg.lat = 0.7355793100592322;
    msg.lon = 0.11805907045217645;
    msg.z = 0.15117224900760917;
    msg.z_units = 9U;
    msg.speed = 0.26187876738294114;
    msg.speed_units = 196U;
    msg.custom.assign("SXTIRIKQWOWHETVCRJYKMRDRUEZUFMWUQYBZATBCEFHZPWRMOGMZCOZJGNACHVPXNSXK");

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
    msg.setTimeStamp(0.045050413583055615);
    msg.setSource(57739U);
    msg.setSourceEntity(188U);
    msg.setDestination(3356U);
    msg.setDestinationEntity(33U);
    msg.arrival_time = 0.2470313454814812;
    msg.lat = 0.6471085304384346;
    msg.lon = 0.6014502802609065;
    msg.z = 0.7872981769276923;
    msg.z_units = 154U;
    msg.travel_z = 0.5159334157150124;
    msg.travel_z_units = 241U;
    msg.delayed = 176U;

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
    msg.setTimeStamp(0.4300595322649161);
    msg.setSource(43001U);
    msg.setSourceEntity(212U);
    msg.setDestination(53921U);
    msg.setDestinationEntity(36U);
    msg.arrival_time = 0.13391019878948973;
    msg.lat = 0.16186549675037787;
    msg.lon = 0.8866437715918876;
    msg.z = 0.5383158037764917;
    msg.z_units = 57U;
    msg.travel_z = 0.7655659043557211;
    msg.travel_z_units = 103U;
    msg.delayed = 229U;

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
    msg.setTimeStamp(0.03691281062654839);
    msg.setSource(51214U);
    msg.setSourceEntity(215U);
    msg.setDestination(38853U);
    msg.setDestinationEntity(102U);
    msg.arrival_time = 0.32609082659491595;
    msg.lat = 0.7391390142158859;
    msg.lon = 0.6495174792409786;
    msg.z = 0.7788528045868645;
    msg.z_units = 21U;
    msg.travel_z = 0.4399800255880817;
    msg.travel_z_units = 138U;
    msg.delayed = 227U;

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
    msg.setTimeStamp(0.4186832743402601);
    msg.setSource(49662U);
    msg.setSourceEntity(70U);
    msg.setDestination(13696U);
    msg.setDestinationEntity(238U);
    msg.lat = 0.8364087494084237;
    msg.lon = 0.15938246873850248;
    msg.z = 0.20183210710416577;
    msg.z_units = 118U;
    msg.speed = 0.47250363302459486;
    msg.speed_units = 168U;
    msg.bearing = 0.7558736943344748;
    msg.cross_angle = 0.6773946467294272;
    msg.width = 0.26749566856948237;
    msg.length = 0.17336694626483484;
    msg.coff = 131U;
    msg.angaperture = 0.7521204243264096;
    msg.range = 46565U;
    msg.overlap = 253U;
    msg.flags = 125U;
    msg.custom.assign("ZYYNDNWQBSGPHCKERQZIHYITMOETLEPNFMKEHHBXCJWFQBESODRWJLJDZGYAIZVLIRFQERZLGVOHTUVYWGCFGATAMTNN");

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
    msg.setTimeStamp(0.2076663033207634);
    msg.setSource(34031U);
    msg.setSourceEntity(86U);
    msg.setDestination(27664U);
    msg.setDestinationEntity(110U);
    msg.lat = 0.16344362925105027;
    msg.lon = 0.8420702782561615;
    msg.z = 0.5679708563282846;
    msg.z_units = 63U;
    msg.speed = 0.18878495571315224;
    msg.speed_units = 23U;
    msg.bearing = 0.95474581959556;
    msg.cross_angle = 0.5485657758958782;
    msg.width = 0.533068808623801;
    msg.length = 0.50603842085056;
    msg.coff = 94U;
    msg.angaperture = 0.5532780013558095;
    msg.range = 30761U;
    msg.overlap = 204U;
    msg.flags = 218U;
    msg.custom.assign("UOTETORDWMXFKCZSNEJMOWGFQJJGBZKUADKIHCKKNRNWSBLYAHQGYTKOOXQMUBRUWIIALZAXAZGBEARBZAIOGVMBZHYWRNRKOUEDBOFFPPVHEUGJJFELFWENDYRWUQG");

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
    msg.setTimeStamp(0.7960398507272933);
    msg.setSource(51678U);
    msg.setSourceEntity(210U);
    msg.setDestination(15637U);
    msg.setDestinationEntity(251U);
    msg.lat = 0.9821878233640808;
    msg.lon = 0.6890582049565532;
    msg.z = 0.36822939334585003;
    msg.z_units = 240U;
    msg.speed = 0.2798777193576786;
    msg.speed_units = 116U;
    msg.bearing = 0.26004548164683683;
    msg.cross_angle = 0.9273274559550766;
    msg.width = 0.6438573910123241;
    msg.length = 0.40569866295717116;
    msg.coff = 63U;
    msg.angaperture = 0.020442816224727545;
    msg.range = 45967U;
    msg.overlap = 53U;
    msg.flags = 232U;
    msg.custom.assign("DBHWQBFBZPZHPVUKELODFCBWMWMJTATPBMOSXKRTOMJDZMERCXNCUWSATVWHEKWIZXLJCQUBGLPAJBGAJKWSOVUMHUNYHDAYIUSGROCNQFKIGLPMKDYTPZNXPSQNXJEAXDELMCDYFCMGVLGIOKASEPFBSQANIZFVWETYIIQDSNTRIEYORVHIGITVLFWUOGJRCJKUQ");

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
    msg.setTimeStamp(0.8925113137524654);
    msg.setSource(48497U);
    msg.setSourceEntity(188U);
    msg.setDestination(49957U);
    msg.setDestinationEntity(43U);
    msg.timeout = 54427U;
    msg.lat = 0.47142789636576976;
    msg.lon = 0.20400473040707967;
    msg.z = 0.2993263536660805;
    msg.z_units = 124U;
    msg.speed = 0.49355095881215927;
    msg.speed_units = 167U;
    msg.syringe0 = 220U;
    msg.syringe1 = 47U;
    msg.syringe2 = 225U;
    msg.custom.assign("NGFVIQZHQWSPUDKRAMRJLBVPXXKXRNHSMCCSEYZGJDW");

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
    msg.setTimeStamp(0.5389753099994993);
    msg.setSource(56873U);
    msg.setSourceEntity(143U);
    msg.setDestination(31607U);
    msg.setDestinationEntity(86U);
    msg.timeout = 39474U;
    msg.lat = 0.014035943097068126;
    msg.lon = 0.6630081667766629;
    msg.z = 0.5507611105653026;
    msg.z_units = 49U;
    msg.speed = 0.6489071936204283;
    msg.speed_units = 201U;
    msg.syringe0 = 201U;
    msg.syringe1 = 64U;
    msg.syringe2 = 233U;
    msg.custom.assign("WKHHURXKZNQTIVDIVZTWGMPVRFFVRZSQBBWKSOOBKWEVIIEODMOLWVNKKQDFTGBYCYADXTAOIEOTUFSYLZMGIPAKQPHXMYBZEKMDRAQXTNQVJCJRSERMJNVVLUGGCNEINIEMFWMPRDEQYSW");

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
    msg.setTimeStamp(0.023081164155179357);
    msg.setSource(28597U);
    msg.setSourceEntity(28U);
    msg.setDestination(16768U);
    msg.setDestinationEntity(74U);
    msg.timeout = 19487U;
    msg.lat = 0.6649708973168319;
    msg.lon = 0.6498346472117457;
    msg.z = 0.34049091256230535;
    msg.z_units = 97U;
    msg.speed = 0.674660375000469;
    msg.speed_units = 145U;
    msg.syringe0 = 46U;
    msg.syringe1 = 101U;
    msg.syringe2 = 113U;
    msg.custom.assign("UDSJDLPXSCYXELRTHZLWIEYFCSSJPIDHVVUEBKZICSORUAJDBMYXGVAHTZOEXFMBIPFBOZGVAGGPBEIXJCGOMMQNQBNYKOHLXZWISONTAFZQSUKCYWYWZQKCKQQMXMIRJIQSPAKTVULNHQTHMMKAUWKQRGLCLHNKLMAPZBRPRODBNPHNWCIEWBGRGVWDCSPTSDTEFRGRFUZVDFJNJRJQ");

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
    msg.setTimeStamp(0.3590332679527085);
    msg.setSource(40013U);
    msg.setSourceEntity(131U);
    msg.setDestination(53825U);
    msg.setDestinationEntity(136U);

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
    msg.setTimeStamp(0.7431390512304308);
    msg.setSource(3174U);
    msg.setSourceEntity(181U);
    msg.setDestination(24370U);
    msg.setDestinationEntity(69U);

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
    msg.setTimeStamp(0.7384508251462232);
    msg.setSource(10983U);
    msg.setSourceEntity(148U);
    msg.setDestination(57059U);
    msg.setDestinationEntity(107U);

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
    msg.setTimeStamp(0.79308692999216);
    msg.setSource(13759U);
    msg.setSourceEntity(177U);
    msg.setDestination(34051U);
    msg.setDestinationEntity(78U);
    msg.lat = 0.6530695563291403;
    msg.lon = 0.9816151394412145;
    msg.z = 0.9316855796781217;
    msg.z_units = 35U;
    msg.speed = 0.8348463807151993;
    msg.speed_units = 69U;
    msg.takeoff_pitch = 0.18359438401626083;
    msg.custom.assign("AJSARDZBYDBNVNIPRQIGTYKVNXNTJJHCUFFUCXWBCGCUCWMAZALHVTJSIQEPQZOERNCRUVWVXYLBJAODLPK");

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
    msg.setTimeStamp(0.2282756336090075);
    msg.setSource(21897U);
    msg.setSourceEntity(126U);
    msg.setDestination(52686U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.2577931686538375;
    msg.lon = 0.46383471414933963;
    msg.z = 0.03925878649933234;
    msg.z_units = 178U;
    msg.speed = 0.030562870063413294;
    msg.speed_units = 59U;
    msg.takeoff_pitch = 0.5317334830790851;
    msg.custom.assign("QXUTEEZFFBQARZWGZKMZVOWLYTGCSPNLLCSTHTDZNFGIQALBVDNOWMDAOGUWDHGJKFJCIIHOTHQLAMCJMNPHPBTXCMKXEZIKXNYKMXTXSAPZV");

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
    msg.setTimeStamp(0.6581664772742801);
    msg.setSource(33512U);
    msg.setSourceEntity(139U);
    msg.setDestination(9044U);
    msg.setDestinationEntity(80U);
    msg.lat = 0.18757646593721455;
    msg.lon = 0.4120026248108849;
    msg.z = 0.5494233549633205;
    msg.z_units = 205U;
    msg.speed = 0.11597415182639215;
    msg.speed_units = 94U;
    msg.takeoff_pitch = 0.31962989049338886;
    msg.custom.assign("EKZVDTJVSDWHDBDBNCMFWFXKJFZTJPXFWMKOHLUJPNCUHFNZOXUNQYDHHXFEGGXMV");

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
    msg.setTimeStamp(0.48001229325863004);
    msg.setSource(35275U);
    msg.setSourceEntity(108U);
    msg.setDestination(31353U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.8652720634415572;
    msg.lon = 0.7882566563389058;
    msg.z = 0.12552321199220906;
    msg.z_units = 39U;
    msg.speed = 0.24536143483438866;
    msg.speed_units = 243U;
    msg.abort_z = 0.8347543674014504;
    msg.bearing = 0.03680730913708852;
    msg.glide_slope = 178U;
    msg.glide_slope_alt = 0.8910000118985858;
    msg.custom.assign("PQQIAOVEVEWUBCADGZJNDHUCVBUMKSTCCYHXGMYSCZOJCQZURVOHHFOXDNYFYITIVAZJNGRHCDGDUMN");

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
    msg.setTimeStamp(0.08017093938639908);
    msg.setSource(5333U);
    msg.setSourceEntity(13U);
    msg.setDestination(63007U);
    msg.setDestinationEntity(55U);
    msg.lat = 0.7502857076348775;
    msg.lon = 0.7314762098409144;
    msg.z = 0.6563203548860288;
    msg.z_units = 241U;
    msg.speed = 0.39654134236513383;
    msg.speed_units = 150U;
    msg.abort_z = 0.7891674501506847;
    msg.bearing = 0.9722840353146873;
    msg.glide_slope = 55U;
    msg.glide_slope_alt = 0.88942956402364;
    msg.custom.assign("NBCMENGASVOPXXUSNDOLFILHZWIBKNXD");

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
    msg.setTimeStamp(0.8792914351845327);
    msg.setSource(35984U);
    msg.setSourceEntity(167U);
    msg.setDestination(61664U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.13752173764280995;
    msg.lon = 0.31169557191957953;
    msg.z = 0.04098352674152361;
    msg.z_units = 101U;
    msg.speed = 0.3991707736058857;
    msg.speed_units = 56U;
    msg.abort_z = 0.7234559969837233;
    msg.bearing = 0.9124468385209366;
    msg.glide_slope = 227U;
    msg.glide_slope_alt = 0.06344573870961012;
    msg.custom.assign("NTRIUCYWSCW");

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
    msg.setTimeStamp(0.8855450036044243);
    msg.setSource(1900U);
    msg.setSourceEntity(168U);
    msg.setDestination(32879U);
    msg.setDestinationEntity(222U);
    msg.lat = 0.6342739249425325;
    msg.lon = 0.045372200746280233;
    msg.speed = 0.930571904139088;
    msg.speed_units = 101U;
    msg.limits = 23U;
    msg.max_depth = 0.9129770503754221;
    msg.min_alt = 0.1788129952604922;
    msg.time_limit = 0.8861697028988113;
    msg.controller.assign("EPCNJGWXYTSUYIDONRKHKHSPIQZUVELWQQFVHYXIMYLRTTIMUPVFZFNDOYSYRXAUUBBKXRXETGLRDHVFSKNSBJGPJYYBDBUOEFXBQIDGUOGAOUGKPSXAIBCUZHRLQNTQVHBVODWEPJLHRVCJZFFEMQMXCSBOKXFTILZAEPKCBPMQAWLAEDPATNCZ");
    msg.custom.assign("GRVXUXHAIDLYXASRVQIBAUTECBCROUCGNOXSCTZPSPXINQUKYXIBCONPKRBDHSEVAKKEUNFWSTTXZEFYJBGGKZFADYRJZRWFMHLVWNEGPIYLZVATHDWQVYKIUMOTSHVLIOMLBSZZPUUCYVPIDMQKPYZTQELCWDMQJKARKTXELOQQYHGM");

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
    msg.setTimeStamp(0.6801201613394385);
    msg.setSource(35971U);
    msg.setSourceEntity(19U);
    msg.setDestination(47288U);
    msg.setDestinationEntity(190U);
    msg.lat = 0.2701474810132031;
    msg.lon = 0.3639762560613523;
    msg.speed = 0.5393675099880507;
    msg.speed_units = 199U;
    msg.limits = 177U;
    msg.max_depth = 0.16662533761799359;
    msg.min_alt = 0.6252082182091114;
    msg.time_limit = 0.7252618827006071;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.28641804861197984;
    tmp_msg_0.lon = 0.3416387288487057;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("WMAJZIPZNBSXBAMSLREKJXENWAULWFNUXLZFNZKWGKCHAEARRGWSCOXYMMVCZBGILLYTFQPRXDHENBRYWDOSVYQGNZKPVQMVLHTJMYKZCDQFXUJPMFZQLMXXSKNHURBYAAPZHABBLEOJTUIWTHDNMFEYCJCQ");
    msg.custom.assign("JCRQAWEGUBTJBIFCWOYJPZHESNVWOMHVUWDXBREGMLARCGQAVHWPUXOYKTARNPSKJFQZFCDDUTMKKTPOAHJNGYYKTFTWGLCAMODODPBOSLJXSEKNVLBTREKFKSRETHFRSRSDIMWIUOJJFYHNLHNEAVIACSCBBXFQMXGDZBELYMGQVGQSNNHZDULVUINCIZVZYAPP");

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
    msg.setTimeStamp(0.46127643280137387);
    msg.setSource(15517U);
    msg.setSourceEntity(170U);
    msg.setDestination(39335U);
    msg.setDestinationEntity(87U);
    msg.lat = 0.4032138183536752;
    msg.lon = 0.6888660848855945;
    msg.speed = 0.4873222594470392;
    msg.speed_units = 14U;
    msg.limits = 29U;
    msg.max_depth = 0.3210589799066711;
    msg.min_alt = 0.7838868834618813;
    msg.time_limit = 0.27629874246341446;
    msg.controller.assign("FYUXWDPLAKRDKRMJQKETOTVSNLYFXWXPQXQCIYZOBWMWHYNDVWNUSJHLJUZTZHJPSWDISKXNUASXMBXQGSINSUHZCKDOSOVHZQOIBGTLCHKCLBJYQOGFBJMIETRCUVZQZDLJGHPVSHTVUM");
    msg.custom.assign("XBWDQGEDROQTJPLWTKRTMTFSCWFVVOTXZVNPQBMQAKNJ");

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
    msg.setTimeStamp(0.48122288040921757);
    msg.setSource(18302U);
    msg.setSourceEntity(59U);
    msg.setDestination(16050U);
    msg.setDestinationEntity(12U);
    msg.target.assign("ZTVWFTTUPYWMTFMAHJARBQHOKBAGRRPUIQSAUEJYXXSEWFCLIFZLEBYVDBPLWOGOTMVGCJWHTYRTLSERINKEONTDFTKMWLDJYCHQNEMDOECZJNPCFAKXIUDJRBLIGGEWGDCJILKMZESZCLYCHSADMBZABF");
    msg.max_speed = 0.04462290901062582;
    msg.speed_units = 30U;
    msg.lat = 0.6966878250077408;
    msg.lon = 0.12096679185645087;
    msg.z = 0.7590357021153932;
    msg.z_units = 247U;
    msg.custom.assign("KKUJPWBUZWZAEJZHZOFQNFYGAFYKOEVUBLYGUGVNNAWJCDQSLCGHQXTCPYZNOXKUGWXOLDCABMFMZSTDRHWNVNZYDRLVTLYNTXRUSFEVJPSVXVJMKCIQJTKXGJGBKICHARFUENRUUSOAIRTDYMJMPPSDEUBPTXFDHIDSMAQEVPJOSETWTEHIBZFFOQFMYYHIORVLWCQHJSKAGBOQR");

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
    msg.setTimeStamp(0.9943247497731851);
    msg.setSource(24509U);
    msg.setSourceEntity(87U);
    msg.setDestination(24941U);
    msg.setDestinationEntity(177U);
    msg.target.assign("ZGVVMMCMXATWSTOQEBCSDYPZXOIEJLJFASXSDHFARERPFFOTDPGUXKKXQZTTFRGHUYTCDGHVEHUYSRNCUPNIAGMOPUXOZVHNOALAILWLPBUBZHFJYBOWIIXOQRNWDIQJDWQLLXGAME");
    msg.max_speed = 0.47291354737956903;
    msg.speed_units = 141U;
    msg.lat = 0.5119619119129382;
    msg.lon = 0.11544575858474215;
    msg.z = 0.6482168773153918;
    msg.z_units = 234U;
    msg.custom.assign("QJXMCJGKTNJWHMURBZQSRONTQMZQVSZGSDPYPUBBOYCYNGDDNECLUKIAIVQNKPECWTTBQCCEEYSMRMRSFXRBHSUVSRJZPRAMXRDJDLAWSPFYZUYXFCGAEYZPRUGAOXEEGFYYXCGXDMINQCNWFKLLWTXAQUHK");

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
    msg.setTimeStamp(0.8865925491494067);
    msg.setSource(19337U);
    msg.setSourceEntity(155U);
    msg.setDestination(8557U);
    msg.setDestinationEntity(86U);
    msg.target.assign("SMTZBQXPIFGYQCOJNMMNBPTFVODKOHJXDGGVRVKZNGEECRPNHOHSVTJEKCRPKWU");
    msg.max_speed = 0.09799502346463096;
    msg.speed_units = 245U;
    msg.lat = 0.5170530867014616;
    msg.lon = 0.02205032216443048;
    msg.z = 0.18904855822519895;
    msg.z_units = 27U;
    msg.custom.assign("GAAEWDWNERWQRMPWOQTTNTMZDLDXHTONOEKKIQXDUBYVWYHKKJYBYUSKLRGJCYSAKROCFMKITZLTAAEXVQEGUUSVZWMWZJGTCGFQYJVHOEIIRPEBNJWYINLPBFACMHGGXTBDEIPFBOFMSSKQXXOVBPPRSBEDLNFUZZJXZUUCHHQUIDM");

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
    msg.setTimeStamp(0.891618194617426);
    msg.setSource(30256U);
    msg.setSourceEntity(30U);
    msg.setDestination(6589U);
    msg.setDestinationEntity(254U);
    msg.timeout = 64617U;
    msg.lat = 0.5001481102551371;
    msg.lon = 0.24522431843215198;
    msg.speed = 0.33752484608847344;
    msg.speed_units = 13U;
    msg.custom.assign("HAZUEAHILLPVITAQMXJJNHOILWOQDDGFPAPEBOIEPWVTXFDPZRZMSIUQBYFLLFZCMRENBOSXVGEMUZYZFWMBSCHRQALPEYNYMWLCNGEKMUWXFUYRMDAJMTNYUHQBTVSVVRFPWNBWKSOGEAKSYHBROASHNQHHIDGXXOCBNQSCCDINTGRQVJSCCPTYUAYCPWBFJLREJMWFKKDKUUY");

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
    msg.setTimeStamp(0.4085041076543514);
    msg.setSource(19106U);
    msg.setSourceEntity(238U);
    msg.setDestination(25000U);
    msg.setDestinationEntity(96U);
    msg.timeout = 51529U;
    msg.lat = 0.3926826255088013;
    msg.lon = 0.464166974837937;
    msg.speed = 0.7055884043328714;
    msg.speed_units = 123U;
    msg.custom.assign("CQPOONIZETDTHXBJTGHCYMDJKFNDBGVWXIQPAYQRSJSDCY");

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
    msg.setTimeStamp(0.7410858385967993);
    msg.setSource(26785U);
    msg.setSourceEntity(48U);
    msg.setDestination(22131U);
    msg.setDestinationEntity(59U);
    msg.timeout = 28449U;
    msg.lat = 0.8014789762169876;
    msg.lon = 0.6398672092365572;
    msg.speed = 0.7772391577778576;
    msg.speed_units = 69U;
    msg.custom.assign("ORZQKSAMLSTJTUGFRIEHPLWHJICYYRWJIVDIELOTACDEFVDXRFCGZCNWTSTQSFBYIGFHCKRZWGPAMYWOYOVULOFNPJPJAEILNHKVMWSKTKTMTLBIELRFQDMZOKAAPASUBBSGQDNGBEWZHGKKHXUZXWIYNHRPLLJWUAFPNBXPYCFOEOZYKXLAYMDHVDRWFPEENZJBCIUMTJNDOMDKMVEXCHDHRQSOZUYQJVNQVXIAVQSZNMQPTRCBXG");

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
    msg.setTimeStamp(0.670545525283765);
    msg.setSource(59183U);
    msg.setSourceEntity(142U);
    msg.setDestination(28521U);
    msg.setDestinationEntity(242U);
    msg.lat = 0.5951108309848637;
    msg.lon = 0.3013047435718058;
    msg.z = 0.2908854721526082;
    msg.z_units = 48U;
    msg.radius = 0.67011182080854;
    msg.duration = 62350U;
    msg.speed = 0.012167169009343004;
    msg.speed_units = 11U;
    msg.popup_period = 903U;
    msg.popup_duration = 18277U;
    msg.flags = 210U;
    msg.custom.assign("VDOTYQRMFOAXSJERYZVICIOFLXSFYRZGEOUSXCSQMTSPDGGLZTWIEKMJJJXCZNVCQUOAJBOLVBUZGVUAGNFTGBWPDFRIUSQPNSYWIHPYDCAYJQKZXLIBXHAHPCRJGZYINMNAORPDLHLQBHBQURUDODGLNFTKEFNTESQMVYAWTOXNMPSBQKERBEJNDYCTIKOBPWWC");

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
    msg.setTimeStamp(0.48782497250623);
    msg.setSource(65056U);
    msg.setSourceEntity(154U);
    msg.setDestination(10879U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.02178105010795739;
    msg.lon = 0.31651696747439195;
    msg.z = 0.8435313446467767;
    msg.z_units = 48U;
    msg.radius = 0.5368732548461564;
    msg.duration = 17665U;
    msg.speed = 0.06823932804889565;
    msg.speed_units = 163U;
    msg.popup_period = 63758U;
    msg.popup_duration = 32996U;
    msg.flags = 107U;
    msg.custom.assign("XXQCWLRBXNTUJDZUAMD");

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
    msg.setTimeStamp(0.06522635945627908);
    msg.setSource(13511U);
    msg.setSourceEntity(76U);
    msg.setDestination(53633U);
    msg.setDestinationEntity(234U);
    msg.lat = 0.6644987412076147;
    msg.lon = 0.27470941181219244;
    msg.z = 0.17247973347945278;
    msg.z_units = 254U;
    msg.radius = 0.29998811452262764;
    msg.duration = 10213U;
    msg.speed = 0.28303983878658356;
    msg.speed_units = 216U;
    msg.popup_period = 29364U;
    msg.popup_duration = 36015U;
    msg.flags = 170U;
    msg.custom.assign("SMUOWTJLKAQOGHYXMDPAZSQSXCTZMTEMMYRUNGBLFAJVTDYGGVLJFRCFUTNVEWQDMEYVNHUPSGIQGRWIELUBCVKTBYKLPJ");

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
    msg.setTimeStamp(0.13041867352476733);
    msg.setSource(40164U);
    msg.setSourceEntity(66U);
    msg.setDestination(39353U);
    msg.setDestinationEntity(122U);

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
    msg.setTimeStamp(0.08833585729234272);
    msg.setSource(25692U);
    msg.setSourceEntity(134U);
    msg.setDestination(18568U);
    msg.setDestinationEntity(168U);

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
    msg.setTimeStamp(0.048598627586068255);
    msg.setSource(10317U);
    msg.setSourceEntity(21U);
    msg.setDestination(41741U);
    msg.setDestinationEntity(123U);

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
    msg.setTimeStamp(0.7715062122586192);
    msg.setSource(38401U);
    msg.setSourceEntity(152U);
    msg.setDestination(48311U);
    msg.setDestinationEntity(202U);
    msg.timeout = 985U;
    msg.lat = 0.030479187778368777;
    msg.lon = 0.7923520538490608;
    msg.z = 0.01437622732057997;
    msg.z_units = 143U;
    msg.speed = 0.22619626218709876;
    msg.speed_units = 72U;
    msg.bearing = 0.5177887752793762;
    msg.width = 0.629014732790184;
    msg.direction = 62U;
    msg.custom.assign("JJDKNKDRIOTOXWDFANTEOUHTKVXOFGBGDCWPWDRIKVELIIUVMDGRNGLXTOKKMNWAFHDQLHJVBGJXATQLSPSR");

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
    msg.setTimeStamp(0.5348274085640079);
    msg.setSource(35908U);
    msg.setSourceEntity(167U);
    msg.setDestination(11279U);
    msg.setDestinationEntity(49U);
    msg.timeout = 41277U;
    msg.lat = 0.5337620634396262;
    msg.lon = 0.5360685214748359;
    msg.z = 0.6161431940248926;
    msg.z_units = 25U;
    msg.speed = 0.7514342079911932;
    msg.speed_units = 70U;
    msg.bearing = 0.838636985464682;
    msg.width = 0.948293373199246;
    msg.direction = 246U;
    msg.custom.assign("DRSMDKBMWYKLULJIPHJGBBBHXIMBWDOTTUPALC");

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
    msg.setTimeStamp(0.10650777310527637);
    msg.setSource(58707U);
    msg.setSourceEntity(219U);
    msg.setDestination(19469U);
    msg.setDestinationEntity(157U);
    msg.timeout = 12761U;
    msg.lat = 0.8669527627579461;
    msg.lon = 0.0498102748263447;
    msg.z = 0.7897447310766156;
    msg.z_units = 12U;
    msg.speed = 0.3100811789715896;
    msg.speed_units = 92U;
    msg.bearing = 0.7149465303688644;
    msg.width = 0.5873822925856066;
    msg.direction = 74U;
    msg.custom.assign("WAQEXINGZMXSAHKWBZKSIUPHPLTTXJRFANUOYWZEKKIMMWGHWLBWOUOYBDCGRYCVITDHLJGBEDEWZRUGEPQFRHTRSCUXKSJ");

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
    msg.setTimeStamp(0.802978686461492);
    msg.setSource(28943U);
    msg.setSourceEntity(168U);
    msg.setDestination(43123U);
    msg.setDestinationEntity(244U);
    msg.op_mode = 157U;
    msg.error_count = 112U;
    msg.error_ents.assign("WDVKEITJSIZFRIEYDNSHKPFHRZRQAPLSBFNSLTEAVGGYPCZZCNBBYNTBQKSUVIRMYQAOCTFHHANVAXSQLOOURCKMMMBKGCNHKZLUXKMSYMVWCFAWQVPX");
    msg.maneuver_type = 22327U;
    msg.maneuver_stime = 0.23263650715466144;
    msg.maneuver_eta = 14825U;
    msg.control_loops = 1545632519U;
    msg.flags = 247U;
    msg.last_error.assign("GEWNICHYZVEGMHSBSKZFDHPLSQFBYUVPPWHBGWEDVIZEXNEULNCRZQNPBROGCTKISKHYNLDOSZDGIMYTOPDKYVKLA");
    msg.last_error_time = 0.9083681935830161;

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
    msg.setTimeStamp(0.614912041223072);
    msg.setSource(19367U);
    msg.setSourceEntity(121U);
    msg.setDestination(61936U);
    msg.setDestinationEntity(37U);
    msg.op_mode = 43U;
    msg.error_count = 230U;
    msg.error_ents.assign("HEFVMFOWTUXLVJNSQPITVXCJLTAQSQOQKHKGUHWKPRYACFROJVZNTXGGRALNCCPOJBIPBGAPZUAUCMEIQYWXEZINKYABVZJDYBXFJUSMFWGKURWLZURTXTLGONNESRKXDYBFLIBCVSNLEGNQDPLMPIQBQZFCZKDESIRHMFYDZSKAICWQWJZJMTWDICMWKHOE");
    msg.maneuver_type = 25127U;
    msg.maneuver_stime = 0.2083887973817874;
    msg.maneuver_eta = 31704U;
    msg.control_loops = 3370746099U;
    msg.flags = 44U;
    msg.last_error.assign("FTEHMXPJEJYCIKTEFPZERXSAOJCLZUJKUOHMLZNXQBANIHZHVCTGBQBBNSRQQHDPTOW");
    msg.last_error_time = 0.750105709572132;

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
    msg.setTimeStamp(0.8340142684036391);
    msg.setSource(4270U);
    msg.setSourceEntity(204U);
    msg.setDestination(24327U);
    msg.setDestinationEntity(205U);
    msg.op_mode = 50U;
    msg.error_count = 104U;
    msg.error_ents.assign("HXVKDIXYWPPBCKKJWNVXSQXHVWTMCGDEL");
    msg.maneuver_type = 40591U;
    msg.maneuver_stime = 0.7304123223540914;
    msg.maneuver_eta = 63162U;
    msg.control_loops = 4229220220U;
    msg.flags = 69U;
    msg.last_error.assign("IGTOFSVHLPMUFFITMRIROVBIUEYZJJVRSMPWLIGIEWTWECOJCDWELZZZTNSIXNBEQDEZXPBGFCPKDNGCKUHZHDAHJVWJTQAPTMHSPKNKLKNWNSBKZDYQGMVAUPLBDWAAKUMNXACPPAWCUJMHWORHTLXEIQKHUVOKZBLXRYXYVNUXCQLEAMGMBFOSVPVSJ");
    msg.last_error_time = 0.736323540780502;

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
    msg.setTimeStamp(0.3867038930830995);
    msg.setSource(12506U);
    msg.setSourceEntity(88U);
    msg.setDestination(21106U);
    msg.setDestinationEntity(191U);
    msg.type = 223U;
    msg.request_id = 29406U;
    msg.command = 233U;
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.28168034669011466;
    tmp_msg_0.lon = 0.18410516516444664;
    tmp_msg_0.speed = 0.5737167516760278;
    tmp_msg_0.speed_units = 119U;
    tmp_msg_0.limits = 47U;
    tmp_msg_0.max_depth = 0.14220926166284797;
    tmp_msg_0.min_alt = 0.3674554990312636;
    tmp_msg_0.time_limit = 0.6893608068932219;
    tmp_msg_0.controller.assign("HPKYQPXQAOZQVRBDFMGUOWKMMHTTOMHNQYETFEWLETMWWXNPRICYCMKQDFNCZBDOQPYGAUVFADUCRBSGEKKRQHEZLIFIIGSYANPUJJGVUTVDKTCFWHALMYJCICEVBYUJILUZNOAVJPIFHBCTF");
    tmp_msg_0.custom.assign("HJAGLJNAZRQNVQYRISFBRAAOILJEOWSBCXGAKURZAVKKRLKHAZLBBCCUUTSJDLUHZUISFVIGAFCKFRNHQWZGSKWQPDRWWCNOKZXODPWOFXOWCLGWMEYVQEEDFHQCUXBVGYCUZTZKMXARFGJRGDKHXBBPQMVBYYNIEXVSDJMMSHXCDQLTSKSRFWUHOXINVCBHTSXJLLIJFQTEZTYOJDTNPEMYPYDTYNPIGV");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 1649U;
    msg.info.assign("ULTAVWFROKGDPHIUCPINSICGTSYRZVESPCAEWEPMBRWYQQKYRTKIWDIEJCEANPWXZMBRXCJWEVMHPH");

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
    msg.setTimeStamp(0.25871075286354206);
    msg.setSource(22600U);
    msg.setSourceEntity(105U);
    msg.setDestination(59129U);
    msg.setDestinationEntity(66U);
    msg.type = 88U;
    msg.request_id = 5865U;
    msg.command = 230U;
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 12405U;
    tmp_msg_0.lat = 0.33507752699260984;
    tmp_msg_0.lon = 0.3112178482635598;
    tmp_msg_0.z = 0.7406984255944925;
    tmp_msg_0.z_units = 190U;
    tmp_msg_0.speed = 0.14765224423986945;
    tmp_msg_0.speed_units = 150U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.15481704756741244;
    tmp_tmp_msg_0_0.y = 0.9648983988984037;
    tmp_tmp_msg_0_0.z = 0.8880942045923518;
    tmp_tmp_msg_0_0.t = 0.3289453974816272;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("FGVVCMQQHGLWLZQENSTICAZYZHMUBRODBXPFLLKJGDXUCRPEKQAVJTYAAWHGHFDBHESYHWJSNWACAXVZZLOOCOEIPICXXNOULZNEYWJRNYUQXDFSIWPDWBEYBAXFAGSPTJRVCJUESPFTJBKYVTCZXHLDRSPMHGNUMKVMINMTOTTCBQEDIQZCNMYEKUKIJLXV");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 58389U;
    msg.info.assign("TLHODGYDBNJEOQHVDYCZDKZFZCMNTJAKRNEOVHVBEOMJBIJUEGKFKBYUJHYVWK");

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
    msg.setTimeStamp(0.43847682570593016);
    msg.setSource(62631U);
    msg.setSourceEntity(254U);
    msg.setDestination(218U);
    msg.setDestinationEntity(14U);
    msg.type = 153U;
    msg.request_id = 62387U;
    msg.command = 240U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 64147U;
    tmp_msg_0.lat = 0.6254734157261429;
    tmp_msg_0.lon = 0.43264887280928166;
    tmp_msg_0.z = 0.08903303354485737;
    tmp_msg_0.z_units = 126U;
    tmp_msg_0.speed = 0.934441906151924;
    tmp_msg_0.speed_units = 240U;
    tmp_msg_0.roll = 0.7550140216146605;
    tmp_msg_0.pitch = 0.904066064804546;
    tmp_msg_0.yaw = 0.554700435532808;
    tmp_msg_0.custom.assign("NSNHAJEBQCPXKQHIUYVTHFMBDBIUVKQSWIJDJASFBKMNVQGJCIRLUJIOSZNJCPDXALYCVNBMLELPVTAMQRNNOEYRPDVZBBJNKMRHGZCRKGMQWHLGISTRUILKDSFYWVBDJOUXGBHCJHDVXOKIW");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 31136U;
    msg.info.assign("ZUYLMWIAQZBCNKVLSFDVWZMQIMSTMRPBCQAZYJIUXDVSULAGCPJJHRGPGSMSBGEFNICKGWEKQURAROTFYVXDPAKBPCWUOUZWTTJZVPTKOGOIF");

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
    msg.setTimeStamp(0.4457635689204673);
    msg.setSource(17964U);
    msg.setSourceEntity(98U);
    msg.setDestination(41970U);
    msg.setDestinationEntity(170U);
    msg.command = 192U;
    msg.entities.assign("YZSXRTNNIUVXYVTFX");

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
    msg.setTimeStamp(0.8290500477199875);
    msg.setSource(34125U);
    msg.setSourceEntity(222U);
    msg.setDestination(2081U);
    msg.setDestinationEntity(183U);
    msg.command = 210U;
    msg.entities.assign("LCQLVMADZUQWBIMXFLFMKUCETDFHEUIYEDBJQWJMHSNNVPWYUVGUNKOQAIJZPIPIJQALMGCMSUQDNNKIGBJTEKORUHHHQQYZIODSDFQLNSLMLBHGDSAYWAXAVKRTCGVZZVPPHUASZYACTFPTRYPLIFXYCOJRGJZTGMSOVEHSPSZZRWXLMMWKFWYJSPOXEGCQZRDYGVOADJRBONBKBEWBNA");

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
    msg.setTimeStamp(0.7193241129312258);
    msg.setSource(30459U);
    msg.setSourceEntity(197U);
    msg.setDestination(21551U);
    msg.setDestinationEntity(140U);
    msg.command = 58U;
    msg.entities.assign("PAHSJVXVZGIHVLXPI");

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
    msg.setTimeStamp(0.3212564119359532);
    msg.setSource(4671U);
    msg.setSourceEntity(221U);
    msg.setDestination(21796U);
    msg.setDestinationEntity(76U);
    msg.mcount = 164U;
    msg.mnames.assign("COLYRKWZGFATBBMGKPCYTJMCPSMEUJTVMIAWNFCHOIYEEMFZXLSGCJYWBOSFHUNPOOQZNVVGCUQAAVHQKCUWHVDGLMYRYGPQAXNQPBJMNVQSNZUHSIJOAXYKRIFHKPLDBKZGXSUQRMWBWULCRZEUFRILQVJQCCSXLEKJYHQDDRFRAGEEJTIKH");
    msg.ecount = 148U;
    msg.enames.assign("PTGQEVMWALREPNSNZIFXFMZOJFIKAWMBHNOAXUXTMHLDELIEGCEJCVVXJQAGFBRFJQWQUHJZDHGSWOKFRWDSJLTXVOVNYKPAMHQYWLCPWXPTVFKSXORHUSCGETJZYPHVBLHRKNYVFMNNTBPWZNJQTGZI");
    msg.ccount = 105U;
    msg.cnames.assign("MBOOXMRRSGAKMWTEDSIDFGUHCBRQSIYYICROVOO");
    msg.last_error.assign("DDXIWPVWQSVKZYRYVTLEDCMYQGXAATUSNZPSRBCKQERZIRDPTWKFEXUGWKKYSHFLMMASYDAECUQWABKYMJOBOBYKNZGKGMFSEJGHOUJGVZOFXHXPPONCUSPFMRUGORHULVLHGFIBCLCIPPIIXRXPZWEQCVONHBBREFXOSVRVHXUQQHLVJDLFZJIUYMAFBNFNBBKENJYAWNSGDUJXHTI");
    msg.last_error_time = 0.7356659737721358;

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
    msg.setTimeStamp(0.037831666847926604);
    msg.setSource(16168U);
    msg.setSourceEntity(204U);
    msg.setDestination(54266U);
    msg.setDestinationEntity(252U);
    msg.mcount = 227U;
    msg.mnames.assign("OXTFYDCSMEUWZJWFDCQGFLKGATSKRYVXKKGNSXAEBZSVBOLKJTEMGZXRETPENHBLRYXNRQBMMPEJHQGWDHTLFJQVVSBSBIZJFYYJNZQMILSNFLZQPDMHMEXUQOPWJEGFHYUWCBDAJAOLRGMXIVINDQIUUARWGPLVSISOXHKCCTAPWZTDTHOBYMAYINBGCVCLORAVE");
    msg.ecount = 230U;
    msg.enames.assign("TCDAPEIZNCOXPQFFWUHLETFYOVWONCELWQAYWDISMHBYYFXJLNJLRBBKXGBKNMVOUOZFCIDMYFGMOAQZGNKNCKNGUGYPINUKDNLDAKRGWPWBVACGWBENXODDTXLUCRKPXMUMHRXRYHOJSBZVUPVSOQYXTFQJZSEBZTZHQRZTXEZFHEWK");
    msg.ccount = 46U;
    msg.cnames.assign("VYGEHSSSCVUMHPAEDJJFQKIOZBLZBKAUGCIGNMCGUAYAAKKLQSBPQFUCEHGCPUBQHRLNQCLFEDJVIVFBTRRFUTIZESBXSYVXDNXNDLAZDANTBFXMRGHGRTPHWZ");
    msg.last_error.assign("WZHZBMJHBNOCAHYIXXMCGQBMJTTVWRNNUPRKZTBFDXYVRUIRJTOWJQUBULPLNKTNIXSSLHXERIPUZNXQVNCMZXFLOUIRWEQHSQJUYVJAESIGTJFPBRODHRLDHHZGOAOIQLWVMALZDREDCSVJGWSVISFOPOGETDBDWNVOHYOPNL");
    msg.last_error_time = 0.7063108066370704;

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
    msg.setTimeStamp(0.9838768562281072);
    msg.setSource(20330U);
    msg.setSourceEntity(134U);
    msg.setDestination(57251U);
    msg.setDestinationEntity(229U);
    msg.mcount = 202U;
    msg.mnames.assign("AXDOCXTJIRBVXRISOGWFESVBUGCDFEZCHURSMIGQZKUTMOLETCNDRARNZRHYOFPAQALSZWYQTMZHGETVQHXGPKVMSAWXKPTPLJIWVNABXPFDJAYFQGNVSHLLYEHRKPSYACKJBDJDXODIWJLKJUVQFJGDPVEUEZEYASUUHVBWVZDXCHQBBUGCOLPFQSJGE");
    msg.ecount = 7U;
    msg.enames.assign("KARCPFLHUBSL");
    msg.ccount = 86U;
    msg.cnames.assign("JWMVRGJJHMD");
    msg.last_error.assign("XPEMMHFTZXMDSHKAMPQRQEYDPGYFPZAIYZHOUYKPZZEUSZHMGOJPHQOCWTCWALISBKDNNOFL");
    msg.last_error_time = 0.9302054592392847;

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
    msg.setTimeStamp(0.15737720098511432);
    msg.setSource(39770U);
    msg.setSourceEntity(201U);
    msg.setDestination(15999U);
    msg.setDestinationEntity(167U);
    msg.mask = 23U;
    msg.max_depth = 0.1981761289470062;
    msg.min_altitude = 0.6922132424880587;
    msg.max_altitude = 0.32488731811892313;
    msg.min_speed = 0.09468811466569005;
    msg.max_speed = 0.6785369511223664;
    msg.max_vrate = 0.5133786056750753;
    msg.lat = 0.5316124911826922;
    msg.lon = 0.35267066815910075;
    msg.orientation = 0.4894082548203842;
    msg.width = 0.9292679214685211;
    msg.length = 0.7862108758950911;

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
    msg.setTimeStamp(0.11700757205219026);
    msg.setSource(2409U);
    msg.setSourceEntity(254U);
    msg.setDestination(16309U);
    msg.setDestinationEntity(125U);
    msg.mask = 94U;
    msg.max_depth = 0.8087293137709619;
    msg.min_altitude = 0.7027338209652502;
    msg.max_altitude = 0.8605222396869964;
    msg.min_speed = 0.39534727143116877;
    msg.max_speed = 0.3082623980251391;
    msg.max_vrate = 0.04419626757289752;
    msg.lat = 0.20876913347572557;
    msg.lon = 0.06520569362796147;
    msg.orientation = 0.5048264311836785;
    msg.width = 0.006146436147988488;
    msg.length = 0.1750587490138692;

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
    msg.setTimeStamp(0.27136644974349844);
    msg.setSource(6057U);
    msg.setSourceEntity(122U);
    msg.setDestination(31858U);
    msg.setDestinationEntity(242U);
    msg.mask = 76U;
    msg.max_depth = 0.31339040685288777;
    msg.min_altitude = 0.7184300428296568;
    msg.max_altitude = 0.08546941691359877;
    msg.min_speed = 0.522070248311181;
    msg.max_speed = 0.5668631828816907;
    msg.max_vrate = 0.44231910141687336;
    msg.lat = 0.275539536332164;
    msg.lon = 0.732153162072493;
    msg.orientation = 0.7931952817842358;
    msg.width = 0.8401200665452255;
    msg.length = 0.17412529443387792;

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
    msg.setTimeStamp(0.8223968068771144);
    msg.setSource(10390U);
    msg.setSourceEntity(19U);
    msg.setDestination(38420U);
    msg.setDestinationEntity(133U);

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
    msg.setTimeStamp(0.7267942379603972);
    msg.setSource(29271U);
    msg.setSourceEntity(144U);
    msg.setDestination(7631U);
    msg.setDestinationEntity(84U);

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
    msg.setTimeStamp(0.7101355180922404);
    msg.setSource(27328U);
    msg.setSourceEntity(192U);
    msg.setDestination(37773U);
    msg.setDestinationEntity(214U);

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
    msg.setTimeStamp(0.44065061513547155);
    msg.setSource(15841U);
    msg.setSourceEntity(36U);
    msg.setDestination(42371U);
    msg.setDestinationEntity(106U);
    msg.duration = 47054U;

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
    msg.setTimeStamp(0.5412024392542671);
    msg.setSource(10423U);
    msg.setSourceEntity(124U);
    msg.setDestination(38278U);
    msg.setDestinationEntity(6U);
    msg.duration = 15928U;

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
    msg.setTimeStamp(0.804204651609047);
    msg.setSource(55676U);
    msg.setSourceEntity(76U);
    msg.setDestination(55639U);
    msg.setDestinationEntity(216U);
    msg.duration = 43990U;

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
    msg.setTimeStamp(0.17440727476419693);
    msg.setSource(25688U);
    msg.setSourceEntity(227U);
    msg.setDestination(46936U);
    msg.setDestinationEntity(4U);
    msg.enable = 188U;
    msg.mask = 2596991431U;
    msg.scope_ref = 3154644543U;

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
    msg.setTimeStamp(0.4616419624074717);
    msg.setSource(8425U);
    msg.setSourceEntity(107U);
    msg.setDestination(34600U);
    msg.setDestinationEntity(182U);
    msg.enable = 64U;
    msg.mask = 2246828187U;
    msg.scope_ref = 3811167076U;

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
    msg.setTimeStamp(0.6540153559140048);
    msg.setSource(19274U);
    msg.setSourceEntity(148U);
    msg.setDestination(25568U);
    msg.setDestinationEntity(69U);
    msg.enable = 161U;
    msg.mask = 4104001765U;
    msg.scope_ref = 2647083206U;

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
    msg.setTimeStamp(0.36008886953395014);
    msg.setSource(58767U);
    msg.setSourceEntity(186U);
    msg.setDestination(31813U);
    msg.setDestinationEntity(110U);
    msg.medium = 89U;

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
    msg.setTimeStamp(0.2959683509349126);
    msg.setSource(17380U);
    msg.setSourceEntity(230U);
    msg.setDestination(58659U);
    msg.setDestinationEntity(120U);
    msg.medium = 232U;

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
    msg.setTimeStamp(0.32894857155997004);
    msg.setSource(8366U);
    msg.setSourceEntity(252U);
    msg.setDestination(20764U);
    msg.setDestinationEntity(3U);
    msg.medium = 158U;

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
    msg.setTimeStamp(0.8170795112449438);
    msg.setSource(24462U);
    msg.setSourceEntity(95U);
    msg.setDestination(52332U);
    msg.setDestinationEntity(253U);
    msg.value = 0.9264067632969106;
    msg.type = 237U;

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
    msg.setTimeStamp(0.7799536171790936);
    msg.setSource(7627U);
    msg.setSourceEntity(246U);
    msg.setDestination(32394U);
    msg.setDestinationEntity(34U);
    msg.value = 0.6534776226296994;
    msg.type = 120U;

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
    msg.setTimeStamp(0.9872580085731256);
    msg.setSource(45996U);
    msg.setSourceEntity(169U);
    msg.setDestination(35978U);
    msg.setDestinationEntity(170U);
    msg.value = 0.8781843408720701;
    msg.type = 138U;

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
    msg.setTimeStamp(0.7514441285586515);
    msg.setSource(39942U);
    msg.setSourceEntity(104U);
    msg.setDestination(41433U);
    msg.setDestinationEntity(197U);
    msg.possimerr = 0.14731746863695205;
    msg.converg = 0.9077486773344893;
    msg.turbulence = 0.05062130977186341;
    msg.possimmon = 234U;
    msg.commmon = 116U;
    msg.convergmon = 150U;

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
    msg.setTimeStamp(0.7167615509391578);
    msg.setSource(59323U);
    msg.setSourceEntity(195U);
    msg.setDestination(16442U);
    msg.setDestinationEntity(31U);
    msg.possimerr = 0.9112266523489319;
    msg.converg = 0.9586746251777256;
    msg.turbulence = 0.022020282666114444;
    msg.possimmon = 182U;
    msg.commmon = 101U;
    msg.convergmon = 135U;

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
    msg.setTimeStamp(0.8980518891462441);
    msg.setSource(5526U);
    msg.setSourceEntity(112U);
    msg.setDestination(47849U);
    msg.setDestinationEntity(92U);
    msg.possimerr = 0.2592135941749849;
    msg.converg = 0.8664649791978756;
    msg.turbulence = 0.5472403367983623;
    msg.possimmon = 87U;
    msg.commmon = 134U;
    msg.convergmon = 144U;

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
    msg.setTimeStamp(0.9848596079161933);
    msg.setSource(4948U);
    msg.setSourceEntity(124U);
    msg.setDestination(7801U);
    msg.setDestinationEntity(200U);
    msg.autonomy = 196U;
    msg.mode.assign("QZTHSWSFHIBVCEMVFJTUWHKVKOKGPYKUASDTQIAHGBRULTROAETUMDYPVEZFYF");

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
    msg.setTimeStamp(0.41277513395544774);
    msg.setSource(56135U);
    msg.setSourceEntity(210U);
    msg.setDestination(32587U);
    msg.setDestinationEntity(12U);
    msg.autonomy = 94U;
    msg.mode.assign("HYQWMKCFXRDSZOIRTOHPRCROJAKGLIEUA");

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
    msg.setTimeStamp(0.42993668350893977);
    msg.setSource(26857U);
    msg.setSourceEntity(224U);
    msg.setDestination(37917U);
    msg.setDestinationEntity(235U);
    msg.autonomy = 95U;
    msg.mode.assign("VGPJDFBIKUTZKGDTQMDDJOPWJAKEMFZVAABVXOVZNMOVEDNZLNNCIFYPDJWOFMHINTCJGQAYPKSQCTLUCJNRSVRXEHLIZULDWCUZCCKHLLPRFILHMKONYGOWSJCOHSGPIGJMKTAYFERXEKYTEVSYWYKQQEPZBNSPYIXWDU");

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
    msg.setTimeStamp(0.966287358238138);
    msg.setSource(41904U);
    msg.setSourceEntity(214U);
    msg.setDestination(54536U);
    msg.setDestinationEntity(134U);
    msg.type = 186U;
    msg.op = 41U;
    msg.possimerr = 0.1252949752524417;
    msg.converg = 0.6869974251509429;
    msg.turbulence = 0.15682564476662686;
    msg.possimmon = 109U;
    msg.commmon = 138U;
    msg.convergmon = 2U;

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
    msg.setTimeStamp(0.997790221780534);
    msg.setSource(13231U);
    msg.setSourceEntity(6U);
    msg.setDestination(27299U);
    msg.setDestinationEntity(211U);
    msg.type = 200U;
    msg.op = 61U;
    msg.possimerr = 0.16012944411474528;
    msg.converg = 0.9916442670140913;
    msg.turbulence = 0.8982847713556683;
    msg.possimmon = 187U;
    msg.commmon = 131U;
    msg.convergmon = 28U;

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
    msg.setTimeStamp(0.08131051945493906);
    msg.setSource(23929U);
    msg.setSourceEntity(101U);
    msg.setDestination(63138U);
    msg.setDestinationEntity(93U);
    msg.type = 92U;
    msg.op = 51U;
    msg.possimerr = 0.5052946135250453;
    msg.converg = 0.03518437658164464;
    msg.turbulence = 0.9080195658185879;
    msg.possimmon = 217U;
    msg.commmon = 6U;
    msg.convergmon = 131U;

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
    msg.setTimeStamp(0.43868400463233304);
    msg.setSource(59058U);
    msg.setSourceEntity(114U);
    msg.setDestination(22383U);
    msg.setDestinationEntity(129U);
    msg.op = 123U;
    msg.comm_interface = 103U;
    msg.period = 18565U;
    msg.sys_dst.assign("WXSAUNLXVNVGZWPUAIQEOZEINESXGSSCRXAJIKBUPPQFRXQJSHOFGANKRKWOEZNBXDCYOWQLITKTGJRVKREIABSTZJUWTEQMCMYWYTNSPVIFMAVQQKDHMBFBWAHLPVECIJJQUOCDYHSNGBLRKTBIXPANWSYHAGCHPLMDNOGCMRIFCYXJIP");

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
    msg.setTimeStamp(0.3680688327507645);
    msg.setSource(45168U);
    msg.setSourceEntity(188U);
    msg.setDestination(57607U);
    msg.setDestinationEntity(197U);
    msg.op = 243U;
    msg.comm_interface = 81U;
    msg.period = 55749U;
    msg.sys_dst.assign("LWILKVYRCDPOJXFVQODVGXPKPXRHBQKEWZNPZIMHAZDMJCNGHZXFAFZVYQHINIFZQBEJITYHBXLONEZAIRTCLSKTABNTSYPDAXMBJKVDHIIQTGJQWWGOYJZPDMKSCMHUHETMXRWSJRTAERAVDSYOYNIYCGXJGLXQZEWYKXGGVVOLMSEHPTNNADCSJDWUFBATNUPVFWNUCSRUJIKLBO");

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
    msg.setTimeStamp(0.640739300513347);
    msg.setSource(2505U);
    msg.setSourceEntity(179U);
    msg.setDestination(4797U);
    msg.setDestinationEntity(121U);
    msg.op = 129U;
    msg.comm_interface = 176U;
    msg.period = 58183U;
    msg.sys_dst.assign("SMNLQEEVGVAMMGVGTBLGWPSEDYJAGDJPIMFTIQBCZOLCGZIDRGOFLJQUFTHAMTSCFTNGKMPQPUIVEUZLEISKTZAHOWTCMARKBXKSQEEZAZFPSUVN");

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
    msg.setTimeStamp(0.5636664749536309);
    msg.setSource(53529U);
    msg.setSourceEntity(166U);
    msg.setDestination(5684U);
    msg.setDestinationEntity(78U);
    msg.stime = 134875337U;
    msg.latitude = 0.757535665549195;
    msg.longitude = 0.1980232749812456;
    msg.altitude = 60462U;
    msg.depth = 19747U;
    msg.heading = 49515U;
    msg.speed = -379;
    msg.fuel = -16;
    msg.exec_state = 104;
    msg.plan_checksum = 44720U;

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
    msg.setTimeStamp(0.14738264138477164);
    msg.setSource(49935U);
    msg.setSourceEntity(6U);
    msg.setDestination(18780U);
    msg.setDestinationEntity(28U);
    msg.stime = 3831079370U;
    msg.latitude = 0.7543725351029134;
    msg.longitude = 0.9483705453401599;
    msg.altitude = 18836U;
    msg.depth = 63075U;
    msg.heading = 17629U;
    msg.speed = -25192;
    msg.fuel = 104;
    msg.exec_state = -79;
    msg.plan_checksum = 60630U;

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
    msg.setTimeStamp(0.643631018609798);
    msg.setSource(28541U);
    msg.setSourceEntity(53U);
    msg.setDestination(54750U);
    msg.setDestinationEntity(93U);
    msg.stime = 509719411U;
    msg.latitude = 0.12048902277580165;
    msg.longitude = 0.6350962539161764;
    msg.altitude = 35734U;
    msg.depth = 55566U;
    msg.heading = 22374U;
    msg.speed = 24975;
    msg.fuel = -35;
    msg.exec_state = -26;
    msg.plan_checksum = 18530U;

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
    msg.setTimeStamp(0.685081606405508);
    msg.setSource(57867U);
    msg.setSourceEntity(89U);
    msg.setDestination(7483U);
    msg.setDestinationEntity(179U);
    msg.req_id = 31669U;
    msg.comm_mean = 36U;
    msg.destination.assign("HPNAPRSSBYNDVCOWVJCAHNTWGAFRYYXMJIZYTSOKDUGSGPBEKPEIOAPUORNPUGDHQSEUHLERCHFVFZKQFIAMHGFD");
    msg.deadline = 0.01573019334229253;
    msg.range = 0.697538406461735;
    msg.data_mode = 153U;
    IMC::HTTPAction tmp_msg_0;
    tmp_msg_0.id = 1135148054U;
    tmp_msg_0.op = 44U;
    const signed char tmp_tmp_msg_0_0[] = {118, 101, -121, -50, 120, -85, 18, 37, -37, 58, 93, 39, 77, -68, -124, 86, 114, 68, 47, 34, 72, -63, 123, -59, -1, -126, -128, -13, 66, -70, -13, 17, -89, 68, -58, 63, 12, 124, -30, 48, 54, -118, -49, -54, -58, -73, 123, 19, -124, 23, -56, 93, -116, -116, 2, 106, -54, 92, 86, 11, 16, -43, -18, -65, 123, -92, -106, 101, 95, -59, -43, -14, 62, 29, -115, -50, 111, -53, -117, -85, -68, 36};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("BSGCRWQPPUGLOLZVBBFNZUYFUYHLEZYUYXCQKLAVPVKKSQUTTKCHFKAHIYOHCKXOYGLFKWPSWEDCLXZWXZBOZTRJQMDXIDLBDWIGQUSMIPVSAOCTWRGNURLRKAEZIIUANHHVTVSJRTVOQJJEWFHIUHSPMAEQMFMMNPBXDRVDNTJXAYSGVEJOCOFMLXDYRADBQNPHJKNJOHWGSPWZMXIDSACFEJVMGGNALYQFBCTIZRTEWNBEODXGJZBPYITFCR");
    const signed char tmp_msg_1[] = {-18, 32, -1, -42, 60, -44, 105, 55, 44, 87, -91, 27, -24, -96, -109, -44, 21, -87, -69, 18, -120, -90, -67, 64, -92, 20, 39, -23, -56, -125, -25, -18, 80, -79, -12, -121, 56, 80, -87, 114, -70, 69, 61, -32, -47, -34, -103, -6, -43, -112, -51, -24, -47, -81, -95, 124, -92, 99, -94, 33, 41, -73, -83, 39, -112, -50, -125, 28, -24, -26, 39, 46, 4, -8, -8, -124, 104, 76, 93, -49, -20, 61, -83, 121, -39, -55, 37};
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
    msg.setTimeStamp(0.4078970072288711);
    msg.setSource(46594U);
    msg.setSourceEntity(156U);
    msg.setDestination(14456U);
    msg.setDestinationEntity(77U);
    msg.req_id = 64717U;
    msg.comm_mean = 114U;
    msg.destination.assign("SPLYXDWYLVVMQLMKHFLVGPXVCHVQNJUGAMTIZFHYJAEHEADNIEZFOKKWAAHPJXRRFGPODNHRVCTFGLZKQGUZJRBMNXOGLCXUCMOOEJGS");
    msg.deadline = 0.35707924736563423;
    msg.range = 0.5246715389628304;
    msg.data_mode = 78U;
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 33432U;
    tmp_msg_0.lat = 0.9300956366846962;
    tmp_msg_0.lon = 0.1931156736188252;
    tmp_msg_0.z = 0.916554354640387;
    tmp_msg_0.z_units = 219U;
    tmp_msg_0.amplitude = 0.4780024235188822;
    tmp_msg_0.pitch = 0.6539940914722095;
    tmp_msg_0.speed = 0.03162447257835255;
    tmp_msg_0.speed_units = 50U;
    tmp_msg_0.custom.assign("TTBRGHWTSWJXRIIENWMBECSESAEMVTJTVCBQKFXHGSVIRSIEYOXITHQQUVFKDQYIQFIUFDCFPCRKRWAEQUJZQDMZVPUHQJTLNDMGGBKKTOYMUMOABCDKCXSSADXJUBRJIYOPZ");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("TRIHJWWXUAHLTPRIXGRFCTKFUOEDDSOEPYGLCFFVDMBZIVKGFGHDWZSKBQMETYUVQHGMLPEJACYJIAVJANSRPUUXNIYKKFWFSGADXKOZOKSRAIAUUNMOVLROMSSYZOYYTTYEPJYKCJEMVZWDC");
    const signed char tmp_msg_1[] = {81, 50, -68, -110, 28, -108, -17, 102, -44, -61, -92, 51, -19, 31, -57, 104, 52, -91, -19, -124, 46, -127, 111, 98, -8, -50, 94, -55, -128, 5, -124, 109, 119, 93, 78, -28, 102, 27, 11, -39, 21, 67, 14, 37, -31, 97, -76, -47, -25, 106, 22, 79, 107, 45, 19, -81, 82, 20, -107, -32, 113, 64, 66, 102, 83, 29, -51, -127, -13, 61, 83, -36, 101, -63, 54, -123, -119, -101, 81, -28, -39, 37, -128, -8, -107, -58, -64, -89, 73, 96, 31, -17, -44, 115, -121, -113, -34, -54, -116, 43, 95, -79, 11, -59, -53, -116, -101, -68, -94, 67, 87, 89, -67, 101, 93, 93, 76, 6, 30, 24, 48, 46, -125, 81, -88, -65, -95};
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
    msg.setTimeStamp(0.7786566623070424);
    msg.setSource(26023U);
    msg.setSourceEntity(235U);
    msg.setDestination(34042U);
    msg.setDestinationEntity(140U);
    msg.req_id = 11957U;
    msg.comm_mean = 56U;
    msg.destination.assign("LXXJNYLHJKGEQWNSEDKEFHPYROVPZHDDCKYEKGRTZOKAIUNIPFUNNYMGLMVLZHNYHFJZHVFVIMSMUCZCAABOXAGZIXSBCAUAJRJOVEJXWOWWKRVUAMC");
    msg.deadline = 0.8475221031834544;
    msg.range = 0.19516336826702074;
    msg.data_mode = 48U;
    IMC::StopManeuver tmp_msg_0;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("MDETEHFIZBCPYOIIGQVLNQZIXFNBNQSVYOTOZJDXYKBILSKCHMXVHRYKWNCOJJCUEQUL");
    const signed char tmp_msg_1[] = {9, -66, -88, 55, 59, 72, 25, 66, -39, -38, 65, -62, 116, -116, 70, -70, 97, -15, 66, 67, 64, -5, -41, -108, -3, 37, 19, -70, -29, 47, -59, 109, 120, 89, -56, 109, 115, 103, -114, 126, 43, -15, -13, -19, 15, 65, 39, -63, 97, -20, -46, -68, -1, -8, -33, -5, -99, 121, 90, -78, -66, -58, -42, -114, -77, 86, -48, -72, -48, -6, -127, 68, -50, 40, 78, -125, -15, -2, -65, -107, 102, -23};
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
    msg.setTimeStamp(0.354622350056773);
    msg.setSource(4249U);
    msg.setSourceEntity(29U);
    msg.setDestination(9694U);
    msg.setDestinationEntity(161U);
    msg.req_id = 42095U;
    msg.status = 94U;
    msg.range = 0.43359384012392355;
    msg.info.assign("OBGHSCQSAVZMUKAUGOJDXYTOELFHASMEZDVURNLAILUIQYOZXLCDUUJSEHZEPXKCNDXFOIWQHTBTRDYOWVNXCYJBNRLOZGINZGWMAPIAOQHCVDQLFVXGPCKPBGMNWFOVWHSXHEGDMBJXNIVUFFVAJRSPPRHJSKTZKIFFXLJQEIGRLRWDVBFYTWNPMKEC");

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
    msg.setTimeStamp(0.9577372401584651);
    msg.setSource(35196U);
    msg.setSourceEntity(90U);
    msg.setDestination(17336U);
    msg.setDestinationEntity(55U);
    msg.req_id = 11607U;
    msg.status = 223U;
    msg.range = 0.1622555615060005;
    msg.info.assign("BGASBVGLJECWQWVFKAIRRBZJHZDLPULPJHDCMKJEUVTSSQOTKVMZHX");

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
    msg.setTimeStamp(0.477325176246006);
    msg.setSource(31848U);
    msg.setSourceEntity(133U);
    msg.setDestination(35472U);
    msg.setDestinationEntity(202U);
    msg.req_id = 26089U;
    msg.status = 102U;
    msg.range = 0.6755470103030569;
    msg.info.assign("XPDZAITDUUJMGEDIRBSYATEHPFCGGYOXFBJVKUQHOIZHFW");

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
    msg.setTimeStamp(0.21854078488898188);
    msg.setSource(32164U);
    msg.setSourceEntity(76U);
    msg.setDestination(1402U);
    msg.setDestinationEntity(92U);
    msg.req_id = 41377U;
    msg.destination.assign("MIEDPXYOVWKKUWDFQSTJUBSIPVOCFQHNVGWRCPROAXVCUUDFQKATRQSSWGFIASJOGSRWMUYYZVKPHBLWKKPXEUJTLMTEJFCHJYPKVHEYOZAETLHOSRBYBBZAHRIOGGXCERXLHZIFQFTKWRPVEIQOEDBBLWJHDINMQMJVYSAMDIUJKLEYB");
    msg.timeout = 0.6266638949768665;
    msg.sms_text.assign("NSKTCVZOGWJYMKWQGGDQIORSJCBJGFKJCTRFQGQGLZURQIDANSXTRPGQAFEHYLRIVAEHBXLOIQXY");

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
    msg.setTimeStamp(0.3117574454758254);
    msg.setSource(65061U);
    msg.setSourceEntity(235U);
    msg.setDestination(59199U);
    msg.setDestinationEntity(248U);
    msg.req_id = 41882U;
    msg.destination.assign("WLXUHUWISOVASXFKYYZHSWDWEVLTINNVUTXYUZPKRZVTRIMUCKKQVHNWJQXJJHMHEEFBDBPMLAJ");
    msg.timeout = 0.24441033159101866;
    msg.sms_text.assign("TJGYODTGCNMNCGBORNYOSNDLFPLXIVHYMMLASSCEIAZPCDMISJLWYYNYGTKWJVZAECJCLAUGVLFEHNUXEVXYBXMAIURUGNJGIPZKIQQULYCDPSMHXHRFXRVFHKUWIETPOZIEWIQEBXZOANKRCATWPQKQHAPDWQCHBOZJSUZWJOEFEDNWBDZNPSXWBJVDCBOVXRLQMMEZQTLFQZKHTORBRVMKOFHFJAQJMYKGUBTTSUDRKPID");

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
    msg.setTimeStamp(0.4422594488635412);
    msg.setSource(38646U);
    msg.setSourceEntity(29U);
    msg.setDestination(6064U);
    msg.setDestinationEntity(66U);
    msg.req_id = 8984U;
    msg.destination.assign("FNOJAZVXQQXISOGXKTOURLKOZZXSQKNWCTHACJWIMVJKMGIGJJWCXHXTDXMJMHEXCMGSBNOLPVSTEXIWMPQRKJHFOYWAJFTNRUFLUDLHSEHZERAAMFDWVUVRVATHBWUYNBDNVRCLNVZJKPHYRKFTYCGIMSYPGOMNBCBFEYXJHPIITQUYBGZAHKBEINDRLTTZBAABCFOYRROKDDQKFYLPZQPFSWYCSAEGUQVPQSPIEUGPLO");
    msg.timeout = 0.4762291273003084;
    msg.sms_text.assign("ITVNWIGMKTFFGRNAQVYSWDBENSQCYKPEUKXRIVLUPWUGGJKMOAGXYJVZIOZIELBHTBYNCWJLHWDTRIEFQLXRJUIEKRPCJMBHSTSRQXGLERQKLJHWNLWSFKDDZZUYJBSPOYZMUACSQVGFPICAYALRDPWKNDVQXOBPZHLPMBYJCYFESEQPBUAXGZZUVHSFKBMGKFWBMTIHODOOUXCHCUQCAPWTVFEGOADOHXIZMANRMOTVNQZXVJXML");

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
    msg.setTimeStamp(0.8289014363139825);
    msg.setSource(18050U);
    msg.setSourceEntity(166U);
    msg.setDestination(49199U);
    msg.setDestinationEntity(169U);
    msg.req_id = 64683U;
    msg.status = 86U;
    msg.info.assign("PWYINBZVSYDBVVWOYUTFHKRFMPZNUOVMRVHHZGQAZHXAFBHXQBIGQTSMLAJULZIWCTXUQTNPRXTEJOXBCOFSRTBPCDRHUFDNEJCSOYZAJYCQEOJQNZOAMSCILWOSDGYPZVGQEGUXPUDHIREDPKIGGAKXJZ");

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
    msg.setTimeStamp(0.7966758654942325);
    msg.setSource(26140U);
    msg.setSourceEntity(195U);
    msg.setDestination(6391U);
    msg.setDestinationEntity(4U);
    msg.req_id = 51900U;
    msg.status = 68U;
    msg.info.assign("QYXWJRBUOMVEQXMRMZLHSSISDGCVSVPZOHRQBHTLCDXUKJEDBYGMHXCYFUAVOZPLRQJVAHVDKIHTPUTOYLQGAOVCWXQDFOXDAJLITFNQLTDHSEPMAFJESBFGGXSJKNEULGNRPNZTPVKLUEWPZNEBFOHYEJINUYZYGZZRWSJBMKMUWDHADQVAPZTQINBCCORAIULGKJCENGASERVOCBIPBCHWZ");

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
    msg.setTimeStamp(0.010903705684805365);
    msg.setSource(12569U);
    msg.setSourceEntity(44U);
    msg.setDestination(59243U);
    msg.setDestinationEntity(135U);
    msg.req_id = 5461U;
    msg.status = 38U;
    msg.info.assign("FXJAFZYAFPBJNXIKXTHPCMCNADQROXOLDJGRCCJPNEIWODYPDQXMZRCFKGAUBUEUINZKJPMZLGLQYBNLRLUOZGMUCDWGUSFBQOITDHYTPTIEWGNEZNDKCCZKTOIWSVGQXHWBLWSARHPWMBMJRRBHYFRVDQMFQMTILVXIOKYVJVANYNAJTVZQHOWPKJHASEGTSHHSDGU");

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
    msg.setTimeStamp(0.5072449790083119);
    msg.setSource(9885U);
    msg.setSourceEntity(104U);
    msg.setDestination(40026U);
    msg.setDestinationEntity(25U);
    msg.state = 108U;

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
    msg.setTimeStamp(0.5825042198212723);
    msg.setSource(43757U);
    msg.setSourceEntity(6U);
    msg.setDestination(55284U);
    msg.setDestinationEntity(208U);
    msg.state = 99U;

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
    msg.setTimeStamp(0.8921386910352164);
    msg.setSource(2855U);
    msg.setSourceEntity(75U);
    msg.setDestination(10099U);
    msg.setDestinationEntity(30U);
    msg.state = 52U;

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
    msg.setTimeStamp(0.8730078059655743);
    msg.setSource(34875U);
    msg.setSourceEntity(165U);
    msg.setDestination(53104U);
    msg.setDestinationEntity(92U);
    msg.state = 38U;

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
    msg.setTimeStamp(0.3094121189507276);
    msg.setSource(30924U);
    msg.setSourceEntity(181U);
    msg.setDestination(4368U);
    msg.setDestinationEntity(216U);
    msg.state = 99U;

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
    msg.setTimeStamp(0.4727519198083764);
    msg.setSource(21762U);
    msg.setSourceEntity(247U);
    msg.setDestination(15935U);
    msg.setDestinationEntity(42U);
    msg.state = 47U;

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
    msg.setTimeStamp(0.28443127004134594);
    msg.setSource(50317U);
    msg.setSourceEntity(60U);
    msg.setDestination(32441U);
    msg.setDestinationEntity(60U);
    msg.req_id = 8658U;
    msg.destination.assign("IQRXVMEYBHREEOFEHQMRWPCKDHQUUFNIFEEIEVMYXKWLPDOMWCFIYTWOYTYDQSVLTUFMXTVJLAWHKJMUQJJUWCHNSNDOTZVU");
    msg.timeout = 0.7702510681326835;
    IMC::GetParametersXml tmp_msg_0;
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
    msg.setTimeStamp(0.5506721663094409);
    msg.setSource(1572U);
    msg.setSourceEntity(212U);
    msg.setDestination(14465U);
    msg.setDestinationEntity(66U);
    msg.req_id = 21543U;
    msg.destination.assign("FUIJTMHDJCABEYCZMSWVTPKFMONAHTYZEQCXECGLTXJPCGFPUKNIIWNWSESVKMPRCNBKNBTYQJMAMDOKASFQKHHGCJYPVQLBRTOAJZGDTHZJRUYOWGBDVJFIOVQBDYSZOWSDKVDLEJBVSEULAH");
    msg.timeout = 0.3024494889822099;
    IMC::AlignmentState tmp_msg_0;
    tmp_msg_0.state = 41U;
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
    msg.setTimeStamp(0.10112540205043685);
    msg.setSource(51694U);
    msg.setSourceEntity(218U);
    msg.setDestination(65516U);
    msg.setDestinationEntity(154U);
    msg.req_id = 7280U;
    msg.destination.assign("VVDNHLAMKKYQIWRFHAREXTBBR");
    msg.timeout = 0.6118814873268651;
    IMC::QueryEntityParameters tmp_msg_0;
    tmp_msg_0.name.assign("WAMTQNIRLUKEQLFSCOKJTMMTTKGUHEYIPLYHSWZFKAUVUAKHUNCFXCTGIGEOQFWCZYRSWEEOTRAMVHJRFVAMDJLZNJACSHNGIJGQDDBSUWEQWCPBFJFNOWD");
    tmp_msg_0.visibility.assign("LDBVCPAETDPTLYXB");
    tmp_msg_0.scope.assign("FGODORRQBYOO");
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
    msg.setTimeStamp(0.8822422412458494);
    msg.setSource(1207U);
    msg.setSourceEntity(2U);
    msg.setDestination(63932U);
    msg.setDestinationEntity(227U);
    msg.req_id = 37982U;
    msg.status = 116U;
    msg.info.assign("NFPBFCEJKWXMOYADMQNLUBGXJGHUSQUHAPKEVDVKWBRBKV");

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
    msg.setTimeStamp(0.40339402275834313);
    msg.setSource(59396U);
    msg.setSourceEntity(90U);
    msg.setDestination(52282U);
    msg.setDestinationEntity(54U);
    msg.req_id = 47397U;
    msg.status = 35U;
    msg.info.assign("FOUFTLXJXYJPBGIYIFLAGFQCGCQMNCIDELWEOLARYIUMOKJBDLRRWEPPRVGNIDKMCKAZBYDSBZMHTJPZWCNMKXZXAAOXEYCZSGQLSVFCASBPQWORUZXKNNZAUPZSBBKOVNSSFSHLGZOQURNFXIJHSATCIOTWVETVMYHXQPQWRJWKGYZNDIVILAJWDKGVTETKYFOLWGMFHPRMEDBVEAHNDXEHSULFRQENPIVOHYRTCBWQPUYQDMMHTVUDGCXJKH");

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
    msg.setTimeStamp(0.4344355682377241);
    msg.setSource(36236U);
    msg.setSourceEntity(246U);
    msg.setDestination(29541U);
    msg.setDestinationEntity(181U);
    msg.req_id = 43617U;
    msg.status = 159U;
    msg.info.assign("TTHPBREBZLW");

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
    msg.setTimeStamp(0.6485072768731363);
    msg.setSource(12228U);
    msg.setSourceEntity(19U);
    msg.setDestination(2932U);
    msg.setDestinationEntity(222U);
    msg.name.assign("OMXQBTVWLHSEPSWACIAGRMNHCQEKRWUSFGDHGLNNZFURQJLUOLDFDKVJBMTLYEKBUXNAWZXBSGWKIGYBKYLNAMLEKBDYYZAZODIAKJBKIQMCPTCZAFSFODIXVUQTIEANQSNZTGRTLHHWHWQFXLPBOTVRQV");
    msg.report_time = 0.10111052353464967;
    msg.medium = 217U;
    msg.lat = 0.31352989357904804;
    msg.lon = 0.006697619461186632;
    msg.depth = 0.9557495365018378;
    msg.alt = 0.3945779874496206;
    msg.sog = 0.5173833762359193;
    msg.cog = 0.010757639246115613;

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
    msg.setTimeStamp(0.24997527373759965);
    msg.setSource(14894U);
    msg.setSourceEntity(134U);
    msg.setDestination(32234U);
    msg.setDestinationEntity(195U);
    msg.name.assign("WJQQGDTELPZZNKYDCDJNVOMJJCINVZEFCFSSANZMTCVSXONHPGIVPKNBIBCDNQDAQYFUDDZPCAHBL");
    msg.report_time = 0.9482177910746465;
    msg.medium = 86U;
    msg.lat = 0.12199720063602815;
    msg.lon = 0.5737519341073521;
    msg.depth = 0.27003294531753586;
    msg.alt = 0.06340545484336657;
    msg.sog = 0.8281689820689694;
    msg.cog = 0.03327492937581855;

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
    msg.setTimeStamp(0.20136213086491428);
    msg.setSource(25952U);
    msg.setSourceEntity(39U);
    msg.setDestination(23506U);
    msg.setDestinationEntity(240U);
    msg.name.assign("IYJXZNKMFAFYGUPXRNTSSHYHCQDRRJYDVEBTOLACPFGIZBUNWKNYBQWUVUSGKPILJILEOJZANESOIEQRYAAZDYVZUPJKSOCFOROPLDHHZUNTFSRTGBXOBQOPZQMMIWZIL");
    msg.report_time = 0.523383137480616;
    msg.medium = 229U;
    msg.lat = 0.8388119815596535;
    msg.lon = 0.29259853618405496;
    msg.depth = 0.016843633652698697;
    msg.alt = 0.6770329672559164;
    msg.sog = 0.6657144680201903;
    msg.cog = 0.31017103510876465;

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
    msg.setTimeStamp(0.5308091476616005);
    msg.setSource(31128U);
    msg.setSourceEntity(243U);
    msg.setDestination(56891U);
    msg.setDestinationEntity(108U);

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
    msg.setTimeStamp(0.6092326117895671);
    msg.setSource(3432U);
    msg.setSourceEntity(132U);
    msg.setDestination(59227U);
    msg.setDestinationEntity(158U);

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
    msg.setTimeStamp(0.29130150879224836);
    msg.setSource(26944U);
    msg.setSourceEntity(246U);
    msg.setDestination(38968U);
    msg.setDestinationEntity(38U);

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
    msg.setTimeStamp(0.6602812241883638);
    msg.setSource(62228U);
    msg.setSourceEntity(61U);
    msg.setDestination(52877U);
    msg.setDestinationEntity(229U);
    msg.plan_id.assign("JBIFKUAXMQDTTPTCGSXFQVIHIYENKPVUBLDQGMPVZNZRDHQMCKHHMQZOTPXPVMJFIOAZRJBSXYBFBMNYEUTERS");
    msg.description.assign("XCBESOEUPHEWUPUCWRAFNYXLVFULTHEESVIBCEQKZUSIA");
    msg.vnamespace.assign("IKQFDQOEGVKJOLQEPCKZXLRPCTMAPWMCTIDPAKRYICNMXPTVRSZHCLMORQTECEADNMUUDSHKBTXPLPMJUBBDZYHFVKERWKYDNEZUPLSVAXHYBRYVGUDEYFQEGAQTJBSJIZMOFOOYXFXRWSCLESLVBVBASGAHWJCNNUIUXTEHZZRVQWUANZZHRXBGLTJCDYHHGGXVMNJFOGIRNQMLDWOJWOLFCFTZUKXNAHPSBSFPD");
    msg.start_man_id.assign("COICKZBYPPZPZHXFMEJZOSOTNDGKRHCQQHSBJUHVLJZETWZKYMCYYHZVUIMNFZCOXGFIUAOXVKNKGSTIEJTBTBTFGPPSDUIYWWSV");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("YPRMTYWZCSBDWLBNKMQTIERVIZKQLYKWPBYDSCOEFVDGPPRZR");
    IMC::FollowPath tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 13219U;
    tmp_tmp_msg_0_0.lat = 0.0408411875647412;
    tmp_tmp_msg_0_0.lon = 0.5690711158677313;
    tmp_tmp_msg_0_0.z = 0.5052157009959225;
    tmp_tmp_msg_0_0.z_units = 49U;
    tmp_tmp_msg_0_0.speed = 0.02449141355226825;
    tmp_tmp_msg_0_0.speed_units = 186U;
    tmp_tmp_msg_0_0.custom.assign("FDVPIWZWJALR");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("ZNJOLSVMHRWUAZVBYWGWMKQEAMABJFLATWLEPKGFTXXYRNQPDIRUNBKLFYTBAGZTQKRASJXXJPHJYHEDBVUXIEIGPSLUYFCHVPFMLXHZOTUFQJLWHASRBCXSRFEMGOFDNUEIPISCVVHHTBNCZBKICSKZUMHAEYYJIMGUDCOVCWCAZEQANPVQBLQHKKQPF");
    tmp_msg_1.dest_man.assign("YUDPYZHKEKPBEVNBTBIGURCKIYKMTOTMSSJLCPWZLQGEGHAMBNISBRSVVCYZQEFPRSMZILOYHNGKFTJRXAI");
    tmp_msg_1.conditions.assign("DBUGUQBLXLTXMWBAKIEMHZUTGBOCAF");
    IMC::UamTxStatus tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.seq = 14498U;
    tmp_tmp_msg_1_0.value = 134U;
    tmp_tmp_msg_1_0.error.assign("DGPOHXJHEUUTIVTZVIDUWWZMYSSMELZGNGKYXHYPBFSYFTUSBLRZKOWABREOJEWIVLACKMYXKDIBNAHDHXPBTJUOYBKTZKWEVCLUZZADIDGTXNRPQRUSLXNLGPUDRIKQAALDRAVAEWEUHMGLQAQHJOBXNCSIRQZ");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::FuelLevel tmp_msg_2;
    tmp_msg_2.value = 0.8877433542445639;
    tmp_msg_2.confidence = 0.18124440407392028;
    tmp_msg_2.opmodes.assign("QRVSLRPPDWMEQIXUQONFCOITDULJLWYTCVSTBFWJKCNXIHZNIFCMGBFMRXHAZIUEAGKASXVCIWMEHDUEXBRBKXRSCBMSLNNIDXJDHGWXMQYQ");
    msg.start_actions.push_back(tmp_msg_2);
    IMC::NeptusBlob tmp_msg_3;
    tmp_msg_3.content_type.assign("OJIAWQAZRAVQIAHJCOKKVPICSRGUUNJDFHVLEHJQMYVKGBOZYH");
    const signed char tmp_tmp_msg_3_0[] = {-90, 10, 85, -115, -82, 95, -119, 88, -100, -9, -67, 113, 55, -60, -107, 63, 59, -46, -39, 87, 18, 17, -12, 36, -48, 124, 21, 101, 36, 113, 35, 123, -104, 38, -72, -98, -93, -18, 124, 103, -79, 2, -47, 60, 1, -22, 17, 80, -85, 26, 2, -120, -91, -122, -127, 27, -100, -126, -128, -101, 122, 66, 115, 102, 88, 115, 4, -28, -51, -56, -21, -28, -14, -108, 29, -56, 2, 50, -59, 122, 15, -14, -61, -1, 93, -51, -113, 50, 122, 82, -117, 7, 79, 91, -33, -18, -15, -82, -83, 31, 1, -52, 108, 116, -21, 83, -36, 118, -20, 79, -41, 1, 48, 124, -38, -110, 24, -57, 12};
    tmp_msg_3.content.assign(tmp_tmp_msg_3_0, tmp_tmp_msg_3_0 + sizeof(tmp_tmp_msg_3_0));
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
    msg.setTimeStamp(0.6779825393639713);
    msg.setSource(20798U);
    msg.setSourceEntity(165U);
    msg.setDestination(10276U);
    msg.setDestinationEntity(254U);
    msg.plan_id.assign("YPBZQVOAHWALUEKUBXQVCOHHEBKYCEAJEBINFSTXTWRFJYPAQXDLNXMCBYNZHPU");
    msg.description.assign("YGUKBXCAUQUKLCMFSYHRQRPDZVWUVBGVGXOXCVWUOPJCBOWVNHHBHKYOFVCXUTZBVJFQWAUSMNTAOKIELILAEKT");
    msg.vnamespace.assign("MKMINZEIQZRUTOFHSBJYQCUBHMSK");
    msg.start_man_id.assign("BDSMFTWMQKPQXBHEOWMYQPYJPBBPZEKXKAJFIUUN");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("MNTIMEOORFRQHXHOBZKSWYGGSFPASYFPHTALDBOIWPZMFMMOLBWJNYGNVAICBOLHLEAZEUOPECMZRQNJMVKUMHOOTHSVCQZVBJVIAGLUPXTZXPB");
    IMC::CompassCalibration tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 60617U;
    tmp_tmp_msg_0_0.lat = 0.5660891373732604;
    tmp_tmp_msg_0_0.lon = 0.859350575177018;
    tmp_tmp_msg_0_0.z = 0.9354199107566278;
    tmp_tmp_msg_0_0.z_units = 220U;
    tmp_tmp_msg_0_0.pitch = 0.4392134977857355;
    tmp_tmp_msg_0_0.amplitude = 0.4230549895879938;
    tmp_tmp_msg_0_0.duration = 22724U;
    tmp_tmp_msg_0_0.speed = 0.6442023694943894;
    tmp_tmp_msg_0_0.speed_units = 176U;
    tmp_tmp_msg_0_0.radius = 0.23402290036284457;
    tmp_tmp_msg_0_0.direction = 231U;
    tmp_tmp_msg_0_0.custom.assign("UWBOXCXINPVJECOLDZZELSDWDGZFXGGVLBXQGIAYJHRISYNJCNSURVLPMHOQCSBLVKDMWNMBFYMSOPQEDCKTYSYUCHDRTXYEOIVZAHNRJWWOITHFFVHLKQMUERFDDZEVKFGUQXPPAUMCTQLJSPIIMWQNZMNSYGLZACJOAOBFTWHAUMBRRTZKJVCMTQXFNTARUVPNJEXWD");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::PlanDB tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.type = 209U;
    tmp_tmp_msg_0_1.op = 219U;
    tmp_tmp_msg_0_1.request_id = 43087U;
    tmp_tmp_msg_0_1.plan_id.assign("EEYTPXYNDONJRAYXUPQXSFHOAIAJXYCGNRQSKRGFNSTLXGOXVFCDEJLTJTIDXSOYQCKQSZURMFDMIUIGQOYJOUGEINUWZYMVBKJHDFWQCSMPPCOTLNGVAGQPTCAVWJQWMKBOXZDYFBVG");
    IMC::Calibration tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.duration = 43827U;
    tmp_tmp_msg_0_1.arg.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_tmp_msg_0_1.info.assign("SNHRRBIYHINKIHCNJDXUBSSSXWURSDBPNASYGXBVIDTLAYHLOKPLCPOYXRKHEBDJQMTGFUDVWYQHIOYOGVTPQZLFDZUYQEPWXBBFFIQFEIZAJRZTVICLQKCVUJGZWPRRMMPWAEIIDJMZSLNKKUXSCHRLNRCAEPOJEEE");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
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
    msg.setTimeStamp(0.36726661273952377);
    msg.setSource(38379U);
    msg.setSourceEntity(117U);
    msg.setDestination(6112U);
    msg.setDestinationEntity(192U);
    msg.plan_id.assign("OMNKBPSXTIFVZBRQIOQUWEUVZHAGYZKOKTJPHEWFDYUDWCMAAYNFQWMIVIXOODGESXTYCYVLJMPJSOJNMUHJYIYXHGEPQXMSYPWFQQQGHRXTBJHEURDMVTKDKFNDJYNISKSCFNRKLGXRLIGDQXRAUVBVZQPDSWKLAAIAORSDTCLUTJVGUSRWJOHPPAHWZDPVETUSTRNWPCBOCFEGABB");
    msg.description.assign("UWYKQRXCPZSMRQZVFHODNSHLYPBPAHYPJTGCQZBKOSCYZNERDLOTCHAMJWBXDPVWLCIWRVXVSFEIKGUBDSDMWQYJWARVAYJCLNVFGEMBKFOMXFDNJGLJXJAXGUWHSTNAVMTSAPTFIDFWSGHAREJBOZKBVULLUREQVDDGIZYOOEVYZZIPKRBBUULEENUMMGFHBZOGNIHCZUAIWTQFYKXEPXKKPJNEOKDXAQCNJCISSPM");
    msg.vnamespace.assign("LDGBIIFUITWPDFNXQGBRWJSECPOAZEQYOZIZWGAHHVNXFYQQUVEKBPGBSJCXIOHAUMSGAMFXRKZDVUJNHVCKXELMASWPBOCKCDOLXVJSSYERYIHXJHGXYTFTDHLAAFZUBNMNVWZVBDZTEGRQWBMJNTUNWRMMXPBJLTPLRRINRNIXGQCPTGJUCJHFYKZKLQUCPCZEIYPRWLKTWQTCUFHKEQDSVEET");
    msg.start_man_id.assign("IYNMNMTNHBQIZMROXWIVGEOSIUNOHJVGIAXRWEFRIKDJJJTTNXFOMVEDFPGQBLYLOJJPPUBQUG");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("YPOVLZHTVINKLTPBXCVEFSMCGRZZBUU");
    IMC::CommsRelay tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.24170925405195443;
    tmp_tmp_msg_0_0.lon = 0.6195664766239426;
    tmp_tmp_msg_0_0.speed = 0.48522913098581855;
    tmp_tmp_msg_0_0.speed_units = 155U;
    tmp_tmp_msg_0_0.duration = 1573U;
    tmp_tmp_msg_0_0.sys_a = 48828U;
    tmp_tmp_msg_0_0.sys_b = 21128U;
    tmp_tmp_msg_0_0.move_threshold = 0.06849490391706359;
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("EQZHAQGAMZUTAGOCQCXZIXSATJHGQFUYELEKMPWJQKXHJRBUGJMJJIEWWWKLRSKHRTPUCPOITZQHKENAFQA");
    tmp_msg_1.dest_man.assign("FEZAJCRAOUXQHCUZAPPQZTVPBRWKLNALCWRYPIFEHXRNDFSYHMGLNDSVMYYDHEPWYYQULKUGNLMXPNRVYLEXSCABXTQGGUOSOOXXHAPKZIPDNWMNDFIKIKSBZRYGAROFGUHEFEMVVTWBSBXKICXWOQMPZVOGJEBIJZIJKLRGNXLTIMRDKVWYUGZICIQGWHFHMOCZFBHDPUDAQCYSBVVUCKOTWQJNOAJEDMSBJFMNCRZETTHQST");
    tmp_msg_1.conditions.assign("OPBGYGIVPTXTUONWNCRPANGAVQPZYRIEEZVELXDMLRORBFODNMDSECYNEHMVRJVEXIOWBHZPBRGJXGAVOHMSWDRZCWWECSKJQLLQZFOTNNYKUZSUPITKSSHLUTHJJILLZWZBHEJUTNQFBIPVWCFIAAPAACYXMUSKXDKQMBQDENXSUWUOKAIJUK");
    IMC::DesiredHeadingRate tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.value = 0.11845558817712087;
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::DesiredVerticalRate tmp_msg_2;
    tmp_msg_2.value = 0.1654402076507837;
    msg.start_actions.push_back(tmp_msg_2);
    IMC::Voltage tmp_msg_3;
    tmp_msg_3.value = 0.8813152857338762;
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
    msg.setTimeStamp(0.23693640757187973);
    msg.setSource(37787U);
    msg.setSourceEntity(147U);
    msg.setDestination(48740U);
    msg.setDestinationEntity(126U);
    msg.maneuver_id.assign("DJZEGCKKCNHZAHVPVHQZFHUOVQQOUDPKZLBM");
    IMC::PopUp tmp_msg_0;
    tmp_msg_0.timeout = 39696U;
    tmp_msg_0.lat = 0.8045809959020296;
    tmp_msg_0.lon = 0.8762535050946577;
    tmp_msg_0.z = 0.7241885924446921;
    tmp_msg_0.z_units = 201U;
    tmp_msg_0.speed = 0.6796303295454189;
    tmp_msg_0.speed_units = 218U;
    tmp_msg_0.duration = 30074U;
    tmp_msg_0.radius = 0.5200878653710193;
    tmp_msg_0.flags = 1U;
    tmp_msg_0.custom.assign("KIGPIHSGMTNIOXTJBYOSWNBNUASNBKZPUXOVAKMUQEFECWQCBJHHYRGNTYYEBMNMAVQGUGIHUXSJXJBNCWJVDCKKOEBPEEKPITZNUZOZSIHWGWQOZSKGRAPMDPICXKZTHCXJRDMMDGSIQNWYULDKQTVFVVFYOOAQEUDSBIFRAHPWRHFENRVYXUAFTJBDLVQMFRHZWYRHGOIMPCQDETXJALWRDJLZZOKGZCASSY");
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
    msg.setTimeStamp(0.8328693775352792);
    msg.setSource(19264U);
    msg.setSourceEntity(64U);
    msg.setDestination(45042U);
    msg.setDestinationEntity(75U);
    msg.maneuver_id.assign("JEBGFLNRPAXKUJYGDGFIPEFUAVDLQDVRTIBWOKTFDUBTHZHXNHH");
    IMC::ImageTracking tmp_msg_0;
    msg.data.set(tmp_msg_0);
    IMC::CacheControl tmp_msg_1;
    tmp_msg_1.op = 179U;
    tmp_msg_1.snapshot.assign("WDSCPJTPSDFQVQIFVCUAUHJWMORQWECGXHJHLKKIEZOFVLNNPOKGMFOLIGHDPTWDTJFKMLVBBGVGTABMMVURNAKAHKYWXSBOUCCPKILDZYOJERTEYBRHNWVWCMLEVLIYWLXGFMUZNQQXQPTHGJZIVYQCDYSQCSASFJRWBXOCTQOKUEDRTOYUGXQDFSEC");
    IMC::Heartbeat tmp_tmp_msg_1_0;
    tmp_msg_1.message.set(tmp_tmp_msg_1_0);
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
    msg.setTimeStamp(0.1600586812469258);
    msg.setSource(39691U);
    msg.setSourceEntity(210U);
    msg.setDestination(59381U);
    msg.setDestinationEntity(29U);
    msg.maneuver_id.assign("WYGOKEBHRJYCHOHDCPRLRFYWWLXGKWDKIFQXNBJDXFLBLOMTESUFALBGIIMEBRIPDHNCZAUCYXOKXPALNAWTYTTSTJQDLILWVJRX");
    IMC::Dislodge tmp_msg_0;
    tmp_msg_0.timeout = 19091U;
    tmp_msg_0.rpm = 0.006702057564776487;
    tmp_msg_0.direction = 222U;
    tmp_msg_0.custom.assign("DMHCFXKXJYENVMYFEPOZRVSPJKPVYTUNFUGVHMEDKBHKGMZZJZHTXBJWKSAQOROBDJESRHARIYTYXEZVNOXKIMTMYHHIZYDFILXWDBXALYTICTRPJRMFFDDOQZGBDOSHPNZLAELVKQVIQMZYHCPXJ");
    msg.data.set(tmp_msg_0);
    IMC::VehicleState tmp_msg_1;
    tmp_msg_1.op_mode = 221U;
    tmp_msg_1.error_count = 46U;
    tmp_msg_1.error_ents.assign("ONBWKYVMOFVPFJGCIZRIMFANSRSPJBBERBUGMWXQDULZLTBQQRTKMICKESJISYTKYNMTWFNFYQBNWLATGQXDNBSAYRICPOPJOKZOPNQMONLSFQVNHLKJHPSYAILYUIDHWCZABMHHHGWXJYFCCUEJTTKZZRWPZVSJQ");
    tmp_msg_1.maneuver_type = 20502U;
    tmp_msg_1.maneuver_stime = 0.04063095418244944;
    tmp_msg_1.maneuver_eta = 31352U;
    tmp_msg_1.control_loops = 653237721U;
    tmp_msg_1.flags = 102U;
    tmp_msg_1.last_error.assign("VHGWXLCHEOBNPZTUMXTGAAAEUPUCGNDPFSFFCMQDNDCFJBKDVLKEHUGTNIMQAGLSWJBEITMMMOZHBPJJXLOIBTPVWOYOGQDAJABDNQHXVAXXZDXWWHLZYAHDIJSR");
    tmp_msg_1.last_error_time = 0.4417872053513887;
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
    msg.setTimeStamp(0.548437684773108);
    msg.setSource(1253U);
    msg.setSourceEntity(68U);
    msg.setDestination(25068U);
    msg.setDestinationEntity(121U);
    msg.source_man.assign("CEIHWJRTBVYIMRZVEYDTQVQNSLALOVKYOSUOPADSEZJWOXOYETLPLZHDHXQXNCCUEWKUARXYDFIMNZSZLYHPFPQIHDLNQYUUJMGGCKWAUIRSTGBQFJKMDVXIKWZBOVOVUJVYJRIANRSAGNXEBGPBLTN");
    msg.dest_man.assign("TJGPPYNFXYMFUVTSPVYUMSPAADJPEDCYAYRSIQEXBQLFURSJWTHONAXPBVMSDEQNVZRMHVJO");
    msg.conditions.assign("NZOHPSLGSIRFQLKIFCJZY");

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
    msg.setTimeStamp(0.9105734020088165);
    msg.setSource(47787U);
    msg.setSourceEntity(171U);
    msg.setDestination(10319U);
    msg.setDestinationEntity(14U);
    msg.source_man.assign("YXAQAEKWSGDKHNAFJFSVVOQFLROGCHNJRCPNAOUTEUICLAHYFRSJFXZJUNSDWXYPNNJAZUPSHDURFKOSDOVPSEXTTBHOICKILUNMEKYDWQVIAMVHMGJMQJDYYBLTDOLXTSEBGEKJXSGMYMPGWIXYNMNWGEXQTEVAOQCFPYTRPWZCRKTQZCBQWKHFVBLZBIAUBTGARBLMIGOPJJEZQZKMUZWRIPXNIXZHKZH");
    msg.dest_man.assign("GJSLRYKSGZMAZLAKWFKYKIDOLYCOFMHHURILPWQENINEPGAYTSEUBNQDVJESMKAWUGDCKFAPFWRTVELBSYQRXJUYOBQDTZYPPUR");
    msg.conditions.assign("EYSHIBVRQFUNQOCYMVDPFKMGDBYQFZPLUBDHEMJUGVXQGROEVCEJCYLATVLIQPFPZIBQRBKXMZTGEJVJWSADSPRXFUVONSNSBIVXPAWLTLMHGXSZCMIJKT");
    IMC::SimulatedState tmp_msg_0;
    tmp_msg_0.lat = 0.736351668703383;
    tmp_msg_0.lon = 0.44778218767689804;
    tmp_msg_0.height = 0.6524201207384476;
    tmp_msg_0.x = 0.22681859707292218;
    tmp_msg_0.y = 0.8618028970740407;
    tmp_msg_0.z = 0.0015483533170068675;
    tmp_msg_0.phi = 0.8401765756815351;
    tmp_msg_0.theta = 0.6386376513109928;
    tmp_msg_0.psi = 0.9214140183635888;
    tmp_msg_0.u = 0.2584477678916276;
    tmp_msg_0.v = 0.6423884088231554;
    tmp_msg_0.w = 0.1539370815175879;
    tmp_msg_0.p = 0.3662547709766829;
    tmp_msg_0.q = 0.6523015242717233;
    tmp_msg_0.r = 0.017199449569666125;
    tmp_msg_0.svx = 0.877689850025308;
    tmp_msg_0.svy = 0.8482130443631192;
    tmp_msg_0.svz = 0.38587383627099237;
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
    msg.setTimeStamp(0.24940280963960992);
    msg.setSource(44785U);
    msg.setSourceEntity(81U);
    msg.setDestination(48227U);
    msg.setDestinationEntity(130U);
    msg.source_man.assign("BKZFHMPBKIOFHGYNPKQBIYOANMRVYLWTQFHZURJIWMENBGUSTFWAOIOYVGPRKKEASDTAULEKWXKJZIGWBUWLOEXIOQEPEZXDSZCCVRRHDSJBDUAQCEEULXUXEZHMPXDLKNCHTQBVCERVBXYZCIQSJPAASGTXOCIJPSRGTLZFMOVTRZ");
    msg.dest_man.assign("XPHSZBRVXRTSAZXDXMVKMUSCJYQADLLBBHMWWBAWNFRYHRLCRDWJAIBMRKVIUTCQQUBHLFUGLOETZZANFXNFJOPTOMSMUEIVWZSZSDSYJKYVHRVGTIDKWQCOYFGDTOZIUHMKIQFYGFJKXDYCBDETJECEASUPPJKNNPPRQLSEAGBAFWCMGZAVSLVXTDIQCPVFNXGVIEBYLGFM");
    msg.conditions.assign("FPSVYBCFFUADAGQTAAXGYWKPKZHXNMBQZKUOKONHWYDECGSAYMQYCYJNBWQXGIMYMRKAYUOAVZZRTZCRLQAZTXELHZCGMGMTEDTVJIJHPLPIKJMPBEJXVKAWLSCGPNEIIJLVNNRVTBFIWVIMBZDWHRPHGQDJSTHPHRVZGBRKDFCTASHQFIVURCWNH");
    IMC::MonitorEntityState tmp_msg_0;
    tmp_msg_0.command = 118U;
    tmp_msg_0.entities.assign("RXHOSKWEUFPWKERLGOSCIYHBOLGWKNUPAJFTGJTLBSPSZLEBIYNBEVKDFKPWNBUNMLTCLLRQKXAYIKFYOTXEJGCCNAPEUVXSUZQCTSXTFCYODZQHBNQIDMTKYC");
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
    msg.setTimeStamp(0.15032586245622537);
    msg.setSource(4709U);
    msg.setSourceEntity(107U);
    msg.setDestination(40568U);
    msg.setDestinationEntity(149U);
    msg.command = 73U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ZQUTUFISUZNBYGFZFNNAEUXHPFIAFBVDYJEHOFYTGMUPEPFAMHWYJKDGKFTEGIHZWOHAMOLMBRLXRXPETDCGLPXSIGUJMNAVXHVSHKYDNTUJGCTQRCXFWVIEAKCAHJHKLZUPAEVISOKYGVSQAPOQVYQZLRWZBXQBBDQRZXWCKLMYSKVGPMEMXIYQCVNLIPDKSNOQU");
    tmp_msg_0.description.assign("UNREFRCBIAUESXSVWPLPOZFTVUAMCCJHKJQGWPMYKVBLJYTYUFQMQD");
    tmp_msg_0.vnamespace.assign("WQTNYRBGXHIWDFMRNITLUGHRJRGNQCCMTRZJSHYDUXKVQFZGGGLBKIAMDHOVNHSOWXQYVVMTQZOBXIUCIUZOCRWVOAYVMRITDOLBVHIZTMTPILMLPAGFOESEQKBJJCUFWJCLZEBXUIQDGPEWOJQYRIK");
    tmp_msg_0.start_man_id.assign("LCRAXJJLHJWBGXATPMDRCGRETCWHZQHSBDSPANHREFFXNMGNCTGYAGVMACUHUPHZHPIBLCZJLZCIBROVJFILYGKMKMLLDBBQZMSPSNFYFEVA");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("HPSHTVBCXYGZKIGPDCQGRNJFTGPDXYKKPROUYEIOANVWBADQLOVKOSIGJQGKVFWNTRRNYUBIKBSIMSPBCRLGEDRWEYCHLVMSMLWKAQLMQNTENCSBWFNEBFTOTYAJXOAEZWFZOJZZCMQMMYJIAHKICHWXTSCQUIHS");
    IMC::FollowReference tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.control_src = 63194U;
    tmp_tmp_tmp_msg_0_0_0.control_ent = 127U;
    tmp_tmp_tmp_msg_0_0_0.timeout = 0.19024885988193663;
    tmp_tmp_tmp_msg_0_0_0.loiter_radius = 0.2619030402456677;
    tmp_tmp_tmp_msg_0_0_0.altitude_interval = 0.35542905927144575;
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::QueryPowerChannelState tmp_tmp_msg_0_1;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::RemoteActions tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.actions.assign("WWNLKMWYNVBBYKQBLIHWTUDEYZOJXYBCGXLPOPFCGMLTKVZSKTIHGXDORLZSMOFBHJDZQOBYUFGNP");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
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
    msg.setTimeStamp(0.6211459855974427);
    msg.setSource(23474U);
    msg.setSourceEntity(215U);
    msg.setDestination(8948U);
    msg.setDestinationEntity(61U);
    msg.command = 200U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("LWYOZPQYVOIDYFLUOSQMEY");
    tmp_msg_0.description.assign("QGKOYWZNEFWUYMRONHVTBHAXXNEQIHIASUBOZRAKNDFJGTCLQQXWWXDVKTICIRMLZGYYQLKSDLDLUHUVCYQQCERIZASJAXJOEWZKSPOKYCDWNRVFUOLWLUTNTJGBXXGTZFEPG");
    tmp_msg_0.vnamespace.assign("WSIUYDYUVPLCLHUTAWSQHNGVMRCKMYJDONJOKBOHWJYCPYSSQKRWXBPXCLCACEDLWALHIKQPNYVGYQJGSIUMPTVUFCQHZUEHGFFKUBJYBUBMVJZZDTJNMMOKYSLUREVXIXGQFAJGZTXIGRPRZQVEZRXADAAETWKTFFMAOW");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("YOFBZNIWALFDUJWFANPXHXZOTXEYZDXLNYJCER");
    tmp_tmp_msg_0_0.value.assign("VSGBOTMKDATPEQOYPZSXIRLBMLHQKHZAVCSMKNHHZDJFCPDFYALJDMFMKPSFHTDJZHKIGPXLRUIZWRJRVGOQVBLJTXQOJBMPZGNCWXGKTXJYJGXKFVUAORGFRYGLIGEKHBENCOINWYEFXBFABVRTLKUYAZDDSUGYEMFIVDQZEUZZSTLNNDOWWVQBXEHMSHLSNLQHMCPOPUTYBWIOQWCMYDURWIVUYFCRRITBXJPANWUPICSJEQKEWANUSE");
    tmp_tmp_msg_0_0.type = 100U;
    tmp_tmp_msg_0_0.access = 191U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("DPBFLEZPUXJVARNFMYAWJWTQWUTDVNHGFANASGQPLIRNCGJUMIICSTPRRFXUVJIMCNIWPOMFHZAEZLEMCTHQMPLNQIOTBSOSIIBZQUHLKFUTXWDNCZWBDKDDOEPIRVYHUKOZYRVCKUAEAVMMQWWXYHXPIMYLVNQJARWGSLSHBKEYXFGZSGVCRUGDXTHB");
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
    msg.setTimeStamp(0.464067242762352);
    msg.setSource(16181U);
    msg.setSourceEntity(8U);
    msg.setDestination(49015U);
    msg.setDestinationEntity(48U);
    msg.command = 232U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("JBKNSYQOHVGEFBWLOJCBYVKQRXYLHFGOSVFXRTQXNDDRZXPBTXCXMVPRLMVCHAKAZSCIBWFHLJQSZRAZLCJ");
    tmp_msg_0.description.assign("HFNULJIXFENUFQYJOTZJQAETTQRTRXYMVHPOVPVPRKZGEIBNCZZKYNXAHPOBYFIHNJPOWCTWNOLNDAWZXBEAIRPUCBCRSDWFYPVRDZKBKTHCIOWIQWCMHLQKTORCVLULMFGRBLZUHSKPLOHVDNQAOIBFSDMUXPOAGEHK");
    tmp_msg_0.vnamespace.assign("SCWJQKLFQEUVVJMFOSTTWKEHIJRMT");
    tmp_msg_0.start_man_id.assign("BTDCTSILGALGEPHGTAYZRSWPHVVVZLNZDJXIVYQEJUWWQMIODDTFIEOMWKUJGAXBSPSTTOZNPNQRLEBVTAHBUVMFUKVOBALOSBWYGKAFZURHOMHBGYDGFTRXOOJJEIPUMHXXWRWSNCPCIPADLMMBRQKQXCIANYAWQZDIAPULBYGMZRIHLWJDYXKWKLEHQBNYKJCDFFFLNIHJZXSEQSZTMGDOKRSNQPUMCFUSCFRXRJNUGY");
    IMC::PlanTransition tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.source_man.assign("UISBBQFLIYWJCAOYPBQKJC");
    tmp_tmp_msg_0_0.dest_man.assign("XOMIFNGGBBSNYKLSOWIROKTPOLLECOFNESQULWCJVZRRITEAIFUMRBTAORUSPYPZMGSYEINCPVXPIYEHHEUQCXNLIDPTQHOZAMGDXGQVSZARUYGZEXSYZFKZUPJVCHNOVWYRMJBIHSVCKJVKAPEJFWTTKXGGYDDQUQTSTVQPONWKJUDAFBHXBQCBQWZLITFZMVBQJJKWFXRKUUNCXEDZJMXNDLLVPCWJCWLFRMYABLDHHAGTHBWAHMYD");
    tmp_tmp_msg_0_0.conditions.assign("SXBFUEXOXXKWHXDDVSTGPLNXEQAKMROBMYRGBWWPTUCYPHYUNWOGCCSTAJAKGYJIHOBDIQZJYKWCWILEMJXAABRNVEVQFKEAWDKQZVELOIMOUHXDNRUYZJWXFLHGUAZRCYSSV");
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
    msg.setTimeStamp(0.863996702693789);
    msg.setSource(57767U);
    msg.setSourceEntity(121U);
    msg.setDestination(53622U);
    msg.setDestinationEntity(105U);
    msg.state = 122U;
    msg.plan_id.assign("PRXAHVUIRSKEOTJVIGFWZFHGKQOPPOOEQCCECTRBGDQSEDLVNTULBOLWPQTRKNBLYCHNZFAVNHZLDNQBCDYNYNQVGFTGTSRACCDVXYQKAOKFLIWJZTSWGUHCIXYLUEMWZJBIDXTKBXEJAGOJHFNMBXMXXUSHXBRABLLHNRHMUVJNSSVPRUZGIWWYKPQIOVIPIAMYJKISFGWPYAWZPJXFHOEJZPMCDSEZRGQMUJ");
    msg.comm_level = 221U;

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
    msg.setTimeStamp(0.5084568339508624);
    msg.setSource(13821U);
    msg.setSourceEntity(17U);
    msg.setDestination(57579U);
    msg.setDestinationEntity(218U);
    msg.state = 4U;
    msg.plan_id.assign("VNYEKGSNSRPHNQFPUWNMRCBMYMJXVDIXBOTBXPTCPNFBVZRTUWRFACLTVVKJBSDXYIKMQHMDYFQOPQKOAFEVANOUYDKKHTXHJZWMWLCPZBCDGREFMLAYLAJWZLNAETJSJTCGEBYSLHTTMDQWXCZHOQGRCXOSKYCV");
    msg.comm_level = 102U;

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
    msg.setTimeStamp(0.7142208895488337);
    msg.setSource(5241U);
    msg.setSourceEntity(233U);
    msg.setDestination(12606U);
    msg.setDestinationEntity(91U);
    msg.state = 31U;
    msg.plan_id.assign("HGIKKKNCDPRTGWBWJBLMMMVDLOEORCNRZEDQAYILDVEEU");
    msg.comm_level = 126U;

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
    msg.setTimeStamp(0.8399966131126645);
    msg.setSource(21763U);
    msg.setSourceEntity(204U);
    msg.setDestination(64393U);
    msg.setDestinationEntity(103U);
    msg.type = 174U;
    msg.op = 252U;
    msg.request_id = 57249U;
    msg.plan_id.assign("PYWQVDTMVVZIHTXRLXJMNZSPTKYHYFQATXNGAZESEVSRMOKDLPITUYEVLROXCUDPQUKZHCOOWLIZEDQBSYQTUELFBDTHTUEWFCUCIACDNUFXDDGGRLJJJWJYNAAVSMPXSCYZFVPNOOMBYDSFXBHKMNZJBWJUAPKCNKI");
    IMC::EmergencyControl tmp_msg_0;
    tmp_msg_0.command = 47U;
    IMC::PlanSpecification tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id.assign("CPSAXNPMZPNONOOXPRIDIQASATBYSMBOVAYTCFJRFCDGOAQLDYLDEBKURWPBPRRVICJRUBFKMZCOLNHGDGLFWZTWVPFYNKCFWQIAZXEJUHNXVMKDOSXCEYRVOISIQVRBSPCBMMWSKAEZQGUJJZXZSHFTTRVMEYFHLAFWCUOTKVVXXJWUPEAIYULTMZZMWEUBNHRCLIKDNLGJQQYEXYJGMPEKJUYSIIJBNXDBHDHHTLDWGQVTQAGZHWGSGKUT");
    tmp_tmp_msg_0_0.description.assign("ZLEIQGDHDXVWNSTNPRZJMMCJDKFKEEHXAQCHDQNUYRCRFSOJLSGLOLMAFZWQUJSIBYRHEWTXEX");
    tmp_tmp_msg_0_0.vnamespace.assign("OEAKTOMMNTEOZATWDCGBXRDXAKCJZRTYNXNIZMQNFLCPSZNJUQHLXGKDXUXDGQAKOKVFKEUTCGSVYVMYUKPNTLACJHYJWASCAGBUBEXNAMTFR");
    tmp_tmp_msg_0_0.start_man_id.assign("WPOPTETRUJSCPCGVXIRLAQVAGBSCYJJWVDLQKJJQLYZXEWGHSFBQVSODJGWUKOXWNRZDHUWFIPSYOSIOZPUYNITEBFKHBVSIBTVMCFGULPGKJAXGKMIAXUTYXYFRZBUNGLCARVYZHLTBLXKCMHRIVBYRF");
    IMC::PlanManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.maneuver_id.assign("MDMVPBECUSDPZTPWPQAQLIUVJFDHLIEHBEHJFRMARM");
    IMC::StationKeeping tmp_tmp_tmp_tmp_msg_0_0_0_0;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lat = 0.35241482869350105;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.lon = 0.5735633627611266;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z = 0.9009595996689758;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.z_units = 45U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.radius = 0.2815842126717639;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.duration = 34695U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed = 0.2865448879696004;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.speed_units = 80U;
    tmp_tmp_tmp_tmp_msg_0_0_0_0.custom.assign("TMBWZEONOIUAFQSCQKGYVHFNHBUOSLVZUEQKTWMULS");
    tmp_tmp_tmp_msg_0_0_0.data.set(tmp_tmp_tmp_tmp_msg_0_0_0_0);
    IMC::Distance tmp_tmp_tmp_tmp_msg_0_0_0_1;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.validity = 86U;
    IMC::DeviceState tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_0;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_0.x = 0.5535592962524994;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_0.y = 0.44908226650356764;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_0.z = 0.9193967322540954;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_0.phi = 0.9809942917998857;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_0.theta = 0.7006267572057374;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_0.psi = 0.10087629831770095;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.location.push_back(tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_0);
    IMC::BeamConfig tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_1;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_1.beam_width = 0.10718485261293365;
    tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_1.beam_height = 0.4155804022992342;
    tmp_tmp_tmp_tmp_msg_0_0_0_1.beam_config.push_back(tmp_tmp_tmp_tmp_tmp_msg_0_0_0_1_1);
    tmp_tmp_tmp_tmp_msg_0_0_0_1.value = 0.7507698277068465;
    tmp_tmp_tmp_msg_0_0_0.start_actions.push_back(tmp_tmp_tmp_tmp_msg_0_0_0_1);
    tmp_tmp_msg_0_0.maneuvers.push_back(tmp_tmp_tmp_msg_0_0_0);
    IMC::SmsRequest tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.req_id = 2124U;
    tmp_tmp_tmp_msg_0_0_1.destination.assign("SHIEDADUTWAHKWQTIWTGVDBNPZVILQTPXHCWOUHYNBRBDKWWQAFCCRUXJSRMJFVZUZBKYVEIRUYSAGNHDF");
    tmp_tmp_tmp_msg_0_0_1.timeout = 0.07260836141758276;
    tmp_tmp_tmp_msg_0_0_1.sms_text.assign("KOKBGNZUFWJAIMJBAZPMXPWRCYIKIPLVTDILZFJFUSEGODXLVXFNLFAZOYDSWNPXIZKSQTYMQEYCYLEZPTAVUZTKBSNHILKNGVGTRASQEHUUFSLVJYFHRJYRGQYIPVSLHCIHMQDUTUMWXKRRDLMOWNNDROXONCDZPVDPAWFJAOGWZPRQYIAQVTSEEBXVETPSHURXMKEH");
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("BRKRICBOVKMYOU");

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
    msg.setTimeStamp(0.1101433795860206);
    msg.setSource(47017U);
    msg.setSourceEntity(35U);
    msg.setDestination(50622U);
    msg.setDestinationEntity(215U);
    msg.type = 150U;
    msg.op = 45U;
    msg.request_id = 28615U;
    msg.plan_id.assign("CGNUXIATIVJMQCFQWZAKCEFXTVFNJRDMKWWTEAVINHSCYHBAOYJTPEKOFSLTQCLAIKYYMEJFZBBYQJDTMGTRUUMLXMINCEVZSOYZHWRXKOSWUKHT");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("JZYSYQNUIYTZHAUWMDRGDLPCDPNAGMVKPWREQBYDRXHDTFEKGIUSBILOTWWGYMMYEQAXVNWUITVLTTNGCIFBFHHPVOZSHJZKJRXQEZW");
    tmp_msg_0.sys_type = 124U;
    tmp_msg_0.owner = 6012U;
    tmp_msg_0.lat = 0.20891448954708436;
    tmp_msg_0.lon = 0.5714241609938872;
    tmp_msg_0.height = 0.030271385328658473;
    tmp_msg_0.services.assign("WPWNPAIBDGIWWVSCWTDMHRVRRAQYMZASJEPNZPIMIHQ");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("ZERLZSFJVCMCDQNVRZCCWZEARXWHFHAODQOEPNVTZNMOBLRLCDJVKTTWEQXGVXNNOYIDBVOYPSNYINPROKGVUTFXJIXUXMIFDWUZUMAECP");

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
    msg.setTimeStamp(0.3242278148196177);
    msg.setSource(57770U);
    msg.setSourceEntity(17U);
    msg.setDestination(12640U);
    msg.setDestinationEntity(72U);
    msg.type = 100U;
    msg.op = 45U;
    msg.request_id = 14276U;
    msg.plan_id.assign("PPLLABRIFDSCKWAUCNVYLDQGYDXXJMTBCPVAZILWNMKSZIOWZEERUAEMXNBYBWOSCJXSETCCQMAAAZHWBDQFYYSVXVJYCUGGHXBQJAGHLKKJDUXEJSFGTRYWLNXUFXVKRZCIKONROZLHLQYSPNFNMBAYQOTDWRULROFDNTEGBMCNGQIHIV");
    IMC::MessagePart tmp_msg_0;
    tmp_msg_0.uid = 135U;
    tmp_msg_0.frag_number = 211U;
    tmp_msg_0.num_frags = 143U;
    const signed char tmp_tmp_msg_0_0[] = {-56, -105, -29, -21, -29, -91, -11, -37, 27, 106, -15, 121, 66, 35, -22, 114, -115, -59, -58, -16, -90, -16, -14, -52, -33, -127, 123, 50, 118, -94, 96, 14, 85, -67, -20, 25, 106, -32, 86, 119, 5, -124, 26, 9, -25, 76, 58, 120, -62, 65, 20, 120, 44, 120, 112, 109, -26, -69, 52, 3, 53, 30, 72, 52, -63, -9, -87, -48, 87, -97, 80, -21, -48};
    tmp_msg_0.data.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.arg.set(tmp_msg_0);
    msg.info.assign("RWBOLECJBESNWXZOQCRRSVSNJRGSOHCTDKWMBBRJQKKPWASZJDXBLYAIJUTDPTFZXUVGUKDPXMSRIXUPYTZLUACODONEDIMYQBPMIVFSNLEZTVMKEBCDFKOYEMNBLAUALQLWKRAVPHNIJWPQCFKYHXHWIDWOTEI");

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
    msg.setTimeStamp(0.6471002393028502);
    msg.setSource(29996U);
    msg.setSourceEntity(150U);
    msg.setDestination(45709U);
    msg.setDestinationEntity(156U);
    msg.plan_count = 45676U;
    msg.plan_size = 2656546604U;
    msg.change_time = 0.5550927027059825;
    msg.change_sid = 51417U;
    msg.change_sname.assign("DHFVLOMVWCRJYXNHAIJRWZTLGFSZYILEBFWNJIESNILTIBGNUCZXAHNGECDOKQFMHVKJWGCXYLIGSEHGSSEDPEZDNQMATHKPDKMPHFWOVYALOVFRMFHWABKKXVOPFOZAVBIYCCNMOEEMRVGSTQIGTYZQDGWIABDTYKJUCHQRDPBHJEKPXMOZXSXYPQSEJWCDTTNYRBW");
    const signed char tmp_msg_0[] = {1, -27, -51, 126, -23, -77, 51, -57, -98, -41, -117, 20, 64, 42, 57, 27, -67, -32, -80, 53, 49, -65, -63, -118, -54, 54, -74, -25, -79, -82, 59, -110, -99, -56, -64, 62, -37, 43, 41, -96, 126, 91, -41, -34, 78, 51, 94, 97, 77, 79, 52, -14, -3, 89, -95, -103, 32, -112, 56, -98, 23, -76, -14, -53, -92, -116, 17, 76, 6, -40, 0, 16, 18, 60, 64, -82, 77, -37, 31, 37, 77, -46, -38, -30, -105, 62, 30, 93, 43, 76, -122, 74, 37, -52, 67, -58, -5, -71, -99, 32, 53, -93, 27, -63, -57, 99, -127, 39, 122, -33, -15, -24, -13, 15, 57, 16, -108, -35, -10, -45, -18, -25, 105, -86, -51, 106, 122, -109, 2, -62, 0, -47, 16, -84, -105, 111, 45, -92, 37, 70, -122, -30, 2, 101, -73, -45, -102, 74, -62, -115, -30, -101, -5, -59, 58, -123, 123, -8, -113, 121, 11, -120, 104, -26, 74, -80, 72, 61, 48};
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
    msg.setTimeStamp(0.7876111407008196);
    msg.setSource(48608U);
    msg.setSourceEntity(231U);
    msg.setDestination(13540U);
    msg.setDestinationEntity(34U);
    msg.plan_count = 28214U;
    msg.plan_size = 1000398005U;
    msg.change_time = 0.45699535547616366;
    msg.change_sid = 32245U;
    msg.change_sname.assign("KIHWRPCMTDHIRGWQZSVXPFGCACXTLHSKJUXWWJQVEJDYCRIGOQFQELNUOGRAEYZDRIUY");
    const signed char tmp_msg_0[] = {-125, -117, -105, -32, -65, 116, 14, -23, 13, -125, -61, 46, -126, 110, -81, -40, 3, 37, 88, 86, -82, -72, 116, -5, 38, 15, 38, 12, -119, -98, -86, 27, 83, 26, -108, -61, -19, 62, -1, 12, 58, 116, 50, 11, 80, -11, -71, 89, -97, 17, -34, 8, -104, 6, -71, -102, -53, 72, 40, 89, 71, -96, -43, -20, 55, 76, 52, -62, 45, -60, 117, 27, 85, 12, 77, -5, -24, -63, 85, 94, 24, 96, -22, 13, 5, 105, -39, -120, 56, 96, 53, 110, 65, 125, -8, -44, 61, 55, -75, -30, 92, 15, 73, 121, -5, -39, 106, 83, 107, -23, -45, -88, 87, 29, -51, -43, -79, 90, 2, 48, 100, 103, -8, -59};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("RIXMWNSPTDZUEGLPCMINROIRWUNLZVXYOTWCLBBHVHIGHPBQIXGGXYGBBMHFIKRMDKMFVHGEFXTKQSOJTLRELIEZGHUSJVBSKJDWRQXBSDMVJYEHNOWDHQVA");
    tmp_msg_1.plan_size = 51406U;
    tmp_msg_1.change_time = 0.7934518764745695;
    tmp_msg_1.change_sid = 59808U;
    tmp_msg_1.change_sname.assign("FELUMSQJSTGRSSKRHQMMKYGVCADSHOVTOQYPXIKBGCKWBGAGCEBJQCENITKKWEDQDPBANVRKIYSBNZYZIJEANMXYYMXKVVPUCUCTNUIGHTFPUYFYUWBUDMWIDGLMFHHOVWYJDCXOPZUQAVGWSRNVXRIJUISENZQTOTXTZQCPBTFXBMNJEQMXSPZJRLJRLKFPBDAGLALRZN");
    const signed char tmp_tmp_msg_1_0[] = {-39, -59, -34, -35, 60, 115, 5, -36, 18, -41, 109, 71, -102, 21, 123, -48, -20, -4, -30, -27, -123, -83, 35, 50, -126, 92, 125, -66, 23, 107, -58, -89, 76, -15, -57, 100, 12, 51, 47, 87, -81, 94, 60, 89, 116, 123, -28, -20, 64, 126, 64, 69, 77, 22, -66, 38, 120, 18, -41, 13, -73, 26, -51, 20, -89, -125, -123, 64, -56, 61, -8, 122, 95, -107, -26, 101, 103, -51, -72, 119, -5, -77, -115, 110, -8, -78, 21, 17, -83, 54, -47, 27, 80, 27, 81, 65, 61, -34, -43, -49, -98, -89, 7, -102, -24, -50, -74, 121, 79, -53, 72, -118, -102, 122, 49, -52, 65, 14, 99, 54, 60, 47, 92, -3, 15, 3, -55, -30, -112, 76, -102, 46, 98, 59, 15, 104, -50, 40, 3, -62, -9, 5, 99, -66, 7, -2, 50, 58, 50, 53, 96, 79, -126, 49, 115, -124, 90, -119, 125, -89, -94, -8, -16, 41, 14, 84, -15, -117, 103, -97, 11, 44, 48, 55, 63, -106, 57, -25, -60, 78, 77, 0, -46, -105, 77, -48, -27, -33};
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
    msg.setTimeStamp(0.4149097871963141);
    msg.setSource(4778U);
    msg.setSourceEntity(133U);
    msg.setDestination(35874U);
    msg.setDestinationEntity(199U);
    msg.plan_count = 40535U;
    msg.plan_size = 3566922480U;
    msg.change_time = 0.4388542559718801;
    msg.change_sid = 55581U;
    msg.change_sname.assign("DFFPZVXJQHNIKYJVAPFQRLTPYEPIJUNBXCQICUIAMLVNTORIRHSGBSKEOAGRFSNORCYRAYHMOQKTYGPAGCVKPEHCGAPYDPUTUPDXOTWHSNDYJEXLEMICBNXTCAYUMBFTJJAFITLBUQYVEKEOKZWKAVHMZCHZS");
    const signed char tmp_msg_0[] = {109, 102, -53, -89, -94, -8, 80, -101, -6, 82, 87, 90, 10, -4, -75, -87, 44, -10, -86, 56, 99, 73, -90, 80, -75, 71, -30, 77, 67, -113, -50, 18, 16, -41, -19, -106, 112, 93, 91, -47, 34, -61, 51, -21, 120, 90, 85, -47, -87, -19, -61, -73, -71, -105, 49, -41, -84, 63, 72, -62, -29, 19, -5, 35, 48, 89, 79, 14, -91, 83, 101, 71, 75, 92, -26, -25, -76, 101, 114, -94, 10, 31, -69, -96, -73, -61, 106, 12, -7, 114, -120, -22, 126, -117, -99, -12, 91, 56, -36, 111, 4, 87, -40, 17, 11, -91, -22, 9, -70, -19, -109, 30, -93, -38, 93, 107, -88, 75, -89, -71, 55, -26, 80, 30, 83, 60, -13, 12, -78, 42, -113, -119, 62, 112, 14, 35, 29, -24, 44, -64, 93, -4, 122, 94, 31, -72, 122, 87, 86, 88, -54, -13, 65, -9, 122, -101, 109, -51, -85, -89, -56, -54, -113, -43, -18, 34, -39, -9, 36, 55, -73, 83, -120, 2, 5, 91, -24, -75, 2, 68, -62, -102, -128, -57, 103, 99, -89, -64, -103, -105, -69, 28, -89, -11, -11, 56, -113, 26, -2, -103, 122, -44, 105, 68, -39, 10, -87, -3, 122, 119, 60, -51, 19, -5, 120, 0, -59, -70, -89, -68, -44, -22, -113, 119, -44, -4, 109, 118, 41, 104, -100, -103, -27, -126, 15};
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
    msg.setTimeStamp(0.23851609760640669);
    msg.setSource(64389U);
    msg.setSourceEntity(238U);
    msg.setDestination(8923U);
    msg.setDestinationEntity(74U);
    msg.plan_id.assign("EERIVQKEHCXTAHLQYDDLKMVKFMASWEUVRNOPOIHODWSPXORFUOKRTUCYFSWIUTJJQZB");
    msg.plan_size = 46196U;
    msg.change_time = 0.13690329500082332;
    msg.change_sid = 21239U;
    msg.change_sname.assign("HDXGVGQKWXREJMPZTILSIUDDWMKLXPKTWTUVYQABNODOUJABDCFGYFFZQMBYEDVKCOIZSOMERWDLMMCPRKNOJZUVRTDXNWFJHYUKJXFFTHSNDPNNATNUGUWBPAQXTJIGHGZWZXICVCZAKYPJFCHYGI");
    const signed char tmp_msg_0[] = {-65, -116, 25, 8, -104, 32, -30, -110, 20, -47, -107, -81, -21, 88, -23, -47, -5, 122, -53, 13, -57, 76, 118, -59, -98, 92, 59, 12, -60, 55, 118, 48, -15, 6, -31, 27, 126, 40, -100, -118, 124, -54, -51, -26, -24, -91, 111, -31, -124, -61, -26, -98, 96, 50, -105, -120, -55, -85, -100, 91, -87, 88, -115, 28, 47, -35, -17, 100, 30, 57, -122, 60, -57, -60, -120, -88, 48, 115, 29, 101, -102, -116, -87, 104, -1, 1, -48, 118, 122, 56, -91, -70, -75, 76, 48, -40, -117, 125, 40, 43, 114, -82, 99, 118, 0, 47, 68, -98, 79, 64, -20, 22, -50, 121, -40, 124, -113, 14, 65, 27, -62, -43, 105, -69, 86, 120, 26, -26, 55, 84, -60, 34, 53, -111, -53, -93, -54, 97, 117, -33, 105, 8, -1, -43, 126, 108, -1, 91, 53, -37, -66, 108, -111, -93, 72, 3, -11, 117, 88, 109, 73, -51, -81, -127, -67, 111, 6, -12, 44, 87, -12, 111, 59, -73, -82, 32, 112, 99, -114, 38, -41, -94, 111, -82, -27, -123, 1, -82, -83, -35, -28, -102, -105, -81, -127, -60, 89, -107, -84, -44, 32, -121, -76, -5, -2, 54, 72, -59, 46, -72, -111, -6, 85, 33, -122, -7};
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
    msg.setTimeStamp(0.3383295486537783);
    msg.setSource(5890U);
    msg.setSourceEntity(238U);
    msg.setDestination(8083U);
    msg.setDestinationEntity(147U);
    msg.plan_id.assign("HCUVONWNWJVEOGEUYFBMTXAHUGTYFPRFPXNKAMLVSPTYJTVQECNCNRQAGFKYSOTHSTLXR");
    msg.plan_size = 25023U;
    msg.change_time = 0.8248087929363284;
    msg.change_sid = 40210U;
    msg.change_sname.assign("JSNJEFKSCMCKGQMMUZAWKGRHERRIWUWZQYAWXDHYPUYDGAHDPIFLTBTVKZCHGMCFJGVQGKBPGPZQNASIUEUMFIRDLYDNXJQGOFCKOIOLJDFAOXZOPNTROBONHZYWVFPLXWYKQXWREBIPLMAMCKCBCUSRMRNJAZTZEFYVU");
    const signed char tmp_msg_0[] = {-120, -9, -7, 4, 90, 7, -66, -19, 114, -102, 110, 65, -126, -49, 109, -78, 62, 1, 65, -104, 40, -44, -105, 28, -7, -25, 4, -85, -1, -76, -32, 77, 96, -11, 26, 71, 23, 35, -32, 11, 56, -121, -47, -33, -122, 82, -1, -22, -8, 23, -114, -47, -104, -60, 84, 57, 105};
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
    msg.setTimeStamp(0.984621058187241);
    msg.setSource(53762U);
    msg.setSourceEntity(18U);
    msg.setDestination(49780U);
    msg.setDestinationEntity(230U);
    msg.plan_id.assign("LXJMGRXRLBUEJFSSTPMGZBQXPWHYFLLTLOCNCXNVRORORCBQPNOFJTDTAIRUIQSWLGKPWWCTDMYDMEEESEPQDVNIABNJNGIDSBLIKJXFMKQTCQYFQOGHJJNCZAOPKKWYWUEAEJZFILHRXSDWVFTGKLPSAIWPBUAY");
    msg.plan_size = 42756U;
    msg.change_time = 0.21231325657894895;
    msg.change_sid = 39823U;
    msg.change_sname.assign("XZKSARXIUHFRBOQEJPUYPLLYNEAFJAROVWAWTSSPPSAVCRZYMATNUCTUJVCEGITQBCONVOXUKTUZIWJSDDYEKZCSCFTGIFXFJWMRWJHNPQLJFFQDKYUIGLKDQDDFWVLAYEHASNMWOQTYOXMENPBEMKGPBUUS");
    const signed char tmp_msg_0[] = {-77, -17, 50, -33, -27, -3, 113, -47, -102, 94, -78, -15, -92, 10, 8, 93, -124, 10, 37, -41, -105, -61, -38, -48, -92, -117, -124, -30, -15, 0, -113, 53, 45, -112, 102, -40, -38, -125, -11, -120, 118, -37, -50, 0, -120, -117, 15, -93, -88, 114, -124, 100, -43, -25, 23, 53, -39, 87, 40, 92, -99, 4, -86, 116, 95, -118, -98, -69, 87, -72, 46, -14, -106, -128, -113, -39, -85, -27, 120, 47, -108, 9, 59, -41, 57, -45, -24, -50, 78, 71, 9, -128, -13, -94, 15, 0, -127, -81, -19, 102, 18, -5, 5, -45, 77, -78, -31, -115, 54, 105, 13, -105, 105, -128, -26, 11, 99, 58, 52, -19, -9, -59, -111, 43, -45, 16, -49, 7, 36, -88, -105, 78, -111, -42, 89, -56, 43, -51, 89, -107, -94, 118, 103, -111, -57, 90, 2, 27, 20, 49, 126, 98, -78, 57, -123, -64, 16, -80};
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
    msg.setTimeStamp(0.5949027155547262);
    msg.setSource(12324U);
    msg.setSourceEntity(110U);
    msg.setDestination(9269U);
    msg.setDestinationEntity(122U);
    msg.type = 2U;
    msg.op = 101U;
    msg.request_id = 37752U;
    msg.plan_id.assign("YDWUIIZFZBSAWIWKEHSOQBJRXACOJRHFRNYJTTCKQVLKNGQFXBNGETTGSVWORYZQLVHGIOQVHYTXRZEAEXKRBNJTKZZFSFVCGLYJNJOLRIWDWOQNGTHGMJXFMKYUPMACFFUHVPNSBMUMPFKSEDUIULMGYXNMAIIYBQTVZOJDPLPEPBOGBHIVKWDLZYXYDMTPWMXDCUHWNSHUIFRCEQCDQVBTBEO");
    msg.flags = 48685U;
    IMC::MsgList tmp_msg_0;
    IMC::SystemGroup tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.groupname.assign("EKVNYELDCWU");
    tmp_tmp_msg_0_0.action = 228U;
    tmp_tmp_msg_0_0.grouplist.assign("YDJSTZZEZGTFASMFDOOQDZIOSORYIYJLVKAXCCIHVBWEJZQKVKCF");
    tmp_msg_0.msgs.push_back(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("XINQJWEHLCJSCCPRZHMODVTXYFOGCHWQRBGZAEKIPSXQRIAYVAGKIDSEEWORLYPBWTBWMQDQOBSFNNPCFCOUTBIUZVJCZYSUAKPFQEUJUPKXTWMXKYCJZBSIYMH");

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
    msg.setTimeStamp(0.8089492388420209);
    msg.setSource(33184U);
    msg.setSourceEntity(101U);
    msg.setDestination(7581U);
    msg.setDestinationEntity(178U);
    msg.type = 15U;
    msg.op = 158U;
    msg.request_id = 48844U;
    msg.plan_id.assign("KMNNDPAWZRKOAHDERYGQKUZYWOPDJGHNWTVKIIXNEAXBLBEHATHXGVTIEXWAOIRARZLMPZCSMPRJFWMT");
    msg.flags = 2331U;
    IMC::CacheControl tmp_msg_0;
    tmp_msg_0.op = 180U;
    tmp_msg_0.snapshot.assign("XYDYKFPWBLSIFGUWOWPBROCIWSZMWJKWGQYXYPYRHNGRTGSDTWPLTUCBHWGNPFEKDAJVDPYZUDWSMDBYUOLEALHBLUCHHHZVKNMBJHWXQADAQSJQQCPSIFZVFMTKTAIUZLKPGIIFRNNXQJRXTHZTYVMABBQUESNMAOMDDCUNVGXQTJRECCEKRMCPLFJ");
    IMC::ManeuverControlState tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.state = 34U;
    tmp_tmp_msg_0_0.eta = 23926U;
    tmp_tmp_msg_0_0.info.assign("QEIFYMOVYYWEWVNWWCHXWCRSNTZNWQFASSBDSPUQLIQZJBNUTNLVUEXJTMJMRFOGBMEODQPCXKWTIHAYJCVFINBKKLPKKCJXFKNUQHPQHJBQDREXACBDGMRMHEGJZKNVZEYDFUZRVDNRIPHAZYBIGAWBHMLDRPSMTQEJOLBUUFLVBHOZASJCKPYGARCHZTXXSFEDIGCTNV");
    tmp_msg_0.message.set(tmp_tmp_msg_0_0);
    msg.arg.set(tmp_msg_0);
    msg.info.assign("NWBIAFSCDWBAVOSOKVKWQIPLFVFWWZMWWTSQYKGOBBQXLNHYISFDDQSUXVOPOHTPNQIVMHGTVZTYHJAYXNPARQIWRJ");

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
    msg.setTimeStamp(0.5019021786717167);
    msg.setSource(16923U);
    msg.setSourceEntity(37U);
    msg.setDestination(44689U);
    msg.setDestinationEntity(250U);
    msg.type = 154U;
    msg.op = 76U;
    msg.request_id = 17429U;
    msg.plan_id.assign("NQZFHYUCWYPRUJLOTOEWMOYWLSALSIBGQIXXRNWKTFRAZNDGUFHCEHWKFLIOJDULMBEZXDJZDDKOCMVITIVSRCCDVQMRQQNKMNTYGKSQRNHJGTSUBOOKXTLZGFDLWBUNPMLRWNBAYUTYAPPCVIUSSAXEGHKZFPOAAHKVBNYUD");
    msg.flags = 29660U;
    IMC::OperationalLimits tmp_msg_0;
    tmp_msg_0.mask = 189U;
    tmp_msg_0.max_depth = 0.43997124744252436;
    tmp_msg_0.min_altitude = 0.45358777718582166;
    tmp_msg_0.max_altitude = 0.7652747248932175;
    tmp_msg_0.min_speed = 0.9287351951867482;
    tmp_msg_0.max_speed = 0.5704889677070443;
    tmp_msg_0.max_vrate = 0.1355495638746005;
    tmp_msg_0.lat = 0.5135779923958259;
    tmp_msg_0.lon = 0.203908956880142;
    tmp_msg_0.orientation = 0.5273088034143081;
    tmp_msg_0.width = 0.8333353218437973;
    tmp_msg_0.length = 0.11151564588870955;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DKVBJVEFUTJMYIUQPPYEVTHSTAEQBM");

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
    msg.setTimeStamp(0.6823424109808519);
    msg.setSource(30386U);
    msg.setSourceEntity(203U);
    msg.setDestination(38295U);
    msg.setDestinationEntity(58U);
    msg.state = 32U;
    msg.plan_id.assign("VRSMARKMFUUIYQIIYKWHFNCXYABLCVQYWLPBFJCXRFZFUIVJSVJUCOMDVOFIYSTHEAGBNCQHOKPFBLYUVZJGNCBKLBUIMXVJRYAADHESFGBWMKUPVTTZISANZVTZCUCWDYNJKGQXJDGHHSEQZQMXBPNWWCIOJZHRMLP");
    msg.plan_eta = -1547709584;
    msg.plan_progress = 0.5876912491464314;
    msg.man_id.assign("KNQQKJUCRLYCRMSGPXVDLXLBHYIEFFORCXWZZKOFJPZQ");
    msg.man_type = 52889U;
    msg.man_eta = -2117182630;
    msg.last_outcome = 92U;

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
    msg.setTimeStamp(0.5590640699449254);
    msg.setSource(11453U);
    msg.setSourceEntity(204U);
    msg.setDestination(60641U);
    msg.setDestinationEntity(197U);
    msg.state = 91U;
    msg.plan_id.assign("YCLJLMYYGUDVGAXCHDXSDMRZXWBPRSSQKMTMRFKDQTTBFVJANKAPYEBYZGSWZGPUQOZAKTAQAZOEJQICFCEVFYIBUUMLMFYGCIKAHCMNNPWFHQLDWFYHLQBGKHQAEVNBXVXVRWRTMDZTLIEFSLJPRHKXVQNROQW");
    msg.plan_eta = -1672872447;
    msg.plan_progress = 0.47746550962068945;
    msg.man_id.assign("FKMJIFMJQGYBLHVACQBWSAXLTKJKSFQXEVARPERZXUERLCQTNIXDWIWUCRTJPMHNAMJOZUPGBOWABHXQSDHQSOXWZNNMVQFLIZORCOUCECQUTVNGRFNYVFMYAYGGLKVGHZDOPHFWCSNVQDXECI");
    msg.man_type = 4142U;
    msg.man_eta = -66389658;
    msg.last_outcome = 46U;

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
    msg.setTimeStamp(0.06438676203815796);
    msg.setSource(57129U);
    msg.setSourceEntity(156U);
    msg.setDestination(58687U);
    msg.setDestinationEntity(93U);
    msg.state = 11U;
    msg.plan_id.assign("WEJDLGANNIFCLHGXTXUGKDJDZJKARMIVBNYGQBGPAWHSCWYQYJOXFMRGRTDMQQUDWTZHBKKYWNBDMKKNLHGTJGDSSWZJLTSBKLTQCIHKRXMOJEPFRRVMYDBAATZMLIYEOFC");
    msg.plan_eta = -229435347;
    msg.plan_progress = 0.802451622007605;
    msg.man_id.assign("QCOYQCYZVNVXPNVSIOEKMBEZKODPCNZMTVJYMRSDDULEIYWXWLXLWYRODKLTBZUBURRJHLCXEHOSSMNFUIWSQVBTJGGWPUHIWFPKWRHGANUMLXTPFKSZNIXEOOIQDGHAAQUZUMKSMSPVBYVJZZKNJBCCLVGQSTQWSKQZFAXKDTGJGHHODAWXFCEVGQLOABLPBDLCCKHMQVMUPTRAMAYJYPFGEDEWJDRFFRNBYEOFAXNXFTBHHNPYIICIET");
    msg.man_type = 33737U;
    msg.man_eta = 1496224962;
    msg.last_outcome = 201U;

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
    msg.setTimeStamp(0.739727239847939);
    msg.setSource(56518U);
    msg.setSourceEntity(77U);
    msg.setDestination(12994U);
    msg.setDestinationEntity(118U);
    msg.name.assign("DVEFPJLYCSATYHTBRRKXUVMHUSZYCDITJLRNPA");
    msg.value.assign("IZLCYWQAGDDUSLUXLJTQZKFOQUDXVNEHRBLBMSWNUTVYXNWSEPTAYAEPPZGIOMVQKATNAXVJTCCRIFTJYDNCXUNISUPCLYTKLBRQLMTSZLESXWCDAOMFYONKGAZERMISHGDMCAHXVCOKHNXDZHEIMATWGRUQJGTNEDJNEFBECFGBULQIHSFOIBPOWIYKRFJXVYZBLDVHAQHJIRJKPRMVR");
    msg.type = 233U;
    msg.access = 122U;

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
    msg.setTimeStamp(0.42128669484549364);
    msg.setSource(42746U);
    msg.setSourceEntity(224U);
    msg.setDestination(4942U);
    msg.setDestinationEntity(57U);
    msg.name.assign("YVJYZTKLBPZMXQYFAXZIWCPXDBBRUWRNJGFUIBKAEOJSDOFVEPPECUWNNGBAFKZORCVQLNLOMOVTBUUEFHJQXCPGWJMSYIUZGPAEKYSYGNXAUJDZIZVIQRNEMLFESBNAMPOEFOTSGVDWGJLKULXVLTKQQXCTJWQUGKHEMOVYANCDDRTOXRBHMGCFHPIBICHWURBPVAXDHSSFIVRKLHLSHMDTQSQYIEXNTQTJKZTWDIA");
    msg.value.assign("BKUHRRWODEKAHJQPRUBCEIGYLBYFAYWTVQDZIEWHGLJHFAKHVSTVENFKIQCHLZSDXVUXNZRJTEOCAPWTUJWKMPZTXFDOFJLDSYAK");
    msg.type = 83U;
    msg.access = 15U;

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
    msg.setTimeStamp(0.9215794706604297);
    msg.setSource(37807U);
    msg.setSourceEntity(56U);
    msg.setDestination(9880U);
    msg.setDestinationEntity(143U);
    msg.name.assign("QAJKAWNTHEDAXVEZLYZBQEADHMNDNTBRPSZTRFPNPCISKJYBHJZEXOASPWGPVOWUIGXFJFCYGFVVUGZTESZUFCCQMLQCGUOAXERSQAKZBPTEYYRGTTXPUVNNZQXUBKNVRYIMRMORXGGRIYFWYKVIHYORUCALQDEBKRMHETBMSPLJJLONKHTGZSCKDNILQWJPMOWBJMEPFQHCUOLDXFKUUWMSOGSCLSZXADVJWVFIJLYDFWDBVDBWAHQTIHX");
    msg.value.assign("XWZJXPLLQCUVJW");
    msg.type = 21U;
    msg.access = 239U;

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
    msg.setTimeStamp(0.6652732663105057);
    msg.setSource(23798U);
    msg.setSourceEntity(62U);
    msg.setDestination(24526U);
    msg.setDestinationEntity(52U);
    msg.cmd = 147U;
    msg.op = 17U;
    msg.plan_id.assign("ALXIJDSAVIQLITWNFBJKPNKTZIDNCPSFSTEAZOQYUFUOLGLUISOPIYXVHMZOHTRMVESCBRCSDU");
    msg.params.assign("TBHFAUKEAUTGDYQKWLLPFEXUGEVCPFBNVUYEYCLIPDRZKXGOVRSNAUKDCLTWQMPQYCIOCQBVPSBVIZWANIZJWNRBDWBZOSCZMZLXCRNIWMTONIGEWSJGXFRQQJULMTJVDEFFUOJACHKSGRTGNQQXSTRFDAABPXWRQMNBQXNIKKYUWZAHXMLOGHAKLHZYD");

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
    msg.setTimeStamp(0.3518920265985692);
    msg.setSource(4266U);
    msg.setSourceEntity(108U);
    msg.setDestination(682U);
    msg.setDestinationEntity(202U);
    msg.cmd = 91U;
    msg.op = 226U;
    msg.plan_id.assign("NKPOTSKCOSPQLVUYKZZMUAHRCWXEVYWDQZFUUTBTHLZYNCOTANGWFKNYWSYMLKPZVSOECIABHVBBDIESGKOOPYHRCAZSQBNRAWCXMKXPFXHGNRSMNCIQXLGQPVXJYFUDKTYAWMAODSIZVBOMIWURDFZLABYJQOZCYLLJDQLBKETMTPRRPIIXGCAQBPDMIGGQJHSJQXGDEDFKFVLESNVXWTMVJDCEIHOETMRJGAELPHWFBXWUNRZTRUJFUVHJHI");
    msg.params.assign("TTCJLPAZKSLXFRBJJVYQSVGLRMPEVGFDITSGUWIIEUYVTECUNXAKMQWTGOXJQMSBWHHFLBNXQTRBSDPFEXISCQWKHWJIAPDBEVRXLBRUDIDLZDOOZSNREFPGQVNGNEVZZNRYXIYUCWTKJHKYKYIWKMBUPEMLFDFHSNTQFRLXGUSCBDHOJBKVPYOGVHQKRUAIAHP");

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
    msg.setTimeStamp(0.43431170239138106);
    msg.setSource(63679U);
    msg.setSourceEntity(162U);
    msg.setDestination(16160U);
    msg.setDestinationEntity(212U);
    msg.cmd = 233U;
    msg.op = 17U;
    msg.plan_id.assign("LCCKXDURJIQHFVUBSZROUWSEPKXOMOTGILGQPFFQESDIEMKIOQTSBWGLUDMRVAJFIXXGTSCQDYGSVLATRNGFZWXEHBLHE");
    msg.params.assign("RMTJNSDVIIGDWXRDYKGKVCRYJJMPVQSZMMXETQXDUIPFYMOTBHFAEPHEQHGDPXDIFPAEGFWGZGSK");

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
    msg.setTimeStamp(0.5658587187338289);
    msg.setSource(50464U);
    msg.setSourceEntity(71U);
    msg.setDestination(36511U);
    msg.setDestinationEntity(119U);
    msg.group_name.assign("CJAJTYWBLMMARPNMNWBYH");
    msg.op = 225U;
    msg.lat = 0.7816938615827761;
    msg.lon = 0.11846933128791626;
    msg.height = 0.861804530333745;
    msg.x = 0.5267152731610727;
    msg.y = 0.4323854844544842;
    msg.z = 0.6425780338524089;
    msg.phi = 0.8322175249249102;
    msg.theta = 0.8389163974513963;
    msg.psi = 0.3332573793244702;
    msg.vx = 0.22599222926797036;
    msg.vy = 0.17463713837055794;
    msg.vz = 0.1493585884028783;
    msg.p = 0.7630199463843845;
    msg.q = 0.3015606511792668;
    msg.r = 0.6274544274913385;
    msg.svx = 0.9139706332670531;
    msg.svy = 0.39231633927384735;
    msg.svz = 0.7353908395544451;

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
    msg.setTimeStamp(0.3762253130540206);
    msg.setSource(12046U);
    msg.setSourceEntity(160U);
    msg.setDestination(32831U);
    msg.setDestinationEntity(107U);
    msg.group_name.assign("UVBIMTCEEQBMRFNRINWTGSIIQXXSEJRLKIGDWJAHHJCWIGRBHULM");
    msg.op = 106U;
    msg.lat = 0.6764475192095961;
    msg.lon = 0.692948451884446;
    msg.height = 0.3403693784818945;
    msg.x = 0.2941926889737395;
    msg.y = 0.7448964832574992;
    msg.z = 0.5010435703260456;
    msg.phi = 0.9067630806502472;
    msg.theta = 0.6683400849216988;
    msg.psi = 0.25792833264025306;
    msg.vx = 0.1598739761648892;
    msg.vy = 0.6653266232566232;
    msg.vz = 0.30421858684675906;
    msg.p = 0.3686068371676219;
    msg.q = 0.8387309132076024;
    msg.r = 0.5222550534125903;
    msg.svx = 0.43828505235619475;
    msg.svy = 0.4741241358507424;
    msg.svz = 0.8765396943115504;

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
    msg.setTimeStamp(0.15548949770848952);
    msg.setSource(12269U);
    msg.setSourceEntity(75U);
    msg.setDestination(63721U);
    msg.setDestinationEntity(161U);
    msg.group_name.assign("QXAYOLQFSDGZLRVWGFRDFOMUKWSDUZVHBTLFCREDIJXAKHCPKVASUWZUUIRGCWVEVLKVFAMCOTJTBGDIHMCHAURLMNOMTGPNXVUTNHLENPCCYYKYUOUOZSJMPHELIFAQEYWXYWTGQLSGJRSZDBRDVSSFZFBCLQAKAZTIPNNNVBJYVHEWCK");
    msg.op = 149U;
    msg.lat = 0.9964443625269682;
    msg.lon = 0.6108268594457381;
    msg.height = 0.1596395213118419;
    msg.x = 0.6900830355289037;
    msg.y = 0.9385973636079985;
    msg.z = 0.2579261364937795;
    msg.phi = 0.02353593067872317;
    msg.theta = 0.6840078900322573;
    msg.psi = 0.3151701829205099;
    msg.vx = 0.06351312630268524;
    msg.vy = 0.33888988586227475;
    msg.vz = 0.8437947874563931;
    msg.p = 0.14669964156201543;
    msg.q = 0.6672267936196125;
    msg.r = 0.48414702968182866;
    msg.svx = 0.9668161452652432;
    msg.svy = 0.7077597821521617;
    msg.svz = 0.7492981868790334;

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
    msg.setTimeStamp(0.13482655590888248);
    msg.setSource(30676U);
    msg.setSourceEntity(178U);
    msg.setDestination(44828U);
    msg.setDestinationEntity(185U);
    msg.plan_id.assign("LXRJKZUSSXUNYRZFBKFRRGOLDQOECDQMEBQJZIAAZEZCQLTPEBDFPIDJWFFIHONSNIAMJLMIVDUJRXNLRMXTJGKHYZBQXHYDMBZFYVYCWUMERBOYKVGOCOVUBDNDLTCBKPVUHYGHAVPCHLOCPHFAXTIVTYVQEMPAKSQCOVSTYHATPJGLXXSEWQEEGZNQSJKNACPBVTUNFSXOUMTJBNCSLJPGAWODIRKUIIFWIWMHTXPZAMGQSFHWGUW");
    msg.type = 147U;
    msg.properties = 50U;
    msg.durations.assign("MQWHLVBWPBDOPXURCODFHKJWFRQVJLOCSNZRRHUIMRZLMOWRZMUYHNPPYJIVEKOTSQCIDLRKXSANABUCCSOQKNVXBUVAG");
    msg.distances.assign("JQUFWOGGAB");
    msg.actions.assign("CYKRNECOLEJCWGQUHGUXUJPCQCYNGFREMFGLBKVRFMAPZBWTSMITXWNWSPXBKANRIGJJBNFHZZYSKQLWGUDCCSRHJDRQTQOQOHQGAEVAVXAXEDAFMZYNOTZFJKWBTPKUZXUVLDREPQEWVYXQOMSHHUVYHTINMRAQDPLTCRHSXLNCGTBHDPIMDZBVPJSFTKDEOSHIG");
    msg.fuel.assign("APPHGXOYQZAMTYJUJOYUISEVAOCGBOOWAJL");

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
    msg.setTimeStamp(0.7733645432722259);
    msg.setSource(58944U);
    msg.setSourceEntity(14U);
    msg.setDestination(58691U);
    msg.setDestinationEntity(25U);
    msg.plan_id.assign("PZPZVTOEQNOIFOZUGMQILTXTIPALHMHLKPVHOURBPBPMMUFRWKOCROYKBXSLVWQNVQKFPWNUYAWBTJTXNJGXQYAVILETNQGJAEUQUASLGMGJRDNXXARMZFABWVDYRCUZOCZIHEX");
    msg.type = 194U;
    msg.properties = 197U;
    msg.durations.assign("MCYAAJTVQHSHCOEUZHSXBBCQBWDYKCIZVNOJQYHCZTDCDVLMAFMHNXIGSAGFTZGJNJXNPARLAJYLLWXROOIRXHTBHBBIXQYLSKRUDEKOTIUPBDLOPODMFGLWEVFARKXYHNWDEISWUFSRUQVKWMMPUMUDXWUGJZFMYRUWOEOGGNTGJJDNNHPCKVFQPACHOBF");
    msg.distances.assign("OPDVTNXRXUAORQWIXSLLKCNKFMZYMCVULQAZQXJSZWERBQTNULMSRGWJLJHLEYPWFXZTODNVYHMCRQLIWRGTVILDVDHSUPNEARFHIYSEMVANFFKSJGEXWSUQFBUHGOVYCMIKKCGTCZYKCVPNJUFBDARDIYTZJXABNZMJOABXFUZTPGQWMHETUYVPCOXKFTEJKOFAYOCJLJNPIQPRRQZOSMIKIHNKGEHM");
    msg.actions.assign("ZSLAGUPWRSLMPLCKDORXYGPUYRHQSOKCTAVFRVWMPTGXUBLRAAKNESANDPIIEHYIUERDCDYIJCONEKTGFBEIGGOQHSPKMLQBFOZLAFEDTABBZQCHZJMDHOKYJHCKHNLPOWWFMQCYTWUBNTZZHGWRYIKOJBMRPETWCNSSSNVVWCVXUYXTEBCAUVQYBIJTZUJJFBJFDLDXHXMGAQNFWONSXXEVZPKVKLFMZPL");
    msg.fuel.assign("OHJUYVCNOWLGQNAVSZKGUXUOYWSGQXGODKRYLOPQNSDQLDGQYNNVKQPDCBKBLWIRVTCUBSCFMIBXUJAVQPBNKWOHRPABBSXRCIWYHOMTHMUEJJEPUGZMKWFED");

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
    msg.setTimeStamp(0.011315230344356775);
    msg.setSource(12632U);
    msg.setSourceEntity(200U);
    msg.setDestination(39022U);
    msg.setDestinationEntity(44U);
    msg.plan_id.assign("HQHURRJWZIMNFBLKBHTQBQTHLUXNOXWYRRFCGMBSBQFIVCQWPVXJNKEAFZDPWMZDSWMRNGOYDXODPYJOCKPWOISWKESGATIPBKVQQBSJEVZVCAYYPCAWHNVAHOUBRTRDSGDZYKGUJZUEVJPYRLPAQIUWAVTTIXDMXQFBGDPAQPMFFGVOVLZJBNHYSTERWNHUILCIEYUESAOXYGILTJLSMDMNAXGRIXSUTKLON");
    msg.type = 101U;
    msg.properties = 206U;
    msg.durations.assign("ORHDETTHKOMVRTBMGDXVZVJWREEHCZSQNJXGEAUPCCHVLWIOFVLHNJNIVXPZUMQYAQZITCANAXYBTGSBIXUFGNHGYRGNYPYCRYSWBVYDGSGPQXIWMEGXWMLDUMBFACKEFQFXQADWAULANVFJZJSDDBD");
    msg.distances.assign("AUCSNLALDYKPNCATWAROPYLQCEBHXEAGNMEZTIZQXVRIFPLSHUCLGYVBJSXVVROXRAFMJFOUEOCGPUDOTBUPVGVZMUWCHFCXBYMDHOMGIIFLMBISWOKUWRORJBRQANTHXBZKFCHYNPZWRSYFNXJRWQPTWVXTKUJMH");
    msg.actions.assign("CHGMSMUBZIUCFLRQRUPLHYRWZREQTFQDYVWDGUZYHBWRIWITOIPODKLUOLATENTNCMJZRKQOPBICFMWCVLHXGRANSJFTHJVHPBEGMOEKDRWXKUPJNRJKZDXNLIVKSPZDYNFLXOYKJEGZHZLAAVUAKXQFVNOHXPIZUJITQXSNYFBTUDVEIRJXELDPCSTHBMAQFCZCSAOYGDSFCAMUNTGQLBQGJEIPYEMVDMWOESBOXHQGJYWVSSKB");
    msg.fuel.assign("ZMNJBSMZBESDHXKFYFWNKVAHLFVGMQXNYXEEMMMAPDCDPGTHYIEYXLCRVANUOTHCJRPTAIOQOLDVVTTELRDBDZINYVCODICMWAKNSEZXMHKWNGLOQSOYSUONOJJFHJSAIBBZKEDOVAOTYBQGUPXZGRGIWRLYLKEPMDAZWUZSLCCJHDWUJFPZUKXVFJUULHRIFGVCRGXGQATZLRWHFKJPKQUVMYEQWATXPBCURTQGPKJNIRNISCYQXBWSFBP");

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
    msg.setTimeStamp(0.8627274595752993);
    msg.setSource(45166U);
    msg.setSourceEntity(117U);
    msg.setDestination(29834U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.30963111946498634;
    msg.lon = 0.788633552924546;
    msg.depth = 0.5785889733365991;
    msg.roll = 0.6573226263585201;
    msg.pitch = 0.7667170062436627;
    msg.yaw = 0.4841665702055068;
    msg.rcp_time = 0.6748088087472716;
    msg.sid.assign("WINDAAIOWCJIABTLIXVFPVLZWQCYJADQYHBUWCLKXRKBCQFXRFVJYOPSDUX");
    msg.s_type = 250U;

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
    msg.setTimeStamp(0.866166164697894);
    msg.setSource(33123U);
    msg.setSourceEntity(161U);
    msg.setDestination(62103U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.03921209289740246;
    msg.lon = 0.6096617284326101;
    msg.depth = 0.5220946588577674;
    msg.roll = 0.22339595266907986;
    msg.pitch = 0.3532831487443543;
    msg.yaw = 0.2365530499012306;
    msg.rcp_time = 0.48386379231082477;
    msg.sid.assign("MVLTPUCLZDYUVRMBUAIPOWWMCRZGZSRESEVIHRIKZMHBPBODNXPOOYAUDHVEVTFTFLURNGBMZGWHCEAWCNJAMKFFRSPEXVXISNHJXSNBXDSPRCVTKNOUWRVIHJDBJFKOZULBLFTGWAIEGJKGAOJQBZKXTJP");
    msg.s_type = 224U;

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
    msg.setTimeStamp(0.7680280066141293);
    msg.setSource(39897U);
    msg.setSourceEntity(140U);
    msg.setDestination(63078U);
    msg.setDestinationEntity(124U);
    msg.lat = 0.5360521166451305;
    msg.lon = 0.29839473945355177;
    msg.depth = 0.45768436893695497;
    msg.roll = 0.28965013341372414;
    msg.pitch = 0.5280550987837543;
    msg.yaw = 0.8161866646593037;
    msg.rcp_time = 0.38352757441176566;
    msg.sid.assign("WFXPIDLPUUKHVTZBRXTSNLKFCGARSMJBTXZOIDJOEEYUYNLWNHKUPJFMXSIHNCEPJEVX");
    msg.s_type = 91U;

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
    msg.setTimeStamp(0.5753947614380833);
    msg.setSource(65217U);
    msg.setSourceEntity(39U);
    msg.setDestination(21408U);
    msg.setDestinationEntity(203U);
    msg.id.assign("QGVSUMMVVSXMYAFZBCCHUHCKBKBYZNMLYYQHWRCKBEJFGERJCJFKQLBCSFRAKGHEWHFIZWVISNXFGCVNJXCPISDTDBAEAMZKNDYBVITLDSJGBTUMDTSMPNPNOKKATYGRPREJNOSZPUHVOEXXNPJPZFOBIFZCJUTDQLOWYRUPFLZDGHCOTIRPQTMGYALXD");
    msg.sensor_class.assign("ZFCPIERCZQKBUAYSHPEBEGLQAZKFPUNMGAIKEVSSDGD");
    msg.lat = 0.21129824377059037;
    msg.lon = 0.5552495448712605;
    msg.alt = 0.9055852913063582;
    msg.heading = 0.023092001898360914;
    msg.data.assign("DMNQVFGIEKOFTYHLRSQLUCAWXWNCGVUOJZEXIZZGZKJDTVIYIUPXXPEKTEBVXWAZNBCWBBXVEKCYBPHWSACDTIMNRRJLTTMHFROYMGNAHJSBLUUWRKMJVIOPAKYHGTVFUFZDRCHFYHESBSPPKNFO");

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
    msg.setTimeStamp(0.2064483815333067);
    msg.setSource(1236U);
    msg.setSourceEntity(170U);
    msg.setDestination(24970U);
    msg.setDestinationEntity(141U);
    msg.id.assign("NDDHJWBKBFDACYBDJOMKGUUOVMUOLUPMKRVDNVICZSMTMHSMKGJVCXRSVOSQXKCGL");
    msg.sensor_class.assign("CEYMJNZQYBSTDZBVFZHRTGLMVRVIGQCGNPOSIBWREJOQLRVU");
    msg.lat = 0.09971222139298819;
    msg.lon = 0.771556139448539;
    msg.alt = 0.9848902492441852;
    msg.heading = 0.8103303814244733;
    msg.data.assign("CKHKFGRPEKZZAJGPYSURNVAGQDECYXWNXNZVCUALXJFEP");

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
    msg.setTimeStamp(0.5342037103125298);
    msg.setSource(31557U);
    msg.setSourceEntity(139U);
    msg.setDestination(56562U);
    msg.setDestinationEntity(18U);
    msg.id.assign("LHQBQXOBFZAIEJVQPFSJAZJESFJQPMRXVGBNUBRKFASISUFRNIWYHBXQESCUVKHDVALJLLRTEAVSACZNTNGHUCLESFGODMGLGWLFCBRSBHGQQUZNGBNPRHJDTOYKOIUDIYONOOAMYOZLJGUCUMEPKMZZKDKSVYLGPYIZ");
    msg.sensor_class.assign("IDRLBYTWIATCOFVKDQVCJJEBXSWRVPSHCANLTHLKVGMAWRBJRBXNXZZADXXUGHRLXORKNQX");
    msg.lat = 0.2260478451751231;
    msg.lon = 0.6253699441664455;
    msg.alt = 0.2123512256908292;
    msg.heading = 0.5757501468363356;
    msg.data.assign("WFPKAYLCPVAPCSGPLBTQNZMHDUGJOLCVZHAOTTJGYMULWBBSEEFQXKVOVKSXJVMWLUYKCYHER");

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
    msg.setTimeStamp(0.03616237060942862);
    msg.setSource(45712U);
    msg.setSourceEntity(136U);
    msg.setDestination(41608U);
    msg.setDestinationEntity(251U);
    msg.id.assign("BXDSNQAZNCTVAGPGRFMELRELQQSMPFWWCGTWZBKBZRSSUCCJIOCZWEEIYFJCXEDNCMYNGISFHVMWTUAFVHQQOSONLHXZBTSKNKULTVUYUTPUEVIMEGVHIEUMRMHXADKBDEHTDXBLKFHZQIABYSJFKPAMMVNCDQONXFARJPYNCLILDYVGKSRRZXYMPHTPH");

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
    msg.setTimeStamp(0.28663020337526945);
    msg.setSource(15286U);
    msg.setSourceEntity(208U);
    msg.setDestination(49858U);
    msg.setDestinationEntity(103U);
    msg.id.assign("DKBNAYHEGFPAHSUHHTCVZKMZRHBVUYKCCEUEMYPRQSNILOPYJ");

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
    msg.setTimeStamp(0.3290327784668894);
    msg.setSource(53860U);
    msg.setSourceEntity(183U);
    msg.setDestination(14566U);
    msg.setDestinationEntity(190U);
    msg.id.assign("RIZVBHPPOTXBGQAXHUGLJPGSTPGGJTLKCQYKSWWCSAMFMZRHQTIGJSUFYUNTSYDHJQZAENRJBKCICRYQYLJYPGIUOAEVIXFKTZAPCZE");

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
    msg.setTimeStamp(0.810458328845922);
    msg.setSource(2970U);
    msg.setSourceEntity(145U);
    msg.setDestination(62286U);
    msg.setDestinationEntity(216U);
    msg.id.assign("XMCMGADCPEHXSBHIXDXCLCTGZLPLTPNAGQOQFEWDZBBJZNNLATVUGQOQMLKBDQSGTOJLSHMAYAORKRDBXFCZMKKUDDNKEQIZXYIKTWXJHNXMTVYESWWRQNTKZKURESTFWCBJFNJHMIIHJVMHMJOWTRRWVWVVPUT");
    msg.feature_type = 113U;
    msg.rgb_red = 126U;
    msg.rgb_green = 164U;
    msg.rgb_blue = 45U;

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
    msg.setTimeStamp(0.23127097430136057);
    msg.setSource(47740U);
    msg.setSourceEntity(229U);
    msg.setDestination(50762U);
    msg.setDestinationEntity(18U);
    msg.id.assign("UPXVYUNYQORMSUSWQCLHXEKKRJQRAJUMNDTBDRXNVJKUKOXGLOQQCOXUSOMELKRHBTTTIZNHYGEIPVGKJITISAHZGZBWFNYVYMVYLGVSIAFFVELKSFYRPEBPNDGACZILUQFKRCFIGMBVEDCACNZASMYBPWRKWZBPIXEQAHMPUCSDXPTOXHJOJGZZE");
    msg.feature_type = 151U;
    msg.rgb_red = 245U;
    msg.rgb_green = 82U;
    msg.rgb_blue = 46U;

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
    msg.setTimeStamp(0.3175423867373942);
    msg.setSource(49505U);
    msg.setSourceEntity(188U);
    msg.setDestination(42579U);
    msg.setDestinationEntity(241U);
    msg.id.assign("NAEWKVVGEOATLEDKFVTRRPWNGJOJUEADCVYIVBZRHMJQIPHMJEFEXKWRHITBDTIWTMYYHJKPKRBSACKYRJAYQUSCPIUDCWZ");
    msg.feature_type = 203U;
    msg.rgb_red = 158U;
    msg.rgb_green = 195U;
    msg.rgb_blue = 47U;

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
    msg.setTimeStamp(0.6168104376297513);
    msg.setSource(30942U);
    msg.setSourceEntity(185U);
    msg.setDestination(52766U);
    msg.setDestinationEntity(97U);
    msg.lat = 0.9765058117956383;
    msg.lon = 0.20835987995029548;
    msg.alt = 0.20766485110057098;

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
    msg.setTimeStamp(0.2584064692714313);
    msg.setSource(34292U);
    msg.setSourceEntity(77U);
    msg.setDestination(51435U);
    msg.setDestinationEntity(140U);
    msg.lat = 0.4816891534537767;
    msg.lon = 0.1452418018880629;
    msg.alt = 0.5110488739040384;

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
    msg.setTimeStamp(0.23731875835919114);
    msg.setSource(28550U);
    msg.setSourceEntity(55U);
    msg.setDestination(59934U);
    msg.setDestinationEntity(63U);
    msg.lat = 0.8882271805399568;
    msg.lon = 0.5995712108169392;
    msg.alt = 0.019891150944651548;

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
    msg.setTimeStamp(0.31675049525684995);
    msg.setSource(22143U);
    msg.setSourceEntity(105U);
    msg.setDestination(46143U);
    msg.setDestinationEntity(217U);
    msg.type = 44U;
    msg.id.assign("FRSOCHUHIJIAVSFHSRNPYNCSKYBWFDNQPZBTPYAKZPBLOXRPLLUAWGDAWOCDEVIJDTAQOPIJFRKVOQCKMUSUFZJYZFWAWDMCCHXPMRQLKWGPATKSHCNMQHBFLZQYGDYGEZXCUHKAXVGTZXWQANVDQXH");
    IMC::AirSaturation tmp_msg_0;
    tmp_msg_0.value = 0.6228650934782883;
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
    msg.setTimeStamp(0.7651932679873791);
    msg.setSource(63922U);
    msg.setSourceEntity(186U);
    msg.setDestination(40636U);
    msg.setDestinationEntity(207U);
    msg.type = 222U;
    msg.id.assign("GELOHQKLHQYFXTTHACPLBTUZAOCCXFBRMKCIZPUOGNBULSSMDWXOVEISTFKXRCZDMVEWDMWHKDUGOXZJZOZKTEYLOGIHISEJRAVQNFULVUIJLQTYYZYBHDFW");
    IMC::DevDataText tmp_msg_0;
    tmp_msg_0.value.assign("ZTVEJLRDTYKBPSOEKKORMPHAKALXKUSFYCZFPCTNASQWYOJZBWFBNRHPAUEOKOHSBINFPZIRNEMTVXQQFHQGHFQYVHFRVXZICZMDEJSBOBAGUWGLGQJPJKVULMSDTEXBPZIFDUWBRRLYTLAMWSQSODLDOTUNWXRLSBRHGVWWTNCETNYZMQVDUCIPNLCYOOUIFVZGDISQAEYCNUIV");
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
    msg.setTimeStamp(0.6271110097460484);
    msg.setSource(42405U);
    msg.setSourceEntity(222U);
    msg.setDestination(28980U);
    msg.setDestinationEntity(112U);
    msg.type = 41U;
    msg.id.assign("VBWNPTIEQMLLAUPRCZYXAZFGQHCDDBNWWISYTOQJHFDOFNFMGIVAHQGFOAKCMISEKAMKVKJJCTRHMDJUMGCYWJZXPXDRRVVPJSUCBLXSAHXIVRESDHXDNYWXFHFTKGOHMPQCZKZTOKFZBPELSMZOBDFCDUABKNUKFBYITRWVPESBEMPLCIZBELQTSSNZONHQOWPVNNYEOXGVQUZRMLLAIWEJQWAYDYXRSYRUXNH");
    IMC::RestartSystem tmp_msg_0;
    tmp_msg_0.type = 46U;
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
    msg.setTimeStamp(0.3137449389607446);
    msg.setSource(51883U);
    msg.setSourceEntity(191U);
    msg.setDestination(65253U);
    msg.setDestinationEntity(61U);
    msg.localname.assign("ZWNRUFMAVSAPFHSOLPZSLKFWHJOTNPJPYLESIEPCOKSVGKLBGVLACTQRNQFGMVMIIVYCDHOPSQRWGIGXIQDEMSNJLFZBNNORHSMJFEUHESKMCUAQLJVMLZYHSBODRUGBZFMPYWOJTIJYXKLJPUWDZKRBV");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("DMWAVEKOKTCMMNBUPROZXBYQAGXTQVZJLZLWKAJKXOJQINPBCHJWWWZPOOAWICPXSQUUPSZGPEFVQDRYPTIXHUEBVYHFQVGERUSEIIA");
    tmp_msg_0.sys_type = 53U;
    tmp_msg_0.owner = 43342U;
    tmp_msg_0.lat = 0.8901643557309189;
    tmp_msg_0.lon = 0.6018487247606575;
    tmp_msg_0.height = 0.9848471928004249;
    tmp_msg_0.services.assign("CGWJGOMOPKXXZGCLAKLEYGCXBCCJGBRXFKMBWBILQXISAVNXJVVRMRLNYIRKSOKABNPITYPPUQUBXOTLVPQPDLCDTEQHNNQOVWOCUZZEHDDGUMPGWSFSLJAIYZJSJPBSVACKIRQODDMWSJCRTDZZFFUDKGNYHYRVQZWLWJAQEBDTEETUQKEHABHBKNQMIZMG");
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
    msg.setTimeStamp(0.7503586231264421);
    msg.setSource(42543U);
    msg.setSourceEntity(63U);
    msg.setDestination(16808U);
    msg.setDestinationEntity(253U);
    msg.localname.assign("JNIRDUNQKVHPGJUBGAQMZXLJRMCZCOYRIHUHPWZEZBZKDFSWKAVDFHLXRGECNLQHGYFL");

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
    msg.setTimeStamp(0.6807330899556221);
    msg.setSource(8336U);
    msg.setSourceEntity(186U);
    msg.setDestination(52348U);
    msg.setDestinationEntity(248U);
    msg.localname.assign("JJTMFNEQWEQEILDVRPDXLRUAACMVSYJDCNEANQWDIORGYHLKIZAVLSEZRZCJDHXXRZWNQEUCBUGSGEGMCNOQIACCMNSVUOJVKYQABXHWJNZVAJRHUSKIKBLSVNOVTPD");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("NGNBLULGIDYQWHYBTCAZJFBIEDMXZUHNFGWRPKRKJTNMHLQNZTFJVEASHXKFMWXCLIOMCOWGOOYOQJBMIKJNUTAXZUPZPJKXQDURFJKATAURIJSHVUKBESNDZMFJPEEHZGRVQXUYGCSVVLQPSDSZLBWVTAIAOZGUFBKARWEGOTLQTDRYOLEQUHHSYEXCYBNCXTIWLMTQ");
    tmp_msg_0.sys_type = 232U;
    tmp_msg_0.owner = 25049U;
    tmp_msg_0.lat = 0.39815369655060895;
    tmp_msg_0.lon = 0.023258409686205628;
    tmp_msg_0.height = 0.7328011469468283;
    tmp_msg_0.services.assign("UYJYWNARCLJGTXIBTJIEQJPOLQKMUJPXWXXORKNRPPNENQTOLYQFZCKFBDHOXKGKVQHXRTJJZEAMQTVSEWYWBVHJWISVHGIUFBKNLPMCTZWOSSFSZDGBVQLCVSULIXPDCFFNBDIXQJFJQCZALNPGGAYZMOCMVCWGZIPEVDAHMDCAEXDHWNHMBVYRRFTNOVUOSKKLOAEYAIDUUBYHOLXGZULCNTIZHIPEHMUSTKSWAMQBKUY");
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
    msg.setTimeStamp(0.05401414728496734);
    msg.setSource(13761U);
    msg.setSourceEntity(40U);
    msg.setDestination(34095U);
    msg.setDestinationEntity(63U);
    msg.timeline.assign("DJSCAWMPKBDSLCNPWUFXFOYHVWRLPDFJCYRBYFPYCJGHYIUEROMAEKRAIENXFYGTABAAPXNQESYJMVUJPTYRBRVTCESMJBVZXTMOVMHLWQFNOXPSIUTQXWKZRIGQNSDLCOKRQIDVHFJYFBOMJXQMIKHUSKQQGZVNFCPREKNOHWBITSTNDPULCOVYTABIADDRLHSHCNLUWGAGKCXVUKDILBPDOBJXSKGMIZLHEZQNZEFLGTZUWZWGOWZZJ");
    msg.predicate.assign("NMLSZFGKLIDIYPGNQFDKBRZORRPDFSRCILCAFKAAWEYUAWBRBOQVSYCUNKPBKENTGBUXTUYBDSEVYYDGZTONZELJHSTSXDXTVFHEBWOAXDHEWMEQPROPGLNVOMQFGKQGUTWAKVFOVCGHRQEPIVYCCXJXIHRKYMFGQJLNDMJCUDHQHMZXOY");
    msg.attributes.assign("GIYLDCGAOPIOICOUTFSMEDKSBLLBINQBYYKGUGARBHJXWRPUDHYMUFXALKNMVTRKGEOZTGZQLPFGNHWZXDNHNYRKRHLJKWDNVTYYXPAETXBSWVNZCPOPNIDFLVMAPPXNKZDTUOVMOARAQSWXRWSBVEFMFPHFBJZCHTCVJWKCTSDARZQAUMFQBUESHOQUMZYEFBLRJXUDEQVHQDJZRKUCIJ");

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
    msg.setTimeStamp(0.29894250284205726);
    msg.setSource(20014U);
    msg.setSourceEntity(181U);
    msg.setDestination(19872U);
    msg.setDestinationEntity(141U);
    msg.timeline.assign("SAFKJMDXLRCSPVXTLTQNSVKFSOPBFRCDGYMMXSEOMFCTRTTGWEIZFYUAWGNHSJZVCZJUWIBIKCLADNBTZKOVQWUYIR");
    msg.predicate.assign("TXUJMIVETPENERKRUORLXWMVQQAFTXCZWVMADXUKSBAIDJNLQOREYAZJMGZXGBNYOQFHKPWOKKJGTYFVEFFBSFXGITPECHRRZLWIIXFPRZPNPHDJHZLWCSNWFSQTLFKHYGHGHSNMYSTLULKUPKUYLCTAHBBQCBTAHZNOXADQZMYQBOHAIERIMCUZQCI");
    msg.attributes.assign("TKSWAGTPCISLFEXLYOAOXHNDTWCLDNXAXCCKQWSLPINVPSXAWGQNPMRPIQMYYDKGUTMZIZBHFWVVOJEH");

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
    msg.setTimeStamp(0.9834896629551282);
    msg.setSource(29942U);
    msg.setSourceEntity(203U);
    msg.setDestination(41944U);
    msg.setDestinationEntity(219U);
    msg.timeline.assign("CLKFHKAUWCYBDBPPXUMWNHJGLYGKJEXYWXZEIGU");
    msg.predicate.assign("CORYYHGWGDFONZQVPYYNLSVDLOHYXEUKWAFSIOSJQUVVGBMCPFRAHZFIMBTRZGZFAFILTSPVKJDEUACQTVIJPOEBCXZWCACUQYXKLNHWNCRLWPNSUMTEPECPDLYVJQMOECVRMNXYBSLXKTJEIKYDPUPIGSHB");
    msg.attributes.assign("LTDKFDATPKXJOVBIFWBSAXQNXPRGUKCMUNVI");

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
    msg.setTimeStamp(0.3321577086168528);
    msg.setSource(24293U);
    msg.setSourceEntity(193U);
    msg.setDestination(6323U);
    msg.setDestinationEntity(169U);
    msg.command = 199U;
    msg.goal_id.assign("JQYCOZDTHGUKYHCMFBYTWXZJEBGDSXUURACVSLKJZIXPFALHVDSLXSNVNWRZZCHUHOYPVNPLDHJBTGRBMGNTXUQJQIUZLFLJVEQAZZHYKKERKQEADUIMGPZSTBFCWYEAYIXKKQVEJHRPOIARFFPODTPVNXQBPCRBSMCOMUJLYMQEKDUJYNNWWWXBCTGLPRHEVIONTWLLBMDVEONMIHIQSKVAOTSFRIKUWIOYSNWGATQ");
    msg.goal_xml.assign("YTQVBVESPVAIOCAOGUJDTMDQJECDYXZNVPLSMJSWGNYHLGBFVDXRAZKZGIPBNKXPCQSAYFVZBMHNRYJOMCLKTFMEVKYIFWXUED");

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
    msg.setTimeStamp(0.7976653814523075);
    msg.setSource(58238U);
    msg.setSourceEntity(12U);
    msg.setDestination(25649U);
    msg.setDestinationEntity(75U);
    msg.command = 156U;
    msg.goal_id.assign("GPCTRSVLUBINRLCXONJUFIWWMADQAAKKLERNYYEOOGNBIXMAVVESYWODPBWZIKYEOQDNCVHWXBJTEXBQHNODCZAWDWKNHQJTIEUCMGMPGZHPNUUXBJIMAAKFTZHPMNCQIJFCJYTGOPQQQKMSDVLMQFHPEUTVHGJFYIZDSCVKFJSUGUGZXAOPBJVRRKLYUPLIXHFSIBRLEZHSCSFZRHSRWCKYVAAPJTXDLSEWT");
    msg.goal_xml.assign("NAQKMLISQCUCWQHYLMOSASXXIHEFYIKRQYCUEBNPDTEQSPWTTXRKYLWGBIPAPMMGBTZCESVOUUDBIJWTVXYGWTN");

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
    msg.setTimeStamp(0.9952558208554726);
    msg.setSource(44291U);
    msg.setSourceEntity(126U);
    msg.setDestination(2488U);
    msg.setDestinationEntity(207U);
    msg.command = 167U;
    msg.goal_id.assign("KZSMUYPWNXCDLEUYSPJXKGITSSVGTIZIRAITAUWHYQHGYINVWKOHFJFHOBMQGMGPPJJIIZNHZFKZAQQYWUCJKXJLEHQZBQYSSMJELSBXBVCTRZPCIDTQALJBZMEANWCRVFUHXFOSFBVDABH");
    msg.goal_xml.assign("CXIRQEOLDXUKMMJOAPYZOKUTTRFCSHFDXLPVURLEFXNBBOICDXSPAGJGDHIXHBYBNGHFQBDQCRNWMBCLYGTZZFCGHZMACEAPLXLNRPAMVKEKHTQY");

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
    msg.setTimeStamp(0.23764489871812033);
    msg.setSource(12353U);
    msg.setSourceEntity(84U);
    msg.setDestination(60738U);
    msg.setDestinationEntity(207U);
    msg.op = 250U;
    msg.goal_id.assign("JKDFLWRTLSFJYCJDFNHAUIARYJFKBXLLSUBZWZVVIZERECRNMXGGKWMBTFRMUVUDXXDXHZIAIOATAXMPNLOKVPXGHOUNU");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("YLYEXHAZSCPVDPCCURRYXKRTAIAKYNCVIQJLDOMAKONVSCRFJLDDYFLGJXZARGHKYHCHMDIUEHVPZRZSDUVEEBNWSAKSCZWPTWQMBBOWXBKJNFDPPQMLXVHURNIWLGWPMQRJELBJNXSYQAVWPDEGIEQBOAVTUQOKUOLGUJWWISQOIDSK");
    tmp_msg_0.predicate.assign("WVFJKIKVIBQDOLWIXICMLPGHQMLHRHBMPMFXQNTGHSQRSIPFUKKXTYZDOHBXZQEHYMGLLJJBWCTXKWCUCLUTPOELNZNESONFQTRVRLQRUBNHYQYSGWPEZIMDOSKNIMYRJGNTVXTAAUYSNDLIZVNDVFVJFHUKICOBKEBBYSBJTXAUPAUPXWCCZKSEAJYHFZWLEFMTRSZGDUTJAQCRBXVZJDRPYFGDUZOOEKPEWVAIWVACYRAGCHAMO");
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
    msg.setTimeStamp(0.5393626427971617);
    msg.setSource(56511U);
    msg.setSourceEntity(38U);
    msg.setDestination(9301U);
    msg.setDestinationEntity(142U);
    msg.op = 42U;
    msg.goal_id.assign("FMPVWCWDVTCLYCEVIOQXQSOPFTARZMFRIHKXCDOPMYUMMDINNVENPSTKHCSBCTTFNRQZWHMWABXAQZLBHWNOXIQAJVYRDAPUZVZGHDCOTIBGBFQHAOTLOLRHXGKRSIVHFASVLHTSSWGWXKIDEDFEYOWRYE");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("LLTOWMPPQBGWYGPCDSXLZGQLEUFMRSBZQFYJNMZUKGIVAZOCEHIKPFCCEJATVPOZOYFTBPBTWDWIJCCMFQCXSRWUXUNPEJDSWRWQIGASPMQAYYHMBTDBACPRAQBUXET");
    tmp_msg_0.predicate.assign("ZGIGMIYINEUSQHSMGPBELIFQRGIVEQZJJHABQBHNRXNKNPAAFKRXURHSFQKCQEYZNXSMUZAOHLRHWMPLDKDXCGWKTTIQVASQIZVWWMKJPLTJKBYGPFXLTCVGBHWKFOZCZTUCOLPYAJFOFLWDRCDBQGTPWNICVUUIOYOSDBSWEXXSTMWYUDAJCPEXOHTJPDELSDKZUXRLOYCSBYMGGJUFHBRLNACVKBMYNXMNEUZYVTMDDITPFAVEVOVRNQW");
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
    msg.setTimeStamp(0.6092918634728158);
    msg.setSource(64928U);
    msg.setSourceEntity(245U);
    msg.setDestination(24010U);
    msg.setDestinationEntity(52U);
    msg.op = 50U;
    msg.goal_id.assign("XAUHKXQGEHRWJXTCFINSCEMULVUOCZFPFMTZIPGDWLSGDSLCYQTFVTEDSCARZIUNPOMBJHMFAFGDXRIKWNKPHDLWVZUWWXYFOATBRWTLRXYIJEYDOLSUQYEQDVZUOJATMVDKCKABPNPNXZPEXOWHTAGBMPHRSVHYYVXMKVBMZMNNKEOUXGF");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("WQEUJRVSSTDVYPVEYKNMLWPNSXCNEVACIIIROOCLMAQHYJPIRZZAFAIIRMEAAVIHHKHDWDJLFTJJXUPUYHWNOFMMRBQYSHMAZNDTXLESQTTGCVZVXKMEJLGXYMGZOKTSVJNYRRGBXTFNKBJDHRPXWWPQGZCHNUTDLPCDOMPIXLCZCCYOIEBYGZ");
    tmp_msg_0.predicate.assign("JWYKPOFHNRHTMVTNBQOIFHOPGLYKNAWDDYMDKTYZXAMYUZXEVKVUPKLRTSAOQFJEIJUQLHDVUCCUZBSTLMJHCZWLPNNXRVBOFEFATPQQFVRGQSDFUZVUEOBXTSAHIYBJEVSJBEDHUYQCLQROKJCMCVPFXNKXJYBSWIYUSNGKHKGJIHXCTMPZGTLIONRWFQDBRJESQWMOVAFBILRWAGNZG");
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
    msg.setTimeStamp(0.1200376879347902);
    msg.setSource(62554U);
    msg.setSourceEntity(42U);
    msg.setDestination(14823U);
    msg.setDestinationEntity(235U);
    msg.name.assign("DGLQVJGLMJZQSRCZWAQFBIISMEHGLZIHSBVQUSPITXPJCLXAECAOJINTCRALSBOMEBUIWQYETPNUOHIFMARL");
    msg.attr_type = 185U;
    msg.min.assign("LZWTKZVLJLXRMGYHPLBGKJXDEBDRWGAEZHVRAJSBRUI");
    msg.max.assign("GRGFHEQZYNCXZPRBJPXBAPRTTSKDWOJYOUOWQHWJAVCQEWUUNYXWCKGSVCIOXWDHHNGINBDSJLFWSIYBTJOIWKVDKCRHIQO");

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
    msg.setTimeStamp(0.9136211734407192);
    msg.setSource(19157U);
    msg.setSourceEntity(245U);
    msg.setDestination(55185U);
    msg.setDestinationEntity(227U);
    msg.name.assign("GLWZETFJVKQQNBDKTGVVWGYHEXUTACJJRKOIQQRALELNKREJGVIFOFSCKYNHVYPDXMWAQSBJUMUIDUHEDOWARPMCFGZIQZKZBIDOCXFTEIGZUTEABOMVJZIJWHNMCSRFSHQGYGJVHTUPDRARXANHPKMMUSQDXSGPSDPICWQTXKPNN");
    msg.attr_type = 143U;
    msg.min.assign("ZMACBLCXWDLFZQAFXYSSSIIHEUBILKYTFTGORJAZXHJTCRHORBLOORIJDWTNMDMUQOBOJWNWQZMRVEOFUCPPSPJQNKKYUNYCVBGDKZEYVJBKAWPULZKXEHHVGIQEMIEAQUHRWQHXDCKTDMJAVWHDRGNJRMKSVCMPPPWHKXFTWZUBZFSYASGXSQGZFDMVPFLSBOLSCZFQEDBA");
    msg.max.assign("CQEFGQVCDCWNZBKJUWSIPLDVYHJBHIRKOYAEHDVVOBYZNQUANFNSISXGQERSJAWAZEXD");

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
    msg.setTimeStamp(0.40738792802323753);
    msg.setSource(49589U);
    msg.setSourceEntity(12U);
    msg.setDestination(50135U);
    msg.setDestinationEntity(21U);
    msg.name.assign("NSNHBCEJDGLXLXNCHXYDLDYVHNXDAMRJPKFDVIZIPSRAFPVTEIKPUWVUGGWQBASGVJVEZTEQDEMZQPHGNEUUMZKRYXXJQRETKLKGBBVCSYHUFCKMVQOOFZTLMZFWFEOBWYIBGPCRKEMLDMTCAASMXMJISHBY");
    msg.attr_type = 180U;
    msg.min.assign("NFJWUJYGGTQAJFUZHPUJEUWTFEYZHLOAVCLORHLVDLTDOAQCKITHYQCPZNVQOSNNDGZRPYGOVNWNEIMTXMRTZAAOPQUMFKWSBLKUKRHYLVEJGVPDNY");
    msg.max.assign("TDMXODVVEDXUAARCQREJVMYTHVEPPZTGUUIYCAOQFSKFC");

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
    msg.setTimeStamp(0.845271408558716);
    msg.setSource(22973U);
    msg.setSourceEntity(180U);
    msg.setDestination(47718U);
    msg.setDestinationEntity(73U);
    msg.timeline.assign("VSUENDAJQKPNXQVYXKLJCEWURWAYF");
    msg.predicate.assign("HHKSCCSLAFEDOFSVFPUEFICMOQKGBEFBZXEUPZZEXMDZPRNYGXVMGBVRRJAGLNXQUEHJATURVDGOEALITYXLZQGPVWEJYYZRWHMSHIIJICQNNKIBLOVSKQNFTWDMVGIBRVASDKWMYXLBC");

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
    msg.setTimeStamp(0.10874044345398293);
    msg.setSource(13599U);
    msg.setSourceEntity(32U);
    msg.setDestination(53434U);
    msg.setDestinationEntity(218U);
    msg.timeline.assign("CRSJSOYWVWMGOPCFTNNMGAVZCSDSPIQJQLISHBIVFWPXRFGEDCEB");
    msg.predicate.assign("FZTRQLQPEQOZTVPZVGCEZDDGSKLYYPAMWGJNJSSJTECJUIXLUMXINBPHBOQXDRVBYERZCHUDXGKBLNNFSUQYHLBIIWAIOSVLPUMXCYFGMXALUPZWGOXOJRZBPOJDABLVQNDRJTWSCIQKMCIPTWNVWWUFNYJTGJFFARLPMSYEKAQT");

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
    msg.setTimeStamp(0.7062653789275314);
    msg.setSource(57658U);
    msg.setSourceEntity(237U);
    msg.setDestination(28975U);
    msg.setDestinationEntity(151U);
    msg.timeline.assign("HZPEXCFBIHRMZDYVNZIQURTYAEFOGUOMTFVJTKDERXUGCKREUOFBGKAHBFEBJTOXMLAMIUNXYTUHOWWSYJUXZJRJVVFCBQZVPGODLGPQWYLAYEENYKHPNKSBWROOLHSCDI");
    msg.predicate.assign("WBLSGIZDEKGKFDJHLYIAQVXPMWPBMYUBCOAZSCPMYTIONYWBKADOJNVXASLVKJGCJURMANNGLALBQBEQOSFIEHBFOPSIRXCBYKPJCUXQOEZZSIJVNRWITPCCNTUXEHRJBS");

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
    msg.setTimeStamp(0.6818288359646963);
    msg.setSource(30680U);
    msg.setSourceEntity(29U);
    msg.setDestination(52397U);
    msg.setDestinationEntity(221U);
    msg.reactor.assign("TGSWQVGIJWJXXUDOQWDWEQJMDMZFAYODVNJCMTSPHWATMLPRONRFUNZOCMPPOREDSANGXUBTJKSLNIQDKBPROVTWSFNVHUJCYBKCZBBTQCGICDFVUTLRDYFSBXFIPUOZVNDESMQYKULFXMYNQPEBKISASCVMZORAAVEQRW");

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
    msg.setTimeStamp(0.7515552307905777);
    msg.setSource(47654U);
    msg.setSourceEntity(175U);
    msg.setDestination(38568U);
    msg.setDestinationEntity(239U);
    msg.reactor.assign("WSEVXNWIQDGIQAEHLLJRPGNJAC");

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
    msg.setTimeStamp(0.48675469848638886);
    msg.setSource(63153U);
    msg.setSourceEntity(107U);
    msg.setDestination(11348U);
    msg.setDestinationEntity(140U);
    msg.reactor.assign("WIMOKIIWLILPDAFMJUNTOAUDZUTNDLSJXAIVALZIOKNWSFXSKOVHQBRYLGSRJMUCHSCVNAUXJZUEWZNMWWHFTXLHYMVDKXGMTZQNCIPVDXVRHCUSZVPGBLMWYNHFKYEPBHLEQAFXISBPEGMBIQPMVCETUCCNLFBROEJAOOKJMZDVABYTVEDRRGCGXOPBBCFKWKDTFTZHJQNTRGEJPQSROUGYSCEAIWPXJYW");

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
    msg.setTimeStamp(0.020385890540077445);
    msg.setSource(8329U);
    msg.setSourceEntity(106U);
    msg.setDestination(4058U);
    msg.setDestinationEntity(146U);
    msg.topic.assign("OCNOMORBTWEIQBKDIMZZYENMETBHLUECPXIGDHHMWZMUHGBUWYCEYPNMGDXAEKRVDFHPKZCGTJXFKOJTQHDBUNPUOXKQBWOHKDXJVRQVRGSYTGURMIAGYLFMVDHRGSCOKSARXLQNYDWYIIVIVVJQBUNQGYFHLECRPPTTLABJMSPZPASVYXOLMWUNAQOXSDGWAHFBQJDFJVTECICUFUIZRETFLEJCVZALFZNWZSRCB");
    msg.data.assign("VXKANFIILEFKAOUMSYYJFRCSVVTFAUBBDXBSDVPUCUDQEHHIWYUMKUIPDGFIOVWBCXSRXQDQTKOFMJWSGREBNSQSWYIPVQDJZXWSRLZPBQMNTPXLZJJYE");

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
    msg.setTimeStamp(0.08153269983986511);
    msg.setSource(55857U);
    msg.setSourceEntity(191U);
    msg.setDestination(36178U);
    msg.setDestinationEntity(208U);
    msg.topic.assign("YIKTWNPWXISSGMTOFLOZQQURANBXQTDLKTFHXVMWSBYTSILXKDNPCIDCZAHTDIJGXFVHYHQCPKPEUCSULTIDUWJAKGKWTAQCPBJFZVROQQRSZBYDVWGFIPEUATVRLYWUPMBNDZVRPXNMZAHWTEVJOZWNGRFBNKVNWOEGHFOQYAYDUHNISQMBFYKCJASFXBCSDGIMVYNBEIELDEJOXJLJZRKRXEYOCVUR");
    msg.data.assign("KVWIYCQVUEJIZNSWWVZFXUMIFNQQFEFSHSSFZOUKPCUKDKUOYEAVAUHDOKGPYHAARXUPGSTQELWGOQUKSJRPL");

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
    msg.setTimeStamp(0.7759459639180035);
    msg.setSource(8017U);
    msg.setSourceEntity(72U);
    msg.setDestination(19099U);
    msg.setDestinationEntity(79U);
    msg.topic.assign("JYTYTKULIDGBSCJHSPPGDLQTMHJZQXKPDMXAHVPTBEEOOPUCLLNRQBNZWDHRABVDQZRZYFITUPIUKSELYCYOVIKFWSOYFWCHWABHDRVIFJRMTAWJGLQFWYLSGENHXUAXANGSIJGBEUZAOCPWUVZGLIXGGNUVVXCZBFMNXKKMLTJOSVWSQWXZJKPPMENRKXICVZEILXAQFHHBIRYTESMFAAWJCVCJDRRUTOSEUOYDMYNBTDDNM");
    msg.data.assign("GBZERXSIBOGOYRFU");

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
    msg.setTimeStamp(0.7407903736378271);
    msg.setSource(5507U);
    msg.setSourceEntity(67U);
    msg.setDestination(11273U);
    msg.setDestinationEntity(20U);
    msg.frameid = 170U;
    const signed char tmp_msg_0[] = {-65, -127, 107, -127, -78, 92, 119, -120, -108, -15, 120, -71, -21, -22, -92, -68, 113, 43, -120, -38, 33, -65, -63, -43, 92, 92, 84, -52, 103, 0, 80, -65, 47, -51, -120, -10, -80, -22, 37, -84, -90, -40, -122, 69, 0, -69, 103, 89, -107, -52, 107, -96, 3, -39, 35, 105, -7, -122, 36, -116, 124, -107, -108, 26, -27, 107, 33, -26, -4, -113, -100, 52, 115, 16, -113, 51, -99, -10, 118, 110, -39, 112, 95, 20, -117, -89, 54, -107, -122, 50, -20, -47, 91, -90, 29, -47, 112, -20, -101, -18, 97, 59, -57, -37, 62, -80, 107, -108, 14, -11, 119, 100, -19, 3, -5, 25, 43, 42, 77, 85, 42, -46, -18, 5, 38, 92, -9, 33, 66, -10, 88, -96, 0, -73, 31, -70, 43, 112, 104, 82, -72, 89, 17, -80, -51, -70, -21, 15, 108, 25, -83, -48, -103, 32, -31, 18, 114, -43, -74, -48, -53, -61, 28, -70, 38, -40, 49, 86, -64, 48, -86, 63, 97, 34, 74, 71, -90, -105, 119, -124, 62, 126, 12, 83, 22, -46, 107, -14, 73, -90, -2, -63, 116, -109, -60, -12, 60, -38, -34, -40, 23, -42, 124, 17, -109, -42, 99, 37, 17, -70, -108, 46, 77, -63, 123, 20, -92, -31, 68, -67, -111, 16, 85, 40, -36, -24, 79, -105, 122, 59, 17, -94, -24, 54, 102, -114, -32, -2, -63, -125, 21, 36, -89, -41, -40, -19, 64, -19, -24, 60, 122, 84, 123};
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
    msg.setTimeStamp(0.5852907752734288);
    msg.setSource(38229U);
    msg.setSourceEntity(80U);
    msg.setDestination(29153U);
    msg.setDestinationEntity(127U);
    msg.frameid = 145U;
    const signed char tmp_msg_0[] = {-126, -116, 37, -62, -40, 9, -39, -126, 15, 32, -44, -49, 21, -10, -124, -33, 97, -99, -7};
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
    msg.setTimeStamp(0.7626376445413422);
    msg.setSource(24658U);
    msg.setSourceEntity(187U);
    msg.setDestination(10134U);
    msg.setDestinationEntity(142U);
    msg.frameid = 58U;
    const signed char tmp_msg_0[] = {-16, 80, -65, 25, -123, 25, 35, -118, -55, -71, 4, -7, -94, -124, 11, -89, 6, -30, 69, 52, 8, 84, 123, -96, 10, 68, 36, -83, 23, -108, 87, 17, -122, 21, -83, 22, -77, -3, -61};
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
    msg.setTimeStamp(0.9599933480176062);
    msg.setSource(3364U);
    msg.setSourceEntity(209U);
    msg.setDestination(39052U);
    msg.setDestinationEntity(219U);
    msg.fps = 42U;
    msg.quality = 174U;
    msg.reps = 179U;
    msg.tsize = 120U;

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
    msg.setTimeStamp(0.6568520355382047);
    msg.setSource(64557U);
    msg.setSourceEntity(31U);
    msg.setDestination(19679U);
    msg.setDestinationEntity(31U);
    msg.fps = 152U;
    msg.quality = 153U;
    msg.reps = 104U;
    msg.tsize = 114U;

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
    msg.setTimeStamp(0.5395270726943061);
    msg.setSource(15525U);
    msg.setSourceEntity(175U);
    msg.setDestination(19250U);
    msg.setDestinationEntity(85U);
    msg.fps = 216U;
    msg.quality = 202U;
    msg.reps = 228U;
    msg.tsize = 122U;

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
    msg.setTimeStamp(0.9271089572461397);
    msg.setSource(37280U);
    msg.setSourceEntity(237U);
    msg.setDestination(59297U);
    msg.setDestinationEntity(204U);
    msg.lat = 0.7262289099880894;
    msg.lon = 0.9450786833653011;
    msg.depth = 196U;
    msg.speed = 0.08008131995479972;
    msg.psi = 0.94563615964748;

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
    msg.setTimeStamp(0.2497718353524766);
    msg.setSource(2219U);
    msg.setSourceEntity(217U);
    msg.setDestination(594U);
    msg.setDestinationEntity(105U);
    msg.lat = 0.5275723788754849;
    msg.lon = 0.05258700504467284;
    msg.depth = 107U;
    msg.speed = 0.5983847136480753;
    msg.psi = 0.05025454482247649;

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
    msg.setTimeStamp(0.17789855155057444);
    msg.setSource(18329U);
    msg.setSourceEntity(97U);
    msg.setDestination(28939U);
    msg.setDestinationEntity(245U);
    msg.lat = 0.2899419185361718;
    msg.lon = 0.8833820867590426;
    msg.depth = 22U;
    msg.speed = 0.9064087764070883;
    msg.psi = 0.7040432367122376;

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
    msg.setTimeStamp(0.6710955316044184);
    msg.setSource(29104U);
    msg.setSourceEntity(7U);
    msg.setDestination(27863U);
    msg.setDestinationEntity(62U);
    msg.label.assign("OIYIETIXSCKPQUDTOIDJRHDEPBCHVJQDPSLOSCPYEHHZGEDMASRKKLCEOCBYFJDSKLWGVBAWMTPC");
    msg.lat = 0.9505364253949812;
    msg.lon = 0.04856942183661794;
    msg.z = 0.8880232456203809;
    msg.z_units = 21U;
    msg.cog = 0.8378590550103115;
    msg.sog = 0.6045465400354264;

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
    msg.setTimeStamp(0.1926175731812716);
    msg.setSource(40144U);
    msg.setSourceEntity(40U);
    msg.setDestination(6802U);
    msg.setDestinationEntity(171U);
    msg.label.assign("PDRFQYHVGVEDVJIFNWIZCEWVAHZTPZBGQDEUEQVULXNTHCOSSCJAJM");
    msg.lat = 0.41924002940790295;
    msg.lon = 0.17335548883459628;
    msg.z = 0.09530690611971959;
    msg.z_units = 119U;
    msg.cog = 0.005218102922569856;
    msg.sog = 0.496023716715284;

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
    msg.setTimeStamp(0.11749525256382898);
    msg.setSource(40875U);
    msg.setSourceEntity(45U);
    msg.setDestination(43404U);
    msg.setDestinationEntity(46U);
    msg.label.assign("PRTMPJCDGTXJLKQQULSFUVRMOFAXZOHTXVRSJJEDLGFCVAZCDWCCVEYYBNXQXQWOPKUHJYUVHDIQTVUHHWQJISOQDEKGBYZJZNXWM");
    msg.lat = 0.4300225702877375;
    msg.lon = 0.7432642458673157;
    msg.z = 0.894899918798407;
    msg.z_units = 211U;
    msg.cog = 0.9680319796567547;
    msg.sog = 0.9517039863136908;

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
    msg.setTimeStamp(0.6945689063172927);
    msg.setSource(18812U);
    msg.setSourceEntity(50U);
    msg.setDestination(28518U);
    msg.setDestinationEntity(143U);
    msg.name.assign("GKXXBRKWLLVNTSEQFOWFWIZXPZGJXOQUEIOAVPWVUZTKWCJLHCKLMPDYJILYFTICIIXGMAFZNPSGJGQFDVKUGQOEHOYFLDSEJRIRJARFCYFLZHVYYCXRRRTAMSITHWYZRESAVFWGBHDUPHYNQEGEVPKJZYBUDNAWPOVBCJMNNMTOSSBVSJNHYCRIBIRXXKKCOKAQOQDBTEPHUMLDBXEMCQUZT");
    msg.value.assign("XIGSFHOGVAOTAUKDXGZJIGSWICXKZRHLRODJXBCHRTYVIQAQBBDQFAZJWKHLHJESGIGVTENBEUACALYAIEYPJMDBLWQFSVODVKPWKFOMEUNRUOZEHSPXKTCHOXLSRDWJMLSIJFYBHREZVNFDTTUCNHEGNPVWAWFRNVPYXCNCRDTMSICIHMD");

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
    msg.setTimeStamp(0.34304833447381666);
    msg.setSource(40858U);
    msg.setSourceEntity(195U);
    msg.setDestination(43347U);
    msg.setDestinationEntity(15U);
    msg.name.assign("QVNGPKHOWONXRALHAGCTFIPOONZGBXMCADWHOXSIIFTSJJBCGYUUPIFUK");
    msg.value.assign("KDFALWHYQWBCGBBANGRUOFPTYFMTUUKCXVJTAAZSZYAZDGNBVWKEPFEPKXDBDRWUULYMKAPIJPTJQSOGEVUWMHLCKYMVCYLXQIEDQKCFAUIANRGIYTHUTCMLQWBXLQILGUVBGSMJTOOHXVVYLDZQMFXBWOSWWSETNMIOPNMNSPHJHDCPVYLZSFOWDYEURNRQSMZREHVRHRJZPRG");

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
    msg.setTimeStamp(0.4472006978109715);
    msg.setSource(22157U);
    msg.setSourceEntity(58U);
    msg.setDestination(63019U);
    msg.setDestinationEntity(181U);
    msg.name.assign("RGRXWGTNJEVBRDMIISIYJCQXOGQVUQFWKEOKLXETTZPIGHFNNBQBBZQYKAVSPMPIMAPJMKDBDLHVAEFGCPVIKPVDKOLCDTZUWOSBNZRVNAFUZRDRTIULHBESXEBKAEHUFFRZLDASCQODAHMALIYYLJQVXVGWNMWTTEQIYXSQWLHWTJHCMDIKXPNLJFNUMRPUWJBNPYAXOF");
    msg.value.assign("BXGGUHZLLEOPZRYDLDIODWOKSBHFYOPGZIMBMWLGBSXEUIJXURWTIPAQCHVFCJIENJNZKGCUOYCJIBVXIVKSKWYFPUHIMGSQJHPEZPFRNXYNMJOISEMNNDWVCFXRRGMXPDLWEZFVAKQAEHFEAAYHTLJKHBWORTXUTCPBNLTKCDNAQKDJUCSAZVQSYEMVDJDVBGETYRTBRKTALIGVCHPOQLYFAUWLCZRJAUYOXKZWQXHQBNMSSFQNTRPGVFQMMS");

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
    msg.setTimeStamp(0.7899242843714389);
    msg.setSource(3212U);
    msg.setSourceEntity(83U);
    msg.setDestination(12800U);
    msg.setDestinationEntity(11U);
    msg.name.assign("TJQVZLTSCUDOWHBYKZEESNRVSWGKVMTJLLXCCYWSELRAKRTAMPPSGRTPIUUKXNUPIHQIGZXOPQJFIVPMNTXUQHZCYFEEXMGOGZZAAQYRPOXNJHQZCMYRRHVBSSEUMGFGYMIOZRNCUJCVLTSGZINHHIYDCHKJELVZWNNUKPTQWHDWEXFKWESEAXDJLBVPOVOQNCWCGRTOTHBBWRFNDAFBKDLFVIYSFDXP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("IEYHLYCEIORODBNTUWIEAUSHNLSDCJGKNNPBMAQNMWECPWLFAORFMQOKDWGBKPLTVMSHULIVKXYXFUYWOGRWL");
    tmp_msg_0.value.assign("COCHIMYJJWCYURYNRBZXPVGXEKLOCTAAKHAXPVTKVKQZQMXJIFBBEZULGTMPGNOOKWWUZUYDXYMUJIRIYMDWDXILSOVZTAYIHIBWOMKZAVWKUGUZFONPYNDNDZVCOFBLJAVKWNGHNPTVRGUZRATYLHJDKCFLQFBJFSGIERTXCQSMOUMNGSFCLQRBSSFWDEXYEQEWAQCOPGCLDXMZHBNHRVBJAQUMSAWJEQDRGPHT");
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
    msg.setTimeStamp(0.7476550488617902);
    msg.setSource(54166U);
    msg.setSourceEntity(129U);
    msg.setDestination(21219U);
    msg.setDestinationEntity(29U);
    msg.name.assign("PSCWPVWQZLEEXQKYHZACBRYPMAHHBWNSIQCCSP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("JVHTRPQXEZPBXHCOYPVFWWFDAQZDCORYQCDZBBMHYMPSRIRWOXZNKBEKGVZHXBTMSNZBCGXMIOWQDDYMNQMWWHRSRGLERNGPITSVVTAXMASVQDFKAUWYFERXEUIWGJKVLITJBKDUTRICEJPSHDUFGJPQXQWLNVARHFNOJGUOVUJUYTKIHBMPAUMGXJYCUHQMLAIOCNTLKLNCDCINYNUVKEZAYWZTGLSEPEQAZLLZESYBJSIO");
    tmp_msg_0.value.assign("DOGNHWMXCLLWI");
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
    msg.setTimeStamp(0.2764650756770295);
    msg.setSource(47799U);
    msg.setSourceEntity(116U);
    msg.setDestination(45060U);
    msg.setDestinationEntity(254U);
    msg.name.assign("LCOQPMLWXJMPDQSBPSKURRZLTWFIPOYTNVTKQGOVOEUXJACPUPHSRBHEJXHOZADLBSGIDWVFNFQUR");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("XBMJDAOYKXFHKYFDQNZSTHSXOTWGKODCQNABCQMPCAYKXRGNOFDOSNWYDJZGJKFOYZQYRFZIAWLJNDJZFEGMWUTESDLUGHRPJCEDVHAQMVCZCIMMWUZXWCTTWBUFZGLLSBJLICQIPBYUXSEDTPJJELXICEHGZOAIGNSAZVINVIKPK");
    tmp_msg_0.value.assign("ETHIGVNZZVBWDQNREJAMQGLZSLNNCNBPZEEALFLDOJLEQDRUUOCYRLCJUKMJMD");
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
    msg.setTimeStamp(0.7922348899988632);
    msg.setSource(33087U);
    msg.setSourceEntity(187U);
    msg.setDestination(3678U);
    msg.setDestinationEntity(243U);
    msg.name.assign("LCYJAKSCKMIWSFZGBTHKRJUGVUQIZANABTDZTBTRQLOZYDBHVPHMODUKWAFALMIOAEMQSGNEVRGMWQIMECJJPHDYGYPKBSFNXVNNLKHYZYINBICUEFNAWPXWHPEHOQESUMTCSMOVVKOTIXTFAVIWDKNCLRFSQQRECRZXZJXELWDGOJONJMCPEWJUSOVYACJVPDUZR");
    msg.visibility.assign("RZKCPYHRZUNJYBEXKOSHAKDSLHNPGGAXFYFMYAHNZKTZEGNOUXPHGGCPZPUJMMVEY");
    msg.scope.assign("KMPTLGLUSATLHKRRVEGNDBDJMZXYUTWATQXJTZSWLBJGTTVELSEZ");

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
    msg.setTimeStamp(0.9992127577443499);
    msg.setSource(9002U);
    msg.setSourceEntity(179U);
    msg.setDestination(28496U);
    msg.setDestinationEntity(246U);
    msg.name.assign("UGDWAREWJFTPMQBLTGUNEZIBCXLOYXCZYOMLLQEXRVTWNQVOWWMRQCVVDOKUHOGKNJXKKATLWDCSSGLONQZMAVLIYHONPWJNXPZBYXTYPPSRFBEHVZFPBVIFDFREYXXPIANAGBNJMSGPUDSSDALMXDFCAUUEIOBTWMZUSZFIVGSQJZNTBQZIHJFKPDYORBOGKYVLDQUCYMRWBAYPFCIHEJJHHHTWCQCVCNEMIKU");
    msg.visibility.assign("NICKPHSCETHLJKANUWZAFSSOXLBREBHKIWSBTKKCCQUVAFAMDCRP");
    msg.scope.assign("YGHEBDZDQUFITZAWXFAVUBDPEKQYLGMMHPFJIZUJYCIIZYWSWELNKVRLROTDPKUNLRCNOPLYCZSRRNTSSRDPZBQXHEXVJLXACUQRDOSKLWCEQQJSGIFVNFPCVVUCYKPMKQAFFWGDVXIMGQZMJGMIAMAAQTCJPZNFWPHOOSZBIXYYFOGWEHVZTXEUCBKNAGJEGHWMEBYXUGMBLUHHJSTLQLNKBTDFNSODRDBBKOCNWJSVV");

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
    msg.setTimeStamp(0.5352013339254248);
    msg.setSource(60040U);
    msg.setSourceEntity(173U);
    msg.setDestination(9499U);
    msg.setDestinationEntity(113U);
    msg.name.assign("ETYTXUCQTDMCNALHUQIPEMVSRIKSVOTPNKZEHHOZQAERJVUYSPSHTEPZAFSFDXEXLROYGOVBGWTBZHQOGTGMIXTJLLYRYZDBO");
    msg.visibility.assign("BHFFSUUQDNGGCAUXJWVWTWAPBCHJHSCIVDMFRIBERBAZEHVYEAQYFQ");
    msg.scope.assign("IHYCRAAKTBARUTLWDVCYJXAEQCGMDZVJOHWOQEIJAJHPHDIPEESCJGYFPWGTZPUXPBTVSUNRSMFWBSLCDNLSNMFDWWVYDVQIYZXMQWXNDQVGEZLOARRYLUWKMEVLPSHTXAVSPXJHYIFGTIRKBKBMFIPQOHRCUJBPLTANNGZZYGKGOTEOEHQMWFKZNUOACEDSUBUWOFFZXTIOR");

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
    msg.setTimeStamp(0.17011946312388404);
    msg.setSource(31550U);
    msg.setSourceEntity(100U);
    msg.setDestination(16797U);
    msg.setDestinationEntity(245U);
    msg.name.assign("BCBEAEPCGTPIZMUHKYQVPDAKNUYPU");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("RDJJVGKZRBVASXSATIYYPTDQEZNPTITSJVRUCZYHFNLMJWKFDTFXAEUSFJMTXCIYBOPHQUCIEUNECFMFKWVPVXLBSLLVGKJPPEUGLRW");
    tmp_msg_0.value.assign("GUHIUOIQYJBGBDKNWZHGLFRSKCCDLCEDUJLHIDKUJVBYUJPCRVFAHYTHLOWANMYTFPZSXBSVZBIVWCHOTGNQDXGYARXUKTZICLYGQOWCXQVDHOWHTKMZMLQIXWCPGKEZXODZRAFAWOPBIYSGBEWLOUJAEEMCDTEKOTAEVHNYPNTRMPQSFJUQRMRCJUXWVGBBNDIZFWSFFUPBJGTNPNJXYSMXVKANQEIJOQZAHKRPILF");
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
    msg.setTimeStamp(0.9232855169719728);
    msg.setSource(15066U);
    msg.setSourceEntity(12U);
    msg.setDestination(6218U);
    msg.setDestinationEntity(92U);
    msg.name.assign("JQKUDCNICLCSZFJVZGCANYNRXTRMUFEYPIJBBCEYYMSMISHIBXZYGPERKOMUUWLDPAHDHMDTADZFELRFPXMSWARZGBDLTEJOFKDCZLUXHON");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("SDZFTULQAWPLLBOKIFASNGKDYSDDYCJPGSWJOQRJAUROIOPTPHQKBBHYHLDLRGOCSUBMKFPXNTRDZHC");
    tmp_msg_0.value.assign("SBQXDSDOMZRWUZKRNYAAJDCAFECJLLSOLIFASNRVGDJICPUKLASQZOYHGVOHZKOWTPLVURMBEHDGIGLWFNBOQYIVBSCWPVQTAEYMOLIKPUNJKIGUGPWVXBNXHGUOYLRBHUIKHERPMZJCTEGSUCNKQIQZVIJCMEYNJWFFLSMJTCXVZUQPUHCPONTMTVRVAAIGXTWNMHWTDYSJQFMRDNZFGKZZRWXDXLBXKJPHFYWREYOBKEESXE");
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
    msg.setTimeStamp(0.7933603581100439);
    msg.setSource(7363U);
    msg.setSourceEntity(138U);
    msg.setDestination(3721U);
    msg.setDestinationEntity(235U);
    msg.name.assign("KWATEGMGQOQHEPUFUSCXRCCAAIHLDOXOMGJWOLRAZYXYBLTSCDMMLDDPHVQMWVOSJFYKSDDUNVQUKRGMBNYATCPJAVKDEHKEXKIMXUCRIOQSEYPDZPFEFKAPHNWLWSOLNZWJQICP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("QFVVKNECLGCONLITCRQSOHLBXRQNYXAHDMMEKOCWIJZPPYZXLTRIMZAGPDPTQMN");
    tmp_msg_0.value.assign("SILWLELDDHJWFXWUQBKNLVQNIMVUXPLYYJNQYPHEKKBOWJXBHXKZTESERZLLSRFUAIWTMOFQDFJHYVFSBQGQMESJFMOULCEUWOMSLVPYZRNREVCEOCNKWACGPAPJPAGDUCYVRDBCTOIMKBFGHKGQIZCTRRSYY");
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
    msg.setTimeStamp(0.6362658566387807);
    msg.setSource(2668U);
    msg.setSourceEntity(52U);
    msg.setDestination(41976U);
    msg.setDestinationEntity(104U);
    msg.name.assign("AYTCIKZHRLQKNIRYHQGHSAEUTOZFWPMQVBBEUCXQIFPUOSLNXKNIGVAJTUVTTMKDVYAMMUTSLCJAUNXNFTPAENOAYEZRDHEQZHDFRKVBJEAVYLBGHUEWXYMZGPWOKHOMJVSFUNOCLGPDCJFGGXBBHURGLSWEBYTWDR");

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
    msg.setTimeStamp(0.33126480109262413);
    msg.setSource(61807U);
    msg.setSourceEntity(223U);
    msg.setDestination(4706U);
    msg.setDestinationEntity(242U);
    msg.name.assign("SXGKWCJRHZBJTPXAICFKJEFSURXVQGJKRJXWNRYAEJKGMDNSWSOUQSYLWGKUTUJGALQWQFHOYKBGODMYP");

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
    msg.setTimeStamp(0.7097476773090056);
    msg.setSource(56934U);
    msg.setSourceEntity(105U);
    msg.setDestination(12119U);
    msg.setDestinationEntity(45U);
    msg.name.assign("SBTIYEDIMXLBESPKIBJOZECJLLRIFTATLNQDZCUMWQOFGAXTRIRRURMAOALUSZFWVFHECOVQSHEXYMSVNJBGYNARUIUSDMMPCEMXKQBTGYGESPNQXNTPBZPCBDVMWKGYNYXGVZJKPHGXGEGJUDCYVDLTNHJNWDQFEHWHDDJRKMWSUQNKTIZSOZVFPEYHPLBJ");

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
    msg.setTimeStamp(0.06665783726973618);
    msg.setSource(40036U);
    msg.setSourceEntity(7U);
    msg.setDestination(49759U);
    msg.setDestinationEntity(125U);
    msg.timeout = 22068384U;

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
    msg.setTimeStamp(0.8808880646814701);
    msg.setSource(32971U);
    msg.setSourceEntity(87U);
    msg.setDestination(63799U);
    msg.setDestinationEntity(209U);
    msg.timeout = 3059517994U;

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
    msg.setTimeStamp(0.30115655967543553);
    msg.setSource(38603U);
    msg.setSourceEntity(217U);
    msg.setDestination(50426U);
    msg.setDestinationEntity(110U);
    msg.timeout = 636854251U;

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
    msg.setTimeStamp(0.462880577035202);
    msg.setSource(56883U);
    msg.setSourceEntity(11U);
    msg.setDestination(19027U);
    msg.setDestinationEntity(101U);
    msg.sessid = 4053654604U;

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
    msg.setTimeStamp(0.8677052877068466);
    msg.setSource(65115U);
    msg.setSourceEntity(229U);
    msg.setDestination(17933U);
    msg.setDestinationEntity(204U);
    msg.sessid = 3243893296U;

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
    msg.setTimeStamp(0.035948312123769255);
    msg.setSource(22637U);
    msg.setSourceEntity(120U);
    msg.setDestination(14465U);
    msg.setDestinationEntity(50U);
    msg.sessid = 3068607248U;

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
    msg.setTimeStamp(0.3062199973898224);
    msg.setSource(61583U);
    msg.setSourceEntity(11U);
    msg.setDestination(11245U);
    msg.setDestinationEntity(130U);
    msg.sessid = 2299476225U;
    msg.messages.assign("ZPCXXAEPXQRXVKFORIPACFVWUOKLPYJYJHSZALBDXTGEIFBZGMOFKLIZMWMUYTZRWYXVWDAXJPSJBLSJDGSTUIEQSHTQOMNYBLHEFUTQDJNFBBWPKZAKVAWWRVNEUSNGXDYRKWJIHVUQQEURJJKXQCYELHTHWLCVZZNVMWUHFLTOXYHFCSBYUNNPSAPPRAEMEKILDMRDGNZSDZBSYIOQGCTGLKDMOCHVNIBMBICHVNURQOGFGIGTMJCREQAD");

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
    msg.setTimeStamp(0.8620736950474661);
    msg.setSource(20043U);
    msg.setSourceEntity(11U);
    msg.setDestination(53086U);
    msg.setDestinationEntity(36U);
    msg.sessid = 3748848568U;
    msg.messages.assign("XGBGWKNCTLQXVELJTPJWZBRUKMMOBWMIWSDZHXHEYIGNPQUQHSCJUKKILTWCASNKPFPYETMHOCMPPFDOZHOAOKRWMSOASOFGCEIOTTDPNDNSBRRKUCEVHDR");

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
    msg.setTimeStamp(0.5834535673916347);
    msg.setSource(43346U);
    msg.setSourceEntity(47U);
    msg.setDestination(12013U);
    msg.setDestinationEntity(33U);
    msg.sessid = 567419451U;
    msg.messages.assign("SYMXJZDCYJBTRGLXJCKYELSDQIATULGVAPFVBEAFKFVILRNUJHBCEBODKTIWVKSNFCIHXHVASJWONYUDBZRUTNZPQNSURAFOSOZ");

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
    msg.setTimeStamp(0.7040630735272141);
    msg.setSource(39361U);
    msg.setSourceEntity(100U);
    msg.setDestination(39075U);
    msg.setDestinationEntity(205U);
    msg.sessid = 1099662014U;

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
    msg.setTimeStamp(0.10744103301096852);
    msg.setSource(20876U);
    msg.setSourceEntity(165U);
    msg.setDestination(34635U);
    msg.setDestinationEntity(182U);
    msg.sessid = 4209645997U;

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
    msg.setTimeStamp(0.0055939689420806404);
    msg.setSource(40346U);
    msg.setSourceEntity(51U);
    msg.setDestination(50579U);
    msg.setDestinationEntity(185U);
    msg.sessid = 1810140429U;

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
    msg.setTimeStamp(0.9273847110658621);
    msg.setSource(5485U);
    msg.setSourceEntity(230U);
    msg.setDestination(4211U);
    msg.setDestinationEntity(179U);
    msg.sessid = 1772313719U;
    msg.status = 144U;

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
    msg.setTimeStamp(0.18875857741489677);
    msg.setSource(47058U);
    msg.setSourceEntity(205U);
    msg.setDestination(49767U);
    msg.setDestinationEntity(117U);
    msg.sessid = 2893698118U;
    msg.status = 54U;

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
    msg.setTimeStamp(0.5771497260426647);
    msg.setSource(1568U);
    msg.setSourceEntity(148U);
    msg.setDestination(44080U);
    msg.setDestinationEntity(163U);
    msg.sessid = 2544108476U;
    msg.status = 20U;

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
    msg.setTimeStamp(0.9608667017476186);
    msg.setSource(40556U);
    msg.setSourceEntity(55U);
    msg.setDestination(39446U);
    msg.setDestinationEntity(243U);
    msg.name.assign("GJUDTGWBPLHOXVWBHUFYLGBYRFTFBHMDYPPOKGSMCDIMYATHSFLQJWPLKJDSLKVCXXQFNNBFSRYDCKZLKQEVEXLZRBAFXQM");

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
    msg.setTimeStamp(0.20140745463332588);
    msg.setSource(58714U);
    msg.setSourceEntity(50U);
    msg.setDestination(32461U);
    msg.setDestinationEntity(174U);
    msg.name.assign("EJSEMZXDQKHFWPDCXRZABXMGZQNWRTNDVYRTPVCNZACBOCVFVDUISKTRBMSSIIRLAUNLBPBPICMKXVZBYKYBNJJAUGDLLPEFFHWQNEVUCFMOYIORKLXTLREQSEEBKGTAORGSUNJSPEXABFAFWEPYXIKTZPJFYUJCLDDZPJKGSMODUEKXQMYUJGLQGIMIZHAHTVWFQO");

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
    msg.setTimeStamp(0.19040857062141325);
    msg.setSource(9190U);
    msg.setSourceEntity(198U);
    msg.setDestination(54516U);
    msg.setDestinationEntity(43U);
    msg.name.assign("VOWUYFUOBVGHKEIKEITOXGUFZBNFVEHWFXROBLIUCMLLJEOMBMCUMUUCHRQNLAYKEQJHKQHBPPYDVFGHXKMLXARPQTOJIJQDHVGSWJDIWZWANQUPSSZWROKPFGV");

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
    msg.setTimeStamp(0.2948783285241625);
    msg.setSource(7958U);
    msg.setSourceEntity(24U);
    msg.setDestination(5325U);
    msg.setDestinationEntity(69U);
    msg.name.assign("VTFTREICZUDSCPVOSWQVANDNBSFTNKLZJPNVFEIOHRPRZAUGRKTLNJKKXMDSXLWZBEJFYJWXYOHUGGAOHZFK");

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
    msg.setTimeStamp(0.5361819640262016);
    msg.setSource(47880U);
    msg.setSourceEntity(254U);
    msg.setDestination(29448U);
    msg.setDestinationEntity(81U);
    msg.name.assign("HFYTFWWBHWBMVJFEOYEDOHXWELGIADWZFNTHCQOIJTIEYBRLHVBVIABULJSZCFRJPSJXXQPOOESMDI");

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
    msg.setTimeStamp(0.3847277342796511);
    msg.setSource(56580U);
    msg.setSourceEntity(149U);
    msg.setDestination(345U);
    msg.setDestinationEntity(174U);
    msg.name.assign("SRGGLZCQBTAGTSIMDILUHXPOEUSQHSJHLIBNFWTRJGGTNFTBAPTDTXCDUUEDFQOZOLFMSDDKEPBMVNDYNSCLZQEZWJIJHWLQOCRKQLMHDXMARIPPVXAJVKCTKAZVPSHQBYMMSMBCLBVCBDWYCV");

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
    msg.setTimeStamp(0.05037440759722567);
    msg.setSource(55776U);
    msg.setSourceEntity(149U);
    msg.setDestination(30565U);
    msg.setDestinationEntity(147U);
    msg.type = 249U;
    msg.error.assign("CRSNQNCGFBHNHLXZQEQKXWIIEBPQPUAXFIPKEKGMYBV");

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
    msg.setTimeStamp(0.14939891677941342);
    msg.setSource(63140U);
    msg.setSourceEntity(83U);
    msg.setDestination(39007U);
    msg.setDestinationEntity(23U);
    msg.type = 202U;
    msg.error.assign("ZXPQJIDDELGYKTSIYKADBJVUVCJJUJGOHCRACMTOFYZHUCLVDSZSRTOABIPCGLKOOVBHJLTLEXPNWANPPLNQQVREAIXYIRDKANSXEOMUNDLRWATCXMUNHWEVKSXBFIDUFMMFVIJBOVRUQSUMBBCLWZXGPWXMBFYVKXKCIS");

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
    msg.setTimeStamp(0.5786060252442423);
    msg.setSource(37876U);
    msg.setSourceEntity(101U);
    msg.setDestination(45400U);
    msg.setDestinationEntity(208U);
    msg.type = 189U;
    msg.error.assign("BOPYTILMKYSXMRZPTHGMJWLPQOMGFPVLWCUQDIKZMGQRFJUMFVTKBWWLONZZUCHMEAQYSJRTQKXQYEUFZSQZJCFZFRRVCEYPECQYGYTYDNFHLCLHMPNEUVAUXOIAGYKCDAKVVBSXVLTJWCOSZXMFNHRIEDBEEWJTIBVVXNDGIUBDBJIGUNHDOOFAOAHYWWBDPRJLSKH");

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
    msg.setTimeStamp(0.15167489690672564);
    msg.setSource(36006U);
    msg.setSourceEntity(252U);
    msg.setDestination(7057U);
    msg.setDestinationEntity(249U);
    msg.seq = 39521U;
    msg.sys_dst.assign("SIICBSFHDQQQZCGVNQOUZWFALPKEBWZRZWZLKLCVTWURLWIOCJTLCNAHAJPFHEEBDMMKQQPEFXGUBOBMQYYJMTXAWNNMCRLWIOEKFCELOBLNEZIJDVUOHTHIJBVCXQSYXRYZPXOBVMDSEKYMDICAMLGTVJYORQSNAUDBVEWSBPPZDUXJRDGFVHCKZNTGSXTUHXZIKTMUNHTFXIANRYUKGQORDRTPOFMVYWVGJIDGAALJY");
    msg.flags = 57U;
    const signed char tmp_msg_0[] = {-43, 9, 40, -74, -78, 77, -32, 118, 0, 50, -104, 12, 16, 36, 9, -3, 44, -15, 3, 40, -5, 106, -66, 64, 77, -60, -71, 117, -102, 80, -100, -19, 63, 111, 41, -53, -55, -88, -8, 43, 28, -97, -44, -32, -71, -62, 76, 65, -18, -76, -55, 80, -43, 25, 87};
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
    msg.setTimeStamp(0.25227229377365257);
    msg.setSource(33726U);
    msg.setSourceEntity(218U);
    msg.setDestination(29873U);
    msg.setDestinationEntity(91U);
    msg.seq = 51335U;
    msg.sys_dst.assign("KYOGKJUGHFTWVXGTSSQIPZXSHYTANKLWMXAEMIESFWVGXJENYQAOEJOOLQBTFTYQDXBNRITIDOCGVMLXZSRWYPXLCNTJXNUCGZYNODUIFQEUDBJKEIZMTKSACPBUHOCCUSHOOJKHHJPZFRMRCLBDWMFLDFGYSFPKAKXPWAVDYKMULPBAARMPMFR");
    msg.flags = 205U;
    const signed char tmp_msg_0[] = {-77, 39, 40, 108, 113, -11, 28, 98, 19, -90, -33, -7, 26, -25, 125, -11, -9, -124, -115, -91, 125, 60, 44, 71, -121, -21, -51, 36, -26, 65, -77, 92, -47, 116, -1, 20, 91, -8, -44, 16, -89, -39, 105, 66, -63, 41, 60, -76, 46, 119, 9, 10, -128, 84, 34, -34, 17, -78, -35, 16};
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
    msg.setTimeStamp(0.7893528177613413);
    msg.setSource(39607U);
    msg.setSourceEntity(13U);
    msg.setDestination(58799U);
    msg.setDestinationEntity(94U);
    msg.seq = 40191U;
    msg.sys_dst.assign("ANAYFBWAOBMCISUMRVFJMWXTU");
    msg.flags = 188U;
    const signed char tmp_msg_0[] = {-104, 124, -115, -9, -122, 71, -30, -104, 30, 71, -80, -128, 15, 74, 46, -20, -41, 87, -57, 83, 52, -51, 116, -49, -44, 116, -20, 92, -79, 111, 10, 20, -23, 82, -109, -118, -81, -80, 118, 71, 67, 115, 103, 126, -37, -101, -120, 98, 47, -120, -38, -55, -18, -19, -128, 77, 36, 117, -17, 119, 76, -70, 9, 66, -72, -45, -19, -45, 40, -50, -17, 21, -122, 52, 111, -71, 86, -18, -122, 47, -99, -84, 12, 57, -84, 53, -116, 18, 126, 28, -66, -64, -124, 47, 22, -54, 57, -59, -85, -54, 104, -41, -13, 57, -13, 13, 78, 120, 28, -71, 82, -83, 100, 30, 41, 110, 64, -87, 95, -19, 98, -33, 118, -20, -88, -116, -128, 3, -100, 93, -61, -112, -69, -97, 0, 79, -77, 45, 118, 77, -32, -47, 15, 12, -118, -11, 72, -30, 48, -124, 13, -14, -33, 98, 28, -27, 81, 45, 40, -72, -43, -26, 117, 30, -59, -12, 8};
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
    msg.setTimeStamp(0.6150990204082951);
    msg.setSource(1751U);
    msg.setSourceEntity(54U);
    msg.setDestination(35632U);
    msg.setDestinationEntity(215U);
    msg.sys_src.assign("ERWFIIVXQRGJGOPAIGKCPNGBPCJBHVDQFWCULEQKDDEWVENCLZNKEAVMUDAMKYAPFQXPNMYNUYHJKKNCTDWHPONOVCUCSHAMPOBQVVKHGRAZJ");
    msg.sys_dst.assign("EMDLAZEMJRNZKRRFBCASTXDEICOSTXGSPCYGEIFRMCNPNNLTCVYPPJBRSXQNXMDM");
    msg.flags = 61U;
    const signed char tmp_msg_0[] = {106, -106, 32, -118, -58, 12, -5, 123, -36, 24, 39, 4, 14, -68, 95, -53, -53, -92, 34, 47, -92, -61, -8, -45, -61, -38, 24, -68, -21, 43, 0, -61, -70, -59, 101, 27, 10, -15, -95, -16, 80, 105, 55, 73, 126, 77, 125, 51, -121, -64, -11, 112, -44, -54, -83, 18, -118, 3, -122, 96, 109, 5, -89, -65, -34, 125, 35, -121, 112, 98, -46, -123, 40, -26, -119, -2, -94, 45, 15, -48, -92, 116, -91, 57, 72, 13, 4, 55, 33, -125, -18, 87, -109, 45, 97, 40, 91, -5, -10, 48, 27, -67, -28, -112, 126, -10, 108, -110, -85, 109, 107, 82, 67, 105, -101, 25, 15, -83, 65, 92, -35, -41, 62, 91, 72, 86, 103, -18, -121, -115, -51, 16, 78, 11, -5, -20, 61, -73, -97, -75, 65, 105, -4, -44, -108, -98, -43, 16, -108, 58, -68, 105, 123, 60, -51, 45, 103, 115, 77, -22, 126, 48, -77, 86, 38, 67, 22, 92, 24, -38, 110, -9, -30, -83, 47, 21, -18, 112, -79, 58, 80, -91, -110, 26, -42, -46, 46, -43, 70, -40, -98, 31, -110, 84, 16, -67, -59, 76, -55, 5, 72, -28, -19, 98, 16, 109, -9, 101, -94, 117, -22, -103, 87, 51, 60, 81, 34, 74, -124, 83, -116, -116};
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
    msg.setTimeStamp(0.4706340484598076);
    msg.setSource(31112U);
    msg.setSourceEntity(184U);
    msg.setDestination(11168U);
    msg.setDestinationEntity(25U);
    msg.sys_src.assign("SSBHQNJEMLCYJFPGTNBZADOFGXXCWQNUQWGBLBXBXAINJWETFZHKRCFLXKTHOHVSWHVXEOODVTXTWVAPKOPMRKBEIWSWUDPMDYHYKCNRJAFPOTMKBLORNILZYTVARZRFROHCVWIAVQCZCLNRJMSMJ");
    msg.sys_dst.assign("RVVUXTLDGJGPCOLRCTSSQMYNJPOAQUWMNUFZQAZJXAWPISQTDCSYGDFEASNWJHVLAGIGABTEFWXDTWEYKHFSJCQNQWVBXBMEISYIKPNREYHWXISCFMCQYXFKQMSNEILENGMXABP");
    msg.flags = 252U;
    const signed char tmp_msg_0[] = {-22, 91, -32, -1, -12, -53, 86, -95, 105, 64, -93, -58, -74, 74, -32, 14, -85, 25, 62, 27, -109, 119, -104, 19, -49, 12, -115, 52, -55, -65, -30, 0, -98, -98, -98, 31, -69, 113, -89, 55, -128, -82, -1, 106, -123, -57, 102, 32, 60, -6, -88, 59, 31, -100, -48, -50, -39, 20, -76, -74, 30, 94, -85, 124, -82, -60, -102, -124, 45, -78, 84, 59, -77, 91, 18, -40, 8, 121, -87, -62, 121, 48, -127, -11, -54, -57, -16, 62, 77, -37, -87, 80, 5, 97, -51, -117, -18, 120, -17, 9, 22, -67, -46, -24, 21, -71, 112, -59, -48, -33, -91, 60, 81, -6, 67, 22, 123, 103, 11, 28, -54, 99, 56, 116, -10, -3, 69, 0};
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
    msg.setTimeStamp(0.4746579575637494);
    msg.setSource(10246U);
    msg.setSourceEntity(64U);
    msg.setDestination(45396U);
    msg.setDestinationEntity(11U);
    msg.sys_src.assign("SNJRMIUAGWXKZFAYRUAJZPAVWQFHGTKEIAVLZDSFKEPBGUPKEBFDZMBUHDCEPSBKJONALJOXOYVCEBBTDXABIKSTFURUQMQODTYNWRBSVX");
    msg.sys_dst.assign("OOEWAJWYLRAZRHYIYBWAXVANQKMABLFAVKJRUSFZGGWBVQWRZAOTJQUCUTIDPFEVHCQUKGZDAYLYS");
    msg.flags = 36U;
    const signed char tmp_msg_0[] = {79, 26, 55, 80, 79, -28, -14, 23, 66, 26, 9, -45, -43, 64, 46, -33, -94, -52, -77, -24, -72, -89, 24, -1, 56, 22, -97, -7, -97, 116, 112, -10, -111, -71, 69, -111, -127, 114, -94, -68, 74, 80, 92, 36, 58, -93, 100, -36, 31, -113, -42, -101, 33, 92, -11, 101, 105, -62, -16, -4, 18, -27, 22, -52, -101, -119, -77, 95, 66, -25, -124, -68, -34, -91, -109, -58, 75, 58, -69, -98, 94, -87, 121, 55, -65, -92, -9, -95, -52, 18, 114, 35, 34, 33, -124, -58, -90, 3, 43, -114, 55, -17, 79, 102, 54, -81, -44, 19, 36, -122, -111, -116, 125, -42, -7, 80, 52, -71, 45, -90, -42, 2, -97, -39, -117, -91, -61, 119, 38, -114, 106, -118, -46, -5, 65};
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
    msg.setTimeStamp(0.24414864968535432);
    msg.setSource(35856U);
    msg.setSourceEntity(237U);
    msg.setDestination(17719U);
    msg.setDestinationEntity(82U);
    msg.seq = 36799U;
    msg.value = 216U;
    msg.error.assign("ZKBJKJUEFRBONLXLTNLRMEX");

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
    msg.setTimeStamp(0.5822569076646155);
    msg.setSource(25421U);
    msg.setSourceEntity(215U);
    msg.setDestination(16542U);
    msg.setDestinationEntity(247U);
    msg.seq = 44975U;
    msg.value = 110U;
    msg.error.assign("YUONEVIDOAPWIQZCMRQCPBMTZPJKIZXSQJLEFEMTGSRYKGBAFATJKEHCRGRUNLFVTDTDDEDARRDLPVHDSIOMGFHBYMXSBGUUJPKBQWCNYXFNSBIKSHWMKUHZWUGXRSJWXEVKZDQPHUOWREHVTQGY");

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
    msg.setTimeStamp(0.4019106965009014);
    msg.setSource(38652U);
    msg.setSourceEntity(181U);
    msg.setDestination(7909U);
    msg.setDestinationEntity(184U);
    msg.seq = 26443U;
    msg.value = 169U;
    msg.error.assign("CHDVILIEGRTXEVFXXLNHSYCNGUKAKZBXYERFWZGVCNHNJTBPGHMKWANRUWUONAHSTIPUOZTRPYCGEKKHFLBVQCAKLBEDOJMZTMDGZDDOOTFZJHQJBLQABQJOCMKWPVBDVNQACUEUNPJQGHZWPTYILFWUPAGFTGISLBMOUUPSLXJRWVFFQPYVWNVTYQSIMYXBYKIMJXRRDHDCBFIIASMWWYLCRSUYKRQDZGAVXTARXSFMHEZNQJMPOEEICO");

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
    msg.setTimeStamp(0.25188716912146547);
    msg.setSource(12588U);
    msg.setSourceEntity(86U);
    msg.setDestination(53875U);
    msg.setDestinationEntity(199U);
    msg.seq = 36172U;
    msg.sys.assign("DLHIQOWEKDFAOCCOHIEVYWDYNGXSCHWPQNCPWZEDZMOMYAOGUKSTFXDUPDHTWTMKSMGSNSDEXPZEZIUKTQELUNPRBJNIXHIATXSBBMOGFJPUEHFCZRWCQHMALMGSFCNBXNGUWBZENMNR");
    msg.value = 0.0909792254130457;

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
    msg.setTimeStamp(0.8262851054985907);
    msg.setSource(20625U);
    msg.setSourceEntity(216U);
    msg.setDestination(40528U);
    msg.setDestinationEntity(176U);
    msg.seq = 16956U;
    msg.sys.assign("FUVTSCREEMVDFPOBAMUWMBAXAOUFJWLZIPOHCESUDQQRQVOYXIPMBNNDVQILQHNYKPTYWDQPAWNDBYSZCXVRGGZVNHYCHKQUUMHDZQICEBCXZWWRANUKALXHXTTCMSWGEJSAHCTVLLSKGNZAJF");
    msg.value = 0.7184968200264106;

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
    msg.setTimeStamp(0.4382752505122057);
    msg.setSource(1256U);
    msg.setSourceEntity(130U);
    msg.setDestination(50429U);
    msg.setDestinationEntity(196U);
    msg.seq = 64678U;
    msg.sys.assign("HARLXVGPTQSDYPGUDESSRKVKLSLMISEAVHDZKXOPKGLIJTYJDTNCWORADLGHGHVRUNENMHHRBAREBZEIYEKUOVDKZWADXFBIOLFINFBTIJMTVRZCGSACRKCFJW");
    msg.value = 0.6351082460116527;

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
    msg.setTimeStamp(0.34180365202372953);
    msg.setSource(63097U);
    msg.setSourceEntity(1U);
    msg.setDestination(62518U);
    msg.setDestinationEntity(245U);
    msg.seq = 11972U;
    msg.sys_dst.assign("BVZWZFRSYZQBNFAHOBAWQKDZJVGNUXHGOCMOVEDTBQAMMXQWSFOXKJMRCVZCFQLODFZVUFDJCGHJSEDUPUHHZMDHDPVXHPKVKABPWTLZITPIRFSSXHOYKAFJYDGYCNUYQILXPLNETJEZRJMXFUUNIOBOAUGIMNXLKWQEYXQLWILQIIST");
    msg.timeout = 0.6241571800424394;

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
    msg.setTimeStamp(0.8829525362236579);
    msg.setSource(48102U);
    msg.setSourceEntity(108U);
    msg.setDestination(2776U);
    msg.setDestinationEntity(138U);
    msg.seq = 55141U;
    msg.sys_dst.assign("QPYRHTVVICQYSTRWMATRKYHEYOLFIDSDCKDNHJVCOJZPFJALVFZFJQJWKABRDJTRZFSQIXMCJEUYEQSNXBUWPVXTOEHBGGXIKMANSBNVVHPGJLYNUEUKMSYBOSKTYLEGQBYCTNOWGBFHOOVXUGCJ");
    msg.timeout = 0.9126848231609569;

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
    msg.setTimeStamp(0.3017871358309553);
    msg.setSource(35188U);
    msg.setSourceEntity(41U);
    msg.setDestination(56585U);
    msg.setDestinationEntity(50U);
    msg.seq = 25351U;
    msg.sys_dst.assign("FSSHNYMYVNPMGEQWJJTJKCZUISOOIIOBIYKGVDKBLLCNOSVLKJKJFLRLWGWMRRCAXDUXATHCTGGFHCVJVEOMXHUJDMGDBGOKSFYLIEICBZBWHBTQNXHZXOBBCDZORUDRULFZTIEKDNHYXZQ");
    msg.timeout = 0.29621877397561636;

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
    msg.setTimeStamp(0.5714193541506163);
    msg.setSource(28379U);
    msg.setSourceEntity(225U);
    msg.setDestination(39476U);
    msg.setDestinationEntity(156U);
    msg.action = 188U;
    msg.longain = 0.1289962232650106;
    msg.latgain = 0.4393956911677761;
    msg.bondthick = 2184261136U;
    msg.leadgain = 0.47694281212624234;
    msg.deconflgain = 0.16601444204303284;

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
    msg.setTimeStamp(0.9268075851767148);
    msg.setSource(56159U);
    msg.setSourceEntity(8U);
    msg.setDestination(40940U);
    msg.setDestinationEntity(104U);
    msg.action = 90U;
    msg.longain = 0.028901931012664694;
    msg.latgain = 0.18793991930087395;
    msg.bondthick = 1464564959U;
    msg.leadgain = 0.47929214414166876;
    msg.deconflgain = 0.48878640137168095;

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
    msg.setTimeStamp(0.9041614049779427);
    msg.setSource(14067U);
    msg.setSourceEntity(197U);
    msg.setDestination(61349U);
    msg.setDestinationEntity(70U);
    msg.action = 42U;
    msg.longain = 0.8056762344126149;
    msg.latgain = 0.02789170439248867;
    msg.bondthick = 2941659365U;
    msg.leadgain = 0.7437828437255141;
    msg.deconflgain = 0.09572432013993692;

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
    msg.setTimeStamp(0.3016447660480671);
    msg.setSource(16482U);
    msg.setSourceEntity(136U);
    msg.setDestination(35847U);
    msg.setDestinationEntity(25U);
    msg.err_mean = 0.8943185561514992;
    msg.dist_min_abs = 0.7077240621660271;
    msg.dist_min_mean = 0.20248247465211477;

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
    msg.setTimeStamp(0.1347115634011039);
    msg.setSource(13555U);
    msg.setSourceEntity(150U);
    msg.setDestination(21140U);
    msg.setDestinationEntity(130U);
    msg.err_mean = 0.5338121759045801;
    msg.dist_min_abs = 0.6112550215411211;
    msg.dist_min_mean = 0.22384380194150322;

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
    msg.setTimeStamp(0.9141026690728659);
    msg.setSource(64163U);
    msg.setSourceEntity(32U);
    msg.setDestination(3943U);
    msg.setDestinationEntity(71U);
    msg.err_mean = 0.4787488440705293;
    msg.dist_min_abs = 0.38392651518730214;
    msg.dist_min_mean = 0.6059639303894244;

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
    msg.setTimeStamp(0.8458036943293099);
    msg.setSource(33402U);
    msg.setSourceEntity(213U);
    msg.setDestination(41716U);
    msg.setDestinationEntity(251U);
    msg.action = 8U;
    msg.lon_gain = 0.5844532200796277;
    msg.lat_gain = 0.08656512403464811;
    msg.bond_thick = 0.8881118998154355;
    msg.lead_gain = 0.34074874177631975;
    msg.deconfl_gain = 0.7533122275908165;
    msg.accel_switch_gain = 0.5394313326184756;
    msg.safe_dist = 0.300391370407316;
    msg.deconflict_offset = 0.7934538831137441;
    msg.accel_safe_margin = 0.46753299100572654;
    msg.accel_lim_x = 0.5585418577036653;

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
    msg.setTimeStamp(0.41566285694160343);
    msg.setSource(34742U);
    msg.setSourceEntity(119U);
    msg.setDestination(64870U);
    msg.setDestinationEntity(166U);
    msg.action = 42U;
    msg.lon_gain = 0.6757207448076978;
    msg.lat_gain = 0.6534243012534218;
    msg.bond_thick = 0.8300641381676295;
    msg.lead_gain = 0.8137024466851842;
    msg.deconfl_gain = 0.004564483804966324;
    msg.accel_switch_gain = 0.6609514581052803;
    msg.safe_dist = 0.8153765712514537;
    msg.deconflict_offset = 0.8606505920663909;
    msg.accel_safe_margin = 0.7535011098183504;
    msg.accel_lim_x = 0.007414804128739294;

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
    msg.setTimeStamp(0.967536434302225);
    msg.setSource(6448U);
    msg.setSourceEntity(185U);
    msg.setDestination(26743U);
    msg.setDestinationEntity(185U);
    msg.action = 213U;
    msg.lon_gain = 0.9159055351942677;
    msg.lat_gain = 0.5214732671105309;
    msg.bond_thick = 0.44850892540464915;
    msg.lead_gain = 0.0006635724624098893;
    msg.deconfl_gain = 0.2960198549572315;
    msg.accel_switch_gain = 0.31051046479077926;
    msg.safe_dist = 0.031863446040755306;
    msg.deconflict_offset = 0.36616861997708805;
    msg.accel_safe_margin = 0.005102675295417414;
    msg.accel_lim_x = 0.7461438684729393;

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
    msg.setTimeStamp(0.16886315088931136);
    msg.setSource(39186U);
    msg.setSourceEntity(166U);
    msg.setDestination(49188U);
    msg.setDestinationEntity(3U);
    msg.type = 88U;
    msg.op = 114U;
    msg.err_mean = 0.9915410563607241;
    msg.dist_min_abs = 0.40157394472179553;
    msg.dist_min_mean = 0.7346244921277989;
    msg.roll_rate_mean = 0.1415312017128626;
    msg.time = 0.37518557581868783;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 92U;
    tmp_msg_0.lon_gain = 0.9637194183747988;
    tmp_msg_0.lat_gain = 0.29211797515306237;
    tmp_msg_0.bond_thick = 0.5375864260024704;
    tmp_msg_0.lead_gain = 0.5534917111363633;
    tmp_msg_0.deconfl_gain = 0.9697018318999672;
    tmp_msg_0.accel_switch_gain = 0.4149452771602615;
    tmp_msg_0.safe_dist = 0.16000689265335877;
    tmp_msg_0.deconflict_offset = 0.870068050764253;
    tmp_msg_0.accel_safe_margin = 0.6177406620736788;
    tmp_msg_0.accel_lim_x = 0.38584864059879553;
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
    msg.setTimeStamp(0.8070266456537967);
    msg.setSource(24689U);
    msg.setSourceEntity(185U);
    msg.setDestination(10654U);
    msg.setDestinationEntity(46U);
    msg.type = 167U;
    msg.op = 146U;
    msg.err_mean = 0.06288936391173583;
    msg.dist_min_abs = 0.49314466647826183;
    msg.dist_min_mean = 0.45820503467638873;
    msg.roll_rate_mean = 0.49163503581610424;
    msg.time = 0.30445554268263597;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 3U;
    tmp_msg_0.lon_gain = 0.6344804250039071;
    tmp_msg_0.lat_gain = 0.7264268090213869;
    tmp_msg_0.bond_thick = 0.5904704113587287;
    tmp_msg_0.lead_gain = 0.40492296616773094;
    tmp_msg_0.deconfl_gain = 0.7301357981538374;
    tmp_msg_0.accel_switch_gain = 0.14053700672105218;
    tmp_msg_0.safe_dist = 0.861143118390423;
    tmp_msg_0.deconflict_offset = 0.6280595347052811;
    tmp_msg_0.accel_safe_margin = 0.8134374374166339;
    tmp_msg_0.accel_lim_x = 0.32870142302360894;
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
    msg.setTimeStamp(0.7285502363533506);
    msg.setSource(41701U);
    msg.setSourceEntity(24U);
    msg.setDestination(9109U);
    msg.setDestinationEntity(151U);
    msg.type = 3U;
    msg.op = 163U;
    msg.err_mean = 0.7423377633354991;
    msg.dist_min_abs = 0.0749571349341801;
    msg.dist_min_mean = 0.30987661975230696;
    msg.roll_rate_mean = 0.839376829979305;
    msg.time = 0.9758481885732986;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 52U;
    tmp_msg_0.lon_gain = 0.3846550745715186;
    tmp_msg_0.lat_gain = 0.30189062664163135;
    tmp_msg_0.bond_thick = 0.5943029790810325;
    tmp_msg_0.lead_gain = 0.7428674540941854;
    tmp_msg_0.deconfl_gain = 0.5637202124928025;
    tmp_msg_0.accel_switch_gain = 0.8111042687186488;
    tmp_msg_0.safe_dist = 0.9638576597747543;
    tmp_msg_0.deconflict_offset = 0.5397606909729229;
    tmp_msg_0.accel_safe_margin = 0.5021333895204727;
    tmp_msg_0.accel_lim_x = 0.65058754608711;
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
    msg.setTimeStamp(0.3270382745784718);
    msg.setSource(22288U);
    msg.setSourceEntity(90U);
    msg.setDestination(16726U);
    msg.setDestinationEntity(197U);
    msg.lat = 0.1370162904793395;
    msg.lon = 0.9702742848119653;
    msg.eta = 2783771587U;
    msg.duration = 34131U;

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
    msg.setTimeStamp(0.25555130405997484);
    msg.setSource(60026U);
    msg.setSourceEntity(133U);
    msg.setDestination(31457U);
    msg.setDestinationEntity(1U);
    msg.lat = 0.8109841618542915;
    msg.lon = 0.6896222928287916;
    msg.eta = 734487439U;
    msg.duration = 49652U;

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
    msg.setTimeStamp(0.9668563527268593);
    msg.setSource(1665U);
    msg.setSourceEntity(78U);
    msg.setDestination(46694U);
    msg.setDestinationEntity(116U);
    msg.lat = 0.7416074597842268;
    msg.lon = 0.3998182572482647;
    msg.eta = 159517328U;
    msg.duration = 43802U;

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
    msg.setTimeStamp(0.3024910179211011);
    msg.setSource(2393U);
    msg.setSourceEntity(85U);
    msg.setDestination(7538U);
    msg.setDestinationEntity(5U);
    msg.plan_id = 12949U;

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
    msg.setTimeStamp(0.060949421543909255);
    msg.setSource(53109U);
    msg.setSourceEntity(168U);
    msg.setDestination(3978U);
    msg.setDestinationEntity(104U);
    msg.plan_id = 38255U;

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
    msg.setTimeStamp(0.9104157863011622);
    msg.setSource(58402U);
    msg.setSourceEntity(24U);
    msg.setDestination(41597U);
    msg.setDestinationEntity(187U);
    msg.plan_id = 11496U;

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
    msg.setTimeStamp(0.9554629637095525);
    msg.setSource(46621U);
    msg.setSourceEntity(122U);
    msg.setDestination(14484U);
    msg.setDestinationEntity(106U);
    msg.type = 226U;
    msg.command = 143U;
    msg.settings.assign("IQCGUWQVSZNANVXMBKYMNYRIOWDXKZFZGNROLZEGXRLMAKQXUAFURRYCINJTSOQOXMGGVBPLDGJPCIILSFWFFDKCCUUGVBBTSJPCJZDWTRPHKXDRIPX");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 20829U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("PINSZPRVOJSHDMBGXSKTMVTZOVPJVESZFUUIUZSSMRUWECKOXWKHDBJTKVFJGRSBTYUWARBWECZYQMECKXKOWDSJIQLUH");

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
    msg.setTimeStamp(0.3249021766374759);
    msg.setSource(8823U);
    msg.setSourceEntity(12U);
    msg.setDestination(13270U);
    msg.setDestinationEntity(60U);
    msg.type = 127U;
    msg.command = 225U;
    msg.settings.assign("JMMDVUFJWIUFXOFOHERIUEURHBDRRRKHZIVWONMPYYGNLSZHPXKAEIRBZDXEPNDGSPSINRMCBWXNXNPCDOULHLARTQAJGZEBTWCV");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 19760U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("FHCUXMWXGRVYKANMSQVYNRCGRKQCJBRCIWNICEQCUWBEHATKMEGTOWYXDAJFHDEDLJESOBUPUOFDKRMOSPQXZIFFXVUHCLZNJTXQAJOZZTIVSYEAOMNPUJWQKZJJMRDNCYNTPGDDYMGLUXBDBSUKTIMSERNXVVDMZAGYPHWULBBNHQDTXEOYIOFZGSHVPLRISJTATKTGLXPGLPQYUMZOFVFIBGBLPHAWZQYVKV");

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
    msg.setTimeStamp(0.6909101534030462);
    msg.setSource(6281U);
    msg.setSourceEntity(116U);
    msg.setDestination(17459U);
    msg.setDestinationEntity(153U);
    msg.type = 200U;
    msg.command = 65U;
    msg.settings.assign("TVKDTGJVWCQWQKJRIFJDSBYRTCKKIJWUXUUP");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 37619U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("SZRIYXFSGFSWUDQUQKEEXVNUHBVGKDAIMMAINGANILJTPCVEOZJASHOJEXZJNQIRMNYHTOQKCCMODQWPIVDBKFHYBLJYSXZOCQVTIAUUOQHPLBJWWFXRRJRVYCLSULBLJHZDKPRVBYADRYQTTGITTVXXNDYHBNGXXEROZBJMFOWNKW");

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
    msg.setTimeStamp(0.9748534155494745);
    msg.setSource(53531U);
    msg.setSourceEntity(203U);
    msg.setDestination(31906U);
    msg.setDestinationEntity(225U);
    msg.state = 160U;
    msg.plan_id = 22586U;
    msg.wpt_id = 19U;
    msg.settings_chk = 63115U;

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
    msg.setTimeStamp(0.6904928831430871);
    msg.setSource(20704U);
    msg.setSourceEntity(32U);
    msg.setDestination(11596U);
    msg.setDestinationEntity(68U);
    msg.state = 48U;
    msg.plan_id = 56166U;
    msg.wpt_id = 131U;
    msg.settings_chk = 50278U;

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
    msg.setTimeStamp(0.9676207110435878);
    msg.setSource(15058U);
    msg.setSourceEntity(10U);
    msg.setDestination(14574U);
    msg.setDestinationEntity(225U);
    msg.state = 48U;
    msg.plan_id = 30061U;
    msg.wpt_id = 225U;
    msg.settings_chk = 57890U;

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
    msg.setTimeStamp(0.19833495763585907);
    msg.setSource(1580U);
    msg.setSourceEntity(127U);
    msg.setDestination(9501U);
    msg.setDestinationEntity(25U);
    msg.uid = 95U;
    msg.frag_number = 174U;
    msg.num_frags = 13U;
    const signed char tmp_msg_0[] = {119, -40, -125, -92, -36, 12, 16, -10, -42, 72, -51, 15, 79, -95, 97, -26, 84, -100, -56, -89, -50, 84, 20, 52, 70, 7, -51, 103, -53, -98, 78, -55, 36, 41, -5, -115, 21, 39, -111, 60, 63, 16, 108, 4, 94, -73, 65, 13, 37, 95, 9, 5, -39, 66, -69, 113, 67, -47, -102, 90, -101, -88, 40, 6, -87, 22, 63, -7, 5, 27, 69, -19, 18, 59, 69, 26, 16, -94, -8, -111, 15, -87, 91, 24};
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
    msg.setTimeStamp(0.32559684539768574);
    msg.setSource(33841U);
    msg.setSourceEntity(159U);
    msg.setDestination(37977U);
    msg.setDestinationEntity(82U);
    msg.uid = 43U;
    msg.frag_number = 160U;
    msg.num_frags = 121U;
    const signed char tmp_msg_0[] = {-81, 110, 27, -46, -39, -48, 74, 113, -74, 7, -22, -32, -89, 47, 28, -111, -108, 20, 39, 1, -102, 70, 12, 84, -62, -10, 94, -118, 65, 46, -72, -27, -3, -34, -58, 55, -6, 16, -42, -47, 2, 42, -67, -24, -86, 27, 98, 126, 121, -90, -24, -127, -113, -36, -86, 69, -32, -47, -3, 90, 59, -86, 102, -25, -69, -72, -71, -106, -71, -102, 64, -103, 88, -77, -127, -77, 85, 3, -70, -60, 103, -91, -79, 51, -19, 67, -48, -121, 116, 18, 74, 102, 9, 59, -64, 92, 27, -93, -118, -104, 25, 41, -77, -58, -99, 126, 46, -26, 106, -97, -65, -16, 110, 15, -89, -48, -89, -3, 32, 87, -58, 69, 118, 124, 63, -65, -64, -23, -88, 58, 82, -41, 97, -60, 70, -13, -78, -124, 6, 68, 5, 120, -68, -65, 52, 111, 71, 112, 79, 3, 2, 94, -67, -82, -45, 71, -48, 90, -123, -79, 76, 24, 99, 92, -81, 33, 0, 81, -120, -55, 29, -17, -111, 18, 13, 54, -56, 82, -114, -50, 93, 105, -52, 26, -124, -39, -81, -53, 49, 87, 0, -6, 26, 74, -110, 2, -88, 94, 84};
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
    msg.setTimeStamp(0.14264753009305398);
    msg.setSource(7873U);
    msg.setSourceEntity(28U);
    msg.setDestination(18334U);
    msg.setDestinationEntity(32U);
    msg.uid = 14U;
    msg.frag_number = 245U;
    msg.num_frags = 154U;
    const signed char tmp_msg_0[] = {-53, 33, -24, 81, 75, -19, -124, -17, 46, 9, 69, -10, -73, -85, -102, 11, 33, 82, -41, 69, -31, 38, -121, -87, -10, 121, 120, 75, -85, 66, 49, -34, -76, 22, -97, 31, 20, 117, -69, 117, 100, -110, -5, 74, -26, -113, -68, -125, 85, -126, 19, -92, 55, 37, -84, 69, -86, -53, 26, 57, -75, -126, 37, 24, -73, 40, 40, 83, -41, 89, -111, 70, -113, -105, 13, 33, -3, -57, 7, 114, -76, 88, -83, -44, 84, -101, 78, -89, 89, 111, -35, -54, 104, 29, 120, -58, -22, 14, -76, -128, -71, -56, -37, 15, -11, 77, 95, -82, 102, 84, 13, -103, -99, 101, 116, 78, -116, 17, 15, 33, 68, 41, -42, 17, 112, -2, 96, 23, 4, -103, 124, 53, -65, 55, -48, -126, -119, -49, -87, -35, -83, 21, -65, -70, -16, 70};
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
    msg.setTimeStamp(0.8681241637524154);
    msg.setSource(27991U);
    msg.setSourceEntity(134U);
    msg.setDestination(64213U);
    msg.setDestinationEntity(224U);
    msg.uid = 184U;
    msg.op = 186U;
    msg.frag_ids.assign("CQPSWQPHLKAMSSRVVYMOSOJAZQEMOMQKFDMKOAODUDNEHGCQLNXIGYGCKMFHWLHFRIFEXRGITPPRQGAEWVXARXKBUASVJFKCFLLULNIQDIBYQTXESKCZDHWO");

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
    msg.setTimeStamp(0.9340108352335833);
    msg.setSource(61306U);
    msg.setSourceEntity(101U);
    msg.setDestination(57451U);
    msg.setDestinationEntity(23U);
    msg.uid = 167U;
    msg.op = 232U;
    msg.frag_ids.assign("VBMFHBSAGPMTSOMTXRNNIQZVRQHOGAFRCKEXCHNKRKATCSOUHABQIWOLIZDWWDNWPONEMUGEAWXKLVYQPBCFUIDKWBPYMEPNATBYXFZLLECHZNTBPKHZBSPSNWMRJTJVYZFMGMOCJ");

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
    msg.setTimeStamp(0.6577534193501515);
    msg.setSource(14552U);
    msg.setSourceEntity(73U);
    msg.setDestination(58087U);
    msg.setDestinationEntity(67U);
    msg.uid = 95U;
    msg.op = 221U;
    msg.frag_ids.assign("IUFYYJGWQANUMTNYBBMGRZXCTHQZANWJLVDONRRUTEOVJRLDGCFSPMTRJTEPIZHFCDEYNCJYJLIIPFDMCQWGZWDNTHUXXXWEJMAGBJZUOMCYKVREXEKBFPIBECMBOEQTUDLRKNUXZWMQKVHSIEDOSQAFYGDXFA");

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
    msg.setTimeStamp(0.16975452737431695);
    msg.setSource(5304U);
    msg.setSourceEntity(236U);
    msg.setDestination(58238U);
    msg.setDestinationEntity(33U);
    msg.content_type.assign("VQFJDFJODGPWCHATSNYDNVPFKITAFMXMDEFFEWNGYYDDVLGLSRGTIRMQLKRSARTDMESKMZQEIHFFWHXIAKJUHUYYRDXPFIPUBTGJLFCLSQKLWGBJPBVKC");
    const signed char tmp_msg_0[] = {83, 63, -13, -42, -49, 86, -106, 67, -46, -83, 7, 23, 71, -92, -100, -13, -12, -5, -2, -87, 126, 85, -75, -128, 18, -109, 78, -113, -111, -73, 1, 61, -18, 50, 16, 30, -34, 119, -65, -23, 19, 54, -40, -42, 116, 30, -55, 29, -125, -50, -29, -88, -91, 21, -69, -24, -23, -54, -2, 81, 86, 2, -85, -93, 15, -84, -22, 40, -17, 109, 58, -58};
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
    msg.setTimeStamp(0.1458754804913579);
    msg.setSource(6564U);
    msg.setSourceEntity(28U);
    msg.setDestination(57279U);
    msg.setDestinationEntity(128U);
    msg.content_type.assign("HWHAZCXPKAVIUJYNIXPGBVZHCEMWBQFYGPKUSUVV");
    const signed char tmp_msg_0[] = {-30, 81, -2, 124, -57, -35, 45, -21, -77, -6, -44, 58, -34, 88, -65, 64, -93, 105, 102, -20, -111, 90, 88, 4, -19, -40, -122, -124, 109, -52, 122, -100, 16, -14, 109, 6, 49, -111, 18, -60, -30, 53, -57, -122, -29, 112, -67, -104, 5, -26, 62, 50, 75, -30, 124, 46, -36, -10, -88, 1, 20, -68, 9, 2, 67, -127, -33, 96, -96, 58, 73, -8, -95, 77, -110, -68, -22, 41, 125, -106, 21, -61, 28, 96, -103, -65, 120, -79, -18, 122, -54, 15, -112, -73, -23, 48, -40, 85, 114, -3, 29, -61, 50, -68, -95, -17, 20, -87, -118, 117, -62, -86, 94, -21, -111, -61, 19, 41, -46};
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
    msg.setTimeStamp(0.8625897016209715);
    msg.setSource(16894U);
    msg.setSourceEntity(193U);
    msg.setDestination(19790U);
    msg.setDestinationEntity(142U);
    msg.content_type.assign("PRCGURFONKOVVYWKHINHBTQLJQQOILGESVDDVBXEZAIKTPLMTVKJQFSIKKCSMXQTOGHWDNLEZMVAEPNRDUPOOVYHPUSKVLITHNOWGBAYBOZEXQPJCRMIAEEAXNXXGMYFJGUJUDATVUAZLFDJCYNQMFYCURBQWURYTMGOPHHDZWYKZZJLBNBJQTPMKTPWGSANSRCEZRXDGOVHCYSDBZJAIBTEDSPAISGXLFWWWIXQBFHCSFLIMREL");
    const signed char tmp_msg_0[] = {-84, -103, 50, 93, -45, -92, -1, -117, -30, -50, -45, 6, 43, -78, -9, 52, 37, 85, -112, -97, -102, -7, -45, 54, -85, -108, 9, -15, 99, 90, -9, -37, 16, 21, 5, 81, 41, 42, 104, 42, 71, 34, -44, 31, -103, 95, 7, 46, -78, 72, 29, 111, -7, -97, 31, 24, 51, 114, 35, 29, 11, -26, -39, -88, -50, -49, -97, 116, -116, 5, -122, -88, -30, 18, -26, 62, -60, 112, -77, 39, 63, -81, 85, -91, 65, -20, -19, 52, -13, -15, 40, 47, -25, -85, -105, 87, 22, 6, 87, -51, -106, -37, 18, 11, 16, -14, -7, 17, 110, 40, -8, 21, 54, -120, 52, 51, 2, -126, -73, -69, -115, -67, -48, 89, -40, 2, -86, 122, -45, 80, 70, 48, -64, -62, -34, 39, 25, -112, -48, -123, 93, 123, -57, -107, 107, -43, 2, -82, -69, -99, -14, 80, -82, -103, -46, 114, -90, 30, -39, 91, 114, 85, 81, 1, 102, 115, -40, 109, -34, 82, 5, -98, 83, 92, -89, -23, -98, -46, -120, -44, 77, 104, -3, -37, 116, 10, 120, -123, -46, 114, 62, 58, -1, -106, 18, -81, 124, -112, -22, 96, -75, -9, -30, 27, -54, 119};
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
    msg.setTimeStamp(0.31295261257857754);
    msg.setSource(6226U);
    msg.setSourceEntity(231U);
    msg.setDestination(29543U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.1807155728066866);
    msg.setSource(51970U);
    msg.setSourceEntity(29U);
    msg.setDestination(10561U);
    msg.setDestinationEntity(196U);

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
    msg.setTimeStamp(0.005840699077589995);
    msg.setSource(53251U);
    msg.setSourceEntity(241U);
    msg.setDestination(61219U);
    msg.setDestinationEntity(197U);

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
    msg.setTimeStamp(0.7604557058978391);
    msg.setSource(21705U);
    msg.setSourceEntity(168U);
    msg.setDestination(48094U);
    msg.setDestinationEntity(123U);
    msg.target = 55779U;
    msg.bearing = 0.033993156529630975;
    msg.elevation = 0.8204099993438853;

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
    msg.setTimeStamp(0.741829435821218);
    msg.setSource(20326U);
    msg.setSourceEntity(10U);
    msg.setDestination(32811U);
    msg.setDestinationEntity(212U);
    msg.target = 10498U;
    msg.bearing = 0.9594609225820888;
    msg.elevation = 0.27600880101347613;

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
    msg.setTimeStamp(0.033858492046218935);
    msg.setSource(50211U);
    msg.setSourceEntity(25U);
    msg.setDestination(45904U);
    msg.setDestinationEntity(6U);
    msg.target = 53153U;
    msg.bearing = 0.4818888188034076;
    msg.elevation = 0.13310938342459155;

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
    msg.setTimeStamp(0.7215177906396089);
    msg.setSource(48329U);
    msg.setSourceEntity(216U);
    msg.setDestination(19177U);
    msg.setDestinationEntity(238U);
    msg.target = 15714U;
    msg.x = 0.10557311765184241;
    msg.y = 0.342315713746452;
    msg.z = 0.5376027957194399;

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
    msg.setTimeStamp(0.33661019365483746);
    msg.setSource(24922U);
    msg.setSourceEntity(4U);
    msg.setDestination(9722U);
    msg.setDestinationEntity(61U);
    msg.target = 21061U;
    msg.x = 0.3751988247461797;
    msg.y = 0.7541636277885625;
    msg.z = 0.3798164468631908;

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
    msg.setTimeStamp(0.9704480330214729);
    msg.setSource(46148U);
    msg.setSourceEntity(76U);
    msg.setDestination(62722U);
    msg.setDestinationEntity(173U);
    msg.target = 30643U;
    msg.x = 0.9391638437438514;
    msg.y = 0.4357849849660116;
    msg.z = 0.06260686995117393;

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
    msg.setTimeStamp(0.4817101921356488);
    msg.setSource(2234U);
    msg.setSourceEntity(200U);
    msg.setDestination(54769U);
    msg.setDestinationEntity(177U);
    msg.target = 57206U;
    msg.lat = 0.0934789791520867;
    msg.lon = 0.27417115390212354;
    msg.z_units = 87U;
    msg.z = 0.2759338456149466;

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
    msg.setTimeStamp(0.5129952775160189);
    msg.setSource(37700U);
    msg.setSourceEntity(7U);
    msg.setDestination(59868U);
    msg.setDestinationEntity(101U);
    msg.target = 34307U;
    msg.lat = 0.4065466861640168;
    msg.lon = 0.7200018260081886;
    msg.z_units = 116U;
    msg.z = 0.4054133274241958;

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
    msg.setTimeStamp(0.8314494125712382);
    msg.setSource(62153U);
    msg.setSourceEntity(148U);
    msg.setDestination(30870U);
    msg.setDestinationEntity(220U);
    msg.target = 11987U;
    msg.lat = 0.7885798292681687;
    msg.lon = 0.8658535165957552;
    msg.z_units = 203U;
    msg.z = 0.5333289424766241;

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
    msg.setTimeStamp(0.617095053654966);
    msg.setSource(43286U);
    msg.setSourceEntity(224U);
    msg.setDestination(34650U);
    msg.setDestinationEntity(231U);
    msg.locale.assign("VVKZJHXCZZZTYHTXBKLBZFYTYNHRJEPXJZNFEDKATLTOWWLBGZAJAIFUCCWXMIJJGOLBBMHMIABCQXMNYUVNHQRDGRTNFPQVKGZLYORSTEWPRFMAPGDCCPFW");
    const signed char tmp_msg_0[] = {36, -2, 51, 6, -52, 34, 28, 55, 117, 90};
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
    msg.setTimeStamp(0.9034277156721221);
    msg.setSource(54786U);
    msg.setSourceEntity(105U);
    msg.setDestination(11507U);
    msg.setDestinationEntity(242U);
    msg.locale.assign("HMIICRROGFSDCWYFDKFZXPUEGOJSIKXJCUBSRZCPBMDYUOQUWHJVUZBJEDISQZWBYYNTQXOSDGRPMOEBDHWSTHTTREGUOZJNNLCHIWBOJWIQQWEJQXHYFPMJIQOTTYIZVAAHDAEXFN");
    const signed char tmp_msg_0[] = {-99, -99, 74, -120, 69, -50, -81, 114, -19, 57, -126, -105, 67, -60, 52, -27, -88, -73, -128, 53, 88, 12, 99, 90, 47, 104, 107, 116, -49, -66, -64, -126, -125, -56, 87, -81, 106, 107, -52, 21, -58, 16, -3, -22, 53, -86, -57, 15, -21, -125, -114, 21, 49, -70, -95, 67, 20};
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
    msg.setTimeStamp(0.26656968087941346);
    msg.setSource(12686U);
    msg.setSourceEntity(47U);
    msg.setDestination(18193U);
    msg.setDestinationEntity(108U);
    msg.locale.assign("JCCVMOMLLPQHPBASUKYERJGNTZWZKWQOAYMJMCEGEEFAZVUXNIORSYUCJPVWDTGVQXNL");
    const signed char tmp_msg_0[] = {38, 91, 112, -35, 59, -100, 35, 43, -39, -21, -107, 49, -35, 112, -127, 72, 83, 81, 60, -116, 90, -32, -109, 106, -76, -44, 99, 77, 95, -39, 59, 123, -44, 32, -125, 41, -17, -93, 101, -5, -32, -79, -17, -78, -104, -64, -57, 116, -50, -103, 42, -33, 46, -56, -68, -111, -102, 81, -63, -81, 91, -119, -27, -114, 113, -95, -69, -6, 32, 81, 0, -62, -74, -84, 79, 46, 120, 103, -116, 31, -32, 28, 101, -116, -16, -120, 7, 93, 101, 123, -56, -19, -126, 9, -75, -3, 64, -118, -77, 16, -36, -10, 59, 122, 89, -96, -102, -62, 111, 53, -5, 90, 82, -128, -45, 9, -115, 100, -90, 62, -112, -116, -13, 23, 76, 51, -49, 84, -45, 73, 9, 119, -75, 5, -74, 49, -52, -19, -126, 31, 109, -124, -75, -123, 13, 33, 59, -68, 80, 46, 13, -73, 118, -115, 19, -100, -15, -91, 76, -94, 96, -63, -60, -88, 93, 29, -31, 45, -117, -72, -111, -78, 80, -47, 60, -13, -3, -99, -120, 68};
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
    msg.setTimeStamp(0.30122511133396335);
    msg.setSource(16419U);
    msg.setSourceEntity(197U);
    msg.setDestination(52868U);
    msg.setDestinationEntity(120U);

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
    msg.setTimeStamp(0.9296086963853561);
    msg.setSource(54060U);
    msg.setSourceEntity(233U);
    msg.setDestination(16795U);
    msg.setDestinationEntity(33U);

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
    msg.setTimeStamp(0.13157140963001812);
    msg.setSource(55332U);
    msg.setSourceEntity(251U);
    msg.setDestination(35369U);
    msg.setDestinationEntity(126U);

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
    msg.setTimeStamp(0.6026953011883527);
    msg.setSource(47891U);
    msg.setSourceEntity(75U);
    msg.setDestination(5241U);
    msg.setDestinationEntity(33U);
    msg.camid = 196U;
    msg.x = 13143U;
    msg.y = 55214U;

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
    msg.setTimeStamp(0.23515655446780992);
    msg.setSource(330U);
    msg.setSourceEntity(117U);
    msg.setDestination(31440U);
    msg.setDestinationEntity(57U);
    msg.camid = 37U;
    msg.x = 37711U;
    msg.y = 15436U;

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
    msg.setTimeStamp(0.010128910977126648);
    msg.setSource(61109U);
    msg.setSourceEntity(196U);
    msg.setDestination(16818U);
    msg.setDestinationEntity(115U);
    msg.camid = 88U;
    msg.x = 56497U;
    msg.y = 52967U;

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
    msg.setTimeStamp(0.7852617239610833);
    msg.setSource(43859U);
    msg.setSourceEntity(186U);
    msg.setDestination(43031U);
    msg.setDestinationEntity(87U);
    msg.camid = 139U;
    msg.x = 53910U;
    msg.y = 50775U;

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
    msg.setTimeStamp(0.09616859490121121);
    msg.setSource(5142U);
    msg.setSourceEntity(89U);
    msg.setDestination(27816U);
    msg.setDestinationEntity(48U);
    msg.camid = 12U;
    msg.x = 8843U;
    msg.y = 6901U;

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
    msg.setTimeStamp(0.9728846938228838);
    msg.setSource(43390U);
    msg.setSourceEntity(101U);
    msg.setDestination(52459U);
    msg.setDestinationEntity(135U);
    msg.camid = 37U;
    msg.x = 9319U;
    msg.y = 2175U;

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
    msg.setTimeStamp(0.023202366386902873);
    msg.setSource(28621U);
    msg.setSourceEntity(170U);
    msg.setDestination(11049U);
    msg.setDestinationEntity(64U);
    msg.tracking = 113U;
    msg.lat = 0.8320018691426136;
    msg.lon = 0.024729805795148718;
    msg.x = 0.657240324849279;
    msg.y = 0.7835772660380224;
    msg.z = 0.8791950203286724;

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
    msg.setTimeStamp(0.0613916409600862);
    msg.setSource(4282U);
    msg.setSourceEntity(153U);
    msg.setDestination(21677U);
    msg.setDestinationEntity(208U);
    msg.tracking = 54U;
    msg.lat = 0.7629604631655276;
    msg.lon = 0.9062911600744948;
    msg.x = 0.5399109886113168;
    msg.y = 0.08081000484571133;
    msg.z = 0.386136396468476;

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
    msg.setTimeStamp(0.9250510369266787);
    msg.setSource(49274U);
    msg.setSourceEntity(174U);
    msg.setDestination(50898U);
    msg.setDestinationEntity(33U);
    msg.tracking = 168U;
    msg.lat = 0.23175966271823234;
    msg.lon = 0.6215166239032711;
    msg.x = 0.0870563001785648;
    msg.y = 0.4429194402495188;
    msg.z = 0.14818247685920216;

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
    msg.setTimeStamp(0.9567060709299927);
    msg.setSource(12744U);
    msg.setSourceEntity(160U);
    msg.setDestination(32294U);
    msg.setDestinationEntity(110U);
    msg.target.assign("EXVOGVPCSKYRLAETUFMNNFCEJPJHHXENGGOMBYAABDBIQWYNSAWISDEUUBVPWFPKCIJBSGCLBNUEQJJRYBHFIAVJUOLAHQUFEVDNGNRZZXANKTMLOKKCRDDYQZZBRVZCHQDDEDLHLEKWKTKVOTIUOBJMIULGIMMMSVYQGVPWIX");
    msg.lbearing = 0.560994752479304;
    msg.lelevation = 0.7350460350991522;
    msg.bearing = 0.9810112016413497;
    msg.elevation = 0.7776307989303868;
    msg.phi = 0.4459874791104361;
    msg.theta = 0.13070008141966483;
    msg.psi = 0.043110282948793266;
    msg.accuracy = 0.7341112733968975;

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
    msg.setTimeStamp(0.6048075953641682);
    msg.setSource(40789U);
    msg.setSourceEntity(82U);
    msg.setDestination(17507U);
    msg.setDestinationEntity(132U);
    msg.target.assign("WUNGETDWLWCMFMKARGYPUTOEVCYXGLNJVXTYJQCSFKUMGKGNDDPVWOIEGTFPSRKRCOCGVAXSHSJIHULKCCRASVZXZOMHWLNQMPZOREEJQBWPXHFURJTBXZJSDEFQMYQVVUDTKIKBJTBSZIIKPWDPYHXYCGONIBQLUYWDQLAJIQBKEDICDHFTFCXTOERIAHM");
    msg.lbearing = 0.694192630369955;
    msg.lelevation = 0.009966773320655986;
    msg.bearing = 0.645673963028141;
    msg.elevation = 0.7073803780705402;
    msg.phi = 0.13763658189205252;
    msg.theta = 0.7598533509389572;
    msg.psi = 0.6103290804346898;
    msg.accuracy = 0.6530088350626632;

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
    msg.setTimeStamp(0.7258106052132496);
    msg.setSource(43308U);
    msg.setSourceEntity(11U);
    msg.setDestination(10231U);
    msg.setDestinationEntity(99U);
    msg.target.assign("MBRZVZIBNZHW");
    msg.lbearing = 0.5640181348910319;
    msg.lelevation = 0.4731462630486759;
    msg.bearing = 0.5077159147086069;
    msg.elevation = 0.5944215553433561;
    msg.phi = 0.5261354347679806;
    msg.theta = 0.5096877784977693;
    msg.psi = 0.08012409167755863;
    msg.accuracy = 0.4539075445896241;

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
    msg.setTimeStamp(0.1946571552485895);
    msg.setSource(21603U);
    msg.setSourceEntity(12U);
    msg.setDestination(11743U);
    msg.setDestinationEntity(38U);
    msg.target.assign("UTLKODMIQJJOFIALMVOEDPMWQXSLAUVAFITKRWSZHXUGUZNGWBAWVFHWUCJSYREDVUMDVARRHLHBDPLGWXFONKKPSIQTSFFIUZALFJELPHYTLCYVWCZLRVXGPDSVUPBYKXHNHMDGAQQKPMFXSOEJAYRIONAPBJWRKSQTCNXCYREDZIYZEVSOZGYCIZJNHJMGSCDYQJPCIPBQF");
    msg.x = 0.048114325545539516;
    msg.y = 0.4718711930894638;
    msg.z = 0.6637034431555876;
    msg.n = 0.5034123260177709;
    msg.e = 0.9922173357588341;
    msg.d = 0.8019066741585748;
    msg.phi = 0.028718975547997405;
    msg.theta = 0.6886256094975279;
    msg.psi = 0.8912571044633606;
    msg.accuracy = 0.8538144821781172;

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
    msg.setTimeStamp(0.4016467900212941);
    msg.setSource(47658U);
    msg.setSourceEntity(209U);
    msg.setDestination(30383U);
    msg.setDestinationEntity(79U);
    msg.target.assign("XHXRHOXYERZRBWCYJLMNIKJJYDYIEZUGOSTPPSWDJQTTLREAZCZXQNWAELSVYYOWCGUJMUNWEXSZCQLUZBFFTHLQLKDCENGFOHOKPQXNWOVTZAKUDVSCCOMPVAEXIAIJFKGADBMTNBMGQIHEAFWBTYLWGFLKPJGVDPMPGZXNMHWTXUFRBQFAYHSQWCMIBQSEPDSKDENJOSSVYRGJZFUVUNVPURKYHOMKXPMODRAALIIJVKRFUT");
    msg.x = 0.1717655950699989;
    msg.y = 0.9911535289373355;
    msg.z = 0.3969758575755793;
    msg.n = 0.41614600675568836;
    msg.e = 0.3726084446994451;
    msg.d = 0.7032963897404768;
    msg.phi = 0.5874660962684518;
    msg.theta = 0.8924578417103743;
    msg.psi = 0.36917900361802536;
    msg.accuracy = 0.6460113663744064;

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
    msg.setTimeStamp(0.3011567148888429);
    msg.setSource(41974U);
    msg.setSourceEntity(50U);
    msg.setDestination(35577U);
    msg.setDestinationEntity(64U);
    msg.target.assign("QFOFLHOKPUKPKTMDFWEWFTMULVEPHGZTLBKMBSJLYEUSYYUIJZSDZXYGZGOICCFVJAGFPEGWBKRHXULGAQBNOIPGEZJXWABPBYROYWZWDVVHOIHIRGNNXRHKDSNOWLRQTIJTHXRHANPMRCHNVTZIQCPWBIQOQHFEKZUA");
    msg.x = 0.2903947616412361;
    msg.y = 0.5595630923717255;
    msg.z = 0.09596720359279387;
    msg.n = 0.1749064321797258;
    msg.e = 0.8678784784994934;
    msg.d = 0.53414461574394;
    msg.phi = 0.05603885984915591;
    msg.theta = 0.38060340608428456;
    msg.psi = 0.8962608322613625;
    msg.accuracy = 0.7673593330569447;

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
    msg.setTimeStamp(0.22922296367696482);
    msg.setSource(3099U);
    msg.setSourceEntity(151U);
    msg.setDestination(50957U);
    msg.setDestinationEntity(237U);
    msg.target.assign("YWZSKEGNBXIQEKNUTDDTKNVJZSRRJOKOEQFBFQMGVPSNGLAOCWVGZVSPIXEVVDHAURWOFLEJBKLNTSNPPCYVUDWABAAWWQCFRBZOXPZRCMTLYISVVJBYTUQWFBDQKMQECTSMXHOJYRNMEFZMG");
    msg.lat = 0.1801609396933217;
    msg.lon = 0.7084119977432566;
    msg.z_units = 107U;
    msg.z = 0.7841689683525735;
    msg.accuracy = 0.9437101779931122;

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
    msg.setTimeStamp(0.06226925975296349);
    msg.setSource(23096U);
    msg.setSourceEntity(133U);
    msg.setDestination(44148U);
    msg.setDestinationEntity(12U);
    msg.target.assign("DSOPZWSKUAGUXDMHPROHCYJTTGLRVJXXPNVLAELUVQTPGEBELIPNDGNMQIQXJITAFYPYMMDAKZCZDTGAVWOGZFBKPXUHWARFKRBTCRMWERVXDQGJHDLXDRXGGFWOLQEIENVHOINSIWQXSTJJKHYHUBJJURUNRFMVKZBBVAFOWVKWGLSCNKIHHIFYUCZURZDHMSFMLKOBECSLYQ");
    msg.lat = 0.683636014841652;
    msg.lon = 0.07794365444649443;
    msg.z_units = 39U;
    msg.z = 0.42779182265851146;
    msg.accuracy = 0.43388737088568563;

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
    msg.setTimeStamp(0.23688084012170874);
    msg.setSource(60846U);
    msg.setSourceEntity(70U);
    msg.setDestination(11719U);
    msg.setDestinationEntity(217U);
    msg.target.assign("KSWCDXLZIEBBOSVKDOEPJBLRXXFVYAFWPTQOZJCXCNYSTDVMYTXOQABYHBCNMABHRTHJIDFVVCIFCKIVDFIITXOGZTKPUUXRDYWAFEMUQUIHBAJISNRGBNLYPSZJZEJYPGFRUEPLSLHKZDXSTSGRSPRODNKMNLEVTJWAWMBEGNALQCNYZQT");
    msg.lat = 0.9044464524824879;
    msg.lon = 0.09410855309652888;
    msg.z_units = 82U;
    msg.z = 0.7436317792016083;
    msg.accuracy = 0.8446696643770126;

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
    msg.setTimeStamp(0.9965648193965639);
    msg.setSource(17212U);
    msg.setSourceEntity(215U);
    msg.setDestination(32531U);
    msg.setDestinationEntity(82U);
    msg.name.assign("JKQXZJPJLGCMCIRNHUASGAPNZKOIHYTIODDSOSQDEQJTWXVUYNYLKCCKDFXBCFUKBLTIXVRVSRXPDQBOWDRJZLANBWRBXVLIYPORMIPKVW");
    msg.lat = 0.47813689317969776;
    msg.lon = 0.8281743038785626;
    msg.z = 0.28239562772143945;
    msg.z_units = 206U;

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
    msg.setTimeStamp(0.871619793898808);
    msg.setSource(37523U);
    msg.setSourceEntity(125U);
    msg.setDestination(39790U);
    msg.setDestinationEntity(108U);
    msg.name.assign("GLAMUMAZDQNRPPDLHNRAXERGRENUMWAABDFNYPDMEMYICDIEQZSIVWTXFLSKPVECNGLGGWAJRBPLTCBSMFGJJBJDHVTO");
    msg.lat = 0.49034633614921663;
    msg.lon = 0.05343036208355356;
    msg.z = 0.352636700027695;
    msg.z_units = 99U;

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
    msg.setTimeStamp(0.7260531934456318);
    msg.setSource(36197U);
    msg.setSourceEntity(254U);
    msg.setDestination(12757U);
    msg.setDestinationEntity(113U);
    msg.name.assign("GMXPEPJUCVXVLWTGDDKDOKUENOPHMBNXFBJCJFJANNRCKISQTMPWITQCEHSEHUWJUQDVSLQJYQTXDGLTYHCFUTSPLFAHWIALKCYPYVROCZLOYDMOWBURHZT");
    msg.lat = 0.8536115281507574;
    msg.lon = 0.16375959587287825;
    msg.z = 0.3515843116306486;
    msg.z_units = 157U;

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
    msg.setTimeStamp(0.9478131783735597);
    msg.setSource(63342U);
    msg.setSourceEntity(218U);
    msg.setDestination(41602U);
    msg.setDestinationEntity(195U);
    msg.op = 59U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("EEXSETFKWODTCRXKGTXBKQYKVNWFMWEDOGSVYULTZTFMVYJMRHVPMYIJRIBCDEHPWMASJODBQCLYGIIFHYZKCXNNOEZEFQZDAODFZJBKGEXRAQJRUBAZQKZDUYSAPLHNCAFVXDNXLVPWLNYYBCDSBXVNPFYAWXGUTRNGRZKMHWGAJOMPOIHPJVSFIRSLAIUJBQZUSVUNTJPLGQIWBLHUV");
    tmp_msg_0.lat = 0.49443730448819456;
    tmp_msg_0.lon = 0.7881273433584216;
    tmp_msg_0.z = 0.3804835755097179;
    tmp_msg_0.z_units = 81U;
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
    msg.setTimeStamp(0.4798765238002255);
    msg.setSource(56614U);
    msg.setSourceEntity(52U);
    msg.setDestination(61184U);
    msg.setDestinationEntity(228U);
    msg.op = 6U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("ORJTUNLWLPCAIDTFTHUNKALICNQEZTKCJBBCPIDKACXWZUNKKI");
    tmp_msg_0.lat = 0.9594365051730683;
    tmp_msg_0.lon = 0.3185502930600359;
    tmp_msg_0.z = 0.16330772211293643;
    tmp_msg_0.z_units = 21U;
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
    msg.setTimeStamp(0.9989333550492738);
    msg.setSource(17354U);
    msg.setSourceEntity(53U);
    msg.setDestination(49104U);
    msg.setDestinationEntity(10U);
    msg.op = 197U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("VPPRKJTZSLULORZUPQESLCOYKVCIEXMJDDSGWSZSABOKYEQYTOQPZWLKPGLSEURFQPVHMRIVNOAHYVRUCTLWDYXBUAUXDOEJXPENHSABFTIHNILNGXWWTGBRLGDXMJBQBVIRTORMTGIKAQPNUJZZLBNNUCICYS");
    tmp_msg_0.lat = 0.9958469948588184;
    tmp_msg_0.lon = 0.8832855526706891;
    tmp_msg_0.z = 0.19072047206531195;
    tmp_msg_0.z_units = 209U;
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
    msg.setTimeStamp(0.720281617153327);
    msg.setSource(16619U);
    msg.setSourceEntity(202U);
    msg.setDestination(4822U);
    msg.setDestinationEntity(99U);
    msg.value = 0.6343494753039409;
    msg.type = 87U;

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
    msg.setTimeStamp(0.28126638592685416);
    msg.setSource(5647U);
    msg.setSourceEntity(28U);
    msg.setDestination(32004U);
    msg.setDestinationEntity(11U);
    msg.value = 0.45850519114353194;
    msg.type = 29U;

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
    msg.setTimeStamp(0.31050781390520144);
    msg.setSource(1426U);
    msg.setSourceEntity(47U);
    msg.setDestination(7220U);
    msg.setDestinationEntity(18U);
    msg.value = 0.35949418479374573;
    msg.type = 208U;

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
    msg.setTimeStamp(0.7656794500345007);
    msg.setSource(60952U);
    msg.setSourceEntity(9U);
    msg.setDestination(49984U);
    msg.setDestinationEntity(46U);
    msg.value = 0.6355859025175624;

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
    msg.setTimeStamp(0.3512053395552375);
    msg.setSource(54674U);
    msg.setSourceEntity(34U);
    msg.setDestination(27656U);
    msg.setDestinationEntity(179U);
    msg.value = 0.37010802767127327;

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
    msg.setTimeStamp(0.47445250857799337);
    msg.setSource(60504U);
    msg.setSourceEntity(74U);
    msg.setDestination(20552U);
    msg.setDestinationEntity(124U);
    msg.value = 0.4274551070289654;

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
    msg.setTimeStamp(0.5122280965695726);
    msg.setSource(58636U);
    msg.setSourceEntity(1U);
    msg.setDestination(56641U);
    msg.setDestinationEntity(247U);
    msg.timestamp_last_service = 0.7742257788155181;
    msg.time_next_service = 0.7400047084667902;
    msg.time_motor_next_service = 0.25869316288625477;
    msg.time_idle_ground = 0.18889220758289793;
    msg.time_idle_air = 0.6640914518718216;
    msg.time_idle_water = 0.8318787903942332;
    msg.time_idle_underwater = 0.8302967812652179;
    msg.time_idle_unknown = 0.43324903645221957;
    msg.time_motor_ground = 0.5650809355013204;
    msg.time_motor_air = 0.19521678606956394;
    msg.time_motor_water = 0.5465004914582993;
    msg.time_motor_underwater = 0.27206336409871157;
    msg.time_motor_unknown = 0.7078162777465496;
    msg.rpm_min = -8284;
    msg.rpm_max = 25358;
    msg.depth_max = 0.6314583436553636;

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
    msg.setTimeStamp(0.6740175324684858);
    msg.setSource(30713U);
    msg.setSourceEntity(241U);
    msg.setDestination(44274U);
    msg.setDestinationEntity(3U);
    msg.timestamp_last_service = 0.16363584754966343;
    msg.time_next_service = 0.7658663446502898;
    msg.time_motor_next_service = 0.9532887485427993;
    msg.time_idle_ground = 0.7661062937267324;
    msg.time_idle_air = 0.4101250175082848;
    msg.time_idle_water = 0.3528042492484813;
    msg.time_idle_underwater = 0.014868473446139951;
    msg.time_idle_unknown = 0.7715332788880823;
    msg.time_motor_ground = 0.8422903148797181;
    msg.time_motor_air = 0.5789875924690205;
    msg.time_motor_water = 0.7981469451314467;
    msg.time_motor_underwater = 0.5527394783693634;
    msg.time_motor_unknown = 0.6226569822824531;
    msg.rpm_min = -24610;
    msg.rpm_max = 29511;
    msg.depth_max = 0.9850621617931462;

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
    msg.setTimeStamp(0.06803788224004204);
    msg.setSource(27395U);
    msg.setSourceEntity(123U);
    msg.setDestination(16928U);
    msg.setDestinationEntity(62U);
    msg.timestamp_last_service = 0.7100938675979822;
    msg.time_next_service = 0.317533592085379;
    msg.time_motor_next_service = 0.35917504302737047;
    msg.time_idle_ground = 0.8124386656358918;
    msg.time_idle_air = 0.5147190984816395;
    msg.time_idle_water = 0.2705663064526934;
    msg.time_idle_underwater = 0.6072740422389956;
    msg.time_idle_unknown = 0.3876699648131121;
    msg.time_motor_ground = 0.4454868762481409;
    msg.time_motor_air = 0.13045129321338955;
    msg.time_motor_water = 0.39564758826366275;
    msg.time_motor_underwater = 0.4231965316030446;
    msg.time_motor_unknown = 0.31979597506843316;
    msg.rpm_min = 4119;
    msg.rpm_max = 25984;
    msg.depth_max = 0.645171335114649;

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
    msg.setTimeStamp(0.199387596054724);
    msg.setSource(59101U);
    msg.setSourceEntity(123U);
    msg.setDestination(43785U);
    msg.setDestinationEntity(211U);
    msg.severity = 32U;
    msg.text.assign("EDBUWMRZAPVDAQAAYUQGPOIQPWOTAMZBVZMANOOZMCDVGYJCNEYFHLPVEPLSXJWMGXACGJNKXRGP");

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
    msg.setTimeStamp(0.6547342885514901);
    msg.setSource(61011U);
    msg.setSourceEntity(141U);
    msg.setDestination(30293U);
    msg.setDestinationEntity(77U);
    msg.severity = 89U;
    msg.text.assign("TFSWGTOYBRRLIDSVNBQWKNVGUHZLMMJLWXDQVBRWZCUGEZZKABEBCWSVNONMNUIHEXUMBHZIYPNXRJQF");

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
    msg.setTimeStamp(0.45766821337283925);
    msg.setSource(29800U);
    msg.setSourceEntity(63U);
    msg.setDestination(46408U);
    msg.setDestinationEntity(206U);
    msg.severity = 203U;
    msg.text.assign("UBXYJINIVWOEXJMIKHVAISEWJPJBZXQNBRHHRUZTAIYPRNYTISGQMLDLSAHUQPCEPHKMFWTOLDGTDTYDMKIONRSLAYQEUXJAKKQDVYIEVDZWOCYXCXJWPNBCFVLMDFOKHUZUBMQULSLGZASCERGLTRTCROGKVHSXVTMEBYYRSHAGRBKMWKOMWLDBXCPDVZJVBJUUKGPQHATIXGMCPJEFTWNDQXFSOZLNUFQIJSOB");

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
    msg.setTimeStamp(0.539848560358728);
    msg.setSource(60459U);
    msg.setSourceEntity(69U);
    msg.setDestination(30453U);
    msg.setDestinationEntity(54U);
    msg.channel = 32;
    msg.value = 529853693;
    msg.gain = 15U;

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
    msg.setTimeStamp(0.5153152320606726);
    msg.setSource(25892U);
    msg.setSourceEntity(170U);
    msg.setDestination(65093U);
    msg.setDestinationEntity(144U);
    msg.channel = 4;
    msg.value = 1271919383;
    msg.gain = 13U;

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
    msg.setTimeStamp(0.8335747024825643);
    msg.setSource(47876U);
    msg.setSourceEntity(248U);
    msg.setDestination(61226U);
    msg.setDestinationEntity(98U);
    msg.channel = -101;
    msg.value = 669814295;
    msg.gain = 252U;

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
    msg.setTimeStamp(0.9072489135650864);
    msg.setSource(62790U);
    msg.setSourceEntity(50U);
    msg.setDestination(65053U);
    msg.setDestinationEntity(127U);
    msg.ch01 = 0.2015623078824299;
    msg.ch02 = 0.6313186620247181;
    msg.ch03 = 0.5592704211723025;
    msg.ch04 = 0.8843497303729894;
    msg.ch05 = 0.5802675107194833;
    msg.ch06 = 0.5903169458073211;
    msg.ch07 = 0.5949242174041056;
    msg.ch08 = 0.6493659442526306;
    msg.ch09 = 0.6206461659887463;
    msg.ch10 = 0.5431690368638235;
    msg.ch11 = 0.7791829092543543;
    msg.ch12 = 0.9029304966764342;
    msg.ch13 = 0.25896726097615463;
    msg.ch14 = 0.15761774761028235;
    msg.ch15 = 0.040526706976452;
    msg.ch16 = 0.907940175850786;

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
    msg.setTimeStamp(0.6255415250214655);
    msg.setSource(55640U);
    msg.setSourceEntity(216U);
    msg.setDestination(49741U);
    msg.setDestinationEntity(23U);
    msg.ch01 = 0.6144128315646024;
    msg.ch02 = 0.21854142724584535;
    msg.ch03 = 0.8887612795327825;
    msg.ch04 = 0.5259109744724598;
    msg.ch05 = 0.6153295108264447;
    msg.ch06 = 0.6755959407260862;
    msg.ch07 = 0.3116447353611712;
    msg.ch08 = 0.6551586066563329;
    msg.ch09 = 0.04925148510402111;
    msg.ch10 = 0.2922448031489109;
    msg.ch11 = 0.5701688601452146;
    msg.ch12 = 0.8177506811734863;
    msg.ch13 = 0.6316521119159384;
    msg.ch14 = 0.9971565207299071;
    msg.ch15 = 0.17685280481412902;
    msg.ch16 = 0.5958622221760201;

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
    msg.setTimeStamp(0.9112856739294878);
    msg.setSource(63457U);
    msg.setSourceEntity(41U);
    msg.setDestination(3606U);
    msg.setDestinationEntity(21U);
    msg.ch01 = 0.1115035788522708;
    msg.ch02 = 0.8604562665504604;
    msg.ch03 = 0.5150671333462016;
    msg.ch04 = 0.12623298940644867;
    msg.ch05 = 0.18305746987378058;
    msg.ch06 = 0.6360105097266366;
    msg.ch07 = 0.6657805827229717;
    msg.ch08 = 0.2787204834892736;
    msg.ch09 = 0.769798180241286;
    msg.ch10 = 0.4510311454028031;
    msg.ch11 = 0.2725289328071525;
    msg.ch12 = 0.8848819884900688;
    msg.ch13 = 0.6739651850007586;
    msg.ch14 = 0.11726895436405826;
    msg.ch15 = 0.8534537359812164;
    msg.ch16 = 0.7900640705119496;

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
    msg.setTimeStamp(0.7072717169747731);
    msg.setSource(36323U);
    msg.setSourceEntity(104U);
    msg.setDestination(55323U);
    msg.setDestinationEntity(66U);
    msg.op = 55U;
    msg.lat = 0.8061843921808352;
    msg.lon = 0.5942298508876179;
    msg.height = 0.6298149102269082;
    msg.depth = 0.5118362915836827;
    msg.alt = 0.9329601200509098;

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
    msg.setTimeStamp(0.03168339313789803);
    msg.setSource(48004U);
    msg.setSourceEntity(246U);
    msg.setDestination(17103U);
    msg.setDestinationEntity(127U);
    msg.op = 125U;
    msg.lat = 0.12460628043961375;
    msg.lon = 0.7834202174245445;
    msg.height = 0.5238983664064291;
    msg.depth = 0.9865160896553001;
    msg.alt = 0.878886248434179;

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
    msg.setTimeStamp(0.7416433243151201);
    msg.setSource(34436U);
    msg.setSourceEntity(24U);
    msg.setDestination(57198U);
    msg.setDestinationEntity(197U);
    msg.op = 225U;
    msg.lat = 0.7614024464602751;
    msg.lon = 0.15793182683630413;
    msg.height = 0.6782280248553805;
    msg.depth = 0.1767630971552081;
    msg.alt = 0.2797272284440855;

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
    msg.setTimeStamp(0.9696332869719978);
    msg.setSource(61492U);
    msg.setSourceEntity(50U);
    msg.setDestination(61025U);
    msg.setDestinationEntity(73U);
    msg.direction = 0.061159322504506175;
    msg.speed = 0.9314853717984194;
    msg.turbulence = 0.722418947030463;

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
    msg.setTimeStamp(0.5998157467069036);
    msg.setSource(12335U);
    msg.setSourceEntity(27U);
    msg.setDestination(438U);
    msg.setDestinationEntity(99U);
    msg.direction = 0.7097701780095728;
    msg.speed = 0.6899032454260204;
    msg.turbulence = 0.8913539460676204;

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
    msg.setTimeStamp(0.9240208272050721);
    msg.setSource(5921U);
    msg.setSourceEntity(239U);
    msg.setDestination(1082U);
    msg.setDestinationEntity(130U);
    msg.direction = 0.9076638904051344;
    msg.speed = 0.9507848282834984;
    msg.turbulence = 0.47509881614694305;

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
    msg.setTimeStamp(0.3779738429387668);
    msg.setSource(6862U);
    msg.setSourceEntity(191U);
    msg.setDestination(31656U);
    msg.setDestinationEntity(189U);
    msg.msg_type.assign("ZLFKJCJGGVITBQUCBIXAEYNMHPDMXQQ");
    msg.sensor_class.assign("CWIOMMYNAPBQZIGFCSSKHHOPYQTOVGEJESGHTAPDFOOJLNEJBZGVDRBSTFWZQENYAUQHCBGU");
    msg.mmsi.assign("IZFOPNXELTGNCEVTWGZZRSQAZGUEEECXROKHQCFRWSUXDAPQVGABIDXJIAVGRIMSWHJRBFJBHWQYVSDGXRMJWJVWGKSOMHFCJKVOVKWBELUNZEYPXDCYXPPZWDOSIXLELBQNHKOOZYXHZLWHNBPAMKFTECMQWQDRVQAZOOADPCVTMTJMSLQLAGFNLVTFMCPHDTIIJYCEDYU");
    msg.callsign.assign("HUFSOODMFJPSGMKCCTCMUBHKMTKFJBHUGUZXJOZQHPVDROQIVWVBXOBLJDQAKECEHZVIPNHDNXFACGVWTSLBXHUMMNMZABAHLDZXYGUPSOYPCEPRNNMIYBGYSYFJOKUKUZJQILNATYRCKYQWESNTIAKJESWTKXQRBAKEVNZRWVSFGRRPLIDVTLZCUEY");
    msg.name.assign("EFVBUVAJZCLORFMEXCCVUYXRKBFKNUVEEEZUZQQJMJWNRIHXOPJBPRBSKDTPVEZWLAFMAYSPHYIZ");
    msg.nav_status = 123U;
    msg.type_and_cargo = 175U;
    msg.lat = 0.8124691171931169;
    msg.lon = 0.8157093903983154;
    msg.course = 0.8139735415558135;
    msg.speed = 0.4402336718320009;
    msg.dist = 0.6870461644252223;
    msg.a = 0.37602277566964837;
    msg.b = 0.3128618314625896;
    msg.c = 0.5123940308560403;
    msg.d = 0.5259473054254794;
    msg.draught = 0.10108270893821558;

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
    msg.setTimeStamp(0.6125231569407058);
    msg.setSource(15211U);
    msg.setSourceEntity(115U);
    msg.setDestination(27649U);
    msg.setDestinationEntity(99U);
    msg.msg_type.assign("XYRBLAOASHBEII");
    msg.sensor_class.assign("CMUMUQPFBIQDDTIBTGOGVHUNLWRCVOAESVAYWZNNSOJDPENYCZKKEIXBQPWZUWAZKLEZWQHXDOJZSHIVJVSSSCGVPMSKUQFQKSOGIOOLLXLAGATPYAEMPUGCJYZUNYRAVTKXRVKFBRXJMQCCLPBWDGHAPFORDHBQPJAWRIKXFAMLTERZOTGICYKGFRDIJHPZJHDWYWHTQHTGSUBEIXLNSFNYNLLBFZNDXERKUMDXIO");
    msg.mmsi.assign("CJHADZRXPYDT");
    msg.callsign.assign("ESNWXNHBNBUUCOYKUFHPKCWPIOSLIXNQGEUACWJVZEWOQOVMYBCBSZVLYUGXUBZZGQDNHJLOZTJWQJPVGSMNKRKLRTTUPQFXGXMITLQSCVVACGFLQWMFPBOHQPTECCEIRHLJFHUAFLXQYOOYAWKSZMMFSROBITPH");
    msg.name.assign("LAVFXYETNHXSNKIBLUQHPICAMEHUIOGFUTMJDGFLHNDELBVQVVMBIHUQBXYDFEDXIJPTVOPYCTGJICOZYQVGARGRWZOPDBVSPEJSCGRCTWQAYOMSMRKLTEZQXPDNZRDZERMCUEXIAZUOGCTOKIWBQKUAFVBZVQJYIUWWFLYHPXRXRETUYWNDJNFUNWXKSGSXSMQHALWYLCVSNHLODDMRJZAFSGAKKBOYTMRBJLOZPZIPCWKCJANFS");
    msg.nav_status = 77U;
    msg.type_and_cargo = 215U;
    msg.lat = 0.6211461466464789;
    msg.lon = 0.8193933749281395;
    msg.course = 0.6271247963232339;
    msg.speed = 0.472714128618695;
    msg.dist = 0.04170886522416328;
    msg.a = 0.6404408231306075;
    msg.b = 0.8079561693768677;
    msg.c = 0.9295389403800174;
    msg.d = 0.17153708878872398;
    msg.draught = 0.944066321546412;

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
    msg.setTimeStamp(0.4750231751165632);
    msg.setSource(54531U);
    msg.setSourceEntity(157U);
    msg.setDestination(18415U);
    msg.setDestinationEntity(164U);
    msg.msg_type.assign("ECAXCEZTNBAQMSFFHSTBKPFZHKZSQPBRRAZNKJRHIKGXTOOFLKZWRVAPMEWBRYBPMFEODDKPICEYCAIEQSLFGXVSPCUDOZZIWBVUPJEOVLGDRGUPXDNABXXNTMKGLMOXHTEWKCHALWHCQOBHISWSQIUUCMPAMUQWDLYRQKLDYNMONWBSQAUVYGTNFMPYZYSJJEDNJGKWGVSLC");
    msg.sensor_class.assign("YIDYUDTXCGCGNL");
    msg.mmsi.assign("MTUEKXJOUBWSV");
    msg.callsign.assign("QUJAKVUEKBRDGCUZWZOAXBERIWCSNOXMDLJPFSTUJWFALMEDXVGCYYGZMTBIAPIXTKGQFHCPQOODAFKDPHKIHYFDTSBEKJSXLAPSWPMSQQCDGMFQEKOWLOITKIHKVCJLELGRHUPLHXQSFRNTFXJONCLNIXJUASVZNDUQHA");
    msg.name.assign("CZLTKSHJTDDBRUWZTQJWNJFDKDHEPEBIZKPBAYPNLWJWUMNXFIBICBANBPVIHZEEHYXQTMJDGMXWEXVSAFHJTCBWGOMFKGLOMIXKSEINRZSSNXHMOGLMUJKIFUGTSTCKNMVHQPVPOIDWNOWGFYSSEGNYAERDFAPHLRVJRQAURCUPVGLAQBXVOJXCJUQN");
    msg.nav_status = 150U;
    msg.type_and_cargo = 37U;
    msg.lat = 0.2242098152809482;
    msg.lon = 0.9335365360740768;
    msg.course = 0.5666632536932443;
    msg.speed = 0.7404143569558185;
    msg.dist = 0.16692532575286134;
    msg.a = 0.017881172084080577;
    msg.b = 0.3382410578589953;
    msg.c = 0.12339281466316143;
    msg.d = 0.3072334324747945;
    msg.draught = 0.7523343394316337;

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
    msg.setTimeStamp(0.5838483598284039);
    msg.setSource(62216U);
    msg.setSourceEntity(19U);
    msg.setDestination(4682U);
    msg.setDestinationEntity(20U);
    msg.depth_at_loc.assign("YIKSSQZTFMCVQECCYDXHPGSVWXCHJZAUUQADZIUJDRBGQZHEMQEYBIRNQBWMSGRARNYNWYKJYJVXBQQMCRLVVDWOSMAKZXMITNJPFSFFWXDLTWXMOYHUUPITTTHLSTGAAJPUHCBVQVLEOMGLOOSKWNBRFVAKOTZWKLZJNMTCSUWEYXVJMPALWFDDBNNDYOPNIJUQLCBNUKIEISCFZXHGGFCEHXHGZDBKVYIKEZFJULDAPXRRKRLBERPOTGOPOH");
    msg.danger.assign("YAKQTVFALBBROPCYDVBIYL");

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
    msg.setTimeStamp(0.1625530225972286);
    msg.setSource(30196U);
    msg.setSourceEntity(103U);
    msg.setDestination(39881U);
    msg.setDestinationEntity(147U);
    msg.depth_at_loc.assign("FWBINQSOZDEVYPWFZIRCKBCSDUAIOPLLQHLXVQZCRYVZZMWZQEEOJAYUMJAXEDRETBNXCWWOLSVYNUWZAHPZDQTWMPHSBDMYGTGKOQBJAKKSIIQTFYENELCDIXAHJRLPKGYWGKRXOFBFESCBJSTVXDPWPOTOLOVQVP");
    msg.danger.assign("TACDCCQEWZAQUUYAKBDQRLYRNHZGMIIEHFKTGFKHNWAXGUXJOEBKTTVHZFCOEONW");

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
    msg.setTimeStamp(0.5362598991280155);
    msg.setSource(56560U);
    msg.setSourceEntity(20U);
    msg.setDestination(12990U);
    msg.setDestinationEntity(150U);
    msg.depth_at_loc.assign("CDTXWYHQDDMPPKJPLOHNNLBNMKAJSORHKRBNJNKPAQOVOLKPNLCXFLZXYULTIWLDSZYAQERIBIFUQWXDGKAEPCQPAAMDFCHEGRFZEMZETTJGAMBYSWMUVWKZIOJDTOVCJEZLSVIJPSPERCMNWFPCOYNSWTQVVYTKGUBOBASQYKUEESCJIXMFBHXRATDQIOTHYVZCWCFDNYHZWRGRGHIVUJUXZDMULHVBXGFAUJFRR");
    msg.danger.assign("QLRDWJKMLSABSNOCATXIXHYTAVDDFLZCHQPLXWQUKPCPXUODIVNZMNHBGYDARCHFNNBZLXYRVCJJFRXFIJJPWKTZBZDMKNWRFZGSPEDOBSPVIGCUGYFEJUBJGFGPBCXVOEOHVCEWWQYAMGDAMUSHLKNVLTMOUZRWRTXMQBKMGAYTEYIEUVUIZSAILMKTUXJETWWEGCYHEUQSSJQNOP");

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
    msg.setTimeStamp(0.047178979299965285);
    msg.setSource(17331U);
    msg.setSourceEntity(146U);
    msg.setDestination(39563U);
    msg.setDestinationEntity(219U);
    msg.time = 0.5785709789824528;
    msg.x = 0.5691708252945503;
    msg.y = 0.41248040954666965;
    msg.z = 0.18117865524706223;

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
    msg.setTimeStamp(0.9340599125709917);
    msg.setSource(31782U);
    msg.setSourceEntity(95U);
    msg.setDestination(56044U);
    msg.setDestinationEntity(81U);
    msg.time = 0.7519981072614215;
    msg.x = 0.798680061647848;
    msg.y = 0.9916408318330323;
    msg.z = 0.23452710199419002;

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
    msg.setTimeStamp(0.9352762721231704);
    msg.setSource(23080U);
    msg.setSourceEntity(89U);
    msg.setDestination(30975U);
    msg.setDestinationEntity(141U);
    msg.time = 0.8083790523626209;
    msg.x = 0.7239812628486881;
    msg.y = 0.06462503594100677;
    msg.z = 0.06001792696429065;

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
    msg.setTimeStamp(0.6625846217382861);
    msg.setSource(63555U);
    msg.setSourceEntity(181U);
    msg.setDestination(24299U);
    msg.setDestinationEntity(253U);
    msg.nbeams = 218U;
    msg.ncells = 29U;
    msg.coord_sys = 120U;

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
    msg.setTimeStamp(0.568569508290644);
    msg.setSource(43083U);
    msg.setSourceEntity(207U);
    msg.setDestination(28788U);
    msg.setDestinationEntity(29U);
    msg.nbeams = 37U;
    msg.ncells = 35U;
    msg.coord_sys = 248U;

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
    msg.setTimeStamp(0.10246372687839755);
    msg.setSource(24807U);
    msg.setSourceEntity(190U);
    msg.setDestination(47354U);
    msg.setDestinationEntity(157U);
    msg.nbeams = 220U;
    msg.ncells = 167U;
    msg.coord_sys = 53U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.445691928309377;
    msg.profile.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.12401042564503573);
    msg.setSource(19168U);
    msg.setSourceEntity(188U);
    msg.setDestination(39473U);
    msg.setDestinationEntity(159U);
    msg.cell_position = 0.35914849788270764;

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
    msg.setTimeStamp(0.7752852471051811);
    msg.setSource(29233U);
    msg.setSourceEntity(31U);
    msg.setDestination(31069U);
    msg.setDestinationEntity(136U);
    msg.cell_position = 0.5338923644267538;

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
    msg.setTimeStamp(0.7647447139020553);
    msg.setSource(48716U);
    msg.setSourceEntity(204U);
    msg.setDestination(2378U);
    msg.setDestinationEntity(185U);
    msg.cell_position = 0.2039298110139024;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.7321946923831302;
    tmp_msg_0.amp = 0.33383238038601926;
    tmp_msg_0.cor = 98U;
    msg.beams.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.3959994624606391);
    msg.setSource(61326U);
    msg.setSourceEntity(139U);
    msg.setDestination(36681U);
    msg.setDestinationEntity(56U);
    msg.vel = 0.7907772540230709;
    msg.amp = 0.47961214504456817;
    msg.cor = 77U;

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
    msg.setTimeStamp(0.673255412995708);
    msg.setSource(23217U);
    msg.setSourceEntity(70U);
    msg.setDestination(17477U);
    msg.setDestinationEntity(41U);
    msg.vel = 0.07984210347755438;
    msg.amp = 0.9607118462285954;
    msg.cor = 88U;

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
    msg.setTimeStamp(0.2136109208518242);
    msg.setSource(38895U);
    msg.setSourceEntity(167U);
    msg.setDestination(32618U);
    msg.setDestinationEntity(153U);
    msg.vel = 0.764145073036012;
    msg.amp = 0.8329613892309479;
    msg.cor = 253U;

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
    msg.setTimeStamp(0.07205295402104317);
    msg.setSource(53373U);
    msg.setSourceEntity(193U);
    msg.setDestination(37732U);
    msg.setDestinationEntity(149U);
    msg.value = 0.23384079014361814;

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
    msg.setTimeStamp(0.9515191884137962);
    msg.setSource(53995U);
    msg.setSourceEntity(152U);
    msg.setDestination(63481U);
    msg.setDestinationEntity(3U);
    msg.value = 0.1746602492466317;

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
    msg.setTimeStamp(0.6779017681573272);
    msg.setSource(57792U);
    msg.setSourceEntity(181U);
    msg.setDestination(62830U);
    msg.setDestinationEntity(43U);
    msg.value = 0.12139494204769641;

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
    msg.setTimeStamp(0.6836874246965453);
    msg.setSource(10201U);
    msg.setSourceEntity(198U);
    msg.setDestination(10453U);
    msg.setDestinationEntity(24U);
    msg.sig_wave_height_hm0 = 0.44122616278451643;
    msg.wave_peak_direction = 0.6380385766639168;
    msg.wave_peak_period = 0.5152992944078852;
    msg.wave_height_wind_hm0 = 0.07262667071745343;
    msg.wave_height_swell_hm0 = 0.06064863914333163;
    msg.wave_peak_period_wind = 0.5385449248514881;
    msg.wave_peak_period_swell = 0.7444440164282927;
    msg.wave_peak_direction_wind = 0.24298778082865446;
    msg.wave_peak_direction_swell = 0.6640273537026721;
    msg.wave_mean_direction = 0.5735636848168864;
    msg.wave_mean_period_tm02 = 0.3965179507181088;
    msg.wave_height_hmax = 0.8143556960430345;
    msg.wave_height_crest = 0.3860833598678346;
    msg.wave_height_trough = 0.7728264260113457;
    msg.wave_period_tmax = 0.08367296238705768;
    msg.wave_period_tz = 0.4241985526858564;
    msg.significant_wave_height_h1_3 = 0.16923314995390826;
    msg.mean_spreading_angle = 0.13635012029824822;
    msg.first_order_spread = 0.010877999498975277;
    msg.long_crestedness_parameters = 0.8610923396299769;
    msg.heading = 0.8239660907959221;
    msg.pitch = 0.0041424453555626295;
    msg.roll = 0.07267362737668981;
    msg.external_heading = 0.22599979021260386;
    msg.stdev_heading = 0.8423981023414856;
    msg.stdev_pitch = 0.33135906966938866;
    msg.stdev_roll = 0.3459499971162109;

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
    msg.setTimeStamp(0.09483936541587312);
    msg.setSource(61548U);
    msg.setSourceEntity(198U);
    msg.setDestination(36482U);
    msg.setDestinationEntity(189U);
    msg.sig_wave_height_hm0 = 0.6557093825646272;
    msg.wave_peak_direction = 0.8606844476301565;
    msg.wave_peak_period = 0.5354763032963015;
    msg.wave_height_wind_hm0 = 0.24605068310937817;
    msg.wave_height_swell_hm0 = 0.9553879523008758;
    msg.wave_peak_period_wind = 0.0022596043580117575;
    msg.wave_peak_period_swell = 0.12327376266100465;
    msg.wave_peak_direction_wind = 0.3198106353942973;
    msg.wave_peak_direction_swell = 0.5666153955054309;
    msg.wave_mean_direction = 0.4553608430248599;
    msg.wave_mean_period_tm02 = 0.781110370260444;
    msg.wave_height_hmax = 0.0883551161043189;
    msg.wave_height_crest = 0.1565219673347955;
    msg.wave_height_trough = 0.8652108827287551;
    msg.wave_period_tmax = 0.4610049693601609;
    msg.wave_period_tz = 0.8996183946288491;
    msg.significant_wave_height_h1_3 = 0.8491839616891635;
    msg.mean_spreading_angle = 0.4723221858893094;
    msg.first_order_spread = 0.8750625893973147;
    msg.long_crestedness_parameters = 0.8992408679345892;
    msg.heading = 0.8904320058016012;
    msg.pitch = 0.8896572142434721;
    msg.roll = 0.17294476738748;
    msg.external_heading = 0.47290565543131136;
    msg.stdev_heading = 0.9449379549844595;
    msg.stdev_pitch = 0.6111914394511414;
    msg.stdev_roll = 0.853709053694542;

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
    msg.setTimeStamp(0.8861949559349472);
    msg.setSource(4800U);
    msg.setSourceEntity(27U);
    msg.setDestination(61374U);
    msg.setDestinationEntity(41U);
    msg.sig_wave_height_hm0 = 0.8946940023296722;
    msg.wave_peak_direction = 0.38908299341126584;
    msg.wave_peak_period = 0.5245199195326818;
    msg.wave_height_wind_hm0 = 0.7585134200463033;
    msg.wave_height_swell_hm0 = 0.8619758795111837;
    msg.wave_peak_period_wind = 0.2082401080129388;
    msg.wave_peak_period_swell = 0.0026985051071103383;
    msg.wave_peak_direction_wind = 0.5629456724988229;
    msg.wave_peak_direction_swell = 0.6776759892497864;
    msg.wave_mean_direction = 0.47759560847659854;
    msg.wave_mean_period_tm02 = 0.37198823150820726;
    msg.wave_height_hmax = 0.7161800359512096;
    msg.wave_height_crest = 0.5727348696704169;
    msg.wave_height_trough = 0.5979072564258646;
    msg.wave_period_tmax = 0.11173272801779488;
    msg.wave_period_tz = 0.0948514567762111;
    msg.significant_wave_height_h1_3 = 0.4713821101573734;
    msg.mean_spreading_angle = 0.801367642229413;
    msg.first_order_spread = 0.9092877377371268;
    msg.long_crestedness_parameters = 0.13353616803256385;
    msg.heading = 0.9041170916021108;
    msg.pitch = 0.05844898771973328;
    msg.roll = 0.330873208904949;
    msg.external_heading = 0.48446168693328184;
    msg.stdev_heading = 0.7359062762515146;
    msg.stdev_pitch = 0.019510422790654514;
    msg.stdev_roll = 0.5425653318197837;

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
    msg.setTimeStamp(0.9245688298180971);
    msg.setSource(15250U);
    msg.setSourceEntity(250U);
    msg.setDestination(8407U);
    msg.setDestinationEntity(247U);
    msg.name.assign("QXPEWGFALWTQTNEJGGAQDJSPRBUHFZCMRSJAIPWITVVJKUYABVVUKNCSBMCDKMWDYSFQGCCZYMLXGMJYTUETJZLVCNSFNTFPDKFBOWKMGBCYHPYPBKFSHXMEIXLSZSGUIVRRAAONHPEDCBHOYQHZRJLIOZFOCOTG");
    msg.value = 242U;

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
    msg.setTimeStamp(0.07068698653213168);
    msg.setSource(24419U);
    msg.setSourceEntity(227U);
    msg.setDestination(34202U);
    msg.setDestinationEntity(31U);
    msg.name.assign("BWOMWTDHKUOAY");
    msg.value = 84U;

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
    msg.setTimeStamp(0.5582217790000921);
    msg.setSource(35056U);
    msg.setSourceEntity(143U);
    msg.setDestination(48903U);
    msg.setDestinationEntity(175U);
    msg.name.assign("KJFQMFIREMTIZUZJSRIOCPEPMBWIWNTOGSYZXHLPJQJFDHJQXVHGLGZBBQAYEKINUGOYGMFYRWACRTAINXDNYJCQLVDRHQRDKCXATWRBYKXCOJVCSPCRLSQTNPBKBZFHXWVUOAOAETMNZRNEFSDOHAGCPWUDYHXXESUUZSVBOYEHUOVKUQLYVAQLOULLKNTKFDDMISAZWMHNXZEPSWNVEFMGBSLCEGVGIFQATVDKRCB");
    msg.value = 116U;

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
    msg.setTimeStamp(0.3545690471026013);
    msg.setSource(59397U);
    msg.setSourceEntity(129U);
    msg.setDestination(48156U);
    msg.setDestinationEntity(190U);
    msg.name.assign("XNZPZROAFGYUMPYPIZRXDSFEDNANAEHHWGVSVRSOCJNEBZBJPLOOSFJBQDEYVWEQEJCYLSQXOXMKDBOLYFQWPQFQTHPMPADAYKKPIMHCZUXKGELPTGEXCQKWDXTCIWTTYLYXTJMQWMVLVZ");

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
    msg.setTimeStamp(0.5952585701508202);
    msg.setSource(15037U);
    msg.setSourceEntity(158U);
    msg.setDestination(64282U);
    msg.setDestinationEntity(174U);
    msg.name.assign("ZGABXSONSBDGCMLOSWTRMSBYCAXXZOHSTRVCORRBTFLRXNGAWDWYUOFYFKGKQQTKVTCHNVVNZUQSZKPHFDJLSNSPEINUMDDDKYHIB");

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
    msg.setTimeStamp(0.8801873534561682);
    msg.setSource(51476U);
    msg.setSourceEntity(13U);
    msg.setDestination(50909U);
    msg.setDestinationEntity(117U);
    msg.name.assign("OESQPWAUJYVYKMLDWCNTWPQPMMJIKDOJBALHDOHHNNUFFABJZYOGXOIVXHREDKLQNCUQASEMTCIBKUJQZTJNTQZYUIKRBRVGBDPLEHETSXGGXILXXAMOGHNLDBAVRQPJMRPRAEUKBFCBUVCHIKFZNGLZMJWVJZWIRFUPAQEIFEGTYGDUKNMYRFTAXWZVIQWSRWYYSYLCPULEMXDVQPTFGCOOZV");

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
    msg.setTimeStamp(0.7416532808324374);
    msg.setSource(43443U);
    msg.setSourceEntity(190U);
    msg.setDestination(23675U);
    msg.setDestinationEntity(206U);
    msg.name.assign("EQCJZSLWJCHVOUBLXKSHHDPLJMMAXICBTFJHZCSHMNQRVFGGSLIICNKOVYEPFVNVPFLPBTONYLXOQFBXPUZAOIPDTRNLJBTKZXKVIYDLSQIFDKSEMUZRIZCDVBZIYHXCUMM");
    msg.value = 252U;

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
    msg.setTimeStamp(0.625531387320658);
    msg.setSource(25386U);
    msg.setSourceEntity(164U);
    msg.setDestination(6898U);
    msg.setDestinationEntity(190U);
    msg.name.assign("WNJPVKCFGDPFJDWZJJSYLEDHVUSIKTUNAMGXVVOTNDFTSPKJCWCVQNEWNSMTQPXKYCOXMAFAHMDSHSLBPDZSFSBBAZOOFXSKRNXTDWWUEE");
    msg.value = 93U;

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
    msg.setTimeStamp(0.6154443839545434);
    msg.setSource(65467U);
    msg.setSourceEntity(21U);
    msg.setDestination(31197U);
    msg.setDestinationEntity(192U);
    msg.name.assign("GBPGCKQORMEUUAEYGRTEJVMFWZRWBVXRZSYZSQYNPXBXGUQACCQEWXDJNGDGYQABTMRCTINBVICVILFSEEIOOUDXIIHLHFHLFAFXMDVJGRMTSCJDIAYWZOCPXFXKVWKPQLDPKSGVNFMMTTNCRHAWMJBYHPQLWUJIEIKIBLFALEYFUASERC");
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
    msg.setTimeStamp(0.4740314585560951);
    msg.setSource(20764U);
    msg.setSourceEntity(9U);
    msg.setDestination(30922U);
    msg.setDestinationEntity(178U);
    msg.value = 0.47819017217612236;

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
    msg.setTimeStamp(0.7549521988837815);
    msg.setSource(30967U);
    msg.setSourceEntity(67U);
    msg.setDestination(22582U);
    msg.setDestinationEntity(142U);
    msg.value = 0.014941852017768431;

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
    msg.setTimeStamp(0.6222190248611646);
    msg.setSource(1311U);
    msg.setSourceEntity(94U);
    msg.setDestination(37901U);
    msg.setDestinationEntity(109U);
    msg.value = 0.9452822380328071;

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
    msg.setTimeStamp(0.8553054822142999);
    msg.setSource(29321U);
    msg.setSourceEntity(43U);
    msg.setDestination(12576U);
    msg.setDestinationEntity(80U);
    msg.value = 0.5610272724895693;

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
    msg.setTimeStamp(0.9737480228813552);
    msg.setSource(52567U);
    msg.setSourceEntity(65U);
    msg.setDestination(63635U);
    msg.setDestinationEntity(175U);
    msg.value = 0.5873349789318414;

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
    msg.setTimeStamp(0.900884333434313);
    msg.setSource(58995U);
    msg.setSourceEntity(67U);
    msg.setDestination(44309U);
    msg.setDestinationEntity(14U);
    msg.value = 0.10190047455248674;

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
    msg.setTimeStamp(0.04929418467123703);
    msg.setSource(26753U);
    msg.setSourceEntity(93U);
    msg.setDestination(14624U);
    msg.setDestinationEntity(160U);
    msg.value = 0.01597544060740652;

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
    msg.setTimeStamp(0.5288910876052393);
    msg.setSource(60637U);
    msg.setSourceEntity(12U);
    msg.setDestination(6429U);
    msg.setDestinationEntity(24U);
    msg.value = 0.8934169249277053;

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
    msg.setTimeStamp(0.3753097391594856);
    msg.setSource(41301U);
    msg.setSourceEntity(52U);
    msg.setDestination(10853U);
    msg.setDestinationEntity(153U);
    msg.value = 0.3324605819010972;

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
    msg.setTimeStamp(0.858663654704308);
    msg.setSource(42890U);
    msg.setSourceEntity(18U);
    msg.setDestination(31654U);
    msg.setDestinationEntity(183U);
    msg.restriction = 84U;
    msg.reason.assign("WYZZYZQRTONGNGOIYXMKUCDCHMWGMWTWGVADEPJKISRLYLXPFUCPLVBXRMAWJOVKDLZDVAFBATBUVJCBEZKRWNDMNRROYUQDABTPFFPLYKCJJLOYSATVBBNQNMZXMKXHNNWHADHDURATUVJLKQERCJOIDEHXMVEEIQQIPYTVSZJCWYLCUIASHIIMOSHGNQLFOFJFZJUFRFCEIHOXDGBXMBVGWZHOAPZP");

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
    msg.setTimeStamp(0.07108775136083945);
    msg.setSource(39860U);
    msg.setSourceEntity(4U);
    msg.setDestination(63570U);
    msg.setDestinationEntity(69U);
    msg.restriction = 44U;
    msg.reason.assign("BFCBHENVASNNOBXIVILAYXQSQRHVYKSVUJRRAXDRMOOHUDJVISQPCJMLNYGTTKYIXKEEKCYCAGXWFVQLSZNMPEJHXBBOJJWKBFAVPFQRPNCXNIYHJOMWLYIGPQDRWWGLZTFTKDDADIUPDEKOTLNIIYZOUCFHGQ");

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
    msg.setTimeStamp(0.14392574609356346);
    msg.setSource(16842U);
    msg.setSourceEntity(77U);
    msg.setDestination(6062U);
    msg.setDestinationEntity(92U);
    msg.restriction = 212U;
    msg.reason.assign("DMZXEAIYVDVLMKYNLMEIPOKFJIUJRFEPOMSNZAWBVTFBNHLURWVGCZYQYSBJDGDROVHQUCPXSOOUQWLWJTOBMQIWRNUZKZSATPHWZFBHYGBPCNTHNFNJBUDTICNPEFAKEHX");

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
    msg.setTimeStamp(0.3980627913035527);
    msg.setSource(28462U);
    msg.setSourceEntity(149U);
    msg.setDestination(48603U);
    msg.setDestinationEntity(136U);
    msg.op = 117U;
    msg.request_id = 106070678U;
    msg.entity_name.assign("QOXYYAESQPTZQFZZCLTOXOXCGIEYZYXIGNZSIKMHNJLUFPMSANLKTJDCJWMWJUBSNFVXEPGSHZDPQVMBRFHWVXQJIKRRZDJOXBHESUBXWCNPNFOGTLAFYJLFVEGFOPAMYWEYBLCTAEAJJYDHMDKSPBUTUYNAVZHIPDMLVYQZRBSBCWVXRLKMRRIRGRICUNQQANDUVCWXEMHZFWBDUEAHTIKKQK");
    IMC::TypedEntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YCKEVPZHENAZTUHWOITSWPUDPUBRDVWLXIIJLBC");
    tmp_msg_0.type = 178U;
    tmp_msg_0.default_value.assign("LGEUUODFTQGLWRHXADRIQSALSKDOYHSVOTZWLZYXHARPJQTTWKNLNFIFKJEEUDOCAKFJWTWXNERKLRRXQHOENMGXCGUALYRQVIMTGSVCUPWHBQYUIIMLMGPOPXWZY");
    tmp_msg_0.units.assign("LOGCVELAHIZFZXNPDVCEWQKVCQFVKITAXBBHTEXRVFYKVGQIDINWKHRCZZOFCKAQBJCSUXQRBOLPSUIPQIJOBYICEPHRSLHGKVRNWPGYAUBLYXVWRMFUDTUQSFWFKAUJAMTZBIWKOLNJSEEXDUPKDRIZMN");
    tmp_msg_0.description.assign("DWLRBUSFQVDUOFLJTZYVEGCWQMMGKNAEETNZ");
    tmp_msg_0.values_list.assign("VVIMXYNFXGITCPJD");
    tmp_msg_0.min_value = 0.29766888996375607;
    tmp_msg_0.max_value = 0.5261117972243159;
    tmp_msg_0.list_min_size = 107U;
    tmp_msg_0.list_max_size = 115U;
    tmp_msg_0.visibility = 102U;
    tmp_msg_0.scope = 5U;
    msg.parameters.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.2722020408661686);
    msg.setSource(14984U);
    msg.setSourceEntity(99U);
    msg.setDestination(42361U);
    msg.setDestinationEntity(130U);
    msg.op = 37U;
    msg.request_id = 215959743U;
    msg.entity_name.assign("ASHHUFSHGVFBDETVQKLMKBGDONGVPZOLLZXYQGZTYUIARBXAMGMZSUGEMAAEBQEQQFKLIDRMTCDSNHOFCPYFNZBSCHUUJHLJOPVQGTMHRFQEZWNLPMTSXXPIOWINUMKSWFNUGSVJBMWUTBGICROWWKIQXHLHBVJROCTPDJYZVRYCDWCXIGNFBEJNNYKCEPPNPVMISLEJAYTEWQDZKLCYIAJRAUW");
    IMC::TypedEntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ATPWNLNLWTWDJJIKUUFOZNJKYYPPZJSCFTHOMIUAGCQDUFSEEVZPIWGLGWRIDKDISHGFPBXCHOWMZZBQCVLQFSYWGIDOBSYLASFXQLEAHZOCAUUSRLLABXMSEKRVHUANHYAYHHKEOTVKKDVXXKJZJETPENXPVZCJCYCYPDSDBUDMQSQNGMRBZXHGGTOMIVRH");
    tmp_msg_0.type = 55U;
    tmp_msg_0.default_value.assign("QFZRKYMFBLJMFGVD");
    tmp_msg_0.units.assign("YGDTZCPJVXUUBNGMLUORMCONECSMIMRZXQOASKDKHVFBLVPNEKKJFKEPAFSLHZUPCNFMTBOLDRSOFWVBKDFPCNJWGAXTWMRYILPYHQUHXTPWDWHSAZNSKFBHIIVUXREOYANNXKF");
    tmp_msg_0.description.assign("ODAAGHKQMCUYPZKMGWDYDRTRFVVBEUNKWMZRWSNTDHCWNEQNPIRUXLCTTXKHSLLZIPDSEMIPFYIUGXCXEZHKOKHHTGFUJZJYPSCCJOONFGRXPQMFAOJQMIBBHXTZMUSICDBEKWWZYAOAYTQHLUKUHSNYRKVSMVJBNWBIQETJRV");
    tmp_msg_0.values_list.assign("YRJQEHQCZVGOVXPUEZKTNMSMWCNLUTGBBUUTHDLTJJIDGEZHUERJHSWRUHQBGHLSNKGXCZEBLPFUMWKLFAXDWZNAMTYDAFKMXQODIYGIFDCTXIVYXBWZGSNKRRNLFZFXAIUXEEDZCJSEBCOVONAHEUK");
    tmp_msg_0.min_value = 0.8493289417309657;
    tmp_msg_0.max_value = 0.10196080791692974;
    tmp_msg_0.list_min_size = 5U;
    tmp_msg_0.list_max_size = 214U;
    IMC::ValuesIf tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.param.assign("EMGHSNOUTMFTEIZQXSEAAOMDWVPFC");
    tmp_tmp_msg_0_0.value.assign("AHXWDKLBYMSOWRGVRIHRESUWPMDVHBCMLUBITTZLSDDFURCEKPJRVOEJLPMKPNREXFKYFGQKNWMKCTPHFYESNOTWJEBXZBRNSQCFQJKJSEKLXIADPUGJNOYEOYIHTBUQBHXXYNFCPWSGCMVTWSSVARGQ");
    tmp_tmp_msg_0_0.values_list.assign("IQLUXHPCXVLIUCMPDVLBWYSIAWTIYABDKESAAXRHEEHASZIMPTOZCAS");
    tmp_msg_0.values_if_list.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.visibility = 161U;
    tmp_msg_0.scope = 48U;
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
    msg.setTimeStamp(0.7065979607432187);
    msg.setSource(41883U);
    msg.setSourceEntity(180U);
    msg.setDestination(15817U);
    msg.setDestinationEntity(10U);
    msg.op = 166U;
    msg.request_id = 1176752925U;
    msg.entity_name.assign("ODNGDYPCJLNLNYIUUPGRTNCYZLMBBIEKRIAXBHCQVIAPXVOWECKQTLBNGSCUZDVYFOSHMMUYFRAGFAFFTPVFZYOHCECLZGHEPBOVUFYKFWNKJQTOHXJUZMJQXKMFWZRMXVREILXNRIVGZJNETTYRMMSOSHXZWKHRCVMSBITJXILGSBGQSJZHESWTVTKWOYYRJNBBQMJLXSDNLHAEF");
    IMC::TypedEntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("CBEPUAGAZJEFOVHSEJVQFAKPDEQKOPXONGTXQTGYUXQSFCWFWPVCGKHOLWKSMTHZVIWKTMEZXTOUHNUCULBVAYELYQKPDFTAGMNGTPFMZVQROZLAGYKOJFNOQWSFDQOUWCYBMBRMRILIPHBWNYHZTIDECVJHRRDXANGBRBENXSBPHYIWGIRSVDLUA");
    tmp_msg_0.type = 107U;
    tmp_msg_0.default_value.assign("MNCAJFQVGUECOQBHREQKOXUHRNARIVUEXPWSVJKZRHOZONPZUKFCWLADRDAYDPSFHKBOZRCWMXJOTMAV");
    tmp_msg_0.units.assign("PXANPYFWVCOQIGOTMUJDENDWTDUQHOO");
    tmp_msg_0.description.assign("JLUVYHJSKZPTDCJDDYX");
    tmp_msg_0.values_list.assign("QYROKFGXUMSHDYKZZPWTTOETZSWKQYWZXXLBKFNDRNUAQHLGZTATPXHADLJKFWLJHRALMLMIUUBGTPFFNLDLQNGBBOYEQUKYEIYIIFIKDOMEPHBXWGOFFEMKPCNUBAUOGTSJDDSVAZTYKAOYCZNXCVMLCAXJGXKMISHBPCXSSNVRWAMRRGCQEHORTWPRYJHVZRBNDGYQWHFAQZSVVPFRTVJQQEJDVIMXMJWJENSGCPCIEJVPBC");
    tmp_msg_0.min_value = 0.3522787384032652;
    tmp_msg_0.max_value = 0.7142515739832609;
    tmp_msg_0.list_min_size = 117U;
    tmp_msg_0.list_max_size = 146U;
    IMC::ValuesIf tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.param.assign("XZATBRRWQXRZQNOZGNUIVPCGCWXNNHNATEPUKWJPQTLAWWAFUAEJDWBLOTRGCYMMYLLEFKTDOVUOUZKXFLTYHRMYOMIY");
    tmp_tmp_msg_0_0.value.assign("VJYBJJBUBIYMAPDDZMMZLLSHNCOQYGCCIWMCWGMZQDVXAQVKFFVHCEIOUHKCJQKBDVWFTSPLKTBNLUEXSYXUZZNVJENFNFFCKTXTPVPMYAHTAGTWTNXRRXMUGMJUXTELYGAKEIDDHSNFVLJBOQAXOLIEGLOKZONRFNGQXYZRBPSGKOWXULEMOYRJTYDEFJAHWIPUAZSRZWRWCKOHCVKNEYOHMIWPCHRUGZQJIABEDQTQIBRWSGSAVSPHUSF");
    tmp_tmp_msg_0_0.values_list.assign("VOFWTHEZKOTIVJQFLTFQ");
    tmp_msg_0.values_if_list.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.visibility = 116U;
    tmp_msg_0.scope = 196U;
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
    msg.setTimeStamp(0.38974100387001376);
    msg.setSource(13236U);
    msg.setSourceEntity(172U);
    msg.setDestination(63533U);
    msg.setDestinationEntity(35U);
    msg.name.assign("AKJQOIEKRPQALMMLXCVXKPKUSHBNNIYTIIRYXLGIXGBJUZDUMVBGAKEPFRGRPRUZLKAOYMKMVQTAJKOJTDAOAZWUHTFVNTWPCQICWBJUMFEYWWDRD");
    msg.type = 39U;
    msg.default_value.assign("AXZSYWMLSNPRCLPKSPZRQCIJDWRTQRV");
    msg.units.assign("RGIHKKFOJQCEZZXKTINIEIMSCZQHTKQHWYGLWNPJR");
    msg.description.assign("DOQZGGSKCIJUFXKVJRYGJNXWIZPAPYKAMBHNICNYBJSGCOEYLIDBHYXKNOURMOOACTZVMHYLIUSGDNDKJBGEJRFFNVENRQHUDPBLPSXFJZVADSLYXGNRMMZTEFFJTIDKFXMWHAEYPBZIRKSTWFIECLKGHVSJHOUMLQVUPXTGNQPAHRCDUZYSEUWGVDW");
    msg.values_list.assign("JYCXDKGAIXAQPBJTJXWFZDDZUTFELPFXKVJZAQRODLWUVCQXBBSCAMQIFHMCRBNLNTDESKIWYWIQXJDXHBCPTGDHTLVGBFERLCWXPUCEVMBKHIQBZSORPQRWMGJMWPEOWKOWJELNGVMUHUNAMLHLZJZIYNRAYURVYOQNFDRITTFYZLIAMYZ");
    msg.min_value = 0.33257252144103333;
    msg.max_value = 0.6251823378011995;
    msg.list_min_size = 65U;
    msg.list_max_size = 21U;
    msg.visibility = 25U;
    msg.scope = 233U;

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
    msg.setTimeStamp(0.7526827625894518);
    msg.setSource(49963U);
    msg.setSourceEntity(0U);
    msg.setDestination(10331U);
    msg.setDestinationEntity(76U);
    msg.name.assign("FFCVDWGGSXKLBXJSEOTYTGGHNMZTDAAJPCWQDSFPMSWJGUHQOGTMYZSOKMQLCMHJCXVK");
    msg.type = 142U;
    msg.default_value.assign("HKJRRXPMLFNZIFVAOHAOOFKHLOXQDHTQRXPJHKLOBECQZELEJC");
    msg.units.assign("DJPUQPUTLBGLCGPDSFORCWHCONSIIZPDXUQCRLZHFLVJIFSMLKIENBVORJWGASQGOPKFRTPMDQVKMZKJHEOHRYTSVTPOGNCOTFFUWVSREYEOLXUHXJEIKQECRWNCEUCKYFUTAQFMAJBIMUVND");
    msg.description.assign("AXUTUDPEWNCASYEPSYHFQLHLFWTGHTUFOCYLDWHTSHVBNTUJCRGPDRVEMNOJVOCXSCTRVWDDESGKPNAFWYKLPEAZJGRWUSVOGTMWFZTZEZKFXASMBYMBYIVNQQGXKUNQIULUYCLCHGEQOSYDDLDJKANKFKVBZQHHMZSJKDUELOJAFIIRILGTNEROHRUJRMAZWVADMHENPKPCWXYOQIFGPGYIQIOTBOXMWXAN");
    msg.values_list.assign("ATMLCQSOUVISLIKDYZCOTBIQCGUXOYYOVHCWCOHYHZJAQHEGTDISEHIOIHMGBMLZRAFBJRMDNHUPFDMKCHMIKMOSRTXMTLIKDUACPDAEGZREBLKGJAKHYDVZXKOFVFJQNDJBETCWKZRYKPEDUQZABTFFJRLPPQWNWAYVUVPEGSNWUXNTEOSUTBXYXGEVQWLJFEXNOSVUNGMQVQJZRFW");
    msg.min_value = 0.5239356412149277;
    msg.max_value = 0.4308634001036178;
    msg.list_min_size = 185U;
    msg.list_max_size = 91U;
    IMC::ValuesIf tmp_msg_0;
    tmp_msg_0.param.assign("EINIDBXFZSUNXPLCGATBANQAXUCNSEARSHMRBQSBFWGPAMRHSPMVTDSMKNOVKAANDYFOZTXUMGWFXHJTZOVDLHDZUPXQVGWHTK");
    tmp_msg_0.value.assign("VVDXSNLOJNOMAADTAD");
    tmp_msg_0.values_list.assign("XORJHWGCHDAJVD");
    msg.values_if_list.push_back(tmp_msg_0);
    msg.visibility = 111U;
    msg.scope = 152U;

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
    msg.setTimeStamp(0.7757129965484382);
    msg.setSource(13943U);
    msg.setSourceEntity(135U);
    msg.setDestination(15865U);
    msg.setDestinationEntity(203U);
    msg.name.assign("YAQHBVLZJQBWRVJZLVJYCZERALVCPOIJMUHPGAGLVCEQHSGSFAGEFHSYGQNGIUXWNCKBOTTPSHFTSRISLDOTXOUDXMIIKMBJWTWAXKTZNNLPYDYYHBKPCWEJROINZTNNSCVFHOPUPONLFAEYWODFJDUFBXEDYMEIUTDMQEVRXUZHZPLMKRFBAKDUPKMGICZQGKJVV");
    msg.type = 61U;
    msg.default_value.assign("SKPYUCCDDUWUSLZNDESALFTSBXNIKTAGWJLYVDXBTPMGYCJSMCURXQDQVYYOLOIHPOVKJEIRMOIYWHBTMAVOKZTLXEQRXSUDGWPNXLWHALGFARARAUBNBIZVNVLRUYZCZCCKRXWGEZRFQHBIUQHIVHGAJXTQJTESEFFCKWDWBQKWRUTJQZQSKTUMVYHIKLGEWRVHQPIDTPZSBYXGLBCFY");
    msg.units.assign("GRSUBFYTVFNXHERVNDFVJVLMXSWYWQZOYUCHBNKNXRYLDJMABBYNNBIILKZRJFXFTAKSOVAHPCDWFQSWLESRYDTQLWWCUHZZWKIZXVPSKOSUMTGLMNQCTXVEPCOPGTJJLGHSCQEUUMVBDUAMXSZGYIBLEODKFZTOEGODUQODIHNEJFWJQHUEEE");
    msg.description.assign("YASVUTCIBNJZCGEDJZIRWVSYTKZMGAIGHFOSNRFDMZPESLKQMPCVMRTCETOUDZXYAKQBXJFQUAGTBMZBWJHFQZKPIUFQHNLFOQMJGXANRRURWYEPLOWJDNVSPKZYNNSCMZNXCIYTFSGVDLWLDVQWPRFBLXYECYKEPHEVEIUWOWJUXHOBGVVB");
    msg.values_list.assign("MTNLXVISCTIJBBQWSIPPCHAZQDHVZWMIKEBGRMHEUVCOEUUZDJTYNRYKHCOAYWXOJYPZPLMILWSEZQHBIMASOKXJLSOJQVVLDLXVYWANEFNQKRTQRCJSVQGFAWQSGOYDUPNFJDMFCSUTCEWKGBHRHSAUVPTKMVOOOGACFXARDDRKYPHOMIGJZLDETZSXULAFNRBPDCZRXIKTYXJFEUFBKMGMNPBLUYVDWFJGQCZBWIIKT");
    msg.min_value = 0.5503421835722935;
    msg.max_value = 0.7250976880098231;
    msg.list_min_size = 197U;
    msg.list_max_size = 59U;
    msg.visibility = 241U;
    msg.scope = 87U;

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
    msg.setTimeStamp(0.36400020461383475);
    msg.setSource(14764U);
    msg.setSourceEntity(98U);
    msg.setDestination(49244U);
    msg.setDestinationEntity(200U);
    msg.param.assign("ZWXNROOFELVNOQGREJMLPLBNHLGEKYOEHTMRVXUFSKDFAXOXHHFLAEGNCXKFIMHYOVUFALYJZSZIDHUUVIDJBSTVZTCJJSNMGDYVKGXZDOWIPF");
    msg.value.assign("YLARYFBQDGRRCOIHNNNANLRLQVKHSDROMBQMVWSEIVLIPGYPCHNEXRJRAYEOOHCSHFPDXFTULNDNDSQPYXAWSGJGBIKESOSXWLICTZIQGCKDZGTALDZBWGGQAJJSECQKKWXPWKMNCTUXPFZFHIGJBXZDEMLOAEVYPDUUWEMRDPRKPVVUEIJOZVTMNFFKBITCYBBBUHPXWZLOFUMRFEQVUJYVTZSYHNVMBLWZAJTZFIXOAJCGXQYHUCJK");
    msg.values_list.assign("RGNKTWPYLGAHZQVTDXCJWWGIMBWMBUHGFXUZUNNYCMGJQFVSSXTSIBWQVFOQBFJDMFEJSHWZQEXXIKASYUDAOKKEQYVBZDMRKDSZPWKDVKVHUGLBCVPEYUIMKHRLSWZHBYRICFVWERTIBAYUHCISBFVJOTIULFRQWFNGGJJJCJQOZXEOYRMTZGHPLRCNAEATJPCIKPELHCOSPAXFPNMDOEVDNANLZOULK");

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
    msg.setTimeStamp(0.11810064553626032);
    msg.setSource(45414U);
    msg.setSourceEntity(144U);
    msg.setDestination(6453U);
    msg.setDestinationEntity(83U);
    msg.param.assign("BMPDADSEJKZQRACXRFFWSMXWRJYIWSGXGSEFIIDTZEKIKJM");
    msg.value.assign("MGTQDIYRZVWMXQDOLQKANBDPKNSDOFBEPIGYPAJVZKXWSIAYRQMANZTURKMCMHYMYTJALEMTCJJJEWUSCBCGFUFJLPOQHTYQTWUFMDSFQGVTVIZHOLJPQOOMINLHFOKZBHE");
    msg.values_list.assign("AAWIRJVLZGGRMJXBINSKNM");

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
    msg.setTimeStamp(0.5635043180317145);
    msg.setSource(13099U);
    msg.setSourceEntity(231U);
    msg.setDestination(28389U);
    msg.setDestinationEntity(52U);
    msg.param.assign("FUCVFHVZAQISRRCDMINJMHALMGZPUVBFBELHEJVFSBUQQCRGDTVAAYXUSSEHAGMPBNCZFGPLTZHYVWMPPCCTSOCASFCTEERNOTXYYHHQUXIRRROXSLJWBLWWDIPHAYWFILJGOYCNDKWTKSQNJOWSXOBZMMMJNRKBSEGXIBBZODUTKCQKBJQUJRWZMNPWLXMINIDFEJEHTEYLOIUPGFGXHULTTDZJPNG");
    msg.value.assign("HMGBHFLXIVVCRXPFSZHSYNTZPDFSOHUVGEYCDRHXJRLPNTBMUQCONCGJIQUHMETYXPAMGUTFKGLQWATCLZIEHALVBVAYWAUADOTLKSEGPFPINMSNEIIFYTEXURGBNMDFXORHPPPUOJXYQAMVSDWEBJVEGCFOIZIOGWJKGLPQBZUWDKKMUJLURHRSYQWRQDNVTVBDQWXDB");
    msg.values_list.assign("PWIGOREVFLRDQCNTDNVOBTWUPANZTYJKILTECOHDCAKDOLRBATWRJOEELESQHHEHOSORGMHRHKKYWXLKISXFBBBIDDDQJFKGFGXYTLJBVJHOASQPPHZSZUXFGUPYUNXIFGDASMVKZGJLUMFE");

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
    msg.setTimeStamp(0.6540250871596835);
    msg.setSource(16303U);
    msg.setSourceEntity(201U);
    msg.setDestination(56234U);
    msg.setDestinationEntity(173U);
    msg.op = 65U;
    msg.version.assign("ERYMHUKFMAOXNJQPSPZUKEFZVBOIRPQORUWPHHKEAQHESRUFKJECVYTSSNGMRDNMSOTFSMWYCWKUKBNCNDUEILLEBSLLLNFEGVNYEITBXBRXZLCAWGXGJXFJZPWKQGYTVPKDIZQHHMVKNTOJLIVLIAPTZMGUYHMGSMXATWVTNWFJZJCYGRXOMJWGIDOZJQQIDTRDSKBCOAHCZCFWYTIVPXVUCABQOPSLAXIHDDYEUHZJLYNUCDFBBROVP");
    msg.description.assign("OTKBWTOAYULJK");

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
    msg.setTimeStamp(0.48925954126146454);
    msg.setSource(52879U);
    msg.setSourceEntity(13U);
    msg.setDestination(43710U);
    msg.setDestinationEntity(190U);
    msg.op = 5U;
    msg.version.assign("YHAFGZXIXDKSFPTZVAHJMBGVNAKFLGDPWNUSHDRBRCCABBJPARQOEXSSUKQIMHFYNWZEPHNSPOUDORDJEHQVVLYPUOMIVRHCPJTNGVJZZMAGQGOJDIEQTZZYTLACEDGTWTRCQSLGOMFECGIJVNYBKXAEDWBWMFBNZBSXSLSTHVNXOMVHLWTNWYOIEIIWKUPNYMYUFFYRQ");
    msg.description.assign("EFIAOFGYVOMICZSRIBPCXDCNWINFBLHPYXVKXLMRQAZKLXQJCOBJHNWZRQTLXUTDONRLDKRHWTTTOBYRDCWTWDNZH");

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
    msg.setTimeStamp(0.7954658339132903);
    msg.setSource(51626U);
    msg.setSourceEntity(122U);
    msg.setDestination(9250U);
    msg.setDestinationEntity(64U);
    msg.op = 186U;
    msg.version.assign("BFMNERAIMQWTHVLFWPPORFZMNSPUHTKSFHUTKXPVRWSHREMGFJDVKUPPHGNOSZJDAXLBVYQQJHOFDKWSGRMXYIZLYCZEIKGOWMZCHGCYACIZQNUBLOCXJPVFQFAGTVTYZCAYDWKBNSENW");
    msg.description.assign("VMTTFGETGIAPNXKLRIOWLQAMMGJWZKIMOOFCKHATEDNRFWJFPBEMSHEYJQLUKILVSOTHPDGBRHNVJASWXKDHSAJKGCYBFPSUDUOLWUAIDQHTXMFKGGUUZEDBECYNYYLFYJWZCXXLHOBLHAVAVPONREAJPPINBVZHNVSCMZOVBQDTCNMRQQLSRWMJ");

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
    msg.setTimeStamp(0.12699794810873655);
    msg.setSource(3500U);
    msg.setSourceEntity(72U);
    msg.setDestination(30264U);
    msg.setDestinationEntity(176U);
    msg.value = 0.5995618551284712;

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
    msg.setTimeStamp(0.3691308912684128);
    msg.setSource(1445U);
    msg.setSourceEntity(135U);
    msg.setDestination(58790U);
    msg.setDestinationEntity(41U);
    msg.value = 0.5877386718043673;

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
    msg.setTimeStamp(0.4851405850132401);
    msg.setSource(20137U);
    msg.setSourceEntity(185U);
    msg.setDestination(65518U);
    msg.setDestinationEntity(128U);
    msg.value = 0.4830293887660553;

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

  {
    IMC::HTTPAction msg;
    msg.setTimeStamp(0.9448084890804463);
    msg.setSource(32142U);
    msg.setSourceEntity(158U);
    msg.setDestination(57152U);
    msg.setDestinationEntity(168U);
    msg.id = 469777504U;
    msg.op = 73U;
    const signed char tmp_msg_0[] = {23, -60, 75, -39, -101, 20, 0, -7, -62, -77, -20, -43, 38, 40, -33, 60, -19, -113, -71, 105, -56, 113, 43, -120, 21, -99, -99, 76, 63, -35, 4, -51, -125, 57, -1, 42, -92, 119, -109, -5, -78, -24, -97, 87, -70, -64, 66, -8, -94, -72, -103, -19, -91, -73, -119, -43, 61, 63, 74, -3, 54, 7, 104, -48, -49, 20, -83, -105, -41, -1, 126, 5, -92, -108, -118, 47, 74, -120, 92, 28, -85, 101, 65, 7, -78, -123, 22, 109, -50, 54, -119, -94, -25, 59, -46, 45, 105, -18, -62, 14, -57, 105, 90, 56, -87, -81, -27, 34, 21, 51, 20, -108, -60, 8, 19, 114, 29, 23, 18, -47, -97, 73, -2, -6, -36, -114, 94, 94, 12, -119, 100, 73, -68, 124, -24, -81, -23, -108, -88, -76, 13, 31, -84, -82, 116, 8, -83, 13, 57, 88, -11, 31, 123, 109, 110, 13, -20, 116, 10, -79, -42, 100, 60, 19, 31, 94, -37, -63, 92, 25, -53, -87, -1, 9, -105, 35, 61, 27, -57, 108, -114, 34, -32, -78, -59, 56, -52, 98, -8, 63, -46, 56, -84, 62, -32, -78, -98, 109, 80, -42, 30, -71, -124, -33, -91, -63, -50, -122, 107, -15, -44, 35, -15, 37, -92, -127, 110, -115, -94, 115, 36, 3, -51, 33, 36, -84, -89, -107, -56, -37, 8, 19, 111, -7, -72, 22, 29, 63, 40, -80, 44};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HTTPAction #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HTTPAction msg;
    msg.setTimeStamp(0.464370243969751);
    msg.setSource(5037U);
    msg.setSourceEntity(69U);
    msg.setDestination(20928U);
    msg.setDestinationEntity(51U);
    msg.id = 1491773024U;
    msg.op = 242U;
    const signed char tmp_msg_0[] = {109, 89, -128, -61, 118, 12, -94, -17, 46, -107, -54, 13, 109, 16, -65, 8, 77, 40, 38, -81, 66, 111, 12, -88, 67, 9, -80, 101, -37, -58, -125, -53, -12, -124, -67, 24};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HTTPAction #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HTTPAction msg;
    msg.setTimeStamp(0.7222957078958315);
    msg.setSource(42106U);
    msg.setSourceEntity(53U);
    msg.setDestination(17939U);
    msg.setDestinationEntity(136U);
    msg.id = 3472289930U;
    msg.op = 58U;
    const signed char tmp_msg_0[] = {-54, 101, 125, -21, -119, 60, -89, -4, 107, 71, -116, -86, 47, -34, 70, -55, 93, 28, 69, 110, 44, 90, -92, 119, 123, -25, -99, -25, -103, -122, 20, 109, -43, 27, -95, -124, -87, 93, 116, -71, 7, 86, 110, 37, -74, -6, -116, -70, -125, 67, -119, 1, 0, 58, -50, 55, 62, 111, 120, -110, -63, 35, 71, 26, 102, -32, -86, 104, -100, -38, 20, 20, 12, 73, -46, 78, 113, 44, 66, -64, 6, 112, -62, 120, -97, 63, 77, -96, 41, 96, -5, -73, 105, -80, 24, 50, -49, -109, 30, 67, 101, -88, -75};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HTTPAction #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::I2CAction msg;
    msg.setTimeStamp(0.253219044916417);
    msg.setSource(16177U);
    msg.setSourceEntity(87U);
    msg.setDestination(61890U);
    msg.setDestinationEntity(94U);
    msg.id = 4259352037U;
    msg.address = 9845U;
    msg.length = 25922U;
    msg.op = 103U;
    const signed char tmp_msg_0[] = {-66, 114, 97, -111, 10, 25, -21, 84, -3, 66, 113, -100, -31, -5, -54, 91, 13, -4, 64, -5, 45, 59, -74, 119, -11, 7, 36, -35, -67, -24, 53, 66, -31, 68, 42, 75, 98, 76, 103, -82, -113, -17, 47, 114, 20, 100, -43, 87, -55, 12, 35, 84, 73, 14, 95, -101, 40, 61, 80, 7, 119, 93, -60, 76, -62, 22, 19, 42, 15, 61, 82, -42, -104, 75, 1, -127, -46, 94, 30, 19, 119, -8, -9, -80, -49, -79, -123, -119, -4, -28, 27, -67, -62, 15, -106, -117, -102, -53, -104, -28, -17, 8, -124, 101, -76, 21, -36, 102, 53, 73, -51, -27, 80, 90, -34, 25, -68, -98, 107, -113, 37, -123, 5, -89, -30, 79, -82, 23, 23, -75, -4, 35, 39, 82, 124, 46, 30, -100, 27, 4, -96, -100, -18, 56, 47, 71, -39, -22, 75, -72, -49, -34, -41, -4, 1, 25, 56, 12, 96, -38, -10, -83, 21, 80, 36, -101, -79};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.status = 83U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("I2CAction #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::I2CAction msg;
    msg.setTimeStamp(0.44865371102331597);
    msg.setSource(117U);
    msg.setSourceEntity(44U);
    msg.setDestination(11404U);
    msg.setDestinationEntity(197U);
    msg.id = 2848142761U;
    msg.address = 106U;
    msg.length = 40553U;
    msg.op = 174U;
    const signed char tmp_msg_0[] = {-45, -92, -97, 82, -18, 105, -60, 67, -82, -29, 74, -20, -13, -10, -4, 82, -100, 100, 56, 65, 52, -99, 91, 111, -108, 63, -32, -18, 40, -29, -99, 123, 27, -16, -35, -59, 82, 44, -28, -45, 61, 126, 63, 25, -103, -123, -35, 108, -9, 108, -47, -59, 88, 83, -34, 65, -117, -98, 97, 36, -10, -20, 63, -66, 78, -48, 43, 53, -96, 62, -83, 110, 42, -100, 36, -74, 27, 103, 29, 86, -33, 92, -104, -27, 17, 100, -83, 72, -67, -96, -115, 67, 116, -23, 65, -63, 59, -95, 59, 75, 12, -35, -114, 61, 94, 125, -87};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.status = 129U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("I2CAction #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::I2CAction msg;
    msg.setTimeStamp(0.12936280804054634);
    msg.setSource(17587U);
    msg.setSourceEntity(24U);
    msg.setDestination(6878U);
    msg.setDestinationEntity(69U);
    msg.id = 1932560547U;
    msg.address = 46022U;
    msg.length = 5878U;
    msg.op = 8U;
    const signed char tmp_msg_0[] = {56, -24, 8, -2, 98, 5, -124, 81, 19, -18, -45, 120, 79, -57, 126, 41, 122, 84, -57, 96, -114, 77, -7, -10, -96, 37, -109, -97, -37, -83, -71, 57, -36, -58, 47, -65, -100, -128, -35, 13, 47, -95, -68, -1, -50, -112, -6, -9, 112, 69, -101, 96, -87, -128, -64, -54, -103, -28, 81, -116, 35, -1, 40, -112, 12, -61, 101, -119, 48, -21, -37, 106, 95, 43, 119, -112, -72, 115, -107, 99, 5, 103, 92, -100, 18, -54, -100, -85, -93, 67, 123, -109, 72, -93, -14, -64, -65, -111, -117, 66, 35, 40, -13, 54, -82, -53, -108, -73, 92, -126, -118, -42, -44, -111, -123, 110, 62, 113, 23, 111, -69, -100, -37, -127, -68, 120, -96, 26, -2, 87, 123, -76, 125, -114, -56, -76, -16, 43, -63, 112, 86, 33, -14, -51, -26, -67, -34, 124, -15, 64, 89, 31, -61, 126, 2, -20, 70, 7, 40, 59, -116, 22, -44, -42, -52, -48, -49, -47, -65, -56, -61, 121, 21, -8, -34, -23, -113, -38, 51, 111, 2, 90, -67, 64, -100, 36, -67, 99, -59, 84, -17, -13, -75, -46, 52, 76, -124, 20, -105, -102, -86, -91, 108, 98, -30, 20, -96, -115, -49, -34, 106, -10, 18, -35, -124, -71, 13, 59, 4, -5, 96, 83, 66, 108, -75, 0, -67, 95, -127, -3, -20, -118, -47, 82, -116, -127, 19, -74, -108, 0, -126, 12, -112, -55, 60, -80, -107, -116, 118, -46};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    msg.status = 233U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("I2CAction #2", msg == *msg_d);
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
