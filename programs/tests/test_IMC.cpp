//***************************************************************************
// Copyright 2007-2026 Universidade do Porto - Faculdade de Engenharia      *
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
// IMC XML MD5: a3dfd3c16ef86b9ba7c341427cc2ee19                            *
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
    msg.setTimeStamp(0.752016200042511);
    msg.setSource(58182U);
    msg.setSourceEntity(185U);
    msg.setDestination(64643U);
    msg.setDestinationEntity(77U);
    msg.state = 4U;
    msg.flags = 18U;
    msg.description.assign("NXAAVEFBRTHSWZWTLRJPIQSSCEWAJJZRSTUNVOFWRJPGVZAOJGDWWKHMFGQVJBRSVUPJBEXJMDLQONNFKKKTCLIYZGCKPIEVBCIXHSQMMFAUOXTMOKPTQRXGMAZUWNPUXMSHQZDDWFDKCDDOSBYCEEUVI");

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
    msg.setTimeStamp(0.6113943740254695);
    msg.setSource(51201U);
    msg.setSourceEntity(22U);
    msg.setDestination(929U);
    msg.setDestinationEntity(234U);
    msg.state = 229U;
    msg.flags = 80U;
    msg.description.assign("GUUFALFQPFIXWZHSKKMUYTXMLDPGWGRONZSJKCGSRTSMLYOGFQHESTTJGAPTPOVUJQEXYVWJGBFBGMIAJNHQKZACPOTRZFDLZHBEYKWYHWNYTATXYKMNOFJOMJVQPDCJKNCYCW");

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
    msg.setTimeStamp(0.5063566887850018);
    msg.setSource(9712U);
    msg.setSourceEntity(93U);
    msg.setDestination(47046U);
    msg.setDestinationEntity(103U);
    msg.state = 31U;
    msg.flags = 117U;
    msg.description.assign("XPMEYQOXWCHLFUJAVTINQSXODFBKGPKHMZJFEEHHUAXDRKBDRBGXQUAKYZENCYIBKUPRVNARSAKLGMYJLJDWXCNBNGEZIRGNFCUYJPTQSILWTMFKUPISBCPYGDVOAWAEFBQZRIDOUVVSZWIHQKUXSCJBLNYTMGTMOTTOVJJOKJDYGPMHOBRMTDWCAYNOCCQQRAWBTZPWLIQDAMHKXIVEXRGVTXMSRLEZSZFCFFNOLQGPHVFLEHZL");

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
    msg.setTimeStamp(0.18471550013919336);
    msg.setSource(49493U);
    msg.setSourceEntity(80U);
    msg.setDestination(64589U);
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
    msg.setTimeStamp(0.37884641187405155);
    msg.setSource(2103U);
    msg.setSourceEntity(24U);
    msg.setDestination(55049U);
    msg.setDestinationEntity(35U);

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
    msg.setTimeStamp(0.22129059458795708);
    msg.setSource(46414U);
    msg.setSourceEntity(179U);
    msg.setDestination(8955U);
    msg.setDestinationEntity(242U);

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
    msg.setTimeStamp(0.9754116250569558);
    msg.setSource(52461U);
    msg.setSourceEntity(124U);
    msg.setDestination(48912U);
    msg.setDestinationEntity(212U);
    msg.id = 229U;
    msg.label.assign("XIRQDRWWVXUORIMLEQPC");
    msg.component.assign("UNYAGRWNQRLCODNNAUSYSPGEPHMYZPDLZEQVSEPAQJGTJOMFTZOPILTLFYKGOWWPQ");
    msg.act_time = 61843U;
    msg.deact_time = 42034U;

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
    msg.setTimeStamp(0.13595648403129512);
    msg.setSource(32985U);
    msg.setSourceEntity(175U);
    msg.setDestination(18241U);
    msg.setDestinationEntity(74U);
    msg.id = 165U;
    msg.label.assign("EIFQNDGSXWXDBGKBCTXDKE");
    msg.component.assign("JCDVXCBADAJLVDKBDYWXTPMFMILOPSMBRTDQKXPUYUFSKBPVJYDUOVPLXVKZHNTEDNKEXCRYOEHJSUGIQQIDZGAUHRWCMNLWUWKLFCNXRYCGFOLUYCHVLMTPKTRSYQITOXHJHWWVNQ");
    msg.act_time = 34719U;
    msg.deact_time = 31242U;

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
    msg.setTimeStamp(0.8058009349872151);
    msg.setSource(6624U);
    msg.setSourceEntity(13U);
    msg.setDestination(37519U);
    msg.setDestinationEntity(20U);
    msg.id = 211U;
    msg.label.assign("AQVDDTXCSMZSHFDPWRCTZEMU");
    msg.component.assign("CNEPOORVOIEGJZBOFVPAY");
    msg.act_time = 381U;
    msg.deact_time = 56277U;

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
    msg.setTimeStamp(0.027856289497072084);
    msg.setSource(22223U);
    msg.setSourceEntity(61U);
    msg.setDestination(17035U);
    msg.setDestinationEntity(235U);
    msg.id = 33U;

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
    msg.setTimeStamp(0.8565538357318129);
    msg.setSource(3665U);
    msg.setSourceEntity(64U);
    msg.setDestination(3539U);
    msg.setDestinationEntity(23U);
    msg.id = 182U;

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
    msg.setTimeStamp(0.5823329832029897);
    msg.setSource(20620U);
    msg.setSourceEntity(50U);
    msg.setDestination(47339U);
    msg.setDestinationEntity(107U);
    msg.id = 116U;

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
    msg.setTimeStamp(0.5823350019769239);
    msg.setSource(3712U);
    msg.setSourceEntity(77U);
    msg.setDestination(5220U);
    msg.setDestinationEntity(214U);
    msg.op = 67U;
    msg.list.assign("OUYDQFSWSBZSGRCZTDQCXIIPQYRHBPBUIUATKNVAHXFONSCDXXMVBLDLYOTXUNLE");

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
    msg.setTimeStamp(0.19329145545777515);
    msg.setSource(52072U);
    msg.setSourceEntity(165U);
    msg.setDestination(62665U);
    msg.setDestinationEntity(118U);
    msg.op = 81U;
    msg.list.assign("AHRJHJDYQHQQVKSRQDUNMEEZXAKQZBWHIEPTWPHKSVTODXMBIFAXAWOYZBCLGKRRGSOKIIUBVTVLZRNRHEJTFLBJZZLLRNWGXJGBDTMGVKCYJCJUSYEJFQUDFIEQAXOFFFWWIZWHVXCPYNAWOAKABCUVSHUVGEOPZMRLMPXCFWSUUOSUHYKCDZOYNVXOPQMQJGASKPNMNNVO");

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
    msg.setTimeStamp(0.6823318988603182);
    msg.setSource(7063U);
    msg.setSourceEntity(171U);
    msg.setDestination(38681U);
    msg.setDestinationEntity(42U);
    msg.op = 151U;
    msg.list.assign("HPPSMZKYQFJYTGSDISCZINZEGJLNKOPTPQRSFUKHEBEPIQXGNTWJSURCPLKXOXMXUQTNOZCHDJMCSMJAWOVJFKRUZOTVOTSYWTZSTBFNTHABYBJTVRLGRNWOXWCELHBLHNZAJMXRJGLDALBCKGFQQXWIYZLCFDDPYEVXMJIBUVCEYASYRRDNEEFAMVFKDUOGRHNHFYKOLVSQVUWRQFGEDPEIMVHCCVAZUANQ");

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
    msg.setTimeStamp(0.6607055254839306);
    msg.setSource(22581U);
    msg.setSourceEntity(65U);
    msg.setDestination(25929U);
    msg.setDestinationEntity(8U);
    msg.value = 215U;

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
    msg.setTimeStamp(0.45371353612398857);
    msg.setSource(60643U);
    msg.setSourceEntity(92U);
    msg.setDestination(36198U);
    msg.setDestinationEntity(179U);
    msg.value = 127U;

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
    msg.setTimeStamp(0.041637417945487254);
    msg.setSource(61710U);
    msg.setSourceEntity(200U);
    msg.setDestination(4878U);
    msg.setDestinationEntity(2U);
    msg.value = 225U;

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
    msg.setTimeStamp(0.43641394210133344);
    msg.setSource(27169U);
    msg.setSourceEntity(210U);
    msg.setDestination(1812U);
    msg.setDestinationEntity(14U);
    msg.consumer.assign("EGQWVCRQHNODFGOMMABHEBRELXSQZFHEDZDPQXFNFTODZQKIOVRYVZHWOKIROXCRFJWUDDJGQNWJMDDLTBUBPCPLPXXKVPSSZSHNGWZANCOQPYKFGFZSRFMNVYTLBKLKMPJWEPINJHVDEYSGLQZAJJCXOMXBXIQMTEGPUBY");
    msg.message_id = 63613U;

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
    msg.setTimeStamp(0.6665885092692801);
    msg.setSource(52708U);
    msg.setSourceEntity(237U);
    msg.setDestination(37768U);
    msg.setDestinationEntity(3U);
    msg.consumer.assign("ZKQJNKRPNTKDBZIAYIVUNWBAJJPEFHFEMRRIBIYSKDOCHAPPZESVDSYUTCOLEKZYLWQXOURXMVLEUSSPQPAJHDSKOFTMIZBTMBVZHOJECWWNATYGVJHQTGYXUCJZWLAMKBGSBQFLNXLWOHAKFKPUZXQFVUFIICVSTEPOVBFZOGDCLSDHYRYJVNGOLSNMAQNGUHWDKNJVTYDCEITMDCXLHZUXBWXRDMRXQQWGXGMIJCGOMALIRTBFNQHPPY");
    msg.message_id = 36988U;

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
    msg.setTimeStamp(0.11703916747854304);
    msg.setSource(46731U);
    msg.setSourceEntity(114U);
    msg.setDestination(37797U);
    msg.setDestinationEntity(156U);
    msg.consumer.assign("SLDKKNIMGUJKHSPEWQBGPFDLTJSWRGMVEJPMZMYTDYUBVQIFLBXVUKSDRZLXNRPJFLFKKMOGRNQWOLBNOYAFMYEKFCNSIWDDTUJRQASCECWBAJOUXSXMLURKAYFUECYMAEVOVHRFIPERQIKEBTRYFZWCTACQHTPWFMQHYJBWHVCLWNAG");
    msg.message_id = 52856U;

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
    msg.setTimeStamp(0.2606978179712858);
    msg.setSource(39534U);
    msg.setSourceEntity(126U);
    msg.setDestination(22031U);
    msg.setDestinationEntity(130U);
    msg.type = 10U;

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
    msg.setTimeStamp(0.38758367039978947);
    msg.setSource(50133U);
    msg.setSourceEntity(121U);
    msg.setDestination(13528U);
    msg.setDestinationEntity(183U);
    msg.type = 51U;

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
    msg.setTimeStamp(0.146853984909042);
    msg.setSource(19315U);
    msg.setSourceEntity(164U);
    msg.setDestination(42760U);
    msg.setDestinationEntity(99U);
    msg.type = 207U;

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
    msg.setTimeStamp(0.6354816206112546);
    msg.setSource(27047U);
    msg.setSourceEntity(132U);
    msg.setDestination(2917U);
    msg.setDestinationEntity(1U);
    msg.op = 186U;

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
    msg.setTimeStamp(0.19896471017329043);
    msg.setSource(55005U);
    msg.setSourceEntity(45U);
    msg.setDestination(16500U);
    msg.setDestinationEntity(31U);
    msg.op = 65U;

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
    msg.setTimeStamp(0.0494019886116569);
    msg.setSource(48146U);
    msg.setSourceEntity(29U);
    msg.setDestination(26624U);
    msg.setDestinationEntity(185U);
    msg.op = 212U;

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
    msg.setTimeStamp(0.145917905150867);
    msg.setSource(28637U);
    msg.setSourceEntity(124U);
    msg.setDestination(38114U);
    msg.setDestinationEntity(69U);
    msg.total_steps = 11U;
    msg.step_number = 193U;
    msg.step.assign("MBHNUTARGQGDNOOWLZDCOJCPSWMKBRPMYHTRZXCFVIBIZWWUKNAVHVDE");
    msg.flags = 96U;

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
    msg.setTimeStamp(0.11719777274642551);
    msg.setSource(59832U);
    msg.setSourceEntity(242U);
    msg.setDestination(56767U);
    msg.setDestinationEntity(93U);
    msg.total_steps = 88U;
    msg.step_number = 120U;
    msg.step.assign("ZMSKGXTCJZMSDIUGDYYRBDWYTPBJBFBQWYWLXVFLHZLBPWEZXAQJNEONAUKCTKIOBKXYRALKFUXETJBKTYVGYCPGJMVMWEYFNSMWPKLQAZPHTVNPIMQGQCVDLOIAKJ");
    msg.flags = 206U;

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
    msg.setTimeStamp(0.3429337905940326);
    msg.setSource(44158U);
    msg.setSourceEntity(111U);
    msg.setDestination(52088U);
    msg.setDestinationEntity(112U);
    msg.total_steps = 189U;
    msg.step_number = 55U;
    msg.step.assign("RNKXAZUABQYFBSTPJUNRWILTFMAOMHI");
    msg.flags = 181U;

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
    msg.setTimeStamp(0.9451100229211474);
    msg.setSource(1894U);
    msg.setSourceEntity(19U);
    msg.setDestination(50868U);
    msg.setDestinationEntity(168U);
    msg.state = 191U;
    msg.error.assign("QSRLBQTILFUPRFZLXKNDHKPEBDBMHNNUFTFEOJSDINROYIMWPAXPQZHJVLME");

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
    msg.setTimeStamp(0.8783680151372466);
    msg.setSource(57581U);
    msg.setSourceEntity(86U);
    msg.setDestination(56017U);
    msg.setDestinationEntity(9U);
    msg.state = 82U;
    msg.error.assign("DOQZFKASYCDGFZBJMVJXOCMAIUDWNGLUSUWIPTUJUIHTQEYJCLBCRUSEIHTYLHNCASHSTGGEDBXQXLLMQPPAARNNRBYGSXKHDNFOCOTMMJOKUOQXNANYTOBYIEZXURCXXVUYJKZFOQAPHNPJBKIILNPXMVFSGNWVTRTHGGRPBTKEDFAREBZJDFFKLWPE");

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
    msg.setTimeStamp(0.2019849794657077);
    msg.setSource(8227U);
    msg.setSourceEntity(143U);
    msg.setDestination(30329U);
    msg.setDestinationEntity(22U);
    msg.state = 20U;
    msg.error.assign("HTZNZAABDIZSMKIGSCGMIQARSFEURLFYACZYXUMKHSATEGUKPSRYRMOHVEPQOHRCQVOBSLNTBVTBCPDVCXUJZWDWIKIFBEOEUUXGKMJIFXXGZJRXNNLTVOLFCMHBODFJWMNDWFQDVMEDLVEYWUOEABHPWJJLYSBHTAZLBOQPWJZKPGYSQDWNNNCFFVHTPXAKIGTQRGJMRICHYISAPZXBLNAUQQG");

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
    msg.setTimeStamp(0.9144673634701763);
    msg.setSource(55249U);
    msg.setSourceEntity(128U);
    msg.setDestination(31247U);
    msg.setDestinationEntity(188U);

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
    msg.setTimeStamp(0.030267980298499086);
    msg.setSource(14885U);
    msg.setSourceEntity(190U);
    msg.setDestination(4878U);
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
    msg.setTimeStamp(0.6976101658695811);
    msg.setSource(35318U);
    msg.setSourceEntity(73U);
    msg.setDestination(42264U);
    msg.setDestinationEntity(167U);

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
    msg.setTimeStamp(0.24032916381321068);
    msg.setSource(21304U);
    msg.setSourceEntity(25U);
    msg.setDestination(39534U);
    msg.setDestinationEntity(90U);
    msg.op = 248U;
    msg.speed_min = 0.3336504853301707;
    msg.speed_max = 0.09854590797933827;
    msg.long_accel = 0.42435903590404456;
    msg.alt_max_msl = 0.2406305067376272;
    msg.dive_fraction_max = 0.793348983528198;
    msg.climb_fraction_max = 0.7264421684479976;
    msg.bank_max = 0.05440921926108844;
    msg.p_max = 0.8903108707739792;
    msg.pitch_min = 0.36304206910608794;
    msg.pitch_max = 0.31265712356932296;
    msg.q_max = 0.4381398635081555;
    msg.g_min = 0.2476636608774111;
    msg.g_max = 0.5035202566835453;
    msg.g_lat_max = 0.20463805446070582;
    msg.rpm_min = 0.5536200858328528;
    msg.rpm_max = 0.44779672195745046;
    msg.rpm_rate_max = 0.12856882022302707;

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
    msg.setTimeStamp(0.6579047151631053);
    msg.setSource(49803U);
    msg.setSourceEntity(99U);
    msg.setDestination(4315U);
    msg.setDestinationEntity(161U);
    msg.op = 130U;
    msg.speed_min = 0.3323530264108078;
    msg.speed_max = 0.821615759575998;
    msg.long_accel = 0.12305475393197862;
    msg.alt_max_msl = 0.20990180282753768;
    msg.dive_fraction_max = 0.954737183100751;
    msg.climb_fraction_max = 0.8983000979389296;
    msg.bank_max = 0.5544652874187911;
    msg.p_max = 0.1768241387308721;
    msg.pitch_min = 0.08091774065448643;
    msg.pitch_max = 0.2116527288808373;
    msg.q_max = 0.3820769904544463;
    msg.g_min = 0.10905477112121997;
    msg.g_max = 0.34459831378713246;
    msg.g_lat_max = 0.8160181093661789;
    msg.rpm_min = 0.907179554012313;
    msg.rpm_max = 0.49624356277148396;
    msg.rpm_rate_max = 0.8729334706965118;

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
    msg.setTimeStamp(0.336043004491138);
    msg.setSource(50916U);
    msg.setSourceEntity(76U);
    msg.setDestination(19685U);
    msg.setDestinationEntity(229U);
    msg.op = 12U;
    msg.speed_min = 0.2880003301188725;
    msg.speed_max = 0.14497746471617745;
    msg.long_accel = 0.015068637464538348;
    msg.alt_max_msl = 0.725337950625787;
    msg.dive_fraction_max = 0.307165540914064;
    msg.climb_fraction_max = 0.9967699896710142;
    msg.bank_max = 0.4927164923099143;
    msg.p_max = 0.6081178391357724;
    msg.pitch_min = 0.6977378202700322;
    msg.pitch_max = 0.17354564674937434;
    msg.q_max = 0.8847574938211624;
    msg.g_min = 0.6049745559239627;
    msg.g_max = 0.6780391079056204;
    msg.g_lat_max = 0.36156949952142503;
    msg.rpm_min = 0.5854236956041975;
    msg.rpm_max = 0.8690836212553622;
    msg.rpm_rate_max = 0.5744474492521414;

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
    msg.setTimeStamp(0.17689873745684837);
    msg.setSource(15391U);
    msg.setSourceEntity(30U);
    msg.setDestination(51229U);
    msg.setDestinationEntity(240U);

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
    msg.setTimeStamp(0.2348681126426273);
    msg.setSource(43630U);
    msg.setSourceEntity(153U);
    msg.setDestination(328U);
    msg.setDestinationEntity(63U);

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
    msg.setTimeStamp(0.30101664256867566);
    msg.setSource(25188U);
    msg.setSourceEntity(187U);
    msg.setDestination(54031U);
    msg.setDestinationEntity(151U);

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
    msg.setTimeStamp(0.7966053879721108);
    msg.setSource(4700U);
    msg.setSourceEntity(176U);
    msg.setDestination(59406U);
    msg.setDestinationEntity(66U);
    msg.value = 0.3590405061966241;

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
    msg.setTimeStamp(0.5636263214983573);
    msg.setSource(42984U);
    msg.setSourceEntity(87U);
    msg.setDestination(37728U);
    msg.setDestinationEntity(221U);
    msg.value = 0.9300873948115681;

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
    msg.setTimeStamp(0.32540568382978985);
    msg.setSource(52666U);
    msg.setSourceEntity(243U);
    msg.setDestination(59412U);
    msg.setDestinationEntity(9U);
    msg.value = 0.6941885382902456;

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
    msg.setTimeStamp(0.8375541376643015);
    msg.setSource(47840U);
    msg.setSourceEntity(214U);
    msg.setDestination(46373U);
    msg.setDestinationEntity(151U);
    msg.lat = 0.1497297113903504;
    msg.lon = 0.4182454517941262;
    msg.height = 0.7548611349654052;
    msg.x = 0.0006764811922778113;
    msg.y = 0.7722878238940836;
    msg.z = 0.8563967671935275;
    msg.phi = 0.8299867611883702;
    msg.theta = 0.13103277435046645;
    msg.psi = 0.11618897070982082;
    msg.u = 0.6861782126047496;
    msg.v = 0.4945431536946857;
    msg.w = 0.31933125430471077;
    msg.p = 0.18048950766117478;
    msg.q = 0.1815110644654231;
    msg.r = 0.8338574325659567;
    msg.svx = 0.6533291484429097;
    msg.svy = 0.31334741977536984;
    msg.svz = 0.02891118232727008;

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
    msg.setTimeStamp(0.36558887386091554);
    msg.setSource(25091U);
    msg.setSourceEntity(107U);
    msg.setDestination(21615U);
    msg.setDestinationEntity(216U);
    msg.lat = 0.2594039929401821;
    msg.lon = 0.2223935328702188;
    msg.height = 0.2207706024037478;
    msg.x = 0.29271937109421853;
    msg.y = 0.6138476206005338;
    msg.z = 0.9793620212038817;
    msg.phi = 0.14302746105128095;
    msg.theta = 0.9033930752064124;
    msg.psi = 0.8081738057267678;
    msg.u = 0.633398607898108;
    msg.v = 0.6367810074030231;
    msg.w = 0.39342535845082505;
    msg.p = 0.27734361878346525;
    msg.q = 0.5512280797797465;
    msg.r = 0.052059632777526677;
    msg.svx = 0.9547441007464859;
    msg.svy = 0.16338863786702373;
    msg.svz = 0.5051533861417052;

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
    msg.setTimeStamp(0.2883727453117919);
    msg.setSource(43145U);
    msg.setSourceEntity(30U);
    msg.setDestination(37768U);
    msg.setDestinationEntity(154U);
    msg.lat = 0.6856036824558105;
    msg.lon = 0.6892543166868166;
    msg.height = 0.08898617765791417;
    msg.x = 0.04431994145544271;
    msg.y = 0.22966132165852204;
    msg.z = 0.7494895736745002;
    msg.phi = 0.7024528851793439;
    msg.theta = 0.18307700776196179;
    msg.psi = 0.16420105004501417;
    msg.u = 0.7130386227019897;
    msg.v = 0.23138674603145737;
    msg.w = 0.29243110517736715;
    msg.p = 0.7742747594872346;
    msg.q = 0.0706125296111233;
    msg.r = 0.7143390740018428;
    msg.svx = 0.3424066056639453;
    msg.svy = 0.08917366981684527;
    msg.svz = 0.48674789018041353;

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
    msg.setTimeStamp(0.11141472168941668);
    msg.setSource(31189U);
    msg.setSourceEntity(181U);
    msg.setDestination(27651U);
    msg.setDestinationEntity(95U);
    msg.op = 40U;
    msg.entities.assign("DFMYXXWXHCOTTZXUHYVBIIZBWROWPUQVSRMFWYMTOPVSUVSLFJMIOVCATFJNJJDUAIEQAVKRELCMQHEUMGCZJYFGNSNDOOFRDMFSBQYRCTMYQCAAWIEWTAASKUSUGRWVHDRLFLLJURPUOYKZPPGBWGZNEKUWXPAB");

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
    msg.setTimeStamp(0.28435420526116517);
    msg.setSource(8524U);
    msg.setSourceEntity(211U);
    msg.setDestination(11887U);
    msg.setDestinationEntity(213U);
    msg.op = 14U;
    msg.entities.assign("XZDWENHHDUSGWYEGYTAQHLFABNDDQIBXXGPDSCZSLVXECVDMCSMNCSKROPTZKWGSROVDCOJDLAWUFRKMAWXUMVFBZM");

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
    msg.setTimeStamp(0.6215934567312067);
    msg.setSource(55022U);
    msg.setSourceEntity(235U);
    msg.setDestination(28071U);
    msg.setDestinationEntity(145U);
    msg.op = 225U;
    msg.entities.assign("XINEBXTODWGMWNELKOUEGEWQCZTKXMBMUKOJAAGROMMGYCUDJDXGIVONEPSYQMMFXNFAHRIKBRJJQDHYHLYUOZEREEARXJCUJAAZLKPAQNMLDXJQPVZVHDKTQPGYNCHNNMTGWTUZKLJDSDFYJBWLLPPYHHSPWHTUFAKWZQJOOCRYOAHIYIECQVD");

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
    msg.setTimeStamp(0.3454089822941455);
    msg.setSource(40807U);
    msg.setSourceEntity(68U);
    msg.setDestination(6768U);
    msg.setDestinationEntity(250U);
    msg.type = 61U;
    msg.speed = 302U;
    const signed char tmp_msg_0[] = {-87, -18, -40, -63, -63, -6, -21, 91, 117, -127, 35, 52, -27, 19, 80, -110, -87, -62, -4, 82, 44, 63, -121, -105, 109, -49, 39, -30, -27, -88, 119, -48, 79, 74, 111, -113, -126, -83, -22, -58, 19, -38, -36, 59, -116, 47, -9, -89, 46, -112, 38, 72, -44, 78, -90, 17, -36, -97, 10, 79, -77, 4, -30, -14, 112, 92, -46, -25, -122, -1, 113, -57, 123, -128, -9, 38, -13, -88, 24, 19, -25, -61, -76, -15, 112, 38, 112, -102, 57, -40, 104, -81, 44, -24, 121, 110, 105, -87, 5, 123, -104, -61, 126, 76, 55, -89, 109, -119, -92, -128, -127, -1, -62, 28, 80, -9, 8, -114, -122, 93, -78, -26, -102, 33, 6, 19, 0, 7, -26, -92, 9, -8, -12, -16, 88, -57, 65, -72, -34, -104, 31, -118, 56, 13, 100, 114, 98, 6, 11, -64, 42, 55, -23, -76, -10, -41, -28, 71, -74, 24, 90, 88, 38, 105, 123, 87, -97, 99, -97, 7, -10, -35, 63, -124, -38, 114, -117, 85, -21, 104, 114, -92, -25, -126, 106, -69, 72, -76, 56, 115, 29, -58, 67, 107, 52, -77, 15, -119, -4, 28, -24, -35, 125, -56, 50, -39, -117, 30, -87, 102, 104, 106, 69, -37, 88, -67, 86, 120, 120, 48, 19, 101, -109, 88, -53, -60, 22, 122, 80, -36, 105, 107, 14, 4, -54, -17, -61, -62, -2, 80, -109, -106};
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
    msg.setTimeStamp(0.42432991046618473);
    msg.setSource(34428U);
    msg.setSourceEntity(8U);
    msg.setDestination(23133U);
    msg.setDestinationEntity(67U);
    msg.type = 36U;
    msg.speed = 25063U;
    const signed char tmp_msg_0[] = {-128, 3, 78, -42, -105, 105, -18, 69, -40, -63, 4, 48, -34, -26, 57, -21, -5, -119, -45, 88, 96, 35, -78, 65, 62, -55, 126, 24, 121, 47, 55, -36, -78, -125, 91, 96, 40, 10, -85, -90, -14, 92, 36, 79, 39, 87, 11, 57, 115, -81, -88, -52};
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
    msg.setTimeStamp(0.7004662210586922);
    msg.setSource(24382U);
    msg.setSourceEntity(187U);
    msg.setDestination(59839U);
    msg.setDestinationEntity(143U);
    msg.type = 110U;
    msg.speed = 34953U;
    const signed char tmp_msg_0[] = {25, 78, 48, -42, -41, 79, -50, 9, 114, 91, -29, -6, -21, -64, -75, -80, 77, -112, 22, -30, 56, -89, 116, 118, -22, -88, 116, 57, 16, 54, 99, 26, 40, 110, 85, -50, -59, 39, -1, 40, -33, -14, 41, 110, -127, 24, -16, 48, -83, -73, -13, -21, 45, 60, -65, 78, -123, -79, 89, 26, 110, 110, -117, 6, 105, 27, 10, -72, -73, 117, -32, 0, 25, 106, 124, -64, -54, -101, 45, -118, -66, -120, -114, 53, -29, -123, 78, 98, -69, 24, -90, -109, 3, 16, -51, -103, 82, -101, 89, 114, -42, -36, 93, -114, -126, -32, 116, -76, -61, 117, 90, -89, 51, -87, 0, 43, 64, 28, 3, 126, 75, -128, 89, -84, 61, -46, -112, -35, -44, 47, -58, -100, 27, 0, 50, 118, 51, -28, -12, -23, -95, -64, -33, -33, 32, 123, 113, -93, -94, 4, -106, -91, -51, -124, 31, 114, -59, -94, -40, 104, 56, -13, 52, 45, -79, -92, -13, -2};
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
    msg.setTimeStamp(0.7258357462317085);
    msg.setSource(43237U);
    msg.setSourceEntity(20U);
    msg.setDestination(37037U);
    msg.setDestinationEntity(197U);
    msg.op = 134U;
    msg.tas2acc_pgain = 0.2491508658725614;
    msg.bank2p_pgain = 0.9912832316920879;

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
    msg.setTimeStamp(0.9537595450998912);
    msg.setSource(53806U);
    msg.setSourceEntity(43U);
    msg.setDestination(4025U);
    msg.setDestinationEntity(9U);
    msg.op = 79U;
    msg.tas2acc_pgain = 0.5574538197041207;
    msg.bank2p_pgain = 0.951565090278101;

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
    msg.setTimeStamp(0.5347258004373449);
    msg.setSource(49665U);
    msg.setSourceEntity(171U);
    msg.setDestination(62996U);
    msg.setDestinationEntity(127U);
    msg.op = 220U;
    msg.tas2acc_pgain = 0.928525168812171;
    msg.bank2p_pgain = 0.9690014261428908;

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
    msg.setTimeStamp(0.885786950699946);
    msg.setSource(18750U);
    msg.setSourceEntity(113U);
    msg.setDestination(47210U);
    msg.setDestinationEntity(60U);
    msg.available = 1536265387U;
    msg.value = 43U;

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
    msg.setTimeStamp(0.047153062421434466);
    msg.setSource(40844U);
    msg.setSourceEntity(120U);
    msg.setDestination(2452U);
    msg.setDestinationEntity(187U);
    msg.available = 1702498679U;
    msg.value = 74U;

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
    msg.setTimeStamp(0.6900302474422864);
    msg.setSource(27131U);
    msg.setSourceEntity(206U);
    msg.setDestination(54314U);
    msg.setDestinationEntity(182U);
    msg.available = 3267480180U;
    msg.value = 101U;

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
    msg.setTimeStamp(0.6974858961810441);
    msg.setSource(59459U);
    msg.setSourceEntity(157U);
    msg.setDestination(51515U);
    msg.setDestinationEntity(166U);
    msg.op = 125U;
    msg.snapshot.assign("XIMCMFKEXCHPBMWXWMCDOCDPKEDXSYLZSUNBCMQGFTRJFHIBPYADOXYCTQVQFVSPULRBIUKQWTNZWNJSZGSGTZYZNBHUWQGYWWBPDNRGEUXJL");
    IMC::LedBrightness tmp_msg_0;
    tmp_msg_0.name.assign("MQLBLGIZMRIJBRJJQFCFWQNTTUJUBKLQKCODPNPIDMSMNYWPLQSBMLOYWQ");
    tmp_msg_0.value = 156U;
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
    msg.setTimeStamp(0.20083530253519832);
    msg.setSource(151U);
    msg.setSourceEntity(217U);
    msg.setDestination(53953U);
    msg.setDestinationEntity(0U);
    msg.op = 227U;
    msg.snapshot.assign("GAMIRHSKJHWRJMUBSGWEGKRZXRBEPFOSKTRGTTCYYPFNDENBKEHJABUMYNHVGJRHLQOOWTWQLTOFAFTOZCXLPUKDRGVWCKSYPGZIGDMMDSMQNYJYUQLONPNKDUJCEBIBHVKTXXAQSGXPKVJMYIRCOBZMJLS");
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 135U;
    tmp_msg_0.actions.assign("EKTJCYNUMIBAOGBVNGZFYXDFNTSQERJTBIHTYUSRNVSWBPBATVRSOFHUMKVWAOLWXMGCDKXWLHAACICFUJKLBXPCZIEQPZKMVQHWCIPGPXSJQVOSPPPABTDGLQDLPNSJOJ");
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
    msg.setTimeStamp(0.6289969883223447);
    msg.setSource(40476U);
    msg.setSourceEntity(50U);
    msg.setDestination(65355U);
    msg.setDestinationEntity(178U);
    msg.op = 207U;
    msg.snapshot.assign("ZPHEAMGTGKLHFQHFHKTIRQUSDZWGBETXSIEKKOCAABVGEZQNNSWGFFKOWQUKCHEMVMCAHVJBPVXBBNIDAZTSDSRMLEUQRFWRMIJFIBDNUYZIXOPZ");
    IMC::LinkLevel tmp_msg_0;
    tmp_msg_0.value = 0.34267342780648324;
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
    msg.setTimeStamp(0.08896993487444427);
    msg.setSource(7419U);
    msg.setSourceEntity(105U);
    msg.setDestination(35388U);
    msg.setDestinationEntity(64U);
    msg.op = 64U;
    msg.name.assign("CRUCICIZYVMZSCTCRXFPXAOSXRZDFVFIAJWORXRBUKQANNQIHOFWKTNYHXUKGQYVFMCFMGGJVONOKSISRZZDXPWSDVLXSAQKTIIPIFPSIPLLXCYGATYZEATYAEFUMOAJQPUHEPNEHITNYJSMNUDLUALOBGMMPQUEUKTXKLGZZNRAGRJTTLHHMVDDOXKF");

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
    msg.setTimeStamp(0.9040613860014282);
    msg.setSource(56656U);
    msg.setSourceEntity(112U);
    msg.setDestination(34768U);
    msg.setDestinationEntity(5U);
    msg.op = 13U;
    msg.name.assign("QPHNAJBJWFPGIGUQXJVSRJNXXZNPQHRHIAYUCMOZQVCXKWULDBGHBHVLLGSOBWYLSENEEJXUKMUICALKFFVKMO");

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
    msg.setTimeStamp(0.11672980288181833);
    msg.setSource(64730U);
    msg.setSourceEntity(188U);
    msg.setDestination(64711U);
    msg.setDestinationEntity(190U);
    msg.op = 142U;
    msg.name.assign("FWQJZNKEOCFWGLLEWBCNPIULQDPWAQHNYYXPSGQLNMEVRERMVVZMXEVUKHICCWAMYRFJJJUOWBKXYFDMSJORDSKWABHXMJOLSDMFHPAEJTOTGCBKZSCXRBUNVACXPNRRVIJHNOTTTQVGDHAZAYKABBPOPCQLDWFFXXNYDIUJPPWBLQUBUDXTIZSROFNQAIOEPIMGZUKRVFMYVBMIZQTLGYZHGENZLRUGGKFD");

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
    msg.setTimeStamp(0.5743060646422676);
    msg.setSource(17205U);
    msg.setSourceEntity(130U);
    msg.setDestination(23874U);
    msg.setDestinationEntity(29U);
    msg.type = 175U;
    msg.htime = 0.12058794695190811;
    msg.context.assign("NMXTMPAMFGLMTOUEDUJKQORHBSTFBIQRNAFIKDFRHEWBUBOBDAWILKKIQANUYZPNVGOCBPKYYWUEBZUFKBBQPNWSLZLIWZYSXMQYOBEVPPJGUXEQMQXCHYUYSEXOCFLCIHH");
    msg.text.assign("ZJMPXLZJUEIBVPKSOHTTUYYCDGWDFXMAND");

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
    msg.setTimeStamp(0.2909239348229933);
    msg.setSource(7826U);
    msg.setSourceEntity(91U);
    msg.setDestination(57137U);
    msg.setDestinationEntity(248U);
    msg.type = 245U;
    msg.htime = 0.8788173982003337;
    msg.context.assign("VZFHWIDCOBLLDTCKLUZNFQZHRYZWFGNFEEFCUMOLWIGMHVYJVCBFEQTIMPHRQXNZSWTBSAQTOIGM");
    msg.text.assign("PKSZROPWCFVZBRMZWJJUBPGTSZIHSUHLOCOSBTQIDZWLBLWIKWMDIXFVCRUHHYCAQWCFJHRTNWZCMCPRDNHYNBFYZSIZMYDVUYIPOEWNIJQQHTZOKLSKUZNIARLEMJPPEXDFDUKTFMGGJVMDTLUSREAYBXGUDRAEBLFJTGPBXNVGEG");

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
    msg.setTimeStamp(0.5625277412560823);
    msg.setSource(44037U);
    msg.setSourceEntity(42U);
    msg.setDestination(3206U);
    msg.setDestinationEntity(196U);
    msg.type = 30U;
    msg.htime = 0.9440250088081715;
    msg.context.assign("TDEHWUUSVXZHNKFYQPDMKEDAOMMRDLMIEBXSIMJZZBDXWRBPMCNTJGBNFMZQEYMCEOAQIRHIPDVTXSCURYPNXEUVOELAVRBYCVRV");
    msg.text.assign("UNZLGAMOGYFIRVZYMDZCQPJKCFBAWPDLQULPSOCLVADWYHXUWXUPBKZOEJCHKSLNZANMJBMSGXRDUMSWJAXVTERMQIKBXABNZTELGXMNQUFNKUSWWKZEICGARYJOAZLPJHTFQVOYBRQBQWOREEYOCIXZFTDIBKFIMWCLLVWV");

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
    msg.setTimeStamp(0.11740196086950327);
    msg.setSource(28616U);
    msg.setSourceEntity(40U);
    msg.setDestination(33393U);
    msg.setDestinationEntity(135U);
    msg.command = 2U;
    msg.htime = 0.3638300480604215;

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
    msg.setTimeStamp(0.9676575067196249);
    msg.setSource(60129U);
    msg.setSourceEntity(234U);
    msg.setDestination(14604U);
    msg.setDestinationEntity(128U);
    msg.command = 22U;
    msg.htime = 0.3915356497749951;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 182U;
    tmp_msg_0.htime = 0.04938025109212607;
    tmp_msg_0.context.assign("DYYPXCUMJSQGJTXOFASJPKWELKKDEBZTOIAEZQSDTILYUZZGWYRKKSCJHG");
    tmp_msg_0.text.assign("CYRIIKYUDEQOYGCZXNSJLGQOGQPTBVSR");
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
    msg.setTimeStamp(0.08661679408949696);
    msg.setSource(45186U);
    msg.setSourceEntity(204U);
    msg.setDestination(3686U);
    msg.setDestinationEntity(158U);
    msg.command = 93U;
    msg.htime = 0.3259065256677427;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 169U;
    tmp_msg_0.htime = 0.39118065498015164;
    tmp_msg_0.context.assign("WPAQQBCIGMPCFJXUADYTXRRKCOVIAXYEIGLMYGULVPDIHZVOWMAWXXUIOBHJJFERZYQHMDNWGAHWDNSKBEHPQKQVKCAYNMZKWKFKVRQVEXTSACSGAOTWTSIDJHUCVPZOFCZJAGCGBTSXLOEBWUZNRXDB");
    tmp_msg_0.text.assign("YRNYWGCPPIGXQOEUSGHFJKZVIPYHFJBTYUUVSTGCYBVVMVQDVTWMUJNDMYMFA");
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
    msg.setTimeStamp(0.8514871845248595);
    msg.setSource(16021U);
    msg.setSourceEntity(236U);
    msg.setDestination(28689U);
    msg.setDestinationEntity(40U);
    msg.op = 72U;
    msg.file.assign("RYXIOSEDUITFSNVKQRGVSTPHQTPJEOUXIBPDUZAGHRVVCBZUORECOEEABUFMRRUDPMWMZZWACUTOKMFJFPCVWYPTLTZMERTPTXNGF");

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
    msg.setTimeStamp(0.1611273534946639);
    msg.setSource(45019U);
    msg.setSourceEntity(86U);
    msg.setDestination(21365U);
    msg.setDestinationEntity(124U);
    msg.op = 93U;
    msg.file.assign("XAWBEPTQIPFJVWAGQTXDRXQUPONWZPODHUAFCSHFUEFXIJCRSJQCKSMFBECHZJNJOPHXWQONVYROAVDLYXEUQRRTWBBTTKPNRXMMVGAUTALKDMUVZHRCESEUPDWHAYCMMNDIAZSMADSHFZJTEIJSOLYNXVGUFSQTMCOFNIVETCOBQWLIBBQ");

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
    msg.setTimeStamp(0.8012701217840187);
    msg.setSource(25564U);
    msg.setSourceEntity(235U);
    msg.setDestination(45606U);
    msg.setDestinationEntity(132U);
    msg.op = 127U;
    msg.file.assign("UGDUPYAFGTKCIJXPSOHTNQQTYNJWGJEMRCQWEXPKSJKNUENRAGDXYCPSXCFFWVOWFCDEDGWJQLJCRNLULTIBXJQIBHAVWDZIUPTXKCHKDKNURMYOPSASLBITOMFNONRZABQHMPCAQMPIN");

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
    msg.setTimeStamp(0.6660982269480605);
    msg.setSource(21219U);
    msg.setSourceEntity(243U);
    msg.setDestination(1420U);
    msg.setDestinationEntity(236U);
    msg.op = 101U;
    msg.clock = 0.11993647879688041;
    msg.tz = -21;

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
    msg.setTimeStamp(0.6506778970652654);
    msg.setSource(309U);
    msg.setSourceEntity(166U);
    msg.setDestination(57409U);
    msg.setDestinationEntity(234U);
    msg.op = 224U;
    msg.clock = 0.7918527249785337;
    msg.tz = 49;

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
    msg.setTimeStamp(0.004481728332049295);
    msg.setSource(61591U);
    msg.setSourceEntity(219U);
    msg.setDestination(2274U);
    msg.setDestinationEntity(22U);
    msg.op = 150U;
    msg.clock = 0.17533336882277972;
    msg.tz = -18;

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
    msg.setTimeStamp(0.6661743714640134);
    msg.setSource(24813U);
    msg.setSourceEntity(20U);
    msg.setDestination(46453U);
    msg.setDestinationEntity(60U);
    msg.conductivity = 0.7940303720956893;
    msg.temperature = 0.3110597247040584;
    msg.depth = 0.5192474622944377;

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
    msg.setTimeStamp(0.7385836244812054);
    msg.setSource(48534U);
    msg.setSourceEntity(151U);
    msg.setDestination(64694U);
    msg.setDestinationEntity(225U);
    msg.conductivity = 0.6817581804652092;
    msg.temperature = 0.9021663452383618;
    msg.depth = 0.35325903811530546;

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
    msg.setTimeStamp(0.11844387246032106);
    msg.setSource(12538U);
    msg.setSourceEntity(202U);
    msg.setDestination(63304U);
    msg.setDestinationEntity(90U);
    msg.conductivity = 0.5519299682477754;
    msg.temperature = 0.2859118075091811;
    msg.depth = 0.8933425678490832;

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
    msg.setTimeStamp(0.8878234885651107);
    msg.setSource(39250U);
    msg.setSourceEntity(16U);
    msg.setDestination(5428U);
    msg.setDestinationEntity(81U);
    msg.altitude = 0.28273689138274605;
    msg.roll = 12857U;
    msg.pitch = 17078U;
    msg.yaw = 37634U;
    msg.speed = 876;

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
    msg.setTimeStamp(0.0567323356448014);
    msg.setSource(19874U);
    msg.setSourceEntity(42U);
    msg.setDestination(56960U);
    msg.setDestinationEntity(108U);
    msg.altitude = 0.3748624914977542;
    msg.roll = 31999U;
    msg.pitch = 21293U;
    msg.yaw = 56873U;
    msg.speed = 191;

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
    msg.setTimeStamp(0.04408245763831975);
    msg.setSource(46616U);
    msg.setSourceEntity(173U);
    msg.setDestination(18833U);
    msg.setDestinationEntity(106U);
    msg.altitude = 0.5932177950885527;
    msg.roll = 30258U;
    msg.pitch = 28259U;
    msg.yaw = 65369U;
    msg.speed = -18911;

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
    msg.setTimeStamp(0.1675151907437985);
    msg.setSource(4676U);
    msg.setSourceEntity(157U);
    msg.setDestination(372U);
    msg.setDestinationEntity(50U);
    msg.altitude = 0.3890389343689834;
    msg.width = 0.6706779395122701;
    msg.length = 0.3118635691106484;
    msg.bearing = 0.8378563876284421;
    msg.pxl = 3231;
    msg.encoding = 146U;
    const signed char tmp_msg_0[] = {7, -128, 31, -99, 22, -128, 18, 60, 9, -12, -114, -29, 27, -119, -121, 53, 28, 98, 107, -115, -78, -121, -10, -61, -79, -67, -75, -42, -38, -89, -26, 73, 59, -23, -114, 56, 82, -53, -52, -125, -104, 10, -42, 25, 81, -58, -93, 122, -35, 33, 115, -5, 123, 44, -108, -79, 105, -65, -88, -123, 72, -127, 2, 74, 68, 2, -94, -34, 35, -125, -118, 84, -55, -22, -59, 88, -56, -112, 112, -39, -115, -74, -105, 113, 18, 58, -30, -120, -54, 92, -93, 94, -4, -75, 108, 50, -26, 61, 64, -49, -3, -43, 121, -91, -81, -116, -120, -41, 89, 46, -115, -54, -75, 59, 20, 64, -22, -128, 33, 26, 21, 92, -51, 21, -106, -35, 109, 51, 104, 90, 96, -29, 79, 27, 13, -30, 119, 64, 87, -8, 21, 17, -57, -21, 103, -37, -96, 19, -117, 42, 71, -28, -81, -4, -89, 62, 103, -19, 3, 56, -109, 74, 116, 39, -24, -52, 43, 41, 45, -66, -52, -47, -14, 20, 118, 25, 13, 71, -32};
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
    msg.setTimeStamp(0.3850279789711102);
    msg.setSource(43419U);
    msg.setSourceEntity(84U);
    msg.setDestination(47708U);
    msg.setDestinationEntity(62U);
    msg.altitude = 0.2731005284725113;
    msg.width = 0.43680093965063094;
    msg.length = 0.8320965685717976;
    msg.bearing = 0.5356621891353177;
    msg.pxl = -29076;
    msg.encoding = 69U;
    const signed char tmp_msg_0[] = {64, 43, -112, -95, 93, -81, 11, -10, -30, 75, -110, 90, -110, 25, -72, 59, -76, 115, 58, -89, -11, 86, -127, -103, 53, 90, 90, 42, -122, 85, -43, 112, -86, 34, -89, 49, -57, 21, -64, 78, -91, -21, 125, -120, 23, -84, 49, -67, -104, 124, -100, 75, -5, 92, 6, 45, 17, 62, 125, 35, 26, -112, -69, 94, -19, 1, 30, 65, -61, 122, 101, 99, 10, -71, 100, 55, 68, 48, -8, 100, -16, 40, -87, 25, -38, 67, -128, 2, 10, -103, -19, 112, -76, 9, -25, 62, 85, -125, 2, 104, 89, 96, 43, -48, 111, -45, -66, -108, -91, -32, 16, -11, -60, -88, -2, -31, 99, 21, 104, -12, 86, -68, -13, 125, -48, 103, -32, -11, -25, -9, -7, 74, -106, 92, 47, -23, 35, 47, 60, 82, -36, -22, -31, 109, 120, -107, -54, 21, 18, 79, 13, 47, -38, -87, -44, -53, 10, -119, -23, 71, -26, 4, -1};
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
    msg.setTimeStamp(0.8033346176127695);
    msg.setSource(47169U);
    msg.setSourceEntity(250U);
    msg.setDestination(21566U);
    msg.setDestinationEntity(243U);
    msg.altitude = 0.29506259256878486;
    msg.width = 0.4967279984045482;
    msg.length = 0.3232209780000641;
    msg.bearing = 0.8695169316623595;
    msg.pxl = 1819;
    msg.encoding = 103U;
    const signed char tmp_msg_0[] = {98, 85, -91, -92, -16, 87, 83, 30, 21, -29, 67, 23, -39, -14, -79, 60, -67, -99, -1, -6, -76, 48, 31, -21, 66, -9, 34, -9, 78, -70, 46, -54, 70, 38, -107, -95, -87, -32, -53, -119, 24, -29, 58, 38, 88, -77, -41, -76, -119, 80, -21, -6, -30, -29, 18, 104, -30, 36, 59, -18, 82, -15, 7, 95, -100, -85, 35, -118, -103, 60, -115, -76, 60, -115, -66, -68, -86, 107, 32, 118, -2, -123, -111, -45, -122, 78, 94, 34, -12, -80, 0, -45, 60, 68, 76, 45, -72, -75, 55, -118, -14, 10, 108, 92, 98, -61, 101, -60, -22, -70, 118, 84, -36, 59, 28, 69, 5, 68, 81, -22, 80, -112, -24, 33, 123, 78, -62, -118, -59, 72, -125, -99, -16, -34, 44, 56, -19, 97, -57, 32, 14, -45, 39, 81, -70, -86, 93, 79, -69, 99, -23, 4, -1, -123, 14, 50, -91, 54, -55, -41, -55, -103, 120, 94, 20, -83, -112, 10, -4, 25, -11, 78, 4, 67, -108, 50, 100, 9, 52, 118, -103, 82, 88};
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
    msg.setTimeStamp(0.00029692651606871845);
    msg.setSource(19974U);
    msg.setSourceEntity(58U);
    msg.setDestination(35018U);
    msg.setDestinationEntity(131U);
    msg.text.assign("NBFNMPXSUYAECDRNEBHYKQ");
    msg.type = 183U;

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
    msg.setTimeStamp(0.26024232528231717);
    msg.setSource(18676U);
    msg.setSourceEntity(20U);
    msg.setDestination(27801U);
    msg.setDestinationEntity(48U);
    msg.text.assign("FSHVYGQYAZETBDNEOSXXCJZWMAYPROTSVSRFPTLGUDARMRYNCVOEAYISQVYUZSOPARSQJCLYEIBFMJDRMTTQWCQLAKK");
    msg.type = 141U;

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
    msg.setTimeStamp(0.11276364442830744);
    msg.setSource(10791U);
    msg.setSourceEntity(178U);
    msg.setDestination(49242U);
    msg.setDestinationEntity(225U);
    msg.text.assign("BVOZKRZTXNNYKDDROHECCFQYNTMVJKZJBMKDPDLSHFMIWURWADVUNYXJMJHZ");
    msg.type = 65U;

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
    msg.setTimeStamp(0.024805165232552495);
    msg.setSource(53038U);
    msg.setSourceEntity(3U);
    msg.setDestination(28942U);
    msg.setDestinationEntity(245U);
    msg.parameter = 116U;
    msg.numsamples = 143U;
    msg.lat = 0.3181232513502328;
    msg.lon = 0.3736577576182385;

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
    msg.setTimeStamp(0.07376314635382553);
    msg.setSource(56170U);
    msg.setSourceEntity(132U);
    msg.setDestination(19185U);
    msg.setDestinationEntity(231U);
    msg.parameter = 222U;
    msg.numsamples = 5U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 15551U;
    tmp_msg_0.avg = 0.3659226124324432;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.45286039433148495;
    msg.lon = 0.8312371558643357;

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
    msg.setTimeStamp(0.26534652159119876);
    msg.setSource(55923U);
    msg.setSourceEntity(155U);
    msg.setDestination(41169U);
    msg.setDestinationEntity(214U);
    msg.parameter = 201U;
    msg.numsamples = 153U;
    msg.lat = 0.2980469016338685;
    msg.lon = 0.5816771635296548;

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
    msg.setTimeStamp(0.4846704279345254);
    msg.setSource(26658U);
    msg.setSourceEntity(211U);
    msg.setDestination(45595U);
    msg.setDestinationEntity(175U);
    msg.depth = 62294U;
    msg.avg = 0.16136661635330696;

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
    msg.setTimeStamp(0.5401672576378489);
    msg.setSource(19031U);
    msg.setSourceEntity(113U);
    msg.setDestination(5146U);
    msg.setDestinationEntity(247U);
    msg.depth = 19032U;
    msg.avg = 0.3585494058488915;

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
    msg.setTimeStamp(0.7413794957537087);
    msg.setSource(23194U);
    msg.setSourceEntity(37U);
    msg.setDestination(8069U);
    msg.setDestinationEntity(1U);
    msg.depth = 55764U;
    msg.avg = 0.40605261783291424;

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
    msg.setTimeStamp(0.6851495274875167);
    msg.setSource(43884U);
    msg.setSourceEntity(121U);
    msg.setDestination(10576U);
    msg.setDestinationEntity(45U);

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
    msg.setTimeStamp(0.07543074146859963);
    msg.setSource(65116U);
    msg.setSourceEntity(108U);
    msg.setDestination(40846U);
    msg.setDestinationEntity(130U);

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
    msg.setTimeStamp(0.5047518342736712);
    msg.setSource(2444U);
    msg.setSourceEntity(208U);
    msg.setDestination(63637U);
    msg.setDestinationEntity(85U);

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
    msg.setTimeStamp(0.014055212509745063);
    msg.setSource(4843U);
    msg.setSourceEntity(231U);
    msg.setDestination(23422U);
    msg.setDestinationEntity(236U);
    msg.sys_name.assign("ZZDKHHODARRNYIUMPBDNRHVZNYBKTIYUAKUDJYESOQRDKLTWACZUJGBKAGVGEYNGUCYKUHLTTZRGFIFDVUSWYPXPBWHGMHKFSAPLCQXAJEFXMTJCADCMOHTOZZNQXSNWB");
    msg.sys_type = 88U;
    msg.owner = 41340U;
    msg.lat = 0.08773935555361956;
    msg.lon = 0.5606645102572951;
    msg.height = 0.33318065613556014;
    msg.services.assign("LBKFCSVWQJBAWUDUXZGJCRUUAPMBEKNBHTQJWLFDNDVKQNNYMWETPFYJLFRRGKYGZAYPAOAMHTNAICMVODXVSHAZTXJDXWQLCWPFRBWFSBNS");

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
    msg.setTimeStamp(0.17863940962407088);
    msg.setSource(537U);
    msg.setSourceEntity(131U);
    msg.setDestination(61581U);
    msg.setDestinationEntity(212U);
    msg.sys_name.assign("NWKYYMAYVBQHCRIXXDZVFOKYRDKEHRAMKWKSEOCLQRRNAHTNTEJYNRTFMUZFJHZCMJEOZGESLVCHCRCYLRRCZXSGIUNSMFYWOQPNOGZCODAIJSNZUFDKUNXBPMGXQHXZFUNOUZKSELVQRBWIGJBFAVLTGITPDAVJSLLHOVVQPQICWJUI");
    msg.sys_type = 165U;
    msg.owner = 747U;
    msg.lat = 0.5050327458731548;
    msg.lon = 0.7581841878173176;
    msg.height = 0.2007753902128928;
    msg.services.assign("ATDQFMKBVPRBEERZZQOQZXMQWYXVGQTNJTPVEGKLTKGJUMEXISGQJZMTYAQKCCTWHXHUSTHEPJEWCDUHSIZNCIXAGEYAVLQDRWFUSBUAGKWCOFIY");

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
    msg.setTimeStamp(0.3958709606415495);
    msg.setSource(13830U);
    msg.setSourceEntity(10U);
    msg.setDestination(49328U);
    msg.setDestinationEntity(79U);
    msg.sys_name.assign("WRSPJQUKOIZHOQJWVTXJHGOSTYIRVCBKFAGVYOIIYEPYHEUANWEGHRPAETIBOXTWLVQXCAUPUUMDQVQHLWNGLDAFORSPYFWRKOZFKAZJXDPNSDKVKMMESBUBDFZTJCWXHNBZDSTEFQLCYJZTPGZMAFOFMTHUCGTXJLCTSURGQRPMYBUXCOCYDCZUBHYKHVBFWEWZEPIPNMIXDIRWZSLAJNLRQOAIQNLRMKMVLSNBYAGKDHVM");
    msg.sys_type = 142U;
    msg.owner = 20184U;
    msg.lat = 0.3824228234228081;
    msg.lon = 0.2595975447388622;
    msg.height = 0.11099556091341778;
    msg.services.assign("IZLUQYPYSKOROLTXUMWMQJIRKJJJZTTBEYJHWFMAVAXALGSUSGQVJYENLGLFXPEWBNJRVBLINKNCOFUJRCQEOTOTQLFHICHNAMBKDKVAKUROGWYYLQZHHDLXZBIOEXFUPHUDFPDRGCBYEQFZBSPQZGIXMMTBMLMYYDSHGC");

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
    msg.setTimeStamp(0.8529169786159948);
    msg.setSource(31545U);
    msg.setSourceEntity(66U);
    msg.setDestination(19621U);
    msg.setDestinationEntity(99U);
    msg.service.assign("AUNKYEKLDZSCQPPMLVQEMGVTEOEWPAMNKRRJTUPSFMXSAKBGDXUTIBWUYOMJQDMRDVTXMPKJHXNRRCMTAYHKHLRYHCWFVTHEVEQZIWNNYKDIDBBOEQTNAYVSLLJYXBZDWUXKRPTONVNNKWMGQFVXTOYFUHLDJELUIFUAFOCWVOPWGGBZZGSCFIGBXOZLJQVHGEIEDRTRUBIYWFYPQSQJSGPCJJSINHCBUB");
    msg.service_type = 27U;

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
    msg.setTimeStamp(0.06981453346354183);
    msg.setSource(61972U);
    msg.setSourceEntity(160U);
    msg.setDestination(53883U);
    msg.setDestinationEntity(171U);
    msg.service.assign("NIHUFAIXAQMIZCFKVXMYEYQLMQHMFUPWYHKKNSGCXTGURLNFNCVBEXWRQIUKPPVERNJEYIVUQXVGKKEQSVOJBOJAQPLWGUVXRSAEWXPHMLDPCLXPBSQGKVINMTBRFRJIADMBZDJDRZSDZXTTPUECMO");
    msg.service_type = 92U;

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
    msg.setTimeStamp(0.08417939269656027);
    msg.setSource(13583U);
    msg.setSourceEntity(37U);
    msg.setDestination(36964U);
    msg.setDestinationEntity(193U);
    msg.service.assign("LJFDBQYCGAXXFDALAXGRQLLVXPGMEVHCQUSGCMZWIQLOTSTAQWQIZKZUJWFMHKOAYLYXVPZMJHCDKNFRRHFKWSWITIEEEXBUIBFRONEKTCSIJPTTURULERAZWPDMSXNPXKAZYROPAIDHOCCVBGTENQPNVRBPCVATDZOSEHJDVGPOHDKYDLUSIFQJRBGJGZYIYBOFSVTEEQGXPOLUJJZIWMTBNJMULSMCNWAWUOHSBHYFBKVXCMKVDGFWYRN");
    msg.service_type = 102U;

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
    msg.setTimeStamp(0.8282558496793324);
    msg.setSource(18674U);
    msg.setSourceEntity(143U);
    msg.setDestination(33795U);
    msg.setDestinationEntity(129U);
    msg.value = 0.35258871536202474;

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
    msg.setTimeStamp(0.04957480107686729);
    msg.setSource(27583U);
    msg.setSourceEntity(37U);
    msg.setDestination(33581U);
    msg.setDestinationEntity(242U);
    msg.value = 0.7110341752140914;

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
    msg.setTimeStamp(0.2715378598571353);
    msg.setSource(29926U);
    msg.setSourceEntity(150U);
    msg.setDestination(55445U);
    msg.setDestinationEntity(158U);
    msg.value = 0.893707095171926;

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
    msg.setTimeStamp(0.1964792844230997);
    msg.setSource(9078U);
    msg.setSourceEntity(158U);
    msg.setDestination(53839U);
    msg.setDestinationEntity(74U);
    msg.value = 0.19701523624226525;

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
    msg.setTimeStamp(0.8484347901742534);
    msg.setSource(56883U);
    msg.setSourceEntity(106U);
    msg.setDestination(18394U);
    msg.setDestinationEntity(107U);
    msg.value = 0.2862296730666273;

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
    msg.setTimeStamp(0.12752172842815013);
    msg.setSource(40767U);
    msg.setSourceEntity(76U);
    msg.setDestination(40881U);
    msg.setDestinationEntity(147U);
    msg.value = 0.20369367480154354;

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
    msg.setTimeStamp(0.4600439128256302);
    msg.setSource(54854U);
    msg.setSourceEntity(223U);
    msg.setDestination(25524U);
    msg.setDestinationEntity(122U);
    msg.value = 0.8500159726916598;

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
    msg.setTimeStamp(0.9694858404964196);
    msg.setSource(40955U);
    msg.setSourceEntity(201U);
    msg.setDestination(19266U);
    msg.setDestinationEntity(113U);
    msg.value = 0.5004790725040978;

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
    msg.setTimeStamp(0.31156105803549106);
    msg.setSource(2463U);
    msg.setSourceEntity(50U);
    msg.setDestination(51980U);
    msg.setDestinationEntity(124U);
    msg.value = 0.29694519276661235;

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
    msg.setTimeStamp(0.4226240918035884);
    msg.setSource(25447U);
    msg.setSourceEntity(4U);
    msg.setDestination(55510U);
    msg.setDestinationEntity(196U);
    msg.number.assign("CJHGKUATXIMNHLUCLBUWYADLYLXRCSBTSCOPXOXGQSGDEYTMKHBOJTKBEZEGLXMDGWGBNCJQISTVIMERWLMEBTFQPLIIPFXUJL");
    msg.timeout = 45003U;
    msg.contents.assign("RJQBMPFDEAJYIUMLTOEKVERLGNKPBKHRYMQQNFOJYKRHNKMSFGTYVBWUPVSCXMHENXCFDBMVLPSZASVKOSMGGEKSHQGCUSIJYVUJPHLZARNNPAEBDFFCCVROGWGPNRQQTAVWOWJWIEDXDIQFTSMIAZKVCAEDLKWGONHTIXXRPZULZQBTNQRYATYAHHCOGUUBIDBSZHXWMLOLCUTUDXJWZOCMNJSWJFEBZYCJYWX");

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
    msg.setTimeStamp(0.5678742991436199);
    msg.setSource(33181U);
    msg.setSourceEntity(49U);
    msg.setDestination(4075U);
    msg.setDestinationEntity(60U);
    msg.number.assign("EWGAQMBYLURSLCUVXBIEZCGZQFAPIHCMPWMYHANIRJYGGMRGBYYLAEVIGKECNUAXVGMCRODDEOGXZDFRNSAKQIRNRTOWXVJKZHURFKMLTAPOQKILESIXTQDXNESSJDTEJARJUPYBPNCTCBZOP");
    msg.timeout = 64237U;
    msg.contents.assign("PIEPETDREEJUXPDEXWVKYQEWLUGPMZFIQWNUQEIKHZSLROCTFSXUCREMGXRLASOZMDZLMNWEUDTZXPFABPPQUXFYTVLAVNBBSCFSAOALPDALHLCXHKZGDXPRYAIJROVRYJHQHQVFILCNWNDZTKWTGQMHBVGXBFTDKZNRQZT");

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
    msg.setTimeStamp(0.7200947852477138);
    msg.setSource(27683U);
    msg.setSourceEntity(93U);
    msg.setDestination(8832U);
    msg.setDestinationEntity(69U);
    msg.number.assign("CXZGNHDNJZSGPOLMBGCCZCUNMHKFIXXZXBVQDPPBZORFLOVRJTEJSKEGHLTSROEIUBBHNAJQVDHLOHKJCYEYEQFNKVQKEZOHKQGJWVVIFYFNIDRJIMQU");
    msg.timeout = 9215U;
    msg.contents.assign("NSIRBUVJLFNDOUQYOASAXFVTISWQPZNEETMINMEQAQHYRDUMAMBYTURHRZCCXFZSGIIIJXJCVJJXZTTGARTMPLRXCXKDFXOHLOWAPKQBLTYHZGNFGFINHPNGCGBUDQBLVKWMCRTVAJBDUDKVHEWUEEPGNFDWNCBQDLMXHMNSJVHYSGFWIFSAFZYYOU");

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
    msg.setTimeStamp(0.4391939313370985);
    msg.setSource(48431U);
    msg.setSourceEntity(95U);
    msg.setDestination(34118U);
    msg.setDestinationEntity(233U);
    msg.seq = 3155775975U;
    msg.destination.assign("NRSWZXKDUKUY");
    msg.timeout = 6374U;
    const signed char tmp_msg_0[] = {86, 60, 113, -32, 6, -70, 29, -83, -66, -63, -39, -23, 27, -57, -100, -37, 82, -63, 0, 90, -62, -85, 26, -39, 43, 22, -45, 11, -104, 88, 82, 80, 98, 79, -10, -109, 58, 53, -115, 68, 67, 77, -112, 4, -70, -97, -60, -60, 93, 44, -108, -7, -7, -63, -79, 24, -120, 78, -58, -53, -34, 111, -99, -72, -63, -14, -70, 89, -50, -116, -109, -100, 65, -12, -107, -47, -97, -60, 38, -59, 1, 112, -115, 99, 102, -39, 53, -58, 50, 109, 75, 55, 113, -28, 117, -16, 15, -128, 77, 98, 59, 36, 95, 92, -122, -36, -45, 30, -62, 97, 42, -91, -76, -70, 9, -48, -40, 89, 24, -5, -105, -125, -104, 112, 0, -27, -124, 45, 49, 3, -19, -99, 72, 53, -27, 44, 61, 4, 87, 75, -33, -103, 105, -123, 11, 88, 102, 98, -124, 115, -107, -75, 6, -93, 58, -54, 116, 95, 16, -7, 14, 102, -16, 113, 41, 116, 59, -29, 1, -51, 56, 93, 4, -76, 107, -115, -113, -59, -75, -58, -5, 108, 109, -73, 105, 17, -101, 62, -100, -126, 64, -70, 33, -19, 96, 51, 84, -15, -62, -49, 123, -107, -63, 58, 114, -120, -99, 81, 35, -120, -64, -120, 24, 107, 54, 26, -117, -17, 63, 113, -57, 59, 123, -56, 56, 78, -100, -83, 67, -28, 38, -91, 88, -13};
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
    msg.setTimeStamp(0.45289440986452245);
    msg.setSource(39837U);
    msg.setSourceEntity(167U);
    msg.setDestination(33906U);
    msg.setDestinationEntity(198U);
    msg.seq = 2890079414U;
    msg.destination.assign("EZUXAQPIFNBQWMGALMBSALZGJOWNRFKFSECUZSOYLUXMRXVHVMAJRVXCLPMZAFEEUKAOXKRCHGVTKHZUIIZSCHFMXBBDEGGDBJCUUYQBKSQVUYTKWEDRIXPGAMTHSCGIFOPJDORLATOJKNTLTQDUYHJFWYRVINGMYKJWBBKSQPLJXNWVWZIPRPWDCNVVWSYYMLHXLGNDZVFOYKHONGEZBPPXSCDCQ");
    msg.timeout = 6770U;
    const signed char tmp_msg_0[] = {-18, -59, -27, -55, -55, -110, 25, -38, -89, -108, -114, -51, 86, 0, -53, 101, -91, -96, -75, 112, -35, 99, -43, -102, -69, -26, -66, -49, 18, -46, -48, -75, -12, 120, 98, 67, 66, 4, 87, -106, -102, 63, 35, 40, -98, 109, -3, -122, 119, 29, -45, -128, -49, 74, -113, 68, 81, 5, 70, -63, -15, 1, 90, -100, 122, 27, 104, -32, -11, 71, 56, 109, -101, 70, -46, 122, 91, -19, -2, -61, -70, 101, -60, -110, -62, 72, -17, 66, -49, -5, -42, 115, 89, -123, 59, -28, 17, 81, -1, 103, 104, 124, -38, -105, 98, 24, 37, 32, 69, -115, -102, -2, -103, 122, 89, 20, -70, -24, -77, 46, 23, 107, -27, -76, 44, -110, -35, 90, -40, 47, -53, 17, 40, -116, 87, -123, -42, -29, -34, 107, 91, 114, 6, -71, -10, -35, -36, -98, 121, -104, -115, -36, 67, 72, -57, -95, -77, 120, 46, -21, 88};
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
    msg.setTimeStamp(0.971992848322647);
    msg.setSource(44916U);
    msg.setSourceEntity(13U);
    msg.setDestination(37402U);
    msg.setDestinationEntity(145U);
    msg.seq = 223175666U;
    msg.destination.assign("NYHSUSJKQDDXTEPLMNZZBKLGCPAQIHXPCMPFRTBUPHUKCYWXTQXZBNW");
    msg.timeout = 52059U;
    const signed char tmp_msg_0[] = {12, 41, -96, 8, 18, 83, 37, 91, -12, 77, -39, 3, 17, 113, -9, 19, 111, -117, 46, 41, -87, 26, 44, 10, 39, -63, -29, -89, 88, -30, 43, 69, 44, 62, 66, 24, -87, -39, -12, -21, 0, 75, -47, 66, -91, 67, 58, -83, -31, 67, 2, 88, -76, -74, 25, 89, -110, -113, 23, 110, 110, -82, -38, -50, -67, -65, 98, 31, 41, -35, -46, 25, -7, -23, -19, 78, -48, -28, 12, 94, 67, 79, 61, 6, 114, -101, 2, -115, 116, 21, -78, 59, 86, 113, 113, -26, -35, 59, -65, -102, -101, -43, 50, -43, -119, 106, -80, -6, -36, -33, 77, 56, -123, -3, -65, 104, -109, -128, 48, -13, -31, 115, 45, 43, 103, 115, -70, 125, 87, 110, 22, 126, -82, 91, -76, -114, -118, -55, -117, -11, 0, 49, 99, -72, -50, 39, 79, -125, 107, 59, 11, 41, -103, 77, -67, 57, 118, -107, 100, 26, 5, 101, -128, -4, -84, 55, -126, -35, -123, -82, -10, 39, 23, 71, -41, -90, 71, 22, -95, 101, -87, -109, 26, 18, 76, -32, 101, 105, 22, 13, 80, -71, -78, 100, 17, -97, -107, -112, -84, 77, 65, 41, 95, 92, 65, -33, 94, 53, 20, 1, -99, -66, 85, 71, 108, -56, -100, 9, 79, -55, 61, -66, 36, 103, 9, 44, -114, 92, -110, 86, -38, 95, -86, -80, 106, -60};
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
    msg.setTimeStamp(0.39483149181032573);
    msg.setSource(40948U);
    msg.setSourceEntity(108U);
    msg.setDestination(49467U);
    msg.setDestinationEntity(126U);
    msg.source.assign("MCRHVGTXCQDKPDGGWDTHZGWHVGFAXIEHKMHNBVQCNVYBLTPGKQRIRNNOSOYKLBRDDUHOGOEMAATOSTBRSZJ");
    const signed char tmp_msg_0[] = {-51, -109, 114, -53, -53, -32, -111, -56, -40, -107, -66, 0, -107, 60, 79, 11, -28, 67, -73, -86, 76, -9, 53, -84, -127, 22, -46, 28, 43, 107, 21, -124, -13, 107, 74, 61, -81};
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
    msg.setTimeStamp(0.5746352322822506);
    msg.setSource(57895U);
    msg.setSourceEntity(91U);
    msg.setDestination(24947U);
    msg.setDestinationEntity(186U);
    msg.source.assign("FVSHBKWWAPAATHYTLGQORCDSYGJCZOQRJILJIJFPILHSCSTDFYOSDQGYHBLXSMCLLIFXCFYAFZUZEKBFWOWKDXTMRXNQNKZJESPZTHFZCBKKAYPRLMEQNPPVQMYTRGCWUIIHQMEYRDEMKVMIAXHZTGKUUEJHEGZCBVPLUXPWXMNGOROUKWINNXTWBQIYSEASTGVVQDBPRZOHVAXJNVFMGRTYFAQLOUWNDGOWBBUHUDVCKJAUPEZSJJRIEM");
    const signed char tmp_msg_0[] = {-12, -70, -119, 15, 68, -113, 124, 51, -67, -82, 63, -86, -86, -48, -40, 39, -9, -33, -13, -64, 83, 85, 112, -94, -122, -5, -56, -25, 55, -49, 90, -74, -3, -31, 3, -78, -5, -30, -25, 114, 48, 32, 69, 104, -126, 87, 56, 33, -51, 51, 21, -52, 114, 67, 28, 61, 57, -39, 97, 3, 2, -29, 48, 68, 29, 112, 97, 61, -16, -101, -10, -52, 104, 50, 84, 0, 42, -8, -98, -98, 2, 66, 10, -104, -123, 54, -58, -77, -2, -47, -55, 8, -64, -24, -76, 75, -48, 112, 16, 57, -120, 121, 88, 75, 43, -24, -28, 89, -76, 47, -52, 78, -80, -34, -34, -88, -110, -102, -117, -2, 93, -119, 33, 59, 122, 95, -93, -116, -80, 122, 52, 25, 54, -76, -20, -61, 21, -88, 41, -98, -32, -66, 93, -110, -103, -116, -104, -88, 77, 4, -56, 85, -24, 124, -32, -111, 12, -119, -112, 117, 102, 66, 50, 38, -22, -2};
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
    msg.setTimeStamp(0.8861843502543538);
    msg.setSource(17044U);
    msg.setSourceEntity(232U);
    msg.setDestination(23512U);
    msg.setDestinationEntity(92U);
    msg.source.assign("RATBNCBPQESYUTQYKIWKURSKKFHPDDMKVSSVIEJUJELIUJNYKKCLFSVJDLPAQWFGGEBJLHAOOFKCEYHKEDUPULJSZLQ");
    const signed char tmp_msg_0[] = {-28, 83, 44, 3, -17, -110, -50, 4, 86, -49, 8, 94, 122, -47, 68, -87, 90, -16, -75, -112, 14, 76, -28, 116, -107, 110, -126, -45, -49, -42, -82, 90, 35, 24, 34, 20, 52, -114, 49, -111, -32, -122, -14, 110, 122, 104, -75, -51, -126, -62, 8, -117, 32, -54, -126, -47, -77, -2, -8, -100, -87, -61, -43, -71, 57, 73, 34, -4, 41, -43, -91, 63, -40, 54, 73, -58, -46, 68, 55, -56, -121, -25, 119, 89, -56, 123, 53, -128};
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
    msg.setTimeStamp(0.9020418636309281);
    msg.setSource(58964U);
    msg.setSourceEntity(234U);
    msg.setDestination(35858U);
    msg.setDestinationEntity(48U);
    msg.seq = 2602984269U;
    msg.state = 44U;
    msg.error.assign("LJOQTGHMLGAWUQXGKQBBDLNVJOYRNTUDHCRPOOJLAFSAVZIELLXYXFVZHQSBNQBCUFXDIJGVEJIRAVGKKCBYUBVIVNRYJQZCMTBFHSGDMNOISWOMTGTBKMUW");

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
    msg.setTimeStamp(0.2551294327058026);
    msg.setSource(13553U);
    msg.setSourceEntity(13U);
    msg.setDestination(23509U);
    msg.setDestinationEntity(168U);
    msg.seq = 2412076638U;
    msg.state = 187U;
    msg.error.assign("PCHXBLETYYMPVITDOIFGFZQDWJSNLIPWKQBRQDOJECFJFZNYRAHZZETWHAMSVMAGUVJFRUHUGSMTUGEWKQXBKUPZXDWBBKRNNWSQFLRGAJBIECHXHNIXMYNSOLNUFMGAJHMCLMLPHEDLPCWBIVRDEZCFOKUTKGWDENFNATISTYVGWQTPMTDPVGFQSORJCKSZEZLOCRUQYBXVHRYAOKOCVGQBPCAZOUQJJLYITPXDYBOKXVKYESUHZL");

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
    msg.setTimeStamp(0.1502901471221706);
    msg.setSource(26669U);
    msg.setSourceEntity(192U);
    msg.setDestination(1282U);
    msg.setDestinationEntity(199U);
    msg.seq = 3031043429U;
    msg.state = 54U;
    msg.error.assign("KNZKLEXJBBUXIUJMJKUAJRHGQNOELQFRQTEPPOLLSFMFRSVNNEBCZVESJUEHLZK");

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
    msg.setTimeStamp(0.2813764999264068);
    msg.setSource(32236U);
    msg.setSourceEntity(121U);
    msg.setDestination(30026U);
    msg.setDestinationEntity(152U);
    msg.origin.assign("GPPFUPSFOXRDTCXDZXXEQMUFBGYVIYMKHEXQAUNKHADQZBBMWLVBLRBNSIJHJGCBQTEJXLZATAMSNQYESHHIXAWBSIUOMZWSEOKIQKNYXTAUCQQLMTDJPYWWZDUVJTKLAPEJTRUCGCXOM");
    msg.text.assign("FCTQPJZQDJPLKXRZKOXSHLPOLBYJLDRDETOQWBSSALGQFQNRJBAVGNIXFBOQKWMMNWP");

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
    msg.setTimeStamp(0.70116581158709);
    msg.setSource(59351U);
    msg.setSourceEntity(52U);
    msg.setDestination(50036U);
    msg.setDestinationEntity(133U);
    msg.origin.assign("JOGXFYHGRMAMKWCQXTHNQUQDTLENRRXPUCBYALSKTSJUWVDWCTWYBIIIRXOYBBNGJSTEEKVDRDLIQHAZ");
    msg.text.assign("FTFGZNNYPTURZBPXIHJOOVWHCFWRYAZGUMVEFMHZDVCECTSUNFLBOSZSZRBNGLLOHIMXSWXBTFOUF");

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
    msg.setTimeStamp(0.22956255714559015);
    msg.setSource(44195U);
    msg.setSourceEntity(66U);
    msg.setDestination(13660U);
    msg.setDestinationEntity(213U);
    msg.origin.assign("KQGBDRHGUMTVSDKSWIZYNXEGKDERHFOIQNKQVTZNVPLYUTIJMTICYEMMVI");
    msg.text.assign("YQGMKCCBLVKCOYUOCIUCBCOIKZPBY");

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
    msg.setTimeStamp(0.19697228246462972);
    msg.setSource(16651U);
    msg.setSourceEntity(111U);
    msg.setDestination(43737U);
    msg.setDestinationEntity(157U);
    msg.origin.assign("PGEZMZXGGIVFPYTGPELYDQJMKCSCBBQKMOKEOSFRYJKYNEADYTNFVZCDTULVDOUDRKGFIKVUPHOPGFHIQPBBEQLLBBONYQFIVSAARIXPQANAQCTUNDLSZVCVHTAIWMNLMXKZV");
    msg.htime = 0.5630986117579233;
    msg.lat = 0.6706038192095146;
    msg.lon = 0.7535380662528774;
    const signed char tmp_msg_0[] = {101, -34, -88, -111, -38, -108, 64, 9, 90, 112, 35, 73, 6, -77, 37, 0, 58, -1, -39, -21, 78, 101, -40, 89, -16, -28, 46, -6, -57, 92, -85, 42, 10, -54, 1, 49, -41, 44, 109, 115, 38, -73, 65};
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
    msg.setTimeStamp(0.6288560991005834);
    msg.setSource(23834U);
    msg.setSourceEntity(158U);
    msg.setDestination(51892U);
    msg.setDestinationEntity(134U);
    msg.origin.assign("QHYKEHXRAYADKGWVMUOFJFRHBRDQVEQRXXDYKGRHPDZXHDKLLTRRYCFIPSKOAXBWMTJTPPPBVAKZUUDDSQCBQNHMAICNAULWNHLFCCFCZWJBBZHOTOXXELZLETDJTIGIJCENVLIGNPTVKMJIZKUNNNETZBUWFYWQSDTTKUCMSMYHYUVEVQBLABP");
    msg.htime = 0.26777611371742316;
    msg.lat = 0.6795398964157887;
    msg.lon = 0.2016873396109099;
    const signed char tmp_msg_0[] = {-58, 120, -75, 77, -8, -64, 35, -27, 21, -58, 26, 60, 32, -75, -17, -54, 115, -85, -44, 82, 53, -79, -88, -126, -22, 110, -85, -49, 51, 10, -81, 114, 16, 85, -109, -112, -107, -59, -25, 43, -64, 17, 117, 42, 71, 44, -100, 29, 71, 72, 122, -124, -110, 122, 12, 40, 99, 1, 108, 12, -30, -90, -9, 36, -14, -26, -7, -94, 76, 24, -58, 97, -96, 120, 20, -119, -112, 66, 87, 103, 20, 74, -74, 96, -45, -16, 82, -62, -39, -75, 16, 64, -126, -69, 32, -98, -54, -57, -65, 4, -122, 61, -38, -11, -116, -60, -94, -18, 96, -10, 118, -39, -4, -73, -123, 35, 110, 50, -40, -88, 32, -118, 30, 64, 82, -107, 109, 10, -123, 51, -67, 22, -101, -102, -82, -5, -8, -38, -38, 57, -75, -31, -7, -126, -91, -66, 39, 28, 126, -93, -100, -115, -7, -56, -116, 78, 64, 43, -126, -29, -38, 43, -32, 1, 4, 106, -94, -74, 7, 99, -43, -103, -8, 109, -5, 106, -40, -86, 110, -108, 27, 100, -22, 5, 109, -80, 76, -50, -73, -43, 109, 119, 24, -45, 120, -55, 4, 81, -33, -119, -47, 55, 26, -53, -64, -75, -43, 56, 94, 56, 101, 88, -43, -15, -40, -59, 41, 122, -78, -87, -26, 46, -57, 100, 76, 8, -34, -66};
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
    msg.setTimeStamp(0.03229321410082475);
    msg.setSource(54062U);
    msg.setSourceEntity(137U);
    msg.setDestination(32776U);
    msg.setDestinationEntity(19U);
    msg.origin.assign("ZTOVGXUKGZEUJMYORZDEJNLHLYAAJWCLMQXDDBFLPXBAAJWFXVNYRFHRMNPZYXDDWCMRIXSYRGVEPJQMCETJYTOVREAOWGUUQDUSZWHSKRBRHYEIIYEWLNDTQTLKLSHBOWQFKRYJZKTVVFAKEGVOICSIOOMW");
    msg.htime = 0.009297388063220446;
    msg.lat = 0.40181716131942535;
    msg.lon = 0.23895366258931394;
    const signed char tmp_msg_0[] = {-55, 71, 79, -84, -57, 96, 105, 11, 29, 93, 68, 26, 74, 12, 73, -122, 65, -95, -80, 108, 58, 80, 105, -17, -33, -7, 111, -124, 75, 53, -14, -93, 68, -31, 12, -92, -63, 89, -33, -56, 114, -120, -105, 85, 83, -120, 37, 118, 109, -25, 70, -33, 11, 103, -58, 72, 23, -47, 62, -44, -54, -4, -50, -101, 17, -76, 90, 38, 42, 29, -97, 71, 48, 104, -108, -49, 59, -122, 96, -76, -116, -3, -43, -92, 86, -41, -110, -9, -90, 13, 107, -26, 35, -107, 88, 31, 27, 125, 25, -95, 3, -118, 77, 26, 65, -73, 76, 56, 121, -107, -115, -2, 97, -100, 90, 81, -118, 24, -58, -79, 0, 71, -71, 82, -28, 61, 37, 36, 88, 95, 9, 56, -67, -31, -103, 26, 84, 2, -38, 84, -108, -28, -117, -109, 10, -66, -33, 80, -96, -107, 36, -12, -2, 126, 121, -100, -97, -75, -101, -38, -24, -75, 117, 5, -37, 102, -69, -32, -52, -56, -113, -15, 116, 108, 115, 65, -39, -36, 113, 27, -55, -45, 43, 17, -100, -126, 50, -61, 58, 81, 36, -68, 55, -97, 44, -87, 123, 29, 25, -28, 8, -50, -71, 20, -117, -100, -3, -104, -74, 87, -95, 111, -6, 112, -122, 104, 115, 34, -17, 13, -11, 92, 11, 65, 34, 37, 122, -28, -65, 93, -9, -118, -46, -68, 89};
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
    msg.setTimeStamp(0.11819998788822605);
    msg.setSource(19904U);
    msg.setSourceEntity(188U);
    msg.setDestination(62270U);
    msg.setDestinationEntity(125U);
    msg.req_id = 1553U;
    msg.ttl = 51313U;
    msg.destination.assign("XEYWARJNHPNFMKXDRPCYNNHOTZDLBVHYYMWTOZOWIGVMILVTCVZPVMXJSCYEMVAEVCWPQIMAOWHFUHPTXBWLFFABXJUDVHREAQTNZICMYBMCWDGTQVBLBDFTYEFHQQNDLADRYWJZCAOUFQRGZOXJQRERYZSSUJYPJCFLOZXKKQDSOUKQBTCBIUHXERTWNCQWPGIPGNUSSKFVIZGOJIERPMTRJBSSELUFSXLHLDZSUKBAHKDG");
    const signed char tmp_msg_0[] = {-127, 71, 25, 0, 50, -109, -84, 34, 17, 102, 6, 0, 107, -127, 125, -54, -42, 55, 42, 126, -84, 49, -126, 104, 54, -83, 45, 18, 65, -30, -60, -79, -68, -99, -83, 42, -34, -59, -87, 100, -114, 72, 96, -36, 125, -116, -89, -75, -52, 117, -44, 40, 13, -124, -87, -64, 82, 44, 3, -71, 4, 110, -87, -94, 4, -56, -50, -33, 99, -106, 42, 113, 48, 115, 34, 120, -28, 121, 14, -21, 11, 116, -41, 107, 43, -30, 19, -58, 69, 15, 89, -9, 26, -81, -31, -84, 26, 84, -32, 86, 27, 26, -19, -66, 13, -127, 31, -84, 6, -84, -32, -60, -104, 4, 85, 108, 112, 67, 20, -47, 14, -1, -107, 87, -14, -42, -72, -107, -13, 97, 110, 27, 49, 120, -127, -8, 77, -110, 97, 68, -52, 49, -96, 58, 11, -31, 12, -80, 64, 55, 77, 86, -59, -86, 57, -33, -40, 117, 35, 45, -97, 49, 35, 13, 57, 125, 105, -120, 61, -106, 111, 121, 121, 44, -115, -12, -17, -58, -111, 116, -20, 43, -90, -3};
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
    msg.setTimeStamp(0.8821429177478756);
    msg.setSource(54081U);
    msg.setSourceEntity(203U);
    msg.setDestination(19119U);
    msg.setDestinationEntity(14U);
    msg.req_id = 36022U;
    msg.ttl = 278U;
    msg.destination.assign("VFNLOYCLXQYOLJHLAQRBJEUTEHNVCBBIWAZDKIZKGOQJFFEKXBCMFMCGYFWOGWORRFEFOZBCZIXKVJATEQPMGRIUYPLJSRCNXKTYGTJVPEDQSDWSMLRSRWAWXNVANKEDLDBMHMUZDHASINFLDUGPOHIIKGRMQDJOBDHHWHXLBNKPNDVAQJCRQUCCZXFSEMSALPTUVIGKZYOWXUTO");
    const signed char tmp_msg_0[] = {-29, -21, -53, 82, 36, -122, -3, -55, 58, 15, -22, -87, -103, 33, -113, 96, -55, 106, -62, 57, 93, -67, -98, 15, -91, -54, -83, 39, 58, 117, -85, -57, 26, 29, 120, -110, 21, -8, -108, 15, -123, 10, 35, -96, -91, 21, 126, -27, -25, -82, 122, 24, -81, 122, 75, -125, -2, 96, 31, 62, 11, -96, -65, -42, 124, -80, 78, -31, -113, 49, -70, 60, -96, -59, 103, -107, 63, 100, -61, 64, -36, -94, -12, -46, -111, 58, 50, 63, 44, -53, -95, 104, 1, -42, 108, -24, -42, 2, -9, 114, -7, -44, -1, -39, 17, -119, 59, -110, -58, -127, -10, 49, 97, 38, 62, 24, -124, 11, -117, 80, -72, 96, -44, 56, 112, -31, -27, 110, -61, 57, -92, -31, 105, 102, -109, -6, -50, -39, 109, 104, -11, 76, -64, -106, -25, 23, -44, -27, -83, 118, -49, -13, 12, -122, 74, -119, -30, 97, 24, 63, -40, -100, 108, 81, 15, 16, -56, 126, -86, 4, 5, -75, 87, -51, -92, 60, 17, 108, 23, -4, 35, 0, 30, -110, 117, 103, 82, 9, 96, -18, -79, -42, 16, 101, 90, 11, -26, -70, 19, 115, 54, -53, 59, -92, -82, 38, 100, 16, 36, -33, -10, -52, 39, -123, -114};
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
    msg.setTimeStamp(0.7044806656519744);
    msg.setSource(36468U);
    msg.setSourceEntity(254U);
    msg.setDestination(50670U);
    msg.setDestinationEntity(158U);
    msg.req_id = 29438U;
    msg.ttl = 11992U;
    msg.destination.assign("CXLDRIMNCKDZBWUMVSMGEPZIXXSGABGBHUUUOOJSNZUFWJAOZJEKFORIHCKINXFFQZWDKUJPJCUWRRKAEVRSXIUTOCMCHEORLGRZBVVFGNHPWLQRDTYCDMSLVMMTXOGZHFHGPARLPHSNQKYXBBDBYBPIDZXAEVSRBAMVEFKVXEFJKYHLIYFFEAZNKNQQEPWYQWQYUOLCLCJPGPGIIJJSOCDTEMKAXVQYHQMDLLBTAAS");
    const signed char tmp_msg_0[] = {51, -88, -5, 100, -126, -83, -11, -27, -76, 109, 81, 92, 82, -8, -82, -98, 68, 60, 126, -65, 7, -68, -86, 35, -80, 64, -17, 96, 35, -73, -111, 101, 82, 125, 0, -53, -92, -21, -38, -64, 60, -15, -16, -14, 8, -60, -85, -74, 77, -4, -91, -114, 120, 105, 58, 57, 0, 58, -79, 111, -6, -128, -78, -3, -122, -17, -16, 52, 76, 38, 122, -2, 0, 54, -95, -74, 31, 119, 22, 15, -80, -108, -64, -69, -79, -20, 4, -100, -87, 25, -11, 9, 57, -16, 22, 25, 108, -49, -59, 96, -86, 82, -2, -53, 39, -77, -47, -122, 54, -47, 80, -27, 61, -28, -23, -85, -114, -100, 89, -55, -111, -74, -77, 77, 119, 90, 97, 30, -116, 6, -115, 124, 79, -21, -71, 76, -51, -120, -65, 31, 27, 33, 50, 104, -113, -125, -73, 4, -41, -107, -91, 66, 33, -95, 17, -80, 49, 49, -123, -59, 16, -59, 85, -63, -101, -14, -8, 50, 86, -63, 29, 104, -58, -44, -114, 62, 33, 89, 33, 77, -123, 27, 81, -10, -59, -25, 12, -14, 91, 83, 66, 118, -89, 9, 62, 67, 60, -57, 13, -85, -85};
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
    msg.setTimeStamp(0.6434535000708913);
    msg.setSource(4062U);
    msg.setSourceEntity(8U);
    msg.setDestination(37194U);
    msg.setDestinationEntity(35U);
    msg.req_id = 21719U;
    msg.status = 188U;
    msg.text.assign("NNYZQWEMLUDSWXMBFNLBCMVRKCBEJASUBLNOXYCPPGEFZVXZVAPGFUUNJYHPGFHPUTSMXZLWZYIBUSCRMCXOKQGUHYLWVCESTTMJXOTVPXEB");

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
    msg.setTimeStamp(0.4570053948831123);
    msg.setSource(45559U);
    msg.setSourceEntity(154U);
    msg.setDestination(19278U);
    msg.setDestinationEntity(183U);
    msg.req_id = 27052U;
    msg.status = 20U;
    msg.text.assign("CAMPXDOBPIAKLVTFLJKIQCNCDHUGIHDORYYUNGWZHFDRVMNMSXEVLZHNJZYYREGONBFTKLKZXNSWTPOTJYFJJSTBLCQAEQZDXUEWVTJVGSVIRDNHMMKHJQDOIRZSXURAWRWPPOUNQCMIIKOWKVGWLRRMXFPLESESOGRDPJCQ");

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
    msg.setTimeStamp(0.03772363602294593);
    msg.setSource(17241U);
    msg.setSourceEntity(153U);
    msg.setDestination(43731U);
    msg.setDestinationEntity(228U);
    msg.req_id = 11488U;
    msg.status = 60U;
    msg.text.assign("TYMWGFPEBUYRQOLQINJZYJODJDSRWMXIGXDEAGBBGNAOQQGJMUXNQUYPGVNPIJHLSKYFCZOCBWNFVIFQTAVAMHIMXKKOSAZAJKZQWTDHIBIYPKKTCJLPULNOSMROHETXFSDJXURAPVFIKWHKQCXCOL");

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
    msg.setTimeStamp(0.5839527981621736);
    msg.setSource(7611U);
    msg.setSourceEntity(53U);
    msg.setDestination(30187U);
    msg.setDestinationEntity(132U);
    msg.group_name.assign("VIBUBCZPKWSAJZZNHUUVDJCXRXOCCTBOPCRIUFNVIMYQJPBKBWGHIINWBVDZTMMDCHAMJGHLBVNMDRAOLPEYOXZYXZPYKAGQKLYXKSFRDLURROPSAMPJZZIFHIOKEFJBHYBDMGDFGOXYWBULLJFNFYCKWUNSPDCRHCZKSKTVEGSESQTXELWDIYNRQTVOQKDUAAHVJPTNMWTOEYFTGAQUJQWLLFQLWOPITEUCGQ");
    msg.links = 2696979641U;

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
    msg.setTimeStamp(0.904860490402562);
    msg.setSource(2864U);
    msg.setSourceEntity(123U);
    msg.setDestination(47018U);
    msg.setDestinationEntity(85U);
    msg.group_name.assign("RYEVAUPYDVSVUTMXYSWIZAOCJJHQXKEKCJPNPYGWILDUWGVVTHSZNEATDZHQKHNWMJLDRWE");
    msg.links = 512908258U;

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
    msg.setTimeStamp(0.45747810178826964);
    msg.setSource(57246U);
    msg.setSourceEntity(29U);
    msg.setDestination(2106U);
    msg.setDestinationEntity(46U);
    msg.group_name.assign("WGPGDBOSUFLHNSQPJSYVROYHJQVERKWLHDARGSMCWCVCGNUUEIDQVNEMUMESAIFBTMFSQUTXKNJSUTCPQVCTOXJRQGGBPEFGDLBAQYEKYRZYMXXWDXVNWOUFHSYKTFAFXPOCLPJR");
    msg.links = 380512920U;

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
    msg.setTimeStamp(0.006546763546025125);
    msg.setSource(41667U);
    msg.setSourceEntity(201U);
    msg.setDestination(45016U);
    msg.setDestinationEntity(19U);
    msg.groupname.assign("BWGODKWXQEIISECBPQCNOTNAOFRPUCPEGNUYSKSXXLBCHWJYFTUHFGHFHOKIXHON");
    msg.action = 44U;
    msg.grouplist.assign("RGIYKFNLRBDOCGRDOKKHFUGYZOSDQEAQOKFGFVYPSBIMZVTZQMANVFRUMEAZFKUWHVSIIERPEJWOYXSTYLBBXQZINNXTSLNDALZHPAWJUXMKYRRKAPHPQHCHYHBOMGBXJWTISFSVKNVWHCCPJGNKJLGFAOWVZBLQTNPUBYDSZHJQBTMPEXATWCIMITESNGVGCLSGWMRLMOEJPHZQLLPNXXEUDIVEUFUIDDCX");

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
    msg.setTimeStamp(0.43105388428555613);
    msg.setSource(40351U);
    msg.setSourceEntity(248U);
    msg.setDestination(52231U);
    msg.setDestinationEntity(141U);
    msg.groupname.assign("AZVYNZCSHHSCWADQLYAPEKIZWSOQWKJEDSHXFPYTQWOINNBP");
    msg.action = 254U;
    msg.grouplist.assign("ZALMREKRFUWUDTSQBHIHOMXFRFYSLZYCOXHVIJQPFHCFASSILKJBOYWMDSHPFDFQCIDUVWLKULCPXNJTBEBVJIYNSMMVXKQBCFZFHITAXDWOAYQERSIFGOWPXVPHOHBECTACIGBTCMPEXAZGKNOUBRLOVRVPGDOJGSSYZUBKESEXRNHPNQYXCLGCNBQMPATZRJMETWWMDNLWKZAUPNGJDLJYTGRKNVYWVMDGZKEUTAADNQ");

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
    msg.setTimeStamp(0.9506861430475602);
    msg.setSource(18218U);
    msg.setSourceEntity(98U);
    msg.setDestination(12852U);
    msg.setDestinationEntity(155U);
    msg.groupname.assign("KJADMEZIWWOLJZBRVLCLXIDEGNBDZVQMITRDMLXBMTEXTDIXLDSEWRYIDTXZXTNTCZPUJQTVXPAUXUYOBYREFKNAUXSAMJULAERYGQRNYEKOAJWZDYQHHVPFSJBRPJLBOKCVZTYOKSWCEUFPJPQDRKMSQBAGKKOLEHNINSHGIDIMUUCCGPSMSFHJVVGAMFNPOWKQHBITGHWCNWLFLUKXPYFZPBG");
    msg.action = 108U;
    msg.grouplist.assign("EOSYHBKGKMYLWZUBCKSPHQSGAWKKZVGAWOVUFFOETWOIRSMQCGDCWJISMJDNVPZUYACCNAXREFQBTGQHAMBGTULTGJYRITZKQSXXBNODMUEARPZVBHOIVWFVNMEZCRMCLWYBYDEDYKZSJHXMGUOUHXPLFNUZQNKPRJQAM");

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
    msg.setTimeStamp(0.6272146750213932);
    msg.setSource(21454U);
    msg.setSourceEntity(235U);
    msg.setDestination(6141U);
    msg.setDestinationEntity(106U);
    msg.value = 0.7542521681127284;
    msg.sys_src = 24089U;

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
    msg.setTimeStamp(0.6220489464602038);
    msg.setSource(60574U);
    msg.setSourceEntity(185U);
    msg.setDestination(35513U);
    msg.setDestinationEntity(238U);
    msg.value = 0.5566534671331631;
    msg.sys_src = 45986U;

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
    msg.setTimeStamp(0.736523705509195);
    msg.setSource(41147U);
    msg.setSourceEntity(60U);
    msg.setDestination(46256U);
    msg.setDestinationEntity(90U);
    msg.value = 0.27517601340006126;
    msg.sys_src = 42334U;

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
    msg.setTimeStamp(0.7983499835648676);
    msg.setSource(57156U);
    msg.setSourceEntity(214U);
    msg.setDestination(12456U);
    msg.setDestinationEntity(84U);
    msg.value = 0.5844611577695326;
    msg.units = 202U;

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
    msg.setTimeStamp(0.9942590340771431);
    msg.setSource(4597U);
    msg.setSourceEntity(144U);
    msg.setDestination(57277U);
    msg.setDestinationEntity(245U);
    msg.value = 0.5233811337720317;
    msg.units = 23U;

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
    msg.setTimeStamp(0.5473225909293679);
    msg.setSource(10546U);
    msg.setSourceEntity(235U);
    msg.setDestination(43811U);
    msg.setDestinationEntity(178U);
    msg.value = 0.47651074819186034;
    msg.units = 213U;

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
    msg.setTimeStamp(0.20072788522367047);
    msg.setSource(6414U);
    msg.setSourceEntity(167U);
    msg.setDestination(62649U);
    msg.setDestinationEntity(57U);
    msg.base_lat = 0.11864530011868701;
    msg.base_lon = 0.45119716487015793;
    msg.base_time = 0.1835235956970368;

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
    msg.setTimeStamp(0.11217262940979977);
    msg.setSource(42015U);
    msg.setSourceEntity(203U);
    msg.setDestination(50413U);
    msg.setDestinationEntity(147U);
    msg.base_lat = 0.4230786280314417;
    msg.base_lon = 0.599699392640078;
    msg.base_time = 0.3223418278757171;

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
    msg.setTimeStamp(0.859206975836452);
    msg.setSource(59429U);
    msg.setSourceEntity(122U);
    msg.setDestination(3123U);
    msg.setDestinationEntity(198U);
    msg.base_lat = 0.9586376960653199;
    msg.base_lon = 0.2580028351331548;
    msg.base_time = 0.8879285948274834;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 38472U;
    tmp_msg_0.priority = 32;
    tmp_msg_0.x = -29132;
    tmp_msg_0.y = -28919;
    tmp_msg_0.z = 23946;
    tmp_msg_0.t = -18504;
    IMC::TrexOperation tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.op = 181U;
    tmp_tmp_msg_0_0.goal_id.assign("CSHNDUWHQHNSPYKRQHCTYZYMLTUVPNBQJKDEWJOBAAXAHRMFPIOUASBWBEDJLKLOGEPHIVJNDQMVIVFZSDNUDYTWDZFWQGPBXYSUGKGAXJEWTTEPCSOKFPQADJHOPGFPLNJVLIXZRRFCOVIGRCMSGYYMXIMELVOSSXIUFLORLKCISHBKVUEJCCZZXOAJMWRKFZYR");
    IMC::TrexToken tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeline.assign("WNWSYASGKIDBZUGCTHGZMSHOCINXSOJKYTZNWWOLXUDHJHQENGEBPRVCGPPCJEMOLIUNAAYXEXTBOEAJYFUSBKGXDLCRUQDDHDACMGVZBTZSNVHLMUPCEVJYDLRGTUL");
    tmp_tmp_tmp_msg_0_0_0.predicate.assign("HHVWODMSLBAWGPOSPKXRFWTYHAORSRKZWSCTUHWLUCPMQYICYRAYQPPXRCWIUCJVXLUECNUOSNVYMNKEPSOIYZJQGABXTTVGOPGZUJIVBRTQMXDGZKHJRDWNWOMVZQGTZCDHINKICHLLQGDZOAEFQKLYLSMSEDGMVTJCFBQNHLUUJFBZVEFBEAKSZINGAFBAVMJUDFUEYLGSCDVMOWXQXQAOIXBPLMBNRXDZNXEFNYEHJTFPJYREKKH");
    tmp_tmp_msg_0_0.token.set(tmp_tmp_tmp_msg_0_0_0);
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
    msg.setTimeStamp(0.7445812658015277);
    msg.setSource(16289U);
    msg.setSourceEntity(33U);
    msg.setDestination(60025U);
    msg.setDestinationEntity(77U);
    msg.base_lat = 0.9869008226155328;
    msg.base_lon = 0.23332423570960115;
    msg.base_time = 0.5029815632307978;
    const signed char tmp_msg_0[] = {-105, -56, 40, -20, -51, -116, -45, 73, 48, 80, -53, 107, 110, -16, 117, 124, -81, 51, -28, -121, 62, 40, 20, 68, 77, 49, 31, 57, -80, -13, -61, -99, -28, 8, 87, 80, -15, -90, -65, -71, 102, -86};
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
    msg.setTimeStamp(0.3472166869304616);
    msg.setSource(59794U);
    msg.setSourceEntity(90U);
    msg.setDestination(1786U);
    msg.setDestinationEntity(140U);
    msg.base_lat = 0.8235329369532869;
    msg.base_lon = 0.7864972238188518;
    msg.base_time = 0.9740356957358232;
    const signed char tmp_msg_0[] = {42, 39, -2, -115, 48, -3, 112, 8, 92, -98, 77, 75, -51, 122, 125, -22, -36, 61, -40, 67, -16, 71, 45, 121, 122, -91, 14, -92, 50, -111, 92, 120, 56, 47, 84, -85, -37, 0, -92, -89, 43, -106, 34, 122, -47};
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
    msg.setTimeStamp(0.7395302890978627);
    msg.setSource(4611U);
    msg.setSourceEntity(190U);
    msg.setDestination(330U);
    msg.setDestinationEntity(112U);
    msg.base_lat = 0.37494785751113757;
    msg.base_lon = 0.43562364105247287;
    msg.base_time = 0.44376320493942123;
    const signed char tmp_msg_0[] = {72, 14, -104, 21, -117, -23, -45, 6, 116, 111, 25, 11, -15, -31, 55, -16, 34, -100, -63, 78, -88, 30, -4, 21, 65, -113, 122, -117, -120, -120, -128, 54, -36, -28, 95, -10, -74, 64, 16, -80, 118, 15, 61, 28, 117, -24, -5, 31, -31, 29, -58, -56, -35, -23, 94, -72, 76, -94, 69, 126, -18, -82, 72, -63, 115, 93, 125, -28, -53, -98, -86, -86, 11, -22, 90, 63, -91, -37, -72, -37, -19, 65, -18, 48, -110, -24, 118, 34, -84, -32, -108, -56, -6, 55, 65, 2, 106, -99, -88, -99, -67, -25, 9, 49, 0, -75, -30, -50, -119, -66, 24, -88, 30, 84, 81, -61, -10, 103, -2, 93, 54, 100, -3, -100, 68, 100, 124, 93, 54, -40, 72, 20, 5, 17, -4, 28, 59, -11, 50, 6, -126, -125, 44, -67, -71, -71, 98, 33, -119, 86, 82, 5, -39, -7, 52, 1, 126, 118, -64, -93, 26, -29, -4, -86, 113, 100, -68, 111, 98, 52, -19, 106, 124, -109, 14, 16, -100, -70, -77, -125, 68, 6, -113, 122, -78, -94, 89, 6, -27, 38, -62, 91, -7, -2, 29, -84, 65, -35, -109, 108, -51, 48, -115, -118, 77, -69, 4, 87, 82, 119, -35, 23, 90, 118, -116, 14, 68, 84, 76, 0, -108, 3, -34, -116, -13, 67, -28, -121, 71, -77, 10, 89, -99, 121, 37, -15, -13, -48, -98, 64, -89, -19, -60, -8, -50, 112, -47, 114};
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
    msg.setTimeStamp(0.38203153560843706);
    msg.setSource(41162U);
    msg.setSourceEntity(167U);
    msg.setDestination(15195U);
    msg.setDestinationEntity(245U);
    msg.sys_id = 63279U;
    msg.priority = -17;
    msg.x = 12430;
    msg.y = -25670;
    msg.z = 15714;
    msg.t = -7301;
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.09851551325169838;
    tmp_msg_0.lat = 0.15365935862006763;
    tmp_msg_0.lon = 0.8306737446655006;
    tmp_msg_0.z = 0.5621011406425168;
    tmp_msg_0.z_units = 241U;
    tmp_msg_0.travel_z = 0.8529103444512425;
    tmp_msg_0.travel_z_units = 64U;
    tmp_msg_0.delayed = 139U;
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
    msg.setTimeStamp(0.09341083447100396);
    msg.setSource(11399U);
    msg.setSourceEntity(105U);
    msg.setDestination(17488U);
    msg.setDestinationEntity(101U);
    msg.sys_id = 26438U;
    msg.priority = -115;
    msg.x = 18039;
    msg.y = 6917;
    msg.z = 15280;
    msg.t = -398;
    IMC::FluorescentDissolvedOrganicMatter tmp_msg_0;
    tmp_msg_0.value = 0.8165296776646664;
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
    msg.setTimeStamp(0.18249282052485039);
    msg.setSource(63439U);
    msg.setSourceEntity(32U);
    msg.setDestination(7789U);
    msg.setDestinationEntity(98U);
    msg.sys_id = 36637U;
    msg.priority = 28;
    msg.x = -31425;
    msg.y = 8821;
    msg.z = -4430;
    msg.t = 643;
    IMC::UsblFixExtended tmp_msg_0;
    tmp_msg_0.target.assign("PXMRGOZRKIKPJFLWANJJERBTQXAURQKWDFODSYHNLFCPJVFNTZOTEIBCTIKTQHVGYR");
    tmp_msg_0.lat = 0.4701216113043397;
    tmp_msg_0.lon = 0.6172819259377382;
    tmp_msg_0.z_units = 3U;
    tmp_msg_0.z = 0.6383373058797626;
    tmp_msg_0.accuracy = 0.13335817712768316;
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
    msg.setTimeStamp(0.4594681818453441);
    msg.setSource(40939U);
    msg.setSourceEntity(29U);
    msg.setDestination(5551U);
    msg.setDestinationEntity(67U);
    msg.req_id = 25492U;
    msg.type = 82U;
    msg.max_size = 52978U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.40157250405731537;
    tmp_msg_0.base_lon = 0.3327720151183883;
    tmp_msg_0.base_time = 0.12523846229629432;
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
    msg.setTimeStamp(0.8556386271685117);
    msg.setSource(16127U);
    msg.setSourceEntity(55U);
    msg.setDestination(45511U);
    msg.setDestinationEntity(208U);
    msg.req_id = 44979U;
    msg.type = 182U;
    msg.max_size = 59040U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.24250575209470648;
    tmp_msg_0.base_lon = 0.9831655236762306;
    tmp_msg_0.base_time = 0.2894177757503166;
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
    msg.setTimeStamp(0.4976936641976666);
    msg.setSource(15124U);
    msg.setSourceEntity(133U);
    msg.setDestination(53969U);
    msg.setDestinationEntity(225U);
    msg.req_id = 40391U;
    msg.type = 14U;
    msg.max_size = 3107U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.5985830689691665;
    tmp_msg_0.base_lon = 0.3179352185924813;
    tmp_msg_0.base_time = 0.1730723451939472;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 23589U;
    tmp_tmp_msg_0_0.destination = 6210U;
    tmp_tmp_msg_0_0.timeout = 0.7451199078736197;
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.vid = 28029U;
    tmp_tmp_tmp_msg_0_0_0.off_x = 0.5928246922565769;
    tmp_tmp_tmp_msg_0_0_0.off_y = 0.8115972335468922;
    tmp_tmp_tmp_msg_0_0_0.off_z = 0.7948656805620239;
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
    msg.setTimeStamp(0.4589702471499034);
    msg.setSource(46386U);
    msg.setSourceEntity(36U);
    msg.setDestination(54719U);
    msg.setDestinationEntity(34U);
    msg.original_source = 22524U;
    msg.destination = 54872U;
    msg.timeout = 0.6824230328784007;
    IMC::AllocatedControlTorques tmp_msg_0;
    tmp_msg_0.k = 0.4305106322885651;
    tmp_msg_0.m = 0.9882929783147597;
    tmp_msg_0.n = 0.6794789611505403;
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
    msg.setTimeStamp(0.30270998867560694);
    msg.setSource(41818U);
    msg.setSourceEntity(83U);
    msg.setDestination(49770U);
    msg.setDestinationEntity(2U);
    msg.original_source = 17966U;
    msg.destination = 2825U;
    msg.timeout = 0.16191601693726154;
    IMC::SoiCommand tmp_msg_0;
    tmp_msg_0.type = 238U;
    tmp_msg_0.command = 138U;
    tmp_msg_0.settings.assign("CZOCNQTGYNRPLRVTDTILKBQDCIGCYSLNVRROZYPLZANTJDRNELAXPWUFLSJRNZUGAWEDDISAVJXDIVIPMVXBFOOYNGWFGHMCZFGMMQHKCPMALYSQ");
    IMC::SoiPlan tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.plan_id = 17096U;
    IMC::SoiWaypoint tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.033150887160900644;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.6843786861213612;
    tmp_tmp_tmp_msg_0_0_0.eta = 256612037U;
    tmp_tmp_tmp_msg_0_0_0.duration = 46010U;
    tmp_tmp_msg_0_0.waypoints.push_back(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.plan.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("DRGODCDSLELTTXUDGYNIGAPUJKRUUHHKGVJZIHURYTVYXEGAFPLOWJNRBWMOTBMUNSJOOEKLUOCQDVURLYFIQSQWCTRXYUXPWXAXNNUYDJVDMTYKETMLMEBZOCZN");
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
    msg.setTimeStamp(0.20131030399327332);
    msg.setSource(40066U);
    msg.setSourceEntity(109U);
    msg.setDestination(63125U);
    msg.setDestinationEntity(115U);
    msg.original_source = 45162U;
    msg.destination = 18130U;
    msg.timeout = 0.7847890104108187;
    IMC::UsblPositionExtended tmp_msg_0;
    tmp_msg_0.target.assign("TIXAORPBQQVTGEOSDMCWBWWHGKOYTUPYJMOPRKDKOOSHERSLBGREAOATTPQNJVCTRSNTXSKMDHQZVWVADHIBMLVLYFJGGMYPZXJ");
    tmp_msg_0.x = 0.3141216438557132;
    tmp_msg_0.y = 0.17367780519828901;
    tmp_msg_0.z = 0.8298266030582789;
    tmp_msg_0.n = 0.2460051194130074;
    tmp_msg_0.e = 0.7276192378295347;
    tmp_msg_0.d = 0.5886782149167789;
    tmp_msg_0.phi = 0.14123933728408689;
    tmp_msg_0.theta = 0.1825554267320365;
    tmp_msg_0.psi = 0.9892966686434812;
    tmp_msg_0.accuracy = 0.07508308944480446;
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
    msg.setTimeStamp(0.13975026265052437);
    msg.setSource(28604U);
    msg.setSourceEntity(97U);
    msg.setDestination(43072U);
    msg.setDestinationEntity(65U);
    msg.type = 245U;
    msg.comm_interface = 42933U;
    msg.model = 23357U;
    msg.list.assign("GIXFHDWEUDBVHAPWEPRNWGKIEKVZULHSKLJGJKRSNMIKWBQNCUJZIKETBWCXAGTVCPHDUFDUQPZEWFBCRSGUGJOMMAMRHOMWZHSSYYPFTWZJIQQSLLDKTQQTXMAJNRXVEYUICEVQ");

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
    msg.setTimeStamp(0.2527372930880857);
    msg.setSource(39537U);
    msg.setSourceEntity(183U);
    msg.setDestination(8209U);
    msg.setDestinationEntity(59U);
    msg.type = 203U;
    msg.comm_interface = 23543U;
    msg.model = 22841U;
    msg.list.assign("MCNFJZRZYTHHQFZEIEUGGQODRLOHCHKPQTNFG");

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
    msg.setTimeStamp(0.3702494685826826);
    msg.setSource(48552U);
    msg.setSourceEntity(181U);
    msg.setDestination(59206U);
    msg.setDestinationEntity(39U);
    msg.type = 139U;
    msg.comm_interface = 33058U;
    msg.model = 34335U;
    msg.list.assign("IIAWUNDXSFKGMTSFPLTJNHLAXTBFHECFRRTFMWBDHEMBWHNJBORDWLWTWKUWCPGXREJYOOPYI");

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
    msg.setTimeStamp(0.5886260819456522);
    msg.setSource(11955U);
    msg.setSourceEntity(170U);
    msg.setDestination(15143U);
    msg.setDestinationEntity(18U);
    msg.type = 245U;
    msg.req_id = 2515480948U;
    msg.ttl = 56175U;
    msg.code = 178U;
    msg.destination.assign("YHOYPZPCCXIJHAEPKTJABGPRMWHVYQKWWGLAOULHEFDJOTMJMPCIIWBDPKKHLQNRTQKDBVDJBEGTBHMYZBSSEMESLYTUKZPGAJVFRHWZOUUWHQQYVIYSIEBVBAWXXXUYYTGANKVFSDJCOFJMSILSQNNCGZTFQAKCESCDXGPCSPRMOUNGHDEDUJMVAXLDNKZBTQXCVRGQURZHMFYPWNVXIOFUELRRXOOIZRAGWLIZBWRFOIANTVLCSKDUMTZJF");
    msg.source.assign("WSIQAIMOONYPTXQICTQAJOVLKZBFTUSTLVJKEZXLPBXJDIRWAXHJUTHHRGCUCLNFPQMOOMOXHDLZVKWKBFLAMINAJJZHRNNGNWQQPOCYDOGBJEIIHCAZKDIROICDSVUVDVEZDPPZSLFEKPOBTALPBVPYKMKRQFSBDCEZQPAGNRGYIUSZJEQW");
    msg.acknowledge = 34U;
    msg.status = 191U;
    const signed char tmp_msg_0[] = {51, 82, 12, -21, 34, -2, -65, -20, -113, -9, -11, -112, 15, -74, -45, -100, 48, 64, 12, -1, 48, 12, -31, 60, 40};
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
    msg.setTimeStamp(0.024162517096908087);
    msg.setSource(11459U);
    msg.setSourceEntity(177U);
    msg.setDestination(62336U);
    msg.setDestinationEntity(63U);
    msg.type = 185U;
    msg.req_id = 2234288257U;
    msg.ttl = 44861U;
    msg.code = 6U;
    msg.destination.assign("CZOVXFDLOBKTBXXQYOMEYNJIRONJCUAXMUYWRGVIMOJWHPACPTPMFNJMBLGILUGYNGARUARAEDQQCWBQYAXPTJLJTNKGUBXEUDMMKYBGVJQZPVEGUZHNFWSTWDYEJEAPNIZFQQZHWCCHNJSFEUKKYBMXHSGEFIAVZYSXDHWMZLZHLQSO");
    msg.source.assign("FBAGZSBXXDWVTEBDJQIJLSVEDQZIUEGCYLUOWXJLYOAECCNBPKKZOIXROTGQCGJREKBSUNVYXPPJNHMRQHAIBCSSXQLAPMRCZPDCWHPTHAHPOOUQHFIYTQOMLMMOQVOFCXTKGJWQFBSFMAOHWUDZZFZYCZTGFDZLVGFKFYVTY");
    msg.acknowledge = 172U;
    msg.status = 38U;
    const signed char tmp_msg_0[] = {-21, 115, -22, -45, 21, 61, 70, -42, -48, 92, -32, 67, -66, -123, 96, 108, -124, 73, -94, 123, -113, -91, 76, -57, 100, -5, -29, 6, -54, -15, 19, -109, -84, 5, 77, 101, 121, 123, -14, -99, -63, 70, 77, -18, 10, 34, 62, -22, 49, 58, 42, -26, 25, 17, 89, -106, 10, -23, -101, -18, -27, -76, 104, -126, -24, 24, 14, -85, 88, 88, 74, -14, -1, 104, 24, -79, 90, 2, 104, 77, -64, 93, 112, 83, 61, 121, 75, 32, -64, 69, -66, -42, -108, 18, -124, -107, 64, -77, -105, -97, -112, 73, -58, 52, 59, -62, -15, -125, -117, -128, 111, 118, -102, -90, 108, -103, -62, -85, -120, 88, -25, -120, -84, -88, 81, -82, -24, 86, 74, -33, 3, 88, 35, 121, 17, 13, -117, -19, 46, -14, 40, 31, 120, 61, 39, 68, 109, -93, 88, -23, -87, -84, 100, -111, -114, 2, -41, 90, 60, 0, -34, -37, -93, 13, -20, -82, 61, 90, -31, 121, -49, 28, -51, 7, 3, -56, -31, -17, -120, -47, -4, -118, 30, 11, 88, -31, -11, 51, -23, 12, 24, 75, -31, -109, -102, -79, 6, -75, 71, -103, 67};
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
    msg.setTimeStamp(0.7700900389240984);
    msg.setSource(15876U);
    msg.setSourceEntity(64U);
    msg.setDestination(23839U);
    msg.setDestinationEntity(13U);
    msg.type = 239U;
    msg.req_id = 2905351230U;
    msg.ttl = 61690U;
    msg.code = 25U;
    msg.destination.assign("WFQIYCLRXLWBPKKVHAORGFEOAEXJSELMZKNVGWWANPRGTFNTBNGJJIIZRNRDWOUDTXAYRRYEXLLIHMCEXTSPLPZTKWBGQBVQM");
    msg.source.assign("YKEVXHYLMAFIWWCVCZYVJBCWARXBOGWQUPBJISISENGUUCOLAFQGJGAUHIRYSWKKIWNHZGVDZTGINOECOPXMOKRHVLDWYH");
    msg.acknowledge = 95U;
    msg.status = 190U;
    const signed char tmp_msg_0[] = {120, -43, 115, 119, -110, -66, -11, -4, 39, 69, -28, 65, -127, -20, 112, -114, 111, -51, 109, -72, -108, 120, -79, -16, -4, 70, 42, 28, 52, -118, 39, -55, 24, 27, 88, -86, -62, 32, 47, 70, -61, -102, -48, -65, -13, 117, -33, -9, -111, -120, -122, 74, -20, 87, -29, -101, 61, -26, 46, -87, -65, 93, 15, 44, -13, -22, -42, -35, -92, 7, -67, -47, 55, 118, 15, 79, -28, 26, -65, 61, -48, 43, 47, 30, 66, 80, -64, -76, 50, 73, 99, -69, -70, 120, 33, 121, -8, -109, -92, 12, -124, 86, 29, 66, -88, 68, -55, -1, 48, -31, -74, 114, 114, -112, -117, -120, 48, -3, -36, -115, 69, -43, 83, -18, 82, 21, 0, 53, 117, 70, 44, -10, -81, 97, 36, 26, 26, 45, -115, 12, 38, 3, -99, 66, -93, 117, -65, -77, 126, 106, 123, 114, 13, 109, -34, -127, 54, -78, 94, 54, -12, -34, -71, -46, -31, -109, 69, -85, -50, -110, -120, -9, -45, -66, -26, 80, 66};
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
    msg.setTimeStamp(0.11546976131662723);
    msg.setSource(12855U);
    msg.setSourceEntity(163U);
    msg.setDestination(45512U);
    msg.setDestinationEntity(186U);
    msg.id = 134U;
    msg.range = 0.6021177170731967;

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
    msg.setTimeStamp(0.4439021144204164);
    msg.setSource(64102U);
    msg.setSourceEntity(60U);
    msg.setDestination(15735U);
    msg.setDestinationEntity(254U);
    msg.id = 180U;
    msg.range = 0.2038393842162355;

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
    msg.setTimeStamp(0.9231947331013951);
    msg.setSource(16816U);
    msg.setSourceEntity(22U);
    msg.setDestination(12993U);
    msg.setDestinationEntity(247U);
    msg.id = 152U;
    msg.range = 0.07439649049868413;

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
    msg.setTimeStamp(0.8199334276966991);
    msg.setSource(24998U);
    msg.setSourceEntity(178U);
    msg.setDestination(30331U);
    msg.setDestinationEntity(220U);
    msg.beacon.assign("DETQPRFGKPUONGHKJDINPUQXESSQDGZJTWLKDXISDCMCDKJBDNRGVQHIZMZBNZNGTHVXDYFVVTJFRUDMAXKVSBEBJUELZTLSSYXBRAFOOWKWFIHWCBUBSHRPMFLMECUQYSS");
    msg.lat = 0.4971521030728846;
    msg.lon = 0.23564285482229863;
    msg.depth = 0.5414007778415241;
    msg.query_channel = 185U;
    msg.reply_channel = 2U;
    msg.transponder_delay = 231U;

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
    msg.setTimeStamp(0.691852627395802);
    msg.setSource(39860U);
    msg.setSourceEntity(7U);
    msg.setDestination(33554U);
    msg.setDestinationEntity(233U);
    msg.beacon.assign("AJRWWKKLGHEIFHRZZTAPMBIYKNUNDZSEORLWJBMZOHKYHGHLRIZZPQENJVEMAVLGMWFWVOQQJOJJCWBITLXLYKKKIOTQFOGCXCDSYMDPLDJPBZGVAFEDCXWXUSGDQUZWJQYTELOTWASXCYSKLXUXYDAEYMIWRBHBEXIQITS");
    msg.lat = 0.1489516464761268;
    msg.lon = 0.0893236582758633;
    msg.depth = 0.35061400240455765;
    msg.query_channel = 36U;
    msg.reply_channel = 175U;
    msg.transponder_delay = 226U;

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
    msg.setTimeStamp(0.44943845986532993);
    msg.setSource(35031U);
    msg.setSourceEntity(115U);
    msg.setDestination(45747U);
    msg.setDestinationEntity(171U);
    msg.beacon.assign("ERRJFSHLMJDWGUUMZVOOMSCOWJCTYOAQNSMTVXVYZJBDXQOPVTQAENPYBGMWIKLZGEBMLXZWHADZCSTVWFHEIUACEQKPEDTIAAWINKEJXYWPGLNHYRRIQRIWZNQKARLYHSRJSOPNKKMCAMLIPQVXPDLALD");
    msg.lat = 0.12125730211053598;
    msg.lon = 0.21995881162028064;
    msg.depth = 0.8681159285225372;
    msg.query_channel = 54U;
    msg.reply_channel = 229U;
    msg.transponder_delay = 251U;

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
    msg.setTimeStamp(0.9313603913360494);
    msg.setSource(51716U);
    msg.setSourceEntity(7U);
    msg.setDestination(44286U);
    msg.setDestinationEntity(161U);
    msg.op = 254U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("BNLODUIHCMFEXVGKNN");
    tmp_msg_0.lat = 0.5304779667276003;
    tmp_msg_0.lon = 0.901305429067048;
    tmp_msg_0.depth = 0.5989064725484602;
    tmp_msg_0.query_channel = 245U;
    tmp_msg_0.reply_channel = 22U;
    tmp_msg_0.transponder_delay = 203U;
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
    msg.setTimeStamp(0.7585903252974383);
    msg.setSource(60157U);
    msg.setSourceEntity(219U);
    msg.setDestination(35872U);
    msg.setDestinationEntity(37U);
    msg.op = 100U;

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
    msg.setTimeStamp(0.20766733214849886);
    msg.setSource(65334U);
    msg.setSourceEntity(33U);
    msg.setDestination(48927U);
    msg.setDestinationEntity(219U);
    msg.op = 179U;

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
    msg.setTimeStamp(0.39315381565163054);
    msg.setSource(8453U);
    msg.setSourceEntity(145U);
    msg.setDestination(39041U);
    msg.setDestinationEntity(48U);
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.5535510601437127;
    tmp_msg_0.type = 84U;
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
    msg.setTimeStamp(0.5841831602317025);
    msg.setSource(14898U);
    msg.setSourceEntity(75U);
    msg.setDestination(30725U);
    msg.setDestinationEntity(177U);
    IMC::CrudeOil tmp_msg_0;
    tmp_msg_0.value = 0.9426194846779473;
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
    msg.setTimeStamp(0.07223357700915178);
    msg.setSource(26113U);
    msg.setSourceEntity(28U);
    msg.setDestination(65382U);
    msg.setDestinationEntity(103U);
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 63113U;
    tmp_msg_0.lat = 0.2809016566786452;
    tmp_msg_0.lon = 0.8227386092509434;
    tmp_msg_0.z = 0.8303624718461786;
    tmp_msg_0.z_units = 107U;
    tmp_msg_0.amplitude = 0.25352444925878714;
    tmp_msg_0.pitch = 0.49002859366189555;
    tmp_msg_0.speed = 0.2991632772029662;
    tmp_msg_0.speed_units = 129U;
    tmp_msg_0.custom.assign("RRRIXBQMYMNGNLWPKUDNMPOAWVWOLFEFYWTISJRPXMOMUTSHDZHZAWTDVFZBXYJSHJCHVSGKKJCHDXDSYOKUBLOEIDFEKLNIGLIQQZTAQCHKNRHWLTARVEGBCXXETBPVDJVHFSRUMUDUPECNIVTGKNMWTUJDWRCPGYZRAPZPZSPCIFJMTSGSXOOFBUHFAKITGX");
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
    msg.setTimeStamp(0.9156251317264997);
    msg.setSource(53286U);
    msg.setSourceEntity(202U);
    msg.setDestination(59270U);
    msg.setDestinationEntity(179U);
    msg.lat = 0.1278433449205939;
    msg.lon = 0.19023715104717753;
    msg.depth = 0.2893143239434883;
    msg.sentence.assign("UKGOPWOFRJVFMHCEOGFFDXVSITHOPAPDDVZBSJUGDCOBALVMHSEBIETMFCNBGOXSAHJ");
    msg.txtime = 0.5208216720746499;
    msg.modem_type.assign("XDHNNLKJXWPWYXJASCMVPJAOYVCTZXNKTHYBRCBTYQBSHWNLYSQKRVQCTRGOGFEXIVJFFZDZPFIEIGAALRZPLHHYUGEMKGUGZOOEWFXFXSREUEAMCKJBDICWUQVQFWUBOXOGGIVZTVXVSLMARJANBIEGCJZJRFJFLPCXZQWHUYHZBDWPAPHBFDHSNLGIBTEQNNQYWTKRIDUPSLKSLOEMMSYUVTKMOUYPNQIPR");
    msg.sys_src.assign("QSHDOZIKUMNCZLHESYNXHJVTNSWUQKCVTZIQWDISSAPJWPQGOVKGEDCIDXKWOVGYOBLGFTJCYZNOZTDAQPRWREXMYLFIUBWSSWXJAPYLKASTADTNSLGCXUYMJZOPBHOWUEVIVMRBNZGHANALFRGDHUNDQSLXVHCYTQEUZPVMMFBEICKBLLYFCPWEMBQBJRRRVLCEFRZAHJNB");
    msg.seq = 58743U;
    msg.sys_dst.assign("JLQGQYGLBHIASVMINIMSBJXRBTEJHZSNSQKOWKIXLNVKTIQQAZGPPCUWOHBJGEKFQYACHSFGHFEWNMRJDXIIXYJTTXLHTFCQOJJCH");
    msg.flags = 172U;
    const signed char tmp_msg_0[] = {49, -30, 82, 23, 96, 109, 62, -113, 115, -34, 74, 12, -105, 85, 103, -47, -94, 114, 74, -126, -119, 99, -19, -89, 75, -1, -7, -75, -19, -30, 32, -13, -117, -115, 15, 93, -43, 17, 44, 117, 96, -87, -33, 18, 48, -53, 29, 100, -75, 62, -116, 90, 97, 82, 112, 85, 79, 79, 2, -66, -82, -65, 10, -11, 60, 23, -51, 104, 120, -37, 36, -94, 70, -64, 121, 93, -90, 39, -44, -4, -51, -70, -101, -83, 31, 44, 111, -118, -58, -59, 125, 124, -36, -95, 81, -44, 26, 108, 64, -126, 88, 84, 66, 124, 88, -55, -119, 16, -108, -94, 32, 85, -10, -82, -100, 82, -128, 58, 96, -47, -18, -63, 36, -114, 25, -55, -128, -96, -39, -57, -58, -14, 121, 38, 100, 105, 112, 20, -74, -125, -57, 59, -40, 50, 72, 91, 7, -119, 44, 72, 10, 13, -94, 86, 96, -35, -9, 25, -38, 63, -10, 27, 6, 11, -79, 83, 8, -29, -32, -95, 28, -112, -18, 12, 48, -63, -32, 44, 89, -81, -119, -115, 118, 89, 12, -76, 47, 28, 113, -89, 3, 36, 87, -31, -59, 8, 93, -128, -125, 84, 90, -102, -74, -54, -78};
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
    msg.setTimeStamp(0.1785017926323229);
    msg.setSource(54086U);
    msg.setSourceEntity(130U);
    msg.setDestination(59852U);
    msg.setDestinationEntity(198U);
    msg.lat = 0.9965367734505193;
    msg.lon = 0.7484852914471556;
    msg.depth = 0.24896345105214768;
    msg.sentence.assign("RTVNWSZCBTYISJGHXLYAOKXTNWSZJQYEVTQJBCUFPHSNYMPJBQOUJZEQWVECEDJCVQMVOWIBKHLHYKGDVSUFDTCPOKUEAQOLAICHMUAGQVHBIIRKLKVXAKLQXJBXNYPNIWGFUZUNBKXRTQTLMZLXFPOA");
    msg.txtime = 0.7821630495356499;
    msg.modem_type.assign("QUGOZKALMWQDQWMWLJKFCMTOHELYIOTZAMPXRIBOSH");
    msg.sys_src.assign("NDHBNHSTDLGFTAJYJPOCIWHXYIVUD");
    msg.seq = 28758U;
    msg.sys_dst.assign("ZRXICUTBSQDQESHBJHGJRJTTALZWSITDBLMBSXOZUFWPXHOITRHVLXCDDIGZKMSPRNYQFWWDWHCNMAOEKPPVANOYEFQLGVBKVSDYZCILUTMCVPGCTIXOJQN");
    msg.flags = 134U;
    const signed char tmp_msg_0[] = {64, -26, -12, -117, -49, -62, -66, -62, -69, 101, -36, -50, 88, -30, -46, 51, -79, 43, -22, 97, 90, 9, -56, -50, 73, 91, 112, -118, 11, -15, 15, -66, -86, 124, 64, -4, -57, -48, -115, -67, 53, 15, -54, 113, -64, 3, 12, -95, -77, 23, -120, -35, -4, 70, -114, 46, -17, 7, -5, 92, -55, -99, 46, 89, -66, 42, 64, 69, 57, -57, 16, 80, -31, -106, 29, -27, 59, -96, 99};
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
    msg.setTimeStamp(0.6818480664562206);
    msg.setSource(14391U);
    msg.setSourceEntity(243U);
    msg.setDestination(38206U);
    msg.setDestinationEntity(230U);
    msg.lat = 0.495618032627984;
    msg.lon = 0.5447369697463988;
    msg.depth = 0.41320465409804075;
    msg.sentence.assign("XLPCJPJNWMOEZMPSWOVXQZCFWYKCGVDCVHAXFWWYHTYMTFFBQINQEDTSBMBMLCBJVRCNMGBPLUNGGETSMVHOWPAXTFQEZYWQSIDGJIJILPTIKFBCFAJLWGODRLLKNQAINXBRATUZJEUZRARDYUHXUSRCFSQONMRVLUSIDHOTPRRVXDWRZFUKEZ");
    msg.txtime = 0.8134646451419991;
    msg.modem_type.assign("DAUWONLIRDIARICVMMDZIXTSWDOIHUYPPPVCTOGBCVSWLDMBNUTFHXAZIJZSVLXBLEKMMLNEXGBEOZQWERXMDURLWYPKIWUCVFOFXDSACZFKBPFNHHYZGGJYDKKUQFRLVJAYPRLTOQEBOMLTUWFFMYTKPYSNVDAJHGQHCRNNTWTDASIBQGRRVXOMAJJQTZFTUGZGECQB");
    msg.sys_src.assign("CXTIUUEOWZZDMDAEKHQRAVFNTEABGIBLSLSAMG");
    msg.seq = 45697U;
    msg.sys_dst.assign("RAAIXBNPHCYWKZJOPHAOUZVFEWGEYLFWALEPSWVRCPDAFOUGATXMFLVJVCQGYKGJQGCYFTLFOKONUBKDBUS");
    msg.flags = 243U;
    const signed char tmp_msg_0[] = {81, -56, 107, 91, -89, -16, 66, 20, -123, -26, 23, 101, 57, 106, -65, 99, -56, -104, 47, 106, 81, -3, -60, 49, -27, 55, 4, 86, -103, -39, -123, 76, 109, 19, -1, -37, -108, -79, 95, 75, -45, -92, 95, -125, -48, 17, 13, 58, 116, 53, -60, -103, -127, 1, 72, 118, 81, 87, 65, 23, -123, -15, -38, 18, -24, -9, 80, 6, 94, -70, 17, -58, -14, 36, -13, 66, 77, -121, 122, 19, 114, -73, 69, 88, 86, -66, -17, 89, 110, 74, 42, 74, -40, 13, -53, -115, 48, -121, 88, 111, 83, 43, -52, 32, -52, 30, 59, -103, 38, 111, 2, -46, -27, -90, 96, -47, -50, 89};
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
    msg.setTimeStamp(0.47261545626530266);
    msg.setSource(38478U);
    msg.setSourceEntity(104U);
    msg.setDestination(61229U);
    msg.setDestinationEntity(74U);
    msg.op = 67U;
    msg.system.assign("MMAWEDUZNIAJKWKQKOQVBLGZDNFUPZUXDTSYUWVPSPJNXOVWERIRLDZSGNMAIFYULSGSGHVMWZROXFF");
    msg.range = 0.5896959178990405;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 32118U;
    tmp_msg_0.avg = 0.5036768827489386;
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
    msg.setTimeStamp(0.4641393218831138);
    msg.setSource(21210U);
    msg.setSourceEntity(67U);
    msg.setDestination(58708U);
    msg.setDestinationEntity(230U);
    msg.op = 247U;
    msg.system.assign("ILRHPTKXBXZYWUDXAWHJPWRQCYNGECJBNVUOKMSILGHKTUYVFNCUOKHFIPTNNAUTYUMGIECHSPRFHFQLJCQXJGLDMDDFKRSXJVXAZVBDMDQRNOAZONJJOVERRPCVOBBPHISGZKWLDPTZIEAXSEEURVUSRSFGZFMKSQRLBHILLZNZLPHWJXTYYKUNCGEMFHVUPFQTVCMGIBAIKPBBYYXODWDCSAWAYEAWKZZNLM");
    msg.range = 0.7597796405502517;
    IMC::WaterVelocity tmp_msg_0;
    tmp_msg_0.validity = 18U;
    tmp_msg_0.x = 0.3301937787022734;
    tmp_msg_0.y = 0.3177919469142225;
    tmp_msg_0.z = 0.30558090245174274;
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
    msg.setTimeStamp(0.128804849272514);
    msg.setSource(31254U);
    msg.setSourceEntity(126U);
    msg.setDestination(887U);
    msg.setDestinationEntity(131U);
    msg.op = 83U;
    msg.system.assign("LEDFLCCTKCWPOLKNSYGNJUGBKSPUAJNXUFMPX");
    msg.range = 0.5636718247194278;
    IMC::Collision tmp_msg_0;
    tmp_msg_0.value = 0.3900795316353721;
    tmp_msg_0.type = 221U;
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
    msg.setTimeStamp(0.3066497863209384);
    msg.setSource(19898U);
    msg.setSourceEntity(79U);
    msg.setDestination(11994U);
    msg.setDestinationEntity(251U);

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
    msg.setTimeStamp(0.1501609212554691);
    msg.setSource(55352U);
    msg.setSourceEntity(11U);
    msg.setDestination(2417U);
    msg.setDestinationEntity(44U);

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
    msg.setTimeStamp(0.3702794064825602);
    msg.setSource(10634U);
    msg.setSourceEntity(117U);
    msg.setDestination(45891U);
    msg.setDestinationEntity(222U);

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
    msg.setTimeStamp(0.8392215112914706);
    msg.setSource(42345U);
    msg.setSourceEntity(141U);
    msg.setDestination(62320U);
    msg.setDestinationEntity(166U);
    msg.list.assign("NTJHOHVAOOHJPXVIRQZSYFQTLEKGOJHTUTTEYPYCDHFKWXPETIPVLGYNLCMDYENOTBKWZHNIBFRYQPQNCRLUXCDONRGBXNEYPDYIZGSVRIMUZWVWHGQSOSRLHLTUKITPEXKHVCDVGEPQADGFIACRJUIAOLZMJOHFZUWKSPGUJNUBFBRMAYAMMVRMFOAXBBJQULWCSREBAKPFUMQSXZNWSXILMDTBCCIDDZWFMZAJZSX");

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
    msg.setTimeStamp(0.5290681913318358);
    msg.setSource(17654U);
    msg.setSourceEntity(191U);
    msg.setDestination(20195U);
    msg.setDestinationEntity(227U);
    msg.list.assign("RSGAFWKMUNDMQLQDRPQJYPWBDERTGLCNVXEMYLBAZPOFSUNOBWWULKMNTWTRPSFCWKGOIQKPBJPTYJQNPIRIQQEOISMQDTICBCPZWFJBUDUESFEDSFUQLYVOVRIGNFKHXHEXVZOEWNSGOLOIYHAGWZMHGHTSBYFJRVZAEHIXCNJTKTUYMKKSKVXDTHDNZZUYXVIUZVJAGOIERXGACXSHCMJALFFZRMWJNB");

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
    msg.setTimeStamp(0.1116026374435003);
    msg.setSource(49915U);
    msg.setSourceEntity(232U);
    msg.setDestination(37727U);
    msg.setDestinationEntity(152U);
    msg.list.assign("EYXYKRWCWPBCLOWSXVFBGMQVLMZBGWVIYMVKOTXXDSXVNFBJQTCAJRDHPKVUUQLONMNEKSNPKKGPVSWKYZBUQZGDQTDLSEHAVGFYPOUWPTVEKMFUSYYXIRFJDJRONIGWIBXZNFTPMYIJRKZTFDBMAWMDIULIISHRJEUCBWLNQLDZRKNCTUFQFMVHYQGXZCTJCUHASRTEJXOYFPLCHNODSHAZPOQAGILLRHENRPGZADBH");

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
    msg.setTimeStamp(0.2787708018582419);
    msg.setSource(40845U);
    msg.setSourceEntity(138U);
    msg.setDestination(300U);
    msg.setDestinationEntity(147U);
    msg.peer.assign("VCLHIGEANZOWGFJWOIZJFSWZXLJKSSCBMKWZVEFQMOSANBRFIPIQDDGTDFTPHFTGEMRABANQFHZVECTLUVIJGOAWEDEHVWHKQNSTXPZKVVXVCWYIDPMZLFKMITNAJPAIIPPMOUHEAYJTUFQLCGZUGYLSSMHXSRMQXCDTDTXORNJUBCUODWVPOGMYYWAQUYHGERLTNKBBRC");
    msg.rssi = 0.16635450089572457;
    msg.integrity = 36093U;

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
    msg.setTimeStamp(0.5218162219368648);
    msg.setSource(52484U);
    msg.setSourceEntity(251U);
    msg.setDestination(48432U);
    msg.setDestinationEntity(28U);
    msg.peer.assign("OINGGFGWXMFMSTBSGAEZSZQLSIUIPLHNFYKXFMRPAAOGYKMVTIZDEZZDLOARICDPPHXOBTSPHIRUJWDWAUWGBQKOLRWXSMBXVVJMTTJIIRVFFJHQRTJVFOBCAHDPRVXOITLZPVCJYUJWBHNQDEOZTJCSQARNXEAFCUQWEFWNZTNQKXKUKYMBLOVYBTKBNKVUSWHCYHESJQ");
    msg.rssi = 0.9842155090822406;
    msg.integrity = 7003U;

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
    msg.setTimeStamp(0.6307924946810614);
    msg.setSource(7225U);
    msg.setSourceEntity(253U);
    msg.setDestination(15096U);
    msg.setDestinationEntity(68U);
    msg.peer.assign("VJLVRXSQWTRDISQGYWIKVPBGFKZOPVBWIJYDMURTCRLUZOMKLULCEMBJHIVCZOQCYHHJYEVKMWQGTPDYCLWZBDNABMPJNJXRRFJOGBSKSMHCDXTNNKSBXFAFCDHWPMVMZEEVHUIPBMPLPWZJEWRSWJOHGIGIGZN");
    msg.rssi = 0.9992063065372917;
    msg.integrity = 18621U;

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
    msg.setTimeStamp(0.9098743013944869);
    msg.setSource(29991U);
    msg.setSourceEntity(228U);
    msg.setDestination(60548U);
    msg.setDestinationEntity(39U);
    msg.req_id = 7734U;
    msg.destination.assign("RLCQBWCKVEYXRMMBMRAUUTLXPHLRHWXNEPHBUBEGGPWONAIYOMKCJDEYRRUPRQKKAPOROWXOVCOEIKTUZVIFNGDTDMFAIAREMVSMZFNVAVDQJYZQJCIZZDJQTLSYDBHUJOZYFVQZVBWFJFSSDCSJL");
    msg.timeout = 0.45283465634913467;
    msg.range = 0.9417429604585613;
    msg.type = 140U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 28011U;
    tmp_msg_0.avg = 0.37739367452948125;
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
    msg.setTimeStamp(0.8574081512333924);
    msg.setSource(47039U);
    msg.setSourceEntity(150U);
    msg.setDestination(20881U);
    msg.setDestinationEntity(24U);
    msg.req_id = 25280U;
    msg.destination.assign("AJLYJPMCPPXGBUVPOEVIYVCOTDTAXEWTGKQPLOFVRDDHNAJGRESTBLDSCMCPSGFLHIHXCCQOXBJQTGRQZHVCPILLIPQQFYXZHDNQAKNFAEWTIFXWGFHBGHJIAKKSTSDWUPYMWFJEJRIBFZDYZNZRZZVRBOWGHLYECQQJMBRAIVXDWWGYSSUOM");
    msg.timeout = 0.862583881985655;
    msg.range = 0.5228523006434262;
    msg.type = 34U;
    IMC::PH tmp_msg_0;
    tmp_msg_0.value = 0.46844542417838964;
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
    msg.setTimeStamp(0.0754404434689615);
    msg.setSource(53310U);
    msg.setSourceEntity(62U);
    msg.setDestination(60912U);
    msg.setDestinationEntity(112U);
    msg.req_id = 2872U;
    msg.destination.assign("WJKMDLEFWYTZFGYHJQVHLQK");
    msg.timeout = 0.7040752923630219;
    msg.range = 0.14856122587074372;
    msg.type = 122U;
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 35064U;
    tmp_msg_0.lat = 0.6172279320425192;
    tmp_msg_0.lon = 0.1875466161402124;
    tmp_msg_0.z = 0.2073356629136318;
    tmp_msg_0.z_units = 36U;
    tmp_msg_0.pitch = 0.8042438319702734;
    tmp_msg_0.amplitude = 0.6023237249858993;
    tmp_msg_0.duration = 48072U;
    tmp_msg_0.speed = 0.7466260586172937;
    tmp_msg_0.speed_units = 245U;
    tmp_msg_0.radius = 0.09138055379781085;
    tmp_msg_0.direction = 54U;
    tmp_msg_0.custom.assign("XOAPBFTNJTCEDIYCTOTGNHENQCJDMHLSYTELOSKAPHERPCAYXBXOMSQGMAUWQSLDBHAUBWWNPBPEQMITZLPZVGWNKSSQZMUUZVORSJBERCBXKINLKKJMRVTJQOQMLVFLDWHAUWYEZRNYEAPXSJMQKILSHGDQZTRHUIGIDQNDLPAVVF");
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
    msg.setTimeStamp(0.5254422477640895);
    msg.setSource(8053U);
    msg.setSourceEntity(172U);
    msg.setDestination(46674U);
    msg.setDestinationEntity(219U);
    msg.req_id = 58584U;
    msg.type = 22U;
    msg.status = 140U;
    msg.info.assign("ESXEXCSJIQGHAYWHLKHVGLJRGVEYWVFYEKAMOUUCZQIYEVNRQVUXSSFRMCUHMSNNLIGVPYOMCTRKUSXCUPZAVEP");
    msg.range = 0.5513020183355278;

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
    msg.setTimeStamp(0.6520325137888154);
    msg.setSource(47292U);
    msg.setSourceEntity(134U);
    msg.setDestination(9920U);
    msg.setDestinationEntity(80U);
    msg.req_id = 15494U;
    msg.type = 4U;
    msg.status = 196U;
    msg.info.assign("MEOHMKNATFICYKGZEGXWJPZVEXCGSPLOBMJIORTYIRYTIJNKJAFQICWHGASFKPTC");
    msg.range = 0.9676806467917047;

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
    msg.setTimeStamp(0.40705889284668517);
    msg.setSource(32992U);
    msg.setSourceEntity(246U);
    msg.setDestination(14965U);
    msg.setDestinationEntity(1U);
    msg.req_id = 12844U;
    msg.type = 36U;
    msg.status = 197U;
    msg.info.assign("PVPVMQNYSGHXWCQEGAXKEURYRTSJLNVTZXQUKGGZUFZEBZVCNKPHBETQJUMIKUSHVGZQDXWNBPZWIJYEZKFTWFDWPMIJYYGPIKKIFXRIWMAJLBKMRQETNYELHSBYROIOVDOSOLUHXGALKFCQXFOBRNCHJMNLJJVAOSNSHBSAGCND");
    msg.range = 0.7766051378093378;

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
    msg.setTimeStamp(0.4834842291775757);
    msg.setSource(15020U);
    msg.setSourceEntity(229U);
    msg.setDestination(11908U);
    msg.setDestinationEntity(60U);
    msg.system.assign("FWVTVQDIDOUEQLFYVPNQFMURFEVJEKFCSZKBNKPCJUPILBREPIIAHGLDLXYMFPWBZHJTKORWGAAKDOZUCIOMUCVT");
    msg.op = 130U;

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
    msg.setTimeStamp(0.38932176184196987);
    msg.setSource(49235U);
    msg.setSourceEntity(69U);
    msg.setDestination(56011U);
    msg.setDestinationEntity(102U);
    msg.system.assign("VJFBZZLUAUHIVCTHOBWBOQNWRFEZPITOIHAXINPYCMASJVEBBULXOYHDUDMWWIKKMISQKXVAGKVFOLDSETVWATQRAGMLKSUTOCJSAYLYXQRSWAORDBFVBLTPXUHKQMTYYQ");
    msg.op = 23U;

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
    msg.setTimeStamp(0.8237756660784292);
    msg.setSource(13273U);
    msg.setSourceEntity(220U);
    msg.setDestination(28345U);
    msg.setDestinationEntity(45U);
    msg.system.assign("LLQAJWPHWMLOVBAGKDKWAGBC");
    msg.op = 8U;

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
    msg.setTimeStamp(0.5049547006036651);
    msg.setSource(19398U);
    msg.setSourceEntity(230U);
    msg.setDestination(38474U);
    msg.setDestinationEntity(141U);
    msg.value = 28091;

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
    msg.setTimeStamp(0.2652033929347175);
    msg.setSource(49825U);
    msg.setSourceEntity(144U);
    msg.setDestination(14592U);
    msg.setDestinationEntity(16U);
    msg.value = 11133;

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
    msg.setTimeStamp(0.0650910258234274);
    msg.setSource(1146U);
    msg.setSourceEntity(3U);
    msg.setDestination(34700U);
    msg.setDestinationEntity(17U);
    msg.value = 28304;

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
    msg.setTimeStamp(0.23916831554590146);
    msg.setSource(7392U);
    msg.setSourceEntity(223U);
    msg.setDestination(13869U);
    msg.setDestinationEntity(169U);
    msg.value = 0.3792955315836538;

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
    msg.setTimeStamp(0.3225000092092746);
    msg.setSource(20148U);
    msg.setSourceEntity(67U);
    msg.setDestination(54935U);
    msg.setDestinationEntity(117U);
    msg.value = 0.00180034253970629;

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
    msg.setTimeStamp(0.9662601808749501);
    msg.setSource(39742U);
    msg.setSourceEntity(163U);
    msg.setDestination(34778U);
    msg.setDestinationEntity(176U);
    msg.value = 0.2425761259942314;

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
    msg.setTimeStamp(0.7619176970057265);
    msg.setSource(39894U);
    msg.setSourceEntity(43U);
    msg.setDestination(43743U);
    msg.setDestinationEntity(151U);
    msg.value = 0.8443565931189443;

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
    msg.setTimeStamp(0.9389973335151115);
    msg.setSource(26785U);
    msg.setSourceEntity(16U);
    msg.setDestination(34024U);
    msg.setDestinationEntity(99U);
    msg.value = 0.057676434956890676;

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
    msg.setTimeStamp(0.1168482335728398);
    msg.setSource(31049U);
    msg.setSourceEntity(196U);
    msg.setDestination(27198U);
    msg.setDestinationEntity(52U);
    msg.value = 0.25769307904640704;

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
    msg.setTimeStamp(0.9504186417096351);
    msg.setSource(55338U);
    msg.setSourceEntity(161U);
    msg.setDestination(48908U);
    msg.setDestinationEntity(149U);
    msg.validity = 16992U;
    msg.type = 172U;
    msg.utc_year = 48005U;
    msg.utc_month = 177U;
    msg.utc_day = 163U;
    msg.utc_time = 0.8526141740729215;
    msg.lat = 0.9253205442946071;
    msg.lon = 0.9392195512164514;
    msg.height = 0.057646778938373444;
    msg.satellites = 0U;
    msg.cog = 0.7195702327116553;
    msg.sog = 0.9474530125212585;
    msg.hdop = 0.23204864853039864;
    msg.vdop = 0.17895859712844386;
    msg.hacc = 0.9888816631088052;
    msg.vacc = 0.7370270371396858;

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
    msg.setTimeStamp(0.24072752376970807);
    msg.setSource(63700U);
    msg.setSourceEntity(214U);
    msg.setDestination(56098U);
    msg.setDestinationEntity(0U);
    msg.validity = 65198U;
    msg.type = 140U;
    msg.utc_year = 42215U;
    msg.utc_month = 4U;
    msg.utc_day = 65U;
    msg.utc_time = 0.11579048890702537;
    msg.lat = 0.9979027376080918;
    msg.lon = 0.06540670192278475;
    msg.height = 0.6908379526276317;
    msg.satellites = 136U;
    msg.cog = 0.5998748054331982;
    msg.sog = 0.22395728280993987;
    msg.hdop = 0.33253900029931793;
    msg.vdop = 0.5793026186846547;
    msg.hacc = 0.13445174243859181;
    msg.vacc = 0.08847129460740444;

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
    msg.setTimeStamp(0.3962173976930533);
    msg.setSource(9345U);
    msg.setSourceEntity(225U);
    msg.setDestination(63552U);
    msg.setDestinationEntity(47U);
    msg.validity = 58030U;
    msg.type = 253U;
    msg.utc_year = 45704U;
    msg.utc_month = 231U;
    msg.utc_day = 103U;
    msg.utc_time = 0.921886248055678;
    msg.lat = 0.21702690538462877;
    msg.lon = 0.012419284891411309;
    msg.height = 0.6299040324464521;
    msg.satellites = 59U;
    msg.cog = 0.37855992328808785;
    msg.sog = 0.12152795849013043;
    msg.hdop = 0.5570202048821457;
    msg.vdop = 0.6370817424131817;
    msg.hacc = 0.7768892650268198;
    msg.vacc = 0.22219422199657657;

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
    msg.setTimeStamp(0.06717012265232192);
    msg.setSource(22736U);
    msg.setSourceEntity(248U);
    msg.setDestination(12265U);
    msg.setDestinationEntity(157U);
    msg.time = 0.5716930467599727;
    msg.phi = 0.13117632985275995;
    msg.theta = 0.23164695457500306;
    msg.psi = 0.06453344934597027;
    msg.psi_magnetic = 0.5771846904037607;

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
    msg.setTimeStamp(0.2069349826144231);
    msg.setSource(61654U);
    msg.setSourceEntity(213U);
    msg.setDestination(21321U);
    msg.setDestinationEntity(173U);
    msg.time = 0.3118227564608883;
    msg.phi = 0.15399698336302103;
    msg.theta = 0.5531160010571564;
    msg.psi = 0.735355440339767;
    msg.psi_magnetic = 0.49464659272212064;

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
    msg.setTimeStamp(0.7515929185559177);
    msg.setSource(60667U);
    msg.setSourceEntity(190U);
    msg.setDestination(49089U);
    msg.setDestinationEntity(198U);
    msg.time = 0.3669147233959462;
    msg.phi = 0.35776019510416124;
    msg.theta = 0.7156396874999839;
    msg.psi = 0.0898297633365106;
    msg.psi_magnetic = 0.5929273047108181;

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
    msg.setTimeStamp(0.7147503571765219);
    msg.setSource(38050U);
    msg.setSourceEntity(189U);
    msg.setDestination(24204U);
    msg.setDestinationEntity(48U);
    msg.time = 0.38745222496517595;
    msg.x = 0.9636832278247942;
    msg.y = 0.2735019331756532;
    msg.z = 0.714169676995778;
    msg.timestep = 0.8300416003253619;

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
    msg.setTimeStamp(0.15858211682106815);
    msg.setSource(2283U);
    msg.setSourceEntity(97U);
    msg.setDestination(16490U);
    msg.setDestinationEntity(159U);
    msg.time = 0.6121457001682137;
    msg.x = 0.06958092830627605;
    msg.y = 0.8726183190312906;
    msg.z = 0.6114903544792206;
    msg.timestep = 0.9127854880455901;

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
    msg.setTimeStamp(0.41834169019753076);
    msg.setSource(8901U);
    msg.setSourceEntity(239U);
    msg.setDestination(21631U);
    msg.setDestinationEntity(176U);
    msg.time = 0.32742586434317345;
    msg.x = 0.30908572002772816;
    msg.y = 0.13918560091505694;
    msg.z = 0.9993635393630852;
    msg.timestep = 0.033400954385376824;

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
    msg.setTimeStamp(0.6927438818772313);
    msg.setSource(40504U);
    msg.setSourceEntity(146U);
    msg.setDestination(57107U);
    msg.setDestinationEntity(172U);
    msg.time = 0.9183596730527613;
    msg.x = 0.9287335247489549;
    msg.y = 0.7091696359900062;
    msg.z = 0.9424836835877876;

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
    msg.setTimeStamp(0.2074027202395603);
    msg.setSource(29120U);
    msg.setSourceEntity(134U);
    msg.setDestination(32531U);
    msg.setDestinationEntity(250U);
    msg.time = 0.9875963858033856;
    msg.x = 0.3912882444981354;
    msg.y = 0.4781193369225504;
    msg.z = 0.9484863672496757;

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
    msg.setTimeStamp(0.6258578098877216);
    msg.setSource(6454U);
    msg.setSourceEntity(158U);
    msg.setDestination(63307U);
    msg.setDestinationEntity(59U);
    msg.time = 0.07862743493176871;
    msg.x = 0.4699809680554793;
    msg.y = 0.5616460217981823;
    msg.z = 0.4242030270828089;

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
    msg.setTimeStamp(0.23749003182241868);
    msg.setSource(26033U);
    msg.setSourceEntity(4U);
    msg.setDestination(23467U);
    msg.setDestinationEntity(98U);
    msg.time = 0.24234597138166503;
    msg.x = 0.4808841828499193;
    msg.y = 0.7343129591424603;
    msg.z = 0.5097569469829576;

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
    msg.setTimeStamp(0.8750485175881497);
    msg.setSource(41753U);
    msg.setSourceEntity(57U);
    msg.setDestination(1003U);
    msg.setDestinationEntity(16U);
    msg.time = 0.04831532780281467;
    msg.x = 0.7170085192809369;
    msg.y = 0.7316863113971717;
    msg.z = 0.6240357731316697;

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
    msg.setTimeStamp(0.23862779830994552);
    msg.setSource(23755U);
    msg.setSourceEntity(16U);
    msg.setDestination(33014U);
    msg.setDestinationEntity(85U);
    msg.time = 0.5993872419173382;
    msg.x = 0.3209655841146394;
    msg.y = 0.11495667562160838;
    msg.z = 0.4560521798408388;

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
    msg.setTimeStamp(0.059649652639224504);
    msg.setSource(62208U);
    msg.setSourceEntity(55U);
    msg.setDestination(65408U);
    msg.setDestinationEntity(199U);
    msg.time = 0.3878319673738173;
    msg.x = 0.8760036635180617;
    msg.y = 0.7340046268975197;
    msg.z = 0.2854069358256064;

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
    msg.setTimeStamp(0.41103281282428705);
    msg.setSource(10236U);
    msg.setSourceEntity(53U);
    msg.setDestination(21682U);
    msg.setDestinationEntity(99U);
    msg.time = 0.24308983372826742;
    msg.x = 0.6537391989247197;
    msg.y = 0.9221470265261205;
    msg.z = 0.321954037878427;

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
    msg.setTimeStamp(0.836374774631798);
    msg.setSource(659U);
    msg.setSourceEntity(230U);
    msg.setDestination(7472U);
    msg.setDestinationEntity(137U);
    msg.time = 0.5118039795316414;
    msg.x = 0.5312464293822358;
    msg.y = 0.1845516672583849;
    msg.z = 0.24346901887599814;

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
    msg.setTimeStamp(0.09182386617772487);
    msg.setSource(8271U);
    msg.setSourceEntity(163U);
    msg.setDestination(56111U);
    msg.setDestinationEntity(25U);
    msg.validity = 100U;
    msg.x = 0.2124243542048938;
    msg.y = 0.4361527163335053;
    msg.z = 0.6958229452999466;

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
    msg.setTimeStamp(0.42014848543783734);
    msg.setSource(2657U);
    msg.setSourceEntity(79U);
    msg.setDestination(64242U);
    msg.setDestinationEntity(205U);
    msg.validity = 224U;
    msg.x = 0.4640166770967429;
    msg.y = 0.7146667578104099;
    msg.z = 0.7161936975193245;

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
    msg.setTimeStamp(0.10709345966212913);
    msg.setSource(37517U);
    msg.setSourceEntity(102U);
    msg.setDestination(60185U);
    msg.setDestinationEntity(38U);
    msg.validity = 61U;
    msg.x = 0.32682995174840346;
    msg.y = 0.6599003893970924;
    msg.z = 0.21379910469322094;

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
    msg.setTimeStamp(0.17341265688291807);
    msg.setSource(27918U);
    msg.setSourceEntity(3U);
    msg.setDestination(24072U);
    msg.setDestinationEntity(235U);
    msg.validity = 238U;
    msg.x = 0.7641146912284872;
    msg.y = 0.031958113444735425;
    msg.z = 0.09939612762813532;

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
    msg.setTimeStamp(0.8187486759737366);
    msg.setSource(43484U);
    msg.setSourceEntity(175U);
    msg.setDestination(16826U);
    msg.setDestinationEntity(248U);
    msg.validity = 146U;
    msg.x = 0.9994456477281148;
    msg.y = 0.24241515619955056;
    msg.z = 0.6809068977659783;

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
    msg.setTimeStamp(0.8690887691021562);
    msg.setSource(48022U);
    msg.setSourceEntity(19U);
    msg.setDestination(18589U);
    msg.setDestinationEntity(135U);
    msg.validity = 66U;
    msg.x = 0.5259909249037407;
    msg.y = 0.07602719043735018;
    msg.z = 0.9879706857702242;

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
    msg.setTimeStamp(0.7788782388702205);
    msg.setSource(58821U);
    msg.setSourceEntity(5U);
    msg.setDestination(36U);
    msg.setDestinationEntity(233U);
    msg.time = 0.2784239690924417;
    msg.x = 0.6545303627299539;
    msg.y = 0.49463380484378894;
    msg.z = 0.9986751822019968;

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
    msg.setTimeStamp(0.3290101185266219);
    msg.setSource(48139U);
    msg.setSourceEntity(71U);
    msg.setDestination(35630U);
    msg.setDestinationEntity(75U);
    msg.time = 0.6679730099811559;
    msg.x = 0.19751959219667903;
    msg.y = 0.17975476212649466;
    msg.z = 0.17350262702468944;

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
    msg.setTimeStamp(0.1988662758299239);
    msg.setSource(26415U);
    msg.setSourceEntity(232U);
    msg.setDestination(42333U);
    msg.setDestinationEntity(140U);
    msg.time = 0.040107457077084185;
    msg.x = 0.4230692879233352;
    msg.y = 0.6961625390741928;
    msg.z = 0.5738734585778946;

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
    msg.setTimeStamp(0.6034051532009758);
    msg.setSource(18600U);
    msg.setSourceEntity(155U);
    msg.setDestination(44206U);
    msg.setDestinationEntity(135U);
    msg.validity = 249U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.6234466677649744;
    tmp_msg_0.beam_height = 0.45362414455614386;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.8204962643927103;

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
    msg.setTimeStamp(0.026322901181314085);
    msg.setSource(21897U);
    msg.setSourceEntity(192U);
    msg.setDestination(35198U);
    msg.setDestinationEntity(155U);
    msg.validity = 129U;
    msg.value = 0.8321517666895009;

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
    msg.setTimeStamp(0.7354869260149259);
    msg.setSource(44700U);
    msg.setSourceEntity(157U);
    msg.setDestination(12443U);
    msg.setDestinationEntity(65U);
    msg.validity = 38U;
    msg.value = 0.251753782603346;

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
    msg.setTimeStamp(0.6421748196706981);
    msg.setSource(58199U);
    msg.setSourceEntity(238U);
    msg.setDestination(12824U);
    msg.setDestinationEntity(219U);
    msg.value = 0.9217960776833395;

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
    msg.setTimeStamp(0.36402666455665567);
    msg.setSource(62162U);
    msg.setSourceEntity(30U);
    msg.setDestination(52794U);
    msg.setDestinationEntity(196U);
    msg.value = 0.5721186859992109;

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
    msg.setTimeStamp(0.8600329949671297);
    msg.setSource(14658U);
    msg.setSourceEntity(84U);
    msg.setDestination(59186U);
    msg.setDestinationEntity(251U);
    msg.value = 0.5145515082312025;

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
    msg.setTimeStamp(0.8291233138662408);
    msg.setSource(31077U);
    msg.setSourceEntity(189U);
    msg.setDestination(25947U);
    msg.setDestinationEntity(13U);
    msg.value = 0.004536200109665045;

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
    msg.setTimeStamp(0.5743469423845419);
    msg.setSource(51654U);
    msg.setSourceEntity(178U);
    msg.setDestination(12754U);
    msg.setDestinationEntity(155U);
    msg.value = 0.7635595163387152;

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
    msg.setTimeStamp(0.7233938901561957);
    msg.setSource(1340U);
    msg.setSourceEntity(172U);
    msg.setDestination(27022U);
    msg.setDestinationEntity(228U);
    msg.value = 0.4792115227978241;

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
    msg.setTimeStamp(0.9966879428821518);
    msg.setSource(24364U);
    msg.setSourceEntity(11U);
    msg.setDestination(47545U);
    msg.setDestinationEntity(116U);
    msg.value = 0.9345130050838726;

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
    msg.setTimeStamp(0.46397404161360767);
    msg.setSource(47765U);
    msg.setSourceEntity(179U);
    msg.setDestination(22802U);
    msg.setDestinationEntity(121U);
    msg.value = 0.8637057843256585;

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
    msg.setTimeStamp(0.18212840671115826);
    msg.setSource(16452U);
    msg.setSourceEntity(73U);
    msg.setDestination(31884U);
    msg.setDestinationEntity(141U);
    msg.value = 0.004211109565639859;

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
    msg.setTimeStamp(0.8995222150687219);
    msg.setSource(40736U);
    msg.setSourceEntity(53U);
    msg.setDestination(9067U);
    msg.setDestinationEntity(22U);
    msg.value = 0.7040640831497192;

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
    msg.setTimeStamp(0.9179792023596771);
    msg.setSource(28723U);
    msg.setSourceEntity(10U);
    msg.setDestination(33662U);
    msg.setDestinationEntity(226U);
    msg.value = 0.4595032674618965;

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
    msg.setTimeStamp(0.3646103352719201);
    msg.setSource(37904U);
    msg.setSourceEntity(218U);
    msg.setDestination(19223U);
    msg.setDestinationEntity(214U);
    msg.value = 0.6448775391717239;

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
    msg.setTimeStamp(0.4461037338199686);
    msg.setSource(21366U);
    msg.setSourceEntity(9U);
    msg.setDestination(29881U);
    msg.setDestinationEntity(146U);
    msg.value = 0.295093659732803;

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
    msg.setTimeStamp(0.2080732585541708);
    msg.setSource(34041U);
    msg.setSourceEntity(214U);
    msg.setDestination(1165U);
    msg.setDestinationEntity(102U);
    msg.value = 0.12842185764674985;

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
    msg.setTimeStamp(0.12314917956138605);
    msg.setSource(20563U);
    msg.setSourceEntity(145U);
    msg.setDestination(22354U);
    msg.setDestinationEntity(109U);
    msg.value = 0.45005132891496524;

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
    msg.setTimeStamp(0.20134051998807034);
    msg.setSource(49986U);
    msg.setSourceEntity(168U);
    msg.setDestination(33645U);
    msg.setDestinationEntity(37U);
    msg.value = 0.6682831013344167;

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
    msg.setTimeStamp(0.6430932390290218);
    msg.setSource(50032U);
    msg.setSourceEntity(116U);
    msg.setDestination(55411U);
    msg.setDestinationEntity(211U);
    msg.value = 0.7786970667470086;

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
    msg.setTimeStamp(0.3237768483909512);
    msg.setSource(250U);
    msg.setSourceEntity(31U);
    msg.setDestination(3801U);
    msg.setDestinationEntity(155U);
    msg.value = 0.9102869721352608;

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
    msg.setTimeStamp(0.4860073231166011);
    msg.setSource(63664U);
    msg.setSourceEntity(121U);
    msg.setDestination(3677U);
    msg.setDestinationEntity(197U);
    msg.value = 0.4687535658491483;

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
    msg.setTimeStamp(0.6466335900378947);
    msg.setSource(3113U);
    msg.setSourceEntity(143U);
    msg.setDestination(36477U);
    msg.setDestinationEntity(105U);
    msg.value = 0.7367669459977478;

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
    msg.setTimeStamp(0.7887157967285001);
    msg.setSource(60115U);
    msg.setSourceEntity(209U);
    msg.setDestination(27945U);
    msg.setDestinationEntity(46U);
    msg.value = 0.7387730020976507;

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
    msg.setTimeStamp(0.04854295347797011);
    msg.setSource(58924U);
    msg.setSourceEntity(101U);
    msg.setDestination(61172U);
    msg.setDestinationEntity(131U);
    msg.value = 0.6713654879142827;

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
    msg.setTimeStamp(0.8275973136887838);
    msg.setSource(56794U);
    msg.setSourceEntity(64U);
    msg.setDestination(12415U);
    msg.setDestinationEntity(131U);
    msg.value = 0.6854678455536604;

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
    msg.setTimeStamp(0.052874821736096034);
    msg.setSource(13759U);
    msg.setSourceEntity(95U);
    msg.setDestination(40966U);
    msg.setDestinationEntity(183U);
    msg.value = 0.5192220707418584;

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
    msg.setTimeStamp(0.7370212383578416);
    msg.setSource(44280U);
    msg.setSourceEntity(150U);
    msg.setDestination(17608U);
    msg.setDestinationEntity(225U);
    msg.direction = 0.7256883722130076;
    msg.speed = 0.9132756234967951;
    msg.turbulence = 0.9993394172430007;

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
    msg.setTimeStamp(0.8332383883236584);
    msg.setSource(9399U);
    msg.setSourceEntity(5U);
    msg.setDestination(25643U);
    msg.setDestinationEntity(245U);
    msg.direction = 0.9336792120451683;
    msg.speed = 0.31764072064545423;
    msg.turbulence = 0.6999328980758113;

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
    msg.setTimeStamp(0.9617969934338044);
    msg.setSource(16151U);
    msg.setSourceEntity(26U);
    msg.setDestination(40203U);
    msg.setDestinationEntity(187U);
    msg.direction = 0.7688578015480859;
    msg.speed = 0.20895964057701177;
    msg.turbulence = 0.35827497470224345;

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
    msg.setTimeStamp(0.3598901747691102);
    msg.setSource(58038U);
    msg.setSourceEntity(91U);
    msg.setDestination(43491U);
    msg.setDestinationEntity(1U);
    msg.value = 0.5272410150126822;

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
    msg.setTimeStamp(0.535875965091876);
    msg.setSource(51733U);
    msg.setSourceEntity(77U);
    msg.setDestination(50813U);
    msg.setDestinationEntity(157U);
    msg.value = 0.5908540674561272;

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
    msg.setTimeStamp(0.7259658269437503);
    msg.setSource(50028U);
    msg.setSourceEntity(177U);
    msg.setDestination(1867U);
    msg.setDestinationEntity(197U);
    msg.value = 0.8338182036857986;

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
    msg.setTimeStamp(0.4501315608315454);
    msg.setSource(64039U);
    msg.setSourceEntity(230U);
    msg.setDestination(19008U);
    msg.setDestinationEntity(228U);
    msg.value.assign("MWZOIXCMRQKAFYYRGPYIFZVHLYLJCBJSGKRTAOIIBPSDGQELCDBKHHITUBNWZNMNFHILAUCVJEXUPTUKVXHQTEMLTQRLOKUIPEQEYQWMYVDZTVWBFMXERRUVQTAVBZKJNOWJLGSWGFMZWNJLHENCYYUMLFBDCDGRDDJYZCSDYIGPPXXNIMFSAXEDRBRANEOOGFSQPSXJPVHTUWWOOAWHETBV");

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
    msg.setTimeStamp(0.24392091912326463);
    msg.setSource(54228U);
    msg.setSourceEntity(101U);
    msg.setDestination(44856U);
    msg.setDestinationEntity(0U);
    msg.value.assign("KXLFSXQJWRNXCJBGPDNJXJHFGRFWLNZNTWXGEXZVAIGQMRUZFDJVASTCYPSQEGQHBOTZDHDMWFFBXKLOPCBHSBSVCQDKVNRUKWHUYOGQKTNKVDXORWWUOQILIYRZNFEUAPSVIRIPNBGIVZQVUJYOGCSFMPZJXWETYWJRTTWCLERKNOMPHFGEHALIBDZMAQPBMQDIR");

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
    msg.setTimeStamp(0.1604321986835502);
    msg.setSource(5535U);
    msg.setSourceEntity(76U);
    msg.setDestination(32028U);
    msg.setDestinationEntity(48U);
    msg.value.assign("JPJIFBGOZCBUZOJTTTTKVNPULVCVDBAREAYOFLQNDRGYEYLJPHRYAZJSTMYKGBWMUFZZDFQBUIAEQRXBDTNXQTVXSLLCOXZSJERCWHERHKQYGFTPQIQATRWZRUFLPWMHJRYGCPUHVAMDGML");

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
    msg.setTimeStamp(0.44183350604477234);
    msg.setSource(14832U);
    msg.setSourceEntity(188U);
    msg.setDestination(36513U);
    msg.setDestinationEntity(97U);
    const signed char tmp_msg_0[] = {102, 97, 44, -3, 120, 116, 111, -84, 94, 35, -47, 68, 34, -11, 9, -50, -115, 97, 102, 122, -112, 108, 116, -92, -109, 119, 51, 103, -40, -109, -87, 94, -10, 55, -127, -73, 53, -17, 78, 14, 58, 30, -47, -22, 106, -84, 22, -74, 104, 28, -116, 124, -25, -29, 85, 121, 7, -102, 111, 117, -37, -96, -116, -13, 54, -66, 36, 27, 126, 17, 33, 39, -112, -87, 41, -69, 51, -7, -41, -51, 31, -12, -117, -15, -88, 109, -37, 113, -80, -113, -16, 40, -119, 59, -25, -106, 113, 72, -66, -47, -54, -3, -99, 118, -65, -119, -44, 54, -48, 51, 25, 38, -124, 41, 53, -112, -88, -16, -70, 19, -9, 99, 28, -61, -14, -76, 107, -15, 55, -100, -112, -122, 64, 39, 60, 18, -127, 123, 106, 52, -122, 35, -64, 6, 64, -43, -34, -11, 11, 94, -37, -99, -52, 48, 76, 76, -82, -122, -20, -63, 98, 51};
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
    msg.setTimeStamp(0.0875737209035049);
    msg.setSource(41238U);
    msg.setSourceEntity(66U);
    msg.setDestination(6590U);
    msg.setDestinationEntity(188U);
    const signed char tmp_msg_0[] = {77, 83, -56, 122, 52, 51, 113, 123, 31, 72, 66, -33, 53, 66, -11, -59, 70, 5, 104, 62, -24, -58, -106, -48, -78, 10, 28, 28, -98, 66, -51, -15, 24, -7, 74, -53, 114, 107, -96, -66, -110, -40, 22, -97, -44, 114, 126, -33, 87, 126, 15, 85, 33, -40, 90, 53, 29, 83, 45, 103, -78, 117, 41, -119, 86, -113, 31, 17, -86, 84, -24, -116, 78, -41, -73, -82, -117, -41, 121, -107, -21, -42, -31, 97, 19, 116, -100, 53, -9, 108, 116, -10, 23, -121, 3, -18, -2, 94, -28, -106, 18, 100, 23, 32, 75, -77, 99, 91, 21, 55, 114, -99, -10, 32, -5, -43, -41, -100, -8, 90, 119, -49, 109, 122, -32, -103, 61, -59, 120, 30, 9, -64, 42, -15, -64, -5, 83, -120, -37, 46, 19, -40, 45, -113, 27, -58, 20, 87, 61, -32, -56, -120, 111, 109, 4, 88, -118, -116, 66, 90, 88, -45, 82, -7, 121, 4, -8, 120, 92, -33, 52, 41, -75, -118, 58, -3, -59, -105, -54, -19, 43, -114, -36, 74, 118, -121, -47, 71, -19, 63, 107, -70, -89, -21, -101, 42, 81, -26, -18, 87, -6, -20, 49, 90, -26, 73, -64, 102, 119, -51, 56, 101, 79, 30, 33, -61, 67, -25, 47, -19, -76, 55, -15, 48, -115, 75, 118, 73, 96, 81, 43, 58, -88, -40, -81, -31, -116};
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
    msg.setTimeStamp(0.9460041777749073);
    msg.setSource(24518U);
    msg.setSourceEntity(91U);
    msg.setDestination(10910U);
    msg.setDestinationEntity(145U);
    const signed char tmp_msg_0[] = {-75, 123, -46, -42, -70, -66, -113, -32, -68, -41, 31, -38, -11, 86, 93, 102, -117, -113, 66, 0, -128, 16, -68, -111, 70, 19, -52, 32, -44, 109, 92, -104, -36, -45, -105, -20, 77, 60, -91, -40, 17, -38, 54, -65, 41, -23, -5, 108, 22, -112, -42, 85, -126, 47, 119, -91, 73, 70, 121, -3, -94, 87, 21, 56, -34, -49, 117, 95, -102, 19, 93, -16, 114, 88, -38, -77, -105, 95, 104, 108, -40, 119, -83, 50, -122, 111, -109, 115, 85, 49, -101, -71, 120, -51, -79, 8, -81, -127, 45, 74, -66};
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
    msg.setTimeStamp(0.1422200568823232);
    msg.setSource(29441U);
    msg.setSourceEntity(57U);
    msg.setDestination(15470U);
    msg.setDestinationEntity(129U);
    msg.value = 0.9950359597263778;

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
    msg.setTimeStamp(0.06038622733896615);
    msg.setSource(47926U);
    msg.setSourceEntity(218U);
    msg.setDestination(41317U);
    msg.setDestinationEntity(225U);
    msg.value = 0.6991620359801236;

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
    msg.setTimeStamp(0.29921117355904436);
    msg.setSource(4465U);
    msg.setSourceEntity(46U);
    msg.setDestination(44433U);
    msg.setDestinationEntity(52U);
    msg.value = 0.28044488338048834;

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
    msg.setTimeStamp(0.3496318499820451);
    msg.setSource(10264U);
    msg.setSourceEntity(154U);
    msg.setDestination(53032U);
    msg.setDestinationEntity(64U);
    msg.type = 82U;
    msg.frequency = 607288579U;
    msg.min_range = 25679U;
    msg.max_range = 55931U;
    msg.bits_per_point = 76U;
    msg.scale_factor = 0.7800286234799829;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.47765943367562813;
    tmp_msg_0.beam_height = 0.21896352444192801;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {92, 16, -69, 79, 85, 73, -36, -6, 87, -97, -39, 42, -5, -109, -39, -103, -87, -52, 95, 29, 124, -49, -47, 57, -44, -120, -126, -11, 95, 47, -58, 120, -60, 92, 118, -56, -116, -34, 2, 73, -71, 44, -22, 81, 20, -94, 73, -87, 88, -64, -103, -28, -12, 51, -75, -111, 60, 4, -125, -82, -6, -45, 101, -39, 55, -80, 15, -125, 13, 94, -128, 121, -92, 125, 115, 37, -22, 61, 24, 79, 53, -13, -120, 68, 89, -9, -72, 90, 45, -87, -6, -45, 83, -25, 14, 21, 111, -103, 54, -8, 16, -80, -92, -33, 88, -55, 109, -37, -47, -35, -10, -72, 109, -91, -33, -80, 29, -33, 66, 28, 31, -21, 13, 115, 86, -94, -10, 101, -25, -81, -41, 42, -32, -78, 112, -47, -36, -126, 25, 69, -64, -10, 4, -76, 66, 123, 110, -11, -10, -114, 121, 13, -29, 65, -44, -53, -91, 12, 126, -59, -15, -64, 56, -108, 28, -116, 117, -86, 10, -88, 78, -33, 51, -3, 12, -71, 23, -24, -86, -53, 72, 32, 59, 26, -113, -123, -71, -110, -55};
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
    msg.setTimeStamp(0.2558860575770383);
    msg.setSource(22492U);
    msg.setSourceEntity(5U);
    msg.setDestination(12090U);
    msg.setDestinationEntity(150U);
    msg.type = 78U;
    msg.frequency = 3581210867U;
    msg.min_range = 24135U;
    msg.max_range = 41462U;
    msg.bits_per_point = 217U;
    msg.scale_factor = 0.1533896040465007;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.4515054337490426;
    tmp_msg_0.beam_height = 0.8629983008524917;
    msg.beam_config.push_back(tmp_msg_0);
    const signed char tmp_msg_1[] = {120, -81, 6, -7, 72, -87, -51, 66, -1, -108, 81, -5, -69, -56, 105, 40, -122, 45, -47, 123, 15, 42, -12, -54, 87, 55, 11, 112, -84, 70, 79, -57, 32, -94, 64, -57, 70, 44, 99, 121, -104, -35, -19, 113, -49, -100, -35, 62, 70, -120, 120, -99, -76, -38, 121, -39, -97, 72, 110, -111, -10, 110, -127, -74, 92, 17, 88, -56, 24, 93, 99, 5};
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
    msg.setTimeStamp(0.1566601717965136);
    msg.setSource(6457U);
    msg.setSourceEntity(118U);
    msg.setDestination(4675U);
    msg.setDestinationEntity(160U);
    msg.type = 14U;
    msg.frequency = 2539540082U;
    msg.min_range = 10558U;
    msg.max_range = 42247U;
    msg.bits_per_point = 177U;
    msg.scale_factor = 0.49961623168649605;
    const signed char tmp_msg_0[] = {22, 96, 51, 50, 113, 13, -80, 100, -93, 88, 71, 112, -11, -100, 125, -31, 44, -3, 98, -79, 26, 0, -57, 47, 11, 53, -10, 10, -81, 69, 51, 31, -64, -16, 118, -53, -3, -94, -103, 49, 82, 20, -17, -74, 1, 97, 29, -126, 58, 92, -73, -53, -20, -11, 117, 26, 42, -72, -58, 60, -8, -124, 122, 85, 33, -101, 100, 56, -74, -65, -27, -71, -107, 109, 107, -22, 16, 56, 121, -125, -89, -88, -100, 123, -96, 120, -61, 32, -110, 107, -87, -6, -9, 85, -122, -16, -12, 16, -19, 109, -37, 66, -13, 63, -49, -107, 96, 96, -96, -60, -17, 41, 20, 71, -68, 9, -99, 95, -59, 88, 84, 15, -91, 19, 86, 81, 2, 3, -18};
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
    msg.setTimeStamp(0.8715533162778749);
    msg.setSource(56774U);
    msg.setSourceEntity(85U);
    msg.setDestination(64147U);
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
    msg.setTimeStamp(0.2817401287691378);
    msg.setSource(17922U);
    msg.setSourceEntity(153U);
    msg.setDestination(48736U);
    msg.setDestinationEntity(21U);

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
    msg.setTimeStamp(0.45949152816471694);
    msg.setSource(25646U);
    msg.setSourceEntity(99U);
    msg.setDestination(41891U);
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
    msg.setTimeStamp(0.13435123190640974);
    msg.setSource(24672U);
    msg.setSourceEntity(53U);
    msg.setDestination(2901U);
    msg.setDestinationEntity(105U);
    msg.op = 34U;

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
    msg.setTimeStamp(0.9518074576469842);
    msg.setSource(26291U);
    msg.setSourceEntity(192U);
    msg.setDestination(8243U);
    msg.setDestinationEntity(23U);
    msg.op = 154U;

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
    msg.setTimeStamp(0.5376475749783122);
    msg.setSource(41995U);
    msg.setSourceEntity(62U);
    msg.setDestination(35134U);
    msg.setDestinationEntity(125U);
    msg.op = 65U;

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
    msg.setTimeStamp(0.4786370566492312);
    msg.setSource(25133U);
    msg.setSourceEntity(131U);
    msg.setDestination(24501U);
    msg.setDestinationEntity(213U);
    msg.value = 0.1469684697544159;
    msg.confidence = 0.08527694726053736;
    msg.opmodes.assign("MFBVPFLABQZDZDCQKDBVRNEACRWLTWRYPUATXYHGEFOZTVXXRPGIDWVIUXJQLYTOLBDHRPLIAPCKTNOFBTCEXWANSLNIRHSGBECIQZJZMYYAPAZTEISDOWJBMLEGCVJWMUUWSENEFQOPBNUOGGRFMBXKZCKUOIMNAHREMOJACBWHWIQDTDGOKPWNQKUNHYXACYHXSELHKJGKMSSFUKSVVFYPUVJRMXZS");

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
    msg.setTimeStamp(0.3674519486082184);
    msg.setSource(52832U);
    msg.setSourceEntity(214U);
    msg.setDestination(36813U);
    msg.setDestinationEntity(143U);
    msg.value = 0.9505421768324174;
    msg.confidence = 0.7202465082985604;
    msg.opmodes.assign("NRJYEOZJLVAJYYPZXBDCQFFHQQIDUATJROGHNVUUUULLADXJFQXAHGRHYOVUWEZPVRBWNRNHYOKKISESDTAWFVYJOADMPCYPUCNOGMLPKJYXEIGFF");

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
    msg.setTimeStamp(0.9377014712195213);
    msg.setSource(38554U);
    msg.setSourceEntity(224U);
    msg.setDestination(42174U);
    msg.setDestinationEntity(138U);
    msg.value = 0.21463752533849834;
    msg.confidence = 0.9976968132094213;
    msg.opmodes.assign("YDNSWAMUTAXMBTDYHWJCGZOJQFSYKVDPAMPMQPYAIZHWWXYMCSOZCYQURIOLJLRVXJDRZTOCUEIZGYMTHOFAFLWVPUSDFPNVKTBGZAJFJQINSCDIBMIVLAGFLDYBYBSSNKKLRAFEZKGRCDVXSQXLMWNUTICFMQMBBI");

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
    msg.setTimeStamp(0.3493488299031816);
    msg.setSource(45138U);
    msg.setSourceEntity(180U);
    msg.setDestination(64952U);
    msg.setDestinationEntity(64U);
    msg.itow = 1705573279U;
    msg.lat = 0.8201520115137527;
    msg.lon = 0.12457124025968513;
    msg.height_ell = 0.9940233435850816;
    msg.height_sea = 0.8482431534375788;
    msg.hacc = 0.7513620341821219;
    msg.vacc = 0.10970502299223561;
    msg.vel_n = 0.21176010551505942;
    msg.vel_e = 0.2641691700781935;
    msg.vel_d = 0.7959971276141498;
    msg.speed = 0.23175796269709903;
    msg.gspeed = 0.9427735517504662;
    msg.heading = 0.7087526719636179;
    msg.sacc = 0.7368004129528746;
    msg.cacc = 0.9631286013702715;

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
    msg.setTimeStamp(0.3424188882296916);
    msg.setSource(1818U);
    msg.setSourceEntity(87U);
    msg.setDestination(43255U);
    msg.setDestinationEntity(192U);
    msg.itow = 4094689604U;
    msg.lat = 0.7030233708277733;
    msg.lon = 0.258083742253693;
    msg.height_ell = 0.7337496204575313;
    msg.height_sea = 0.25616239057505075;
    msg.hacc = 0.6492334671711982;
    msg.vacc = 0.5107263489233153;
    msg.vel_n = 0.001000946293018612;
    msg.vel_e = 0.7103736070338429;
    msg.vel_d = 0.765598349568873;
    msg.speed = 0.5870361746015217;
    msg.gspeed = 0.719403033730292;
    msg.heading = 0.0019548697208958687;
    msg.sacc = 0.6582863515405507;
    msg.cacc = 0.436567434487214;

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
    msg.setTimeStamp(0.5744405173830321);
    msg.setSource(22656U);
    msg.setSourceEntity(157U);
    msg.setDestination(35680U);
    msg.setDestinationEntity(73U);
    msg.itow = 2338906943U;
    msg.lat = 0.7573980804374566;
    msg.lon = 0.40597660123373003;
    msg.height_ell = 0.7139286744328495;
    msg.height_sea = 0.3956270806614567;
    msg.hacc = 0.8582547814200457;
    msg.vacc = 0.25645829856056024;
    msg.vel_n = 0.24220685541223907;
    msg.vel_e = 0.13599492822970427;
    msg.vel_d = 0.14910673731689483;
    msg.speed = 0.5328861979206951;
    msg.gspeed = 0.8944221411187544;
    msg.heading = 0.9276950976250634;
    msg.sacc = 0.7459800411912019;
    msg.cacc = 0.4649817401260691;

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
    msg.setTimeStamp(0.8119807080468766);
    msg.setSource(24833U);
    msg.setSourceEntity(55U);
    msg.setDestination(21313U);
    msg.setDestinationEntity(49U);
    msg.id = 67U;
    msg.value = 0.8308261051766247;

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
    msg.setTimeStamp(0.5522786063480686);
    msg.setSource(55937U);
    msg.setSourceEntity(246U);
    msg.setDestination(41584U);
    msg.setDestinationEntity(128U);
    msg.id = 114U;
    msg.value = 0.8610337329098325;

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
    msg.setTimeStamp(0.023552839989410934);
    msg.setSource(48179U);
    msg.setSourceEntity(162U);
    msg.setDestination(12993U);
    msg.setDestinationEntity(9U);
    msg.id = 23U;
    msg.value = 0.6613744324678605;

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
    msg.setTimeStamp(0.9008944657825361);
    msg.setSource(50662U);
    msg.setSourceEntity(225U);
    msg.setDestination(40261U);
    msg.setDestinationEntity(2U);
    msg.x = 0.5687627458124269;
    msg.y = 0.7870528976234977;
    msg.z = 0.2201304139527016;
    msg.phi = 0.616798959086605;
    msg.theta = 0.5533621796706978;
    msg.psi = 0.8682768542855239;

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
    msg.setTimeStamp(0.06198948391715775);
    msg.setSource(24733U);
    msg.setSourceEntity(231U);
    msg.setDestination(2892U);
    msg.setDestinationEntity(178U);
    msg.x = 0.12865188062051103;
    msg.y = 0.9156675623599558;
    msg.z = 0.576766377797147;
    msg.phi = 0.9185743309441664;
    msg.theta = 0.6512254594774551;
    msg.psi = 0.7407697342513225;

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
    msg.setTimeStamp(0.8363969035528628);
    msg.setSource(9650U);
    msg.setSourceEntity(37U);
    msg.setDestination(20989U);
    msg.setDestinationEntity(24U);
    msg.x = 0.021176039442090566;
    msg.y = 0.641010314919117;
    msg.z = 0.8410454613713042;
    msg.phi = 0.9505526709564321;
    msg.theta = 0.09444349719191181;
    msg.psi = 0.9372028696381253;

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
    msg.setTimeStamp(0.98677770763127);
    msg.setSource(62398U);
    msg.setSourceEntity(146U);
    msg.setDestination(47574U);
    msg.setDestinationEntity(214U);
    msg.beam_width = 0.785795136961419;
    msg.beam_height = 0.7145745068427084;

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
    msg.setTimeStamp(0.2700008286936354);
    msg.setSource(55750U);
    msg.setSourceEntity(187U);
    msg.setDestination(16702U);
    msg.setDestinationEntity(197U);
    msg.beam_width = 0.5072261667862145;
    msg.beam_height = 0.3737188090631255;

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
    msg.setTimeStamp(0.8608473736318275);
    msg.setSource(51459U);
    msg.setSourceEntity(154U);
    msg.setDestination(41070U);
    msg.setDestinationEntity(106U);
    msg.beam_width = 0.30707150140367345;
    msg.beam_height = 0.03858438678683529;

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
    msg.setTimeStamp(0.6638669990364525);
    msg.setSource(44957U);
    msg.setSourceEntity(246U);
    msg.setDestination(63372U);
    msg.setDestinationEntity(45U);
    msg.sane = 204U;

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
    msg.setTimeStamp(0.39890019387301356);
    msg.setSource(19576U);
    msg.setSourceEntity(12U);
    msg.setDestination(6040U);
    msg.setDestinationEntity(135U);
    msg.sane = 245U;

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
    msg.setTimeStamp(0.6188366912690624);
    msg.setSource(45935U);
    msg.setSourceEntity(109U);
    msg.setDestination(63507U);
    msg.setDestinationEntity(252U);
    msg.sane = 77U;

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
    msg.setTimeStamp(0.6825718528688016);
    msg.setSource(44633U);
    msg.setSourceEntity(139U);
    msg.setDestination(23027U);
    msg.setDestinationEntity(215U);
    msg.value = 0.8559426562212445;

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
    msg.setTimeStamp(0.5653550217298007);
    msg.setSource(46548U);
    msg.setSourceEntity(142U);
    msg.setDestination(47665U);
    msg.setDestinationEntity(108U);
    msg.value = 0.35762614390725367;

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
    msg.setTimeStamp(0.6394721749835074);
    msg.setSource(37819U);
    msg.setSourceEntity(120U);
    msg.setDestination(10107U);
    msg.setDestinationEntity(62U);
    msg.value = 0.4632461604821102;

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
    msg.setTimeStamp(0.10228300670912138);
    msg.setSource(41891U);
    msg.setSourceEntity(226U);
    msg.setDestination(47855U);
    msg.setDestinationEntity(155U);
    msg.value = 0.511857698984438;

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
    msg.setTimeStamp(0.5719620699492628);
    msg.setSource(23371U);
    msg.setSourceEntity(33U);
    msg.setDestination(32197U);
    msg.setDestinationEntity(87U);
    msg.value = 0.35371458682064305;

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
    msg.setTimeStamp(0.8430464284025024);
    msg.setSource(59956U);
    msg.setSourceEntity(77U);
    msg.setDestination(48629U);
    msg.setDestinationEntity(88U);
    msg.value = 0.36514193125764216;

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
    msg.setTimeStamp(0.18055035900897098);
    msg.setSource(2521U);
    msg.setSourceEntity(230U);
    msg.setDestination(31320U);
    msg.setDestinationEntity(35U);
    msg.value = 0.12777748642610276;

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
    msg.setTimeStamp(0.5810496116798396);
    msg.setSource(18816U);
    msg.setSourceEntity(67U);
    msg.setDestination(23778U);
    msg.setDestinationEntity(39U);
    msg.value = 0.7604452157114874;

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
    msg.setTimeStamp(0.7898445214914281);
    msg.setSource(44458U);
    msg.setSourceEntity(149U);
    msg.setDestination(35825U);
    msg.setDestinationEntity(82U);
    msg.value = 0.9998549199948829;

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
    msg.setTimeStamp(0.6328283872170659);
    msg.setSource(7039U);
    msg.setSourceEntity(182U);
    msg.setDestination(20973U);
    msg.setDestinationEntity(89U);
    msg.value = 0.7832991902818504;

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
    msg.setTimeStamp(0.8418785280434652);
    msg.setSource(47517U);
    msg.setSourceEntity(164U);
    msg.setDestination(48575U);
    msg.setDestinationEntity(98U);
    msg.value = 0.6167439240487171;

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
    msg.setTimeStamp(0.12248807681957197);
    msg.setSource(41940U);
    msg.setSourceEntity(164U);
    msg.setDestination(62412U);
    msg.setDestinationEntity(59U);
    msg.value = 0.5243810847060085;

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
    msg.setTimeStamp(0.11721271345488182);
    msg.setSource(6219U);
    msg.setSourceEntity(128U);
    msg.setDestination(41207U);
    msg.setDestinationEntity(87U);
    msg.value = 0.10123110869499519;

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
    msg.setTimeStamp(0.18825072668410125);
    msg.setSource(18800U);
    msg.setSourceEntity(139U);
    msg.setDestination(47318U);
    msg.setDestinationEntity(94U);
    msg.value = 0.11792948608920861;

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
    msg.setTimeStamp(0.21831058925664681);
    msg.setSource(60679U);
    msg.setSourceEntity(100U);
    msg.setDestination(25482U);
    msg.setDestinationEntity(39U);
    msg.value = 0.011297439032314949;

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
    msg.setTimeStamp(0.9946061362884319);
    msg.setSource(19334U);
    msg.setSourceEntity(36U);
    msg.setDestination(59658U);
    msg.setDestinationEntity(8U);
    msg.value = 0.7542642948653069;

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
    msg.setTimeStamp(0.9859390719253578);
    msg.setSource(36865U);
    msg.setSourceEntity(72U);
    msg.setDestination(7014U);
    msg.setDestinationEntity(81U);
    msg.value = 0.4872153439870476;

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
    msg.setTimeStamp(0.8622412148498129);
    msg.setSource(56043U);
    msg.setSourceEntity(100U);
    msg.setDestination(52119U);
    msg.setDestinationEntity(131U);
    msg.value = 0.643985889848791;

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
    msg.setTimeStamp(0.19968911664637234);
    msg.setSource(10662U);
    msg.setSourceEntity(63U);
    msg.setDestination(26237U);
    msg.setDestinationEntity(13U);
    msg.value = 0.5332961968056801;

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
    msg.setTimeStamp(0.7086892971933793);
    msg.setSource(32261U);
    msg.setSourceEntity(71U);
    msg.setDestination(38434U);
    msg.setDestinationEntity(110U);
    msg.value = 0.81080007745223;

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
    msg.setTimeStamp(0.6926156019228545);
    msg.setSource(32271U);
    msg.setSourceEntity(188U);
    msg.setDestination(27823U);
    msg.setDestinationEntity(172U);
    msg.value = 0.8006041162416883;

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
    msg.setTimeStamp(0.1782109572127366);
    msg.setSource(49323U);
    msg.setSourceEntity(132U);
    msg.setDestination(24735U);
    msg.setDestinationEntity(24U);
    msg.value = 0.20067296715145622;

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
    msg.setTimeStamp(0.01747715249561599);
    msg.setSource(40816U);
    msg.setSourceEntity(44U);
    msg.setDestination(10190U);
    msg.setDestinationEntity(16U);
    msg.value = 0.49254782985698453;

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
    msg.setTimeStamp(0.9918914505512524);
    msg.setSource(49437U);
    msg.setSourceEntity(170U);
    msg.setDestination(47704U);
    msg.setDestinationEntity(188U);
    msg.value = 0.48718212397900607;

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
    msg.setTimeStamp(0.3530540167300418);
    msg.setSource(7148U);
    msg.setSourceEntity(227U);
    msg.setDestination(37417U);
    msg.setDestinationEntity(44U);
    msg.validity = 27648U;
    msg.type = 42U;
    msg.tow = 2674003489U;
    msg.base_lat = 0.7734700433557755;
    msg.base_lon = 0.6014599550429929;
    msg.base_height = 0.4257409959530588;
    msg.n = 0.846888483034398;
    msg.e = 0.37089725779339977;
    msg.d = 0.5105502214418147;
    msg.v_n = 0.5491210929032445;
    msg.v_e = 0.44913212398097635;
    msg.v_d = 0.8241699235567146;
    msg.satellites = 92U;
    msg.iar_hyp = 214U;
    msg.iar_ratio = 0.16314752251158693;

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
    msg.setTimeStamp(0.8932347155939587);
    msg.setSource(40978U);
    msg.setSourceEntity(42U);
    msg.setDestination(31239U);
    msg.setDestinationEntity(199U);
    msg.validity = 29645U;
    msg.type = 88U;
    msg.tow = 2126028322U;
    msg.base_lat = 0.962386135636824;
    msg.base_lon = 0.24818407471018156;
    msg.base_height = 0.49381542026890235;
    msg.n = 0.948296456154112;
    msg.e = 0.09079277243161965;
    msg.d = 0.40213975026382265;
    msg.v_n = 0.12292179582343166;
    msg.v_e = 0.8658715794255403;
    msg.v_d = 0.07629961775207927;
    msg.satellites = 149U;
    msg.iar_hyp = 45035U;
    msg.iar_ratio = 0.1641304742744717;

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
    msg.setTimeStamp(0.689895525624213);
    msg.setSource(28914U);
    msg.setSourceEntity(20U);
    msg.setDestination(14124U);
    msg.setDestinationEntity(34U);
    msg.validity = 6525U;
    msg.type = 220U;
    msg.tow = 903891833U;
    msg.base_lat = 0.17332866762081744;
    msg.base_lon = 0.7597292756163567;
    msg.base_height = 0.2058665777229708;
    msg.n = 0.6848531849275543;
    msg.e = 0.16000894196017856;
    msg.d = 0.6640162630043751;
    msg.v_n = 0.889519616074265;
    msg.v_e = 0.7014003453523872;
    msg.v_d = 0.36095072872744416;
    msg.satellites = 16U;
    msg.iar_hyp = 41352U;
    msg.iar_ratio = 0.5775357191091647;

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
    msg.setTimeStamp(0.6769328696561973);
    msg.setSource(55630U);
    msg.setSourceEntity(137U);
    msg.setDestination(57581U);
    msg.setDestinationEntity(118U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.2016406005276533;
    tmp_msg_0.lon = 0.06222621475802437;
    tmp_msg_0.height = 0.8269584838601048;
    tmp_msg_0.x = 0.9836620332367562;
    tmp_msg_0.y = 0.7076536711368688;
    tmp_msg_0.z = 0.9361237595056193;
    tmp_msg_0.phi = 0.21184184966274378;
    tmp_msg_0.theta = 0.792313574290875;
    tmp_msg_0.psi = 0.09383684679982729;
    tmp_msg_0.u = 0.34389691999909144;
    tmp_msg_0.v = 0.8040297061512147;
    tmp_msg_0.w = 0.8152941374091831;
    tmp_msg_0.vx = 0.8693639834648504;
    tmp_msg_0.vy = 0.7061676053955743;
    tmp_msg_0.vz = 0.9670640539438082;
    tmp_msg_0.p = 0.7217483612501486;
    tmp_msg_0.q = 0.9051666132560587;
    tmp_msg_0.r = 0.3908531278554692;
    tmp_msg_0.depth = 0.9381740648631228;
    tmp_msg_0.alt = 0.14251964828371189;
    msg.state.set(tmp_msg_0);
    msg.type = 119U;

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
    msg.setTimeStamp(0.07607678203592949);
    msg.setSource(12262U);
    msg.setSourceEntity(184U);
    msg.setDestination(52492U);
    msg.setDestinationEntity(151U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.2719014053525831;
    tmp_msg_0.lon = 0.2904436125055735;
    tmp_msg_0.height = 0.08831420326855799;
    tmp_msg_0.x = 0.015028665577573541;
    tmp_msg_0.y = 0.042645617313323614;
    tmp_msg_0.z = 0.8187740019052057;
    tmp_msg_0.phi = 0.5637444566416469;
    tmp_msg_0.theta = 0.1747027219861963;
    tmp_msg_0.psi = 0.7038546487304072;
    tmp_msg_0.u = 0.2645639902154009;
    tmp_msg_0.v = 0.09150265636798427;
    tmp_msg_0.w = 0.5226290401076452;
    tmp_msg_0.vx = 0.5640675537524601;
    tmp_msg_0.vy = 0.740019960322026;
    tmp_msg_0.vz = 0.7157843501407851;
    tmp_msg_0.p = 0.8934837715477082;
    tmp_msg_0.q = 0.1422132584633783;
    tmp_msg_0.r = 0.4849404322182742;
    tmp_msg_0.depth = 0.8628048667540634;
    tmp_msg_0.alt = 0.12073466293634205;
    msg.state.set(tmp_msg_0);
    msg.type = 136U;

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
    msg.setTimeStamp(0.8218599085314084);
    msg.setSource(48003U);
    msg.setSourceEntity(213U);
    msg.setDestination(32693U);
    msg.setDestinationEntity(232U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.623768161344607;
    tmp_msg_0.lon = 0.8610685739479406;
    tmp_msg_0.height = 0.9042344440591715;
    tmp_msg_0.x = 0.8720410821667396;
    tmp_msg_0.y = 0.0543898762255246;
    tmp_msg_0.z = 0.5545124474294523;
    tmp_msg_0.phi = 0.726478194595958;
    tmp_msg_0.theta = 0.7968833623071971;
    tmp_msg_0.psi = 0.9420217291134783;
    tmp_msg_0.u = 0.655445473973751;
    tmp_msg_0.v = 0.22510243930730844;
    tmp_msg_0.w = 0.8209054789362962;
    tmp_msg_0.vx = 0.7740169502352303;
    tmp_msg_0.vy = 0.19659327792529502;
    tmp_msg_0.vz = 0.7216381141224274;
    tmp_msg_0.p = 0.4943266216792931;
    tmp_msg_0.q = 0.22806176350895835;
    tmp_msg_0.r = 0.381560063799395;
    tmp_msg_0.depth = 0.5667561174412847;
    tmp_msg_0.alt = 0.03333394391062461;
    msg.state.set(tmp_msg_0);
    msg.type = 215U;

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
    msg.setTimeStamp(0.32209646692184024);
    msg.setSource(46524U);
    msg.setSourceEntity(54U);
    msg.setDestination(48598U);
    msg.setDestinationEntity(212U);
    msg.value = 0.6653315725842484;

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
    msg.setTimeStamp(0.8549489765483347);
    msg.setSource(1021U);
    msg.setSourceEntity(65U);
    msg.setDestination(39679U);
    msg.setDestinationEntity(23U);
    msg.value = 0.5170451229383163;

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
    msg.setTimeStamp(0.9854154212800431);
    msg.setSource(13367U);
    msg.setSourceEntity(156U);
    msg.setDestination(3693U);
    msg.setDestinationEntity(41U);
    msg.value = 0.5622094968995662;

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
    msg.setTimeStamp(0.730999909037739);
    msg.setSource(45741U);
    msg.setSourceEntity(220U);
    msg.setDestination(26624U);
    msg.setDestinationEntity(0U);
    msg.value = 0.5691151747226048;

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
    msg.setTimeStamp(0.09450873090091882);
    msg.setSource(34320U);
    msg.setSourceEntity(19U);
    msg.setDestination(38636U);
    msg.setDestinationEntity(60U);
    msg.value = 0.15340028110649795;

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
    msg.setTimeStamp(0.36728242826680935);
    msg.setSource(25331U);
    msg.setSourceEntity(148U);
    msg.setDestination(36375U);
    msg.setDestinationEntity(175U);
    msg.value = 0.7876627905062195;

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
    msg.setTimeStamp(0.9024489152355526);
    msg.setSource(60188U);
    msg.setSourceEntity(210U);
    msg.setDestination(36704U);
    msg.setDestinationEntity(252U);
    msg.value = 0.07861318401870365;

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
    msg.setTimeStamp(0.8745094409713492);
    msg.setSource(65412U);
    msg.setSourceEntity(188U);
    msg.setDestination(17817U);
    msg.setDestinationEntity(96U);
    msg.value = 0.7386770556900661;

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
    msg.setTimeStamp(0.46337602097746533);
    msg.setSource(56201U);
    msg.setSourceEntity(94U);
    msg.setDestination(31934U);
    msg.setDestinationEntity(247U);
    msg.value = 0.39553225746733156;

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
    msg.setTimeStamp(0.18993660348236008);
    msg.setSource(1543U);
    msg.setSourceEntity(85U);
    msg.setDestination(24385U);
    msg.setDestinationEntity(147U);
    msg.value = 0.5154281262253987;

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
    msg.setTimeStamp(0.3771384137098234);
    msg.setSource(8872U);
    msg.setSourceEntity(80U);
    msg.setDestination(19782U);
    msg.setDestinationEntity(237U);
    msg.value = 0.9370512542759237;

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
    msg.setTimeStamp(0.5043586809005298);
    msg.setSource(52018U);
    msg.setSourceEntity(130U);
    msg.setDestination(56123U);
    msg.setDestinationEntity(17U);
    msg.value = 0.17652141607682603;

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
    msg.setTimeStamp(0.11062602014767631);
    msg.setSource(43758U);
    msg.setSourceEntity(194U);
    msg.setDestination(17537U);
    msg.setDestinationEntity(58U);
    msg.value = 0.6524953293797165;

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
    msg.setTimeStamp(0.8299482627204198);
    msg.setSource(43558U);
    msg.setSourceEntity(133U);
    msg.setDestination(37617U);
    msg.setDestinationEntity(23U);
    msg.value = 0.8747960176220172;

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
    msg.setTimeStamp(0.9522849553057972);
    msg.setSource(45413U);
    msg.setSourceEntity(55U);
    msg.setDestination(7715U);
    msg.setDestinationEntity(230U);
    msg.value = 0.5570334353257665;

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
    msg.setTimeStamp(0.1776662608131908);
    msg.setSource(60453U);
    msg.setSourceEntity(195U);
    msg.setDestination(12362U);
    msg.setDestinationEntity(0U);
    msg.id = 81U;
    msg.zoom = 154U;
    msg.action = 33U;

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
    msg.setTimeStamp(0.8433187741862491);
    msg.setSource(11858U);
    msg.setSourceEntity(209U);
    msg.setDestination(14881U);
    msg.setDestinationEntity(133U);
    msg.id = 84U;
    msg.zoom = 233U;
    msg.action = 133U;

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
    msg.setTimeStamp(0.342298971418871);
    msg.setSource(32074U);
    msg.setSourceEntity(188U);
    msg.setDestination(10769U);
    msg.setDestinationEntity(113U);
    msg.id = 35U;
    msg.zoom = 151U;
    msg.action = 198U;

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
    msg.setTimeStamp(0.723948949195391);
    msg.setSource(4463U);
    msg.setSourceEntity(38U);
    msg.setDestination(11539U);
    msg.setDestinationEntity(200U);
    msg.id = 81U;
    msg.value = 0.19129392317485727;

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
    msg.setTimeStamp(0.6472857130705763);
    msg.setSource(53745U);
    msg.setSourceEntity(156U);
    msg.setDestination(55025U);
    msg.setDestinationEntity(127U);
    msg.id = 58U;
    msg.value = 0.10589709955625315;

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
    msg.setTimeStamp(0.799930554743425);
    msg.setSource(35270U);
    msg.setSourceEntity(16U);
    msg.setDestination(37935U);
    msg.setDestinationEntity(180U);
    msg.id = 246U;
    msg.value = 0.4439971862312585;

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
    msg.setTimeStamp(0.5512844575776098);
    msg.setSource(20037U);
    msg.setSourceEntity(170U);
    msg.setDestination(2989U);
    msg.setDestinationEntity(144U);
    msg.id = 126U;
    msg.value = 0.8928144392469983;

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
    msg.setTimeStamp(0.9481095706209204);
    msg.setSource(54140U);
    msg.setSourceEntity(35U);
    msg.setDestination(9284U);
    msg.setDestinationEntity(80U);
    msg.id = 197U;
    msg.value = 0.9662111713650667;

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
    msg.setTimeStamp(0.4846281690421609);
    msg.setSource(41705U);
    msg.setSourceEntity(103U);
    msg.setDestination(32714U);
    msg.setDestinationEntity(88U);
    msg.id = 106U;
    msg.value = 0.5976935047648362;

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
    msg.setTimeStamp(0.8043793738848719);
    msg.setSource(50890U);
    msg.setSourceEntity(218U);
    msg.setDestination(8562U);
    msg.setDestinationEntity(99U);
    msg.id = 244U;
    msg.angle = 0.8106765880015674;

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
    msg.setTimeStamp(0.6500200135193558);
    msg.setSource(12912U);
    msg.setSourceEntity(178U);
    msg.setDestination(653U);
    msg.setDestinationEntity(38U);
    msg.id = 154U;
    msg.angle = 0.6008525299933343;

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
    msg.setTimeStamp(0.2538175987464877);
    msg.setSource(28580U);
    msg.setSourceEntity(56U);
    msg.setDestination(25539U);
    msg.setDestinationEntity(114U);
    msg.id = 17U;
    msg.angle = 0.012405132446488776;

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
    msg.setTimeStamp(0.6146178916526938);
    msg.setSource(51512U);
    msg.setSourceEntity(185U);
    msg.setDestination(2352U);
    msg.setDestinationEntity(70U);
    msg.op = 215U;
    msg.actions.assign("YDFEPRCSLICEOPXUZXMGDYUMECATOPZGAMQPFRVQDN");

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
    msg.setTimeStamp(0.3189354520616986);
    msg.setSource(36084U);
    msg.setSourceEntity(120U);
    msg.setDestination(4797U);
    msg.setDestinationEntity(49U);
    msg.op = 143U;
    msg.actions.assign("GWPXTGOFLYJSQEMTTDKHCNHLYXQLPJFEOJNRURCDGDSPXSWBUWCSJMRVVLFVITQZBRANZKLXWVVIDAMRZHWNILEAPZFQKHVBBUTOYKGIUOMOMRDFJCNTNUGFGEURTRKFXFHMQAIZUVKLAMWAXRDIUCEHJZAKPXKAYVGDZYZSQIYLUBPPCZSHRQKHIEEAGMESOXFGYYUCPTODNINIBSJXDCOYLJJCSXQWKMZYOPLOCQBBBDHTWPWHFTW");

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
    msg.setTimeStamp(0.14120652792538058);
    msg.setSource(39533U);
    msg.setSourceEntity(114U);
    msg.setDestination(63714U);
    msg.setDestinationEntity(141U);
    msg.op = 73U;
    msg.actions.assign("NSQITTGXPAVGKNVWVHZHXPPIAKTIYUSZXUZYLQICNTNIYFHLTZKBGOKTGVJNYDQMBYLHDLAGQEFEJQENCWHCJYIGKUUFUUFYSZTSLIVBXRPOMSGETHSIQPWOELRRSJPEGKYDQEDLKCCBRNXBKCVXNRWQQKVROVHWWRMWZATHYPPDFFNGDEXPIORWBOEZFHUMEWFXNDDJMMSLBCQZAHZZJAOOUFPCM");

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
    msg.setTimeStamp(0.751647012118032);
    msg.setSource(43285U);
    msg.setSourceEntity(96U);
    msg.setDestination(5643U);
    msg.setDestinationEntity(174U);
    msg.actions.assign("OUJSMUALCASIYFIAWQKDSLDXFZGCJAGQRXMBLWDSCCFUPJDTFPZUOUNVLLBANRGNYENSWUQELJXXGXUYERQGKOJBKVEOIHETFWYPXTQIRMHEVPGMSDAGZPKEESHLBFECFZIXTWBMQJZDYCMQWNRGTPOHTQXHMQAKJPRGMKROOXFJLNIMSWEAVHCPBI");

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
    msg.setTimeStamp(0.8527530684155334);
    msg.setSource(37548U);
    msg.setSourceEntity(109U);
    msg.setDestination(17588U);
    msg.setDestinationEntity(191U);
    msg.actions.assign("ZTFVEBKEBLJUEDPYLNGQ");

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
    msg.setTimeStamp(0.6037373554946335);
    msg.setSource(36742U);
    msg.setSourceEntity(120U);
    msg.setDestination(30267U);
    msg.setDestinationEntity(102U);
    msg.actions.assign("EIODKAVRDYBPXOCABVYUIPBPAQMPXWOCFJJLTNNYGEEDMTZLHTJJZZBKIRIBFZQQTQXERQBPUAZDQJDNVTPLMYGCKEWNU");

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
    msg.setTimeStamp(0.8386071788433744);
    msg.setSource(62479U);
    msg.setSourceEntity(51U);
    msg.setDestination(19984U);
    msg.setDestinationEntity(241U);
    msg.button = 189U;
    msg.value = 65U;

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
    msg.setTimeStamp(0.903849198931687);
    msg.setSource(52765U);
    msg.setSourceEntity(137U);
    msg.setDestination(56005U);
    msg.setDestinationEntity(91U);
    msg.button = 159U;
    msg.value = 14U;

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
    msg.setTimeStamp(0.43980406619863266);
    msg.setSource(11288U);
    msg.setSourceEntity(191U);
    msg.setDestination(44327U);
    msg.setDestinationEntity(209U);
    msg.button = 85U;
    msg.value = 14U;

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
    msg.setTimeStamp(0.2912720076454104);
    msg.setSource(28522U);
    msg.setSourceEntity(7U);
    msg.setDestination(53001U);
    msg.setDestinationEntity(215U);
    msg.op = 38U;
    msg.text.assign("SSUSEQHYCCSWEMVBJRVKTHXOMPTIGYXVCYPDRKPDKFPKHOTWGKALINRHQGYHXUJVXZNIDRLZDUFVBOGZBRBGQQYDLDREUPZYIFUXQIFZPCHNRIGNALOTUUHAMAPMNBGMXYJLNZEYWOFWKVTJZBUKERISPMSXJFWKTCLTSFLTQSLFQECOB");

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
    msg.setTimeStamp(0.8564512105636485);
    msg.setSource(2776U);
    msg.setSourceEntity(138U);
    msg.setDestination(18929U);
    msg.setDestinationEntity(254U);
    msg.op = 70U;
    msg.text.assign("TZZTTSEYNICHRYIBXPSUZNSFMVTOGFDVREGQQIFGUODYXHAZTBPBDZCQJWLXULZFMYQEGHISADGASDNDRGEDZQOBFFPVTPMAVYZYTIWKJAPQCEMVPBVLORACFWMYPCJBCKJWJLXSQOHUWXPBOLT");

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
    msg.setTimeStamp(0.7187739614145241);
    msg.setSource(33697U);
    msg.setSourceEntity(166U);
    msg.setDestination(8538U);
    msg.setDestinationEntity(199U);
    msg.op = 15U;
    msg.text.assign("KNOOGZNNCCCAWRXWYNSCNUPZKGFPDQRFHFDNMYBRBQKLXMKSBKEZLJFEKFFJUAIUUVKMIDVRTLVWUDYNGRJLLBXJHPSOQFUWSVHUTJMQFUCIBOIOPWRVLHHDVYAZGALETHGBMTYVJCTBWPQDWJUGLOAEZQXEVSXZDEKZCGIPYPOVQSZXAPAA");

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
    msg.setTimeStamp(0.968519750478751);
    msg.setSource(30277U);
    msg.setSourceEntity(156U);
    msg.setDestination(32322U);
    msg.setDestinationEntity(151U);
    msg.op = 43U;
    msg.time_remain = 0.7128731959446485;
    msg.sched_time = 0.5392034171475006;

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
    msg.setTimeStamp(0.1343356507610175);
    msg.setSource(59474U);
    msg.setSourceEntity(206U);
    msg.setDestination(62609U);
    msg.setDestinationEntity(96U);
    msg.op = 250U;
    msg.time_remain = 0.5478957992298671;
    msg.sched_time = 0.08448397919656203;

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
    msg.setTimeStamp(0.5878985407902944);
    msg.setSource(21726U);
    msg.setSourceEntity(104U);
    msg.setDestination(41838U);
    msg.setDestinationEntity(2U);
    msg.op = 162U;
    msg.time_remain = 0.35199853078132437;
    msg.sched_time = 0.20647255106965356;

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
    msg.setTimeStamp(0.7506972162851852);
    msg.setSource(39954U);
    msg.setSourceEntity(73U);
    msg.setDestination(5758U);
    msg.setDestinationEntity(166U);
    msg.name.assign("UBZWPUFHEQAOVVCNGJOFKJDDJUQOLIFADBUVFMFQCVVXCYWWDYISYHSPXLUETMQZNHTLCOAPXPSJLKHMMKEEHYQLHSEZEKKRNDTKMFXYIPOCYMBKXRCNSPKXPTSDNFZVGATGLYLQWBRQVIHYIWQROXBVRGTBCWXIJSKULTTJTJJAVURQHGQOBMMIAWSRZGPRJWUPCUZZKAJHUVSGIOD");
    msg.op = 89U;
    msg.sched_time = 0.02314242831075619;

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
    msg.setTimeStamp(0.3728514295922679);
    msg.setSource(53342U);
    msg.setSourceEntity(179U);
    msg.setDestination(27200U);
    msg.setDestinationEntity(26U);
    msg.name.assign("SJAKNCUYXOHTELSBQGWNZKLWSVHJIIYXTADYRSWNRLWJG");
    msg.op = 56U;
    msg.sched_time = 0.5557939674362815;

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
    msg.setTimeStamp(0.06128672843867178);
    msg.setSource(33803U);
    msg.setSourceEntity(37U);
    msg.setDestination(414U);
    msg.setDestinationEntity(171U);
    msg.name.assign("BWHZTICBMZAWKOLBILR");
    msg.op = 53U;
    msg.sched_time = 0.7519360949078323;

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
    msg.setTimeStamp(0.8425943138824047);
    msg.setSource(44861U);
    msg.setSourceEntity(103U);
    msg.setDestination(21795U);
    msg.setDestinationEntity(10U);

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
    msg.setTimeStamp(0.7178773836097609);
    msg.setSource(4377U);
    msg.setSourceEntity(188U);
    msg.setDestination(7824U);
    msg.setDestinationEntity(212U);

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
    msg.setTimeStamp(0.5924732261246972);
    msg.setSource(21665U);
    msg.setSourceEntity(19U);
    msg.setDestination(52607U);
    msg.setDestinationEntity(157U);

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
    msg.setTimeStamp(0.4880829193828081);
    msg.setSource(22463U);
    msg.setSourceEntity(132U);
    msg.setDestination(8190U);
    msg.setDestinationEntity(8U);
    msg.name.assign("EZJQJRNPWPZNNFJBBWEASJOPURXXSWZUXDIJOILFBXFRCTYUGEYNGGBDKHXLJMWZIPELKQRDARMEVLTNOUBZTKYARCOPXIOHHZDOLDLMGICGBPQQIIXQCAHKVLWTGYRNVESJJSVVIJKFRHEQNKDFLPMXQGWOQSAUHKYETTCQWVRLMPGNWOTMMVXCIVUBSBBRCAKKLHJMG");
    msg.state = 138U;

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
    msg.setTimeStamp(0.17491789369815958);
    msg.setSource(54297U);
    msg.setSourceEntity(193U);
    msg.setDestination(56618U);
    msg.setDestinationEntity(28U);
    msg.name.assign("SBJQXAPGOZKFMTBQOWOCSGJNTLCMLKALVGIPSKWCHGLRVIIYBXFIIAGFSBNSLXNDQADAYKNYDAZPERQZUMULWTEEAISZHVSUOZWTUJTYHFPUKMERFAIDSDMNJIFKGNWWCWCLAMEZGCPOEWHPULQHHVRQMDFCKPMTKXVXE");
    msg.state = 158U;

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
    msg.setTimeStamp(0.6436660044555457);
    msg.setSource(47520U);
    msg.setSourceEntity(9U);
    msg.setDestination(26458U);
    msg.setDestinationEntity(92U);
    msg.name.assign("ZJJPSFAHSTSBDSTCRCENNVYOSKUTEDRUYWQPHVQMNDOPRBKJIXIMVPGEBRMPATXCUTNWOTGGXLMQQJAFYTNEOFFPJYVZYAYIOZOFBSDRKMHBDEIFSBGPWXNMRUBIFZISRWWZGUXTABLLVWUOLPVZCFKELCPVMZYLHMMKKYYCNDGOKKZLBAE");
    msg.state = 39U;

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
    msg.setTimeStamp(0.881996725044769);
    msg.setSource(47655U);
    msg.setSourceEntity(207U);
    msg.setDestination(5383U);
    msg.setDestinationEntity(202U);
    msg.name.assign("KFPPCTNPLVUXOFGVFFFZREWUNWHNYKOEICMWVCIRANZYSYIUBNIJCTFDXKZFJXLTDAVUJEMKBCAYNQWMDQWQZRNYXWGNOIZJPZAIAVMJYWSHVIGKOANZQWGEDZDLBIBYIHHPTUTKRPHDUVRLMP");
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
    msg.setTimeStamp(0.7871321654730381);
    msg.setSource(39391U);
    msg.setSourceEntity(0U);
    msg.setDestination(43522U);
    msg.setDestinationEntity(235U);
    msg.name.assign("EVCFEUGONZJMBWONMBLOHCDAXYCZUSZFESRDGRLUZPKVUKXUEAIHXZBDLORGSZOGVNBECSVFPYJBTIHKAETNWWMBMQIYWUTLODNWBGFMNRKKYNLJIJHMVNAIHMPAEVVJDXRSSWAQKURPLXZGQFPQHOYSMXPBJHVVHELDDYPQWFTEXFJKYPOKXEASUMRWBIYUIDDSCNTTNHYQRWACPU");
    msg.value = 66U;

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
    msg.setTimeStamp(0.9480622878397678);
    msg.setSource(8457U);
    msg.setSourceEntity(84U);
    msg.setDestination(59785U);
    msg.setDestinationEntity(57U);
    msg.name.assign("LCSDHFLTUQFDPIBVWIXTMUJFHDIPUGZYPLOYQDWGOXIUOVOCXYJQHSCGLXAENGJRVULBPKJUYXPNTKXZSPKRGHPVXGOOGRWRFNISPJSQRMZQQLYGSXR");
    msg.value = 189U;

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
    msg.setTimeStamp(0.9425237077520768);
    msg.setSource(36319U);
    msg.setSourceEntity(26U);
    msg.setDestination(24075U);
    msg.setDestinationEntity(219U);
    msg.name.assign("OXUWDPCHKXIRGNLTVUNFKBJSBWURTW");

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
    msg.setTimeStamp(0.9516662006829432);
    msg.setSource(32467U);
    msg.setSourceEntity(185U);
    msg.setDestination(37551U);
    msg.setDestinationEntity(219U);
    msg.name.assign("WYDVNQCAMQTRDWZQGQDLLOLNWCLBSIXKIOJBMZHHITNFTIMVYFHNCFYZBZAKPEMVVGLPRFAHYTKNPASXEKZERMPJRCB");

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
    msg.setTimeStamp(0.251031693853237);
    msg.setSource(37277U);
    msg.setSourceEntity(215U);
    msg.setDestination(65205U);
    msg.setDestinationEntity(47U);
    msg.name.assign("OILBRFBTRQMKZAUJHOOMCXJPPSYFLNSSEKWUHXV");

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
    msg.setTimeStamp(0.7504447190828637);
    msg.setSource(27059U);
    msg.setSourceEntity(192U);
    msg.setDestination(9191U);
    msg.setDestinationEntity(227U);
    msg.name.assign("PUYYRNYKWXBLNNRCASI");
    msg.value = 195U;

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
    msg.setTimeStamp(0.02919793618702604);
    msg.setSource(3517U);
    msg.setSourceEntity(177U);
    msg.setDestination(42791U);
    msg.setDestinationEntity(40U);
    msg.name.assign("JEWBFYHXACBAALIPCMUNGQYVBUBHMJJXIWNWZPKENKQWUHLIDCHCQFUSZJIMXGPVQKYDVDXEZSYLMFAKPBODLNEQPWPKLHODRJUKKYSSFHHMJSMQLTA");
    msg.value = 191U;

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
    msg.setTimeStamp(0.5683920035127591);
    msg.setSource(5291U);
    msg.setSourceEntity(171U);
    msg.setDestination(23447U);
    msg.setDestinationEntity(87U);
    msg.name.assign("PLRDASNWHKMEDONICEFLWFGDVVVQTYGRLAXISMDTMHNTJWWEBNOLQGAZKIDTAPOAEKMQREDDAKQAZWSBYRKLTJCMCQUCPZXNSHSUTVXFPTIYKQEMPVVJRWKLOIJDYBYBWTXCJZZPWTUZIBUGYFUHDH");
    msg.value = 235U;

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
    msg.setTimeStamp(0.5975997663755326);
    msg.setSource(31886U);
    msg.setSourceEntity(101U);
    msg.setDestination(18509U);
    msg.setDestinationEntity(128U);
    msg.id = 138U;
    msg.period = 1120514299U;
    msg.duty_cycle = 669446581U;

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
    msg.setTimeStamp(0.4819063754929338);
    msg.setSource(581U);
    msg.setSourceEntity(205U);
    msg.setDestination(41128U);
    msg.setDestinationEntity(158U);
    msg.id = 163U;
    msg.period = 483805713U;
    msg.duty_cycle = 2502858579U;

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
    msg.setTimeStamp(0.7045132292407325);
    msg.setSource(56351U);
    msg.setSourceEntity(236U);
    msg.setDestination(32657U);
    msg.setDestinationEntity(105U);
    msg.id = 90U;
    msg.period = 4262393907U;
    msg.duty_cycle = 3886715038U;

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
    msg.setTimeStamp(0.6303607927111335);
    msg.setSource(8850U);
    msg.setSourceEntity(100U);
    msg.setDestination(49576U);
    msg.setDestinationEntity(112U);
    msg.id = 228U;
    msg.period = 539521500U;
    msg.duty_cycle = 3836855086U;

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
    msg.setTimeStamp(0.34756565834327735);
    msg.setSource(60187U);
    msg.setSourceEntity(41U);
    msg.setDestination(20586U);
    msg.setDestinationEntity(202U);
    msg.id = 213U;
    msg.period = 942305015U;
    msg.duty_cycle = 2651911378U;

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
    msg.setTimeStamp(0.08468908810540732);
    msg.setSource(58899U);
    msg.setSourceEntity(137U);
    msg.setDestination(53664U);
    msg.setDestinationEntity(35U);
    msg.id = 21U;
    msg.period = 10660985U;
    msg.duty_cycle = 760037430U;

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
    msg.setTimeStamp(0.26257573332426387);
    msg.setSource(25923U);
    msg.setSourceEntity(23U);
    msg.setDestination(53118U);
    msg.setDestinationEntity(99U);
    msg.lat = 0.6830696122359359;
    msg.lon = 0.12211808585250117;
    msg.height = 0.48498486111605565;
    msg.x = 0.9081458506527039;
    msg.y = 0.3585739355135139;
    msg.z = 0.026504090577974537;
    msg.phi = 0.23122484389729214;
    msg.theta = 0.09891703671282892;
    msg.psi = 0.8413963579396149;
    msg.u = 0.811450194969539;
    msg.v = 0.46560283501826927;
    msg.w = 0.1675549496797265;
    msg.vx = 0.5703529798011597;
    msg.vy = 0.4192009154325692;
    msg.vz = 0.6645034159125851;
    msg.p = 0.2705566462724385;
    msg.q = 0.33534203412379116;
    msg.r = 0.6797659373742666;
    msg.depth = 0.06648510071083769;
    msg.alt = 0.4098007893557062;

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
    msg.setTimeStamp(0.8885042133224001);
    msg.setSource(51160U);
    msg.setSourceEntity(222U);
    msg.setDestination(208U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.044629152317081644;
    msg.lon = 0.05329852256408085;
    msg.height = 0.14250476565196102;
    msg.x = 0.3931195424003199;
    msg.y = 0.10464911058725468;
    msg.z = 0.36001943366315015;
    msg.phi = 0.043145886372808695;
    msg.theta = 0.726145995281724;
    msg.psi = 0.5187929846954646;
    msg.u = 0.09639808816230244;
    msg.v = 0.02548183257740466;
    msg.w = 0.08916430716024493;
    msg.vx = 0.09980492424728693;
    msg.vy = 0.7364191521286969;
    msg.vz = 0.7718472288187014;
    msg.p = 0.33669757667414624;
    msg.q = 0.32096291604060656;
    msg.r = 0.3937833921639369;
    msg.depth = 0.272919564708093;
    msg.alt = 0.994856661799728;

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
    msg.setTimeStamp(0.7077560924056406);
    msg.setSource(22150U);
    msg.setSourceEntity(56U);
    msg.setDestination(56960U);
    msg.setDestinationEntity(213U);
    msg.lat = 0.4765121137240277;
    msg.lon = 0.20899768497399007;
    msg.height = 0.6528103648411373;
    msg.x = 0.3082227704951471;
    msg.y = 0.8975962261761727;
    msg.z = 0.8815937528572981;
    msg.phi = 0.5452856759733294;
    msg.theta = 0.939598679817099;
    msg.psi = 0.02929929347272464;
    msg.u = 0.5312030415533582;
    msg.v = 0.7050865767413246;
    msg.w = 0.5676248391004055;
    msg.vx = 0.617748035454868;
    msg.vy = 0.6736053111040826;
    msg.vz = 0.9057390733983113;
    msg.p = 0.3451790254594188;
    msg.q = 0.07768178263461378;
    msg.r = 0.8684359533321818;
    msg.depth = 0.5878317220810497;
    msg.alt = 0.39775805435682465;

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
    msg.setTimeStamp(0.6110063248565964);
    msg.setSource(49638U);
    msg.setSourceEntity(0U);
    msg.setDestination(15818U);
    msg.setDestinationEntity(110U);
    msg.x = 0.003735845011208383;
    msg.y = 0.9575138307042801;
    msg.z = 0.7281171023654132;

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
    msg.setTimeStamp(0.969573076321243);
    msg.setSource(40523U);
    msg.setSourceEntity(98U);
    msg.setDestination(8748U);
    msg.setDestinationEntity(133U);
    msg.x = 0.029914740507372306;
    msg.y = 0.9027510650938789;
    msg.z = 0.3921689592453338;

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
    msg.setTimeStamp(0.9967124281787724);
    msg.setSource(21891U);
    msg.setSourceEntity(252U);
    msg.setDestination(11525U);
    msg.setDestinationEntity(119U);
    msg.x = 0.42234209505486675;
    msg.y = 0.9583077548889695;
    msg.z = 0.40730830161356557;

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
    msg.setTimeStamp(0.5074910458656638);
    msg.setSource(51976U);
    msg.setSourceEntity(76U);
    msg.setDestination(28423U);
    msg.setDestinationEntity(189U);
    msg.value = 0.6838043981964422;

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
    msg.setTimeStamp(0.507900732282731);
    msg.setSource(26281U);
    msg.setSourceEntity(116U);
    msg.setDestination(5295U);
    msg.setDestinationEntity(57U);
    msg.value = 0.43335631863009505;

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
    msg.setTimeStamp(0.4371873848248927);
    msg.setSource(37737U);
    msg.setSourceEntity(76U);
    msg.setDestination(4028U);
    msg.setDestinationEntity(157U);
    msg.value = 0.33517497412310904;

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
    msg.setTimeStamp(0.41707378016766095);
    msg.setSource(2605U);
    msg.setSourceEntity(245U);
    msg.setDestination(53784U);
    msg.setDestinationEntity(38U);
    msg.value = 0.8699214511663023;

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
    msg.setTimeStamp(0.43231822159853217);
    msg.setSource(12584U);
    msg.setSourceEntity(201U);
    msg.setDestination(42409U);
    msg.setDestinationEntity(26U);
    msg.value = 0.25867547226880405;

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
    msg.setTimeStamp(0.501907719707468);
    msg.setSource(62878U);
    msg.setSourceEntity(35U);
    msg.setDestination(61257U);
    msg.setDestinationEntity(96U);
    msg.value = 0.016394108726709766;

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
    msg.setTimeStamp(0.2758615090731523);
    msg.setSource(152U);
    msg.setSourceEntity(27U);
    msg.setDestination(6076U);
    msg.setDestinationEntity(34U);
    msg.x = 0.2402871407803422;
    msg.y = 0.5066455094739837;
    msg.z = 0.060806739014411026;
    msg.phi = 0.4938087717984415;
    msg.theta = 0.30997913709799907;
    msg.psi = 0.22826138306717247;
    msg.p = 0.4624751384934962;
    msg.q = 0.5544866120785096;
    msg.r = 0.1020159115967918;
    msg.u = 0.8505146333056809;
    msg.v = 0.6030024908142366;
    msg.w = 0.8426572977844454;
    msg.bias_psi = 0.5305600023779712;
    msg.bias_r = 0.7005298935620938;

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
    msg.setTimeStamp(0.3887910645436843);
    msg.setSource(63510U);
    msg.setSourceEntity(125U);
    msg.setDestination(35983U);
    msg.setDestinationEntity(53U);
    msg.x = 0.9580148258382919;
    msg.y = 0.9994256940386027;
    msg.z = 0.9886210367446037;
    msg.phi = 0.8562760556448128;
    msg.theta = 0.7524825332354942;
    msg.psi = 0.8860461088710483;
    msg.p = 0.3307571410553791;
    msg.q = 0.8045089296675448;
    msg.r = 0.7927752581166666;
    msg.u = 0.10931659016875317;
    msg.v = 0.7497119094799728;
    msg.w = 0.5039675490127803;
    msg.bias_psi = 0.562661177870123;
    msg.bias_r = 0.9623384154432179;

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
    msg.setTimeStamp(0.7279968719329847);
    msg.setSource(39952U);
    msg.setSourceEntity(233U);
    msg.setDestination(6725U);
    msg.setDestinationEntity(43U);
    msg.x = 0.7276425971771592;
    msg.y = 0.6444498196407664;
    msg.z = 0.6675238066647339;
    msg.phi = 0.8504622662956534;
    msg.theta = 0.722807083989519;
    msg.psi = 0.873418278571247;
    msg.p = 0.11552090034460338;
    msg.q = 0.7780573413798295;
    msg.r = 0.27336371318007824;
    msg.u = 0.912019833764753;
    msg.v = 0.9164543414444445;
    msg.w = 0.3420280857691985;
    msg.bias_psi = 0.2844879895198609;
    msg.bias_r = 0.8957273536143537;

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
    msg.setTimeStamp(0.9176219007216053);
    msg.setSource(56450U);
    msg.setSourceEntity(188U);
    msg.setDestination(44043U);
    msg.setDestinationEntity(147U);
    msg.bias_psi = 0.29206974803965535;
    msg.bias_r = 0.8666551849656913;
    msg.cog = 0.6019806488183727;
    msg.cyaw = 0.422152986695272;
    msg.lbl_rej_level = 0.36095920584728114;
    msg.gps_rej_level = 0.6277854808898747;
    msg.custom_x = 0.5309127028914555;
    msg.custom_y = 0.4473122867992103;
    msg.custom_z = 0.9292636850600973;

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
    msg.setTimeStamp(0.8364842339714063);
    msg.setSource(63357U);
    msg.setSourceEntity(150U);
    msg.setDestination(55318U);
    msg.setDestinationEntity(235U);
    msg.bias_psi = 0.8464124584152929;
    msg.bias_r = 0.2659483906164307;
    msg.cog = 0.34507697774450774;
    msg.cyaw = 0.626389901995579;
    msg.lbl_rej_level = 0.5546928217254529;
    msg.gps_rej_level = 0.44744644849122894;
    msg.custom_x = 0.3579320812253012;
    msg.custom_y = 0.38867708957720537;
    msg.custom_z = 0.24697384985597237;

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
    msg.setTimeStamp(0.8166226372507766);
    msg.setSource(26884U);
    msg.setSourceEntity(55U);
    msg.setDestination(42234U);
    msg.setDestinationEntity(143U);
    msg.bias_psi = 0.5664234494013819;
    msg.bias_r = 0.4989746957068376;
    msg.cog = 0.6231329409858911;
    msg.cyaw = 0.01260595037103518;
    msg.lbl_rej_level = 0.2689159257723379;
    msg.gps_rej_level = 0.8105387865711228;
    msg.custom_x = 0.6908832356396059;
    msg.custom_y = 0.7854814346791041;
    msg.custom_z = 0.7460718555043315;

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
    msg.setTimeStamp(0.13398108247479434);
    msg.setSource(291U);
    msg.setSourceEntity(212U);
    msg.setDestination(10424U);
    msg.setDestinationEntity(93U);
    msg.utc_time = 0.44602736303935264;
    msg.reason = 199U;

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
    msg.setTimeStamp(0.4097629780629042);
    msg.setSource(65430U);
    msg.setSourceEntity(170U);
    msg.setDestination(39697U);
    msg.setDestinationEntity(148U);
    msg.utc_time = 0.20077326450923605;
    msg.reason = 214U;

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
    msg.setTimeStamp(0.2766307657756455);
    msg.setSource(38197U);
    msg.setSourceEntity(139U);
    msg.setDestination(57170U);
    msg.setDestinationEntity(25U);
    msg.utc_time = 0.23230466365290225;
    msg.reason = 210U;

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
    msg.setTimeStamp(0.6453099401907902);
    msg.setSource(10286U);
    msg.setSourceEntity(58U);
    msg.setDestination(35971U);
    msg.setDestinationEntity(176U);
    msg.id = 77U;
    msg.range = 0.3261549681927619;
    msg.acceptance = 90U;

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
    msg.setTimeStamp(0.09154634084738511);
    msg.setSource(36002U);
    msg.setSourceEntity(80U);
    msg.setDestination(59321U);
    msg.setDestinationEntity(48U);
    msg.id = 118U;
    msg.range = 0.8503245995176185;
    msg.acceptance = 51U;

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
    msg.setTimeStamp(0.07792309341180892);
    msg.setSource(27031U);
    msg.setSourceEntity(225U);
    msg.setDestination(53645U);
    msg.setDestinationEntity(232U);
    msg.id = 227U;
    msg.range = 0.2660748451461089;
    msg.acceptance = 13U;

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
    msg.setTimeStamp(0.25834558103364147);
    msg.setSource(52917U);
    msg.setSourceEntity(110U);
    msg.setDestination(48448U);
    msg.setDestinationEntity(138U);
    msg.type = 21U;
    msg.reason = 25U;
    msg.value = 0.9473142417780804;
    msg.timestep = 0.959333926839864;

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
    msg.setTimeStamp(0.5442205885207742);
    msg.setSource(38763U);
    msg.setSourceEntity(7U);
    msg.setDestination(63444U);
    msg.setDestinationEntity(74U);
    msg.type = 17U;
    msg.reason = 134U;
    msg.value = 0.4005531741634559;
    msg.timestep = 0.135739308538268;

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
    msg.setTimeStamp(0.8242856344281749);
    msg.setSource(9772U);
    msg.setSourceEntity(136U);
    msg.setDestination(15034U);
    msg.setDestinationEntity(154U);
    msg.type = 156U;
    msg.reason = 95U;
    msg.value = 0.5583428650279942;
    msg.timestep = 0.4008340235644988;

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
    msg.setTimeStamp(0.6403738977116521);
    msg.setSource(44184U);
    msg.setSourceEntity(173U);
    msg.setDestination(29903U);
    msg.setDestinationEntity(186U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SZOMNQRSKVUPFXUXEMXBUGGYQCZVWLATSPASJGPVVXCCYEI");
    tmp_msg_0.lat = 0.9462394997222529;
    tmp_msg_0.lon = 0.26256463560462284;
    tmp_msg_0.depth = 0.1210506781463615;
    tmp_msg_0.query_channel = 101U;
    tmp_msg_0.reply_channel = 237U;
    tmp_msg_0.transponder_delay = 45U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.9923037646862779;
    msg.y = 0.11421606155636632;
    msg.var_x = 0.5401850207095535;
    msg.var_y = 0.8645293531182829;
    msg.distance = 0.2934452378241552;

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
    msg.setTimeStamp(0.6925535865036897);
    msg.setSource(48702U);
    msg.setSourceEntity(237U);
    msg.setDestination(58469U);
    msg.setDestinationEntity(226U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QTVYNRIPYKBUTRLDXFPIOBQADEQKWAVOXOSEMFEXXDVEIBBWICAYPQCBRQHNBLZHYII");
    tmp_msg_0.lat = 0.9838879190742832;
    tmp_msg_0.lon = 0.15297916222439845;
    tmp_msg_0.depth = 0.03416341122708588;
    tmp_msg_0.query_channel = 244U;
    tmp_msg_0.reply_channel = 195U;
    tmp_msg_0.transponder_delay = 141U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.6985176831361323;
    msg.y = 0.11285330701170082;
    msg.var_x = 0.30995474422753233;
    msg.var_y = 0.24311707244820935;
    msg.distance = 0.4963707773989918;

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
    msg.setTimeStamp(0.467356186626398);
    msg.setSource(37896U);
    msg.setSourceEntity(41U);
    msg.setDestination(53740U);
    msg.setDestinationEntity(199U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("SSUPAKOVCQEJCTFYWKUCCEJBUFMSABIPNZVDYTYABQKBQQLDJIPFSNXBLRYKLIJEVONHMLTRPKDNGDBHNLHNPZZNXVKAEGNAVJUHSSBZWSMEPJZZWDHCELYDCRJEMXXHRBTVVKRFOMTGZLMXWIUTZLILGAJWTVPCW");
    tmp_msg_0.lat = 0.7643688458268526;
    tmp_msg_0.lon = 0.6597873657630974;
    tmp_msg_0.depth = 0.38964448928100937;
    tmp_msg_0.query_channel = 239U;
    tmp_msg_0.reply_channel = 252U;
    tmp_msg_0.transponder_delay = 155U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.5411280233760285;
    msg.y = 0.7267260378767366;
    msg.var_x = 0.49170312426614105;
    msg.var_y = 0.6560943669656214;
    msg.distance = 0.6075698762015735;

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
    msg.setTimeStamp(0.050930091651330334);
    msg.setSource(57580U);
    msg.setSourceEntity(164U);
    msg.setDestination(36038U);
    msg.setDestinationEntity(106U);
    msg.state = 177U;

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
    msg.setTimeStamp(0.3591613830368112);
    msg.setSource(63069U);
    msg.setSourceEntity(196U);
    msg.setDestination(45310U);
    msg.setDestinationEntity(134U);
    msg.state = 90U;

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
    msg.setTimeStamp(0.6635135675987327);
    msg.setSource(3079U);
    msg.setSourceEntity(113U);
    msg.setDestination(39616U);
    msg.setDestinationEntity(135U);
    msg.state = 57U;

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
    msg.setTimeStamp(0.779618528626726);
    msg.setSource(8650U);
    msg.setSourceEntity(121U);
    msg.setDestination(20713U);
    msg.setDestinationEntity(160U);
    msg.x = 0.3292144256046171;
    msg.y = 0.28685267204199416;
    msg.z = 0.5820734022977547;

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
    msg.setTimeStamp(0.844698205649459);
    msg.setSource(32633U);
    msg.setSourceEntity(206U);
    msg.setDestination(36385U);
    msg.setDestinationEntity(66U);
    msg.x = 0.8783097811793018;
    msg.y = 0.12770902248055505;
    msg.z = 0.6897217171071375;

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
    msg.setTimeStamp(0.13703572028653532);
    msg.setSource(52326U);
    msg.setSourceEntity(91U);
    msg.setDestination(39554U);
    msg.setDestinationEntity(157U);
    msg.x = 0.5080731132840931;
    msg.y = 0.40456252079968935;
    msg.z = 0.2427994837964671;

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
    msg.setTimeStamp(0.9850104881695152);
    msg.setSource(59855U);
    msg.setSourceEntity(116U);
    msg.setDestination(64882U);
    msg.setDestinationEntity(9U);
    msg.va = 0.9912488577643437;
    msg.aoa = 0.05179220274541829;
    msg.ssa = 0.36992719422685694;

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
    msg.setTimeStamp(0.029428698985476953);
    msg.setSource(53190U);
    msg.setSourceEntity(137U);
    msg.setDestination(65243U);
    msg.setDestinationEntity(226U);
    msg.va = 0.8507249995974671;
    msg.aoa = 0.9720910958099906;
    msg.ssa = 0.0710965246305354;

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
    msg.setTimeStamp(0.6502682847549377);
    msg.setSource(55155U);
    msg.setSourceEntity(179U);
    msg.setDestination(63303U);
    msg.setDestinationEntity(19U);
    msg.va = 0.24051706077486723;
    msg.aoa = 0.87276340833607;
    msg.ssa = 0.24327394093542265;

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
    msg.setTimeStamp(0.28198250468556174);
    msg.setSource(44315U);
    msg.setSourceEntity(138U);
    msg.setDestination(46988U);
    msg.setDestinationEntity(48U);
    msg.value = 0.1766017633222272;

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
    msg.setTimeStamp(0.755083157207146);
    msg.setSource(51155U);
    msg.setSourceEntity(211U);
    msg.setDestination(24955U);
    msg.setDestinationEntity(228U);
    msg.value = 0.2412447849746917;

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
    msg.setTimeStamp(0.571359910957276);
    msg.setSource(20795U);
    msg.setSourceEntity(102U);
    msg.setDestination(40804U);
    msg.setDestinationEntity(174U);
    msg.value = 0.9267184400649799;

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
    msg.setTimeStamp(0.17094462041832792);
    msg.setSource(40507U);
    msg.setSourceEntity(67U);
    msg.setDestination(17306U);
    msg.setDestinationEntity(162U);
    msg.value = 0.4705173532060958;
    msg.z_units = 83U;

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
    msg.setTimeStamp(0.42436162557092727);
    msg.setSource(13541U);
    msg.setSourceEntity(247U);
    msg.setDestination(64525U);
    msg.setDestinationEntity(158U);
    msg.value = 0.5545989359976824;
    msg.z_units = 3U;

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
    msg.setTimeStamp(0.9467606050930397);
    msg.setSource(9725U);
    msg.setSourceEntity(219U);
    msg.setDestination(32229U);
    msg.setDestinationEntity(100U);
    msg.value = 0.6583875533749495;
    msg.z_units = 184U;

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
    msg.setTimeStamp(0.07629676195879231);
    msg.setSource(27499U);
    msg.setSourceEntity(202U);
    msg.setDestination(16173U);
    msg.setDestinationEntity(198U);
    msg.value = 0.03476940524972427;
    msg.speed_units = 59U;

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
    msg.setTimeStamp(0.07558328846452333);
    msg.setSource(60381U);
    msg.setSourceEntity(235U);
    msg.setDestination(48844U);
    msg.setDestinationEntity(131U);
    msg.value = 0.7043056529131639;
    msg.speed_units = 30U;

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
    msg.setTimeStamp(0.46539846426871423);
    msg.setSource(13207U);
    msg.setSourceEntity(29U);
    msg.setDestination(62763U);
    msg.setDestinationEntity(81U);
    msg.value = 0.44130073105525736;
    msg.speed_units = 212U;

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
    msg.setTimeStamp(0.3928338136088698);
    msg.setSource(32297U);
    msg.setSourceEntity(96U);
    msg.setDestination(34155U);
    msg.setDestinationEntity(242U);
    msg.value = 0.20537745882235292;

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
    msg.setTimeStamp(0.2260514291999114);
    msg.setSource(2842U);
    msg.setSourceEntity(232U);
    msg.setDestination(44670U);
    msg.setDestinationEntity(123U);
    msg.value = 0.9466627982055078;

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
    msg.setTimeStamp(0.8436098991065353);
    msg.setSource(14294U);
    msg.setSourceEntity(80U);
    msg.setDestination(4417U);
    msg.setDestinationEntity(190U);
    msg.value = 0.7783012631651364;

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
    msg.setTimeStamp(0.5256746510414176);
    msg.setSource(19102U);
    msg.setSourceEntity(193U);
    msg.setDestination(38316U);
    msg.setDestinationEntity(47U);
    msg.value = 0.2616922194590975;

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
    msg.setTimeStamp(0.9973189297587702);
    msg.setSource(59395U);
    msg.setSourceEntity(182U);
    msg.setDestination(33504U);
    msg.setDestinationEntity(188U);
    msg.value = 0.7021699698242392;

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
    msg.setTimeStamp(0.5564154461390097);
    msg.setSource(22291U);
    msg.setSourceEntity(41U);
    msg.setDestination(18895U);
    msg.setDestinationEntity(66U);
    msg.value = 0.5360418012378992;

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
    msg.setTimeStamp(0.4806795504995701);
    msg.setSource(34896U);
    msg.setSourceEntity(222U);
    msg.setDestination(24096U);
    msg.setDestinationEntity(141U);
    msg.value = 0.32275367298220026;

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
    msg.setTimeStamp(0.229504637729941);
    msg.setSource(70U);
    msg.setSourceEntity(224U);
    msg.setDestination(10146U);
    msg.setDestinationEntity(96U);
    msg.value = 0.977626387545208;

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
    msg.setTimeStamp(0.19736414088966647);
    msg.setSource(24811U);
    msg.setSourceEntity(223U);
    msg.setDestination(37447U);
    msg.setDestinationEntity(110U);
    msg.value = 0.6906427210645262;

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
    msg.setTimeStamp(0.31187821593446785);
    msg.setSource(18400U);
    msg.setSourceEntity(254U);
    msg.setDestination(29410U);
    msg.setDestinationEntity(52U);
    msg.path_ref = 427792162U;
    msg.start_lat = 0.5196623883526399;
    msg.start_lon = 0.8369255335409761;
    msg.start_z = 0.8763256842694883;
    msg.start_z_units = 210U;
    msg.end_lat = 0.6967782154019538;
    msg.end_lon = 0.3836971188185835;
    msg.end_z = 0.7921504017598641;
    msg.end_z_units = 88U;
    msg.speed = 0.2995031378093913;
    msg.speed_units = 84U;
    msg.lradius = 0.23054155931937492;
    msg.flags = 115U;

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
    msg.setTimeStamp(0.8747046626105064);
    msg.setSource(26347U);
    msg.setSourceEntity(227U);
    msg.setDestination(3753U);
    msg.setDestinationEntity(217U);
    msg.path_ref = 3621576410U;
    msg.start_lat = 0.8200699867668709;
    msg.start_lon = 0.191313259343742;
    msg.start_z = 0.08473306208749942;
    msg.start_z_units = 133U;
    msg.end_lat = 0.6872365890837477;
    msg.end_lon = 0.9396330541181702;
    msg.end_z = 0.2301245465409133;
    msg.end_z_units = 87U;
    msg.speed = 0.40220071654921885;
    msg.speed_units = 26U;
    msg.lradius = 0.47521026726730653;
    msg.flags = 217U;

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
    msg.setTimeStamp(0.7373654209864576);
    msg.setSource(44830U);
    msg.setSourceEntity(131U);
    msg.setDestination(1823U);
    msg.setDestinationEntity(196U);
    msg.path_ref = 747794537U;
    msg.start_lat = 0.42463141730978726;
    msg.start_lon = 0.9737811181550992;
    msg.start_z = 0.7394271253556416;
    msg.start_z_units = 31U;
    msg.end_lat = 0.07928032979916277;
    msg.end_lon = 0.7899967988558613;
    msg.end_z = 0.6584388255945838;
    msg.end_z_units = 178U;
    msg.speed = 0.8084255165065198;
    msg.speed_units = 42U;
    msg.lradius = 0.30478439733287677;
    msg.flags = 121U;

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
    msg.setTimeStamp(0.4173565257027215);
    msg.setSource(15363U);
    msg.setSourceEntity(75U);
    msg.setDestination(64832U);
    msg.setDestinationEntity(98U);
    msg.x = 0.6699500864537296;
    msg.y = 0.5214990342122409;
    msg.z = 0.5079678019100705;
    msg.k = 0.7714170063045939;
    msg.m = 0.4388261381943065;
    msg.n = 0.04053620232187627;
    msg.flags = 55U;

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
    msg.setTimeStamp(0.22411848950631608);
    msg.setSource(15737U);
    msg.setSourceEntity(96U);
    msg.setDestination(45520U);
    msg.setDestinationEntity(223U);
    msg.x = 0.5925666602734798;
    msg.y = 0.5276083978176104;
    msg.z = 0.6473223300959653;
    msg.k = 0.8941063790256437;
    msg.m = 0.38413004900057135;
    msg.n = 0.04906480135815516;
    msg.flags = 206U;

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
    msg.setTimeStamp(0.14313684787571068);
    msg.setSource(43887U);
    msg.setSourceEntity(126U);
    msg.setDestination(61666U);
    msg.setDestinationEntity(148U);
    msg.x = 0.15295902961683872;
    msg.y = 0.3749294684085478;
    msg.z = 0.34294969115039153;
    msg.k = 0.5134872718561209;
    msg.m = 0.9571375716418618;
    msg.n = 0.3270665329819683;
    msg.flags = 247U;

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
    msg.setTimeStamp(0.7972759438197258);
    msg.setSource(59648U);
    msg.setSourceEntity(166U);
    msg.setDestination(41731U);
    msg.setDestinationEntity(39U);
    msg.value = 0.18462662084022108;

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
    msg.setTimeStamp(0.5222881897750783);
    msg.setSource(39810U);
    msg.setSourceEntity(145U);
    msg.setDestination(23416U);
    msg.setDestinationEntity(250U);
    msg.value = 0.1583999735392171;

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
    msg.setTimeStamp(0.3085837433353106);
    msg.setSource(57078U);
    msg.setSourceEntity(236U);
    msg.setDestination(4633U);
    msg.setDestinationEntity(42U);
    msg.value = 0.6627174787078707;

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
    msg.setTimeStamp(0.7260022266974935);
    msg.setSource(20424U);
    msg.setSourceEntity(202U);
    msg.setDestination(56037U);
    msg.setDestinationEntity(36U);
    msg.u = 0.25438127408640465;
    msg.v = 0.9865889447740783;
    msg.w = 0.9249587788730365;
    msg.p = 0.2380744961593141;
    msg.q = 0.6656992882333816;
    msg.r = 0.008810328787182908;
    msg.flags = 153U;

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
    msg.setTimeStamp(0.4962255703717172);
    msg.setSource(24479U);
    msg.setSourceEntity(72U);
    msg.setDestination(18389U);
    msg.setDestinationEntity(211U);
    msg.u = 0.6380811766936809;
    msg.v = 0.25460565474820507;
    msg.w = 0.7030339936662753;
    msg.p = 0.08047542286847365;
    msg.q = 0.15380578011715162;
    msg.r = 0.09958559773511033;
    msg.flags = 84U;

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
    msg.setTimeStamp(0.2968501653507486);
    msg.setSource(61776U);
    msg.setSourceEntity(43U);
    msg.setDestination(16619U);
    msg.setDestinationEntity(99U);
    msg.u = 0.6287581745787354;
    msg.v = 0.5408713722365178;
    msg.w = 0.7719908482087792;
    msg.p = 0.1616847533037009;
    msg.q = 0.8385584815901387;
    msg.r = 0.3335695628141395;
    msg.flags = 82U;

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
    msg.setTimeStamp(0.13333707946474316);
    msg.setSource(22670U);
    msg.setSourceEntity(33U);
    msg.setDestination(46171U);
    msg.setDestinationEntity(206U);
    msg.path_ref = 1096968069U;
    msg.start_lat = 0.9793783257292352;
    msg.start_lon = 0.8416528355460828;
    msg.start_z = 0.04151442557853391;
    msg.start_z_units = 132U;
    msg.end_lat = 0.7092755527646935;
    msg.end_lon = 0.23536205054626924;
    msg.end_z = 0.9500813426847352;
    msg.end_z_units = 82U;
    msg.lradius = 0.6072970187309294;
    msg.flags = 240U;
    msg.x = 0.4897712908743197;
    msg.y = 0.722391904640331;
    msg.z = 0.20153362482927606;
    msg.vx = 0.7711008366749664;
    msg.vy = 0.7252587437329565;
    msg.vz = 0.2449864105603441;
    msg.course_error = 0.9059656482282528;
    msg.eta = 6531U;

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
    msg.setTimeStamp(0.3720721344546074);
    msg.setSource(7838U);
    msg.setSourceEntity(182U);
    msg.setDestination(10238U);
    msg.setDestinationEntity(155U);
    msg.path_ref = 533603545U;
    msg.start_lat = 0.4160406055874113;
    msg.start_lon = 0.03420686941887341;
    msg.start_z = 0.07890000076786097;
    msg.start_z_units = 143U;
    msg.end_lat = 0.3564695841671819;
    msg.end_lon = 0.8096687929189501;
    msg.end_z = 0.8639893264726958;
    msg.end_z_units = 128U;
    msg.lradius = 0.9489365282480985;
    msg.flags = 158U;
    msg.x = 0.7859031076881313;
    msg.y = 0.6707578305121712;
    msg.z = 0.9875356633268908;
    msg.vx = 0.9415965528118535;
    msg.vy = 0.7469857332543464;
    msg.vz = 0.7574786168860452;
    msg.course_error = 0.34271474198682705;
    msg.eta = 58647U;

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
    msg.setTimeStamp(0.4120870386136537);
    msg.setSource(4389U);
    msg.setSourceEntity(42U);
    msg.setDestination(17050U);
    msg.setDestinationEntity(167U);
    msg.path_ref = 3482203287U;
    msg.start_lat = 0.04451137219112866;
    msg.start_lon = 0.07225084465357978;
    msg.start_z = 0.6483679097736138;
    msg.start_z_units = 253U;
    msg.end_lat = 0.8459532759281857;
    msg.end_lon = 0.7176347778521075;
    msg.end_z = 0.8201161008901785;
    msg.end_z_units = 233U;
    msg.lradius = 0.6314142912279188;
    msg.flags = 246U;
    msg.x = 0.3654825284490134;
    msg.y = 0.9429385632561624;
    msg.z = 0.6495462634628706;
    msg.vx = 0.3002029256950478;
    msg.vy = 0.08384383878384949;
    msg.vz = 0.6534091346660506;
    msg.course_error = 0.2967795311702113;
    msg.eta = 49149U;

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
    msg.setTimeStamp(0.2875210163066543);
    msg.setSource(5330U);
    msg.setSourceEntity(127U);
    msg.setDestination(61394U);
    msg.setDestinationEntity(167U);
    msg.k = 0.9041609606770519;
    msg.m = 0.8810117189878897;
    msg.n = 0.5486192188789744;

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
    msg.setTimeStamp(0.24912124306662897);
    msg.setSource(7764U);
    msg.setSourceEntity(7U);
    msg.setDestination(3688U);
    msg.setDestinationEntity(108U);
    msg.k = 0.5174509245505966;
    msg.m = 0.5388995803058807;
    msg.n = 0.010277320773477427;

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
    msg.setTimeStamp(0.06740576779827645);
    msg.setSource(21944U);
    msg.setSourceEntity(198U);
    msg.setDestination(60926U);
    msg.setDestinationEntity(106U);
    msg.k = 0.38333488331439325;
    msg.m = 0.574394960823536;
    msg.n = 0.713921677873457;

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
    msg.setTimeStamp(0.37890393401797795);
    msg.setSource(58101U);
    msg.setSourceEntity(218U);
    msg.setDestination(30659U);
    msg.setDestinationEntity(170U);
    msg.p = 0.82217313951649;
    msg.i = 0.700935456279602;
    msg.d = 0.0867201226933938;
    msg.a = 0.5000326758224115;

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
    msg.setTimeStamp(0.7949603423254481);
    msg.setSource(32825U);
    msg.setSourceEntity(222U);
    msg.setDestination(10154U);
    msg.setDestinationEntity(101U);
    msg.p = 0.24590531296452922;
    msg.i = 0.24049277963806848;
    msg.d = 0.05379150802054211;
    msg.a = 0.015468190005760274;

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
    msg.setTimeStamp(0.34345758505880386);
    msg.setSource(3251U);
    msg.setSourceEntity(81U);
    msg.setDestination(53246U);
    msg.setDestinationEntity(223U);
    msg.p = 0.09888028030864637;
    msg.i = 0.3320254254180295;
    msg.d = 0.49762259555385013;
    msg.a = 0.14465106696623897;

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
    msg.setTimeStamp(0.9655175267147487);
    msg.setSource(4326U);
    msg.setSourceEntity(22U);
    msg.setDestination(25181U);
    msg.setDestinationEntity(22U);
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
    msg.setTimeStamp(0.12956865352963354);
    msg.setSource(50634U);
    msg.setSourceEntity(125U);
    msg.setDestination(55695U);
    msg.setDestinationEntity(247U);
    msg.op = 40U;

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
    msg.setTimeStamp(0.10301540686160382);
    msg.setSource(17642U);
    msg.setSourceEntity(93U);
    msg.setDestination(20501U);
    msg.setDestinationEntity(176U);
    msg.op = 221U;

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
    msg.setTimeStamp(0.17145099066062652);
    msg.setSource(24851U);
    msg.setSourceEntity(40U);
    msg.setDestination(6173U);
    msg.setDestinationEntity(135U);
    msg.x = 0.49846419590491764;
    msg.y = 0.09089053183131701;
    msg.z = 0.8094160559752657;
    msg.vx = 0.2983577503670488;
    msg.vy = 0.11549214697299492;
    msg.vz = 0.281553044668705;
    msg.ax = 0.9944331974256024;
    msg.ay = 0.5980639947331117;
    msg.az = 0.3253879351881762;
    msg.flags = 24895U;

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
    msg.setTimeStamp(0.7809167065400457);
    msg.setSource(6335U);
    msg.setSourceEntity(80U);
    msg.setDestination(52412U);
    msg.setDestinationEntity(137U);
    msg.x = 0.7023739638921984;
    msg.y = 0.2677495690156865;
    msg.z = 0.13917867558883823;
    msg.vx = 0.04866222074224347;
    msg.vy = 0.8604714985136271;
    msg.vz = 0.16252902949917725;
    msg.ax = 0.08570255788825198;
    msg.ay = 0.3507607173673313;
    msg.az = 0.8479048840217026;
    msg.flags = 21850U;

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
    msg.setTimeStamp(0.13006768261177404);
    msg.setSource(35343U);
    msg.setSourceEntity(84U);
    msg.setDestination(31821U);
    msg.setDestinationEntity(40U);
    msg.x = 0.06913937861675923;
    msg.y = 0.37141861826394496;
    msg.z = 0.5382433985464844;
    msg.vx = 0.992467933479369;
    msg.vy = 0.7657594261099459;
    msg.vz = 0.1714003459182365;
    msg.ax = 0.8682043103979246;
    msg.ay = 0.12452713957908412;
    msg.az = 0.9188618545617703;
    msg.flags = 11975U;

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
    msg.setTimeStamp(0.7698935797333897);
    msg.setSource(45750U);
    msg.setSourceEntity(121U);
    msg.setDestination(63881U);
    msg.setDestinationEntity(164U);
    msg.value = 0.7183607905263879;

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
    msg.setTimeStamp(0.04565115199657932);
    msg.setSource(21337U);
    msg.setSourceEntity(7U);
    msg.setDestination(36744U);
    msg.setDestinationEntity(43U);
    msg.value = 0.3394506557411432;

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
    msg.setTimeStamp(0.16600050727798532);
    msg.setSource(59961U);
    msg.setSourceEntity(0U);
    msg.setDestination(46373U);
    msg.setDestinationEntity(187U);
    msg.value = 0.517479675777939;

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
    msg.setTimeStamp(0.23899149675821318);
    msg.setSource(63535U);
    msg.setSourceEntity(65U);
    msg.setDestination(57123U);
    msg.setDestinationEntity(148U);
    msg.timeout = 32140U;
    msg.lat = 0.41022907589591573;
    msg.lon = 0.49455531114519324;
    msg.z = 0.8283557341408665;
    msg.z_units = 105U;
    msg.speed = 0.17092783567175374;
    msg.speed_units = 132U;
    msg.roll = 0.36980579963101246;
    msg.pitch = 0.3926423285657432;
    msg.yaw = 0.8788496056424749;
    msg.custom.assign("GTWQOJKYHOFHABNBQCRDPYCWAHIWKFUAJABUBRIEXULTRXKDHPUNWEPXJFAEIFOKISCCZTYPZMQKISXJWEVDNBYXHRFZBGVVULAYHYGMXLKUYXJHSHESNPXNNCMQZWMTTOEKBOKSCLMEQUMQVXTRUNBDSDMOZQGYSGKJALDYDCKYZSGZFJJPLHPZORTTGJECLDUNDVBWQZHSCIIMRGBRNTODRPWVWANJRZ");

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
    msg.setTimeStamp(0.2053367922401057);
    msg.setSource(63300U);
    msg.setSourceEntity(117U);
    msg.setDestination(7260U);
    msg.setDestinationEntity(17U);
    msg.timeout = 794U;
    msg.lat = 0.5763993201917098;
    msg.lon = 0.05144166877525902;
    msg.z = 0.451724194424021;
    msg.z_units = 112U;
    msg.speed = 0.46841122602835694;
    msg.speed_units = 165U;
    msg.roll = 0.9058196610371034;
    msg.pitch = 0.7207196032564619;
    msg.yaw = 0.09819095305244352;
    msg.custom.assign("KEYNNEMTFZCWJWYBDJIYJOAQXHPGBAXQETDHIGWFKCQSFMHLQPJIBEWJMWUHOGVBCYTAVDJGOQKSHEEMTPGXLUWKRGNHSSYFRVKGSQFUYDUZQVOUVBCPQVKKYWACYUJTPYFTUXODTTBWBSEIRXLPBDACOWRTEZKEFZ");

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
    msg.setTimeStamp(0.04820146574943163);
    msg.setSource(20682U);
    msg.setSourceEntity(220U);
    msg.setDestination(49666U);
    msg.setDestinationEntity(161U);
    msg.timeout = 11789U;
    msg.lat = 0.4360437280483699;
    msg.lon = 0.6710942263700603;
    msg.z = 0.6611258791179365;
    msg.z_units = 43U;
    msg.speed = 0.8039339802505359;
    msg.speed_units = 61U;
    msg.roll = 0.5693224407164639;
    msg.pitch = 0.9908109195557048;
    msg.yaw = 0.4508949368446312;
    msg.custom.assign("NTNRAAXVJYBZXGSVPARHGPJLVOQSVWUFDIUOLRODQQMQYWLDWSLKGPHCIFQXUBNSCJSTHXEYLNRIAXOLUOCDCEMZWBSRJOEZLEKEQPZDKFVHKEFIOQTXQFUMGGZCPRPKBEEDNKTMA");

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
    msg.setTimeStamp(0.8525315230991917);
    msg.setSource(12096U);
    msg.setSourceEntity(148U);
    msg.setDestination(32274U);
    msg.setDestinationEntity(52U);
    msg.timeout = 47866U;
    msg.lat = 0.26083885641366655;
    msg.lon = 0.8252614268345164;
    msg.z = 0.20499883815727016;
    msg.z_units = 166U;
    msg.speed = 0.9796429502425339;
    msg.speed_units = 15U;
    msg.duration = 33528U;
    msg.radius = 0.2262371947618107;
    msg.flags = 148U;
    msg.custom.assign("YGSTEBZBWRMNZSNBRUZNDCGQRCHWTEHFGGMJKZJLAJDLDSNXMPOVXVCRXLBFYKRRPSODQJFHIHTQCTFBDIAXWSGVOONOHUESPNCDAIWJGITZKCPAYGXLKXJXCQFQDBTFHVYMTZTXFGVORJUMNQHPLBEKMXMUOIIIIYIPJWQFYKLRBZVEYURODHWNKWASNFQRAMVSJFABKUMZEMPQGDLNUUOLZUKDEOYWATACZSLXYVPUCPBPYHLCSEJVWIK");

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
    msg.setTimeStamp(0.4194142861293626);
    msg.setSource(13893U);
    msg.setSourceEntity(106U);
    msg.setDestination(27165U);
    msg.setDestinationEntity(180U);
    msg.timeout = 38037U;
    msg.lat = 0.42749268004799945;
    msg.lon = 0.20787776084930243;
    msg.z = 0.9801176843831517;
    msg.z_units = 41U;
    msg.speed = 0.705473806948864;
    msg.speed_units = 15U;
    msg.duration = 7020U;
    msg.radius = 0.3487616132734158;
    msg.flags = 134U;
    msg.custom.assign("YJFLKUVJQBVJHUMAFEMDARFYJUTTRITCXPPCFSBHILZHOYZUXHS");

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
    msg.setTimeStamp(0.0813954052178878);
    msg.setSource(8231U);
    msg.setSourceEntity(36U);
    msg.setDestination(7730U);
    msg.setDestinationEntity(181U);
    msg.timeout = 15948U;
    msg.lat = 0.8756912619517715;
    msg.lon = 0.6927431343816405;
    msg.z = 0.3788842215274727;
    msg.z_units = 146U;
    msg.speed = 0.681174325024314;
    msg.speed_units = 129U;
    msg.duration = 28866U;
    msg.radius = 0.9963873394223505;
    msg.flags = 59U;
    msg.custom.assign("DFDAOPLZROHXWCGGXW");

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
    msg.setTimeStamp(0.4296883923907241);
    msg.setSource(49780U);
    msg.setSourceEntity(3U);
    msg.setDestination(18030U);
    msg.setDestinationEntity(121U);
    msg.custom.assign("RVQYWPKGFUHPPHTNAQNPDXQTFFSUSRAOEAMZCUFYBWKWCCMENIVRDLCQILDERVQZSEHWSZSUSKKOMBALYAUKMAFQZVFYLCGJKVVAJDLJESWPHXAAJCCBJXPNGJIHNCXGWJNUDEPKQIYNKBZKFJIODUWQYTIMDOFGSQHXMIRPTYREDDBGRTANFUNTBZKLYQHUPZLMXCLIJOUIXTLBIWBMTWGXZOSJDLOEBGZ");

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
    msg.setTimeStamp(0.8025497727742682);
    msg.setSource(22155U);
    msg.setSourceEntity(35U);
    msg.setDestination(46370U);
    msg.setDestinationEntity(74U);
    msg.custom.assign("CEIRORPOMLVWNFRLIAJZSPHXXYKDGPPFEXBAIKBUJBOUIYOSBAOAVSBAVMVCHIMFLIJBFHCTFXPYGIURTSDGUVHUQLNUALLTCVFNQFCCDZPGEREXGJKIOVTYSNYAPWKZIKOMMKCVWMGMMQFADZQJJBQGOPDGQHRYHGRDAJETOARCHSCFZQZBZ");

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
    msg.setTimeStamp(0.18094376217569874);
    msg.setSource(245U);
    msg.setSourceEntity(188U);
    msg.setDestination(64482U);
    msg.setDestinationEntity(92U);
    msg.custom.assign("DQGMWYDGMPYYTJREQSYPNJHNIRMKVYDSARFEUUYIOCFOBSCUYATHICCJBEMCKFXSXVBCIOHOVBZXNMDZN");

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
    msg.setTimeStamp(0.5465879496351022);
    msg.setSource(57258U);
    msg.setSourceEntity(5U);
    msg.setDestination(25294U);
    msg.setDestinationEntity(96U);
    msg.timeout = 23008U;
    msg.lat = 0.3002755062100029;
    msg.lon = 0.8879175827714767;
    msg.z = 0.06272495069393191;
    msg.z_units = 146U;
    msg.duration = 64411U;
    msg.speed = 0.6245289582667902;
    msg.speed_units = 121U;
    msg.type = 90U;
    msg.radius = 0.3345143114297351;
    msg.length = 0.41374667538910326;
    msg.bearing = 0.7040884194538183;
    msg.direction = 128U;
    msg.custom.assign("JWASGIVAVFOBYADPTRNAJNLCMSBZPVXLUVGEEVCPJUDQRTSOWXEGZFMALSH");

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
    msg.setTimeStamp(0.3848526945633356);
    msg.setSource(2737U);
    msg.setSourceEntity(165U);
    msg.setDestination(20757U);
    msg.setDestinationEntity(231U);
    msg.timeout = 50613U;
    msg.lat = 0.8589332240684632;
    msg.lon = 0.4893622377586211;
    msg.z = 0.5028436529828428;
    msg.z_units = 76U;
    msg.duration = 49499U;
    msg.speed = 0.010734703724078143;
    msg.speed_units = 185U;
    msg.type = 227U;
    msg.radius = 0.7582933974043032;
    msg.length = 0.9418661638348939;
    msg.bearing = 0.7992495723017004;
    msg.direction = 34U;
    msg.custom.assign("SXUHHEZVLTMSITFRKCNQQWEGMNSDTEOERWGHDJZWLLLXTGLLRMWYJDTKOJZWVSNDGRYFONDVLUFPZKVTBCCNARRRZKMFWQPPEKJMGFADNGTNCSJIXUDGTVNGNHWQUYOYBVQKXPYMDFIQAOLUAIFMBTMXRUXKXGSSYEZBAHBCUXUEYPOHAKJPUUPYYVSIOCKZJ");

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
    msg.setTimeStamp(0.7490387502636668);
    msg.setSource(41681U);
    msg.setSourceEntity(162U);
    msg.setDestination(62497U);
    msg.setDestinationEntity(11U);
    msg.timeout = 37152U;
    msg.lat = 0.7871538440361152;
    msg.lon = 0.9853089580881431;
    msg.z = 0.40671673648394036;
    msg.z_units = 163U;
    msg.duration = 13190U;
    msg.speed = 0.6750878363676325;
    msg.speed_units = 240U;
    msg.type = 66U;
    msg.radius = 0.0016301857871531267;
    msg.length = 0.009922141200718104;
    msg.bearing = 0.6367389169973825;
    msg.direction = 140U;
    msg.custom.assign("GZIJIPPXCICJFQECBLWSBFIUQIEZYPUEXWWFGPKFLBFBOURMEMQLALGLKYSTDOJEHRSYAGGOHHYSRHIMKWVMCDMNXPPLJWQUOQHIQTUEVHNSZWGZNWLETYPNSCJQFQUDXCRAHEKTAZFYXRARVGBDVSBGDJNXMIWKVAMBDTUAXVGLWJAHATJFXDMBKSTKRLNFNYRCVOESDKTZOVEWYIVZTQVULOAP");

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
    msg.setTimeStamp(0.30146421326492057);
    msg.setSource(48549U);
    msg.setSourceEntity(67U);
    msg.setDestination(36520U);
    msg.setDestinationEntity(152U);
    msg.duration = 11825U;
    msg.custom.assign("VPLPWJKAZUTWFAGPJZEHYAUJRFKLOWMIRNVKOLDXUOAVVWGNJRKDVTMZSFBJFADSDBTKIAOQKNUSTXY");

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
    msg.setTimeStamp(0.38515240793372296);
    msg.setSource(29565U);
    msg.setSourceEntity(63U);
    msg.setDestination(17067U);
    msg.setDestinationEntity(154U);
    msg.duration = 50787U;
    msg.custom.assign("CEIFGBBWCWJRRANPCVJDFSAHPGRCKSELDPPEVEJFLQUFSNVUINOBKYVRLUSBRXW");

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
    msg.setTimeStamp(0.3098097989689337);
    msg.setSource(27252U);
    msg.setSourceEntity(224U);
    msg.setDestination(4827U);
    msg.setDestinationEntity(16U);
    msg.duration = 11429U;
    msg.custom.assign("VXIROYOUEPTEQKTOXWYHBCMYKPLQGBDREDDVSDWZTILHUJJDAONW");

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
    msg.setTimeStamp(0.26306480161306023);
    msg.setSource(45885U);
    msg.setSourceEntity(138U);
    msg.setDestination(20990U);
    msg.setDestinationEntity(238U);
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.7425871860050616;
    tmp_msg_0.speed_units = 188U;
    msg.control.set(tmp_msg_0);
    msg.duration = 15703U;
    msg.custom.assign("TWBTDILHHHWQNKRJFMQGBCXHWIYDWPAYQBQLSLDWHVKNGRSFWBDZSFUTXEALMFSNPVKYJJUJDYOSYCZVIKPGFSVKEXSZRGKZIEADQUXFXBNCKDQFQUUGVAHPYLMXJIZRGAAAMTVCBLICCXJLOPUIZWQURPBNRSMLTEMYLGZOYPOACAHDTMHHMIFKTUWXFKDCPJENRUXRQSPODNJBJBEONVNVETBEGTUGWXZEGQCZZMH");

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
    msg.setTimeStamp(0.012118483292504978);
    msg.setSource(42830U);
    msg.setSourceEntity(163U);
    msg.setDestination(16335U);
    msg.setDestinationEntity(75U);
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.34254665452298083;
    msg.control.set(tmp_msg_0);
    msg.duration = 58163U;
    msg.custom.assign("HDVFYQBNDMNQYBTXKVEHXZQDYEREZAFULVQNZZWMCW");

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
    msg.setTimeStamp(0.045107303009088606);
    msg.setSource(2459U);
    msg.setSourceEntity(211U);
    msg.setDestination(3653U);
    msg.setDestinationEntity(130U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.8597868678865646;
    msg.control.set(tmp_msg_0);
    msg.duration = 5362U;
    msg.custom.assign("YUHZHEHEJPAGXCXVAXAQMZYNWTCPTCKZJBHKCQQTUEBUJNAAPVGPHSECILDXKWGSSIKTTHQOSLLOZRRCZEQNVDLVBZAXOLGFXPZOHDOAINMURNKMSRXMBVNERQQSDYNPTLNIWCVOCDLGQESBTGGJKIPLECRIFDOWKNVKLHGVDJQTDTSUAPWIHYKBBVRSBFFIMJFBRWVDWXGTZYAJMRAYLQUSGYXMWZNZXEOMFWUMFOUCMP");

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
    msg.setTimeStamp(0.2988666716712449);
    msg.setSource(9349U);
    msg.setSourceEntity(72U);
    msg.setDestination(48258U);
    msg.setDestinationEntity(135U);
    msg.timeout = 20032U;
    msg.lat = 0.7075904620626651;
    msg.lon = 0.18200676823685402;
    msg.z = 0.798062506221708;
    msg.z_units = 224U;
    msg.speed = 0.7465591856224867;
    msg.speed_units = 202U;
    msg.bearing = 0.2715355184942446;
    msg.cross_angle = 0.5402962183315617;
    msg.width = 0.3669436879808279;
    msg.length = 0.06160532183074341;
    msg.hstep = 0.8727525554708401;
    msg.coff = 129U;
    msg.alternation = 243U;
    msg.flags = 58U;
    msg.custom.assign("EVWVXNHGBLDUDDKJXFJBMVEQCIIVFWNPVFCJFZWJOMTRKPQSKSZPQWXCAKLJFSHARNHTUOIPPESMFYTXUUNEBPCWGQIFDTJYLKQKHIORJHHOYQKYABJRTTZCWGBTHOGIZG");

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
    msg.setTimeStamp(0.5992628493296178);
    msg.setSource(34828U);
    msg.setSourceEntity(221U);
    msg.setDestination(51004U);
    msg.setDestinationEntity(172U);
    msg.timeout = 16608U;
    msg.lat = 0.6311330897701777;
    msg.lon = 0.22199119983935034;
    msg.z = 0.5481784575256146;
    msg.z_units = 93U;
    msg.speed = 0.028409752289318635;
    msg.speed_units = 173U;
    msg.bearing = 0.1800513175513121;
    msg.cross_angle = 0.9815925002450185;
    msg.width = 0.49490181233741837;
    msg.length = 0.6360935779228807;
    msg.hstep = 0.3214491386790841;
    msg.coff = 147U;
    msg.alternation = 8U;
    msg.flags = 47U;
    msg.custom.assign("NLCKISVRPUZSZLGVXBD");

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
    msg.setTimeStamp(0.7215133977805446);
    msg.setSource(54443U);
    msg.setSourceEntity(5U);
    msg.setDestination(39692U);
    msg.setDestinationEntity(165U);
    msg.timeout = 2795U;
    msg.lat = 0.6555979776040698;
    msg.lon = 0.4920736542690798;
    msg.z = 0.7362292229950156;
    msg.z_units = 228U;
    msg.speed = 0.8760030927849503;
    msg.speed_units = 41U;
    msg.bearing = 0.6609383775632856;
    msg.cross_angle = 0.3580172550614129;
    msg.width = 0.5300006396071967;
    msg.length = 0.29028576435186215;
    msg.hstep = 0.7344971269118287;
    msg.coff = 50U;
    msg.alternation = 104U;
    msg.flags = 247U;
    msg.custom.assign("HWBBZVBETFOVKJAGPLHPSHDNTZQNYHDKUQDLMZEMFNZBHVAWLQGBKFIXEMXMMLXCWGRDXHLLISLSIFUGVFZNDTGTYCYAZPMJBNJEIBCEVRPIRTYGPKJO");

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
    msg.setTimeStamp(0.3209464786448101);
    msg.setSource(21603U);
    msg.setSourceEntity(99U);
    msg.setDestination(32511U);
    msg.setDestinationEntity(26U);
    msg.timeout = 44514U;
    msg.lat = 0.9182931990683996;
    msg.lon = 0.9527450060853356;
    msg.z = 0.7615095891308753;
    msg.z_units = 193U;
    msg.speed = 0.2631485821189741;
    msg.speed_units = 157U;
    msg.custom.assign("WIZLUJWDGXDSOHGNAIYHTSJDUVCMENKSYCSVZBLIELOOWKHPDGJDFMDBTCFDVQVWNMALEQPNTBFKBFYZGLGUMWYVAAFRBCJNQRYSXOLEIITVRUPFMINZCEJZSMJDNUGCCWMRZFNVJDEXBZKDLAAREUKVFZXZEMELWPXRKIG");

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
    msg.setTimeStamp(0.6093422065129541);
    msg.setSource(18403U);
    msg.setSourceEntity(71U);
    msg.setDestination(35246U);
    msg.setDestinationEntity(80U);
    msg.timeout = 30234U;
    msg.lat = 0.4225643618829841;
    msg.lon = 0.3876483860698172;
    msg.z = 0.8351227486057305;
    msg.z_units = 125U;
    msg.speed = 0.2163739941459163;
    msg.speed_units = 215U;
    msg.custom.assign("ILTYQQQXTNBNHQAHXNNAHWIYCOJCKCUAXVBGDZRBHZRDSRSOLGVAFGEWRNVUADETKYLJYDJMNXGOYSBRMIGLHXEUPCZKFLEOMFHZKTPQEOSSZZFYUXLKLKBWESUXWWDNMAUKTPHJCJYCFJFCIUOUPDWFTAPMIPNTKHBPXDQWXRHDPMRXLEIWCITVIYFYMMNVZPCFQCJQGZHNYVVZK");

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
    msg.setTimeStamp(0.13092143915339405);
    msg.setSource(60476U);
    msg.setSourceEntity(128U);
    msg.setDestination(4773U);
    msg.setDestinationEntity(166U);
    msg.timeout = 27174U;
    msg.lat = 0.45991336947033934;
    msg.lon = 0.7760403166503111;
    msg.z = 0.9926855353015209;
    msg.z_units = 10U;
    msg.speed = 0.8726153799507627;
    msg.speed_units = 132U;
    msg.custom.assign("TJNTKDTCSSRPRKHDWVDYBCVOCZKUVPFSXTTYLMBLADFOLSCFVG");

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
    msg.setTimeStamp(0.956213115332856);
    msg.setSource(19060U);
    msg.setSourceEntity(236U);
    msg.setDestination(21659U);
    msg.setDestinationEntity(98U);
    msg.x = 0.07731297541973159;
    msg.y = 0.06630329198031581;
    msg.z = 0.21651475213164262;

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
    msg.setTimeStamp(0.3134375390153913);
    msg.setSource(64563U);
    msg.setSourceEntity(250U);
    msg.setDestination(27893U);
    msg.setDestinationEntity(51U);
    msg.x = 0.03786691425975397;
    msg.y = 0.08932611770407894;
    msg.z = 0.9331658967013748;

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
    msg.setTimeStamp(0.9511336918320871);
    msg.setSource(10941U);
    msg.setSourceEntity(55U);
    msg.setDestination(17341U);
    msg.setDestinationEntity(22U);
    msg.x = 0.9055857756235947;
    msg.y = 0.04345385985030881;
    msg.z = 0.2067998457821867;

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
    msg.setTimeStamp(0.2847288203556073);
    msg.setSource(50881U);
    msg.setSourceEntity(106U);
    msg.setDestination(6509U);
    msg.setDestinationEntity(14U);
    msg.timeout = 19285U;
    msg.lat = 0.4044241512161595;
    msg.lon = 0.9363234562396704;
    msg.z = 0.24262768938857404;
    msg.z_units = 88U;
    msg.amplitude = 0.4850690075166366;
    msg.pitch = 0.9514206544519336;
    msg.speed = 0.518877286212923;
    msg.speed_units = 207U;
    msg.custom.assign("UBXPIMSEPIQBUBOGLEVKFVCNHYNHDIPHFNJZXYZBYIJGCDMJXYEZGHZQSWBQPYGZWFPEAWPNWGEAVJIUMURSCIFTCQRDATXABYMEHGUIJWKKDGALVFKMWORGLBSHTAKBLTOLOTJNXPHKYZ");

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
    msg.setTimeStamp(0.9393948341634039);
    msg.setSource(16189U);
    msg.setSourceEntity(101U);
    msg.setDestination(41050U);
    msg.setDestinationEntity(11U);
    msg.timeout = 24890U;
    msg.lat = 0.9576810978688991;
    msg.lon = 0.0031123622166269183;
    msg.z = 0.11962197865367608;
    msg.z_units = 184U;
    msg.amplitude = 0.07745339920911276;
    msg.pitch = 0.644730655173338;
    msg.speed = 0.2905687169374729;
    msg.speed_units = 215U;
    msg.custom.assign("HOHKFPYYZUHPCPTYRRRBAFJFBWPSWIOLGLUTXVKZXCEEGVUYNGNSZMZMDZYQXENZPESNDAJKBUYYEQHIMFIZJLFVGIJVWDDSTEPMSPJVJDATOEATMTALEJRDCYFWFWEZRXSRAFQZNPTQVOTLOOODYVNKJKKINXBCFEHSHBSYGXCUAA");

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
    msg.setTimeStamp(0.07108431567566653);
    msg.setSource(4419U);
    msg.setSourceEntity(12U);
    msg.setDestination(26092U);
    msg.setDestinationEntity(189U);
    msg.timeout = 17094U;
    msg.lat = 0.9274789131773085;
    msg.lon = 0.5151716414213775;
    msg.z = 0.525757990007525;
    msg.z_units = 78U;
    msg.amplitude = 0.7636970425409956;
    msg.pitch = 0.11594189212804051;
    msg.speed = 0.45421928449493;
    msg.speed_units = 159U;
    msg.custom.assign("BWCOSHIPCRUAGIQKYN");

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
    msg.setTimeStamp(0.09044399985259488);
    msg.setSource(55976U);
    msg.setSourceEntity(146U);
    msg.setDestination(33417U);
    msg.setDestinationEntity(128U);

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
    msg.setTimeStamp(0.7723242094808305);
    msg.setSource(35362U);
    msg.setSourceEntity(189U);
    msg.setDestination(11843U);
    msg.setDestinationEntity(99U);

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
    msg.setTimeStamp(0.28915139435784176);
    msg.setSource(20122U);
    msg.setSourceEntity(72U);
    msg.setDestination(32179U);
    msg.setDestinationEntity(96U);

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
    msg.setTimeStamp(0.05223528261884092);
    msg.setSource(57829U);
    msg.setSourceEntity(252U);
    msg.setDestination(14399U);
    msg.setDestinationEntity(52U);
    msg.lat = 0.24303291035187313;
    msg.lon = 0.9239537270279446;
    msg.z = 0.4135033102166371;
    msg.z_units = 119U;
    msg.radius = 0.13463164972921227;
    msg.duration = 32300U;
    msg.speed = 0.9384402134329579;
    msg.speed_units = 240U;
    msg.custom.assign("XISKATQQGPQEJHRTHMNNEUAQVOUBGYDFASCURPFKWLJDFIWQHQXMOBCFRPLUSGABFBSWSAUDOYYGZKCIFETVVWXEFYEYCLZCIWDWUSTEQOINUMZKGUJZAJNHTNVSFHRMSODNMBLMLWVCTVPYZNZAIJXGGVIPWBPPILDPLZAHYYVCRETZGWMFX");

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
    msg.setTimeStamp(0.7577919193331213);
    msg.setSource(48310U);
    msg.setSourceEntity(30U);
    msg.setDestination(23874U);
    msg.setDestinationEntity(79U);
    msg.lat = 0.7863111604894203;
    msg.lon = 0.5840874310162678;
    msg.z = 0.45530644031788226;
    msg.z_units = 57U;
    msg.radius = 0.8082713822770066;
    msg.duration = 14484U;
    msg.speed = 0.8830930200335098;
    msg.speed_units = 141U;
    msg.custom.assign("VUEGEIRWETYLTLJYRIXEJPPNRRELYEACOPQMDVTQHLOQMYYOLSKPAQHWUUTKGEGMNALZGBCMSPODFHULYUKZFJXKPAYSXWAVCKNNPFIDQEFBPTMFBBBQKGVTGFCSXWBINJWHRDXISTLNYCLTWMUCXOZQXJADKDXDANAQJRUXMMFSVZSBHUODFVWRGCUDI");

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
    msg.setTimeStamp(0.39237895218017327);
    msg.setSource(2671U);
    msg.setSourceEntity(156U);
    msg.setDestination(35849U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.9177726847770948;
    msg.lon = 0.23101508706390483;
    msg.z = 0.8561110658959178;
    msg.z_units = 178U;
    msg.radius = 0.1871149853904316;
    msg.duration = 25174U;
    msg.speed = 0.42492018207827087;
    msg.speed_units = 92U;
    msg.custom.assign("XGIPUWEXSPTQDLKREXGSALHCGNDXUDMXHQXHBFKIZLJIZLWJMGWYAOSYITKGCAZQVOHICHFNRCCEMEQKLVDJCGECLTXCYNRBYFOAQHAGOFCBABIRYZAEWQKS");

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
    msg.setTimeStamp(0.6622485137366877);
    msg.setSource(20673U);
    msg.setSourceEntity(177U);
    msg.setDestination(26986U);
    msg.setDestinationEntity(160U);
    msg.timeout = 33663U;
    msg.flags = 124U;
    msg.lat = 0.6250101688374203;
    msg.lon = 0.07050321632339829;
    msg.start_z = 0.7709427793037009;
    msg.start_z_units = 108U;
    msg.end_z = 0.23896318430808394;
    msg.end_z_units = 56U;
    msg.radius = 0.1429338853794172;
    msg.speed = 0.8770079197044037;
    msg.speed_units = 56U;
    msg.custom.assign("DFFRAIBKSSDEZQOTKRVSQABXJTZFNDYENZNUWMAALDAWEXRHNWPEJMYYAFJLNH");

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
    msg.setTimeStamp(0.4452216326177084);
    msg.setSource(55207U);
    msg.setSourceEntity(252U);
    msg.setDestination(53379U);
    msg.setDestinationEntity(42U);
    msg.timeout = 2274U;
    msg.flags = 11U;
    msg.lat = 0.8716254155570375;
    msg.lon = 0.6945246625793512;
    msg.start_z = 0.12427510876390735;
    msg.start_z_units = 156U;
    msg.end_z = 0.9117889696390612;
    msg.end_z_units = 44U;
    msg.radius = 0.8247464325525714;
    msg.speed = 0.42574624033851305;
    msg.speed_units = 24U;
    msg.custom.assign("QHAMIKFHRQYGFVEJFBYNEGHQZMKXQFTHBKOTDETLKAWFLXMZODJFJDKPSPAQISCWMZPQWCWMIRNYYGDIVMWPZAWCEGXGULRBOVQTZISEDHNKOUEKOINKTPTBPCNZPRBQHQMRAMDCDDJFZEJBTRUI");

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
    msg.setTimeStamp(0.30914748319200336);
    msg.setSource(17991U);
    msg.setSourceEntity(180U);
    msg.setDestination(51010U);
    msg.setDestinationEntity(230U);
    msg.timeout = 52619U;
    msg.flags = 27U;
    msg.lat = 0.4182707258976557;
    msg.lon = 0.17420106193357254;
    msg.start_z = 0.5926723179124938;
    msg.start_z_units = 204U;
    msg.end_z = 0.05209646264070422;
    msg.end_z_units = 198U;
    msg.radius = 0.20573956702816332;
    msg.speed = 0.5966420339751881;
    msg.speed_units = 254U;
    msg.custom.assign("IBCWRHJBHLSDRMWBDCVVKUZPRATWQJJGTYHJXYZDIYIKTNHQVBCYUPZGPGABFGMZMXZHLXQVHRXPINIOCRANVERBKSIASTYVNWNPCDCOAWEIJHXQDSSQJYPLUADUOTENFGNUKPBQHMZKUJNOUKHOZLVESMNFOJNCYIWFQXRSOFHOBGSQLYJRLPQEEAWAQYG");

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
    msg.setTimeStamp(0.9296565920278782);
    msg.setSource(43897U);
    msg.setSourceEntity(108U);
    msg.setDestination(15459U);
    msg.setDestinationEntity(61U);
    msg.timeout = 53563U;
    msg.lat = 0.7553890414325647;
    msg.lon = 0.8371063362799508;
    msg.z = 0.36659932624439273;
    msg.z_units = 85U;
    msg.speed = 0.001443891672686437;
    msg.speed_units = 204U;
    msg.custom.assign("XOJRAKKRYFBRRNNHJFYWBPRJSAFGRSWFLNOGLLHZDDAXSBHILMEFYORHPMSILDIWILDBXGWTITKJPVQAAEQNUYYQWUZIICTNVBMYTMGNDUYVLZBKXSGAGCCKEUTMPKDFXAISGDCUIXLUJYQJEFCQGFVNTLSMZCBDHSRMJQBVEEBAVSNMBOEGCPQXPRMPGQWEKTZUAURZKTEOOOFVEHVHZZAMJPHWSC");

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
    msg.setTimeStamp(0.038282788988891925);
    msg.setSource(47598U);
    msg.setSourceEntity(162U);
    msg.setDestination(52408U);
    msg.setDestinationEntity(235U);
    msg.timeout = 63987U;
    msg.lat = 0.8779883028132183;
    msg.lon = 0.165739459530013;
    msg.z = 0.5743322045230059;
    msg.z_units = 106U;
    msg.speed = 0.2380022279679851;
    msg.speed_units = 237U;
    msg.custom.assign("ITOZXUOJHNWPEXVDVYVBJPEUPDIFCUAXAJRVTIYRNMAELSVWDAFHWWBQWDRFFBDYTBLJACKXQINYHGGLVEGUOOKZNSTHKALHQZEBDPCJMRXKDQPFUAPIZWKLWOZWCHNDYPQSSIRPIFGHRQMJJOGSBDJOVTQESSUKVBTWXNRBYYCTQOPNIFGYBMVRHEEBOCTWXSXKHJDGKRCZLTMKGAXURMXIUMGHFNNTLZ");

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
    msg.setTimeStamp(0.38500146373655053);
    msg.setSource(19021U);
    msg.setSourceEntity(65U);
    msg.setDestination(23151U);
    msg.setDestinationEntity(179U);
    msg.timeout = 55623U;
    msg.lat = 0.1259634522097104;
    msg.lon = 0.04120235320153687;
    msg.z = 0.44506830347348114;
    msg.z_units = 253U;
    msg.speed = 0.7370720629686238;
    msg.speed_units = 13U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.9281582252297828;
    tmp_msg_0.y = 0.19540555066722332;
    tmp_msg_0.z = 0.8414401638735768;
    tmp_msg_0.t = 0.8710983176125086;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("QBGCNDKRKMVDJCSSQTWUEMMDIBXCMBTJYCPYESNPKFKWPIZJAZFRNNHD");

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
    msg.setTimeStamp(0.8880309291422527);
    msg.setSource(61507U);
    msg.setSourceEntity(92U);
    msg.setDestination(7731U);
    msg.setDestinationEntity(48U);
    msg.x = 0.3888746811338677;
    msg.y = 0.14627275591784172;
    msg.z = 0.5618412005076102;
    msg.t = 0.5281078721717113;

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
    msg.setTimeStamp(0.6566281049032062);
    msg.setSource(27751U);
    msg.setSourceEntity(254U);
    msg.setDestination(65275U);
    msg.setDestinationEntity(206U);
    msg.x = 0.30574905398631536;
    msg.y = 0.3653403456122346;
    msg.z = 0.8501559748048865;
    msg.t = 0.5866545585664504;

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
    msg.setTimeStamp(0.6289564615355203);
    msg.setSource(43757U);
    msg.setSourceEntity(18U);
    msg.setDestination(63465U);
    msg.setDestinationEntity(230U);
    msg.x = 0.07559584036471312;
    msg.y = 0.310603256459569;
    msg.z = 0.1290603721154684;
    msg.t = 0.36435092822930215;

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
    msg.setTimeStamp(0.0656314223035257);
    msg.setSource(6707U);
    msg.setSourceEntity(202U);
    msg.setDestination(4939U);
    msg.setDestinationEntity(172U);
    msg.timeout = 15591U;
    msg.name.assign("DQSMBNIPSNOJDCBDXYDUEEKKBTQXGUHGVWVLEAMRCIWGUHBOEBGFZODPQWCCLDIUGBIYPBDXTOEFZYOIMTTJZLLLAFZEMFQZTRJISFHRZQKVWREWFQVRQAVINLSEHKBSXBBUKMPVITLAZTHDDKUXMAZRRSNQJPZRNWTVVNSNCPAMMSSLOMFQFOWJJJGFQXENYTXCCKHOAXYFYPEJYYRXDPYNWLUGZIRPAWCHIVKKATWAUUUGGHKON");
    msg.custom.assign("IYTFLNAXWSLNXJPQVMGEPNAYDYGTFRRQDXXPRLDCWSICPPJLWQKGCOZQFDASVNXLJJHIJWEBMUTKQUOMSWOHTRVIIOXFPUFDUGZSRPLCVBRHMTEYCZEKJTHPDTHWNONVZEZRIUDQCUGMKILZNVCDCJYDKYRZHCXOTIFSHMGIKVSWAXAGFQRKTHFTGYEYCEZVOVBKMS");

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
    msg.setTimeStamp(0.45742984233698136);
    msg.setSource(49395U);
    msg.setSourceEntity(84U);
    msg.setDestination(7105U);
    msg.setDestinationEntity(135U);
    msg.timeout = 19479U;
    msg.name.assign("VCLQULESOBWXMGTTRJPFOIHKXTMCFJRAASBOYAAVKIUULCEIGZRGGKFTLWQEBKPDWDAERYVIAZMNULSKCGAWCRHHDPHZBSKMQQRTUDDTVIJOSATFDTEFGWFMMCEPBYDKFMGZFFEQOSIOZYLPXJHWYQXVCEXNJLMCSBOMCZXRYOGQZBLPQZRN");
    msg.custom.assign("EXLTQZUDWSAFHNHCWMTQXXBWSJJSVGPFBLNDZIBONIBPFLIQNMXNOWOZNLKIERMSBUPCXVCAZDMVUBVAEZJDIALQRAUZGKFOCUUWIJKJCCPWDWUNCVUGFJTZTLJRTWKPHSXDPQMGTHQAVLHYYEOQHWRNCFMSQTKBFEKRVOJXL");

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
    msg.setTimeStamp(0.59569268300965);
    msg.setSource(44292U);
    msg.setSourceEntity(39U);
    msg.setDestination(50763U);
    msg.setDestinationEntity(104U);
    msg.timeout = 8971U;
    msg.name.assign("WJFWVLDFSCVGRDGLHJVXZPYZUOCOPHKKKKVHJUXLNLXWSBGAHPRESVQWSIIVBONRCTNMCMIXOWSJRJKEXAEEQBAYGAPENTNRYZRMAFFAYDIRZLYHKDUSTQDKNESBYLKDNGYHNXJBEFPZHRMZCXNLQWIUTONACMUZILQAOQTRQUWHSHUQDCGBCBAILYCJFOEGOJKLTCBPOKMXSPFYGDIBMUFEFYGDIGEW");
    msg.custom.assign("HWUPAZYHZUKOQLYJHEMAXNRNPGIKYMSHEANMPWHGTRSFDXYPAWVDKIHXJLVKCQOQZGNLYIVGNUGAXYEVEUFKWAXZRTVQQD");

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
    msg.setTimeStamp(0.06753225912062966);
    msg.setSource(39997U);
    msg.setSourceEntity(54U);
    msg.setDestination(23377U);
    msg.setDestinationEntity(199U);
    msg.lat = 0.9594882435085148;
    msg.lon = 0.7546576853638841;
    msg.z = 0.9504334070048156;
    msg.z_units = 173U;
    msg.speed = 0.5533345387465284;
    msg.speed_units = 14U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 54300U;
    tmp_msg_0.off_x = 0.5534057210675382;
    tmp_msg_0.off_y = 0.17851942044298474;
    tmp_msg_0.off_z = 0.4479101508223924;
    msg.participants.push_back(tmp_msg_0);
    msg.start_time = 0.010142794642646558;
    msg.custom.assign("CYXXQVGFQIELLYEQMFHOIQBDPKSYCVHPJZAVPTGJIS");

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
    msg.setTimeStamp(0.08696524196810129);
    msg.setSource(31710U);
    msg.setSourceEntity(48U);
    msg.setDestination(7198U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.7842960505245344;
    msg.lon = 0.7822278080796929;
    msg.z = 0.8195536355960934;
    msg.z_units = 234U;
    msg.speed = 0.9323808116952019;
    msg.speed_units = 213U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.30633400053598037;
    tmp_msg_0.y = 0.8273397842310751;
    tmp_msg_0.z = 0.024205496356671463;
    tmp_msg_0.t = 0.6379894451074828;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 34847U;
    tmp_msg_1.off_x = 0.0003958636191696563;
    tmp_msg_1.off_y = 0.4795313523800585;
    tmp_msg_1.off_z = 0.39240054626168497;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.49279483441374905;
    msg.custom.assign("XSQYGESUMRNDULZFZMXKPWXFPQDXOGRMNREYQBOVCZKMZRWMCQXXCRWIJALOOTUIJHFTGDYLMUQPWTNGALOJCFJACBTLNWNOTHLJVAKFCIYQSXOQGHZKHNSOFYVEPTBNPGTSKSMQCYLGICKZKSEPMBQUWDTTBVYRDSAZKWIPSBEDJUENNPLBRRBKQIJZNHGMAHMXUWCJYDVEDHULIXIFWAZEDFHVVVUBLRASFOBWREAITOEGPJCHYVZHVGXP");

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
    msg.setTimeStamp(0.4588418492779117);
    msg.setSource(24063U);
    msg.setSourceEntity(118U);
    msg.setDestination(36860U);
    msg.setDestinationEntity(67U);
    msg.lat = 0.932120478721381;
    msg.lon = 0.5788863041503015;
    msg.z = 0.18852312390628656;
    msg.z_units = 52U;
    msg.speed = 0.34755062839943185;
    msg.speed_units = 180U;
    msg.start_time = 0.9158728338315958;
    msg.custom.assign("QVVOBHVJOVKWGKVZIEIBXZJAXYNQPSKLDWTKYOQIZTPLBRUDJOICLIFTNPJXPUCJSCCURPGETKWGLYRVBZEZFCNAJWGKMMGNOYDBEPRZTXIKEZWWFEMAXDLFCLMURRJACYBIASMUMNXNLHY");

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
    msg.setTimeStamp(0.23467379459039894);
    msg.setSource(25439U);
    msg.setSourceEntity(41U);
    msg.setDestination(8007U);
    msg.setDestinationEntity(70U);
    msg.vid = 11627U;
    msg.off_x = 0.1988378269519453;
    msg.off_y = 0.10648788627804695;
    msg.off_z = 0.4193857940847998;

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
    msg.setTimeStamp(0.8116474416130709);
    msg.setSource(3437U);
    msg.setSourceEntity(230U);
    msg.setDestination(9497U);
    msg.setDestinationEntity(102U);
    msg.vid = 19222U;
    msg.off_x = 0.7850324581171427;
    msg.off_y = 0.7409506877391298;
    msg.off_z = 0.48558426577489056;

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
    msg.setTimeStamp(0.40505155025259154);
    msg.setSource(37863U);
    msg.setSourceEntity(143U);
    msg.setDestination(53681U);
    msg.setDestinationEntity(237U);
    msg.vid = 62641U;
    msg.off_x = 0.3344030175593422;
    msg.off_y = 0.2058167511935426;
    msg.off_z = 0.7748889489378586;

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
    msg.setTimeStamp(0.31243918288002337);
    msg.setSource(11503U);
    msg.setSourceEntity(110U);
    msg.setDestination(65096U);
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
    msg.setTimeStamp(0.17906871804927715);
    msg.setSource(39832U);
    msg.setSourceEntity(95U);
    msg.setDestination(49547U);
    msg.setDestinationEntity(4U);

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
    msg.setTimeStamp(0.7176571421990475);
    msg.setSource(5031U);
    msg.setSourceEntity(89U);
    msg.setDestination(61483U);
    msg.setDestinationEntity(16U);

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
    msg.setTimeStamp(0.01902598925248289);
    msg.setSource(42820U);
    msg.setSourceEntity(165U);
    msg.setDestination(27461U);
    msg.setDestinationEntity(248U);
    msg.mid = 61467U;

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
    msg.setTimeStamp(0.6444256020015663);
    msg.setSource(21591U);
    msg.setSourceEntity(169U);
    msg.setDestination(60777U);
    msg.setDestinationEntity(144U);
    msg.mid = 11186U;

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
    msg.setTimeStamp(0.6509862271119025);
    msg.setSource(39121U);
    msg.setSourceEntity(182U);
    msg.setDestination(57467U);
    msg.setDestinationEntity(195U);
    msg.mid = 52273U;

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
    msg.setTimeStamp(0.23284892734227935);
    msg.setSource(33394U);
    msg.setSourceEntity(118U);
    msg.setDestination(65246U);
    msg.setDestinationEntity(34U);
    msg.state = 246U;
    msg.eta = 14125U;
    msg.info.assign("VQZPWGEPAEFVOKHQIYOHEAPYUGSHUVJMSUTWMXKXTTFTPRPGEONBHQKOMLVVICGVPCDTXRTZBCXRYLLKLDRYOGTPNZUBHFNXJFOROUZDVPFEABDCJYSLYHHIIIBALMPKVACGCGMTWNICELODNSFVYQHRZEABJCLMZXABNMIKRDKBKGJEKQFRZW");

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
    msg.setTimeStamp(0.937306068116224);
    msg.setSource(13502U);
    msg.setSourceEntity(111U);
    msg.setDestination(22590U);
    msg.setDestinationEntity(118U);
    msg.state = 86U;
    msg.eta = 57964U;
    msg.info.assign("IALOUYRBLEIZSUFZBEGAABWBCXZNAUOQTKOJZSGIXSURTGLWBHPHBZCXHDQVOVGWLTHHBJCEYAIAGLKRILDZKPTYTMHRYEFSUMTRIASUCLDODUXFHSCAEMHWVUPJUMIEJXWNNLVZEFFCYMBOUJPNOYMZSSNPHHITCNVYBJFNWEWPTISCPXEQKSVWPZGCRNROFKQMQOQVGAVMGIWMNBLQRXVGP");

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
    msg.setTimeStamp(0.14457183212631286);
    msg.setSource(20321U);
    msg.setSourceEntity(127U);
    msg.setDestination(64884U);
    msg.setDestinationEntity(117U);
    msg.state = 169U;
    msg.eta = 57841U;
    msg.info.assign("JCSVFGJPGMQERIASXOOEBXOTKO");

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
    msg.setTimeStamp(0.6477894436168349);
    msg.setSource(3852U);
    msg.setSourceEntity(147U);
    msg.setDestination(56113U);
    msg.setDestinationEntity(130U);
    msg.system = 3024U;
    msg.duration = 54612U;
    msg.speed = 0.5812277142194056;
    msg.speed_units = 149U;
    msg.x = 0.2405353661138434;
    msg.y = 0.7819382908626792;
    msg.z = 0.18562590418961988;
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
    msg.setTimeStamp(0.30034913286081055);
    msg.setSource(9154U);
    msg.setSourceEntity(250U);
    msg.setDestination(48733U);
    msg.setDestinationEntity(70U);
    msg.system = 61347U;
    msg.duration = 35941U;
    msg.speed = 0.7056330316101638;
    msg.speed_units = 100U;
    msg.x = 0.8003322430756619;
    msg.y = 0.41995647673459924;
    msg.z = 0.27978146068543075;
    msg.z_units = 122U;

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
    msg.setTimeStamp(0.6578516847663777);
    msg.setSource(40750U);
    msg.setSourceEntity(26U);
    msg.setDestination(30289U);
    msg.setDestinationEntity(95U);
    msg.system = 35571U;
    msg.duration = 21218U;
    msg.speed = 0.5960732463422194;
    msg.speed_units = 77U;
    msg.x = 0.9164978582419024;
    msg.y = 0.749519947182542;
    msg.z = 0.04534245504761236;
    msg.z_units = 204U;

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
    msg.setTimeStamp(0.2004802785758042);
    msg.setSource(61054U);
    msg.setSourceEntity(198U);
    msg.setDestination(64361U);
    msg.setDestinationEntity(227U);
    msg.lat = 0.36914166402459636;
    msg.lon = 0.14607411015027572;
    msg.speed = 0.39952086351838023;
    msg.speed_units = 254U;
    msg.duration = 46789U;
    msg.sys_a = 64226U;
    msg.sys_b = 12408U;
    msg.move_threshold = 0.7079466684451255;

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
    msg.setTimeStamp(0.36069744472787624);
    msg.setSource(13162U);
    msg.setSourceEntity(163U);
    msg.setDestination(55600U);
    msg.setDestinationEntity(50U);
    msg.lat = 0.3248646601828329;
    msg.lon = 0.3625709689911183;
    msg.speed = 0.2504187394756524;
    msg.speed_units = 175U;
    msg.duration = 25145U;
    msg.sys_a = 8657U;
    msg.sys_b = 24609U;
    msg.move_threshold = 0.6706325772184932;

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
    msg.setTimeStamp(0.7011013123073838);
    msg.setSource(10039U);
    msg.setSourceEntity(174U);
    msg.setDestination(3732U);
    msg.setDestinationEntity(8U);
    msg.lat = 0.9434147159028492;
    msg.lon = 0.6410124653332783;
    msg.speed = 0.051450057927402315;
    msg.speed_units = 108U;
    msg.duration = 40443U;
    msg.sys_a = 20429U;
    msg.sys_b = 19437U;
    msg.move_threshold = 0.22544342831006592;

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
    msg.setTimeStamp(0.9419134462102637);
    msg.setSource(12322U);
    msg.setSourceEntity(120U);
    msg.setDestination(37867U);
    msg.setDestinationEntity(174U);
    msg.lat = 0.9863781965538658;
    msg.lon = 0.552416425329084;
    msg.z = 0.4467810053803545;
    msg.z_units = 35U;
    msg.speed = 0.1927179924947704;
    msg.speed_units = 150U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.8744551913206229;
    tmp_msg_0.lon = 0.2333919264869233;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("GSJFSJNWGFXCQKQIZ");

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
    msg.setTimeStamp(0.5930497631401183);
    msg.setSource(13827U);
    msg.setSourceEntity(238U);
    msg.setDestination(23989U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.05582850212543977;
    msg.lon = 0.18333605737394043;
    msg.z = 0.6283586520274319;
    msg.z_units = 61U;
    msg.speed = 0.7910931920507581;
    msg.speed_units = 231U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.5160651643846105;
    tmp_msg_0.lon = 0.33608672134703244;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("RDLGGCMEVSDHNFBJRJWIRGKYTTJZXXIYRIZVKLMCDWHRPWIKFVTOMMQEVQZSYZVOZNXVCXYJTKSHPEYGESQCJGVP");

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
    msg.setTimeStamp(0.17168598598012774);
    msg.setSource(33718U);
    msg.setSourceEntity(6U);
    msg.setDestination(44373U);
    msg.setDestinationEntity(209U);
    msg.lat = 0.8442791145320018;
    msg.lon = 0.06131728149061533;
    msg.z = 0.6630182639097616;
    msg.z_units = 34U;
    msg.speed = 0.9577400712460302;
    msg.speed_units = 153U;
    msg.custom.assign("WSMIVWEJYHHVLPBANCGVGELWSVQPEDMJGITMHCIKYJFDMUSXZMBHDPSCFRAXSYEVYDRXTEMVEHDPQHFDUYPIQVCQCSZYINTWAVLSKNHUXIKHZYNGETLXEKPZRTWV");

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
    msg.setTimeStamp(0.4495806934426232);
    msg.setSource(22954U);
    msg.setSourceEntity(73U);
    msg.setDestination(17228U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.16298241890974652;
    msg.lon = 0.9136119306051305;

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
    msg.setTimeStamp(0.20132253309844617);
    msg.setSource(55127U);
    msg.setSourceEntity(81U);
    msg.setDestination(23409U);
    msg.setDestinationEntity(86U);
    msg.lat = 0.948076182020067;
    msg.lon = 0.21962483967973212;

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
    msg.setTimeStamp(0.8927412236173559);
    msg.setSource(45110U);
    msg.setSourceEntity(80U);
    msg.setDestination(7079U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.5823111938815981;
    msg.lon = 0.32157914467177895;

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
    msg.setTimeStamp(0.3228987042059296);
    msg.setSource(7103U);
    msg.setSourceEntity(151U);
    msg.setDestination(49817U);
    msg.setDestinationEntity(164U);
    msg.timeout = 69U;
    msg.lat = 0.9314812014105068;
    msg.lon = 0.31760206381113243;
    msg.z = 0.5851010281456382;
    msg.z_units = 64U;
    msg.pitch = 0.18769698789853528;
    msg.amplitude = 0.009555528533275348;
    msg.duration = 20904U;
    msg.speed = 0.8426998067445978;
    msg.speed_units = 53U;
    msg.radius = 0.7145152341938807;
    msg.direction = 210U;
    msg.custom.assign("KUUBEZGAYCLRBDNYCQXWNULOJINYZOKGTHEARMVUUNFMHMGQPRUYWTJRFNESCQIOBARAOEFRYZGNYFMWVEUITSWNJAGBGRKFPLAIFNFOLZKBADCROQIXFISVJQHYOVPZOIRKHJEVDIJWIBDBUKZPYDBTGXKXVYZTOHNHXVEXVJCDSNMTHGAPLDZPWQKZESCQLJVMLBKB");

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
    msg.setTimeStamp(0.9582004153817959);
    msg.setSource(14636U);
    msg.setSourceEntity(45U);
    msg.setDestination(22021U);
    msg.setDestinationEntity(138U);
    msg.timeout = 7801U;
    msg.lat = 0.055103406624747;
    msg.lon = 0.7154393617304917;
    msg.z = 0.2201217915929755;
    msg.z_units = 75U;
    msg.pitch = 0.37028718251847925;
    msg.amplitude = 0.8134204458214247;
    msg.duration = 17192U;
    msg.speed = 0.5318417643547103;
    msg.speed_units = 120U;
    msg.radius = 0.858634589834963;
    msg.direction = 254U;
    msg.custom.assign("PDIRWUELOSRTGVPWNBSGYSCPVGEPNLOPHOIBZTQUKUYIGJURBFRNOLZLFCEOJMYDBTVHOCAQAZAZMKGSPWLXHHUKXELNJXVVRLXNEMBSFNYRVYPLCRFQXOWIVQIHUDGMWZGCXTFUQEQAEDQBSKTZKWFBITFAUFYJJSPHNWSJXAJQWIKHGDPSIZTTLGFWOQAJGBCBDAYDXMHWYEOYM");

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
    msg.setTimeStamp(0.22924761070307664);
    msg.setSource(30571U);
    msg.setSourceEntity(88U);
    msg.setDestination(43554U);
    msg.setDestinationEntity(50U);
    msg.timeout = 48483U;
    msg.lat = 0.7232887722156616;
    msg.lon = 0.6815760017177475;
    msg.z = 0.6025430015427893;
    msg.z_units = 192U;
    msg.pitch = 0.8146573015079294;
    msg.amplitude = 0.6260696928966639;
    msg.duration = 39931U;
    msg.speed = 0.10776540430086945;
    msg.speed_units = 116U;
    msg.radius = 0.17389691239750027;
    msg.direction = 171U;
    msg.custom.assign("HDEZEZBCLBMSNPXNDGOPXZYOSPRIOWMVRJUQRPYDSTMURZPUYLAIOYCQBHTWCXKCLJWYDKBOVLAPHYFQTKFNAOYBIHVDTJIHUVCHJOSISNVNLQYURGGJFCAAMSNBWANUECQARNVRPMYHCAGUEZGLTXZDWECCATWIKKAPIFHZIFFHMZEUJDETXOYXBKHVKRJOXXFSJKZWSIXNSJQBM");

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
    msg.setTimeStamp(0.32043679016286597);
    msg.setSource(5472U);
    msg.setSourceEntity(207U);
    msg.setDestination(3340U);
    msg.setDestinationEntity(240U);
    msg.formation_name.assign("XHKFISRNLZUZHIZPRNOGTERLEYXYMZEJMNHCKVINPCWSRUNATCJFIWXJVLKACJTVPBONOBIYCJLHHJAOPUUJ");
    msg.reference_frame = 126U;
    msg.custom.assign("WYBOQQQZLEDMAJAUDNYSWYIPUAKGHNGSHEBVEJWSRJZJFKQMJLMRARNGIPZW");

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
    msg.setTimeStamp(0.7614430073975283);
    msg.setSource(4779U);
    msg.setSourceEntity(247U);
    msg.setDestination(40001U);
    msg.setDestinationEntity(47U);
    msg.formation_name.assign("LJHAVZFCSFQXBIIEOZURCKGLEZQVTSGDJRZDDYTJHAJLALOLHDCZKYVANKDHLSMBLNGZGQPJUOULMU");
    msg.reference_frame = 189U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 16634U;
    tmp_msg_0.off_x = 0.21952626634520034;
    tmp_msg_0.off_y = 0.8688742664048347;
    tmp_msg_0.off_z = 0.6926509687938411;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("ZDQGAHKTJXCNKZIWQHZIXNWLFMPLFTQUCBIBYGVRUEIPEBZTCPPUNFCXBSRREUACSYSJDIWCKKFVDPJSBGMKJSHDCTQAVEFFMMUFPQTZSZRWGOTODJRKABMWKJUFSJAISHJTGXWDLNAVXHYOLQLFHSTNLUUORYEWJVVZOFBBOKMXKOGCPLNBBPXHXQCNGCMWOWVLY");

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
    msg.setTimeStamp(0.8221025592886475);
    msg.setSource(18254U);
    msg.setSourceEntity(187U);
    msg.setDestination(25197U);
    msg.setDestinationEntity(185U);
    msg.formation_name.assign("YKXATJJQYDJYEZEVOYCSFRQUWTDVOPRBUZELYBHVGOPKH");
    msg.reference_frame = 218U;
    msg.custom.assign("HAGYFYUUDPJUEREMWNKTKYBICWCZDDESSQ");

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
    msg.setTimeStamp(0.9558846097938037);
    msg.setSource(47688U);
    msg.setSourceEntity(59U);
    msg.setDestination(55486U);
    msg.setDestinationEntity(176U);
    msg.group_name.assign("FSRWMMIALLNXEHQVAGUKFUDRFDMVSRRDJMCTYCPQQQLCCJXZBOKEOZFWRWIHBMOBVPHUADKOBCXKUXZKUQCMPBGIUNUWQGMQYBLIPECYOFJAZOJCOBNCVVRXIGHYNXUIKDVDLZSPPICRJBPYSVOLBXXUSAUIVT");
    msg.formation_name.assign("NYLVVFPVLYFFZVLKLBEUDRQBNSTKXJLRGZCBPMHTCAOGPUONE");
    msg.plan_id.assign("VVLNJWSDJUNXSMPODJJYQCYKPIEREEUKSAUIYEFDSRVFMXCPQMEDAPNJOXZWXVNFVXJUMDZITBEBPHVUAXJIOYENQIDAJEGCIAVUATPQKOARGIHIEVLMKAKINCCMNHDGLMFCZ");
    msg.description.assign("PRFHEMNTNLSCJGBGPWRDKMJWCPYSTSFWXBDDGBNLXFMZVBTPJZSQUHUZOMHTQJVDAPFKFXOMGCBLTYHRDUZEJGQUWUTVBSPRJLXAYVYOIBULISNAGTCMXQPVZFMMBIDSRFILVSENOOHQFXPUZQGIWHVHDEWLEPWNJWXEEKIKHAFTRJWXEZAIRARPZKIYQAGMYOELSCJQVWNMVKOBXOYUFZNOSHUYQCVTCANDHCNCI");
    msg.leader_speed = 0.35381616512560843;
    msg.leader_bank_lim = 0.838174352598626;
    msg.pos_sim_err_lim = 0.1695095189407766;
    msg.pos_sim_err_wrn = 0.08544766337094323;
    msg.pos_sim_err_timeout = 39755U;
    msg.converg_max = 0.6281792284143416;
    msg.converg_timeout = 48554U;
    msg.comms_timeout = 6977U;
    msg.turb_lim = 0.847598280779448;
    msg.custom.assign("LIYMZZAUCLFGHGCFJYNBNNBYWFBXWLTTFRAUWDERROKMXUJIMVLNMNVMBSOHWASXVMUDKXCLMQPGEVCSRPEZOCXQGDQZKIIZROSKFENLTIACUQFIHOFLCXTLYPVCERPAHWVRHOBBRHQVHUGDRZOVSDGCWJAQQPYYN");

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
    msg.setTimeStamp(0.2650083742309616);
    msg.setSource(63903U);
    msg.setSourceEntity(149U);
    msg.setDestination(44448U);
    msg.setDestinationEntity(216U);
    msg.group_name.assign("HMNJENZFNBPMJALLCNLVTVKOHUZAUGIWQQZPDDGQ");
    msg.formation_name.assign("QEYKXODWACSETWOGETUSWWJOINNCCXRIMLKDCXGKNIENBYJQHTTA");
    msg.plan_id.assign("OEKFEPTHXUZZTQHPAGIKEDMSCJISZIRSLVCIRULVVFKJVJITWEAFLQGMQUDKQSPCLIEZCLEVTMFFUBTFSRIVMNGNBIYMAYDJUNGYVGAXJHZRPIRLPUDBYZBPXWMCKAHVAYHQGPNARTADHSZOOBYXEXGJWETDDROGQ");
    msg.description.assign("FJEDTLDUOAKVGSCZKHWUKSYGMDHZLMSZYIMMVPTNBRCSBASBNFJRILMQROJRLCVRXFHZFWWFALNGHWENQMXUURLAGTJCDWKYAUOZOXNQRKPJSWKPDCJRIMXBNCSTZEGHAWJXKWEXAYQDAIULYOLHTRHXEBFSPNXTRZQUPQUOYIAPWXIVVGJIOVPISHCOZMLBGCKBQVNVMFHBSGHUDNOVEIPDQZENTBUMKGYYFPFDQXLWAGFDEJEBEJZICQVY");
    msg.leader_speed = 0.3047352741429281;
    msg.leader_bank_lim = 0.7581859642373556;
    msg.pos_sim_err_lim = 0.2930794148254906;
    msg.pos_sim_err_wrn = 0.14639671897006512;
    msg.pos_sim_err_timeout = 27961U;
    msg.converg_max = 0.23016087691474663;
    msg.converg_timeout = 39638U;
    msg.comms_timeout = 9315U;
    msg.turb_lim = 0.25872561549025286;
    msg.custom.assign("OIFMVDOPTVRWDZHTYJHYFSFBDUFDBPUVHMSAJQILECZKPBRKSOEYVULVKQMEGZATZWMXIDPOAQTLPZCGBPJKOGHIHOHCOQYRZMGHBVZXQUPRQCNLDEBWEGBGIRMFCTSYFSJYR");

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
    msg.setTimeStamp(0.7560666800799757);
    msg.setSource(13985U);
    msg.setSourceEntity(229U);
    msg.setDestination(411U);
    msg.setDestinationEntity(99U);
    msg.group_name.assign("DHBGICXCQMDLCWCVIFJPWGSCWCVEDISPMTUGUSJFOSVCERRATUZTHEBWKRHGYXHJNMNKUBDQAUSQOBQIGUAIHKAOGPPNYVZTIZXNYNXESOFXPFKPJHYMJRQUEAYWKVWGOGIFSFRDLNOKEZPBLNXAMRFVMLJTQMROHWXYCXABZOFIPBWOQCLLDUKETKFASDDSWZQXOLM");
    msg.formation_name.assign("VOISVXAZFXCRVCSGZFTGNZKCXQCMBTOXHXBQYBCNPQCBEW");
    msg.plan_id.assign("FPRKRYSVHMSUKLGXEKVDHSJUFAQTPTXHGOJORXQMRBDVVCRURHKSOBLKRSJBYDFALIIEJBCAYVOMKZUQBFQQLGIBILPQ");
    msg.description.assign("XYOSDNWKPLBKHHMZNISIVYAZWQUGOJFKQVLROAZJAWOMOTGBPLHHFTPMTLZULDMUIGVCIXWCBPJVDKSSOJOFBTXOIQCENVHXFJQCHQEVWHVTZDAQXGBDLLVTTTURWEMBPACBIDXGYSIKDLBYFUUUCAEARTWMYSSBZZEPINDKKMRXUGOLANXYZEQKIYHRMCAYWCNFKDRPGDRFPWYBJEFNSJMIQJWEOGSNHXZPCNUJNKEGVMCZTVR");
    msg.leader_speed = 0.14286189693675988;
    msg.leader_bank_lim = 0.008287780171356118;
    msg.pos_sim_err_lim = 0.5177299343429504;
    msg.pos_sim_err_wrn = 0.18700054626065366;
    msg.pos_sim_err_timeout = 50379U;
    msg.converg_max = 0.7504295327057546;
    msg.converg_timeout = 28117U;
    msg.comms_timeout = 44361U;
    msg.turb_lim = 0.14633907250499623;
    msg.custom.assign("QYSVNPFLTQJGXDEYUSLFDBKYCLTCFIZGICAMCOOLTEFBXAZUZFLGCZAWGNKPLEKLCKIHDUUIISUMHKXNWQKZWWMQLVPMDRZBTPISDBYWAMETJDOOHOSAWBMOMEVAXBPRQDVNRKAZGJYSFKJOENZHIGVNQJKCWERSHOVRAHNLPIPSEGXHRMENFXCFNJHJRYWIFAUYTAYBRQDVUESHUXXZNBXWTCMPFDYTVVPRGHUWSCDMRTXYOBQLBGJJ");

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
    msg.setTimeStamp(0.5709401099573645);
    msg.setSource(39506U);
    msg.setSourceEntity(187U);
    msg.setDestination(42181U);
    msg.setDestinationEntity(97U);
    msg.control_src = 13064U;
    msg.control_ent = 23U;
    msg.timeout = 0.9793216071291472;
    msg.loiter_radius = 0.7870394776858848;
    msg.altitude_interval = 0.7430636804429641;

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
    msg.setTimeStamp(0.17474971872361422);
    msg.setSource(2055U);
    msg.setSourceEntity(0U);
    msg.setDestination(54245U);
    msg.setDestinationEntity(145U);
    msg.control_src = 33917U;
    msg.control_ent = 124U;
    msg.timeout = 0.099351352668399;
    msg.loiter_radius = 0.6493912852708549;
    msg.altitude_interval = 0.3432984927285656;

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
    msg.setTimeStamp(0.8199915171837557);
    msg.setSource(45941U);
    msg.setSourceEntity(253U);
    msg.setDestination(3777U);
    msg.setDestinationEntity(166U);
    msg.control_src = 65515U;
    msg.control_ent = 215U;
    msg.timeout = 0.13838078467935855;
    msg.loiter_radius = 0.848454695326815;
    msg.altitude_interval = 0.2777626055594886;

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
    msg.setTimeStamp(0.3092002542134875);
    msg.setSource(2611U);
    msg.setSourceEntity(88U);
    msg.setDestination(39617U);
    msg.setDestinationEntity(120U);
    msg.flags = 90U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.4867734991709656;
    tmp_msg_0.speed_units = 248U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.6271060579334657;
    tmp_msg_1.z_units = 187U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.017980780182248246;
    msg.lon = 0.7356374154029885;
    msg.radius = 0.5779046035382552;

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
    msg.setTimeStamp(0.418493755285281);
    msg.setSource(57906U);
    msg.setSourceEntity(20U);
    msg.setDestination(25429U);
    msg.setDestinationEntity(152U);
    msg.flags = 32U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.8845472346484989;
    tmp_msg_0.speed_units = 173U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.13460560123400123;
    tmp_msg_1.z_units = 7U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.15396583989986412;
    msg.lon = 0.7635364485801241;
    msg.radius = 0.2067729555546497;

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
    msg.setTimeStamp(0.8670208084707145);
    msg.setSource(4240U);
    msg.setSourceEntity(162U);
    msg.setDestination(48654U);
    msg.setDestinationEntity(119U);
    msg.flags = 67U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.6210925269905002;
    tmp_msg_0.speed_units = 92U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.694130914464166;
    tmp_msg_1.z_units = 86U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.8935596978533495;
    msg.lon = 0.5138738323208794;
    msg.radius = 0.811898719970899;

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
    msg.setTimeStamp(0.021427014429830082);
    msg.setSource(56443U);
    msg.setSourceEntity(152U);
    msg.setDestination(17678U);
    msg.setDestinationEntity(9U);
    msg.control_src = 58927U;
    msg.control_ent = 147U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 172U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.5019625910809189;
    tmp_tmp_msg_0_0.speed_units = 133U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6838738376478896;
    tmp_tmp_msg_0_1.z_units = 83U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.34092527358516367;
    tmp_msg_0.lon = 0.3762555641470964;
    tmp_msg_0.radius = 0.48713081715320683;
    msg.reference.set(tmp_msg_0);
    msg.state = 67U;
    msg.proximity = 175U;

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
    msg.setTimeStamp(0.008807785834369142);
    msg.setSource(42107U);
    msg.setSourceEntity(246U);
    msg.setDestination(20808U);
    msg.setDestinationEntity(207U);
    msg.control_src = 8371U;
    msg.control_ent = 28U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 181U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.40904667080604895;
    tmp_tmp_msg_0_0.speed_units = 160U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.8001783134016986;
    tmp_tmp_msg_0_1.z_units = 35U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.07841854160304218;
    tmp_msg_0.lon = 0.6573521655136149;
    tmp_msg_0.radius = 0.8349716446987243;
    msg.reference.set(tmp_msg_0);
    msg.state = 82U;
    msg.proximity = 39U;

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
    msg.setTimeStamp(0.38287384767186294);
    msg.setSource(35725U);
    msg.setSourceEntity(84U);
    msg.setDestination(13631U);
    msg.setDestinationEntity(126U);
    msg.control_src = 9437U;
    msg.control_ent = 107U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 141U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.7860195358349493;
    tmp_tmp_msg_0_0.speed_units = 21U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.6991232749719868;
    tmp_tmp_msg_0_1.z_units = 216U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.4622004205037863;
    tmp_msg_0.lon = 0.1603362740010088;
    tmp_msg_0.radius = 0.2750732829646423;
    msg.reference.set(tmp_msg_0);
    msg.state = 42U;
    msg.proximity = 37U;

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
    msg.setTimeStamp(0.10418345482949265);
    msg.setSource(38721U);
    msg.setSourceEntity(57U);
    msg.setDestination(41765U);
    msg.setDestinationEntity(52U);
    msg.ax_cmd = 0.5738524727280038;
    msg.ay_cmd = 0.4828172576541341;
    msg.az_cmd = 0.5385258970059097;
    msg.ax_des = 0.9767949753397139;
    msg.ay_des = 0.3559600941431993;
    msg.az_des = 0.6981881307165312;
    msg.virt_err_x = 0.14515687895028861;
    msg.virt_err_y = 0.8269469804293961;
    msg.virt_err_z = 0.5854417874645157;
    msg.surf_fdbk_x = 0.315658313147149;
    msg.surf_fdbk_y = 0.6627784566255598;
    msg.surf_fdbk_z = 0.22879306177311698;
    msg.surf_unkn_x = 0.41872211943693194;
    msg.surf_unkn_y = 0.7787529172970123;
    msg.surf_unkn_z = 0.26483800628933907;
    msg.ss_x = 0.03919806656149083;
    msg.ss_y = 0.30246225553467343;
    msg.ss_z = 0.10433673237516694;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("TCIWWXBGRKJFEKRWQHOSIIUTCNZRXFNSTDSCAVVBPKEFGGYDALNAZZEUXCWZ");
    tmp_msg_0.dist = 0.5738739394867441;
    tmp_msg_0.err = 0.7590064834458441;
    tmp_msg_0.ctrl_imp = 0.5779256903827229;
    tmp_msg_0.rel_dir_x = 0.7268317023871601;
    tmp_msg_0.rel_dir_y = 0.5023856950667241;
    tmp_msg_0.rel_dir_z = 0.09763817826748145;
    tmp_msg_0.err_x = 0.20219493393036725;
    tmp_msg_0.err_y = 0.13539217304717144;
    tmp_msg_0.err_z = 0.8863313436817103;
    tmp_msg_0.rf_err_x = 0.6127764618463128;
    tmp_msg_0.rf_err_y = 0.09576615983478565;
    tmp_msg_0.rf_err_z = 0.7568910412193524;
    tmp_msg_0.rf_err_vx = 0.5306475531149326;
    tmp_msg_0.rf_err_vy = 0.6489199068062054;
    tmp_msg_0.rf_err_vz = 0.5666520369706;
    tmp_msg_0.ss_x = 0.11060231592035474;
    tmp_msg_0.ss_y = 0.011013636409571759;
    tmp_msg_0.ss_z = 0.7594079882621936;
    tmp_msg_0.virt_err_x = 0.07020955372769089;
    tmp_msg_0.virt_err_y = 0.036341388585048984;
    tmp_msg_0.virt_err_z = 0.14471869269866833;
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
    msg.setTimeStamp(0.33406807572829844);
    msg.setSource(11885U);
    msg.setSourceEntity(25U);
    msg.setDestination(34443U);
    msg.setDestinationEntity(199U);
    msg.ax_cmd = 0.9563120748227246;
    msg.ay_cmd = 0.7454663690153539;
    msg.az_cmd = 0.24441914060122683;
    msg.ax_des = 0.4723495866985763;
    msg.ay_des = 0.7927684394857238;
    msg.az_des = 0.3918890359550429;
    msg.virt_err_x = 0.47095918970892015;
    msg.virt_err_y = 0.6394695483026499;
    msg.virt_err_z = 0.7233079824223695;
    msg.surf_fdbk_x = 0.36582993732180114;
    msg.surf_fdbk_y = 0.975150156398672;
    msg.surf_fdbk_z = 0.8038690481353227;
    msg.surf_unkn_x = 0.7196714374750992;
    msg.surf_unkn_y = 0.7190104364569158;
    msg.surf_unkn_z = 0.8342961334867426;
    msg.ss_x = 0.12346483013877463;
    msg.ss_y = 0.855235933290216;
    msg.ss_z = 0.10992519570645487;

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
    msg.setTimeStamp(0.08602395373233596);
    msg.setSource(46217U);
    msg.setSourceEntity(153U);
    msg.setDestination(12204U);
    msg.setDestinationEntity(246U);
    msg.ax_cmd = 0.9082071043053322;
    msg.ay_cmd = 0.9797521905203926;
    msg.az_cmd = 0.7419878029977371;
    msg.ax_des = 0.81117113056324;
    msg.ay_des = 0.15339137569123606;
    msg.az_des = 0.8252435996496119;
    msg.virt_err_x = 0.6614586347750427;
    msg.virt_err_y = 0.33317278910968706;
    msg.virt_err_z = 0.9841472196686099;
    msg.surf_fdbk_x = 0.6632852170698355;
    msg.surf_fdbk_y = 0.834160446914453;
    msg.surf_fdbk_z = 0.09688077823495755;
    msg.surf_unkn_x = 0.3382984757695665;
    msg.surf_unkn_y = 0.8270023227362441;
    msg.surf_unkn_z = 0.3788295573290501;
    msg.ss_x = 0.6283137038497745;
    msg.ss_y = 0.40026331775873836;
    msg.ss_z = 0.16320044950125012;

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
    msg.setTimeStamp(0.8906872598683025);
    msg.setSource(44057U);
    msg.setSourceEntity(221U);
    msg.setDestination(38033U);
    msg.setDestinationEntity(77U);
    msg.s_id.assign("POWOXCHDFWNHNOVGATTBTETKXUULLMZSCWEHHIOOYKXFBPGAEVBMYLLHVIEKRCGNKZMUTPWXXPIHFQRIJQZYLBN");
    msg.dist = 0.34332162640477837;
    msg.err = 0.023822626311979955;
    msg.ctrl_imp = 0.654597263279886;
    msg.rel_dir_x = 0.46333442534042235;
    msg.rel_dir_y = 0.8598286002395068;
    msg.rel_dir_z = 0.08829060408394906;
    msg.err_x = 0.0722741106013498;
    msg.err_y = 0.6839373915875367;
    msg.err_z = 0.13486657254061618;
    msg.rf_err_x = 0.5385627829054037;
    msg.rf_err_y = 0.43131013821666564;
    msg.rf_err_z = 0.188699581058824;
    msg.rf_err_vx = 0.13715904736385076;
    msg.rf_err_vy = 0.06617906279713837;
    msg.rf_err_vz = 0.58529166284783;
    msg.ss_x = 0.4447318632435229;
    msg.ss_y = 0.7077779747587116;
    msg.ss_z = 0.364965838345646;
    msg.virt_err_x = 0.8070414863080841;
    msg.virt_err_y = 0.6437278572628113;
    msg.virt_err_z = 0.7267240131816325;

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
    msg.setTimeStamp(0.3164389234775221);
    msg.setSource(25926U);
    msg.setSourceEntity(24U);
    msg.setDestination(36099U);
    msg.setDestinationEntity(48U);
    msg.s_id.assign("FUUEVWQBCAAQPIEYNJGHAALGXUWVISVMUPHFNSKLQGDLALLMBHCROVNGBXGEZMTNUNTPJDKZGYIWQMDEENRHSTPVUCOBDFWDMSLZPBBGTECHNCTQOTPGRJ");
    msg.dist = 0.25011707323133836;
    msg.err = 0.5627866927850248;
    msg.ctrl_imp = 0.2598463919666373;
    msg.rel_dir_x = 0.530809407682762;
    msg.rel_dir_y = 0.122582856619038;
    msg.rel_dir_z = 0.2556258285382512;
    msg.err_x = 0.7181319097706671;
    msg.err_y = 0.686829619511095;
    msg.err_z = 0.706617264097005;
    msg.rf_err_x = 0.54559795892462;
    msg.rf_err_y = 0.3653192459375767;
    msg.rf_err_z = 0.6213375380390992;
    msg.rf_err_vx = 0.7534856599982619;
    msg.rf_err_vy = 0.33174238961679126;
    msg.rf_err_vz = 0.031959215733450175;
    msg.ss_x = 0.1828054586624661;
    msg.ss_y = 0.3744592612600711;
    msg.ss_z = 0.3994793667512332;
    msg.virt_err_x = 0.6304181605856213;
    msg.virt_err_y = 0.204555510703184;
    msg.virt_err_z = 0.5955210008883348;

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
    msg.setTimeStamp(0.5566518187904695);
    msg.setSource(44782U);
    msg.setSourceEntity(131U);
    msg.setDestination(17529U);
    msg.setDestinationEntity(8U);
    msg.s_id.assign("PDIHMZJUDOPXHPIFLEKWQAXGSKHPCSEMMAZPDQYCUSUGEBKHOICYHWWZQQONOOZMUNZUPEBJLPFYCVTGABJTOIWINBNAVLMDYNSFVYKJXJGKRRC");
    msg.dist = 0.9827735874680202;
    msg.err = 0.1252961966206808;
    msg.ctrl_imp = 0.928537055818369;
    msg.rel_dir_x = 0.07504919023556933;
    msg.rel_dir_y = 0.6064000000624008;
    msg.rel_dir_z = 0.9209127105060957;
    msg.err_x = 0.29531993226987796;
    msg.err_y = 0.836408297858203;
    msg.err_z = 0.6818286495920102;
    msg.rf_err_x = 0.46198566466177304;
    msg.rf_err_y = 0.2645438020569799;
    msg.rf_err_z = 0.11541310623945022;
    msg.rf_err_vx = 0.8088450689794663;
    msg.rf_err_vy = 0.7387303646614067;
    msg.rf_err_vz = 0.5747208798561388;
    msg.ss_x = 0.6087861534897042;
    msg.ss_y = 0.1521888511521723;
    msg.ss_z = 0.621065611826549;
    msg.virt_err_x = 0.7464674139616988;
    msg.virt_err_y = 0.09855464975154016;
    msg.virt_err_z = 0.2420266549653144;

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
    msg.setTimeStamp(0.7748111739090909);
    msg.setSource(55847U);
    msg.setSourceEntity(16U);
    msg.setDestination(20710U);
    msg.setDestinationEntity(190U);
    msg.timeout = 15366U;
    msg.rpm = 0.7287712030159188;
    msg.direction = 103U;
    msg.custom.assign("KEXZUULMTPEIBDGQJNDQKTKQWKCYZGRBXBEAJYXEDKOCVGNHTEEFPCFZGJSOLSNIMLEUWJZGUSLJPLRBXCMBFNHETPCXKSWFQZANIEDROVDYJMPHXDNJBOPVAKGCRXYTYQQBSIAARSCFDWOLSIRXZFNIAKAHOUISVWVMMYQGMLVYF");

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
    msg.setTimeStamp(0.9350900029237582);
    msg.setSource(37812U);
    msg.setSourceEntity(127U);
    msg.setDestination(64115U);
    msg.setDestinationEntity(221U);
    msg.timeout = 58372U;
    msg.rpm = 0.9066032837423487;
    msg.direction = 33U;
    msg.custom.assign("WYWKZPXPGICSGJDLVRXYIEEEYLXJASVIMWASUMRDACCNPHFMRIQZLJFTLROFGYUFWAXKTBWCYJORHLIAWTUPZALDLTODGKMSOYNSFEPFYUZHKJWPHHSPBMQVOVYBDOHXKTQRSCGCUHZVCTZJUENPHHBUDXVLWMVTXGQKQQCWQKZOBMZBGOADBJJQMGRRTDAVJHKEKDYLXNKSBIJGUXNPOVMRABUFSAIENGTYCTSIFLPE");

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
    msg.setTimeStamp(0.3600692406637097);
    msg.setSource(15178U);
    msg.setSourceEntity(0U);
    msg.setDestination(64728U);
    msg.setDestinationEntity(174U);
    msg.timeout = 9548U;
    msg.rpm = 0.4411345351005801;
    msg.direction = 145U;
    msg.custom.assign("SVTEJMWQHMTULCZBUBCHINWTAAZAKUXIIONNPQVHPSSBQWYAWKGCUPYDUPXIXBWISAXXFSOGEGEXFGJBJHCDYBYGAGKOWJWW");

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
    msg.setTimeStamp(0.6197758556209677);
    msg.setSource(51297U);
    msg.setSourceEntity(220U);
    msg.setDestination(55622U);
    msg.setDestinationEntity(34U);
    msg.formation_name.assign("BFNMIEXYMWHGQPQZBDELGABEXHNDJAPOOMTYRPLLVNZIIQJLOOPUSLWJJWETJHELAFORALSM");
    msg.type = 126U;
    msg.op = 177U;
    msg.group_name.assign("JXUJVEWFKHUDGGHXWCMVJLFNBMTFAMIYGVXOVMSHQCXBKPLLNXUJZWLXJSDZBDRNRHRNWRLCKBZECJJUTZDQQQFYMGRARICFPKCSVAOFQEVDDZEEMNQAPROZZGDSQWNPYWIEMIYQDDQUGPLPXCLSOWMIVIHWNQRHYRGUTHWXKBOKJEVFCUIVERKSINOTJFUBEFUULFTHBPAPYSEY");
    msg.plan_id.assign("TFPCNNIGTCIANQCSKYBVJUBUDESCIDB");
    msg.description.assign("WPYQBMDLDPGHKOYIPTUWTRIGVKFRPHBQAKLPSEN");
    msg.reference_frame = 43U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 59693U;
    tmp_msg_0.off_x = 0.8921778418069929;
    tmp_msg_0.off_y = 0.8435469984477671;
    tmp_msg_0.off_z = 0.07386647755955544;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.7162195913473753;
    msg.leader_speed_min = 0.38683928077858654;
    msg.leader_speed_max = 0.2414893366625307;
    msg.leader_alt_min = 0.34049781592763295;
    msg.leader_alt_max = 0.5475576263326343;
    msg.pos_sim_err_lim = 0.2909824004192779;
    msg.pos_sim_err_wrn = 0.9671860739196575;
    msg.pos_sim_err_timeout = 30139U;
    msg.converg_max = 0.27100311363463214;
    msg.converg_timeout = 250U;
    msg.comms_timeout = 10116U;
    msg.turb_lim = 0.2958930802769817;
    msg.custom.assign("WIDXCTEBMKGDSCMIFSYMHFFMVBHGXISEZCRPUYIFMWBLTIDNUOVGKNQDLYZTGPEAPFLJLLDBYOYOZBMUIJOPNJHKARTDEEHXJRSGXYIEAHZPDAOEJAXGZVDVHTXBBWUAJEDTFNATVSQASTJJCKLLWXQCCUUGSTKSKMZVFRQKUQBGZVRDWXEXFF");

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
    msg.setTimeStamp(0.5469980117188775);
    msg.setSource(59486U);
    msg.setSourceEntity(27U);
    msg.setDestination(21101U);
    msg.setDestinationEntity(66U);
    msg.formation_name.assign("LYFQANRQHFXRTMFTWOWPEUVSRDKTICWETVABFOAMOFXCOEDQLQCNAKIIVHEBTVAZYRYOFNMUGTPXNRZTPUVXQLUQFSZTCSIHDWIYNBGVJINUUWDHRWQKIGJFKEYWOMYMMDSHJGONAPUAIMPIKJDGGCBFBJXWUQNQZKOLGACRRUKLPZLFBZXBKZVCZDSHHHOVEJXLWAJRXEDSGJMYYWZBSXTZUMPCLPILSECDYMEPBPQTGNVAJSKLRHBYV");
    msg.type = 244U;
    msg.op = 182U;
    msg.group_name.assign("VKRSWYCVPUBQDDWQZEAUZRSNIEJKJEKRSKBNAYDQNVUJNPBOMJLLWTEIANCXTCPDNEXGLSNOUGRQHMTXEHYEOXOHAKXIZGPVALBFCNVQXFRDWQYOQQWZOYIJWHRRBIIDVEBDDDILLFSSBXBVPGAUUMYITTAVPFMU");
    msg.plan_id.assign("ELIXRVLUJRKQPIJMNZNHHUBRBCPFLAMFUGZQTHRNYIMZVQNDTETCBXZGNEFSLNMKIDMBZUYGCAIQBDJYSEIVDOCLXZKOPTJDCTKGDYQZKQAQMLYDFLGVMWEZKGNGVIGVNSTXQYCETGMBTDFORREPWAKSRWJHH");
    msg.description.assign("ASZPMOGGAPMIBPUVXXRTGKEBQLWRMBEKOCNVBIHYRDHLCSNRASCBPWXTYJXHGJEKRXOXQKUYZNJTYWMVDFLWAGWAJHBUNCURJCJKGCFF");
    msg.reference_frame = 53U;
    msg.leader_bank_lim = 0.4622247048791889;
    msg.leader_speed_min = 0.8476472818047462;
    msg.leader_speed_max = 0.856483050686488;
    msg.leader_alt_min = 0.6959363212000522;
    msg.leader_alt_max = 0.36217365005408675;
    msg.pos_sim_err_lim = 0.8265690252056228;
    msg.pos_sim_err_wrn = 0.8165623862899193;
    msg.pos_sim_err_timeout = 47207U;
    msg.converg_max = 0.02545666689256676;
    msg.converg_timeout = 962U;
    msg.comms_timeout = 41216U;
    msg.turb_lim = 0.1598424671275216;
    msg.custom.assign("BCSJAIPXVPTLDZTSZBKTHOTPETFXPMPTSMDFVGSHOAMKRWCOJYEEKRRTSRGGCMDKMFYVYAGSYWMQJFBRPCIKTRHFOBWIZJKUKBGAGULUNEKWLLXCCAXNDZZFPZUXDMEDHRCKJQXIYDZCPOGVCAHFUAH");

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
    msg.setTimeStamp(0.05671589313022052);
    msg.setSource(42971U);
    msg.setSourceEntity(225U);
    msg.setDestination(42559U);
    msg.setDestinationEntity(126U);
    msg.formation_name.assign("NHVUHFPBYFAMLCRHKWRBTYQZITYYSSXXTRJGNZDUUIEJOMDWZGVTAHEN");
    msg.type = 82U;
    msg.op = 137U;
    msg.group_name.assign("OYYLGJAXXXOXSFSMJLVRENIUMYJUAAFIDNEBKUHHRRJVTZYKPBTBBTAGJPHEQSMWMXMSKPNZONTYJVPFBVMGROOMCKPVXKICKSIWSUHWZWEGCDDZFBCEHIYKYRLTLMBLUGAJHYADCISUKOZQFTMVJQQDQVDCWQJEFZYCXMPHFKFGLWZRNLNUUZHHSDTAQWYDUCHIEXKORBFXL");
    msg.plan_id.assign("EFVFSDYQOOCDETOVWDJVYYRO");
    msg.description.assign("KCWWXEORNCICGZZHUNHVULDQVGDFUCAPDVCIUVAOMWOFTIXZVHFJAARGKMRVNEDYUPNTJMRYDWIMBLXTPQSWKYBYYNCRSWQLSDPGHQOKQGAXMTAYEFLKFMSRZGEKKTMODAWCB");
    msg.reference_frame = 224U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 3969U;
    tmp_msg_0.off_x = 0.6421041099817986;
    tmp_msg_0.off_y = 0.6666375663126388;
    tmp_msg_0.off_z = 0.3260463998700799;
    msg.participants.push_back(tmp_msg_0);
    msg.leader_bank_lim = 0.7855035452331021;
    msg.leader_speed_min = 0.29918543459007574;
    msg.leader_speed_max = 0.5453976094109163;
    msg.leader_alt_min = 0.21026296944702672;
    msg.leader_alt_max = 0.7761766039616436;
    msg.pos_sim_err_lim = 0.9358498746284257;
    msg.pos_sim_err_wrn = 0.12148992855486207;
    msg.pos_sim_err_timeout = 11336U;
    msg.converg_max = 0.9850037723790017;
    msg.converg_timeout = 25391U;
    msg.comms_timeout = 34649U;
    msg.turb_lim = 0.020344533399680453;
    msg.custom.assign("KSDRHLJLEYOIGNVVXOPCKZUSCSEYKEYGHAUIUBGXQRVXLCZGPHTHAFDHKZDMFQWFHLHESDLANZOWVNSRUAIMLYYQPJRKNETZOTCCRMDIDYTOUIZQVQISBEXIRHDPATJXUXKWYQAGJPYPJOTNBXYBVZVKBYJOUAGMIKASTBWJOWMNVPQFJLHLRUJJMAVWEGGFVZFBNWEDQPRWOELFUBGX");

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
    msg.setTimeStamp(0.15991584450765373);
    msg.setSource(62960U);
    msg.setSourceEntity(22U);
    msg.setDestination(53175U);
    msg.setDestinationEntity(84U);
    msg.timeout = 38692U;
    msg.lat = 0.7762887000694636;
    msg.lon = 0.4138670223259109;
    msg.z = 0.42628854014527273;
    msg.z_units = 211U;
    msg.speed = 0.5801501218945623;
    msg.speed_units = 122U;
    msg.custom.assign("JALKJMKSZEEJPBQIVDNRFGBZFHWKSLLVDCDXNMNYFQUBBUFYPDGXTNZUSXGWPLAYBNYTXPXJXCMUVPRUGTIYXKHYLJJTQVZELGGQDTLTMRDQEAIBMRCQSTPDSBFMI");

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
    msg.setTimeStamp(0.5848888448979227);
    msg.setSource(32433U);
    msg.setSourceEntity(252U);
    msg.setDestination(10661U);
    msg.setDestinationEntity(16U);
    msg.timeout = 16644U;
    msg.lat = 0.16964527730488166;
    msg.lon = 0.31433451600610207;
    msg.z = 0.18854172817017512;
    msg.z_units = 144U;
    msg.speed = 0.35621781626717186;
    msg.speed_units = 186U;
    msg.custom.assign("OPVZIDZERSSURKZIMEUMOGJHDHLQLFLFJTPNQMUOBIOMNBQLBYSA");

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
    msg.setTimeStamp(0.7394080181237781);
    msg.setSource(41376U);
    msg.setSourceEntity(220U);
    msg.setDestination(1415U);
    msg.setDestinationEntity(17U);
    msg.timeout = 12671U;
    msg.lat = 0.5559671212426707;
    msg.lon = 0.9576107668172561;
    msg.z = 0.09185300309051425;
    msg.z_units = 163U;
    msg.speed = 0.7247209697291931;
    msg.speed_units = 7U;
    msg.custom.assign("DQJBSNRHJRTYJVQVMHHUKGZXUONEHMYBKHJTPMJEZUCVOWULGDHTKSRTBUYPOLFHGQFQODIVLGKLFWMJEGDGWQLICPPQZVLFSWXKTTEBXVBCEPKGCWVAZVLGUWCCJIQMQFSRFNEHFBFSYYAMDQDCMMZSAJTBXRMJXLCXRNOOANIKBAUKXEWPTTOCFBJAOXZANHXNZKRIYPWPICURQENNVUYGKDSYSTDAWIVEGPSAAYIXUZ");

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
    msg.setTimeStamp(0.7445336543594078);
    msg.setSource(62296U);
    msg.setSourceEntity(121U);
    msg.setDestination(23868U);
    msg.setDestinationEntity(0U);
    msg.timeout = 22401U;
    msg.lat = 0.9611107312485231;
    msg.lon = 0.1262935957403103;
    msg.z = 0.3780232653777025;
    msg.z_units = 217U;
    msg.speed = 0.7491835185338813;
    msg.speed_units = 121U;
    msg.custom.assign("PKQUDPQJAITFUSVCYMQZHNWBXUQHOKGBAZRMVIEGJFMGFIDXZUCTBYVFZQWCLIRFTICRMNUHHKTW");

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
    msg.setTimeStamp(0.918694883526622);
    msg.setSource(12057U);
    msg.setSourceEntity(229U);
    msg.setDestination(21357U);
    msg.setDestinationEntity(188U);
    msg.timeout = 13287U;
    msg.lat = 0.35013503551437475;
    msg.lon = 0.26695154348675987;
    msg.z = 0.8377252267113212;
    msg.z_units = 179U;
    msg.speed = 0.8833687498146131;
    msg.speed_units = 1U;
    msg.custom.assign("RBILXRAWAOLZBFPVWHJSAHMTCNQCGNWHBAYIUQWPBSXTXMOVNZDBZWBLXKZWRYAWGAPETGKTUOFDALOXGSXPIEGHGEKPROSUVCYQCRLXYRMUQUYFLJCMATJMVTDEGIQSIPUZENQHTENPZKHRZIGHDTSHPFVJJCKXILJVNZQKYECRSJNFKLISTBUCFGODLPVJBYIMNCRHMUQXYVLAUOFQBUCFIDDWOQWZMAKZKEDSNMJKOEFTJWXBY");

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
    msg.setTimeStamp(0.7857175609270071);
    msg.setSource(9343U);
    msg.setSourceEntity(170U);
    msg.setDestination(4797U);
    msg.setDestinationEntity(146U);
    msg.timeout = 39776U;
    msg.lat = 0.3960678198104035;
    msg.lon = 0.7289515272976198;
    msg.z = 0.9251869217753897;
    msg.z_units = 8U;
    msg.speed = 0.058125051333215993;
    msg.speed_units = 114U;
    msg.custom.assign("PMBABVNDTNATRQUSQMCRPSMGVSILUPETJTUAVWCTHEKYY");

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
    msg.setTimeStamp(0.6304525057805823);
    msg.setSource(20501U);
    msg.setSourceEntity(195U);
    msg.setDestination(52661U);
    msg.setDestinationEntity(208U);
    msg.arrival_time = 0.7829550374667745;
    msg.lat = 0.6709190954078899;
    msg.lon = 0.46698113370315764;
    msg.z = 0.10620402181890576;
    msg.z_units = 129U;
    msg.travel_z = 0.7056112053684938;
    msg.travel_z_units = 18U;
    msg.delayed = 86U;

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
    msg.setTimeStamp(0.9603089508269406);
    msg.setSource(32098U);
    msg.setSourceEntity(218U);
    msg.setDestination(23472U);
    msg.setDestinationEntity(152U);
    msg.arrival_time = 0.34054333226487377;
    msg.lat = 0.9405516984373623;
    msg.lon = 0.9530264301140908;
    msg.z = 0.1284920338298574;
    msg.z_units = 204U;
    msg.travel_z = 0.336471704371894;
    msg.travel_z_units = 98U;
    msg.delayed = 153U;

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
    msg.setTimeStamp(0.23196908694702623);
    msg.setSource(38003U);
    msg.setSourceEntity(221U);
    msg.setDestination(20516U);
    msg.setDestinationEntity(35U);
    msg.arrival_time = 0.24496296517674243;
    msg.lat = 0.6283410912930091;
    msg.lon = 0.872529422699305;
    msg.z = 0.8884329904359582;
    msg.z_units = 115U;
    msg.travel_z = 0.29162504608052897;
    msg.travel_z_units = 151U;
    msg.delayed = 106U;

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
    msg.setTimeStamp(0.3062240403780948);
    msg.setSource(41709U);
    msg.setSourceEntity(111U);
    msg.setDestination(12379U);
    msg.setDestinationEntity(233U);
    msg.lat = 0.6356519669272283;
    msg.lon = 0.22693460858736758;
    msg.z = 0.7508735314633918;
    msg.z_units = 204U;
    msg.speed = 0.5288287636627728;
    msg.speed_units = 203U;
    msg.bearing = 0.38750970428503373;
    msg.cross_angle = 0.10457695088429209;
    msg.width = 0.2138579393936969;
    msg.length = 0.49154878187685747;
    msg.coff = 191U;
    msg.angaperture = 0.4566547194091177;
    msg.range = 34458U;
    msg.overlap = 139U;
    msg.flags = 41U;
    msg.custom.assign("EQYDBTAMVOQRBTLRGILMKZWGHIZWDQAPHVBKAPXELVMHXKTUSGYTBSESZOIEQPVSVPAMRYWIVHJFHNCVWANUSMXINYLJNKQTZOMTSDQPKJJVDYSBFIXRMQEFVZUOFNEWMTWRECJCCBMHFKQLLELOUZPIJIZNAWFWDYUOIXIFOCBJCOZGDODZPSOHGXSRNU");

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
    msg.setTimeStamp(0.5629950710730578);
    msg.setSource(13387U);
    msg.setSourceEntity(98U);
    msg.setDestination(49320U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.9282141971906066;
    msg.lon = 0.6922995292871422;
    msg.z = 0.10781806600569421;
    msg.z_units = 246U;
    msg.speed = 0.49660950953483207;
    msg.speed_units = 119U;
    msg.bearing = 0.0046280619725569405;
    msg.cross_angle = 0.6788474966349545;
    msg.width = 0.22191035488667066;
    msg.length = 0.7742335247820702;
    msg.coff = 236U;
    msg.angaperture = 0.5891642524060416;
    msg.range = 1108U;
    msg.overlap = 48U;
    msg.flags = 201U;
    msg.custom.assign("CSEZJNYCHRAWSDHGNQYRPAWIOANORBMQTYKBYFADPAGOEXYKIVFBSXTDMZXHKO");

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
    msg.setTimeStamp(0.8597470792010214);
    msg.setSource(16580U);
    msg.setSourceEntity(169U);
    msg.setDestination(57295U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.5172945131343296;
    msg.lon = 0.39252935548659973;
    msg.z = 0.8401523599312247;
    msg.z_units = 196U;
    msg.speed = 0.3635235355507095;
    msg.speed_units = 114U;
    msg.bearing = 0.2722964328965767;
    msg.cross_angle = 0.11560968169342811;
    msg.width = 0.0866944855504197;
    msg.length = 0.10686002700638875;
    msg.coff = 168U;
    msg.angaperture = 0.24009489687425378;
    msg.range = 23649U;
    msg.overlap = 192U;
    msg.flags = 26U;
    msg.custom.assign("LXSFMOAPNRUFLVGIEWMTRYCCIDQUJIIQMLTRJKUOMWPYLQCZYXFDNDVVMBYOZZBSOMOGXVKXJWBWLRJXYXG");

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
    msg.setTimeStamp(0.20833551554112084);
    msg.setSource(5840U);
    msg.setSourceEntity(117U);
    msg.setDestination(25079U);
    msg.setDestinationEntity(95U);
    msg.timeout = 29713U;
    msg.lat = 0.6562803173225081;
    msg.lon = 0.558707684166455;
    msg.z = 0.8876254484040549;
    msg.z_units = 86U;
    msg.speed = 0.798119297936751;
    msg.speed_units = 185U;
    msg.syringe0 = 152U;
    msg.syringe1 = 175U;
    msg.syringe2 = 171U;
    msg.custom.assign("WSKZGUMKUBNRISQYJCPALOYHRYIWJTGLZTIMJLBDFDBVXJZOXMNXLAOYDIAFAAXZVWSJBMQVDNUXVRRWSCVTPBUFVPMKIAZXGHOCYKVERKIFMSOCGNLEQSZCUAHGLEOQEPNMJQTMJBLZQPYGPBMRHFSPSHYFLYFNEVBJPTCFQXRNFYDXKTQHTTACCZEIGLXQSTEWZORAFVWUNXPNEOR");

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
    msg.setTimeStamp(0.23292472077988435);
    msg.setSource(29828U);
    msg.setSourceEntity(22U);
    msg.setDestination(3588U);
    msg.setDestinationEntity(76U);
    msg.timeout = 30570U;
    msg.lat = 0.2401728046635182;
    msg.lon = 0.9254336999729934;
    msg.z = 0.29282886705663835;
    msg.z_units = 79U;
    msg.speed = 0.368185662795127;
    msg.speed_units = 179U;
    msg.syringe0 = 4U;
    msg.syringe1 = 11U;
    msg.syringe2 = 187U;
    msg.custom.assign("IXCQHZMCZLNJ");

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
    msg.setTimeStamp(0.44000032201176087);
    msg.setSource(55247U);
    msg.setSourceEntity(160U);
    msg.setDestination(35487U);
    msg.setDestinationEntity(94U);
    msg.timeout = 25082U;
    msg.lat = 0.30748356504958596;
    msg.lon = 0.9853874034533356;
    msg.z = 0.9862461220658353;
    msg.z_units = 21U;
    msg.speed = 0.8112161577755587;
    msg.speed_units = 228U;
    msg.syringe0 = 114U;
    msg.syringe1 = 8U;
    msg.syringe2 = 230U;
    msg.custom.assign("BEXLXADQEGHUANVKEXPTCNOKKQIOOMULPLLYMZHEJSWNOAVBCIFTWQRPHYRSWGNPDYYVDSSORQHZSZIWMPLYBUAMXUJOCYYCTCCMVARIKRBAHIZEF");

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
    msg.setTimeStamp(0.05375154949021499);
    msg.setSource(27643U);
    msg.setSourceEntity(88U);
    msg.setDestination(50228U);
    msg.setDestinationEntity(115U);

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
    msg.setTimeStamp(0.8501109332710666);
    msg.setSource(62956U);
    msg.setSourceEntity(98U);
    msg.setDestination(9691U);
    msg.setDestinationEntity(28U);

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
    msg.setTimeStamp(0.9531840118106533);
    msg.setSource(48433U);
    msg.setSourceEntity(55U);
    msg.setDestination(62505U);
    msg.setDestinationEntity(53U);

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
    msg.setTimeStamp(0.5127618652675487);
    msg.setSource(18197U);
    msg.setSourceEntity(9U);
    msg.setDestination(45215U);
    msg.setDestinationEntity(26U);
    msg.lat = 0.47043653927988827;
    msg.lon = 0.4647830071582163;
    msg.z = 0.1800185430851915;
    msg.z_units = 45U;
    msg.speed = 0.1502538236427312;
    msg.speed_units = 233U;
    msg.takeoff_pitch = 0.6180627202886497;
    msg.custom.assign("PDULQQVHBCFMKCDKBYJUQVJKNUYYFHSCPGFLYBFORTWPEGUGRJCBKSVJNKRHLHWEQAVFNTEMODOZUXZYXREZQLMBMSICWRZXSYMDLWDCWEFXGIPXWVWEVWSTZLSHHNCNLSJTRNVOJF");

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
    msg.setTimeStamp(0.3721650215075699);
    msg.setSource(34335U);
    msg.setSourceEntity(84U);
    msg.setDestination(64552U);
    msg.setDestinationEntity(62U);
    msg.lat = 0.9780410323610439;
    msg.lon = 0.9184200846118633;
    msg.z = 0.17951316745820733;
    msg.z_units = 77U;
    msg.speed = 0.16581288188627297;
    msg.speed_units = 230U;
    msg.takeoff_pitch = 0.68842136104211;
    msg.custom.assign("WRFTRGUNJAYKCLTHSBDRSTFCOFBDQXWFIHPMWGDCEBMTRSQNNGXPGKUSFYKHVZJVQLXPONDDAPNJEQXTHECDICZGLOASEXAPQTJZFINELAHUCUSMIBGWURUAOGOCVHCUEEFWRHJMKMWKBMIIYDVTVBWBPDZGYAMXCVVLOUJUZYFNTYNAYKLTRIQKQUIOVLZRSJFZJXPWIJGKHPDSVDKNMWTKCBLSHZAOEOQSNREMVIBQAYWOQ");

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
    msg.setTimeStamp(0.9505668318054415);
    msg.setSource(22211U);
    msg.setSourceEntity(218U);
    msg.setDestination(59185U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.784441798580959;
    msg.lon = 0.7309700248155095;
    msg.z = 0.6526308467577607;
    msg.z_units = 41U;
    msg.speed = 0.4393626332117281;
    msg.speed_units = 22U;
    msg.takeoff_pitch = 0.845557749584846;
    msg.custom.assign("ENAKRLHWFPPWOJSGWEUEDWCIPAUYGSFLFHNADFKOSCZRMPMOLTJNFXGSLAUHSQSIGVOOKVFZXVCLQGAXKJNCVINPJCOSRLHXPQFTURGBKNOHWRIZIZLULDEOKYWYVYTJGDCDPQSIDDBEQXZTNMNJWPQYBMIOJZMCJHHTFZTHVRMEWYVHTAINXQXEWYTODUQFABAVZUVNWARUMKBBMABGDYXDSCIRQZLMRIBU");

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
    msg.setTimeStamp(0.7529269941268458);
    msg.setSource(59175U);
    msg.setSourceEntity(52U);
    msg.setDestination(27097U);
    msg.setDestinationEntity(229U);
    msg.lat = 0.5491497451186369;
    msg.lon = 0.5083594616665508;
    msg.z = 0.4004745855808485;
    msg.z_units = 34U;
    msg.speed = 0.16593009780663925;
    msg.speed_units = 58U;
    msg.abort_z = 0.014652968781639908;
    msg.bearing = 0.8968375391760764;
    msg.glide_slope = 108U;
    msg.glide_slope_alt = 0.26849270752983234;
    msg.custom.assign("OLBORKBAZJMVUYADXCXXKWPGSPLOXMFUPRLCAKTGDPRJSCRMZIVIAJLJDTPRGNFWCZQUHDQUWLXSVIOFKWGBWMRNGQGZFNMBAYFWXDQQLVBPWZYHZSBNYCKOEIUNVEYECLKLSOAKEYNIMJMYTECHEOQHRKVVGINZACAZMBXPBPTDBJFHGGCHRFTIIZSUFYZOIHRJTOAKETSYWMPQSKXWLNNOHUHWSSUCJUDEQJUVLD");

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
    msg.setTimeStamp(0.2812317696947022);
    msg.setSource(1144U);
    msg.setSourceEntity(9U);
    msg.setDestination(62949U);
    msg.setDestinationEntity(69U);
    msg.lat = 0.6740500497222921;
    msg.lon = 0.4081285123536984;
    msg.z = 0.2599387826613978;
    msg.z_units = 153U;
    msg.speed = 0.7210531342154887;
    msg.speed_units = 146U;
    msg.abort_z = 0.28411943088331093;
    msg.bearing = 0.20394961224239794;
    msg.glide_slope = 28U;
    msg.glide_slope_alt = 0.5284588780241433;
    msg.custom.assign("PMVWIHCSIGIHIESQBAEHKZNXVIGWYARKRTBJVXIWAPUXKODQWEDTSVFVOEILHRDJSNBBDGUSBWQJEUOYQPOBGPLUTBTMXWSYUYXYNCXRMDRZZBPCTOKAQVIAGCQOATHLXSSUQNTRUZJFQLHUGLZUWKNPZDSROSCWCKRM");

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
    msg.setTimeStamp(0.6405156856939785);
    msg.setSource(9374U);
    msg.setSourceEntity(6U);
    msg.setDestination(62312U);
    msg.setDestinationEntity(42U);
    msg.lat = 0.005806727792144084;
    msg.lon = 0.9224658403929102;
    msg.z = 0.23621032720908008;
    msg.z_units = 218U;
    msg.speed = 0.7845965466381069;
    msg.speed_units = 7U;
    msg.abort_z = 0.20635501852398375;
    msg.bearing = 0.9286481288310054;
    msg.glide_slope = 212U;
    msg.glide_slope_alt = 0.6599266167221578;
    msg.custom.assign("ZJYVYMQFMJEKWGUKXOMIXCCHZLAVEFXQZSKBPVIUWXTNNYZFPTCMARTFVEUFBJKTRMPBLDPGPMRLVTGTDYZDXLRHXPSOGBCQNQRAHZUIJCWAHQMLMSP");

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
    msg.setTimeStamp(0.1895977009351002);
    msg.setSource(37424U);
    msg.setSourceEntity(0U);
    msg.setDestination(63697U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.6230708469134992;
    msg.lon = 0.6802253982253698;
    msg.speed = 0.049162336695925846;
    msg.speed_units = 99U;
    msg.limits = 224U;
    msg.max_depth = 0.41527961137786473;
    msg.min_alt = 0.5608429830193709;
    msg.time_limit = 0.027769908256983;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.8395938121245364;
    tmp_msg_0.lon = 0.9325459215184349;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("BCVSTJYZJMFNCBYNPOBFKGCCXQGTENNNZSEGKZJWTELIAUSYGQZWPRZOWKBDXICDMUHEKGSFCQJAZYSFVRHFSQFOZLENMMILPVOVPBGBJKMDGOEDXHJVLSWBQAHXRPFUYHCFVAMKUIJKBRLAWCRVMGITLETTQPGPADDCWDNAKZTOWXMCBFEXLUUXJGMFVJNNAIILOQSQXHTPOQOILKWHUTKNDXLY");
    msg.custom.assign("RXRGBSHWTOOQXVXJNDYAVKGQYOYPYFOISZUGAGCJTVLUCXMTAFSCLMSCFDFJKZSPVQTQGPJHPWUCMYDAYQEJIAZWXQDENCIYMNAVAUZOQDRVPDZOXJOEJECWQPTEVBBTZUGUPFMQAIMKYTVUIZT");

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
    msg.setTimeStamp(0.634863536738374);
    msg.setSource(59017U);
    msg.setSourceEntity(227U);
    msg.setDestination(29387U);
    msg.setDestinationEntity(176U);
    msg.lat = 0.6710271823139274;
    msg.lon = 0.6257587987948477;
    msg.speed = 0.16851938813675826;
    msg.speed_units = 84U;
    msg.limits = 198U;
    msg.max_depth = 0.13363589635017958;
    msg.min_alt = 0.5398912781088485;
    msg.time_limit = 0.9232933331495163;
    msg.controller.assign("NHPBLDPUZBIHQSXKICIUTTQJGMYVCXZVKHZQJTELSRNXYUBBZDHYCFQZTXSMPWQHZOGAHEC");
    msg.custom.assign("OEEFTZAETNJQMYXRVFVEZQ");

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
    msg.setTimeStamp(0.8259742492137822);
    msg.setSource(41612U);
    msg.setSourceEntity(187U);
    msg.setDestination(2826U);
    msg.setDestinationEntity(31U);
    msg.lat = 0.869365499896141;
    msg.lon = 0.9436392202211343;
    msg.speed = 0.29540627433280564;
    msg.speed_units = 94U;
    msg.limits = 240U;
    msg.max_depth = 0.5354590726933885;
    msg.min_alt = 0.05267038433437854;
    msg.time_limit = 0.2793569303405776;
    msg.controller.assign("HTCCUNZTJABXDLPRQYMMYKTPPYBIVOPRHUJFZTCXSDOUUKXPSWJRVNIMUQLGFMGTABVZRZQYGNUEBAESDPESZNXXGTTAOSGVAWNZPTQMKKUJJCLFCWNFWOOWXTSAMOEJ");
    msg.custom.assign("TEWSMTJNZHEIG");

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
    msg.setTimeStamp(0.019322073177971966);
    msg.setSource(1697U);
    msg.setSourceEntity(165U);
    msg.setDestination(14091U);
    msg.setDestinationEntity(27U);
    msg.target.assign("JLGLJEHAWEPZIXOMJCMBXKBKTISQHOWDRFHWOKIXCBUMMRTHFECOXYVCSNKRBOUVNKKQQQUYIIZLYQZFJBPAPGRLDETTDEW");
    msg.max_speed = 0.43205975636315397;
    msg.speed_units = 111U;
    msg.lat = 0.8252153429727699;
    msg.lon = 0.19668470826563456;
    msg.z = 0.8572118421829544;
    msg.z_units = 182U;
    msg.custom.assign("NXLVSZEEAHAHIWHZYKMMWPLDSVNCEXCWQQODKJQCQDDAVWAAGECNOWMRYHQNQZBPXUKRURPXNGSPEBKOYTDJDZZXHIXGSKICFFYMRISRWFKRBMCLHQTMVDULSCBEJIPUMWPLFAQTTYIWHGIMKHHVKYLGOOEGFPDABXXFURRANZLXUKPTJNTMJZDMXABCSOFVZB");

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
    msg.setTimeStamp(0.36734638965230115);
    msg.setSource(53670U);
    msg.setSourceEntity(126U);
    msg.setDestination(14117U);
    msg.setDestinationEntity(199U);
    msg.target.assign("WTGBFIVGCFBEAAMYAEWMEVPEHGUCSORVQRQCMRBSBOAKXUNAPFTIUXAXHTJRMABQPCMJBRIWIQVKGUBFSKLUWOHTTLFSHCPJPEJQEKJUZGOHNOWTXZZZHKNJUXOLZTVHDKIIPEVMMBZHGYOGWRSQNCLGDYWUAJBODEYIRYKODFMVLXPWWCD");
    msg.max_speed = 0.9157698137369487;
    msg.speed_units = 66U;
    msg.lat = 0.6678355670562275;
    msg.lon = 0.6631939097730212;
    msg.z = 0.7584397409374434;
    msg.z_units = 172U;
    msg.custom.assign("ABMOLDJBDFQUVBSJORRSPDVTBFQCNGKKVLGPJCOLKEUZHZCHEBKOIXHUZJGWBPSGPPEUMXUJCQITZABRUMOCAWUMJSWFYXTPLDFUHYGYNYYVFGCLEIZXBCQMRNEMSERXFRHKXMHWEJDNOTSYWDTEOROZNLGXWZZWKTBFITRACCXOJGWEDKHQZAIIKYLINDMKVQFHMUAQDXQIVLSTAIVVOPCGAQRS");

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
    msg.setTimeStamp(0.6307941546087691);
    msg.setSource(16226U);
    msg.setSourceEntity(180U);
    msg.setDestination(45267U);
    msg.setDestinationEntity(24U);
    msg.target.assign("TEIIRWSGWLKBYCVNHUIDPLGPXGIOUQSSYLGEHALQWORKENTUJHXDEKPAHMVYTPKGPTKVHCTAC");
    msg.max_speed = 0.3949250887256628;
    msg.speed_units = 43U;
    msg.lat = 0.3559570901224719;
    msg.lon = 0.43420451032744256;
    msg.z = 0.9141445046463708;
    msg.z_units = 228U;
    msg.custom.assign("PICKLOQVFACGFHEIJTXIDXAS");

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
    msg.setTimeStamp(0.18648549532691394);
    msg.setSource(22981U);
    msg.setSourceEntity(142U);
    msg.setDestination(18935U);
    msg.setDestinationEntity(202U);
    msg.timeout = 4082U;
    msg.lat = 0.2528853432573053;
    msg.lon = 0.9866493536971089;
    msg.speed = 0.05564589382024121;
    msg.speed_units = 149U;
    msg.custom.assign("ACKVLFSTSZWADVUIETCJTRZNBWRUNNGRREJBWMUXZYETGBOLSVDJVCAFYFJEQIUQBSYUPFRGHBAO");

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
    msg.setTimeStamp(0.838164252538059);
    msg.setSource(3541U);
    msg.setSourceEntity(108U);
    msg.setDestination(6127U);
    msg.setDestinationEntity(45U);
    msg.timeout = 56621U;
    msg.lat = 0.6706290395436793;
    msg.lon = 0.6127963941570728;
    msg.speed = 0.08860352190875409;
    msg.speed_units = 237U;
    msg.custom.assign("XMOCQHHSJGGFNBIACLSFKFOVNPGWQRYAKHTSQDMJAYFKJTSMCLFKDRTPIOPNQGOLRPIAGLVZYHWFCQCHRBXZNYEFABUIXTAEAXWMBPRDXXBONZDYNIM");

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
    msg.setTimeStamp(0.6503331284843386);
    msg.setSource(3609U);
    msg.setSourceEntity(251U);
    msg.setDestination(43804U);
    msg.setDestinationEntity(237U);
    msg.timeout = 7863U;
    msg.lat = 0.315081700804146;
    msg.lon = 0.8753357176060131;
    msg.speed = 0.4178186999972636;
    msg.speed_units = 58U;
    msg.custom.assign("TESQPREEGJXMHJGNOYINUSPKMVCSUEZZLNCKWAYPLLJFXVTCZOTFYXFTFJRINYWANCZDUUXTMCYGUZGJBWSCEPUFFGCLIDUQNWVPFQHFJIBSMHBOK");

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
    msg.setTimeStamp(0.44780737932720516);
    msg.setSource(63414U);
    msg.setSourceEntity(99U);
    msg.setDestination(6549U);
    msg.setDestinationEntity(103U);
    msg.lat = 0.5370768177869277;
    msg.lon = 0.9148629243781681;
    msg.z = 0.5746010696546536;
    msg.z_units = 136U;
    msg.radius = 0.6221050627893634;
    msg.duration = 29636U;
    msg.speed = 0.7581184223690509;
    msg.speed_units = 143U;
    msg.popup_period = 36787U;
    msg.popup_duration = 5175U;
    msg.flags = 101U;
    msg.custom.assign("TQBDVEJJCNVWSYRPEVCTBOYGHTCOWNLGXAAWSFUIUKJXLELHJFSRCZXB");

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
    msg.setTimeStamp(0.45169620145770784);
    msg.setSource(13985U);
    msg.setSourceEntity(207U);
    msg.setDestination(46717U);
    msg.setDestinationEntity(193U);
    msg.lat = 0.8965276774721641;
    msg.lon = 0.9445994487587753;
    msg.z = 0.6435307592628565;
    msg.z_units = 5U;
    msg.radius = 0.39486863722846943;
    msg.duration = 30694U;
    msg.speed = 0.107022280609393;
    msg.speed_units = 154U;
    msg.popup_period = 60789U;
    msg.popup_duration = 52551U;
    msg.flags = 149U;
    msg.custom.assign("HVXOVSLSXCLRPWNPYVHNKXBNMBWJXHIFGVTUUTTAMKFUHJCZOYSDRYXNDNRKZVLGDABWOCREMWBBAPTTCFDASTFMEGCJGIJDPEJGMWUFHEDQQZSHAJWILSPQKJDMRZQWHSMYTAAKRTBMYPICQOPFOAYLRMDLYCISEPIOWXBZFXGMOLGZCY");

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
    msg.setTimeStamp(0.12523686026497138);
    msg.setSource(56041U);
    msg.setSourceEntity(115U);
    msg.setDestination(40518U);
    msg.setDestinationEntity(208U);
    msg.lat = 0.946586951035409;
    msg.lon = 0.11742258097533675;
    msg.z = 0.7532110732692839;
    msg.z_units = 45U;
    msg.radius = 0.6060126879537264;
    msg.duration = 23275U;
    msg.speed = 0.3751763560399549;
    msg.speed_units = 80U;
    msg.popup_period = 34448U;
    msg.popup_duration = 38098U;
    msg.flags = 150U;
    msg.custom.assign("BZSCLWUJGVVUOWUUVOZYMUYZTWNYWBFMIDUJVEDNXGPWNWRLLIZHBRLKHFUPBCJPEBDESBFRVCCOGHDTNYMHXMSAKTMHVAVCYFMICHAKUBWYJIRJVCJMRASTZQPFGQKTKIXPFJKXBYWETOFJTUVWLQZLLQKOKCNGDIPVOXEEALZHFAAQOXSSPRTFXRSRGSBDIQZIHYENULGOSIXCKJQNGMMPDKA");

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
    msg.setTimeStamp(0.665622392435917);
    msg.setSource(48771U);
    msg.setSourceEntity(140U);
    msg.setDestination(4881U);
    msg.setDestinationEntity(86U);

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
    msg.setTimeStamp(0.8005016792334592);
    msg.setSource(21509U);
    msg.setSourceEntity(212U);
    msg.setDestination(54181U);
    msg.setDestinationEntity(19U);

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
    msg.setTimeStamp(0.6985586986173888);
    msg.setSource(27271U);
    msg.setSourceEntity(110U);
    msg.setDestination(20915U);
    msg.setDestinationEntity(239U);

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
    msg.setTimeStamp(0.3169365359129164);
    msg.setSource(57198U);
    msg.setSourceEntity(31U);
    msg.setDestination(55542U);
    msg.setDestinationEntity(0U);
    msg.timeout = 34375U;
    msg.lat = 0.6520224454318083;
    msg.lon = 0.24715699327852736;
    msg.z = 0.27695827411036344;
    msg.z_units = 80U;
    msg.speed = 0.047069966281416575;
    msg.speed_units = 173U;
    msg.bearing = 0.6757547905674034;
    msg.width = 0.012832421845542341;
    msg.direction = 103U;
    msg.custom.assign("UPOPGECWNAKZAYKLHZBONDWLGZILKBVRRBGRNWUYSOIUZLCQKCFIVXPVTRDGLOIWZDOPJHCUQIMRCBGHJY");

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
    msg.setTimeStamp(0.7290776124270443);
    msg.setSource(25979U);
    msg.setSourceEntity(39U);
    msg.setDestination(8317U);
    msg.setDestinationEntity(252U);
    msg.timeout = 18119U;
    msg.lat = 0.36984023604089067;
    msg.lon = 0.4917950024599731;
    msg.z = 0.7304580559293669;
    msg.z_units = 79U;
    msg.speed = 0.5931086276425697;
    msg.speed_units = 8U;
    msg.bearing = 0.13193698254076436;
    msg.width = 0.5208461139895786;
    msg.direction = 28U;
    msg.custom.assign("OCKIRIKMOGLRPQYTSOZNYQMHZUECAEUAWZYBFLCAXCEJMOSUFVSSOLXAAMSVZTIIBHTGCXKMFRWILOMXSKFZSNVYVNYVWDPERJZYTVBEDAGXLUBOQRGNAPMBGXZECPEHEJSLQDTPQPEZBYUIJLZGUIXCFJKWNBHWKAKKQEZVAFMSHGFGORKU");

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
    msg.setTimeStamp(0.43673758684334296);
    msg.setSource(1912U);
    msg.setSourceEntity(7U);
    msg.setDestination(37497U);
    msg.setDestinationEntity(62U);
    msg.timeout = 32017U;
    msg.lat = 0.8496615550227999;
    msg.lon = 0.6496555777150589;
    msg.z = 0.9097324438157116;
    msg.z_units = 120U;
    msg.speed = 0.021890571420220106;
    msg.speed_units = 88U;
    msg.bearing = 0.16198218519129703;
    msg.width = 0.9585764797493871;
    msg.direction = 90U;
    msg.custom.assign("QIXIWKDYYGOXJRDUHNIJDVEZACBPVATSZUYPPZTISZCQVXNLGWTHQKRIUIBANWEGKATHLNKNXEJUGXOWUJMNRVTZPRZHJPSAWRGCMPABLJSLLDNLNFYIBLFPQUYHMVWPSMLDRBATEYIQHUCYYGOBHCVMRWFTSVGEOMFQWVURFWISOKBBJHQDX");

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
    msg.setTimeStamp(0.0031599588996612527);
    msg.setSource(1945U);
    msg.setSourceEntity(78U);
    msg.setDestination(32773U);
    msg.setDestinationEntity(83U);
    msg.op_mode = 179U;
    msg.error_count = 116U;
    msg.error_ents.assign("PDRKPJNPPJTQPFYRYHMLXRRUVRBDMQTAFFDCSPRTUZWKWJSBFYKCQITZIGEIWUSUHTGCZWKSYJEGQYZBAJSQXVOYTXP");
    msg.maneuver_type = 10405U;
    msg.maneuver_stime = 0.129180080295057;
    msg.maneuver_eta = 6720U;
    msg.control_loops = 1589468445U;
    msg.flags = 39U;
    msg.last_error.assign("JUZYUZGADKAGBIPUCMPZPJYCKUMEFEPCKPTNMGTRVTAZDICWTZJBXMRCYQAYYBTMZJHHWDHQAONFJXCRWEDDTVNLNGKIORJQEYXW");
    msg.last_error_time = 0.08453603223048145;

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
    msg.setTimeStamp(0.18240227128127484);
    msg.setSource(63244U);
    msg.setSourceEntity(5U);
    msg.setDestination(6300U);
    msg.setDestinationEntity(46U);
    msg.op_mode = 152U;
    msg.error_count = 241U;
    msg.error_ents.assign("BTUYKXRFRATQQBVEISHEJCEQIMDIXRJZNFPRAOAUARXWFLBZAQCBCNIGJIAGTKFODGNSBAZJNXBLTLGQHYGHEKDDRMMXMSLZFBGWRYDMPNMLOBTSHWGXHPVCHHIVULWPHTJKOOJYMOVCNYWNTSCSWUXKZJEZSGFZWVMPNFIZJJLOWPCQEOZHDQIBUVLAYXXPSOLDQJLOYVQIYGADPUEKETNTMSPVWZRAQSUB");
    msg.maneuver_type = 50150U;
    msg.maneuver_stime = 0.3103090441489037;
    msg.maneuver_eta = 57709U;
    msg.control_loops = 4130118195U;
    msg.flags = 87U;
    msg.last_error.assign("TFRZSWKSIVXCLJRYWWYGQBUDSZRGCZBXHKXXSEUPLONJLTWECHXSXUFYWFABKXGRRMDOYONLEOAUJZAMEUIXZMDVVBQZBBLHLQQDJUVNCDALUIJFEFHEUWCBHEMNRNFMLJIIEZSWAFFQWTNJYMGCHRNPGPYOCCVH");
    msg.last_error_time = 0.6997126530846249;

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
    msg.setTimeStamp(0.19499778841189586);
    msg.setSource(50414U);
    msg.setSourceEntity(119U);
    msg.setDestination(7685U);
    msg.setDestinationEntity(235U);
    msg.op_mode = 28U;
    msg.error_count = 61U;
    msg.error_ents.assign("KDAQGUDMSEPVUOYBWAZRJEIXMORRYYAWVUXRKQBFNWMIILVXCKXFJNA");
    msg.maneuver_type = 41802U;
    msg.maneuver_stime = 0.3153341252757331;
    msg.maneuver_eta = 27235U;
    msg.control_loops = 1534014422U;
    msg.flags = 57U;
    msg.last_error.assign("YYRIDQCMSFMJUHUBBYAEBPLXKPUAYORIJEBXBTSXOEGPTSDZGRXBNEAFIEXZTZXXNHTVSQOHLYCCOAIRNPFUCWDTWUQGLWHPWDZQSMNLNOHUVKNAQKFNDMDGRHPWGJQWIOANHWFYTGQARMLVYIJQABIHXAIEVOHKTMSDKQRLXJNTFMPDYWBHJCBTEKRXJPJOFCAVYNWRJDLOCZVMIVEGULTCVPSMOCJDEZY");
    msg.last_error_time = 0.537779151694216;

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
    msg.setTimeStamp(0.1131910768199268);
    msg.setSource(42302U);
    msg.setSourceEntity(22U);
    msg.setDestination(15211U);
    msg.setDestinationEntity(99U);
    msg.type = 231U;
    msg.request_id = 45164U;
    msg.command = 24U;
    IMC::Goto tmp_msg_0;
    tmp_msg_0.timeout = 29322U;
    tmp_msg_0.lat = 0.10333044808703473;
    tmp_msg_0.lon = 0.011269013849872556;
    tmp_msg_0.z = 0.8439557607559989;
    tmp_msg_0.z_units = 230U;
    tmp_msg_0.speed = 0.9261299863317645;
    tmp_msg_0.speed_units = 208U;
    tmp_msg_0.roll = 0.35460828543030565;
    tmp_msg_0.pitch = 0.9163793550428433;
    tmp_msg_0.yaw = 0.168141201202745;
    tmp_msg_0.custom.assign("DZIBWDBIHLSZXKRZIOLLEJHFHNVEGZY");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 63858U;
    msg.info.assign("UFRCLIEHUKXTDUYKUUTKWIAPZBSAONOKKRASJNXZVNFQVRKZZDYFLMYLDHBAAQIY");

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
    msg.setTimeStamp(0.828982588575379);
    msg.setSource(14014U);
    msg.setSourceEntity(228U);
    msg.setDestination(56865U);
    msg.setDestinationEntity(81U);
    msg.type = 209U;
    msg.request_id = 10426U;
    msg.command = 34U;
    IMC::Land tmp_msg_0;
    tmp_msg_0.lat = 0.5880201749915888;
    tmp_msg_0.lon = 0.6804311865553619;
    tmp_msg_0.z = 0.20298654080813383;
    tmp_msg_0.z_units = 232U;
    tmp_msg_0.speed = 0.5843836055722567;
    tmp_msg_0.speed_units = 62U;
    tmp_msg_0.abort_z = 0.28586376999823104;
    tmp_msg_0.bearing = 0.01819193772710148;
    tmp_msg_0.glide_slope = 42U;
    tmp_msg_0.glide_slope_alt = 0.8656351326653947;
    tmp_msg_0.custom.assign("UOOPNQRUUJPJQEWFHWBPEPOMWDINKJOLJIADGXBGVNGVYRNZXCATPPWYTOTJADHPAVSFFDZVKNICEC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 55901U;
    msg.info.assign("QBDQTYVAZDPFCEFRJOCDORGKCLHKPPUTVFNWBDNSYEDOHAVMRTSKSRLQZYKKZIVPMHWIJGMHRZTLKJPIGMZQSWUTIQJFJDUBCGPWNTADUWBOCJP");

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
    msg.setTimeStamp(0.40153983627663437);
    msg.setSource(32305U);
    msg.setSourceEntity(101U);
    msg.setDestination(53041U);
    msg.setDestinationEntity(177U);
    msg.type = 40U;
    msg.request_id = 33300U;
    msg.command = 1U;
    IMC::Elevator tmp_msg_0;
    tmp_msg_0.timeout = 19307U;
    tmp_msg_0.flags = 139U;
    tmp_msg_0.lat = 0.8176912963227597;
    tmp_msg_0.lon = 0.661807277467142;
    tmp_msg_0.start_z = 0.37527722149727727;
    tmp_msg_0.start_z_units = 171U;
    tmp_msg_0.end_z = 0.1645162752268473;
    tmp_msg_0.end_z_units = 197U;
    tmp_msg_0.radius = 0.27509725301504984;
    tmp_msg_0.speed = 0.8246883323147781;
    tmp_msg_0.speed_units = 6U;
    tmp_msg_0.custom.assign("MWICHKSESFOYJRQGKGVOJGVCBRWOEPV");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 52145U;
    msg.info.assign("HQVZECSCZVSFYTVTZGBADPWBHTNYVJEWFEOIAMHXUDRFPRXJJPLOHFAPOLBNERWPBVRSNCQNZUJKMZXJCFIPNHEQGQWXDQKQKLHYRJSHGGCXXNLUVKSAWKOSJTSTZUIKNXVOVKHBEFKRMHNEUGOQIYWFAIEAPNRTZVCMMJSUMMTWGAXJMYDTYZXLAHIKGSKBUDCZBMQWPDULIU");

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
    msg.setTimeStamp(0.8885093485229472);
    msg.setSource(17936U);
    msg.setSourceEntity(32U);
    msg.setDestination(56638U);
    msg.setDestinationEntity(145U);
    msg.command = 3U;
    msg.entities.assign("XZFQESCKKBAXBRKHKQYIKFOKSQVVWUSTMMWHMOOMBWYRLFWLUVPVVCGHNE");

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
    msg.setTimeStamp(0.7434549663128588);
    msg.setSource(55577U);
    msg.setSourceEntity(162U);
    msg.setDestination(49046U);
    msg.setDestinationEntity(99U);
    msg.command = 44U;
    msg.entities.assign("NCCUXVYCYAHIUJKVLIYJUMOEGTRWVSDULQIMRFAOPUXKSOZYMIDTYYQMONGAFPIYOITBXJARWRWSVJGDEJMCKTXIMDQNGI");

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
    msg.setTimeStamp(0.668358307201357);
    msg.setSource(5437U);
    msg.setSourceEntity(205U);
    msg.setDestination(57672U);
    msg.setDestinationEntity(184U);
    msg.command = 203U;
    msg.entities.assign("FBNRXLYILLHPFBITSAHAKGBDHMTIPGAOEJSOOZRZWQKFRVDXDCSJIPCMKNWBLEJXKDQKIKZIYSZLRJQBHEVHJTUUPXLZXCHEPUDOBUVINXGOUKMZKSLDCSWPINYDDOISQRAQNRLCCVAQSETVNSGVZEKYMAQURMMGETNFCXHWPVPUTBFI");

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
    msg.setTimeStamp(0.6998919100633487);
    msg.setSource(51516U);
    msg.setSourceEntity(22U);
    msg.setDestination(43801U);
    msg.setDestinationEntity(59U);
    msg.mcount = 94U;
    msg.mnames.assign("YNSCVNSFXJWUMZYZYIIDQZSGIFFRVTE");
    msg.ecount = 209U;
    msg.enames.assign("OXKPCVCRXJKHTLOGAHILWICSWTVOXMQEEARNRZCEUHU");
    msg.ccount = 175U;
    msg.cnames.assign("FFDQLWPXINHKIJHLIQOZEEWXOJAWPRVMUFSCYFNEYJNBCFMQGROBGEYXQWSYZQCQQLRKDAMYGXTZKNYRRIODMUODHHMWSSMTCAHVDTSEIVIGEPUSBEUIJNUDWLQIHPGZRKKGSFBVXBJCAHTAMVUFSOBKP");
    msg.last_error.assign("AUCXVOJMHRUBWVQRVOSYTPDJQEWRXSVQH");
    msg.last_error_time = 0.5913099935609878;

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
    msg.setTimeStamp(0.9348688084221923);
    msg.setSource(64765U);
    msg.setSourceEntity(131U);
    msg.setDestination(30914U);
    msg.setDestinationEntity(46U);
    msg.mcount = 248U;
    msg.mnames.assign("JZFUGECQYZWULZIJWZIYTWXHWRCMQSPYFNIDOOINEKVJQMTRCBBQZDKHQXNGYVMTGDHHFMSLJEGCPAEUMPADXUKDOCXNUFBAAFTLRBCDLAISBPUHOYJMVPJNXSNXHLDPDAVRNJIAZFDWBPGGSCEBCBDWZZKQSKVOYTWLBYGPHUUBNCOVFXTXGHUHIHESRCESRJRKTWRPFORZELVNKGJUKXOAFYQVYRJQXWZMQANKOYELFAVQLESLKMMVOI");
    msg.ecount = 111U;
    msg.enames.assign("QUUPWHAXTAZGWNVYXDGBRJVNWSEQE");
    msg.ccount = 25U;
    msg.cnames.assign("OQESFJPFON");
    msg.last_error.assign("SRNAVEIGWNXODXNWPJGSZIDKKMDUIMFUCAASOFVQYCHHQVJLETCMCQXPPQZRGRUTQRJGWWCVDHEFARNBQYEKNGTJSRERWAKLYMWYRSTTFKLWZSYLPXSLMEGYNURFSYHOSJQOFZUJCPXBGJITZQOWCKWVLNVRDYZIJYDHIMHMOAEVZBDITBUEQLMYDMFDGPXNMFNTLCAWJBKVBPLCBG");
    msg.last_error_time = 0.505185861738332;

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
    msg.setTimeStamp(0.18642181079300868);
    msg.setSource(61981U);
    msg.setSourceEntity(168U);
    msg.setDestination(35415U);
    msg.setDestinationEntity(100U);
    msg.mcount = 64U;
    msg.mnames.assign("JIEDXGXFROFERETBMSXTAPDQMQDOTBJCYSZCTBYQIGPWRVGHOIKJKPINVUMUEUGYMXHRCIHWAKCJDZVEBLDNWREYQEMJTNPADKLZNUDHOKSFHBNMWPBOVNJTBVGQGZAZHCTFFYWDVUZOLMOPEAWPASGJIUXHYFQ");
    msg.ecount = 223U;
    msg.enames.assign("ELNLDMFUJAWYSJKLTQWOBKDLIHXADRLTNNFNXOFIPIRZGKIRLGBEMOTAFPHRSZYHYOJFOMNMPWJTMCWXOWVZHREHQOYYBIIOGQGOPLPCNQXCZGARPCUKVZCDETKBZUAFDSKVPLHJABXWNM");
    msg.ccount = 235U;
    msg.cnames.assign("LFUHFSAJKIECAWGVZCILEOVZSENBFYLQSJBCAJQRNFQQUHWKLOHPFTQWCIGJNZKZEUEUMJZNARQKXTIRSMTMDOWGFGBMTCMMJXZVJYWWZPHTIHYBCSOLQIKKILDRZEHZRZBGDPXPFSBKPLTUWYOPCUCPRUKQGNAHXFYDJQYTBMHSOOYAGESIYDYOBN");
    msg.last_error.assign("COGWQREQHVOIXFGZTTDZHTRVSCENFTIQAZCSQZGMLUKNHJDKIFCDYCGUHKUDYXSNDWJNSHQMMKUYUJESJPTPLSRCEDFXJBJOMKTABYWIHVCXSDMXCMVZIGFVLTEEFAJEQAWYPXYPULWIPSXHNKOOQLBPHNPWRLOZAQNZQDYOPFVRWGL");
    msg.last_error_time = 0.8881854365135796;

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
    msg.setTimeStamp(0.851205192235759);
    msg.setSource(29079U);
    msg.setSourceEntity(197U);
    msg.setDestination(9144U);
    msg.setDestinationEntity(179U);
    msg.mask = 119U;
    msg.max_depth = 0.9503833929892345;
    msg.min_altitude = 0.7944646075663417;
    msg.max_altitude = 0.9676209121615191;
    msg.min_speed = 0.6901100390998824;
    msg.max_speed = 0.7547991565405274;
    msg.max_vrate = 0.345081842272835;
    msg.lat = 0.8993466244554381;
    msg.lon = 0.9938997410822926;
    msg.orientation = 0.26361925080494053;
    msg.width = 0.3595361629164502;
    msg.length = 0.28534478799076557;

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
    msg.setTimeStamp(0.982349383534819);
    msg.setSource(47171U);
    msg.setSourceEntity(222U);
    msg.setDestination(64920U);
    msg.setDestinationEntity(213U);
    msg.mask = 225U;
    msg.max_depth = 0.14869050080813406;
    msg.min_altitude = 0.5754686408218622;
    msg.max_altitude = 0.07729167215851551;
    msg.min_speed = 0.05900057245645407;
    msg.max_speed = 0.2796708468632255;
    msg.max_vrate = 0.6921094641231343;
    msg.lat = 0.16194510017907005;
    msg.lon = 0.6415206449840564;
    msg.orientation = 0.33397545938673046;
    msg.width = 0.04413447206204746;
    msg.length = 0.8097278264768148;

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
    msg.setTimeStamp(0.8461790813526018);
    msg.setSource(10474U);
    msg.setSourceEntity(89U);
    msg.setDestination(11448U);
    msg.setDestinationEntity(143U);
    msg.mask = 202U;
    msg.max_depth = 0.6639055075127853;
    msg.min_altitude = 0.6983900246236354;
    msg.max_altitude = 0.5079051800273152;
    msg.min_speed = 0.29990416558202615;
    msg.max_speed = 0.4000330995480005;
    msg.max_vrate = 0.43018420296707793;
    msg.lat = 0.6466687658095307;
    msg.lon = 0.269915971919201;
    msg.orientation = 0.3371098400642658;
    msg.width = 0.4160812691204242;
    msg.length = 0.7510905291730333;

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
    msg.setTimeStamp(0.9879665150897109);
    msg.setSource(22121U);
    msg.setSourceEntity(112U);
    msg.setDestination(13969U);
    msg.setDestinationEntity(143U);

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
    msg.setTimeStamp(0.8097700375940289);
    msg.setSource(31358U);
    msg.setSourceEntity(168U);
    msg.setDestination(53691U);
    msg.setDestinationEntity(181U);

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
    msg.setTimeStamp(0.15832380172380134);
    msg.setSource(44557U);
    msg.setSourceEntity(136U);
    msg.setDestination(22607U);
    msg.setDestinationEntity(199U);

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
    msg.setTimeStamp(0.13760755192012142);
    msg.setSource(13619U);
    msg.setSourceEntity(214U);
    msg.setDestination(145U);
    msg.setDestinationEntity(88U);
    msg.duration = 1023U;

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
    msg.setTimeStamp(0.2523883681053015);
    msg.setSource(60283U);
    msg.setSourceEntity(99U);
    msg.setDestination(9828U);
    msg.setDestinationEntity(145U);
    msg.duration = 37711U;

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
    msg.setTimeStamp(0.6076328134140004);
    msg.setSource(7841U);
    msg.setSourceEntity(120U);
    msg.setDestination(6543U);
    msg.setDestinationEntity(97U);
    msg.duration = 42452U;

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
    msg.setTimeStamp(0.7099478010793296);
    msg.setSource(34950U);
    msg.setSourceEntity(94U);
    msg.setDestination(9993U);
    msg.setDestinationEntity(151U);
    msg.enable = 232U;
    msg.mask = 222018554U;
    msg.scope_ref = 3911254186U;

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
    msg.setTimeStamp(0.1461418596177051);
    msg.setSource(15120U);
    msg.setSourceEntity(110U);
    msg.setDestination(499U);
    msg.setDestinationEntity(63U);
    msg.enable = 58U;
    msg.mask = 2623241419U;
    msg.scope_ref = 1107331104U;

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
    msg.setTimeStamp(0.9124159380939434);
    msg.setSource(52646U);
    msg.setSourceEntity(202U);
    msg.setDestination(2932U);
    msg.setDestinationEntity(120U);
    msg.enable = 242U;
    msg.mask = 983448404U;
    msg.scope_ref = 2996537315U;

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
    msg.setTimeStamp(0.6445797897096145);
    msg.setSource(23283U);
    msg.setSourceEntity(190U);
    msg.setDestination(10330U);
    msg.setDestinationEntity(89U);
    msg.medium = 207U;

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
    msg.setTimeStamp(0.9923273531889332);
    msg.setSource(1769U);
    msg.setSourceEntity(124U);
    msg.setDestination(57596U);
    msg.setDestinationEntity(254U);
    msg.medium = 187U;

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
    msg.setTimeStamp(0.17825486069007812);
    msg.setSource(37930U);
    msg.setSourceEntity(135U);
    msg.setDestination(3559U);
    msg.setDestinationEntity(54U);
    msg.medium = 210U;

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
    msg.setTimeStamp(0.6914401991856274);
    msg.setSource(62745U);
    msg.setSourceEntity(14U);
    msg.setDestination(15807U);
    msg.setDestinationEntity(119U);
    msg.value = 0.3352687188445693;
    msg.type = 185U;

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
    msg.setTimeStamp(0.7829147462836403);
    msg.setSource(15239U);
    msg.setSourceEntity(41U);
    msg.setDestination(51439U);
    msg.setDestinationEntity(46U);
    msg.value = 0.06433558541303686;
    msg.type = 14U;

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
    msg.setTimeStamp(0.7371337821079234);
    msg.setSource(2882U);
    msg.setSourceEntity(59U);
    msg.setDestination(49781U);
    msg.setDestinationEntity(54U);
    msg.value = 0.9431817921911778;
    msg.type = 240U;

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
    msg.setTimeStamp(0.4996208106780321);
    msg.setSource(4269U);
    msg.setSourceEntity(139U);
    msg.setDestination(36741U);
    msg.setDestinationEntity(131U);
    msg.possimerr = 0.8870267852709598;
    msg.converg = 0.9078495741710815;
    msg.turbulence = 0.47224019358687386;
    msg.possimmon = 156U;
    msg.commmon = 215U;
    msg.convergmon = 160U;

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
    msg.setTimeStamp(0.8631180958356509);
    msg.setSource(32703U);
    msg.setSourceEntity(162U);
    msg.setDestination(39363U);
    msg.setDestinationEntity(123U);
    msg.possimerr = 0.05945234488732043;
    msg.converg = 0.7711901874402576;
    msg.turbulence = 0.9654492135916706;
    msg.possimmon = 7U;
    msg.commmon = 174U;
    msg.convergmon = 69U;

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
    msg.setTimeStamp(0.43638682984973576);
    msg.setSource(62346U);
    msg.setSourceEntity(65U);
    msg.setDestination(23087U);
    msg.setDestinationEntity(107U);
    msg.possimerr = 0.010379404261583014;
    msg.converg = 0.18750797131000962;
    msg.turbulence = 0.579012280995231;
    msg.possimmon = 84U;
    msg.commmon = 93U;
    msg.convergmon = 70U;

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
    msg.setTimeStamp(0.9670100805910046);
    msg.setSource(44481U);
    msg.setSourceEntity(148U);
    msg.setDestination(48104U);
    msg.setDestinationEntity(25U);
    msg.autonomy = 161U;
    msg.mode.assign("YZSWKLVSYFCBVCSDBQHNVXEWNWYYKCSFRMBELBVFANWUWEZXFWNHDRSTMONDVPPDAVHTCGDMUEJXUORGOZKRKQQLIJXFZCWZVPCOGYUIHTUQITGIFFTMNRBBZBELJLATFUQJPXOHMMPMPKXPNLJKEJMBADZYYOOHSQRZIXAASRTOSNCNGJXZYWFQJKHXQNDJKEULPDOIGXIKTECRYMRKSIUMAQLYCGEUAWIIGLHUOVPBSGDRLDTEBGJHPQHAFV");

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
    msg.setTimeStamp(0.09514243636992281);
    msg.setSource(26456U);
    msg.setSourceEntity(183U);
    msg.setDestination(40325U);
    msg.setDestinationEntity(76U);
    msg.autonomy = 120U;
    msg.mode.assign("UHYDTPXWSHSIALGVEBCVGWURJGCCKFJGYU");

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
    msg.setTimeStamp(0.556990447620897);
    msg.setSource(65147U);
    msg.setSourceEntity(173U);
    msg.setDestination(57474U);
    msg.setDestinationEntity(67U);
    msg.autonomy = 88U;
    msg.mode.assign("NVKSVUEWCOEVWHXJQELYYCBORXICQLJDHNZXUREXCPZGIREDAIOKDPDAHHTTUWOICNOVFCSAJKQBGYRHMG");

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
    msg.setTimeStamp(0.035004325340696196);
    msg.setSource(6468U);
    msg.setSourceEntity(16U);
    msg.setDestination(50330U);
    msg.setDestinationEntity(1U);
    msg.type = 140U;
    msg.op = 151U;
    msg.possimerr = 0.4705561235891189;
    msg.converg = 0.7254246225707826;
    msg.turbulence = 0.7058838106373958;
    msg.possimmon = 202U;
    msg.commmon = 29U;
    msg.convergmon = 220U;

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
    msg.setTimeStamp(0.7841352001377399);
    msg.setSource(48384U);
    msg.setSourceEntity(29U);
    msg.setDestination(27831U);
    msg.setDestinationEntity(213U);
    msg.type = 56U;
    msg.op = 183U;
    msg.possimerr = 0.8327892967587474;
    msg.converg = 0.14537391033409097;
    msg.turbulence = 0.8275855573727693;
    msg.possimmon = 99U;
    msg.commmon = 134U;
    msg.convergmon = 13U;

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
    msg.setTimeStamp(0.9014275650897842);
    msg.setSource(16187U);
    msg.setSourceEntity(155U);
    msg.setDestination(55538U);
    msg.setDestinationEntity(180U);
    msg.type = 130U;
    msg.op = 21U;
    msg.possimerr = 0.1693940473872687;
    msg.converg = 0.3016019642528387;
    msg.turbulence = 0.5434705056068974;
    msg.possimmon = 29U;
    msg.commmon = 48U;
    msg.convergmon = 11U;

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
    msg.setTimeStamp(0.10849940902096811);
    msg.setSource(43677U);
    msg.setSourceEntity(251U);
    msg.setDestination(25745U);
    msg.setDestinationEntity(77U);
    msg.op = 182U;
    msg.comm_interface = 91U;
    msg.period = 14271U;
    msg.sys_dst.assign("LCWWFSCMAOPSGMIZNYAFMTKDHTQHTEJJOAMWDGMZSYPNPOTDGCOGQIJSBKJNQBQIGLLXAWPGHWWJZQUXMTMUEXQNPSVHHRKLKBRYKEEOFERWUWVWUBPVNPILSIFZZDYECXE");

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
    msg.setTimeStamp(0.9247160150684078);
    msg.setSource(56253U);
    msg.setSourceEntity(196U);
    msg.setDestination(43103U);
    msg.setDestinationEntity(16U);
    msg.op = 142U;
    msg.comm_interface = 82U;
    msg.period = 58708U;
    msg.sys_dst.assign("TAESHLDXSUZWCKHXUMAWRHRXPMTGKMOVXSNLQPSXUTHFVXVRORLEGSZPCFTQABPLOYBQTVUJTIZTNMUUPPMVJNNOOOPCOCHYSYZTKKWVRPKDJCKDMYNDWLYYRSVGZKEPCAZCEVLIQGJRKXVHBJTILEHANYBGABXOYZIIDIIL");

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
    msg.setTimeStamp(0.12045593387402065);
    msg.setSource(53066U);
    msg.setSourceEntity(252U);
    msg.setDestination(38174U);
    msg.setDestinationEntity(146U);
    msg.op = 4U;
    msg.comm_interface = 11U;
    msg.period = 25764U;
    msg.sys_dst.assign("MUKUCLCMWUJNPMUGZQMOXLKTYJKEKVGXMIBHNSLCNHXJFURNJ");

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
    msg.setTimeStamp(0.7143582815018223);
    msg.setSource(59410U);
    msg.setSourceEntity(113U);
    msg.setDestination(5701U);
    msg.setDestinationEntity(205U);
    msg.stime = 3978167056U;
    msg.latitude = 0.6168831157416766;
    msg.longitude = 0.33087108706854884;
    msg.altitude = 32376U;
    msg.depth = 28007U;
    msg.heading = 23984U;
    msg.speed = -27615;
    msg.fuel = -28;
    msg.exec_state = -112;
    msg.plan_checksum = 52271U;

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
    msg.setTimeStamp(0.8291544297210701);
    msg.setSource(55527U);
    msg.setSourceEntity(254U);
    msg.setDestination(57651U);
    msg.setDestinationEntity(77U);
    msg.stime = 1532785993U;
    msg.latitude = 0.03243283041794587;
    msg.longitude = 0.6483632853112751;
    msg.altitude = 28865U;
    msg.depth = 39203U;
    msg.heading = 46125U;
    msg.speed = 19917;
    msg.fuel = -106;
    msg.exec_state = -30;
    msg.plan_checksum = 55774U;

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
    msg.setTimeStamp(0.44240558629871163);
    msg.setSource(4495U);
    msg.setSourceEntity(105U);
    msg.setDestination(35698U);
    msg.setDestinationEntity(2U);
    msg.stime = 1159454044U;
    msg.latitude = 0.851510117150978;
    msg.longitude = 0.986763613675678;
    msg.altitude = 20047U;
    msg.depth = 25017U;
    msg.heading = 63289U;
    msg.speed = -14647;
    msg.fuel = -19;
    msg.exec_state = 63;
    msg.plan_checksum = 54518U;

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
    msg.setTimeStamp(0.922977544164831);
    msg.setSource(19481U);
    msg.setSourceEntity(25U);
    msg.setDestination(64888U);
    msg.setDestinationEntity(84U);
    msg.req_id = 4859U;
    msg.comm_mean = 171U;
    msg.destination.assign("BZPECPPQSEWQAPMMQIJUZRWEMLKOM");
    msg.deadline = 0.7433280304136168;
    msg.range = 0.9341733162735338;
    msg.data_mode = 48U;
    IMC::AcousticStatus tmp_msg_0;
    tmp_msg_0.req_id = 55387U;
    tmp_msg_0.type = 205U;
    tmp_msg_0.status = 29U;
    tmp_msg_0.info.assign("LXBVVLMCGKUPZONOXQXLGAYSCWENAIRUYDSZFXSIAXKJQRPIKBFGCHA");
    tmp_msg_0.range = 0.9291894454517734;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("PODUSAFYNKUJUCLOIWLVAMOAXILNHPGTUSXRNPXKSPBIAKPFFUYSVPLLDBYGMYHKIKQEMWCHXIVFLEERMVZSEWKXCSYCUCSGOCABRHREJZGHDBCAMGPLAVMTWKIROAXWQRVTJVNWTGHDQQYZZEJJNOFAODUBNIJHCRIZQXQYQNDBXGWEVZOYFHGBL");
    const signed char tmp_msg_1[] = {-24, 85, 58, -96, -14, 73, -112, 0, -22, 72, -114, -24, -40, 59, 21, -67, 113, 113, -6, 126, -80, 69, 119, -91, -63, 118, 40, -22, -79, 63, 28, 42, -92, 87, -58, -120, 120, 85, -108, -32, 108, 118, 65, -61, 91, -33, -97, -11, 120, -19, -91, -27, 7, -86, -87, -95, -5, -82, 84, -71, -83, -65, 28, -25, 122, 8, -21, -83, 6, 41, -52, -70, 57, 37, 84, -80, -78, 121, 99, -70, -127, -128, 15, -54, -48, -124, -82, -78, 90, 99, 47, -103, -9, 102, -12, -13, 54, -67, 21};
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
    msg.setTimeStamp(0.2720445172018874);
    msg.setSource(16937U);
    msg.setSourceEntity(236U);
    msg.setDestination(41194U);
    msg.setDestinationEntity(84U);
    msg.req_id = 64562U;
    msg.comm_mean = 115U;
    msg.destination.assign("YQGCHANGCUHBQOVZPKPPAYOUYSDWHKFWXIWFMWQXNWREWIIAHGYLOSSZNDSQCLTKNODHHBFHCFMRGHJXBZUXOYYRUSITVJZSLKYVFTCMJBRZMXJVIKCJMLEGQNPIXGCLRIYWTITDCNTLVHNJPOIQTLXTZBJL");
    msg.deadline = 0.8450107818005601;
    msg.range = 0.49280354058694176;
    msg.data_mode = 66U;
    IMC::RemoteActionsRequest tmp_msg_0;
    tmp_msg_0.op = 196U;
    tmp_msg_0.actions.assign("NVTRPQIDRBCNUBITIOFZSZJMDAXYACQWHJYVTKFGQNQMNTBGFCTLYDAKNMMXWASZLRGDOYRHWUKEVMMUPLTKGJPAUHWSDPQFWOADH");
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("QYJTYXILKUGAUXQTLAOUZZYJFSDHWRVVXYBVRAHQTCOPBNTAJIENIFEPTNTQLIALKZOMWIEEEBXVAWXYECDHVJSMARSCDWMXUFJLOQZLYPDFHOMVLNTWBLMDCEUZJPSJZVCIXDBKGHQMRWRKCMTOFNHPVZZICABGWADIROKDKUUESNQDSUNPWMJGWUKTSPRBVFYTSNSGRYUPLVSOIPFKQHGXXBJNBZRIHQNZXLYRMAGMYCGOJQGBOFPKH");
    const signed char tmp_msg_1[] = {-98, 93, -64, -72, -107, -86, 9, 104, 24, -117, -78, 101, 74, 64, -42, -68, 20, 56, -33, 35, -123, 85, 57, -13, -42, 16, -45, -111, 27, 66, 97, 49, 56, 53, -74, -118, -17, -122, 87, -112, 45, -43, -99, -30, 91, -54, -110, 53, -10, 14, -2, -125, 27, -111, 78, 118, 53, 7, -67, -2, -12, 20, -57, -93, 106, -89, -107, 110, -64, 1, 77, -45, 86, 119, 57, -69, -78, -31, 8, 114, 68, -87, -50, -69, 114, 15, 9, -30, -61, -63, -116, -90, 121, 64, 24, 48, -95, 58, 40, -41, 95, 28, 72, 12, 7, -18, 123, 103, -62, 74, 126, -46, 122, 11, -99, 117, -26, -83, 22, -51, -102, -93, 70, 44, -125, 106, 34, 48, -9, 3, -9, 81, -59, -109, 94, 21, 96, 83, 86};
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
    msg.setTimeStamp(0.5737643219370184);
    msg.setSource(37417U);
    msg.setSourceEntity(156U);
    msg.setDestination(5589U);
    msg.setDestinationEntity(89U);
    msg.req_id = 35043U;
    msg.comm_mean = 17U;
    msg.destination.assign("FPIXCQYNSLLHAERLKMLFWQNXVIEMJHTJPQQDPHXPDVBMOSLDZXCNVHEMMNRIXZFGWBBTZQZHMVUDBVUUYIDBOVODPPYLFZWSVMWDXHFZHKSPQQVFYNZQSEYXQUHUWDAK");
    msg.deadline = 0.853689055323707;
    msg.range = 0.26661535780017076;
    msg.data_mode = 17U;
    IMC::NeptusBlob tmp_msg_0;
    tmp_msg_0.content_type.assign("PSHQMTJNDFINVFTLRGDGUMTITBCYOBXQXPB");
    const signed char tmp_tmp_msg_0_0[] = {-100, -46, 57, 44, 1, 124, 2, 88, 75, -71, -58, -21, 114, 83, 39, -107, 59, 122, 77, 84, 100, 104, 99, -87, -112, -85, 47, -97, -12, 68, 82, -42, -93, 101, -115, 90, 2, 33, -49, 53, -21, 67, 120, 68, -43, 94, 61, 41, 108, 45, -2, 31, 96, -37, 48, 33, 21, 24, 99, -126, 49, -62, -10, -51, 114, -127, 49, -66, -44, -10, -11, -50, 53, -12, -88, -111, 119, 2, -37, -38, -50, 49, -50, 74, 33, -99, -82, 119, 121, -51, 57, -63, -86, -102, -12, -121, 116, 12, -8, -3, 79, 0, 5, -91, 57, 81, 65, -15, 101, 15, -48, 100, 26, -122, 110, -77, -61, 79, -87, -5, -79, 62, 40, 83, 125, 31, -102, 95, -44, -69, 23, -30, 32, -10, -12, 124, -82, -127, 32, 75, -123, -86, -125, 125, -13, 42, -15, 56, 81, 115, -101, 24, -120, -119, 44, -26, 120, -46, 28, -92, 32, -85, 42, 47, -56, 54, 41, 40, 1, -77, -83, 86, -76, 59, 111, 23, 52, -23, -1, -122, -88, -103, 96, 59, -29, 44, -39, 124, 25, 18, 90, 22, 74, -114, 100, -52, -61, -25};
    tmp_msg_0.content.assign(tmp_tmp_msg_0_0, tmp_tmp_msg_0_0 + sizeof(tmp_tmp_msg_0_0));
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("UBVVTTMFLSOSBTTGFKMVTLRUFGKUWEGRAYDKJAQABTRAQRUZETIXRPNAABXYAYECESOSCPUBNOLKJVIFNIZFCSMNXFIMIMQDQUHNZFQHIVEWWZGEXWLUJCYOYHRXKVINAMQGLGFDLCEDZJ");
    const signed char tmp_msg_1[] = {-115, -48, 30, -82, 76, 104, 93, 107, -16, -9, -55, -57, -34, 97, 72, -11, -48, -90, -122, -112, 31, -80, -34, 94, 88, 28, 63, 19, -12, -45, 21, 46, 61, -19, 119, 25, 11, -36, 106, -98, 49, 70, -29};
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
    msg.setTimeStamp(0.5903312709757744);
    msg.setSource(22530U);
    msg.setSourceEntity(197U);
    msg.setDestination(63275U);
    msg.setDestinationEntity(224U);
    msg.req_id = 50035U;
    msg.status = 20U;
    msg.range = 0.8015361013453757;
    msg.info.assign("CTACWUJASCGVLTIJOANGNVSZPLRABNQZKSIRRHPWKYXFEHVXOHTQDQFQVPBQXSXYOWLZEXEPCHKSDGUBVUMJIWMKMUBDOAXCFIJEWEMRKINQYTPNYONTAEPAHMDJBGFFYPHZYIUFSUSTFWSUCDZLOGWEVHFTRQBESQJCIJRCX");

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
    msg.setTimeStamp(0.9825740303509912);
    msg.setSource(49282U);
    msg.setSourceEntity(146U);
    msg.setDestination(22610U);
    msg.setDestinationEntity(121U);
    msg.req_id = 10781U;
    msg.status = 161U;
    msg.range = 0.7421766540436813;
    msg.info.assign("VFJDUJQKLGOMIGDAZBONFAAHGAMVZIMPLIJRHXJJPQAVWRSYYUCSTZPCRBYXTEBFGYIWEDHQCDPBYRZEUEUIYHHADVHSFMCOUQWYTNGZOCIZCANLTBXKNDLYTBSXNHYZGWQJPIFXIKENRVGKOSBCPNXUVFLMOIAX");

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
    msg.setTimeStamp(0.6111731868816713);
    msg.setSource(54811U);
    msg.setSourceEntity(61U);
    msg.setDestination(25112U);
    msg.setDestinationEntity(60U);
    msg.req_id = 4464U;
    msg.status = 21U;
    msg.range = 0.8006362758878995;
    msg.info.assign("WEEHMHZDXQYFCPDXVDXTUGKIPLTJNWARQLZIGLAFMQHEFQVENBICCKNBZXAS");

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
    msg.setTimeStamp(0.2877541090116865);
    msg.setSource(21477U);
    msg.setSourceEntity(144U);
    msg.setDestination(22905U);
    msg.setDestinationEntity(1U);
    msg.req_id = 2378U;
    msg.destination.assign("ZNQNKBEMLCFPDSDEMPYFBHCYHIJRXHTZJGGTUGMBWEYXSIZRUQKMZVQWJKNFEPLTCNIRXWAQAWHNKKVXZQRHWCYOAHPEFKGDOMHWBVVCITRBPYUJMVNTOCWIGUYFSQAASRWBRCSIPKBXGENUFMAJQLJOGDCIJS");
    msg.timeout = 0.924240503069961;
    msg.sms_text.assign("RSEPQECYDGHIRSZDFJOIBLSYPJNQWBGTELLYEFMIDMJNUMIPQWKTRACWTXROWRXCSHACELSPVLXBZRRUKLMBQQPATCYVWUOMGIXPCSOAZBFAVKDRRGGAQXDIQPDGFAXJUBAHTSMOBBZUWMVWVZHEUHHVFEJCNGDYOCAQKUNASIUWZCZDPXWSLXOIKVBNOTKJIKFFKTQDMIUGFFNGBWHV");

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
    msg.setTimeStamp(0.025013893278390986);
    msg.setSource(52611U);
    msg.setSourceEntity(198U);
    msg.setDestination(3661U);
    msg.setDestinationEntity(105U);
    msg.req_id = 47168U;
    msg.destination.assign("ABHZYCVSZLHGSXLEWQXXOTNKPJHHRLCYSILPBDBRMJTOWMKVUBHKMTATDOANCUDVAXYCLIFGDZTIQEPRRJYHBLNVJDOPDMRCJPTZJYERHOQCEQWWDKGSIPFQAMXANSKFJFGFNKEUUELEYZOGEBUMIEWPVRIAQZNGFDCKWOWBAXQUDRQWYSNPCTQWVYEGKJXIYZOSUHMXZTHTUVILGJMSLBJPI");
    msg.timeout = 0.9837883583872519;
    msg.sms_text.assign("SWOFLGXSHIYQOHCMGZDBIDEFYADTSDLIONIXMKVYUVQWZRDMPBBJDWNJHRLYJIWAQGEI");

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
    msg.setTimeStamp(0.7590080510836813);
    msg.setSource(20959U);
    msg.setSourceEntity(116U);
    msg.setDestination(43166U);
    msg.setDestinationEntity(96U);
    msg.req_id = 2804U;
    msg.destination.assign("NGBDBTWOTDTGC");
    msg.timeout = 0.5677803238042586;
    msg.sms_text.assign("KVOVXDLVDXORVHFYLKGB");

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
    msg.setTimeStamp(0.5869211541986126);
    msg.setSource(24545U);
    msg.setSourceEntity(81U);
    msg.setDestination(61893U);
    msg.setDestinationEntity(167U);
    msg.req_id = 10592U;
    msg.status = 216U;
    msg.info.assign("QNXCNALUQGDKLGAKJASYIVTJNDKSWEHOPNZBVXVNRKZQIRTFHTZAKWQFIUUBANWWLTKHAAZCUZRLFEBQWGSXBKBUOEJSTHNDOIMRSCHCRAKPLFJEIFXMKQGRTJDFWSJLYHGGCCENYXUDFEPMMWASOLMPPBNICGITXLOIELGPUXWHICZSDYBROQKUOBBVUWBYRFJJVJIFVTMXCRVGFQHQETYP");

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
    msg.setTimeStamp(0.49541715280573506);
    msg.setSource(61653U);
    msg.setSourceEntity(63U);
    msg.setDestination(15484U);
    msg.setDestinationEntity(154U);
    msg.req_id = 47201U;
    msg.status = 22U;
    msg.info.assign("AOQJJHWSCBWDURFHEXKSLKBKMPRNWVLKSKOTYCHTBIPLPDEBPYXRYEDCUYSKQMTELDLRWLFNRFOCGAV");

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
    msg.setTimeStamp(0.45475424609169957);
    msg.setSource(3819U);
    msg.setSourceEntity(36U);
    msg.setDestination(24247U);
    msg.setDestinationEntity(224U);
    msg.req_id = 29437U;
    msg.status = 22U;
    msg.info.assign("WOCENBLVHRVCGHNBHLDKYDJDLPXIGTVUYGRHDSQMOKQHSSYLPDFMPQSBMVYHAUQJWRNIUHLZRAWRDDWINZYJDJKIPYYEOYTZFHKGMIQSYEGICNHBNABWUWUSJZGLPFXPMCMUUAEOIAXXUBSJELGHWWJFZXOQBJWGVPTOJ");

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
    msg.setTimeStamp(0.47187242649121874);
    msg.setSource(12840U);
    msg.setSourceEntity(23U);
    msg.setDestination(786U);
    msg.setDestinationEntity(178U);
    msg.state = 227U;

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
    msg.setTimeStamp(0.7010978785529998);
    msg.setSource(62979U);
    msg.setSourceEntity(173U);
    msg.setDestination(4527U);
    msg.setDestinationEntity(23U);
    msg.state = 51U;

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
    msg.setTimeStamp(0.7331297044442385);
    msg.setSource(16647U);
    msg.setSourceEntity(76U);
    msg.setDestination(2906U);
    msg.setDestinationEntity(88U);
    msg.state = 198U;

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
    msg.setTimeStamp(0.48402454167649234);
    msg.setSource(20237U);
    msg.setSourceEntity(236U);
    msg.setDestination(33637U);
    msg.setDestinationEntity(98U);
    msg.state = 16U;

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
    msg.setTimeStamp(0.5357632309578818);
    msg.setSource(16477U);
    msg.setSourceEntity(38U);
    msg.setDestination(42168U);
    msg.setDestinationEntity(170U);
    msg.state = 107U;

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
    msg.setTimeStamp(0.6022225610524238);
    msg.setSource(35917U);
    msg.setSourceEntity(164U);
    msg.setDestination(43116U);
    msg.setDestinationEntity(126U);
    msg.state = 248U;

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
    msg.setTimeStamp(0.9842259861557476);
    msg.setSource(48402U);
    msg.setSourceEntity(127U);
    msg.setDestination(9256U);
    msg.setDestinationEntity(249U);
    msg.req_id = 4603U;
    msg.destination.assign("WNPVKECSWCPFOZTDYBGZILRCDVKFDUEGXFCRKAQZYKPEGHGPBNQMBTAJSIJCLTOZNXFNBIZTTOJMTCXJODAVJYNJQRMKUVCWWUXRMOUFOZYPDAKDAASIVFBLGIDREKMLGBSRNVLYPELUZGXKWAVMZSQYLWONBB");
    msg.timeout = 0.5080054253759219;
    IMC::AbsoluteWind tmp_msg_0;
    tmp_msg_0.direction = 0.1905631068447564;
    tmp_msg_0.speed = 0.7348533653918499;
    tmp_msg_0.turbulence = 0.24126663289363615;
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
    msg.setTimeStamp(0.4585044409477861);
    msg.setSource(29684U);
    msg.setSourceEntity(39U);
    msg.setDestination(45162U);
    msg.setDestinationEntity(211U);
    msg.req_id = 11714U;
    msg.destination.assign("LTVOLZNGHXZBRZLSCVXAUYKDPGAGDAGQSFAUKYIAIORPKNODYUWNPZTWDFHSFWWEAIUBMJIJEYLCWQBZOWFFPIPWPLMAWSDQJYRVYBEIIXBCMKKYYOICEAHGYFRTCLUKCAMCFQMQXJJDZQXVCHNHREFBNNZBEFPRSRUMAGDVKQPJNOUHISOFXTJXLMEVTROGDLJSJXWLVHKKHPMHBCSEQ");
    msg.timeout = 0.5860488339182391;
    IMC::LoggingControl tmp_msg_0;
    tmp_msg_0.op = 188U;
    tmp_msg_0.name.assign("NWPJXRWYGCYXGOIVOTAGMSFJWRKJJSDDJNXZQLZPVCLYIMMHZDOZEKESBCOWFPRYUICKTIMSTPEQXQCTCFBAFFJPNKOPSGBSRFQGMQXKEABCPWUENVIHRLBGKUORSSWPCUYIUMUKMLQJUVJVEWUINBNJDSZRXLTYDVTIMYPYLJHACAZELLVEWXQZXND");
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
    msg.setTimeStamp(0.06728275336709177);
    msg.setSource(57871U);
    msg.setSourceEntity(100U);
    msg.setDestination(65522U);
    msg.setDestinationEntity(60U);
    msg.req_id = 23397U;
    msg.destination.assign("FEBYOWMPBOOAFDZGSSTHGFZCJNHDOZUWMIUUPUOJXFVTLHKGPBAWBVQQVWYEEKVPASDASQLXMNWXLGKHNSCUBLHYPZWGDCCHTZYROPMSCICIQLJLXJKTARJCDIENPHKFXEOGFFLS");
    msg.timeout = 0.6656387760754954;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 65052U;
    tmp_msg_0.destination = 31443U;
    tmp_msg_0.timeout = 0.3124903989351535;
    IMC::CoverArea tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.06305670805983277;
    tmp_tmp_msg_0_0.lon = 0.9065519743687849;
    tmp_tmp_msg_0_0.z = 0.48839310251386747;
    tmp_tmp_msg_0_0.z_units = 89U;
    tmp_tmp_msg_0_0.speed = 0.42440038423350646;
    tmp_tmp_msg_0_0.speed_units = 191U;
    tmp_tmp_msg_0_0.custom.assign("MGTYNJLIOWBFUATHKZRMRJWSTOGUKZICYEWELFGKUFSQTGAWGEOLCBVNXDXUPOLWZKOZRJDWOYQSAHMDPOLSPTYEPLDXVZXJIHCPQCLNRTDQCCMQNBMPSSQZRNDUHNZYHWYJBUUEYUBXYXIFZNCHGZNVSZRVXFLHBAKTRAYEVDYIWEDHAVSPMJLWCIOGMBCGAOQQXKVHJOFDBSLUJTEFPQKQRNGTECVPAPV");
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.9302642105015708);
    msg.setSource(54086U);
    msg.setSourceEntity(9U);
    msg.setDestination(44524U);
    msg.setDestinationEntity(27U);
    msg.req_id = 56454U;
    msg.status = 141U;
    msg.info.assign("XDRWONUVXXECLXOMPCALWESSICKQTQJUNSOESPTQHOLQHHVFPGESCWWWQFQXZPSNYFTRLCRWCSYJIGWYSGOUMOUUFXTDZUPPVEYDBCFVJVYEMNZRKNJTNRVVGFKFBALKBYGMJKZNRHKM");

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
    msg.setTimeStamp(0.5200400183317437);
    msg.setSource(51595U);
    msg.setSourceEntity(214U);
    msg.setDestination(50955U);
    msg.setDestinationEntity(104U);
    msg.req_id = 62081U;
    msg.status = 40U;
    msg.info.assign("KGFALNRLTHMXAYCHHCTQGDKWIWXURPBIOFVXBEMSLOTQN");

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
    msg.setTimeStamp(0.45901016035614606);
    msg.setSource(55005U);
    msg.setSourceEntity(155U);
    msg.setDestination(44083U);
    msg.setDestinationEntity(138U);
    msg.req_id = 7650U;
    msg.status = 252U;
    msg.info.assign("DLDKYIOPKPQHBGCSWMQAZTGSAOOULHSFQOIFHYDFWLHFEPYIGNBGYZBNWICTMQNRTNVBLUWZZKDMYXAMIOELRMVIRBFXCYDAGIRGZVUKUBQUBCXVYKHLOIDRUPRWZPTCXSGQNXJESRVBFJTVOMMHDLNCXJYWTKVNWVTUKGZKUTCPWYXFQSPWARFGFJJPVPL");

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
    msg.setTimeStamp(0.9483189918532275);
    msg.setSource(46887U);
    msg.setSourceEntity(149U);
    msg.setDestination(64543U);
    msg.setDestinationEntity(131U);
    msg.name.assign("SFCGWBJGIUSRXCKIDMRXEZTUVEJFNAQVZGRYOBLGKNQKQMKPOWQWDEULFPDSBTNUKFSUPAOERWGAHADOVCODRQZTSKTUAJPVBCXEGYDBYVXHCMFHSLSXJNQRDHOMSNEONSBTRCMALFQVWPVIIDHZEEHOOLCCOBQYFGXPEBIWHUYYZD");
    msg.report_time = 0.25904563782702117;
    msg.medium = 63U;
    msg.lat = 0.8385717867389335;
    msg.lon = 0.3771028116450611;
    msg.depth = 0.45051512840776287;
    msg.alt = 0.02658286715222169;
    msg.sog = 0.027214338161723584;
    msg.cog = 0.39652879406434627;
    IMC::DmsDetection tmp_msg_0;
    tmp_msg_0.ch01 = 0.3347663566938712;
    tmp_msg_0.ch02 = 0.5594935211289425;
    tmp_msg_0.ch03 = 0.06845448901384021;
    tmp_msg_0.ch04 = 0.09489105940817333;
    tmp_msg_0.ch05 = 0.09124747770496833;
    tmp_msg_0.ch06 = 0.6625043310941041;
    tmp_msg_0.ch07 = 0.5008211580137137;
    tmp_msg_0.ch08 = 0.37965743630938176;
    tmp_msg_0.ch09 = 0.0008618976340847295;
    tmp_msg_0.ch10 = 0.38665486593737153;
    tmp_msg_0.ch11 = 0.31430897311588524;
    tmp_msg_0.ch12 = 0.6586715528898375;
    tmp_msg_0.ch13 = 0.6280265045917308;
    tmp_msg_0.ch14 = 0.8604298282685681;
    tmp_msg_0.ch15 = 0.08549346261712987;
    tmp_msg_0.ch16 = 0.8981294037013783;
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
    msg.setTimeStamp(0.8841162285540389);
    msg.setSource(27530U);
    msg.setSourceEntity(240U);
    msg.setDestination(34808U);
    msg.setDestinationEntity(109U);
    msg.name.assign("ROUSHRUVUAZBRTOHGQYJCRXUGOJIEZNPUJAFNDLAISYELCELQQAZGFVAFZGYXOWVJFQUBN");
    msg.report_time = 0.9117654543452096;
    msg.medium = 54U;
    msg.lat = 0.934028408883959;
    msg.lon = 0.07566412966901315;
    msg.depth = 0.33660575688919636;
    msg.alt = 0.7992223647872475;
    msg.sog = 0.8495753198479024;
    msg.cog = 0.08320989132581469;

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
    msg.setTimeStamp(0.4299001648980283);
    msg.setSource(11696U);
    msg.setSourceEntity(98U);
    msg.setDestination(49580U);
    msg.setDestinationEntity(44U);
    msg.name.assign("WBFSWZFUTARXEVQXUTKVD");
    msg.report_time = 0.6268919833596521;
    msg.medium = 226U;
    msg.lat = 0.1649753743593777;
    msg.lon = 0.29201092264299455;
    msg.depth = 0.4699129020576369;
    msg.alt = 0.06616390373040604;
    msg.sog = 0.6180991226480702;
    msg.cog = 0.8223170523005815;
    IMC::SimulatedState tmp_msg_0;
    tmp_msg_0.lat = 0.5806322319322094;
    tmp_msg_0.lon = 0.17282293867240262;
    tmp_msg_0.height = 0.08765308452053755;
    tmp_msg_0.x = 0.021440150148867576;
    tmp_msg_0.y = 0.4189334087520793;
    tmp_msg_0.z = 0.4974356888595538;
    tmp_msg_0.phi = 0.931212439946542;
    tmp_msg_0.theta = 0.45408786124939016;
    tmp_msg_0.psi = 0.4747998063662998;
    tmp_msg_0.u = 0.23070644872421764;
    tmp_msg_0.v = 0.06703244251076101;
    tmp_msg_0.w = 0.9287138677525831;
    tmp_msg_0.p = 0.041302008182014016;
    tmp_msg_0.q = 0.43796606150312545;
    tmp_msg_0.r = 0.6354676994948849;
    tmp_msg_0.svx = 0.5897721595395526;
    tmp_msg_0.svy = 0.5812077653711801;
    tmp_msg_0.svz = 0.9738555104650218;
    msg.msgs.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.23297058752795397);
    msg.setSource(63264U);
    msg.setSourceEntity(187U);
    msg.setDestination(15542U);
    msg.setDestinationEntity(113U);

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
    msg.setTimeStamp(0.10818574746836918);
    msg.setSource(3148U);
    msg.setSourceEntity(208U);
    msg.setDestination(14044U);
    msg.setDestinationEntity(174U);

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
    msg.setTimeStamp(0.5891910817308131);
    msg.setSource(19063U);
    msg.setSourceEntity(196U);
    msg.setDestination(43786U);
    msg.setDestinationEntity(135U);

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
    msg.setTimeStamp(0.7566333241037482);
    msg.setSource(11631U);
    msg.setSourceEntity(189U);
    msg.setDestination(16497U);
    msg.setDestinationEntity(57U);
    msg.plan_id.assign("PTODWEBOBFIVDJNQTLGPDWDIJAOAQHRCPHTUPOIEODBEVAMUTKXPPKAKGXCHCFUPLGNGTJBMNJMKVVEYEXJTDSVKYNBXNAFXCZSKOCFDUEBMLWKXSAHQKFAQGHCYYRURGYAFZQNIYHRFPYICCHPWIZEHRMF");
    msg.description.assign("HMXLJPZLGCTAZEQRGVEIBUWETIYFWYQNQLWRTKZDPRONTESTHUVIDDZCNUWPZLNBVTHIHOGDUOHJXRMVWEOADSNGIUMTBYED");
    msg.vnamespace.assign("LZICIZFBHNWFEFKAZZTHMHWIAEMMDTQOVOIMXIDDEFNSRTMSRRDRADNSXIMCNROXOGSWRUQHRGYPPLYYOWKJTTUCBFVQZTYJPXUGUGYIJAUNKKMWRIPNLQXVDYBZOXXGVHLVFJYSAFBJCRJUDFUEQECWKNJLZPRXGPQOMY");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("SIYMKNYNBMESFXXVPPEIINLKFNMGHUOARNBBBTBYKJCPERTRCQDIGWQKS");
    tmp_msg_0.value.assign("TNYZWYDDSSNGDCHVMSQSFAUSEBPQLRCYPUQKOVORBIXPGRZOWYDBCJTSEFTUSLWKKRMFEKNFNZXEAWAQRVJRAJMYVLJLXNERPFPTZSJEJTGKICOQYBDYMCLHNUEEGBLOCCRQLBODIUFGDMBANHYAZTKCZJQTHXKDMHUTMHVATZWUMYZAPUPCOCFFWJLTGXXBEMQSIH");
    tmp_msg_0.type = 81U;
    tmp_msg_0.access = 15U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("QJXJVZPAMYLLIPZPEDYXTYBARUVPSLBKOLESJGQBGTOFHBVHSJIVJVXWAFESCBEKQNQKZMGQQTAVJVLIOHCVUSXDIDCGAAPFOOLZCW");

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
    msg.setTimeStamp(0.030207078058192005);
    msg.setSource(52831U);
    msg.setSourceEntity(54U);
    msg.setDestination(41852U);
    msg.setDestinationEntity(110U);
    msg.plan_id.assign("AFELASOWNYVBSIYJGDRKKZEITWPAFBDNZTTMAQPDRLUDSUDSIFCVVNSWPIYBLXQVDFZXJYJGMLADSBKWZOLHNKRGDPWWAUJLZMNPAWOGGJXHRI");
    msg.description.assign("EYKRGNIAIAYWUWOVFHDLUJUHCHQCJYRJUBPZZQGVDCANYDMYOKXKOMXNHHFFSYONGXUUSTNPWBCEIRWVDDWSZFXLBOATHTPCLXBAOQKWXMUKZNEHKPEBGCAISQVIDPMDPGLQRGPBDNPLZXYKENFFGEZLBDVGRVWZFTRJZRXBVQGNMXVVGATJAFJIRUSRWQIMCHOYSPKRJFAIPIOQTWMEOTBNLJDCTBFHHKSSTL");
    msg.vnamespace.assign("CNTWPOKXXANLSRRPBBFBXMOOJUDCEMUTIZXZBTIUQGFYVEWFRXYHWAYKQWLCGJTYBFIPDNCQSPWKLONAIJCHTQXGTJDDMZPQEULVUZNBNSGAGGUHYSJBYVNMAHFIFPRIDXLWWTVJPFMJMJOTLDBXEDXMLOUIHPSCIUYKOOMCRAOFEGYGQVZKLFQTDKKLCRVOZA");
    msg.start_man_id.assign("HTVOLUDNKRCHZNPWJHFMOLYZRIOXIJFQORIOMPHWZSUMVWIRBTZOBUEQRLIBSMSAWHYVUJKGUYTOKXQCFMLCAMXVYOALJAPMDUSSENJRRPLVRWTKQGFSPNVGIAAYBUPACEKVZTGPAEBOUFTCHT");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("NTRXQFHBJQXDIDSMDEBKXAEALWKAVZPNOVJFHUTXAVGZETCEZFKMJVPWCSFECXPTLCIIYJYXIVHWIXCBCASUOOWKQQGOYBMIKNLWUZODUAZUBVRLNQDHTKJQEDXNWMLHDCSLXVWGYAPSSBJYIMTPUMBNOTDEIHEARYGLJGHFWPNRQKGGLRMDPABOREFQKRKHZMWIRVTUGRMWMQZVTTGCI");
    tmp_msg_0.dest_man.assign("IOCUHRHVOEYORZZSEEQJKCTRNHIEDXLMQIHOHDNIKYPKDFJSUWOPSPERL");
    tmp_msg_0.conditions.assign("JMLOIOUMSKCLEMRDKKVZTMOYIXTQWMUFIJOJYYFWLKPZFNRUMGTSMUJGGN");
    msg.transitions.push_back(tmp_msg_0);
    IMC::TrexCommand tmp_msg_1;
    tmp_msg_1.command = 240U;
    tmp_msg_1.goal_id.assign("WMHCWHQGFIQZEKRJPBQYHHO");
    tmp_msg_1.goal_xml.assign("YMHZSJOLPUOWDIYRDUPZTRTHMALMGEMZBQXCDOWCQBFFWLEBXNKZBNXWTRDFHRBJLCZOYTVAGEIGFLUMUXEYJIRPSFPBDAUIQRQDQKGEYWHXEAJREIENBCGKNDXOVGMCULXYSYPJJQMMNTWAQKTVSBFKHFIGGFLLVKRMSILQFEXJZKPDNOFHXAWJQOPHVYAZEGXNZCKYSJYAHDHWOJLKPUUAMTOIBZCVIHVBSRTQUAWIPVNSVNN");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::Launch tmp_msg_2;
    tmp_msg_2.timeout = 43337U;
    tmp_msg_2.lat = 0.3659954753865091;
    tmp_msg_2.lon = 0.8573131234559138;
    tmp_msg_2.z = 0.6409246178583372;
    tmp_msg_2.z_units = 247U;
    tmp_msg_2.speed = 0.8715426989170684;
    tmp_msg_2.speed_units = 231U;
    tmp_msg_2.custom.assign("IUSCCDPLSXRTAWYMFWRKYLLQVFAJJXVAQNYMLDFORNSTHTBLTEIQLUYEUKHJUCCJQMFGGZYGVKMUPCQIZPNSRHCWXMQZRZZIJXARAXYQDFBCIETYTAABGVXTWSWKOYONYUATVXDVNDHPMUZGUZXSSUREFPXOLYLHNIKKBNBQKJWOHAIEZNOVKLAIJSMIMROPWGUWQBDQEVDBBRRLTOIPGZSPBPFFFJBTKHEHOECGENDWOZNSX");
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
    msg.setTimeStamp(0.6721847131839243);
    msg.setSource(2489U);
    msg.setSourceEntity(62U);
    msg.setDestination(493U);
    msg.setDestinationEntity(111U);
    msg.plan_id.assign("OMXDDJMYHJCQEKAAGTKCFNSYMHCHJKVUJLFRYWLQUFMCGOGHCBTJIXFUGOHRSKOQBJQGLSYRQHVVEIIHTPUTRFICEELAEHAEUDAOJYYUQQVWNCFIFPGTPVBURNDPZULFE");
    msg.description.assign("AUJZWCAVPKCLDYYOWMQHVUHFMIOZVSIJPURHRSJXASSOXUZOYPRQTEBUSIAKGKTCMLOGVGDPNQBGQMHYR");
    msg.vnamespace.assign("FEBMWSCVBWRYXOBJGTJDSFQZFTJASMDXTBZCVZGHWPNRKYFMWS");
    msg.start_man_id.assign("XQSPRBTLABRJCHOXMYLWQVYKEGGGZPWSRKRUPQXBASYOJDHIOMRRQACADCXOMYPTGIEKSSQFNXGXTZPKUYDAEDOBZUNPBKDREJHFJHRVYMQIWLT");
    IMC::PlanManeuver tmp_msg_0;
    tmp_msg_0.maneuver_id.assign("KTIHVCOALCNSHMFSLNWMYRHVMGBAERCROVBTKEUKHPQZVDYPSPMIKMZQCXINQFALKVJGPOUXEEWNBVCEMXZZJPTJALFZQDHXWHQIVNWABUSXNXVDOWYZYERCJHPFTYNBXYEUSSAMEISSGJLRXUCTWTHRLLJMEZABGGZUYVWIBLBUFGPNYLIDHUZQPKGQNRSFOQCTALAFGJ");
    IMC::LowLevelControl tmp_tmp_msg_0_0;
    IMC::DesiredZ tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.value = 0.29729364645540324;
    tmp_tmp_tmp_msg_0_0_0.z_units = 102U;
    tmp_tmp_msg_0_0.control.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_tmp_msg_0_0.duration = 50753U;
    tmp_tmp_msg_0_0.custom.assign("KUHKJDMLJTUCDEFWOZNUVMLUNXKOOSVPQKQRXZEEXOZEQMIJIAHCMRJFXBRIFLDWLUGZPWKSUTGDEHBENIFQJFGUGNIFPJHPIVHMADDBKGTQODAAYOBWGRVRROCBMVYIHQYACHSSXRRPZVBWTMTUJATPYSYAXEFLUZGOKSCQDAPV");
    tmp_msg_0.data.set(tmp_tmp_msg_0_0);
    IMC::Rows tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.timeout = 61944U;
    tmp_tmp_msg_0_1.lat = 0.705654811715677;
    tmp_tmp_msg_0_1.lon = 0.7278803770929992;
    tmp_tmp_msg_0_1.z = 0.39854333044251233;
    tmp_tmp_msg_0_1.z_units = 79U;
    tmp_tmp_msg_0_1.speed = 0.12468125557038312;
    tmp_tmp_msg_0_1.speed_units = 164U;
    tmp_tmp_msg_0_1.bearing = 0.16304958881231035;
    tmp_tmp_msg_0_1.cross_angle = 0.3484361114567831;
    tmp_tmp_msg_0_1.width = 0.07539849310843494;
    tmp_tmp_msg_0_1.length = 0.9289402070267462;
    tmp_tmp_msg_0_1.hstep = 0.011340552460551212;
    tmp_tmp_msg_0_1.coff = 17U;
    tmp_tmp_msg_0_1.alternation = 159U;
    tmp_tmp_msg_0_1.flags = 148U;
    tmp_tmp_msg_0_1.custom.assign("USESSXQGTHEVCHAIVKANWKGYERTZUOENRWUGJWWWUYDPAWQUVNOQGCZPKHSFCFAAXWJKOVXDGLZYEVIKTIFMKXJBRPQQQINJFBMUNMCFETCLANBXKMDYEIBJOPVBLQABGTDIMZESIIRNCMFQJYTDOXHTURLTKHXOLXBLGIDHVRYKABSYXUDTIMURFVBCWZHQRJLLYFCWOSNYGNSHMBMZFACPMHEJVEXNVPKZRAZSZPS");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_1);
    msg.maneuvers.push_back(tmp_msg_0);
    IMC::FollowPoint tmp_msg_1;
    tmp_msg_1.target.assign("TXHFPPUXGZAOPBCKXVWEFVBSQZIJDBGJEEQMQKBIEDSGMESJCYTVONABCEIMHDJXBMYBHDPVOIQLBGAKOGOYSQOZJVWUMFGESJLZRKTRKFQLRNSSNCLHFZGKDUTVQVDIHYWFQXLDWTMUCHIVBTRZZOJIY");
    tmp_msg_1.max_speed = 0.8275371141046893;
    tmp_msg_1.speed_units = 210U;
    tmp_msg_1.lat = 0.2974877892480374;
    tmp_msg_1.lon = 0.41743968212485594;
    tmp_msg_1.z = 0.29539935531104455;
    tmp_msg_1.z_units = 94U;
    tmp_msg_1.custom.assign("XBLJAHZKGNSCAIUFZZUMUSWEXWTBPMGUDZIKGDBVTMLACDKYAFBRFKOOCXMZCYFKJKIUMLBBUXVRQHCXUSYATWGIJVTRXLWWFOVOSXUTPFLDSDMSD");
    msg.start_actions.push_back(tmp_msg_1);
    IMC::UamTxStatus tmp_msg_2;
    tmp_msg_2.seq = 49419U;
    tmp_msg_2.value = 250U;
    tmp_msg_2.error.assign("LVNTFWSWOMTGWX");
    msg.end_actions.push_back(tmp_msg_2);

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
    msg.setTimeStamp(0.9017030665860477);
    msg.setSource(36636U);
    msg.setSourceEntity(16U);
    msg.setDestination(7464U);
    msg.setDestinationEntity(97U);
    msg.maneuver_id.assign("JRMQORUZIAESJRQZCCXVGDHTVXOUSULCZEEWFMNAEABTUPNQXRHRXZXWQDUGDJKYRVTJDMSYESFRAHNWNFIINEXIQNGCYGVFYZYY");
    IMC::YoYo tmp_msg_0;
    tmp_msg_0.timeout = 51675U;
    tmp_msg_0.lat = 0.6594630596926894;
    tmp_msg_0.lon = 0.9595660384912158;
    tmp_msg_0.z = 0.4536055068331235;
    tmp_msg_0.z_units = 29U;
    tmp_msg_0.amplitude = 0.8747505461253895;
    tmp_msg_0.pitch = 0.24445704948353875;
    tmp_msg_0.speed = 0.15514052704799886;
    tmp_msg_0.speed_units = 222U;
    tmp_msg_0.custom.assign("CKEUTSSEIICBQYBMFVIUUQQAMHIQAOEKTNOGMRFHSMSYGCBLIZDJVKGYHKEZAUMYLPXRDFJPBIXTOUQJXHMKTBHWEZQXLLXAPJNRWNXTJNBSUVVYWHLVURPMBCVJGGFAQFKOWFOFDYCKJQWCBLAWWUEGDYIQPRPTKEYVDIMZODXSLGDCXTOPZZNGQWX");
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
    msg.setTimeStamp(0.574600140496211);
    msg.setSource(62744U);
    msg.setSourceEntity(206U);
    msg.setDestination(54954U);
    msg.setDestinationEntity(130U);
    msg.maneuver_id.assign("OILRCJKYDZZKDMBSCOWLCBAKCVMZRLHWPQXQTAXRJMANSWZNUAAUNJCLKNYRXMMOSYSWLGFRTDJPMEDQFLCUWNYYXVBNHVQMCYHZLHTEWNWOODKPJJTGZZOUDESUTXBFVHIPOIYKLFQEUUCGPPXKBEHNYSIDVGMYVGSPJQJEK");
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.7559270436833241;
    tmp_msg_0.lon = 0.4057765036921329;
    tmp_msg_0.z = 0.8484756314474043;
    tmp_msg_0.z_units = 104U;
    tmp_msg_0.speed = 0.8932869811629086;
    tmp_msg_0.speed_units = 17U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.7800958734159913;
    tmp_tmp_msg_0_0.lon = 0.6338601853677255;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("QZMPWSATTQNJYGWNELPSVBLOZHCEUSGGUNRNMOLNOODZSCRTLNJXVLZSQ");
    msg.data.set(tmp_msg_0);
    IMC::HistoricEvent tmp_msg_1;
    tmp_msg_1.text.assign("PKCGUWBFGAJMMRBHWTCPNYESNHBLTHIFEURXSEHUVNVXIWUAZTBMFYWLXPKQDKCKJVLXTAQGYNCREAITDQRZLEMZMTWSNIFPQGNLNGHSKHBZTFWGVPLKQCEQSJYCPEKSYOSBLJCUWCLZKQUFDOEEHSSMFNYXIXPZAXYABKGVRKASEUTVFDVIOVTTHZGAOOOOYDRWZCLFFXOLJIVUWCNIBPIZQIZJHPRDQDBRXNJJGYWUAMJRVYQXDGHMD");
    tmp_msg_1.type = 146U;
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
    msg.setTimeStamp(0.8052646862122302);
    msg.setSource(42966U);
    msg.setSourceEntity(11U);
    msg.setDestination(57072U);
    msg.setDestinationEntity(228U);
    msg.maneuver_id.assign("EYBZJLCCGDUQAALSVHUDCDDZLHLMWTERYRCFRMSDMYMBWPTUONVHZLXQONZAJIXNKTCOYLXTLJYCWFKQZLKYEPG");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 47887U;
    tmp_msg_0.lat = 0.2549582884140106;
    tmp_msg_0.lon = 0.72971128990009;
    tmp_msg_0.z = 0.5802966540784927;
    tmp_msg_0.z_units = 231U;
    tmp_msg_0.speed = 0.2973989694772522;
    tmp_msg_0.speed_units = 70U;
    IMC::TrajectoryPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.x = 0.6054965612275919;
    tmp_tmp_msg_0_0.y = 0.6656018609587152;
    tmp_tmp_msg_0_0.z = 0.48040533968374843;
    tmp_tmp_msg_0_0.t = 0.029540630516310173;
    tmp_msg_0.points.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("OGFFTHUKEUAQRFTVQFBWDBLXCQJCVZJEZOVIMCPHNAVAOANDMGUXGSFKEUKIEADRGQDHZRRFPTLAMOVMOJNACPVUDBBBBSPLXKNDCAJIYNORWVLJGZCBRCYRMSVYDHYMLQZYJYQYJEWOBPWPWHNQAEMKXTHMTRWQXTWSTUHGMHWPGSVAZYELPUSFG");
    msg.data.set(tmp_msg_0);
    IMC::SmsState tmp_msg_1;
    tmp_msg_1.seq = 1256241081U;
    tmp_msg_1.state = 203U;
    tmp_msg_1.error.assign("FDIDWNTGANZEVFMUODHYTCJIRGDJKIQCCZRALBQENNBAXCJFSDYSQWDHAHHZOOHPHVRIOVJKHNZPBGNJHEGLAGLROJWKJBOPKAPVCRNECOMEVAUSUYOEYAYLTQQUZWPFSUJNDURXLLMMGMRRZDSPTDKCFSCPUQTTVXXMFKLWIBPYWHMEQ");
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
    msg.setTimeStamp(0.8672161142568577);
    msg.setSource(26795U);
    msg.setSourceEntity(254U);
    msg.setDestination(41671U);
    msg.setDestinationEntity(145U);
    msg.source_man.assign("ARKKBVURACUADQWCAWGYDEHNMJIEPMWRCEWTJGUOMWQCUQTLFOQNUWBINJPTCXIXJPLOOMCDFCANFVMPHUUFKXZMAXPKHPVGDTDGEEXJAIV");
    msg.dest_man.assign("MCEWLWHYEIFAJYKNKPJZJSLUGFXXQZMLBOGZORURKZVKQPWDRLJPYUTAWQNGVLCZ");
    msg.conditions.assign("YOCARBQFHLGUMADONYRYDEAFILFOZNECFJKXIDXTLSNDMABFESTKGHWKRKWWJEZXVGEKFEWCQPHBJUMIWLQFGKQIZFRCIZHSQMOJCUXIGMHNUKWCNZIJAXTUNNADBV");
    IMC::Heartbeat tmp_msg_0;
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
    msg.setTimeStamp(0.933291021243269);
    msg.setSource(26442U);
    msg.setSourceEntity(61U);
    msg.setDestination(38950U);
    msg.setDestinationEntity(178U);
    msg.source_man.assign("FCUSGVHVRDDJPFQLVFXDMCVMNHZYWDVGXHKJHLXTTPCRTZAEHXGCPSGOWAXRIZJBNSYNXEUFSJWBFIQRKFKXUCAHTKNLFCIOVGBWYTZOOSSNZBTECQUJJEYGJHSUKLRAZVREMSXADUGMIPHIMRAYMNDURJTIYWAEFWITMBZXGTQKOCMQHISOVVLQYDWDRUKYABCEOKQYLLWLPKBPHBRSLWEPND");
    msg.dest_man.assign("GKPOFKSAHERIHFZJXFBBMCUMVKJHDRZAJCWXLJEAJSKWBDPVW");
    msg.conditions.assign("DKHNTLRXAFMOEZJNIRMGHCABCIAZHJUTVVEDHIQTLODVJFVLLMKCCHGXCZRDQDXOQZGNSQDVAUDTYKFRYNWFTFJYNQKPZSBRIYLMEXUUNUUPOZLYPBFMGKBUAIAWQGEJRNDDLEGXXJJAFVSXUMGJCKBVVAVLPEDTNBJWECISPXASKZWPLXHK");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("WSHSDUDSFKBLMSRVFESXQPKATWIIXWPDTJZWOZEAHXQDYQJCTDIJZGHBSLGAEHEIVMMGJDGVDEUKWYMMNFWXRKOVXYACQFLRBHLAKVYSTYQZSLFKNICBRBOTUJNENDTOJNWJPCFURXQAWOLRZEGFWUEWHTITLHPITCOYSPOLULIUHNSMOBYJZNXDOPGVRAUNXZMFKVVOMPJYLQQUNZGFMQGKZIAXUCAYEKTGEXHIKRCJCPCVRH");
    tmp_msg_0.feature_type = 108U;
    tmp_msg_0.rgb_red = 16U;
    tmp_msg_0.rgb_green = 97U;
    tmp_msg_0.rgb_blue = 154U;
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
    msg.setTimeStamp(0.028699230248876773);
    msg.setSource(55617U);
    msg.setSourceEntity(153U);
    msg.setDestination(41767U);
    msg.setDestinationEntity(185U);
    msg.source_man.assign("ANGUHAOQGFTUIWTLRVSIHASEAIABNYJXVEKUBFUXLURNXQWXFLLKKUTYSQKTJMWGMMYMVDWLRAJRPIWESHNDTWDQOCFCCEBOYSVTCAUPVADXKPMHSSBYVJIEZQBNRPWFJGOZTTOIHDNVZYLREQYLNSEIKKKMMCIOVFXTCGJSZPHWBFD");
    msg.dest_man.assign("JUVIWJYTDLUAKMZTPKFVOIYXIRAXRINTMCZEJFCGNYLOQHFFHGCBTRFLYVTKCMEDVQWWBYPZJIRKMUKKNAVAQPWFPZOGLUUTHQOMACPHTECJTZJXSIEBSXVYKOQUZWSRHNGRIWGWEGIBCGAEAFYPMPTUJYDKDUXMVUDQHXGDJGOOKBFVNQEODSHBVNSBYEXLUQXCBCDFZRVSPZHCAWN");
    msg.conditions.assign("DSFKXCGOTQKLFVBIHYXEKJ");

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
    msg.setTimeStamp(0.18674484447987882);
    msg.setSource(49086U);
    msg.setSourceEntity(42U);
    msg.setDestination(31346U);
    msg.setDestinationEntity(53U);
    msg.command = 99U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("ANJVNYALYGLZJIJTMVKBOJFDQJMKOPFT");
    tmp_msg_0.description.assign("JGJGCOIEELAMKURTCIUMSBKDLFATOTFVXYKRVNFOXGWMMQEAPHFHLSEWQTPJQVRIWXNCTTYKKONAXNNQCWRPXIMVRSAWMRZDBIPZUZTYGBDTUIKVPDANUYZMVOCSEMIYDXOLJXZXJOHFLOUDKEVRDHHYMQQCYHHAGLUKSHSW");
    tmp_msg_0.vnamespace.assign("WJEZEDUYNNWSBGOHKYYPCOZKFGVAFQCSBIQVXIRRTSFGNDGPWUSRNOYYJMQJKVJNNTYZSKVCLHZERAUUEMZCUNPFPESLXIQBTQHHBJFQTEUGPQXHJHPAACWVLEHQARFDXTYDOUMKPDMXNWMEYDYXMWDQTZBVJVJCJVQLCAHCPZODKRFRGHCXYBXWNLLOPMLBGWRFFLSIIFUVXSTKXZIDDUOSNJZTAE");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("RNYSIERVOVKATBTFZLASCAGLAFNDGZVYLOKZMAGXOQYLCVILEVCPBDKSMKPOWHRIWPZOQDCJBWRWMZIJVFHCWJBKWAFTOREKPJFVDYUTSLCHULBWQFINEHUPJAGUICLUSMXODMJEWDCMBGPO");
    tmp_tmp_msg_0_0.value.assign("HVKFFIKSZNWEGMLFXGBOVTPQDJUAHEIULGWPUDOLBOBHSTAZATNTBNQHABWCYDKGKJSPZIHNNZOUUNVJIYOXAJBBPPWQEUMQWIRVATSPERVISFSRSRZPLWTMVQOEIMLMFHRDOCOTVYFQGKOWCXEMTLNGMNXKDWARYMUYSVDABMYXHHAQTCYAZIGQRUSLJGKDXLZXYVYPDKJKJMGBHLCUCURGEIJ");
    tmp_tmp_msg_0_0.type = 235U;
    tmp_tmp_msg_0_0.access = 77U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("PYYZOZBLQOTHXIJAUDYJIKAIBEPFCSNQNVDYOXZKCVRRLLWAVVJBUDOVFDQJTZNKCHCUUOQFTENSYUSEZSBGDYMPQETDPJNTWVGBTVAUHMLBHHTZBILZWLOGDKVIWMDXQPEPSQCQHTMHYMAOSAJXKZRUXBRYAFGPFECYOLWFPIISMEWX");
    IMC::TrexObservation tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.timeline.assign("NTIZYWMJOIGQUDCLQAHHPBSSTDCWQRHLIXJMQEADYVVUUMIDOBTXWEMBIJKOJRWHQTXLIURRPEHSZZANEXWJSXEOBQJCQICFWTJCPMYNNZKZSRPGAAIQMDEKBVWMGPEGIACNGAWTXKQEDSNCQOAHFTYZRJOPKNYFHBRFSVKUSUUBGCLCRAKZLS");
    tmp_tmp_msg_0_1.predicate.assign("FCURTKGOIEWGHOAHRTLGZHOZXEAZWAEZBZWDKEEUIXBNKMTRLRUBQPYBPCVNPATJKOBUKNKWLSQLQUVXNTVXVYBBLOGZPSFWLRYJVITFOFMVYJACKKGINECRMDSXEDXXPCOSMSQPCPDZFNDOAXYWHCFAUIWFUBVTFRHUJQYTNJNGARHOYMTLCQMYFGNQWXDMWPGEHSESMJHITOAYVIJQGLBYSQVHLIPDEDDAJDJZCZVMPXW");
    tmp_tmp_msg_0_1.attributes.assign("JOTYMAKGPFVRLUGXFDRRZSHYWSSVUZMFOZORKJHHKDYPYNSMQBWIFQMZLHKWGAUJSFKDYPAVQQQCADRDCFWTDKERIEHHIBVTXISTUCLXZPNJGDUBFBSEHOVEHGLCWN");
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_1);
    IMC::Drop tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.timeout = 34569U;
    tmp_tmp_msg_0_2.lat = 0.6462833840132303;
    tmp_tmp_msg_0_2.lon = 0.346636759667278;
    tmp_tmp_msg_0_2.z = 0.3373792214241964;
    tmp_tmp_msg_0_2.z_units = 41U;
    tmp_tmp_msg_0_2.speed = 0.966940582887694;
    tmp_tmp_msg_0_2.speed_units = 68U;
    tmp_tmp_msg_0_2.custom.assign("AMKZITCUYDCBOTAVIXHTFFQESPIJWOIFQRGNTETXPRYAVLVCNAMKKIYZHBFRZGYPMXEI");
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
    msg.setTimeStamp(0.6199995631309881);
    msg.setSource(45798U);
    msg.setSourceEntity(128U);
    msg.setDestination(28808U);
    msg.setDestinationEntity(244U);
    msg.command = 87U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("CPFNIJBMWCIUOGLJAQQOWEJYWWVKLJDFFZHGLLURPMMIRYDTKJEE");
    tmp_msg_0.description.assign("QFPIETHZGYNQLVDVZUAAOXEIWLXDIAEETMZXGIVPBAAQSPKMSHOBLTKFNZKCSIHRJHJOCPKSWZEWUGTEBIGZIJUODEFSIFTWTQCNWTRVYGPLBC");
    tmp_msg_0.vnamespace.assign("AAOJESXPSNGBTZHBGDDMPFAONIFVKPNAXKPJFDIERQFQHZJEUVISLMSMQZPRDKDNWXOCJUIQTBXXKGUOTIYVLZRNVMQEWAOVEESLNHUHTWHJULFXAMYRMYWDPKYECWRMUHYQSQVJLT");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("OGDGIOQHOZHDKODSJVNTQNYKSTJUNZWRZVMJXLRSLXSLSPCEMPYHMEGNGEIJRWILQAXWJJWVMNHAIFT");
    tmp_tmp_msg_0_0.value.assign("EVQPPMRIOIXYYSWRKCXBCCRYUODSZMIGTEXSQPRXUWNMQWAKWPFDIFIKSKDBUZLYXXTQCMIOFGKJUZQJSLBOO");
    tmp_tmp_msg_0_0.type = 189U;
    tmp_tmp_msg_0_0.access = 247U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("CPAGDLFWWQNLIWQPSEYJUTUUDROEWPAPANXDFBVGRTNQIADKCARRGCYVPTEYDZNLT");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("QCUUUREMBCNMRAYGHTIEIWAULXEXXOCVSKMJSILBYDBPJWBRUCPDIXLJRSBJLZHWTQYOSQQQUEWFYEGGLBHMBJAZVNAFKSDFEGFHKMQZUZPMEBWGIROJFCKLXFHXONWTBXCTHYVAQCQAQVHNWOVCNDIRYZASUFSIKDYOSTLNOLEGVZDDMPXVYRALTJDGFDRTEOKJNTRWPPSKZGPRQJTNWVMEBAKVUSGPIGHUXCZTZDZMYLOHCYAJ");
    IMC::AutonomousSection tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.6768706751145426;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.24341319898526936;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.7419227302234787;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 153U;
    tmp_tmp_tmp_msg_0_1_0.limits = 40U;
    tmp_tmp_tmp_msg_0_1_0.max_depth = 0.848907524520272;
    tmp_tmp_tmp_msg_0_1_0.min_alt = 0.692522453620742;
    tmp_tmp_tmp_msg_0_1_0.time_limit = 0.9905742134031182;
    tmp_tmp_tmp_msg_0_1_0.controller.assign("IYRNQOEYEKGJUDXOPAAYWUQHQEAXAXYBZLFSSOJGUKBVAAGIDUDKCDZVBDVFUVYHEDWPZHNXJHXDJEHTAJOMORMLGBBVA");
    tmp_tmp_tmp_msg_0_1_0.custom.assign("SZVXAYLOZSBTSYMYAHDETGINVBIAAABFLCSPMYCWKJNENDQRABRHDNCKGMSYKCGWEPCBJDBLMMSKOIMUXCXUFVGIOQLDKZVNYZPRPYYLWWGNMJGJNFIVWOPKUJXPGYTCWQLDVSLPCQFIOVQBFZUXQENUUWKHMETQRYHAQRSIWFWXPAHJWAQTTMRNMRX");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::UamRxRange tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.seq = 62558U;
    tmp_tmp_tmp_msg_0_1_1.sys.assign("TXCTLWKLSJNWVOSTEBGRNCAGFTXVIWQHSOBVJQDKXWYBLFUVPXYJHWEARTCUOCSFNHPIQYPIQZVOADOCLVUAKFZIZZSAJXXDRVHSBEANURBNQKMUVXCLRMLJXYIDGRSKBIYQNDFRIKDWLBHMXIKGPQFHTPCFFATHYE");
    tmp_tmp_tmp_msg_0_1_1.value = 0.9560196236136994;
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::WaterDensity tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.42440592761535556;
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
    msg.setTimeStamp(0.3048155254591123);
    msg.setSource(47623U);
    msg.setSourceEntity(155U);
    msg.setDestination(44169U);
    msg.setDestinationEntity(21U);
    msg.command = 92U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("HNEUZZTYEMWLSLPFDNQZKRYEKTBJOSCGYXKKIPPXANMOPNWTIGWUCOEMVEABPFCBKQBLHWPSYDUU");
    tmp_msg_0.description.assign("XBMUDDHZLVTIQVZBGABIQBIJXDHFOCEUMAGKQEABZYFCRNXSEDFAVPLCYLYJFRYTXLRXFGTWMAIMWSPNDDCBXUHZICHMESKQAJHPPTFEIDSNJROYVHYROXGRYNPPSKKXGWREASYCAMLWJTYBQCLHZUIBTHPNNOOYWTKXLRKGVOVFDJJUHZMJDOK");
    tmp_msg_0.vnamespace.assign("OHSVIJQEJPBRZAASIHVJQZZSXRHAFCQQIDKCMILOLWTCUXLJQXHKUCYLCVOALMBHEGEFENNSGJUXZPINZUUHTCNDPFQJIGHDEEWLFBRXWMFHTSKZQRVTUWWRLNTETVQQRSZZDWPFNUIBNQDKTXDFXOSWYBYGMGCKNPRPPRILKZSITMCCRADOLYPJOVETVBYNAGAPWKMZDXUGWAOX");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("ZSIWNFDOXZJQECWJQVLSZCYWTCBTGWKUFUDKCDTSOEDDCJLGJJERLNBSZPMYFBXONREFUQPWWTPHUQYYHEYVWGMRJVILSBRHHXBTGWMMPFLPOAREONQHVKRMKINXWIGVAQVKIASRSLNKVXHWUMQGIFDBKZUISOGGNGOYPEOGZBBPCAURPHIAYCJPBZUMSLFFYAVNATPRIVDSMHLYTCJXYHEQFVTDXLOXBRUIDNTZCKFECDJAMZNH");
    tmp_tmp_msg_0_0.value.assign("DHQOCSVDNOHLAEHFWNIIOULKCJFUBIQCTWCQAAYGQHDSRIXAMVCERMZFRZYAIMTSVONYFAYUJUWDLKGUDGLIVNYBTDPJSTSYGRUVLVQMUXABPHZGMSXVMJBYMIQKSDIGKPENLCTDEPAECOW");
    tmp_tmp_msg_0_0.type = 240U;
    tmp_tmp_msg_0_0.access = 10U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("EVQADYQGZXALADZRSRGCXWBBDASFEXXRKLNOWAACKDSONULYPKJTFTKOAYNPYLDNSOXXGZQLVHLRHEESVKJJRMJIHITBNZFQCZLIZPYEHUUDMXBXCQCFNZPLGDCOPJRAJMPMVNOGEFTYGMIXVTHMUAVTTKGQRDSUVCFMUGESF");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("BLRHNXUNDBQZHEXTONOKAUJWFVHRRYUWYGHEQDGNHCUXDYJESLGUTIHQZLCHLTOAQAGJOKUMKYPOLPPJMRUSEOATATXMAVMTVDDNIMZBJIDEZKBRPSWCQELHIIGGIMEXYSSKTRHMYZVWWBSTFZIPLJXBUALVOVOKUBZFNKFMZCHRJKRDMTNPIYXJGGESCQERXFDSXRVFGAIMCEZXLCPJFYCPKQDWPSOQBWOSNYWJFAFTN");
    IMC::CompassCalibration tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 17068U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.5038051172983676;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.6669593996948561;
    tmp_tmp_tmp_msg_0_1_0.z = 0.5943120589041452;
    tmp_tmp_tmp_msg_0_1_0.z_units = 41U;
    tmp_tmp_tmp_msg_0_1_0.pitch = 0.2842100598649667;
    tmp_tmp_tmp_msg_0_1_0.amplitude = 0.6061806505446887;
    tmp_tmp_tmp_msg_0_1_0.duration = 56347U;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.8219760461851338;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 52U;
    tmp_tmp_tmp_msg_0_1_0.radius = 0.36505217610015983;
    tmp_tmp_tmp_msg_0_1_0.direction = 218U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("MCFMVOSISVVCCSYYWJMJQAIJHBQCTANANDMYZEAXWBRFTVSJGTBOPHPINBXLLDZXXDUTGTAYKKEXMEUGGHZISWNLQERSLTZEXVUYCWJVYCLQDNZGFOQTKZKFGINKPJRIOGFHNWIOLWPLBJKZQHKEZRCUAPDLVEPMIGSXDPHTOJZKRZHKUIYUUMBRECWOAGSCHYOMRBNYUGYOVRJOBRSAFNXWAFTDNAPQDJLIUEHDVFB");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    IMC::Formation tmp_tmp_tmp_msg_0_1_1;
    tmp_tmp_tmp_msg_0_1_1.formation_name.assign("DGQWDUGNQVUOMLGJTQXCDADPGLMAVNCVSSXHBZSAIYXJQYIYFPWREMBTLQRIFTFWVIPZCARGYXFDUJNYXEOWTZQSSRBWORAXMBJAYRFYBSANPKOQHPJFCUHNMEEUGNPLWHIHWVZCDUP");
    tmp_tmp_tmp_msg_0_1_1.type = 224U;
    tmp_tmp_tmp_msg_0_1_1.op = 225U;
    tmp_tmp_tmp_msg_0_1_1.group_name.assign("LSFFKWPZEHJCKEHUGVXYWDNPEMBALCTARYWEVCTVUGUHCLZEHRWBFHKLHLLXCEOULEECKNTXIBHRYQELDQKODQAZCZAGVARVFWDNSJDXPMEUKSODTZMIVQBDUAWRSTIZJQXSUNJMIRZMDABOTBJLTRGFNIPTWOVXSJJDGNRPFZRGNOIGPUBQWFTIICSOSJSYYIZYOOFMYZYACJWPMYCWPNTADKKBMGNRBUMPNXLXOKXXVPGMHQQUVAF");
    tmp_tmp_tmp_msg_0_1_1.plan_id.assign("CEHZGBGPXSAQYUJOIRTPOJXGMMROSDWAJNBKUVMQKDFLTTKJYIFATNCAOKHSVGERUEBVJNTDWVZMMLHFUJUXOAASGFRJQYXWHYELKTWYXAEQDXKHRTIIDQMFQWOLSDPYULIYVZHPMCRCYTMHQULCOLWIPTZAUBPEKVRBXXALGXVIENL");
    tmp_tmp_tmp_msg_0_1_1.description.assign("VSBWBLLJFSGCFLZHHOQDAKWUONIENACCGKVXYFEDPKDTSHJJIHSFLKMYZTIPEXMPERQKTILDUMTPOGVALCUAVDROMLQBGZVCWNMWERZRFEHRWJFZDCAVQXZNAABLSBKLAPNWZWUUIPHLZDHDBNQFQRBGSEWWCVPNRYUGTNNYDYQTXIQCMFTFJJVSJCEXHZYWHOXJU");
    tmp_tmp_tmp_msg_0_1_1.reference_frame = 48U;
    tmp_tmp_tmp_msg_0_1_1.leader_bank_lim = 0.3714608377441433;
    tmp_tmp_tmp_msg_0_1_1.leader_speed_min = 0.12253603263300572;
    tmp_tmp_tmp_msg_0_1_1.leader_speed_max = 0.3640824488421509;
    tmp_tmp_tmp_msg_0_1_1.leader_alt_min = 0.3588153439811308;
    tmp_tmp_tmp_msg_0_1_1.leader_alt_max = 0.224960406157101;
    tmp_tmp_tmp_msg_0_1_1.pos_sim_err_lim = 0.06363016962252566;
    tmp_tmp_tmp_msg_0_1_1.pos_sim_err_wrn = 0.27099442535675156;
    tmp_tmp_tmp_msg_0_1_1.pos_sim_err_timeout = 37699U;
    tmp_tmp_tmp_msg_0_1_1.converg_max = 0.21210832310082206;
    tmp_tmp_tmp_msg_0_1_1.converg_timeout = 40380U;
    tmp_tmp_tmp_msg_0_1_1.comms_timeout = 52102U;
    tmp_tmp_tmp_msg_0_1_1.turb_lim = 0.9581501671748283;
    tmp_tmp_tmp_msg_0_1_1.custom.assign("WCATRVDHWYAVSMYNCBZXWTBEVJFRESVCWEJNFIEWFBHHFHACJDZZPE");
    tmp_tmp_msg_0_1.start_actions.push_back(tmp_tmp_tmp_msg_0_1_1);
    IMC::ArmingState tmp_tmp_tmp_msg_0_1_2;
    tmp_tmp_tmp_msg_0_1_2.state = 182U;
    tmp_tmp_msg_0_1.end_actions.push_back(tmp_tmp_tmp_msg_0_1_2);
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
    msg.setTimeStamp(0.8413977462941297);
    msg.setSource(64083U);
    msg.setSourceEntity(35U);
    msg.setDestination(36756U);
    msg.setDestinationEntity(236U);
    msg.state = 253U;
    msg.plan_id.assign("SQYWHODFIQZPIQNRMCBGSWQCAORKRNQKPHMDJHGLNIREFAGEIUEIFONMDEXUSSYJFJPUMZYCZVTSZKLTSOWOZYFJASKTDRYKOBUXFVHTXBLSTNAOEXJWGLEGJMUIWCVFYYBRBHP");
    msg.comm_level = 228U;

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
    msg.setTimeStamp(0.1813312442888534);
    msg.setSource(41193U);
    msg.setSourceEntity(29U);
    msg.setDestination(751U);
    msg.setDestinationEntity(247U);
    msg.state = 100U;
    msg.plan_id.assign("VPNVMBEZNWGNHIGROMKRXROCWWLI");
    msg.comm_level = 146U;

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
    msg.setTimeStamp(0.4109474384134538);
    msg.setSource(46154U);
    msg.setSourceEntity(58U);
    msg.setDestination(65498U);
    msg.setDestinationEntity(141U);
    msg.state = 99U;
    msg.plan_id.assign("OMRMWOJWJAIUHACI");
    msg.comm_level = 209U;

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
    msg.setTimeStamp(0.11176523515196535);
    msg.setSource(44871U);
    msg.setSourceEntity(220U);
    msg.setDestination(17951U);
    msg.setDestinationEntity(158U);
    msg.type = 120U;
    msg.op = 6U;
    msg.request_id = 57112U;
    msg.plan_id.assign("MVMLPVSGRRZKJMEPICFHDAIQIELVLYDPKLQRIXAMXEHNTEJGONCSOOJJWBRZIRPIPQUOZMTQFAXC");
    IMC::GroundVelocity tmp_msg_0;
    tmp_msg_0.validity = 247U;
    tmp_msg_0.x = 0.4630148373110675;
    tmp_msg_0.y = 0.6465911936284637;
    tmp_msg_0.z = 0.00785991769700467;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UUWRHHMSFZKJJVRUZMCOIOTNGPUOTIXNBGYGBYGLLOGNCRWWOTPXROVVDMPSKEQCOXAPRPYWEYDMTAMFLIVBTBHKERLUCBMBMZFVFTAHFENSROXQUYUDLGXSPVDQKDISJBFAWQMLDSIIUJIDJYMPKTCXLEPHWWYFAJLEWZVX");

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
    msg.setTimeStamp(0.008712151467905271);
    msg.setSource(31887U);
    msg.setSourceEntity(192U);
    msg.setDestination(21711U);
    msg.setDestinationEntity(95U);
    msg.type = 62U;
    msg.op = 248U;
    msg.request_id = 41243U;
    msg.plan_id.assign("KAIHDCEQSTSQPIZDULAMHKADVCKWDONQBICUDZYAEVYJNSPZTHBJHJSKRYNXCGZCBFWJZOATJGMMPHMPBNTTPEEYBFIZTGKMIXTSVACYGUZSRUVAR");
    IMC::UsblAngles tmp_msg_0;
    tmp_msg_0.target = 18656U;
    tmp_msg_0.bearing = 0.2594475607630501;
    tmp_msg_0.elevation = 0.8923295762318273;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("UJQBNNEOESEPAAYCYSUBIJOXYWRUCYOZVBG");

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
    msg.setTimeStamp(0.9962307543038773);
    msg.setSource(24253U);
    msg.setSourceEntity(66U);
    msg.setDestination(38548U);
    msg.setDestinationEntity(142U);
    msg.type = 16U;
    msg.op = 165U;
    msg.request_id = 42629U;
    msg.plan_id.assign("SDBABVHFZAHEOKNJGRXQPPPBFIPBMNKHDKCBPVRMVMJTYBGJZKEEUEXNNMJOCTWDUAMFVMNYSFRTAXWTODZZJSLGUCLRNSTIQLHSQFRAFSVCFPQQYRXDISNEWXUTOTDIBIJDBKZPKRAEDCUAHITRAHKRUSESMZIAGLPKE");
    IMC::FollowPoint tmp_msg_0;
    tmp_msg_0.target.assign("SVWRJEHBBXEA");
    tmp_msg_0.max_speed = 0.3788419337954676;
    tmp_msg_0.speed_units = 130U;
    tmp_msg_0.lat = 0.08429881877053291;
    tmp_msg_0.lon = 0.605863121793273;
    tmp_msg_0.z = 0.055394593867510666;
    tmp_msg_0.z_units = 169U;
    tmp_msg_0.custom.assign("TOTEXUYWNGMUJATIEANQCCENHTGKWMJQUBMDAAWSEOVERLKEBSZBWKFZDLWBVPFUOLIJWDYFAHWINIBYQVBJBERVYUPOMJCTMVZVZNINPTQSEEKALUQXDSUKCJHNHMXOILFPSYEKBZCXMJZGXYFMAVNLTSWUQAVCKFOFLFYSRHKRCVUQGXHDPDYMPZTRDHHYKCSOARXRZOXRIJCABDWIOBZHLGQRQZLJOTFWGGXSNPXPYRH");
    msg.arg.set(tmp_msg_0);
    msg.info.assign("HBEFQLXSTAVKBPRPWOHQMCLOAUXHDKNGVCZBUPAWTAWAXHFITMRKPCCOFKDGAEJIIJQUDGJPWVRGYXRGZCYMVQUKDLQZDOZOFTSELOXICOYJJLEMRZACQXSDSRUQBUXYIZFMMWMHKYBAXXEPUJYWWHBCIMOLTJLGOHFMHBSTKAIWGRSQVSYOTQBHBUDKTYUJRQNNCNYDPIEVCZVKKZ");

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
    msg.setTimeStamp(0.48863858030528706);
    msg.setSource(16300U);
    msg.setSourceEntity(205U);
    msg.setDestination(49084U);
    msg.setDestinationEntity(163U);
    msg.plan_count = 62437U;
    msg.plan_size = 3177660533U;
    msg.change_time = 0.5571012864118696;
    msg.change_sid = 17638U;
    msg.change_sname.assign("IMOVHRSKYUMEBYYJZTNLDUXBAZXFLLYJAPNWOSWMTFJGCAQXUITHIXVDITRNFMXEEOWMSCLQXAYPDTTPOKNXPRM");
    const signed char tmp_msg_0[] = {89, 92, 110, -7, 54, -8, 106, 78, -57, 26, 50, -4, -63, -3, 32, 13, -17, 51, -92, 103, -11, 18, -60, -57, 86, 113, 30, -67, 20, 15, 125, -78, 50, 112, -14, 74, 49, 118, 67, -100, 118, 8, 39, 15, 99, 73, 32, -127, -8, -31, -32, -4, -78, -38, -103, -106, -56, -101, 76, 6, 108, -48, 54, -121, 12, 60, -106, 55, -88, 83, -7, 114, 87, 9, -71, -69, -104, -23, 90, -66, -107, 47, 30, 84, 19, 9, 119, -98, -73, -25, -45, -80, 110, 85, 64, 29, -91, 84, -38, 78, 26, 43, -35, -63, 48, -119, -11, 19, -55, -22, -11, -105, -99, 25, 19, -2, 73, -18, -71, -38, 66, 29, -34, 14, 101, -72, -33, -22, 47, 77, -42, 11, 75, 50, 45, -17, -78, 123, 116, -100, -47, 3, 123, -105, -8, 112, 106, 11, 21, 106, 24, -76, 6, -30, -112, 41, 47, 106, -43, 99, -63, 73, -45, -45, -116, 119, 50, -78, 88, 96, 113, 11, 61, 48, 11, -9, 92, 14, -45, 24, -48, 74, 2, -74, -81, 111, -61, -99, 108, -28, -110};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("JWFOIZLBLGUBNZWZHDTEQIQJXEO");
    tmp_msg_1.plan_size = 16015U;
    tmp_msg_1.change_time = 0.9628592187640223;
    tmp_msg_1.change_sid = 61760U;
    tmp_msg_1.change_sname.assign("ODAFIBXQUBKFRWGATERUSBECUOFRXQWPNVWEFKPSMWZMTYDBIYNHQUCZJGYMBFLVDDOIGRJTXMQKLUDOOBAHQAFEFBPJNEHTCIYWZAWEGSNLAVUXSTQCKISMSBRZNVHDMKEHZKPSJLXTRBXONIXKPKXZDJ");
    const signed char tmp_tmp_msg_1_0[] = {38, 112, 3, -47, 22, -31, -39, 53, -120, -78, -73, 77, 103, -71, -75, 44, -55, -18, -35, -88, 11, -89, -35, 51, 88, 41, 44, 51, 53, -77, 52, -92, -82, 108, 83, -37, 124, -77, -6, -7, -111, 16, 35, -60, 16, -60, 122, 120, -76, -43, 109, 30, -5, 43, -56, -46, -109, -70, 93, -22, 62, 103, -99, -35, -34, -37, 79, 4, 112, 118, 36, 88, -22, 28, -69, -11, -114, -126, -70, 3, -84, 45, -36, -70, 107, -119, 105, 38, 67, -46, 68, -87, 4, -103, -61, 64, -4, 94, 35, -116, -78, 3, 79, -103, 41, -120, 29, -76, 47, -42, -68, -116, -70, 59, 15, 123, -47, -41, 17, -12, -4, -82, -112, 63, -114, 18, 61, -102, 6, -43, 88, 64, 76, 105, -40, -95, 12, 12, 43, -68, 2, -38, 43, 13, -44, -30, -63, -114, -67, 110, 60, 109, 61, 125, 108, 88, -65, -98, -113, 115, -78, -115, 19, -53, 5, 84, 25, -79, -119, 104, 87, 31, -120, 25, 57, -30, 111, -80, -57, 75, -7, -85, 113, 111, -68, 118, 3, 108, 102, -96, -51, 85, 63};
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
    msg.setTimeStamp(0.5696664698481594);
    msg.setSource(13357U);
    msg.setSourceEntity(25U);
    msg.setDestination(46337U);
    msg.setDestinationEntity(189U);
    msg.plan_count = 36667U;
    msg.plan_size = 3000224227U;
    msg.change_time = 0.43072965299078547;
    msg.change_sid = 4672U;
    msg.change_sname.assign("WNSSDYPPJGKZWSOFCKJHIHCQDFZVIWDANSKHWNRDAQOTCUPZYOFHYBDMYMVSOOQWVAPTNUPWEVQGKIMBKMFRUIERVGLZOPHDBEIBWTRHZXUHJZMTUZUIBNPEJANGTXQENLCVERJWFUXEYRQDFDQYUHWBMMJQXLJZXKCPSXYABCIOJAFYCXBISPNNGXLRVQHOETLBYHEKYOOTBSKPRDIGGFWXKFCLKISUCCEDAXM");
    const signed char tmp_msg_0[] = {10, -87, -44, -26, 44, 68, -84, 9, 91, -84, 24, -8, 116, 28, -42, 45, 125, -15, -102, 33, 86, -82, 72, -72, -81, -83, -26, 89, 55, 92, -39, 19, -73, -89, 15, 85, -60, 110, -106, 100, 70, 58, 19, -72, 126, 78, -86, 122, -123, 121, -16, -79, 61, -69, 55, 54, 21, 121, 91, -54, 29, 100, -75, -28, 121, 86, 34, -42, 87, -4, -20, -50, -2, 17, -80, -19, -10, 43, -112, -109, -42, 77, -4, -8, 50, -27, 26, -37, -86, 78, -40, 87, -124, -19, -116, 0, -81, 7, -27, -69, 56, 71, -104, -91, 36, -83, 105, -73, 97, 28, -29, 63, 92, -97, 61, 29, -113, -54, -7, -53, 123, 9, 86, 10, -83, 112, -16, -41, 69, 43, -39, 92, -76, 98, 102, 14, -113, -102, -68, 105, -2, -80, 41, 23, 31, -110, -110, 105, 109, -93, -126, -82, -96, 112, 53, -24, 105, 52, -19, 53, -71, -69, -31, -61, 35, -38, 78, 0, -124, 78, 105, 8, 118, -37, -84, -47, -48, -1, -45, 121, -8, 30, 81, 96, -66, -76, 94, -125, -81, 105, -114, 110, -34, -80, -95, 47, 83, 84, -14, -116, 117, -84, -25, -126, 3, 31, 8, 106, 126, 115, -101, 13, 89, -93};
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
    msg.setTimeStamp(0.29672820664140753);
    msg.setSource(54920U);
    msg.setSourceEntity(10U);
    msg.setDestination(349U);
    msg.setDestinationEntity(226U);
    msg.plan_count = 33781U;
    msg.plan_size = 2534735227U;
    msg.change_time = 0.9956886069014821;
    msg.change_sid = 900U;
    msg.change_sname.assign("HPJXZCONHMPPKNVQN");
    const signed char tmp_msg_0[] = {47, -12, -39, 107, -108, 82, 28, -32, -50, 20, 49, -90, 121, -122, -123, -68, 15, 86, -21, -50, 74, 105, -17, 12, -11, 71, -121, -30, -37, -53, -37, -5, -28, -49, -123, -11, 70, 37, 19, 92, 21, 119, 20, -1, 89, -97, 0, -35, -25, -90, 50, 33, 55, 20, 7, 45, -124, 109, 25, -75, -49, 55, -94, 97, -40, 114, -50, 86, -49, -21, 108, -64, 15, -39, 90, 121, -77, 66, -104, 100, -115, 37, 84, 38, -71, -32, 31, 100, -36, 18, -112, 107, -126, 94, -42, -82, -48, 74, -44, -60, -67, -120, -10, -19, 79, -39, 95, 34, -123, 9, -100, 112, -56, -33, -51, 15};
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
    msg.setTimeStamp(0.8723404760103848);
    msg.setSource(62737U);
    msg.setSourceEntity(149U);
    msg.setDestination(1575U);
    msg.setDestinationEntity(98U);
    msg.plan_id.assign("FNGYJCREWXCXCFSQTLOHX");
    msg.plan_size = 37733U;
    msg.change_time = 0.6569303413203165;
    msg.change_sid = 25755U;
    msg.change_sname.assign("YLVCHANJGLTPKENLJSNQPSKZDZGBUJVKDYWBZFODOQUSEPKIQWPOKMXSGFHLPBCXGYIDECMGATIOYFPWREKFOYDQUMXPVJPNIHYLSNULJUSO");
    const signed char tmp_msg_0[] = {-109, -100, 114, -106, -40, -114, 40, 30, 86, 61, -86, -21, -61, 10, 33, 46, 32, -18, -100, 98, -2, 115, 53, -86, -103, 70, -55, 87, -54, 63, -109, 80, 91, 74, 11, 70, 77, -40, 124, 95, 36, 51, 78, 105, -18, -86, -26, -48, -75, -82, 56, -90, 17, 88, 44, 108, 71, -78, 16, 27, 18, 126, -72, -30, 125, -105, -110, -57, -39, -22, -99, 122, -86, -56, 68, 3, 48, -48, 56, 85, 25, 90, -84, -55, 93, -116, 36, 6, 121, -73, 63, -110, -40, 2, -72, -47, -19, -62, -35, -45, 49, 115, 98, 19, -97, -49, -30, 50, 46, -8, -124, -87, 83, 19, -7, -122, -2, -23, 41, -113, -74, 42, 90, -66, -92, -28, -77, -3, -18, 75, 46, -88, -116, -58, -23, -100, 66, -28, 16, -31, -32, 40, 99, 1, -125, -124, 45, 58, -31, -94, -68, 77, 26, 74, 89, -59, 98, -30, -69, -21, 44, 8, -28, -116, -51, -101, -73, 9, 77, 12, -23, -33, 70, 15, 0, 13, -13, -53, 42, -119, -57, -109, -90, 37, 3, 57, -83, -95, -35, 61, 121, -43, -67, -52, 66, -101, 33, -63, 25, -117, -23, 61, -42, 16, -52, -80, -30, 24, -36, -116, 120, 92, 4, -99, -114, 36, 62, -17, -43, 6, 55, 41, -92, -37, -124, -53, -30, 116, -88, 107, -72, -46, 61, -128, 117, -123, 74};
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
    msg.setTimeStamp(0.9030215656147388);
    msg.setSource(52820U);
    msg.setSourceEntity(41U);
    msg.setDestination(29312U);
    msg.setDestinationEntity(160U);
    msg.plan_id.assign("XRAKBQWUINJ");
    msg.plan_size = 29934U;
    msg.change_time = 0.24311300767831212;
    msg.change_sid = 10259U;
    msg.change_sname.assign("QUHIAZNIUAKPUOAZZFIPGILRMMDEJLCWOLVLQIFQEYLSVGTOHSFOBPOAFZRMRNXURQKVIEUUQKWVSFVZXNAJXBANYYYEPLOYUGHRTKDQYSJOWUPHYFDYWSTQEEHCGSZBMDGTGFWTMWCVJNTSHLNIKDEIKTHMTGJPERDXZMZMRUMXBALHPNRHXLWJXAGLGYPWXCRASKOZCJJUPOTSCJWXVQKVBCVBEFBQNAOS");
    const signed char tmp_msg_0[] = {-1, 109, 117, -2, -46, -46, -32, -56, 32, -99, -27, -118, -52, 56, 8, -71, -95, -111, 12, -67, -120, -127, 35, 65, -28, -90, -36, 86, -44, 82, -124, 67, -60, 97, -89, -54, -124, 121, -126, -11, -23, 80, -62, -50, 39, 64, -78, 28, 7, -64, 18, -46, 115, 72, 87, -49, -124, -44, 80, 73, -77, 47, 53, -9, 51, 85, 0, -37, 112, -48, -23, 48, -51, 54, 49, -123, -81, 43, -33, 23, 54, -33, 29, 68, 25, 26, -99, -87, 10, -44, -115, 85, -102, 6, -73, -82, -2, -22, -77, -29, 98, -107, 8, 54, 66, 61, 27, 50, 99, -107, -46, 44, 91, 108, 88, 65, -74, 31, -25, 57, 0, 39, 92, -116, -50, -33, -116, -38, 16, -114, 62, 65, 24, -70, 28, -12, 72, -106, -43, 120, -13, -81, 78, -80, 14, 6, -80, 5, 78, -46, 3, -98, 68, 12, -2, 10};
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
    msg.setTimeStamp(0.10928691047154326);
    msg.setSource(18959U);
    msg.setSourceEntity(104U);
    msg.setDestination(437U);
    msg.setDestinationEntity(70U);
    msg.plan_id.assign("YNOYOWPQTLIFZAMZWSEVZKLBKOVCABNINNAHLCYSDUYBDGXGNRJWHTGUUECEKOJIZFABDLYAIHLMHITYMCORFDGRVXPGWVSEGDEHVMGELBUJETRGDPQQMJKLVUQPYHIXMLKDEJVWDHRBKAOPQUTPPKBASQFTLXRISZXVRVRFJVFMXUQPZMFOMPQCG");
    msg.plan_size = 33810U;
    msg.change_time = 0.8050318640273324;
    msg.change_sid = 31941U;
    msg.change_sname.assign("JZHSTFMHGMRWRBGBQGCDHCLZARXOYYUEBVWFQIIGZFUEXDTGPKWXNTBMLPVNEEY");
    const signed char tmp_msg_0[] = {-115, 68, -66, -21, 24, 15, -27, 53, 55, 46, 34, -120, -108, 88, 76, -56, -114, 71, 123, -40, -29, 107, 114, 80, 41, 43, -72, -106, 61, 20, -32, 111, -61, 95, -75, 106, 120, -32, -23, -78, -37, -82, 13, -68, -9, 47, 62, -69, -120, 25, 54, 5, -42, 28, -49, -96, 72, -74, 16, -114};
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
    msg.setTimeStamp(0.9158446356705366);
    msg.setSource(40216U);
    msg.setSourceEntity(180U);
    msg.setDestination(18530U);
    msg.setDestinationEntity(28U);
    msg.type = 127U;
    msg.op = 229U;
    msg.request_id = 2193U;
    msg.plan_id.assign("NHTIODVJDYHGOHBSMYKZDFUJHLEWZRAUXCDWYCRKUGRTTJGYJMWQNIBOZQGSKLQNGLFKFFKSOQOFQKHEEURWMHNIMXUYIEZRPFEATPIENHGJKTNIXVCSSUERQTLRNWYPVCTTQDWPDXQGKBPYNJIWPUBYVYBZCXBRMEBZECUZDCIPYZXTWDVAWGNDVMPWXAFVNKSIAOOJVJDBQHSFEOBM");
    msg.flags = 61264U;
    IMC::Calibration tmp_msg_0;
    tmp_msg_0.duration = 6618U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("SRCKLOUXTSMINETWNSAWBXLBZCJVHSMFGPYXYHKQROHECRJDIPYMXIKVNPVUEPGQPGHKATTGHGMIBOVCEOWKNYSNDGJCOFLADWSXQFZPTUBBDVMSRRIAYIZRHEGHAQVWVADVRXBQPDREINLNIMV");

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
    msg.setTimeStamp(0.8244175935015619);
    msg.setSource(45007U);
    msg.setSourceEntity(32U);
    msg.setDestination(6581U);
    msg.setDestinationEntity(142U);
    msg.type = 66U;
    msg.op = 159U;
    msg.request_id = 35560U;
    msg.plan_id.assign("NQEHJJEZXTMHOBGWINDCELNXUFVXAAMCMUHSHVNLPOZJZ");
    msg.flags = 56131U;
    IMC::AlignmentState tmp_msg_0;
    tmp_msg_0.state = 102U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("PVINFUNAFDKZOHKIPDPLQGVGTYUNFKDOWIXAOFLUKQFDIAYWBZPRTZXECBESAUBVGYLGYPRRSESBYHAXJWPCNRMTFTGPUXPRHBLCCBZBQARAOVZYLMORMYXGFMQYJRFESERHIBNITSWNODMLKMPFXHKWWBLVVQSIQDCHIDJSZSJLHAWJKNUOGU");

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
    msg.setTimeStamp(0.9770197677260568);
    msg.setSource(35743U);
    msg.setSourceEntity(181U);
    msg.setDestination(28396U);
    msg.setDestinationEntity(132U);
    msg.type = 174U;
    msg.op = 143U;
    msg.request_id = 15182U;
    msg.plan_id.assign("NUJAWUEIITSLOFJJQFBBSGHRGLSKTEXEXOCK");
    msg.flags = 57711U;
    IMC::GetParametersXml tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JCUOPANFQCETSEVBBOQNQMWKWLTNLSSDXJDKPZTWGCYGMAUXTLGDYBZXFSLAJHVXWUNFNWBIRXLUQCBAGKJNPGEKCRROGHLBMFVVEHXAJPUIGMAYYDXHYIKEQFVPRGPNUFZTEZCNSTWBVATDSAZGQMOAMTIDCIOCEZSCXSULBMXUFKJJYVYIWEBRIKPPYOWUFHMPLLOZIRRR");

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
    msg.setTimeStamp(0.5633864573573595);
    msg.setSource(27528U);
    msg.setSourceEntity(45U);
    msg.setDestination(1773U);
    msg.setDestinationEntity(142U);
    msg.state = 86U;
    msg.plan_id.assign("TBACXLVYQEZVILOLRAIFOLYQDIFFGMSDPRKKJRTHZWNDJIQMVSBXDJCSDZPHAHUGKJAOQQNMNAEQZXTCCEIMXIPRYLZFWVXWVDULSENKSMTLMCOJTPOZSETQJRUUVHOAYQLNPYPHGSCUQZAWNPHVUGFDXGRAFWPYIYIDKIUVNABRKGOMBCHCBGWVMH");
    msg.plan_eta = -990074071;
    msg.plan_progress = 0.1489905105561362;
    msg.man_id.assign("XOQKCSIQCNREFOQKAFMVKNICAPOVXRNUMJUKOPGHCEYWHILMAHMOSUMJOGCSTXLVSPWIHFERGTXKKKZYPSWIXGFPDEPOWOMTHKQBSENJVJIUGIQUIFBRZGRGMZYIYQLJNWLTPDEDMUNRWAQHVQDXDTFNAXBLGLCXBEPJCWVSGFHRTZYUHLPMJNDDUBLROJDFLWAK");
    msg.man_type = 22643U;
    msg.man_eta = -1999513789;
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
    msg.setTimeStamp(0.31129831779699746);
    msg.setSource(62207U);
    msg.setSourceEntity(88U);
    msg.setDestination(36629U);
    msg.setDestinationEntity(175U);
    msg.state = 159U;
    msg.plan_id.assign("ULICFCOZDVCJDVRLLQEXYPMRWIXPHLGCNSTYDMDCYQYCGUCRHFBTZBOKTJHHUXBHTTHAQIOJBQMBXBQGOTWDOGJXNIDJDVNMBMZKSNPZDWE");
    msg.plan_eta = 411573902;
    msg.plan_progress = 0.013522326582422362;
    msg.man_id.assign("LLCJOZPJJDLTYKEEKASWNVYCNUSMOPBHEWKRHBZOTCXJVKKGTAINXNPQYRLZSOSVFVBXGBUVAUPIEWNIHDFIFVETMQPHDFHQYIVELUXASETJRKBSQHMUZXCGYLPRTGCPXZTZJITQENFOMRSGISFBOHFVEIJDKOFYMCQWRZNUGDDBHAMMWOKXCIXHCGUOYYMQNWUGLBTVQNSAMLRSWGAYFPKNZBLUJXKHERQBDV");
    msg.man_type = 1677U;
    msg.man_eta = 1984978705;
    msg.last_outcome = 88U;

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
    msg.setTimeStamp(0.5674546830815592);
    msg.setSource(24386U);
    msg.setSourceEntity(174U);
    msg.setDestination(48140U);
    msg.setDestinationEntity(233U);
    msg.state = 70U;
    msg.plan_id.assign("AXBFSKRSNCCFGOCAYGPVEONEPUSWFHFDKQPBWEUKDGRZGXKSLXQYLPFHELPWWOHYYVHTBLWQFMLZMTWDEFSDIKSJZNFCBPTIVRKDDCRZAQIMNJZUVNTJUMNPSLIOVQYXTJTUQXCGXSJJEMYDGIWBZIOAUVGXURFGWYXEIMHEZRPJCBIUWAABJQPLAMAYRXTTIAMEVLEZDVJVCQQRTMRBGYNXZOHZHNDFOKHKTQUYKGHOOPBSN");
    msg.plan_eta = 1726186607;
    msg.plan_progress = 0.864197877032101;
    msg.man_id.assign("ALDAYATIWJXBJEWKJTOCSIDTHUWXGGODGCSFVLZJBEPYLIBYZQMREWNSXKLTRYWPGHJXAVEPSRGGZVTELHIQNCQBYDBULNIKPMXC");
    msg.man_type = 38724U;
    msg.man_eta = -1105436654;
    msg.last_outcome = 56U;

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
    msg.setTimeStamp(0.9418674482906044);
    msg.setSource(7072U);
    msg.setSourceEntity(63U);
    msg.setDestination(17321U);
    msg.setDestinationEntity(79U);
    msg.name.assign("NSYZQRMNTMKRUMPXIPXBMMCXELLYDLQIDFUWHSPKPIVAKCCVGMYZIUJCTRRKIXKEDBTPJGOZXWTVRRFOUCRLEQFGYTVOYOUSLEIYMBOHKTSLZA");
    msg.value.assign("NBYGIGQCHWSONLACKBKKTMYBBXCKFYAWUVXGQRUSAIPNYHPGTFYMIUDLNDEXPUENZRATZILUOZOUKPSLETEDLZCDTNCMJXMQRFQGPISURSXJJAZZUHRWNCLBTVYTXZVSVXYTXIAEIRSBMMRHMTGPMCQX");
    msg.type = 200U;
    msg.access = 174U;

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
    msg.setTimeStamp(0.8413008953372085);
    msg.setSource(57677U);
    msg.setSourceEntity(70U);
    msg.setDestination(35686U);
    msg.setDestinationEntity(66U);
    msg.name.assign("SNHLQUYWYFSSJJOGBNPOAIAAMNKUMOVQIUBLTCNPUXMZOQWDKJTZBPRIQFTJTQGMGDOIHWKFGTHLDHUORTFLPOLYEMZNZAWBIMELCCEJSNSRIKWDWCUZOPQGRDTSBWUUMBLFZEPRQJFWHEFQXCFOVJQDMCLEPZEAVEJPHCBXDXYKGANATRXXHSYSZVKVXJJCDKFBVSKXGRIEEYZYSNWBAALYIQKFXHCLVABIGNGYZHKHPPRCVXDVUNO");
    msg.value.assign("PCKDZCYNBPZFZKYCMVGMAAYCIUMKOSUDKXBGWPSTJDLFJFXUMUDBAJBJDEWNSLGWHYKQQOWINMRKEUROIBCKIRKEUWEVEFEXQFZYHELDLJWXNHLLCOJZEYXJJBABOLFMSBSVZPGVBVRSQP");
    msg.type = 16U;
    msg.access = 31U;

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
    msg.setTimeStamp(0.009476828782844393);
    msg.setSource(36212U);
    msg.setSourceEntity(33U);
    msg.setDestination(24825U);
    msg.setDestinationEntity(149U);
    msg.name.assign("TBMIDAFKZHOSJFWKSNZMJUJYHEAZCLEMXJOTTPPIDHFJBNRDAGKXSWEYIMFSCLAYC");
    msg.value.assign("NECKXUGUTEDVIPJBYSIFBFQDBSKTIVFQZPNBFBDVSMIEWSRXNZDEALZDALCWYIZSTLQMBEGKORZKAVFRSPUTYPOGMLYKCLNEHEVGMDGTNIUEFZOHJHSXVMDAFHYQTALXDOOKEWOCIWCWFICHWNUYRKXXLGMACZBXPJVKZWYKJRJAFHWJWRSMMDAPSKPJPZPR");
    msg.type = 147U;
    msg.access = 151U;

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
    msg.setTimeStamp(0.5989565408180973);
    msg.setSource(41193U);
    msg.setSourceEntity(69U);
    msg.setDestination(52085U);
    msg.setDestinationEntity(41U);
    msg.cmd = 186U;
    msg.op = 21U;
    msg.plan_id.assign("EKFAFHHSDJKCSKGKJQTNETAWTXAWDGUTGYBYTYCNRPSXHQIFNPRVDSQXQUHFFJICSHRZPMZRPGKYGBZXFWVWZYEOWQLXHYFBHCKDCSVDZRXYJOQEYVIGFIIOKVWAMZAQKJFTNLHEUQCMEIIBEIGRKTEXJNUOCYOXOFUIMGWAQOGUZHBWDBODSJXWJNMZRAAVCVDE");
    msg.params.assign("MNFTLTEKYBGYGCMJUTNOHVUCKVHMZJFAOSKZYDXVSNFOWDJOQIIUNZQCYFWUZDGGQATJYBXAODIEKIPVXFIGWAOWPNEUTRUGQSKWFGEYWSGBZECHBW");

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
    msg.setTimeStamp(0.23033284922546726);
    msg.setSource(4081U);
    msg.setSourceEntity(243U);
    msg.setDestination(8519U);
    msg.setDestinationEntity(23U);
    msg.cmd = 20U;
    msg.op = 203U;
    msg.plan_id.assign("TKZXVAPVVLOOWYYRREZQMGOEWTLICVTIGYZUGZJLNPLWLURNRCBN");
    msg.params.assign("NGKHIEJKXLPNCYXHKOLKTXRXPQNUIUKIFAMYVVAZLYYNUMCPSZZRQHQFKJLBTDDKHZGBHDQGIMYZODMWNUHLLGLQORGABFXWPKNVDTBQESCVRQJBPAFEMPAAOKWGXUXZKREDIHJOGWCJTZLQIUWSMFJFFJVZEVGTDOFZSTNNOOUSCWFDRGLFAUXWVYIEROSREHPAJTBTBDUBJQUVZNHEYSXCBBQVOPYPAISEDCMLCRSNTRSCIYMTECPWWH");

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
    msg.setTimeStamp(0.2450750506883499);
    msg.setSource(21974U);
    msg.setSourceEntity(156U);
    msg.setDestination(22179U);
    msg.setDestinationEntity(147U);
    msg.cmd = 147U;
    msg.op = 72U;
    msg.plan_id.assign("EKBGBAGLYFTSSHOTQFCDOULTVPRLVDWPGCI");
    msg.params.assign("CMBZNRIFAHGZKQINBFTPUQLUVNNCLRTHTRYQLVIFKCPTRYVUPJGJFYNPWVFMPYUFBIIBYWMDBRUSHIJOAXQXWCEDORZUTLXKPQGUOCPGYPDZKSPMOEEEJXBMIEANXALORQYKOXLJVEFDYMXHSHCQ");

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
    msg.setTimeStamp(0.7601099531921924);
    msg.setSource(42182U);
    msg.setSourceEntity(232U);
    msg.setDestination(739U);
    msg.setDestinationEntity(215U);
    msg.group_name.assign("WQXWEAEBRXPIDKQBMHOZNRGAOJBMUPDDNUCSWXDLZAOQNRHGFOVLZVLMGJTSIPJPJVWFHETZPKZPZTMQKBDBKDIWBUZQAAZGSLTCFXQUDYHPXMIVHXVXYOFOCUWYKVLLVTPSISKEWCOYQOOKXJTIITCGFNZTJVAYECDSNWJMRFRHIHYEQSRCBVRBAFGSWKYCNRDULJEFARLYXBGHATNTJMVFMEMFPBIUCSQKGCGOLSPUNGRNHY");
    msg.op = 133U;
    msg.lat = 0.6930003179181035;
    msg.lon = 0.02410931468046229;
    msg.height = 0.5617246737095866;
    msg.x = 0.1438082511664358;
    msg.y = 0.02653437618575205;
    msg.z = 0.658815602386466;
    msg.phi = 0.2892431861395619;
    msg.theta = 0.6855213825494272;
    msg.psi = 0.6911373173064579;
    msg.vx = 0.12556826844181468;
    msg.vy = 0.5140093950340122;
    msg.vz = 0.08053531425918337;
    msg.p = 0.2088967900005657;
    msg.q = 0.4333983998990608;
    msg.r = 0.05748492940763472;
    msg.svx = 0.31464987011782874;
    msg.svy = 0.9363164800107985;
    msg.svz = 0.6627125929822861;

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
    msg.setTimeStamp(0.8498626493747521);
    msg.setSource(21773U);
    msg.setSourceEntity(199U);
    msg.setDestination(61241U);
    msg.setDestinationEntity(214U);
    msg.group_name.assign("UZKKZVKFUPUHKWDIJPXQTHCRFCVBBXWXNLMDHGNFCXGYMBFOTMTYQZWLMOJMXZMNNFKINXVTYKNRGPDBLGWWEDPAJYDQFPQCSLGSOAIDCWQPJRQIVZQDSYMVPPKJSEYMZHTIYFHLUEMEAINVTOHUDCCEGZRETFSISUTFUEAKLRXNXACOOITIGNLLWUUDWGHOIQBBSEO");
    msg.op = 128U;
    msg.lat = 0.3295482631212677;
    msg.lon = 0.8317836073602413;
    msg.height = 0.9191560600362313;
    msg.x = 0.9867813915836049;
    msg.y = 0.8500137843534525;
    msg.z = 0.8142866073097498;
    msg.phi = 0.6574777176792632;
    msg.theta = 0.5848436658313424;
    msg.psi = 0.017764573069888212;
    msg.vx = 0.6008228298240955;
    msg.vy = 0.3418101791913295;
    msg.vz = 0.7187993635034755;
    msg.p = 0.3145301061425656;
    msg.q = 0.21434813616780568;
    msg.r = 0.3641412258185194;
    msg.svx = 0.5073117873027938;
    msg.svy = 0.22926944031574892;
    msg.svz = 0.9145371222940385;

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
    msg.setTimeStamp(0.649491169130881);
    msg.setSource(7543U);
    msg.setSourceEntity(182U);
    msg.setDestination(49692U);
    msg.setDestinationEntity(1U);
    msg.group_name.assign("WZBRKATGXZSYNVFCICNDILUOUWVELHFGKOGDQLMKOVCRZDPPGUMEJFQOIYDXJIWSNZYCPCTFNLFITLFOUMPSLYVHRCVCIQQUBQLXCVCXZJYBHNKLVORZHKWUZEWKVWMNPQTZBVEIKKPVOJWYFAWJBRDBTJRFTONSAIAYJHZYBOURFPBGYKUQHGIMAHXHMGEXXDWXPSENFQSQDARLOJQDUGNNHJMXPTTATBJDSTYI");
    msg.op = 245U;
    msg.lat = 0.40539528807386294;
    msg.lon = 0.7817527808594295;
    msg.height = 0.5204178107739588;
    msg.x = 0.6324747218841962;
    msg.y = 0.8324840280141297;
    msg.z = 0.26899532186956376;
    msg.phi = 0.27530352545004755;
    msg.theta = 0.70940460433737;
    msg.psi = 0.3775290311780871;
    msg.vx = 0.4302841690663589;
    msg.vy = 0.4377500189761956;
    msg.vz = 0.9704584926285336;
    msg.p = 0.46585409810240697;
    msg.q = 0.8616552872939206;
    msg.r = 0.9794846637359026;
    msg.svx = 0.32459252946473394;
    msg.svy = 0.5073920077094178;
    msg.svz = 0.18102400881934344;

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
    msg.setTimeStamp(0.36281584903092157);
    msg.setSource(55545U);
    msg.setSourceEntity(143U);
    msg.setDestination(39221U);
    msg.setDestinationEntity(8U);
    msg.plan_id.assign("KJGKNVEPBWMOKZAGYWXXTPXFVAZYRAVSAVFFEJUSUNOLSZNEVILKHARTALMABCKCUMAUVCNOMFUPNDXDDIMZHYWMOBHJBXLBSQSLPCZZJSRDCWBXXQHKHMIUTTPVBTYRBUOGSYGLIIRMMWGQDNYAPXJTUURDGJZHPOKWFXZLEKBPNJFQAKNTUILESFENRIRQWQMRSIGCFCPHCGCJVHYCQDWQWZQDYDTJNHPHOEOJETFYERZV");
    msg.type = 17U;
    msg.properties = 13U;
    msg.durations.assign("QVWETXMIKLZEQMJDWSLAEUGUDWVMUEMHGQMDQYNJSHFPRBXVZFDGNYXZTGUWTCIGMCFOSCCSKKXRAJTSIYTEMIVCEUPMAWBYHJXRDCLEAFDLGBNOZZNZWXNKXGPRVAJHKAXALNRLQMTBHSGKUQOXHJWMDZCZRPLKTVBB");
    msg.distances.assign("SXCHTBSNYEOGEOWDMDNRFYZKRSLIXIIJLJJBDMUPXPOXUHNIILRPGHNVAKEWQYCUZOBSXGAGWFTBHGJZSHWHLKAZGKQUMQWNEMFMMIYBYZUCQRMP");
    msg.actions.assign("XIHMNYCGEXUHJQSOUUBQMFZKERGFOKGUNPXQCYBBZTEFWUHNJOHDSJGJRSYFDYVCRDQJXYBDFCBPOKYEXDEXVTTRGVTHQSIPEIOAONCWWMFFBKUSLLIYWPMGPZJUILHDMZPWYDGQTAXTPPJLNVCMWVGGDJEDKHMN");
    msg.fuel.assign("TMJEFHYHSXOCOEQZZIOVRSQEINAILRYXPCBWBMZTWUAFUAKNXFJGOPHHRMKEBDDLVLXPIFQVTMZXITMDAOGACVRKPSRE");

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
    msg.setTimeStamp(0.8749115941893313);
    msg.setSource(33699U);
    msg.setSourceEntity(248U);
    msg.setDestination(25407U);
    msg.setDestinationEntity(171U);
    msg.plan_id.assign("ZXMSCOSJACRAOERWEMGWUTJSLHRPEOAHFEBTFTRKKAYZUVQLUKGPXBVVWQ");
    msg.type = 23U;
    msg.properties = 5U;
    msg.durations.assign("CZGRCEVBAYARYOFTQMLGBIHRGXRDNCPORCUMLHI");
    msg.distances.assign("VORKSFFJCQNOYDAGRUJGFENHNURVVBTPQYPJARZUFSSZONNBMVIDIXQUOCOKBKZPXUCYZBNPDUHGHCOQJHTUWHBONBDZGLYFVXYBVTQTQQZZJMIADWUIJKQSPEAKHMXRNXZDWBTKMKMRYI");
    msg.actions.assign("ZHZGVLFANXQAPWXYFYIIQESQBDITNEWLLCMVRRZILIWKUKQCEGLBXZABPMDJRXEUGMLNYILYKBKBWJKORKKPCDBOUTWNFHGPSNESWBNRBEYYNTUVFRKGUFHHGBEMSUDWDGSCYAOMWVXCPSRKQBHVYHFCOAMWGZTEJAQOQJTHHLVMCAZQTOPSMITDRJSTPZXWCXJQANHAOTYVLAZMDOX");
    msg.fuel.assign("OYHQTAWLIDPNNZJQCCZMGFSNLYYDABEZZWIHNLBKADAPEIHMEGJYLDFKTSSXPHGDEEIKQVPMYCXIOUFXPZLWHWESPSTJRRNHSTUMOJBJFAOAJHNMHQDXVIAYSKTWBKDFHXEQYTTFCRTGYLDRUSEZONKAKUUVGQOWNVAPSCOCYUIMMSUJWEVCOGNOCBZKNBR");

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
    msg.setTimeStamp(0.872744284822542);
    msg.setSource(2644U);
    msg.setSourceEntity(116U);
    msg.setDestination(44987U);
    msg.setDestinationEntity(123U);
    msg.plan_id.assign("ZUXHZWRHWRNUTJMOQDKSCPISHQYSFAQADKQCCMYTBEUENWXIODZBEVWRGHHIPUVZPTKGHNUVZNGGVFOVSDWVAOSIMTYLVGHRPKDWAJUZIKMXYFKCSPHBQNFYJPVFSFYOXIWLLLLJCZXMEGYPIKYYNVWXZEDXLJLEUANRXBTBQNTKTJGMIORUHIDRJFGXGFBKEFADBVZJOSMPYLQCQMBOUCRNCTBAQWH");
    msg.type = 204U;
    msg.properties = 39U;
    msg.durations.assign("NIGTKALOVJCLREQHOGKZKQFVMOXZHXTXPANYEDBYUNEJQQZIPITRHXT");
    msg.distances.assign("CGOLTNNJDESQCTUDPSFKFVCCPFJMKITURXTJBVKWRGMNIESGSAGRRNWBRIHWNNDEJQQDOVASHIBEVQMKFMQKPAXPVB");
    msg.actions.assign("GRQIIVPSFOKMZYSEZPMNKEFWQLGVGVCKPWGENOBNSKJHUMXUIHMXNWJUXHAZCRHYRMPKDMPVFYOTHSNQNJDLBSJJCRYZXJAISAWMJJGTOSAWZQQEGIMPFQYLUXURZPXLMFRTDXVTBBZVVRCOEOCSTQRREAXWQBYCQBQLPJNHHWUBW");
    msg.fuel.assign("JAHNJQYCKMWIRTFGPUFJHYYWYFSCQXBDMKWKCQHVOVTFMCQYEKHIHPVPMQILUVWINABORTBNUFJOZAXGSZOHTRNUNXQMBDMXORLTERKLGGDW");

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
    msg.setTimeStamp(0.7088377224419279);
    msg.setSource(27300U);
    msg.setSourceEntity(54U);
    msg.setDestination(13894U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.515471928035469;
    msg.lon = 0.5083981864663657;
    msg.depth = 0.0027492289935109326;
    msg.roll = 0.9020750276484211;
    msg.pitch = 0.42675358932140484;
    msg.yaw = 0.6200424645227994;
    msg.rcp_time = 0.31233939768483854;
    msg.sid.assign("OEXJSUNTSQSEWMLMSQBPCZWPFPISAOQMKZMNJRSEWWTOJYGHVGKOPOCEVRADHIVHUG");
    msg.s_type = 233U;

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
    msg.setTimeStamp(0.6493080769666009);
    msg.setSource(3752U);
    msg.setSourceEntity(83U);
    msg.setDestination(45281U);
    msg.setDestinationEntity(159U);
    msg.lat = 0.05948245369934346;
    msg.lon = 0.7611191270225419;
    msg.depth = 0.019093885024375368;
    msg.roll = 0.7505734416640731;
    msg.pitch = 0.6504242951708443;
    msg.yaw = 0.6766322682083474;
    msg.rcp_time = 0.29652753688040345;
    msg.sid.assign("LVKUHASMFLCXQWTLP");
    msg.s_type = 32U;

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
    msg.setTimeStamp(0.32125724290558944);
    msg.setSource(57466U);
    msg.setSourceEntity(22U);
    msg.setDestination(8985U);
    msg.setDestinationEntity(186U);
    msg.lat = 0.8866527266727333;
    msg.lon = 0.1662220289899412;
    msg.depth = 0.06359521595559547;
    msg.roll = 0.5545539133377937;
    msg.pitch = 0.9727180635982694;
    msg.yaw = 0.2959000447306622;
    msg.rcp_time = 0.6339246399030675;
    msg.sid.assign("WYKBQNFDIAMQWTIVRLFSJXXGAMSKVUMOPFXCBIVPWJGAWDEOYXMTTDRJSHJLUVBHNGPORMKXILLOPBOTZQUESGDRMYYCNMWPELUVTBKNZRNUYUQIAHSHZKPTOQZGDZHDKBZDDAECBJPEFCMAQJBXMNGPKENYNHQMJGNSEYHQBCJCSHOHPRZTYL");
    msg.s_type = 118U;

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
    msg.setTimeStamp(0.23460180032405686);
    msg.setSource(764U);
    msg.setSourceEntity(73U);
    msg.setDestination(54087U);
    msg.setDestinationEntity(140U);
    msg.id.assign("YXXIGRMZWHUCTGNDKKGRMDEMIJNINGJAKNPVXAUKQCOEFOUWHDTQTVNOGCVELIFWZUXCHWVRGCUDQRYJJMGXLSSMBETBJFPRWHYECRPLPWKSKMEIIBUBSQNIQEZUDZIQEVCLM");
    msg.sensor_class.assign("EUBVXRIEBKNKZXAYBINTTMGJJDYXQXJRKFJZMGDKYDDYDCQJDHXPBOUJUV");
    msg.lat = 0.17205548548435878;
    msg.lon = 0.8198382165993833;
    msg.alt = 0.31020800331725973;
    msg.heading = 0.3161480501965166;
    msg.data.assign("KSAZHRISJOLTBLSUKIFRFRYOZHQCLGYNZJHIJXZDNUUMLRTNSYDSHKPZURZBCIJEGGDGBNKWOYHMP");

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
    msg.setTimeStamp(0.6782554553952959);
    msg.setSource(43919U);
    msg.setSourceEntity(77U);
    msg.setDestination(19636U);
    msg.setDestinationEntity(222U);
    msg.id.assign("VHFXMWVXYKGLODJ");
    msg.sensor_class.assign("EHAZSIWFEAPGZMOVQYVIIRCQLYCPVWAKNAJXOAUTVXKKNPYXPCXRXZDMOIBFUUWFABOPJLQIFXXZJQGHFCZHTLQJCKHEGQRMKZUVXLUHAWSMNZLFNYYBLIOUZCLRPMSLOGXDYWOEFTCEJVBLDECSHTYMKNGAGABGSEYSDMMLQJRJVPPOEGRVIPQEIBDBDWOTNFXHZRGAYHUMDSNJRVBCZVFBGTSEHUDSHRKTTJTPDRUFKTSJWBWKINQN");
    msg.lat = 0.37888982601075727;
    msg.lon = 0.5833516892594777;
    msg.alt = 0.27469844630686957;
    msg.heading = 0.22696514940589085;
    msg.data.assign("NQEDRCEFCUMVZWOKNAUXNVIYYAKLRNBXWTXHUCERTVIXPDGWIPPWATQBQTCKLHTUEEFMFFUMCQMSPHKDAWSVYJJKODGNZDXGROSPBQWJOLKBTEFTACNSDSCBHUWRHWIBIQGJKCFJVAQILZFCOYWVTRZYAPKHITVVIUSG");

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
    msg.setTimeStamp(0.12707811024644233);
    msg.setSource(52703U);
    msg.setSourceEntity(237U);
    msg.setDestination(52015U);
    msg.setDestinationEntity(160U);
    msg.id.assign("ZORPCQJYYDKMDVHILSFDRYDFRWVLWXXTOPWKMUGJHZCOLIBORCJZMFHZNQBAQYLKSEFIUEUVQBGNAXXSUMMOOGXUKSHXPVYZHBVDVSCWXNBKAORBNTZAMIWVKACVQIUJGFLJAUUFJYETZBHRENONOSPCYKPKXDGGHIERTQRTWIMUPOEDQLINTKFWQECSAHTWFPXJQWMALAFCTFYIHEBNVDPNZMSJHBYSTRZZEGNLLWGRDIA");
    msg.sensor_class.assign("UDIFCNEXOMIUESQLECBDIEWNFJTVJAGEPRGZQYUNAJHWSKYRDHUPHELZVDGFQKJWBCMVSULGFDNYQOJXGLNROAPNVQBZSCPFXEGKZXWOUXSYLVIKCBCGKPBDPKDKMAKMOINDHRIERTLBXYHECQIHLTHFJJYSNQWLBJVUSVVCMLIPWNSDZCWMTLZPRRQJGNHAXKZZBTTUAMROBASMXWSTHTFKOURATRVAMJXYF");
    msg.lat = 0.7749881389598229;
    msg.lon = 0.8263363878610144;
    msg.alt = 0.29418238094406324;
    msg.heading = 0.8903246961213069;
    msg.data.assign("UBKPCMLQZGUTJROWVBYNGISEYNWNXHOOQCKOMEKMUHQDYKUFVOAKSZZFEWKWITHJZKMOHCOCLGZDMCUQZWGHBHSPIPKLVSBIJYRWLZITPNGS");

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
    msg.setTimeStamp(0.37160217922695893);
    msg.setSource(16100U);
    msg.setSourceEntity(149U);
    msg.setDestination(59457U);
    msg.setDestinationEntity(32U);
    msg.id.assign("WEXEHZEHJXMGQTMWSCFQTRZMFRHYSXZXXUIPRNCVJMBLMAQYHGGRGEKRXLJDPBCFFAZGAIKVIGWYDFXTEARCGLNJPTQKJBCGFHUYRPVFDEDOUQYRKYMPTSATQYVEMNUCBCIRDKJYSTWSYZBHCODVQTZCFUDASNPPZSOWONUBBEXVEHZOAWWVUUZBLQLVPNLASKNHXUSWUCRAMDLKIAOJXNDFILWZWMPSOBNMJQBHFVEOKJLIKKINLTOJYG");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("XJCWMEIHIDRLJUGINPNHCAZOQMHRKCHBXZGSXLYETWKKSDPLNDBEJYNTVMDJCQMTAVXLLSMHUEXZQKCULAOAUBDHJSCYUFOHFSRBEBUYCURCVULZ");
    tmp_msg_0.feature_type = 157U;
    tmp_msg_0.rgb_red = 118U;
    tmp_msg_0.rgb_green = 234U;
    tmp_msg_0.rgb_blue = 8U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.03219585296049243;
    tmp_tmp_msg_0_0.lon = 0.5628126320823945;
    tmp_tmp_msg_0_0.alt = 0.5972563494840029;
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
    msg.setTimeStamp(0.954343957088133);
    msg.setSource(55185U);
    msg.setSourceEntity(202U);
    msg.setDestination(53417U);
    msg.setDestinationEntity(134U);
    msg.id.assign("IXWBIKOTFLNLDEPFXUSMQRVYKDVUVIKXARJUJJUPEKNBBLMHBLOIETBJAXUVTXBMTPIUCRCHMKYFO");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("SYCVONLQUHXCRZFJOZHXTBKOEYMECTIMWBIHMWNHQRCFVUCRPZZGKTPBYAUKSDMPGJTUCWDFWUKYJILYNEJLDOXTMIVOIELDRUTPIRXOYSQOQSHMNPQGLVUHAQPZNOQGARVKBSBSKCLLZZYTOWERAHMGPFEPDJFWTEGGNTZMHC");
    tmp_msg_0.feature_type = 28U;
    tmp_msg_0.rgb_red = 217U;
    tmp_msg_0.rgb_green = 191U;
    tmp_msg_0.rgb_blue = 68U;
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
    msg.setTimeStamp(0.22777126914454948);
    msg.setSource(8566U);
    msg.setSourceEntity(151U);
    msg.setDestination(40058U);
    msg.setDestinationEntity(79U);
    msg.id.assign("IAQGWUFOIFSETQKMVGBNIDXZCBKTMONVPEXILXMDCNHBUWUGIWYLYSNFGMKJZOQIAAXUOQAAOHMJJTJCCKVFQTTGKRYFWRRMZTHHBPGESWSIDMBSXCVJPNJTCSADQTEDLGXFWTLEJBEGZBURJKNRUYXPAXNPOVPBWPMLJLZLOQEHSQYYELHUIVKOXNKPLFJVRIYSPEWRGFADQVDXZASCFURCIHOYCBZAUBNZHVZOWUQDDMFGDMPHHVYTZ");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("WRJREJNEZEPNPSHCOYUZEALLPJJPQQSYYBNGDOWVECRMRFNWMRPMOCTMXYXFBDVHAZKV");
    tmp_msg_0.feature_type = 48U;
    tmp_msg_0.rgb_red = 234U;
    tmp_msg_0.rgb_green = 45U;
    tmp_msg_0.rgb_blue = 57U;
    IMC::MapPoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.2220349375065369;
    tmp_tmp_msg_0_0.lon = 0.0012469060909900964;
    tmp_tmp_msg_0_0.alt = 0.4826692155791088;
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
    msg.setTimeStamp(0.9224677227368254);
    msg.setSource(58479U);
    msg.setSourceEntity(9U);
    msg.setDestination(57570U);
    msg.setDestinationEntity(114U);
    msg.id.assign("OASAHFUGOCOWTCBMKEMQSJBVOUUYELNHGOXJJVBNIYPUXCSYTFCCGKVJHAQPMWXXEZNAS");
    msg.feature_type = 150U;
    msg.rgb_red = 90U;
    msg.rgb_green = 13U;
    msg.rgb_blue = 22U;

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
    msg.setTimeStamp(0.009928330119957418);
    msg.setSource(8130U);
    msg.setSourceEntity(166U);
    msg.setDestination(7022U);
    msg.setDestinationEntity(17U);
    msg.id.assign("OSRQUMUPTXQNBICGSKTQGIVHDBQSBCLSZGAPBCDTKREMDEMNFTURWMGKTKXEITCKWHIVTULEWVBRHSPFRSQOBNPXXJJPVVQZKWFGHOLVRISXVDYQJZOJLNAQWVPCUMFXWUJKYFJPCROREHAWF");
    msg.feature_type = 101U;
    msg.rgb_red = 119U;
    msg.rgb_green = 29U;
    msg.rgb_blue = 182U;

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
    msg.setTimeStamp(0.9226688852575178);
    msg.setSource(24878U);
    msg.setSourceEntity(47U);
    msg.setDestination(14117U);
    msg.setDestinationEntity(165U);
    msg.id.assign("VIONXDVFVXJNKUELSFPETCGDQSXBASGLZYIHZGJIGZITRXFRISFSXHTDZLJNKOIZLDROSHVWOLBOSERPDZWABQRZZNLYWMDCJDIPTZBDXHJMGHCROXEVFXGMU");
    msg.feature_type = 21U;
    msg.rgb_red = 43U;
    msg.rgb_green = 132U;
    msg.rgb_blue = 37U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.02279688661861201;
    tmp_msg_0.lon = 0.7056102475748216;
    tmp_msg_0.alt = 0.6752152608441842;
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
    msg.setTimeStamp(0.16412013901490086);
    msg.setSource(17976U);
    msg.setSourceEntity(13U);
    msg.setDestination(55912U);
    msg.setDestinationEntity(118U);
    msg.lat = 0.6547047679323421;
    msg.lon = 0.2649571889366069;
    msg.alt = 0.34174193894184646;

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
    msg.setTimeStamp(0.7537039362957636);
    msg.setSource(64571U);
    msg.setSourceEntity(133U);
    msg.setDestination(29506U);
    msg.setDestinationEntity(89U);
    msg.lat = 0.13205330385648406;
    msg.lon = 0.09221282128473496;
    msg.alt = 0.9467326011134847;

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
    msg.setTimeStamp(0.9048563879824916);
    msg.setSource(51853U);
    msg.setSourceEntity(235U);
    msg.setDestination(21461U);
    msg.setDestinationEntity(143U);
    msg.lat = 0.042367024099020045;
    msg.lon = 0.7679380024041604;
    msg.alt = 0.7124844309230666;

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
    msg.setTimeStamp(0.42913544195507813);
    msg.setSource(64653U);
    msg.setSourceEntity(16U);
    msg.setDestination(15869U);
    msg.setDestinationEntity(2U);
    msg.type = 40U;
    msg.id.assign("UYCHMSNRTWKTEBCTAGYECJTFEUBJIMOHYLDTPPNVIAKVWVOEXZYMRVGRSLDFJWLWBOWIXUCUCGRJNWZA");
    IMC::ButtonEvent tmp_msg_0;
    tmp_msg_0.button = 137U;
    tmp_msg_0.value = 165U;
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
    msg.setTimeStamp(0.0660790960737303);
    msg.setSource(53574U);
    msg.setSourceEntity(80U);
    msg.setDestination(29217U);
    msg.setDestinationEntity(254U);
    msg.type = 209U;
    msg.id.assign("RIUUDTFMRHCLGRORSOOAWWIEJSYWQNMEKMBKRRGIMGPTKBMZMOQIXNULDTCZPWBVQXKPYUBTIGZVDZGWOPLHCKACOPXAUIQJTKEXNQBDG");
    IMC::OpticalBackscatter tmp_msg_0;
    tmp_msg_0.value = 0.868750392087253;
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
    msg.setTimeStamp(0.6935926353164559);
    msg.setSource(47102U);
    msg.setSourceEntity(210U);
    msg.setDestination(26485U);
    msg.setDestinationEntity(31U);
    msg.type = 242U;
    msg.id.assign("AOHSGYPLIJOHOACAXECJTXXHKSQDMIHTYARGMOBDDSVGOHXPQRPHNMBQTNNMLKLQVPZEGGKUYEJJVGTYCIRPHRAGQJHXIZUKYYPPGYPJIIYFTFSOLSGXFNZHNNLLWABDAEWBYFCZAMUFAREPKWIISYCUQZTJNZKKERUOWCJQTXO");
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 25992U;
    tmp_msg_0.name.assign("LJFSWFJPTKNQTPSGZWQTASZLPHJBSFUOBSABZCXTHURTLVSGYUURWTQEBIGKAPENYRPHXKTKBKGDXIIVTUCUFYDMMGNIICXPFXPV");
    tmp_msg_0.custom.assign("LLBEPJXJACWOAEMFKETZUEPMVNIIOLMNBWZNDBHYRFZIVFRKNEMNWSDHSMLUAVMCMENFOUVVQKTBHHXOFUSTDIRYLJSFGCJOIRUWLAWYSP");
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
    msg.setTimeStamp(0.47175222719271126);
    msg.setSource(5598U);
    msg.setSourceEntity(81U);
    msg.setDestination(61520U);
    msg.setDestinationEntity(90U);
    msg.localname.assign("USMDAFKTXPZKYRZHIQXJYMPZCKWNKURVAWOVJQVXXWPDGZQUENXOUDEGTTHGHDCWOKDFFLCADNHVWNXXNHMNMXLANZBGQSFINQFISONLJXTMLLBWIHNLYBBMJAHUZWHOTZMITJRQPYFISYEOFQPQKSARWVVKHEJTUGGBYESWKARORSRGXYMKPPDRCBJJQIBUGGLMTSEJWULRPVASIZPJRFCKCSLBECYYIETQMHVOVDDY");

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
    msg.setTimeStamp(0.6846029331501499);
    msg.setSource(58547U);
    msg.setSourceEntity(143U);
    msg.setDestination(37176U);
    msg.setDestinationEntity(227U);
    msg.localname.assign("CTJSHWGIQOYZWAPBYGQMFSYBTLRHKDMARSOGOJCVXQWIEIOJDEHNVRBJQBWMYNS");

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
    msg.setTimeStamp(0.8207142482809506);
    msg.setSource(55958U);
    msg.setSourceEntity(233U);
    msg.setDestination(25618U);
    msg.setDestinationEntity(65U);
    msg.localname.assign("SDHQCFNCWZWIXLGXIDFRUJL");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("OJFIALZQDYFARKMKFRMUAXYBHLEQUQGYMKJGNBBFGKSEX");
    tmp_msg_0.sys_type = 143U;
    tmp_msg_0.owner = 62404U;
    tmp_msg_0.lat = 0.678336736102828;
    tmp_msg_0.lon = 0.041545850772115256;
    tmp_msg_0.height = 0.9394807159926098;
    tmp_msg_0.services.assign("TADDIDVKQTDRXWKMZFGSTUYFKEQHMTJOHVHOXBHERUPFVTNJIDEJSVAGXYZUFYKQGCAHAAUNQFRYFIEVLUXJFXSRLMOWBBQDZXMGMTRRZVXTIEQNOQPUMXFWGHSIPVLFSCWGIVLYZCHVU");
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
    msg.setTimeStamp(0.10544087291470061);
    msg.setSource(7181U);
    msg.setSourceEntity(191U);
    msg.setDestination(27415U);
    msg.setDestinationEntity(122U);
    msg.timeline.assign("BGOOGIXFUNNFJUQYQWBHISOTPXRAHSWLXRXEIJIFWP");
    msg.predicate.assign("MAFEVGLGKJIXYZDFVQHQSMPOCQSTNMLEZWHMGLQDBCCTDIZHQUEHDRBEBUGFKAXDHBYFNTNDAXQENKZZNWFHJIDXRSKLOSYTM");
    msg.attributes.assign("SWUHANCPKMRQJZTLFYBBYORA");

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
    msg.setTimeStamp(0.6625473032392817);
    msg.setSource(51466U);
    msg.setSourceEntity(201U);
    msg.setDestination(38224U);
    msg.setDestinationEntity(238U);
    msg.timeline.assign("BYHRLUVCZRRPIVAOOMRUDTACEJKKNVGEAANM");
    msg.predicate.assign("HXXRCHJZLTIKHOSQSIMKUZSDVOEIVJZAXAGFPFRCDCIETNRHPWWOOQBZPOJUBDSUCSSILTZGNDMBGUUGLCQAEQPHVBKQXQVTTBNMLHGZVHTGHZFMVKUJOWSYCYEANWMOGVFILWUARBNGCFYPDCFBHGACKRRAPEAE");
    msg.attributes.assign("QDCMJBGCRIZHQOZIURIUTLSAIISETNYKQZFKGMXYOLSLAEZFQBKOYWMHGIQONFPDZVZJNVVDMUORXUTRCYBDKCXSGZLNJUYIQAUWQXULECUMJJUQOTCATBVKKXPAQBOWZCMANXIFDAWVRMTBWVORSRZDSNFFZEHFHIGEHUGPAJWSJKHEKVADXDNWBEHLTGFCIG");

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
    msg.setTimeStamp(0.10341016232874856);
    msg.setSource(58249U);
    msg.setSourceEntity(205U);
    msg.setDestination(43230U);
    msg.setDestinationEntity(195U);
    msg.timeline.assign("ACXZKLUIXYNEVWYDZTXKOPMLWNNDRGECKDGPOCJYAHSVUIQQRRXQJUOXBFVJGZZLSAWOPALQUOPTTXXZTBBSSKRBZIKJDOTJSYNUBCDGPJWCYOGZWYEBHKFHVRVSPAGHHHMPEFRMSDUJUQZVMLVYITMFMLTGZSIOFDJWHGZNKHWMWPMKUSRENTIAPULEIIQETAHTRAHQDCJFIUMDQMEKNNFVA");
    msg.predicate.assign("FTOCZXJQMBMPFYRYBIYIOSSUCEZCHNCBHJRTIARRTKVWOUAOMCNTULXWRBWNDGOSVDLFBPAQMXUEPCNJPCPTZJEQTSNUYVLRYVOGFLTHCTSBYDBIGDJJUZEYVALUGAASGQIBHKSESZUQVNKUMIMQXCAPRXFWGHYZFKALLWJYRFQHIIPXDNWZEBPHZPONDJGQM");
    msg.attributes.assign("BJDFGUNLDHZHJJBXBTIXKRGJLFSUKWIPURSGGDYOQVVVQFMWRGMZABXNPHUOPBIEJXSNEOMINCFPSZMVAGJDPQQTXQCJGGLWEMLOYYERMCADIEPHOAJHTPCESLIZJIQSNNCPWVRADWGMATEKVXMHYUFEVYXQOBFMK");

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
    msg.setTimeStamp(0.3424872372940462);
    msg.setSource(56258U);
    msg.setSourceEntity(10U);
    msg.setDestination(27090U);
    msg.setDestinationEntity(126U);
    msg.command = 178U;
    msg.goal_id.assign("ESJYUWWMHGHYHURXNGZPEVIQABQKMKTDLJPQUHCWSZKETIJCPTXIDWLIBFFSRWIHELSBYMNIZHRSNFVPOSOODAOJULVSNSOQPKUGLMOWTYIEYWHRMAYJKKZXCOKVGGYIVUATJBTXEQBMBNKDLCTRPZZOYHFVMGRGCWQKPCSKHJVDDVWAM");
    msg.goal_xml.assign("TEPZFCNZJVBAKANCUCSDNLCSJLGRXOJOEIEOARRPAAXCFWUTDOJRPVHEXLZQUWXKUWMIYCRJOPHGYZRZCQVQKFVSUGLBSNLLUEJHIP");

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
    msg.setTimeStamp(0.4200452511660452);
    msg.setSource(20598U);
    msg.setSourceEntity(10U);
    msg.setDestination(40837U);
    msg.setDestinationEntity(149U);
    msg.command = 112U;
    msg.goal_id.assign("WTKKBPMJRYBGWNDNRWJGJLPMHEWCEHLTJHMOGTXNHQOHSAFBPDWUZHRINVMZOYJFIZMMIOJYQQOSMXFZLVXGVYBEYTLBXXSPYRJPXBFWQDRGPNEGPAWCTSLUJVBIUUYOHHVAWEZOLXTQPNGAARJQRRYSMFDUJEKYZQZANNUIVKSVWVTBXGQBEERAAROFEKUKDLKIUSIEVDHIKFYXLDFFTTKQCGDMDXGCZLCLWICNKZTUACNICACZHPVDB");
    msg.goal_xml.assign("ELBPQPYLWRRFHDUYXRFGHCVICPMMVBHDCQMILAYNZMRZIXQDPYBOOFNIKDBKXCRZHDEP");

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
    msg.setTimeStamp(0.978486191600537);
    msg.setSource(62636U);
    msg.setSourceEntity(182U);
    msg.setDestination(51659U);
    msg.setDestinationEntity(28U);
    msg.command = 134U;
    msg.goal_id.assign("GCIAQNWHANCYIQSDGYMBQTXMKQWCSPMEIFEERJOZIXGUVOIKQUIENEVKSOUPYHYOPLNIGPTWGLXBJUYDLFGCILWFLQCONFGCYJET");
    msg.goal_xml.assign("MNGZIBTHWDDAPAETJDMKWLPJPGOXXLOVCKSSFCYLGTHKAVTZSUYRXGRBBHFNOOYBWRPVBJOZCOLXQFROFUUAPOJTAGSMJKKJYFCEIUEPQWNAPQFIHVQIJ");

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
    msg.setTimeStamp(0.6005766487941492);
    msg.setSource(8105U);
    msg.setSourceEntity(235U);
    msg.setDestination(38026U);
    msg.setDestinationEntity(64U);
    msg.op = 146U;
    msg.goal_id.assign("QUMQBKFSXTSVFRKQIEMWFESJZULUUVWAWMGFSVODOJWPCOGOCKTHVHEXLOJCRXDPRXXSZTBDXHVTLAJWJXFRTANMKBTBM");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("HGZTWZILAKIIEYESOSBBENRMFRCFMXOYOXLMAPRIHVYGQQNQJFBPZNAUVRZXZOLBCPYLARQWFGGVQYTKATSWEVMIMFJOKGCVUOQZVTUDBNKWFYGQVJMQNXFPRCJKDEKGAPATDWETZNMQSHBHHCLXSEKPBORE");
    tmp_msg_0.predicate.assign("REUWKIHNRBYYJSUYEJZTFVD");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("HHMPXIRQYITOVEQFOEEJZQNEFWGNZLNSBOAOCPLD");
    tmp_tmp_msg_0_0.attr_type = 35U;
    tmp_tmp_msg_0_0.min.assign("VQMEFUQPRIBZDIHJTSIEMYDHMNWGBIGCQGUPBZTJOQXEDZQUGBFLFJCNFQXGCWCBYTRKXMGNVETNEULKCYEHTTBAKSZFPYOKHLUZUPXDIHJPQQHGENQLSYWODEMJWLIOAOLVAABKRLIMMLVBFUPRSXFDJCAMCYPDSRSOSIACOLCHVTNJETZKLJZUOANVWMXWWVK");
    tmp_tmp_msg_0_0.max.assign("YASIWPFXNWYIMRCPIKDWLDUSUNLXLMTOASNYBUBBOOWFCRSFJZTBPBEXQJKCVHZKLNZEGKQDEAEMWPUTTDGWHRZUFNVXRMBMYVDGELCXKMZFLKMMI");
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
    msg.setTimeStamp(0.007030217567537522);
    msg.setSource(61130U);
    msg.setSourceEntity(11U);
    msg.setDestination(15961U);
    msg.setDestinationEntity(224U);
    msg.op = 161U;
    msg.goal_id.assign("YEPXMBUITXEIIODECVWKLGPFMUGHBALMKOOIWVAKPAJBSQVFDULSGZTOCGQO");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("XRJSIJAGCTXMKETQBTEKCZVMHBMTILXVUVDVIKILDOSKUWYSSSUHIYDFJNWKBGYHCIYPESGQDCPADAVYKNIXGHSHDRFRWIUCFVZRHBAOEOMUTWXNYOLJQPQNTFQULDKWYSAMNZLZLHR");
    tmp_msg_0.predicate.assign("LPKMDFGXMXWJGJBXSSQMPNUFTZSOBCFCMGJSZZUOYFAQJCIXXTPZPQSVXDHLTCDYTNFKXOCVET");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("IOFHZZHMGDCPITMNUGHSVAQUKAFNPWSSSXBYECZHIPZSEGVORWTEIWRTZGCAEPBMBLDXKCMAIDCJLXQPOUKJNHYONDTLLJQRUWYRKXVTGGPELIEWPNZQHVYDOGMLVRECJWFXTHKMUJSWOWFSO");
    tmp_tmp_msg_0_0.attr_type = 102U;
    tmp_tmp_msg_0_0.min.assign("UWXJCKVDNTTBXMVIUWFGAQCMJAJTBSJTXGEZFDAIQLXGGRFTSPHKAGMOHNMHGHFTFRBZWRNVYSYQLBMJPRMPIRTVHERNSSSZHCUBOXXCTVOFZJIOFKYALXADKQKBUICDRHINIVCJKLRELCVNWJDBVNPEGAUOONBXOQSNQVSBHQMYEZKUEOMPCWEWEHCFJXQVDW");
    tmp_tmp_msg_0_0.max.assign("YMTJAFVXSXWNWLRFEHRODZKUVWUGRDHNBSEPCVSIOYKFBIULSXBPKKTPBZFPQCFUYUGJDWDCQKENSAIHRFTHJMOWCTWXNWSAJEYGVVQBOLZBEBGDNGGHQOVGPBTCQOPQLACUZJTLCOHAHYGDIHRNMOJLVQLIXZMXRKZDMYGBATEPAKUALILMSXYDWKICEINPAZNSQZKKQTHVXNCRFPTEYWFHUMM");
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
    msg.setTimeStamp(0.8395208538473572);
    msg.setSource(7325U);
    msg.setSourceEntity(160U);
    msg.setDestination(48829U);
    msg.setDestinationEntity(217U);
    msg.op = 44U;
    msg.goal_id.assign("KGHOZYSFRNEIAXLFOKJTPSGHBRTPNPBDUORUXXBWATZXEOPFGBYKAJSEGJDJCOUMLOHLDPITSHOUWCMFWQPIVNJYQNVLJBOFMISUGYUQQNEQTUHRKABFXNJVRBAPLKVGEJFROSAHWRILYGZCPYZDDUZSQIXMNEEIDWMMFQIXZGAMALCZGQXFRYZJXZBUAKWNHVKJPWTCLH");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("GGEULPVFKPCJHBTNUWUIORLJJLVFARXTXDJJPISLASGWXKPQGEAFMOPOILHVAUCFJMYRQANKNNKCKARHZSTMGRKCBHZWHFPZBLHYMIWUCMLVZWSKFITSBGELREPRVDDRAZBEDBYEXJGZDMNGFVREBTUTCSIUYSWNHBYHLOZFWQGVCVPFAXMZQVIWINOXXJWQK");
    tmp_msg_0.predicate.assign("WRTYMEDOCVUMPCVGUTCMGSRAUPFLAYHYCGPILREDZFHPJMZQMPJLXJBNHTLPLFUWBLAKGNGGNQPNBIGSQZOAWNJFVOVXUYJ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("JNPFVAUHULAVZMVJBKQNBSTODQRGXTKCUHFWEOPGCCTKSOHISOQILTGJEWEMWYUSQQYIRBZEZJSMERHACIJOIWYXRUKLFACJZCHIMLQDLMZFOADHUJBNCHNABQPGAHVOXDANWKCDZQXXEVNROWSDLBSWAGXCRFSPCFYPGTUQKBTFJWAMMZOUWNLDZPVFGETEUILNYHBRYGHB");
    tmp_tmp_msg_0_0.attr_type = 96U;
    tmp_tmp_msg_0_0.min.assign("MVJFAOLTUHEFXNNKOMZUTQIRDWKZLAEZODGSUOZDRPDMFHLTIHVBMHLMBIBULWVAWSQMZCJGLXFMTPQRJDNNDBWALNPXSCEFXTXWGDYYWTOW");
    tmp_tmp_msg_0_0.max.assign("GXPHBBXZSPV");
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
    msg.setTimeStamp(0.02246521808705837);
    msg.setSource(2598U);
    msg.setSourceEntity(47U);
    msg.setDestination(63030U);
    msg.setDestinationEntity(237U);
    msg.name.assign("JCKVYXDTEPLTFXUGNYXISXKIUPDPHCEFTUZQCVAWMYGCSWWZDIVOQGSSCWEVAKXUIZIRKAQJRJPRGDLUXNACVZOEKDMLYBPGFHHOELJDHGVTFRBVWITQWMSBVSJPRMSJWZYCVZAYXFSIMMOADYJDBRNNOUHKBFLMYMUHEPGGEOWLQQJMKSDUTYKAONPFJNCIZOYCBLXFUZN");
    msg.attr_type = 158U;
    msg.min.assign("ZPCMOXRURUEDULSSRHFCQYCYOQUNHGAVDJB");
    msg.max.assign("PWMUVHSRMLOSTARJUZOSMLGCDEOGEFTXTRY");

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
    msg.setTimeStamp(0.7311881605310457);
    msg.setSource(20192U);
    msg.setSourceEntity(188U);
    msg.setDestination(4359U);
    msg.setDestinationEntity(130U);
    msg.name.assign("NEIGGBDCDFASTPYGNLSFQRDULYWZFKQUBSTMVGTADFJVKDOMHGWOVMDZBRQLMRCCHPYINUTNKBMUILLCRWVRGJHHXPJPXQETQODYSNERZMTRFILYMVOEARFJIBWXOYKNCCASVNJCSOUFJAVIFRUGPBWWEMQFAZIKRDXMJVGCALHYTBZEPHAPBYNAEOIOOZFZSYBLKPJKUWXQGTDUPHPQGNSZXCWX");
    msg.attr_type = 228U;
    msg.min.assign("EITFOMIGVJEXCKMBLOJXMAHDLGDWZVKCTYEJMVHBUHXFEWYWTNXZQGOUVTMHYUYGGTPRPUHSUSELKTAJVPAXUAPTIDZRBZQIEEFVDWKDNLFPHDIBYOXRMGYBRLFZCOBODSNNQUFCSKSJDVYNHXUKSIDLRRHSARAKARTYSJNCBJVECRYCPOCTQUGWLFJNZWPNWMGQIVOWWFIVFE");
    msg.max.assign("IQWHNBXEGPWLTAAYHOAZPQZRZTIHPOAKCCDBGXOVZNLSQTOLKIXKEVGRRYIADCRNAIDBJWFNHWMBHJPICVUMPLAMXIDIEWCYUHQSECIUZEJBYKOXCDOGGCHWFTVDUKJMHXVADFFWJGPJLPGKPNXJYLUBNZBFEQZRGSTOMFQMRAYZTXENVTGURDFOQOLWMRVKSCVDLYEQAVENUTRZQNKHOUNLBUTXYIYCSHML");

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
    msg.setTimeStamp(0.5671981351366734);
    msg.setSource(27676U);
    msg.setSourceEntity(71U);
    msg.setDestination(26881U);
    msg.setDestinationEntity(246U);
    msg.name.assign("XSCNKYJVMVQZBMBFJXIFLSLHOFKZRDJXJIPYWQQRPHASEGBKMEZGKWGAUTIVFCCPBYDIUSKQVIVIUOWDDATOKLUUQCJRTMRLHROJYOVRYBCQUXDTOITXGN");
    msg.attr_type = 26U;
    msg.min.assign("WUOEJNFVFZCRXBUGJWACSBVMDHLZLBKPCMTCIWXTJYFCT");
    msg.max.assign("YNHWEUZLAVJHMRLOMPAZNULWIQ");

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
    msg.setTimeStamp(0.867785316596927);
    msg.setSource(36311U);
    msg.setSourceEntity(238U);
    msg.setDestination(54195U);
    msg.setDestinationEntity(84U);
    msg.timeline.assign("HTUYRTLNTWTVAIDAQKYCWCSCJUXFTNNKBOJOPYPDPVVUAFCCMXSHLIBWERBXRPWITQOSVDMDQWVULMKOJJEZNMHZAACVRTIMKNUMQEXZBZEENERLPMYOXHQSOAJDGZRAQBVKQPNIIFRSNHVLZJPPYVJBUUQBEGRJUULNBYQUCTOIDZYNHOKDZGYPZHMKFKIHWGBSCBVGFESAJGXWFWTFPQWFYXE");
    msg.predicate.assign("CAKVWRMQKNHSTMPUZASCTKEYYUVYNCHNJOWHZQLMYRFDHBXKBKMRVQFTEHBTAMSCRXAPNNCIZZBOJUYSPZOFCNUYCSBXWQVOLPIXODLRGWGRJJZWJIQECELNOKXPEPVEWCIIQZWPVAMBJQRWXYDYD");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("ASEXXXATGRHSDLSHRKPSZYEFGWGXDECCDHMIOFTNITZBDUJEOJOWIJRAGSURTFPQFGKKWOLMAE");
    tmp_msg_0.attr_type = 2U;
    tmp_msg_0.min.assign("DKYZMZIBDCUIOGRUORTTYIBGGLYWVXVWGOXCPQWUDEUXBPJIINYUFOJLIDRTWYTFWUHAOK");
    tmp_msg_0.max.assign("OFLACLKCQLOKBJDQRVEIQKRLGNGYMNPVBYNJBQHHSWDGWHTGYHXLKMPPGOHPGCSEEZFUJPMQNFTAWOWJSFJZVSSNXFFYUUDRXCZRWMKJZSDYVFUGKVNBBGOBHAKRTTZXHTFTEDMVVUIIGXLDZVIYPRHKXSEQTQASLQUXRQZCPYAGACDUUIODJCNAETWSRRIAUWMUTYNFIEMZTMFBZYBJNHMCNSWXKYL");
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
    msg.setTimeStamp(0.8136192003673453);
    msg.setSource(7064U);
    msg.setSourceEntity(207U);
    msg.setDestination(9561U);
    msg.setDestinationEntity(69U);
    msg.timeline.assign("PNBQJRNDEFMYWYYIPJXDUBRIEHXGBQVPLQYXEKWRJZTUEXVQBGJYIVMBHPINWAMELNTDQOCLMIROSEIXDLAHHVZVPQHTWBKZEWXAFAIMYZFJAOBXZGKFLHPFTZAPSUUKCNRYKXUCWVALNGYPOYMD");
    msg.predicate.assign("HWJCXBDIJNCAENZTKXDSPEJTEUXSWPANZBWGMTFGIYPGISODVYGAOALOXZABKHBOKHZTMZDHKROKUTKYRXGPFNOPVGHICFQMONMRJELHYBWNPVGJQAMJHLICCLKZEVPJFNOOQGYMEAUDFUXSYSMQPEWQBUUCSKHQTJRIFNZVZJTDVRRHZYGD");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("FKWSLCWHFPPYCBXDMQVAMZBYYOPZOXINGEETRGHIKAGAWJQPUKOEMEPBBNSRSJSPDKSVAZQJFFXVTICELMHGGCOOTZYKER");
    tmp_msg_0.attr_type = 73U;
    tmp_msg_0.min.assign("NCMYKCGICZKNOJPGTXDZOFSRJBHERJHXZWQGBAFLFLVPGOZYSVBLYOKPLXGF");
    tmp_msg_0.max.assign("BTUFLYOZSWTMDQRMMSHGT");
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
    msg.setTimeStamp(0.9708776109848225);
    msg.setSource(44025U);
    msg.setSourceEntity(250U);
    msg.setDestination(31557U);
    msg.setDestinationEntity(216U);
    msg.timeline.assign("ISVRLYKIOEMFWUUJVMZFCWXOZQAEJJYIOSMELRGXNPTHKIRLVERKKOKDTUXTWLLCTWTHHQIGFBCJDDHUANLEMPXXHOSMNEJBBXPNBFGQAYDVKGMQGMOIYQYKMTDBJWUINLMQRCUZEVIQCWUFJFSQHJQTPIOHKASPZRZHNLRBAFHGNEYRVGAFVXNCSWCOGTGKBMZOIDCLL");
    msg.predicate.assign("ULDQLXFTWAHYCENJAEPOOUAEEDJYFISBMWPPDBQSNCSWOSHOZRWKDZNUDUPMGOXWCYVTGHTRNRTZYLJBINFGRGVANZYFKJFSVIURNOGHWPISDWBQGIPDIKAXFACZOTKFMBHBCYUHQHIA");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("AOHIWTEPUFLHRXBAYFWQIZFKLHKAFWVYQGMDOTSJKVGORCROIXGBUGPZX");
    tmp_msg_0.attr_type = 7U;
    tmp_msg_0.min.assign("SQFIKEROEQVFPKHEZJTNSWSOVYGMGHKBGVENPHUJMHLWUOCKFETDUZALGXGREYBRUZAAVZUVYPSPCGDCALSNXWRSDUNFFHGLCPYITBVAWCQYMRAFFINAOGQZKPVTHCAWJMWSTRNQYRFHCGSXDOHBOCMLYKIXEFJVQZBRWOZINDZMHPLDJMBDVVHEQIZLXMLMMDUKNOUTPWCETRAQCNSJPFBEJYU");
    tmp_msg_0.max.assign("PFOYXWQYLSBYLDMTYRWIFMNDOGBVCGLDFUOHFIHRQBCLZCGLHUXPEXKDAURXJERWYVHAFIFZRSQXKMOKDUASBBMRMSUXTYNPBKIAQTYJWW");
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
    msg.setTimeStamp(0.939130082630049);
    msg.setSource(23002U);
    msg.setSourceEntity(170U);
    msg.setDestination(38760U);
    msg.setDestinationEntity(117U);
    msg.reactor.assign("PWFYVRIBIZQXUTSEZYNCIQWUMBHUEFOFPBLNZOUMAQTUXQFNMNNWKODUTWKRXRRWPEFQOSBUJBGLNHVOVGAEDYGMTAHICLXISJJFHVCHALZFZGMSWCQRKDSJHPSGB");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("FQEOASZALRXJAXWQNWKZBLUYTONJXTLTIOQOJCDPOJRPSQOKPMKPBUMUIOZLIRQSNXDRNSNKGBCFLWJLSBYWGTKBZHJKLDMEFQCXDAVRYECCZFOVJMYKXHTNWMENPYCAMUGKXRXJYFLWJPFBGPQK");
    tmp_msg_0.predicate.assign("RXDYYUFSFFNXCLAKDWMIRUSWPMITUPLOPHBAILGGKNAJRPILGXELKMAZRQQCWUWRDCGYEKBLQJKPDJILSBEVRDXFJMFQVYZEAECHAHWEJEKMANZWQXUYIMSQGCVZDQXHOFLOUXNTABZSJHVOZBLVXCNGZBP");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("NZRCXLOZRSWABEZFIQQOQWJDILKNECUYYGCLHBOYUDJPFIWJSFMVHMJQJPZEVRBBEVLYGKDTAEZNYGDSFMYDLADNXDZPDYJTBXOOQWSHRSXPMPBNMNMTIFTEGIVORPFWJWAOBBGMYCVUWPRJXVVMGRAZPHHQYHDWQXCOXCULTVUSZHLULPKFKQKFPCHSNIARMHGUACXSUQHENKSVLUKDENWCTZJXATIKFXA");
    tmp_tmp_msg_0_0.attr_type = 241U;
    tmp_tmp_msg_0_0.min.assign("XHFVMOJSVZEKNQMHHCPKEMSHIDJVLDCNPCRYZGWCWTWEVPURQBEYWWIGXSPM");
    tmp_tmp_msg_0_0.max.assign("GLMTJNOWURVWEMYPZUUFYCVTOOCQUXIBLIMJDSPVDWESQMPLWXBUKIKNNLXYCRBVZAEFJOVVJCAXFVBHJTGAKDIGPATRRXXHAYOLCFQMSSEBYKENUPZNEYUJPCLNCYZAZTMGPHJDCDEIBVXFMTEGAHHOHHTTFWASQIWKMHRCFCLBTRNXSQYPXFIDYJQJWVNKHOZQBMWZP");
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
    msg.setTimeStamp(0.8935394705394749);
    msg.setSource(5977U);
    msg.setSourceEntity(139U);
    msg.setDestination(47507U);
    msg.setDestinationEntity(142U);
    msg.reactor.assign("KDFXPQSXHEOWOJNTDCWSIHQXCTVGJAGOMVYXVIGMNZXSYMORSUANMMXFNUJYLJRZVHWKDEFRSDFOQLAPXCOTVUIWVFPJEP");

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
    msg.setTimeStamp(0.05063848674293436);
    msg.setSource(17763U);
    msg.setSourceEntity(225U);
    msg.setDestination(16110U);
    msg.setDestinationEntity(168U);
    msg.reactor.assign("ODMGIVGMTIBAHLXPPDISYAWSPFTLJRFSFRBAUGDHBVXCUELARRPUKZNLVSTYHZYZZEPMBKZZSOMENTYUDBXVKPLVDCEIMHYAYBWUDNJBLFWLPLMOLNKWBCZKCROSVDIRFRIWXCHFCIIAC");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("ANUILECAKXCDSSFEXUSYGWYMIU");
    tmp_msg_0.predicate.assign("ZCNQBMQSNGTNQXKJAYAHRLAVJGPZVYETEIFKAKEDWWWWGCIHUXUJOZHPEWPFPVRZRSBO");
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
    msg.setTimeStamp(0.17013563100917406);
    msg.setSource(4100U);
    msg.setSourceEntity(168U);
    msg.setDestination(62642U);
    msg.setDestinationEntity(189U);
    msg.topic.assign("RFASEGWIOSLYULWPJYGKGNFLAEOZPPHNZRFSUPHOCHZXBVOKNUFZFZWIDWBKEXIXXSIMZQTJWDMHMNEDVASWUHTGLQJCOVQFOYTWFIEUPIKPJHPYSMQXEKDVGCQOTGDADDCRDQURJFHCUNZCHNGAVLRYWICBRKJTI");
    msg.data.assign("YQCTWSSTAXTYWJVFPRXUQIJUKLUWKRLDKLYUCMKDUFDSFQMVRGVRTYGWNYKXKLSGABNXEFJHVPHELLSJARCCDWPDXMSYZVIXVADFYJAPGVEGXIHAUUMLMZMWRNOTHMQFICBHDGFZVUCDZBJLTPBNZNZHBZIUAVHJAKQ");

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
    msg.setTimeStamp(0.6984386828711944);
    msg.setSource(41530U);
    msg.setSourceEntity(6U);
    msg.setDestination(34571U);
    msg.setDestinationEntity(11U);
    msg.topic.assign("FGQNULHAEYPQWGCOMSBNFYGLIVJZAKHXTEZTGRWFUTIJVBYPDXUNYASDDYAN");
    msg.data.assign("IDETLXFAJOWEIGBOUPNUAOCZSMORGVGZXAHYEWZYPZMDGT");

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
    msg.setTimeStamp(0.9535495407201481);
    msg.setSource(19610U);
    msg.setSourceEntity(65U);
    msg.setDestination(47641U);
    msg.setDestinationEntity(153U);
    msg.topic.assign("HNCCKAXHGSQMWHRGZFYMZTFATBKIWAVMSVEOPEGZBGYPFTYOTTBSAQDDQJOSBYLEUISUJHUVZCUOEWPECTCPLHFVNCNKWBXXWORFPGXXSLNNIAHPSAMJALQABMJWDJAYKVCQHFUDQFDEMZSFOEXOTVLNODGURQRHPZPORDJIJWKPOMTJKVXPKVKUGYIKVRQBRVAXEINCTSXNZSMFNIHYGLZBCZQRILLWFUKWGELMLDRDYYUYGBRITMUDQZI");
    msg.data.assign("IDXQYUOCFWQDTTPFTSMQTAZHQSSVODMVWCUKDEDEBENDCJPJZXTKHIIXQLTONWFXKBGPXWFIVKBGUZXTCZZKTTLNMYUMGLGGPUNBLGOKFOJRSQJYUDEMCIRRHHBSYIARHNWESZYNTAMROAYQWCRKPZPIBXRAYZHHEVSBASSBXZJDVJFLEXGOAHKF");

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
    msg.setTimeStamp(0.7778505670652291);
    msg.setSource(11694U);
    msg.setSourceEntity(25U);
    msg.setDestination(15639U);
    msg.setDestinationEntity(239U);
    msg.frameid = 248U;
    const signed char tmp_msg_0[] = {36, -39, -42, -29, -89, -83, 111, -114, -69, -7, 98, 51, 117, -93, -73, -119, 80, 81, 98, 32, 81, -126, -126, -98, -82, -1, -37, -8, -112, 62, 27, 107, -91, 0, -108, 121, -109, -62, 57, 41, 80, -6, 55, 6, -80, -65, -113, -2, -93, -54, -37, 33, -27, 120, -52, 95, -43, -109, -52, 95, 37, 78, -38, -102, 76, -30, 72, -59, -101, -44, -74, 39, 110, -99, 74, 101, 83, -60, 18, 32, -40, -93, -48, -101, 50, 57, -31, -109, -104, 30, -100, -16, -95, -95, -66, -18, 26, -39, -126, -119, 26, -42, 69, 84, -83, 14, 110, -61, 1, -117, 33, 26, -117, -74, 120, 108, 15, -55, 121, 37, -65, 43, 85, -64, -82, -125, 100, 44, 109, -83, -52, 55, 28, 109, -51, 26, 4, -99, -80, -115, -93, -37, 110, 125, -36, 77, -111, -35, -67, 57, 0, 88, 56, 27, -75, -118, 81, 27, 74, 65, -29, -99, -23, 49, -80, -79, 35, 94, 83, -21, -6, -72, -58, 55, -109, 87, -11, 65, -82, -127, -75, 75, -32, -60, 109, -86, 33, 73, 71, -6, -108, 15, -1, -2, 22, -25, 22, -50};
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
    msg.setTimeStamp(0.7734510971287036);
    msg.setSource(50869U);
    msg.setSourceEntity(28U);
    msg.setDestination(32861U);
    msg.setDestinationEntity(78U);
    msg.frameid = 232U;
    const signed char tmp_msg_0[] = {24, 78, -79, -99, 116, 64, 98, 75, -93, -106, 77, 42, 125, 72};
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
    msg.setTimeStamp(0.6649328642707913);
    msg.setSource(31473U);
    msg.setSourceEntity(59U);
    msg.setDestination(36563U);
    msg.setDestinationEntity(16U);
    msg.frameid = 117U;
    const signed char tmp_msg_0[] = {11, 72, -103, -125, -107, -14, 89, -92, 94, -18, -123, 7, 31, 37, 102, -4, 92, 120, 92, 17, 5, 95, -12, -48, -105, -89, 100, 49, -82, -107, -119, 59, -43, -10, -1, 81, -39, 34, -122, 37, 111, 107, -80, -82, -73, 116, 111, 30, 91, 46, 64, 63, 98, -48, 119, 28, -120, 4, -107, -122, 13, 24, 18, 26, 8, -10, -29, -119, 70, -49, -22, 36, -70, -42, 104, 121, -100, 16, -114, -116, -74, 4, -110, -10, -113, -44, 77, -20, 18, 63, -16, 54, -34, -116, -85, 50, -63, -78, -48, 14, 29, 39, -98, 77, -107, 44, 113, 96, -63, -80, 18, 96, 13, -30, 98, 124, -100, 56, -77, 64, -92, 119, 89, 78, 97, 58, 53, 66, 35, 70, 31, -62, 125, -60, -121, 74, -29, 97, -83, 7, 19, -50, -54, -96, -54, 98, -17, -112, -6, -89, 96, 119, -95, 38, 108, -127, -111, 21, 33, 61, -86, 44, 10, -27, -57, 70, -116, -60, -65, 27, -112, -38, 13, -32, -90, 43, -38, -101, 68, -126, 44, -53, -23, 2, 100, 106, -22, 111, 21, 1, 54, 78, 4, 123, 0, 68, -110, 38, -113, 67, -42, 66, -29, 92, 25, -45, 85, -64, -121, -70, -128, -93, -71, -108, -99, -17, -59, 46, -2, -99, -118, -20, -5, -86, -76, -127, -123, -99, -55, 106, -57, 54};
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
    msg.setTimeStamp(0.5372636111818248);
    msg.setSource(9877U);
    msg.setSourceEntity(111U);
    msg.setDestination(9900U);
    msg.setDestinationEntity(176U);
    msg.fps = 85U;
    msg.quality = 138U;
    msg.reps = 10U;
    msg.tsize = 241U;

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
    msg.setTimeStamp(0.10062024786476176);
    msg.setSource(45146U);
    msg.setSourceEntity(3U);
    msg.setDestination(8317U);
    msg.setDestinationEntity(95U);
    msg.fps = 143U;
    msg.quality = 18U;
    msg.reps = 229U;
    msg.tsize = 12U;

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
    msg.setTimeStamp(0.5891109010148241);
    msg.setSource(47462U);
    msg.setSourceEntity(100U);
    msg.setDestination(41355U);
    msg.setDestinationEntity(28U);
    msg.fps = 154U;
    msg.quality = 112U;
    msg.reps = 20U;
    msg.tsize = 81U;

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
    msg.setTimeStamp(0.2601666561792332);
    msg.setSource(33453U);
    msg.setSourceEntity(73U);
    msg.setDestination(43453U);
    msg.setDestinationEntity(147U);
    msg.lat = 0.04372713684024854;
    msg.lon = 0.6343324783032479;
    msg.depth = 47U;
    msg.speed = 0.5119352425697122;
    msg.psi = 0.8489793783466971;

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
    msg.setTimeStamp(0.1329054623649587);
    msg.setSource(18487U);
    msg.setSourceEntity(184U);
    msg.setDestination(42375U);
    msg.setDestinationEntity(170U);
    msg.lat = 0.5977864223576156;
    msg.lon = 0.8771900210082048;
    msg.depth = 243U;
    msg.speed = 0.6834662998063525;
    msg.psi = 0.3238530185257964;

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
    msg.setTimeStamp(0.12827066232072637);
    msg.setSource(56106U);
    msg.setSourceEntity(213U);
    msg.setDestination(13297U);
    msg.setDestinationEntity(224U);
    msg.lat = 0.8499665802525851;
    msg.lon = 0.4681022522238423;
    msg.depth = 62U;
    msg.speed = 0.15428414923731315;
    msg.psi = 0.7101525772265865;

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
    msg.setTimeStamp(0.16410058120450566);
    msg.setSource(7044U);
    msg.setSourceEntity(113U);
    msg.setDestination(39193U);
    msg.setDestinationEntity(135U);
    msg.label.assign("BAJZEHIJXUNMOTFDFSHPTKMGFL");
    msg.lat = 0.045009772591388275;
    msg.lon = 0.2962837244800798;
    msg.z = 0.447569750300443;
    msg.z_units = 57U;
    msg.cog = 0.9853926376270568;
    msg.sog = 0.6016309100132631;

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
    msg.setTimeStamp(0.8199289914889277);
    msg.setSource(18500U);
    msg.setSourceEntity(15U);
    msg.setDestination(700U);
    msg.setDestinationEntity(3U);
    msg.label.assign("QTEMADBSNPQCLKUHSZMGUAUKADY");
    msg.lat = 0.7926481316271801;
    msg.lon = 0.560207390993686;
    msg.z = 0.44815142094877136;
    msg.z_units = 77U;
    msg.cog = 0.8724224033166139;
    msg.sog = 0.3245873172637742;

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
    msg.setTimeStamp(0.024839562294061368);
    msg.setSource(48811U);
    msg.setSourceEntity(61U);
    msg.setDestination(22731U);
    msg.setDestinationEntity(231U);
    msg.label.assign("PFPEXULEZCFLKNYJHWDVJGOZAUOOUAZHDMDRHITAHNRHDAVVRILSJXWEHYGIDUECHSFTIXUUCNBIEVRWFETKQWMWMRTNOBQHQOQYIJIRBQAXXJFJYFYAAEYNGGDQGLDUOL");
    msg.lat = 0.4008340753512557;
    msg.lon = 0.9784959238936654;
    msg.z = 0.8337558537487435;
    msg.z_units = 117U;
    msg.cog = 0.12085402047139715;
    msg.sog = 0.02378554002528821;

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
    msg.setTimeStamp(0.4134054564391112);
    msg.setSource(29859U);
    msg.setSourceEntity(230U);
    msg.setDestination(14300U);
    msg.setDestinationEntity(214U);
    msg.name.assign("HTKTBSQGVVXQXPAPWLMDPSAOOULTQOWPIHMBEYCHEIGMFOAFDZBCULKRBUKDALQPJRWSHFTNZNOLEYSCGXMRLFCOAHJYNHDRXFVLIYPWABKRJUVYFJJTDJTVSCHOXCPPUGWLSJXEOKUSACKIBMIMAZXGTQDYWARVTMBNWYZNRZORGS");
    msg.value.assign("CWPVDNYBQZLGUJFBUMOLYQABBIRTFVSXPLLHBQGJDWJXFLAWQQYYWKVQHFNDUIACDPRNMEDAZBQEPPERGFISWXVHVETGEIEWCMKJQQRGD");

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
    msg.setTimeStamp(0.09526285793847211);
    msg.setSource(28677U);
    msg.setSourceEntity(230U);
    msg.setDestination(19005U);
    msg.setDestinationEntity(77U);
    msg.name.assign("GCXPGKIECKQJWOIEBMLIZUGBSWAUPLCJDDKAOXFYLEGULUSAZMDGQNWRMKMNMOSNDWCITOSPTZKZXYPNVFZKITFODYUAWASBXYEOJCPPDMIQWQBBFYZIHJGSHAYRLGORHCXAEIZSLUHQVNOCVYCFEODZAPTMHUWBWNSGAJXHZVIJRQXHJVKTJQZDURTDSMFTRBFDSEUCXLFBTNHKL");
    msg.value.assign("QVFKNLPMJVKRZOUDZFGTUYBYLLGE");

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
    msg.setTimeStamp(0.10514913665302494);
    msg.setSource(44233U);
    msg.setSourceEntity(11U);
    msg.setDestination(12313U);
    msg.setDestinationEntity(48U);
    msg.name.assign("CMPNWHGKVIXWKCSQKTWJCTGYTHDAJBAIXGNXOBLVNYZINJSAXCQPUIOKBTARWTOEFMIDHLPOSFRNKECWZLS");
    msg.value.assign("LYHXWZQVYOCVFTIMGWMAATBPHDIVNGYKIFEWJPTNIGOUOEQPSUVXPFOZYWQBBUPMGTJKRCWIZGWLKMVQSPMMNLTOZKKALEFEZQWHOBNHEEOLAUPDEXSTJNYDXBCGSJHOVENCJQUAGCEIZXDLPA");

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
    msg.setTimeStamp(0.04754493086468259);
    msg.setSource(30810U);
    msg.setSourceEntity(144U);
    msg.setDestination(54015U);
    msg.setDestinationEntity(189U);
    msg.name.assign("IYXRSLQGEINRAODKHJIRVQQJVRITDTHCBBIAHLDCOXKRFQGWPZBEWJOZBTMNPXBHBIYUGVTDFWIPNBAVTKKVTEGRPVHMOOTUUKSFBPGLMAGCHGJCPZOJPEJJDXSCSMNSDLFXVWGFGDMWTEZUACXXRENLPSXNUAEQZXWUSRTPLYHAEMGVIYKUYAFCVAXNHUYWZHEDFTHQOKNYZJSFVQLZMQCEWSYJACULCDLMP");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("UJTOHHGMJOPCNRMZJWSPUILXQUDRMUNCGSBRIQZELVYCBQDNJMHIATFBPSFXPOQEFNKLVLNQTRQWEKHXEGXPRTZAEMJXHJGBWTPKXOIKLZESFOONKXOPYRALGBZZMUOHIWYAYSPTVWWAR");
    tmp_msg_0.value.assign("PQORBARRNWXPPLGCOELIZFOZYIXIJOLACWSUDCSJCZMBWQPRIGJVPNOYNWJMPDLHZJOCTHPUIBHJVTVXXYFCWQUTHHLSBVBUHAQUDKKIDYKVPOEBCRQJNXQRNFFNTTXHYNNHRFYKIWKTQQVXAFEKEGTQDSNWMGXUGYKFA");
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
    msg.setTimeStamp(0.20912602557079396);
    msg.setSource(6045U);
    msg.setSourceEntity(171U);
    msg.setDestination(18625U);
    msg.setDestinationEntity(250U);
    msg.name.assign("OWLAKWDBTNXZXMXYGTWIKPZJNRPCKLVRSJGNSDUFBEVGMRGBAYYBBDBNFDOHGYTRSMAVPEZHGDGUSKFXMFVKZTMWFSFGJFCPPJWODESPEFBDBXQHHRXBLCRELKSGCCQXLNOZW");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("ORAVZDBNKSZZIDZSAYUFFDYLTUERUGGPJAHESSAPODMSHUZRGTPFCFQBMKSUPJCPFNXIXNJPBEZSYVOIMQCCDIAFCVYSHXJLUDKKONQDEJEKOYPXIXYGKGAEVLIVWXCFWTVLBDQLEHLZLCOAMPIVIRLXMBOQXJWOUGALCKDKYWARTFWPHVHAZFMRWXTQBUTCOMHTYWRHJNGMDMTSHLGQNUEJFKGWREMICZPNUNKWBNIEYVHX");
    tmp_msg_0.value.assign("SLVBAWFZZJKRWCGVWHAUQLHHOGXMZRBJMVRJVYRDPRKMNNKRBLTSETHQSFBCEMIDYIIZWTEGKWWAWUPYDKAYSIOQJQUTAOSVKGFKXDEXYIPYTCLKC");
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
    msg.setTimeStamp(0.47015893983442714);
    msg.setSource(32403U);
    msg.setSourceEntity(92U);
    msg.setDestination(18097U);
    msg.setDestinationEntity(223U);
    msg.name.assign("TNJTYJIQAOWELPEVRTTTBXYPOANUGWCDSQNBKNXZGYUZOLTZGRXEFFMSCYJEDZKQQPMYJEOXSPCCVAFGMGKJNKDUQJ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NYHXAREXPIAGHVXSNWGRBZDEIKGJ");
    tmp_msg_0.value.assign("FWJXAIIOHQCBSWEWVEKHTOYJSVPBRPIHKOTCSVQUPXHZNAXCTUCMLKAORSQPSGDVNXUNWMYGYFFMTXJTBIPZELQAVMGFKVBNZZHEI");
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
    msg.setTimeStamp(0.2371282059959955);
    msg.setSource(22064U);
    msg.setSourceEntity(156U);
    msg.setDestination(27483U);
    msg.setDestinationEntity(39U);
    msg.name.assign("CXMAPWKGUQMBGNQBRVPSKCNOFPQFYKEQXOJNIVMVZVZKUWUDDKAYFHBYCVJXTJGOWOPUTODQHMAZWDZTHCLIZWMFGOCESUUMEOJVZKSRXAKMSGRJECFSMAXFERHRYZHBZAHQZPFLHTSUEYBGSEREIHHSNIZXDYNBSRRMYIBJKNUXCTUFBUFXPIIWCNLGGIXWRVNQATROAQTWDVOJMTTYYQIBTQSINDCOWPELKNB");
    msg.visibility.assign("KDKLQJRNNZOFQITFUQOVCGJFCMNSJPZOCSAYCZLBVPITNJDEUYHXMHAQXWQRZYVAOUGOZXOVWXELUTGURFXSFXHJKAKQSTNBHSUKJAXHSHPBEDRLUYTYDNGJILRDWFQXIIPPZMVOJ");
    msg.scope.assign("ZBLUPEAXEGINSNYKTGJSVXJWGQGDUHUSPCQSKZWQKJZHNFERXQBVTAGMLUHDWIKAOZAEOPJJFURDQMPTLUHBTJTYYKXCHYRQLPIVNIVKDXDQLMLZXCPWNDDDXLSFYPJJOHLSOHKVRFYTNZAMCERNGBACCSKPEGVFVGYKBRDTPAOATEWJIFIWWCUFIWCBIANMLFZPOJBUQKECXGNSUHMOFHYMYZO");

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
    msg.setTimeStamp(0.8760861066890128);
    msg.setSource(50388U);
    msg.setSourceEntity(171U);
    msg.setDestination(20566U);
    msg.setDestinationEntity(238U);
    msg.name.assign("LMTJTSFQMOOIHCJCSXMAYTZVYHFPTNFRRKQXNEBOKUGZULKDNQVOEBLWAVEVQEXQXPEZCWUZWBDWYPCPNJFUVCPDXLIKEGBNCUUOXTNZMTZTXRMFARFXYMCIQALSIJHEFIRIQVHWTVHKRHLHKEWXRJCFYEROHUGXUVGISVCMWIIPNQGGZKBGKDOTSDNASRFSASLJBPHJKLIZYTSABUPEDQPDADYHMKOGWNVGJPDZZJDO");
    msg.visibility.assign("EVXMMTFBUONOQQTDMLCAQGAXSXAFSDAEHJ");
    msg.scope.assign("DADCYYZGYTNAURGPHPLNGCKXYPYQKXYRTSERSREGPJSYDSGLWLHPVRGLMNADFDIVWIXLCJSSERPNHZFQWKSZTIXHPSMYFFEOBTGIFWTAJTFKBKXNGNLZMMZICHWIDBJRZEKRIUOBKHZJMXABKMMUTOBDJLZLEMQXQOWUOYOEQEVDTECJTHMJNQPZQOFRFUFVUUALQXQAMVJIJKESXLOWCICWYPAICXGVUFPVZCBVGRQAAUBNHDV");

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
    msg.setTimeStamp(0.8302073140608937);
    msg.setSource(10673U);
    msg.setSourceEntity(6U);
    msg.setDestination(54126U);
    msg.setDestinationEntity(158U);
    msg.name.assign("UFHZAIXDZKQQOHZOYCIVYNFQSYENOSKKPCXXYWLW");
    msg.visibility.assign("WNISSDGLFVRDVCNANBXNZFIFSSZTHVPJZRFLCVHLOCPKUASQTIDKIGPNJBLNHKWXSCQJHWRJWQYQHUOGRONKZJIYXTYPIAUYJWCFWDEKRMEYXLUKXLBKTOEGUZODLHZAAODUPEEARSMFXFFNMMQIOHABYTTMDZBMIIHLICOYEXTWVJYJBBVJ");
    msg.scope.assign("FHBMLANIKGZZTLKKYPNKRIQJCRBXUGZOEONDXUWCHRTXGQLLKESJUBNDVPEVMFNJSGYAIHPOEOXXBHOWWAHCMWQXQTEAPNRQBCNFOGHGIFDADCDDISDXYSTMVANBSVPZWLHILVFVHPRVARFTXWZPOFSPIEZXYBOVEKQYMCZUGTUWNLZQZRZJLMFTRBIKFTDRJJUJMPLKACETSOYYMLDPEBTUIJQ");

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
    msg.setTimeStamp(0.9532776451540611);
    msg.setSource(4639U);
    msg.setSourceEntity(158U);
    msg.setDestination(14371U);
    msg.setDestinationEntity(12U);
    msg.name.assign("UVQGNCHYFUKEBYPMEMZXQIBRQTXJEKWDJNSZNMRLHOXQBLJJLKZHPKCTDVDUMACXAQZPIYVMFZBLCHRPITDSXRMYAXSGGGZWSIAVOPNCIEWTOQQOCUYVHGPNA");

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
    msg.setTimeStamp(0.5691708051131332);
    msg.setSource(22220U);
    msg.setSourceEntity(242U);
    msg.setDestination(39043U);
    msg.setDestinationEntity(130U);
    msg.name.assign("JDKZKQBSTRKNMQYVLDTMGZBZJNFEBEWAHJSQGRFLALGSUDIZPBZQSLOKDXKTGLCPJMBTRRYGFAJUWOPLQCGACJVJARUUTUWOVZUYHXOSWXTPFXQPBHDNYBUOSPHCMGXRMIGYXFCREHMNOZJVCYEDMIMGEZLZERKTXCQOSTNGHERXYWMLAOHPBOFLHINDUPJNHXYNHFIWYDISLVPZEOVTICIWKAFUDBQWWKDWV");

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
    msg.setTimeStamp(0.5333252255416232);
    msg.setSource(24384U);
    msg.setSourceEntity(177U);
    msg.setDestination(60972U);
    msg.setDestinationEntity(110U);
    msg.name.assign("KORLJXGYOGUUKDNNSRDPMQKGORFAMJDGJVQTJCCWKMSLSUVDYAOEDRTUIFMNPYFCOXBEEOMVJRVCPQYPCNXGDXMVBLQAQYASVKYTINHDXHQIHDIWSZVFUGCJWSGEWPIRCQZZNATIPAPIBSJKBBEUUJSOFTLZNLTBKXFAFRJOGOLGZDJIZBQHTYLTEYWRMZAEHTNQBNUKRFQILZLKHD");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("AKDLNIPJJSFEJSUBQVIKWZTOXELYGORXEHVTMYZURYHFOYDCTMDPZWXBMOUZASMQTUSYHTPKDNJUXCVDWIJUBLPWUHEXNPKQXWWNPYWEFUFNJZFQGOSQKQOISLCALALSCSMXNYFUDVTMBFLGRWVVHQCFGTKLWXEDDXHCPOINYKBBPHPFZMEQBYKHCRNJGAGCJSQEAMVIACJABKEGZBLBAVZUHTWZCPMIOZISFOVGDDIRHXQVORGYLRITMANEN");
    tmp_msg_0.value.assign("DTPBOMPWTJWXNAUKXQQLLURHOMPGYLDGPJAYUOYJZBEFGIIFTQVNPPTMVBXXXPSOSETVJCXFTEVCASUVRQMNKDXNLPLIUURINZGIKZPJQRLQTXJFORDHXCSGJOMIAGYZNYGLVWHDQUVEECEWVQQISNVLGBKHEIYAHKTZAJAWGADWNNIHFCWBZFHBZRHFDRKFKOLQSESCTOBSAUZMSXHBWTLRWEMPKKMOVCRD");
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
    msg.setTimeStamp(0.9559852871421336);
    msg.setSource(42719U);
    msg.setSourceEntity(155U);
    msg.setDestination(27143U);
    msg.setDestinationEntity(252U);
    msg.name.assign("IUXKUQJVIWKAXCRQVTX");

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
    msg.setTimeStamp(0.446745512481697);
    msg.setSource(59602U);
    msg.setSourceEntity(196U);
    msg.setDestination(15122U);
    msg.setDestinationEntity(104U);
    msg.name.assign("CBDWCRFVXKXFNTNLKXAWHZCAEEYAWCQQICXZPYMIKWBHPLLVGQXZOOBELGVSJPXSHQPJEMIJZPHVCYLMRQNPMJXJTPEFUADHEODJTTBHEYBKJHPRIMQZFXDYKUBNQIFKVH");

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
    msg.setTimeStamp(0.002725469528582658);
    msg.setSource(37923U);
    msg.setSourceEntity(202U);
    msg.setDestination(24693U);
    msg.setDestinationEntity(103U);
    msg.name.assign("FMCBFRVGGHEHYRNBKWSPCTZKTTCGCIRQFISUWJLUSURMJJNTZDOYSVKFXXPRGAZMJEDIYVOQVLVXHBCDXHTAVKOVBRWOAHCOZVRJFTUAPFSKVZEMIAGSJZQPQDEGWWJBPTQNPXYUDEHHWSQIMXMNLDLDHRYWLAXAIOTMNKKUZISCPHYVOREEXTORGQYFSYNDSPNZHCJEJZEBZLWFPBBGUYFQBAIXENYLLNLTKQGKOG");

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
    msg.setTimeStamp(0.5427533683553304);
    msg.setSource(10323U);
    msg.setSourceEntity(247U);
    msg.setDestination(37949U);
    msg.setDestinationEntity(119U);
    msg.timeout = 60555378U;

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
    msg.setTimeStamp(0.6947141361533606);
    msg.setSource(50992U);
    msg.setSourceEntity(168U);
    msg.setDestination(50989U);
    msg.setDestinationEntity(233U);
    msg.timeout = 1482587819U;

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
    msg.setTimeStamp(0.9467447769599827);
    msg.setSource(4532U);
    msg.setSourceEntity(178U);
    msg.setDestination(45619U);
    msg.setDestinationEntity(200U);
    msg.timeout = 3201677165U;

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
    msg.setTimeStamp(0.45094765396615866);
    msg.setSource(13781U);
    msg.setSourceEntity(133U);
    msg.setDestination(56001U);
    msg.setDestinationEntity(111U);
    msg.sessid = 233151776U;

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
    msg.setTimeStamp(0.18150394165756012);
    msg.setSource(64172U);
    msg.setSourceEntity(168U);
    msg.setDestination(43249U);
    msg.setDestinationEntity(120U);
    msg.sessid = 1248600842U;

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
    msg.setTimeStamp(0.5293798491468242);
    msg.setSource(22989U);
    msg.setSourceEntity(133U);
    msg.setDestination(50652U);
    msg.setDestinationEntity(104U);
    msg.sessid = 450118653U;

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
    msg.setTimeStamp(0.24863490614854855);
    msg.setSource(31312U);
    msg.setSourceEntity(36U);
    msg.setDestination(34293U);
    msg.setDestinationEntity(239U);
    msg.sessid = 1273836000U;
    msg.messages.assign("KXZNEWFCXJSQVOGBUOGNMAEYTAXKHYNYMGUTJJJWSCZUYARQQRKGNDCMVQEEMSSXIROSHXPATYSROPKMIQJRBVIABAINLPOWD");

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
    msg.setTimeStamp(0.9759128384505994);
    msg.setSource(23970U);
    msg.setSourceEntity(61U);
    msg.setDestination(38921U);
    msg.setDestinationEntity(118U);
    msg.sessid = 4249496738U;
    msg.messages.assign("JXAXRPTZOXGCULTGRHTPTDWBGMFVNHUUXENMESRMOCZMQJMCRAEWUDCOQYNEXKKACYOJNWEZHTVLLCTETTBEKWTZPBTDSKQKIHNLBDDIFYQSIGGQFVAPAQARRODVSVKJIXXJJGHHFBAMBGBOWSYIFSUZQMPOAMOQGCUBPMFNWGJSRSYJQLVWRPKSRLHZDRQI");

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
    msg.setTimeStamp(0.7507188345136991);
    msg.setSource(42473U);
    msg.setSourceEntity(25U);
    msg.setDestination(45949U);
    msg.setDestinationEntity(139U);
    msg.sessid = 563290020U;
    msg.messages.assign("XUIBMFCVSTHEONCLZQECJUYQJSFUBXGPPLNWFVYKGRBWCXJSBHPVEYDMMNUJXETGRXUNDAOYQLXPLBNZIBLIDDDCLNZAGYPOZRANTHHHESTIKMZRFCBAYRAYSMPUQIUOYJDECKXVFDVJVBNPHMRRWOLTS");

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
    msg.setTimeStamp(0.5938126488254089);
    msg.setSource(52882U);
    msg.setSourceEntity(120U);
    msg.setDestination(60828U);
    msg.setDestinationEntity(41U);
    msg.sessid = 3114477222U;

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
    msg.setTimeStamp(0.5426481346465566);
    msg.setSource(61272U);
    msg.setSourceEntity(251U);
    msg.setDestination(12627U);
    msg.setDestinationEntity(88U);
    msg.sessid = 1350432134U;

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
    msg.setTimeStamp(0.13867429851576296);
    msg.setSource(21653U);
    msg.setSourceEntity(72U);
    msg.setDestination(20413U);
    msg.setDestinationEntity(109U);
    msg.sessid = 124756372U;

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
    msg.setTimeStamp(0.1597231445416042);
    msg.setSource(25638U);
    msg.setSourceEntity(121U);
    msg.setDestination(29320U);
    msg.setDestinationEntity(135U);
    msg.sessid = 4005446907U;
    msg.status = 76U;

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
    msg.setTimeStamp(0.9113308551223356);
    msg.setSource(243U);
    msg.setSourceEntity(201U);
    msg.setDestination(62681U);
    msg.setDestinationEntity(131U);
    msg.sessid = 1961445106U;
    msg.status = 140U;

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
    msg.setTimeStamp(0.014292781186836967);
    msg.setSource(45100U);
    msg.setSourceEntity(231U);
    msg.setDestination(52727U);
    msg.setDestinationEntity(39U);
    msg.sessid = 729575572U;
    msg.status = 205U;

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
    msg.setTimeStamp(0.7969762427598381);
    msg.setSource(64155U);
    msg.setSourceEntity(224U);
    msg.setDestination(43271U);
    msg.setDestinationEntity(14U);
    msg.name.assign("EQCOJEIBEBMELTHTOWHIGDOFBSPHFTXUGWBKDQGUZECMANJWEPXYKIEOVPU");

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
    msg.setTimeStamp(0.39058754962187825);
    msg.setSource(3518U);
    msg.setSourceEntity(161U);
    msg.setDestination(61787U);
    msg.setDestinationEntity(12U);
    msg.name.assign("ZYZCQIJQDMAOBNGTPPFCOBYENLXGJJKDMZQMTJJFKISZZEINBRKTUJXXEHKRBATWGDZXXIMSLWWHIEZMBQSHXTKHYYZCAAIWHEXKDRPNNSFSLDCPCVICVPLRJQIZLWODOQ");

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
    msg.setTimeStamp(0.6059401366300762);
    msg.setSource(58530U);
    msg.setSourceEntity(8U);
    msg.setDestination(63336U);
    msg.setDestinationEntity(220U);
    msg.name.assign("RWRREINZCQOSNDYDPVKSQSDBQJNXQGWQMMDHTQERZPXAUQTIIANJYOXBBBTIDNCTGOUEVULKKPVLUSPAYIHAXTTRVSGJZFCWESIZQVZNQRTYGGWSJOLDCCOHMIIAXLWMGHLBGKOWZWIFFRJKVHULOHSUFAFBHZAYRIYNGRBVDEHELUTFFOJXWMEUPAXZVPJKZGLYPCXBYLFPOKJMUMRHTYEFDJNCMSGBAFKWQ");

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
    msg.setTimeStamp(0.7298396483662881);
    msg.setSource(28710U);
    msg.setSourceEntity(55U);
    msg.setDestination(10081U);
    msg.setDestinationEntity(4U);
    msg.name.assign("UJCUHKSXUUWZLGXRPBQDYKJFEPSLEDTKGAZQVOWDWJHWCRCTVQFUDZVFOWXEOBIMBPLFMQPVXCOUXBODSRNDASCQZMFAJIJPEKXTFUWJBPYMIKZNRECQLDNKRN");

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
    msg.setTimeStamp(0.3423252064561546);
    msg.setSource(32645U);
    msg.setSourceEntity(83U);
    msg.setDestination(48308U);
    msg.setDestinationEntity(68U);
    msg.name.assign("CRLUGUVDITBAMLZHQSXCHBXFGDZXEPXKZTXGIBLWSADWEYSWJVDHVAAKIHDTHZSJZSHTMPIRYEATRCBEDRGPDNLVWWMCNQAGXLNMPAJGYWPXMWGMCOCEDZBOOCUVDOFOCHUVKRPZMIYIWGEH");

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
    msg.setTimeStamp(0.1327316529445669);
    msg.setSource(46469U);
    msg.setSourceEntity(188U);
    msg.setDestination(59155U);
    msg.setDestinationEntity(5U);
    msg.name.assign("CCLYBWBKGFDLJNLXBIRETWJCPFSXVTOGHNVEKMXZCFOUMGILEKJQXILUTOCEUBGVWQTFUUDBFFESXDXXPSYPKMIVVERRTIRMYAALNHUALYDXQGAHTLTEEOWDCXGSOAYTQZHQJNJZPFNPZLZZGQAZKEMPZIOSPKIAJBFJCYTBGVOWPEXZDCBYOZJNQSBHAFVFHMSJYIGQCRMPRLUNMMHVRDUWSRNHGBQYDURJUPDWKRNKASWHAOIDIHCVO");

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
    msg.setTimeStamp(0.7418421801161149);
    msg.setSource(25735U);
    msg.setSourceEntity(193U);
    msg.setDestination(7548U);
    msg.setDestinationEntity(94U);
    msg.type = 223U;
    msg.error.assign("XYKPTOYIBDLNL");

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
    msg.setTimeStamp(0.025423714107884243);
    msg.setSource(64798U);
    msg.setSourceEntity(250U);
    msg.setDestination(30399U);
    msg.setDestinationEntity(97U);
    msg.type = 224U;
    msg.error.assign("KJXZXOHVNMFPOUEPLULEYDNNCEJIHTNZPJEBZVTTPCRAYWRQVTGGQFLSVNZMFYXKLAGMCCAKFVZZXWAPIGXSYQRPMEORMFSISLIWDYHGWRSHRDTIWBGKOIXWVYCAFWOCTNVAEQZCLSUULDRUOVKPQJPUAMDTNQECZKBGMDXDGFRAMAHHQOYDQOJRKJSPNEAXUXHZHYINEDVNBQRJBTWFKHMFCVUSUFEICTXSYJBPLGKIB");

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
    msg.setTimeStamp(0.9219155415424982);
    msg.setSource(32368U);
    msg.setSourceEntity(138U);
    msg.setDestination(56472U);
    msg.setDestinationEntity(234U);
    msg.type = 132U;
    msg.error.assign("GCZLAQLYAAKRMMCBBPKDRWXPEORYJQGNQOWMZIDDQYWLTQISWUVIWKGEQZHCTDNJUXOAVJOPBNLAJBCIJKTMFYBPEOKESRHXNCUDPNERIYOTSQAOBSBSCKJZFZ");

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
    msg.setTimeStamp(0.09133293426937816);
    msg.setSource(22079U);
    msg.setSourceEntity(199U);
    msg.setDestination(17904U);
    msg.setDestinationEntity(23U);
    msg.seq = 48237U;
    msg.sys_dst.assign("KULZMWLXPSPXRWIYGAXSNZVPYYKGMGTPPVADUKVCRGCYSVEZUQR");
    msg.flags = 6U;
    const signed char tmp_msg_0[] = {-120, 82, -87, 84, -47, -70, 44, 63, -30, -94, -11, 46, 122, -30, -13, -48, -66, -35, -122, -102, -17, 74, 113, -103, -113, -17, 126, 1, 38, 79, -93, 88, 28, -44, -65, 31, 13, -49, -104, 46, -15, 75, 97, -99, -10, 50, -21, 21, -74, -25, 118, -110, -73, -11, -98, 103, 74, -19, -8, 44, 64, -116, 126, -44, -81, -27, -125, 36, -79, 20, 99, -102, -88, -97, -42, 40, 23, 103, 121, -125, -37, 65, 34, -92, -57, 79, -18, -48, 98, 32, -75, 116, 89, 18, -85, -36, 53, -103, 120, -123};
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
    msg.setTimeStamp(0.06420319115381623);
    msg.setSource(26026U);
    msg.setSourceEntity(30U);
    msg.setDestination(56931U);
    msg.setDestinationEntity(173U);
    msg.seq = 48031U;
    msg.sys_dst.assign("TWOKIIYORQLXYFMJWBHPNEPXVDKNHIAPOKGXDLELGBUXKGCGDUECDZMQRQFDABYBCOZTOHMSIYWNOZHAIXQUOMKMQGTKJNZIOWHAYIFACFQRZMNZZLVJVUWPALSUPFYRKPA");
    msg.flags = 20U;
    const signed char tmp_msg_0[] = {-67, 27, 13, -6, -112, 35, 70, 39, -58, -37, -33, 95, -79, 25, 94, -36};
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
    msg.setTimeStamp(0.7392671172478708);
    msg.setSource(55860U);
    msg.setSourceEntity(194U);
    msg.setDestination(50515U);
    msg.setDestinationEntity(95U);
    msg.seq = 18605U;
    msg.sys_dst.assign("OIYXMLHGKHIAJHTHSPNMFDFSSPGPIUVECODXWKZTYNTDKDUIQFHCDPBQTPRLNQJYTNYZBPZYGRXKYHRFCUSLQBWMBNTAUSXGOKXZIDLRWXYMNVKUAQYVXAESGPZKWQSFJEVEDWPABHBDOISCXEAJNJQQRAJKAEVCTUUEVAOVUVYPBLZOVKJFZTWACGFYUHUSCXSMDWIKJGGREWLHTBIRLLJMGNRJZPIRMZ");
    msg.flags = 237U;
    const signed char tmp_msg_0[] = {70, 8, 44, -4, 123, 93, 29, -118, 23, -74, 95, 109, -34, 96, -26, 40, -15, -85, 26, -117, 118, 96, 6, 99, 125, 69, 35, 119, -60, 108, 121, 123, 95, 65, 118, 95, 104, 115, -101, 24, -12, -13, -27, -12, 8, 114};
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
    msg.setTimeStamp(0.18330033918479693);
    msg.setSource(60809U);
    msg.setSourceEntity(126U);
    msg.setDestination(30185U);
    msg.setDestinationEntity(189U);
    msg.sys_src.assign("EIJOPQPXIHQTJKVAGXMJDCHQZAMZSDSPHEWLLZZEVTDPKEYCVWQSKWXHPYKVVFIRNRFDFDAGUSBHNFWLUSNTTMLDYFURAJMXSEDQROIUUMWIXDCYVCJBKIJNLNSOBNESPFLAWIOGXIACROMAMGCCJSAVQCKULGKZNAWZYYBVWMEJEYZPRBQZHQJBKOPYYTNBOTEUDOBTWFFBQGDFLKHHPHTTGRMKRFXGXCNXWG");
    msg.sys_dst.assign("JMDFBWSHIKVQOLDCIIOYGPKUXYWRVXIVSMQWKUNTZPOMHROVSJCFHQJUYBBQGKIFNWKXG");
    msg.flags = 92U;
    const signed char tmp_msg_0[] = {62, -110, -65, 22, 60, -58, 84, 123, -60, -38, -96, -75, -11, -118, -38, 4, 28, -110, 1, -66, -15, -24, 95, -121, -67, -26, 25, 115, 46, -26, 100, 80, 84, -7, -3, -88, 93, -18, -102, -7, 0, -19, -66, -60, 100, -71, -101, -76, 102, 8, 9, 58, 16, 50, -78, 58, -97, -78, 38, -6, 71, -91, -2, 38, 19, -87, 99, 39, -72, 109, 108, -127, -30, 123, 25, 92, 35, 26, 29, -80, 65, 126, -11, -57, -98, 53, -23, -126, -59, 18, -62, 112, -100, -36, 85, -98, 55, -68, 90, -20, 17, -79, 49, -80, 5, -36, 46, 35, -91, -82, 83, 72, 46, -59, 126, 125, 18, 17, -76, -119, 5, -73, 94, 76, -106, 73, -95, 17, 100, 70, -25, 56, 86, -118, -21, -117, -80, 36, -9, -31, 49, 84, -103, -87};
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
    msg.setTimeStamp(0.6714664640785742);
    msg.setSource(58648U);
    msg.setSourceEntity(136U);
    msg.setDestination(7556U);
    msg.setDestinationEntity(117U);
    msg.sys_src.assign("NSKQXHXXUKVRZOURVNEGKZPVODXFXJGMHYPQILKJVVOBKIWJBWTSSAGWFNQVRILIYQJCXUOUFDDBRGWENMHESDFVK");
    msg.sys_dst.assign("AEJBPQKUCUSVOFPKYCDZKODOWFDBCHLKWAHYKPEMNFGNOLWRJZQHVXZDWFJLULOESSCJYCLDXLPFIZYJQETWOOWTHSXUZAHXTMFNYKLBMCCAGLVGDMNBNGZJGRUWPRNTAXFAFVIBRMIIVUPBASSMZYUEXKCNTIIHHXEMVGXDOTPACVIPWNUBYTHRPWHRSQMGOBEVSFDSNQLYGLUGQJTHFEJIEPRZCQRZRJATAMZJXEMQXDWKNOTQQKIYUGDSV");
    msg.flags = 104U;
    const signed char tmp_msg_0[] = {8, 123, 89, -71, 92, -3, -95, 48, 43, 123, -13, 90, -95, 40, -99, 17, -113, -106, 94, -70, -103, -114, -68, 52, -12, 114, 62, -57, 119, -104, 123, 90, -20, 7, -67, -72, 21, 87, 39, -112, 38, 60, 46, 20, -89, 92, -80, -11, -80, -61, -66, -93, 105, -97, 103, 111, -75, -85, -56, -94, 68, -78};
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
    msg.setTimeStamp(0.11227390334710596);
    msg.setSource(55528U);
    msg.setSourceEntity(126U);
    msg.setDestination(55763U);
    msg.setDestinationEntity(1U);
    msg.sys_src.assign("TZUXVIVQRQWMEYPFMJXKORABRHAPVDZTFLUHEOOKFLWRWNFEYXWKDLAGQOSVTKBQLPLIUSPSAVZOQCIPZHWKNOMOVYCYVLJNNTYESAIEZYQXPWJOCUJKHZXNQMGXQBNRJUKSBIYBACVNGPDUTGLGDBDEHCRSHGUFXJKEWGCKCVSKXFNQYRHMFOITJSJBZLJHLGWJSAZMCHRPHXPDITFQGIMENOVGFTARDXBUYNWMYPDLEFMCABDIWADCE");
    msg.sys_dst.assign("XVLBRXCEZLCJLDXWPUGEOZXTNKDCFME");
    msg.flags = 187U;
    const signed char tmp_msg_0[] = {70, 96, 126, 102, 80, 119, -30, -116, -37, 125, -124, -57, 60, -18, -10, -5, -26, -125, -24, 95, -60, -32, -105, 35, -72, 40, -31, -23, -124, 94, 5, 73, 15, 7, -55, 106, 48, -68, -77, 20, -111, 53, -41, -27, 91, 73, 105, 121, 67, 38, -102, -24, 39, -125, 86, 67, -8, -34, -81, -5, -115, 17, -77, 103, 33, 89, 91, 126, -123, 20, 74, 20, -83, 113, -92};
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
    msg.setTimeStamp(0.2293856437564762);
    msg.setSource(21156U);
    msg.setSourceEntity(14U);
    msg.setDestination(23317U);
    msg.setDestinationEntity(236U);
    msg.seq = 45564U;
    msg.value = 219U;
    msg.error.assign("AQDJUPSNLXYQBMCANMAIVWLTIEOMTWKOKPFLTHSMMOQDYMGRFFGERJ");

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
    msg.setTimeStamp(0.13393956038452504);
    msg.setSource(34346U);
    msg.setSourceEntity(60U);
    msg.setDestination(58949U);
    msg.setDestinationEntity(166U);
    msg.seq = 6653U;
    msg.value = 175U;
    msg.error.assign("HXHYKICSGEVAOLXYMCEHOVQOPEZYZMDUAWX");

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
    msg.setTimeStamp(0.25921511022571264);
    msg.setSource(33334U);
    msg.setSourceEntity(68U);
    msg.setDestination(48201U);
    msg.setDestinationEntity(114U);
    msg.seq = 35114U;
    msg.value = 240U;
    msg.error.assign("FDHMXODKDBHHCNZHLWPQLXJFIVPPQLAXMBSZJYFKATQZMUKFBGCGXSZUOOUFYVRDGRXVKWLYGFPUPBAJWYGMIJMSLXEYZQLXBSPEQZMSVOVUSQGSMNRWNJWXSDEAHVCCNMVITDHKRCWOIGTAXVIWENTDKVCQFEERRYJCUACLOKVICQFOHFUEPKSBTMBJKRRZHXIUWNPELPSAYZLUTQRUJTDZDTKRYQIBYNHIWIMOZLPJYEBHGNNTGWBD");

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
    msg.setTimeStamp(0.12401608726223079);
    msg.setSource(38527U);
    msg.setSourceEntity(240U);
    msg.setDestination(35328U);
    msg.setDestinationEntity(232U);
    msg.seq = 18952U;
    msg.sys.assign("FPGNGDZALHRJGPKYXATAZZLCSAYVVBGNKHPMDGOXTTVATDZNJUKYNQPFTLNQLFFWVSBOXXWXZAUZGQDIXRIATUKBJIFIRQVKKWCNYWSGUDQMCIPQMHSTTLVSNPCRJMHSXEEFQAHOWNHYSBCFBGZPVEL");
    msg.value = 0.9868645103804355;

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
    msg.setTimeStamp(0.9566281197399636);
    msg.setSource(33368U);
    msg.setSourceEntity(46U);
    msg.setDestination(20553U);
    msg.setDestinationEntity(165U);
    msg.seq = 34069U;
    msg.sys.assign("WIBDRUZCKRUQZK");
    msg.value = 0.6279858859716014;

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
    msg.setTimeStamp(0.7535619350771696);
    msg.setSource(1373U);
    msg.setSourceEntity(126U);
    msg.setDestination(30833U);
    msg.setDestinationEntity(20U);
    msg.seq = 50534U;
    msg.sys.assign("TMDXKJJIFPNSGMCESXLXPBLZZJTWGGQDXUWBFRBUBHEVEANMAOVANIKPXHCPSVANIPLYMFKXLGAIQVIOCNGBQB");
    msg.value = 0.38879522497047425;

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
    msg.setTimeStamp(0.9287857621873232);
    msg.setSource(52725U);
    msg.setSourceEntity(112U);
    msg.setDestination(9133U);
    msg.setDestinationEntity(0U);
    msg.seq = 32082U;
    msg.sys_dst.assign("UBKKMZMNYLOQXLVYWDPCUIJISURXUFMRHPCPAKWHOFUEKDQFFNAHOJILCOMLCRGMIVJVRRCRRPSMH");
    msg.timeout = 0.689012130523254;

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
    msg.setTimeStamp(0.2664409422737095);
    msg.setSource(22405U);
    msg.setSourceEntity(18U);
    msg.setDestination(54652U);
    msg.setDestinationEntity(151U);
    msg.seq = 23739U;
    msg.sys_dst.assign("YIBINTGTARFCUEOMPPRFAOHHBWRNXHTZOOWUQBCLEGSOQDRYAEFWPPFEOJNBVXXBOYFGSZHVSUCLTFIJUKRAGSCSKMROSJQPJDDKTQGNOUFJZVXDPRXIDYLLGKKCQIMNVHZBGPGZNXWSZCQEQICDUOPVCMTFWKBQNKYDTHEFAKJKRLUQYDLDMNLWUMAVIPVHEHGYYSRNXMBITZLXAWYDLZVHEEWGLUQSMRAPZMMSZKAJJIWVWBITJXUCVFEBN");
    msg.timeout = 0.8336615047751588;

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
    msg.setTimeStamp(0.7377556363305059);
    msg.setSource(1259U);
    msg.setSourceEntity(26U);
    msg.setDestination(60370U);
    msg.setDestinationEntity(0U);
    msg.seq = 16837U;
    msg.sys_dst.assign("SVQERIKKHQTDOLGNBEOLDPGCFCACUNJIYEERTXGWQOJMJDGAQWVYAOIYAGEKWTZPWFTBDYUYOQHRWYGMBPFVQJAPTFDCCVKFFYFKIBQLKBDZZTIUSRHYXETJMEZPLGVRXELHSXMVINNJIHWNINLFMIQXGUOVVEPZSXMWMNMPFRLJZPSZXKTOHJSNNCYOUCZKFVTW");
    msg.timeout = 0.89037974130033;

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
    msg.setTimeStamp(0.049785363467664046);
    msg.setSource(29637U);
    msg.setSourceEntity(105U);
    msg.setDestination(50710U);
    msg.setDestinationEntity(87U);
    msg.action = 115U;
    msg.longain = 0.3115950387472799;
    msg.latgain = 0.5331345598509365;
    msg.bondthick = 1350647971U;
    msg.leadgain = 0.5500811248106144;
    msg.deconflgain = 0.4763068993968904;

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
    msg.setTimeStamp(0.3313521567324279);
    msg.setSource(43226U);
    msg.setSourceEntity(220U);
    msg.setDestination(25636U);
    msg.setDestinationEntity(197U);
    msg.action = 101U;
    msg.longain = 0.9972403533291722;
    msg.latgain = 0.19737889562881428;
    msg.bondthick = 3494888084U;
    msg.leadgain = 0.7316126457261871;
    msg.deconflgain = 0.6619690881429372;

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
    msg.setTimeStamp(0.1605153281057088);
    msg.setSource(62131U);
    msg.setSourceEntity(112U);
    msg.setDestination(12049U);
    msg.setDestinationEntity(161U);
    msg.action = 186U;
    msg.longain = 0.17275365921610064;
    msg.latgain = 0.41448452525369917;
    msg.bondthick = 3708899202U;
    msg.leadgain = 0.6904642538863008;
    msg.deconflgain = 0.39722683663714253;

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
    msg.setTimeStamp(0.9403874575894319);
    msg.setSource(24667U);
    msg.setSourceEntity(41U);
    msg.setDestination(45242U);
    msg.setDestinationEntity(177U);
    msg.err_mean = 0.4645134438730807;
    msg.dist_min_abs = 0.5268298012824767;
    msg.dist_min_mean = 0.6544068135352875;

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
    msg.setTimeStamp(0.44883010165970916);
    msg.setSource(57431U);
    msg.setSourceEntity(124U);
    msg.setDestination(53707U);
    msg.setDestinationEntity(69U);
    msg.err_mean = 0.2973063740954688;
    msg.dist_min_abs = 0.8902436346414777;
    msg.dist_min_mean = 0.7817235562962227;

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
    msg.setTimeStamp(0.03843506295281274);
    msg.setSource(52845U);
    msg.setSourceEntity(5U);
    msg.setDestination(42776U);
    msg.setDestinationEntity(127U);
    msg.err_mean = 0.01105249894016691;
    msg.dist_min_abs = 0.0038854996051448376;
    msg.dist_min_mean = 0.4446505585322291;

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
    msg.setTimeStamp(0.005296818740139764);
    msg.setSource(45429U);
    msg.setSourceEntity(120U);
    msg.setDestination(16057U);
    msg.setDestinationEntity(147U);
    msg.action = 119U;
    msg.lon_gain = 0.8844985965381246;
    msg.lat_gain = 0.7550356104617916;
    msg.bond_thick = 0.7960717609204753;
    msg.lead_gain = 0.635826154578708;
    msg.deconfl_gain = 0.21868840284145086;
    msg.accel_switch_gain = 0.2963665960699925;
    msg.safe_dist = 0.3238140483516797;
    msg.deconflict_offset = 0.16849602244087236;
    msg.accel_safe_margin = 0.06965265607405857;
    msg.accel_lim_x = 0.5732936377226252;

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
    msg.setTimeStamp(0.016160528341572);
    msg.setSource(50939U);
    msg.setSourceEntity(163U);
    msg.setDestination(42933U);
    msg.setDestinationEntity(252U);
    msg.action = 228U;
    msg.lon_gain = 0.5130914207164565;
    msg.lat_gain = 0.4858962655026452;
    msg.bond_thick = 0.46502712426355275;
    msg.lead_gain = 0.9924342874319428;
    msg.deconfl_gain = 0.2621900000435361;
    msg.accel_switch_gain = 0.6781998641388254;
    msg.safe_dist = 0.31916737786019955;
    msg.deconflict_offset = 0.5146946842515253;
    msg.accel_safe_margin = 0.8795588323123849;
    msg.accel_lim_x = 0.31794553709469453;

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
    msg.setTimeStamp(0.9109689733040444);
    msg.setSource(16022U);
    msg.setSourceEntity(152U);
    msg.setDestination(23984U);
    msg.setDestinationEntity(59U);
    msg.action = 139U;
    msg.lon_gain = 0.5230906935442325;
    msg.lat_gain = 0.18285823355356767;
    msg.bond_thick = 0.010895358890715023;
    msg.lead_gain = 0.9503747781102261;
    msg.deconfl_gain = 0.12271946117018961;
    msg.accel_switch_gain = 0.1519443269594094;
    msg.safe_dist = 0.02209368653830457;
    msg.deconflict_offset = 0.6308689286270565;
    msg.accel_safe_margin = 0.9680000526565955;
    msg.accel_lim_x = 0.34260502130038006;

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
    msg.setTimeStamp(0.7888244253007538);
    msg.setSource(43454U);
    msg.setSourceEntity(141U);
    msg.setDestination(55564U);
    msg.setDestinationEntity(225U);
    msg.type = 129U;
    msg.op = 28U;
    msg.err_mean = 0.8154163469283197;
    msg.dist_min_abs = 0.5018505356946006;
    msg.dist_min_mean = 0.9960064746666422;
    msg.roll_rate_mean = 0.05892989292717621;
    msg.time = 0.8494450379897589;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 177U;
    tmp_msg_0.lon_gain = 0.43670472711498676;
    tmp_msg_0.lat_gain = 0.8724705961831284;
    tmp_msg_0.bond_thick = 0.8235036973251063;
    tmp_msg_0.lead_gain = 0.5363581331752887;
    tmp_msg_0.deconfl_gain = 0.8793287045377897;
    tmp_msg_0.accel_switch_gain = 0.08599488141018019;
    tmp_msg_0.safe_dist = 0.3619237093019553;
    tmp_msg_0.deconflict_offset = 0.3191793698400075;
    tmp_msg_0.accel_safe_margin = 0.8585984490742598;
    tmp_msg_0.accel_lim_x = 0.815350001969487;
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
    msg.setTimeStamp(0.6949938787541179);
    msg.setSource(42661U);
    msg.setSourceEntity(14U);
    msg.setDestination(59111U);
    msg.setDestinationEntity(104U);
    msg.type = 230U;
    msg.op = 213U;
    msg.err_mean = 0.007856332314325698;
    msg.dist_min_abs = 0.9716048711801626;
    msg.dist_min_mean = 0.19143146602201622;
    msg.roll_rate_mean = 0.9968321876445015;
    msg.time = 0.49764910010534436;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 217U;
    tmp_msg_0.lon_gain = 0.5523612496630825;
    tmp_msg_0.lat_gain = 0.5689603025508163;
    tmp_msg_0.bond_thick = 0.2783356344114236;
    tmp_msg_0.lead_gain = 0.7913823151967748;
    tmp_msg_0.deconfl_gain = 0.7455539240786343;
    tmp_msg_0.accel_switch_gain = 0.23406056573560952;
    tmp_msg_0.safe_dist = 0.06299413760375616;
    tmp_msg_0.deconflict_offset = 0.37311355398810797;
    tmp_msg_0.accel_safe_margin = 0.3964725126164136;
    tmp_msg_0.accel_lim_x = 0.9828199617850433;
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
    msg.setTimeStamp(0.45679130334961504);
    msg.setSource(29050U);
    msg.setSourceEntity(194U);
    msg.setDestination(54428U);
    msg.setDestinationEntity(26U);
    msg.type = 11U;
    msg.op = 171U;
    msg.err_mean = 0.8516734731228429;
    msg.dist_min_abs = 0.07038182298152795;
    msg.dist_min_mean = 0.323387331250771;
    msg.roll_rate_mean = 0.16684642732264465;
    msg.time = 0.23997375864286152;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 96U;
    tmp_msg_0.lon_gain = 0.3965831780607715;
    tmp_msg_0.lat_gain = 0.04726894773994261;
    tmp_msg_0.bond_thick = 0.9935178476609539;
    tmp_msg_0.lead_gain = 0.4668940639721564;
    tmp_msg_0.deconfl_gain = 0.8435894536391412;
    tmp_msg_0.accel_switch_gain = 0.028651059170640814;
    tmp_msg_0.safe_dist = 0.8223418983943978;
    tmp_msg_0.deconflict_offset = 0.3471189626786876;
    tmp_msg_0.accel_safe_margin = 0.7604435461165484;
    tmp_msg_0.accel_lim_x = 0.27881387663090806;
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
    msg.setTimeStamp(0.6191094478249218);
    msg.setSource(57424U);
    msg.setSourceEntity(50U);
    msg.setDestination(32754U);
    msg.setDestinationEntity(28U);
    msg.lat = 0.670100818712412;
    msg.lon = 0.9805080334246024;
    msg.eta = 2306304449U;
    msg.duration = 37384U;

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
    msg.setTimeStamp(0.6714473103712585);
    msg.setSource(17845U);
    msg.setSourceEntity(92U);
    msg.setDestination(60468U);
    msg.setDestinationEntity(36U);
    msg.lat = 0.4623366171833896;
    msg.lon = 0.34820598275821335;
    msg.eta = 2280589874U;
    msg.duration = 4228U;

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
    msg.setTimeStamp(0.2068489088021529);
    msg.setSource(8704U);
    msg.setSourceEntity(79U);
    msg.setDestination(59975U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.8165554126522042;
    msg.lon = 0.1318158585571062;
    msg.eta = 2131720667U;
    msg.duration = 33159U;

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
    msg.setTimeStamp(0.4786528162039404);
    msg.setSource(35894U);
    msg.setSourceEntity(177U);
    msg.setDestination(61957U);
    msg.setDestinationEntity(129U);
    msg.plan_id = 30853U;

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
    msg.setTimeStamp(0.5153666670725158);
    msg.setSource(20851U);
    msg.setSourceEntity(13U);
    msg.setDestination(5954U);
    msg.setDestinationEntity(41U);
    msg.plan_id = 52643U;

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
    msg.setTimeStamp(0.4430596917277807);
    msg.setSource(46951U);
    msg.setSourceEntity(119U);
    msg.setDestination(17583U);
    msg.setDestinationEntity(128U);
    msg.plan_id = 56342U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.6104852188045057;
    tmp_msg_0.lon = 0.7728618121938492;
    tmp_msg_0.eta = 749785302U;
    tmp_msg_0.duration = 12943U;
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
    msg.setTimeStamp(0.012929895740337871);
    msg.setSource(59084U);
    msg.setSourceEntity(154U);
    msg.setDestination(37619U);
    msg.setDestinationEntity(102U);
    msg.type = 104U;
    msg.command = 8U;
    msg.settings.assign("ADLHJHPRYHOFAGTIHJWAUUKLJJBGTBVFDTEEETDKYZGGOXQHBNWFHLWERXZDCOJFDMBIYRICTZOKF");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 48741U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("JCHOURZRQMITAUXQGBYNEVNQILAEGUNYGYOZIXCDWOUEEOKMGFPIGUHOMHATTUDF");

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
    msg.setTimeStamp(0.2049677875199165);
    msg.setSource(14587U);
    msg.setSourceEntity(94U);
    msg.setDestination(9682U);
    msg.setDestinationEntity(135U);
    msg.type = 65U;
    msg.command = 123U;
    msg.settings.assign("XIPFAJHIKGMLCCUPILMHGSAHXJYNKVSWEUWSEGNQPYT");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 34800U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("GDUXLPJAMSBWQRWIOJUEHNKDSKEZJCMBZLTSUDADICENNSRWGJQHDKCAYARDYUDLXJZYYVWLCTHSPJLOZZTG");

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
    msg.setTimeStamp(0.0009340161722800611);
    msg.setSource(37880U);
    msg.setSourceEntity(119U);
    msg.setDestination(48555U);
    msg.setDestinationEntity(134U);
    msg.type = 80U;
    msg.command = 188U;
    msg.settings.assign("ZHPNVLYWPQUVYKNPTKNKNPOHKAMUNJXYSCTGUCAMZHYZPDFGCXBTDRVBJFFFHLEMMTIEFINLSQAAOZOWGIDHRSGWSEAHRUTGZFWNCCIYPLSVBPCJJOQDPVJUEQYUSTMMEDGQDVBLBQXGVDRUTQQRHWKWHIG");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 55123U;
    msg.plan.set(tmp_msg_0);
    msg.info.assign("CUDTMISSIQSFFWSAFWUTEHGGZVNMCLGOJUXQRSPUXUEWNXKNYKDTIYUJJFDMMIBLDFZUBKGSVZQDRCOSDLAKVMBHHODGZTVFHMJQYKIXKGPTAGABAPIUZSOWJLYRANPMGRXPRTPLFTJHOIUJKENWHIWOUVRSISTEYCLNDJEOAQJBXOEL");

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
    msg.setTimeStamp(0.2141241265763344);
    msg.setSource(31810U);
    msg.setSourceEntity(52U);
    msg.setDestination(52560U);
    msg.setDestinationEntity(26U);
    msg.state = 215U;
    msg.plan_id = 12477U;
    msg.wpt_id = 202U;
    msg.settings_chk = 19267U;

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
    msg.setTimeStamp(0.05365434822298709);
    msg.setSource(21530U);
    msg.setSourceEntity(48U);
    msg.setDestination(9095U);
    msg.setDestinationEntity(240U);
    msg.state = 27U;
    msg.plan_id = 21904U;
    msg.wpt_id = 132U;
    msg.settings_chk = 30161U;

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
    msg.setTimeStamp(0.013193809141469615);
    msg.setSource(5193U);
    msg.setSourceEntity(238U);
    msg.setDestination(64263U);
    msg.setDestinationEntity(133U);
    msg.state = 235U;
    msg.plan_id = 19255U;
    msg.wpt_id = 13U;
    msg.settings_chk = 20428U;

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
    msg.setTimeStamp(0.5903948628816895);
    msg.setSource(14028U);
    msg.setSourceEntity(98U);
    msg.setDestination(4500U);
    msg.setDestinationEntity(61U);
    msg.uid = 154U;
    msg.frag_number = 59U;
    msg.num_frags = 248U;
    const signed char tmp_msg_0[] = {118, -14, -79, -111, -122, 51, 91, -108, 55, 81, -47, 107, -86, -70, 19, 86, 98, 90, -15, 77, -49, 25, -49, -8, 31, 84, -41, 125, 89, -98, 117, -77, -15, -39, 10, -67, -94, 115, 51, 104, 45, -65, -35, 2, -60, -53, 95, -16, -112, 87, -70, -69, -82, 21, 52, 41, -32, 99, 48, 77, 93, 126, -77, 58, 99, 77, -113, -46, 120, -41, 101, -73, -116, -32, -38, 12, 10, 54, -113, -114, 15, -54, 97, 88, 117, 36, 12, 98, -33, -69, -47, -63, -51, -46, -62, 108, 87, 117, -5, -73, -15, 93, -38, -114, -56, -18, -106, 120, 98, 101, -115, 67, 58, -59, 58, 70, 81, 54, -14, -37, -8, -99, -60, -76, -26, -65, -25, -60, 44, 43, 97, -33, 57, -118, 81, -14, 6, 91, -121, 49, -69, -108, 79, 49, -68, 0, -71, 108, 0, -115, -96, 23, -83, 122, -101, 42, -119, -43, 51, -76, 4, 98, -63, -18, 73, -111, -106, -60, -37, -20, 67, -24, 82, 24, -67, 102, 22, -98, -65, -8};
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
    msg.setTimeStamp(0.5725105679851409);
    msg.setSource(15482U);
    msg.setSourceEntity(240U);
    msg.setDestination(32648U);
    msg.setDestinationEntity(231U);
    msg.uid = 163U;
    msg.frag_number = 200U;
    msg.num_frags = 171U;
    const signed char tmp_msg_0[] = {-34, -27, 126, -106, -80, -43, -124, -32, 120, -14, 76, -72, 57, -116, -22, 100, 77, -56, 113, -11, 82, 102, -22, 78, -64, -23, 63, -2, 62, 116, -66, -48, 122, -17, 111, -67, -41, 20, 33, -32, -86, -97, 124, -19, 84, -71, 24, -1, -14, -27, -97, 57, 60, -122, -78, -42, 87, 95, 41, 93, 125, 111, -22, 21, -127, -3, 84, -99, -124, -97, 17, 29, -38, -43, -59, -113, -80, 42, -5, -125, 26, -107, 74, -29, -8, 3, -82, -63, 9, -71, -19, 89, -7, 99, 44, 28, 121, -127, 123, 36, 81, 76, 117, -117, -31, 97, 63, -29, 43, 21, -49, 79, -119, -124, 39, 46, 101, -8, 88, -5, -109, -123, 42, -20, 59, -108, 52, 96, -117, 44, 60, -91, 126, 115, -3, 27, 114, 14, -58, 86, -100, 26, 23, -7, -88, 1, -64, 117, -53, -56, 126, -73, 50, -118, -66, 88, -90, 65, 48, -102, -40, -100, 109, 57, 5, 52, 92, 70, -6, -108, 71, 25, 5, 40, 51, 3, -61, 15, 35, 80, 16, 80, 64, -32, -34, -105, -8, 120, -12, -10, -126, -34, -107, -44, -37, 92, 24, -112, 100, -124, -43, -38, -63, -73, -33, 63, 37, 115, 59, 97, -48, 33, -110, -42, 11, -14, -18, 73, 46, 25, 65, 30, 99, -87, 111, -71, 120, 77, -124, 8, -32, -33, -61, 104};
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
    msg.setTimeStamp(0.23619392327491384);
    msg.setSource(24890U);
    msg.setSourceEntity(23U);
    msg.setDestination(40389U);
    msg.setDestinationEntity(53U);
    msg.uid = 102U;
    msg.frag_number = 68U;
    msg.num_frags = 131U;
    const signed char tmp_msg_0[] = {-48, 107, -66, 51, -124, -86, 107, -66, 36, -80, -101, 4, 0, -116, -78, 113, 66, 9, 0, -86, -126, 104, -56, 57, -100, 12, -54, 43, 6, -39, 6, -105, -52, -44, -75, -55, -128, -24, 18, 70, -38, -124, -49, -41, -40, 113, -71, -97, 74, 80, -44, 62, -95, 59, -43, -103, 59, -118, -94, -106, -96, -18, 10, -38, -74, 65, 84, -89, -128, -23, 82, 25, 8, -2, -11, -37, 54, 98, 108, 11, 65, 60, 12, -89, -9, 76, 68, 95, 103, 80, -70, 64, -27, 3, -8, -21, -64, 88, -32, 53, -24, 3, 9, 12, 52, 97, 114, 57, 89, -83, -43, -55, -39, -125, 108};
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
    msg.setTimeStamp(0.8087587333281557);
    msg.setSource(9205U);
    msg.setSourceEntity(116U);
    msg.setDestination(776U);
    msg.setDestinationEntity(228U);
    msg.uid = 47U;
    msg.op = 2U;
    msg.frag_ids.assign("CSEAIIHGBEKBEAYGOKXQNCYBJAWQSBFXMMRCWHELDWQOOGZPLFAAELJGSMXQOZZUQLTFPYZLXBHUHJVFZVJVVPOXVDRRILASCZSKBCFTESEYOYKXBIZMGOMYVSYNZDAOMVXDWNPTCFHKUHGVHULEDTCRMMQJTPNUSDWNJTXDPINKQUYELCRECAOHLQHNATPUJNXKGWTDBWTBRKZZGIGRFFUNQFUAPRCPKM");

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
    msg.setTimeStamp(0.031944504708617094);
    msg.setSource(44693U);
    msg.setSourceEntity(118U);
    msg.setDestination(64103U);
    msg.setDestinationEntity(221U);
    msg.uid = 242U;
    msg.op = 176U;
    msg.frag_ids.assign("WTUXSNWCNWZKDHWFTUBKSJHVTCBLIQBVRMBIZQAIKQNWLICYMHGUMSVECQHDEFWMACOEBXSSLTZEKQDVQMDYRFKVLFICMEBJSHHFJUZJKYGHZYYNRGQMLRGTJHSRAUUIYYDDUJPZIRJVWAONLGORRKBUONKEWCPQV");

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
    msg.setTimeStamp(0.8041980833361067);
    msg.setSource(60618U);
    msg.setSourceEntity(97U);
    msg.setDestination(46197U);
    msg.setDestinationEntity(16U);
    msg.uid = 205U;
    msg.op = 179U;
    msg.frag_ids.assign("FVIATAYDOQIBYNRKJTCQLDZSTPLECOJJYCTPUMPBKOHQPUFPASYIOLONBNWAYTWXKRQMJRMAYDLEFOEWWUCSOIHVTQLIRSWDPKJGGUJBIWHFHWVGVHENBLLNDHQUKJNIPVVAXSUGCNEUHBYOUOSSKIQVCMLHCTE");

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
    msg.setTimeStamp(0.2804746246310166);
    msg.setSource(23141U);
    msg.setSourceEntity(190U);
    msg.setDestination(55543U);
    msg.setDestinationEntity(46U);
    msg.content_type.assign("PEKJYRATRKXNQ");
    const signed char tmp_msg_0[] = {-63, 10, 73, 126, 111, -2, -55, -61, 84, 81, 7, -28, 63, -31, -121, -71, 56, -93, -121, 110, -33, 16, -100};
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
    msg.setTimeStamp(0.29993166663403004);
    msg.setSource(58922U);
    msg.setSourceEntity(103U);
    msg.setDestination(59842U);
    msg.setDestinationEntity(4U);
    msg.content_type.assign("XZPVLEKJXXVTNOTMUTJRVDYWTBAZMRFOEMBBFCHZQATHWGUCQWEWVAFHQCFCUZOUFMJVCOXPFYOCXNDQIINHWLPEKNRFUOLXMKPGEGGDRPYPGUOISIOBATAQYVUYI");
    const signed char tmp_msg_0[] = {-90, -67, -20, 118, 109, -72, -56, -32, -80, -16, -80, -120, -18, -63, -82, 34, -77, 10, 12, -65, -84, -89, 51, -122, 84, -100, 2, -109, 26, -81, -82, -99, -126, -88, -83, 64, 95, -63, 83, -57, -59, -100, -44, -49, 117, -69, -110, -1, 55, -106, 105, 106, 115, 38, 111, 78, -109, 31, -80, 121, -22, -19, -27, -38, -16, 58, 45, 125, 30, 125, -86, -121, 124, 57, -114, 116, 118, -71, 82, 78, 10, 124, 79, -93, 61, -124, -25, 34, 116, -2, 103, 39, 81, 66, -49, -115, 122, 126, 111, 95, -118, -84, 83, -86, 58, -109, 30, -68, 104, -72, 57, 29, 114, -71, -112, 126, 97, 67, -12, 32, 56, -3, 62, -31, -5, 114, -40, 110, -117, -72, 112, 23, 29, 19, 11, -13, -57, 92, 120, -28, 107, 118, 111, -5, -11, -104, -23, 83, -1, 32, -4, 37, -11, -61, -78, 55, 93, -30, -94, 19, 47, 96, -20, -51, -15, -34, -50, -75, 123, -2, -6, 14, 8, 49, -126, 94, 49, 88, 66, -121, 5, 100, -120, -39, -103, 36, 76, 7, 57, 82, 110, -124, -52, -115, -80, 76, -57, 42, -78, 7, -24, 11, -61, 15, -73, 13, -47, -16, -5, -125, -72, -40, 52, 25, -95, 68, -21, 59, -82, 45, -53, 16, -1, -33, -8, -84, 49, 100, -49, 52, -17, 8, 82, -59, -6, -124, 85, 11, 27, 96, 105, 85, -38, 18, -71, 44, -52, -11};
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
    msg.setTimeStamp(0.37129840493358357);
    msg.setSource(13298U);
    msg.setSourceEntity(244U);
    msg.setDestination(57368U);
    msg.setDestinationEntity(121U);
    msg.content_type.assign("FZGEUDVWZUDFDNBMGRASYSGNBHXMUDKRYUYLRSOBLMCHAHNKJSRKRMUPSAUUOYVLXIBKBGWVEKDTOLOK");
    const signed char tmp_msg_0[] = {-55, 27, 76, -102, -3, 14, -92, 31, -120, -36, 7, -33, 44, -86, 80, 25, 25, 42, 7, -51, -13, -24, -122, -83, 103, 105, -1, 106, -57, 106, 73, 58, -9, 0, -93, -49, 30, 28, 43, 55, 5, 89, 21, 82, -116, 56, -106, 67, -4, -45, 2, 123, -76, -23, -5, -39, 54, 49, 28, -45, -19, -110, -108, -19, 10, -98, -35, -127, 10, -91, -75, 125, -24, 26, -54, 12, -27, -5, -38, -103, -48, 66, 32, 32, -4, 95, -124, -27, -90, -113, 31, -100, -6, 10, -6, 94, 21, 36, -9, 26, 57, 27, 70, 20, 95, 49, -52, 76, 1, 1, -70, -20, -13, -3, 104, -5, 5, 90, 42, 28, 55, 14, 4, 55, -67, 75, 40, -42, -87, -108, -64, -80, 39, -4, -86, -120, -74, 16, -70, 94, -1, 94, -106, -108, -7, 41, -76, -2, -3, 76, -59, -34, 35, -63, -51, 21, 40, 25, 44, 90, -88, 79, -25, 27, 91, -9, -78, 116, -58, -69, 72, 78, 18, 59, -5, -41, -33, 63, 74, -28, -15, -84, -97, 54, 47, 73, -94, 7, 9, 36, -91, -73, 112, -94, -95, 28, -78, -105, 19, 111, -58, 99, 70, -80, 50, -66, 56, -66, 29, 13, 72, -91, -110, 6, -61, 38, -124, -97, 117, 121, 38, 42, -55, -111, 33, -46, 112, 83, -68, -101, -73, -2, -33, 103, 42, -22, 51, 119, -41, -96, -122, 22, -76, -123, 9};
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
    msg.setTimeStamp(0.9062864519987791);
    msg.setSource(42641U);
    msg.setSourceEntity(248U);
    msg.setDestination(33016U);
    msg.setDestinationEntity(236U);

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
    msg.setTimeStamp(0.46841548606006356);
    msg.setSource(36939U);
    msg.setSourceEntity(21U);
    msg.setDestination(54288U);
    msg.setDestinationEntity(81U);

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
    msg.setTimeStamp(0.06711162473770227);
    msg.setSource(40789U);
    msg.setSourceEntity(86U);
    msg.setDestination(15115U);
    msg.setDestinationEntity(203U);

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
    msg.setTimeStamp(0.6786239126409336);
    msg.setSource(2245U);
    msg.setSourceEntity(128U);
    msg.setDestination(57958U);
    msg.setDestinationEntity(10U);
    msg.target = 49779U;
    msg.bearing = 0.828404248655899;
    msg.elevation = 0.5265555786498517;

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
    msg.setTimeStamp(0.36426060019891193);
    msg.setSource(51794U);
    msg.setSourceEntity(60U);
    msg.setDestination(18485U);
    msg.setDestinationEntity(94U);
    msg.target = 12046U;
    msg.bearing = 0.6444822608854381;
    msg.elevation = 0.9221922094126201;

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
    msg.setTimeStamp(0.12411675123119681);
    msg.setSource(60119U);
    msg.setSourceEntity(58U);
    msg.setDestination(47836U);
    msg.setDestinationEntity(128U);
    msg.target = 23568U;
    msg.bearing = 0.005119140391423471;
    msg.elevation = 0.24802444883821195;

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
    msg.setTimeStamp(0.6453746615162486);
    msg.setSource(51741U);
    msg.setSourceEntity(149U);
    msg.setDestination(19380U);
    msg.setDestinationEntity(196U);
    msg.target = 4174U;
    msg.x = 0.49135531008607636;
    msg.y = 0.3871316200574836;
    msg.z = 0.1540803505466084;

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
    msg.setTimeStamp(0.3905641424826911);
    msg.setSource(62885U);
    msg.setSourceEntity(171U);
    msg.setDestination(28829U);
    msg.setDestinationEntity(44U);
    msg.target = 48219U;
    msg.x = 0.41171698791415456;
    msg.y = 0.6196382334683118;
    msg.z = 0.8273082042914617;

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
    msg.setTimeStamp(0.04530977945030412);
    msg.setSource(33560U);
    msg.setSourceEntity(13U);
    msg.setDestination(58831U);
    msg.setDestinationEntity(56U);
    msg.target = 25115U;
    msg.x = 0.2380921235135368;
    msg.y = 0.16318501673099484;
    msg.z = 0.7466988346789166;

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
    msg.setTimeStamp(0.15215827984721775);
    msg.setSource(53372U);
    msg.setSourceEntity(236U);
    msg.setDestination(24546U);
    msg.setDestinationEntity(138U);
    msg.target = 10529U;
    msg.lat = 0.40274993219337707;
    msg.lon = 0.042341503345463716;
    msg.z_units = 153U;
    msg.z = 0.6997826757028323;

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
    msg.setTimeStamp(0.31475150690609377);
    msg.setSource(45999U);
    msg.setSourceEntity(185U);
    msg.setDestination(46168U);
    msg.setDestinationEntity(113U);
    msg.target = 55236U;
    msg.lat = 0.9031950129556833;
    msg.lon = 0.26034683856358953;
    msg.z_units = 143U;
    msg.z = 0.9235249534508786;

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
    msg.setTimeStamp(0.21465807524812552);
    msg.setSource(5539U);
    msg.setSourceEntity(107U);
    msg.setDestination(1379U);
    msg.setDestinationEntity(114U);
    msg.target = 39697U;
    msg.lat = 0.6900279745142841;
    msg.lon = 0.6924358660873614;
    msg.z_units = 245U;
    msg.z = 0.2809368066489568;

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
    msg.setTimeStamp(0.20408583349650355);
    msg.setSource(63381U);
    msg.setSourceEntity(172U);
    msg.setDestination(59138U);
    msg.setDestinationEntity(237U);
    msg.locale.assign("AZSCPUVSIAZAXCNNNGTTTC");
    const signed char tmp_msg_0[] = {-111, -60, 4, -111, -95, 70, 7, 39, 34, -100, 64, -55, 39, -95, 21, 53, -113, 64, 29, 3, 90, -36, 70, 1, 18, 2, 30, -85, -112, 57, 39, 21, -85, -19, 28, 65, 56, 95, 92, 9, 72, -65, 36, -22, 72, 112, -23, 11, 47, -25, -7, 6, 94, 100, 14, 83, -39, 57, 37, -62, 63, 24, 61, 63, 71, -78, 94, 26, 14, 34, 89, -81, 20, -36, -114, -97, -32, -111, -110, 17, 76, -87, -55, -14, -40, 79, 112, -119, -86, 65, 101, -95, 105, -54, 39, -122, -100, 76, -12, 113, -121, 122, 100, 13, 103, -4, 113, 9, 9, 56, 111, -87, 65, -6, 67, 12, -78, 46, 1, -121, -32, 73, -16, 121, 111, -78, -6, 77, -13, 1, -64, 50, 13, 18, -112, -48, -12, -117, 47, 33, 2, -110, 106, 41, 26, -9, 113, 115, -91, -79, -1, 44, 47, -52, -72, -125, 99, -83};
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
    msg.setTimeStamp(0.8726746303603927);
    msg.setSource(55527U);
    msg.setSourceEntity(130U);
    msg.setDestination(12586U);
    msg.setDestinationEntity(10U);
    msg.locale.assign("ILNRHRGZXVDSEFJBJSJFYNRNWYBAZCJCWYLZXVOZAGHRLTUZPBMFOINOJXTMPPUXLYXGFGMMGTBZNSLNAYRTQVWBFCVLDYOEPJEAUZEEBKDETCWLOBUCISRJAWKKPFAOGRTSJQEXFQDONLOFSIDVKQVMONWXSPUDYULVIEIHYNVMEWPFWQRCMCHVKQKMRHTXTHFKDGTAQ");
    const signed char tmp_msg_0[] = {98, 107, -78, -1, -21, -29, -57, -60, 31, 108, 50, 14, -93, -44, -105, -82, -11, -52, -74, -116, 63, 84, -101, 38, -98, -5, -94, 111, -106, 49, -125, -41, -100, 103, -46, 25, 5, -79, 83, 110, 114, 69, -56, -125, -117, -39, -83, 80, 44, -80, -80, 26, -50, 81, 45, -71, -128, 63, 57, 99, -109, 109, -24, 114, 80, 56, 64, 90, 50, -118, -7, -100, -7, -50, 56, -55, -40, 88, 69, -106, 71, 50, -4, 56, -28, -12, 99, 29, 120, -42, -11, 84, 74, -96, -39, -123, 126, -114, 72, -34, -4, -40, -6, -71, -77, 103, -127, 32, -69, 85, 88, -16, -127, 97, -6, 113, 27, -28, 109, -62, 19, 117, -109, 111, -76, 8, 94, 30, -24, -31, 112, 122, 63, -63, 19, 67, -32, -53, 29, -15, -67, 27, 73, 105, 120, 36, -83, -98, -109, 19, 122, 80, -120, 115, 117, 31, 24, 18, -125, -6, -85, 85, 123, -46, 22, -128, -3, -7, -35, -1, -15, 77, -103, 56, -117, 14, 35, -52, -67, -107, 108, -104, -124, 120, 48, 126, -113, 113, 33, 20, 113, 35, -64, 9, -8, 97, 17, -104, -109, 95, 15, 93, -124, 0, 97, -77, -114, 60, 98, -41, 99, -67, -24, -18, 96, 90};
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
    msg.setTimeStamp(0.42701263604799355);
    msg.setSource(24137U);
    msg.setSourceEntity(121U);
    msg.setDestination(38080U);
    msg.setDestinationEntity(33U);
    msg.locale.assign("YZBKDGIGWYNMAQSEJLSVKKHWAVDDJLNPNCYROAVSWCHCRXVXDYANTMANWTDPZZIEMQDVCBANXOLFZMAQGRTOSFVGUYPXXHFBDIBTAOZDDRULCHTLJMRGQQYOZLTUHSKYFBJVGFFBXQCVTNNTEEHSPIEGVPCHQOSQICZSEXKMKJGUYKPAFBUMFWBIGKJUZIJERCP");
    const signed char tmp_msg_0[] = {68, -22, -10, 30, 110, -4, 25, 35, -1, 87, 61, -11, -49, -115, -30, 3, -26, -10, -9, -78, -82, 63, 101, -37, -72, 1, 49, -39, 93, 38, -107, -11, 110, 9, 62, 79, 10, 59, -52, 53, 87, -25, 74, 7, -40, -54, 110, -117, -18, 123, -12, 32, 114};
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
    msg.setTimeStamp(0.5281213582520785);
    msg.setSource(20885U);
    msg.setSourceEntity(76U);
    msg.setDestination(32617U);
    msg.setDestinationEntity(192U);

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
    msg.setTimeStamp(0.036281997675696176);
    msg.setSource(36010U);
    msg.setSourceEntity(240U);
    msg.setDestination(19087U);
    msg.setDestinationEntity(177U);

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
    msg.setTimeStamp(0.6557244503350913);
    msg.setSource(1475U);
    msg.setSourceEntity(151U);
    msg.setDestination(34311U);
    msg.setDestinationEntity(160U);

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
    msg.setTimeStamp(0.24111777143338142);
    msg.setSource(3540U);
    msg.setSourceEntity(51U);
    msg.setDestination(10882U);
    msg.setDestinationEntity(209U);
    msg.camid = 179U;
    msg.x = 14910U;
    msg.y = 61454U;

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
    msg.setTimeStamp(0.412412439350898);
    msg.setSource(46308U);
    msg.setSourceEntity(230U);
    msg.setDestination(44523U);
    msg.setDestinationEntity(68U);
    msg.camid = 127U;
    msg.x = 28208U;
    msg.y = 670U;

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
    msg.setTimeStamp(0.12613197839118917);
    msg.setSource(21053U);
    msg.setSourceEntity(117U);
    msg.setDestination(34617U);
    msg.setDestinationEntity(26U);
    msg.camid = 153U;
    msg.x = 59895U;
    msg.y = 3246U;

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
    msg.setTimeStamp(0.3443225181705425);
    msg.setSource(13087U);
    msg.setSourceEntity(58U);
    msg.setDestination(33450U);
    msg.setDestinationEntity(121U);
    msg.camid = 105U;
    msg.x = 40574U;
    msg.y = 4227U;

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
    msg.setTimeStamp(0.6868110144696159);
    msg.setSource(9049U);
    msg.setSourceEntity(52U);
    msg.setDestination(9560U);
    msg.setDestinationEntity(77U);
    msg.camid = 106U;
    msg.x = 30749U;
    msg.y = 38600U;

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
    msg.setTimeStamp(0.06447677942252383);
    msg.setSource(2345U);
    msg.setSourceEntity(171U);
    msg.setDestination(16196U);
    msg.setDestinationEntity(105U);
    msg.camid = 143U;
    msg.x = 12709U;
    msg.y = 43283U;

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
    msg.setTimeStamp(0.5360403495520194);
    msg.setSource(23849U);
    msg.setSourceEntity(7U);
    msg.setDestination(65236U);
    msg.setDestinationEntity(167U);
    msg.tracking = 28U;
    msg.lat = 0.2226579140599947;
    msg.lon = 0.12663699861986166;
    msg.x = 0.6488076077588756;
    msg.y = 0.12058048183437842;
    msg.z = 0.9685444572467443;

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
    msg.setTimeStamp(0.20789190291410453);
    msg.setSource(60678U);
    msg.setSourceEntity(30U);
    msg.setDestination(40310U);
    msg.setDestinationEntity(52U);
    msg.tracking = 53U;
    msg.lat = 0.48671413588230694;
    msg.lon = 0.5954179676644109;
    msg.x = 0.33445070690420275;
    msg.y = 0.09487206479468113;
    msg.z = 0.5623965750431591;

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
    msg.setTimeStamp(0.9052599068765648);
    msg.setSource(60565U);
    msg.setSourceEntity(205U);
    msg.setDestination(25825U);
    msg.setDestinationEntity(246U);
    msg.tracking = 238U;
    msg.lat = 0.1792101119148164;
    msg.lon = 0.34310839763690726;
    msg.x = 0.9853079831302192;
    msg.y = 0.0505930521678678;
    msg.z = 0.36133658018408144;

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
    msg.setTimeStamp(0.17904247612437252);
    msg.setSource(35045U);
    msg.setSourceEntity(60U);
    msg.setDestination(34840U);
    msg.setDestinationEntity(156U);
    msg.target.assign("XPFNYPKYSEJLOBPHFNHAECHBCHXWLZNAKBMZKCRKUWMNMGKANTZJALIDCTDTVSQUZHMQDHGZUYKIINFPSPCAICBJRKGLMWKOEICQTWKVWNUDYXRFHPUYFJJUELJOTVIQDBVLGVLRBQUVWEWJZTECICONOPOIWDYJRMEXX");
    msg.lbearing = 0.9072908705716444;
    msg.lelevation = 0.5184306825364059;
    msg.bearing = 0.6394573229506417;
    msg.elevation = 0.6944783073754356;
    msg.phi = 0.2897773331000342;
    msg.theta = 0.40036851043290944;
    msg.psi = 0.08369690238974137;
    msg.accuracy = 0.04564556907671091;

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
    msg.setTimeStamp(0.2919993072945426);
    msg.setSource(8784U);
    msg.setSourceEntity(223U);
    msg.setDestination(39877U);
    msg.setDestinationEntity(214U);
    msg.target.assign("YKHWOXVXKNIUHEMFLSMFRYDPFMGRZUJBI");
    msg.lbearing = 0.9709055838013176;
    msg.lelevation = 0.09667275888056237;
    msg.bearing = 0.8316615040174028;
    msg.elevation = 0.6113363215459198;
    msg.phi = 0.3603902861329792;
    msg.theta = 0.7809592686603345;
    msg.psi = 0.08921536734635316;
    msg.accuracy = 0.43007419531414315;

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
    msg.setTimeStamp(0.10371570701239086);
    msg.setSource(13935U);
    msg.setSourceEntity(10U);
    msg.setDestination(5316U);
    msg.setDestinationEntity(241U);
    msg.target.assign("QGLDNPYLGUEOXXXVNQEPNRXOFTTTIAWRJSQHMWTNVCLDTPEDSZRCSRQGZWGXAODSHXBPJRAGTMECLWOVTIFXELQKLLDIFGCLIDZBPJBEPASGXMHJEIMJVWIZHKTHIQ");
    msg.lbearing = 0.8722249919295174;
    msg.lelevation = 0.06266155388070493;
    msg.bearing = 0.17346924796248042;
    msg.elevation = 0.12236181626955711;
    msg.phi = 0.21858034748882282;
    msg.theta = 0.6440076375602637;
    msg.psi = 0.5571169102384425;
    msg.accuracy = 0.8523139735019837;

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
    msg.setTimeStamp(0.7168079104655556);
    msg.setSource(10884U);
    msg.setSourceEntity(226U);
    msg.setDestination(54879U);
    msg.setDestinationEntity(225U);
    msg.target.assign("MXHNWCLUWKEVQGCPHHUWUQVFCWYPEIRZCRQLZABOJSQTJESSAYVASVZMEMJFRAXKJBXVBLKELUTDRQYAUEKGVMPXDKMYIZBYERNVRPIGONFDOONCOZPHTFZNZPZAPOVGHCTFIUDRTANGIDUMKNQAPXQJHQYQXNJAYCLSAIGPYBJXDNJIXFWQYXZKTTMFEHKWOTLFISWFOTWPLUUHRMOCZJXDMCGDSSL");
    msg.x = 0.9068529051915852;
    msg.y = 0.8801810871547938;
    msg.z = 0.0065589991432809525;
    msg.n = 0.16127518515450934;
    msg.e = 0.20159019887048446;
    msg.d = 0.41850779514996994;
    msg.phi = 0.4749918999550523;
    msg.theta = 0.07550563571632307;
    msg.psi = 0.08620371362231438;
    msg.accuracy = 0.6454766866580128;

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
    msg.setTimeStamp(0.6151198504961687);
    msg.setSource(36350U);
    msg.setSourceEntity(178U);
    msg.setDestination(13736U);
    msg.setDestinationEntity(77U);
    msg.target.assign("OHYQDEBNOZXQALKUAOTIHSDIHWAIBUZFFJYHNMNMGNQXQNBDLDHXQZBTKJIFVPSLWVBAAYXBWAVOBXZOWYWITVSJKLTVHVXFDKLCIJJCCMKESOWJCFUGWVMDZBRYLPKZVYUDHPBYEVGEPCTERTMUTHMXEYPGIWKJRXZNQCUUREPYSFDSFGBGSOJGZQJDSNRINXUQPRCVLMCMKNWOCRQHRLLJSTTPYG");
    msg.x = 0.22019708468869004;
    msg.y = 0.32452478436200294;
    msg.z = 0.7338943138693126;
    msg.n = 0.2536258872203384;
    msg.e = 0.9685665605441497;
    msg.d = 0.9220396372263384;
    msg.phi = 0.3045552915992292;
    msg.theta = 0.3680013700750282;
    msg.psi = 0.7593767468208916;
    msg.accuracy = 0.003083553301029607;

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
    msg.setTimeStamp(0.035731468665998745);
    msg.setSource(54757U);
    msg.setSourceEntity(135U);
    msg.setDestination(26704U);
    msg.setDestinationEntity(51U);
    msg.target.assign("QQUZPRMVCMKZOEMDULQAGKASKOTHWXCQQXZLVHJYIIJVJBFQINGGSZNCPWVGSR");
    msg.x = 0.6850329737927024;
    msg.y = 0.4097004348449722;
    msg.z = 0.7588792993050035;
    msg.n = 0.4855925450409164;
    msg.e = 0.9025048717810951;
    msg.d = 0.7281374699265485;
    msg.phi = 0.4856655377903094;
    msg.theta = 0.6587889925769423;
    msg.psi = 0.20786922632593052;
    msg.accuracy = 0.7195743440348655;

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
    msg.setTimeStamp(0.07891552009240488);
    msg.setSource(3569U);
    msg.setSourceEntity(72U);
    msg.setDestination(39952U);
    msg.setDestinationEntity(157U);
    msg.target.assign("YWBSFFDJVAJSSGDMZPOONUCQPXXYHBSZJLOQYLANQKIZZQZGEQZWXQJTKFWVQDJANQEECACVCYQKBIHPMMFXQDVBRBJJEGKCKSAKUUDHKXDMMMHCTI");
    msg.lat = 0.2866023551182002;
    msg.lon = 0.19077152969770705;
    msg.z_units = 231U;
    msg.z = 0.15145833005897447;
    msg.accuracy = 0.9849106257127975;

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
    msg.setTimeStamp(0.9930790760252498);
    msg.setSource(7117U);
    msg.setSourceEntity(235U);
    msg.setDestination(19195U);
    msg.setDestinationEntity(205U);
    msg.target.assign("PPKHZBVOEYAJAYIUCWUBIGEOPMLXULRJGTXLURICEIHDXXEWFLAABRILFHXUDWNQMNNCZWPWVDJSIMONZBMBAFT");
    msg.lat = 0.6448773002498709;
    msg.lon = 0.7010008864931164;
    msg.z_units = 193U;
    msg.z = 0.6158571330678176;
    msg.accuracy = 0.833330495257072;

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
    msg.setTimeStamp(0.17097415166264862);
    msg.setSource(13336U);
    msg.setSourceEntity(227U);
    msg.setDestination(60799U);
    msg.setDestinationEntity(183U);
    msg.target.assign("KRQDPBRPEPKKVHDNETBGUDSYPGETDYCXDOERAHAWZJWZNGFXROYVWFIJGJIZTPBNRCJVDXSLCHXXSMGBDQUVKQQYITUMOWJELEVSWTRSJWFAMZKRDMBLTQAMNKHTIALOCAEFDEMIOFIFZNGVIZOOPQACXJPCRZWRHVUCUSYUBHYJGOLBBVTXSQUMTE");
    msg.lat = 0.6947590951449591;
    msg.lon = 0.9306152243153966;
    msg.z_units = 166U;
    msg.z = 0.7019208342957419;
    msg.accuracy = 0.7941314633125623;

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
    msg.setTimeStamp(0.1270324980849361);
    msg.setSource(33247U);
    msg.setSourceEntity(157U);
    msg.setDestination(9520U);
    msg.setDestinationEntity(57U);
    msg.name.assign("CWXBNQXIXXVDJBERCCRTPECUUUFAKFRJJTSAHXQIVJJLIFZZPFGQLZSEQETRNZKDNYILKWXBELOSRNGZNPBFABRPYBOOOSCDXASGZNJYLQVEDVAEPIGPUPHMPYMFWFIMIMHGXWCUSANMKXEVFZPJRYTBOQYNTARHYHVGIFDUVKDMKNEWBNTMDTJHDQUEIAHGOULLCIYJOKMGJLKSSMWZWLOGVOTT");
    msg.lat = 0.9307617280333903;
    msg.lon = 0.2455411436461966;
    msg.z = 0.09675784038871227;
    msg.z_units = 138U;

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
    msg.setTimeStamp(0.3983640273817306);
    msg.setSource(37257U);
    msg.setSourceEntity(67U);
    msg.setDestination(59640U);
    msg.setDestinationEntity(30U);
    msg.name.assign("LYZORXJOBFKIAWTFQSDQHGKUPDRUONSFSLYQICMSPAZBBCEQFATQCNLCLVJNFTMADCHVXKKIVGETQCLTUTZWQZJPJDDKWNIHVYYNYMUAKJUMLFUWAYPZXYZBCLUZVCTUZIOGRBXNQDNNFJEMDY");
    msg.lat = 0.6784662249824515;
    msg.lon = 0.09341689109680007;
    msg.z = 0.828501383984401;
    msg.z_units = 144U;

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
    msg.setTimeStamp(0.2654644148056179);
    msg.setSource(47196U);
    msg.setSourceEntity(234U);
    msg.setDestination(52120U);
    msg.setDestinationEntity(125U);
    msg.name.assign("HXEECESTRXTCJXWCVKTVDCVIUPLBNOJ");
    msg.lat = 0.8121595511925233;
    msg.lon = 0.5934411495606832;
    msg.z = 0.4120623875348437;
    msg.z_units = 94U;

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
    msg.setTimeStamp(0.3073921060847983);
    msg.setSource(48425U);
    msg.setSourceEntity(214U);
    msg.setDestination(8796U);
    msg.setDestinationEntity(197U);
    msg.op = 7U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("GMACFQDBDDKHLHFMACQZTSXC");
    tmp_msg_0.lat = 0.06917513523027041;
    tmp_msg_0.lon = 0.9006452504350817;
    tmp_msg_0.z = 0.013727210270596646;
    tmp_msg_0.z_units = 20U;
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
    msg.setTimeStamp(0.6127782794135983);
    msg.setSource(59073U);
    msg.setSourceEntity(19U);
    msg.setDestination(639U);
    msg.setDestinationEntity(217U);
    msg.op = 122U;

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
    msg.setTimeStamp(0.32007246445235205);
    msg.setSource(44924U);
    msg.setSourceEntity(35U);
    msg.setDestination(21832U);
    msg.setDestinationEntity(197U);
    msg.op = 62U;
    IMC::UsblModem tmp_msg_0;
    tmp_msg_0.name.assign("HFFLWTZGAOYYDUAKZNGVCWVNJOLQMUSSKLYDXXOPFEMZFLRSAWFIEZKIWBXFFWJRZNBXHGMRMTBKXTNZULWJAPSOHBVYPIGHHJDDKNCQQQJSUFVMCWHBRKWTIXBGAUWCEGGATRBYHDSPEMAI");
    tmp_msg_0.lat = 0.9777590145074679;
    tmp_msg_0.lon = 0.5214594525374776;
    tmp_msg_0.z = 0.5850721278411463;
    tmp_msg_0.z_units = 179U;
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
    msg.setTimeStamp(0.09862500772430471);
    msg.setSource(22351U);
    msg.setSourceEntity(95U);
    msg.setDestination(58298U);
    msg.setDestinationEntity(1U);
    msg.value = 0.20632505652558164;
    msg.type = 56U;

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
    msg.setTimeStamp(0.3077839894908373);
    msg.setSource(48114U);
    msg.setSourceEntity(217U);
    msg.setDestination(15670U);
    msg.setDestinationEntity(32U);
    msg.value = 0.4790817442583727;
    msg.type = 30U;

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
    msg.setTimeStamp(0.8965928315339078);
    msg.setSource(53415U);
    msg.setSourceEntity(162U);
    msg.setDestination(59060U);
    msg.setDestinationEntity(246U);
    msg.value = 0.8987453939703002;
    msg.type = 102U;

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
    msg.setTimeStamp(0.10507940543330963);
    msg.setSource(32084U);
    msg.setSourceEntity(110U);
    msg.setDestination(9097U);
    msg.setDestinationEntity(218U);
    msg.value = 0.49217867861944176;

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
    msg.setTimeStamp(0.3205184251377171);
    msg.setSource(59649U);
    msg.setSourceEntity(19U);
    msg.setDestination(21798U);
    msg.setDestinationEntity(214U);
    msg.value = 0.8781263365956151;

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
    msg.setTimeStamp(0.993626022598913);
    msg.setSource(13784U);
    msg.setSourceEntity(203U);
    msg.setDestination(49978U);
    msg.setDestinationEntity(34U);
    msg.value = 0.19489817220731753;

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
    msg.setTimeStamp(0.16927550789505386);
    msg.setSource(61232U);
    msg.setSourceEntity(78U);
    msg.setDestination(51954U);
    msg.setDestinationEntity(232U);
    msg.timestamp_last_service = 0.22863240329177048;
    msg.time_next_service = 0.5277117261778947;
    msg.time_motor_next_service = 0.4291371825124066;
    msg.time_idle_ground = 0.4251865928018783;
    msg.time_idle_air = 0.2685039289693155;
    msg.time_idle_water = 0.02077643740482471;
    msg.time_idle_underwater = 0.6671167636558533;
    msg.time_idle_unknown = 0.09078869741310658;
    msg.time_motor_ground = 0.5764217745458651;
    msg.time_motor_air = 0.5029842671953396;
    msg.time_motor_water = 0.9027782151763712;
    msg.time_motor_underwater = 0.2153651522304647;
    msg.time_motor_unknown = 0.6930867063976909;
    msg.rpm_min = 10611;
    msg.rpm_max = 27831;
    msg.depth_max = 0.5417221157434421;

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
    msg.setTimeStamp(0.17519867501527253);
    msg.setSource(55981U);
    msg.setSourceEntity(194U);
    msg.setDestination(43929U);
    msg.setDestinationEntity(116U);
    msg.timestamp_last_service = 0.45748958294083475;
    msg.time_next_service = 0.8861958200758943;
    msg.time_motor_next_service = 0.7367575971875011;
    msg.time_idle_ground = 0.845135517960187;
    msg.time_idle_air = 0.21853435770620366;
    msg.time_idle_water = 0.6228390347884509;
    msg.time_idle_underwater = 0.7262622132705865;
    msg.time_idle_unknown = 0.022895939845411717;
    msg.time_motor_ground = 0.36668255003052963;
    msg.time_motor_air = 0.30827924152857156;
    msg.time_motor_water = 0.1332608986808561;
    msg.time_motor_underwater = 0.5267318345204949;
    msg.time_motor_unknown = 0.05428416468317376;
    msg.rpm_min = -8616;
    msg.rpm_max = 11105;
    msg.depth_max = 0.9715351452214196;

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
    msg.setTimeStamp(0.958117393786176);
    msg.setSource(54946U);
    msg.setSourceEntity(49U);
    msg.setDestination(439U);
    msg.setDestinationEntity(33U);
    msg.timestamp_last_service = 0.5092498791947637;
    msg.time_next_service = 0.1016804501523435;
    msg.time_motor_next_service = 0.13625065874356446;
    msg.time_idle_ground = 0.48238055263445323;
    msg.time_idle_air = 0.189135926563346;
    msg.time_idle_water = 0.6828990185368932;
    msg.time_idle_underwater = 0.2179506279179666;
    msg.time_idle_unknown = 0.005410691707068205;
    msg.time_motor_ground = 0.3765147755472501;
    msg.time_motor_air = 0.8810202725707938;
    msg.time_motor_water = 0.2552429023115286;
    msg.time_motor_underwater = 0.01895112121633502;
    msg.time_motor_unknown = 0.17502265557666952;
    msg.rpm_min = -9560;
    msg.rpm_max = -21501;
    msg.depth_max = 0.7416620835694699;

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
    msg.setTimeStamp(0.04002218648420597);
    msg.setSource(25983U);
    msg.setSourceEntity(150U);
    msg.setDestination(49324U);
    msg.setDestinationEntity(182U);
    msg.severity = 157U;
    msg.text.assign("GQBZXSNAXYTSKPDMLAEIYHKAMCVCKJTLXTLGLGSQHMNNRUCSNBJQZWWOYTRMZIRRKJBZQOYXOH");

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
    msg.setTimeStamp(0.9309799665058038);
    msg.setSource(57490U);
    msg.setSourceEntity(64U);
    msg.setDestination(64087U);
    msg.setDestinationEntity(208U);
    msg.severity = 209U;
    msg.text.assign("XHWPXLYYIKGYSHVGTRDNJKSDJTLBJOKNDMNVMTZSXRIXOFJXPTQFDBXOLRPGEMQJADZOQKGNNWYFSVNWQZYFEGDTZWLZRLKV");

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
    msg.setTimeStamp(0.009692679568135909);
    msg.setSource(59252U);
    msg.setSourceEntity(55U);
    msg.setDestination(36159U);
    msg.setDestinationEntity(62U);
    msg.severity = 121U;
    msg.text.assign("CYXNQSYBRKLDEVUVYLOAWMMHZTZEHWNVAWGCAQBOKUTHIOINGITAIYUXXSXFIYPYHFWQMKDZEHKFDEMXCCQILWVNIJVZEZJDTMQMDWYCBQNUUORVDVTPQCEGJJQKOGCOOCPRKVSSJOGJXWRJDEHUPKANLCBEFPGHVWAFBGQBUFAZRVKMZNFXIRJLAWLTBSLMTDGZROYBRSFEWNCTLPIZYXJGFQNMDSPJUXALSPHY");

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
    msg.setTimeStamp(0.41410665363388877);
    msg.setSource(62576U);
    msg.setSourceEntity(84U);
    msg.setDestination(21462U);
    msg.setDestinationEntity(232U);
    msg.channel = -7;
    msg.value = -339102786;
    msg.gain = 101U;

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
    msg.setTimeStamp(0.2515320434782864);
    msg.setSource(5731U);
    msg.setSourceEntity(237U);
    msg.setDestination(59335U);
    msg.setDestinationEntity(28U);
    msg.channel = 43;
    msg.value = 671400315;
    msg.gain = 37U;

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
    msg.setTimeStamp(0.17828690660247748);
    msg.setSource(42189U);
    msg.setSourceEntity(57U);
    msg.setDestination(53254U);
    msg.setDestinationEntity(101U);
    msg.channel = -99;
    msg.value = 1242426185;
    msg.gain = 225U;

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
    msg.setTimeStamp(0.8803081120464386);
    msg.setSource(9743U);
    msg.setSourceEntity(92U);
    msg.setDestination(41299U);
    msg.setDestinationEntity(59U);
    msg.ch01 = 0.07231542052133;
    msg.ch02 = 0.7239145868407291;
    msg.ch03 = 0.5414425550742076;
    msg.ch04 = 0.873857729292926;
    msg.ch05 = 0.46201142615470936;
    msg.ch06 = 0.804455425675715;
    msg.ch07 = 0.612332805448813;
    msg.ch08 = 0.09914451546124836;
    msg.ch09 = 0.18967580547625051;
    msg.ch10 = 0.28220118973982256;
    msg.ch11 = 0.39712962335697866;
    msg.ch12 = 0.6805442432938984;
    msg.ch13 = 0.9096147181150537;
    msg.ch14 = 0.8490527064886174;
    msg.ch15 = 0.6520110345833933;
    msg.ch16 = 0.44971835574793306;

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
    msg.setTimeStamp(0.3711442351730666);
    msg.setSource(48052U);
    msg.setSourceEntity(132U);
    msg.setDestination(38340U);
    msg.setDestinationEntity(123U);
    msg.ch01 = 0.5364073385250956;
    msg.ch02 = 0.5329146476631804;
    msg.ch03 = 0.9836809619917403;
    msg.ch04 = 0.8851769371994663;
    msg.ch05 = 0.13080430715922275;
    msg.ch06 = 0.18812417469606213;
    msg.ch07 = 0.9788650791391389;
    msg.ch08 = 0.4839217942467031;
    msg.ch09 = 0.8655682880685085;
    msg.ch10 = 0.3330177816465999;
    msg.ch11 = 0.09755497969061344;
    msg.ch12 = 0.8487170918190486;
    msg.ch13 = 0.35777379420475863;
    msg.ch14 = 0.5794913796587216;
    msg.ch15 = 0.9186852147475094;
    msg.ch16 = 0.22658593942201688;

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
    msg.setTimeStamp(0.9542124941995938);
    msg.setSource(58372U);
    msg.setSourceEntity(128U);
    msg.setDestination(38964U);
    msg.setDestinationEntity(147U);
    msg.ch01 = 0.4241319335379228;
    msg.ch02 = 0.007604830385599004;
    msg.ch03 = 0.6950793548435035;
    msg.ch04 = 0.023243445224301884;
    msg.ch05 = 0.09815395269992666;
    msg.ch06 = 0.11798439037332753;
    msg.ch07 = 0.9842619725027068;
    msg.ch08 = 0.11877707298161477;
    msg.ch09 = 0.37560985806637537;
    msg.ch10 = 0.7482324189254085;
    msg.ch11 = 0.2947807273198284;
    msg.ch12 = 0.5017138460476357;
    msg.ch13 = 0.042872535261057276;
    msg.ch14 = 0.7908605951121208;
    msg.ch15 = 0.363414658680824;
    msg.ch16 = 0.6236854520295065;

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
    msg.setTimeStamp(0.5798543844195084);
    msg.setSource(44790U);
    msg.setSourceEntity(252U);
    msg.setDestination(5974U);
    msg.setDestinationEntity(162U);
    msg.op = 106U;
    msg.lat = 0.9776701228195138;
    msg.lon = 0.042351939055327636;
    msg.height = 0.9598646197222989;
    msg.depth = 0.7500892344917456;
    msg.alt = 0.3262474542762578;

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
    msg.setTimeStamp(0.43830590115851964);
    msg.setSource(17815U);
    msg.setSourceEntity(173U);
    msg.setDestination(11368U);
    msg.setDestinationEntity(41U);
    msg.op = 243U;
    msg.lat = 0.21220092326102102;
    msg.lon = 0.10759834349958641;
    msg.height = 0.5066757941055142;
    msg.depth = 0.11474428309374807;
    msg.alt = 0.3176402803217919;

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
    msg.setTimeStamp(0.006269613260225793);
    msg.setSource(15271U);
    msg.setSourceEntity(242U);
    msg.setDestination(9670U);
    msg.setDestinationEntity(239U);
    msg.op = 227U;
    msg.lat = 0.8917958326034512;
    msg.lon = 0.30342187080353533;
    msg.height = 0.4610472603741984;
    msg.depth = 0.9878581175881266;
    msg.alt = 0.8560917270676138;

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
    msg.setTimeStamp(0.9499399470415205);
    msg.setSource(47920U);
    msg.setSourceEntity(86U);
    msg.setDestination(26605U);
    msg.setDestinationEntity(120U);
    msg.direction = 0.29632132996217597;
    msg.speed = 0.7980779689395682;
    msg.turbulence = 0.6318017558505702;

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
    msg.setTimeStamp(0.8644928870847342);
    msg.setSource(47337U);
    msg.setSourceEntity(252U);
    msg.setDestination(45260U);
    msg.setDestinationEntity(194U);
    msg.direction = 0.3612789011383186;
    msg.speed = 0.15912116781572017;
    msg.turbulence = 0.8360076239509914;

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
    msg.setTimeStamp(0.6019603962297416);
    msg.setSource(60611U);
    msg.setSourceEntity(98U);
    msg.setDestination(44403U);
    msg.setDestinationEntity(175U);
    msg.direction = 0.34837281376956375;
    msg.speed = 0.16415249715837044;
    msg.turbulence = 0.490174624384098;

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
    msg.setTimeStamp(0.27020157054361904);
    msg.setSource(57649U);
    msg.setSourceEntity(130U);
    msg.setDestination(42286U);
    msg.setDestinationEntity(168U);
    msg.msg_type.assign("SDZTWIPXKQNBMASOEZIJWPGDPNLAMNHLEDMHZVSFXKVFT");
    msg.sensor_class.assign("OXOQIIANWKDGIRQULDTYOZRIFKFSJFRPGWTFVAWPANZCBWSQODQXPFAYJJXKKJQXMLEZLYBRGAIDVHNTFMGXLVEVAZJXSHBRTHSPSCQVCMYCVAESEUCEJDJXBGWTUWATLWCWHWLGRFVRJCKWBBZLIXNQMGLDGMPGVYIHEJUYXKMVOMUBRJBQTVNYHPLHISOSNNZYNATFCZBHFZQOUR");
    msg.mmsi.assign("WJPIELYTJZNPDLUSKFBTMIFOSBZWKTDKBYESNFOOMXIQEQEYGMAAWHHROYVXNPSRUZDAXNJDNJRJPJDEMKOXCNQMNSNMNHZYBHALOQVLGQCJHQXLGUJCFTWTXFMAIPCEPSTKIHKVURCYCAVHZLIGVRBUGYTWRTWMQSVOXVAWLOQKBFUFCP");
    msg.callsign.assign("YWXZCBEGUSCACHNVIKFNXWEMZKOIMPDCEQHWHPLQDJEBZJXPJYOVYWVYPGYTKOGJTUNXVVBRBBAHIXEQUGNBSSJUIBDCOEWFLKIPDSJUNLSTRUICPXEPROMALZKVFZTMAYOKNFVWRJAAJHUGZJZHIBIDBNSQDHQGYTHSNXLRREAG");
    msg.name.assign("EWIOZJKRELGTUVLXIWTTCIJCYBUOBVIGGUGXAFGRWKQNJRGTHPBDKVHISCODZJVUQFCYOJXMGXKLJDIZEGBAUYSYMIDQCZKDELFVZGWMERPQDPLVDAEPZBIOWHNTLEWKNBMZVPDEOTWLSACHXRMSWKLULPEYMXCOFHDBFNAKGXHQERVVOUMRPWAXQFFHUUPHARBH");
    msg.nav_status = 162U;
    msg.type_and_cargo = 75U;
    msg.lat = 0.26548243158295914;
    msg.lon = 0.5567832093199954;
    msg.course = 0.4999638397366035;
    msg.speed = 0.0883492193181763;
    msg.dist = 0.13909001593578385;
    msg.a = 0.4726179266701964;
    msg.b = 0.6648951829264916;
    msg.c = 0.5012042567755537;
    msg.d = 0.772466311308335;
    msg.draught = 0.49927388572499143;

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
    msg.setTimeStamp(0.9704685795331378);
    msg.setSource(55997U);
    msg.setSourceEntity(223U);
    msg.setDestination(442U);
    msg.setDestinationEntity(79U);
    msg.msg_type.assign("QXRXOSCXJNBNRILZMPTTKUWVLGVXGMCLAJTJUBIMFWRAFFGZYCYFDCVDBZGQMRLYANERXNUSWASNWGGTSBLYUUEBVLAOQYLWBZPFZBNWPJCHZMEOOHQAUPCQKQENTHDHEITJHUDKHDCSOGYKGBKSMPERCJSHUFFLWWYUDPXIIOKVIXVJSUTKJMIDLLOHIPSIPRABXPNMFOQRXO");
    msg.sensor_class.assign("VTPNFHPYRDAMMGOICYOEBWOZLJFIBZSNFPZRKBAJEOAWVTUCTZHPVWENGKJPOJ");
    msg.mmsi.assign("OFBHVSOSKYFFTPHDSVCIQDUUOLBPOPSQHWGIEBLQFSEYEBVZAWAMBLPGZHGTRIUJZLYGNMUXQRSAQOJXOQGZJBXATVJZSOMBJHMHYYDXPTWEIZOGIDKAZKAHSHNCQFLXDARGKDPSPOLXNTXCUREPNDHPEVJQVVEMUXWWTBTKIKCW");
    msg.callsign.assign("RRALXCQCRAXODVMMYNEBMTDKAVSECSWWHNRNRUXQZHYQITHMXVEPBYCFRXKLLLVCKOFGUKRISFPTCCKEGZTDMNISEEWBGJLCRJRITQFWKXNYBETFQKBFNAGNRTKDGODAPBJQNKDUDDMHXGSEOUUFHWZDKJQMLLYPZZQFMJDNYSXAIHPPLVJHBFXOZUASIWPBEZYUGOPTQGVWVOVCABSCSTGHEJOWSVPTJXAOGJ");
    msg.name.assign("PNXEJLINBTOLETNTXXXNPLBPCANOHIAEIZDKBLPFWJEGOUHNYFCQRDUMUQHGXNYYEYQFQDPVUTRJAWWVHOCYBDBXEVROKSPRXRSOIJIGKKKRGMYKMBJFAJHZAEEZWOSW");
    msg.nav_status = 44U;
    msg.type_and_cargo = 41U;
    msg.lat = 0.642667526162204;
    msg.lon = 0.31303025334526;
    msg.course = 0.11149562640190147;
    msg.speed = 0.7546513178682344;
    msg.dist = 0.08628465618675918;
    msg.a = 0.14152990653812014;
    msg.b = 0.5632776323923756;
    msg.c = 0.6405351633516889;
    msg.d = 0.18393123702172387;
    msg.draught = 0.7933952853154796;

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
    msg.setTimeStamp(0.22667553320093448);
    msg.setSource(1539U);
    msg.setSourceEntity(224U);
    msg.setDestination(25531U);
    msg.setDestinationEntity(11U);
    msg.msg_type.assign("KDBDFANZNPBHTROFDHOVQXPKUOLNAUMTMLQRVVVREAKNOEWLWVJRZRKTNEXGTGMJADCBMUMXRVPHRHIHTSPLRCLBNBFQOTVKGBULKHKCQCBHTAVWZLYDFCYGJCKSIZXDNWNCEOUTG");
    msg.sensor_class.assign("WMDEXWQCDVMRHHBOGAIAVULATIRCHNCIOFFYGAWDJCXJFEMHXKGRND");
    msg.mmsi.assign("MPNLJRRAERRPDAYDBUSAPGJQQURLTGGEFUSIBMOVDOMIYTNHZTYSWUFNQOFFBGOIDXGDCYTJQYVEEVPSIWYXJKORKSJFJWCGFNXSPCQDBWHDVUAAZANJKZSTHCGTFODIZFFAOXYAHBCVNKMZPIHBHWLKVQLWCHNSTFWZYPCXXTSHXIMLEEHITGMGDCOQMCKLYUMPWBRPAWUUZPAEVCLVOZMGB");
    msg.callsign.assign("LVWUTYKUZUNZGQEIAVREWXBSOGKJEZPIUNR");
    msg.name.assign("QVWGBKIVDFLWGVAXSDMXWAYOMXDTEFOTVFWKQDKVARMIDPKM");
    msg.nav_status = 111U;
    msg.type_and_cargo = 35U;
    msg.lat = 0.6897032841767178;
    msg.lon = 0.9971954822834341;
    msg.course = 0.5994406985148049;
    msg.speed = 0.7287834832099886;
    msg.dist = 0.48631718476992525;
    msg.a = 0.8228375619323565;
    msg.b = 0.2049935297578951;
    msg.c = 0.08242059097879906;
    msg.d = 0.939015648373624;
    msg.draught = 0.7931084416017344;

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
    msg.setTimeStamp(0.536742118956843);
    msg.setSource(26643U);
    msg.setSourceEntity(131U);
    msg.setDestination(172U);
    msg.setDestinationEntity(164U);
    msg.depth_at_loc.assign("OUNZQZKNZPIRBVIHXLZLHUDP");
    msg.danger.assign("LHXDGRNXEMAHUETUZTVFPXFDDZCINPMAWIIXXTDQJSJZIOOXELTMFEBZOJPSBBFJMRQRNLQGMVDCHMIVNHJMHVSKGZYDPNQNVEPDOVLASLFRSBJTBZDLTNUXVRUIKWSEAEQEXOTRIKSFZC");

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
    msg.setTimeStamp(0.7184903027223611);
    msg.setSource(55804U);
    msg.setSourceEntity(32U);
    msg.setDestination(58177U);
    msg.setDestinationEntity(225U);
    msg.depth_at_loc.assign("GHXICEEJIFSCURNIRHVCPOHAFSZGEKCZQLIBGFWUJKRVIXFMLKHPJGPINWJXXVXWUTHWWACVOTVJQTRWQYGLDRRIZSKJELMAOAG");
    msg.danger.assign("EDLPDONASKFUOTEHBIATOIGMWWNIFBMQVYNEGAWIFZKOTZPHXZMGSPAZIDNPHJCNYKVMUKKBZCVFYDYRCALVMNXEHREUV");

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
    msg.setTimeStamp(0.29673009384848104);
    msg.setSource(26590U);
    msg.setSourceEntity(167U);
    msg.setDestination(21802U);
    msg.setDestinationEntity(192U);
    msg.depth_at_loc.assign("COTCCJSDTDSVGGOXKBNMDFZFPPNNXTSQWDCMWGDYQOXXNIOZPGXITUUXHWITFUYKLKDCBJAPPKHFAFZYEBBJORBAIFXNWGVTYAWYWKQR");
    msg.danger.assign("AOCFSWOJUBZMTBNJFHVGWCQEHQGNOYAZZMZMRSTCGDNOKJHXIALCYSPNWDGZVSTFQNBVCDMBAYLIZJOFYKOGEPOICJSBIPTEEMSRKPVVTPAGPKEVKWYERQYWKRKWUIFVMMFRJTNYYFXJLVBLBIUZMGSHGXRKWAHVLFFRUTDIUKXWULEPINLTLGEDDQYAXBHCXOWXBPHRXBJDXJZROCJHSMFPQOQHZSUQMXUPHIVQTLDNCADNAIL");

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
    msg.setTimeStamp(0.5876030352677025);
    msg.setSource(30172U);
    msg.setSourceEntity(237U);
    msg.setDestination(25173U);
    msg.setDestinationEntity(6U);
    msg.time = 0.8840858284240908;
    msg.x = 0.6538614069339713;
    msg.y = 0.3945230849045088;
    msg.z = 0.678189806217749;

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
    msg.setTimeStamp(0.641102040111876);
    msg.setSource(29479U);
    msg.setSourceEntity(121U);
    msg.setDestination(2880U);
    msg.setDestinationEntity(203U);
    msg.time = 0.6625839644183598;
    msg.x = 0.207607349812032;
    msg.y = 0.9641861645127281;
    msg.z = 0.42986646373819615;

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
    msg.setTimeStamp(0.5791008489722339);
    msg.setSource(26172U);
    msg.setSourceEntity(113U);
    msg.setDestination(56189U);
    msg.setDestinationEntity(51U);
    msg.time = 0.7469759604036306;
    msg.x = 0.8735612753679084;
    msg.y = 0.4112977853884143;
    msg.z = 0.3439805676627259;

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
    msg.setTimeStamp(0.30332511758557057);
    msg.setSource(8936U);
    msg.setSourceEntity(223U);
    msg.setDestination(33295U);
    msg.setDestinationEntity(196U);
    msg.nbeams = 135U;
    msg.ncells = 186U;
    msg.coord_sys = 192U;

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
    msg.setTimeStamp(0.3621131714273528);
    msg.setSource(1014U);
    msg.setSourceEntity(226U);
    msg.setDestination(15261U);
    msg.setDestinationEntity(11U);
    msg.nbeams = 201U;
    msg.ncells = 106U;
    msg.coord_sys = 28U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.7773473480488936;
    msg.profile.push_back(tmp_msg_0);

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
    msg.setTimeStamp(0.28286666011765504);
    msg.setSource(52022U);
    msg.setSourceEntity(196U);
    msg.setDestination(46737U);
    msg.setDestinationEntity(35U);
    msg.nbeams = 130U;
    msg.ncells = 199U;
    msg.coord_sys = 9U;
    IMC::CurrentProfileCell tmp_msg_0;
    tmp_msg_0.cell_position = 0.8568332354204193;
    IMC::ADCPBeam tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.vel = 0.32210687884881695;
    tmp_tmp_msg_0_0.amp = 0.30344249931014344;
    tmp_tmp_msg_0_0.cor = 76U;
    tmp_msg_0.beams.push_back(tmp_tmp_msg_0_0);
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
    msg.setTimeStamp(0.4496891523584826);
    msg.setSource(57692U);
    msg.setSourceEntity(150U);
    msg.setDestination(43954U);
    msg.setDestinationEntity(99U);
    msg.cell_position = 0.336323050471807;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.0733786708110864;
    tmp_msg_0.amp = 0.49776962453543183;
    tmp_msg_0.cor = 121U;
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
    msg.setTimeStamp(0.08885067609785702);
    msg.setSource(32926U);
    msg.setSourceEntity(67U);
    msg.setDestination(7464U);
    msg.setDestinationEntity(72U);
    msg.cell_position = 0.828578362274795;
    IMC::ADCPBeam tmp_msg_0;
    tmp_msg_0.vel = 0.9019360963426359;
    tmp_msg_0.amp = 0.8435286961157223;
    tmp_msg_0.cor = 42U;
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
    msg.setTimeStamp(0.06500022942964101);
    msg.setSource(30682U);
    msg.setSourceEntity(253U);
    msg.setDestination(9628U);
    msg.setDestinationEntity(61U);
    msg.cell_position = 0.6733272904826272;

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
    msg.setTimeStamp(0.6772282128741997);
    msg.setSource(31809U);
    msg.setSourceEntity(99U);
    msg.setDestination(41135U);
    msg.setDestinationEntity(22U);
    msg.vel = 0.5120663922830997;
    msg.amp = 0.08978664293731708;
    msg.cor = 124U;

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
    msg.setTimeStamp(0.29695382475964305);
    msg.setSource(37796U);
    msg.setSourceEntity(66U);
    msg.setDestination(57847U);
    msg.setDestinationEntity(233U);
    msg.vel = 0.2747240422595558;
    msg.amp = 0.17410365875816436;
    msg.cor = 142U;

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
    msg.setTimeStamp(0.5426758780277882);
    msg.setSource(47172U);
    msg.setSourceEntity(111U);
    msg.setDestination(50922U);
    msg.setDestinationEntity(211U);
    msg.vel = 0.9808073841088342;
    msg.amp = 0.18285770820242175;
    msg.cor = 15U;

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
    msg.setTimeStamp(0.927013773331066);
    msg.setSource(12548U);
    msg.setSourceEntity(154U);
    msg.setDestination(29560U);
    msg.setDestinationEntity(81U);
    msg.value = 0.30808496382067896;

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
    msg.setTimeStamp(0.5783043094707642);
    msg.setSource(12817U);
    msg.setSourceEntity(204U);
    msg.setDestination(46886U);
    msg.setDestinationEntity(241U);
    msg.value = 0.18758161527307815;

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
    msg.setTimeStamp(0.8543339041151008);
    msg.setSource(29738U);
    msg.setSourceEntity(100U);
    msg.setDestination(46157U);
    msg.setDestinationEntity(102U);
    msg.value = 0.76721856788317;

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
    msg.setTimeStamp(0.29885522311712354);
    msg.setSource(39637U);
    msg.setSourceEntity(197U);
    msg.setDestination(6896U);
    msg.setDestinationEntity(85U);
    msg.sig_wave_height_hm0 = 0.07013235446248722;
    msg.wave_peak_direction = 0.24555668429414423;
    msg.wave_peak_period = 0.9794719743353293;
    msg.wave_height_wind_hm0 = 0.3932649050456708;
    msg.wave_height_swell_hm0 = 0.9688042989222272;
    msg.wave_peak_period_wind = 0.8922121546845014;
    msg.wave_peak_period_swell = 0.16055606170796544;
    msg.wave_peak_direction_wind = 0.5720083000436303;
    msg.wave_peak_direction_swell = 0.6540676014450226;
    msg.wave_mean_direction = 0.6225323899151556;
    msg.wave_mean_period_tm02 = 0.11713366420002336;
    msg.wave_height_hmax = 0.8421895303402072;
    msg.wave_height_crest = 0.22528651476197048;
    msg.wave_height_trough = 0.8688359048695607;
    msg.wave_period_tmax = 0.4009676231047492;
    msg.wave_period_tz = 0.8382672288322061;
    msg.significant_wave_height_h1_3 = 0.6349313816256817;
    msg.mean_spreading_angle = 0.26876334651066847;
    msg.first_order_spread = 0.7514877011269128;
    msg.long_crestedness_parameters = 0.36960498888558035;
    msg.heading = 0.4092096433474861;
    msg.pitch = 0.7205288980777541;
    msg.roll = 0.6976274161958936;
    msg.external_heading = 0.2949320521940805;
    msg.stdev_heading = 0.6297454195166524;
    msg.stdev_pitch = 0.27163442696004714;
    msg.stdev_roll = 0.2995000143698996;

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
    msg.setTimeStamp(0.544554032698968);
    msg.setSource(62313U);
    msg.setSourceEntity(85U);
    msg.setDestination(38898U);
    msg.setDestinationEntity(91U);
    msg.sig_wave_height_hm0 = 0.9488141413303169;
    msg.wave_peak_direction = 0.5496366980280755;
    msg.wave_peak_period = 0.7923319984715668;
    msg.wave_height_wind_hm0 = 0.3039029481997543;
    msg.wave_height_swell_hm0 = 0.8501109565548799;
    msg.wave_peak_period_wind = 0.032048533252035494;
    msg.wave_peak_period_swell = 0.1978956199727493;
    msg.wave_peak_direction_wind = 0.4623465646045569;
    msg.wave_peak_direction_swell = 0.1742070823153058;
    msg.wave_mean_direction = 0.45427782955563334;
    msg.wave_mean_period_tm02 = 0.37630985988583765;
    msg.wave_height_hmax = 0.23092451977011308;
    msg.wave_height_crest = 0.8253175316998207;
    msg.wave_height_trough = 0.5233362972788912;
    msg.wave_period_tmax = 0.8001520006943772;
    msg.wave_period_tz = 0.5583192514630854;
    msg.significant_wave_height_h1_3 = 0.5404299963064867;
    msg.mean_spreading_angle = 0.036262584149599375;
    msg.first_order_spread = 0.22065294902359944;
    msg.long_crestedness_parameters = 0.8906711085446117;
    msg.heading = 0.9792517872219858;
    msg.pitch = 0.5018602596738435;
    msg.roll = 0.38335765947181055;
    msg.external_heading = 0.8635733554514788;
    msg.stdev_heading = 0.9131638585476033;
    msg.stdev_pitch = 0.02251831293472395;
    msg.stdev_roll = 0.020434667750010127;

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
    msg.setTimeStamp(0.024182136014125);
    msg.setSource(17969U);
    msg.setSourceEntity(189U);
    msg.setDestination(47398U);
    msg.setDestinationEntity(128U);
    msg.sig_wave_height_hm0 = 0.14413412020198302;
    msg.wave_peak_direction = 0.6297222083761468;
    msg.wave_peak_period = 0.45196580102946027;
    msg.wave_height_wind_hm0 = 0.41998333619988804;
    msg.wave_height_swell_hm0 = 0.7806660028663793;
    msg.wave_peak_period_wind = 0.5809845378696904;
    msg.wave_peak_period_swell = 0.19851450940489634;
    msg.wave_peak_direction_wind = 0.05789300276136322;
    msg.wave_peak_direction_swell = 0.9672323924354626;
    msg.wave_mean_direction = 0.800068202453753;
    msg.wave_mean_period_tm02 = 0.8150806738684618;
    msg.wave_height_hmax = 0.7197155637847426;
    msg.wave_height_crest = 0.4871328847671189;
    msg.wave_height_trough = 0.5806156371807994;
    msg.wave_period_tmax = 0.19284090472988247;
    msg.wave_period_tz = 0.17135567103854954;
    msg.significant_wave_height_h1_3 = 0.5040665269334713;
    msg.mean_spreading_angle = 0.1241034318973474;
    msg.first_order_spread = 0.8973031605757926;
    msg.long_crestedness_parameters = 0.0015655733641780634;
    msg.heading = 0.22361720497921278;
    msg.pitch = 0.2602028579308897;
    msg.roll = 0.04513083064795853;
    msg.external_heading = 0.2702161901633806;
    msg.stdev_heading = 0.6020039867594169;
    msg.stdev_pitch = 0.04904868203968993;
    msg.stdev_roll = 0.09170584542998994;

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
    msg.setTimeStamp(0.03052159661609677);
    msg.setSource(22954U);
    msg.setSourceEntity(101U);
    msg.setDestination(64785U);
    msg.setDestinationEntity(28U);
    msg.name.assign("AFEISHEEVGEPVRATSWZSFHKHQNBAJIGADOCQSDLNDPWJILOULOKKNTMJZRUOSLNPNUQICLSXKABTQKJXWOOHMXGYNJCUTVGXZUHMMEBZRUYXTOJBJVDSEGHDVCAVKTPFYRMAWVEZBHCIYWAVWFDRLZGVMTCHNDQLYMYVCXAGQKQCKTOPODGFGUJQRRPIBHWFZZIBTRKECFXB");
    msg.value = 159U;

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
    msg.setTimeStamp(0.6410906230927741);
    msg.setSource(15551U);
    msg.setSourceEntity(243U);
    msg.setDestination(22487U);
    msg.setDestinationEntity(37U);
    msg.name.assign("DUAHMOSJNJJXYKMFVSYNVMWGZACFIJCOPGYCOQBGTRLXWYNIRPTUXAIZQNNXGHKQISECKXUEHSHQVPUTKAYTFFUIOTDOHTRKIWVBJFFUWQYLIATGGMLJZPWILXKHBZEDESRKFMYDXALMWMOTBWVPJJNAVSHDCORAPE");
    msg.value = 8U;

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
    msg.setTimeStamp(0.561714164080192);
    msg.setSource(1573U);
    msg.setSourceEntity(86U);
    msg.setDestination(44953U);
    msg.setDestinationEntity(214U);
    msg.name.assign("RJTMCVANJIKTZOFEVSCGPUSNLREBPCZNUULJVDUGZEDTOEFIWAFOOBAXYQBDAYPLULJRMEFEFKDKIGYVNJJGC");
    msg.value = 128U;

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
    msg.setTimeStamp(0.36075882459146436);
    msg.setSource(28790U);
    msg.setSourceEntity(102U);
    msg.setDestination(56522U);
    msg.setDestinationEntity(5U);
    msg.name.assign("FXQSIKHNGKWFLDSDBFVJONGTKPTWFHBBMJYKGLRHGEBYWRFDZCZEKXRSXAAIDFQVBPLAKKCHAHRCENXYKQPEJFTOPSFOOSB");

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
    msg.setTimeStamp(0.3176526887122011);
    msg.setSource(56669U);
    msg.setSourceEntity(212U);
    msg.setDestination(57072U);
    msg.setDestinationEntity(75U);
    msg.name.assign("TRZCYXENVUFPAAUIXHGLNTGBCKFDUUBVPGFZQTJNDXSRBDSINQUMFHRSWLQGZBSAGIVPDDEPIBOLOBMCGTKTMVAMCLQVZLYTYFPJWLVNBCOFKEGRNIYKTQENAEZPJHDRQWZHKNPTFBZQAYMXFFRJIMCOXUVETOVQOGJRNCLEPNGUBJIEJEDWXCGSYYJIMQOOKLHISX");

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
    msg.setTimeStamp(0.4133645653789685);
    msg.setSource(48907U);
    msg.setSourceEntity(230U);
    msg.setDestination(13104U);
    msg.setDestinationEntity(225U);
    msg.name.assign("SJMLSWHXFASIPEEYJCXMQKIBYJCVSNLPLDSDCAWDWGBPBEJXUHQNGIKNEDPTWHQ");

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
    msg.setTimeStamp(0.9425703186791505);
    msg.setSource(14400U);
    msg.setSourceEntity(100U);
    msg.setDestination(51358U);
    msg.setDestinationEntity(94U);
    msg.name.assign("KEJYJALYJHUMBDNWQPCJLVWONJXUSXCWFXUPIJLQVYDOJKNKESOUYMNMESTNTGHFWAFIPSLXOTYCDRIUOHWIFMVFXGVXZDQKBTDPMRIVAGYNPOISKCLXNBAPQZDLLGCRFYILNYMTCESQHAKTUSC");
    msg.value = 124U;

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
    msg.setTimeStamp(0.05009805911111542);
    msg.setSource(63780U);
    msg.setSourceEntity(124U);
    msg.setDestination(31881U);
    msg.setDestinationEntity(47U);
    msg.name.assign("KJFYPGYXNMAHMBFOLFXWTGLSXZXLGVJFFNGDNYCVKMURZISMUZUVAJEOKCQHBNJKOOFFRERPIVYQRSCTKUERMOAQVWQACRIJTCCWPNAXBHWHEVTOQZRLMHNVIWZYAPTSCJRFJNIKOUJYHSWFIMYZCHIFZBIQDQYWKMLLEDPGTDBWIYXPUQWDQOUSGENPVASVHICCAMDBBXLZTXOEZGGTWVQZJOYDBLHDKSTRDTPBXDUPUE");
    msg.value = 227U;

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
    msg.setTimeStamp(0.5978895580950443);
    msg.setSource(26814U);
    msg.setSourceEntity(174U);
    msg.setDestination(10857U);
    msg.setDestinationEntity(176U);
    msg.name.assign("YAKQIKCGKNCKCARLUDFSSWUTOMSGVEMPCROHIDGQORKJVCPRMPUFIDBVXTPBCKUDPXGXVAIXQIFNTRFBDZWLSPIQKSNMEQUJBAXYHDAVWVTJUPFUTWIZBOCNDQTWTZOOYVRFDMEJTZCWKLEFLOSZWRXJWFYAJJZENFNFQEBISKASBCNHQROEHZHIBEUTYGYTSGGYUAHNNBLPHOQJPYZDQSHVIHXVJYLWEELXZMVCGMBHLNGAGWMXDOKAUM");
    msg.value = 135U;

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
    msg.setTimeStamp(0.8108857666174735);
    msg.setSource(60267U);
    msg.setSourceEntity(33U);
    msg.setDestination(47447U);
    msg.setDestinationEntity(139U);
    msg.value = 0.6192181116346912;

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
    msg.setTimeStamp(0.8174679003016188);
    msg.setSource(35326U);
    msg.setSourceEntity(180U);
    msg.setDestination(47444U);
    msg.setDestinationEntity(86U);
    msg.value = 0.8881763103753514;

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
    msg.setTimeStamp(0.9444731148066196);
    msg.setSource(50323U);
    msg.setSourceEntity(130U);
    msg.setDestination(46571U);
    msg.setDestinationEntity(18U);
    msg.value = 0.5726611309383609;

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
    msg.setTimeStamp(0.9123239065732218);
    msg.setSource(53628U);
    msg.setSourceEntity(88U);
    msg.setDestination(57394U);
    msg.setDestinationEntity(180U);
    msg.value = 0.5536463270211763;

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
    msg.setTimeStamp(0.9703179850343507);
    msg.setSource(21715U);
    msg.setSourceEntity(154U);
    msg.setDestination(20844U);
    msg.setDestinationEntity(38U);
    msg.value = 0.24015331828822306;

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
    msg.setTimeStamp(0.7635401735468303);
    msg.setSource(3944U);
    msg.setSourceEntity(46U);
    msg.setDestination(45718U);
    msg.setDestinationEntity(13U);
    msg.value = 0.6789438424157386;

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
    msg.setTimeStamp(0.1328380266242445);
    msg.setSource(52920U);
    msg.setSourceEntity(39U);
    msg.setDestination(24188U);
    msg.setDestinationEntity(144U);
    msg.value = 0.9086679510123506;

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
    msg.setTimeStamp(0.44087619633885533);
    msg.setSource(44224U);
    msg.setSourceEntity(43U);
    msg.setDestination(1290U);
    msg.setDestinationEntity(137U);
    msg.value = 0.4782458382826983;

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
    msg.setTimeStamp(0.3060167467556568);
    msg.setSource(40541U);
    msg.setSourceEntity(206U);
    msg.setDestination(12403U);
    msg.setDestinationEntity(129U);
    msg.value = 0.5752236874245082;

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
    msg.setTimeStamp(0.04169402085657903);
    msg.setSource(191U);
    msg.setSourceEntity(145U);
    msg.setDestination(50805U);
    msg.setDestinationEntity(205U);
    msg.restriction = 14U;
    msg.reason.assign("VFUXRSWTQFTWCKNRXDAMFSUEJBHPUAYRKBCDVQLXYWYKNDOM");

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
    msg.setTimeStamp(0.6738526666081752);
    msg.setSource(36488U);
    msg.setSourceEntity(47U);
    msg.setDestination(58844U);
    msg.setDestinationEntity(57U);
    msg.restriction = 53U;
    msg.reason.assign("VNLRDGUDRHWQZFHRGKLQRHXYXJMGPAITIGKQYXSAHBUSAVBMRECCMQUAKUTUBYQEUUBDRPIPXKJNWKJNXVKPWIRFYABSDVWIYEEHDCKRLOQDLPJPPBWMWWMHAXTQXSZTTCGKTCOCXKLCBTGVZISYOELXYNAOFTBOXNJFJOAFOSHHCFNIZEFGFCDIFBFZWJUEYHEZOISVJLYIQGJMRPNJENDGCNDBMPLQMODAONRKEWVLYUZSHTVMZLVUMQS");

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
    msg.setTimeStamp(0.06065790286783734);
    msg.setSource(4662U);
    msg.setSourceEntity(93U);
    msg.setDestination(7117U);
    msg.setDestinationEntity(229U);
    msg.restriction = 9U;
    msg.reason.assign("WMZLBDTIEXQDBSDFSLRVRAXXAMMNJTKCRHTNKLWQUBKUQUKUVFKVMLMYZPYVCNRRGDNHJKSCBNQDIM");

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
    msg.setTimeStamp(0.16210822230426003);
    msg.setSource(20086U);
    msg.setSourceEntity(165U);
    msg.setDestination(57560U);
    msg.setDestinationEntity(130U);
    msg.op = 235U;
    msg.request_id = 3771312219U;
    msg.entity_name.assign("YSIFBVZYQBPGDFTTYEYRDPUAUFQBXOADKFOPULSMXWORQXHFUDGUNPRNIZUIKSVHKQWNCJGYZCBSLARTWPCKJQFBCEDLHQWIADETCOPWZBISYXVSXWPXQYMZNCHPDXRKOEHNTCWVJEHMCTSGHORKELTGHIQUMGXJOBLVZADHMAOLSXP");
    IMC::TypedEntityParameterEditor tmp_msg_0;
    tmp_msg_0.value.assign("CTRZRGHMECBEXDWAHUINJNBEMADGSGQUVFMYJLXFMU");
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
    msg.setTimeStamp(0.9243509053852202);
    msg.setSource(23892U);
    msg.setSourceEntity(158U);
    msg.setDestination(36612U);
    msg.setDestinationEntity(91U);
    msg.op = 151U;
    msg.request_id = 919653793U;
    msg.entity_name.assign("KKTZXLSTJPQYOSTUKUQMJWHGCLXVRNPRHBGALPDVOUJYZKSLBFCDAFBRUMPMHTJSNEKGIRQSTCVXEAOQGMUFNHFQEPOXCMROBGDAFKJILXIWZLWCFDAZJVELWIXYLYNZCYOVXOGQHTMNZZYOAPJTBPESGWFEAKHOWMNFGBDUJHSRIQUVWPFMBVCQRCDYALES");
    IMC::TypedEntityParameterEditor tmp_msg_0;
    tmp_msg_0.value.assign("PQFRQLARUJBDQQBHCZXYARTTIXIUBOVTVQMDOGHAJDWFMHVPITCUWCSLFNIOMBSVWOIMUULZRZMRZLLWYZUXUSQLZWJPCGNGPVEQEVHPXKBEIYLYHAEODROMMC");
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
    msg.setTimeStamp(0.02548809463571511);
    msg.setSource(64614U);
    msg.setSourceEntity(52U);
    msg.setDestination(64941U);
    msg.setDestinationEntity(146U);
    msg.op = 193U;
    msg.request_id = 3389106725U;
    msg.entity_name.assign("SJCEMJGMUOOAFJVNKKYHGFYSEZFHXAPIAFSQJRCWDMXUTSRFOPJENOZCQQEKNVIYQFBKLERAVLKPRZDBESATADCXPOXTDZFOOWAXUNWFNBXJWYNVNWVOWTQGDEGAUWJQIGIDWBUSSSETMPPZRLYLMJWJCLKCDZHITRVRLQMVNTUBKNNIQKLBIMGYUFEKMPCSXRXQHLMAYTKDFXIIZPTCAC");
    IMC::TypedEntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("YHHIWWMWCOSHTEBZQNONSDGAPSMUDKZSTSJRQRELLLEKCUXOMNZMPOQTOJAQBPFJRMDTVXWGAHHEP");
    tmp_msg_0.type = 119U;
    tmp_msg_0.default_value.assign("OBIFSOAVMGCFTQHLDTYALYEJVZF");
    tmp_msg_0.units.assign("MPFJNTOLUNXSZQZZFJCOXUQTJVEB");
    tmp_msg_0.description.assign("SWEYMAFVSWTGLGUNYPWBICAQMDFPETPDGDKBQQUDZIXBREOREMNUGOKGNOTARQKMZGILJMWOCFRSXBDHTKUOHR");
    tmp_msg_0.values_list.assign("BJPZNAODGXLQLODWSAOGQBMICESTTEMSAGJJRFUUVKXAOVBTKYUGFIANHVKQIWKXVNKQQZLQYHCCAZSYBUIXPEMRNJTKCBOXJTTVFTRVPFDNEURLWCBXWDSWUBGFLCVLYCZZQBIWHEJFBNYGTARMEWMVDCTPDJPOPRRWUNEHQLWRLRIHUPAPFCGPNFLYZTXMCHSXHKHHFXJDEZZGIZPJKSOOYKAQIG");
    tmp_msg_0.min_value = 0.6597839819480305;
    tmp_msg_0.max_value = 0.3029888348516674;
    tmp_msg_0.list_min_size = 180U;
    tmp_msg_0.list_max_size = 231U;
    tmp_msg_0.visibility = 243U;
    tmp_msg_0.scope = 128U;
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
    msg.setTimeStamp(0.16557380005299127);
    msg.setSource(2491U);
    msg.setSourceEntity(29U);
    msg.setDestination(59023U);
    msg.setDestinationEntity(170U);
    msg.name.assign("KYMFBGNPWJ");
    msg.type = 138U;
    msg.default_value.assign("MEXWTTUPHKQOMIKDEZZXRLGAINJYOURHAPRVOEZDQMYUSTNIVFM");
    msg.units.assign("EELJFAWLSZBIGBJATXENLPGMWHUGBVLEZXIZUCQCODRXKKOPTVW");
    msg.description.assign("QJTLQFZPFLAKENEIMISUPCHYMNZBHTDKSHTXLDNSMTDPBBLNJPJCZBYOPDAZDHYLGLRIJGCBYRBKTPCUJFYUNSADFRXOXWCQWEPROKHOOGEVHQIFMGVEJJRMHKECUGDLVXGKJAXKIEJINAAUVSXWHPMIFKSOAAONFTLOS");
    msg.values_list.assign("RJDJWOQTBYWACBSTV");
    msg.min_value = 0.18247097704386406;
    msg.max_value = 0.378969483734499;
    msg.list_min_size = 1U;
    msg.list_max_size = 85U;
    msg.visibility = 209U;
    msg.scope = 222U;

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
    msg.setTimeStamp(0.3137668163360243);
    msg.setSource(32954U);
    msg.setSourceEntity(196U);
    msg.setDestination(25603U);
    msg.setDestinationEntity(11U);
    msg.name.assign("YVIFKJJZCZLTGRBTSSAVHDIFORXGTXYZKWUAICJKENUHFEGOBMDJJRYIDMGEIWCIZPCLRJPCQUGUDAPNNWSGWQVSPUCQDLPU");
    msg.type = 87U;
    msg.default_value.assign("VHPJVREQODIDKSUMAJPRQWQCMZIWVBIWSSVUKEKBXN");
    msg.units.assign("DUAYCUPCDPLQHOUOJMKSCGTFAPQZCSHUIDEHYGHBDMZQMBYZGPQKXRNMJQGPQTZTMCRANONFFFCGTELKVVXCGRXXUYVIEHEWTFXJQBVJEFTODYALIRNIAUOMSCUDXEROXVDMYFHLBHSQMQPILBVJABALDJOKKSAIMEIIFULPYCRSNQZIOIEVYGZAROESGBEGYZWVKRBVYFNWHLJTUFWNOJPN");
    msg.description.assign("GUNXQGISEQDACVEFUGQHZSLSBIWFRNEMBKKVYLJAIXUMRRLQHUONMSIBBVMCROOSFPWSLDNOJTXQFZUFPDGTDHPNLIXEQUYZATXLBOPPJOTIWZWCKGIEOEMYKGYPKXVAHHGXVVOHBLHBROVADJIYYZYJYZAUATHRQGYNXCERNPSDKQTANDMGCMJQCZACYWNTIJMMPCXFFRCUXKJ");
    msg.values_list.assign("FBJKFSRKUNJTGOFFHRQEHVPDWSZJJLPEVAMUKPRKGLSQUIXHTPEGQYGMIRNVMOPBRDVCTOMABBINAYLWMIZMZFKKRHJHCZJWIRLXGDEEBOPDBXFNEONGCXLZCYJXUQVQTDWFYNIYQX");
    msg.min_value = 0.3203829091257039;
    msg.max_value = 0.34127207664944903;
    msg.list_min_size = 57U;
    msg.list_max_size = 190U;
    IMC::ValuesIf tmp_msg_0;
    tmp_msg_0.param.assign("PGPIYHIOSIVQFTIMUNHXGWFBYLBKELDYVVWIDL");
    tmp_msg_0.value.assign("ILCAHBBQPBXYTDPWXOZVBGJGWFJJEDUTBMYTWYZJPGIUGERRANKRLBAEZKHLEIEZAIHRVKEXSKWYALFVXOQSAMMUOSULWVSVFQQDVMUTWPYVJSIAYHYPHEDKXBTNGAYMRXZQECLDHQTFHFCQJPSBUQJUPNRICUQOENKIHGHXJCNABRKWOMSZJLTFUGCVGNYXYVTDZPXOVRPTKNFRRSWFNICMMOCICZLOFMBG");
    tmp_msg_0.values_list.assign("FZYMZUXLNJARPIZPONIAUWXBOYAVDRCTPOEVHNELHNY");
    msg.values_if_list.push_back(tmp_msg_0);
    msg.visibility = 64U;
    msg.scope = 110U;

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
    msg.setTimeStamp(0.06150907557230734);
    msg.setSource(44831U);
    msg.setSourceEntity(198U);
    msg.setDestination(63223U);
    msg.setDestinationEntity(242U);
    msg.name.assign("TLHVXSUBEYIZBDNSCJXVJRWLJOEFZMHSKJYMECAOACUOFSJXPBOYMHWASMXCPJUQPNFAVAQIFMFQGZPEBONZLPWVMVDYMQDCASJONGLFVUTLLKJUCLIGXXZSCWDQPTSRGQEIRMGDFMTWHDIJIUXNUBBSTKVBZIVJOHHKPYBKNTKBAGCRUQQDYILXDURORHRQZKREYZTPBKAGICYKXEGTRELFNPWNNUCQWMZ");
    msg.type = 10U;
    msg.default_value.assign("NDUSENQIOKIUHKVDBDIIEORSPDAKLNFOJGXGOZEZZYWALCQWDXKBMGVRMBGIIVRHMSBCCMLCBJJYYUEMCQPJRVVVCWUHYZRXFHHAZTMGKOQPZAHNBKTSTPRHDRUSZU");
    msg.units.assign("UWZENAUWIJDKVROGCFDRSEXOTRHVQSRIRRIKMTASIHQVUKHIETUWGFYUOHDWLSMBBBTMZBBNQDNZOMUKSMTDBDNEAPEVHOXKCWLOPJVPLWMRCQFDISOLRHAOWE");
    msg.description.assign("NFIMNRJITDPHDLYWXTDXHNWBQIPHLPGOQLBKQZBILVBCHHIFGRQCMQXEEMVFUKVYEFCSHOYDNIPOZMYLDCEETEBDKJPAQMGFZBLHKWOKOCZXGASZYKRTFASFTRXSVNPNAHWWJWNDKDAGXRALKCMZNVQRJJESBLSGHWVXTCIWGGLOVPYVUKMSCTOTWDZOSYICQVIYAKBFRJYAXIUJRMEAQHWUGXXQZGMFZP");
    msg.values_list.assign("CEYKVJQVKKSWIRICTSVDYBCTLTUGOBPSGLGWYAEKCWBHBZPNIXDSDSSHIYOFIROUXHXHXMXTNPYODSPDQJOUZHJFEMXRVFOBFLNUMZQDADFQSJBTGUMHYKYKMCGHKCDKRTNVDEIXCRMETYAJUCLNATQJNGBRFHWLZCLJZZOQBPYRNUFQAHAJFWZQ");
    msg.min_value = 0.609997391424797;
    msg.max_value = 0.6456224218511237;
    msg.list_min_size = 233U;
    msg.list_max_size = 110U;
    msg.visibility = 197U;
    msg.scope = 24U;

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
    msg.setTimeStamp(0.7509341284714091);
    msg.setSource(19415U);
    msg.setSourceEntity(224U);
    msg.setDestination(37453U);
    msg.setDestinationEntity(77U);
    msg.param.assign("ITTKHHWXLOEXPZRRYIDMPCGTAHGCVHUUKVMCTZRQXVPXEQOABAQZQIJGENNJLCWHJQCOBWGOQMOFSHNRKKTDWZGQZAQBNFPGMDFNEOFUSCGJOXYULFCOWQVHWSERGJDNLJYSATXPJFXUKMIAR");
    msg.value.assign("KRDDTWLFZOTWOGUSUDQTGAZUNWPHSEHZEKIMLGJOEBMIORSXDSYIHBXIAMXHCZQUEQSEXFCXUNEBGTHIIQ");
    msg.values_list.assign("LQBZFAICLEKIBXKJZHVRBZFEFUXRKEMEMIYPSZJVKUPJQELLGCLGRJWCUIUJWLYYADRADYSFXFCUXYMPIXTWDBWOHZGHDSYNTBTVWFDEFRTNEGXJXGKNVIOJGHESHCQOPQLDJPBAUPTBQHHWZXOMQTGSRMWYROKSS");

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
    msg.setTimeStamp(0.9651264365507668);
    msg.setSource(29238U);
    msg.setSourceEntity(234U);
    msg.setDestination(23085U);
    msg.setDestinationEntity(216U);
    msg.param.assign("URRQPLZDLXLOYZIUWUEADDYRATGCQOJOY");
    msg.value.assign("UMNWNZNRBGAXBFPMHYWELTONOIZABJDPAYQSRZQQDNCAQTDJHHXJCDQLMWLVVHVPNVATFVCERUFOP");
    msg.values_list.assign("CYLCVDFJVVSMFZSNTGRQGYUYCEWICEGLHFRRNZKOWJHZJPQZHKKIMBPTBOMFMPUDXRKALEEPEEJMKTYKURDHCUDQXCYBFOPCOAVCINIOTWJGNAUVFDHAWGXFXJCPOVKIXNAKGBIDTRQGQYJTXWPKBQSHHMXDAEQEKOXOTGBHFAQWSBDGZSYTRDRUIMVY");

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
    msg.setTimeStamp(0.25271837531377195);
    msg.setSource(607U);
    msg.setSourceEntity(185U);
    msg.setDestination(44934U);
    msg.setDestinationEntity(213U);
    msg.param.assign("KZEDBVOZPSTWFCKNXQSLEUMXLPXLKGGPSFOBHQJOARNGDRIGGGUBPFBULJAXLEBTZRIDUZRQAQUVTBBMTMDTXAJVEIKDJFORFJTKIWNJEYSQOCZ");
    msg.value.assign("IQCMPEHYTEIQSKTRRIV");
    msg.values_list.assign("KFPYCBVNRATCJGUZQNZYTACSHKXTXBSFBPPWQYDTNYBSALGPIGDXUZIDMLBIOVQOXQRWHMZWYZXECOKHZZOPQNDAHPIHHRSDYUNTRDQJIYCHWCETWIFVKBOJPXNSTOJWQBXJRBECFYLTNXLKGVKFEUPNNGEQJIIUNLUTDDRQURMGMBOAVVEJ");

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
    msg.setTimeStamp(0.1755151875958756);
    msg.setSource(12245U);
    msg.setSourceEntity(214U);
    msg.setDestination(35512U);
    msg.setDestinationEntity(166U);
    msg.op = 83U;
    msg.version.assign("CTMRAAEQNEVQQOSUPKOQBQVSXADEVAJIUUDWPTHQKXRHUCLBIRHSKMYHRBZDJFAJGTFQBZXYTGIUMNYDFWMCVAHPZLXAAPSWRODTFWJOGIJEUGTMXDHJEPGKKTKZCLJUBWBQNRMKNLGYSZPSOONJFECHLMLGJWLPNTRVAMFKCHGKSQCENHMIVZJBUXVZIRON");
    msg.description.assign("KQMNVIHGUPFMUPTBSLDWFNCIANAFEDDQKPFYKSPVXQTMBWGKGOOMNMZPNLMCYERKDDLTQCIJQCXAVYCLASXMSWFGRIISPKXHSEYUWHGDKFEUOZJGPLCCONUFJQDPBQIUVZAXJQRRZCGWLJHYSZVEKZFHYJUXPDIOCTWHEX");

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
    msg.setTimeStamp(0.14684596208642087);
    msg.setSource(28659U);
    msg.setSourceEntity(162U);
    msg.setDestination(51669U);
    msg.setDestinationEntity(137U);
    msg.op = 67U;
    msg.version.assign("WODWOMILKAZOGQVGFKTKHTAZJNOLRAQEZBXWIMUZYADYDTCOBBVSL");
    msg.description.assign("WOEEOPTICYDCYZDQEDPVGDIPDPCQHULERFWECVBYMCMGGKBXMIGSULRJNVUQNWZLTRZCPFXFCVQHVFIJRAINDZKGHOQTQPJLJ");

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
    msg.setTimeStamp(0.4518740458141124);
    msg.setSource(58127U);
    msg.setSourceEntity(149U);
    msg.setDestination(51355U);
    msg.setDestinationEntity(149U);
    msg.op = 81U;
    msg.version.assign("RZZXATECQOAJWYDUUFJEVVBVKPJIXGFPRDMCHUOLILAPPLNXNETROHUJYJJUUBLLPXSCMWTGHRDGUSGRINISXSFMDLZOCYLROKBMGSKFCJTLNEVSVRUNKSTLPZTYIERTVVMSOQVPYGRVGAYEUWJDHNF");
    msg.description.assign("NQMOPRNADLOXFNPBRJPHODYAHXYSQYTPSWZDSMQYVRBMJSCOCOWQLHFUFHJIJEUCIDTATDJWPHAXVYUBZBJEXXLT");

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
    msg.setTimeStamp(0.9566324454204349);
    msg.setSource(2867U);
    msg.setSourceEntity(127U);
    msg.setDestination(23611U);
    msg.setDestinationEntity(114U);
    msg.value = 0.3641335876291022;

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
    msg.setTimeStamp(0.007830832281374267);
    msg.setSource(32551U);
    msg.setSourceEntity(166U);
    msg.setDestination(56873U);
    msg.setDestinationEntity(13U);
    msg.value = 0.2814618345080415;

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
    msg.setTimeStamp(0.3774760805152756);
    msg.setSource(22370U);
    msg.setSourceEntity(223U);
    msg.setDestination(22548U);
    msg.setDestinationEntity(50U);
    msg.value = 0.46510308680129453;

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
    IMC::TypedEntityParameterEditor msg;
    msg.setTimeStamp(0.4201638215545599);
    msg.setSource(15283U);
    msg.setSourceEntity(184U);
    msg.setDestination(43189U);
    msg.setDestinationEntity(118U);
    msg.value.assign("ZBMWECABNSWQEPIRYXJVGMUQJIBKPXXTTKOJTMWCEGLKZWACLHPHJPSRHXQTMBXLCRTHQCLKWUJIKHWFKJHBLVLSNZLZC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameterEditor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameterEditor msg;
    msg.setTimeStamp(0.9480847151689071);
    msg.setSource(13287U);
    msg.setSourceEntity(217U);
    msg.setDestination(21544U);
    msg.setDestinationEntity(183U);
    msg.value.assign("GPCQTYILQKAZSEYEBKEMIKSKTKFHGRIVXAEFSVHGPQIMEBGTBZOFOSHMFREYSXL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameterEditor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TypedEntityParameterEditor msg;
    msg.setTimeStamp(0.35153714703880723);
    msg.setSource(48757U);
    msg.setSourceEntity(114U);
    msg.setDestination(54709U);
    msg.setDestinationEntity(7U);
    msg.value.assign("OSDVHVOSCSTQYTIUOJGZUEJNNPCMEDSCJRUPXYSEJQTFFMNKXYHFQKZQISHYFQBKFEVHXTZUMBCDNRWZLAWHBDNVZOLMPUFPRYXBOMDCLBAGXKTTSGVZNBTYR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TypedEntityParameterEditor #2", msg == *msg_d);
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
